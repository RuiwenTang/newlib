
#include <_ansi.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int dup(int fildes) {
  int ret = -1;

  errno = ENOSYS;
  return ret;
}
