
# ######################################################################## #
# File:     /src/CMakeLists.txt
#
# Purpose:  CMake lists file for libCLImate core library
#
# Created:  ...
# Updated:  8th May 2025
#
# ######################################################################## #


if(_BUILD_AS_UNIX)

	add_definitions(-DUNIX)
	add_definitions(-Dunix)
endif(_BUILD_AS_UNIX)

if(_BUILD_AS_WIN32)

	if(CMAKE_SIZEOF_VOID_P EQUAL 8)

		message (STATUS "Compiling for 64-bit Windows")

		add_definitions(-DWIN64)
	else()

		message (STATUS "Compiling for 32-bit Windows")

		add_definitions(-DWIN32)
	endif()

	# suppress implicit-link file
	add_definitions(-DCSTRING_INCL_CSTRING_H_IMPLICIT_LINK)

	add_definitions(-DCLASP_CMDLINE_ARGS_NO_RECLS_ON_WINDOWS)
endif(_BUILD_AS_WIN32)

if(MSVC)

	if(MSVC_VERSION LESS 1920)

		add_compile_options("/wd4822")
	endif()

	if(MSVC_VERSION GREATER_EQUAL 1914)

		add_compile_options("/Zc:__cplusplus")

		add_definitions(-D_SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING)
	endif()
endif(MSVC)


SET (CORE_SRC_DIR .)

SET (CORE_SRCS
	${CORE_SRC_DIR}/exit_immediately.c
	${CORE_SRC_DIR}/main_entry_point_C.c
	${CORE_SRC_DIR}/main_entry_point_Cpp.cpp
	${CORE_SRC_DIR}/quiet_program_termination_exception.hpp
	${CORE_SRC_DIR}/unwind_and_exit.cpp
	${CORE_SRC_DIR}/usage_etc.c
)

add_library(core
	${CORE_SRCS}
)


# specify the primary public headers for the library, which controls whether
# they'll be installed
#
# NOTE: it is not yet known (to me, at least) how to include additional
# header files from sub-directories, so this is done below in an additional
# `install()` step
set(CORE_PUBLIC_HEADERS
	"${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/basic_types.h"
	"${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/common.h"
	"${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/main.h"
	"${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/main.hpp"
	"${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/version.h"
)

set_target_properties(core PROPERTIES
	OUTPUT_NAME "CLImate"
	PUBLIC_HEADER "${CORE_PUBLIC_HEADERS}"
)

target_include_directories(core
	PUBLIC
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_link_libraries(core
	PRIVATE
		$<$<STREQUAL:${STLSOFT_INCLUDE_DIR},>:STLSoft::STLSoft>
)


target_compile_options(core
	PRIVATE
		$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
			-Werror -Wall -Wextra -pedantic
		>
		$<$<CXX_COMPILER_ID:MSVC>:
			/WX /W4
		>
)


# ##########################################################
# install

install(TARGETS core
	EXPORT project-targets
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME_LOWER}
)

# for now, we just include xtests.h, as it's not clear how to use the
# PUBLIC_HEADER mechanism to install files into subdirectories (such as xtests/util/temp_file.hpp)

# additional headers into specific sub-directories

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}
#     DESTINATION include
#     FILES_MATCHING
#     PATTERN "*.h*"
# )

install(
	DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/
	DESTINATION include/${PROJECT_NAME_LOWER}
	FILES_MATCHING
	PATTERN "*.h*"
)

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}
#     DESTINATION include
#     FILES_MATCHING
#     PATTERN "*.hpp"
# )

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}
#     DESTINATION include
#     FILES_MATCHING
#     PATTERN "[im]*.h"
# )

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/util
#     DESTINATION include/${PROJECT_NAME_LOWER}
#     FILES_MATCHING
#     PATTERN "*.h*"
# )

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/internal
#     DESTINATION include/${PROJECT_NAME_LOWER}
#     FILES_MATCHING
#     PATTERN "*.h*"
# )

# install(
#     DIRECTORY ${CMAKE_SOURCE_DIR}/include/systemtools
#     DESTINATION include
#     FILES_MATCHING
#     PATTERN "*.h*"
# )


# ############################## end of file ############################# #

