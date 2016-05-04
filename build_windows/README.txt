The following was written for using the Microsoft Visual C++ compiler in the
rare circumstances where a GCC build (for example via MinGW) cannot be used.

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
  from the vendor and change linker input in libcob.sln
* copy build_windows\config.h.tmpl to build_windows\config.h,
  if you don't want to build with VBISAM change the define CONFIGURED_ISAM
  accordingly; you may want to change the PATCHLEVEL, too
* copy build_windows\defaults.h.tmpl to build_windows\defaults.h,
  change COB_MAIN_DIR according to your local path and/or MAKE_DIST
* you may want to change version information in build_windows\version_*.rc
* compile with your environment, for example via IDE by opening the solution
  and click "build" or starting the VS/WinSDK command prompt and calling
  msbuild "GnuCOBOL.sln" /p:Platform=x64 /Configuration=Release
* sign the binaries if needed

How to use the dist package:

* unzip wherever you want
* call "set_env_vs.bat" for use with Visual Studio and Win32 
* call "set_env_vs64.bat" for use with Visual Studio and x64
* use cobc/cobcrun

How to test the native builds:

* currently you will need a GNU/Linux-like environment for running the
  testsuite (normally Cygwin or MinGW with MSYS)
* if you want to run the NIST testsuite you need a perl binary installed
  and in PATH (either a normal Windows installation or within Cygwin/MSYS)
* do the following commands:
  cd $yourfolder
  ./configure (add --without-db --without-curses if your system does not have
  these files); this will create the necessary Makefiles for you
  cd tests
  make checkall # or make check if you don't want to run the NIST testsuite
