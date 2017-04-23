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
   echo 32bit binaries found.
   if "%HAVE64%"=="1" (
      echo 64bit binaries found.
   ) else (
      echo No 64bit binaries found.
   )
) else (
   echo No 32bit binaries found.
   if "%HAVE64%"=="1" (
      echo 64bit binaries found.
   ) else (
      echo No 64bit binaries found.
      echo No binaries available, ABORT!
      goto :over
   )
)


copy "%COB_SOURCE_PATH%AUTHORS"			.\AUTHORS.TXT
copy "%COB_SOURCE_PATH%COPYING"			.\COPYING.TXT
copy "%COB_SOURCE_PATH%COPYING.LESSER"	.\COPYING.LESSER.TXT
copy "%COB_SOURCE_PATH%COPYING.DOC"		.\COPYING.DOC.TXT
copy "%COB_SOURCE_PATH%NEWS"			.\NEWS.TXT
copy "%COB_SOURCE_PATH%README"			.\README.TXT
copy "%COB_SOURCE_PATH%THANKS"			.\THANKS.TXT
copy "%COB_SOURCE_PATH%TODO"			.\TODO.TXT

if "%HAVE32%"=="1" (
   copy "%COB_RELEASE_PATH%set_env_vs_dist.bat"	set_env_vs.bat
   call :copyrel
)
if "%HAVE64%"=="1" (
   copy "%COB_RELEASE_PATH%set_env_vs_dist_x64.bat"	set_env_vs_x64.bat
   call :copyrel x64
)


mkdir config
copy "%COB_SOURCE_PATH%config\*.conf"		config\
copy "%COB_SOURCE_PATH%config\*.cfg"		config\

mkdir copy
copy "%COB_SOURCE_PATH%copy\*.cpy"		copy\

mkdir doc
copy "%COB_SOURCE_PATH%doc\*.pdf"		doc\

mkdir include
mkdir include\libcob
copy "%COB_SOURCE_PATH%libcob.h"		include\
copy "%COB_SOURCE_PATH%libcob\common.h"		include\libcob\
copy "%COB_SOURCE_PATH%libcob\exception.def"	include\libcob\
copy "%COB_HEADER_PATH%gmp.h"			include\
rem erase /S include\_*

mkdir po
for %%f in ("%COB_SOURCE_PATH%po\*.gmo") do (
   copy "%%~ff"			po\%%~nf.mo
)
copy "%COB_SOURCE_PATH%po\*.po"			po\
copy "%COB_SOURCE_PATH%po\*.pot"		po\
erase /Q po\*@*

goto :end

:copyrel
if NOT "%1"=="x64" (
   set copyfrom="%COB_RELEASE_PATH%Win32\release"
   set copytobin=bin
   set copytolib=lib
) else (
   set copyfrom="%COB_RELEASE_PATH%x64\release"
   set copytobin=bin_x64
   set copytolib=lib_x64
)
mkdir %copytobin%
copy "%copyfrom%\cobc.exe"			%copytobin%\
copy "%copyfrom%\cobc.pdb"			%copytobin%\
copy "%copyfrom%\cobcrun.exe"			%copytobin%\
copy "%copyfrom%\cobcrun.pdb"			%copytobin%\
copy "%copyfrom%\libcob.dll"			%copytobin%\
copy "%copyfrom%\libcob.pdb"			%copytobin%\

copy "%copyfrom%\libvbisam.dll"			%copytobin%\
copy "%copyfrom%\mpir.dll"			%copytobin%\
copy "%copyfrom%\pdcurses.dll"			%copytobin%\

mkdir %copytolib%"
copy "%copyfrom%\libcob.lib"			%copytolib%\

goto :eof

:end
:: must be last as we compile with the dist itself
mkdir extras
copy "%COB_SOURCE_PATH%extras\*.cob"		extras\
copy "%COB_SOURCE_PATH%extras\README"		extras\README.txt

if "%HAVE32%"=="1" (
   echo.
   echo.
   echo Using created GnuCOBOL distribution -Win32- to compile extras
   cd "%COB_DIST_PATH%bin"
   call ..\set_env_vs.bat
   cobc -m -Wall -std=mf ..\extras\CBL_OC_DUMP.cob -v
   cd ..
)

if "%HAVE64%"=="1" (
   echo.
   echo.
   echo Using created GnuCOBOL distribution -x64- to compile extras
   cd "%COB_DIST_PATH%bin_x64"
   call ..\set_env_vs_x64.bat
   cobc -m -Wall -std=mf ..\extras\CBL_OC_DUMP.cob -v
   cd ..
)

echo.
echo.

if exist "%ProgramFiles%\7-Zip\7z.exe" (
   erase "..\GnuCOBOL.7z"
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
