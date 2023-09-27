#include <_ansi.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int fork() {
  int ret = toyos_syscall0(__NR_fork);

  if (ret == -1) {
    errno = ENOSYS;
    ret = -1;
  }

  return ret;
}
