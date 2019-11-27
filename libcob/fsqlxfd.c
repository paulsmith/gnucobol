/*
   Copyright (C) 2002-2012, 2014-2019 Free Software Foundation, Inc.
   Written by Keisuke Nishida, Roger While, Simon Sobisch, Ron Norman

   This file is part of GnuCOBOL.

   The GnuCOBOL runtime library is free software: you can redistribute it
   and/or modify it under the terms of the GNU Lesser General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   GnuCOBOL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GnuCOBOL.  If not, see <https://www.gnu.org/licenses/>.
*/


/* Force symbol exports */
#define	COB_LIB_EXPIMP
#include "fileio.h"

#if defined(WITH_ODBC) || defined(WITH_OCI) || defined(WITH_DB) || defined(WITH_LMDB)
/* Routines in fsqlxfd.c common to all Database interfaces */                        

int
db_findkey (cob_file *f, cob_field *kf, int *fullkeylen, int *partlen)
{
	int 	k, part;

	*fullkeylen = *partlen = 0;
	for (k = 0; k < f->nkeys; ++k) {
		if (f->keys[k].field
		&&  f->keys[k].count_components <= 1
		&&  f->keys[k].field->data == kf->data) {
			*fullkeylen = f->keys[k].field->size;
			*partlen = kf->size;
			return k;
		}
	}
	for (k = 0; k < (int)(f->nkeys); ++k) {
		if (f->keys[k].count_components > 1) {
			if ( (f->keys[k].field
			   && f->keys[k].field->data == kf->data
			   && f->keys[k].field->size == kf->size)
			 ||  (f->keys[k].component[0]->data == kf->data)) {
				for (part = 0; part < f->keys[k].count_components; part++) {
					*fullkeylen += f->keys[k].component[part]->size;
				}
				if (f->keys[k].field && f->keys[k].field->data == kf->data) {
					*partlen = kf->size;
				} else {
					*partlen = *fullkeylen;
				}
				return k;
			}
		}
	}
	return -1;
}

/* Return total length of the key */
int
db_keylen (cob_file *f, int idx)
{
	int totlen, part;

	if (idx < 0 || idx > (int)(f->nkeys)) {
		return -1;
	}
	if (f->keys[idx].count_components > 0) {
		totlen = 0;
		for (part = 0; part < f->keys[idx].count_components; part++) {
			totlen += f->keys[idx].component[part]->size;
		}
		return totlen;
	}
	return f->keys[idx].field->size;
}

/* Save key for given index from 'record' into 'keyarea',
   returns total length of the key */
int
db_savekey (cob_file *f, unsigned char *keyarea, unsigned char *record, int idx)
{
	int totlen, part;

	if (f->keys[idx].count_components > 0) {
		totlen = 0;
		for (part = 0; part < f->keys[idx].count_components; part++) {
			memcpy (keyarea + totlen,
				record + (f->keys[idx].component[part]->data - f->record->data),
				f->keys[idx].component[part]->size);
			totlen += f->keys[idx].component[part]->size;
		}
		return totlen;
	}
	memcpy (keyarea, record + f->keys[idx].offset, f->keys[idx].field->size);
	return f->keys[idx].field->size;
}

/* Compare key for given index 'keyarea' to 'record'.
   returns compare status */
int
db_cmpkey (cob_file *f, unsigned char *keyarea, unsigned char *record, int idx, int partlen)
{
	int sts, part, totlen;
	size_t	cl;

	if (partlen <= 0) {
		partlen = db_keylen(f, idx);
		if (partlen <= 0) {
			cob_runtime_error (_("invalid internal call of %s"), "db_cmpkey");
			cob_runtime_error (_("Please report this!"));
			cob_stop_run (1);
		}
	}
	if (f->keys[idx].count_components > 0) {
		totlen = 0;
		for (part = 0; part < f->keys[idx].count_components && partlen > 0; part++) {
			cl = partlen > f->keys[idx].component[part]->size ? f->keys[idx].component[part]->size : partlen;
			sts = memcmp (keyarea + totlen,
					record + (f->keys[idx].component[part]->data - f->record->data),
					cl);
			if (sts != 0) {
				return sts;
			}
			totlen += f->keys[idx].component[part]->size;
			partlen -= f->keys[idx].component[part]->size;
		}
		return 0;
	}
	cl = partlen > (int)(f->keys[idx].field->size) ? (int)(f->keys[idx].field->size) : partlen;
	return memcmp (keyarea, record + f->keys[idx].offset, cl);
}

#endif

/* Routines common to both ODBC and OCI interfaces */
#if defined(WITH_ODBC) || defined(WITH_OCI)

#endif
