
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int read(int file, char* ptr, int len) {
  int ret = -1;

  errno = ENOSYS;

  return ret;
}
