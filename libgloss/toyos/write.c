#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#undef errno

extern int errno;

int _write(int file, char *ptr, int len) {
  int ret = -1;

  errno = ENOSYS;

  return 0;
}
