/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.main.programname/entry.cpp
 *
 * Purpose: Unit test for explicit program-name propagation in the C++
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

#include <clasp/clasp.hpp>
#include <pantheios/frontends/stock.h>
#include <woad/woad.h>

#include <xtests/terse-api.h>

#include <platformstl/filesystem/file_lines.hpp>

#include <cstdio>
#include <cstring>
#include <stdlib.h>


/* /////////////////////////////////////////////////////////////////////////
 * constants
 */

namespace {

char const Test_path[] = "test.unit.main.programname-stderr.txt";

char const Test_programName[] =
    WOAD_FG_RED
    "test.unit.main.programname"
    WOAD_RESET;

} // anonymous namespace


/* /////////////////////////////////////////////////////////////////////////
 * globals
 */

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("test.unit.main.programname");


/* /////////////////////////////////////////////////////////////////////////
 * application callbacks
 */

extern "C"
clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_OPTION("-o",  "--output-file",    "specify the output-file", NULL),
    CLASP_SPECIFICATION_ARRAY_TERMINATOR,
};

int
libCLImate_program_main_Cpp(
    clasp_arguments_t const* args
)
{
    /* Missing required option → clasp_exception caught by libCLImate, which
     * must prefix the contingent report with the caller-supplied name.
     */
    char const* value = NULL;

    clasp::require_option(args, "--output-file", &value);

    return EXIT_SUCCESS;
}


/* /////////////////////////////////////////////////////////////////////////
 * forward declarations
 */

namespace {

static void test_coloured_program_name_passes_through();

} // anonymous namespace


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

    if (XTESTS_START_RUNNER("test.unit.main.programname", verbosity))
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

namespace {

static void
test_coloured_program_name_passes_through()
{
    char program_name[] = "test.unit.main.programname";
    char* argv[] =
    {
        program_name,
        NULL,
    };

    FILE* redirected = NULL;

#if defined(_MSC_VER)

    if (0 != ::freopen_s(&redirected, Test_path, "w", stderr))
    {
        redirected = NULL;
    }
#else /* ? _MSC_VER */

    redirected = ::freopen(Test_path, "w", stderr);
#endif /* _MSC_VER */

    if (NULL == redirected)
    {
        TEST_FAIL("could not redirect stderr");

        return;
    }

    int const r = libCLImate_main_entry_point_Cpp_with_program_name(
        1,
        argv,
        Test_programName,
        NULL);

    TEST_INT_NE(EXIT_SUCCESS, r);

    ::fflush(stderr);
    ::fclose(redirected);

    platformstl::file_lines lines(Test_path);

    REQUIRE(TEST_INT_GE(1u, lines.size()));

    bool found = false;
    size_t const prefixLen = std::strlen(Test_programName);

    for (size_t i = 0; i != lines.size(); ++i)
    {
        /* memcmp avoids MinGW -Wstring-compare on string_view::data(). */
        if (lines[i].size() >= prefixLen &&
            0 == std::memcmp(lines[i].data(), Test_programName, prefixLen))
        {
            found = true;

            break;
        }
    }

    TEST_BOOLEAN_TRUE(found);

    ::remove(Test_path);
}

} // anonymous namespace


/* ///////////////////////////// end of file //////////////////////////// */

