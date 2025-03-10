
#include <libclimate/main.h> /* include the implicit-main API header */

#include <clasp/clasp.h>
#include <pantheios/frontends/stock.h>

const int PROGRAM_VER_MAJOR =   0;
const int PROGRAM_VER_MINOR =   0;
const int PROGRAM_VER_PATCH =   0;
const int PROGRAM_VER_BUILD =   0;
#define PROGRAM_VER_LIST    PROGRAM_VER_MAJOR, PROGRAM_VER_MINOR, PROGRAM_VER_PATCH, PROGRAM_VER_BUILD

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("example.C.args.implicit_main");

clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_STOCK_FLAG_HELP,
    CLASP_STOCK_FLAG_VERSION,

    CLASP_ALIAS_ARRAY_TERMINATOR
};

int
libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    if (clasp_flagIsSpecified(args, "--help"))
    {
        libCLImate_show_usage(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, NULL, "", NULL, NULL, "", 0);

        return 0;
    }

    if (clasp_flagIsSpecified(args, "--version"))
    {
        libCLImate_show_version(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, NULL);

        return 0;
    }

    return 0;
}
