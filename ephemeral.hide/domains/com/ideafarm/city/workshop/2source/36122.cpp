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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122002.devicec.dt_devicec BEGIN
#define DDNAME       "3func.36122002.devicec.dt_devicec"
#define DDNUMB      (countT)0x36122002
#define IDFILE      (countT)0x14fc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/deviceC::~deviceC( voidT )/*1*/
{
    TINSL

    quitDrawingF( tinP ) ;

    if( 1 == decv02AM( tinP.pAdamGlobal1->_deviceC_cMe ) )
    {
        tinP.pAdamGlobal1->_deviceC_flagsHelper |= flDEVICEchELPER_QUIT ;

        {
            stackC& stJob = *tinP.pAdamGlobal1->_deviceC_pStkJob ;
            drawJobS job ;
            stJob << (byteT*)&job ;
        }

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( tinP.pAdamGlobal1->_deviceC_cHelper )
        {
            ++ s ; ether.osSleepF( tinP , TOCK >> 3 ) ;
        }

        //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_UNWATCH ) ;
        //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_SHUTDOWN ) ;
    }

    dtBitmapF( tinP ) ;

    BOS( WHATgbo , BOSoK , DeleteObject( oshBrush  ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , DeleteObject( oshPen    ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122002.devicec.dt_devicec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122003.devicec.devicec BEGIN
#define DDNAME       "3func.36122003.devicec.devicec"
#define DDNUMB      (countT)0x36122003
#define IDFILE      (countT)0x14fd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/deviceC::deviceC( tinS& tinP , etherC& etherP , const measureT surfaceErrorLimitP , deviceCBFT pDeviceCBFP , const countT cArgP , const flagsT flagsP ) :/*1*/
associateC( tinP , etherP , IDgROUP , sizeof( assViewStqS ) ) ,
cCol( 0 ) ,
cRow( 0 ) ,
oshDevice( 0 ) ,
oshDeviceMemory( 0 ) ,
oshBrushWas( 0 ) ,
oshPenWas( 0 ) ,
oshBitmapWas( 0 ) ,
oshBrush( 0 ) ,
oshPen( 0 ) ,
oshBitmap( 0 ) ,
bSuppressAnimation( 1 ) ,
sgnDone_tmDrawF( tinP , TAG( TAGiDnULL ) ) ,
bQuit( 0 ) ,
st_idEye( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ,
surfaceErrorLimit( surfaceErrorLimitP ) ,
flagsCt( flagsP ) ,
pDeviceCBF( pDeviceCBFP ) ,
cArg( cArgP ) ,
sgnReady( tinP , TAG( TAGiDnULL ) )
{
    BOS( WHATgbo , BOSoK , CreateSolidBrush( 0 ) )
    BOSpOOP
    oshBrush = (HBRUSH)tinP.brcRaw ;

    BOS( WHATgbo , BOSoK , CreatePen( PS_SOLID , 1 , 0 ) )
    BOSpOOP
    oshPen   = (HPEN)tinP.brcRaw ;

    //LOGrAW5( "deviceC 1 [pDevice,bSuppressAnimation]: " , this , " " , bSuppressAnimation , "\r\n" ) ;
    IFbEcAREFUL
    {
        if( POOP ) { BLAMMO ; }
    }

    if( !( incv02AM( tinP.pAdamGlobal1->_deviceC_cMe ) ) )
    {
        countT cDo = 1 /*1 + thirdC::osProcessorsIF( tinP )*/ ; // WO FOR EACH CPU, PLUS WO TO KEEP I/O TO ALL DEVICES GOING (SHOULD BE WO FOR EACH DEVICE BUT THAT WOULD BE MORE COMPLEX TO CODE)
        //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_SETUP , flETHERwHERE_null , cDo ) ;
        //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_WATCH ) ;
        while( cDo -- )
        {
            inc02AM( tinP.pAdamGlobal1->_deviceC_cHelper ) ;
            ether.osThreadF( TaRG1( tmDrawHelperF ) , (countT)this ) ;
        }
    }

    ether.osThreadF( TaRG2( tmDrawF , sgnDone_tmDrawF ) , (countT)&bQuit , (countT)this , (countT)&st_idEye , (countT)&sgnReady ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122003.devicec.devicec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122004.devicec.ctbitmapf BEGIN
#define DDNAME       "3func.36122004.devicec.ctbitmapf"
#define DDNUMB      (countT)0x36122004
#define IDFILE      (countT)0x14fe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT deviceC::ctBitmapF( tinS& tinP )/*1*/
{
    if( oshDevice && cCol && cRow )
    {
        BOS( WHATgbo , BOSoK , CreateCompatibleDC( oshDevice ) )
        BOSpOOP
        oshDeviceMemory = (HDC)tinP.brcRaw ;
        BOS( WHATgbo , BOSoK , CreateCompatibleBitmap( oshDevice , cCol , cRow ) )
        BOSpOOP
        oshBitmap       = (HBITMAP)tinP.brcRaw ;
        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshBitmap ) )
        oshBitmapWas    = (HBITMAP)tinP.brcRaw ;
        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshBrush  ) )
        oshBrushWas     =  (HBRUSH)tinP.brcRaw ;
        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshPen    ) )
        oshPenWas       =    (HPEN)tinP.brcRaw ;

        BOS( WHATgbo , BOSoK , SetROP2(   oshDeviceMemory , R2_COPYPEN ) )
        BOSpOOP
        BOS( WHATgbo , BOSoK , Rectangle( oshDeviceMemory , 0 , 0 , cCol , cRow ) )
        BOSpOOP
        BOS( WHATgbo , BOSoK , SetROP2(   oshDeviceMemory , R2_XORPEN ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122004.devicec.ctbitmapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122005.devicec.dtbitmapf BEGIN
#define DDNAME       "3func.36122005.devicec.dtbitmapf"
#define DDNUMB      (countT)0x36122005
#define IDFILE      (countT)0x14ff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT deviceC::dtBitmapF( tinS& tinP )/*1*/
{
    if( oshBitmap )
    {
        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshBitmapWas ) )
        
        if( oshBitmap != (HGDIOBJ)tinP.brcRaw ) { BLAMMO ; }
        BOS( WHATgbo , BOSoK , DeleteObject( oshBitmap ) )
        BOSpOOP
        oshBitmap = 0 ;

        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshBrushWas ) )
        BOSdOnOTtEST( WHATgbo , SelectObject( oshDeviceMemory , oshPenWas ) )

        BOS( WHATgbo , BOSoK , DeleteDC(     oshDeviceMemory ) )
        BOSpOOP
        oshDeviceMemory = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122005.devicec.dtbitmapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122006.devicec.heargossipf BEGIN
#define DDNAME       "3func.36122006.devicec.heargossipf"
#define DDNUMB      (countT)0x36122006
#define IDFILE      (countT)0x1500


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT deviceC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122006.devicec.heargossipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122007.devicec.quitdrawingf BEGIN
#define DDNAME       "3func.36122007.devicec.quitdrawingf"
#define DDNUMB      (countT)0x36122007
#define IDFILE      (countT)0x1501


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT deviceC::quitDrawingF( tinS& tinP )/*1*/
{
    bQuit = 1 ;
    sgnDone_tmDrawF.waitF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36122* : 3func.36122007.devicec.quitdrawingf END
