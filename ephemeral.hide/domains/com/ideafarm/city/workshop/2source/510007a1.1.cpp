//SOURCE: 5adam.510007a1.1 BEGIN
#define DDNAME "5adam.510007a1.1"
#define DDNUMB 0x510007a1
#define IDFILE (countT)0x0
#define postHEADER "510007a1.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510007a1.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEsHOWtEXT( "tool.inOutFrameC.telemetry.reporter" )/*1*/




struct telemetryBookHeadS
{
    countT  finger1 ;
    countT  idFormat ;
    countT  cbBooked ;
    countT  finger2 ;
}
;

TODO

countT  pczLever[ 3 ] = { 0 , 0 , 0 } ;
/*static*/ const countT* pczFL = pczLever ;
switchC swTally( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , pczFL ) ;
switchC swCpu(   tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , pczFL , 0 , sizeof( count04T ) ) ;
switchC swTime(  tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , pczFL , 0 , sizeof( count04T ) ) ;

TN( tn    , "" ) ;
TN( tb4   , "    " ) ;
TN( tb8   , "        " ) ;
TN( tcr , "\r\n" ) ;
TN( tDot  , "." ) ;
TN( tSay1 , "INoUT [idCycle,cCpuCycles1,cCpuCycles2,cCpuCycles3,cCpuCycles4]:    " ) ;

ZE( boolT , bQuitEating ) ;
THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
booksC bksTelemetryApp( tinP , TAG( TAGiDnULL ) , "bksTelemetryApp" , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_USEgRABmEMORYsPACEoVERRIDE , 0 , 0 , 0 , 0 , 0 , ifcIDmEMORYsPACE_UNIVERSE , &bQuitEating ) ;
THREADmODE3rESTORE

// "static" STORAGE IS USED ONLY TO FACILITATE DEBUGGING WITH wdw, WHICH OFTEN REFUSES TO DISPLAY WATCH VALUES FOR AUTOMATIC (STACK) STORAGE

/*static*/ ZE( count04T , cCpuCyclesCt      ) ;
/*static*/ ZE( count04T , cCpuCyclesInGross ) ;
/*static*/ ZE( count04T , cCpuCyclesInNet   ) ;
/*static*/ ZE( count04T , cCpuCyclesDt      ) ;
/*static*/ ZE( count04T , cCpuCyclesBook    ) ;
ZE( countT , cBook ) ;
ZE( countT , cArrayPacketsMax ) ;
if( !(const poopC&)bksTelemetryApp )
{
    TELL( "preparing to eat" )
    handleC hRead( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    ZE( const byteT* , pbi ) ;
    countT cbi = sizeof( telemetryBookHeadS ) ;
    boolT bBookHead = 1 ;
    ZE( countT , idCycle ) ;
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    TELL( "eating 0" )
    ZE( countT , idDebug ) ;
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 9") ) ;
    while( !bQuitEating && !POOP )
    {
        TELL( "eating 1" )
        while( !bQuitEating && !POOP )
        {
            countT cbiSave = cbi ;
            handleC hReadSave = hRead ;

            if( ++ idDebug == 0x90 )
            {
                countT foo = 2 ;
            }

            TELL( "waiting to read a new telemetry item" )
            //etThread.traceF( tinP , T("tmEatTelemetrySysF / 8") ) ;
            //tinP.pc Utility[ 0 ] ++ ; //U::TO FIND A BUG
            HANDLEaPPnOTEScOUNTcLASS ch = hRead ;
            //etThread.traceF( tinP , T("eating telemetry at [idDebug,off,idBook]:    ")+TF2(idDebug,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(ch.c1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(ch.c2,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
            boolT bDelete = bksTelemetryApp.readF( tinP , pbi , cbi , hRead , flBOOKScrEAD_STILLhUNGRYiSoK ) ;
            //tinP.pc Utility[ 0 ] -- ; //U::TO FIND A BUG
            //etThread.traceF( tinP , T("tmEatTelemetrySysF / 7") ) ;
    
            if( !pbi )
            {
                TELL( "readF returned null" )
                cbi = cbiSave ;
                hRead = hReadSave ;
                bQuitEating = 1 ;       //U:: REMOVE THIS LINE IN PRODUCTION WHEN I RUN TO REPORT REAL TIME
                break ;
            }
            else
            {
                TELL( "readF returned telemetry" )
                //etThread.traceF( tinP , T("tmEatTelemetrySysF: readF returned telemetry") ) ; //U:: TO FIND A BUG
                __( cbi - cbiSave ) ; //SHOULD ALWAYS GET THE ENTIRE SHEBANG

                if( bBookHead )
                {
                    TELL( "parsing head" )
                    telemetryBookHeadS& head = *(telemetryBookHeadS*)pbi ;
                    while( !head.finger2 && !bQuitEating ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                    if( bQuitEating ) break ;

                    boolT bBad1 = getNegAM( head.finger1 ) - FINGERnEG_BOOK0cwRITEhEAD1 ;
                    boolT bBad2 = getNegAM( head.finger2 ) - FINGERnEG_BOOK0cwRITEhEAD2 ;
                    boolT bBad3 = head.idFormat - ifcIDfORMAT_BOOK0hEAD ;
                    boolT bBad4 = !head.cbBooked ;

                    if( bBad1 || bBad2 || bBad3 || bBad4 )
                    {
                        LOGrAW9( "tmEatTelemetrySysF bad header [bBad1,bBad2,bBad3,bBad4]: " , bBad1 , "    " , bBad2 , "    " , bBad3 , "    " , bBad4 , "\r\n" ) ;

                        ZE( strokeS* , psttd ) ;
                        etThread.strDumpIF( tinP , psttd , (byteT*)&head , sizeof head ) ; ___( psttd ) ;
                        LOGrAW( T("dump of head:\r\n" DASH79 "\r\n")+T(psttd)+T("\r\n" DASH79 "\r\n") ) ;
                        etThread.delF( tinP , psttd ) ;

                        __1
                    }

                    cbi = head.cbBooked + sizeof( countT ) ;
                }
                else
                {
                    TELL( "got a hamburger" )
                    //countT idHamburger = incv02AM( cHamburgersP ) ; // OPERATOR ++ CAN BE USED FOR SPEED IF ACCURACY IS NOT NEEDED; AS OF THIS WRITING ACCURACY IS NOT NEEDED
                    //CONoUTrAW5( "tmEatTelemetrySysF [idMemorySpace,idHamburger]: " , idMemorySpaceP , " " , idHamburger , "\r\n" ) ;
    
                    ++ idCycle ;

                    TELL( "waiting for finger2 to be set in telemetry" )
                    tellS& told = *(tellS*)pbi ;
                    while( !told.finger2 && !bQuitEating ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                    if( bQuitEating ) break ;
                    TELL( "checking fingers" )
                    __( getNegAM( told.finger1 ) - FINGERnEG_TELEMETRY1 ) ;
                    __( getNegAM( told.finger2 ) - FINGERnEG_TELEMETRY2 ) ;

                    countT& fingerTail = *(countT*)( pbi + sizeof( tellS ) + told.cbNote ) ;
                    while( !fingerTail && !bQuitEating ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                    if( bQuitEating ) break ;
                    __( getNegAM( fingerTail ) - FINGERnEG_BOOK0cwRITEtAIL ) ;
    
                    //TELL( "tallying" )
                    //stPeriodData.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    //periodDataS& pd = *(periodDataS*)&stPeriodData[ 1 ] ;
                    //pd.cLeverIdType = told.idType ;
                    //++ pd.swEventTally ;
                    //stPeriodData.ungrabF( tinP ) ;

                    //if
                    //(
                    //    told.idType == ifcIDtYPEtELLsYS_TINcTP      ||
                    //    told.idType == ifcIDtYPEtELLsYS_TINcTI      ||
                    //    told.idType == ifcIDtYPEtELLsYS_TINdTI      ||
                    //    told.idType == ifcIDtYPEtELLsYS_TINdTP
                    //)
                    //{
                    //    OStEXT(   ostoSay , TUCK * 2 ) ;
                    //    OStEXTAK( ostoSay , "memory space " ) ;
                    //    OStEXTC(  ostoSay , idMemorySpaceP , 0 ) ;
                    //    OStEXTAK( ostoSay , " cycle " ) ;
                    //    OStEXTC(  ostoSay , idCycle , 0 ) ;
                    //    OStEXTAK( ostoSay , " received " ) ;
                    //    OStEXTC(  ostoSay , cbi , 0 ) ;
                    //    OStEXTAK( ostoSay , " bytes [idTell,idType]: " ) ;
                    //    OStEXTC(  ostoSay , told.idTell , 0 ) ;
                    //    OStEXTAK( ostoSay , " " ) ;
                    //    OStEXTC(  ostoSay , told.idType , 0 ) ;
                    //    OStEXTAK( ostoSay , " " ) ;
                    //    OStEXTA(  ostoSay , processGlobal3S::_processGlobal3I_IF().mapSay( told.idType ) ) ;
                    //    OStEXTAK( ostoSay , "\r\n" ) ;
                    //
                    //    CONoUTrAW( ostoSay ) ;
                    //}

                    if( !told.cbNote )
                    {
                    }
                    else
                    {
                        byteT* pbNote = (byteT*)( &told + 1 ) ;
    
                        //boolT bChatter =
                        //       told.idType == ifcIDtYPEtELLsYS_TINcTP
                        //    || told.idType == ifcIDtYPEtELLsYS_TINcTI
                        //    || told.idType == ifcIDtYPEtELLsYS_TINdTP
                        //    || told.idType == ifcIDtYPEtELLsYS_TINdTI
                        //;
                        //
                        //if( bChatter )
                        //{
                        //    processGlobal3S& ps3 = processGlobal3S::_processGlobal3I_IF() ;
                        //    const osTextT* postSay = ps3.mapSay( told.idType ) ;
                        //    etThread.traceF( tinP , T("telemetry [idType]:    ")+(postSay?T(postSay):TF2(told.idType,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)) ) ;
                        //}

                        switch( told.idType )
                        {
                            case ifcIDtYPEtELLaPP_INoUTtINdT :
                            {
                                TELL( "INoUTtINdT" )
                                if( told.cbNote == sizeof( tellInfoAppInOutFrameTinDtS ) )
                                {
                                    tellInfoAppInOutFrameTinDtS& note = *(tellInfoAppInOutFrameTinDtS*)pbNote ;

                                    //TN( tSay , "" ) ; tSay = T(" [idCycle,idThread,cCpuCyclesWriteInOutTelemetry]:    ")
                                    //
                                    //    +tb4+TF3(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                    //    +tb4+TF3(told.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                    //    +tb4+TF3(note.idThreadReporting,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                    //
                                    //    +tb4 +TF3(((countT*)&note.cCpuCyclesWriteInOutTelemetry)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                    //    +tDot+TF3(((countT*)&note.cCpuCyclesWriteInOutTelemetry)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                    //
                                    //;
                                    //
                                    //etThread.traceF( tinP , tSay , flTRACE_NOpREFIX ) ;

                                    cBook += note.cTells ;
                                    count04T was = cCpuCyclesBook ;
                                    cCpuCyclesBook += note.cCpuCyclesWriteInOutTelemetry ;
                                    if( cCpuCyclesBook < was ) { BLAMMO ; }

                                    etThread.traceF( tinP , T("INoUTtINdT") ) ;
                                }

                                break ;
                            }
                            case ifcIDtYPEtELLaPP_INoUT :
                            case ifcIDtYPEtELLaPP_INoUTaRRAY :
                            {
                                TELL( "INoUT" )

                                /*static*/ boolT bArray = told.idType == ifcIDtYPEtELLaPP_INoUTaRRAY ;
                                //CONoUTrAW( bArray ? "A" : "." ) ;

                                /*static*/ countT cPackets = bArray
                                    ? *(countT*)pbNote
                                    : 1
                                ;

                                if( !cPackets )         //U:: TO FIND A BUG
                                {
                                    countT foo = 2 ;
                                }

                                if( bArray && cArrayPacketsMax < cPackets ) cArrayPacketsMax = cPackets ;

                                //etThread.traceF( tinP , T(bArray?"INoUTaRRAY    ":"INoUT    ")+(bArray?TF2(cPackets,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED):T("")) ) ;

                                /*static*/ tellInfoAppInOutFrameS* pPackets = bArray
                                    ? (tellInfoAppInOutFrameS*)( pbNote + sizeof( countT ) )
                                    : (tellInfoAppInOutFrameS*)  pbNote
                                ;

                                /*static*/ countT cbExpected = bArray
                                    ? sizeof( countT ) + cPackets * sizeof( tellInfoAppInOutFrameS )
                                    :                               sizeof( tellInfoAppInOutFrameS )
                                ;

                                if( told.cbNote == cbExpected )
                                {
                                    for( countT offi = 0 ; offi < cPackets ; offi ++ )
                                    {
                                        tellInfoAppInOutFrameS& note = pPackets[ offi ] ;

#if defined( NEVERdEFINED )

                                        TN( tSay , "" ) ; tSay = tn

                                            +TF3(idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                            +tb4+TF3(told.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                            +tb4+TF3(note.cDadLevels,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)
                                            +tb4+TF3(told.idiFileTalking,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+tb4+TF2(told.idLineTalking,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)

                                            +tb4 +TF3(((countT*)&note.cTime1)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cTime1)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cTime2)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cTime2)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cTime3)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cTime3)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cTime4)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cTime4)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)

                                            +tb8 +T("1 2 3 4:")
                                            +tb4 +TF3(((countT*)&note.cCpuCycles1)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cCpuCycles1)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cCpuCycles2)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cCpuCycles2)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cCpuCycles3)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cCpuCycles3)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.cCpuCycles4)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.cCpuCycles4)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)

                                            +tb8 +T("Ct In InNet Dt:")
                                            +tb4 +TF3(((countT*)&note.dCpuCyclesCt)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.dCpuCyclesCt)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.dCpuCyclesIn)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.dCpuCyclesIn)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.dCpuCyclesInNet)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.dCpuCyclesInNet)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tb4 +TF3(((countT*)&note.dCpuCyclesDt)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
                                            +tDot+TF3(((countT*)&note.dCpuCyclesDt)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)

                                        ;

                                        etThread.traceF( tinP , tSay , flTRACE_NOpREFIX ) ;

#endif

#if defined( NEVERdEFINED )
#endif

                                        /*static*/ count04T was ; was = cCpuCyclesCt ;
                                        cCpuCyclesCt += note.dCpuCyclesCt ;
                                        if( cCpuCyclesCt < was ) { BLAMMO ; }

                                        was = cCpuCyclesInGross ;
                                        cCpuCyclesInGross += note.dCpuCyclesIn ;
                                        if( cCpuCyclesInGross < was ) { BLAMMO ; }

                                        was = cCpuCyclesInNet ;
                                        cCpuCyclesInNet += note.dCpuCyclesInNet ;
                                        if( cCpuCyclesInNet < was ) { BLAMMO ; }

                                        was = cCpuCyclesDt ;
                                        cCpuCyclesDt += note.dCpuCyclesDt ;
                                        if( cCpuCyclesDt < was ) { BLAMMO ; }

                                        pczLever[ 0 ] = note.idiFileInOut ;
                                        pczLever[ 1 ] = note.idLineInOut ;

                                        swTally ++ ;
                                        *(count04T*)&(countT&)swCpu  += note.dCpuCyclesInNet ;
                                        *(count04T*)&(countT&)swTime += note.dTimeInNet      ;
                                    }
                                }

                                break ;
                            }
                        }
                    }
    
                    cbi = sizeof( telemetryBookHeadS ) ;
    
                    // /*if( idCycle == TUCK << 0 )*/ bQuitEating = 1 ;
                }
    
                TELL( "maybe deleting hamburger" )
                if( bDelete ) PUSE( tinP , *(byteT**)&pbi ) ;
                else          pbi = 0 ;
            }
    
            bBookHead = !bBookHead ;
        }
        if( bQuitEating ) break ;

        TELL( "napping for a quarter tock" )
        ++ s ; etThread.osSleepF( tinP , TOCK >> 2 ) ;
        //CONoUTrAW( "." ) ;
    }
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 6") ) ;
}

count04T cCpuCyclesBookPer = !cBook ? 0 : cCpuCyclesBook / cBook ;

count04T cCpuCyclesCtDt = cCpuCyclesCt + cCpuCyclesDt ;
count04T cCpuCyclesWatch = cCpuCyclesCtDt + cCpuCyclesBook ;
count04T cCpuCyclesWorkPerWatch = !cCpuCyclesWatch ? 0 : cCpuCyclesInNet / cCpuCyclesWatch ;

TN( tSayCt           , "cCpuCyclesCt          : " ) ; tSayCt +=
    TF3(((countT*)&cCpuCyclesCt)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesCt)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayInGross      , "cCpuCyclesInGross     : " ) ; tSayInGross +=
    TF3(((countT*)&cCpuCyclesInGross)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesInGross)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayInNet        , "cCpuCyclesInNet       : " ) ; tSayInNet +=
    TF3(((countT*)&cCpuCyclesInNet)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesInNet)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayDt           , "cCpuCyclesDt          : " ) ; tSayDt +=
    TF3(((countT*)&cCpuCyclesDt)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesDt)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayCtDt         , "cCpuCyclesCtDt        : " ) ; tSayCtDt +=
    TF3(((countT*)&cCpuCyclesCtDt)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesCtDt)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayBook         , "cCpuCyclesBook        : " ) ; tSayBook +=
    TF3(((countT*)&cCpuCyclesBook)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesBook)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayBookPer      , "cCpuCyclesBookPer     : " ) ; tSayBookPer +=
    TF3(((countT*)&cCpuCyclesBookPer)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesBookPer)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

TN( tSayWorkPerWatch , "cCpuCyclesWorkPerWatch: " ) ; tSayWorkPerWatch +=
    TF3(((countT*)&cCpuCyclesWorkPerWatch)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
    +tDot+TF3(((countT*)&cCpuCyclesWorkPerWatch)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)
;

etThread.traceF( tinP , T("cArrayPacketsMax :    ")+TF2(cArrayPacketsMax ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , T("cBook            :    ")+TF2(cBook,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayCt      , flTRACE_NOpREFIX ) ;
//MEANINGLESS: etThread.traceF( tinP , tSayInGross , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayInNet   , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayDt      , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayCtDt    , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayBook    , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayBookPer , flTRACE_NOpREFIX ) ;
etThread.traceF( tinP , tSayWorkPerWatch , flTRACE_NOpREFIX ) ;

mapCTC& mapFileTitle = processGlobal3S::_processGlobal3I_IF().mapFileTitle ;
sourceC& source = sourceC::sourceIF() ;

{
    etThread.traceF( tinP , T("tallies") ) ;

    stackC stRpt( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_SINKrEVERSE , ifcSTACKtYPE_PTR_strokeS ) ;

    ZE( countT , csttRptBody ) ;
    {
        countT cFlavors = swTally.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pczFL = (countT*)swTally.leverF( tinP , idf ) ;

            ZE( const osTextT* , postTitle ) ;
            if( pczFL[ 0 ] )
            {
                countT idFile = source.idFileRankF( tinP , pczFL[ 0 ] ) ;
                if( idFile ) postTitle = mapFileTitle( idFile ) ;
                if( postTitle ) postTitle += sizeof( countT ) ;
            }

            ZE( strokeS* , psttl ) ;
            etThread.strMakeF( tinP , LF , psttl , TF3((countT)swTally,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,8)+tb4+TF3(pczFL[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+tb4+TF2(pczFL[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+T(postTitle)+tcr ) ; ___( psttl ) ;
            csttRptBody += psttl->idAdam ;
            stRpt.sinkF( tinP , countTC() , psttl ) ;
        }
    }

    ZE( strokeS* , psttRpt ) ;    
    TN( tRptPrefix , "{\r\n    IPDOS (tm) IdeaFarm (tm) Piggyback Distributed Operating System\r\n\r\n    inOutFrameC Telemetry Report: Tallies\r\n\r\n    To generate telemetry for this report, set flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY.\r\n}\r\n" ) ;
    etThread.strMakeF( tinP , LF , psttRpt , tRptPrefix , csttRptBody ) ; ___( psttRpt ) ;
    while( stRpt )
    {
        ZE( strokeS* , psttl ) ;
        stRpt >> psttl ;
        etThread.strFuseF( tinP , psttRpt , psttl ) ;
        etThread.delF( tinP , psttl ) ;
    }

    ZE( osTextT* , postRpt ) ;
    countT costRpt = etThread.strMakeF( tinP , LF , postRpt , psttRpt ) ; ___( postRpt ) ;
    etThread.delF( tinP , psttRpt ) ;

    etThread.boxPutF( tinP , T("///ideafarm/ephemeral/reports/rpt.inOutFrameC.tally.ttt") , postRpt , costRpt ) ;
    etThread.delF( tinP , postRpt ) ;
}

{
    etThread.traceF( tinP , T("net cpu consumption") ) ;

    stackC stRpt( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_SINKrEVERSE , ifcSTACKtYPE_PTR_strokeS ) ;

    ZE( countT , csttRptBody ) ;
    ZE( count04T , cCpuNetGrandTotal ) ;
    for( countT idPass = 1 ; idPass <= 2 ; idPass ++ )
    {
        countT cFlavors = swCpu.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pczFL = (countT*)swCpu.leverF( tinP , idf ) ;

            count04T& cCpuNet = *(count04T*)&(countT&)swCpu ;

            if( idPass == 1 )
            {
                count04T was = cCpuNetGrandTotal ;
                cCpuNetGrandTotal += cCpuNet ;
                if( cCpuNetGrandTotal < was ) { BLAMMO ; }
            }
            else
            {
                ZE( const osTextT* , postTitle ) ;
                if( pczFL[ 0 ] )
                {
                    countT idFile = source.idFileRankF( tinP , pczFL[ 0 ] ) ;
                    if( idFile ) postTitle = mapFileTitle( idFile ) ;
                    if( postTitle ) postTitle += sizeof( countT ) ;
                }

                countT perTuck = (countT)( TUCK * cCpuNet / cCpuNetGrandTotal ) ;

                TN( tSay , "" ) ; tSay =

                    TF3(((countT*)&cCpuNet)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)
                    +tDot+TF3(((countT*)&cCpuNet)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)
                    +tb4+TF2(perTuck,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN)+T(" %")
                    +tb4+TF3(pczFL[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+tb4+TF2(pczFL[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+T(postTitle)
                    +tcr

                ;

                ZE( strokeS* , psttl ) ;
                etThread.strMakeF( tinP , LF , psttl , tSay ) ; ___( psttl ) ;
                csttRptBody += psttl->idAdam ;
                stRpt.sinkF( tinP , countTC() , psttl ) ;
            }
        }
    }

    ZE( strokeS* , psttRpt ) ;
    TN( tRptPrefix , "{\r\n    IPDOS (tm) IdeaFarm (tm) Piggyback Distributed Operating System\r\n\r\n    inOutFrameC Telemetry Report: Cpu\r\n\r\n    To generate telemetry for this report, set flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY.\r\n}\r\n" ) ;
    etThread.strMakeF( tinP , LF , psttRpt , tRptPrefix , csttRptBody ) ; ___( psttRpt ) ;
    while( stRpt )
    {
        ZE( strokeS* , psttl ) ;
        stRpt >> psttl ;
        etThread.strFuseF( tinP , psttRpt , psttl ) ;
        etThread.delF( tinP , psttl ) ;
    }

    ZE( osTextT* , postRpt ) ;
    countT costRpt = etThread.strMakeF( tinP , LF , postRpt , psttRpt ) ; ___( postRpt ) ;
    etThread.delF( tinP , psttRpt ) ;

    etThread.boxPutF( tinP , T("///ideafarm/ephemeral/reports/rpt.inOutFrameC.cpu.ttt") , postRpt , costRpt ) ;
    etThread.delF( tinP , postRpt ) ;
}

{
    etThread.traceF( tinP , T("net wall time consumption") ) ;

    stackC stRpt( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_SINKrEVERSE , ifcSTACKtYPE_PTR_strokeS ) ;

    ZE( countT , csttRptBody ) ;
    ZE( count04T , cTimeNetGrandTotal ) ;
    for( countT idPass = 1 ; idPass <= 2 ; idPass ++ )
    {
        countT cFlavors = swTime.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pczFL = (countT*)swTime.leverF( tinP , idf ) ;

            count04T& cTimeNet = *(count04T*)&(countT&)swTime ;

            if( idPass == 1 )
            {
                count04T was = cTimeNetGrandTotal ;
                cTimeNetGrandTotal += cTimeNet ;
                if( cTimeNetGrandTotal < was ) { BLAMMO ; }
            }
            else
            {
                ZE( const osTextT* , postTitle ) ;
                if( pczFL[ 0 ] )
                {
                    countT idFile = source.idFileRankF( tinP , pczFL[ 0 ] ) ;
                    if( idFile ) postTitle = mapFileTitle( idFile ) ;
                    if( postTitle ) postTitle += sizeof( countT ) ;
                }

                countT perTuck = (countT)( TUCK * cTimeNet / cTimeNetGrandTotal ) ;

                TN( tSay , "" ) ; tSay =

                    TF3(((countT*)&cTimeNet)[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)
                    +tDot+TF3(((countT*)&cTimeNet)[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)
                    +tb4+TF2(perTuck,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN)+T(" %")
                    +tb4+TF3(pczFL[0],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+tb4+TF2(pczFL[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+T(postTitle)
                    +tcr

                ;

                ZE( strokeS* , psttl ) ;
                etThread.strMakeF( tinP , LF , psttl , tSay ) ; ___( psttl ) ;
                csttRptBody += psttl->idAdam ;
                stRpt.sinkF( tinP , countTC() , psttl ) ;
            }
        }
    }

    ZE( strokeS* , psttRpt ) ;    
    TN( tRptPrefix , "{\r\n    IPDOS (tm) IdeaFarm (tm) Piggyback Distributed Operating System\r\n\r\n    inOutFrameC Telemetry Report: Time\r\n\r\n    To generate telemetry for this report, set flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY.\r\n}\r\n" ) ;
    etThread.strMakeF( tinP , LF , psttRpt , tRptPrefix , csttRptBody ) ; ___( psttRpt ) ;
    while( stRpt )
    {
        ZE( strokeS* , psttl ) ;
        stRpt >> psttl ;
        etThread.strFuseF( tinP , psttRpt , psttl ) ;
        etThread.delF( tinP , psttl ) ;
    }

    ZE( osTextT* , postRpt ) ;
    countT costRpt = etThread.strMakeF( tinP , LF , postRpt , psttRpt ) ; ___( postRpt ) ;
    etThread.delF( tinP , psttRpt ) ;

    etThread.boxPutF( tinP , T("///ideafarm/ephemeral/reports/rpt.inOutFrameC.time.ttt") , postRpt , costRpt ) ;
    etThread.delF( tinP , postRpt ) ;
}

etThread.traceF( tinP , T("ok") ) ;
etherC::loafIF( tinP ) ;

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
//SOURCE: 5adam.510007a1.1 END
