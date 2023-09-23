
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno
extern int errno;

int getpid() {
  int ret = toyos_syscall0(__NR_getpid);
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }
  return ret;
}