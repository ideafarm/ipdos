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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097001.eyeoldc.dt_eyeoldc BEGIN
#define DDNAME       "3func.36097001.eyeoldc.dt_eyeoldc"
#define DDNUMB      (countT)0x36097001
#define IDFILE      (countT)0x12d4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/eyeOldC::~eyeOldC( voidT )/*1*/
{
    //NOT SERIALIZED BECAUSE CT/DT
    TINSL
    dtPrefixF( tinP ) ;

    countT cFlavors = sw_psttObject.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        idObject = sw_psttObject.leverF( tinP , idf ) ;
        ether.delF( tinP , *(strokeS**)&(countT&)sw_psttObject ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097001.eyeoldc.dt_eyeoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097002.eyeoldc.eyeoldc BEGIN
#define DDNAME       "3func.36097002.eyeoldc.eyeoldc"
#define DDNUMB      (countT)0x36097002
#define IDFILE      (countT)0x12d5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/eyeOldC::eyeOldC( tinS& tinP , etherC& etherP , const countT cPapersP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
backOldC( tinP , etherP , cPapersP , TUCK , TUCK ) ,
unit_x( tinP , etherP ) ,
unit_y( tinP , etherP ) ,
unit_z( tinP , etherP ) ,
vhprx( tinP , etherP ) ,
vhpry( tinP , etherP ) ,
vhprz( tinP , etherP ) ,
state( tinP , etherP ) ,
sqmHullFromAbs( tinP , etherP ) ,
sqmAbsFromHull( tinP , etherP ) ,
sqmPodFromHull( tinP , etherP ) ,
sqmPodFromAbs( tinP , etherP ) ,
flagsRender( flEYEoLDrENDER_null ) ,
idObject( 0 ) ,
stq_idObjectUnder( tinP ) ,
stq_sttPending( tinP , sizeof( strokeS ) ) ,
sw_psttObject( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , idObject ) ,
flagsCapture( flEYEoLDcAPTURE_null )
{
    mRowMinCapture[1] = mColMinCapture[ 1 ] = mRowMinCapture[ 0 ] = mColMinCapture[ 0 ] =   MAXmEASUREt ;
    mRowMaxCapture[1] = mColMaxCapture[ 1 ] = mRowMaxCapture[ 0 ] = mColMaxCapture[ 0 ] = - MAXmEASUREt ;

    //NOT SERIALIZED BECAUSE CT/DT
    unit_x(1) = 1.0 ;
    unit_y(2) = 1.0 ;
    unit_z(3) = 1.0 ;

    vhprx(1) = 1.0 ;
    vhpry(2) = 1.0 ;
    vhprz(3) = 1.0 ;

    setHullAimTiltF( tinP ) ;
    freshPodF( tinP ) ;

    rowEye.rw.angPodRotate = 0.0 ;
    rowEye.rw.flags = flEYEoLD_null ;

    ctSuffixF( tinP , 0 , pPaperToBackCBFP , cPaperToBackArgP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097002.eyeoldc.eyeoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097003.eyeoldc.freshhullf BEGIN
#define DDNAME       "3func.36097003.eyeoldc.freshhullf"
#define DDNUMB      (countT)0x36097003
#define IDFILE      (countT)0x12d6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::freshHullF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    sqmHullFromAbs( 1 , 1 ) = state.vaHull_x * unit_x ;
    sqmHullFromAbs( 1 , 2 ) = state.vaHull_x * unit_y ;
    sqmHullFromAbs( 1 , 3 ) = state.vaHull_x * unit_z ;

    sqmHullFromAbs( 2 , 1 ) = state.vaHull_y * unit_x ;
    sqmHullFromAbs( 2 , 2 ) = state.vaHull_y * unit_y ;
    sqmHullFromAbs( 2 , 3 ) = state.vaHull_y * unit_z ;

    sqmHullFromAbs( 3 , 1 ) = state.vaHull_z * unit_x ;
    sqmHullFromAbs( 3 , 2 ) = state.vaHull_z * unit_y ;
    sqmHullFromAbs( 3 , 3 ) = state.vaHull_z * unit_z ;

    sqmAbsFromHull = sqmHullFromAbs.transposeF( tinP ) ;

    freshPodAbsF( tinP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097003.eyeoldc.freshhullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097004.eyeoldc.freshpodf BEGIN
#define DDNAME       "3func.36097004.eyeoldc.freshpodf"
#define DDNUMB      (countT)0x36097004
#define IDFILE      (countT)0x12d7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::freshPodF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    const measureT nangPodRotate = - rowEye.ro.angPodRotate ;
    BOSmEASURE04( WHATgbo , cos( nangPodRotate * PI ) )
    const measureT cra  = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , cos( ( 0.5 + nangPodRotate ) * PI ) )
    const measureT crap = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , cos( ( 0.5 - nangPodRotate ) * PI ) )
    const measureT cram = tinP.brcm04Raw ;

    /*
        ROTATION MATRIX

                X       Y       Z

        X'      cra     crap    0

        Y'      cram    cra     0

        Z'      0       0       1
    */

    state.vhPod_x(1) = cra  * vhprx(1) + crap * vhprx(2)            ;
    state.vhPod_x(2) = cram * vhprx(1) + cra  * vhprx(2)            ;
    state.vhPod_x(3) =                                   + vhprx(3) ;

    state.vhPod_y(1) = cra  * vhpry(1) + crap * vhpry(2)            ;
    state.vhPod_y(2) = cram * vhpry(1) + cra  * vhpry(2)            ;
    state.vhPod_y(3) =                                   + vhpry(3) ;

    state.vhPod_z(1) = cra  * vhprz(1) + crap * vhprz(2)            ;
    state.vhPod_z(2) = cram * vhprz(1) + cra  * vhprz(2)            ;
    state.vhPod_z(3) =                                   + vhprz(3) ;

    BOSmEASURE04( WHATgbo , sqrt( state.vhPod_x * state.vhPod_x ) )
    measureT len_x = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , sqrt( state.vhPod_y * state.vhPod_y ) )
    measureT len_y = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , sqrt( state.vhPod_z * state.vhPod_z ) )
    measureT len_z = tinP.brcm04Raw ;

    state.vhPod_x(1) /= len_x ;
    state.vhPod_x(2) /= len_x ;
    state.vhPod_x(3) /= len_x ;

    state.vhPod_y(1) /= len_y ;
    state.vhPod_y(2) /= len_y ;
    state.vhPod_y(3) /= len_y ;

    state.vhPod_z(1) /= len_z ;
    state.vhPod_z(2) /= len_z ;
    state.vhPod_z(3) /= len_z ;

    sqmPodFromHull( 1 , 1 ) = state.vhPod_x * unit_x ;
    sqmPodFromHull( 1 , 2 ) = state.vhPod_x * unit_y ;
    sqmPodFromHull( 1 , 3 ) = state.vhPod_x * unit_z ;

    sqmPodFromHull( 2 , 1 ) = state.vhPod_y * unit_x ;
    sqmPodFromHull( 2 , 2 ) = state.vhPod_y * unit_y ;
    sqmPodFromHull( 2 , 3 ) = state.vhPod_y * unit_z ;

    sqmPodFromHull( 3 , 1 ) = state.vhPod_z * unit_x ;
    sqmPodFromHull( 3 , 2 ) = state.vhPod_z * unit_y ;
    sqmPodFromHull( 3 , 3 ) = state.vhPod_z * unit_z ;

    freshPodAbsF( tinP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097004.eyeoldc.freshpodf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097005.eyeoldc.podfromabsf BEGIN
#define DDNAME       "3func.36097005.eyeoldc.podfromabsf"
#define DDNUMB      (countT)0x36097005
#define IDFILE      (countT)0x12d8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::podFromAbsF( tinS& tinP , vectorOldC& vToP , vectorOldC& vFromP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    vToP = sqmPodFromAbs * vFromP ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097005.eyeoldc.podfromabsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097006.eyeoldc.sethulllocationf BEGIN
#define DDNAME       "3func.36097006.eyeoldc.sethulllocationf"
#define DDNUMB      (countT)0x36097006
#define IDFILE      (countT)0x12d9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::setHullLocationF( tinS& tinP , const measureT xP , const measureT yP , const measureT zP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    state.vao( 1 ) = xP ;
    state.vao( 2 ) = yP ;
    state.vao( 3 ) = zP ;

    if( tinP.fingerprint ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097006.eyeoldc.sethulllocationf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097007.eyeoldc.sethullaimtiltf BEGIN
#define DDNAME       "3func.36097007.eyeoldc.sethullaimtiltf"
#define DDNUMB      (countT)0x36097007
#define IDFILE      (countT)0x12da


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::setHullAimTiltF( tinS& tinP , const measureT anghP , const measureT angvP , const measureT angtP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    state.vaHull_x = unit_x ;
    state.vaHull_y = unit_y ;
    state.vaHull_z = unit_z ;

    //U::if( anghP || angvP || angtP )
    {
        sqMatrixOldC sqmrh( tinP , ether ) ;
        sqMatrixOldC sqmrv( tinP , ether ) ;
        sqMatrixOldC sqmrt( tinP , ether ) ;
        {
            const measureT nang = - anghP ;
            BOSmEASURE04( WHATgbo , cos(         nang   * PI ) )
            const measureT cra  = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 + nang ) * PI ) )
            const measureT crap = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 - nang ) * PI ) )
            const measureT cram = tinP.brcm04Raw ;
            
            /*
                ROTATION MATRIX FOR AIM HORIZONTAL
            
                        X       Y       Z
            
                Z'      cram    0       cra
            
                Y'      0       1       0
                       
                X'      cra     0       crap
            */
        
            sqmrh( 1 , 1 ) = cra  ;
            sqmrh( 1 , 2 ) = 0.0  ;
            sqmrh( 1 , 3 ) = crap ;
            sqmrh( 2 , 1 ) = 0.0  ;
            sqmrh( 2 , 2 ) = 1.0  ;
            sqmrh( 2 , 3 ) = 0.0  ;
            sqmrh( 3 , 1 ) = cram ;
            sqmrh( 3 , 2 ) = 0.0  ;
            sqmrh( 3 , 3 ) = cra  ;
        }
        {
            const measureT nang = - angvP ;
            BOSmEASURE04( WHATgbo , cos(         nang   * PI ) )
            const measureT cra  = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 + nang ) * PI ) )
            const measureT crap = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 - nang ) * PI ) )
            const measureT cram = tinP.brcm04Raw ;
            
            /*
                ROTATION MATRIX FOR AIM VERTICAL
            
                        X       Y       Z
            
                Z'      0       cram    cra
            
                Y'      0       cra     crap
                       
                X'      1       0       0
            */
        
            sqmrv( 1 , 1 ) = 1.0  ;
            sqmrv( 1 , 2 ) = 0.0  ;
            sqmrv( 1 , 3 ) = 0.0 ;
            sqmrv( 2 , 1 ) = 0.0  ;
            sqmrv( 2 , 2 ) = cra  ;
            sqmrv( 2 , 3 ) = crap ;
            sqmrv( 3 , 1 ) = 0.0  ;
            sqmrv( 3 , 2 ) = cram ;
            sqmrv( 3 , 3 ) = cra  ;
        }
        {
            const measureT nang = - angtP ;
            BOSmEASURE04( WHATgbo , cos(         nang   * PI ) )
            const measureT cra  = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 + nang ) * PI ) )
            const measureT crap = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , cos( ( 0.5 - nang ) * PI ) )
            const measureT cram = tinP.brcm04Raw ;
            
            /*
                ROTATION MATRIX FOR TILT
            
                        X       Y       Z
            
                Z'      0       0       1
            
                Y'      cram    cra     0
            
                X'      cra     crap    0
            */
        
            sqmrt( 1 , 1 ) = cra  ;
            sqmrt( 1 , 2 ) = crap ;
            sqmrt( 1 , 3 ) = 0.0  ;
            sqmrt( 2 , 1 ) = cram ;
            sqmrt( 2 , 2 ) = cra  ;
            sqmrt( 2 , 3 ) = 0.0 ;
            sqmrt( 3 , 1 ) = 0.0 ;
            sqmrt( 3 , 2 ) = 0.0 ;
            sqmrt( 3 , 3 ) = 1.0 ;
        }
        sqMatrixOldC* ppSqmr[] = { &sqmrh , &sqmrv , &sqmrt } ;
    
        for( countT off = 0 ; off <= 2 ; off ++ )
        {
            sqMatrixOldC& sqmr = *ppSqmr[ off ] ;
    
            state.vaHull_x = sqmr * state.vaHull_x ;
            state.vaHull_y = sqmr * state.vaHull_y ;
            state.vaHull_z = sqmr * state.vaHull_z ;
            
            //U::O: USE bigMeasureT AND THEN ONLY NORMALIZE WHEN off == 2
            BOSmEASURE04( WHATgbo , sqrt( state.vaHull_x * state.vaHull_x ) )
            measureT len_x = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , sqrt( state.vaHull_y * state.vaHull_y ) )
            measureT len_y = tinP.brcm04Raw ;
            BOSmEASURE04( WHATgbo , sqrt( state.vaHull_z * state.vaHull_z ) )
            measureT len_z = tinP.brcm04Raw ;
            
            state.vaHull_x(1) /= len_x ;
            state.vaHull_x(2) /= len_x ;
            state.vaHull_x(3) /= len_x ;
            
            state.vaHull_y(1) /= len_y ;
            state.vaHull_y(2) /= len_y ;
            state.vaHull_y(3) /= len_y ;
            
            state.vaHull_z(1) /= len_z ;
            state.vaHull_z(2) /= len_z ;
            state.vaHull_z(3) /= len_z ;
        }
    }

    freshHullF( tinP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097007.eyeoldc.sethullaimtiltf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097008.eyeoldc.freshpodabsf BEGIN
#define DDNAME       "3func.36097008.eyeoldc.freshpodabsf"
#define DDNUMB      (countT)0x36097008
#define IDFILE      (countT)0x12db


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::freshPodAbsF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    sqmPodFromAbs = sqmPodFromHull * sqmHullFromAbs ;

    state.vaPod_x = sqmAbsFromHull * state.vhPod_x ;
    state.vaPod_y = sqmAbsFromHull * state.vhPod_y ;
    state.vaPod_z = sqmAbsFromHull * state.vhPod_z ;

    BOSmEASURE04( WHATgbo , sqrt( state.vaPod_x * state.vaPod_x ) )
    measureT len_x = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , sqrt( state.vaPod_y * state.vaPod_y ) )
    measureT len_y = tinP.brcm04Raw ;
    BOSmEASURE04( WHATgbo , sqrt( state.vaPod_z * state.vaPod_z ) )
    measureT len_z = tinP.brcm04Raw ;

    state.vaPod_x(1) /= len_x ;
    state.vaPod_x(2) /= len_x ;
    state.vaPod_x(3) /= len_x ;

    state.vaPod_y(1) /= len_y ;
    state.vaPod_y(2) /= len_y ;
    state.vaPod_y(3) /= len_y ;

    state.vaPod_z(1) /= len_z ;
    state.vaPod_z(2) /= len_z ;
    state.vaPod_z(3) /= len_z ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097008.eyeoldc.freshpodabsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097009.eyeoldc.obeytoolactionf BEGIN
#define DDNAME       "3func.36097009.eyeoldc.obeytoolactionf"
#define DDNUMB      (countT)0x36097009
#define IDFILE      (countT)0x12dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/boolT eyeOldC::obeyToolActionF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT* const pcNotesP , sadamC& sadamP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( boolT , bDone ) ;

    switch( idTypeCallP )
    {
        case ifcIDtYPEsTROKEcALLbACK_MOUSE :
        {
            if( pcNotesP && pcNotesP[ 0 ] == 1 && pcNotesP[ 1 ] >= 5 )
            {
                const countT& idTool   = pcNotesP[ 3 ] ;
                const countT& idAction = pcNotesP[ 4 ] ;
                const countT& idCol    = pcNotesP[ 5 ] ;
                const countT& idRow    = pcNotesP[ 6 ] ;

                if( idAction == ifcIDtYPEaCTION_DOWN )
                {
                    switch( idTool )
                    {
                        case ifcIDtYPEtOOL_MOUSEbUTTONlEFT  : // AIM
                        case ifcIDtYPEtOOL_MOUSEbUTTONrIGHT : // TILT
                        {
                            const measureT mIdColMin = R( sadamP.pStrike->sc.mIdColHotVolatileBodyRendered ) +       R( sadamP.pStrike->sc.mColsMarginSadamFrameVolatileBodyRendered ) ;
                            const measureT mCols     = R( sadamP.pStrike->sc.mColsHotVolatileBodyRendered  ) - 2.0 * R( sadamP.pStrike->sc.mColsMarginSadamFrameVolatileBodyRendered ) ;
        
                            const measureT mIdRowMin = R( sadamP.pStrike->sc.mIdRowHotVolatileBodyRendered ) +       R( sadamP.pStrike->sc.mRowsMarginSadamFrameVolatileBodyRendered ) ;
                            const measureT mRows     = R( sadamP.pStrike->sc.mRowsHotVolatileBodyRendered  ) - 2.0 * R( sadamP.pStrike->sc.mRowsMarginSadamFrameVolatileBodyRendered ) ;
        
                            if( mCols > 1.0 && mRows > 1.0 )
                            {
                                const measureT mRatioCol = ( idCol - mIdColMin ) / ( mCols - 1.0 ) ; // [0.0,1.0]
                                const measureT mRatioRow = ( idRow - mIdRowMin ) / ( mRows - 1.0 ) ; // [0.0,1.0]
            
                                sqMatrixOldC sqmr( tinP , etherP ) ;
                                if( idTool == ifcIDtYPEtOOL_MOUSEbUTTONrIGHT )
                                {
                                    BOSmEASURE04( WHATgbo , atan2( mRatioCol - 0.5 , mRatioRow - 0.5 ) )
                                    const measureT raTilt = - tinP.brcm04Raw ;
                                    //hintF( tinP , etherP , pcNotesP[ 2 ] , T("raTilt: ")+TF1(raTilt) ) ;
            
                                    /*
            
                                        cos : cos(          raTilt )
                                        cosm: cos( PI / 2 - raTilt )
                                        cosp: cos( PI / 2 + raTilt )
            
                                        ROTATION MATRIX
            
            
                                        Z'      0       0       1
            
                                        Y'      cosm    cos     0
            
                                        X'      cos     cosp    0
            
            
                                                X       Y       Z
            
                                    */
            
                                    BOSmEASURE04( WHATgbo , cos( raTilt ) )
                                    measureT cosTilt = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 - raTilt ) )
                                    measureT cosmTilt = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 + raTilt ) )
                                    measureT cospTilt = tinP.brcm04Raw ;
            
                                    sqmr( 1 , 1 ) = cosTilt ;
                                    sqmr( 1 , 2 ) = cospTilt ;
                                    sqmr( 1 , 3 ) = 0.0 ;
                                    sqmr( 2 , 1 ) = cosmTilt ;
                                    sqmr( 2 , 2 ) = cosTilt ;
                                    sqmr( 2 , 3 ) = 0.0 ;
                                    sqmr( 3 , 1 ) = 0.0 ;
                                    sqmr( 3 , 2 ) = 0.0 ;
                                    sqmr( 3 , 3 ) = 1.0 ;
                                }
                                else
                                {
                                    const measureT raAimh = - ( mRatioCol - 0.5 ) * 2.0 * PI ;
                                    const measureT raAimv = - ( mRatioRow - 0.5 ) * 1.0 * PI ;
                                    //hintF( tinP , etherP , pcNotesP[ 2 ] , T("raAimh,raAimv: ")+TF1(raAimh)+T(" ")+TF1(raAimv) ) ;
            
                                    /*
            
                                        cos : cos(          raAimh )
                                        cosm: cos( PI / 2 - raAimh )
                                        cosp: cos( PI / 2 + raAimh )
            
                                        ROTATION MATRIX FOR HORIZONTAL AIM, ROTATING ON Y AXIS
            
            
                                        Z'      cosm    0      cos
            
                                        Y'      0       1      0
            
                                        X'      cos     0      cosp
            
            
                                                X       Y       Z
            
                                    */
            
                                    BOSmEASURE04( WHATgbo , cos( raAimh ) )
                                    measureT cosAimh = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 - raAimh ) )
                                    measureT cosmAimh = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 + raAimh ) )
                                    measureT cospAimh = tinP.brcm04Raw ;
            
                                    sqmr( 1 , 1 ) = cosAimh ;
                                    sqmr( 1 , 2 ) = 0.0 ;
                                    sqmr( 1 , 3 ) = cospAimh ;
                                    sqmr( 2 , 1 ) = 0.0 ;
                                    sqmr( 2 , 2 ) = 1.0 ;
                                    sqmr( 2 , 3 ) = 0.0 ;
                                    sqmr( 3 , 1 ) = cosmAimh ;
                                    sqmr( 3 , 2 ) = 0.0 ;
                                    sqmr( 3 , 3 ) = cosAimh ;
            
                                    /*
            
                                        cos : cos(          raAimv )
                                        cosm: cos( PI / 2 - raAimv )
                                        cosp: cos( PI / 2 + raAimv )
            
                                        ROTATION MATRIX FOR VERTICAL AIM, ROTATING ON INTERMEDIATE X AXIS
            
            
                                        Z'      0       cosm    cos
            
                                        Y'      0       cos     cosp
            
                                        X'      1       0       0
            
            
                                                X       Y       Z
            
                                    */
            
                                    BOSmEASURE04( WHATgbo , cos( raAimv ) )
                                    measureT cosAimv  = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 - raAimv ) )
                                    measureT cosmAimv = tinP.brcm04Raw ;
                                    BOSmEASURE04( WHATgbo , cos( PI / 2 + raAimv ) )
                                    measureT cospAimv = tinP.brcm04Raw ;
            
                                    sqMatrixOldC sqmr2( tinP , etherP ) ;
                                    sqmr2( 1 , 1 ) = 1.0 ;
                                    sqmr2( 1 , 2 ) = 0.0 ;
                                    sqmr2( 1 , 3 ) = 0.0 ;
                                    sqmr2( 2 , 1 ) = 0.0 ;
                                    sqmr2( 2 , 2 ) = cosAimv ;
                                    sqmr2( 2 , 3 ) = cospAimv ;
                                    sqmr2( 3 , 1 ) = 0.0 ;
                                    sqmr2( 3 , 2 ) = cosmAimv ;
                                    sqmr2( 3 , 3 ) = cosAimv ;
    
                                    sqmr = sqmr2 * sqmr ;
                                }
            
                                (*(eyeStateOldS*)&state).vaHull_x = sqmr * state.vaHull_x ;
                                (*(eyeStateOldS*)&state).vaHull_y = sqmr * state.vaHull_y ;
                                (*(eyeStateOldS*)&state).vaHull_z = sqmr * state.vaHull_z ;
        
                                freshHullF( tinP ) ;
                                bDone = 1 ;
                            }
                        }
                    }
                }
            }

            break ;
        }
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    return bDone ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097009.eyeoldc.obeytoolactionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700a.eyeoldc.grabf BEGIN
#define DDNAME       "3func.3609700a.eyeoldc.grabf"
#define DDNUMB      (countT)0x3609700a
#define IDFILE      (countT)0x12dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    _IO_
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , idLineP , idiFileP , pbBitsP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700a.eyeoldc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700b.eyeoldc.ungrabf BEGIN
#define DDNAME       "3func.3609700b.eyeoldc.ungrabf"
#define DDNUMB      (countT)0x3609700b
#define IDFILE      (countT)0x12de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::ungrabF( tinS& tinP )/*1*/
{
    _IO_
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700b.eyeoldc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700c.eyeoldc.backoldctpaperf BEGIN
#define DDNAME       "3func.3609700c.eyeoldc.backoldctpaperf"
#define DDNUMB      (countT)0x3609700c
#define IDFILE      (countT)0x12df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backOldCtPaperF( tinS& tinP , pulpOldC& pulpP , paperOldC& paperP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    const countT c_pPaper = (countT)&paperP ;
    const countT c_pState = (countT)&pulpP ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    if( tinP.fingerprint ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700c.eyeoldc.backoldctpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700d.eyeoldc.backidtypef BEGIN
#define DDNAME       "3func.3609700d.eyeoldc.backidtypef"
#define DDNUMB      (countT)0x3609700d
#define IDFILE      (countT)0x12e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT eyeOldC::backIdTypeF( voidT ) const/*1*/
{
    //NOT SERIALIZED BECAUSE const FUNCTION
    return ifcIDtYPEpAPERbACK_eyeOldC ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700d.eyeoldc.backidtypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700e.eyeoldc.backpositionf BEGIN
#define DDNAME       "3func.3609700e.eyeoldc.backpositionf"
#define DDNUMB      (countT)0x3609700e
#define IDFILE      (countT)0x12e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backPositionF( tinS& tinP , pulpOldC& pulpP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    if( tinP.fingerprint && mIdColP && mIdRowP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700e.eyeoldc.backpositionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700f.eyeoldc.backflushf BEGIN
#define DDNAME       "3func.3609700f.eyeoldc.backflushf"
#define DDNUMB      (countT)0x3609700f
#define IDFILE      (countT)0x12e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backFlushF( tinS& tinP , pulpOldC& pulpP , const measureT mIdColP , const measureT mIdRowP , const measureT mColsP , const measureT mRowsP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    if( tinP.fingerprint && mIdColP && mIdRowP && mColsP && mRowsP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609700f.eyeoldc.backflushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097010.eyeoldc.backresetf BEGIN
#define DDNAME       "3func.36097010.eyeoldc.backresetf"
#define DDNUMB      (countT)0x36097010
#define IDFILE      (countT)0x12e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backResetF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    eyePulpOldC& pulp = *(eyePulpOldC*)&pulpP ;
    if( tinP.fingerprint ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097010.eyeoldc.backresetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097011.eyeoldc.backdtpaperf BEGIN
#define DDNAME       "3func.36097011.eyeoldc.backdtpaperf"
#define DDNUMB      (countT)0x36097011
#define IDFILE      (countT)0x12e4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backDtPaperF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    eyePulpOldC& pulp = *(eyePulpOldC*)&pulpP ;
    if( tinP.fingerprint ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097011.eyeoldc.backdtpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097012.eyeoldc.backsadamhighlightf BEGIN
#define DDNAME       "3func.36097012.eyeoldc.backsadamhighlightf"
#define DDNUMB      (countT)0x36097012
#define IDFILE      (countT)0x12e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backSadamHighlightF( tinS& tinP , pulpOldC& pulpP , paperOldC& paperP , const countT rgbP , measureT mColFromP , measureT mRowFromP , measureT mColToP , measureT mRowToP , const measureT mShrinkP , const countT cSidesP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097012.eyeoldc.backsadamhighlightf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097013.eyeoldc.backsuppressrefreshf BEGIN
#define DDNAME       "3func.36097013.eyeoldc.backsuppressrefreshf"
#define DDNUMB      (countT)0x36097013
#define IDFILE      (countT)0x12e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT eyeOldC::backSuppressRefreshF( tinS& tinP , const paperOldC& paperP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    countT cnu = (countT)&paperP ;
    if( tinP.fingerprint && cnu ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097013.eyeoldc.backsuppressrefreshf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097014.eyeoldc.backflushasyncf BEGIN
#define DDNAME       "3func.36097014.eyeoldc.backflushasyncf"
#define DDNUMB      (countT)0x36097014
#define IDFILE      (countT)0x12e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//WORKS, BUT IS NOT USED IN IPDOS (tm)

#if defined( NEVERdEFINED )

/*1*/voidT eyeOldC::b ackFlushAsyncF( tinS& tinP , const measureT mIdColMinP , const measureT mIdRowMinP , const measureT mIdColMaxP , const measureT mIdRowMaxP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    if( tinP.fingerprint && mIdColMinP && mIdRowMinP && mIdColMaxP && mIdRowMaxP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097014.eyeoldc.backflushasyncf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097015.eyeoldc.backnotifybeforesadamf BEGIN
#define DDNAME       "3func.36097015.eyeoldc.backnotifybeforesadamf"
#define DDNUMB      (countT)0x36097015
#define IDFILE      (countT)0x12e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backNotifyBeforeSadamF( tinS& tinP , pulpOldC& pulpP , const strokeS& sttP , const flagsT flagsP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    countT cnu = (countT)&pulpP ;
    if( tinP.fingerprint && sttP.idAdam && flagsP && cnu ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097015.eyeoldc.backnotifybeforesadamf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097016.eyeoldc.backabsentf BEGIN
#define DDNAME       "3func.36097016.eyeoldc.backabsentf"
#define DDNUMB      (countT)0x36097016
#define IDFILE      (countT)0x12e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT eyeOldC::backAbsentF( voidT ) const/*1*/
{
    //NOT SERIALIZED BECAUSE const FUNCTION
    return !!( F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097016.eyeoldc.backabsentf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097017.eyeoldc.setflagsf BEGIN
#define DDNAME       "3func.36097017.eyeoldc.setflagsf"
#define DDNUMB      (countT)0x36097017
#define IDFILE      (countT)0x12ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::setFlagsF( tinS& tinP , const flagsT flagsOnP , const flagsT flagsOffP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    rowEye.rw.flags |= flagsOnP ;
    rowEye.rw.flags &= ~( F(flagsOffP) ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097017.eyeoldc.setflagsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097018.eyeoldc.pushpaperdrawoverridef BEGIN
#define DDNAME       "3func.36097018.eyeoldc.pushpaperdrawoverridef"
#define DDNUMB      (countT)0x36097018
#define IDFILE      (countT)0x12eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::pushPaperDrawOverrideF( tinS& tinP , pulpOldC& pulpP , const countT idPaperP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097018.eyeoldc.pushpaperdrawoverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097019.eyeoldc.poppaperdrawoverridef BEGIN
#define DDNAME       "3func.36097019.eyeoldc.poppaperdrawoverridef"
#define DDNUMB      (countT)0x36097019
#define IDFILE      (countT)0x12ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::popPaperDrawOverrideF( tinS& tinP , pulpOldC& pulpP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097019.eyeoldc.poppaperdrawoverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701a.eyeoldc.anglestospecf BEGIN
#define DDNAME       "3func.3609701a.eyeoldc.anglestospecf"
#define DDNUMB      (countT)0x3609701a
#define IDFILE      (countT)0x12ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
absolute: a cartesian coordinate system for the space that contains the hull, which contains the pod
hull: the hull of a space ship
 the hull can have any orientation in space, just like a real space ship
 the idea is that it is costly (time and fuel) to change the orientation of the hull in space
 the orientation of the hull is changed with rockets and can be perturbed by external, unpredictable shock forces
pod: a pilot's pod within the hull of a space ship
 the pod can have any orientation within the hull
 the idea is that the pod is mounted on magnetic fields within the hull
 the pod has a fixed center point within the hull but can be costlessly and timelessly reoriented to any orientation
 the costless assumption is the limit of a tiny single occupant pod within a huge, planet sized hull
 the timelessness assumes that the body of the pilot is impervious to rotational acceleration and deceleration
 the orientation of the pod within the hull is not subject to external forces
 it is also precisely and instantaneously controllable by overwhelmingly powerful servomotors
middle
 when rendering a line that passes directly behind the pod, the image is split, with part appearing on the left edge, and part appearing on the right edge, of the stroking frame
 vAngleAftP is set to the vertical height of the point on the line that is horizontally directly behind the pod
 this is not done for a move command since the caller does not need to draw anything for a move
*/

/**/

/*1*/voidT eyeOldC::anglesToSpecF( tinS& tinP , flagsT& flagsP , measureT& hAngleP , measureT& vAngleP , measureT& vAngleAftP , measureT xxP , measureT yyP , measureT zzP , vectorOldC& vSpecPodLagP )/*1*/
{
    vectorOldC vSpecPod( tinP , ether ) ;
    vectorOldC vSpecPodHorProj( tinP , ether ) ;
    {
        vectorOldC vSpecAbs( tinP , ether ) ;
        vSpecAbs(1) = xxP ;
        vSpecAbs(2) = yyP ;
        vSpecAbs(3) = zzP ;
        vSpecAbs -= state.vao ;
        podFromAbsF( tinP , vSpecPod , vSpecAbs ) ;

        vSpecPodHorProj( 1 ) = vSpecPod( 1 ) ;
        vSpecPodHorProj( 3 ) = vSpecPod( 3 ) ;
    }

    if( vSpecPod < FUZZ2 )                  // IF ENDPOINT IS VERY CLOSE TO ME
    {
        flagsP = flEYEoLDaNGLEStOsPEC_LINEcONTAINSmE ;
        vAngleP = hAngleP = 0.0 ;
    }
    else
    {
        if( vSpecPodLagP( 0 ) )
        {
            measureT dx = vSpecPod( 1 ) - vSpecPodLagP( 1 ) ;
            measureT dy = vSpecPod( 2 ) - vSpecPodLagP( 2 ) ;
            measureT dz = vSpecPod( 3 ) - vSpecPodLagP( 3 ) ;

            vectorOldC vSpecPodAft( tinP , ether ) ;
            if( dx < - FUZZ2 || dx > FUZZ2 ) // X RANGES
            {
                if
                (
                    ( vSpecPodLagP( 1 ) <=   FUZZ2 && vSpecPod( 1 ) >= - FUZZ2 ) ||
                    ( vSpecPodLagP( 1 ) >= - FUZZ2 && vSpecPod( 1 ) <=   FUZZ2 )
                )
                {
                    measureT dydx = dy / dx ;
                    measureT dzdx = dz / dx ;
                    
                    vSpecPodAft( 1 ) = 0.0 ; //SET AFT TO THE POINT WHERE THE LINE INTERSECTS WITH THE VERTICAL VIEW PLANE
                    vSpecPodAft( 2 ) = vSpecPodLagP( 2 ) - dydx * vSpecPodLagP( 1 ) ;
                    vSpecPodAft( 3 ) = vSpecPodLagP( 3 ) - dzdx * vSpecPodLagP( 1 ) ;
    
                    measureT ry = dy ; if( ry < 0.0 ) ry = - ry ;
                    measureT rz = dz ; if( rz < 0.0 ) rz = - rz ;
                    countT ii = rz > ry ? 3 : 2 ;

                    // TRUE IFF AFT POINT IS BETWEEN THE ENDPOINTS, USING THE DIMENSION THAT RANGES MOST
                    measureT min = vSpecPodLagP( ii ) ;
                    measureT max = vSpecPod( ii ) ;
                    if( max < min )
                    {
                        measureT save = max ;
                        max = min ;
                        min = save ;
                    }
                    measureT test = vSpecPodAft( ii ) ;
                    vSpecPodAft( 0 ) = min - FUZZ2 <= test && test <= max + FUZZ2 ;
                }
            }
            else if // X IS WITHIN FUZZ OF 0
            (
                - FUZZ2 <= vSpecPodLagP( 1 )            &&
                           vSpecPodLagP( 1 ) <= FUZZ2   &&
                - FUZZ2 <= vSpecPod( 1 )                &&
                           vSpecPod( 1 ) <= FUZZ2
            )
            {
                vSpecPodAft( 0 ) = 1 ;
                vSpecPodAft( 1 ) = 0.0 ;
                vSpecPodAft( 2 ) = ( vSpecPodLagP( 2 ) + vSpecPod( 2 ) ) / 2.0 ;
                vSpecPodAft( 3 ) = ( vSpecPodLagP( 3 ) + vSpecPod( 3 ) ) / 2.0 ;
            }

            if( vSpecPodAft( 0 ) && vSpecPodAft < FUZZ2 ) flagsP = flEYEoLDaNGLEStOsPEC_LINEcONTAINSmE ;           // IF LINE PASSES VERY CLOSE TO ME

            if( F(flagsP) & flEYEoLDaNGLEStOsPEC_AFT )
            {
                if( vSpecPodAft( 0 ) && vSpecPodAft( 3 ) < - FUZZ2 )
                {
                    BOSmEASURE04( WHATgbo , atan2( vSpecPodAft( 2 ) , - vSpecPodAft( 3 ) ) / PI )
                    vAngleAftP = tinP.brcm04Raw ;
                }
                else flagsP &= ~( F(flEYEoLDaNGLEStOsPEC_AFT) ) ;
            }
        }

        if( vSpecPod( 3 ) > - FUZZ2 && vSpecPod( 3 ) < FUZZ2 ) //IN FACE PLANE
        {
            if( vSpecPod( 1 ) > - FUZZ2 && vSpecPod( 1 ) < FUZZ2 ) //IN VERTICAL VIEW PLANE (SO IS EITHER DIRECTLY ABOVE OR DIRECTLY BELOW ME)
            {
                hAngleP = 0.0 ;
                if( vSpecPod( 2 ) > - FUZZ2 && vSpecPod( 2 ) < FUZZ2 )  // SPEC IS VERY CLOSE TO ME
                {
                    flagsP |= flEYEoLDaNGLEStOsPEC_LINEcONTAINSmE ;
                    vAngleP = 0.0 ;
                }
                else vAngleP = vSpecPod( 2 ) > 0.0 ? 0.5 : - 0.5 ;
            }
            else if( vSpecPod( 1 ) > 0.0 ) // IN FACE PLANE TO MY RIGHT
            {
                hAngleP = 0.5 ;
                BOSmEASURE04( WHATgbo , atan2( vSpecPod( 2 ) , vSpecPod( 1 ) ) / PI )
                vAngleP = tinP.brcm04Raw ;
            }
            else if( vSpecPod( 1 ) < 0.0 ) // IN FACE PLANE TO MY LEFT
            {
                hAngleP = - 0.5 ;
                BOSmEASURE04( WHATgbo , atan2( vSpecPod( 2 ) , - vSpecPod( 1 ) ) / PI )
                vAngleP = tinP.brcm04Raw ;
            }
        }
        else
        {
            BOSmEASURE04( WHATgbo , atan2( vSpecPod(2) , thirdC::c_sqrtIF( vSpecPodHorProj ) ) / PI )
            vAngleP = tinP.brcm04Raw ;

            if( vSpecPod( 3 ) > 0.0 )
            {
                BOSmEASURE04( WHATgbo , atan2( vSpecPod( 1 ) , vSpecPod( 3 ) ) / PI )
                hAngleP = tinP.brcm04Raw ;
            }
            else
            {
                BOSmEASURE04( WHATgbo , atan2( vSpecPod( 1 ) , - vSpecPod( 3 ) ) / PI )
                hAngleP = tinP.brcm04Raw ;

                if( hAngleP >= 0.0 ) hAngleP =   1.0 - hAngleP ;
                else                 hAngleP = - 1.0 - hAngleP ;
            }
        }
    }

    vSpecPodLagP = vSpecPod ;
    vSpecPodLagP( 0 ) = 1 ; //VALUE IS VALID
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701a.eyeoldc.anglestospecf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701b.eyeoldc.backdrawonscratchdevicef BEGIN
#define DDNAME       "3func.3609701b.eyeoldc.backdrawonscratchdevicef"
#define DDNUMB      (countT)0x3609701b
#define IDFILE      (countT)0x12ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backDrawOnScratchDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701b.eyeoldc.backdrawonscratchdevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701c.eyeoldc.backscratchbitmappushf BEGIN
#define DDNAME       "3func.3609701c.eyeoldc.backscratchbitmappushf"
#define DDNUMB      (countT)0x3609701c
#define IDFILE      (countT)0x12ef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backScratchBitmapPushF( tinS& tinP , pulpOldC& pulpP , const countT cColsP , const countT cRowsP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701c.eyeoldc.backscratchbitmappushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701d.eyeoldc.scratchbitmappopf BEGIN
#define DDNAME       "3func.3609701d.eyeoldc.scratchbitmappopf"
#define DDNUMB      (countT)0x3609701d
#define IDFILE      (countT)0x12f0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backScratchBitmapPopF( tinS& tinP , pulpOldC& pulpP , const boolT bAllP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701d.eyeoldc.scratchbitmappopf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701e.eyeoldc.backdrawonnormaldevicef BEGIN
#define DDNAME       "3func.3609701e.eyeoldc.backdrawonnormaldevicef"
#define DDNUMB      (countT)0x3609701e
#define IDFILE      (countT)0x12f1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backDrawOnNormalDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701e.eyeoldc.backdrawonnormaldevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701f.eyeoldc.backdrawonnulldevicef BEGIN
#define DDNAME       "3func.3609701f.eyeoldc.backdrawonnulldevicef"
#define DDNUMB      (countT)0x3609701f
#define IDFILE      (countT)0x12f2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backDrawOnNullDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.3609701f.eyeoldc.backdrawonnulldevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097020.eyeoldc.backscratchbitmapmonochromepushf BEGIN
#define DDNAME       "3func.36097020.eyeoldc.backscratchbitmapmonochromepushf"
#define DDNUMB      (countT)0x36097020
#define IDFILE      (countT)0x12f3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::backScratchBitmapMonochromePushF( tinS& tinP , pulpOldC& pulpP , const countT cColsP , const countT cRowsP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097020.eyeoldc.backscratchbitmapmonochromepushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097021.eyeoldc.renderf BEGIN
#define DDNAME       "3func.36097021.eyeoldc.renderf"
#define DDNUMB      (countT)0x36097021
#define IDFILE      (countT)0x12f4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::renderF( tinS& tinP , pulpOldC& pulpP , const strokeS* const psttP , const handleC* const phCloneP )/*1*/
{
    for( countT idAdam = 1 ; idAdam <= psttP->idAdam ; idAdam ++ )
    {
        strokeS& sttP = psttP[ CSpREFIX - 1 + idAdam ] ;

        ZE( boolT , bPushObject ) ;
        ZE( boolT , bPopObject ) ;
        switch( sttP.idCaste )
        {
            case scOld_cPUSHiDoBJECT :
            {
                bPushObject = 1 ;
                break ;
            }
            case scOld_POPiDoBJECT :
            {
                bPopObject = 1 ;
                break ;
            }
            default :
            {
                if( idObject && !( F(flagsRender) & flEYEoLDrENDER_ERASE ) )
                {
                    switch( sttP.idCaste )
                    {
                        case scOld_mmMOVEtO :
                        case scOld_mmLINEtO :
                        {
                            mapPaperToEyeOldS map ;
                            map.cArg   = pulpP.cPaperToBackArg ;
                            map.mIdCol = mIdColOrigin + *(measureT*)&sttP.idAdam ;
                            map.mIdRow = mIdRowOrigin + *(measureT*)&sttP.cNote ;
                            (*pulpP.pPaperToBackCBF)( map ) ;

                            stq_sttPending << (byteT*)&S3( (measureT)3.0 , scOld_mmOVERRIDEcBFaRGS , map.xx ) ;
                            stq_sttPending << (byteT*)&S3( map.yy , scOld_mmOVERRIDEcBFaRGS , map.zz ) ;
                            stq_sttPending << (byteT*)&S2( (countT)0 , scOld_cOVERRIDEcBF ) ;

                            break ;
                        }
                    }

                    stq_sttPending << (byteT*)&sttP ;
                    if( sttP.idCaste == sc_cADAM ) sttP.registerF( 0 ) ;
                }
                break ;
            }
        }

        if( bPushObject )
        {
            if( sttP.idAdam && sttP.idAdam != idObject )
            {
                flushPendingF( tinP ) ;
                stq_idObjectUnder << idObject ;
                idObject = sttP.idAdam ;

                if( sw_psttObject.idSlotOfLeverF( tinP , idObject ) ) flagsRender |=      flEYEoLDrENDER_ERASE ;
                else                                                  flagsRender &= ~( F(flEYEoLDrENDER_ERASE) ) ;
            }
        }

        if( bPopObject )
        {
            if( idObject )
            {
                flushPendingF( tinP ) ;
                idObject = 0 ;
                stq_idObjectUnder >> idObject ;

                if( sw_psttObject.idSlotOfLeverF( tinP , idObject ) ) flagsRender |=      flEYEoLDrENDER_ERASE ;
                else                                                  flagsRender &= ~( F(flEYEoLDrENDER_ERASE) ) ;
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097021.eyeoldc.renderf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097022.eyeoldc.flushpendingf BEGIN
#define DDNAME       "3func.36097022.eyeoldc.flushpendingf"
#define DDNUMB      (countT)0x36097022
#define IDFILE      (countT)0x12f5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeOldC::flushPendingF( tinS& tinP )/*1*/
{
    if( !idObject )
    {
        if( stq_sttPending ) { BLAMMO ; } //U::COMMENT THIS OUT FOR SPEED
    }
    else if( F(flagsRender) & flEYEoLDrENDER_ERASE )
    {
        if( stq_sttPending ) { BLAMMO ; } //U::COMMENT THIS OUT FOR SPEED
        ether.delF( tinP , *(strokeS**)&(countT&)sw_psttObject ) ;
        sw_psttObject.freeF( tinP ) ;
    }
    else
    {
        strokeS*& psttObject = *(strokeS**)&(countT&)sw_psttObject ;
        ether.strMakeF( tinP , LF , psttObject , 0 , stq_sttPending ) ; ___( psttObject ) ;

        for( countT ids = stq_sttPending ; ids ; ids -- )
        {
            strokeS& sttc = *(strokeS*)&stq_sttPending[ ids ] ;
            ether.strFuseF( tinP , psttObject , sttc ) ;
            if( sttc.idCaste == sc_cADAM ) sttc.deregisterF() ;
        }
    }
    stq_sttPending.purgeF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36097* : 3func.36097022.eyeoldc.flushpendingf END
