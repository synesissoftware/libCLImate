
#include <libclimate/main/api.h>

#include <pantheios/frontends/stock.h>

PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("example.C.args");

int
main(
    int     argc
,   char*   argv[]
)
{
    return libCLImate_main_entry_point_C(argc, argv, NULL);
}


/* ///////////////////////////// end of file //////////////////////////// */

