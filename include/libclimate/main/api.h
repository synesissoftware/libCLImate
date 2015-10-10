/* /////////////////////////////////////////////////////////////////////////
 * File:        libclimate/main/api.h
 *
 * Purpose:     libCLImate core API for C programs.
 *
 * Created:     13th July 2015
 * Updated:     10th October 2015
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


#ifndef SYNSOFT_INCL_LIBCLIMATE_MAIN_H_API
#define SYNSOFT_INCL_LIBCLIMATE_MAIN_H_API

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/common.h>

#include <libclimate/internal/clasp.clasp.h>

#include <stdio.h>

/* /////////////////////////////////////////////////////////////////////////
 * API globals
 */

/** The application-defined CLASP aliases array
 */
#ifdef __cplusplus
extern "C"
#else /* ? __cplusplus */
extern
#endif /* __cplusplus */
clasp_alias_t const libCLImate_aliases[];

/* /////////////////////////////////////////////////////////////////////////
 * API callbacks
 */

/** The application-defined program entry point for C programs
 *
 * \param args A non-mutating pointer to a clasp_arguments_t structure
 *   representing the parsed and sorted command-line arguments.
 */
#ifdef __cplusplus
extern "C"
#else /* ? __cplusplus */
extern
#endif /* __cplusplus */
int
libCLImate_program_main_C(
  clasp_arguments_t const* args
);

/** The application-defined program entry point for C++ programs
 *
 * \param args A non-mutating pointer to a clasp_arguments_t structure
 *   representing the parsed and sorted command-line arguments.
 */
#ifdef __cplusplus
extern "C++"
int
libCLImate_program_main_Cpp(
  clasp_arguments_t const* args
);

# define libCLImate_program_main   libCLImate_program_main_Cpp

#else /* ? __cplusplus */

# define libCLImate_program_main   libCLImate_program_main_C

#endif /* __cplusplus */

/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

/* main */

#if defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
    defined(__cplusplus)
/** The main() implementation for C++
 */
extern "C"
int
libCLImate_main_entry_point_Cpp(
  int     argc
, char**  argv
, void*   reserved
);
#endif /* __cplusplus */

#if defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
    !defined(__cplusplus)
/** The main() implementation for C
 */
int
libCLImate_main_entry_point_C(
  int     argc
, char**  argv
, void*   reserved
);
#endif /* __cplusplus */


/* exit */

/** This function causes the executing program to exit, either by a
 * caller-supplied function, or by <code>exit</code>.
 */
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
void
libCLImate_exit_immediately(
  int   programExitCode
, void (*pfn)(int programExitCode, void* param)
, void* param
);

#if defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
    defined(__cplusplus)
/** This function causes the executing program to exit by a
 * library-internal exception throw-catch.
 */
extern "C++"
void
libCLImate_unwind_and_exit(
  int   programExitCode
);
#endif /* __cplusplus */


/* usage */

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 */
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
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
);

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 */
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
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
);

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 */
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
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
);

/** This function causes a stock-form version to be emitted, via CLASP,
 * to the given file-stream.
 */
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
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
);

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_LIBCLIMATE_MAIN_H_API */

/* ///////////////////////////// end of file //////////////////////////// */
