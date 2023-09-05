#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno

extern int errno;

#define MAP_ANON 0x20

void *sbrk(int incr) {
  int ret = toyos_syscall3(__NR_mmap, incr, 0, MAP_ANON);

  if (ret < 0x80000000) {
    ret = 0;
    errno = ENOSYS;
  }
  return (void *)ret;
}
