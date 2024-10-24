add_executable(example.C.args.implicit_main
	diagnostics.c
	example.C.args.implicit_main.c
)

target_link_libraries(example.C.args.implicit_main
	PRIVATE
		core
		CLASP::core
		$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
)

if(WIN32)

	target_link_libraries(example.C.args.implicit_main
		PRIVATE
			wininet
	)
endif(WIN32)

define_target_compile_options(example.C.args.implicit_main)

target_link_libraries(example.C.args.implicit_main
	PRIVATE
		Pantheios::Pantheios.core
		Pantheios::Pantheios.fe.all
		Pantheios::Pantheios.be.fprintf
		Pantheios::Pantheios.bec.fprintf
		Pantheios::Pantheios.util
)
