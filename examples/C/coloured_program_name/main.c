/* /////////////////////////////////////////////////////////////////////////
 * File:    examples/C/coloured_program_name/main.c
 *
 * Purpose: Example program that builds a terminal-aware (coloured) program
 *          name with woad, passes it into the libCLImate C entry point, and
 *          emits stock --help / --version so that usage on a tty shows the
 *          coloured name.
 *
 * Created: 16th October 2026
 * Updated: 16th October 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/main/api.h>

#include <clasp/clasp.h>
#include <pantheios/frontends/stock.h>
#include <woad/woad.h>

/* /////////////////////////////////////////////////////////////////////////
 * constants
 */

enum
{
    PROGRAM_VER_MAJOR = 0,
    PROGRAM_VER_MINOR = 0,
    PROGRAM_VER_PATCH = 0,
    PROGRAM_VER_BUILD = 0
};

#define PROGRAM_VER_LIST                                    \
    PROGRAM_VER_MAJOR, PROGRAM_VER_MINOR, PROGRAM_VER_PATCH, PROGRAM_VER_BUILD

#define PROGRAM_NAME_PLAIN                                  \
    "example.C.coloured_program_name"


/* /////////////////////////////////////////////////////////////////////////
 * globals
 */

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING(PROGRAM_NAME_PLAIN);

/* Selected plain or coloured name; must remain valid for the duration of
 * the entry-point invocation — hence file scope (points at string
 * literals).
 */
static char const* s_programName;

clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_STOCK_FLAG_HELP,
    CLASP_STOCK_FLAG_VERSION,

    CLASP_ALIAS_ARRAY_TERMINATOR
};


/* /////////////////////////////////////////////////////////////////////////
 * application callback
 */

int
libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    if (clasp_flagIsSpecified(args, "--help"))
    {
        return libCLImate_show_usage(
            args
        ,   libCLImate_specifications
        ,   stdout
        ,   PROGRAM_VER_LIST
        ,   s_programName
        ,   "demonstrates a woad-coloured program name with libCLImate"
        ,   NULL
        ,   NULL
        ,   ""
        ,   0
        );
    }

    if (clasp_flagIsSpecified(args, "--version"))
    {
        return libCLImate_show_version(
            args
        ,   libCLImate_specifications
        ,   stdout
        ,   PROGRAM_VER_LIST
        ,   s_programName
        );
    }

    return 0;
}


/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

int
main(
    int     argc
,   char*   argv[]
)
{
    /* Probe the stream that will receive `--help` / `--version` and select
     * either a coloured or a plain program-name string accordingly.
     */
    if (woad_stream_supports_colour(stdout))
    {
        s_programName = WOAD_FG_RED PROGRAM_NAME_PLAIN WOAD_RESET;
    }
    else
    {
        s_programName = PROGRAM_NAME_PLAIN;
    }

    return libCLImate_main_entry_point_C_with_program_name(
        argc
    ,   argv
    ,   s_programName
    ,   NULL
    );
}


/* ///////////////////////////// end of file //////////////////////////// */

