
macro(define_target_compile_options target_name)

	set(X_GCC_CUSTOM_WARNINGS_ "")

	if(X_GCC_CUSTOM_WARNINGS_TO_BE_SUPPRESSED)
		foreach(warning ${X_GCC_CUSTOM_WARNINGS_TO_BE_SUPPRESSED})

			list(APPEND X_GCC_CUSTOM_WARNINGS_ "-Wno-${warning}")
		endforeach()
	endif()

	set(X_MSVC_CUSTOM_WARNINGS_ "")

	if(X_MSVC_CUSTOM_WARNINGS_TO_BE_SUPPRESSED)
			foreach(warning ${X_MSVC_CUSTOM_WARNINGS_TO_BE_SUPPRESSED})

					list(APPEND X_MSVC_CUSTOM_WARNINGS_ "/wd${warning}")
			endforeach()
	endif()

	target_compile_options(${target_name}
		PRIVATE
			$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
				-Werror -Wall -Wextra -pedantic

				${GCC_WARN_NO_cxx11_long_long}
				${X_GCC_CUSTOM_WARNINGS_}
			>
			$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
				-Wno-unused-lambda-capture
			>
			$<$<CXX_COMPILER_ID:MSVC>:
				/WX /W4

				${X_MSVC_CUSTOM_WARNINGS_}
			>
	)
endmacro(define_target_compile_options)


macro(target_link_b64_OPTIONAL target_name)

	target_link_libraries(${target_name}
		PRIVATE
			$<$<BOOL:${b64_FOUND}>:b64::core>
	)
endmacro(target_link_b64_OPTIONAL)

macro(target_link_CLASP_core target_name)

	target_link_libraries(${target_name}
		PRIVATE
			CLASP::core
	)
endmacro(target_link_CLASP_core)

macro(target_link_Pantheios_core target_name)

	target_link_libraries(${target_name}
		PRIVATE
			Pantheios::Pantheios.core
	)
endmacro(target_link_Pantheios_core)

macro(target_link_Pantheios_util target_name)

	target_link_libraries(${target_name}
		PRIVATE
			Pantheios::Pantheios.util
	)
endmacro(target_link_Pantheios_util)

macro(target_link_Pantheios_Extras_DiagUtil target_name)

	target_link_libraries(${target_name}
		PRIVATE
			Pantheios.Extras.DiagUtil
	)
endmacro(target_link_Pantheios_Extras_DiagUtil)

macro(target_link_Pantheios_Extras_Main target_name)

	target_link_libraries(${target_name}
		PRIVATE
			Pantheios.Extras.Main
	)
endmacro(target_link_Pantheios_Extras_Main)

macro(target_link_STLSoft target_name)

	target_link_libraries(${target_name}
		PRIVATE
			$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
	)
endmacro(target_link_STLSoft)

macro(target_link_shwild target_name)

	target_link_libraries(${target_name}
		PRIVATE
			shwild::core
	)
endmacro(target_link_shwild)

macro(target_link_shwild_OPTIONAL target_name)

	target_link_libraries(${target_name}
		PRIVATE
			$<$<BOOL:${shwild_FOUND}>:shwild::core>
	)
endmacro(target_link_shwild_OPTIONAL)

macro(target_link_xTests target_name)

	target_link_libraries(${target_name}
		PRIVATE
			$<IF:$<VERSION_LESS:${xTests_VERSION},"0.23">,xTests::xTests.core,xTests::core>
	)
endmacro(target_link_xTests)


function(define_automated_test_program program_name entry_point_source_name)

	set(X_EXTRA_ARGUMENTS_ ${ARGN})

	add_executable(${program_name}
		${entry_point_source_name}
		${X_EXTRA_ARGUMENTS_}
	)

	target_link_libraries(${program_name}
		PRIVATE
			core
	)

	target_link_STLSoft(${program_name})
	target_link_xTests(${program_name})

	if(WIN32)

		target_link_libraries(${program_name}
			PRIVATE
				wininet
		)
	endif(WIN32)

	define_target_compile_options(${program_name})
endfunction(define_automated_test_program)


function(define_example_program program_name entry_point_source_name)

	set(X_EXTRA_ARGUMENTS_ ${ARGN})

	add_executable(${program_name}
		${entry_point_source_name}
		${X_EXTRA_ARGUMENTS_}
	)

	target_link_libraries(${program_name}
		PRIVATE
			core
	)

	# target_link_b64_OPTIONAL(${program_name}) # this brought in by Pantheios
	target_link_CLASP_core(${program_name})
	target_link_Pantheios_core(${program_name})
	target_link_libraries(${program_name}
		PRIVATE
			Pantheios::Pantheios.be.AnsiConsole
			Pantheios::Pantheios.bec.AnsiConsole
			Pantheios::Pantheios.fe.all
	)
	target_link_Pantheios_util(${program_name})
	target_link_Pantheios_Extras_Main(${program_name})
	target_link_shwild_OPTIONAL(${program_name})
	target_link_STLSoft(${program_name})

	if(WIN32)

		target_link_libraries(${program_name}
			PRIVATE
				wininet
		)
	endif(WIN32)

	define_target_compile_options(${program_name})
endfunction(define_example_program)


macro(install_file subdir file_list)

	install(
		FILES
			${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/${subdir}/${file_list}
		DESTINATION include/${PROJECT_NAME_LOWER}/${subdir}/
	)
endmacro(install_file)


# ############################## end of file ############################# #

