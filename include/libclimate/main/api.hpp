/* /////////////////////////////////////////////////////////////////////////
 * File:        libclimate/main/api.hpp
 *
 * Purpose:     libCLImate core API for C++ programs.
 *
 * Created:     13th July 2015
 * Updated:     11th October 2015
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


#ifndef SYNSOFT_INCL_LIBCLIMATE_MAIN_HPP_API
#define SYNSOFT_INCL_LIBCLIMATE_MAIN_HPP_API

#ifndef __cplusplus
# error This file may only be included in a C++ compilation unit
#endif /* __cplusplus */

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/main/api.h>

#include <libclimate/internal/clasp.clasp.hpp>

/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

namespace libCLImate
{

/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

/* exit */

inline
void
exit_immediately(
  int programExitCode
) /* noexcept */
{
  ::libCLImate_exit_immediately(programExitCode, NULL, NULL);
}

inline
void
unwind_and_exit(
  int programExitCode
)
{
  ::libCLImate_unwind_and_exit(programExitCode);
}

/* usage */

inline
int
show_usage(
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
, int                       showBlanksBetweenItems = 1
)
{
  return libCLImate_show_usage(
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
  );
}

inline
int
show_usage_header(
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
, int                       showBlanksBetweenItems = 1
)
{
  return libCLImate_show_usage_header(
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
  );
}

inline
int
show_usage_body(
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
, int                       showBlanksBetweenItems = 1
)
{
  return libCLImate_show_usage_body(
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
  );
}

inline
int
show_version(
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
  return libCLImate_show_version(
    args
  , aliases
  , stm
  , verMajor
  , verMinor
  , verRevision
  , buildNumber
  , programName
  );
}

/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

} /* namespace libCLImate */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_LIBCLIMATE_MAIN_HPP_API */

/* ///////////////////////////// end of file //////////////////////////// */
