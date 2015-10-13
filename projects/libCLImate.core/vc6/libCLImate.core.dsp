# Microsoft Developer Studio Project File - Name="libCLImate.core" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=libCLImate.core - Win32 Unicode Debug Multithreaded
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE
!MESSAGE NMAKE /f "libCLImate.core.mak".
!MESSAGE
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "libCLImate.core.mak" CFG="libCLImate.core - Win32 Unicode Debug Multithreaded"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "libCLImate.core - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Debug Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Release Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Unicode Release" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Unicode Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Unicode Release Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 Unicode Debug Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 wmain Release" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 wmain Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 wmain Release Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE "libCLImate.core - Win32 wmain Debug Multithreaded" (based on "Win32 (x86) Static Library")
!MESSAGE

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "libCLImate.core - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.debug.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Debug Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugMt"
# PROP BASE Intermediate_Dir "DebugMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugMt"
# PROP Intermediate_Dir "DebugMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.debug.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.mt.debug.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Release Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMt"
# PROP BASE Intermediate_Dir "ReleaseMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMt"
# PROP Intermediate_Dir "ReleaseMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.mt.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Unicode Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "URelease"
# PROP BASE Intermediate_Dir "URelease"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "URelease"
# PROP Intermediate_Dir "URelease"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Unicode Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UDebug"
# PROP BASE Intermediate_Dir "UDebug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UDebug"
# PROP Intermediate_Dir "UDebug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.debug.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.debug.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Unicode Release Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "UReleaseMt"
# PROP BASE Intermediate_Dir "UReleaseMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "UReleaseMt"
# PROP Intermediate_Dir "UReleaseMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.mt.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.mt.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 Unicode Debug Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UDebugMt"
# PROP BASE Intermediate_Dir "UDebugMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UDebugMt"
# PROP Intermediate_Dir "UDebugMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.mt.debug.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.widestring.mt.debug.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 wmain Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "URelease"
# PROP BASE Intermediate_Dir "URelease"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "URelease"
# PROP Intermediate_Dir "URelease"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 wmain Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UDebug"
# PROP BASE Intermediate_Dir "UDebug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UDebug"
# PROP Intermediate_Dir "UDebug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.debug.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.debug.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 wmain Release Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "UReleaseMt"
# PROP BASE Intermediate_Dir "UReleaseMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "UReleaseMt"
# PROP Intermediate_Dir "UReleaseMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "NDEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.mt.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.mt.lib"

!ELSEIF  "$(CFG)" == "libCLImate.core - Win32 wmain Debug Multithreaded"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UDebugMt"
# PROP BASE Intermediate_Dir "UDebugMt"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UDebugMt"
# PROP Intermediate_Dir "UDebugMt"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../include" /I "$(CLASP_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)/include" /I "$(PANTHEIOS_EXTRAS_MAIN_ROOT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(STLSOFT_1_10)/include" /I "$(STLSOFT)/include" /D "WIN32" /D "_DEBUG" /D "LIBCLIMATE_USE_wmain" /D "_UNICODE" /D "UNICODE" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.mt.debug.lib"
# ADD LIB32 /nologo /out:"..\..\..\lib\libclimate.0.core.vc6.wmain.mt.debug.lib"

!ENDIF

# Begin Target

# Name "libCLImate.core - Win32 Release"
# Name "libCLImate.core - Win32 Debug"
# Name "libCLImate.core - Win32 Debug Multithreaded"
# Name "libCLImate.core - Win32 Release Multithreaded"
# Name "libCLImate.core - Win32 Unicode Release"
# Name "libCLImate.core - Win32 Unicode Debug"
# Name "libCLImate.core - Win32 Unicode Release Multithreaded"
# Name "libCLImate.core - Win32 Unicode Debug Multithreaded"
# Name "libCLImate.core - Win32 wmain Release"
# Name "libCLImate.core - Win32 wmain Debug"
# Name "libCLImate.core - Win32 wmain Release Multithreaded"
# Name "libCLImate.core - Win32 wmain Debug Multithreaded"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\..\..\src\exit_immediately.c
# End Source File
# Begin Source File

SOURCE=..\..\..\src\main_entry_point_C.c
# End Source File
# Begin Source File

SOURCE=..\..\..\src\main_entry_point_Cpp.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\unwind_and_exit.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\usage_etc.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "STLSoft Header Files"

# PROP Default_Filter ""
# Begin Group "STLSoft"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\memory\allocator_base.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\memory\allocator_features.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\memory\util\allocator_features.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\memory\allocator_selector.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\memory\util\allocator_selector.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\algorithms\std\alt.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\memory\auto_buffer.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\shims\access\string\std\basic_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\shims\access\string\std\c_string.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\capabilities.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\conversion\char_conversions.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\string\char_traits.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\collections\util\collections.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\constraints.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\quality\contract.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\error\conversion_error.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\quality\cover.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\string\cstring_functions.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\error\error_desc.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\shims\access\string\std\exception.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\system\environment\functions.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\shims\access\string\fwd.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\internal\head_version.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\integer_to_string\integer_to_decimal_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\integer_to_string\integer_to_hexadecimal_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\integer_to_string\integer_to_octal_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\integer_to_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\integer_to_string\integer_to_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\limits\integral_format_width_limits.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\limits\integral_limits.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\limits\integral_limits.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\is_integral_type.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\is_numeric_type.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\is_pointer_type.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\is_same_type.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\is_signed_type.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\std\iterator_helper.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\internal\lead_version.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\std\library_discriminator.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\util\limit_traits.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\util\meta_.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\internal\cccap\msvc.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\n_types.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\internal\cccap\obsolete.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\algorithms\pod.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\internal\safestr.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\conversion\sap_cast.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\smartptr\scoped_handle.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\string\shim_string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\sign_traits.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\size_of.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\size_traits.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\util\std_swap.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\stlsoft.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\stlsoft_1_10.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\shims\access\string.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\string\string_slice.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\shims\access\string\std\time.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\conversion\truncation_cast.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\conversion\truncation_test.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\shims\access\string\std\type_info.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\stlsoft\exception\unrecoverable.hpp"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\stlsoft\meta\yesno.hpp"
# End Source File
# End Group
# Begin Group "PlatformSTL"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\platformstl\system\console_functions.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\platformstl\filesystem\path_functions.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\platformstl\platformstl.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\platformstl\platformstl_1_10.h"
# End Source File
# End Group
# Begin Group "WinSTL"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(STLSOFT_1_10)\include\winstl\system\console_functions.h"
# End Source File
# Begin Source File

SOURCE="$(STLSOFT)\include\winstl\winstl.h"
# End Source File
# End Group
# End Group
# Begin Group "Pantheios Header Files"

# PROP Default_Filter ""
# Begin Group "Pantheios::Extras"

# PROP Default_Filter ""
# Begin Group "Pantheios::Extras::DiagUtil"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil\internal\common.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil\internal\common.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil\main_leak_trace.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil\main_leak_trace.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_DIAGUTIL_ROOT)\include\pantheios\extras\diagutil\internal\stlsoft.h"
# End Source File
# End Group
# Begin Group "Pantheios::Extras::Main"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main\internal\common.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main\internal\common.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main\invoke.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main\invoke.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_EXTRAS_MAIN_ROOT)\include\pantheios\extras\main\internal\stlsoft.h"
# End Source File
# End Group
# End Group
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\quality\contract.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\severity\levels.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\generated\log_functions.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\shims\access\string\core\pan_severity_t.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\shims\access\string\core\pan_slice_t.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\pantheios.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\safestr.h"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\shim_declarations.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\slice.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\stock_levels.hpp"
# End Source File
# Begin Source File

SOURCE="$(PANTHEIOS_ROOT)\include\pantheios\internal\string_encoding.h"
# End Source File
# End Group
# Begin Group "SystemTools::CLASP Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE="$(CLASP_ROOT)/include/systemtools/clasp/clasp.h"
# End Source File
# Begin Source File

SOURCE="$(CLASP_ROOT)/include/systemtools/clasp/clasp.hpp"
# End Source File
# Begin Source File

SOURCE="$(CLASP_ROOT)/include/systemtools/clasp/main.h"
# End Source File
# Begin Source File

SOURCE="$(CLASP_ROOT)/include/systemtools/clasp/main.hpp"
# End Source File
# Begin Source File

SOURCE="$(CLASP_ROOT)/include/systemtools/clasp/internal/shim_macros.h"
# End Source File
# End Group
# Begin Source File

SOURCE=..\..\..\include\libclimate\main\api.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libCLImate\main\api.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\basic_types.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\clasp.clasp.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\clasp.main.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\clasp.main.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\common.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\common.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\main.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libCLImate\main.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\pantheios.extras.diagutil.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\pantheios.extras.diagutil.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\pantheios.extras.main.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\pantheios.extras.main.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\pantheios.pantheios.h
# End Source File
# Begin Source File

SOURCE=..\..\..\src\quiet_program_termination_exception.hpp
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\internal\stlsoft.stlsoft.h
# End Source File
# Begin Source File

SOURCE=..\..\..\include\libclimate\version.h
# End Source File
# End Group
# End Target
# End Project
