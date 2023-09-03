
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

int kill(int pid, int sig) {
  errno = EINVAL;
  return -1;
}