
#ifndef SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_H_API
#define SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_H_API

#include <stlsoft/stlsoft.h>

#ifdef STLSOFT_PPF_pragma_message_SUPPORT
# pragma message("This file " __FILE__ " is obsolete, and will be removed in a future release. Please include instead libclimate/main/api.h")
#endif

#include <libclimate/main/api.h>

/* /////////////////////////////////////////////////////////////////////////
 * backwards compatibility
 */

#define SSCLI_aliases               libCLImate_aliases

#define SSCLI_program_main_C        libCLImate_program_main_C
#define SSCLI_program_main_Cpp      libCLImate_program_main_Cpp
#define SSCLI_program_main          libCLImate_program_main

#define SSCLI_main_entry_point_C    libCLImate_main_entry_point_C
#define SSCLI_main_entry_point_Cpp  libCLImate_main_entry_point_Cpp

#define SSCLI_exit_immediately      libCLImate_exit_immediately
#define SSCLI_unwind_and_exit       libCLImate_unwind_and_exit

#define SSCLI_show_usage            libCLImate_show_usage
#define SSCLI_show_usage_header     libCLImate_show_usage_header
#define SSCLI_show_usage_body       libCLImate_show_usage_body
#define SSCLI_show_version          libCLImate_show_version

/* ////////////////////////////////////////////////////////////////////// */

#endif /* SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_H_API */

/* ///////////////////////////// end of file //////////////////////////// */
