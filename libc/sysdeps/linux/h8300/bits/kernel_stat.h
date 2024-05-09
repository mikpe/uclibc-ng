#ifndef _BITS_STAT_STRUCT_H
#define _BITS_STAT_STRUCT_H

/* This file provides whatever this particular arch's kernel thinks
 * struct kernel_stat should look like...  It turns out each arch has a
 * different opinion on the subject... */

struct kernel_stat {
	unsigned long	st_dev;
	unsigned long	st_ino;
	unsigned int	st_mode;
	unsigned int	st_nlink;
	unsigned int	st_uid;
	unsigned int	st_gid;
	unsigned long	st_rdev;
	unsigned long	__pad1;
	long		st_size;
	int		st_blksize;
	int		__pad2;
	long		st_blocks;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	unsigned int	__unused4;
	unsigned int	__unused5;
};

struct kernel_stat64 {
	unsigned long long st_dev;
	unsigned long long st_ino;
	unsigned int	st_mode;
	unsigned int	st_nlink;
	unsigned int	st_uid;
	unsigned int	st_gid;
	unsigned long long st_rdev;
	unsigned long long __pad1;
	long long	st_size;
	int		st_blksize;
	int		__pad2;
	long long	st_blocks;
	struct timespec	st_atim;
	struct timespec	st_mtim;
	struct timespec	st_ctim;
	unsigned int	__unused4;
	unsigned int	__unused5;
};

#endif	/*  _BITS_STAT_STRUCT_H */

