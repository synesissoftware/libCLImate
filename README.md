# libCLImate <!-- omit in toc -->

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
- [Installation](#installation-1)
- [Components](#components-1)
  - [C API](#c-api-2)
  - [C++ API](#c-api-3)
- [Examples](#examples-1)
- [Project Information](#project-information-1)
  - [Where to get help](#where-to-get-help-1)
  - [Contribution guidelines](#contribution-guidelines-1)
  - [Dependencies](#dependencies-1)
  - [Related projects](#related-projects-1)
  - [License](#license-1)


## Introduction


**libCLImate** is a portable, lightweight mini-framework that encapsulates the common aspects of **C**ommand-**L**ine **I**nterface boilerplate, including:

- command-line argument parsing and sorting (using the **[CLASP](https://github.com/synesissoftware/CLASP)** library);
- diagnostic logging library (**[Pantheios](https://github.com/synesissoftware/Pantheios)**) initialisation / lifetime scoping;
- provision of de-facto standard CLI facilities, such as responding to '--help' and '--version';

## Installation

Detailed instructions - via **CMake**, via bundling, via custom makefile
parameters - are provided in the accompanying [INSTALL.md](./INSTALL.md)
file.


## Components

### C API


### C++ API


## Examples

Examples are provided in the ```examples``` directory. A detailed list TOC of them is provided in [EXAMPLES.md](./EXAMPLES.md).

## Project Information

### Where to get help

[GitHub Page](https://github.com/synesissoftware/libCLImate "GitHub Page")


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on https://github.com/synesissoftware/libCLImate.


### Dependencies

#### STLSoft (optional) <!-- omit in toc -->

The original (~2005) implementation used **STLSoft** for discrimination of compilers and for library support. For modern compilers with broad support for the latest language standards this is not necessary. Hence, if the preprocessor symbol `SHWILD_NO_STLSOFT` is specified then all dependencies on **STLSoft** are removed and basic **C++-14** features are used instead. (This is done in the **CMake** configuration provided - see [INSTALL.md](./INSTALL.md).)

If you _do_ need **STLSoft**, then version 1.10.6 or later is recommended. If you're using a _very_ old compiler you may wish to use STLSoft-1.9, for which version 1.9.136 is recommended. Further, the makefiles require definition of the environment variable `STLSOFT` that should be set to the root directory of a clone of **STLSoft**.

* [STLSoft 1.9](http://github.com/synesissoftware/STLSoft-1.9/)
* [STLSoft 1.10](http://github.com/synesissoftware/STLSoft-1.10/) (Recommended)


### Related projects

Projects in which **libCLImate** is used include:

* [**libCLImate.fnmatch**](https://github.com/synesissoftware/libCLImate.fnmatch)

Projects in which **libCLImate** is used for testing include:

TODO
TODO
TODO
TODO
TODO
TODO

* [**b64**](https://github.com/synesissoftware/b64)
* [**cstring**](https://github.com/synesissoftware/cstring)
* [**FastFormat**](https://github.com/synesissoftware/FastFormat)
* [**libpath**](https://github.com/synesissoftware/libpath)
* [**Pantheios**](https://github.com/synesissoftware/Pantheios)
* [**recls**](https://github.com/synesissoftware/recls)
* [**UNIXem**](https://github.com/synesissoftware/UNIXem)


### License

**libCLImate** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->




**libCLImate** depends on the following libraries:

## Installation

T.B.C.


## Components

### C API

T.B.C.


### C++ API

T.B.C.


## Examples

Examples are provided in the ```examples``` directory. A detailed list TOC of them is provided in [EXAMPLES.md](./EXAMPLES.md).


## Project Information

### Where to get help

[GitHub Page](https://github.com/synesissoftware/libCLImate "GitHub Page")


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on https://github.com/synesissoftware/libCLImate.


### Dependencies

**libCLImate** depends directly on the following libraries:

 - **[CLASP](https://github.com/synesissoftware/CLASP)**, v**0.15.0 (alpha 5)** or later - **CLASP** - **c**ommand-**l**ine **a**rgument **s**orting and **p**arsing - is a small, simple C-language library for parsing command-line arguments, along with a C++ header-only API. Current working version at https://github.com/synesissoftware/STLSoft-1.9;
 - **[Pantheios](https://github.com/synesissoftware/Pantheios/)**, v**1.0.1 (beta 22)** or later - **Pantheios** is an Open Source C/C++ Diagnostic Logging API library, offering an optimal combination of 100% type-safety, efficiency, genericity and extensibility. It is simple to use and extend, highly-portable (platform and compiler-independent) and, best of all, it upholds the C tradition of *you only pay for what you use*;
 - **[Pantheios.Extras.DiagUtil](https://github.com/synesissoftware/Pantheios.Extras.DiagUtil/)**, v**0.1.2 (beta 1)** or later - **Pantheios.Extras.Main** is a header-only library that provides a suite of functions that aid diagnostics. Currently, this is a Windows-only dependency;
 - **[Pantheios.Extras.Main](https://github.com/synesissoftware/Pantheios.Extras.Main/)**, v**0.2.1 (alpha 2)** or later - **Pantheios.Extras.Main** is a header-only library that provides a suite of functions that simplify the implementation of ```main()```;
 - **[STLSoft](https://github.com/synesissoftware/STLSoft-1.11)**, v**1.11.1 (beta 2)** or later - **STLSoft** is a header-only library that provides platform and compiler feature discrimination, as well as numerous utility components;

**libCLImate** depends indirectly on the following libraries:

 - **[b64](https://github.com/synesissoftware/b64/)**, v**1.5.2** or later - **b64** provides Base-64 encoding/decoding, and is an optional dependency of **Pantheios**;
 - **[recls](https://github.com/synesissoftware/recls/)**, v**0.10.0 (beta 2)** or later - **recls** is a platform-independent recursive search library, and is an optional dependency of **CLASP**. **recls** is only required on Windows (where it's used for expanding command-line wildcards);


The dependencies graph is:

```plaintext
  libCLImate
    |
    +- CLASP
    |   |
    |   +- (STLSoft)
    |   |
    |   +- recls (Windows-only)
    |       |
    |       +- (STLSoft)
    |
    +- Pantheios
    |   |
    |   +- (b64)
    |   |
    |   +- (STLSoft)
    |
    +- Pantheios.Extras.DiagUtil (Windows-only)
    |   |
    |   +- (Pantheios)
    |   |
    |   +- (STLSoft)
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

Projects in which **libCLImate** is used include:

T.B.C.


### License

**libCLImate** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->

