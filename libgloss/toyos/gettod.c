#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/time.h>
#include <sys/times.h>

#include "config.h"

#undef errno
extern int errno;

int gettimeofday(struct timeval *ptimeval, void *ptimezone) {
  errno = ENOSYS;
  return -1;
}