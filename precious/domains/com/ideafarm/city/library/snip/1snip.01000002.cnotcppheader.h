
//
// Copyright (c) 1992-2019 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
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

    typedef int               (__syscall *openSsl_pGetError1FT    )( const SSL* pWrapP , int rcP )                                                         ; // int SSL_get_error( const SSL *ssl , int ret ) ;

    typedef int               (__syscall *openSsl_pGetError2FT    )( const char** ppostFileP , int* pIdLineP , const char** ppostDaataP , int* pOsFlagsP ) ; // unsigned long ERR_get_error_line_data(const char **file, int *line, const char **data, int *flags);

    typedef void              (__syscall *openSsl_pGetErrorTextFT )( unsigned long eP , char* postP , size_t costaP )                                      ; // void ERR_error_string_n( unsigned long e , char *buf , size_t len ) ;

    typedef const SSL_METHOD* (__syscall *openSsl_pMethodFT       )( void )                                                                                ; // const SSL_METHOD *SSLv23_method( void ) ;  /* ENABLES ALL METHODS OTHER THAN SSLv2 */

    typedef int               (__syscall *openSsl_pInitFT         )( void )                                                                                ; // int __syscall SSL_library_init( void ) ;

    typedef SSL_CTX*          (__syscall *openSsl_pContextFT      )( const SSL_METHOD* pMethodP )                                                          ; // SSL_CTX* __syscall SSL_CTX_new( const SSL_METHOD* method ) ;

    typedef void              (__syscall *openSsl_pContextFreeFT  )( SSL_CTX* pContextP )                                                                  ; // void SSL_CTX_free( SSL_CTX *ctx ) ;

    typedef SSL*              (__syscall *openSsl_pWrapperFT      )( SSL_CTX* pContextP )                                                                  ; // SSL *SSL_new( SSL_CTX *ctx ) ;

    typedef void              (__syscall *openSsl_pWrapperFreeFT  )( SSL* pWrapP )                                                                         ; // void SSL_free( SSL *ssl ) ;

    typedef int               (__syscall *openSsl_pWrapFT         )( SSL* pWrapP , int hSockP )                                                            ; // int SSL_set_fd( SSL *ssl , int fd ) ;

    typedef int               (__syscall *openSsl_pAcceptShakeFT  )( SSL* pWrapP )                                                                         ; // int SSL_accept( SSL *ssl ) ;

    typedef int               (__syscall *openSsl_pConnectShakeFT )( SSL* pWrapP )                                                                         ; // int SSL_connect( SSL *ssl ) ;

    typedef int               (__syscall *openSsl_pWriteFT        )( SSL* pWrapP , const void* pbP , int cbP )                                             ; // int SSL_write( SSL *ssl , const void *buf , int num ) ;

    typedef int               (__syscall *openSsl_pReadFT         )( SSL* pWrapP , void* pbP , int cbP )                                                   ; // int SSL_read( SSL *ssl , void *buf , int num ) ;

    typedef int               (__syscall *openSsl_pShutdownFT     )( SSL* pWrapP )                                                                         ; // int SSL_shutdown( SSL *ssl ) ;

    //----------------------------------------------------- END

    #define MYpREFIX

#endif

#include <excpt.h>
#include <stdio.h>

MYpREFIX void _export c_debugF( void ) ;

MYpREFIX void _export c_traceHelperIF( unsigned pP ) ;

MYpREFIX unsigned c_openSsl_getError1IF(         unsigned* pEcP , openSsl_pGetError1FT         pGetError1FP    , unsigned rcP , const SSL* pWrapP                        ) ;
MYpREFIX unsigned c_openSsl_getError2IF(         unsigned* pEcP , openSsl_pGetError2FT         pGetError2FP                                                              ) ;
MYpREFIX void     c_openSsl_getErrorTextIF(      unsigned* pEcP , openSsl_pGetErrorTextFT      pGetErrorTextFP , char* postP , size_t costaP , unsigned long eP          ) ;
MYpREFIX void     c_openSsl_setupIF(             unsigned* pEcP , openSsl_pInitFT              pInitFP                                                                   ) ;
MYpREFIX void     c_openSsl_shutdownIF(          unsigned* pEcP , openSsl_pShutdownFT          pShutdownFP     , SSL* pSslP                                              ) ;
MYpREFIX SSL_CTX* c_openSsl_getContextIF(        unsigned* pEcP , openSsl_pContextFT           pContextFP      , openSsl_pMethodFT pMethodFP                             ) ;
MYpREFIX SSL*     c_openSsl_getWrapperIF(        unsigned* pEcP , openSsl_pWrapperFT           pWrapperFP      , SSL_CTX* pContextP                                      ) ;
MYpREFIX void     c_openSsl_wrapSocketIF(        unsigned* pEcP , openSsl_pWrapFT              pWrapFP         , unsigned oshSocketP , SSL* pSslP                        ) ;
MYpREFIX void     c_openSsl_acceptShakeHandsIF(  unsigned* pEcP , openSsl_pAcceptShakeFT       pShakeFP        , SSL* pSslP                                              ) ;
MYpREFIX void     c_openSsl_connectShakeHandsIF( unsigned* pEcP , openSsl_pConnectShakeFT      pShakeFP        , SSL* pSslP                                              ) ;
MYpREFIX unsigned c_openSsl_writeIF(             unsigned* pEcP , openSsl_pWriteFT             pWriteFP        , SSL* pSslP , const char* const pbP , const unsigned cbP ) ;
MYpREFIX unsigned c_openSsl_readIF(              unsigned* pEcP , openSsl_pReadFT              pReadFP         , char* pbP , unsigned cbP , SSL* pSslP                   ) ;


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
//
// Copyright (c) 1992-2019 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

