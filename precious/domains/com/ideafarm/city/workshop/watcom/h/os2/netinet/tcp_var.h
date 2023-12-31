/*
 * Copyright (c) 1982, 1986, 1993, 1994, 1995
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

#ifndef _NETINET_TCP_VAR_H_
#define _NETINET_TCP_VAR_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#define TCPCTL_MSSDFLT    1
#define TCPCTL_STATS      2
#define TCPCTL_RTTDFLT    3
#define TCPCTL_MSL        4
#define TCPCTL_INETCFG    6
#define TCPCTL_LINGERTIME 7
#define TCPCTL_KEEPCNT    8
#define TCPCTL_TCPSWIN    9
#define TCPCTL_TCPRWIN    10
#define TCPCTL_TTL        11
#define TCPCTL_MTU        12
#define TCPCTL_WINSCALE   13
#define TCPCTL_TIMESTMP   14
#define TCPCTL_CC         15
#define TCPCTL_REALSLOW   16
#define TCPCTL_REUSETW    17
#define TCPCTL_SYNCOOKIE  18
#define TCPCTL_PERFHTTP   19

#define ICFG_SETKEEPALIVE 20
#define ICFG_GETKEEPALIVE 21

#define TCPCTL_NAMES { \
    { 0, 0 }, \
    { "mssdflt", CTLTYPE_INT },    \
    { "stats",   CTLTYPE_STRUCT }, \
    { "rttdflt", CTLTYPE_INT },    \
    { "inetcfg", CTLTYPE_INETCFG },\
}

struct  tcpstat {
    u_long tcps_connattempt;
    u_long tcps_accepts;
    u_long tcps_connects;
    u_long tcps_drops;
    u_long tcps_conndrops;
    u_long tcps_closed;
    u_long tcps_segstimed;
    u_long tcps_rttupdated;
    u_long tcps_delack;
    u_long tcps_timeoutdrop;
    u_long tcps_rexmttimeo;
    u_long tcps_persisttimeo;
    u_long tcps_keeptimeo;
    u_long tcps_keepprobe;
    u_long tcps_keepdrops;
    u_long tcps_sndtotal;
    u_long tcps_sndpack;
    u_long tcps_sndbyte;
    u_long tcps_sndrexmitpack;
    u_long tcps_sndrexmitbyte;
    u_long tcps_sndacks;
    u_long tcps_sndprobe;
    u_long tcps_sndurg;
    u_long tcps_sndwinup;
    u_long tcps_sndctrl;
    u_long tcps_sndrst;
    u_long tcps_rcvtotal;
    u_long tcps_rcvpack;
    u_long tcps_rcvbyte;
    u_long tcps_rcvbadsum;
    u_long tcps_rcvbadoff;
    u_long tcps_rcvshort;
    u_long tcps_rcvduppack;
    u_long tcps_rcvdupbyte;
    u_long tcps_rcvpartduppack;
    u_long tcps_rcvpartdupbyte;
    u_long tcps_rcvoopack;
    u_long tcps_rcvoobyte;
    u_long tcps_rcvpackafterwin;
    u_long tcps_rcvbyteafterwin;
    u_long tcps_rcvafterclose;
    u_long tcps_rcvwinprobe;
    u_long tcps_rcvdupack;
    u_long tcps_rcvacktoomuch;
    u_long tcps_rcvackpack;
    u_long tcps_rcvackbyte;
    u_long tcps_rcvwinupd;
    u_long tcps_pawsdrop;
    u_long tcps_predack;
    u_long tcps_preddat;
    u_long tcps_pcbcachemiss;
    u_long tcps_persistdrop;
    u_long tcps_badsyn;
    u_long tcps_mturesent;
    u_long tcps_cachedrtt;
    u_long tcps_cachedrttvar;
    u_long tcps_cachedssthresh;
    u_long tcps_usedrtt;
    u_long tcps_usedrttvar;
    u_long tcps_usedssthresh;
};

#endif
