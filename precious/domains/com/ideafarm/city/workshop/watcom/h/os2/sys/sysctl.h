/*
 * Copyright (c) 1989, 1993
 *      The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Mike Karels at Berkeley Software Design, Inc.
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

#ifndef _SYS_SYSCTL_H_
#define _SYS_SYSCTL_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#define CTL_MAXNAME 12

#define CTLTYPE_NODE    1
#define CTLTYPE_INT     2
#define CTLTYPE_STRING  3
#define CTLTYPE_QUAD    4
#define CTLTYPE_STRUCT  5
#define CTLTYPE_INETCFG 6
#define CTLTYPE_INEVER  7

#define CTL_KERN 1
#define CTL_NET  4
#define CTL_OS2  9

#define CTL_NAMES { \
    { 0, 0 }, \
    { "kern", CTLTYPE_NODE }, \
    { "net", CTLTYPE_NODE }, \
    { "os2", CTLTYPE_NODE }, \
}

#define KERN_MAXFILES  7
#define KERN_HOSTNAME 10
#define KERN_HOSTID   11

#define KERNCTL_INETVER      70
#define OS2_MEMMAPIO         1
#define OS2_QUERY_MEMMAPIO   2

#define CTL_KERN_NAMES { \
    { 0, 0 }, \
    { "ostype", CTLTYPE_STRING }, \
    { "osrelease", CTLTYPE_STRING }, \
    { "osrevision", CTLTYPE_INT }, \
    { "version", CTLTYPE_STRING }, \
    { "maxvnodes", CTLTYPE_INT }, \
    { "maxproc", CTLTYPE_INT }, \
    { "maxfiles", CTLTYPE_INT }, \
    { "argmax", CTLTYPE_INT }, \
    { "securelevel", CTLTYPE_INT }, \
    { "hostname", CTLTYPE_STRING }, \
    { "hostid", CTLTYPE_INT }, \
    { "clockrate", CTLTYPE_STRUCT }, \
    { "vnode", CTLTYPE_STRUCT }, \
    { "proc", CTLTYPE_STRUCT }, \
    { "file", CTLTYPE_STRUCT }, \
    { "profiling", CTLTYPE_NODE }, \
    { "posix1version", CTLTYPE_INT }, \
    { "ngroups", CTLTYPE_INT }, \
    { "job_control", CTLTYPE_INT }, \
    { "saved_ids", CTLTYPE_INT }, \
    { "boottime", CTLTYPE_STRUCT }, \
}

struct ctlname {
    char *ctl_name;
    int  ctl_type;
};

struct inetcfg_ctl{
    unsigned long var_name;
    unsigned long var_cur_val;
    unsigned long var_max_val;
    unsigned long var_def_val;
    unsigned long var_min_val;
};

struct inetvers_ctl {
    float version;
    char  versionstr[10];
};

#include <sys/cdefs.h>
__BEGIN_DECLS
int _System sysctl __TCPPROTO((int *, u_int, void *, size_t *, void *, size_t));
__END_DECLS

#endif
