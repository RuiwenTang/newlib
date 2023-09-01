#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#undef errno

extern int errno;

void *_sbrk(int incr) {
  int ret = -1;

  errno = ENOSYS;

  return (void *)0;
}
