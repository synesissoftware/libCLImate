add_executable(example.C++.implicit_main.throw
	diagnostics.cpp
	example.C++.implicit_main.throw.cpp
)

target_link_libraries(example.C++.implicit_main.throw
	PRIVATE
		core
		CLASP::core
		$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
)

if(WIN32)

	target_link_libraries(example.C++.implicit_main.throw
		PRIVATE
			wininet
	)
endif(WIN32)

define_target_compile_options(example.C++.implicit_main.throw)

target_link_libraries(example.C++.implicit_main.throw
	PRIVATE
		Pantheios::Pantheios.core
		Pantheios::Pantheios.fe.all
		Pantheios::Pantheios.be.fprintf
		Pantheios::Pantheios.bec.fprintf
		Pantheios::Pantheios.util
)
