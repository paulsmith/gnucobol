:: Batch for setting GnuCOBOL Environment in Windows with MSC compiler
:: x64 version

@echo off

:: Check if this batch was called already and exit if it was called before.
::if "%COB_ENV_SET64%"    NEQ "" goto :eof

:: Set the internal env var
set COB_ENV_SET64=1

:: Check for valid MSC Environment and let it do it's work.
:: If not found try Windows SDKs in standard installation folders
:: Visual Studio 2017
if exist "%VS150COMNTOOLS%vsvars64.bat" (
   call "%VS150COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS150COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS150COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2015
if exist "%VS140COMNTOOLS%vsvars64.bat" (
   call "%VS140COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS140COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS140COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2013
if exist "%VS120COMNTOOLS%vsvars64.bat" (
   call "%VS120COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS120COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS120COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2012
if exist "%VS110COMNTOOLS%vsvars64.bat" (
   call "%VS110COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS110COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS110COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2010
if exist "%VS100COMNTOOLS%vsvars64.bat" (
   call "%VS100COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS100COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS100COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2008
if exist "%VS90COMNTOOLS%vsvars64.bat" (
   call "%VS90COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS90COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS90COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)
:: Visual Studio 2005
if exist "%VS80COMNTOOLS%vsvars64.bat" (
   call "%VS80COMNTOOLS%vsvars64.bat"
   goto :gc
)
if exist "%VS80COMNTOOLS%vcvarsqueryregistry.bat" (
   call "%VS80COMNTOOLS%vcvarsqueryregistry.bat"
   if exist "%VCINSTALLDIR%vcvarsall.bat" (
      call "%VCINSTALLDIR%vcvarsall.bat" x64
      goto :gc
   )
)

echo Warning: Not possible to set 64 bit environment for Microsoft Visual Studio!
:: Windows SDK 10 (Windows 10 / VS 2015 compiler) - untested
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v10\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v10\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v10\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v10\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
:: Windows SDK 8.1 (Windows 8.1 and .NET 4.5.1 / VS 2013 compiler)
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v8.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v8.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v8.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v8.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
:: Windows SDK 8.0 (Windows 8 and .NET 4.5 / VS 2012 compiler)
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v8.0\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v8.0\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v8.0\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v8.0\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
:: Windows SDK 7.1 (Windows 7 and .NET 4 / VS 2010 SP1 compiler)
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
:: Windows SDK 7.0 (Windows 7 and .NET 3.5 SP1 / VS 2008 compiler)
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v7.0\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v7.0\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v7.0\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v7.0\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
:: Windows SDK 6.1 (Windows 2008 Server and .NET 3.5 / VS 2008 compiler)
if exist "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v6.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles(x86)%\Microsoft SDKs\Windows\v6.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)
if exist "%ProgramFiles%\Microsoft SDKs\Windows\v6.1\Bin\SetEnv.Cmd" (
   call "%ProgramFiles%\Microsoft SDKs\Windows\v6.1\Bin\SetEnv.Cmd" /x64 /release
   goto :gcc
)

color 0C
echo Warning: Not possible to set environment for Microsoft Windows SDK!

:gcc
color 07

:gc

echo.
echo.
:: Now the stuff for GnuCOBOL
echo Setting environment for GnuCOBOL.

:: Get the main dir from the batch's position (only works in NT environments)
set COB_MAIN_DIR=%~dp0

:: Set the necessary folders for cobc
set COB_CONFIG_DIR=%COB_MAIN_DIR%config
set COB_COPY_DIR=%COB_MAIN_DIR%copy

SET LOCALEDIR=%COB_MAIN_DIR%po

:: Set the necessary options for MSC compiler
set COB_CFLAGS=/I "%COB_MAIN_DIR%include"
set COB_LIB_PATHS=/LIBPATH:"%COB_MAIN_DIR%lib_x64"
::if "%COB_LIBS%"       EQU "" (
::   if exist "%COB_MAIN_DIR%lib\mpir.lib"	set COB_LIBS=libcob.lib mpir.lib
::   if exist "%COB_MAIN_DIR%lib\libgmp.lib" 	set COB_LIBS=libcob.lib libgmp.lib
::)

:: Add the bin path of GnuCOBOL to PATH for further references
set PATH=%COB_MAIN_DIR%bin_x64;%PATH%
