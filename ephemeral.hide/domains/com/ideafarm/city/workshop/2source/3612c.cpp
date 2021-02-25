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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612c* : 3func.3612c002.inoutframec.dt_inoutframec BEGIN
#define DDNAME       "3func.3612c002.inoutframec.dt_inoutframec"
#define DDNUMB      (countT)0x3612c002
#define IDFILE      (countT)0x1523


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

boolT bDebugIsSet ;

/*1*/inOutFrameC::~inOutFrameC( voidT )/*1*/
{
    tinS& tinP = tinCt ; _MILE  _

    if( !( F(flagsCt) & flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY ) )
    {
        QueryPerformanceCounter( (LARGE_INTEGER*)&say.cTime3 ) ;
        QueryThreadCycleTime( (HANDLE)(-2) ,  (ULONG64*)&say.cCpuCycles3 ) ;

        count04T deltaCpuCyclesIn = say.cCpuCycles3 - say.cCpuCycles2 ;
        count04T deltaTimeIn      = say.cTime3      - say.cTime2      ;

        if( pDad )
        {
            pDad->auditCpuCycles.dCpuCyclesAuditKidIn += deltaCpuCyclesIn ;
            pDad->auditTime     .dTimeAuditKidIn      += deltaTimeIn      ;
        }

        auditCpuCycles.dCpuCyclesAuditKidBetween += tinP.cCpuCycles2Or5Lath == say.cCpuCycles2
            ? deltaCpuCyclesIn
            : say.cCpuCycles3 - tinP.cCpuCycles2Or5Lath
        ;

        auditTime.dTimeAuditKidBetween += tinP.cTime2Or5Lath == say.cTime2
            ? deltaTimeIn
            : say.cTime3 - tinP.cTime2Or5Lath
        ;

        say.dCpuCyclesIn = say.cCpuCycles3 - say.cCpuCycles2 ;
        say.dTimeIn      = say.cTime3      - say.cTime2      ;

        {
            count04T dAuditCpuCyclesTotal =

                  auditCpuCycles.dCpuCyclesAuditKidBetween
                + auditCpuCycles.dCpuCyclesAuditKidCt
                + auditCpuCycles.dCpuCyclesAuditKidIn
                + auditCpuCycles.dCpuCyclesAuditKidDt
                + auditCpuCycles.dCpuCyclesAuditKidBook

            ;

            if( dAuditCpuCyclesTotal != say.dCpuCyclesIn )
            {
                OStEXT( ostoSay , TUCK ) ;
                OStEXTAK( ostoSay ,     "~inOutFrameC error: auditCpuCycles failure:    dAuditCpuCyclesTotal :    " ) ;
                OStEXTCF( ostoSay , ((countT*)&dAuditCpuCyclesTotal)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&dAuditCpuCyclesTotal)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n    dCpuCyclesIn:    " ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dCpuCyclesIn)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dCpuCyclesIn)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n dCpuCyclesInNet:    " ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dCpuCyclesInNet)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dCpuCyclesInNet)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n" ) ;
                CONoUTrAW( ostoSay ) ;
                LOGrAW( ostoSay ) ;
                BLAMMO ;
            }

            say.dCpuCyclesInNet = deltaCpuCyclesIn - ( dAuditCpuCyclesTotal - auditCpuCycles.dCpuCyclesAuditKidBetween ) ;
        }

        {
            count04T dAuditTimeTotal =

                  auditTime.dTimeAuditKidBetween
                + auditTime.dTimeAuditKidCt
                + auditTime.dTimeAuditKidIn
                + auditTime.dTimeAuditKidDt
                + auditTime.dTimeAuditKidBook

            ;

            if( dAuditTimeTotal != say.dTimeIn )
            {
                OStEXT( ostoSay , TUCK ) ;
                OStEXTAK( ostoSay ,     "~inOutFrameC error: auditTime failure:    dAuditTimeTotal :    " ) ;
                OStEXTCF( ostoSay , ((countT*)&dAuditTimeTotal)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&dAuditTimeTotal)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n    dTimeIn:    " ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dTimeIn)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dTimeIn)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n dTimeInNet:    " ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dTimeInNet)[1] , '0' ) ;
                OStEXTAK( ostoSay , "." ) ;
                OStEXTCF( ostoSay , ((countT*)&say.dTimeInNet)[0] , '0' ) ;
                OStEXTAK( ostoSay , "\r\n" ) ;
                CONoUTrAW( ostoSay ) ;
                LOGrAW( ostoSay ) ;
                BLAMMO ;
            }

            say.dTimeInNet = deltaTimeIn - ( dAuditTimeTotal - auditTime.dTimeAuditKidBetween ) ;
        }
    }

//    #if defined( ENABLEdROPnOTES )
//
//        if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ROOThTTPsERVER && !( F(tinP.flagsThreadMode4) & flTHREADmODE4_DOnOTtESTdROPhEADERS ) && tinP.pPoolUse )
//        {
//            THREADmODE4oN( flTHREADmODE4_DOnOTtESTdROPhEADERS )
//            PUSE.testDropHeadersF( tinP ) ;
//            THREADmODE4rESTORE
//        }
//
//    #endif

    tinP.monitor.idWhat1 = ifcIDwHAT_GOiNoUTdT ;_

    if( F(flagsCt) & flINoUTfRAMEc_REGISTERcALLnEST )
    {
        //if( tinP.pcWatchedByInOut && *tinP.pcWatchedByInOut != tinP.valueExpectedByInOut )
        //{
        //    LOGrAW5( "tinP [valueExpectedByInOut,*pcWatchedByInOut]: " , tinP.valueExpectedByInOut , " != " , *tinP.pcWatchedByInOut , "\r\n" ) ;_
        //    BLAMMO ;_
        //}
        //
        //{
        //    processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;_
        //    if( pg1.pcWatchedByInOut && *pg1.pcWatchedByInOut != pg1.valueExpectedByInOut )
        //    {
        //        LOGrAW5( "process global [valueExpectedByInOut,*pcWatchedByInOut]: " , pg1.valueExpectedByInOut , " != " , *pg1.pcWatchedByInOut , "\r\n" ) ;_
        //        BLAMMO ;_
        //    }
        //}

        if( F(tinP.flagsThreadMode1) & flTHREADmODE1_UPDATEtIN && !( tinP.monitor.idDirty % 2 ) )
        {
            tinP.monitor.idDirty ++ ;_

            const countT offos  =   tinP.monitor.idStep        & OFFsLOTtINsTEPmAX ; const countT offos2 = offos << 1 ;_
            const countT offon  =   tinP.monitor.cInNest       & OFFsLOTtINnESTmAX ; const countT offon2 = offon << 1 ;_
            const countT offonk = ( tinP.monitor.cInNest + 1 ) & OFFsLOTtINnESTmAX ; // "k" IS FOR "KID"

            if( tinP.tally.bTally ) tinP.tally.pcExits[ IDFILE ] ++ ;_

            IFwHEREiSwATCHING
            {
                countT off = idFileRankCt ;_
                if( off && off < tinP.ccExitsWhere ) inc02AM( tinP.pcExitsWhere[ off ] ) ;_
            }

            tinP.monitor.pLFnest[       offon2     ] = idLineNestSave ;_
            tinP.monitor.pLFnest[       offon2 + 1 ] = idFileNestSave ;_
            tinP.pIdInNest[             offonk     ] = 0 ;_
            tinP.pEIPInNest[            offon      ] = eipInNestSave ;_
            tinP.pIdProgressNest[       offon      ] = idProgressNestSave ;_
            tinP.pFlagsThreadLevelMode[ offon      ] = pFlagsThreadLevelModeSave ;_

            tinP.monitor.idStep ++ ;_
            tinP.monitor.cInNest -- ;_
            const countT offosNew  =   tinP.monitor.idStep        & OFFsLOTtINsTEPmAX ; const countT offos2New = offosNew << 1 ;_

            tinP.pLFstep[ offos2New     ] = idLineCt & ~fliSTEP_FLAGmASK | fliSTEP_NESTcHANGE | fliSTEP_NESToUT ;_
            tinP.pLFstep[ offos2New + 1 ] = idiFileCt ;_

            tinP.monitor.idDirty ++ ;_

            homeS* ph = &homeS::homeIF() ;_
            if( ph && ph->flags & F(flHOMEs_INoUTtRACE) )
            {
                if( !( tinP.bSuppressInOutTrace ++ ) && tinP.monitor.idThread != ifcIDtHREADlOW_tmHeartF && tinP.monitor.idThread != ifcIDtHREADlOW_break && tinP.monitor.idThread != ifcIDtHREADlOW_tmKillSocketF && tinP.monitor.idThread != ifcIDtHREADlOW_tmWatchF && tinP.monitor.idThread != ifcIDtHREADlOW_tmTimeNowF )
                {
                    OStEXT(   ostoSay , TUCK << 2 ) ;_
                    OStEXTC(  ostoSay , idiFileCt , 0 ) ;_
                    OStEXTAK( ostoSay , "(" ) ;_
                    OStEXTC9( ostoSay , idLineCt ) ;_
                    OStEXTAK( ostoSay , ") --    " ) ;_
                    const osTextT* postTitle = processGlobal7S::_processGlobal7I_IF().source.postFileTitleF( tinP , processGlobal7S::_processGlobal7I_IF().source.idFileRankF( tinP , idiFileCt ) ) ;_
                    if( postTitle )
                    {
                        OStEXTA( ostoSay , postTitle ) ;_
                    }

                    //U::SUSPECTED DEADLOCK: ((etherC*)0)->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;_
                }
                tinP.bSuppressInOutTrace -- ;_
            }

            thirdC::inOutChatterIfIF( tinP ) ;_
        }
        tinP.monitor.idWhat2 = idWhat2Save ;_
        _MOLE
    }

    tinP.monitor.idWhat1 = idWhat1Save ;_

    if( !( F(flagsCt) & flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY ) )
    {
        QueryPerformanceCounter( (LARGE_INTEGER*)&say.cTime4 ) ;
        QueryThreadCycleTime( (HANDLE)(-2) ,  (ULONG64*)&say.cCpuCycles4 ) ;

        if( pDad )
        {
            pDad->auditCpuCycles.dCpuCyclesAuditKidDt += say.cCpuCycles4 - say.cCpuCycles3 ;
            pDad->auditTime     .dTimeAuditKidDt      += say.cTime4      - say.cTime3      ;
        }

        say.dCpuCyclesDt = say.cCpuCycles4 - say.cCpuCycles3 ;
        say.dTimeDt      = say.cTime4      - say.cTime3      ;

        THREADmODE4oFF( flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY )
        {
            THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;

            ZE( boolT , bDone ) ;
            if( tinP.pbPendingInOutFramePackets )
            {
                countT&                 cPending =                *(countT*)  tinP.pbPendingInOutFramePackets                      ;
                tellInfoAppInOutFrameS* pPending = (tellInfoAppInOutFrameS*)( tinP.pbPendingInOutFramePackets + sizeof( countT ) ) ;

                if( !( F(flagsCt) & flINoUTfRAMEc_DEFERwRITINGaPPtELEMETRY ) )        // EMIT THE PENDING PACKETS IF I CAN
                {
                    if( cPending > CmAXpENDINGiNoUTfRAMEpACKETS )
                    {
                        CONoUTrAW5( "~inOutFrameC: error 1 [cPending,cMax]:    " , cPending , "    " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        LOGrAW5(    "~inOutFrameC: error 1 [cPending,cMax]:    " , cPending , "    " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        BLAMMO ;
                    }
                    else if( cPending >= CmAXpENDINGiNoUTfRAMEpACKETS * 7 / 8 )  // 1/8 OF THE CAPACITY IS USED TO ACCUMULATE WHEN I CANNOT EMIT TELEMETRY
                    {
                        //THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;
                        {
                            tellC tell( tinP , idLineCt , idiFileCt , 0 , ifcIDtYPEtELLaPP_INoUTaRRAY , tinP.pbPendingInOutFramePackets , sizeof( countT ) + cPending * sizeof( tellInfoAppInOutFrameS ) ) ;
                            thirdC::dosTellMonitorIF( tinP , tell , ifcIDbOOKStELL_APP ) ;
                        }
                        //THREADmODE4rESTORE

                        cPending = 0 ;
                    }
                }

                if( cPending > CmAXpENDINGiNoUTfRAMEpACKETS )
                {
                    CONoUTrAW5( "~inOutFrameC: error 2 [cPending,cMax]:    " , cPending , "    " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                    LOGrAW5(    "~inOutFrameC: error 2 [cPending,cMax]:    " , cPending , "    " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                    BLAMMO ;
                }
                else if( cPending < CmAXpENDINGiNoUTfRAMEpACKETS )
                {
                    pPending[ cPending ++ ] = say ;
                    bDone = 1 ;
                }
                else
                {
                    CONoUTrAW3( "~inOutFrameC: error 3: no more room in pending buffer [cPending]:    " , cPending , "\r\n" ) ;
                    LOGrAW3(    "~inOutFrameC: error 3: no more room in pending buffer [cPending]:    " , cPending , "\r\n" ) ;
                    cPending = 0 ;
                    pPending[ cPending ++ ] = say ;
                    bDone = 1 ;
                    BLAMMO ;
                }
            }

            if( !bDone && !( F(flagsCt) & flINoUTfRAMEc_DEFERwRITINGaPPtELEMETRY ) )
            {
                THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY ) ;
                TELLaPPc3LIFI( ifcIDtYPEtELLaPP_INoUT , (byteT*)&say , sizeof say , idLineCt , idiFileCt )
                THREADmODE4rESTORE
            }

            count04T deltaCpuCycles5 ;  //INTENTIONALLY UNINITIALIZED FOR SPEED
            count04T deltaTime5      ;  //INTENTIONALLY UNINITIALIZED FOR SPEED
            QueryPerformanceCounter( (LARGE_INTEGER*)&deltaTime5 ) ;
            QueryThreadCycleTime( (HANDLE)(-2) ,  (ULONG64*)&deltaCpuCycles5 ) ;

            tinP.cCpuCycles2Or5Lath = deltaCpuCycles5 ; //NOT DELTA YET
            tinP.cTime2Or5Lath      = deltaTime5      ; //NOT DELTA YET

            deltaCpuCycles5 -= say.cCpuCycles4 ;
            deltaTime5      -= say.cTime4      ;

            if( pDad )
            {
                pDad->auditCpuCycles.dCpuCyclesAuditKidBook += deltaCpuCycles5 ;
                pDad->auditTime     .dTimeAuditKidBook      += deltaTime5      ;
            }

            tinP.cTellsWriteInOutTelemetry ++ ;
            tinP.cCpuCyclesWriteInOutTelemetry += deltaCpuCycles5 ;
            tinP.cTimeWriteInOutTelemetry      += deltaTime5      ;

            THREADmODE4rESTORE
        }
        THREADmODE4rESTORE
    }

    tinP.pInOutFrame = pDad ;
}

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612c* : 3func.3612c002.inoutframec.dt_inoutframec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612c* : 3func.3612c003.inoutframec.inoutframec BEGIN
#define DDNAME       "3func.3612c003.inoutframec.inoutframec"
#define DDNUMB      (countT)0x3612c003
#define IDFILE      (countT)0x1524


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/* ASSUME: 02 BITS PER countT */

/*1*/inOutFrameC::inOutFrameC( tinS& tinP , const countT idLineP , const countT idiFileP , const countT idFileRankP , const boolT bClassP ) :/*1*/
pDad( tinP.pInOutFrame ) ,
tinCt( tinP ) ,
idLineCt( idLineP ) ,
idiFileCt( idiFileP ) ,
idFileRankCt( idFileRankP ) ,
flagsCt
(
    ( F(tinP.flagsThreadMode3) & flTHREADmODE3_INoUTfRAMErEGISTERcALLnEST
        ? flINoUTfRAMEc_REGISTERcALLnEST
        : flINoUTfRAMEc_null
    )
    |
    ( F(tinP.flagsThreadMode4) & flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY
        ? flINoUTfRAMEc_DEFERwRITINGaPPtELEMETRY
        : flINoUTfRAMEc_null
    )
    |
    (
        F(processGlobal1I._thirdC_flagsModeProcess1) & flMODEpROCESS1_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY
            ? flINoUTfRAMEc_null
            : F(tinP.flagsThreadMode4) & flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY
                ? flINoUTfRAMEc_null
                :
                (
                     F(tinP.flagsThreadMode4) & flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY
                  || F(processGlobal1I._thirdC_flagsModeProcess1) & flMODEpROCESS1_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY
                  || processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH08      //THIS LINE DISABLES TELEMETRY FOR THE REPORTER
                )
                    ? flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY
                    : processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH07      //THIS LINE ENABLES TELEMETRY FOR THE NULL ADAM DUT
                        ? flINoUTfRAMEc_null

                        : flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY          //TO DISABLE GENERALLY  (ENABLE THIS LINE IN PRODUCTION IFF WANT MAXIMUM SPEED)
                        //: flINoUTfRAMEc_null                            //TO ENABLE  GENERALLY  (ENABLE THIS LINE IN PRODUCTION IFF WANT FULL TIME TELEMETRY)
    )
) ,
idWhat1Save( tinP.monitor.idWhat1 ) ,
idWhat2Save( tinP.monitor.idWhat2 )
//INTENTIONALLY UNINITIALIZED FOR SPEED: idFileNestSave
//INTENTIONALLY UNINITIALIZED FOR SPEED: idLineNestSave
//INTENTIONALLY UNINITIALIZED FOR SPEED: eipInNestSave
//INTENTIONALLY UNINITIALIZED FOR SPEED: idProgressNestSave
//INTENTIONALLY UNINITIALIZED FOR SPEED: pFlagsThreadLevelModeSave
//INTENTIONALLY UNINITIALIZED FOR SPEED: say.cCpuCycles1
//INTENTIONALLY UNINITIALIZED FOR SPEED: say.cCpuCycles2
//INTENTIONALLY UNINITIALIZED FOR SPEED: say.cCpuCycles3
//INTENTIONALLY UNINITIALIZED FOR SPEED: say.cCpuCycles4
{
    tinP.pInOutFrame = this ;

    if( F(processGlobal1I._thirdC_flagsModeProcess1) & flMODEpROCESS1_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY ) { BLAMMO ; } //U:: THIS FLAG CANNOT BE SUPPORTED UNTIL CODE THAT MUST SUPPRESS inOutFrameC APP TELEMETRY IGNORES IT ; THIS COULD BE DONE WITH A NEW THREAD MODE FLAG

    //{
    //    ZE( countT , cNest ) ;
    //    inOutFrameC* pc = tinP.pInOutFrame ;
    //    while( pc->pDad )
    //    {
    //        pc = pc->pDad ;
    //
    //        cNest ++ ;
    //        if( cNest > TUCK )
    //        {
    //            countT foo = 2 ;
    //        }
    //    }
    //}

    say.idLineInOut  = idLineP ;
    say.idiFileInOut = idiFileP ;

    if( !( F(flagsCt) & flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY ) )
    {
        QueryPerformanceCounter( (LARGE_INTEGER*)&say.cTime1 ) ;
        QueryThreadCycleTime( (HANDLE)(-2) ,  (ULONG64*)&say.cCpuCycles1 ) ;
        if( pDad )
        {
            pDad->auditCpuCycles.dCpuCyclesAuditKidBetween += say.cCpuCycles1 - tinP.cCpuCycles2Or5Lath ;
            pDad->auditTime     .dTimeAuditKidBetween      += say.cTime1      - tinP.cTime2Or5Lath      ;
        }

        say.dCpuCyclesB4 = !pDad ? 0 : say.cCpuCycles1 - tinP.cCpuCycles2Or5Lath ;
        say.dTimeB4      = !pDad ? 0 : say.cTime1      - tinP.cTime2Or5Lath      ;
    }

    {
        homeS* pHome = &homeS::homeIF() ;
        if( pHome && F(pHome->flags) & flHOMEs_KILLsELFiMMEDIATELY ) { *(countT*)0 = 1 ; }
    }

    {
        tinS* pTin = &tinP ;
        if( !pTin )
        {
            CONoUTrAW( "inOutFrameC: error !pTin\r\n" ) ;
            LOGrAW(    "inOutFrameC: error !pTin\r\n" ) ;
            BLAMMO ;
        }
        if( getNegAM( pTin->fingerprint ) != FINGERnEG_TINs && getNegAM( pTin->fingerprint ) != FINGERnEG_TINszOMBIE )      //CT OF WOTH tinS INSTANCE IN EACH THREAD INVOLVES CALLING INOUT BEFORE ZOMBIE FINGERPRINT IS REPLACED
        {
            //U:: CONJ: OBSOLETE CODE LINE: *(countT*)0 = 1 ;       // CANNOT USE BLAMMO BECAUSE DON'T HAVE tinP

            CONoUTrAW( "inOutFrameC: error fingerprint\r\n" ) ;
            LOGrAW(    "inOutFrameC: error fingerprint\r\n" ) ;
            BLAMMO ;
        }
    }

    tinP.monitor.idWhat1 = ifcIDwHAT_GOiNoUTcT ;_
    if( F(flagsCt) & flINoUTfRAMEc_REGISTERcALLnEST )
    {
        _MILE
        if( F(tinP.flagsThreadMode1) & flTHREADmODE1_UPDATEtIN && !( tinP.monitor.idDirty % 2 ) )
        {
            tinP.monitor.idDirty ++ ;_
            tinP.monitor.idStep ++ ;_
            tinP.monitor.cInNest ++ ;_

            const countT offos  = tinP.monitor.idStep  & OFFsLOTtINsTEPmAX ; const countT offos2 = offos << 1 ;_
            const countT offon  = tinP.monitor.cInNest & OFFsLOTtINnESTmAX ; const countT offon2 = offon << 1 ;_
            const countT offonk = ( tinP.monitor.cInNest + 1 ) & OFFsLOTtINnESTmAX ; // "k" IS FOR "KID"

            idProgressNestSave           =           tinP.pIdProgressNest      [ offon ]                                                                       ;_
            pFlagsThreadLevelModeSave    =           tinP.pFlagsThreadLevelMode[ offon ]                                                                       ;_

            idLineNestSave               =           tinP.monitor.pLFnest      [ offon2     ]                                                                   ;_
            tinP.pLFstep  [ offos2     ] =      (    tinP.monitor.pLFnest      [ offon2     ] = idLineCt & ~fliSTEP_FLAGmASK    )    |    fliSTEP_NESTcHANGE    ;_

            idFileNestSave               =           tinP.monitor.pLFnest      [ offon2 + 1 ]                                                                   ;_
            tinP.pLFstep  [ offos2 + 1 ] =           tinP.monitor.pLFnest      [ offon2 + 1 ] = idiFileCt                                                       ;_

            tinP.pIdInNest[ offon     ] ++ ;_
            tinP.pIdInNest[ offonk    ] = 0 ;_

            eipInNestSave               =            tinP.pEIPInNest[ offon ]   ;_
                                              eipF( &tinP.pEIPInNest[ offon ] ) ;_

            tinP.monitor.idDirty ++ ;_

            homeS* ph = &homeS::homeIF() ;_

            if( ph )
            {
                ZE( boolT , bCarry ) ;_
                for( countT offt = 0 ; offt < sizeof ph->pcTallyIn / sizeof ph->pcTallyIn[ 0 ] ; offt ++ )
                {
                    countT cDo = !offt + bCarry ;_
                    if( bCarry ) bCarry = 0 ;_
                    while( cDo -- )
                    {
                        if( -1 == incv02AM( ph->pcTallyIn[ offt ] ) ) bCarry ++ ;_
                    }
                }
            }

            if( ph && ph->flags & F(flHOMEs_INoUTtRACE) )
            {
                if( !( tinP.bSuppressInOutTrace ++ ) && tinP.monitor.idThread != ifcIDtHREADlOW_tmHeartF && tinP.monitor.idThread != ifcIDtHREADlOW_break && tinP.monitor.idThread != ifcIDtHREADlOW_tmKillSocketF && tinP.monitor.idThread != ifcIDtHREADlOW_tmWatchF && tinP.monitor.idThread != ifcIDtHREADlOW_tmTimeNowF )
                {
                    OStEXT(   ostoSay , TUCK << 1 ) ;_
                    OStEXTC(  ostoSay , idiFileCt , 0 ) ;_
                    OStEXTAK( ostoSay , "(" ) ;_
                    OStEXTC9( ostoSay , idLineCt ) ;_
                    OStEXTAK( ostoSay , ") ++    " ) ;_
                    const osTextT* postTitle = processGlobal7S::_processGlobal7I_IF().source.postFileTitleF( tinP , processGlobal7S::_processGlobal7I_IF().source.idFileRankF( tinP , idiFileCt ) ) ;_
                    if( postTitle )
                    {
                        OStEXTA( ostoSay , postTitle ) ;_
                    }

                    //U::SUSPECTED DEADLOCK: ((etherC*)0)->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;_
                }
                tinP.bSuppressInOutTrace -- ;_
            }

            thirdC::inOutChatterIfIF( tinP ) ;_

            tinP.monitor.idWhat2 = idiFileCt >> 0xc ;_

            if( tinP.idTinNamed != ifcIDtINnAMED_tinHeartI && tinP.idTinNamed != ifcIDtINnAMED_tinBreakI && thirdC::third_idPhaseProcess_IF() >= ifcIDpHASEpROCESS_PROLOGaLLgLOBALScONSTRUCTED && thirdC::third_idPhaseProcess_IF() < ifcIDpHASEpROCESS_EPILOGdESTROYINGgLOBALS )
            {
                boolT bWoth = 1 ;                                                                                               // OBEY flADAMmODE2_STOP AND flTHREADmODE3_GO
                while
                (
                    thirdC::third_idPhaseProcess_IF() >= ifcIDpHASEpROCESS_PROLOGaLLgLOBALScONSTRUCTED
                    &&
                    thirdC::third_idPhaseProcess_IF() <  ifcIDpHASEpROCESS_EPILOGdESTROYINGgLOBALS
                    &&
                    F(tinP.pAdamGlobal1->_thirdC_.flagsModeAdam2) & flADAMmODE2_STOP
                    &&
                    !( F(tinP.flagsThreadMode3) & flTHREADmODE3_GO )
                )
                {
                    if( bWoth )
                    {
                        bWoth = 0 ;_
                        //LOGrAW( "\r\nstop\r\n" ) ;
                        //CONoUTrAW( "\r\nstop\r\n" ) ;
                    }
                    
                    thirdC::dosSleepRawIF( tinP , TUCK ) ;
                }
            }
        }

        //if( bClassP )
        //{
        //    countT c_this = (countT)this ;_
        //    if( !c_this )
        //    {
        //        /*LOGrAW3( "_IO_ / !this [idiFileCt]" , idiFileCt , "\r\n" ) ;*/
        //        BLAMMO ;_
        //    }
        //}
        //
        //if( tinP.pcWatchedByInOut && *tinP.pcWatchedByInOut != tinP.valueExpectedByInOut )
        //{
        //    LOGrAW5( "_IO_ tinP [valueExpectedByInOut,*pcWatchedByInOut]: " , tinP.valueExpectedByInOut , " != " , *tinP.pcWatchedByInOut , "\r\n" ) ;_
        //    BLAMMO ;_
        //}
        //
        //{
        //    processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;_
        //    if( pg1.pcWatchedByInOut && *pg1.pcWatchedByInOut != pg1.valueExpectedByInOut )
        //    {
        //        LOGrAW5( "_IO_ process global [valueExpectedByInOut,*pcWatchedByInOut]: " , pg1.valueExpectedByInOut , " != " , *pg1.pcWatchedByInOut , "\r\n" ) ;_
        //        BLAMMO ;_
        //    }
        //}
        _MOLE
    }
    tinP.monitor.idWhat1 = ifcIDwHAT_GOiNoUTfRAMED ;_

//    #if defined( ENABLEdROPnOTES )
//
//        if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ROOThTTPsERVER && !( F(tinP.flagsThreadMode4) & flTHREADmODE4_DOnOTtESTdROPhEADERS ) && tinP.pPoolUse )
//        {
//            THREADmODE4oN( flTHREADmODE4_DOnOTtESTdROPhEADERS )
//            PUSE.testDropHeadersF( tinP ) ;
//            THREADmODE4rESTORE
//        }
//
//    #endif

    if( !( F(flagsCt) & flINoUTfRAMEc_DOnOTcOLLECTaPPtELEMETRY ) )
    {
        QueryPerformanceCounter( (LARGE_INTEGER*)&say.cTime2 ) ;
        QueryThreadCycleTime( (HANDLE)(-2) ,  (ULONG64*)&say.cCpuCycles2 ) ;

        if( pDad )
        {
            pDad->auditCpuCycles.dCpuCyclesAuditKidCt += say.cCpuCycles2 - say.cCpuCycles1 ;
            pDad->auditTime.dTimeAuditKidCt           += say.cTime2      - say.cTime1      ;
        }

        tinP.cCpuCycles2Or5Lath = say.cCpuCycles2 ;
        tinP.cTime2Or5Lath      = say.cTime2      ;

        say.dCpuCyclesCt = say.cCpuCycles2 - say.cCpuCycles1 ;
        say.dTimeCt      = say.cTime2      - say.cTime1      ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612c* : 3func.3612c003.inoutframec.inoutframec END
