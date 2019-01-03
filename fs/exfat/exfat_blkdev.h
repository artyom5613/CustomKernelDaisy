#ifndef _EXFAT_BLKDEV_H
#define _EXFAT_BLKDEV_H

#include "exfat_config.h"
#include "exfat_global.h"

#ifdef __cplusplus
extern "C" {
#endif
	typedef struct __BD_INFO_T {
		INT32 sector_size;
		INT32 sector_size_bits;
		INT32 sector_size_mask;
		INT32 num_sectors;
		BOOL  opened;
	} BD_INFO_T;

	INT32 bdev_init(void);
	INT32 bdev_shutdown(void);
	INT32 bdev_open(struct super_block *sb);
	INT32 bdev_close(struct super_block *sb);
	INT32 bdev_read(struct super_block *sb, UINT32 secno, struct buffer_head **bh, UINT32 num_secs, INT32 read);
	INT32 bdev_write(struct super_block *sb, UINT32 secno, struct buffer_head *bh, UINT32 num_secs, INT32 sync);
	INT32 bdev_sync(struct super_block *sb);
#ifdef __cplusplus
}
#endif
#endif
