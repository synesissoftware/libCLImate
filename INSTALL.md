# libCLImate - Installation and Use <!-- omit in toc -->

**libCLImate** is a classic-form C/C++ library, insofar as it has implementation files in its **src** directory and header files in its **include/libclimate** directory. Once installed, include the requisite header(s) and link the **CLImate** library.


## Table of Contents <!-- omit in toc -->

- [CMake](#cmake)
  - [Requisites](#requisites)
  - [**libCLImate**](#libclimate)


## CMake

The primary choice for installation is by use of **CMake**.

### Requisites

The following instructions assume the requisites have been built and installed via **CMake** in dependency order:

1. (optional) [**b64**](https://github.com/synesissoftware/b64) — optional dependency of **Pantheios**;
2. [**CLASP**](https://github.com/synesissoftware/CLASP) — required;
3. [**Pantheios**](https://github.com/synesissoftware/Pantheios) — required when building examples or tests;
4. (optional) [**Pantheios.Extras.DiagUtil**](https://github.com/synesissoftware/Pantheios.Extras.DiagUtil) — Windows-only optional facilities;
5. [**Pantheios.Extras.Main**](https://github.com/synesissoftware/Pantheios.Extras.Main) — required;
6. (optional) [**shwild**](https://github.com/synesissoftware/shwild) — optional dependency of **xTests**;
7. [**STLSoft**](https://github.com/synesissoftware/STLSoft) — required;
8. (optional) [**xTests**](https://github.com/synesissoftware/xTests) — required only when `BUILD_TESTING=ON`;

### **libCLImate**

Installation steps:

1. Obtain the latest distribution of **libCLImate** from https://github.com/synesissoftware/libCLImate/, e.g.

   ```bash
   $ mkdir -p ~/open-source
   $ cd ~/open-source
   $ git clone https://github.com/synesissoftware/libCLImate/
   ```

2. Prepare the CMake configuration via **prepare_cmake.sh**:

   ```bash
   $ cd ~/open-source/libCLImate
   $ ./prepare_cmake.sh -v
   ```

3. Build via **build_cmake.sh**:

   ```bash
   $ ./build_cmake.sh
   ```

   (**NOTE**: if you pass `--run-make` (`-m`) to **prepare_cmake.sh**, this step is optional.)

4. As a check, run the automated tests:

   ```bash
   $ ./ctest_cmake.sh
   $ ./run_all_unit_tests.sh
   $ ./run_all_examples.sh
   ```

5. Install the library:

   ```bash
   $ sudo cmake --install ${SIS_CMAKE_BUILD_DIR:-./_build} --config Release
   ```

6. To consume the installed package from CMake:

   ```cmake
   find_package(libCLImate REQUIRED)
   target_link_libraries(my_app PRIVATE libCLImate::core)
   ```


<!-- ########################### end of file ########################### -->
