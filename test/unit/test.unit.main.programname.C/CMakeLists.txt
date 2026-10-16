define_automated_test_program(test.unit.main.programname.C entry.c)

target_link_Pantheios_core(test.unit.main.programname.C)
target_link_libraries(test.unit.main.programname.C
	PRIVATE
		Pantheios::Pantheios.be.AnsiConsole
		Pantheios::Pantheios.bec.AnsiConsole
		Pantheios::Pantheios.fe.all
		woad::woad
)
target_link_Pantheios_util(test.unit.main.programname.C)
