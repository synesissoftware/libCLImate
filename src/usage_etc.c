/* /////////////////////////////////////////////////////////////////////////
 * File:        usage_etc.c
 *
 * Purpose:     Stock usage, version functions.
 *
 * Created:     6th August 2015
 * Updated:     9th September 2015
 *
 * Home:        http://synesissoftware.com/software/libclimate/
 *
 * Copyright (c) 2015, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the names
 *   of any contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/main/api.h>

#include <systemtools/clasp/clasp.h>

#include <platformstl/system/console_functions.h>

#include <stdio.h>
#include <stdlib.h>

/* /////////////////////////////////////////////////////////////////////////
 * helper functions
 */

static
int
libCLImate_get_console_width_()
{
  size_t const r = platformstl_C_get_console_width();

  return (~(size_t)0 == r) ? -1 : (int)r;
}

static
int
libCLImate_show_usage_to_(
  clasp_arguments_t const*  args
, clasp_alias_t const*      aliases
, FILE*                     stm
, int                       verMajor
, int                       verMinor
, int                       verRevision
, int                       buildNumber
, char const*               programName
, char const*               summary
, char const*               copyright
, char const*               description
, char const*               usage
, int                       showBlanksBetweenItems
, void                      (*pfnHeader)(clasp_arguments_t const*, clasp_usageinfo_t const* , clasp_alias_t const* )
, void                      (*pfnBody)(clasp_arguments_t const*, clasp_usageinfo_t const* , clasp_alias_t const* )
)
{
  clasp_usageinfo_t info  = { 0 };

  info.version.major      = verMajor;
  info.version.minor      = verMinor;
  info.version.revision   = verRevision;
  info.version.build      = buildNumber;

  info.toolName           = programName;
  info.summary            = summary;
  info.copyright          = copyright;
  info.description        = description;
  info.usage              = usage;

  info.param              = stm;
  info.width              = libCLImate_get_console_width_();
#ifdef PLATFORMSTL_OS_IS_WINDOWS
  info.assumedTabWidth    = -4;
#else /* ? OS */
  info.assumedTabWidth    = 4;
#endif /* OS */
  info.blanksBetweenItems = showBlanksBetweenItems;


  if(NULL != pfnHeader)
  {
    (*pfnHeader)(args, &info, aliases);
  }
  if(NULL != pfnBody)
  {
    (*pfnBody)(args, &info, aliases);
  }

  return (stdout == stm) ? EXIT_SUCCESS : EXIT_FAILURE;
}

/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

int
libCLImate_show_usage(
  clasp_arguments_t const*  args
, clasp_alias_t const*      aliases
, FILE*                     stm
, int                       verMajor
, int                       verMinor
, int                       verRevision
, int                       buildNumber
, char const*               programName
, char const*               summary
, char const*               copyright
, char const*               description
, char const*               usage
, int                       showBlanksBetweenItems
)
{
  return libCLImate_show_usage_to_(
    args
  , aliases
  , stm
  , verMajor
  , verMinor
  , verRevision
  , buildNumber
  , programName
  , summary
  , copyright
  , description
  , usage
  , showBlanksBetweenItems
  , clasp_showHeaderByFILE
  , clasp_showBodyByFILE
  );
}

int
libCLImate_show_usage_header(
  clasp_arguments_t const*  args
, clasp_alias_t const*      aliases
, FILE*                     stm
, int                       verMajor
, int                       verMinor
, int                       verRevision
, int                       buildNumber
, char const*               programName
, char const*               summary
, char const*               copyright
, char const*               description
, char const*               usage
, int                       showBlanksBetweenItems
)
{
  return libCLImate_show_usage_to_(
    args
  , aliases
  , stm
  , verMajor
  , verMinor
  , verRevision
  , buildNumber
  , programName
  , summary
  , copyright
  , description
  , usage
  , showBlanksBetweenItems
  , clasp_showHeaderByFILE
  , NULL
  );
}

int
libCLImate_show_usage_body(
  clasp_arguments_t const*  args
, clasp_alias_t const*      aliases
, FILE*                     stm
, int                       verMajor
, int                       verMinor
, int                       verRevision
, int                       buildNumber
, char const*               programName
, char const*               summary
, char const*               copyright
, char const*               description
, char const*               usage
, int                       showBlanksBetweenItems
)
{
  return libCLImate_show_usage_to_(
    args
  , aliases
  , stm
  , verMajor
  , verMinor
  , verRevision
  , buildNumber
  , programName
  , summary
  , copyright
  , description
  , usage
  , showBlanksBetweenItems
  , NULL
  , clasp_showBodyByFILE
  );
}

int
libCLImate_show_version(
  clasp_arguments_t const*  args
, clasp_alias_t const*      aliases
, FILE*                     stm
, int                       verMajor
, int                       verMinor
, int                       verRevision
, int                       buildNumber
, char const*               programName
)
{
  clasp_usageinfo_t info  = { 0 };

  info.version.major      = verMajor;
  info.version.minor      = verMinor;
  info.version.revision   = verRevision;
  info.version.build      = buildNumber;

  info.toolName           = programName;

  info.param              = stm;

  clasp_showVersionByFILE(args, &info, aliases);

  return (stdout == stm) ? EXIT_SUCCESS : EXIT_FAILURE;
}

/* ///////////////////////////// end of file //////////////////////////// */

