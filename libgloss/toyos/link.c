
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

int link(char *existing, char *new) {
  errno = EMLINK;
  return -1;
}