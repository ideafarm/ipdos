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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a002.arrayc.dt_arrayc BEGIN
#define DDNAME       "3func.3603a002.arrayc.dt_arrayc"
#define DDNUMB      (countT)0x3603a002
#define IDFILE      (countT)0x114f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1550002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/arrayC::~arrayC( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    if( pba ) etherC::etRockIF( tinP ).delF( tinP , pba ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a002.arrayc.dt_arrayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a003.arrayc.arrayc BEGIN
#define DDNAME       "3func.3603a003.arrayc.arrayc"
#define DDNUMB      (countT)0x3603a003
#define IDFILE      (countT)0x1150


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1550003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/arrayC::arrayC( tinS& tinP , const countT cbeP , const countT ceP )/*1*/ :
cbe( cbeP ) ,
pba( 0 ) ,
cba( cbeP * ceP ) ,
offEndHighWater( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    if( cba )
    {
        etherC::etRockIF( tinP ).newF( tinP , LF , pba , cba ) ; ___( pba ) ;
        if( pba ) thirdC::c_memsetIF( tinP , pba , cba ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a003.arrayc.arrayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a004.arrayc.operator_element BEGIN
#define DDNAME       "3func.3603a004.arrayc.operator_element"
#define DDNUMB      (countT)0x3603a004
#define IDFILE      (countT)0x1151


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1550004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/byteT& arrayC::operator []( const countT offP )/*1*/
{
    static byteT bnu ;

    TINSL

    IFbEcAREFUL
    {
        if( POOP ) { bnu = 0 ; return bnu ; }
        __( offP > 1 << SB * sizeof( countT ) - 1 ) ;
        if( POOP ) { bnu = 0 ; return bnu ; }
    }

    _IO_
    countT cbNeeded = cbe * ( 1 + offP ) ;
    if( cba < cbNeeded )
    {
        countT cbaNew = 1 ;
        while( cbaNew && cbaNew < cbNeeded ) cbaNew <<= 1 ;
        __Z( cbaNew ) ;

        if( POOP ) { BLAMMO ; }
        else
        {
            byteT* pbd = pba ; pba = 0 ;
            countT cbd = cba ; cba = cbaNew ;

            etherC& etRock = etherC::etRockIF( tinP ) ;
            etRock.newF( tinP , LF , pba , cbaNew ) ; ___( pba ) ;
            if( pbd ) thirdC::c_memcpyIF( tinP , pba , pbd , cbd ) ;
            etRock.delF( tinP , pbd ) ;
            if( cba > cbd ) thirdC::c_memsetIF( tinP , pba + cbd , cba - cbd ) ;
        }
    }

    if( offEndHighWater < cbNeeded ) offEndHighWater = cbNeeded ;
    return POOP ? bnu : pba[ cbe * offP ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a004.arrayc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a005.arrayc.trimf BEGIN
#define DDNAME       "3func.3603a005.arrayc.trimf"
#define DDNUMB      (countT)0x3603a005
#define IDFILE      (countT)0x1152


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$trimF.0.html\"\>instances\</A\>
\<A HREF=\"5.1550005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT arrayC::trimF( tinS& tinP , const countT ceP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    countT cbNew = cbe * ceP ;
    if( !cbNew ) { PUSE( tinP , pba ) ; pba = 0 ; offEndHighWater = cba = 0 ; }
    else if( cba < cbNew ) (*this)[ ceP - 1 ] ;
    else if( cba > cbNew )
    {
        byteT*  pbd = pba ; pba = 0 ;
        countT  cbd = cba ; cba = cbNew ;

        etherC& etRock = etherC::etRockIF( tinP ) ;
        etRock.newF( tinP , LF , pba , cba ) ; ___( pba ) ;
        thirdC::c_memcpyIF( tinP , pba , pbd , cba ) ;
        etRock.delF( tinP , pbd ) ;

        if( offEndHighWater > cba ) offEndHighWater = cba ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a005.arrayc.trimf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a006.arrayc.snapf BEGIN
#define DDNAME       "3func.3603a006.arrayc.snapf"
#define DDNUMB      (countT)0x3603a006
#define IDFILE      (countT)0x1153


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT arrayC::snapF( tinS& tinP , soulC& slP )/*1*/
{
    slP << offEndHighWater ;
    if( offEndHighWater ) slP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pba , offEndHighWater , flSOULiTEM_null , flSOULsHIFTlEFTmODE_null , 0 , 0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a006.arrayc.snapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a007.arrayc.restoref BEGIN
#define DDNAME       "3func.3603a007.arrayc.restoref"
#define DDNUMB      (countT)0x3603a007
#define IDFILE      (countT)0x1154


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT arrayC::restoreF( tinS& tinP , soulC& slP )/*1*/
{
    //A:ASSUME: trimF HAS NOT SHORTENED pba; FOR SPEED, THIS IS NOT CHECKED
    //IT IS ILLEGAL TO CALL trimF BETWEEN CALLING snapF AND CALLING restoreF

    ZE( countT , oehwNew ) ;
    slP >> oehwNew ;

    trimF( tinP , oehwNew / cbe ) ;

    if( oehwNew ) slP.shiftRightF( tinP , pba , oehwNew , ifcIDtYPEsOULiTEM_byteTptr ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a007.arrayc.restoref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a008.arrayc.operator_assign BEGIN
#define DDNAME       "3func.3603a008.arrayc.operator_assign"
#define DDNUMB      (countT)0x3603a008
#define IDFILE      (countT)0x1155


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/arrayC& arrayC::operator =( const arrayC& aP )/*1*/
{
    TINSL

    _IO_

    if( cbe != aP.cbe ) { BLAMMO ; }

    if( cba < aP.offEndHighWater )
    {
        etherC& etRock = etherC::etRockIF( tinP ) ;
        etRock.delF( tinP , pba ) ;
        cba = aP.offEndHighWater ;
        etRock.newF( tinP , LF , pba , cba ) ; ___( pba ) ;
    }

    offEndHighWater = aP.offEndHighWater ;
    if( offEndHighWater ) thirdC::c_memcpyIF( tinP , pba , aP.pba , offEndHighWater ) ;

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a008.arrayc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a009.arrayc.operator_call BEGIN
#define DDNAME       "3func.3603a009.arrayc.operator_call"
#define DDNUMB      (countT)0x3603a009
#define IDFILE      (countT)0x1156


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT arrayC::operator ()( const byteT* const pbTestP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pbTestP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , idFound ) ;
    countT cElts = offEndHighWater / cbe ;

    if( cbe == sizeof( countT ) )
    {
        countT cTest = *(countT*)pbTestP ;
        countT* pcElt = (countT*)pba ;
        for( countT offi = 0 ; offi < cElts ; offi ++ )
        {
            if( cTest == pcElt[ offi ] )
            {
                idFound = offi + 1 ;
                break ;
            }
        }
    }
    else
    {
        byteT* pbi = pba ;
        byteT* pbe = pba + offEndHighWater ;

        for(;;)
        {
            BOSdOnOTtEST( WHATgbo , memcmp( pbTestP , pbi , cbe ) )
            if( !tinP.brcRaw || pbi >= pbe ) break ;
            pbi += cbe ;
        }

        if( pbi < pbe ) idFound = 1 + ( pbi - pba ) / cbe ;
    }
    return idFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a009.arrayc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a00a.arrayc.operator_call BEGIN
#define DDNAME       "3func.3603a00a.arrayc.operator_call"
#define DDNUMB      (countT)0x3603a00a
#define IDFILE      (countT)0x1157


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT arrayC::operator ()( const countT cTestP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( cbe < sizeof( countT ) ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , idFound ) ;
    countT cElts = offEndHighWater / cbe ;

    byteT* pbi = pba ;
    byteT* pbe = pba + offEndHighWater ;
    while( cTestP != *(countT*)pbi && pbi < pbe ) pbi += cbe ;
    if( pbi < pbe ) idFound = 1 + ( pbi - pba ) / cbe ;
    return idFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603a* : 3func.3603a00a.arrayc.operator_call END
