# libCLImate - Installation and Use <!-- omit in toc -->

**libCLImate** is a classic-form C/C++ library, insofar as it has implementation files in its **src** directory and header files in its **include/libCLImate** directory. Thus, once "installed", one must simply include the requisite header(s) and link-in the implementation. There are several ways to do this:


## Table of Contents <!-- omit in toc -->

- [CMake](#cmake)
  - [Requisites](#requisites)
  - [**libCLImate**](#libclimate)
- [Custom makefile](#custom-makefile)


## CMake

The primary choice for installation is by use of **CMake**.

### Requisites

The following instructions assume the **requisites** have been processed via the following steps have been carried out:
1. (optionally) [**b64**](https://github.com/synesissoftware/b64) has been obtained and then built and installed via **CMake**. **b64** is not required by [**libCLImate**](https://github.com/synesissoftware/libCLImate), rather it is an optional dependency of **Pantheios**. If you are not otherwise using **Pantheios**, or your use does not require **b64**, this step can be skipped;
2. [**CLASP**](https://github.com/synesissoftware/CLASP) has been obtained and then built and installed via **CMake**;
3. [**Pantheios**](https://github.com/synesissoftware/Pantheios) has been obtained and then built and installed via **CMake**;
4. (optionally) [**bPantheios.Extras.DiagUtil64**](https://github.com/synesissoftware/Pantheios.Extras.DiagUtil) has been obtained and then built and installed via **CMake**. **bPantheios.Extras.DiagUtil64** currently provides useful facilities only for Windows platform, so if you are intending to use **libCLImate** on other platforms this step can be skipped;
5. [**Pantheios.Extras.Main**](https://github.com/synesissoftware/Pantheios.Extras.Main) has been installed
6. [**STLSoft**](https://github.com/synesissoftware/STLSoft) has been obtained and then built and installed via **CMake**;
7. (optionally) [**shwild**](https://github.com/synesissoftware/STLSoft) has been obtained and then built and installed via **CMake**. **b64** is not required by [**libCLImate**](https://github.com/synesissoftware/libCLImate), rather it is an optional dependency of **xTests** (for which it enables several additional match test constructs). If you are not otherwise using **xTests**, or your use does not require **shwild**, this step can be skipped
8. [**xTests**](https://github.com/synesissoftware/xTests) has been obtained and then built and installed via **CMake**;

### **libCLImate**

Installation steps:

1. Obtain the latest distribution of **libCLImate**, from
   https://github.com/synesissoftware/libCLImate/, e.g.

   ```bash
   $ mkdir -p ~/open-source
   $ cd ~/open-source
   $ git clone https://github.com/synesissoftware/libCLImate/
   ```

2. Prepare the CMake configuration, via the **prepare_cmake.sh** script, as
   in:

   ```bash
   $ cd ~/open-source/libCLImate
   $ ./prepare_cmake.sh -v
   ```

3. Run a build of the generated **CMake**-derived build files via the
   **build_cmake.sh** script, as in:

   ```bash
   $ ./build_cmake.sh
   ```

   (**NOTE**: if you provide the flag `--run-make` (=== `-m`) in step 3 then you do
   not need this step.)

4. As a check, execute the built test program files via the
   **build_run_all_unit_tests.sh** script, as in:

   ```bash
   $ ./run_all_unit_tests.sh
   ```

5. Install the library on the host, via `cmake`, as in:


   ```bash
   $ sudo cmake --install ${SIS_CMAKE_BUILD_DIR:-./_build} --config Release
   ```

7. Then to use the library, it is a simple matter as follows:

   1. Assuming an (almost) simplest possible program to verify the installation:

      ```c
      /* examples/C/example.C.minimal/main.c */
      #include <libclimate/main.h>

      #include <clasp/clasp.h>
      #include <pantheios/frontends/stock.h>
      #include <pantheios/extras/main.h>
      #include <pantheios/pantheios.h>

      PANTHEIOS_EXTERN_C PAN_CHAR_T const PANTHEIOS_FE_PROCESS_IDENTITY[] = PANTHEIOS_LITERAL_STRING("example.C.minimal");

      clasp_alias_t const libCLImate_specifications[] =
      {
          CLASP_ALIAS_ARRAY_TERMINATOR
      };

      int
      libCLImate_program_main(
        clasp_arguments_t const* args
      )
      {
        pantheios_logprintf(PANTHEIOS_SEV_NOTICE, "args->numArguments=%zu", args->numArguments);

        return 0;
      }
      ```

   2. Compile your project against **libCLImate**:

      Due to the installation step (Step 6 above) there is no requirement
      for an explicit include directory for **libCLImate**:

      ```bash
      $ gcc -c -std=c17 main.c
      ```

   3. Link your project against **libCLImate**:

      Due to the installation step (Step 6 above) there is no requirement
      for an explicit library directory for **libCLImate** (or of the other
      requisites):

      ```bash
      $ g++ -o main main.o -lCLImate \
        -lclasp \
        -lPantheios.core \
        -lPantheios.be.AnsiConsole \
        -lPantheios.bec.AnsiConsole \
        -lPantheios.fe.all \
        -lPantheios.util
      ```


   4. Test your project:

      Then you can run, as in:

      ```bash
      $ ./main abc --flag1 --option1=ov1 value1 value2 --flag2
      [example.C.minimal.1, Mar 09 09:04:22.067; Notice]: args->numArguments=6
      $
      ```


## Custom makefile

T.B.C.


<!-- ########################### end of file ########################### -->

