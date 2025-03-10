
#include <libclimate/main.hpp>

#include <clasp/clasp.h>
#include <pantheios/frontends/stock.h>

#include <stdio.h>
#include <stdlib.h>

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("example.C++.implicit_main.throw");

clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_ALIAS_ARRAY_TERMINATOR
};

int
libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    ((void)args);

    libCLImate::unwind_and_exit(EXIT_SUCCESS);

    fprintf(stderr, "should not be seen!\n");

    return EXIT_FAILURE;
}
