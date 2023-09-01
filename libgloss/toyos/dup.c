
#include "config.h"
#include <_ansi.h>
#include <errno.h>

#undef errno

extern int errno;

int _dup(int fildes) {
  int ret = -1;

  errno = ENOSYS;
  return ret;
}

