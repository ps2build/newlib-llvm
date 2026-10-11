#ifndef _SYS_STATVFS_H
#define _SYS_STATVFS_H

#include <sys/cdefs.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

struct statvfs {
  unsigned long f_bsize;
  unsigned long f_frsize;
  fsblkcnt_t f_blocks;
  fsblkcnt_t f_bfree;
  fsblkcnt_t f_bavail;
  fsfilcnt_t f_files;
  fsfilcnt_t f_ffree;
  fsfilcnt_t f_favail;
  unsigned long f_fsid;
  unsigned long f_flag;
  unsigned long f_namemax;
};

#define ST_RDONLY 0x1
#define ST_NOSUID 0x2

int statvfs (const char *__restrict __path, struct statvfs *__restrict __buf);
int fstatvfs (int __fd, struct statvfs *__buf);

#ifdef __cplusplus
}
#endif

#endif /* _SYS_STATVFS_H */
