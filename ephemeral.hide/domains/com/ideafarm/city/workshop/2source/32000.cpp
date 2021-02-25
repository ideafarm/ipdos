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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000001.debugf BEGIN
#define DDNAME       "3func.32000001.debugf"
#define DDNUMB      (countT)0x32000001
#define IDFILE      (countT)0x8da


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT _export debugF( voidT )/*1*/
{
    ZE( countT , foo ) ;

    l1: foo ++ ;
    goto l1 ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000001.debugf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000046.tmservicemainf BEGIN
#define DDNAME       "3func.32000046.tmservicemainf"
#define DDNUMB      (countT)0x32000046
#define IDFILE      (countT)0x8db


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

boolT bServiceFired ;
boolT bServiceAdamReturnedG ;

VOID WINAPI serviceHandlerF( DWORD fdwControl ) // CALLED WITHIN StartServiceCtrlDispatcher; GUARANTEED TO BE ON THREAD 1
{
    if( !processGlobal1I.pEtThreadServiceEventHandler ) return ;
    etherC& etThread = *processGlobal1I.pEtThreadServiceEventHandler ;
    tinS& tinP = *processGlobal1I.pTinDadService ; //THIS HAS BEEN VERIFIED FOR WINDOWS: I EXECUTE ON THE SAME THREAD THAT CALLED THE DISPATCHER

    ZE( boolT , bRemoveMyself ) ;
    switch( fdwControl )
    {
        case SERVICE_CONTROL_INTERROGATE :
        {
            BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
            BOSpOOP
            break ;
        }
        case SERVICE_CONTROL_STOP :
        case SERVICE_CONTROL_SHUTDOWN :
        {
            etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUSH ) ;
            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCurrentState = SERVICE_STOP_PENDING ;
            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCheckPoint ++ ;
            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWaitHint = 8000 ;
            BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
            BOSpOOP
            //POPUP( "SERVICE_STOP_PENDING" ) ;

            bServiceFired = 1 ;
            etThread.etherFireImpersonateMonitorIF( tinP ) ;
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                while( !bServiceAdamReturnedG && !etThread )
                {
                    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCheckPoint ++ ;
                    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWaitHint = 8000 ;
                    BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
                    BOSpOOP
                    ++ s; thirdC::dosSleepRawIF( tinP , 250 ) ; //MUST BE MUCH LOWER THAN THE dwWaitHint VALUE
                }
            }

            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCurrentState = SERVICE_STOPPED ;
            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCheckPoint = 0 ;
            ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWaitHint = 0 ;
            BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
            BOSpOOP

            break ;
        }
    }
}

/*1*/TASK( tmServiceMainF ) // THIS THREAD WAS LAUNCHED BY THE O.S.; "TASK" AND "DONE" ARE BEING USED TO PROVIDE tinP, ether, etThread/*1*/

if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    TELL( "setting up" )
    thirdC&   thThread = etThread ;
    countT    cHowP     =            pTaskP->c1 ;
    osTextT** ppostHowP = (osTextT**)pTaskP->c2 ;
    handleC&  hDll      = *(handleC*)pTaskP->c3 ;

    thirdC::third_flagsModeProcess1I_IF( tinP ) |= flMODEpROCESS1_SERVICE ;

    if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_NOsYSTEMtHREADS ) ) { __( tinP.monitor.idThread - ifcIDtHREADlOW_tmWindowsOrServiceMainF ) ; }
    BOS( WHATgbo , BOSoK , RegisterServiceCtrlHandler( tinP.pAdamGlobal1->postServiceName , serviceHandlerF ) )
    BOSpOOP
    tinP.pAdamGlobal1->oshServiceStatus = tinP.brcRaw ;

    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCurrentState = SERVICE_START_PENDING ;
    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_SHUTDOWN ;
    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWin32ExitCode = NO_ERROR ;
    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCheckPoint ++ ;
    ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWaitHint = 0x4000 ;
    BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
    BOSpOOP

    ZE( strokeS* , psttDll ) ;
    {
        __Z( cHowP ) ;
        ZE( strokeS* , psttw ) ;
        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
        etThread.strWordF( tinP , psttw , T(*ppostHowP) , sttq , S1C('.') , 3 ) ; ___( psttw ) ;
        countT idf = 2 ;
        etThread.strSubstringF( tinP , psttDll , idf , countTC() , psttw ) ; ___( psttDll ) ;
        etThread.delF( tinP , psttw ) ;
    }

    {
        etThread.dllOpenF( tinP , hDll , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/hover/ideafarm.")+T(psttDll)+T(".ipdos-wd") ) ;
        etThread.delF( tinP , psttDll ) ;
        __Z( hDll ) ;
        ZE( mainFT , pMainF ) ;
        etThread.dllEntryF( tinP , pMainF , hDll , T("mainF") ) ;
        __Z( pMainF ) ;
        TNCID ;
        mainS main( tinP , ether , etThread , hDll , T("cid ")+tCid+T(" level 1") ) ;
    
        ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCurrentState = SERVICE_RUNNING ;
        ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwCheckPoint = 0 ;
        ((SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus)->dwWaitHint = 0 ;
        BOS( WHATgbo , BOSoK , SetServiceStatus( (SERVICE_STATUS_HANDLE)tinP.pAdamGlobal1->oshServiceStatus , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
        BOSpOOP
        if( pMainF )
        {
            TELL( "calling the adam" )
            tinP.flagsThreadMode1 |= flTHREADmODE1_DRIVERaDAM ;
            if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
            (*pMainF)( &main ) ; //ASSUME: DEFINITION BLOCKS UNTIL QUITTING
            TELL( "pMainF has returned" )
            if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
            tinP.flagsThreadMode1 &= ~( F(flTHREADmODE1_DRIVERaDAM) ) ;
    
            //THIS IS ILLEGAL; win32 SILENTLY CRAPS WHEN A SERVICE CALLS HIRE AND/OR FIRE FOR A SERVICE
            if( /*ether &&*/ !bServiceFired )
            {
                TELL( "firing the driver" )
                bServiceAdamReturnedG = 1 ;
                ((thirdC&)etThread).osDriverFireF( tinP , tinP.pAdamGlobal1->postServiceName ) ;
                TELL( "the driver has been fired" )
            }
        }
        TELL( "tmServiceMainF: cleaning up" )
    }
    bServiceAdamReturnedG = 1 ; //U::DO THIS LATER
}
DONE( tmServiceMainF )


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000046.tmservicemainf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200005c.osvkf BEGIN
#define DDNAME       "3func.3200005c.osvkf"
#define DDNUMB      (countT)0x3200005c
#define IDFILE      (countT)0x8dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//CODEsYNC: 0010296 00103c6: EVERY idTool VALUE MUST HAVE AN ASSOCIATED VK VALUE, IN THE SAME ORDER (FOR SPEEDY MAPPING)

countT pVk[] =
{
    #if defined( __NT__ )

        0x00                            , // ifcIDtYPEtOOL_begin
        'A'                             , // ifcIDtYPEtOOL_a
        'B'                             , // ifcIDtYPEtOOL_b
        'C'                             , // ifcIDtYPEtOOL_c
        'D'                             , // ifcIDtYPEtOOL_d
        'E'                             , // ifcIDtYPEtOOL_e
        'F'                             , // ifcIDtYPEtOOL_f
        'G'                             , // ifcIDtYPEtOOL_g
        'H'                             , // ifcIDtYPEtOOL_h
        'I'                             , // ifcIDtYPEtOOL_i
        'J'                             , // ifcIDtYPEtOOL_j
        'K'                             , // ifcIDtYPEtOOL_k
        'L'                             , // ifcIDtYPEtOOL_l
        'M'                             , // ifcIDtYPEtOOL_m
        'N'                             , // ifcIDtYPEtOOL_n
        'O'                             , // ifcIDtYPEtOOL_o
        'P'                             , // ifcIDtYPEtOOL_p
        'Q'                             , // ifcIDtYPEtOOL_q
        'R'                             , // ifcIDtYPEtOOL_r
        'S'                             , // ifcIDtYPEtOOL_s
        'T'                             , // ifcIDtYPEtOOL_t
        'U'                             , // ifcIDtYPEtOOL_u
        'V'                             , // ifcIDtYPEtOOL_v
        'W'                             , // ifcIDtYPEtOOL_w
        'X'                             , // ifcIDtYPEtOOL_x
        'Y'                             , // ifcIDtYPEtOOL_y
        'Z'                             , // ifcIDtYPEtOOL_z
        'A'                             , // ifcIDtYPEtOOL_A
        'B'                             , // ifcIDtYPEtOOL_B
        'C'                             , // ifcIDtYPEtOOL_C
        'D'                             , // ifcIDtYPEtOOL_D
        'E'                             , // ifcIDtYPEtOOL_E
        'F'                             , // ifcIDtYPEtOOL_F
        'G'                             , // ifcIDtYPEtOOL_G
        'H'                             , // ifcIDtYPEtOOL_H
        'I'                             , // ifcIDtYPEtOOL_I
        'J'                             , // ifcIDtYPEtOOL_J
        'K'                             , // ifcIDtYPEtOOL_K
        'L'                             , // ifcIDtYPEtOOL_L
        'M'                             , // ifcIDtYPEtOOL_M
        'N'                             , // ifcIDtYPEtOOL_N
        'O'                             , // ifcIDtYPEtOOL_O
        'P'                             , // ifcIDtYPEtOOL_P
        'Q'                             , // ifcIDtYPEtOOL_Q
        'R'                             , // ifcIDtYPEtOOL_R
        'S'                             , // ifcIDtYPEtOOL_S
        'T'                             , // ifcIDtYPEtOOL_T
        'U'                             , // ifcIDtYPEtOOL_U
        'V'                             , // ifcIDtYPEtOOL_V
        'W'                             , // ifcIDtYPEtOOL_W
        'X'                             , // ifcIDtYPEtOOL_X
        'Y'                             , // ifcIDtYPEtOOL_Y
        'Z'                             , // ifcIDtYPEtOOL_Z
        '0'                             , // ifcIDtYPEtOOL_0
        '1'                             , // ifcIDtYPEtOOL_1
        '2'                             , // ifcIDtYPEtOOL_2
        '3'                             , // ifcIDtYPEtOOL_3
        '4'                             , // ifcIDtYPEtOOL_4
        '5'                             , // ifcIDtYPEtOOL_5
        '6'                             , // ifcIDtYPEtOOL_6
        '7'                             , // ifcIDtYPEtOOL_7
        '8'                             , // ifcIDtYPEtOOL_8
        '9'                             , // ifcIDtYPEtOOL_9
        0x60                            , // ifcIDtYPEtOOL_PAD0
        0x61                            , // ifcIDtYPEtOOL_PAD1
        0x62                            , // ifcIDtYPEtOOL_PAD2
        0x63                            , // ifcIDtYPEtOOL_PAD3
        0x64                            , // ifcIDtYPEtOOL_PAD4
        0x65                            , // ifcIDtYPEtOOL_PAD5
        0x66                            , // ifcIDtYPEtOOL_PAD6
        0x67                            , // ifcIDtYPEtOOL_PAD7
        0x68                            , // ifcIDtYPEtOOL_PAD8
        0x69                            , // ifcIDtYPEtOOL_PAD9
        0xc0                            , // ifcIDtYPEtOOL_ACCENT
        0x37                            , // ifcIDtYPEtOOL_AND
        0x32                            , // ifcIDtYPEtOOL_AT
        0xdc                            , // ifcIDtYPEtOOL_BACKsLASH
        0x36                            , // ifcIDtYPEtOOL_CARET
        0xba                            , // ifcIDtYPEtOOL_COLON
        0xbc                            , // ifcIDtYPEtOOL_COMMA
        0xdd                            , // ifcIDtYPEtOOL_CURLEYcLOSE
        0xdb                            , // ifcIDtYPEtOOL_CURLEYoPEN
        0xbf                            , // ifcIDtYPEtOOL_DIVIDE
        0x6f                            , // ifcIDtYPEtOOL_DIVIDEnUM
        0x34                            , // ifcIDtYPEtOOL_DOLLAR
        0xbb                            , // ifcIDtYPEtOOL_EQUALS
        0x31                            , // ifcIDtYPEtOOL_EXCLAIM
        0xbe                            , // ifcIDtYPEtOOL_GREATERtHAN
        0xbc                            , // ifcIDtYPEtOOL_LESStHAN
        0xbd                            , // ifcIDtYPEtOOL_MINUS
        0x6d                            , // ifcIDtYPEtOOL_MINUSnUM
        0x38                            , // ifcIDtYPEtOOL_MULTIPLY
        0x6a                            , // ifcIDtYPEtOOL_MULTIPLYnUM
        0xdc                            , // ifcIDtYPEtOOL_OR
        0x30                            , // ifcIDtYPEtOOL_PARENcLOSE
        0x39                            , // ifcIDtYPEtOOL_PARENoPEN
        0x35                            , // ifcIDtYPEtOOL_PERCENT
        0xbe                            , // ifcIDtYPEtOOL_PERIOD
        0x6e                            , // ifcIDtYPEtOOL_PERIODnUM
        0xbb                            , // ifcIDtYPEtOOL_PLUS
        0x6b                            , // ifcIDtYPEtOOL_PLUSnUM
        0x33                            , // ifcIDtYPEtOOL_POUND
        0xbf                            , // ifcIDtYPEtOOL_QUESTION
        0xde                            , // ifcIDtYPEtOOL_QUOTEdOUBLE
        0xde                            , // ifcIDtYPEtOOL_QUOTEsINGLE
        0xba                            , // ifcIDtYPEtOOL_SEMICOLON
        VK_SPACE                        , // ifcIDtYPEtOOL_SPACE
        0xdd                            , // ifcIDtYPEtOOL_SQUAREcLOSE
        0xdb                            , // ifcIDtYPEtOOL_SQUAREoPEN
        0xc0                            , // ifcIDtYPEtOOL_TILDE
        0xbd                            , // ifcIDtYPEtOOL_UNDERSCORE
        0x00                            , // ifcIDtYPEtOOL_CONTROLbEGIN
        VK_LMENU                        , // ifcIDtYPEtOOL_ALT
        VK_RMENU                        , // ifcIDtYPEtOOL_ALTrIGHT
        VK_BACK                         , // ifcIDtYPEtOOL_BACKSPACE
        VK_APPS                         , // ifcIDtYPEtOOL_BASEoScELLlIST
        VK_LWIN                         , // ifcIDtYPEtOOL_BASEoSlEFT
        VK_RWIN                         , // ifcIDtYPEtOOL_BASEoSrIGHT
        VK_LCONTROL                     , // ifcIDtYPEtOOL_CONTROL
        VK_RCONTROL                     , // ifcIDtYPEtOOL_CONTROLrIGHT
        VK_DELETE                       , // ifcIDtYPEtOOL_DELETE
        VK_DELETE                       , // ifcIDtYPEtOOL_DELETEnUM
        VK_DOWN                         , // ifcIDtYPEtOOL_DOWN
        VK_DOWN                         , // ifcIDtYPEtOOL_DOWNnUM
        VK_END                          , // ifcIDtYPEtOOL_END
        VK_END                          , // ifcIDtYPEtOOL_ENDnUM
        VK_RETURN                       , // ifcIDtYPEtOOL_ENTER
        VK_RETURN                       , // ifcIDtYPEtOOL_ENTERnUM
        VK_ESCAPE                       , // ifcIDtYPEtOOL_ESCAPE
        VK_F1                           , // ifcIDtYPEtOOL_F1
        VK_F2                           , // ifcIDtYPEtOOL_F2
        VK_F3                           , // ifcIDtYPEtOOL_F3
        VK_F4                           , // ifcIDtYPEtOOL_F4
        VK_F5                           , // ifcIDtYPEtOOL_F5
        VK_F6                           , // ifcIDtYPEtOOL_F6
        VK_F7                           , // ifcIDtYPEtOOL_F7
        VK_F8                           , // ifcIDtYPEtOOL_F8
        VK_F9                           , // ifcIDtYPEtOOL_F9
        VK_F10                          , // ifcIDtYPEtOOL_F10
        VK_F11                          , // ifcIDtYPEtOOL_F11
        VK_F12                          , // ifcIDtYPEtOOL_F12
        VK_HOME                         , // ifcIDtYPEtOOL_HOME
        VK_HOME                         , // ifcIDtYPEtOOL_HOMEnUM
        VK_INSERT                       , // ifcIDtYPEtOOL_INSERT
        VK_INSERT                       , // ifcIDtYPEtOOL_INSERTnUM
        VK_LEFT                         , // ifcIDtYPEtOOL_LEFT
        VK_LEFT                         , // ifcIDtYPEtOOL_LEFTnUM
        VK_CAPITAL                      , // ifcIDtYPEtOOL_LOCKcAPS
        VK_NUMLOCK                      , // ifcIDtYPEtOOL_LOCKnUM
        VK_SCROLL                       , // ifcIDtYPEtOOL_LOCKsCROLL
        VK_CLEAR                        , // ifcIDtYPEtOOL_NULLnUM
        VK_NEXT                         , // ifcIDtYPEtOOL_PAGEdOWN
        VK_NEXT                         , // ifcIDtYPEtOOL_PAGEdOWNnUM
        VK_PRIOR                        , // ifcIDtYPEtOOL_PAGEuP
        VK_PRIOR                        , // ifcIDtYPEtOOL_PAGEuPnUM
        VK_CANCEL                       , // ifcIDtYPEtOOL_BREAK
        VK_PAUSE                        , // ifcIDtYPEtOOL_PAUSE
        VK_RIGHT                        , // ifcIDtYPEtOOL_RIGHT
        VK_RIGHT                        , // ifcIDtYPEtOOL_RIGHTnUM
        VK_LSHIFT                       , // ifcIDtYPEtOOL_SHIFT
        VK_RSHIFT                       , // ifcIDtYPEtOOL_SHIFTrIGHT
        VK_TAB                          , // ifcIDtYPEtOOL_TAB
        VK_TAB                          , // ifcIDtYPEtOOL_TABbACK
        VK_UP                           , // ifcIDtYPEtOOL_UP
        VK_UP                           , // ifcIDtYPEtOOL_UPnUM
        0x00                            , // ifcIDtYPEtOOL_CONTROLeND
        0x00                            , // ifcIDtYPEtOOL_MOUSEbUTTONlEFT
        0x00                            , // ifcIDtYPEtOOL_MOUSEbUTTONcENTER
        0x00                            , // ifcIDtYPEtOOL_MOUSEbUTTONrIGHT
        0x00                            , // ifcIDtYPEtOOL_MOUSEpOSITION
        0x00                              // ifcIDtYPEtOOL_end

    #endif
}
;

/*1*/countT osvkF( const countT idToolP )/*1*/
{
    return pVk[ idToolP - ifcIDtYPEtOOL_begin ] ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200005c.osvkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000067.filewritegf BEGIN
#define DDNAME       "3func.32000067.filewritegf"
#define DDNUMB      (countT)0x32000067
#define IDFILE      (countT)0x8dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::EDIT TO CONFORM: TEST PARAMS, cba, ETC

countT grabMe ;

/*1*/voidT fileWriteGF( const osTextT* const postNameP , const byteT* const pbP , const countT cbP , const boolT bAppendP )/*1*/
{
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        byteT _pbsd[ SECURITY_DESCRIPTOR_MIN_LENGTH + sizeof( countT ) ] ;

        countT _cbAlign = (countT)_pbsd % sizeof( countT ) ;
        if( _cbAlign ) _cbAlign = sizeof( countT ) - _cbAlign ;

        SECURITY_ATTRIBUTES sa ;
        sa.nLength = sizeof sa ;
        sa.lpSecurityDescriptor = (SECURITY_DESCRIPTOR*)( _pbsd + _cbAlign ) ;
        sa.bInheritHandle = 0 ;

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( InitializeSecurityDescriptor( sa.lpSecurityDescriptor , SECURITY_DESCRIPTOR_REVISION ) )
        BOSnOtIN( SetSecurityDescriptorDacl( sa.lpSecurityDescriptor , 0 , 0 , 0 ) )

        while( setIfZeAM( grabMe , 1 ) ) { BOSnOvALUEnOtIN( OSsLEEPf( TUCK ) ) }

        for(;;)
        {
            //20160608@1239: COMMENTED OUT FILE_FLAG_WRITE_THROUGH TO INCREASE SPEED FOR LOGGING
            ZE( countT , _brcRaw ) ;
            BOSnOvALUEnOtIN( SetLastError( 0 ) )
            BOSnOtIN( CreateFile( postNameP , GENERIC_WRITE , 0 , &sa , bAppendP ? OPEN_ALWAYS : CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN /*| FILE_FLAG_WRITE_THROUGH*/ , 0 ) )
            HANDLE osh = (HANDLE)_brcRaw ;
            if( osh == INVALID_HANDLE_VALUE )    
            {
                ZE( countT , _brcRaw ) ;
                BOSnOvALUEnOtIN( OSsLEEPf( TUCK >> 2 ) )
                continue ;
            }

            if( bAppendP )
            {
                count2S c2o ;
                ZE( countT , _brcRaw ) ;
                BOSnOtIN( SetFilePointer( osh , c2o.c1 , (LONG*)&c2o.c2 , FILE_END ) )
                c2o.c1 = _brcRaw ;
            }
    
            ZE( DWORD , cba ) ;
            BOSnOtIN( WriteFile( osh , pbP , cbP ? cbP : thirdC::c_strlenIF( pbP ) , &cba , 0 ) )
            BOSnOtIN( CloseHandle( osh ) )
            osh = 0 ;
            break ;
        }
        grabMe = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000067.filewritegf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000075.loggf BEGIN
#define DDNAME       "3func.32000075.loggf"
#define DDNUMB      (countT)0x32000075
#define IDFILE      (countT)0x8de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//20150105@1748: DEPRECATED THIS BECAUSE NONCONFORMANT; THIS USES DRIVE C HARDCODED

/*1*/voidT logGF( const osTextT* postP , const osTextT* postLogP )/*1*/
{
    //osTextT* postLogDefault = "d:\\tm p\\ideafarm.log.txt" ;
    //
    //ZE( countT , _brcRaw ) ;
    //BOSnOtIN( fopen( postLogP ? postLogP : postLogDefault , "ab" ) )
    //FILE* pFile = (FILE*)_brcRaw ;
    //if( pFile )
    //{
    //    ZE( countT , _brcRaw ) ;
    //    BOSnOtIN( fprintf( pFile , postP ) )
    //    BOSnOtIN( fclose( pFile ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000075.loggf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000076.loggf BEGIN
#define DDNAME       "3func.32000076.loggf"
#define DDNUMB      (countT)0x32000076
#define IDFILE      (countT)0x8df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//20150105@1748: DEPRECATED THIS BECAUSE NONCONFORMANT; THIS USES DRIVE C HARDCODED

/*1*/voidT logGF( countT cP , const osTextT* postLogP )/*1*/
{
    //CONoUTrAW3( "" , cP , "" ) ;
    //
    //osTextT* postLogDefault = "d:\\tm p\\ideafarm.log.txt" ;
    //
    //ZE( countT , _brcRaw ) ;
    //BOSnOtIN( fopen( postLogP ? postLogP : postLogDefault , "ab" ) )
    //FILE* pFile = (FILE*)_brcRaw ;
    //if( pFile )
    //{
    //    ZE( countT , _brcRaw ) ;
    //    BOSnOtIN( fprintf( pFile , "%x" , cP ) )
    //    BOSnOtIN( fclose( pFile ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000076.loggf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000078.congf BEGIN
#define DDNAME       "3func.32000078.congf"
#define DDNUMB      (countT)0x32000078
#define IDFILE      (countT)0x8e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT conGF( const osTextT* postP )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( printf( postP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000078.congf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000079.congf BEGIN
#define DDNAME       "3func.32000079.congf"
#define DDNUMB      (countT)0x32000079
#define IDFILE      (countT)0x8e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT conGF( countT cP )/*1*/
{
    ZE( countT , _brcRaw ) ;
    BOSnOtIN( printf( "%x" , cP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000079.congf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200007a.winmessagehandler_displayc_f BEGIN
#define DDNAME       "3func.3200007a.winmessagehandler_displayc_f"
#define DDNUMB      (countT)0x3200007a
#define IDFILE      (countT)0x8e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

boolT bDebug = 1 ;
boolT bLog ;

/*1*/extern "C" countT OSF winMessageHandler_displayC_F( const countT oshWindowP , const countT idCmdP , const countT p1P , const countT p2P )/*1*/
{
    displayArgS*  pStuff = displayC::pStuffIF() ;
    static boolT  bGotClose ;
    static boolT  bAllowResize ;
    static boolT  bNeedRepaint ;
    static boolT  bWothPaintDone ;
    ZE( countT , rc ) ;

    tinS& tinP = *pStuff->pTinWindow ;

    switch( idCmdP )
    {
        case WM_DISPLAYCHANGE :
        {
            if( bLog ) { LOGrAW( "winmess/WM_DISPLAYCHANGE +\r\n" ) ; }
            pStuff->pDisplay->positionF( *pStuff->pTinWindow ) ;
            if( pStuff->pDisplay->pDeviceCBF ) (*pStuff->pDisplay->pDeviceCBF)( *pStuff->pTinWindow , flDEVICEcbf_null , *pStuff->pDisplay , pStuff->pDisplay->cArg , ifcIDeVENTdEVICEc_RECONFIGURED , 0 ) ;
            if( bLog ) { LOGrAW( "winmess/WM_DISPLAYCHANGE -\r\n" ) ; }
            break ;
        }
        case WM_SETFOCUS :
        {
            if( bLog ) { LOGrAW( "winmess/WM_SETFOCUS +\r\n" ) ; }
            if( pStuff && bWothPaintDone )
            {
                //LOGrAW5( "WM_SETFOCUS 0 [pDisplay,bSuppressAnimation]: " , pStuff->pDisplay , " " , pStuff->pDisplay->bSuppressAnimation , "\r\n" ) ;
                pStuff->pDisplay->bSuppressAnimation = 0 ;
            }
            bNeedRepaint = 1 ;
            if( bLog ) { LOGrAW( "winmess/WM_SETFOCUS -\r\n" ) ; }
            break ;
        }
        case WM_KILLFOCUS :
        {
            if( bLog ) { LOGrAW( "winmess/WM_KILLFOCUS +\r\n" ) ; }
            if( !bDebug )
            {
                bAllowResize = 1 ;
                if( pStuff )
                {
                    //LOGrAW5( "WM_KILLFOCUS 1 [pDisplay,bSuppressAnimation]: " , pStuff->pDisplay , " " , pStuff->pDisplay->bSuppressAnimation , "\r\n" ) ;
                    pStuff->pDisplay->bSuppressAnimation = 1 ;
                }
                BOSdOnOTtEST( WHATgbo , ShowWindow( (HWND)oshWindowP , SW_MINIMIZE ) )
            }
        
            if( bLog ) { LOGrAW( "winmess/WM_KILLFOCUS -\r\n" ) ; }
            break ;
        }
        case WM_CLOSE :
        {
            if( bLog ) { LOGrAW( "winmess/WM_CLOSE +\r\n" ) ; }
            bGotClose = 1 ;
            BOS( WHATgbo , BOSoK , PostMessage( (HWND)oshWindowP , WM_QUIT , 0 , 0 ) )
            BOSpOOP
            if( bLog ) { LOGrAW( "winmess/WM_CLOSE -\r\n" ) ; }
            break ;
        }
        case idwm_PAINT :
        case WM_PAINT :
        {
            if( bLog ) { LOGrAW( "winmess/WM_PAINT +\r\n" ) ; }
            PAINTSTRUCT info ;
            BOS( WHATgbo , BOSoK , BeginPaint( (HWND)oshWindowP , &info ) )
            BOSpOOP
            HDC oshDevice = (HDC)tinP.brcRaw ;

            if( pStuff )
            {
                tinS& tinP = *pStuff->pTinWindow ;

                pStuff->pDisplay->grabF( tinP , TAG( TAGiDnULL ) ) ;

                countT cCol = pStuff->pDisplay->cColF() ;
                countT cRow = pStuff->pDisplay->cRowF() ;
                if( cCol && cRow )
                {
                    HDC oshDeviceMemory = pStuff->pDisplay->oshDeviceMemoryF() ;
                    BOS( WHATgbo , BOSoK , BitBlt( oshDevice , 0 , 0 , cCol , cRow , oshDeviceMemory , 0 , 0 , SRCCOPY ) )
                    BOSpOOP
                    if( bLog ) { LOGrAW7( "winmess/WM_PAINT BitBlt [bOk,oshDevice,oshDeviceMemory]:    " , tinP.brcRaw , "    " , oshDevice , "    " , oshDeviceMemory , "\r\n" ) ; }
                }

                bNeedRepaint = 0 ;

                if( !bWothPaintDone )
                {
                    bWothPaintDone = 1 ;
                    //LOGrAW5( "WM_PAINT 0 [pDisplay,bSuppressAnimation]: " , pStuff->pDisplay , " " , pStuff->pDisplay->bSuppressAnimation , "\r\n" ) ;
                    pStuff->pDisplay->bSuppressAnimation = 0 ;
                }

                pStuff->pDisplay->ungrabF( tinP ) ;
            }

            EndPaint( (HWND)oshWindowP , &info ) ;
            if( bLog ) { LOGrAW( "winmess/WM_PAINT -\r\n" ) ; }
            break ;
        }
        case idwm_SHOW :
        {
            if( bLog ) { LOGrAW( "winmess/idwm_SHOW +\r\n" ) ; }
            BOSdOnOTtEST( WHATgbo , ShowWindow( (HWND)((const handleC&)*pStuff->pDisplay).osF( ifcIDtYPEhANDLE_WINDOW ) , SW_SHOW ) )
            if( bLog ) { LOGrAW( "winmess/idwm_SHOW -\r\n" ) ; }
            break ;
        }
        case WM_WINDOWPOSCHANGED :
        {
            if( bLog ) { LOGrAW( "winmess/WM_WINDOWPOSCHANGED +\r\n" ) ; }
            if( !bGotClose && pStuff && pStuff->pDisplay ) //WINDOWS CALLS ME (MESSAGE IS SENT, NOT POSTED) AFTER THE MESSAGE PUMP TERMINATES
            {
                WINDOWPOS* pInfo = (WINDOWPOS*)p2P ;
        
                RECT info ;
                BOS( WHATgbo , BOSoK , GetClientRect( (HWND)oshWindowP , &info ) ) // DISCARD THE BOTTOM ROW AND RIGHTMOST COL OF THIS RECT
                BOSpOOP

                if( info.right && info.bottom ) //CONDITIONAL BECAUSE I AM CALLED (SEND MESSAGE) DURING THE positionF CALL WITHIN WM_DISPLAYCHANGE
                {
                    tinS& tinP = *pStuff->pTinWindow ;
                    pStuff->pDisplay->positionF( tinP , flDISPLAYpOSITION_DOnOTpOSITION , info.right , info.bottom , info.left , info.top ) ;
                    if( pStuff->pDisplay->pDeviceCBF ) (*pStuff->pDisplay->pDeviceCBF)( *pStuff->pTinWindow , flDEVICEcbf_null , *pStuff->pDisplay , pStuff->pDisplay->cArg , ifcIDeVENTdEVICEc_RESIZED , 0 ) ;
                }
            }

            if( bLog ) { LOGrAW( "winmess/WM_WINDOWPOSCHANGED -\r\n" ) ; }
            break ;
        }
        case WM_WINDOWPOSCHANGING :
        {
            if( bLog ) { LOGrAW( "winmess/WM_WINDOWPOSCHANGING +\r\n" ) ; }
            if( bAllowResize ) bAllowResize = 0 ;

            //THIS IS NEEDED BECAUSE SOMETIMES WINDOWS OVERRIDES THE REQUESTED POSITION (E.G. THIS WILL HAPPEN WHEN SCREEN RESOLUTION IS CHANGED)
            else /*if( !bDebug )*/
            {
                RECT info ;
                info.left   = 0 ;
                info.top    = /*0x8*/0 ;
                BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CXSCREEN ) )
                BOSpOOP
                info.right  = ( tinP.brcRaw - 1 ) >> 1 ; // FOR DEBUGGING, UNCOMMENT ">> x"
                BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CYSCREEN ) )
                BOSpOOP
                info.bottom = ( tinP.brcRaw - 1 ) >> 1 ; // FOR DEBUGGING, UNCOMMENT ">> x"
                BOS( WHATgbo , BOSoK , AdjustWindowRect( &info , WS_OVERLAPPEDWINDOW , 0 ) )
                BOSpOOP
            
                WINDOWPOS* pInfo = (WINDOWPOS*)p2P ;
                pInfo->x      = info.left ;
                pInfo->y      = info.top ;
                pInfo->cx     = info.right - info.left + 1 ;
                pInfo->cy     = info.bottom - info.top + 1 ;
                pInfo->flags &= ~( SWP_NOMOVE | SWP_NOSIZE ) ;
            }

            if( bLog ) { LOGrAW( "winmess/WM_WINDOWPOSCHANGING -\r\n" ) ; }
            break ;
        }
        default :
        {
            if( bLog ) { LOGrAW( "winmess/default +\r\n" ) ; }
            BOSdOnOTtEST( WHATgbo , DefWindowProc( (HWND)oshWindowP , idCmdP , p1P , p2P ) )
            rc = tinP.brcRaw ;
            if( bLog ) { LOGrAW( "winmess/default -\r\n" ) ; }
            break ;
        }
    }

    if( bNeedRepaint )
    {
        BOS( WHATgbo , BOSoK , PostMessage( (HWND)oshWindowP , idwm_PAINT , 0 , 0 ) )
        BOSpOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200007a.winmessagehandler_displayc_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200007f.diskmakepathiff BEGIN
#define DDNAME       "3func.3200007f.diskmakepathiff"
#define DDNUMB      (countT)0x3200007f
#define IDFILE      (countT)0x8e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT diskMakePathIfF( tinS& tinP , osTextT* const postP )/*1*/
{
    BOSdOnOTtEST( WHATgbo , strlen( postP ) )
    countT costi = tinP.brcRaw ;
    osTextT ostLathSave = postP[ costi - 1 ] ;
    boolT bDir = ostLathSave == '\\' ;

    if( bDir ) postP[ costi - 1 ] = 0 ;

    BOSdOnOTtEST( WHATgbo , strrchr( postP , '\\' ) )
    osTextT* postSlash = (osTextT*)tinP.brcRaw ;
    if( postSlash )
    {
        osTextT ostSave = *postSlash ;
                          *postSlash = 0 ;

        BOS( WHATsfr , BOSoK , CreateDirectory( postP , 0 ) ) ;
        if( tinP.bosFail && tinP.brcQuery != ERROR_ALREADY_EXISTS )
        {
            diskMakePathIfF( tinP , postP ) ;
            BOS( WHATsfr , BOSoK , CreateDirectory( postP , 0 ) ) ;
            BOSpOOP
        }

        *postSlash = ostSave ;
    }

    if( bDir ) postP[ costi - 1 ] = ostLathSave ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.3200007f.diskmakepathiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000080.diskwalkcopycbf BEGIN
#define DDNAME       "3func.32000080.diskwalkcopycbf"
#define DDNUMB      (countT)0x32000080
#define IDFILE      (countT)0x8e4

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT diskWalkCopyCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP , const countT* const pModuloFilesP , const countT* const pModuloDirsP )/*1*/
{
    _IO_
    ZE( boolT , bDoIt ) ;
    if( postNameP )
    {
        diskWalkCopyInfoS& info = *(diskWalkCopyInfoS*)pcArgP ;
        BOSdOnOTtEST( WHATgbo , strcpy( info.postTo + info.costToRoot , postNameP + info.costFromRoot ) )

        bDoIt = info.pCbf
            ? (*info.pCbf)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP )
            : 1
        ;

        if( bDoIt )
        {
            diskMakePathIfF( tinP , info.postTo ) ;

            BOSdOnOTtEST( WHATgbo , strlen( postNameP ) )
            countT costLike = tinP.brcRaw ;
            boolT  bDir = postNameP[ costLike - 1 ] == '\\' ;
        
            //CONoUTrAW( info.postTo ) ;
            //CONoUTrAW( "\r\n" ) ;

            if( bDir )
            {
                BOSdOnOTtEST( WHATgbo , strlen( info.postTo ) )
                countT costTo = tinP.brcRaw ;
                info.postTo[ costTo - 1 ] = 0 ;
                BOS( WHATsfr , BOSoK , CreateDirectory( info.postTo , 0 ) ) ;
                if( tinP.bosFail && tinP.brcQuery != ERROR_ALREADY_EXISTS ) BOSpOOP ;
            }
            else
            {
                //BOS( WHATsfr , BOSoK , MoveFile( postNameP , info.postTo ) ) ;
                BOS( WHATsfr , BOSoK , CopyFile( postNameP , info.postTo , 0 ) ) ;
                BOSpOOP ;
            }
        }
    }
    return bDoIt ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000080.diskwalkcopycbf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000081.diskwalkgathercbf BEGIN
#define DDNAME       "3func.32000081.diskwalkgathercbf"
#define DDNUMB      (countT)0x32000081
#define IDFILE      (countT)0x8e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT diskWalkGatherCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP , const countT* const pModuloFilesP , const countT* const pModuloDirsP )/*1*/
{
    _IO_
    ZE( boolT , bDoIt ) ;
    if( postNameP )
    {
        diskWalkCopyInfoS& info = *(diskWalkCopyInfoS*)pcArgP ;
        //BOSdOnOTtEST( WHATgbo , strcpy( info.postTo + info.costToRoot , postNameP + info.costFromRoot ) )

        bDoIt = info.pCbf
            ? (*info.pCbf)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP )
            : 1
        ;

        if( bDoIt )
        {
            BOSdOnOTtEST( WHATgbo , strlen( postNameP ) )
            countT costLike = tinP.brcRaw ;
            boolT  bDir = postNameP[ costLike - 1 ] == '\\' ;

            if( bDir )
            {
                //BOSdOnOTtEST( WHATgbo , strlen( info.postTo ) )
                //countT costTo = tinP.brcRaw ;
                //info.postTo[ costTo - 1 ] = 0 ;
                //BOS( WHATsfr , BOSoK , CreateDirectory( info.postTo , 0 ) ) ;
                //if( tinP.bosFail && tinP.brcQuery != ERROR_ALREADY_EXISTS ) BOSpOOP ;
            }
            else
            {
                ZE( countT , _brcRaw ) ;

                countT cSlashSkip = info.pcArgApp ? *info.pcArgApp : 0 ;

                const osTextT* postNameUse = postNameP ;
                while( *postNameUse && cSlashSkip -- )
                {
                    BOSnOtIN( strchr( postNameUse , '\\' ) )
                    postNameUse = (osTextT*)_brcRaw ;
                    if( *postNameUse ) postNameUse ++ ;
                }

                osTextT postNameClean[ TUCK << 1 ] ;
                BOSnOtIN( strcpy( postNameClean , postNameUse ) )
                {
                    osTextT* postc = postNameClean ;
                    while( *postc )
                    {
                        if( *postc == '\\' ) *postc = '.' ;
                        postc ++ ;
                    }
                }

                //etherC::etRockIF( tinP ).traceF( tinP , T("diskWalkGatherCBF [postNameP,to]:  ")+T(postNameP)+T("                ")+T(postNameClean) ) ;

                BOS( WHATsfr , BOSoK , MoveFile( postNameP , T(info.postTo)+T(postNameClean) ) ) ;
                if( tinP.bosFail ) etherC::etRockIF( tinP ).traceF( tinP , T("diskWalkGatherCBF / error: could not move [postNameP,postNameClean]:    ")+T(postNameP)+T("    ")+T(postNameClean) ) ;
            }
        }
    }

    return bDoIt ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000081.diskwalkgathercbf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000082.diskwalktimeprefixcbf BEGIN
#define DDNAME       "3func.32000082.diskwalktimeprefixcbf"
#define DDNUMB      (countT)0x32000082
#define IDFILE      (countT)0x8e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT diskWalkTimePrefixCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP , const countT* const pModuloFilesP , const countT* const pModuloDirsP )/*1*/
{
    _IO_
    ZE( boolT , bDoIt ) ;
    if( postNameP )
    {
        diskWalkCopyInfoS& info = *(diskWalkCopyInfoS*)pcArgP ;

        bDoIt = info.pCbf
            ? (*info.pCbf)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP )
            : 1
        ;

        if( bDoIt )
        {
            BOSdOnOTtEST( WHATgbo , strlen( postNameP ) )
            countT costLike = tinP.brcRaw ;
            boolT  bDir = postNameP[ costLike - 1 ] == '\\' ;

            if( bDir )
            {
                //BOSdOnOTtEST( WHATgbo , strlen( info.postTo ) )
                //countT costTo = tinP.brcRaw ;
                //info.postTo[ costTo - 1 ] = 0 ;
                //BOS( WHATsfr , BOSoK , CreateDirectory( info.postTo , 0 ) ) ;
                //if( tinP.bosFail && tinP.brcQuery != ERROR_ALREADY_EXISTS ) BOSpOOP ;
            }
            else
            {
                BOSdOnOTtEST( WHATgbo , strrchr( postNameP , '\\' ) )
                osTextT* postShort = (osTextT*)tinP.brcRaw ;
                if( postShort )
                {
                    postShort ++ ;

                    osTextT postTo[ TUCK << 1 ] ;
                    osTextT* postc = postTo ;

                    countT costPrefix = postShort - postNameP ;
                    memcpy( postc , postNameP , costPrefix ) ; postc += costPrefix ;

                    {
                        handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                        thirdC::dosOpenIF( tinP , tinP.pEther , hFile , countTC() , postNameP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_NOcACHE | flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_DOnOTrEGISTER , ifcOPENhOW_nFeO ) ;
        
                        if( ~hFile )
                        {
                            ZE( infoFileS* , pInfo ) ;
                            thirdC::dosQueryFileInfoIF( tinP , pInfo , hFile ) ;
        
                            if( pInfo )
                            {
                                osTextT post9a[ 9 ] ;
                                osTextT post9b[ 9 ] ;
                                post9a[ 8 ] = 0 ;
                                post9b[ 8 ] = 0 ;
        
                                thirdC::c_itoaForeignIF( post9a , pInfo->timeWritten2 , '0' ) ;
                                thirdC::c_itoaForeignIF( post9b , pInfo->timeWritten1 , '0' ) ;
        
                                BOSdOnOTtEST( WHATgbo , strcpy( postc , post9a ) )
                                postc += 8 ;
                                *( postc ++ ) = '.' ;
                                BOSdOnOTtEST( WHATgbo , strcpy( postc , post9b ) )
                                postc += 8 ;
                                *( postc ++ ) = '.' ;
        
                                PUSE( tinP , *(byteT**)&pInfo ) ;
                            }
                        }
                        else
                        {
                            osTextT postBad[] = "error.time.was.supposed.to.go.here." ;
                            BOSdOnOTtEST( WHATgbo , strcpy( postc , postBad ) )
                            postc += sizeof postBad - 1 ;
                        }
                    }

                    BOSdOnOTtEST( WHATgbo , strcat( postc , postShort ) )

                    //LOGrAW( "[postTo,postNameP,postShort]: " ) ;
                    //LOGrAW( postTo ) ;
                    //LOGrAW( " **** " ) ;
                    //LOGrAW( postShort ) ;
                    //LOGrAW( " **** " ) ;
                    //LOGrAW( postNameP ) ;
                    //LOGrAW( "\r\n" ) ;

                    BOS( WHATsfr , BOSoK , MoveFile( postNameP , postTo ) ) ;
                    if( tinP.bosFail )
                    {
                        CONoUTrAW( "Could not move: " ) ;
                        CONoUTrAW( info.postTo ) ;
                        CONoUTrAW( "\r\n" ) ;
                    }
                }
            }
        }
    }

    return bDoIt ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.32000082.diskwalktimeprefixcbf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e4.flagselectedf BEGIN
#define DDNAME       "3func.320000e4.flagselectedf"
#define DDNUMB      (countT)0x320000e4
#define IDFILE      (countT)0x8e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT flagSelectedF( tinS& tinP , const flagsT flagsButtonsP , const flagsT flagButtonSelectedP )/*1*/
{
    ZE( flagsT , flOr ) ;
    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        if( F(flagsButtonsP) & flMESSAGEbOXbUTTON_ABORT )
        {
                 if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_ABORT  ) flOr = MB_DEFBUTTON1 ;
            else if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_RETRY  ) flOr = MB_DEFBUTTON2 ;
            else if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_IGNORE ) flOr = MB_DEFBUTTON3 ;
        }
        else if( F(flagsButtonsP) & flMESSAGEbOXbUTTON_YES )
        {
                 if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_YES    ) flOr = MB_DEFBUTTON1 ;
            else if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_NO     ) flOr = MB_DEFBUTTON2 ;
            else if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_CANCEL ) flOr = MB_DEFBUTTON3 ;
        }
        else if( F(flagsButtonsP) & flMESSAGEbOXbUTTON_CANCEL )
        {
                 if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_OK     ) flOr = MB_DEFBUTTON1 ;
            else if( F(flagButtonSelectedP) & flMESSAGEbOXbUTTON_CANCEL ) flOr = MB_DEFBUTTON2 ;
        }
        else flOr = MB_DEFBUTTON1 ;

    #endif

    if( tinP.fingerprint ) ;
    return flOr ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e4.flagselectedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e5.postswpsymbolf BEGIN
#define DDNAME       "3func.320000e5.postswpsymbolf"
#define DDNUMB      (countT)0x320000e5
#define IDFILE      (countT)0x8e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

struct swpSymbolS
{
    countT      id ;
    osTextT*    post ;
}
;

const swpSymbolS pSwpSymbol[] =
{
    SWP_ASYNCWINDOWPOS  , "SWP_ASYNCWINDOWPOS"                  ,
    SWP_DEFERERASE      , "SWP_DEFERERASE"                      ,
    SWP_NOSENDCHANGING  , "SWP_NOSENDCHANGING"                  ,
    SWP_NOOWNERZORDER   , "SWP_NOOWNERZORDER SWP_NOREPOSITION"  ,
    SWP_NOCOPYBITS      , "SWP_NOCOPYBITS"                      ,
    SWP_HIDEWINDOW      , "SWP_HIDEWINDOW"                      ,
    SWP_SHOWWINDOW      , "SWP_SHOWWINDOW"                      ,
    SWP_FRAMECHANGED    , "SWP_FRAMECHANGED SWP_DRAWFRAME"      ,
    SWP_NOACTIVATE      , "SWP_NOACTIVATE"                      ,
    SWP_NOREDRAW        , "SWP_NOREDRAW"                        ,
    SWP_NOZORDER        , "SWP_NOZORDER"                        ,
    SWP_NOMOVE          , "SWP_NOMOVE"                          ,
    SWP_NOSIZE          , "SWP_NOSIZE"
}
;

/*1*/osTextT* postSwpSymbolF( tinS& tinP , const countT idP )/*1*/
{
    _IO_
    countT cRows = sizeof pSwpSymbol / sizeof pSwpSymbol[ 0 ] ;
    ZE( countT , off ) ;
    while( off < cRows && idP != pSwpSymbol[ off ].id ) off ++ ;
    ZE( osTextT* , postName ) ;
    if( off < cRows ) postName = pSwpSymbol[ off ].post ;
    return postName ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e5.postswpsymbolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e6.postvksymbolf BEGIN
#define DDNAME       "3func.320000e6.postvksymbolf"
#define DDNUMB      (countT)0x320000e6
#define IDFILE      (countT)0x8e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

struct vkSymbolS
{
    countT      id ;
    osTextT*    post ;
}
;

const vkSymbolS pVkSymbol[] =
{
    'A'                         , "'A'" ,
    'B'                         , "'B'" ,
    'C'                         , "'C'" ,
    'D'                         , "'D'" ,
    'E'                         , "'E'" ,
    'F'                         , "'F'" ,
    'G'                         , "'G'" ,
    'H'                         , "'H'" ,
    'I'                         , "'I'" ,
    'J'                         , "'J'" ,
    'K'                         , "'K'" ,
    'L'                         , "'L'" ,
    'M'                         , "'M'" ,
    'N'                         , "'N'" ,
    'O'                         , "'O'" ,
    'P'                         , "'P'" ,
    'Q'                         , "'Q'" ,
    'R'                         , "'R'" ,
    'S'                         , "'S'" ,
    'T'                         , "'T'" ,
    'U'                         , "'U'" ,
    'V'                         , "'V'" ,
    'W'                         , "'W'" ,
    'X'                         , "'X'" ,
    'Y'                         , "'Y'" ,
    'Z'                         , "'Z'" ,
    'a'                         , "'A'" ,
    'b'                         , "'B'" ,
    'c'                         , "'C'" ,
    'd'                         , "'D'" ,
    'e'                         , "'E'" ,
    'f'                         , "'F'" ,
    'g'                         , "'G'" ,
    'h'                         , "'H'" ,
    'i'                         , "'I'" ,
    'j'                         , "'J'" ,
    'k'                         , "'K'" ,
    'l'                         , "'L'" ,
    'm'                         , "'M'" ,
    'n'                         , "'N'" ,
    'o'                         , "'O'" ,
    'p'                         , "'P'" ,
    'q'                         , "'Q'" ,
    'r'                         , "'R'" ,
    's'                         , "'S'" ,
    't'                         , "'T'" ,
    'u'                         , "'U'" ,
    'v'                         , "'V'" ,
    'w'                         , "'W'" ,
    'x'                         , "'X'" ,
    'y'                         , "'Y'" ,
    'z'                         , "'Z'" ,
    VK_LBUTTON                  , "VK_LBUTTON" ,
    VK_RBUTTON                  , "VK_RBUTTON" ,
    VK_CANCEL                   , "VK_CANCEL" ,
    VK_MBUTTON                  , "VK_MBUTTON" ,
    VK_BACK                     , "VK_BACK" ,
    VK_TAB                      , "VK_TAB" ,
    VK_CLEAR                    , "VK_CLEAR" ,
    VK_RETURN                   , "VK_RETURN" ,
    VK_SHIFT                    , "VK_SHIFT" ,
    VK_CONTROL                  , "VK_CONTROL" ,
    VK_MENU                     , "VK_MENU" ,
    VK_PAUSE                    , "VK_PAUSE" ,
    VK_CAPITAL                  , "VK_CAPITAL" ,
    VK_ESCAPE                   , "VK_ESCAPE" ,
    VK_SPACE                    , "VK_SPACE" ,
    VK_PRIOR                    , "VK_PRIOR" ,
    VK_NEXT                     , "VK_NEXT" ,
    VK_END                      , "VK_END" ,
    VK_HOME                     , "VK_HOME" ,
    VK_LEFT                     , "VK_LEFT" ,
    VK_UP                       , "VK_UP" ,
    VK_RIGHT                    , "VK_RIGHT" ,
    VK_DOWN                     , "VK_DOWN" ,
    VK_SELECT                   , "VK_SELECT" ,
    VK_PRINT                    , "VK_PRINT" ,
    VK_EXECUTE                  , "VK_EXECUTE" ,
    VK_SNAPSHOT                 , "VK_SNAPSHOT" ,
    VK_INSERT                   , "VK_INSERT" ,
    VK_DELETE                   , "VK_DELETE" ,
    VK_HELP                     , "VK_HELP" ,
    VK_LWIN                     , "VK_LWIN" ,
    VK_RWIN                     , "VK_RWIN" ,
    VK_APPS                     , "VK_APPS" ,
    VK_NUMPAD0                  , "VK_NUMPAD0" ,
    VK_NUMPAD1                  , "VK_NUMPAD1" ,
    VK_NUMPAD2                  , "VK_NUMPAD2" ,
    VK_NUMPAD3                  , "VK_NUMPAD3" ,
    VK_NUMPAD4                  , "VK_NUMPAD4" ,
    VK_NUMPAD5                  , "VK_NUMPAD5" ,
    VK_NUMPAD6                  , "VK_NUMPAD6" ,
    VK_NUMPAD7                  , "VK_NUMPAD7" ,
    VK_NUMPAD8                  , "VK_NUMPAD8" ,
    VK_NUMPAD9                  , "VK_NUMPAD9" ,
    VK_MULTIPLY                 , "VK_MULTIPLY" ,
    VK_ADD                      , "VK_ADD" ,
    VK_SEPARATOR                , "VK_SEPARATOR" ,
    VK_SUBTRACT                 , "VK_SUBTRACT" ,
    VK_DECIMAL                  , "VK_DECIMAL" ,
    VK_DIVIDE                   , "VK_DIVIDE" ,
    VK_F1                       , "VK_F1" ,
    VK_F2                       , "VK_F2" ,
    VK_F3                       , "VK_F3" ,
    VK_F4                       , "VK_F4" ,
    VK_F5                       , "VK_F5" ,
    VK_F6                       , "VK_F6" ,
    VK_F7                       , "VK_F7" ,
    VK_F8                       , "VK_F8" ,
    VK_F9                       , "VK_F9" ,
    VK_F10                      , "VK_F10" ,
    VK_F11                      , "VK_F11" ,
    VK_F12                      , "VK_F12" ,
    VK_F13                      , "VK_F13" ,
    VK_F14                      , "VK_F14" ,
    VK_F15                      , "VK_F15" ,
    VK_F16                      , "VK_F16" ,
    VK_F17                      , "VK_F17" ,
    VK_F18                      , "VK_F18" ,
    VK_F19                      , "VK_F19" ,
    VK_F20                      , "VK_F20" ,
    VK_F21                      , "VK_F21" ,
    VK_F22                      , "VK_F22" ,
    VK_F23                      , "VK_F23" ,
    VK_F24                      , "VK_F24" ,
    VK_NUMLOCK                  , "VK_NUMLOCK" ,
    VK_SCROLL                   , "VK_SCROLL" ,
    VK_LSHIFT                   , "VK_LSHIFT" ,
    VK_RSHIFT                   , "VK_RSHIFT" ,
    VK_LCONTROL                 , "VK_LCONTROL" ,
    VK_RCONTROL                 , "VK_RCONTROL" ,
    VK_LMENU                    , "VK_LMENU" ,
    VK_RMENU                    , "VK_RMENU" ,
    VK_PROCESSKEY               , "VK_PROCESSKEY" ,
    VK_ATTN                     , "VK_ATTN" ,
    VK_CRSEL                    , "VK_CRSEL" ,
    VK_EXSEL                    , "VK_EXSEL" ,
    VK_EREOF                    , "VK_EREOF" ,
    VK_PLAY                     , "VK_PLAY" ,
    VK_ZOOM                     , "VK_ZOOM" ,
    VK_NONAME                   , "VK_NONAME" ,
    VK_PA1                      , "VK_PA1" ,
    VK_OEM_CLEAR                , "VK_OEM_CLEAR"
}
;

/*1*/osTextT* postVkSymbolF( tinS& tinP , const countT idP )/*1*/
{
    _IO_
    countT cRows = sizeof pVkSymbol / sizeof pVkSymbol[ 0 ] ;
    ZE( countT , off ) ;
    while( off < cRows && idP != pVkSymbol[ off ].id ) off ++ ;
    ZE( osTextT* , postName ) ;
    if( off < cRows ) postName = pVkSymbol[ off ].post ;
    return postName ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000e6.postvksymbolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f2.tmdrawhelperf BEGIN
#define DDNAME       "3func.320000f2.tmdrawhelperf"
#define DDNUMB      (countT)0x320000f2
#define IDFILE      (countT)0x8ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
the deviceC class constructor launches me
 instances of me exist iff wo or more instances of deviceC exist
 the number of instances of me is a function of the number of cpu's
i draw polylines onto memory device contexts
i complete each "job" as soon as it is placed onto my job stack
*/

/**/

//#define ROUGH

/*1*/TASK( tmDrawHelperF )/*1*/
etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
if( pTaskP && pTaskP->c1 )
{
    //etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_REGISTERtHREAD ) ;

    deviceC& deviceP = *(deviceC*)pTaskP->c1 ;
    stackC& stJob = *tinP.pAdamGlobal1->_deviceC_pStkJob ;

    countT cea = TUCK << 4 ;
    arrayC aTmp1( tinP , sizeof( mPoint3S   ) , cea ) ; //A:ASSUME: CODE ASSUMES THAT ALL OF THESE ARRAYS ARE ALWAYS KEPT AT THE SAME CAPACITY cea ; THIS IS NOT ENFORCED
    arrayC aTmp2( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp3( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp4( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp5( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp6( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp7( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp8( tinP , sizeof( mPoint3S   ) , cea ) ;
    arrayC aTmp9( tinP , sizeof( directionS ) , cea ) ;

    // I ASSUME THAT deviceP IS GRABBED BY THE THREAD THAT IS PUSHING JOBS
    // I USE grabHelper TO SERIALIZE MY PROCESSING OF JOBS AS NEEDED (E.G. WHEN ACTUALLY WRITING TO THE DEVICE)

    grabC& grabHelper = tinP.pAdamGlobal5->_deviceC_grabHelper ;

    boolT bFreshenMaxPoints = 1 ;
    ZE( countT , cPointMax ) ;
    ZE( countT , idJob ) ; //U::TO FIND A BUG
    for(;;)
    {
        stJob.waitF( tinP ) ;

        if( F(tinP.pAdamGlobal1->_deviceC_flagsHelper) & flDEVICEchELPER_QUIT ) break ;
        else
        {
            stJob.grabF( tinP , TAG( TAGiDnULL ) ) ;
            while( stJob )
            {
                _IO_
                drawJobS job ;
                {
                    byteT* pbJob = (byteT*)&job ;
                    stJob >> pbJob ;
                }
                stJob.ungrabF( tinP ) ;
                idJob ++ ;

                //LOGrAW( "tmDrawHelperF / job received\r\n" ) ;

                const spaceC* pSpacec = job.pSpacec ;
                const spaceS* pSpace  = job.pSpace  ;
                pelS*         pPel    = job.pPel    ;

                eyeC& eye = *pSpacec->pEye ;

                const countT cCol = deviceP.cColF() ;
                const countT cRow = deviceP.cRowF() ;

                ZE( boolT , bFail ) ;
                ZE( countT , idTry ) ; //U::TO FIND A BUG
                do
                {
                    _IO_
                    idTry ++ ;
                    if( bFail )
                    {
                        _IO_
                        bFail = 0 ;

                        cea <<= 1 ;
                        aTmp1[ cea ] ; //THE ASSUMPTION IS FULFILLED HERE THAT ALL TMP ARRAYS ARE ALWAYS TWEAKED TO THE SAME CAPACITY
                        aTmp2[ cea ] ;
                        aTmp3[ cea ] ;
                        aTmp4[ cea ] ;
                        aTmp5[ cea ] ;
                        aTmp6[ cea ] ;
                        aTmp7[ cea ] ;
                        aTmp8[ cea ] ;
                        aTmp9[ cea ] ;

                        bFreshenMaxPoints = 1 ;
                    }

                    if( bFreshenMaxPoints )
                    {
                        bFreshenMaxPoints = 0 ;        //THE ASSUMPTION IS MADE HERE THAT ALL TMP ARRAYS ARE ALWAYS TWEAKED TO THE SAME CAPACITY
                        cPointMax = aTmp1.ceaF() - 1 ; // "- 1": TO ALLOW UP TO 2 POINTS TO BE OUTPUTTED BETWEEN CHECKS (USED BY TWEAKING AND BY INSERTION OF BEHIND AND ABOVEbELOW POINTS
                    }

                    ZE( countT , cGlyphScr1 ) ;
                    ZE( countT , cGlyphScr2  ) ;

                    ZE( countT , offd ) ; //"d":"dataset"
                    countT*   ppcGlyph[]    = { (countT*)&pSpace->cGlyph     ,                    &cGlyphScr1 ,                    &cGlyphScr2 } ;
                    countT*   ppcSize[]     = {           pSpace->pcSize     ,   (countT*)(const byteT*)aTmp1 ,   (countT*)(const byteT*)aTmp5 } ;
                    flagsT*   pFlagsTail[]  = {           pSpace->pFlagsTail ,   (countT*)(const byteT*)aTmp2 ,   (countT*)(const byteT*)aTmp6 } ;
                    mPoint3S* ppPointTail[] = {           pSpace->pPointTail , (mPoint3S*)(const byteT*)aTmp3 , (mPoint3S*)(const byteT*)aTmp7 } ;
                    mPoint3S* ppPoint[]     = {           pSpace->pPoint     , (mPoint3S*)(const byteT*)aTmp4 , (mPoint3S*)(const byteT*)aTmp8 } ;

                    directionS* pDirection  = (directionS*)(const byteT*)aTmp9 ;

                    ZE( countT , cPinOriginal ) ;
                    {                                                                           // WORLD COORDINATES TO EYE COORDINATES
                        SETiNoUTfRAME

                        const measureT* pmB = eye ;
                        matrix3C mB( (measureT*)pmB , 3 ) ;

                        cgout = cgin ;
                        for( countT offgi = 0 ; offgi < cgin ; offgi ++ )
                        {
                            cPinOriginal += psout[ offgi ] = psin[ offgi ] ;
                            pfout[ offgi ] = pfin[ offgi ] ;

                            if( F(pfout[offgi]) & flTAIL_SET )
                            {
                                matrix3C mA( (measureT*)( ptin + offgi ) , 1 , (measureT*)( ptout + offgi ) ) ;
                                mA.mulF( mB ) ;
                            }
                        }

                        matrix3C mA( (measureT*)ppin , cPinOriginal , (measureT*)ppout ) ;
                        mA.mulF( mB ) ;

                        if( pmB ) ;
                    }

                    {                                                                           // INSERT BEHIND POINTS AND ABOVE BELOW COINCIDE POINTS
                        _IO_
                        SETiNoUTfRAME

                        cgout = cgin ;
                        for( countT offgi = 0 ; offgi < cgin ; offgi ++ )
                        {
                            psout[ offgi ] = psin[ offgi ] ;
                            pfout[ offgi ] = pfin[ offgi ] ;

                            if( F(pfout[offgi]) & flTAIL_SET ) ptout[ offgi ] = ptin[ offgi ] ;
                        }

                        iopS iop( cgin , psin , ppin , cgout , psout , ppout ) ;
                        countT cbp = sizeof iop / sizeof( countT ) ;
                        pushParmsAM( (countT*)&iop , cbp ) ;

                        if( idJob == 2 )
                        {
                            countT foo = 2 ;
                        }

                        bFail = insertX0PointAM( cPointMax ) ;

                        popParmsAM( cbp ) ;

                        if( cgin ) ;
                    }

                    {                                                                           // TWEAK: REPLACE AN "DIRECTION EXCEPTION" POINT WITH A PAIR OF NEARBY POINTS
                        _IO_
                        SETiNoUTfRAME

                        //LOGiN( "tweak " )

                        vectorOldC vLag( tinP , etThread ) ;
                        vectorOldC vTmp( tinP , etThread ) ;

                        FEG

                            const countT offpiWoth = offpi ;
                            const boolT  bClosed   = F(pfin[offgi]) & flTAIL_SET ;

                            if( bClosed )
                            {
                                vLag( 1 ) = ptin[ offgi ].x ;
                                vLag( 2 ) = ptin[ offgi ].y ;
                                vLag( 3 ) = ptin[ offgi ].z ;
                            }

                            ZE( measureT , aHeadingLag ) ;

                            FEP

                                vectorOldC vNow( tinP , etThread ) ; // "now":"the input point being handled" ; "lag":"the preceding input point" ; "next":"the next input point"
                                vNow( 1 ) = ppin[ offpi ].x ;
                                vNow( 2 ) = ppin[ offpi ].y ;
                                vNow( 3 ) = ppin[ offpi ].z ;

                                measureT& aHeading   = pDirection[ offpo ].aHeading ;
                                measureT& aElevation = pDirection[ offpo ].aElevation ;
                                aElevation = aHeading = 0.0 ;
                                if( !eye.directionF( tinP , aHeading , aElevation , vNow , flEYEdIRECTION_SNAPhEADINGtOpI ) )
                                {
                                    FEPfAILbREAKiF
                                    psout[ offgo ] ++ ;
                                    ppout[ offpo    ].x = vNow( 1 ) ;
                                    ppout[ offpo    ].y = vNow( 2 ) ;
                                    ppout[ offpo ++ ].z = vNow( 3 ) ;
                                }
                                else
                                {
                                    //U::BUG: ZE'TH POINT FAILS IN A GLYPH OF EXACTLY 2 POINTS; IN A GLYPH OF MORE THAN 2 POINTS

                                    measureT ahNow = aHeading ;   //ADDED 20121023@1626 TO ELIMINATE SUSPECTED BUG
                                    measureT aeNow = aElevation ; //ADDED 20121023@1626 TO ELIMINATE SUSPECTED BUG

                                    if( offp )
                                    {
                                        vTmp = vNow ;
                                        if( ahNow != PI || vLag( 1 ) )  // IF NOW IS NOT DIRECTLY BEHIND OR LAG IS NOT DIRECTLY BEHIND    U::BUG: THE CODE DOES NOT EXACTLY DO THIS BECAUSE IT DOES NOT TEST vLag( 3 ) < 0
                                        {
                                            aElevation = aHeading = 0.0 ;
                                            eye.directionF( tinP , aHeading , aElevation , vTmp , vLag , flEYEdIRECTION_SNAPhEADINGtOpI ) ; // TWEAK TMP TOWARD LAG
                                        }
                            
                                        FEPfAILbREAKiF
                                        psout[ offgo    ] ++ ;
                                        ppout[ offpo    ].x = vTmp( 1 ) ;
                                        ppout[ offpo    ].y = vTmp( 2 ) ;
                                        ppout[ offpo ++ ].z = vTmp( 3 ) ;
                                    }
                                
                                    if( offp != cpin - 1 ) // FOR CLOSED GLYPHS, TWEAKING NEXT HERE WOULD RESULT IN "DOUBLE COUNTING" ERASURE SO IS NOT DONE
                                    {
                                        {
                                            measureT halfpi = PI / 2.0 ;
                                            if( psout[ offgo ] && aeNow != halfpi && aeNow != - halfpi ) // IF NOT WOTH POINT AND NOT DIRECTLY ABOVE OR BELOW ME
                                            {
                                                offgo ++ ;                          // SPLIT THE GLYPH INTO OO GLYPHS
                                                psout[ offgo ] = 0 ;
                                                pfout[ offgo ] = flTAIL_null ;
                                            }            
                                        }            
                    
                                        vectorOldC vNext( tinP , etThread ) ;
                                        const countT offpiNext = offpi + 1 ;
                                        vNext( 1 ) = ppin[ offpiNext ].x ;
                                        vNext( 2 ) = ppin[ offpiNext ].y ;
                                        vNext( 3 ) = ppin[ offpiNext ].z ;
                                
                                        vTmp = vNow ;
                                        if( ahNow != PI || vNext( 1 ) )  // IF NOW IS NOT DIRECTLY BEHIND OR LAG IS NOT DIRECTLY BEHIND
                                        {
                                            aElevation = aHeading = 0.0 ;
                                            eye.directionF( tinP , aHeading , aElevation , vTmp , vNext , flEYEdIRECTION_SNAPhEADINGtOpI ) ; // TWEAK TMP TOWARD NEXT
                                        }
                                
                                        FEPfAILbREAKiF
                                        psout[ offgo    ] ++ ;
                                        ppout[ offpo    ].x = vTmp( 1 ) ;
                                        ppout[ offpo    ].y = vTmp( 2 ) ;
                                        ppout[ offpo ++ ].z = vTmp( 3 ) ;
                                    }
                                }

                                aHeadingLag = aHeading ;
                                vLag = vNow ;
                                offpi ++ ;

                            FEPeND

                        FEGeND
                    }

                    ZE( countT , cpOutLath ) ;
                    {                                                                           // INSERT SMOOTHIES
                        _IO_
                        SETiNoUTfRAME

                        //LOGiN( "smooth" )
                    
                        if( F(deviceP.flagsF()) & flDEVICEc_NOsMOOTHIES )
                        {
                            FEG

                                FEP

                                    //DUPLICATE CODE: 320000f2 320000f2
                                    {   // THE NEXT PHASE WILL EXPECT pDirection[ offpo ] TO BE SET FOR ALL POINTS INCLUDING THE ZE'TH POINT OF EACH GLYPH
                                        vectorOldC vNow( tinP , etThread ) ;
                                        vNow( 1 ) = ppin[ offpi ].x ;
                                        vNow( 2 ) = ppin[ offpi ].y ;
                                        vNow( 3 ) = ppin[ offpi ].z ;

                                        pDirection[ offpo ].aHeading   = 0.0 ;
                                        pDirection[ offpo ].aElevation = 0.0 ;
                                        eye.directionF( tinP , pDirection[ offpo ].aHeading , pDirection[ offpo ].aElevation , vNow , flEYEdIRECTION_null ) ;
                                    }

                                    FEPfAILbREAKiF
                                    psout[ offgo ] ++ ;
                                    ppout[ offpo ++ ] = ppin[ offpi ++ ] ;

                                FEPeND

                            FEGeND

                            cpOutLath = offpo ;
                        }
                        else
                        {
                            FEG
                        
                                FEP

                                    if( !offp )
                                    {
                                        //DUPLICATE CODE: 320000f2 320000f2
                                        {   // THE NEXT PHASE WILL EXPECT pDirection[ offpo ] TO BE SET FOR ALL POINTS INCLUDING THE ZE'TH POINT OF EACH GLYPH
                                            vectorOldC vNow( tinP , etThread ) ;
                                            vNow( 1 ) = ppin[ offpi ].x ;
                                            vNow( 2 ) = ppin[ offpi ].y ;
                                            vNow( 3 ) = ppin[ offpi ].z ;

                                            pDirection[ offpo ].aHeading   = 0.0 ;
                                            pDirection[ offpo ].aElevation = 0.0 ;
                                            eye.directionF( tinP , pDirection[ offpo ].aHeading , pDirection[ offpo ].aElevation , vNow , flEYEdIRECTION_null ) ;
                                        }

                                        FEPfAILbREAKiF
                                        psout[ offgo ] ++ ;
                                        ppout[ offpo ++ ] = ppin[ offpi ++ ] ;
                                    }
                                    else
                                    {
                                        #if defined( ROUGH )

                                            boolT pbUse[ 3 ] ; //1 CANDIDATE POINTS PLUS THE OO ENDPOINTS
                                            BOSdOnOTtEST( WHATgbo , memset( pbUse + 1 , 0 , sizeof pbUse - 2 * sizeof( boolT ) ) )
                                            pbUse[ 2 ] = 1 ;
                                        
                                            mPoint3S pPoint3[ 3 ] ;
                                            pPoint3[ 0 ] = ppin[ offpi - 1 ] ;
                                            pPoint3[ 2 ] = ppin[ offpi ++  ] ;
                                    
                                            directionS pDir[ 3 ] ;

                                            boolT pbDir[ 3 ] ;
                                            BOSdOnOTtEST( WHATgbo , memset( pbDir , 0 , sizeof pbDir ) )

                                            countT pcoa[] = { 0 } ;
                                            countT pcob[] = { 2 } ; //ALL SPREADS pcob[ oo ] - pcoa[ oo ] MUST BE EVEN

                                        #else

                                            boolT pbUse[ 9 ] ; //7 CANDIDATE POINTS PLUS THE OO ENDPOINTS
                                            BOSdOnOTtEST( WHATgbo , memset( pbUse + 1 , 0 , sizeof pbUse - 2 * sizeof( boolT ) ) )
                                            pbUse[ 8 ] = 1 ;
                                        
                                            mPoint3S pPoint3[ 9 ] ;
                                            pPoint3[ 0 ] = ppin[ offpi - 1 ] ;
                                            pPoint3[ 8 ] = ppin[ offpi ++  ] ;
                                    
                                            directionS pDir[ 9 ] ;

                                            boolT pbDir[ 9 ] ;
                                            BOSdOnOTtEST( WHATgbo , memset( pbDir , 0 , sizeof pbDir ) )

                                            countT pcoa[] = { 0 , 0 , 4 , 0 , 2 , 4 , 6 } ;
                                            countT pcob[] = { 8 , 4 , 8 , 2 , 4 , 6 , 8 } ; //ALL SPREADS pcob[ oo ] - pcoa[ oo ] MUST BE EVEN

                                        #endif
                                    
                                        for( countT oo = 0 ; oo < sizeof pcoa / sizeof pcoa[ 0 ] ; oo ++ )
                                        {
                                            countT offa = pcoa[ oo ] ;
                                            countT offb = pcob[ oo ] ;
                                            countT offm = ( offb + offa ) >> 1 ;

                                            pPoint3[ offm ] = ( pPoint3[ offa ] + pPoint3[ offb ] ) / 2.0 ;
                                        
                                            countT poff[ 3 ] = { offa , offm , offb } ;
                                        
                                            cPoint2S pcamb[ 3 ] ;
                                            ZE( boolT , bFail ) ;
                                            for( countT o012 = 0 ; o012 <= 2 ; o012 ++ )
                                            {
                                                cPoint2S& out = pcamb[ o012 ] ;

                                                measureT& aHeading   = pDir[ poff[ o012 ] ].aHeading   ;
                                                measureT& aElevation = pDir[ poff[ o012 ] ].aElevation ;
                                                if( !pbDir[ poff[ o012 ] ] )
                                                {
                                                    pbDir[ poff[ o012 ] ] = 1 ;

                                                    mPoint3S& in  = pPoint3[ poff[ o012 ] ] ;

                                                    vectorOldC vEye( tinP , etThread ) ;
                                                    vEye( 1 ) = in.x ;
                                                    vEye( 2 ) = in.y ;
                                                    vEye( 3 ) = in.z ;

                                                    aElevation = aHeading = 0 ;
                                                    bFail |= pSpacec->pEye->directionF( tinP , aHeading , aElevation , vEye ) ;
                                                }

                                                if( !bFail )
                                                {
                                                    countT offCol = R( ( PI       + aHeading   ) / ( 2.0 * PI ) * (measureT)( deviceP.cColF() - 1 ) )  ;
                                                    countT offRow = R( ( PI / 2.0 + aElevation ) / PI           * (measureT)( deviceP.cRowF() - 1 ) )  ;

                                                    out.x =                       offCol ;
                                                    out.y = deviceP.cRowF() - 1 - offRow ;
                                                }
                                            }

                                            if( !bFail )
                                            {
                                                cPoint2S ce ;
                                                ce.x = R( 0.5 * pcamb[ 0 ].x + 0.5 * pcamb[ 2 ].x ) ;
                                                ce.y = R( 0.5 * pcamb[ 0 ].x + 0.5 * pcamb[ 2 ].y ) ;
                                        
                                                cPoint2S cError ;
                                                cError.x = pcamb[ 1 ].x - ce.x ;
                                                cError.y = pcamb[ 1 ].y - ce.y ;
                                        
                                                measureT mErrorx = cError.x ;
                                                measureT mErrory = cError.y ;
                                                measureT error   = mErrorx * mErrorx + mErrory * mErrory ;
                                    
                                                //LOGrAW( T("smoothie test [thresh,error]: ")+TFF(deviceP.surfaceErrorLimit)+T(" ")+TFF(error)+T("\r\n") ) ;

                                                if( error <= deviceP.surfaceErrorLimit ) break ;
                                                else                                     pbUse[ offm ] = 1 ;
                                            }
                                        }
                                    
                                        for( countT offe = 1 ; offe < sizeof pPoint3 / sizeof pPoint3[ 0 ] ; offe ++ ) // THE ZE'TH ELEMENT IS LAGGED OUTPUT SO IS NEVER CHECKED HERE
                                        {
                                            if( pbUse[ offe ] )
                                            {
                                                pDirection[ offpo ] = pDir[ offe ] ;
                                                FEPfAILbREAKiF
                                                psout[ offgo ] ++ ;
                                                ppout[ offpo ++ ] = pPoint3[ offe ] ;
                                            }
                                        }
                                        if( bFail ) break ;
                                    }

                                FEPeND

                            FEGeND

                            cpOutLath = offpo ;
                        }
                    }

                    {                                                                           // EMIT
                        _IO_
                        SETiNoUTfRAME

                        //LOGiN( "emit  " )

                        ZE( countT , cBehindSnips ) ; // LONELY x=0 POINTS ARE NOT COUNTED ; THERE SHOULD NOT BE ANY OF THOSE ; IF ANY EXIST, THEY WILL NOT BE REFLECTED
                        ZE( countT , cReflections ) ;
                        ZE( countT , cOmittedMoves  ) ;
                        countT cPointMaxSave = cPointMax ;
                        cPointMax = 0 ;
                        for( countT offPassout = 0 ; offPassout <= 1 ; offPassout ++ )
                        {
                            if( offPassout )
                            {
                                countT cGlyph = cgin + ( cBehindSnips << 1 ) - cOmittedMoves ;
                                cPointMax = cpOutLath + cReflections + cBehindSnips - cOmittedMoves ;

                                new( 0 , tinP , (byteT*)pPel , sizeof( pelS ) ) pelS( tinP , cGlyph , cPointMax ) ;
                                pPel->rgbOverride = pSpace->rgbOverride ;
                                cOmittedMoves = cReflections = cBehindSnips = 0 ;
                            }

                            FEG

                                if( offPassout ) pPel->pcSize[ offgo ] = 0 ;

                                ZE( countT , cRun ) ;
                                ZE( countT , cReflect ) ;
                                ZE( countT , offReflect ) ;
                                const countT offpiWoth = offpi ;
                                const boolT  bClosed = F(pfin[offgi]) & flTAIL_SET ;
                                ZE( boolT , bLeftLag ) ;

                                FEP

                                    {
                                        if( !ppin[ offpi ].x && ppin[ offpi ].z < 0.0 )
                                        {
                                            cRun ++ ;
                                            if( offp == cpin - 1 && cRun > 1 ) cReflect = cRun ;
                                        }
                                        else
                                        {
                                            if( cRun > 1 )
                                            {
                                                offReflect = 1 ;
                                                cReflect = cRun ;
                                                           cRun = 0 ;
                                            }
                                        }
                                    }

                                    if( !offPassout )
                                    {
                                        if( bClosed )
                                        {
                                                 if( ppin[ offpi ].x < 0.0 ) pfin[offgi] |=      flTAIL_LEFT    ;
                                            else if( ppin[ offpi ].x > 0.0 ) pfin[offgi] &= ~( F(flTAIL_LEFT) ) ;
                                        }
                                    }
                                    else
                                    {
                                        boolT bLeft = ppin[ offpi ].x < 0.0 ;

                                        if( pDirection[ offpi ].aHeading == PI )
                                        {
                                            bLeft = !offp && bClosed
                                                ? !!( F(pfin[offgi]) & flTAIL_LEFT )
                                                : bLeftLag
                                            ;

                                            if( bLeft ) pDirection[ offpi ].aHeading = - PI ;
                                        }

                                        countT offCol = R( ( PI       + pDirection[ offpi ].aHeading   ) / ( 2.0 * PI ) * (measureT)( deviceP.cColF() - 1 ) )  ;
                                        countT offRow = R( ( PI / 2.0 + pDirection[ offpi ].aElevation ) / PI           * (measureT)( deviceP.cRowF() - 1 ) )  ;

                                        FEPfAILbREAKiF
                                        pPel->pcSize[ offgo    ] ++ ;
                                        pPel->pPoint[ offpo    ].x =                       offCol ;
                                        pPel->pPoint[ offpo ++ ].y = deviceP.cRowF() - 1 - offRow ;

                                        bLeftLag = bLeft ;
                                    }

                                    if( cReflect )
                                    {
                                        countT offpoLath = offpo - 1 ;
                                    
                                        if( !offPassout )
                                        {
                                            cBehindSnips ++ ;
                                            cReflections += cReflect ;
                                                            cReflect = 0 ;
                                    
                                            if( offp == cpin - 1 ) cOmittedMoves ++ ;
                                        }
                                        else
                                        {
                                            offgo ++ ;
                                    
                                            countT offpr = offpo - cReflect - offReflect ;
                                            while( cReflect && cReflect -- )
                                            {
                                                FEPfAILbREAKiF
                                                pPel->pcSize[ offgo    ] ++ ;
                                                pPel->pPoint[ offpo    ].x = deviceP.cColF() - 1 - pPel->pPoint[ offpr    ].x ;
                                                pPel->pPoint[ offpo ++ ].y =                       pPel->pPoint[ offpr ++ ].y ;
                                            }
                                            if( bFail ) break ;                                    

                                            if( offp != cpin - 1 )
                                            {
                                                FEPfAILbREAKiF
                                                offgo ++ ;
                                                pPel->pcSize[ offgo    ] ++ ;
                                                pPel->pPoint[ offpo ++ ] = pPel->pPoint[ offpoLath ] ;
                                            }
                                        }
                                    
                                        offReflect = 0 ;
                                    }

                                    offpi ++ ;

                                FEPeND

                            FEGeND
                        }
                        cPointMax = cPointMaxSave ;
                    }
                }
                while( bFail ) ;

                grabHelper.grabF( tinP , TAG( TAGiDnULL ) ) ;
                countT idDesireSave = etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
                {
                    BOS( WHATgbd , BOSoK , CreatePen( PS_SOLID , 1 , pPel->rgbOverride ? pPel->rgbOverride : job.rgb ) )
                    HPEN oshPen = (HPEN)tinP.brcRaw ;
                    BOS( WHATgbd , BOSoK , SelectObject( deviceP.oshDeviceMemoryF() , oshPen ) )
                    HPEN oshPenWas = (HPEN)tinP.brcRaw ;
                    BOS( WHATgbd , BOSoK , PolyPolyline( deviceP.oshDeviceMemoryF() , pPel->pPoint , (DWORD*)pPel->pcSize , pPel->cGlyph ) )
                    BOS( WHATgbd , BOSoK , SelectObject( deviceP.oshDeviceMemoryF() , oshPenWas ) )
                    BOS( WHATgbd , BOSoK , DeleteObject( oshPen ) )
                }
                etThread.osThreadSwitchingDesireF( tinP , idDesireSave ) ;
                grabHelper.ungrabF( tinP ) ;

                countT cPendingWas = decv02AM( *job.pcPending ) ;
                if( cPendingWas == 1 && job.pSgnAllDone ) job.pSgnAllDone->giveF( tinP ) ;

                stJob.grabF( tinP , TAG( TAGiDnULL ) ) ;
            }
            stJob.ungrabF( tinP ) ;
        }
    }

    //etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_UNREGISTERtHREAD ) ;
}
dec02AM( tinP.pAdamGlobal1->_deviceC_cHelper ) ;
DONE( tmDrawHelperF )


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f2.tmdrawhelperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f7.dosgetinfoblocksidprocessoldif BEGIN
#define DDNAME       "3func.320000f7.dosgetinfoblocksidprocessoldif"
#define DDNUMB      (countT)0x320000f7
#define IDFILE      (countT)0x8eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetInfoBlocksIdProcessIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102002a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fd00104.1.1.0.html\"\>fd00104:  WAKEsHOW( "example.simplest.func.102002a.thirdC.dosGetInfoBlocksIdProcessIF" )\</A\>
arguments
*/
/**/

//U: RENAME TO osPid

/*1*/countT _export dosGetInfoBlocksIdProcessIF( tinS& tinP )/*1*/
{
    //I ALWAYS RETURN A NONZE VALUE TO BE LIKE dosGetInfoBlocksIdThreadIF
    //IFbEcAREFUL    
    //{
    //    if( POOP ) return 0 ;
    //}

    //_IO_   (WILL BLOW STACK CT tellS)
    ZE( countT , idProcessOldI ) ;
    #ifdef __OS2__
        ZE( PIB* , pPib ) ;
        ZE( TIB* , pTib ) ;
        BOSI( WHATgbo , BOSfAIL , DosGetInfoBlocks( &pTib , &pPib ) ) )
        BOSpOOP
        __Z( pPib ) ;
        __Z( pTib ) ;
        idProcessOldI = pPib ? pPib->pib_ulpid : 0 ;
    #elif defined( __NT__ )

        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        BOSdOnOTtEST( WHATgbo , GetCurrentProcessId() )
        idProcessOldI = tinP.brcRaw ;

    #endif
    return idProcessOldI ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f7.dosgetinfoblocksidprocessoldif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f8.dosgetinfoblocksidthreadif BEGIN
#define DDNAME       "3func.320000f8.dosgetinfoblocksidthreadif"
#define DDNUMB      (countT)0x320000f8
#define IDFILE      (countT)0x8ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U: RENAME TO osTid

/*1*/countT _export dosGetInfoBlocksIdThreadIF( voidT )/*1*/
{
    //NONCONFORMANT (return STATEMENT MULTIPLES OR NOT AT END) FOR MAXIMUM SPEED
    //signC NEEDS ME TO WORK UNCONDITIONALLY

    //_IO_   (WILL BLOW STACK CT tellS)

    #ifdef __OS2__
        ZE( PIB* , pPib ) ;
        ZE( TIB* , pTib ) ;
        ZE( countT , _brcRaw ) ;
        BOSnOtIN( DosGetInfoBlocks( &pTib , &pPib ) )
        return !pTib ? 0 : pTib->tib_ptib2->tib2_ultid ;
    #elif defined( __NT__ )

        ZE( countT , _brcRaw ) ;
        BOSnOtIN( GetCurrentThreadId() )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f8.dosgetinfoblocksidthreadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f9.raiseworkingsetsizehintsif BEGIN
#define DDNAME       "3func.320000f9.raiseworkingsetsizehintsif"
#define DDNUMB      (countT)0x320000f9
#define IDFILE      (countT)0x8ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i raise the base operating system working set size hints
this is needed because MS Windows is such a piece of shit
even though these hints are for all practical purposes ignored, they are imposed as limits to the amount of virtual memory that can be locked
in order to dynamically manage locked virtual memory, these "hints" must therefore be moved out of the way
fuck Microsoft and Gates and Ballmer and all of their dumb ass minions
*/

/**/

/*1*/voidT _export raiseWorkingSetSizeHintsIF( tinS& tinP , countT cbP )/*1*/
{
    ZE( SIZE_T , cbMin ) ;
    ZE( SIZE_T , cbMax ) ;
    BOS( WHATgbo , BOSoK , GetProcessWorkingSetSize( (HANDLE)thirdC::osOpenProcessIF() , &cbMin , &cbMax ) )
    BOSpOOP
    //CONoUTrAW5( "\r\nbefore  [cbMin,cbMax]: " , cbMin , "    " , cbMax , "" ) ;

    if( cbMin < cbP )
    {
        cbMax = cbMin = cbP ;
        BOS( WHATgbo , BOSoK , SetProcessWorkingSetSize( (HANDLE)thirdC::osOpenProcessIF() , cbMin , cbMax ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000f9.raiseworkingsetsizehintsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000fa.diskWalkSearchCBF BEGIN
#define DDNAME       "3func.320000fa.diskWalkSearchCBF"
#define DDNUMB      (countT)0x320000fa
#define IDFILE      (countT)0x8ee

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT diskWalkSearchCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP , const countT* const pModuloFilesP , const countT* const pModuloDirsP )/*1*/
{
    _IO_
    ZE( boolT , bDoIt ) ;
    if( postNameP )
    {
        diskWalkSearchInfoS& info = *(diskWalkSearchInfoS*)pcArgP ;

        boolT bIgnoreCase = F(info.flagsSearch) & flSEARCH_IGNOREcASE ;

        bDoIt = info.pCbf
            ? (*info.pCbf)( tinP , cDirsP , cFilesP , bQuitP , postNameP , pcArgP )
            : 1
        ;

        if( bDoIt )
        {
            BOSdOnOTtEST( WHATgbo , strlen( postNameP ) )
            countT costLike = tinP.brcRaw ;
            boolT  bDir = postNameP[ costLike - 1 ] == '\\' ;

            if( bDir )
            {
            }
            else
            {
                IFsCRATCH
                {
                    SCOOPS

                    //static countT idInLath ;
                    //countT idIn = 1 + incv02AM( idInLath ) ;
                    //CONoUTrAW3( "\r\n [idIn]:    " , idIn , "\r\n" ) ;
                    //if( idIn == 0xf )
                    //{
                    //    countT foo = 2 ;
                    //}

                    fileC fi( tinP , postNameP , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , 1 ) ;

                    if( POOP )
                    {
                        POOPR
                        CONoUTrAW( "\r\nerror: could not open a read handle for file [postNameP]:    " ) ;
                        CONoUTrAW( postNameP ) ;
                        CONoUTrAW( "\r\n" ) ;
                    }
                    else
                    {
                        ZE( infoFileS* , pInfo ) ;
                        tinP.pEtScratch->diskFileQueryF( tinP , pInfo , fi ) ; ___( pInfo ) ;
                    
                        if( POOP )
                        {
                            POOPR ;
                            CONoUTrAW( "\r\nerror: could not obtain file info for [postNameP]:    " ) ;
                            CONoUTrAW( postNameP ) ;
                            CONoUTrAW( "\r\n" ) ;
                        }
                        else if( pInfo && ( pInfo->cbUsedHigh || pInfo->cbUsed ) )
                        {
                            ZE( osTextT* , posti ) ;
                            ZE( countT   , costi ) ;
                            ZE( countT , offCurrentLine ) ;
                            ZE( countT , idLine ) ;
                            ZE( countT , idCol ) ;
                            if( pInfo->cbUsedHigh || !pInfo->cbUsed | pInfo->cbUsed > TICK )
                            {
                                CONoUTrAW( "\r\nerror: file is too large for me to scan [postNameP]:    " ) ;
                                CONoUTrAW( postNameP ) ;
                                CONoUTrAW( "\r\n" ) ;
                            }
                            else
                            {
                                tinP.pEtScratch->boxGetShadowF( tinP , posti , costi , T(ifFileNameC(tinP,*tinP.pEtScratch,postNameP)) , 1 ) ; ___( posti ) ;

                                if( POOP )
                                {
                                    POOPR ;
                                    CONoUTrAW( "\r\nerror: could read file [postNameP]:    " ) ;
                                    CONoUTrAW( postNameP ) ;
                                    CONoUTrAW( "\r\n" ) ;
                                }

                                else if( !posti || !costi )
                                {
                                    CONoUTrAW( "\r\nfile is null length [postNameP]:    " ) ;
                                    CONoUTrAW( postNameP ) ;
                                    CONoUTrAW( "\r\n" ) ;
                                }
                                else
                                {
                                    if( bIgnoreCase )
                                    {
                                        for( countT offi = 0 ; offi < costi ; offi ++ )
                                        {
                                            countT old = posti[ offi ] ;
                                            if( old >= 'A' && old <= 'Z' ) posti[ offi ] = (osTextT)( 'a' - 'A' + old ) ;
                                        }
                                    }

                                    const osTextT* const postHit = thirdC::c_strstrIF( tinP , posti , info.postFind ) ;
                                    if( postHit )
                                    {
                                        countT offFound = postHit - posti ;

                                        idLine = 1 ;
                                        for( countT offi = 0 ; offi < offFound ; offi ++ )
                                        {
                                            if
                                            (
                                                posti[ offi ] == '\n'               //COUNTED: NEW LINE
                                                ||
                                                (
                                                       offi < offFound - 1
                                                    && posti[ offi     ] == '\r'    //COUNTED: CARRIAGE RETURN NOT FOLLOWED BY NEW LINE (FILES PRODUCED BY COMMODORE AND EARLY MACINTOSH SYSTEMS)
                                                    && posti[ offi + 1 ] != '\n'
                                                )
                                            )
                                            {
                                                idLine ++ ;
                                                offCurrentLine = offi + 1 ;
                                                
                                            }
                                        }

                                        idCol = offFound - offCurrentLine + 1 ;

                                        osTextT* poste = posti + costi ;
                                        for( countT offi = offFound + thirdC::c_strlenIF( tinP , info.postFind ) ; offi < costi ; offi ++ )    //TRUNCATE THE CONTAINING LINE
                                        {
                                            if
                                            (
                                                posti[ offi ] == '\n'               //COUNTED: NEW LINE
                                                ||
                                                (
                                                       offi < offFound - 1
                                                    && posti[ offi     ] == '\r'    //COUNTED: CARRIAGE RETURN NOT FOLLOWED BY NEW LINE (FILES PRODUCED BY COMMODORE AND EARLY MACINTOSH SYSTEMS)
                                                    && posti[ offi + 1 ] != '\n'
                                                )
                                            )
                                            posti[ offi ] = 0 ;
                                        }
                                    }
                                }
                            }

                            if( !idLine )
                            {
                                CONoUTrAW( "." ) ;
                            }
                            else
                            {
                                //U:: LATER: OPTIONALLY ACCUMULATE THESE REPORT ENTRIES IN A stackC SO THAT CALLER CAN REPORT THEM

                                while( posti[ offCurrentLine ] == ' ' ) offCurrentLine ++ ;

                                TN( tSay , "\r\n" ) ; tSay += T(postNameP)+T(" [idLine,idCol]: ")+TF4(idLine,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T("(")+TF4(idCol,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(")    ")+T(posti+offCurrentLine)+T("\r\n") ;

                                CONoUTrAW( tSay ) ;
                            }
                            tinP.pEtScratch->delF( tinP , posti ) ;
                        }
                        DEL( pInfo ) ;
                    }
                }
            }
        }
    }
    return bDoIt ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.32000* : 3func.320000fa.diskWalkSearchCBF END
