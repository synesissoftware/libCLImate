/* /////////////////////////////////////////////////////////////////////////
 * File:    quiet_program_termination_exception.hpp
 *
 * Purpose: Definition of quiet_program_termination_exception exception
 *          class.
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

#if 0 || \
    defined(LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_NONE) || \
    defined(LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_exception) || \
    defined(LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) || \
    defined(LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable) || \
    0

# include <stlsoft/stlsoft.h>
# ifdef LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_NONE

#  define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE
#  ifdef STLSOFT_PPF_pragma_message_SUPPORT
#   pragma message("The symbol LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_NONE is obsolete, and will be removed in a future release. Please use instead LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE")
#  endif
# endif
# ifdef LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_exception

#  define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception
#  ifdef STLSOFT_PPF_pragma_message_SUPPORT
#   pragma message("The symbol LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_exception is obsolete, and will be removed in a future release. Please use instead LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception")
#  endif
# endif
# ifdef LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error

#  define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error
#  ifdef STLSOFT_PPF_pragma_message_SUPPORT
#   pragma message("The symbol LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error is obsolete, and will be removed in a future release. Please use instead LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error")
#  endif
# endif
# ifdef LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable

#  define LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable
#  ifdef STLSOFT_PPF_pragma_message_SUPPORT
#   pragma message("The symbol LIBCLI_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable is obsolete, and will be removed in a future release. Please use instead LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable")
#  endif
# endif
#endif


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



#if 0
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)

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

#include <libclimate/internal/stlsoft.stlsoft.h>

#if 0
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)

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

#include <stlsoft/util/exception_string.hpp>
#include <stlsoft/util/exception_string_creator.hpp>


/* /////////////////////////////////////////////////////////////////////////
 * macros
 */

#if 0
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)

# define LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT
#elif ( 1 &&\
        defined(STLSOFT_COMPILER_IS_GCC) &&\
        1) &&\
      ( 0 ||\
        defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception) ||\
        defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error) ||\
        0)

# define LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT         throw()
#else

# define LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT         STLSOFT_NOEXCEPT
#endif

/* /////////////////////////////////////////////////////////////////////////
 * classes
 */

namespace libCLImate_internal
{

#if 0
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)

class NONE_exception_root_
{
public: // types
    typedef NONE_exception_root_                            class_type;
protected: // construction
    explicit
    NONE_exception_root_(
        int /* exitCode */
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
    typedef C                                               parent_class_type;
    typedef general_exception_root_<C>                      class_type;
protected:
    typedef stlsoft::exception_string                       string_type_;

protected: // construction
    explicit
    general_exception_root_(
        int /* exitCode */
    )
# if 0
# elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)
        : parent_class_type()
# elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
        : parent_class_type("program terminating")
# else
#  error
#endif
        , m_message()
    {}
    general_exception_root_(
        int          /* exitCode */
    ,   string_type_    message
    )
# if 0
# elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)
        : parent_class_type()
# elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)
        : parent_class_type("program terminating")
# else
#  error
#endif
        , m_message(message)
    {}

public: // overrides
    virtual char const* what() const STLSOFT_NOEXCEPT ss_override_k
    {
        return m_message.c_str();
    }

private: // fields
    string_type_ const  m_message;
};
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)

class stlsoft_unrecoverable_exception_root_
    : public STLSOFT_NS_QUAL(unrecoverable)
{
public: // types
    typedef STLSOFT_NS_QUAL(unrecoverable)                  parent_class_type;
    typedef stlsoft_unrecoverable_exception_root_           class_type;
protected:
    typedef stlsoft::simple_string                          string_type_;

protected: // construction
    explicit
    stlsoft_unrecoverable_exception_root_(
        int exitCode
    )
        : STLSOFT_NS_QUAL(unrecoverable)(handler, reinterpret_cast<void*>(exitCode))
        , m_message()
    {}
    general_exception_root_(
        int          /* exitCode */
    ,   string_type_    message
    )
        : STLSOFT_NS_QUAL(unrecoverable)(handler, reinterpret_cast<void*>(exitCode))
        , m_message(message)
    {}

public: // overrides
    virtual char const* what() const STLSOFT_NOEXCEPT ss_override_k
    {
        return m_message.c_str();
    }

private:
    static
    void
    handler(
        void* param
    )
    {
        ::exit(reinterpret_cast<int>(param));
    }

private: // fields
    string_type_ const  m_message;
};
#else
# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif

} /* namespace libCLImate_internal */

#if 0
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_NONE)

typedef libCLImate_internal::NONE_exception_root_                                           libCLImate_pte_root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_exception)

typedef libCLImate_internal::general_exception_root_<STLSOFT_NS_QUAL_STD(exception)>        libCLImate_pte_root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_std_runtime_error)

typedef libCLImate_internal::general_exception_root_<STLSOFT_NS_QUAL_STD(runtime_error)>    libCLImate_pte_root_type_t_;
#elif defined(LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_stlsoft_unrecoverable)

typedef libCLImate_internal::stlsoft_unrecoverable_exception_root_                          libCLImate_pte_root_type_t_;
#else

# error Exactly one of LIBCLIMATE_TERMINATION_EXCEPTIONS_INHERIT_???? preprocessor constants must be defined
#endif

class program_termination_exception
    : public libCLImate_pte_root_type_t_
{
public:
    typedef libCLImate_pte_root_type_t_                     parent_class_type;
    typedef program_termination_exception                   class_type;

protected:
    explicit
    program_termination_exception(int exitCode)
        : parent_class_type(exitCode)
        , ExitCode(exitCode)
    {}
    program_termination_exception(
        int             exitCode
    ,   string_type_    message
    )
        : parent_class_type(exitCode, message)
        , ExitCode(exitCode)
    {}
    virtual ~program_termination_exception() LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT = 0;
private:
    void operator =(class_type const&); // copy-assignment proscribed

public:
    int const   ExitCode;
};

inline
program_termination_exception::~program_termination_exception() LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT /* = 0 */
{}

class quiet_program_termination_exception
    : public program_termination_exception
{
public:
    typedef program_termination_exception                   parent_class_type;
    typedef quiet_program_termination_exception             class_type;

public:
    explicit
    quiet_program_termination_exception(int exitCode)
        : parent_class_type(exitCode)
    {}
    ~quiet_program_termination_exception() LIBCLIMATE_TERMINATION_EXCEPTIONS_NOEXCEPT
    {}

private:
    void operator =(class_type const&); // copy-assignment proscribed
};


/* ///////////////////////////// end of file //////////////////////////// */

