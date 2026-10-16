define_automated_test_program(test.unit.main.programname entry.cpp)

target_link_Pantheios_core(test.unit.main.programname)
target_link_libraries(test.unit.main.programname
	PRIVATE
		Pantheios::Pantheios.be.AnsiConsole
		Pantheios::Pantheios.bec.AnsiConsole
		Pantheios::Pantheios.fe.all
		woad::woad
)
target_link_Pantheios_util(test.unit.main.programname)
