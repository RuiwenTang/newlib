
#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#undef errno

extern int errno;

int _lseek(int file, int ptr, int dir) {
  int ret = -1;

  errno = ENOSYS;

  return ret;
}
