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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000000.c_debugf BEGIN
#define DDNAME       "3func.30000000.c_debugf"
#define DDNUMB      (countT)0x30000000
#define IDFILE      (countT)0x8ca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/void _export c_debugF( void )/*1*/
{
    int* pcb = 0 ;

    _try
    {
        *pcb = 0x1234 ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        puts( "\r\nc_debugF / exception caught\r\n" ) ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000000.c_debugf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000001.c_openssl_setupif BEGIN
#define DDNAME       "3func.30000001.c_openssl_setupif"
#define DDNUMB      (countT)0x30000001
#define IDFILE      (countT)0x8cb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_setupIF( unsigned* pEcP , openSsl_pInitFT pInitFP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pInitFP)() ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000001.c_openssl_setupif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000002.c_openssl_wavebyeif BEGIN
#define DDNAME       "3func.30000002.c_openssl_wavebyeif"
#define DDNUMB      (countT)0x30000002
#define IDFILE      (countT)0x8cc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_waveByeIF( unsigned* pEcP , openSsl_pWaveByeFT pWaveByeFP , SSL* pSslP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pWaveByeFP)( pSslP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000002.c_openssl_wavebyeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000003.c_openssl_getcontextif BEGIN
#define DDNAME       "3func.30000003.c_openssl_getcontextif"
#define DDNUMB      (countT)0x30000003
#define IDFILE      (countT)0x8cd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/


/**//*1*/SSL_CTX* __watcall c_openSsl_getContextIF( unsigned* pEcP , openSsl_pContextFT pContextFP , openSsl_pMethodFT pMethodFP , openSsl_pPemFileCertFT pPemFileCertFP , openSsl_pPemFileKeyFT pPemFileKeyFP , openSsl_pCurvesFT pCurvesFP , const char* const postPemCertificatesP , const char* const postPemPrivateKeyP )/*1*/
{
    SSL_CTX* pContext = 0 ;
    unsigned rcDebug = 0 ;
    *pEcP = 0 ;

    //CS:CODEsYNC: 350011a1 30000003
    _try
    {
        pContext = (*pContextFP)( (*pMethodFP)() ) ;
        if( !pContext ) *pEcP |= 2 ;

        //*pEcP |= - 1 + (*pCurvesFP)( pContext , 1 ) ;

        if( postPemCertificatesP && postPemPrivateKeyP && *postPemCertificatesP && *postPemPrivateKeyP )
        {
            if( - 1 + (*pPemFileCertFP)( pContext , postPemCertificatesP                    ) ) *pEcP |= 4 ;
            if( - 1 + (*pPemFileKeyFP)(  pContext , postPemPrivateKeyP   , SSL_FILETYPE_PEM ) ) *pEcP |= 8 ;
        }
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }

    return pContext ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000003.c_openssl_getcontextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000004.c_openssl_getwrapperif BEGIN
#define DDNAME       "3func.30000004.c_openssl_getwrapperif"
#define DDNUMB      (countT)0x30000004
#define IDFILE      (countT)0x8ce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/SSL* __watcall c_openSsl_getWrapperIF( unsigned* pEcP , openSsl_pWrapperFT pWrapperFP , SSL_CTX* pContextP )/*1*/
{
    SSL* pWrap = 0 ;
    *pEcP = 0 ;

    _try
    {
        pWrap = (*pWrapperFP)( pContextP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }

    return pWrap ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000004.c_openssl_getwrapperif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000005.c_openssl_wrapsocketif BEGIN
#define DDNAME       "3func.30000005.c_openssl_wrapsocketif"
#define DDNUMB      (countT)0x30000005
#define IDFILE      (countT)0x8cf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_wrapSocketIF( unsigned* pEcP , openSsl_pWrapFT pWrapFP , unsigned oshSocketP , SSL* pSslP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pWrapFP)( pSslP , oshSocketP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000005.c_openssl_wrapsocketif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000006.c_openssl_shakehandsasclientif BEGIN
#define DDNAME       "3func.30000006.c_openssl_shakehandsasclientif"
#define DDNUMB      (countT)0x30000006
#define IDFILE      (countT)0x8d0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_shakeHandsAsClientIF( unsigned* pEcP , openSsl_pShakeAsClientFT pShakeAsClientFP , SSL* pSslP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pShakeAsClientFP)( pSslP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000006.c_openssl_shakehandsasclientif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000007.c_openssl_writeif BEGIN
#define DDNAME       "3func.30000007.c_openssl_writeif"
#define DDNUMB      (countT)0x30000007
#define IDFILE      (countT)0x8d1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/unsigned __watcall c_openSsl_writeIF( unsigned* pEcP , openSsl_pWriteFT pWriteFP , SSL* pSslP , const char* const pbP , const unsigned cbP )/*1*/
{
    unsigned cbWritten = 0 ;
    *pEcP = 0 ;

    _try
    {
        cbWritten = (*pWriteFP)( pSslP , pbP , cbP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }

    return cbWritten ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000007.c_openssl_writeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000008.c_openssl_readif BEGIN
#define DDNAME       "3func.30000008.c_openssl_readif"
#define DDNUMB      (countT)0x30000008
#define IDFILE      (countT)0x8d2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/unsigned __watcall c_openSsl_readIF( unsigned* pEcP , openSsl_pReadFT pReadFP , char* pbP , unsigned cbP , SSL* pSslP )/*1*/
{
    unsigned cbRead = 0 ;
    *pEcP = 0 ;

    _try
    {
        if( *pEcP ) { unsigned* pcBlammo = 0 ; *pcBlammo = 123 ; } //U:: TO FIND A BUG

        cbRead =   (*pReadFP)( pSslP , pbP , cbP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        puts( "\r\nc_openSsl_readIF / exception caught\r\n" ) ;
        *pEcP = 1 ;
    }
    
    return cbRead ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000008.c_openssl_readif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000009.c_tracehelperif BEGIN
#define DDNAME       "3func.30000009.c_tracehelperif"
#define DDNUMB      (countT)0x30000009
#define IDFILE      (countT)0x8d3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/void _export c_traceHelperIF( unsigned pP )/*1*/
{
    _try
    {
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.30000009.c_tracehelperif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000a.c_openssl_shakehandsasserverif BEGIN
#define DDNAME       "3func.3000000a.c_openssl_shakehandsasserverif"
#define DDNUMB      (countT)0x3000000a
#define IDFILE      (countT)0x8d4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_shakeHandsAsServerIF( unsigned* pEcP , openSsl_pShakeAsServerFT pShakeAsServerFP , SSL* pSslP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pShakeAsServerFP)( pSslP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000a.c_openssl_shakehandsasserverif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000b.c_openssl_peekif BEGIN
#define DDNAME       "3func.3000000b.c_openssl_peekif"
#define DDNUMB      (countT)0x3000000b
#define IDFILE      (countT)0x8d5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/unsigned __watcall c_openSsl_peekIF( unsigned* pEcP , openSsl_pPeekFT pPeekFP , char* pbP , unsigned cbP , SSL* pSslP )/*1*/
{
    unsigned cbRead = 0 ;
    *pEcP = 0 ;

    _try
    {
        if( *pEcP ) { unsigned* pcBlammo = 0 ; *pcBlammo = 123 ; } //U:: TO FIND A BUG

        cbRead = (*pPeekFP)( pSslP , pbP , cbP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        puts( "\r\nc_openSsl_readIF / exception caught\r\n" ) ;
        *pEcP = 1 ;
    }
    
    return cbRead ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000b.c_openssl_peekif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000c.c_openssl_wrapperFreeIF BEGIN
#define DDNAME       "3func.3000000c.c_openssl_wrapperFreeIF"
#define DDNUMB      (countT)0x3000000c
#define IDFILE      (countT)0x8d6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**//*1*/void __watcall c_openSsl_wrapperFreeIF( unsigned* pEcP , openSsl_pWrapperFreeFT pWrapperFreeFP , SSL* pSslP )/*1*/
{
    *pEcP = 0 ;

    _try
    {
        (*pWrapperFreeFP)( pSslP ) ;
    }
    _except( EXCEPTION_EXECUTE_HANDLER )
    {
        *pEcP = 1 ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000c.c_openssl_wrapperFreeIF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000d.c_getaddrinfoF BEGIN
#define DDNAME       "3func.3000000d.c_getaddrinfoF"
#define DDNUMB      (countT)0x3000000d
#define IDFILE      (countT)0x0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/void _export __watcall c_getaddrinfoF( char* pbListP , unsigned cbListP , const char* const postNameP )/*1*/
{
    unsigned* pcOut = (unsigned*)pbListP ;
    unsigned* pcEnd = (unsigned*)( pbListP + cbListP - sizeof( unsigned ) ) ;     /* RESERVES TRAILING unsigned FOR END MARKER */

    struct addrinfo* pInfo   = 0 ;
    struct addrinfo* pCursor = 0 ;

    unsigned bIpv6    = 0 ;
    unsigned ccNeeded = 0 ;
    unsigned cbSkip   = 0 ;

    unsigned* pcGold  = 0 ;

    getaddrinfo( postNameP , "http" , 0 , &pInfo ) ;

    pCursor = pInfo ;
    while( pCursor )
    {
        if( pCursor->ai_addr->sa_family == AF_INET6 || pCursor->ai_addr->sa_family == AF_INET )
        {
            bIpv6 = pCursor->ai_addr->sa_family == AF_INET6 ;

            ccNeeded = bIpv6               /* TYPE MARKER VALUE */
                ? 5
                : 2
            ;

            if( pcOut + ccNeeded > pcEnd ) break ;

            *( pcOut ++ ) = bIpv6                   /* TYPE MARKER */
                ? 0x66666666
                : 0x44444444
            ;

            cbSkip = bIpv6
                ? 6
                : 2
            ;

            pcGold = (unsigned*)( (char*)pCursor->ai_addr->sa_data + cbSkip ) ;

            if( !bIpv6 ) *( pcOut ++ ) = *pcGold ;
            else
            {
                *( pcOut ++ ) = *( pcGold ++ ) ;
                *( pcOut ++ ) = *( pcGold ++ ) ;
                *( pcOut ++ ) = *( pcGold ++ ) ;
                *( pcOut ++ ) = *( pcGold ++ ) ;
            }
        }

        pCursor = pCursor->ai_next ;
    }

    *( pcOut ++ ) = 0x11111111 ;

    freeaddrinfo( pInfo ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.30000* : 3func.3000000d.c_getaddrinfoF END
