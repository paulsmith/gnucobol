:: Batch for generating the Bison / Flex C sources

@echo off
setlocal

:: check if started directly
echo %cmdcmdline% | find /i "%~0" >nul
if errorlevel 1 (
   set interactive=1
) else (
   set interactive=0
)

:: change to cobc directory
pushd "%~dp0..\cobc"

:: file prefix used for temporary files
set tmp_prf=mbfbat

:: check executables
call :exe_check "%BISON%" bison "GNU Bison" BISON
call :exe_check "%FLEX%" flex "flex" FLEX

echo.
echo.

:: bison invocation
if not "%BISON%"=="" (
   call :bisoncall ppparse
   call :bisoncall parser
) else (
   echo ERROR: invocation of bison skipped!
)

:: flex invocation
if not "%FLEX%"=="" (
   call :flexcall pplex
   call :flexcall scanner
) else (
   echo ERROR: invocation of flex skipped!
)
goto :end


:exe_check
:: set local variables, remove quotes for command name and package
set "command_name=%1"
set "command_name=%command_name:"=%"
set "exe_name=%2"
set "exe_package=%3"
set "exe_package=%exe_package:"=%"
set "env_name=%4"

if not "%command_name%"=="" (
   set command_extern=1
) else (
   set command_extern=0
   set "command_name="
   rem echo.
   rem echo Searching for %exe_package%...
   where /q win_%exe_name%.exe
   if errorlevel 1 (
      where /q %exe_name%.exe
      if errorlevel 1 (
         where /q %exe_name%.bat
         if errorlevel 1 (
            echo.
            echo ERROR: No %exe_name% executable found.
            echo Make sure %exe_package% is in PATH or set %env_name% environment variable accordingly.
         ) else (
            set "command_name=%exe_name%.bat"
         )
      ) else (
         set "command_name=%exe_name%.exe"
      )
   ) else (
      set "command_name=win_%exe_name%.exe"
   )
)
if not "%command_name%"=="" (
   echo.
   echo Testing %exe_package%:
   "%command_name%" --version
   if errorlevel 1 (
      echo.
      if %command_extern%==0 (
         echo ERROR: "%command_name%" is not usable.
         echo Make sure a working %exe_package% is in PATH or set %env_name% environment variable accordingly.
      ) else (
         echo ERROR: %env_name% environment doesn't point to a working %exe_package% executable: "%command_name%"
         echo Unset this variable and make sure %exe_package% is in PATH or set %env_name% environment variable accordingly.
      )
      set "command_name="
   )
)
set "%env_name%=%command_name%"
goto :eof


:bisoncall
echo generating %1.c, %1.h ...
call :store_old %1.c
call :store_old %1.h
%BISON% -o "%1.c"   "%1.y" ^
 && (call :waiter ^
  &  call :compare_generated %1.c ^
  &  call :compare_generated %1.h ^
  &  if exist "%1.output" erase "%1.output" >NUL ) ^
 || (call :delete_generated %1.c ^
  &  call :delete_generated %1.h ^
  &  echo.   %1.c, %1.h were not changed)
echo.
goto :eof

:flexcall
echo generating %1.c ...
call :store_old %1.c
%FLEX%  -o "%1.c"   "%1.l" ^
 && (call :waiter ^
  &  call :compare_generated %1.c) ^
 || (call :delete_generated %1.c ^
  &  echo.   %1.c was not changed)
echo.
goto :eof


:compare_generated
rem echo %1 was generated
fc "%1" "%tmp_prf%_%1" 1>NUL 2>NUL ^
 && (call :delete_generated %1) ^
 || (call :use_generated %1)
goto :eof

:waiter
ping -w 250 -n 2 localhost 1>NUL 2>NUL
goto :eof

:store_old
if exist "%1" (
  move  "%1" "%tmp_prf%_%1" >NUL
) else if exist "%tmp_prf%_%1" (
  erase      "%tmp_prf%_%1" >NUL
)
goto :eof

:use_generated
if exist "%tmp_prf%_%1" (
  erase  "%tmp_prf%_%1" >NUL
)
echo.   %1 is changed
goto :eof

:delete_generated
if exist "%tmp_prf%_%1" move "%tmp_prf%_%1" "%1" >NUL
echo.   %1 is unchanged
goto :eof


:end
if _%interactive%_==_0_ (
   echo.
   pause
)
endlocal