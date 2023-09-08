#include <_ansi.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int fork() {
  int ret;

  /* create a child process */
  ret = -1;
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}