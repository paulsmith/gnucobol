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


#ifndef _FILEIO_H
#define _FILEIO_H

#define cobglobptr file_globptr
#define cobsetptr file_setptr

#ifndef _CONFIG_H
#include <config.h>
#define _CONFIG_H
#endif

#define _LFS64_LARGEFILE		1
#define _LFS64_STDIO			1
#define _FILE_OFFSET_BITS		64
#define _LARGEFILE64_SOURCE		1
#ifdef	_AIX
#define _LARGE_FILES			1
#endif	/* _AIX */
#if defined(__hpux__) && !defined(__LP64__)
#define _APP32_64BIT_OFF_T		1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifndef EDEADLK
#ifdef EDEADLOCK		/* SCO name for EDEADLK */
#define EDEADLK EDEADLOCK
#else 
#define EDEADLK 99
#endif
#endif

#ifdef	HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef	HAVE_FCNTL_H
#include <fcntl.h>
#endif

#ifdef	_WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <direct.h>
#include <io.h>
#if defined (__WATCOMC__) || defined (__ORANGEC__)
#define	fdcobsync	fsync
#else
#define	fdcobsync	_commit
#endif
#if !defined(__BORLANDC__) && !defined(__WATCOMC__) && !defined(__ORANGEC__)
#define	getcwd		_getcwd
#define	chdir		_chdir
#define	mkdir		_mkdir
#define	rmdir		_rmdir
#define	open		_open
#define	close		_close
#define	unlink		_unlink
#define	fdopen		_fdopen
#ifndef lseek
#define lseek		_lseeki64
#endif
#endif

#ifndef	_O_TEMPORARY
#define	_O_TEMPORARY	0
#endif

#else	/* _WIN32 */

#if	defined(HAVE_FDATASYNC)
#define	fdcobsync	fdatasync
#else
#define	fdcobsync	fsync
#endif

#ifndef	O_BINARY
#define	O_BINARY	0
#endif

#endif	/* _WIN32 */

#include "sysdefines.h"

/* Force symbol exports */
#define	COB_LIB_EXPIMP
#include "libcob.h"
#include "coblocal.h"

#ifdef	WORDS_BIGENDIAN
#define	COB_MAYSWAP_16(x)	((unsigned short)(x))
#define	COB_MAYSWAP_32(x)	((unsigned int)(x))
#else
#define	COB_MAYSWAP_16(x)	(COB_BSWAP_16((unsigned short)(x)))
#define	COB_MAYSWAP_32(x)	(COB_BSWAP_32((unsigned int)(x)))
#endif

/* File API struct passed to all I/O functions */
typedef struct _cob_file_api {
	cob_global		*glbptr;
	cob_settings	*setptr;
	struct cob_fileio_funcs **io_funcs;
	char			**file_paths;
	char			*file_open_buff;
	void	(*add_file_cache)	(cob_file *);
	void	(*del_file_cache)	(cob_file *);
	void	(*chk_file_mapping)	(cob_file *f);
	int		(*cob_write_dict)	(cob_file *f, char *filename);
	int		(*cob_read_dict)	(cob_file *f, char *filename, int updt, int *retsts);
	int		(*cob_file_write_opt) (cob_file *f, const int opt);
} cob_file_api;

/* File I/O function pointer structure */
struct cob_fileio_funcs {
	int	(*open)			(cob_file_api *, cob_file *, char *, const int, const int);
	int	(*close)		(cob_file_api *, cob_file *, const int);
	int	(*start)		(cob_file_api *, cob_file *, const int, cob_field *);
	int	(*read)			(cob_file_api *, cob_file *, cob_field *, const int);
	int	(*read_next)	(cob_file_api *, cob_file *, const int);
	int	(*write)		(cob_file_api *, cob_file *, const int);
	int	(*rewrite)		(cob_file_api *, cob_file *, const int);
	int	(*recdelete)	(cob_file_api *, cob_file *);

	int	(*fildelete)	(cob_file_api *, cob_file *, char *);
	void (*ioinit)		(cob_file_api *);
	void (*ioexit)		(cob_file_api *);
	int	(*iofork)		(cob_file_api *);
	int	(*iosync)		(cob_file_api *, cob_file *);
	int	(*commit)		(cob_file_api *, cob_file *);
	int	(*rollback)		(cob_file_api *, cob_file *);
	int	(*iounlock)		(cob_file_api *, cob_file *);
};

extern	cob_global		*file_globptr;
extern	cob_settings	*file_setptr;

static const int	status_exception[] = {
	0,				/* 0x */
	COB_EC_I_O_AT_END,		/* 1x */
	COB_EC_I_O_INVALID_KEY,		/* 2x */
	COB_EC_I_O_PERMANENT_ERROR,	/* 3x */
	COB_EC_I_O_LOGIC_ERROR,		/* 4x */
	COB_EC_I_O_RECORD_OPERATION,	/* 5x */
	COB_EC_I_O_FILE_SHARING,	/* 6x */
	COB_EC_I_O,			/* Unused */
	COB_EC_I_O,			/* Unused */
	COB_EC_I_O_IMP			/* 9x */
};

COB_HIDDEN int cob_write_dict (cob_file *f, char *filename);
COB_HIDDEN int cob_read_dict (cob_file *f, char *filename, int updt, int *retsts);
COB_HIDDEN void cob_set_file_format (cob_file *f);
COB_HIDDEN void cob_chk_file_mapping (cob_file *f);
COB_HIDDEN void cob_file_save_status (cob_file *f, cob_field *fnstatus, const int status);
COB_HIDDEN void cob_file_sync (cob_file *f);

#ifdef	WITH_DB
COB_HIDDEN void	cob_bdb_init_fileio (cob_file_api *);
#endif
#ifdef	WITH_LMDB
COB_HIDDEN void	cob_lmdb_init_fileio (cob_file_api *);
#endif

#if defined(WITH_CISAM) || defined(WITH_DISAM) || defined(WITH_VBISAM)
void	cob_isam_init_fileio (cob_file_api *);
#endif
#endif
