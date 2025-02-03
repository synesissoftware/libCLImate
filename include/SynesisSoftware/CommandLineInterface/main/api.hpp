
#ifndef SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_HPP_API
#define SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_HPP_API


#include <stlsoft/stlsoft.h>

#ifdef STLSOFT_PPF_pragma_message_SUPPORT
# pragma message("This file " __FILE__ " is obsolete, and will be removed in a future release. Please include instead libclimate/main/api.hpp")
#endif

#include <libclimate/main/api.hpp>


/* /////////////////////////////////////////////////////////////////////////
 * backwards compatibility
 */

namespace SynesisSoftware
{
namespace CommandLineInterface
{
    using ::libCLImate::exit_immediately;
    using ::libCLImate::unwind_and_exit;
    using ::libCLImate::show_usage;
    using ::libCLImate::show_usage_header;
    using ::libCLImate::show_usage_body;
    using ::libCLImate::show_version;

} /* namespace CommandLineInterface */
} /* namespace SynesisSoftware */


/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_SYNESISSOFTWARE_COMMANDLINEINTERFACE_MAIN_HPP_API */

/* ///////////////////////////// end of file //////////////////////////// */
