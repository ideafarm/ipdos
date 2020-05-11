/*
 *  ntnls.h     NT National Language Support definitions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2018 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _NTNLS_
#define _NTNLS_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Maximum lead bytes */
#define MAXIMUM_LEADBYTES   12

/* Code page table information */
typedef struct _CPTABLEINFO {
    USHORT  CodePage;
    USHORT  MaximumCharacterSize;
    USHORT  DefaultChar;
    USHORT  UniDefaultChar;
    USHORT  TransDefaultChar;
    USHORT  TransUniDefaultChar;
    USHORT  DBCSCodePage;
    UCHAR   LeadByte[MAXIMUM_LEADBYTES];
    PUSHORT MultiByteTable;
    PVOID   WideCharTable;
    PUSHORT DBCSRanges;
    PUSHORT DBCSOffsets;
} CPTABLEINFO;
typedef CPTABLEINFO *PCPTABLEINFO;

/* NLS table information */
typedef struct _NLSTABLEINFO {
    CPTABLEINFO OemTableInfo;
    CPTABLEINFO AnsiTableInfo;
    PUSHORT     UpperCaseTable;
    PUSHORT     LowerCaseTable;
} NLSTABLEINFO;
typedef NLSTABLEINFO    *PNLSTABLEINFO;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTNLS_ */