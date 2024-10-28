add_executable(example.C.args
	main.c
	example.C.args.c
)

target_link_libraries(example.C.args
	PRIVATE
		core
		CLASP::core
		$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
)

if(WIN32)

	target_link_libraries(example.C.args
		PRIVATE
			wininet
	)
endif(WIN32)

define_target_compile_options(example.C.args)

target_link_libraries(example.C.args
	PRIVATE
		Pantheios::Pantheios.core
		Pantheios::Pantheios.fe.all
		Pantheios::Pantheios.be.fprintf
		Pantheios::Pantheios.bec.fprintf
		Pantheios::Pantheios.util
)
