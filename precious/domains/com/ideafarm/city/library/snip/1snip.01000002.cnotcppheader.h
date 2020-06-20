
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

    typedef const SSL_METHOD* (__syscall *openSsl_pMethodFT      )( void )                                      ; //const SSL_METHOD *TLS_method(void);  /* SSLv3 but can rollback to v2 */

    typedef int               (__syscall *openSsl_pInitFT        )( void )                                      ; //int __syscall SSL_library_init( void ) ;

    typedef SSL_CTX*          (__syscall *openSsl_pContextFT     )( const SSL_METHOD* pMethodP )                ; //SSL_CTX* __syscall SSL_CTX_new( const SSL_METHOD* method ) ;

    typedef void              (__syscall *openSsl_pContextFreeFT )( SSL_CTX* pContextP )                        ; // void SSL_CTX_free(SSL_CTX *ctx) ;

    typedef SSL*              (__syscall *openSsl_pWrapperFT     )( SSL_CTX* pContextP )                        ; // SSL *SSL_new(SSL_CTX *ctx) ;

    typedef void              (__syscall *openSsl_pWrapperFreeFT )( SSL* pWrapP )                               ; // void SSL_free(SSL *ssl);

    typedef int               (__syscall *openSsl_pWrapFT        )( SSL* pWrapP , int hSockP )                  ; // int SSL_set_fd(SSL *ssl, int fd);

    typedef int               (__syscall *openSsl_pShakeFT       )( SSL* pWrapP )                               ; //  int SSL_connect(SSL *ssl);

    typedef int               (__syscall *openSsl_pWriteFT       )( SSL* pWrapP , const void* pbP , int cbP )   ; // int SSL_write(SSL *ssl, const void *buf, int num);

    typedef int               (__syscall *openSsl_pReadFT        )( SSL* pWrapP , void* pbP , int cbP )         ; // int SSL_read(SSL *ssl, void *buf, int num);

    typedef int               (__syscall *openSsl_pWaveByeFT     )( SSL* pWrapP )                               ; // int SSL_shutdown(SSL *ssl);

    //----------------------------------------------------- END

    #define MYpREFIX

#endif

#include <excpt.h>
#include <stdio.h>

MYpREFIX void _export c_debugF( void ) ;

MYpREFIX void _export c_traceHelperIF( unsigned pP ) ;

MYpREFIX void     __watcall c_openSsl_setupIF(              unsigned* pEcP , openSsl_pInitFT       pInitFP                                                                 ) ;
MYpREFIX void     __watcall c_openSsl_waveByeIF(            unsigned* pEcP , openSsl_pWaveByeFT    pWaveByeFP    , SSL* pSslP                                              ) ;
MYpREFIX SSL_CTX* __watcall c_openSsl_getContextIF(         unsigned* pEcP , const char* const postPemCertificatesP , const char* const postPemPrivateKeyP                 ) ;
MYpREFIX SSL*     __watcall c_openSsl_getWrapperIF(         unsigned* pEcP , openSsl_pWrapperFT    pWrapperFP    , SSL_CTX* pContextP                                      ) ;
MYpREFIX void     __watcall c_openSsl_wrapSocketIF(         unsigned* pEcP , openSsl_pWrapFT       pWrapFP       , unsigned oshSocketP , SSL* pSslP                        ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsClientIF( unsigned* pEcP , openSsl_pShakeFT      pShakeFP      , SSL* pSslP                                              ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsServerIF( unsigned* pEcP , openSsl_pShakeFT      pShakeFP      , SSL* pSslP                                              ) ;
MYpREFIX unsigned __watcall c_openSsl_writeIF(              unsigned* pEcP , openSsl_pWriteFT      pWriteFP      , SSL* pSslP , const char* const pbP , const unsigned cbP ) ;
MYpREFIX unsigned __watcall c_openSsl_readIF(               unsigned* pEcP , openSsl_pReadFT       pReadFP       , char* pbP , unsigned cbP , SSL* pSslP                   ) ;
MYpREFIX unsigned __watcall c_openSsl_peekIF(               unsigned* pEcP , char* pbP , unsigned cbP , SSL* pSslP                                                         ) ;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
 
