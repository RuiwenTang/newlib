#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int symlink(const char *path1, const char *path2) {
  errno = ENOSYS;
  return -1;
}