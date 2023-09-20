#ifndef __TOYOS_SYSCALL_H__
#define __TOYOS_SYSCALL_H__

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define __NR_exit 0
#define __NR_write 1
#define __NR_mmap 2
#define __NR_unmmap 3
#define __NR_open 4
#define __NR_close 5
#define __NR_read 6

int32_t toyos_syscall0(u_int32_t arg0);
int32_t toyos_syscall1(u_int32_t arg0, u_int32_t arg1);
int32_t toyos_syscall2(u_int32_t arg0, u_int32_t arg1, u_int32_t arg2);
int32_t toyos_syscall3(u_int32_t arg0, u_int32_t arg1, u_int32_t arg2,
                       u_int32_t arg3);

#ifdef __cplusplus
}
#endif

#endif /* __TOYOS_SYSCALL_H__ */
