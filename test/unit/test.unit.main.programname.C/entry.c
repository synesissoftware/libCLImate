/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.main.programname.C/entry.c
 *
 * Purpose: Unit test for explicit program-name propagation in the C
 *          libCLImate entry point.
 *
 * Created: 8th October 2026
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

#include <xtests/terse-api.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* /////////////////////////////////////////////////////////////////////////
 * constants
 */

static char const Test_path[] = "test.unit.main.programname.C-stderr.txt";

static char const Test_programName[] =
    WOAD_FG_RED
    "test.unit.main.programname.C"
    WOAD_RESET;


/* /////////////////////////////////////////////////////////////////////////
 * globals
 */

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] =
    PANTHEIOS_LITERAL_STRING("test.unit.main.programname.C");


/* /////////////////////////////////////////////////////////////////////////
 * application callbacks
 */

/* Intentional duplicate aliases force clasp_parseArguments() to return
 * EINVAL; clasp_main_invoke() then emits a contingent report using the
 * caller-supplied programName (the only C contingent path that prints it).
 */
clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_OPTION("-o",  "--output-file",    "specify the output-file", NULL),
    CLASP_OPTION("-o",  "--output-file",    "duplicate (forces EINVAL)", NULL),
    CLASP_SPECIFICATION_ARRAY_TERMINATOR,
};

int
libCLImate_program_main_C(
    clasp_arguments_t const* args
)
{
    ((void)args);

    return EXIT_SUCCESS;
}


/* /////////////////////////////////////////////////////////////////////////
 * forward declarations
 */

static void test_coloured_program_name_passes_through(void);


/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

int
main(
    int     argc
,   char*   argv[]
)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.main.programname.C", verbosity))
    {
        XTESTS_RUN_CASE(test_coloured_program_name_passes_through);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}


/* /////////////////////////////////////////////////////////////////////////
 * test function implementations
 */

static void
test_coloured_program_name_passes_through(void)
{
    char program_name[] = "test.unit.main.programname.C";
    char* argv[] =
    {
        program_name,
        NULL,
    };

    FILE* const redirected = freopen(Test_path, "w", stderr);

    if (NULL == redirected)
    {
        TEST_FAIL("could not redirect stderr");

        return;
    }

    {
        int const r = libCLImate_main_entry_point_C_with_program_name(
            1,
            argv,
            Test_programName,
            NULL);

        TEST_INT_NE(EXIT_SUCCESS, r);
    }

    fflush(stderr);
    fclose(redirected);

    {
        char line[4096];
        FILE* in = fopen(Test_path, "r");
        int found = 0;
        size_t const prefixLen = strlen(Test_programName);

        if (NULL == in)
        {
            remove(Test_path);

            TEST_FAIL("could not open captured stderr");

            return;
        }

        while (NULL != fgets(line, (int)sizeof(line), in))
        {
            if (0 == strncmp(line, Test_programName, prefixLen))
            {
                found = 1;

                break;
            }
        }

        fclose(in);

        TEST_BOOLEAN_TRUE(found);
    }

    remove(Test_path);
}


/* ///////////////////////////// end of file //////////////////////////// */

