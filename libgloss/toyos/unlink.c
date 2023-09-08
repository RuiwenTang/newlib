#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <reent.h>

#include "config.h"

#undef errno

extern int errno;

int unlink(char *name) {
  errno = ENOENT;
  return -1;
}