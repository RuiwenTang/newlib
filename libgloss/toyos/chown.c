
#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <reent.h>
#include <sys/types.h>
#undef errno
extern int errno;

int _chown_r(struct _reent *ptr, const char *path, uid_t owner, gid_t group) {
  ptr->_errno = ENOSYS;
  return -1;
}

int _chown(const char *path, uid_t owner, gid_t group) {
  errno = ENOSYS;
  return -1;
}
