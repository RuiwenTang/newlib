
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int lseek(int file, int ptr, int dir) {
  int ret = toyos_syscall3(__NR_seek, file, ptr, dir);

  if (ret < 0) {
    errno = ENOSYS;
  }

  return ret;
}
