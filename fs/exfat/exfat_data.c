#include "exfat_config.h"
#include "exfat_global.h"
#include "exfat_data.h"
#include "exfat_oal.h"

#include "exfat_blkdev.h"
#include "exfat_cache.h"
#include "exfat_nls.h"
#include "exfat_super.h"
#include "exfat.h"

FS_STRUCT_T fs_struct[MAX_DRIVE];

DECLARE_MUTEX(f_sem);
BUF_CACHE_T FAT_cache_array[FAT_CACHE_SIZE];
BUF_CACHE_T FAT_cache_lru_list;
BUF_CACHE_T FAT_cache_hash_list[FAT_CACHE_HASH_SIZE];

DECLARE_MUTEX(b_sem);
BUF_CACHE_T buf_cache_array[BUF_CACHE_SIZE];
BUF_CACHE_T buf_cache_lru_list;
BUF_CACHE_T buf_cache_hash_list[BUF_CACHE_HASH_SIZE];
