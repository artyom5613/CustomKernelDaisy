#ifndef _EXFAT_OAL_H
#define _EXFAT_OAL_H

#include "exfat_config.h"
#include "exfat_global.h"
#include <linux/version.h>

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct {
		UINT16      sec;
		UINT16      min;
		UINT16      hour;
		UINT16      day;
		UINT16      mon;
		UINT16      year;
	} TIMESTAMP_T;

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,37)
#define DECLARE_MUTEX(m) DEFINE_SEMAPHORE(m)
#endif

	INT32 sm_init(struct semaphore *sm);
	INT32 sm_P(struct semaphore *sm);
	void  sm_V(struct semaphore *sm);

	TIMESTAMP_T *tm_current(TIMESTAMP_T *tm, UINT8 tz_utc);

#ifdef __cplusplus
}
#endif

#endif

