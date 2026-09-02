
#include <libclimate/main.hpp>

#include <clasp/clasp.h>
#include <pantheios/frontends/stock.h>
#include <pantheios/inserters/i.hpp>
#include <pantheios/pan.hpp>

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("example.C++.minimal");

clasp_alias_t const libCLImate_specifications[] =
{
   CLASP_ALIAS_ARRAY_TERMINATOR
};

int
libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    pan::log_NOTICE("args->numArguments=", pan::i(args->numArguments));

    return 0;
}
