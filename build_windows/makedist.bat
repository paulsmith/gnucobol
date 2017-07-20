:: Batch for preparing windows binary distribution folder

@echo off
setlocal

:: check if started directly
echo %cmdcmdline% | find /i "%~0" >nul
if errorlevel 1 (
   set interactive=1
) else (
   set interactive=0
)

:: Set distribution folder
set COB_DIST_PATH="%~dp0\dist\"

:: Set clean source directory
set COB_SOURCE_PATH="%~dp0..\"

:: Set directory with necessary header files
set COB_HEADER_PATH="%~dp0"

:: Set directory with generated release files
set COB_RELEASE_PATH="%~dp0"

:: Set directory with necessary library files
set COB_LIB_PATH="COB_RELEASE_PATH..\"

:: clean dist and copy all files
%~d0

if exist "%COB_DIST_PATH%" (
   rmdir /S /Q "%COB_DIST_PATH%" 1>NUL
)

mkdir "%COB_DIST_PATH%"
cd "%COB_DIST_PATH%"

if exist "%COB_RELEASE_PATH%Win32\Release\cobc.exe" (
   set HAVE32=1
) else (
   set HAVE32=0
)

if exist "%COB_RELEASE_PATH%x64\Release\cobc.exe" (
   set HAVE64=1
) else (
   set HAVE64=0
)

if "%HAVE32%"=="1" (
   echo 32bit binaries: found
   if "%HAVE64%"=="1" (
      echo 64bit binaries: found
   ) else (
      echo 64bit binaries: not found
   )
) else (
   echo 32bit binaries: not found
   if "%HAVE64%"=="1" (
      echo 64bit binaries: found
   ) else (
      echo 64bit binaries: not found
      echo No binaries available, ABORT!
      goto :over
   )
)
echo.


echo Copying docs...
copy "%COB_SOURCE_PATH%AUTHORS"			.\AUTHORS.TXT	1>NUL
copy "%COB_SOURCE_PATH%COPYING"			.\COPYING.TXT	1>NUL
copy "%COB_SOURCE_PATH%COPYING.LESSER"	.\COPYING.LESSER.TXT	1>NUL
copy "%COB_SOURCE_PATH%COPYING.DOC"		.\COPYING.DOC.TXT	1>NUL
copy "%COB_SOURCE_PATH%NEWS"			.\NEWS.TXT		1>NUL
copy "%COB_SOURCE_PATH%README"			.\README.TXT	1>NUL
copy "%COB_SOURCE_PATH%THANKS"			.\THANKS.TXT	1>NUL
copy "%COB_SOURCE_PATH%TODO"			.\TODO.TXT		1>NUL

mkdir doc
copy "%COB_SOURCE_PATH%doc\*.pdf"		doc\	1>NUL


echo Copying configuration files...
mkdir config
copy "%COB_SOURCE_PATH%config\*.conf"		config\	1>NUL
copy "%COB_SOURCE_PATH%config\*.conf-inc"	config\	1>NUL
copy "%COB_SOURCE_PATH%config\*.words"		config\	1>NUL
copy "%COB_SOURCE_PATH%config\*.cfg"		config\	1>NUL

echo Copying copybooks...
mkdir copy
copy "%COB_SOURCE_PATH%copy\*.cpy"		copy\	1>NUL

echo Copying header files...
mkdir include
mkdir include\libcob
copy "%COB_SOURCE_PATH%libcob.h"		include\		1>NUL
copy "%COB_SOURCE_PATH%libcob\common.h"		include\libcob\	1>NUL
copy "%COB_SOURCE_PATH%libcob\exception.def"	include\libcob\	1>NUL
copy "%COB_HEADER_PATH%gmp.h"			include\		1>NUL
rem erase /S include\_*	1>NUL

echo Copying translations...
mkdir po
for %%f in ("%COB_SOURCE_PATH%po\*.gmo") do (
   copy "%%~ff"			po\%%~nf.mo	1>NUL
)
copy "%COB_SOURCE_PATH%po\*.po"			po\	1>NUL
copy "%COB_SOURCE_PATH%po\*.pot"		po\	1>NUL
erase /Q po\*@*	1>NUL

if "%HAVE32%"=="1" (
   copy "%COB_RELEASE_PATH%set_env_vs_dist.bat"	set_env_vs.bat	1>NUL
   call :copyrel
)
if "%HAVE64%"=="1" (
   copy "%COB_RELEASE_PATH%set_env_vs_dist_x64.bat"	set_env_vs_x64.bat	1>NUL
   call :copyrel x64
)

goto :end

:copyrel
if NOT "%1"=="x64" (
   set mode=Win32
   set copyfrom="%COB_RELEASE_PATH%Win32\release"
   set copytobin=bin
   set copytolib=lib
) else (
   set mode=x64
   set copytobin=bin_x64
   set copytolib=lib_x64
)
set copyfrom="%COB_RELEASE_PATH%%mode%\release"

echo Copying binaries for %mode%...
mkdir %copytobin%
copy "%copyfrom%\cobc.exe"			%copytobin%\	1>NUL
copy "%copyfrom%\cobc.pdb"			%copytobin%\	1>NUL
copy "%copyfrom%\cobcrun.exe"			%copytobin%\	1>NUL
copy "%copyfrom%\cobcrun.pdb"			%copytobin%\	1>NUL
copy "%copyfrom%\libcob.dll"			%copytobin%\	1>NUL
copy "%copyfrom%\libcob.pdb"			%copytobin%\	1>NUL

copy "%copyfrom%\libvbisam.dll"			%copytobin%\	1>NUL
copy "%copyfrom%\mpir.dll"			%copytobin%\	1>NUL
copy "%copyfrom%\pdcurses.dll"			%copytobin%\	1>NUL

mkdir %copytolib%"
copy "%copyfrom%\libcob.lib"			%copytolib%\	1>NUL

goto :eof

:end
:: must be last as we compile with the dist itself
echo Copying extras...
mkdir extras
copy "%COB_SOURCE_PATH%extras\*.cob"		extras\	1>NUL
copy "%COB_SOURCE_PATH%extras\README"		extras\README.txt	1>NUL

if "%HAVE32%"=="1" (
   echo.
   echo Using created GnuCOBOL distribution -Win32- to compile extras...
   cd "%COB_DIST_PATH%bin"
   call ..\set_env_vs.bat
   cobc -m -Wall -O2 ..\extras\CBL_OC_DUMP.cob -v
   cd ..
)

if "%HAVE64%"=="1" (
   echo.
   echo Using created GnuCOBOL distribution -x64- to compile extras...
   cd "%COB_DIST_PATH%bin_x64"
   call ..\set_env_vs_x64.bat
   cobc -m -Wall -O2 ..\extras\CBL_OC_DUMP.cob -v
   cd ..
)

echo.

echo Compressing dist package...
if exist "%ProgramFiles%\7-Zip\7z.exe" (
   erase "..\GnuCOBOL.7z" 1>NUL
   "%ProgramFiles%\7-Zip\7z.exe" a -r -mx=9 "..\GnuCOBOL.7z" *
) else if exist "%ProgramFiles(x86)%\7-Zip\7z.exe" (
   erase "..\GnuCOBOL.7z"
   "%ProgramFiles(x86)%\7-Zip\7z.exe" a -r -mx=9 "..\GnuCOBOL.7z" *
) else (
   echo 7-zip not found, "GnuCOBOL.7z" not created
)


:over
if _%interactive%_==_0_ (
   echo.
   pause
)
endlocal
