/*
 * Copyright (c) 1980, 1983, 1988, 1993
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
 * -
 * Portions Copyright (c) 1993 by Digital Equipment Corporation.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies, and that
 * the name of Digital Equipment Corporation not be used in advertising or
 * publicity pertaining to distribution of the document or software without
 * specific, written prior permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
 * CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

#ifndef _NETDB_H_
#define _NETDB_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <sys/param.h>
#include <sys/cdefs.h>

#define _PATH_HEQUIV    "\\mptn\\etc\\hosts.equiv"
#define _PATH_HOSTS     "\\mptn\\etc\\hosts"
#define _PATH_NETWORKS  "\\mptn\\etc\\networks"
#define _PATH_PROTOCOLS "\\mptn\\etc\\protocols"
#define _PATH_SERVICES  "\\mptn\\etc\\services"

#define h_errno (*tcp_h_errno1())

#define NETDB_INTERNAL (-1)
#define NETDB_SUCCESS    0
#define HOST_NOT_FOUND   1
#define TRY_AGAIN        2
#define NO_RECOVERY      3
#define NO_DATA          4
#define NO_ADDRESS       NO_DATA

struct hostent {
    char *h_name;
    char **h_aliases;
    int  h_addrtype;
    int  h_length;
    char **h_addr_list;
#define h_addr  h_addr_list[0]
};

struct netent {
    char          *n_name;
    char          **n_aliases;
    int           n_addrtype;
    unsigned long n_net;
};

struct servent {
    char *s_name;
    char **s_aliases;
    int  s_port;
    char *s_proto;
};

struct protoent {
    char *p_name;
    char **p_aliases;
    int  p_proto;
};

__BEGIN_DECLS
void _System endhostent __TCPPROTO((void));
void _System endnetent __TCPPROTO((void));
void _System endprotoent __TCPPROTO((void));
void _System endservent __TCPPROTO((void));
struct hostent * _System gethostbyaddr __TCPPROTO((const char *, int, int));
struct hostent * _System gethostbyname __TCPPROTO((const char *));
struct hostent * _System gethostbyname2 __TCPPROTO((const char *, int));
struct hostent * _System gethostent __TCPPROTO((void));
struct netent * _System getnetbyaddr __TCPPROTO((unsigned long, int));
struct netent * _System getnetbyname __TCPPROTO((const char *));
struct netent * _System getnetent __TCPPROTO((void));
struct protoent * _System getprotobyname __TCPPROTO((const char *));
struct protoent * _System getprotobynumber __TCPPROTO((int));
struct protoent * _System getprotoent __TCPPROTO((void));
struct servent * _System getservbyname __TCPPROTO((const char *, const char *));
struct servent * _System getservbyport __TCPPROTO((int, const char *));
struct servent * _System getservent __TCPPROTO((void));
void _System herror __TCPPROTO((const char *));
const char * _System hstrerror __TCPPROTO((int));
void _System sethostent __TCPPROTO((int));
/* void _System sethostfile __TCPPROTO((const char *)); */
void _System setnetent __TCPPROTO((int));
void _System setprotoent __TCPPROTO((int));
void _System setservent __TCPPROTO((int));
int * _System tcp_h_errno1 __TCPPROTO((void));
struct hostent * _System Rgethostbyname __TCPPROTO((const char *));
__END_DECLS

#endif
