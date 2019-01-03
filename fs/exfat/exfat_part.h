#ifndef _EXFAT_PART_H
#define _EXFAT_PART_H

#include "exfat_config.h"
#include "exfat_global.h"
#include "exfat_api.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MBR_SIGNATURE           0xAA55
	typedef struct {
		UINT8       boot_code[446];
		UINT8       partition[64];
		UINT8       signature[2];
	} MBR_SECTOR_T;

	typedef struct {
		UINT8       def_boot;
		UINT8       bgn_chs[3];
		UINT8       sys_type;
		UINT8       end_chs[3];
		UINT8       start_sector[4];
		UINT8       num_sectors[4];
	} PART_ENTRY_T;

	INT32 ffsSetPartition(INT32 dev, INT32 num_vol, PART_INFO_T *vol_spec);
	INT32 ffsGetPartition(INT32 dev, INT32 *num_vol, PART_INFO_T *vol_spec);
	INT32 ffsGetDevInfo(INT32 dev, DEV_INFO_T *info);

#ifdef __cplusplus
}
#endif

#endif
