
#define ExampleProgramMain  libCLImate_program_main
#define ExampleAliases      libCLImate_aliases

#include <libclimate/main.hpp>

#include <systemtools/clasp/clasp.h>

#include <stdio.h>
#include <stdlib.h>

#if 0
#elif defined(_MSC_VER) && \
      _MSC_VER >= 1200
# pragma warning(disable : 4702)
#endif

namespace sscli = ::libCLImate;

clasp_alias_t const ExampleAliases[] =
{

    CLASP_ALIAS_ARRAY_TERMINATOR
};

int
ExampleProgramMain(
    clasp_arguments_t const* args
)
{
  ((void)args);

  sscli::unwind_and_exit(EXIT_SUCCESS);

  fprintf(stderr, "should not be seen!\n");

  return EXIT_FAILURE;
}



/* ///////////////////////////// end of file //////////////////////////// */
