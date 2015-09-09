/* /////////////////////////////////////////////////////////////////////////
 * File:        libclimate/implicit_link/core.h
 *
 * Purpose:     Implicit linking for libCLImate
 *
 * Created:     12th July 2015
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


/** \file libclimate/implicit_link/core.h
 *
 * \brief [C, C++] Implicit linking for Synesis Software's CLI
 */

#ifndef LIBCLIMATE_INCL_LIBCLIMATE_IMPLICIT_LINK_H_CORE
#define LIBCLIMATE_INCL_LIBCLIMATE_IMPLICIT_LINK_H_CORE

/* /////////////////////////////////////////////////////////////////////////
 * Version information
 */

#ifndef LIBCLIMATE_DOCUMENTATION_SKIP_SECTION
# define LIBCLIMATE_VER_SYNESISSOFTWARE_COMMANDLINEINTERFACE_IMPLICIT_LINK_H_CORE_MAJOR    2
# define LIBCLIMATE_VER_SYNESISSOFTWARE_COMMANDLINEINTERFACE_IMPLICIT_LINK_H_CORE_MINOR    0
# define LIBCLIMATE_VER_SYNESISSOFTWARE_COMMANDLINEINTERFACE_IMPLICIT_LINK_H_CORE_REVISION 1
# define LIBCLIMATE_VER_SYNESISSOFTWARE_COMMANDLINEINTERFACE_IMPLICIT_LINK_H_CORE_EDIT     4
#endif /* !LIBCLIMATE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <libclimate/common.h>

/* /////////////////////////////////////////////////////////////////////////
 * Macros and definitions
 */

#define LIBCLIMATE_STRINGIZE_(x)     #x
#define LIBCLIMATE_STRINGIZE(x)      LIBCLIMATE_STRINGIZE_(x)

/* /////////////////////////////////////////////////////////////////////////
 * Architecture discrimination
 */

#ifdef LIBCLIMATE_ARCH_IS_X86_
# undef LIBCLIMATE_ARCH_IS_X86_
#endif /* LIBCLIMATE_ARCH_IS_X86_ */
#ifdef LIBCLIMATE_ARCH_IS_X64_
# undef LIBCLIMATE_ARCH_IS_X64_
#endif /* LIBCLIMATE_ARCH_IS_X64_ */
#ifdef LIBCLIMATE_ARCH_IS_IA64_
# undef LIBCLIMATE_ARCH_IS_IA64_
#endif /* LIBCLIMATE_ARCH_IS_IA64_ */


#if defined(LIBCLIMATE_ARCH_IS_IA64) || \
    defined(_M_IA64)
# define LIBCLIMATE_ARCH_IS_IA64_
#elif defined(LIBCLIMATE_ARCH_IS_X64) || \
      defined(_M_X64) || \
      defined(_M_AMD64)
# define LIBCLIMATE_ARCH_IS_X64_
#elif defined(LIBCLIMATE_ARCH_IS_X86) || \
      defined(_M_IX86)
# define LIBCLIMATE_ARCH_IS_X86_
#else /* ? _M_?? */
#endif /* _M_?? */

/* /////////////////////////////////////////////////////////////////////////
 * Implicit linking
 */

#if defined(_WIN32) || \
    defined(_WIN64)

# if defined(__BORLANDC__) || \
     /* defined(__DMC__) || */ \
     defined(__INTEL_COMPILER) || \
     defined(__MWERKS__) || \
     defined(_MSC_VER)
#  if !defined(__COMO__)
#   define LIBCLIMATE_IMPLICIT_LINK_SUPPORT
#  endif /* compiler */
# endif /* compiler */

# if defined(LIBCLIMATE_IMPLICIT_LINK_SUPPORT) && \
     defined(LIBCLIMATE_NO_IMPLICIT_LINK)
#  undef LIBCLIMATE_IMPLICIT_LINK_SUPPORT
# endif /* LIBCLIMATE_IMPLICIT_LINK_SUPPORT && LIBCLIMATE_NO_IMPLICIT_LINK */

# if defined(LIBCLIMATE_IMPLICIT_LINK_SUPPORT)

  /* prefix */

#  define LIBCLIMATE_IMPL_LINK_PREFIX

  /* library basename */

#  define LIBCLIMATE_IMPL_LINK_LIBRARY_BASENAME         "libclimate"

  /* major version */

#  define LIBCLIMATE_IMPL_LINK_MAJOR_VERSION            "." LIBCLIMATE_STRINGIZE(LIBCLIMATE_VER_MAJOR)

  /* module name */

#  define LIBCLIMATE_IMPL_LINK_MODULE_NAME              ".core"

  /* compiler tag */

#  if defined(__BORLANDC__)
#   if __BORLANDC__ == 0x0550
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc55"
#   elif (__BORLANDC__ == 0x0551)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc551"
#   elif (__BORLANDC__ == 0x0560)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc56"
#   elif (__BORLANDC__ == 0x0564)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc564"
#   elif (__BORLANDC__ == 0x0582)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc582"
#   elif (0x0590 == (__BORLANDC__ & 0xfff0))
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc59x"
#   elif (0x0610 == (__BORLANDC__ & 0xfff0))
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "bc61x"
#   else /* ? __BORLANDC__ */
#    error Unrecognised value of __BORLANDC__
#   endif /* __BORLANDC__ */

/*
#  elif defined(__DMC__)
#   define LIBCLIMATE_IMPL_LINK_COMPILER_NAME           "dm"
 */

#  elif defined(__INTEL_COMPILER)
#   if __INTEL_COMPILER == 600
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl6"
#   elif __INTEL_COMPILER == 700
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl7"
#   elif __INTEL_COMPILER == 800
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl8"
#   elif __INTEL_COMPILER == 900
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl9"
#   elif __INTEL_COMPILER == 1000
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl10"
#   elif __INTEL_COMPILER == 1100
#    define   LIBCLIMATE_IMPL_LINK_COMPILER_NAME        "icl11"
#   elif __INTEL_COMPILER == 1200
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "icl12"
#   else /* ? __INTEL_COMPILER */
#    error Intel C/C++ version not supported
#   endif /* __INTEL_COMPILER */

#  elif defined(__MWERKS__)
#   if ((__MWERKS__ & 0xFF00) == 0x2400)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "cw7"
#   elif ((__MWERKS__ & 0xFF00) == 0x3000)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "cw8"
#   elif ((__MWERKS__ & 0xFF00) == 0x3200)
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "cw9"
#   else /* ? __MWERKS__ */
#    error CodeWarrior version not supported
#   endif /* __MWERKS__ */

#  elif defined(_MSC_VER)
#   if _MSC_VER == 1000
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc4"
#   elif _MSC_VER == 1020
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc42"
#   elif _MSC_VER == 1100
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc5"
#   elif _MSC_VER == 1200
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc6"
#   elif _MSC_VER == 1300
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc7"
#   elif _MSC_VER == 1310
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc71"
#   elif _MSC_VER == 1400
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc8"
#   elif _MSC_VER == 1500
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc9"
#   elif _MSC_VER == 1600
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc10"
#   elif _MSC_VER == 1700
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc11"
#   elif _MSC_VER == 1800
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc12"
#   elif _MSC_VER == 1900
#    define LIBCLIMATE_IMPL_LINK_COMPILER_NAME          "vc14"
#   else /* ? _MSC_VER */
#    error Visual C++ version not supported
#   endif /* _MSC_VER */

#  else /* ? compiler */
#   error Unrecognised compiler
#  endif /* compiler */


  /* operating system tag */

#  if defined(_STLSOFT_FORCE_ANY_COMPILER) && \
      defined(LIBCLIMATE_PLATFORM_IS_UNIX) && \
      defined(_WIN32)
#   define LIBCLIMATE_IMPL_LINK_OS_TAG                  ".unix"
#  endif /* pseudo UNIX */

#  if !defined(LIBCLIMATE_IMPL_LINK_OS_TAG)
#   define LIBCLIMATE_IMPL_LINK_OS_TAG                  ""
#  endif /* !LIBCLIMATE_IMPL_LINK_OS_TAG */


  /* architecture tag */

#  if defined(LIBCLIMATE_ARCH_IS_X86_)
#   define LIBCLIMATE_IMPL_LINK_ARCH_TAG                ""
#  elif defined(LIBCLIMATE_ARCH_IS_X64_)
#   define LIBCLIMATE_IMPL_LINK_ARCH_TAG                ".x64"
#  elif defined(LIBCLIMATE_ARCH_IS_IA64_)
#   define LIBCLIMATE_IMPL_LINK_ARCH_TAG                ".ia64"
#  endif /* arch */

#  if !defined(LIBCLIMATE_IMPL_LINK_ARCH_TAG)
#   define LIBCLIMATE_IMPL_LINK_ARCH_TAG                ""
#  endif /* !LIBCLIMATE_IMPL_LINK_ARCH_TAG */


  /* encoding tag */

#  if defined(LIBCLIMATE_USE_WIDE_STRINGS)
#   define LIBCLIMATE_IMPL_LINK_ENCODING_TAG            ".widestring"
#  else /* ? LIBCLIMATE_USE_WIDE_STRINGS */
#   define LIBCLIMATE_IMPL_LINK_ENCODING_TAG            ""
#  endif /* LIBCLIMATE_USE_WIDE_STRINGS */


  /* threading tag */

#  if defined(__MT__) || \
      defined(_REENTRANT) || \
      defined(_MT)
#   if defined(_DLL) || \
       defined(__DLL)
#    define LIBCLIMATE_IMPL_LINK_THREADING_TAG          ".dll"
#   else /* ? dll */
#    define LIBCLIMATE_IMPL_LINK_THREADING_TAG          ".mt"
#   endif /* dll */
#  else /* ? mt */
#    define LIBCLIMATE_IMPL_LINK_THREADING_TAG          ""
#  endif /* mt */


  /* NoX */

#  if defined(LIBCLIMATE_CF_NOX) && 0
#   define LIBCLIMATE_IMPL_LINK_NOX_TYPE                ".nox"
#  else /* ? LIBCLIMATE_CF_NOX */
#   define LIBCLIMATE_IMPL_LINK_NOX_TYPE                ""
#  endif /* LIBCLIMATE_CF_NOX */


  /* debug tag */

#  if defined(LIBCLIMATE_VARIANT_TEST)
#   define LIBCLIMATE_IMPL_LINK_DEBUG_TYPE              ".test"
#  elif !defined(NDEBUG) && \
        defined(_DEBUG)
#   define LIBCLIMATE_IMPL_LINK_DEBUG_TAG               ".debug"
#  else /* ? debug */
#   define LIBCLIMATE_IMPL_LINK_DEBUG_TAG               ""
#  endif /* debug */


  /* suffix */

#  define LIBCLIMATE_IMPL_LINK_SUFFIX                   ".lib"


   /* Library name is:
    *
    * [lib]<library-basename>.<major-version>.<module-name>.<compiler-name>[.<os-arch-tag>][.<char-encoding-tag>][.<threading-tag>][.<nox-tag>][.<debug-tag>].{a|lib}
    */

#  define LIBCLIMATE_IMPL_LINK_LIBRARY_NAME             \
                                                        \
    LIBCLIMATE_IMPL_LINK_PREFIX                         \
    LIBCLIMATE_IMPL_LINK_LIBRARY_BASENAME               \
    LIBCLIMATE_IMPL_LINK_MAJOR_VERSION                  \
    LIBCLIMATE_IMPL_LINK_MODULE_NAME                    \
    "." LIBCLIMATE_IMPL_LINK_COMPILER_NAME              \
    LIBCLIMATE_IMPL_LINK_OS_TAG                         \
    LIBCLIMATE_IMPL_LINK_ARCH_TAG                       \
    LIBCLIMATE_IMPL_LINK_ENCODING_TAG                   \
    LIBCLIMATE_IMPL_LINK_THREADING_TAG                  \
    LIBCLIMATE_IMPL_LINK_NOX_TYPE                       \
    LIBCLIMATE_IMPL_LINK_DEBUG_TAG                      \
    LIBCLIMATE_IMPL_LINK_SUFFIX


#  pragma message("lib: " LIBCLIMATE_IMPL_LINK_LIBRARY_NAME)

#  pragma comment(lib, LIBCLIMATE_IMPL_LINK_LIBRARY_NAME)

# endif /* LIBCLIMATE_IMPLICIT_LINK_SUPPORT */

#endif /* Win-32 || Win-64 */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !LIBCLIMATE_INCL_LIBCLIMATE_IMPLICIT_LINK_H_CORE */

/* ///////////////////////////// end of file //////////////////////////// */
