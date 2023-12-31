/*
 *  sys/sysmips.h   MIPS architecture specific kernel call
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2018 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _SYS_SYSMIPS_H_INCLUDED
#define _SYS_SYSMIPS_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __MIPS__
 #error sysmips.h is only supported on MIPS architecture
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Commands for the sysmips(2) call
 *
 * sysmips(2) is deprecated - though some existing software uses it.
 * We only support the following commands.
 */
#define SETNAME                    1    /* set hostname                  */
#define FLUSH_CACHE                3    /* writeback and invalidate caches */
#define MIPS_FIXADE                7    /* control address error fixing  */
#define MIPS_RDNVRAM              10    /* read NVRAM */
#define MIPS_ATOMIC_SET         2001    /* atomically set variable       */

_WCRTLINK extern int sysmips( const int __cmd, const int __arg1, const int __arg2, const int __arg3 );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_SYS_SYSMIPS_H_INCLUDED */
