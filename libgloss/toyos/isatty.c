
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>

#include "config.h"

#undef errno
extern int errno;

int isatty(int file) { return (file < 3); }
