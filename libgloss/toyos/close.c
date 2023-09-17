

#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno
extern int errno;

int close(int fildes) {
  int ret = toyos_syscall1(__NR_close, fildes);

  if (ret) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}
