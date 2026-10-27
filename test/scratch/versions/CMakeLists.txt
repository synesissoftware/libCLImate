define_example_program(test.scratch.versions main.cpp)

target_link_libraries(test.scratch.versions
	PRIVATE
		woad::woad
)

if(Pantheios.Extras.DiagUtil_FOUND)

	target_link_Pantheios_Extras_DiagUtil(test.scratch.versions)
endif()

if(TARGET xTests::core)

	target_link_libraries(test.scratch.versions
		PRIVATE
			xTests::core
	)
endif()
