/*
 *  grp.h group structure and prototypes
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
#ifndef _GRP_H_INCLUDED
#define _GRP_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( __push, 8 )

#ifdef __cplusplus
 #ifndef _STDSIZE_T_DEFINED
 #define _STDSIZE_T_DEFINED
  namespace std {
    typedef unsigned size_t;
  }
  typedef std::size_t __w_size_t;
 #endif
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  using std::size_t;
 #endif
#else  /* __cplusplus not defined */
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   __w_size_t;
 #endif
#endif /* __cplusplus not defined */

#ifndef _GID_T_DEFINED_
 #define _GID_T_DEFINED_
 #ifdef __386__
  typedef unsigned short gid_t; /* Used for group IDs               */
 #elif defined(__MIPS__)
  typedef long           gid_t; /* Used for group IDs               */
 #endif
#endif

struct group {
    char        *gr_name;       /* group's name      */
    char        *gr_passwd;     /* group's password  */
    gid_t       gr_gid;         /* group ID number   */
    char        **gr_mem;       /* group members     */
};

#pragma pack( __pop )

/*
 *  POSIX 1003.1 Prototypes.
 */
_WCRTLINK extern struct group   *getgrnam( const char *__name );
_WCRTLINK extern struct group   *getgrgid( gid_t __gid );
_WCRTLINK extern struct group   *getgrent( void );
_WCRTLINK extern int            setgrent( void );
_WCRTLINK extern int            endgrent( void );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif