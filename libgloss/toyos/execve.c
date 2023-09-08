#include <_ansi.h>
#include <errno.h>

#include "config.h"

#undef errno

extern int errno;

int execve(char *name, char **argv, char **env) {
  int ret;

  ret = -1;
  if (ret < 0) {
    errno = -ret;
    ret = -1;
  }

  return ret;
}