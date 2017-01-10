/* /////////////////////////////////////////////////////////////////////////
 * File:        main_entry_point_C.c
 *
 * Purpose:     Implementation of main for C-clients. The implementation
 *              employs call-around for diagnostic logging (Pantheios) and
 *              command-line argument handling (CLASP).
 *
 * Created:     12nd July 2015
 * Updated:     10th January 2017
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

#include <libclimate/internal/clasp.main.h>

#include <libclimate/internal/pantheios.extras.diagutil.h>

#include <libclimate/internal/pantheios.extras.main.h>

#include <libclimate/internal/pantheios.pantheios.h>

#include <stdarg.h>

/* /////////////////////////////////////////////////////////////////////////
 * implementation
 */

static
void
CLASP_CALLCONV CLASP_Pantheios_log_(
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
  pantheios_logvprintf(severity, fmt, args);
#endif
}

static
int
main_CLASP_(
  int     argc
, char**  argv
)
{
  unsigned const  flags = 0
                        | CLASP_F_TREAT_SINGLEHYPHEN_AS_VALUE
                        ;

  clasp_diagnostic_context_t  ctxt = { 0 };

  ctxt.pfnLog = &CLASP_Pantheios_log_;

  return clasp_main_invoke(
              argc
            , argv
            , libCLImate_program_main_C
            , NULL
            , libCLImate_aliases
            , flags
            , &ctxt
            );
}

static
int
main_memory_leak_trace_(
  int     argc
, char**  argv
)
{
  return pantheios_extras_diagutil_main_leak_trace_invoke(argc, argv, main_CLASP_);
}

/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

int
libCLImate_main_entry_point_C(
  int     argc
, char**  argv
, void*   reserved
)
{
  ((void)reserved);

  return pantheios_extras_main_invoke(argc, argv, main_memory_leak_trace_, NULL, NULL);
}

/* ///////////////////////////// end of file //////////////////////////// */
