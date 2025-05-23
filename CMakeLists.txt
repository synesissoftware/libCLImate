
# ######################################################################## #
# File:     /CMakeLists.txt
#
# Purpose:  Top-level CMake lists file for libCLImate
#
# Created:  23rd October 2024
# Updated:  13th May 2025
#
# ######################################################################## #


# ##########################################################
# CMake

cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

# require out-of-source builds
file(TO_CMAKE_PATH "${CMAKE_CURRENT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")

	message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif()

# directory for CMake specific extensions and source files.
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})


# ##########################################################
# project

project(libCLImate
	DESCRIPTION "libCLImate is a portable, lightweight mini-framework that encapsulates the common aspects of Command-Line I**nterface boilerplate."
	HOMEPAGE_URL "https://github.com/synesissoftware/libCLImate"
	LANGUAGES C CXX
)

string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

# handle version number
set(RX_PROJ_TAG "${PROJECT_NAME_UPPER}")
set(RX_WS "[ \t]")
file(READ "${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/version.h" _header_file)
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_MAJOR${RX_WS}+([0-9]+)" MAJOR_DUMMY ${_header_file})
set(_VERSION_MAJOR ${CMAKE_MATCH_1})
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_MINOR${RX_WS}+([0-9]+)" MINOR_DUMMY ${_header_file})
set(_VERSION_MINOR ${CMAKE_MATCH_1})
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_PATCH${RX_WS}+([0-9]+)" PATCH_DUMMY ${_header_file})
set(_VERSION_PATCH ${CMAKE_MATCH_1})

# set project version number here
set(PROJECT_VERSION_MAJOR ${_VERSION_MAJOR})
set(PROJECT_VERSION_MINOR ${_VERSION_MINOR})
set(PROJECT_VERSION_PATCH ${_VERSION_PATCH})
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# adhere strictly to C and C++ standards plus extensions. These are actually
# useless since we do not compile anything; they merely state our intention.
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON) # GNU extensions and POSIX standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

if(MSVC)

	if(MSVC_VERSION LESS 1930)

		set(CMAKE_C_STANDARD 90)
		set(CMAKE_CXX_STANDARD 98)
	endif()

	if(MSVC_USE_MT)

		set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
	endif(MSVC_USE_MT)
else(MSVC)

	if(MSVC_USE_MT)

		# this here just to absorb warning about not using `MSVC_USE_MT` (to
		# enable **prepare_cmake.sh** to be simple)
	endif(MSVC_USE_MT)
endif(MSVC)


# ##########################################################
# dependencies, features, includes, and options

# ################################################
# includes - 1

include(BuildType)
include(LanguageFullVersion)
include(TargetMacros)


# ################################################
# dependencies, features, and options

# ######################################
# options

option(BUILD_EXAMPLES "Build examples" ON)

# ######################################
# features


# ######################################
# dependencies
#
# required:
# - CLASP;
# - Pantheios;
# - Pantheios.Extras.Main;
# - recls - Windows-only;
# - STLSoft;
#
# optional:
# - b64 - may be needed by Pantheios;
# - Pantheios.Extras.DiagUtil - Windows-only;
# - shwild - required for testing;
# - xTests - required for testing;


# ############################
# b64

if(NOT (CMAKE_NO_B64))

	if(BUILD_TESTING)

		set(b64_REQUIRED_VERSION_ 1.5)

		find_package(b64 ${b64_REQUIRED_VERSION_} QUIET)

		if(b64_FOUND)

			message("-- CMake package b64 found (version ${b64_VERSION}; ${b64_REQUIRED_VERSION_} requested)")

			add_compile_definitions(HAS_b64)
		else(b64_FOUND)

			add_compile_definitions(PANTHEIOS_NO_B64)
			add_compile_definitions(RECLS_NO_B64)
			add_compile_definitions(SHWILD_NO_B64)
		endif(b64_FOUND)
	endif(BUILD_TESTING)
endif()

if(b64_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_b64)
endif(b64_FOUND)


# ############################
# CLASP

set(CLASP_REQUIRED_VERSION_ 0.15)

find_package(CLASP ${CLASP_REQUIRED_VERSION_} REQUIRED)

message("-- CMake package CLASP found (version ${CLASP_VERSION}; ${CLASP_REQUIRED_VERSION_} requested)")

if(CLASP_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_CLASP)
endif(CLASP_FOUND)


# ############################
# Pantheios

if(NOT (CMAKE_NO_PANTHEIOS))

	if(BUILD_TESTING)

		set(Pantheios_REQUIRED_VERSION_ 1.0)

		find_package(Pantheios ${Pantheios_REQUIRED_VERSION_} QUIET)

		if(Pantheios_FOUND)

			message("-- CMake package Pantheios found (version ${Pantheios_VERSION}; ${Pantheios_REQUIRED_VERSION_} requested)")

			add_compile_definitions(HAS_Pantheios)
		endif(Pantheios_FOUND)
	endif(BUILD_TESTING)
endif()

if(Pantheios_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_Pantheios)
endif(Pantheios_FOUND)


# ############################
# Pantheios.Extras.DiagUtil

if(NOT (CMAKE_NO_PANTHEIOS))

	set(Pantheios.Extras.DiagUtil_REQUIRED_VERSION_ 0.1)

	find_package(Pantheios.Extras.DiagUtil ${Pantheios.Extras.Main_REQUIRED_VERSION_} QUIET)

	if(Pantheios.Extras.DiagUtil_FOUND)

		message("-- CMake package Pantheios.Extras.DiagUtil found (version ${Pantheios.Extras.DiagUtil_VERSION}; ${Pantheios.Extras.DiagUtil_REQUIRED_VERSION_} requested)")

		add_compile_definitions(HAS_Pantheios_Extras_DiagUtil)
		add_compile_definitions(HAS_DIAGUTIL)
	else(Pantheios.Extras.DiagUtil_FOUND)

		add_compile_definitions(PANTHEIOS_NO_DIAGUTIL)
	endif(Pantheios.Extras.DiagUtil_FOUND)
endif()

if(Pantheios_Extras_DiagUtil_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_Pantheios_Extras_DiagUtil)
endif(Pantheios_Extras_DiagUtil_FOUND)


# ############################
# Pantheios.Extras.Main

if(NOT (CMAKE_NO_PANTHEIOS))

	set(Pantheios.Extras.Main_REQUIRED_VERSION_ 0.2)

	find_package(Pantheios.Extras.Main ${Pantheios.Extras.Main_REQUIRED_VERSION_} REQUIRED)

	message("-- CMake package Pantheios.Extras.Main found (version ${Pantheios.Extras.Main_VERSION}; ${Pantheios.Extras.Main_REQUIRED_VERSION_} requested)")
endif()

if(Pantheios_Extras_Main_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_Pantheios_Extras_Main)
endif(Pantheios_Extras_Main_FOUND)


# ############################
# shwild

if(NOT (CMAKE_NO_SHWILD))

	if(BUILD_TESTING)

		set(shwild_REQUIRED_VERSION_ 0.12)

		find_package(shwild ${shwild_REQUIRED_VERSION_} QUIET)

		if(shwild_FOUND)

			message("-- CMake package shwild found (version ${shwild_VERSION}; ${shwild_REQUIRED_VERSION_} requested)")

			add_compile_definitions(HAS_shwild)
			add_compile_definitions(PANTHEIOS_HAS_SHWILD)
			add_compile_definitions(RECLS_HAS_SHWILD)
			add_compile_definitions(XTESTS_HAS_SHWILD)
		else(shwild_FOUND)

			add_compile_definitions(PANTHEIOS_NO_SHWILD)
			add_compile_definitions(RECLS_NO_SHWILD)
			add_compile_definitions(XTESTS_NO_SHWILD)
		endif(shwild_FOUND)
	else(BUILD_TESTING)

		add_compile_definitions(PANTHEIOS_NO_SHWILD)
		add_compile_definitions(RECLS_NO_SHWILD)
		add_compile_definitions(XTESTS_NO_SHWILD)
	endif(BUILD_TESTING)
else()

	add_compile_definitions(PANTHEIOS_NO_SHWILD)
	add_compile_definitions(RECLS_NO_SHWILD)
	add_compile_definitions(XTESTS_NO_SHWILD)
endif()

if(shwild_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_shwild)
endif(shwild_FOUND)


# ############################
# STLSoft

if(DEFINED STLSOFT)

	message("-- STLSOFT provided as CMake variable with value '${STLSOFT}'")

	set(STLSOFT_INCLUDE_DIR ${STLSOFT}/include)
elseif(DEFINED ENV{STLSOFT})

	message("-- STLSOFT provided as environment variable with value '$ENV{STLSOFT}'")

	set(STLSOFT_INCLUDE_DIR $ENV{STLSOFT}/include)
else()

	set(STLSoft_REQUIRED_VERSION_ 1.11)

	find_package(STLSoft ${STLSoft_REQUIRED_VERSION_} REQUIRED)

	message("-- CMake package STLSoft found (version ${STLSoft_VERSION}; ${STLSoft_REQUIRED_VERSION_} requested)")
endif()

if(DEFINED STLSOFT_INCLUDE_DIR)

	if(BUILD_TESTING)
		find_package(STLSoft REQUIRED)

		if(NOT STLSoft_FOUND)

			# message(FATAL_ERROR "When specifying STLSOFT explicitly it it still required to have an existing CMake installation of STLSoft in testing to satisfy xTest's dependency requirements. The specified STLSoft will be used for all compilation")
		else()

			# message("-- CMake package STLSoft found (version ${STLSoft_VERSION}) - required only to enable xTests package; the current project's header files will be used for all compilation")
		endif()
	endif(BUILD_TESTING)

	include_directories(${STLSOFT_INCLUDE_DIR})
endif()


# ############################
# UNIXem

if((USE_UNIXEM) AND (WIN32))

	set(UNIXem_REQUIRED_VERSION_ 1.12.7)

	find_package(UNIXem ${UNIXem_REQUIRED_VERSION_} REQUIRED)

	message("-- CMake package UNIXem found (version ${UNIXem_VERSION}; ${UNIXem_REQUIRED_VERSION_} requested)")

	add_compile_definitions(_STLSOFT_FORCE_ANY_COMPILER)
	add_compile_definitions(EMULATE_UNIX_ON_WINDOWS)
	add_compile_definitions(RECLS_HAS_UNIXEM)
	add_compile_definitions(STLSOFT_HAS_UNIXEM)
endif()

if(UNIXem_FOUND)

	add_compile_definitions(LIBCLIMATE_HAS_UNIXem)
endif(UNIXem_FOUND)


# ############################
# xTests

if(BUILD_TESTING)

	set(xTests_REQUIRED_VERSION_ 0.26.3)

	find_package(xTests ${xTests_REQUIRED_VERSION_} REQUIRED)

	message("-- CMake package xTests found (version ${xTests_VERSION}; ${xTests_REQUIRED_VERSION_} requested)")
endif(BUILD_TESTING)


# ################################################
# includes - 2

include(CMakePackageConfigHelpers)
if(BUILD_TESTING)

	include(CTest)
endif(BUILD_TESTING)
include(GNUInstallDirs)


# ##########################################################
# targets

# ################################################
# custom definitions

if(UNIX)

	set(_BUILD_AS_UNIX 1)

	message("-- Operating system Unix")
else(UNIX)

	if(WIN32)

		if(USE_UNIXEM)

			set(_BUILD_AS_UNIX 1)

			message("-- Operating system Unix (synthesised on Windows)")
		else(USE_UNIXEM)

			set(_BUILD_AS_WIN32 1)

			message("-- Operating system Windows")
		endif(USE_UNIXEM)
	else(WIN32)

		message("-- Operating system unknown")
	endif(WIN32)
endif(UNIX)


# ################################################
# main libraries

add_subdirectory(src)


# ################################################
# examples

if(BUILD_EXAMPLES)

	message("-- enabled building of examples ...")

	add_subdirectory(examples)
else(BUILD_EXAMPLES)

	message("-- disabled building of examples - define BUILD_EXAMPLES to enable")
endif(BUILD_EXAMPLES)


# ################################################
# tests

if(BUILD_TESTING)

	message("-- enabled building of tests ...")

	add_subdirectory(test)
else(BUILD_TESTING)

	message("-- disabled building of tests - define BUILD_TESTING to enable")
endif(BUILD_TESTING)


# ##########################################################
# install


# ##########################################################
# export

set(EXPORT_NAME ${PROJECT_NAME})

configure_package_config_file(
	${CMAKE_CURRENT_SOURCE_DIR}/cmake/${EXPORT_NAME}-config.cmake.in
	${CMAKE_CURRENT_BINARY_DIR}/cmake/${EXPORT_NAME}-config.cmake
	INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/${EXPORT_NAME}/cmake
)

write_basic_package_version_file(
	${CMAKE_CURRENT_BINARY_DIR}/cmake/${EXPORT_NAME}-config-version.cmake
	VERSION ${PROJECT_VERSION}
	COMPATIBILITY AnyNewerVersion
)

export(EXPORT project-targets
	FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/${EXPORT_NAME}-targets.cmake"
	NAMESPACE "${PROJECT_NAME}::"
)

install(EXPORT project-targets
	NAMESPACE "${PROJECT_NAME}::"
	FILE "${EXPORT_NAME}-targets.cmake"
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${EXPORT_NAME}
)

install(FILES
	"${CMAKE_CURRENT_BINARY_DIR}/cmake/${EXPORT_NAME}-config.cmake"
	"${CMAKE_CURRENT_BINARY_DIR}/cmake/${EXPORT_NAME}-config-version.cmake"
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${EXPORT_NAME}
)


# ##########################################################
# completion

message(NOTICE "Generating CMake build scripts for ${PROJECT_NAME} ${PROJECT_VERSION}, for C${CMAKE_C_STANDARD} C++${CMAKE_CXX_STANDARD}, with build type ${CMAKE_BUILD_TYPE}")


# ############################## end of file ############################# #

