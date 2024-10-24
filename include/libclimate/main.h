/* /////////////////////////////////////////////////////////////////////////
 * File:    libclimate/main.h
 *
 * Purpose: libCLImate implicit-main include for C programs.
 *
 * Created: 13th July 2015
 * Updated: 25th October 2024
 *
 * Home:    http://github.com/synesissoftware/libCLImate/
 *
 * Copyright (c) 2019-2024, Matthew Wilson and Synesis Information Systems
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


#ifndef SYNSOFT_INCL_LIBCLIMATE_H_MAIN
#define SYNSOFT_INCL_LIBCLIMATE_H_MAIN

/** \file libclimate/main.h
 *
 * \brief [C, C++] Implicit-main include file. By including this file in a
 *   source file the command-line entry point <code>main()</code> is
 *   defined automatically in terms of the language-appropriate CLI main
 *   implementation API function:
 *   <code>libCLImate_main_entry_point_Cpp</code> for C++;
 *   <code>libCLImate_main_entry_point_C</code> for C.
 *
 * \note This can be included in <strong>at most one</strong> translation
 *   unit within a link unit
 */

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/main/api.h>

/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

/** The program entry point, implemented in terms of
 *   <code>libCLImate_main_entry_point_Cpp</code> for C++ or
 *   <code>libCLImate_main_entry_point_C</code> for C.
 */
int
main(
  int     argc
, char**  argv
)
{
  void* reserved = NULL;

  int (*pfn)(int, char**, void*);

#ifdef __cplusplus
  pfn = libCLImate_main_entry_point_Cpp;
#else /* ? __cplusplus */
  pfn = libCLImate_main_entry_point_C;
#endif /* __cplusplus */

  return (*pfn)(argc, argv, reserved);
}

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_LIBCLIMATE_H_MAIN */

/* ///////////////////////////// end of file //////////////////////////// */
