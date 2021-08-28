#if !defined(TYPES_H)
#define TYPES_H


#ifdef __cplusplus
#include <linux/types.h>
#else
#include <vmlinux.h>
#endif

typedef __u64 u64;
typedef __s64 s64;

typedef __u32 u32;
typedef __s32 s32;

typedef __u16 u16;
typedef __s16 s16;

typedef __u8 u8;
typedef __s8 s8;

enum FlowDirection { DOWNLINK = 0, UPLINK = 1 };

#endif // TYPES_H
