//SOURCE: 5adam.510005ea.1 BEGIN
#define DDNAME "5adam.510005ea.1"
#define DDNUMB 0x510005ea
#define IDFILE (countT)0x0
#define postHEADER "510005ea.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510005ea.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_WATCH" )/*1*/

// OBSOLETES: 510005ea

//U::SHOULD BE 01
//#define CfORGIVE 0x2
//#define CfORGIVE 0x40

#define CfORGIVE 0x10

// TOCK << 1: TOO MANY FAILURES ON factory5  20190825@1218
// TOCK << 3: TOO MANY FAILURES
// TICK >> 2 --> TICK    (TO REDUCE EMAIL FROM factory4)
#define INSPECTIONpERIOD ( TICK )

#define INSPECTIONpERIODfILE ( TICK >> 2 )

// NOTE: TO USE GORILLA, THE SPOOFING DETECTION CODE IN etherDoHttpServerF MUST BE DISABLED

// NORMALLY CgORILLAS1 IS NOT DEFINED; DEFINE IT TO DO GORILLA TESTING
//#define CgORILLAS1              0x3
//#define CgORILLAS1              0x4
//#define CgORILLAS1              0x10
//AOK: #define CgORILLAS1              0x10
//#define CgORILLAS1              ( TUCK >> 1 )
//AOK BUT SLOW: #define CgORILLAS1              CsESSIONmAXdFLTiFCdRIVENsERVER
//#define CgORILLAS1              ( CsESSIONmAXdFLTiFCdRIVENsERVER >> 4 )
// 352_9 THREADS OBSERVED AS A MAXIMUM

countT cDone1 ;
countT cDone2 ;

TASK( tmWatch05TallyF )
if( pTaskP )
{
    etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;

    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; ether.osSleepF( tinP , TOCK << 5 ) ;
    }

    homeS& home = homeS::homeIF() ;

    ZE( countT , timeB1 ) ;
    ZE( sCountT , timeB2 ) ;
    etThread.osTimeNowF( tinP , timeB1 , timeB2 ) ;
    etThread.traceF( tinP , TT(timeB1,timeB2)+T(": tmWatch05TallyF awoke") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

    boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;
    bSandbox = 0 ;

    countT cForgive = CfORGIVE ;
    ZE( countT , cDone1Lag ) ;
    TN( tb  , " " ) ;
    TN( tcr , "\r\n" ) ;
    TN( tNote , " tmWatch05TallyF / inspecting [cDone1,cDone1Lag,cForgive]: " ) ;
    ZE( countT , cFire ) ; //U:; TO FIND A BUG
    countT cSkip = 0 ;
    while( !ether && !etThread )
    {
        if( ( bSandbox || F(home.flagsAdams) & flHOMEsaDAMS_ROOThTTPsERVER ) && ( !cSkip || !( cSkip -- ) ) )
        {
            ether.traceF( tinP , T("tally cycle begun [cForgive,cDone1]:    ")+TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb+TF2(cDone1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
            ZE( countT , timeN1 ) ;
            ZE( sCountT , timeN2 ) ;
            etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
            if( cForgive != CfORGIVE && cForgive ) etThread.traceF( tinP , TT(timeN1,timeN2)+T(" | ")+tNote+TF2(cDone1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb+TF2(cDone1Lag,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb+TF2(cForgive,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

            if( cDone1Lag > MAXcOUNTT - TOCK )                                                                   // ------------ WRAP
            {
                cForgive = CfORGIVE ;
                cDone1Lag = cDone1 = 0 ;
                //home.flagsUtility &= ~( F(flHOMEsuTILITY_SNAPsHOT) ) ;

                ZE( countT , timeN1 ) ;
                ZE( sCountT , timeN2 ) ;
                etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;

                TN( tSay , "" ) ; tSay =

                    TT(timeN1,timeN2)
                    + T(" | cDone1Lag is near its capacity so has been reset to 0")

                ;

                etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
            }
            else if( cDone1Lag < cDone1 )                                                                         // ------------ MORE HAS BEEN DONE
            {
                if( !cDone1Lag )
                {
                    TN( tSay , "http service detected" ) ;
                    etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                    etThread.emailFactoryReportF( tinP , tSay ) ;
                }

                if( cForgive < CfORGIVE )
                {
                    ZE( countT , timeN1 ) ;
                    ZE( sCountT , timeN2 ) ;
                    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;
        
                    TN( tSay , "" ) ; tSay =
        
                        TT(timeN1,timeN2)
                        + T(" | cForgive is being reset from ")+TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)
                        + T(" to ")                            +TF2(CfORGIVE,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)
                        + T(" (http service restoration detected)")
        
                    ;
        
                    etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                    etThread.emailFactoryReportF( tinP , tSay ) ;

                    cForgive = CfORGIVE ;
                }

                cDone1Lag = cDone1 ;
                home.flagsUtility &= ~( F(flHOMEsuTILITY_SNAPsHOT) ) ;
            }
            else
            {
                if( cForgive && cForgive -- )                                                                  // ------------ NOTHING NEW HAS BEEN DONE: FORGIVE
                {
                    ZE( countT , timeN1 ) ;
                    ZE( sCountT , timeN2 ) ;
                    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;

                    TN( tSay , "\r\n" ) ; tSay +=

                        TT(timeN1,timeN2)
                        + T(" | nothing new has been done.  forgiven.  cForgive is now ")
                        + TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)
                        + T(" (http service failure detected)")

                    ;

                    etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                    if( !( cForgive % 4 ) ) etThread.emailFactoryReportF( tinP , tSay ) ;

                    home.flagsUtility |= flHOMEsuTILITY_SNAPsHOT ;
                }
                else                                                                                                // ------------ NOTHING NEW HAS BEEN DONE: TIME TO REBOOT
                {
                    ZE( countT , timeN1 ) ;
                    ZE( sCountT , timeN2 ) ;
                    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;

                    TN( tSay , "\r\n" ) ; tSay +=

                        TT(timeN1,timeN2)
                        + T(" | calling osFireIF if i have not already done so")

                    ;

                    etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                    if( !( cFire ++ ) )
                    {
                        TN( tSay , "sending suicide note: nothing new done and no more forgiving, so will reboot after short nap" ) ;
                        TELL( tSay ) ;
                        etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        etThread.emailFactoryReportF( tinP , tSay ) ;
                        
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; ether.osSleepF( tinP , TOCK << 5 ) ; //GIVE MAILoUT TIME TO SEND THIS
                    
                        tSay = T("\r\n")+TT(timeN1,timeN2)+T(" | WATCH: calling osFireIF now") ;
                        etThread.traceF( tinP , tSay , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        //CRAFTWORK NOT FINISHED: SNAPsHOT( "watchport05" ) ;
                        thirdC::osFireIF( tinP ) ;
                    }
                }
            }

            //CONoUTrAW3( "tmWatch05TallyF [flHOMEsuTILITY_SNAPsHOT]: " , F(home.flagsUtility) & flHOMEsuTILITY_SNAPsHOT , "\r\n" ) ;
        }

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ++ s ; ether.osSleepF( tinP , INSPECTIONpERIOD ) ;
        }
    }
}
DONE( tmWatch05TallyF )

TASK( tmWatchFileF )
if( pTaskP )
{
    etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;

    ZE( countT , idCycle ) ;
    TN( tTriggerFile , "///ideafarm/controls/osfire.txt" ) ;
    while( !etThread && !ether )
    {
        idCycle ++ ;
        ether.traceF( tinP , T("watchfile (triggerfile) cycle begun [idCycle]:    ")+TF2(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
    
        IFsCRATCH
        {
            SCOOPS

            ZE( osTextT* , posti ) ;
            ZE( countT   , costi ) ;
            tinP.pEtScratch->boxGetF( tinP , posti , costi , tTriggerFile , 1 ) ; ___( posti ) ;
            if( POOP ) { POOPR ; }
            else
            {
                etThread.traceF( tinP , T("firing os because a trigger file exists [posti]: ")+T(posti) ) ;
                thirdC::osFireIF( tinP ) ;
            }

            etThread.delF( tinP , posti ) ;
        }

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ++ s ; ether.osSleepF( tinP , INSPECTIONpERIODfILE ) ;
        }
    }
    TELL( "terminating" ) ;
}
DONE( tmWatchFileF )

countT idGotAok1 ;
countT idGorillaLath1 ;
TASK( tmWatch05Deadman1F )
if( pTaskP )
{
    etThread.traceF( tinP , T("deadman1:  WATCH: about to enter watch loop") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

    boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;

    #if !defined( CgORILLAS1 )
        etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;
    #endif

    countT idGorilla = 1 + incv02AM( idGorillaLath1 ) ;
    ZE( countT , idCycle ) ;
    homeS& home = homeS::homeIF() ;
    TN( tTM , "IdeaFarm (tm)" ) ;
    TN( tb4 , "    " ) ;
    while( !etThread && !ether )
    {
        idCycle ++ ;
        TN( tIdCycle , "" ) ; tIdCycle = TF2(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ;
    
        //CONoUTrAW5( "cycle " , idCycle , " on thread " , tinP.monitor.idThread , ": querying...\r\n") ;
    
        if( bSandbox || F(home.flagsAdams) & flHOMEsaDAMS_ROOThTTPsERVER )
        {
            etThread.traceF( tinP , T("deadman1:  http watch cycle begun [idCycle]:    ")+TF2(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

            boolT bFail = 1 ;
            IFsCRATCH
            {
                SCOOPS
                etThread.traceF( tinP , T("deadman1:  requesting") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                ZE( countT , cNicName ) ;
                ZE( nicNameC* , pNicName ) ;
                socketC::nicNameIF( tinP , *tinP.pEtScratch , pNicName , cNicName , 0/*T("factory3.ideafarm.com")*/ ) ; ___( pNicName ) ;
                __Z( pNicName ) ;
                __Z( cNicName ) ;

                if( POOP )
                {
                    POOPR ;
                    etThread.traceF( tinP , T("deadman1:  error: could not obtain nicName array") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                }
                else
                {
                    {
                        socketC sGet( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) , 0 , flSOCKETc_null , countTC( SOCKETtIMEOUTdEFAULTlAN ) , countTC( SOCKETtIMEOUTdEFAULTlAN ) , countTC( SOCKETtIMEOUTdEFAULTlAN ) ) ;
                        home.idPortWatchHttpDeadman1 = sGet.bindF( tinP ) ;
                        etThread.traceF( tinP , T("deadman1:  connecting [home.idPortWatchHttpDeadman1]:    ")+TF2(home.idPortWatchHttpDeadman1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        sGet.connectF( tinP , 0x50 , pNicName[ 0 ] , 1 ) ;

                        if( POOP )
                        {
                            POOPR
                            etThread.traceF( tinP , T("deadman1:  error: could not connect") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        }
                        else
                        {
                            ZE( countT , idpMe ) ;
                            nicNameC nnMe ;
                            sGet.myNameF( tinP , idpMe , nnMe ) ;

                            if( POOP )
                            {
                                POOPR
                                etThread.traceF( tinP , T("deadman1:  error: could not get my connection endpoint name") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                            }
                            else
                            {
                                //etThread.traceF( tinP , T("deadman1:  [idpMeBound,idpMe,nnMe]:    ")+TF2(idpMeBound,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idpMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(nnMe) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                                TN( tRequest , "" ) ; tRequest = T("GET /deadman1?idCycle=")+tIdCycle+T(" HTTP/1.1\r\nHost: ideafarm.com\r\n\r\n") ;

                                ZE( countT  , timeA1 ) ;
                                ZE( sCountT , timeA2 ) ;
                                etThread.osTimeNowF( tinP , timeA1 , timeA2 ) ;

                                etThread.traceF( tinP , T("deadman1:  writing request ")+tIdCycle , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                sGet.writeF( tinP , (osTextT*)tRequest ) ;
                                etThread.traceF( tinP , T("deadman1:  wrote   request ")+tIdCycle , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                                if( POOP )
                                {
                                    POOPR
                                    etThread.traceF( tinP , T("deadman1:  error: could not write request") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                }
                                else
                                {
                                    //                        I   d   e   a   f   a   r   m       (   t   m   )
                                    osTextT postTM[ 0xe ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
                                    countT cDo = sizeof postTM - 1 ;
                                    ZE( boolT , bArmed ) ;
                                    ZE( countT , lag1 ) ;
                                    ZE( countT , lag2 ) ;
                                    etThread.traceF( tinP , T("deadman1:  reading reply") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                    while( !POOP && cDo )
                                    {
                                        osTextT post2[] = { 0 , 0 } ;
                                        sGet.readF( tinP , post2 , 1 ) ;

                                        if( bArmed )
                                        {
                                            postTM[ sizeof postTM - 1 - cDo -- ] = post2[ 0 ] ;                            
                                        }
                                        else if( post2[ 0 ] == '\n' && lag1 == '\r' && lag2 == '\n' ) bArmed = 1 ; //ARM WHEN HAVE READ "\n\r\n"

                                        lag2 = lag1 ;
                                        lag1 = post2[ 0 ] ;
                                    }

                                    if( POOP )
                                    {
                                        POOPR
                                        etThread.traceF( tinP , T("deadman1:  error: could not read reply") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                    }
                                    else
                                    {
                                        ZE( countT  , timeE1 ) ;
                                        ZE( sCountT , timeE2 ) ;
                                        etThread.osTimeNowF( tinP , timeE1 , timeE2 ) ;
                                        etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeA1 , timeA2 ) ;

                                        etThread.traceF( tinP , T("deadman1:  received [idCycle,timeE1|timeE2,postTM]:    ")+tIdCycle+tb4+TT(timeE1,timeE2)+T("    \"")+T(postTM)+T("\"") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                                        __NZ( etThread.strCompareF( tinP , T(postTM) , tTM ) ) ;

                                        if( POOP )
                                        {
                                            POOPR
                                            etThread.traceF( tinP , T("deadman1:  error: unexpected trademark") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                        }
                                        else bFail = 0 ;
                                    }
                                }
                            }
                        }
                    }
                    //etThread.traceF( tinP , T("deadman1:  my socket is dt'd ; resetting from [home.idPortWatchHttpDeadman1]:    ")+TF2(home.idPortWatchHttpDeadman1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                    home.idPortWatchHttpDeadman1 = 0 ;
                }
                etThread.delF( tinP , pNicName ) ;
            }

            if( bFail )
            {
                etThread.traceF( tinP , T("deadman1:  NOT received") , flTRACE_HOMEeCHOdEADMAN1 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
            }
            else
            {
                countT idGotMe = 1 + incv02AM( idGotAok1 ) ;
                inc02AM( cDone1 ) ;
            }
        }

        if( bSandbox ) break ; //U::TO FIND A BUG

        #if !defined( CgORILLAS1 )
    
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ++ s ; ether.osSleepF( tinP , INSPECTIONpERIOD >> 0xa ) ; //U:: TO FIND A BUG
                //PROD:  ++ s ; ether.osSleepF( tinP , INSPECTIONpERIOD >> 6 ) ; //MUST BE LESS THAN INSPECTIONpERIOD.  >> 4 GIVES ABOUT 01 PULLS PER INSPECTION PERIOD
            }
    
        #endif
    }
    TELL( "terminating" ) ;
}
DONE( tmWatch05Deadman1F )

countT idGotAok2 ;
countT idGorillaLath2 ;
TASK( tmWatch05Deadman2F )
if( pTaskP )
{
    //etThread.traceF( tinP , T("deadman2:  WATCH: about to enter watch loop") ) ;

    boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;
    bSandbox = 0 ;

    #if !defined( CgORILLAS2 )
        etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;
    #endif

    countT idGorilla = 1 + incv02AM( idGorillaLath2 ) ;
    ZE( countT , idCycle ) ;
    homeS& home = homeS::homeIF() ;
    TN( tTM , "IdeaFarm (tm)" ) ;
    while( !etThread && !ether )
    {
        idCycle ++ ;
    
        //CONoUTrAW5( "cycle " , idCycle , " on thread " , tinP.monitor.idThread , ": querying...\r\n") ;
    
        if( bSandbox || F(home.flagsAdams) & flHOMEsaDAMS_ROOThTTPsERVER )
        {
            //etThread.traceF( tinP , T("deadman2:  http watch cycle begun [idCycle]:    ")+TF2(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

            boolT bFail = 1 ;
            IFsCRATCH
            {
                SCOOPS
                //etThread.traceF( tinP , T("deadman2:  requesting") ) ;

                ZE( countT , cNicName ) ;
                ZE( nicNameC* , pNicName ) ;
                socketC::nicNameIF( tinP , *tinP.pEtScratch , pNicName , cNicName , 0/*T("factory3.ideafarm.com")*/ ) ; ___( pNicName ) ;
                __Z( pNicName ) ;
                __Z( cNicName ) ;

                if( POOP )
                {
                    POOPR ;
                    etThread.traceF( tinP , T("deadman2:  error: could not obtain nicName array") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                }
                else
                {
                    {
                        socketC sGet( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
                        home.idPortWatchHttpDeadman2 = sGet.bindF( tinP ) ;
                        //etThread.traceF( tinP , T("deadman2:  connecting [home.idPortWatchHttpDeadman2]:    ")+TF2(home.idPortWatchHttpDeadman2,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        sGet.connectF( tinP , 0x50 , pNicName[ 0 ] , 1 ) ;

                        if( POOP )
                        {
                            POOPR
                            etThread.traceF( tinP , T("deadman2:  error: could not connect") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                        }
                        else
                        {
                            ZE( countT , idpMe ) ;
                            nicNameC nnMe ;
                            sGet.myNameF( tinP , idpMe , nnMe ) ;

                            if( POOP )
                            {
                                POOPR
                                etThread.traceF( tinP , T("deadman2:  error: could not get my connection endpoint name") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                            }
                            else
                            {
                                //etThread.traceF( tinP , T("deadman2:  [idpMeBound,idpMe,nnMe]:    ")+TF2(idpMeBound,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idpMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(nnMe) ) ;

                                TN( tRequest , "" ) ; tRequest = T("GET /deadman2?idCycle=")+TF2(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" HTTP/1.1\r\nHost: ideafarm.com\r\n\r\n") ;

                                ZE( countT  , timeA1 ) ;
                                ZE( sCountT , timeA2 ) ;
                                etThread.osTimeNowF( tinP , timeA1 , timeA2 ) ;

                                //etThread.traceF( tinP , T("deadman2:  writing request") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                sGet.writeF( tinP , (osTextT*)tRequest ) ;

                                if( POOP )
                                {
                                    POOPR
                                    etThread.traceF( tinP , T("deadman2:  error: could not write request") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                }
                                else
                                {
                                    //                        I   d   e   a   f   a   r   m       (   t   m   )
                                    osTextT postTM[ 0xe ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
                                    countT cDo = sizeof postTM - 1 ;
                                    ZE( boolT , bArmed ) ;
                                    ZE( countT , lag1 ) ;
                                    ZE( countT , lag2 ) ;
                                    //etThread.traceF( tinP , T("deadman2:  reading reply") , flTRACE_null , ifcIDtRACEdIVERT_1 ) ;
                                    while( !POOP && cDo )
                                    {
                                        osTextT post2[] = { 0 , 0 } ;
                                        sGet.readF( tinP , post2 , 1 ) ;

                                        if( bArmed )
                                        {
                                            postTM[ sizeof postTM - 1 - cDo -- ] = post2[ 0 ] ;                            
                                        }
                                        else if( post2[ 0 ] == '\n' && lag1 == '\r' && lag2 == '\n' ) bArmed = 1 ; //ARM WHEN HAVE READ "\n\r\n"

                                        lag2 = lag1 ;
                                        lag1 = post2[ 0 ] ;
                                    }

                                    if( POOP )
                                    {
                                        POOPR
                                        etThread.traceF( tinP , T("deadman2:  error: could not read reply") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                    }
                                    else
                                    {
                                        ZE( countT  , timeE1 ) ;
                                        ZE( sCountT , timeE2 ) ;
                                        etThread.osTimeNowF( tinP , timeE1 , timeE2 ) ;
                                        etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeA1 , timeA2 ) ;

                                        //etThread.traceF( tinP , T("deadman2:  received [timeE1|timeE2,postTM]:    ")+TT(timeE1,timeE2)+T("    \"")+T(postTM)+T("\"") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                                        __NZ( etThread.strCompareF( tinP , T(postTM) , tTM ) ) ;

                                        if( POOP )
                                        {
                                            POOPR
                                            etThread.traceF( tinP , T("deadman2:  error: unexpected trademark") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                        }
                                        else bFail = 0 ;
                                    }
                                }
                            }
                        }
                    }
                    //etThread.traceF( tinP , T("deadman2:  socket destroyed ; resetting [home.idPortWatchHttpDeadman2]:    ")+TF2(home.idPortWatchHttpDeadman2,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                    home.idPortWatchHttpDeadman2 = 0 ;
                }
                etThread.delF( tinP , pNicName ) ;
            }

            if( bFail )
            {
                //etThread.traceF( tinP , T("deadman2:  NOT received") , flTRACE_HOMEeCHOdEADMAN2 | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
            }
            else
            {
                countT idGotMe = 1 + incv02AM( idGotAok2 ) ;
                inc02AM( cDone2 ) ;
            }
        }

        #if !defined( CgORILLAS2 )
    
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ++ s ; ether.osSleepF( tinP , INSPECTIONpERIOD >> 6 ) ; //MUST BE LESS THAN INSPECTIONpERIOD.  >> 4 GIVES ABOUT 01 PULLS PER INSPECTION PERIOD
            }
    
        #endif
    }
    TELL( "terminating" ) ;
}
DONE( tmWatch05Deadman2F )

TASK( tmWatch05GorillaHomeMasterF )
if( pTaskP && pTaskP->c1 )
{
    signC& sgnGo = *(signC*)pTaskP->c1 ;

    while( !ether )
    {
        etThread.traceF( tinP , T("gorillaHome:  go!") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
        sgnGo.giveF( tinP ) ;

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
        }
    }
}
DONE( tmWatch05GorillaHomeMasterF )

TASK( tmWatch05GorillaHomeF )
if( pTaskP && pTaskP->c1 )
{
    signC& sgnGo = *(signC*)pTaskP->c1 ;

    homeS& home = homeS::homeIF() ;
    TN( tb4 , "    " ) ;
    TN( tNameHome , "38.111.147.101//http//home.1.html" ) ;
    //TN( tNameHome , "factory6.ideafarm.com//http//home.6.html" ) ;
    TN( tEX , "<!doctype html>" ) ;
    while( !etThread && !ether )
    {
        ZE( countT , timeA1 ) ;
        ZE( sCountT , timeA2 ) ;
        etThread.osTimeNowF( tinP , timeA1 , timeA2 ) ;

        #if defined( NEVERdEFINED )

            IFsCRATCH
            {
                SCOOPS

                ZE( byteT* , pbAll  ) ;
                ZE( countT , cbAll ) ;
                tinP.pEtScratch->boxGetShadowF( tinP , pbAll , cbAll , tNameHome ) ; ___( pbAll  ) ;
                __Z( pbAll ) ;
                etThread.delF( tinP , pbAll ) ;

                if( POOP )
                {
                    POOPRqUIET
                    etThread.traceF( tinP , T("gorillaHome:  not received") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
                }
            }

        #else

            IFsCRATCH
            {
                SCOOPS

                ZE( countT , cNicName ) ;
                ZE( nicNameC* , pNicName ) ;
                socketC::nicNameIF( tinP , *tinP.pEtScratch , pNicName , cNicName , 0/*T("factory3.ideafarm.com")*/ ) ; ___( pNicName ) ;
                __Z( pNicName ) ;
                __Z( cNicName ) ;

                socketC sGet( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
                home.idPortWatchHttpDeadman1 = sGet.bindF( tinP ) ;
                //etThread.traceF( tinP , T("gorillaHome:  connecting:    ") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;

                sgnGo.waitF( tinP ) ;

                sGet.connectF( tinP , 0x50 , pNicName[ 0 ] , 1 ) ;

                if( POOP )
                {
                    POOPRqUIET
                    etThread.traceF( tinP , T("gorillaHome:  error: could not connect") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
                }
                else
                {
                    ZE( countT , idpMe ) ;
                    nicNameC nnMe ;
                    sGet.myNameF( tinP , idpMe , nnMe ) ;

                    if( POOP )
                    {
                        POOPRqUIET
                        etThread.traceF( tinP , T("gorillaHome:  error: could not get my connection endpoint name") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
                    }
                    else
                    {
                        //etThread.traceF( tinP , T("gorillaHome:  [idpMeBound,idpMe,nnMe]:    ")+TF2(idpMeBound,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idpMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(nnMe) ) ;

                        TN( tRequest , "" ) ; tRequest = T("GET /home.1.html HTTP/1.1\r\nHost: ideafarm.com\r\n\r\n") ;

                        ZE( countT  , timeA1 ) ;
                        ZE( sCountT , timeA2 ) ;
                        etThread.osTimeNowF( tinP , timeA1 , timeA2 ) ;

                        //etThread.traceF( tinP , T("gorillaHome:  writing request ") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
                        sGet.writeF( tinP , (osTextT*)tRequest ) ;
                        //etThread.traceF( tinP , T("gorillaHome:  wrote   request ") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;

                        if( POOP )
                        {
                            POOPRqUIET
                            etThread.traceF( tinP , T("gorillaHome:  error: could not write request") , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
                        }
                        else
                        {
                            //                         <   !   d   o   c   t   y   p   e       h   t   m   l   >     
                            osTextT postEX[ 0x10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
                            countT cDo = sizeof postEX - 1 ;
                            ZE( boolT , bArmed ) ;
                            ZE( countT , lag1 ) ;
                            ZE( countT , lag2 ) ;
                            //etThread.traceF( tinP , T("gorillaHome:  reading reply") , flTRACE_null , ifcIDtRACEdIVERT_1 ) ;
                            while( !POOP && cDo )
                            {
                                osTextT post2[] = { 0 , 0 } ;
                                sGet.readF( tinP , post2 , 1 ) ;

                                if( bArmed )
                                {
                                    postEX[ sizeof postEX - 1 - cDo -- ] = post2[ 0 ] ;                            
                                }
                                else if( post2[ 0 ] == '\n' && lag1 == '\r' && lag2 == '\n' ) bArmed = 1 ; //ARM WHEN HAVE READ "\n\r\n"

                                lag2 = lag1 ;
                                lag1 = post2[ 0 ] ;
                            }

                            if( POOP )
                            {
                                POOPRqUIET
                                etThread.traceF( tinP , T("gorillaHome:  error: could not read reply") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                            }
                            else
                            {
                                ZE( countT  , timeE1 ) ;
                                ZE( sCountT , timeE2 ) ;
                                etThread.osTimeNowF( tinP , timeE1 , timeE2 ) ;
                                etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeA1 , timeA2 ) ;

                                //etThread.traceF( tinP , T("gorillaHome:  received [timeE1|timeE2,postEX]:    ")+TT(timeE1,timeE2)+T("    \"")+T(postEX)+T("\"") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;

                                __NZ( tinP.pEtScratch->strCompareF( tinP , T(postEX) , tEX ) ) ;

                                if( POOP )
                                {
                                    POOPRqUIET
                                    etThread.traceF( tinP , T("gorillaHome:  error: unexpected reply") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE | flTRACE_ECHOoNLY ) ;
                                }
                            }
                        }
                    }
                }
                etThread.delF( tinP , pNicName ) ;
            }

        #endif

        ZE( countT , timeE1 ) ;
        ZE( sCountT , timeE2 ) ;
        etThread.osTimeNowF( tinP , timeE1 , timeE2 ) ;
        etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeA1 , timeA2 ) ;
        etThread.traceF( tinP , T("gorillaHome:  received [timeE1|timeE2]:    ")+TT(timeE1,timeE2) , flTRACE_HOMEeCHOgORILLAhOME | flTRACE_ECHOoNLY | flTRACE_FORCEnOsILENCE ) ;
    }
    TELL( "terminating" ) ;
}
DONE( tmWatch05GorillaHomeF )

TODO

//REMOVE IN PRODUCTION
//homeS& home = homeS::homeIF() ;
//home.flagsAdams |= flHOMEsaDAMS_ROOThTTPsERVER ;

TN( tComputerName , "" ) ;
{
    TN( tHome , "" ) ; tHome = T("///d/ideafarm.home.")+TF2(etherC::ifc_idHomeIdisk_IF(),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;

    GETsETTING( etThread , psttName , T("computer.name") )
    if( psttName && psttName->idAdam ) tComputerName = T(psttName) ;
    etThread.delF( tinP , psttName ) ;
}

__( tinP.pAdamGlobal1->idMemorySpace - ifcIDmEMORYsPACE_WATCH ) ;

boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;

if( !bSandbox )
{
    signC sgnDone( tinP , TAG( TAGiDnULL ) ) ;
    ether.osThreadAdamF( tinP , ifcIDaDAM_PREPARElISTS , 0 , flOStHREADaDAMf_null , &sgnDone ) ;
    sgnDone.waitF( tinP ) ;
}

//OLD PRODUCTION RETIRED 2011.01.09: /*PROD*/ ether.ifcHireF( tinP , T("ifcIDaDAM_WATCH") , ifcIDaDAM_KERNELwATCHdATABASE , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

//TEST PASSED 4 DAYS 20130915: ether.ifcHireF( tinP , T("ifcIDaDAM_WATCH") , ifcIDaDAM_ROOThTTPsERVER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

/*PROD*/ if( !bSandbox ) ether.ifcHireF( tinP , T("ifcIDaDAM_WATCH") , bSandbox ? ifcIDaDAM_ROOThTTPsERVER : ifcIDaDAM_WATCHiDLEcPU , T("!ignoreFireByOperator") , bSandbox ? flHIRE_DISPLAYtEXT : flHIRE_DISPLAYaUTO , nicNameC() ) ;

//etThread.loafIF( tinP ) ; //TO FIND A BUG

signC sgnGo( tinP , TAG( TAGiDnULL ) ) ;

if( ether )
{
    ether.traceF( tinP , T("WATCH: doing nothing since i am global impotent") ) ;
}
else
{
    ether.traceF( tinP , T("WATCH: launching watch threads") ) ;

    if( !bSandbox ) etThread.osThreadF( TaRG1( tmWatchFileF ) ) ;

    #if defined( CgORILLAS1 )

        countT cDo = CgORILLAS1 ;

        if( cDo ) etThread.osThreadF( TaRG1( tmWatch05TallyF ) ) ;

        while( cDo -- ) etThread.osThreadF( tinP , countTC() , tmWatch05Deadman1F , 0 , flTHREADlAUNCH_null , TOCK >> 3 ) ;

    #elif defined( CgORILLAS2 )

        countT cDo = CgORILLAS2 ;

        if( cDo ) etThread.osThreadF( TaRG1( tmWatch05TallyF ) ) ;

        while( cDo -- ) etThread.osThreadF( tinP , countTC() , tmWatch05Deadman1F , 0 , flTHREADlAUNCH_null , TOCK >> 3 ) ;

    #else

        //etThread.osThreadF( TaRG1( tmWatch05GorillaHomeMasterF ) , (countT)&sgnGo ) ;

        //countT cDo = 0x10 ;
        //while( cDo -- ) etThread.osThreadF( TaRG1( tmWatch05GorillaHomeF ) , (countT)&sgnGo ) ;

        if( !bSandbox )
        {
            etThread.osThreadF( TaRG1( tmWatch05Deadman1F    ) ) ;
            etThread.osThreadF( TaRG1( tmWatch05Deadman2F    ) ) ;
            etThread.osThreadF( TaRG1( tmWatch05TallyF       ) ) ;
        }

    #endif
}

if( POOP ) { CONoUTrAW( "loafing with POOP in my pants\r\n" ) ; }

etThread.loafIF( tinP ) ;

REST
                            

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef DDNUMB
#undef DDNAME
#undef IDFILE
#undef postHEADER
#undef ifcENABLEtHIRDpARTIES
//SOURCE: 5adam.510005ea.1 END
