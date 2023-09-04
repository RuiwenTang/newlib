#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int write(int file, char *ptr, int len) {
  int ret = toyos_syscall3(__NR_write, file, (u_int32_t)ptr, len);

  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}
