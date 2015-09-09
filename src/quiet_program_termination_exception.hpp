/* /////////////////////////////////////////////////////////////////////////
 * File:        quiet_program_termination_exception.hpp
 *
 * Purpose:     Definition of quiet_program_termination_exception exception
 *              class.
 *
 * Created:     13th July 2015
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
 * feature discrimination
 *
 * inheritance options:
 *
 * - none
 * - std::exception
 * - std::runtime_error
 * - stlsoft::unrecoverable
 */

#if 0
#define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE
#define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception
#define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error
#define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable
#endif /* 0 */

#if 1 && \
    !defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE) || \
    !defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
    !defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) || \
    !defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable) || \
    1
# define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception
#endif



#if defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)
# if 0 || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable) || \
     0
#  error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
# endif
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)
# if 0 || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable) || \
     0
#  error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
# endif
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
# if 0 || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable) || \
     0
#  error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
# endif
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)
# if 0 || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
     defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) || \
     0
#  error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
# endif
#else
# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <stlsoft/stlsoft.h>

#if defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)
# include <exception>
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
# include <stdexcept>
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)
# if STLSOFT_LEAD_VER >= 0x010a0000
#  include <stlsoft/exception/unrecoverable.hpp>
# else
#  include <stlsoft/error/unrecoverable.hpp>
# endif
#else
# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif

/* /////////////////////////////////////////////////////////////////////////
 * classes
 */

namespace
{

#if defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)
class NONE_exception_root_
{
public: // types
  typedef NONE_exception_root_                  class_type;
public: // construction
  explicit
  NONE_exception_root_(
    char const*  /* message */
  , int          /* exitCode */
  )
  {}
};
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
      defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
template <typename C>
class general_exception_root_
  : public C
{
public: // types
  typedef C                                     parent_class_type;
  typedef general_exception_root_<C>            class_type;
public: // construction
  explicit
  general_exception_root_(
    char const*     message
  , int          /* exitCode */
  )
    : parent_class_type(message)
  {}
};
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)
class stlsoft_unrecoverable_exception_root_
  : public STLSOFT_NS_QUAL(unrecoverable)
{
public: // types
  typedef STLSOFT_NS_QUAL(unrecoverable)        parent_class_type;
  typedef stlsoft_unrecoverable_exception_root_ class_type;
public: // construction
  explicit
  stlsoft_unrecoverable_exception_root_(
    char const*  /* message */
  , int             exitCode
  )
    : STLSOFT_NS_QUAL(unrecoverable)(handler, reinterpret_cast<void*>(exitCode))
  {}

private:
  static
  void
  handler(
    void* param
  )
  {
    ::exit(reinterpret_cast<int>(param));
  }
};
#else
# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif


#if defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)
typedef NONE_exception_root_                                          root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)
typedef general_exception_root_<STLSOFT_NS_QUAL_STD(exception)>       root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
typedef general_exception_root_<STLSOFT_NS_QUAL_STD(runtime_error)>   root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)
typedef stlsoft_unrecoverable_exception_root_                         root_type_t_;
#else
# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif

} /* anonymous namespace */

class program_termination_exception
  : public root_type_t_
{
public:
  typedef root_type_t_                    parent_class_type;
  typedef program_termination_exception   class_type;

public:
  explicit program_termination_exception(int exitCode)
    : parent_class_type(empty_(), exitCode)
    , ExitCode(exitCode)
  {}
  virtual ~program_termination_exception() = 0
  {}
private:
  program_termination_exception &operator =(program_termination_exception const&);

public:
  int const   ExitCode;

private:
  static char const* empty_()
  {
    static char const s_empty_[1] = { '\0' };

    return s_empty_;
  }
};

class quiet_program_termination_exception
  : public program_termination_exception
{
public:
  typedef program_termination_exception       parent_class_type;
  typedef quiet_program_termination_exception class_type;
public:
  explicit quiet_program_termination_exception(int exitCode)
    : parent_class_type(exitCode)
  {}
  ~quiet_program_termination_exception()
  {}
private:
  quiet_program_termination_exception &operator =(quiet_program_termination_exception const&);
};

/* ///////////////////////////// end of file //////////////////////////// */
