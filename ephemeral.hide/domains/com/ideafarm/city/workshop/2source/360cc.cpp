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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360cc* : 3func.360cc002.processglobal3s.dt_processglobal3s BEGIN
#define DDNAME       "3func.360cc002.processglobal3s.dt_processglobal3s"
#define DDNUMB      (countT)0x360cc002
#define IDFILE      (countT)0x139c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/processGlobal3S::~processGlobal3S( voidT )/*1*/
{
    TINSL
    THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY | flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360cc* : 3func.360cc002.processglobal3s.dt_processglobal3s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360cc* : 3func.360cc003.processglobal3s.processglobal3s BEGIN
#define DDNAME       "3func.360cc003.processglobal3s.processglobal3s"
#define DDNUMB      (countT)0x360cc003
#define IDFILE      (countT)0x139d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

const mapCTS processGlobal3S::pMap1[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200218.IDtYPErELAYpOPcLIENTwORK.h"
}
;

const mapCTS processGlobal3S::pMap2[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200242.ifcIDpHASEaDAM.h"
}
;

const mapCTS processGlobal3S::pMap3[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112001ea.ifcIDaDAMcLASS.h"
}
;

const mapCTS processGlobal3S::pMap4[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200124.ifcIDaDAM.h"
}
;

const mapCTS processGlobal3S::pMap5[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112000c0.ifcIDtYPEsOULiTEM.h"
}
;

const mapCTS processGlobal3S::pMap6[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112000cc.BOS.h"
}
;

const mapCTS processGlobal3S::pMap7[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112000d6.ifcIDeVENTeXCEPTIONmONITORED.h"
}
;

const mapCTS processGlobal3S::pMap8[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112000c1.ifciDtYPEdROPnOTE.h"
}
;

const mapCTS processGlobal3S::pMap9[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.19000006.genFileTitles.h"
}
;

const mapCTS processGlobal3S::pMapA[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200241.ifcIDpHASEtHREAD.h"
}
;

const mapCTS processGlobal3S::pMapB[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.1120044f.sc.h"
}
;

//U::BUG: pMap9 pMapC BOTH CONTAIN genFileTitles.h
const mapCTS processGlobal3S::pMapC[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.19000006.genFileTitles.h"
}
;

const mapCTS processGlobal3S::pMapD[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112001bf.ifcIDtYPEsTROKEcALLbACK.h"
}
;

const mapCTS processGlobal3S::pMapE[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200099.idwm.h"
}
;

const mapCTS processGlobal3S::pMapF[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112001cf.ifcIDtYPEtOOL.h"
}
;

const mapCTS processGlobal3S::pMap01[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.11200170.ifcIDtYPEtELLsYS.h"
}
;

const mapCTS processGlobal3S::pMap11[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.1120039b.LISTnAME.h"
}
;

const mapCTS processGlobal3S::pMap21[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112001d2.ifcIDtINnAMED.h"
}
;

const mapCTS processGlobal3S::pMap31[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112002a5.saA1.h"
}
;

const mapCTS processGlobal3S::pMap41[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.01000001.mapGroup.h"
}
;

const mapCTS processGlobal3S::pMap51[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112004de.sa_SSS.h"
}
;

const mapCTS processGlobal3S::pMap61[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.1120035a.ifcidphaseprocess.h"
}
;

const pcTimeBaseBuilt[] =
{
    #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.1900000c.genTimeBaseBuilt.h"
}
;

/*1*/processGlobal3S::processGlobal3S( voidT ) :/*1*/
timeBaseBuilt( pcTimeBaseBuilt[ 0 ] , pcTimeBaseBuilt[ 1 ] ) ,
pQuietInOut( "!quietInOut" ) ,
pPostIdNumaNode( processGlobal1I.postIdNumaNode , sizeof processGlobal1I.postIdNumaNode , "!idNumaNode" ) ,
scfp_idNumaNode( *(sCountT*)&processGlobal1I.idNumaNode , processGlobal1I.postIdNumaNode ) ,
pPostIdHome( processGlobal1I.postIdHome , sizeof processGlobal1I.postIdHome , "!idHome" ) ,
scfp_idHome( *(sCountT*)&processGlobal1I.idHome , processGlobal1I.postIdHome ) ,
pPostIdAdamRoot( processGlobal1I.postIdAdamRoot , sizeof processGlobal1I.postIdAdamRoot ) ,
scfp_idAdamRootOld( *(sCountT*)&processGlobal1I.idAdamRoot , processGlobal1I.postIdAdamRoot ) ,
scfp_idAdamRoot(    *(sCountT*)&processGlobal1I.idAdamRoot , processGlobal1I.postIdAdamRoot ) ,
scfp_idAdam(        *(sCountT*)&rootAdamGlobal1I.idAdam    , processGlobal1I.postIdAdamRoot ) ,
gloSecurity( 0 ) ,
tinVeryVeryEarlyLateMain( tinVeryVeryEarlyLateMain , LF , (byteT*)0 , 1 , 0 , POSTtHREADnAMEmAIN , flTINs_NOeLDER | flTINs_CONSTRUCTqUIETLY | flTINs_DISABLEcOMMENTS | flTINs_CTdTuSESsELF , ifcIDtINnAMED_tinVeryVeryEarlyLateMainI , processGlobal1I.pbTlsMain , sizeof processGlobal1I.pbTlsMain ) ,
heap( tinVeryVeryEarlyLateMain ) ,
bkTelemetrySysEarlyLate( tinVeryVeryEarlyLateMain , LF , (byteT*)0 , 0 , 0 , flBOOKc_WRITER | flBOOKc_USEhEAPnOTnAPKIN , TOCK      , 0 , 0 ) ,
bkTelemetryAppEarlyLate( tinVeryVeryEarlyLateMain , LF , (byteT*)0 , 0 , 0 , flBOOKc_WRITER | flBOOKc_USEhEAPnOTnAPKIN , TOCK << 3 , 0 , 0 ) ,
do1( ifcIDdO_ALLOCATEaPPtELEMETRYpENDINGbUFFER ) ,
_handleC_linked_sm(       tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_SHAREDmEMORY , ifcIDgRABlAYER_dLINKEDc ) ,
grabMemorySpace( tinVeryVeryEarlyLateMain , ifcIDgRABlAYER_cGRABmEMORYsPACEc ) ,
mapPopClientWork ( pMap1  , sizeof pMap1  / sizeof pMap1 [ 0 ] ) ,
mapProcessPhase  ( pMap2  , sizeof pMap2  / sizeof pMap2 [ 0 ] ) ,
mapAdamClass     ( pMap3  , sizeof pMap3  / sizeof pMap3 [ 0 ] ) ,
mapAdam          ( pMap4  , sizeof pMap4  / sizeof pMap4 [ 0 ] ) ,
mapSoulItem      ( pMap5  , sizeof pMap5  / sizeof pMap5 [ 0 ] ) ,
mapWhat          ( pMap6  , sizeof pMap6  / sizeof pMap6 [ 0 ] ) ,
mapExceptionType ( pMap7  , sizeof pMap7  / sizeof pMap7 [ 0 ] ) ,
mapdropNoteType  ( pMap8  , sizeof pMap8  / sizeof pMap8 [ 0 ] ) ,
mapDefinition    ( pMap9  , sizeof pMap9  / sizeof pMap9 [ 0 ] ) ,
mapThreadPhase   ( pMapA  , sizeof pMapA  / sizeof pMapA [ 0 ] ) ,
mapCaste         ( pMapB  , sizeof pMapB  / sizeof pMapB [ 0 ] ) ,
mapFileTitle     ( pMapC  , sizeof pMapC  / sizeof pMapC [ 0 ] ) ,
mapSadamCall     ( pMapD  , sizeof pMapD  / sizeof pMapD [ 0 ] ) ,
mapWindowMessage ( pMapE  , sizeof pMapE  / sizeof pMapE [ 0 ] ) ,
mapTool          ( pMapF  , sizeof pMapF  / sizeof pMapF [ 0 ] ) ,
mapSay           ( pMap01 , sizeof pMap01 / sizeof pMap01[ 0 ] ) ,
mapListName      ( pMap11 , sizeof pMap11 / sizeof pMap11[ 0 ] ) ,
mapTinName       ( pMap21 , sizeof pMap21 / sizeof pMap21[ 0 ] ) ,
mapAlphabet1     ( pMap31 , sizeof pMap31 / sizeof pMap31[ 0 ] ) ,
mapGroup         ( pMap41 , sizeof pMap41 / sizeof pMap41[ 0 ] ) ,
mapSSSIdAdam     ( pMap51 , sizeof pMap51 / sizeof pMap51[ 0 ] ) ,
mapIdPhaseProcess( pMap61 , sizeof pMap61 / sizeof pMap61[ 0 ] ) ,
napSlab(    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "napSlab"    , 0 , sizeof( slabS ) , ifcOPENsHAREDmEMORYhOW_nCeO , flNAPKINc_DOnOTsERIALIZEcT | flNAPKINc_ALLmEMORYsPACES | flNAPKINc_ALLhOMES | flNAPKINc_ALLuSERS ) ,
napHome(    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "napHome"    , 0 , sizeof( homeS ) , ifcOPENsHAREDmEMORYhOW_nCeO , flNAPKINc_DOnOTsERIALIZEcT | flNAPKINc_ALLmEMORYsPACES                                           ) ,
do2( ifcIDdO_REGISTERrOOTaDAMhEART ) ,
_grabC_napGrabWant( tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "napGrabWant" , 0 , sizeof( grabWantS ) * TOCK , ifcOPENsHAREDmEMORYhOW_nCeO , flNAPKINc_DOnOTsERIALIZEcT ) , //CODEsYNC: 0a00001 0a00001 0a00001 0a00001
do3( ifcIDdO_SETUPsOCKETS ) ,
bksTelemetrySys(             tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTelemetrySys"             , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE /*(SO tmEatTelemetrySysF CAN SERIALIZE)*/ , TICK << 1 /*MUST BE TUCK << 2 OR GREATER*/ , 0 , 0 , pbBooksNoPuseFootTelemetrySys             , sizeof pbBooksNoPuseFootTelemetrySys                                         ) ,
bksTelemetryApp(             tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTelemetryApp"             , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE /*(SO tmEatTelemetryAppF CAN SERIALIZE)*/ , TICK << 1 /*MUST BE TUCK << 2 OR GREATER*/ , 0 , 0 , pbBooksNoPuseFootTelemetryApp             , sizeof pbBooksNoPuseFootTelemetryApp             , ifcIDmEMORYsPACE_UNIVERSE ) ,
bksTraceHomeEcho(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceHomeEcho"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceHomeEcho            , sizeof pbBooksNoPuseFootTraceHomeEcho            , ifcIDmEMORYsPACE_UNIVERSE ) ,
bksTraceHomeEchoDeadman1(    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceHomeEchoDeadman1"    , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceHomeEchoDeadman1    , sizeof pbBooksNoPuseFootTraceHomeEchoDeadman1    , ifcIDmEMORYsPACE_UNIVERSE ) ,
bksTraceHomeEchoGorillaHome( tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceHomeEchoGorillaHome" , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceHomeEchoGorillaHome , sizeof pbBooksNoPuseFootTraceHomeEchoGorillaHome , ifcIDmEMORYsPACE_UNIVERSE ) ,
bksTrace(                    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTrace"                    , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TICK >> 2                                  , 0 , 0 , pbBooksNoPuseFootTrace                    , sizeof pbBooksNoPuseFootTrace                                                ) ,
bksTraceDivert01(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert01"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert01            , sizeof pbBooksNoPuseFootTraceDivert01                                        ) ,
bksTraceDivert02(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert02"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert02            , sizeof pbBooksNoPuseFootTraceDivert02                                        ) ,
bksTraceDivert03(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert03"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert03            , sizeof pbBooksNoPuseFootTraceDivert03                                        ) ,
bksTraceDivert04(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert04"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert04            , sizeof pbBooksNoPuseFootTraceDivert04                                        ) ,
bksTraceDivert05(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert05"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert05            , sizeof pbBooksNoPuseFootTraceDivert05                                        ) ,
bksTraceDivert06(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert06"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert06            , sizeof pbBooksNoPuseFootTraceDivert06                                        ) ,
bksTraceDivert07(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert07"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert07            , sizeof pbBooksNoPuseFootTraceDivert07                                        ) ,
bksTraceDivert08(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert08"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert08            , sizeof pbBooksNoPuseFootTraceDivert08                                        ) ,
bksTraceDivert09(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert09"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert09            , sizeof pbBooksNoPuseFootTraceDivert09                                        ) ,
bksTraceDivert0a(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0a"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0a            , sizeof pbBooksNoPuseFootTraceDivert0a                                        ) ,
bksTraceDivert0b(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0b"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0b            , sizeof pbBooksNoPuseFootTraceDivert0b                                        ) ,
bksTraceDivert0c(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0c"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0c            , sizeof pbBooksNoPuseFootTraceDivert0c                                        ) ,
bksTraceDivert0d(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0d"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0d            , sizeof pbBooksNoPuseFootTraceDivert0d                                        ) ,
bksTraceDivert0e(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0e"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0e            , sizeof pbBooksNoPuseFootTraceDivert0e                                        ) ,
bksTraceDivert0f(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert0f"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert0f            , sizeof pbBooksNoPuseFootTraceDivert0f                                        ) ,
bksTraceDivert10(            tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksTraceDivert10"            , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE                                           , TOCK << 2                                  , 0 , 0 , pbBooksNoPuseFootTraceDivert10            , sizeof pbBooksNoPuseFootTraceDivert10                                        ) ,
bkTraceLoop(                 tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bkTraceLoop"                 , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKc_WRITER  | flBOOKc_DOnOTuSEpUSE  | flBOOKc_DOnOTrEGISTERfILE  | flBOOKc_USEgRABmEMORYsPACEoVERRIDE  | flBOOKc_PRIORbOOKnOTcONTINUEDhERE       , TICK >> 2                                                                                                                                                                     ) ,
bksWord(                     tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksWord"                     , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE | flBOOKSc_CYCLE                          , TOCK                                       , 0 , 0 , pbBooksNoPuseFootWord                     , sizeof pbBooksNoPuseFootWord                                                 ) ,
bksWords(                    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , "bksWords"                    , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER | flBOOKSc_DOnOTuSEpUSE | flBOOKSc_DOnOTrEGISTERfILE | flBOOKSc_USEgRABmEMORYsPACEoVERRIDE | flBOOKSc_CYCLE                          , TOCK                                       , 0 , 0 , pbBooksNoPuseFootWords                    , sizeof pbBooksNoPuseFootWords                                                ) ,
_thirdC_hWindowingClient(    tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOWINGcLIENT ) ,
_thirdC_grab_flagsProcessState_( tinVeryVeryEarlyLateMain , TAGnOtIN( TAGiDnULL ) , flGRABc_null , ifcIDgRABlAYER_fLEAF ) ,
testWater( tinVeryVeryEarlyLateMain ) ,
cry301( 0x301 ) ,
cry302( 0x302 ) ,
cry303( 0x303 ) ,
cry304( 0x304 ) ,
cry305( 0x305 ) ,
cry306( 0x306 ) ,
cry307( 0x307 ) ,
cry308( 0x308 ) ,
cry309( 0x309 ) ,
cry30a( 0x30a ) ,
cry30b( 0x30b ) ,
cry30c( 0x30c ) ,
cry30d( 0x30d ) ,
cry30e( 0x30e ) ,
cry30f( 0x30f ) ,
cry310( 0x310 ) ,
cry311( 0x311 ) ,
cry312( 0x312 ) ,
cry313( 0x313 ) ,
cry314( 0x314 ) ,
cry315( 0x315 ) ,
cry316( 0x316 ) ,
cry317( 0x317 ) ,
cry318( 0x318 ) ,
cry319( 0x319 ) ,
cry31a( 0x31a ) ,
cry31b( 0x31b ) ,
cry31c( 0x31c ) ,
cry31d( 0x31d ) ,
cry31e( 0x31e ) ,
cry31f( 0x31f ) ,
cry320( 0x320 ) ,
cry321( 0x321 ) ,
cry322( 0x322 ) ,
cry323( 0x323 ) ,
cry324( 0x324 ) ,
cry325( 0x325 )
{
    thirdC::osTraceWrongNodeIF( tinVeryVeryEarlyLateMain , (byteT*)this , "processGlobal3S: this" ) ;
    CONoUTrAW5( "processGlobal3S ct: [idAdamRoot,idNumaNode]:    " , processGlobal1I.idAdamRoot , "    " , processGlobal1I.idNumaNode , "\r\n" ) ;

    // THIS PRODUCES AN APP TELEMETRY FILE THAT CONTAINS THE WOTH b EMISSIONS
    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH07 ) { BLAMMO ; }
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360cc* : 3func.360cc003.processglobal3s.processglobal3s END
