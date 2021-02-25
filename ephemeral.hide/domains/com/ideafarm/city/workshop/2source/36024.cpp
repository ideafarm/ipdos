//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third BEGIN
#define DDNAME       "1snip.1a000002.includegenmake.base.hide.third"
#define DDNUMB      (countT)0x1a000002
#define IDFILE      (countT)0x86a


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
/*1*//*this includes the base hide flavor of ipdos.h*//*1*/
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.2.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024002.tins.dt_tins BEGIN
#define DDNAME       "3func.36024002.tins.dt_tins"
#define DDNUMB      (countT)0x36024002
#define IDFILE      (countT)0x101b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12f0002.1.0.html\"\>definition\</A\>
i work unconditionally so that the monitor receives notice of me and so that processGlobal4I.tinVeryEarlyLateMain is maintained even if impotence occurs
*/
/**/

//#define NAME(idP) processGlobal3I.mapTinName( idP )

//#define SAYnAME(postP) { CONoUTrAW7( "[idTin,idThread,idSerial,name]: " , idTin , " " , monitor.idThread , " " , idSerial , " " ) ; CONoUTrAW( NAME( idTinNamed ) ) ; CONoUTrAW( " " postP ) ; }

/*1*/tinS::~tinS( voidT )/*1*/
{
    {
        TINSL
        //SAYnAME( "~tinS/+\r\n" )

        // ExitProcess RATHER THAN BLAMMO IS USED HERE BECAUSE I CAN BE CALLED BY EXCEPTION HANDLER CLEANUP LOOP

        POOPIES
    
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            countT cQuiet = 0x40 ; //INCR FROM 01 TO 04 TO AVOID LOGrAW
            while( cKidThreads ) //tmWindowsF must not put itself into this list because main CANNOT BLOCK HERE FOR tmWindowsF TO END BECAUSE tmWindowsF ENDS LATER
            {
                if( F(flagsThreadMode3) & flTHREADmODE3_EXCEPTIONcLEANUPdELETIONiNpROGRESS || F(processGlobal1I._thirdC_flagsProcessState) & flPROCESSsTATE_EXCEPTIONnOThANDLED )
                {
                    CONoUTrAW( "~tinS: calling ExitProcess because i am being cleaned up and i have kid threads.\r\n" ) ;
                    thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ;
                }

                //if( !cQuiet || !( -- cQuiet ) ) { LOGrAW5( postThreadName , cKidThreads , " ( pTinKid : " , (countT)pTinKid , " )\r\n" ) ; }
                { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
            }
        }

        TELL( "~tinS: setting processGlobal1I.flDt flag and testing pTinF()" )
        if( idTinNamed != ifcIDtINnAMED_tinHeartI && idTinNamed != ifcIDtINnAMED_tinBreakI )
        {
            if( pTinF() != this ) { thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; }

            switch( idTinNamed )
            {
                case ifcIDtINnAMED_tinVeryVeryEarlyLateMainI : { processGlobal1I.flDt |= flCTdTg_tinVeryVeryEarlyLateMainI ; break ; }
                case ifcIDtINnAMED_tinVeryEarlyLateMainI     : { processGlobal1I.flDt |= flCTdTg_tinVeryEarlyLateMainI     ; break ; }
                case ifcIDtINnAMED_tinInPoolMain             : { processGlobal1I.flDt |= flCTdTg_tinMainInPool             ; break ; }
            }
        }
        TELL( "~tinS: after setting processGlobal1I.flDt flag" )

        TELL( "verifying that nothing is now grabbed by this thread" )
        if( tinP.monitor.cGrabbed )
        {
            const countT offEnd = OFFgRABBEDmAX * 5 ;
            for( countT off = 0 ; off < offEnd ; off += 5 )
            {
                if( tinP.pPanLifiRecurseGrabbedLevel[ off ] )
                {
                    LOGrAW5( "~tinS dying while this is grabbed [idLineCt,idiFileCt]: " , tinP.pPanLifiRecurseGrabbedLevel[ off + 1 ] , " " , tinP.pPanLifiRecurseGrabbedLevel[ off + 2 ] , "\r\n" ) ;
                }
            }
            thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ;
        }

        TELL( "~tinS: deregistering" )
        deregisterIfF( tinP ) ;

        //PSEUDODUPLICATE CODE: 1450002 12f0002 1030003 1020171
        if( pSwsRecycle )
        {
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            countT cFlavors = pSwsRecycle->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                pczl_pSwsRecycle = (countT*)pSwsRecycle->leverF( tinP , idf ) ;
        
                while( *pSwsRecycle )
                {
                    ZE( voidT* , pObject ) ;
                    *pSwsRecycle >> *(countT*)&pObject ;

                    if( pczl_pSwsRecycle && pObject )
                    {
                        switch( *pczl_pSwsRecycle )
                        {
                            case ifcIDtYPErECYCLE_soulC        : { DEL(        *(soulC**)&pObject ) ; break ; }
                            case ifcIDtYPErECYCLE_stackC       : { DEL(       *(stackC**)&pObject ) ; break ; }
                            case ifcIDtYPErECYCLE_switchC      : { DEL(      *(switchC**)&pObject ) ; break ; }
                            case ifcIDtYPErECYCLE_switchStackC : { DEL( *(switchStackC**)&pObject ) ; break ; }
                            default                            : { thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; break ; }
                        }
                    }
                }
            }
            THREADmODE1rESTORE
        }
        DEL( pSwsRecycle ) ; //TO MAKE SURE THAT etRock EXISTS WHEN THESE ARE DELETED
    }

    if( pTinOld )
    {
        {
            TINSL
            //SAYnAME( "~tinS/ " ) CONoUTrAW( "copying to " ) ; CONoUTrAW( NAME( pTinOld->idTinNamed ) ) ; ; CONoUTrAW( "\r\n" ) ;
        }

        if( thirdC::c_memcpyWithCallBackIF( (byteT*)pTinOld + CBtINpREFIX , (byteT*)this + CBtINpREFIX , sizeof( tinS ) - CBtINpREFIX - CBtINsUFFIX , dtTellCopyDoneF , (countT)this ) ) { CONoUTrAW( "I AM BLAMMOING  LA  TEEE  DAA!\r\n" ) ; thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; } //CODE SYNC: 003002a 12f0002 12f0003

        if( pTinF() != pTinOld ) { thirdC::dosExitProcessIF( ifcEXITcODEpROCESSiMPOTENT ) ; }
    }
    else
    {
        TINSL       // I CANNOT USE MYSELF BECAUSE I MIGHT BE tinHeart OR tinBreak

        if( monitor.idThread > 3 ) // FOR THREAD 1, SEE doC::~doC; THREAD 2 AND 3 ARE tinHeart AND tinBreak, WHICH NORMALLY ACCUMULATE NO TELEMETRY
        {
            THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;

            //PSEUDOdUPLICATEcODE 360fc002 33000065
            if( tinP.pbPendingInOutFramePackets )
            {
                countT& cPending = *(countT*)tinP.pbPendingInOutFramePackets ;

                if( cPending )
                {
                    tellInfoAppInOutFrameS* pPending = (tellInfoAppInOutFrameS*)( tinP.pbPendingInOutFramePackets + sizeof( countT ) ) ;

                    if( cPending > CmAXpENDINGiNoUTfRAMEpACKETS )
                    {
                        CONoUTrAW5( "~tinS error: [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        LOGrAW5(    "~tinS error: [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        BLAMMO ;
                    }

                    {
                        tellC tell( tinP , LF , 0 , ifcIDtYPEtELLaPP_INoUTaRRAY , tinP.pbPendingInOutFramePackets , sizeof( countT ) + cPending * sizeof( tellInfoAppInOutFrameS ) ) ;
                        thirdC::dosTellMonitorIF( tinP , tell , ifcIDbOOKStELL_APP ) ;
                    }

                    cPending = 0 ;
                }
            }

            //PS:PSEUDOdUPLICATE CODE: 36024002 360fc002
            tellInfoAppInOutFrameTinDtS info ;
            info.idThreadReporting = monitor.idThread ;
            info.cTells = cTellsWriteInOutTelemetry ;
                          cTellsWriteInOutTelemetry = 0 ;
            info.cCpuCyclesWriteInOutTelemetry = cCpuCyclesWriteInOutTelemetry ;
                                                 cCpuCyclesWriteInOutTelemetry = 0 ;

            THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY ) ;
            TELLaPPc3LIFI( ifcIDtYPEtELLaPP_INoUTtINdT , (byteT*)&info , sizeof info , ifcLINE , DDNUMB ) ;
        }

        dtTellCopyDoneF( (countT)this ) ;
        POOPIES
        if( idTinNamed != ifcIDtINnAMED_tinHeartI && idTinNamed != ifcIDtINnAMED_tinBreakI ) unwatchedF() ;

        if( F(thirdC::third_flagsModeAdam2I_IF(*this)) & flADAMmODE2_THREADcHATTER )
        {
            LOGrAW( postThreadName ) ;
            LOGrAW( "-\r\n" ) ;
        }

        if( pPoolUse ) PUSE( tinP , pbPendingInOutFramePackets ) ;
        else           processGlobal3I.heap.delF( tinP , pbPendingInOutFramePackets ) ;
    }

    TINSL
    TELL( "~tinS: final tell tag in ~tinS" )
    //SAYnAME( "~tinS/-\r\n" )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024002.tins.dt_tins END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024003.tins.tins BEGIN
#define DDNAME       "3func.36024003.tins.tins"
#define DDNUMB      (countT)0x36024003
#define IDFILE      (countT)0x101c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12f0006.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

// THIS DEFINITION MUST WORK WHEN tinP REFERENCES BYTES THAT ARE ALL SET TO 0 ("tinS. processGlobal3I.tinVeryVeryEarlyLateMain( processGlobal3I.tinVeryVeryEarlyLateMain , TAG( TAGiDnULL ) , flTINs_CONSTRUCTqUIETLY ) ;")
//CONJ: THE PRECEDING COMMENT IS OBSOLETE AND NO LONGER TRUE

// "tinSelfOrElderP": USUALLY SO, BUT NOT ALWAYS (AN EXCEPTION TIN WILL BE, YOU GUESSED IT, AN EXCEPTION (S))

/*1*/tinS::tinS( tinS& tinSelfOrElderP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idThreadP , tinS* const pTinDadP , const osTextT* const postThreadNameP , const flagsT flagsP , const countT idTinNamedP , byteT* const pbTlsP , const countT cbTlsP )/*1*/ :
idSerial( 0 ) ,
idTin( 1 + incv02AM( processGlobal1I._tinS_idTinLath ) ) ,
top_pTinMainI_
(
    idTinNamedP == ifcIDtINnAMED_tinVeryVeryEarlyLateMainI
    ||
    idTinNamedP == ifcIDtINnAMED_tinInPoolMain
        ? (countT*)&pTinMainI
        : (countT*)0
    ,
    (countT)this
) ,
tally( tinSelfOrElderP ) ,
flags( flagsP ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
pAdamGlobal1( pTinDadP ? pTinDadP->pAdamGlobal1 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal1 : &rootAdamGlobal1I ) ) ,
pAdamGlobal2( pTinDadP ? pTinDadP->pAdamGlobal2 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal2 : &rootAdamGlobal2I ) ) ,
pAdamGlobal3( pTinDadP ? pTinDadP->pAdamGlobal3 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal3 : &rootAdamGlobal3I ) ) ,
pAdamGlobal4( pTinDadP ? pTinDadP->pAdamGlobal4 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal4 : &rootAdamGlobal4I ) ) ,
pAdamGlobal5( pTinDadP ? pTinDadP->pAdamGlobal5 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal5 : &rootAdamGlobal5I ) ) ,
pAdamGlobal6( pTinDadP ? pTinDadP->pAdamGlobal6 : ( idTinNamedP == ifcIDtINnAMED_tinInPool ? tinSelfOrElderP.pAdamGlobal6 : &rootAdamGlobal6I ) ) ,
fingerprint( 0 ) ,
idDesire( 0 ) ,
idDesireProcess( 0 ) ,
osTid( ( putNegAM( fingerprint , FINGERnEG_TINszOMBIE ) , ( this == &processGlobal5I.tinBreak || this == &processGlobal4I.tinHeart ) ? 0 : dosGetInfoBlocksIdThreadIF() ) ) ,
osPid( dosGetInfoBlocksIdProcessIF( tinSelfOrElderP ) ) ,
time1( 0 ) ,
time2( 0 ) ,
cRain( 0 ) ,
cManna( 0 ) ,
idiTask( 0 ) ,
idlTask( 0 ) ,
idPhase1( ifcIDpHASEtHREAD_PROLOG ) ,
idPhase2( 0 ) ,
idPhase3( 0 ) ,
flagsThreadMode1( flTHREADmODE1_UPDATEtIN ) ,
flagsThreadMode2( flTHREADmODE2_null      ) ,
flagsThreadMode3( flTHREADmODE3_INoUTfRAMErEGISTERcALLnEST ) ,
flagsThreadMode4( this == &tinSelfOrElderP ? flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY : flTHREADmODE4_null ) ,
cKidThreads( 0 ) ,
brcRaw( 0 ) ,
brcm04Raw( 0 ) ,
bosFail( 0 ) ,
brcQuery( 0 ) ,
brcLath( 0 ) ,
idLine_brcLath( 0 ) ,
idiFile_brcLath( 0 ) ,
idBlammo( 0 ) ,
monitor( tinSelfOrElderP , idThreadP ) ,
pScoopEtThread( 0 ) ,
pScoops( 0 ) ,
cCpuCyclesWriteInOutTelemetry( 0 ) ,
cTimeWriteInOutTelemetry( 0 ) ,
cTellsWriteInOutTelemetry( 0 ) ,
pInOutFrame( 0 ) ,
cCpuCycles2Or5Lath( 0 ) ,
cTime2Or5Lath( 0 ) ,
pbPendingInOutFramePackets( 0 ) ,
pEther( 0 ) ,
grabPseudo( tinSelfOrElderP , idLineCtP , idiFileCtP , 0 , flGRABc_tINSoBJECT | flGRABc_DISABLED | flGRABc_PSEUDO ) ,
msSleepWhenGrabbing( 0x40 + ( osTid & 0x1f ) << 3 ) ,
zap_pPanLifiRecurseGrabbedLevel_( (byteT*)pPanLifiRecurseGrabbedLevel , sizeof pPanLifiRecurseGrabbedLevel, flZAP_CT ) ,
cGrabitC_set( 0 ) ,
cGrabitC_reset( 0 ) ,
cGrabitC_registered( 0 ) ,
cGrabitC_unregistered( 0 ) ,
ranUni( tinSelfOrElderP , MAXcOUNTT , idThreadP ) ,
//pTinDad( pTinDadP ) ,                                     //U::20180630@1405: WHY ARE THESE COMMENTED OUT?  CONJ: THEY ARE SET DURING COPYING OF THE IMAGE FROM DAD TO ME
//pTinKid( 0 ) ,
//pTinBro( 0 ) ,
//cGrab_pTinKid( 0 ) ,
pcQuit( 0 ) ,
pEtText( 0 ) ,
pEtScratch( 0 ) ,
pRestart( 0 ) ,
pTinOld( 0 ) ,
idTinNamed( idTinNamedP ) ,
cYield( 0 ) ,
pbTls( pbTlsP ) ,
cbTls( cbTlsP ) ,
idLineMile( 0 ) ,
idiFileMile( 0 ) ,
//idLineMileDad( 0 ) ,
//idiFileMileDad( 0 ) ,
postRptExceptionLath( 0 ) ,
pTieLath( 0 ) ,
poop( flPOOP_SMELLY ) ,
pPoop( &poop ) ,
pcExitsWhere( tinSelfOrElderP.pAdamGlobal1->pcExitsWhere ) ,
ccExitsWhere( sizeof tinSelfOrElderP.pAdamGlobal1->pcExitsWhere / sizeof tinSelfOrElderP.pAdamGlobal1->pcExitsWhere[ 0 ] ) ,
pczl_pSwsRecycle( 0 ) ,
pSwsRecycle( 0 ) ,
odoSockCbRead( 0 ) ,
odoSockCbWrite( 0 ) ,
pPoolUse( tinSelfOrElderP.pAdamGlobal1->pPoolAdamTemp ) ,
pAdam( 0 ) ,
pBk0TelemetrySysScratch( 0 ) ,
pBk0TelemetryAppScratch( 0 ) ,
pBk0TraceScratch( 0 ) ,
ta( tinSelfOrElderP ) ,
pClean( 0 ) ,
cArmTrace_soulC( 0 ) ,
flagsTrace_soulC( flTRACEsOULc_ON | flTRACEsOULc_INHERIT | flTRACEsOULc_countT | flTRACEsOULc_DUMP ) ,
cTls( 0 ) ,
pcWatchedByInOut( 0 ) ,
valueExpectedByInOut( 0 ) ,
cPoolDropCt( 0 ) ,
cPoolDropDt( 0 ) ,
fliSexCtPendingExpCbDrop( 0 ) ,
fliSexCtPendingExpSlots( 0 ) ,
pBarryUtility( 0 ) ,
pbRecursiveParameters( 0 ) ,
bSuppressInOutTrace( 0 ) ,
cSpins1( 0 ) ,
cSpins2( 0 ) ,
cSpins3( 0 ) ,
cSpins4( 0 ) ,
pSgnUtility( 0 ) ,
pSexLifoConstructing( 0 )
//idDesire_cGrab_pTinKid( 0 )
{
    {
        if( !idTinNamedP ) { BLAMMO ; }

        //SAYnAME( " tinS/+\r\n" )
    
        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)ppbGrabitRecurse            , sizeof ppbGrabitRecurse            ) ;
        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)pcGrabitOsTid               , sizeof pcGrabitOsTid               ) ;
        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)pcGrabitRecurse             , sizeof pcGrabitRecurse             ) ;

        if( F(flags) & flTINs_INHERITjOTrEGISTRATIONS ) thirdC::c_memcpyIF( tinSelfOrElderP , (byteT*)ppJot , (byteT*)pTinDadP->ppJot , sizeof ppJot ) ;
        else                                            thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)ppJot                           , sizeof ppJot ) ;

        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)pBookMark                   , sizeof pBookMark                   ) ;

        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)pPanLifiRecurseGrabbedLevel , sizeof pPanLifiRecurseGrabbedLevel ) ;

        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)postPad1                    , sizeof postPad1                    ) ;

        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)postThreadName              , sizeof postThreadName              ) ;

        thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)postPad2                    , sizeof postPad2                    ) ;

        {
            idDesire = thirdC::dosPriorityIF( tinSelfOrElderP ) ;
            idDesireProcess = thirdC::dosPriorityProcessIF( tinSelfOrElderP ) ;
        
            if( pbBitsCtP ) thirdC::c_memcpyIF( tinSelfOrElderP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
            else            thirdC::c_memsetIF( tinSelfOrElderP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
        
            //U::VALIDATE flags...NOTE THAT flags IS NOT VALIDATED. THIS IS BECAUSE I DO NOT HAVE AN POOP TO SET U::CONJ: IT COULD BE VALIDATED NOW THAT I KNOW WHETHER I CAN USE tinP AS MY ELDER)    
            {
                homeS* ph = ( F(processGlobal1I.flCt) & flCTdTg_napHomeI && !( F(processGlobal1I.flDt) & flCTdTg_napHomeI ) ) ? (homeS*)(byteT*)processGlobal3I.napHome : 0 ;
                idSerial  = ph ? 1 + incv02AM( ph->idSerialLath ) : 0 ;
            }
        
            if( !( F(flags) & flTINs_NOeLDER ) )
            {
                *(tinS**)&pTinOld = &tinSelfOrElderP ;
                //SAYnAME( " tinS/ " ) CONoUTrAW( " copying from " ) ; CONoUTrAW( NAME( tinSelfOrElderP.idTinNamed ) ) ; CONoUTrAW( "\r\n" ) ;

                if( getNegAM( tinSelfOrElderP.fingerprint ) != FINGERnEG_TINs ) BLAMMO ;
                putNegAM( tinSelfOrElderP.fingerprint , FINGERnEG_TINszOMBIE ) ; //FROM NOW UNTIL I REGISTER MYSELF, MONITOR WILL NOT BE ABLE TO SEE A tinS FOR THIS THREAD

                if( thirdC::c_memcpyWithCallBackIF( (byteT*)this + CBtINpREFIX , (byteT*)&tinSelfOrElderP + CBtINpREFIX , sizeof( tinS ) - CBtINpREFIX - CBtINsUFFIX , ctTellCopyDoneF , (countT)this ) ) { BLAMMO ; } //CODE SYNC: 003002a 12f0002 12f0003

                thirdC::c_strncpyIF( postTell , "tinS::tinS: my image is now valid by copying my elder" , sizeof postTell ) ;
        
                if( pTinOld->pPoop != &pTinOld->poop ) { BLAMMO ; }
            }
            else
            {
                ctTellCopyDoneF( (countT)this ) ;
                TINSL

                if( F(thirdC::third_flagsModeAdam2I_IF(*this)) & flADAMmODE2_THREADcHATTER )
                {
                    //if( !thirdC::c_strcmpIF( postThreadNameP , "tmKillSocketF" ) )
                    {
                        //LOG rAW3nOtIN( "" , pAdamGlobal1->idAdam , " " ) ;
                        //LOG rAWnOtIN( postThreadNameP ) ;
                        //LOG rAW3nOtIN( "/" , monitor.idThread , "/+\r\n" ) ;
                    }
                }
        
                if( F(thirdC::third_flagsModeAdam2I_IF(*this)) & flADAMmODE2_THREADcHATTER )
                {
                    //CONoUTnOtIN2( postThreadNameP , 1 ) ;
                    LOGrAW( postThreadNameP ) ;
                    LOGrAW( "+\r\n" ) ;
                }
        
                const boolT bComments = !( F(flags) & flTINs_DISABLEcOMMENTS  ) ;
                
                monitor.idDirty ++ ;
                {for( countT off = 0 ; off < sizeof pLFstep / sizeof pLFstep[ 0 ] ; off ++ ) pLFstep[ off ] = 0 ;}
                
                //O: USE thirdC::c_memsetIF
                {for( countT off = 0 ; off < sizeof monitor.pLFnest / sizeof monitor.pLFnest[ 0 ] ; off ++ ) monitor.pLFnest[ off ] = 0 ;}
                for( countT off = 0 ; off <= OFFsLOTtINnESTmAX ; off ++ )
                {
                    pIdInNest[             off ] = 0 ;
                    pEIPInNest[            off ] = 0 ;
                    pIdProgressNest[       off ] = 0 ;
                    pFlagsThreadLevelMode[ off ] = flTHREADlEVELmODE_null ;
            
                }
                thirdC::c_memsetIF( tinP , (byteT*)pcUtility    , sizeof pcUtility   ) ;
                thirdC::c_memsetIF( tinP , (byteT*)pcUtility04  , sizeof pcUtility04 ) ;
                //thirdC::c_memsetIF( tinP , (byteT*)ppTinKid   , sizeof ppTinKid    ) ;
                {
                    thirdC::c_strncpyIF( tinP , postTell , "constructing this tinS, object" , sizeof postTell ) ;
                    thirdC::c_memsetIF( tinP , postTellWait        , sizeof postTellWait ) ;
                    thirdC::c_memsetIF( tinP , postTellIf          , sizeof postTellIf ) ;
                }
                
                //monitor.cInNest = 1 ; //ENSURES THAT THE MONITOR WILL NEVER SEE A NULL monitor.cInNest (IF IT DOES, THERE IS A BUG)
                //monitor.pLFnest[ 2 ] = idLineCt & ~fliSTEP_FLAGmASK ;
                //monitor.pLFnest[ 3 ] = idiFileCt ;
        
                thirdC::c_strncpyIF( tinP , postThreadName , postThreadNameP , sizeof postThreadName ) ;
                //U::WILL pPoop WORK?: declareVmUsageTypeGF( tinP , (byteT*)tinP.pPoop , flVMuSAGEtYPE_CPUsTACK , monitor.idThread , postThreadName ) ;
                
                if( monitor.idThread <= ClOWtHREADS )
                {
                    if( processGlobal2I.pLowThread[ monitor.idThread ].osTid ) { BLAMMO ; }
                    processGlobal2I.pLowThread[ monitor.idThread ].osTid = osTid ;
                    thirdC::c_strncpyIF( tinP , processGlobal2I.pLowThread[ monitor.idThread ].postThreadName , postThreadName , sizeof processGlobal2I.pLowThread[ monitor.idThread ].postThreadName ) ;
                }
        
                monitor.idDirty ++ ;
                putNegAM( fingerprint , FINGERnEG_TINs ) ; //MY IMAGE IS NOW COMPLETELY VALID
                thirdC::c_strncpyIF( tinP , postTell , "tinS::tinS: my image is now valid by raw construction" , sizeof postTell ) ;
            }
    
            TINSL
        
            TELL( "tinS: setting processGlobal1I.flCt flag and testing pTinF()" )
            if( idTinNamed != ifcIDtINnAMED_tinHeartI && idTinNamed != ifcIDtINnAMED_tinBreakI )
            {
                if( pTinF() != this ) { BLAMMO } ;
    
                switch( idTinNamed )
                {
                    case ifcIDtINnAMED_tinVeryVeryEarlyLateMainI : { processGlobal1I.flCt |= flCTdTg_tinVeryVeryEarlyLateMainI ; break ; }
                    case ifcIDtINnAMED_tinVeryEarlyLateMainI     : { processGlobal1I.flCt |= flCTdTg_tinVeryEarlyLateMainI     ; break ; }
                    case ifcIDtINnAMED_tinInPoolMain             : { processGlobal1I.flCt |= flCTdTg_tinMainInPool             ; break ; }
                }
            }
            TELL( "tinS: after setting processGlobal1I.flCt flag" )

            if( idTinNamed == ifcIDtINnAMED_tinVeryVeryEarlyLateMainI && monitor.idThread <= ClOWtHREADS && !( ++ processGlobal1I.pcPhaseLow[ monitor.idThread ] ) ) { BLAMMO ; }
        
            if( idTinNamed == ifcIDtINnAMED_tinHeartI || idTinNamed == ifcIDtINnAMED_tinBreakI || idTinNamed == ifcIDtINnAMED_tinEarlyLate )
            {
                ZE( osTextT* , postn ) ;
                {
                    switch( idTinNamed )
                    {
                        case ifcIDtINnAMED_tinHeartI    : { postn = "tmHeartF" ; break ; }
                        case ifcIDtINnAMED_tinBreakI    : { postn = "tmBreakF" ; break ; }
                        case ifcIDtINnAMED_tinEarlyLate :
                        {
                            static countT bDone ;
                            if( !setIfZeAM( bDone , 1 ) ) postn = "earlyLateOrException" ;
                            break ;
                        }
                    }
                    if( idTinNamed == ifcIDtINnAMED_tinHeartI || idTinNamed == ifcIDtINnAMED_tinBreakI ) thirdC::c_strncpyIF( tinP , postThreadName , postn , sizeof postThreadName ) ;
                }
        
                if( postn )
                {
                    osTextT* postOverride = idiFileCt != 0x3000b71 ? postn : "earlyLate" ;
    
                    tellInfoSysLifiS info ;
                    info.idLine = idLineCt & 0xfff ;
                    info.idiFile = idiFileCt ;
                    thirdC::c_strncpyIF( tinP , info.postName , postOverride , sizeof info.postName ) ;
                    info.costName = thirdC::c_strlenIF( tinP , info.postName ) ;
                    TELLsYSc3LIFI( ifcIDtYPEtELLsYS_LIFInAME , (byteT*)&info , sizeof info , idLineCt , idiFileCt ) ;
                }
            }
    
            if( !( F(flags) & flTINs_CONSTRUCTqUIETLY ) )
            {
                thirdC::c_strncpyIF( tinP , postTell , "tinS::tinS: registering myself" , sizeof postTell ) ;
                //ap_artmentOldC aptMe( tinP , (byteT*)this ) ;
                countT idTypeSay = ifcIDtYPEtELLsYS_TINcTP ;
                //countT idTypeSay = aptMe ? ifcIDtYPEtELLsYS_TINcTI : ifcIDtYPEtELLsYS_TINcTP ;
                tellInfoSysTinS info ;
                info.idSerial   = idSerial ;
                info.ip         = (countT)this ;
                //info.ip       = aptMe ? aptMe : (countT)this ;
                info.idTin      = idTin ;
                thirdC::c_strncpyIF( tinP , info.postThreadName , postThreadName , sizeof info.postThreadName ) ;
                info.idTinNamed = idTinNamed ;
                info.idLineCt   = idLineCt ;
                info.idiFileCt  = idiFileCt ;
                TELLsYSc3LIFI( idTypeSay , (byteT*)&info , sizeof info , idLineCt , idiFileCt )
            }
            thirdC::c_strncpyIF( tinP , postTell , "tinS::tinS: i am now registered" , sizeof postTell ) ;
            if( idTinNamed == ifcIDtINnAMED_tinBreakI ) thirdC::c_strncpyIF( tinP , postTell , "refusalsToClose:0    logoffsSeen:0" , sizeof postTell ) ; //CODEsYNC: 12f0006 10200cc

            if( monitor.idThread > 3 ) // FOR THREAD 1, SEE do3; THREAD 2 3 ARE tinHeart AND tinBreak
            {
                if( !pbPendingInOutFramePackets )
                {
                    countT cba = sizeof( countT ) + CmAXpENDINGiNoUTfRAMEpACKETS * sizeof( tellInfoAppInOutFrameS ) ;

                    if( !pPoolUse ) pbPendingInOutFramePackets = processGlobal3I.heap.newF( tinP , LF , cba ) ;
                    else
                    {
                        ZE( byteT* , pbn ) ;                                // THIS IS USED TO PREVENT pbPendingInOutFramePackets FROM BEING USED BEFORE ITS WOTH countT IS INITIALIZED
                        PUSE.newF( tinP , LF , pbn , cba ) ; ___( pbn ) ;
                        pbPendingInOutFramePackets = pbn ;
                    }

                    *(countT*)pbPendingInOutFramePackets = 0 ;
                }
            }
        }
    
        //SAYnAME( " tinS/-\r\n" )
    }

    if( this == &tinSelfOrElderP && monitor.idThread > 3 ) flagsThreadMode4 &= ~( F(flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024003.tins.tins END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024004.tins.strfusef BEGIN
#define DDNAME       "3func.36024004.tins.strfusef"
#define DDNUMB      (countT)0x36024004
#define IDFILE      (countT)0x101d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strFuseF.0.html\"\>instances\</A\>
\<A HREF=\"5.12f0007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7740104.1.1.0.html\"\>7740104:  WAKEsHOW( "example.simplest.func.12f0007.tinS.strFuseF" )\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
  can be *this
  if tinP is *this then i will disable *this so that it is not updated while i report on it
 flagsInclude1P
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001014e.flTINrPT1!||
  can be 0
  if 0 then the value - 1 (all flags) is implied
 flagsInclude2P
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010167.flTINrPT2!||
  can be 0
  if 0 then the value - 1 (all flags) is implied
 flagsExclude1P
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001014e.flTINrPT1!||
  can be 0
  is used to "turn off" some of the flags specified by (or implied by a null value of) flagsIncludeP
 flagsExclude2P
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010167.flTINrPT2!||
  can be 0
  is used to "turn off" some of the flags specified by (or implied by a null value of) flagsIncludeP
 idFormatP
 cIndentP
  can be 0
  each line of the report will be indented this many strokes
*/
/**/

/*1*/voidT tinS::strFuseF( tinS& tinP , etherC& ether , strokeS*& psttP , const countT csttExtraP , const flagsT flagsInclude1P , const flagsT flagsInclude2P , const flagsT flagsExclude1P , const flagsT flagsExclude2P , countT idFormatP , const countT cIndentP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ; // IF DO ANY TESTING THEN MUST DISABLE UPDATING EARLIER (BEFORE HERE)
        FV( flTINrPT1 , flagsInclude1P ) ;
        FV( flTINrPT1 , flagsExclude1P ) ;
        FV( flTINrPT2 , flagsInclude2P ) ;
        FV( flTINrPT2 , flagsExclude2P ) ;
        __( &tinP == this ) ;
        if( POOP ) return ; // IF DO ANY TESTING THEN MUST DISABLE UPDATING EARLIER (BEFORE HERE)
    }

    _IO_

    TN( ti , "" ) ;
    countT cToDo = cIndentP ;
    while( cToDo -- ) ti += T(" ") ;

    ZE( flagsT , flagsThreadMode1Save ) ;
    if( &tinP == this )
    {
        flagsThreadMode1Save = flagsThreadMode1 ;
        flagsThreadMode1 &= ~( F(flTHREADmODE1_UPDATEtIN) ) ;
    }

    const flagsT flags1 = ( F(flagsInclude1P) ? flagsInclude1P : FaLLsET( flagsInclude1P ) ) & ~( F(flagsExclude1P) ) ;
    const flagsT flags2 = ( F(flagsInclude2P) ? flagsInclude2P : FaLLsET( flagsInclude2P ) ) & ~( F(flagsExclude2P) ) ;
    if( !idFormatP ) idFormatP = flTINrPTfORMAT_NORMAL ;
    const boolT bb = idFormatP != flTINrPTfORMAT_NORMAL ; // "bb" "BE BRIEF"

    static osTextT* ppostTitle[] =
    {
        "tinS"              ,                            //0 //NO LONGER USE THIS, AND REMOVED LEADING BLANK IN REMAINING ELEMENTS OF THIS ARRAY
        "postThreadName    | " ,                        //1
        "idThread          | " ,                        //2
        "osTid             | " ,                        //3
        "osPid             | " ,                        //4
        "idMonitor         | " ,                        //5
        "idMonitorTock     | " ,                        //6
        "cNewSteps         | " ,                        //7
        "mStepsPerTuck     | " ,                        //8
        "idWhat           | " ,                        //a
        "last              | " ,                        //b
        "constructed       | " ,                        //c
        "idProcessOldI         | " ,                        //d
        "idStep            | " ,                        //e
        "idDirty           | " ,                        //f
        "postTell          | " ,                        //01
        "postTellIf        | " ,                        //11
    } ;

    TN( t1b , " " ) ;
    TN( t2b , "  " ) ;
    TN( t3b , "   " ) ;
    TN( t4b , "    " ) ;
    TN( t9b , "         " ) ;
    TN( tq , "\"" ) ;
    TN( tc , "\r\n" ) ;
    TN( tCalledBy  , "called by         | " ) ; // CODE ASSUMES THAT THESE 2 ARE THE SAME LENGTH
    TN( tCalledBy2 , "|       |         | " ) ; // ""
    TN( tStep      , "step "                ) ; // CODE ASSUMES THAT THESE 2 ARE THE SAME LENGTH
    TN( tStep2     , "|  | "                ) ; // ""
    TN( tStepSuff  , "     | "               ) ;

    const osTextT* postFileLast = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , pLFstep[ ( ( monitor.idStep & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] ) ) ;

    const countT idnMin =  monitor.cInNest > OFFsLOTtINnESTmAX ?  monitor.cInNest - OFFsLOTtINnESTmAX : 1 ;
    countT idsMin = monitor.idStep > OFFsLOTtINsTEPmAX ? monitor.idStep - OFFsLOTtINsTEPmAX : 1 ;
    countT idns = monitor.cInNest ;
    ZE( countT , csttn ) ;
    countT csttWhereMax = processGlobal3I.mapWhat.costMaxF() ;

    ZE( countT , csttn1 ) ; // THESE ARE USED SO THAT THE CAUSE OF A HUGE csttn VALUE CAN BE TRACKED
    ZE( countT , csttn2 ) ;
    ZE( countT , csttn3 ) ;
    ZE( countT , csttn4 ) ;
    ZE( countT , csttn5 ) ;
    ZE( countT , csttn6 ) ;
    ZE( countT , csttn7 ) ;
    ZE( countT , csttn8 ) ;
    ZE( countT , csttn9 ) ;
    ZE( countT , csttna ) ;
    ZE( countT , csttnb ) ;
    {
        for( countT off = 0 ; off < sizeof ppostTitle / sizeof *ppostTitle ; off ++ ) csttn1 += ether.strBodyLengthF( tinP , ppostTitle[ off ] ) + tc.csF( tinP ) ; //A
        csttn += csttn1 ;

        csttn += cIndentP + ether.strBodyLengthF( tinP , postThreadName ) + 2 * tq.csF( tinP ) ;                //B
        csttn2 = 0xc ;                                                                                          //W
        csttn += cIndentP + ether.strBodyLengthF( tinP , postTellIf     ) + 2 * tq.csF( tinP ) ;                //m
        csttn += cIndentP + ether.strBodyLengthF( tinP , postTell       ) + 2 * tq.csF( tinP ) ;                //m
        csttn += csttn2 ;
        csttn += 0xa * 0xd + 0xc * cIndentP ;                                                                   //C
        csttn += 2 * 0xc ;                                                                                      //F
        csttn += 1 * 0x10 + cIndentP ;                                                                          //D //U:A POSITIVE VALUE ONLY REQUIRES 0xc STROKES
        csttn += 1 * 3 ;                                                                                        //H
        csttn3 = 1 + monitor.cInNest ;                                                                                    //G
        csttn += 9 ;                                                                                            //g
        csttn += csttn3 ;
        csttn += t1b.csF( tinP ) ;                                                                              //V
        csttn += 2 * ( cIndentP + tc.csF( tinP ) ) ;                                                            //X

        if( postFileLast ) csttn4 = t4b.csF( tinP ) + 2 * tq.csF( tinP ) + ether.strBodyLengthF( tinP , postFileLast ) ; //I
        csttn += csttn4 ;
        csttn += cIndentP + csttWhereMax ;                                                                      //E

        for( countT idn = monitor.cInNest ; idn >= idnMin ; idn -- )
        {
            const osTextT* postFileNest = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , monitor.pLFnest[ ( ( idn & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ) ) ;

            csttn +=  tCalledBy.csF( tinP ) ;                                                                   //J
            csttn += 0xc ;                                                                                      //K
            csttn5 += 1 + idn ;                                                                                 //L
            csttn += 3 ;                                                                                        //M
            csttn += 9 ;                                                                                        //i
            csttn += 8 ;                                                                                        //N
            if( postFileNest ) csttn6 += t4b.csF( tinP ) + 2 * tq.csF( tinP ) + ether.strBodyLengthF( tinP , postFileNest ) ; //O
            csttn += cIndentP + tc.csF( tinP ) ;                                                                //h
        }
        csttn += csttn5 ;
        csttn += csttn6 ;
        csttn += csttn7 ;
        csttn += csttn8 ;
        csttn += csttn9 ;

        ZE( boolT , bOut ) ;
        for( countT ids = monitor.idStep ; ids >= idsMin ; ids -- )
        {
            const osTextT* postFileStep = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , pLFstep[ ( ( ids & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] ) ) ;
            if( pLFstep[ ( ids & OFFsLOTtINsTEPmAX ) << 1 ] & fliSTEP_NESTcHANGE )
            {
                if( pLFstep[ ( ids & OFFsLOTtINsTEPmAX ) << 1 ] & fliSTEP_NESToUT ) bOut = 1 ;
                else
                {
                    idns -- ;
                    if( idns == - 1 ) idns = 0 ;
                }
            }

            csttn += tStep.csF( tinP ) ; //Y
            csttn += 8 ; //Z
            csttn += tStepSuff.csF( tinP ) ; //a
            csttn += 0xc ; //b
            csttn += 9 ; //k
            csttna += 1 + idns ; //c
            csttn += 3 ; //d
            csttn += 8 ; //e
            if( postFileStep ) csttnb += t4b.csF( tinP ) + 2 * tq.csF( tinP ) + ether.strBodyLengthF( tinP , postFileStep ) ; //f
            csttn += tc.csF( tinP ) + cIndentP ; //g

            if( bOut )
            {
                bOut = 0 ;
                idns ++ ;
            }
        }
        csttn += csttna ;
        csttn += csttnb ;
    }

    //U: TF3 -> TF1 and TP->T AFTER VERIFY THAT LENGTH CALCULATION IS CORRECT

    ether.strFuseF( tinP , psttP , T("") , 0 , 0 , strokeS() , 0 , 0 , /*U::SOUL?*/ csttn + csttExtraP ) ; ___( psttP ) ;

    //if( !bb ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0])+tc ) ; ___( psttP ) ; } //A
    if( bb )
    {
        ZE( boolT , bc ) ;
        if( F(flags1) & flTINrPT1_osPid                 ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+TF1(osPid)                                                                                      +t1b ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_osTid                 ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+TF1(osTid)                                                                                      +t1b ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_idProcessOld             ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+TF1(monitor.idProcessOld)                                                                                  +t1b ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_idThread              ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+TF1(monitor.idThread)                                                                                   +t1b ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_postThreadName        ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+T(postThreadName)                                                                               +t1b ) ; ___( psttP ) ; } //A //B
        if( F(flags1) & flTINrPT1_idWhat1               ) { bc = 1 ; ether.strFuseF( tinP , psttP , ti+TP(processGlobal3I.mapWhat(monitor.idWhat1),csttWhereMax)                                                       +t1b ) ; ___( psttP ) ; } //A //E
        if( bc ) { ether.strFuseF( tinP , psttP , tc ) ; ___( psttP ) ; } //B
    }
    else
    {
        if( F(flags2) & flTINrPT2_idDirty               ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0xf])+TF3(monitor.idDirty,0,8)                                                                                +tc ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_idStep                ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0xe])+TF3(monitor.idStep,0,8)                                                                                 +tc ) ; ___( psttP ) ; } //A //C

        if( F(flags1) & flTINrPT1_idLineCt )
        {
            ether.strFuseF( tinP , psttP ,
    
                ti+                                                                                                 //X
                T(ppostTitle[0xc])+                                                                                 //A
                (bb?T(""):TF2(idiFileCt,flFORMAT_UNSIGNED))+                                                        //W
                t1b+                                                                                                //V
                TF4(idLineCt&0xfff,flFORMAT_FOREIGN|flFORMAT_UNSIGNED,0,0xa)+                                       //F
                tc                                                                                                  //X
    
            ) ; ___( psttP ) ;
        }

        if( F(flags1) & flTINrPT1_osPid                 ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[  4])+TF3(osPid,0,8)                                                                                  +tc ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_osTid                 ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[  3])+TF3(osTid,0,8)                                                                                  +tc ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_idProcessOld             ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0xd])+TF3(monitor.idProcessOld,0,8)                                                                              +tc ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_idThread              ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[  2])+TF3(monitor.idThread,0,8)                                                                               +tc ) ; ___( psttP ) ; } //A //C
        if( F(flags1) & flTINrPT1_postThreadName        ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[  1])+tq+T(postThreadName)+tq                                                                         +tc ) ; ___( psttP ) ; } //A //B
        if( F(flags2) & flTINrPT2_postTell              ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0x10])+tq+T(postTell)+tq                                                                              +tc ) ; ___( psttP ) ; } //A //m
        if( F(flags2) & flTINrPT2_postTellIf            ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0x11])+tq+T(postTellIf)+tq                                                                            +tc ) ; ___( psttP ) ; } //A //m
        if( F(flags1) & flTINrPT1_idWhat1               ) { ether.strFuseF( tinP , psttP , ti+T(ppostTitle[0xa])+TP(processGlobal3I.mapWhat(monitor.idWhat1),csttWhereMax)                                                       +tc ) ; ___( psttP ) ; } //A //E
    }

    if( F(flags1) & flTINrPT1_pLFstepLast )
    {
        ether.strFuseF( tinP , psttP ,

            ti+                                                                                                 //X
            T(ppostTitle[0xb])+                                                                                 //A
            TF4(pLFstep[(monitor.idStep&OFFsLOTtINsTEPmAX)<<1]&~fliSTEP_FLAGmASK,flFORMAT_FOREIGN|flFORMAT_UNSIGNED,0xc,0xa)+ //F
            TP("",1+monitor.cInNest)+                                                                                     //G
            TF3(monitor.cInNest,0,3)+                                                                                     //H
            t9b+                                                                                                //l
            TF3(pLFstep[((monitor.idStep&OFFsLOTtINsTEPmAX)<<1)+1],flFORMAT_UNSIGNED|flFORMAT_FILLzE,7)+              //C
            T((sCountT)pLFstep[((monitor.idStep&OFFsLOTtINsTEPmAX)<<1)+1]<0?"":" ")+                                    //C
            (bb?T(""):(postFileLast?t4b+tq+T(postFileLast)+tq:T("")))+                                          //I
            tc                                                                                                  //X

        ) ; ___( psttP ) ;
    }

    if( F(flags1) & flTINrPT1_pLFnest )
    {
        for( countT idn = monitor.cInNest ; idn >= idnMin ; idn -- )
        {
            const osTextT* postFileNest = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , monitor.pLFnest[ ( ( idn & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ) ) ;

            ether.strFuseF( tinP , psttP ,

                ti+                                                                                             //h
                (idn==monitor.cInNest||idn==idnMin?tCalledBy:tCalledBy2)+                                                 //J
                TF4(monitor.pLFnest[(idn&OFFsLOTtINnESTmAX)<<1],flFORMAT_FOREIGN|flFORMAT_UNSIGNED,0xc,0xa)+            //K
                TP("",1+idn)+                                                                                   //L
                TF3(idn,0,3)+                                                                                   //M
                TF3(pIdInNest[idn&OFFsLOTtINnESTmAX],flFORMAT_UNSIGNED,9)+                                  //i
                TF3(monitor.pLFnest[((idn&OFFsLOTtINnESTmAX)<<1)+1],flFORMAT_UNSIGNED|flFORMAT_FILLzE,7)+             //N
                T((sCountT)monitor.pLFnest[((idn&OFFsLOTtINnESTmAX)<<1)+1]<0?"":" ")+                                   //N
                (bb?T(""):(postFileNest?t4b+tq+T(postFileNest)+tq:T("")))+                                      //O
                tc                                                                                              //h

            ) ; ___( psttP ) ;
        }
    }

    if( ( F(flags1) & flTINrPT1_pLFstepAll ) | ( F(flags1) & flTINrPT1_pLFstepLast01 ) )
    {
        if( !( F(flags1) & flTINrPT1_pLFstepAll ) && monitor.idStep - idsMin > 0xf ) idsMin = monitor.idStep - 0xf ;
        idns = monitor.cInNest ;
        ZE( boolT , bOut ) ;
        for( countT ids = monitor.idStep ; ids >= idsMin ; ids -- )
        {
            const osTextT* postFileStep = processGlobal7I.source.postFileTitleF( tinP , processGlobal7I.source.idFileRankF( tinP , pLFstep[ ( ( ids & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] ) ) ;
            if( pLFstep[ ( ids & OFFsLOTtINsTEPmAX ) << 1 ] & fliSTEP_NESTcHANGE )
            {
                if( pLFstep[ ( ids & OFFsLOTtINsTEPmAX ) << 1 ] & fliSTEP_NESToUT ) bOut = 1 ;
                else
                {
                    idns -- ;
                    if( idns == - 1 ) idns = 0 ;
                }
            }

            ether.strFuseF( tinP , psttP ,

                ti+                                                                                             //g
                (ids==monitor.idStep||ids==idsMin?tStep:tStep2)+                                                        //Y
                TF3(ids,0,8)+                                                                                   //Z
                tStepSuff+                                                                                      //a
                TF4(pLFstep[(ids&OFFsLOTtINsTEPmAX)<<1]&~fliSTEP_FLAGmASK,flFORMAT_FOREIGN|flFORMAT_UNSIGNED,0xc,0xa)+ //b
                TP("",1+idns)+                                                                                  //c
                TF3(idns,0,3)+                                                                                  //d
                t9b+                                                                                            //k
                TF3(pLFstep[((ids&OFFsLOTtINsTEPmAX)<<1)+1],flFORMAT_UNSIGNED|flFORMAT_FILLzE,7)+             //e
                T((sCountT)pLFstep[((ids&OFFsLOTtINsTEPmAX)<<1)+1]<0?"":" ")+                                   //e
                (bb?T(""):(postFileStep?t4b+tq+T(postFileStep)+tq:T("")))+                                      //f
                tc                                                                                              //g

            ) ; ___( psttP ) ;

            if( bOut )
            {
                bOut = 0 ;
                idns ++ ;
            }
        }
    }

    if( &tinP == this ) flagsThreadMode1 = flagsThreadMode1Save ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024004.tins.strfusef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024005.tins.zepointerfieldsf BEGIN
#define DDNAME       "3func.36024005.tins.zepointerfieldsf"
#define DDNUMB      (countT)0x36024005
#define IDFILE      (countT)0x101e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$zePointerFieldsF.0.html\"\>instances\</A\>
\<A HREF=\"5.12f0008.1.0.html\"\>definition\</A\>
most applications should not need this
this is of use when a copy of a tinS, object is made using memory copy
 it will prevent the destructor of the copy from attempting to d elete nonze pointer fields
*/
/**/

/*1*/voidT tinS::zePointerFieldsF( tinS& tinP )/*1*/
{
    pEther = 0 ;
    const countT offEnd = OFFgRABBEDmAX * 5 ;
    for( countT off = 0 ; off < offEnd ; off ++ ) tinP.pPanLifiRecurseGrabbedLevel[ off ] = 0 ; //ALSO RESETS THE ASSOCIATED LIFI IN EACH TRIPLET
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024005.tins.zepointerfieldsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024006.tins.levelmodef BEGIN
#define DDNAME       "3func.36024006.tins.levelmodef"
#define DDNUMB      (countT)0x36024006
#define IDFILE      (countT)0x101f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$levelModeF.0.html\"\>instances\</A\>
\<A HREF=\"5.12f0009.1.0.html\"\>definition\</A\>
for max speed, i contain no overhead code
arguments
 flagsModeP
  the value that is to replace the current value
   the current value can be referenced using tinP.pFlagsThreadLevelMode[ monitor.cInNest ]
 cLevelsP
  can be 0
  specifies the number of levels for which to set the mode
  if 0 then the mode is set for all levels
  if > 0 then the mode is set for up to cLevelsP levels
  if < 0 then the mode is set for up to - cLevelsP levels, downward
 offRelLevelP
  offset of the target level relative to the current level
  offset 0 refers to the level of the code that called me
  offset 1 refers to the code that defines functions called by level 0
  normally should be 0
*/
/**/

/*1*/voidT tinS::levelModeF( const flagsT flagsModeP , sCountT cLevelsP , const sCountT offRelLevelP )/*1*/
{
    ZE( sCountT , offMin ) ;
    sCountT offMax = OFFsLOTtINnESTmAX ;

    if( cLevelsP > 0 )
    {
        offMin = monitor.cInNest + offRelLevelP ;
        offMax = monitor.cInNest + offRelLevelP - 1 + cLevelsP ;
    }
    else if( cLevelsP < 0 )
    {
        offMin = monitor.cInNest + offRelLevelP + 1 + cLevelsP ;
        offMax = monitor.cInNest + offRelLevelP ;
    }
    if( offMin < 0                 ) offMin = 0 ;
    if( offMax > OFFsLOTtINnESTmAX ) offMax = OFFsLOTtINnESTmAX ;

    for( sCountT off = offMin ; off <= offMax ; off ++ ) pFlagsThreadLevelMode[ off ] = flagsModeP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024006.tins.levelmodef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024007.tins.get_plfnest_f BEGIN
#define DDNAME       "3func.36024007.tins.get_plfnest_f"
#define DDNUMB      (countT)0x36024007
#define IDFILE      (countT)0x1020


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  must be an odd value
  1 will work, but the caller will only get the null terminator
  set it to sizeof tinP.monitor.pLFnest + 1 unless you are only interested in looking up a few levels
*/
/**/
/*1*/voidT tinS::get_pLFnest_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        __( !( ccP % 2 ) ) ;
        if( POOP ) return ;
    }

    //IN

    countT idnf = monitor.cInNest - OFFsLOTtINnESTmAX ;
    if( (sCountT)idnf < 1 ) idnf = 1 ;

    ZE( countT , offo ) ;
    for( countT idn = monitor.cInNest ; idn >= idnf ; idn -- )
    {
        if( offo >= ccP - 1 ) break ;

        pcP[ offo ++ ] = monitor.pLFnest[   ( idn & OFFsLOTtINnESTmAX ) << 1       ] ;
        pcP[ offo ++ ] = monitor.pLFnest[ ( ( idn & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024007.tins.get_plfnest_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024008.tins.rootf BEGIN
#define DDNAME       "3func.36024008.tins.rootf"
#define DDNUMB      (countT)0x36024008
#define IDFILE      (countT)0x1021


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/tinS& tinS::rootF( voidT )/*1*/
{
    tinS* pt = this ;
    //while( pt->pTinDad ) pt = pt->pTinDad ;
    return *pt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024008.tins.rootf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024009.tins.walkf BEGIN
#define DDNAME       "3func.36024009.tins.walkf"
#define DDNUMB      (countT)0x36024009
#define IDFILE      (countT)0x1022


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT tinS::walkF( tinS& tinRootP , tinWalkerFT tinWalkerFP , countT& cArgP )/*1*/
{
    tinS& tinP = *this ;

    (*tinWalkerFP)( tinP , tinRootP , cArgP ) ;

    //tinS* pt = tinRootP.pTinKid ;
    //while( pt )
    //{
    //    walkF( *pt , tinWalkerFP , cArgP ) ;
    //    pt = pt->pTinBro ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024009.tins.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400a.tins.deregisteriff BEGIN
#define DDNAME       "3func.3602400a.tins.deregisteriff"
#define DDNUMB      (countT)0x3602400a
#define IDFILE      (countT)0x1023


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinS::deregisterIfF( tinS& tinP )/*1*/
{
    if( !( F(flags) & flTINs_DEREGISTERED ) )
    {
        flags |= flTINs_DEREGISTERED ;
        if( !( F(flags) & flTINs_CONSTRUCTqUIETLY ) )
        {
            POOPIES
            //ap_artmentOldC aptMe( tinP , (byteT*)this ) ;
            countT idTypeSay = ifcIDtYPEtELLsYS_TINdTP ;
            //countT idTypeSay = aptMe ? ifcIDtYPEtELLsYS_TINdTI : ifcIDtYPEtELLsYS_TINdTP ;
            tellInfoSysTinS info ;
            info.idSerial   = idSerial ;
            info.ip         = (countT)this ;
            //info.ip         = aptMe ? aptMe : (countT)this ;
            info.idTin      = idTin ;
            thirdC::c_strncpyIF( tinP , info.postThreadName , postThreadName , sizeof info.postThreadName ) ;
            info.idTinNamed = idTinNamed ;
            info.idLineCt   = idLineCt ;
            info.idiFileCt  = idiFileCt ;
            

            //pEther->traceF( tinP , T("tinS::deregisterIfF: U::: telling dt [postThreadName]: ")+T(info.postThreadName) ) ; //U:: TO FIND A BUG

            //IF I AM A MONITOR THREAD EXCEPTION THEN I MIGHT BE HOLDING SOMETHING THAT BLOCKS cirMonitorF, SO I DO NOT WANT TO DO A SYNCH TELL
            if( F(tinP.flagsThreadMode1) & flTHREADmODE1_USEaSYNCHtELLmONITOR || F(thirdC::third_flagsModeProcess2I_IF(*this)) & flMODEpROCESS2_NOsYNCHRONOUStELLS ) { TELLsYSc3LIFI(  idTypeSay , (byteT*)&info , sizeof info , idLineCt , idiFileCt ) ; }
            else                                                                                                                                                     { TELLsYSc3SlIFI( idTypeSay , (byteT*)&info , sizeof info , idLineCt , idiFileCt ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400a.tins.deregisteriff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400b.tins.tlsnewf BEGIN
#define DDNAME       "3func.3602400b.tins.tlsnewf"
#define DDNUMB      (countT)0x3602400b
#define IDFILE      (countT)0x1024


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to the address of cbP bytes associated with the specified name and group
if there was no bytes associated with this name and group, i allocate those bytes
if i allocate named bytes then i initialize those bytes to 0
if i allocate unnamed bytes then i do not initialize them
caller must d elete tls pointers lifo
*/
/**/

// TLS LAYOUT
//
//   tls header
//    offTopEntry (address of lath entry constructed); this is redundant; it is for speed and to detect corruption
//   tls entry
//    cbEntry (exclusive prefix)
//    cRef (number of instances including the constructing instance; is never 0)
//    offElder (address of entry immediately below me) (0 indicates that i am the bottommost entry)
//    offNextObject (set to 0 by constructing entry; if null then terminates the tls stack
//    offNextInGroup (set to 0 by constructing entry)
//    costaName (includes null terminator; if 0 then object is unnamed)
//    costaInGroup (includes null terminator; if 0 then class is unnamed)
//    postName
//    postInGroup
//

/*1*/byteT* tinS::tlsNewF( const countT cbP , const osTextT* const postNameP , const osTextT* const postInGroupP )/*1*/
{
    tinS& tinP = *this ;

    if( !pbTls ) { BLAMMO ; }

    //U:: TO FIND A BUG
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == 0x1490e )   //SEEN 14910 1490e
    {
        countT foo = 2 ;
    }

    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #1 HIGHEST FREQUENCY OF CALLS
    //_IO_

    if( tinP.idTinNamed == ifcIDtINnAMED_tinHeartI || tinP.idTinNamed == ifcIDtINnAMED_tinBreakI  ) // RAW THREAD, SO CANNOT CALL TINSL
    {
        osTextT* postSay = tinP.idTinNamed == ifcIDtINnAMED_tinHeartI
            ? "\r\nerror:  tlsNewF called on raw thread (tmHeartF)\r\n"
            : "\r\nerror:  tlsNewF called on raw thread (tmBreakF)\r\n"
        ;

        CONoUTrAW( postSay ) ;
        LOGrAW(    postSay ) ;

        ZE( countT* , pcBlammo ) ;
        *pcBlammo = -1 ;
    }

    //THIS BUG WAS FOUND; IT WAS A ZOMBIE tinP REFERENCE; THE TEST IS RETAINED TO DETECT NEW INTRODUCTIONS OF THAT BUG
    {
        poopC _poop( flPOOP_SMELLY ) ;
        scoopC _scoop( tinP , LF , _poop ) ;
    }

    POOPIES
    ZE( byteT* , pbData ) ;
    {
        const countT costaNameP    = !postNameP    ? 0 : 1 + thirdC::c_strlenIF( tinP , postNameP    ) ;
        const countT costaInGroupP = !postInGroupP ? 0 : 1 + thirdC::c_strlenIF( tinP , postInGroupP ) ;
    
        countT& offTopEntry = *(countT*)pbTls ;
        {
            countT offMe = costaNameP ? offTopEntry : 0 ;
            while( offMe )
            {
                countT&              costaName    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaName    ] ;
                countT&              costaInGroup = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaInGroup ] ;
                const osTextT* const postName     = !costaName    ? 0 : (byteT*)&costaInGroup + sizeof( countT ) ;
                const osTextT* const postInGroup  = !costaInGroup ? 0 : (byteT*)&costaInGroup + sizeof( countT ) + costaName ;
        
                if( !postInGroupP || ( postInGroup && !thirdC::c_strcmpIF( tinP , postInGroup , postInGroupP ) ) )
                {
                    if( postName && !thirdC::c_strcmpIF( tinP , postName , postNameP ) )
                    {
                        countT& cRef = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_cRef ] ;
                        __( !( cRef ++ ) ) ;
                        pbData = (byteT*)&costaInGroup + sizeof( countT ) + costaName + costaInGroup ;
                        break ;
                    }
                }
        
                offMe = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_offElder ] ;
            }
        }
    
        if( !pbData )
        {
            //U:: TO CATCH A BUG
            static countT idInLath ;
            if( tinP.monitor.idThread == 1 )
            {
                countT idIn = 1 + incv02AM( idInLath ) ;

                if( idIn == 0x16256 )
                {
                    countT foo = 2 ;
                }
            }

            const countT offElder = offTopEntry ;
            offTopEntry = !offElder
                ? sizeof( countT )
                : offElder + sizeof( countT ) + ( (countT*)( pbTls + offElder ) )[ TLSeNTRYoFF_cbEntry ]
            ;
        
            if( cbTls <= offTopEntry                        ) { BLAMMO ; } //IF BLOW HERE THEN THE FOLLOWING CODE HAS A BUG
            if( cbTls <= offTopEntry + 7 * sizeof( countT ) ) { BLAMMO ; } //IF BLOW HERE THEN NEED TO MAKE TLS LARGER FOR THIS THREAD

            if( offElder )
            {
                countT& offNextObject = ( (countT*)( pbTls + offElder ) )[ TLSeNTRYoFF_offNextObject ] ;
                if( offNextObject ) { BLAMMO ; }
                offNextObject = offTopEntry ;                                               // elder.offNextObject
        
                countT offCursor = offElder ;
                while( offCursor )
                {
                    countT&              costaName    = ( (countT*)( pbTls + offCursor ) )[ TLSeNTRYoFF_costaName    ] ;
                    countT&              costaInGroup = ( (countT*)( pbTls + offCursor ) )[ TLSeNTRYoFF_costaInGroup ] ;
                    const osTextT* const postInGroup  = !costaInGroup ? 0 : (byteT*)&costaInGroup + sizeof( countT ) + costaName ;
        
                    if
                    (
                        ( !costaInGroup && !costaInGroupP )
                        ||
                        ( costaInGroupP && postInGroup && !thirdC::c_strcmpIF( tinP , postInGroup , postInGroupP ) )
                    )
                    {
                        countT& offNextInGroup = ( (countT*)( pbTls + offCursor ) )[ TLSeNTRYoFF_offNextInGroup ] ;
                        if( offNextInGroup ) { BLAMMO ; }
                        offNextInGroup = offTopEntry ;
                        break ;
                    }
        
                    offCursor = ( (countT*)( pbTls + offCursor ) )[ TLSeNTRYoFF_offElder ] ;
                }
            }
        
            byteT*             pbc = pbTls + offTopEntry ;
            const byteT* const pbe = pbTls + cbTls ;
            //if( tinP.pc Utility[ 0 ] ) tinP.pc Utility[ 1 ] ++ ;
            //if( tinP.pc Utility[ 0 ]                  ) { CONoUTrAW3( "tinS::newF/entry formatted at " , (countT)pbc , "\r\n" ) ; }
            //if( tinP.pc Utility[ 0 ] && costaNameP    ) { CONoUTrAW( postNameP    ) ; CONoUTrAW( "\r\n" ) ; }
            //if( tinP.pc Utility[ 0 ] && costaInGroupP ) { CONoUTrAW( postInGroupP ) ; CONoUTrAW( "\r\n" ) ; }
            *(countT*)pbc = sizeof( countT ) * 6 + costaNameP + costaInGroupP + cbP              ; pbc += sizeof( countT ) ; // cbEntry
            *(countT*)pbc = 1                                                                    ; pbc += sizeof( countT ) ; // cRef
            *(countT*)pbc = offElder                                                             ; pbc += sizeof( countT ) ; // offElder
            *(countT*)pbc = 0                                                                    ; pbc += sizeof( countT ) ; // offNextObject
            *(countT*)pbc = 0                                                                    ; pbc += sizeof( countT ) ; // offNextInGroup
            *(countT*)pbc = costaNameP                                                           ; pbc += sizeof( countT ) ; // costaName
            *(countT*)pbc = costaInGroupP                                                        ; pbc += sizeof( countT ) ; // costaInGroup
            if( costaNameP )
            {
                if( pbe < pbc + costaNameP ) { BLAMMO ; } //IF BLOW HERE THEN NEED TO MAKE TLS LARGER FOR THIS THREAD
                thirdC::c_memcpyIF( tinP , pbc , postNameP , costaNameP )           ; pbc += costaNameP       ; // postName
            }
            if( costaInGroupP )
            {
                if( pbe < pbc + costaInGroupP ) { BLAMMO ; } //IF BLOW HERE THEN NEED TO MAKE TLS LARGER FOR THIS THREAD
                thirdC::c_memcpyIF( tinP , pbc , postInGroupP , costaInGroupP )  ; pbc += costaInGroupP    ; // postInGroup
            }

            if( pbe < pbc + cbP ) { BLAMMO ; } //IF BLOW HERE THEN NEED TO MAKE TLS LARGER FOR THIS THREAD
            pbData = pbc ;
            if( postNameP ) thirdC::c_memsetIF( tinP , pbData , cbP ) ; //staticC RELIES ON THIS LINE TO SMUDGE ITS FOOT FINGERPRINTS
            cTls ++ ;
        }
    }

    //{
    //    tinS& tinP = *this ;
    //    LOGrAWtID2( "tinS::newF [pb]: " , pbData ) //U:: TO FIND A BUG: REMOVE IN PRODUCTION FOR SPEED
    //}

    return pbData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400b.tins.tlsnewf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400c.tins.tlsdelf BEGIN
#define DDNAME       "3func.3602400c.tins.tlsdelf"
#define DDNUMB      (countT)0x3602400c
#define IDFILE      (countT)0x1025


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
if named and i am the only reference then i reset all data bytes
caller must d elete tls pointers lifo
the topmost item will be dereferenced, and d eleted if there are no more references
parameters
 pbMeP
  may be 0
  if not 0 then must be the topmost item
  used to verify lifo referencing and dereferencing
  specify a nonze value whenever it is not inconvenient to retain the value
  applications that have no convenient place to storage place will specify 0
*/
/**/

// TLS LAYOUT
//
//   tls header
//    offTopEntry (address of lath entry constructed); this is redundant; it is for speed and to detect corruption
//   tls entry
//    cbEntry (exclusive prefix)
//    cRef (number of instances including the constructing instance; is never 0)
//    offElder (address of entry immediately below me) (0 indicates that i am the bottommost entry)
//    offNextObject (set to 0 by constructing entry; if null then terminates the tls stack
//    offNextInGroup (set to 0 by constructing entry)
//    costaName (includes null terminator; if 0 then object is unnamed)
//    costaInGroup (includes null terminator; if 0 then class is unnamed)
//    postName
//    postInGroup
//

// TLS ENTRIES MUST BE CT/DT IN LIFO ORDER
// THE pbMeP PARAMETER IS USED TO ENFORCE THIS

/*1*/voidT tinS::tlsDelF( byteT*& pbMeP )/*1*/
{
    //{
    //    tinS& tinP = *this ;
    //    LOGrAWtID2( "tinS::delF [pb]: " , pbMeP ) //U:: TO FIND A BUG: REMOVE IN PRODUCTION FOR SPEED
    //}

    tinS& tinP = *this ;

    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #2 HIGHEST FREQUENCY OF CALLS
    //_IO_

    POOPIES
    {
        countT& offTopEntry = *(countT*)pbTls ;
        countT offMe = offTopEntry ;
        while( offMe )
        {
            countT&              costaName    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaName    ] ;
            countT&              costaInGroup = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaInGroup ] ;
            const byteT* const   pbData       = (byteT*)&costaInGroup + sizeof( countT ) + costaName + costaInGroup ;
    
            if( !pbMeP || pbData == pbMeP ) break ;
    
            offMe = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_offElder ] ;
        }
    
        if( !offMe )
        {
            offMe = offTopEntry ;
            while( offMe )
            {
                countT&              costaName    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaName    ] ;
                countT&              costaInGroup = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaInGroup ] ;
                const byteT* const   pbData       = (byteT*)&costaInGroup + sizeof( countT ) + costaName + costaInGroup ;
                const osTextT* const postName     = !costaName    ? 0 : (byteT*)&costaInGroup + sizeof( countT ) ;
                const osTextT* const postInGroup  = !costaInGroup ? 0 : (byteT*)&costaInGroup + sizeof( countT ) + costaName ;
        
                if( !pbMeP || pbData == pbMeP ) break ;
        
                OStEXT( ostoBuf , 0x200 ) ;
                OStEXTAK( ostoBuf , "while looking for data at " ) ;
                OStEXTC( ostoBuf , (countT)pbMeP , 0 ) ;
                OStEXTAK( ostoBuf , ", rejected data at " ) ;
                OStEXTC( ostoBuf , (countT)pbData , 0 ) ;
                if( !postName ) { OStEXTAK( ostoBuf , " (nameless)" ) ; }
                else
                {
                    OStEXTAK( ostoBuf , " name=\"" ) ;
                    OStEXTA( ostoBuf , postName ) ;
                    OStEXTAK( ostoBuf , "\"" ) ;
                    if( !postInGroup ) { OStEXTAK( ostoBuf , " (not in group)" ) ; }
                    else
                    {
                        OStEXTAK( ostoBuf , " group=\"" ) ;
                        OStEXTA( ostoBuf , postInGroup ) ;
                        OStEXTAK( ostoBuf , "\"" ) ;
                    }
                }
                OStEXTAK( ostoBuf , "\r\n" ) ;
                LOGrAW( ostoBuf ) ;
    
                offMe = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_offElder ] ;
            }

            __1
        }
    
        if( !offMe ) { BLAMMO ; } //IF I DIDN'T FIND AN ENTRY
        pbMeP = 0 ;
        countT& cRef    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_cRef ] ;
        __Z( cRef ) ;
        if( !( -- cRef ) )
        {
            cTls -- ;

            if( offMe != offTopEntry )  //U:: TO FIND A BUG (HOPEFULLY WDW WILL GIVE ME CALL STACK)
            {
                LOGcALLnEST( "tlsDelF: not lifo" )
                countT* pcBlammo = (countT*)0x88776655 ;
                *pcBlammo = 0x12345678 ;
            }

            //U::if( offMe != offTopEntry ) { BLAMMO ; } //ENFORCES LIFO delF CALLS
    
            countT&              cbEntry      = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_cbEntry      ] ;
            countT&              costaName    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaName    ] ;
            countT&              costaInGroup = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaInGroup ] ;
            const byteT* const   pbData       = (byteT*)&costaInGroup + sizeof( countT ) + costaName + costaInGroup ;

            const osTextT* const postName     = !costaName    ? 0 : (byteT*)&costaInGroup + sizeof( countT ) ;
            const osTextT* const postInGroup  = !costaInGroup ? 0 : (byteT*)&costaInGroup + sizeof( countT ) + costaName ;
            //if( tinP.pc Utility[ 0 ]                  ) { CONoUTrAW3( "tinS::newF/entry erased at    " , (countT)( pbTls + offMe ) , "\r\n" ) ; }
            //if( tinP.pc Utility[ 0 ] && postName      ) { CONoUTrAW( postName    ) ; CONoUTrAW( "\r\n" ) ; }
            //if( tinP.pc Utility[ 0 ] && postInGroup   ) { CONoUTrAW( postInGroup ) ; CONoUTrAW( "\r\n" ) ; }
            //if( tinP.pc Utility[ 0 ] ) tinP.pc Utility[ 1 ] -- ;
    
            if( costaName )
            {
                byteT*       pbEntry = pbTls + offMe ;
                const countT cbData  = pbEntry + sizeof( countT ) + cbEntry - pbData ;    
                thirdC::c_memsetIF( tinP , (byteT*)pbData , cbData ) ;
            }
    
            ZE( boolT , bFoundElder ) ;
            countT* pOffElder = &( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_offElder ] ;
            if( !*pOffElder ) offTopEntry = 0 ;
            else while( *pOffElder )
            {
                countT& offNextObject  = ( (countT*)( pbTls + *pOffElder ) )[ TLSeNTRYoFF_offNextObject  ] ;
                countT& offNextInGroup = ( (countT*)( pbTls + *pOffElder ) )[ TLSeNTRYoFF_offNextInGroup ] ;
        
                if( !bFoundElder )
                {
                    if( offNextObject != offMe ) { BLAMMO ; }
                    offTopEntry = *pOffElder ;
                    offNextObject = 0 ;
                    bFoundElder = 1 ;
                }
        
                if( offNextInGroup == offMe )
                {
                    offNextInGroup = 0 ;
                    break ;
                }
    
                pOffElder = &( (countT*)( pbTls + *pOffElder ) )[ TLSeNTRYoFF_offElder ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400c.tins.tlsdelf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400d.tins.pbf BEGIN
#define DDNAME       "3func.3602400d.tins.pbf"
#define DDNUMB      (countT)0x3602400d
#define IDFILE      (countT)0x1026


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to the address of the idP'th tls entry
by using me, applications can use tls without storing the pointers anywhere
 for example, application code can use tls even when there is no convenient place to store pointers
parameters
 idP
  may not be 0
  1: the topmost (most recently allocated) item
  2: the item below the topmost item
  3: etc.
*/
/**/

/*1*/byteT* tinS::pbF( countT idP )/*1*/
{
    tinS& tinP = *this ;
    __Z( idP ) ;
    POOPIES
    ZE( byteT* , pbFound ) ;
    {
        countT& offTopEntry = *(countT*)pbTls ;
        countT offMe = offTopEntry ;
        while( offMe && -- idP ) offMe = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_offElder ] ;
    
        __Z( offMe ) ; //IF I DIDN'T FIND AN ENTRY

        countT&        cbEntry      = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_cbEntry      ] ;
        countT&        costaName    = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaName    ] ;
        countT&        costaInGroup = ( (countT*)( pbTls + offMe ) )[ TLSeNTRYoFF_costaInGroup ] ;
        byteT* const   pbData       = (byteT*)&costaInGroup + sizeof( countT ) + costaName + costaInGroup ;
        pbFound = pbData ;
    }
    return pbFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400d.tins.pbf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400e.tins.get_plfstep_f BEGIN
#define DDNAME       "3func.3602400e.tins.get_plfstep_f"
#define DDNUMB      (countT)0x3602400e
#define IDFILE      (countT)0x1027


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  must be an odd value
  1 will work, but the caller will only get the null terminator
  set it to sizeof tinP.monitor.pLFnest + 1 unless you are only interested in looking up a few levels
*/
/**/
/*1*/voidT tinS::get_pLFstep_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        __( !( ccP % 2 ) ) ;
        if( POOP ) return ;
    }

    //IN

    countT idsf = monitor.idStep - OFFsLOTtINsTEPmAX ;
    if( (sCountT)idsf < 1 ) idsf = 1 ;

    ZE( countT , offo ) ;
    for( countT ids = monitor.idStep ; ids >= idsf ; ids -- )
    {
        if( offo >= ccP - 1 ) break ;

        pcP[ offo ++ ] = pLFstep[   ( ids & OFFsLOTtINsTEPmAX ) << 1       ] ;
        pcP[ offo ++ ] = pLFstep[ ( ( ids & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400e.tins.get_plfstep_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400f.tins.get_pflagsthreadlevelmode_f BEGIN
#define DDNAME       "3func.3602400f.tins.get_pflagsthreadlevelmode_f"
#define DDNUMB      (countT)0x3602400f
#define IDFILE      (countT)0x1028


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  set it to sizeof tinP.pFlagsThreadLevelMode + 1 unless you are only interested in looking up a few levels
*/
/**/
/*1*/voidT tinS::get_pFlagsThreadLevelMode_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        if( POOP ) return ;
    }

    //IN

    countT idnf = monitor.cInNest - OFFsLOTtINnESTmAX ;
    if( (sCountT)idnf < 1 ) idnf = 1 ;

    ZE( countT , offo ) ;
    for( countT idn = monitor.cInNest ; idn >= idnf ; idn -- )
    {
        if( offo >= ccP - 1 ) break ;
        pcP[ offo ++ ] = pFlagsThreadLevelMode[ idn & OFFsLOTtINnESTmAX ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.3602400f.tins.get_pflagsthreadlevelmode_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024010.tins.get_pidinnest_f BEGIN
#define DDNAME       "3func.36024010.tins.get_pidinnest_f"
#define DDNUMB      (countT)0x36024010
#define IDFILE      (countT)0x1029


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  set it to sizeof tinP.pIdInNest + 1 unless you are only interested in looking up a few levels
*/
/**/

/*1*/voidT tinS::get_pIdInNest_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        if( POOP ) return ;
    }

    //IN

    countT idnf = monitor.cInNest - OFFsLOTtINnESTmAX ;
    if( (sCountT)idnf < 1 ) idnf = 1 ;

    ZE( countT , offo ) ;
    for( countT idn = monitor.cInNest ; idn >= idnf ; idn -- )
    {
        if( offo >= ccP - 1 ) break ;
        pcP[ offo ++ ] = pIdInNest[ idn & OFFsLOTtINnESTmAX ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024010.tins.get_pidinnest_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024011.tins.get_peipinnest_f BEGIN
#define DDNAME       "3func.36024011.tins.get_peipinnest_f"
#define DDNUMB      (countT)0x36024011
#define IDFILE      (countT)0x102a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  set it to sizeof tinP.pEIPInNest + 1 unless you are only interested in looking up a few levels
*/
/**/

/*1*/voidT tinS::get_pEIPInNest_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        if( POOP ) return ;
    }

    //IN

    countT idnf = monitor.cInNest - OFFsLOTtINnESTmAX ;
    if( (sCountT)idnf < 1 ) idnf = 1 ;

    ZE( countT , offo ) ;
    for( countT idn = monitor.cInNest ; idn >= idnf ; idn -- )
    {
        if( offo >= ccP - 1 ) break ;
        pcP[ offo ++ ] = pEIPInNest[ idn & OFFsLOTtINnESTmAX ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024011.tins.get_peipinnest_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024012.tins.get_pidprogressnest_f BEGIN
#define DDNAME       "3func.36024012.tins.get_pidprogressnest_f"
#define DDNUMB      (countT)0x36024012
#define IDFILE      (countT)0x102b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$get_pLFnest_F.0.html\"\>instances\</A\>
\<A HREF=\"5.12f000b.1.0.html\"\>definition\</A\>
arguments
 tinP
 ec
  must be 0
  will be set if impotence occurs
 pcP
  must point to ccP countT objects
  i do not care what the contents of these objects is
  i will write the call nest TAG( TAGiDnULL ) values into pcP until at most ccP-1 values have been written
  i will terminate the values that i write with a ze value
 ccP
  set it to sizeof tinP.pIdProgressNest + 1 unless you are only interested in looking up a few levels
*/
/**/

/*1*/voidT tinS::get_pIdProgressNest_F( tinS& tinP , countT* const pcP , const countT ccP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pcP ) ;
        if( POOP ) return ;
    }

    //IN

    countT idnf = monitor.cInNest - OFFsLOTtINnESTmAX ;
    if( (sCountT)idnf < 1 ) idnf = 1 ;

    ZE( countT , offo ) ;
    for( countT idn = monitor.cInNest ; idn >= idnf ; idn -- )
    {
        if( offo >= ccP - 1 ) break ;
        pcP[ offo ++ ] = pIdProgressNest[ idn & OFFsLOTtINnESTmAX ] ;
    }
    pcP[ offo ] = 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024012.tins.get_pidprogressnest_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024013.tins.unwatchedf BEGIN
#define DDNAME       "3func.36024013.tins.unwatchedf"
#define DDNUMB      (countT)0x36024013
#define IDFILE      (countT)0x102c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinS::unwatchedF( voidT )/*1*/
{
    if( !( F(flagsThreadMode3) & flTHREADmODE3_NOTwATCHED ) )
    {
        flagsThreadMode3 |= flTHREADmODE3_NOTwATCHED ;
        dec02AM( pAdamGlobal1->cThreadsWatched ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024013.tins.unwatchedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024014.tins.flushPendingInOutFrameTelemetryF BEGIN
#define DDNAME       "3func.36024014.tins.flushPendingInOutFrameTelemetryF"
#define DDNUMB      (countT)0x36024014
#define IDFILE      (countT)0x102d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinS::flushPendingInOutFrameTelemetryIfF( voidT )/*1*/
{
    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_SCRATCH07 )
    //{
    //    static countT idInLath ;
    //    countT idIn = 1 + incv02AM( idInLath ) ;
    //    CONoUTrAW3( "flushy [idIn]:    " , idIn , "\r\n" ) ;
    //    if( idIn == 0x45 )
    //    {
    //        countT foo = 2 ;
    //    }
    //}

    if( pbPendingInOutFramePackets && !( F(flagsThreadMode4) & ( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ) )
    {
        tinS& tinP = *this ;
        THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;

        countT& cPending = *(countT*)pbPendingInOutFramePackets ;

        if( cPending > ( CmAXpENDINGiNoUTfRAMEpACKETS >> 4 ) )  // THIS IS A SPEED OPTIMIZATION ; THERE IS NO NEED TO FLUSH IF THE BUFFER CONTAINS ONLY A FEW PACKETS
        {
            tellInfoAppInOutFrameS* pPending = (tellInfoAppInOutFrameS*)( pbPendingInOutFramePackets + sizeof( countT ) ) ;

            if( cPending > CmAXpENDINGiNoUTfRAMEpACKETS )
            {
                CONoUTrAW5( "adamMainF error: [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                LOGrAW5(    "adamMainF error: [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                BLAMMO ;
            }

            {
                tellC tell( *this , LF , 0 , ifcIDtYPEtELLaPP_INoUTaRRAY , pbPendingInOutFramePackets , sizeof( countT ) + cPending * sizeof( tellInfoAppInOutFrameS ) ) ;
                thirdC::dosTellMonitorIF( *this , tell , ifcIDbOOKStELL_APP ) ;
            }

            cPending = 0 ;
        }
        THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36024* : 3func.36024014.tins.flushPendingInOutFrameTelemetryF END
