
#include <libclimate/main.hpp> /* include the implicit-main API header */

#ifdef LIBCLIMATE_HAS_b64
# include <b64/b64.h>
#endif

#include <clasp/clasp.h>

#ifdef LIBCLIMATE_HAS_Pantheios
# include <pantheios/pantheios.h>
# include <pantheios/frontends/stock.h>
#endif

#ifdef LIBCLIMATE_HAS_recls
# include <recls/recls.h>
#endif

#ifdef LIBCLIMATE_HAS_shwild
# include <shwild/shwild.h>
#endif

#ifdef LIBCLIMATE_HAS_UNIXem
# include <unixem/unixem.h>
#endif


#include <iomanip>
#include <iostream>

#include <cstdlib>


const int PROGRAM_VER_MAJOR =   0;
const int PROGRAM_VER_MINOR =   0;
const int PROGRAM_VER_PATCH =   0;
const int PROGRAM_VER_BUILD =   1;
#define PROGRAM_VER_LIST                                    PROGRAM_VER_MAJOR, PROGRAM_VER_MINOR, PROGRAM_VER_PATCH, PROGRAM_VER_BUILD

#define PROGRAM_NAME                                        "libver"

#ifdef LIBCLIMATE_HAS_Pantheios

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING(PROGRAM_NAME);
#endif


clasp_alias_t const libCLImate_specifications[] =
{
    CLASP_STOCK_FLAG_HELP,
    CLASP_STOCK_FLAG_VERSION,
    CLASP_FLAG(NULL, "--all-versions", "Show version of all constituents and terminate."),

    CLASP_ALIAS_ARRAY_TERMINATOR
};


template<
    typename T_stream
,   typename T_integer
>
void
version(
    T_stream&   stm
,   char const* libname
,   T_integer   libver
)
{
    stm
        << libname
        << " v"
        << ((libver >> 24) & 0xff)
        << '.'
        << ((libver >> 16) & 0xff)
        << '.'
        << ((libver >> 8) & 0xff)
        << '.'
        << ((libver >> 0) & 0xff)
        << std::endl
        ;
}


int
libCLImate_program_main(
    clasp_arguments_t const* args
)
{
    if (clasp::flag_specified(args, "--help"))
    {
        libCLImate_show_usage(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, PROGRAM_NAME, NULL, NULL, NULL, NULL, 0);

        return EXIT_SUCCESS;
    }

    if (clasp::flag_specified(args, "--version"))
    {
        libCLImate_show_version(args, libCLImate_specifications, stdout, PROGRAM_VER_LIST, PROGRAM_NAME);

        return EXIT_SUCCESS;
    }

    if (clasp::flag_specified(args, "--all-versions"))
    {
        {
            auto const libver = LIBCLIMATE_VER;

            version(std::cout, "libCLImate", libver);
        }

        std::cout
            << std::endl
            << "implemented in terms of:"
            << std::endl
            << std::endl
            ;

#ifdef LIBCLIMATE_HAS_b64

        {
            auto const libver = B64_VER;

            version(std::cout, "\tb64", libver);
        }
#endif

        {
            auto const libver = CLASP_VER;

            version(std::cout, "\tCLASP", libver);
        }

#ifdef LIBCLIMATE_HAS_Pantheios

        {
            auto const libver = PANTHEIOS_VER;

            version(std::cout, "\tPantheios", libver);
        }
#endif

#ifdef LIBCLIMATE_HAS_recls

        {
            auto const libver = RECLS_VER;

            version(std::cout, "\trecls", libver);
        }
#endif

#ifdef LIBCLIMATE_HAS_shwild

        {
            auto const libver = SHWILD_VER;

            version(std::cout, "\tshwild", libver);
        }
#endif

        {
            auto const libver = _STLSOFT_VER;

            version(std::cout, "\tSTLSoft", libver);
        }

#ifdef LIBCLIMATE_HAS_UNIXem

        {
            auto const libver = UNIXEM_VER;

            version(std::cout, "\tUNIXem", libver);
        }
#endif


        return EXIT_SUCCESS;
    }


#if 0

    if (!args.options().empty())
    {
        std::cout
            << "USAGE: unrecognised flag/option '"
            << args.options()[0].name
            << "'; use --help for usage"
            << std::endl;

        return EXIT_SUCCESS;
    }

    if (!args.values().empty())
    {
        std::cout
            << "USAGE: unrecognised value '"
            << args.values()[0].name
            << "'; use --help for usage"
            << std::endl;

        return EXIT_SUCCESS;
    }
#endif


    std::cout
        << "USAGE: no flags specified; use --help for usage"
        << std::endl;

    return EXIT_SUCCESS;
}

