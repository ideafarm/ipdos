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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118002.displayc.dt_displayc BEGIN
#define DDNAME       "3func.36118002.displayc.dt_displayc"
#define DDNUMB      (countT)0x36118002
#define IDFILE      (countT)0x14d0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/displayC::~displayC( voidT )/*1*/
{
    TINSL

    sgnDone_tmDisplayF.waitF( tinP ) ;

    if( processGlobal1I._displayC_pDisplay == this ) processGlobal1I._displayC_pDisplay = 0 ;

    if( ~hWindow ) { BLAMMO ; } // liveF CLOSES THE HANDLE SO THAT IT WILL BE CLOSED ON THE SAME THREAD THAT OPENED IT (win32 REQUIREMENT; WINDOZE IS SUCH A PIECE OF SHIT)
    thirdC::winDestroyWindowClassIF( tinP , postClass ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118002.displayc.dt_displayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118003.displayc.displayc BEGIN
#define DDNAME       "3func.36118003.displayc.displayc"
#define DDNUMB      (countT)0x36118003
#define IDFILE      (countT)0x14d1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/displayC::displayC( tinS& tinP , etherC& etherP , const measureT surfaceErrorLimitP , deviceCBFT pDeviceCBFP , const countT cArgP , const flagsT flagsP ) :/*1*/
deviceC( tinP , etherP , surfaceErrorLimitP , pDeviceCBFP , cArgP , flagsP ) ,
postClass( "ideafarmDisplay" ) ,
stuff( tinP , *this ) ,
sgnDone_tmDisplayF( tinP , TAG( TAGiDnULL ) ) ,
hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW )
{
    idGroup = IDgROUP ;

    if( !processGlobal1I._displayC_pDisplay ) processGlobal1I._displayC_pDisplay = this ;

    ((thirdC&)etherP).winCreateWindowClassF( tinP , postClass , winMessageHandler_displayC_F ) ;

    ether.osThreadF( TaRG2( tmDisplayF , sgnDone_tmDisplayF ) , (countT)this , (countT)&sgnReady ) ;
    sgnReady.waitF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118003.displayc.displayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118006.displayc.livef BEGIN
#define DDNAME       "3func.36118006.displayc.livef"
#define DDNUMB      (countT)0x36118006
#define IDFILE      (countT)0x14d2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT displayC::liveF( tinS& tinP )/*1*/
{
    _IO_
    HWND oshw = (HWND)hWindow.osF( ifcIDtYPEhANDLE_WINDOW ) ;
    for(;;)
    {
        MSG info ;
        BOS( WHATgbo , BOSfAILiFmINUS1 , GetMessage( &info , oshw , 0 , 0 ) )
        BOSpOOP

        if( POOP || !tinP.brcRaw ) break ;

        BOSdOnOTtEST( WHATgbo , DispatchMessage( &info ) )
    }

    quitDrawingF( tinP ) ;
    hWindow.closeIfF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118006.displayc.livef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118007.displayc.positionf BEGIN
#define DDNAME       "3func.36118007.displayc.positionf"
#define DDNUMB      (countT)0x36118007
#define IDFILE      (countT)0x14d3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT displayC::positionF( tinS& tinP , const flagsT flagsP , const countT cColP , const countT cRowP , const countT offColP , const countT offRowP )/*1*/
{
    _IO_

    grabF( tinP , TAG( TAGiDnULL ) ) ;

    dtBitmapF( tinP ) ;

    if( cColP && cRowP )
    {
        cColRefF() = cColP ;            
        cRowRefF() = cRowP ;
    }
    else
    {
        ZE( countT , cColDisplay ) ;
        ZE( countT , cRowDisplay ) ;
        ((thirdC&)ether).osDisplaySizeF( tinP , cColDisplay , cRowDisplay ) ;

        //FOR DEBUGGING ; COMMENT OUT IN PRODUCTION
        //cColDisplay >>= 3 ;
        //cRowDisplay >>= 1 ;

        cColRefF() = cColDisplay ;
        cRowRefF() = cRowDisplay ;
    }

    RECT rectFrame ;
    rectFrame.left   = offColP ;
    rectFrame.top    = offRowP ;
    rectFrame.right  = offColP + cColF() - 1 ;
    rectFrame.bottom = offRowP + cRowF() - 1 ;

    BOS( WHATgbo , BOSoK , AdjustWindowRect( &rectFrame , WS_OVERLAPPEDWINDOW , 0 ) )
    BOSpOOP
        
    if( F(flagsP) & flDISPLAYpOSITION_CREATEwINDOW )
    {
        BOS( WHATgbo , BOSoK , CreateWindowEx( 0 , postClass , "ifcDoodle" , WS_OVERLAPPEDWINDOW , rectFrame.left , rectFrame.top , 1 + rectFrame.right - rectFrame.left , 1 + rectFrame.bottom - rectFrame.top , 0 , 0 , (HINSTANCE)processGlobal3S::_processGlobal3I_IF()._thirdC_hWindowingClient.osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) , 0 ) )
        BOSpOOP
        hWindow.osF( ifcIDtYPEhANDLE_WINDOW , tinP.brcRaw ) ;
        BOS( WHATgbo , BOSoK , GetDC( (HWND)hWindow.osF( ifcIDtYPEhANDLE_WINDOW ) ) )
        BOSpOOP
        oshDeviceRefF() = (HDC)tinP.brcRaw ;
    }

    //WHEN DEBUGGING, COMMENT OUT TOPMOST AND USE 0
    if( !( F(flagsP) & flDISPLAYpOSITION_DOnOTpOSITION ) )
    {            
        BOS( WHATgbo , BOSoK , SetWindowPos( (HWND)hWindow.osF( ifcIDtYPEhANDLE_WINDOW ) , 0/*HWND_TOPMOST*/ , rectFrame.left , rectFrame.top , 1 + rectFrame.right - rectFrame.left , 1 + rectFrame.bottom - rectFrame.top , 0 ) )
        BOSpOOP
    }

    ctBitmapF( tinP ) ;
    gossipF( tinP , ifcIDmSGgOSSIP_BITMAPiSvIRGIN , 0 , ifcIDtYPEgOSSIP_SYSTEM ) ;
    ungrabF( tinP ) ; //20151116@2031: THIS CAUSES DEADLOCK DURING INITIATION BECAUSE gossipF WILL TRY TO GRAB stAss, WHICH MIGHT BE HELD BY ANOTHER THREAD THAT IS TRYING TO GRAB deviceC
}

// SEE THIS MINUTE REPORT FOR DETAILS ON THE POSSIBLE DEADLOCK:
// 
// f48bf81  | 64      'th: 6d40.d0000033    countT __export threadLocalStorageF( const countT idTypeP , kidFT pThreadWorkF , countT cArgP , countT cHowP , const osTextT** ppostHowP , countT hWindowingClientIP , countT hPreviousWindowingClientP , osTextT* postP , countT idCmdShowP )
// f48bf81  | 31      'th: 1ce4.3f000033    TASK( tmDisplayF )
// f48bf81  | c2      'th: aa00.60081163    voidT displayC::liveF( tinS& tinP )
// f48bf81  | 1       'th: 3410.90042163    voidT associateC::moonThePhotographersF( tinS& tinP )
// f48bf81  | 2       'th: 6310.40080063    boolT batonC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// f48bf81  | 2       'th: 4010.500c5063    boolT grabC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// f48bf81  | 0       'th: 2810.500c5063    boolT grabC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// this is grabbed by osTid:8c idAdamRoot:60021015 idAdam:60021015 idThread:a postThreadName:"tmDrawF"
// grabbing: grab object 0422b0a grabF at:90042163(324_9)     stAss.grabF() in associateC::moonThePhotographersF()
// got     : grab object 87a3327 grabF at:70081163(203_9)     grabF() in displayC::positionF()
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// b        tmDisplayF       56b      56b      []TASK0: entering application code
// 
// f48bf81  | 64      'th: 6d40.d0000033    countT __export threadLocalStorageF( const countT idTypeP , kidFT pThreadWorkF , countT cArgP , countT cHowP , const osTextT** ppostHowP , countT hWindowingClientIP , countT hPreviousWindowingClientP , osTextT* postP , countT idCmdShowP )
// f48bf81  | aa4f2   'th: 6492.b7000033    TASK( tmDrawF )
// f48bf81  | 1       'th: a792.b7000033    TASK( tmDrawF )
// f48bf81  | 95      'th: 3800.60021015    
// f48bf81  | 1       'th: 2210.a00a1163    voidT eyeC::moveF( tinS& tinP , const vectorOldC& vDeltaAtP , const measureT deltaHeadingP , const measureT deltaElevationP , const measureT deltaBankP )
// f48bf81  | 9       'th: 3410.90042163    voidT associateC::moonThePhotographersF( tinS& tinP )
// f48bf81  | c5      'th: 8610.a0042163    voidT associateC::takeMyPictureF( tinS& tinP , associateC& vieweeP )
// f48bf81  | b       'th: a510.c00a1163    voidT eyeC::sayCheeseF( tinS& tinP , byteT* const pbaViewP , countT cbaViewP , associateC& viewerP )
// f48bf81  | 46      'th: f400.40002163    voidT spaceC::pelF( tinS& tinP , pelC*& pPelP , deviceC& deviceP )
// f48bf81  | 2       'th: 6310.40080063    boolT batonC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// f48bf81  | 2       'th: 4010.500c5063    boolT grabC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// f48bf81  | 0       'th: 2810.500c5063    boolT grabC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// this is grabbed by osTid:ce11 idAdamRoot:60021015 idAdam:60021015 idThread:b postThreadName:"tmDisplayF"
// grabbing: grab object 87a3327 grabF at:40002163(119_9)     while( cUngrabsDone -- ) deviceP.grabF( tinP , TAG( TAGiDnULL ) ) ; in spaceC::pelF
// got     : grab object 0422b0a grabF at:90042163(324_9)     stAss.grabF() ; in associateC::moonThePhotographersF
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// a        tmDrawF          e72304   e72304   []TASK0: entering application code
// 


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118007.displayc.positionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118008.displayc.heargossipf BEGIN
#define DDNAME       "3func.36118008.displayc.heargossipf"
#define DDNUMB      (countT)0x36118008
#define IDFILE      (countT)0x14d4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT displayC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
{
    /**/LOGrAWb( "hearGossipF [idgMe,idgOrigin,idType,cArg]: " , idGroup , " " , originP.idGroupF() , " " , idTypeP , " " , idMsgP , " " , cArgP , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118008.displayc.heargossipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118009.displayc.invalidatef BEGIN
#define DDNAME       "3func.36118009.displayc.invalidatef"
#define DDNUMB      (countT)0x36118009
#define IDFILE      (countT)0x14d5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT displayC::invalidateF( tinS& tinP )/*1*/
{
    BOS( WHATgbd , BOSoK , InvalidateRect( (HWND)hWindow.osF( ifcIDtYPEhANDLE_WINDOW ) , 0 , 0 ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36118* : 3func.36118009.displayc.invalidatef END
