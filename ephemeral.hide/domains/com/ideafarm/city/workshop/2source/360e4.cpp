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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4002.grabitc.dt_grabitc BEGIN
#define DDNAME       "3func.360e4002.grabitc.dt_grabitc"
#define DDNUMB      (countT)0x360e4002
#define IDFILE      (countT)0x1410


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::~grabitC( voidT )/*1*/
{
    TINSL
    SCOOP

    _IO_

    if( getNegAM( finger ) != FINGERnEG_GRABITc ) { BLAMMO ; }
    putNegAM( finger , FINGERnEG_BASEgRABc ) ;

    if( !( F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS ) )
    {
        if( !( F(flagsCt2) & flGRABITc_SUPPRESScTdT         ) ) ungrabF( tinP ) ;
        if( !( F(flagsCt2) & flGRABITc_DESIREcHANGEoNdEMAND ) ) thirdC::dosPriorityIF( tinP , idDesire ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4002.grabitc.dt_grabitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4003.grabitc.grabitc BEGIN
#define DDNAME       "3func.360e4003.grabitc.grabitc"
#define DDNUMB      (countT)0x360e4003
#define IDFILE      (countT)0x1411


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::grabitC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , byteT*    pbP             , const countT  ifcIdBitP , grabitC& grabitNUP , countT* const pcKeyP , countT* const pcGrabberOsTidP , countT* const pcGrabberRecurseP , const flagsT flagsP , const countT msNapP , const countT idGrabLayerP ) :/*1*/
baseGrabC( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabitC , ( F(flagsP) & flGRABITc_SHARElAYER ? flBASEgRABc_SHARElAYER : flBASEgRABc_null ) | ( F(flagsP) & flGRABITc_SNEAKYlOVER ? flBASEgRABc_SNEAKYlOVER : flBASEgRABc_null ) , idGrabLayerP ) ,
flagsCt2( flagsP | ( pbP ? flGRABITc_null : flGRABITc_SUPPRESScTdT ) ) ,
offo( pbP && ifcIdBitP >= ifcIDgRABITbIT_min && ifcIdBitP <= ifcIDgRABITbIT_max ? ifcIdBitP - ifcIDgRABITbIT_min : 0 ) ,
bitsDefault( GRABITbYTEiNITIALvALUE ) ,
keyDefault( 0 ) ,
poff_bo
(
    F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? pbP
            ? (byteT*)( pbP          - (byteT*)this )
            : (byteT*)( &bitsDefault - (byteT*)this )
        : pbP
            ? pbP
            : &bitsDefault
) ,
poff_key
(
    F(flagsP) &flGRABITc_UNKEYED
        ? 0
        : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
            ? pcKeyP
                ? (countT*)( (byteT*)pcKeyP      - (byteT*)this )
                : (countT*)( (byteT*)&keyDefault - (byteT*)this )
            : pcKeyP
                ? pcKeyP
                : &keyDefault
) ,
poff_cGrabberOsTid(   F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberOsTidP   - (byteT*)this ) : pcGrabberOsTidP   ) ,
poff_cGrabberRecurse( F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberRecurseP - (byteT*)this ) : pcGrabberRecurseP ) ,
idDesire( 0 ) ,
msNap( msNapP )
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !pcGrabberOsTidP != !pcGrabberRecurseP ) ;
        __( ifcIdBitP < ifcIDgRABITbIT_min ) ;
        __( ifcIdBitP > ifcIDgRABITbIT_max ) ;
        if( POOP ) { BLAMMO ; } ;
    }

    _IO_

    if( F(flagsP) & flGRABITc_RECURSEuSINGtINs )
    {
        byteT* pbo = F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                         // byteT CONTAINING THE BIT TO BE GRABBED
            ? (byteT*)this + (countT)poff_bo
            : poff_bo
        ;

        ZE( countT , offr ) ;
        for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( tinP.ppbGrabitRecurse[ offr ] == pbo ) break ;
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( !tinP.ppbGrabitRecurse[ offr ] )
            {
                tinP.ppbGrabitRecurse[ offr ] = pbo ;
                break ;
            }
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) { BLAMMO ; }
        else
        {
            poff_cGrabberOsTid            = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitOsTid[   offr ]   - (byteT*)this ) : &tinP.pcGrabitOsTid[   offr ] ) ;
            poff_cGrabberRecurse          = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitRecurse[ offr ]   - (byteT*)this ) : &tinP.pcGrabitRecurse[ offr ] ) ;
        }
    }

    for( countT offp = 0 ; offp < sizeof pbPad ; offp ++ ) *(byteT*)&pbPad[ offp ] = GRABITbYTEiNITIALvALUE ;

    if( !( F(flagsCt2) & ( flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS | flGRABITc_DESIREcHANGEoNdEMAND ) ) )
    {
        idDesire = thirdC::dosPriorityIF( tinP ) ;
        thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    }

    __HIGHbIT( ifcIdBitP - ifcIDgRABITbIT_min ) ;

    putNegAM( finger , FINGERnEG_GRABITc ) ;

    if( !( F(flagsCt2) & ( flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS | flGRABITc_SUPPRESScTdT ) ) ) grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4003.grabitc.grabitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4004.grabitc.grabitc BEGIN
#define DDNAME       "3func.360e4004.grabitc.grabitc"
#define DDNUMB      (countT)0x360e4004
#define IDFILE      (countT)0x1412


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::grabitC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , byteT&    bP              , const countT  ifcIdBitP , grabitC& grabitNUP , countT* const pcKeyP , countT* const pcGrabberOsTidP , countT* const pcGrabberRecurseP , const flagsT flagsP , const countT msNapP , const countT idGrabLayerP ) :/*1*/
baseGrabC( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabitC , F(flagsP) & flGRABITc_SHARElAYER ? flBASEgRABc_SHARElAYER : flBASEgRABc_null , idGrabLayerP ) ,
flagsCt2( flagsP                                                     ) ,
offo(        ifcIdBitP >= ifcIDgRABITbIT_min && ifcIdBitP <= ifcIDgRABITbIT_max ? ifcIdBitP - ifcIDgRABITbIT_min : 0 ) ,
bitsDefault( GRABITbYTEiNITIALvALUE ) ,
keyDefault( 0 ) ,
poff_bo
(
    F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)( &bP - (byteT*)this )


        : &bP


) ,
poff_key
(
    F(flagsP) &flGRABITc_UNKEYED
        ? 0
        : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
            ? pcKeyP
                ? (countT*)( (byteT*)pcKeyP      - (byteT*)this )
                : (countT*)( (byteT*)&keyDefault - (byteT*)this )
            : pcKeyP
                ? pcKeyP
                : &keyDefault
) ,
poff_cGrabberOsTid(   F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberOsTidP   - (byteT*)this ) : pcGrabberOsTidP   ) ,
poff_cGrabberRecurse( F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberRecurseP - (byteT*)this ) : pcGrabberRecurseP ) ,
idDesire( 0 ) ,
msNap( msNapP )
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !pcGrabberOsTidP != !pcGrabberRecurseP ) ;
        __( ifcIdBitP < ifcIDgRABITbIT_min ) ;
        __( ifcIdBitP > ifcIDgRABITbIT_max ) ;
        if( POOP ) { BLAMMO ; } ;
    }

    _IO_

    if( F(flagsP) & flGRABITc_RECURSEuSINGtINs )
    {
        byteT* pbo = F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                         // byteT CONTAINING THE BIT TO BE GRABBED
            ? (byteT*)this + (countT)poff_bo
            : poff_bo
        ;

        ZE( countT , offr ) ;
        for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( tinP.ppbGrabitRecurse[ offr ] == pbo ) break ;
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( !tinP.ppbGrabitRecurse[ offr ] )
            {
                tinP.ppbGrabitRecurse[ offr ] = pbo ;
                break ;
            }
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) { BLAMMO ; }
        else
        {
            poff_cGrabberOsTid            = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitOsTid[   offr ]   - (byteT*)this ) : &tinP.pcGrabitOsTid[   offr ] ) ;
            poff_cGrabberRecurse          = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitRecurse[ offr ]   - (byteT*)this ) : &tinP.pcGrabitRecurse[ offr ] ) ;
        }
    }

    for( countT offp = 0 ; offp < sizeof pbPad ; offp ++ ) *(byteT*)&pbPad[ offp ] = GRABITbYTEiNITIALvALUE ;

    if( !( F(flagsCt2) & ( flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS | flGRABITc_DESIREcHANGEoNdEMAND ) ) )
    {
        idDesire = thirdC::dosPriorityIF( tinP ) ;
        thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    }

    __HIGHbIT( ifcIdBitP - ifcIDgRABITbIT_min ) ;

    putNegAM( finger , FINGERnEG_GRABITc ) ;

    if( !( F(flagsCt2) & flGRABITc_SUPPRESScTdT                                              ) ) grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4004.grabitc.grabitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4005.grabitc.grabitc BEGIN
#define DDNAME       "3func.360e4005.grabitc.grabitc"
#define DDNUMB      (countT)0x360e4005
#define IDFILE      (countT)0x1413


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::grabitC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , countT&   cP              , const countT  ifcIdBitP , grabitC& grabitNUP , countT* const pcKeyP , countT* const pcGrabberOsTidP , countT* const pcGrabberRecurseP , const flagsT flagsP , const countT msNapP , const countT idGrabLayerP ) :/*1*/
baseGrabC( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabitC , F(flagsP) & flGRABITc_SHARElAYER ? flBASEgRABc_SHARElAYER : flBASEgRABc_null , idGrabLayerP ) ,
flagsCt2( flagsP                                                     ) ,
offo(        ifcIdBitP >= ifcIDgRABITbIT_min && ifcIdBitP <= ifcIDgRABITbIT_max ? ifcIdBitP - ifcIDgRABITbIT_min : 0 ) ,
bitsDefault( GRABITbYTEiNITIALvALUE ) ,
keyDefault( 0 ) ,
poff_bo
(
    F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)( (byteT*)&cP - (byteT*)this )


        : (byteT*)&cP


) ,
poff_key
(
    F(flagsP) &flGRABITc_UNKEYED
        ? 0
        : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
            ? pcKeyP
                ? (countT*)( (byteT*)pcKeyP      - (byteT*)this )
                : (countT*)( (byteT*)&keyDefault - (byteT*)this )
            : pcKeyP
                ? pcKeyP
                : &keyDefault
) ,
poff_cGrabberOsTid(   F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberOsTidP   - (byteT*)this ) : pcGrabberOsTidP   ) ,
poff_cGrabberRecurse( F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberRecurseP - (byteT*)this ) : pcGrabberRecurseP ) ,
idDesire( 0 ) ,
msNap( msNapP )
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !pcGrabberOsTidP != !pcGrabberRecurseP ) ;
        __( ifcIdBitP < ifcIDgRABITbIT_min ) ;
        __( ifcIdBitP > ifcIDgRABITbIT_max ) ;
        if( POOP ) { BLAMMO ; } ;
    }

    _IO_

    if( F(flagsP) & flGRABITc_RECURSEuSINGtINs )
    {
        byteT* pbo = F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                         // byteT CONTAINING THE BIT TO BE GRABBED
            ? (byteT*)this + (countT)poff_bo
            : poff_bo
        ;

        ZE( countT , offr ) ;
        for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( tinP.ppbGrabitRecurse[ offr ] == pbo ) break ;
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( !tinP.ppbGrabitRecurse[ offr ] )
            {
                tinP.ppbGrabitRecurse[ offr ] = pbo ;
                break ;
            }
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) { BLAMMO ; }
        else
        {
            poff_cGrabberOsTid            = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitOsTid[   offr ]   - (byteT*)this ) : &tinP.pcGrabitOsTid[   offr ] ) ;
            poff_cGrabberRecurse          = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitRecurse[ offr ]   - (byteT*)this ) : &tinP.pcGrabitRecurse[ offr ] ) ;
        }
    }

    for( countT offp = 0 ; offp < sizeof pbPad ; offp ++ ) *(byteT*)&pbPad[ offp ] = GRABITbYTEiNITIALvALUE ;

    if( !( F(flagsCt2) & ( flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS | flGRABITc_DESIREcHANGEoNdEMAND ) ) )
    {
        idDesire = thirdC::dosPriorityIF( tinP ) ;
        thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    }

    __HIGHbIT( ifcIdBitP - ifcIDgRABITbIT_min ) ;

    putNegAM( finger , FINGERnEG_GRABITc ) ;

    if( !( F(flagsCt2) & flGRABITc_SUPPRESScTdT                                              ) ) grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4005.grabitc.grabitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4006.grabitc.grabf BEGIN
#define DDNAME       "3func.360e4006.grabitc.grabf"
#define DDNUMB      (countT)0x360e4006
#define IDFILE      (countT)0x1414


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT grabitC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    SCOOP

    _IO_

    if( tinP.idDesire != ifcTHREADpRIORITY_SPINLOCK ) { BLAMMO ; }

    byteT* pbo = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                         // byteT CONTAINING THE BIT TO BE GRABBED
        ? (byteT*)this + (countT)poff_bo
        : poff_bo
    ;

    countT* pcKey = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (countT*)( (byteT*)this + (countT)poff_key )
        : poff_key
    ;

    countT* pcGOT = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                      // countT CONTAINING THE osTid THAT HAS THE BIT
        ? (countT*)( (byteT*)this + (countT)poff_cGrabberOsTid )
        :                                   poff_cGrabberOsTid
    ;

    countT* pcGR = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                       // countT CONTAINING THE RECURSION COUNTER
        ? (countT*)( (byteT*)this + (countT)poff_cGrabberRecurse )
        : poff_cGrabberRecurse                                    
    ;

    if( pcGOT && *pcGOT == tinP.osTid )             // IF I HAVE ALREADY GRABBED AND AM RECURSING
    {
        if( !pcGR ) { BLAMMO ; }                    // THEN I SHOULD HAVE SET pcGR TO HOLD A RECURSION COUNT

        {
            byteT mask = (byteT)( 1 << offo ) ;
            if( !( *pbo & mask ) ) { BLAMMO ; }     // AND THIS OBJECT'S GRABBED BIT SHOULD BE SET
        }

        registerBegunF( tinP , idLineP , idiFileP , flBASEgRABcrEGISTERbEGUN_RECURSING ) ;
        ++ *pcGR ;
    }
    else
    {
        registerBegunF( tinP , idLineP , idiFileP ) ;

        if( !( F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS ) && F(flagsCt2) & flGRABITc_DESIREcHANGEoNdEMAND )
        {
            idDesire = thirdC::dosPriorityIF( tinP ) ;
            thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
        }

        //byteT savebyte1 ;
        //byteT savebyte2 ;
    
        idLineGrabber  = idLineP ; //THESE ARE INFORMATORY ONLY; THEY ARE NOT RESET; THEY ARE OVERWRITTEN HERE
        idiFileGrabber = idiFileP ; //SINCE THESE VALUES ARE RETAINED WHEN NOT GRABBED, THE MONITOR CAN SEE WHICH GRAB LINES ARE CURRENTLY ACTIVE
        tinP.cYield = 0 ;
        // savebyte1 = *pbo ;

        {
            if( pcKey )
            {
                while( btsKeyedAM( pbo , *pcKey , offo , tinP.monitor.idThread ) )
                {
                    thirdC::osThreadYieldIF( tinP , idLineP , idiFileP , pbBitsP , msNap ) ;
                }
            }
            else
            {
                while( btsAM( pbo , offo ) )
                {
                    thirdC::osThreadYieldIF( tinP , idLineP , idiFileP , pbBitsP , msNap ) ;
                }
            }
        }

        //if( !*pbo ) //TO FIND A BUG
        //{
        //    CONoUTrAW3( "grabitC::grabF [*pcKey]: " , *pcKey , "\r\n" ) ;
        //    LOGrAW3(    "grabitC::grabF [*pcKey]: " , *pcKey , "\r\n" ) ;
        //
        //    ZE( countT* , pcBlammo ) ;
        //    *pcBlammo = 7 ;
        //}

        //savebyte2 = *pbo ;
        countT cYield = tinP.cYield ;
        tinP.cYield = 0 ;
        tinP.cGrabitC_set ++ ; //U:: TO FIND A BUG

        //TO FIND A BUG
        //countT offTraceMe = incv02AM( processGlobal1I.cTrace ) ;
        //if( offTraceMe < sizeof processGlobal1I.pcTrace1 / sizeof processGlobal1I.pcTrace1[ 0 ] )
        //{
        //    processGlobal1I.pcTrace1[ offTraceMe ] = 1 ;            // 1:GRAB 2:UNGRAB
        //    processGlobal1I.pcTrace2[ offTraceMe ] = *pbo ;
        //    processGlobal1I.pcTrace3[ offTraceMe ] = (countT)pbo ;
        //    processGlobal1I.pcTrace4[ offTraceMe ] = offo ;
        //    processGlobal1I.pcTrace5[ offTraceMe ] = tinP.monitor.idThread ;
        //    processGlobal1I.pcTrace6[ offTraceMe ] = savebyte1 ;
        //    processGlobal1I.pcTrace7[ offTraceMe ] = savebyte2 ;
        //    //processGlobal1I.pcTrace6[ offTraceMe ] = idLineP ;
        //    //processGlobal1I.pcTrace7[ offTraceMe ] = idiFileP ;
        //
        //    if( !processGlobal1I.pcTrace2[ offTraceMe ] )
        //    {
        //        countT foo = 2 ;
        //    }
        //}

        //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_PISS )
        //{                                                                                           //U::TO FIND A BUG
        //    countT pcSuffix[] = { 3 , (countT)pbo , offo , 0x1111 } ; //0x1111: "just set bit to 1"  ;  "3" IS LENGTH PREFIX
        //    emitWordsIF( tinP , ifcLINE , IDFILE , pcSuffix , 4 ) ;
        //}

        if( pcGOT ) *pcGOT = tinP.osTid ;
    }

    registerDoneF( tinP , idLineP , idiFileP ) ;
    //tinP.cGrabitC_registered ++ ; //TO FIND A BUG

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4006.grabitc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4007.grabitc.ungrabf BEGIN
#define DDNAME       "3func.360e4007.grabitc.ungrabf"
#define DDNUMB      (countT)0x360e4007
#define IDFILE      (countT)0x1415


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT grabitC::ungrabF( tinS& tinP )/*1*/
{
    SCOOP

    _IO_

    unregisterF( tinP ) ;
    tinP.cGrabitC_unregistered ++ ; //U:: TO FIND A BUG

    byteT* pbo = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)this + (countT)poff_bo
        : poff_bo
    ;

    countT* pcKey = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (countT*)( (byteT*)this + (countT)poff_key )
        : poff_key
    ;

    countT* pcGOT = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (countT*)( (byteT*)this + (countT)poff_cGrabberOsTid )
        : poff_cGrabberOsTid                                    
    ;

    countT* pcGR = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (countT*)( (byteT*)this + (countT)poff_cGrabberRecurse )
        : poff_cGrabberRecurse                                    
    ;

    countT gotMe = tinP.osTid ; // DONE THIS WAY SO THAT GRAB LOGIC IS THE SAME FOR (1) NO RECURSION (2) RECURSION USING grabotC (3) RECURSION USING tinP
 
    if( pcGOT && *pcGOT == tinP.osTid && pcGR && *pcGR ) -- *pcGR ;
    else
    {
        if( pcGOT && *pcGOT == tinP.osTid ) *pcGOT = 0 ;

        //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_PISS )
        //{                                                                                           //U::TO FIND A BUG
        //    countT pcSuffix[] = { 3 , (countT)pbo , offo , 0x1110 } ; //0x1110: "resetting bit to 0"
        //    emitWordsIF( tinP , ifcLINE , IDFILE , pcSuffix , 4 ) ;
        //}

        //tinP.cGrabitC_reset ++ ; //TO FIND A BUG

        //TO FIND A BUG
        //byteT mask = (byteT)( 1 << offo ) ;

        //TO FIND A BUG
        //countT offTraceMe = incv02AM( processGlobal1I.cTrace ) ;
        //if( offTraceMe < sizeof processGlobal1I.pcTrace1 / sizeof processGlobal1I.pcTrace1[ 0 ] )
        //{
        //    processGlobal1I.pcTrace1[ offTraceMe ] = 2 ;            // 1:GRAB 2:UNGRAB
        //    processGlobal1I.pcTrace2[ offTraceMe ] = *pbo ;
        //    processGlobal1I.pcTrace3[ offTraceMe ] = (countT)pbo ;
        //    processGlobal1I.pcTrace4[ offTraceMe ] = offo ;
        //    processGlobal1I.pcTrace5[ offTraceMe ] = tinP.monitor.idThread ;
        //    //processGlobal1I.pcTrace6[ offTraceMe ] = idLineP ;
        //    //processGlobal1I.pcTrace7[ offTraceMe ] = idiFileP ;
        //}

        //TO FIND A BUG
        //countT savebyte1 = *pbo ;
        //if( offTraceMe < sizeof processGlobal1I.pcTrace1 / sizeof processGlobal1I.pcTrace1[ 0 ] && !processGlobal1I.pcTrace2[ offTraceMe ] )
        //{
        //    countT foo = 2 ;
        //}

        ZE( boolT , bOk ) ;
        if( pcKey )
        {
            bOk = btrKeyedAM( pbo , *pcKey , offo , tinP.monitor.idThread ) ;
            if( !bOk )
                *(countT*)0 = 1 ; //INTENTIONAL BLAMMO
        }
        else
        {
            bOk = btrAM( pbo , offo ) ;
        }

        if( !bOk )
        //if( !( pcKey ? btrKeyedAM( pbo , *pcKey , offo , tinP.monitor.idThread ) : btrAM( pbo , offo ) ) )
        {
            *(countT*)0 = 1 ; //INTENTIONAL BLAMMO

            //for( countT offPass = 0 ; offPass <= 0 ; offPass ++ )
            //{
            //    LOGrAW3( "pcTrace dump: BEGIN [offPass]: " , offPass , "\r\n" ) ;
            //    for( countT offHe = 0 ; offHe < processGlobal1I.cTrace ; offHe ++ )
            //    {
            //        if( offPass || processGlobal1I.pcTrace3[ offHe ] == (countT)pbo && processGlobal1I.pcTrace4[ offHe ] == offo )
            //        {
            //            LOGrAWf( "" , processGlobal1I.pcTrace1[ offHe ] , "    " , processGlobal1I.pcTrace2[ offHe ] , "    " , processGlobal1I.pcTrace3[ offHe ] , "    " , processGlobal1I.pcTrace4[ offHe ] , "    " , processGlobal1I.pcTrace5[ offHe ] , "    " , processGlobal1I.pcTrace6[ offHe ] , "    " , processGlobal1I.pcTrace7[ offHe ] , "\r\n" ) ;
            //        }
            //    }
            //    LOGrAW( "pcTrace dump: END\r\nnapping for 4000 ms..." ) ;
            //}

            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            thirdC::dosSleepRawIF( tinP , 4000 ) ;
            THREADmODE1rESTORE
            LOGrAW( " ... awakening\r\n" ) ;

            // countT savebyte2 = *pbo ;
            // 
            // LOGrAW7(                  "\r\ngrabitC::ungrabF error: [offo,savebyte1,savebyte2]: " , offo , " " , savebyte1 , " " , savebyte2 , "\r\n" ) ;
            // etherC::etRockIF( tinP ).traceF( tinP , T("grabitC::ungrabF error: [offo,savebyte1,savebyte2]: ")+TF2(offo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(savebyte1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(savebyte2,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            // 
            // LOGrAW5(                  "\r\ngrabitC::ungrabF error: already ungrabbed [tinP.cGrabitC_set,tinP.cGrabitC_reset]: " ,    tinP.cGrabitC_set                                           , " " ,    tinP.cGrabitC_reset , "\r\n" ) ;
            // etherC::etRockIF( tinP ).traceF( tinP , T("grabitC::ungrabF error: already ungrabbed [tinP.cGrabitC_set,tinP.cGrabitC_reset]: ")+TF2(tinP.cGrabitC_set,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(tinP.cGrabitC_reset,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            // 
            // LOGrAW7(                  "\r\ngrabitC::ungrabF error: already ungrabbed; memory has been trashed if these numbers don't match [correct,*pbo,bitsDefault]: " ,    GRABITbYTEiNITIALvALUE                                           , " " ,    *pbo                                           , " " ,    bitsDefault                                           , "\r\n" ) ;
            // etherC::etRockIF( tinP ).traceF( tinP , T("grabitC::ungrabF error: already ungrabbed; memory has been trashed if these numbers don't match [correct,*pbo,bitsDefault]: ")+TF2(GRABITbYTEiNITIALvALUE,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(*pbo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(bitsDefault,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            // 
            // for( countT offp = 0 ; offp < sizeof pbPad ; offp ++ )
            // {
            //     LOGrAW5(                      "    should match [correct,pbPad[offp]]: " ,    GRABITbYTEiNITIALvALUE                                           , " " ,    pbPad[ offp ] , "\r\n" ) ;
            //     etherC::etRockIF( tinP ).traceF( tinP , T("    should match [correct,pbPad[offp]]: ")+TF2(GRABITbYTEiNITIALvALUE,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pbPad[offp],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            // }

            //if( tinP.pc Utility[ 0 ] )
            //{
            //    listingC& listing = *(listingC*)( pbo - sizeof( count01T ) ) ;
            //    count01T cRef        =        listing.cRefPrivate2F() ;
            //    byteT    flagsi      =        listing.flagsF() ;
            //    byteT    idTypeDatum = (byteT)listing.idTypeDatumF() ;
            //    etherC::etRockIF( tinP ).traceF( tinP , T("[cGrabitC_set,cGrabitC_reset]: ")+TF2(tinP.cGrabitC_set,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(tinP.cGrabitC_reset,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            //    etherC::etRockIF( tinP ).traceF( tinP , T("btrAM failed / cRef: ")+TF2(cRef,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ; flagsi" ": ")+TF2(flagsi,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ; idTypeDatum: ")+TF2(idTypeDatum,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            //}
            BLAMMO ;
            //20170106@0926: tmReportF in 4fb
            //20170529@0730: 651 during startup
        }

        //U::PROD: if( pbo && !btrAM( pbo , offo ) ) { BLAMMO ; } //U::20150816@1011 PISS WHILE BUILDING ARCHIVE REPORT FOR 2009; 20150922@0000 PISS WHILE BUILDING ARCHIVE REPORT FOR 2015; 20151129@1642 monitor tmReportF
        
        if( !( F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS ) && F(flagsCt2) & flGRABITc_DESIREcHANGEoNdEMAND ) thirdC::dosPriorityIF( tinP , idDesire ) ;
    }

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4007.grabitc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4008.grabitc.grabitc BEGIN
#define DDNAME       "3func.360e4008.grabitc.grabitc"
#define DDNUMB      (countT)0x360e4008
#define IDFILE      (countT)0x1416


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::grabitC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , listingC& aptP                                      , grabitC& grabitNUP , countT* const pcKeyP , countT* const pcGrabberOsTidP , countT* const pcGrabberRecurseP , const flagsT flagsP , const countT msNapP , const countT idGrabLayerP ) :/*1*/
baseGrabC( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabitC , F(flagsP) & flGRABITc_SHARElAYER ? flBASEgRABc_SHARElAYER : flBASEgRABc_null , idGrabLayerP ) ,
flagsCt2( flagsP                                                     ) ,
offo( 0                                                                                               ) ,
bitsDefault( GRABITbYTEiNITIALvALUE ) ,
keyDefault( 0 ) ,
poff_bo
(
    F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)( &aptP.flagsRefF() - (byteT*)this )


        : &aptP.flagsRefF()


) ,
poff_key
(
    F(flagsP) &flGRABITc_UNKEYED
        ? 0
        : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
            ? pcKeyP
                ? (countT*)( (byteT*)pcKeyP      - (byteT*)this )
                : (countT*)( (byteT*)&keyDefault - (byteT*)this )
            : pcKeyP
                ? pcKeyP
                : &keyDefault
) ,
poff_cGrabberOsTid(   F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberOsTidP   - (byteT*)this ) : pcGrabberOsTidP   ) ,
poff_cGrabberRecurse( F(flagsP) & flGRABITc_RECURSEuSINGtINs ? 0 : F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)pcGrabberRecurseP - (byteT*)this ) : pcGrabberRecurseP ) ,
idDesire( 0 ) ,
msNap( msNapP )
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !pcGrabberOsTidP != !pcGrabberRecurseP ) ;


        if( POOP ) { BLAMMO ; } ;
    }

    _IO_

    if( F(flagsP) & flGRABITc_RECURSEuSINGtINs )
    {
        byteT* pbo = F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES                                         // byteT CONTAINING THE BIT TO BE GRABBED
            ? (byteT*)this + (countT)poff_bo
            : poff_bo
        ;

        ZE( countT , offr ) ;
        for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( tinP.ppbGrabitRecurse[ offr ] == pbo ) break ;
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) for( offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
        {
            if( !tinP.ppbGrabitRecurse[ offr ] )
            {
                tinP.ppbGrabitRecurse[ offr ] = pbo ;
                break ;
            }
        }

        if( offr == CmAXgRABITrECURSEiNtINs ) { BLAMMO ; }
        else
        {
            poff_cGrabberOsTid            = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitOsTid[   offr ]   - (byteT*)this ) : &tinP.pcGrabitOsTid[   offr ] ) ;
            poff_cGrabberRecurse          = ( F(flagsP) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES ? (countT*)( (byteT*)&tinP.pcGrabitRecurse[ offr ]   - (byteT*)this ) : &tinP.pcGrabitRecurse[ offr ] ) ;
        }
    }

    for( countT offp = 0 ; offp < sizeof pbPad ; offp ++ ) *(byteT*)&pbPad[ offp ] = GRABITbYTEiNITIALvALUE ;

    if( !( F(flagsCt2) & ( flGRABITc_IMAGEiSvISIBLEtOoTHERtHREADS | flGRABITc_DESIREcHANGEoNdEMAND ) ) )
    {
        idDesire = thirdC::dosPriorityIF( tinP ) ;
        thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    }



    putNegAM( finger , FINGERnEG_GRABITc ) ;

    if( !( F(flagsCt2) & flGRABITc_SUPPRESScTdT                                              ) ) grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4008.grabitc.grabitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400b.grabitc.operator_bytet_ptr_ref BEGIN
#define DDNAME       "3func.360e400b.grabitc.operator_bytet_ptr_ref"
#define DDNUMB      (countT)0x360e400b
#define IDFILE      (countT)0x1417


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/grabitC::operator byteT&( voidT )/*1*/
{
    TINSL
    SCOOP

    byteT* pbo = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)this + (countT)poff_bo
        : poff_bo
    ;

    return *pbo ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400b.grabitc.operator_bytet_ptr_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400c.grabitc.aimf BEGIN
#define DDNAME       "3func.360e400c.grabitc.aimf"
#define DDNUMB      (countT)0x360e400c
#define IDFILE      (countT)0x1418


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//
                                                     
/*
*/

/**/

/*1*/voidT grabitC::aimF( tinS& tinP , flagsT flagsMaskP , byteT* const pbP , const countT ifcIdBitP , countT* const pcGrabberOsTidP , countT* const pcGrabberRecurseP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flGRABITcaIMmASK , flagsMaskP ) ;
        __( !pcGrabberOsTidP != !pcGrabberRecurseP ) ;
        if( POOP ) return ;
    }

    _IO_

    if( flagsMaskP == flGRABITcaIMmASK_null ) flagsMaskP = flGRABITcaIMmASK_pbP | flGRABITcaIMmASK_ifcIdBitP | flGRABITcaIMmASK_pcGrabberOsTidP | flGRABITcaIMmASK_pcGrabberRecurseP ;

    if( F(flagsMaskP) & flGRABITcaIMmASK_ifcIdBitP ) offo = ifcIdBitP - ifcIDgRABITbIT_min ;

    if( F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES )
    {
        if( F(flagsMaskP) & flGRABITcaIMmASK_pbP ) poff_bo = pbP
            ? (byteT*)( pbP          - (byteT*)this )
            : (byteT*)( &bitsDefault - (byteT*)this )
        ;

        if( F(flagsMaskP) & flGRABITcaIMmASK_pcGrabberOsTidP   ) poff_cGrabberOsTid   = (countT*)( (byteT*)pcGrabberOsTidP   - (byteT*)this ) ;
        if( F(flagsMaskP) & flGRABITcaIMmASK_pcGrabberRecurseP ) poff_cGrabberRecurse = (countT*)( (byteT*)pcGrabberRecurseP - (byteT*)this ) ;
    }
    else
    {
        if( F(flagsMaskP) & flGRABITcaIMmASK_pbP ) poff_bo = pbP
            ? pbP
            : &bitsDefault
        ;

        if( F(flagsMaskP) & flGRABITcaIMmASK_pcGrabberOsTidP   ) poff_cGrabberOsTid   = pcGrabberOsTidP ;
        if( F(flagsMaskP) & flGRABITcaIMmASK_pcGrabberRecurseP ) poff_cGrabberRecurse = pcGrabberRecurseP ;
    }

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400c.grabitc.aimf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400e.grabitc.resetf BEGIN
#define DDNAME       "3func.360e400e.grabitc.resetf"
#define DDNUMB      (countT)0x360e400e
#define IDFILE      (countT)0x1419


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT grabitC::resetF( tinS& tinP )/*1*/
{
    SCOOP

    _IO_

    if( F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES )
    {
        if( (countT)poff_cGrabberOsTid   != - (countT)this ) *(countT*)( (byteT*)this + (countT)poff_cGrabberOsTid   ) = 0 ;
        if( (countT)poff_cGrabberRecurse != - (countT)this ) *(countT*)( (byteT*)this + (countT)poff_cGrabberRecurse ) = 0 ;
    }
    else
    {
        if( poff_cGrabberOsTid   ) *poff_cGrabberOsTid   = 0 ;
        if( poff_cGrabberRecurse ) *poff_cGrabberRecurse = 0 ;
    }

    //ctCheckF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e400e.grabitc.resetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4010.grabitc.ctcheckf BEGIN
#define DDNAME       "3func.360e4010.grabitc.ctcheckf"
#define DDNUMB      (countT)0x360e4010
#define IDFILE      (countT)0x141a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#if defined( NEVERdEFINED )

/*1*/voidT grabitC::ctCheckF( voidT )/*1*/
{
    TINSL   //U::NONCONFORMANT.  ADD A tinS& tinP PARAMETER

    SCOOP

    byteT* pbo = F(flagsCt2) & flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES
        ? (byteT*)this + (countT)poff_bo
        : poff_bo
    ;

    //20170925@1615:  THE FOLLOWING LINE CAUSES *pbo TO BE MODIIED, A DIFFICULT BUG TO HAVE FOUND
    //U:: TO FIND A BUG: if( thirdC::bCanAccessMemoryIF( pbo , sizeof( countT ) ) && ( getNegAM( *(countT*)pbo ) == FINGERnEG_GRABc || getNegAM( *(countT*)pbo ) == FINGERnEG_GRABOTc ) ) { BLAMMO ; } // ENSURES THAT A pandle FOR ME IS NEVER CAST TO grabC*
}

#endif

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e4* : 3func.360e4010.grabitc.ctcheckf END
