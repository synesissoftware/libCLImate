
#include <libclimate/main.h>
#include <libclimate/main/api.h>

#include <clasp/clasp.hpp>
#include <pantheios/pantheios.h>

#include <stdio.h>


const int PROGRAM_VER_MAJOR =   0;
const int PROGRAM_VER_MINOR =   0;
const int PROGRAM_VER_PATCH =   0;
const int PROGRAM_VER_BUILD =   0;
#define PROGRAM_VER_LIST    PROGRAM_VER_MAJOR, PROGRAM_VER_MINOR, PROGRAM_VER_PATCH, PROGRAM_VER_BUILD

#define PROGRAM_NAME                                        "contingent_report"
#define PROGRAM_SUMMARY                                     "SyLVReDxx scratch tests"
#define PROGRAM_COPYRIGHT                                   "(c) Matthew Wilson, 2019-2025"
#define PROGRAM_DESCRIPTION                                 "performs recursive search and correlation of results, executing each search in a separate thread"
#define PROGRAM_USAGE                                       "USAGE: :program_name: [ ... flags / options ... ] <search-root-1> [ ... <search-root-N> ]"

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING(PROGRAM_NAME);


clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_STOCK_FLAG_HELP,
    CLASP_STOCK_FLAG_VERSION,

    CLASP_SPECIFICATION_ARRAY_TERMINATOR
};


int libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    if (clasp_flagIsSpecified(args, "--help"))
    {
        libCLImate_show_usage(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, PROGRAM_NAME, PROGRAM_SUMMARY, PROGRAM_COPYRIGHT, PROGRAM_DESCRIPTION, PROGRAM_USAGE, 0);

        return EXIT_SUCCESS;
    }

    if (clasp_flagIsSpecified(args, "--version"))
    {
        libCLImate_show_version(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, PROGRAM_NAME);

        return EXIT_SUCCESS;
    }

#if 0

    { clasp_argument_t const* nextUnusedArg; if (0 != clasp_reportUnusedFlagsAndOptions(args, &nextUnusedArg, 0))
    {
        fprintf(stderr, "%s: unrecognised %s '%s'\n"
        ,   pantheios::getProcessIdentity()
        ,   (CLASP_ARGTYPE_OPTION == nextUnusedArg->type ? "option" : "flag")
        ,   nextUnusedArg->resolvedName.ptr
        );

        return EXIT_FAILURE;
    }}
#endif
    clasp::verify_all_flags_and_options_used(args);


    libCLImate_contingent_report_unwind_and_exit(EXIT_SUCCESS, "program completed", "this is an example");


    return EXIT_SUCCESS;
}


/* ///////////////////////////// end of file //////////////////////////// */

