
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "config.h"

#undef errno
extern int errno;

int fstat(int fildes, struct stat *st) {
  st->st_mode = S_IFCHR;
  return 0;
}
