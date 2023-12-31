/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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

#ifndef _SYS_SOCKIO_H_
#define _SYS_SOCKIO_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <sys/ioccom.h>

#define SIOCATMARK       _IOR('s',  7, int)
#define SIOCSPGRP        _IOW('s',  8, int)
#define SIOCGPGRP        _IOR('s',  9, int)

#define SIOCADDRT        _IOW('r', 10, struct ortentry)
#define SIOCDELRT        _IOW('r', 11, struct ortentry)

#define SIOCSIFADDR      _IOW('i', 12, struct ifreq)
#define OSIOCGIFADDR     _IOWR('i', 13, struct ifreq)
#define SIOCGIFADDR      _IOWR('i', 33, struct ifreq)
#define SIOCSIFDSTADDR   _IOW('i', 14, struct ifreq)
#define OSIOCGIFDSTADDR  _IOWR('i', 15, struct ifreq)
#define SIOCGIFDSTADDR   _IOWR('i', 34, struct ifreq)
#define SIOCSIFFLAGS     _IOW('i', 16, struct ifreq)
#define SIOCGIFFLAGS     _IOWR('i', 17, struct ifreq)
#define OSIOCGIFBRDADDR  _IOWR('i', 18, struct ifreq)
#define SIOCGIFBRDADDR   _IOWR('i', 35, struct ifreq)
#define SIOCSIFBRDADDR   _IOW('i', 19, struct ifreq)
#define OSIOCGIFCONF     _IOWR('i', 20, struct ifconf)
#define SIOCGIFCONF      _IOWR('i', 36, struct ifconf)
#define OSIOCGIFNETMASK  _IOWR('i', 21, struct ifreq)
#define SIOCGIFNETMASK   _IOWR('i', 37, struct ifreq)
#define SIOCSIFNETMASK   _IOW('i', 22, struct ifreq)
#define SIOCGIFMETRIC    _IOWR('i', 23, struct ifreq)
#define SIOCSIFMETRIC    _IOW('i', 24, struct ifreq)
#define SIOCDIFADDR      _IOW('i', 64, struct ifreq)
#define SIOCAIFADDR      _IOW('i', 63, struct ifaliasreq)

#define SIOCADDMULTI     _IOW('i', 51, struct ifreq)
#define SIOCDELMULTI     _IOW('i', 52, struct ifreq)

#endif
