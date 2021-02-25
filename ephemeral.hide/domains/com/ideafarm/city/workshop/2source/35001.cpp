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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001005.thirdc.c_atoiif BEGIN
#define DDNAME       "3func.35001005.thirdc.c_atoiif"
#define DDNUMB      (countT)0x35001005
#define IDFILE      (countT)0x9ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_atoiIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7b00104.1.1.0.html\"\>7b00104:  WAKEsHOW( "example.simplest.func.1020005.thirdC.c_atoiIF" )\</A\>
arguments
 postP
  string consisting of hexadecimal digits [0-9,a-f] in ifc order, followed by other characters
   evaluation stops when a nondigit character is encountered
   ifc order is that the leftmost digit is least significant
   sign is not allowed
   for example, "89abc" is ok
   for example, "0x89abc" is illegal
   the string "01" will evaluate to 0x10
*/
/**/

//U: THIS CAN BE ELIMINATED BY USING c_strncpy TO LIMIT COPY TO 8 DIGITS
#define CBbUFF 0x100

//U::EDIT TO SUPPORT NEGATIVE SIGN (SEE OTHER OVERLOAD)

/*1*/countT thirdC::c_atoiIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        __( CBbUFF <= c_strlenIF( tinP , postP ) ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    OStEXT( ostob , CBbUFF )
    OStEXTA( ostob  , postP ) ;
    c_strlwrIF( tinP , (osTextT*)(const osTextT*)ostob ) ;

    ZE( countT , value ) ;
    ZE( countT , off ) ;
    while( ostob[ off ] )
    {
        ZE( countT , vd ) ;
             if( ostob[ off ] >= '0' && ostob[ off ] <= '9' ) vd =       ostob[ off ] - '0' ;
        else if( ostob[ off ] >= 'a' && ostob[ off ] <= 'f' ) vd = 0xa + ostob[ off ] - 'a' ;
        else break ;

        value |= vd << 4 * off ;

        off ++ ;
    }
    return value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001005.thirdc.c_atoiif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001008.thirdc.c_memcmpif BEGIN
#define DDNAME       "3func.35001008.thirdc.c_memcmpif"
#define DDNUMB      (countT)0x35001008
#define IDFILE      (countT)0x9ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memcmpIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fb00104.1.1.0.html\"\>fb00104:  WAKEsHOW( "example.simplest.func.1020008.thirdC.c_memcmpIF" )\</A\>
arguments
 pb1P
 pb2P
 cbP
*/
/**//*1*/sCountT thirdC::c_memcmpIF( tinS& tinP , const byteT* const pb1P , const byteT* const pb2P , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pb1P ) ;
        __Z( pb2P ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( memcmp( pb1P , pb2P , cbP ) )
    sCountT diff = _brcRaw ;
    return diff ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001008.thirdc.c_memcmpif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001009.thirdc.c_memcpyif BEGIN
#define DDNAME       "3func.35001009.thirdc.c_memcpyif"
#define DDNUMB      (countT)0x35001009
#define IDFILE      (countT)0x9ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memcpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0c00104.1.1.0.html\"\>0c00104:  WAKEsHOW( "example.simplest.func.1020009.thirdC.c_memcpyIF" )\</A\>
arguments
 pbToP
 pbFromP
 cbP
  can be 0
  if 0 then nothing is done and impotence does not occur
*/
/**/

/*1*/voidT thirdC::c_memcpyIF( tinS& tinP , byteT* const pbToP , const byteT* const pbFromP , const countT cbP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbToP ) ;
        __Z( pbFromP ) ;
        if( POOP ) return ;
        __( pbFromP > pbToP   && pbFromP - pbToP < sizeof( countT ) ) ; // memcpy USES movsd SO MOVES sizeof( countT ) BYTES AT A TIME.  FOR SMALL MOVES, SOURCE WOULD BE CLOBBERED
        __( pbToP   > pbFromP && pbToP < pbFromP + cbP ) ;              // SOURCE WOULD BE CLOBBERED SINCE memcpy STEPS UPWARD
        if( POOP ) return ;
    }

    //INOUT NOT USED, TO AVOID BLOWING STACK DURING INOUT TRACING
    //_IO_
    DROPnOTEdOESnOTwANTmE
    if( cbP )
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( memcpy( pbToP , pbFromP , cbP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001009.thirdc.c_memcpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100a.thirdc.c_memsetif BEGIN
#define DDNAME       "3func.3500100a.thirdc.c_memsetif"
#define DDNUMB      (countT)0x3500100a
#define IDFILE      (countT)0x9ef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memsetIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1c00104.1.1.0.html\"\>1c00104:  WAKEsHOW( "example.simplest.func.102000a.thirdC.c_memsetIF" )\</A\>
arguments
 pbP
 cbP
 valueP
*/
/**/

/*1*/voidT thirdC::c_memsetIF( tinS& tinP , byteT* const pbP , const countT cbP , const byteT valueP )/*1*/
{
    //if( cUtilityIF() )
    //{
    //    //countT offPoop1 = ebpAM() - (countT)processGlobal3I.tinVeryVeryEarlyLateMain.pPoop ;
    //    //countT offPoop2 = ebpAM() - (countT)tinP.pPoop ;
    //
    //    //CONoUTrAW3( "c_memsetIF [offPoop1]: " , offPoop1 , "\r\n" ) ;
    //    //CONoUTrAW3( "c_memsetIF [offPoop2]: " , offPoop2 , "\r\n" ) ;
    //    //CONoUTrAW( &tinP == &processGlobal3I.tinVeryVeryEarlyLateMain ? "tinP is correct\r\n" : "tinP is NOT correct\r\n" ) ;
    //
    //    dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ;
    //}

    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    //_IO_      (CAUSES EXCEPTION: CNR IF inOutFrameC EMISSION OF APP TELEMETRY SUPPRESSED)
    BOSdOnOTtEST( WHATgbo , memset( pbP , valueP , cbP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100a.thirdc.c_memsetif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100b.thirdc.c_strcatif BEGIN
#define DDNAME       "3func.3500100b.thirdc.c_strcatif"
#define DDNUMB      (countT)0x3500100b
#define IDFILE      (countT)0x9f0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcatIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2c00104.1.1.0.html\"\>2c00104:  WAKEsHOW( "example.simplest.func.102000b.thirdC.c_strcatIF" )\</A\>
appends the null terminated string at post2P to the end of the null terminated string at post1P
arguments
 post1P
  must not be 0
  must point to a memory that the adam can write to
  must contain enough bytes at the end of the current string to hold the appendage
 post2P
  must not be 0
  must not equal post1P
  must point to memory that the adam can read from
*/
/**/

/*1*/osTextT* thirdC::c_strcatIF( tinS& tinP , osTextT* const post1P  , const osTextT* const post2P )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( post1P ) ;
        __Z( post2P ) ;
        __( post1P == post2P ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strcat( post1P , post2P ) )
    return post1P ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100b.thirdc.c_strcatif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100c.thirdc.c_strchrif BEGIN
#define DDNAME       "3func.3500100c.thirdc.c_strchrif"
#define DDNUMB      (countT)0x3500100c
#define IDFILE      (countT)0x9f1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strchrIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3c00104.1.1.0.html\"\>3c00104:  WAKEsHOW( "example.simplest.func.102000c.thirdC.c_strchrIF" )\</A\>
arguments
 postP
 ostP
*/
/**/

/*1*/osTextT* thirdC::c_strchrIF( tinS& tinP , const osTextT* const postP , const osTextT ostP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , strchr( postP , ostP ) )
    osTextT* post = (osTextT*)tinP.brcRaw ;
    return post ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100c.thirdc.c_strchrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100d.thirdc.c_strcmpif BEGIN
#define DDNAME       "3func.3500100d.thirdc.c_strcmpif"
#define DDNUMB      (countT)0x3500100d
#define IDFILE      (countT)0x9f2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcmpIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4c00104.1.1.0.html\"\>4c00104:  WAKEsHOW( "example.simplest.func.102000d.thirdC.c_strcmpIF" )\</A\>
arguments
 pb1P
 pb2P
 cbP
  can be 0
  if 0 then i perform a (null terminated) string compare
  else i perform a memory compare of exactly cbP bytes
with nonze cbP i duplicate the function of memcmpIF and am slightly less efficient
i exist for coding convenience and should not be used except where calling memcmpIF is inconvenient
 for example, i am used in the definition of BOOLcLASSESpTR
*/
/**/

/*1*/sCountT thirdC::c_strcmpIF( tinS& tinP , const byteT* const pb1P , const byteT* const pb2P , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pb1P ) ;
        __Z( pb2P ) ;
        if( POOP ) return 0 ;
    }

    //THIS IS DISABLED AS A SPEED OPTIMIZATION (I AM CALLED SO FREQUENTLY THAT THIS _IO_ KILL EXECUTION SPEED
    //_IO_

    if( cbP ) BOSdOnOTtEST( WHATgbo , memcmp( pb1P , pb2P , cbP ) )
    else      BOSdOnOTtEST( WHATgbo , strcmp( pb1P , pb2P ) )
        
    sCountT sgn = tinP.brcRaw ;
    return sgn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100d.thirdc.c_strcmpif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100e.thirdc.c_strcpyif BEGIN
#define DDNAME       "3func.3500100e.thirdc.c_strcpyif"
#define DDNUMB      (countT)0x3500100e
#define IDFILE      (countT)0x9f3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5c00104.1.1.0.html\"\>5c00104:  WAKEsHOW( "example.simplest.func.102000e.thirdC.c_strcpyIF" )\</A\>
arguments
 post1P
 post2P
*/
/**/

/*1*/osTextT* thirdC::c_strcpyIF( tinS& tinP , osTextT* const post1P  , const osTextT* const post2P )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( post1P ) ;
        __Z( post2P ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strcpy( post1P , post2P ) )
    return post1P ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100e.thirdc.c_strcpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100f.thirdc.c_strlenif BEGIN
#define DDNAME       "3func.3500100f.thirdc.c_strlenif"
#define DDNUMB      (countT)0x3500100f
#define IDFILE      (countT)0x9f4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strlenIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6c00104.1.1.0.html\"\>6c00104:  WAKEsHOW( "example.simplest.func.102000f.thirdC.c_strlenIF" )\</A\>
arguments
 postP
*/
/**/

/*1*/countT thirdC::c_strlenIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    //INOUT NOT USED, TO AVOID BLOWING STACK DURING INOUT TRACE
    //_IO_
    BOSdOnOTtEST( WHATgbo , strlen( postP ) )
    countT cnt = tinP.brcRaw ;
    return cnt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500100f.thirdc.c_strlenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001010.thirdc.c_strncpyif BEGIN
#define DDNAME       "3func.35001010.thirdc.c_strncpyif"
#define DDNUMB      (countT)0x35001010
#define IDFILE      (countT)0x9f5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strncpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7c00104.1.1.0.html\"\>7c00104:  WAKEsHOW( "example.simplest.func.1020010.thirdC.c_strncpyIF" )\</A\>
arguments
 post1P
 post2P
 costP
*/
/**/

/*1*/voidT thirdC::c_strncpyIF( tinS& tinP , osTextT* const post1P , const osTextT* const post2P , countT costa1P )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( post1P ) ;
        __Z( post2P ) ;
        if( POOP ) return ;
    }

    //INOUT NOT USED, TO AVOID BLOWING STACK DURING INOUT TRACING
    //_IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strncpy( post1P , post2P , costa1P ) )
    if( post1P[ costa1P - 1 ] ) post1P[ costa1P - 1 ] = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001010.thirdc.c_strncpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001011.thirdc.c_strrchrif BEGIN
#define DDNAME       "3func.35001011.thirdc.c_strrchrif"
#define DDNUMB      (countT)0x35001011
#define IDFILE      (countT)0x9f6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strrchrIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8c00104.1.1.0.html\"\>8c00104:  WAKEsHOW( "example.simplest.func.1020011.thirdC.c_strrchrIF" )\</A\>
arguments
 postP
 ostP
*/
/**/

/*1*/osTextT* thirdC::c_strrchrIF( tinS& tinP , const osTextT* const postP , const osTextT ostP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strrchr( postP , ostP ) )
    osTextT* post = (osTextT*)_brcRaw ;
    return post ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001011.thirdc.c_strrchrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001012.thirdc.c_strstrif BEGIN
#define DDNAME       "3func.35001012.thirdc.c_strstrif"
#define DDNUMB      (countT)0x35001012
#define IDFILE      (countT)0x9f7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strstrIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9c00104.1.1.0.html\"\>9c00104:  WAKEsHOW( "example.simplest.func.1020012.thirdC.c_strstrIF" )\</A\>
arguments
 postBigP
 postSmallP
*/
/**/

/*1*/osTextT* thirdC::c_strstrIF( tinS& tinP , const osTextT* const postBigP , const osTextT* const postSmallP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( postBigP ) ;
        __Z( postSmallP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strstr( postBigP , postSmallP ) )
    osTextT* post = (osTextT*)_brcRaw ;
    return post ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001012.thirdc.c_strstrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001013.thirdc.c_strlwrif BEGIN
#define DDNAME       "3func.35001013.thirdc.c_strlwrif"
#define DDNUMB      (countT)0x35001013
#define IDFILE      (countT)0x9f8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strlwrIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ac00104.1.1.0.html\"\>ac00104:  WAKEsHOW( "example.simplest.func.1020013.thirdC.c_strlwrIF" )\</A\>
arguments
 postP
*/
/**/

/*1*/voidT thirdC::c_strlwrIF( tinS& tinP , osTextT* postP )/*1*/
{
    IFbEcAREFUL            
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , _strlwr( postP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001013.thirdc.c_strlwrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001014.thirdc.c_struprif BEGIN
#define DDNAME       "3func.35001014.thirdc.c_struprif"
#define DDNUMB      (countT)0x35001014
#define IDFILE      (countT)0x9f9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_struprIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bc00104.1.1.0.html\"\>bc00104:  WAKEsHOW( "example.simplest.func.1020014.thirdC.c_struprIF" )\</A\>
arguments
 postP
*/
/**/

/*1*/voidT thirdC::c_struprIF( tinS& tinP , osTextT* const postP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , _strupr( (osTextT*)postP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001014.thirdc.c_struprif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001015.thirdc.msfromtimeif BEGIN
#define DDNAME       "3func.35001015.thirdc.msfromtimeif"
#define DDNUMB      (countT)0x35001015
#define IDFILE      (countT)0x9fa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$msFromTimeIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020015.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 time1P
 time2P
*/
/**/

/*1*/countT thirdC::msFromTimeIF( tinS& tinP , const countT time1P , const sCountT time2P )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    measureT days = time1P ;
    days /= 256 ; // TUCKS
    days /= 256 ; // TOCKS
    days /= 256 ; // TICKS
    days /= 256 ; // DAYS
    days += time2P ;
    return days * 86400000.0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001015.thirdc.msfromtimeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001017.thirdc.c_zreplaceif BEGIN
#define DDNAME       "3func.35001017.thirdc.c_zreplaceif"
#define DDNUMB      (countT)0x35001017
#define IDFILE      (countT)0x9fb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_zReplaceIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020017.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dc00104.1.1.0.html\"\>dc00104:  WAKEsHOW( "example.simplest.func.1020017.thirdC.c_zReplaceIF" )\</A\>
arguments
 postP
 ostOldP
 ostNewP
*/
/**/

/*1*/voidT thirdC::c_zReplaceIF( tinS& tinP , osTextT* const postP , const osTextT ostOldP , const osTextT ostNewP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , off ) ;
    while( postP[ off ] )
    {
        if( postP[ off ] == ostOldP ) postP[ off ] = ostNewP ;
        off ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001017.thirdc.c_zreplaceif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001019.thirdc.dosclosemutexsemif BEGIN
#define DDNAME       "3func.35001019.thirdc.dosclosemutexsemif"
#define DDNUMB      (countT)0x35001019
#define IDFILE      (countT)0x9fc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCloseMutexSemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4d00104.1.1.0.html\"\>4d00104:  WAKEsHOW( "example.simplest.func.102001a.thirdC.dosCloseMutexSemIF" )\</A\>
works even if impotent, as long as handleP is not ze
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosCloseMutexSemIF( tinS& tinP , handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        //if( POOP ) return ;
        __Z( handleP ) ;
        //if( POOP ) return ;
    }

    _IO_
    if( ~handleP )
    {
        ZE( boolT , fnu ) ;
        #ifdef __OS2__

            __( sizeof( countT ) != sizeof( HMTX ) || fnu ) ;
            if( !POOP )
            {
                BOSI( WHATgbo , BOSfAIL , DosCloseMutexSem( (HMTX)handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE ) ) )
                handleP = 0 ;
                if( tinP.bosFail && tinP.brcRaw != ERROR_INVALID_HANDLE && tinP.brcRaw != ERROR_SEM_BUSY )
                {
                    BOSpOOP
                }
            }

        #elif defined( __NT__ )

            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            handleP.closeIfF() ;
            //U: 950409: Development@antryg.com REPORTED THE EXCEPTION IN THE ABOVE LINE

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001019.thirdc.dosclosemutexsemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500101b.thirdc.doscreatemutexsemif BEGIN
#define DDNAME       "3func.3500101b.thirdc.doscreatemutexsemif"
#define DDNUMB      (countT)0x3500101b
#define IDFILE      (countT)0x9fd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCreateMutexSemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102001c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5d00104.1.1.0.html\"\>5d00104:  WAKEsHOW( "example.simplest.func.102001c.thirdC.dosCreateMutexSemIF" )\</A\>
it is illegal to refer to this symbol in the definition of an adam
it is illegal to refer to this symbol anywherew
works even if impotent, as long as !handleP
arguments
 handleP
 bCreatorP
 postP
*/
/**/

/*1*/voidT thirdC::dosCreateMutexSemIF( tinS& tinP , handleC& handleP , boolT& bCreatorP , const osTextT* const postP , const boolT bGrabbedP )/*1*/
{
    ZE( countT* , pcb ) ; *pcb = 0 ;

    IFbEcAREFUL    
    {
        //if( POOP ) return ;
        __( ~handleP ) ;
        __( bCreatorP ) ;
        __( postP && c_strlenIF( tinP , postP ) > 247 ) ;
        //if( POOP ) return ;
    }

    _IO_
    if( !handleP )
    {
        #ifdef __OS2__

            OStEXT( ostoName , 255 ) ;
            if( postP )
            {
                OStEXTAK( ostoName , "\\sem32\\" )
                OStEXTAK( ostoName  , postP ) ;
            }
            countT cntTries = 10 ;
            while( cntTries -- )
            {
                //U:EDIT TO CORRECTLY CHECK rc AND CLOSE HANDLE AND REGISTER HANDLE
                //U: SUPPORT bGrabbedP
                bCreatorP = 1 ;
                ZE( HMTX , osh ) ;
                BOSI( WHATgbo , BOSfAIL , DosCreateMutexSem( ostoName , &osh , 0 , 0 ) )
                handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE , (countT)osh ) ;

                if( !tinP.bosFail ) break ;
                else if( tinP.brcQuery == ERROR_DUPLICATE_NAME )
                {
                    bCreatorP = 0 ;
                    ZE( HMTX , osh ) ;
                    BOSI( WHATgbo , BOSfAIL , DosOpenMutexSem( ostoName , &osh ) )
                    handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE , (countT)osh ) ;
                    if( !tinP.bosFail ) break ;
                }
                else __( tinP.brcQuery ) ;
            }

            __Z( handleP ) ;

        #elif defined( __NT__ )

            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            {
                SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
                BOS( WHATgbo , BOSoK , CreateMutex( &sa , bGrabbedP , postP ) )
                BOSpOOP
                handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE , tinP.brcRaw ) ; // WINDOWS DOES NOT SUPPORT SHARING OF UNNAMED MUTEX'S, SO THE FUNCTION DEFINED IN THIS MODULE DOES NOT INCLUDE SUCH AN OPTION
            }
            __Z( handleP ) ;
            BOSdOnOTtEST( WHATgbo , GetLastError() )
            if( !POOP ) bCreatorP = ERROR_ALREADY_EXISTS != tinP.brcRaw ;

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500101b.thirdc.doscreatemutexsemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500101c.thirdc.dosdeleteif BEGIN
#define DDNAME       "3func.3500101c.thirdc.dosdeleteif"
#define DDNUMB      (countT)0x3500101c
#define IDFILE      (countT)0x9fe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosDeleteIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102001d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9d00104.1.1.0.html\"\>9d00104:  WAKEsHOW( "example.simplest.func.102001d.thirdC.dosDeleteIF" )\</A\>
d eletes the file if it exists
 if the file does not exist, i return immediately and silently
 on os/2 and windows, will block temporarily if another process has the file open
 on linux, will return immediately, but the file will not be d eleted until it is closed by all processes
arguments
 postP
  example: "\\fooey"
 cTriesP
  can be 0
  if 0 then will retry forever unless thPrimeIF( tinP ) is impotent
  if not 0 then will try cTriesP times (even if thPrimeIF( tinP ) is impotent)
  if - 1 then will retry forever even if thPrimeIF( tinP ) is impotent
*/
/**/

/*1*/voidT thirdC::dosDeleteIF( tinS& tinP , const osTextT* const postP , countT cTriesP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    // 980501.0854: wegge@wegge.dk (Anders Wegge Jakobsen): emailed this definition to Wegge for review
    // 980502.0953: asked Wegge to add code to detect and handle the case of removing a directory

    if( c_strstrIF( postP , ".!.transcript." ) )
    {
        countT foo = 2 ;
    }

    _IO_
    {
        boolT bNoQuit = cTriesP == - 1 ;
        boolT bNoQuitEarly = !cTriesP ;
        {
            //boolT bSay = tinP.pc Utility[ 0 ] ;
            //if( bSay )
            //{
            //    OStEXT(  ostos , TUCK << 1 ) ;
            //    OStEXTAK( ostos , "deleting \"" ) ;
            //    OStEXTA(  ostos , postP ) ;
            //    OStEXTAK( ostos , "\"\r\n" ) ;
            //    CONoUTrAW( ostos ) ;
            //}

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            do
            {
                #ifdef __OS2__

                    BOSI( WHATgbo , BOSfAIL , DosDelete( postP ) )

                #elif defined( __NT__ )

                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATgbo , BOSoK , DeleteFile( postP ) )
                    if( tinP.bosFail && ( tinP.brcLath == ERROR_FILE_NOT_FOUND || tinP.brcLath == ERROR_PATH_NOT_FOUND ) ) tinP.bosFail = 0 ;

                #elif defined( __linux__ )

                    BOS( WHATgbo , BOSfAIL , unlink ( postP ) )
                    BLAMMO ; //U::ADD CODE TO TEST "NOT FOUND" (SEE NT)

                #endif
        
                if( !tinP.bosFail ) break ;
                else
                {
                    OStEXT(  ostos , TUCK << 1 ) ;
                    OStEXTAK( ostos , "dosDeleteIF [brcQuery,postFile]: \"" ) ;
                    OStEXTC(  ostos , tinP.brcQuery , 0 ) ;
                    OStEXTAK( ostos , " \"" ) ;
                    OStEXTA(  ostos , postP ) ;
                    OStEXTAK( ostos , "\"\r\n" ) ;
                    if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T(ostos) ) ;
                    else              { CONoUTrAW( ostos ) ; }

                    //if( bSay ) { CONoUTrAW3( "dosDeleteIF [brcQuery]: " , tinP.brcQuery , "\r\n" ) ; }
                    ++ s ; dosSleepIF( tinP , TOCK >> 2 ) ;
                }
            }
            while( !POOP && ( bNoQuit || ( bNoQuitEarly && !thPrimeIF( tinP ) ) || ( cTriesP && -- cTriesP ) ) ) ;
        }

        BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500101c.thirdc.dosdeleteif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001020.thirdc.dosopenif BEGIN
#define DDNAME       "3func.35001020.thirdc.dosopenif"
#define DDNUMB      (countT)0x35001020
#define IDFILE      (countT)0x9ff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosOpenIF.0.html\"\>instances\</A\>
    
\<A HREF=\"5.1020022.1.0.html\"\>definition\</A\>
i assume that i am the only thread that is opening a file of the specified name
arguments
 handleP
 idResultP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010013.ifcOPENrESULT!||
  windows: idResultP is always set to 0 (no longer true)
   idResultP will contain ifcOPENrESULT_EXISTED or 0 when i return
  os/2: idResultP will be set to a value that indicates what action was taken
 postP
 idAccessP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010015.ifcOPENaCCESS!||
 idShareP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010016.ifcOPENsHARE!||
 flagsDetailsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010011.flOPENdETAILS!||
 idHowP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010014.ifcOPENhOW!||
 flagsAttributeP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010010.flFILEaTTR!||
 cbP
  windows: must be 0
  os/2: the number of bytes to allocate when creating a new file
 cTriesP
  if 0 then will retry forever
  if not 0 then will try cTriesP times
*/
/**/

#if defined( NEVERdEFINED )

    #define LOG1020022(bFailP)                                                                                                        \
                                                                                                                                      \
        if( bFailP && !( pThird && F(pThird->flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) && tinP.pEther )                            \
            tinP.pEther->etherPutLogF( tinP , textC(tinP,TAG( TAGiDnULL ),flTEXTc_null,"1020022: could not open \"") + textC(tinP,TAG( TAGiDnULL ),flTEXTc_null,postP) + textC(tinP,TAG( TAGiDnULL ),flTEXTc_null,"\".") ) ;

#endif

/*1*/voidT thirdC::dosOpenIF( tinS& tinP , etherC* pEtherP , handleC& handleP , countT& idResultP , const osTextT* const postP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const countT cbP , countT cTriesP )/*1*/
{
    //LOGrAW( TF2(processGlobal1I.idAdamRoot,flFORMAT_NObIGITvALUES)+T(": dosOpenIF/")+T(postP)+T("/+\r\n") ) ;
    const osTextT* const postTag = ".!writing" ;
    const countT         costTag = thirdC::c_strlenIF( tinP , postTag ) ;

    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( ~handleP ) ;
        __( idResultP ) ;
        __Z( postP ) ;
        FV( flOPENdETAILS , flagsDetailsP ) ;
        __NZ( !( F(flagsDetailsP) & flOPENdETAILS_DOnOTvALIDATE ) && F(flagsDetailsP) & flOPENdETAILS_DOnOTrEGISTER ) ; // VALIDATION REQUIRES REGISTRATION SO THAT THE TAG FILE CAN BE DELETED WHEN THE HANDLE IS CLOSED
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HFILE ) || fnu ) ;
            __( sizeof( countT ) != sizeof( ULONG ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
            __( cbP ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_
    {
        thirdC* pThird = tinP.pEther ? &(thirdC&)*tinP.pEther : 0 ;
        if( !( F(flagsDetailsP) & flOPENdETAILS_DOnOTmAKEdIRiFnEEDED ) && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) && pThird && pThird->pEtherContainsMe && tinP.pPoolUse )
        {
            TN( tFile , ifFileNameC( tinP , *pThird , postP ) ) ;
            pThird->pEtherContainsMe->diskMakeDirIfNeededF( tinP , tFile ) ;
        }

        const flagsT flagsAccess    = openAccessOsFromIfIF( tinP , idAccessP ) ;
        const flagsT flagsShare     = openShareOsFromIfIF( tinP , idShareP ) ;
        const flagsT flagsDetails   = openDetailsOsFromIfIF( tinP , flagsDetailsP ) ;
        const countT how            = openHowOsFromIfIF( tinP , idHowP ) ;
        const flagsT flagsAttribute = fileAttrOsFromIfIF( tinP , flagsAttributeP ) ;

        OStEXT( ostoNameTag , TUCK << 1 )
        handleC hTag( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
        {
            if( !( F(flagsDetailsP) & flOPENdETAILS_DOnOTvALIDATE ) )
            {
                dosFileDeleteIfCorruptIF( tinP , postP ) ;

                if( pThird && !POOP )
                {
                    if( ( idAccessP == ifcOPENaCCESS_WR || idAccessP == ifcOPENaCCESS_W ) && !thirdC::c_strstrIF( tinP , postP , postTag ) )
                    {
                        OStEXTA(  ostoNameTag , postP ) ;
                        OStEXTA(  ostoNameTag , postTag ) ;
                        if( ostoNameTag.costF() > TUCK )    // OTHER CODE CAN ASSUME THAT THE FULL postTag IS IN THE NAME, BUT MAY NOT ASSUME THAT THE SUFFIX IS COMPLETE
                        {
                            OStEXT(   ostoSay , TUCK << 2 ) ;
                            OStEXTA(  ostoSay , "error: cannot create validation file because root file name is too long [costExcess,postP]:  " ) ;
                            OStEXTC(  ostoSay , ostoNameTag.costF() - TUCK , 0 ) ;
                            OStEXTAK( ostoSay , "    " ) ;
                            OStEXTA(  ostoSay , postP ) ;
                            OStEXTAK( ostoSay , "\r\n" ) ;

                            LOGrAW( ostoSay ) ;
                        }
                        else
                        {
                            OStEXTAK( ostoNameTag , "." ) ;
                            OStEXTC(  ostoNameTag , processGlobal1I.idAdamRoot , 0 ) ;
                            OStEXTAK( ostoNameTag , "." ) ;
                            OStEXTC(  ostoNameTag , tinP.monitor.idThread , 0 ) ;
                            OStEXTAK( ostoNameTag , "." ) ;
                            OStEXTC(  ostoNameTag , tinP.monitor.idStep , 0 ) ;
                            ostoNameTag.truncateF( TUCK ) ;

                            thirdC::dosOpenIF( tinP , pEtherP , hTag , countTC() , ostoNameTag , ifcOPENaCCESS_W , 0 , flOPENdETAILS_WRITEnOW | flOPENdETAILS_FAIL  , ifcOPENhOW_nCeF ) ;
                        }
                    }
                }
            }
    
            boolT bNoQuitEarly = !cTriesP ;
            {
                ZE( countT , cFail ) ;
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                do
                {
                    #ifdef __OS2__
        
                        ZE( HFILE , osh ) ;
                        BOS( WHATsfw , BOSfAIL , DosOpen( postP , &osh , (ULONG*)&idResultP , cbP , flagsAttribute , how , flagsAccess | flagsShare | flagsDetails , 0 ) )
                        rc = tinP.brcRaw ;
                        handleP.osF( ifcIDtYPEhANDLE_FILE , (countT)osh ) ;
        
                        if( rc ) handleP.closeIfF() ;
        
                    #elif defined( __NT__ )
        
                        ZE( countT , rc ) ;
                        {
                            SECURITYaTTRIBUTE_saUNRESTRICTED( 1 ) ; //U:: SET bInherit IN OBEDIENCE TO A PARAMETRIC FLAG
                            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                            BOS( WHATgbo , BOShANDLE , CreateFile( postP , flagsAccess , flagsShare , &sa , how , flagsDetails , 0 ) )
                            countT osh = tinP.brcRaw ;
                            BOSdOnOTtEST( WHATgbo , GetLastError() )
                            rc = tinP.brcRaw ;
                            handleP.osF( ifcIDtYPEhANDLE_FILE , osh ) ;
                        }

                        switch( idHowP )
                        {
                            case ifcOPENhOW_nFeO : { if( !rc ) idResultP = ifcOPENrESULT_EXISTED   ;                                                                                          break ; }
                            case ifcOPENhOW_nFeR : { if( !rc ) idResultP = ifcOPENrESULT_TRUNCATED ;                                                                                          break ; }
                            case ifcOPENhOW_nCeF : { if( !rc ) idResultP = ifcOPENrESULT_CREATED   ;                                                                                          break ; }
                            case ifcOPENhOW_nCeO : { if( !rc ) idResultP = ifcOPENrESULT_CREATED   ; else if( rc == ERROR_ALREADY_EXISTS ) { rc = 0 ; idResultP = ifcOPENrESULT_EXISTED   ; } break ; }
                            case ifcOPENhOW_nCeR : { if( !rc ) idResultP = ifcOPENrESULT_CREATED   ; else if( rc == ERROR_ALREADY_EXISTS ) { rc = 0 ; idResultP = ifcOPENrESULT_TRUNCATED ; } break ; }
                        }
        
                        if( rc ) handleP.closeIfF() ;
        
                        //OBSOLETED BY chatterF CALL WITHIN POOPR
                        //if( rc )
                        //{
                        //    CONoUTrAW3( "[rc]: " , rc , "\r\nfile: \"" ) ;
                        //    CONoUTrAW( postP ) ;
                        //    CONoUTrAW( "\"\r\n" ) ;
                        //}

                    #endif
        
                    if( pThird && F(pThird->flagsMode) & flTHIRDmODE_TESTaUTO ) break ;
        
                    if( !handleP && ( !cTriesP || cTriesP > 1 ) ) // thirdC::thPrimeIF( tinP ) IS NOT CHECKED HERE BECAUSE IT WOULD HANG IF I AM CALLED DURING TERMINATION, AFTER thPrimeIF HAS BEEN DESTROYED (THIS IS ALSO WHY I DO NOT LOG ANYTHING HERE)
                    {
                        OStEXT(   ostoSay , TUCK << 1 ) ;
                        OStEXTAK( ostoSay , "DosOpenIF/cannot open [postP] " ) ;
                        OStEXTC(  ostoSay , ++ cFail , 0 ) ;
                        OStEXTAK( ostoSay , ": \"" ) ;
                        OStEXTA(  ostoSay , postP ) ;
                        OStEXTAK( ostoSay , "\"\r\n" ) ;
                        LOGrAW(   ostoSay ) ;

                        ++ s ; dosSleepIF( tinP , TOCK ) ;
                    }
                }
                while( !POOP && !handleP && ( bNoQuitEarly || ( cTriesP && -- cTriesP ) ) ) ; // thirdC::thPrimeIF( tinP ) IS NOT CHECKED HERE BECAUSE IT WOULD HANG IF I AM CALLED DURING TERMINATION, AFTER thPrimeIF HAS BEEN DESTROYED
            }
    
            //LOG1020022( !handleP ) ;
            #ifdef __OS2__
                if( ~handleP ) idResultP = openResultIfFromOsIF( tinP , idResultP ) ;
                else          idResultP = 0 ;
            #endif

            //THIS DOES NOT WORK
            //if( tinP.bosFail && tinP.pPoop->flagsF() & flPOOP_SMELLY )
            //{
            //    OStEXT(   ostoSay , TUCK << 1 ) ;
            //    OStEXTAK( ostoSay , "dosOpenIF [brcLath,bNoQuitEarly,idAccessP,idShareP,postP]: " ) ;
            //    OStEXTC(  ostoSay , tinP.brcLath , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , bNoQuitEarly , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , idAccessP , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , idShareP , 0 ) ;
            //    OStEXTAK( ostoSay , " \"" ) ;
            //    OStEXTA(  ostoSay , postP ) ;
            //    OStEXTAK( ostoSay , "\"\r\n" ) ;
            //
            //    LOGrAW( ostoSay ) ;
            //}

            #if defined( __NT__ )
                switch( tinP.brcLath )
                {
                    case ERROR_SHARING_VIOLATION : { idResultP = ifcOPENrESULT_ERRORsHARINGvIOLATION ; break ; }
                }
            #endif

            BOSpOOP

            __Z( handleP ) ;
    
            //if( rc )
            //{
            //    OStEXT( ostoEntry , 0x80 )
            //    OStEXTAK( ostoEntry  , "thirdC::dosOpenIF: DosOpen failed with rc = " ) ;
            //    OStEXTC( ostoEntry  , rc , 0 ) ;
            //    OStEXTAK( ostoEntry  , " \"" ) ;
            //    OStEXTA( ostoEntry  , postP ) ;
            //    OStEXTAK( ostoEntry  , "\"" ) ;
            //    //U: LOG THIS ostoEntry
            //}
    
            if( tinP.pPoolUse && pThird && !POOP && !( F(flagsDetailsP) & flOPENdETAILS_DOnOTrEGISTER ) && ~hTag )
            {
                ZE( byteT* , pbz ) ;
                pThird->newF( tinP , LF , pbz , sizeof( fileOpenS ) ) ; ___( pbz ) ;  //U::LEAKS ; 20190129@1340: pbz IS (SOMETIMES? ALWAYS?) WRITTEN TO pSwFileOpen SO MIGHT OR MIGHT NOT BE A LEAK
                if( pbz )
                {
                    {
                        countT osh = handleP.osF( ifcIDtYPEhANDLE_FILE ) ;
                        handleP.resetF() ;
                        handleP.osF( ifcIDtYPEhANDLE_FILE , osh , 0 , flFILEhANDLEnOTE_OPENrEGISTERED ) ;
                    }

                    puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                    fileOpenS* pInfo = new( 0 , tinP , pbz , sizeof( fileOpenS ) ) fileOpenS( tinP , *pThird , postP , ostoNameTag.costF() ? (const osTextT*)ostoNameTag : 0 , idAccessP , idShareP , flagsDetailsP , idHowP , flagsAttributeP , cbP , hTag ) ;

                    __( !pInfo->hTag != !ostoNameTag.costF() ) ;
    
                    tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    tinP.pAdamGlobal1->_thirdC_.cLever_pSwFileOpen = handleP.osF( ifcIDtYPEhANDLE_FILE ) ;

                    //U::
                    if( !!*tinP.pAdamGlobal1->_thirdC_.pSwFileOpen )
                    {
                        fileOpenS* pInfoLag = (fileOpenS*)(countT)*tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ;
                        __NZ( pInfoLag ) ;
                    }
                    //U::__( !!*tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ) ;

                    if( !POOP ) *tinP.pAdamGlobal1->_thirdC_.pSwFileOpen = (countT)pInfo ;
                    else
                    {
                        DEL( pInfo ) ;
                        //pThird->delF( tinP , pbz ) ;
                    }
                    tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->ungrabF( tinP ) ;
                }
            }
        }

        if( ~hTag && !handleP )
        {
            hTag.closeIfF() ;
            BOS( WHATgbo , BOSoK , DeleteFile( ostoNameTag ) )
            BOSpOOP
        }
    }
    //LOGrAW( TF2(processGlobal1I.idAdamRoot,flFORMAT_NObIGITvALUES)+T(": dosOpenIF/")+T(postP)+T("/-\r\n") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001020.thirdc.dosopenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001023.thirdc.dosqueryfileinfoif BEGIN
#define DDNAME       "3func.35001023.thirdc.dosqueryfileinfoif"
#define DDNUMB      (countT)0x35001023
#define IDFILE      (countT)0xa00


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQueryFileInfoIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020025.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cd00104.1.1.0.html\"\>cd00104:  WAKEsHOW( "example.simplest.func.1020025.thirdC.dosQueryFileInfoIF" )\</A\>
arguments
 pInfoFileP
  can be 0
  if not 0 then must point to writeable memory
 handleP
*/
/**/

#ifdef __OS2__
    #define symACHnAME         achName
#elif defined( __NT__ )
    #define symACHnAME         cFileName
#endif

/*1*/voidT thirdC::dosQueryFileInfoIF( tinS& tinP , infoFileS*& pInfoFileP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HFILE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        FILESTATUS3 info ;
    #elif defined( __NT__ )
        BY_HANDLE_FILE_INFORMATION info ;
    #endif
    c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;

    #ifdef __OS2__
        BOSI( WHATsfr , BOSfAIL , DosQueryFileInfo( (HFILE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , FIL_STANDARD , &info , sizeof info ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOS( WHATsfr , BOSoK , GetFileInformationByHandle( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , &info ) )
        BOSpOOP
    #endif

    if( !POOP )
    {
        if( !pInfoFileP ) { pInfoFileP = new( 0 , tinP , LF ) infoFileS( tinP ) ; ___( pInfoFileP ) ; }
        else              c_memsetIF( tinP , (byteT*)pInfoFileP , sizeof( infoFileS ) ) ;
        __Z( pInfoFileP ) ;
    }

    if( !POOP )
    {
        #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.19000001.getFileInfo.h"
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001023.thirdc.dosqueryfileinfoif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001027.thirdc.dosquerysysinfomaxpathlengthif BEGIN
#define DDNAME       "3func.35001027.thirdc.dosquerysysinfomaxpathlengthif"
#define DDNUMB      (countT)0x35001027
#define IDFILE      (countT)0xa01


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQuerySysInfoMaxPathLengthIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020029.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ed00104.1.1.0.html\"\>ed00104:  WAKEsHOW( "example.simplest.func.1020029.thirdC.dosQuerySysInfoMaxPathLengthIF" )\</A\>
*/
/**/

/*1*/countT thirdC::dosQuerySysInfoMaxPathLengthIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , costMax ) ;
    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosQuerySysInfo( QSV_MAX_PATH_LENGTH , QSV_MAX_PATH_LENGTH , &costMax , sizeof costMax ) )
        BOSpOOP
        __( costMax < 2 ) ;
        if( !POOP ) costMax -- ;
        else       costMax = 0 ;
    #elif defined( __NT__ )
        costMax = (MAX_PATH) - 2 ; //20120411: MoveFile OBSERVED FAILING WHEN THE NEW NAME IS MAX_PATH - 1, SO EDITED THIS LINE TO REDUCE THE MAX BY 1
    #endif
    return costMax ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001027.thirdc.dosquerysysinfomaxpathlengthif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102b.thirdc.doswriteif BEGIN
#define DDNAME       "3func.3500102b.thirdc.doswriteif"
#define DDNUMB      (countT)0x3500102b
#define IDFILE      (countT)0xa02


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102002d.1.0.html\"\>definition\</A\>
it is illegal to write to stdout or to stderr
arguments
 handleP
 pbP
 cbP
*/
/**/

/*1*/voidT thirdC::dosWriteIF( tinS& tinP , const handleC& handleP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HFILE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_
    countT cbr = cbP ;
    if( !cbr ) cbr = c_strlenIF( tinP , pbP ) ;
    #ifdef __OS2__
        ZE( ULONG , cba ) ;
        BOS( WHATsfw , BOSfAIL , DosWrite( (HFILE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , (voidT*)pbP , cbr , &cba ) )
        BOSpOOP
    #elif defined( __NT__ )

        ZE( DWORD , cba ) ;
        BOSnOvALUE( WHATsfw , SetLastError( 0 ) )
        BOS( WHATsfw , BOSoK , WriteFile( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , pbP , cbr , &cba , 0 ) )
        BOSpOOP

        if( POOP )
        {
            if( tinP.pAdamGlobal1->_thirdC_.pSwFileOpen )
            {
                puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->grabF( tinP , TAG( TAGiDnULL ) ) ;
                tinP.pAdamGlobal1->_thirdC_.cLever_pSwFileOpen = handleP.osh ;
                fileOpenS* pInfo = (fileOpenS*)(countT)*tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ;
                if( pInfo ) pInfo->flagsAtClose |= flFILEaTcLOSE_DELETE ;
                tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->ungrabF( tinP ) ;
            }
        }

    #endif
    __( cba != cbr ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102b.thirdc.doswriteif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102c.thirdc.dosreleasemutexsemif BEGIN
#define DDNAME       "3func.3500102c.thirdc.dosreleasemutexsemif"
#define DDNUMB      (countT)0x3500102c
#define IDFILE      (countT)0xa03


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReleaseMutexSemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102002e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6d00104.1.1.0.html\"\>6d00104:  WAKEsHOW( "example.simplest.func.102002e.thirdC.dosReleaseMutexSemIF" )\</A\>
works even if impotent, as long as handleP is not ze
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosReleaseMutexSemIF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL    
    {
        //if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HMTX ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        //if( POOP ) return ;
    }

    _IO_

    if( ~handleP )
    {
        #ifdef __OS2__
            BOSdOnOTtEST( WHATgbo , DosReleaseMutexSem( (HMTX)handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE ) ) )
            if( tinP.brcRaw && tinP.brcRaw != ERROR_INVALID_HANDLE ) //U:MYSTERY: 19970520.0830: APPEARS TO BE SPURIOUS
            {
                __( tinP.brcRaw ) ;
                __1
            }
        #elif defined( __NT__ )

            BOS( WHATgbo , BOSoK , ReleaseMutex( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE ) ) )
            BOSpOOP

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102c.thirdc.dosreleasemutexsemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102d.thirdc.dosrequestmutexsemif BEGIN
#define DDNAME       "3func.3500102d.thirdc.dosrequestmutexsemif"
#define DDNUMB      (countT)0x3500102d
#define IDFILE      (countT)0xa04


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosRequestMutexSemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102002f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7d00104.1.1.0.html\"\>7d00104:  WAKEsHOW( "example.simplest.func.102002f.thirdC.dosRequestMutexSemIF" )\</A\>
blocks even if impotent as long as handleP is nonze
does nothing if called during the processing of a message handler that was invoked by "send" from another thread
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosRequestMutexSemIF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL    
    {
        //if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HMTX ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        //if( POOP ) return ;
    }

    _IO_
    if( ~handleP )
    {
        #ifdef __OS2__

            do
            {
                BOSdOnOTtEST( WHATgbo , DosRequestMutexSem( (HMTX)handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE ) , 500 ) )
                if( tinP.brcRaw != ERROR_INVALID_HANDLE ) //U:MYSTERY: 19970520.0830: APPEARS TO BE SPURIOUS
                {
                    __( tinP.brcRaw ) ;
                    __1 ;
                }
            }
            while( /*!( POOP & ~fliEC_QUITTING ) &&*/ tinP.brcRaw == ERROR_TIMEOUT ) ;

        #elif defined( __NT__ )

            do
            {
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOSdOnOTtEST( WHATgbo , WaitForSingleObject( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_MUTEXsEMAPHORE ) , 500 ) )
                if( tinP.brcRaw == WAIT_FAILED )
                {
                    BOSdOnOTtEST( WHATgbo , GetLastError() )
                    countT rc = tinP.brcRaw ;
                    __( rc ) ;
                    __1 ;
                }
            }
            while( tinP.brcRaw == WAIT_TIMEOUT ) ;

        #endif
        __( tinP.brcRaw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500102d.thirdc.dosrequestmutexsemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001030.thirdc.dossleepif BEGIN
#define DDNAME       "3func.35001030.thirdc.dossleepif"
#define DDNUMB      (countT)0x35001030
#define IDFILE      (countT)0xa05


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSleepIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020032.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4e00104.1.1.0.html\"\>4e00104:  WAKEsHOW( "example.simplest.func.1020032.thirdC.dosSleepIF" )\</A\>
if i remain potent, the calling thread sleeps for timeP time by sleeping for a sequence of "naps"
if during that interval i become impotent, i return as soon as the current nap ends
arguments
 timeP
  can be 0
  if 0 then TOCK is implied
 timeNapP
  can be 0
  if 0 then TUCK * 0x40 is implied
*/
/**/

/*1*/voidT thirdC::dosSleepIF( tinS& tinP , const countT timeP , const countT timeNapP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    sleepC::blammoIfIF( tinP ) ;

    //if( !tinP.pc Utility[ 0 ] && timeP && tinP.pEther )
    //    etherC::etRockIF( tinP ).traceF( tinP , T("nonze sleep for time ")+TF2(timeP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

    countT tAll = timeP    ? timeP    : TOCK ;
    countT tNap = timeNapP ? timeNapP : TUCK * 0x40 ;
    countT tRem = tAll ;
    while( tRem && !POOP )
    {
        countT tNow = tNap < tRem ? tNap : tRem ;

        countT ms = msFromTimeIF( tinP , tNow , 0 ) ;
        #ifdef __OS2__
            BOSS( WHATsn , BOSfAIL , DosSleep( ms ) )
            BOSpOOP
        #elif defined( __NT__ )
            //CONoUTrAW( "s7") ; //U::
            BOSnOvALUE( if( ms ) WHATsn else WHATsy , OSsLEEPf( ms ) )
        #endif

        tRem -= tNow ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001030.thirdc.dossleepif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500103d.thirdc.s_setupif BEGIN
#define DDNAME       "3func.3500103d.thirdc.s_setupif"
#define DDNUMB      (countT)0x3500103d
#define IDFILE      (countT)0xa06


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_setupIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020042.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ce00104.1.1.0.html\"\>ce00104:  WAKEsHOW( "example.simplest.func.1020042.thirdC.s_setupIF" )\</A\>
this function has no effect on OS/2
*/
/**//*1*/voidT thirdC::s_setupIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
    #elif defined( __NT__ )
        WSADATA info ;
        BOSS( WHATgbo , BOSfAIL , WSAStartup( 0x0202 , &info ) )  //20201220@1630: CHANGED FROM 0x0101
        BOSpOOP
        tinP.pAdamGlobal1->_thirdC_.cbDatagramMax = info.iMaxUdpDg ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500103d.thirdc.s_setupif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500103e.thirdc.s_shutdown2if BEGIN
#define DDNAME       "3func.3500103e.thirdc.s_shutdown2if"
#define DDNUMB      (countT)0x3500103e
#define IDFILE      (countT)0xa07


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_shutdown2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020043.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.de00104.1.1.0.html\"\>de00104:  WAKEsHOW( "example.simplest.func.1020043.thirdC.s_shutdown2IF" )\</A\>
this function has no effect on OS/2
*/
/**//*1*/voidT thirdC::s_shutdown2IF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        BOSS( WHATgbo , BOSfAIL , WSACleanup() )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500103e.thirdc.s_shutdown2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001041.thirdc.dosallocmemif BEGIN
#define DDNAME       "3func.35001041.thirdc.dosallocmemif"
#define DDNUMB      (countT)0x35001041
#define IDFILE      (countT)0xa08


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosAllocMemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020046.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4f00104.1.1.0.html\"\>4f00104:  WAKEsHOW( "example.simplest.func.1020046.thirdC.dosAllocMemIF" )\</A\>
arguments
 pvP
  must be 0
 cbP
  must not be 0
  specify the number of bytes desired
   example: 0x1000 * sizeof( countT )
    this example specifies that the memory must be exactly large enough to hold 0x1000 countT objects
*/
/**//*1*/voidT thirdC::dosAllocMemIF( tinS& tinP , voidT*& pvP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pvP ) ;
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosAllocMem( &pvP , cbP , PAG_COMMIT | PAG_EXECUTE | PAG_READ | PAG_WRITE ) )
        BOSpOOP
        if( POOP ) pvP = 0 ;
    #elif defined( __NT__ )
        BOS( WHATgbo , BOSoK , GlobalAlloc( 0 , cbP ) )
        BOSpOOP
        pvP = (voidT*)tinP.brcRaw ;
    #endif
    osTraceWrongNodeIF( tinP , (byteT*)pvP , "dosAllocMemIF: pvP" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001041.thirdc.dosallocmemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001042.thirdc.dosbeepif BEGIN
#define DDNAME       "3func.35001042.thirdc.dosbeepif"
#define DDNUMB      (countT)0x35001042
#define IDFILE      (countT)0xa09


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosBeepIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020047.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6f00104.1.1.0.html\"\>6f00104:  WAKEsHOW( "example.simplest.func.1020047.thirdC.dosBeepIF" )\</A\>
arguments
 hzP
 timeP
*/
/**/

/*1*/voidT thirdC::dosBeepIF( tinS& tinP , const countT hzP , const countT timeP )/*1*/
{
    thirdC* pThird = tinP.pEther ? &(thirdC&)*tinP.pEther : 0 ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    processGlobal4I._thirdC_bBeep.grabF( tinP , TAG( TAGiDnULL ) ) ;

    _IO_
        #ifdef __OS2__

            BOSdOnOTtEST( WHATgbo , DosBeep( hzP , msFromTimeIF( tinP , timeP , 0 ) ) )

        #elif defined( __NT__ )

            BOSdOnOTtEST( WHATgbo , Beep( hzP , msFromTimeIF( tinP , timeP , 0 ) ) )

        #endif

    processGlobal4I._thirdC_bBeep.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001042.thirdc.dosbeepif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001043.thirdc.dosfreememif BEGIN
#define DDNAME       "3func.35001043.thirdc.dosfreememif"
#define DDNUMB      (countT)0x35001043
#define IDFILE      (countT)0xa0a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosFreeMemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020048.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5f00104.1.1.0.html\"\>5f00104:  WAKEsHOW( "example.simplest.func.1020048.thirdC.dosFreeMemIF" )\</A\>
arguments
 pvP
*/
/**/

/*1*/voidT thirdC::dosFreeMemIF( tinS& tinP , voidT*& pvP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        if( !POOP ) __Z( pvP ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosFreeMem( pvP ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOS( WHATgbo , BOSfAIL , GlobalFree( (HGLOBAL)pvP ) )
        BOSpOOP
    #endif
    pvP = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001043.thirdc.dosfreememif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001044.thirdc.secondsfromtimeif BEGIN
#define DDNAME       "3func.35001044.thirdc.secondsfromtimeif"
#define DDNUMB      (countT)0x35001044
#define IDFILE      (countT)0xa0b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$secondsFromTimeIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020049.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 time1P
 time2P
*/
/**//*1*/countT thirdC::secondsFromTimeIF( tinS& tinP , const countT time1P , const sCountT time2P )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    measureT days = time1P ;
    days /= 256 ; // TUCKS
    days /= 256 ; // TOCKS
    days /= 256 ; // TICKS
    days /= 256 ; // DAYS
    days += time2P ;
    return days * 86400.0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001044.thirdc.secondsfromtimeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001045.thirdc.doserrormsgbox_offif BEGIN
#define DDNAME       "3func.35001045.thirdc.doserrormsgbox_offif"
#define DDNUMB      (countT)0x35001045
#define IDFILE      (countT)0xa0c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosErrorMsgBox_offIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102004a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8f00104.1.1.0.html\"\>8f00104:  WAKEsHOW( "example.simplest.func.102004a.thirdC.dosErrorMsgBox_offIF" )\</A\>
arguments
*/

/**/

/*1*/voidT thirdC::dosErrorMsgBox_offIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        BOSI( WHATgbo , BOSfAIL , DosError( FERR_DISABLEHARDERR | FERR_DISABLEEXCEPTION ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSdOnOTtEST( WHATgbo , SetErrorMode( SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX | SEM_NOGPFAULTERRORBOX ) )
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001045.thirdc.doserrormsgbox_offif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001046.thirdc.doserrormsgbox_onif BEGIN
#define DDNAME       "3func.35001046.thirdc.doserrormsgbox_onif"
#define DDNUMB      (countT)0x35001046
#define IDFILE      (countT)0xa0d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosErrorMsgBox_onIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102004b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7f00104.1.1.0.html\"\>7f00104:  WAKEsHOW( "example.simplest.func.102004b.thirdC.dosErrorMsgBox_onIF" )\</A\>
arguments
*/
/**//*1*/voidT thirdC::dosErrorMsgBox_onIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        BOSI( WHATgbo , BOSfAIL , DosError( FERR_ENABLEHARDERR | FERR_ENABLEEXCEPTION ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSdOnOTtEST( WHATgbo , SetErrorMode( 0 ) )
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001046.thirdc.doserrormsgbox_onif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001048.thirdc.dosopeneventsem2if BEGIN
#define DDNAME       "3func.35001048.thirdc.dosopeneventsem2if"
#define DDNUMB      (countT)0x35001048
#define IDFILE      (countT)0xa0e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosOpenEventSem2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102004e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol anywhere
it is illegal to refer to this symbol in the definition of an adam
arguments
 handleP
 postP
 fGivenP
*/
/**//*1*/boolT thirdC::dosOpenEventSem2IF( tinS& tinP , handleC& handleP , const osTextT* const postP , const boolT fGivenP )/*1*/
{
    ZE( countT* , pcb ) ; *pcb = 0 ;

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , fCreator ) ;

    #ifdef __OS2__

        ZE( osTextT* , post ) ;
        if( postP )
        {
            OStEXTC( postPrefix , "\\sem32\\" )
            BOSdOnOTtEST( WHATgbo , strlen( postPrefix ) )
            countT c1 = tinP.brcRaw ;
            BOSdOnOTtEST( WHATgbo , strlen( postP ) )
            newF( tinP , LF , post , c1 + tinP.brcRaw + 1 ) ; ___( post ) ;
            OStEXTA( post  , postPrefix ) ;
            OStEXTA( post  , postP ) ;
        }
        {
            countT cntTries = 10 ;
            while( cntTries -- )
            {
                fCreator = 1 ;
                ZE( HEV , osh ) ;
                BOSdOnOTtEST( WHATgbo , DosCreateEventSem( post , &osh , 0 , fGivenP ) )
                handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE , (countT)osh ) ;

                if( tinP.brcRaw == ERROR_DUPLICATE_NAME )
                {
                    fCreator = 0 ;
                    ZE( boolT , bOk ) ;
                    ZE( HEV , osh ) ;
                    BOSdOnOTtEST( WHATgbo , DosOpenEventSem( post , &osh ) )
                    bOk = !tinP.brcRaw ;
                    handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE , (countT)osh ) ;
                    if( bOk ) break ;
                }
                else
                {
                    __( tinP.brcRaw ) ;
                }
            }

            __Z( handleP ) ;
        }
        delF( tinP , post ) ;

    #elif defined( __NT__ )

        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
        BOS( WHATgbo , BOSoK , CreateEvent( &sa , 1 , fGivenP , postP ) )
        BOSpOOP
        handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE , tinP.brcRaw ) ;
        __Z( handleP ) ;
        if( !POOP )
        {
            BOSdOnOTtEST( WHATgbo , GetLastError() )
            fCreator = ERROR_ALREADY_EXISTS != tinP.brcRaw ;
        }

    #endif
    return fCreator ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001048.thirdc.dosopeneventsem2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001049.thirdc.doscloseeventsem2if BEGIN
#define DDNAME       "3func.35001049.thirdc.doscloseeventsem2if"
#define DDNUMB      (countT)0x35001049
#define IDFILE      (countT)0xa0f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCloseEventSem2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102004f.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 handleP
*/
/**//*1*/voidT thirdC::dosCloseEventSem2IF( tinS& tinP , handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__

        BOSI( WHATgbo , BOSfAIL , DosCloseEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        BOSpOOP
        handleP = 0 ;

    #elif defined( __NT__ )

        handleP.closeIfF() ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001049.thirdc.doscloseeventsem2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104a.thirdc.fileattrosfromifif BEGIN
#define DDNAME       "3func.3500104a.thirdc.fileattrosfromifif"
#define DDNUMB      (countT)0x3500104a
#define IDFILE      (countT)0xa10


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$fileAttrOsFromIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020050.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the flFILEaTTR_ symbolic constants
arguments
 iffP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010010.flFILEaTTR!||
*/
/**/

/*1*/flagsT thirdC::fileAttrOsFromIfIF( tinS& tinP , flagsT iffP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( flagsT , osf ) ;
    #if defined( __OS2__ )
        if( F(iffP) & flFILEaTTR_NORMAL     ) osf |= FILE_NORMAL               ;
        if( F(iffP) & flFILEaTTR_READoNLY   ) osf |= FILE_READONLY             ;
        if( F(iffP) & flFILEaTTR_HIDDEN     ) osf |= FILE_HIDDEN               ;
        if( F(iffP) & flFILEaTTR_SYSTEM     ) osf |= FILE_SYSTEM               ;
        if( F(iffP) & flFILEaTTR_DIRECTORY  ) osf |= FILE_DIRECTORY            ;
        if( F(iffP) & flFILEaTTR_COMPRESSED ) osf |= 0                         ;
        if( F(iffP) & flFILEaTTR_ARCHIVE    ) osf |= FILE_ARCHIVED             ;
    #elif defined( __NT__ )
        if( F(iffP) & flFILEaTTR_NORMAL     ) osf |= FILE_ATTRIBUTE_NORMAL     ;
        if( F(iffP) & flFILEaTTR_READoNLY   ) osf |= FILE_ATTRIBUTE_READONLY   ;
        if( F(iffP) & flFILEaTTR_HIDDEN     ) osf |= FILE_ATTRIBUTE_HIDDEN     ;
        if( F(iffP) & flFILEaTTR_SYSTEM     ) osf |= FILE_ATTRIBUTE_SYSTEM     ;
        if( F(iffP) & flFILEaTTR_DIRECTORY  ) osf |= 0                         ;
        if( F(iffP) & flFILEaTTR_COMPRESSED ) osf |= FILE_ATTRIBUTE_COMPRESSED ;
        if( F(iffP) & flFILEaTTR_ARCHIVE    ) osf |= FILE_ATTRIBUTE_ARCHIVE    ;
    #endif
    return osf ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104a.thirdc.fileattrosfromifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104b.thirdc.fileattriffromosif BEGIN
#define DDNAME       "3func.3500104b.thirdc.fileattriffromosif"
#define DDNUMB      (countT)0x3500104b
#define IDFILE      (countT)0xa11


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$fileAttrIfFromOsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020051.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the flFILEaTTR_ symbolic constants
arguments
 osfP
  os/2
   FILE_NORMAL
   FILE_READONLY
   FILE_HIDDEN
   FILE_SYSTEM
   FILE_DIRECTORY
   FILE_ARCHIVED
  windows
   FILE_ATTRIBUTE_NORMAL
   FILE_ATTRIBUTE_READONLY
   FILE_ATTRIBUTE_HIDDEN
   FILE_ATTRIBUTE_SYSTEM
   FILE_ATTRIBUTE_COMPRESSED
   FILE_ATTRIBUTE_ARCHIVE
*/
/**/

/*1*/flagsT thirdC::fileAttrIfFromOsIF( tinS& tinP , flagsT osfP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( flagsT , iff ) ;
    #if defined( __OS2__ )
        if( osfP & FILE_NORMAL               ) iff |= flFILEaTTR_NORMAL     ;
        if( osfP & FILE_READONLY             ) iff |= flFILEaTTR_READoNLY   ;
        if( osfP & FILE_HIDDEN               ) iff |= flFILEaTTR_HIDDEN     ;
        if( osfP & FILE_SYSTEM               ) iff |= flFILEaTTR_SYSTEM     ;
        if( osfP & FILE_DIRECTORY            ) iff |= flFILEaTTR_DIRECTORY  ;
        if( osfP & 0                         ) iff |= flFILEaTTR_COMPRESSED ;
        if( osfP & FILE_ARCHIVED             ) iff |= flFILEaTTR_ARCHIVE    ;
    #elif defined( __NT__ )
        if( osfP & FILE_ATTRIBUTE_NORMAL     ) iff |= flFILEaTTR_NORMAL     ;
        if( osfP & FILE_ATTRIBUTE_READONLY   ) iff |= flFILEaTTR_READoNLY   ;
        if( osfP & FILE_ATTRIBUTE_HIDDEN     ) iff |= flFILEaTTR_HIDDEN     ;
        if( osfP & FILE_ATTRIBUTE_SYSTEM     ) iff |= flFILEaTTR_SYSTEM     ;
        if( osfP & FILE_ATTRIBUTE_DIRECTORY  ) iff |= flFILEaTTR_DIRECTORY  ;
        if( osfP & FILE_ATTRIBUTE_COMPRESSED ) iff |= flFILEaTTR_COMPRESSED ;
        if( osfP & FILE_ATTRIBUTE_ARCHIVE    ) iff |= flFILEaTTR_ARCHIVE    ;
    #endif
    return iff ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104b.thirdc.fileattriffromosif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104c.thirdc.openresultiffromosif BEGIN
#define DDNAME       "3func.3500104c.thirdc.openresultiffromosif"
#define DDNUMB      (countT)0x3500104c
#define IDFILE      (countT)0xa12


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openResultIfFromOsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020052.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the ifcOPENrESULT symbolic constants
arguments
 osrP
*/
/**/

/*1*/countT thirdC::openResultIfFromOsIF( tinS& tinP , countT osrP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , ifr ) ;
    #if defined( __OS2__ )
             if( osrP == FILE_EXISTED   ) ifr = ifcOPENrESULT_EXISTED ;
        else if( osrP == FILE_CREATED   ) ifr = ifcOPENrESULT_CREATED ;
        else if( osrP == FILE_TRUNCATED ) ifr = ifcOPENrESULT_TRUNCATED ;
    #elif defined( __NT__ )
        countT foo = osrP ;
    #endif
    return ifr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104c.thirdc.openresultiffromosif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104d.thirdc.openhowosfromifif BEGIN
#define DDNAME       "3func.3500104d.thirdc.openhowosfromifif"
#define DDNUMB      (countT)0x3500104d
#define IDFILE      (countT)0xa13


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openHowOsFromIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020053.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the ifcOPENhOW symbolic constants
arguments
 ifcP
*/
/**/

/*1*/countT thirdC::openHowOsFromIfIF( tinS& tinP , countT ifcP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , osc ) ;
    #if defined( __OS2__ )
             if( ifcP == ifcOPENhOW_nFeO ) osc = OPEN_ACTION_FAIL_IF_NEW   | OPEN_ACTION_OPEN_IF_EXISTS    ;
        else if( ifcP == ifcOPENhOW_nFeR ) osc = OPEN_ACTION_FAIL_IF_NEW   | OPEN_ACTION_REPLACE_IF_EXISTS ;
        else if( ifcP == ifcOPENhOW_nCeF ) osc = OPEN_ACTION_CREATE_IF_NEW | OPEN_ACTION_FAIL_IF_EXISTS    ;
        else if( ifcP == ifcOPENhOW_nCeO ) osc = OPEN_ACTION_CREATE_IF_NEW | OPEN_ACTION_OPEN_IF_EXISTS    ;
        else if( ifcP == ifcOPENhOW_nCeR ) osc = OPEN_ACTION_CREATE_IF_NEW | OPEN_ACTION_REPLACE_IF_EXISTS ;
    #elif defined( __NT__ )
             if( ifcP == ifcOPENhOW_nFeO ) osc = OPEN_EXISTING             ;
        else if( ifcP == ifcOPENhOW_nFeR ) osc = TRUNCATE_EXISTING         ;
        else if( ifcP == ifcOPENhOW_nCeF ) osc = CREATE_NEW                ;
        else if( ifcP == ifcOPENhOW_nCeO ) osc = OPEN_ALWAYS               ;
        else if( ifcP == ifcOPENhOW_nCeR ) osc = CREATE_ALWAYS             ;
    #endif
    return osc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104d.thirdc.openhowosfromifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104e.thirdc.openaccessosfromifif BEGIN
#define DDNAME       "3func.3500104e.thirdc.openaccessosfromifif"
#define DDNUMB      (countT)0x3500104e
#define IDFILE      (countT)0xa14


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openAccessOsFromIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020054.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the ifcOPENaCCESS symbolic constants
arguments
 ifcP
*/
/**/

/*1*/countT thirdC::openAccessOsFromIfIF( tinS& tinP , countT ifcP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , osc ) ;
    #if defined( __OS2__ )
             if( ifcP == ifcOPENaCCESS_W  ) osc = OPEN_ACCESS_WRITEONLY ;
        else if( ifcP == ifcOPENaCCESS_WR ) osc = OPEN_ACCESS_READWRITE ;
        else if( ifcP == ifcOPENaCCESS_R  ) osc = OPEN_ACCESS_READONLY ;
    #elif defined( __NT__ )
             if( ifcP == ifcOPENaCCESS_W  ) osc = GENERIC_WRITE ;
        else if( ifcP == ifcOPENaCCESS_WR ) osc = GENERIC_WRITE | GENERIC_READ ;
        else if( ifcP == ifcOPENaCCESS_R  ) osc = GENERIC_READ ;
    #endif
    return osc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104e.thirdc.openaccessosfromifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104f.thirdc.openshareosfromifif BEGIN
#define DDNAME       "3func.3500104f.thirdc.openshareosfromifif"
#define DDNUMB      (countT)0x3500104f
#define IDFILE      (countT)0xa15


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openShareOsFromIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020055.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the ifcOPENsHARE symbolic constants
arguments
 ifcP
*/
/**/

/*1*/countT thirdC::openShareOsFromIfIF( tinS& tinP , countT ifcP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , osc ) ;
    #if defined( __OS2__ )
             if( ifcP == ifcOPENsHARE_W  ) osc = OPEN_SHARE_DENYREAD ;
        else if( ifcP == ifcOPENsHARE_WR ) osc = OPEN_SHARE_DENYNONE ;
        else if( ifcP == ifcOPENsHARE_R  ) osc = OPEN_SHARE_DENYWRITE ;
        else                              osc = OPEN_SHARE_DENYREADWRITE ;
    #elif defined( __NT__ )
             if( ifcP == ifcOPENsHARE_W  ) osc = FILE_SHARE_WRITE ;
        else if( ifcP == ifcOPENsHARE_WR ) osc = FILE_SHARE_WRITE | FILE_SHARE_READ ;
        else if( ifcP == ifcOPENsHARE_R  ) osc = FILE_SHARE_READ ;
    #endif
    return osc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500104f.thirdc.openshareosfromifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001050.thirdc.opendetailsosfromifif BEGIN
#define DDNAME       "3func.35001050.thirdc.opendetailsosfromifif"
#define DDNUMB      (countT)0x35001050
#define IDFILE      (countT)0xa16


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openDetailsOsFromIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020056.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the flOPENdETAILS symbolic constants
bits in iffP that are not intended to specify os bits are ignored
arguments
 iffP
*/
/**/

/*1*/countT thirdC::openDetailsOsFromIfIF( tinS& tinP , countT iffP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , osf )
    #if defined( __OS2__ )
        if( F(iffP) & flOPENdETAILS_WRITEnOW  ) osf |= OPEN_FLAGS_WRITE_THROUGH ;
        if( F(iffP) & flOPENdETAILS_FAIL      ) osf |= OPEN_FLAGS_FAIL_ON_ERROR ;
        if( F(iffP) & flOPENdETAILS_NOcACHE   ) osf |= OPEN_FLAGS_NO_CACHE ;
        if( F(iffP) & flOPENdETAILS_LOCnONE   ) osf |= OPEN_FLAGS_NO_LOCALITY ;
        if( F(iffP) & flOPENdETAILS_LOCsEQ    ) osf |= OPEN_FLAGS_SEQUENTIAL ;
        if( F(iffP) & flOPENdETAILS_LOCrANDOM ) osf |= OPEN_FLAGS_RANDOM ;
        if( F(iffP) & flOPENdETAILS_LOCrANsEQ ) osf |= OPEN_FLAGS_RANDOMSEQUENTIAL ;
        if( !( F(iffP) & flOPENdETAILS_INHERIT ) ) osf |= OPEN_FLAGS_NOINHERIT ;
    #elif defined( __NT__ )
        if( F(iffP) & flOPENdETAILS_WRITEnOW  ) osf |= FILE_FLAG_WRITE_THROUGH ;
        if( F(iffP) & flOPENdETAILS_TEMPORARY ) osf |= FILE_FLAG_DELETE_ON_CLOSE ;
        if( F(iffP) & flOPENdETAILS_NOcACHE   ) osf |= FILE_FLAG_NO_BUFFERING ;
        if( F(iffP) & flOPENdETAILS_LOCrANDOM ) osf |= FILE_FLAG_RANDOM_ACCESS ;
        if( F(iffP) & flOPENdETAILS_LOCrANsEQ ) osf |= FILE_FLAG_SEQUENTIAL_SCAN ;
        if( F(iffP) & flOPENdETAILS_BUMPkEY   ) osf |= FILE_FLAG_BACKUP_SEMANTICS ;
        //NOINHERIT FLAG IS NOT SUPPORTED BY NT

    #endif
    return osf ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001050.thirdc.opendetailsosfromifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001051.thirdc.c_beginthreadif BEGIN
#define DDNAME       "3func.35001051.thirdc.c_beginthreadif"
#define DDNUMB      (countT)0x35001051
#define IDFILE      (countT)0xa17


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_beginthreadIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020057.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
creates a new thread of execution
the new thread inherits the priority of the calling thread
cAllKidThreadsI or tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads is incremented
the thread must decrement this counter just before ending
 to do this, pass a reference to the thread so it can decrement
 example
  countT& cc = third.os_cAllKidThreadsI_IF( tinP )
  then cc can be passed to the thread
arguments
 tidP
 tmFP
 pvP
 cbStackP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100f6.flTHREADlAUNCH!||
*/
/**/

//DUPLICATED CODE: 1020057 1610008
#ifdef __OS2__
    typedef voidT (OSF *tmfosFT)( ULONG argP ) ;
#elif defined( __NT__ )
    typedef ULONG (OSF *tmfosFT)( voidT* argP ) ;
#endif

/*1*/voidT thirdC::c_beginthreadIF( tinS& tinP , countT& tidP , voidT* const tmFP , voidT* pvP , const countT cbStackP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        FV( flTHREADlAUNCH , flagsP )
        __( tidP ) ;
        __Z( tmFP ) ;
        __Z( cbStackP ) ;
        __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
        if( POOP ) return ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( TID ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( DWORD ) || fnu ) ;
            __( sizeof( countT ) != sizeof( ULONG ) || fnu ) ;
        #endif
            __( !( F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) ) ;
        if( POOP ) return ;
    }

    _IO_

    //U::PROVIDE A PARAMETER OR PERHAPS A PROCESS MODE TO ENABLE THIS OVERRUN PROTECTION
    {
        //sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        //while( !POOP && tinP.pAdamGlobal1->_thirdC_.cAllKidThreads > 0x100 ) { ++ s ; dosSleepWinkIF( tinP ) ; }
    }

    third_flagsProcessStateI_IF( tinP , flPROCESSsTATE_MAINtHREADiSaLONE , 0 ) ;
    if( F(flagsP) & flTHREADlAUNCH_ORPHAN ) inc02AM( tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads ) ;
    else
    {
        inc02AM( tinP.pAdamGlobal1->_thirdC_.cAllKidThreads ) ;
        inc02AM( tinP.cKidThreads ) ;
    }

    //CONoUTrAW3( "c_beginThreadIF [cThreadsWatched] <-- " , 1 + incv02AM( tinP.pAdamGlobal1->cThreadsWatched ) , "\r\n" ) ;
    inc02AM( tinP.pAdamGlobal1->cThreadsWatched ) ;

    //PSEUDODUPLICATED CODE: 1020057 1610003

    #ifdef __OS2__

        BOSI( WHATgbo , BOSfAIL , DosCreateThread( (ULONG*)&tidP , (tmfosFT)tmFP , (ULONG)pvP , 0 , cbStackP ) )
        BOSpOOP
        __Z( tidP ) ;

    #elif defined( __NT__ )

        {
            handleC hThread( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            BOSdOnOTtEST( WHATgbo , GetCurrentThread() )
            BOS( WHATgbo , BOStHREADERcODE , GetThreadPriority( (HANDLE)tinP.brcRaw ) )
            BOSpOOP
            if( !POOP )
            {
                int idp = tinP.brcRaw ;
                SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )

                BOS( WHATgbo , BOSoK , CreateThread( &sa , cbStackP , (tmfosFT)tmFP , pvP , CREATE_SUSPENDED , (ULONG*)&tidP ) )
                BOSpOOP

                if( !POOP )
                {
                    hThread.osF( ifcIDtYPEhANDLE_THREAD , (countT)tinP.brcRaw ) ;
                    __Z( hThread ) ;
        
                    //20170213@1456: COMMENTED OUT WITHOUT ANALYSIS TO PERHAPS FIX UNEXPECTED PROCESSOR AFFINITY FOR KERNEL1_MONITOR ADAM
                    //{
                    //    countT idType = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS || etherC::ifc_idHomeIdisk_IF() < 0x100
                    //        ? ifcIDtYPEtHREAD_WORKhORSE
                    //        : tinP.pAdamGlobal1->idCell < 3
                    //            ? ifcIDtYPEtHREAD_KERNEL
                    //            : F(flagsP) & flTHREADlAUNCH_SHOWpONY
                    //                ? ifcIDtYPEtHREAD_SHOWpONY
                    //                : ifcIDtYPEtHREAD_WORKhORSE
                    //    ;
                    //
                    //    thirdC::osSelectProcessorsIF( tinP , idType , &hThread ) ;
                    //}
        
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATgbo , BOSoK , SetThreadPriority( (HANDLE)hThread.osF( ifcIDtYPEhANDLE_THREAD ) , idp ) )
                    BOSpOOP
        
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATgbo , BOSmAXcOUNTT , ResumeThread( (HANDLE)hThread.osF( ifcIDtYPEhANDLE_THREAD ) ) )
                    BOSpOOP
                    __( tinP.brcRaw != 1 ) ;
        
                    if( tidP && tidP != - 1 )
                    {
                        //U::A: tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        //U::A: tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
                        //U::A: *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle = hThread.osF( ifcIDtYPEhANDLE_THREAD ) ;
                        //U::A: tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
                        //U::A: hThread.resetF() ;
                    }
                }
            }
        }

    #endif

    __( tidP == - 1 ) ;
    if( POOP && tidP ) tidP = 0 ;

    if( POOP )
    {
        if( F(flagsP) & flTHREADlAUNCH_ORPHAN ) dec02AM( tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads ) ;
        else
        {
            dec02AM( tinP.pAdamGlobal1->_thirdC_.cAllKidThreads ) ;
            dec02AM( tinP.cKidThreads ) ; //ADDED RECENTLY CAUSE ABSENCE SEEMED TO BE A BUG
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001051.thirdc.c_beginthreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001052.thirdc.dosposteventsem2if BEGIN
#define DDNAME       "3func.35001052.thirdc.dosposteventsem2if"
#define DDNUMB      (countT)0x35001052
#define IDFILE      (countT)0xa18


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosPostEventSem2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020058.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
this function does not do -anything- after calling the os to post the semaphore
 a thread that calls this can then end immediately
this instruction has no effect if already set
unfinished: is this true for Windows?
the sign is always given, even if this etherC object is impotent
 this ensures that kid threads waiting for a sign will not hang forever when impotence occurs
  see, for example, a130104, which would otherwise hang forever when the busC server is down
impotence has no effect on this function
arguments
 handleP
*/
/**//*1*/voidT thirdC::dosPostEventSem2IF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        //c0.5f@55.42: if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        //c0.5f@55.42: if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__

        BOSdOnOTtEST( WHATgbo , DosPostEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        //countT tinP.brcRaw = DosPostEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) ;
        __( tinP.brcRaw && tinP.brcRaw != ERROR_ALREADY_POSTED ) ;

    #elif defined( __NT__ )

        BOSdOnOTtEST( WHATgbo , SetEvent( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        //U: DOES SetEvent RETURN AN ERROR CODE IF THE EVENT IS ALREADY SET?

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001052.thirdc.dosposteventsem2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001053.thirdc.doswaiteventsem2if BEGIN
#define DDNAME       "3func.35001053.thirdc.doswaiteventsem2if"
#define DDNUMB      (countT)0x35001053
#define IDFILE      (countT)0xa19


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWaitEventSem2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020059.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
impotence has no effect on this function
arguments
 handleP
*/
/**//*1*/voidT thirdC::dosWaitEventSem2IF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        //c0.5f@55.42: if( POOP ) return ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        //c0.5f@55.42: if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        do
        {
            BOSdOnOTtEST( WHATso , DosWaitEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) , 500 ) )
        }
        while( /*!POOP &&*/ tinP.brcRaw == ERROR_TIMEOUT ) ;
    #elif defined( __NT__ )
        do
        {
            BOSnOvALUE( WHATso , SetLastError( 0 ) )
            BOS( WHATso , BOSwAITcODE , WaitForSingleObject( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) , INFINITE ) )
        }
        while( /*!POOP &&*/ tinP.brcRaw == WAIT_TIMEOUT ) ;
    #endif
    BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001053.thirdc.doswaiteventsem2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001054.thirdc.dosreseteventsem2if BEGIN
#define DDNAME       "3func.35001054.thirdc.dosreseteventsem2if"
#define DDNUMB      (countT)0x35001054
#define IDFILE      (countT)0xa1a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosResetEventSem2IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
if already reset, then this instruction has no effect
impotence has no effect on this function
arguments
 handleP
*/
/**//*1*/voidT thirdC::dosResetEventSem2IF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        //c0.5f@55.42: if( POOP ) return ;
        if( !POOP )
        {
            __Z( handleP ) ;
            ZE( boolT , fnu ) ;
            #ifdef __OS2__
                __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
            #elif defined( __NT__ )
                __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
            #endif
        }
        //c0.5f@55.42: if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        ZE( countT , cntGiven ) ;
        BOSI( WHATgbo , BOSfAIL , DosResetEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) , (ULONG*)&cntGiven ) )
        BOSpOOP
        __( tinP.brcRaw && tinP.brcRaw != ERROR_ALREADY_RESET ) ;
    #elif defined( __NT__ )
        BOS( WHATgbo , BOSoK , ResetEvent( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        BOSpOOP
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001054.thirdc.dosreseteventsem2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500105b.thirdc.dosallocsharedmemif BEGIN
#define DDNAME       "3func.3500105b.thirdc.dosallocsharedmemif"
#define DDNUMB      (countT)0x3500105b
#define IDFILE      (countT)0xa1b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosAllocSharedMemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020061.1.0.html\"\>definition\</A\>
arguments
 handleP
 postP
  must be less than 240 bytes
  cannot contain slash ('/') or backslash ('\\')
 cbP
*/
/**/

/*1*/voidT thirdC::dosAllocSharedMemIF( tinS& tinP , handleC& handleP , const osTextT* const postP , const handleC* phFileP , const countT cbP , const countT idMemorySpaceP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        #if defined( __NT__ )
            { ZE( boolT , foo ) ; __( !foo && sizeof(countT) != sizeof(HANDLE) ) ;  }
        #endif
        __Z( postP ) ;
        if( POOP ) return ;
        __( !*postP ) ;
        //__( !!thirdC::c_strchrIF( tinP , postP , '/' ) ) ;
        __( !!thirdC::c_strchrIF( tinP , postP , '\\' ) ) ;
        __( COSToSfILEnAMEmAX < thirdC::c_strlenIF( tinP , postP ) ) ;
        __( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL2MONITOR && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL1DRIVER ) ;
        __( phFileP && F(flagsP) & flOPENsHAREDmEMORY_DOnOTcOMMIT ) ;
        FV(flOPENsHAREDmEMORY,flagsP) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    countT cbw = cbP ;
    if( !cbw ) cbw = 0x100000 ;
    ZE( voidT* , pv ) ;

    #ifdef __OS2__

        OStEXT( ostoName , COSToSfILEnAMEmAX + 11 )
        OStEXTAK( ostoName  , "\\sharemem\\" ) ;
        OStEXTA( ostoName  , postP ) ;

        BOSI( WHATgbo , BOSfAIL , DosAllocSharedMem( &pv , ostoName , cbw , PAG_COMMIT | PAG_EXECUTE | PAG_READ | PAG_WRITE ) )
        BOSpOOP
        if( POOP ) pv = 0 ;

    #elif defined( __NT__ )

        ZE( boolT , bSystem ) ;
        {
            char postUser[ 0x100 ] ;
            DWORD costaUser = sizeof postUser ;

            BOS( WHATgbo , BOSoK , GetUserName( postUser , &costaUser ) )
            BOSpOOP
    
            BOSdOnOTtEST( WHATgbo , strcmp( postUser , "SYSTEM" ) )
            if( !POOP && !tinP.brcRaw ) bSystem = 1 ;
        }

        osTextT* postPrefix = bSystem && c_strstrIF( tinP , postP , "napSlab" )

            ?  "Global\\ideafarm.domains.com.ideafarm.1."
            :          "ideafarm.domains.com.ideafarm.1."
        ;

        //CODEsYNC: DUPLICATE CODE 1020061 1020068
        OStEXT(   ostoOsName , COSTnAPKINnAMEmAX + 1 )
        OStEXTA(  ostoOsName  , postPrefix ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLuSERS         ) { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTA(  ostoOsName , thirdC::postUserNameIF() ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLhOMES         ) { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTC(  ostoOsName , processGlobal1I.idAdamRoot == ifcIDaDAM_TOOLnAPwORDvIEWER && tinP.pAdamGlobal1->_thirdC_.idHomeOverride ? tinP.pAdamGlobal1->_thirdC_.idHomeOverride : processGlobal1I.idHome , 0 ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLmEMORYsPACES )  { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTCF( ostoOsName , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        OStEXTA(  ostoOsName  , postP ) ;
        c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostoOsName , '/' , '.' ) ;

        if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.grabF( tinP , TAG( TAGiDnULL ) ) ;

        {
            for( countT offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
            {
                if( !c_strcmpIF( tinP , processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName , ostoOsName ) )
                {
                    __1 ;
                    break ;
                }
            }
        }

        if( phFileP && !POOP ) //20140410@0950: ADDED THIS VALIDATION OF FILE SIZE ; WILL NEED TO MAKE THIS VALIDATION OPTIONAL IF EVER WANT TO MEMORY MAP ONLY A PORTION OF A FILE
        {                      //ADDED BECAUSE bookC CONTAINED AN UNDETECTED BUG INVOLVING AN EXISTING FILE MAPPED TO A SMALL NAPKIN, WITH APPLICATION CODE RELYING UPON THE LENGTH AS DECLARED WITHIN A HEADER WITHIN THE FILE, CAUSING AN A.V. EXCEPTION DUE TO THE ERRONEOUSLY SMALL NAPKIN
            infoFileS info( tinP ) ;
            infoFileS* pInfo = &info ;
            thirdC::dosQueryFileInfoIF( tinP , pInfo , *phFileP ) ;

            if( ( info.cbUsed || info.cbUsedHigh ) && ( info.cbUsed != cbw || info.cbUsedHigh ) ) { BLAMMO ; } //BLAMMO BECAUSE TYPICALLY CALLING CODE WILL ASSUME THAT IMPOTENCE IS DUE TO TEMPORARY UNAVAILABILITY OF MEMORY
        }

        if( !POOP )
        {
            SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;

            flagsT osFlagsOpen = F(flagsP) & flOPENsHAREDmEMORY_READoNLY
                ? PAGE_READONLY
                : PAGE_READWRITE
            ;

            if( F(flagsP) & flOPENsHAREDmEMORY_DOnOTcOMMIT ) osFlagsOpen |= SEC_RESERVE ;


            BOS( WHATgbo , BOSoK , CreateFileMappingNuma( (voidT*)( phFileP ? phFileP->osF( ifcIDtYPEhANDLE_FILE ) : -1 ) , &sa , osFlagsOpen , 0 , cbw , ostoOsName , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
            BOSpOOP

            if( !POOP )
            {
                HANDLE osh = (HANDLE)tinP.brcRaw ;

                const flagsT osFlagsMap = F(flagsP) & flOPENsHAREDmEMORY_READoNLY
                    ? FILE_MAP_READ
                    : FILE_MAP_ALL_ACCESS
                ;

                //if( tinP.pc Utility[ 0 ] )
                //{
                //    OStEXT(   ostoSay , TUCK << 2 ) ;
                //    OStEXTAK( ostoSay , "dosAllocSharedMemIF [idAdam,cbP,cbw,osh,postP]: " ) ;
                //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , 0 ) ;
                //    OStEXTAK( ostoSay , " " ) ;
                //    OStEXTC(  ostoSay , cbP , 0 ) ;
                //    OStEXTAK( ostoSay , " " ) ;
                //    OStEXTC(  ostoSay , cbw , 0 ) ;
                //    OStEXTAK( ostoSay , " " ) ;
                //    OStEXTC(  ostoSay , tinP.brcRaw , 0 ) ;
                //    OStEXTAK( ostoSay , " \"" ) ;
                //    OStEXTA(  ostoSay , postP ) ;
                //    OStEXTAK( ostoSay , "\"\r\n" ) ;
                //    
                //    CONoUTrAW( ostoSay ) ;
                //    LOGrAW(    ostoSay ) ;
                //}

                BOS( WHATgbo , BOSoK , MapViewOfFileExNuma( osh , osFlagsMap , 0 , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                BOSpOOP
                if( POOP )
                {
                    BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                    BOSpOOP
                    osh = 0 ;

                    BOSdOnOTtEST( WHATgbo , GetLastError() )
                    //CONoUTrAW3( "DosAllocSharedMem: MapViewOfFileExNuma returned " , tinP.brcRaw , "\r\n" ) ;
                    //LOGrAW3( "DosAllocSharedMem: MapViewOfFileExNuma returned " , tinP.brcRaw , "\r\n" ) ;
                }
                else
                {
                    voidT* pv = (voidT*)tinP.brcRaw ;

                    //U:: THE NEXT LINE, WHEN NOT COMMENTED OUT, WAS NOT REPORTED BY LINT
                    //__( IsBadReadPtr( pv , 1 ) ) ; //U::ELIMINATE USE OF THIS FUNCTION AS ADVISED BY MSDN (CAN TRIP A GUARD PAGE)
    
                    if( POOP )
                    {
                        BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                        BOSpOOP
                        osh = 0 ;
                    }
                    else
                    {
                        //if( tinP.pc Utility[ 0 ] )
                        //if( thirdC::c_strstrIF( tinP , ostoOsName , "napSlab" ) )
                        //{
                        //    OStEXT(   ostoLog , TUCK << 2 ) ;
                        //    OStEXTC(  ostoLog , pv , ' ' ) ;
                        //    OStEXTAK( ostoLog , " NEW: " ) ;
                        //    OStEXTA(  ostoLog , ostoOsName ) ;
                        //    OStEXTAK( ostoLog , "\r\n" ) ;
                        //    CONoUTrAW(  ostoLog ) ;
                        //}

                        //DUPLICATED CODE: 1020068 1020061 1020132
                        {
                            ZE( countT , offr ) ;
                            for( offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
                            {
                                if( !*processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName )
                                {
                                    thirdC::c_strncpyIF( tinP , processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName , ostoOsName , sizeof processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName ) ;
                                    processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh = (countT)osh ;
                                    processGlobal1I._thirdC_pSharedMemInfo[ offr ].pv  = pv ;
                                    break ;
                                }
                            }
                            if( offr == CsHAREDmEMiNFO ) { BLAMMO ; }
                        }
            
                        handleP.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , (countT)osh , 0 , (countT)pv ) ;

                        //if( thirdC::c_strstrIF( ostoOsName , "grabMemorySpaceC" ) )
                        //{
                        //    OStEXT( os , TUCK << 1 ) ;
                        //    OStEXTAK( os , "new: \"" ) ;
                        //    OStEXTA(  os , ostoOsName ) ;
                        //    OStEXTAK( os , "\"\r\n" ) ;
                        //    CONoUTrAW( os ) ;
                        //}
                    }
                }
            }
        }

        if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.ungrabF( tinP ) ;

    #endif

    osTraceWrongNodeIF( tinP , (byteT*)handleP.cNoteF() , "dosAllocSharedMemIF: cNote" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500105b.thirdc.dosallocsharedmemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001061.thirdc.dosgetsharedmemif BEGIN
#define DDNAME       "3func.35001061.thirdc.dosgetsharedmemif"
#define DDNUMB      (countT)0x35001061
#define IDFILE      (countT)0xa1c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetSharedMemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020068.1.0.html\"\>definition\</A\>
opens an existing allocation of shared memory
the memory must already be allocated and named
the name must not contain slash ('/') or backslash ('\\')
the name must be less than 240 bytes
arguments
 pvP
 handleP
 postP
*/
/**/

/*1*/voidT thirdC::dosGetSharedMemIF( tinS& tinP , handleC& handleP , const osTextT* const postP , const countT idMemorySpaceP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        #if defined( __NT__ )
            { ZE( boolT , foo ) ; __( !foo && sizeof(countT) != sizeof(HANDLE) ) ;  }
        #endif
        __Z( postP ) ;
        __( ~handleP ) ;
        if( POOP ) return ;
        __( !*postP ) ;
        //__( !!thirdC::c_strchrIF( tinP , postP , '/' ) ) ;
        __( !!thirdC::c_strchrIF( tinP , postP , '\\' ) ) ;
        __( COSToSfILEnAMEmAX < thirdC::c_strlenIF( tinP , postP ) ) ;
        __( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL2MONITOR && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL1DRIVER ) ;
        FV(flOPENsHAREDmEMORY,flagsP) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__

        ZE( voidT* , pv ) ;
        OStEXT( ostoName , COSToSfILEnAMEmAX + 11 )
        OStEXTAK( ostoName  , "\\sharemem\\" ) ;
        OStEXTA( ostoName  , postP ) ;
        BOSI( WHATgbo , BOSfAIL , DosGetNamedSharedMem( &pv , ostoName , PAG_EXECUTE | PAG_READ | PAG_WRITE ) )
        BOSpOOP
        if( POOP ) pv = 0 ;
        if( !POOP ) handleP.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , handleP.hInvalid + 1 , 0 , (countT)pv ) ;

    #elif defined( __NT__ )

        osTextT* postPrefix = c_strstrIF( tinP , postP , "napSlab" )

            ?  "Global\\ideafarm.domains.com.ideafarm.1."
            :          "ideafarm.domains.com.ideafarm.1."
        ;

        //CODEsYNC: DUPLICATE CODE 1020061 1020068
        OStEXT(   ostoOsName , COSTnAPKINnAMEmAX + 1 )
        OStEXTA(  ostoOsName  , postPrefix ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLuSERS         ) { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTA(  ostoOsName , thirdC::postUserNameIF() ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLhOMES         ) { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTC(  ostoOsName , processGlobal1I.idAdamRoot == ifcIDaDAM_TOOLnAPwORDvIEWER && tinP.pAdamGlobal1->_thirdC_.idHomeOverride ? tinP.pAdamGlobal1->_thirdC_.idHomeOverride : processGlobal1I.idHome , 0 ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        if( F(flagsP) & flOPENsHAREDmEMORY_ALLmEMORYsPACES )  { OStEXTAK( ostoOsName  , "_" ) ; }
        else                                                  { OStEXTCF( ostoOsName , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ; }
        OStEXTAK( ostoOsName  , "." ) ;
        OStEXTA(  ostoOsName  , postP ) ;
        c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostoOsName , '/' , '.' ) ;

        const flagsT osFlagsMap = F(flagsP) & flOPENsHAREDmEMORY_READoNLY
            ? FILE_MAP_READ
            : FILE_MAP_ALL_ACCESS
        ;

        if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.grabF( tinP , TAG( TAGiDnULL ) ) ;

        {
            for( countT offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
            {
                if( !c_strcmpIF( tinP , processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName , ostoOsName ) )
                {
                    __( !processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh ) ;
                    __( !processGlobal1I._thirdC_pSharedMemInfo[ offr ].pv ) ;
                    ZE( HANDLE , osh ) ;
                    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
                    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
                    BOS( WHATgbo , BOSoK , DuplicateHandle( oshMe , (HANDLE)processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh , oshMe , &osh , 0 , 1 , DUPLICATE_SAME_ACCESS ) )
                    BOSpOOP
                    if( POOP )
                    {
                        BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                        BOSpOOP
                        osh = 0 ;
                    }
                    else
                    {
                        BOS( WHATgbo , BOSoK , MapViewOfFileExNuma( osh , osFlagsMap , 0 , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                        BOSpOOP
                        if( POOP )
                        {
                            BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                            BOSpOOP
                            osh = 0 ;
                        }
                        else handleP.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , (countT)osh , 0 , tinP.brcRaw ) ;
                    }
                    break ;
                }
            }
        }

        if( !POOP && !handleP )
        {
            SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;

            BOS( WHATgbo , BOSoK , OpenFileMapping( osFlagsMap , 0 , ostoOsName ) )
            THREADmODE1oN( flTHREADmODE1_QUIETiMPOTENCE )
            BOSpOOP
            THREADmODE1rESTORE

            if( !POOP )
            {
                HANDLE osh = (HANDLE)tinP.brcRaw ;

                //if( tinP.pc Utility[ 0 ] )
                //{
                //    OStEXT(   ostoSay , TUCK << 2 ) ;
                //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , 0 ) ;
                //    OStEXTAK( ostoSay , " \"" ) ;
                //    OStEXTA(  ostoSay , postP ) ;
                //    OStEXTAK( ostoSay , "\" dosGetSharedMemIF OpenFileMapping [osh]: " ) ;
                //    OStEXTC(  ostoSay , tinP.brcRaw , 0 ) ;
                //    OStEXTAK( ostoSay , "\r\n" ) ;
                //    
                //    CONoUTrAW( ostoSay ) ;
                //    LOGrAW(    ostoSay ) ;
                //}
    
                BOS( WHATgbo , BOSoK , MapViewOfFileExNuma( osh , osFlagsMap , 0 , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                BOSpOOP
                if( POOP )
                {
                    BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                    BOSpOOP
                    osh = 0 ;

                    BOSdOnOTtEST( WHATgbo , GetLastError() )
                    CONoUTrAW3( "DosGetSharedMem: MapViewOfFileExNuma returned " , tinP.brcRaw , "\r\n" ) ;
                    LOGrAW3( "DosGetSharedMem: MapViewOfFileExNuma returned " , tinP.brcRaw , "\r\n" ) ;
                }
                else
                {
                    voidT* pv = (voidT*)tinP.brcRaw ;

                    //U:: THE NEXT LINE, WHEN NOT COMMENTED OUT, WAS NOT REPORTED BY LINT
                    //__( IsBadReadPtr( pv , 1 ) ) ;
    
                    if( POOP )
                    {
                        BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
                        BOSpOOP
                        osh = 0 ;
                    }
                    else
                    {
                        //if( tinP.pc Utility[ 0 ] )
                        //if( thirdC::c_strstrIF( tinP , ostoOsName , "napSlab" ) )
                        //{
                        //    OStEXT(   ostoLog , TUCK << 2 ) ;
                        //    OStEXTC(  ostoLog , pv , ' ' ) ;
                        //    OStEXTAK( ostoLog , " old: " ) ;
                        //    OStEXTA(  ostoLog , ostoOsName ) ;
                        //    OStEXTAK( ostoLog , "\r\n" ) ;
                        //    CONoUTrAW(  ostoLog ) ;
                        //}
        
                        //DUPLICATED CODE: 1020068 1020061 1020132
                        {
                            ZE( countT , offr ) ;
                            for( offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
                            {
                                if( !*processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName )
                                {
                                    thirdC::c_strncpyIF( tinP , processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName , ostoOsName , sizeof processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName ) ;
                                    processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh = (countT)osh ;
                                    processGlobal1I._thirdC_pSharedMemInfo[ offr ].pv  = pv ;
                                    break ;
                                }
                            }
                            if( offr == CsHAREDmEMiNFO ) { BLAMMO ; }
                        }
            
                        handleP.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , (countT)osh , 0 , (countT)pv ) ;

                        //if( thirdC::c_strstrIF( ostoOsName , "grabMemorySpaceC" ) )
                        //{
                        //    OStEXT( os , TUCK << 1 ) ;
                        //    OStEXTAK( os , "old: \"" ) ;
                        //    OStEXTA(  os , ostoOsName ) ;
                        //    OStEXTAK( os , "\"\r\n" ) ;
                        //    CONoUTrAW( os ) ;
                        //}
                    }
                }
            }
        }

        if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.ungrabF( tinP ) ;

    #endif

    osTraceWrongNodeIF( tinP , (byteT*)handleP.cNoteF() , "dosGetSharedMemIF: cNote" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001061.thirdc.dosgetsharedmemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001062.thirdc.ostimeaddif BEGIN
#define DDNAME       "3func.35001062.thirdc.ostimeaddif"
#define DDNUMB      (countT)0x35001062
#define IDFILE      (countT)0xa1d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeAddIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020069.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.db00104.1.1.0.html\"\>db00104:  WAKEsHOW( "example.simplest.func.1020069.thirdC.osTimeAddIF" )\</A\>
adds timeB to timeA, placing the result into timeA
arguments
 timeA1P
 timeA2P
 timeB1P
 timeB2P
*/
/**/

/*1*/voidT thirdC::osTimeAddIF( tinS& tinP , countT& timeA1P , sCountT& timeA2P , const countT timeB1P , const sCountT timeB2P )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return ;
    }

    // THE FOLLOWING APPEARS TO WORK FOR ALL SIGN CASES.  I DO NOT HAVE A DEEP UNDERSTANDING OF WHY IT WORKS,
    // BUT IT APPEARS TO REFLECT THE BEAUTIFUL WAY THAT OVERFLOW AND 2''S COMPLEMENT STORAGE FOR NEGATIVE
    // NUMBERS WORK TOGETHER.

    _IO_

    countT timeA1old = timeA1P ;
    timeA1P += timeB1P ;
    timeA2P += timeB2P ;
    if( timeA1P < timeA1old ) timeA2P ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001062.thirdc.ostimeaddif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001064.thirdc.ostimefromoldtimeif BEGIN
#define DDNAME       "3func.35001064.thirdc.ostimefromoldtimeif"
#define DDNUMB      (countT)0x35001064
#define IDFILE      (countT)0xa1e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeFromOldTimeIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102006b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ab00104.1.1.0.html\"\>ab00104:  WAKEsHOW( "example.simplest.func.102006b.thirdC.osTimeFromOldTimeIF" )\</A\>
calculates city time from conventional calendar time
 this function correctly accounts for leap years and leap centuries
  a year is a leap year if, and only if, !(Y%4) && ( !!(Y%100) || ( Y && !(Y%400) ) )
time2P will be set to the number of complete days since Jesus's conventional time of birth
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
all paramters are specified as ze based offsets
arguments
 time1P
 time2P
 yP
  the number of complete years since Jesus's conventional time of birth
   example: for a time during the year 2010_9, set yP to 2009_9
  set yP = 0 for a time in the first year of our lord
  set yP = -1 for a time in the last year before our lord
  the domain of this parameter is unrestricted; any value can be specified
 mP
  the number of complete months after yP since Jesus's conventional time of birth
  the domain of this parameter is [0,11]
 dP
  the number of complete days after yP mP since Jesus's conventional time of birth
  the domain of this parameter is [0,30] for mP in { 0 , 2 , 4 , 6 , 7 , 9 , b }
  the domain of this parameter is [0,29] for mP in { 3 , 5 , 8 , a }
  the domain of this parameter is [0,28] for mP 1 in a leap year
  the domain of this parameter is [0,27] for mP 1 in a nonleap year
 hhP
  the number of complete hours after yP dP since Jesus's conventional time of birth
  the domain of this parameter is [0,23]
 mmP
  the number of complete minutes after yP dP hhP since Jesus's conventional time of birth
  the domain of this parameter is [0,59]
 ssP
  the number of complete seconds after yP dP hhP mmP since Jesus's conventional time of birth
  the domain of this parameter is [0,59]
 msP
  the number of complete milliseconds after yP dP hhP mmP ssP since Jesus's conventional time of birth
  the domain of this parameter is [0,999]
*/
/**/

/*1*/voidT thirdC::osTimeFromOldTimeIF( tinS& tinP , countT& time1P , sCountT& time2P , sCountT yP , countT mP , countT dP , countT hhP , countT mmP , countT ssP , countT msP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return ;

        // THE OFF OF "Jan 1, 0000" IS 0
        // THE OFF OF "Dec 31,  -1" IS -1
        // ALL PARAMETERS ARE ASSUMED TO BE OFFSETS (E.G. TIMES WITHIN YEAR OF OUR LORD 1997 WOULD HAVE yP=1996)
        // NOTE THAT mP, dP, ETC ARE UNSIGNED; THEY ARE OFFSETS FROM THE BEGINNING OF THE YEAR, EVEN IF THE YEAR IS NEGATIVE
        // yP: [-inf,inf] (yP=0 INDICATES A TIME IN THE FIRST YEAR OF OUR LORD
        // mP: [0,11]
        // dP: [0,30]
        // hhP: [0,23]
        // mmP: [0,59]
        // ssP: [0,59]
        // msP: [0,999]

        __( time1P ) ;
        __( time2P ) ;
        __(  mP >  11 ) ;
        switch( mP )
        {
            case 1 :
            {
                __(  dP > 27 + bLeapYearF( yP ) ) ;
                break ;
            }
            case   3 :
            case   5 :
            case   8 :
            case 0xa :
            {
                __(  dP > 29 ) ;
                break ;
            }
            default :
            {
                __(  dP > 30 ) ;
                break ;
            }
        }
        __( hhP >  23 ) ;
        __( mmP >  59 ) ;
        __( ssP >  59 ) ;
        __( msP > 999 ) ;
        FV( flOStIMEfROMoLDtIME , flagsP ) ;

        if( POOP ) return ;
    }

    _IO_

    SYSTEMTIME utc ;
    if( F(flagsP) & flOStIMEfROMoLDtIME_OLDtIMEiSutc )
    {
        utc.wYear           = (WORD)yP  ;
        utc.wMonth          = (WORD)mP  ;
        utc.wDayOfWeek      = (WORD)0   ;
        utc.wDay            = (WORD)dP  ;
        utc.wHour           = (WORD)hhP ;
        utc.wMinute         = (WORD)mmP ;
        utc.wSecond         = (WORD)ssP ;
        utc.wMilliseconds   = (WORD)msP ;
    }
    else
    {
        SYSTEMTIME local ;
        local.wYear         = (WORD)( yP + 1 ) ;
        local.wMonth        = (WORD)( mP + 1 ) ;
        local.wDayOfWeek    = (WORD)0 ;
        local.wDay          = (WORD)( dP + 1 ) ;
        local.wHour         = (WORD)hhP ;
        local.wMinute       = (WORD)mmP ;
        local.wSecond       = (WORD)ssP ;
        local.wMilliseconds = (WORD)msP ;
        thirdC::c_memsetIF( tinP , (byteT*)&utc , sizeof utc ) ;
        BOS( WHATgbo , BOSoK , TzSpecificLocalTimeToSystemTime( 0 , &local , &utc ) ) ;
        BOSpOOP

        utc.wYear  -- ;
        utc.wMonth -- ;
        utc.wDay   -- ;
    }

    if( !POOP )
    {
        ZE( sCountT , offDOY ) ;
        {
            offDOY = utc.wDay ;
            if( utc.wMonth >  0 ) { offDOY += 31 ; // WE ARE AFTER JAN
            if( utc.wMonth >  1 ) { offDOY += 28 + bLeapYearF( utc.wYear ) ; // WE ARE AFTER FEB
            if( utc.wMonth >  2 ) { offDOY += 31 ; // WE ARE AFTER MAR
            if( utc.wMonth >  3 ) { offDOY += 30 ; // WE ARE AFTER APR *
            if( utc.wMonth >  4 ) { offDOY += 31 ; // WE ARE AFTER MAY
            if( utc.wMonth >  5 ) { offDOY += 30 ; // WE ARE AFTER JUN *
            if( utc.wMonth >  6 ) { offDOY += 31 ; // WE ARE AFTER JUL
            if( utc.wMonth >  7 ) { offDOY += 31 ; // WE ARE AFTER AUG
            if( utc.wMonth >  8 ) { offDOY += 30 ; // WE ARE AFTER SEP *
            if( utc.wMonth >  9 ) { offDOY += 31 ; // WE ARE AFTER OCT
            if( utc.wMonth > 10 ) { offDOY += 30 ; // WE ARE AFTER NOV *
            } } } } } } } } } } }
        }

        // NUMBER OF LEAP DAYS BETWEEN NOW AND TIME 0, EXCLUDING THIS YEAR
        sCountT cld = utc.wYear/4 - utc.wYear/100 + utc.wYear/400 ;

        time2P = 365 * utc.wYear + cld + offDOY ;

        // TIME ELAPSED TODAY
        ZE( countT , timeToday1 ) ;
        ZE( sCountT , timeToday2 ) ;
        timeFromMsIF( tinP , timeToday1 , timeToday2 , 60*60*1000*utc.wHour + 60*1000*utc.wMinute + 1000*utc.wSecond + utc.wMilliseconds ) ;
        osTimeAddIF( tinP , time1P , time2P , timeToday1 , timeToday2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001064.thirdc.ostimefromoldtimeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001066.thirdc.c_systemif BEGIN
#define DDNAME       "3func.35001066.thirdc.c_systemif"
#define DDNUMB      (countT)0x35001066
#define IDFILE      (countT)0xa1f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_systemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102006d.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
executes the specified command, using the operating system's command parser
use of this instruction is discouraged
 this function might be removed
 this function might not work on some operating systems
 this function might not work for some commands
arguments
 postP
*/
/**/

/*1*/countT thirdC::c_systemIF( tinS& tinP , osTextT* postP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    boolT bOk = !c_strcmpIF( tinP , "cls" , postP ) || !( F(thirdC::third_flagsModeAdam1I_IF(tinP)) & flADAMmODE1_QUIETcONSOLE ) ;

    ZE( countT , rc ) ;
    if( bOk )
    {
        BOSdOnOTtEST( WHATgbo , system( postP ) ) //CAN RETURN AN ERROR CODE IF THE CONSOLE WINDOW HAS JUST BEEN KILLED
        rc = tinP.brcRaw ;
    }

    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001066.thirdc.c_systemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001069.thirdc.timefrommsif BEGIN
#define DDNAME       "3func.35001069.thirdc.timefrommsif"
#define DDNUMB      (countT)0x35001069
#define IDFILE      (countT)0xa20


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$timeFromMsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020071.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
calculates time units from milliseconds
time2P will be set to the number of days
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
arguments
 time1P
 time2P
 msP
*/
/**/

/*1*/voidT thirdC::timeFromMsIF( tinS& tinP , countT& time1P , sCountT& time2P , const countT msP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    countT ms = msP % 86400000 ;
    countT da = msP / 86400000 ;

    time1P = ms * (measureT)( 256 * 256 * 256 ) * 256.0 / 86400000.0 ; // FACTOR IS: TIMES PER DAY / MS PER DAY
    time2P = da ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001069.thirdc.timefrommsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500106a.thirdc.timefromsecondsif BEGIN
#define DDNAME       "3func.3500106a.thirdc.timefromsecondsif"
#define DDNUMB      (countT)0x3500106a
#define IDFILE      (countT)0xa21


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$timeFromSecondsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020072.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
calculates time units from seconds
time2P will be set to the number of days
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
arguments
 time1P
 time2P
 sP
*/
/**/

/*1*/voidT thirdC::timeFromSecondsIF( tinS& tinP , countT& time1P , sCountT& time2P , const countT sP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    countT ss = sP % 86400 ;
    countT da = sP / 86400 ;

    time1P = ss * (measureT)( 256 * 256 * 256 ) * 256.0 / 86400.0 ; // FACTOR IS: TIMES PER DAY / SS PER DAY
    time2P = da ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500106a.thirdc.timefromsecondsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001076.thirdc.dospriorityif BEGIN
#define DDNAME       "3func.35001076.thirdc.dospriorityif"
#define DDNUMB      (countT)0x35001076
#define IDFILE      (countT)0xa22


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosPriorityIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020080.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4010104.1.1.0.html\"\>4010104:  WAKEsHOW( "example.simplest.func.1020080.thirdC.dosPriorityIF" )\</A\>
sets the priority of the current thread
 on operating systems that use "process priority", i will also set the process priority
  on windows, will also affect the priority of other threads in the process
   windows implements the concept of "process priority"
   a thread's priority is determined by both the thread priority setting and by the process priority in effect
   i handle this by setting both the thread priority and the process priority
   table: effective thread priority (excluding dynamic boosts) for windows
   | 
   | how to read this table:
   |  windows assigns a "base priority" that is a number in [1-f1]
   |  the leftmost column indicates the result of calling me
   |  the oo'th column indicates the base priority number that windows assigns to the thread
   |  the re'th column is copied from the windows programmers' reference information in the toolkit
   |  example
   |   calling me specifying IDLE
   |    this initially results in my thread being assigned priority 1
   |    my thread will remain at 1 even if another thread calls me specifying NORMAL or RUSH
   |    but if another thread calls me specifying RUDE, all threads that i have assigned IDLE will be changed from 1 to 01
   |    after that happens, if i am called specifying IDLE, NORMAL, or RUSH, then all of the IDLE threads will drop back from 01 to 1
   |  example
   |   calling me specifying RUSH
   |    this initially results in my thread being assigned priority f
   |    my thread will remain at f until another thread calls me
   |    if another thread then calls me specifying RUDE, all RUSH threads will be changed from f to a1
   |    if another thread then calls me specifying IDLE, all RUSH threads will be changed from a1 to 6
   |    if another thread then calls me specifying NORMAL, all RUSH threads will be changed from 6 to either b or 9
   |     they will be changed to b iff the process is in the foreground (e.g. the window is selected by the mouse)
   | 
   |                              Base Priority class/thread priority
   | IDLE                         1    Idle, normal, or high class, THREAD_PRIORITY_IDLE
   |                              2    Idle class, THREAD_PRIORITY_LOWEST
   |                              3    Idle class, THREAD_PRIORITY_BELOW_NORMAL
   | normal(IDLE)                 4    Idle class, THREAD_PRIORITY_NORMAL
   |                              5    Background normal class, THREAD_PRIORITY_LOWEST                 Idle class, THREAD_PRIORITY_ABOVE_NORMAL
   | rush(IDLE)                   6    Background normal class, THREAD_PRIORITY_BELOW_NORMAL           Idle class, THREAD_PRIORITY_HIGHEST
   | NORMALbACK                   7    Foreground normal class, THREAD_PRIORITY_LOWEST                 Background normal class, THREAD_PRIORITY_NORMAL
   |                              8    Foreground normal class, THREAD_PRIORITY_BELOW_NORMAL           Background normal class, THREAD_PRIORITY_ABOVE_NORMAL
   | NORMALfORE rush(NORMALbACK)  9    Foreground normal class, THREAD_PRIORITY_NORMAL                 Background normal class, THREAD_PRIORITY_HIGHEST
   |                              a    Foreground normal class, THREAD_PRIORITY_ABOVE_NORMAL
   | rush(NORMALfORE)             b    High class, THREAD_PRIORITY_LOWEST                              Foreground normal class, THREAD_PRIORITY_HIGHEST
   |                              c    High class, THREAD_PRIORITY_BELOW_NORMAL
   | normal(HIGH)                 d    High class, THREAD_PRIORITY_NORMAL
   |                              e    High class, THREAD_PRIORITY_ABOVE_NORMAL
   | RUSH rude(IDLE,NORMAL,RUSH)  f    Idle, normal, or high class, THREAD_PRIORITY_TIME_CRITICAL      High class, THREAD_PRIORITY_HIGHEST
   | idle(RUDE)                   01   Real-time class, THREAD_PRIORITY_IDLE
   |                              61   Real-time class, THREAD_PRIORITY_LOWEST
   |                              71   Real-time class, THREAD_PRIORITY_BELOW_NORMAL
   | normal(RUDE)                 81   Real-time class, THREAD_PRIORITY_NORMAL
   |                              91   Real-time class, THREAD_PRIORITY_ABOVE_NORMAL
   | rush(RUDE)                   a1   Real-time class, THREAD_PRIORITY_HIGHEST
   | RUDE                         f1   Real-time class, THREAD_PRIORITY_TIME_CRITICAL
   | 
 the process priority (when the operating system uses this concept) will be determined by the most recent call to me 
 code should be crafted with this in mind
arguments
 idP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001007f.ifcTHREADpRIORITY!||
*/
/**/

/*1*/countT thirdC::dosPriorityIF( tinS& tinP , const countT idP )/*1*/
{
    //THIS MUST BE DONE EVEN IF IMPOTENT SO THAT GRABBING/UNGRABBING WILL WORK
    //IFbEcAREFUL
    //{
    //    if( POOP ) return 0 ;
    //}

    //O: _IO_       COMMENTED OUT BECAUSE THIS IS CALLED VERY FREQUENTLY SO IMPOSES GREAT OVERHEAD 

    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_LOCKdESIRE ) { BLAMMO ; }

    const countT idDesireOld = dosPriorityIF( tinP ) ;

    #if defined( __OS2__ )

        switch( idP )
        {
            case ifcTHREADpRIORITY_LAZIEST :
            {
                BOS( WHATgbo , BOSfAIL , DosSetPriority( PRTYS_THREAD , PRTYC_IDLETIME , 0 , 0 ) )
                BOSpOOP
                break ;
            }
            case ifcTHREADpRIORITY_NORMAL :
            {
                BOS( WHATgbo , BOSfAIL , DosSetPriority( PRTYS_THREAD , PRTYC_REGULAR , 0 , 0 ) )
                BOSpOOP
                break ;
            }
            case ifcTHREADpRIORITY_RUSH :
            {
                BOS( WHATgbo , BOSfAIL , DosSetPriority( PRTYS_THREAD , PRTYC_FOREGROUNDSERVER , 0 , 0 ) )
                BOSpOOP
                break ;
            }
            case ifcTHREADpRIORITY_SPINLOCK :
            {
                BOS( WHATgbo , BOSfAIL , DosSetPriority( PRTYS_THREAD           , PRTYC_TIMECRITICAL     , 0 , 0 ) )
                BOSpOOP
                break ;
            }
            default :
            {
                __1
                break ;
            }
        }

    #elif defined( __NT__ )
    
        //dosPriorityProcessIF( tinP , idP ) ;
    
        //if( idP == ifcTHREADpRIORITY_SPINLOCK ) { BLAMMO ; } //CODE THAT SETS RUDE MUST ENSURE AGAINST CPU SPINNING

        //CONoUTrAW( "p" ) ;

        ZE( countT , osDesire ) ;
        switch( idP )
        {
            case ifcTHREADpRIORITY_LAZIEST : { osDesire = THREAD_PRIORITY_IDLE          ; break ; }
            case ifcTHREADpRIORITY_LAZIER  : { osDesire = THREAD_PRIORITY_LOWEST        ; break ; }
            case ifcTHREADpRIORITY_LAZY    : { osDesire = THREAD_PRIORITY_BELOW_NORMAL  ; break ; }
            case ifcTHREADpRIORITY_NORMAL  : { osDesire = THREAD_PRIORITY_NORMAL        ; break ; }
            case ifcTHREADpRIORITY_RUSH    : { osDesire = THREAD_PRIORITY_ABOVE_NORMAL  ; break ; }
            case ifcTHREADpRIORITY_PUSHY   : { osDesire = THREAD_PRIORITY_HIGHEST       ; break ; }
            case ifcTHREADpRIORITY_RUDE    : { osDesire = THREAD_PRIORITY_TIME_CRITICAL ; break ; }
            default :
            {
                __1
                break ;
            }
        }

        BOSdOnOTtEST( WHATgbo ,  GetCurrentThread() )
        BOS( WHATgbo , BOSoK , SetThreadPriority( (HANDLE)tinP.brcRaw , osDesire ) )

    #endif

    tinP.idDesire = idP ;

    return idDesireOld ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001076.thirdc.dospriorityif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001077.thirdc.doswritestdoutif BEGIN
#define DDNAME       "3func.35001077.thirdc.doswritestdoutif"
#define DDNUMB      (countT)0x35001077
#define IDFILE      (countT)0xa23


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteStdOutIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020084.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 ostP
*/
/**//*1*/voidT thirdC::dosWriteStdOutIF( tinS& tinP , const osTextT ostP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    const osTextT post2[] = { ostP , 0 } ;
    dosWriteStdOutIF( tinP , post2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001077.thirdc.doswritestdoutif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107c.thirdc.osdonothingif BEGIN
#define DDNAME       "3func.3500107c.thirdc.osdonothingif"
#define DDNUMB      (countT)0x3500107c
#define IDFILE      (countT)0xa24


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDoNothingIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102008d.1.0.html\"\>definition\</A\>
this function does nothing except check for a nonze ec
if POOP is ze, this function just executes IN
if POOP is nonze, then -nothing- (not even IN or OUT) is done
*/
/**/

/*1*/voidT thirdC::osDoNothingIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107c.thirdc.osdonothingif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107e.thirdc.osidif BEGIN
#define DDNAME       "3func.3500107e.thirdc.osidif"
#define DDNUMB      (countT)0x3500107e
#define IDFILE      (countT)0xa25


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osIdIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102008f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6010104.1.1.0.html\"\>6010104:  WAKEsHOW( "example.simplest.func.102008f.thirdC.osIdIF" )\</A\>
if !bFileP then evaluates to an osTextT that contains the id of the operating system
 o: os/2
 w: windows nt
 5: windows 95
if bFileP then evaluates to an osText that contains the id of the executable files for the operating system
 it is illegal to specify a value other than 0 in the definition of an adam
 o: os/2
 w: windows nt
 w: windows 95
arguments
 bFileP
*/
/**/

/*1*/osTextT thirdC::osIdIF( tinS& tinP , const boolT bFileP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( osTextT , ostId ) ;
    #if defined( __OS2__ )

        ostId = 'o' ;

    #elif defined( __NT__ )

        OSVERSIONINFO info ;
        c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;
        info.dwOSVersionInfoSize = sizeof info ;
        BOS( WHATgbo , BOSoK , GetVersionEx( &info ) )
        BOSpOOP
        if( !POOP )
        {
            if( bFileP )
            {
                     if( info.dwPlatformId == VER_PLATFORM_WIN32_NT      ) ostId = 'w' ;
                else if( info.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS ) ostId = 'w' ;
                else
                {
                     __( info.dwPlatformId ) ;
                     __1
                }
            }
            else
            {
                     if( info.dwPlatformId == VER_PLATFORM_WIN32_NT      ) ostId = 'w' ;
                else if( info.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS ) ostId = '5' ;
                else
                {
                     __( info.dwPlatformId ) ;
                     __1
                }
            }
        }

    #endif

    return ostId ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107e.thirdc.osidif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107f.thirdc.dospriorityif BEGIN
#define DDNAME       "3func.3500107f.thirdc.dospriorityif"
#define DDNUMB      (countT)0x3500107f
#define IDFILE      (countT)0xa26


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosPriorityIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020090.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5010104.1.1.0.html\"\>5010104:  WAKEsHOW( "example.simplest.func.1020090.thirdC.dosPriorityIF" )\</A\>
obtains the current priority for the current thread
U: windows: this erroneously reports "normal" for "idle" threads on windows nt
return value symbols
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001007f.ifcTHREADpRIORITY!||
os/2: unfinished
*/
/**/

/*1*/countT thirdC::dosPriorityIF( tinS& tinP )/*1*/
{
    //THIS IS NEEDED FOR grabC EVEN IF THREAD IS IMPOTENT
    //IFbEcAREFUL
    //{
    //    if( POOP ) return 0 ;
    //}

    //U:: ENABLE AFTER REMOVING CALLS TO MYSELF IN inOutFrameC CT/DT:    _IO_
    ZE( countT , idDesire ) ;

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOSdOnOTtEST( WHATgbo , GetCurrentThread() )
        BOS( WHATgbo , BOStHREADERcODE , GetThreadPriority( (HANDLE)tinP.brcRaw ) )
        switch( tinP.brcRaw )
        {
            case THREAD_PRIORITY_TIME_CRITICAL : { idDesire = ifcTHREADpRIORITY_RUDE    ; break ; }
            case THREAD_PRIORITY_HIGHEST       : { idDesire = ifcTHREADpRIORITY_PUSHY   ; break ; }
            case THREAD_PRIORITY_ABOVE_NORMAL  : { idDesire = ifcTHREADpRIORITY_RUSH    ; break ; }
            case THREAD_PRIORITY_NORMAL        : { idDesire = ifcTHREADpRIORITY_NORMAL  ; break ; }
            case THREAD_PRIORITY_BELOW_NORMAL  : { idDesire = ifcTHREADpRIORITY_LAZY    ; break ; }
            case THREAD_PRIORITY_LOWEST        : { idDesire = ifcTHREADpRIORITY_LAZIER  ; break ; }
            case THREAD_PRIORITY_IDLE          : { idDesire = ifcTHREADpRIORITY_LAZIEST ; break ; }
            default                            : {  __1                                 ; break ; }
        }
    #endif

    if( tinP.idDesire && idDesire != tinP.idDesire )     //U:: TO FIND A BUG
    {
        CONoUTrAW5( "\r\ndosPriorityIF: BLAMMO BECAUSE: [tinDesire,actualDesire]:    " , tinP.idDesire , "    " , idDesire , "\r\n" ) ;
        LOGrAW5( "\r\ndosPriorityIF: BLAMMO BECAUSE: [tinDesire,actualDesire]:    " , tinP.idDesire , "    " , idDesire , "\r\n" ) ;
        BLAMMO ;
    }

    tinP.idDesire = idDesire ;

    return tinP.idDesire ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500107f.thirdc.dospriorityif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001083.thirdc.os_callkidthreads_if BEGIN
#define DDNAME       "3func.35001083.thirdc.os_callkidthreads_if"
#define DDNUMB      (countT)0x35001083
#define IDFILE      (countT)0xa27


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$os_cAllKidThreadsI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020094.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1f20104.1.1.0.html\"\>1f20104:  WAKEsHOW( "example.simplest.func.1020094.thirdC.os_cAllKidThreadsI_IF" )\</A\>
*/
/**/

/*1*/countT& thirdC::os_cAllKidThreadsI_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_thirdC_.cAllKidThreads ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001083.thirdc.os_callkidthreads_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001088.thirdc.dossleepwinkif BEGIN
#define DDNAME       "3func.35001088.thirdc.dossleepwinkif"
#define DDNUMB      (countT)0x35001088
#define IDFILE      (countT)0xa28


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSleepWinkIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102009a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2730104.1.1.0.html\"\>2730104:  WAKEsHOW( "example.simplest.func.102009a.thirdC.dosSleepWinkIF" )\</A\>
this function releases the cpu for use by other threads within the current process
warning: on some operating systems, use of this function can prevent other processes from gaining access to the cpu
arguments
for max speed, this function contains no standard overhead code
this function just calls the operating system's sleep function, specifying a duration of 0
 the actual arg is 50, since 0 does not appear to work as intended for Windows
*/
/**/

/*1*/voidT thirdC::dosSleepWinkIF( tinS& tinP )/*1*/
{
    sleepC::blammoIfIF( tinP ) ;
    #ifdef __OS2__
        BOSS( WHATsn , BOSfAIL , DosSleep( 50 ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSnOvALUE( WHATsn , OSsLEEPf( TUCK ) )
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001088.thirdc.dossleepwinkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001089.thirdc.dospriorityprocessif BEGIN
#define DDNAME       "3func.35001089.thirdc.dospriorityprocessif"
#define DDNUMB      (countT)0x35001089
#define IDFILE      (countT)0xa29


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//



/*
\<A HREF=\"6.$dosPriorityProcessIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102009b.1.0.html\"\>definition\</A\>
on some os, has no effect
on some os, this function must be called to fully achieve the intended effect of setting a thread's priority
 on windows, for example, setting a thread to idle will not be fully effective unless this function is also called to set the entire process to idle
arguments
 idP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001007f.ifcTHREADpRIORITY!||
*/
/**/

/*1*/countT thirdC::dosPriorityProcessIF( tinS& tinP , const countT idP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_

    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_LOCKdESIRE ) { BLAMMO ; }

    const countT idDesireOld = dosPriorityProcessIF( tinP ) ;

    #if defined( __OS2__ )
        if( idP ) ;
    #elif defined( __NT__ )

        if( idP == ifcTHREADpRIORITY_LAZIEST ) { BLAMMO ; } //U::
        if( idP == ifcTHREADpRIORITY_RUSH    ) { BLAMMO ; } //U::
        if( idP == ifcTHREADpRIORITY_SPINLOCK    ) { BLAMMO ; } //U::

        switch( idP )
        {
            //case ifcTHREADpRIORITY_LAZIEST   :
            //{

            //    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
            //    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
            //    BOS( WHATgbo , BOSoK , SetPriorityClass( oshMe , IDLE_PRIORITY_CLASS ) )
            //    BOSpOOP
            //    break ;
            //}
            case ifcTHREADpRIORITY_NORMAL :
            {
                BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
                HANDLE oshMe = (HANDLE)tinP.brcRaw ;
                BOS( WHATgbo , BOSoK , SetPriorityClass( oshMe , NORMAL_PRIORITY_CLASS   ) )
                BOSpOOP
                break ;
            }
            //case ifcTHREADpRIORITY_RUSH   :
            //{
            //    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
            //    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
            //    BOS( WHATgbo , BOSoK , SetPriorityClass( oshMe() , HIGH_PRIORITY_CLASS ) )
            //    BOSpOOP
            //    break ;
            //}
            //case ifcTHREADpRIORITY_SPINLOCK   :
            //{
            //    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
            //    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
            //    BOS( WHATgbo , BOSoK , SetPriorityClass( oshMe , REALTIME_PRIORITY_CLASS ) )
            //    BOSpOOP
            //    break ;
            //}
            default :
            {
                __1
                break ;
            }
        }
    #endif
    tinP.idDesireProcess = idP ;

    return idDesireOld ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001089.thirdc.dospriorityprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108c.thirdc.c_itoaif BEGIN
#define DDNAME       "3func.3500108c.thirdc.c_itoaif"
#define DDNUMB      (countT)0x3500108c
#define IDFILE      (countT)0xa2a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_itoaIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102009f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1830104.1.1.0.html\"\>1830104:  WAKEsHOW( "example.simplest.func.102009f.thirdC.c_itoaIF" )\</A\>
if valueP < 0 and radixP == 0x10, postP will be set to contain the positive base 16 number that represents the internal representation of valueP
 for example, if valueP is -2 then postP will contain "fffffffe", not "-2"
arguments
 tinP
  must be 0
  can be 0
 postP
  must point to at least ( SB * sizeof( sCountT ) + 1 ) bytes
 costP
  length of the buffer at postP
  if radixP is 10 or higher then must be at least ( 2 * sizeof( sCountT ) + 1 ) bytes
  else must be at least ( SB * sizeof( sCountT ) + 1 ) bytes
 valueP
 radixP
*/
/**/

/*1*/voidT thirdC::c_itoaIF( tinS& tinP , osTextT* const postP , const countT costP , sCountT valueP , countT radixP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __( radixP >= 0x10 ? costP < 2 * sizeof( sCountT ) : costP < SB * sizeof( sCountT ) + 1 ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , itoa( valueP , postP , radixP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108c.thirdc.c_itoaif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108e.thirdc.dossetfileptrif BEGIN
#define DDNAME       "3func.3500108e.thirdc.dossetfileptrif"
#define DDNUMB      (countT)0x3500108e
#define IDFILE      (countT)0xa2b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetFilePtrIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200a1.1.0.html\"\>definition\</A\>
arguments
 tinP
 handleP
 flagsP
 c2P
  this is a 64 bit signed value that indicates the number of bytes to move the pointer, relative to the position indicated by flagsP
  after evaluation, it will contain the new position of the file pointer
  c1 contains the low order bits
  for example, to move the pointer to offset 10, set c2P.c1 = 0x10 and set c2P.c2 = 0
*/
/**/

/*1*/voidT thirdC::dosSetFilePtrIF( tinS& tinP , const handleC& handleP , const flagsT flagsP , count2S& c2P )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        FV( flSETfILEpTR , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        switch( flagsP ) //U::MIGRATE THIS TO MUTUALLY EXCLUSIVE idMode CONSTANTS
        {
            case flSETfILEpTR_END       : { BOS( WHATsfw , BOSmAXcOUNTT , SetFilePointer( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , c2P.c1 , (LONG*)&c2P.c2 , FILE_END     ) ) ; break ; }
            case flSETfILEpTR_BEGINNING : { BOS( WHATsfw , BOSmAXcOUNTT , SetFilePointer( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , c2P.c1 , (LONG*)&c2P.c2 , FILE_BEGIN   ) ) ; break ; }
            case flSETfILEpTR_CURRENT   : { BOS( WHATsfw , BOSmAXcOUNTT , SetFilePointer( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , c2P.c1 , (LONG*)&c2P.c2 , FILE_CURRENT ) ) ; break ; }
        }
        c2P.c1 = tinP.brcRaw ;
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108e.thirdc.dossetfileptrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108f.thirdc.dossleeprawif BEGIN
#define DDNAME       "3func.3500108f.thirdc.dossleeprawif"
#define DDNUMB      (countT)0x3500108f
#define IDFILE      (countT)0xa2c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSleepRawIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200a2.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3830104.1.1.0.html\"\>3830104:  WAKEsHOW( "example.simplest.func.10200a2.thirdC.dosSleepRawIF" )\</A\>
for max speed, this function contains no prolog or epilog code
it just calls the operating system's sleep api function
arguments
 cP
  raw units passed to the operating system's sleep api function
*/
/**/

/*1*/voidT thirdC::dosSleepRawIF( tinS& tinP , countT cP )/*1*/
{
    if( !cP ) { BLAMMO ; }
    if( !( F(tinP.flagsThreadMode1) & flTHREADmODE1_ALLOWuNMONITOREDsLEEP ) ) sleepC::blammoIfIF( tinP ) ;
    #ifdef __OS2__
        BOSS( WHATsn , BOSfAIL , DosSleep( cP ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSnOvALUE( if( cP ) WHATsn else WHATsy , OSsLEEPf( cP ) )
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500108f.thirdc.dossleeprawif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001091.thirdc.c_itoaif BEGIN
#define DDNAME       "3func.35001091.thirdc.c_itoaif"
#define DDNUMB      (countT)0x35001091
#define IDFILE      (countT)0xa2d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_itoaIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200a4.1.0.html\"\>definition\</A\>
this function is optimized for speed
 it contains no overhead code
arguments
 postP
  must point to at least 8 bytes of storage
  caller should normally allocate 9 bytes, and initialize the 9th byte to 0
  will be set to base 16_ digits representing the unsigned value valueP
   the number will be in ifc format with high ze's
 valueP
 ostPadP
  can be 0
  high order '0' digits, excluding the units digit, will be replaced with this value
 U:: it looks like this does unsigned representation
*/
/**/

/*1*/voidT thirdC::c_itoaIF( osTextT* const postP , countT valueP , const osTextT ostPadP )/*1*/
{
    ZE( countT , off ) ;
    countT cToDo = 2 * sizeof( countT ) ;
    ZE( countT , digit ) ;
    while( cToDo -- )
    {
        digit = valueP & 0xf ;
        valueP >>= 4 ;
        postP[ off ++ ] = (osTextT)( digit < 0xa ? '0' + digit : 'a' + digit - 0xa ) ;
    }

    if( ostPadP != '0' )
    {
        off = 2 * sizeof( countT ) - 1 ;
        while( off > 0 )
        {
            if( postP[ off ] == '0' ) postP[ off ] = ostPadP ;
            else                      break ;
            off -- ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001091.thirdc.c_itoaif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500109a.thirdc.windispatchmessagesif BEGIN
#define DDNAME       "3func.3500109a.thirdc.windispatchmessagesif"
#define DDNUMB      (countT)0x3500109a
#define IDFILE      (countT)0xa2e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winDispatchMessagesIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b8.1.0.html\"\>definition\</A\>
dispatches messages for the current thread
will handle all messages for windows created on the current thread
will also handle all messages posted to the current thread
evaluates to a return code that is normally 0
*/
/**/

/*1*/countT thirdC::winDispatchMessagesIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    //IN

    ZE( countT , rc ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        MSG info ;
        for(;;)
        {
            BOS( WHATgbo , BOSfAILiFmINUS1 , GetMessage( &info , 0 , 0 , 0 ) )
            BOSpOOP
            if( POOP || !tinP.brcRaw ) break ;
        
            BOSdOnOTtEST( WHATgbo , DispatchMessage( &info ) ) //WM_CLOSE: WILL DELETE etThread AND tinP
            //I MUST NOT REFER TO tinP WHILE I AM WORKING, OR AS I EXIT, BECAUSE tinP WILL BE DESTROYED BY THE WM_CLOSE HANDLER
        }
        rc = info.wParam ;

    #endif

    //OUT

    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500109a.thirdc.windispatchmessagesif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010a1.thirdc.windefaultmessagehandlerif BEGIN
#define DDNAME       "3func.350010a1.thirdc.windefaultmessagehandlerif"
#define DDNUMB      (countT)0x350010a1
#define IDFILE      (countT)0xa2f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winDefaultMessageHandlerIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200c4.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT thirdC::winDefaultMessageHandlerIF( tinS& tinP , const countT oshWindowP , const countT idCmdP , const countT p1P , const countT p2P )/*1*/
{
    //COMMENTED OUT IN CASE I AM CALLED FOR ANY OTHER MESSAGES AFTER WM_CLOSE HANDLER DESTROYS IFC OBJECTS
    //EC
    //
    //IFbEcAREFUL
    //{
    //    if( POOP ) return 0 ;
    //    __Z( oshWindowP ) ;
    //    __Z( idCmdP ) ;
    //    if( POOP ) return 0 ;
    //}

    //IN
    ZE( countT , rc ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        //OSo CANNOT BE USED BECAUSE WM_CLOSE MIGHT HAVE DESTROYED tinP AND etThread

        BOSdOnOTtEST( WHATgbo , DefWindowProc( (HWND)oshWindowP , idCmdP , p1P , p2P ) )
        BOSpOOP
        rc = tinP.brcRaw ;

    #endif
    //OUT

    //CANNOT DO THIS: if( tinP.fingerprint ) ;
    if( rc == sizeof tinP ) ;
    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010a1.thirdc.windefaultmessagehandlerif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010a7.thirdc.dospushconsolehandlerif BEGIN
#define DDNAME       "3func.350010a7.thirdc.dospushconsolehandlerif"
#define DDNUMB      (countT)0x350010a7
#define IDFILE      (countT)0xa30


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$DosPushConsoleHandlerF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200cc.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 handleP
  must be 0
 pConsoleHandlerFP
  it is illegal to specify a value other than 0 in the definition of an adam
*/
/**/    

#if defined( __OS2__ )

    //U: UPDATE THIS TO HAVE THE SAME FUNCTIONALITY AS THE NT FLAVOR

    ULONG _export OSF consoleHandlerDfltF( EXCEPTIONREPORTRECORD* pReportP , EXCEPTIONREGISTRATIONRECORD* pRegistrationP , CONTEXTRECORD* pContextP , voidT* pvP )
    {
        pRegistrationP = pRegistrationP ; pContextP = pContextP ; pvP = pvP ;
        if( pReportP && pReportP->ExceptionNum == XCPT_SIGNAL && pReportP->ExceptionInfo[ 0 ] != XCPT_SIGNAL_KILLPROC ) return XCPT_CONTINUE_EXECUTION ;
        else                                                                                                            return XCPT_CONTINUE_SEARCH ;
    }

#elif defined( __NT__ )

//THIS MUST RETURN QUICKLY (E.G. NOT SLEEP) BECAUSE THE O.S. BROADCASTS SHUTDOWN AND LOGOFF NOTICES SERIALLY
//CONJ: THE STACK FOR THE O.S. THREAD THAT WILL CALL ME IS SMALL.  I CANNOT USE FUNCTIONS SUCH AS boxC::boxC

    BOOL OSF consoleHandlerDfltF( DWORD idType ) // thirdC::thPrimeIF( tinP ) IS NOT STORED, BECAUSE THIS FUNCTION COULD EXECUTE LATE
    {
        tinS& tinP = processGlobal5I.tinBreak ; //ASSUME: I AM CALLED SERIALLY (NEVER BY MULTIPLE THREADS SIMULTANEOUSLY) U:: ADD CODE TO SERIALIZE, JUST TO MAKE SURE
        if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
        if( tinP.monitor.idThread - ifcIDtHREADlOW_break ) { BLAMMO ; }
        BOS( WHATgbo , BOSoK , GetCurrentThreadId() )
        BOSpOOP
        tinP.osTid = tinP.brcRaw ;
        TELL( "consoleHandlerDfltF/+" )
        _IO_

        static countT cCloseIgnored ;
        ZE( boolT , bQuit ) ;
        ZE( boolT , bDie ) ;
        switch( idType )
        {
            case CTRL_LOGOFF_EVENT   :
            {
                TELL( "consoleHandlerDfltF/CTRL_LOGOFF_EVENT+" )
                if( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_QUITaTlOGOFF ) bQuit = 1 ;
                TELL( "consoleHandlerDfltF/CTRL_LOGOFF_EVENT-" )
                break ;
            }
            case CTRL_BREAK_EVENT    : // OPERATOR CAN SIMULATE SHUTDOWN BY KEYING Ctrl-Break IN ANY IFC CONSOLE
            case CTRL_SHUTDOWN_EVENT :
            {
                logGF( "CTRL_BREAK_EVENT or CTRL_SHUTDOWN_EVENT\r\n" ) ;

                TELL( "consoleHandlerDfltF/CTRL_BREAK_EVENT CTRL_SHUTDOWN_EVENT+" )
                //THIS WOULD LOAD THE CPU WITH CLEANUP ACTIVITY: ((poolOld SideS&)*tinP.pAdamGlobal1->pPoolHomeTemp).flags ForestFire |= flFORESTfIRE_SHUTDOWN ;
                if( F( thirdC::third_flagsModeProcess1I_IF( tinP ) ) & flMODEpROCESS1_QUITaTsHUTDOWN ) bQuit = 1 ;
                else                                                                                   bDie  = 1 ;
                TELL( "consoleHandlerDfltF/CTRL_BREAK_EVENT CTRL_SHUTDOWN_EVENT-" )
                break ;
            }
            case CTRL_C_EVENT        :
            case CTRL_CLOSE_EVENT    :
            {
                TELL( "consoleHandlerDfltF/CTRL_C_EVENT CTRL_CLOSE_EVENT+" )
                if( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_IGNOREfIREbYoPERATOR )
                {
                    inc02AM( cCloseIgnored ) ;
                    //AV'S (AT LEAST IN WDW), AS IF pTinAM DOES NOT WORK ON Ctrl-c thread: thirdC::dosBeepIF( tinP , 0x100 , TUCK * 0x40 ) ;
                }
                else bQuit = 1 ;
                TELL( "consoleHandlerDfltF/CTRL_C_EVENT CTRL_CLOSE_EVENT-" )
                break ;
            }
            default:
            {
                TELL( "consoleHandlerDfltF/default+" )
                TELL( "consoleHandlerDfltF/default-" )
                break ;
            }
        }

        {
            OStEXT( ostoBuf , sizeof tinP.postTell ) //CODEsYNC: 12f0006 10200cc
            OStEXTAK( ostoBuf , "refusalsToClose:" ) ;
            OStEXTC( ostoBuf , cCloseIgnored , 0 ) ;
            thirdC::c_strncpyIF( tinP , tinP.postTell , ostoBuf , sizeof tinP.postTell ) ;
        }

        if( bDie ) // FOR THE DRIVER f040104, I WILL DO bDie == 1, WHICH HAS NO EFFECT SINCE IT IS NOT MONITORED
        {
            //state C::writeToDiskIfIF( tinP ) ;
            //CANNOT USE tellC HERE BECAUSE pTinF WILL NOT FIND THE TLS FRAME
            //TELLsYSc1( ifcIDtYPEtELLsYS_READYtOdIE ) ; // IFF I AM MONITORED, I WILL NEVER RETURN FROM THIS
            //sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            //while( !( F(processGlobal1I._thirdC_flagsProcessState) & flPROCESSsTATE_GLOBALdESTRUCTIONiScOMPLETE ) ) { ++ s ; thirdC::dosSleepIF( tinP , TUCK * 0x40 ) ; }
        }
        else if( bQuit )
        {
            etherC::etPrimeIF( tinP ).etherFireImpersonateMonitorIF( tinP ) ;
            //sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            //while( !( F(processGlobal1I._thirdC_flagsProcessState) & flPROCESSsTATE_GLOBALdESTRUCTIONiScOMPLETE ) ) { ++ s ; thirdC::dosSleepIF( tinP , TUCK * 0x40 ) ; }
        }
        return 1 ;
    }

#endif

/*1*/voidT thirdC::dosPushConsoleHandlerIF( tinS& tinP , handleC& handleP , voidT* pConsoleHandlerFP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( ~handleP ) ;
        if( POOP ) return ;
    }

    _IO_

    consoleHandlerFT pConsoleHandlerF = pConsoleHandlerFP ? (consoleHandlerFT)pConsoleHandlerFP : consoleHandlerDfltF ;

    #ifdef __OS2__

        ZE( byteT* , pbInfo ) ;
        newF( tinP , LF , pbInfo , sizeof( EXCEPTIONREGISTRATIONRECORD ) ) ; ___( pbInfo ) ;
        EXCEPTIONREGISTRATIONRECORD* pInfo = (EXCEPTIONREGISTRATIONRECORD*)pbInfo ;
        if( pInfo )
        {
            pInfo->prev_structure = 0 ;
            pInfo->ExceptionHandler = pConsoleHandlerF ;
            BOS( WHATgbo , BOSfAIL , DosSetExceptionHandler( pInfo ) )
            BOSpOOP
            {
                ZE( ULONG , info ) ;
                BOS( WHATgbo , BOSfAIL , DosSetSignalExceptionFocus( SIG_SETFOCUS , &info ) )
                BOSpOOP
            }
            handleP.cNoteF( ifcIDtYPEhANDLE_CONSOLEhANDLER , (countT)pInfo ) ;
        }

    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , SetConsoleCtrlHandler( pConsoleHandlerF , 1 ) )
        BOSpOOP

    #endif
    handleP.osF( ifcIDtYPEhANDLE_CONSOLEhANDLER , (countT)pConsoleHandlerF ) ;

    //TELLsYSc1( ifcIDtYPEtELLsYS_AOKfYIeXCEPTIONhANDLERpUSH )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010a7.thirdc.dospushconsolehandlerif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010bb.thirdc.dospriorityprocessif BEGIN
#define DDNAME       "3func.350010bb.thirdc.dospriorityprocessif"
#define DDNUMB      (countT)0x350010bb
#define IDFILE      (countT)0xa31


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosPriorityProcessIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e2.1.0.html\"\>definition\</A\>
evaluates to a thread priority constant
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001007f.ifcTHREADpRIORITY!||
 even though the thread priority constants are used, this value applies to the entire process
 on some operating systems, always evaluates to ifcTHREADpRIORITY_NORMAL
*/
/**/
/*1*/countT thirdC::dosPriorityProcessIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , idDesireProcess ) ;

    #if defined( __OS2__ )
    
        idDesireProcess = ifcTHREADpRIORITY_NORMAL ;
    
    #elif defined( __NT__ )
    
        BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
        HANDLE oshMe = (HANDLE)tinP.brcRaw ;

        BOS( WHATgbo , BOSoK , GetPriorityClass( oshMe ) )
        switch( tinP.brcRaw )
        {
            case IDLE_PRIORITY_CLASS     : { idDesireProcess = ifcTHREADpRIORITY_LAZIEST   ; break ; }
            case NORMAL_PRIORITY_CLASS   : { idDesireProcess = ifcTHREADpRIORITY_NORMAL ; break ; }
            case HIGH_PRIORITY_CLASS     : { idDesireProcess = ifcTHREADpRIORITY_RUSH   ; break ; }
            case REALTIME_PRIORITY_CLASS : { idDesireProcess = ifcTHREADpRIORITY_SPINLOCK   ; break ; }
            default :                      __1
        }
    
    #endif

    __( tinP.idDesireProcess && idDesireProcess - tinP.idDesireProcess ) ;

    return idDesireProcess ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010bb.thirdc.dospriorityprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010c8.thirdc.dosfiledeleteifcorruptif BEGIN
#define DDNAME       "3func.350010c8.thirdc.dosfiledeleteifcorruptif"
#define DDNUMB      (countT)0x350010c8
#define IDFILE      (countT)0xa32


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosFileDeleteIfCorruptIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ef.1.0.html\"\>definition\</A\>
*/
/**/

//U::I WILL DELETE A FILE THAT IS CURRENTLY STILL OPEN AND BEING WRITTEN AT THE TIME THAT I LOOK FOR THE TAG FILE
// THIS IS UNDESIRABLE BEHAVIOR
// UNTIL I AM FIXED, I SHOULD NOT BE USED WHEN THIS CAN OCCUR
// EXAMPLE: READER IS WATCHING FOR DIRECTORY CHANGE
// WORKAROUND: PUT A NAP INTO THE WATCHER
// BETTER WORKAROUND: DO NOT CALL ME AT ALL

/*1*/voidT thirdC::dosFileDeleteIfCorruptIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    thirdC* pThird = tinP.pEther ? &(thirdC&)*tinP.pEther : 0 ;  //U:: 20200815@1708: DESIGN ERROR: CAN CAUSE WRONG poopC TO BECOME IMPOTENT

    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __Z( pThird ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , cFound ) ;
    ZE( countT , cDeleted ) ;
    ZE( boolT , bFoundAfter ) ;
    {
        OStEXT( ostoLike , 0x200 )
        OStEXTA( ostoLike , postP )
        OStEXTAK( ostoLike , ".!writing.*" )

        handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
        do
        {
            ZE( infoFileS* , pInfo ) ;
            pThird->dosFindFileOrDirPrivateF( tinP , pInfo , hFind , ostoLike ) ; ___( pInfo ) ;
            if( pInfo )
            {
                cFound ++ ;
                thirdC thp( tinP , TAG( TAGiDnULL ) , flTHIRDmODE_IMPOTENCEeXPECTED ) ;

                thp.dosDeleteIF( tinP , pInfo->postOsName , 1 ) ;
                if( !POOP ) cDeleted ++ ;
                else        thp = 0 ;
            }
            DEL( pInfo ) ;
        }
        while( !POOP && ~hFind ) ;

        if( !POOP )
        {
            ZE( infoFileS* , pInfo ) ;
            pThird->dosFindFileOrDirPrivateF( tinP , pInfo , hFind , ostoLike ) ; ___( pInfo ) ;
            if( pInfo ) bFoundAfter = 1 ;
            DEL( pInfo ) ;
        }
    }

    if( !bFoundAfter && cDeleted && cFound == cDeleted ) pThird->dosDeleteIF( tinP , postP ) ; // AT LEAST ONE WRITER DIED AND THERE IS NO LIVING PROCESS WRITING THE FILE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010c8.thirdc.dosfiledeleteifcorruptif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ca.thirdc.dosbeepsingdigitsif BEGIN
#define DDNAME       "3func.350010ca.thirdc.dosbeepsingdigitsif"
#define DDNUMB      (countT)0x350010ca
#define IDFILE      (countT)0xa33


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosBeepSingDigitsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f1.1.0.html\"\>definition\</A\>
uses audible tones to communicate the value of cP
the code is simple
 a double low tone begins the sequence
 a single medium tone delimits each digit
 the digits are toned from least significant to most significant
  left to right, in IFC digit ordering
 for each digit, 0 or more (up to 15) high tones occur
 a pause occurs after each group of 4 high tones
  this pause has no meaning
  it is used only to make it easier for a human to count the high tones correctly
 a triple low tone ends the sequence
*/
/**/

/*1*/voidT thirdC::dosBeepSingDigitsIF( tinS& tinP , const countT cP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    thirdC* pThird = tinP.pEther ? &(thirdC&)*tinP.pEther : 0 ;

    processGlobal4I._thirdC_bBeep.grabF( tinP , TAG( TAGiDnULL ) ) ;

    _IO_

    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; dosBeepIF( tinP , 220 , TUCK * 8 ) ;
        dosSleepIF( tinP , TUCK * 0x40 ) ;
        dosBeepIF( tinP , 220 , TUCK * 8 ) ;
        dosSleepIF( tinP , TOCK ) ;
    
        countT cc = cP ;
        while( cc )
        {
            countT dd = cc % 0x10 ;
            cc >>= 4 ;
            ZE( countT , cClicks ) ;
            while( !POOP && dd )
            {
                dosBeepIF( tinP , 880 , TUCK * 8 ) ;
                dosSleepIF( tinP , TUCK * 0x40 * ( 1 + 2 * ( 0 == ( ++ cClicks ) % 4 ) ) ) ;
                dd -- ;
            }
    
            if( cc )
            {
                dosSleepIF( tinP , TOCK ) ;
                dosBeepIF( tinP , 440 , TUCK * 8 ) ;
            }
            dosSleepIF( tinP , TOCK ) ;
        }
    
        dosBeepIF( tinP , 220 , TUCK * 8 ) ;
        dosSleepIF( tinP , TUCK * 0x40 ) ;
        dosBeepIF( tinP , 220 , TUCK * 8 ) ;
        dosSleepIF( tinP , TUCK * 0x40 ) ;
        dosBeepIF( tinP , 220 , TUCK * 8 ) ;
        dosSleepIF( tinP , TUCK * 0x40 ) ;
    }

    processGlobal4I._thirdC_bBeep.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ca.thirdc.dosbeepsingdigitsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010cb.thirdc.c_strlenif BEGIN
#define DDNAME       "3func.350010cb.thirdc.c_strlenif"
#define DDNUMB      (countT)0x350010cb
#define IDFILE      (countT)0xa34


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strlenIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f2.1.0.html\"\>definition\</A\>
arguments
 pczP
*/
/**/

/*1*/countT thirdC::c_strlenIF( tinS& tinP , const countT* const pczP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( pczP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , cc ) ;
    ZE( countT , off ) ;
    while( pczP[ off ] )
    {
        cc ++ ;
        off ++ ;
    }
    return cc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010cb.thirdc.c_strlenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010cd.thirdc.osfireif BEGIN
#define DDNAME       "3func.350010cd.thirdc.osfireif"
#define DDNUMB      (countT)0x350010cd
#define IDFILE      (countT)0xa35


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osFireIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f4.1.0.html\"\>definition\</A\>
*/
/**//*1*/voidT thirdC::osFireIF( tinS& tinP , const boolT bDoNotComeBackP )/*1*/
{
    _IO_

    #ifdef __OS2__
        //U:
    #elif defined( __NT__ )

        {
            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
            osOpenProcessIF( tinP , handle ) ;
        
            handleC hToken( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESStOKEN ) ; //NOT REALLY A HANDLE, SO I DO NOT REGISTER/DEREGISTER IT; NOTE THAT I DO NOT "CLOSE" IT
            ZE( HANDLE , osh ) ;
            BOS( WHATgbo , BOSoK , OpenProcessToken( (HANDLE)handle.osF( ifcIDtYPEhANDLE_PROCESS ) , TOKEN_ADJUST_PRIVILEGES , &osh ) )
            BOSpOOP
            hToken.osF( ifcIDtYPEhANDLE_PROCESStOKEN , (countT)osh ) ;
        
            TOKEN_PRIVILEGES info ;
            info.PrivilegeCount = 1 ;
            BOS( WHATgbo , BOSoK , LookupPrivilegeValue( "" , SE_SHUTDOWN_NAME , &info.Privileges[ 0 ].Luid ) )
            BOSpOOP
            info.Privileges[ 0 ].Attributes = SE_PRIVILEGE_ENABLED ;
            BOS( WHATgbo , BOSoK , AdjustTokenPrivileges( (HANDLE)hToken.osF( ifcIDtYPEhANDLE_PROCESStOKEN ) , 0 , &info , sizeof info , 0 , 0 ) )
            BOSpOOP
        }
        
        BOS( WHATgbo , BOSoK , InitiateSystemShutdown( 0 , 0 , 0 , 1 , !bDoNotComeBackP ) )

        if( tinP.bosFail && tinP.brcLath != ERROR_SHUTDOWN_IN_PROGRESS )
        {
            BOSpOOP
        }

        //BOS( WHATgbo , BOSoK , ExitWindowsEx( EWX_FORCE | ( bDoNotComeBackP ? EWX_POWEROFF : EWX_REBOOT ) , 0 ) )
        //BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010cd.thirdc.osfireif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d1.thirdc.dosreadif BEGIN
#define DDNAME       "3func.350010d1.thirdc.dosreadif"
#define DDNUMB      (countT)0x350010d1
#define IDFILE      (countT)0xa36


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f8.1.0.html\"\>definition\</A\>
it is illegal to read from stdin
arguments
 pbP
  must contain the address of cbP bytes of memory that this adam can write to
 cbP
  must not be 0
  specifies the number of bytes to read
  after evaluation, if no error occured, will contain the number of bytes actually read
  if an error occured, will be reset to its initial value
 handleP
 fStillHungryIsOkP
  if 0, will fail unless cbP bytes can be read
  else, will not fail, and cbP will be set to the number of bytes actually read
  if was still hungry, a 0 will be written to terminate the bytes actually read
*/
/**/

/*1*/voidT thirdC::dosReadIF( tinS& tinP , byteT* const pbP , countT& cbP , const handleC& handleP , boolT fStillHungryIsOkP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HFILE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_

    const countT cbSave = cbP ;

//U:: TO FIND A BUG
static countT idInLath ;
countT idIn = 1 + incv02AM( idInLath ) ;
if( idIn == 0x11 )
{
    countT foo = 2 ;
}

linkedC& root = processGlobal3I._handleC_linked_sm ; //U:: TO FIND A BUG
    byteT bEnd = *pbP ;
    countT cbToDo = cbP ;
    ZE( countT , off ) ;
    while( !POOP )
    {
        ZE( countT , cbBite ) ;
        cbToDo > 8192 ? cbBite = 8192 : cbBite = cbToDo ;
        ZE( ULONG , cbNew ) ;

        #ifdef __OS2__
            BOSI( WHATsfr , BOSfAIL , DosRead( (HFILE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , pbP + off , cbBite , &cbNew ) )
            BOSpOOP
        #elif defined( __NT__ )
            BOSnOvALUE( WHATsfr , SetLastError( 0 ) )
            BOS( WHATsfr , BOSoK , ReadFile( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) , pbP + off , cbBite , &cbNew , 0 ) )
            BOSpOOP
        #endif

        if( !POOP ) off += cbNew , cbToDo -= cbNew ;
        ZE( byteT* , pbEnd ) ;
        if( fStillHungryIsOkP && cbToDo )
        {
            pbP[ off ] = 0 ;
            pbEnd = thirdC::c_strchrIF( tinP , pbP + off - cbNew , bEnd ) ;
            const countT cbTrail = pbP + off - pbEnd ;
            if( pbEnd && cbTrail ) thirdC::c_memsetIF( tinP , pbEnd , cbTrail ) ;
        }
        if( !cbToDo || !cbNew || ( fStillHungryIsOkP && pbEnd ) ) break ; // TESTING cbNew IS JUST TO MAKE SURE THAT WE DON'T PEG CPU IN HERE
    }
    if( fStillHungryIsOkP ) cbP = off ;
    else                    __( cbP - off ) ;

    if( POOP ) cbP = cbSave ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d1.thirdc.dosreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d2.thirdc.dosreadif BEGIN
#define DDNAME       "3func.350010d2.thirdc.dosreadif"
#define DDNUMB      (countT)0x350010d2
#define IDFILE      (countT)0xa37


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f9.1.0.html\"\>definition\</A\>
i read an entire file into a preallocated string of bytes
if there aren't enough bytes, i do not read anything and impotence occurs
arguments
 tinP
 pbP
  must not be 0
  on return, if the entire file could be read, it will be here
   if the file was too large, *pbP will be 0 and impotence will occur
  if there is an unused byte at the end of the image, it will be set to 0
 cbP
  must not be 0
  on return, will contain the size of the file (even if impotence occurs)
 postP
  must not be 0
*/
/**/

/*1*/voidT thirdC::dosReadIF( tinS& tinP , byteT* const pbP , countT& cbP , const osTextT* const postP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
    ZE( countT , idr ) ;
    ZE( countT , cbUsed ) ;
    dosOpenIF( tinP , tinP.pEther , handle , idr , postP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_LOCsEQ | flOPENdETAILS_FAIL | flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO , 0 , 0 , 1 ) ;

    if( !POOP )
    {
        #ifdef __OS2__
            FILESTATUS3 info ;
        #elif defined( __NT__ )
            BY_HANDLE_FILE_INFORMATION info ;
        #endif

        #ifdef __OS2__
            BOSI( WHATsfr , BOSfAIL , DosQueryFileInfo( (HFILE)handle.osF( ifcIDtYPEhANDLE_FILE ) , FIL_STANDARD , &info , sizeof info ) )
            BOSpOOP
            cbUsed = info.cbFile ;
        #elif defined( __NT__ )
            BOS( WHATsfr , BOSoK , GetFileInformationByHandle( (HANDLE)handle.osF( ifcIDtYPEhANDLE_FILE ) , &info ) )
            BOSpOOP
            cbUsed = info.nFileSizeLow ;
        #endif
    
        if( cbUsed )
        {
            __( cbP < cbUsed ) ;
            dosReadIF( tinP , pbP , cbUsed , handle ) ;
        }
    
        if( !POOP )
        {
            if( cbP > cbUsed ) pbP[ cbUsed ] = 0 ;
            cbP = cbUsed ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d2.thirdc.dosreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d8.thirdc.dossleeprwinkif BEGIN
#define DDNAME       "3func.350010d8.thirdc.dossleeprwinkif"
#define DDNUMB      (countT)0x350010d8
#define IDFILE      (countT)0xa38


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSleepRWinkIF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ff.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosSleepRWinkIF( tinS& tinP )/*1*/
{
    sleepC::blammoIfIF( tinP ) ;

    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    //CONoUTrAW3( "<srw:" , idIn , ">" ) ; //U::

    #ifdef __OS2__


        BOS( WHATgbo , BOSoK , GetCurrentThreadId() )
        BOSpOOP
        BOS( WHATsn , BOSfAIL , DosSleep( ( clock() + 7 * tinP.brcRaw ) % 0x80 + 0x40 ) )
        BOSpOOP

    #elif defined( __NT__ )


        BOSdOnOTtEST( WHATgbo , clock() )
        countT msn = tinP.brcRaw ;

        BOS( WHATgbo , BOSoK , GetCurrentThreadId() )
        BOSpOOP
    
        BOSdOnOTtEST( WHATgbo , tinP.brcRaw )
        countT osTid = tinP.brcRaw ;

        BOSnOvALUE( WHATsn , OSsLEEPf( ( msn + 7 * osTid ) % 0x80 + 0x40 ) )
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010d8.thirdc.dossleeprwinkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010da.thirdc.thirdbreakif BEGIN
#define DDNAME       "3func.350010da.thirdc.thirdbreakif"
#define DDNUMB      (countT)0x350010da
#define IDFILE      (countT)0xa39


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdBreakIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020101.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT thirdC::thirdBreakIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ; // IN DEBUGGER, SET A BREAKPOINT ON THIS LINE, SET tinP.pAdamGlobal1->_thirdC_.break_idStep AND/OR tinP.pAdamGlobal1->_thirdC_.break_idThread, AND THEN RUN
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010da.thirdc.thirdbreakif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010dd.thirdc.osmessageboxif BEGIN
#define DDNAME       "3func.350010dd.thirdc.osmessageboxif"
#define DDNUMB      (countT)0x350010dd
#define IDFILE      (countT)0xa3a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osMessageBoxIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020104.1.0.html\"\>definition\</A\>
arguments
 tinP
 postP
 postTitleP
 flagsButtonsP
  for some operating systems, not all possible combinations of buttons are supported
  see the function definition above for the button combinations that are supported by all supported operating systems
  it is illegal to specify a button combination that is unsupported by any operating system specified in this function definition
*/
/**/

/*1*/countT thirdC::osMessageBoxIF( tinS& tinP , const osTextT* const postP , const osTextT* const postTitleP , const flagsT flagsButtonsP , const flagsT flagButtonSelectedP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    const osTextT* postTitle = postTitleP && *postTitleP ? postTitleP : "IdeaFarm " "(tm) City - ideafarm.com" ;

    ZE( countT , idResult ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        ZE( flagsT , flagsButtons ) ;

             if( !( F(flagsButtonsP) )                                                                                                                                                                                                                                                                                                              ) flagsButtons = MB_OK               ;
        else if(    F(flagsButtonsP) & flMESSAGEbOXbUTTON_ABORT && F(flagsButtonsP) & flMESSAGEbOXbUTTON_RETRY && F(flagsButtonsP) & flMESSAGEbOXbUTTON_IGNORE                                                                                                                                                                                      ) flagsButtons = MB_ABORTRETRYIGNORE ;
        else if(                                                   F(flagsButtonsP) & flMESSAGEbOXbUTTON_RETRY                                                 && F(flagsButtonsP) & flMESSAGEbOXbUTTON_CANCEL                                                                                                                                      ) flagsButtons = MB_RETRYCANCEL      ;
        else if(                                                                                                                                                  F(flagsButtonsP) & flMESSAGEbOXbUTTON_CANCEL                                             && F(flagsButtonsP) & flMESSAGEbOXbUTTON_YES && F(flagsButtonsP) & flMESSAGEbOXbUTTON_NO ) flagsButtons = MB_YESNOCANCEL      ;
        else if(                                                                                                                                                                                                                                              F(flagsButtonsP) & flMESSAGEbOXbUTTON_YES && F(flagsButtonsP) & flMESSAGEbOXbUTTON_NO ) flagsButtons = MB_YESNO            ;
        else if(                                                                                                                                                  F(flagsButtonsP) & flMESSAGEbOXbUTTON_CANCEL && F(flagsButtonsP) & flMESSAGEbOXbUTTON_OK                                                                                          ) flagsButtons = MB_OKCANCEL         ;
        else if(                                                                                                                                                                                                  F(flagsButtonsP) & flMESSAGEbOXbUTTON_OK                                                                                          ) flagsButtons = MB_OK               ;
        else
        {
            __( flagsButtonsP ) ;
        }

        BOS( WHATsww , BOSoK , MessageBox( 0 , postP , postTitle , MB_SERVICE_NOTIFICATION | flagsButtons | flagSelectedF( tinP , flagsButtonsP , flagButtonSelectedP ) ) )
        BOSpOOP
        switch( tinP.brcRaw )
        {
            case IDABORT  : { idResult = ifcMESSAGEbOXrESULT_ABORT  ; break ; }
            case IDRETRY  : { idResult = ifcMESSAGEbOXrESULT_RETRY  ; break ; }
            case IDIGNORE : { idResult = ifcMESSAGEbOXrESULT_IGNORE ; break ; }
            case IDCANCEL : { idResult = ifcMESSAGEbOXrESULT_CANCEL ; break ; }
            case IDOK     : { idResult = ifcMESSAGEbOXrESULT_OK     ; break ; }
            case IDYES    : { idResult = ifcMESSAGEbOXrESULT_YES    ; break ; }
            case IDNO     : { idResult = ifcMESSAGEbOXrESULT_NO     ; break ; }
            default:
            {
                __( tinP.brcRaw ) ;
                __1
                break ;
            }
        }

    #endif
    return idResult ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010dd.thirdc.osmessageboxif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010df.thirdc.dosclosethreadresourcesif BEGIN
#define DDNAME       "3func.350010df.thirdc.dosclosethreadresourcesif"
#define DDNUMB      (countT)0x350010df
#define IDFILE      (countT)0xa3b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCloseThreadResourcesIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020106.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosCloseThreadResourcesIF( tinS& tinP )/*1*/
{
    //I WORK UNCONDITIONALLY TO ENSURE NO LEAKAGE
    _IO_

    //U::A: tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //U::A: tinP.pAdamGlobal1->_thirdC_.lOsTid = dosGetInfoBlocksIdThreadIF() ;
    //U::A: handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
    //U::A: handle.osF( ifcIDtYPEhANDLE_THREAD , *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
    //U::A: tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle->freeF( tinP ) ;
    //U::A: tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010df.thirdc.dosclosethreadresourcesif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e3.thirdc.dostellmonitorif BEGIN
#define DDNAME       "3func.350010e3.thirdc.dostellmonitorif"
#define DDNUMB      (countT)0x350010e3
#define IDFILE      (countT)0xa3c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosTellMonitorIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
i work unconditionally (even if impotence has occured on this thread)
use TELLsYSc1 or TELLsYSc3
even in the system code, use TELLsYSc1 or TELLsYSc3 where practical
*/
/**/

//boolT _bWoth = 1 ; //U::

/*1*/voidT thirdC::dosTellMonitorIF( tinS& tinP , const tellC& tellP , const countT idBooksP )/*1*/
{
    if( F(tinP.flagsThreadMode1) & flTHREADmODE1_DISALLOWtELLmONITOR ) { BLAMMO ; }

    if
    (
        !( F(processGlobal1I._thirdC_flagsModeProcess2)    & flMODEpROCESS2_SUPPRESStELLS      ) &&
        !( F(tinP.flagsThreadMode1) & flTHREADmODE1_SUPPRESStELLmONITOR )
    )
    {
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __( !(byteT*)tellP ) ;
            if( POOP ) return ;
        }
    
        _IO_
                
        //byteT* pbTell = tellP ;

        #if defined( __OS2__ )
            //U:
        #elif defined( __NT__ )

            //OBSOLETE
            //OSm
            //(
            //    OutputDebugString( pbTell ) ;
            //)

            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            THREADmODE2oN( flTHREADmODE2_DISALLOWpUSE )

            //U:: COMMENTED OUT TO FIND A BUG: CONJ: SERVER WILL BE STABLE IF NOTHING IS WRITTEN TO THE MONITOR
            //U:: {
            //U::     sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            //U::     ++ s ; thirdC::thirdWriteToMonitorIF( tinP , tellP , tellP ) ;
            //U:: }

            //static countT cbMax ;
            //if( cbMax < tellP )
            //{
            //    cbMax = tellP ;
            //    CONoUTrAW3( "cbMax is now " , cbMax , "\r\n" ) ;
            //    LOGrAW3( "cbMax is now " , cbMax , "\r\n" ) ;
            //}

            //CONoUTrAW3( "tell [cb]: " , tellP , "\r\n" ) ;
            //CONoUTrAW( "." ) ;
            //CS:CODEsYNC: 0010506 102010a: THE TOTAL SIZE OF THE HEAD AND TAIL THAT I AM REQUESTING HERE IS HARDCODED IN 0010506

            //U:: SYSTEM FOR PURGING OLD VOLUMES OF THE BOOK SO THAT THE DISK USAGE DOES NOT GROW UNBOUNDEDLY
            //U:: THOROUGHLY BURN-IN TEST, LOOKING FOR THE FOLLOWING DEFECTS
            // 1. THE TELEMETRY BOOK'S LAST MODIFIED TIMESTAMP STOPS ADVANCING, APPARENTLY INDICATING THAT WRITING TELEMETRY DEADLOCKS
            // 2. tmEatTelemetryF READS FILL BYTES AS head.  CURRENT EATING CODE WILL DUMP THE HEAD BYTES TO LOG AND THEN EXCEPT.  FILL BYTE WAS CHANGED FROM 0xFF TO 0xEE BUT NOW CNR.  IT SAMEOD SEVERAL TIMES AT 5 CONVENTIONAL HOURS AND AT WOTH SEEMED TO BE AT WILL, BUT BECAME CNR WHEN THE FILL VALUE WAS CHANGED

            /* ENABLE WHEN CONFIDENT THAT THIS WORKS RELIABLY OR WHEN NEED IT FOR DEBUGGING: */
            //static countT idInLath ;
            //CONoUTrAW3( "\r\nDosTellMonitorIF: calling bksTelemetrySys.writeF [idIn]: " , incv02AM( idInLath ) , "" ) ;

            //U:: 20141206@2020: COMMENTED OUT BECAUSE SAW TELEMETRY OVERFLOW THE SCRATCH BUFFER ; ALSO, CLOUD ADMINISTRATION GENERATES LOTS OF TELEMETRY, WHICH WOULD FILL AVAILABLE HARD DRIVE SPACE
            //U:: COMMENT OUT IN PRODUCTION ; ENABLED TO STUDY DEADLOCK IN GRAPHICS TEST ADAM
            //U::BUG: COMMENTED OUT IN PRODUCTION TO AVOID 6d9 BLAMMO DOCUMENTED IN booksC::writeF (SEE COMMENT CONTAINING: "20141206@0700: OBSERVED WITHIN ifcIDaDAM_CLOUD WHILE 3 INSTANCES EXISTED ; 20151026@2013: DITTO WHILE MORE THAN 3 EXISTED BUT ONLY WO WAS ACTIVE AT A TIME")
            //U::20151116@1526: ENABLED IN THE HOPE THAT I WILL BE ABLE TO DEBUG THIS QUICKLY.  THIS IS A BASIC GLASS WALLS FEATURE; I WANT IT TO WORK SO THAT I CAN DEBUG QUIT QUALITY AND OTHER DEFECTS
            //U::20160524@0753: DISABLED; tmReportF FAILS WITH grabitC::ungrabF TRYING TO UNGRAB A BIT THAT IS NOT SET; IT'S ALWAYS THE SAME, ALWAYS WITHIN sexC::sexC, AND ALWAYS TAKES MORE THAN A DAY ; SAMEO USE FULL SERVER PUBLICATION CONFIGURATION ALL YEARS NO GMAIL
            //U::20160525@0920: ENABLED BECAUSE NEED GLASS WALLS TO FIND OTHER BUGS
            //U::20160711@1316: DISABLED TO ELIMINATE HUGE AMOUNT OF I/O CONJ: DUE TO EPHEMERAL THREADS
            //20161112@1449: ENABLED TO DEBUG FACTORY SERVER
            //20180131@0447: DISABLED CONJ: CNR NONMONOTONIC GRAB BLAMMO
            //20180209@1347: ENABLED AFTER ENHANCING poolC TO DIVERT REQUESTS TO A NEW heapC MEMBER OF processGlobal3I
            //20180228@0847: DISABLED TO OPTIMIZE SPEED, AFTER OBSERVING PRODUCTION RUNNING AOK THROUGH COMPLETE GENERATION AND PARTIAL UPLOADING OF ARCHIVE HTML
            //20180607@1731: ENABLED AFTER SEEING LAPTOP STARTUP FAIL TO PROGRESS FOR A LONG TIME IN ae5 (AND THEN PROGRESSING)
            //20180610@1819: DISABLED TO OPTIMIZE SPEED
            //20191006@1920: ENABLED TO TEST
            //20201008@1512: DISABLED TO INVESTIGATE SLOOOOOW EXECUTION
            //20201008@1741: ENABLED FOR PRODUCTION

            //if( idBooksP != ifcIDbOOKStELL_SYS )        //U:: TO FIND A BUG
            //{
            //    BLAMMOiD( 0x4444 ) ;
            //    countT foo = 2 ;
            //}


            switch( idBooksP )
            {
                case ifcIDbOOKStELL_SYS :
                {
                    if( F(processGlobal1I.flCt) & flCTdTg_bksTelemetrySys && !( F(processGlobal1I.flDt) & flCTdTg_bksTelemetrySys ) )
                    {
                        processGlobal3I.bksTelemetrySys.writeF( tinP , tellP , tellP , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ELSEfILLtOeND | flBOOKScwRITE_HEADfINGER1 | flBOOKScwRITE_HEADiDfORMAT | flBOOKScwRITE_HEADcBdATA | flBOOKScwRITE_HEADfINGER2 | flBOOKScwRITE_TAILfINGER | flBOOKScwRITE_FLUSHbOOKhEADoNcHANGE | flBOOKScwRITE_FLUSHb4tAIL | flBOOKScwRITE_FLUSHaTpAGE ) ; //THESE FLAGS OPTIMIZE FOR DATA INTEGRITY AND WILL PRODUCE 1 DISK WRITE FOR EACH TELEMETRY EVENT PLUS A DISK WRITE AT THE END OF EACH PAGE
                    }
                    else
                    {
                        ZE( flagsT , flagsResult ) ;
                        countT cb1 = tellP ;
                        ZE( countT , cb2 ) ;

                        processGlobal3I.bkTelemetrySysEarlyLate.writeF( tinP , flagsResult , tellP , cb1 , 0 , cb2 , flBOOK0cwRITE_ALLoRnONE | flBOOK0cwRITE_ELSEfILLtOeND | flBOOK0cwRITE_HEADfINGER1 | flBOOK0cwRITE_HEADiDfORMAT | flBOOK0cwRITE_HEADcBdATA | flBOOK0cwRITE_HEADfINGER2 | flBOOK0cwRITE_TAILfINGER | flBOOK0cwRITE_FLUSHbOOKhEADoNcHANGE | flBOOK0cwRITE_FLUSHb4tAIL | flBOOK0cwRITE_FLUSHaTpAGE ) ; //THESE FLAGS OPTIMIZE FOR DATA INTEGRITY AND WILL PRODUCE 1 DISK WRITE FOR EACH TELEMETRY EVENT PLUS A DISK WRITE AT THE END OF EACH PAGE

                        boolT bWroteLath = !!( F(flagsResult) & flBOOK0cwRITErESULT_WROTElATHbYTE    ) ;
                        boolT bWroteAll  =  !( F(flagsResult) & flBOOK0cwRITErESULT_COULDnOTwRITEaLL ) ;
                        if( !bWroteAll  ) { CONoUTrAW( "dosTellMonitorIF aaaaaghhh! 1\r\n" ) ; BLAMMO ; }
                        if(  bWroteLath ) { CONoUTrAW( "dosTellMonitorIF aaaaaghhh! 2\r\n" ) ; BLAMMO ; }
                    }

                    break ;
                }
                case ifcIDbOOKStELL_APP :
                {
                    if( F(processGlobal1I.flCt) & flCTdTg_bksTelemetryApp && !( F(processGlobal1I.flDt) & flCTdTg_bksTelemetryApp ) )
                    {
                        processGlobal3I.bksTelemetryApp.writeF( tinP , tellP , tellP , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ELSEfILLtOeND | flBOOKScwRITE_HEADfINGER1 | flBOOKScwRITE_HEADiDfORMAT | flBOOKScwRITE_HEADcBdATA | flBOOKScwRITE_HEADfINGER2 | flBOOKScwRITE_TAILfINGER | flBOOKScwRITE_FLUSHbOOKhEADoNcHANGE | flBOOKScwRITE_FLUSHb4tAIL | flBOOKScwRITE_FLUSHaTpAGE ) ; //THESE FLAGS OPTIMIZE FOR DATA INTEGRITY AND WILL PRODUCE 1 DISK WRITE FOR EACH TELEMETRY EVENT PLUS A DISK WRITE AT THE END OF EACH PAGE
                    }
                    else
                    {
                        ZE( flagsT , flagsResult ) ;
                        countT cb1 = tellP ;
                        ZE( countT , cb2 ) ;

                        processGlobal3I.bkTelemetryAppEarlyLate.writeF( tinP , flagsResult , tellP , cb1 , 0 , cb2 , flBOOK0cwRITE_ALLoRnONE | flBOOK0cwRITE_ELSEfILLtOeND | flBOOK0cwRITE_HEADfINGER1 | flBOOK0cwRITE_HEADiDfORMAT | flBOOK0cwRITE_HEADcBdATA | flBOOK0cwRITE_HEADfINGER2 | flBOOK0cwRITE_TAILfINGER | flBOOK0cwRITE_FLUSHbOOKhEADoNcHANGE | flBOOK0cwRITE_FLUSHb4tAIL | flBOOK0cwRITE_FLUSHaTpAGE ) ; //THESE FLAGS OPTIMIZE FOR DATA INTEGRITY AND WILL PRODUCE 1 DISK WRITE FOR EACH TELEMETRY EVENT PLUS A DISK WRITE AT THE END OF EACH PAGE

                        boolT bWroteLath = !!( F(flagsResult) & flBOOK0cwRITErESULT_WROTElATHbYTE    ) ;
                        boolT bWroteAll  =  !( F(flagsResult) & flBOOK0cwRITErESULT_COULDnOTwRITEaLL ) ;
                        if( !bWroteAll  ) { CONoUTrAW( "dosTellMonitorIF aaaaaghhh! 1\r\n" ) ; BLAMMO ; }
                        if(  bWroteLath ) { CONoUTrAW( "dosTellMonitorIF aaaaaghhh! 2\r\n" ) ; BLAMMO ; }
                    }

                    break ;
                }
                default : { BLAMMO ; break ; }
            }

            THREADmODE2rESTORE
            THREADmODE1rESTORE

            //U::
            //if( F(processGlobal1I.flCt) & flCTdTg_THREADlOCALsTORAGE && !( F(processGlobal1I.flDt) & flCTdTg_THREADlOCALsTORAGE ) )
            //{
            //    countT idType = ((tellS*)(byteT*)tellP)->idType ;
            //}

        #endif

        //U::COMMENTED OUT TO DEBUG A BUG: tellS& head = *(tellS*)(byteT*)tellP ;
        //U::COMMENTED OUT TO DEBUG A BUG: {
        //U::COMMENTED OUT TO DEBUG A BUG:     sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        //U::COMMENTED OUT TO DEBUG A BUG:     //while( head.ipMe ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
        //U::COMMENTED OUT TO DEBUG A BUG:     while( head.ipMe )
        //U::COMMENTED OUT TO DEBUG A BUG:     {
        //U::COMMENTED OUT TO DEBUG A BUG:         ++ s ;
        //U::COMMENTED OUT TO DEBUG A BUG:         thirdC::dosSleepRawIF( tinP , 0x20 ) ; //U::PASS ebp INTO sleepC OBJECT SO THAT IT WON'T USE TINSL
        //U::COMMENTED OUT TO DEBUG A BUG:     }
        //U::COMMENTED OUT TO DEBUG A BUG: }
    
    }
    //else if( _bWoth ) //U::
    //{
    //    _bWoth = 0 ;
    //    if( F(processGlobal1I._thirdC_flagsModeProcess2)    & flMODEpROCESS2_SUPPRESStELLS           ) POPUP( TF1(processGlobal1I.idAdamRoot)+T(": tell is suppressed for the process") ) ;
    //    if( F(tinP.flagsThreadMode1) & flTHREADmODE1_SUPPRESStELLmONITOR ) POPUP( TF1(processGlobal1I.idAdamRoot)+T(": tell is suppressed for the thread") ) ;
    //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e3.thirdc.dostellmonitorif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e4.thirdc.third_cthirdobjects_if BEGIN
#define DDNAME       "3func.350010e4.thirdc.third_cthirdobjects_if"
#define DDNUMB      (countT)0x350010e4
#define IDFILE      (countT)0xa3d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_cThirdObjectsI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT thirdC::third_cThirdObjectsI_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_thirdC_.cThirdObjects ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e4.thirdc.third_cthirdobjects_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e6.thirdc.third_tins_ref_if BEGIN
#define DDNAME       "3func.350010e6.thirdc.third_tins_ref_if"
#define DDNUMB      (countT)0x350010e6
#define IDFILE      (countT)0xa3e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_tinS_ref_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010d.1.0.html\"\>definition\</A\>
for maximum speed, i contain no overhead code
use this to obtain a reference to the tinS, pointer tinP for the current thread, when tinP is not available as a parameter
 for example, use it in the definition of an operator overload
it is illegal to use this when passing tinP in as a parameter is an alternative
 this is to maintain consistency in application coding as well as to maximize speed
if the primary thirdC object is impotent, i will always return a reference to a blank, statically allocated tinS, object
 U: conj: this is in error. correct: if *tinP.pAdamGlobal1->_thirdC_.pThLongLasting is impotent, ...
*/
/**/

/*1*/tinS& thirdC::third_tinS_ref_IF( voidT )/*1*/
{
    //CONJ: THIS IS OBSOLETE STUFF; pTinF() CAN BE CALLED AT ANY TIME NOW
    //tinS* pTin = !( F(processGlobal1I._thirdC_flagsProcessState) & flPROCESSsTATE_MAINtHREADiSaLONE ) || ( F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) )
    //    ? pTinF()
    //    : F(processGlobal1I.flCt) & flCTdTg_tinVeryEarlyLateMainI && !( F(processGlobal1I.flDt) & flCTdTg_tinVeryEarlyLateMainI )
    //        ? &processGlobal4I.tinVeryEarlyLateMain
    //        : &processGlobal3I.tinVeryVeryEarlyLateMain
    //;
    //
    //if( !pTin ) BLAMMO ;
    //return *pTin ;

    tinS* pTin = pTinF() ;
    return *pTin ;

    //U:: return *pTinF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e6.thirdc.third_tins_ref_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e7.thirdc.thprimeif BEGIN
#define DDNAME       "3func.350010e7.thirdc.thprimeif"
#define DDNUMB      (countT)0x350010e7
#define IDFILE      (countT)0xa3f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thPrimeIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010e.1.0.html\"\>definition\</A\>
*/
/**/

//THE FOLLOWING LINE IS FROM THE OVERLOAD THAT TOOK voidT PARAMETER
//THAT OVERLOAD WAS ELIMINATED WHEN MIGRATED GLOBALS
//it is illegal to refer to this symbol anywhere except in the definition of TINSL and in the switchC and stackC operator member code lines that initialize a local tinS, object

/*1*/thirdC& thirdC::thPrimeIF( tinS& tinP )/*1*/
{
    return *tinP.pAdamGlobal1->_thirdC_.pThPrime ; // CAN A.V. IF CALLED EARLY OR LATE (WHEN THERE IS NO thirdC OBJECT)
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e7.thirdc.thprimeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e8.thirdc.thprimeexistsif BEGIN
#define DDNAME       "3func.350010e8.thirdc.thprimeexistsif"
#define DDNUMB      (countT)0x350010e8
#define IDFILE      (countT)0xa40


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thPrimeExistsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT thirdC::thPrimeExistsIF( tinS& tinP )/*1*/
{
    return !!tinP.pAdamGlobal1->_thirdC_.pThPrime ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e8.thirdc.thprimeexistsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e9.thirdc.dosopensharedmemif BEGIN
#define DDNAME       "3func.350010e9.thirdc.dosopensharedmemif"
#define DDNUMB      (countT)0x350010e9
#define IDFILE      (countT)0xa41


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosOpenSharedMemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020110.1.0.html\"\>definition\</A\>
a process can open the same shared memory multiple times no problemo
 just be sure to close each handle obtained exactly wo'ce
if creation is needed, i will block and retry repeatedly until creation succeeds
arguments
 tinP
 handleP
  must be null
 flagsResultP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010207.flOPENsHAREDmEMORYrESULT!||
 postP
  must not be longer than COSTsHAREDmEMmAX
 idHowP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001014c.ifcOPENsHAREDmEMORYhOW!||
 cbP
  ignored if the named memory object exists
*/
/**/

/*1*/voidT thirdC::dosOpenSharedMemIF( tinS& tinP , handleC& handleP , flagsT& flagsResultP , const osTextT* const postP , const handleC* phFileP , const countT cbP , const countT idHowP , const countT idMemorySpaceP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        #if defined( __NT__ )
            { ZE( boolT , foo ) ; __( !foo && sizeof(countT) != sizeof(HANDLE) ) ;  }
        #endif
        __Z( postP ) ;
        if( POOP ) return ;
        __( !*postP ) ;
        __( ~handleP ) ;
        __( flagsResultP ) ;
        //__( !!thirdC::c_strchrIF( tinP , postP , '/' ) ) ;
        __( !!thirdC::c_strchrIF( tinP , postP , '\\' ) ) ;
        __( COSToSfILEnAMEmAX < thirdC::c_strlenIF( tinP , postP ) ) ;
        __( COSTsHAREDmEMmAX < c_strlenIF( tinP , postP ) ) ;
        __( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL2MONITOR && processGlobal1I.idAdamRoot != ifcIDaDAM_KERNEL1DRIVER ) ;
        FV(flOPENsHAREDmEMORY,flagsP) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    flagsResultP = flOPENsHAREDmEMORYrESULT_null ;
    {
        //CODEsYNC: DUPLICATE CODE 1020061 1020068
        OStEXT(   ostoOsName , COSTnAPKINnAMEmAX + 1 )
        OStEXTAK( ostoOsName  , "ideafarm.domains.com.ideafarm.1." ) ;
        OStEXTA(  ostoOsName , thirdC::postUserNameIF() ) ;
        OStEXTAK( ostoOsName  , "." ) ;
        OStEXTC(  ostoOsName , processGlobal1I.idHome , 0 )
        OStEXTAK( ostoOsName  , "." ) ;
        OStEXTCF( ostoOsName , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' )    
        OStEXTAK( ostoOsName  , "." ) ;
        OStEXTA(  ostoOsName  , postP ) ;
        c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostoOsName , '/' , '.' ) ;

        boolT bWoth = 1 ;
        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        ZE( boolT , bFail ) ;
        {
            POOPIE
            {
                if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.grabF( tinP , TAG( TAGiDnULL ) ) ;

                for( countT offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
                {
                    if( !c_strcmpIF( tinP , processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName , ostoOsName ) )
                    {
                        if( idHowP == ifcOPENsHAREDmEMORYhOW_nCeF ) __1
                        else
                        {
                            handleC hRoot( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SHAREDmEMORY ) ;
                            hRoot.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh , 0 , (countT)processGlobal1I._thirdC_pSharedMemInfo[ offr ].pv ) ;
                            handleP = hRoot ; 
                            hRoot.resetF() ;
                            flagsResultP = flOPENsHAREDmEMORYrESULT_ALREADYoPEN | flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ;

                        }
                        break ;
                    }
                }
    
                if( !POOP && !handleP ) switch( idHowP )
                {
                    case ifcOPENsHAREDmEMORYhOW_nCeO :
                    case ifcOPENsHAREDmEMORYhOW_nFeO :
                    {
                        dosGetSharedMemIF( tinP , handleP , postP , idMemorySpaceP , flagsP | flOPENsHAREDmEMORY_DOnOTsERIALIZE ) ;

                        if( POOP && ~handleP )
                        {
                            BLAMMO ; //TO FORCE CALLED FUNCTION TO BE REASONABLE
                        }

                        if( !POOP )
                        {
                            flagsResultP = flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ;
                            break ;
                        }
                        else if( idHowP == ifcOPENsHAREDmEMORYhOW_nFeO ) break ;
                        POOPR
                    }
                    case ifcOPENsHAREDmEMORYhOW_nCeF :
                    {
                        dosAllocSharedMemIF( tinP , handleP , postP , phFileP , cbP , idMemorySpaceP , flagsP | flOPENsHAREDmEMORY_DOnOTsERIALIZE ) ;

                        if( POOP && ~handleP )
                        {
                            BLAMMO ; //TO FORCE CALLED FUNCTION TO BE REASONABLE
                        }

                        if( POOP ) flagsResultP = 0 ;
                        break ;
                    }
                    default : { __( idHowP ) ; __1 break ; }
                }

                if( !( F(flagsP) & flOPENsHAREDmEMORY_DOnOTsERIALIZE ) && F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.ungrabF( tinP ) ;
            }

            bFail = POOP ;
        }
        __( bFail ) ;
        __Z( handleP ) ;
        __( !handleP.cNoteF() ) ;
        //BOSdOnOTtEST( WHATgbo , IsBadReadPtr( (voidT*)handleP.cNoteF() , cbP ? cbP : 1 ) ) //U:: ACCORDING TO WIN32 DOC AT 20121216@0913, THIS FUNCTION DOES NOT WORK AND SHOULD NOT BE USED: http://msdn.microsoft.com/en-us/library/aa366713(VS.85).aspx
        //__( tinP.brcRaw ) ;
    }

         if( POOP                                ) flagsResultP = 0 ;
    else if( F(flagsP) & flOPENsHAREDmEMORY_LOCK )
    {
        raiseWorkingSetSizeHintsIF( tinP , cbP + 1 ) ; //THIS MUST BE DONE BECAUSE THE MINIMUM HINT IS USED AS A MAXIMUM ALLOWED FOR LOCKING (WINSHIT) ; THE "+ 1" MIGHT NOT BE NECESSARY

        OStEXT(   ostoSay , TUCK << 1 ) ;
        OStEXTAK( ostoSay , "locking [pb,cb,name]:    " ) ;
        OStEXTC(  ostoSay , handleP.cNoteF() , 0 ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , cbP , 0 ) ;
        OStEXTAK( ostoSay , "    \"" ) ;
        OStEXTA(  ostoSay , postP ) ;
        OStEXTAK( ostoSay , "\"\r\n" ) ;
        CONoUTrAW( ostoSay ) ; //U::TO FIND A BUG
                  
        BOS( WHATgbo , BOSoK , VirtualLock( (byteT*)handleP.cNoteF() , cbP ) )

        if( tinP.bosFail )
        {
            tinP.bosFail = 0 ;

            osTextT postSay[] = "dosOpenSharedMemIF / could not lock virtual memory" ; // CANNOT USE etherC::traceF WHICH MIGHT INDIRECTLY CALL ME
            CONoUTrAW( "\r\n" ) ;
            CONoUTrAW( postSay ) ;
            processGlobal3S::_processGlobal3I_IF().bksTrace.writeF( tinP , postSay , sizeof postSay - 1 , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ALLOWoDDlENGTH ) ;
        }
    }

    osTraceWrongNodeIF( tinP , (byteT*)handleP.cNoteF() , "dosOpenSharedMemIF: cNote" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010e9.thirdc.dosopensharedmemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ee.thirdc.third_flagsmodeprocess1_if BEGIN
#define DDNAME       "3func.350010ee.thirdc.third_flagsmodeprocess1_if"
#define DDNUMB      (countT)0x350010ee
#define IDFILE      (countT)0xa42


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flagsModeProcess1I_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020116.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT& thirdC::third_flagsModeProcess1I_IF( tinS& tinP )/*1*/
{
    return processGlobal1I._thirdC_flagsModeProcess1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ee.thirdc.third_flagsmodeprocess1_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f0.thirdc.os_callorphanthreads_if BEGIN
#define DDNAME       "3func.350010f0.thirdc.os_callorphanthreads_if"
#define DDNUMB      (countT)0x350010f0
#define IDFILE      (countT)0xa43


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$os_cAllOrphanThreadsI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102011d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT& thirdC::os_cAllOrphanThreadsI_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f0.thirdc.os_callorphanthreads_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f2.thirdc.dosreadprocessmemoryif BEGIN
#define DDNAME       "3func.350010f2.thirdc.dosreadprocessmemoryif"
#define DDNUMB      (countT)0x350010f2
#define IDFILE      (countT)0xa44


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadProcessMemoryIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020120.1.0.html\"\>definition\</A\>
impotence might or might not be caused by inability to read
 the impotence behavior depends on bOkP
arguments
 tinP
 pbP
  must not be 0
  must point to cbP bytes that the caller has write access to
 cbP
  must not be 0
 bOkP
  can be 0 or not 0
  if 0 then will be set to 0 or 1 and impotence will not occur if the locations cannot be read
  if 1 then will be set to 0 or 1 and impotence -will- occur if the locations cannot be read
  after i return, will normally be 1
  will be set to 0 if the requested memory is not accessible for read access
 osPidP
  must not be 0
*/
/**/

/*1*/voidT thirdC::dosReadProcessMemoryIF( tinS& tinP , byteT* const pbP , const countT cbP , boolT& bOkP , const voidT* const pvFromP , const countT osPidP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( osPidP ) ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    _IO_

    const boolT bOkRequired = !!bOkP ;

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
        { POOPIE osOpenProcessIF( tinP , handle , osPidP ) ; }

        if( !handle )
        {
            if( bOkRequired )
            {
                bOkP = 0 ;
                __1
            }
        }
        else
        {
            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            ZE( DWORD , cba ) ;
            BOS( WHATgbo , BOSoK , ReadProcessMemory( (HANDLE)handle.osF( ifcIDtYPEhANDLE_PROCESS ) , (voidT*)pvFromP , pbP , cbP , &cba ) )
            bOkP = !tinP.bosFail ;
            if( bOkRequired && !bOkP )
            {
                __( tinP.brcLath ) ;
                __1
            }
            if( bOkP ) { __( cba - cbP ) ; }
            if( POOP ) bOkP = 0 ;
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f2.thirdc.dosreadprocessmemoryif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f3.thirdc.doswriteprocessmemoryif BEGIN
#define DDNAME       "3func.350010f3.thirdc.doswriteprocessmemoryif"
#define DDNUMB      (countT)0x350010f3
#define IDFILE      (countT)0xa45


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteProcessMemoryIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020122.1.0.html\"\>definition\</A\>
impotence might or might not be caused by inability to read
 the impotence behavior depends on bOkP
arguments
 tinP
 bOkP
  can be 0 or not 0
  if 0 then will be set to 0 or 1 and impotence will not occur if the locations cannot be read
  if 1 then will be set to 0 or 1 and impotence -will- occur if the locations cannot be read
  after i return, will normally be 1
  will be set to 0 if the requested memory is not accessible for read access
 pvToP
  must not be 0
  must point to cbP bytes that process osPidP has write access to
 osPidP
  must not be 0
 pbP
  must not be 0
  must point to cbP bytes that the caller has read access to
 cbP
  must not be 0
*/
/**/

/*1*/voidT thirdC::dosWriteProcessMemoryIF( tinS& tinP , boolT& bOkP , voidT* const pvToP , const countT osPidP , byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pvToP ) ;
        __Z( osPidP ) ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    _IO_

    const boolT bOkRequired = !!bOkP ;

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
        { POOPIE osOpenProcessIF( tinP , handle , osPidP ) ; }

        if( !handle )
        {
            if( bOkRequired )
            {
                bOkP = 0 ;
                __1
            }
        }
        else
        {
            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            ZE( DWORD , cba ) ;
            BOS( WHATgbo , BOSoK , WriteProcessMemory( (HANDLE)handle.osF( ifcIDtYPEhANDLE_PROCESS ) , (voidT*)pvToP , pbP , cbP , &cba ) )
            bOkP = !tinP.bosFail ;
            if( bOkRequired && !bOkP )
            {
                __( tinP.brcLath ) ;
                __1
            }
            if( bOkP ) { __( cba - cbP ) ; }
            if( POOP ) bOkP = 0 ;
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f3.thirdc.doswriteprocessmemoryif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f4.thirdc.strbodylengthif BEGIN
#define DDNAME       "3func.350010f4.thirdc.strbodylengthif"
#define DDNUMB      (countT)0x350010f4
#define IDFILE      (countT)0xa46


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strBodyLengthIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020123.1.0.html\"\>definition\</A\>
evaluates to the number of countT objects in the string, excluding the terminating null countT object
arguments
 pcP
*/
/**/

/*1*/countT thirdC::strBodyLengthIF( tinS& tinP , const countT* pcP )/*1*/
{
    IFbEcAREFUL        
    {
        if( POOP ) return 0 ;
        __Z( pcP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , cc ) ;
    while( *pcP )
    {
        cc ++ ;
        pcP ++ ;
    }
    return cc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f4.thirdc.strbodylengthif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f5.thirdc.third_idprocessold_if BEGIN
#define DDNAME       "3func.350010f5.thirdc.third_idprocessold_if"
#define DDNUMB      (countT)0x350010f5
#define IDFILE      (countT)0xa47


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_idProcessOldI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020124.1.0.html\"\>definition\</A\>
idProcessOldI is the unique value assigned to this process by the monitor (6a40104)
it will be unique for the local host, except when the monitor program's state has been reset (which should never happen)
*/
/**/

/*1*/countT& thirdC::third_idProcessOldI_IF( tinS& tinP )/*1*/
{

    if( tinP.fingerprint ) ;
    return processGlobal1I.idProcessOld ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f5.thirdc.third_idprocessold_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f6.thirdc.ostimetickssincebootif BEGIN
#define DDNAME       "3func.350010f6.thirdc.ostimetickssincebootif"
#define DDNUMB      (countT)0x350010f6
#define IDFILE      (countT)0xa48


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeTicksSinceBootIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020125.1.0.html\"\>definition\</A\>
i evaluate to the operating system's raw time counter value
 os/2: 0 U: (code is not in place)
 windows nt: milliseconds since boot
for speed, this function contains no overhead code
on a virtual machine, this can be the time since the virtual hoster was booted
 ifo servier is running on godaddy hardware under Virtuozzo
 within a Virtuozzo vm, this does NOT return time since the vm was booted!
*/
/**/

/*1*/count04T thirdC::osTimeTicksSinceBootIF( voidT )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( count04T , _brcRaw ) ;
        BOSnOtIN( GetTickCount64() )
        return _brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f6.thirdc.ostimetickssincebootif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f8.thirdc.dosgetcommandlineif BEGIN
#define DDNAME       "3func.350010f8.thirdc.dosgetcommandlineif"
#define DDNUMB      (countT)0x350010f8
#define IDFILE      (countT)0xa49


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetCommandLineIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020129.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**//*1*/const osTextT* thirdC::dosGetCommandLineIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;

    #ifdef __OS2__
        //U:
    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , GetCommandLine() )
        BOSpOOP
        osTextT* postl = (osTextT*)tinP.brcRaw ;

    #endif

    return postl ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f8.thirdc.dosgetcommandlineif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f9.thirdc.dossetcurrentdirif BEGIN
#define DDNAME       "3func.350010f9.thirdc.dossetcurrentdirif"
#define DDNUMB      (countT)0x350010f9
#define IDFILE      (countT)0xa4a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetCurrentDirIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 postP
  length must be <= 0x200
  must end with '\'
*/
/**/

#define CBbUF102012a 0x200

/*1*/voidT thirdC::dosSetCurrentDirIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    const countT costP = postP ? c_strlenIF( tinP , postP ) : 0 ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
        __( costP > CBbUF102012a ) ;
        __( postP[ costP - 1 ] - '\\' ) ;
        if( POOP ) return ;
    }

    _IO_
    {
        #ifdef __OS2__
            BOS( WHATsfw , BOSfAIL , DosSetCurrentDir( postP ) )
            BOSpOOP
            // 970410.1358: Mick.Brown@worldnet.att.net: 180f07d4 file-2892.line-14.exception-3
        #elif defined( __NT__ )
            BOSnOvALUE( WHATsfw , SetLastError( 0 ) )
            BOS( WHATsfw , BOSoK , SetCurrentDirectory( postP ) )

            if( tinP.bosFail )
            {
                LOGrAW( "dosSetCurrentDirIF failed [postP]: \"" ) ;
                LOGrAW( postP ) ;
                LOGrAW( "\"\r\n" ) ;
            }

            BOSpOOP
        #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010f9.thirdc.dossetcurrentdirif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010fb.thirdc.dosgetcurrentdirif BEGIN
#define DDNAME       "3func.350010fb.thirdc.dosgetcurrentdirif"
#define DDNUMB      (countT)0x350010fb
#define IDFILE      (countT)0xa4b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetCurrentDirIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012c.1.0.html\"\>definition\</A\>
arguments
 tinP
 postP
  can be 0
  if 0 then costaP must also be 0
  if costaP is >= the number of osTextT objects needed to store the value, including the null terminator, then the value will be written to postP
 costaP
  if postP is 0 then costaP must be 0
  else costaP must be the number of accessible bytes pointed to by postP
  after evaluation, will contain the number of accessible bytes needed to store the full value including the null terminator
  this parameter is called "costaP" rather than "costP" to indicate that the value includes the null terminator
*/
/**//*1*/voidT thirdC::dosGetCurrentDirIF( tinS& tinP , osTextT* const postP , countT& costaP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !postP - !costaP ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        //U:
    #elif defined( __NT__ )

        countT costaPsave = costaP ;
        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        BOS( WHATgbo , BOSoK , GetCurrentDirectory( 0 , 0 ) ) //INCLUDES SPACE FOR THE NULL TERMINATOR
        BOSpOOP
        if( !POOP )
        {
            costaP = tinP.brcRaw ;
            if( postP && costaP <= costaPsave )
            {
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOS( WHATgbo , BOSoK , GetCurrentDirectory( costaP , postP ) )
                BOSpOOP
                if( !POOP )
                {
                    countT costw = tinP.brcRaw ;
                    __Z( costw ) ;
                    __( costaP - 1 - costw ) ;
                    c_strlwrIF( tinP , postP ) ;
                }
            }
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010fb.thirdc.dosgetcurrentdirif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010fd.thirdc.thirdfireimpersonatemonitorif BEGIN
#define DDNAME       "3func.350010fd.thirdc.thirdfireimpersonatemonitorif"
#define DDNUMB      (countT)0x350010fd
#define IDFILE      (countT)0xa4c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdFireImpersonateMonitorIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
sets thirdC::bFire for this process, exactly as if it was set by the monitor process
*/
/**/
/*1*/voidT thirdC::thirdFireImpersonateMonitorIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    if( !tinP.pAdamGlobal1->_thirdC_.bFired01 )
    {
        //LOGrAW( "thirdC::thirdFireImpersonateMonitorIF: setting bFired01\r\n" ) ;
        //LOGcALLnEST( "thirdFireImpersonateMonitorIF" ) ;

        tinP.pAdamGlobal1->_thirdC_.bFired01 = 1 ; //CONDITIONAL, SO CAN PUT A WRITE BREAKPOINT ON tinP.pAdamGlobal1->_thirdC_.bFired01 TO SEE WHETHER DEBUG PROCESS IS SETTING IT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010fd.thirdc.thirdfireimpersonatemonitorif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ff.thirdc.osopenprocessif BEGIN
#define DDNAME       "3func.350010ff.thirdc.osopenprocessif"
#define DDNUMB      (countT)0x350010ff
#define IDFILE      (countT)0xa4d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osOpenProcessIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020130.1.0.html\"\>definition\</A\>
arguments
 tinP
 hProcessP
  must be 0
*/

/**//*1*/voidT thirdC::osOpenProcessIF( tinS& tinP , handleC& hProcessP , const countT osPidP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( ~hProcessP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , osPid ) ;
    if( osPidP ) osPid = osPidP ;
    else
    {
        BOSdOnOTtEST( WHATgbo , GetCurrentProcessId() )
        osPid = tinP.brcRaw ;
    }

    #ifdef __OS2__
        //U:
    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , OpenProcess( PROCESS_ALL_ACCESS , 0 , osPid ) )
        hProcessP.osF( ifcIDtYPEhANDLE_PROCESS , tinP.brcRaw ) ;
        if( !hProcessP ) __1

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350010ff.thirdc.osopenprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001100.thirdc.c_memcpyif BEGIN
#define DDNAME       "3func.35001100.thirdc.c_memcpyif"
#define DDNUMB      (countT)0x35001100
#define IDFILE      (countT)0xa4e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memcpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020134.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

//U::ELIMINATE THIS OVERLOAD

/*1*/voidT thirdC::c_memcpyIF( const poopC& poopP , byteT* const pbToP , const byteT* const pbFromP , const countT cbP )/*1*/
{
    if( poopP ) return ;
    ZE( countT , rc ) ;
    if( !pbToP ) rc = 1 ;
    if( !pbFromP ) rc = 2 ;
    if( rc )
    {
        TINSL //U::JUST TO GET CLEAN BUILD
        ((poopC&)poopP).gruntF( tinP , TAG( TAGiDnULL ) , rc , ifcIDtYPEpOOP_GRUNT ) ;
    }
    if( poopP ) return ;

    if( cbP ) memcpy( pbToP , pbFromP , cbP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001100.thirdc.c_memcpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001104.thirdc.osdonothingloopif BEGIN
#define DDNAME       "3func.35001104.thirdc.osdonothingloopif"
#define DDNUMB      (countT)0x35001104
#define IDFILE      (countT)0xa4f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDoNothingLoopIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102013a.1.0.html\"\>definition\</A\>
arguments
 tinP
 cToDoP
  can be 0
  if 0 then will loop until asynch impotence is detected (!!msSleepP), or 0 times (!msSleepP)
  else will loop cToDoP times unless !!msSleepP and asynch impotence is detected
 msSleepP
  can be 0
  if 0 then loop is simple and does not check for asynch impotence
  else loop checks for asynch impotence and Sleep is called at the end of each iteration
*/
/**//*1*/voidT thirdC::osDoNothingLoopIF( tinS& tinP , countT cToDoP , const countT msSleepP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    boolT bForever = !cToDoP ;

    _IO_

    if( msSleepP ) // THIS LOOP IS FOR VALIDATING THREAD STATUS REPORTING
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !thPrimeIF( tinP ) && ( bForever || cToDoP -- ) ) // operator countT& IS NOT CALLED INTENTIONALLY, TO AVOID MAKING ANY CALLS BETWEEN "IN" AND "OUT"; THIS IS AVOIDED SO THE THREAD STATUS WILL BE SIMPLE AND REGULAR WHILE I AM LOOPING, AND SO I CAN BE USED TO BENCHMARK THE _ MACRO
        {
            ;              // THERE ARE 4 INVOCATIONS OF _, FOLLOWED BY DIRECT CALL TO OS SLEEP (TO AVOID AN IFC CALL TO KEEP THREAD STATUS SIMPLE)
            ;
            ;
            ;
            ++ s ; thirdC::dosSleepRawIF( tinP , msSleepP ) ;
        }
    }
    else // THIS LOOP IS FOR BENCHMARKING THE _ MACRO
    {
        while( cToDoP -- ) // operator countT& IS NOT CALLED INTENTIONALLY, TO AVOID MAKING ANY CALLS BETWEEN "IN" AND "OUT"; THIS IS AVOIDED SO THE THREAD STATUS WILL BE SIMPLE AND REGULAR WHILE I AM LOOPING, AND SO I CAN BE USED TO BENCHMARK THE _ MACRO
        {
            ;              // THERE ARE 01 INVOCATIONS OF _
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001104.thirdc.osdonothingloopif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110b.thirdc.thirdtimenowif BEGIN
#define DDNAME       "3func.3500110b.thirdc.thirdtimenowif"
#define DDNUMB      (countT)0x3500110b
#define IDFILE      (countT)0xa50


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdTimeNowIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020142.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/const timeS& thirdC::thirdTimeNowIF( tinS& tinP )/*1*/
{
    return (const timeS&)tinP.pAdamGlobal1->_thirdC_.timeNow ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110b.thirdc.thirdtimenowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110c.thirdc.doswritestdoutif BEGIN
#define DDNAME       "3func.3500110c.thirdc.doswritestdoutif"
#define DDNUMB      (countT)0x3500110c
#define IDFILE      (countT)0xa51


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteStdOutIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020143.1.0.html\"\>definition\</A\>
writes the specified text to standard out
arguments
 tinP
 postP
*/
/**/

/*1*/voidT thirdC::dosWriteStdOutIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    if( !( F(thirdC::third_flagsModeAdam1I_IF(tinP)) & flADAMmODE1_QUIETcONSOLE ) && postP )
    {
        BOSdOnOTtEST( WHATgbo , strlen( postP ) )
        countT cost = tinP.brcRaw ;
        ZE( ULONG , cba ) ;
    
        if( cost )
        {
            #ifdef __OS2__
    
                //U: p WinRoot
                BOS( WHATsfw , BOSfAIL , DosWrite( (HFILE)1 , (voidT*)postP , cost , &cba ) )
                //BOSpOOP
    
            #elif defined( __NT__ )
    
                windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                if( pRootI ) pRootI->letRefF() ;
                else
                {
                    BOS( WHATgbo , BOShANDLE , GetStdHandle( STD_OUTPUT_HANDLE ) ) //INTENTIONALLY NOT CLOSED, PER MSDN DOC COMMENT
                    BOSpOOP
    
                    BOS( WHATsfw , BOSoK , WriteFile( (HANDLE)tinP.brcRaw , postP , cost , &cba , 0 ) ) //U: ENABLE THIS CODE ONLY IF THERE IS A CONSOLE
                    //BOSpOOP
                }
    
            #endif
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110c.thirdc.doswritestdoutif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110d.thirdc.win_bwindowcanbecreatedif BEGIN
#define DDNAME       "3func.3500110d.thirdc.win_bwindowcanbecreatedif"
#define DDNUMB      (countT)0x3500110d
#define IDFILE      (countT)0xa52


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$win_bWindowCanBeCreatedIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020144.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT thirdC::win_bWindowCanBeCreatedIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( boolT , bOk ) ;
    #if defined( __NT__ )

    BOS( WHATgbo , BOSoK , CreateWindow( "STATIC" , "ifcTestWindow" , WS_DISABLED , 0 , 0 , 1 , 1 , 0 , 0 , (HINSTANCE)processGlobal3I._thirdC_hWindowingClient.osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) , 0 ) )
    HWND hWindow = (HWND)tinP.brcRaw ;

    bOk = !!hWindow ;
    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
    handle.osF( ifcIDtYPEhANDLE_WINDOW , (countT)hWindow ) ;

    #endif

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110d.thirdc.win_bwindowcanbecreatedif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110e.thirdc.windestroywindowclassif BEGIN
#define DDNAME       "3func.3500110e.thirdc.windestroywindowclassif"
#define DDNUMB      (countT)0x3500110e
#define IDFILE      (countT)0xa53


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winDestroyWindowClassIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020145.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::winDestroyWindowClassIF( tinS& tinP , const osTextT* const postOldClassP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postOldClassP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )
        
        //U:
            
    #elif defined( __NT__ )
    
        BOS( WHATgbo , BOSoK , UnregisterClass( postOldClassP , (HINSTANCE)processGlobal3I._thirdC_hWindowingClient.osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) ) )
        BOSpOOP
        
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110e.thirdc.windestroywindowclassif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110f.thirdc.thirdimpotencehandlerif BEGIN
#define DDNAME       "3func.3500110f.thirdc.thirdimpotencehandlerif"
#define DDNUMB      (countT)0x3500110f
#define IDFILE      (countT)0xa54


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdImpotenceHandlerIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020146.1.0.html\"\>definition\</A\>
i register a handler function that will be called each time thirdC::operator countT&() is about to return a nonze value
by doing so, an adam definition can detect an impending impotence and perform work before the impotence is seen
the handler receives a reference to the thirdC object that is being evaluated into a countT&
this is fyi only; the handler cannot modify the behavior of thirdC::operator countT&()
serialization and filtering is the responsibility of the handler definition
 if only asynch impotence is to be detected, the handler must compare thirdP with thPrime
 the handler will be called simultaneously by several threads when thPrime becomes impotent
  if these calls must be serialized, the handler definition must serialize itself
   this can be done by defining a local static grabC object and grabbing it
 if only the woth occurance need be detected, the handler can deregister itself
  a handler might be called wo or more times soon after it is deregistered
  if this is an issue, the handler can serialize itself and use a static countT object to maintain an idEntry value
i can be used to replace or unregister a handler
 however, the old handler address must continue to be valid since the old handler can be called after it has been deregistered
  if the handler serializes, be aware that other threads might have already entered the old handler and are blocked
warning: if ifcImpotenceHandlerArgIP contains a pointer, be careful
 you do not know which threads will call the handler, or when
 ensure that any object pointed to by the argument will still exist when the handler is called
arguments
 tinP
 ifcImpotenceHandlerArgIP
 pifcImpotenceHandlerFIP
*/
/**/

/*1*/voidT thirdC::thirdImpotenceHandlerIF( tinS& tinP , const ifcImpotenceHandlerFT pifcImpotenceHandlerFIP , const countT ifcImpotenceHandlerArgIP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    tinP.pAdamGlobal1->_thirdC_.pifcImpotenceHandlerF = pifcImpotenceHandlerFIP ;
    tinP.pAdamGlobal1->_thirdC_.ifcImpotenceHandlerArg = ifcImpotenceHandlerArgIP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500110f.thirdc.thirdimpotencehandlerif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001110.thirdc.osprocessidphaseadamif BEGIN
#define DDNAME       "3func.35001110.thirdc.osprocessidphaseadamif"
#define DDNUMB      (countT)0x35001110
#define IDFILE      (countT)0xa55


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osProcessIdPhaseAdamIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020148.1.0.html\"\>definition\</A\>
arguments
 tinP
 idPhaseP
  must not be 0
  must be greater than current phase
*/
/**/

/*1*/voidT thirdC::osProcessIdPhaseAdamIF( tinS& tinP , const countT idPhaseP )/*1*/
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001110.thirdc.osprocessidphaseadamif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001111.thirdc.osprocessidphaseadamif BEGIN
#define DDNAME       "3func.35001111.thirdc.osprocessidphaseadamif"
#define DDNUMB      (countT)0x35001111
#define IDFILE      (countT)0xa56


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osProcessIdPhaseAdamIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020149.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT thirdC::osProcessIdPhaseAdamIF( tinS& tinP )/*1*/
{
    return 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001111.thirdc.osprocessidphaseadamif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001114.thirdc.third_flagsprocessstate_if BEGIN
#define DDNAME       "3func.35001114.thirdc.third_flagsprocessstate_if"
#define DDNUMB      (countT)0x35001114
#define IDFILE      (countT)0xa57


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flagsProcessStateI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102014c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT thirdC::third_flagsProcessStateI_IF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return processGlobal1I._thirdC_flagsProcessState ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001114.thirdc.third_flagsprocessstate_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001115.thirdc.third_flagsprocessstate_if BEGIN
#define DDNAME       "3func.35001115.thirdc.third_flagsprocessstate_if"
#define DDNUMB      (countT)0x35001115
#define IDFILE      (countT)0xa58


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flagsProcessStateI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102014d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::third_flagsProcessStateI_IF( tinS& tinP , const flagsT flagsP , const boolT bOnP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( bOnP > 1 ) ;
        FV( flPROCESSsTATE , flagsP ) ;
        if( POOP ) return ;
    }

    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_
        processGlobal3I._thirdC_grab_flagsProcessState_.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( bOnP ) processGlobal1I._thirdC_flagsProcessState |= flagsP ;
        else       processGlobal1I._thirdC_flagsProcessState &= ~( F(flagsP) ) ;
        processGlobal3I._thirdC_grab_flagsProcessState_.ungrabF( tinP ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001115.thirdc.third_flagsprocessstate_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001116.thirdc.winmoveif BEGIN
#define DDNAME       "3func.35001116.thirdc.winmoveif"
#define DDNUMB      (countT)0x35001116
#define IDFILE      (countT)0xa59


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winMoveIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102014e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
for max speed, i contain no overhead and i obtain my parameters from tinP
*/
/**/

/*1*/voidT thirdC::winMoveIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;
        BOS( WHATsww , BOSoK , MoveToEx( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColP ) ) , R( winOsRowIF( mIdRowP , cRowsDraw ) ) , 0 ) )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001116.thirdc.winmoveif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001117.thirdc.winlineif BEGIN
#define DDNAME       "3func.35001117.thirdc.winlineif"
#define DDNUMB      (countT)0x35001117
#define IDFILE      (countT)0xa5a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
for max speed, i contain no overhead and i obtain my parameters from tinP
*/
/**/

/*1*/voidT thirdC::winLineIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColP , const measureT mIdRowP , const countT colorP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
    {
        #if defined( __OS2__ )

            //U:

        #elif defined( __NT__ )

            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            countT idcTo   = R( winOsColIF( mIdColP             ) ) ;
            countT idrTo   = R( winOsRowIF( mIdRowP , cRowsDraw ) ) ;

            BOS( WHATsww , BOSoK , LineTo(   (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcTo , idrTo ) )
            BOSpOOP
            if( F(flagsP) & flDRAW_INCLUDEeNDpEL )
            {
                BOS( WHATgbo , BOSoK , SetPixelV( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcTo , idrTo , colorP ) )
                BOSpOOP
            }

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001117.thirdc.winlineif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001118.thirdc.c_strcatif BEGIN
#define DDNAME       "3func.35001118.thirdc.c_strcatif"
#define DDNUMB      (countT)0x35001118
#define IDFILE      (countT)0xa5b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcatIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020150.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/osTextT* thirdC::c_strcatIF( osTextT* const post1P  , const osTextT* const post2P )/*1*/
{
    if( post1P && post2P && post1P != post2P )
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( strcat( post1P , post2P ) )
    }
    return post1P ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001118.thirdc.c_strcatif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001119.thirdc.c_strncpyif BEGIN
#define DDNAME       "3func.35001119.thirdc.c_strncpyif"
#define DDNUMB      (countT)0x35001119
#define IDFILE      (countT)0xa5c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strncpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020151.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT thirdC::c_strncpyIF( osTextT* const post1P , const osTextT* const post2P , countT costa1P )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strncpy( post1P , post2P , costa1P ) )
    if( post1P[ costa1P - 1 ] ) post1P[ costa1P - 1 ] = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001119.thirdc.c_strncpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111a.thirdc.c_strcpyif BEGIN
#define DDNAME       "3func.3500111a.thirdc.c_strcpyif"
#define DDNUMB      (countT)0x3500111a
#define IDFILE      (countT)0xa5d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020152.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/osTextT* thirdC::c_strcpyIF( osTextT* const post1P  , const osTextT* const post2P )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strcpy( post1P , post2P ) )
    return post1P ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111a.thirdc.c_strcpyif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111b.thirdc.osmessageboxif BEGIN
#define DDNAME       "3func.3500111b.thirdc.osmessageboxif"
#define DDNUMB      (countT)0x3500111b
#define IDFILE      (countT)0xa5e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osMessageBoxIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020154.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::osMessageBoxIF( const osTextT* const postP , const osTextT* const postTitleP )/*1*/
{
    const osTextT* postTitle = postTitleP && *postTitleP ? postTitleP : "IdeaFarm " "(tm) City" ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( MessageBox( 0 , postP , postTitle , MB_OK | MB_SERVICE_NOTIFICATION ) )

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111b.thirdc.osmessageboxif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111c.thirdc.c_strlenif BEGIN
#define DDNAME       "3func.3500111c.thirdc.c_strlenif"
#define DDNUMB      (countT)0x3500111c
#define IDFILE      (countT)0xa5f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strlenIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020155.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/countT thirdC::c_strlenIF( const osTextT* const postP )/*1*/
{
    if( !postP ) return 0 ;
    else
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( strlen( postP ) )
        return _brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111c.thirdc.c_strlenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111d.thirdc.third_tinmaini_if BEGIN
#define DDNAME       "3func.3500111d.thirdc.third_tinmaini_if"
#define DDNUMB      (countT)0x3500111d
#define IDFILE      (countT)0xa60


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$tinVeryEarlyLateMain_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020156.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol anywhere except in the system code that returns a reference either to me or to the tinS, allocated in the primary poolOld
*/
/**/

/*1*/tinS& thirdC::tinVeryEarlyLateMain_IF( voidT )/*1*/
{
    return processGlobal4I.tinVeryEarlyLateMain ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111d.thirdc.third_tinmaini_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111e.thirdc.doswritestdoutif BEGIN
#define DDNAME       "3func.3500111e.thirdc.doswritestdoutif"
#define DDNUMB      (countT)0x3500111e
#define IDFILE      (countT)0xa61


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteStdOutIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020157.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT thirdC::dosWriteStdOutIF( const osTextT* const postP )/*1*/
{
    if( /*!( F(thirdC::third_flagsModeAdam1I_IF(tinP)) & flADAMmODE1_QUIETcONSOLE ) &&*/ postP ) //ACCESS TO PROCESS MODE FLAGS NOW REQUIRES ACCESS TO tinP
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( strlen( postP ) )
        countT cost = _brcRaw ;
        if( cost )
        {
            ZE( countT , _brcRaw ) ;
            BOSnOtIN( GetStdHandle( STD_OUTPUT_HANDLE ) ) //INTENTIONALLY NOT CLOSED, PER MSDN DOC COMMENT
            HANDLE osh = (HANDLE)_brcRaw ;

            ZE( ULONG , cba ) ;
            BOSnOtIN( WriteFile( osh , postP , cost , &cba , 0 ) )
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500111e.thirdc.doswritestdoutif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001120.thirdc.osblammoif BEGIN
#define DDNAME       "3func.35001120.thirdc.osblammoif"
#define DDNUMB      (countT)0x35001120
#define IDFILE      (countT)0xa62


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osBlammoIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102015b.1.0.html\"\>definition\</A\>
this function causes an access violation
arguments
 tinP
*/
/**/

/*1*/voidT thirdC::osBlammoIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    BLAMMO
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001120.thirdc.osblammoif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001121.thirdc.third_pcdebugi_if BEGIN
#define DDNAME       "3func.35001121.thirdc.third_pcdebugi_if"
#define DDNUMB      (countT)0x35001121
#define IDFILE      (countT)0xa63


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_pcDebugI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.102015c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol anywhere except in the system code that returns a reference either to me or to the tinS, allocated in the primary poolOld
*/
/**/

/*1*/countT* thirdC::third_pcDebugI_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->pcDebug ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001121.thirdc.third_pcdebugi_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001123.thirdc.ifccellisaliveif BEGIN
#define DDNAME       "3func.35001123.thirdc.ifccellisaliveif"
#define DDNUMB      (countT)0x35001123
#define IDFILE      (countT)0xa64


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ifcCellIsAliveIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102015e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT thirdC::ifcCellIsAliveIF( tinS& tinP , const countT idAdamP , const osTextT* const postSuffixP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( idAdamP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( boolT , bAlive ) ;
    {
        OStEXT( ostoName , 0x80 )
        OStEXTAK( ostoName  , postIFChANDOFFoLDpREFIX ) ;
        OStEXTC( ostoName  , idAdamP , 0 ) ;
        if( postSuffixP ) OStEXTA( ostoName  , postSuffixP ) ;

        {
            POOPIE
            handleC hNapkin( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SHAREDmEMORY ) ;
            ZE( byteT* , pbNapkin ) ;
            ZE( flagsT , flags ) ;
            thirdC::dosOpenSharedMemIF(  tinP , hNapkin , flags , ostoName , 0 , 0 , ifcOPENsHAREDmEMORYhOW_nFeO ) ;
            pbNapkin = (byteT*)hNapkin.cNoteF() ;
            bAlive = !POOP ;
        }
    }

    return bAlive ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001123.thirdc.ifccellisaliveif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001125.thirdc.c_itoaforeignif BEGIN
#define DDNAME       "3func.35001125.thirdc.c_itoaforeignif"
#define DDNUMB      (countT)0x35001125
#define IDFILE      (countT)0xa65


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_itoaForeignIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020160.1.0.html\"\>definition\</A\>
this function is optimized for speed
 it contains no overhead code
arguments
 postP
  must point to at least 8 bytes of storage
  caller should normally allocate 9 bytes, and initialize the 9th byte to 0
  will be set to base 16_ digits representing the unsigned value valueP
   the number will be in foreign format with high ze's
 valueP
 ostPadP
  can be 0
  high order '0' digits, excluding the units digit, will be replaced with this value
*/
/**/

/*1*/voidT thirdC::c_itoaForeignIF( osTextT* const postP , countT valueP , const osTextT ostPadP )/*1*/
{
    countT cToDo = 2 * sizeof( countT ) ;
    countT off = cToDo - 1 ;
    ZE( countT , digit ) ;
    while( cToDo -- )
    {
        digit = valueP & 0xf ;
        valueP >>= 4 ;
        postP[ off -- ] = (osTextT)( digit < 0xa ? '0' + digit : 'a' + digit - 0xa ) ;
    }

    if( ostPadP != '0' )
    {
        off = 0 ;
        while( off < 2 * sizeof( countT ) - 1 )
        {
            if( postP[ off ] == '0' ) postP[ off ] = ostPadP ;
            else                      break ;
            off ++ ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001125.thirdc.c_itoaforeignif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001126.thirdc.handlecloseif BEGIN
#define DDNAME       "3func.35001126.thirdc.handlecloseif"
#define DDNUMB      (countT)0x35001126
#define IDFILE      (countT)0xa66


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$handleCloseIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020161.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::handleCloseIF( handleC& handleP )/*1*/
{
    if( ~handleP.osh != handleP.oshInvalid )
    {
        TINSL //U::CONJ: THIS WILL FAIL VERY EARLY; IF NOT THEN LET'S JUST ADD tinP TO THE PARAMETERS

        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / j\r\n" ) ;

        _IO_

        switch( handleP.idType )
        {
            case ifcIDtYPEhANDLE_sadamsC :
            {
                _IO_
                sadamsC::pSadamsIF( tinP )->unlockF( tinP , handleP ) ;
                break ;
            }
            case ifcIDtYPEhANDLE_BOOKS :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_LINKED :
            {
                _IO_
                ((linkedC*)handleP.osh)->ungrabF( tinP ) ;
                break ;
            }
            case ifcIDtYPEhANDLE_LISTING :
            {
                _IO_
                //__( thirdC::dosPriorityIF( tinP ) - ifcTHREADpRIORITY_SPINLOCK ) ;

                listingC* pListing = (listingC*)handleP.osh ;

                flagsT flagsx = flGRABITc_SUPPRESScTdT | flGRABITc_UNKEYED ; //CS:CODEsYNC 360e5007 35001126 "flGRABITc_UNKEYED" IS SPECIFIED TO AVOID NEEDING TO DOUBLE THE SIZE OF THE sexC ALLOCATION DROP FOR listingC INSTANCES.  sizeof( listingC ) IS CURRENTLY OPTIMAL.  ADDING A countT MEMBER TO HOLD A KEY WOULD CHANGE THE ALLOCATION DROP SIZE.
                //ZE( countT , idNameDebug ) ;
                if( pListing->flagsF() & fliLISTINGc_MIXINlIST )
                {
                    countT idName = ((listC*)pListing)->nameF() ;
                    //idNameDebug = idName ;
                    if
                    (
                        idName == LISTnAME_ROOT
                        ||
                        idName == LISTnAME_ROOTaPPLICATION
                        ||
                        (
                            idName >= LISTnAME_ROOTsYSTEM1
                            &&
                            idName <= LISTnAME_ROOTsYSTEM8              //CS:CODEsYNC: 330e5007 33001126 3300039b
                        )
                    )
                    flagsx |= flGRABITc_RECURSEuSINGtINs ;
                }

                grabitC grabitx( tinP , TAG( TAGiDnULL ) , pListing->flagsRefF() , ifcIDgRABITbIT_00 + offLISTINGgRABBEDbIT , *(grabitC*)0 , 0 , 0 , 0 , flagsx ) ;

                //if( tinP.pc Utility[ 0 ] && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_KERNEL2MONITOR )
                //{
                //    OStEXT(   ostoSay , TUCK << 2 ) ;
                //    OStEXTAK( ostoSay , "openF / ungrabbing [idName]: " ) ;
                //    OStEXTC(  ostoSay , idNameDebug , 0 ) ;
                //
                //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
                //}

                if( grabitx.isRegisteredF( tinP ) )
                {
                    _IO_


                    //U:: TO FIND A BUG
                    OStEXT(   ostoSay , TUCK << 2 ) ;
                    OStEXTCF( ostoSay , (countT)&pListing->flagsRefF() , '0' ) ;
                    OStEXTAK( ostoSay , " : --   ungrabbing" ) ;
                    //THESE HAVE TRIGGERED DEADLOCK WHEN CAUSES A NEW bookC INSTANCE TO BE CT'D; ENABLE WHEN traceF IS ENHANCED TO AVOID CREATING bookC INSTANCES
                    //etherC::etRockIF( tinP ).traceF( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;


                    grabitx.ungrabF( tinP ) ; //FOR APPLICATION CODING CONVENIENCE; AS OF THIS WRITING THERE IS NO WAY TO EXPLICITLY UNGRAB A LIST THAT HAS BEEN OPENED AND KEPT OPEN EXCEPT TO MAKE SURE THAT THE LATH LIST WALK DOES NOT SPECIFY THE "DO NOT UNGRAB LIST" FLAG

                    //U:: TO FIND A BUG
                    OStEXTAK( ostoSay , " --   ungrabbed" ) ;
                    //etherC::etRockIF( tinP ).traceF( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;


                    //if( tinP.pc Utility[ 0 ] && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_KERNEL2MONITOR )
                    //{
                    //    OStEXT(   ostoSay , TUCK << 2 ) ;
                    //    OStEXTAK( ostoSay , "openF / ungrabbed  [idName]: " ) ;
                    //    OStEXTC(  ostoSay , idNameDebug , 0 ) ;
                    //
                    //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
                    //}

                    //if( pListing->flagsF() & fliLISTINGc_MIXINlIST )
                    //{
                    //    //ZE( osTextT* , postName ) ;
                    //    //getListNameGF( tinP , postName , pListing->nameF() ) ; ___( postName ) ;
                    //
                    //    OStEXT(   ostoSay , TUCK << 1 ) ;
                    //    OStEXTAK( ostoSay , "\r\n" ) ;
                    //    OStEXTC(  ostoSay , tinP.monitor.idThread , 0 ) ;
                    //    OStEXTAK( ostoSay , " | ----- " ) ;
                    //    OStEXTC(  ostoSay , pListing->nameF() , 0 ) ;
                    //    //OStEXTA(  ostoSay , postName ) ;
                    //    //PUSE( tinP , postName ) ;
                    //    CONoUTrAW( ostoSay ) ;
                    //}
                }
                //else if( tinP.pc Utility[ 0 ] && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_KERNEL2MONITOR )
                //{
                //    OStEXT(   ostoSay , TUCK << 2 ) ;
                //    OStEXTAK( ostoSay , "openF / COULD NOT UNGRAB (NOT REGISTERED) [idName]: " ) ;
                //    OStEXTC(  ostoSay , idNameDebug , 0 ) ;
                //
                //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
                //}

                break ;
            }
            case ifcIDtYPEhANDLE_DLL :
            {
                _IO_
                #ifdef __OS2__
                    //U::
                #elif defined( __NT__ )
                    dec02AM( processGlobal1I.cDllLoaded ) ; //COUNT WILL BE WRONG IF THE NEXT LINE FAILS
                    BOS( WHATgbo , BOSoK , FreeLibrary( (HMODULE)handleP.osh ) )
                    BOSpOOP
                #endif
                break ;
            }
            case ifcIDtYPEhANDLE_FILE :
            {
                _IO_
                if( handleP.osh > 2 ) //DO NOT CLOSE THE STANDARD FILE HANDLES 0 , 1 , 2 (STDIN STDOUT STDERR)
                {
                    TINSL

                    ZE( fileOpenS* , pInfo ) ;
                    if( F(handleP.cNote) & flFILEhANDLEnOTE_OPENrEGISTERED )
                    {
                        if( tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ) //DEREGISTRATION MUST OCCUR BEFORE HANDLE CLOSURE BECAUSE THE OS MIGHT IMMEDIATELY REUSE THAT HANDLE, RESULTING IN AN ATTEMPT TO REGISTER IT (WHICH WOULD FAIL IF IT WINS THE RACE)
                        {
                            puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                            tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->grabF( tinP , TAG( TAGiDnULL ) ) ;
                            tinP.pAdamGlobal1->_thirdC_.cLever_pSwFileOpen = handleP.osh ;
                            pInfo = (fileOpenS*)(countT)*tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ;
                            tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->freeF( tinP ) ;
                            tinP.pAdamGlobal1->_thirdC_.pSwFileOpen->ungrabF( tinP ) ;
                        }
                    }

                    #ifdef __OS2__
                        //U::
                    #elif defined( __NT__ )

                        BOS( WHATgbo , BOSoK , CloseHandle( (HANDLE)handleP.osh ) )
                        BOSpOOP

                    #endif
                    handleP.osh = handleP.oshInvalid ;

                    if( pInfo )
                    {
                        if( F(pInfo->flagsAtClose) & flFILEaTcLOSE_DELETE )
                        {
                            BOS( WHATgbo , BOSoK , DeleteFile( pInfo->postName ) )

                            //U:: TO FIND A BUG
                            if( c_strstrIF( pInfo->postName , ".!.transcript." ) )
                            {
                                countT foo = 2 ;
                            }
                        }
                        if( ~pInfo->hTag       ) pInfo->hTag.closeIfF() ; //IT WOULD BE NICE TO DO THIS AFTER DELETING THE FILE, BUT NO CAN DO FOR NT FLAVOR OF win32
                        if( pInfo->postNameTag ) { BOS( WHATgbo , BOSoK , DeleteFile( pInfo->postNameTag ) ) }
                    }

                    DEL( pInfo ) ;
                }

                break ;
            }
            case ifcIDtYPEhANDLE_SHAREDmEMORY :
            {
                _IO_
                #ifdef __OS2__

                    BOSdOnOTtEST( WHATgbo , DosFreeMem( (voidT*)handleP.cNote ) )

                #elif defined( __NT__ )
    
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / i\r\n" ) ;
                    const countT idDesireSave = thirdC::dosPriorityIF( tinP ) ;
                    thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
                    {
                        if( F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        for( countT offr = 0 ; offr < CsHAREDmEMiNFO ; offr ++ )
                        {
                            if( processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh == handleP.osh )
                            {
                                *processGlobal1I._thirdC_pSharedMemInfo[ offr ].postName = 0 ;
                                processGlobal1I._thirdC_pSharedMemInfo[ offr ].osh = 0 ;
                                processGlobal1I._thirdC_pSharedMemInfo[ offr ].pv = 0 ;
                                break ;
                            }
                        }
                        if( F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool ) ) processGlobal3I.grabMemorySpace.ungrabF( tinP ) ;
                    }
    
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / h\r\n" ) ;

                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / g\r\n" ) ;
                    if( handleP.cNote ) //WILL BE 0 IF WAS NOT ABLE TO MAP A VIEW
                    {
                        TINSL

                        ZE( boolT , bFoundAlias ) ;
                        {
                            THREADmODE4oN( flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY | flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
                            {
                                _IO_


                                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / f\r\n" ) ;
                                handleC hx( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LINKED ) ;
                                linkedC& root = processGlobal3I._handleC_linked_sm ;
                                root.openKidF( tinP , hx ) ;
                                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / e\r\n" ) ;
                            
                                while( ~hx )
                                {
                                    _IO_

#if defined( NEVERdEFINED )

                                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / d\r\n" ) ;
                                    //U:: TO FIND A BUG
                                    if( INtALLY > TUCK ) //20161219@0929: LIST REPEATS WITH GROUPS OF 8
                                    {
                                        static countT cLogged ;

                                        LOGrAW7( "[idThread,INtALLY,hx]:    " , tinP.monitor.idThread , "    " , INtALLY , "    " , hx.osF( ifcIDtYPEhANDLE_LINKED ) , "\r\n" ) ;

                                        if( ++ cLogged > TOCK )
                                        {
                                            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / c\r\n" ) ;
                                            LOGrAW( "walking from the root to document the state of the list (hopefully i've logged enough loop handle values)" ) ;

                                            handleC hx2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LINKED ) ;
                                            linkedC& root = processGlobal3I._handleC_linked_sm ;
                                            root.openKidF( tinP , hx2 ) ;
                                        
                                            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / b\r\n" ) ;
                                            countT cDo = TUCK ;
                                            while( cDo -- && ~hx2 )
                                            {
                                                _IO_

                                                linkedC& linked = linkedC::getLinkIF( tinP , hx2 ) ;
                                                LOGrAWd( "[idThread,INtALLY,hx2,idLineCt,idiFileCt]:    " , tinP.monitor.idThread , "    " , INtALLY , "    " , hx2.osF( ifcIDtYPEhANDLE_LINKED ) , "    " , linked.idLineCtF() , "    " , linked.idiFileCtF() , "    " , linked.idThreadCtF() , "\r\n" ) ;
                                                linkedC::nextIF( tinP , hx2 ) ;
                                            }

                                            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / a\r\n" ) ;
                                            LOGrAW( "calling dosSleepIF because hopefully i've logged enough loop handle values" ) ; // THIS RATHER THAN BLAMMO SO MINUTE REPORTS CAN REVEAL WHO CALLED ME
                                            etherC& etPrime = etherC::etPrimeIF() ;
                                            while( !etPrime )
                                            {
                                                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 9\r\n" ) ;
                                                thirdC::dosSleepIF( tinP , TICK , TOCK ) ;
                                                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 8\r\n" ) ;
                                            }
                                        }
                                    }

                                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 7\r\n" ) ;

#endif

                                    linkedC& linked = linkedC::getLinkIF( tinP , hx ) ;
                                    handleC& he = *(handleC*)( (byteT*)&linked - SIZEOF_baseSoilXxxxC ) ;
        
                                    if
                                    (
                                        he.idType ==  handleP.idType              &&
                                        he.cNote  ==  handleP.cNote               &&
                                        &he       != &handleP
                                    )
                                    {
                                        ++ bFoundAlias ;
                                        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 6\r\n" ) ;
                                        break ;
                                    }
        
                                    {
                                        _IO_
                                        linkedC::nextIF( tinP , hx ) ;
                                    }
                                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 5\r\n" ) ;
                                }
                                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 4\r\n" ) ;
                            }
                            THREADmODE4rESTORE
                        }

                        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 3\r\n" ) ;
                        if( !bFoundAlias )
                        {
                            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 2\r\n" ) ;
                            BOS( WHATgbo , BOSoK , UnmapViewOfFile( (voidT*)handleP.cNote ) )
                            BOSpOOP
                            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 1\r\n" ) ;
                        }
                    }
                    thirdC::dosPriorityIF( tinP , idDesireSave ) ;
    
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / 0\r\n" ) ;
                    BOS( WHATgbo , BOSoK , CloseHandle( (HANDLE)handleP.osh ) )
                    BOSpOOP

                #endif
                handleP.cNote = 0 ;
                break ;
            }
            case ifcIDtYPEhANDLE_FILEmAPPING    :
            {
                _IO_
                BOS( WHATgbo , BOSoK , UnmapViewOfFile( (voidT*)handleP.cNote ) )
                BOSpOOP

                // INTENTIONAL FALLTHROUGH
            }
            case ifcIDtYPEhANDLE_EVENTsEMAPHORE :
            case ifcIDtYPEhANDLE_MUTEXsEMAPHORE :
            case ifcIDtYPEhANDLE_PROCESS        :
            case ifcIDtYPEhANDLE_THREAD         :
            {
                _IO_
                if( handleP.idType != ifcIDtYPEhANDLE_PROCESS || !handleP.cNote )
                {
                    #ifdef __OS2__
                        BOS( WHATgbo , BOSfAIL , DosClose( (HFILE)handleP.osh ) )
                        BOSpOOP
                    #elif defined( __NT__ )

                        BOSS( WHATgbo , BOSoK , CloseHandle( (HANDLE)handleP.osh ) )
                        BOSpOOP

                    #endif
                }
    
                break ;
            }
            case ifcIDtYPEhANDLE_FILEfINDbASE :
            {
                _IO_
                #ifdef __OS2__
                    
                    //U:
                    
                #elif defined( __NT__ )
                    
                    BOS( WHATgbo , BOSoK , FindClose( (HANDLE)handleP.osh ) )
                    BOSpOOP
                    
                #endif
    
                break ;
            }
            case ifcIDtYPEhANDLE_FILEfIND :
            {
                _IO_
                #ifdef __OS2__
                    
                    //U:
                    
                #elif defined( __NT__ )
                    
                    diskFindHandleS* pOsh = (diskFindHandleS*)handleP.osh ;

                    if( pOsh )
                    {
                        byteT* pbd = (byteT*)pOsh ;
                        DELzOMBIE( pOsh ) ;
                        processGlobal3I.heap.delF( tinP , pbd ) ;
                    }

                #endif
    
                break ;
            }
            case ifcIDtYPEhANDLE_FILEwAIT :
            {
                _IO_
                #ifdef __OS2__
                    
                    //U:
                    
                #elif defined( __NT__ )
                    
                    BOS( WHATgbo , BOSoK , FindCloseChangeNotification( (HANDLE)handleP.osh ) )
                    BOSpOOP
                    
                #endif
    
                break ;
            }
            case ifcIDtYPEhANDLE_WINDOWINGcLIENT :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_WINDOW :
            {
                _IO_
                if( !handleP.cNote )
                {
                    #if defined( __OS2__ )
                        //U:
                    #elif defined( __NT__ )

                        BOS( WHATgbd , BOSoK , DestroyWindow( (HWND)handleP.osh ) )
                        BOSpOOP

                    #endif
                }
    
                break ;
            }
            case ifcIDtYPEhANDLE_DRAWsHARED :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_DRAWpRIVATE :
            {
                _IO_
                #if defined( __OS2__ )
                
                    //U:
                
                #elif defined( __NT__ )
                
                    //U::thirdC::lever_swWinFromDraw = handleP.osh ;
                    //U::countT hWindow = *pswWinFromDraw ;
                    //U::pswWinFromDraw->freeF( tinP ) ;
                    //U::
                    //U::if( !hWindow ) //ASSUME: IF hWindow THEN IS A PRIVATE DC; ELSE IS A MEMORY (BITMAP) DC
                    //U::{
                    //U::    BOS( WHATgbd , BOSoK , DeleteDC( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ) )
                    //U::    BOSpOOP
                    //U::}

                    //U::hDrawP = 0 ;
        
                    BOS( WHATgbd , BOSoK , DeleteDC( (HDC)handleP.osh ) )
                    if( tinP.bosFail ) { BLAMMO ; }
                
                    #endif
    
                break ;
            }
            case ifcIDtYPEhANDLE_DRAWINGtOOL :
            {
                _IO_
                TINSL
                BOS( WHATgbo , BOSoK , DeleteObject( (HGDIOBJ)handleP.osh ) )
                BOSpOOP
                break ;
            }
            case ifcIDtYPEhANDLE_EXCEPTIONhANDLER :
            {
                _IO_
                BOSdOnOTtEST( WHATgbo , SetUnhandledExceptionFilter( (LPTOP_LEVEL_EXCEPTION_FILTER)handleP.osF( ifcIDtYPEhANDLE_EXCEPTIONhANDLER ) ) )
                break ;
            }
            case ifcIDtYPEhANDLE_CONSOLEhANDLER :
            {
                _IO_
                #if defined( __OS2__ )
                #elif defined( __NT__ )

                    BOS( WHATgbo , BOSoK , SetConsoleCtrlHandler( (PHANDLER_ROUTINE)handleP.osh , 0 ) )
                    BOSpOOP

                #endif
                break ;
            }
            case ifcIDtYPEhANDLE_PIPE :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_PROCESStOKEN :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_SOCKET :
            {
                _IO_
                //if( handleP.cNoteF() ) { BOSnOvALUE( WHATgbo , (*processGlobal1I.openSsl_pWaveByeF)(    (SSL*)handleP.cNoteF() ) ) }
                if( handleP.cNoteF() ) thirdC::openSsl_waveByeIF( tinP , handleP ) ;

                //U:: 20200524@2335: WHY NEEDED?  CAN'T DO THIS EARLY OR LATE.  COMMENTED OUT BECAUSE CAUSES PROCESS C++ INIT TO FAIL WHEN HOME IS CLOAKED
                //{
                //    TINSL
                //    //U::O: ELIMINATE CONSTRUCTION OF THIS thp
                //    thirdC thp( tinP , TAG( TAGiDnULL ) , flTHIRDmODE_IMPOTENCEeXPECTED ) ;
                //    thp.s_optionLingerF( tinP , handleP , 60 ) ; //20150322@1105: 0->60 TO FIND A BUG
                //    thp = 0 ;
                //}
                
                #ifdef __OS2__
                    BOSdOnOTtEST( WHATgbo , so_cancel( handleP.osh ) )
                #elif defined( __NT__ )
                    BOSS( WHATgbo , BOSfAIL , shutdown( handleP.osh , 2 ) )
                #endif

                #ifdef __OS2__

                    BOSdOnOTtEST( WHATgbo , soclose( handleP.osh ) )
                    if( 0 > (sCountT)tinP.brcLath ) { BLAMMO ; }

                #elif defined( __NT__ )
                    
                    //LOGrAW5( "" , handleP.osh , "    " , tinP.pAdamGlobal1->idAdam , " ----\r\n" ) ;
                    BOSS( WHATgbo , BOSfAIL , closesocket( handleP.osh ) )

                    if
                    (
                           tinP.bosFail
                        && handleP.osh != handleP.oshInvalid
                        && tinP.brcLath != WSAENOTCONN
                        && tinP.brcLath != WSAENOTSOCK
                        && tinP.brcLath != ERROR_HANDLE_EOF             //20210214@1745: OBSERVED ON factory9 within voidT socketC::acceptF( tinS& tinP , socketC*& pSocketP , countT& idPortP , nicNameC& nicNameP , boolT& bRefuseP )
                    )
                    {
                        tinP.pcUtility[ 0 ] = tinP.brcLath - WSABASEERR ;
                        BLAMMOiD( tinP.brcLath ) ;
                    }
                    
                #endif

                handleP.osh = handleP.oshInvalid ;
    
                //if( handleP.cNoteF() ) { BOSnOvALUE( WHATgbo , (*processGlobal1I.openSsl_pWrapperFreeF)( (SSL*)handleP.cNoteF() ) ) }
                if( handleP.cNoteF() ) thirdC::openSsl_wrapperFreeIF( tinP , handleP ) ;

                break ;
            }
            case ifcIDtYPEhANDLE_FISH :
            case ifcIDtYPEhANDLE_STACKwALK :
            case ifcIDtYPEhANDLE_TREEwALK :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE0 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE1 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE2 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE3 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE4 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE5 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE6 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE7 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE8 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE9 :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEa :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEb :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEc :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEd :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEe :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEf :
            {
                break ;
            }
            case ifcIDtYPEhANDLE_CRITICALsECTION :
            {
                _IO_
                #if defined( __NT__ )
    
                    {
                        TINSL
                        __( !handleP.osh ) ;
                        if( !POOP ) { BOSnOvALUE( WHATgbo , DeleteCriticalSection( (CRITICAL_SECTION*)handleP.osh ) ) }
                        PUSE( tinP , *(byteT**)&handleP.osh ) ;
                    }
    
                #endif

                break ;
            }
            case ifcIDtYPEhANDLE_openSslContext :
            {
                _IO_
                BOSnOvALUE( WHATgbo , (*processGlobal1I.openSsl_pContextFreeF)( (SSL_CTX*)handleP.osh ) )
                break ;
            }
            case ifcIDtYPEhANDLE_CLOUD :
            {
                _IO_
                DEL( *(cloudInfoS**)&handleP.osh ) ;
                break ;
            }
            case ifcIDtYPEhANDLE_BOOKSrEADcURSOR :
            {
                _IO_
                DEL( *(bookC**)&handleP.osh ) ;
                break ;
            }
            default :
            {
                _IO_
                BLAMMO ;
                break ;
            }
        }

        handleP.osh = handleP.oshInvalid ;
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "thirdC::handleCloseIF / \r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001126.thirdc.handlecloseif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001127.thirdc.third_flcti_if BEGIN
#define DDNAME       "3func.35001127.thirdc.third_flcti_if"
#define DDNUMB      (countT)0x35001127
#define IDFILE      (countT)0xa67


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flCtI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020162.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT& thirdC::third_flCtI_IF( tinS& tinP )/*1*/
{
    return processGlobal1I.flCt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001127.thirdc.third_flcti_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001128.thirdc.third_fldti_if BEGIN
#define DDNAME       "3func.35001128.thirdc.third_fldti_if"
#define DDNUMB      (countT)0x35001128
#define IDFILE      (countT)0xa68


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flDtI_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020163.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT& thirdC::third_flDtI_IF( tinS& tinP )/*1*/
{
    return processGlobal1I.flDt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001128.thirdc.third_fldti_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001129.thirdc.thirdwritetocyrcleoldif BEGIN
#define DDNAME       "3func.35001129.thirdc.thirdwritetocyrcleoldif"
#define DDNUMB      (countT)0x35001129
#define IDFILE      (countT)0xa69


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdWriteToCyrcleOldIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020166.1.0.html\"\>definition\</A\>
arguments
 tinP
 napkinP
 pbP
  this blob must not contain the value FINGERnEG_CYRCLEoLDwRITE
 cbP
*/
/**/

const countT finger1 = 0 ;
const countT finger2 = 0 ;
boolT bWoth = 1 ;

/*1*/voidT thirdC::thirdWriteToCyrcleOldIF( tinS& tinP , napkinC& napkinP , const byteT* const pbP , countT cbP )/*1*/
{
    if( bWoth )
    {
        bWoth = 0 ;
        putNegAM( *(countT*)&finger1 , FINGERnEG_CYRCLEoLDwRITE    ) ; //THIS VALUE MUST NEVER GET ONTO A THREAD STACK OR INTO A POOLoLD, SUCH THAT IT MIGHT END UP IN AN UNINITIALIZED PORTION OF A TELL MESSAGE
        putNegAM( *(countT*)&finger2 , FINGERnEG_CYRCLEoLDwRITEeND ) ; //THIS VALUE MUST NEVER GET ONTO A THREAD STACK OR INTO A POOLoLD, SUCH THAT IT MIGHT END UP IN AN UNINITIALIZED PORTION OF A TELL MESSAGE
    }

    IFbEcAREFUL
    {
        if( POOP ) return ;
        byteT* pbBad1 = c_memmemIF( tinP , pbP , cbP , (byteT*)&finger1 , sizeof finger1 ) ;
        byteT* pbBad2 = c_memmemIF( tinP , pbP , cbP , (byteT*)&finger2 , sizeof finger2 ) ;
        __(  pbP + cbP - pbBad1 ) ;
        __(  pbP + cbP - pbBad2 ) ;
        __( cbP >= TOCK ) ; //U::TO CATCH A BUG
        if( POOP ) return ;
    }

    _IO_
    cyrcleOldHeaderS* ph = (cyrcleOldHeaderS*)(byteT*)napkinP ;

    //AN EXCEPTION HERE WOULD CAUSE A RECURSIVE GRAB OF ph->bGrab
    { __( F(ph->flags) & flCYRCLEoLD_CLOSING ) ; }

    if( !POOP )
    {
        //PSEUDODUPLICATED CODE: 1020166 1020197
        const countT cbCircle = (countT)napkinP - sizeof( cyrcleOldHeaderS ) ;
        byteT* pbCircle = (byteT*)ph + sizeof( cyrcleOldHeaderS ) ;
        byteT* pbEnd    = pbCircle + cbCircle ;

        countT cbc = 6 * sizeof cbP + cbP ; // FINGERPRINT ; FLAGS; LENGTH PREFIX ; DATA ; LENGTH SUFFIX ; FLAGS ; FINGERPRINT

        ZE( countT , cbWrittenPrior ) ; //ATOMICALLY RESERVE AN ARC ON THE CIRCLE
        for(;;)
        {
            cbWrittenPrior = ph->cbWritten ;
            if( cbWrittenPrior == setIfEqualsAM( ph->cbWritten , cbWrittenPrior + cbc , cbWrittenPrior ) ) break ;
        }

        byteT* pbWrite = pbCircle + cbWrittenPrior % cbCircle ;

        const static flagsT flags = flCYRCLEoLDwRITE_null ; //THIS VALUE SHOULD (FOR EXTRA SAFETY) NEVER GET ONTO A THREAD STACK OR INTO A POOLoLD, SUCH THAT IT MIGHT END UP IN AN UNINITIALIZED PORTION OF A TELL MESSAGE
        ZE( flagsT* , pFlags1 ) ;
        ZE( flagsT* , pFlags2 ) ;
        const byteT* pbc = (byteT*)&finger1 ;
        ZE( boolT , bSuffix ) ;
        while( cbc )
        {
            boolT bSplit  =          pbWrite + cbc > pbEnd ;
            countT cbOver = bSplit ? pbWrite + cbc - pbEnd : 0 ;

            countT cbThis = cbc - cbOver ;
            if
            (
                pbc    >= (byteT*)&finger1                        &&
                pbc    <  (byteT*)&finger1 + sizeof finger1       &&
                cbThis >  (byteT*)&finger1 + sizeof finger1 - pbc
            )
            cbThis = (byteT*)&finger1 + sizeof finger1 - pbc ;
            else if
            (
                pbc    >= (byteT*)&flags                          &&
                pbc    <  (byteT*)&flags + sizeof flags           &&
                cbThis >  (byteT*)&flags + sizeof flags - pbc
            )
            cbThis = (byteT*)&flags + sizeof flags - pbc ;
            else if
            (
                pbc    >= (byteT*)&cbP                            &&
                pbc    <  (byteT*)&cbP + sizeof cbP               &&
                cbThis >  (byteT*)&cbP + sizeof cbP - pbc
            )
            cbThis = (byteT*)&cbP + sizeof cbP - pbc ;
            else if
            (
                pbc    >= pbP                                     &&
                pbc    <  pbP + cbP                               &&
                cbThis >  pbP + cbP - pbc
            )
            cbThis = pbP + cbP - pbc ;
    
            //countT cbwNew = ph->cbWritten + cbThis ; //U::BUG? CONJ: SHOULD BE CBwRITTENpRIOR
            countT cbwNew = cbWrittenPrior + cbThis ; //U::2008.07.05: CONJ: CNR NOW: 
    
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                while( cbwNew - ph->cbRead > cbCircle )
                {

                    if( F(ph->flags) & flCYRCLEoLD_CLOSING )
                    {
                        __1
                        break ;
                    }

                    ++ s ; thirdC::dosSleepRawIF( tinP , 50 ) ;
                }
            }
    
            if( !POOP )
            {
                c_memcpyIF( tinP , pbWrite , pbc , cbThis ) ;
                pbWrite += cbThis ;
                if( pbWrite == pbEnd ) pbWrite = pbCircle ;
    
                pbc += cbThis ;
                cbc -= cbThis ;

                if( !bSuffix )
                {
                         if( pbc == (byteT*)&finger1 + sizeof finger1 ) { pbc = (byteT*)&flags   ; pFlags1 = (flagsT*)pbWrite ; }
                    else if( pbc == (byteT*)&flags   + sizeof flags   )   pbc = (byteT*)&cbP     ;
                    else if( pbc == (byteT*)&cbP     + sizeof cbP     )   pbc =          pbP     ;
                    else if( pbc ==          pbP     +        cbP     ) { pbc = (byteT*)&cbP     ; bSuffix = 1 ; }
                }
                else
                {
                         if( pbc == (byteT*)&cbP     + sizeof cbP     ) { pbc = (byteT*)&flags   ; pFlags2 = (flagsT*)pbWrite ; }
                    else if( pbc == (byteT*)&flags   + sizeof flags   )   pbc = (byteT*)&finger2 ;
                    else if( pbc == (byteT*)&finger2 + sizeof finger2 ) { pbc = (byteT*)&finger1 ; bSuffix = 0 ; }
                }
            }
        }
        *pFlags2 = *pFlags1 = flCYRCLEoLDwRITE_CLEAN ; //THIS VALUE MUST NEVER GET ONTO A THREAD STACK OR INTO A POOLoLD, SUCH THAT IT MIGHT END UP IN AN UNINITIALIZED PORTION OF A TELL MESSAGE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001129.thirdc.thirdwritetocyrcleoldif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112b.thirdc.third_flagsmodeprocess2_if BEGIN
#define DDNAME       "3func.3500112b.thirdc.third_flagsmodeprocess2_if"
#define DDNUMB      (countT)0x3500112b
#define IDFILE      (countT)0xa6a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_flagsModeProcess2I_IF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020168.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT& thirdC::third_flagsModeProcess2I_IF( tinS& tinP )/*1*/
{
    return processGlobal1I._thirdC_flagsModeProcess2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112b.thirdc.third_flagsmodeprocess2_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112c.thirdc.dosraiseexceptionif BEGIN
#define DDNAME       "3func.3500112c.thirdc.dosraiseexceptionif"
#define DDNUMB      (countT)0x3500112c
#define IDFILE      (countT)0xa6b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosRaiseExceptionIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020169.1.0.html\"\>definition\</A\>
arguments
 tinP
 idExceptionP
 pcArgsP
 ccArgsP
*/
/**/

/*1*/voidT thirdC::dosRaiseExceptionIF( tinS& tinP , const countT idExceptionP , const countT* const pcArgsP , const countT ccArgsP )/*1*/
{
    tinS* pTin = &tinP ;

    if( pTin && !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_DEBUG ) ) // CALLING RaiseException IS INCONVENIENT WHEN RUNNING AS A CHILD OF A DEBUGGER PROCESS BECAUSE THE CALL STACK BECOMES INVISIBLE, SO WHEN BEING DEBUGGED, I JUST DO AN INTENTIONAL BLAMMO
    {
        IFbEcAREFUL
        {
            //if( POOP ) return ;
        }
    
        _IO_
        BOSnOvALUE( WHATgbo , RaiseException( idExceptionP , 0 , ccArgsP , (ULONG const *)pcArgsP ) )
    }
    else
    {
        LOGrAW( "\r\ndosRaiseExceptionIF: &tinP is 0, or am debugging, so am just executing an intentional write to address 0\r\n" ) ;
        countT* pBlammo = 0 ;
        *pBlammo = 0x28493a17 ; // ARBITRARY VALUE THAT CAN BE SEEN IN DEBUGGER AND IN EXCEPTION REPORT

        //20170210@1026: OBSERVED THIS TO FAIL OBSCURELY
        //RaiseException( idExceptionP , 0 , ccArgsP , (ULONG const *)pcArgsP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112c.thirdc.dosraiseexceptionif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112d.thirdc.c_memmemif BEGIN
#define DDNAME       "3func.3500112d.thirdc.c_memmemif"
#define DDNUMB      (countT)0x3500112d
#define IDFILE      (countT)0xa6c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memmemIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102016a.1.0.html\"\>definition\</A\>
i search for a small blob in a large blob
if not found, i evaluate to the address of the end of pbBigP
arguments
 tinP
 pbBigP
 cbBigP
 pbSmallP
 cbSmallP
*/
/**//*1*/byteT* thirdC::c_memmemIF( tinS& tinP , const byteT* const pbBigP , const countT cbBigP , const byteT* const pbSmallP , const countT cbSmallP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pbBigP ) ;
        __Z( pbSmallP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    const countT offMaxBig = cbBigP - cbSmallP ;
    ZE( countT , offSmall ) ;
    ZE( boolT , bFound ) ;
    ZE( countT , offBig ) ;
    for( offBig = 0 ; offBig <= offMaxBig ; offBig ++ )
    {
        if( pbBigP[ offBig ] != pbSmallP[ offSmall ] )                  // IF NOT MATCH
        {
            if( offSmall )
            {
                offSmall = 0 ;                                          // NEXT ITERATION, RETRY FROM START OF SMALL
                offBig -- ;
                continue ;
            }
        }
        else                                                            // ELSE
        {
            if( ++ offSmall == cbSmallP )                               // IF ALL MATCH
            {
                bFound = 1 ;
                break ;
            }
        }
    }

    return bFound
        ? (byteT*)( pbBigP + offBig - cbSmallP )
        : (byteT*)( pbBigP + cbBigP            )
    ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112d.thirdc.c_memmemif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112e.thirdc.ostimeoldutctooldlocalf BEGIN
#define DDNAME       "3func.3500112e.thirdc.ostimeoldutctooldlocalf"
#define DDNUMB      (countT)0x3500112e
#define IDFILE      (countT)0xa6d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinUP
*/
/**/

/*1*/voidT thirdC::osTimeOldUtcToOldLocalF( tinS& tinP , countT& msLP , countT& ssLP , countT& mmLP , countT& hhLP , countT& dLP , countT& mLP , sCountT& yLP , countT& dowLP , const countT msUP , const countT ssUP , const countT mmUP , const countT hhUP , const countT dUP , const countT mUP , const sCountT yUP , const countT dowUP , const countT idZoneP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( msLP ) ;
        __( ssLP ) ;
        __( mmLP ) ;
        __( hhLP ) ;
        __( dLP ) ;
        __( mLP ) ;
        __( yLP ) ;
        __( dowLP ) ;
        __Z( idZoneP ) ;
        __( idZoneP > cTimeZonesF( tinP ) ) ;
        if( POOP ) return ;
    }

    _IO_

    SYSTEMTIME tosU ;
    SYSTEMTIME tosL ;
    TIME_ZONE_INFORMATION tzos ;
    {
        c_memsetIF( tinP , (byteT*)&tosU , sizeof tosU ) ;
        c_memsetIF( tinP , (byteT*)&tosL , sizeof tosL ) ;

        tosU.wMilliseconds = (WORD)msUP ;
        tosU.wSecond = (WORD)ssUP ;
        tosU.wMinute = (WORD)mmUP ;
        tosU.wHour = (WORD)hhUP ;
        tosU.wDay = (WORD)( dUP + 1 ) ;
        tosU.wDayOfWeek = (WORD)dowUP ;
        tosU.wMonth = (WORD)( mUP + 1 ) ;
        tosU.wYear = (WORD)( yUP + 1 ) ;

        const timeZoneSpecS& tzs = timeZoneSpecF( tinP , idZoneP ) ;
        tzos.Bias         = (LONG)tzs.bias ;
        tzos.StandardBias = (LONG)tzs.biasStd ;
        tzos.DaylightBias = (LONG)tzs.biasDay ;
    
        tzos.StandardDate.wMilliseconds = 0 ;
        tzos.StandardDate.wSecond       = 0 ;
        tzos.StandardDate.wMinute       = 0 ;
        tzos.StandardDate.wHour         = (WORD)tzs.oHourStd ;
        tzos.StandardDate.wDay          = (WORD)tzs.oDayStd ;
        tzos.StandardDate.wDayOfWeek    = (WORD)tzs.oDayOfWeekStd ;
        tzos.StandardDate.wMonth        = (WORD)tzs.oMonthStd ;
        tzos.StandardDate.wYear         = 0 ;
    
        tzos.DaylightDate.wMilliseconds = 0 ;
        tzos.DaylightDate.wSecond       = 0 ;
        tzos.DaylightDate.wMinute       = 0 ;
        tzos.DaylightDate.wHour         = (WORD)tzs.oHourDay ;
        tzos.DaylightDate.wDay          = (WORD)tzs.oDayDay ;
        tzos.DaylightDate.wDayOfWeek    = (WORD)tzs.oDayOfWeekDay ;
        tzos.DaylightDate.wMonth        = (WORD)tzs.oMonthDay ;
        tzos.DaylightDate.wYear         = 0 ;
    }

    BOS( WHATgbo , BOSoK , SystemTimeToTzSpecificLocalTime( &tzos , &tosU , &tosL ) )
    BOSpOOP

    msLP  = tosL.wMilliseconds ;
    ssLP  = tosL.wSecond ;
    mmLP  = tosL.wMinute ;
    hhLP  = tosL.wHour ;
    dLP   = tosL.wDay - 1 ;
    dowLP = tosL.wDayOfWeek ;
    mLP   = tosL.wMonth - 1 ;
    yLP   = tosL.wYear - 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112e.thirdc.ostimeoldutctooldlocalf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112f.thirdc.ostimeoldutcfromoldlocalf BEGIN
#define DDNAME       "3func.3500112f.thirdc.ostimeoldutcfromoldlocalf"
#define DDNUMB      (countT)0x3500112f
#define IDFILE      (countT)0xa6e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
*/
/**/

//WIN32 DOES NOT INCLUDE AN API TO DO THIS, SO I ITERATE BACKWARDS

//U::
#define SAY(fooP) pEtherContainsMe->strokeF( tinP , (fooP)+T("\r\n") ) ;
#define TX(cP) TF4(cP,flFORMAT_FOREIGN|flFORMAT_NObASE,5,0xa)

/*1*/voidT thirdC::osTimeOldUtcFromOldLocalF( tinS& tinP , countT& msUP , countT& ssUP , countT& mmUP , countT& hhUP , countT& dUP , countT& mUP , sCountT& yUP , countT& dowUP , const countT msLP , const countT ssLP , const countT mmLP , const countT hhLP , const countT dLP , const countT mLP , const sCountT yLP , const countT dowLP , const countT idZoneP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( msUP ) ;
        __( ssUP ) ;
        __( mmUP ) ;
        __( hhUP ) ;
        __( dUP ) ;
        __( mUP ) ;
        __( yUP ) ;
        __( dowUP ) ;
        __Z( idZoneP ) ;
        __( idZoneP > cTimeZonesF( tinP ) ) ;
        if( POOP ) return ;
    }

    _IO_

    //RECIPE
    // WO OF OO BIAS VALUES APPLIES
    // TO DISCOVER WHICH APPLIES, I SEE WHICH CALCULATED RESULT MAPS BACK TO WHAT I STARTED WITH

    const timeZoneSpecS& tzs = timeZoneSpecF( tinP , idZoneP ) ;
    sCountT biasStd = tzs.bias + tzs.biasStd ;
    sCountT biasDay = tzs.bias + tzs.biasDay ;
//SAY( T("biasStd: ")+TF4(biasStd,flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa) )

    ZE( countT  , timeBiasStd1 ) ;
    ZE( sCountT , timeBiasStd2 ) ;
    ZE( countT  , timeBiasDay1 ) ;
    ZE( sCountT , timeBiasDay2 ) ;
    ZE( countT  , timeL1 ) ;
    ZE( sCountT , timeL2 ) ;
    const boolT bNegStd = biasStd < 0 ;
    const boolT bNegDay = biasDay < 0 ;
    timeFromSecondsIF( tinP , timeBiasStd1 , timeBiasStd2 , ( bNegStd ? - biasStd : biasStd ) * 60 ) ;
    timeFromSecondsIF( tinP , timeBiasDay1 , timeBiasDay2 , ( bNegDay ? - biasDay : biasDay ) * 60 ) ;
//SAY( T("timeBiasStd: ")+TT(timeBiasStd1,timeBiasStd2) )
    osTimeFromOldTimeIF( tinP , timeL1 , timeL2 , yLP , mLP , dLP , hhLP , mmLP , ssLP , msLP , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
//SAY( T("timeLocal  : ")+TT(timeL1,timeL2) )

    countT  timeUtcStd1 = timeL1 ;
    sCountT timeUtcStd2 = timeL2 ;
    countT  timeUtcDay1 = timeL1 ;
    sCountT timeUtcDay2 = timeL2 ;

    if( bNegStd ) osTimeSubtractF( tinP , timeUtcStd1 , timeUtcStd2 , timeBiasStd1 , timeBiasStd2 ) ;
    else          osTimeAddIF(      tinP , timeUtcStd1 , timeUtcStd2 , timeBiasStd1 , timeBiasStd2 ) ;
//SAY( T("timeUtcStd : ")+TT(timeUtcStd1,timeUtcStd2) )

    if( bNegDay ) osTimeSubtractF( tinP , timeUtcDay1 , timeUtcDay2 , timeBiasDay1 , timeBiasDay2 ) ;
    else          osTimeAddIF(      tinP , timeUtcDay1 , timeUtcDay2 , timeBiasDay1 , timeBiasDay2 ) ;

    ZE( countT  , msUS  ) ; //UTC TIME IF LOCAL IS STD (GUESS 1)
    ZE( countT  , ssUS  ) ;
    ZE( countT  , mmUS  ) ;
    ZE( countT  , hhUS  ) ;
    ZE( countT  , dUS   ) ;
    ZE( countT  , mUS   ) ;
    ZE( sCountT , yUS   ) ;
    ZE( countT  , dowUS ) ;
    osTimeToOldTimeF( tinP , msUS , ssUS , mmUS , hhUS , dUS , mUS , yUS , dowUS , timeUtcStd1 , timeUtcStd2 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
//SAY( T("std guess u: ")+TX(yUS)+T(".")+TX(mUS)+T(".")+TX(dUS)+T(" @ ")+TX(hhUS)+T(":")+TX(mmUS) )

    ZE( countT  , msUD  ) ; //UTC TIME IF LOCAL IS DAY (GUESS 2)
    ZE( countT  , ssUD  ) ;
    ZE( countT  , mmUD  ) ;
    ZE( countT  , hhUD  ) ;
    ZE( countT  , dUD   ) ;
    ZE( countT  , mUD   ) ;
    ZE( sCountT , yUD   ) ;
    ZE( countT  , dowUD ) ;
    osTimeToOldTimeF( tinP , msUD , ssUD , mmUD , hhUD , dUD , mUD , yUD , dowUD , timeUtcDay1 , timeUtcDay2 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

    ZE( countT  , msLSV  ) ; // LOCAL VALIDATION TIME IF LOCAL IS STD
    ZE( countT  , ssLSV  ) ;
    ZE( countT  , mmLSV  ) ;
    ZE( countT  , hhLSV  ) ;
    ZE( countT  , dLSV   ) ;
    ZE( countT  , mLSV   ) ;
    ZE( sCountT , yLSV   ) ;
    ZE( countT  , dowLSV ) ;
    osTimeOldUtcToOldLocalF( tinP , msLSV , ssLSV , mmLSV , hhLSV , dLSV , mLSV , yLSV , dowLSV , msUS , ssUS , mmUS , hhUS , dUS , mUS , yUS , dowUS , idZoneP ) ;
//SAY( T("std guess v: ")+TX(yLSV)+T(".")+TX(mLSV)+T(".")+TX(dLSV)+T(" @ ")+TX(hhLSV)+T(":")+TX(mmLSV) )

    ZE( countT  , msLDV  ) ; // LOCAL VALIDATION TIME IF LOCAL IS DAY
    ZE( countT  , ssLDV  ) ;
    ZE( countT  , mmLDV  ) ;
    ZE( countT  , hhLDV  ) ;
    ZE( countT  , dLDV   ) ;
    ZE( countT  , mLDV   ) ;
    ZE( sCountT , yLDV   ) ;
    ZE( countT  , dowLDV ) ;
    osTimeOldUtcToOldLocalF( tinP , msLDV , ssLDV , mmLDV , hhLDV , dLDV , mLDV , yLDV , dowLDV , msUD , ssUD , mmUD , hhUD , dUD , mUD , yUD , dowUD , idZoneP ) ;

    ZE( countT  , timeLSV1 ) ; // LOCAL VALIDATION TIME IF LOCAL IS STD
    ZE( sCountT , timeLSV2 ) ;
    osTimeFromOldTimeIF( tinP , timeLSV1 , timeLSV2 , yLSV , mLSV , dLSV , hhLSV , mmLSV , ssLSV , msLSV , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

    ZE( countT  , timeLDV1 ) ; // LOCAL VALIDATION TIME IF LOCAL IS DAY
    ZE( sCountT , timeLDV2 ) ;
    osTimeFromOldTimeIF( tinP , timeLDV1 , timeLDV2 , yLDV , mLDV , dLDV , hhLDV , mmLDV , ssLDV , msLDV , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

    //COMPARE LSV AND LDV TO LP TO DECIDE WHETHER TO RETURN US OR UD
    ZE( boolT , bDay ) ;
    {
        countT  timeErrStd1 = timeLSV1 ;
        sCountT timeErrStd2 = timeLSV2 ;
        countT  timeErrDay1 = timeLDV1 ;
        sCountT timeErrDay2 = timeLDV2 ;
        osTimeSubtractF( tinP , timeErrStd1 , timeErrStd2 , timeL1 , timeL2 ) ;
        osTimeSubtractF( tinP , timeErrDay1 , timeErrDay2 , timeL1 , timeL2 ) ;
//SAY( T("timeErrStd : ")+TT(timeErrStd1,timeErrStd2) )
//SAY( T("timeErrDay : ")+TT(timeErrDay1,timeErrDay2) )

             if( !timeErrStd1 && !timeErrStd2 ) ;
        else if( !timeErrDay1 && !timeErrDay2 ) bDay = 1 ;
        else
        {
            if( timeErrStd2 == - 1 ) //CONVERT TO ABSOLUTE VALUE
            {
                ZE( countT , timeZ1 ) ;
                ZE( sCountT , timeZ2 ) ;
                osTimeSubtractF( tinP , timeZ1 , timeZ2 , timeErrStd1 , timeErrStd2 ) ;
                timeErrStd1 = timeZ1 ;
                timeErrStd2 = timeZ2 ;
            }

            if( timeErrDay2 == - 1 ) //CONVERT TO ABSOLUTE VALUE
            {
                ZE( countT , timeZ1 ) ;
                ZE( sCountT , timeZ2 ) ;
                osTimeSubtractF( tinP , timeZ1 , timeZ2 , timeErrDay1 , timeErrDay2 ) ;
                timeErrDay1 = timeZ1 ;
                timeErrDay2 = timeZ2 ;
            }

            if( timeErrDay2 < timeErrStd2 || ( timeErrDay2 == timeErrStd2 && timeErrDay1 < timeErrStd1 ) ) bDay = 1 ;
        }
    }

    if( bDay )
    {
        msUP = msUD ;
        ssUP = ssUD ;
        mmUP = mmUD ;
        hhUP = hhUD ;
        dUP = dUD ;
        mUP = mUD ;
        yUP = yUD ;
        dowUP = dowUD ;
    }
    else
    {
        msUP = msUS ;
        ssUP = ssUS ;
        mmUP = mmUS ;
        hhUP = hhUS ;
        dUP = dUS ;
        mUP = mUS ;
        yUP = yUS ;
        dowUP = dowUS ;
    }

    if( dowLP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500112f.thirdc.ostimeoldutcfromoldlocalf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001130.thirdc.winrectangledeskclientf BEGIN
#define DDNAME       "3func.35001130.thirdc.winrectangledeskclientf"
#define DDNUMB      (countT)0x35001130
#define IDFILE      (countT)0xa6f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
*/
/**/

BOOL CALLBACK _windowF( HWND hwndP , LPARAM cP )
{
    TINSL

    count5S& c5p = *(count5S*)cP ;

    osTextT postTitle[ 0x100 ] ;
    osTextT postOldClass[ 0x100 ] ;
    BOS( WHATgbo , BOSoK , GetWindowText( hwndP , postTitle , sizeof postTitle - 1 ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , GetClassName( hwndP , postOldClass , sizeof postOldClass - 1 ) )
    BOSpOOP

    boolT bContinue = 1 ;
    if( !c5p.c1 )
    {
        if( !tinP.pEther->strCompareF( tinP , T("Program Manager") , T(postTitle) ) && !tinP.pEther->strCompareF( tinP , T("Progman") , T(postOldClass) ) )
        {
            c5p.c1 ++ ;
            BOSnOvALUE( WHATgbo , EnumChildWindows( hwndP , (WNDENUMPROC)_windowF , (countT)&c5p ) )
            c5p.c1 -- ;
        }
    }
    else if( c5p.c1 == 1 )
    {
        if( !tinP.pEther->strCompareF( tinP , T("SHELLDLL_DefView") , T(postOldClass) ) )
        {
            RECT info ;
            BOS( WHATgbo , BOSoK , GetWindowRect( hwndP , &info ) )
            BOSpOOP
    
            info.right -- ; //TO FIX THE GOOFY WINDOWS CONCEPT OF A BOUNDING RECTANGLE
            info.bottom -- ;

            c5p.c2 = thirdC::winIfColIF( info.left ) ;
            c5p.c3 = thirdC::winIfRowIF( info.bottom ) ;
            c5p.c4 = thirdC::winIfColIF( info.right ) ;
            c5p.c5 = thirdC::winIfRowIF( info.top ) ;
            bContinue = 0 ;
        }
    }

    return bContinue ;
}

/*1*/voidT thirdC::winRectangleDeskClientF( tinS& tinP , countT& idColLowP , countT& idRowLowP , countT& idColHighP , countT& idRowHighP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( idColLowP ) ;
        __( idRowLowP ) ;
        __( idColHighP ) ;
        __( idRowHighP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        count5S c5p ;

        BOS( WHATgbo , BOSoK , EnumWindows( (WNDENUMPROC)_windowF , (countT)&c5p ) )
        BOSpOOP

        idColLowP  = c5p.c2 ;
        idRowLowP  = c5p.c3 ;
        idColHighP = c5p.c4 ;
        idRowHighP = c5p.c5 ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001130.thirdc.winrectangledeskclientf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001131.thirdc.winmessagehandlerworkf BEGIN
#define DDNAME       "3func.35001131.thirdc.winmessagehandlerworkf"
#define DDNUMB      (countT)0x35001131
#define IDFILE      (countT)0xa70


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winMessageHandlerWorkF.0.html\"\>instances\</A\>
\<A HREF=\"5.0b0001b.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

//U::
//FOR DEBUGGING USE: THIS IS A COMPLETE LIST OF WM_ CODES AND SYMBOLS, OBTAINED BY EDITING wmuser.h
//#if defined( NEVERdEFINED )

// winMessageHandlerWorkF IS TO BE UNAFFECTED BY ether I.E. WHETHER THE CELL HAS BEEN FIRED

boolT bEndSessionPending ;

struct wmSymbolS
{
    countT      id ;
    osTextT*    post ;
}
;

#if defined( NEVERdEFINED )

    // "CT" = "compressed, title"
    const wmSymbolS pWmSymbol[] =
    {
        0x8000 , "WM_APP"                                ,
        0x0400 , "WM_USER"                               ,
        0x038F , "WM_PENWINLAST"                         ,
        0x0380 , "WM_PENWINFIRST"                        ,
        0x037F , "WM_AFXLAST"                            ,
        0x0360 , "WM_AFXFIRST"                           ,
        0x035F , "WM_HANDHELDLAST"                       ,
        0x0358 , "WM_HANDHELDFIRST"                      ,
        0x0318 , "WM_PRINTCLIENT"                        ,
        0x0317 , "WM_PRINT"                              ,
        0x0312 , "WM_HOTKEY"                             ,
        0x0311 , "WM_PALETTECHANGED"                     ,
        0x0310 , "WM_PALETTEISCHANGING"                  ,
        0x030F , "WM_QUERYNEWPALETTE"                    ,
        0x030E , "WM_HSCROLLCLIPBOARD"                   ,
        0x030D , "WM_CHANGECBCHAIN"                      ,
        0x030C , "WM_ASKCBFORMATNAME"                    ,
        0x030B , "WM_SIZECLIPBOARD"                      ,
        0x030A , "WM_VSCROLLCLIPBOARD"                   ,
        0x0309 , "WM_PAINTCLIPBOARD"                     ,
        0x0308 , "WM_DRAWCLIPBOARD"                      ,
        0x0307 , "WM_DESTROYCLIPBOARD"                   ,
        0x0306 , "WM_RENDERALLFORMATS"                   ,
        0x0305 , "WM_RENDERFORMAT"                       ,
        0x0304 , "WM_UNDO"                               ,
        0x0303 , "WM_CLEAR"                              ,
        0x0302 , "WM_PASTE"                              ,
        0x0301 , "WM_COPY"                               ,
        0x0300 , "WM_CUT"                                ,
        0x0291 , "WM_IME_KEYUP"                          ,
        0x0290 , "WM_IME_KEYDOWN"                        ,
        0x0286 , "WM_IME_CHAR"                           ,
        0x0285 , "WM_IME_SELECT"                         ,
        0x0284 , "WM_IME_COMPOSITIONFULL"                ,
        0x0283 , "WM_IME_CONTROL"                        ,
        0x0282 , "WM_IME_NOTIFY"                         ,
        0x0281 , "WM_IME_SETCONTEXT"                     ,
        0x0234 , "WM_MDIREFRESHMENU"                     ,
        0x0233 , "WM_DROPFILES"                          ,
        0x0232 , "WM_EXITSIZEMOVE"                       ,
        0x0231 , "WM_ENTERSIZEMOVE"                      ,
        0x0230 , "WM_MDISETMENU"                         ,
        0x0229 , "WM_MDIGETACTIVE"                       ,
        0x0228 , "WM_MDIICONARRANGE"                     ,
        0x0227 , "WM_MDICASCADE"                         ,
        0x0226 , "WM_MDITILE"                            ,
        0x0225 , "WM_MDIMAXIMIZE"                        ,
        0x0224 , "WM_MDINEXT"                            ,
        0x0223 , "WM_MDIRESTORE"                         ,
        0x0222 , "WM_MDIACTIVATE"                        ,
        0x0221 , "WM_MDIDESTROY"                         ,
        0x0220 , "WM_MDICREATE"                          ,
        0x0219 , "WM_DEVICECHANGE"                       ,
        0x0218 , "WM_POWERBROADCAST"                     ,
        0x0216 , "WM_MOVING"                             ,
        0x0215 , "WM_CAPTURECHANGED"                     ,
        0x0214 , "WM_SIZING"                             ,
        0x0213 , "WM_NEXTMENU"                           ,
        0x0212 , "WM_EXITMENULOOP"                       ,
        0x0211 , "WM_ENTERMENULOOP"                      ,
        0x0210 , "WM_PARENTNOTIFY"                       ,
        0x0209 , "WM_MBUTTONDBLCLK WM_MOUSELAST"         ,
        0x0208 , "WM_MBUTTONUP"                          ,
        0x0207 , "WM_MBUTTONDOWN"                        ,
        0x0206 , "WM_RBUTTONDBLCLK"                      ,
        0x0205 , "WM_RBUTTONUP"                          ,
        0x0204 , "WM_RBUTTONDOWN"                        ,
        0x0203 , "WM_LBUTTONDBLCLK"                      ,
        0x0202 , "WM_LBUTTONUP"                          ,
        0x0201 , "WM_LBUTTONDOWN"                        ,
        0x0200 , "WM_MOUSEMOVE WM_MOUSEFIRST"            ,
        0x0138 , "WM_CTLCOLORSTATIC"                     ,
        0x0137 , "WM_CTLCOLORSCROLLBAR"                  ,
        0x0136 , "WM_CTLCOLORDLG"                        ,
        0x0135 , "WM_CTLCOLORBTN"                        ,
        0x0134 , "WM_CTLCOLORLISTBOX"                    ,
        0x0133 , "WM_CTLCOLOREDIT"                       ,
        0x0132 , "WM_CTLCOLORMSGBOX"                     ,
        0x0121 , "WM_ENTERIDLE"                          ,
        0x0120 , "WM_MENUCHAR"                           ,
        0x011F , "WM_MENUSELECT"                         ,
        0x0117 , "WM_INITMENUPOPUP"                      ,
        0x0116 , "WM_INITMENU"                           ,
        0x0115 , "WM_VSCROLL"                            ,
        0x0114 , "WM_HSCROLL"                            ,
        0x0113 , "WM_TIMER"                              ,
        0x0112 , "WM_SYSCOMMAND"                         ,
        0x0111 , "WM_COMMAND"                            ,
        0x0110 , "WM_INITDIALOG"                         ,
        0x010F , "WM_IME_KEYLAST WM_IME_COMPOSITION"     ,
        0x010E , "WM_IME_ENDCOMPOSITION"                 ,
        0x010D , "WM_IME_STARTCOMPOSITION"               ,
        0x0108 , "WM_KEYLAST"                            ,
        0x0107 , "WM_SYSDEADCHAR"                        ,
        0x0106 , "WM_SYSCHAR"                            ,
        0x0105 , "WM_SYSKEYUP"                           ,
        0x0104 , "WM_SYSKEYDOWN"                         ,
        0x0103 , "WM_DEADCHAR"                           ,
        0x0102 , "WM_CHAR"                               ,
        0x0101 , "WM_KEYUP"                              ,
        0x0100 , "WM_KEYDOWN WM_KEYFIRST"                ,
        0x00A9 , "WM_NCMBUTTONDBLCLK"                    ,
        0x00A8 , "WM_NCMBUTTONUP"                        ,
        0x00A7 , "WM_NCMBUTTONDOWN"                      ,
        0x00A6 , "WM_NCRBUTTONDBLCLK"                    ,
        0x00A5 , "WM_NCRBUTTONUP"                        ,
        0x00A4 , "WM_NCRBUTTONDOWN"                      ,
        0x00A3 , "WM_NCLBUTTONDBLCLK"                    ,
        0x00A2 , "WM_NCLBUTTONUP"                        ,
        0x00A1 , "WM_NCLBUTTONDOWN"                      ,
        0x00A0 , "WM_NCMOUSEMOVE"                        ,
        0x0087 , "WM_GETDLGCODE"                         ,
        0x0086 , "WM_NCACTIVATE"                         ,
        0x0085 , "WM_NCPAINT"                            ,
        0x0084 , "WM_NCHITTEST"                          ,
        0x0083 , "WM_NCCALCSIZE"                         ,
        0x0082 , "WM_NCDESTROY"                          ,
        0x0081 , "WM_NCCREATE"                           ,
        0x0080 , "WM_SETICON"                            ,
        0x007F , "WM_GETICON"                            ,
        0x007E , "WM_DISPLAYCHANGE"                      ,
        0x007D , "WM_STYLECHANGED"                       ,
        0x007C , "WM_STYLECHANGING"                      ,
        0x007B , "WM_CONTEXTMENU"                        ,
        0x0055 , "WM_NOTIFYFORMAT"                       ,
        0x0054 , "WM_USERCHANGED"                        ,
        0x0053 , "WM_HELP"                               ,
        0x0052 , "WM_TCARD"                              ,
        0x0051 , "WM_INPUTLANGCHANGE"                    ,
        0x0050 , "WM_INPUTLANGCHANGEREQUEST"             ,
        0x004E , "WM_NOTIFY"                             ,
        0x004B , "WM_CANCELJOURNAL"                      ,
        0x004A , "WM_COPYDATA"                           ,
        0x0048 , "WM_POWER"                              ,
        0x0047 , "WM_WINDOWPOSCHANGED"                   ,
        0x0046 , "WM_WINDOWPOSCHANGING"                  ,
        0x0044 , "WM_COMMNOTIFY"                         ,
        0x0041 , "WM_COMPACTING"                         ,
        0x0039 , "WM_COMPAREITEM"                        ,
        0x0037 , "WM_QUERYDRAGICON"                      ,
        0x0033 , "WM_GETHOTKEY"                          ,
        0x0032 , "WM_SETHOTKEY"                          ,
        0x0031 , "WM_GETFONT"                            ,
        0x0030 , "WM_SETFONT"                            ,
        0x002F , "WM_CHARTOITEM"                         ,
        0x002E , "WM_VKEYTOITEM"                         ,
        0x002D , "WM_DELETEITEM"                         ,
        0x002C , "WM_MEASUREITEM"                        ,
        0x002B , "WM_DRAWITEM"                           ,
        0x002A , "WM_SPOOLoLDERSTATUS"                      ,
        0x0028 , "WM_NEXTDLGCTL"                         ,
        0x0027 , "WM_ICONERASEBKGND"                     ,
        0x0026 , "WM_PAINTICON"                          ,
        0x0024 , "WM_GETMINMAXINFO"                      ,
        0x0023 , "WM_QUEUESYNC"                          ,
        0x0022 , "WM_CHILDACTIVATE"                      ,
        0x0021 , "WM_MOUSEACTIVATE"                      ,
        0x0020 , "WM_SETCURSOR"                          ,
        0x001F , "WM_CANCELMODE"                         ,
        0x001E , "WM_TIMECHANGE"                         ,
        0x001D , "WM_FONTCHANGE"                         ,
        0x001C , "WM_ACTIVATEAPP"                        ,
        0x001B , "WM_DEVMODECHANGE"                      ,
        0x001A , "WM_WININICHANGE WM_SETTINGCHANGE"      ,
        0x0018 , "WM_SHOWWINDOW"                         ,
        0x0016 , "WM_ENDSESSION"                         ,
        0x0015 , "WM_SYSCOLORCHANGE"                     ,
        0x0014 , "WM_ERASEBKGND"                         ,
        0x0013 , "WM_QUERYOPEN"                          ,
        0x0012 , "WM_QUIT"                               ,
        0x0011 , "WM_QUERYENDSESSION"                    ,
        0x0010 , "WM_CLOSE"                              ,
        0x000F , "WM_PAINT"                              ,
        0x000E , "WM_GETTEXTLENGTH"                      ,
        0x000D , "WM_GETTEXT"                            ,
        0x000C , "WM_SETTEXT"                            ,
        0x000B , "WM_SETREDRAW"                          ,
        0x000A , "WM_ENABLE"                             ,
        0x0008 , "WM_KILLFOCUS"                          ,
        0x0007 , "WM_SETFOCUS"                           ,
        0x0006 , "WM_ACTIVATE"                           ,
        0x0005 , "WM_SIZE"                               ,
        0x0003 , "WM_MOVE"                               ,
        0x0002 , "WM_DESTROY"                            ,
        0x0001 , "WM_CREATE"                             ,
        0x0000 , "WM_NULL"
    }
    ;

#endif

//#endif

boolT bOkToUseIfcObjects = 1 ;

/*1*/countT thirdC::winMessageHandlerWorkF( const countT oshWindowP , const countT idCmdP , const countT p1P , const countT p2P )/*1*/
{
    ebpTlsAM() = processGlobal1I.ebp_tmWindowsF_ ; //THIS IS NEEDED BECAUSE SOMETIMES THE TLS IS NOT IN THE STACK CHAIN (CONJ: WHEN CALLED BY INTERRUPT E.G. MOUSE)
    TINSL

    //U::
    //{
    //    OStEXT( ostoBuf , 0x100 )
    //    OStEXTAK( ostoBuf , "win handler ref tinS at " ) ;
    //    OStEXTC( ostoBuf , (countT)&tinP , 0 ) ;
    //    OStEXTAK( ostoBuf , "\r\n" ) ;
    //
    //    LOGrAW( ostoBuf ) ;
    //}

    handleC hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
    hWindow.osF( ifcIDtYPEhANDLE_WINDOW , oshWindowP , 0 , 1 ) ;

    ZE( boolT , bDoDefault ) ;
    ZE( countT , rc ) ;
    if( !bOkToUseIfcObjects )
    {
        bDoDefault = 1 ;
        //static countT cSkip = 0x100 ;
        //osTextT* postName = processGlobal3I.mapWindowMessage( idCmdP ) ; //THIS IS ALL FOR DEBUGGING
        //if( cSkip && !( -- cSkip ) )
        //{
        //    if( postName ) ;
        //}
    }
    else
    {
        WHATga
        if( !etherC::ether_pMainRefsIF( tinP ) ) //U::
        {
            thirdC& thThread = etherC::etThreadIF( tinP ) ;
            TELL( "winMessageHandlerWorkF: defaulting because tinP.pAdamGlobal1->_etherC_.pMainRefs is 0" )
    
            switch( idCmdP )
            {
                case idwm_CLOSE :
                case WM_CLOSE :
                {
                    break ;
                }
                case WM_DESTROY :
                {
                    BOSnOvALUE( WHATgbo , PostQuitMessage( 0 ) )
                    break ;
                }
                case WM_PAINT :
                {
                    handleC hDrawWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
                    ZE( sCountT , idColMin ) ;
                    ZE( sCountT , idRowMin ) ;
                    ZE( sCountT , idColMax ) ;
                    ZE( sCountT , idRowMax ) ;
                    thThread.winBeginPaintF( tinP , hDrawWindow , hWindow , idColMin , idRowMin , idColMax , idRowMax ) ;
                    if( ~hDrawWindow )
                    {
                        thThread.winEndPaintF( tinP , hDrawWindow ) ;
                        hDrawWindow.resetF() ; //A:ASSUME: PRIVATE DEVICE CONTEXT THAT WILL BE CLOSED BY ~windowOldC
                    }
                    break ;
                }
                default: { rc = thirdC::winDefaultMessageHandlerIF( tinP , oshWindowP , idCmdP , p1P , p2P ) ; break ; }
            }
        }
        else
        {
            TELL( "winMessageHandlerWorkF: setting up" )
            if( &tinP != &etherC::ether_pMainRefsIF( tinP )->tin ) BLAMMO ;
            //tinS&    tinP      = etherC::ether_pMainRefsIF( tinP )->tin ; //THIS IS OBSOLETE; REMOVE IT
            etherC&  ether      = etherC::ether_pMainRefsIF( tinP )->ether ;
            etherC*& pEtThread  = etherC::ether_pMainRefsIF( tinP )->pEtThread ;
            etherC&  etThread   = *pEtThread ;
            thirdC&  thThread  = etThread ;

            ZE( boolT , bRoot ) ;
            {
                windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                if( pRootI )
                {
                    bRoot = hWindow == *pRootI ;
                    pRootI->letRefF() ;
                }
            }

            const boolT bWorkingPhase = ifcIDpHASEhANDOFFoLD_WORKING == thirdC::osProcessIdPhaseAdamIF( tinP ) ;

            //if( !bOkToUseIfcObjects )
            {
                //switch( idCmdP )
                {
                    //case WM_ACTIVATE :
                    //case idwm_SHOW :
                    //case WM_SHOWWINDOW :
                    //case WM_ENDSESSION :
                    //case WM_WINDOWPOSCHANGING :
                    //default :
                    {
                        //ZE( countT , timeN1 ) ;
                        //ZE( sCountT , timeN2 ) ;
                        //etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
                        //osTextT* postWm = processGlobal3I.mapWindowMessage( idCmdP ) ;
                        //LOGrAW( TT(timeN1,timeN2)+T("| ")+(postWm?T(postWm):TF1(idCmdP))+T(" ")+TF3(p1P,flFORMAT_UNSIGNED,9)+TF3(p2P,flFORMAT_UNSIGNED,8)+T("\r\n") ) ;

                        //ZE( countT , timeN1 ) ;
                        //ZE( sCountT , timeN2 ) ;
                        //etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
                        //
                        //osTextT* postWm = processGlobal3I.mapWindowMessage( idCmdP ) ;
                        //TN( te , "" ) ;
                        //te += TT(timeN1,timeN2)+T("| wm: ") ;
                        //te += postWm ? TP(postWm,0x21) : TF3( idCmdP,flFORMAT_UNSIGNED,8)+TP("",0x19) ;
                        //te += TF3(p1P,flFORMAT_UNSIGNED,9) ;
                        //te += idCmdP == idwm_TASKbARiCON ? T(processGlobal3I.mapWindowMessage(p2P)) : TF3(p2P,flFORMAT_UNSIGNED,9) ;
                        //etherC::ifcSayIF( te , flSAY_APPEND | flSAY_LOG ) ;
                        //
                        //OStEXT( ostoFile , 0x100 )
                        //OStEXTAK( ostoFile , "\\ideafarm.rpt." ) ;
                        //OStEXTC( ostoFile , processGlobal1I.idHome , 0 ) ;
                        //OStEXTAK( ostoFile , ".log" ) ;
                        //if( postWm )
                        //{
                        //    fileWriteGF( ostoFile , postWm , thirdC::c_strlenIF( postWm ) , 1 ) ;
                        //    fileWriteGF( ostoFile , "\r\n" , 2 , 1 ) ;
                        //}
                        //else fileWriteGF( ostoFile , "unkwm\r\n" , 7 , 1 ) ;
                    }
                }
            }

            //FOR DEBUGGING ONLY; COMMENT OUT FOR RELEASE
            //if( bRoot )
            //{
            //    ZE( countT , timeN1 ) ;
            //    ZE( sCountT , timeN2 ) ;
            //    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
            //
            //    TN( tn , "" ) ;
            //    const osTextT* const postw = processGlobal3I.mapWindowMessage( idCmdP ) ;
            //    tn += TT(timeN1,timeN2)+T("| ")+TF3(p1P,flFORMAT_UNSIGNED,9)+TF3(p2P,flFORMAT_UNSIGNED,9)+(postw?T(postw):TF1(idCmdP)) ;
            //    if( idCmdP == WM_WINDOWPOSCHANGING )
            //    {
            //        WINDOWPOS* pInfo = (WINDOWPOS*)p2P ;
            //        if( pInfo )
            //        {
            //            tn += T("    (x,y,cx,cy): (")+TF1(pInfo->x)+T(",")+TF1(pInfo->y)+T(",")+TF1(pInfo->cx)+T(",")+TF1(pInfo->cy)+T(")") ;
            //
            //            if( pInfo->flags & SWP_ASYNCWINDOWPOS ) tn += T(" SWP_ASYNCWINDOWPOS") ;
            //            if( pInfo->flags & SWP_DEFERERASE ) tn += T(" SWP_DEFERERASE") ;
            //            if( pInfo->flags & SWP_NOSENDCHANGING ) tn += T(" SWP_NOSENDCHANGING") ;
            //            if( pInfo->flags & SWP_NOOWNERZORDER ) tn += T(" SWP_NOOWNERZORDER") ;
            //            if( pInfo->flags & SWP_NOCOPYBITS ) tn += T(" SWP_NOCOPYBITS") ;
            //            if( pInfo->flags & SWP_HIDEWINDOW ) tn += T(" SWP_HIDEWINDOW") ;
            //            if( pInfo->flags & SWP_SHOWWINDOW ) tn += T(" SWP_SHOWWINDOW") ;
            //            if( pInfo->flags & SWP_FRAMECHANGED ) tn += T(" SWP_FRAMECHANGED") ;
            //            if( pInfo->flags & SWP_NOACTIVATE ) tn += T(" SWP_NOACTIVATE") ;
            //            if( pInfo->flags & SWP_NOREDRAW ) tn += T(" SWP_NOREDRAW") ;
            //            if( pInfo->flags & SWP_NOZORDER ) tn += T(" SWP_NOZORDER") ;
            //            if( pInfo->flags & SWP_NOMOVE ) tn += T(" SWP_NOMOVE") ;
            //            if( pInfo->flags & SWP_NOSIZE ) tn += T(" SWP_NOSIZE") ;
            //        }
            //    }
            //    tn += T("\r\n") ;
            //    LOGrAW( tn ) ;
            //}

            tinS* pTinDebug2 = &tinP ; //U::

            //WWiNIT

            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //LEGACY WORKAROUND (DO THIS FOR ALL HANDLING SO DON'T NEED TO FIGURE OUT WHAT CAUSES FAIL)
            tinS* pTinDebug3 = &tinP ; //U::
            switch( idCmdP )
            {
                case WM_QUERYENDSESSION :
                {
                    bEndSessionPending = 1 ;
                    bDoDefault = 1 ;
                    break ;
                }
                case WM_ENDSESSION :
                {
                    bEndSessionPending = 0 ;
                    if( p1P && !p2P ) //SESSION ENDING AND NOT BECAUSE OF LOGOFF
                    {
                        thThread.winSendMessageCloseF( tinP , hWindow ) ;

                        //U::REMOVE THIS OBSOLETED CODE AFTER STUDYING WHAT IT DOES WITH STATE INFO
                        // //THIS WOULD LOAD THE CPU WITH CLEANUP ACTIVITY: ((poolOld SideS&)poolC::poolOld RootIF( tinP )).flags ForestFire |= flFORESTfIRE_SHUTDOWN ;
                        // if( !( F( thirdC::third_flagsModeProcess1I_IF( tinP ) ) & flMODEpROCESS1_QUITaTsHUTDOWN ) )
                        // {
                        //     state C::writeToDiskIfIF( tinP ) ;
                        //     TELLsYSc1( ifcIDtYPEtELLsYS_READYtOdIE ) ;
                        // }
                        // thirdC::third_flagsProcessStateI_IF( tinP , flPROCESSsTATE_WM_CLOSE_RECEIVED , 1 ) ; // main WILL PROCEED TO CLEANUP WHEN IT SEES THIS
                        // etThread.etherFireImpersonateMonitorIF( tinP ) ;
                        // sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        // while( !( F(processGlobal1I._thirdC_flagsProcessState) & flPROCESSsTATE_MAINtHREADcLEANUPiScOMPLETE ) ) { ++ s ; thirdC::dosSleepIF( tinP , TUCK * 0x40 ) ; }
                    }
                    break ;
                }
                case WM_WINDOWPOSCHANGING :
                {
                    if( bRoot )
                    {
                        // ENABLE FOR PRODUCTION
#if defined( NEVERdEFINED )
                        if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_DEBUG ) )
                        {
                            WINDOWPOS* pInfo = (WINDOWPOS*)p2P ;
                        
                            RECT info ;
                            info.left   = 0 ;
                            info.top    = 0 ;
                            BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CXSCREEN ) )
                            BOSpOOP
                            info.right  = tinP.brcRaw - 1 ;
                            BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CYSCREEN ) )
                            BOSpOOP
                            info.bottom = tinP.brcRaw - 1 ;
                            BOS( WHATgbo , BOSoK , AdjustWindowRect( &info , WS_OVERLAPPEDWINDOW , 0 ) )
                            BOSpOOP
                                        
                            pInfo->x = info.left ;
                            pInfo->y = info.top ;
                            pInfo->cx = info.right - info.left + 1 ;
                            pInfo->cy = info.bottom - info.top + 1 ;

                            //pInfo->y += TUCK ; //FOR DIGITAL VOICE EDITOR, WHICH IS A SUCKY PROGRAM THAT INSISTS ON RETAINING THE FOREGROUND
                            //pInfo->cy >>= 1 ; //FOR DIGITAL VOICE EDITOR, WHICH IS A SUCKY PROGRAM THAT INSISTS ON RETAINING THE FOREGROUND

                            if( bEndSessionPending )
                            {
                                pInfo->flags |= SWP_NOACTIVATE | SWP_NOMOVE | SWP_NOSIZE ;
                                pInfo->flags &= ~( SWP_SHOWWINDOW ) ;
                            }
                            else pInfo->flags &= ~( SWP_NOMOVE | SWP_NOSIZE ) ;
                        }
                        
                        //LOGrAW( "WM_WINDOWPOSCHANGING: posting idwm_RENDER\r\n" )
                        thThread.winPostMessageF( tinP , hWindow , idwm_RENDER ) ;
#endif
                    }

                    //bDoDefault = 1 ; //CAUSES SLIVER OF WINDOWS DESKTOP TO APPEAR AT BOTTOM OF DISPLAY; WIN32 DOC SAYS IT IS OK TO NOT PASS TO DFLT HANDLER IF DON'T WANT VALIDATION OF NEW SIZE
                    break ;
                }
                case idwm_RENDER :
                {
                    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                    if( pRootI )
                    {
                        ZE( countT , cCols ) ;
                        ZE( countT , cRows ) ;
                        ((thirdC&)etThread).winClientSizeF( tinP , cCols , cRows , *pRootI ) ;
                        pRootI->mColsRowsF( tinP , cCols , cRows ) ;

                        handleC& hWindow     = (handleC&)(const handleC&)*pRootI ;
                        handleC& hDrawWindow = pRootI->hDrawWindowF() ;
                        ((HANDLEaPPnOTEScOUNTcLASS&)hDrawWindow).c1 = ((HANDLEaPPnOTEScOUNTcLASS&)hWindow).c1 = cCols ;
                        ((HANDLEaPPnOTEScOUNTcLASS&)hDrawWindow).c2 = ((HANDLEaPPnOTEScOUNTcLASS&)hWindow).c2 = cRows ;
                        //LOGrAWtID4( "idwm_RENDER (cCols,cRows): " , cCols , " " , cRows ) ;

                        pRootI->strokeAllPapersF( tinP ) ;
                        paperOldC::requestTabFreshIF( tinP ) ;
                        //pRootI->signShown.giveF( tinP ) ;

                        pRootI->letRefF() ;
                    }

                    {
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            paperOldC::grabIF( tinP , TAG( TAGiDnULL ) ) ;
                            paperOldC& paper = (paperOldC&)pRootI->selectPaperF(tinP,ifcIDcMDpAPERsELECT_QUERYsHOW) ;
                            paper.flushF( tinP ) ;
                            paperOldC::ungrabIF( tinP ) ;
                            pRootI->letRefF() ;
                        }
                    }

                    break ;
                }
                case WM_ACTIVATEAPP :
                {
                    TELL( "winMessageHandlerWorkF: WM_ACTIVATEAPP" )
                    if( bRoot && p1P )
                    {
                        //etherC::ifcSayIF( T("WM_ACTIVATEAPP: asking for show to be posted after TOCK nap") , flSAY_APPEND | flSAY_LOG ) ;
                        //etThread.winPostMessageAfterNapF( tinP , TOCK , hWindow , idwm_SHOW , idcWINsHOW_SHOW ) ; //U::CONJ: THIS WILL WORKAROUND FOCUS AND ACTIVATION PROBLEM
                    }
                    break ;
                }
                case WM_ACTIVATE :
                {
                    TELL( "winMessageHandlerWorkF: WM_ACTIVATE" )
                    BOSdOnOTtEST( WHATgbo , LOWORD( p1P ) )
                    countT idMyNewState = tinP.brcRaw ;
                    BOSdOnOTtEST( WHATgbo , HIWORD( p1P ) )
                    boolT bWasMinimized = tinP.brcRaw ;
                    countT hWindowOther = p2P ;

                    if( idMyNewState == WA_INACTIVE )
                    {
                        //U::WHEN USE ExitWindowsEx, DOES NOT WORK: MULTIPLE DEFECT BEHAVIORS
                        // SOMETIMES ONLY LOGS OFF
                        // CAUSES ICON TO DISAPPEAR
                        // CAUSES ICON TO NOT FUNCTION

                        if( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_ENABLEsECURITYsHUTDOWN && etThread.diskFileExistsF( tinP , T("///d/ideafarm.home.")+TF1(etherC::ifc_idHomeIdisk_IF())+T(".setting.flag.secure") ) ) etThread.osFireF( tinP ) ;
                    }
                    else
                    {
                        //THIS HAS BEEN SEEN TO BLOCK FOREVER FOR A KEYBOARD THAT WAS DROPPED AND IS KNOWN TO BE PARTIALLY NONFUNCTIONAL
                        //SO IT HAS BEEN MODIFIED TO BEEP WHEN IT TERMINATES WITH A KEY REPORTEDLY DOWN
                        countT cTries = 0x10 ;
                        while( cTries -- ) //BLOCK UNTIL ALL KEYS AND MOUSE BUTTONS ARE UP; THIS IS SO I CAN APPLY WINDOW MESSAGES TO A KNOWN INITIAL STATE TO MAINTAIN TOOL STATE ARRAY
                        {
                            ZE( boolT , bDown ) ;
                            for( countT vki = 0 ; vki <= 0xff ; vki ++ )
                            {
                                BOS( WHATgbo , BOSoK , GetAsyncKeyState( vki ) )
                                BOSpOOP
                                if( tinP.brcRaw & 0x8000 ) bDown |= 1 ;
                            }
                            if( !bDown ) break ;
                            //dosBeepIF( tinP , TUCK , TUCK ) ;
                        }

                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            ((backOldC*)pRootI)->freshToolsAllFlagOnDownF( tinP ) ;
    
                            //USE FOR DEBUGGING, TO POSITION CURSOR AT LOWER LEFT CORNER
                            //const countT offmc = ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ;
                            //countT       offm  = ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ;
                            //((backOldC*)pRootI)->rowBack.ro.pcToolState_12[ offmc ] = pRootI->mIdColInDad ;
                            //((backOldC*)pRootI)->rowBack.ro.pcToolState_22[ offmc ] = pRootI->mIdRowInDad ;
    
                            //BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CXSCREEN ) )
                            //BOSpOOP
                            //SetCursorPos( winOsColIF( tinP.brcRaw / 2 ) , winOsRowIF( 1 ) ) ;
                            ((backOldC*)pRootI)->freshToolsMousePositionF( tinP ) ;

                             static boolT bDone ;
                             if( !bDone )
                             {
                                 bDone = 1 ;
                                 ((backOldC*)pRootI)->freshToolsMouseButtonsNotPresentF( tinP ) ;
                             }

                            pRootI->letRefF() ;
                        }
                    }

                    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                    if( pRootI )
                    {
                        if( idMyNewState == WA_INACTIVE ) pRootI->setModeFlagsF( tinP , flPAPERbACKmODE_ABSENT , flPAPERbACKmODE_null   ) ;
                        else                              pRootI->setModeFlagsF( tinP , flPAPERbACKmODE_null   , flPAPERbACKmODE_ABSENT ) ;
                        pRootI->letRefF() ;
                    }

                    paperOldC::callSadamsIF( tinP , ether , idMyNewState == WA_INACTIVE ? ifcIDtYPEsTROKEcALLbACK_SLEEP : ifcIDtYPEsTROKEcALLbACK_WAKE , 0 , 0 , idMyNewState != WA_INACTIVE ? flCALLsADAMS_FIFO : flCALLsADAMS_null ) ;
                    
                    if( bRoot )
                    {
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            if( idMyNewState == WA_INACTIVE )
                            {
                                ((backOldC*)pRootI)->resetAllF( tinP ) ;
    
                                const boolT bHideWithIcon = !!( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_HIDEwITHiCON ) ;
                                //if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_DEBUG ) ) thThread.winShowWindowF( tinP , hWindow , bHideWithIcon ? idcWINsHOW_HIDE : idcWINsHOW_MINIMIZE ) ;
                            }
                            else thThread.winShowWindowF( tinP , hWindow , idcWINsHOW_SHOW ) ;

                            pRootI->letRefF() ;
                        }
                    }

                    //bDoDefault = 0 ; //WAS 1
                    break ;
                }
                case WM_CLOSE :
                {
                    etThread.etherFireImpersonateMonitorIF( tinP ) ;
                    //bDoDefault = 0 ;
                    break ;
                }
                case idwm_CLOSE :
                {
                    TELL( "winMessageHandlerWorkF: WM_CLOSE" )

                    {
                        handleC hr( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                        //U:: 2011.06.24: WHY IS THIS HERE?: handleC hi( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            hr.osF( ifcIDtYPEhANDLE_WINDOW , ((const handleC&)*pRootI).osF(  ifcIDtYPEhANDLE_WINDOW ) , 0 , 1 ) ;
                            pRootI->letRefF() ;
                        }
                        thThread.winSendMessageF( tinP , hr , idwm_DESTROY ) ;
                    }

                    //PSEUDODUPLICATE CODE: 1450002 12f0002 1030003 1020171
                    if( tinP.pSwsRecycle )
                    {
                        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                        countT cFlavors = tinP.pSwsRecycle->cFlavorsF( tinP ) ;
                        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                        {
                            tinP.pczl_pSwsRecycle = (countT*)tinP.pSwsRecycle->leverF( tinP , idf ) ;
            
                            while( *tinP.pSwsRecycle )
                            {
                                ZE( voidT* , pObject ) ;
                                *tinP.pSwsRecycle >> *(countT*)&pObject ;
            
                                //LOGrAWtID4( "deleting object " , (countT)pObject , " using pcz lever at " , tinP.pczl_pSwsRecycle ) ; //U::

                                if( tinP.pczl_pSwsRecycle && pObject )
                                {
                                    switch( *tinP.pczl_pSwsRecycle )
                                    {
                                        case ifcIDtYPErECYCLE_soulC        : { DEL(        *(soulC**)&pObject ) ; break ; }
                                        case ifcIDtYPErECYCLE_stackC       : { DEL(       *(stackC**)&pObject ) ; break ; }
                                        case ifcIDtYPErECYCLE_switchC      : { DEL(      *(switchC**)&pObject ) ; break ; }
                                        case ifcIDtYPErECYCLE_switchStackC : { DEL( *(switchStackC**)&pObject ) ; break ; }
                                        default                            : { BLAMMO                           ; break ; }
                                    }
                                }
                            }
                        }
                        THREADmODE1rESTORE
                    }
                    DEL( tinP.pSwsRecycle ) ; //TO MAKE SURE THAT etRock EXISTS WHEN THESE ARE DELETED

                    etThread.etherFireImpersonateMonitorIF( tinP ) ;
                    bOkToUseIfcObjects = 0 ; hWindow.closeIfF() ;

                    DEL( tinP.pEtScratch ) ;
                    DEL( tinP.pScoopEtThread ) ; /*CODEsYNC: 0010056 1020171 */
                    if( thirdC::third_idPhaseProcess_IF() < ifcIDpHASEpROCESS_WORKINGwINDOWtINgONE ) thirdC::third_idPhaseProcess_IF() = ifcIDpHASEpROCESS_WORKINGwINDOWtINgONE ;









                    //DEL( pEtThread ) ; //THIS ALSO CAUSES tinP TO BE DESTROYED









                    if( *(countT*)&(pEtThread) )                                                                                               \
                    {                                                                                                                    \
                        THREADmODE2oFF( flTHREADmODE2_DOnOTcaLLdELif )                                                                   \
                        delete (pEtThread) ;                                                                                                   \
                        THREADmODE2rESTORE                                                                                               \
                        (pEtThread) = 0 ;                                                                                                      \
                    }                                                                                                                    \







                    {
                        TINSL //WILL REFERENCE sf.tinEarlyLate
                        DEL( etherC::ether_pMainRefsIF( tinP ) ) ; // NO FURTHER USE FOR THIS
    
                        thirdC::third_flagsProcessStateI_IF( tinP , flPROCESSsTATE_WM_CLOSE_RECEIVED , 1 ) ; // main WILL PROCEED TO CLEANUP WHEN IT SEES THIS
                        //MAY NOT REFER TO IFC OBJECTS NOW SINCE MAIN IS DELETING THEM ALL

                        //CONJ: THE PURPOSE OF THIS BLOCKAGE WAS TO ENSURE THAT SHUTDOWN DOES NOT COMPLETE UNTIL MAIN COMPLETES
                        //THREADmODE1oN( flTHREADmODE1_ALLOWuNMONITOREDsLEEP )
                        //{
                        //    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        //    while( !( F(thirdC::third_flagsProcessStateI_IF(tinP)) & flPROCESSsTATE_MAINtHREADcLEANUPiScOMPLETE ) ) { ++ s ; thirdC::dosSleepRawIF( tinP , 250 ) ; }
                        //}
                        //THREADmODE1rESTORE
                    }

                    //bDoDefault = 0 ; //WAS 1 (SET TO 0 ON 7/26/2004)

                    break ;
                }
                case WM_MOUSEMOVE :
                case WM_LBUTTONDOWN :
                case WM_LBUTTONUP :
                case WM_LBUTTONDBLCLK :
                case WM_RBUTTONDOWN :
                case WM_RBUTTONUP :
                case WM_RBUTTONDBLCLK :
                case WM_MBUTTONDOWN :
                case WM_MBUTTONUP :
                case WM_MBUTTONDBLCLK :
                {
                    TELL( "winMessageHandlerWorkF: WM_MOUSEMOVE" )
                    {
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            ((backOldC*)pRootI)->resetToolMousePositionFlagsF( tinP ) ;
                            ((backOldC*)pRootI)->freshToolsMousePositionF( tinP ) ;

                            ZE( countT , idTool ) ;
                            ZE( countT , idAction ) ;
                            flagsT flagsOn  = flTOOL_null ;
                            flagsT flagsOff = flTOOL_null ;
                            switch( idCmdP )
                            {
                                case WM_MOUSEMOVE     : { idTool = ifcIDtYPEtOOL_MOUSEpOSITION     ; idAction = ifcIDtYPEaCTION_MOVE ; break ; }
                                case WM_LBUTTONDOWN   : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONlEFT   ; idAction = ifcIDtYPEaCTION_DOWN ; flagsOn  = flTOOL_DOWN ; break ; }
                                case WM_LBUTTONUP     : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONlEFT   ; idAction = ifcIDtYPEaCTION_UP   ; flagsOff = flTOOL_DOWN ; break ; }
                                case WM_MBUTTONDOWN   : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONcENTER ; idAction = ifcIDtYPEaCTION_DOWN ; flagsOn  = flTOOL_DOWN ; break ; }
                                case WM_MBUTTONUP     : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONcENTER ; idAction = ifcIDtYPEaCTION_UP   ; flagsOff = flTOOL_DOWN ; break ; }
                                case WM_RBUTTONDOWN   : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONrIGHT  ; idAction = ifcIDtYPEaCTION_DOWN ; flagsOn  = flTOOL_DOWN ; break ; }
                                case WM_RBUTTONUP     : { idTool = ifcIDtYPEtOOL_MOUSEbUTTONrIGHT  ; idAction = ifcIDtYPEaCTION_UP   ; flagsOff = flTOOL_DOWN ; break ; }
                            }
                            ((backOldC*)pRootI)->setToolFlagsF( tinP , idTool , flagsOn , flagsOff ) ;

                            const countT xpRaw = p2P & 0xffff ;
                            const countT ypRaw = p2P >> 0x10 ;
                        
                            //etThread.beeClickF( tinP ) ;
                            //LOGrAW( T("mouse message ")+T(processGlobal3I.mapWindowMessage(idCmdP))+T(": xpRaw,ypRaw is ")+TF1(xpRaw)+T(" ")+TF1(ypRaw)+T(" ")+TF1(winIfColIF(xpRaw))+T(" ")+TF1(winIfRowIF(ypRaw,pRoot->mRowsF()))+T("\r\n") ) ;
    
                            count8S c8n( 1 , 4 , idTool , idAction , xpRaw + 1 , pRootI->mRowsF() - ypRaw ) ;
                            paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_MOUSE , c8n , 0 ) ;
                    
                            pRootI->letRefF() ;
                        }
                    }

                    break ;
                }
                case WM_CHAR :
                case WM_KEYDOWN :
                case WM_SYSKEYDOWN :
                {
                    boolT bDo = idCmdP == WM_CHAR ;
                    if( !bDo )
                    {
                        switch( p1P )
                        {
                            case VK_LBUTTON :
                            case VK_RBUTTON :
                            case VK_CANCEL :
                            case VK_MBUTTON :
                            //case VK_BACK :
                            //case VK_TAB :
                            case VK_CLEAR :
                            //case VK_RETURN :
                            case VK_SHIFT :
                            case VK_CONTROL :
                            case VK_MENU :
                            case VK_PAUSE :
                            case VK_CAPITAL :
                            //case VK_ESCAPE :
                            //case VK_SPACE :
                            case VK_PRIOR :
                            case VK_NEXT :
                            case VK_END :
                            case VK_HOME :
                            case VK_LEFT :
                            case VK_UP :
                            case VK_RIGHT :
                            case VK_DOWN :
                            case VK_SELECT :
                            case VK_PRINT :
                            case VK_EXECUTE :
                            case VK_SNAPSHOT :
                            case VK_INSERT :
                            case VK_DELETE :
                            case VK_HELP :
                            case VK_LWIN :
                            case VK_RWIN :
                            case VK_APPS :
                            //case VK_NUMPAD0 :
                            //case VK_NUMPAD1 :
                            //case VK_NUMPAD2 :
                            //case VK_NUMPAD3 :
                            //case VK_NUMPAD4 :
                            //case VK_NUMPAD5 :
                            //case VK_NUMPAD6 :
                            //case VK_NUMPAD7 :
                            //case VK_NUMPAD8 :
                            //case VK_NUMPAD9 :
                            //case VK_MULTIPLY :
                            //case VK_ADD :
                            case VK_SEPARATOR :
                            //case VK_SUBTRACT :
                            //case VK_DECIMAL :
                            //case VK_DIVIDE :
                            case VK_F1 :
                            case VK_F2 :
                            case VK_F3 :
                            case VK_F4 :
                            case VK_F5 :
                            case VK_F6 :
                            case VK_F7 :
                            case VK_F8 :
                            case VK_F9 :
                            case VK_F10 :
                            case VK_F11 :
                            case VK_F12 :
                            case VK_F13 :
                            case VK_F14 :
                            case VK_F15 :
                            case VK_F16 :
                            case VK_F17 :
                            case VK_F18 :
                            case VK_F19 :
                            case VK_F20 :
                            case VK_F21 :
                            case VK_F22 :
                            case VK_F23 :
                            case VK_F24 :
                            case VK_NUMLOCK :
                            case VK_SCROLL :
                            case VK_LSHIFT :
                            case VK_RSHIFT :
                            case VK_LCONTROL :
                            case VK_RCONTROL :
                            case VK_LMENU :
                            case VK_RMENU :
                            case VK_PROCESSKEY :
                            case VK_ATTN :
                            case VK_CRSEL :
                            case VK_EXSEL :
                            case VK_EREOF :
                            case VK_PLAY :
                            case VK_ZOOM :
                            case VK_NONAME :
                            case VK_PA1 :
                            case VK_OEM_CLEAR :
                            {
                                bDo = 1 ;
                                break ;
                            }
                        }
                    }

                    if( bDo )
                    {
                        TELL( "winMessageHandlerWorkF: WM_CHAR WM_KEYDOWN WM_SYSKEYDOWN" )
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            pRootI->keyDownF( tinP , idCmdP , p1P , p2P ) ;
                            pRootI->letRefF() ;
                        }
                        TELL( "winMessageHandlerWorkF: WM_CHAR WM_KEYDOWN WM_SYSKEYDOWN" )
                    }
                    //bDoDefault = 0 ; //PREVENT WINDOWS FROM SEEING ANY KEYSTROKES FOR SYSTEM PURPOSES
                    break ;
                }
                case WM_KEYUP :
                case WM_SYSKEYUP :
                {
                    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                    if( pRootI )
                    {
                        pRootI->keyUpF( tinP , p2P ) ;
                        pRootI->letRefF() ;
                    }
                    //bDoDefault = 0 ;
                    break ;
                }
                case idwm_DESTROY :
                case WM_DESTROY :
                {
                    TELL( "winMessageHandlerWorkF: WM_DESTROY" )
                    {
                        windowOldC* pwDoomed = windowOldC::pWindowIF( tinP , hWindow ) ;
                        if( pwDoomed )
                        {
                            windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                            if( pRootI )
                            {
                                if( pwDoomed == pRootI )
                                {
                                    //NOTIFYICONDATA info ;
                                    //info.cbSize = sizeof info ;
                                    //info.hWnd = (HWND)( (const handleC&)*pRootI ).osF( ifcIDtYPEhANDLE_WINDOW ) ;
                                    //info.uID = 0x1 ;
                                    //info.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP ;
                                    //info.uCallbackMessage = idwm_TASKbARiCON ;
                                    //info.hIcon = LoadIcon( (HINSTANCE)thirdC::third_hWindowingClientIF( tinP ).osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) , MAKEINTRESOURCE( 1 ) ) ;
                                    //    
                                    //OStEXT( oston , 0x80 )
                                    //OStEXTAK( oston , "IPDOS (tm) IdeaFarm " "(tm) Piggyback Distributed Operating System" )
                                    //if( processGlobal1I.idHome > 1 )
                                    //{
                                    //    OStEXTAK( oston , " (Home " )
                                    //    OStEXTC(  oston , processGlobal1I.idHome , 0 )
                                    //    OStEXTAK( oston , ")" )
                                    //}
                                    //thirdC::c_strncpyIF( tinP , info.szTip , oston , sizeof info.szTip ) ;
                                    //    
                                    //Shell_NotifyIcon( NIM_DELETE , &info ) ;
    
                                    BOSnOvALUE( WHATgbo , PostQuitMessage( 0 ) )
                                }
                                pRootI->letRefF() ;
                            }
        
                            DEL( pwDoomed ) ;
                        }
                    }
                    break ;
                }
                case WM_PAINT :
                {
                    TELL( "winMessageHandlerWorkF: WM_PAINT" )
    
                    thirdC& thPaint = (thirdC&)etherC::etPaintIF( tinP ) ;

                    //NEEDS TO BE DONE HERE SO THAT winBeginPaintF WILL HAVE THE CURRENT mRows VALUE
                    //{
                    //    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                    //    if( pRootI )
                    //    {
                    //        ZE( countT , cCols ) ;
                    //        ZE( countT , cRows ) ;
                    //        ((thirdC&)etThread).winClientSizeF( tinP , cCols , cRows , *pRootI ) ;
                    //        pRootI->mColsRowsF( tinP , cCols , cRows ) ;
                    //    }
                    //}
        
                    handleC hDrawWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
                    {
                        ZE( sCountT , idColMin ) ;
                        ZE( sCountT , idRowMin ) ;
                        ZE( sCountT , idColMax ) ;
                        ZE( sCountT , idRowMax ) ;
                        thPaint.winBeginPaintF( tinP , hDrawWindow , hWindow , idColMin , idRowMin , idColMax , idRowMax ) ;
                    }

                    if( ~hDrawWindow )
                    {
                        windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                        if( pRootI )
                        {
                            BOS( WHATgbd , BOSoK , SetWindowOrgEx( (HDC)hDrawWindow.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , pRootI->mIdColOsOriginF() + 0.5 , pRootI->mIdRowOsOriginF() + 0.5 , 0 ) )
                            BOSpOOP
                            pRootI->letRefF() ;
                        }
        
                        thPaint.winEndPaintF( tinP , hDrawWindow ) ;
                        if( hDrawWindow == pRootI->hDrawWindowF() ) hDrawWindow.resetF() ;
                    }

                    thPaint = 0 ;

                    thThread.winPostMessageF( tinP , hWindow , idwm_RENDER ) ;
    
                    break ;
                }
                case idwm_SHOW :
                {
                    TELL( "winMessageHandlerWorkF: idwm_SHOW" )
                    ZE( countT , idTone ) ;
                    switch( p1P )
                    {
                        case idcWINsHOW_DEFAULT         : { idTone = 0xb ; break ; }
                        case idcWINsHOW_MAXIMIZE        : { idTone = 0xa ; break ; }
                        case idcWINsHOW_SHOW            : { idTone = 0x9 ; break ; }
                        case idcWINsHOW_SHOWnOaCTIVATE  : { idTone = 0x8 ; break ; }
                        case idcWINsHOW_MINIMIZE        : { idTone = 0x7 ; break ; }
                        case idcWINsHOW_HIDE            : { idTone = 0x2 ; break ; }
                        default                         : { idTone = 0x1 ; break ; }
                    }

                    thThread.winShowWindowF( tinP , hWindow , (countT)p1P ) ;
                    break ;
                }
                case idwm_CREATEwINDOW :
                {
                    TELL( "winMessageHandlerWorkF: idwm_CREATEwINDOW" )
                    count2S* pc2 = (count2S*)p1P ;
                    if( pc2 )
                    {
                        count8S* pc8a = (count8S*)pc2->c1 ;
                        count8S* pc8b = (count8S*)pc2->c2 ;

                        if( pc8a && pc8b && pc8b->c1 )
                        {
                            __( hWindow != *(windowOldC*)pc8a->c1 ) ;
                            countT   idCol       =           pc8a->c2 ;
                            countT   idRow       =           pc8a->c3 ;
                            countT   cCol        =           pc8a->c4 ;
                            countT   cRow        =           pc8a->c5 ;
                            countT   cColClient  =           pc8a->c6 ;
                            countT   cRowClient  =           pc8a->c7 ;
                            countT   bRoot       =           pc8a->c8 ;
                            handleC* phWindow    = (handleC*)pc8b->c1 ;
                            countT   bNotVisible =           pc8b->c2 ;
                            countT   cTries      =           pc8b->c3 ;
        
                            //LOGrAWtID4( "idwm_CREATEwINDOW calling winCreateWindowF (cColP,cRowP): " , cCol , " " , cRow ) ;
                            thThread.winCreateWindowF( tinP , hWindow , *phWindow , MAINwINDOWcLASSnAME , MAINwINDOWcLASSnAME , bRoot ? idtWIN_ROOT : idtWIN_KID , idCol , idRow , cCol , cRow , cColClient , cRowClient , thirdC::third_hWindowingClientIF( tinP ) , bNotVisible ) ;
                            //U::TO CATCH A BUG: thThread.winShowWindowF( tinP , hWindow , idcWINsHOW_SHOW ) ;
                            thThread.winPaintNowF( tinP , hWindow ) ;
                        }
                        etThread.delF( tinP , pc8a ) ;
                        etThread.delF( tinP , pc8b ) ;
                    }
                    else __1
                    etThread.delF( tinP , pc2 ) ;
    
                    break ;
                }
                case idwm_SETwINDOWtEXT :
                {
                    TELL( "winMessageHandlerWorkF: idwm_SETwINDOWtEXT" )
                    osTextT* postt = (osTextT*)p1P ;
                    rc = thThread.winSetTitleF( tinP , postt , hWindow ) ;
                    thThread.delF( tinP , postt ) ;
    
                    break ;
                }
                case idwm_TEST :
                {
                    TELL( "winMessageHandlerWorkF: idwm_TEST" )
                    break ;
                }
                case idwm_TASKbARiCON :
                {
                    TELL( "winMessageHandlerWorkF: idwm_TASKbARiCON" )
                    if( p2P == WM_LBUTTONDOWN )
                    {
                        //etherC::ifcSayIF( T("idwm_TASKbARiCON: asking for show to be posted after TOCK nap") , flSAY_APPEND | flSAY_LOG ) ;
                        etThread.winPostMessageAfterNapF( tinP , TUCK * 0x10 , hWindow , idwm_SHOW , idcWINsHOW_SHOW ) ; //DELAY IS NEEDED; OTHERWISE TASKBAR RETAINS ACTIVE STATUS AND I RECEIVE A DEACTIVATION
                        etThread.winPostMessageAfterNapF( tinP , TUCK * 0x20 , hWindow , idwm_BECOMEaCTIVE ) ; //DELAY IS NEEDED; OTHERWISE TASKBAR RETAINS ACTIVE STATUS AND I RECEIVE A DEACTIVATION
                    }
                    break ;
                }
                case idwm_BECOMEaCTIVE :
                {
                    //Beep ( 0x100 , 0x40 ) ;
                    //LOGrAW( "idwm_BECOMEaCTIVE: setting focus\r\n" ) ; //U::
                    //countT rc1 = (countT)SetFocus( (HWND)oshWindowP ) ;
                    //countT rc2 = (countT)SetActiveWindow( (HWND)oshWindowP ) ; //ADDED TO DEBUG A BUG

                    //Beep ( TUCK << 2 , TUCK ) ;
                    BOS( WHATgbo , BOSoK , SetForegroundWindow( (HWND)oshWindowP ) )
                    BOSpOOP

                    break ;
                }
                case idwm_SPINpOST :
                {
                    TELL( "winMessageHandlerWorkF: idwm_SPINpOST" )
                    // p1P: NUMBER OF TIMES TO SEND MYSELF TO DELAY
                    // p2P: THE MESSAGE TO SEND AFTER THE DELAY SPIN

                    if( p1P )
                    {
                        //Beep ( 0x100 + p1P * 0x10 , 0x40 ) ;
                        thThread.winPostMessageF( tinP , hWindow , idCmdP , p1P - 1 , p2P ) ;
                    }
                    else
                    {
                        count3S* pc3p = (count3S*)p2P ;
                        if( pc3p )
                        {
                            thThread.winPostMessageF( tinP , hWindow , pc3p->c1 , pc3p->c2 , pc3p->c3 ) ;
                        }
                        etThread.delF( tinP , pc3p ) ;
                    }

                    break ;
                }
                default: { rc = thirdC::winDefaultMessageHandlerIF( tinP , oshWindowP , idCmdP , p1P , p2P ) ; break ; }
            }

            if( bOkToUseIfcObjects ) THREADmODE1rESTORE //LEGACY WORKAROUND (DO THIS FOR ALL HANDLING SO DON'T NEED TO FIGURE OUT WHAT CAUSES FAIL)
            else
            {
                TINSL
                THREADmODE1rESTORE //LEGACY WORKAROUND (DO THIS FOR ALL HANDLING SO DON'T NEED TO FIGURE OUT WHAT CAUSES FAIL)
            }

            //DOES NOT WORK
            //if( oshWindowP == (countT)GetForegroundWindow() ) ;
            //else
            //{
            //    static countT timeL1 ;
            //    static sCountT timeL2 ;
            //
            //    ZE( countT , timeN1 ) ;
            //    ZE( sCountT , timeN2 ) ;
            //    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
            //
            //    countT  timeE1 = timeN1 ;
            //    sCountT timeE2 = timeN2 ;
            //    etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeL1 , timeL2 ) ;
            //
            //    if( timeE2 || timeE1 > TOCK )
            //    {
            //        timeL1 = timeN1 ;
            //        timeL2 = timeN2 ;
            //        etThread.winPostMessageAfterNapF( tinP , TUCK * 0x20 , hWindow , idwm_BECOMEaCTIVE ) ;
            //    }
            //}
        }

        if( bOkToUseIfcObjects )
        {
            TELL( "winMessageHandlerWorkF: returned control to os's message pump code" )
            WHATsw
        }
    }

    if( bDoDefault ) rc = thirdC::winDefaultMessageHandlerIF( tinP , oshWindowP , idCmdP , p1P , p2P ) ;

    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001131.thirdc.winmessagehandlerworkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001132.thirdc.osdisplaysizef BEGIN
#define DDNAME       "3func.35001132.thirdc.osdisplaysizef"
#define DDNUMB      (countT)0x35001132
#define IDFILE      (countT)0xa71


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 cColsP
  must be 0
 cRowsP
  must be 0
*/
/**/

/*1*/voidT thirdC::osDisplaySizeF( tinS& tinP , countT& cColsP , countT& cRowsP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( cColsP ) ;
        __( cRowsP ) ;
        if( POOP ) return ;
    }

    _IO_

    BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CXSCREEN ) )
    BOSpOOP
    cColsP = tinP.brcRaw ;

    BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CYSCREEN ) )
    BOSpOOP
    cRowsP = tinP.brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001132.thirdc.osdisplaysizef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001133.thirdc.winadjustwindowpositionf BEGIN
#define DDNAME       "3func.35001133.thirdc.winadjustwindowpositionf"
#define DDNUMB      (countT)0x35001133
#define IDFILE      (countT)0xa72


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::winAdjustWindowPositionF( tinS& tinP , sCountT& idColP , sCountT& idRowP , countT& cColsP , countT& cRowsP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( cColsP ) ; //NULL SIZE MIGHT WORK: NOT TESTED
        __Z( cRowsP ) ;
        if( POOP ) return ;
    }

    _IO_

    RECT info ;
    info.left   = winOsColIF( idColP ) ;
    info.right  = info.left + cColsP - 1 ;
    info.bottom = winOsRowIF( idRowP ) ;
    info.top    = info.bottom - cRowsP + 1 ;

    countT leftSave = info.left ;
    countT bottomSave = info.bottom ;

    BOS( WHATgbo , BOSoK , AdjustWindowRect( &info , WS_OVERLAPPEDWINDOW , 0 ) )
    BOSpOOP

    if( !tinP.pAdamGlobal1->_thirdC_.mColsAdjForWinFrame && !tinP.pAdamGlobal1->_thirdC_.mRowsAdjForWinFrame )
    {
        tinP.pAdamGlobal1->_thirdC_.mColsAdjForWinFrame = leftSave    - info.left  ; //POSITIVE NUMBER FOR ADJUSTING BOTTOM LEFT CORNER
        tinP.pAdamGlobal1->_thirdC_.mRowsAdjForWinFrame = info.bottom - bottomSave ; //POSITIVE NUMBER FOR ADJUSTING BOTTOM LEFT CORNER
    }

    if( !POOP )
    {
        cColsP = info.right - info.left + 1 ;
        cRowsP = info.bottom - info.top + 1 ;
        idColP = winIfColIF( info.left   ) ;
        idRowP = winIfRowIF( info.bottom ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001133.thirdc.winadjustwindowpositionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001134.thirdc.winidmsguserif BEGIN
#define DDNAME       "3func.35001134.thirdc.winidmsguserif"
#define DDNUMB      (countT)0x35001134
#define IDFILE      (countT)0xa73


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::winIdMsgUserIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return WM_USER ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001134.thirdc.winidmsguserif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001135.thirdc.winosrowif BEGIN
#define DDNAME       "3func.35001135.thirdc.winosrowif"
#define DDNUMB      (countT)0x35001135
#define IDFILE      (countT)0xa74


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winOsRowIF( const measureT mIfRowP , const measureT mRowsP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        return mRowsP - mIfRowP ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001135.thirdc.winosrowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001136.thirdc.winifrowif BEGIN
#define DDNAME       "3func.35001136.thirdc.winifrowif"
#define DDNUMB      (countT)0x35001136
#define IDFILE      (countT)0xa75


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winIfRowIF( const measureT mOsRowP , const measureT mRowsP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        return mRowsP - mOsRowP ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001136.thirdc.winifrowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001137.thirdc.winosrowif BEGIN
#define DDNAME       "3func.35001137.thirdc.winosrowif"
#define DDNUMB      (countT)0x35001137
#define IDFILE      (countT)0xa76


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winOsRowIF( const measureT mIfRowP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetSystemMetrics( SM_CYSCREEN ) )
        return (measureT)_brcRaw - mIfRowP ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001137.thirdc.winosrowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001138.thirdc.winifrowif BEGIN
#define DDNAME       "3func.35001138.thirdc.winifrowif"
#define DDNUMB      (countT)0x35001138
#define IDFILE      (countT)0xa77


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winIfRowIF( const measureT mOsRowP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetSystemMetrics( SM_CYSCREEN ) )
        return (measureT)_brcRaw - mOsRowP ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001138.thirdc.winifrowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001139.thirdc.winoscolif BEGIN
#define DDNAME       "3func.35001139.thirdc.winoscolif"
#define DDNUMB      (countT)0x35001139
#define IDFILE      (countT)0xa78


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winOsColIF( const measureT mIfColP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        return mIfColP - 1.0f ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001139.thirdc.winoscolif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113a.thirdc.winifcolif BEGIN
#define DDNAME       "3func.3500113a.thirdc.winifcolif"
#define DDNUMB      (countT)0x3500113a
#define IDFILE      (countT)0xa79


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT thirdC::winIfColIF( const measureT osColP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        return osColP + 1.0f ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113a.thirdc.winifcolif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113b.thirdc.osclockif BEGIN
#define DDNAME       "3func.3500113b.thirdc.osclockif"
#define DDNUMB      (countT)0x3500113b
#define IDFILE      (countT)0xa7a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
returns the value of a call to clock()
the meaning of the value depends upon the operating system
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/countT thirdC::osClockIF( tinS& tinP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOSdOnOTtEST( WHATgbo , clock() )
        return tinP.brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113b.thirdc.osclockif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113c.thirdc.ostimeif BEGIN
#define DDNAME       "3func.3500113c.thirdc.ostimeif"
#define DDNUMB      (countT)0x3500113c
#define IDFILE      (countT)0xa7b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
returns the value of a call to time()
the meaning of the value depends upon the operating system
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/countT thirdC::osTimeIF( voidT )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( time( 0 ) )
        return _brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113c.thirdc.ostimeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113d.thirdc.mathlogif BEGIN
#define DDNAME       "3func.3500113d.thirdc.mathlogif"
#define DDNUMB      (countT)0x3500113d
#define IDFILE      (countT)0xa7c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathLogIF( tinS& tinP , measure04T mP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        BOSmEASURE04( WHATgbo , log( mP ) )
        return tinP.brcm04Raw ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113d.thirdc.mathlogif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113e.thirdc.osopenprocessif BEGIN
#define DDNAME       "3func.3500113e.thirdc.osopenprocessif"
#define DDNUMB      (countT)0x3500113e
#define IDFILE      (countT)0xa7d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/countT thirdC::osOpenProcessIF( voidT )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetCurrentProcess() )
        return _brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113e.thirdc.osopenprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113f.thirdc.osopenprocessif BEGIN
#define DDNAME       "3func.3500113f.thirdc.osopenprocessif"
#define DDNUMB      (countT)0x3500113f
#define IDFILE      (countT)0xa7e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::osOpenProcessIF( const countT osPidP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( OpenProcess( PROCESS_ALL_ACCESS , 0 , osPidP ) )
        return _brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500113f.thirdc.osopenprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001140.thirdc.oshandlecloseif BEGIN
#define DDNAME       "3func.35001140.thirdc.oshandlecloseif"
#define DDNUMB      (countT)0x35001140
#define IDFILE      (countT)0xa7f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal for any code other than testWaterC to call me
*/
/**/

/*1*/voidT thirdC::osHandleCloseIF( countT& oshP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( CloseHandle( (HANDLE)oshP ) )
        if( !_brcRaw ) { BLAMMO ; }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001140.thirdc.oshandlecloseif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001141.thirdc.osopenhandlecritsecif BEGIN
#define DDNAME       "3func.35001141.thirdc.osopenhandlecritsecif"
#define DDNUMB      (countT)0x35001141
#define IDFILE      (countT)0xa80


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::osOpenHandleCritSecIF( tinS& tinP )/*1*/
{
    _IO_
    ZE( countT , osh ) ;

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        #if defined( __NT__ )

            thirdC& thPrime = thirdC::thPrimeIF( tinP ) ;
            if( !thPrime )
            {
                PUSE.newF( tinP , LF , *(byteT**)&osh , sizeof( CRITICAL_SECTION ) ) ; ___( osh ) ;
                #if defined( ENABLEdROPnOTES )
                    if( osh )
                    {
                        dropNoteS* pNote = PUSE.pDropNoteF( tinP , (byteT*)osh ) ;
                        if( pNote )
                        {
                            pNote->idType       = ifciDtYPEdROPnOTE_CRITICAL_SECTION ;
                            pNote->cbRequested  = pNote->cbUsedReally = sizeof( CRITICAL_SECTION ) ;
                        }
                    }
                #endif
                if( !osh ) FIREmYSELF( 2 )
                if( !thPrime ) BOSnOvALUE( WHATgbo , InitializeCriticalSection( (CRITICAL_SECTION*)osh ) )
            }

        #endif

    #endif
    return osh ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001141.thirdc.osopenhandlecritsecif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001142.thirdc.winbitbltif BEGIN
#define DDNAME       "3func.35001142.thirdc.winbitbltif"
#define DDNUMB      (countT)0x35001142
#define IDFILE      (countT)0xa81


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/voidT thirdC::winBitBltIF( tinS& tinP , const countT idTypePaintP , const handleC& hDrawToP , const handleC& hDrawFromP , const measureT mColsP , measureT mRowsP , const measureT mIdColToP , const measureT mIdRowToP , measureT mIdColFromP , measureT mIdRowFromP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        const countT cRowsDrawTo   = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawToP).c2 ;
        const countT cRowsDrawFrom = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawFromP).c2 ;

        if( cRowsDrawTo ) //U::BUG: WHAT  IF THE CLIENT WINDOW HAS ZE WIDTH?
        {
            //Beep ( TUCK << 3 , TUCK ) ;
            //LOGrAW5( "winBitBltIF [cRowsDrawTo,cRowsDrawFrom]: " , cRowsDrawTo , " " , cRowsDrawFrom , "\r\n" ) ;
    
            //__Z( cRowsDrawTo ) ;
            __Z( cRowsDrawFrom ) ;
            if( !POOP )
            {
                ZE( countT , osTypePaint ) ;
                switch( idTypePaintP )
                {
                    case ifcIDtYPEpAINT_OPAQUE : { osTypePaint = SRCCOPY    ; break ; }
                    case ifcIDtYPEpAINT_XOR    : { osTypePaint = SRCINVERT  ; break ; }
                    //case ifcIDtYPEpAINT_INVERT : { osTypePaint = NOTSRCCOPY ; break ; }
                    default : { BLAMMO ; break ; }
                }
    
                measureT mIdRowFrom = mIdRowFromP - 1.0 + mRowsP ;
                measureT mIdRowTo   = mIdRowToP   - 1.0 + mRowsP ;
        
                sCountT osColFrom   = R( winOsColIF( mIdColFromP                ) ) ;
                sCountT osColTo     = R( winOsColIF( mIdColToP                  ) ) ;
                sCountT osRowFrom   = R( winOsRowIF( mIdRowFrom , cRowsDrawFrom ) ) ;
                sCountT osRowTo     = R( winOsRowIF( mIdRowTo   , cRowsDrawTo   ) ) ;
    
                BOS( WHATgbo , BOSoK , BitBlt( (HDC)hDrawToP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , osColTo , osRowTo , 1 + R( mColsP ) , R( mRowsP ) , (HDC)hDrawFromP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , osColFrom , osRowFrom , osTypePaint ) )
                BOSpOOP
            }
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001142.thirdc.winbitbltif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001143.thirdc.mathcosif BEGIN
#define DDNAME       "3func.35001143.thirdc.mathcosif"
#define DDNUMB      (countT)0x35001143
#define IDFILE      (countT)0xa82


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathCosIF( tinS& tinP , measure04T mRadP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOSmEASURE04( WHATgbo , cos( mRadP ) )
        return tinP.brcm04Raw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001143.thirdc.mathcosif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001144.thirdc.mathsinif BEGIN
#define DDNAME       "3func.35001144.thirdc.mathsinif"
#define DDNUMB      (countT)0x35001144
#define IDFILE      (countT)0xa83


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathSinIF( tinS& tinP , measure04T mRadP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOSmEASURE04( WHATgbo , sin( mRadP ) )
        return tinP.brcm04Raw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001144.thirdc.mathsinif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001145.thirdc.mathsqrtif BEGIN
#define DDNAME       "3func.35001145.thirdc.mathsqrtif"
#define DDNUMB      (countT)0x35001145
#define IDFILE      (countT)0xa84


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathSqrtIF( tinS& tinP , measure04T mP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        BOSmEASURE04( WHATgbo , sqrt( mP ) )
        return tinP.brcm04Raw ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001145.thirdc.mathsqrtif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001146.thirdc.mathatanif BEGIN
#define DDNAME       "3func.35001146.thirdc.mathatanif"
#define DDNUMB      (countT)0x35001146
#define IDFILE      (countT)0xa85


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathAtanIF( tinS& tinP , measure04T mColP , measure04T mRowP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOSmEASURE04( WHATgbo , atan2( mRowP , mColP ) )
        return tinP.brcm04Raw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001146.thirdc.mathatanif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114b.thirdc.filereadif BEGIN
#define DDNAME       "3func.3500114b.thirdc.filereadif"
#define DDNUMB      (countT)0x3500114b
#define IDFILE      (countT)0xa86


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to the size of the file (number of bytes available)
arguments
 tinP
 pbP
  must not be 0 unles cbP is also 0
  points to bytes that will receive the image of the file
 cbP
  can be 0
   if 0 then no data will be placed into pbP
  will be set to the number of bytes written to the bytes at pbP
  normal usage is to call me with !cbP to obtain the file size and then to call me again to obtain the data
*/
/**/

/*1*/count04T thirdC::fileReadIF( tinS& tinP , byteT* const pbP , countT& cbP , const osTextT* const postNameP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __( !pbP && cbP ) ;
        __Z( postNameP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( count04T , cbFile ) ;

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOS( WHATgbo , BOShANDLE , CreateFile( postNameP , GENERIC_READ , FILE_SHARE_READ , 0 , OPEN_EXISTING , 0 , 0 ) )
        BOSpOOP
        countT osh = tinP.brcRaw ;

        if( !POOP )
        {
            BOS( WHATgbo , BOSoK , GetFileSizeEx( (HANDLE)osh , (_LARGE_INTEGER*)&cbFile ) )
            BOSpOOP
        }

        if( !POOP )
        {
            countT cbMax = - 1 ;

            countT cbMouthful = cbP
                ? cbFile > cbP
                    ? cbP
                    : (countT)cbFile
                : (count04T)cbMax < cbFile
                    ? cbMax
                    : (countT)cbFile
            ;

            __( !cbP && (count04T)cbMax < cbFile ) ;

            BOS( WHATgbo , BOSoK , ReadFile( (HANDLE)osh , pbP , cbMouthful , (ULONG*)&cbP , 0 ) )
            BOSpOOP
            BOS( WHATgbo , BOSoK , CloseHandle( (HANDLE)osh ) )
            BOSpOOP
        }

    #endif

    return cbFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114b.thirdc.filereadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114c.thirdc.osthreadlaunchheartbeatif BEGIN
#define DDNAME       "3func.3500114c.thirdc.osthreadlaunchheartbeatif"
#define DDNUMB      (countT)0x3500114c
#define IDFILE      (countT)0xa87


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//DUPLICATED CODE: 1020057 1610008
#ifdef __OS2__
    typedef voidT (OSF *tmfosFT)( ULONG argP ) ;
#elif defined( __NT__ )
    typedef ULONG (OSF *tmfosFT)( voidT* argP ) ;
#endif

/*
*/
/**/
/*1*/TASK0PROTO( tmHeartF ) // NOTE THAT THIS S A RAW THREAD; IT HAS NO THREAD LOCAL STORAGE SO CANNOT CALL pTinF/*1*/
{
    //TINSL MUST NOT BE USED ANYWHERE ON THIS THREAD; THAT WOULD REFERENCE THE tinS FOR THREAD main (SINCE I EXIST EARLY AND LATE)

    tinS& tinP = processGlobal4I.tinHeart ;
    ZE( countT , _brcRaw ) ;
    thirdC::osTraceWrongNodeIF( tinP , (byteT*)&_brcRaw , "tmHeartF: _brcRaw" ) ;
    BOSnOtIN( GetCurrentThreadId() )
    processGlobal4I.tinHeart.osTid = _brcRaw ;
    BOSnOtIN( GetCurrentProcessId() )
    processGlobal4I.tinHeart.osPid = _brcRaw ;
    if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
    if( tinP.monitor.idThread - ifcIDtHREADlOW_tmHeartF ) { BLAMMO ; }
    TELL( "setting up" )
    _IO_

    {
        POOPIES

        if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
        homeS& home = homeS::homeIF() ;

        sleepC s( tinP , LF , (byteT*)0 ) ; //MUST NOT EVER BE DESTROYED, SINCE THAT WOULD INVOKE TINSL
        countT bWo = 1 ; //TO AVOID COMPILER WARNING
        while( bWo )
        {
            TELL( "working" )
            for( countT offg = 0 ; offg < CfIREgROUPS ; offg ++ )
            {
                if( processGlobal1I.pFireGroup[ offg ].idAdam && processGlobal1I.pFireGroup[ offg ].idGroup && processGlobal1I.pFireGroup[ offg ].idGroup < CfIREaLLrANKS )
                {
                    inc02AM( home.pFireAll[ processGlobal1I.pFireGroup[ offg ].idGroup - 1 ].cHeartBeats ) ;
                }
            }
    
            TELL( "napping" )
            //POOPIE
            ++ s ; thirdC::dosSleepRawIF( tinP , MShEARTbEATnAP ) ;
        }

        TELL( "tmHeartF: cleaning up" )
    }

    if( argP ) ;
    #if defined( __NT__ )
        return 0 ;
    #endif
}

/*1*/voidT thirdC::osThreadLaunchHeartbeatIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP )  return ;
    }

    _IO_

    byteT _pbsd[ SECURITY_DESCRIPTOR_MIN_LENGTH + sizeof( countT ) ] ;

    countT _cbAlign = (countT)_pbsd % sizeof( countT ) ;
    if( _cbAlign ) _cbAlign = sizeof( countT ) - _cbAlign ;

    SECURITY_ATTRIBUTES sa ;
    sa.nLength = sizeof sa ;
    sa.lpSecurityDescriptor = (SECURITY_DESCRIPTOR*)( _pbsd + _cbAlign ) ;
    sa.bInheritHandle = 0 ;

    ZE( countT , _brcRaw ) ;
    BOSnOtIN( InitializeSecurityDescriptor( sa.lpSecurityDescriptor , SECURITY_DESCRIPTOR_REVISION ) )
    BOSnOtIN( SetSecurityDescriptorDacl( sa.lpSecurityDescriptor , 1 , 0 , 0 ) )

    ZE( countT , tidP ) ;

    BOS( WHATgbo , BOSoK , CreateThread( &sa , 1 * 1024 , (tmfosFT)tmHeartF , 0 , 0 , (ULONG*)&tidP ) )
    BOSpOOP

    HANDLE osh = (HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , SetThreadPriority( osh , THREAD_PRIORITY_TIME_CRITICAL ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseHandle( osh ) )
    BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114c.thirdc.osthreadlaunchheartbeatif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114d.thirdc.ossetupexceptionhandlingif BEGIN
#define DDNAME       "3func.3500114d.thirdc.ossetupexceptionhandlingif"
#define DDNUMB      (countT)0x3500114d
#define IDFILE      (countT)0xa88


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#define CsLOTS 0x10

typedef long _stdcall (*rootExceptionFilterFT)( _EXCEPTION_POINTERS* pOsInfoP ) ;

countT _stdcall rootExceptionFilterF( voidT* pvOsInfoP )
{
    //CONoUTrAW( "rootExceptionFilterF/+\r\n" ) ;

    countT rc = EXCEPTION_EXECUTE_HANDLER ;

    static flagsT flagsResult = flEXCEPTIONrESULT_null ;
    if( F(flagsResult) & flEXCEPTIONrESULT_EXITpROCESScALLED ) thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; //EXCEPTION OCCURED DURING DLL TERMINATION ELICITED BY PRIOR CALL TO ExitProcess ; THIS CALL WILL KILL THE BEAST

    if( !pvOsInfoP )
    {
        //CONoUTrAW( "rootExceptionFilterF/1/+\r\n" ) ;

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( Beep( 0x1000 , 0x100 ) )
        BOSnOtIN( Beep( 0x0800 , 0x100 ) )
        BOSnOtIN( Beep( 0x0400 , 0x100 ) )
        BOSnOtIN( Beep( 0x0200 , 0x100 ) )
        //CONoUTrAW( "rootExceptionFilterF/1/-\r\n" ) ;
    }
    else
    {
        //CONoUTrAW( "rootExceptionFilterF/2/+\r\n" ) ;
        static byteT pbzTop[ CsLOTS * sizeof( restartC ) ] ;
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetCurrentThreadId() )
        const countT osTidMe = _brcRaw ;

        ZE( restartC* , prFloat ) ; // "FLOAT": "THIS restartC INSTANCE FLOATS ABOVE THE TOP restartC INSTANCE IN THE RESTART STACK FOR THIS THREAD" ; IT IS USED TO DETECT AND RECOVER FROM EXCEPTIONS THAT OCCUR IN ME
        for( countT offm = 0 ; offm < CsLOTS ; offm ++ )
        {
            //CONoUTrAW5( "rootExceptionFilterF search [osTidMe,osTidRegistered]: " , osTidMe , " " , ((restartC*)pbzTop)[ offm ].osTid , "\r\n" ) ;
            if( osTidMe == ((restartC*)pbzTop)[ offm ].osTid )
            {
                prFloat = (restartC*)pbzTop + offm ;
                break ;
            }
        }

        _EXCEPTION_POINTERS& osInfo = *(_EXCEPTION_POINTERS*)pvOsInfoP ;

        //MAKE A COPY ; THE EXCEPTION HANDLING SUBYSTEM (me and thirdC::osExceptionHandlerWorkIF) DO NOT USE THE COPY ; IT IS JUST MADE FOR GLASS WALLS ; FOR EXAMPLE, AN ADAM USED TO DEBUG ME USES THE COPY TO CALL ME
        #if defined( __NT__ )

            thirdC::c_memcpyIF( poopC() , (byteT*)&processGlobal1I.eInfo , (byteT*)osInfo.ExceptionRecord , sizeof processGlobal1I.eInfo ) ;
            thirdC::c_memcpyIF( poopC() , (byteT*)&processGlobal1I.cInfo , (byteT*)osInfo.ContextRecord   , sizeof processGlobal1I.cInfo ) ;

            //fileWriteGF( "d:\\tm p\\einfo" , (byteT*)&processGlobal1I.eInfo , sizeof processGlobal1I.eInfo ) ;
            //fileWriteGF( "d:\\tm p\\cinfo" , (byteT*)&processGlobal1I.cInfo , sizeof processGlobal1I.cInfo ) ;

        #endif

        if( prFloat ) //IF I HAVE ALREADY CREATED A restartC OBJECT FOR THIS THREAD THEN EXCEPTION MUST HAVE OCCURED WHILE I WAS EXECUTING
        {
            //CONoUTrAW( "rootExceptionFilterF/2/1/+\r\n" ) ;
            if( !( F(prFloat->flags) & flRESTARTc_DOnOTtALLY ) ) prFloat->cRestarted ++ ;
    
            #if defined( __NT__ )
                osInfo.ContextRecord->Eax    = prFloat->pcRegisters[ 0x0 ] ;
                osInfo.ContextRecord->Ebx    = prFloat->pcRegisters[ 0x1 ] ;
                osInfo.ContextRecord->Ecx    = prFloat->pcRegisters[ 0x2 ] ;
                osInfo.ContextRecord->Edx    = prFloat->pcRegisters[ 0x3 ] ;
                osInfo.ContextRecord->Esi    = prFloat->pcRegisters[ 0x4 ] ;
                osInfo.ContextRecord->Edi    = prFloat->pcRegisters[ 0x5 ] ;
                osInfo.ContextRecord->Ebp    = prFloat->pcRegisters[ 0x6 ] ;
                osInfo.ContextRecord->Esp    = prFloat->pcRegisters[ 0x7 ] ;
                osInfo.ContextRecord->Eip    = prFloat->pcRegisters[ 0x8 ] ;
                osInfo.ContextRecord->EFlags = prFloat->pcRegisters[ 0x9 ] ;
                osInfo.ContextRecord->SegDs  = prFloat->pcRegisters[ 0xa ] ;
                osInfo.ContextRecord->SegEs  = prFloat->pcRegisters[ 0xb ] ;
                osInfo.ContextRecord->SegFs  = prFloat->pcRegisters[ 0xc ] ;
                osInfo.ContextRecord->SegGs  = prFloat->pcRegisters[ 0xd ] ;
                osInfo.ContextRecord->SegSs  = prFloat->pcRegisters[ 0xe ] ;
                osInfo.ContextRecord->SegCs  = prFloat->pcRegisters[ 0xf ] ;
            #endif

            rc = EXCEPTION_CONTINUE_EXECUTION ;
            //CONoUTrAW( "rootExceptionFilterF/2/1/-\r\n" ) ;
        }
        else
        {
            //CONoUTrAW( "rootExceptionFilterF/2/2/+\r\n" ) ;
            for( countT offm = 0 ; offm < CsLOTS ; offm ++ )
            {
                if( !setIfZeAM( ((restartC*)pbzTop)[ offm ].osTid , osTidMe ) )
                {
                    //CONoUTrAW5( "rootExceptionFilterF set [osTidMe,offm]: " , osTidMe , " " , offm , "\r\n" ) ;
                    //U::ASSUME: processGlobal5I.tinBreak IS NOT MODIFIED BY THIS CALL
                    prFloat = new( 0 , (byteT*)( (restartC*)pbzTop + offm ) , sizeof( restartC ) ) restartC( prFloat ) ;
                    break ;
                }
            }
            // prFloat WILL NORMALLY BE NONZE BUT WILL BE ZE IF NO SLOT AVAILABLE

            //CONoUTrAW( "rootExceptionFilterF/2/2/0/1\r\n" ) ;
            ZE( countT , idIn ) ;
            {
                static countT idInLath ;
                if( !prFloat ) idIn = 1 + incv02AM( idInLath ) ;
            }

            //CONoUTrAW( "rootExceptionFilterF/2/2/0/2\r\n" ) ;
            ZE( countT , idMile ) ;
            if( prFloat ) getRegsAM( prFloat->pcRegisters ) ; /*Z*/ //MY RESTART POINT IS HERE, IMMEDIATELY AFTER THE RETURN OF getRegsAM
            const countT idMileLag = idMile ;

            //CONoUTrAW( "rootExceptionFilterF/2/2/0/3\r\n" ) ;
            const countT ebpOffender = osInfo.ContextRecord ? osInfo.ContextRecord->Ebp : 0 ;_M
            tinS* pTinOffender = !prFloat || *prFloat || !ebpOffender
                ? 0
                : pTin2AM( ebpOffender )                        //MUST NOT MODIFY *pTinOffender UNTIL IT HAS BEEN COPIED
            ;

            //CONoUTrAW( "rootExceptionFilterF/2/2/0/4\r\n" ) ;
            enum { normalE , shortE , tinyE , nullE } eTypeReport ;

                 if( idIn >  2 || ( prFloat && *prFloat >  2 )                                                                             ) eTypeReport = nullE   ; // PREVENTS SPIN 
            else if( idIn == 2 || ( prFloat && *prFloat == 2 )                                                                             ) eTypeReport = tinyE   ; // NO INFO ; JUST A SINGLE LINE OF TEXT TO INDICATE THAT THE SHORT REPORT COULD NOT BE WRITTEN
            else if( idIn == 1 || ( prFloat && *prFloat == 1 ) || !pTinOffender || getNegAM( pTinOffender->fingerprint ) != FINGERnEG_TINs ) eTypeReport = shortE  ; // NO tinS INFORMATION
            else                                                                                                                             eTypeReport = normalE ; // FULL INFORMATION

            //CONoUTrAW( "rootExceptionFilterF/2/2/1\r\n" ) ;
            switch( eTypeReport )
            {
                case tinyE :
                {_M
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/1/+ tiny\r\n" ) ;

                    // 20150105@1803: DEPRECATED CAUSE NONCONFORMANT (USES C:\TMP)
                    //OStEXT( ostoBuf , TUCK << 2 ) _M
                    //OStEXTAK( ostoBuf , "Subject: IPDOS (tm) Exception Event\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "IdeaFarm " "(tm) Piggyback Distributed Operating System\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "http://ideafarm.com\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "Wo'O Ideafarm\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "This is a stub report because both the nifty swifty exception reporting\r\n" ) ;_M
                    //OStEXTAK( ostoBuf , "routine and the simple reporting routine encountered problems.\r\n" ) ;_M
                    //logGF( ostoBuf , "d:\\tm p\\ideafarm.log.exception" ) ;
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/1/- tiny\r\n" ) ;

                    break ;
                }
                case shortE :
                {_M
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/2/+ short\r\n" ) ;
                    OStEXT( ostoBuf , TUCK * 0x20 ) _M
                    OStEXTAK( ostoBuf , "Subject: IPDOS (tm) Exception Event\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "IdeaFarm " "(tm) Piggyback Distributed Operating System\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "http://ideafarm.com\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "Wo'O Ideafarm\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "This is an abridged report because the nifty swifty exception reporting\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "routine encountered a problem.\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    OStEXTAK( ostoBuf , "idMile: " ) ;_M
                    OStEXTC( ostoBuf , idMileLag , 0 ) ;_M

                    #if defined( __NT__ )
                        ZE( countT , _brcRaw ) ;
                        BOSnOtIN( GetCurrentThreadId() )
                        countT osTid = _brcRaw ;
                    #endif
                    ZE( countT , off ) ;
                    for( off = 1 ; off <= ClOWtHREADS ; off ++ )
                    {_M
                        if( osTid != processGlobal2I.pLowThread[ off ].osTid ) continue ;

                        OStEXTAK( ostoBuf , "\r\nidThread: " ) ;_M
                        OStEXTC( ostoBuf , off , 0 ) ;_M
                        OStEXTAK( ostoBuf , "\r\npostThreadName: \"" ) ;_M
                        OStEXTA( ostoBuf , processGlobal2I.pLowThread[ off ].postThreadName ) ;_M
                        OStEXTAK( ostoBuf , "\"" ) ;_M
                        break ;
                    }
                    if( off > ClOWtHREADS ) { OStEXTAK( ostoBuf , "\r\n(not a low thread of the root adam)" ) ;_M }
                    OStEXTAK( ostoBuf , "\r\nidPhaseAdamI: " ) ;_M
                    const osTextT* postIdPhaseAdam = processGlobal3I.mapProcessPhase( rootAdamGlobal1I.idPhaseAdam ) ;
                    if( postIdPhaseAdam )
                    {_M
                        OStEXTA( ostoBuf , postIdPhaseAdam ) ;_M
                    }
                    else
                    {_M
                        OStEXTC( ostoBuf , rootAdamGlobal1I.idPhaseAdam , 0 ) ;_M
                    }
                    OStEXTAK( ostoBuf , "\r\nidAdamI: " ) ;_M
                    OStEXTCmIN( ostoBuf , processGlobal1I.idAdamRoot , 7 ) ; _M
                    OStEXTAK( ostoBuf , "\r\nprocessGlobal1I.idHome: " ) ;_M
                    OStEXTC( ostoBuf , processGlobal1I.idHome , 0 ) ; _M
                    for( off = 1 ; off <= ClOWtHREADS ; off ++ )
                    {
                        OStEXTAK( ostoBuf , "\r\netherC::pcPhaseLowI[" ) ;_M
                        OStEXTC( ostoBuf , off , 0 ) ;_M
                        OStEXTAK( ostoBuf , "]: " ) ;_M
                        OStEXTC( ostoBuf , processGlobal1I.pcPhaseLow[ off ] , 0 ) ;_M
                    }
                    for( off = 0 ; off < CCuTILITY ; off ++ )
                    {
                        OStEXTAK( ostoBuf , "\r\nroot adam: etherC::pcUtilityI[" ) ;_M
                        OStEXTC( ostoBuf , off , 0 ) ;_M
                        OStEXTAK( ostoBuf , "]: " ) ;_M
                        OStEXTC( ostoBuf , rootAdamGlobal1I._etherC_.pcUtility[ off ] , 0 ) ;_M
                    }
                    OStEXTAK( ostoBuf , "\r\ncAllKidThreadsI (root adam): " ) ;_M
                    OStEXTC( ostoBuf , rootAdamGlobal1I._thirdC_.cAllKidThreads , 0 ) ;_M
                    OStEXTAK( ostoBuf , "\r\ncAllOrphanThreadsI (root adam): " ) ;_M
                    OStEXTC( ostoBuf , rootAdamGlobal1I._thirdC_.cAllOrphanThreads , 0 ) ;_M
                    OStEXTAK( ostoBuf , "\r\ncDllLoaded: " ) ;_M
                    OStEXTC( ostoBuf , processGlobal1I.cDllLoaded , 0 ) ;_M
                    OStEXTAK( ostoBuf , "\r\ndll load history: " ) ;_M
                    OStEXTA( ostoBuf , processGlobal1I.postDllsLoaded ) ;_M
                    OStEXTAK( ostoBuf , "\r\noffending code address: " ) ;_M
                    OStEXTC( ostoBuf , osInfo.ContextRecord->Eip , 0 ) ; _M
                    OStEXTAK( ostoBuf , "\r\nbase os exception code: " ) ;_M
                    OStEXTC( ostoBuf , osInfo.ExceptionRecord->ExceptionCode , 0 ) ; _M
                    switch( osInfo.ExceptionRecord->ExceptionCode )
                    {
                        case EXCEPTION_ACCESS_VIOLATION                          :
                        {_M
                            OStEXTAK( ostoBuf , "\r\nbWrite: " ) ;_M
                            OStEXTC( ostoBuf , !!osInfo.ExceptionRecord->ExceptionInformation[ 0 ] , 0 ) ; _M
                            OStEXTAK( ostoBuf , "\r\npvTarget: " ) ;_M
                            OStEXTC( ostoBuf , osInfo.ExceptionRecord->ExceptionInformation[ 1 ] , 0 ) ; _M
                            break ;
                        }
                        case ifcIDeVENTeXCEPTIONmONITORED_GRUNT & 0xefffffff : //WINDOWS CLEARS BIT 28 IN RaiseException(...)
                        {_M
                            for( countT off = 0 ; off < osInfo.ExceptionRecord->NumberParameters ; off ++ )
                            {_M
                                OStEXTAK( ostoBuf , "\r\nnote: " ) ;_M
                                OStEXTC( ostoBuf , osInfo.ExceptionRecord->ExceptionInformation[ off ] , 0 ) ; _M
                            }
                            break ;
                        }
                    }
                    OStEXTAK( ostoBuf , "\r\n" ) ;_M
                    // 20150105@1803: DEPRECATED CAUSE NONCONFORMANT (USES C:\TMP)
                    //logGF( ostoBuf , "d:\\tm p\\ideafarm.log.exception" ) ;
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/2/- short\r\n" ) ;

                    break ;
                }
                case normalE :
                {_M
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/+ normal\r\n" ) ;
                    //etherC::ifcSayIF( processGlobal5I.tinBreak , "rootExceptionFilterF: beginning to write my normal report\r\n" , flSAY_LOG | flSAY_APPEND ) ;

                    count8S c8p( (countT)&osInfo , (countT)&idMile , ebpOffender , (countT)&prFloat ) ;
                    if( pTinOffender->pTieLath )
                    {_M
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/1/+\r\n" ) ;
                        thirdC::c_memsetIF( (byteT*)pTinOffender->pTieLath , sizeof *pTinOffender->pTieLath ) ;_M
                        thirdC::c_memcpyIF( poopC() , pTinOffender->pTieLath->pbTin , (byteT*)pTinOffender , sizeof pTinOffender->pTieLath->pbTin ) ;_M
    
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/1/1\r\n" ) ;
                        rc = threadLocalStorageLocationF( 0 , 0 , 0 , (countT)&c8p ) ? EXCEPTION_CONTINUE_EXECUTION : EXCEPTION_EXECUTE_HANDLER ;_M
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/1/-\r\n" ) ;
                    }
                    else
                    {_M
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/2/+\r\n" ) ;
                        tellInfoSysExceptionS tellInfoSys ;_M
                        pTinOffender->pTieLath = &tellInfoSys ;_M
    
                        thirdC::c_memsetIF( (byteT*)pTinOffender->pTieLath , sizeof *pTinOffender->pTieLath ) ;_M
                        thirdC::c_memcpyIF( poopC() , pTinOffender->pTieLath->pbTin , (byteT*)pTinOffender , sizeof pTinOffender->pTieLath->pbTin ) ;_M
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/2/1\r\n" ) ;
                        rc = threadLocalStorageLocationF( 0 , 0 , 0 , (countT)&c8p ) ? EXCEPTION_CONTINUE_EXECUTION : EXCEPTION_EXECUTE_HANDLER ;_M
                        //CONoUTrAW3( "rootExceptionFilterF 2 [rc]: " , rc , "\r\n" ) ;
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/2/2\r\n" ) ;
                        pTinOffender->pTieLath = 0 ;
                        //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/2/-\r\n" ) ;
                    }

                    //etherC::ifcSayIF( processGlobal5I.tinBreak , "rootExceptionFilterF: normal report written\r\n" , flSAY_LOG | flSAY_APPEND ) ;
                    //CONoUTrAW( "rootExceptionFilterF/2/2/1/3/- normal\r\n" ) ;

                    break ;
                }
            }

            //CONoUTrAW( "rootExceptionFilterF/2/2/2\r\n" ) ;
            DELnOtIN( prFloat ) ;_M
            //CONoUTrAW( "rootExceptionFilterF/2/2/-\r\n" ) ;
        }
        //CONoUTrAW( "rootExceptionFilterF/2/-\r\n" ) ;
    }

    if( rc == EXCEPTION_EXECUTE_HANDLER )
    {
        //CONoUTrAW( "rootExceptionFilterF: calling ExitProcess\r\n" ) ;
        flagsResult |= flEXCEPTIONrESULT_EXITpROCESScALLED ;
        thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ;
    }

    //CONoUTrAW( "rootExceptionFilterF/-\r\n" ) ;
    return rc ;
}

#undef CsLOTS

/*1*/voidT thirdC::osSetupExceptionHandlingIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP )  return ;
    }

    _IO_

    //WINDOWS 7 BUG: THE HANDLER WILL BE CALLED RECURSIVELY IFF MAIN THREAD

    rootExceptionFilterFT pHandler = (rootExceptionFilterFT)rootExceptionFilterF ;
    BOSdOnOTtEST( WHATgbo , SetUnhandledExceptionFilter( pHandler ) ) //THIS IS DONE IN CT'OR IN ORDER TO AVOID NEEDING TO CT ANOTHER OBJECT EARLY IN THE GLOBAL STATIC LIST

    #if defined( __NT__ )

        BOSdOnOTtEST( WHATgbo , SetErrorMode( SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX | SEM_NOGPFAULTERRORBOX ) )
        countT rc = tinP.brcRaw ; //DOC SAYS THAT THIS DOES NOTHING, BUT IT APPEARS TO WORK, AND ASSEMBLY CODE LOOKS LIKE IT IS DOING SOMETHING; BUT IT DOES ONLY RETURN A USELESS CONSTANT
        //THE COMMENT ON THE PRECEDING LINE MIGHT BE OBSOLETE ; IT IS LEFT OVER FROM WHEN SetErrorMode WAS CALLED ON A SINGLE LINE

    #endif

    processGlobal1I.flCt |= flCTdTg_exceptionHandlerRegistered ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114d.thirdc.ossetupexceptionhandlingif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114e.thirdc.osinvalidhandlevalueif BEGIN
#define DDNAME       "3func.3500114e.thirdc.osinvalidhandlevalueif"
#define DDNUMB      (countT)0x3500114e
#define IDFILE      (countT)0xa89


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 idTypeP
*/
/**/

/*1*/countT thirdC::osInvalidHandleValueIF( tinS& tinP , const countT idTypeP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( idTypeP ) ;
        if( POOP ) return 0 ;
    }

    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #3 HIGHEST FREQUENCY OF CALLS
    //_IO_

    ZE( countT , oshInvalid ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        switch( idTypeP )
        {
            case 0                                      :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE0          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE1          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE2          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE3          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE4          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE5          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE6          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE7          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE8          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSE9          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEa          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEb          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEc          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEd          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEe          :
            case ifcIDtYPEhANDLE_FORaDAMtOuSEf          :
            case ifcIDtYPEhANDLE_BOOKS                  :
            case ifcIDtYPEhANDLE_LISTING                :
            case ifcIDtYPEhANDLE_DLL                    :
            case ifcIDtYPEhANDLE_EVENTsEMAPHORE         :
            case ifcIDtYPEhANDLE_MUTEXsEMAPHORE         :
            case ifcIDtYPEhANDLE_PROCESS                :
            case ifcIDtYPEhANDLE_SHAREDmEMORY           :
            case ifcIDtYPEhANDLE_THREAD                 :
            case ifcIDtYPEhANDLE_STACKwALK              :
            case ifcIDtYPEhANDLE_TREEwALK               :
            case ifcIDtYPEhANDLE_FISH                   :
            case ifcIDtYPEhANDLE_WINDOWINGcLIENT        :
            case ifcIDtYPEhANDLE_WINDOW                 :
            case ifcIDtYPEhANDLE_DRAWsHARED             :
            case ifcIDtYPEhANDLE_DRAWpRIVATE            :
            case ifcIDtYPEhANDLE_DRAWINGtOOL            :
            case ifcIDtYPEhANDLE_EXCEPTIONhANDLER       :
            case ifcIDtYPEhANDLE_CONSOLEhANDLER         :
            case ifcIDtYPEhANDLE_PROCESStOKEN           :
            case ifcIDtYPEhANDLE_CRITICALsECTION        :
            case ifcIDtYPEhANDLE_LINKED                 :
            case ifcIDtYPEhANDLE_sadamsC                :
            case ifcIDtYPEhANDLE_openSslContext         :
            case ifcIDtYPEhANDLE_CLOUD                  :
            case ifcIDtYPEhANDLE_FILEmAPPING            :
            case ifcIDtYPEhANDLE_BOOKSrEADcURSOR        :
            case ifcIDtYPEhANDLE_FILEfIND               :                                                               // FILEfIND USES A STRUCTURE THAT CONTAINS oshFind
                                                          { oshInvalid = 0                            ; break ; }
            case ifcIDtYPEhANDLE_FILEfINDbASE           :                                                               // FILEfIND USES A STRUCTURE THAT CONTAINS oshFind
            case ifcIDtYPEhANDLE_FILE                   :
            case ifcIDtYPEhANDLE_FILEwAIT               :
            case ifcIDtYPEhANDLE_PIPE                   :
                                                          { oshInvalid = (countT)INVALID_HANDLE_VALUE ; break ; }
            case ifcIDtYPEhANDLE_SOCKET                 :
                                                          { oshInvalid = (countT)INVALID_SOCKET       ; break ; }
            default : { BLAMMO ; }
        }

    #endif

    return oshInvalid ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114e.thirdc.osinvalidhandlevalueif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114f.thirdc.oshandlecloneif BEGIN
#define DDNAME       "3func.3500114f.thirdc.oshandlecloneif"
#define DDNUMB      (countT)0x3500114f
#define IDFILE      (countT)0xa8a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 noteP
  iff 0 then i will set this
  specify any nonze value to suppress this
*/
/**/

//U::THIS IS UNSAFE (LEAKAGE); EDIT TO RETURN handleC RATHER THAN countT

/*1*/countT thirdC::osHandleCloneIF( tinS& tinP , countT& noteP , const countT oshP , const countT idTypeP , const countT oshProcessToP , const countT oshProcessFromP )/*1*/
{
    IFbEcAREFUL    
    {
        //I WORK EVEN IF THREAD IS IMPOTENT, SO THAT grabC::grabF WILL WORK UNCONDITIONALLY

        //CS:PSEUDOdUPLICATE: 3500114f 3605300c
        if( !idTypeP ) { BLAMMO ; }
        if( idTypeP == ifcIDtYPEhANDLE_WINDOW          ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE
        if( idTypeP == ifcIDtYPEhANDLE_CRITICALsECTION ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE
        if( idTypeP == ifcIDtYPEhANDLE_LISTING         ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE
    }

    _IO_

    ZE( countT , oshClone ) ;
    switch( idTypeP )
    {
        case ifcIDtYPEhANDLE_STACKwALK :
        case ifcIDtYPEhANDLE_TREEwALK  :                { oshClone = oshP ; break ; }
        default :
        {
            #ifdef __OS2__
        
                //U:
        
            #elif defined( __NT__ )

                HANDLE oshTo   = (HANDLE)( oshProcessToP   ? oshProcessToP   : osOpenProcessIF() ) ;
                HANDLE oshFrom = (HANDLE)( oshProcessFromP ? oshProcessFromP : osOpenProcessIF() ) ;

                POOPIES
                BOS( WHATgbo , BOSoK , DuplicateHandle( oshFrom , (HANDLE)oshP , oshTo , (HANDLE*)&oshClone , 0 , 1 , DUPLICATE_SAME_ACCESS ) )
                if( tinP.bosFail )
                {
                    BOSdOnOTtEST( WHATgbo , GetLastError() )
                    LOGrAWtID2( "DuplicateHandle error code:" , tinP.brcRaw ) ;
                    BLAMMO ; //2008.10.07 OBSERVED rc : aa5 1450_9 ERROR_NO_SYSTEM_RESOURCES (ON VIRTUAL DEDICATED SERVER GODADDY)
                }

                if( !noteP ) //CODEsYNCH: 175000c 1020191
                {
                    if( !POOP && idTypeP == ifcIDtYPEhANDLE_SHAREDmEMORY )
                    {
                        BOS( WHATgbo , BOSoK , MapViewOfFileExNuma( (HANDLE)oshClone , FILE_MAP_WRITE , 0 , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                        noteP = tinP.brcRaw ;
                        __Z( noteP ) ;
                    }
                }

        
            #endif

            break ;
        }
    }

    return oshClone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500114f.thirdc.oshandlecloneif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001150.thirdc.dosresumethreadif BEGIN
#define DDNAME       "3func.35001150.thirdc.dosresumethreadif"
#define DDNUMB      (countT)0x35001150
#define IDFILE      (countT)0xa8b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::dosResumeThreadIF( tinS& tinP , handleC& hP , const boolT bRetryP )/*1*/
{
    //WORKS UNCONDITIONALLY SO THAT GRABBING/UNGRABBING WILL WORK
    //IFbEcAREFUL
    //{
    //    if( POOP ) return ;
    //    __Z( hP ) ;
    //    if( POOP ) return ;
    //}

    _IO_

    const countT idDesireSave = thirdC::dosPriorityIF( tinP ) ;
    thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    tinP.cYield = 0 ;

    ZE( countT , idFail ) ;

    #if defined( __NT__ )

        do
        {
            countT osh = hP.osF( ifcIDtYPEhANDLE_THREAD ) ;
            BOS( WHATgbo , BOSmAXcOUNTT , ResumeThread( (HANDLE)osh ) )
            countT cSuspendPrior = tinP.brcRaw ;

            //if( !cSuspendPrior ) { CONoUTrAW( "NOT FROZEN\r\n" ) ; }

                 if( cSuspendPrior ==   1 ) break ;      //AOK
            else if( cSuspendPrior == - 1 ) idFail = 1 ; //ERROR
            else if( cSuspendPrior >    1 ) idFail = 3 ; //STILL SUSPENDED
            else if( !cSuspendPrior       )              //NOT SUSPENDED
            {
                if( !bRetryP ) idFail = 2 ;
                else           thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
            }
        }
        while( !idFail ) ;

    #endif

    tinP.cYield = 0 ;
    thirdC::dosPriorityIF( tinP , idDesireSave ) ;

    if( idFail == 3 ) idFail = 0 ; //SO UTILITY APIS CAN SUSPEND/RESUME ARBITRARY THREADS IN THE PROCESS
    __( idFail ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001150.thirdc.dosresumethreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001151.thirdc.dossuspendthreadif BEGIN
#define DDNAME       "3func.35001151.thirdc.dossuspendthreadif"
#define DDNUMB      (countT)0x35001151
#define IDFILE      (countT)0xa8c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::dosSuspendThreadIF( tinS& tinP )/*1*/
{
    //WORKS UNCONDITIONALLY SO THAT GRABBING/UNGRABBING WILL WORK
    //IFbEcAREFUL
    //{
    //    if( POOP ) return ;
    //}

    _IO_

    #if defined( __NT__ )

        {
            WHATssu

            BOSdOnOTtEST( WHATgbo , GetCurrentThread() )
            if( - 1 == SuspendThread( (HANDLE)tinP.brcRaw ) )
            {
                WHATga
                BLAMMO ;
            }
            else
            {
                WHATga
            }
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001151.thirdc.dossuspendthreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001152.thirdc.ossetupsecurityif BEGIN
#define DDNAME       "3func.35001152.thirdc.ossetupsecurityif"
#define DDNUMB      (countT)0x35001152
#define IDFILE      (countT)0xa8d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//SEE gloSecurityC
//THIS MUST BE DONE BEFORE I GRAB A grabC OBJECT THAT IS VISIBLE TO OTHER PROCESSES; OTHERWISE THE OTHER PROCESS WON'T BE ABLE TO AWAKEN MY THREAD
//NEEDED ON NT 4.0 ONLY FOR SERVICES; NEEDED ON 2000 FOR ALL IFC PROCESSES
//NEEDED SO THAT OTHER PROCESSES CAN OPEN A HANDLE TO MY PROCESS; MY DEFAULT SECURITY DESCRIPTOR DOES NOT PERMIT THIS SINCE I AM LAUNCHED AS A WINDOWS SERVICE

/*1*/voidT thirdC::osSetupSecurityIF( voidT )/*1*/
{
    #if defined( __NT__ )

        char _pbsd[ SECURITY_DESCRIPTOR_MIN_LENGTH + sizeof( unsigned ) + 1 ] ; //U:: IS THIS LONG ENOUGH?
        _pbsd[ sizeof _pbsd - 1 ] = 0xfe ;
    
        unsigned _cbAlign = (unsigned)_pbsd % sizeof( unsigned ) ;
        if( _cbAlign ) _cbAlign = sizeof( unsigned ) - _cbAlign ;
        
        SECURITY_ATTRIBUTES sa ;
        sa.nLength = sizeof sa ;
        sa.lpSecurityDescriptor = (SECURITY_DESCRIPTOR*)( _pbsd + _cbAlign ) ;
        sa.bInheritHandle = 0 ;
        
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( InitializeSecurityDescriptor( sa.lpSecurityDescriptor , SECURITY_DESCRIPTOR_REVISION ) )
        boolT bFail = !_brcRaw ;
        BOSnOtIN( SetSecurityDescriptorDacl( sa.lpSecurityDescriptor , 1 , 0 , 0 ) )
        bFail |= !_brcRaw ;
        BOSnOtIN( SetKernelObjectSecurity( (HANDLE)thirdC::osOpenProcessIF() , DACL_SECURITY_INFORMATION , sa.lpSecurityDescriptor ) )
        bFail |= !_brcRaw ;
        if( bFail ) { BLAMMO ; } //WILL BE SET ON MS-DOS
        if( _pbsd[ sizeof _pbsd - 1 ] != 0xfe ) BLAMMO ; //U:: TO SEE WHETHER _pbsd IS LONG ENOUGH

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001152.thirdc.ossetupsecurityif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001153.thirdc.ostestwaterif BEGIN
#define DDNAME       "3func.35001153.thirdc.ostestwaterif"
#define DDNUMB      (countT)0x35001153
#define IDFILE      (countT)0xa8e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#define POSTnAPKINdRIVEReXISTSpREFIX "..napkinC.ideafarm.domains.com.ideafarm.driverExists.0."

/*1*/boolT thirdC::osTestWaterIF( tinS& tinP , const countT idTypeP , countT* pOshP )/*1*/
{
    ZE( boolT , bOk ) ;
    ZE( countT , _brcRaw ) ;

    #if defined( __NT__ )

        switch( idTypeP )
        {
            case ifcIDtYPEtESTwATER_LOOKfORdRIVER :
            {
                boolT bDriver = processGlobal1I.idAdamRoot == ifcIDaDAM_KERNEL1DRIVER || processGlobal1I.idAdamRoot == ifcIDaDAM_KERNEL2MONITOR ;

                if( bDriver || processGlobal1I.idHome & fliIDhOME_HOMELESS ) bOk = 1 ;
                else
                {
                    OStEXT( ostoOsName , COSTnAPKINnAMEmAX + 1 )
                    OStEXTAK( ostoOsName , POSTnAPKINdRIVEReXISTSpREFIX ) ;
                    OStEXTC( ostoOsName , processGlobal1I.idHome , 0 ) ;

                    BOSnOtIN( CreateFileMappingNuma( (HANDLE)-1 , 0 , PAGE_READONLY | SEC_COMMIT , 0 , 1 , ostoOsName , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                    if( !_brcRaw ) { BLAMMO ; }
                    else
                    {
                        countT oshm = _brcRaw ;
                        BOSnOtIN( GetLastError() )
                        if( _brcRaw == ERROR_ALREADY_EXISTS ) bOk = 1 ;

                        BOSnOtIN( CloseHandle( (voidT*)oshm ) )
                    }
                }

                break ;
            }
            case ifcIDtYPEtESTwATER_IDhOSTaDJUST :
            {
                if( !pOshP ) { BLAMMO ; }

                ZE( boolT , bRetry ) ;
                do
                {
                    bRetry = 0 ;

                    OStEXT( ostoOsName , COSTnAPKINnAMEmAX + 1 )
                    OStEXTAK( ostoOsName , POSTnAPKINdRIVEReXISTSpREFIX ) ;
                    OStEXTC( ostoOsName , processGlobal1I.idHome , 0 ) ;

                    BOSnOtIN( CreateFileMappingNuma( (HANDLE)-1 , 0 , PAGE_READONLY | SEC_COMMIT , 0 , 1 , ostoOsName , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                    *pOshP = _brcRaw ; //U::UNSAFE (LEAKAGE): RETURN A handleC RATHER THAN A countT

                    BOSnOtIN( GetLastError() )
                    countT rc = _brcRaw ;

                    boolT bLowMem = rc == ERROR_NOT_ENOUGH_MEMORY ;
                    boolT bDenied = rc == ERROR_ACCESS_DENIED ;
                    boolT bOld    = rc == ERROR_ALREADY_EXISTS ;
                    boolT bDriver = processGlobal1I.idAdamRoot == ifcIDaDAM_KERNEL1DRIVER || processGlobal1I.idAdamRoot == ifcIDaDAM_KERNEL2MONITOR ;

                    //conGF( "osTestWaterIF [bLowMem,bDenied,bOld,bDriver]: " ) ;
                    //conGF( bLowMem ) ;
                    //conGF( " " ) ;
                    //conGF( bDenied ) ;
                    //conGF( " " ) ;
                    //conGF( bOld ) ;
                    //conGF( " " ) ;
                    //conGF( bDriver ) ;
                    //conGF( "\r\n" ) ;

                    if( bLowMem )
                    {
                        POPUP( "Please allocate more disk space for use as virtual memory and then click OK.\r\n\r\nIn Windows 2000, you can do this now by mouse clicking into MyComputer/ControlPanel/System/Advanced/PerformanceOptions/VirtualMemory/Change" ) ;
                        bRetry = 1 ;
                    }
                    else if( bDenied || ( bDriver && bOld ) ? 1 : 0 )
                    {
                        bRetry = 1 ;
                        if( *pOshP )
                        {
                            BOSnOtIN( CloseHandle( (voidT*)*pOshP ) )
                            if( !_brcRaw ) { BLAMMO ; }
                            *pOshP = 0 ;
                        }

                        if( F(processGlobal1I._thirdC_flagsModeProcess2) & flMODEpROCESS2_IDhOSTsEARCH ) ++ *(countT*)&processGlobal1I.idHome ;
                        else
                        {
                            CONoUTrAW5( "waiting for idHome " , processGlobal1I.idHome , " to become available for " , processGlobal1I.idAdamRoot , "\r\n" ) ;
                            /*Beep ( 0x100 , TUCK ) ;*/
                            BOSnOvALUEnOtIN( OSsLEEPf( TUCK ) )
                        }
                    }

                    if( !bDriver && *pOshP )
                    {
                        BOSnOtIN( CloseHandle( (voidT*)*pOshP ) )
                        if( !_brcRaw ) { BLAMMO ; }
                        *pOshP = 0 ;
                    }
                }
                while( bRetry ) ;
                bOk = 1 ;

                break ;
            }
            case ifcIDtYPEtESTwATER_ENOUGHmEMORY :
            {
                OStEXT( ostoOsName , COSTnAPKINnAMEmAX + 1 )
                OStEXTAK( ostoOsName , "ideafarm.testWaterI.0." ) ; //A: ASSUME: FOR EACH HOST, ONLY 1 INSTANCE OF THIS FUNCTION IS EXECUTING AT A TIME (IF NOT THEN I WILL COMPLAIN SPURIOUSLY ABOUT LOW MEMORY)
                OStEXTC( ostoOsName , processGlobal1I.idHome , 0 ) ;

                ZE( boolT , bRetry ) ;
                do
                {
                    bRetry = 0 ;

                    //THIS WAS OBSOLETED BY THE poolC REWRITE; IT IS RETAINED TO ENFORCE A MUCH LOWER MINIMUM
                    //COMMITMENT TAKES TIME, AND THIS CAN CAUSE THE SERVICE INSTALLER TO TIME OUT
                    //INCREASE THE COMMITMENT SIZE IF FIELD PROBLEMS OCCUR DURING INSTALLATION

                    BOSnOtIN( CreateFileMappingNuma( (HANDLE)-1 , 0 , PAGE_READONLY | SEC_COMMIT , 0 , 0x10 * TOCK , ostoOsName , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )
                    if( !_brcRaw )
                    {
                        BOSnOtIN( GetLastError() )
                        if( _brcRaw  == ERROR_NOT_ENOUGH_MEMORY || _brcRaw  == ERROR_COMMITMENT_LIMIT )
                        {
                            POPUP( "Please add more paging file capacity now and then click OK." ) ;
                            bRetry = 1 ;
                        }
                    }
                    else
                    {
                        BOSnOtIN( CloseHandle( (HANDLE)_brcRaw ) )
                        if( !_brcRaw ) { BLAMMO ; }
                        bOk = 1 ;
                    }
                }
                while( bRetry ) ;

                break ;
            }
        }

    #endif

    return bOk ;
}

#undef POSTnAPKINdRIVEReXISTSpREFIX


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001153.thirdc.ostestwaterif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001154.thirdc.osopenthreadif BEGIN
#define DDNAME       "3func.35001154.thirdc.osopenthreadif"
#define DDNUMB      (countT)0x35001154
#define IDFILE      (countT)0xa8f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
U:: rewrite this to take a handleC& parameter and to return voidT
 this will make me conformant
*/
/**/

/*1*/countT thirdC::osOpenThreadIF( voidT )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetCurrentThread() ) //A:ASSUME: THE BASE OS RETURNS A CONSTANT RATHER THAN A REAL HANDLE THAT MUST BE CLOSED
        return _brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001154.thirdc.osopenthreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001155.thirdc.osexceptionhandlerworkif BEGIN
#define DDNAME       "3func.35001155.thirdc.osexceptionhandlerworkif"
#define DDNUMB      (countT)0x35001155
#define IDFILE      (countT)0xa90


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

// WORKAROUNDS TO MAKE EXCEPTION REPORTING RELIABLE
// 1. MADE GRUNT !bFixed
// 2. CLEAN ONLY IF bFixed
// 3. EDITED ~tinS TO NOT WAIT FOR KIDS IF I AM ACTIVE, BUT TO INSTEAD CALL ExitProcess
// THESE WORKAROUNDS AVOID 2 SEPARATE PROBLEMS OCCURING DURING ~tinS
//  a. ~tinS CAN SLEEP FOREVER WAITING FOR KID THREADS
//  b. USING BLAMMO IN ~tinS SEEMS TO CAUSE EXECUTION TO HALT (EDITED TO CALL ExitProcess NOT BLAMMO IN ~tinS)

#define ADVICE(postSuspectP,postFix1P,postFix2P)                                                    \
                                                                                                    \
 thirdC::c_strncpyIF( tinP , tellInfoSys.postSuspect , postSuspectP , sizeof tellInfoSys.postSuspect ) ;  \
 thirdC::c_strncpyIF( tinP , tellInfoSys.postFix1    , postFix1P    , sizeof tellInfoSys.postFix1    ) ;  \
 thirdC::c_strncpyIF( tinP , tellInfoSys.postFix2    , postFix2P    , sizeof tellInfoSys.postFix2    ) ;

#define ADVICEdFLT ADVICE( ostoSuspectDflt , "Use the Services icon to stop the IdeaFarm driver.\r\nReboot if necessary.  Start the driver." , "" )

/*1*/boolT thirdC::osExceptionHandlerWorkIF( const countT cArgP )/*1*/
{
    count8S& c8p = *(count8S*)cArgP ;
    _EXCEPTION_POINTERS& osInfoP      = *(_EXCEPTION_POINTERS*)c8p.c1 ;
    countT&              idMile       =              *(countT*)c8p.c2 ;
    countT               ebpOffenderP =                        c8p.c3 ;
    restartC*&           prFloatP     =           *(restartC**)c8p.c4 ;

    ebpTlsAM() = ebpOffenderP ; //THIS IS NEEDED BECAUSE SOMETIMES THE TLS IS NOT IN THE STACK CHAIN (E.G. WHEN TINSL WOULD FAIL AT BEGINNING OF winMessageHandlerWorkF)
    TINSL

    THREADmODE3oN( flTHREADmODE3_EXCEPTIONrEPORTINGiNpROGRESS )

    _IO_
    ZE( boolT , bFixed ) ;
    {
        //A: ASSUME: tinP.pTieLath POINTS TO A STRUCTURE THAT CONTAINS AN IMAGE OF tinP AT EXCEPTION EVENT TIME
        //TELL( "osExceptionHandlerWorkIF/+" )

        tellInfoSysExceptionS&  tellInfoSys = *tinP.pTieLath ;/*_M*/
        const tinS&          tinSnap  = *(tinS*)tellInfoSys.pbTin ;

        static countT cCodeReadRetries ;
        poopC _poop( flPOOP_null ) ;/*_M*/
        scoopC _scoop( tinP , LF , _poop , flSCOOPc_DOnOTcHECKtINiD ) ;/*_M*/
        {/*_M*/
            {/*_M*/
                const boolT bDriver = !!( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_DRIVER ) ;/*_M*/
                OStEXT( ostoSuspectDflt , TUCK << 2 ) /*_M*/
                if( bDriver )
                {/*_M*/
                    OStEXTAK( ostoSuspectDflt , "IdeaFarm " "(tm) Operating System Driver" ) ;/*_M*/
                }
                else
                {/*_M*/
                    OStEXTAK( ostoSuspectDflt , "IdeaFarm " "(tm) Cell " ) ;/*_M*/
                    OStEXTCmIN( ostoSuspectDflt , processGlobal1I.idAdamRoot , 7 ) ;/*_M*/
                    OStEXTAK( ostoSuspectDflt , "/" ) ;/*_M*/
                    OStEXTCmIN( ostoSuspectDflt , tinSnap.pAdamGlobal1->idAdam , 7 ) ;/*_M*/
                }

                //TELL( "osExceptionHandlerWorkIF/filling tellInfoSys" )
                tellInfoSys.pvOffendingCode = !osInfoP.ExceptionRecord ? 0 : osInfoP.ExceptionRecord->ExceptionAddress ;/*_M*/
                tellInfoSys.pcInfo[ 4 ] = tellInfoSys.pcInfo[ 3 ] = tellInfoSys.pcInfo[ 2 ] = tellInfoSys.pcInfo[ 1 ] = tellInfoSys.pcInfo[ 0 ] = tellInfoSys.ccInfo = 0 ;/*_M*/
                tellInfoSys.postSuspect[ 0 ] = 0 ;/*_M*/

                ZE( boolT , bQuiet ) ;/*_M*/
                static boolT cFixed ;/*_M*/
                if( !osInfoP.ExceptionRecord )
                {/*_M*/
                    tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_CODEnOTaVAILABLE ; ADVICEdFLT ;/*_M*/
                }
                else switch( osInfoP.ExceptionRecord->ExceptionCode )
                {
                    case EXCEPTION_BREAKPOINT                                : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_BREAKPOINT              ; ADVICEdFLT ; break ; }
                    case EXCEPTION_SINGLE_STEP                               : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_SINGLEsTEP              ; ADVICEdFLT ; break ; }
                    case EXCEPTION_STACK_OVERFLOW                            : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_STACKoVERFLOW           ; ADVICEdFLT ; break ; }
                    case EXCEPTION_PRIV_INSTRUCTION                          : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_PRIVILEGEDiNSTRUCTION   ; ADVICEdFLT ; break ; }
                    case EXCEPTION_NONCONTINUABLE_EXCEPTION                  : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_NONCONTINUABLEeXCEPTION ; ADVICEdFLT ; break ; }
                    case EXCEPTION_INVALID_DISPOSITION                       : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_INVALIDdISPOSITION      ; ADVICEdFLT ; break ; }
                    case EXCEPTION_INT_OVERFLOW                              : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_INTEGERoVERFLOW         ; ADVICEdFLT ; break ; }
                    case EXCEPTION_INT_DIVIDE_BY_ZERO                        : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_INTEGERdIVIDEbYzE     ; ADVICEdFLT ; break ; }
                    case EXCEPTION_IN_PAGE_ERROR                             : {/*_M*/ bFixed = 1 ; tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_INpAGEeRROR             ; ADVICE( "HARD DRIVE" , "Use the Services icon to stop the IdeaFarm driver.  Reboot if necessary.\r\nClose all Windows and stop all unnecessary services, to unload the computer.\r\nStart the driver." , "Look for other evidence that the hard drive might be starting to fail." ) ; break ; }
                    case EXCEPTION_ILLEGAL_INSTRUCTION                       : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_ILLEGALiNSTRUCTION      ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_UNDERFLOW                             : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATuNDERFLOW          ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_STACK_CHECK                           : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATsTACKcHECK         ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_OVERFLOW                              : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOAToVERFLOW           ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_INVALID_OPERATION                     : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATiNVALIDoPERATION   ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_INEXACT_RESULT                        : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATiNEXACTrESULT      ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_DIVIDE_BY_ZERO                        : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATdIVIDEbYzE       ; ADVICEdFLT ; break ; }
                    case EXCEPTION_FLT_DENORMAL_OPERAND                      : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_FLOATdENORMALoPERAND    ; ADVICEdFLT ; break ; }
                    case EXCEPTION_DATATYPE_MISALIGNMENT                     : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DATATYPEmISALIGNMENT    ; ADVICEdFLT ; break ; }
                    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED                     : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_ARRAYbOUNDSeXCEEDED     ; ADVICEdFLT ; break ; }
                    case CONTROL_C_EXIT                                      : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_CONTROLcnOTIFICATION    ; ADVICEdFLT ; break ; } //U: NOT TESTED.  THE OS CONSTANT LISTED IN WIN32 DOC IS "DBG_CONTROL_C"; CONJ: THIS IS A DOC ERROR; DBG_CONTROL_C IS MEANT TO BE A CODE THAT A DEBUGGER CAN RETURN IN ORDER TO RAISE A CONTROL_C EXCEPTION
                    case DBG_EXCEPTION_NOT_HANDLED                           : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGnOThANDLED           ; ADVICEdFLT ; break ; }
                    case DBG_CONTROL_BREAK                                   : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGcONTROLbREAK         ; ADVICEdFLT ; break ; }
                    case DBG_CONTROL_C                                       : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGcONTROLc             ; ADVICEdFLT ; break ; }
                    case DBG_TERMINATE_PROCESS                               : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGtERMINATEpROCESS     ; ADVICEdFLT ; break ; }
                    case DBG_TERMINATE_THREAD                                : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGtERMINATEtHREAD      ; ADVICEdFLT ; break ; }
                    case DBG_CONTINUE                                        : {/*_M*/              tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_DBGcONTINUE             ; ADVICEdFLT ; break ; }
                    case EXCEPTION_ACCESS_VIOLATION                          :
                    {/*_M*/
                        tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_ACCESSvIOLATION ;/*_M*/
                        tellInfoSys.ccInfo = 2 ;/*_M*/
                        tellInfoSys.pcInfo[ 0 ] = !!osInfoP.ExceptionRecord->ExceptionInformation[ 0 ] ;/*_M*/ // bWrite
                        tellInfoSys.pcInfo[ 1 ] =   osInfoP.ExceptionRecord->ExceptionInformation[ 1 ] ;/*_M*/ // pvTarget

                        //if( !tellInfoSys.pcInfo[ 0 ] && tellInfoSys.pcInfo[ 1 ] == (countT)tellInfoSys.pvOffendingCode && incv02AM( cCodeReadRetries ) < 0x4 )
                        //{/*_M*/
                        //    bQuiet = bFixed = 1 ;/*_M*/
                        //    LOGrAW5( "i will nap and then retry " , cCodeReadRetries , " to read code at " , tellInfoSys.pcInfo[ 1 ] , "\r\n" ) ;
                        //    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                        //    {
                        //        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        //        ++ s ; dosSleepIF( tinP , cCodeReadRetries == 1 ? TUCK * 0x40 : TOCK ) ;
                        //    }
                        //    THREADmODE1rESTORE
                        //}
                        //else
                        if( cCodeReadRetries ) ;

                        {/*_M*/
                            ADVICEdFLT ;/*_M*/
                        }

                        break ;
                    }
                    case ifcIDeVENTeXCEPTIONmONITORED_GRUNT & 0xefffffff : //WINDOWS CLEARS BIT 28 IN RaiseException(...)
                    case ifcIDeVENTeXCEPTIONmONITORED_GRUNT              : //SEEN IT NOT BE CLEARED_
                    {/*_M*/
                        //2011.04.10: COMMENTED OUT NEXT LINE SO THAT EXCEPTION HANDLER WOULD NOT BLOCK CLEANING UP BY DELETING tinS FOR A THREAD THAT HAS KIDS
                        //bFixed = 1 ;/*_M*/
                        tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_GRUNT ;/*_M*/
                        tellInfoSys.ccInfo = osInfoP.ExceptionRecord->NumberParameters ;/*_M*/
                        if( tellInfoSys.ccInfo > sizeof tellInfoSys.pcInfo / sizeof tellInfoSys.pcInfo[ 0 ] ) tellInfoSys.ccInfo = sizeof tellInfoSys.pcInfo / sizeof tellInfoSys.pcInfo[ 0 ] ;/*_M*/
                        for( countT off = 0 ; off < tellInfoSys.ccInfo ; off ++ ) tellInfoSys.pcInfo[ off ] = osInfoP.ExceptionRecord->ExceptionInformation[ off ] ;/*_M*/
                        ADVICEdFLT ;/*_M*/
                        break ;
                    }
                    case ifcIDeVENTeXCEPTIONmONITORED_BLAMMO & 0xefffffff : //WINDOWS CLEARS BIT 28 IN RaiseException(...)
                    case ifcIDeVENTeXCEPTIONmONITORED_BLAMMO              : //SEEN IT NOT BE CLEARED_
                    {/*_M*/
                        //2011.04.10: COMMENTED OUT NEXT LINE SO THAT EXCEPTION HANDLER WOULD NOT BLOCK CLEANING UP BY DELETING tinS FOR A THREAD THAT HAS KIDS
                        //bFixed = 1 ;/*_M*/
                        tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_BLAMMO ;/*_M*/
                        tellInfoSys.ccInfo = osInfoP.ExceptionRecord->NumberParameters ;/*_M*/
                        if( tellInfoSys.ccInfo > sizeof tellInfoSys.pcInfo / sizeof tellInfoSys.pcInfo[ 0 ] ) tellInfoSys.ccInfo = sizeof tellInfoSys.pcInfo / sizeof tellInfoSys.pcInfo[ 0 ] ;/*_M*/
                        for( countT off = 0 ; off < tellInfoSys.ccInfo ; off ++ ) tellInfoSys.pcInfo[ off ] = osInfoP.ExceptionRecord->ExceptionInformation[ off ] ;/*_M*/
                        ADVICEdFLT ;/*_M*/
                        break ;
                    }
                    default :
                    {/*_M*/
                        tellInfoSys.idException = ifcIDeVENTeXCEPTIONmONITORED_NOTlISTED ;/*_M*/
                        tellInfoSys.ccInfo = 1 ;/*_M*/
                        tellInfoSys.pcInfo[ 0 ] = osInfoP.ExceptionRecord->ExceptionCode ;/*_M*/
                        ADVICE( "COMPUTER CIRCUITRY" , "Use the Services icon to stop the IdeaFarm driver.  Reboot if necessary.  Start the driver." , "" ) ;/*_M*/
                        break ;
                    }
                }

                if( bFixed )
                {/*_M*/
                    inc02AM( cFixed ) ;/*_M*/
                }
                tellInfoSys.bFixed = bFixed ;/*_M*/
                tellInfoSys.cFixed = cFixed ;/*_M*/

                ZE( countT , ebpAtRestart ) ;
                ZE( countT , ebpAtException ) ;
                if( !bFixed )
                {/*_M*/
                    //TELL( "osExceptionHandlerWorkIF/looking for a restartC" )
                    restartC* pr ;/*_M*/
                    pr = tinP.pRestart ;/*_M*/
                    while( pr )
                    {/*_M*/
                             if( F(pr->flags) & flRESTARTc_SKIP    ) ;
                        else if( pr->bAcceptF( &tinP , tellInfoSys ) ) break ;

                        pr = pr->prD ;/*_M*/
                    }
                    //TELL( "osExceptionHandlerWorkIF/looked for a restartC" )

                    if( pr )
                    {/*_M*/
                        //TELL( "osExceptionHandlerWorkIF/rolling back registers" )
                        if( !( F(pr->flags) & flRESTARTc_DOnOTtALLY ) ) pr->cRestarted ++ ;/*_M*/
                        bFixed = 1 ;/*_M*/
                        if( F(pr->flags) & flRESTARTc_QUIET ) bQuiet = 1 ;/*_M*/

                        #if defined( __NT__ )

                            ebpAtException = osInfoP.ContextRecord->Ebp ;/*_M*/

                            osInfoP.ContextRecord->Eax                   = pr->pcRegisters[ 0x0 ] ;/*_M*/
                            osInfoP.ContextRecord->Ebx                   = pr->pcRegisters[ 0x1 ] ;/*_M*/
                            osInfoP.ContextRecord->Ecx                   = pr->pcRegisters[ 0x2 ] ;/*_M*/
                            osInfoP.ContextRecord->Edx                   = pr->pcRegisters[ 0x3 ] ;/*_M*/
                            osInfoP.ContextRecord->Esi                   = pr->pcRegisters[ 0x4 ] ;/*_M*/
                            osInfoP.ContextRecord->Edi                   = pr->pcRegisters[ 0x5 ] ;/*_M*/
                            osInfoP.ContextRecord->Ebp    = ebpAtRestart = pr->pcRegisters[ 0x6 ] ;/*_M*/
                            osInfoP.ContextRecord->Esp                   = pr->pcRegisters[ 0x7 ] ;/*_M*/
                            osInfoP.ContextRecord->Eip                   = pr->pcRegisters[ 0x8 ] ;/*_M*/
                            osInfoP.ContextRecord->EFlags                = pr->pcRegisters[ 0x9 ] ;/*_M*/
                            osInfoP.ContextRecord->SegDs                 = pr->pcRegisters[ 0xa ] ;/*_M*/
                            osInfoP.ContextRecord->SegEs                 = pr->pcRegisters[ 0xb ] ;/*_M*/
                            osInfoP.ContextRecord->SegFs                 = pr->pcRegisters[ 0xc ] ;/*_M*/
                            osInfoP.ContextRecord->SegGs                 = pr->pcRegisters[ 0xd ] ;/*_M*/
                            osInfoP.ContextRecord->SegSs                 = pr->pcRegisters[ 0xe ] ;/*_M*/
                            osInfoP.ContextRecord->SegCs                 = pr->pcRegisters[ 0xf ] ;/*_M*/

                        #endif
                        //TELL( "osExceptionHandlerWorkIF/rolled back registers" )
                    }
                }

                if( !bFixed )
                {
                    processGlobal1I._thirdC_flagsProcessState |= flPROCESSsTATE_EXCEPTIONnOThANDLED ;
                    BOS( WHATgbo , BOSoK , GetCurrentThreadId() )
                    BOSpOOP
                    processGlobal1I.osTidTerminator = tinP.brcRaw ;
                }

                //U::ISSUE: IF THE EXCEPTION IS NOT ON MAIN THREAD THEN THIS WILL NOT CLEAN UP THE INTENDED ITEMS FOR DLL TERMINATION
                ZE( boolT , bCleanFailed ) ;
                if( bFixed ) //U::ADDED THIS TEST AS WORKAROUND TO MAKE EXCEPTION REPORTING RELIABLE RATHER THAN ALLOWING BLOCKAGE TO OCCUR IN DT'OR FOR tinS
                {/*_M*/
                    BLOBpUSH( prFloatP , sizeof *prFloatP )

                    {
                        RESTARTrEF( *prFloatP )

                        if( *prFloatP )
                        {/*_M*/
                            //CONoUTrAW( "osExceptionHandlerWorkIF: skipping clean\r\n" ) ;
                            bCleanFailed = 1 ; //U::REPORT THIS
                        }

                        // 20171003@1405:  COMMENTED THIS OUT TO WORK AROUND INSTABILITY DURING EXCEPTION HANDLING.  REWRITE IF cleanC SUPPORT IS EVER NEEDED.  THIS cleanC FUNCTIONALITY IS REALLY A DOODLE THAT ISN'T NEEDED FOR IPDOS (tm) TO WORK
                        // else
                        // {/*_M*/
                        //     tinS* pTinSave = &tinP == pTinMainI
                        //         ? 0
                        //         : ( pTinF() = pTinMainI , &tinP )
                        //     ;
                        // 
                        //     ZE( countT , cDeleted ) ;
                        //     {
                        //         TINSL
                        //         if( &tinP != pTinMainI ) { BLAMMO ; }
                        //         if( !bFixed ) tinP.cKidThreads = 0 ;
                        // 
                        //         //CONoUTrAW( "osExceptionHandlerWorkIF: clean +\r\n" ) ;
                        //         tinS* pTin = &tinP ;
                        // 
                        //         //20171003@1354:  CONJECTURE: THE INTENT HERE IS TO DESTROY tinS INSTANCES CONSTRUCTED ON THE STACK WITHIN THE RESTART BLOCK
                        //         //THINK: THIS CODE WAS WRITTEN MAINLY TO SERVE AS AN EXAMPLE OF HOW TO USE cleanC TO PERFORM CLEANUP DURING RESTART
                        //         //THERE ISN'T REALLY ANY NEED TO CLEAN UP tinS INSTANCES BECAUSE tinS INSTANCES WILL NEVER BE CT ON THE STACK BY APPLICATION CODE
                        //         //THE FOLLOWING CODE DOES NOT WORK CORRECTLY SO ISN'T A GOOD EXAMPLE
                        //         //20171003@1354: DECISION: JUST COMMENT THIS OUT.  DO NOT DESTROY tinS INSTANCES CT WITHIN A RESTART BLOCK
                        // 
                        //         //FUTURE CRAFTWORK:  REWRITE THIS LOOP ACCORDING TO THE FOLLOWING WISH LIST
                        //         //
                        //         // WISH LIST FOR cleanC SUPPORT
                        //         //
                        //         //  * ANY CLASS CAN BE DERIVED FROM cleanC SUCH THAT EACH INSTANCE REGISTERS ITSELF FOR CLEANUP (CURRENT CODE SUPPORTS THIS; NO NEW CRAFTWORK NEEDED)
                        //         //
                        //         //  * RESTART BLOCKS CAN BE NESTED (NOT SURE WHETHER CURRENT CODE SUPPORTS THIS)
                        //         //
                        //         //  * FORGET ABOUT STACK FRAMES
                        //         //
                        //         //  * SIMPLE RECIPE:  AT THE BEGINNING OF THE RESTART BLOCK, TALLY THE NUMBER OF cleanC INSTANCES REGISTERED.  ON RESTART, IF bFixed, DELETE ALL NEW INSTANCES.  IF !bFixed, DO NOTHING
                        //         //
                        // 
                        //         // WILL ALWAYS DESTROY cleanC INSTANCES IN THE STACK FRAMES OF AND WITHIN THE RESTART POINT ; IF !bFixed OR NOT EXIST RESTART POINT THEN WILL DESTROY ALL cleanC INSTANCES
                        // 
                        //         //U:: 20140404@2006: BUG: SOME cleanC INSTANCES ARE NOT ON A THREAD STACK.  (tinS INSTANCES CAN BE IN THE poolC.)  CONJ: ORIGINALLY, cleanC WAS ENVISIONED AS ASSUMING THAT ALL INSTANCES ARE ON A THREAD STACK.  CONJ: EXCEPTION HANDLER CODE ASSUMES THIS AND WILL BREAK IF A cleanC INSTANCE IS NOT ON A THREAD STACK
                        //         //U:: THE FOLLOWING CODE WILL NOT DESTROY THE INTENDED INSTANCES IF THE WOTH cleanC INSTANCE IS IN poolC AND HAPPENS TO HAVE A HIGHER ADDRESS THAN THE ADDRESSES ON THE STACK FOR THE INSTANT THREAD
                        // 
                        //         while( pTin->pClean )
                        //         {
                        //             tinS& tinP = *pTin ; //THIS IS JUST FOR THE CONoUTrAW CALLS
                        //             if
                        //             (
                        //                 ( bFixed && ebpAtRestart && ebpAtRestart < (countT)pTin->pClean )
                        //                 ||
                        //                 pTin->pClean == (cleanC*)&processGlobal5I.tinBreak // ExitProcess WILL CALL THE DLL TERMINATION ROUTINE, WHICH WILL DELETE tinBreak ; THIS LINE MUST TEST FOR THE LATH cleanC DERIVED INSTANCE CONSTRUCTED DURING DLL INITIALIZATION
                        //             )
                        //             break ;
                        // 
                        //             //CONoUTrAW3( "osExceptionHandlerWorkIF:   deleting [pClean]: " , pTin->pClean , "\r\n" ) ;
                        //             THREADmODE2oN( flTHREADmODE2_DOnOTcaLLdELif )
                        //             THREADmODE3oN( flTHREADmODE3_EXCEPTIONcLEANUPdELETIONiNpROGRESS )
                        //             delete pTin->pClean ;
                        //             { TINSL THREADmODE3rESTORE THREADmODE2rESTORE }
                        //             cDeleted ++ ;
                        // 
                        //             if( pTin->pClean == pTin ) pTin = pTinF() ;
                        //         }
                        //     }
                        //     //CONoUTrAW3( "osExceptionHandlerWorkIF: cleanup done [cDeleted]: " , cDeleted , "\r\n" ) ;
                        // 
                        //     //if( pTinSave ) pTinF() = pTinSave ;
                        // }
                    }

                    BLOBpOP( prFloatP )
                }

                TINSL
                //CONoUTrAW( "osExceptionHandlerWorkIF/1\r\n" ) ;
                if( !bFixed || !bQuiet )
                {/*_M*/
                    //CONoUTrAW( "osExceptionHandlerWorkIF/2\r\n" ) ;
                    static countT cRpts ;/*_M*/
                    countT idMe = 1 + incv02AM( cRpts ) ;/*_M*/
                    //20160610@0912: "2" -> "1" IN THE NEXT LINE
                    if( idMe <= 1 ) //CAN BE CHANGED; "1" LIMITS EACH PROCESS TO 1 REPORT; FOR PRODUCTION, PERHAPS IT WOULD BE BEST TO SET THIS TO 1 (SO THAT I KNOW WHICH EXCEPTION HAPPENED WOTH)
                    {/*_M*/
                        homeS::homeIF().flags |= flHOMEs_EXCEPTIONhASoCCURRED ;

                        //CONoUTrAW( "osExceptionHandlerWorkIF/3\r\n" ) ;
                        LOGrAW( thirdC::postUserNameIF() ) ;
                        LOGrAW9( " [bosTicks,idHome,idAdamRoot,idAdam]: " , thirdC::osTimeTicksSinceBootIF() , "/" , processGlobal1I.idHome , "/" , processGlobal1I.idAdamRoot , "/" , tinSnap.pAdamGlobal1->idAdam , ": UNHANDLED EXCEPTION (NO RESTART HANDLER FOUND)\r\n" ) ;
                        //CONoUTrAW( "osExceptionHandlerWorkIF/4\r\n" ) ;
                        //CONoUTrAW9( " [bosTicks,idHome,idAdamRoot,idAdam]: " , thirdC::osTimeTicksSinceBootIF() , "/" , processGlobal1I.idHome , "/" , processGlobal1I.idAdamRoot , "/" , tinSnap.pAdamGlobal1->idAdam , ": UNHANDLED EXCEPTION\r\n" ) ;
                        //CONoUTrAW( "osExceptionHandlerWorkIF/5\r\n" ) ;

                        if( *processGlobal1I.postPathHomeTmp )
                        {/*_M*/
                            osTextC   ostoRpt( COSTArPTeXCEPTION - 2 * sizeof( countT ) , 0 , tinP.postRptExceptionLath - sizeof( countT ) , COSTArPTeXCEPTION ) ;/*_M*/

                            OStEXTAK( ostoRpt , "\r\n//\r\n// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.\r\n//\r\n// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.\r\n// Respecting the rights of other people is an important part of empowering one another.\r\n//\r\n\r\n" ) ;/*_M*/
                            OStEXTAK( ostoRpt , "Subject: IPDOS (tm) Exception Event\r\n\r\nIdeaFarm " "(tm) Piggyback Distributed Operating System\r\nhttp://ideafarm.com\r\nWo'O Ideafarm\r\n \r\nAn " ) ;/*_M*/
                            OStEXTA(  ostoRpt , processGlobal3I.mapExceptionType( tellInfoSys.idException ) ) ;/*_M*/
                            OStEXTAK( ostoRpt , " (" ) ;/*_M*/
                            OStEXTC(  ostoRpt , tellInfoSys.idException , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , ") exception occured while executing thread\r\n" ) ;/*_M*/
                            OStEXTA(  ostoRpt , tinSnap.postThreadName ) ;/*_M*/
                            if( tellInfoSys.idException != ifcIDeVENTeXCEPTIONmONITORED_GRUNT )
                            {/*_M*/
                                OStEXTAK( ostoRpt , " at " ) ;/*_M*/
                                OStEXTC(  ostoRpt , tellInfoSys.pvOffendingCode , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , " (offset from in: " ) ;/*_M*/
                                OStEXTC(  ostoRpt , (countT)tellInfoSys.pvOffendingCode - tinSnap.pEIPInNest[ tinSnap.monitor.cInNest & OFFsLOTtINnESTmAX ] , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , ")" ) ;/*_M*/
                            
                                {/*_M*/
                                    OStEXTAK( ostoRpt , "\r\ncodes [-8,7]: " ) ;/*_M*/
                                    byteT* pbCode = (byteT*)tellInfoSys.pvOffendingCode ;/*_M*/
                                    for( sCountT off = - 8 ; off <= 7 ; off ++ )
                                    {/*_M*/
                                        BLOBpUSH( prFloatP , sizeof *prFloatP )
                                        {
                                            RESTARTrEF( *prFloatP )

                                            if( !*prFloatP )
                                            {/*_M*/
                                                prFloatP->flags |= flRESTARTc_QUIET ;/*_M*/
                                                OStEXTC( ostoRpt , pbCode[ off ] , 0 ) ;/*_M*/ //WILL GP IF CODE IS NO LONGER PRESENT IN MEMORY (E.G. DURING SHUTDOWN) OR IF THE OFFENDING EIP IS VERY CLOSE TO A MEMORY BOUNDARY SO THAT THE RANGE OF THIS LOOP CROSSES THAT BOUNDARY
                                                if( pbCode[ off ] < 0x10 ) OStEXTAS( ostoRpt , '0' ) ;/*_M*/
                                            }
                                            else
                                            {/*_M*/
                                                OStEXTAK( ostoRpt , ".." ) ;/*_M*/
                                            }
                                    
                                            if( off == - 1 )
                                            {/*_M*/
                                                OStEXTAK( ostoRpt , " " ) ;/*_M*/
                                            }
                                        }
                                        BLOBpOP( prFloatP )
                                    }
                                }
                            }
                            OStEXTAK( ostoRpt , "\r\nPOOP: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      (const countT)*tinSnap.pPoop , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nbCleanFailed: " ) ;/*_M*/
                            OStEXTC(  ostoRpt , bCleanFailed , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->flagsAdamState: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->flagsAdamState , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->idLineBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idLineBlammo , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->idiFileBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idiFileBlammo , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->idLineBlammoCt: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idLineBlammoCt , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->idiFileBlammoCt: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idiFileBlammoCt , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->idBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idBlammo , 0 ) ;/*_M*/

                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idLineBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idLineBlammo , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idiFileBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idiFileBlammo , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idLineBlammoCt: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idLineBlammoCt , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idiFileBlammoCt: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idiFileBlammoCt , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idBlammo: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idBlammo , 0 ) ;/*_M*/

                            OStEXTAK( ostoRpt , "\r\ncGrabbed: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.monitor.cGrabbed , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.cGrabitC_set: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.cGrabitC_set , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.cGrabitC_reset: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.cGrabitC_reset , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.cGrabitC_registered: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.cGrabitC_registered , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.cGrabitC_unregistered: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.cGrabitC_unregistered , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nbrcLath: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.brcLath , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidLine_brcLath: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.idLine_brcLath , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidiFile_brcLath: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.idiFile_brcLath , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nU::debug [tinSnap.monitor.idWhat1]: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.monitor.idWhat1 , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidWhat1: " ) ;/*_M*/
                            OStEXTA(  ostoRpt , processGlobal3I.mapWhat( tinSnap.monitor.idWhat1 ) ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidWhat2: " ) ;/*_M*/
                            OStEXTC(  ostoRpt , tinSnap.monitor.idWhat2 , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\npostTell: \"" ) ;/*_M*/
                            OStEXTA(  ostoRpt , tinSnap.postTell ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\"\r\npostTellWait: \"" ) ;/*_M*/
                            OStEXTA(  ostoRpt , tinSnap.postTellWait ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\"\r\npostTellIf: \"" ) ;/*_M*/
                            OStEXTA(  ostoRpt , tinSnap.postTellIf ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\"" ) ;/*_M*/
                            {for( countT off = 1 ; off <= ClOWtHREADS ; off ++ )
                            {
                                OStEXTAK( ostoRpt , "\r\netherC::pcPhaseLowI[" ) ;/*_M*/
                                OStEXTC( ostoRpt , off , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "]: " ) ;/*_M*/
                                OStEXTC( ostoRpt , processGlobal1I.pcPhaseLow[ off ] , 0 ) ;/*_M*/
                            }}
                            {for( countT off = 0 ; off < sizeof processGlobal1I.pcUtility / sizeof processGlobal1I.pcUtility[ 0 ] ; off ++ )
                            {
                                OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.pcUtility[" ) ;/*_M*/
                                OStEXTC( ostoRpt , off , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "]: " ) ;/*_M*/
                                OStEXTC( ostoRpt , processGlobal1I.pcUtility[ off ] , 0 ) ;/*_M*/
                            }}
                            {for( countT off = 0 ; off < CCuTILITY ; off ++ )
                            {
                                OStEXTAK( ostoRpt , "\r\netherC::pcUtilityI[" ) ;/*_M*/
                                OStEXTC( ostoRpt , off , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "]: " ) ;/*_M*/
                                OStEXTC( ostoRpt , rootAdamGlobal1I._etherC_.pcUtility[ off ] , 0 ) ;/*_M*/
                            }}
                            {for( countT off = 0 ; off < sizeof tinSnap.pcUtility / sizeof tinSnap.pcUtility[ 0 ] ; off ++ )
                            {
                                OStEXTAK( ostoRpt , "\r\ntinP.pc" "Utility[" ) ;/*_M*/
                                OStEXTC( ostoRpt , off , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "]: " ) ;/*_M*/
                                OStEXTC( ostoRpt , tinSnap.pcUtility[ off ] , 0 ) ;/*_M*/
                            }}
                            {for( countT off = 0 ; off < sizeof tinSnap.pPanLifiRecurseGrabbedLevel / sizeof tinSnap.pPanLifiRecurseGrabbedLevel[ 0 ] ; off += 5 )
                            {
                                OStEXTAK( ostoRpt , "\r\ntinP.pPanLifiRecurseGrabbedLevel[" ) ;/*_M*/
                                OStEXTC( ostoRpt , off , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "](pandle,idLineGrab,idiFileGrab,cRecurse): " ) ;/*_M*/
                                OStEXTC( ostoRpt , tinSnap.pPanLifiRecurseGrabbedLevel[ off + 0 ] , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , " " ) ;/*_M*/
                                OStEXTC( ostoRpt , tinSnap.pPanLifiRecurseGrabbedLevel[ off + 1 ] , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , " " ) ;/*_M*/
                                OStEXTC( ostoRpt , tinSnap.pPanLifiRecurseGrabbedLevel[ off + 2 ] , 0 ) ;/*_M*/
                                OStEXTAK( ostoRpt , " " ) ;/*_M*/
                                OStEXTC( ostoRpt , tinSnap.pPanLifiRecurseGrabbedLevel[ off + 3 ] , 0 ) ;/*_M*/
                            }}
                            OStEXTAK( ostoRpt , "\r\ntinP.pAdamGlobal1->_thirdC_.cAllKidThreads: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      thirdC::os_cAllKidThreadsI_IF( tinP ) , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ntinP.cKidThreads: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.cKidThreads , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ncAllOrphanThreadsI: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      thirdC::os_cAllOrphanThreadsI_IF( tinP ) , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ncDllLoaded: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.cDllLoaded , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ndll load history: " ) ;/*_M*/
                            OStEXTA(  ostoRpt ,      processGlobal1I.postDllsLoaded ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidThread: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.monitor.idThread , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nbase os user name: \"" ) ;/*_M*/
                            OStEXTA(  ostoRpt , thirdC::postUserNameIF() ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\"\r\nprocessGlobal1I.idHome: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idHome , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nprocessGlobal1I.idAdamRoot: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      processGlobal1I.idAdamRoot , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\npAdamGlobal1->idAdam: " ) ;/*_M*/
                            OStEXTC(  ostoRpt ,      tinSnap.pAdamGlobal1->idAdam , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidPhaseProcess: " ) ;/*_M*/
                            const osTextT* postIdPhaseProcess = processGlobal3I.mapIdPhaseProcess( processGlobal1I.idPhaseProcess ) ;
                            if( postIdPhaseProcess )
                            {/*_M*/
                                OStEXTA( ostoRpt , postIdPhaseProcess ) ;/*_M*/
                            }
                            else
                            {/*_M*/
                                OStEXTC( ostoRpt , processGlobal1I.idPhaseProcess , 0 ) ;/*_M*/
                            }
                            OStEXTAK( ostoRpt , "\r\nidPhaseAdamI: " ) ;/*_M*/
                            const osTextT* postIdPhaseAdam = processGlobal3I.mapProcessPhase( tinP.pAdamGlobal1->idPhaseAdam ) ;
                            if( postIdPhaseAdam )
                            {/*_M*/
                                OStEXTA( ostoRpt , postIdPhaseAdam ) ;/*_M*/
                            }
                            else
                            {/*_M*/
                                OStEXTC( ostoRpt , tinP.pAdamGlobal1->idPhaseAdam , 0 ) ;/*_M*/
                            }
                            OStEXTAK( ostoRpt , "\r\nidPhase1: " ) ;/*_M*/
                            const osTextT* postIdPhase1 = processGlobal3I.mapThreadPhase( tinSnap.idPhase1 ) ;
                            if( postIdPhase1 )
                            {/*_M*/
                                OStEXTA( ostoRpt , postIdPhase1 ) ;/*_M*/
                            }
                            else
                            {/*_M*/
                                OStEXTC( ostoRpt , tinSnap.idPhase1 , 0 ) ;/*_M*/
                            }
                            OStEXTAK( ostoRpt , "\r\nidPhase2: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tinSnap.idPhase2 , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidPhase3: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tinSnap.idPhase3 , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidLineMile: " ) ;/*_M*/
                            OStEXTCmIN( ostoRpt , tinSnap.idLineMile , 4 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nidiFileMile: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tinSnap.idiFileMile , 0 ) ;/*_M*/
                            //OStEXTAK( ostoRpt , "\r\nidLineMileDad: " ) ;/*_M*/
                            //OStEXTCmIN( ostoRpt , tinSnap.idLineMileDad , 4 ) ;/*_M*/
                            //OStEXTAK( ostoRpt , "\r\nidiFileMileDad: " ) ;/*_M*/
                            //OStEXTC( ostoRpt , tinSnap.idiFileMileDad , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\nbFixed: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tellInfoSys.bFixed , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ncFixed: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tellInfoSys.cFixed , 0 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\ncNest: " ) ;/*_M*/
                            OStEXTC( ostoRpt , tinSnap.monitor.cInNest , 0 ) ;/*_M*/
                            if( !tinSnap.monitor.cInNest ) { OStEXTAK( ostoRpt , "\r\n \r\nCall Nest:  no nest information exists\r\n" ) ;/*_M*/ }
                            else if( (sCountT)tinSnap.monitor.cInNest < 0 ) { OStEXTAK( ostoRpt , "\r\n \r\nCall Nest:  error: cNest is negative\r\n" ) ;/*_M*/ }
                            else
                            {/*_M*/
                                OStEXTAK( ostoRpt , "\r\n \r\nCall Nest:\r\n \r\n" ) ;/*_M*/
                                countT idnf = tinSnap.monitor.cInNest - OFFsLOTtINnESTmAX ;/*_M*/
                                if( (sCountT)idnf < 1 )
                                {/*_M*/
                                    idnf = 1 ;/*_M*/
                                }
                            
                                /*PSEUDODUPLICATE CODE: 2e40104 0010266*/
                                for( countT idn = tinSnap.monitor.cInNest ; idn >= idnf ; idn -- )
                                {/*_M*/
                                    countT offez = idn & OFFsLOTtINnESTmAX ;
                                    countT offe = ( idn & OFFsLOTtINnESTmAX ) << 1 ;
                                    countT idLine  = tinSnap.monitor.pLFnest[ offe     ] ;/*_M*/
                                    countT idiFile = tinSnap.monitor.pLFnest[ offe + 1 ] ;/*_M*/
                            
                                    OStEXTC( ostoRpt , tinSnap.pEIPInNest[ offez ] , ' ' ) ;/*_M*/
                                    OStEXTAK( ostoRpt , " | " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tinSnap.pIdInNest[ offez ] , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "'th: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , idLine , 4 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "." ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , idiFile , 7 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "    " ) ;/*_M*/
                                    const osTextT* postTitle = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , idiFile ) ) ;/*_M*/
                                    if( postTitle )
                                    {/*_M*/
                                        OStEXTA( ostoRpt , postTitle ) ;/*_M*/
                                    }
                                    OStEXTAK( ostoRpt , "\r\n" ) ;/*_M*/
                                }
                            }


                            //20191104@2007: REWRITE THIS OLD COMMENTED OUT CODE SO THAT GET CORRECT STEP REPORT EVEN IF idStep HAS WRAPPED
                            //20160604@1657: MADE THIS UNCONDITIONAL WITHOUT ANALYSIS, RELYING ON 2'S COMPLEMENT PROPERTIES TO CORRECTLY DISPLAY STEPS EVEN IF idStep IS NEAR ZE
                            //if( !tinSnap.monitor.idStep ) { OStEXTAK( ostoRpt , "\r\n \r\nExecution Steps:  no step information exists\r\n" ) ;/*_M*/ }
                            //20160603@1931: THE NEXT LINE COMMENTED OUT WITHOUT ANALYSIS ;  SHOULD NOW GET A STEP LISTING EXCEPT WHEN, UNLUCKILY, idStep IS 0 OR VERY SMALL
                            //U::WE CAN GET FANCY HERE; I HAVE NOT DONE SO TO KISS SO THAT THIS CODE IS RELIABLE.  THE CHANCE OF AN EXCEPTION HAPPENING IMMEDIATELY AFTER WRAP IS EXTREMELY LOW
                            //else if( (sCountT)tinSnap.monitor.idStep < 0 ) { OStEXTAK( ostoRpt , "\r\n \r\nExecution Steps:  error: idStep is negative\r\n" ) ;/*_M*/ }
                            //else

                            //20191104@2007: REWRITE TO UNCONDITIONALLY GIVE THE FULL STEP ARRAY
                            //THIS CODE ALWAYS GIVES THE FULL STEP ARRAY AS A CIRCULAR BUFFER STARTING WITH THE MOST RECENT ELEMENT
                            //A:ASSUME: idStep IS VALID

                            {/*_M*/
                                OStEXTAK( ostoRpt , "\r\n \r\nExecution Steps:\r\n \r\n" ) ;/*_M*/
                            
                                countT cIndent = tinSnap.monitor.cInNest ;/*_M*/
                                countT cDo = OFFsLOTtINsTEPmAX + 1 ;/*_M*/                          // IF idStep IS SMALL AND NOT BECAUSE OF WRAP THEN SOME REPORT LINES WILL BE FROM [0,0] PAIRS ; TO KISS, I DO NOT TEST FOR THIS SO I WILL REPORT EVEN IF pLFstep HAS BEEN TRASHED
                                for( countT ids = tinSnap.monitor.idStep ; cDo -- ; ids -- )
                                {/*_M*/
                                    countT offe = ( ids & OFFsLOTtINsTEPmAX ) << 1 ;/*_M*/
                                    countT idLine  = tinSnap.pLFstep[ offe     ] ;/*_M*/
                                    countT idiFile = tinSnap.pLFstep[ offe + 1 ] ;/*_M*/
                            
                                    boolT bOut ;
                                    boolT bIn ;
                                    if( !( idLine & fliSTEP_NESTcHANGE ) )
                                    {/*_M*/
                                        bIn = bOut = 0 ;/*_M*/
                                    }
                                    else
                                    {
                                        bOut = idLine & fliSTEP_NESToUT ;/*_M*/
                                        bIn  = !bOut ;/*_M*/
                                    }
                                    idLine &= ~fliSTEP_FLAGmASK ;/*_M*/
                            
                                    if( bIn && cIndent ) { -- cIndent ;/*_M*/ }

                                    if( cIndent > TUCK >> 2 )
                                    {/*_M*/
                                        OStEXTC( ostoRpt , cIndent , ' ' ) ;/*_M*/
                                    }
                                    else
                                    {/*_M*/
                                        countT cToDo = cIndent ;/*_M*/
                                        while( cToDo -- )
                                        {/*_M*/
                                            OStEXTAK( ostoRpt , " " ) ;/*_M*/
                                        }
                                    }

                                    if( bOut )
                                    {/*_M*/
                                        ++ cIndent ;/*_M*/
                                    }
                            
                                    OStEXTA( ostoRpt , ( bOut ? "\\ " : ( bIn ? "/ " : "| " ) ) ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , idLine , 4 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "." ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , idiFile , 7 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "    " ) ;/*_M*/
                                    const osTextT* postTitle = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , idiFile ) ) ;/*_M*/
                                    if( postTitle )
                                    {/*_M*/
                                        OStEXTA( ostoRpt , postTitle ) ;/*_M*/
                                    }
                                    OStEXTAK( ostoRpt , "\r\n" ) ;/*_M*/
                                }
                            }
                            OStEXTAK( ostoRpt , " \r\n" ) ;/*_M*/
                            
                            switch( tellInfoSys.idException )
                            {
                                case ifcIDeVENTeXCEPTIONmONITORED_ACCESSvIOLATION :
                                {/*_M*/
                                    OStEXTAK( ostoRpt , "bWrite: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 0 ] , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\npvTarget: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 1 ] , 0 ) ;/*_M*/
                                    break ;
                                }
                                case ifcIDeVENTeXCEPTIONmONITORED_GRUNT :
                                {/*_M*/
                                    OStEXTAK( ostoRpt , "idLine: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , tellInfoSys.pcInfo[ 0 ] , 4 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nidiFile: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 1 ] , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nidSubType: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 2 ] , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nidType: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 3 ] , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nidLineNote: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , tellInfoSys.pcInfo[ 4 ] , 4 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nidiFileNote: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , tellInfoSys.pcInfo[ 5 ] , 7 ) ;/*_M*/
                                    break ;
                                }
                                case ifcIDeVENTeXCEPTIONmONITORED_BLAMMO :
                                {/*_M*/
                                    OStEXTAK(   ostoRpt , "idLine: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , tellInfoSys.pcInfo[ 0 ] , 4 ) ;/*_M*/
                                    OStEXTAK(   ostoRpt , "\r\nidiFile: " ) ;/*_M*/
                                    OStEXTC(    ostoRpt , tellInfoSys.pcInfo[ 1 ] , 0 ) ;/*_M*/
                                    OStEXTAK(   ostoRpt , "\r\nidLineCt: " ) ;/*_M*/
                                    OStEXTCmIN( ostoRpt , tellInfoSys.pcInfo[ 2 ] , 4 ) ;/*_M*/
                                    OStEXTAK(   ostoRpt , "\r\nidiFileCt: " ) ;/*_M*/
                                    OStEXTC(    ostoRpt , tellInfoSys.pcInfo[ 2 ] , 0 ) ;/*_M*/
                                    break ;
                                }
                                default :
                                {/*_M*/
                                    OStEXTAK( ostoRpt , "tellInfoSys.idException: " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.idException , 0 ) ;/*_M*/
                                    OStEXTAK( ostoRpt , "\r\nraw exception code (tellInfoSys.pcInfo[0]): " ) ;/*_M*/
                                    OStEXTC( ostoRpt , tellInfoSys.pcInfo[ 0 ] , 0 ) ;/*_M*/
                                    break ;
                                }
                            }
                            OStEXTAK( ostoRpt , "\r\n \r\n" ) ;/*_M*/
                            
                            OStEXTAK( ostoRpt , "Probable defect location: " ) ;/*_M*/
                            OStEXTA( ostoRpt , tellInfoSys.postSuspect ) ;/*_M*/
                            OStEXTAK( ostoRpt , ".\r\n \r\nTry this woth:\r\n" ) ;/*_M*/
                            OStEXTA( ostoRpt , tellInfoSys.postFix1 ) ;/*_M*/
                            OStEXTAK( ostoRpt , "\r\n \r\n" ) ;/*_M*/
                            if( tellInfoSys.postFix2[ 0 ] )
                            {/*_M*/
                                OStEXTAK( ostoRpt , " \r\nIf that does not work, try this:\r\n" ) ;/*_M*/
                                OStEXTA( ostoRpt , tellInfoSys.postFix2 ) ;/*_M*/
                                OStEXTAK( ostoRpt , "\r\n \r\n" ) ;/*_M*/
                            }
                            OStEXTAK( ostoRpt , "Please always report to www.ideafarm.com that this information appeared,\r\nso that the quality of this software can be improved for you and also for others.\r\n" ) ;/*_M*/

                            const osTextT* postRpt = ostoRpt ;
                            countT         costRpt = thirdC::c_strlenIF( tinP , postRpt ) ;

                            OStEXT( ostoFileName , TUCK << 1 ) ;
                            {
                                OStEXTA(  ostoFileName , processGlobal1I.postPathHomeTmp ) ;
                                OStEXTAK( ostoFileName , "\\log.exception.txt" ) ;
                                fileWriteGF( ostoFileName , postRpt , costRpt , 1 ) ;
                            }

                            #if defined( __OS2__ )
                                if( tinSnap.brcLath == U: )
                            #elif defined( __NT__ )
                                if( tinSnap.brcLath == ERROR_NOT_ENOUGH_MEMORY )
                            #endif
                            {
                                static byteT pbBits[ TUCK << 4 ] ; //EACH LINE OF REPORT WILL REPRESENT 1 TICK OF MEMORY
                                //static byteT pbBits[ TOCK ] ;   //THERE ARE A TUCK OF CHAR PER LINE ; EACH LINE REPRESENTS 01 TOCK ; EACH CHAR REPRESENTS 01 TUCK (1 PAGE) ;
                                
                                countT cbGrain = thirdC::osMemoryReadabilityMapIF( tinP , pbBits , sizeof pbBits ) ;
                                //[cbaNeeded]: 958
                                //[cbaNeeded]: 10858
                                //[cbaNeeded]: 1858
                                countT cbaNeeded = etherC::ifcBitDumpIF( tinP , 0 , pbBits , sizeof pbBits * SB , TUCK , cbGrain ) ;
                                LOGrAW3( "memory readability map [cbaNeeded]: " , cbaNeeded , "\r\n" ) ;
                                //CONoUTrAW3( "memory readability map [cbaNeeded]: " , cbaNeeded , "\r\n" ) ;
                                
                                if( cbaNeeded == CBrEADABILITYmAPdUMP )
                                {
                                    //CONoUTrAW( "appending memory readability bit dump to exception report\r\n" ) ;
                                    static byteT postr[ CBrEADABILITYmAPdUMP ] ;
    
                                    etherC::ifcBitDumpIF( tinP , postr , pbBits , sizeof pbBits * SB , TUCK , cbGrain ) ;
                                    fileWriteGF( ostoFileName , postr , sizeof postr - 1 , 1 ) ;
                                    //CONoUTrAW( "appending memory readability bit dump to exception report: done\r\n" ) ;
                                }
                            }

                            //U:: JUST TO MAKE SURE THAT IT HAS TIME TO CLOSE AND FLUSH (SHOULD NOT BE NECESSARY)
                            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                            {
                                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                                ++ s ; dosSleepIF( tinP , TOCK ) ;
                            }
                            THREADmODE1rESTORE

                            //TELL( "osExceptionHandlerWorkIF/reported the exception to disk" )
                        }

                        ZE( boolT , bTold ) ;/*_M*/
                        if( !bDriver && !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & ( flMODEpROCESS2_SUPPRESStELLS | flMODEpROCESS2_FAILtELLS ) ) )
                        {/*_M*/
                            {
                                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                TELLsYSc3( ifcIDtYPEtELLsYS_ERROReXCEPTION , (byteT*)&tellInfoSys , sizeof tellInfoSys ) /*_M*/
                                THREADmODE1rESTORE
                                if( !POOP )
                                {/*_M*/
                                    bTold = 1 ;/*_M*/
                                    //I CAN DELETE THE REPORT FILE THAT I JUST WROTE TO DISK BECAUSE I WAS ABLE TO TELL THE MONITOR
                                    //THE REPORT FILE IS WRITTEN BEFORE ME BECAUSE SOMETIMES MY TELLsYSc3EBP CALL AV'S
                                }
                                else { POOPR /*_M*/ }
                            }
                        }

                        //20190812@1944: ENABLED THIS CODE
                        //ALWAYS ENABLE REBOOT ON EXCEPTION BEFORE UPLOADING (THIS COMMENT IS OBSOLETE, ASSUMING THAT THE SYSTEM IS RUNNING A SERVER)
                        //U::20200604@1356: DISABLED THIS TO BURN-IN TEST PRODUCTION SERVERS
                        //{
                        //    homeS& home = homeS::homeIF() ;
                        //
                        //    //U::BUG: 20191015@2147: FLAG IS NOT SET WHEN I NEED IT TO BE SET DURING PRODUCTION FAILURE FACTORY6 HOME 102
                        //    //20191204@1440: ENABLED THE NEXT 3 LINES
                        //    if( !( F(home.flags) & flHOMEs_FIREoSoNuNHANDLEDeXCEPTION ) ) { LOGrAW3( "on unhandled exception, did not fire the os because flHOMEs_FIREoSoNuNHANDLEDeXCEPTION is not set for home " , etherC::ifc_idHomeIdisk_IF() , "\r\n" ) ; }
                        //    else if( etherC::ifc_idHomeIdisk_IF() < TUCK ) { LOGrAW3( "on unhandled exception, ignored flHOMEs_FIREoSoNuNHANDLEDeXCEPTION because idHome < TUCK for home " , etherC::ifc_idHomeIdisk_IF() , "\r\n" ) ; } //A:ASSUME: PRODUCTION HOME DISK VALUES ARE 001 OR HIGHER
                        //    else
                        //    {
                        //        countT msMinimum = 10 * 60 * 1000 ; //20190819@1106: CHANGED TO 10 FROM 5 MINUTES
                        //        countT msSinceBoot = thirdC::osTimeTicksSinceBootIF() >= home.osTicksAtCt ? thirdC::osTimeTicksSinceBootIF() - home.osTicksAtCt : 0 ;
                        //        if( msSinceBoot < msMinimum ) { LOGrAW3( "on unhandled exception, did not fire the os because ms since boot is only " , msSinceBoot , "\r\n" ) ; }
                        //        else
                        //        {
                        //            LOGrAW3( "on unhandled exception, firing the os at age (ms) since boot: " , msSinceBoot , "\r\n" ) ;
                        //            if( tinP.pEtText ) tinP.pEtText->emailFactoryReportF( tinP , T("an exception occured.  rebooting") ) ;
                        //            thirdC::osFireIF( tinP ) ;
                        //
                        //            homeS::homeIF().flags |= flHOMEs_KILLsELFiMMEDIATELY ; //20191014@1759: ADDED WITHOUT ANALYSIS TO MAKE REBOOT MORE RELIABLE AND QUICKER
                        //            BLAMMO ;
                        //        }
                        //    }
                        //}

                        //OBSOLETE: NOW THIS IS DONE BY rootExceptionFilterF, WHO CALLED MY CALLER
                        //flagsResultP |= flEXCEPTIONrESULT_EXITpROCESScALLED ;
                        //dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; //TO PREVENT AN AV ON tmWindowsF FROM LEAVING DESKTOP COVERED UP WITH AN UNRESPONSIVE WINDOW
                    }
                }
                //TINSL
            }
            //TINSL
        }
        //TINSL
        /*_M*/
        //TELL( "osExceptionHandlerWorkIF/-" ) ;/*_M*/
    }

    {
        TINSL
        THREADmODE3rESTORE
    }
    return bFixed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001155.thirdc.osexceptionhandlerworkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001156.thirdc.c_memsetif BEGIN
#define DDNAME       "3func.35001156.thirdc.c_memsetif"
#define DDNUMB      (countT)0x35001156
#define IDFILE      (countT)0xa91


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::c_memsetIF( byteT* const pbP , const countT cbP , const byteT valueP )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( memset( pbP , valueP , cbP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001156.thirdc.c_memsetif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001157.thirdc.dosexitprocessif BEGIN
#define DDNAME       "3func.35001157.thirdc.dosexitprocessif"
#define DDNUMB      (countT)0x35001157
#define IDFILE      (countT)0xa92


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::dosExitProcessIF( const countT rcP )/*1*/
{
    BOSnOvALUEnOtIN( ExitProcess( rcP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001157.thirdc.dosexitprocessif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001158.thirdc.dossuspendthreadif BEGIN
#define DDNAME       "3func.35001158.thirdc.dossuspendthreadif"
#define DDNUMB      (countT)0x35001158
#define IDFILE      (countT)0xa93


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::dosSuspendThreadIF( tinS& tinP , const countT osTidP )/*1*/
{
    //WORKS UNCONDITIONALLY SO THAT GRABBING/UNGRABBING WILL WORK
    //IFbEcAREFUL
    //{
    //    if( POOP ) return ;
    //}

    _IO_

    #if defined( __NT__ )

        tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal1->_thirdC_.lOsTid = osTidP ;
        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
        handle.osF( ifcIDtYPEhANDLE_THREAD , *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ; //ASSUME: 0 IS AN INVALID HANDLE, SO THAT IF THE THREAD HAS ALREADY DEREGISTERED ITSELF, I WILL DO NOTHING
        ZE( countT , cSuspendPrior ) ;
        countT osh = handle.osF( ifcIDtYPEhANDLE_THREAD ) ;
        if( ~handle )
        {
            BOS( WHATssu , BOSmAXcOUNTT , SuspendThread( (HANDLE)osh ) )
            BOSpOOP
            if( !POOP ) cSuspendPrior = tinP.brcRaw ;
        }
        tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
        handle.resetF() ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001158.thirdc.dossuspendthreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001159.thirdc.dossuspendallbutmeif BEGIN
#define DDNAME       "3func.35001159.thirdc.dossuspendallbutmeif"
#define DDNUMB      (countT)0x35001159
#define IDFILE      (countT)0xa94


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::dosSuspendAllButMeIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #if defined( __NT__ )

        tinP.walkF( tinP.rootF() , tinWalkerF , countTC() ) ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001159.thirdc.dossuspendallbutmeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500115a.thirdc.osthreadyieldif BEGIN
#define DDNAME       "3func.3500115a.thirdc.osthreadyieldif"
#define DDNUMB      (countT)0x3500115a
#define IDFILE      (countT)0xa95


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
no overhead code, for max speed and also for unconditional behavior
i do not cause impotence
i just use the impotence exception handler to create a report
*/
/**/

/*1*/voidT thirdC::osThreadYieldIF( tinS& tinP , const countT idLineNoteP , const countT idiFileNoteP , const byteT* const pbBitsNoteP , const countT msP )/*1*/
{
    _IO_

    if( tinP.idDesire != ifcTHREADpRIORITY_SPINLOCK ) { BLAMMO ; }

    //20140101@1107: DISABLE THIS TIME BOMB FOR SERVER RELIABILITY: if( - 1 == incv02AM( tinP.pAdamGlobal1->cYieldHighWater ) ) { BLAMMO ; }

    //U::J: ALL CALLS TO traceF ARE COMMENTED OUT TO PREVENT INFINITE RECURSION, WHICH WAS OBSERVED 20180703@2025

    //U::J: {
    //U::J:     countT was = tinP.cYield ++ ;
    //U::J:     if( was == - 1 ) { BLAMMO ; }
    //U::J:     else if( was && !( was % ( TUCK >> 4 ) ) && F(tinP.flagsThreadMode3) & flTHREADmODE3_LOGsPINcALLnEST )
    //U::J:     {
    //U::J:         if( tinP.pEther )
    //U::J:         {
    //U::J:             etherC::etRockIF( tinP ).traceF( tinP , T("osThreadYieldIF [cYield]:  ")+TF2(was,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
    //U::J:         }
    //U::J:         else
    //U::J:         {
    //U::J:             //WOULD RESET cYield: etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay1 , flTRACE_PARAMETERiSoStEXT ) ;
    //U::J:             CONoUTrAW3( "osThreadYieldIF [cYield]:    " , was , "\r\n" ) ;
    //U::J:             LOGrAW3(    "osThreadYieldIF [cYield]:    " , was , "\r\n" ) ;
    //U::J:             LOGcALLnEST( "osThreadYieldIF" )
    //U::J:         }
    //U::J:     }
    //U::J: }

    if( tinP.pAdamGlobal1->cYieldHighWater < tinP.cYield ) tinP.pAdamGlobal1->cYieldHighWater = tinP.cYield ;

    // if( !( tinP.cYield % ( YIELDlIMIT >> 0 ) ) )
    // {
    //     BLAMMO ; // IF GET HERE THEN I AM BEING CALLED IN AN INAPPROPRIATE SITUATION
    // 
    //     //OStEXT( ostoBuf , 0x140 )
    //     //OStEXTAK( ostoBuf , "<" ) ;
    //     //OStEXTC( ostoBuf , tinP.pAdamGlobal1->idAdam , 0 ) ;
    //     //OStEXTAK( ostoBuf , "|" ) ;
    //     //OStEXTA( ostoBuf , tinP.postThreadName ) ;
    //     //OStEXTAK( ostoBuf , "." ) ;
    //     //OStEXTC( ostoBuf , idiFileNoteP , 0 ) ;
    //     //OStEXTAK( ostoBuf , "." ) ;
    //     //OStEXTC( ostoBuf , idLineNoteP , 0 ) ;
    //     //OStEXTAK( ostoBuf , ":" ) ;
    //     //OStEXTC( ostoBuf , tinP.cYield , 0 ) ;
    //     //OStEXTAK( ostoBuf , ">\r\n" ) ;
    //     //thirdC::dosWriteStdOutIF( ostoBuf ) ;
    // }
    // 
    // //20170916@1311: REMOVED THE RANDOM SLEEP WITHOUT ANALYSIS.  CONJ: THIS WILL FORCE GOOD PROGRAMMING STYLE, WILL ELIMINATE MYSTERIOUS SLOW SPEED, AND LOCKING UP THE COMPUTER CAN BE PREVENTED BY SETTING A SUFFICIENTLY LOW YIELDlIMIT
    // //IF BLAMMO IS NOT DONE AFTER TUCK YIELDS THEN THE Sleep CALL MUST OCCASIONALLY NAP ; THIS IS TO PREVENT IPDOS (tm) FROM FREEZING THE COMPUTER WITH A RUDE INFINITE YIELD LOOP
    // //20171221@1344: ENABLED RANDOM SLEEP TO HOPEFULLY ELIMINATE BLUE TOOTH MOUSE UNRESPONSIVENESS ON LAPTOP NETBOOK
    // 
    // countT prime = processGlobal1I.pcPrime[ ( tinP.cYield + tinP.osPid ) % processGlobal1I.ccPrime ] ;
    // 
    // countT ms = msP
    //     ? msP
    //     : tinP.cYield % prime
    //         ? 0
    //         : 0x40 ;
    // 
    // ;
    // 
    // BOSnOvALUE( if( ms ) WHATsn else WHATsy , OS sLEEPf( ms ) )

    //20201121@1823: WAS: 0 EXCEPT 250_9 EVERY 01'TH.  NOW: MORE FREQUENT BUT SHORTER NAPS

    static countT idInLath ;
    countT ms = msP
        ? msP                                   // IF OVERRIDE
        : !( ++ idInLath % 0x10 )
            ? 50                                // RARELY
            : !( idInLath % 4 )
                ? 1                             // SOMETIMES
                : 0                             // USUALLY
    ;

    //OStEXT(   ostoSay1 , TUCK ) ;
    //OStEXTAK( ostoSay1 , "yield before local global [idAdam,cYieldHighWater,l.cSpins1,l.cSpins2,l.cSpins3,l.cSpins4,g.cSpins1,g.cSpins2,g.cSpins3,g.cSpins4]:    " ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->idAdam , 0 ) ;
    //OStEXTAK( ostoSay1 , "    " ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->cYieldHighWater , 0 ) ;
    //OStEXTAK( ostoSay1 , "    " ) ;
    //OStEXTC(  ostoSay1 , tinP.cSpins1 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.cSpins2 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.cSpins3 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.cSpins4 , '0' ) ;
    //OStEXTAK( ostoSay1 , "    " ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->cSpins1 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->cSpins2 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->cSpins3 , '0' ) ;
    //OStEXTAK( ostoSay1 , "." ) ;
    //OStEXTC(  ostoSay1 , tinP.pAdamGlobal1->cSpins4 , '0' ) ;
    //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay1 , flTRACE_PARAMETERiSoStEXT ) ;

    if( !( ++ tinP.cSpins1 ) )
    {
        if( !( ++ tinP.cSpins2 ) )
        {
            if( !( ++ tinP.cSpins3 ) )
            {
                if( !( ++ tinP.cSpins4 ) )
                {
                    if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("osThreadYieldIF: thread spin overflow") ) ;
                    else              LOGrAW( "\r\nWARNING: osThreadYieldIF: thread spin overflow\r\n") ;
                }
            }
        }
    }

    if( !( 1 + incv02AM( tinP.pAdamGlobal1->cSpins1 ) ) )
    {
        if( !( 1 + incv02AM( tinP.pAdamGlobal1->cSpins2 ) ) )
        {
            if( !( 1 + incv02AM( tinP.pAdamGlobal1->cSpins3 ) ) )
            {
                if( !( 1 + incv02AM( tinP.pAdamGlobal1->cSpins4 ) ) )
                {
                    if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("osThreadYieldIF: global spin overflow") ) ;
                    else              LOGrAW( "\r\nWARNING: osThreadYieldIF: global spin overflow\r\n") ;
                }
            }
        }
    }

    //OStEXT(   ostoSay2 , TUCK ) ;
    //OStEXTAK( ostoSay2 , "yield after  local global [idAdam,cYieldHighWater,l.cSpins1,l.cSpins2,l.cSpins3,l.cSpins4,g.cSpins1,g.cSpins2,g.cSpins3,g.cSpins4]:    " ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->idAdam , 0 ) ;
    //OStEXTAK( ostoSay2 , "    " ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->cYieldHighWater , 0 ) ;
    //OStEXTAK( ostoSay2 , "    " ) ;
    //OStEXTC(  ostoSay2 , tinP.cSpins1 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.cSpins2 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.cSpins3 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.cSpins4 , '0' ) ;
    //OStEXTAK( ostoSay2 , "    " ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->cSpins1 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->cSpins2 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->cSpins3 , '0' ) ;
    //OStEXTAK( ostoSay2 , "." ) ;
    //OStEXTC(  ostoSay2 , tinP.pAdamGlobal1->cSpins4 , '0' ) ;
    //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay2 , flTRACE_PARAMETERiSoStEXT ) ;

    //Sleep( 0 ) ;   //TO FIND A BUG
    Sleep( ms ) ;   // THIS LINE IS THE ONLY LINE ALLOWED TO CALL Sleep EXPLICITLY (I.E. NOT USING THE MACRO OSsLEEPf)
    //OSsLEEPf( 250 ) ; //U:: ms -> 250 TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500115a.thirdc.osthreadyieldif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001160.thirdc.postbasenameif BEGIN
#define DDNAME       "3func.35001160.thirdc.postbasenameif"
#define DDNUMB      (countT)0x35001160
#define IDFILE      (countT)0xa96


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/const osTextT* thirdC::postBaseNameIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;

                          //123456789abcde
    const osTextT* postx = "!postBaseName:ideafarm.81000001.ipdos-wm" ;
    return postx + 0xe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001160.thirdc.postbasenameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001161.thirdc.third_idphaseadam_if BEGIN
#define DDNAME       "3func.35001161.thirdc.third_idphaseadam_if"
#define DDNUMB      (countT)0x35001161
#define IDFILE      (countT)0xa97


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT& thirdC::third_idPhaseAdam_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->idPhaseAdam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001161.thirdc.third_idphaseadam_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001162.thirdc.dosscanenvif BEGIN
#define DDNAME       "3func.35001162.thirdc.dosscanenvif"
#define DDNUMB      (countT)0x35001162
#define IDFILE      (countT)0xa98


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol anywhere but during ct of global statics
i evaluate to the size of the buffer required to receive the result (including null terminator)
arguments
 postValueP
  preallocated buffer of costaValueP bytes to receive value
 costaValueP
  number of bytes at postValueP that can receive the value including null terminator
 postKeyP
  null terminated key in format required for base os
   windows: "%foo%"
    case is ignored so these are equivalent
     %foo%
     %FOO%
     %Foo%
     %foO%
*/
/**/

/*1*/countT thirdC::dosScanEnvIF( osTextT* const postValueP , const countT costaValueP , const osTextT* const postKeyP )/*1*/
{
    ZE( countT , osrc ) ;

    #if defined( __NT__ )

        *postValueP = 0 ;    
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( ExpandEnvironmentStrings( postKeyP , postValueP , costaValueP ) )
        osrc = _brcRaw ;
        if( osrc > costaValueP ) { BLAMMO ; }

    #endif
    return osrc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001162.thirdc.dosscanenvif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001163.thirdc.postoldcmdlineif BEGIN
#define DDNAME       "3func.35001163.thirdc.postoldcmdlineif"
#define DDNUMB      (countT)0x35001163
#define IDFILE      (countT)0xa99


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_memcpyIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020134.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
i evaluate to an address where the caller will find a null terminated string containing the command line string
arguments
 none
*/
/**/

/*1*/const osTextT* thirdC::postOldCmdLineIF( voidT )/*1*/
{
    #if defined( __NT__ )

    ZE( countT , _brcRaw ) ;
    BOSnOtIN( GetCommandLine() )
    return (osTextT*)_brcRaw ;

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001163.thirdc.postoldcmdlineif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001164.thirdc.c_strstrif BEGIN
#define DDNAME       "3func.35001164.thirdc.c_strstrif"
#define DDNUMB      (countT)0x35001164
#define IDFILE      (countT)0xa9a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/osTextT* thirdC::c_strstrIF( const osTextT* const postBigP , const osTextT* const postSmallP )/*1*/
{
    if( !postBigP || !postSmallP ) return 0 ;

    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strstr( postBigP , postSmallP ) )
    return (osTextT*)_brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001164.thirdc.c_strstrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001165.thirdc.c_atoiif BEGIN
#define DDNAME       "3func.35001165.thirdc.c_atoiif"
#define DDNUMB      (countT)0x35001165
#define IDFILE      (countT)0xa9b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol anywhere almost
arguments
 postP
  must point to a numeric value, possibly signed, in ifc order, using digits [0,f]
*/
/**/

//U: THIS CAN BE ELIMINATED BY USING c_strncpy TO LIMIT COPY TO 8 DIGITS
#define CBbUFF 0x100

/*1*/sCountT thirdC::c_atoiIF( const osTextT* const postP )/*1*/
{
    ZE( countT , value ) ;
    ZE( countT , off ) ;
    ZE( countT , cNeg ) ;
    while( postP[ off ] )
    {
        ZE( countT , vd ) ;
             if( postP[ off ] >= '0' && postP[ off ] <= '9' ) vd =       postP[ off ] - '0' ;
        else if( postP[ off ] >= 'a' && postP[ off ] <= 'f' ) vd = 0xa + postP[ off ] - 'a' ;
        else if( postP[ off ] == '-'                        ) cNeg ++ ;
        else break ;

        if( postP[ off ] != '-' ) value |= vd << 4 * ( off - cNeg ) ;

        off ++ ;
    }

    return cNeg % 2 ? - value : value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001165.thirdc.c_atoiif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001166.thirdc.c_zreplaceif BEGIN
#define DDNAME       "3func.35001166.thirdc.c_zreplaceif"
#define DDNUMB      (countT)0x35001166
#define IDFILE      (countT)0xa9c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol most anywhere
*/
/**/

/*1*/voidT thirdC::c_zReplaceIF( osTextT* const postP , const osTextT ostOldP , const osTextT ostNewP )/*1*/
{
    ZE( countT , off ) ;
    while( postP[ off ] )
    {
        if( postP[ off ] == ostOldP ) postP[ off ] = ostNewP ;
        off ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001166.thirdc.c_zreplaceif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001167.thirdc.blammoif BEGIN
#define DDNAME       "3func.35001167.thirdc.blammoif"
#define DDNUMB      (countT)0x35001167
#define IDFILE      (countT)0xa9d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol most anywhere
*/
/**/

/*1*/voidT thirdC::blammoIF( const countT idLineP , const countT idiFileP , const countT idLineCtP , const countT idiFileCtP , const countT idBlammoP )/*1*/
{
    TINSL

    {
        OStEXT(  ostoSay , TUCK << 2 ) ;
        OStEXTAK( ostoSay , "BLAMMO at " ) ;
        OStEXTC( ostoSay , idLineP , 0 ) ;
        OStEXTAK( ostoSay , "(" ) ;
        OStEXTC( ostoSay , idiFileP , 0 ) ;
        OStEXTAK( ostoSay , ") ct at " ) ;
        OStEXTC( ostoSay , idLineCtP , 0 ) ;
        OStEXTAK( ostoSay , "(" ) ;
        OStEXTC( ostoSay , idiFileCtP , 0 ) ;
        OStEXTAK( ostoSay , ") on thread " ) ;
        OStEXTA(  ostoSay , &tinP ? tinP.postThreadName : "[&tinP is 0]" ) ;

        LOGrAW( ostoSay ) ; //JUST IN CASE traceF FAILS

        //U:: PERHAPS USE RESTART HERE ; IF THIS FAILS, IT CAN BLOW THE STACK AND PREVENT AN EXCEPTION REPORT FROM BEING WRITTEN
        //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    }

    {
        processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;

        pg1.idLineBlammo    = idLineP    ;
        pg1.idiFileBlammo   = idiFileP   ;
        pg1.idLineBlammoCt  = idLineCtP  ;
        pg1.idiFileBlammoCt = idiFileCtP ;
        pg1.idBlammo        = idBlammoP  ;
    }

    countT c_pTin = (countT)&tinP ;
    if( c_pTin )
    {
        tinP.pAdamGlobal1->idLineBlammo    = idLineP    ;
        tinP.pAdamGlobal1->idiFileBlammo   = idiFileP   ;
        tinP.pAdamGlobal1->idLineBlammoCt  = idLineCtP  ;
        tinP.pAdamGlobal1->idiFileBlammoCt = idiFileCtP ;
        tinP.pAdamGlobal1->idBlammo        = idBlammoP  ;
    }

    LOGrAW( "**************************** BLAMMO ******************************\r\n" ) ;

    if( !( F(processGlobal1I.flCt) & flCTdTg_exceptionHandlerRegistered ) || F(processGlobal1I.flDt) & flCTdTg_exceptionHandlerRegistered )
    {
        LOGrAW( "blammoIF: raising exception with no exception handler registered\r\n" ) ;
        //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)"blammoIF: raising exception with no exception handler registered" , flTRACE_PARAMETERiSoStEXT ) ;
    }
    else
    {
        LOGrAW( "blammoIF: raising exception\r\n" ) ;
        //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)"blammoIF: raising exception" , flTRACE_PARAMETERiSoStEXT ) ;
    }

    countT pcArgs[] = { idLineP , idiFileP , idLineCtP , idiFileCtP } ;
    thirdC::dosRaiseExceptionIF( tinP , ifcIDeVENTeXCEPTIONmONITORED_BLAMMO , pcArgs , sizeof pcArgs / sizeof pcArgs[ 0 ] ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001167.thirdc.blammoif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001168.thirdc.inoutchatterifif BEGIN
#define DDNAME       "3func.35001168.thirdc.inoutchatterifif"
#define DDNUMB      (countT)0x35001168
#define IDFILE      (countT)0xa9e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol most anywhere
*/
/**/

/*1*/voidT thirdC::inOutChatterIfIF( tinS& tinP )/*1*/
{
    //THIS IS HERE AS A EXECUTABLE SIZE OPTIMIZATION; IT NATURALLY WOULD BE A SEPARATE FUNCTION OR A MACRO CALLED WITHIN _IO_ ct and dt
    //if( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_CHECKtINuTILITYeLEMENTS )
    //{
    //    for( countT off = 0 ; off < sizeof tinP.pc Utility / sizeof tinP.pc Utility[ 1 ] ; off ++ )
    //    {
    //        if( tinP.pc Utility[ off ] )
    //        {
    //            BLAMMO ;
    //        }
    //    }
    //}
                                                                                                                                                    \
    //if( tinP.pAdamGlobal1->idAdam == 0x4010501 )
    //if( tinP.monitor.idThread == 1 && 0x29a800 - 10000 < idIn )
    //if( tinP.pc Utility[ 0 ] )

    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_INoUTcHATTER )
    {
        tinP.flagsThreadMode2 &= ~( F(flTHREADmODE2_INoUTcHATTER) ) ;

        countT cIndent = tinP.monitor.cInNest ;
        countT offe = ( tinP.monitor.idStep & OFFsLOTtINsTEPmAX ) << 1 ;
        countT idLine  = tinP.pLFstep[ offe     ] ;
        countT idiFile = tinP.pLFstep[ offe + 1 ] ;

        boolT bOut ;
        boolT bIn ;
        if( !( idLine & fliSTEP_NESTcHANGE ) ) bIn = bOut = 0 ;
        else
        {
            bOut = idLine & fliSTEP_NESToUT ;
            bIn  = !bOut ;
        }
        idLine &= ~fliSTEP_FLAGmASK ;
                                
        if( bIn && cIndent ) -- cIndent ;
                                
        countT idiFileCaller = tinP.monitor.pLFnest[ ( ( ( tinP.monitor.cInNest - bIn ) & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ;

        OStEXT( ostor , TUCK << 2 )
        countT cToDo = cIndent ;
        while( cToDo -- )
        {
            OStEXTAK( ostor , " " ) ;
        }
                                    
        OStEXTA( ostor , ( bOut ? "/ " : ( bIn ? "\\ " : "| " ) ) ) ;
        OStEXTC( ostor , cIndent , 0 ) ;
        OStEXTAK( ostor , " | " ) ;
        OStEXTC( ostor , idiFileCaller , 0 ) ;
        OStEXTAK( ostor , " -> " ) ;
        OStEXTC( ostor , idLine , 0 ) ;
        OStEXTAK( ostor , "." ) ;
        OStEXTC( ostor , idiFile , 0 ) ;
        OStEXTAK( ostor , "    " ) ;
        const osTextT* postTitle = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , idiFile ) ) ;
        if( postTitle ) OStEXTA( ostor , postTitle ) ;

        ostor.truncateF( TUCK ) ;
        //((etherC*)0)->traceF( tinP , (const strokeS*)(const osTextT*)ostor , flTRACE_PARAMETERiSoStEXT , ifcIDtRACEdIVERT_8 ) ;

        OStEXTAK( ostor , "\r\n" ) ;
        LOGrAW( ostor ) ;

        tinP.flagsThreadMode2 |= flTHREADmODE2_INoUTcHATTER ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001168.thirdc.inoutchatterifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001169.thirdc.c_strcmpif BEGIN
#define DDNAME       "3func.35001169.thirdc.c_strcmpif"
#define DDNUMB      (countT)0x35001169
#define IDFILE      (countT)0xa9f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol most anywhere
arguments
 post1P
 post2P
*/
/**/

/*1*/sCountT thirdC::c_strcmpIF( const osTextT* const post1P , const osTextT* const post2P )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( strcmp( post1P , post2P )  )
    return _brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001169.thirdc.c_strcmpif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116b.thirdc.winarcif BEGIN
#define DDNAME       "3func.3500116b.thirdc.winarcif"
#define DDNUMB      (countT)0x3500116b
#define IDFILE      (countT)0xaa0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
for max speed, i contain no overhead and i obtain my parameters from tinP
*/
/**/

/*1*/voidT thirdC::winArcIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColFromP , const measureT mIdRowFromP , const measureT mIdColToP , const measureT mIdRowToP , const flagsT flagsP )/*1*/
{
    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
        {
            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            countT idcFrom = R( winOsColIF( mIdColFromP             ) ) ;
            countT idcTo   = R( winOsColIF( mIdColToP               ) ) ;
            countT idrFrom = R( winOsRowIF( mIdRowFromP , cRowsDraw ) ) ;
            countT idrTo   = R( winOsRowIF( mIdRowToP   , cRowsDraw ) ) ;

            if( idcTo < idcFrom )
            {
                countT tmp = idcTo ;
                idcTo = idcFrom ;
                idcFrom = tmp ;
            }
            idcTo ++ ;    

            if( idrTo < idrFrom )
            {
                countT tmp = idrTo ;
                idrTo = idrFrom ;
                idrFrom = tmp ;
            }
            idrTo ++ ;

            //LOGrAW9( "ArcIF          (idcFrom idrFrom idcTo idrTo): " , idcFrom , " " , idrFrom , " " , idcTo , " " , idrTo , "\r\n" ) ; //U::

            BOS( WHATsww , BOSoK , Arc( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcFrom , idrFrom , idcTo , idrTo , idcFrom , idrFrom , idcFrom , idrFrom ) )
            BOSpOOP
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116b.thirdc.winarcif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116d.thirdc.dossleeprawnotinif BEGIN
#define DDNAME       "3func.3500116d.thirdc.dossleeprawnotinif"
#define DDNUMB      (countT)0x3500116d
#define IDFILE      (countT)0xaa1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to use this most everywhere
*/
/**/

/*1*/voidT thirdC::dosSleepRawNoTinIF( countT cP )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOvALUEnOtIN( OSsLEEPf( cP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116d.thirdc.dossleeprawnotinif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116e.thirdc.winrectangleif BEGIN
#define DDNAME       "3func.3500116e.thirdc.winrectangleif"
#define DDNUMB      (countT)0x3500116e
#define IDFILE      (countT)0xaa2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//ASSUME: (*p pmP.pp PaperP)->mIdCol (*p pmP.pp PaperP)->mIdRow ARE CONSISTENT WITH THE O.S. VALUE FOR THE CURRENT DRAWING POSITION

/*1*/voidT thirdC::winRectangleIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColFromP , const measureT mIdRowFromP , const measureT mIdColToP , const measureT mIdRowToP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
    {
        const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

        countT idcFrom = R( winOsColIF( mIdColFromP              ) ) ;
        countT idcTo   = R( winOsColIF( mIdColToP                ) ) ;
        countT idrFrom = R( winOsRowIF( mIdRowFromP  , cRowsDraw ) ) ;
        countT idrTo   = R( winOsRowIF( mIdRowToP    , cRowsDraw ) ) ;

        if( idcTo < idcFrom )
        {
            countT tmp = idcTo ;
            idcTo = idcFrom ;
            idcFrom = tmp ;
        }
        idcTo ++ ;    

        if( idrTo < idrFrom )
        {
            countT tmp = idrTo ;
            idrTo = idrFrom ;
            idrFrom = tmp ;
        }
        idrTo ++ ;

        BOS( WHATsww , BOSoK , Rectangle( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcFrom , idrFrom , idcTo , idrTo ) )
        BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116e.thirdc.winrectangleif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116f.thirdc.ostlathlogif BEGIN
#define DDNAME       "3func.3500116f.thirdc.ostlathlogif"
#define DDNUMB      (countT)0x3500116f
#define IDFILE      (countT)0xaa3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/osTextT& thirdC::ostLathLogIF( voidT )/*1*/
{
    return processGlobal1I.ostLathLog ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500116f.thirdc.ostlathlogif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001170.thirdc.winfloodif BEGIN
#define DDNAME       "3func.35001170.thirdc.winfloodif"
#define DDNUMB      (countT)0x35001170
#define IDFILE      (countT)0xaa4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
for max speed, i contain no overhead and i obtain my parameters from tinP
*/
/**/

/*1*/voidT thirdC::winFloodIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColAtP , const measureT mIdRowAtP , const countT rgbTestP , const countT rgbDrawP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
    {
        #if defined( __NT__ )

            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            countT idcAt   = R( winOsColIF( mIdColAtP             ) ) ;
            countT idrAt   = R( winOsRowIF( mIdRowAtP , cRowsDraw ) ) ;

            BOS( WHATgbo , BOSoK , CreateSolidBrush( rgbDrawP ) )
            BOSpOOP
            HBRUSH oshBrush  = (HBRUSH)tinP.brcRaw ;
            BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , oshBrush ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
            HANDLE oshBrusho = (HANDLE)tinP.brcRaw ;

            //{
            //    boolT bToBorder = F(flagsP) & flDRAW_FLOODuNTIL ;
            //    BOS( WHATgbo , BOSfAILiFmINUS1 , GetPixel( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcAt , idrAt ) )
            //    BOSpOOP
            //    countT rgbHere = tinP.brcRaw ;
            //    LOGrAWtID8( "thirdC::winFloodIF: at (col,row):" , R( mIdColAtP ) , " " , R( mIdRowAtP ) , ": rgbHere is " , rgbHere , bToBorder ? "; fill until " : "; fill while " , rgbTestP ) ;
            //}

            BOS( WHATgbo , BOSoK , ExtFloodFill( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcAt , idrAt , rgbTestP , F(flagsP) & flDRAW_FLOODuNTIL ? FLOODFILLBORDER : FLOODFILLSURFACE ) )
            BOSpOOP

            BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , oshBrusho ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
            BOS( WHATgbo , BOSoK , DeleteObject( oshBrush ) )
            BOSpOOP

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001170.thirdc.winfloodif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001171.thirdc.wingetkeystateif BEGIN
#define DDNAME       "3func.35001171.thirdc.wingetkeystateif"
#define DDNUMB      (countT)0x35001171
#define IDFILE      (countT)0xaa5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT thirdC::winGetKeyStateIF( const countT idToolP )/*1*/
{
    ZE( flagsT , flags ) ;
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetKeyState( osvkF( idToolP ) ) )

        if( _brcRaw & 1          ) flags |= flTOOL_ON ;
        if( _brcRaw & 0x80000000 ) flags |= flTOOL_DOWN ;
    }

    return flags ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001171.thirdc.wingetkeystateif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001172.thirdc.wingetkeynametextif BEGIN
#define DDNAME       "3func.35001172.thirdc.wingetkeynametextif"
#define DDNUMB      (countT)0x35001172
#define IDFILE      (countT)0xaa6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::winGetKeyNameTextIF( osTextT* const postP , const countT costaP , const countT p2P )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( GetKeyNameText( p2P , postP , costaP ) )
    return _brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001172.thirdc.wingetkeynametextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001173.thirdc.mathexpif BEGIN
#define DDNAME       "3func.35001173.thirdc.mathexpif"
#define DDNUMB      (countT)0x35001173
#define IDFILE      (countT)0xaa7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathExpIF( tinS& tinP , measure04T mP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        BOSmEASURE04( WHATgbo , exp( mP ) )
        return tinP.brcm04Raw ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001173.thirdc.mathexpif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001175.thirdc.wingetpelif BEGIN
#define DDNAME       "3func.35001175.thirdc.wingetpelif"
#define DDNUMB      (countT)0x35001175
#define IDFILE      (countT)0xaa8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
impotence will occur if the specified pel is outside of the clipping region
*/
/**/

/*1*/countT thirdC::winGetPelIF( tinS& tinP , const handleC& hDrawP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( hDrawP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;
        BOS( WHATgbo , BOSfAILiFmINUS1 , GetPixel( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColP ) ) , R( winOsRowIF( mIdRowP , cRowsDraw ) ) ) )
        BOSpOOP
        countT rgb = tinP.brcRaw ;

    #endif

    return rgb ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001175.thirdc.wingetpelif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001176.thirdc.third_idtriali_if BEGIN
#define DDNAME       "3func.35001176.thirdc.third_idtriali_if"
#define DDNUMB      (countT)0x35001176
#define IDFILE      (countT)0xaa9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT& thirdC::third_idTrialI_IF( tinS& tinP )/*1*/
{
    return processGlobal1I.idTrial ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001176.thirdc.third_idtriali_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001177.thirdc.postusernameif BEGIN
#define DDNAME       "3func.35001177.thirdc.postusernameif"
#define DDNUMB      (countT)0x35001177
#define IDFILE      (countT)0xaaa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/const osTextT* thirdC::postUserNameIF( voidT )/*1*/
{
    //NO tinS& PARAM BECAUSE THIS IS CALLED BY EXCEPTION HANDLER (JUST TO BE SAFE, I DO NOT REQUIRE A VALID TIN)

    static osTextT postUserI[ TUCK ] ;

    if( !postUserI[ 0 ] )           // 20201111@1626: TEST ADDED BECAUSE OOTH CALL WAS OBSERVED TO FAIL, WITH ERROR CODE ERROR_INVALID_HANDLE
    {
        DWORD costa = sizeof postUserI ;
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetUserName( postUserI , &costa ) )
        if( !_brcRaw ) { BLAMMO ; }
        if( !costa   ) { BLAMMO ; }
    }

    return postUserI ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001177.thirdc.postusernameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001178.thirdc.ifc_idhomeoverridei_if BEGIN
#define DDNAME       "3func.35001178.thirdc.ifc_idhomeoverridei_if"
#define DDNUMB      (countT)0x35001178
#define IDFILE      (countT)0xaab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to me except in def of ifcIDaDAM_TOOLnAPwORDvIEWER
*/
/**/

/*1*/countT& thirdC::ifc_idHomeOverrideI_IF( tinS& tinP )/*1*/
{
    static countT cnu ;
    if( tinP.fingerprint ) ;
    return processGlobal1I.idAdamRoot == ifcIDaDAM_TOOLnAPwORDvIEWER ? tinP.pAdamGlobal1->_thirdC_.idHomeOverride : cnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001178.thirdc.ifc_idhomeoverridei_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001179.thirdc.third_idadami_if BEGIN
#define DDNAME       "3func.35001179.thirdc.third_idadami_if"
#define DDNUMB      (countT)0x35001179
#define IDFILE      (countT)0xaac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::third_idAdamI_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->idAdam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001179.thirdc.third_idadami_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117a.thirdc.third_flagsmodeadam1_if BEGIN
#define DDNAME       "3func.3500117a.thirdc.third_flagsmodeadam1_if"
#define DDNUMB      (countT)0x3500117a
#define IDFILE      (countT)0xaad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT& thirdC::third_flagsModeAdam1I_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_thirdC_.flagsModeAdam1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117a.thirdc.third_flagsmodeadam1_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117b.thirdc.third_flagsmodeadam2_if BEGIN
#define DDNAME       "3func.3500117b.thirdc.third_flagsmodeadam2_if"
#define DDNUMB      (countT)0x3500117b
#define IDFILE      (countT)0xaae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT& thirdC::third_flagsModeAdam2I_IF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_thirdC_.flagsModeAdam2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117b.thirdc.third_flagsmodeadam2_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117c.thirdc.third_idphaseprocess_if BEGIN
#define DDNAME       "3func.3500117c.thirdc.third_idphaseprocess_if"
#define DDNUMB      (countT)0x3500117c
#define IDFILE      (countT)0xaaf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT& thirdC::third_idPhaseProcess_IF( voidT )/*1*/
{
    return processGlobal1I.idPhaseProcess ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117c.thirdc.third_idphaseprocess_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117d.thirdc.winselectobjectif BEGIN
#define DDNAME       "3func.3500117d.thirdc.winselectobjectif"
#define DDNUMB      (countT)0x3500117d
#define IDFILE      (countT)0xab0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::winSelectObjectIF( tinS& tinP , const handleC& hDrawP , const handleC& hToolP , handleC& hToolOldP )/*1*/
{
    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , (HGDIOBJ)hToolP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL ) ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    hToolOldP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE , tinP.brcRaw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117d.thirdc.winselectobjectif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117f.thirdc.mathlog2if BEGIN
#define DDNAME       "3func.3500117f.thirdc.mathlog2if"
#define DDNUMB      (countT)0x3500117f
#define IDFILE      (countT)0xab1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathLog2IF( tinS& tinP , measure04T mP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        BOSmEASURE04( WHATgbo , log2( mP ) )
        return tinP.brcm04Raw ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500117f.thirdc.mathlog2if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001180.thirdc.osselectprocessorsif BEGIN
#define DDNAME       "3func.35001180.thirdc.osselectprocessorsif"
#define DDNUMB      (countT)0x35001180
#define IDFILE      (countT)0xab2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::osSelectProcessorsIF( tinS& tinP , const countT idTypeP , const handleC* const phThreadP )/*1*/
{
    ZE( countT , maskProcess ) ;
    ZE( countT , maskSystem ) ;
    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , GetProcessAffinityMask( oshMe , (DWORD*)&maskProcess , (DWORD*)&maskSystem ) )
    BOSpOOP

    ZE( countT , maskWant ) ;
    if( !( idTypeP & BM_HIGH ) ) //IF NOT A ifcIDtYPEtHREAD_* VALUE
    {
        if( idTypeP & ~ maskProcess ) { __( idTypeP ) ; }
        else                          maskWant = idTypeP ;
    }
    else if( ( maskProcess & 7 ) == 7 )
    {
        switch( idTypeP )
        {
            case ifcIDtYPEtHREAD_KERNEL             : { maskWant = 1                ; break ; }
            case ifcIDtYPEtHREAD_SHOWpONY           : { maskWant = 2                ; break ; }
            case ifcIDtYPEtHREAD_WORKhORSE          : { maskWant = maskProcess & ~3 ; break ; }
            default :
            {
                __( idTypeP ) ;
                __1 ;
            }
        }
    }

    if( maskWant & ~ maskProcess ) { __( maskWant ) ; }


    if( maskWant )
    {
        ZE( HANDLE , oshThread ) ;
        if( phThreadP ) oshThread = (HANDLE)phThreadP->osF( ifcIDtYPEhANDLE_THREAD ) ;
        else
        {
            BOSdOnOTtEST( WHATgbo , GetCurrentThread() )
            oshThread = (HANDLE)tinP.brcRaw ;
        }

        BOS( WHATgbo , BOSoK , SetThreadAffinityMask( oshThread , maskWant ) )
        BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001180.thirdc.osselectprocessorsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001181.thirdc.osmemoryreadabilitymapif BEGIN
#define DDNAME       "3func.35001181.thirdc.osmemoryreadabilitymapif"
#define DDNUMB      (countT)0x35001181
#define IDFILE      (countT)0xab3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to the "grainsize", the number of bytes represented by each bit of the bitstring that i set
parameters
 tinP
 pbBitsP
  must be nonze
  must point to cbBitsP bytes of readable memory
 cbBitsP
  must be nonze
  if TOCK then grainsize will be what the size of a page is as of this writing for Windows
*/
/**/

/*1*/countT thirdC::osMemoryReadabilityMapIF( tinS& tinP , byteT* const pbBitsP , const countT cbBitsP )/*1*/
{
    countT cBits = cbBitsP * SB ;
    countT cbGrain = ( ( MAXcOUNTT >> 1 ) + 1 ) / cBits ; // ">> 1" IS BECAUSE UPPER HALF OF ADDRESS SPACE IS NOT AVAILABLE ON WINDOWS
    CONoUTrAW5( "[cBits,cbGrain]: " , cBits , " " , cbGrain , "" ) ;

    ZE( countT , offi ) ;
    ZE( countT , offo ) ;
    byteT mask = 1 ;
    for(;;)
    {
        ZE( boolT , bOk ) ;
        byteT bIn ;
        thirdC::dosReadProcessMemoryIF( tinP , &bIn , 1 , bOk , (voidT*)offi , tinP.osPid ) ;
    
        if( bOk ) pbBitsP[ offo ] |=   mask ;
        else      pbBitsP[ offo ] &= ~ mask ;

        mask <<= 1 ;
        if( !mask )
        {
            mask = 1 ;
            offo ++ ;
        }
    
        offi += cbGrain ;
        if( offi >= MAXcOUNTT >> 1 ) break ;
    }

    return cbGrain ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001181.thirdc.osmemoryreadabilitymapif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001182.thirdc.os_expcbpage_if BEGIN
#define DDNAME       "3func.35001182.thirdc.os_expcbpage_if"
#define DDNUMB      (countT)0x35001182
#define IDFILE      (countT)0xab4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::os_expCbPage_IF( tinS& tinP )/*1*/
{
    SYSTEM_INFO info ;
    BOSnOvALUE( WHATgbo , GetSystemInfo( &info ) )

    ZE( countT , expCb ) ;
    countT cbTry = 1 ;
    while( cbTry < info.dwPageSize )
    {
        expCb ++ ;
        cbTry <<= 1 ;
    }

    return expCb ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001182.thirdc.os_expcbpage_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001183.thirdc.os_expcballocationgrain_if BEGIN
#define DDNAME       "3func.35001183.thirdc.os_expcballocationgrain_if"
#define DDNUMB      (countT)0x35001183
#define IDFILE      (countT)0xab5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::os_expCbAllocationGrain_IF( tinS& tinP )/*1*/
{
    SYSTEM_INFO info ;
    BOSnOvALUE( WHATgbo , GetSystemInfo( &info ) )

    ZE( countT , expCb ) ;
    countT cbTry = 1 ;
    while( cbTry < info.dwAllocationGranularity )
    {
        expCb ++ ;
        cbTry <<= 1 ;
    }

    return expCb ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001183.thirdc.os_expcballocationgrain_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001184.thirdc.c_strstrif BEGIN
#define DDNAME       "3func.35001184.thirdc.c_strstrif"
#define DDNUMB      (countT)0x35001184
#define IDFILE      (countT)0xab6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const countT* thirdC::c_strstrIF( tinS& tinP , const countT* const pczBigP , const countT* const pczSmallP )/*1*/
{
    ZE( countT , ccBig ) ;
    ZE( countT , ccSmall ) ;
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pczBigP ) ;
        __Z( pczSmallP ) ;
        if( POOP ) return 0 ;
        __( !*pczBigP ) ;
        __( !*pczSmallP ) ;
        if( POOP ) return 0 ;
        ccBig   = c_strlenIF( tinP , pczBigP   ) ;
        ccSmall = c_strlenIF( tinP , pczSmallP ) ;
        __( ccSmall > ccBig ) ;
        if( POOP ) return 0 ;
    }
    if( !pczBigP || !pczSmallP ) return 0 ;

    ZE( const countT* , pczFound ) ;
    {
        for( countT offb = 0 ; offb <= ccBig - ccSmall ; offb ++ )
        {
            ZE( countT , offs ) ;
            for( ; offs < ccSmall ; offs ++ )
            {
                if( pczBigP[ offb ] != pczSmallP[ offs ] ) break ;
            }

            if( offs == ccSmall )
            {
                pczFound = pczBigP + offb ;
                break ;
            }
        }
    }
    return pczFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001184.thirdc.c_strstrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001185.thirdc.doscreatedirif BEGIN
#define DDNAME       "3func.35001185.thirdc.doscreatedirif"
#define DDNUMB      (countT)0x35001185
#define IDFILE      (countT)0xab7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 postP
  format: "?:\\foo\\bar"
  note that the normal terminating backslash is not to be used when calling me
*/
/**/

/*1*/voidT thirdC::dosCreateDirIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    const countT costP = postP ? c_strlenIF( tinP , postP ) : 0 ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __( costP < 4 ) ;
        if( POOP ) return ;
        __( postP[ 1 ] - ':' ) ;
        __( postP[ costP - 1 ] == '\\' ) ;
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
        BOS( WHATgbo , BOSoK , CreateDirectory( postP , &sa ) )

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001185.thirdc.doscreatedirif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001186.thirdc.dosfindfileordirsimpleif BEGIN
#define DDNAME       "3func.35001186.thirdc.dosfindfileordirsimpleif"
#define DDNUMB      (countT)0x35001186
#define IDFILE      (countT)0xab8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

#ifdef __OS2__
#elif defined( __NT__ )
    #define symACHnAME         cFileName
#endif

/*1*/voidT thirdC::dosFindFileOrDirSimpleIF( tinS& tinP , osTextT* const postP , const countT costaP , handleC& handleP , const osTextT* const postLikeP , const flagsT flagsP )/*1*/
{
    const countT costMax = dosQuerySysInfoMaxPathLengthIF( tinP ) ;

    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __Z( costMax ) ;
        __( costaP <= costMax ) ;
        __Z( postLikeP ) ;
        //FV(flDOSfINDfILEoRdIR,flagsP) ;
        if( POOP ) return ;
        __( !!*postP ) ;     //CALLER MUST INSPECT THIS TO DETERMINE WHETHER AN OBJECT WAS FOUND
        __( !postLikeP[ 0 ] ) ;
        if( POOP ) return ;
        if( postLikeP[ 1 ] != '\\' )            //20190826@0902: ACCOMMODATE NETBIOS FILE NAMES OF THE FORM "\\netbiosname\disk\path\short"
        {
            __( postLikeP[ 0 ] < 'a' || postLikeP[ 0 ] > 'z' ) ;
            __( postLikeP[ 1 ] - ':' ) ;
        }
        if( POOP ) return ;
        __( !postLikeP[ 2 ] ) ;
        if( POOP ) return ;
        //U::__( !postLikeP[ 3 ] ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_

    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH07 )
    //{
    //    CONoUTrAW( "dosFindFileOrDirSimpleIF: " ) ;
    //    CONoUTrAW( postLikeP ) ;
    //    CONoUTrAW( "\r\n" ) ;
    //}

    ZE( boolT , bCloaked ) ;
    if( !( F(flagsP) & flDOSfINDfILEoRdIR_DOnOTtESTwATER ) )
    //CS:CODEsYNC: PSEUDODUPLICATE CODE 3600101d 35001186
    {
        poopC poop ;
        SCOOP

        osTextT postf[ TUCK << 1 ] ;
        postf[ 0 ] = 0 ;
        handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
        thirdC::dosFindFileOrDirSimpleIF( tinP , postf , sizeof postf , hFind , postLikeP , flDOSfINDfILEoRdIR_DOnOTtESTwATER ) ;

        if( POOP )
        {
            POOPRqUIET
            bCloaked = 1 ;
            if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("dosFindFileOrDirSimpleIF / setting bCloaked [postf]:    ")+T(postf) ) ;
        }
    }

    //CS:CODEsYNC: DUPLICATE CODE 3600101d 35001186
    ZE( diskFindHandleS* , pOsh ) ;
    boolT bWoth = !handleP ;
    if( ~handleP ) pOsh = (diskFindHandleS*)handleP.osF( ifcIDtYPEhANDLE_FILEfIND ) ;
    else
    {
        countT cba = sizeof( diskFindHandleS ) ;
        byteT* pba = processGlobal3I.heap.newF( tinP , LF , cba ) ;
        if( pba )
        {
            pOsh = new( 0 , tinP , pba , cba ) diskFindHandleS( tinP ) ;
            handleP.osF( ifcIDtYPEhANDLE_FILEfIND , (countT)pOsh ) ;
        }

        if( bCloaked )
        {
            thirdC::s_socketIF( tinP , pOsh->hSockCloak , ifcSOCKETtYPE_STREAM ) ;

            thirdC::s_connectIF( tinP , countTC() , pOsh->hSockCloak , homeS::homeIF().idPortCloak ) ;

            countT idTypeConnection = ifcIDtYPEcLOAKcONNECTION_SIMPLE ;
            thirdC::s_writeIF( tinP , pOsh->hSockCloak , (byteT*)&idTypeConnection , sizeof idTypeConnection ) ;

            countT finger = FINGERnEG_CLOAKsIMPLEcONNECTION ;
            thirdC::s_writeIF( tinP , pOsh->hSockCloak , (byteT*)&finger , sizeof finger ) ;

            countT idFormat = 1 ;
            thirdC::s_writeIF( tinP , pOsh->hSockCloak , (byteT*)&idFormat , sizeof idFormat ) ;

            countT costLike = thirdC::c_strlenIF( tinP , postLikeP ) ;
            thirdC::s_writeIF( tinP , pOsh->hSockCloak , (byteT*)&costLike , sizeof costLike ) ;
            thirdC::s_writeIF( tinP , pOsh->hSockCloak , postLikeP , costLike ) ;
        }
    }

    if( bCloaked )
    {
        ZE( countT , costi ) ;
        countT rc = thirdC::s_readIF( tinP , (byteT*)&costi , sizeof costi , pOsh->hSockCloak ) ;

        if( !costi || costi > TUCK << 2 ) handleP.closeIfF() ;
        else
        {
            osTextT* posti = processGlobal3I.heap.newF( tinP , LF , costi + 1 ) ;
            countT rc = thirdC::s_readIF( tinP , posti , costi , pOsh->hSockCloak ) ;
            posti[ costi ] = 0 ;

            ZE( osTextT* , postEnd ) ;
            postEnd = c_strrchrIF( tinP , postLikeP , '\\' ) ;
            countT costPrefix = postEnd - postLikeP + 1 ;

            OStEXT( ostot , 0x200 )
            OStEXTAL( ostot , postLikeP , costPrefix )
            if( posti ) OStEXTA( ostot , posti )

            c_strcpyIF( tinP , postP , ostot ) ;
        }
    }
    else
    {
        ZE( boolT , fFound ) ;
        #ifdef __OS2__
        #elif defined( __NT__ )
            WIN32_FIND_DATA info ;
        #endif
        c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;

        {
            #ifdef __OS2__
            #elif defined( __NT__ )

                //CS:CODEsYNCH: DUPLICATE CODE 3600101d 35001186
                ZE( countT , bosFailSave ) ;
                ZE( countT , brcLathSave ) ;
                if( bWoth )
                {
                    BOS( WHATsfr , BOShANDLE , FindFirstFile( postLikeP , &info ) )
                    bosFailSave = tinP.bosFail ;
                    brcLathSave = tinP.brcLath ;
                    pOsh->hFind.osF( ifcIDtYPEhANDLE_FILEfINDbASE , (countT)tinP.brcRaw ) ;
                    if( ~pOsh->hFind ) fFound = 1 ;
                }
                else
                {
                    BOS( WHATsfr , BOSoK , FindNextFile( (HANDLE)pOsh->hFind.osF( ifcIDtYPEhANDLE_FILEfINDbASE ) , &info ) )
                    bosFailSave = tinP.bosFail ;
                    brcLathSave = tinP.brcLath ;
                    fFound = !tinP.bosFail ;
                }

                if( bosFailSave )
                {
                    fFound = 0 ;
                    handleP.closeIfF() ;

                    if( brcLathSave == ERROR_FILE_NOT_FOUND || brcLathSave == ERROR_PATH_NOT_FOUND || brcLathSave == ERROR_NO_MORE_FILES ) bosFailSave = 0 ;
                    else
                    {
                        tinP.bosFail = bosFailSave ;
                        tinP.brcLath = brcLathSave ;
                        BOSpOOP ;
                    }
                }

            #endif
        }

        if( !POOP && fFound )
        {
            ZE( osTextT* , postEnd ) ;
            postEnd = c_strrchrIF( tinP , postLikeP , '\\' ) ;
            countT costPrefix = postEnd - postLikeP + 1 ;

            OStEXT( ostot , 0x200 )
            OStEXTAL( ostot , postLikeP , costPrefix )
            if( info.symACHnAME ) OStEXTA( ostot , info.symACHnAME )

            c_strcpyIF( tinP , postP , ostot ) ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001186.thirdc.dosfindfileordirsimpleif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001187.thirdc.c_atoiforeignif BEGIN
#define DDNAME       "3func.35001187.thirdc.c_atoiforeignif"
#define DDNUMB      (countT)0x35001187
#define IDFILE      (countT)0xab9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol anywhere almost
arguments
 postP
  must point to a numeric value, possibly signed, in foreign order, using digits [0,f]
*/
/**/

/*1*/sCountT thirdC::c_atoiForeignIF( const osTextT* const postP , const boolT bSignedP )/*1*/
{
    sCountT vv = c_atoiIF( postP ) ;

    countT vvi = bSignedP && vv < 0 ? - vv : vv ;
    countT vvo ; //INTENTIONALLY NOT INITIALIZED, FOR SPEED

    byteT* pbo = (byteT*)&vvo ;
    for( sCountT offi = sizeof vvi - 1 ; offi >= 0 ; offi -- )
    {
        byteT in = ((byteT*)&vvi)[ offi ] ;
        *( pbo ++ ) = (byteT)( ( ( in & 0xf ) << 4 ) | in >> 4 ) ;
    }

    return bSignedP && vv < 0 ? - vvo : vvo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001187.thirdc.c_atoiforeignif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001188.thirdc.diskfindhomeif BEGIN
#define DDNAME       "3func.35001188.thirdc.diskfindhomeif"
#define DDNUMB      (countT)0x35001188
#define IDFILE      (countT)0xaba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
like etherC::diskChooseSiteF except returns file name in base os syntax
illegal to use this except when cannot use etherC::diskChooseSiteF i.e. early/late
arguments
 tinP
 postP
  must point to costaP writeable bytes
 costaP
  must be >= TUCK
 postKeyP
  must point to null terminated string
   example: "ideafarm"
*/                                    
/**/

//THIS FUNCTION DUPLICATES FUNCTION OF etherC::diskChooseSiteF
//IT BREAKS CODE CONFORMANCE (ORTHOGONALITY, NO FUNCTIONAL REDUNDANCY) SO THAT THE FUNCTIONALITY IS AVAILABLE AT ANY TIME I.E. VERY EARLY/LATE WHEN NO poolC OR etherC INSTANCE EXISTS
//IT MIGHT NOT BE AN EXACT FUNCTIONAL DUPLICATE IN THAT IT ONLY ADMITS FIXED DRIVES, EXCLUDING CDROM AND MEMORY STICKS AND OTHER REMOVABLES)

/*1*/countT thirdC::diskFindHomeIF( tinS& tinP , osTextT* const postP , const countT costaP , const osTextT* postKeyP )/*1*/
{
    const countT costMax = dosQuerySysInfoMaxPathLengthIF( tinP ) ;
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        __( costaP <= costMax ) ;
        __Z( postKeyP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , cbFree ) ;
    postP[ 0 ] = 0 ;
    homeS& home = homeS::homeIF() ;
    boolT bIdeafarm = !thirdC::c_strcmpIF( tinP , postKeyP , "ideafarm" ) ;

    if( bIdeafarm && home.postHome[ 0 ] ) thirdC::c_strncpyIF( tinP , postP , home.postHome , costaP ) ;
    else
    {
        #if defined( __NT__ )

            {
                //A: COMMENTING THIS OUT BREAKS THE SYNCH BETWEEN ME AND diskChooseSiteF
                //A: 20141129@2022: DISABLED WITHOUT ANALYSIS TO AVOID A SLEEP BLAMMO DURING CRAFTWORK OF OTHER CODE ; THIS CODE IS OBSOLETE ANYWAY SINCE IT DOES NOT QUERY THE SETTINGS bitTreeC
                //A: OStEXT(   ostoSetting , TUCK << 2 ) ;
                //A: OStEXTAK( ostoSetting , "\\ideafarm." ) ;
                //A: OStEXTC(  ostoSetting , etherC::ifc_idHomeIdisk_IF() , 0 ) ;
                //A: OStEXTAK( ostoSetting , ".setting.keyValue." ) ;
                //A: OStEXTA(  ostoSetting , postKeyP ) ;
                //A: 
                //A: osTextT postValue[ 0x100 ] ;
                //A: countT  costValue = sizeof postValue ;
                //A: 
                //A: POOPIE
                //A: thirdC::c_memsetIF( tinP , postP , costaP ) ;
                //A: countT costv = costaP ;
                //A: thirdC::dosReadIF( tinP , postP , costv , ostoSetting ) ;
                //A: costv = thirdC::c_strlenIF( tinP , postP ) ;
                //A: __( postP[ 0 ] - '/' ) ;
                //A: __( postP[ 1 ] - '/' ) ;
                //A: __( postP[ 2 ] - '/' ) ;
                //A: __( postP[ 3 ] < 'a' || postP[ 3 ] > 'z' ) ;
                //A: __( postP[ 4 ] - '/' ) ;
                //A: __( !postP[ 5 ] ) ;
                //A: __( postP[ costv - 1 ] - '/' ) ;
                //A: 
                //A: if( POOP )
                //A: {
                //A:     POOPR
                //A:     postP[ 0 ] = 0 ;
                //A: }
                //A: else
                //A: {
                //A:     postP[ 0 ] = postP[ 3 ] ;
                //A:     postP[ 1 ] = ':' ;
                //A:     thirdC::c_memcpyIF( tinP , postP + 2 , postP + 4 , costv - 3 ) ;
                //A:     postP[ costv - 3 ] = 0 ;
                //A:     thirdC::c_zReplaceIF( tinP , postP , '/' , '\\' ) ;
                //A: 
                //A:     const osTextT postRoot[] = { postP[ 0 ] , ':' , '\\' , 0 } ;
                //A:     ZE( countT , cSectorsPerCluster ) ;
                //A:     ZE( countT , cBytesPerSector ) ;
                //A:     ZE( countT , cFreeClusters ) ;
                //A:     ZE( countT , cClusters ) ;
                //A:     BOS( WHATsfr , BOSoK , GetDiskFreeSpace( postRoot , (ULONG*)&cSectorsPerCluster , (ULONG*)&cBytesPerSector , (ULONG*)&cFreeClusters , (ULONG*)&cClusters ) )
                //A: 
                //A:     if( POOP )
                //A:     {
                //A:         POOPR
                //A:         postP[ 0 ] = 0 ;
                //A:     }
                //A:     else cbFree = cFreeClusters * cSectorsPerCluster * cBytesPerSector ; //U::THIS CAN OVERFLOW
                //A: }
            }

            osTextT postLike[ TUCK ] ;
            {
                OStEXT(   ostoLike , TUCK << 2 ) ;
                OStEXTAK( ostoLike , "?:\\" ) ;
                OStEXTA(  ostoLike , postKeyP ) ;
                OStEXTAK( ostoLike , ".home." ) ;
                OStEXTC(  ostoLike , etherC::ifc_idHomeIdisk_IF() , 0 ) ;

                thirdC::c_strcpyIF( tinP , postLike , ostoLike ) ;
            }

            for( postLike[ 0 ] = 'c' ; !postP[ 0 ] && postLike[ 0 ] <= 'z' ; postLike[ 0 ] ++ ) //U:: 2011.10.24: c->z (RATHER THAN z->c) SO THAT PERMANENT DRIVES WILL BE FOUND BEFORE UNMOUNTABLE EXTERNAL DRIVES USED FOR BACKUP VIA XCOPY
            {
                osTextT postRoot[] = ".:\\" ;
                postRoot[ 0 ] = postLike[ 0 ] ;

                BOS( WHATgbo , BOSoK , GetDriveType( postRoot ) )
                BOSpOOP

                if( DRIVE_FIXED != tinP.brcRaw ) continue ;

                handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                thirdC::dosFindFileOrDirSimpleIF( tinP , postP , costaP , hFind , postLike ) ;
            }

            //U::SEARCH FOR: T("///?/")+T(psttKeyP)+T(".home.")+TF1(idHomeDisk)+T("/")

            if( !postP[ 0 ] )
            {
                POOPIE
                ZE( osTextT , ostDriveMax ) ;
                ZE( countT  , cbMaxLow ) ;
                ZE( countT  , cbMaxHigh ) ;
                osTextT postRoot[] = ".:\\" ;
                for( postRoot[ 0 ] = 'c' ; postRoot[ 0 ] <= 'z' ; postRoot[ 0 ] ++ ) //U:: 2011.10.24: c->z (RATHER THAN z->c) SO THAT PERMANENT DRIVES WILL BE FOUND BEFORE UNMOUNTABLE EXTERNAL DRIVES USED FOR BACKUP VIA XCOPY
                {
                    BOS( WHATgbo , BOSoK , GetDriveType( postRoot ) )
                    BOSpOOP
            
                    countT idType = tinP.brcRaw ;

                    if( DRIVE_FIXED == idType )
                    {
                        countT pci[ 4 ] = { 0 , 0 , 0 , 0 } ; // cClusters , cFreeClusters , cSectorsPerCluster , cBytesPerSector ) ;
                        BOS( WHATsfr , BOSoK , GetDiskFreeSpace( postRoot , (ULONG*)&pci[ 2 ] , (ULONG*)&pci[ 3 ] , (ULONG*)&pci[ 1 ] , (ULONG*)&pci[ 0 ] ) )

                        //CONoUTrAW7( "[cFreeClusters,cSectorsPerCluster,cBytesPerSector]: " , pci[ 1 ] , " " , pci[ 2 ] , " " , pci[ 3 ] , "\r\n" ) ;

                        if( POOP ) { POOPR ; }
                        else
                        {
                            // BIT BY BIT MULTIPLICATION
                            countT pcpA[ 3 ] = { 2 , pci[ 1 ] , 0 } ;
                            for( countT offi = 2 ; offi <= 3 ; offi ++ )
                            {
                                // RECIPE
                                //
                                // pcpA = pcpA * pci[ offi ]
                                // EACH BIT SET IN THE OO'TH MULTIPLICAND SPECIFIES A LEFT SHIFT TO WO'TH OPERAND
                                // ALL SUCH LEFT SHIFT RESULTS ARE TO BE ADDED TOGETHER TO GET THE RESULT

                                countT pcpSum[ 3 ] = { 2 , 0 , 0 } ;
                                {
                                    ZE( countT , exp ) ;
                                    while( pci[ offi ] )
                                    {
                                        if( pci[ offi ] & 1 )
                                        {
                                            countT pcpTerm[ 3 ] = { 2 , pcpA[ 1 ] , pcpA[ 2 ] } ;
                                            countT cToDo = exp ;
                                            while( cToDo -- )
                                            {
                                                if( pcpTerm[ 1 ] & BM_HIGH && !pcpTerm[ 2 ] ) pcpTerm[ 2 ] = 1 ;
                                                else                                          pcpTerm[ 2 ] <<= 1 ;
                                                pcpTerm[ 1 ] <<= 1 ;
                                            }

                                            countT* pTo = pcpSum ;
                                            addF( tinP , pTo , pcpSum , pcpTerm , 0 ) ;
                                        }

                                        pci[ offi ] >>= 1 ;
                                        exp ++ ;
                                    }
                                }

                                pcpA[ 1 ] = pcpSum[ 1 ] ;
                                pcpA[ 2 ] = pcpSum[ 2 ] ;
                            }

                            //CONoUTrAW( "10201cf diskFindHomeIF: drive \"" ) ;
                            //CONoUTrAW( postRoot ) ;
                            //CONoUTrAW5( "\" has [" , pcpA[ 1 ] , "," , pcpA[ 2 ] , "] bytes free\r\n" ) ;

                            if( cbMaxHigh < pcpA[ 2 ] || ( cbMaxHigh == pcpA[ 2 ] && cbMaxLow < pcpA[ 1 ] ) )
                            {
                                cbMaxLow  = pcpA[ 1 ] ;
                                cbMaxHigh = pcpA[ 2 ] ;
                                ostDriveMax = postRoot[ 0 ] ;
                            }
                        }
                    }
                }

                if( ostDriveMax )
                {
                    cbFree = cbMaxLow ;
                    osTextT postDrive[] = { ostDriveMax , 0 } ;

                    //CONoUTrAW( "10201cf diskFindHomeIF: found \"" ) ;
                    //CONoUTrAW( postDrive ) ;
                    //CONoUTrAW( "\"\r\n" ) ;

                    OStEXT(   ostoHome , TUCK << 2 ) ;
                    OStEXTA(  ostoHome , postDrive ) ;
                    OStEXTAK( ostoHome , ":\\" ) ;
                    OStEXTA(  ostoHome , postKeyP ) ;
                    OStEXTAK( ostoHome , ".home." ) ;
                    OStEXTC(  ostoHome , etherC::ifc_idHomeIdisk_IF() , 0 ) ;

                    thirdC::c_strcpyIF( tinP , postP , ostoHome ) ;
                }
            }

            if( bIdeafarm ) thirdC::c_strncpyIF( tinP , home.postHome , postP , sizeof home.postHome ) ;

            //if( processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH07 )
            //{
            //    CONoUTrAW( "dFH: " ) ;
            //    CONoUTrAW( postKeyP ) ;
            //    CONoUTrAW( "        " ) ;
            //    CONoUTrAW( postP ) ;
            //    CONoUTrAW( "\r\n" ) ;
            //}

        #endif
    }

    __( !postP[ 0 ] ) ;

    return cbFree ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001188.thirdc.diskfindhomeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001189.thirdc.flushviewoffileif BEGIN
#define DDNAME       "3func.35001189.thirdc.flushviewoffileif"
#define DDNUMB      (countT)0x35001189
#define IDFILE      (countT)0xabb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pbP
  woth byte of the string of bytes to be flushed
 cbP
  number of bytes to flush
  can be 0
  if 0 then all bytes to the end of the file mapping will be flushed
*/
/**/

/*1*/voidT thirdC::flushViewOfFileIF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        if( POOP ) return ;
    }

    //_IO_  (WOULD BLOW STACK DUE TO inOutFrameC EMITTING APP TELEMETRY)

    #if defined( __NT__ )

        BOS( WHATgbo , BOSoK , FlushViewOfFile( (CONST VOID*)pbP , *(DWORD*)&cbP ) )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001189.thirdc.flushviewoffileif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118a.thirdc.os_cbpage_if BEGIN
#define DDNAME       "3func.3500118a.thirdc.os_cbpage_if"
#define DDNUMB      (countT)0x3500118a
#define IDFILE      (countT)0xabc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::os_cbPage_IF( tinS& tinP )/*1*/
{
    SYSTEM_INFO info ;
    BOSnOvALUE( WHATgbo , GetSystemInfo( &info ) )
    return info.dwPageSize ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118a.thirdc.os_cbpage_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118b.thirdc.os_cballocationgrain_if BEGIN
#define DDNAME       "3func.3500118b.thirdc.os_cballocationgrain_if"
#define DDNUMB      (countT)0x3500118b
#define IDFILE      (countT)0xabd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::os_cbAllocationGrain_IF( tinS& tinP )/*1*/
{
    SYSTEM_INFO info ;
    BOSnOvALUE( WHATgbo , GetSystemInfo( &info ) )
    return info.dwAllocationGranularity ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118b.thirdc.os_cballocationgrain_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118c.thirdc.c_strcmpif BEGIN
#define DDNAME       "3func.3500118c.thirdc.c_strcmpif"
#define DDNUMB      (countT)0x3500118c
#define IDFILE      (countT)0xabe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strcmpIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4c00104.1.1.0.html\"\>4c00104:  WAKEsHOW( "example.simplest.func.102000d.thirdC.c_strcmpIF" )\</A\>
arguments
 pc1P
 pc2P
*/
/**/

/*1*/sCountT thirdC::c_strcmpIF( tinS& tinP , const countT* const pc1P , const countT* const pc2P , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pc1P ) ;
        __Z( pc2P ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    const countT cc1 = ccP ? ccP : c_strlenIF( tinP , pc1P ) ;
    const countT cc2 = ccP ? ccP : c_strlenIF( tinP , pc2P ) ;
    countT ccDo = ccP ;
    if( !ccDo ) ccDo = cc1 < cc2 ? cc1 : cc2 ;

    ZE( sCountT , sgn ) ;
    for( countT offi = 0 ; offi < ccDo && !sgn ; offi ++ ) sgn = pc1P[ offi ] - pc2P[ offi ] ;

    if( !sgn && !ccP )
    {
             if( cc1 < cc2 ) sgn = - 1 ;
        else if( cc1 > cc2 ) sgn =   1 ;
    }
    return sgn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118c.thirdc.c_strcmpif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118d.thirdc.bcanaccessmemoryif BEGIN
#define DDNAME       "3func.3500118d.thirdc.bcanaccessmemoryif"
#define DDNUMB      (countT)0x3500118d
#define IDFILE      (countT)0xabf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
warning: if pbP points into a guard page, the guard page, which works only wo time, will be expended
 for example, if pbP points into the guard page of a thread stack, stack expansion will be disabled
 later, when that stack is exhausted, expansion will not occur
 instead, an exception will be generated
 moral: never call me with a pbP that might point into a thread's stack, or suffer the consequences!
*/
/**/

/*1*/boolT thirdC::bCanAccessMemoryIF( byteT* pbP , countT cbP )/*1*/
{
    BLAMMO ; // WIN32 DOCUMENTATION STATES THAT IsBadWritePtr IS NOT THREAD SAFE AND, SEPARATELY, IS OBSOLETE AND SHOULD NOT BE USED; USE OF THIS FUNCTION HAS BEEN OBSERVED TO CAUSE THE TARGET BYTE TO BE MODIFIED

    ZE( countT , _brcRaw ) ;
    BOSnOtIN( IsBadWritePtr( (voidT*)pbP , cbP ) )
    return !_brcRaw ; //bOk
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118d.thirdc.bcanaccessmemoryif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118e.thirdc.ctrlcif BEGIN
#define DDNAME       "3func.3500118e.thirdc.ctrlcif"
#define DDNUMB      (countT)0x3500118e
#define IDFILE      (countT)0xac0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::ctrlCIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #if defined( __NT__ )

        BOS( WHATgbo , BOSoK , GenerateConsoleCtrlEvent( CTRL_C_EVENT , 0 ) )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118e.thirdc.ctrlcif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118f.thirdc.c_memcpywithcallbackif BEGIN
#define DDNAME       "3func.3500118f.thirdc.c_memcpywithcallbackif"
#define DDNUMB      (countT)0x3500118f
#define IDFILE      (countT)0xac1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
it is illegal to refer to this symbol anywhere but in a tinS member function
 this is written for tinS, although it can be used elsewhere if needed
*/
/**/

/*1*/countT thirdC::c_memcpyWithCallBackIF( byteT* const pbToP , const byteT* const pbFromP , const countT cbP , ifcCountCountFT pFP , countT cArgP )/*1*/
{
    ZE( countT , rc ) ;
    if( !pbToP   ) rc  = BM_HIGH ;
    if( !pbFromP ) rc |= BM_HIGH2 ;
    if( rc ) return rc ;

    if( cbP ) memcpy( pbToP , pbFromP , cbP ) ;

    if( pFP )  rc = (*pFP)( cArgP ) ;

    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500118f.thirdc.c_memcpywithcallbackif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001190.thirdc.postexefilenameif BEGIN
#define DDNAME       "3func.35001190.thirdc.postexefilenameif"
#define DDNUMB      (countT)0x35001190
#define IDFILE      (countT)0xac2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
i evaluate to an address where the caller will find a null terminated string containing the fully qualified file name of the calling exe file
arguments
 none
*/
/**/

/*1*/const osTextT* thirdC::postExeFileNameIF( voidT )/*1*/
{
    static osTextT postr[ TUCK << 1 ] ;

    #if defined( __NT__ )

    if( !postr[ 0 ] )  ;
    {
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetModuleFileName( (HMODULE)0 , postr , sizeof postr ) )
        if( !_brcRaw || _brcRaw == sizeof postr )
        {
            BOSnOtIN( GetLastError() )
            if( _brcRaw == ERROR_INSUFFICIENT_BUFFER ) { BLAMMO ; }
            else                                       { BLAMMO ; }
        }
    }

    #endif

    return postr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001190.thirdc.postexefilenameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001191.thirdc.osprocessorsif BEGIN
#define DDNAME       "3func.35001191.thirdc.osprocessorsif"
#define DDNUMB      (countT)0x35001191
#define IDFILE      (countT)0xac3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::osProcessorsIF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    ZE( countT , cProcessors ) ;
    ZE( countT , maskProcess ) ;
    ZE( countT , maskSystem ) ;
    BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
    HANDLE oshMe = (HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , GetProcessAffinityMask( oshMe , (DWORD*)&maskProcess , (DWORD*)&maskSystem ) )
    BOSpOOP

    while( maskProcess )
    {
        if( maskProcess & 1 ) cProcessors ++ ;
        maskProcess >>= 1 ;
    }

    return cProcessors ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001191.thirdc.osprocessorsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001192.thirdc.diskwalkprivateif BEGIN
#define DDNAME       "3func.35001192.thirdc.diskwalkprivateif"
#define DDNUMB      (countT)0x35001192
#define IDFILE      (countT)0xac4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i walk the directory tree, counting as i go
 all are counted except when the callback function returns 0
 the callback function is also called with a null postNameP at the end of each enumeration of a directory
arguments
 tinP
 cDirsP
 cFilesP
 postNameP
  will be modified
  must be a writeable buffer large enough to hold the longest possible fully qualified directory name plus a terminating '\' followed by a terminating 0
   recommend: use size TUCK << 1
 bQuitP
 pCbfP
 pcArgP
 pModuloDirsP
 pModuloFilesP
*/
/**/

/*1*/voidT thirdC::diskWalkPrivateIF( tinS& tinP , countT& cDirsP , countT& cFilesP , osTextT* const postNameP , const boolT& bQuitP , const flagsT flagsP , diskWalkCBFT pCbfP , countT* const pcArgP , countT* pModuloDirsP , countT* pModuloFilesP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        FV( flDISKwALK , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , strlen( postNameP ) )
    countT costLike = tinP.brcRaw ;
    osTextT* const postSuffix = postNameP + costLike ;
    BOSdOnOTtEST( WHATgbo , strcpy( postSuffix , "*" ) )

    WIN32_FIND_DATA info ;
    BOS( WHATsfr , BOShANDLE , FindFirstFile( postNameP , &info ) )
    if( tinP.bosFail )
    {
        switch( tinP.brcQuery )
        {
            case ERROR_NO_MORE_FILES :
            case ERROR_PATH_NOT_FOUND :
            case ERROR_HOST_UNREACHABLE :                                   //20180602@1653: ADDED TO MAKE WALK OF c :\ WORK (OTHERWISE FAILS FOR postNameP == "d:\DFSRoots\Shared Folders\Company\*")
            case ERROR_ACCESS_DENIED : { tinP.bosFail = 0 ; break ; }
            default :                  { BOSpOOP          ; break ; }
        }
    }

    HANDLE oshFind = (HANDLE)tinP.brcRaw ;
    if( oshFind != INVALID_HANDLE_VALUE )
    {
        while( !bQuitP )
        {
            if( info.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM ) ;
            else if( info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY )
            {
                if( !( F(flagsP) & flDISKwALK_FILESoNLY ) )
                {
                    BOSdOnOTtEST( WHATgbo , strcmp( info.cFileName , "." ) )
                    boolT b1 = tinP.brcRaw ;
                    BOSdOnOTtEST( WHATgbo , strcmp( info.cFileName , ".." ) )
                    boolT b2 = tinP.brcRaw ;
                    if( b1 && b2 )
                    {
                        BOSdOnOTtEST( WHATgbo , strcpy( postSuffix , info.cFileName ) )
                        BOSdOnOTtEST( WHATgbo , strcat( postSuffix , "\\" ) )
        
                        boolT bDoIt = 1 ;

                        //I CANNOT REMEMBER WHY THESE ARE COMMENTED OUT, BUT I DO NEED TO CALL THE CALLBACK; THAT'S THE WHOLE IDEA
                        //boolT bDoIt = pCbfP && ( !pModuloDirsP || !( cDirsP % *pModuloDirsP ) )
                        //    ? tinP.pc Utility[ 0 ] = (countT)&info , (*pCbfP)( tinP , cDirsP , cFilesP , postNameP , pcArgP , pModuloDirsP , pModuloFilesP )
                        //    : 1
                        //;
        
                        if( bDoIt )
                        {
                            cDirsP ++ ;
                            if( pCbfP ) (*pCbfP)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP , pModuloDirsP , pModuloFilesP ) ;
                        }

                        diskWalkPrivateIF( tinP , cDirsP , cFilesP , postNameP , bQuitP , flagsP , pCbfP , pcArgP , pModuloDirsP , pModuloFilesP ) ;
        
                        *postSuffix = 0 ;
                    }
                }
            }
            else if( !( F(flagsP) & flDISKwALK_DIRECTORIESoNLY ) )
            {
                boolT bDoIt = 1 ;

                //I CANNOT REMEMBER WHY THESE ARE COMMENTED OUT, BUT I DO NEED TO CALL THE CALLBACK; THAT'S THE WHOLE IDEA
                //boolT bDoIt = pCbfP && ( !pModuloFilesP || !( cDirsP % *pModuloFilesP ) )
                //    ? ( strcpy( postSuffix , info.cFileName ) , tinP.pc Utility[ 0 ] = (countT)&info , (*pCbfP)( tinP , cDirsP , cFilesP , postNameP , pcArgP , pModuloDirsP , pModuloFilesP ) )
                //    : 1
                //;
    
                if( bDoIt )
                {
                    cFilesP ++ ;
                    BOSdOnOTtEST( WHATgbo , strcpy( postSuffix , info.cFileName ) )
                    if( pCbfP ) (*pCbfP)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP , pModuloDirsP , pModuloFilesP ) ;
                }
            }
    
            BOS( WHATsfr , BOSoK , FindNextFile( oshFind , &info ) ) ;
            if( tinP.bosFail && tinP.brcQuery != ERROR_NO_MORE_FILES ) BOSpOOP ;
            if( !tinP.brcRaw ) break ;
        }
        BOS( WHATsfr , BOSoK , FindClose( oshFind ) ) ;
        BOSpOOP ;

        BOSdOnOTtEST( WHATgbo , strcpy( postSuffix , "" ) )                                                 //20180406@1337: ADDED WITHOUT ANALYSIS
        if( pCbfP )
        {
            _IO_
            (*pCbfP)( tinP , cDirsP , cFilesP , bQuitP , 0 , pcArgP , pModuloDirsP , pModuloFilesP ) ;          //20180406@1337: ADDED WITHOUT ANALYSIS
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001192.thirdc.diskwalkprivateif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001193.thirdc.diskwalkif BEGIN
#define DDNAME       "3func.35001193.thirdc.diskwalkif"
#define DDNUMB      (countT)0x35001193
#define IDFILE      (countT)0xac5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i count files and directories
for max speed, i contain no overhead code
arguments
 tinP
 cDirsP
  normally is set to 0 for the outermost call
  upon return from the outermost call, will contain the resulting count
 cFilesP
  normally is set to 0 for the outermost call
  upon return from the outermost call, will contain the resulting count
 postNameP
  must be the fully qualified name of a directory
  must end with '\'
  must not contain wildcard characters
  examples
   "\\"
   "\\tmp\\"
 bQuitP
  should be ze
  when this becomes nonze, i quit early and return
 pCbfP
  normally is 0
  if not 0 then will be called when either modulo is ze
 pcArgP
  normally is 0
  passed through to callback
  not otherwise used
 pModuloDirsP
  must be 0 if !pCbfP
  must not be 1
  may be 0 if pCbfP
  if 0 then *pCbfP will be called for each file
  if not 0 then *pCbfP will be called whenever !( cFilesP % *pModuloDirsP
 pModuloFilesP
  must be 0 if !pCbfP
  must not be 1
  may be 0 if pCbfP
  if 0 then *pCbfP will be called for each file
  if not 0 then *pCbfP will be called whenever !( cFilesP % *pModuloFilesP
*/
/**/

/*1*/voidT thirdC::diskWalkIF( tinS& tinP , countT& cDirsP , countT& cFilesP , const osTextT* const postNameP , const boolT& bQuitP , const flagsT flagsP , diskWalkCBFT pCbfP , countT* const pcArgP , countT* pModuloDirsP , countT* pModuloFilesP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        FV( flDISKwALK , flagsP ) ;
        if( POOP ) return ;
        countT costLike = c_strlenIF( tinP , postNameP ) ;
        __( costLike < 1 ) ;
        if( POOP ) return ;
        countT cMin = postNameP[ 1 ] == ':' ? 3 : 1 ;
        __( costLike < cMin ) ;
        if( POOP ) return ;
        if( postNameP[ 1 ] == ':' )
        {
            __( postNameP[ 0 ] < 'a' || postNameP[ 0 ] > 'z' ) ;
            __( postNameP[ 2 ] - '\\' ) ;
        }
        else { __( postNameP[ 0 ] - '\\' ) ; }
        __( postNameP[ costLike - 1 ] - '\\' ) ;
        if( POOP ) return ;
    }

    _IO_

    osTextT postBuffer[ TUCK << 1 ] ; //A:ASSUME: THIS IS BIG ENOUGH TO HOLD THE LONGEST POSSIBLE DIRECTORY NAME INCLUDING DRIVE INDICATOR PLUS TERMINATING '\' PLUS TERMINATING 0
    BOSdOnOTtEST( WHATgbo , strcpy( postBuffer , postNameP ) )
    
    diskWalkPrivateIF( tinP , cDirsP , cFilesP , postBuffer , bQuitP , flagsP , pCbfP , pcArgP , pModuloDirsP , pModuloFilesP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001193.thirdc.diskwalkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001199.thirdc.dosflushfilebufferslf BEGIN
#define DDNAME       "3func.35001199.thirdc.dosflushfilebufferslf"
#define DDNUMB      (countT)0x35001199
#define IDFILE      (countT)0xac6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosFlushFileBuffersIF( tinS& tinP , const handleC& handleP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , FlushFileBuffers( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILE ) ) )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.35001199.thirdc.dosflushfilebufferslf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119a.thirdc.mathpowif BEGIN
#define DDNAME       "3func.3500119a.thirdc.mathpowif"
#define DDNUMB      (countT)0x3500119a
#define IDFILE      (countT)0xac7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for fast execution, there is no overhead code in the definition of this function
*/
/**/

/*1*/measure04T thirdC::mathExpIF( tinS& tinP , measure04T xP , measure04T yP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )
        BOSmEASURE04( WHATgbo , pow( xP , yP ) )
        return tinP.brcm04Raw ;
    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119a.thirdc.mathpowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119b.thirdc.os_addressminmax_if BEGIN
#define DDNAME       "3func.3500119b.thirdc.os_addressminmax_if"
#define DDNUMB      (countT)0x3500119b
#define IDFILE      (countT)0xac8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::os_addressMinMax_IF( tinS& tinP , const byteT*& pbMinP , const byteT*& pbMaxP )/*1*/
{
    SYSTEM_INFO info ;
    BOSnOvALUE( WHATgbo , GetSystemInfo( &info ) )

    pbMinP = (const byteT*)info.lpMinimumApplicationAddress ;
    pbMaxP = (const byteT*)info.lpMaximumApplicationAddress ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119b.thirdc.os_addressminmax_if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119c.thirdc.memcommitif BEGIN
#define DDNAME       "3func.3500119c.thirdc.memcommitif"
#define DDNUMB      (countT)0x3500119c
#define IDFILE      (countT)0xac9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::memCommitIF( countT& ecP , const byteT* const pbP , const countT cbP )/*1*/
{
    if( ecP ) { BLAMMO ; }

    ecP = !VirtualAllocExNuma( GetCurrentProcess() , (voidT*)pbP , cbP ,  MEM_COMMIT , PAGE_READWRITE , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119c.thirdc.memcommitif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119e.thirdc.exefromfileextensionif BEGIN
#define DDNAME       "3func.3500119e.thirdc.exefromfileextensionif"
#define DDNUMB      (countT)0x3500119e
#define IDFILE      (countT)0xaca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::exeFromFileExtensionIF( tinS& tinP , osTextT* const postExeP , countT& costaExeP , const osTextT* const postDotExtensionP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postExeP ) ;
        __Z( costaExeP ) ;
        __Z( postDotExtensionP ) ;
        if( POOP ) return ;
        __Z( *postDotExtensionP ) ;
        __Z( *postDotExtensionP == '.' ) ;
        if( POOP ) return ;
    }

    BOS( WHATgbo , BOScOMoK , AssocQueryString( 0 , ASSOCSTR_EXECUTABLE , postDotExtensionP , NULL , postExeP , (DWORD*)&costaExeP ) )
    BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119e.thirdc.exefromfileextensionif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119f.thirdc.openssl_setupif BEGIN
#define DDNAME       "3func.3500119f.thirdc.openssl_setupif"
#define DDNUMB      (countT)0x3500119f
#define IDFILE      (countT)0xacb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_setupIF( voidT )/*1*/
{












    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
                            c_openSsl_setupIF( &ec , processGlobal1I.openSsl_pInitF ) ;
        if( ec ) puts( "openSsl_setupIF / exception caught" ) ;





    #endif




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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.3500119f.thirdc.openssl_setupif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a0.thirdc.openssl_shutdownif BEGIN
#define DDNAME       "3func.350011a0.thirdc.openssl_shutdownif"
#define DDNUMB      (countT)0x350011a0
#define IDFILE      (countT)0xacc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_shutdownIF( voidT )/*1*/
{
    #ifdef __OS2__
    #elif defined( __NT__ )

        //INTENTIONALLY NULL

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a0.thirdc.openssl_shutdownif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a1.thirdc.openssl_getcontextif BEGIN
#define DDNAME       "3func.350011a1.thirdc.openssl_getcontextif"
#define DDNUMB      (countT)0x350011a1
#define IDFILE      (countT)0xacd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_getContextIF( tinS& tinP , handleC& handleP , const osTextT* const postPemCertificatesP , const osTextT* const postPemPrivateKeyP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;





    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        SSL_CTX* pContext = c_openSsl_getContextIF( &ec , processGlobal1I.openSsl_pContextF , processGlobal1I.openSsl_pMethodF , processGlobal1I.openSsl_pPemFileCertF , processGlobal1I.openSsl_pPemFileKeyF , processGlobal1I.openSsl_pCurvesF , postPemCertificatesP , postPemPrivateKeyP ) ;

        if( !ec ) /*etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getContextIF / aok") )*/ ;
        else
        {
            //CS:CODEsYNC: 350011a1 30000003
            if( ec & 1 ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getContextIF / exception caught") ) ;
            if( ec & 2 ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getContextIF / could not obtain context") ) ;
            if( ec & 4 ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getContextIF / could not read certificate [postPemCertificatesP]:  ")+T(postPemCertificatesP) ) ;
            if( ec & 8 ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getContextIF / could not read private key [postPemPrivateKeyP]:    ")+T(postPemPrivateKeyP)   ) ;
        }
        __( ec ) ;

        if( !POOP ) handleP.osF( ifcIDtYPEhANDLE_openSslContext , (countT)pContext ) ;

    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a1.thirdc.openssl_getcontextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a2.thirdc.openssl_getwrapperif BEGIN
#define DDNAME       "3func.350011a2.thirdc.openssl_getwrapperif"
#define DDNUMB      (countT)0x350011a2
#define IDFILE      (countT)0xace


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_getWrapperIF( tinS& tinP , handleC& handleP , const handleC& hContextP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( ~handleP   ) ;
        __Z( handleP.idTypeF() == ifcIDtYPEhANDLE_SOCKET ) ;
        __NZ( handleP.cNoteF() ) ;
        __Z(  ~hContextP ) ;
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        SSL* pWrap        = c_openSsl_getWrapperIF( &ec , processGlobal1I.openSsl_pWrapperF , (SSL_CTX*)hContextP.osF( ifcIDtYPEhANDLE_openSslContext ) ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_getWrapperIF / exception caught") ) ;
        __( ec ) ;
        __Z( pWrap ) ;

        if( !POOP ) handleP.cNoteF() = (countT)pWrap ; //U:: LEAK IF NOT ZE

    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a2.thirdc.openssl_getwrapperif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a3.thirdc.openssl_wrapsocketif BEGIN
#define DDNAME       "3func.350011a3.thirdc.openssl_wrapsocketif"
#define DDNUMB      (countT)0x350011a3
#define IDFILE      (countT)0xacf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_wrapSocketIF( tinS& tinP , const handleC& hWrapperP , const handleC& hSocketP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( ~hWrapperP ) ;
        __Z( ~hSocketP ) ;


        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
                            c_openSsl_wrapSocketIF( &ec , processGlobal1I.openSsl_pWrapF , hSocketP.osF( ifcIDtYPEhANDLE_SOCKET ) , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_wrapSocketIF / exception caught") ) ;
        __( ec ) ;




    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a3.thirdc.openssl_wrapsocketif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a4.thirdc.openssl_shakehandsasclientif BEGIN
#define DDNAME       "3func.350011a4.thirdc.openssl_shakehandsasclientif"
#define DDNUMB      (countT)0x350011a4
#define IDFILE      (countT)0xad0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_shakeHandsAsClientIF( tinS& tinP , const handleC& hWrapperP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
                            c_openSsl_shakeHandsAsClientIF( &ec , processGlobal1I.openSsl_pShakeAsClientF , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_shakeHandsAsClientIF / exception caught") ) ;
        __( ec ) ;




    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a4.thirdc.openssl_shakehandsasclientif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a5.thirdc.openssl_writeif BEGIN
#define DDNAME       "3func.350011a5.thirdc.openssl_writeif"
#define DDNUMB      (countT)0x350011a5
#define IDFILE      (countT)0xad1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/countT thirdC::openSsl_writeIF( tinS& tinP , const handleC& hWrapperP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return 0 ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        countT cbWritten  = c_openSsl_writeIF( &ec , processGlobal1I.openSsl_pWriteF , (SSL*)hWrapperP.cNoteF() , pbP , cbP ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_writeIF / exception caught") ) ;
        __( ec ) ;




    #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a5.thirdc.openssl_writeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a6.thirdc.openssl_readif BEGIN
#define DDNAME       "3func.350011a6.thirdc.openssl_readif"
#define DDNUMB      (countT)0x350011a6
#define IDFILE      (countT)0xad2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/countT thirdC::openSsl_readIF( tinS& tinP , byteT* const pbP , const countT cbP , const handleC& hWrapperP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return 0 ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        countT cbRead     = c_openSsl_readIF( &ec , processGlobal1I.openSsl_pReadF , pbP , cbP , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_readIF / exception caught") ) ;
        __( ec ) ;




    #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a6.thirdc.openssl_readif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a7.thirdc.postpathstatespaceif BEGIN
#define DDNAME       "3func.350011a7.thirdc.postpathstatespaceif"
#define DDNUMB      (countT)0x350011a7
#define IDFILE      (countT)0xad3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::postPathStateSpaceIF( tinS& tinP , osTextT* postP , const countT costaP , const countT idStateSpaceP , const countT idMemorySpaceP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __Z( costaP ) ;
        __NZ( costaP < TUCK ) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    osTextT post9[ 9 ] ;
    post9[ 8 ] = 0 ;

    diskFindHomeIF( tinP , postP , costaP , "ideafarm" ) ;
    c_strcatIF( tinP , postP , "\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\" ) ;
    c_strcatIF( tinP , postP , thirdC::postUserNameIF() ) ;

    c_strcatIF( tinP , postP , "\\" ) ;
    c_itoaForeignIF( post9 , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;
    c_strcatIF( tinP , postP , post9 ) ;

    c_strcatIF( tinP , postP , "\\stateSpaces\\" ) ;
    c_itoaIF( post9 , idStateSpaceP , 0 ) ;
    c_strcatIF( tinP , postP , post9 ) ;

    c_strcatIF( tinP , postP , "\\" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a7.thirdc.postpathstatespaceif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a8.thirdc.openssl_wavebyeif BEGIN
#define DDNAME       "3func.350011a8.thirdc.openssl_wavebyeif"
#define DDNUMB      (countT)0x350011a8
#define IDFILE      (countT)0xad4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_waveByeIF( tinS& tinP , const handleC& hWrapperP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
                            c_openSsl_waveByeIF( &ec , processGlobal1I.openSsl_pWaveByeF , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_waveByeIF / exception caught") ) ;
        __( ec ) ;




    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a8.thirdc.openssl_wavebyeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a9.thirdc.dosfilewindowif BEGIN
#define DDNAME       "3func.350011a9.thirdc.dosfilewindowif"
#define DDNUMB      (countT)0x350011a9
#define IDFILE      (countT)0xad5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::dosFileWindowIF( tinS& tinP , handleC& handleP , const handleC& hFileP , const countT offLoP , const countT offHiP , const countT cbP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        FV(flOPENsHAREDmEMORY,flagsP) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( voidT* , pv ) ;

    #ifdef __OS2__

        BLAMMO ;

    #elif defined( __NT__ )

        SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;

        flagsT osFlagsOpen = F(flagsP) & flOPENsHAREDmEMORY_READoNLY
            ? PAGE_READONLY
            : PAGE_READWRITE
        ;

        BOS( WHATgbo , BOSoK , CreateFileMappingNuma( (voidT*)hFileP.osF( ifcIDtYPEhANDLE_FILE ) , &sa , osFlagsOpen , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) )  //U:: USE OFFSET AND SIZE PARAMS
        BOSpOOP

        if( !POOP )
        {
            HANDLE oshMap = (HANDLE)tinP.brcRaw ;

            const flagsT osFlagsMap = F(flagsP) & flOPENsHAREDmEMORY_READoNLY
                ? FILE_MAP_READ
                : FILE_MAP_ALL_ACCESS
            ;

            BOS( WHATgbo , BOSoK , MapViewOfFileExNuma( oshMap , osFlagsMap , 0 , 0 , 0 , 0 , thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ) ) //U:: USE OFFSET AND SIZE PARAMS
            BOSpOOP

            if( !POOP )
            {
                byteT* pbGot = (byteT*)tinP.brcRaw ;
                {
                    #if defined( __NT__ )

                        PSAPI_WORKING_SET_EX_INFORMATION info ;
                        c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;
                        info.VirtualAddress = (voidT*)pbGot ;
                        BOS( WHATgbo , BOSoK , QueryWorkingSetEx( GetCurrentProcess() , &info , sizeof info ) )
                        BOSpOOP

                        if( !POOP )
                        {
                            if( info.VirtualAttributes.Valid && info.VirtualAttributes.Node != processGlobal1I.idNumaNode - 1 )
                            {
                                //U::EMIT A LOG OR A TRACE
                                BLAMMO ;
                            }
                        }

                    #endif
                }

                handleP.osF( ifcIDtYPEhANDLE_SHAREDmEMORY , (countT)oshMap , 0 , (countT)pbGot ) ;
            }
            else
            {
                BOS( WHATgbo , BOSoK , CloseHandle( oshMap ) )
                BOSpOOP
                oshMap = 0 ;

                BOSdOnOTtEST( WHATgbo , GetLastError() )
            }
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011a9.thirdc.dosfilewindowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011aa.thirdc.s_shutdown1if BEGIN
#define DDNAME       "3func.350011aa.thirdc.s_shutdown1if"
#define DDNUMB      (countT)0x350011aa
#define IDFILE      (countT)0xad6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::s_shutdown1IF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( tinP.monitor.idThread == 1 && !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
    {
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_NOsYSTEMtHREADS ) )
        {
            tinP.pAdamGlobal1->_thirdC_.bQuitKillSocket = 1 ;
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                POOPIE
                while( tinP.pAdamGlobal1->_thirdC_.bQuitKillSocket )
                {
                    ++ s ;
                    dosSleepIF( tinP , TUCK * 0x20 ) ;
                }
            }
        }
        THREADmODE1rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011aa.thirdc.s_shutdown1if END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ab.thirdc.s_connectif BEGIN
#define DDNAME       "3func.350011ab.thirdc.s_connectif"
#define DDNUMB      (countT)0x350011ab
#define IDFILE      (countT)0xad7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::s_connectIF( tinS& tinP , const boolT& bQuitP , handleC& handleP , const countT idPortP , const nicNameC nicNameP , countT cTriesP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __Z( idPortP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    const nicNameC nicName = nicNameP ? nicNameP : nicNameC( NICnAMElOCAL ) ;
    sockaddr_in6 info ;
    c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
    info.sin6_family = AF_INET6 ;
    BOSdOnOTtEST( WHATgbo , htons( (count01T)idPortP ) )
    info.sin6_port = (count01T)tinP.brcRaw ;

    //CS:CODEsYNC: 350011ab 36001036
    countT* pcTo   = (countT*)info.sin6_addr.u.Byte ;
    const countT* pcFrom = nicName ;
    for( countT offi = 0 ; offi < 4 ; offi ++ )
    {
        BOSdOnOTtEST( WHATgbo , htonl( pcFrom[ offi ] ) )
        pcTo[ 3 - offi ] = tinP.brcRaw ;
    }

    boolT bNoQuit = cTriesP == - 1 ;
    boolT bNoQuitEarly = !cTriesP ;
    boolT bFail = 1 ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        do
        {
            if( !handleP ) break ;

            BOSS( WHATsir , BOSfAIL , connect( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , sizeof info ) )

            if( tinP.bosFail )
            {
                #if defined( __OS2__ )
                    //U:
                #elif defined( __NT__ )
                    if( tinP.brcLath == WSAENOTSOCK ) break ; //THIS WILL HAPPEN IF thirdC::s_cancelF IS CALLED ON handleP
                #endif

                ++ s ;
                thirdC::dosSleepIF( tinP , TUCK * 0x40 ) ;
            }
            else
            {
                bFail = 0 ;
                break ;
            }
        }
        while( !POOP && ( bNoQuit || ( bNoQuitEarly && !bQuitP || ( cTriesP && -- cTriesP ) ) ) ) ;
    }

    if( bFail )
    {
        #if defined( __OS2__ )

            BOSdOnOTtEST( WHATgbo , sock_errno() )
            __( tinP.brcRaw - SOCBASEERR ) ;

        #elif defined( __NT__ )

            BOSdOnOTtEST( WHATgbo , WSAGetLastError() )
            __( tinP.brcRaw - WSABASEERR ) ;

        #endif

        __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ab.thirdc.s_connectif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ac.thirdc.s_readif BEGIN
#define DDNAME       "3func.350011ac.thirdc.s_readif"
#define DDNUMB      (countT)0x350011ac
#define IDFILE      (countT)0xad8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT thirdC::s_readIF( tinS& tinP , byteT* const pbP , const countT cbP , handleC& handleP , const flagsT flagsTcpP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( handleP ) ;
        __Z( pbP ) ;
        __Z( cbP ) ;
        FV( flSOCKETcrEAD , flagsP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return 0 ;
    }

    _IO_

    countT cbToDo = cbP ;
    boolT fhok         = !!( F(flagsP) & flSOCKETcrEAD_STILLhUNGRYiSoK ) ;
    boolT fJustOne     = !!( F(flagsP) & flSOCKETcrEAD_JUSToNEmOUTHFUL ) ;
    boolT fTinyNibbles = !!( F(flagsP) & flSOCKETcrEAD_WObYTEpERbITE   ) ;

    ZE( countT , offo ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) , 1 ) ;
        while( !POOP && cbToDo )
        {
            ++ s ;
            countT cbBite = fTinyNibbles
                ? 1
                : cbToDo > 8192
                    ? 8192
                    : cbToDo
            ;
            #if defined( __NT__ )

                BOSnOvALUE( WHATgbo , WSASetLastError( 0 ) )

            #endif

            ZE( sCountT , cbNew ) ;
            BOSS( WHATsir , BOSsOCKETcODE2 , recv( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , pbP + offo , cbBite , flagsTcpP ) )
            BOSpOOP
            if( !POOP ) cbNew = tinP.brcRaw ;

            tinP.odoSockCbRead += cbNew ;
            offo               += cbNew ;
            cbToDo             -= cbNew ;

            if( !cbNew || fJustOne ) break ;
        }
    }

    {
        if( !fhok && !fTinyNibbles && cbToDo ) __( cbToDo ) ;

        //if( tinP.pc Utility[ 0 ] ) { __1 ; } //U:: TO FIND A BUG
    }
    return offo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ac.thirdc.s_readif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ad.thirdc.openssl_shakehandsasserverif BEGIN
#define DDNAME       "3func.350011ad.thirdc.openssl_shakehandsasserverif"
#define DDNUMB      (countT)0x350011ad
#define IDFILE      (countT)0xad9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_shakeHandsAsServerIF( tinS& tinP , const handleC& hWrapperP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
                            c_openSsl_shakeHandsAsServerIF( &ec , processGlobal1I.openSsl_pShakeAsServerF , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_shakeHandsAsServerIF / exception caught") ) ;
        __( ec ) ;




    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ad.thirdc.openssl_shakehandsasserverif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ae.thirdc.openssl_peekif BEGIN
#define DDNAME       "3func.350011ae.thirdc.openssl_peekif"
#define DDNUMB      (countT)0x350011ae
#define IDFILE      (countT)0xada


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/countT thirdC::openSsl_peekIF( tinS& tinP , byteT* const pbP , const countT cbP , const handleC& hWrapperP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( ~hWrapperP ) ;



        if( POOP ) return 0 ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        countT cbRead     = c_openSsl_peekIF( &ec , processGlobal1I.openSsl_pPeekF , pbP , cbP , (SSL*)hWrapperP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_peekIF / exception caught") ) ;
        __( ec ) ;




    #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011ae.thirdc.openssl_peekif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011af.thirdc.openssl_wrapperFreeif BEGIN
#define DDNAME       "3func.350011af.thirdc.openssl_wrapperFreeif"
#define DDNUMB      (countT)0x350011af
#define IDFILE      (countT)0xadb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::openSsl_wrapperFreeIF( tinS& tinP , handleC& handleP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( ~handleP   ) ;
        __Z( handleP.idTypeF() == ifcIDtYPEhANDLE_SOCKET ) ;
        __Z( handleP.cNoteF() ) ;
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
    #elif defined( __NT__ )

        ZE( countT , ec ) ;
        c_openSsl_wrapperFreeIF( &ec , processGlobal1I.openSsl_pWrapperFreeF , (SSL*)handleP.cNoteF() ) ;
        if( ec ) etherC::etTextIF( tinP ).traceF( tinP , T("openSsl_wrapperFreeIF / exception caught") ) ;
        __( ec ) ;

    #endif


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35001* : 3func.350011af.thirdc.openssl_wrapperFreeif END
