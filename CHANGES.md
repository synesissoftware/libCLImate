# libCLImate - Changes <!-- omit in toc -->


## 0.4.1-alpha42 - 2nd September 2026

* Modernised Synesis C/C++ boilerplate (CI, helper scripts, documentation, CMake packaging);
* Added GitHub Actions **ci.yml** with reusable **ci-cell.yml** and **install-sis-deps** composite action;
* Added **.sis/project_name.txt** and hardened helper scripts per **HELPER-SCRIPTS-C-CXX** contract;
* Added **ctest_cmake.sh**, **run_all_automated_tests.sh**, and **run_all_component_tests.sh**;
* Added unit tests **test.unit.version** and **test.unit.api** with CTest registration;
* Renamed scratch program to **test.scratch.libver** for helper-script discovery;
* Merged **HISTORY.md** into **CHANGES.md** and removed **HISTORY.md**;
* Corrected **INSTALL.md**, **EXAMPLES.md**, and **README.md** documentation debt;
* Fixed **Pantheios.Extras.DiagUtil** `find_package()` version-variable typo in **CMakeLists.txt**;
* Aligned CMake package config and exported **libCLImate::core** interface dependencies;
* Fixed install-smoke CI dependencies to install **Pantheios** before **Pantheios.Extras.Main**;
* Gated Windows **wmain** example behind **`LIBCLIMATE_USE_wmain`** (matches library wide-entry build mode);
* Made **examples/C/minimal** use a MinGW-safe format for `size_t`;
* Requires **CLASP** **0.15.1** or later (fixed **`CLASP_VER`** composite);


## 0.4.0-alpha1 - 8th May 2025

* Added CMake support;
* Reduced/removed use of **include/SynesisSoftware/CommandLineInterface** files;
* Added project boilerplate files (**AUTHORS.md**, **EXAMPLES.md**, **FAQ.md**, **HISTORY.md**, **INSTALL.md**, **NEWS.md**, **README.md**, **TODO.md**);
* Updated dependencies;
* Added **VS Code** settings;
* Trivial code canonicalisation;
* Added **.gitattributes**;
* Updated **.gitignore**;


## 0.3.7 - 28th January 2017

* Added full suite of Visual C++ makefile build scripts (VC11, VC12, VC14, and MinGW);
* Extended **quiet_program_termination_exception** portability;
* Makefile generation fixes;


## 0.3.6 - 24th January 2017

* Added generated and manual makefiles for VC6 and VC++ 10 (32-bit and x64);
* Added GCC and VC++ makefile build scripts under **build/**;
* Improved portability of **quiet_program_termination_exception**;
* Section-header canonicalisation in core headers and sources;


## 0.3.5 - 5th June 2016

* Renamed implicit-link **`.i`** files to **`.inl`**;


## 0.3.3 - 26th May 2016

* Added **`wmain()`** support (C++ wide-entry API and example);
* Added Unicode Visual C++ 6 project configurations;
* Added **WIN64** preprocessor definitions for x64 project configurations;
* Refined common implicit linking;
* Internal header refactoring, documentation improvements, and makefile/example tidying;


## 0.3.2 - 28th September 2015

* First public release after forking from the proprietary Synesis Software Command Line Interface library;
* Added Visual C++ 11 and 12 solution/project files;
* Abstracted dependent-library version checks in internal headers;
* Wide-string compatibility improvements;
* Backwards-compatibility enhancements for legacy **SynesisSoftware/CommandLineInterface** shims;
* Added **README.md** project documentation;


<!-- ########################### end of file ########################### -->
