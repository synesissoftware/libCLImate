# libCLImate

**libCLImate** is a portable, lightweight mini-framework that encapsulates the common aspects of **C**ommand-**L**ine **I**nterface boilerplate, including:

- command-line argument parsing and sorting (using the **[CLASP](https://github.com/synesissoftware/CLASP)** library);
- diagnostic logging library (**[Pantheios](https://github.com/synesissoftware/Pantheios)**) initialisation / lifetime scoping;
- provision of de-facto standard CLI facilities, such as responding to '--help' and '--version';

**libCLImate** depends on the following libraries:

 - **[STLSoft](http://stlsoft.org/)**, version 1.9.120 or later - **STLSoft** provides platform and compiler feature discrimination, as well as numerous utility components. Complete releases are available from http://sourceforge.net/projects/stlsoft, and current working version at https://github.com/synesissoftware/STLSoft-1.9;
 - **[Pantheios](http://pantheios.org/)**, version 1.0.1 b215 or later - **Pantheios** is an Open Source C/C++ Diagnostic Logging API library, offering an optimal combination of 100% type-safety, efficiency, genericity and extensibility. It is simple to use and extend, highly-portable (platform and compiler-independent) and, best of all, it upholds the C tradition of *you only pay for what you use*. Complete releases are available from http://sourceforge.net/projects/pantheios, and current working version at https://github.com/synesissoftware/Pantheios;
 - **Pantheios.Extras.DiagUtil**, version 0.1.1 or later - **Pantheios.Extras.DiagUtil** provides a suite of functions that aid diagnostics. Current working version at https://github.com/synesissoftware/Pantheios.Extras.DiagUtil;
 - **Pantheios.Extras.Main**, version 0.1.1 or later - **Pantheios.Extras.Main** provides a suite of functions that simplify the implementation of ```main()```. Current working version at https://github.com/synesissoftware/Pantheios.Extras.Main;
 - **CLASP**, version 0.11.1 or later - **CLASP** - **c**ommand-**l**ine **a**rgument **s**orting and **p**arsing - is a small, simple C-language library for parsing command-line arguments, along with a C++ header-only API. Current working version at https://github.com/synesissoftware/STLSoft-1.9;
 - **[recls](http://recls.org/)**, version 1.9.1 a8 or later - **recls** is a platform-independent recursive search library. Complete releases are available from http://sourceforge.net/projects/recls. **recls** is only required on Windows (where it's used for expanding command-line wildcards);

**STLSoft**, **Pantheios.Extras.DiagUtil**, and **Pantheios.Extras.Main** are header-only.

The dependencies are as follows:

	libCLImate
		|
		+- STLSoft
		|
		+- Pantheios
		|		|
		|		+- STLSoft
		|
		+- Pantheios.Extras.DiagUtil
		|		|
		|		+- Pantheios
		|		|
		|		+- STLSoft
		|
		+- Pantheios.Extras.Main
		|		|
		|		+- Pantheios
		|		|
		|		+- STLSoft
		|
		+- CLASP
		|		|
		|		+- STLSoft
		|		|
		|		+- recls (Windows-only)
		|
		+- recls
				|
				+- STLSoft


