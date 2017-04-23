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

:: Go to cobc directory
pushd "%~dp0..\cobc"

:: check for flex executable
if not "%FLEX%"=="" (
   set FLEX_EXT=1
) else (
   set FLEX_EXT=0
   echo.
   echo Searching for flex...
   where /q win_flex.exe
   if errorlevel 1 (
      where /q flex.exe
      if errorlevel 1 (
         where /q flex.bat
         if errorlevel 1 (
            echo.
            echo No flex executable found.
            echo Make sure flex is in PATH or set FLEX environment variable accordingly.
         ) else (
            set FLEX=flex.bat
         )
      ) else (
         set FLEX=flex.exe
      )
   ) else (
      set FLEX=win_flex.exe
   )
)
if not "%FLEX%"=="" (
   echo Testing flex:
   "%FLEX%" --version
   if errorlevel 1 (
      echo.
      if %FLEX_EXT%==0 (
         echo "%FLEX%" is not usable.
         echo Make sure a working flex is in PATH or set FLEX environment variable accordingly.
      ) else (
         echo FLEX environment doesn't point to a working flex executable: "%FLEX%"
         echo Unset it and make sure flex is in PATH or set FLEX environment variable accordingly.
      )
      set FLEX=
   )
)

:: flex invocation
if not "%FLEX%"=="" (  
   %FLEX%  -o pplex.c   pplex.l
   %FLEX%  -o scanner.c scanner.l
) else (
   echo.
   echo ERROR: invocation of flex skipped!
)

:: check for bison executable
if not "%BISON%"=="" (
   set BISON_EXT=1
) else (
   set BISON_EXT=0
   echo.
   echo Searching for GNU Bison...
   where /q win_bison.exe
   if errorlevel 1 (
      where /q bison.exe
      if errorlevel 1 (
         where /q bison.bat
         if errorlevel 1 (
            echo.
            echo No bison executable found.
            echo Make sure bison is in PATH or set BISON environment variable accordingly.
         ) else (
            set BISON=bison.bat
         )
      ) else (
         set BISON=bison.exe
      )
   ) else (
      set BISON=win_bison.exe
   )
)
if not "%BISON%"=="" (
   echo.
   echo Testing bison:
   "%BISON%" --version
   if errorlevel 1 (
      echo.
      if %BISON_EXT%==0 (
         echo "%BISON%" is not usable.
         echo Make sure a working GNU Bison is in PATH or set BISON environment variable accordingly.
      ) else (
         echo BISON environment doesn't point to a working bison executable: "%BISON%"
         echo Unset it and make sure bison is in PATH or set BISON environment variable accordingly.
      )
      set BISON=
   )
)

:: bison invocation
if not "%BISON%"=="" (  
   %BISON% -o ppparse.c ppparse.y
   %BISON% -o parser.c  parser.y
) else (
   echo.
   echo ERROR: invocation of bison skipped!
)


:end
if _%interactive%_==_0_ (
   echo.
   pause
)
endlocal