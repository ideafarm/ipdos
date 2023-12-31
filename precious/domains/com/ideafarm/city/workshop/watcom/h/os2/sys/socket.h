/*
 * Copyright (c) 1982, 1985, 1986, 1988, 1993, 1994
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

#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#define SOCK_STREAM     1
#define SOCK_DGRAM      2
#define SOCK_RAW        3
#define SOCK_RDM        4
#define SOCK_SEQPACKET  5

#define SO_DEBUG        0x0001
#define SO_ACCEPTCONN   0x0002
#define SO_REUSEADDR    0x0004
#define SO_KEEPALIVE    0x0008
#define SO_DONTROUTE    0x0010
#define SO_BROADCAST    0x0020
#define SO_USELOOPBACK  0x0040
#define SO_LINGER       0x0080
#define SO_OOBINLINE    0x0100
#define SO_L_BROADCAST  0x0200
#define SO_RCV_SHUTDOWN 0x0400
#define SO_SND_SHUTDOWN 0x0800
#define SO_REUSEPORT    0x1000
#define SO_TTCP         0x2000

#define SO_SNDBUF       0x1001
#define SO_RCVBUF       0x1002
#define SO_SNDLOWAT     0x1003
#define SO_RCVLOWAT     0x1004
#define SO_SNDTIMEO     0x1005
#define SO_RCVTIMEO     0x1006
#define SO_ERROR        0x1007
#define SO_TYPE         0x1008
#define SO_OPTIONS      0x1010

struct  linger {
    long_int l_onoff;
    long_int l_linger;
};

#define SOL_SOCKET 0xffff

#define AF_UNSPEC       0
#define AF_LOCAL        1
#define AF_UNIX         AF_LOCAL
#define AF_OS2          AF_UNIX
#define AF_INET         2
#define AF_IMPLINK      3
#define AF_PUP          4
#define AF_CHAOS        5
#define AF_NS           6
#define AF_ISO          7
#define AF_OSI          AF_ISO
#define AF_ECMA         8
#define AF_DATAKIT      9
#define AF_CCITT        10
#define AF_SNA          11
#define AF_DECnet       12
#define AF_DLI          13
#define AF_LAT          14
#define AF_HYLINK       15
#define AF_APPLETALK    16
#define AF_NB           17
#define AF_NETBIOS      AF_NB
#define AF_LINK         18
#define pseudo_AF_XTP   19
#define AF_COIP         20
#define AF_CNT          21
#define pseudo_AF_RTIP  22
#define AF_IPX          23
#define AF_SIP          24
#define AF_INET6        24
#define pseudo_AF_PIP   25
#define AF_ROUTE        39
#define AF_FWIP         40
#define AF_IPSEC        41
#define AF_DES          42
#define AF_MD5          43
#define AF_CDMF         44
#define AF_MAX          45

#define PF_UNSPEC       AF_UNSPEC
#define PF_LOCAL        AF_LOCAL
#define PF_UNIX         PF_LOCAL
#define PF_OS2          PF_UNIX
#define PF_INET         AF_INET
#define PF_IMPLINK      AF_IMPLINK
#define PF_PUP          AF_PUP
#define PF_CHAOS        AF_CHAOS
#define PF_NS           AF_NS
#define PF_ISO          AF_ISO
#define PF_OSI          AF_OSI
#define PF_ECMA         AF_ECMA
#define PF_DATAKIT      AF_DATAKIT
#define PF_CCITT        AF_CCITT
#define PF_SNA          AF_SNA
#define PF_DECnet       AF_DECnet
#define PF_DLI          AF_DLI
#define PF_LAT          AF_LAT
#define PF_HYLINK       AF_HYLINK
#define PF_APPLETALK    AF_APPLETALK
#define PF_NETBIOS      AF_NB
#define PF_NB           AF_NB
#define PF_ROUTE        AF_ROUTE
#define PF_LINK         AF_LINK
#define PF_XTP          pseudo_AF_XTP
#define PF_COIP         AF_COIP
#define PF_CNT          AF_CNT
#define PF_SIP          AF_SIP
#define PF_INET6        AF_INET6
#define PF_IPX          AF_IPX
#define PF_RTIP         pseudo_AF_FTIP
#define PF_PIP          pseudo_AF_PIP
#define PF_MAX          AF_MAX

#define NET_MAXID AF_MAX

#define CTL_NET_NAMES { \
    { 0, 0 }, \
    { "local", CTLTYPE_NODE }, \
    { "inet", CTLTYPE_NODE }, \
    { "implink", CTLTYPE_NODE }, \
    { "pup", CTLTYPE_NODE }, \
    { "chaos", CTLTYPE_NODE }, \
    { "xerox_ns", CTLTYPE_NODE }, \
    { "iso", CTLTYPE_NODE }, \
    { "emca", CTLTYPE_NODE }, \
    { "datakit", CTLTYPE_NODE }, \
    { "ccitt", CTLTYPE_NODE }, \
    { "ibm_sna", CTLTYPE_NODE }, \
    { "decnet", CTLTYPE_NODE }, \
    { "dec_dli", CTLTYPE_NODE }, \
    { "lat", CTLTYPE_NODE }, \
    { "hylink", CTLTYPE_NODE }, \
    { "appletalk", CTLTYPE_NODE }, \
    { "netbios", CTLTYPE_NODE }, \
    { "route", CTLTYPE_NODE }, \
    { "link_layer", CTLTYPE_NODE }, \
    { "xtp", CTLTYPE_NODE }, \
    { "coip", CTLTYPE_NODE }, \
    { "cnt", CTLTYPE_NODE }, \
    { "rtip", CTLTYPE_NODE }, \
    { "ipx", CTLTYPE_NODE }, \
    { "sip", CTLTYPE_NODE }, \
    { "pip", CTLTYPE_NODE }, \
}

#define NET_RT_DUMP   1
#define NET_RT_FLAGS  2
#define NET_RT_IFLIST 3
#define NET_RT_MAXID  4

#define CTL_NET_RT_NAMES { \
    { 0, 0 }, \
    { "dump", CTLTYPE_STRUCT }, \
    { "flags", CTLTYPE_STRUCT }, \
    { "iflist", CTLTYPE_STRUCT }, \
}

#define SOMAXCONN 1024

#define MSG_OOB       0x1
#define MSG_PEEK      0x2
#define MSG_DONTROUTE 0x4
#define MSG_FULLREAD  0x8
#define MSG_EOR       0x10
#define MSG_TRUNC     0x20
#define MSG_CTRUNC    0x40
#define MSG_WAITALL   0x80
#define MSG_DONTWAIT  0x100
#ifdef TTCP
#define MSG_EOF       0x200
#endif
#define MSG_MAPIO     0x400
#define MSG_CLOSE     0x800

#define CMSG_DATA(cmsg) ((u_char *)((cmsg) + 1))

#define CMSG_NXTHDR(mhdr, cmsg) \
    (((caddr_t)(cmsg) + (cmsg)->cmsg_len + sizeof(struct cmsghdr) > \
    (mhdr)->msg_control + (mhdr)->msg_controllen) ? \
    (struct cmsghdr *)NULL : \
    (struct cmsghdr *)((caddr_t)(cmsg) + ALIGN((cmsg)->cmsg_len)))

#define CMSG_FIRSTHDR(mhdr) ((struct cmsghdr *)(mhdr)->msg_control)

#define SCM_RIGHTS 1

#define MT_FREE   0
#define MT_DATA   1
#define MT_HEADER 2
#define MT_SOCKET 3
#define MT_PCB    4
#define MT_RTABLE 5
#define MT_HTABLE 6
#define MT_ATABLE 7
#define MT_SONAME 8
#define MT_ZOMBIE 9
#define MT_SOOPTS 10
#define MT_FTABLE 11
#define MT_RIGHTS 12
#define MT_IFADDR 13

struct sockaddr {
    u_char sa_len;
    u_char sa_family;
    char   sa_data[14];
};

struct sockproto {
    u_short sp_family;
    u_short sp_protocol;
};

struct msghdr {
    caddr_t  msg_name;
    u_int    msg_namelen;
    struct   iovec *msg_iov;
    u_int    msg_iovlen;
    caddr_t  msg_control;
    u_int    msg_controllen;
    long_int msg_flags;
};

struct cmsghdr {
    u_int cmsg_len;
    int   cmsg_level;
    int   cmsg_type;
};

struct osockaddr {
    u_short sa_family;
    char    sa_data[14];
};

struct omsghdr {
    caddr_t msg_name;
    int     msg_namelen;
    struct  iovec *msg_iov;
    int     msg_iovlen;
    caddr_t msg_accrights;
    int     msg_accrightslen;
};

struct sf_parms {
    void   *header_data;
    size_t header_length;
    int    file_handle;
    size_t file_size;
    int    file_offset;
    size_t file_bytes;
    void   *trailer_data;
    size_t trailer_length;
    size_t bytes_sent;
};

struct sostats {
    short count;
    short socketdata[13*MAXSOCKETS];
};

#include <sys/cdefs.h>

__BEGIN_DECLS
int _System accept __TCPPROTO((int, struct sockaddr *, int *));
int _System accept_and_recv __TCPPROTO((long, long*, struct sockaddr *, long*, struct sockaddr*, long*, caddr_t, size_t));
int _System bind __TCPPROTO((int, const struct sockaddr *, int));
int _System connect __TCPPROTO((int, const struct sockaddr *, int));
int _System getpeername __TCPPROTO((int, struct sockaddr *, int *));
int _System getsockname __TCPPROTO((int, struct sockaddr *, int *));
int _System getsockopt __TCPPROTO((int, int, int, void *, int *));
int _System listen __TCPPROTO((int, int));
ssize_t _System recv __TCPPROTO((int, void *, size_t, int));
ssize_t _System recvfrom __TCPPROTO((int, void *, size_t, int, struct sockaddr *, int *));
ssize_t _System recvmsg __TCPPROTO((int, struct msghdr *, int));
ssize_t _System send __TCPPROTO((int, const void *, size_t, int));
ssize_t _System sendto __TCPPROTO((int, const void *, size_t, int, const struct sockaddr *, int));
ssize_t _System sendmsg __TCPPROTO((int, const struct msghdr *, int));
ssize_t _System send_file __TCPPROTO((int *, struct sf_parms *, int ));
int _System setsockopt __TCPPROTO((int, int, int, const void *, int));
int _System shutdown __TCPPROTO((int, int));
int _System socket __TCPPROTO((int, int, int));
int _System socketpair __TCPPROTO((int, int, int, int *));

int _System sock_init __TCPPROTO((void));
int _System sock_errno __TCPPROTO((void));
void _System psock_errno __TCPPROTO((const char *));
char * _System sock_strerror __TCPPROTO((int));
int _System soabort __TCPPROTO((int));
int _System so_cancel __TCPPROTO((int));
int _System getinetversion __TCPPROTO((char *));
void _System addsockettolist __TCPPROTO((int));
int _System removesocketfromlist __TCPPROTO((int));

int _System Raccept __TCPPROTO((int, struct sockaddr *, int *));
int _System Rbind __TCPPROTO((int, struct sockaddr *, int, struct sockaddr *));
int _System Rconnect __TCPPROTO((int, const struct sockaddr *, int));
int _System Rgetsockname __TCPPROTO((int, struct sockaddr *, int *));
int _System Rlisten __TCPPROTO((int, int));
__END_DECLS

#endif
