/* /////////////////////////////////////////////////////////////////////////
 * File:        main_entry_point_Cpp.cpp
 *
 * Purpose:     Implementation of main for C++-clients. The implementation
 *              employs call-around for diagnostic logging (Pantheios) and
 *              command-line argument handling (CLASP).
 *
 * Created:     13th July 2015
 * Updated:     27th January 2017
 *
 * Home:        http://synesissoftware.com/software/libclimate/
 *
 * Copyright (c) 2015-2017, Matthew Wilson and Synesis Software
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

#include "quiet_program_termination_exception.hpp"

#include <libclimate/internal/clasp.main.hpp>

#include <libclimate/internal/pantheios.extras.diagutil.hpp>

#include <libclimate/internal/pantheios.extras.main.hpp>

#include <libclimate/internal/pantheios.pantheios.h>

#include <stdarg.h>

/* /////////////////////////////////////////////////////////////////////////
 * feature discrimination
 */

/* /////////////////////////////////////////////////////////////////////////
 * implementation
 */

static
int
main_CLASP_inner_(
  clasp::arguments_t const* args
)
{
  try
  {
    return libCLImate_program_main_Cpp(args);
  }
  // 2. CLASP
  catch(clasp::unused_argument_exception& x)
  {
    pantheios::logprintf(
      PANTHEIOS_SEV_ALERT
    , PANTHEIOS_LITERAL_STRING("unrecognised command-line argument: %s")
    , x.optionName.c_str()
    );

    fprintf(
      stderr
    , "%s: invalid argument '%.*s'\n"
    , pantheios::getProcessIdentity()
    , int(x.optionName.size()), x.optionName.data()
    );
  }
  catch(clasp::clasp_exception &x)
  {
    pantheios::logprintf(
      PANTHEIOS_SEV_ALERT
    , PANTHEIOS_LITERAL_STRING("invalid command-line: %s")
    , x.what()
    );

    fprintf(
      stderr
    , "%s: invalid command-line: %s\n"
    , pantheios::getProcessIdentity()
    , x.what()
    );
  }

  return EXIT_FAILURE;
}

static
int
main_CLASP_outer_(
  int               argc
, clasp_char_t**    argv
)
{
  unsigned const  flags = 0
                        | CLASP_F_TREAT_SINGLEHYPHEN_AS_VALUE
                        ;

  struct CLASP_Pantheios_log
  {
    static void
    CLASP_CALLCONV          fn(
      void*                 context
    , int                   severity
    , clasp_char_t const*   fmt
    , va_list               args
    )
    {
      STLSOFT_SUPPRESS_UNUSED(context);

#if defined(PANTHEIOS_USE_WIDE_STRINGS) && \
    !defined(CLASP_USE_WIDE_STRINGS)
      STLSOFT_SUPPRESS_UNUSED(severity);
      STLSOFT_SUPPRESS_UNUSED(fmt);
      STLSOFT_SUPPRESS_UNUSED(args);
#else
      ::pantheios::logvprintf(severity, fmt, args);
#endif
    }
  };

  clasp_diagnostic_context_t  ctxt(NULL, &CLASP_Pantheios_log::fn, NULL);

  try
  {
    return clasp::main::invoke(
              argc
            , argv
            , main_CLASP_inner_
            , NULL
            , libCLImate_aliases
            , flags
            , &ctxt
//            , ST_USAGE_HELP_SUFFIX
            );
  }
  // 1. OOM failures caught by Pantheios.Extras.Main

  // 2. Some part of the program wants to finish
  catch(quiet_program_termination_exception &x)
  {
    return x.ExitCode;
  }
}

static
int
main_memory_leak_trace_(
#ifdef LIBCLIMATE_USE_wmain
  int       argc
, wchar_t** argv
#else /* ? LIBCLIMATE_USE_wmain */
  int       argc
, char**    argv
#endif /* LIBCLIMATE_USE_wmain */
)
{
  return ::pantheios::extras::diagutil::main_leak_trace::invoke(argc, argv, main_CLASP_outer_);
}

/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

extern "C"
#ifdef LIBCLIMATE_USE_wmain
int
libCLImate_wmain_entry_point_Cpp(
  int       argc
, wchar_t** argv
, void*     reserved
)
#else /* ? LIBCLIMATE_USE_wmain */
int
libCLImate_main_entry_point_Cpp(
  int       argc
, char**    argv
, void*  /* reserved */
)
#endif /* LIBCLIMATE_USE_wmain */
{
  return ::pantheios::extras::main::invoke(argc, argv, main_memory_leak_trace_);
}

/* ///////////////////////////// end of file //////////////////////////// */
