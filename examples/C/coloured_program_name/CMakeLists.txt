define_example_program(example.C.coloured_program_name main.c)

target_link_libraries(example.C.coloured_program_name
	PRIVATE
		woad::woad
)
