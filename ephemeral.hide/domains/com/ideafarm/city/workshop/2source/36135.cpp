//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000006.ifcENABLEtHIRDpARTIES : 1snip.1a000006.ifcenablethirdparties BEGIN
#define DDNAME       "1snip.1a000006.ifcenablethirdparties"
#define DDNUMB      (countT)0x1a000006
#define IDFILE      (countT)0x871


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005f003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*ifcENABLEtHIRDpARTIES*//*1*/
#define ifcENABLEtHIRDpARTIES


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000006.ifcENABLEtHIRDpARTIES : 1snip.1a000006.ifcenablethirdparties END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000003.includeGenMake.base.show.third : 1snip.1a000003.includegenmake.base.show.third BEGIN
#define DDNAME       "1snip.1a000003.includegenmake.base.show.third"
#define DDNUMB      (countT)0x1a000003
#define IDFILE      (countT)0x86c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005f002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*this includes the base show flavor of ipdos.h*//*1*/
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.show.third.2.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000003.includeGenMake.base.show.third : 1snip.1a000003.includegenmake.base.show.third END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.01000002.cnotcppheader : 1snip.01000002.cnotcppheader BEGIN
#define DDNAME       "1snip.01000002.cnotcppheader"
#define DDNUMB      (countT)0x01000002
#define IDFILE      (countT)0x1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*//*CnOTcPPhEADER*//*1*/

#if defined( __cplusplus )

    #define MYpREFIX extern "C"

#else

    #include "d:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\include\openssl\ssl.h"

    //----------------------------------------------------- BEGIN

    //CS:CODEsYNC:DUPLICATED: 15000014 01000002

    typedef const SSL_METHOD* (__syscall *openSsl_pMethodFT        )( void )                                                    ; //const SSL_METHOD *TLS_method(void);  /* SSLv3 but can rollback to v2 */

    typedef int               (__syscall *openSsl_pInitFT          )( void )                                                    ; //int __syscall SSL_library_init( void ) ;

    typedef SSL_CTX*          (__syscall *openSsl_pContextFT       )( const SSL_METHOD* pMethodP )                              ; //SSL_CTX* __syscall SSL_CTX_new( const SSL_METHOD* method ) ;

    typedef void              (__syscall *openSsl_pContextFreeFT   )( SSL_CTX* pContextP )                                      ; // void SSL_CTX_free(SSL_CTX *ctx) ;

    typedef SSL*              (__syscall *openSsl_pWrapperFT       )( SSL_CTX* pContextP )                                      ; // SSL *SSL_new(SSL_CTX *ctx) ;

    typedef void              (__syscall *openSsl_pWrapperFreeFT   )( SSL* pWrapP )                                             ; // void SSL_free(SSL *ssl);

    typedef int               (__syscall *openSsl_pWrapFT          )( SSL* pWrapP , int hSockP )                                ; // int SSL_set_fd(SSL *ssl, int fd);

    typedef int               (__syscall *openSsl_pShakeAsClientFT )( SSL* pWrapP )                                             ; //  int SSL_connect(SSL *ssl);

    typedef int               (__syscall *openSsl_pShakeAsServerFT )( SSL* pWrapP )                                             ; //  int SSL_accept(SSL *ssl);

    typedef int               (__syscall *openSsl_pWriteFT         )( SSL* pWrapP , const void* pbP , int cbP )                 ; // int SSL_write(SSL *ssl, const void *buf, int num);

    typedef int               (__syscall *openSsl_pReadFT          )( SSL* pWrapP , void* pbP , int cbP )                       ; // int SSL_read(SSL *ssl, void *buf, int num);

    typedef int               (__syscall *openSsl_pPeekFT          )( SSL* pWrapP , void* pbP , int cbP )                       ; // int SSL_peek(SSL *ssl, void *buf, int num);

    typedef int               (__syscall *openSsl_pWaveByeFT       )( SSL* pWrapP )                                             ; // int SSL_shutdown(SSL *ssl);

    typedef int               (__syscall *openSsl_pPemFileCertFT   )( SSL_CTX* pContextP , const char* postPemP )               ; // int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx, const char *file);

    typedef int               (__syscall *openSsl_pPemFileKeyFT    )( SSL_CTX* pContextP , const char* postPemP , int idTypeP ) ; // int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx, const char *file, int type);

    typedef int               (__syscall *openSsl_pCurvesFT        )( SSL_CTX* pContextP , int onOffP )                         ; // int SSL_CTX_set_ecdh_auto(SSL_CTX *ctx, int onoff);

    //----------------------------------------------------- END

    #define MYpREFIX

#endif

#undef UNICODE
#include <excpt.h>
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

MYpREFIX void _export           c_debugF( void ) ;
MYpREFIX void _export __watcall c_getaddrinfoF( char* pbListP , unsigned cbListP , const char* const postNameP ) ;
MYpREFIX void _export           c_traceHelperIF( unsigned pP ) ;

MYpREFIX void     __watcall c_openSsl_setupIF(              unsigned* pEcP , openSsl_pInitFT            pInitFP                                                                                                                                                                                                      ) ;
MYpREFIX void     __watcall c_openSsl_waveByeIF(            unsigned* pEcP , openSsl_pWaveByeFT         pWaveByeFP       , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX SSL_CTX* __watcall c_openSsl_getContextIF(         unsigned* pEcP , openSsl_pContextFT         pContextFP       , openSsl_pMethodFT pMethodFP , openSsl_pPemFileCertFT pPemFileCertFP , openSsl_pPemFileKeyFT pPemFileKeyFP , openSsl_pCurvesFT pCurvesFP , const char* const postPemCertificatesP , const char* const postPemPrivateKeyP ) ;
MYpREFIX SSL*     __watcall c_openSsl_getWrapperIF(         unsigned* pEcP , openSsl_pWrapperFT         pWrapperFP       , SSL_CTX* pContextP                                                                                                                                                                        ) ;
MYpREFIX void     __watcall c_openSsl_wrapperFreeIF(        unsigned* pEcP , openSsl_pWrapperFreeFT     pWrapperFreeFP   , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX void     __watcall c_openSsl_wrapSocketIF(         unsigned* pEcP , openSsl_pWrapFT            pWrapFP          , unsigned oshSocketP , SSL* pSslP                                                                                                                                                          ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsClientIF( unsigned* pEcP , openSsl_pShakeAsClientFT   pShakeAsClientFP , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsServerIF( unsigned* pEcP , openSsl_pShakeAsServerFT   pShakeAsServerFP , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX unsigned __watcall c_openSsl_writeIF(              unsigned* pEcP , openSsl_pWriteFT           pWriteFP         , SSL* pSslP , const char* const pbP , const unsigned cbP                                                                                                                                   ) ;
MYpREFIX unsigned __watcall c_openSsl_readIF(               unsigned* pEcP , openSsl_pReadFT            pReadFP          , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                     ) ;
MYpREFIX unsigned __watcall c_openSsl_peekIF(               unsigned* pEcP , openSsl_pPeekFT            pPeekFP          , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                     ) ;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
 
#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.01000002.cnotcppheader : 1snip.01000002.cnotcppheader END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36135* : 3func.36135003.hasherc.hasherc BEGIN
#define DDNAME       "3func.36135003.hasherc.hasherc"
#define DDNUMB      (countT)0x36135003
#define IDFILE      (countT)0x153f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
this file defines a class that wraps md5 hash calculation code
 the file is self contained
 the file is nonconformant in that all code for the entire class (all member functions) is here, in a single file
  this is to avoid having the symbolic constants that are defined here visible to other code
 the public domain code used here suffered only minimal modifications
  it was not edited to make it conform to ifc variable naming conventions, formatting, etc.
  the only modification was to rename some symbolic constants to avoid collision
*/
/**/

/*
 * This is an OpenSSL-compatible implementation of the RSA Data Security, Inc.
 * MD5 Message-Digest Algorithm (RFC 1321).
 *
 * Homepage:
 * http://openwall.info/wiki/people/solar/software/public-domain-source-code/md5
 *
 * Author:
 * Alexander Peslyak, better known as Solar Designer <solar at openwall.com>
 *
 * This software was written by Alexander Peslyak in 2001.  No copyright is
 * claimed, and the software is hereby placed in the public domain.
 * In case this attempt to disclaim copyright and place the software in the
 * public domain is deemed null and void, then the software is
 * Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
 * general public under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 *
 * See md5.c for more information.
 */

#ifdef HAVE_OPENSSL
#include <openssl/md5.h>
#elif !defined(_MD5_H)
#define _MD5_H

/* Any 32-bit or wider unsigned integer data type will do */
typedef unsigned int MD5_u32plus;

typedef struct {
	MD5_u32plus lo, hi;
	MD5_u32plus a, b, c, d;
	unsigned char buffer[64];
	MD5_u32plus block[16];
} MD5_CTX;

extern void MD5_Init(MD5_CTX *ctx);
extern void MD5_Update(MD5_CTX *ctx, const void *data, unsigned long size);
extern void MD5_Final(unsigned char *result, MD5_CTX *ctx);

#endif


/*
 * This is an OpenSSL-compatible implementation of the RSA Data Security, Inc.
 * MD5 Message-Digest Algorithm (RFC 1321).
 *
 * Homepage:
 * http://openwall.info/wiki/people/solar/software/public-domain-source-code/md5
 *
 * Author:
 * Alexander Peslyak, better known as Solar Designer <solar at openwall.com>
 *
 * This software was written by Alexander Peslyak in 2001.  No copyright is
 * claimed, and the software is hereby placed in the public domain.
 * In case this attempt to disclaim copyright and place the software in the
 * public domain is deemed null and void, then the software is
 * Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
 * general public under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 *
 * (This is a heavily cut-down "BSD license".)
 *
 * This differs from Colin Plumb's older public domain implementation in that
 * no exactly 32-bit integer data type is required (any 32-bit or wider
 * unsigned integer data type will do), there's no compile-time endianness
 * configuration, and the function prototypes match OpenSSL's.  No code from
 * Colin Plumb's implementation has been reused; this comment merely compares
 * the properties of the two independent implementations.
 *
 * The primary goals of this implementation are portability and ease of use.
 * It is meant to be fast, but not as fast as possible.  Some known
 * optimizations are not included to reduce source code size and avoid
 * compile-time configuration.
 */

#ifndef HAVE_OPENSSL

/*
 * The basic MD5 functions.
 *
 * F and G are optimized compared to their RFC 1321 definitions for
 * architectures that lack an AND-NOT instruction, just like in Colin Plumb's
 * implementation.
 */

#define MD5_F(x,y,z)			((z) ^ ((x) & ((y) ^ (z))))
#define MD5_G(x,y,z)			((y) ^ ((z) & ((x) ^ (y))))
#define MD5_H(x,y,z)			(((x) ^ (y)) ^ (z))
#define MD5_H2(x,y,z)			((x) ^ ((y) ^ (z)))
#define MD5_I(x,y,z)			((y) ^ ((x) | ~(z)))

/*
 * The MD5 transformation for all four rounds.
 */

#define STEP(f,a,b,c,d,x,t,s) \
	(a) += f((b), (c), (d)) + (x) + (t); \
	(a) = (((a) << (s)) | (((a) & 0xffffffff) >> (32 - (s)))); \
	(a) += (b);

/*
 * SET reads 4 input bytes in little-endian byte order and stores them
 * in a properly aligned word in host byte order.
 *
 * The check for little-endian architectures that tolerate unaligned
 * memory accesses is just an optimization.  Nothing will break if it
 * doesn't work.
 */

#if defined(__i386__) || defined(__x86_64__) || defined(__vax__)
#define SET(n) \
	(*(MD5_u32plus *)&ptr[(n) * 4])
#define GET(n) \
	SET(n)
#else
#define SET(n) \
	(ctx->block[(n)] = \
	(MD5_u32plus)ptr[(n) * 4] | \
	((MD5_u32plus)ptr[(n) * 4 + 1] << 8) | \
	((MD5_u32plus)ptr[(n) * 4 + 2] << 16) | \
	((MD5_u32plus)ptr[(n) * 4 + 3] << 24))
#define GET(n) \
	(ctx->block[(n)])
#endif

/*
 * This processes one or more 64-byte data blocks, but does NOT update
 * the bit counters.  There are no alignment requirements.
 */

static const void* body( MD5_CTX* ctx , const void* data , unsigned long size )
{
	const unsigned char *ptr;
	MD5_u32plus a, b, c, d;
	MD5_u32plus saved_a, saved_b, saved_c, saved_d;

	ptr = (const unsigned char *)data;

	a = ctx->a;
	b = ctx->b;
	c = ctx->c;
	d = ctx->d;

	do {
		saved_a = a;
		saved_b = b;
		saved_c = c;
		saved_d = d;

/* Round 1 */
		STEP(MD5_F, a, b, c, d, SET(0), 0xd76aa478, 7)
		STEP(MD5_F, d, a, b, c, SET(1), 0xe8c7b756, 12)
		STEP(MD5_F, c, d, a, b, SET(2), 0x242070db, 17)
		STEP(MD5_F, b, c, d, a, SET(3), 0xc1bdceee, 22)
		STEP(MD5_F, a, b, c, d, SET(4), 0xf57c0faf, 7)
		STEP(MD5_F, d, a, b, c, SET(5), 0x4787c62a, 12)
		STEP(MD5_F, c, d, a, b, SET(6), 0xa8304613, 17)
		STEP(MD5_F, b, c, d, a, SET(7), 0xfd469501, 22)
		STEP(MD5_F, a, b, c, d, SET(8), 0x698098d8, 7)
		STEP(MD5_F, d, a, b, c, SET(9), 0x8b44f7af, 12)
		STEP(MD5_F, c, d, a, b, SET(10), 0xffff5bb1, 17)
		STEP(MD5_F, b, c, d, a, SET(11), 0x895cd7be, 22)
		STEP(MD5_F, a, b, c, d, SET(12), 0x6b901122, 7)
		STEP(MD5_F, d, a, b, c, SET(13), 0xfd987193, 12)
		STEP(MD5_F, c, d, a, b, SET(14), 0xa679438e, 17)
		STEP(MD5_F, b, c, d, a, SET(15), 0x49b40821, 22)

/* Round 2 */
		STEP(MD5_G, a, b, c, d, GET(1), 0xf61e2562, 5)
		STEP(MD5_G, d, a, b, c, GET(6), 0xc040b340, 9)
		STEP(MD5_G, c, d, a, b, GET(11), 0x265e5a51, 14)
		STEP(MD5_G, b, c, d, a, GET(0), 0xe9b6c7aa, 20)
		STEP(MD5_G, a, b, c, d, GET(5), 0xd62f105d, 5)
		STEP(MD5_G, d, a, b, c, GET(10), 0x02441453, 9)
		STEP(MD5_G, c, d, a, b, GET(15), 0xd8a1e681, 14)
		STEP(MD5_G, b, c, d, a, GET(4), 0xe7d3fbc8, 20)
		STEP(MD5_G, a, b, c, d, GET(9), 0x21e1cde6, 5)
		STEP(MD5_G, d, a, b, c, GET(14), 0xc33707d6, 9)
		STEP(MD5_G, c, d, a, b, GET(3), 0xf4d50d87, 14)
		STEP(MD5_G, b, c, d, a, GET(8), 0x455a14ed, 20)
		STEP(MD5_G, a, b, c, d, GET(13), 0xa9e3e905, 5)
		STEP(MD5_G, d, a, b, c, GET(2), 0xfcefa3f8, 9)
		STEP(MD5_G, c, d, a, b, GET(7), 0x676f02d9, 14)
		STEP(MD5_G, b, c, d, a, GET(12), 0x8d2a4c8a, 20)

/* Round 3 */
		STEP(MD5_H, a, b, c, d, GET(5), 0xfffa3942, 4)
		STEP(MD5_H2, d, a, b, c, GET(8), 0x8771f681, 11)
		STEP(MD5_H, c, d, a, b, GET(11), 0x6d9d6122, 16)
		STEP(MD5_H2, b, c, d, a, GET(14), 0xfde5380c, 23)
		STEP(MD5_H, a, b, c, d, GET(1), 0xa4beea44, 4)
		STEP(MD5_H2, d, a, b, c, GET(4), 0x4bdecfa9, 11)
		STEP(MD5_H, c, d, a, b, GET(7), 0xf6bb4b60, 16)
		STEP(MD5_H2, b, c, d, a, GET(10), 0xbebfbc70, 23)
		STEP(MD5_H, a, b, c, d, GET(13), 0x289b7ec6, 4)
		STEP(MD5_H2, d, a, b, c, GET(0), 0xeaa127fa, 11)
		STEP(MD5_H, c, d, a, b, GET(3), 0xd4ef3085, 16)
		STEP(MD5_H2, b, c, d, a, GET(6), 0x04881d05, 23)
		STEP(MD5_H, a, b, c, d, GET(9), 0xd9d4d039, 4)
		STEP(MD5_H2, d, a, b, c, GET(12), 0xe6db99e5, 11)
		STEP(MD5_H, c, d, a, b, GET(15), 0x1fa27cf8, 16)
		STEP(MD5_H2, b, c, d, a, GET(2), 0xc4ac5665, 23)

/* Round 4 */
		STEP(MD5_I, a, b, c, d, GET(0), 0xf4292244, 6)
		STEP(MD5_I, d, a, b, c, GET(7), 0x432aff97, 10)
		STEP(MD5_I, c, d, a, b, GET(14), 0xab9423a7, 15)
		STEP(MD5_I, b, c, d, a, GET(5), 0xfc93a039, 21)
		STEP(MD5_I, a, b, c, d, GET(12), 0x655b59c3, 6)
		STEP(MD5_I, d, a, b, c, GET(3), 0x8f0ccc92, 10)
		STEP(MD5_I, c, d, a, b, GET(10), 0xffeff47d, 15)
		STEP(MD5_I, b, c, d, a, GET(1), 0x85845dd1, 21)
		STEP(MD5_I, a, b, c, d, GET(8), 0x6fa87e4f, 6)
		STEP(MD5_I, d, a, b, c, GET(15), 0xfe2ce6e0, 10)
		STEP(MD5_I, c, d, a, b, GET(6), 0xa3014314, 15)
		STEP(MD5_I, b, c, d, a, GET(13), 0x4e0811a1, 21)
		STEP(MD5_I, a, b, c, d, GET(4), 0xf7537e82, 6)
		STEP(MD5_I, d, a, b, c, GET(11), 0xbd3af235, 10)
		STEP(MD5_I, c, d, a, b, GET(2), 0x2ad7d2bb, 15)
		STEP(MD5_I, b, c, d, a, GET(9), 0xeb86d391, 21)

		a += saved_a;
		b += saved_b;
		c += saved_c;
		d += saved_d;

		ptr += 64;
	} while (size -= 64);

	ctx->a = a;
	ctx->b = b;
	ctx->c = c;
	ctx->d = d;

	return ptr;
}

void MD5_Init(MD5_CTX *ctx)
{
	ctx->a = 0x67452301;
	ctx->b = 0xefcdab89;
	ctx->c = 0x98badcfe;
	ctx->d = 0x10325476;

	ctx->lo = 0;
	ctx->hi = 0;
}

void MD5_Update(MD5_CTX *ctx, const void *data, unsigned long size)
{
	MD5_u32plus saved_lo;
	unsigned long used, available;

	saved_lo = ctx->lo;
	if ((ctx->lo = (saved_lo + size) & 0x1fffffff) < saved_lo)
		ctx->hi++;
	ctx->hi += size >> 29;

	used = saved_lo & 0x3f;

	if (used) {
		available = 64 - used;

		if (size < available) {
			memcpy(&ctx->buffer[used], data, size);
			return;
		}

		memcpy(&ctx->buffer[used], data, available);
		data = (const unsigned char *)data + available;
		size -= available;
		body(ctx, ctx->buffer, 64);
	}

	if (size >= 64) {
		data = body(ctx, data, size & ~(unsigned long)0x3f);
		size &= 0x3f;
	}

	memcpy(ctx->buffer, data, size);
}

void MD5_Final(unsigned char *result, MD5_CTX *ctx)
{
	unsigned long used, available;

	used = ctx->lo & 0x3f;

	ctx->buffer[used++] = 0x80;

	available = 64 - used;

	if (available < 8) {
		memset(&ctx->buffer[used], 0, available);
		body(ctx, ctx->buffer, 64);
		used = 0;
		available = 64;
	}

	memset(&ctx->buffer[used], 0, available - 8);

	ctx->lo <<= 3;
	ctx->buffer[56] = (char)( ctx->lo ) ;
	ctx->buffer[57] = (char)( ctx->lo >> 8 ) ;
	ctx->buffer[58] = (char)( ctx->lo >> 16 ) ;
	ctx->buffer[59] = (char)( ctx->lo >> 24 ) ;
	ctx->buffer[60] = (char)( ctx->hi ) ;
	ctx->buffer[61] = (char)( ctx->hi >> 8 ) ;
	ctx->buffer[62] = (char)( ctx->hi >> 16 ) ;
	ctx->buffer[63] = (char)( ctx->hi >> 24 ) ;

	body(ctx, ctx->buffer, 64);

	result[0] = (char)( ctx->a ) ;
	result[1] = (char)( ctx->a >> 8 ) ;
	result[2] = (char)( ctx->a >> 16 ) ;
	result[3] = (char)( ctx->a >> 24 ) ;
	result[4] = (char)( ctx->b ) ;
	result[5] = (char)( ctx->b >> 8 ) ;
	result[6] = (char)( ctx->b >> 16 ) ;
	result[7] = (char)( ctx->b >> 24 ) ;
	result[8] = (char)( ctx->c ) ;
	result[9] = (char)( ctx->c >> 8 ) ;
	result[10] = (char)( ctx->c >> 16 ) ;
	result[11] = (char)( ctx->c >> 24 ) ;
	result[12] = (char)( ctx->d ) ;
	result[13] = (char)( ctx->d >> 8 ) ;
	result[14] = (char)( ctx->d >> 16 ) ;
	result[15] = (char)( ctx->d >> 24 ) ;

	memset(ctx, 0, sizeof(*ctx));
}

#endif

/*1*/hasherC::hasherC( tinS& tinP , etherC& etherP ) :/*1*/
ether( etherP )
{
    countT aa = sizeof pbState ;
    countT bb = sizeof( MD5_CTX ) ;
    if( aa != bb ) { BLAMMO ; }

    MD5_Init( (MD5_CTX*)pbState ) ;
}


/*
*/
/**/

/*wo*/voidT hasherC::eatF( tinS& tinP , const byteT* const pbP , const countT cbP )/*wo*/
{
    MD5_Update( (MD5_CTX*)pbState , pbP , cbP ) ;
}


/*
*/
/**/

/*wo*/voidT hasherC::queryF( tinS& tinP , byteT* const pbP , const countT cbP )/*wo*/
{
    if( cbP != 4 * sizeof( count02T ) ) { BLAMMO ; }

    MD5_Final( (unsigned char*)pbP , (MD5_CTX*)pbState ) ;
}


/*
*/
/**/

/*wo*/voidT hasherC::queryStringF( tinS& tinP , strokeS*& psttP )/*wo*/
{
    byteT pbOut[ 4 * sizeof( int ) ] ;
    queryF( tinP , pbOut , sizeof pbOut ) ;

    ether.strDumpIF( tinP , psttP , (char*)pbOut , sizeof pbOut , flSTRdUMP_FOREIGN ) ; ___( psttP ) ;
}


/*
*/
/**/

/*wo*/voidT hasherC::eatF( tinS& tinP , const strokeS* const psttP )/*wo*/
{
    fileC fi( tinP , psttP , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO ) ;

    ZE( infoFileS* , pInfo ) ;
    ether.diskFileQueryF( tinP , pInfo , fi ) ; ___( pInfo ) ;
    __Z( pInfo ) ;

    if( !POOP )
    {
        countT cbChunk = pInfo->cbUsed < TOCK
            ? pInfo->cbUsed
            : TOCK
        ;

        ZE( byteT* , pbBuffer ) ;
        ether.newF( tinP , LF , pbBuffer , cbChunk ) ; ___( pbBuffer ) ;

        if( pbBuffer )
        {
            countT cDoLo = pInfo->cbUsed ;
            countT cDoHi = 0   ;

            while( cDoHi || cDoLo )
            {
                countT cbNow = cbChunk ;
                if( !cDoHi && cbNow > cDoLo ) cbNow = cDoLo ;

                if( cDoLo < cbNow ) cDoHi -- ;
                cDoLo -= cbNow ;

                ether.fileReadF( tinP , pbBuffer , cbNow , fi ) ;
                eatF( tinP , pbBuffer , cbNow ) ;
            }
        }
        ether.delF( tinP , pbBuffer ) ;
    }
    DEL( pInfo ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36135* : 3func.36135003.hasherc.hasherc END
