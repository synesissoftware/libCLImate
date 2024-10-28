add_executable(example.C++.wmain
	diagnostics.cpp
	entry.cpp
	example.C++.wmain.cpp
)

target_link_libraries(example.C++.wmain
	PRIVATE
		core
		CLASP::core
		$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
)

if(WIN32)

	target_link_libraries(example.C++.wmain
		PRIVATE
			wininet
	)
endif(WIN32)

define_target_compile_options(example.C++.wmain)

target_link_libraries(example.C++.wmain
	PRIVATE
		Pantheios::Pantheios.core
		Pantheios::Pantheios.fe.all
		Pantheios::Pantheios.be.fprintf
		Pantheios::Pantheios.bec.fprintf
		Pantheios::Pantheios.util
)
