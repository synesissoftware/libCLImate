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


## Introduction


**libCLImate** is a portable, lightweight mini-framework that encapsulates the common aspects of **C**ommand-**L**ine **I**nterface boilerplate, including:

- command-line argument parsing and sorting (using the **[CLASP](https://github.com/synesissoftware/CLASP)** library);
- diagnostic logging library (**[Pantheios](https://github.com/synesissoftware/Pantheios)**) initialisation / lifetime scoping;
- provision of de-facto standard CLI facilities, such as responding to '--help' and '--version';


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

