
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int open(char *file, int flags, int mode) {
  int ret;

  ret = -1;
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}