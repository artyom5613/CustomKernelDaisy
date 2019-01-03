#ifndef _EXFAT_DATA_H
#define _EXFAT_DATA_H
#include "exfat_config.h"
#include "exfat_global.h"
#ifdef __cplusplus
extern "C" {
#endif
#define MAX_DEVICE              2
#define MAX_DRIVE               4
#define MAX_OPEN                20
#define MAX_DENTRY              512
#define FAT_CACHE_SIZE          128
#define FAT_CACHE_HASH_SIZE     64
#define BUF_CACHE_SIZE          256
#define BUF_CACHE_HASH_SIZE     64
#define DEFAULT_CODEPAGE        437
#define DEFAULT_IOCHARSET       "utf8"
#ifdef __cplusplus
}
#endif
#endif
