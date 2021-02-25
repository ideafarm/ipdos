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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001001.thirdc.thirdc BEGIN
#define DDNAME       "3func.36001001.thirdc.thirdc"
#define DDNUMB      (countT)0x36001001
#define IDFILE      (countT)0xb70


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1020001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0b00104.1.1.0.html\"\>0b00104:  WAKEsHOW( "example.simplest.func.1020001.thirdC.thirdC" )\</A\>
*/
/**/

/*1*/thirdC::thirdC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsModeP , const flagsT flagsWatchP )/*1*/ :
fingerprint( 0 ) ,
idLineCt( ( putNegAM( *(countT*)&fingerprint , FINGERnEG_THIRDczOMBIE ) , idLineCtP ) ) ,
idiFileCt( idiFileCtP ) ,
//bFunctionCountersReady( 0 ) , //U::WHY COMMENTED OUT?
flagsWatch( flagsWatchP ) ,
flagsMode( flagsModeP ) ,
signatureThird( ifcSIGNATUREtHIRD ) ,
poop( F(flagsModeP) & flTHIRDmODE_IMPOTENCEeXPECTED ? flPOOP_null : flPOOP_SMELLY ) ,
thirdInit( tinP , (countT)this ) ,
third( *this ) ,
//pcFunctionEntries( 0 ) ,
//pcFunctionExits( 0 ) ,
//pcFunctionTime1( 0 ) ,
//pcFunctionTime2( 0 ) ,
cProgressDflt( 0 ) ,
pEtherContainsMe( 0 ) ,
lever_swWinFromDraw( 0 ) ,
lever_swWinFromDrawDuringPaint( 0 ) ,
pswWinFromDraw( 0 ) ,
pswWinFromDrawDuringPaint( 0 ) ,
lever_swPaintInfoFromDrawingHandle( 0 ) ,
pswPaintInfoFromDrawingHandle( 0 ) ,
bConstructed( 0 ) ,
postThreadNameMadeMe( 0 )
{
    tinP.pAdamGlobal1->_thirdC_.cThirdObjects ++ ;
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flTHIRDmODE , flagsModeP ) ;
        FV( flWATCH     , flagsWatchP ) ;
        if( POOP ) return ;
    }

    _IO_

    newF( tinP , LF , postThreadNameMadeMe , c_strlenIF( tinP , tinP.postThreadName ) + 1 ) ; ___( postThreadNameMadeMe ) ;
    c_strncpyIF( tinP , postThreadNameMadeMe , tinP.postThreadName , sizeof postThreadNameMadeMe ) ;
    idThreadMadeMe = tinP.monitor.idThread ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    {
        //countT cSourceFiles = processGlobal7I.source.cFilesF( tinP ) ;
        //newF( tinP , LF , pcFunctionEntries , 1 + cSourceFiles ) ; ___( pcFunctionEntries ) ;
        //newF( tinP , LF , pcFunctionExits   , 1 + cSourceFiles ) ; ___( pcFunctionExits ) ;
        //newF( tinP , LF , pcFunctionTime1   , 1 + cSourceFiles ) ; ___( pcFunctionTime1 ) ;
        //newF( tinP , LF , pcFunctionTime2   , 1 + cSourceFiles ) ; ___( pcFunctionTime2 ) ;
        //const countT cBytes = sizeof(countT) * ( 1 + cSourceFiles ) ;
        //c_memsetIF( tinP , (byteT*)pcFunctionEntries , cBytes ) ;
        //c_memsetIF( tinP , (byteT*)pcFunctionExits   , cBytes ) ;
        //c_memsetIF( tinP , (byteT*)pcFunctionTime1   , cBytes ) ;
        //c_memsetIF( tinP , (byteT*)pcFunctionTime2   , cBytes ) ;
    }

    spacerSetF( tinP ) ;

    {
        homeS* ph = (homeS*)(byteT*)processGlobal3I.napHome ;
        if( ph && !ph->timeBoot1 && !ph->timeBoot2 ) //ASSUME: NO RACE.  SATISFIED IF THE MONITOR STARTS WOTH AND IT LAUNCHES ALL OTHER IFC PROCESSES
        {
            // TIME AT BOOT = TIME NOW - ELAPSED TIME SINCE BOOT
            osTimeNowF( tinP , ph->timeBoot1 , ph->timeBoot2 , 1 ) ;
            ZE( countT , timeE1 ) ;
            ZE( sCountT , timeE2 ) ;
            dosQuerySysInfoTimeSinceBootF( tinP , timeE1 , timeE2 ) ;
            osTimeSubtractF( tinP , ph->timeBoot1 , ph->timeBoot2 , timeE1 , timeE2 ) ;
        }
    }

    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosError( FERR_DISABLEHARDERR | FERR_ENABLEEXCEPTION ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        BOSdOnOTtEST( WHATgbo , SetErrorMode( SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX ) )
    #endif

        if( tinP.pAdamGlobal1->_thirdC_.pThPrime == this )
        {
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;

            //U: MYSTERY: THIS CODE TOGETHER WITH THE PRESENCE OF THE DEFINITIONS OF 3 thirdC::Dos???ThreadContext* CAUSES WO DRIVER TO FAIL TO INSTALL EVERY TIME
            #if defined( __NT__ )
                //U: if( tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle )
                {
                    //U: ZE( HANDLE , realHandle ) ;
                    //U: BOSdOnOTtEST( WHATgbo , GetCurrentProcess() )
                    //U: HANDLE oshMe = tinP.brcRaw ;
                    //U: BOSdOnOTtEST( WHATgbo , GetCurrentThread() )
                    //U: __( !DuplicateHandle( oshMe , tinP.brcRaw , oshMe , &realHandle , THREAD_ALL_ACCESS , 0 , 0 ) ) ;
                    //U: if( !POOP )
                    //U: {
                        //U: ++ *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ;
                        //U: BOS( WHATgbo , BOSoK , GetCurrentThreadId() )
                        //U: BOSpOOP
                        //U: tinP.pAdamGlobal1->_thirdC_.lOsTid = tinP.brcRaw ;
                        //U: THIS CAUSES WO DRIVER TO FAIL TO INSTALL: *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle = (countT)realHandle ;
                        //U: -- *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ;
                    //U: }
                }
            #endif

            {
                countT info = (countT)&tinP.pAdamGlobal1->_thirdC_.bFired01 ;
                TELLsYSc3LIFI( ifcIDtYPEtELLsYS_FIREDcTP , (byteT*)&info , sizeof info , idLineCt , idiFileCt ) 
            }
        }

        if( tinP.pAdamGlobal1->_thirdC_.pStk_pThird && !( F(flagsMode) & flTHIRDmODE_DISABLEiNSPECTION ) )
        {
            ZE( countT , idSlot ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;
            __Z( idSlot ) ;
        }

    bConstructed = 1 ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001001.thirdc.thirdc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001002.thirdc.dt_thirdc BEGIN
#define DDNAME       "3func.36001002.thirdc.dt_thirdc"
#define DDNUMB      (countT)0x36001002
#define IDFILE      (countT)0xb71


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1020002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1b00104.1.1.0.html\"\>1b00104:  WAKEsHOW( "example.simplest.func.1020002.thirdC.dt_thirdC" )\</A\>
tests for integrity
static applications only: for secondary thirdC objects, waits for POOP to be seen before doing anything
*/
/**/

/*1*/thirdC::~thirdC( voidT )/*1*/
{
    TINSL
    _IO_
    {
        SCOOP
        if( tinP.pAdamGlobal1->_thirdC_.pStk_pThird && !( F(flagsMode) & flTHIRDmODE_DISABLEiNSPECTION ) )
        {
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( (*tinP.pAdamGlobal1->_thirdC_.pStk_pThird)( (countT)this ) ) tinP.pAdamGlobal1->_thirdC_.pStk_pThird->extractF( tinP ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;
        }
    
        if( tinP.pAdamGlobal1->_thirdC_.pThPrime == this )
        {
            {
                countT info = (countT)&tinP.pAdamGlobal1->_thirdC_.bFired01 ;
                TELLsYSc3LIFI( ifcIDtYPEtELLsYS_FIREDdTP , (byteT*)&info , sizeof info , idLineCt , idiFileCt ) 
            }
    
            {
                ZE( countT , cCycle ) ;
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                /* if( !( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_etThreadONmainISiMPOTENT ) ) */ while( tinP.pAdamGlobal1->_thirdC_.cThirdObjects > 2 )
                {
                    if( !( ++ cCycle % 0x10 ) && tinP.pAdamGlobal1->_thirdC_.pStk_pThird )
                    {
                        stackC& stThird = *tinP.pAdamGlobal1->_thirdC_.pStk_pThird ;
    
                        stThird.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        if( !stThird )
                        {
                            OStEXTV( ostom , "leftover thirdC object: tinP.pAdamGlobal1->_thirdC_.cThirdObjects is nonze but tinP.pAdamGlobal1->_thirdC_.pStk_pThird is empty" )
                            dosTellMonitorIF( tinP , tellC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEtELLsYS_LOG , ostom , ostom.costF() + 1 ) , ifcIDbOOKStELL_SYS ) ;
                        }
                        else
                        {
                            ZE( countT , ido ) ;
                            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                            do
                            {
                                thirdC* pThird = (thirdC*)stThird.downF( tinP , hDown ) ;
                                if( !pThird ) break ; // WILL HAPPEN IF *tinP.pAdamGlobal1->_thirdC_.pStk_pThird IS IMPOTENT
        
                                OStEXT( ostob , 0x80 )
                                OStEXTAK( ostob , "leftover thirdC object " ) ;
                                OStEXTC( ostob , ++ ido , 0 ) ;
                                OStEXTAK( ostob , ": " ) ;
                                OStEXTC( ostob , pThird->idiFileCt , 0 ) ;
                                OStEXTAK( ostob , "(" ) ;
                                OStEXTC( ostob , pThird->idLineCt , 0 ) ;
                                OStEXTAK( ostob , ")" ) ;
        
                                dosTellMonitorIF( tinP , tellC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEtELLsYS_LOG , ostob , ostob.costF() + 1 ) , ifcIDbOOKStELL_SYS ) ;
    
                                OStEXTAK( ostob , "\r\n" ) ;
                                etherC::ifcSayIF( ostob , flSAY_LOG | flSAY_APPEND ) ;
                            }
                            while( ~hDown ) ;
                        }
                        stThird.ungrabF( tinP ) ;
                    }
    
                    ++ s ; thirdC::dosSleepRawIF( tinP , 250 ) ;
                }
            }
    
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;
        }
    
        //delF( tinP , pcFunctionTime2   ) ;
        //delF( tinP , pcFunctionTime1   ) ;
        //delF( tinP , pcFunctionExits   ) ;
        //delF( tinP , pcFunctionEntries ) ;
        delF( tinP , postThreadNameMadeMe ) ;
    
        thirdTestF( tinP ) ;
        if( POOP & ~fliEC_QUITTING ) *this = 0 ;
    
        //{
        //    OStEXT( ostob , 0x100 )
        //    OStEXTAK( ostob , "F" ) ;
        //    OStEXTC( ostob , idiFileCt , 0 ) ;
        //    OStEXTAK( ostob , "L" ) ;
        //    OStEXTC( ostob , idLineCt , 0 ) ;
        //    OStEXTAK( ostob , "-\r\n" ) ;
        //    JOTA( ostob ) ;
        //}
        tinP.pAdamGlobal1->_thirdC_.cThirdObjects -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001002.thirdc.dt_thirdc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001003.thirdc.operator_const_countt_ref BEGIN
#define DDNAME       "3func.36001003.thirdc.operator_const_countt_ref"
#define DDNUMB      (countT)0x36001003
#define IDFILE      (countT)0xb72


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/thirdC::operator const countT&( voidT )/*1*/
{
    TINSL
    SCOOP
    return POOP ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001003.thirdc.operator_const_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001004.thirdc.operator_assign BEGIN
#define DDNAME       "3func.36001004.thirdc.operator_assign"
#define DDNUMB      (countT)0x36001004
#define IDFILE      (countT)0xb73


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1020004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6b00104.1.1.0.html\"\>6b00104:  WAKEsHOW( "example.simplest.func.1020004.thirdC.operator_assign" )\</A\>
third must be 0
arguments
 ecP
*/
/**/

/*1*/thirdC& thirdC::operator =( const countT rcP )/*1*/
{
    TINSL
    SCOOP
    if( rcP && F(flagsMode) & flTHIRDmODE_IMPOTENCEtObLAMMO ) { BLAMMO ; }
    if( rcP ) poop.gruntF( tinP , TAG( TAGiDnULL ) , rcP , ifcIDtYPEpOOP_GRUNT ) ;
    else if( POOP ) { POOPRqUIET ; }

    if( tinP.pAdamGlobal1->_thirdC_.flQuitting )
    {
        if( F(flagsMode) & flTHIRDmODE_QUITTER ) __1
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001004.thirdc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001006.thirdc.c_itoaf BEGIN
#define DDNAME       "3func.36001006.thirdc.c_itoaf"
#define DDNUMB      (countT)0x36001006
#define IDFILE      (countT)0xb74


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_itoaF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020006.1.0.html\"\>definition\</A\>
arguments
 postP
 valueP
 radixP
*/
/**//*1*/voidT thirdC::c_itoaF( tinS& tinP , osTextT*& postP , sCountT valueP , countT radixP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( postP ) ;
        if( POOP ) return ;
    }

    _IO_
    newF( tinP , LF , postP , SB * sizeof( sCountT ) + 1 ) ; ___( postP ) ;
    if( !POOP ) BOSdOnOTtEST( WHATgbo , itoa( valueP , postP , radixP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001006.thirdc.c_itoaf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001007.thirdc.ostimesubtractf BEGIN
#define DDNAME       "3func.36001007.thirdc.ostimesubtractf"
#define DDNUMB      (countT)0x36001007
#define IDFILE      (countT)0xb75


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeSubtractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9b00104.1.1.0.html\"\>9b00104:  WAKEsHOW( "example.simplest.func.1020007.thirdC.osTimeSubtractF" )\</A\>
arguments
 timeA1P
 timeA2P
 timeB1P
 timeB2P
*/
/**/

/*1*/voidT thirdC::osTimeSubtractF( tinS& tinP , countT& timeA1P , sCountT& timeA2P , const countT timeB1P , const sCountT timeB2P )/*1*/
{
    SCOOP
    IFbEcAREFUL        
    {
        if( POOP ) return ;
    }

    // THE FOLLOWING APPEARS TO WORK FOR ALL SIGN CASES.  I DO NOT HAVE A DEEP UNDERSTANDING OF WHY IT WORKS,
    // BUT IT APPEARS TO REFLECT THE BEAUTIFUL WAY THAT OVERFLOW AND 2''S COMPLEMENT STORAGE FOR NEGATIVE
    // NUMBERS WORK TOGETHER.

    _IO_
    countT timeA1old = timeA1P ;
    timeA1P -= timeB1P ;
    timeA2P -= timeB2P ;
    if( timeA1P > timeA1old ) timeA2P -- ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001007.thirdc.ostimesubtractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001016.thirdc.c_zdiskflongfilenamesokf BEGIN
#define DDNAME       "3func.36001016.thirdc.c_zdiskflongfilenamesokf"
#define DDNUMB      (countT)0x36001016
#define IDFILE      (countT)0xb76


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_zDiskFLongFileNamesOKF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020016.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cc00104.1.1.0.html\"\>cc00104:  WAKEsHOW( "example.simplest.func.1020016.thirdC.c_zDiskFLongFileNamesOKF" )\</A\>
arguments
 postDiskP
  example: "///c"
*/
/**/

/*1*/boolT thirdC::c_zDiskFLongFileNamesOKF( tinS& tinP , const osTextT* const postDiskP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __( postDiskP[ 0 ] != '/' ) ;
        __( postDiskP[ 1 ] != '/' ) ;
        __( postDiskP[ 2 ] != '/' ) ;
        __( postDiskP[ 3 ] < 'a' || postDiskP[ 2 ] > 'z' ) ;
        __( postDiskP[ 4 ] ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( boolT , fLongOK ) ;
    OStEXTV( ostoTest , "?:\\neverused.long" )
    *(osTextT*)(const osTextT*)ostoTest = postDiskP[ 3 ] ;
    #ifdef __OS2__
        ULONG cc = 1 ;
        HDIR handle = HDIR_SYSTEM ;
        FILEFINDBUF3 info ;
        BOSdOnOTtEST( WHATsfr , DosFindFirst( ostoTest , &handle , 0 , &info , sizeof info , &cc, FIL_STANDARD ) )
        fLongOK = ERROR_FILENAME_EXCED_RANGE != tinP.brcRaw ;
    #elif defined( __NT__ )
        WIN32_FIND_DATA info ;
        BOSnOvALUE( WHATsfr , SetLastError( 0 ) )
        BOS( WHATsfr , BOShANDLE , FindFirstFile( ostoTest , &info ) )
        HANDLE handle = (HANDLE)tinP.brcRaw ;
        if( !tinP.bosFail || tinP.brcLath == ERROR_FILE_NOT_FOUND )
        {
            tinP.bosFail = 0 ;
            fLongOK = 1 ;
        }
        else if( tinP.brcLath == ERROR_FILENAME_EXCED_RANGE || tinP.brcLath == ERROR_INVALID_NAME || tinP.brcLath == ERROR_NOT_READY || tinP.brcLath == ERROR_PATH_NOT_FOUND ) tinP.bosFail = 0 ;
        BOSpOOP
    #endif
    return fLongOK ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001016.thirdc.c_zdiskflongfilenamesokf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001018.thirdc.doscloseeventsemf BEGIN
#define DDNAME       "3func.36001018.thirdc.doscloseeventsemf"
#define DDNUMB      (countT)0x36001018
#define IDFILE      (countT)0xb77


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCloseEventSemF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fc00104.1.1.0.html\"\>fc00104:  WAKEsHOW( "example.simplest.func.1020019.thirdC.dosCloseEventSemF" )\</A\>
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosCloseEventSemF( tinS& tinP , handleC& handleP )/*1*/
{
    SCOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001018.thirdc.doscloseeventsemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101a.thirdc.doscreatedirf BEGIN
#define DDNAME       "3func.3600101a.thirdc.doscreatedirf"
#define DDNUMB      (countT)0x3600101a
#define IDFILE      (countT)0xb78


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCreateDirF.0.html\"\>instances\</A\>
\<A HREF=\"5.102001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8d00104.1.1.0.html\"\>8d00104:  WAKEsHOW( "example.simplest.func.102001b.thirdC.dosCreateDirF" )\</A\>
arguments
 postP
  enforces the ifc convention that requires each directory name to end with the delimiter character
  example: "\\fooey\"
  "?:\\" (special case: i will verify that drive x exists
*/
/**/

/*1*/boolT thirdC::dosCreateDirF( tinS& tinP , const osTextT* const postP )/*1*/
{
    const countT costP = postP ? c_strlenIF( tinP , postP ) : 0 ;

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        __( costP < 2 ) ;
        if( POOP ) return 0 ;
        countT cMin = postP[ 1 ] == ':' ? 3 : 2 ;
        __( costP < cMin ) ;
        if( POOP ) return 0 ;
        //__( postP[ 1 ] - ':' ) ;
        __( postP[ costP - 1 ] - '\\' ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( boolT , bExisted ) ;
    {
        if( postP[ 1 ] == ':' && !postP[ 3 ] )
        {
            ZE( infoDisk1S* , pInfo ) ;
            dosQueryFSInfoF( tinP , pInfo , ifFileNameC( tinP , *this , postP ) ) ; ___( pInfo ) ;

            //THIS ERROR DETECTION CODE IS NOW HARMLESS BUT OBSOLETED BY THE 20121001 EDIT OF dosQueryFSInfoF
            bExisted = !!pInfo ;
            if( !bExisted )
            {
                __( postP[ 0 ] ) ;
                __1 ;
            }
            DEL( pInfo ) ;
        }
        else
        {
            ZE( osTextT* , postShorter ) ;
            newF( tinP , LF , postShorter , costP ) ; ___( postShorter ) ;
            c_memcpyIF( tinP , postShorter , postP , costP - 1 ) ;
            postShorter[ costP - 1 ] = 0 ;

            //if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF: [postShorter]:    ")+T(postShorter) ) ; //U::

            #ifdef __OS2__
                BOS( WHATsfw , BOSfAIL , DosCreateDir( postShorter , 0 ) )
                rc = tinP.brcRaw ;
            #elif defined( __NT__ )
                {
                    SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATgbo , BOSoK , CreateDirectory( postShorter , &sa ) )
                }
            #endif

            if( tinP.bosFail )
            {
                ZE( boolT , bFail ) ;
                if( tinP.brcQuery == ERROR_ACCESS_DENIED )
                {
                    //if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF / ACCESS DENIED: [postShorter]:    ")+T(postShorter) ) ;
                    ZE( infoFileS* , pInfoFile ) ;
                    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                    boolT fFirst = 1 ;
                    dosFindFileOrDirF( tinP , pInfoFile , handle , postShorter ) ; ___( pInfoFile ) ;
                    while( pInfoFile )
                    {
                        if( fFirst )
                        {
                            fFirst = 0 ;
                            tinP.bosFail = 0 ;
                        }
                        DEL( pInfoFile ) ;
                        dosFindFileOrDirF( tinP , pInfoFile , handle , postShorter ) ; ___( pInfoFile ) ;
                    }
                }
                else if( tinP.brcQuery == ERROR_ALREADY_EXISTS )
                {
                    bExisted = 1 ;
                    //if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF / EXISTED: [postShorter]:    ")+T(postShorter) ) ; //U::
                }
                else if( tinP.brcQuery == ERROR_LOGON_FAILURE )
                {
                    bFail = 1 ;
                    if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF / ERROR_LOGON_FAILURE: [postShorter]:    ")+T(postShorter) ) ; //U::
                }
                else if( tinP.brcQuery == ERROR_NOT_ENOUGH_MEMORY )
                {
                    bFail = 1 ;
                    if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF / ERROR_NOT_ENOUGH_MEMORY FAIL: [postShorter,brcQuery]:    ")+T(postShorter)+T("    ")+TF2(tinP.brcQuery,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U::

                    etherC& etRock = etherC::etRockIF( tinP ) ;
                    etRock.traceF( tinP , T("dosCreateDirF: tracing pool tallies") ) ;
                    etRock.tracePoolTalliesF( tinP ) ;
                    etRock.traceF( tinP , T("dosCreateDirF: traced  pool tallies; now calling BLAMMO") ) ;
                    BLAMMOiD( 0x11772299 ) ;

                    TELL( postP ) ;
                }
                else
                {
                    bFail = 1 ;
                    if( tinP.pEther ) tinP.pEther->traceF( tinP , T("dosCreateDirF / UNK FAIL: [postShorter,brcQuery]:    ")+T(postShorter)+T("    ")+TF2(tinP.brcQuery,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U::
                    TELL( postP ) ;
                }

                __( bFail ) ;   // BOSpOOP IS NOT USED BECAUSE THE traceF CALLS RESET ERROR INFO
            }

            delF( tinP , postShorter ) ;
        }
    }

    return bExisted ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101a.thirdc.doscreatedirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101d.thirdc.dosfindfileordirprivatef BEGIN
#define DDNAME       "3func.3600101d.thirdc.dosfindfileordirprivatef"
#define DDNUMB      (countT)0x3600101d
#define IDFILE      (countT)0xb79


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosFindFileOrDirPrivateF.0.html\"\>instances\</A\>
\<A HREF=\"5.102001e.1.0.html\"\>definition\</A\>
this function finds a single file whose name matches postLikeP
this function -must- be called repeatedly until handleP is ze
 as long as handleP is nonze, more matching files exist
 applications -must- call this function repeatedly until handleP is ze
 failure to do this causes a resource leak
arguments
 pInfoFileP
 handleP
  must be 0 on first call
  call this function repeatedly until handleP is set, by it, to 0
 postLikeP
  must not be 0
  can be a file name (no terminating '\' stroke)
  can be a directory name (terminating '\' stroke is present)
  exception: cannot be a root directory, e.g. "?:\"
  can contain the wildcard strokes '*' and '?'
  must point to a fully qualified file name, in native operating system form
  a terminating '\' character is ignored if present
   my search will find both files and directories
   i cannot be told to just find files, or to just find directories
   the result is a dir iff F(pInfoFileP->flags) & flFILEaTTR_DIRECTORY
  can contain wildcard strokes ('*' and '?')
   examples
    for Windows: "\\myDir\\myFile.foo*"
*/

/**/

//U: ENHANCE TO ALLOW "?:\\" TO RESULT IN FINDING A ROOT DIRECTORY
// CONJ: O.S. WILL SUPPORT SEARCHES FOR ROOT DIRECTORIES

#ifdef __OS2__
    #define symACHnAME         achName
    #define symACHnAMEaLT      replaceThisWithName
#elif defined( __NT__ )
    #define symACHnAME         cFileName
    #define symACHnAMEaLT      cAlternateFileName
#endif

/*1*/boolT thirdC::dosFindFileOrDirPrivateF( tinS& tinP , infoFileS*& pInfoFileP , handleC& handleP , const osTextT* const postLikeP )/*1*/
{



//U:: TO FIND A BUG
//if( tinP.pc Utility[ 0 ] && c_strstrIF( tinP , postLikeP , "\\exedll\\1" ) )
//{
//    countT foo = 2 ;
//}



    if( postLikeP[ 0 ] == '\\' && postLikeP[ 1 ] == '\\' )
    {
        countT foo = 2 ;
    }


    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postLikeP ) ;
        if( POOP ) return 0 ;
        __( !postLikeP[ 0 ] ) ;
        if( POOP ) return 0 ;
        if( postLikeP[ 1 ] != '\\' )            //20190826@0902: ACCOMMODATE NETBIOS FILE NAMES OF THE FORM "\\netbiosname\disk\path\short"
        {
            __( postLikeP[ 1 ] - ':' ) ;
        }
        if( POOP ) return 0 ;
        __( !postLikeP[ 2 ] ) ;
        if( POOP ) return 0 ;
        __( !postLikeP[ 3 ] ) ;
        __NZ( pInfoFileP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
        __( sizeof( countT ) != sizeof( HDIR ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , bCloaked ) ;
    ZE( boolT , bDebug ) ;
    {
        ZE( osTextT* , postLike ) ;                                                 // REMOVED TRAILING '\\' FOR DIRECTORY NAME
        const countT costLikeP = postLikeP ? c_strlenIF( tinP , postLikeP ) : 0 ;
        countT costCopy = costLikeP - ( postLikeP[ costLikeP - 1 ] == '\\' ) ;
        newF( tinP , LF , postLike , costCopy + 1 ) ; ___( postLike ) ;
        //tinP.pc Utility[ 0 ] = (countT)postLike ;                           //U::20210107@1055: slotsC FAILED TO DELETE THIS
        c_memcpyIF( tinP , postLike , postLikeP , costCopy ) ;
        if( postLike ) postLike[ costCopy ] = 0 ;

        const boolT bNetBios = postLike[ 0 ] == '\\' && postLike[ 1 ] == '\\' ;

        if( !bNetBios )
        {
            ZE( osTextT , ostDisk ) ;
            if( !POOP ) ostDisk = *postLike ;
            __( !(( ostDisk >= 'a' && ostDisk <= 'z' )||( ostDisk >= 'A' && ostDisk <= 'Z' )) ) ;
        }
        countT cMax = dosQuerySysInfoMaxPathLengthIF( tinP ) ;
        __Z( cMax ) ;

        //CS:CODEsYNC: PSEUDODUPLICATE CODE 3600101d 35001186
        {
            poopC poop ;
            SCOOP

            osTextT postf[ TUCK << 1 ] ;
            postf[ 0 ] = 0 ;
            handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;

            THREADmODE1oN( flTHREADmODE1_QUIETiMPOTENCE ) ;
            thirdC::dosFindFileOrDirSimpleIF( tinP , postf , sizeof postf , hFind , postLikeP , flDOSfINDfILEoRdIR_DOnOTtESTwATER ) ;
            THREADmODE1rESTORE

            if( POOP )
            {
                POOPR
                if( !bNetBios ) bCloaked = 1 ;
                if( pEtherContainsMe )
                {
                    //pEtherContainsMe->traceF( tinP , T("dosFindFileOrDirPrivateF / setting bCloaked [postLikeP] (next line):") ) ;
                    //pEtherContainsMe->traceF( tinP , T(postLikeP) ) ;
                }
            }
            else bDebug = 1 ;
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

        ZE( boolT , fFound ) ;
        #ifdef __OS2__
            FILEFINDBUF3 info ;
        #elif defined( __NT__ )
            WIN32_FIND_DATA info ;
        #endif
        c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;

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

                OStEXT( ostoCloaked , 0x200 )
                //OStEXTAL( ostoCloaked , postLikeP , costPrefix ) ;                                //20200602@1150: COMMENTED OUT BECAUSE CONJ: info.symACHnAME SHOULD CONTAIN ONLY THE SHORT NAME
                if( posti )                                                                         //U:: IF THIS IS TRUE THEN REMOVE THE CODE USED HERE TO CONCATENATE
                {
                    fFound = 1 ;
                    OStEXTA( ostoCloaked , posti ) ;
                    c_strcpyIF( tinP , info.symACHnAME , ostoCloaked ) ;
                }
            }
        }
        else
        {
            if( !POOP )
            {
                #ifdef __OS2__
                                                                                                         =
                    ULONG cc = 1 ;
                    if( bWoth )
                    {
                        if( !c_sttinP.brcRawhrIF( tinP , postLike , '?' ) && !c_sttinP.brcRawhrIF( tinP , postLike , '*' ) ) handleP.osF( ifcIDtYPEhANDLE_FILEfIND , (countT)HDIR_SYSTEM ) ;
                        else                                                                               handleP.osF( ifcIDtYPEhANDLE_fileFind , (countT)HDIR_CREATE ;

                        ZE( HDIR , osh ) ;
                        BOSI( WHATsfr , BOSfAIL , DosFindFirst( postLike , &osh , FILE_ARCHIVED | FILE_DIRECTORY | FILE_SYSTEM | FILE_HIDDEN | FILE_READONLY , &info , sizeof info , &cc, FIL_STANDARD ) )
                        handleP.osF( ifcIDtYPEhANDLE_FILEfIND , (countT)osh ) ;
                    }
                    else
                    {
                        BOSI( WHATsfr , BOSfAIL , DosFindNext( handleP.osF( ifcIDtYPEhANDLE_FILEfIND ) , &info , sizeof info , &cc ) )
                    }

                    if( 
                        tinP.bosFail                                 && /*CAUSE:*/
                        tinP.brcLath != ERROR_NO_MORE_FILES           && /*NO MORE MATCHES*/
                        tinP.brcLath != ERROR_FILENAME_E~CED_RANGE    && /*LONG NAME THAT IS NOT SUPPORTED ON THIS DISK*/
                        tinP.brcLath != ERROR_NOT_DOS_DISK            && /*DON''T KNOW IF THIS OCCURS*/
                        tinP.brcLath != ERROR_FILE_NOT_FOUND          && /*CONJECTURE: THIS WILL NEVER OCCUR*/
                        tinP.brcLath != ERROR_PATH_NOT_FOUND          && /*CONJECTURE: THIS WILL NEVER OCCUR*/
                        tinP.brcLath != ERROR_NOT_READY
                    )
                    {
                        BOSpOOP
                    }
                    fFound = cc == 1 && !tinP.brcLath ;

                    //U: CONJ: NEED TO CLOSE THE HANDLE IF ANOTHER FILE WAS NOT FOUND

                #elif defined( __NT__ )

                    ULONG cc = 1 ;
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )

                    //CS:CODEsYNCH: DUPLICATE CODE 3600101d 35001186
                    if( bWoth )
                    {
                        BOS( WHATsfr , BOShANDLE , FindFirstFile( postLikeP , &info ) )
                        pOsh->hFind.osF( ifcIDtYPEhANDLE_FILEfINDbASE , (countT)tinP.brcRaw ) ;
                        if( ~pOsh->hFind ) fFound = 1 ;
                    }
                    else
                    {
                        BOS( WHATsfr , BOSoK , FindNextFile( (HANDLE)pOsh->hFind.osF( ifcIDtYPEhANDLE_FILEfINDbASE ) , &info ) )
                        fFound = !tinP.bosFail ;
                    }

                    if( tinP.bosFail )
                    {
                        switch( tinP.brcLath )
                        {
                            case ERROR_SHARING_VIOLATION :
                            {
                                BOSpOOP
                                etherC::etTextIF( tinP ).traceF( tinP , T("thirdC::dosFindFileOrDirPrivateF / ERROR_SHARING_VIOLATION [postLike]: ")+T(postLike) ) ;
                                tinP.bosFail = 0 ;
                                fFound = 0 ;
                                handleP.closeIfF() ;
                                break ;
                            }
                            case ERROR_LOGON_FAILURE :
                            {
                                BOSpOOP
                                etherC::etTextIF( tinP ).traceF( tinP , T("thirdC::dosFindFileOrDirPrivateF / ERROR_LOGON_FAILURE [postLike]: ")+T(postLike) ) ;
                                tinP.bosFail = 0 ;
                                fFound = 0 ;
                                handleP.closeIfF() ;
                                break ;
                            }
                            case ERROR_FILE_NOT_FOUND :
                            case ERROR_PATH_NOT_FOUND :
                            case ERROR_NO_MORE_FILES  :
                            {
                                tinP.bosFail = 0 ;
                                fFound = 0 ;
                                handleP.closeIfF() ;
                                break ;
                            }
                            default :
                            {
                                BOSpOOP
                                tinP.bosFail = 0 ;
                                fFound = 0 ;
                                handleP.closeIfF() ;
                                break ;
                            }
                        }
                    }

                #endif
            }
        }

        if( !POOP && fFound )
        {
            pInfoFileP = new( 0 , tinP , LF ) infoFileS( tinP ) ; ___( pInfoFileP ) ;
            __Z( pInfoFileP ) ;
            if( pInfoFileP )
            {
                ZE( osTextT* , postEnd ) ;
                postEnd = c_strrchrIF( tinP , postLike , '\\' ) ;
                countT costPrefix = postEnd - postLike + 1 ;

                OStEXT( ostot , TUCK << 1 )
                OStEXTAL( ostot , postLike , costPrefix )
                if( info.symACHnAME ) OStEXTA( ostot , info.symACHnAME )

                OStEXT( ostota , TUCK << 1 )
                OStEXTAL( ostota , postLike , costPrefix )
                if( info.symACHnAMEaLT ) OStEXTA( ostota , info.symACHnAMEaLT )

                pInfoFileP->costaOsName = ostot.costF() + 2 ;
                newF( tinP , LF , pInfoFileP->postOsName , pInfoFileP->costaOsName ) ; ___( pInfoFileP->postOsName ) ; // 1 osTextT IS ALLOCATED FOR THE '\\' THAT WILL BE APPENDED IF THE OBJECT IS A DIRECTORY
                c_strncpyIF( tinP , pInfoFileP->postOsName , ostot , pInfoFileP->costaOsName ) ;

                if( *info.symACHnAMEaLT )
                {
                    pInfoFileP->costaOsNameAlt = ostota.costF() + 2 ;
                    newF( tinP , LF , pInfoFileP->postOsNameAlt , pInfoFileP->costaOsNameAlt ) ; ___( pInfoFileP->postOsNameAlt ) ; // 1 osTextT IS ALLOCATED FOR THE '\\' THAT WILL BE APPENDED IF THE OBJECT IS A DIRECTORY
                    c_strncpyIF( tinP , pInfoFileP->postOsNameAlt , ostota , pInfoFileP->costaOsNameAlt ) ;
                }
            }
        }

        {
            _IO_
            //tinP.pc Utility[ 1 ] = (countT)postLike ;
            delF( tinP , postLike ) ;                           //U::20210107@1055: slotsC FAILED TO DELETE THIS
        }

        if( !*this && fFound )
        {
            #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.19000001.getFileInfo.h"
            if( F(pInfoFileP->flags) & flFILEaTTR_DIRECTORY )
            {
                OStEXT( ostot , 0x200 )
                OStEXTA( ostot , pInfoFileP->postOsName )
                OStEXTAK( ostot , "\\" )
                thirdC::c_strncpyIF( tinP , pInfoFileP->postOsName , ostot , pInfoFileP->costaOsName ) ;

                countT costn = c_strlenIF( tinP , pInfoFileP->postOsName ) ;
                if                                                                                 // ENDS WITH EITHER "/./" OR "/../"
                (
                    pInfoFileP->postOsName[ costn - 1 ] == '\\' &&
                    pInfoFileP->postOsName[ costn - 2 ] == '.' &&
                    (
                        pInfoFileP->postOsName[ costn - 3 ] == '\\' ||
                        (
                            pInfoFileP->postOsName[ costn - 3 ] == '.' &&
                            pInfoFileP->postOsName[ costn - 4 ] == '\\'
                        )
                    )
                )
                pInfoFileP->flags |= flFILEaTTR_DOTdIRECTORY ;
            }
        }
    }

    return bCloaked ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101d.thirdc.dosfindfileordirprivatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101e.thirdc.dosloadmodulef BEGIN
#define DDNAME       "3func.3600101e.thirdc.dosloadmodulef"
#define DDNUMB      (countT)0x3600101e
#define IDFILE      (countT)0xb7a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosLoadModuleF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020020.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 handleP
 postAnticipatedErrorP
 postP
 pEtherP
  can be 0
  if not ze then exception information will be logged to *pEther
*/

/**//*1*/voidT thirdC::dosLoadModuleF( tinS& tinP , handleC& handleP , osTextT*& postAnticipatedErrorP , const osTextT* const postP , etherC* const pEtherP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __NZ( postAnticipatedErrorP ) ;
        if( POOP ) return ;
        __NZ( handleP ) ;
        __( !postP || !*postP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HMODULE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HINSTANCE ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_
    {
        ZE( boolT , bFail ) ;
        {
            POOPIE

            #ifdef __OS2__
    
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; dosSleepIF( tinP , TOCK ) ; //U: 19970528: CONJ: THIS IS NEEDED SO GATE WILL OPEN
                }
                countT cTries = 0 ; //U: WHAT IS CAUSING 8 TO BE NEEDED (AND NOT ALWAYS EFFECTIVE)? (WITH A TOCK WAIT AT THE END OF EACH TRY)
                ZE( HMODULE , osh ) ;
                BOSI( WHATgbo , BOSfAIL , DosLoadModule( 0 , 0 , postP , &osh ) )
                BOSpOOP
                handleP.osF( ifcIDtYPEhANDLE_DLL , (countT)osh ) ;
    
            #elif defined( __NT__ )
    
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOS( WHATgbo , BOSoK , LoadLibrary( postP ) )
                countT save = tinP.brcQuery ; //U::TO FIND A BUG

                handleP.osF( ifcIDtYPEhANDLE_DLL , tinP.brcRaw ) ;
    
                if( !c_strstrIF( tinP , processGlobal1I.postDllsLoaded , postP ) )  //20180117@1558: CHANGED SEMANTICS TO REGISTER ONLY UNIQUE DLL'S IN RESPONSE TO EXHAUSTING THE REGISTRY WHEN cloudC REPEATEDLY HIRES AN ADAM
                {
                    osTextT postPad[] = " " ;
                    if( c_strlenIF( tinP , processGlobal1I.postDllsLoaded ) + sizeof postPad + c_strlenIF( tinP , postP ) < sizeof processGlobal1I.postDllsLoaded )
                    {
                        if( *processGlobal1I.postDllsLoaded ) c_strcatIF( tinP , processGlobal1I.postDllsLoaded  , postPad ) ;
                                                              c_strcatIF( tinP , processGlobal1I.postDllsLoaded  , postP ) ;
                    }
                    inc02AM( processGlobal1I.cDllLoaded ) ;
                }
    
                if( tinP.bosFail )
                {
                    if( tinP.brcQuery == ERROR_IS_JOIN_TARGET )
                    {
                        OStEXTV( osto1 , "Anticipated failure:  LoadLibrary(\"" )
                        OStEXTV( osto2 , "\")." )
                        newF( tinP , LF , postAnticipatedErrorP , osto1.costF() + c_strlenIF( tinP , postP ) + osto2.costF() + 1 ) ; ___( postAnticipatedErrorP ) ;
                        thirdC::c_strcpyIF( tinP , postAnticipatedErrorP  , osto1 ) ;
                        thirdC::c_strcatIF( tinP , postAnticipatedErrorP  , postP ) ;
                        thirdC::c_strcatIF( tinP , postAnticipatedErrorP  , osto2 ) ;
                    }
                    else
                    {
                        __( tinP.brcQuery ) ;
                        __Z( handleP ) ;
                        bFail = 1 ;
                    }
                }
    
            #endif
        }

        if( bFail )
        {
            dec02AM( processGlobal1I.cDllLoaded ) ;
            if( pEtherP && !( F(flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) pEtherP->etherPutLogF( tinP , textC(tinP,TAG( TAGiDnULL ),flTEXTc_null,postP) ) ;
            __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101e.thirdc.dosloadmodulef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101f.thirdc.dosmovef BEGIN
#define DDNAME       "3func.3600101f.thirdc.dosmovef"
#define DDNUMB      (countT)0x3600101f
#define IDFILE      (countT)0xb7b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosMoveF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020021.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bd00104.1.1.0.html\"\>bd00104:  WAKEsHOW( "example.simplest.func.1020021.thirdC.dosMoveF" )\</A\>
arguments
 postNewP
 postOldP
 cTriesP
  if 0 then will retry forever
  if not 0 then will try cTriesP times
*/
/**//*1*/voidT thirdC::dosMoveF( tinS& tinP , const osTextT* const postNewP , const osTextT* const postOldP , countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNewP ) ;
        __Z( postOldP ) ;
        if( POOP ) return ;
    }

    _IO_
    const boolT bNoQuitEarly = !cTriesP ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        do
        {
            #ifdef __OS2__
                BOSI( WHATgbo , BOSfAIL , DosMove( postOldP , postNewP ) )
            #elif defined( __NT__ )
                BOS( WHATgbo , BOSoK , MoveFile( postOldP , postNewP ) )
            #endif

            if( tinP.bosFail )
            {
                BOSdOnOTtEST( WHATgbo , GetLastError() )
                tinP.brcQuery = tinP.brcRaw ;
            }

            if( !tinP.bosFail ) break ;
            else if( ( !cTriesP || cTriesP > 1 ) )
            {
                ++ s ; dosSleepIF( tinP , TOCK >> 2 ) ;
            }
        }
        while( !POOP && ( bNoQuitEarly || ( cTriesP && -- cTriesP ) ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600101f.thirdc.dosmovef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001021.thirdc.dosopeneventsemf BEGIN
#define DDNAME       "3func.36001021.thirdc.dosopeneventsemf"
#define DDNUMB      (countT)0x36001021
#define IDFILE      (countT)0xb7c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosOpenEventSemF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020023.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1d00104.1.1.0.html\"\>1d00104:  WAKEsHOW( "example.simplest.func.1020023.thirdC.dosOpenEventSemF" )\</A\>
it is illegal to refer to this symbol anywhere
arguments
 handleP
 postP
  can be 0
 fGivenP
  0: sign is not "given"
  1: sign is in the "given" state as soon as it is constructed
*/
/**/

/*1*/boolT thirdC::dosOpenEventSemF( tinS& tinP , handleC& handleP , const osTextT* const postP , const boolT fGivenP )/*1*/
{
    ZE( countT* , pcb ) ; *pcb = 0 ;

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        if( postP )
        {
            BOSdOnOTtEST( WHATgbo , strchr( postP , '\\' ) )
            __( tinP.brcRaw ) ;
        }
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
            OStEXTV( ostoPrefix , "\\sem32\\" )
            BOSdOnOTtEST( WHATgbo , strlen( postP ) )
            newF( tinP , LF , post , ostoPrefix.costF() + tinP.brcRaw + 1 ) ; ___( post ) ;
            thirdC::c_strcpyIF( tinP , post , ostoPrefix ) ;
            thirdC::c_strcpatF( tinP , post , postP ) ;
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
                    ZE( HEV , osh ) ;
                    BOSI( WHATgbo , BOSfAIL , DosOpenEventSem( post , &osh ) )
                    BOSpOOP
                    handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE , (countT)osh ) ;

                    if( !POOP ) break ;
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
        handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE , (countT)tinP.brcRaw ) ;
        if( ~handleP )
        {
            BOSdOnOTtEST( WHATgbo , GetLastError() )
            fCreator = ERROR_ALREADY_EXISTS != tinP.brcRaw ;
        }
        else __1

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001021.thirdc.dosopeneventsemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001022.thirdc.dosposteventsemf BEGIN
#define DDNAME       "3func.36001022.thirdc.dosposteventsemf"
#define DDNUMB      (countT)0x36001022
#define IDFILE      (countT)0xb7d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosPostEventSemF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020024.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0d00104.1.1.0.html\"\>0d00104:  WAKEsHOW( "example.simplest.func.1020024.thirdC.dosPostEventSemF" )\</A\>
this function does not do -anything- after calling the os to post the semaphore
 a thread that calls this can then end immediately
the sign is always given, even if this etherC object is impotent
 this ensures that kid threads waiting for a sign will not hang forever when impotence occurs
  see, for example, a130104, which would otherwise hang forever when the busC server is down
arguments
 handleP
  must not be 0
*/
/**/

/*1*/voidT thirdC::dosPostEventSemF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HEV ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        if( !handleP ) return ;
    }

    _IO_

    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosPostEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        BOSpOOP
        //countT rc = DosPostEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) ;
        //__( rc && rc != ERROR_ALREADY_POSTED ) ;
    #elif defined( __NT__ )
        BOS( WHATgbo , BOSoK , SetEvent( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) ) )
        BOSpOOP
        // SetEvent DOES NOT RETURN AN ERROR CODE IF THE EVENT IS ALREADY SET
        // THIS MEANS THAT WE CANNOT DETECT WHETHER THE EVENT WAS ALREADY SET!!! WINDOWS IS SUCH A PIECE OF SHIT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001022.thirdc.dosposteventsemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001024.thirdc.dosqueryfsinfof BEGIN
#define DDNAME       "3func.36001024.thirdc.dosqueryfsinfof"
#define DDNUMB      (countT)0x36001024
#define IDFILE      (countT)0xb7e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQueryFSInfoF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020026.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dd00104.1.1.0.html\"\>dd00104:  WAKEsHOW( "example.simplest.func.1020026.thirdC.dosQueryFSInfoF" )\</A\>
arguments
 pInfoDisk1P
 postDriveNameP
  example: "///c"
  example: "///c" "/this.part/is/ignored/bla/bla.bla"
*/
/**/

//MODIFICATION HISTORY
//
// 20121001: APPARENTLY VERY OLD CODE (WIN98 VINTAGE) THAT IGNORED A VARIETY OF SPURIOUS ERRORS WAS REWRITTEN TO NOT IGNORE ANY ERRORS AND TO ENSURE THAT OUTPUT STRUCTURE IS COMPLETELY DEFINED

//U: CONJ: THIS API SHOULD USE "?:\\" FORMAT RATHER THAN "///?" (OR "///?/")

/*1*/voidT thirdC::dosQueryFSInfoF( tinS& tinP , infoDisk1S*& pInfoDisk1P , const osTextT* const postDriveNameP , countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postDriveNameP ) ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( ULONG ) || fnu ) ;
            __( sizeof( count01T ) != sizeof( USHORT ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( DWORD ) || fnu ) ;
        #endif
        if( POOP ) return ;
        __( postDriveNameP[ 0 ] != '/' ) ;
        __( postDriveNameP[ 1 ] != '/' ) ;
        __( postDriveNameP[ 2 ] != '/' ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__

        infoDisk1aS infoDisk1a ;
        infoDisk1bS infoDisk1b ;
        countT idDrive = postDriveNameP[ 3 ] ;
        if( idDrive >= 'a' && idDrive <= 'z' ) idDrive -= 'a' - 1 ;
        else __( idDrive ) ;
        ZE( countT , cFound ) ;
        if( !POOP )
        {
            BOSI( WHATsfr , BOSfAIL , DosQueryFSInfo( idDrive , FSIL_ALLOC , &infoDisk1a , sizeof infoDisk1a ) )
            cFound += !tinP.bosFail ;
            if( tinP.bosFail && ( tinP.brcRaw == ERROR_INVALID_DRIVE || tinP.brcRaw == ERROR_NOT_READY ) ) tinP.bosFail = 0 ;
            BOSpOOP

            BOSI( WHATsfr , BOSfAIL , DosQueryFSInfo( idDrive , FSIL_VOLSER , &infoDisk1b , sizeof infoDisk1b ) )
            cFound += !tinP.bosFail ;
            if( tinP.bosFail && ( tinP.brcRaw == ERROR_INVALID_DRIVE || tinP.brcRaw == ERROR_NOT_READY ) ) tinP.bosFail = 0 ;
            BOSpOOP
        }
        if( !*this && cFound == 2 )
        {
            pInfoDisk1P = new( 0 , tinP , LF ) infoDisk1S( tinP , *this ) ; ___( pInfoDisk1P ) ;
            __Z( pInfoDisk1P ) ;
        }
        if( !*this && pInfoDisk1P ) *pInfoDisk1P << infoDisk1a << infoDisk1b ;
        if( !*this && pInfoDisk1P )
        {
            pInfoDisk1P->bLocal = 1 ;
            ZE( HFILE , hfi ) ;
            ZE( ULONG , action ) ;
            const osTextT postRoot[] = { postDriveNameP[ 3 ] , ':' , 0 } ;
            BOSI( WHATsfr , BOSfAIL , DosOpen( postRoot , &hfi , &action , 0 , 0 , OPEN_ACTION_OPEN_IF_EXISTS , OPEN_FLAGS_DASD|OPEN_SHARE_DENYNONE , 0 ) )
            if( tinP.brcRaw == ERROR_ACCESS_DENIED )
            {
                tinP.bosFail = 0 ;
                pInfoDisk1P->bLocal = 0 ;
            }
            BOSpOOP
            if( !*this && hfi )
            {
                ZE( ULONG , type ) ;
                ZE( ULONG , flags ) ;
                BOSI( WHATgbo , BOSfAIL , DosQueryHType( hfi , &type , &flags ) )
                BOSpOOP
                if( !POOP ) pInfoDisk1P->bLocal = !( type >> 15 & 1 ) ;
            }
            if( hfi ) { BOSdOnOTtEST( WHATgbo , DosClose( hfi ) ) }
        }

    #elif defined( __NT__ )

        const osTextT postRoot[] = { postDriveNameP[ 3 ] , ':' , '\\' , 0 } ;
        __( !( *postRoot >= 'a' && *postRoot <= 'z' ) ) ;

        ZE( boolT , bDone ) ;
        IFsCRATCH
        {
            SCOOPS

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            const boolT bForever = !cTriesP ;
            const boolT bQuiet   = cTriesP == 1 ;
            while( bForever || cTriesP -- )
            {
                ZE( DWORD , cSectorsPerCluster ) ;
                ZE( DWORD , cBytesPerSector ) ;
                ZE( DWORD , cFreeClusters ) ;
                ZE( DWORD , cClusters ) ;
                ZE( DWORD , cSerial ) ;

                //LOGrAW( "dosQueryFSInfoF / GetDiskFreeSpace [postRoot]: " ) ;
                //LOGrAW( postRoot ) ;
                //LOGrAW( "\r\n" ) ;

                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOS( WHATsfr , BOSoK , GetDiskFreeSpace( postRoot , &cSectorsPerCluster , &cBytesPerSector , &cFreeClusters , &cClusters ) )
                THREADmODE1oN( flTHREADmODE1_QUIETiMPOTENCE )
                BOSpOOP
                THREADmODE1rESTORE

                if( POOP )
                {
                    if( !bQuiet )
                    {
                        LOGrAW3( "dosQueryFSInfoF / GetDiskFreeSpace [brcQuery]: " , tinP.brcQuery , "\r\n" ) ;
                        LOGrAW( postRoot ) ;
                        LOGrAW( "\r\n" ) ;
                    }
                }
                else
                {
                    ZE( DWORD , cnu1 ) ;
                    ZE( DWORD , cnu2 ) ;
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATsfr , BOSoK , GetVolumeInformation( postRoot , 0 , 0 , &cSerial , &cnu1 , &cnu2 , 0 , 0 ) )
                    BOSpOOP

                    if( POOP ) { if( !bQuiet ) { LOGrAW3( "dosQueryFSInfoF / GetVolumeInformation [brcQuery]: " , tinP.brcQuery , "\r\n" ) ; } }
                    else
                    {
                        pInfoDisk1P = new( 0 , tinP , LF ) infoDisk1S( tinP , *this ) ; ___( pInfoDisk1P ) ;
                        __Z( pInfoDisk1P ) ;

                        if( POOP ) { if( !bQuiet ) { LOGrAW( "dosQueryFSInfoF / new failed\r\n" ) ; } }
                        else
                        {
                            pInfoDisk1P->cBytesPerSector = (count01T)cBytesPerSector ;
                            pInfoDisk1P->cSectorsPerAllocationUnit = cSectorsPerCluster ;
                            pInfoDisk1P->cAllocationUnits = cClusters ;
                            pInfoDisk1P->cUnusedUnits = cFreeClusters ;
                            pInfoDisk1P->idVolume = cSerial ;

                            BOS( WHATsfr , BOSoK , GetDriveType( postRoot ) )
                            BOSpOOP

                            if( POOP ) { if( !bQuiet ) { LOGrAW3( "dosQueryFSInfoF / GetDriveType [brcQuery]: " , tinP.brcQuery , "\r\n" ) ; } }
                            else       pInfoDisk1P->bLocal = tinP.brcRaw == DRIVE_FIXED || tinP.brcRaw == DRIVE_RAMDISK /*|| tinP.brcRaw == DRIVE_REMOVABLE || tinP.brcRaw == DRIVE_CDROM*/ ;
                        }
                    }
                }

                if( !POOP )
                {
                    bDone = 1 ;
                    break ;
                }
                else
                {
                    POOPRqUIET
                    if( bForever || cTriesP ) { ++ s ; dosSleepIF( tinP , TOCK >> 2 ) ; }
                }
            }
        }

        THREADmODE1oN( flTHREADmODE1_QUIETiMPOTENCE )
        __Z( bDone ) ;
        THREADmODE1rESTORE

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001024.thirdc.dosqueryfsinfof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001025.thirdc.dosquerymodulenamef BEGIN
#define DDNAME       "3func.36001025.thirdc.dosquerymodulenamef"
#define DDNUMB      (countT)0x36001025
#define IDFILE      (countT)0xb7f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQueryModuleNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020027.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 postP
 handleP
*/
/**//*1*/voidT thirdC::dosQueryModuleNameF( tinS& tinP , osTextT*& postP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( postP ) ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        __( sizeof( countT ) != sizeof( HMODULE ) || fnu ) ;
        if( POOP ) return ;
    }

    _IO_

    const countT cMax = dosQuerySysInfoMaxPathLengthIF( tinP ) ;
    __Z( cMax ) ;
    ZE( osTextT* , postOs ) ;
    newF( tinP , LF , postOs , cMax + 2 ) ; ___( postOs ) ;

    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosQueryModuleName( (HMODULE)handleP.osF( ifcIDtYPEhANDLE_DLL ) , cMax + 1 , postOs ) )
        BOSpOOP
    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , GetModuleFileName( (HMODULE)handleP.osF( ifcIDtYPEhANDLE_DLL ) , postOs , cMax + 1 ) )
        BOSpOOP

        BOSdOnOTtEST( WHATgbo , GetLastError() )
        __( tinP.brcRaw == ERROR_INSUFFICIENT_BUFFER ) ;

    #endif
    newF( tinP , LF , postP , cMax + 2 ) ; ___( postP ) ;
    c_strncpyIF( tinP , postP , ifFileNameC( tinP , *this  , postOs ) , cMax + 2 ) ;
    delF( tinP , postOs ) ;
    if( POOP ) delF( tinP , postP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001025.thirdc.dosquerymodulenamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001026.thirdc.dosqueryprocaddrf BEGIN
#define DDNAME       "3func.36001026.thirdc.dosqueryprocaddrf"
#define DDNUMB      (countT)0x36001026
#define IDFILE      (countT)0xb80


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQueryProcAddrF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020028.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
if i cannot find the specified entry point, impotence does not occur
the caller must inspect pvP to see if it is 0
arguments
 pvP
 handleP
 postP
*/
/**//*1*/voidT thirdC::dosQueryProcAddrF( tinS& tinP , voidT*& pvP , const handleC& handleP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __Z( handleP ) ;
        ZE( boolT , fnu ) ;
        __( sizeof( countT ) != sizeof( HMODULE ) || fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( PFN ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HINSTANCE ) || fnu ) ;
            __( sizeof( voidT* ) != sizeof( FARPROC ) || fnu ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__
        BOSdOnOTtEST( WHATgbo , DosQueryProcAddr( (HMODULE)handleP.osF( ifcIDtYPEhANDLE_DLL ) , 0 , postP , (PFN*)&pvP ) )
    #elif defined( __NT__ )
        BOS( WHATgbo , BOSoK , GetProcAddress( (HMODULE)handleP.osF( ifcIDtYPEhANDLE_DLL ) , postP ) )
        BOSpOOP
        pvP = (voidT*)tinP.brcRaw ;
        //__Z( pvP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001026.thirdc.dosqueryprocaddrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102a.thirdc.dosreadf BEGIN
#define DDNAME       "3func.3600102a.thirdc.dosreadf"
#define DDNUMB      (countT)0x3600102a
#define IDFILE      (countT)0xb81


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadF.0.html\"\>instances\</A\>
\<A HREF=\"5.102002c.1.0.html\"\>definition\</A\>
minimal wrapper for the static overload
*/
/**/

/*1*/voidT thirdC::dosReadF( tinS& tinP , byteT* const pbP , countT& cbP , const handleC& handleP , boolT fStillHungryIsOkP )/*1*/
{
    SCOOP
    _IO_
    dosReadIF( tinP , pbP , cbP , handleP , fStillHungryIsOkP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102a.thirdc.dosreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102e.thirdc.dosreseteventsemf BEGIN
#define DDNAME       "3func.3600102e.thirdc.dosreseteventsemf"
#define DDNUMB      (countT)0x3600102e
#define IDFILE      (countT)0xb82


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosResetEventSemF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020030.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3d00104.1.1.0.html\"\>3d00104:  WAKEsHOW( "example.simplest.func.1020030.thirdC.dosResetEventSemF" )\</A\>
impotence has no effect on this function
arguments
 handleP
*/
/**//*1*/voidT thirdC::dosResetEventSemF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
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
        ZE( countT , cntGiven ) ;
        BOSdOnOTtEST( WHATgbo , DosResetEventSem( (HEV)handleP.osF( ifcIDtYPEhANDLE_EVENTsEMAPHORE ) , (ULONG*)&cntGiven ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102e.thirdc.dosreseteventsemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102f.thirdc.dosscanenvf BEGIN
#define DDNAME       "3func.3600102f.thirdc.dosscanenvf"
#define DDNUMB      (countT)0x3600102f
#define IDFILE      (countT)0xb83


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosScanEnvF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020031.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3e00104.1.1.0.html\"\>3e00104:  WAKEsHOW( "example.simplest.func.1020031.thirdC.dosScanEnvF" )\</A\>
if the key does not exist, postValueP remains 0 and impotence does not occur
impotence will occur, however, if the key exists but a buffer to hold the value cannot be allocated
for os/2, the value can be any length
for windows, there is no way to distinguish reasons for failure, which can include an insufficiently large receiving buffer
 for windows, successively large buffer sizes are attempted until the attempt succeeds or a limit is reached
arguments
 postValueP
  must be 0
 postKeyP
  must not be 0
*/
/**/

//U: REWRITE THE NT CODE TO USE GetEnvironmentVariable (SEE THE 102* CODE THAT CALLS GetCurrentDirectory WHICH IS VERY SIMILAR)

/*1*/voidT thirdC::dosScanEnvF( tinS& tinP , osTextT*& postValueP , const osTextT* const postKeyP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __NZ( postValueP ) ;
        __Z( postKeyP ) ;
        if( POOP ) return ;
    }

    _IO_
    ZE( osTextT* , postKey ) ;
    BOSdOnOTtEST( WHATgbo , strlen( postKeyP ) )
    const countT costaKey = tinP.brcRaw + 3 ;
    newF( tinP , LF , postKey , costaKey ) ; ___( postKey ) ; // +1 NEEDED FOR OS/2; +3 NEEDED FOR NT

    #ifdef __OS2__

        ZE( osTextT* , postValue ) ;
        OStEXTA( postKey  , postKeyP ) ;
        c_struprIF( tinP , postKey ) ;
        if( !POOP )
        {
            BOSdOnOTtEST( WHATgbo , DosScanEnv( postKey , (const osTextT**)&postValue ) ) //U: VERIFY THAT THIS SETS postValue TO A VALUE THAT WE SHOULD -NOT- DELETE                
            __( tinP.brcRaw && tinP.brcRaw != ERROR_ENVVAR_NOT_FOUND ) ; 
            if( tinP.brcRaw ) __NZ( postValue ) ;
        }
        if( !*this && postValue )
        {
            BOSdOnOTtEST( WHATgbo , strlen( postValue ) )
            newF( tinP , LF , postValueP , tinP.brcRaw + 1 ) ; ___( postValueP ) ;
            OStEXTA( postValueP  , postValue ) ;
        }

    #elif defined( __NT__ )

        //U: DELETE THIS OLD CODE ONCE AM CONFIDENT THAT THE NEW CODE WORKS 000205
        #if defined( NEVERdEFINED )

            ZE( osTextT* , postValue ) ;
            newF( tinP , LF , postValue , CBcATCH ) ; ___( postValue ) ;
            if( !*this && postValue )
            {
                OStEXTAK( postKey  , "%" ) ;
                OStEXTA( postKey  , postKeyP ) ;
                OStEXTAK( postKey  , "%" ) ;
                //c_struprIF( tinP , postKey ) ; (NOT REQUIRED BY NT; NT IGNORES CASE)

                BOS( WHATgbo , BOSoK , ExpandEnvironmentStrings( postKey , postValue , CBcATCH ) )
                BOSpOOP
                __( tinP.brcRaw > CBbATCH ) ;

                if( POOP || *postValue == '%' ) delF( tinP , postValue ) ; //U::THIS CHECK TO SEE WHETHER THE BUFFER IS MODIFIED MIGHT NOT BE NEEDED NOW THAT THE CODE HAS BEEN CORRECTED TO COMPARE THE RETURN VALUE WITH THE BUFFER SIZE
            }
            if( !*this && postValue )
            {
                BOSdOnOTtEST( WHATgbo , strlen( postValue ) )
                newF( tinP , LF , postValueP , tinP.brcRaw + 1 ) ; ___( postValueP ) ;
                OStEXTA( postValueP  , postValue ) ;
            }
            delF( tinP , postValue ) ;

        #else

            {
                OStEXT(   ostot , 0x100 )
                OStEXTAK( ostot  , "%" ) ;
                OStEXTA(  ostot  , postKeyP ) ;
                OStEXTAK( ostot  , "%" ) ;
                c_strncpyIF( tinP , postKey , ostot , costaKey ) ;
            }
            //c_struprIF( tinP , postKey ) ; (NOT REQUIRED BY NT; NT IGNORES CASE)
            countT cbTry = 0x10 ;
            ZE( osTextT* , postv ) ;
            while( !*this )
            {
                PUSE.newF( tinP , LF , postv , cbTry ) ; ___( postv ) ; // DONE THIS WAY SO IMPOTENCE DOES NOT OCCUR IF CANNOT ALLOC
                if( postv )
                {
                    #if defined( ENABLEdROPnOTES )
                        dropNoteS* pNote = PUSE.pDropNoteF( tinP , (byteT*)postv ) ;
                        if( pNote )
                        {
                            pNote->idType       = ifciDtYPEdROPnOTE_thirdCdosScanEnvFpostv ;
                            pNote->cbRequested  = pNote->cbUsedReally = cbTry ;
                        }
                    #endif
                }
                else
                {
                    __1
                    break ;
                }

                *postv = 0 ;
                BOS( WHATgbo , BOSoK , ExpandEnvironmentStrings( postKey , postv , cbTry ) )
                BOSpOOP

                if( tinP.brcRaw <= cbTry || *postv != '%' )
                {
                    delF( tinP , postv ) ;
                    break ;
                }

                if( *postv ) break ;

                delF( tinP , postv ) ;
                cbTry *= 2 ;
            }

            if( postv )
            {
                BOSdOnOTtEST( WHATgbo , strlen( postv ) )
                countT costv = tinP.brcRaw ;
                newF( tinP , LF , postValueP , costv + 1 ) ; ___( postValueP ) ;
                c_memcpyIF( tinP , postValueP , postv , costv ) ; // THIS COSTS CPU CYCLES BUT AVOIDS WASTING POOLoLD BYTES
                if( postValueP ) postValueP[ costv ] = 0 ;
                delF( tinP , postv ) ;
            }

        #endif

    #endif

    delF( tinP , postKey ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600102f.thirdc.dosscanenvf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001031.thirdc.doswaiteventsemf BEGIN
#define DDNAME       "3func.36001031.thirdc.doswaiteventsemf"
#define DDNUMB      (countT)0x36001031
#define IDFILE      (countT)0xb84


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWaitEventSemF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020033.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2d00104.1.1.0.html\"\>2d00104:  WAKEsHOW( "example.simplest.func.1020033.thirdC.dosWaitEventSemF" )\</A\>
impotence has no effect on this function
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosWaitEventSemF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001031.thirdc.doswaiteventsemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001032.thirdc.pooldelf BEGIN
#define DDNAME       "3func.36001032.thirdc.pooldelf"
#define DDNUMB      (countT)0x36001032
#define IDFILE      (countT)0xb85


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$poolDelF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020035.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 pvP
  can be 0
  if 0 then nothing is done
*/
/**/

/*1*/voidT thirdC::poolDelF( tinS& tinP , voidT* const pvP )/*1*/
{
    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #6 HIGHEST FREQUENCY OF CALLS
    //_IO_
    PUSE( tinP , *(byteT**)&pvP ) ;
    //SCOOP //U::BUG: WHY IS THIS HERE? THIS HAS NO USEFUL FUNCTION; 20140519@1046: THIS IS LEFT OVER FROM GLOBAL ADDITION OF SCOOP TO ALL MEMBER FUNCTIONS.  IT WAS SUPPOSED TO BE MANUALLY MOVED TO THE BEGINNING OF THE FUNCTION DEF
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001032.thirdc.pooldelf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001033.thirdc.poolnewf BEGIN
#define DDNAME       "3func.36001033.thirdc.poolnewf"
#define DDNUMB      (countT)0x36001033
#define IDFILE      (countT)0xb86


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$poolNewF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020036.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
 it is also illegal to use this function in ifc system code
  use poolC::poolNewF instead
the allocated bytes are not initialized
this function is optimized for speed
 there is no tinP argument
 there is no "careful code"
 there is no standard overhead code at all
arguments
 tinP
 cP
*/
/**/

/*1*/voidT thirdC::poolNewF( tinS& tinP , const countT idLineNewP , const countT idiFileNewP , byteT*& pbP , const countT cbP )/*1*/
{
    //INOUT NOT USED, TO AVOID BLOWING STACK DURING INOUT TRACE
    //NEED _IO_, SO MAKE IT WORK (DEBUG INOUT TRACE)
    _IO_
    DROPnOTEdOESnOTwANTmE
    SCOOP
    // FOR MAX SPEED:
        // IN, OUT ARE NOT USED HERE
        // WE DO NOT INSPECT pb TO SEE IF IT IS 0
        // WE DO NOT INITIALIZE THE FIRST countT AT pb
        // WE DO NOT PREVENT THE RETURN OF A NONZE INVALID pb (IOW, THIS FUNCTION CAN RETURN A pb VALUE OF 4 ( sizeof( dropNoteS ) )

    PUSE.newF( tinP , idLineNewP , idiFileNewP , pbP , cbP ) ; ___LF( pbP , idLineNewP , idiFileNewP ) ;

    if( pbP )
    {
        #if defined( ENABLEdROPnOTES )
            dropNoteS* pNote = PUSE.pDropNoteF( tinP , pbP ) ;
            if( pNote )
            {
                pNote->idType       = ifciDtYPEdROPnOTE_thirdCpoolNewF ;
                pNote->cbRequested  = pNote->cbUsedReally = cbP ;
            }
        #endif
    }

    if( !pbP )
    {
        __( cbP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001033.thirdc.poolnewf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001034.thirdc.s_bindf BEGIN
#define DDNAME       "3func.36001034.thirdc.s_bindf"
#define DDNUMB      (countT)0x36001034
#define IDFILE      (countT)0xb87


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_bindF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020038.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6e00104.1.1.0.html\"\>6e00104:  WAKEsHOW( "example.simplest.func.1020038.thirdC.s_bindF" )\</A\>
returns the idPort actually bound to the socket
 this will always be idPortP except when idPortP is 0
on some operating systems, this call can fail if cTriesP == 1 and it is made immediately after another process closes a socket that was bound to the requested port
 windows nt: can fail
arguments
 handleP
  must not be 0
 idPortP
  can be 0, in which case an idPort will be assigned
 nicNameP
  can be 0, in which case an nicName assignment to this socket might be deferred until someone connects to it
   if the host has more than one LAN adapter card, the nicName assignment might be deferred
 cTriesP
  can be 0
  if 0 then will retry forever unless thPrimeIF( tinP ) is impotent
  if not 0 then will try cTriesP times (even if thPrimeIF( tinP ) is impotent)
  if - 1 then will retry forever even if thPrimeIF( tinP ) is impotent
*/
/**/

/*1*/countT thirdC::s_bindF( tinS& tinP , const handleC& handleP , const countT idPortP , const nicNameC nicNameP , countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( handleP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    sockaddr_in6 info ;
    c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
    info.sin6_family = AF_INET6 ;
    BOSdOnOTtEST( WHATgbo , htons( (count01T)( idPortP ? idPortP : INADDR_ANY ) ) )
    info.sin6_port = (count01T)tinP.brcRaw ;
    BOSdOnOTtEST( WHATgbo , htonl( *(const countT*)nicNameP ) )
    *(countT*)info.sin6_addr.u.Byte = tinP.brcRaw ; //U: SUPPORTS ONLY IPV4 (NOT IPV6)

    boolT bNoQuit = cTriesP == - 1 ;
    boolT bNoQuitEarly = !cTriesP ;
    boolT bFail = 1 ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        do
        {
            BOSS( WHATgbo , BOSfAIL , bind( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , sizeof info ) )
            if( tinP.bosFail )
            {
                BOSdOnOTtEST( WHATgbo , WSAGetLastError() )
                countT rc = tinP.brcRaw ;
                if( tinP.pEther ) tinP.pEther->traceF( tinP , T("bindF failed [rc]:    ")+TF2(rc,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                ++ s ; dosSleepIF( tinP , TUCK * 0x40 ) ;
            }
            else
            {
                //LOGrAW5( "adam " , processGlobal1I.idAdamRoot , " bind() to port " , idPortP , " aok\r\n" ) ;
                bFail = 0 ;
                break ;
            }
        }
        while( !*this && ( bNoQuit || ( bNoQuitEarly && !thPrimeIF( tinP ) ) || ( cTriesP && -- cTriesP ) ) ) ;
    }

    if( bFail )
    {
        __( idPortP ) ;
        __1 ;
    }

    ZE( countT , idPort ) ;
    if( !POOP )
    {
        c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
        sCountT cbInfo = sizeof info ;
        BOSS( WHATsir , BOSfAIL , getsockname( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , &cbInfo ) )
        BOSpOOP
        BOSdOnOTtEST( WHATgbo , ntohs( info.sin6_port ) )
        if( !POOP ) idPort = tinP.brcRaw ;
    }
    return idPort ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001034.thirdc.s_bindf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001035.thirdc.s_cancelf BEGIN
#define DDNAME       "3func.36001035.thirdc.s_cancelf"
#define DDNUMB      (countT)0x36001035
#define IDFILE      (countT)0xb88


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_cancelF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020039.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1f00104.1.1.0.html\"\>1f00104:  WAKEsHOW( "example.simplest.func.1020039.thirdC.s_cancelF" )\</A\>
closes the socket after setting linger to 0 seconds
it is illegal to do anything with a canceled socket other than to close it
the subsequent close will fail, because the socket is already closed
arguments
 handleP
  must not be 0
*/
/**//*1*/voidT thirdC::s_cancelF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_

    //{
    //    OStEXTV( ostoe , "!tinS, s_cancelF: cancelling a socket" )
    //    dosTellMonitorIF( tinP , tellC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEtELLsYS_LOG , ostoe , ostoe.costF() + 1 ) , ifcIDbOOKStELL_SYS ) ;
    //}

    #ifdef __OS2__

        BOSS( WHATgbo , BOSfAIL , so_cancel( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) ) ) )
        BOSpOOP
        handleP = 0 ;

    #elif defined( __NT__ )
 
            BOSdOnOTtEST( WHATgbo , shutdown( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , 2 ) )
            __( tinP.brcRaw && tinP.brcRaw != SOCKET_ERROR ) ;
            if( tinP.brcRaw == SOCKET_ERROR )
            {
                BOSdOnOTtEST( WHATgbo , WSAGetLastError() )
                if( tinP.brcRaw != WSAENOTSOCK ) { __( tinP.brcRaw - WSAENOTCONN ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001035.thirdc.s_cancelf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001036.thirdc.s_connectf BEGIN
#define DDNAME       "3func.36001036.thirdc.s_connectf"
#define DDNUMB      (countT)0x36001036
#define IDFILE      (countT)0xb89


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_connectF.0.html\"\>instances\</A\>
\<A HREF=\"5.102003b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8e00104.1.1.0.html\"\>8e00104:  WAKEsHOW( "example.simplest.func.102003b.thirdC.s_connectF" )\</A\>
  \<A HREF=\"5.f840104.1.1.0.html\"\>f840104:  WAKEsHOW( "example.simplest.func.102003b.thirdC.s_connectF" )\</A\>
arguments
 tinP
 handleP
  must not be 0
 idPortP
  must not be 0
 nicNameP
  can be 0
  if 0 then the local host is implied
 cTriesP
  can be 0
  if 0 then will retry forever unless thPrimeIF( tinP ) is impotent
  if not 0 then will try cTriesP times (even if thPrimeIF( tinP ) is impotent)
  if - 1 then will retry forever even if thPrimeIF( tinP ) is impotent
  regardless of cTriesP, i will discontinue retrying if [time1P,time2P] elapses or if s_cancelF is called (by another thread) for handleP
 time1P
  can be 0
  if 0 then will default to a value that depends upon whether nicNameP is null
 time2P
  can be 0
*/
/**/

/*1*/voidT thirdC::s_connectF( tinS& tinP , handleC& handleP , const countT idPortP , const nicNameC nicNameP , countT cTriesP , countT time1P , const sCountT time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __Z( idPortP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    //TN( tNNP , "" ) ; tNNP = TF1(nicNameP)+T("(")+TF1(idPortP)+T(")") ;
    //if( pEtherContainsMe ) pEtherContainsMe->ifcSayIF( tNNP+T(" connecting") , flSAY_APPEND | flSAY_LOG ) ;
    const nicNameC nicName = nicNameP ? nicNameP : nicNameC( NICnAMElOCAL ) ;
    if( !time1P && !time2P ) time1P = nicNameP ? TOCK * 2 : TUCK * 0x80 ;
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

    //etherC::etRockIF( tinP ).traceF( tinP , T("s_connect [sin_addr.s_addr,sin_port]: ")+TF3((countT)info.sin6_addr.s_addr,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,3)+T("    ")+TF2((countT)info.sin6_port,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

    killSocketS* pks = time1P || time2P ? s_registerTimeoutF( tinP , handleP , time1P , time2P ) : 0 ;

    boolT bNoQuit = cTriesP == - 1 ;
    boolT bNoQuitEarly = !cTriesP ;
    boolT bFail = 1 ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        do
        {
            if( !handleP ) break ;
    
            //CONoUTrAW5( "" , tinP.pAdamGlobal1->idAdam , ": connecting to port " , idPortP , "\r\n" ) ;


            //if( idPortP == 0x50 )   //U:: TO FIND A BUG
            //{
            //    tinP.pEther->traceF( tinP , T("s_connectF / connecting to port 05") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_1 ) ;
            //}




            BOSS( WHATsir , BOSfAIL , connect( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , sizeof info ) )

            //20141124@1644: WEIRD BEHAVIOR: THE tinP.bosFail = !!_brcRawExp ; LINE WAS OBSERVED IN WDW TO SET handleP.osh TO -1 (THE VALUE OF _brcRawExp)
            //{
            //    countT _idWhatSaveBos = tinP.monitor.idWhat1 ;
            //    WHATsir
            //    countT _brcRawExp = (countT)( connect( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , sizeof info ) ) ;
            //
            //
            //
            //
            //    //tinP.bosFail = !!_brcRawExp ;
            //
            //    if( _brcRawExp )
            //    {
            //        countT rc = WSAGetLastError() ;
            //        tinP.bosFail = 1 ;
            //        if( rc == WSAECONNREFUSED )
            //        {
            //            s_shutdown2IF( tinP ) ;
            //            s_setupIF( tinP ) ;
            //        }
            //    }
            //
            //
            //
            //
            //    processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;
            //    if( F(pg1.flCt) & flCTdTg_napHomeI && !( F(pg1.flDt) & flCTdTg_napHomeI ) )
            //    {
            //        static countT idMeOk ;
            //        static countT idMeFail ;
            //        countT tally = homeS::homeIF().tallyHo.tallyF( tinP.bosFail ? idMeFail : idMeOk ) ;
            //        if( !( tally % CbOStALLYpERlOG ) ) logTallyIF( tally , LF , tinP.bosFail , tinP.bosFail ? idMeFail : idMeOk , "connect( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , sizeof info )" ) ;
            //    }
            //    if( tinP.bosFail )
            //    {
            //        ZE( countT , _brcRaw ) ;
            //        {
            //            _brcRaw = (countT)(WSAGetLastError()) ;
            //            processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;
            //            if( F(pg1.flCt) & flCTdTg_napHomeI && !( F(pg1.flDt) & flCTdTg_napHomeI ) )
            //            {
            //                static countT idMe ;
            //                countT tally = homeS::homeIF().tallyHo.tallyF( idMe ) ;
            //                if( !( tally % CbOStALLYpERlOG ) ) logTallyIF( tally , LF , 0 , idMe , "WSAGetLastError()" ) ;
            //            }
            //        }
            //        _brcRaw -= WSABASEERR ;
            //        tinP.brcQuery = _brcRaw ;
            //        if( tinP.brcQuery )
            //        {
            //            tinP.brcLath = tinP.brcQuery ;
            //            tinP.idLine_brcLath = ifcLINE ;
            //            tinP.idiFile_brcLath = DDNUMB ;
            //            /*if( F(POOP.flagsF()) & flPOOP_SMELLY ) { LOGrAW7( "BOS0   [brcLath,idLine,idiFile]: " , tinP.brcLath , " " , tinP.idLine_brcLath , " " , tinP.idiFile_brcLath , "\r\n" ) ; }*/
            //        }
            //    }
            //    tinP.monitor.idWhat1 = _idWhatSaveBos ;
            //    tinP.brcRaw = _brcRawExp ;
            //}







            if( tinP.bosFail )
            {
                //if( idPortP == 0x50 )   //U:: TO FIND A BUG
                //{
                //    tinP.pEther->traceF( tinP , T("s_connectF / connect failed") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_1 ) ;
                //}

                #if defined( __OS2__ )
                    //U:
                #elif defined( __NT__ )
                    if( tinP.brcLath == WSAENOTSOCK ) break ; //THIS WILL HAPPEN IF thirdC::s_cancelF IS CALLED ON handleP
                #endif

                ++ s ;
                dosSleepIF( tinP , TUCK * 0x40 ) ;
            }
            else
            {
                //if( idPortP == 0x50 )   //U:: TO FIND A BUG
                //{
                //    tinP.pEther->traceF( tinP , T("s_connectF / connect aok") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_1 ) ;
                //}

                bFail = 0 ;
                break ;
            }
        }
        while( !*this && ( !pks || !pks->bKilled ) && ( bNoQuit || ( bNoQuitEarly && !thPrimeIF( tinP ) ) || ( cTriesP && -- cTriesP ) ) ) ;
    }
    if( pks ) { __( s_unregisterTimeoutF( tinP , handleP ) ) ; }

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

    //if( !POOP )
    //{
    //    if( pEtherContainsMe ) pEtherContainsMe->ifcSayIF( tNNP+T(" connected") , flSAY_APPEND | flSAY_LOG ) ;
    //}
    //else
    //{
    //    if( pEtherContainsMe ) pEtherContainsMe->ifcSayIF( tNNP+T(" NOT connected") , flSAY_APPEND | flSAY_LOG ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001036.thirdc.s_connectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001037.thirdc.s_nicnamef BEGIN
#define DDNAME       "3func.36001037.thirdc.s_nicnamef"
#define DDNUMB      (countT)0x36001037
#define IDFILE      (countT)0xb8a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_nicNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.102003c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0f00104.1.1.0.html\"\>0f00104:  WAKEsHOW( "example.simplest.func.102003c.thirdC.s_nicNameF" )\</A\>
evaluates to the host id of the specified domain name
impotence will not occur if the domain name server replies "not found"
caller must verify that my return value is not ze before using it
arguments
 postP
  can be 0, in which case the generic ip address that refers to the local host, is returned
  can be the special value "!broadcast"
   if so then evaluates to the special nicNameC value that results in broadcasting to all hosts on the local intranet
*/
/**/

/*1*/nicNameC thirdC::s_nicNameF( tinS& tinP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __( postP && !*postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    nicNameC idYou ;
    {
        ZE( nicNameC* , pYou ) ;
        ZE( countT   , cYou ) ;
        s_nicNameF( tinP , pYou , cYou , postP ) ; ___( pYou ) ;
        if( pYou ) idYou = *pYou ;
        delF( tinP , pYou ) ;
    }
    return idYou ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001037.thirdc.s_nicnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001038.thirdc.s_listenf BEGIN
#define DDNAME       "3func.36001038.thirdc.s_listenf"
#define DDNUMB      (countT)0x36001038
#define IDFILE      (countT)0xb8b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_listenF.0.html\"\>instances\</A\>
\<A HREF=\"5.102003d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9e00104.1.1.0.html\"\>9e00104:  WAKEsHOW( "example.simplest.func.102003d.thirdC.s_listenF" )\</A\>
arguments
 handleP
  must not be 0
*/
/**/

#define CBcATCH (1024 * 100)

/*1*/voidT thirdC::s_listenF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    BOSS( WHATgbo , BOSfAIL , listen( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , SOMAXCONN ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001038.thirdc.s_listenf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001039.thirdc.s_optionlingerf BEGIN
#define DDNAME       "3func.36001039.thirdc.s_optionlingerf"
#define DDNUMB      (countT)0x36001039
#define IDFILE      (countT)0xb8c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_optionLingerF.0.html\"\>instances\</A\>
\<A HREF=\"5.102003e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
lingers forever if needed (will never time out)
arguments
 handleP
  must not be 0
 cSecondsP
  if -1 then will linger forever, until the outgoing data have been received by the peer
  if 0 then closing the socket will be a "hard close"
   the socket will be reset immediately
  if >0 then will linger up to the specified number of seconds
*/
/**/

/*1*/voidT thirdC::s_optionLingerF( tinS& tinP , const handleC& handleP , const countT cSecondsP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ; //U: cSecondsP -> time1 time2
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_
    linger info ;
    info.l_onoff = 1 ;
    info.l_linger = (count01T)cSecondsP ;

    BOSS( WHATgbo , BOSfAIL , setsockopt( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , SOL_SOCKET , SO_LINGER , (char*)&info , sizeof info ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001039.thirdc.s_optionlingerf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103a.thirdc.s_peekf BEGIN
#define DDNAME       "3func.3600103a.thirdc.s_peekf"
#define DDNUMB      (countT)0x3600103a
#define IDFILE      (countT)0xb8d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_peekF.0.html\"\>instances\</A\>
\<A HREF=\"5.102003f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fe00104.1.1.0.html\"\>fe00104:  WAKEsHOW( "example.simplest.func.102003f.thirdC.s_peekF" )\</A\>
arguments
 handleP
  must not be 0
 pbP
  must not be 0
 cbP
  must not be 0
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000f.flSOCKETc!||
*/
/**/

/*1*/countT thirdC::s_peekF( tinS& tinP , byteT* const pbP , const countT cbP , handleC& handleP , const flagsT flagsP , const countT time1P , const sCountT time2P , const countT idModeP )/*1*/
{
    SCOOP
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
    countT rc = s_readOrPeekPrivateF( tinP , pbP , cbP , handleP , MSG_PEEK , flagsP , time1P , time2P , idModeP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103a.thirdc.s_peekf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103b.thirdc.s_readf BEGIN
#define DDNAME       "3func.3600103b.thirdc.s_readf"
#define DDNUMB      (countT)0x3600103b
#define IDFILE      (countT)0xb8e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020040.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ae00104.1.1.0.html\"\>ae00104:  WAKEsHOW( "example.simplest.func.1020040.thirdC.s_readF" )\</A\>
arguments
 handleP
  must not be 0
 pbP
  must not be 0
 cbP
  must not be 0
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000f.flSOCKETc!||
*/
/**/

/*1*/countT thirdC::s_readF( tinS& tinP , byteT* const pbP , const countT cbP , handleC& handleP , const flagsT flagsP , const countT time1P , const sCountT time2P , const countT idModeP )/*1*/
{
    SCOOP
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
    countT rc = s_readOrPeekPrivateF( tinP , pbP , cbP , handleP , 0        , flagsP , time1P , time2P , idModeP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103b.thirdc.s_readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103c.thirdc.s_readorpeekprivatef BEGIN
#define DDNAME       "3func.3600103c.thirdc.s_readorpeekprivatef"
#define DDNUMB      (countT)0x3600103c
#define IDFILE      (countT)0xb8f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_readOrPeekPrivateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020041.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the flSOCKETc symbolic constants before specifying flagsP
flagsTcpP is passed unmodified to the tcpip recv call
arguments
 handleP
  must not be 0
 pbP
  must not be 0
 cbP
  must not be 0
 flagsTcpP
  see documentation for the flags argument of the recv function
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000f.flSOCKETc!||
*/
/**/

/*1*/countT thirdC::s_readOrPeekPrivateF( tinS& tinP , byteT* const pbP , const countT cbP , handleC& handleP , const flagsT flagsTcpP , const flagsT flagsP , const countT time1P , const sCountT time2P , const countT idModeP )/*1*/
{
    SCOOP
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

    if( time1P || time2P ) s_registerTimeoutF( tinP , handleP , time1P , time2P ) ;

    if( pEtherContainsMe ) pEtherContainsMe->chokeAttackerF( tinP , handleP , cbP ) ;
    countT cbToDo = cbP ;
    PRO = cbToDo ; PROSHO ;
    boolT fhok         = !!( F(flagsP) & flSOCKETcrEAD_STILLhUNGRYiSoK ) ;
    boolT fJustOne     = !!( F(flagsP) & flSOCKETcrEAD_JUSToNEmOUTHFUL ) ;
    boolT fTinyNibbles = !!( F(flagsP) & flSOCKETcrEAD_WObYTEpERbITE   ) ;

    ZE( countT , offo ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) , 1 ) ;
        while( !*this && cbToDo )
        {
            ++ s ;
            PRO = cbToDo ; PROSHO ;
            countT cbBite = fTinyNibbles
                ? 1
                : cbToDo > 8192
                    ? 8192
                    : cbToDo
            ;

            #if defined( __NT__ )

                BOSnOvALUE( WHATgbo , WSASetLastError( 0 ) )

            #endif

            //ZE( countT  , timeB1 ) ;
            //ZE( sCountT , timeB2 ) ;
            //if( tinP.pc Utility[ 1 ] && tinP.pEther ) tinP.pEther->osTimeNowF( tinP , timeB1 , timeB2 ) ;

            ZE( sCountT , cbNew ) ;
            switch( idModeP )
            {
                case ifcIDmODEsOCKETS_NOTeNCRYPTED :
                {
                    _IO_
                    BOSS( WHATsir , BOSsOCKETcODE2 , recv( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , pbP + offo , cbBite , flagsTcpP ) )
                    BOSpOOP
                    if( !POOP ) cbNew = tinP.brcRaw ;
                    if( cbNew == SOCKET_ERROR )
                    {
                        cbNew = 0 ;
                        __1 ;
                    }
                    break ;
                }
                case ifcIDmODEsOCKETS_ENCRYPTED :
                {
                    _IO_
                    cbNew = flagsTcpP & MSG_PEEK
                        ? thirdC::openSsl_peekIF( tinP , pbP + offo , cbBite , handleP )
                        : thirdC::openSsl_readIF( tinP , pbP + offo , cbBite , handleP )
                    ;
                    if( cbNew == SOCKET_ERROR )
                    {
                        cbNew = 0 ;
                        __1 ;
                    }
                    break ;
                }
            }

            //if( tinP.pc Utility[ 1 ] && tinP.pEther )
            //{
            //    ZE( countT  , timeE1 ) ;
            //    ZE( sCountT , timeE2 ) ;
            //    tinP.pEther->osTimeNowF(      tinP , timeE1 , timeE2 ) ;
            //    tinP.pEther->osTimeSubtractF( tinP , timeE1 , timeE2 , timeB1 , timeB2 ) ;
            //    if( timeE1 || timeE2 ) tinP.pEther->traceF( tinP , T("s_readOrPeekPrivateF [time in recv]:    slow    ")+TTF(timeE1,timeE2) , flTRACE_null , ifcIDtRACEdIVERT_7 ) ; //U:: TO FIND A BUG
            //    else                   tinP.pEther->traceF( tinP , T("s_readOrPeekPrivateF [time in recv]:    fast") , flTRACE_null , ifcIDtRACEdIVERT_7 ) ; //U:: TO FIND A BUG
            //}

            tinP.odoSockCbRead += cbNew ;
            offo               += cbNew ;
            cbToDo             -= cbNew ;

            if( !cbNew || fJustOne ) break ;
        }
    }
    PRO = cbToDo ; PROSHO ;

    {
        if( !fhok && !fTinyNibbles && cbToDo ) __( cbToDo ) ;
    
        if( !POOP && offo && F(flagsP) & flSOCKETcrEAD_CONVERTbYTEoRDER )
            c_zReverseByteOrderF( tinP , pbP , offo ) ;
    }

    if( time1P || time2P ) { __( s_unregisterTimeoutF( tinP , handleP ) ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103c.thirdc.s_readorpeekprivatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103f.thirdc.s_socketif BEGIN
#define DDNAME       "3func.3600103f.thirdc.s_socketif"
#define DDNUMB      (countT)0x3600103f
#define IDFILE      (countT)0xb90


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_socketIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020044.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ee00104.1.1.0.html\"\>ee00104:  WAKEsHOW( "example.simplest.func.1020044.thirdC.s_socketIF" )\</A\>
evaluates to a nonze handle
 if third is, or becomes during evaluation, impotent, then evaluates to 0
*/
/**/

/*1*/voidT thirdC::s_socketIF( tinS& tinP , handleC& handleP , const boolT idTypeP , const handleC* const phContextP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_

    countT idType = idTypeP ? idTypeP : ifcSOCKETtYPE_STREAM ;

    ZE( countT , idTypeOs ) ;
    switch( idType )
    {
        case ifcSOCKETtYPE_STREAM   : { idTypeOs = SOCK_STREAM ; break ; }
        case ifcSOCKETtYPE_DATAgRAM : { idTypeOs = SOCK_DGRAM  ; break ; }
        default :
        {
            __( idType ) ;
            __1
        }
    }

    //#if defined( __NT__ )
    //    if( 'w' == osIdIF( tinP ) ) { int opt = SO_SYNCHRONOUS_NONALERT ; __( NO_ERROR - setsockopt( INVALID_SOCKET , SOL_SOCKET , SO_OPENTYPE , (char*)&opt , sizeof opt ) ) ; } // OPTIMIZE: THIS ONLY NEEDS TO BE DONE ONCE FOR EACH THREAD
    //#endif

    BOS( WHATgbo , BOSsOCKETcODE , socket( PF_INET6 , idTypeOs , 0 ) )      //20210223@1233: CHANGED FROM PF_INET TO PF_INET6
    BOSpOOP
    {
        countT oshSocket = tinP.brcRaw ;
        //LOGrAW5( "" , oshSocket , "    " , tinP.pAdamGlobal1->idAdam , " ++++\r\n" ) ;
    }

    //CS:CODEsYNC: PSEUDODUPLICATE 3600103f 360010b1
    if( !phContextP ) handleP.osF( ifcIDtYPEhANDLE_SOCKET , tinP.brcRaw ) ;
    else
    {
        countT oshSocket = tinP.brcRaw ;
        openSsl_getWrapperIF( tinP , handleP , *phContextP ) ;
        countT c_pWrapper = handleP.cNoteF() ;
        handleP.resetF() ;
        handleP.osF( ifcIDtYPEhANDLE_SOCKET , oshSocket , 0 , c_pWrapper ) ;
    }

    if( !handleP ) __1
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600103f.thirdc.s_socketif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001040.thirdc.s_writef BEGIN
#define DDNAME       "3func.36001040.thirdc.s_writef"
#define DDNUMB      (countT)0x36001040
#define IDFILE      (countT)0xb91


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020045.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.be00104.1.1.0.html\"\>be00104:  WAKEsHOW( "example.simplest.func.1020045.thirdC.s_writeF" )\</A\>
arguments
 handleP
  must not be 0
 pbP
  must not be 0
 cbP
  if 0 then pbP must be a null terminated string of bytes, which will be written
  the terminating null (0) will -not- be written
*/
/**/

/*1*/voidT thirdC::s_writeF( tinS& tinP , handleC& handleP , const byteT* const pbP , const countT cbP , const countT idModeP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __Z( pbP ) ;
        __Z( idModeP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    const countT cbw = cbP ? cbP : c_strlenIF( tinP , pbP ) ;
    if( pEtherContainsMe ) pEtherContainsMe->chokeAttackerF( tinP , handleP , 0 , cbw ) ;

    //if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_writeF [cbw]:    ")+TF2(cbw,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

    _IO_
    ZE( countT , off ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !*this )
        {
            PRO = cbw ; PROSHO ;
            countT cbBite = cbw - off ;
            if( cbBite > 8192 ) cbBite = 8192 ;
    
            ZE( sCountT , cba ) ;
            switch( idModeP )
            {
                case ifcIDmODEsOCKETS_NOTeNCRYPTED :
                {
                    BOSS( WHATsiw , BOSsOCKETcODE2 , send( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (byteT*)( pbP + off ) , cbBite , 0 ) )
                    BOSpOOP

                    if( !POOP ) cba = tinP.brcRaw ;

                    break ;
                }
                case ifcIDmODEsOCKETS_ENCRYPTED :
                {
                    cba = thirdC::openSsl_writeIF( tinP , handleP , (byteT*)( pbP + off ) , cbBite ) ;
                    break ;
                }
                default: { BLAMMO ; break ; }
            }

            if( !POOP )
            {
                if( !cba         ) dosSleepIF( tinP , 4000 ) ;
                else if( cba > 0 ) off += cba , tinP.odoSockCbWrite += cba ;
                else
                {
                    { __( cba ) ; }
                    break ; // SHOULD BE REDUNDANT SINCE while LOOP IS CONDITIONAL ON !*this
                }
            }
    
            if( off == cbw ) break ;
            ++ s ;
        }
    }
    PRO = cbw ; PROSHO ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001040.thirdc.s_writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001047.thirdc.c_zreplacef BEGIN
#define DDNAME       "3func.36001047.thirdc.c_zreplacef"
#define DDNUMB      (countT)0x36001047
#define IDFILE      (countT)0xb92


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_zReplaceF.0.html\"\>instances\</A\>
\<A HREF=\"5.102004d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ec00104.1.1.0.html\"\>ec00104:  WAKEsHOW( "example.simplest.func.102004d.thirdC.c_zReplaceF" )\</A\>
arguments
 postP
 postOldP
 postNewP
*/
/**/

/*1*/voidT thirdC::c_zReplaceF( tinS& tinP , osTextT*& postP , const osTextT* const postOldP , const osTextT* const postNewP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __Z( postOldP ) ;
        __Z( postNewP ) ;
        __( !c_strlenIF( tinP , postOldP ) ) ;
        __( !c_strlenIF( tinP , postNewP ) ) ;
        if( POOP ) return ;
    }

    _IO_
    ZE( osTextT* , postDoomed ) ;
    ZE( osTextT* , postEnd ) ;
    ZE( countT , costEach ) ;
    ZE( countT , costNew ) ;
    {
        ZE( countT , cHit ) ;
        costEach = c_strlenIF( tinP , postOldP ) ;
        postEnd = postP + c_strlenIF( tinP , postP ) ;
        ZE( osTextT* , postc ) ;
        postc = postP ;
        ZE( osTextT* , postHit ) ;
        while( postHit = c_strstrIF( tinP , postc , postOldP ) , postHit )
        {
            cHit ++ ;
            postc += costEach ;
            if( postc == postEnd ) break ;
        }
        sCountT costExtra = cHit * ( (sCountT)c_strlenIF( tinP , postNewP ) - costEach ) ;

        postDoomed = postP ;
        postP = 0 ;
        costNew = c_strlenIF( tinP , postDoomed ) + costExtra ;
        newF( tinP , LF , postP , costNew + 1 ) ; ___( postP ) ;
        if( postP ) postP[ costNew ] = 0 ;
    }

    if( postP )
    {
        ZE( osTextT* , postcGet ) ;
        ZE( osTextT* , postcPut ) ;
        postcGet = postDoomed ;
        postcPut = postP ;
        countT costEachNew = c_strlenIF( tinP , postNewP ) ;
        while( postcGet < postEnd )
        {
            if( postcGet == c_strstrIF( tinP , postcGet , postOldP ) )
            {
                c_memcpyIF( tinP , postcPut , postNewP , costEachNew ) ;
                postcPut += costEachNew ;
                postcGet += costEach ;
            }
            else
            {
                if( postcPut && postcGet ) *postcPut = *postcGet ;
                postcPut ++ ;
                postcGet ++ ;
            }
        }
        postP[ costNew ] = 0 ;
    }

    delF( tinP , postDoomed ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001047.thirdc.c_zreplacef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001055.thirdc.dossetdefaultdiskf BEGIN
#define DDNAME       "3func.36001055.thirdc.dossetdefaultdiskf"
#define DDNUMB      (countT)0x36001055
#define IDFILE      (countT)0xb93


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetDefaultDiskF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005b.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
windows: this instruction is not supported on Windows
arguments
 postDriveNameP
  this can be a drive name or a full file name
  if it is a full file name, only the drive portion is used
  example: T("///c")
  example: T("///c" "/tmp/fooey")
*/
/**//*1*/voidT thirdC::dosSetDefaultDiskF( tinS& tinP , const osTextT* const postDriveNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        if( !POOP )
        {
            __Z( postDriveNameP ) ;
            #ifdef __OS2__
                ZE( boolT , fnu ) ;
                __( sizeof( countT ) != sizeof( ULONG ) || fnu ) ;
            #endif
        }
        if( !POOP )
        {
            __( postDriveNameP[ 0 ] != '/' ) ;
            __( postDriveNameP[ 1 ] != '/' ) ;
            __( postDriveNameP[ 2 ] != '/' ) ;
        }
        if( POOP ) return ;
    }

    _IO_
    countT idDrive = postDriveNameP[ 3 ] ;
    if( idDrive >= 'a' && idDrive <= 'z' ) idDrive -= 'a' - 1 ;
    else __1

    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosSetDefaultDisk( idDrive ) )
        BOSpOOP
    #elif defined( __NT__ )
        if( !POOP ) { __1 ; } //CONCEPT OF A CURRENT DISK IS NOT SUPPORTED ON NT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001055.thirdc.dossetdefaultdiskf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001056.thirdc.dossetcurrentdirf BEGIN
#define DDNAME       "3func.36001056.thirdc.dossetcurrentdirf"
#define DDNUMB      (countT)0x36001056
#define IDFILE      (countT)0xb94


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetCurrentDirF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
the behavior of this function varies across operating systems
 on os/2 this sets the current directory for the current disk
 on windows, this sets the (single) current directory
arguments
 postP
*/
/**//*1*/voidT thirdC::dosSetCurrentDirF( tinS& tinP , const osTextT* const postP )/*1*/
{
    SCOOP
    _IO_
    dosSetCurrentDirIF( tinP , postP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001056.thirdc.dossetcurrentdirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001057.thirdc.dosstartsessionf BEGIN
#define DDNAME       "3func.36001057.thirdc.dosstartsessionf"
#define DDNUMB      (countT)0x36001057
#define IDFILE      (countT)0xb95


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosStartSessionF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.af00104.1.1.0.html\"\>af00104:  WAKEsHOW( "example.simplest.func.102005d.thirdC.dosStartSessionF" )\</A\>
see the flSESSION symbolic constants
on windows, some flSESSION flags have no effect
 flSESSION_KID
 flSESSION_FULLsCREEN
 flSESSION_HIDE
 flSESSION_BACK
on os/2, some flSESSION flags have no effect
 flSESSION_HIDE
os: on windows, kid processes are not supported, so the kid flag has no effect
arguments
 tidP
  must be 0
 pidP
  must be 0
 hThreadP
  must be 0
  the caller must close this handle when it is not going to use it any more
 hProcessP
  must be 0
  the caller must close this handle when it is not going to use it any more
 postExeP
 postArgsP
 idColP
 idRowP
 cColP
 cRowP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000e.flSESSION!||
*/

//U:COMBINE INTO A SINGLE API: 102006a AND 102005d

/**//*1*/voidT thirdC::dosStartSessionF( tinS& tinP , countT& tidP , countT& pidP , const osTextT* const postExeP , const osTextT* const postArgsP , const sCountT idColP , const sCountT idRowP , const countT cColP , const countT cRowP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( tidP ) ;
        __NZ( pidP ) ;
        __Z( postExeP ) ;
        __( !tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle ) ;
        __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
        FV( flSESSION , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    {
        #ifdef __OS2__

            __( F(flagsP) & flSESSION_MONITORED ) ; //U: SUPPORT DEBUGGING FLAG

            STARTDATA info ;
            {
                byteT pbBadGuy[ 255 ] ;

                info.Length             = sizeof info                   ;
                F(flagsP) & flSESSION_KID ? info.Related = SSF_RELATED_CHILD : info.Related = SSF_RELATED_INDEPENDENT ;
                info.TraceOpt           = 0                             ;
                info.PgmTitle           = (osTextT*)"IdeaFarm " "(tm) City" ;
                info.PgmName            = (osTextT*)postExeP            ;
                info.PgmInputs          = (osTextT*)postArgsP           ;
                info.TermQ              = 0                             ;
                info.Environment        = 0                             ;
                info.InheritOpt         = SSF_INHERTOPT_PARENT          ;
                info.IconFile           = 0                             ;
                info.PgmHandle          = 0                             ;
                info.PgmControl         = SSF_CONTROL_SETPOS            ;
                if( F(flagsP) & flSESSION_MINIMIZE ) info.PgmControl |= SSF_CONTROL_MINIMIZE ;
                if( F(flagsP) & flSESSION_MAXIMIZE ) info.PgmControl |= SSF_CONTROL_MAXIMIZE ;
                info.InitXPos           = (count01T) idColP                ;
                info.InitYPos           = (count01T) idRowP                ;
                info.InitXSize          = (count01T)cColP                ;
                info.InitYSize          = (count01T)cRowP                ;
                info.Reserved           = 0                             ;
                info.ObjectBuffer       = pbBadGuy                      ;
                info.ObjectBuffLen      = sizeof pbBadGuy               ;
                F(flagsP) & flSESSION_BACK ? info.FgBg = SSF_FGBG_BACK : info.FgBg = SSF_FGBG_FORE ;
                F(flagsP) & flSESSION_FULLsCREEN ? info.SessionType = SSF_TYPE_FULLSCREEN : info.SessionType = SSF_TYPE_DEFAULT ;
            }

            ULONG sessionId = 0 ;
            PID   processId = 0 ;

            BOSI( WHATsfr , BOSfAIL , DosStartSession( &info , &sessionId , &processId ) )
            if( tinP.bosFail && tinP.brcLath == ERROR_SMG_START_IO_BACKGROUND ) tinP.bosFail = 0 ;
            BOSpOOP
            if( !POOP ) pidP = processId ;

        #elif defined( __NT__ )

            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            flagsT flags1 = CREATE_DEFAULT_ERROR_MODE | CREATE_NEW_CONSOLE | CREATE_NEW_PROCESS_GROUP ;
            if( F(flagsP) & flSESSION_MONITORED ) flags1 |= DEBUG_PROCESS | DEBUG_ONLY_THIS_PROCESS /*U: | CREATE_SUSPENDED */ ;

            SIZE_T cba = 0 ;
            InitializeProcThreadAttributeList( 0 , 1 , 0 , &cba ) ;

            ZE( osTextT* , postAll ) ;
            PROCESS_INFORMATION pinfo ;
            c_memsetIF( tinP , (byteT*)&pinfo , sizeof pinfo ) ;
            if( cba < 0x100 )
            {
                unsigned pcInfo2[ 0x100 / sizeof( unsigned ) ] ;
                memset( pcInfo2 , 0 , cba ) ;

                if( InitializeProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 1 , 0 , &cba ) )
                {
                    boolT bOk = 1 ;
                    countT offNumaNodeValidChosen = thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ;
                    if( offNumaNodeValidChosen != NUMA_NO_PREFERRED_NODE )
                    {
                        bOk = 0 ;
                        WORD offNodePreferred = (WORD)offNumaNodeValidChosen ;  // THE NEXT LINE WILL FAIL WITH ANY SIZE OTHER THAN WORD
                        if( UpdateProcThreadAttribute( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 0 , PROC_THREAD_ATTRIBUTE_PREFERRED_NODE , &offNodePreferred , sizeof offNodePreferred , 0 , 0 ) )
                        {
                            bOk = 1 ;
                        }
                    }

                    if( bOk )
                    {
                        STARTUPINFOEX sinfo ;
                        c_memsetIF( tinP , (byteT*)&sinfo , sizeof sinfo ) ;
                        sinfo.StartupInfo.cb = sizeof sinfo ;
                        sinfo.StartupInfo.lpReserved = 0 ;
                        sinfo.StartupInfo.lpDesktop = 0 ;
                        sinfo.StartupInfo.lpTitle = 0 ; //MUST BE NULL FOR GUI PROCESSES AND FOR CONSOLE PROCESS THAT DO NOT START A NEW CONSOLE
                        sinfo.StartupInfo.dwX = idColP ;
                        sinfo.StartupInfo.dwY = idRowP ;
                        sinfo.StartupInfo.dwXSize = cColP ;
                        sinfo.StartupInfo.dwYSize = cRowP ;
                        sinfo.StartupInfo.dwXCountChars = 0 ;
                        sinfo.StartupInfo.dwYCountChars = 0 ;
                        sinfo.StartupInfo.dwFillAttribute = 0 ;
                        sinfo.StartupInfo.dwFlags = STARTF_USESHOWWINDOW | STARTF_USEPOSITION | STARTF_USESIZE ;
                        sinfo.StartupInfo.wShowWindow = 0 ;
                        if( F(flagsP) & flSESSION_BACK          ) sinfo.StartupInfo.wShowWindow |= SW_SHOWNOACTIVATE ;
                        if( F(flagsP) & flSESSION_HIDE          ) sinfo.StartupInfo.wShowWindow |= SW_HIDE ;
                        if( F(flagsP) & flSESSION_MAXIMIZE      ) sinfo.StartupInfo.wShowWindow |= SW_MAXIMIZE ;
                        else if( F(flagsP) & flSESSION_MINIMIZE ) sinfo.StartupInfo.wShowWindow |= SW_MINIMIZE ;
                        else                                      sinfo.StartupInfo.wShowWindow |= SW_SHOW ;
                        sinfo.StartupInfo.cbReserved2 = 0 ;
                        sinfo.StartupInfo.lpReserved2 = 0 ;
                        sinfo.StartupInfo.hStdInput = 0 ;
                        sinfo.StartupInfo.hStdOutput = 0 ;
                        sinfo.StartupInfo.hStdError = 0 ;
                        sinfo.lpAttributeList = (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ;

                        ZE( countT , costa ) ;
                        if( postArgsP )
                        {
                            BOSdOnOTtEST( WHATgbo , strlen( postExeP ) )
                            countT c1 = tinP.brcRaw ;
                            BOSdOnOTtEST( WHATgbo , strlen( postArgsP ) )
                            costa = 2 * c1 + 2 + tinP.brcRaw + 1 ;
                        }
                        else
                        {
                            BOSdOnOTtEST( WHATgbo , strlen( postExeP ) )
                            costa = 2 * tinP.brcRaw + 2 ;
                        }

                        costa += TUCK ; // FOR !idNumaNode 12345678

                        ZE( osTextT* , postAll ) ;
                        newF( tinP , LF , postAll , costa ) ; ___( postAll ) ;
                        c_strcpyIF( tinP , postAll , postExeP ) ;
                        c_strcatIF( tinP , postAll , " " ) ;            //U::postExeP SHOULD BE PASSED AS WOTH PARAM TO CreateProcess TO AVOID SECURITY VULNERABILITY; SEE DOC FOR CreateProcess; THE ISSUE ARISES WHEN postExe CONTAINS A PATH THAT CONTAINS A SPACE, WHICH WILL CAUSE INCORRECTD PARSING
                        c_strcatIF( tinP , postAll , postArgsP ) ;
                        if( processGlobal1I.idNumaNode && c_strstrIF( tinP , postExeP , "\\ideafarm." ) && ( c_strstrIF( tinP , postExeP , ".ipdos-we" ) || c_strstrIF( tinP , postExeP , ".ipdos-we" ) ) )
                        {
                            OStEXT(   ostoSay , TUCK << 2 ) ;
                            OStEXTAK( ostoSay , " !idNumaNode " ) ;
                            OStEXTC(  ostoSay , processGlobal1I.idNumaNode , 0 ) ;
                            c_strcatIF( tinP , postAll , ostoSay ) ;
                        }

                        SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;

                        //LOGrAW( "launching \"" ) ;
                        //LOGrAW( postAll ) ;
                        //LOGrAW( "\"\r\n" ) ;

                        BOS( WHATsfr , BOSoK , CreateProcess( 0 , postAll , &sa , &sa , 0 , flags1 , 0 , 0 , (STARTUPINFO*)&sinfo , &pinfo ) )
                        delF( tinP , postAll ) ;
                    }

                    DeleteProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ) ;
                }
            }

            if( tinP.bosFail )
            {
                //THIS CODE IS DUPLICATED IN 102006a AND 102005d
                ZE( osTextT* , postp ) ;
                dosScanEnvF( tinP , postp , "path" ) ; ___( postp ) ;
                if( !postp )
                {
                    osTextT* postm = "there is no \"path\" environment variable for this process" ;
                    const countT costap = 1 + c_strlenIF( tinP , postm ) ;
                    newF( tinP , LF , postp , costap ) ; ___( postp ) ;
                    thirdC::c_strncpyIF( tinP , postp , postm , costap ) ;
                }
                delF( tinP , postp ) ;
                BOSpOOP
            }

            handleC hThread( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
            hThread.osF( ifcIDtYPEhANDLE_THREAD , (countT)pinfo.hThread ) ;
            if( !hThread ) __1

            handleC hProcess( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
            hProcess.osF( ifcIDtYPEhANDLE_PROCESS , (countT)pinfo.hProcess ) ;
            if( !hProcess ) __1

            if( POOP )
            {
                hThread.closeIfF() ;
                hProcess.closeIfF() ;
            }
            else
            {
                pidP = pinfo.dwProcessId ;
                tidP = pinfo.dwThreadId ;

                if( pidP && pidP != - 1 && F(flagsP) & flSESSION_REGISTERpROCESShANDLE )
                {
                    tinP.pAdamGlobal4->_thirdC_grab_lOsPid.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    tinP.pAdamGlobal1->_thirdC_.lOsPid = pidP ;
                    *tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle = hProcess.osF( ifcIDtYPEhANDLE_PROCESS ) ;
                    tinP.pAdamGlobal4->_thirdC_grab_lOsPid.ungrabF( tinP ) ;
                    hProcess.resetF() ;
                }
    
                if( tidP && tidP != - 1 && F(flagsP) & flSESSION_REGISTERtHREADhANDLE )
                {
                    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
                    *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle = hThread.osF( ifcIDtYPEhANDLE_THREAD ) ; // THIS HANDLE NEEDS TO BE KEPT BECAUSE THERE IS NO WAY TO GET IT LATER
                    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
                    hThread.resetF() ;
                }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001057.thirdc.dosstartsessionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001058.thirdc.doscreatenpipef BEGIN
#define DDNAME       "3func.36001058.thirdc.doscreatenpipef"
#define DDNUMB      (countT)0x36001058
#define IDFILE      (countT)0xb96


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCreateNPipeF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
the buffer size is 1024 bytes
windows: this instruction is not supported for Windows 95
arguments
 handleP
 postP
*/
/**/

        #define CBhOSEbUFFER (1024)

// A HOSE BUFFER OF 1 IS USED TO COLLAPSE THE EVENT SPACE.
// PARTIAL READS AND PARTIAL WRITES CANNOT OCCUR.  ONE MUST READ AND WRITE
// ONE BYTE AT A TIME, AND THAT OPERATION WILL BLOCK UNTIL THE BUFFER IS
// AVAILABLE
//U: OPTIMIZE: USE A LARGER BUFFER.  CONJ: THIS WILL BE TRANSPARENT TO ALL CODE

/*1*/voidT thirdC::dosCreateNPipeF( tinS& tinP , handleC& handleP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HPIPE ) || fnu ) ;
            __( sizeof( countT ) != sizeof( ULONG ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        __( ~handleP ) ;
        __Z( postP ) ;
        if( !POOP ) __( postP != c_strstrIF( tinP , postP , "/hose/" ) ) ;
    }

    _IO_
    if( !POOP )
    {
        #ifdef __OS2__

            ZE( HPIPE , osh ) ;
            BOSI( WHATgbo , BOSfAIL , DosCreateNPipe( postP , &osh , NP_ACCESS_DUPLEX , NP_UNLIMITED_INSTANCES , CBhOSEbUFFER , CBhOSEbUFFER , - 1 ) ) )
            BOSpOOP
            handleP.osF( ifcIDtYPEhANDLE_PIPE , (countT)osh ) ;

        #elif defined( __NT__ )

            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            // NT, BUT NOT 95, SUPPORTS THE FOLLOWING CALL
            SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
            BOS( WHATgbo , BOShANDLE , CreateNamedPipe( postP , PIPE_ACCESS_DUPLEX , PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT , PIPE_UNLIMITED_INSTANCES , CBhOSEbUFFER , CBhOSEbUFFER , 0 , &sa ) )
            BOSpOOP
            handleP.osF( ifcIDtYPEhANDLE_PIPE , tinP.brcRaw ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001058.thirdc.doscreatenpipef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001059.thirdc.dosconnectnpipef BEGIN
#define DDNAME       "3func.36001059.thirdc.dosconnectnpipef"
#define DDNUMB      (countT)0x36001059
#define IDFILE      (countT)0xb97


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosConnectNPipeF.0.html\"\>instances\</A\>
\<A HREF=\"5.102005f.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosConnectNPipeF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HPIPE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        __Z( handleP ) ;
    }

    _IO_
    if( !POOP )
    {
        #ifdef __OS2__
            BOSI( WHATgbo , BOSfAIL , DosConnectNPipe( (HPIPE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) ) )
            BOSpOOP
        #elif defined( __NT__ )
            BOS( WHATgbo , BOSoK , ConnectNamedPipe( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) , 0 ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001059.thirdc.dosconnectnpipef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105a.thirdc.dosdisconnectnpipef BEGIN
#define DDNAME       "3func.3600105a.thirdc.dosdisconnectnpipef"
#define DDNUMB      (countT)0x3600105a
#define IDFILE      (countT)0xb98


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosDisconnectNPipeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020060.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 handleP
*/
/**/

/*1*/voidT thirdC::dosDisconnectNPipeF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        ZE( boolT , fnu ) ;
        #ifdef __OS2__
            __( sizeof( countT ) != sizeof( HPIPE ) || fnu ) ;
        #elif defined( __NT__ )
            __( sizeof( countT ) != sizeof( HANDLE ) || fnu ) ;
        #endif
        __Z( handleP ) ;
    }

    _IO_
    if( !POOP )
    {
        #ifdef __OS2__
            BOSI( WHATgbo , BOSfAIL , DosResetBuffer( (HPIPE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) ) )
            BOSpOOP
            BOSI( WHATgbo , BOSfAIL , DosDisConnectNPipe( (HPIPE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) ) )
            BOSpOOP
        #elif defined( __NT__ )
            BOS( WHATgbo , BOSoK , FlushFileBuffers( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) ) )
            BOSpOOP
            BOS( WHATgbo , BOSoK , DisconnectNamedPipe( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_PIPE ) ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105a.thirdc.dosdisconnectnpipef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105c.thirdc.s_mynamef BEGIN
#define DDNAME       "3func.3600105c.thirdc.s_mynamef"
#define DDNUMB      (countT)0x3600105c
#define IDFILE      (countT)0xb99


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_myNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020063.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2f00104.1.1.0.html\"\>2f00104:  WAKEsHOW( "example.simplest.func.1020063.thirdC.s_myNameF" )\</A\>
obtains this socket's host id and port id
it is illegal to call me on an unconnected socket when a valid nicNameP is needed
 on an unconnected socket on a multihomed host, nicNameP is undefined on return
arguments
 idPortP
  must be 0
 nicNameP
  must be 0
 handleP
  must not be 0
*/
/**/

/*1*/voidT thirdC::s_myNameF( tinS& tinP , countT& idPortP , nicNameC& nicNameP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __NZ( nicNameP ) ;
        __NZ( idPortP ) ;
        if( POOP ) return ;
    }

    _IO_
    sockaddr_in6 info ;
    sCountT cbInfo = sizeof info ;

    BOSS( WHATsir , BOSfAIL , getsockname( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , &cbInfo ) )
    BOSpOOP
    __( info.sin6_family != AF_INET6 ) ;

    if( !POOP )
    {
        BOSdOnOTtEST( WHATgbo , ntohs( info.sin6_port ) )
        idPortP = tinP.brcRaw ;

        countT* pcFrom = (countT*)info.sin6_addr.u.Byte ;
        countT* pcTo   = (countT*)(const countT*)nicNameP ;
        for( countT offi = 0 ; offi < 4 ; offi ++ )
        {
            BOSdOnOTtEST( WHATgbo , ntohl( pcFrom[ offi ] ) )
            pcTo[ 3 - offi ] = tinP.brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105c.thirdc.s_mynamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105d.thirdc.s_peernamef BEGIN
#define DDNAME       "3func.3600105d.thirdc.s_peernamef"
#define DDNUMB      (countT)0x3600105d
#define IDFILE      (countT)0xb9a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_peerNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020064.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3f00104.1.1.0.html\"\>3f00104:  WAKEsHOW( "example.simplest.func.1020064.thirdC.s_peerNameF" )\</A\>
obtains the peer's host id and port id
the socket must be connected
arguments
 idPortP
  must be 0
 nicNameP
  must be 0
 handleP
  must not be 0
*/
/**//*1*/voidT thirdC::s_peerNameF( tinS& tinP , countT& idPortP , nicNameC& nicNameP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __NZ( nicNameP ) ;
        __NZ( idPortP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    sockaddr_in info ;
    sCountT cbInfo = sizeof info ;

    BOSS( WHATsir , BOSfAIL , getpeername( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , &cbInfo ) )
    BOSpOOP
    __( info.sin_family != AF_INET ) ;

    if( !POOP )
    {
        BOSdOnOTtEST( WHATgbo , ntohl( info.sin_addr.s_addr ) )
        nicNameP = tinP.brcRaw ; //U: SUPPORTS ONLY IPV4 (NOT IPV6)
        BOSdOnOTtEST( WHATgbo , ntohs( info.sin_port ) )
        idPortP = tinP.brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105d.thirdc.s_peernamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105e.thirdc.dosentercritsecf BEGIN
#define DDNAME       "3func.3600105e.thirdc.dosentercritsecf"
#define DDNUMB      (countT)0x3600105e
#define IDFILE      (countT)0xb9b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosEnterCritSecF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020065.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ef00104.1.1.0.html\"\>ef00104:  WAKEsHOW( "example.simplest.func.1020065.thirdC.dosEnterCritSecF" )\</A\>
suspends context switching
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT thirdC::dosEnterCritSecF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __1
        if( POOP ) return ;
    }

    //IN, OUT ARE SUPPRESSED SO THAT THIS FUNCTION DOES NOT APPEAR IN tinP'S TRACE FOR THIS THREAD
    //OTHERWISE, I WOULD APPEAR ALL OVER THE PLACE BECAUSE IN, OUT CALL ME FOR EVERY FUNCTION
    //THESE LINES HERE CAN BE ENABLED IF NEEDED.  THEY ARE COMMENTED OUT ONLY FOR COSMETIC REASONS (TO IMPROVE THE READABILITY OF THE TRACE INFORMATION IN tinS)
    //IN

        #if defined( __OS2__ )
            BOSI( WHATgbo , BOSfAIL , DosEnterCritSec() )
            BOSpOOP
        #elif defined( __NT__ )
            __( !tinP.pAdamGlobal1->_thirdC_.phCritSec ) ;
            __( !*tinP.pAdamGlobal1->_thirdC_.phCritSec ) ;
            if( !POOP )
            {
                BOSnOvALUE( WHATgbo , EnterCriticalSection( (CRITICAL_SECTION*)tinP.pAdamGlobal1->_thirdC_.phCritSec->osF( ifcIDtYPEhANDLE_CRITICALsECTION ) ) )
            }
        #endif
    //OUT
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105e.thirdc.dosentercritsecf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105f.thirdc.dosexitcritsecf BEGIN
#define DDNAME       "3func.3600105f.thirdc.dosexitcritsecf"
#define DDNUMB      (countT)0x3600105f
#define IDFILE      (countT)0xb9c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosExitCritSecF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020066.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ff00104.1.1.0.html\"\>ff00104:  WAKEsHOW( "example.simplest.func.1020066.thirdC.dosExitCritSecF" )\</A\>
resumes normal context switching
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT thirdC::dosExitCritSecF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __1
        if( POOP ) return ;
    }

    //IN, OUT ARE SUPPRESSED SO THAT THIS FUNCTION DOES NOT APPEAR IN tinP'S TRACE FOR THIS THREAD
    //OTHERWISE, I WOULD APPEAR ALL OVER THE PLACE BECAUSE IN, OUT CALL ME FOR EVERY FUNCTION
    //THESE LINES HERE CAN BE ENABLED IF NEEDED.  THEY ARE COMMENTED OUT ONLY FOR COSMETIC REASONS (TO IMPROVE THE READABILITY OF THE TRACE INFORMATION IN tinS)
    //IN_T

    #if defined( __OS2__ )
        BOSI( WHATgbo , BOSfAIL , DosExitCritSec() )
        BOSpOOP
    #elif defined( __NT__ )
        __( !tinP.pAdamGlobal1->_thirdC_.phCritSec ) ;
        __( !*tinP.pAdamGlobal1->_thirdC_.phCritSec ) ;
        if( !POOP )
        {
            BOSnOvALUE( WHATgbo , LeaveCriticalSection( (CRITICAL_SECTION*)tinP.pAdamGlobal1->_thirdC_.phCritSec->osF( ifcIDtYPEhANDLE_CRITICALsECTION ) ) )
        }
    #endif
    //OUT
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600105f.thirdc.dosexitcritsecf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001060.thirdc.c_zreversebyteorderf BEGIN
#define DDNAME       "3func.36001060.thirdc.c_zreversebyteorderf"
#define DDNUMB      (countT)0x36001060
#define IDFILE      (countT)0xb9d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_zReverseByteOrderF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020067.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0010104.1.1.0.html\"\>0010104:  WAKEsHOW( "example.simplest.func.1020067.thirdC.c_zReverseByteOrderF" )\</A\>
reverses the bytes, in place
cbP can be any nonze value
arguments
 pbP
 cbP
*/
/**/

/*1*/voidT thirdC::c_zReverseByteOrderF( tinS& tinP , byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_
    countT cb = cbP ;
    if( !cb ) cb = c_strlenIF( tinP , pbP ) ;

    ZE( byteT , bt ) ;
    countT cs = cb / 2 ;
    for( countT off = 0 ; off < cs ; off ++ )
    {
        bt = pbP[ off ] ;
             pbP[ off ] = pbP[ cb - 1 - off ] ;
                          pbP[ cb - 1 - off ] = bt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001060.thirdc.c_zreversebyteorderf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001063.thirdc.dosexecpgmf BEGIN
#define DDNAME       "3func.36001063.thirdc.dosexecpgmf"
#define DDNUMB      (countT)0x36001063
#define IDFILE      (countT)0xb9e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosExecPgmF.0.html\"\>instances\</A\>
\<A HREF=\"5.102006a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
constructs a process
this instruction returns immediately; it does not block until the process dies
operating system bug: on some os's, this call will cause threads to be launched that remain alive for about 6 tocks
 conj: occasionally, these threads are never terminated, resulting in leakage (gradual accumulation of live threads)
arguments
 tidP
 pidP
 hThreadP
  must be 0
  the caller must close this handle when it is not going to use it any more
 hProcessP
  must be 0
  the caller must close this handle when it is not going to use it any more
 postExeP
 postArgsP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00101db.flPROCESShIRE!||
  it is illegal to set a value other than the default when calling from the definition of an adam
*/

/**/

//U:COMBINE INTO A SINGLE API: 102006a AND 102005d

/*1*/voidT thirdC::dosExecPgmF( tinS& tinP , countT& tidP , countT& pidP , const osTextT* const postExeP , const osTextT* const postArgsP , const flagsT flagsP , const handleC* phOutP , const handleC* phErrorP , const handleC* phInP , const osTextT* const postUserP , const osTextT* const postPasswordP , const flagsT flagsLogonP , const osTextT* const postDomainP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( pidP ) ;
        __Z( postExeP ) ;
        __( !tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle ) ;
        __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
        FV( flPROCESShIRE , flagsP )
        if( POOP ) return ;
    }


    //COMMENT OUT IN PRODUCTION.  TO FIND A BUG
    //LOGrAW( "\r\n" ) ;
    //LOGrAW( postExeP ) ;
    //LOGrAW( "\r\n" ) ;
    //LOGrAW( postArgsP ) ;
    //LOGrAW( "\r\n" ) ;

    _IO_
    {
        #ifdef __OS2__

            __( F(flagsP) ) ; //U: SUPPORT

            //U: ENSURE THAT KID PROCESS INHERITS THE PRIORITY OF THE CURRENT PROCESS
            osTextT postBadGuy[ 0x80 ] ;
            RESULTCODES info ;
            BOSI( WHATsfr , BOSfAIL , DosExecPgm( postBadGuy , sizeof postBadGuy , EXEC_ASYNCRESULT , postArgsP , 0 , &info , postExeP ) )
            BOSpOOP
            pidP = info.codeTerminate ;

        #elif defined( __NT__ )

            BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
            flagsT flags1 = CREATE_DEFAULT_ERROR_MODE | NORMAL_PRIORITY_CLASS | EXTENDED_STARTUPINFO_PRESENT ;
            if( F(flagsP) & flPROCESShIRE_MONITORED ) flags1 |= DEBUG_PROCESS | DEBUG_ONLY_THIS_PROCESS /*U: | CREATE_SUSPENDED */ ;
            if( F(flagsP) & flPROCESShIRE_VISIBLE ) flags1 |= CREATE_NEW_CONSOLE ;
            else                                    flags1 |= DETACHED_PROCESS ;

            SIZE_T cba = 0 ;
            InitializeProcThreadAttributeList( 0 , 1 , 0 , &cba ) ;

            ZE( osTextT* , postAll ) ;
            PROCESS_INFORMATION pinfo ;
            c_memsetIF( tinP , (byteT*)&pinfo , sizeof pinfo ) ;
            if( cba < 0x100 )
            {
                unsigned pcInfo2[ 0x100 / sizeof( unsigned ) ] ;
                memset( pcInfo2 , 0 , cba ) ;

                if( InitializeProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 1 , 0 , &cba ) )
                {
                    boolT bOk = 1 ;
                    countT offNumaNodeValidChosen = thirdC::osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ;
                    if( offNumaNodeValidChosen != NUMA_NO_PREFERRED_NODE )
                    {
                        bOk = 0 ;
                        WORD offNodePreferred = (WORD)offNumaNodeValidChosen ;  // THE NEXT LINE WILL FAIL WITH ANY SIZE OTHER THAN WORD
                        if( UpdateProcThreadAttribute( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 0 , PROC_THREAD_ATTRIBUTE_PREFERRED_NODE , &offNodePreferred , sizeof offNodePreferred , 0 , 0 ) )
                        {
                            bOk = 1 ;
                        }
                    }

                    if( bOk )
                    {
                        STARTUPINFOEX sinfo ;
                        c_memsetIF( tinP , (byteT*)&sinfo , sizeof sinfo ) ;
                        sinfo.StartupInfo.cb = sizeof sinfo ;
                        sinfo.StartupInfo.dwFlags = STARTF_USESHOWWINDOW | STARTF_USEPOSITION | STARTF_USECOUNTCHARS | STARTF_USEFILLATTRIBUTE ;
                        sinfo.StartupInfo.wShowWindow = /*SW_SHOWMAXIMIZED*/ SW_SHOWMINNOACTIVE ;
                        sinfo.StartupInfo.dwY = sinfo.StartupInfo.dwX = 0 ;
                        sinfo.StartupInfo.dwXCountChars = 0x400 ;
                        sinfo.StartupInfo.dwYCountChars = 0x300 ;
                        sinfo.StartupInfo.dwFillAttribute = BACKGROUND_GREEN ;
                        sinfo.lpAttributeList = (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ;

                        if( phOutP || phInP || phErrorP )
                        {
                            sinfo.StartupInfo.dwFlags |= STARTF_USESTDHANDLES ;

                            sinfo.StartupInfo.hStdInput = phInP
                                ? (HANDLE)phInP->osF( phInP->idTypeF() )
                                : (HANDLE)GetStdHandle( STD_INPUT_HANDLE )
                            ;

                            sinfo.StartupInfo.hStdOutput = phOutP
                                ? (HANDLE)phOutP->osF( phOutP->idTypeF() )
                                : (HANDLE)GetStdHandle( STD_OUTPUT_HANDLE )
                            ;

                            sinfo.StartupInfo.hStdError = phErrorP
                                ? (HANDLE)phErrorP->osF( phErrorP->idTypeF() )
                                : (HANDLE)GetStdHandle( STD_ERROR_HANDLE )
                            ;
                        }

                        ZE( countT , costae ) ;
                        if( postArgsP )
                        {
                            BOSdOnOTtEST( WHATgbo , strlen( postExeP ) )
                            countT c1 = tinP.brcRaw ;
                            BOSdOnOTtEST( WHATgbo , strlen( postArgsP ) )
                            costae = c1 + 1 + tinP.brcRaw + 1 ;
                        }
                        else
                        {
                            BOSdOnOTtEST( WHATgbo , strlen( postExeP ) )
                            costae = tinP.brcRaw + 1 ;
                        }

                        costae += TUCK ; // FOR !idNumaNode 12345678

                        newF( tinP , LF , postAll , costae ) ; ___( postAll ) ;
                        c_strcpyIF( tinP , postAll , postExeP ) ;
                        c_strcatIF( tinP , postAll , " " ) ;            //U::postExeP SHOULD BE PASSED AS WOTH PARAM TO CreateProcess TO AVOID SECURITY VULNERABILITY; SEE DOC FOR CreateProcess; THE ISSUE ARISES WHEN postExe CONTAINS A PATH THAT CONTAINS A SPACE, WHICH WILL CAUSE INCORRECTD PARSING
                        c_strcatIF( tinP , postAll , postArgsP ) ;
                        if( processGlobal1I.idNumaNode && c_strstrIF( tinP , postExeP , "\\ideafarm." ) && ( c_strstrIF( tinP , postExeP , ".ipdos-we" ) || c_strstrIF( tinP , postExeP , ".ipdos-we" ) ) )
                        {
                            OStEXT(   ostoSay , TUCK << 2 ) ;
                            OStEXTAK( ostoSay , " !idNumaNode " ) ;
                            OStEXTC(  ostoSay , processGlobal1I.idNumaNode , 0 ) ;
                            c_strcatIF( tinP , postAll , ostoSay ) ;
                        }

                        SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;

                        //LOGrAW( "launching \"" ) ;
                        //LOGrAW( postAll ) ;
                        //LOGrAW( "\"\r\n" ) ;

                        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                        if( postUserP )
                        {
                            BLAMMO ; //NOT SUPPORTED AS A MATTER OF POLICY:  CreateProcessWithLogonW IS NOT AVAILABLE TO WINDOWS VERSION 0400 (PLAIN NT) WHICH IS THE DEFAULT REV LEVEL FOR THE WINDOWS VERSION HEADER FILE

                            unTextT puntUser[     TUCK ] ;
                            unTextT puntDomain[   TUCK ] ;
                            unTextT puntPassword[ TUCK ] ;
                            unTextT puntAll[      TUCK ] ;

                            unTextT puntDomainDot[ TUCK ] = { '.' , 0 } ;

                            { ZE( countT , off ) ; while( postUserP[     off ] && off < TUCK ) { puntUser[     off ] = postUserP[     off ] ; off ++ ; } puntUser[      off ] = 0 ; }
                            { ZE( countT , off ) ; while( postDomainP[   off ] && off < TUCK ) { puntDomain[   off ] = postDomainP[   off ] ; off ++ ; } puntDomain[    off ] = 0 ; }
                            { ZE( countT , off ) ; while( postPasswordP[ off ] && off < TUCK ) { puntPassword[ off ] = postPasswordP[ off ] ; off ++ ; } puntPassword[  off ] = 0 ; }
                            { ZE( countT , off ) ; while( postAll[       off ] && off < TUCK ) { puntAll[      off ] = postAll[       off ] ; off ++ ; } puntAll[       off ] = 0 ; }
            
                            countT foo1 = sizeof( STARTUPINFOA ) ;
                            countT foo2 = sizeof( STARTUPINFOW ) ;

                            //BOS( WHATsfr , BOSoK , CreateProcessWithLogonW( (wchar_t*)puntUser , (wchar_t*)puntDomainDot , (wchar_t*)puntPassword , flagsLogonP , 0 , (wchar_t*)puntAll                 , flags1 , 0 , 0 , (STARTUPINFOW*)&sinfo , &pinfo ) )
                        }
                        else
                        {
                            //CONoUTrAW( "CreateProcess: " ) ;
                            //CONoUTrAW( postAll ) ;
                            //CONoUTrAW( "\r\n" ) ;

                            BOS( WHATsfr , BOSoK , CreateProcess( 0 , postAll , &sa , &sa , 0 , flags1 , 0 , 0 , (STARTUPINFO*)&sinfo , &pinfo ) )      //20200423@1807: WITHOUT ANALYSIS, CHANGED "0" TO "1" FOR bInherit
                        }                                                                                                                               //20200522@1422: AGAIN WITHOUT ANALYSIS, CHANGED "1" BACK TO "0" FOR bInherit BECAUSE WHEN CLOAK CALLS ifcHireF, ALL OF ITS HANDLE APPEAR TO BE DUPLICATED INTO THE CHILD PROCESS, WHICH DEFEATS CLOAK'S ATTEMPT TO CLOSE AND THEN REOPEN ITS HANDLE TO A CLOAKED DIRECTORY
                    }

                    DeleteProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ) ;
                }
            }

            if( tinP.bosFail )
            {
                BOSdOnOTtEST( WHATgbo , GetLastError() )
                LOGrAW3( "dosExecPgmF/CreateProcess/failed and GetLastError returned [brcRaw]" , tinP.brcRaw , "\r\n" ) ;

                //THIS CODE IS DUPLICATED IN 102006a AND 102005d
                ZE( osTextT* , postp ) ;
                dosScanEnvF( tinP , postp , "path" ) ; ___( postp ) ;
                if( !postp )
                {
                    osTextT* postm = "there is no \"path\" environment variable for this process" ;
                    const countT costap = 1 + c_strlenIF( tinP , postm ) ;
                    newF( tinP , LF , postp , costap ) ; ___( postp ) ;
                    thirdC::c_strncpyIF( tinP , postp , postm , costap ) ;
                }
                delF( tinP , postp ) ;

                LOGrAW( "could not launch process: \"" ) ;
                LOGrAW( postAll ) ;
                LOGrAW( "\"\r\n" ) ;

                BOSpOOP
            }
            delF( tinP , postAll ) ;

            handleC hThread( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
            hThread.osF( ifcIDtYPEhANDLE_THREAD , (countT)pinfo.hThread ) ;
            if( !hThread ) __1

            handleC hProcess( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
            hProcess.osF( ifcIDtYPEhANDLE_PROCESS , (countT)pinfo.hProcess ) ;
            if( !hProcess ) __1

            if( POOP )
            {
                hThread.closeIfF() ;
                hProcess.closeIfF() ;
            }
            else
            {
                pidP = pinfo.dwProcessId ;
                tidP = pinfo.dwThreadId ;

                if( pidP && pidP != - 1 && F(flagsP) & flPROCESShIRE_REGISTERpROCESShANDLE )
                {
                    tinP.pAdamGlobal4->_thirdC_grab_lOsPid.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    tinP.pAdamGlobal1->_thirdC_.lOsPid = pidP ;
                    *tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle = hProcess.osF( ifcIDtYPEhANDLE_PROCESS ) ;
                    tinP.pAdamGlobal4->_thirdC_grab_lOsPid.ungrabF( tinP ) ;
                    hProcess.resetF() ;
                }
    
                if( tidP && tidP != - 1 && F(flagsP) & flPROCESShIRE_REGISTERtHREADhANDLE )
                {
                    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
                    *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle = hThread.osF( ifcIDtYPEhANDLE_THREAD ) ; // THIS HANDLE NEEDS TO BE KEPT BECAUSE THERE IS NO WAY TO GET IT LATER
                    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
                    hThread.resetF() ;
                }
            }

            //U: IF bMonitoredP THEN DO THE MONITORING LOOP HERE AND REPLACE bMonitoredP WITH A POINTER TO THE CALLER'S HANDLER FUNCTION

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001063.thirdc.dosexecpgmf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001065.thirdc.ostimenowf BEGIN
#define DDNAME       "3func.36001065.thirdc.ostimenowf"
#define DDNUMB      (countT)0x36001065
#define IDFILE      (countT)0xb9f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeNowF.0.html\"\>instances\</A\>
\<A HREF=\"5.102006c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.eb00104.1.1.0.html\"\>eb00104:  WAKEsHOW( "example.simplest.func.102006c.thirdC.osTimeNowF" )\</A\>
time2P will be set to the number of complete days since Jesus's conventional time of birth
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
if fDoNotUseTimeAtBootP == 0, the theoretical grainsize is 1 millisecond
if fDoNotUseTimeAtBootP == 1, the theoretical grainsize is 1 second
the actual grainsize depends on the grainsize of the clock on the computer hardware
arguments
 time1P
 time2P
 fDoNotUseTimeAtBootP
*/
/**/

/*1*/voidT thirdC::osTimeNowF( tinS& tinP , countT& time1P , sCountT& time2P , const boolT fDoNotUseTimeAtBootP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;

        // THIS CODE IS SUPPRESSED IN ORDER TO OPTIMIZE THE 0010*.*_IO_* MACROS FOR SPEED
        __( time1P ) ;
        __( time2P ) ;
        if( POOP ) return ;
    }

    _IO_
    if( fDoNotUseTimeAtBootP )
    {
        osTimeFromOldTimeIF( tinP , time1P , time2P , 1969 , 0 , 0 , 0 , 0 , 0 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
        ZE( countT , timeSince60s1 ) ;
        ZE( sCountT , timeSince60s2 ) ;
        dosQuerySysInfoTimeSince1960sDecadeF( tinP , timeSince60s1 , timeSince60s2 ) ;
        osTimeAddIF( tinP , time1P , time2P , timeSince60s1 , timeSince60s2 ) ;
    }
    else
    {
        homeS* ph = (homeS*)(byteT*)processGlobal3I.napHome ;
        time1P = ph->timeBoot1 ;
        time2P = ph->timeBoot2 ;
        ZE( countT , timeSinceBoot1 ) ;
        ZE( sCountT , timeSinceBoot2 ) ;
        dosQuerySysInfoTimeSinceBootF( tinP , timeSinceBoot1 , timeSinceBoot2 ) ;
        osTimeAddIF( tinP , time1P , time2P , timeSinceBoot1 , timeSinceBoot2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001065.thirdc.ostimenowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001067.thirdc.dosquerysysinfotimesincebootf BEGIN
#define DDNAME       "3func.36001067.thirdc.dosquerysysinfotimesincebootf"
#define DDNUMB      (countT)0x36001067
#define IDFILE      (countT)0xba0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQuerySysInfoTimeSinceBootF.0.html\"\>instances\</A\>
\<A HREF=\"5.102006f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2010104.1.1.0.html\"\>2010104:  WAKEsHOW( "example.simplest.func.102006f.thirdC.dosQuerySysInfoTimeSinceBootF" )\</A\>
time2P will be set to the number of days
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
arguments
 time1P
 time2P
*/
/**/

/*1*/voidT thirdC::dosQuerySysInfoTimeSinceBootF( tinS& tinP , countT& time1P , sCountT& time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL        
    {
        __( time1P ) ;
        __( time2P ) ;
    }

    _IO_
    ZE( countT , ms ) ;
    #ifdef __OS2__
        BOSI( WHATgbo , BOSfAIL , DosQuerySysInfo( QSV_MS_COUNT , QSV_MS_COUNT , &ms , sizeof ms ) )
        BOSpOOP
    #elif defined( __NT__ )
        BOSdOnOTtEST( WHATgbo , timeGetTime() )
        ms = tinP.brcRaw ;
    #endif
    timeFromMsIF( tinP , time1P , time2P , ms ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001067.thirdc.dosquerysysinfotimesincebootf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001068.thirdc.dosquerysysinfotimesince1960sdecadef BEGIN
#define DDNAME       "3func.36001068.thirdc.dosquerysysinfotimesince1960sdecadef"
#define DDNUMB      (countT)0x36001068
#define IDFILE      (countT)0xba1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQuerySysInfoTimeSince1960sDecadeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020070.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3010104.1.1.0.html\"\>3010104:  WAKEsHOW( "example.simplest.func.1020070.thirdC.dosQuerySysInfoTimeSince1960sDecadeF" )\</A\>
time2P will be set to the number of days
time1P will be set to the remainder, in time units
a time unit is 1 / ( 256 * 256 * 256 * 256 ) of a day
arguments
 time1P
 time2P
*/
/**/

/*1*/voidT thirdC::dosQuerySysInfoTimeSince1960sDecadeF( tinS& tinP , countT& time1P , sCountT& time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL        
    {
        __( time1P ) ;
        __( time2P ) ;
    }

    _IO_
    #ifdef __OS2__

        ZE( countT , seconds ) ;
        BOSI( WHATsfr , BOSfAIL , DosQuerySysInfo( QSV_TIME_LOW , QSV_TIME_LOW , &seconds , sizeof seconds ) )
        BOSpOOP
        BOSdOnOTtEST( WHATgbo , TIMEfROMsECONDSf( tinP , *this , this , time1P , time2P , seconds ) )

    #elif defined( __NT__ )

        SYSTEMTIME info ;
        BOSnOvALUE( WHATgbo , GetSystemTime( &info ) )
        osTimeFromOldTimeIF( tinP , time1P , time2P , info.wYear - 1 , info.wMonth - 1 , info.wDay - 1 , info.wHour , info.wMinute , info.wSecond , info.wMilliseconds , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ; //U: SUBTRACTING 1 FROM wYear TO FIX TIME LOGGED IN DATA FOR WINDOW GATES
        ZE( countT , timeR1 ) ;
        ZE( sCountT , timeR2 ) ;
        osTimeFromOldTimeIF( tinP , timeR1 , timeR2 , 1969 , 0 , 0 , 0 , 0 , 0 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
        osTimeSubtractF( tinP , time1P , time2P , timeR1 , timeR2 ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001068.thirdc.dosquerysysinfotimesince1960sdecadef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106b.thirdc.dosexecpgmf BEGIN
#define DDNAME       "3func.3600106b.thirdc.dosexecpgmf"
#define DDNUMB      (countT)0x3600106b
#define IDFILE      (countT)0xba2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosExecPgmF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020073.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
constructs a process and waits for it to die
arguments
 valueP
 idDeathTypeP
 postExeP
  example: "\\ideafarm.home.1\\domains\\com\\ideafarm\\city\\park\\7use\\01000020.ipdos-we"
 postArgsP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00101db.flPROCESShIRE!||
  it is illegal to set a value other than the default when calling from the definition of an adam
*/
/**/

/*1*/voidT thirdC::dosExecPgmF( tinS& tinP , countT& osTidP , countT& osPidP , countT& valueP , countT& idDeathTypeP , const osTextT* const postExeP , const osTextT* const postArgsP , const flagsT flagsP , const handleC* phOutP , const handleC* phErrorP , const handleC* phInP , const osTextT* const postUserP , const osTextT* const postPasswordP , const flagsT flagsLogonP , const osTextT* const postDomainP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( valueP ) ;
        __( idDeathTypeP ) ;
        __Z( postExeP ) ;
        FV( flPROCESShIRE , flagsP )
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__

        osTextT postBadGuy[ 0x80 ] ;
        RESULTCODES info ;
        BOSI( WHATsfr , BOSfAIL , DosExecPgm( postBadGuy , sizeof postBadGuy , EXEC_SYNC , postArgsP , 0 , &info , postExeP ) )
        BOSpOOP
             if( info.codeTerminate == TC_EXIT        ) idDeathTypeP = ifcPROCESSdEATH_NORMAL          ;
        else if( info.codeTerminate == TC_KILLPROCESS ) idDeathTypeP = ifcPROCESSdEATH_MURDERED        ;
        else if( info.codeTerminate == TC_EXCEPTION   ) idDeathTypeP = ifcPROCESSdEATH_SOFTWAREfAILURE ;
        else if( info.codeTerminate == TC_HARDERROR   ) idDeathTypeP = ifcPROCESSdEATH_HARDWAREfAILURE ;
        else                                            __( info.codeTerminate ) ;
        valueP = info.codeResult ;

    #elif defined( __NT__ )

        dosExecPgmF( tinP , osTidP , osPidP , postExeP , postArgsP , flagsP | flPROCESShIRE_REGISTERpROCESShANDLE , phOutP , phErrorP , phInP , postUserP , postPasswordP , flagsLogonP , postDomainP ) ;
        dosWaitChildF( tinP , valueP , idDeathTypeP , osPidP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106b.thirdc.dosexecpgmf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106c.thirdc.dossetsignalexceptionfocus_offf BEGIN
#define DDNAME       "3func.3600106c.thirdc.dossetsignalexceptionfocus_offf"
#define DDNUMB      (countT)0x3600106c
#define IDFILE      (countT)0xba3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetSignalExceptionFocus_offF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020074.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
disables "control c" exceptions for this process
unfinished: this function has no effect for Windows
*/
/**//*1*/voidT thirdC::dosSetSignalExceptionFocus_offF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        ZE( countT , cTimesCalled ) ;
        BOSI( WHATgbo , BOSfAIL , DosSetSignalExceptionFocus( SIG_UNSETFOCUS ,  (ULONG*)&cTimesCalled ) )
        BOSpOOP
        __( cTimesCalled ) ;
    #elif defined( __NT__ )
        //U:NT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106c.thirdc.dossetsignalexceptionfocus_offf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106d.thirdc.dossetsignalexceptionfocus_onf BEGIN
#define DDNAME       "3func.3600106d.thirdc.dossetsignalexceptionfocus_onf"
#define DDNUMB      (countT)0x3600106d
#define IDFILE      (countT)0xba4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetSignalExceptionFocus_onF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020075.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
enables "control c" exceptions for this process
unfinished: this function has no effect for Windows
*/
/**//*1*/voidT thirdC::dosSetSignalExceptionFocus_onF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        ZE( countT , cTimesCalled ) ;
        BOSI( WHATgbo , BOSfAIL , DosSetSignalExceptionFocus( SIG_SETFOCUS ,  (ULONG*)&cTimesCalled ) )
        BOSpOOP
        __( cTimesCalled - 1 ) ;
    #elif defined( __NT__ )
        //U:NT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106d.thirdc.dossetsignalexceptionfocus_onf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106e.thirdc.dossendsignalexceptionf BEGIN
#define DDNAME       "3func.3600106e.thirdc.dossendsignalexceptionf"
#define DDNUMB      (countT)0x3600106e
#define IDFILE      (countT)0xba5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSendSignalExceptionF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020077.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
sends a "control c" exception to the specified process
unfinished: this instruction has no effect on Windows
arguments
 pidP
*/
/**//*1*/voidT thirdC::dosSendSignalExceptionF( tinS& tinP , const countT pidP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pidP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        BOSI( WHATgbo , BOSfAIL , DosSendSignalException( pidP , XCPT_SIGNAL_INTR ) )
        BOSpOOP
    #elif defined( __NT__ )
        //U:NT
        countT foo = pidP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106e.thirdc.dossendsignalexceptionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106f.thirdc.doskillprocessf BEGIN
#define DDNAME       "3func.3600106f.thirdc.doskillprocessf"
#define DDNUMB      (countT)0x3600106f
#define IDFILE      (countT)0xba6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosKillProcessF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020078.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
terminates the specified process
use of this instruction is discouraged
 the target process will not be able to free resources
  any poolC allocations in use will remain in use
 for some operating systems, the state of the computer will be invalid
  windows: dll global data can be corrupted
   this should not affect IdeaFarm (tm) City software since global data is illegal
   however, it could affect operating system dll's used by IdeaFarm (tm) City
arguments
 pidP
*/
/**//*1*/voidT thirdC::dosKillProcessF( tinS& tinP , const countT pidP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        BOSI( WHATgbo , BOSfAIL , DosKillProcess( DKP_PROCESS , pidP ) )
        BOSpOOP
    #elif defined( __NT__ )
        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
        osOpenProcessIF( tinP , handle , pidP ) ;
        BOS( WHATgbo , BOSoK , TerminateProcess( (HANDLE)handle.osF( ifcIDtYPEhANDLE_PROCESS ) , 0 ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600106f.thirdc.doskillprocessf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001070.thirdc.doswaitchildf BEGIN
#define DDNAME       "3func.36001070.thirdc.doswaitchildf"
#define DDNUMB      (countT)0x36001070
#define IDFILE      (countT)0xba7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWaitChildF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020079.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
blocks until the specified process ends
on windows, an extra delay is added due to polling
on windows, idDeathTypeP is not set
arguments
 idDeathTypeP
 valueP
 pidP
*/
/**/

/*1*/voidT thirdC::dosWaitChildF( tinS& tinP , countT& valueP , countT& idDeathTypeP , countT& pidP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( idDeathTypeP ) ;
        __( valueP ) ;
        __Z( tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle->idSlotOfLeverF( tinP , pidP ) ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )

        RESULTCODES  info ;
        ZE( ULONG , pid ) ;
        BOS( WHATso , BOSfAIL , DosWaitChild( DCWA_PROCESS , DCWW_WAIT , &info , &pid , pidP ) )
        BOSpOOP
        __( pidP && pid - pidP ) ;
        if( !POOP ) pidP = pid ;
             if( info.codeTerminate == TC_EXIT        ) idDeathTypeP = ifcPROCESSdEATH_NORMAL          ;
        else if( info.codeTerminate == TC_KILLPROCESS ) idDeathTypeP = ifcPROCESSdEATH_MURDERED        ;
        else if( info.codeTerminate == TC_EXCEPTION   ) idDeathTypeP = ifcPROCESSdEATH_SOFTWAREfAILURE ;
        else if( info.codeTerminate == TC_HARDERROR   ) idDeathTypeP = ifcPROCESSdEATH_HARDWAREfAILURE ;
        else                                            __( info.codeTerminate ) ;
        valueP = info.codeResult ;

    #elif defined( __NT__ )

        BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
        //DOES NOT WORK FOR zip.exe ON 2000: osOpenProcessIF( tinP , handle , pidP ) ;

        tinP.pAdamGlobal4->_thirdC_grab_lOsPid.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle->idSlotOfLeverF( tinP , pidP ) ) { BLAMMO ; }     //THIS LINE WILL DETECT MULTIPLE THREADS WAITING FOR A SINGLE PROCESS TO END
        tinP.pAdamGlobal1->_thirdC_.lOsPid = pidP ;
        handle.osF( ifcIDtYPEhANDLE_PROCESS , *tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle ) ;
        tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle->freeF( tinP ) ;                                       //A:ASSUME: ONLY I AM WAITING FOR THIS PROCESS.  IT IS ILLEGAL FOR MULTIPLE THREADS TO WAIT FOR A SINGLE PROCESS TO END.
        tinP.pAdamGlobal4->_thirdC_grab_lOsPid.ungrabF( tinP ) ;

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            do
            {
                ++ s ; dosSleepIF( tinP , 16 * 256 ) ;
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOS( WHATgbo , BOSoK , GetExitCodeProcess( (HANDLE)handle.osF( ifcIDtYPEhANDLE_PROCESS ) , (DWORD*)&valueP ) )
                BOSpOOP
            }
            while( !*this && valueP == STILL_ACTIVE ) ;
        }
        if( POOP ) valueP = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001070.thirdc.doswaitchildf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001071.thirdc.spacersetf BEGIN
#define DDNAME       "3func.36001071.thirdc.spacersetf"
#define DDNUMB      (countT)0x36001071
#define IDFILE      (countT)0xba8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$spacerSetF.0.html\"\>instances\</A\>
\<A HREF=\"5.102007b.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
initializes spacers intended to detect corruption
*/
/**/

/*1*/voidT thirdC::spacerSetF( tinS& tinP )/*1*/
{
    SCOOP
    _IO_
    SPACERsET( a )
    SPACERsET( b )
    SPACERsET( c )
    SPACERsET( d )
    SPACERsET( e )
    SPACERsET( f )
    SPACERsET( g )
    SPACERsET( h )
    SPACERsET( i )
    SPACERsET( j )
    SPACERsET( k )
    SPACERsET( l )
    #if defined( __NT__ )
        SPACERsET( m )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001071.thirdc.spacersetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001072.thirdc.thirdtestf BEGIN
#define DDNAME       "3func.36001072.thirdc.thirdtestf"
#define DDNUMB      (countT)0x36001072
#define IDFILE      (countT)0xba9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdTestF.0.html\"\>instances\</A\>
\<A HREF=\"5.102007c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
tests the integrity of this thirdC object
if corrupted, third will become impotent
*/
/**/

/*1*/voidT thirdC::thirdTestF( tinS& tinP )/*1*/
{
    SCOOP
    _IO_
    SPACERtEST( a )
    SPACERtEST( b )
    SPACERtEST( c )
    SPACERtEST( d )
    SPACERtEST( e )
    SPACERtEST( f )
    SPACERtEST( g )
    SPACERtEST( h )
    SPACERtEST( i )
    SPACERtEST( j )
    SPACERtEST( k )
    SPACERtEST( l )
    #if defined( __NT__ )
        SPACERtEST( m )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001072.thirdc.thirdtestf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001073.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.36001073.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x36001073
#define IDFILE      (countT)0xbaa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.102007d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8010104.1.1.0.html\"\>8010104:  WAKEsHOW( "example.simplest.func.102007d.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( byteT* , pba ) ;
 |    third.newF( tinP , LF , pba , 8 ) ; ___( pba ) ;
 |    third.delF( tinP , pba ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( byteT , ifciDtYPEdROPnOTE_byteT )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001073.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001074.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.36001074.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x36001074
#define IDFILE      (countT)0xbab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.102007e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9010104.1.1.0.html\"\>9010104:  WAKEsHOW( "example.simplest.func.102007e.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( countT* , pca ) ;
 |    third.newF( tinP , LF , pca , 8 ) ; ___( pca ) ;
 |    third.delF( tinP , pca ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( countT , ifciDtYPEdROPnOTE_countT )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001074.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001075.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.36001075.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x36001075
#define IDFILE      (countT)0xbac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.102007f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a010104.1.1.0.html\"\>a010104:  WAKEsHOW( "example.simplest.func.102007f.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( strokeS* , pstta ) ;
 |    third.newF( tinP , LF , pstta , 8 ) ; ___( pstta ) ;
 |    third.delF( tinP , pstta ) ;
*/
/**/

#undef NEWdELtYPEtHIRDnEWePILOG
#define NEWdELtYPEtHIRDnEWePILOG thirdC::c_memsetIF( tinP , (byteT*)pP , cba ) ;

#define NDsIZEoF(typeP) sizeof( typeP )

/*1*/NEWdELtYPEtHIRD( strokeS , ifciDtYPEdROPnOTE_strokeS )/*1*/

#undef NDsIZEoF

#undef NEWdELtYPEtHIRDnEWePILOG
#define NEWdELtYPEtHIRDnEWePILOG


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001075.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001078.thirdc.dosreadstdinf BEGIN
#define DDNAME       "3func.36001078.thirdc.dosreadstdinf"
#define DDNUMB      (countT)0x36001078
#define IDFILE      (countT)0xbad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadStdInF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020085.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
reads a line from std in
does not return until the user has pressed the Enter key
the terminating crlf is read, but is excluded from the value
limit: line must be less than the specified maximum size cbP
after evaluation, cbP contains the actual number of bytes read
a null byte is appended to the value, which is placed into pbP that caller provides
arguments
 pbP
  must be 0
  after evaluation, is guaranteed to be nonze if impotence does not occur
 cbP
*/
/**/

/*1*/voidT thirdC::dosReadStdInF( tinS& tinP , byteT*& pbP , countT& cbP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pbP ) ;
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    _IO_

    cbP += 2 ; // FOR CRLF
    newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
    if( pbP ) *pbP = 0 ;

    if( !POOP )
    {
        ZE( ULONG , cba ) ;
        #ifdef __OS2__
            BOS( WHATsfr , BOSfAIL , DosRead( (HFILE)0 , (voidT*)pbP , cbP , &cba ) )
            BOSpOOP
        #elif defined( __NT__ )

            BOS( WHATgbo , BOShANDLE , GetStdHandle( STD_INPUT_HANDLE ) ) //INTENTIONALLY NOT CLOSED, PER MSDN DOC COMMENT
            BOSpOOP

            BOS( WHATsfr , BOSoK , ReadFile( (HANDLE)tinP.brcRaw , pbP , cbP , &cba , 0 ) )
            BOSpOOP

        #endif
        cbP = cba ;
        pbP[ cbP > 1 ? cbP - 2 : 0 ] = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001078.thirdc.dosreadstdinf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001079.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.36001079.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x36001079
#define IDFILE      (countT)0xbae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1020089.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b010104.1.1.0.html\"\>b010104:  WAKEsHOW( "example.simplest.func.1020089.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( count4S* , pc4a ) ;
 |    third.newF( tinP , LF , pc4a , 8 ) ; ___( pc4a ) ;
 |    third.delF( tinP , pc4a ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( count2S , ifciDtYPEdROPnOTE_count2S )/*1*/
NEWdELtYPEtHIRD( count3S , ifciDtYPEdROPnOTE_count3S )
NEWdELtYPEtHIRD( count4S , ifciDtYPEdROPnOTE_count4S )
NEWdELtYPEtHIRD( count5S , ifciDtYPEdROPnOTE_count5S )
NEWdELtYPEtHIRD( count6S , ifciDtYPEdROPnOTE_count6S )
NEWdELtYPEtHIRD( count7S , ifciDtYPEdROPnOTE_count7S )
NEWdELtYPEtHIRD( count8S , ifciDtYPEdROPnOTE_count8S )
NEWdELtYPEtHIRD( count9S , ifciDtYPEdROPnOTE_count9S )
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001079.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107a.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.3600107a.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x3600107a
#define IDFILE      (countT)0xbaf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.102008a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c010104.1.1.0.html\"\>c010104:  WAKEsHOW( "example.simplest.func.102008a.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( sCountT* , psca ) ;
 |    third.newF( tinP , LF , psca , 8 ) ; ___( psca ) ;
 |    third.delF( tinP , psca ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( sCountT , ifciDtYPEdROPnOTE_sCountT )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107a.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107b.thirdc.oscompilef BEGIN
#define DDNAME       "3func.3600107b.thirdc.oscompilef"
#define DDNUMB      (countT)0x3600107b
#define IDFILE      (countT)0xbb0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osCompileF.0.html\"\>instances\</A\>
\<A HREF=\"5.102008c.1.0.html\"\>definition\</A\>
compilation errors do not cause impotence
arguments
 tinP
 bErrorsP
  must be 0
  when i return, will be 0 iff the compilation completed without errors
  if 0 then file postErrorP is guaranteed to not have been written
  else      file postErrorP is guaranteed to have been written
 postOutP
  this file can, but need not exist
 postErrorP
  this file must not exist
  if bErrors is nonze then this file is guaranteed to have been written, and the caller must d elete it before i am called again
 postInP
  this file must exist
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001015f.flMAKE!||
*/
/**//*1*/voidT thirdC::osCompileF( tinS& tinP , boolT& bErrorsP , const osTextT* const postOutP , const osTextT* const postErrorP , const osTextT* const postInP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( bErrorsP ) ;
        __Z( postOutP ) ;
        __Z( postErrorP ) ;
        __Z( postInP ) ;
        FV( flMAKE , flagsP ) ;
        __( F(flagsP) & flMAKE_EXE && F(flagsP) & flMAKE_EXEwIN ) ;
        __( F(flagsP) & flMAKE_DEBUG && ( F(flagsP) & flMAKE_MINIMALsPACE || F(flagsP) & flMAKE_MINIMALtIME || F(flagsP) & flMAKE_MINIMALtIMErISKY ) ) ;
        __( F(flagsP) & flMAKE_MINIMALtIME && F(flagsP) & flMAKE_MINIMALsPACE ) ;
        if( POOP ) return ;
    }

    _IO_
    {
        {
            ZE( infoFileS* , pInfo ) ;
            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
            dosFindFileOrDirF( tinP , pInfo , handle , postErrorP ) ;
            __NZ( pInfo ) ;
            DEL( pInfo ) ;
        }

        ZE( osTextT* , postArg ) ;
        {
            const osTextT* ppostArg[] =
            {
                #if defined( __NT__ ) || defined( __OS2__ )

                    IPDOScOMPILEoPTIONS                                                                                                  ,
                    " -fhq=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\adam.show.third.pch -dBiFCcLASS=0" ,  //U:: ELIMINATE HARDCODED "ideafarm.home.1"
                    F(flagsP) & flMAKE_EXE || F(flagsP) & flMAKE_EXEwIN ? ""                : " -bd"                                     ,
                    F(flagsP) & flMAKE_DEBUG                            ? " -d2 -dIFCdEBUG" : ""                                         ,
                    F(flagsP) & flMAKE_MINIMALsPACE                     ? " -os"            : ""                                         ,
                    F(flagsP) & flMAKE_MINIMALtIME                      ? " -oeil+mrt"      : ""                                         ,
                    F(flagsP) & flMAKE_MINIMALtIMErISKY                 ? " -oan"           : ""                                         ,
                    " -i=\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\include" , //U:: ELIMINATE HARDCODED "ideafarm.home.1"
                    " -fo="    ,
                    postOutP   ,
                    " -fr="    ,
                    postErrorP ,
                    " "        ,
                    postInP    ,

                #endif

                0
            }
            ;
            c_strConcatenateF( tinP , postArg , ppostArg ) ; ___( postArg ) ;
        }

        //U:: TO FIND A BUG
        //LOGrAW( "\r\n---- osCompileF / postArg ---- BEGIN ------------------------------\r\n" ) ;
        //LOGrAW( postArg ) ;
        //LOGrAW( "\r\n---- osCompileF / postArg ---- END --------------------------------\r\n" ) ;

        ZE( countT , value ) ;
        ZE( countT , idDeathType ) ;
        dosExecPgmF( tinP , countTC() , countTC() , value , idDeathType , "wpp386.exe" , postArg ) ;
        delF( tinP , postArg ) ;
        __( idDeathType ) ;
        bErrorsP = !!value ;

        ZE( boolT , bErrFile ) ;
        {
            ZE( infoFileS* , pInfo ) ;
            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
            dosFindFileOrDirF( tinP , pInfo , handle , postErrorP ) ;
            bErrFile = !!pInfo ;
            DEL( pInfo ) ;
        }
        bErrorsP |= !!bErrFile ; //HANDLES COMPILER WARNINGS THAT DO NOT CAUSE value TO BE SET (WATCOM COMPILER PROVIDES A SWITCH TO TREAT WARNINGS AS ERRORS, BUT SOME OTHER COMPILERS MIGHT NOT, SO I DO NOT USE THAT WATCOM SWITCH, ALTHOUGH THERE WOULD BE NO HARM IN DOING SO.  USING THAT SWITCH WOULD ELIMINATE THE NEED FOR THIS LINE)
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107b.thirdc.oscompilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107d.thirdc.doswritestdoutbadcodestylef BEGIN
#define DDNAME       "3func.3600107d.thirdc.doswritestdoutbadcodestylef"
#define DDNUMB      (countT)0x3600107d
#define IDFILE      (countT)0xbb1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteStdOutBadCodeStyleF.0.html\"\>instances\</A\>
\<A HREF=\"5.102008e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
this is called when bad coding style is detected
for example, strFuseF calls it when the target string doesn't have enough extra strokes to hold the new strokes
this can be called by application code to detect design flaws
*/
/**/

/*1*/voidT thirdC::dosWriteStdOutBadCodeStyleF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    ;//TELLsYSc1( ifcIDtYPEtELLsYS_ERRORbADcODEsTYLEsTROKEfUSEbUFFEReXHAUSTED )
    __1
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600107d.thirdc.doswritestdoutbadcodestylef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001080.thirdc.dosstartsessionf BEGIN
#define DDNAME       "3func.36001080.thirdc.dosstartsessionf"
#define DDNUMB      (countT)0x36001080
#define IDFILE      (countT)0xbb2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosStartSessionF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020091.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
see the flSESSION symbolic constants
on windows, some flSESSION flags have no effect
 flSESSION_KID
 flSESSION_FULLsCREEN
 flSESSION_HIDE
 flSESSION_BACK
on os/2, some flSESSION flags have no effect
 flSESSION_HIDE
os: on windows, kid processes are not supported, so the kid flag has no effect
arguments
 tinP
 osTidP
  must be 0
 osPidP
  must be 0
 valueP
  must be 0
 idDeathTypeP
  must be 0
 postExeP
 postArgsP
 idColP
 idRowP
 cColP
 cRowP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000e.flSESSION!||
*/
/**//*1*/voidT thirdC::dosStartSessionF( tinS& tinP , countT& osTidP , countT& osPidP , countT& valueP , countT& idDeathTypeP , const osTextT* const postExeP , const osTextT* const postArgsP , const sCountT idColP , const sCountT idRowP , const countT cColP , const countT cRowP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( osTidP ) ;
        __( osPidP ) ;
        __( valueP ) ;
        __( idDeathTypeP ) ;
        __Z( postExeP ) ;
        FV( flSESSION , flagsP ) ;
        if( POOP ) return ;
    }

    #if defined( __OS2__ )
        flagsT flags = flagsP | flSESSION_KID ;
    #else
        flagsT flags = flagsP ;
    #endif

    _IO_
    dosStartSessionF( tinP , osTidP , osPidP , postExeP , postArgsP , idColP , idRowP , cColP , cRowP , flags | flSESSION_REGISTERpROCESShANDLE ) ;
    dosWaitChildF( tinP , valueP , idDeathTypeP , osPidP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001080.thirdc.dosstartsessionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001081.thirdc.dosdeletedirf BEGIN
#define DDNAME       "3func.36001081.thirdc.dosdeletedirf"
#define DDNUMB      (countT)0x36001081
#define IDFILE      (countT)0xbb3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosDeleteDirF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020092.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
U: not coded for os/2
if the directory does not exist, i will return immediately and silently
arguments
 postP
  example: "\\fooey\\"
 cTriesP
  can be 0
  if 0 then will retry forever unless thPrimeIF( tinP ) is impotent
  if not 0 then will try cTriesP times (even if thPrimeIF( tinP ) is impotent)
  if - 1 then will retry forever even if thPrimeIF( tinP ) is impotent
*/
/**//*1*/voidT thirdC::dosDeleteDirF( tinS& tinP , const osTextT* const postP , countT cTriesP )/*1*/
{
    const countT costP = postP ? c_strlenIF( tinP , postP ) : 0 ;
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
        __( postP[ costP - 1 ] - '\\' ) ;
        if( POOP ) return ;
    }

    _IO_
    {
        ZE( osTextT* , postShorter ) ;
        newF( tinP , LF , postShorter , costP ) ; ___( postShorter ) ;
        c_memcpyIF( tinP , postShorter , postP , costP - 1 ) ;
        postShorter[ costP - 1 ] = 0 ;

        boolT bNoQuit = cTriesP == - 1 ;
        boolT bNoQuitEarly = !cTriesP ;
        ZE( countT , rc ) ;
        ZE( boolT , bFail ) ;
        do
        {
            #ifdef __OS2__

                __1 //U:

            #elif defined( __NT__ )

                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                BOS( WHATsfw , BOSoK , RemoveDirectory( postShorter ) )

                bFail = tinP.bosFail ;
                if( bFail )
                {
                    if( tinP.brcLath == ERROR_FILE_NOT_FOUND ) bFail = 0 ;
                    else                                       rc = tinP.brcLath ;
                }

            #endif

            if( bFail )
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ++ s ; dosSleepIF( tinP , TUCK * 128 ) ;
            }
            else break ;
        }
        while( !*this && ( bNoQuit || ( bNoQuitEarly && !thPrimeIF( tinP ) ) || ( cTriesP && -- cTriesP ) ) ) ;

        if( bFail )
        {
            __( rc ) ;
            __1
        }
        delF( tinP , postShorter ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001081.thirdc.dosdeletedirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001082.thirdc.dossetsystemtimef BEGIN
#define DDNAME       "3func.36001082.thirdc.dossetsystemtimef"
#define DDNUMB      (countT)0x36001082
#define IDFILE      (countT)0xbb4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetSystemTimeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020093.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
U: not coded for os/2
arguments
 yP
  the number of complete years since Jesus's conventional time of birth
  set yP = 0 for a time in the first year of our lord
  set yP = -1 for a time in the last year before our lord
  the domain of this parameter is unrestricted; any value can be specified
 mP
  the number of complete months after yP since Jesus's conventional time of birth
  the domain of this parameter is [0,11]
 dP
  the number of complete days after yP mP since Jesus's conventional time of birth
  the domain of this parameter is [0,30]
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
/**//*1*/voidT thirdC::dosSetSystemTimeF( tinS& tinP , const sCountT yP , const countT mP , const countT dP , const countT hhP , const countT mmP , const countT ssP , const countT msP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( mP > 11 ) ;
        __( dP > 30 ) ;
        __( hhP > 23 ) ;
        __( mmP > 59 ) ;
        __( ssP > 59 ) ;
        __( msP > 999 ) ;
        if( POOP ) return ;
    }

    _IO_
    #ifdef __OS2__
        __1 //U:
    #elif defined( __NT__ )

        SYSTEMTIME info ;
        info.wYear         = (count01T)( yP + 1 ) ;
        info.wMonth        = (count01T)( mP + 1 ) ;
        info.wDayOfWeek    = (count01T)( 0      ) ;
        info.wDay          = (count01T)( dP + 1 ) ;
        info.wHour         = (count01T)( hhP    ) ;
        info.wMinute       = (count01T)( mmP    ) ;
        info.wSecond       = (count01T)( ssP    ) ;
        info.wMilliseconds = (count01T)( msP    ) ;

        BOS( WHATgbo , BOSoK , SetSystemTime( &info ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001082.thirdc.dossetsystemtimef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001084.thirdc.s_puthostlogentryf BEGIN
#define DDNAME       "3func.36001084.thirdc.s_puthostlogentryf"
#define DDNUMB      (countT)0x36001084
#define IDFILE      (countT)0xbb5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_putHostLogEntryF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020095.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2f20104.1.1.0.html\"\>2f20104:  WAKEsHOW( "example.simplest.func.1020095.thirdC.s_putHostLogEntryF" )\</A\>
arguments
 postP
  must not contain blanks or nonalphanumerics
  encode blanks as '+'
*/
/**/

/*1*/voidT thirdC::s_putHostLogEntryF( tinS& tinP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
        __( !*postP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    handleC hso( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ;
    s_socketIF( tinP , hso ) ;
    s_connectF( tinP , hso , 0x50 , s_nicNameF( tinP , WWWiDEAFARMcOM ) ) ;
    TN( tOut , "" ) ; tOut = T("GET ")+T("///ideafarm/ephemeral/domains/com/ideafarm/dynamic/host.log.html?entry=")+T(postP)+T(" HTTP/1.1\r\n\r\n") ;   //20200731@1556: CHANGED FROM HTTP/1.0 TO HTTP/1.1 WITHOUT ANALYSIS
    s_writeF( tinP , hso , tOut , tOut.csF( tinP ) ) ;
    ZE( osTextT , osti ) ;
    s_readF( tinP , &osti , 1 , hso ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001084.thirdc.s_puthostlogentryf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001085.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.36001085.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x36001085
#define IDFILE      (countT)0xbb6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1020096.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3f20104.1.1.0.html\"\>3f20104:  WAKEsHOW( "example.simplest.func.1020096.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( measureT* , pma ) ;
 |    third.newF( tinP , LF , pma , 8 ) ; ___( pma ) ;
 |    third.delF( tinP , pma ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( measureT , ifciDtYPEdROPnOTE_measureT )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001085.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001086.thirdc.s_posthostf BEGIN
#define DDNAME       "3func.36001086.thirdc.s_posthostf"
#define DDNUMB      (countT)0x36001086
#define IDFILE      (countT)0xbb7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_postHostF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020097.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4f20104.1.1.0.html\"\>4f20104:  WAKEsHOW( "example.simplest.func.1020097.thirdC.s_postHostF" )\</A\>
obtains the name of the specified host
if there is no name, postP will remain 0 and impotence will -not- occur
 for example, this will obtain the name "www.ideafarm.com" when the associated IP address is specified
  not really true: 2000.10.07: get "ifc14" rather than "www.ideafarm.com"
evaluates to the length of the string obtained
arguments
 tinP
 postP
  must be 0
  after evaluation, this will be nonze and will point to the name that was retrieved
  the caller is responsible for deleting this poolOld drop
 nicNameP
  can be 0
   if 0 then the name of the local host is obtained
    this can be a name known on the Internet, or merely a local name used when installing an operating system on a LAN
  specifies the id of the host whose name is desired, in ifc byte order
*/
/**/

/*1*/countT thirdC::s_postHostF( tinS& tinP , osTextT*& postP , const nicNameC nicNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __NZ( postP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return 0 ;
    }

    _IO_

    nicNameC nicName = nicNameP ;
    if( !nicName ) nicName = s_nicNameF( tinP ) ;
    countT nicNameV4 = *(const countT*)nicName ; //U: SUPPORTS ONLY IPV4 (NOT IPV6)
    ZE( countT , costx ) ;
    if( nicNameV4 != NICnAMElOCAL )
    {
        c_zReverseByteOrderF( tinP , (byteT*)&nicNameV4 , sizeof nicNameV4 ) ;
        BOSS( WHATsir , BOSoK , gethostbyaddr( (char*)&nicNameV4 , sizeof nicNameV4 , PF_INET ) ) //ON WINDOWS, THIS WILL HANG IF NICnAMElOCAL
        //BOSpOOP
        hostent* pInfo = (hostent*)tinP.brcRaw ;
        if( !tinP.bosFail && pInfo && pInfo->h_name && pInfo->h_name[ 0 ] )
        {
            BOSdOnOTtEST( WHATgbo , strlen( pInfo->h_name ) )
            const countT costax = tinP.brcRaw + 1 ;
            newF( tinP , LF , postP , costax ) ; ___( postP ) ;
            thirdC::c_strncpyIF( tinP , postP , pInfo->h_name , costax ) ;
        }
    }
    return costx ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001086.thirdc.s_posthostf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001087.thirdc.s_bcanwritef BEGIN
#define DDNAME       "3func.36001087.thirdc.s_bcanwritef"
#define DDNUMB      (countT)0x36001087
#define IDFILE      (countT)0xbb8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_bCanWriteF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020098.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f130104.1.1.0.html\"\>f130104:  WAKEsHOW( "example.simplest.func.1020098.thirdC.s_bCanWriteF" )\</A\>
blocks for up to the specified time, waiting for the specified socket to become connected (ready to write)
then returns 1 if connected (or ready to write), or 0 if not yet connected (or ready to write)
if connection is not in progress, will return immediately
arguments
 tinP
 handleP
 time1P
 time2P
*/
/**//*1*/boolT thirdC::s_bCanWriteF( tinS& tinP , const handleC& handleP , const countT time1P , const sCountT time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return 0 ;
    }

    _IO_

    const countT cSeconds = thirdC::secondsFromTimeIF( tinP , time1P , time2P ) ;

    ZE( boolT , bCanWrite ) ;
    #ifdef __OS2__

        __1 //U: CODE FOR OS/2

    #elif defined( __NT__ )

        timeval timew ;
        timew.tv_sec = cSeconds ;
        timew.tv_usec = 0 ;

        //fd_set info ;
        //info.fd_count = 1 ;
        //info.fd_array[ 0 ] = handleP.osF( ifcIDtYPEhANDLE_SOCKET ) ;

        count3S c3s( 1 , handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , INVALID_SOCKET ) ;

        BOSS( WHATsiw , BOSsOCKETcODE2 , select( 0 , 0 , (fd_set*)&c3s , 0 , &timew ) )
        BOSpOOP

        if( !POOP ) bCanWrite = !!tinP.brcRaw ;

    #endif

    return bCanWrite ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001087.thirdc.s_bcanwritef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108a.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.3600108a.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x3600108a
#define IDFILE      (countT)0xbb9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.102009d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f730104.1.1.0.html\"\>f730104:  WAKEsHOW( "example.simplest.func.102009d.thirdC.NEWdELtYPEtHIRD" )\</A\>
example code
 |    ZE( count01T* , pwca ) ;
 |    third.newF( tinP , LF , pwca , 8 ) ; ___( pwca ) ;
 |    third.delF( tinP , pwca ) ;
*/
/**/

#define NDsIZEoF(typeP) sizeof( typeP )
/*1*/NEWdELtYPEtHIRD( count01T , ifciDtYPEdROPnOTE_count01T )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108a.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108b.thirdc.osbeimpotentf BEGIN
#define DDNAME       "3func.3600108b.thirdc.osbeimpotentf"
#define DDNUMB      (countT)0x3600108b
#define IDFILE      (countT)0xbba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osBeImpotentF.0.html\"\>instances\</A\>
\<A HREF=\"5.102009e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0830104.1.1.0.html\"\>0830104:  WAKEsHOW( "example.simplest.func.102009e.thirdC.osBeImpotentF" )\</A\>
this function causes the thirdC object to become impotent
arguments
 tinP
 codeP
  can be 0
  if 0 then the value 1234567 is used
*/
/**/

/*1*/voidT thirdC::osBeImpotentF( tinS& tinP , const countT codeP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    __( codeP ? codeP : 0x7654321 ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108b.thirdc.osbeimpotentf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108d.thirdc.winsettitlef BEGIN
#define DDNAME       "3func.3600108d.thirdc.winsettitlef"
#define DDNUMB      (countT)0x3600108d
#define IDFILE      (countT)0xbbb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winSetTitleF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200a0.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
if there is no console and no graphics window, nothing is done and impotence does not occur
i evaluate to bOk, which is nonze iff i was able to set a title
callers that want impotence to occur if i cannot set a title must test my return value
arguments
 postP
  must not be 0
  no longer true: must not be null length
 hWindowP
  can be 0
  if 0 then sets the title of the main window of the application
*/
/**/

/*1*/boolT thirdC::winSetTitleF( tinS& tinP , const osTextT* const postP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
        //__( !*postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , osh ) ;
    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
    if( pRootI )
    {
        osh     = ~hWindowP ? hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) : ( pRootI ? ((const handleC&)*pRootI).osF( ifcIDtYPEhANDLE_WINDOW ) : 0 ) ;
        pRootI->letRefF() ;
    }

    boolT bOk = 1 ;
    if( tinP.monitor.idThread == tinP.pAdamGlobal1->_thirdC_.idThreadWindows || !osh )
    {
        #if defined( __OS2__ )
            //U:
        #elif defined( __NT__ )
            if( osh )
            {
                BOS( WHATgbo , BOSoK , SetWindowText( (HWND)osh , postP ) )
                bOk = !tinP.bosFail ;
            }
            else
            {
                BOS( WHATgbo , BOSoK , SetConsoleTitle(           postP ) )
                bOk = !tinP.bosFail ;
            }
        #endif
    }
    else
    {
        ZE( osTextT* , postt ) ;
        const countT costat = 1 + c_strlenIF( tinP , postP ) ;
        newF( tinP , LF , postt , costat ) ; ___( postt ) ;
        thirdC::c_strncpyIF( tinP , postt , postP , costat ) ;
        handleC hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
        hWindow.osF( ifcIDtYPEhANDLE_WINDOW , osh , 0 , 1 ) ;
        bOk = winSendMessageF( tinP , hWindow , idwm_SETwINDOWtEXT , (countT)postt ) ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600108d.thirdc.winsettitlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001090.thirdc.ostimetooldtimef BEGIN
#define DDNAME       "3func.36001090.thirdc.ostimetooldtimef"
#define DDNUMB      (countT)0x36001090
#define IDFILE      (countT)0xbbc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osTimeToOldTimeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200a3.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ab30104.1.1.0.html\"\>ab30104:  WAKEsHOW( "example.simplest.func.10200a3.thirdC.osTimeToOldTimeF" )\</A\>
calculates conventional calendar time from city time
 this function correctly accounts for leap years and leap centuries
  a year is a leap year if, and only if, !(Y%4) && ( !!(Y%100) || ( Y && !(Y%400) ) )
all arguments are ze based offsets
arguments
 time1P
 time2P
 msP
  the number of complete milliseconds after yP dP hhP mmP ssP since Jesus's conventional time of birth
  the domain of this parameter is [0,999]
 ssP
  the number of complete seconds after yP dP hhP mmP since Jesus's conventional time of birth
  the domain of this parameter is [0,59]
 mmP
  the number of complete minutes after yP dP hhP since Jesus's conventional time of birth
  the domain of this parameter is [0,59]
 hhP
  the number of complete hours after yP dP since Jesus's conventional time of birth
  the domain of this parameter is [0,23]
 dP
  the number of complete days after yP mP since Jesus's conventional time of birth
  the domain of this parameter is [0,30]
 mP
  the number of complete months after yP since Jesus's conventional time of birth
  the domain of this parameter is [0,11]
 yP
  the number of complete years since Jesus's conventional time of birth
  set yP = 0 for a time in the first year of our lord
  set yP = -1 for a time in the last year before our lord
  the domain of this parameter is unrestricted; any value can be specified
 dowP: the day of the week
  the number of complete days in the current week
  the domain of this parameter is [0-6]
*/
/**/

/*1*/voidT thirdC::osTimeToOldTimeF( tinS& tinP , countT& msP , countT& ssP , countT& mmP , countT& hhP , countT& dP , countT& mP , sCountT& yP , countT& dowP , const countT time1P , const sCountT time2P , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL        
    {
        if( POOP ) return ;
        __( msP ) ;
        __( ssP ) ;
        __( mmP ) ;
        __( hhP ) ;
        __( dP ) ;
        __( mP ) ;
        __( yP ) ;
        if( POOP ) return ;
    }

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

    _IO_

    {
        const measureT mTimePerHour = (measureT)0x80000000 / (measureT)( 12 ) ;
        const measureT mTimePerMin  = (measureT)0x80000000 / (measureT)( 12 * 60 ) ;
        const measureT mTimePerSec  = (measureT)0x80000000 / (measureT)( 12 * 60 * 60 ) ;
        const measureT mTimePerMs   = (measureT)0x80000000 / (measureT)( 12 * 60 * 60 * 100 ) ;

        countT time1 = time1P ;

        hhP = (measureT)time1 / mTimePerHour ; time1 %= (countT)mTimePerHour ;
        mmP = (measureT)time1 / mTimePerMin  ; time1 %= (countT)mTimePerMin  ;
        ssP = (measureT)time1 / mTimePerSec  ; time1 %= (countT)mTimePerSec  ;
        msP = (measureT)time1 / mTimePerMs   ; time1 %= (countT)mTimePerMs   ;

        if( time1 > mTimePerMs / 2 ) msP ++ ;
    }

    countT  time1r = time1P ;
    sCountT time2r = time2P ;

    dowP = ( time2r + 1 ) % 7 ;

    // SET yP
    {
        measureT mDaysPerYear = 365.25 - 1.0 / 100.0 + 1.0 / 400.0 ;
        countT yTrial = 1 + (measureT)time2r / mDaysPerYear ;
        ZE( countT , time1 ) ;
        ZE( sCountT , time2 ) ;
        osTimeFromOldTimeIF( tinP , time1 , time2 , yTrial , 0 , 0 , 0 , 0 , 0 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
        while( time2 > time2r )
        {
            yTrial -- ;
            time1 = 0 ;
            time2 = 0 ;
            osTimeFromOldTimeIF( tinP , time1 , time2 , yTrial , 0 , 0 , 0 , 0 , 0 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;
        }
        yP = yTrial ;
        osTimeSubtractF( tinP , time1r , time2r , time1 , time2 ) ;
    }

    // SET mP
    // time2r CONTAINS THE OFFSET OF THE DAY IN YEAR yP
    {
                                                         if( time2r < 31                    ) dP = time2r ; // JAN
        else { time2r -= 31                    ; mP ++ ; if( time2r < 28 + bLeapYearF( yP ) ) dP = time2r ; // FEB
        else { time2r -= 28 + bLeapYearF( yP ) ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // MAR
        else { time2r -= 31                    ; mP ++ ; if( time2r < 30                    ) dP = time2r ; // APR
        else { time2r -= 30                    ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // MAY
        else { time2r -= 31                    ; mP ++ ; if( time2r < 30                    ) dP = time2r ; // JUN
        else { time2r -= 30                    ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // JUL
        else { time2r -= 31                    ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // AUG
        else { time2r -= 31                    ; mP ++ ; if( time2r < 30                    ) dP = time2r ; // SEP
        else { time2r -= 30                    ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // OCT
        else { time2r -= 31                    ; mP ++ ; if( time2r < 30                    ) dP = time2r ; // NOV
        else { time2r -= 30                    ; mP ++ ; if( time2r < 31                    ) dP = time2r ; // DEC
        else { __( time2r ) ;        
        } } } } } } } } } } } }
    }

    if( !( F(flagsP) & flOStIMEfROMoLDtIME_OLDtIMEiSutc ) )
    {
        SYSTEMTIME utc ;
        utc.wYear         = (WORD)( yP + 1 ) ;
        utc.wMonth        = (WORD)( mP + 1 ) ;
        utc.wDayOfWeek    = (WORD)0 ;
        utc.wDay          = (WORD)( dP + 1 ) ;
        utc.wHour         = (WORD)hhP ;
        utc.wMinute       = (WORD)mmP ;
        utc.wSecond       = (WORD)ssP ;
        utc.wMilliseconds = (WORD)msP ;
        SYSTEMTIME local ;
        thirdC::c_memsetIF( tinP , (byteT*)&local , sizeof local ) ;
        BOS( WHATgbo , BOSoK , SystemTimeToTzSpecificLocalTime( 0 , &utc , &local ) ) ;
        BOSpOOP

        yP  = local.wYear         - 1 ;
        mP  = local.wMonth        - 1 ;
        dP  = local.wDay          - 1 ;
        hhP = local.wHour             ;
        mmP = local.wMinute           ;
        ssP = local.wSecond           ;
        msP = local.wMilliseconds     ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001090.thirdc.ostimetooldtimef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001092.thirdc.winshowwindowf BEGIN
#define DDNAME       "3func.36001092.thirdc.winshowwindowf"
#define DDNUMB      (countT)0x36001092
#define IDFILE      (countT)0xbbd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winShowWindowF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200af.1.0.html\"\>definition\</A\>
evaluates to 1 if the window was previously visible, else to 0
whenever a window is shown, it is repositioned so that its client area exactly covers the entire desktop
arguments
 tinP
 handleP
  must not be 0
  this must be the handle of a window
 idCmdP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100eb.idcWINsHOW!||
*/
/**/

/*1*/boolT thirdC::winShowWindowF( tinS& tinP , const handleC& handleP , const countT idCmdP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( handleP ) ;
        __Z( idCmdP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , idCmd ) ;
    ZE( boolT , bWasVisible ) ;

    if( tinP.monitor.idThread == tinP.pAdamGlobal1->_thirdC_.idThreadWindows )
    {
        #if defined( __OS2__ )

            //U:

        #elif defined( __NT__ )

                 if( idCmdP == idcWINsHOW_DEFAULT        ) idCmd = SW_SHOWDEFAULT ;
            else if( idCmdP == idcWINsHOW_HIDE           ) idCmd = SW_HIDE ;
            else if( idCmdP == idcWINsHOW_SHOWnOaCTIVATE ) idCmd = SW_SHOWNA ;
            else if( idCmdP == idcWINsHOW_SHOW           ) idCmd = SW_SHOW ;
            else if( idCmdP == idcWINsHOW_MAXIMIZE       ) idCmd = SW_MAXIMIZE ;
            else if( idCmdP == idcWINsHOW_MINIMIZE       ) idCmd = SW_MINIMIZE ;
            else __1

            if( !POOP )
            {
                //if( idCmd == SW_SHOW )
                //{
                //    ZE( countT , idColLow ) ;
                //    ZE( countT , idRowLow ) ;
                //    ZE( countT , idColHigh ) ;
                //    ZE( countT , idRowHigh ) ;
                //    winRectangleDeskClientF( tinP , idColLow , idRowLow , idColHigh , idRowHigh ) ;
                //
                //    {
                //        windowOldC* pw = windowOldC::pWindowIF( tinP , handleP ) ;
                //        if( pw )
                //        {
                //            pw->mColsRowsF( tinP , idColHigh - idColLow + 1 , idRowHigh - idRowLow + 1 ) ;
                //            pw->papers.p PaperShow->mIdCol = idColLow ;
                //            pw->mIdRow = idRowLow ;
                //
                //            handleC& hWindow = (handleC&)(const handleC&)*pw ;
                //            ((HANDLEaPPnOTEScOUNTcLASS&)hWindow).c1 = idColHigh - idColLow + 1 ;
                //            ((HANDLEaPPnOTEScOUNTcLASS&)hWindow).c2 = idRowHigh - idRowLow + 1 ;
                //
                //        }
                //    }
                //
                //    countT xx = winOsColIF( idColLow ) ;
                //    countT yy = winOsRowIF( idRowHigh ) ;
                //    countT cx = idColHigh - idColLow + 1 ;
                //    countT cy = idRowHigh - idRowLow + 1 ;
                //
                //    BOS( WHATgbo , BOSoK , SetWindowPos( (HWND)handleP.osF( ifcIDtYPEhANDLE_WINDOW ) , HWND_NOTOPMOST ,   xx , yy , cx , cy , 0 ) )
                //    BOSpOOP
                //}

                BOSdOnOTtEST( WHATgbo , ShowWindow( (HWND)handleP.osF( ifcIDtYPEhANDLE_WINDOW ) , idCmd ) )
                bWasVisible = tinP.brcRaw ;

                ZE( boolT , bOutput ) ;
                windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
                if( pRootI )
                {
                    bOutput = handleP == *pRootI ;
                    pRootI->letRefF() ;
                }
                if( bOutput )
                {
                    switch( idCmdP )
                    {
                        case idcWINsHOW_SHOW           :
                        case idcWINsHOW_MAXIMIZE       :
                        case idcWINsHOW_SHOWnOaCTIVATE : { thirdC::third_flagsProcessStateI_IF( tinP , flPROCESSsTATE_OUTPUTwINDOWiSvISIBLE , 1 ) ; break ; }
                        default                        : { thirdC::third_flagsProcessStateI_IF( tinP , flPROCESSsTATE_OUTPUTwINDOWiSvISIBLE , 0 ) ; break ; }
                    }
                }
            }

        #endif
    }
    else bWasVisible = winSendMessageF( tinP , handleP , idwm_SHOW , idCmdP ) ;

    return bWasVisible ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001092.thirdc.winshowwindowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001093.thirdc.wininvalidaterectf BEGIN
#define DDNAME       "3func.36001093.thirdc.wininvalidaterectf"
#define DDNUMB      (countT)0x36001093
#define IDFILE      (countT)0xbbe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winI nvalidateRectF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b0.1.0.html\"\>definition\</A\>
evaluates to 1 if the window was previously visible, else to 0
to i nvalidate the entire window, specify idColMinP == 1 and idColMaxP == 0
arguments
 tinP
 wP
 idColMinP
 idRowMinP
 idColMaxP
  for max speed, ensure that i am >= idColMinP (unless the entire window is to be i nvalidated)
 idRowMaxP
  for max speed, ensure that i am >= idRowMinP (unless the entire window is to be i nvalidated)
*/
/**/

//WORKS, BUT IS NOT USED IN IPDOS (tm)

#if defined( NEVERdEFINED )

/*1*/voidT thirdC::winInvalidateRectF( tinS& tinP , windowOldC& wP , measureT mIdColMinP , measureT mIdRowMinP , measureT mIdColMaxP , measureT mIdRowMaxP )/*1*/
{
    const boolT bAll = mIdColMinP == 1.0f && !mIdColMaxP ;

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        RECT info ; //INTENTIONALLY UNINITIALIZED FOR SPEED
        if( !bAll )
        {
            info.left   = R( winOsColIF( mIdColMinP            ) ) ;
            info.top    = R( winOsRowIF( mIdRowMaxP , wP.mRowsF() ) ) ;
            info.right  = R( winOsColIF( mIdColMaxP            ) ) ;
            info.bottom = R( winOsRowIF( mIdRowMinP , wP.mRowsF() ) ) ;

            if( info.left > info.right )
            {
                countT tmp = info.left ;
                info.left = info.right ;
                info.right = tmp ;
            }
            info.right ++ ;

            if( info.top > info.bottom )
            {
                countT tmp = info.top ;
                info.top = info.bottom ;
                info.bottom = tmp ;
            }
            info.bottom ++ ;
        }

        //static countT idInLath ;
        //countT idIn = 1 + incv02AM( idInLath ) ;
        //Beep ( idIn * 0x100 , 1000 ) ;
        //LOGcALLnEST( "winInvalidateRectF" )
        
        //if( !bAll ) { LOGrAW( T(tinP.postThreadName)+T(" inva: from(c,r)-to(c,r): (")+TF1((countT)info.left)+T(",")+TF1((countT)info.top)+T(")-(")+TF1((countT)info.right-1)+T(",")+TF1((countT)info.bottom-1)+T(")\r\n") ) ; }
        //else        { LOGrAW( T(tinP.postThreadName)+T(" inva: all\r\n") ) ; }

        BOS( WHATgbd , BOSoK , InvalidateRect( (HWND)((const handleC&)wP).osF( ifcIDtYPEhANDLE_WINDOW ) , bAll ? 0 : &info , 1 ) )
        BOSpOOP

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001093.thirdc.wininvalidaterectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001094.thirdc.winopendrawinghandlef BEGIN
#define DDNAME       "3func.36001094.thirdc.winopendrawinghandlef"
#define DDNUMB      (countT)0x36001094
#define IDFILE      (countT)0xbbf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winOpenDrawingHandleF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b1.1.0.html\"\>definition\</A\>
my thirdC object must be contained within an etherC object that is fully constructed
 for example, do not call me against a thirdC object that is explicitly constructed in the definition of an adam
arguments
 tinP
 hDrawP
  must be 0
 hWindowP
  must not be 0
*/
/**/

/*1*/voidT thirdC::winOpenDrawingHandleF( tinS& tinP , handleC& hDrawP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( hDrawP ) ;
        __Z( hWindowP ) ;
        __Z( pswWinFromDraw ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbd , BOSoK , GetDC( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) ) )
        BOSpOOP
        hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE , tinP.brcRaw ) ;
        ((HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c1 = ((const HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c1 ;
        ((HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 = ((const HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c2 ;
        //LOGrAWtID4( "winOpenDrawingHandleF (cCols,cRows): " , ((const HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c1 , " " , ((const HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c2 ) ;

        lever_swWinFromDraw = hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
        __( *pswWinFromDraw ) ;
        if( !POOP ) *pswWinFromDraw = hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001094.thirdc.winopendrawinghandlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001095.thirdc.winsettextalignf BEGIN
#define DDNAME       "3func.36001095.thirdc.winsettextalignf"
#define DDNUMB      (countT)0x36001095
#define IDFILE      (countT)0xbc0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winSetTextAlignF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b2.1.0.html\"\>definition\</A\>
arguments
 tinP
 hDrawP
 idCmdP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ec.idcTEXTaLIGN!||
*/
/**/

/*1*/voidT thirdC::winSetTextAlignF( tinS& tinP , const handleC& hDrawP , const countT idCmdP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( hDrawP ) ;
        __Z( idCmdP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        ZE( countT , idCmd ) ;
        if( idCmdP == idcTEXTaLIGN_CELLbASE ) idCmd = TA_BOTTOM ;

        BOS( WHATgbd , BOSgDIcODE , SetTextAlign( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idCmd ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001095.thirdc.winsettextalignf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001096.thirdc.windrawtextf BEGIN
#define DDNAME       "3func.36001096.thirdc.windrawtextf"
#define DDNUMB      (countT)0x36001096
#define IDFILE      (countT)0xbc1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winDrawTextF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b3.1.0.html\"\>definition\</A\>
arguments
 tinP
 postP
  must not be 0
 costP
  can be 0
  if 0 then length is calculated
  calculated length can be ze
   if it is ze then nothing is done
*/
/**/

/*1*/voidT thirdC::winDrawTextF( tinS& tinP , const handleC& hDrawP , countT& cColP , countT& cRowP , const measureT mIdColP , const measureT mIdRowP , const osTextT* const postP , countT costP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __( cColP ) ;
        __( cRowP ) ;
        if( POOP ) return ;
    }

    _IO_

    third.winTextSizeF( tinP , cColP , cRowP , hDrawP , postP , costP ) ;

    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
    {
        #if defined( __OS2__ )
        
            //U:
        
        #elif defined( __NT__ )
        
            if( !costP )
            {
                BOSdOnOTtEST( WHATgbo , strlen( postP ) )
                costP = tinP.brcRaw ;
            }
        
            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            if( costP )
            {        
                BOS( WHATgbd , BOSoK , TextOut( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColP ) ) , R( winOsRowIF( mIdRowP , cRowsDraw ) ) + 1 , postP , costP ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001096.thirdc.windrawtextf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001097.thirdc.wintextsizef BEGIN
#define DDNAME       "3func.36001097.thirdc.wintextsizef"
#define DDNUMB      (countT)0x36001097
#define IDFILE      (countT)0xbc2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winTextSizeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b4.1.0.html\"\>definition\</A\>
arguments
 tinP
 cColP
  must be 0
 cRowP
  must be 0
 hDrawP
  must not be 0
 postP
  must not be 0
 costP
  can be 0
  if 0 then the length of postP is calculated
*/
/**/

/*1*/voidT thirdC::winTextSizeF( tinS& tinP , countT& cColP , countT& cRowP , const handleC& hDrawP , const osTextT* const postP , countT costP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( cColP ) ;
        __NZ( cRowP ) ;
        __Z( hDrawP ) ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        if( !costP )
        {
            BOSdOnOTtEST( WHATgbo , strlen( postP ) )
            costP = tinP.brcRaw ;
        }

        SIZE info ;
        BOS( WHATgbd , BOSoK , GetTextExtentPoint32( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , postP , costP , &info ) )
        BOSpOOP
        cColP = info.cx ;
        cRowP = info.cy ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001097.thirdc.wintextsizef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001098.thirdc.winsendmessagef BEGIN
#define DDNAME       "3func.36001098.thirdc.winsendmessagef"
#define DDNUMB      (countT)0x36001098
#define IDFILE      (countT)0xbc3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winSendMessageF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b6.1.0.html\"\>definition\</A\>
evaluates to whatever the message handler returns
 this value is usually 0
arguments
 tinP
 hWindowP
  must not be 0
 idCmdP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ed.idcWIN!||
  must not be 0
  can be either an ifc code or a base operating system code
 arg1P
  can be any value
 arg2P
  can be any value
*/
/**/

/*1*/countT thirdC::winSendMessageF( tinS& tinP , const handleC& hWindowP , const countT idCmdP , const countT arg1P , const countT arg2P )/*1*/
{
    // THIS CODE IS TO BE ALMOST IDENTICAL TO THE CODE FOR winPostMessageF

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( hWindowP ) ;
        __Z( idCmdP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , rc ) ;

    //ZE( countT , idCmd ) ;
    //if( idCmdP >= WM_USER ) idCmd = idCmdP ;
    //else
    //{
    //    switch( idCmdP )
    //    {
    //        #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.19000008.idcWINcASES.h"
    //    }
    //}
    //__Z( idCmd ) ;

    if( !POOP )
    {
        #if defined( __OS2__ )
    
            //U:
    
        #elif defined( __NT__ )
    
            BOSdOnOTtEST( WHATgbo , SendMessage( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , idCmdP , arg1P , arg2P ) )
            rc = tinP.brcRaw ;

        #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001098.thirdc.winsendmessagef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001099.thirdc.winpostmessagef BEGIN
#define DDNAME       "3func.36001099.thirdc.winpostmessagef"
#define DDNUMB      (countT)0x36001099
#define IDFILE      (countT)0xbc4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winPostMessageF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b7.1.0.html\"\>definition\</A\>
arguments
 tinP
 hWindowP
  must not be 0
 idCmdP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ed.idcWIN!||
  must not be 0
  can be either an ifc code or a base operating system code
 arg1P
  can be any value
 arg2P
  can be any value
*/
/**/

/*1*/voidT  thirdC::winPostMessageF( tinS& tinP , const handleC& hWindowP , const countT idCmdP , const countT arg1P , const countT arg2P )/*1*/
{
    // THIS CODE IS TO BE ALMOST IDENTICAL TO THE CODE FOR winSendMessageF

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return  ;
        __Z( hWindowP ) ;
        __Z( idCmdP ) ;
        if( POOP ) return  ;
    }

    _IO_

    //CODEsYNC: DUPLICATE CODE 10200B7 103011f
    //ZE( countT , idCmd ) ;
    //if( idCmdP < WM_USER ) idCmd = idCmdP ;
    //else
    //{
    //    switch( idCmdP )
    //    {
    //        #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.19000008.idcWINcASES.h"
    //    }
    //}
    //__Z( idCmd ) ;

    if( !POOP )
    {
        #if defined( __OS2__ )

            //U:

        #elif defined( __NT__ )

            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                while( !*this )
                {
                    BOS( WHATgbo , BOSoK , PostMessage( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , idCmdP , arg1P , arg2P ) )
                    if( !tinP.bosFail ) break ;
                    ++ s ; dosSleepIF( tinP ) ;
                }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001099.thirdc.winpostmessagef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109b.thirdc.winpaintnowf BEGIN
#define DDNAME       "3func.3600109b.thirdc.winpaintnowf"
#define DDNUMB      (countT)0x3600109b
#define IDFILE      (countT)0xbc5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winPaintNowF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200b9.1.0.html\"\>definition\</A\>
if any regions are invalid, sends a paint message
arguments
 tinP
 hWindowP
  can be 0
  if 0 then the main output window is painted
*/
/**/

/*1*/voidT thirdC::winPaintNowF( tinS& tinP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , osh ) ;
    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
    __Z( pRootI ) ;
    if( pRootI )
    {
        osh = ~hWindowP ? hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) : ((const handleC&)*pRootI).osF( ifcIDtYPEhANDLE_WINDOW ) ;
        pRootI->letRefF() ;
    }

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbd , BOSoK , UpdateWindow( (HWND)osh ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109b.thirdc.winpaintnowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109c.thirdc.winclientsizef BEGIN
#define DDNAME       "3func.3600109c.thirdc.winclientsizef"
#define DDNUMB      (countT)0x3600109c
#define IDFILE      (countT)0xbc6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winClientSizeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ba.1.0.html\"\>definition\</A\>
arguments
 tinP
 cColP
  must be 0
 cRowP
  must be 0
 hWindowP
  can be 0
  if 0 then the main output window is implied
*/
/**/

/*1*/voidT thirdC::winClientSizeF( tinS& tinP , countT& cColP , countT& cRowP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cColP ) ;
        __( cRowP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        //handleC hDesk( ifcIDtYPEhANDLE_WINDOW ) ;
        //winHWindowDeskF( tinP , hDesk )

        RECT info ;
        BOS( WHATgbo , BOSoK , GetClientRect( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , &info ) )
        BOSpOOP
        cColP = info.right /*- ( hDesk == hWindowP )*/ ; // COMMENTED OUT CODE IS A WORKAROUND FOR LAPTOP: COL AT OFFSET 799_9 IS NOT VISIBLE ON MY AMS TECH LAPTOP
        cRowP = info.bottom ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109c.thirdc.winclientsizef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109d.thirdc.wincreatewindowf BEGIN
#define DDNAME       "3func.3600109d.thirdc.wincreatewindowf"
#define DDNUMB      (countT)0x3600109d
#define IDFILE      (countT)0xbc7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winCreateWindowF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200bb.1.0.html\"\>definition\</A\>
arguments
 tinP
 hWindowParentOrOwnerP
  can be 0 unless idTypeP is "kid"
 hWindowP
  must be 0
 postTitleP
  must not be 0
 postOldClassP
  must not be 0
 idTypeP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ee.idtWIN!||
 idColP
  distance of left edge of the window from the left edge of the parent window (or display screen)
  if -1 then the operating system will use a default position, and idRowP will be ignored
 idRowP
  distance of the bottom edge of the window from the bottom edge of the parent window (or display screen)
  ignored if idColP is - 1
 cColP
  width of the window
  if -1 then the operating system will use a default size, and cRowP will be ignored
 cRowP
  height of the window
 hWindowingClientIP
  handle of the application
  for some operating systems, this can be 0
   for os2 this can be 0
   for Windows this must not be 0
 bNotVisibleP
 cTriesP
  can be 0
  if 0 then i will retry until i detect asynch impotence
  i sleep 8 tocks between each try
  after cTriesP is exhausted (if it is not 0), impotence will occur if i have not created the window
  if cTriesP is 0 and there is not an operator logged in, i will block until an operator logs in
*/
/**/

/*1*/voidT thirdC::winCreateWindowF( tinS& tinP , const handleC& hWindowParentOrOwnerP , handleC& hWindowP , const osTextT* const postTitleP , const osTextT* const postOldClassP , const countT idTypeP , sCountT idColP , sCountT idRowP , countT cColP , countT cRowP , const countT cColClientP , const countT cRowClientP , const handleC& hWindowingClientIP , const boolT bNotVisibleP , countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( hWindowP ) ;
        __Z( postTitleP ) ;
        __Z( postOldClassP ) ;
        __Z( idTypeP ) ;
        __( idTypeP == idtWIN_KID && !hWindowParentOrOwnerP ) ;

        #if defined( __OS2__ )
            __NZ( hWindowingClientIP ) ; //U: IS SUCH A HANDLE USED IN OS/2? CONJ: NO
        #elif defined( __NT__ )
            __Z( hWindowingClientIP ) ; //IF THIS BLOWS, COMMENT IT OUT SINCE 0 MIGHT BE A LEGAL VALUE
        #endif

        if( POOP ) return ;
    }

    _IO_

    //LOGrAWtID4( "winCreateWindowF (cColP,cRowP): " , cColP , " " , cRowP ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        flagsT flagsStyle = WS_CLIPCHILDREN | WS_CLIPSIBLINGS ;
        flagsT flagsStyleEx = 0 ;

        if( idTypeP == idtWIN_ROOT  )
        {
            flagsStyle |= WS_OVERLAPPEDWINDOW ;
            //flagsStyle |= WS_MAXIMIZE | WS_SYSMENU | WS_OVERLAPPEDWINDOW ;
            //U::COMMENTED OUT TO FIND A QUIT DEADLOCK BUG ON WINDOW THREAD: flagsStyleEx |= WS_EX_TOPMOST ;
        }
        else if( idTypeP == idtWIN_KID ) flagsStyle |= WS_CHILD | WS_BORDER ;
        else                               __( idTypeP ) ;

        ZE( sCountT , xx ) ;
        ZE( sCountT , yy ) ;
        ZE( countT  , cx ) ;
        ZE( countT  , cy ) ;
        if( ~hWindowParentOrOwnerP )
        {
            windowOldC* pwDad = windowOldC::pWindowIF( tinP , hWindowParentOrOwnerP ) ;
            if( pwDad )
            {
                if( idColP == - 1 ) xx = CW_USEDEFAULT ; //ARBITRARY SPECIAL VALUE
                else
                {
                    xx = winOsColIF( idColP ) ;
                    yy = winOsRowIF( idRowP - 1 + cRowP , pwDad->mRowsF() ) - cRowP + 1 ;
                }

                if( cColP == - 1 ) cx = CW_USEDEFAULT ;
                else
                {
                    cx = cColP ;
                    cy = cRowP ;
                }
            }
            else __1
        }
        else
        {
            if( cColP == - 1 ) { BLAMMO ; }

            if( idColP == - 1 ) xx = CW_USEDEFAULT ;
            else
            {
                xx = winOsColIF( idColP ) ;
                yy = winOsRowIF( idRowP - 1 + cRowP ) ;
            }
            
            if( cColP == - 1 ) cx = CW_USEDEFAULT ;
            else
            {
                cx = cColP ;
                cy = cRowP ;
            }
        }

        boolT bNoQuitEarly = !cTriesP ;

        thirdC& thPrime = thirdC::thPrimeIF( tinP ) ;
        ZE( countT , idLastReport ) ; // 1: CANNOT CREATE  2: CREATED AOK
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            boolT bWoth = 1 ;
            do
            {
                if( bWoth ) bWoth = 0 ;
                else
                {
                    if( idLastReport != 1 )
                    {
                        idLastReport = 1 ;
                        ;//TELLsYSc1( ifcIDtYPEtELLsYS_AOKfYIcANNOTcREATEwINDOWnOW ) 
                    }
                    {
                        ++ s ; dosSleepIF( tinP , TOCK * 4 ) ;
                    }
                }

                {
                    HINSTANCE oshClient = (HINSTANCE)hWindowingClientIP.osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) ;
                    HWND oshDad = (HWND)( ~hWindowParentOrOwnerP ? hWindowParentOrOwnerP.osF( ifcIDtYPEhANDLE_WINDOW ) : 0 ) ;

                    BOS( WHATgbo , BOSoK , CreateWindowEx( flagsStyleEx , postOldClassP , postTitleP , flagsStyle , xx , yy , cx , cy , oshDad , 0 , oshClient , 0 ) )
                    hWindowP.osF( ifcIDtYPEhANDLE_WINDOW , tinP.brcRaw ) ;

                    //DOES NOT RETURN THE CORRECT VALUES; WINDOWS IS SUCH SHIT
                    //ZE( countT , cColClient ) ;
                    //ZE( countT , cRowClient ) ;
                    //winClientSizeF( tinP , cColClient , cRowClient , hWindowP ) ;

                    ((HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c1 = cColClientP ;
                    ((HANDLEaPPnOTEScOUNTcLASS&)hWindowP).c2 = cRowClientP ;
                    //LOGrAWtID4( "winCreateWindowF (cColClient,cRowClient): " , cColClientP , " " , cRowClientP ) ;
                }
                if( !hWindowP ) { BLAMMO ; }

                //U: if( ~hWindowP && cRowP >= 0x100 ) //TEST THE WINDOW TO DECIDE WHETHER TO KEEP IT
                //U: {
                //U:     winShowWindowF( tinP , hWindowP , idcWINsHOW_MAXIMIZE ) ;
                //U:     ZE( countT , cCol ) ;
                //U:     ZE( countT , cRow ) ;
                //U:     winClientSizeF( tinP , cCol , cRow , hWindowP ) ;
                //U:     if( cRow < 0x100 )
                //U:     {
                //U:         win Destroy WindowF( tinP , hWindowP ) ;
                //U:     }
                //U: }
            }
            while( !hWindowP && !*this && !thPrime && ( bNoQuitEarly || ( cTriesP && -- cTriesP ) ) ) ;
        }

        flagsT flags = SWP_NOCOPYBITS ;
        flags |= bNotVisibleP ? SWP_NOACTIVATE : SWP_SHOWWINDOW ;

        //BOS( WHATgbo , BOSoK , SetWindowPos( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_DEBUG ? HWND_NOTOPMOST : HWND_TOPMOST , xx , yy , cx , cy , flags ) )
        //BOSpOOP
        BOS( WHATgbo , BOSoK , SetWindowPos( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , HWND_NOTOPMOST , xx , yy , cx , cy , flags ) )
        BOSpOOP

        if( idLastReport == 1 && ~hWindowP )
        {
            idLastReport = 2 ;
            ;//TELLsYSc1( ifcIDtYPEtELLsYS_AOKfYIcANcREATEwINDOWnOW ) 
        }

    #endif

    __Z( hWindowP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109d.thirdc.wincreatewindowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109e.thirdc.wincreatewindowclassf BEGIN
#define DDNAME       "3func.3600109e.thirdc.wincreatewindowclassf"
#define DDNUMB      (countT)0x3600109e
#define IDFILE      (countT)0xbc8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winCreateWindowClassF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200bc.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::winCreateWindowClassF( tinS& tinP , const osTextT* const postOldClassP , ifcWindowMessageHandlerFT winMsgHandlerFP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postOldClassP ) ;
        __Z( winMsgHandlerFP ) ;
        #if defined( __OS2__ )
        #elif defined( __NT__ )
            __( !processGlobal3I._thirdC_hWindowingClient ) ; //IF THIS HITS, COMMENT IT OUT BECAUSE 0 MIGHT BE A LEGAL VALUE
        #endif
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        WNDCLASS  wc;
        wc.style         = CS_HREDRAW | CS_VREDRAW | CS_OWNDC | CS_BYTEALIGNCLIENT ;
        wc.lpfnWndProc   = (osWindowMessageHandlerFT)winMsgHandlerFP ;
        wc.cbClsExtra    = 0 ;
        wc.cbWndExtra    = 0 ;
        wc.hInstance     = (HINSTANCE)processGlobal3I._thirdC_hWindowingClient.osF( ifcIDtYPEhANDLE_WINDOWINGcLIENT ) ;
        wc.hIcon         = 0 ;
        BOS( WHATgbo , BOSoK , LoadCursor( 0 , IDC_CROSS ) )
        BOSpOOP
        wc.hCursor       = (HCURSOR)tinP.brcRaw ;
        wc.hbrBackground = 0 /*(HBRUSH)( COLOR_WINDOW + 1 )*/ ;
        wc.lpszMenuName  = 0 ;
        wc.lpszClassName = postOldClassP ;

        BOS( WHATgbo , BOSoK , RegisterClass( &wc ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109e.thirdc.wincreatewindowclassf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109f.thirdc.winbeginpaintf BEGIN
#define DDNAME       "3func.3600109f.thirdc.winbeginpaintf"
#define DDNUMB      (countT)0x3600109f
#define IDFILE      (countT)0xbc9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winBeginPaintF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200be.1.0.html\"\>definition\</A\>
my thirdC object must be contained within an etherC object that is fully constructed
 for example, do not call me against a thirdC object that is explicitly constructed in the definition of an adam
arguments
 tinP
 hDrawP
  must be 0
  normally, will be set
  will silently remain null if no device context is available
  caller must check to see whether is null
 wP
 idColMinP
  must be 0
 idRowMinP
  must be 0
 idColMaxP
  must be 0
 idRowMaxP
  must be 0
*/
/**/

/*1*/voidT thirdC::winBeginPaintF( tinS& tinP , handleC& hDrawP , const handleC& hWindowP , sCountT& idColMinP , sCountT& idRowMinP , sCountT& idColMaxP , sCountT& idRowMaxP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( hDrawP ) ;
        __Z( hWindowP ) ;
        __Z( pswWinFromDrawDuringPaint ) ;
        __Z( pswPaintInfoFromDrawingHandle ) ;
        __( idColMinP ) ;
        __( idRowMinP ) ;
        __( idColMaxP ) ;
        __( idRowMaxP ) ;
        if( POOP ) return ;
    }

    _IO_

    windowOldC* pw = windowOldC::pWindowIF( tinP , hWindowP ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        ZE( byteT* , pbInfo ) ;
        newF( tinP , LF , pbInfo , sizeof( PAINTSTRUCT ) ) ; ___CT( pbInfo ) ;
        c_memsetIF( tinP , pbInfo , sizeof( PAINTSTRUCT ) ) ;
        PAINTSTRUCT* pInfo = (PAINTSTRUCT*)pbInfo ;

        BOS( WHATgbd , BOSoK , BeginPaint( (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) , pInfo ) )

        if( tinP.bosFail ) delF( tinP , pbInfo ) ;
        else
        {
            if( pInfo ) hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE , tinP.brcRaw ) ;
    
            lever_swPaintInfoFromDrawingHandle = lever_swWinFromDrawDuringPaint = hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
            *pswWinFromDrawDuringPaint = hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) ;
            *pswPaintInfoFromDrawingHandle = (countT)pInfo ;

            if( pw )
            {
                idColMinP = winIfColIF( pInfo->rcPaint.left ) ;
                idRowMinP = winIfRowIF( pInfo->rcPaint.bottom - 1 , pw->mRowsF() ) ;
                idColMaxP = winIfColIF( pInfo->rcPaint.right - 1 ) ;
                idRowMaxP = winIfRowIF( pInfo->rcPaint.top , pw->mRowsF() ) ;

                 //LOGrAWtID6( "********************************************************************************\r\nWM_PAINT [cRows,bottom,top]: " , pw->mRowsF() , " " , pInfo->rcPaint.bottom , " " , pInfo->rcPaint.top ) ;
                 //LOGrAWtID4( "WM_PAINT [idRowMin,idRowMax]: " , idRowMinP , " " , idRowMaxP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600109f.thirdc.winbeginpaintf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a0.thirdc.winendpaintf BEGIN
#define DDNAME       "3func.360010a0.thirdc.winendpaintf"
#define DDNUMB      (countT)0x360010a0
#define IDFILE      (countT)0xbca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winEndPaintF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200bf.1.0.html\"\>definition\</A\>
my thirdC object must be contained within an etherC object that is fully constructed
 for example, do not call me against a thirdC object that is explicitly constructed in the definition of an adam
arguments
 tinP
 hDrawP
  must not be 0
*/
/**/

/*1*/voidT thirdC::winEndPaintF( tinS& tinP , handleC& hDrawP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( hDrawP ) ;
        __Z( pswWinFromDrawDuringPaint ) ;
        __Z( pswPaintInfoFromDrawingHandle ) ;
        if( POOP ) return ;
    }

    _IO_

        #if defined( __OS2__ )

            //U:

        #elif defined( __NT__ )

            lever_swWinFromDrawDuringPaint = hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
            handleC hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
            hWindow.osF( ifcIDtYPEhANDLE_WINDOW , *pswWinFromDrawDuringPaint ) ;
            pswWinFromDrawDuringPaint->freeF( tinP ) ;
            __Z( hWindow ) ;

            lever_swPaintInfoFromDrawingHandle = hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
            byteT* pbInfo = (byteT*)(countT)*pswPaintInfoFromDrawingHandle ;

            pswPaintInfoFromDrawingHandle->freeF( tinP ) ;

            if( pbInfo )
            {
                BOS( WHATgbd , BOSoK , EndPaint( (HWND)hWindow.osF( ifcIDtYPEhANDLE_WINDOW ) , (PAINTSTRUCT*)pbInfo ) )
                BOSpOOP
                delF( tinP , pbInfo ) ;
            }
            hWindow.resetF() ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a0.thirdc.winendpaintf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a2.thirdc.dosopenf BEGIN
#define DDNAME       "3func.360010a2.thirdc.dosopenf"
#define DDNUMB      (countT)0x360010a2
#define IDFILE      (countT)0xbcb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosOpenF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200c6.1.0.html\"\>definition\</A\>
minimal wrapper for the static overload
*/
/**/

/*1*/voidT thirdC::dosOpenF( tinS& tinP , handleC& handleP , countT& idResultP , const osTextT* const postP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const countT cbP , countT cTriesP )/*1*/
{
    SCOOP
    _IO_
    dosOpenIF( tinP , tinP.pEther , handleP , idResultP , postP , idAccessP , idShareP , flagsDetailsP , idHowP , flagsAttributeP , cbP , cTriesP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a2.thirdc.dosopenf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a3.thirdc.doswritef BEGIN
#define DDNAME       "3func.360010a3.thirdc.doswritef"
#define DDNUMB      (countT)0x360010a3
#define IDFILE      (countT)0xbcc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200c7.1.0.html\"\>definition\</A\>
minimal wrapper for the static overload
*/
/**/

/*1*/voidT thirdC::dosWriteF( tinS& tinP , const handleC& handleP , const byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    _IO_
    dosWriteIF( tinP , handleP , pbP , cbP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a3.thirdc.doswritef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a4.thirdc.winhwindowdeskf BEGIN
#define DDNAME       "3func.360010a4.thirdc.winhwindowdeskf"
#define DDNUMB      (countT)0x360010a4
#define IDFILE      (countT)0xbcd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winHWindowDeskF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200c8.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::winHWindowDeskF( tinS& tinP , handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        BOSdOnOTtEST( WHATgbo , GetDesktopWindow() )
        handleP.osF( ifcIDtYPEhANDLE_WINDOW , tinP.brcRaw , 0 , 1 ) ;

    #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a4.thirdc.winhwindowdeskf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a5.thirdc.dossetfileptrf BEGIN
#define DDNAME       "3func.360010a5.thirdc.dossetfileptrf"
#define DDNUMB      (countT)0x360010a5
#define IDFILE      (countT)0xbce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetFilePtrF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ca.1.0.html\"\>definition\</A\>
minimal wrapper for the static overload
*/
/**/

/*1*/voidT thirdC::dosSetFilePtrF( tinS& tinP , const handleC& handleP , const flagsT flagsP , count2S& c2P )/*1*/
{
    SCOOP
    _IO_
    dosSetFilePtrIF( tinP , handleP , flagsP , c2P ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a5.thirdc.dossetfileptrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a6.thirdc.winsizef BEGIN
#define DDNAME       "3func.360010a6.thirdc.winsizef"
#define DDNUMB      (countT)0x360010a6
#define IDFILE      (countT)0xbcf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winSizeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200cb.1.0.html\"\>definition\</A\>
arguments
 tinP
 cColP
  must be 0
 cRowP
  must be 0
 hWindowP
  can be 0
  if 0 then the main output window is implied
*/
/**/

/*1*/voidT thirdC::winSizeF( tinS& tinP , countT& cColP , countT& cRowP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cColP ) ;
        __( cRowP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , osh ) ;
    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
    __Z( pRootI ) ;
    if( pRootI )
    {
        osh = ~hWindowP ? hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) : ((const handleC&)*pRootI).osF( ifcIDtYPEhANDLE_WINDOW ) ;
        pRootI->letRefF() ;
    }

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        RECT info ;
        BOS( WHATswr , BOSoK , GetWindowRect( (HWND)osh , &info ) )
        BOSpOOP
        cColP = info.right - info.left + 1 ;
        cRowP = info.bottom - info.top + 1 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a6.thirdc.winsizef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a8.thirdc.doswriteconsoleinputcrf BEGIN
#define DDNAME       "3func.360010a8.thirdc.doswriteconsoleinputcrf"
#define DDNUMB      (countT)0x360010a8
#define IDFILE      (countT)0xbd0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
\<A HREF=\"6.$dosWriteConsoleInputCRF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ce.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/    
/*1*/voidT thirdC::dosWriteConsoleInputCRF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        // WRITE A CR
        {
            // THESE VALUES WERE OBTAINED BY RUNNING bench/stdin AND PRESSING THE Enter KEY

            INPUT_RECORD info ;
            info.EventType = KEY_EVENT ;
            info.Event.KeyEvent.bKeyDown = 0x1ffff ;
            info.Event.KeyEvent.wRepeatCount = 0 ;
            info.Event.KeyEvent.uChar.AsciiChar = 0x1c ;
            info.Event.KeyEvent.wVirtualKeyCode = 1 ;
            info.Event.KeyEvent.wVirtualScanCode = 0xd ;
            info.Event.KeyEvent.dwControlKeyState = 0xd ;

            BOS( WHATgbo , BOShANDLE , GetStdHandle( STD_INPUT_HANDLE ) ) //INTENTIONALLY NOT CLOSED, PER MSDN DOC COMMENT
            BOSpOOP

            DWORD cOut = 0 ;
            BOS( WHATgbo , BOSoK , WriteConsoleInput( (HANDLE)tinP.brcRaw , &info , 1 , &cOut ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a8.thirdc.doswriteconsoleinputcrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a9.thirdc.newdeltypethird BEGIN
#define DDNAME       "3func.360010a9.thirdc.newdeltypethird"
#define DDNUMB      (countT)0x360010a9
#define IDFILE      (countT)0xbd1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10200cf.1.0.html\"\>definition\</A\>
*/
/**/

#define NDsIZEoF(nuP) processGlobal1I.cb_nicNameC_
/*1*/NEWdELtYPEtHIRD( nicNameC , ifciDtYPEdROPnOTE_nicNameC )/*1*/
#undef NDsIZEoF


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010a9.thirdc.newdeltypethird END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010aa.thirdc.imageexedllf BEGIN
#define DDNAME       "3func.360010aa.thirdc.imageexedllf"
#define DDNUMB      (countT)0x360010aa
#define IDFILE      (countT)0xbd2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$imageExeDllF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d0.1.0.html\"\>definition\</A\>
*/
/**/

struct oneImportImageExeDllS
{
    countT offFuncNameList ;
    countT pad[ 2 ] ;
    countT offName ;
    countT offFuncAddrList ;
}
;

/*1*/voidT thirdC::imageExeDllF( tinS& tinP , imageExeDllC*& pInfoP , const byteT* const pbP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pInfoP ) ;
        __Z( pbP ) ;
        if( POOP ) return ;
    }

    pInfoP = new( 0 , tinP , LF ) imageExeDllC( tinP , *this ) ; ___( pInfoP ) ;
    __Z( pInfoP ) ;
    if( pInfoP )
    {
        #if defined( __OS2__ )

            //U:

        #elif defined( __NT__ )

            IMAGE_DOS_HEADER* pDosInfo = (IMAGE_DOS_HEADER*)pbP ;
            __( *(USHORT*)pDosInfo - 0x5a4d ) ;
            if( !POOP )
            {
                IMAGE_FILE_HEADER* pPeInfo  = (IMAGE_FILE_HEADER*)( pbP + pDosInfo->e_lfanew + sizeof( countT ) ) ;
                __( ((ULONG*)pPeInfo)[ - 1 ] - 0x4550 ) ;
                if( !POOP )
                {
                    pInfoP->bDll = !!( pPeInfo->Characteristics & IMAGE_FILE_DLL ) ;

                    IMAGE_OPTIONAL_HEADER* pPeInfo2 = (IMAGE_OPTIONAL_HEADER*)( (byteT*)pPeInfo  + sizeof( IMAGE_FILE_HEADER     ) ) ;
                    IMAGE_SECTION_HEADER*  pPeInfo3 = (IMAGE_SECTION_HEADER*) ( (byteT*)pPeInfo2 + sizeof( IMAGE_OPTIONAL_HEADER ) ) ;

                    for( countT off = 0 ; !*this && off < pPeInfo->NumberOfSections ; off ++ )
                    {
                        const byteT* const pbSectionName = (const byteT*)pPeInfo3[ off ].Name ;
                        if( pInfoP->pSt_postSectionName ) *pInfoP->pSt_postSectionName << (countT)pbSectionName ;

                        if( POOP ) break ; //c_strcmpIF WILL RETURN 0 IF IMPOTENT
                        if( !c_strcmpIF( tinP , pbSectionName , ".edata" ) )
                        {
                            IMAGE_EXPORT_DIRECTORY* pInfo = (IMAGE_EXPORT_DIRECTORY*)( pbP + pPeInfo3[ off ].PointerToRawData ) ;
                            byteT* pbOff = (byteT*)pInfo - pPeInfo3[ off ].VirtualAddress ;

                            pInfoP->postImageName = pbOff + pInfo->Name ;

                            //DISABLED AS A SPEED AND SPACE OPTIMIZATION; ENABLE THIS CODE WHEN WANT TO RUN c550104 TO GET REPORT
                            //THIS LOOP CAUSED A THREAD STOP WHEN THE CB_rOOTpOOLoLDiNsET (THIS CONSTANT HAS BEEN ELIMINATED) IS SMALL
                            //if( pInfoP->pSt_postFuncNameExported )
                            //{
                            //    countT* pcOffFuncName = (countT*)( pbOff + (countT)pInfo->AddressOfNames ) ;
                            //    for( countT off = 0 ; off < pInfo->NumberOfNames ; off ++ )
                            //    {
                            //        osTextT* postFuncName = (osTextT*)pbOff + pcOffFuncName[ off ] ;
                            //        *pInfoP->pSt_postFuncNameExported << (countT)postFuncName ;
                            //    }
                            //}
                        }
                        else if( !c_strcmpIF( tinP , pbSectionName , ".idata" ) )
                        {
                            oneImportImageExeDllS* pInfo = (oneImportImageExeDllS*)( pbP + pPeInfo3[ off ].PointerToRawData ) ;
                            byteT* pbOff = (byteT*)pInfo - pPeInfo3[ off ].VirtualAddress ;
                            while( pInfo->offName )
                            {
                                byteT* pbUsedName =  pbOff + pInfo->offName ;
                                if( pInfoP->pSt_postDllUsed ) *pInfoP->pSt_postDllUsed << (countT)pbUsedName ;

                                for( countT off = 0 ; off < CpOSTdLLuSED ; off ++ )
                                {
                                    if( !pInfoP->ppostDllUsed[ off ] )
                                    {
                                        pInfoP->ppostDllUsed[ off ] = pbUsedName ;
                                        break ;
                                    }
                                }

                                pInfo ++ ;
                            }
                        }
                        else if( !c_strcmpIF( tinP , pbSectionName , ".desc" ) )
                        {
                            pInfoP->postDescription = (osTextT*)( pbP + pPeInfo3[ off ].PointerToRawData ) ;
                            pInfoP->costDescriptionAlloc = pPeInfo3[ off ].SizeOfRawData ;
                            __( pInfoP->postDescription[ pInfoP->costDescriptionAlloc - 1 ] ) ;
                        }
                    }
                }
            }

        #endif
    }
}

// master def is in 314


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010aa.thirdc.imageexedllf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ab.thirdc.osmessageboxf BEGIN
#define DDNAME       "3func.360010ab.thirdc.osmessageboxf"
#define DDNUMB      (countT)0x360010ab
#define IDFILE      (countT)0xbd3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osMessageBoxF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d1.1.0.html\"\>definition\</A\>
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

/*1*/countT thirdC::osMessageBoxF( tinS& tinP , const osTextT* const postP , const osTextT* const postTitleP , const flagsT flagsButtonsP , const flagsT flagButtonSelectedP )/*1*/
{
    SCOOP
    _IO_
    countT rc = osMessageBoxIF( tinP , postP , postTitleP , flagsButtonsP , flagButtonSelectedP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ab.thirdc.osmessageboxf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ac.thirdc.s_optionbroadcastf BEGIN
#define DDNAME       "3func.360010ac.thirdc.s_optionbroadcastf"
#define DDNUMB      (countT)0x360010ac
#define IDFILE      (countT)0xbd4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_optionBroadcastF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d2.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::s_optionBroadcastF( tinS& tinP , const handleC& handleP , const boolT bAllowP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSS( WHATgbo , BOSfAIL , setsockopt( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , SOL_SOCKET , SO_BROADCAST , (char*)&bAllowP , sizeof bAllowP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ac.thirdc.s_optionbroadcastf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ad.thirdc.s_optionreuseaddressf BEGIN
#define DDNAME       "3func.360010ad.thirdc.s_optionreuseaddressf"
#define DDNUMB      (countT)0x360010ad
#define IDFILE      (countT)0xbd5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_optionReuseAddressF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d3.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::s_optionReuseAddressF( tinS& tinP , const handleC& handleP , const boolT bAllowP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSS( WHATgbo , BOSfAIL , setsockopt( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , SOL_SOCKET , SO_REUSEADDR , (char*)&bAllowP , sizeof bAllowP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ad.thirdc.s_optionreuseaddressf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ae.thirdc.s_optionsendnowf BEGIN
#define DDNAME       "3func.360010ae.thirdc.s_optionsendnowf"
#define DDNUMB      (countT)0x360010ae
#define IDFILE      (countT)0xbd6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_optionSendNowF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d4.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::s_optionSendNowF( tinS& tinP , const handleC& handleP , const boolT bEnableP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_
    BOSS( WHATgbo , BOSfAIL , setsockopt( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , IPPROTO_TCP , TCP_NODELAY , (char*)&bEnableP , sizeof bEnableP ) )
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ae.thirdc.s_optionsendnowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010af.thirdc.s_writef BEGIN
#define DDNAME       "3func.360010af.thirdc.s_writef"
#define DDNUMB      (countT)0x360010af
#define IDFILE      (countT)0xbd7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d5.1.0.html\"\>definition\</A\>
arguments
 tinP
 handleP
 idPortP
 nicNameP
  can be 0
  if 0 then pbP is sent to the local host
  to broadcast, specify s_nicNameF( tinP , "!broadcast" ) ;
 pbP
  must contain the address of cbP readable bytes
 cbP
  can be 0
   if 0 then pbP is analyzed as a null terminated string to determine the implied length
  if the implied value is 0 then nothing is done and impotence does not occur
*/
/**/

/*1*/voidT thirdC::s_writeF( tinS& tinP , handleC& handleP , const countT idPortP , const nicNameC nicNameP , const byteT* const pbP , const countT cbP , const countT idModeP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __Z( pbP ) ;
        __( cbP > tinP.pAdamGlobal1->_thirdC_.cbDatagramMax ) ;
        __( cbP > ifcCBdATAGRAMmAX ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    const countT cbw = cbP ? cbP : c_strlenIF( tinP , pbP ) ;
    __( cbw > tinP.pAdamGlobal1->_thirdC_.cbDatagramMax ) ;
    __( cbw > ifcCBdATAGRAMmAX ) ;

    _IO_

    if( cbw )
    {
        ZE( sCountT , cba ) ;
        {
            const nicNameC nicName = !!nicNameP ? nicNameP : nicNameC( NICnAMElOCAL ) ;
            sockaddr_in info ;
            c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
            info.sin_family = AF_INET ;
            BOSdOnOTtEST( WHATgbo , htons( (count01T)idPortP ) )
            info.sin_port = (count01T)tinP.brcRaw ;
            BOSdOnOTtEST( WHATgbo , htonl( *(const countT*)nicName ) ) //U: SUPPORTS ONLY IPV4 (NOT IPV6)
            info.sin_addr.s_addr = tinP.brcRaw ;

            if( pEtherContainsMe ) pEtherContainsMe->chokeAttackerF( tinP , handleP , 0 , cbP ) ;
            BOSS( WHATsiw , BOSsOCKETcODE2 , sendto( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (byteT*)pbP , cbw , 0 , (sockaddr*)&info , sizeof info ) )
            BOSpOOP
            cba = tinP.brcRaw ;
            __( cba < cbw ) ;
        }

        if( !POOP ) tinP.odoSockCbWrite += cba ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010af.thirdc.s_writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b0.thirdc.s_readf BEGIN
#define DDNAME       "3func.360010b0.thirdc.s_readf"
#define DDNUMB      (countT)0x360010b0
#define IDFILE      (countT)0xbd8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_readF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d6.1.0.html\"\>definition\</A\>
there is no legal way within ifc to receive a datagram that is sizeof( countT ) bytes and contains the value ifcIDtYPEdATAGRAM_LETSaLLqUIT
there is no legal way to distinguish between receiving such a datagram and receiving a datagram containing 0 bytes
U::support timeout
*/
/**/

//U::ENHANCE TO ALLOW CALLER TO PREALLOCATE pbP (SETTING cbP TO THE LENGTH OF THE PREALLOCATED MEMORY

/*1*/voidT thirdC::s_readF( tinS& tinP , byteT*& pbP , countT& cbP , countT& idPortP , nicNameC& nicNameP , handleC& handleP , const flagsT flagsP , const countT time1P , const sCountT time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __NZ( pbP ) ;
        __( cbP ) ;
        __( idPortP ) ;
        __( nicNameP ) ;
        __Z( handleP ) ;
        __( time1P ) ; //U::SUPPORT TIMEOUT
        __( time2P ) ; //U::SUPPORT TIMEOUT
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_

    sCountT cba = tinP.pAdamGlobal1->_thirdC_.cbDatagramMax + 1 ;
    newF( tinP , LF , pbP , cba ) ; ___( pbP ) ;
    sockaddr_in info ;
    c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
    sCountT cbInfo = sizeof info ;
    if( pEtherContainsMe ) pEtherContainsMe->chokeAttackerF( tinP , handleP , cba ) ;
    BOSS( WHATsir , BOSsOCKETcODE2 , recvfrom( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (byteT*)pbP , cba , 0 , (sockaddr*)&info , &cbInfo ) )
    BOSpOOP
    __Z( cba ) ;
    if( pbP ) { cba = tinP.brcRaw ; }

    if( !POOP )
    {
        tinP.odoSockCbRead += cba ;

        cbP = cba ;
        pbP[ cbP ] = 0 ;

        __( info.sin_family - AF_INET ) ;
        __( cbInfo - sizeof info ) ;
        BOSdOnOTtEST( WHATgbo , ntohs( info.sin_port ) )
        idPortP = tinP.brcRaw ;
        BOSdOnOTtEST( WHATgbo , ntohl( info.sin_addr.s_addr ) )
        nicNameP = tinP.brcRaw ; //U: SUPPORTS ONLY IPV4 (NOT IPV6)
        if( !nicNameP ) nicNameP = NICnAMElOCAL ;
    }

    if( !cbP || ( cbP == sizeof( countT ) && *(countT*)pbP == ifcIDtYPEdATAGRAM_LETSaLLqUIT ) )
    {
        delF( tinP , pbP ) ;
        cbP = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b0.thirdc.s_readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b1.thirdc.s_acceptf BEGIN
#define DDNAME       "3func.360010b1.thirdc.s_acceptf"
#define DDNUMB      (countT)0x360010b1
#define IDFILE      (countT)0xbd9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_acceptF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d7.1.0.html\"\>definition\</A\>
arguments
 bRefuseP
  can be 0
  normally should be 0
  if not 0 when i have accepted a connection then i close the connection and return 0
*/
/**/

/*1*/voidT thirdC::s_acceptF( tinS& tinP , handleC& hClientP , countT& idPortP , nicNameC& nicNameP , const handleC& handleP , boolT& bRefuseP , const handleC* const phContextP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    //POPUPcOUNT( "acceptF2 called within: " , processGlobal1I.idAdamRoot ) ; //U::

    _IO_
    sockaddr_in6 info ;
    c_memsetIF( tinP , (byteT* const)&info , sizeof info ) ;
    sCountT cbInfo = sizeof info ;
    BOSS( WHATsia , BOSsOCKETcODE , accept( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (sockaddr*)&info , &cbInfo ) )
    BOSpOOP
    {
        countT oshSocket = tinP.brcRaw ;
        //LOGrAW5( "" , oshSocket , "    " , tinP.pAdamGlobal1->idAdam , " ++++ accept\r\n" ) ;
    }

    //CS:CODEsYNC: PSEUDODUPLICATE 3600103f 360010b1
    if( !phContextP ) hClientP.osF( ifcIDtYPEhANDLE_SOCKET , tinP.brcRaw ) ;
    else
    {
        countT oshSocket = tinP.brcRaw ;
        openSsl_getWrapperIF( tinP , hClientP , *phContextP ) ;
        countT c_pWrapper = hClientP.cNoteF() ;
        hClientP.resetF() ;
        hClientP.osF( ifcIDtYPEhANDLE_SOCKET , oshSocket , 0 , c_pWrapper ) ;
    }
    __Z( hClientP ) ;

    if( !POOP )
    {
        if( bRefuseP ) hClientP.closeIfF() ;
        else
        {
            __( info.sin6_family - AF_INET6 ) ;
            __( cbInfo - sizeof info ) ;
            BOSdOnOTtEST( WHATgbo , ntohs( info.sin6_port ) )
            idPortP = tinP.brcRaw ;

            countT* pcFrom = (countT*)info.sin6_addr.u.Byte ;
            countT* pcTo   = (countT*)(const countT*)nicNameP ;
            for( countT offi = 0 ; offi < 4 ; offi ++ )
            {
                BOSdOnOTtEST( WHATgbo , ntohl( pcFrom[ offi ] ) )
                pcTo[ 3 - offi ] = tinP.brcRaw ;
            }

            if( !nicNameP ) nicNameP = NICnAMElOCAL ;
            //else if( pEtherContainsMe ) bRefuseP = pEtherContainsMe->diskFileExistsF( tinP , T("///ideafarm/ephemeral/domains/com/ideafarm/ipdos/attackers/")+T(nicNameP)+T("/") ) ;
        }
    
        if( bRefuseP ) hClientP.closeIfF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b1.thirdc.s_acceptf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b2.thirdc.s_nicnamef BEGIN
#define DDNAME       "3func.360010b2.thirdc.s_nicnamef"
#define DDNUMB      (countT)0x360010b2
#define IDFILE      (countT)0xbda


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_nicNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200d8.1.0.html\"\>definition\</A\>
impotence will not occur if the domain name server replies "not found"
caller must verify that pNicNameP and cNicNameP are not ze before using pNicNameP
 only wo of these need be tested
arguments
 tinP
 pNicNameP
 cNicNameP
 postP
  can be 0
  if 0 then i will return garbage when run on Windows 98 and impotence will not occur
*/
/**/

/*1*/voidT thirdC::s_nicNameF( tinS& tinP , nicNameC*& pNicNameP , countT& cNicNameP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( postP && !*postP ) ;
        __NZ( pNicNameP );
        __( cNicNameP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_

    stackC stYou( tinP , *this , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_nicNameC ) ;

    if( postP && !c_strcmpIF( tinP , postP , "!broadcast" ) )
    {
        newF( tinP , LF , pNicNameP ) ; ___( pNicNameP ) ;
        if( pNicNameP )
        {
            BOSdOnOTtEST( WHATgbo , ntohl( INADDR_BROADCAST ) )
            *pNicNameP = tinP.brcRaw ;
            cNicNameP = 1 ;
        }
    }
    //else if( F(flagsMode) & flTHIRDmODE_WWWiDEAFARMcOM_LOCALhOST && !c_strcmpIF( tinP , postP , WWWiDEAFARMcOM ) )
    else
    {
        BOSdOnOTtEST( WHATgbo , inet_addr( postP ) )
        BOSdOnOTtEST( WHATgbo , ntohl( tinP.brcRaw ) )
        countT nicNameV4 = !postP ? 0 : tinP.brcRaw ;
        BOSdOnOTtEST( WHATgbo , ntohl( INADDR_NONE ) )
        if( !nicNameV4 || nicNameV4 == tinP.brcRaw ) s_getHostByNameF( tinP , stYou , (osTextT*)postP ) ;
        else
        {
            newF( tinP , LF , pNicNameP ) ; ___( pNicNameP ) ;
            if( pNicNameP )
            {
                *pNicNameP = nicNameV4 ;
                cNicNameP = 1 ;
            }
        }
    }

    if( !pNicNameP && stYou )
    {
        cNicNameP = stYou ;

        if( cNicNameP )
        {
            newF( tinP , LF , pNicNameP , cNicNameP ) ; ___( pNicNameP ) ;
            if( pNicNameP )
            {
                ZE( countT , off ) ;
                while( stYou && !stYou.third )
                {
                    ZE( nicNameC* , pYou ) ;
                    stYou >> pYou ;
                    if( pYou ) pNicNameP[ off ++ ] = *pYou ;
                    else       pNicNameP[ off ++ ] = 0 ;
                    delF( tinP , pYou ) ;
                }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b2.thirdc.s_nicnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b4.thirdc.osdriverf BEGIN
#define DDNAME       "3func.360010b4.thirdc.osdriverf"
#define DDNUMB      (countT)0x360010b4
#define IDFILE      (countT)0xbdb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200da.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol anywhere except in the definition of etherC::osDriverF
it is illegal to call me on a thread other than the main thread of a process
 some operating systems require this
  windows nt
*/
/**/

handleC* phDll ;

VOID WINAPI osServiceMainF( DWORD cHowP , LPTSTR* ppostHowP ) // RUNS ON A NEW THREAD CREATED WITHIN StartServiceCtrlDispatcher
{
    {
        taskS fake( *processGlobal1I.pTinDadService , 0 , 0 , 0 , flTHREADlAUNCH_FAKE /* | flTHREADlAUNCH_ORPHAN */ , cHowP , (countT)ppostHowP , (countT)phDll ) ;

        #if defined( __OS2__ )
            tmServiceMainF( (countT)&fake ) ;
        #elif defined( __NT__ )
            tmServiceMainF( (voidT*)&fake ) ;
        #endif
    }
    processGlobal1I.pcPhaseLow[ ifcIDtHREADlOW_tmWindowsOrServiceMainF ] = - 1 ;
}

/*1*/voidT thirdC::osDriverF( tinS& tinP , const osTextT* postNameP )/*1*/
{
    static countT cIn ;
    cIn ++ ;

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cIn > 1 ) ;
        if( POOP ) return ;
        __Z( pEtherContainsMe ) ;
        __( tinP.monitor.idThread - 1 ) ;
        __( !!( F(flagsMode) & flTHIRDmODE_TINoWNER ) ) ; // THIS AND THE PRECEDING LINE ENSURES THAT pEtherContainsMe DOES NOT POINT TO etPrime (HOPEFULLY IT POINTS TO etThread) SO THAT THAT IDENTIFIER IS NOT MISLEADING
        if( POOP ) return ;
    }

    _IO_

    tinP.pAdamGlobal1->postServiceName = postNameP ;
    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    BOSpOOP
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , OpenService( hsm , tinP.pAdamGlobal1->postServiceName , SERVICE_ALL_ACCESS ) )
    BOSpOOP
    SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
    BOSpOOP
    BOS( WHATgbo , BOSoK , QueryServiceStatus( hsv , (SERVICE_STATUS*)tinP.pAdamGlobal1->pcServiceStatus ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
    BOSpOOP

    processGlobal1I._thirdC_flagsModeProcess1 |= flMODEpROCESS1_QUITaTsHUTDOWN ; //I WANT TO SET flMODEpROCESS1_DRIVER BIT AS SOON AS I KNOW THAT I AM THE DRIVER PROCESS
    if( !POOP )
    {
        SERVICE_TABLE_ENTRY tbl[ 2 ] ;
        tbl[ 0 ].lpServiceName = (osTextT*)tinP.pAdamGlobal1->postServiceName ;
        tbl[ 0 ].lpServiceProc = osServiceMainF ;
        tbl[ 1 ].lpServiceName = 0 ;
        tbl[ 1 ].lpServiceProc = 0 ;

        processGlobal1I.pTinDadService = &tinP ;
        processGlobal1I.pEtThreadServiceEventHandler = pEtherContainsMe ;

        //inc02AM( tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads ) ;
        inc02AM( tinP.pAdamGlobal1->_thirdC_.cAllKidThreads ) ;
        inc02AM( tinP.cKidThreads ) ;

        handleC hDll( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DLL ) ; //OPENED BY tmServiceMainF; CANNOT BE CLOSED (FOR UNK REASON) UNTIL AFTER StartServiceCtrlDispatcher RETURNS
        tinP.pAdamGlobal1->_etherC_.pHdll = phDll = &hDll ;
        if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
        BOS( WHATgbo , BOSoK , StartServiceCtrlDispatcher( tbl ) )
        BOSpOOP
        if( !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }

        //if( POOP ) dec02AM( tinP.pAdamGlobal1->_thirdC_.cAllOrphanThreads ) ;
        if( POOP )
        {
            dec02AM( tinP.pAdamGlobal1->_thirdC_.cAllKidThreads ) ;
            dec02AM( tinP.cKidThreads ) ;
        }
        phDll = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b4.thirdc.osdriverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b5.thirdc.osdriverunregisterf BEGIN
#define DDNAME       "3func.360010b5.thirdc.osdriverunregisterf"
#define DDNUMB      (countT)0x360010b5
#define IDFILE      (countT)0xbdc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverUnregisterF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200db.1.0.html\"\>definition\</A\>
this marks the driver for deletion
the deletion will not take effect until the driver is not active and all handles to it are closed
*/
/**/

/*1*/voidT thirdC::osDriverUnregisterF( tinS& tinP , const osTextT* const postNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        if( POOP ) return ;
    }

    _IO_


    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , OpenService( hsm , postNameP , SERVICE_ALL_ACCESS ) )
    BOSpOOP
    SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , DeleteService( hsv ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b5.thirdc.osdriverunregisterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b6.thirdc.osdriverregisterf BEGIN
#define DDNAME       "3func.360010b6.thirdc.osdriverregisterf"
#define DDNUMB      (countT)0x360010b6
#define IDFILE      (countT)0xbdd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverRegisterF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200dc.1.0.html\"\>definition\</A\>
U: support pseudo command line parameters that are to be made available to the service
 windows nt does not provide a way to specify "real" command line parameters
  it provides parameters, but these are not available until within the ServiceMain function
  this is too late for ifc services, which analyze command line to choose the dll to load, which calls ServiceMain
  alt: IdeaFarm " "(tm) City service chat can be used to give startup parameters to a process
 until this issue is handled, other adam classes "like" e040104 cannot be implemented
arguments
 tinP
 postNameP
  must not be 0
  must not contain ' ', '\\', '?', '*'
  must not begin with '.'
 postFileP
  must not be 0
  must reside on a local drive
*/
/**/

/*1*/voidT thirdC::osDriverRegisterF( tinS& tinP , const osTextT* const postNameP , const osTextT* const postDisplayNameP , const osTextT* const postDescriptionP , const osTextT* const postFileP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        __Z( postFileP ) ;
       if( POOP ) return ;
        __( !!c_strchrIF( tinP , postNameP , ' ' ) ) ; // WINDOWS
        __( !!c_strchrIF( tinP , postNameP , '\\' ) ) ; // WINDOWS
        __( !!c_strchrIF( tinP , postNameP , '?' ) ) ; // WINDOWS
        __( !!c_strchrIF( tinP , postNameP , '*' ) ) ; // WINDOWS
        __( postNameP == c_strchrIF( tinP , postNameP , '.' ) ) ; // WINDOWS
        if( POOP ) return ;
    }

    _IO_

    unregisterObsoleteDriversF( tinP , *this , postNameP ) ;

    {
        ZE( infoDisk1S* , pInfo ) ;
        dosQueryFSInfoF( tinP , pInfo , ifFileNameC( tinP , *this , postFileP ) ) ; ___( pInfo ) ;
        if( pInfo ) __( !pInfo->bLocal ) ;
        DEL( pInfo ) ;
    }

    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    BOSpOOP
    if( !POOP )
    {
        BOS( WHATgbo , BOSoK , OpenService( hsm , postNameP , SERVICE_ALL_ACCESS ) )
        SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
        if( hsv )
        {
            BOS( WHATgbo , BOSoK , DeleteService( hsv ) )
            BOSpOOP
            BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
            BOSpOOP
            hsv = 0 ;
        }
    
        ZE( boolT , bManualStart ) ;
        if( pEtherContainsMe )
        {
            ZE( countT , idHome ) ;
            ZE( countT , idAdam ) ;
            ZE( countT , idVersion ) ;
            pEtherContainsMe->osDriverParseNameF( tinP , idHome , idAdam , idVersion , T(postNameP) ) ;
            //if( idHome != 0xffffff && idHome != 1 ) bManualStart = 1 ;
            if( idHome == 0xffffff || idHome < 0x100 || idHome > 0x1ff ) bManualStart = 1 ; //1:DOWNLOADER OR DEVELOPMENT; 2-ff:TEST 001-ff1: SERVER; 002+: RESERVED; ffffff:timecard

            //if( idHome == 1 ) bManualStart = 1 ; //FOR EXTRA SAFETY; REMOVE THIS WHEN RELEASE NO LONGER REMOVES ITSELF WHEN FIRED
        }

        //bManualStart = 1 ; //U::RETAIN THIS UNTIL HAVE PROTECTION AGAINST CONTINUAL REBOOT CYCLING

        //U::DOES NOT WORK: hsv = CreateService( hsm , postNameP , postNameP , SERVICE_ALL_ACCESS , SERVICE_WIN32_OWN_PROCESS | SERVICE_INTERACTIVE_PROCESS , SERVICE_AUTO_START , SERVICE_ERROR_NORMAL , postFileP , 0 , 0 , 0 , "administrator" , "m9oqbV3s" ) ;
        BOS( WHATgbo , BOSoK , CreateService( hsm , postNameP , postDisplayNameP , SERVICE_ALL_ACCESS , SERVICE_WIN32_OWN_PROCESS | SERVICE_INTERACTIVE_PROCESS , bManualStart ? SERVICE_DEMAND_START : SERVICE_AUTO_START , SERVICE_ERROR_NORMAL , postFileP , 0 , 0 , 0 , "LocalSystem" , 0 ) )
        BOSpOOP
        hsv = (SC_HANDLE)tinP.brcRaw ;
        BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
        BOSpOOP
    }
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
    BOSpOOP

    if( !POOP )
    {
        ZE( HKEY , hKey1 ) ;
        ZE( HKEY , hKey2 ) ;
        ZE( HKEY , hKey3 ) ;
        ZE( HKEY , hKey4 ) ;
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegOpenKeyEx( HKEY_LOCAL_MACHINE , "SYSTEM" , 0 , KEY_ALL_ACCESS , &hKey1 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegOpenKeyEx( hKey1 , "CurrentControlSet" , 0 , KEY_ALL_ACCESS , &hKey2 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegOpenKeyEx( hKey2 , "Services" , 0 , KEY_ALL_ACCESS , &hKey3 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegOpenKeyEx( hKey3 , postNameP , 0 , KEY_ALL_ACCESS , &hKey4 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegSetValueEx( hKey4 , "Description" , 0 , REG_SZ , (CONST BYTE*)postDescriptionP , 1 + c_strlenIF( postDescriptionP ) ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegCloseKey( hKey4 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegCloseKey( hKey3 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegCloseKey( hKey2 ) )
        BOSpOOP
        
        BOSrAW( WHATgbo , BOSsUCCESScODE , RegCloseKey( hKey1 ) )
        BOSpOOP
    }
    if( postDescriptionP ) ; //U::
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b6.thirdc.osdriverregisterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b7.thirdc.osdriverstatusf BEGIN
#define DDNAME       "3func.360010b7.thirdc.osdriverstatusf"
#define DDNUMB      (countT)0x360010b7
#define IDFILE      (countT)0xbde


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverStatusF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200dd.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT thirdC::osDriverStatusF( tinS& tinP , const osTextT* const postNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postNameP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , idStatus ) ;
    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    __Z( hsm ) ;
    if( !POOP )
    {
        idStatus = ifcDRIVERsTATUS_UNKNOWN ;
        BOS( WHATgbo , BOSoK , OpenService( hsm , postNameP , SERVICE_ALL_ACCESS ) )


        SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
        if( hsv )
        {
            SERVICE_STATUS info ;
            BOS( WHATgbo , BOSoK , QueryServiceStatus( hsv , &info ) )
            BOSpOOP

            switch( info.dwCurrentState )
            {
                case SERVICE_START_PENDING : { idStatus = ifcDRIVERsTATUS_STARTING        ; break ; }
                case SERVICE_RUNNING       : { idStatus = ifcDRIVERsTATUS_STARTED         ; break ; }
                case SERVICE_STOP_PENDING  : { idStatus = ifcDRIVERsTATUS_STOPPING        ; break ; }
                case SERVICE_STOPPED       : { idStatus = ifcDRIVERsTATUS_STOPPED         ; break ; }
                default                    : { __( info.dwCurrentState ) ; __1 break ; }
            }

            BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
            BOSpOOP
        }
        BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
        BOSpOOP
    }

    return idStatus ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b7.thirdc.osdriverstatusf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b8.thirdc.osdriverhiref BEGIN
#define DDNAME       "3func.360010b8.thirdc.osdriverhiref"
#define DDNUMB      (countT)0x360010b8
#define IDFILE      (countT)0xbdf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverHireF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200de.1.0.html\"\>definition\</A\>
U: support cHowP > 0 (arguments are not currently supported)
the driver will receive 1+cHowP arguments
 argument[0] will be postNameP
 argument[1] will be ppostHowP[ 0 ]
 argument[2] will be ppostHowP[ 1 ], etc.
arguments
 tinP
 postNameP
 cHowP
 ppostHowP
*/
/**/

/*1*/voidT thirdC::osDriverHireF( tinS& tinP , const osTextT* const postNameP , const countT cHowP , const osTextT** ppostHowP )/*1*/
{
    ZE( countT , costn ) ;
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        __( cHowP ) ; //U: DEBUG CASE WHERE THERE ARE PARAMETERS
        __( cHowP && !ppostHowP ) ;
        if( POOP ) return ;
        costn = c_strlenIF( tinP , postNameP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT* , pc_ppostHow ) ;
    newF( tinP , LF , pc_ppostHow , 1 + cHowP ) ; ___( pc_ppostHow ) ; //ASSUME: sizeof( countT ) == sizeof( osTextT* )
    pc_ppostHow[ 0 ] = (countT)postNameP ;
    if( cHowP ) c_memcpyIF( tinP , (byteT*)&pc_ppostHow[ 1 ] , (byteT*)&ppostHowP[ 0 ] , sizeof( countT ) * cHowP ) ;

    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    __Z( hsm ) ;
    BOS( WHATgbo , BOSoK , OpenService( hsm , postNameP , SERVICE_ALL_ACCESS ) )
    SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
    __Z( hsv ) ;
    BOS( WHATgbo , BOSoK , StartService( hsv , 0 , 0 ) ) //U: DEBUG: __( !StartService( hsv , 1 + cHowP , (const osTextT**)pc_ppostHow ) ) ;

    if( tinP.bosFail ) { LOGrAW3( "StartService returned " , tinP.brcLath , "\r\n" ) ; }

    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
    BOSpOOP

    delF( tinP , pc_ppostHow ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b8.thirdc.osdriverhiref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b9.thirdc.osdriverfiref BEGIN
#define DDNAME       "3func.360010b9.thirdc.osdriverfiref"
#define DDNUMB      (countT)0x360010b9
#define IDFILE      (countT)0xbe0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriverFireF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200df.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::osDriverFireF( tinS& tinP , const osTextT* const postNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        if( POOP ) return ;
    }

    _IO_

    BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
    SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
    BOS( WHATgbo , BOSoK , OpenService( hsm , postNameP , SERVICE_ALL_ACCESS ) )
    SC_HANDLE hsv = (SC_HANDLE)tinP.brcRaw ;
    BOSpOOP
    SERVICE_STATUS info ;
    BOS( WHATgbo , BOSoK , ControlService( hsv , SERVICE_CONTROL_STOP , &info ) )

    if
    (
        tinP.bosFail
        &&
        !(
            tinP.brcLath == ERROR_SERVICE_REQUEST_TIMEOUT //A: ASSUME: ALL SERVICE PROCESSES ARE NOW GONE
            //tinP.brcLath == ERROR_SERVICE_NOT_ACTIVE ||
            //tinP.brcLath == ERROR_SERVICE_CANNOT_ACCEPT_CTRL //WILL SEE THIS IF STOP PENDING
        )
    )
    {
        __1 ;
    }

    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsv ) )
    BOSpOOP
    BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010b9.thirdc.osdriverfiref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ba.thirdc.doswritef BEGIN
#define DDNAME       "3func.360010ba.thirdc.doswritef"
#define DDNUMB      (countT)0x360010ba
#define IDFILE      (countT)0xbe1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosWriteF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e1.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosWriteF( tinS& tinP , const osTextT* const postP , const byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
    ZE( countT , idr ) ;
    dosOpenF( tinP , handle , idr , postP , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ | flOPENdETAILS_FAIL , ifcOPENhOW_nCeR ) ;
    dosWriteF( tinP , handle , pbP , cbP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ba.thirdc.doswritef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bc.thirdc.c_sqrtf BEGIN
#define DDNAME       "3func.360010bc.thirdc.c_sqrtf"
#define DDNUMB      (countT)0x360010bc
#define IDFILE      (countT)0xbe2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_sqrtF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e3.1.0.html\"\>definition\</A\>
*/
/**/

// FOR SPEED, THIS DEFINITION CONTAINS NO CALL TO OSo MACRO OR REFERENCE TO tinP

/*1*/measure04T thirdC::c_sqrtIF( const measure04T mP )/*1*/
{
    ZE( measure04T , _brcm04Raw ) ;
    BOSmEASURE04nOtIN( sqrt( mP ) )
    return _brcm04Raw ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bc.thirdc.c_sqrtf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bd.thirdc.s_readf BEGIN
#define DDNAME       "3func.360010bd.thirdc.s_readf"
#define DDNUMB      (countT)0x360010bd
#define IDFILE      (countT)0xbe3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_readF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e4.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT thirdC::s_readF( tinS& tinP , soulC& soulP , handleC& handleP , const flagsT flagsP , const countT time1P , const sCountT time2P , const countT idModeP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_

    if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_readF / reading finger") ) ;
    ZE( countT , finger ) ;
    s_readF( tinP , (byteT*)&finger , sizeof finger , handleP , flagsP , time1P , time2P , idModeP ) ;
    __( getNegAM( finger ) - FINGERnEG_SOULc ) ;

    if( !POOP )
    {
        if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_readF / reading idFormat") ) ;
        ZE( countT , idFormat ) ;
        s_readF( tinP , (byteT*)&idFormat , sizeof idFormat , handleP , flagsP , time1P , time2P , idModeP ) ;
        __( idFormat - 1 ) ; //CS:CODEsYNC: 10200e4 10200e4

        if( !POOP )
        {
            if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_readF / reading cbs") ) ;
            ZE( countT , cbs ) ;
            s_readF( tinP , (byteT*)&cbs , sizeof cbs , handleP , flagsP , time1P , time2P , idModeP ) ;

            if( !POOP )
            {
                if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_readF [cbs]:    ")+TF2(cbs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                ZE( byteT* , pbs ) ;
                newF( tinP , LF , pbs , 3 * sizeof( countT ) + cbs ) ; ___( pbs ) ;
                if( pbs )
                {
                    if( tinP.pcUtility[ 0 ] ) tinP.pEther->traceF( tinP , T("s_readF / reading cbs bytes (the ed image)") ) ;
                    putNegAM( ((countT*)pbs)[ 0 ] , FINGERnEG_SOULc ) ;
                    ((countT*)pbs)[ 1 ] = 1 ; //CS:CODEsYNC: 10200e4 10200e4
                    ((countT*)pbs)[ 2 ] = cbs ;
                    if( cbs ) s_readF( tinP , pbs + 3 * sizeof( countT ) , cbs , handleP , flagsP , time1P , time2P , idModeP ) ;
                    soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbs , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                }
                delF( tinP , pbs ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bd.thirdc.s_readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bf.thirdc.s_writef BEGIN
#define DDNAME       "3func.360010bf.thirdc.s_writef"
#define DDNUMB      (countT)0x360010bf
#define IDFILE      (countT)0xbe4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e6.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::s_writeF( tinS& tinP , handleC& handleP , soulC& soulP , const countT idModeP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    s_writeF( tinP , handleP , WS( soulP ) , idModeP ) ; //ASSUME: countT IS 4 BYTES ON THE CURRENT HARDWARE
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010bf.thirdc.s_writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c0.thirdc.doswritef BEGIN
#define DDNAME       "3func.360010c0.thirdc.doswritef"
#define DDNUMB      (countT)0x360010c0
#define IDFILE      (countT)0xbe5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
\<A HREF=\"6.$dosWriteF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e7.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosWriteF( tinS& tinP , const handleC& handleP , soulC& soulP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_
    dosWriteF( tinP , handleP , WS( soulP ) ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c0.thirdc.doswritef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c1.thirdc.dosreadf BEGIN
#define DDNAME       "3func.360010c1.thirdc.dosreadf"
#define DDNUMB      (countT)0x360010c1
#define IDFILE      (countT)0xbe6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e8.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT thirdC::dosReadF( tinS& tinP , soulC& soulP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( byteT* , pbs ) ;
    {
        {
            ZE( countT , finger ) ;
            countT cbf = sizeof finger ;
            dosReadF( tinP , (byteT*)&finger , cbf , handleP ) ;
            ___( getNegAM( finger ) - FINGERnEG_SOULc ) ;
        }

        ZE( countT , cbs ) ;
        countT cbr = sizeof cbs ;
        dosReadF( tinP , (byteT*)&cbs , cbr , handleP ) ;
        newF( tinP , LF , pbs , sizeof( countT ) + cbs ) ; ___( pbs ) ;
        if( pbs ) *(countT*)pbs = cbs ;
        dosReadF( tinP , pbs + sizeof( countT ) , cbs , handleP ) ;
    }

    soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbs , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
    delF( tinP , pbs ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c1.thirdc.dosreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c2.thirdc.osclipboardreadf BEGIN
#define DDNAME       "3func.360010c2.thirdc.osclipboardreadf"
#define DDNUMB      (countT)0x360010c2
#define IDFILE      (countT)0xbe7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osClipboardReadF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200e9.1.0.html\"\>definition\</A\>
the caller must grab the clipboard before calling me, and let go afterward
queries the contents of the system clipboard
evaluates to the length of the returned string, excluding the null terminator
if no text is available on the clipboard, postP remains 0, i evaluate to 0, and impotence does not occur
arguments
 tinP
 postP
  must be 0
*/
/**/

/*1*/countT thirdC::osClipboardReadF( tinS& tinP , osTextT*& postP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __NZ( postP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , costx ) ;

    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , IsClipboardFormatAvailable( CF_TEXT ) )
        if( !tinP.bosFail )
        {
            BOS( WHATgbo , BOSoK , GetClipboardData( CF_TEXT ) )
            if( !tinP.bosFail )
            {
                HANDLE handle = (HANDLE)tinP.brcRaw ;
                {
                    BOS( WHATgbo , BOSoK , GlobalLock( handle ) )
                    if( !tinP.bosFail )
                    {
                        char* posti = (char*)tinP.brcRaw ;
                        costx = c_strlenIF( tinP , posti ) ;    
                        newF( tinP , LF , postP , costx + 1 ) ; ___( postP ) ;
                        thirdC::c_strncpyIF( tinP , postP , posti , costx + 1 ) ;
                        BOS( WHATgbo , BOSoK , GlobalUnlock( handle ) )
                        BOSpOOP
                    }
                }
            }
        }

    #endif

    return costx ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c2.thirdc.osclipboardreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c3.thirdc.osclipboardwritef BEGIN
#define DDNAME       "3func.360010c3.thirdc.osclipboardwritef"
#define DDNUMB      (countT)0x360010c3
#define IDFILE      (countT)0xbe8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osClipboardWriteF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ea.1.0.html\"\>definition\</A\>
the caller must grab the clipboard before calling me, and let go afterward
replaces the contents of the system clipboard
arguments
 tinP
 postP
  must not be 0
  must be null terminated
*/
/**/

/*1*/voidT thirdC::osClipboardWriteF( tinS& tinP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_


    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , EmptyClipboard() )
        BOSpOOP

        ZE( HGLOBAL , handle ) ;
        {
            const countT costax = c_strlenIF( tinP , postP ) + 1 ;
            BOS( WHATgbo , BOSoK , GlobalAlloc( GMEM_MOVEABLE | GMEM_DDESHARE , costax ) )
            BOSpOOP
            if( !POOP )
            {
                handle = (HGLOBAL)tinP.brcRaw ;
                BOS( WHATgbo , BOSoK , GlobalLock( handle ) )
                BOSpOOP
                if( !POOP )
                {
                    osTextT* postx = (osTextT*)tinP.brcRaw ;
                    thirdC::c_strncpyIF( tinP , postx , postP , costax ) ;

                    BOSdOnOTtEST( WHATgbo , GetLastError() )

                    BOSfICKLE( WHATgbo , BOSoK , GlobalUnlock( handle ) , tinP.brcRaw )
                    BOSpOOP
                }
            }
        }

        BOS( WHATgbo , BOSoK , SetClipboardData( CF_TEXT , handle ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c3.thirdc.osclipboardwritef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c4.thirdc.osclipboardflavorsf BEGIN
#define DDNAME       "3func.360010c4.thirdc.osclipboardflavorsf"
#define DDNUMB      (countT)0x360010c4
#define IDFILE      (countT)0xbe9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osClipboardFlavorsF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200eb.1.0.html\"\>definition\</A\>
the caller must grab the clipboard before calling me, and let go afterward
evaluates to the number of flavors available of the data that is on the clipboard
arguments
 tinP
*/
/**/

/*1*/countT thirdC::osClipboardFlavorsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_

    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , CountClipboardFormats() )
        countT cFlavors = tinP.brcRaw ;

    #endif
    return cFlavors ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c4.thirdc.osclipboardflavorsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c5.thirdc.osclipboardgrabf BEGIN
#define DDNAME       "3func.360010c5.thirdc.osclipboardgrabf"
#define DDNUMB      (countT)0x360010c5
#define IDFILE      (countT)0xbea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osClipboardGrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ec.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::osClipboardGrabF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            for(;;)
            {
                BOS( WHATgbo , BOSoK , OpenClipboard( 0 ) )
                if( !tinP.bosFail ) break ;
                ++ s ; dosSleepIF( tinP , TUCK * 0x40 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c5.thirdc.osclipboardgrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c6.thirdc.osclipboardletgof BEGIN
#define DDNAME       "3func.360010c6.thirdc.osclipboardletgof"
#define DDNUMB      (countT)0x360010c6
#define IDFILE      (countT)0xbeb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osClipboardLetGoF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ed.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::osClipboardLetGoF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_

    #ifdef __OS2__

        //U:

    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , CloseClipboard() )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c6.thirdc.osclipboardletgof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c7.thirdc.dosfindfileordirf BEGIN
#define DDNAME       "3func.360010c7.thirdc.dosfindfileordirf"
#define DDNUMB      (countT)0x360010c7
#define IDFILE      (countT)0xbec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosFindFileOrDirF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200ee.1.0.html\"\>definition\</A\>
like dosFindFileOrDirPrivateF except files for which a ".!writing" tagfile exists are ignored
arguments
 tinP
 pInfoFileP
 handleP
 postLikeP
  must not be 0
  can be a file name (no terminating '\' stroke)
  can be a directory name (terminating '\' stroke is present)
  exception: cannot be a root directory, e.g. "?:\"
*/
/**/

/*1*/voidT thirdC::dosFindFileOrDirF( tinS& tinP , infoFileS*& pInfoFileP , handleC& handleP , const osTextT* const postLikeP )/*1*/
{
    const osTextT postTag[] = ".!writing.*" ;

    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postLikeP ) ;
        if( POOP ) return ;
        if( postLikeP[ 1 ] != '\\' )            //20190826@0902: ACCOMMODATE NETBIOS FILE NAMES OF THE FORM "\\netbiosname\disk\path\short"
        {
            __( postLikeP[ 1 ] - ':' ) ;
        }
        __( !postLikeP[ 2 ] ) ;
        __(  postLikeP[ 2 ] && !postLikeP[ 3 ] ) ;
        __NZ( pInfoFileP ) ;
        __( !!c_strstrIF( tinP , postLikeP , postTag ) ) ;
        if( POOP ) return ;
    }

    _IO_
    {
        while( !*this )
        {
            boolT bCloaked = dosFindFileOrDirPrivateF( tinP , pInfoFileP , handleP , postLikeP ) ; ___( pInfoFileP ) ;
            if( !pInfoFileP ) break ;

            //U:: BUG: (DESIGN PROBLEM) CLOAK CAN ONLY SERVICE WO CLIENT AT A TIME FOR A GIVEN FOLDER, SO MY ATTEMPT TO FIND A WRITING TAG FILE WOULD CAUSE A DEADLOCK
            //U:: BUG: BEHAVIOR SHOULD BE INVARIANT WRT bCloaked, BUT DUE TO THE BUG STATED ON THE PREVIOUS LINE, I CANNOT CHECK FOR A WRITING TAG

            ZE( boolT , bWriting ) ;
            if( !bCloaked && pInfoFileP->postOsName && pInfoFileP->postOsName[ c_strlenIF( pInfoFileP->postOsName ) - 1 ] != '\\' )  // IF NOT A DIRECTORY
            {
                OStEXT(  ostot , 0x200 )
                OStEXTA( ostot , pInfoFileP->postOsName ) ;
                OStEXTA( ostot , postTag ) ;

                ZE( osTextT* , postc ) ;
                newF( tinP , LF , postc , ostot.costF() + 1 ) ; ___( postc ) ;
                thirdC::c_strncpyIF( tinP , postc , ostot , ostot.costF() + 1 ) ;

                ZE( infoFileS* , pInfoTag ) ;
                handleC hTag( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                dosFindFileOrDirPrivateF( tinP , pInfoTag , hTag , postc ) ; ___( pInfoTag ) ;
                delF( tinP , postc ) ;
                if( pInfoTag )
                {
                    bWriting = 1 ;
                    DEL( pInfoTag ) ;
                }
            }

            if( !bWriting ) break ;
            else            DEL( pInfoFileP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c7.thirdc.dosfindfileordirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c9.thirdc.s_writef BEGIN
#define DDNAME       "3func.360010c9.thirdc.s_writef"
#define DDNUMB      (countT)0x360010c9
#define IDFILE      (countT)0xbed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f0.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::s_writeF( tinS& tinP , handleC& handleP , const countT idPortP , const nicNameC nicNameP , soulC& soulP , const countT idModeP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_
    s_writeF( tinP , handleP , idPortP , nicNameP , WS( soulP ) , idModeP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010c9.thirdc.s_writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010cc.thirdc.doscopyf BEGIN
#define DDNAME       "3func.360010cc.thirdc.doscopyf"
#define DDNUMB      (countT)0x360010cc
#define IDFILE      (countT)0xbee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosCopyF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f3.1.0.html\"\>definition\</A\>
arguments
 postNewP
 postOldP
 cTriesP
*/

/**//*1*/voidT thirdC::dosCopyF( tinS& tinP , const osTextT* const postNewP , const osTextT* const postOldP , countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNewP ) ;
        __Z( postOldP ) ;
        if( POOP ) return ;
    }

    _IO_
    const boolT bNoQuitEarly = !cTriesP ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        do
        {
            #ifdef __OS2__
                BOS( WHATsfw , BOSfAIL , DosCopy( postOldP , postNewP ) ) //U: VERIFY THAT THIS IS THE CORRECT API CALL
            #elif defined( __NT__ )
                BOS( WHATsfw , BOSoK , CopyFile( postOldP , postNewP , 0 ) )
            #endif

            if( tinP.bosFail )
            {
                BOSdOnOTtEST( WHATgbo , GetLastError() )
                tinP.brcQuery = tinP.brcRaw ;
            }

            if( !tinP.bosFail ) break ;
            else if( ( !cTriesP || cTriesP > 1 ) )
            {
                etherC* pEtRock = &etherC::etRockIF( tinP ) ;
                if( pEtRock ) pEtRock->traceF( tinP , T("dosCopyF [brcQuery,cTries,new,old]: ")+TF2(tinP.brcQuery,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cTriesP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(postNewP)+T("    ")+T(postOldP) ) ;

                ++ s ; dosSleepIF( tinP , TOCK >> 2 ) ;
            }
        }
        while( !POOP && ( bNoQuitEarly || ( cTriesP && -- cTriesP ) ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010cc.thirdc.doscopyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ce.thirdc.s_gethostbynamef BEGIN
#define DDNAME       "3func.360010ce.thirdc.s_gethostbynamef"
#define DDNUMB      (countT)0x360010ce
#define IDFILE      (countT)0xbef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$s_getHostByNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f5.1.0.html\"\>definition\</A\>
impotence will not occur if the domain name server replies "not found"
caller must test to see whether stP contains a plate
 if a plate is present, it is guaranteed to contain a nonze nicName value
it is illegal to refer to this symbol in the definition of an adam
use dnsNicNamesF instead
*/
/**/

//CODEsYNCH: 00100de 10200f5: NICnAMElOCAL MUST BE THE VALUE THAT IS RETURNED BY gethostbyname WHEN NO ADAPTERS ARE ACTIVE

/*1*/voidT thirdC::s_getHostByNameF( tinS& tinP , stackC& stP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( stP ) ;
        __( stP.idTypeF( tinP ) - ifcSTACKtYPE_PTR_nicNameC ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    _IO_

    countT pca[ TUCK >> 2 ] ;       //THIS WILL NEED TO BE ENLARGED TO SUPPORT A NAME WITH MANY ADDRESSES
                                    //WO WAY TO DO THIS IS TO USE OO POWER ALLOCATION (ADD A RETURN VALUE TO c_getaddrinfoF TO REVEAL HOW MUCH BUFFER LENGTH IS NEEDED)
    c_getaddrinfoF( (byteT*)pca , sizeof pca , postP ) ;

    ZE( boolT , bDone ) ;
    for( countT offi = 0 ; !bDone && offi < sizeof pca / sizeof pca[ 0 ] ; offi ++ )
    {
        switch( pca[ offi ] )
        {
            case 0x11111111 :
            {
                bDone = 1 ;
                break ;
            }
            case 0x44444444 :
            {
                BOSdOnOTtEST( WHATgbo , ntohl( pca[ ++ offi ] ) )
                countT nn1 = tinP.brcRaw ;

                nicNameC* pYou = new( 0 , tinP , LF ) nicNameC( nn1 , 0xffff ) ;    //0xffff IS TO MAP THIS IPv4 ADDRESS TO IPv6
                if( pYou )
                {
                    if( tinP.pEther ) tinP.pEther->traceF( tinP , T("s_getHostByNameF [*pYou,postP]:    ")+T(*pYou)+T("    ")+T(postP) ) ;
                    stP << pYou ;
                }

                break ;
            }
            case 0x66666666 :
            {
                BOSdOnOTtEST( WHATgbo , ntohl( pca[ ++ offi ] ) )
                countT nn4 = tinP.brcRaw ;

                BOSdOnOTtEST( WHATgbo , ntohl( pca[ ++ offi ] ) )
                countT nn3 = tinP.brcRaw ;

                BOSdOnOTtEST( WHATgbo , ntohl( pca[ ++ offi ] ) )
                countT nn2 = tinP.brcRaw ;

                BOSdOnOTtEST( WHATgbo , ntohl( pca[ ++ offi ] ) )
                countT nn1 = tinP.brcRaw ;

                //U:: ENABLE AFTER TESTING (CURRENT CODE DOES NOT EXPECT nicNameC VALUES TO CONTAIN IPv6 VALUES)
                nicNameC* pYou = new( 0 , tinP , LF ) nicNameC( nn1 , nn2 , nn3 , nn4 ) ;
                if( pYou ) stP << pYou ;

                break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ce.thirdc.s_gethostbynamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010cf.thirdc.thirdwaittillquittingf BEGIN
#define DDNAME       "3func.360010cf.thirdc.thirdwaittillquittingf"
#define DDNUMB      (countT)0x360010cf
#define IDFILE      (countT)0xbf0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdWaitTillQuittingF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f6.1.0.html\"\>definition\</A\>
it is illegal to use this symbol in the definition of an adam
*/
/**/
/*1*/voidT thirdC::thirdWaitTillQuittingF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !thPrimeIF( tinP ) ) { ++ s ; thPrimeIF( tinP ).dosSleepIF( tinP , TOCK >> 4 ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010cf.thirdc.thirdwaittillquittingf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d0.thirdc.thirdlaunchlatethreadsf BEGIN
#define DDNAME       "3func.360010d0.thirdc.thirdlaunchlatethreadsf"
#define DDNUMB      (countT)0x360010d0
#define IDFILE      (countT)0xbf1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdLaunchLateThreadsF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200f7.1.0.html\"\>definition\</A\>
it is illegal to use this symbol in the definition of an adam
*/
/**/
/*1*/voidT thirdC::thirdLaunchLateThreadsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting ) ;
        if( POOP ) return ;
    }

    _IO_
    while( !*tinP.pAdamGlobal1->_thirdC_.pThLongLasting && *tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting )
    {
        ZE( countT , cTask ) ;
        *tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting >> cTask ;
        taskS* pTask = (taskS*)cTask ;
        if( pTask ) { ZE( countT , tnu ) ; c_beginthreadIF( tinP , tnu , pTask->tmF , (voidT*)pTask , pTask->cbStack /*U:NO LONGER SUPPORTED: , !!( F(pTask->flags) & flTHREADlAUNCH_ORPHAN )*/ ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d0.thirdc.thirdlaunchlatethreadsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d3.thirdc.thirdsignaturef BEGIN
#define DDNAME       "3func.360010d3.thirdc.thirdsignaturef"
#define DDNUMB      (countT)0x360010d3
#define IDFILE      (countT)0xbf2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdSignatureF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200fa.1.0.html\"\>definition\</A\>
arguments
 tinP
 pbP
  must not be 0
 cbP
  can be 0
  if 0 then pbP is assumed to point to a null terminated string of bytes and the length of this string, excluding the null, is used

*/
/**/
/*1*/countT thirdC::thirdSignatureF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pbP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    const countT cbData = cbP ? cbP : c_strlenIF( tinP , pbP ) ;
    const countT ccData = cbData / sizeof( countT ) ;
    const countT* const pcData = (countT*)pbP ;
    ZE( countT , sig ) ;
    ZE( countT* , pcUsed ) ;
    newF( tinP , LF , pcUsed , ccData ) ; ___( pcUsed ) ;
    if( pcUsed )
    {
        c_memsetIF( tinP , (byteT*)pcUsed , ccData * sizeof( countT ) ) ;
        ranUniC ranUni( tinP , ccData ) ;

        countT lag = cbData ; // THESE PRELIMINARY TERMS MAKE sig DEPEND UPON THE FILE SIZE AND THE FINAL PARTIAL countT OBJECT
        if( cbData - ccData * sizeof( countT ) )
        {
            ZE( countT , cDataLast ) ;
            c_memcpyIF( tinP , (byteT*)&cDataLast , (byteT*)( pcData + ccData ) , cbData - ccData * sizeof( countT ) ) ;
            sig += cDataLast - lag ;
            lag = cDataLast ;
        }

        ZE( countT , off ) ;
        countT cTries = ccData ;
        while( cTries -- )
        {
            off = ranUni ;
            if( !pcUsed[ off ] )
            {
                pcUsed[ off ] = 1 ;
                sig += pcData[ off ] - lag ;
                lag = pcData[ off ] ;
            }
        }

        for( off = 0 ; off < ccData ; off ++ )
        {
            if( !pcUsed[ off ] )
            {
                sig += pcData[ off ] - lag ;
                lag = pcData[ off ] ;
            }
        }
    }

    delF( tinP , pcUsed ) ;
    return sig ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d3.thirdc.thirdsignaturef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d4.thirdc.thirdinspectecvaluesf BEGIN
#define DDNAME       "3func.360010d4.thirdc.thirdinspectecvaluesf"
#define DDNUMB      (countT)0x360010d4
#define IDFILE      (countT)0xbf3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdInspectEcValuesF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200fb.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/countT thirdC::thirdInspectEcValuesF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , ecMerged ) ;
    if( tinP.pAdamGlobal1->_thirdC_.pStk_pThird )
    {
        ZE( countT , codeMax ) ;
        ZE( flagsT , flagAcc ) ;

        tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            thirdC* pThird = (thirdC*)tinP.pAdamGlobal1->_thirdC_.pStk_pThird->downF( tinP , hDown ) ;
            if( !pThird ) break ; // WILL HAPPEN IF *tinP.pAdamGlobal1->_thirdC_.pStk_pThird IS IMPOTENT

            countT ecOne = 0 ; //WAS POINTING TO third.ec
            countT ecFlag = ecOne &  fliEC_FLAGmASK ;
            countT ecCode = ecOne & ~fliEC_FLAGmASK ;

            if( codeMax < ecCode )
                codeMax = ecCode ; // ON SEPARATE LINE SO CAN SET BREAKPOINT
            flagAcc |= ecFlag ;
        }
        while( ~hDown ) ;
        tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;

        ecMerged  = codeMax ;
        ecMerged |= flagAcc ;

        {
            countT flagHigh = tinP.pAdamGlobal1->_thirdC_.ecMergedHighWater &  fliEC_FLAGmASK ;
            countT codeHigh = tinP.pAdamGlobal1->_thirdC_.ecMergedHighWater & ~fliEC_FLAGmASK ;

            if( codeHigh < codeMax ) codeHigh = codeMax ;
            flagHigh |= flagAcc ;

            tinP.pAdamGlobal1->_thirdC_.ecMergedHighWater  = codeHigh ;
            tinP.pAdamGlobal1->_thirdC_.ecMergedHighWater |= flagHigh ;
        }
    }
    return ecMerged ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d4.thirdc.thirdinspectecvaluesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d6.thirdc.thirdinspectecvaluessuspendf BEGIN
#define DDNAME       "3func.360010d6.thirdc.thirdinspectecvaluessuspendf"
#define DDNUMB      (countT)0x360010d6
#define IDFILE      (countT)0xbf4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdInspectEcValuesSuspendF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200fd.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT thirdC::thirdInspectEcValuesSuspendF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_thirdC_.pStk_pThird ) ;
        if( POOP ) return ;
    }

    _IO_
    tinP.pAdamGlobal1->_thirdC_.pStk_pThird->grabF( tinP , TAG( TAGiDnULL ) ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d6.thirdc.thirdinspectecvaluessuspendf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d7.thirdc.thirdinspectecvaluesresumef BEGIN
#define DDNAME       "3func.360010d7.thirdc.thirdinspectecvaluesresumef"
#define DDNUMB      (countT)0x360010d7
#define IDFILE      (countT)0xbf5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdInspectEcValuesResumeF.0.html\"\>instances\</A\>
\<A HREF=\"5.10200fe.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT thirdC::thirdInspectEcValuesResumeF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_thirdC_.pStk_pThird ) ;
        if( POOP ) return ;
    }

    _IO_
    tinP.pAdamGlobal1->_thirdC_.pStk_pThird->ungrabF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d7.thirdc.thirdinspectecvaluesresumef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d9.thirdc.third_bwatchful_f BEGIN
#define DDNAME       "3func.360010d9.thirdc.third_bwatchful_f"
#define DDNUMB      (countT)0x360010d9
#define IDFILE      (countT)0xbf6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_bWatchfulI_F.0.html\"\>instances\</A\>
\<A HREF=\"5.1020100.1.0.html\"\>definition\</A\>
this function must be used to refer to the bWatchfulI static member of thirdC
it is illegal to refer to tinP.pAdamGlobal1->_thirdC_.bWatchful directly in the definition of an adam
*/
/**/

/*1*/countT& thirdC::third_bWatchfulI_F( tinS& tinP )/*1*/
{
    SCOOP
    _IO_

    return tinP.pAdamGlobal1->_thirdC_.bWatchful ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010d9.thirdc.third_bwatchful_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010db.thirdc.third_bcareful_f BEGIN
#define DDNAME       "3func.360010db.thirdc.third_bcareful_f"
#define DDNUMB      (countT)0x360010db
#define IDFILE      (countT)0xbf7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_bCarefulI_F.0.html\"\>instances\</A\>
\<A HREF=\"5.1020102.1.0.html\"\>definition\</A\>
this function must be used to refer to the tinP.pAdamGlobal1->_thirdC_.bCareful static member of thirdC
it is illegal to refer to tinP.pAdamGlobal1->_thirdC_.bCareful directly in the definition of an adam
*/
/**/

/*1*/countT& thirdC::third_bCarefulI_F( tinS& tinP )/*1*/
{
    SCOOP
    _IO_

    return tinP.pAdamGlobal1->_thirdC_.bCareful ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010db.thirdc.third_bcareful_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010dc.thirdc.osthreadf BEGIN
#define DDNAME       "3func.360010dc.thirdc.osthreadf"
#define DDNUMB      (countT)0x360010dc
#define IDFILE      (countT)0xbf8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osThreadF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020103.1.0.html\"\>definition\</A\>
arguments
 tidP
 tmFP
  this symbol must be defined using the TASK macro
   example: TASK( tmF )
 pSgnDoneP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100f6.flTHREADlAUNCH!||
 cbStackP
 c1P
 c2P
 c3P
 c4P
 c5P
 c6P
 c7P
 c8P
*/
/**/

/*1*/voidT thirdC::osThreadF( tinS& tinP , countT& tidP , voidT* const tmFP , signC* const pSgnDoneP , const flagsT flagsP , const countT cbStackP , const countT c1P , const countT c2P , const countT c3P , const countT c4P , const countT c5P , const countT c6P , const countT c7P , const countT c8P )/*1*/
{
    SCOOP
    ZE( boolT , bSkip ) ;
    IFbEcAREFUL
    {
        if( POOP )  bSkip = 1 ;
        __( !bSkip && cbStackP && cbStackP < 1024 ) ;
        __( !bSkip && !tinP.pAdamGlobal1->_thirdC_.pThPrime ) ;
        if( POOP )  bSkip = 1 ;
        if( !bSkip ) { FV( flTHREADlAUNCH , flagsP ) ; }
        __( !bSkip && !tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting ) ;
        if( POOP )  bSkip = 1 ;
    }

    if( !bSkip )
    {
        _IO_
        taskS* pTask = new( 0 , tinP , LF ) taskS( tinP , tmFP , pSgnDoneP , cbStackP ? cbStackP : ( TOCK << 4 ) , flagsP , c1P , c2P , c3P , c4P , c5P , c6P , c7P , c8P ) ; ___( pTask ) ; //U::LEAKS
        if( pTask )
        {
            if( !( F(flagsP) & flTHREADlAUNCH_WHENqUITTING ) )
            {
                third.c_beginthreadIF( tinP , tidP , pTask->tmF , (voidT*)pTask , pTask->cbStack , flagsP ) ;
            }
            else *tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting << (countT)pTask ;
        }
    }
    else if( pSgnDoneP ) pSgnDoneP->giveF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010dc.thirdc.osthreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010de.thirdc.dosresumethreadf BEGIN
#define DDNAME       "3func.360010de.thirdc.dosresumethreadf"
#define DDNUMB      (countT)0x360010de
#define IDFILE      (countT)0xbf9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosResumeThreadF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020105.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosResumeThreadF( tinS& tinP , const countT tidP )/*1*/
{
    SCOOP
    //WORKS UNCONDITIONALLY SO THAT GRABBING/UNGRABBING WILL WORK
    //IFbEcAREFUL
    //{
    //    if( POOP ) return ;
    //    __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
    //    __Z( tidP ) ;
    //    if( POOP ) return ;
    //}

    _IO_

    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
    handle.osF( ifcIDtYPEhANDLE_THREAD , *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
    __Z( handle ) ;
    if( ~handle )
    {
        countT osh = handle.osF( ifcIDtYPEhANDLE_THREAD ) ;

        #if defined( __NT__ )
            BOS( WHATgbo , BOSmAXcOUNTT , ResumeThread( (HANDLE)osh ) )
        #endif

        //if( !tinP.brcQuery ) { CONoUTrAW( "NOT FROZEN\r\n" ) ; }

        __( !tinP.brcQuery ) ;
        //DISABLED SO UTILITY APIS CAN SUSPEND/RESUME ARBITRARY THREADS IN THE PROCESS: __( tinP.brcLath > 1 ) ;
    }
    handle.resetF() ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010de.thirdc.dosresumethreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e0.thirdc.dosgetthreadcontextf BEGIN
#define DDNAME       "3func.360010e0.thirdc.dosgetthreadcontextf"
#define DDNUMB      (countT)0x360010e0
#define IDFILE      (countT)0xbfa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetThreadContextF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020107.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
 this function is provisional and is subject to change
  the current version is hardware specific (i386)
arguments
 tinP
 pbP
  must be 0
 cbP
  must be 0
 tidP
  must not be 0
  must have been launched by the calling process (including the primary thread of a launched process)
*/
/**/

//THIS API IS OBSOLETE.  USE thirdC::dosReadThreadContextF

//U:
#if defined( NEVERdEFINED )

/*1*/voidT thirdC::dosGetThreadContextF( tinS& tinP , byteT*& pbP , countT& cbP , const countT tidP )/*1*/
{
    SCOOP
    ZE( countT* , pcb ) ; //U:
    *pcb = 2 ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __1 //U: THIS CANNOT BE SUPPORTED UNTIL FIGURE OUT WHY STUFFING *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle IN thirdC::ct CAUSES WO DRIVER TO FAIL TO INSTALL
        __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
        __NZ( pbP ) ;
        __( cbP ) ;
        __Z( tidP ) ;
        if( POOP ) return ;
    }

    _IO_

    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
    HANDLE osh = (HANDLE)(countT)*tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ;
    __Z( osh ) ;
    if( !POOP )
    {
        #if defined( __NT__ )

            CONTEXT info ;
            c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;
            info.ContextFlags = CONTEXT_CONTROL ;

            BOS( WHATgbo , BOSoK , GetThreadContext( osh , &info ) )
            BOSpOOP
            if( !POOP )
            {
                cbP = sizeof info ;
                newF( tinP , LF , pbP , cbP ) ; ___( pbP ) ;
                c_memcpyIF( tinP , pbP , (byteT*)&info , cbP ) ;
            }

        #endif
    }
    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e0.thirdc.dosgetthreadcontextf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e1.thirdc.dossetthreadcontextf BEGIN
#define DDNAME       "3func.360010e1.thirdc.dossetthreadcontextf"
#define DDNUMB      (countT)0x360010e1
#define IDFILE      (countT)0xbfb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetThreadContextF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020108.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
 this function is provisional and is subject to change
  the current version is hardware specific (i386)
arguments
 tinP
 pbP
  must not be 0
  must point to a valid image of a context record
   obtain an image using dosGetThreadContextF
   then modify that image using the dosSetThreadContextField* functions
   then call me, passing me the resulting image
 cbP
 tidP
  must not be 0
  must have been launched by the calling process (including the primary thread of a launched process)
*/
/**/

//U:
#if defined( NEVERdEFINED )

/*1*/voidT thirdC::dosSetThreadContextF( tinS& tinP , const byteT* const pbP , const countT cbP , const countT tidP )/*1*/
{
    SCOOP
    ZE( countT* , pcb ) ; //U:
    *pcb = 2 ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __1 //U: THIS CANNOT BE SUPPORTED UNTIL FIGURE OUT WHY STUFFING *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle IN thirdC::ct CAUSES WO DRIVER TO FAIL TO INSTALL
        __( !tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ) ;
        __Z( pbP ) ;
        #if defined( __NT__ )
            __( cbP - sizeof( CONTEXT ) ) ;
        #endif
        __Z( tidP ) ;
        if( POOP ) return ;
    }

    _IO_

    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_thirdC_.lOsTid = tidP ;
    HANDLE osh = (HANDLE)(countT)*tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ;
    __Z( osh ) ;
    if( !POOP )
    {
        #if defined( __NT__ )

            //U: __( !SetThreadContext( osh , (CONTEXT*)pbP ) ) ;
            BOS( WHATgbo , BOSoK , SetThreadContext( osh , (CONTEXT*)pbP ) )

        #endif
    }
    tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e1.thirdc.dossetthreadcontextf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e2.thirdc.dossetthreadcontextfield_singlestep_f BEGIN
#define DDNAME       "3func.360010e2.thirdc.dossetthreadcontextfield_singlestep_f"
#define DDNUMB      (countT)0x360010e2
#define IDFILE      (countT)0xbfc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetThreadContextField_singleStep_F.0.html\"\>instances\</A\>
\<A HREF=\"5.1020109.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
 this function is provisional and is subject to change
  the current version is hardware specific (i386)
arguments
 tinP
 pbP
  must not be 0
  must point to a valid image of a context record
   obtain an image using dosGetThreadContextF
   then modify that image using the dosSetThreadContextField* functions such as me
 cbP
*/
/**/

//U:
#if defined( NEVERdEFINED )

/*1*/voidT thirdC::dosSetThreadContextField_singleStep_F( tinS& tinP , byteT* const pbP , const countT cbP , const boolT bOnP )/*1*/
{
    SCOOP
    ZE( countT* , pcb ) ; //U:
    *pcb = 2 ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __1 //U: THIS CANNOT BE SUPPORTED UNTIL FIGURE OUT WHY STUFFING *tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle IN thirdC::ct CAUSES WO DRIVER TO FAIL TO INSTALL
        __Z( pbP ) ;
        #if defined( __NT__ )
            __( cbP - sizeof( CONTEXT ) ) ;
        #endif
        if( POOP ) return ;
    }

    _IO_

    #if defined( __NT__ )

        //U: ASSUME: I386

        CONTEXT& info = *(CONTEXT*)pbP ;
        __( !( info.ContextFlags & CONTEXT_CONTROL ) ) ;
        if( !POOP )
        {
            countT& regEFLAGS = *(countT*)&info.EFlags ;
            if( bOnP ) regEFLAGS |= 0x00010100 ;
            else       regEFLAGS &= 0xfffefeff ;
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e2.thirdc.dossetthreadcontextfield_singlestep_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e5.thirdc.thirddiscardtinf BEGIN
#define DDNAME       "3func.360010e5.thirdc.thirddiscardtinf"
#define DDNUMB      (countT)0x360010e5
#define IDFILE      (countT)0xbfd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$thirdDiscardTinF.0.html\"\>instances\</A\>
\<A HREF=\"5.102010c.1.0.html\"\>definition\</A\>
arguments
 (none)
*/
/**/

//MY BEHAVIOR IS NOT AFFECTED BY IMPOTENCE

/*1*/voidT thirdC::thirdDiscardTinF( voidT )/*1*/
{
    TINSL
    {
        SCOOP
        IFbEcAREFUL
        {
            __( !tinP.pAdamGlobal1->_thirdC_.pThPrime ) ;
            __( !( F(tinP.flags) & flTINs_REGISTERED ) ) ;
        }
    }

    {
        //IN_T
        tinP.flags &= ~( F(flTINs_REGISTERED) ) ;

        tinS* pDoomed = &tinP ;

        if( *(countT*)&pDoomed )
        {
            THREADmODE2oFF( flTHREADmODE2_DOnOTcaLLdELif )
            delete pDoomed ;
            TINSL
            THREADmODE2rESTORE
            pDoomed = 0 ;
        }

        //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010e5.thirdc.thirddiscardtinf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ea.thirdc.third_pethercontainsme_f BEGIN
#define DDNAME       "3func.360010ea.thirdc.third_pethercontainsme_f"
#define DDNUMB      (countT)0x360010ea
#define IDFILE      (countT)0xbfe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_pEtherContainsMe_F.0.html\"\>instances\</A\>
\<A HREF=\"5.1020112.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/etherC* thirdC::third_pEtherContainsMe_F( voidT )/*1*/
{
    return pEtherContainsMe ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ea.thirdc.third_pethercontainsme_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010eb.thirdc.strbodylengthf BEGIN
#define DDNAME       "3func.360010eb.thirdc.strbodylengthf"
#define DDNUMB      (countT)0x360010eb
#define IDFILE      (countT)0xbff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strBodyLengthF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020113.1.0.html\"\>definition\</A\>
evaluates to the number of countT objects in the string, excluding the terminating null countT object
arguments
 pcP
*/
/**/

/*1*/countT thirdC::strBodyLengthF( tinS& tinP , const countT* pcP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , cc ) ;
    if( !POOP ) __Z( pcP ) ;

    if( !POOP )
    {
        while( !strFEndF( tinP , pcP ) )
        {
            cc ++ ;
            pcP ++ ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010eb.thirdc.strbodylengthf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ec.thirdc.strfendf BEGIN
#define DDNAME       "3func.360010ec.thirdc.strfendf"
#define DDNUMB      (countT)0x360010ec
#define IDFILE      (countT)0xc00


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strFEndF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020114.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 pcP
  must be not 0
 cnP
*/
/**/

/*1*/boolT thirdC::strFEndF( tinS& tinP , const countT* const pcP , const countT cnP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pcP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    countT cnBingo = cnP + 1 ;
    ZE( countT , off ) ;
    ZE( boolT , bEnd ) ;
    while( !pcP[ off ] && off <= cnP )
    {
        if( ++ off > cnP ) bEnd = 1 ;
    }
    if( tinP.fingerprint ) ;
    return bEnd ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ec.thirdc.strfendf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ed.thirdc.strcomparef BEGIN
#define DDNAME       "3func.360010ed.thirdc.strcomparef"
#define DDNUMB      (countT)0x360010ed
#define IDFILE      (countT)0xc01


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strCompareF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020115.1.0.html\"\>definition\</A\>
evaluates to a positive number iff pc1P is "greater than" pc2P
 evaluates to the difference within the first pair of distinct countT objects
 if one of the strings is exhausted without finding a difference, evaluates to the difference in length, in countT objects, of the two strings
arguments
 pc1P
  must not be 0
 pc2P
  must not be 0
 ccP
  can be 0
   if 0 then pc1P and pc2P are assumed to point to null terminated strings of countT objects
   if not 0 then pc1P and pc2P are assumed to each point to ccP countT objects
 ccMaxP
  can be 0
  if not 0 then only ccMaxP element pairs will be inspected
 pcFilterP
  can be 0
   if 0 then all bits are used for each comparison
   if not 0 then can point to a string of any length
    each element specifies the bits to be ignored (i.e. are wild) in the corresponding comparision of a pc1P pc2P element pair
  examples
   pcFilterP       is  0: normal comparison of element pairs using all bits
   pcFilterP[ xx ] is -1: the element pair at offset xx is not inspected
   pcFilterP[ xx ] is  0: normal comparison of the element pair at offset xx
   pcFilterP[ xx ] is -2: all bits are ignored except the low bit (use for filtering on "odd" or "even")
  how to
   normal comparison: pcFilterP = 0 ;
   ignore the element pair at offset xx: pcFilterP[ xx ] = -1 ;
   ignore all pairs at or above offset xx: 
 ccFilterP
  can be 0
   if 0 then pcFilterP is assumed to be null terminated
   else pcFilterP must point to ccFilterP countT objects
 bReverseP
  if 0 then compares from left to right, from low address to high address
  if 1 then compares from right to left, from high address to low address
   in this case, ccP must not be 0
   use bReverseP == 1 to compare, for example, 128-bit numeric values
U::THE FILTER STUFF IS NOT CODED UP YET
*/
/**/

/*1*/sCountT thirdC::strCompareF( tinS& tinP , const countT* const pc1P , const countT* const pc2P , const countT ccP , const countT ccMaxP , const countT* const pcFilterP , const countT ccFilterP , const boolT bReverseP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( pc1P ) ;
        __Z( pc2P ) ;
        __( bReverseP && !ccP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( sCountT , sgn ) ;
    ZE( countT  , ccc ) ;
    ZE( sCountT , cc1mcc2 ) ;
    if( ccP ) ccc = ccP ;
    else
    {
        const countT cc1 = strBodyLengthF( tinP , pc1P ) ;
        const countT cc2 = strBodyLengthF( tinP , pc2P ) ;
        cc1mcc2 = cc1 - cc2 ;
        ccc  = cc1 ;
        if( ccc > cc2 ) ccc = cc2 ;
    }

    if( ccMaxP && ccc > ccMaxP )
    {
        ccc = ccMaxP ;
        cc1mcc2 = 0 ;
    }

    const countT ccFilter = !pcFilterP
        ? 0
        : ccFilterP
            ? ccFilterP
            : strBodyLengthF( tinP , pcFilterP )
    ;
    if( bReverseP ) for( sCountT off = ccc - 1 ; !sgn && off >= 0  ; off -- )
    {
        countT filter = ~( pcFilterP && off < ccFilter ? pcFilterP[ off ] : 0 ) ;
        countT use1 = pc1P[ off ] & filter ;
        countT use2 = pc2P[ off ] & filter ;

             if( use1 < use2 ) sgn = - 1 ;
        else if( use1 > use2 ) sgn =   1 ;
    }
    else for( countT off = 0 ; !sgn && off < ccc ; off ++ )
    {
        countT filter = ~( pcFilterP && off < ccFilter ? pcFilterP[ off ] : 0 ) ;
        countT use1 = pc1P[ off ] & filter ;
        countT use2 = pc2P[ off ] & filter ;

             if( use1 < use2 ) sgn = - 1 ;
        else if( use1 > use2 ) sgn =   1 ;
    }

    if( !sgn && !ccP ) sgn = cc1mcc2 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ed.thirdc.strcomparef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ef.thirdc.osthreadostidf BEGIN
#define DDNAME       "3func.360010ef.thirdc.osthreadostidf"
#define DDNUMB      (countT)0x360010ef
#define IDFILE      (countT)0xc02


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osThreadOsTidF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020119.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT thirdC::osThreadOsTidF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_
    BOSdOnOTtEST( WHATgbo , GetCurrentThreadId() )
    return tinP.brcQuery ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010ef.thirdc.osthreadostidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010f1.thirdc.doscontinuemonitoringf BEGIN
#define DDNAME       "3func.360010f1.thirdc.doscontinuemonitoringf"
#define DDNUMB      (countT)0x360010f1
#define IDFILE      (countT)0xc03


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosContinueMonitoringF.0.html\"\>instances\</A\>
\<A HREF=\"5.102011f.1.0.html\"\>definition\</A\>
arguments
 tinP
 osTidP
 osPidP
 idCmdP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010146.ifcIDcMDeVENTmONITORED!||
*/
/**/

/*1*/voidT thirdC::dosContinueMonitoringF( tinS& tinP , const countT osTidP , const countT osPidP , const countT idCmdP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( osTidP ) ;
        __Z( osPidP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        ZE( countT , idCmdOs ) ;
        switch( idCmdP )
        {
            case ifcIDcMDmoNITOR_SKIPhANDLERS     : { idCmdOs = DBG_CONTINUE               ; break ; }
            case ifcIDcMDmoNITOR_DOhANDLERS       : { idCmdOs = DBG_EXCEPTION_NOT_HANDLED  ; break ; }
            default :
            {
                __( idCmdP ) ;
                __1
            }
        }

        BOS( WHATgbo , BOSoK , ContinueDebugEvent( osPidP , osTidP , idCmdOs ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010f1.thirdc.doscontinuemonitoringf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010f7.thirdc.dosgetcurrentdirf BEGIN
#define DDNAME       "3func.360010f7.thirdc.dosgetcurrentdirf"
#define DDNUMB      (countT)0x360010f7
#define IDFILE      (countT)0xc04


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosGetCurrentDirF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020128.1.0.html\"\>definition\</A\>
*/
/**//*1*/voidT thirdC::dosGetCurrentDirF( tinS& tinP , osTextT*& postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , costa ) ;
    dosGetCurrentDirIF( tinP , 0 , costa ) ;
    newF( tinP , LF , postP , costa ) ; ___( postP ) ;
    dosGetCurrentDirIF( tinP , postP , costa ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010f7.thirdc.dosgetcurrentdirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fa.thirdc.c_strconcatenatef BEGIN
#define DDNAME       "3func.360010fa.thirdc.c_strconcatenatef"
#define DDNUMB      (countT)0x360010fa
#define IDFILE      (countT)0xc05


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$c_strConcatenateF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012b.1.0.html\"\>definition\</A\>
evaluates to the length of the resulting string, excluding the null terminator
arguments
 tinP
 postToP
 ppostFromP
  must not be 0
  must be terminated by a 0
*/
/**//*1*/countT thirdC::c_strConcatenateF( tinS& tinP , osTextT*& postToP , const osTextT** const ppostFromP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( postToP ) ;
        __Z( ppostFromP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , costTo ) ;
    {
        ZE( countT , off ) ;
        ZE( countT , cFrom ) ;
        while( ppostFromP[ off ++ ] ) cFrom ++ ;

        for( off = 0 ; off < cFrom ; off ++ ) costTo += c_strlenIF( tinP , ppostFromP[ off ] ) ;

        newF( tinP , LF , postToP , costTo + 1 ) ; //CALLER MUST TAG: ___( postToP ) ;

        if( postToP ) *postToP = 0 ;
        for( off = 0 ; off < cFrom ; off ++ ) c_strcatIF( postToP  , ppostFromP[ off ] ) ;
    }

    return costTo ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fa.thirdc.c_strconcatenatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fc.thirdc.dosreadthreadcontextf BEGIN
#define DDNAME       "3func.360010fc.thirdc.dosreadthreadcontextf"
#define DDNUMB      (countT)0x360010fc
#define IDFILE      (countT)0xc06


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosReadThreadContextF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012d.1.0.html\"\>definition\</A\>
i retrieve the wo'th and lath items in the current stack frame
the wo'th item is the base of the current frame
the lath item is the most recently pushed item in the current frame
the values returned are guaranteed to be aligned on countT boundaries
the relative magnitude depends upon the cpu and on whether the operating system uses the stack frame layout that is "natural" for that cpu
 for windows nt running on Intel x86, pcLathP <= pcWothP
arguments
 tinP
 pcLathP
  contains the address of the most recently pushed countT object on the cpu's stack
 pcWothP
  contains the address of the wo'th countT object pushed onto the cpu's stack for the current stack frame
  *pcWothP contains the value of pcWothP for the previous cpu stack frame
  iow, pcWothP points to the "base" of the current stack frame, which in turn points to the base of the prior stack frame, and so on
 osHandleP
  must not be 0
  must be valid in the calling process
   the calling process need not be the process that contains the thread
*/
/**/

/*1*/voidT thirdC::dosReadThreadContextF( tinS& tinP , countT*& pcLathP , countT*& pcWothP , const countT osHandleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( osHandleP ) ;
        __NZ( pcLathP ) ;
        __NZ( pcWothP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        CONTEXT info ;
        //c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;
        info.ContextFlags = CONTEXT_CONTROL /* | CONTEXT_INTEGER | CONTEXT_SEGMENTS | CONTEXT_FLOATING_POINT | CONTEXT_DEBUG_REGISTERS */ ;
        BOS( WHATgbo , BOSoK , GetThreadContext( (voidT*)osHandleP , &info ) )
        BOSpOOP
        if( !POOP )
        {
            (countT&)pcLathP  = info.Esp ;
            (countT&)pcWothP = info.Ebp ;
        }

        // pcLathP CONTAINS THE VALUE OF esp, WHICH IS THE ADDRESS OF THE CONCEPTUALLY TOPMOST STACK SLOT (MOST RECENT WO PUSHED)
        //  ON I386, SLOTS ARE ALLOCATED DOWNWARD IN MEMORY SO pcLathP'S VALUE IS THE LOWEST VALUE USED IN MEMORY
        // pcWothP CONTAINS THE VALUE OF ebp, WHICH IS THE ADDRESS WHERE THE PREVIOUS VALUE OF ebp IS STORED
        // IT IS THE WO'TH VALUE PUSHED IN THE CURRENT STACK FRAME
        // THIS CAN BE VIEWED AS A HANDLE, WITH WHICH PREVIOUS STACK FRAMES CAN BE ACCESSED

        // CONTEXT_CONTROL          SS:SP, CS:IP, FLAGS, BP
        // CONTEXT_INTEGER          AX, BX, CX, DX, SI, DI
        // CONTEXT_SEGMENTS         DS, ES, FS, GS
        // CONTEXT_FLOATING_POINT   387 state
        // CONTEXT_DEBUG_REGISTERS  DB 0-3,6,7

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fc.thirdc.dosreadthreadcontextf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fe.thirdc.osregioninfof BEGIN
#define DDNAME       "3func.360010fe.thirdc.osregioninfof"
#define DDNUMB      (countT)0x360010fe
#define IDFILE      (countT)0xc07


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osRegionInfoF.0.html\"\>instances\</A\>
\<A HREF=\"5.102012f.1.0.html\"\>definition\</A\>
arguments
 tinP
 cBitsGrainP
  must be 0
  will be set to the number of low order bits that are never used in base addresses
  this value can change from call to call
   it reflects the current partition of the virtual address space for the specified process
  typical calculations
   countT cPages = cBitsGrainP ? 1 << sizeof( countT ) * SB - cBitsGrainP : 0 ;
    this cPages covers the entire address space
    i only analyse the lower half of the address space
     the upper half is, on nt, reserved for operating system use
 pbPageP
  must be 0
  will become the address of an array
  each element of the array will be set to the idRegion of the associated page
  the page size associated with this array is implied by cBitsGrainP
   this page size can change from call to call
   it is not associated with the operating system concept of "page"
  typical reference syntax: pbPageP[ c_pbl >> cBitsGrain ]
 pbRegionP
  typical reference syntax: pbRegionP[ pbPageP[ c_pbl >> cBitsGrainP ] ]
*/
/**/

struct ifInfoS
{
    countT  c_pbl ;
    countT  cb ;
    flagsT  fl ;

    countT  c_pbla ;
    flagsT  fla ;
}
;

/*1*/voidT thirdC::osRegionInfoF( tinS& tinP , countT& cBitsGrainP , byteT*& pbIdRegionP , byteT*& pbIdAllocP , vmRegionS*& pVmRegionP , vmRegionS*& pVmRegionAllocP , countT hProcessP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cBitsGrainP ) ;
        __NZ( pbIdRegionP ) ;
        __NZ( pbIdAllocP ) ;
        __NZ( pVmRegionP ) ;
        __NZ( pVmRegionAllocP ) ;
        __Z( hProcessP ) ;
        if( POOP ) return ;
    }

    _IO_

    stackC stInfo( tinP , third , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_byteT ) ;
    {
        ZE( countT , c_pbq ) ;
        ZE( countT , c_pbqLag ) ;
        const countT c_pbqEnd = 1 << sizeof( countT ) * SB - 1 ; // END OF NT APPLICATION MEMORY (LOW HALF OF ADDRESS DOMAIN)
        #if defined( __OS2__ )
            __1 //U:
        #elif defined( __NT__ )
            MEMORY_BASIC_INFORMATION osInfo ;
        #endif
        while( !third )
        {
            #if defined( __OS2__ )
                __1 //U:
            #elif defined( __NT__ )

                if( !POOP )
                {
                    BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                    BOS( WHATgbo , BOSoK , VirtualQueryEx( (HANDLE)hProcessP , (voidT*)c_pbq , &osInfo , sizeof osInfo ) )
                    countT cbw = tinP.brcRaw ;
                    if( tinP.bosFail )
                    {
                             if( tinP.brcLath == ERROR_INVALID_PARAMETER ) c_pbq = c_pbqEnd ;
                        else if( tinP.brcLath != ERROR_NOACCESS          )
                        {
                            __( tinP.brcLath ) ;
                            __1
                        }
                        else c_pbq += 0x1000 ; //ASSUME: REGIONS ARE ALIGNED ON NT PAGE BOUNDARIES (0x1000 IS THE SIZE OF AN NT PAGE)
                    }
                    else
                    {
                        __( sizeof osInfo - cbw ) ;
                        __( c_pbq - (countT)osInfo.BaseAddress ) ;

                        ZE( byteT* , pbInfo ) ;
                        newF( tinP , LF , pbInfo , sizeof( ifInfoS ) ) ; ___( pbInfo ) ;
                        if( pbInfo )
                        {
                            ifInfoS* pInfo = (ifInfoS*)pbInfo ;

                            pInfo->c_pbl  = (countT)osInfo.BaseAddress ;
                            pInfo->cb     =         osInfo.RegionSize ;
                            pInfo->c_pbla = (countT)osInfo.AllocationBase ;
                            pInfo->fla    = pInfo->fl = flVM_null ;

                            if( osInfo.State             & MEM_FREE               ) pInfo->fl |= flVM_ALLOCfREE ;
                            if( osInfo.State             & MEM_RESERVE            ) pInfo->fl |= flVM_ALLOCrESERVED ;
                            if( osInfo.State             & MEM_COMMIT             ) pInfo->fl |= flVM_ALLOCcOMMITTED ;

                            if( osInfo.Type              & MEM_IMAGE              ) pInfo->fl |= flVM_COMMITlOADiMAGE ;
                            if( osInfo.Type              & MEM_MAPPED             ) pInfo->fl |= flVM_COMMITmAPPED ;
                            if( osInfo.Type              & MEM_PRIVATE            ) pInfo->fl |= flVM_COMMITpRIVATE ;

                            //if( osInfo.Protect           & PAGE_NOACCESS          ) pInfo->fl |= flVM_null ;
                            if( osInfo.Protect           & PAGE_READONLY          ) pInfo->fl |= flVM_ACCESSrEAD ;
                            if( osInfo.Protect           & PAGE_READWRITE         ) pInfo->fl |= flVM_ACCESSrEAD | flVM_ACCESSwRITE ;
                            if( osInfo.Protect           & PAGE_WRITECOPY         ) pInfo->fl |= flVM_ACCESSrEAD | flVM_ACCESSwRITE | flVM_ACCESScOPYoNwRITE ;
                            if( osInfo.Protect           & PAGE_EXECUTE           ) pInfo->fl |= flVM_ACCESSdO ;
                            if( osInfo.Protect           & PAGE_EXECUTE_READ      ) pInfo->fl |= flVM_ACCESSdO | flVM_ACCESSrEAD ;
                            if( osInfo.Protect           & PAGE_EXECUTE_READWRITE ) pInfo->fl |= flVM_ACCESSdO | flVM_ACCESSrEAD | flVM_ACCESSwRITE ;
                            if( osInfo.Protect           & PAGE_EXECUTE_WRITECOPY ) pInfo->fl |= flVM_ACCESSdO | flVM_ACCESSrEAD | flVM_ACCESSwRITE | flVM_ACCESScOPYoNwRITE ;
                            if( osInfo.Protect           & PAGE_GUARD             ) pInfo->fl |= flVM_MODEgUARD ;
                            if( osInfo.Protect           & PAGE_NOCACHE           ) pInfo->fl |= flVM_MODEnOcACHE ;

                            //if( osInfo.AllocationProtect & PAGE_NOACCESS          ) pInfo->fla |= flVM_null ;
                            if( osInfo.AllocationProtect & PAGE_READONLY          ) pInfo->fla |= flVM_ACCESSrEAD ;
                            if( osInfo.AllocationProtect & PAGE_READWRITE         ) pInfo->fla |= flVM_ACCESSrEAD | flVM_ACCESSwRITE ;
                            if( osInfo.AllocationProtect & PAGE_WRITECOPY         ) pInfo->fla |= flVM_ACCESSrEAD | flVM_ACCESSwRITE | flVM_ACCESScOPYoNwRITE ;
                            if( osInfo.AllocationProtect & PAGE_EXECUTE           ) pInfo->fla |= flVM_ACCESSdO ;
                            if( osInfo.AllocationProtect & PAGE_EXECUTE_READ      ) pInfo->fla |= flVM_ACCESSdO | flVM_ACCESSrEAD ;
                            if( osInfo.AllocationProtect & PAGE_EXECUTE_READWRITE ) pInfo->fla |= flVM_ACCESSdO | flVM_ACCESSrEAD | flVM_ACCESSwRITE ;
                            if( osInfo.AllocationProtect & PAGE_EXECUTE_WRITECOPY ) pInfo->fla |= flVM_ACCESSdO | flVM_ACCESSrEAD | flVM_ACCESSwRITE | flVM_ACCESScOPYoNwRITE ;
                            if( osInfo.AllocationProtect & PAGE_GUARD             ) pInfo->fla |= flVM_MODEgUARD ;
                            if( osInfo.AllocationProtect & PAGE_NOCACHE           ) pInfo->fla |= flVM_MODEnOcACHE ;
                            stInfo << pbInfo ;
                        }

                        c_pbq += osInfo.RegionSize ;
                    }
                }

            #endif

            if( c_pbq < c_pbqLag || c_pbq >= c_pbqEnd ) break ;
            c_pbqLag = c_pbq ;
        }
    }
    // THE PLATES IN stInfo MAP 1:1 TO THE RECORDS RETURNED BY THE OS.  FOR SOME OS, THESE RECORDS CAN CONTAIN "COVERAGE HOLES" 
    //  A HOLE IS A GAP IN COVERAGE FOR THE ADDRESS SPACE
    //  WINDOWS NT APPEARS TO NORMALLY PROVIDE COMPLETE COVERAGE, BUT HAS BEEN OBSERVED TO FAIL TO DO THIS

    ZE( countT , c_pblEndMax ) ;
    if( stInfo ) // INSERT GENERATED ifInfoS OBJECTS TO ELIMINATE COVERAGE HOLES
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            ifInfoS* pInfo = (ifInfoS*)stInfo.downF( tinP , hDown ) ;
            if( pInfo )
            {
                countT c_pblEnd = pInfo->c_pbl + pInfo->cb ;

                ZE( byteT* , pbInfoi2 ) ;
                ZE( byteT* , pbInfoi1 ) ;
                if( c_pblEndMax < pInfo->c_pbla )
                {
                    ZE( byteT* , pbInfoi ) ;
                    newF( tinP , LF , pbInfoi , sizeof( ifInfoS ) ) ; ___( pbInfoi ) ;
                    if( pbInfoi )
                    {
                        ifInfoS* pInfoi = (ifInfoS*)pbInfoi ;

                        pInfoi->c_pbl  = c_pblEndMax ;
                        pInfoi->cb     = pInfo->c_pbla - c_pblEndMax ;
                        pInfoi->c_pbla = 0 ;
                        pInfoi->fla    = pInfoi->fl = flVM_NOiNFOaVAILABLE ;

                        pbInfoi1 = pbInfoi ;
                        c_pblEndMax = pInfo->c_pbla ;
                    }
                }

                if( c_pblEndMax < pInfo->c_pbl )
                {
                    ZE( byteT* , pbInfoi ) ;
                    newF( tinP , LF , pbInfoi , sizeof( ifInfoS ) ) ; ___( pbInfoi ) ;
                    if( pbInfoi )
                    {
                        ifInfoS* pInfoi = (ifInfoS*)pbInfoi ;

                        pInfoi->c_pbl  = c_pblEndMax ;
                        pInfoi->cb     = pInfo->c_pbl - c_pblEndMax ;
                        pInfoi->c_pbla = pInfo->c_pbla ;
                        pInfoi->fl     = flVM_NOiNFOaVAILABLE ;
                        pInfoi->fla    = pInfo->fla ;

                        pbInfoi2 = pbInfoi ;
                        c_pblEndMax = pInfo->c_pbl ;
                    }
                }

                if( !pbInfoi1 ) { pbInfoi1 = pbInfoi2 ; pbInfoi2 = 0 ; }
                if( pbInfoi1 )
                {
                    handleC hdSave = hDown ;
                    boolT bTop = !stInfo.downUndoF( tinP , hDown ) ;
                    if( bTop )
                    {
                        bTop = 0 ;
                        stInfo.insertF( tinP , (countT)pbInfoi1 , ifcSTACKtYPE_PTR_byteT , 1 ) ;
                    }
                    else stInfo.insertF( tinP , (countT)pbInfoi1 , ifcSTACKtYPE_PTR_byteT ) ;
                    if( pbInfoi2 ) stInfo.insertF( tinP , (countT)pbInfoi2 , ifcSTACKtYPE_PTR_byteT ) ;

                    if( ~hDown ) stInfo.downF( tinP , hDown ) ;
                    else         hDown = hdSave ;
                }

                if( c_pblEndMax < c_pblEnd ) c_pblEndMax = c_pblEnd ;
                else                         __1
            }
        }
        while( !third && ~hDown ) ;
    }
    if( c_pblEndMax )
    {
        ZE( byteT* , pbInfoi ) ;
        newF( tinP , LF , pbInfoi , sizeof( ifInfoS ) ) ; ___( pbInfoi ) ;
        if( pbInfoi )
        {
            ifInfoS* pInfoi = (ifInfoS*)pbInfoi ;

            pInfoi->c_pbl  =   c_pblEndMax ;
            pInfoi->cb     = - c_pblEndMax ;
            pInfoi->c_pbla = 0 ;
            pInfoi->fla    = pInfoi->fl = flVM_NOiNFOaVAILABLE ;

            c_pblEndMax = 0 ;
            stInfo.insertF( tinP , (countT)pbInfoi , ifcSTACKtYPE_PTR_byteT , -1 ) ;
        }
    }

    ZE( countT , cBitsGrain ) ;
    if( stInfo )
    {
        ZE( countT , bitsUsed ) ;
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            ifInfoS* pInfo = (ifInfoS*)stInfo.downF( tinP , hDown ) ;
            if( pInfo ) bitsUsed |= pInfo->c_pbl | pInfo->cb ;
        }
        while( !third && ~hDown ) ;

        while( bitsUsed )
        {
            if( bitsUsed & 1 ) break ;
            else               cBitsGrain ++ ;
            bitsUsed >>= 1 ;
        }
    }

    //ARRAY INDEXING CONVENTIONS
    // pbIdRegion WILL BE INDEXED USING offPage, SINCE offPage IS EASIER TO OBTAIN FROM AN ADDRESS VALUE
    // pbIdRegion WILL CONTAIN idRegion, WHICH IS GUARANTEED TO BE NONZE
    // THE REMAINING ARRAYS WILL USE 1-BASED INDEXING.  THE ELEMENT AT OFFSET 0 WILL NOT BE USED.
    // THIS IS TO CONFORM TO IFC CONVENTION THAT ENCOURAGES USE OF ID'S RATHER THAN OFFSETS TO INDEX INTO ARRAYS, AND CONVENTION THAT NULL DATA VALUES SHOULD BE AVOIDED

    ZE( countT , cRegions ) ;
    {   //MAKE pbIdRegionP ARRAY
        countT cPages = cBitsGrain ? 1 << sizeof( countT ) * SB - cBitsGrain : 0 ;
        __Z( cPages ) ;
        newF( tinP , LF , pbIdRegionP , cPages + 1 ) ; ___( pbIdRegionP ) ;

        c_memsetIF( tinP , pbIdRegionP , cPages + 1 ) ;

        if( !POOP )
        {
            pbIdRegionP[ cPages ] = 0 ;
            countT idRegionNext = 1 ;
            ZE( countT , offPageNext ) ;
            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                ifInfoS* pInfo = (ifInfoS*)stInfo.downF( tinP , hDown ) ;
                if( pInfo )
                {
                    countT offPageMin   = pInfo->c_pbl             >> cBitsGrain ;
                    countT offPageEnd   = pInfo->c_pbl + pInfo->cb >> cBitsGrain ;
                    __( offPageEnd  == offPageMin ) ;
                    __( offPageNext != offPageMin ) ;

                    if( !offPageEnd ) c_memsetIF( tinP , pbIdRegionP + offPageNext , cPages     - offPageNext , (byteT)idRegionNext ) ;
                    else              c_memsetIF( tinP , pbIdRegionP + offPageNext , offPageEnd - offPageNext , (byteT)idRegionNext ) ;
                    offPageNext = offPageEnd ;

                    idRegionNext ++ ;
                    __( idRegionNext > 0xff ) ;
                }
            }
            while( !third && ~hDown ) ;
            __( offPageNext ) ;
            cRegions = idRegionNext - 1 ;
            __( cRegions - stInfo ) ;
        }
    }
    __Z( cRegions ) ;

    ZE( countT , cAllocs ) ;
    {   //MAKE pbIdAllocP ARRAY
        newF( tinP , LF , pbIdAllocP , 2 + cRegions ) ; ___( pbIdAllocP ) ;

        c_memsetIF( tinP , pbIdAllocP , 1 + cRegions ) ;

        if( !POOP )
        {
            pbIdAllocP[ 1 + cRegions ] = 0 ;
            countT idRegionNext = 1 ;
            countT idAllocNext = 1 ;
            ZE( countT , c_pblaLast ) ;
            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                ifInfoS* pInfo = (ifInfoS*)stInfo.downF( tinP , hDown ) ;
                if( pInfo )
                {
                    if( c_pblaLast != pInfo->c_pbla )
                    {
                        c_pblaLast  = pInfo->c_pbla ;
                        idAllocNext ++ ;
                        __( idAllocNext > 0xff ) ;
                    }
                    countT offPageMin   = pInfo->c_pbl             >> cBitsGrain ;
                    countT offPageEnd   = pInfo->c_pbl + pInfo->cb >> cBitsGrain ;
                    __( offPageEnd == offPageMin ) ;
                    __( !pbIdRegionP[ offPageMin ] ) ;
                    __( pbIdRegionP[ offPageMin ] - idRegionNext ) ;

                    pbIdAllocP[ idRegionNext ++ ] = (byteT)idAllocNext ;
                }
            }
            while( !third && ~hDown ) ;
            __( idRegionNext < cRegions ) ;
            cAllocs = idAllocNext ;
        }
    }

    newF( tinP , LF , (byteT*&)pVmRegionP      , sizeof( vmRegionS ) * ( 2 + cRegions ) ) ; ___( pVmRegionP ) ;
    newF( tinP , LF , (byteT*&)pVmRegionAllocP , sizeof( vmRegionS ) * ( 2 + cAllocs  ) ) ; ___( pVmRegionAllocP ) ;

    c_memsetIF( tinP , (byteT*)pVmRegionP      , sizeof( vmRegionS ) * ( 2 + cRegions ) ) ;
    c_memsetIF( tinP , (byteT*)pVmRegionAllocP , sizeof( vmRegionS ) * ( 2 + cAllocs  ) ) ;

    if( !POOP )
    {   //COPY THE REGION INFORMATION FROM THE STACK PLATES INTO THE REGION INFORMATION ARRAYS
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            ifInfoS* pInfo = (ifInfoS*)stInfo.downF( tinP , hDown ) ;
            if( pInfo )
            {
                countT offp = pInfo->c_pbl >> cBitsGrain ;
                countT idr  = pbIdRegionP[ offp ] ;
                countT ida  = pbIdAllocP[  idr  ] ;
                __Z( idr ) ;
                __Z( ida ) ;
                __( cRegions < idr ) ;
                __( cAllocs  < ida ) ;

                if( !POOP )
                {
                    pVmRegionP[      idr ].c_pb   = pInfo->c_pbl ;
                    pVmRegionP[      idr ].cb     = pInfo->cb ;
                    pVmRegionP[      idr ].flags  = pInfo->fl ;

                    pVmRegionAllocP[ ida ].c_pb   = pInfo->c_pbla ;
                    pVmRegionAllocP[ ida ].cb    += pInfo->cb ;
                    pVmRegionAllocP[ ida ].flags  = pInfo->fla ;
                }
            }
        }
        while( !third && ~hDown ) ;
    }

    cBitsGrainP = cBitsGrain ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360010fe.thirdc.osregioninfof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001101.thirdc.dosqueryfileattrf BEGIN
#define DDNAME       "3func.36001101.thirdc.dosqueryfileattrf"
#define DDNUMB      (countT)0x36001101
#define IDFILE      (countT)0xc08


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosQueryFileAttrF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020137.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT thirdC::dosQueryFileAttrF( tinS& tinP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        if( POOP ) return 0 ;
    }

    ZE( flagsT , flags ) ;
    #if defined( __OS2__ )


    #elif defined( __NT__ )

        BOS( WHATsfr , BOSmAXcOUNTT , GetFileAttributes( postP ) )
        BOSpOOP
        if( !POOP ) flags = fileAttrIfFromOsIF( tinP , tinP.brcRaw ) ;

    #endif

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001101.thirdc.dosqueryfileattrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001102.thirdc.dossetfileattrf BEGIN
#define DDNAME       "3func.36001102.thirdc.dossetfileattrf"
#define DDNUMB      (countT)0x36001102
#define IDFILE      (countT)0xc09


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dosSetFileAttrF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020138.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::dosSetFileAttrF( tinS& tinP , const osTextT* const postP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        FV( flFILEaTTR , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )

    #elif defined( __NT__ )

        flagsT flags = fileAttrOsFromIfIF( tinP , flagsP ) ;
        BOS( WHATsfw , BOSoK , SetFileAttributes( postP , flags ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001102.thirdc.dossetfileattrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001103.thirdc.oslinkf BEGIN
#define DDNAME       "3func.36001103.thirdc.oslinkf"
#define DDNUMB      (countT)0x36001103
#define IDFILE      (countT)0xc0a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osLinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020139.1.0.html\"\>definition\</A\>
arguments
 tinP
 postOutP
  must not be 0
 postInP
  must not be 0
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001015f.flMAKE!||
 postLibraryP
  can be 0
 postDescriptionP
  can be 0
  must not contain backslash (\) or single quote (')
  example: "!" "ifcExeDllDescBegin !cName 12300015 !idCopy 12340000 !contact http://ideafarm.com IdeaFarm " "(tm) Piggyback Distributed Operating System (c) Wo Of Ideafarm all rights reserved !ifcExeDllDescEnd"
*/
/**//*1*/voidT thirdC::osLinkF( tinS& tinP , const osTextT* const postOutP , const osTextT* const postInP , const flagsT flagsP , const osTextT* const postLibraryP , const osTextT* const postDescriptionP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postOutP ) ;
        __Z( postInP ) ;
        FV( flMAKE , flagsP ) ;
        __( F(flagsP) & flMAKE_EXE && F(flagsP) & flMAKE_EXEwIN ) ;
        __( postDescriptionP && strstr( postDescriptionP , "'" ) ) ;
        __( postDescriptionP && strstr( postDescriptionP , "\\" ) ) ;
        if( POOP ) return ;
    }

    _IO_

    osTextT postDescriptionDefault[] = "@ifcExeDllDescBegin !contact http://ideafarm.com IdeaFarm " "(tm) Piggyback Distributed Operating System (c) Wo Of Ideafarm all rights reserved !ifcExeDllDescEnd" ;
    postDescriptionDefault[ 0 ] = '!' ;

    const osTextT* const postDescription = postDescriptionP ? postDescriptionP : postDescriptionDefault ;

    ZE( osTextT* , postArg ) ;
    {
        const osTextT* ppostArg[] =
        {
            #if defined( __NT__ ) || defined( __OS2__ )

                "system nt" ,
                F(flagsP) & flMAKE_EXEwIN                           ? "_win"       : ""                                                                                         ,
                F(flagsP) & flMAKE_EXE || F(flagsP) & flMAKE_EXEwIN ? ""           : "_dll"                                                                                     ,
                " op q op map=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\adam.map op mangle"                                                    ,
                " op heapsize=0x70000"                                                                                                                                          ,
                " op st=0x00510000"                                                                                                                                             ,
                " segment type code shared"                                                                                                                                     ,
                " segment class 'CODE' shared"                                                                                                                                  ,
                " segment 'BEGTEXT' shared"                                                                                                                                     ,
                " segment '_TEXT' shared"                                                                                                                                       ,
                " segment 'CONST' shared"                                                                                                                                       ,
                " segment 'CONST2' shared"                                                                                                                                      ,
                F(flagsP) & flMAKE_DEBUG ? " debug all" : ""                                                                                                                    ,
                " name "                                                                                                                                                        ,
                postOutP                                                                                                                                                        ,
                " file "                                                                                                                                                        ,
                postInP                                                                                                                                                         ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\microsoft\\Msi.Lib"                                                              ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\advapi32.lib"                                                , 
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\psapi.lib"                                                   ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\shlwapi.lib"                                                 ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\wsock32.lib"                                                 ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\Ws2_32.lib"                                                  ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\winmm.lib"                                                   ,
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\zlib\\unzipped.zlib123dll\\dll32\\zlibwapi.lib"                                  ,
                //" library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\lib\\libcrypto.lib"                                                     ,
                //" library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\lib\\libssl.lib"                                                        ,
                postLibraryP ? " library " : 0                                                                                                                                  ,
                postLibraryP                                                                                                                                                    ,
                " op de '"                                                                                                                                                      ,
                postDescription                                                                                                                                                 ,
                "'"                                                                                                                                                             ,

            #endif

            0
        }
        ;

        c_strConcatenateF( tinP , postArg , ppostArg ) ; ___( postArg ) ;
    }

    //U:: TO FIND A BUG
    //LOGrAW( "\r\n---- osLinkF / postArg ---- BEGIN ------------------------------\r\n" ) ;
    //LOGrAW( postArg ) ;
    //LOGrAW( "\r\n---- osLinkF / postArg ---- END --------------------------------\r\n" ) ;

    #if !defined( NEVERdEFINED )

        //etherC::etRockIF( tinP ).traceF( tinP , T("cmd line:  wlink.exe ")+T(postArg) ) ; //U:: TO FIND A BUG

        //THIS DEF IS FOR PRODUCTION
        ZE( countT , value ) ;
        ZE( countT , idDeathType ) ;
        dosExecPgmF( tinP , countTC() , countTC() , value , idDeathType , "wlink.exe" , postArg ) ;
        __( value ) ;
        __( idDeathType ) ;
        delF( tinP , postArg ) ;

    #else

        //20121223@2230: THIS DOES NOT WORK ON GO DADDY SERVER
        //ENABLE THIS ONLY WHEN NEED TO SEE LINK ERROR MESSAGES

        //20150105@1802: DEPRECATED BECAUSE USES c :\\tm p WHICH IS NONCONFORMANT
        //OStEXT(   ostoDo , TUCK << 3 ) ;
        //OStEXTAK( ostoDo , "wlink.exe " ) ;
        //OStEXTA(  ostoDo , postArg ) ;
        //OStEXTAK( ostoDo , " > c" ":\\tm p\\link.err" ) ; //U::SHOULD BE THE TMP DIR IN WORKSHOP IN EPHEMERAL
        //BOSdOnOTtEST( WHATgbo , system( ostoDo ) )

        delF( tinP , postArg ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001103.thirdc.oslinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001105.thirdc.winrectanglef BEGIN
#define DDNAME       "3func.36001105.thirdc.winrectanglef"
#define DDNUMB      (countT)0x36001105
#define IDFILE      (countT)0xc0b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winRectangleF.0.html\"\>instances\</A\>
\<A HREF=\"5.102013b.1.0.html\"\>definition\</A\>
arguments
 tinP
 hDrawP
  must not be 0
 wP
*/
/**/

/*1*/voidT thirdC::winRectangleF( tinS& tinP , const handleC& hDrawP , measureT mIdColMinP , measureT mIdRowMinP , measureT mIdColMaxP , measureT mIdRowMaxP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( hDrawP ) ;
        if( POOP ) return ;
    }

    _IO_

    //ZE( countT , timeN1 ) ;
    //ZE( sCountT , timeN2 ) ;
    //tinP.pEther->osTimeNowF( tinP , timeN1 , timeN2 ) ;
    //LOGrAW( T("\r\n")+TTtOCK(timeN1,timeN2)+T(" ")+T(tinP.postThreadName)+T(" winRectangleF/+\r\n") ) ;

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        if( mIdColMinP > mIdColMaxP )
        {
            measureT save = mIdColMaxP ;
            mIdColMaxP = mIdColMinP ;
            mIdColMinP = save ;
        }

        if( mIdRowMinP > mIdRowMaxP )
        {
            measureT save = mIdRowMaxP ;
            mIdRowMaxP = mIdRowMinP ;
            mIdRowMinP = save ;
        }

        //if( mIdColMaxP > 1000 && mIdColMaxP < 1010 )
        //if( tinP.pc Utility[ 0 ] )
        //{
        //    countT idcMin = R( winOsColIF( mIdColMinP ) ) ;
        //    countT idcMax = R( winOsColIF( mIdColMaxP ) ) ;
        //
        //    LOGrAW( T("winRectangleF [mIdColMinP,mIdColMaxP,idcMin,idcMax]: ")+TF2(mIdColMinP,flFORMAT_FOREIGN)+T(" ")+TF2(mIdColMaxP,flFORMAT_FOREIGN)+T(" ")+TF2(idcMin,flFORMAT_FOREIGN)+T(" ")+TF2(idcMax,flFORMAT_FOREIGN)+T("\r\n") ) ;
        //}

        //COLORREF rgb = GetPixel( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColMinP ) ) , R( winOsRowIF( mIdRowMaxP ) ) ) ;
        //LOGrAW3( "Rectangle() ++++++++++++++++++++++++++++++++++++ " , rgb , "\r\n" ) ;

        const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

        BOS( WHATsww , BOSoK , Rectangle( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColMinP ) ) , R( winOsRowIF( mIdRowMaxP , cRowsDraw ) ) , R( winOsColIF( mIdColMaxP ) ) + 1 , R( winOsRowIF( mIdRowMinP , cRowsDraw ) ) + 1 ) )
        BOSpOOP

        //rgb = GetPixel( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , R( winOsColIF( mIdColMinP ) ) , R( winOsRowIF( mIdRowMaxP ) ) ) ;
        //LOGrAW3( "Rectangle() ------------------------------------ " , rgb , "\r\n" ) ;

    #endif

    //LOGrAW( T("\r\n")+TTtOCK(timeN1,timeN2)+T(" ")+T(tinP.postThreadName)+T(" winRectangleF/-\r\n") ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001105.thirdc.winrectanglef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001106.thirdc.third_hwindowingclientf BEGIN
#define DDNAME       "3func.36001106.thirdc.third_hwindowingclientf"
#define DDNUMB      (countT)0x36001106
#define IDFILE      (countT)0xc0c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_hWindowingClientIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102013d.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/const handleC& thirdC::third_hWindowingClientIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return processGlobal3I._thirdC_hWindowingClient ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001106.thirdc.third_hwindowingclientf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001107.thirdc.winresetf BEGIN
#define DDNAME       "3func.36001107.thirdc.winresetf"
#define DDNUMB      (countT)0x36001107
#define IDFILE      (countT)0xc0d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winResetF.0.html\"\>instances\</A\>
\<A HREF=\"5.102013e.1.0.html\"\>definition\</A\>
arguments
 tinP
 wP
*/
/**/

/*1*/voidT thirdC::winResetF( tinS& tinP , const handleC& hDrawP , windowOldC& wP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }


    //BOS( WHATsww , BOSoK , SetBkMode( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , /*TRANSPARENT*/OPAQUE ) )
    //BOSpOOP

    //BOS( WHATsww , BOSoK , SetBkColor( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , RGB( 0x00 , 0x00 , 0x00 ) ) )
    //BOSpOOP
    //LOGrAWtID2( "bk color is now: " , GetBkColor( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ) ) ;

    //BOS( WHATsww , BOSoK , SetTextColor( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , RGB( 0xff , 0xff , 0xff ) ) )
    //BOSpOOP
    //LOGrAWtID2( "text color is now: " , GetTextColor( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ) ) ;

    BOS( WHATsww , BOSoK , CreatePen( PS_SOLID , 1 , RGB( 0x00 , 0x00 , 0x00 ) ) )
    BOSpOOP
    HPEN hpen = (HPEN)tinP.brcRaw ;

    BOS( WHATsww , BOSoK , CreateSolidBrush(         RGB( 0x00 , 0x00 , 0x00 ) ) )
    BOSpOOP
    HBRUSH hbrush  = (HBRUSH)tinP.brcRaw ;

    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , hpen ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    HPEN   hpeno   = (HPEN)tinP.brcRaw ;

    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , hbrush ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    HBRUSH hbrusho = (HBRUSH)tinP.brcRaw ;
    
    winSetPaintTypeF( tinP , hDrawP , ifcIDtYPEpAINT_OPAQUE ) ;
    winRectangleF( tinP , hDrawP , 1.0 , 1.0 , wP.mColsF() , wP.mRowsF() ) ;
    
    //U::FOR DEBUGGING ONLY; COMMENT OUT IN PRODUCTION
    //{
    //    //paperP.mIdCol = paperP.mIdRow = 1 ;
    //    //winMoveF( tinP , wP ) ;
    //    //winLineF( tinP , wP , wP.mColsF() , 0 , 1        ) ;
    //    //winLineF( tinP , wP , wP.mColsF() , 0 , wP.mRowsF() ) ;
    //    //winLineF( tinP , wP , 1        , 0 , wP.mRowsF() ) ;
    //    //winLineF( tinP , wP , 1        , 0 , 1        ) ;
    //    //winLineF( tinP , wP , wP.mColsF() , 0 , wP.mRowsF() ) ;
    //    //paperP.mIdCol = 1 ;
    //    //paperP.mIdRow = wP.mRowsF() ;
    //    //winMoveF( tinP , wP ) ;
    //    //winLineF( tinP , wP , wP.mColsF() , 0 , 1        ) ;
    //
    //    //measureT mColMin = wP.mColsF() / 2 - 0x20 ;
    //    //measureT mRowMin = wP.mRowsF() / 2 - 0x20 ;
    //    //measureT mColMax = wP.mColsF() / 2 + 0x20 ;
    //    //measureT mRowMax = wP.mRowsF() / 2 + 0x20 ;
    //    //paperP.mIdCol = mColMin ;
    //    //paperP.mIdRow = mRowMin ;
    //    //winMoveF( tinP , wP ) ;
    //    //winLineF( tinP , wP , mColMax , mRowMin ) ;
    //    //winLineF( tinP , wP , mColMax , mRowMax ) ;
    //    //winLineF( tinP , wP , mColMin , mRowMax ) ;
    //    //winLineF( tinP , wP , mColMin , mRowMin ) ;
    //
    //    //paperP.mIdCol = wP.mColsF() / 2 ;
    //    //paperP.mIdRow = wP.mRowsF() / 2 ;
    //    //winMoveF( tinP , wP ) ;
    //
    //    const measureT mIdColSave = paperP.mIdCol ;
    //    const measureT mIdRowSave = paperP.mIdRow ;
    //    static countT idEraseLath ;
    //    countT idErase = &wP == p WinRoot ? 1 + incv02AM( idEraseLath ) : 0 ;
    //    TN( tn , "" ) ; tn = TF1(idErase) ;
    //
    //    paperP.mIdCol = 1 ;
    //    paperP.mIdRow = 1 ;
    //    winMoveF( tinP , wP ) ;
    //    ZE( countT , cct ) ;
    //    ZE( countT , crt ) ;
    //    winDrawTextF( tinP , wP , cct , crt , tn , tn.csF( tinP ) ) ;
    //
    //    paperP.mIdCol = wP.mColsF() - cct ;
    //    paperP.mIdRow = 1 ;
    //    winMoveF( tinP , wP ) ;
    //    winDrawTextF( tinP , wP , countTC() , countTC() , tn , tn.csF( tinP ) ) ;
    //
    //    paperP.mIdCol = wP.mColsF() - cct ;
    //    paperP.mIdRow = wP.mRowsF() - crt ;
    //    winMoveF( tinP , wP ) ;
    //    winDrawTextF( tinP , wP , countTC() , countTC() , tn , tn.csF( tinP ) ) ;
    //
    //    paperP.mIdCol = 1 ;
    //    paperP.mIdRow = wP.mRowsF() - crt ;
    //    winMoveF( tinP , wP ) ;
    //    winDrawTextF( tinP , wP , countTC() , countTC() , tn , tn.csF( tinP ) ) ;
    //
    //    //paperP.mIdCol = paperP.mIdRow = 1 ;
    //    //winMoveF( tinP , wP ) ;
    //    //winLineF( tinP , wP , wP.mColsF() , wP.mRowsF() ) ;
    //
    //    paperP.mIdCol = mIdColSave ;
    //    paperP.mIdRow = mIdRowSave ;
    //}
    
    winSetPaintTypeF( tinP , hDrawP ) ;
    
    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , hpeno ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , hbrusho ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    BOS( WHATsww , BOSoK , DeleteObject( hpen ) )
    BOSpOOP
    BOS( WHATsww , BOSoK , DeleteObject( hbrush ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001107.thirdc.winresetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001108.thirdc.third_idthreadwindowsf BEGIN
#define DDNAME       "3func.36001108.thirdc.third_idthreadwindowsf"
#define DDNUMB      (countT)0x36001108
#define IDFILE      (countT)0xc0e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_idThreadWindowsIF.0.html\"\>instances\</A\>
\<A HREF=\"5.102013f.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/countT& thirdC::third_idThreadWindowsIF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return tinP.pAdamGlobal1->_thirdC_.idThreadWindows ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001108.thirdc.third_idthreadwindowsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001109.thirdc.winmovef BEGIN
#define DDNAME       "3func.36001109.thirdc.winmovef"
#define DDNUMB      (countT)0x36001109
#define IDFILE      (countT)0xc0f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winMoveF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020140.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thirdC::winMoveF( tinS& tinP , const handleC& hDrawP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001109.thirdc.winmovef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600110a.thirdc.winlinef BEGIN
#define DDNAME       "3func.3600110a.thirdc.winlinef"
#define DDNUMB      (countT)0x3600110a
#define IDFILE      (countT)0xc10


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$winLineF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020141.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1840104.1.1.0.html\"\>1840104:  WAKEsHOW( "example.simplest.func.1020141.thirdC.winLineF" )\</A\>
*/
/**/

//ASSUME: paperP.mIdCol paperP.mIdRow ARE CONSISTENT WITH THE O.S. VALUE FOR THE CURRENT DRAWING POSITION

/*1*/voidT thirdC::winLineF( tinS& tinP , const handleC& hDrawP , const countT colorP , const measureT mIdColP , const measureT mIdRowP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        LOGrAW( "winLineF\r\n" ) ;
        if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
        {
            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            countT idcTo   = R( winOsColIF( mIdColP             ) ) ;
            countT idrTo   = R( winOsRowIF( mIdRowP , cRowsDraw ) ) ;
            LOGrAW5( "winLineF [idcTo,idrTo]: " , idcTo , " " , idrTo , "\r\n" ) ;

            //OSwww
            //(
                BOS( WHATgbo , BOSoK , LineTo( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcTo , idrTo ) )
                BOSpOOP
                if( F(flagsP) & flDRAW_INCLUDEeNDpEL )
                {
                    BOS( WHATgbo , BOSoK , SetPixelV( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idcTo , idrTo , colorP ) )
                    BOSpOOP
                }
            //)
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600110a.thirdc.winlinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600111f.thirdc.third_stthird_f BEGIN
#define DDNAME       "3func.3600111f.thirdc.third_stthird_f"
#define DDNUMB      (countT)0x3600111f
#define IDFILE      (countT)0xc11


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$third_stThird_F.0.html\"\>instances\</A\>
\<A HREF=\"5.102015a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/stackC& thirdC::third_stThird_F( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return *tinP.pAdamGlobal1->_thirdC_.pStk_pThird ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600111f.thirdc.third_stthird_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600112a.thirdc.osdriversf BEGIN
#define DDNAME       "3func.3600112a.thirdc.osdriversf"
#define DDNUMB      (countT)0x3600112a
#define IDFILE      (countT)0xc12


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osDriversF.0.html\"\>instances\</A\>
\<A HREF=\"5.1020167.1.0.html\"\>definition\</A\>
arguments
 tinP
*/
/**/

/*1*/voidT thirdC::osDriversF( tinS& tinP , stackC& stDriverP , const osTextT* const postPrefixP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( stDriverP.idTypeF( tinP ) - ifcSTACKtYPE_PTR_byteT ) ;
        if( POOP ) return ;
    }

    _IO_

    {
        BOS( WHATgbo , BOSoK , OpenSCManager( 0 , 0 , SC_MANAGER_ALL_ACCESS ) )
        BOSpOOP
        SC_HANDLE hsm = (SC_HANDLE)tinP.brcRaw ;
        __Z( hsm ) ;

        ZE( boolT , bOk ) ;
        ZE( DWORD , oshMore ) ;
        while( !bOk && !*this )
        {
            ENUM_SERVICE_STATUS pInfo[ 0x100 ] ;
            ZE( DWORD , cbMore ) ;
            ZE( DWORD , cGot ) ;
            BOS( WHATgbo , BOSoK , EnumServicesStatus( hsm , SERVICE_WIN32 , SERVICE_INACTIVE | SERVICE_ACTIVE , pInfo , sizeof pInfo , &cbMore , &cGot , &oshMore ) )
            BOSpOOP
            bOk = tinP.brcRaw ;
            ZE( countT , rc ) ;
            if( !bOk )
            {
                BOSdOnOTtEST( WHATgbo , GetLastError() )
                rc = tinP.brcRaw ;
            }
            __( rc && rc != ERROR_MORE_DATA ) ;

            if( !POOP )
            {
                for( countT off = 0 ; off < cGot ; off ++ )
                {
                    if( !postPrefixP || pInfo[ off ].lpServiceName == c_strstrIF( tinP , pInfo[ off ].lpServiceName , postPrefixP ) )
                    {
                        countT costn = c_strlenIF( tinP , pInfo[ off ].lpServiceName ) ;
                        ZE( osTextT* , postn ) ;
                        newF( tinP , LF , postn , costn + 1 ) ; ___( postn ) ;
                        c_memcpyIF( tinP , postn , pInfo[ off ].lpServiceName , costn + 1 ) ;
                        stDriverP << postn ;
                    }
                }
            }
        }

        BOS( WHATgbo , BOSoK , CloseServiceHandle( hsm ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600112a.thirdc.osdriversf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001147.thirdc.winopendrawingtoolf BEGIN
#define DDNAME       "3func.36001147.thirdc.winopendrawingtoolf"
#define DDNUMB      (countT)0x36001147
#define IDFILE      (countT)0xc13


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 hP
 idTypeP
 wP
 pcP
  can be 0
  if not 0 then contains specifications for the tool
*/
/**/

/*1*/voidT thirdC::winOpenDrawingToolF( tinS& tinP , handleC& hP , const countT idTypeP , const handleC& hDrawP , const countT* const pcP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( ~hP ) ;
        __Z( idTypeP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        switch( idTypeP )
        {
            case ifcIDtYPEdRAWINGtOOL_FONT :
            {
                LOGFONT info ;
                pEtherContainsMe->memSetF( tinP , (byteT*)&info , sizeof info ) ;
                info.lfHeight           = 0x10 ;
                //info.lfWidth            =   7 ;
                //info.lfEscapement     = 0 ;
                //info.lfOrientation    = 0 ;
                info.lfWeight           = 0xcb2 ;
                //info.lfItalic         = 0 ;
                //info.lfUnderline      = 0 ;
                //info.lfStrikeOut      = 0 ;
                info.lfCharSet          = OEM_CHARSET ;
                //info.lfOutPrecision     = OUT_STRING_PRECIS ;
                //info.lfClipPrecision    = CLIP_STROKE_PRECIS ;
                //info.lfQuality          = DRAFT_QUALITY ;
                info.lfPitchAndFamily   = FIXED_PITCH | FF_MODERN ;
                thirdC::c_strncpyIF( tinP , info.lfFaceName , "Terminal" , sizeof info.lfFaceName ) ;
    
                BOS( WHATgbo , BOSoK , CreateFontIndirect( &info ) )
                BOSpOOP
                hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;
                break ;
            }
            case ifcIDtYPEdRAWINGtOOL_PEN :
            {
                countT color = ifcRGB_W4 ;
                const countT* pcc = pcP ? pcP : &color ;

                BOS( WHATgbo , BOSoK , CreatePen( PS_SOLID , 1 , (DWORD)*pcc ) )
                BOSpOOP
                hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;
                break ;
            }
            case ifcIDtYPEdRAWINGtOOL_BRUSH :
            {
                countT color = ifcRGB_W4 ;
                const countT* pcc = pcP ? pcP : &color ;

                BOS( WHATgbo , BOSoK , CreateSolidBrush( (DWORD)*pcc ) )
                BOSpOOP
                hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;
                break ;
            }
            case ifcIDtYPEdRAWINGtOOL_BITMAP :
            {
                if( pcP )
                {
                    BOS( WHATgbo , BOSoK , CreateCompatibleBitmap( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , pcP[ 0 ] , pcP[ 1 ] ) )
                    BOSpOOP
                    hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;

                    HANDLEaPPnOTEScOUNTcLASS& cAppNotes = hP ;
                    cAppNotes.c1 = pcP[ 0 ] ;
                    cAppNotes.c2 = pcP[ 1 ] ;
                    //LOGrAWtID4( "ifcIDtYPEdRAWINGtOOL_BITMAP (cCols,cRows): " , pcP[ 0 ] , " " , pcP[ 1 ] ) ;
    
                    //BITMAP info ;
                    //GetObject( (HGDIOBJ)hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL ) , sizeof info , &info ) ;
                    //if( c2p.c1 )
                    //{
                    //    countT foo = 2 ;
                    //}
                }

                break ;
            }
            case ifcIDtYPEdRAWINGtOOL_REGIONrECTANGLE :
            {
                const measureT mIdColFrom = pcP ? *(measureT*)&pcP[ 0 ] : 0 ;
                const measureT mIdRowFrom = pcP ? *(measureT*)&pcP[ 1 ] : 0 ;
                const measureT mIdColTo   = pcP ? *(measureT*)&pcP[ 2 ] : 0 ;
                const measureT mIdRowTo   = pcP ? *(measureT*)&pcP[ 3 ] : 0 ;

                const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

                countT idcFrom = R( winOsColIF( mIdColFrom             ) ) ;
                countT idcTo   = R( winOsColIF( mIdColTo               ) ) ;
                countT idrFrom = R( winOsRowIF( mIdRowFrom , cRowsDraw ) ) ;
                countT idrTo   = R( winOsRowIF( mIdRowTo   , cRowsDraw ) ) ;

                RECT info ;
                info.left   = idcFrom ;
                info.top    = idrFrom ;
                info.right  = idcTo ;
                info.bottom = idrTo ;
            
                if( info.left <= info.right ) info.right ++ ;
                else                          info.left  ++ ;
            
                if( info.top <= info.bottom ) info.bottom ++ ;
                else                          info.top    ++ ;

                BOS( WHATgbo , BOSoK , CreateRectRgnIndirect( &info ) )
                BOSpOOP
                hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;
                break ;
            }
        }

        if( !hP )
        {
            BOSdOnOTtEST( WHATgbo , GetLastError() )
            countT rc = tinP.brcRaw ;
            __( rc ) ;
            __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001147.thirdc.winopendrawingtoolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001148.thirdc.winselectdrawingtoolf BEGIN
#define DDNAME       "3func.36001148.thirdc.winselectdrawingtoolf"
#define DDNUMB      (countT)0x36001148
#define IDFILE      (countT)0xc14


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
warning: hOldToolP should normally be reset before dt in order to avoid destroying the tool
 U::CLONE THE HANDLE TO AVOID THIS PROBLEM
*/
/**/

/*1*/voidT thirdC::winSelectDrawingToolF( tinS& tinP , handleC& hDrawP , handleC& hToolP , handleC& hOldToolP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( hDrawP ) ;
        __Z( hToolP ) ;
        __( ~hOldToolP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

    BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , (HGDIOBJ)hToolP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL ) ) ) //U::DEVELOP ERROR CHECKING THAT WILL WORK FOR SelectObject
    HGDIOBJ osh = (HGDIOBJ)tinP.brcRaw ;
    hOldToolP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , (countT)osh ) ; //osh MIGHT BE 0 (E.G. FOR REGION IF THERE IS NO PRIOR REGION)

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001148.thirdc.winselectdrawingtoolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001149.thirdc.winopenbitmappseudodevicef BEGIN
#define DDNAME       "3func.36001149.thirdc.winopenbitmappseudodevicef"
#define DDNUMB      (countT)0x36001149
#define IDFILE      (countT)0xc15


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::winOpenBitmapPseudodeviceF( tinS& tinP , handleC& hP , const handleC& hDrawP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( ~hP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        BOS( WHATgbo , BOSoK , CreateCompatibleDC( ~hDrawP ? (HDC)hDrawP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) : 0 ) )
        BOSpOOP
        hP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE , tinP.brcRaw ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001149.thirdc.winopenbitmappseudodevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600114a.thirdc.winsetpainttypef BEGIN
#define DDNAME       "3func.3600114a.thirdc.winsetpainttypef"
#define DDNUMB      (countT)0x3600114a
#define IDFILE      (countT)0xc16


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::winSetPaintTypeF( tinS& tinP , const handleC& hP , countT idTypeP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( hP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

    if( !idTypeP ) idTypeP = ifcIDtYPEpAINT_XOR ;

    ZE( countT , idTypeOs ) ;
    switch( idTypeP )
    {
        case ifcIDtYPEpAINT_XOR    : { idTypeOs = R2_XORPEN  ; break ; }
        case ifcIDtYPEpAINT_OPAQUE : { idTypeOs = R2_COPYPEN ; break ; }
    }

    BOS( WHATgbo , BOSoK , SetROP2( (HDC)hP.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , idTypeOs ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600114a.thirdc.winsetpainttypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115b.thirdc.s_registertimeoutf BEGIN
#define DDNAME       "3func.3600115b.thirdc.s_registertimeoutf"
#define DDNUMB      (countT)0x3600115b
#define IDFILE      (countT)0xc17


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/killSocketS* thirdC::s_registerTimeoutF( tinS& tinP , const handleC& handleP , const countT time1P , const sCountT time2P )/*1*/
{
    SCOOP
    ZE( killSocketS* , pks ) ;
    tinP.pAdamGlobal1->_thirdC_.pSwKillSocket->grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_thirdC_.cLever_pSwKillSocket = (countT)&handleP ;
    pks = (killSocketS*)&(countT&)*tinP.pAdamGlobal1->_thirdC_.pSwKillSocket ;
    if( !incv02AM( pks->cRef ) )
    {
        osTimeNowF( tinP , pks->timeExpire1 , pks->timeExpire2 ) ;
        osTimeAddIF( tinP , pks->timeExpire1 , pks->timeExpire2 , time1P , time2P ) ;
    }
    else
    {
        ZE( countT  , timeEN1 ) ; //"en": "expire new"
        ZE( sCountT , timeEN2 ) ;
        osTimeNowF( tinP , timeEN1 , timeEN2 ) ;
        osTimeAddIF( tinP , timeEN1 , timeEN2 , time1P , time2P ) ;
        countT  timeD1 = timeEN1 ;
        sCountT timeD2 = timeEN2 ;
        osTimeSubtractF( tinP , timeEN1 , timeEN2 , pks->timeExpire1 , pks->timeExpire2 ) ;
        if( timeEN2 < pks->timeExpire2 || ( timeEN2 == pks->timeExpire2 && timeEN1 < pks->timeExpire1 ) )
        {
            pks->timeExpire1 = timeEN1 ;
            pks->timeExpire2 = timeEN2 ;
        }
    }
    tinP.pAdamGlobal1->_thirdC_.pSwKillSocket->ungrabF( tinP ) ;
    return pks ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115b.thirdc.s_registertimeoutf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115c.thirdc.s_unregistertimeoutf BEGIN
#define DDNAME       "3func.3600115c.thirdc.s_unregistertimeoutf"
#define DDNUMB      (countT)0x3600115c
#define IDFILE      (countT)0xc18


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT thirdC::s_unregisterTimeoutF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    tinP.pAdamGlobal1->_thirdC_.pSwKillSocket->grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_thirdC_.cLever_pSwKillSocket = (countT)&handleP ;
    killSocketS* pks = (killSocketS*)&(countT&)*tinP.pAdamGlobal1->_thirdC_.pSwKillSocket ;
    __( !pks->cRef ) ;
    boolT bKilled = pks->bKilled ;
    if( 1 == decv02AM( pks->cRef ) ) tinP.pAdamGlobal1->_thirdC_.pSwKillSocket->freeF( tinP ) ;
    tinP.pAdamGlobal1->_thirdC_.pSwKillSocket->ungrabF( tinP ) ;
    return bKilled ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115c.thirdc.s_unregistertimeoutf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115d.thirdc.third_idmemoryspacei_f BEGIN
#define DDNAME       "3func.3600115d.thirdc.third_idmemoryspacei_f"
#define DDNUMB      (countT)0x3600115d
#define IDFILE      (countT)0xc19


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/countT thirdC::third_idMemorySpaceI_F( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->idMemorySpace ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115d.thirdc.third_idmemoryspacei_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115e.thirdc.winsendmessageclosef BEGIN
#define DDNAME       "3func.3600115e.thirdc.winsendmessageclosef"
#define DDNUMB      (countT)0x3600115e
#define IDFILE      (countT)0xc1a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
it is illegal to refer to this symbol except to send WM_CLOSE (in the handler for WM_ENDSESSION)
the WM_CLOSE handler destroys tinP
i exist because i do not refer to any ifc objects after calling SendMessage
*/
/**/

/*1*/countT thirdC::winSendMessageCloseF( tinS& tinP , const handleC& hWindowP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( hWindowP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , rc ) ;
    HWND osh = (HWND)hWindowP.osF( ifcIDtYPEhANDLE_WINDOW ) ;
    BOSdOnOTtEST( WHATgbo , SendMessage( osh , WM_CLOSE , 0 , 0 ) )
    if( !POOP ) rc = tinP.brcRaw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115e.thirdc.winsendmessageclosef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115f.thirdc.doswaitdirf BEGIN
#define DDNAME       "3func.3600115f.thirdc.doswaitdirf"
#define DDNUMB      (countT)0x3600115f
#define IDFILE      (countT)0xc1b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
if handleP is set (by a prior call to me) then i return when the directory that i am watching has changed or when bQuitP becomes true
if handleP is null then i set handleP and return immediately
caller must inspect the watched directory after calling me for the woth time
failure to do this creates a race condition
 race scenario (incorrect code)
  caller inspects directory
  a file "A" is written to the directory
  caller calls me for the woth time
  i return immediately
  caller sees that my return code is 0 so does not inspect the directory
  caller calls me again, which blocks, since file "A" was written before i created the handle
 correct code   
  a file "A" is written to the directory
  caller calls me for the woth time
  i return immediately
  caller sees that my return code is 0 but inspects the directory anyway, so caller sees file "A"
  caller calls me again, which blocks
arguments
 tinP
 handleP
  must be null on woth call
 bQuitP
  if true then i will return almost immediately, after doing nothing
   inspected after each (hardcoded) timeout interval
 postDirP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00102e1.flWAITdIR!||
*/

/**/

/*1*/boolT thirdC::dosWaitDirF( tinS& tinP , handleC& handleP , const boolT& bQuitP , const osTextT* const postDirP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postDirP ) ;
        if( POOP ) return 0 ;
        __( !postDirP[ 0 ] ) ;
        if( POOP ) return 0 ;
        __( postDirP[ 1 ] - ':' ) ;
        if( POOP ) return 0 ;
        __( !postDirP[ 2 ] ) ;
        if( POOP ) return 0 ;
        FV( flWAITdIR , flagsP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( boolT , bChanged ) ;
    if( !POOP )
    {
        boolT bWoth = !handleP ;

        #ifdef __OS2__
        #elif defined( __NT__ )

            BOSnOvALUE( WHATsfr , SetLastError( 0 ) )
            if( bWoth )
            {
                boolT bRecurse = !!( F(flagsP) & flWAITdIR_RECURSE ) ;

                ZE( flagsT , osFlags ) ;
                if( ( flagsP & ~( F(flWAITdIR_RECURSE) ) ) == flWAITdIR_null ) osFlags = FILE_NOTIFY_CHANGE_FILE_NAME | FILE_NOTIFY_CHANGE_DIR_NAME | FILE_NOTIFY_CHANGE_ATTRIBUTES | FILE_NOTIFY_CHANGE_SIZE | FILE_NOTIFY_CHANGE_LAST_WRITE | FILE_NOTIFY_CHANGE_SECURITY ;
                else
                {
                    if( F(flagsP) & flWAITdIR_FILEnAME  ) osFlags |= FILE_NOTIFY_CHANGE_FILE_NAME  ;
                    if( F(flagsP) & flWAITdIR_DIRnAME   ) osFlags |= FILE_NOTIFY_CHANGE_DIR_NAME   ;
                    if( F(flagsP) & flWAITdIR_ATTRIBUTE ) osFlags |= FILE_NOTIFY_CHANGE_ATTRIBUTES ;
                    if( F(flagsP) & flWAITdIR_SIZE      ) osFlags |= FILE_NOTIFY_CHANGE_SIZE       ;
                    if( F(flagsP) & flWAITdIR_WRITE     ) osFlags |= FILE_NOTIFY_CHANGE_LAST_WRITE ;
                    if( F(flagsP) & flWAITdIR_SECURITY  ) osFlags |= FILE_NOTIFY_CHANGE_SECURITY   ;
                }

                BOS( WHATgbo , BOShANDLE , FindFirstChangeNotification( postDirP , bRecurse , osFlags ) )
                handleP.osF( ifcIDtYPEhANDLE_FILEwAIT , tinP.brcRaw ) ;
                if( !handleP )
                {
                    if( pEtherContainsMe ) pEtherContainsMe->traceF( tinP , T("dosWaitDirF / error [brcLath,postDirP]:    ")+TF2(tinP.brcLath,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(postDirP) ) ;
                    __( tinP.brcLath ) ;
                    __1
                }
            }
            else while( !*this && !bQuitP )
            {
                BOS( WHATsfr , BOSwAITcODE , WaitForSingleObject( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILEwAIT ) , 250 ) ) //MS
                BOSpOOP

                if( tinP.brcRaw == WAIT_OBJECT_0 )
                {
                    bChanged = 1 ;
                    BOS( WHATgbo , BOSoK , FindNextChangeNotification( (HANDLE)handleP.osF( ifcIDtYPEhANDLE_FILEwAIT ) ) )
                }

                if( bChanged ) break ;
            }

        #endif
    }
    return bChanged ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600115f.thirdc.doswaitdirf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600116a.thirdc.operator_const_poopc_ref BEGIN
#define DDNAME       "3func.3600116a.thirdc.operator_const_poopc_ref"
#define DDNUMB      (countT)0x3600116a
#define IDFILE      (countT)0xc1c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/thirdC::operator const poopC&( voidT )/*1*/
{
    //{
    //    static countT idInLath ;
    //    countT idIn = 1 + incv02AM( idInLath ) ;
    //    conGF( idIn ) ;
    //    conGF( "\r\n" ) ;
    //}

    TINSL
    homeS& home = homeS::homeIF() ;
    countT idg = tinP.pAdamGlobal1->idGroupFireAll ;
    if( idg > CfIREaLLrANKS ) idg = 0 ;

    boolT bTest1 = idg ;
    boolT bTest2 = !!tinP.pAdamGlobal1->_thirdC_.pThPrime ;
    boolT bTest3 = home.pFireAll[ idg - 1 ].bFire ;
    boolT bTest4 = 1 == setIfEqualsAM( tinP.pAdamGlobal1->_thirdC_.bFired01 , 0 , 1 ) ;

    if( bTest4 )
    {
        //CONoUTrAW3( "adam " , tinP.pAdamGlobal1->idAdam , " knows he has been fired\r\n" ) ;
        //LOGrAW5( "adam " , tinP.pAdamGlobal1->idAdam , " of root adam " , processGlobal1I.idAdamRoot , " knows he has been fired\r\n" ) ;
        tinP.pAdamGlobal1->flagsAdamState |= flADAMsTATE_FIRED ;

        tellInfoSysAdamFiredS info ;
        info.idAdamRoot = processGlobal1I.idAdamRoot ;
        info.idAdam     = tinP.pAdamGlobal1->idAdam ;
        TELLsYSc3( ifcIDtYPEtELLsYS_ADAMfIRED , (byteT*)&info , sizeof info ) ;
    }

    if
    (
        bTest1          &&
        bTest2          &&
        (
            bTest3  ||
            bTest4
        )
    )
    {
        //LOGrAW9( "poopC& [bTest1,bTest2,bTest3,bTest4]: " , bTest1 , "    " , bTest2 , "    " , bTest3 , "    " , bTest4 , "\r\n" ) ;

        //A:ASSUME: I AM ON THREAD 1; I.E. thPrime WILL NOT BE DT ON ANOTHER THREAD WHILE I AM DOING THIS
        const poopC& pooPrime = tinP.pAdamGlobal1->_thirdC_.pThPrime == this
            ? poop
            : (const poopC&)*tinP.pAdamGlobal1->_thirdC_.pThPrime
        ;
        if( !pooPrime )
            ((poopC&)pooPrime).gruntF( tinP , TAG( TAGiDnULL ) , ifcIDsUBtYPEpOOP_FIREDbYmONITOR , ifcIDtYPEpOOP_FIRED ) ;
    }
    return poop ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600116a.thirdc.operator_const_poopc_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600116c.thirdc.winarcf BEGIN
#define DDNAME       "3func.3600116c.thirdc.winarcf"
#define DDNUMB      (countT)0x3600116c
#define IDFILE      (countT)0xc1d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//ASSUME: paperP.mIdCol paperP.mIdRow ARE CONSISTENT WITH THE O.S. VALUE FOR THE CURRENT DRAWING POSITION

/*1*/voidT thirdC::winArcF( tinS& tinP , const handleC& hDrawP , const measureT mIdColFromP , const measureT mIdRowFromP , const measureT mIdColToP , const measureT mIdRowToP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        //__Z( mIdColToP ) ;
        //__Z( mIdRowToP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __OS2__ )

        //U:

    #elif defined( __NT__ )

        if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
        {
            const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)hDrawP).c2 ;

            countT idcFrom = R( winOsColIF( mIdColFromP              ) ) ;
            countT idcTo   = R( winOsColIF( mIdColToP                ) ) ;
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

            //LOGrAW9( "ArcF           (idcFrom idrFrom idcTo idrTo): " , idcFrom , " " , idrFrom , " " , idcTo , " " , idrTo , "\r\n" ) ; //U::

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600116c.thirdc.winarcf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001174.thirdc.winopendrawingtoolf BEGIN
#define DDNAME       "3func.36001174.thirdc.winopendrawingtoolf"
#define DDNUMB      (countT)0x36001174
#define IDFILE      (countT)0xc1e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 hP
 idTypeP
 pcP
  can be 0
  if not 0 then contains specifications for the tool
*/
/**/

/*1*/voidT thirdC::winOpenDrawingToolF( tinS& tinP , handleC& hP , const countT idTypeP , const countT* const pcP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( ~hP ) ;
        __Z( idTypeP ) ;
        if( POOP ) return ;
    }

    _IO_
    #if defined( __OS2__ )
        //U:
    #elif defined( __NT__ )

        switch( idTypeP )
        {
            case ifcIDtYPEdRAWINGtOOL_BITMAPmONOCHROME :
            {
                if( pcP )
                {
                    ZE( count01T* , pcBlack ) ; //WIN32 REQUIRES WORD ALIGNMENT (count01T ALIGNMENT)
                    {
                        countT bpw = SB * sizeof( count01T ) ; //BITS PER WEE

                        countT wpl = ( pcP[ 0 ] + bpw - 1 ) / bpw ; //WEE PER LINE
                        countT cwca = wpl * pcP[ 1 ] ;
                        newF( tinP , LF , pcBlack , cwca ) ; ___( pcBlack ) ;
                        c_memsetIF( tinP , (byteT*)pcBlack , cwca * sizeof( count01T ) ) ;
                    }

                    if( pcBlack )
                    {
                        BOS( WHATgbo , BOSoK , CreateBitmap( pcP[ 0 ] , pcP[ 1 ] , 1 , 1 , (voidT*)pcBlack ) )
                        BOSpOOP
                        hP.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , tinP.brcRaw ) ;
                        delF( tinP , pcBlack ) ;
    
                        HANDLEaPPnOTEScOUNTcLASS& cAppNotes = hP ;
                        cAppNotes.c1 = pcP[ 0 ] ;
                        cAppNotes.c2 = pcP[ 1 ] ;
                        //LOGrAWtID4( "ifcIDtYPEdRAWINGtOOL_BITMAP (cCols,cRows): " , pcP[ 0 ] , " " , pcP[ 1 ] ) ;
                    }
                }

                break ;
            }
        }

        if( !hP )
        {
            BOSdOnOTtEST( WHATgbo , GetLastError() )
            countT rc = tinP.brcRaw ;
            __( rc ) ;
            __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001174.thirdc.winopendrawingtoolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600117e.thirdc.dosquerymodulehandlef BEGIN
#define DDNAME       "3func.3600117e.thirdc.dosquerymodulehandlef"
#define DDNUMB      (countT)0x3600117e
#define IDFILE      (countT)0xc1f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT thirdC::dosQueryModuleHandleF( tinS& tinP , handleC& handleP , const osTextT* const postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( ~handleP ) ;
        __Z( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    #if defined( __NT__ )

        BOS( WHATgbo , BOSoK , GetModuleHandle( postP ) )
        BOSpOOP
        if( !POOP ) handleP.osF( ifcIDtYPEhANDLE_DLL , tinP.brcRaw ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600117e.thirdc.dosquerymodulehandlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001194.thirdc.diskWalkCopyF BEGIN
#define DDNAME       "3func.36001194.thirdc.diskWalkCopyF"
#define DDNUMB      (countT)0x36001194
#define IDFILE      (countT)0xc20


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for max speed, i have no overhead code
U:: i also do not check return codes, which needs to be done
*/
/**/

/*1*/voidT thirdC::diskWalkCopyF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postToP , const osTextT* const postFromP , diskWalkCopyCBFT pCbfP , countT* pcArgP )/*1*/
{
    diskWalkCopyInfoS info ;
    BOSdOnOTtEST( WHATgbo , strcpy( info.postTo , postToP ) )
    BOSdOnOTtEST( WHATgbo , strlen( info.postTo ) )
    info.costToRoot   = tinP.brcRaw ;
    BOSdOnOTtEST( WHATgbo , strlen( postFromP ) )
    info.costFromRoot = tinP.brcRaw ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgP ;

    dosCreateDirF( tinP , info.postTo ) ;
    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postFromP , bQuitP , flDISKwALK_null , diskWalkCopyCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001194.thirdc.diskWalkCopyF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001195.thirdc.diskzipf BEGIN
#define DDNAME       "3func.36001195.thirdc.diskzipf"
#define DDNUMB      (countT)0x36001195
#define IDFILE      (countT)0xc21


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::diskZipF( tinS& tinP , const osTextT* const postToP , const osTextT* const postFromP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postToP ) ;
        __Z( postFromP ) ;
        FV( flZIP , flagsP ) ;
        if( POOP ) return ;
    }

    osTextT postTo[   TUCK << 1 ] ;
    osTextT postFrom[ TUCK << 1 ] ;
    c_strcpyIF( tinP , postTo   , postToP   ) ;
    c_strcpyIF( tinP , postFrom , postFromP ) ;
    countT costTo   = c_strlenIF( tinP , postTo ) ;
    countT costFrom = c_strlenIF( tinP , postFrom ) ;
    if( postTo[   costTo   - 1 ] == '\\' ) postTo[   costTo   - 1 ] = 0 ;
    if( postFrom[ costFrom - 1 ] == '\\' ) postFrom[ costFrom - 1 ] = 0 ;

    OStEXT(   ostoArgs , TUCK << 2 ) ;
    OStEXTA(  ostoArgs , F(flagsP) & flZIP_DELETE ? "-9rm " : "-9r " ) ;
    OStEXTA(  ostoArgs , postTo ) ;
    OStEXTAK( ostoArgs , " " ) ;
    OStEXTA(  ostoArgs , postFrom ) ;

    ZE( countT , value ) ;
    ZE( countT , idDeathType ) ;
    dosExecPgmF( tinP , countTC() , countTC() , value , idDeathType , "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip\\zip.exe\\zip.exe" , ostoArgs ) ;
    __( value ) ;
    __( idDeathType ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001195.thirdc.diskzipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001196.thirdc.diskWalkGatherF BEGIN
#define DDNAME       "3func.36001196.thirdc.diskWalkGatherF"
#define DDNUMB      (countT)0x36001196
#define IDFILE      (countT)0xc22


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::diskWalkGatherF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postToP , const osTextT* const postFromP , diskWalkCopyCBFT pCbfP , countT* pcArgP )/*1*/
{
    diskWalkCopyInfoS info ;
    BOSdOnOTtEST( WHATgbo , strcpy( info.postTo , postToP ) )
    BOSdOnOTtEST( WHATgbo , strlen( info.postTo ) )
    info.costToRoot   = tinP.brcRaw ;
    BOSdOnOTtEST( WHATgbo , strlen( postFromP ) )
    info.costFromRoot = tinP.brcRaw ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgP ;

    dosCreateDirF( tinP , info.postTo ) ;
    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postFromP , bQuitP , flDISKwALK_null , diskWalkGatherCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001196.thirdc.diskWalkGatherF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001197.thirdc.diskWalkTimePrefixF BEGIN
#define DDNAME       "3func.36001197.thirdc.diskWalkTimePrefixF"
#define DDNUMB      (countT)0x36001197
#define IDFILE      (countT)0xc23


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::diskWalkTimePrefixF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postFromP , diskWalkCopyCBFT pCbfP , countT* pcArgP )/*1*/
{
    diskWalkCopyInfoS info ;
    BOSdOnOTtEST( WHATgbo , strlen( postFromP ) )
    info.costFromRoot = tinP.brcRaw ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgP ;

    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postFromP , bQuitP , flDISKwALK_null , diskWalkTimePrefixCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001197.thirdc.diskWalkTimePrefixF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001198.thirdc.diskWalkRenameForArchivalF BEGIN
#define DDNAME       "3func.36001198.thirdc.diskWalkRenameForArchivalF"
#define DDNUMB      (countT)0x36001198
#define IDFILE      (countT)0xc24


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::diskWalkRenameForArchivalF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postToP , const osTextT* const postFromP , diskWalkCopyCBFT pCbfP )/*1*/
{
    //  yyyymmdd hhmm
    // "20130510@2359"
    TN( tSssDateTime1 , "" ) ; tSssDateTime1 =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
            +T("20")                                                    //BUG: THIS WILL STOP WORKING AFTER THE YEAR 2099
            +S3(5,sc_ccSSSrEPEAT,5)
            +S2(sa_SSSoR,sc_ccSSS)
                +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
                +T("x")                                                 // "x" IS ALLOWED AS A DIGIT.  IT MEANS "UNKNOWN"
            +S2(sa_SSSoReND,sc_ccSSS)
            +T("@")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("012x")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S3(2,sc_ccSSSrEPEAT,2)
            +S2(sa_SSSoR,sc_ccSSS)
                +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
                +T("x")                                                 // "x" IS ALLOWED AS A DIGIT.  IT MEANS "UNKNOWN"
            +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //   yyyy mm dd hh mm
    // "_2009_06_06_19_51."
    // "_2009_06_06_19_51_"
    TN( tSssDateTime2 , "" ) ; tSssDateTime2 =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)

            +T("_20")                               // yyyy               BUG: THIS WILL STOP WORKING AFTER THE YEAR 2099
            +S3(1,sc_ccSSSrEPEAT,1)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_")

            +S2(sa_SSSoR,sc_ccSSS)                  // mm
                +T("01")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_")

            +S2(sa_SSSoR,sc_ccSSS)                  // dd
                +T("0123")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_")

            +S2(sa_SSSoR,sc_ccSSS)                  // hh
                +T("012")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_")

            +S2(sa_SSSoR,sc_ccSSS)                  // mm
                +T("012345")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)

        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //                    yyyymmdd hhmm
    // "\internet\2013_01_20130128-174843-"
    TN( tSssDateTime3 , "" ) ; tSssDateTime3 =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)

            +T("20")                                // yyyy (IGNORE)      BUG: THIS WILL STOP WORKING AFTER THE YEAR 2099
            +S3(1,sc_ccSSSrEPEAT,1)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_")

            +S2(sa_SSSoR,sc_ccSSS)                  // mm (IGNORE)
                +T("01")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("_20")                               // yyyy               BUG: THIS WILL STOP WORKING AFTER THE YEAR 2099
            +S3(1,sc_ccSSSrEPEAT,1)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
    
            +S2(sa_SSSoR,sc_ccSSS)                  // mm
                +T("01")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
    
            +S2(sa_SSSoR,sc_ccSSS)                  // dd
                +T("0123")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("-")

            +S2(sa_SSSoR,sc_ccSSS)                  // hh
                +T("012")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +S2(sa_SSSoR,sc_ccSSS)                  // mm
                +T("012345")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +S2(sa_SSSoR,sc_ccSSS)                  // ss
                +T("012345")
            +S2(sa_SSSoReND,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)

            +T("-")

        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //20170103@1339: THE FOLLOWING SPECS WERE ADDED SO THAT I CAN CONVERT FORMAT 6 FILES TO FORMAT 7 FILESETS ("FILESET" HERE MEANS A DATA FILE WITH ACCOMPANYING META FILE INFORMATION, USING WO O.S. FILE FOR EACH META FIELD)
    // THE PRECEDING SPECS ARE NOT USED BUT ARE RETAINED SO THAT THEY CAN BE USED IF NEEDED TO MORE ACCURATELY TIMESTAMP; BY NOT USING THEM WE RELY ON FILE TIME RATHER THAN TIME PUT INTO THE FILENAME BY E.G. A VOICE RECORDER OR CAMERA

    // EXAMPLE: !ideafarm.6.19991228@0000.001.000b3751.c44d5e6f.2f9afda7.scanner.!.19991228@0000.notarized.declaration.of.legal.name.change.0600x.jpg
    // EXAMPLE: !ideafarm.6.19981028@0000.001.!.day.title.ttt
    // RECIPE
    //  
    //  LOOK FOR OO TIMES AFTER ".!."
    //   IF FIND 2 USE THEM IN THE ORDER FOUND, EVEN IF NOT IN ORDER
    //   IF FIND 1 THEN USE IT AND FOLLOW IT WITH THE FILE TIME
    //   IF FIND 0 THEN USE TIME AFTER ".6." FOR WOTH TIME AND FILE TIME FOR OOTH TIME

    //  yyyymmdd hhmm
    // "20130510@2359"
    TN( tPatternDateAtTime , "" ) ; tPatternDateAtTime =

        T("")
        +S3(7,sc_ccSSSrEPEAT,7)
        +S2(sa_SSSoR,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
            +T("xz")                                                 // "x" OR "z" ARE ALLOWED AS A DIGIT.  IT MEANS "UNKNOWN"
        +S2(sa_SSSoReND,sc_ccSSS)
        +T("@")
        +S2(sa_SSSoR,sc_ccSSS)
            +T("012xz")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S3(2,sc_ccSSSrEPEAT,2)
        +S2(sa_SSSoR,sc_ccSSS)
            +S2(sa_SSSmARKnUMERIC9,sc_cSSSmARK)
            +T("xz")                                                 // "x" OR "z" ARE ALLOWED AS A DIGIT.  IT MEANS "UNKNOWN"
        +S2(sa_SSSoReND,sc_ccSSS)

    ;

    //  mmddyyhhmm
    // "0721171234"
    TN( tPatternMMDDYYHHMM , "" ) ; tPatternMMDDYYHHMM =

        T("")
        +S2(sa_SSSoR,sc_ccSSS)
            +T("01")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123456789")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123456789")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("12")                    //WILL FAIL FOR YEAR 30 (2030)
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123456789")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("012")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123456789")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("012345")
        +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSoR,sc_ccSSS)
            +T("0123456789")
        +S2(sa_SSSoReND,sc_ccSSS)

    ;

    //   yyyymmdd hhmm yyyymmdd hhmm
    // ".20130510@2359.20130510@2359."
    TN( tSssDotDateAtTimeDotDateAtTimeDot , "" ) ; tSssDotDateAtTimeDotDateAtTimeDot =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
            //20190512@0912:  CHANGED TO MATCH ON "." OR "_" RATHER THAN JUST ON ".", IN ORDER TO FIND DATETIME IN FILENAME WHEN "_" ARE USED (SONY SOUND ORGANIZER REPLACES DOTS WITH UNDERSCORES)
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //   yyyymmdd hhmm
    // ".20130510@2359."
    TN( tSssDotDateAtTimeDot , "" ) ; tSssDotDateAtTimeDot =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //  yyyymmdd hhmm yyyymmdd hhmm
    // "20130510@2359.20130510@2359."
    TN( tSssDateAtTimeDotDateAtTimeDot , "" ) ; tSssDateAtTimeDotDateAtTimeDot =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //  yyyymmdd hhmm
    // "20130510@2359."
    TN( tSssDateAtTimeDot , "" ) ; tSssDateAtTimeDot =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
            +tPatternDateAtTime
            //+T(".")
            +S2(sa_SSSoR,sc_ccSSS)
                +T("._")
            +S2(sa_SSSoReND,sc_ccSSS)
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //  mmddyyhhmm
    // "0721171234"
    TN( tSssMMDDYYHHMM , "" ) ; tSssMMDDYYHHMM =

        T("")
        +S2(sa_SSSaND,sc_ccSSS)
        +tPatternMMDDYYHHMM
        +S2(sa_SSSaNDeND,sc_ccSSS)

    ;

    //ALSO USED BY CBF; CT HERE TO SPEED THINGS UP
    TN( tDot , "." ) ;
    TN( tAt , "@" ) ;
    TN( t20 , "20" ) ;
    TN( tSDS , "/./" ) ;
    TN( tSDDS , "/../" ) ;
    TN( tNewPrefix , "!ideafarm.9.2.00000000.00000001." ) ;             //U:: HARDCODED idOwner
    TN( tDotTypeData , ".data" ) ;
    TN( tDotTypeMetaDotHashedName , ".meta.hashedname" ) ;
    TN( tDotTypeMetaDotCurrentName , ".meta.currentname" ) ;
    TN( tDotTypeMetaDotPathRoot    , ".meta.pathroot" ) ;
    TN( tDotTypeMetaDotPathLeaf    , ".meta.pathleaf" ) ;

    textC* pptSpec[] =
    {
        &tSssDateTime1 ,                            // 0
        &tSssDateTime2 ,                            // 1
        &tSssDateTime3 ,                            // 2
        &tSssDotDateAtTimeDotDateAtTimeDot ,        // 3
        &tSssDotDateAtTimeDot ,                     // 4
        &tSssDateAtTimeDotDateAtTimeDot ,           // 5
        &tSssDateAtTimeDot ,                        // 6
        &tSssMMDDYYHHMM ,                           // 7
        &tDot ,                                     // 8
        &tSDS ,                                     // 9
        &tSDDS ,                                    // a
        &tNewPrefix ,                               // b
        &tDotTypeData ,                             // c
        &tDotTypeMetaDotHashedName ,                // d
        &tDotTypeMetaDotCurrentName ,               // e
        &tDotTypeMetaDotPathRoot ,                  // f
        &tDotTypeMetaDotPathLeaf ,                  // 01
        &tAt ,                                      // 11
        &t20                                        // 12
    } ;

    TN( tDateAtTimeLath , "" ) ;
    ZE( countT , idSequenceLath ) ;

    countT pcArgApp[] = { (countT)postToP , (countT)pptSpec , sizeof pptSpec / sizeof pptSpec[ 0 ] , (countT)&tDateAtTimeLath , (countT)&idSequenceLath } ;

    diskWalkCopyInfoS info ;
    BOSdOnOTtEST( WHATgbo , strlen( postFromP ) )
    info.costFromRoot = tinP.brcRaw ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgApp ;

    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postFromP , bQuitP , flDISKwALK_null , diskWalkRenameForArchivalCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001198.thirdc.diskWalkRenameForArchivalF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001199.thirdc.diskunzipf BEGIN
#define DDNAME       "3func.36001199.thirdc.diskunzipf"
#define DDNUMB      (countT)0x36001199
#define IDFILE      (countT)0xc25


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
the file obtained will be placed in the current directory
if the file name contains a path, the path portion will be discarded
*/
/**/

/*1*/voidT thirdC::diskUnzipF( tinS& tinP , const osTextT* const postFileP , const osTextT* const postZipfileP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postFileP ) ;
        __Z( postZipfileP ) ;
        if( POOP ) return ;
        __Z( *postFileP ) ;
        __Z( *postZipfileP ) ;
        FV( flUNZIP , flagsP ) ;
        if( POOP ) return ;
    }

    osTextT postFile[    TUCK << 1 ] ;
    osTextT postZipfile[ TUCK << 1 ] ;
    c_strcpyIF( tinP , postFile    , postFileP    ) ;
    c_strcpyIF( tinP , postZipfile , postZipfileP ) ;
    countT costFile    = c_strlenIF( tinP , postFile    ) ;
    countT costZipfile = c_strlenIF( tinP , postZipfile ) ;
    if( postFile[    costFile    - 1 ] == '\\' ) postFile[    costFile    - 1 ] = 0 ;
    if( postZipfile[ costZipfile - 1 ] == '\\' ) postZipfile[ costZipfile - 1 ] = 0 ;

    OStEXT(   ostoArgs , TUCK << 2 ) ;
    OStEXTAK( ostoArgs , "-ojqq " ) ;
    OStEXTA(  ostoArgs , postZipfile ) ;
    OStEXTAK( ostoArgs , " " ) ;
    OStEXTA(  ostoArgs , postFile ) ;

    ZE( countT , value ) ;
    ZE( countT , idDeathType ) ;
    dosExecPgmF( tinP , countTC() , countTC() , value , idDeathType , "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip\\unzip.exe\\unzip.exe" , ostoArgs ) ;
    __( value ) ;
    __( idDeathType ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.36001199.thirdc.diskunzipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119a.thirdc.c_atoiforeigndecimalif BEGIN
#define DDNAME       "3func.3600119a.thirdc.c_atoiforeigndecimalif"
#define DDNUMB      (countT)0x3600119a
#define IDFILE      (countT)0xc26


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
  must point to a numeric value, possibly signed, in foreign order, using digits [0,9]
*/
/**/

/*1*/sCountT thirdC::c_atoiForeignDecimalIF( const osTextT* const postP , const boolT bSignedP )/*1*/
{
    ZE( sCountT , vv ) ;

    const osTextT* postc = postP ;

    ZE( boolT , bNeg ) ;
    while( *postc )
    {
        vv *= 0xa ;

        if( *postc == '-' )
        {
            if( bSignedP ) bNeg = !bNeg ;
            else           break ;
        }
        else if( *postc < '0' || *postc > '9' ) break ;
        else                                    vv += *postc - '0' ;

        postc ++ ;
    }

    if( bNeg ) vv = - vv ;

    return vv ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119a.thirdc.c_atoiforeigndecimalif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119b.thirdc.osoffnumanodevalidchosenif BEGIN
#define DDNAME       "3func.3600119b.thirdc.osoffnumanodevalidchosenif"
#define DDNUMB      (countT)0x3600119b
#define IDFILE      (countT)0xc27


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol anywhere almost
*/
/**/

/*1*/countT thirdC::osOffNumaNodeValidChosenIF( countT idNodeWantedP )/*1*/
{
    countT offNodeValidChosen = NUMA_NO_PREFERRED_NODE ;

    if( idNodeWantedP )
    {
        ULONG offNodeMax = 0 ;
        if( GetNumaHighestNodeNumber( &offNodeMax ) )
        {
            countT cSkip = idNodeWantedP - 1 ;
            for( countT offNode = 0 ; offNode <= offNodeMax ; offNode ++ )
            {
                ULONGLONG mask = 0 ;
                if( GetNumaNodeProcessorMask( 0 , &mask ) )
                {
                    if( !( cSkip -- ) )
                    {
                        offNodeValidChosen = offNode ;
                        break ;
                    }
                }
            }
        }
    }

    return offNodeValidChosen ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119b.thirdc.osoffnumanodevalidchosenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119c.thirdc.oslogwrongnodeif BEGIN
#define DDNAME       "3func.3600119c.thirdc.oslogwrongnodeif"
#define DDNUMB      (countT)0x3600119c
#define IDFILE      (countT)0xc28


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
U::not thread safe
*/
/**/

PSAPI_WORKING_SET_EX_INFORMATION pInfoGrain[ TOCK >> 1 ] ;

/*1*/voidT thirdC::osLogWrongNodeIF( tinS& tinP )/*1*/
{
    #if defined( __NT__ )

        processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;

        //if( pg1.idAdamRoot != ifcIDaDAM_ADAM && pg1.idAdamRoot != ifcIDaDAM_EVE && pg1.idAdamRoot != ifcIDaDAM_ELF ) //U:: REMOVE THIS LINE IN PRODUCTION
        if( pg1.idNumaNode )
        {
            countT cbGrain = thirdC::os_cbAllocationGrain_IF( tinP ) ;
            countT cGrains = BM_HIGH / cbGrain ;
            if( cGrains != sizeof pInfoGrain / sizeof pInfoGrain[ 0 ] ) { BLAMMO ; }

            //CONoUTrAW( "\r\n\r\nAddress Space Usage (ct processGlobal1I):\r\n\r\n" ) ;
            //CONoUTrAW3( "[cbGrain]: " , cbGrain , "\r\n" ) ;
            ZE( countT , idColLath ) ;
            countT offg = -1 ;
            for( byteT* pbTry = 0 ; pbTry < (byteT*)BM_HIGH ; pbTry += cbGrain )
            {
                pInfoGrain[ ++ offg ].VirtualAddress = (voidT*)pbTry ;
            }

            static BOOL bOk = QueryWorkingSetEx( GetCurrentProcess() , pInfoGrain , sizeof( PSAPI_WORKING_SET_EX_INFORMATION ) * TOCK / 2 ) ;

            countT rc = bOk ? 0 : GetLastError() ;
            //CONoUTrAW5( "processGlobal1I / QueryWorkingSetEx [bOk,rc]:    " , bOk , "    " , rc , "\r\n" ) ;

            PSAPI_WORKING_SET_EX_INFORMATION* pInfoGrainAtLaunch = (PSAPI_WORKING_SET_EX_INFORMATION*)pg1.pcInfoGrain ;

            LOGrAW( "osLogWrongNodeIF / scanning\r\n" ) ;
            CONoUTrAW( "osLogWrongNodeIF / scanning\r\n" ) ;
            ZE( countT , cFound ) ;
            for( offg = 0 ; offg < cGrains ; offg ++ )
            {
                if( !pInfoGrainAtLaunch[ offg ].VirtualAttributes.Valid && pInfoGrain[ offg ].VirtualAttributes.Valid && pInfoGrain[ offg ].VirtualAttributes.Node != pg1.idNumaNode - 1 )
                {
                    cFound ++ ;

                    //ULONG_PTR Bad  :1;
                    //ULONG_PTR Reserved  :7;
                    //ULONG_PTR LargePage  :1;
                    //ULONG_PTR Locked  :1;
                    //ULONG_PTR Node  :6;
                    //ULONG_PTR Shared  :1;
                    //ULONG_PTR Win32Protection  :11;
                    //ULONG_PTR ShareCount  :3;
                    //ULONG_PTR Valid  :1;

                    osTextT postSay[ TUCK ] = "" ;

                    switch( pInfoGrain[ offg ].VirtualAttributes.Win32Protection )
                    {
                        case PAGE_EXECUTE            : { thirdC::c_strcatIF( tinP , postSay, " execute         " ) ; break ; }
                        case PAGE_EXECUTE_READ       : { thirdC::c_strcatIF( tinP , postSay, " executeRead     " ) ; break ; }
                        case PAGE_EXECUTE_READWRITE  : { thirdC::c_strcatIF( tinP , postSay, " executeReadWrite" ) ; break ; }
                        case PAGE_EXECUTE_WRITECOPY  : { thirdC::c_strcatIF( tinP , postSay, " executeWriteCopy" ) ; break ; }
                        case PAGE_NOACCESS           : { thirdC::c_strcatIF( tinP , postSay, " noAccess        " ) ; break ; }
                        case PAGE_READONLY           : { thirdC::c_strcatIF( tinP , postSay, " readOnly        " ) ; break ; }
                        case PAGE_READWRITE          : { thirdC::c_strcatIF( tinP , postSay, " readWrite       " ) ; break ; }
                        case PAGE_WRITECOPY          : { thirdC::c_strcatIF( tinP , postSay, " writeCopy       " ) ; break ; }
                        //case PAGE_TARGETS_INVALID    : { thirdC::c_strcatIF( tinP , postSay, " targetsInvalid  " ) ; break ; }
                        //case PAGE_TARGETS_NO_UPDATE  : { thirdC::c_strcatIF( tinP , postSay, " targetsNoUpdate " ) ; break ; }
                        default                      : { thirdC::c_strcatIF( tinP , postSay, " notRecognized   " ) ; break ; }
                    }
                    c_strcatIF( tinP , postSay, "\r\n" ) ;

                    OStEXT(   ostoSay , TUCK << 1 ) ;
                    OStEXTAK( ostoSay , "[offg,@,offNode]:    " ) ;
                    OStEXTC(  ostoSay , offg , ' ' ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTCF( ostoSay , pInfoGrain[ offg ].VirtualAddress , '0' ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pInfoGrain[ offg ].VirtualAttributes.Node , ' ' ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTA(  ostoSay , postSay ) ;

                    LOGrAW( ostoSay ) ;
                    CONoUTrAW( ostoSay ) ;
                }
            }
            LOGrAW3( "osLogWrongNodeIF / scanned [cFound]: " , cFound , "\r\n" ) ;
            CONoUTrAW3( "osLogWrongNodeIF / scanned [cFound]: " , cFound , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119c.thirdc.oslogwrongnodeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119d.thirdc.ostracewrongnodeif BEGIN
#define DDNAME       "3func.3600119d.thirdc.ostracewrongnodeif"
#define DDNUMB      (countT)0x3600119d
#define IDFILE      (countT)0xc29


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::osTraceWrongNodeIF( tinS& tinP , byteT* pbP , const osTextT* const postComment1P , const osTextT* const postComment2P )/*1*/
{
    #if defined( __NT__ )

        PSAPI_WORKING_SET_EX_INFORMATION info ;
        c_memsetIF( tinP , (byteT*)&info , sizeof info ) ;
        info.VirtualAddress = (voidT*)pbP ;
        BOS( WHATgbo , BOSoK , QueryWorkingSetEx( GetCurrentProcess() , &info , sizeof info ) )
        BOSpOOP

        if( !POOP )
        {
            countT osOffNodeWanted = osOffNumaNodeValidChosenIF( processGlobal1I.idNumaNode ) ;

            if( osOffNodeWanted != NUMA_NO_PREFERRED_NODE && processGlobal1I.idNumaNode && info.VirtualAttributes.Valid && info.VirtualAttributes.Node != osOffNodeWanted )
            {
//DISABLE IN PRODUCTION
#if defined( NEVERdEFINED )
                OStEXT(   ostoSay , TUCK << 2 ) ;
                OStEXTAK( ostoSay , "osTraceWrongNodeIF / warning: memory in another node is being referenced [pbP,idNodeWanted,osOffNodeWanted,osOffNode]: " ) ;
                OStEXTCF( ostoSay , (countT)pbP , '0' ) ;
                OStEXTAK( ostoSay , " " ) ;
                OStEXTCF( ostoSay , processGlobal1I.idNumaNode , '0' ) ;
                OStEXTAK( ostoSay , " " ) ;
                OStEXTCF( ostoSay , osOffNodeWanted , '0' ) ;
                OStEXTAK( ostoSay , " " ) ;
                OStEXTCF( ostoSay , info.VirtualAttributes.Node , '0' ) ;

                if( postComment1P )
                {
                    osTextT postComment[ TUCK ] = "" ;
                    c_strncpyIF( tinP , postComment , postComment1P , sizeof postComment ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTA(  ostoSay , postComment ) ;
                }

                if( postComment2P )
                {
                    osTextT postComment[ TUCK ] = "" ;
                    c_strncpyIF( tinP , postComment , postComment2P , sizeof postComment ) ;
                    OStEXTA(  ostoSay , postComment ) ;
                }

                if( tinP.idTinNamed == ifcIDtINnAMED_tinHeartI || tinP.idTinNamed == ifcIDtINnAMED_tinBreakI )
                {
                    LOGrAW( "\r\n" ) ;
                    LOGrAW( ostoSay ) ;
                    LOGrAW( "\r\n" ) ;
                }
                else if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T(ostoSay) ) ;
                else              etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;

                //BLAMMO ; //U::20170410@1500: KEEP UNTIL UNDERSTAND WHY THIS OCCURS AND CAN PREVENT IT
#endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119d.thirdc.ostracewrongnodeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119e.thirdc.diskWalkSearchF BEGIN
#define DDNAME       "3func.3600119e.thirdc.diskWalkSearchF"
#define DDNUMB      (countT)0x3600119e
#define IDFILE      (countT)0xc2a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for max speed, i have no overhead code
*/
/**/

/*1*/voidT thirdC::diskWalkSearchF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postP , const osTextT* const postFindP , const flagsT flagsP , diskWalkSearchCBFT pCbfP , countT* pcArgP )/*1*/
{
    diskWalkSearchInfoS info ;
    BOSdOnOTtEST( WHATgbo , strlen( postP ) )
    info.costRoot     = tinP.brcRaw ;
    info.postFind     = postFindP ;
    info.flagsSearch  = flSEARCH_null ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgP ;

    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postP , bQuitP , flagsP , diskWalkSearchCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.3600119e.thirdc.diskWalkSearchF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ac.thirdc.s_writeif BEGIN
#define DDNAME       "3func.360011ac.thirdc.s_writeif"
#define DDNUMB      (countT)0x360011ac
#define IDFILE      (countT)0xc2b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::s_writeIF( tinS& tinP , handleC& handleP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        __Z( pbP ) ;
        IFsIMULATEoFFLINEpOOP
        if( POOP ) return ;
    }

    const countT cbw = cbP ? cbP : c_strlenIF( tinP , pbP ) ;

    _IO_
    ZE( countT , off ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !POOP )
        {
            countT cbBite = cbw - off ;
            if( cbBite > 8192 ) cbBite = 8192 ;
    
            ZE( sCountT , cba ) ;
            BOSS( WHATsiw , BOSsOCKETcODE2 , send( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , (byteT*)( pbP + off ) , cbBite , 0 ) )
            BOSpOOP

            if( !POOP )
            {
                cba = tinP.brcRaw ;

                if( !cba         ) thirdC::dosSleepIF( tinP , 4000 ) ;
                else if( cba > 0 ) off += cba , tinP.odoSockCbWrite += cba ;
                else
                {
                    { __( cba ) ; }
                    break ; // SHOULD BE REDUNDANT SINCE while LOOP IS CONDITIONAL ON !POOP
                }
            }
    
            if( off == cbw ) break ;
            ++ s ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ac.thirdc.s_writeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ad.thirdc.diskWalkSearchIgnoreCaseF BEGIN
#define DDNAME       "3func.360011ad.thirdc.diskWalkSearchIgnoreCaseF"
#define DDNUMB      (countT)0x360011ad
#define IDFILE      (countT)0xc2c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for max speed, i have no overhead code
*/
/**/

/*1*/voidT thirdC::diskWalkSearchIgnoreCaseF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postP , const osTextT* const postFindP , const flagsT flagsP , diskWalkSearchCBFT pCbfP , countT* pcArgP )/*1*/
{
    diskWalkSearchInfoS info ;
    BOSdOnOTtEST( WHATgbo , strlen( postP ) )
    info.costRoot     = tinP.brcRaw ;
    info.postFind     = postFindP ;
    info.flagsSearch  = flSEARCH_IGNOREcASE ;
    info.pCbf         = pCbfP ;
    info.pcArgApp     = pcArgP ;

    thirdC::diskWalkIF( tinP , cDirsP , cFilesP , postP , bQuitP , flagsP , diskWalkSearchCBF , (countT*)&info ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ad.thirdc.diskWalkSearchIgnoreCaseF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ae.thirdc.s_optionDualStackF BEGIN
#define DDNAME       "3func.360011ae.thirdc.s_optionDualStackF"
#define DDNUMB      (countT)0x360011ae
#define IDFILE      (countT)0x0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::s_optionDualStackF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( boolT , ze ) ;

    BOSS( WHATgbo , BOSfAIL , setsockopt( handleP.osF( ifcIDtYPEhANDLE_SOCKET ) , IPPROTO_IPV6 , IPV6_V6ONLY , (char*)&ze , sizeof ze ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011ae.thirdc.s_optionDualStackF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011af.thirdc.s_getComputerNameF BEGIN
#define DDNAME       "3func.360011af.thirdc.s_getComputerNameF"
#define DDNUMB      (countT)0x360011af
#define IDFILE      (countT)0x0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT thirdC::s_getComputerNameF( tinS& tinP , osTextT*& postP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( postP ) ;
        if( POOP ) return ;
    }

    _IO_

    osTextT postBuffer[ TUCK << 1 ] ;
    BOSS( WHATsir , BOSsOCKETcODE2 , gethostname( postBuffer , sizeof postBuffer ) )
    BOSpOOP

    newF( tinP , LF , postP , c_strlenIF( tinP , postBuffer ) + 1 ) ; ___( postP ) ;
    __Z( postP ) ;

    if( !POOP ) c_strcpyIF( tinP , postP , postBuffer ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36001* : 3func.360011af.thirdc.s_getComputerNameF END
