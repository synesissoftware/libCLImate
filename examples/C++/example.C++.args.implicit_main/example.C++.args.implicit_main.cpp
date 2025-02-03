
#define ExampleProgramMain  libCLImate_program_main
#define ExampleAliases      libCLImate_specifications

#include <libclimate/main.h>

#include <clasp/clasp.h>

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

  return 0;
}

/* ///////////////////////////// end of file //////////////////////////// */
