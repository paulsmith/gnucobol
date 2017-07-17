The following was written for using the Microsoft Visual C++ compiler in the
rare circumstances where a GCC build (for example via MSYS/MinGW) cannot be used.

Most of this applies to other C compilers for Microsoft Windows, too - please
report any issues and working solutions with other compilers.

GnuCOBOL needs support for either `long long` (for WIN32 `__int64` is used),
very old compilers may lack support for this (like Visual C++ 2003 and older).

How to build in native Windows environments:

* get/build necessary headers, link libraries and runtime dlls,
  place them in build_windows\Win32 and build_windows\x64
  For convinience you can get them (MPIR, pdcurses, VBISAM, BDB) from 
  https://sourceforge.net/projects/open-cobol/files/win_prerequisites/
* if you want to build against CISAM/DISAM get the additional necessary files
  from the vendor and change linker input in libcob.vc[x]proj
* copy build_windows\config.h.in to build_windows\config.h,
  if you don't want to build with VBISAM change the define CONFIGURED_ISAM
  accordingly; you may want to change the PATCHLEVEL, too
* copy build_windows\defaults.h.in to build_windows\defaults.h,
  change COB_MAIN_DIR according to your local path and/or set MAKE_DIST
* you may want to change version information in build_windows\version_*.rc
* if you compile from a development snapshot or changed these files you need
  to (re-)generate the bison and flex sources, example commands for
  https://sourceforge.net/projects/winflexbison/files/win_flex_bison-latest.zip
    set PATH=X:\path\to\winflexbison;%PATH%
    cd X:\path\to\gnu-cobol\cobc
    win_flex  -o pplex.c   pplex.l
    win_flex  -o scanner.c scanner.l
    win_bison -o ppparse.c ppparse.y
    win_bison -o parser.c  parser.y
  For convinience you can run makebisonflex.bat after setting the PATH which
  will check for the executables and invoke them.
* compile with your environment, for example via IDE by opening the solution
  and click "build" or by starting the VS/WinSDK command prompt and doing
    pushd X:\path\to\gnu-cobol\build_windows\vsYYYY
    msbuild "GnuCOBOL.sln" /p:Platform=x64 /Configuration=Release
  replace YYYY with the Visual Studio version you've used and with using the
  platform/configuration you want to build

How to create the dist package:

* set up the above
* compile the release version you want (x86/Win32 and/or x64)
* sign the binaries if needed
* if you want a 7z and have a non-standard installation: change "makedist.bat"
* call "makedist.bat" (uses the last build from Win32\release and x64\release)

How to use the dist package:

* unzip wherever you want
* call "set_env_vs.bat" for use with Visual Studio and Win32 
* call "set_env_vs64.bat" for use with Visual Studio and x64
* use cobc/cobcrun

How to test the native builds:

* currently you will need a GNU/Linux-like environment for running the
  testsuite (normally Cygwin or MinGW with MSYS)
* if you want to run the NIST testsuite you need a perl binary installed and
  in PATH (a Cygwin/MSYS version is needed, a normal Windows binary won't work)
* do the following commands:
  cd $yourfolder
  ./configure (add --without-db --without-curses if your system does not have
  these files); this will create the necessary Makefiles for you
  cd tests
  make checkall # or make check if you don't want to run the NIST testsuite
