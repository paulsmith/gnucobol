#! /bin/sh
# Necessary sed replacements for unifying a listing

sed \
-e 's/GnuCOBOL [0-9][0-9]*\.[0-9][0-9]*\.[0-9][0-9]*  */GnuCOBOL V.R.P   /g' \
-e 's/[0-2][0-9]:[0-6][0-9]:[0-9][0-9] [0-9][0-9][0-9][0-9]/HH:MM:SS YYYY/g' \
-e 's/'"`date +"%a %b %e"`"'/DDD MMM dd/g' \
<"$1" >"$2"
