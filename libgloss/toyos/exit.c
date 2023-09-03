
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

void _exit(int fildes) {
  int ret = -1;

  // TODO support close syscall
  errno = ENOSYS;

  for (;;)
    ;
}
