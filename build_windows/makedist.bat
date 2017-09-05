:: Batch for preparing windows binary distribution folder
:: By default, binaries use Release executable. To distribute a debug
:: distributable (y tho), provide DEBUG as an argument.

@echo off

setlocal enabledelayedexpansion
set cb_errorlevel=0

:: Set distribution folder
set "cob_dist_path=%~dp0\dist\"

:: Set clean source directory
set "cob_source_path=%~dp0..\"

:: Set directory with necessary header files
set "cob_header_path=%~dp0"

:: Set directory with generated release files
set "cob_release_path=%~dp0"

:: check for existing binaries
if /i "%1%"=="DEBUG" (
   set config=Debug
) else (
   set config=Release
)

if exist "%cob_release_path%Win32\%config%\cobc.exe" (
   set have_32=1
   echo 32-bit %config% binaries: found
   
) else (
   set have_32=0
   echo 32-bit %config% binaries: not found
)

if exist "%cob_release_path%x64\%config%\cobc.exe" (
   set have_64=1
   echo 64-bit %config% binaries: found
) else (
   set have_64=0
   echo 64-bit %config% binaries: not found
)

if "%have_32%%have_64%"=="00" (
   echo No %config% binaries available.
   goto :abort
)

:: clean dist
if exist "%cob_dist_path%" (
   rmdir /S /Q "%cob_dist_path%" 1>nul
)
mkdir "%cob_dist_path%"
pushd "%cob_dist_path%"

echo.

echo Copying docs...
set "txt_doc_list=AUTHORS COPYING COPYING.LESSER COPYING.DOC NEWS README THANKS TODO"
for %%f in (%txt_doc_list%) do (
    copy  %cob_source_path%%%f .\%%f.TXT 1>nul
)
mkdir doc
if exist "%cob_source_path%doc\*.pdf" (
   copy "%cob_source_path%doc\*.pdf"		doc\	1>nul
)
if exist "%cob_source_path%doc\*.html" (
   copy "%cob_source_path%doc\*.html"		doc\	1>nul
)


echo Copying configuration files...
mkdir config
set "config_ext_list=conf conf-inc words cfg"
for %%f in (%config_ext_list%) do (
    copy "%cob_source_path%config\*.%%f"	config\	1>nul
)

echo Copying copybooks...
mkdir copy
copy "%cob_source_path%copy\*.cpy"		copy\	1>nul

echo Copying header files...
mkdir include
mkdir include\libcob
copy "%cob_source_path%libcob.h"		include\	1>nul
copy "%cob_source_path%libcob\common.h"		include\libcob\	1>nul
copy "%cob_source_path%libcob\exception.def"	include\libcob\	1>nul
copy "%cob_header_path%gmp.h"			include\	1>nul

echo Copying translations...
mkdir po
for %%f in ("%cob_source_path%po\*.gmo") do (
   copy "%%~ff"					po\%%~nf.mo	1>nul
)
copy "%cob_source_path%po\*.po"			po\	1>nul
copy "%cob_source_path%po\*.pot"		po\	1>nul
if exist "po\*@*" (
   erase /Q po\*@* 1>nul
)
echo Copying extras...
mkdir extras
copy "%cob_source_path%extras\*.cob"		extras\			1>nul
copy "%cob_source_path%extras\README"		extras\README.txt	1>nul

echo.

if "%have_32%"=="1" (
   call :copy_exes_and_libs "Win32"
   if !cb_errorlevel! neq 0 (
      goto :abort
   )
)
if "%have_64%"=="1" (
   if "%have_32%"=="1" (
       echo.
   )
   call :copy_exes_and_libs "x64"
   if !cb_errorlevel! neq 0 (
      goto :abort
   )
)

:: must be last as we compile with the dist itself
echo Compiling extras...
echo.

if "%have_32%"=="1" (
   call :compile_extras "Win32"
   if !cb_errorlevel! neq 0 (
      goto :abort
   )
)
if "%have_64%"=="1" (
   if "%have_32%"=="1" (
       echo.
   )
   call :compile_extras "x64"
   if !cb_errorlevel! neq 0 (
      goto :abort
   )
)

echo.

echo Compressing dist package...
if exist "%ProgramFiles%\7-Zip\7z.exe" (
   erase "..\GnuCOBOL.7z" 1>nul
   "%ProgramFiles%\7-Zip\7z.exe" a -r -mx=9 "..\GnuCOBOL.7z" *
) else if exist "%ProgramFiles(x86)%\7-Zip\7z.exe" (
   erase "..\GnuCOBOL.7z" 1>nul
   "%ProgramFiles(x86)%\7-Zip\7z.exe" a -r -mx=9 "..\GnuCOBOL.7z" *
) else (
   echo 7-zip not found, "GnuCOBOL.7z" not created
)

goto :end

:abort
echo Abort^^!

:end
popd

:: pause if not started directly
echo %cmdcmdline% | find /i "%~0" >nul
if %errorlevel% equ 0 (
   echo.
   pause
)

exit /b %cb_errorlevel%


:copy_exes_and_libs
call :set_platform_and_ext %1%

copy "%cob_release_path%set_env_vs_dist%platform_ext%.bat"	set_env_vs%platform_ext%.bat	1>nul

set copy_to_bin=bin%platform_ext%
set copy_to_lib=lib%platform_ext%

set "copy_from=%cob_release_path%%platform%\%config%"

echo Copying binaries for %platform%...
mkdir %copy_to_bin%
set "exe_lib_list=cobc.exe cobc.pdb cobcrun.exe cobcrun.pdb libcob.dll libcob.pdb"
for %%f in (%exe_lib_list%) do (
    copy "%copy_from%\%%f"	%copy_to_bin%\	1>nul
)

:: Copy math library.
if exist "%copy_from%\mpir.dll" (
   copy "%copy_from%\mpir.dll"			%copy_to_bin%\	1>nul
) else if exist "%copy_from%\gmp.dll" (
   copy "%copy_from%\gmp.dll"			%copy_to_bin%\	1>nul
) else (
   echo No math library found.
   set cb_errorlevel=1
   goto :eof
)

:: Copy the ISAM-handler library, guessing the name if necessary.
:: Note: Not handling C-ISAM as there's no known Windows version of this library.
if exist "%copy_from%\libvbisam.dll" (
   copy "%copy_from%\libvbisam.dll"		%copy_to_bin%\	1>nul
) else if exist "%cob_header_path%db.h" (
   for /f "tokens=3" %%a in ('find "DB_VERSION_MAJOR" %cob_header_path%db.h') do (
      set major=%%a
   )
   for /f "tokens=3" %%a in ('find "DB_VERSION_MINOR" %cob_header_path%db.h') do (
      set minor=%%a
   )
   echo Guessing from db.h... libdb!major!!minor!
   if exist "%copy_from%\libdb!major!!minor!.dll" (
      copy "%copy_from%\libdb!major!!minor!.dll"	%copy_to_bin%\	1>nul
   ) else if exist "%copy_from%\libdb!major!!minor!d.dll" (
      copy "%copy_from%\libdb!major!!minor!d.dll"	%copy_to_bin%\	1>nul
   ) else (
      echo No ISAM handler found.
   )
) else if exist "%cob_header_path%disam.h" (
   for /f "tokens=3,4 delims=. " %%a in ('find "Version" %cob_header_path%disam.h') do (
      set major=%%a
	  set minor=%%b
   )
   echo Guessing from disam.h... libdisam!major!!minor!
   if exist "%copy_from%\libdisam!major!!minor!.dll" (
      copy "%copy_from%\libdisam!major!!minor!.dll"	%copy_to_bin%\	1>nul
   ) else if "%PLATFORM%"=="Win32" (
      if exist "%copy_from%\libdisam!major!!minor!_win32.dll" (
      	 copy "%copy_from%\libdisam!major!!minor!_win32.dll"	%copy_to_bin%\	1>nul
      ) else (
      	 echo No ISAM handler found.
      )
   ) else if exist "%copy_from%\libdisam!major!!minor!_win64.dll" (
      	 copy "%copy_from%\libdisam!major!!minor!_win64.dll"	%copy_to_bin%\	1>nul
   ) else (
      echo No ISAM handler found.
   )
) else (
   echo No ISAM handler found.
)

:: Copy the curses library.
if exist "%copy_from%\pdcurses.dll" (
   copy "%copy_from%\pdcurses.dll"		%copy_to_bin%\	1>nul
) else ( 
   echo No curses library found.
)

mkdir %copy_to_lib%
copy "%copy_from%\libcob.lib"			%copy_to_lib%\	1>nul

goto :eof


:compile_extras
call :set_platform_and_ext %1%
echo Using created GnuCOBOL distribution -%platform%- to compile extras...
pushd "%cob_dist_path%bin%platform_ext%"
call ..\set_env_vs%platform_ext%.bat
cobc -m -Wall -O2 ..\extras\CBL_OC_DUMP.cob
if %errorlevel% neq 0 (
   echo.
   echo cobc had unexpected return value %errorlevel%, running verbose again...
   pause
   cobc -vv -m -Wall -O2 ..\extras\CBL_OC_DUMP.cob
   set cb_errorlevel=!errorlevel!
)
popd
goto :eof


:set_platform_and_ext
if %1%=="Win32" (
   set platform=Win32
   set platform_ext=
) else (
   set platform=x64
   set platform_ext=_x64
)
goto :eof
