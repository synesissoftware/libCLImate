/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.api/entry.cpp
 *
 * Purpose: Lightweight API smoke test for libCLImate headers.
 *
 * Created:  2nd September 2026
 * Updated:  2nd September 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/common.h>

#include <xtests/terse-api.h>

#include <stdlib.h>


/* /////////////////////////////////////////////////////////////////////////
 * forward declarations
 */

namespace
{

static void test_common_header();

} // anonymous namespace


/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

int main(int argc, char* argv[])
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.api", verbosity))
    {
        XTESTS_RUN_CASE(test_common_header);

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

static void test_common_header()
{
    TEST_INT_EQ(LIBCLIMATE_VER_MAJOR, 0);
    TEST_INT_NE(LIBCLIMATE_VER, 0);
}

} // anonymous namespace


/* ///////////////////////////// end of file //////////////////////////// */
