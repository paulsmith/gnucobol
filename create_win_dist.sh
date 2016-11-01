#!/bin/sh
# create_win_dist.sh gnucobol
#
# Copyright (C) 2016 Free Software Foundation, Inc.
# Written by Simon Sobisch
#
# This file is part of GnuCOBOL.
#
# The GnuCOBOL compiler is free software: you can redistribute it
# and/or modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation, either version 3 of the
# License, or (at your option) any later version.
#
# GnuCOBOL is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GnuCOBOL.  If not, see <http://www.gnu.org/licenses/>.


# This shell script needs to be sourced from Makefile processing,
# otherwise set EXTSRCDIR and EXTDISTDIR before calling this script
# AND make sure EXTDISTDIR exists with the right content

# Check necessary vars:

if test "x$EXTDISTDIR" = "x"; then
	echo "EXTDISTDIR" not set, aborting $0
	exit 1
fi
if test ! -d "$EXTDISTDIR"; then
	echo "$EXTDISTDIR" does not exist, aborting $0
	exit 5
fi

if test "x$EXTSRCDIR" = "x"; then
	echo "EXTSRCDIR" not set, aborting $0
	exit 1
fi
if test ! -d "$EXTSRCDIR/build_windows"; then
	echo "$EXTSRCDIR/build_windows" does not exist, aborting $0
	exit 5
fi


# Create temporary folder as we don't want to change the EXTDISTDIR's content
rm -r -f ./tmp/win-dist
mkdir -p ./tmp/win-dist

cp -p -r --parents $EXTDISTDIR ./tmp/win-dist || exit 1

# Add content only necessary for windows dist zip
cp -p -r --parents $EXTSRCDIR/build_windows ./tmp/win-dist/$EXTDISTDIR || exit 2

cd ./tmp/win-dist/$EXTDISTDIR || exit 3

# Remove content not necessary for windows dist zip --> breaks make dist[check]
# rm -r -f m4

# Change line ending for files in zip-file

find -regextype posix-egrep -regex ".*(\.([chyl]|def|cpy|cob|conf|cfg)|(README|ChangeLog|AUTHORS|ABOUT-NLS|NEWS|THANKS|TODO|COPYING.*))$" \
 -exec sed -i -e 's/\r*$/\r/' {} \;
 
# fix timestamps again
./doc/cobcinfo.sh "fixtimestamps"
touch ./bin/cobcrun.1
touch ./cobc/cobc.1
touch ./cobc/ppparse.c
touch ./cobc/parser.c
touch ./cobc/pplex.c
touch ./cobc/scanner.c
#touch ./libcob/libcob.3

cd .. # back in win-dist


# Create windows dist zip
rm -f $EXTDISTDIR"_win.zip"
zip -rq ../../$EXTDISTDIR"_win.zip" $EXTDISTDIR

# Remove temporary folder
cd ../..
rm -r -f ./tmp

