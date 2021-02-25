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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b001.winpulpoldc.dt_winpulpoldc BEGIN
#define DDNAME       "3func.3609b001.winpulpoldc.dt_winpulpoldc"
#define DDNUMB      (countT)0x3609b001
#define IDFILE      (countT)0x1316


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/winPulpOldC::~winPulpOldC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b001.winpulpoldc.dt_winpulpoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b002.winpulpoldc.winpulpoldc BEGIN
#define DDNAME       "3func.3609b002.winpulpoldc.winpulpoldc"
#define DDNUMB      (countT)0x3609b002
#define IDFILE      (countT)0x1317


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/winPulpOldC::winPulpOldC( tinS& tinP , etherC& etherP , paperOldC& paperP , backOldC& backP , handleC& hDrawWindowP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
pulpOldC( tinP , etherP , paperP , backP , pPaperToBackCBFP , cPaperToBackArgP ) ,
bitmapNormal( tinP , etherP , hDrawWindowP ) ,
bitmapNull( tinP , etherP , hDrawWindowP , 1 , 1 ) ,
stqBitmapScratch( tinP , sizeof( bitmapOldC ) ) ,
pHndDrawBitmap( 0 ) ,
snapStaqsBeginNU( 0 ) ,
stqr_color(                       tinP , sizeof( count3S ) ) ,
stqr_m01FloatRight(               tinP ) , stqr_m01FloatRight_A(     tinP ) , stqr_m01FloatRight_B(     tinP ) , stqr_m01FloatRight_C(     tinP ) , stqr_m01FloatRight_D(     tinP ) ,
stqr_m01FloatUp(                  tinP ) , stqr_m01FloatUp_A(        tinP ) , stqr_m01FloatUp_B(        tinP ) , stqr_m01FloatUp_C(        tinP ) , stqr_m01FloatUp_D(        tinP ) ,
stqr_m01ColHotPoint(              tinP ) , stqr_m01ColHotPoint_A(    tinP ) , stqr_m01ColHotPoint_B(    tinP ) , stqr_m01ColHotPoint_C(    tinP ) , stqr_m01ColHotPoint_D(    tinP ) ,
stqr_m01RowHotPoint(              tinP ) , stqr_m01RowHotPoint_A(    tinP ) , stqr_m01RowHotPoint_B(    tinP ) , stqr_m01RowHotPoint_C(    tinP ) , stqr_m01RowHotPoint_D(    tinP ) ,
stqr_mCosHotAngle(                tinP ) , stqr_mHotAngle_A(         tinP ) , stqr_mHotAngle_B(         tinP ) , stqr_mHotAngle_C(         tinP ) , stqr_mHotAngle_D(         tinP ) ,
stqr_mSinHotAngle(                tinP ) ,
stqr_m01ColMirrorPoint(           tinP ) , stqr_m01ColMirrorPoint_A( tinP ) , stqr_m01ColMirrorPoint_B( tinP ) , stqr_m01ColMirrorPoint_C( tinP ) , stqr_m01ColMirrorPoint_D( tinP ) ,
stqr_m01RowMirrorPoint(           tinP ) , stqr_m01RowMirrorPoint_A( tinP ) , stqr_m01RowMirrorPoint_B( tinP ) , stqr_m01RowMirrorPoint_C( tinP ) , stqr_m01RowMirrorPoint_D( tinP ) ,
stqr_mCosMirrorAngle(             tinP ) , stqr_mMirrorAngle_A(      tinP ) , stqr_mMirrorAngle_B(      tinP ) , stqr_mMirrorAngle_C(      tinP ) , stqr_mMirrorAngle_D(      tinP ) ,
stqr_mSinMirrorAngle(             tinP ) ,
stqr_mColScale(                   tinP ) , stqr_mColScale_A(         tinP ) , stqr_mColScale_B(         tinP ) , stqr_mColScale_C(         tinP ) , stqr_mColScale_D(         tinP ) ,
stqr_mRowScale(                   tinP ) , stqr_mRowScale_A(         tinP ) , stqr_mRowScale_B(         tinP ) , stqr_mRowScale_C(         tinP ) , stqr_mRowScale_D(         tinP ) ,
stqr_mColShear1(                  tinP ) , stqr_mColShear1_A(        tinP ) , stqr_mColShear1_B(        tinP ) , stqr_mColShear1_C(        tinP ) , stqr_mColShear1_D(        tinP ) ,
stqr_mColShear2(                  tinP ) , stqr_mColShear2_A(        tinP ) , stqr_mColShear2_B(        tinP ) , stqr_mColShear2_C(        tinP ) , stqr_mColShear2_D(        tinP ) ,
stqr_mColShear3(                  tinP ) , stqr_mColShear3_A(        tinP ) , stqr_mColShear3_B(        tinP ) , stqr_mColShear3_C(        tinP ) , stqr_mColShear3_D(        tinP ) ,
stqr_mRowShear1(                  tinP ) , stqr_mRowShear1_A(        tinP ) , stqr_mRowShear1_B(        tinP ) , stqr_mRowShear1_C(        tinP ) , stqr_mRowShear1_D(        tinP ) ,
stqr_mRowShear2(                  tinP ) , stqr_mRowShear2_A(        tinP ) , stqr_mRowShear2_B(        tinP ) , stqr_mRowShear2_C(        tinP ) , stqr_mRowShear2_D(        tinP ) ,
stqr_mRowShear3(                  tinP ) , stqr_mRowShear3_A(        tinP ) , stqr_mRowShear3_B(        tinP ) , stqr_mRowShear3_C(        tinP ) , stqr_mRowShear3_D(        tinP ) ,
snapStaqsEndNU( 0 ) ,
hFont( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hPen( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hBrush( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b002.winpulpoldc.winpulpoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b003.winpulpoldc.snapf BEGIN
#define DDNAME       "3func.3609b003.winpulpoldc.snapf"
#define DDNUMB      (countT)0x3609b003
#define IDFILE      (countT)0x1318


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT winPulpOldC::snapF( tinS& tinP , etherC& etherP , const boolT bRestoreP , countT* const pczIdAdamP )/*1*/
{
    _IO_
    snapBaseF( tinP , etherP , bRestoreP , pczIdAdamP ) ;
    if( bRestoreP )
    {
        cacheF( tinP , 0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b003.winpulpoldc.snapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b004.winpulpoldc.purgef BEGIN
#define DDNAME       "3func.3609b004.winpulpoldc.purgef"
#define DDNUMB      (countT)0x3609b004
#define IDFILE      (countT)0x1319


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT winPulpOldC::purgeF( tinS& tinP , etherC& etherP , const flagsT flagsP )/*1*/
{
    _IO_

    const boolT bEmpty  = F(flagsP) & flPAPERrESET_LEAVEeMPTY ;
    const boolT bNoDraw = F(flagsP) & flPAPERrESET_NOdRAW ;
    while( stqr_color )
    {
        count3S c3c ;
        byteT* pbc = (byteT*)&c3c ;
        stqr_color >> pbc ;

        if( !bNoDraw )
        {
            winPulpOldC& pulp = *(winPulpOldC*)this ;
                
            //U::MIGRATE ALL BASE OS CODE TO thirdC, BUT DO IT IN A WAY THAT PRESERVES SPEEDINESS
            //handleC hToolOld( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
            //handleC hTool( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
            //hTool.osF( tinP , ifcIDtYPEhANDLE_DRAWINGtOOL , HPEN( c3c.c1 ) ) ;
            //thirdC::winSelectObjectIF( tinP , *pulp.pHndDrawBitmap , const handleC& hToolP , hToolOld ) ;

            BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)pulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , HPEN( c3c.c1 ) ) )
            countT oshOldVerify = tinP.brcRaw ;
            if( oshOldVerify != c3c.c2 ) { BLAMMO ; } //U::O: COMMENT THIS OUT IN PRODUCTION
            BOS( WHATgbo , BOSoK , DeleteObject( HPEN( c3c.c2 ) ) )
            BOSpOOP
            c3c.c2 = 0 ;
        }
    }

    while( stqr_m01FloatRight          ) { ZE( measureT , mFoo ) ; stqr_m01FloatRight                >> mFoo ; } if( !bEmpty ) stqr_m01FloatRight                << (measureT) 0.5 ;
    while( stqr_m01FloatRight_A        ) { ZE( measureT , mFoo ) ; stqr_m01FloatRight_A              >> mFoo ; } if( !bEmpty ) stqr_m01FloatRight_A              << (measureT) 1.0    ;
    while( stqr_m01FloatRight_B        ) { ZE( measureT , mFoo ) ; stqr_m01FloatRight_B              >> mFoo ; } if( !bEmpty ) stqr_m01FloatRight_B              << (measureT) PI / 2 ;
    while( stqr_m01FloatRight_C        ) { ZE( measureT , mFoo ) ; stqr_m01FloatRight_C              >> mFoo ; } if( !bEmpty ) stqr_m01FloatRight_C              << (measureT) 1.0    ;
    while( stqr_m01FloatRight_D        ) { ZE( measureT , mFoo ) ; stqr_m01FloatRight_D              >> mFoo ; } if( !bEmpty ) stqr_m01FloatRight_D              << (measureT) PI / 2 ;
    while( stqr_m01FloatUp             ) { ZE( measureT , mFoo ) ; stqr_m01FloatUp                   >> mFoo ; } if( !bEmpty ) stqr_m01FloatUp                   << (measureT) 0.5 ;
    while( stqr_m01FloatUp_A           ) { ZE( measureT , mFoo ) ; stqr_m01FloatUp_A                 >> mFoo ; } if( !bEmpty ) stqr_m01FloatUp_A                 << (measureT) 1.0    ;
    while( stqr_m01FloatUp_B           ) { ZE( measureT , mFoo ) ; stqr_m01FloatUp_B                 >> mFoo ; } if( !bEmpty ) stqr_m01FloatUp_B                 << (measureT) PI / 2 ;
    while( stqr_m01FloatUp_C           ) { ZE( measureT , mFoo ) ; stqr_m01FloatUp_C                 >> mFoo ; } if( !bEmpty ) stqr_m01FloatUp_C                 << (measureT) 1.0    ;
    while( stqr_m01FloatUp_D           ) { ZE( measureT , mFoo ) ; stqr_m01FloatUp_D                 >> mFoo ; } if( !bEmpty ) stqr_m01FloatUp_D                 << (measureT) PI / 2 ;
    while( stqr_m01ColHotPoint         ) { ZE( measureT , mFoo ) ; stqr_m01ColHotPoint               >> mFoo ; } if( !bEmpty ) stqr_m01ColHotPoint               << (measureT) 0.5 ;
    while( stqr_m01ColHotPoint_A       ) { ZE( measureT , mFoo ) ; stqr_m01ColHotPoint_A             >> mFoo ; } if( !bEmpty ) stqr_m01ColHotPoint_A             << (measureT) 1.0    ;
    while( stqr_m01ColHotPoint_B       ) { ZE( measureT , mFoo ) ; stqr_m01ColHotPoint_B             >> mFoo ; } if( !bEmpty ) stqr_m01ColHotPoint_B             << (measureT) PI / 2 ;
    while( stqr_m01ColHotPoint_C       ) { ZE( measureT , mFoo ) ; stqr_m01ColHotPoint_C             >> mFoo ; } if( !bEmpty ) stqr_m01ColHotPoint_C             << (measureT) 1.0    ;
    while( stqr_m01ColHotPoint_D       ) { ZE( measureT , mFoo ) ; stqr_m01ColHotPoint_D             >> mFoo ; } if( !bEmpty ) stqr_m01ColHotPoint_D             << (measureT) PI / 2 ;
    while( stqr_m01RowHotPoint         ) { ZE( measureT , mFoo ) ; stqr_m01RowHotPoint               >> mFoo ; } if( !bEmpty ) stqr_m01RowHotPoint               << (measureT) 0.5 ;
    while( stqr_m01RowHotPoint_A       ) { ZE( measureT , mFoo ) ; stqr_m01RowHotPoint_A             >> mFoo ; } if( !bEmpty ) stqr_m01RowHotPoint_A             << (measureT) 1.0    ;
    while( stqr_m01RowHotPoint_B       ) { ZE( measureT , mFoo ) ; stqr_m01RowHotPoint_B             >> mFoo ; } if( !bEmpty ) stqr_m01RowHotPoint_B             << (measureT) PI / 2 ;
    while( stqr_m01RowHotPoint_C       ) { ZE( measureT , mFoo ) ; stqr_m01RowHotPoint_C             >> mFoo ; } if( !bEmpty ) stqr_m01RowHotPoint_C             << (measureT) 1.0    ;
    while( stqr_m01RowHotPoint_D       ) { ZE( measureT , mFoo ) ; stqr_m01RowHotPoint_D             >> mFoo ; } if( !bEmpty ) stqr_m01RowHotPoint_D             << (measureT) PI / 2 ;
    while( stqr_mCosHotAngle           ) { ZE( measureT , mFoo ) ; stqr_mCosHotAngle                 >> mFoo ; } if( !bEmpty ) stqr_mCosHotAngle                 << (measureT) 1.0 ;
    while( stqr_mSinHotAngle           ) { ZE( measureT , mFoo ) ; stqr_mSinHotAngle                 >> mFoo ; } if( !bEmpty ) stqr_mSinHotAngle                 << (measureT) 0.0 ;
    while( stqr_mHotAngle_A            ) { ZE( measureT , mFoo ) ; stqr_mHotAngle_A                  >> mFoo ; } if( !bEmpty ) stqr_mHotAngle_A                  << (measureT) 1.0    ;
    while( stqr_mHotAngle_B            ) { ZE( measureT , mFoo ) ; stqr_mHotAngle_B                  >> mFoo ; } if( !bEmpty ) stqr_mHotAngle_B                  << (measureT) PI / 2 ;
    while( stqr_mHotAngle_C            ) { ZE( measureT , mFoo ) ; stqr_mHotAngle_C                  >> mFoo ; } if( !bEmpty ) stqr_mHotAngle_C                  << (measureT) 1.0    ;
    while( stqr_mHotAngle_D            ) { ZE( measureT , mFoo ) ; stqr_mHotAngle_D                  >> mFoo ; } if( !bEmpty ) stqr_mHotAngle_D                  << (measureT) PI / 2 ;
    while( stqr_m01ColMirrorPoint      ) { ZE( measureT , mFoo ) ; stqr_m01ColMirrorPoint            >> mFoo ; } if( !bEmpty ) stqr_m01ColMirrorPoint            << (measureT) 0.5 ;
    while( stqr_m01ColMirrorPoint_A    ) { ZE( measureT , mFoo ) ; stqr_m01ColMirrorPoint_A          >> mFoo ; } if( !bEmpty ) stqr_m01ColMirrorPoint_A          << (measureT) 1.0    ;
    while( stqr_m01ColMirrorPoint_B    ) { ZE( measureT , mFoo ) ; stqr_m01ColMirrorPoint_B          >> mFoo ; } if( !bEmpty ) stqr_m01ColMirrorPoint_B          << (measureT) PI / 2 ;
    while( stqr_m01ColMirrorPoint_C    ) { ZE( measureT , mFoo ) ; stqr_m01ColMirrorPoint_C          >> mFoo ; } if( !bEmpty ) stqr_m01ColMirrorPoint_C          << (measureT) 1.0    ;
    while( stqr_m01ColMirrorPoint_D    ) { ZE( measureT , mFoo ) ; stqr_m01ColMirrorPoint_D          >> mFoo ; } if( !bEmpty ) stqr_m01ColMirrorPoint_D          << (measureT) PI / 2 ;
    while( stqr_m01RowMirrorPoint      ) { ZE( measureT , mFoo ) ; stqr_m01RowMirrorPoint            >> mFoo ; } if( !bEmpty ) stqr_m01RowMirrorPoint            << (measureT) 0.5 ;
    while( stqr_m01RowMirrorPoint_A    ) { ZE( measureT , mFoo ) ; stqr_m01RowMirrorPoint_A          >> mFoo ; } if( !bEmpty ) stqr_m01RowMirrorPoint_A          << (measureT) 1.0    ;
    while( stqr_m01RowMirrorPoint_B    ) { ZE( measureT , mFoo ) ; stqr_m01RowMirrorPoint_B          >> mFoo ; } if( !bEmpty ) stqr_m01RowMirrorPoint_B          << (measureT) PI / 2 ;
    while( stqr_m01RowMirrorPoint_C    ) { ZE( measureT , mFoo ) ; stqr_m01RowMirrorPoint_C          >> mFoo ; } if( !bEmpty ) stqr_m01RowMirrorPoint_C          << (measureT) 1.0    ;
    while( stqr_m01RowMirrorPoint_D    ) { ZE( measureT , mFoo ) ; stqr_m01RowMirrorPoint_D          >> mFoo ; } if( !bEmpty ) stqr_m01RowMirrorPoint_D          << (measureT) PI / 2 ;
    while( stqr_mCosMirrorAngle        ) { ZE( measureT , mFoo ) ; stqr_mCosMirrorAngle              >> mFoo ; } if( !bEmpty ) stqr_mCosMirrorAngle              << (measureT) 0.0 ;
    while( stqr_mSinMirrorAngle        ) { ZE( measureT , mFoo ) ; stqr_mSinMirrorAngle              >> mFoo ; } if( !bEmpty ) stqr_mSinMirrorAngle              << (measureT) 1.0 ;
    while( stqr_mMirrorAngle_A         ) { ZE( measureT , mFoo ) ; stqr_mMirrorAngle_A               >> mFoo ; } if( !bEmpty ) stqr_mMirrorAngle_A               << (measureT) 1.0    ;
    while( stqr_mMirrorAngle_B         ) { ZE( measureT , mFoo ) ; stqr_mMirrorAngle_B               >> mFoo ; } if( !bEmpty ) stqr_mMirrorAngle_B               << (measureT) PI / 2 ;
    while( stqr_mMirrorAngle_C         ) { ZE( measureT , mFoo ) ; stqr_mMirrorAngle_C               >> mFoo ; } if( !bEmpty ) stqr_mMirrorAngle_C               << (measureT) 1.0    ;
    while( stqr_mMirrorAngle_D         ) { ZE( measureT , mFoo ) ; stqr_mMirrorAngle_D               >> mFoo ; } if( !bEmpty ) stqr_mMirrorAngle_D               << (measureT) PI / 2 ;
    while( stqr_mColScale              ) { ZE( measureT , mFoo ) ; stqr_mColScale                    >> mFoo ; } if( !bEmpty ) stqr_mColScale                    << (measureT)32.0f ;
    while( stqr_mColScale_A            ) { ZE( measureT , mFoo ) ; stqr_mColScale_A                  >> mFoo ; } if( !bEmpty ) stqr_mColScale_A                  << (measureT) 1.0    ;
    while( stqr_mColScale_B            ) { ZE( measureT , mFoo ) ; stqr_mColScale_B                  >> mFoo ; } if( !bEmpty ) stqr_mColScale_B                  << (measureT) PI / 2 ;
    while( stqr_mColScale_C            ) { ZE( measureT , mFoo ) ; stqr_mColScale_C                  >> mFoo ; } if( !bEmpty ) stqr_mColScale_C                  << (measureT) 1.0    ;
    while( stqr_mColScale_D            ) { ZE( measureT , mFoo ) ; stqr_mColScale_D                  >> mFoo ; } if( !bEmpty ) stqr_mColScale_D                  << (measureT) PI / 2 ;
    while( stqr_mRowScale              ) { ZE( measureT , mFoo ) ; stqr_mRowScale                    >> mFoo ; } if( !bEmpty ) stqr_mRowScale                    << (measureT)64.0f ;
    while( stqr_mRowScale_A            ) { ZE( measureT , mFoo ) ; stqr_mRowScale_A                  >> mFoo ; } if( !bEmpty ) stqr_mRowScale_A                  << (measureT) 1.0    ;
    while( stqr_mRowScale_B            ) { ZE( measureT , mFoo ) ; stqr_mRowScale_B                  >> mFoo ; } if( !bEmpty ) stqr_mRowScale_B                  << (measureT) PI / 2 ;
    while( stqr_mRowScale_C            ) { ZE( measureT , mFoo ) ; stqr_mRowScale_C                  >> mFoo ; } if( !bEmpty ) stqr_mRowScale_C                  << (measureT) 1.0    ;
    while( stqr_mRowScale_D            ) { ZE( measureT , mFoo ) ; stqr_mRowScale_D                  >> mFoo ; } if( !bEmpty ) stqr_mRowScale_D                  << (measureT) PI / 2 ;
    while( stqr_mColShear1             ) { ZE( measureT , mFoo ) ; stqr_mColShear1                   >> mFoo ; } if( !bEmpty ) stqr_mColShear1                   << (measureT)-1.0 ;
    while( stqr_mColShear1_A           ) { ZE( measureT , mFoo ) ; stqr_mColShear1_A                 >> mFoo ; } if( !bEmpty ) stqr_mColShear1_A                 << (measureT) 1.0    ;
    while( stqr_mColShear1_B           ) { ZE( measureT , mFoo ) ; stqr_mColShear1_B                 >> mFoo ; } if( !bEmpty ) stqr_mColShear1_B                 << (measureT) PI / 2 ;
    while( stqr_mColShear1_C           ) { ZE( measureT , mFoo ) ; stqr_mColShear1_C                 >> mFoo ; } if( !bEmpty ) stqr_mColShear1_C                 << (measureT) 1.0    ;
    while( stqr_mColShear1_D           ) { ZE( measureT , mFoo ) ; stqr_mColShear1_D                 >> mFoo ; } if( !bEmpty ) stqr_mColShear1_D                 << (measureT) PI / 2 ;
    while( stqr_mColShear2             ) { ZE( measureT , mFoo ) ; stqr_mColShear2                   >> mFoo ; } if( !bEmpty ) stqr_mColShear2                   << (measureT) 3.0 ;
    while( stqr_mColShear2_A           ) { ZE( measureT , mFoo ) ; stqr_mColShear2_A                 >> mFoo ; } if( !bEmpty ) stqr_mColShear2_A                 << (measureT) 1.0    ;
    while( stqr_mColShear2_B           ) { ZE( measureT , mFoo ) ; stqr_mColShear2_B                 >> mFoo ; } if( !bEmpty ) stqr_mColShear2_B                 << (measureT) PI / 2 ;
    while( stqr_mColShear2_C           ) { ZE( measureT , mFoo ) ; stqr_mColShear2_C                 >> mFoo ; } if( !bEmpty ) stqr_mColShear2_C                 << (measureT) 1.0    ;
    while( stqr_mColShear2_D           ) { ZE( measureT , mFoo ) ; stqr_mColShear2_D                 >> mFoo ; } if( !bEmpty ) stqr_mColShear2_D                 << (measureT) PI / 2 ;
    while( stqr_mColShear3             ) { ZE( measureT , mFoo ) ; stqr_mColShear3                   >> mFoo ; } if( !bEmpty ) stqr_mColShear3                   << (measureT) 0.5 ;
    while( stqr_mColShear3_A           ) { ZE( measureT , mFoo ) ; stqr_mColShear3_A                 >> mFoo ; } if( !bEmpty ) stqr_mColShear3_A                 << (measureT) 1.0    ;
    while( stqr_mColShear3_B           ) { ZE( measureT , mFoo ) ; stqr_mColShear3_B                 >> mFoo ; } if( !bEmpty ) stqr_mColShear3_B                 << (measureT) PI / 2 ;
    while( stqr_mColShear3_C           ) { ZE( measureT , mFoo ) ; stqr_mColShear3_C                 >> mFoo ; } if( !bEmpty ) stqr_mColShear3_C                 << (measureT) 1.0    ;
    while( stqr_mColShear3_D           ) { ZE( measureT , mFoo ) ; stqr_mColShear3_D                 >> mFoo ; } if( !bEmpty ) stqr_mColShear3_D                 << (measureT) PI / 2 ;
    while( stqr_mRowShear1             ) { ZE( measureT , mFoo ) ; stqr_mRowShear1                   >> mFoo ; } if( !bEmpty ) stqr_mRowShear1                   << (measureT)-1.0 ;
    while( stqr_mRowShear1_A           ) { ZE( measureT , mFoo ) ; stqr_mRowShear1_A                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear1_A                 << (measureT) 1.0    ;
    while( stqr_mRowShear1_B           ) { ZE( measureT , mFoo ) ; stqr_mRowShear1_B                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear1_B                 << (measureT) PI / 2 ;
    while( stqr_mRowShear1_C           ) { ZE( measureT , mFoo ) ; stqr_mRowShear1_C                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear1_C                 << (measureT) 1.0    ;
    while( stqr_mRowShear1_D           ) { ZE( measureT , mFoo ) ; stqr_mRowShear1_D                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear1_D                 << (measureT) PI / 2 ;
    while( stqr_mRowShear2             ) { ZE( measureT , mFoo ) ; stqr_mRowShear2                   >> mFoo ; } if( !bEmpty ) stqr_mRowShear2                   << (measureT) 3.0 ;
    while( stqr_mRowShear2_A           ) { ZE( measureT , mFoo ) ; stqr_mRowShear2_A                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear2_A                 << (measureT) 1.0    ;
    while( stqr_mRowShear2_B           ) { ZE( measureT , mFoo ) ; stqr_mRowShear2_B                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear2_B                 << (measureT) PI / 2 ;
    while( stqr_mRowShear2_C           ) { ZE( measureT , mFoo ) ; stqr_mRowShear2_C                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear2_C                 << (measureT) 1.0    ;
    while( stqr_mRowShear2_D           ) { ZE( measureT , mFoo ) ; stqr_mRowShear2_D                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear2_D                 << (measureT) PI / 2 ;
    while( stqr_mRowShear3             ) { ZE( measureT , mFoo ) ; stqr_mRowShear3                   >> mFoo ; } if( !bEmpty ) stqr_mRowShear3                   << (measureT) 0.5 ;
    while( stqr_mRowShear3_A           ) { ZE( measureT , mFoo ) ; stqr_mRowShear3_A                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear3_A                 << (measureT) 1.0    ;
    while( stqr_mRowShear3_B           ) { ZE( measureT , mFoo ) ; stqr_mRowShear3_B                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear3_B                 << (measureT) PI / 2 ;
    while( stqr_mRowShear3_C           ) { ZE( measureT , mFoo ) ; stqr_mRowShear3_C                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear3_C                 << (measureT) 1.0    ;
    while( stqr_mRowShear3_D           ) { ZE( measureT , mFoo ) ; stqr_mRowShear3_D                 >> mFoo ; } if( !bEmpty ) stqr_mRowShear3_D                 << (measureT) PI / 2 ;

    purgeBaseF( tinP , etherP , flagsP ) ;

    if( !( F(flagsP) & flPAPERrESET_LEAVEeMPTY ) ) cacheF( tinP , 0 ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b004.winpulpoldc.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b005.winpulpoldc.cachef BEGIN
#define DDNAME       "3func.3609b005.winpulpoldc.cachef"
#define DDNUMB      (countT)0x3609b005
#define IDFILE      (countT)0x131a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT winPulpOldC::cacheF( tinS& tinP , const countT idCasteP )/*1*/
{
    IFbEcAREFUL
    {
        //if( ether ) return ;
    }

    _IO_

    if( !idCasteP ) /*U::*/ ; /*U::*/
    {

        rCache.cPolygonSides = stqr_cPolygonSides[ 1 ] ;
        rCache.idObject      = stqr_idObject[      1 ] ;
        rCache.idTypePaint   = stqr_idTypePaint[   1 ] ;
        rCache.offFrame      = stqr_offFrame[      1 ] ;
        rCache.offFrameWrap  = stqr_offFrameWrap[  1 ] ;
        rCache.cRipples      = stqr_cRipples[      1 ] ;

        //U:: CONJ: mColScale mRowScale ARE OBSOLETED BY STROKING FRAMES; THE DEFAULT IS PROVISIONALLY SET TO 8,8 TO GET PADDING TO 1

        rCache.flagsRenderControl = stqr_fRenderControl[ 1 ] ;
        rCache.mColScale = F(rCache.flagsRenderControl) & flRENDERcONTROL_COLsCALE ? *(measureT*)&stqr_mColScale[ 1 ] : 8.0f ;
        rCache.mRowScale = F(rCache.flagsRenderControl) & flRENDERcONTROL_ROWsCALE ? *(measureT*)&stqr_mRowScale[ 1 ] : 8.0f ;
        rCache.mCol = rCache.mColScale ;
        rCache.mRow = rCache.mRowScale ;
    
        rCache.bFloatRight = F(rCache.flagsRenderControl) & flRENDERcONTROL_FLOATrIGHT ;
        rCache.bFloatUp    = F(rCache.flagsRenderControl) & flRENDERcONTROL_FLOATuP ;
        rCache.bHotPoint    = F(rCache.flagsRenderControl) & flRENDERcONTROL_AT ;
        rCache.bHotAngle    = F(rCache.flagsRenderControl) & flRENDERcONTROL_ATaNGLE ;
        rCache.bPadRight   = F(rCache.flagsRenderControl) & flRENDERcONTROL_PADrIGHT ;
        rCache.bPadUp      = F(rCache.flagsRenderControl) & flRENDERcONTROL_PADuP ;
    
        rCache.mColFloat = rCache.bHotPoint ? 0.0 : rCache.mColScale * ( rCache.bFloatRight ? *(measureT*)&stqr_m01FloatRight[ 1 ] : 0.0 ) ;
        rCache.mRowFloat = rCache.bHotPoint ? 0.0 : rCache.mRowScale * ( rCache.bFloatUp    ? *(measureT*)&stqr_m01FloatUp[    1 ] : 0.0 ) ;

        rCache.mColHotPoint = 1.0 + (countT)( rCache.bHotPoint ? ( rCache.mCol - 1.0 ) * *(measureT*)&stqr_m01ColHotPoint[ 1 ] : 0.0 ) ;
        rCache.mRowHotPoint = 1.0 + (countT)( rCache.bHotPoint ? ( rCache.mRow - 1.0 ) * *(measureT*)&stqr_m01RowHotPoint[ 1 ] : 0.0 ) ;
    
        rCache.mcq   = (countT)( rCache.mCol / 4.0 ) ;
        rCache.mcm   = (countT)( rCache.mCol / 2.0 ) ;
        rCache.mrq   = (countT)( rCache.mRow * 0.25 ) ;
        rCache.mrm   = (countT)( rCache.mRow * 0.50 ) ;
    
        rCache.mc1 = rCache.mColFloat + 1.0 - rCache.mColHotPoint ;
        rCache.mr1 = rCache.mRowFloat + 1.0 - rCache.mRowHotPoint ;
        rCache.mc2 = rCache.mc1 - 1 + rCache.mCol ;
        rCache.mr2 = rCache.mr1 - 1 + rCache.mRow ;
        
        //U::strokeS CASTE TO PUSH AND POP mLower (defaults to 1.0f)
        // measureT mLower = 7.0f / 8.0f ; //NICE
        //measureT mLower = 2.0f ; //INTERESTING
        measureT mLower = 1.0f ;
        rCache.mr2s = rCache.mr2 * mLower ;

        rCache.mColsMarginSadamFrame = stqr_cColsMarginSadamFrame[ 1 ] ;
        rCache.mRowsMarginSadamFrame = stqr_cRowsMarginSadamFrame[ 1 ] ;

        rCache.mPadRight = rCache.mColScale * ( rCache.bPadRight ? *(measureT*)&stqr_m01PadRight[ 1 ] : ( 1.0f / 8.0f ) ) ;
        rCache.mPadUp    = rCache.mRowScale * ( rCache.bPadUp    ? *(measureT*)&stqr_m01PadUp[    1 ] : ( 1.0f / 8.0f ) ) ;
        //if( cTraceOn ) { LOGrAW( T("\r\ncacheF: scale (col,row): ")+TF1(rCache.mColScale)+T(" ")+TF1(rCache.mRowScale)+T("\r\n") ) ; }
        //if( cTraceOn ) { LOGrAW( T("\r\ncacheF: mPadRight: ")+TF1(rCache.mPadRight)+T("\r\n") ) ; }

        strokingFrameS& sfd = *(strokingFrameS*)&stqr_strokingFrame[ 2 + rCache.offFrame + rCache.offFrameWrap ] ;

        rCache.bPeeWhileMoving = !!sfd.bPeeWhileMoving ;

        //if( cTraceOn ) { LOGrAW( T("\r\ncacheF: col padding: ")+TF1(rCache.mPadRight)+T("\r\n") ) ; }
        if( sfd.cStrokingFramesPadRight )
        {
            measureT mNeeded = ( 2.0 + 2.0 * rCache.mColsMarginSadamFrame ) * sfd.cStrokingFramesPadRight ;
            if( !rCache.bPadRight && rCache.mPadRight < mNeeded ) rCache.mPadRight = mNeeded ;
            //if( cTraceOn ) { LOGrAW( T("\r\ncolumn padding (needed,set): ")+TF1(mNeeded)+T(" ")+TF1(rCache.mPadRight)+T("\r\n") ) ; }
        }

        //if( cTraceOn ) { LOGrAW( T("\r\ncacheF: row padding: ")+TF1(rCache.mPadUp)+T("\r\n") ) ; }
        if( sfd.cStrokingFramesPadUp )
        {
            measureT mNeeded = ( 2.0 + 2.0 * rCache.mRowsMarginSadamFrame ) * sfd.cStrokingFramesPadUp ;
            if( !rCache.bPadUp && rCache.mPadUp < mNeeded ) rCache.mPadUp = mNeeded ;
            //if( cTraceOn ) { LOGrAW( T("\r\nrow padding (needed,set): ")+TF1(mNeeded)+T(" ")+TF1(rCache.mPadUp)+T("\r\n") ) ; }
        }

        rCache.mIdColVector = rCache.mCol + rCache.mPadRight ;
        rCache.mIdRowVector = 0 ;
    
        rCache.mxq = rCache.mc1 + rCache.mcq ;
        rCache.mxm = rCache.mc1 + rCache.mcm ;
        rCache.mxQ = rCache.mc2 - rCache.mcq ;
        
        rCache.myq = rCache.mr1 + rCache.mrq ;
        rCache.mym = rCache.mr1 + rCache.mrm ;
        rCache.myQ = rCache.mr2 - rCache.mrq ;

        rCache.myqs = rCache.myq * mLower ;
        rCache.myms = rCache.mym * mLower ;
        rCache.myQs = rCache.myQ * mLower ;

        strokingFrameS& sf = *(strokingFrameS*)&stqr_strokingFrame[ 1 + rCache.offFrame ] ;
        rCache.msAc = sf.mCols ;
        rCache.msAr = sf.mRows ;
        rCache.msBc = sf.mIdCol ;
        rCache.msBr = sf.mIdRow ;

        //DON'T KNOW WHY WAS DOING THIS; COMMENTED OUT FOR SPEED
        //poolC::pool OldDelIF( tinP , (voidT*)rCache.pmrb ) ; rCache.pmrb = 0 ;
        //rCache.cBits = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b005.winpulpoldc.cachef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b006.winpulpoldc.positionstrokingframeiff BEGIN
#define DDNAME       "3func.3609b006.winpulpoldc.positionstrokingframeiff"
#define DDNUMB      (countT)0x3609b006
#define IDFILE      (countT)0x131b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT winPulpOldC::positionStrokingFrameIfF( tinS& tinP )/*1*/
{
    if( !( F(flagsRender) & flPAPERrENDER_FRAMEdETACHED ) )
    {
        strokingFrameS& sf = *(strokingFrameS*)&stqr_strokingFrame[ 1 ] ;
        new( 0 , tinP , (byteT*)&sf , sizeof sf ) strokingFrameS( sf.flags , sf.cStrokingFramesPadRight , sf.cStrokingFramesPadUp , mIdColNow , mIdRowNow , sf.mCols , sf.mRows ) ;
        cacheF( tinP , scOld_mmFRAME ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609b* : 3func.3609b006.winpulpoldc.positionstrokingframeiff END
