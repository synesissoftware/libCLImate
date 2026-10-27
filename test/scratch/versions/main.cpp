/* /////////////////////////////////////////////////////////////////////////
 * File:    test/scratch/versions/main.cpp
 *
 * Purpose: Prints libCLImate composite version (and sibling VERs when
 *          those public headers are included).
 *
 * Created: 17th September 2026
 * Updated: 27th October 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <libclimate/version.h>

#include <woad/woad.h>

#ifdef HAS_b64
# include <b64/b64.h>
#endif

#include <clasp/clasp.h>

#ifdef HAS_Pantheios
# include <pantheios/pantheios.h>
# include <pantheios/frontends/stock.h>
#endif

#ifdef HAS_Pantheios_Extras_DiagUtil
# include <pantheios/extras/diagutil.h>
#endif

#ifdef HAS_Pantheios_Extras_Main
# include <pantheios/extras/main.h>
#endif

#ifdef HAS_recls
# include <recls/recls.h>
#endif

#ifdef HAS_shwild
# include <shwild/shwild.h>
#endif

#include <stlsoft/stlsoft.h>

#ifdef HAS_UNIXem
# include <unixem/unixem.h>
#endif

#ifdef HAS_xTests
# include <xtests/xtests.h>
#endif

#include <iomanip>
#include <iostream>

#include <stdlib.h>


#define PROGRAM_NAME                                        "versions"

#ifdef HAS_Pantheios

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING(PROGRAM_NAME);
#endif


template<
    typename T_stream
,   typename T_integer
>
void
version(
    T_stream&   stm
,   char const* prefix
,   char const* libname
,   char const* macroname
,   T_integer   libver
,   char const* version_string = nullptr
)
{
    stm
        << prefix
        << WOAD_FG_BLUE
        << libname
        << WOAD_RESET
        << ": "
        << WOAD_FG_GREEN
        << "v"
        ;

    if (nullptr != version_string)
    {
        stm << version_string;
    }
    else
    {
        stm
            << ((libver >> 24) & 0xff)
            << '.'
            << ((libver >> 16) & 0xff)
            << '.'
            << ((libver >> 8) & 0xff)
            << '.'
            << ((libver >> 0) & 0xff)
            ;
    }

    stm
        << WOAD_RESET
        << " ("
        << WOAD_FG_CYAN
        << macroname
        << WOAD_RESET
        << " = "
        << WOAD_FG_GREEN
        << "0x"
        << std::hex << std::setfill('0') << std::setw(8)
        << static_cast<unsigned>(libver)
        << std::dec
        << WOAD_RESET
        << ")"
        << std::endl
        ;
}


int main(int /* argc */, char* /* argv */[])
{
    int efferents_count = 0;

    {
        unsigned const libver = LIBCLIMATE_VER;

        version(std::cout, "", "libCLImate", "LIBCLIMATE_VER", libver);
    }

#ifdef HAS_b64

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = B64_VER;

        version(std::cout, "\t", "b64", "B64_VER", libver);
    }
#endif

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = CLASP_VER;

        version(std::cout, "\t", "CLASP", "CLASP_VER", libver);
    }

#ifdef HAS_Pantheios

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = PANTHEIOS_VER;

        version(std::cout, "\t", "Pantheios", "PANTHEIOS_VER", libver);
    }
#endif

#ifdef HAS_Pantheios_Extras_DiagUtil

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = PANTHEIOS_EXTRAS_DIAGUTIL_VER;

        version(std::cout, "\t", "Pantheios.Extras.DiagUtil", "PANTHEIOS_EXTRAS_DIAGUTIL_VER", libver);
    }
#endif

#ifdef HAS_Pantheios_Extras_Main

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = PANTHEIOS_EXTRAS_MAIN_VER;

        version(std::cout, "\t", "Pantheios.Extras.Main", "PANTHEIOS_EXTRAS_MAIN_VER", libver);
    }
#endif

#ifdef HAS_recls

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = RECLS_VER;

        version(std::cout, "\t", "recls", "RECLS_VER", libver);
    }
#endif

#ifdef HAS_shwild

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = SHWILD_VER;

        version(std::cout, "\t", "shwild", "SHWILD_VER", libver);
    }
#endif

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = _STLSOFT_VER;

        version(std::cout, "\t", "STLSoft", "_STLSOFT_VER", libver);
    }

#ifdef HAS_UNIXem

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = UNIXEM_VER;

        version(std::cout, "\t", "UNIXem", "UNIXEM_VER", libver);
    }
#endif

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = WOAD_VER;

        version(std::cout, "\t", "woad", "WOAD_VER", libver, woad::version_string());
    }

#ifdef HAS_xTests

    if (0 == efferents_count++)
    {
        std::cout << "\n" << "efferent dependencies:" << std::endl;
    }

    {
        unsigned const libver = _XTESTS_VER;

        version(std::cout, "\t", "xTests", "_XTESTS_VER", libver);
    }
#endif

    return EXIT_SUCCESS;
}

/* ///////////////////////////// end of file //////////////////////////// */

