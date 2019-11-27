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

#ifdef WITH_OCI

#include <oci.h>

void cob_oci_init_fileio (cob_file_api *a);

/* Local variables */

static int oci_sync			(cob_file_api *, cob_file *);
static int oci_open			(cob_file_api *, cob_file *, char *, const int, const int);
static int oci_close		(cob_file_api *, cob_file *, const int);
static int oci_start		(cob_file_api *, cob_file *, const int, cob_field *);
static int oci_read			(cob_file_api *, cob_file *, cob_field *, const int);
static int oci_read_next	(cob_file_api *, cob_file *, const int);
static int oci_write		(cob_file_api *, cob_file *, const int);
static int oci_delete		(cob_file_api *, cob_file *);
static int oci_file_delete	(cob_file_api *, cob_file *, char *);
static int oci_rewrite		(cob_file_api *, cob_file *, const int);
static int oci_file_unlock	(cob_file_api *, cob_file *);
static void oci_exit_fileio	(cob_file_api *);
static int oci_fork 		(cob_file_api *);

static int oci_dummy () { return 0; }

static const struct cob_fileio_funcs oci_indexed_funcs = {
	oci_open,
	oci_close,
	oci_start,
	oci_read,
	oci_read_next,
	oci_write,
	oci_rewrite,
	oci_delete,
	oci_file_delete,
	cob_oci_init_fileio,
	oci_exit_fileio,
	oci_fork,
	oci_sync,
	(void*)oci_dummy,
	oci_file_unlock,
	(void*)oci_dummy
};

static int		db_join = 1;

struct indexed_file {
	int		maxkeylen;
	int		primekeylen;
	unsigned char	*savekey;	/* Work area for saving key value */
	unsigned char	*suppkey;	/* Work area for saving key value */
	unsigned char	*saverec;	/* For saving copy of record */
};

/* Local functions */

static int
oci_sync (cob_file_api *a, cob_file *f)
{

	if (f->organization == COB_ORG_INDEXED) {
	}
	return 0;
}

/* INDEXED */

static void
join_environment (cob_file_api *a)
{

}

/* Delete file */
static int
oci_file_delete (cob_file_api *a, cob_file *f, char *filename)
{
	int	i;
	char	file_open_buff[COB_FILE_MAX+1];

	return 0;
}

static int
is_absolute (const char *filename)
{
#ifdef	_WIN32
	if (filename[0] == '/' || filename[0] == '\\') {
		return 1;
	} else {
		if (isalpha (filename[0]) && filename[1] == ':' &&
		  (filename[2] == '/' || filename[2] == '\\')) {
			return 1;
		} else {
			return 0;
		}
	}
#else
	if (filename[0] == '/') {
		return 1;
	} else {
		return 0;
	}
#endif
}

/* OPEN INDEXED file */
static int
oci_open (cob_file_api *a, cob_file *f, char *filename, const int mode, const int sharing)
{
	struct indexed_file	*p;
	size_t			i;
	size_t			j;
	size_t			maxsize;
	int			handle_created;
	cob_u32_t		flags = 0;
	int			ret = 0;
	int			nonexistent;
	char		runtime_buffer[COB_FILE_MAX+1];

	if (db_join) {			/* Join BDB, on first OPEN of INDEXED file */
		join_environment (a);
		db_join = 0;
	}

	nonexistent = 0;
	p = cob_malloc (sizeof (struct indexed_file));
	f->flag_file_lock = 0;	

	switch (mode) {
	case COB_OPEN_INPUT:
		break;
	case COB_OPEN_OUTPUT:
		break;
	case COB_OPEN_I_O:
	case COB_OPEN_EXTEND:
		break;
	}


	if (mode != COB_OPEN_OUTPUT) {
	}

	for (i = 0; i < f->nkeys; ++i) {
	}

	f->file = p;

	return 0;
}

/* Close the INDEXED file */

static int
oci_close (cob_file_api *a, cob_file *f, const int opt)
{
	struct indexed_file	*p;

	COB_UNUSED (a);
	COB_UNUSED (opt);

	p = f->file;

	cob_free (p);

	return COB_STATUS_00_SUCCESS;
}


/* START INDEXED file with positioning */

static int
oci_start (cob_file_api *a, cob_file *f, const int cond, cob_field *key)
{
	COB_UNUSED (a);

	return 0;
}

/* Random READ of the INDEXED file  */

static int
oci_read (cob_file_api *a, cob_file *f, cob_field *key, const int read_opts)
{
	struct indexed_file	*p;
	int			ret = 0;

	COB_UNUSED (a);
	p = f->file;

	return ret;
}

/* Sequential READ of the INDEXED file */

static int
oci_read_next (cob_file_api *a, cob_file *f, const int read_opts)
{
	struct indexed_file	*p;
	int			ret = 0;

	COB_UNUSED (a);
	p = f->file;

	return ret;
}


/* WRITE to the INDEXED file  */

static int
oci_write (cob_file_api *a, cob_file *f, const int opt)
{
	struct indexed_file	*p;
	int			ret = 0;

	COB_UNUSED (a);
	return ret;
}


/* DELETE record from the INDEXED file  */

static int
oci_delete (cob_file_api *a, cob_file *f)
{
	int			ret;

	COB_UNUSED (a);
	return ret;
}

/* REWRITE record to the INDEXED file  */

static int
oci_rewrite (cob_file_api *a, cob_file *f, const int opt)
{
	int			ret = 0;

	COB_UNUSED (a);
	return ret;
}


static int
oci_file_unlock (cob_file_api *a, cob_file *f)
{
	COB_UNUSED (a);
	if (COB_FILE_SPECIAL(f)) {
		return 0;
	}
	if (f->organization == COB_ORG_SORT) {
		return 0;
	}

	if (f->open_mode != COB_OPEN_CLOSED 
	 && f->open_mode != COB_OPEN_LOCKED) {
		if (f->file) {
		}
	}
	return 0;
}

/* Call this routine when a new process has been forked */
static int
oci_fork (cob_file_api *a)
{
	COB_UNUSED (a);
	return 0;
}

static void
oci_exit_fileio (cob_file_api *a)
{
	COB_UNUSED (a);
}

void
cob_oci_init_fileio (cob_file_api *a)
{
	a->io_funcs[COB_IO_OCI] = (void*)&oci_indexed_funcs;
}

#endif
