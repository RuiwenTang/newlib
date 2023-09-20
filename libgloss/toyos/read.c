
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

int read(int file, char* ptr, int len) {
  int ret = toyos_syscall3(__NR_read, file, (u_int32_t)ptr, len);

  if (ret < 0) {
    errno = ENOSYS;
  }

  return ret;
}
