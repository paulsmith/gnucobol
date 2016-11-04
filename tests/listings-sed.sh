#! /bin/sh
# Necessary sed replacements for unifying a listing

# Note: We replace the date two times, as not all systems have %e modifier in C
#       and use %E in this case ("Mon Feb 04" instead of "Mon Feb  4").

sed \
-e 's/GnuCOBOL [0-9][0-9]*\.[0-9][0-9]*\.[0-9][0-9]*  */GnuCOBOL V.R.P   /g' \
-e 's/[0-2][0-9]:[0-6][0-9]:[0-9][0-9] [0-9][0-9][0-9][0-9]/HH:MM:SS YYYY/g' \
-e 's/'"$(date +"%a %b %e")"'/DDD MMM dd/g' \
-e 's/'"$(date +"%a %b %d")"'/DDD MMM dd/g' \
<"$1" >"$2"
