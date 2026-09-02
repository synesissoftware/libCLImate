# libCLImate <!-- omit in toc -->

Portable, lightweight mini-framework for **C**ommand-**L**ine **I**nterface boilerplate.

![Language](https://img.shields.io/badge/c-000000?style=flat&logo=c&logoColor=white)
![Language](https://img.shields.io/badge/c++-000000?style=flat&logo=c%2B%2B&logoColor=white)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![GitHub release](https://img.shields.io/github/v/release/synesissoftware/libCLImate.svg)](https://github.com/synesissoftware/libCLImate/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/synesissoftware/libCLImate)](https://github.com/synesissoftware/libCLImate/commits/master)
[![CI](https://github.com/synesissoftware/libCLImate/actions/workflows/ci.yml/badge.svg)](https://github.com/synesissoftware/libCLImate/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->


- [Introduction](#introduction)
- [Installation](#installation)
- [Components](#components)
  - [C API](#c-api)
  - [C++ API](#c-api-1)
- [Examples](#examples)
- [Project Information](#project-information)
  - [Where to get help](#where-to-get-help)
  - [Contribution guidelines](#contribution-guidelines)
  - [Dependencies](#dependencies)
  - [Related projects](#related-projects)
  - [License](#license)


## Introduction


**libCLImate** is a portable, lightweight mini-framework that encapsulates the common aspects of **C**ommand-**L**ine **I**nterface boilerplate, including:

* command-line argument parsing and sorting (using the **[CLASP](https://github.com/synesissoftware/CLASP)** library);
* diagnostic logging library (**[Pantheios](https://github.com/synesissoftware/Pantheios)**) initialisation / lifetime scoping;
* provision of de-facto standard CLI facilities, such as responding to `'--help'` and `'--version'` flags;


## Installation

Detailed instructions — via **CMake** — are provided in the accompanying [INSTALL.md](./INSTALL.md) file.


## Components

### C API

The primary C headers live under **include/libclimate/**:

* **libclimate/common.h** — common include (pulls in **version.h**);
* **libclimate/version.h** — `LIBCLIMATE_VER_*` version macros;
* **libclimate/main.h** — implicit-main include; defines `main()` in terms of `libCLImate_main_entry_point_C()`;
* **libclimate/main/api.h** — explicit-main API:
  * `libCLImate_program_main()` — application entry callback;
  * `libCLImate_main_entry_point_C()` — explicit `main()` implementation;
  * `libCLImate_show_usage()` / `libCLImate_show_version()` — stock `--help` / `--version` support;
  * `libCLImate_specifications[]` — application-defined **CLASP** alias array;


### C++ API

The C++ API builds on the C API:

* **libclimate/main.hpp** — implicit-main include for C++ (defines `main()` via `libCLImate_main_entry_point_Cpp()`);
* **libclimate/main/api.hpp** — C++ conveniences over **main/api.h**, including `clasp::` helpers for flag inspection;


## Examples

Examples are provided in the **examples/** directory. A detailed table is provided in [EXAMPLES.md](./EXAMPLES.md).


## Project Information


### Where to get help

[GitHub Page](https://github.com/synesissoftware/libCLImate "GitHub Page")


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on https://github.com/synesissoftware/libCLImate.


### Dependencies

**libCLImate** depends directly on the following libraries:

* **[CLASP](https://github.com/synesissoftware/CLASP)**, v**0.15** or later;
* **[Pantheios.Extras.Main](https://github.com/synesissoftware/Pantheios.Extras.Main/)**, v**0.2** or later;
* **[STLSoft](https://github.com/synesissoftware/STLSoft)**, v**1.11** or later;

**libCLImate** depends indirectly on the following libraries:

* **[b64](https://github.com/synesissoftware/b64/)** — optional dependency of **Pantheios**;
* **[Pantheios](https://github.com/synesissoftware/Pantheios/)** — required when building examples or tests;
* **[Pantheios.Extras.DiagUtil](https://github.com/synesissoftware/Pantheios.Extras.DiagUtil/)** — optional; Windows-only facilities;
* **[recls](https://github.com/synesissoftware/recls/)** — optional dependency of **CLASP** on Windows (disabled when `CLASP_CMDLINE_ARGS_NO_RECLS_ON_WINDOWS` is defined);
* **[shwild](https://github.com/synesissoftware/shwild)** — optional dependency of **xTests**;
* **[xTests](https://github.com/synesissoftware/xTests)** — required when `BUILD_TESTING=ON`;


The dependencies graph is:

```plaintext
  libCLImate
    |
    +- CLASP
    |   |
    |   +- (STLSoft)
    |   |
    |   +- recls (Windows-only, optional)
    |
    +- Pantheios.Extras.Main
    |   |
    |   +- (Pantheios)
    |   |
    |   +- (STLSoft)
    |
    +- STLSoft
```


### Related projects

* **[libCLImate.Go](https://github.com/synesissoftware/libCLImate.Go)** — Go language port;
* **[libCLImate.Ruby](https://github.com/synesissoftware/libCLImate.Ruby)** — Ruby language port;
* **[libCLImate.Python](https://github.com/synesissoftware/libCLImate.Python)** — Python language port;


### License

**libCLImate** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->
