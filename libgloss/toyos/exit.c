
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"
#include "syscall.h"

#undef errno
extern int errno;

void _exit(int fildes) {
  toyos_syscall1(__NR_exit, fildes);

  for (;;)
    ;
}
