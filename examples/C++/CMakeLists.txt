add_subdirectory(explicit_main)
add_subdirectory(implicit_main)
add_subdirectory(minimal)
add_subdirectory(throw)
if(WIN32 AND LIBCLIMATE_USE_wmain)

	add_subdirectory(explicit_main.wmain)
endif(WIN32 AND LIBCLIMATE_USE_wmain)
