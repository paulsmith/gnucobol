/*
   Copyright (C) 2003-2012, 2014-2017 Free Software Foundation, Inc.
   Written by Keisuke Nishida, Roger While, Simon Sobisch

   This file is part of GnuCOBOL.

   The GnuCOBOL compiler is free software: you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   GnuCOBOL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GnuCOBOL.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "config.h"
#include "defaults.h"

#include <assert.h>
#include <ctype.h>
#include <err.h>
#include <errno.h>
#include <limits.h>
#include <search.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cobc.h"

#include "options.h" 

static struct conf_opt_t conf_opts[] = {
  { false, 1, I },
  { false, 1, LINK },
  { false, 1, LIB },
  { false, 1, D },

  { false, 1, FREE },
  { false, 1, FIXED },

  { false, 1, STD },

  { false, 1, DEBUG },
  { false, 1, G },
  { false, 1, O },
  { false, 1, O2 },
  { false, 1, OS },
  { false, 1, FTRACE },
  { false, 1, FTRACEALL },
  { false, 1, FDEBUGGING_LINE },
  { false, 1, FSOURCE_LOCATION },
  { false, 1, FIMPLICIT_INIT },
  { false, 1, FSTACK_CHECK },
  { false, 1, FNOTRUNC },

  // Miscellaneous options
  { false, 1, EXT },        //  extension (no =)
  { false, 1, FMFCOMMENT },
  { false, 1, ACUCOMMENT },
  { false, 1, FSIGN },      //  = ASCII
  { false, 1, FFOLD_COPY }, //  = UPPER
  { false, 1, SAVE_TEMPS }, //  [= directory]

  //Listing options
  { false, 1, TLINES },     //  = lines
  { false, 1, FTSYMBOLS },
  { false, 1, FNO_THEADER },
  { false, 1, FNO_TMESSAGES },
  { false, 1, FNO_TSOURCE },
  { false, 1, XREF },
};

static struct warn_opt_t warn_opts[] = {
  { false, false, ALL },
  { false, false, ARCHAIC },
  { false, false, CALL_PARAMS },
  { false, false, COLUMN_OVERFLOW },
  { false, false, CONSTANT },
  { false, false, IMPLICIT_DEFINE },
  { false, false, LINKAGE },
  { false, false, OBSOLETE },
  { false, false, PARENTHESES },
  { false, false, REDEFINITION },
  { false, false, STRICT_TYPING },
  { false, false, TERMINATOR },
  { false, false, TRUNCATE },
  { false, false, UNREACHABLE },
};


static int
conf_opts_cmp( const void *K, const void *E ) {
  const struct conf_opt_t *k = K, *e = E;
  return k->type == e->type? 0 : 1;
}

bool
option_set( enum yytokentype type, const char name[], const char value[] ) {
  struct conf_opt_t *p, key = { .type = type };
  size_t n = COUNT_OF(conf_opts);
  
  if( (p = lfind( &key, conf_opts, &n, sizeof(key), conf_opts_cmp)) == NULL ) {
    assert(I <= type && type <= XREF);
    return false;
  }
  assert(strlen(name) < sizeof(p->name) - 1);
  strcpy(p->name, name);
  strcpy(p->value, value != NULL? value : "");

  return p->configured = true;
}


static int
warn_opts_cmp( const void *K, const void *E ) {
  const struct warn_opt_t *k = K, *e = E;
  return k->type == e->type? 0 : 1;
}

bool
warning_set( enum yytokentype type, bool yn, const char name[] ) {
  struct warn_opt_t *p, key = { .type = type };
  size_t n = COUNT_OF(warn_opts);
  
  if( (p = lfind( &key, warn_opts, &n, sizeof(key), warn_opts_cmp)) == NULL ) {
    assert(ALL <= type && type <= UNREACHABLE);
    return false;
  }

  p->yn = yn;
  assert(strlen(name) < sizeof(p->name) - 1);
  strcpy(p->name, name);
  return p->configured = true;
}
