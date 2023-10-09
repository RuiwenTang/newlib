#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <reent.h>

#include "config.h"
#include "syscall.h"

#undef errno
extern int errno;

int wait(int *status) {
  int ret = toyos_syscall1(__NR_wait, (u_int32_t)status);

  if (ret < 0) {
    errno = ENOSYS;
    ret = -1;
  }

  return ret;
}