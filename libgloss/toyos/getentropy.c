#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

int getentropy(void* buf, size_t buflen) {
  if (buflen > 256 || buf == 0) {
    errno = EIO;
    return -1;
  }

  char* p = (char*)buf;

  for (size_t i = 0; i < buflen; i++) {
    p[i] = (char)((i + 1) & 0xff);
  }

  return 0;
}