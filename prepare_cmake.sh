#! /bin/bash

ScriptPath=$0
Dir=$(cd $(dirname "$ScriptPath"); pwd)
Basename=$(basename "$ScriptPath")
CMakeDir=${SIS_CMAKE_BUILD_DIR:-$Dir/_build}
[[ -n "$MSYSTEM" ]] && DefaultMakeCmd=mingw32-make.exe || DefaultMakeCmd=make
MakeCmd=${SIS_CMAKE_MAKE_COMMAND:-${SIS_CMAKE_COMMAND:-$DefaultMakeCmd}}

Configuration=Release
ExamplesDisabled=0
MSVC_MT=0
MinGW=0
NO_b64=0
NO_shwild=0
RunMake=0
STLSoftDirGiven=
TestingDisabled=0
USE_UNIXem=0
VerboseMakefile=0


# ##########################################################
# command-line handling

while [[ $# -gt 0 ]]; do

  case $1 in
    --cmake-verbose-makefile|-v)

      VerboseMakefile=1
      ;;
    --debug-configuration|-d)

      Configuration=Debug
      ;;
    --disable-examples|-E)

      ExamplesDisabled=1
      ;;
    --disable-testing|-T)

      TestingDisabled=1
      ;;
    --mingw)

      MinGW=1
      ;;
    --msvc-mt)

      MSVC_MT=1
      ;;
    --no-b64)

      NO_b64=1
      ;;
    --no-shwild)

      NO_shwild=1
      ;;
    --run-make|-m)

      RunMake=1
      ;;
    --stlsoft-root-dir|-s)

      shift
      STLSoftDirGiven=$1
      ;;
    --use-unixem)

      USE_UNIXem=1
      ;;
    --help)

      cat << EOF
libCLImate is a portable, lightweight mini-framework that encapsulates the common aspects of Command-Line I**nterface boilerplate.
Copyright (c) 2019-2025, Matthew Wilson and Synesis Information Systems
Copyright (c) 2015-2019, Matthew Wilson and Synesis Software
Creates/reinitialises the CMake build script(s)

$ScriptPath [ ... flags/options ... ]

Flags/options:

    behaviour:

    -v
    --cmake-verbose-makefile
        configures CMake to run verbosely (by setting CMAKE_VERBOSE_MAKEFILE
        to be ON)

    -d
    --debug-configuration
        use Debug configuration (by setting CMAKE_BUILD_TYPE=Debug). Default
        is to use Release

    -E
    --disable-examples
        disables building of examples (by setting BUILD_EXAMPLES=OFF)

    -T
    --disable-testing
        disables building of tests (by setting BUILD_TESTING=OFF)

    --mingw
        uses explicitly the "MinGW Makefiles" generator, and defaults the
        make-command to "mingw32-make.exe"

    --msvc-mt
        when using Visual C++ (MSVC), the static runtime library will be
        selected; the default is the dynamic runtime library

    --no-b64
        suppresses discovery of b64 package

    --no-shwild
        suppresses discovery of shwild package

    -m
    --run-make
        executes make after a successful running of CMake

    -s <dir>
    --stlsoft-root-dir <dir>
        specifies the STLSoft root-directory, which will be passed to CMake
        as the variable STLSOFT, and which will override the environment
        variable STLSOFT (if present)

    --use-unixem
        when building on Windows, use the UNIXem library and define the
        preprocessor symbol _STLSOFT_FORCE_ANY_COMPILER so as to emulate and
        exercise UNIXSTL, not WinSTL (or COMSTL, etc.). Has no effect when
        not executing on Windows


    standard flags:

    --help
        displays this help and terminates

EOF

      exit 0
      ;;
    *)

      >&2 echo "$ScriptPath: unrecognised argument '$1'; use --help for usage"

      exit 1
      ;;
  esac

  shift
done


# ##########################################################
# main()

mkdir -p $CMakeDir || exit 1

cd $CMakeDir

echo "Executing CMake (in ${CMakeDir})"

if [ $ExamplesDisabled -eq 0 ]; then CMakeBuildExamplesFlag="ON" ; else CMakeBuildExamplesFlag="OFF" ; fi
if [ $MSVC_MT -eq 0 ]; then CMakeMsvcMtFlag="OFF" ; else CMakeMsvcMtFlag="ON" ; fi
if [ $NO_b64 -eq 0 ]; then CMakeNoB64="OFF" ; else CMakeNoB64="ON" ; fi
if [ $NO_shwild -eq 0 ]; then CMakeNoShwild="OFF" ; else CMakeNoShwild="ON" ; fi
if [ -z $STLSoftDirGiven ]; then CMakeSTLSoftVariable="" ; else CMakeSTLSoftVariable="-DSTLSOFT=$STLSoftDirGiven/" ; fi
if [ $TestingDisabled -eq 0 ]; then CMakeBuildTestingFlag="ON" ; else CMakeBuildTestingFlag="OFF" ; fi
if [ $USE_UNIXem -ne 0 ]; then CMakeUSE_UNIXem="ON" ; else CMakeUSE_UNIXem="OFF" ; fi
if [ $VerboseMakefile -eq 0 ]; then CMakeVerboseMakefileFlag="OFF" ; else CMakeVerboseMakefileFlag="ON" ; fi

if [ $MinGW -ne 0 ]; then

  cmake \
    $CMakeSTLSoftVariable \
    -DBUILD_EXAMPLES:BOOL=$CMakeBuildExamplesFlag \
    -DBUILD_TESTING:BOOL=$CMakeBuildTestingFlag \
    -DCMAKE_BUILD_TYPE=$Configuration \
    -DCMAKE_NO_B64:BOOL=$CMakeNoB64 \
    -DCMAKE_NO_SHWILD:BOOL=$CMakeNoShwild \
    -DUSE_UNIXEM:BOOL=$CMakeUSE_UNIXem \
    -G "MinGW Makefiles" \
    -S $Dir \
    -B $CMakeDir \
    || (cd ->/dev/null ; exit 1)
else

  cmake \
    $CMakeSTLSoftVariable \
    -DBUILD_EXAMPLES:BOOL=$CMakeBuildExamplesFlag \
    -DBUILD_TESTING:BOOL=$CMakeBuildTestingFlag \
    -DCMAKE_BUILD_TYPE=$Configuration \
    -DCMAKE_NO_B64:BOOL=$CMakeNoB64 \
    -DCMAKE_NO_SHWILD:BOOL=$CMakeNoShwild \
    -DCMAKE_VERBOSE_MAKEFILE:BOOL=$CMakeVerboseMakefileFlag \
    -DMSVC_USE_MT:BOOL=$CMakeMsvcMtFlag \
    -DUSE_UNIXEM:BOOL=$CMakeUSE_UNIXem \
    -S $Dir \
    -B $CMakeDir \
    || (cd ->/dev/null ; exit 1)
fi

status=0

if [ $RunMake -ne 0 ]; then

  echo "Executing build (via command \`$MakeCmd\`)"

  $MakeCmd
  status=$?
fi

cd ->/dev/null

if [ $VerboseMakefile -ne 0 ]; then

  echo -e "contents of $CMakeDir:"
  ls -al $CMakeDir
fi

exit $status


# ############################## end of file ############################# #

