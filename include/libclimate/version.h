/* /////////////////////////////////////////////////////////////////////////
 * File:    libclimate/version.h
 *
 * Purpose: libCLImate library version.
 *
 * Created: 13th July 2015
 * Updated: 8th May 2025
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


#ifndef SYNSOFT_INCL_LIBCLIMATE_H_VERSION
#define SYNSOFT_INCL_LIBCLIMATE_H_VERSION


/* /////////////////////////////////////////////////////////////////////////
 * version information
 */

#define LIBCLIMATE_VER_MAJOR            0
#define LIBCLIMATE_VER_MINOR            4
#define LIBCLIMATE_VER_PATCH            1
#define LIBCLIMATE_VER_ALPHABETA        42

#define LIBCLIMATE_VER \
    (0\
        |   (   LIBCLIMATE_VER_MAJOR       << 24   ) \
        |   (   LIBCLIMATE_VER_MINOR       << 16   ) \
        |   (   LIBCLIMATE_VER_PATCH       <<  8   ) \
        |   (   LIBCLIMATE_VER_ALPHABETA   <<  0   ) \
    )

#define LIBCLIMATE_VER_REVISION         LIBCLIMATE_VER_PATCH

#ifndef LIBCLIMATE_DOCUMENTATION_SKIP_SECTION
 /* libCLImate completely supercedes Synesis Software Command Line Interface library */
# define SSCLI_VER_MAJOR                LIBCLIMATE_VER_MAJOR
# define SSCLI_VER_MINOR                LIBCLIMATE_VER_MINOR
# define SSCLI_VER_REVISION             LIBCLIMATE_VER_REVISION
#endif /* !LIBCLIMATE_DOCUMENTATION_SKIP_SECTION */


/* ////////////////////////////////////////////////////////////////////// */

#endif /* !SYNSOFT_INCL_LIBCLIMATE_H_VERSION */

/* ///////////////////////////// end of file //////////////////////////// */

