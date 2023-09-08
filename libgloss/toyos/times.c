#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <reent.h>
#include <sys/times.h>

#include "config.h"

#undef errno
extern int errno;

clock_t times(struct tms *buf) {
  clock_t clock = 0;
  int ret;

  ret = -1;
  if (ret < 0) {
    errno = -ret;
    return (clock_t)-1;
  }

  return clock;
}