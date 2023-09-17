
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int open(char *file, int flags, int mode) {
  int ret = toyos_syscall3(__NR_open, (u_int32_t)file, flags, mode);
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}