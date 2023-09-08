
#include <_ansi.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int dup2(int fildes1, int fildes2) {
  int ret = -1;

  errno = ENOSYS;
  return ret;
}
