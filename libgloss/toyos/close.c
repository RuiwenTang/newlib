

#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

int close(int fildes) {
  int ret = -1;

  // TODO support close syscall
  errno = ENOSYS;

  return ret;
}
