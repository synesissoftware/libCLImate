add_subdirectory(example.C++.args.implicit_main)
add_subdirectory(example.C++.implicit_main.throw)
if(WIN32)

	if(USE_MFC)

	endif(USE_MFC)

	add_subdirectory(example.C.wmain)
endif(WIN32)
