#ifndef _TIME64_HELPERS_H
#define _TIME64_HELPERS_H

#include <linux/version.h>
#include <bits/types.h>
#include <time.h>
#include <stddef.h>

#if defined(__UCLIBC_USE_TIME64__) && __TARGET_ARCH_BITS__ == 32 && LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0)
#error 64bit time on 32bit targets is not supported on Linux < 5.1.0
#endif

struct __ts64_struct {
   __S64_TYPE tv_sec;
   __S64_TYPE tv_nsec;
};

#define TO_TS64_P(__ts) (((struct timespec *)(__ts)) ? \
                        (&(struct __ts64_struct) {.tv_sec = ((struct timespec *)(__ts))->tv_sec, \
                                                  .tv_nsec = ((struct timespec *)(__ts))->tv_nsec}) : NULL)

struct __its64_struct {
    __S64_TYPE interval_tv_sec;
    __S64_TYPE interval_tv_nsec;
    __S64_TYPE value_tv_sec;
    __S64_TYPE value_tv_nsec;
};

#define TO_ITS64_P(__its) (((struct itimerspec *)(__its)) ? \
                          (&(struct __its64_struct) {.interval_tv_sec = ((struct itimerspec *)(__its))->it_interval.tv_sec, \
                                                     .interval_tv_nsec = ((struct itimerspec *)(__its))->it_interval.tv_nsec, \
                                                     .value_tv_sec = ((struct itimerspec *)(__its))->it_value.tv_sec, \
                                                     .value_tv_nsec = ((struct itimerspec *)(__its))->it_value.tv_nsec}) : NULL)


#endif /* _TIME64_HELPERS_H */
