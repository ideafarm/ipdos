/*
 * Copyright (c) 1987, 1991, 1993
 *      The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _MACHINE_ENDIAN_H_
#define _MACHINE_ENDIAN_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

/* Define _NOQUAD if the compiler does NOT support 64-bit integers. */
#define _NOQUAD

#define _QUAD_HIGHWORD 1
#define _QUAD_LOWWORD  0

#ifndef _POSIX_SOURCE
#define LITTLE_ENDIAN   1234
#define BIG_ENDIAN      4321
#define PDP_ENDIAN      3412

#define BYTE_ORDER      LITTLE_ENDIAN

#include <sys/cdefs.h>

__BEGIN_DECLS
unsigned long  _System htonl __TCPPROTO((unsigned long));
unsigned short _System htons __TCPPROTO((unsigned short));
unsigned long  _System ntohl __TCPPROTO((unsigned long));
unsigned short _System ntohs __TCPPROTO((unsigned short));
__END_DECLS

#if BYTE_ORDER == BIG_ENDIAN && !defined(lint)
#define ntohl(x)        (x)
#define ntohs(x)        (x)
#define htonl(x)        (x)
#define htons(x)        (x)

#define NTOHL(x)        (x)
#define NTOHS(x)        (x)
#define HTONL(x)        (x)
#define HTONS(x)        (x)

#else

#define NTOHL(x)        (x) = ntohl((u_long)x)
#define NTOHS(x)        (x) = ntohs((u_short)x)
#define HTONL(x)        (x) = htonl((u_long)x)
#define HTONS(x)        (x) = htons((u_short)x)
#endif
#endif

#endif
