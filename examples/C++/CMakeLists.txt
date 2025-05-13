add_subdirectory(explicit_main)
add_subdirectory(implicit_main)
add_subdirectory(minimal)
add_subdirectory(throw)
if(WIN32)

	add_subdirectory(explicit_main.wmain)
endif(WIN32)
