/*
 * Copyright (c) 1983, 1987 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef _SYS_IOCTLOS2_H_
#define _SYS_IOCTLOS2_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#define ioc(x,y) ((x<<8)|y)

#define FIONSTATUS        _IOR('f', 120, double)
#define FIOBSTATUS        _IOR('f', 122, short)

#define SIOCSHOSTID       _IOW('s', 10, long)

#define SIOCGNBNAME       _IOR('s', 11, long)
#define SIOCSNBNAME       _IOW('s', 12, long)
#define SIOCGNCBFN        _IOR('s', 13, long)

#define SIOCSSYN          _IOW('s', 14, long)

#define SIOCSIFBRD        _IOW('i', 27, int)
#define SIOCSIFALLRTB     _IOW('i', 65, struct ifreq)

#define SIOCSARP          _IOW('i', 30, struct arpreq)
#define SIOCGARP          _IOR('i', 31, struct arpreq)
#define SIOCDARP          _IOW('i', 32, struct arpreq)

#define SIOCSIF802_3      _IOW('i', 40, struct ifreq)
#define SIOCSIFNO802_3    _IOW('i', 41, struct ifreq)
#define SIOCSIFNOREDIR    _IOW('i', 42, struct ifreq)
#define SIOCSIFYESREDIR   _IOW('i', 43, struct ifreq)

#define SIOCGIFMTU        _IOR('i', 57, struct ifreq)
#define SIOCSIFMTU        _IOW('i', 45, struct ifreq)
#define SIOCSIFFDDI       _IOW('i', 46, struct ifreq)
#define SIOCSIFNOFDDI     _IOW('i', 47, struct ifreq)
#define SIOCSRDBRD        _IOW('i', 48, struct ifreq)

#define SIOCGARP_TR       _IOR('i', 50, struct arpreq_tr)
#define SIOCSARP_TR       _IOW('i', 49, struct arpreq_tr)

#ifdef SLBOOTP
#define SIOCGUNIT         _IOR('i', 70, struct ifreq)
#endif

#define SIOCGIFVALID      _IOR('i', 75, struct ifreq)
#define SIOCGIFBOUND      _IOR('i', 76, struct bndreq)

#define SIOCGMCAST        _IOR('i', 81, struct addrreq)
#define SIOCMULTISBC      _IOW('i', 61, struct ifreq)
#define SIOCMULTISFA      _IOW('i', 62, struct ifreq)

#define SIOCSIFRUNNINGBLK _IOW('i', 77, struct ifreq)

#define SIOCGIFEFLAGS     _IOR('i', 150, struct ifreq)
#define SIOCSIFEFLAGS     _IOW('i', 151, struct ifreq)
#define SIOCGIFTRACE      _IOR('i', 152, struct ifreq)
#define SIOCSIFTRACE      _IOW('i', 153, struct ifreq)

#define SIOCSSTAT         _IOW('i', 154, struct ifreq)
#define SIOCGSTAT         _IOR('i', 155, struct ifreq)

#define SIOCSMSL          _IOW('t', 1, long)
#define SIOCGMSL          _IOR('t', 2, long)

#define SIOSTATMBUF       _IOR('n', 40, struct mbstat)
#define SIOSTATTCP        _IOR('n', 41, struct tcpstat)
#define SIOSTATUDP        _IOR('n', 42, struct udpstat)
#define SIOSTATIP         _IOR('n', 43, struct ipstat)
#define SIOSTATSO         _IOR('n', 44, char /*struct sockaddr*/)
#define SIOSTATTCPZ       _IOR('n', 241, struct tcpstat)
#define SIOSTATUDPZ       _IOR('n', 242, struct udpstat)
#define SIOSTATIPZ        _IOR('n', 243, struct ipstat)
#define SIOSTATRT         _IOR('n', 45, char /*struct rtentries*/)
#define SIOFLUSHRT        _IOW('n', 46, long)
#define SIOSTATICMP       _IOR('n', 47, struct icmpstat)
#define SIOSTATICMPZ      _IOR('n', 247, struct icmpstat)
#define SIOSTATIF         _IOR('n', 48, char /*struct ifmib*/)
#define SIOSTATAT         _IOR('n', 49, char /*struct statatreq*/)
#define SIOSTATARP        _IOR('n', 50, char /*struct oarptab*/)
#define SIOSTATIF42       _IOR('n', 51, char /*struct ifmib*/)
#define SIOSTATCNTRT      _IOR('n', 52, int)
#define SIOSTATCNTAT      _IOR('n', 53, int)
#define SIOSTATIGMP       _IOR('n', 54, struct igmpstat)
#define SIOFLUSHRTIFP     _IOW('n', 55, long)
#define SIOSTATIGMPZ      _IOR('n', 254, struct igmpstat)
#define SIOCARP           _IOR('i', 156, int)

struct bndreq {
    short bindings;
    short bound;
};

#endif
