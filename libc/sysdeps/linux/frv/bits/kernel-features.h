#ifndef _LINUX_FRV_KERNEL_FEATURES_H_
#define _LINUX_FRV_KERNEL_FEATURES_H_

#include "libc/sysdeps/linux/common/bits/kernel-features.h"

/* frv does not have prlimit64 */
#undef __ASSUME_PRLIMIT64

#endif /* _LINUX_FRV_KERNEL_FEATURES_H_ */
