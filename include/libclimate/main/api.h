/* /////////////////////////////////////////////////////////////////////////
 * File:    libclimate/main/api.h
 *
 * Purpose: libCLImate core API for C programs.
 *
 * Created: 13th July 2015
 * Updated: 10th March 2025
 *
 * Home:    http://github.com/synesissoftware/libCLImate/
 *
 * Copyright (c) 2019-2025, Matthew Wilson and Synesis Information Systems
 * Copyright (c) 2015-2019, Matthew Wilson and Synesis Software
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

#include <libclimate/basic_types.h>

#include <clasp/clasp.h>

#include <stdio.h>


/* /////////////////////////////////////////////////////////////////////////
 * API globals
 */

/** The application-defined CLASP specifications array.
 */
#ifdef __cplusplus
extern "C"
#else /* ? __cplusplus */
extern
#endif /* __cplusplus */
clasp_alias_t const libCLImate_specifications[];

/* for backwards compatibility */
#define libCLImate_aliases                                  libCLImate_specifications


/* /////////////////////////////////////////////////////////////////////////
 * API callbacks
 */

/** The application-defined program entry point for C programs.
 *
 * \param args A non-mutating pointer to a clasp_arguments_t structure
 *  representing the parsed and sorted command-line arguments.
 *
 * \return A value suitable for use as the process exit code.
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
 *  representing the parsed and sorted command-line arguments.
 *
 * \return A value suitable for use as the process exit code.
 */
#ifdef __cplusplus
extern "C++"
int
libCLImate_program_main_Cpp(
    clasp_arguments_t const* args
);

# define libCLImate_program_main                            libCLImate_program_main_Cpp
#else /* ? __cplusplus */

# define libCLImate_program_main                            libCLImate_program_main_C
#endif /* __cplusplus */


/* /////////////////////////////////////////////////////////////////////////
 * API functions
 */

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/* main */

#if 0
#elif defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
    defined(__cplusplus)

/** The main() implementation for C++
 *
 * \note This must be called only once in a C++ program
 *
 * \return A return code suitable for the process exit code.
 */
int
libCLImate_main_entry_point_Cpp(
    int     argc
,   char*   argv[]
,   void*   reserved
);
#endif /* __cplusplus */

#if 0
#elif defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
    !defined(__cplusplus)

/** The main() implementation for C
 *
 * \note This must be called only once in a C program
 *
 * \return A return code suitable for the process exit code.
 */
int
libCLImate_main_entry_point_C(
    int     argc
,   char*   argv[]
,   void*   reserved
);
#endif /* !__cplusplus */


/* wmain() */

/* Currently only defined for C++ and Windows, neither of which are
 * in-principle limits, just what's easiest for now.
 */
#if !defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) && \
    defined(_WIN32) && \
    defined(LIBCLIMATE_USE_wmain) && \
    defined(__cplusplus)

int
libCLImate_wmain_entry_point_Cpp(
    int         argc
,   wchar_t*    argv[]
,   void*       reserved
);
#endif /* LIBCLIMATE_USE_wmain && C++ */


/* exit */

/** This function causes the executing program to exit, either by a
 * caller-supplied function, or by <code>exit</code>.
 *
 * \param programExitCode A value suitable for use as the process exit code;
 */
void
libCLImate_exit_immediately(
    int     programExitCode
,   void  (*pfn)(int programExitCode, void* param)
,   void*   param
) /* noexcept */
;

#if 0
#elif defined(LIBCLIMATE_DOCUMENTATION_SKIP_SECTION) || \
      defined(__cplusplus)

/** This function causes the executing program to exit by a
 * library-internal exception throw-catch.
 *
 * \param programExitCode A value suitable for use as the process exit code;
 */
extern "C++"
void
libCLImate_unwind_and_exit(
    int programExitCode
);
#endif /* __cplusplus */


/* usage */

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 *
 * \return A value suitable for use as the process exit code.
 */
int
libCLImate_show_usage(
    clasp_arguments_t const*    args
,   clasp_alias_t const*        specifications
,   FILE*                       stm
,   int                         verMajor
,   int                         verMinor
,   int                         verRevision
,   int                         buildNumber
,   char const*                 programName
,   char const*                 summary
,   char const*                 copyright
,   char const*                 description
,   char const*                 usage
,   int                         showBlanksBetweenItems
);

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 */
int
libCLImate_show_usage_header(
    clasp_arguments_t const*    args
,   clasp_alias_t const*        specifications
,   FILE*                       stm
,   int                         verMajor
,   int                         verMinor
,   int                         verRevision
,   int                         buildNumber
,   char const*                 programName
,   char const*                 summary
,   char const*                 copyright
,   char const*                 description
,   char const*                 usage
,   int                         showBlanksBetweenItems
);

/** This function causes a stock-form usage to be emitted, via CLASP,
 * to the given file-stream.
 *
 * \return A value suitable for use as the process exit code.
 */
int
libCLImate_show_usage_body(
    clasp_arguments_t const*    args
,   clasp_alias_t const*        specifications
,   FILE*                       stm
,   int                         verMajor
,   int                         verMinor
,   int                         verRevision
,   int                         buildNumber
,   char const*                 programName
,   char const*                 summary
,   char const*                 copyright
,   char const*                 description
,   char const*                 usage
,   int                         showBlanksBetweenItems
);

/** This function causes a stock-form version to be emitted, via CLASP,
 * to the given file-stream.
 *
 * \return A value suitable for use as the process exit code.
 */
int
libCLImate_show_version(
    clasp_arguments_t const*    args
,   clasp_alias_t const*        specifications
,   FILE*                       stm
,   int                         verMajor
,   int                         verMinor
,   int                         verRevision
,   int                         buildNumber
,   char const*                 programName
);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */


/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_LIBCLIMATE_MAIN_H_API */

/* ///////////////////////////// end of file //////////////////////////// */

