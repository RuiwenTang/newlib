#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <reent.h>

#include "config.h"

#undef errno
extern int errno;

int wait(int *status) {
  int ret;

  /* create a child process */
  ret = -1;
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}