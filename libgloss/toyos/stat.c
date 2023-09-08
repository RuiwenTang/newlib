#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int _stat(const char *file, struct stat *st) {
  int ret;

  if (!file && !st) {
    errno = EINVAL;
    return -1;
  }

  ret = -1;
  if (ret < 0) {
    errno = -ret;
    return -1;
  }

  return 0;
}