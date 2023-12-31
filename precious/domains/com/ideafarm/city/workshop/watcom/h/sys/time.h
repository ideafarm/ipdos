/*
 *  sys/time.h      POSIX Time functions
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
#ifndef _SYS_TIME_H_INCLUDED
#define _SYS_TIME_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

/*
 * Structure returned by gettimeofday() system call,
 * and used in other calls.
 */
struct timezone {
    int tz_minuteswest;     /* minutes west of Greenwich */
    int tz_dsttime;         /* type of dst correction */
};

#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED

struct timeval {
    long        tv_sec;     /* seconds */
    long        tv_usec;    /* and microseconds */
};

/*
 * Operations on timevals.
 *
 * NB: timercmp does not work for >= or <=.
 */
#define timerisset(tvp)         ((tvp)->tv_sec || (tvp)->tv_usec)
#define timercmp(tvp, uvp, cmp) ((tvp)->tv_sec cmp (uvp)->tv_sec) || \
    (tvp)->tv_sec == (uvp)->tv_sec && (tvp)->tv_usec cmp (uvp)->tv_usec )
#define timerclear(tvp)         ((tvp)->tv_sec = (tvp)->tv_usec = 0)

#endif

#define DST_NONE        0       /* not on dst */
#define DST_USA         1       /* USA style dst */
#define DST_AUST        2       /* Australian style dst */
#define DST_WET         3       /* Western European dst */
#define DST_MET         4       /* Middle European dst */
#define DST_EET         5       /* Eastern European dst */
#define DST_CAN         6       /* Canada */
#define DST_GB          7       /* Great Britain and Eire */
#define DST_RUM         8       /* Romania */
#define DST_TUR         9       /* Turkey */
#define DST_AUSTALT     10      /* Australian style with shift in 1986 */

/*
 * Structure used by getitimer() and setitimer() system calls.
 */
struct itimerval {
    struct timeval it_interval; /* Value to put into `it_value' when the timer expires. */
    struct timeval it_value;    /* Time to the next timer expiration. */
};

#define ITIMER_REAL     0       /* Timers run in real time. */
#define ITIMER_VIRTUAL  1       /* Timers run only when the process is executing. */
#define ITIMER_PROF     2       /* Process or kernel on its behalf is executing. */

_WCRTLINK extern int gettimeofday( struct timeval *__tv, struct timezone *__tz );
_WCRTLINK extern int settimeofday( const struct timeval *__tv, const struct timezone *__tz );
_WCRTLINK extern int getitimer( int __which, struct itimerval *__value );
_WCRTLINK extern int setitimer( int __which, const struct itimerval *__value, struct itimerval *__ovalue );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_SYS_TIME_H_INCLUDED */
