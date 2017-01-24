############################################################################
# File: 	makefile
#
# Purpose:	Makefile for the libCLImate project, for the GCC 4.2 (UNIX)
#			compiler, on UNIX
#
# Created:	23rd January 2017
# Updated:	24th January 2017
#
############################################################################


############################################################################
# symbols

########################################
# project & compiler version

COMP_TAG			=	gcc42
ARCH_TAG			=	
OS_TAG				=	
PROJ_TAG			=	libclimate
PROJ_VER_MAJOR		=	0
PROJ_TAG_VER		=	$(PROJ_TAG).$(PROJ_VER_MAJOR)
COMP_ARCH_OS_TAG	=	$(COMP_TAG)$(OS_TAG)$(ARCH_TAG)

PROJ_MAKEFILE_NAME	=	makefile

NOTHING 			=

########################################
# 3rd-party project versions


CLASP_VER_MAJOR		=	0
PANTHEIOS_VER_MAJOR	=	1
RECLS_VER_MAJOR		=	1

########################################
# testing verbosity

TEST_VERBOSITY		=	2

########################################
# directories

PROJ_BASE_DIR			=	../..
PROJ_BIN_DIR			=	$(PROJ_BASE_DIR)/bin
PROJ_INCLUDE_DIR		=	$(PROJ_BASE_DIR)/include
PROJ_LIB_DIR			=	$(PROJ_BASE_DIR)/lib
PROJ_OBJ_DIR			=	.
PROJ_SRC_DIR			=	$(PROJ_BASE_DIR)/src
PROJ_EXAMPLES_DIR		=	$(PROJ_BASE_DIR)/examples

CLASP_INCLUDE			=	-I"$(CLASP_ROOT)/include"

PANTHEIOS_INCLUDE		=	-I"$(PANTHEIOS_ROOT)/include"

PANTHEIOS_EXTRAS_DIAGUTIL_INCLUDE	=	-I"$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include"

PANTHEIOS_EXTRAS_MAIN_INCLUDE		=	-I"$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include"

RECLS_INCLUDE			=	-I"$(RECLS_ROOT)/include"

STLSOFT_INCLUDE			=	-I"$(STLSOFT)/include"

########################################
# tools

CC						=	gcc
CPPC					=	g++
AR						=	ar
LD						=	g++
RM						=	rm -f
CP						=	cp
RC						=	

########################################
# include directory symbols

INCLUDES_LEADER		=	

PROJ_INCLUDE		=	-I$(PROJ_INCLUDE_DIR)

ENV_INCLUDES	=

COMMON_INCLUDES		=

CC_INCLUDES_BASE=\
 $(INCLUDES_LEADER)\
 $(PROJ_INCLUDE)\
 $(CLASP_INCLUDE)\
 $(PANTHEIOS_INCLUDE)\
 $(PANTHEIOS_EXTRAS_DIAGUTIL_INCLUDE)\
 $(PANTHEIOS_EXTRAS_MAIN_INCLUDE)\
 $(RECLS_INCLUDE)\
 $(STLSOFT_INCLUDE)\
 $(COMMON_INCLUDES)\
 $(ENV_INCLUDES)\
 \

CPPC_INCLUDES_BASE=\
 $(INCLUDES_LEADER)\
 $(PROJ_INCLUDE)\
 $(CLASP_INCLUDE)\
 $(PANTHEIOS_INCLUDE)\
 $(PANTHEIOS_EXTRAS_DIAGUTIL_INCLUDE)\
 $(PANTHEIOS_EXTRAS_MAIN_INCLUDE)\
 $(RECLS_INCLUDE)\
 $(STLSOFT_INCLUDE)\
 $(COMMON_INCLUDES)\
 $(ENV_INCLUDES)\
 \

CC_INCLUDES=\
 $(CC_INCLUDES_BASE)\
 \

CPPC_INCLUDES=\
 $(CPPC_INCLUDES_BASE)\
 \

########################################
# library directory symbols

LIBPATHS_LEADER 	=

PROJ_LIBPATH		=	-L$(PROJ_LIB_DIR)

ENV_LIBPATHS		=

COMMON_LIBPATHS		=

CLASP_LIBPATH		=	-L"$(CLASP_ROOT)/lib"

PANTHEIOS_LIBPATH	=	-L"$(PANTHEIOS_ROOT)/lib"

RECLS_LIBPATH		=	-L"$(RECLS_ROOT)/lib"


LIBPATHS=\
 $(LIBPATHS_LEADER)\
 $(PROJ_LIBPATH)\
 $(CLASP_LIBPATH)\
 $(PANTHEIOS_LIBPATH)\
 $(RECLS_LIBPATH)\
 $(COMMON_LIBPATHS)\
 $(ENV_LIBPATHS)\
 \

########################################
# library names

LIBCLI_SUF_MT_D	=	.mt.debug
LIBCLI_SUF_MT_R	=	.mt
LIBCLI_SUF_ST_D	=	.debug
LIBCLI_SUF_ST_R	=	

########################################
# library names

LIBS_COMMON			=	

LIBS_COMMON_MT_D	=	$(LIBS_COMMON)
LIBS_COMMON_MT_R	=	$(LIBS_COMMON)
LIBS_COMMON_ST_D	=	$(LIBS_COMMON)
LIBS_COMMON_ST_R	=	$(LIBS_COMMON)

LIBS_COMMON_W_MT_D	=	$(LIBS_COMMON)
LIBS_COMMON_W_MT_R	=	$(LIBS_COMMON)
LIBS_COMMON_W_ST_D	=	$(LIBS_COMMON)
LIBS_COMMON_W_ST_R	=	$(LIBS_COMMON)

LIBS_3PTY_SUF_MT_D	=	.mt.debug
LIBS_3PTY_SUF_MT_R	=	.mt
LIBS_3PTY_SUF_ST_D	=	.debug
LIBS_3PTY_SUF_ST_R	=	

LIBS_3PTY_MT_D=\
 \
 -lsystemtools.clasp.$(CLASP_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).util.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).fe.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).bec.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).be.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 -lrecls.$(RECLS_VER_MAJOR).$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_D)\
 \

LIBS_3PTY_MT_R=\
 \
 -lsystemtools.clasp.$(CLASP_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).util.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).fe.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).bec.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).be.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 -lrecls.$(RECLS_VER_MAJOR).$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_MT_R)\
 \

LIBS_3PTY_ST_D=\
 \
 -lsystemtools.clasp.$(CLASP_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).util.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).fe.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).bec.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).be.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 -lrecls.$(RECLS_VER_MAJOR).$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_D)\
 \

LIBS_3PTY_ST_R=\
 \
 -lsystemtools.clasp.$(CLASP_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).util.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).core.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).fe.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).bec.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lpantheios.$(PANTHEIOS_VER_MAJOR).be.null.$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 -lrecls.$(RECLS_VER_MAJOR).$(COMP_TAG)$(ARCH_TAG)$(LIBS_3PTY_SUF_ST_R)\
 \


########################################
# #defines
#

OS_DEFS				=	-Dunix

COMMON_DEFS 		=

CUSTOM_DEFS			=

CC_CUSTOM_DEFS		=	$(CUSTOM_DEFS)

CPPC_CUSTOM_DEFS	=	$(CUSTOM_DEFS)

CC_DEFS_COMMON=\
 $(COMMON_DEFS)\
 $(OS_DEFS)\
 $(CC_CUSTOM_DEFS)\
 \

CPPC_DEFS_COMMON=\
 $(COMMON_DEFS)\
 $(OS_DEFS)\
 $(CPPC_CUSTOM_DEFS)\
 \

CC_DEFS_COMMON_D		=
CC_DEFS_COMMON_R		=

CPPC_DEFS_COMMON_D		=
CPPC_DEFS_COMMON_R		=

CC_LIB_DEFS_MT_D	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_D) $(CC_CUSTOM_DEFS_DEBUG)
CC_LIB_DEFS_MT_R	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_R) $(CC_CUSTOM_DEFS_DEBUG)
CC_LIB_DEFS_ST_D	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_D) $(CC_CUSTOM_DEFS_DEBUG)
CC_LIB_DEFS_ST_R	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_R) $(CC_CUSTOM_DEFS_DEBUG)

CPPC_LIB_DEFS_MT_D	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_D) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_LIB_DEFS_MT_R	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_R) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_LIB_DEFS_ST_D	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_D) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_LIB_DEFS_ST_R	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_R) $(CPPC_CUSTOM_DEFS_DEBUG)

CC_EX_DEFS_MT_D	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_D) $(CC_CUSTOM_DEFS_DEBUG)
CC_EX_DEFS_MT_R	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_R) $(CC_CUSTOM_DEFS_DEBUG)
CC_EX_DEFS_ST_D	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_D) $(CC_CUSTOM_DEFS_DEBUG)
CC_EX_DEFS_ST_R	=	$(CC_DEFS_COMMON) $(CC_DEFS_COMMON_R) $(CC_CUSTOM_DEFS_DEBUG)

CPPC_EX_DEFS_MT_D	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_D) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_EX_DEFS_MT_R	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_R) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_EX_DEFS_ST_D	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_D) $(CPPC_CUSTOM_DEFS_DEBUG)
CPPC_EX_DEFS_ST_R	=	$(CPPC_DEFS_COMMON) $(CPPC_DEFS_COMMON_R) $(CPPC_CUSTOM_DEFS_DEBUG)

########################################
# flags
#

COMMON_FLAGS			=

CUSTOM_FLAGS			=

CC_CUSTOM_FLAGS			=	$(CUSTOM_FLAGS)

CPPC_CUSTOM_FLAGS 		=	$(CUSTOM_FLAGS)

CC_F_ADDITIONAL			=	
CC_F_COMPILE_ONLY		=	-c
CC_F_MAXIMUM_SPEED		=	-O2
CC_F_MINIMUM_SIZE		=	-O1
CC_F_NOLOGO 			=	
CC_F_WARNING_ERR		=	-Werror
CC_F_WARNING_MAX		=	-Wall -pedantic
CC_F_WARNING_SUP		=	-Wno-long-long       -Wno-extern-initializer -Wno-missing-braces -Wno-unused-function
CC_F_WARNINGS_LIMIT		=	
CC_EX_F_WARNING_ERR		=	$(CC_F_WARNING_ERR)
CC_EX_F_WARNING_MAX		=	$(CC_F_WARNING_MAX)
CC_EX_F_WARNING_SUP		=	$(CC_F_WARNING_SUP)

CPPC_F_ADDITIONAL		=	
CPPC_F_COMPILE_ONLY 	=	-c
CPPC_F_EXCEPTIONS		=	$(CPPC_F_EXCEPTIONS_ON)
CPPC_F_EXCEPTIONS_OFF	=	
CPPC_F_EXCEPTIONS_ON	=	
CPPC_F_MAXIMUM_SPEED	=	-O2
CPPC_F_MINIMUM_SIZE 	=	-O1
CPPC_F_NOLOGO			=	
CPPC_F_OPTIMISED		=	$(CPPC_F_MAXIMUM_SPEED)
CPPC_F_RTTI				=	$(CPPC_F_RTTI_ON)
CPPC_F_RTTI_OFF 		=	
CPPC_F_RTTI_ON			=	
CPPC_F_WARNING_ERR		=	-Werror
CPPC_F_WARNING_MAX		=	-Wall -pedantic
CPPC_F_WARNING_SUP		=	-Wno-c++11-long-long -Wno-extern-initializer -Wno-missing-braces -Wno-unused-function
CPPC_F_WARNINGS_LIMIT	=	
CPPC_EX_F_WARNING_ERR	=	$(CPPC_F_WARNING_ERR)
CPPC_EX_F_WARNING_MAX	=	$(CPPC_F_WARNING_MAX)
CPPC_EX_F_WARNING_SUP	=	$(CPPC_F_WARNING_SUP)

CC_FLAGS_COMMON=\
 $(CC_F_ADDITIONAL)\
 $(CC_F_COMPILE_ONLY)\
 $(CC_F_NOLOGO)\
 $(CC_F_WARNING_ERR)\
 $(CC_F_WARNING_MAX)\
 $(CC_F_WARNING_SUP)\
 $(CC_F_WARNINGS_LIMIT)\
 $(CC_CUSTOM_FLAGS)\
 \

CPPC_FLAGS_COMMON=\
 $(CPPC_F_ADDITIONAL)\
 $(CPPC_F_COMPILE_ONLY)\
 $(CPPC_F_EXCEPTIONS_ON)\
 $(CPPC_F_NOLOGO)\
 $(CPPC_F_RTTI)\
 $(CPPC_F_WARNING_ERR)\
 $(CPPC_F_WARNING_MAX)\
 $(CPPC_F_WARNING_SUP)\
 $(CPPC_F_WARNINGS_LIMIT)\
 $(CPPC_CUSTOM_FLAGS)\
 \

CC_EX_FLAGS_COMMON=\
 $(CC_EX_F_WARNING_ERR)\
 $(CC_EX_F_WARNING_MAX)\
 $(CC_EX_F_WARNING_SUP)\
 $(CC_F_ADDITIONAL)\
 $(CC_F_COMPILE_ONLY)\
 $(CC_F_NOLOGO)\
 $(CC_F_WARNINGS_LIMIT)\
 $(CC_CUSTOM_FLAGS)\
 \

CPPC_EX_FLAGS_COMMON=\
 $(CPPC_EX_F_WARNING_ERR)\
 $(CPPC_EX_F_WARNING_MAX)\
 $(CPPC_EX_F_WARNING_SUP)\
 $(CPPC_F_ADDITIONAL)\
 $(CPPC_F_COMPILE_ONLY)\
 $(CPPC_F_EXCEPTIONS_ON)\
 $(CPPC_F_NOLOGO)\
 $(CPPC_F_RTTI)\
 $(CPPC_F_WARNINGS_LIMIT)\
 $(CPPC_CUSTOM_FLAGS)\
 \

CC_FLAGS_COMMON_D		=
CC_FLAGS_COMMON_R		=

CPPC_FLAGS_COMMON_D		=
CPPC_FLAGS_COMMON_R		=

CC_LIB_FLAGS_MT_D			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_D) $(CC_CUSTOM_FLAGS_DEBUG) $(CC_CUSTOM_DEFS_DEBUG) -D_REENTRANT -D_DEBUG -UNDEBUG
CC_LIB_FLAGS_MT_R			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_R) $(CC_CUSTOM_FLAGS_RELEASE) $(CC_CUSTOM_DEFS_RELEASE) -D_REENTRANT -U_DEBUG -DNDEBUG
CC_LIB_FLAGS_ST_D			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_D) $(CC_CUSTOM_FLAGS_DEBUG) $(CC_CUSTOM_DEFS_DEBUG) -D_DEBUG -UNDEBUG
CC_LIB_FLAGS_ST_R			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_R) $(CC_CUSTOM_FLAGS_RELEASE) $(CC_CUSTOM_DEFS_RELEASE) -DNDEBUG -U_DEBUG

CPPC_LIB_FLAGS_MT_D		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_D) $(CPPC_CUSTOM_FLAGS_DEBUG) $(CPPC_CUSTOM_DEFS_DEBUG) -D_REENTRANT -D_DEBUG -UNDEBUG
CPPC_LIB_FLAGS_MT_R		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_R) $(CPPC_CUSTOM_FLAGS_RELEASE) $(CPPC_CUSTOM_DEFS_RELEASE) -D_REENTRANT -U_DEBUG -DNDEBUG
CPPC_LIB_FLAGS_ST_D		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_D) $(CPPC_CUSTOM_FLAGS_DEBUG) $(CPPC_CUSTOM_DEFS_DEBUG) -D_DEBUG -UNDEBUG
CPPC_LIB_FLAGS_ST_R		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_R) $(CPPC_CUSTOM_FLAGS_RELEASE) $(CPPC_CUSTOM_DEFS_RELEASE) -DNDEBUG -U_DEBUG

CC_EX_FLAGS_MT_D			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_D) $(CC_CUSTOM_FLAGS_DEBUG) $(CC_CUSTOM_DEFS_DEBUG) -D_REENTRANT -D_DEBUG -UNDEBUG
CC_EX_FLAGS_MT_R			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_R) $(CC_CUSTOM_FLAGS_RELEASE) $(CC_CUSTOM_DEFS_RELEASE) -D_REENTRANT -U_DEBUG -DNDEBUG
CC_EX_FLAGS_ST_D			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_D) $(CC_CUSTOM_FLAGS_DEBUG) $(CC_CUSTOM_DEFS_DEBUG) -D_DEBUG -UNDEBUG
CC_EX_FLAGS_ST_R			=	$(CC_FLAGS_COMMON) $(CC_FLAGS_COMMON_R) $(CC_CUSTOM_FLAGS_RELEASE) $(CC_CUSTOM_DEFS_RELEASE) -DNDEBUG -U_DEBUG

CPPC_EX_FLAGS_MT_D		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_D) $(CPPC_CUSTOM_FLAGS_DEBUG) $(CPPC_CUSTOM_DEFS_DEBUG) -D_REENTRANT -D_DEBUG -UNDEBUG
CPPC_EX_FLAGS_MT_R		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_R) $(CPPC_CUSTOM_FLAGS_RELEASE) $(CPPC_CUSTOM_DEFS_RELEASE) -D_REENTRANT -U_DEBUG -DNDEBUG
CPPC_EX_FLAGS_ST_D		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_D) $(CPPC_CUSTOM_FLAGS_DEBUG) $(CPPC_CUSTOM_DEFS_DEBUG) -D_DEBUG -UNDEBUG
CPPC_EX_FLAGS_ST_R		=	$(CPPC_FLAGS_COMMON) $(CPPC_FLAGS_COMMON_R) $(CPPC_CUSTOM_FLAGS_RELEASE) $(CPPC_CUSTOM_DEFS_RELEASE) -DNDEBUG -U_DEBUG

########################################
# arguments (= flags + defines + includes)

########################################
# compilers


########################################
# archiver

AR_COMMOM_FLAGS			=

AR_CUSTOM_FLAGS			=

AR_F_ADDITIONAL			=	
AR_F_ARCHITECTURE		=	
AR_F_WARNING_ERR		=	
AR_F_WARNING_MAX		=	
AR_F_NOLOGO 			=	

AR_ARGS_COMMON=\
 $(AR_F_ADDITIONAL)\
 $(AR_F_ARCHITECTURE)\
 $(AR_F_WARNING_ERR)\
 $(AR_F_WARNING_MAX)\
 $(AR_F_WARNING_SUP)\
 $(AR_F_NOLOGO)\
 \

AR_ARGS_MT_D				=	$(AR_ARGS_COMMON)
AR_ARGS_MT_R				=	$(AR_ARGS_COMMON)
AR_ARGS_ST_D				=	$(AR_ARGS_COMMON)
AR_ARGS_ST_R				=	$(AR_ARGS_COMMON)

########################################
# linker

LD_COMMOM_FLAGS			=

LD_CUSTOM_FLAGS			=

LD_F_ADDITIONAL			=	
LD_F_ARCHITECTURE		=	
LD_F_WARNING_ERR		=	
LD_F_WARNING_MAX		=	
LD_F_NOLOGO 			=	

LD_ARGS_COMMON=\
 $(LD_F_ADDITIONAL)\
 $(LD_F_ARCHITECTURE)\
 $(LD_F_WARNING_ERR)\
 $(LD_F_WARNING_MAX)\
 $(LD_F_WARNING_SUP)\
 $(LD_F_NOLOGO)\
 \

LD_ARGS_MT_D				=	$(LD_ARGS_COMMON)
LD_ARGS_MT_R				=	$(LD_ARGS_COMMON)
LD_ARGS_ST_D				=	$(LD_ARGS_COMMON)
LD_ARGS_ST_R				=	$(LD_ARGS_COMMON)


############################################################################
# headers

CORE_HEADERS=\
 \
 $(PROJ_INCLUDE_DIR)/libclimate/basic_types.h\
 $(PROJ_INCLUDE_DIR)/libclimate/common.h\
 $(PROJ_INCLUDE_DIR)/libclimate/main.h\
 $(PROJ_INCLUDE_DIR)/libclimate/version.h\
 $(PROJ_INCLUDE_DIR)/libclimate/main.hpp\
 $(PROJ_INCLUDE_DIR)/libclimate/implicit_link/core.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/clasp.clasp.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/clasp.main.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/common.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/pantheios.extras.diagutil.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/pantheios.extras.main.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/pantheios.pantheios.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/stlsoft.stlsoft.h\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/clasp.clasp.hpp\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/clasp.main.hpp\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/pantheios.extras.diagutil.hpp\
 $(PROJ_INCLUDE_DIR)/libclimate/internal/pantheios.extras.main.hpp\
 $(PROJ_INCLUDE_DIR)/libclimate/main/api.h\
 $(PROJ_INCLUDE_DIR)/libclimate/main/api.hpp\
 \
 $(PROJ_INCLUDE_DIR)/SynesisSoftware/CommandLineInterface/main.h\
 $(PROJ_INCLUDE_DIR)/SynesisSoftware/CommandLineInterface/main.hpp\
 $(PROJ_INCLUDE_DIR)/SynesisSoftware/CommandLineInterface/implicit_link/core.h\
 $(PROJ_INCLUDE_DIR)/SynesisSoftware/CommandLineInterface/main/api.h\
 $(PROJ_INCLUDE_DIR)/SynesisSoftware/CommandLineInterface/main/api.hpp\
 \
 $(PROJ_SRC_DIR)/quiet_program_termination_exception.hpp\
 \

############################################################################
# names

############################################################
# targets

########################################
# libraries

LIB_CORE_MT_D				=	$(PROJ_LIB_DIR)/$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D).a

LIB_CORE_MT_R				=	$(PROJ_LIB_DIR)/$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R).a

LIB_CORE_ST_D				=	$(PROJ_LIB_DIR)/$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D).a

LIB_CORE_ST_R				=	$(PROJ_LIB_DIR)/$(PROJ_TAG_VER).core.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R).a

LIBS_CORE=\
 \
 $(LIB_CORE_MT_D)\
 \
 $(LIB_CORE_MT_R)\
 \
 $(LIB_CORE_ST_D)\
 \
 $(LIB_CORE_ST_R)\
 \

########################################
# examples

TARG_EX_C_args_MT_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D)
TARG_EX_C_impl_MT_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D)
TARG_EX_Cpp_args_MT_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D)
TARG_EX_Cpp_impl_MT_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D)
TARG_EX_Cpp_wmain_MT_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.wmain.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_D)

TARG_EX_C_args_MT_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R)
TARG_EX_C_impl_MT_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R)
TARG_EX_Cpp_args_MT_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R)
TARG_EX_Cpp_impl_MT_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R)
TARG_EX_Cpp_wmain_MT_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.wmain.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_MT_R)

TARG_EX_C_args_ST_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D)
TARG_EX_C_impl_ST_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D)
TARG_EX_Cpp_args_ST_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D)
TARG_EX_Cpp_impl_ST_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D)
TARG_EX_Cpp_wmain_ST_D		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.wmain.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_D)

TARG_EX_C_args_ST_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R)
TARG_EX_C_impl_ST_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.c.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R)
TARG_EX_Cpp_args_ST_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.args.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R)
TARG_EX_Cpp_impl_ST_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.impl.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R)
TARG_EX_Cpp_wmain_ST_R		=	$(PROJ_BIN_DIR)/$(PROJ_TAG_VER).ex.cpp.wmain.$(COMP_ARCH_OS_TAG)$(LIBCLI_SUF_ST_R)

TARGS_EX=\
 \
 $(TARG_EX_C_args_MT_D)\
 $(TARG_EX_C_impl_MT_D)\
 $(TARG_EX_Cpp_args_MT_D)\
 $(TARG_EX_Cpp_impl_MT_D)\
 \
 $(TARG_EX_C_args_MT_R)\
 $(TARG_EX_C_impl_MT_R)\
 $(TARG_EX_Cpp_args_MT_R)\
 $(TARG_EX_Cpp_impl_MT_R)\
 \
 $(TARG_EX_C_args_ST_D)\
 $(TARG_EX_C_impl_ST_D)\
 $(TARG_EX_Cpp_args_ST_D)\
 $(TARG_EX_Cpp_impl_ST_D)\
 \
 $(TARG_EX_C_args_ST_R)\
 $(TARG_EX_C_impl_ST_R)\
 $(TARG_EX_Cpp_args_ST_R)\
 $(TARG_EX_Cpp_impl_ST_R)\
 \

########################################
# tests

##############################
# component tests

##############################
# performance tests

##############################
# scratch tests

##############################
# unit tests

############################################################
# objects

########################################
# libraries

OBJ_CORE_exitimm_MT_D	=	$(PROJ_OBJ_DIR)/core.exit_immediately$(LIBCLI_SUF_MT_D).o
OBJ_CORE_entryC_MT_D	=	$(PROJ_OBJ_DIR)/core.main_entry_point_C$(LIBCLI_SUF_MT_D).o
OBJ_CORE_entryCpp_MT_D	=	$(PROJ_OBJ_DIR)/core.main_entry_point_Cpp$(LIBCLI_SUF_MT_D).o
OBJ_CORE_unwindex_MT_D	=	$(PROJ_OBJ_DIR)/core.unwind_and_exit$(LIBCLI_SUF_MT_D).o
OBJ_CORE_usageetc_MT_D	=	$(PROJ_OBJ_DIR)/core.usage_etc$(LIBCLI_SUF_MT_D).o

OBJ_CORE_exitimm_MT_R	=	$(PROJ_OBJ_DIR)/core.exit_immediately$(LIBCLI_SUF_MT_R).o
OBJ_CORE_entryC_MT_R	=	$(PROJ_OBJ_DIR)/core.main_entry_point_C$(LIBCLI_SUF_MT_R).o
OBJ_CORE_entryCpp_MT_R	=	$(PROJ_OBJ_DIR)/core.main_entry_point_Cpp$(LIBCLI_SUF_MT_R).o
OBJ_CORE_unwindex_MT_R	=	$(PROJ_OBJ_DIR)/core.unwind_and_exit$(LIBCLI_SUF_MT_R).o
OBJ_CORE_usageetc_MT_R	=	$(PROJ_OBJ_DIR)/core.usage_etc$(LIBCLI_SUF_MT_R).o

OBJ_CORE_exitimm_ST_D	=	$(PROJ_OBJ_DIR)/core.exit_immediately$(LIBCLI_SUF_ST_D).o
OBJ_CORE_entryC_ST_D	=	$(PROJ_OBJ_DIR)/core.main_entry_point_C$(LIBCLI_SUF_ST_D).o
OBJ_CORE_entryCpp_ST_D	=	$(PROJ_OBJ_DIR)/core.main_entry_point_Cpp$(LIBCLI_SUF_ST_D).o
OBJ_CORE_unwindex_ST_D	=	$(PROJ_OBJ_DIR)/core.unwind_and_exit$(LIBCLI_SUF_ST_D).o
OBJ_CORE_usageetc_ST_D	=	$(PROJ_OBJ_DIR)/core.usage_etc$(LIBCLI_SUF_ST_D).o

OBJ_CORE_exitimm_ST_R	=	$(PROJ_OBJ_DIR)/core.exit_immediately$(LIBCLI_SUF_ST_R).o
OBJ_CORE_entryC_ST_R	=	$(PROJ_OBJ_DIR)/core.main_entry_point_C$(LIBCLI_SUF_ST_R).o
OBJ_CORE_entryCpp_ST_R	=	$(PROJ_OBJ_DIR)/core.main_entry_point_Cpp$(LIBCLI_SUF_ST_R).o
OBJ_CORE_unwindex_ST_R	=	$(PROJ_OBJ_DIR)/core.unwind_and_exit$(LIBCLI_SUF_ST_R).o
OBJ_CORE_usageetc_ST_R	=	$(PROJ_OBJ_DIR)/core.usage_etc$(LIBCLI_SUF_ST_R).o

OBJS_CORE=\
 \
 $(OBJ_CORE_exitimm_MT_D)\
 $(OBJ_CORE_entryC_MT_D)\
 $(OBJ_CORE_entryCpp_MT_D)\
 $(OBJ_CORE_unwindex_MT_D)\
 $(OBJ_CORE_usageetc_MT_D)\
 \
 $(OBJ_CORE_exitimm_MT_R)\
 $(OBJ_CORE_entryC_MT_R)\
 $(OBJ_CORE_entryCpp_MT_R)\
 $(OBJ_CORE_unwindex_MT_R)\
 $(OBJ_CORE_usageetc_MT_R)\
 \
 $(OBJ_CORE_exitimm_ST_D)\
 $(OBJ_CORE_entryC_ST_D)\
 $(OBJ_CORE_entryCpp_ST_D)\
 $(OBJ_CORE_unwindex_ST_D)\
 $(OBJ_CORE_usageetc_ST_D)\
 \
 $(OBJ_CORE_exitimm_ST_R)\
 $(OBJ_CORE_entryC_ST_R)\
 $(OBJ_CORE_entryCpp_ST_R)\
 $(OBJ_CORE_unwindex_ST_R)\
 $(OBJ_CORE_usageetc_ST_R)\
 \

########################################
# examples

OBJ_EX_C_args_entr_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.args.entr$(LIBCLI_SUF_MT_D).o
OBJ_EX_C_args_impl_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.args.impl$(LIBCLI_SUF_MT_D).o
OBJ_EX_C_args_main_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.args.main$(LIBCLI_SUF_MT_D).o

OBJ_EX_C_impl_diag_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.diag$(LIBCLI_SUF_MT_D).o
OBJ_EX_C_impl_entr_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.entr$(LIBCLI_SUF_MT_D).o
OBJ_EX_C_impl_impl_MT_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.impl$(LIBCLI_SUF_MT_D).o

OBJ_EX_Cpp_args_diag_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.diag$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_args_entr_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.entr$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_args_impl_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.impl$(LIBCLI_SUF_MT_D).o

OBJ_EX_Cpp_impl_diag_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.diag$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_impl_entr_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.entr$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_impl_impl_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.impl$(LIBCLI_SUF_MT_D).o

OBJ_EX_Cpp_wmain_diag_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.diag$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_wmain_entr_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.entr$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_wmain_impl_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.impl$(LIBCLI_SUF_MT_D).o
OBJ_EX_Cpp_wmain_main_MT_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.main$(LIBCLI_SUF_MT_D).o

OBJ_EX_C_args_entr_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.args.entr$(LIBCLI_SUF_MT_R).o
OBJ_EX_C_args_impl_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.args.impl$(LIBCLI_SUF_MT_R).o
OBJ_EX_C_args_main_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.args.main$(LIBCLI_SUF_MT_R).o

OBJ_EX_C_impl_diag_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.diag$(LIBCLI_SUF_MT_R).o
OBJ_EX_C_impl_entr_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.entr$(LIBCLI_SUF_MT_R).o
OBJ_EX_C_impl_impl_MT_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.impl$(LIBCLI_SUF_MT_R).o

OBJ_EX_Cpp_args_diag_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.diag$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_args_entr_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.entr$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_args_impl_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.impl$(LIBCLI_SUF_MT_R).o

OBJ_EX_Cpp_impl_diag_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.diag$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_impl_entr_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.entr$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_impl_impl_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.impl$(LIBCLI_SUF_MT_R).o

OBJ_EX_Cpp_wmain_diag_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.diag$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_wmain_entr_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.entr$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_wmain_impl_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.impl$(LIBCLI_SUF_MT_R).o
OBJ_EX_Cpp_wmain_main_MT_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.main$(LIBCLI_SUF_MT_R).o

OBJ_EX_C_args_entr_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.args.entr$(LIBCLI_SUF_ST_D).o
OBJ_EX_C_args_impl_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.args.impl$(LIBCLI_SUF_ST_D).o
OBJ_EX_C_args_main_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.args.main$(LIBCLI_SUF_ST_D).o

OBJ_EX_C_impl_diag_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.diag$(LIBCLI_SUF_ST_D).o
OBJ_EX_C_impl_entr_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.entr$(LIBCLI_SUF_ST_D).o
OBJ_EX_C_impl_impl_ST_D	=	$(PROJ_OBJ_DIR)/ex.c.impl.impl$(LIBCLI_SUF_ST_D).o

OBJ_EX_Cpp_args_diag_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.diag$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_args_entr_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.entr$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_args_impl_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.args.impl$(LIBCLI_SUF_ST_D).o

OBJ_EX_Cpp_impl_diag_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.diag$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_impl_entr_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.entr$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_impl_impl_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.impl$(LIBCLI_SUF_ST_D).o

OBJ_EX_Cpp_wmain_diag_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.diag$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_wmain_entr_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.entr$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_wmain_impl_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.impl$(LIBCLI_SUF_ST_D).o
OBJ_EX_Cpp_wmain_main_ST_D	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.main$(LIBCLI_SUF_ST_D).o

OBJ_EX_C_args_entr_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.args.entr$(LIBCLI_SUF_ST_R).o
OBJ_EX_C_args_impl_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.args.impl$(LIBCLI_SUF_ST_R).o
OBJ_EX_C_args_main_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.args.main$(LIBCLI_SUF_ST_R).o

OBJ_EX_C_impl_diag_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.diag$(LIBCLI_SUF_ST_R).o
OBJ_EX_C_impl_entr_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.entr$(LIBCLI_SUF_ST_R).o
OBJ_EX_C_impl_impl_ST_R	=	$(PROJ_OBJ_DIR)/ex.c.impl.impl$(LIBCLI_SUF_ST_R).o

OBJ_EX_Cpp_args_diag_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.diag$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_args_entr_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.entr$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_args_impl_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.args.impl$(LIBCLI_SUF_ST_R).o

OBJ_EX_Cpp_impl_diag_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.diag$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_impl_entr_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.entr$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_impl_impl_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.impl.impl$(LIBCLI_SUF_ST_R).o

OBJ_EX_Cpp_wmain_diag_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.diag$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_wmain_entr_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.entr$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_wmain_impl_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.impl$(LIBCLI_SUF_ST_R).o
OBJ_EX_Cpp_wmain_main_ST_R	=	$(PROJ_OBJ_DIR)/ex.cpp.wmain.main$(LIBCLI_SUF_ST_R).o


OBJS_EX=\
 \
 $(OBJ_EX_C_args_entr_MT_D)\
 $(OBJ_EX_C_args_impl_MT_D)\
 $(OBJ_EX_C_args_main_MT_D)\
 \
 $(OBJ_EX_C_impl_diag_MT_D)\
 $(OBJ_EX_C_impl_entr_MT_D)\
 $(OBJ_EX_C_impl_impl_MT_D)\
 \
 $(OBJ_EX_Cpp_args_diag_MT_D)\
 $(OBJ_EX_Cpp_args_entr_MT_D)\
 $(OBJ_EX_Cpp_args_impl_MT_D)\
 \
 $(OBJ_EX_Cpp_impl_diag_MT_D)\
 $(OBJ_EX_Cpp_impl_entr_MT_D)\
 $(OBJ_EX_Cpp_impl_impl_MT_D)\
 \
 $(OBJ_EX_C_args_entr_MT_R)\
 $(OBJ_EX_C_args_impl_MT_R)\
 $(OBJ_EX_C_args_main_MT_R)\
 \
 $(OBJ_EX_C_impl_diag_MT_R)\
 $(OBJ_EX_C_impl_entr_MT_R)\
 $(OBJ_EX_C_impl_impl_MT_R)\
 \
 $(OBJ_EX_Cpp_args_diag_MT_R)\
 $(OBJ_EX_Cpp_args_entr_MT_R)\
 $(OBJ_EX_Cpp_args_impl_MT_R)\
 \
 $(OBJ_EX_Cpp_impl_diag_MT_R)\
 $(OBJ_EX_Cpp_impl_entr_MT_R)\
 $(OBJ_EX_Cpp_impl_impl_MT_R)\
 \
 $(OBJ_EX_C_args_entr_ST_D)\
 $(OBJ_EX_C_args_impl_ST_D)\
 $(OBJ_EX_C_args_main_ST_D)\
 \
 $(OBJ_EX_C_impl_diag_ST_D)\
 $(OBJ_EX_C_impl_entr_ST_D)\
 $(OBJ_EX_C_impl_impl_ST_D)\
 \
 $(OBJ_EX_Cpp_args_diag_ST_D)\
 $(OBJ_EX_Cpp_args_entr_ST_D)\
 $(OBJ_EX_Cpp_args_impl_ST_D)\
 \
 $(OBJ_EX_Cpp_impl_diag_ST_D)\
 $(OBJ_EX_Cpp_impl_entr_ST_D)\
 $(OBJ_EX_Cpp_impl_impl_ST_D)\
 \
 $(OBJ_EX_C_args_entr_ST_R)\
 $(OBJ_EX_C_args_impl_ST_R)\
 $(OBJ_EX_C_args_main_ST_R)\
 \
 $(OBJ_EX_C_impl_diag_ST_R)\
 $(OBJ_EX_C_impl_entr_ST_R)\
 $(OBJ_EX_C_impl_impl_ST_R)\
 \
 $(OBJ_EX_Cpp_args_diag_ST_R)\
 $(OBJ_EX_Cpp_args_entr_ST_R)\
 $(OBJ_EX_Cpp_args_impl_ST_R)\
 \
 $(OBJ_EX_Cpp_impl_diag_ST_R)\
 $(OBJ_EX_Cpp_impl_entr_ST_R)\
 $(OBJ_EX_Cpp_impl_impl_ST_R)\
 \
 \

########################################
# tests

##############################
# component tests

##############################
# performance tests

##############################
# scratch tests

##############################
# unit tests

############################################################################
# external targets (invokable by make)

# primary

_default:                   build


# infrastructure


prep.files.for.os:	$(PROJ_MAKEFILE_NAME)\
	\

prep:	prep.files.for.os


CHECK_FILE_lib_dir	=	$(PROJ_LIB_DIR)/.dir_exists
CHECK_FILE_bin_dir	=	$(PROJ_BIN_DIR)/.dir_exists

check.lib.dir:		$(PROJ_MAKEFILE_NAME) $(CHECK_FILE_lib_dir)

$(CHECK_FILE_lib_dir):
	@mkdir -p $(PROJ_LIB_DIR)
	touch $(CHECK_FILE_lib_dir)

check.bin.dir:		$(PROJ_MAKEFILE_NAME) $(CHECK_FILE_bin_dir)

$(CHECK_FILE_bin_dir):
	@mkdir -p $(PROJ_BIN_DIR)
	touch $(PROJ_SRC_DIR)/.dir_exists


# compile targets

compile.libs.core:			prep	$(OBJS_CORE)

compile.libs:						compile.libs.core

compile.examples:			prep	$(OBJS_EX)

compile:	\
 compile.libs\
 compile.examples\
 \



# build targets

build.libs.core:			prep	$(LIBS_CORE)

build.libs: 						build.libs.core

build.examples:				prep	$(TARGS_EX)

build:	\
 build.libs\
 build.examples\
 \


# clean targets

clean.libs.core:
	@echo cleaning core libraries ...
	@$(RM) core.*.o
	@$(RM) $(LIB_CORE_MT_D)
	@$(RM) core.*.o
	@$(RM) $(LIB_CORE_MT_R)
	@$(RM) core.*.o
	@$(RM) $(LIB_CORE_ST_D)
	@$(RM) core.*.o
	@$(RM) $(LIB_CORE_ST_R)

clean.libs:							clean.libs.core

clean.examples:
	@echo cleaning examples ...
	@$(RM) ex.*.o
	@$(RM) $(TARG_EX_C_args_MT_D)
	@$(RM) $(TARG_EX_C_impl_MT_D)
	@$(RM) $(TARG_EX_Cpp_args_MT_D)
	@$(RM) $(TARG_EX_Cpp_impl_MT_D)
	@$(RM) ex.*.o
	@$(RM) $(TARG_EX_C_args_MT_R)
	@$(RM) $(TARG_EX_C_impl_MT_R)
	@$(RM) $(TARG_EX_Cpp_args_MT_R)
	@$(RM) $(TARG_EX_Cpp_impl_MT_R)
	@$(RM) ex.*.o
	@$(RM) $(TARG_EX_C_args_ST_D)
	@$(RM) $(TARG_EX_C_impl_ST_D)
	@$(RM) $(TARG_EX_Cpp_args_ST_D)
	@$(RM) $(TARG_EX_Cpp_impl_ST_D)
	@$(RM) ex.*.o
	@$(RM) $(TARG_EX_C_args_ST_R)
	@$(RM) $(TARG_EX_C_impl_ST_R)
	@$(RM) $(TARG_EX_Cpp_args_ST_R)
	@$(RM) $(TARG_EX_Cpp_impl_ST_R)

clean:	\
 clean.libs\
 clean.examples\
 \


############################################################################
# build targets

##################################################
# libraries

OBJS_CORE_MT_D=\
 \
 $(OBJ_CORE_exitimm_MT_D)\
 $(OBJ_CORE_entryC_MT_D)\
 $(OBJ_CORE_entryCpp_MT_D)\
 $(OBJ_CORE_unwindex_MT_D)\
 $(OBJ_CORE_usageetc_MT_D)\
 \

$(LIB_CORE_MT_D):	$(CHECK_FILE_lib_dir) $(OBJS_CORE_MT_D)
	$(AR) $(AR_ARGS_MT_D) -crs $@ $(OBJS_CORE_MT_D)

$(OBJ_CORE_exitimm_MT_D): $(PROJ_SRC_DIR)/exit_immediately.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_D) $(CC_LIB_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/exit_immediately.c

$(OBJ_CORE_entryC_MT_D):	$(PROJ_SRC_DIR)/main_entry_point_C.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_D) $(CC_LIB_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_C.c

$(OBJ_CORE_entryCpp_MT_D):	$(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_MT_D) $(CPPC_LIB_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp

$(OBJ_CORE_unwindex_MT_D):	$(PROJ_SRC_DIR)/unwind_and_exit.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_MT_D) $(CPPC_LIB_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/unwind_and_exit.cpp

$(OBJ_CORE_usageetc_MT_D):	$(PROJ_SRC_DIR)/usage_etc.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_D) $(CC_LIB_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/usage_etc.c


OBJS_CORE_MT_R=\
 \
 $(OBJ_CORE_exitimm_MT_R)\
 $(OBJ_CORE_entryC_MT_R)\
 $(OBJ_CORE_entryCpp_MT_R)\
 $(OBJ_CORE_unwindex_MT_R)\
 $(OBJ_CORE_usageetc_MT_R)\
 \

$(LIB_CORE_MT_R):	$(CHECK_FILE_lib_dir) $(OBJS_CORE_MT_R)
	$(AR) $(AR_ARGS_MT_R) -crs $@ $(OBJS_CORE_MT_R)

$(OBJ_CORE_exitimm_MT_R): $(PROJ_SRC_DIR)/exit_immediately.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_R) $(CC_LIB_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/exit_immediately.c

$(OBJ_CORE_entryC_MT_R):	$(PROJ_SRC_DIR)/main_entry_point_C.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_R) $(CC_LIB_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_C.c

$(OBJ_CORE_entryCpp_MT_R):	$(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_MT_R) $(CPPC_LIB_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp

$(OBJ_CORE_unwindex_MT_R):	$(PROJ_SRC_DIR)/unwind_and_exit.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_MT_R) $(CPPC_LIB_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/unwind_and_exit.cpp

$(OBJ_CORE_usageetc_MT_R):	$(PROJ_SRC_DIR)/usage_etc.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_MT_R) $(CC_LIB_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/usage_etc.c


OBJS_CORE_ST_D=\
 \
 $(OBJ_CORE_exitimm_ST_D)\
 $(OBJ_CORE_entryC_ST_D)\
 $(OBJ_CORE_entryCpp_ST_D)\
 $(OBJ_CORE_unwindex_ST_D)\
 $(OBJ_CORE_usageetc_ST_D)\
 \

$(LIB_CORE_ST_D):	$(CHECK_FILE_lib_dir) $(OBJS_CORE_ST_D)
	$(AR) $(AR_ARGS_ST_D) -crs $@ $(OBJS_CORE_ST_D)

$(OBJ_CORE_exitimm_ST_D): $(PROJ_SRC_DIR)/exit_immediately.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_D) $(CC_LIB_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/exit_immediately.c

$(OBJ_CORE_entryC_ST_D):	$(PROJ_SRC_DIR)/main_entry_point_C.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_D) $(CC_LIB_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_C.c

$(OBJ_CORE_entryCpp_ST_D):	$(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_ST_D) $(CPPC_LIB_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp

$(OBJ_CORE_unwindex_ST_D):	$(PROJ_SRC_DIR)/unwind_and_exit.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_ST_D) $(CPPC_LIB_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/unwind_and_exit.cpp

$(OBJ_CORE_usageetc_ST_D):	$(PROJ_SRC_DIR)/usage_etc.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_D) $(CC_LIB_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/usage_etc.c


OBJS_CORE_ST_R=\
 \
 $(OBJ_CORE_exitimm_ST_R)\
 $(OBJ_CORE_entryC_ST_R)\
 $(OBJ_CORE_entryCpp_ST_R)\
 $(OBJ_CORE_unwindex_ST_R)\
 $(OBJ_CORE_usageetc_ST_R)\
 \

$(LIB_CORE_ST_R):	$(CHECK_FILE_lib_dir) $(OBJS_CORE_ST_R)
	$(AR) $(AR_ARGS_ST_R) -crs $@ $(OBJS_CORE_ST_R)

$(OBJ_CORE_exitimm_ST_R): $(PROJ_SRC_DIR)/exit_immediately.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_R) $(CC_LIB_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/exit_immediately.c

$(OBJ_CORE_entryC_ST_R):	$(PROJ_SRC_DIR)/main_entry_point_C.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_R) $(CC_LIB_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_C.c

$(OBJ_CORE_entryCpp_ST_R):	$(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_ST_R) $(CPPC_LIB_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/main_entry_point_Cpp.cpp

$(OBJ_CORE_unwindex_ST_R):	$(PROJ_SRC_DIR)/unwind_and_exit.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_DEFS_ST_R) $(CPPC_LIB_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/unwind_and_exit.cpp

$(OBJ_CORE_usageetc_ST_R):	$(PROJ_SRC_DIR)/usage_etc.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_DEFS_ST_R) $(CC_LIB_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)/usage_etc.c



##################################################
# examples

# examples/C/example.C.args:

OBJS_EX_C_args_noimpl_MT_D=\
 \
 $(OBJ_EX_C_args_entr_MT_D)\
 $(OBJ_EX_C_args_main_MT_D)\
 \

OBJS_EX_C_args_MT_D=\
 \
 $(OBJS_EX_C_args_noimpl_MT_D)\
 $(OBJ_EX_C_args_impl_MT_D)\
 \

$(TARG_EX_C_args_MT_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_args_MT_D) $(LIB_CORE_MT_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) $(LIBPATHS) -o $@ $(OBJS_EX_C_args_noimpl_MT_D) $(LIB_CORE_MT_D) $(LIBS_3PTY_MT_D) $(LIBS_COMMON_MT_D)	

$(OBJ_EX_C_args_entr_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c

$(OBJ_EX_C_args_impl_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c

$(OBJ_EX_C_args_main_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c

OBJS_EX_C_args_noimpl_MT_R=\
 \
 $(OBJ_EX_C_args_entr_MT_R)\
 $(OBJ_EX_C_args_main_MT_R)\
 \

OBJS_EX_C_args_MT_R=\
 \
 $(OBJS_EX_C_args_noimpl_MT_R)\
 $(OBJ_EX_C_args_impl_MT_R)\
 \

$(TARG_EX_C_args_MT_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_args_MT_R) $(LIB_CORE_MT_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) $(LIBPATHS) -o $@ $(OBJS_EX_C_args_noimpl_MT_R) $(LIB_CORE_MT_R) $(LIBS_3PTY_MT_R) $(LIBS_COMMON_MT_R)	

$(OBJ_EX_C_args_entr_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c

$(OBJ_EX_C_args_impl_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c

$(OBJ_EX_C_args_main_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c

OBJS_EX_C_args_noimpl_ST_D=\
 \
 $(OBJ_EX_C_args_entr_ST_D)\
 $(OBJ_EX_C_args_main_ST_D)\
 \

OBJS_EX_C_args_ST_D=\
 \
 $(OBJS_EX_C_args_noimpl_ST_D)\
 $(OBJ_EX_C_args_impl_ST_D)\
 \

$(TARG_EX_C_args_ST_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_args_ST_D) $(LIB_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) $(LIBPATHS) -o $@ $(OBJS_EX_C_args_noimpl_ST_D) $(LIB_CORE_ST_D) $(LIBS_3PTY_ST_D) $(LIBS_COMMON_ST_D)	

$(OBJ_EX_C_args_entr_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c

$(OBJ_EX_C_args_impl_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c

$(OBJ_EX_C_args_main_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c

OBJS_EX_C_args_noimpl_ST_R=\
 \
 $(OBJ_EX_C_args_entr_ST_R)\
 $(OBJ_EX_C_args_main_ST_R)\
 \

OBJS_EX_C_args_ST_R=\
 \
 $(OBJS_EX_C_args_noimpl_ST_R)\
 $(OBJ_EX_C_args_impl_ST_R)\
 \

$(TARG_EX_C_args_ST_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_args_ST_R) $(LIB_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) $(LIBPATHS) -o $@ $(OBJS_EX_C_args_noimpl_ST_R) $(LIB_CORE_ST_R) $(LIBS_3PTY_ST_R) $(LIBS_COMMON_ST_R)	

$(OBJ_EX_C_args_entr_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/example.C.args.c

$(OBJ_EX_C_args_impl_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/implicit_link.c

$(OBJ_EX_C_args_main_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args/main.c



# examples/C/example.C.args.implicit_main:

OBJS_EX_C_impl_noimpl_MT_D=\
 \
 $(OBJ_EX_C_impl_diag_MT_D)\
 $(OBJ_EX_C_impl_entr_MT_D)\
 \

OBJS_EX_C_impl_MT_D=\
 \
 $(OBJS_EX_C_impl_noimpl_MT_D)\
 $(OBJ_EX_C_impl_impl_MT_D)\
 \

$(TARG_EX_C_impl_MT_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_impl_MT_D) $(LIB_CORE_MT_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) $(LIBPATHS) -o $@ $(OBJS_EX_C_impl_noimpl_MT_D) $(LIB_CORE_MT_D) $(LIBS_3PTY_MT_D) $(LIBS_COMMON_MT_D)

$(OBJ_EX_C_impl_diag_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c

$(OBJ_EX_C_impl_entr_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c

$(OBJ_EX_C_impl_impl_MT_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_D) $(CC_EX_FLAGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c

OBJS_EX_C_impl_noimpl_MT_R=\
 \
 $(OBJ_EX_C_impl_diag_MT_R)\
 $(OBJ_EX_C_impl_entr_MT_R)\
 \

OBJS_EX_C_impl_MT_R=\
 \
 $(OBJS_EX_C_impl_noimpl_MT_R)\
 $(OBJ_EX_C_impl_impl_MT_R)\
 \

$(TARG_EX_C_impl_MT_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_impl_MT_R) $(LIB_CORE_MT_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) $(LIBPATHS) -o $@ $(OBJS_EX_C_impl_noimpl_MT_R) $(LIB_CORE_MT_R) $(LIBS_3PTY_MT_R) $(LIBS_COMMON_MT_R)

$(OBJ_EX_C_impl_diag_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c

$(OBJ_EX_C_impl_entr_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c

$(OBJ_EX_C_impl_impl_MT_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_MT_R) $(CC_EX_FLAGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c

OBJS_EX_C_impl_noimpl_ST_D=\
 \
 $(OBJ_EX_C_impl_diag_ST_D)\
 $(OBJ_EX_C_impl_entr_ST_D)\
 \

OBJS_EX_C_impl_ST_D=\
 \
 $(OBJS_EX_C_impl_noimpl_ST_D)\
 $(OBJ_EX_C_impl_impl_ST_D)\
 \

$(TARG_EX_C_impl_ST_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_impl_ST_D) $(LIB_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) $(LIBPATHS) -o $@ $(OBJS_EX_C_impl_noimpl_ST_D) $(LIB_CORE_ST_D) $(LIBS_3PTY_ST_D) $(LIBS_COMMON_ST_D)

$(OBJ_EX_C_impl_diag_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c

$(OBJ_EX_C_impl_entr_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c

$(OBJ_EX_C_impl_impl_ST_D): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_D) $(CC_EX_FLAGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c

OBJS_EX_C_impl_noimpl_ST_R=\
 \
 $(OBJ_EX_C_impl_diag_ST_R)\
 $(OBJ_EX_C_impl_entr_ST_R)\
 \

OBJS_EX_C_impl_ST_R=\
 \
 $(OBJS_EX_C_impl_noimpl_ST_R)\
 $(OBJ_EX_C_impl_impl_ST_R)\
 \

$(TARG_EX_C_impl_ST_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_C_impl_ST_R) $(LIB_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) $(LIBPATHS) -o $@ $(OBJS_EX_C_impl_noimpl_ST_R) $(LIB_CORE_ST_R) $(LIBS_3PTY_ST_R) $(LIBS_COMMON_ST_R)

$(OBJ_EX_C_impl_diag_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/diagnostics.c

$(OBJ_EX_C_impl_entr_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/example.C.args.implicit_main.c

$(OBJ_EX_C_impl_impl_ST_R): $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EX_DEFS_ST_R) $(CC_EX_FLAGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C/example.C.args.implicit_main/implicit_link.c



# examples/C++/example.C++.args.implicit_main:

OBJS_EX_Cpp_args_noimpl_MT_D=\
 \
 $(OBJ_EX_Cpp_args_diag_MT_D)\
 $(OBJ_EX_Cpp_args_entr_MT_D)\
 \

OBJS_EX_Cpp_args_MT_D=\
 \
 $(OBJS_EX_Cpp_args_noimpl_MT_D)\
 $(OBJ_EX_Cpp_args_impl_MT_D)\
 \

$(TARG_EX_Cpp_args_MT_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_args_MT_D) $(LIB_CORE_MT_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_args_noimpl_MT_D) $(LIB_CORE_MT_D) $(LIBS_3PTY_MT_D) $(LIBS_COMMON_MT_D)

$(OBJ_EX_Cpp_args_diag_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp

$(OBJ_EX_Cpp_args_entr_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp

$(OBJ_EX_Cpp_args_impl_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp

OBJS_EX_Cpp_args_noimpl_MT_R=\
 \
 $(OBJ_EX_Cpp_args_diag_MT_R)\
 $(OBJ_EX_Cpp_args_entr_MT_R)\
 \

OBJS_EX_Cpp_args_MT_R=\
 \
 $(OBJS_EX_Cpp_args_noimpl_MT_R)\
 $(OBJ_EX_Cpp_args_impl_MT_R)\
 \

$(TARG_EX_Cpp_args_MT_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_args_MT_R) $(LIB_CORE_MT_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_args_noimpl_MT_R) $(LIB_CORE_MT_R) $(LIBS_3PTY_MT_R) $(LIBS_COMMON_MT_R)

$(OBJ_EX_Cpp_args_diag_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp

$(OBJ_EX_Cpp_args_entr_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp

$(OBJ_EX_Cpp_args_impl_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp

OBJS_EX_Cpp_args_noimpl_ST_D=\
 \
 $(OBJ_EX_Cpp_args_diag_ST_D)\
 $(OBJ_EX_Cpp_args_entr_ST_D)\
 \

OBJS_EX_Cpp_args_ST_D=\
 \
 $(OBJS_EX_Cpp_args_noimpl_ST_D)\
 $(OBJ_EX_Cpp_args_impl_ST_D)\
 \

$(TARG_EX_Cpp_args_ST_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_args_ST_D) $(LIB_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_args_noimpl_ST_D) $(LIB_CORE_ST_D) $(LIBS_3PTY_ST_D) $(LIBS_COMMON_ST_D)

$(OBJ_EX_Cpp_args_diag_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp

$(OBJ_EX_Cpp_args_entr_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp

$(OBJ_EX_Cpp_args_impl_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp

OBJS_EX_Cpp_args_noimpl_ST_R=\
 \
 $(OBJ_EX_Cpp_args_diag_ST_R)\
 $(OBJ_EX_Cpp_args_entr_ST_R)\
 \

OBJS_EX_Cpp_args_ST_R=\
 \
 $(OBJS_EX_Cpp_args_noimpl_ST_R)\
 $(OBJ_EX_Cpp_args_impl_ST_R)\
 \

$(TARG_EX_Cpp_args_ST_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_args_ST_R) $(LIB_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_args_noimpl_ST_R) $(LIB_CORE_ST_R) $(LIBS_3PTY_ST_R) $(LIBS_COMMON_ST_R)

$(OBJ_EX_Cpp_args_diag_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/diagnostics.cpp

$(OBJ_EX_Cpp_args_entr_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/example.C++.args.implicit_main.cpp

$(OBJ_EX_Cpp_args_impl_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.args.implicit_main/implicit_link.cpp



# examples/C++/example.C++.implicit_main.throw:

OBJS_EX_Cpp_impl_noimpl_MT_D=\
 \
 $(OBJ_EX_Cpp_impl_diag_MT_D)\
 $(OBJ_EX_Cpp_impl_entr_MT_D)\
 \

OBJS_EX_Cpp_impl_MT_D=\
 \
 $(OBJS_EX_Cpp_impl_noimpl_MT_D)\
 $(OBJ_EX_Cpp_impl_impl_MT_D)\
 \

$(TARG_EX_Cpp_impl_MT_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_impl_MT_D) $(LIB_CORE_MT_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_impl_noimpl_MT_D) $(LIB_CORE_MT_D) $(LIBS_3PTY_MT_D) $(LIBS_COMMON_MT_D)

$(OBJ_EX_Cpp_impl_diag_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp

$(OBJ_EX_Cpp_impl_entr_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp

$(OBJ_EX_Cpp_impl_impl_MT_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_D) $(CPPC_EX_FLAGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp

OBJS_EX_Cpp_impl_noimpl_MT_R=\
 \
 $(OBJ_EX_Cpp_impl_diag_MT_R)\
 $(OBJ_EX_Cpp_impl_entr_MT_R)\
 \

OBJS_EX_Cpp_impl_MT_R=\
 \
 $(OBJS_EX_Cpp_impl_noimpl_MT_R)\
 $(OBJ_EX_Cpp_impl_impl_MT_R)\
 \

$(TARG_EX_Cpp_impl_MT_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_impl_MT_R) $(LIB_CORE_MT_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_impl_noimpl_MT_R) $(LIB_CORE_MT_R) $(LIBS_3PTY_MT_R) $(LIBS_COMMON_MT_R)

$(OBJ_EX_Cpp_impl_diag_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp

$(OBJ_EX_Cpp_impl_entr_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp

$(OBJ_EX_Cpp_impl_impl_MT_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_MT_R) $(CPPC_EX_FLAGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp

OBJS_EX_Cpp_impl_noimpl_ST_D=\
 \
 $(OBJ_EX_Cpp_impl_diag_ST_D)\
 $(OBJ_EX_Cpp_impl_entr_ST_D)\
 \

OBJS_EX_Cpp_impl_ST_D=\
 \
 $(OBJS_EX_Cpp_impl_noimpl_ST_D)\
 $(OBJ_EX_Cpp_impl_impl_ST_D)\
 \

$(TARG_EX_Cpp_impl_ST_D):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_impl_ST_D) $(LIB_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_impl_noimpl_ST_D) $(LIB_CORE_ST_D) $(LIBS_3PTY_ST_D) $(LIBS_COMMON_ST_D)

$(OBJ_EX_Cpp_impl_diag_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp

$(OBJ_EX_Cpp_impl_entr_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp

$(OBJ_EX_Cpp_impl_impl_ST_D): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_D) $(CPPC_EX_FLAGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp

OBJS_EX_Cpp_impl_noimpl_ST_R=\
 \
 $(OBJ_EX_Cpp_impl_diag_ST_R)\
 $(OBJ_EX_Cpp_impl_entr_ST_R)\
 \

OBJS_EX_Cpp_impl_ST_R=\
 \
 $(OBJS_EX_Cpp_impl_noimpl_ST_R)\
 $(OBJ_EX_Cpp_impl_impl_ST_R)\
 \

$(TARG_EX_Cpp_impl_ST_R):	$(CHECK_FILE_bin_dir) $(OBJS_EX_Cpp_impl_ST_R) $(LIB_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) $(LIBPATHS) -o $@ $(OBJS_EX_Cpp_impl_noimpl_ST_R) $(LIB_CORE_ST_R) $(LIBS_3PTY_ST_R) $(LIBS_COMMON_ST_R)

$(OBJ_EX_Cpp_impl_diag_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/diagnostics.cpp

$(OBJ_EX_Cpp_impl_entr_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/example.C++.implicit_main.throw.cpp

$(OBJ_EX_Cpp_impl_impl_ST_R): $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EX_DEFS_ST_R) $(CPPC_EX_FLAGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)/C++/example.C++.implicit_main.throw/implicit_link.cpp


##################################################
# tests

##############################
# component tests

##############################
# performance tests

##############################
# scratch tests

##############################
# unit tests

############################### end of file ################################
