/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.version/entry.cpp
 *
 * Purpose: Unit test for libCLImate version macros.
 *
 * Created:  2nd September 2026
 * Updated:  2nd September 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/version.h>

#include <xtests/terse-api.h>

#include <stdlib.h>


/* /////////////////////////////////////////////////////////////////////////
 * forward declarations
 */

namespace
{

static void test_version_macros();

} // anonymous namespace


/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

int main(int argc, char* argv[])
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.version", verbosity))
    {
        XTESTS_RUN_CASE(test_version_macros);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}


/* /////////////////////////////////////////////////////////////////////////
 * test function implementations
 */

namespace
{

static void test_version_macros()
{
    TEST_INT_EQ(LIBCLIMATE_VER_MAJOR, 0);
    TEST_INT_EQ(LIBCLIMATE_VER_MINOR, 4);
    TEST_INT_EQ(LIBCLIMATE_VER_PATCH, 1);
    TEST_INT_EQ(LIBCLIMATE_VER_ALPHABETA, 42);

    TEST_INT_EQ((LIBCLIMATE_VER >> 24) & 0xff, LIBCLIMATE_VER_MAJOR);
    TEST_INT_EQ((LIBCLIMATE_VER >> 16) & 0xff, LIBCLIMATE_VER_MINOR);
    TEST_INT_EQ((LIBCLIMATE_VER >>  8) & 0xff, LIBCLIMATE_VER_PATCH);
    TEST_INT_EQ((LIBCLIMATE_VER >>  0) & 0xff, LIBCLIMATE_VER_ALPHABETA);
}

} // anonymous namespace


/* ///////////////////////////// end of file //////////////////////////// */
