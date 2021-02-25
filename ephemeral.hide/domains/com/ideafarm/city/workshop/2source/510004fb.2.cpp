//SOURCE: 5adam.510004fb.2 BEGIN
#define DDNAME "5adam.510004fb.2"
#define DDNUMB 0x510004fb
#define IDFILE (countT)0x0
#define postHEADER "510004fb.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510004fb.2.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*1*//*ifcIDaDAM_KERNEL2MONITOR 2*//*1*/

#include postHEADER

TASK( tmcMonitorServerF ) //REN tmServerF
TELL( "setting up" )
if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 )
{
    socketC* psoP            =  (socketC*)pTaskP->c1 ;
    countT&  cLeverIdMemoryP =  *(countT*)pTaskP->c2 ;
    switchC& swMemorySpaceP  = *(switchC*)pTaskP->c3 ;

    tinP.c4Tell.c1 = cLeverIdMemoryP ;

    IFsCRATCH
    {
        SCOOPS
        psoP->etherF( tinP , *tinP.pEtScratch ) ;
    
        soulC sIn(  tinP , TAG( TAGiDnULL ) ) ;
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        while( !POOP && !etThread && !ether && psoP )
        {
            psoP->readF( tinP , sIn ) ;
    
            if( POOP ) { POOPR DEL( psoP ) ; }
            else
            {
                ZE( countT , idCmd ) ;
                sIn >> idCmd ;
                switch( idCmd )
                {
                    case ifcIDcMDmONITOR_IMAGE :
                    {
                        ZE( countT , osPid ) ;
                        sIn >> osPid ;
                        ZE( voidT* , pvAt ) ;
                        sIn >> *(countT*)&pvAt ;
                        ZE( countT , cbAt ) ;
                        sIn >> cbAt ;

                        ZE( byteT* , pbCopy ) ;
                        ZE( boolT , bOk ) ;
                        tinP.pEtScratch->newF( tinP , LF , pbCopy , cbAt ) ; ___( pbCopy ) ;
                        if( pbCopy ) thirdC::dosReadProcessMemoryIF( tinP , pbCopy , cbAt , bOk , pvAt , osPid ) ;

                        sOut << (countT)ifcIDrEPLYmONITOR_IMAGE ;
                        sOut << bOk ;
                        if( bOk ) sOut.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pbCopy , cbAt ) ;
                        tinP.pEtScratch->delF( tinP , pbCopy ) ;

                        break ;
                    }
                    case ifcIDcMDmONITOR_tinS :
                    {
                        sOut << (countT)ifcIDrEPLYmONITOR_tinS ;
                        swMemorySpaceP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        countT cFlavorsMemory = swMemorySpaceP.cFlavorsF( tinP ) ;
                        sOut << cFlavorsMemory ;
                        for( countT idfm = 1 ; idfm <= cFlavorsMemory ; idfm ++ )
                        {
                            cLeverIdMemoryP = swMemorySpaceP.leverF( tinP , idfm ) ;
                            sOut << cLeverIdMemoryP ;
                            memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpaceP ;

                            memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                            countT cFlavors = memorySpace.swsTin.cFlavorsF( tinP ) ;
                            sOut << cFlavors ; //U::CLIENT CODE IS OBSOLETE BECAUSE IT DOESNT KNOW ABOUT cFlavors AND THAT MULTIPLE FLAVORS FOLLOW
                            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                            {
                                memorySpace.pczLeverAdam = (countT*)memorySpace.swsTin.leverF( tinP , idf ) ;
                                countT cPlates = memorySpace.swsTin ;
                                sOut << cPlates ;
                                if( cPlates )
                                {
                                    handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                    do
                                    {
                                        tinEntryS& entry = *(tinEntryS*)&memorySpace.swsTin.downF( tinP , hWalk ) ;
                                        sOut << (countT)entry.osPid ;
                                        sOut << (countT)entry.bIda ;
                                        sOut << (countT)entry.ip ;
                                    }
                                    while( ~hWalk ) ;
                                }
                            }
                            memorySpace.grab.ungrabF( tinP ) ;
                        }
                        swMemorySpaceP.ungrabF( tinP ) ;

                        break ;
                    }
                    case ifcIDcMDmONITOR_SAYtALLIES :
                    {
                        sOut << (countT)ifcIDrEPLYmONITOR_SAYtALLIES ;
                        swMemorySpaceP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        countT cFlavorsMemory = swMemorySpaceP.cFlavorsF( tinP ) ;
                        sOut << cFlavorsMemory ;
                        for( countT idfm = 1 ; idfm <= cFlavorsMemory ; idfm ++ )
                        {
                            cLeverIdMemoryP = swMemorySpaceP.leverF( tinP , idfm ) ;
                            sOut << cLeverIdMemoryP ;
                            memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpaceP ;

                            memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                            countT cFlavors = memorySpace.swTallySay.cFlavorsF( tinP ) ;
                            sOut << cFlavors ;
                            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                            {
                                memorySpace.cLeverSay = memorySpace.swTallySay.leverF( tinP , idf ) ;
                                sOut << memorySpace.cLeverSay ;
                                sOut << (countT)memorySpace.swTallySay ;
                            }
                            memorySpace.grab.ungrabF( tinP ) ;
                        }
                        swMemorySpaceP.ungrabF( tinP ) ;

                        break ;
                    }
                    case ifcIDcMDmONITOR_POOLoLDnAMES : //U::REPLACE THIS WITH ORTHOGONAL FUNCTIONALITY (REPLY WITH POOLoLD ADDRESS; FORCE CLIENT TO REQUEST IMAGES AND TO DO ITS OWN INSPECTION)
                    {
                        sOut << (countT)ifcIDrEPLYmONITOR_POOLoLDnAMES ;

                        swMemorySpaceP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        countT cFlavorsMemory = swMemorySpaceP.cFlavorsF( tinP ) ;
                        sOut << cFlavorsMemory ;
                        for( countT idfm = 1 ; idfm <= cFlavorsMemory ; idfm ++ )
                        {
                            cLeverIdMemoryP = swMemorySpaceP.leverF( tinP , idfm ) ;
                            sOut << cLeverIdMemoryP ;
                            memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpaceP ;

                            stackC stName( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;
                            {
                                stackC stTemp( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;
            
                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                if( memorySpace.stPool )
                                {
                                    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                    do
                                    {
                                        poolOldEntryS& entry = *(poolOldEntryS*)&memorySpace.stPool.downF( tinP , hDown ) ;
                                        ZE( strokeS* , psttn ) ;
                                        etThread.strMakeF( tinP , LF , psttn , T(entry.postName) ) ; ___( psttn ) ;
                                        //etThread.strokeF( tinP , T("entry.postName: \"")+T(entry.postName)+T("\"\r\n") ) ;
                                        stTemp << psttn ;
                                    }
                                    while( !memorySpace.stPool.third && ~hDown ) ;
                                }
                                memorySpace.grab.ungrabF( tinP ) ;
            
                                if( stTemp )
                                {
                                    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                    do
                                    {
                                        strokeS*& psttn = *(strokeS**)&stTemp.downF( tinP , hDown ) ;
                                        ZE( countT , ids ) ;
                                        stName.sinkF( tinP , ids , psttn , flSTACKsINK_UNIQUE ) ;
                                        if( !ids ) etThread.delF( tinP , psttn ) ;
                                    }
                                    while( !stTemp.third && ~hDown ) ;
                                }
                            }
        
                            sOut << (countT)stName ;
                            if( stName )
                            {
                                handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                do
                                {
                                    strokeS* psttn = (strokeS*)stName.downF( tinP , hDown ) ;
                                    sOut << psttn ;
                                }
                                while( !stName.third && ~hDown ) ;
                            }
                        }
                        swMemorySpaceP.ungrabF( tinP ) ;

                        break ;
                    }

                    //COMMENTED OUT WHEN poolC WAS REWRITTEN
                    #if defined( NEVERdEFINED )

                    case ifcIDcMDmONITOR_POOLoLDhEADER : //U::REPLACE THIS WITH ORTHOGONAL FUNCTIONALITY (REPLY WITH POOLoLD ADDRESS; FORCE CLIENT TO REQUEST IMAGES AND TO DO ITS OWN INSPECTION)
                    {
                        sOut << (countT)ifcIDrEPLYmONITOR_POOLoLDhEADER ;
    
                        ZE( countT , idMemorySpace ) ;
                        sIn >> idMemorySpace ;
                        ZE( strokeS* , psttName ) ;
                        sIn >> psttName ; ___( psttName ) ;
                        //etThread.strokeF( tinP , T("received request for the header of space ")+TF1(idMemorySpace)+T(" name \"")+T(psttName)+T("\"\r\n") ) ;
    
                        p oolC poo( tinP , TAG( TAGiDnULL ) , T(psttName) ) ;
                        //if( !POOP ) sOut.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_countTptr , (countT*)&(poolOldHeaderS&)poo , sizeof( poolOldHeaderS ) / sizeof( countT ) ) ;
                        etThread.delF( tinP , psttName ) ;
    
                        break ;
                    }
                    case ifcIDcMDmONITOR_POOLoLDwALK1 : //U::REPLACE THIS WITH ORTHOGONAL FUNCTIONALITY (REPLY WITH POOLoLD ADDRESS; FORCE CLIENT TO REQUEST IMAGES AND TO DO ITS OWN INSPECTION)
                    {
                        sOut << (countT)ifcIDrEPLYmONITOR_POOLoLDwALK1 ;
    
                        ZE( countT , idMemorySpace ) ;
                        sIn >> idMemorySpace ;
                        ZE( strokeS* , psttName ) ;
                        sIn >> psttName ; ___( psttName ) ;
    
                        p oolC poo( tinP , TAG( TAGiDnULL ) , T(psttName) ) ;
                        const poolOldHeaderS& head = poo ;
                        //etThread.strokeF( tinP , T("received request to walk a poolOld in space ")+TF1(idMemorySpace)+T(" name \"")+T(psttName)+T("\"\r\n") ) ;
                        countT c_pbPool = (countT)poo.pbPool ;
                        //etThread.strokeF( tinP , T("this poolOld has ")+TF1(head.cdUsed)+T(" drops in memory [")+TF1(c_pbPool)+T(",")+TF1(c_pbPool+head.offHighWater)+T(",")+TF1(c_pbPool+head.cbPool-1)+T("]\r\n") ) ;
                        if( !POOP )
                        {
                            count8S c8i( (countT)&sOut , 0/*idDrop*/ ) ;
                            countT info = (countT)&c8i ;
                            //etThread.strokeF( tinP , T("walking ")+TF1(idMemorySpace)+T(" name \"")+T(psttName)+T("\"\r\n") ) ;
                            THREADmODE2oN( flTHREADmODE2_MARKnEWdROPSqUIETdURINGwALK )
                            poo.walkF( tinP , ifcIDtYPEpOOLoLDwALK_MONITORwALK1 , info ) ;
                            THREADmODE2rESTORE
                            //etThread.strokeF( tinP , T("walked  ")+TF1(idMemorySpace)+T(" name \"")+T(psttName)+T("\"\r\n") ) ;
                        }
                        etThread.delF( tinP , psttName ) ;
    
                        break ;
                    }

                    #endif
                }
    
                sIn.removeAllF( tinP ) ;
                psoP->writeF( tinP , sOut ) ;
                sOut.removeAllF( tinP ) ;
            }
        }
        DEL( psoP ) ;
    }
}
DONE( tmcMonitorServerF )

struct copyHeadS
{
    countT idAdamRoot ;
    countT idAdam ;
    countT cStepsNew ;
}
;

#define ACCsIZEmONITOR(arrayP)                                                                               \
                                                                                                             \
    {                                                                                                        \
        const countT cci = sizeof tinP.monitor.##arrayP ;                                                    \
        countT pci[ cci + 1 ] ;                                                                              \
        tinCopy.get_##arrayP##_F( tinP , pci , cci + 1 ) ;                                                   \
        costaVarying += sizeof( countT ) * ( 1 + thirdC::c_strlenIF( tinP , pci ) ) ;                        \
    }

#define ACCsIZE(arrayP)                                                                                      \
                                                                                                             \
    {                                                                                                        \
        const countT cci = sizeof tinP.##arrayP ;                                                            \
        countT pci[ cci + 1 ] ;                                                                              \
        tinCopy.get_##arrayP##_F( tinP , pci , cci + 1 ) ;                                                   \
        costaVarying += sizeof( countT ) * ( 1 + thirdC::c_strlenIF( tinP , pci ) ) ;                        \
    }

#define WRITEaRRAY(arrayP)                                                                                  \
                                                                                                            \
    {                                                                                                       \
        const countT cci = sizeof tinP.##arrayP ;                                                           \
        countT pci[ cci + 1 ] ;                                                                             \
        tinCopy.get_##arrayP##_F( tinP , pci , cci + 1 ) ;                                                  \
        costai = sizeof( countT ) * ( 1 + thirdC::c_strlenIF( tinP , pci ) ) ;                              \
        thirdC::c_memcpyIF( tinP , pbc , (byteT*)pci , costai ) ; pbc += costai ;                           \
    }

#define WRITEaRRAYmONITOR(arrayP)                                                                           \
                                                                                                            \
    {                                                                                                       \
        const countT cci = sizeof tinP.monitor.##arrayP ;                                                   \
        countT pci[ cci + 1 ] ;                                                                             \
        tinCopy.get_##arrayP##_F( tinP , pci , cci + 1 ) ;                                                  \
        costai = sizeof( countT ) * ( 1 + thirdC::c_strlenIF( tinP , pci ) ) ;                              \
        thirdC::c_memcpyIF( tinP , pbc , (byteT*)pci , costai ) ; pbc += costai ;                           \
    }

TASK( tmReportF )

if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 && pTaskP->c4 && pTaskP->c6 && pTaskP->c7 && pTaskP->c8 )
{
    etherC& etRock = etherC::etRockIF( tinP ) ;
    //etRock.traceF( tinP , T("tmReportF h/ ") ) ; //U:: TO FIND A BUG

    boolT&        bQuitMonitorP              =        *(boolT*)pTaskP->c1 ;
    countT        idMemorySpaceP             =                 pTaskP->c2 ;
    stackC&       stPeriodDataP              =       *(stackC*)pTaskP->c3 ;
    memorySpaceS& memorySpaceP               = *(memorySpaceS*)pTaskP->c4 ;
    countT        idMinuteZeP                =                 pTaskP->c5 ;
    flagsT&       fliPendingSnapShotRequestP =       *(flagsT*)pTaskP->c6 ;
    osTextT*      postSnapShotRequestP       =       (osTextT*)pTaskP->c7 ;
    batonC&       bCompileReportP            =       *(batonC*)pTaskP->c8 ;

    //etRock.traceF( tinP , T("tmReportF g/ ") ) ; //U:: TO FIND A BUG
    //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  b\r\n" ) ;
    homeS& home = homeS::homeIF() ;

    flagsT fliMaskPending = 1 << idMemorySpaceP - ifcIDmEMORYsPACE_min ;

    tinP.c4Tell.c1 = idMemorySpaceP ;

    etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZIEST ) ; //CHANGE TO RUSH IF NEED TO ANALYZE BEHAVIOR INVOLVING CPU PEGGING

    TN( tBooks , "" ) ;
    tBooks = T("kernel.minute.reports.memoryspace.")+TF3(idMemorySpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,3) ;
    booksC bkReport( tinP , TAG( TAGiDnULL ) , tBooks , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER , TICK ) ; //A SEPARATE BOOKS OBJECT IS USED FOR EACH MEMORY SPACE TO ELIMINATE SERIALIZATION COLLISIONS; WHICH ARE SUPPORTED BUT WHY TAKE A CHANCE WITH THE KERNEL!

    ZE( countT , cLeverOsTid ) ;
    switchC swTinCopy( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , cLeverOsTid , 0 , sizeof( copyHeadS ) + sizeof( tinS ) ) ;

    TN( tcr , "\r\n" ) ;
    ZE( countT , idCycle ) ;
    countT idMinute = idMinuteZeP ;
    ZE( countT , idFoTock ) ; // THIS IS USED ONLY IF flHOMEsuTILITY_SNAPsHOT
    //etRock.traceF( tinP , T("tmReportF f/ ") ) ; //U:: TO FIND A BUG
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //bCompileReportP ADDED 20180108@1021
    while( !bQuitMonitorP )
    {
        _IO_
        //etRock.traceF( tinP , T("tmReportF e/ ") ) ; //U:: TO FIND A BUG
        //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  a\r\n" ) ;
        //LOGrAW3( "tmReportF 1 [flHOMEsuTILITY_SNAPsHOT]: " , F(home.flagsUtility) & flHOMEsuTILITY_SNAPsHOT , "\r\n" ) ;

        ZE( countT  , timeR1 ) ;
        ZE( sCountT , timeR2 ) ;
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( !bQuitMonitorP && !etThread && !( fliPendingSnapShotRequestP & fliMaskPending ) ) // SNAPsHOT REQUEST IS OBEYED IMMEDIATELY
            {
                ZE( countT  , timeN1 ) ;
                ZE( sCountT , timeN2 ) ;
                etThread.osTimeNowF( tinP ,  timeN1 , timeN2 ) ;

                // 8:TUCK 01:TOCK 81:TICK 61:MINUTE(QUARTERTICK)
                countT idMinuteTry = timeN1 >> 0x16 ;    // 8:TUCK 01:TOCK 81:TICK 61:MINUTE(QUARTERTICK)
                countT idFoTockTry = timeN1 >> 0x12 ;        

                ZE( boolT , bDo ) ;
                if( F(home.flagsUtility) & flHOMEsuTILITY_SNAPsHOT )
                {
                    if( !idFoTock || idFoTock != idFoTockTry )
                    {
                        idFoTock = idFoTockTry ;
                        bDo = 1 ;
                    }
                }
                else if( idFoTock ) idFoTock = 0 ;

                if( !bDo && idMinute != idMinuteTry ) bDo = 1 ;

                if( bDo )
                {
                    idMinute = idMinuteTry ;
                    timeR1 = timeN1 ;
                    timeR2 = timeN2 ;
                    break ;
                }
                else etThread.osSleepF( tinP , TUCK * 0x40 ) ;
            }
        }

//U::WORKAROUND: THE USE OF THE BATON IN THE NEXT LINE REQUIRES REGRESSION DEBUGGING.  THE GOAL IS TO REDUCE ADDRESS SPACE FOOTPRINT TO HOPEVULLY ELIMMINATE THE ADDRESS SPACE EXHAUSTION BLAMMO ON FACTORY3
//U:: 20190129: USING THE BATON MIGHT ALSO IMPACT QUIT QUALITY SO AT THIS TIME THE IFDEF IS BEING UNCOMMENTED
//U:: IN PRODUCTION, THE IFDEF SHOULD BE COMMENTED OUT SO THAT THE CODE IS TESTED BY PRODUCTION
//U:: IT IS BEING UNCOMMENTED ONLY TO INVESTIGATE WHETHER THIS CODE IS THE CULPRIT FOR LONG QUIT TIMES
//20191006@1847: ENABLED FOR TESTING AND DEBUGGING
//#if defined( NEVERdEFINED )

        if( !bQuitMonitorP )
        {
            _IO_
            bCompileReportP.grabF( tinP , TAG( TAGiDnULL ) ) ;  // AN OPTIMIZATION TO SERIALIZE USE OF CPU AND ADDRESS SPACE

            if( !bQuitMonitorP )
            {
                _IO_
                //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  9\r\n" ) ;
                boolT bSnapShot = fliPendingSnapShotRequestP & fliMaskPending ;
                //LOGrAW7( "tmReportF [fliPendingSnapShotRequestP,bSnapShot,idMemorySpaceP]: " , fliPendingSnapShotRequestP , " " , bSnapShot , " " , idMemorySpaceP , "\r\n" ) ;

                idCycle ++ ;

                // bQuitMonitorP IS NOT TESTED HERE BECAUSE WE WANT WO LATH REPORT SO THAT WE CAN SEE THE FINAL EVENTS

                OStEXT(   ostoFileRptTitle  , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptTitle  , "soul.rpt.title." ) ;
                OStEXTC(  ostoFileRptTitle  , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptAdd    , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptAdd    , "soul.rpt.add." ) ;
                OStEXTC(  ostoFileRptAdd    , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptNapkin , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptNapkin , "soul.rpt.napkin." ) ;
                OStEXTC(  ostoFileRptNapkin , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptSex    , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptSex    , "soul.rpt.sex." ) ;
                OStEXTC(  ostoFileRptSex    , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptTin    , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptTin    , "soul.rpt.tin." ) ;
                OStEXTC(  ostoFileRptTin    , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptEvent  , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptEvent  , "soul.rpt.event." ) ;
                OStEXTC(  ostoFileRptEvent  , idMemorySpaceP , 0 ) ;

                OStEXT(   ostoFileRptLog    , TUCK >> 3 ) ;
                OStEXTAK( ostoFileRptLog    , "soul.rpt.log." ) ;
                OStEXTC(  ostoFileRptLog    , idMemorySpaceP , 0 ) ;

                //U:: soulC::operator <<() DOES NOT WORK WHEN THE RHS soulC INSTANCE USES JOT
                // WHEN THAT IS FIXED, CHANGE THE NEXT LINE SO THAT JOT IS USED
                // PRODUCTION: USE jotC (TO ACCOMMODATE LARGE REPORTS)
                #if !defined( NEVERdEFINED )

                    soulC sRptTitle(  tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptTitle  ) ; sRptTitle  << (strokeS*)( T("Memory Space ")+TF2(idMemorySpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" Glass: Minute Overview\r\nMinute by minute overview of the state of this home\r\nMinutes since gen: ")+TF2(idCycle,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\nMinute: ")+TF2(idMinute,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n\r\n") ) ;
                    soulC sRptAdd(    tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptAdd    ) ; sRptAdd    << (strokeS*)T("\r\nAddress Space Usage\r\n") ;
                    soulC sRptNapkin( tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptNapkin ) ; sRptNapkin << (strokeS*)T("\r\n\r\nNapkin (Shared Memory)\r\n") ;
                    soulC sRptSex(    tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptSex    ) ; sRptSex    << (strokeS*)T("\r\n\r\nSex (Slot Extents) (Heap)\r\n") ;
                    soulC sRptTin(    tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptTin    ) ; sRptTin    << (strokeS*)T("\r\nThreads\r\n\r\n") ;
                    soulC sRptEvent(  tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptEvent  ) ; sRptEvent  << (strokeS*)T("\r\nEvent Tally\r\n\r\n") ;
                    soulC sRptLog(    tinP , TAG( TAGiDnULL ) , flSOUL_null , ostoFileRptLog    ) ; sRptLog    << (strokeS*)T("\r\nLog\r\n\r\n") ;

                #else

                    soulC sRptTitle(  tinP , TAG( TAGiDnULL ) ) ; sRptTitle  << (strokeS*)( T("Memory Space ")+TF2(idMemorySpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" Glass: Minute Overview\r\nMinute by minute overview of the state of this home\r\nMinutes since gen: ")+TF2(idCycle,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\nMinute: ")+TF2(idMinute,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n\r\n") ) ;
                    soulC sRptAdd(    tinP , TAG( TAGiDnULL ) ) ; sRptAdd    << (strokeS*)T("\r\nAddress Space Usage\r\n") ;
                    soulC sRptNapkin( tinP , TAG( TAGiDnULL ) ) ; sRptNapkin << (strokeS*)T("\r\n\r\nNapkin (Shared Memory)\r\n") ;
                    soulC sRptSex(    tinP , TAG( TAGiDnULL ) ) ; sRptSex    << (strokeS*)T("\r\n\r\nSex (Slot Extents) (Heap)\r\n") ;
                    soulC sRptTin(    tinP , TAG( TAGiDnULL ) ) ; sRptTin    << (strokeS*)T("\r\nThreads\r\n\r\n") ;
                    soulC sRptEvent(  tinP , TAG( TAGiDnULL ) ) ; sRptEvent  << (strokeS*)T("\r\nEvent Tally\r\n\r\n") ;
                    soulC sRptLog(    tinP , TAG( TAGiDnULL ) ) ; sRptLog    << (strokeS*)T("\r\nLog\r\n\r\n") ;

                #endif

                countT cbGrainSpace = BM_HIGH ; //ONLY LOWER HALF IS ACCESSIBLE TO APPLICATIONS IN WINDOWS (WIN32)
                countT cbGrain = 1 << thirdC::os_expCbAllocationGrain_IF( tinP ) ;
                countT cbGrainCode = cbGrainSpace / cbGrain ;
                countT cColsGrainCode = thirdC::c_sqrtIF( cbGrainCode ) ;
                while( cColsGrainCode * cColsGrainCode < cbGrainCode ) cColsGrainCode ++ ;
                if( cColsGrainCode < TUCK ) cColsGrainCode = TUCK ;
                countT cRowsGrainCode = cColsGrainCode ;
                while( cColsGrainCode * cRowsGrainCode > cbGrainCode ) cRowsGrainCode -- ;
                while( cColsGrainCode * cRowsGrainCode < cbGrainCode ) cRowsGrainCode ++ ;

                ZE( countT , cLeverGrainCode ) ;
                switchC sw_pbzGrainCode( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , cLeverGrainCode , 0 , cbGrainCode ) ;

                //CONoUTrAW7( "[cbGrainCode,cColsGrainCode,cRowsGrainCode]: " , cbGrainCode , " " , cColsGrainCode , " " , cRowsGrainCode , "\r\n" ) ;
            
                memorySpaceP.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

                //etRock.traceF( tinP , T("tmReportF d/ ") ) ; //U:: TO FIND A BUG
                //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  8\r\n" ) ;
                if( !bQuitMonitorP )
                {
                    _IO_
                    countT cFlavors = memorySpaceP.swsTin.cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        memorySpaceP.pczLeverAdam = (countT*)memorySpaceP.swsTin.leverF( tinP , idf ) ;
            
                        countT cPlates = memorySpaceP.swsTin ;

                        //etThread.traceF( tinP , T("swsTin [idMemorySpaceP,cPlates,pczLeverAdam]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cPlates,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(*memorySpaceP.pczLeverAdam,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                        if( cPlates )
                        {
                            {
                                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                do
                                {
                                    //etThread.traceF( tinP , T("U:: 6 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                    tinEntryS& entry = *(tinEntryS*)&memorySpaceP.swsTin.downF( tinP , hWalk ) ;

                                    //ZE( boolT , bChatter ) ;
                                    //if( !etThread.strCompareF( tinP , T(entry.postThreadName) , T("tm1F") ) )
                                    //{
                                    //    bChatter = 1 ;
                                    //
                                    //    OStEXT(  ostoSay , TUCK ) ;
                                    //    OStEXTAK( ostoSay , "i [idThread,idTin,osTid,postThreadName]: " ) ;
                                    //    OStEXTC(  ostoSay , entry.idThread , 0 ) ;
                                    //    OStEXTAK( ostoSay , " , " ) ;
                                    //    OStEXTC(  ostoSay , entry.idTin , 0 ) ;
                                    //    OStEXTAK( ostoSay , " , " ) ;
                                    //    OStEXTC(  ostoSay , entry.osTid , 0 ) ;
                                    //    OStEXTAK( ostoSay , " , \"" ) ;
                                    //    OStEXTA(  ostoSay , entry.postThreadName ) ;
                                    //    OStEXTAK( ostoSay , "\"\r\n" ) ;
                                    //
                                    //    CONoUTrAW( ostoSay ) ;
                                    //}
                    
                                    ZE( byteT* , pbCopy ) ;
                                    PUSE.newF( tinP , LF , pbCopy , sizeof( tinS ) ) ; ___( pbCopy ) ;
                                    if( pbCopy )
                                    {
                                        //etThread.traceF( tinP , T("U:: 5 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                        tinS* pCopy = (tinS*)pbCopy ;
                                        if( !entry.bIda && !bQuitMonitorP )
                                        {
                                            //etThread.traceF( tinP , T("U:: 4 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                            ZE( boolT , bOk ) ;
                                            thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( tinS ) , bOk , (voidT*)entry.ip , entry.osPid ) ;
                                            if( !bOk || getNegAM( pCopy->fingerprint ) != FINGERnEG_TINs || entry.idSerial != pCopy->idSerial )
                                            {
                                                //etThread.traceF( tinP , T("U:: 3 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                pCopy = 0 ;
                                                //LOGrAW9( "tmReportF/detected odor while sniffing tinS full [bOk,fingerprint,entry.idSerial,idSerial]: " , bOk , "    " , pCopy->fingerprint , "    " , entry.idSerial , "    " , pCopy->idSerial , "\r\n" ) ;

                                                //U::LOG postThreadName AND idThread
                                            }
                                            else
                                            {
                                                //etThread.traceF( tinP , T("U:: 2 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                countT pc2[ 2 ] ; //fingerprint idSerial MUST BE AT OFFSETS 0 4
                                                bOk = 0 ;
                                                thirdC::dosReadProcessMemoryIF( tinP , (byteT*)pc2 , sizeof pc2 , bOk , (voidT*)( (byteT*)entry.ip ) , entry.osPid ) ;
                                                if( !bOk || getNegAM( pc2[ 0 ] ) != FINGERnEG_TINs || entry.idSerial != pc2[ 1 ] )
                                                {
                                                    //etThread.traceF( tinP , T("U:: 1 [idf]:    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                    pCopy = 0 ;
                                                    //LOGrAW9( "tmReportF/detected odor while sniffing tinS again to verify [bOk,fingerprint,entry.idSerial,idSerial]: " , bOk , "    " , pc2[ 0 ] , "    " , entry.idSerial , "    " , pc2[ 1 ] , "\r\n" ) ;

                                                    //U::LOG postThreadName AND idThread
                                                }
                                            }
                                        }
                                            
                                        if( pCopy&& !bQuitMonitorP ) // pCopy IS EITHER 0 OR A VALID IMAGE OF A tinS
                                        {
                                            //etThread.traceF( tinP , T("copying to swTinCopy [idMemorySpaceP,idf]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                            cLeverOsTid = entry.osTid ;
                                            byteT* pbTo = (byteT*)&(countT&)swTinCopy ;
            
                                            copyHeadS& head = *(copyHeadS*)pbTo ;
            
                                            head.idAdamRoot = memorySpaceP.pczLeverAdam[ 0 ] ;
                                            head.idAdam     = memorySpaceP.pczLeverAdam[ 1 ] ;
            
                                            head.cStepsNew = pCopy->monitor.idStep - entry.idStepLath ;
                                                                                     entry.idStepLath = pCopy->monitor.idStep ;
            
                                            thirdC::c_memcpyIF( tinP , pbTo + sizeof( copyHeadS ) , (byteT*)pCopy , sizeof( tinS ) ) ;
            
                                            //if( bChatter ) { CONoUTrAW( "COPIED sw\r\n" ) ; }
                                        }
                                        //else if( bChatter ) { CONoUTrAW( "IGNORED sw\r\n" ) ; }
                                    }
                                    PUSE( tinP , pbCopy ) ;
                                }
                                while( ~hWalk && !bQuitMonitorP ) ;
                            }
                        }
                    }
                }

                //etRock.traceF( tinP , T("tmReportF c/ ") ) ; //U:: TO FIND A BUG
                //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  7\r\n" ) ;
                if( !bQuitMonitorP )
                {
                    _IO_
                    countT cFlavors = memorySpaceP.swsNapkin.cFlavorsF( tinP ) ;
                    sRptNapkin << (strokeS*)( T("[cFlavors]:    ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tcr+tcr ) ;
                    for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                    {
                        memorySpaceP.pczLeverAdam = (countT*)memorySpaceP.swsNapkin.leverF( tinP , idf ) ;
                        sRptNapkin << (strokeS*)( tcr+tcr+textC( tinP , TAG( TAGiDnULL ) , flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED , memorySpaceP.pczLeverAdam , flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED , 0 , 0 , 0 )+tcr+tcr+T("postName")+tcr+tcr ) ;
            
                        countT cPlates = memorySpaceP.swsNapkin ;
                        sRptNapkin << (strokeS*)( T("[cPlates]:    ")+TF2(cPlates,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tcr ) ;
                        if( cPlates )
                        {
                            {
                                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                do
                                {
                                    napkinEntryS& entry = *(napkinEntryS*)&memorySpaceP.swsNapkin.downF( tinP , hWalk ) ;

                                    cLeverGrainCode = entry.osPid ;
                                    if( !sw_pbzGrainCode.idSlotOfLeverF( tinP , cLeverGrainCode ) ) etThread.memSetF( tinP , (byteT*)&(countT&)sw_pbzGrainCode , cbGrainCode , ' ' ) ;
                                    byteT* pbzGrainCode = (byteT*)&(countT&)sw_pbzGrainCode ;

                                    sRptNapkin << (strokeS*)( T(entry.postName)+tcr ) ;

                                    if( (countT)entry.pbData + entry.cbData < cbGrainSpace )
                                    {
                                        countT offGrainStart = (countT)  entry.pbData                  / cbGrain ;
                                        countT offGrainEnd   = (countT)( entry.pbData + entry.cbData ) / cbGrain ;

                                        for( countT offg = offGrainStart ; offg < offGrainEnd ; offg ++ ) 
                                        {
                                            pbzGrainCode[ offg ] = '7' ;    // napkinC
                                        }
                                    }
                                }
                                while( ~hWalk && !bQuitMonitorP ) ;
                            }
                        }
                    }
                }

                //etRock.traceF( tinP , T("tmReportF b/ ") ) ; //U:: TO FIND A BUG
                //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  6\r\n" ) ;
                if( !bQuitMonitorP )
                {
                    _IO_
                    countT cFlavors = memorySpaceP.swsSex.cFlavorsF( tinP ) ;
                    sRptSex << (strokeS*)( T("[cFlavors]:    ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tcr+tcr ) ;
                    for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                    {
                        memorySpaceP.pczLeverAdam = (countT*)memorySpaceP.swsSex.leverF( tinP , idf ) ;
                        sRptSex << (strokeS*)( tcr+tcr+textC( tinP , TAG( TAGiDnULL ) , flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED , memorySpaceP.pczLeverAdam , flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED , 0 , 0 , 0 )+tcr+tcr+T("cOwned   expCbSlo expSlots flagsSta cSlotsLo cSlotsHi pbData   pbDataEn postName")+tcr+tcr ) ;
            
                        countT cPlates = memorySpaceP.swsSex ;
                        sRptSex << (strokeS*)( T("[cPlates]:    ")+TF2(cPlates,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tcr ) ;
                        if( cPlates )
                        {
                            {
                                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                do
                                {
                                    sexEntryS& entry = *(sexEntryS*)&memorySpaceP.swsSex.downF( tinP , hWalk ) ;

                                    cLeverGrainCode = entry.osPid ;
                                    if( !sw_pbzGrainCode.idSlotOfLeverF( tinP , cLeverGrainCode ) ) etThread.memSetF( tinP , (byteT*)&(countT&)sw_pbzGrainCode , cbGrainCode , '.' ) ;
                                    byteT* pbzGrainCode = (byteT*)&(countT&)sw_pbzGrainCode ;

                                    ZE( byteT* , pbCopySex ) ;
                                    ZE( byteT* , pbCopyMetaHead ) ;
                                    PUSE.newF( tinP , LF , pbCopySex      , sizeof( sexC     ) ) ; ___( pbCopySex      ) ;
                                    PUSE.newF( tinP , LF , pbCopyMetaHead , sizeof( sexHeadS ) ) ; ___( pbCopyMetaHead ) ;
                                    if( pbCopySex && pbCopyMetaHead )
                                    {
                                        ZE( sexC* , pCopySex ) ;
                                        {
                                            ZE( boolT , bOk ) ;
                                            thirdC::dosReadProcessMemoryIF( tinP , pbCopySex , sizeof( sexC ) , bOk , (voidT*)entry.pSex , entry.osPid ) ;
                                            if( bOk ) pCopySex = (sexC*)pbCopySex ; ;
                                        }
                                            
                                        if( pCopySex ) // pCopySex IS EITHER 0 OR A VALID IMAGE OF A sexC (U:: ADD FINGERPRINT CHECK LIKE tinS)
                                        {
                                            ZE( sexHeadS* , pCopyMetaHead ) ;
                                            {
                                                ZE( boolT , bOk ) ;
                                                thirdC::dosReadProcessMemoryIF( tinP , pbCopyMetaHead , sizeof( sexHeadS ) , bOk , (voidT*)pCopySex->pzMetaHead , entry.osPid ) ;
                                                if( bOk ) pCopyMetaHead = (sexHeadS*)pbCopyMetaHead ; ;
                                            }

                                            if( pCopyMetaHead )
                                            {
                                                ZE( byteT* , pbCopyMetaBitsOwned ) ;
                                                countT cbaMetaBitsOwned = 1 + ( 1 << pCopyMetaHead->expSlots ) / SB ;
                                                PUSE.newF( tinP , LF , pbCopyMetaBitsOwned , cbaMetaBitsOwned ) ; ___( pbCopyMetaBitsOwned ) ;

                                                if( pbCopyMetaBitsOwned )
                                                {
                                                    ZE( boolT , bGotBits ) ;
                                                    thirdC::dosReadProcessMemoryIF( tinP , pbCopyMetaBitsOwned , cbaMetaBitsOwned , bGotBits , (voidT*)pCopySex->pbzMetaBitsOwned , entry.osPid ) ;

                                                    if( bGotBits )
                                                    {
                                                        ZE( countT , cOwned ) ;
                                                        countT cSlots = 1 << pCopyMetaHead->expSlots ;
                                                        for( countT offb = 0 ; offb < cSlots ; offb ++ )
                                                        {
                                                            byteT mask = (byteT)( 1 << offb % SB ) ;

                                                            boolT bIgnoreLo = offb <           pCopyMetaHead->cSlotsAvoidLo ;
                                                            boolT bIgnoreHi = offb >= cSlots - pCopyMetaHead->cSlotsAvoidHi ;

                                                            //if( bIgnoreLo && !( pbCopyMetaBitsOwned[ offb / SB ] & mask ) ) etThread.traceF( tinP , T("error: expected ownership bit not found (low)") ) ;
                                                            //if( bIgnoreHi && !( pbCopyMetaBitsOwned[ offb / SB ] & mask ) ) etThread.traceF( tinP , T("error: expected ownership bit not found (high)") ) ;

                                                            if( !bIgnoreLo && !bIgnoreHi && pbCopyMetaBitsOwned[ offb / SB ] & mask ) cOwned ++ ;
                                                        }

                                                        sRptSex << (strokeS*)( TF3(cOwned,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3(pCopyMetaHead->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3(pCopyMetaHead->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3(pCopySex->flagsState,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3(pCopyMetaHead->cSlotsAvoidLo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3(pCopyMetaHead->cSlotsAvoidHi,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF3((countT)pCopySex->pbData,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)+T(" ")+TF3((countT)pCopySex->pbDataEnd,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)+T(" ")+T(pCopyMetaHead->postName)+tcr ) ;

                                                        if( pCopySex->pbData < pCopySex->pbDataEnd && (countT)pCopySex->pbDataEnd < cbGrainSpace )
                                                        {
                                                            countT offGrainStart = (countT)pCopySex->pbData    / cbGrain ;
                                                            countT offGrainEnd   = (countT)pCopySex->pbDataEnd / cbGrain ;

                                                            for( countT offg = offGrainStart ; offg < offGrainEnd ; offg ++ ) 
                                                            {
                                                                pbzGrainCode[ offg ] = '8' ;    // sexC DATA
                                                            }
                                                        }

                                                        if( pCopySex->pbMeta < pCopySex->pbMetaEnd && (countT)pCopySex->pbMetaEnd < cbGrainSpace )
                                                        {
                                                            countT offGrainStart = (countT)pCopySex->pbMeta    / cbGrain ;
                                                            countT offGrainEnd   = (countT)pCopySex->pbMetaEnd / cbGrain ;

                                                            for( countT offg = offGrainStart ; offg < offGrainEnd ; offg ++ ) 
                                                            {
                                                                pbzGrainCode[ offg ] = '9' ;    // sexC META
                                                            }
                                                        }
                                                    }

                                                    //etThread.traceF( tinP , T("[osPid,expCbDrop,expSlots,postName]:    ")+TF2(entry.osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(entry.expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(entry.expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(entry.postName) ) ;
                                                    //etThread.traceF( tinP , T("from meta head [osPid,expCbDrop,expSlots,cSlotsAvoidLo,cSlotsAvoidHi,postName]:    ")+TF2(entry.osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF3(pCopyMetaHead->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,2)+T("    ")+TF3(pCopyMetaHead->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,2)+T("    ")+TF3(pCopyMetaHead->cSlotsAvoidLo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,2)+T("    ")+TF3(pCopyMetaHead->cSlotsAvoidHi,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,2)+T("    ")+T(pCopyMetaHead->postName) ) ;
                                                }
                                                PUSE( tinP , pbCopyMetaBitsOwned ) ;
                                            }
                                        }
                                        //else if( bChatter ) { CONoUTrAW( "IGNORED sw\r\n" ) ; }
                                    }
                                    PUSE( tinP , pbCopySex ) ;
                                    PUSE( tinP , pbCopyMetaHead ) ;
                                }
                                while( ~hWalk && !bQuitMonitorP ) ;
                            }
                        }
                    }
                }

                memorySpaceP.grab.ungrabF( tinP ) ;

                //etRock.traceF( tinP , T("tmReportF a/ k") ) ; //U:: TO FIND A BUG
                //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  5\r\n" ) ;
                ZE( byteT* , pbBookOut ) ;
                ZE( countT , cbBookOut ) ;
                if( !bQuitMonitorP )
                {
                    _IO_
                    //etRock.traceF( tinP , T("tmReportF a/ j") ) ; //U:: TO FIND A BUG
                    ZE( countT , costaVarying ) ;
                    countT cFlavors = swTinCopy.cFlavorsF( tinP ) ;
                    //etThread.traceF( tinP , T("swTinCopy [idMemorySpaceP,cFlavors]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    ZE( countT , cFlavorsToReport ) ;
                    for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                    {
                        //etThread.traceF( tinP , T("swTinCopy [idMemorySpaceP,idf]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        cLeverOsTid = swTinCopy.leverF( tinP , idf ) ;
                        byteT* pbFrom = (byteT*)&(countT&)swTinCopy ;
                        copyHeadS& head    = *(copyHeadS*)pbFrom ;
                        tinS&  tinCopy     = *(tinS*)( pbFrom + sizeof( copyHeadS ) ) ;

                        if( /*!head.cStepsNew &&*/ !( F(tinCopy.flagsThreadMode2) & flTHREADmODE2_MONITORdOnOTrEPORToNmE ) )
                        {
                            cFlavorsToReport ++ ;
                            //etThread.traceF( tinP , T("report on me [idMemorySpaceP,cFlavorsToReport]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cFlavorsToReport,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                            TN( tc4 , "" ) ; tc4 = T("[")+T((countT*)tinCopy.c4Tell)+T("]") ;
                            costaVarying += 1 + thirdC::c_strlenIF( tinP , tinCopy.postThreadName ) ;                                                                                       /*C*/
                            costaVarying += 1 + tc4.csF( tinP ) ;                                                                                                                           /*M*/
                            costaVarying += 1 + thirdC::c_strlenIF( tinP , tinCopy.postTell       ) ;                                                                                       /*D*/
                            costaVarying += 1 + thirdC::c_strlenIF( tinP , tinCopy.postTellWait   ) ;                                                                                       /*E*/
                            costaVarying += 1 + thirdC::c_strlenIF( tinP , tinCopy.postTellIf     ) ;                                                                                       /*F*/
            
                            ACCsIZEmONITOR( pLFnest )                                                       
                            ACCsIZE( pLFstep )                                                                                                                                              /*H*/
                            ACCsIZE( pFlagsThreadLevelMode )                                                                                                                                /*I*/
                            ACCsIZE( pIdInNest )                                                                                                                                            /*J*/
                            ACCsIZE( pEIPInNest )                                                                                                                                           /*K*/
                            ACCsIZE( pIdProgressNest )                                                                                                                                      /*L*/
                        }
                    }

                    //etRock.traceF( tinP , T("tmReportF a/ i") ) ; //U:: TO FIND A BUG
                    cbBookOut =

                        4 * sizeof( countT )                    /*A*/
                        + sizeof( monitorS ) * (countT)cFlavorsToReport /*B*/
                        + costaVarying

                    ;

                    if( cFlavorsToReport )
                    {
                        countT foo = 2 ;
                    }

                    //etRock.traceF( tinP , T("tmReportF a/ h") ) ; //U:: TO FIND A BUG
                    ZE( byteT* , pbBookOut ) ;
                    PUSE.newF( tinP , LF , pbBookOut , cbBookOut ) ; ___( pbBookOut ) ;
                    byteT* pbc = pbBookOut ;
                    //CONoUTrAW3( "[cbBookOut]: " , cbBookOut , "\r\n" ) ;
                    if( pbc && !bQuitMonitorP )
                    {
                        _IO_
                        //etRock.traceF( tinP , T("tmReportF a/ g") ) ; //U:: TO FIND A BUG
                        putNegAM( *(countT*)pbc , FINGERnEG_BKmONITOR )                                                                                                     ; pbc += sizeof( countT ) ;     /*A*/
                        *(countT*)pbc = 1  /*IDfORMAT*/                                                                                                                     ; pbc += sizeof( countT ) ;     /*A*/
                        *(countT*)pbc =  timeR1                                                                                                                             ; pbc += sizeof( countT ) ;     /*A*/
                        *(countT*)pbc =  timeR2                                                                                                                             ; pbc += sizeof( countT ) ;     /*A*/

                        ZE( countT , idAdamRootLath ) ;
                        ZE( countT , idAdamLath     ) ;
                        for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                        {
                            _IO_
                            //etRock.traceF( tinP , T("tmReportF a/ f") ) ; //U:: TO FIND A BUG
                            cLeverOsTid = swTinCopy.leverF( tinP , idf ) ;
                            byteT* pbFrom = (byteT*)&(countT&)swTinCopy ;
                            copyHeadS& head     = *(copyHeadS*)pbFrom ;
                            tinS&   tinCopy     = *(tinS*)( pbFrom + sizeof( copyHeadS ) ) ;
                
                            if( F(tinCopy.flagsThreadMode2) & flTHREADmODE2_MONITORdOnOTrEPORToNmE )
                            {
                                OStEXT(  os , TUCK ) ;
                                OStEXTAK( os , "suppressing detail for thread " ) ;
                                OStEXTC(  os , tinCopy.monitor.idThread , 0 ) ;
                                OStEXTAK( os , "\"" ) ;
                                OStEXTA(  os , tinCopy.postThreadName ) ;
                                OStEXTAK( os , "\"\r\n" ) ;
                                //CONoUTrAW( os ) ;
                            }

                            if( /*!head.cStepsNew &&*/ !( F(tinCopy.flagsThreadMode2) & flTHREADmODE2_MONITORdOnOTrEPORToNmE ) && !bQuitMonitorP )
                            {
                                _IO_
                                //etRock.traceF( tinP , T("tmReportF a/ e") ) ; //U:: TO FIND A BUG
                                TN( tc4 , "" ) ; tc4 = T("[")+T((countT*)tinCopy.c4Tell)+T("]") ;
                                costaVarying += 1 + tc4.csF( tinP ) ;
                                thirdC::c_memcpyIF( tinP , pbc , (byteT*)&tinCopy.monitor , sizeof( monitorS ) ) ; pbc += sizeof( monitorS ) ; /*B*/
                
                                ZE( countT , costai ) ;
                                costai = 1 + thirdC::c_strlenIF( tinP , tinCopy.postThreadName    ) ; thirdC::c_memcpyIF( tinP , pbc , tinCopy.postThreadName   , costai )  ; pbc += costai ;               /*C*/
                                costai = 1 + tc4.csF( tinP )                                        ; thirdC::c_memcpyIF( tinP , pbc , tc4                      , costai )  ; pbc += costai ;               /*M*/
                                costai = 1 + thirdC::c_strlenIF( tinP , tinCopy.postTell          ) ; thirdC::c_memcpyIF( tinP , pbc , tinCopy.postTell         , costai )  ; pbc += costai ;               /*D*/
                                costai = 1 + thirdC::c_strlenIF( tinP , tinCopy.postTellWait      ) ; thirdC::c_memcpyIF( tinP , pbc , tinCopy.postTellWait     , costai )  ; pbc += costai ;               /*E*/
                                costai = 1 + thirdC::c_strlenIF( tinP , tinCopy.postTellIf        ) ; thirdC::c_memcpyIF( tinP , pbc , tinCopy.postTellIf       , costai )  ; pbc += costai ;               /*F*/
                
                                WRITEaRRAYmONITOR( pLFnest )                                                                                                                                                       /*G*/
                                WRITEaRRAY( pLFstep )                                                                                                                                                       /*H*/
                                WRITEaRRAY( pFlagsThreadLevelMode )                                                                                                                                         /*I*/
                                WRITEaRRAY( pIdInNest )                                                                                                                                                     /*J*/
                                WRITEaRRAY( pEIPInNest )                                                                                                                                                    /*K*/
                                WRITEaRRAY( pIdProgressNest )                                                                                                                                               /*L*/
            
                                if( idAdamLath != head.idAdam || idAdamRootLath != head.idAdamRoot )
                                {
                                    idAdamRootLath = head.idAdamRoot ;
                                    idAdamLath     = head.idAdam ;
                    
                                    sRptTin << (strokeS*)( T("\r\n")+TF2(head.idAdamRoot,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+TF2(head.idAdam,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n\r\n") ) ;
                                }
                    
                                //CONoUTrAW( TF2(idCycle,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(": ")+TF2(head.idAdamRoot,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(head.idAdam,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" ")+T(tinCopy.postThreadName)+T("\r\n") ) ;
                    
                                sRptTin << (strokeS*)( TF3(tinCopy.monitor.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+TP(tinCopy.postThreadName,0x10)+T(" ")+TF3(tinCopy.monitor.idStep,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+TF3(head.cStepsNew,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+tc4+T(tinCopy.postTell)+T("\r\n" DASH256 "\r\n") ) ;
                            
                                ZE( boolT , bDash ) ;
                    
                                if( tinCopy.monitor.cGrabbed )
                                {
                                    const countT offEnd = OFFgRABBEDmAX * 5 ;
                                    for( countT off = 0 ; off < offEnd ; off += 5 )
                                    {
                                        if( tinCopy.pPanLifiRecurseGrabbedLevel[ off ] )
                                        {
                                            bDash |= reportGrabF( tinP , sRptTin , T("got     :") , tinCopy.pPanLifiRecurseGrabbedLevel + off , tinCopy.osPid ) ;
                                        }
                                    }
                                }
            
                                //etRock.traceF( tinP , T("tmReportF a/ d") ) ; //U:: TO FIND A BUG
                                if( tinCopy.monitor.pPanLifiGrabbing[ 0 ] && !bQuitMonitorP )
                                {
                                    //etRock.traceF( tinP , T("tmReportF a/ c") ) ; //U:: TO FIND A BUG
                                    countT pcPanLifi[] = { tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.monitor.pPanLifiGrabbing[ 1 ] , tinCopy.monitor.pPanLifiGrabbing[ 2 ] } ;
                                    //countT pcPanLifi[] = { 0 , tinCopy.monitor.pPanLifiGrabbing[ 1 ] , tinCopy.monitor.pPanLifiGrabbing[ 2 ] } ; // THE PAN IS NOT USED BECAUSE HERE IT IS ALWAYS baseGrabC*, UNLIKE WHAT IS DONE IN THE GRABBED ARRAY
                                    bDash |= reportGrabF( tinP , sRptTin , T("grabbing:") , pcPanLifi ) ;
            
                                    ZE( byteT* , pbCopy ) ;
                                    PUSE.newF( tinP , LF , pbCopy , sizeof( baseGrabC ) ) ; ___( pbCopy ) ;
                                    if( pbCopy && !bQuitMonitorP )
                                    {
                                        //etRock.traceF( tinP , T("tmReportF a/ b") ) ; //U:: TO FIND A BUG
                                        baseGrabC* pbg = (baseGrabC*)pbCopy ;
            
                                        ZE( boolT , bOk ) ;
                                        thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( baseGrabC ) , bOk , (voidT*)tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.osPid ) ;
                                        if( !bOk || getNegAM( pbg->finger ) != FINGERnEG_GRABc ) pbg = 0 ;
                                        else
                                        {
                                            bOk = 0 ;
                                            ZE( countT , recheck ) ;
                                            thirdC::dosReadProcessMemoryIF( tinP , (byteT*)&recheck , sizeof( recheck ) , bOk , (voidT*)tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.osPid ) ;
                                            if( !bOk || getNegAM( recheck ) != FINGERnEG_GRABc ) pbg = 0 ;
                                        }
            
                                        //etRock.traceF( tinP , T("tmReportF a/ a") ) ; //U:: TO FIND A BUG
                                        if( pbg && !bQuitMonitorP )
                                        {
                                            switch( pbg->idTypeCt ) //CS:CODEsYNC: 00104c9 1050104.2
                                            {
                                                case ifcIDtYPEdERIVEDbASEgRABc_grabC :
                                                {
                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / o") ) ; //U:: TO FIND A BUG
                                                    ZE( byteT* , pbCopy ) ;
                                                    PUSE.newF( tinP , LF , pbCopy , sizeof( grabC ) ) ; ___( pbCopy ) ;
                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / n") ) ; //U:: TO FIND A BUG
                                                    if( pbCopy )
                                                    {
                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / m") ) ; //U:: TO FIND A BUG
                                                        ZE( boolT , bOk ) ;
                                                        thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( grabC ) , bOk , (voidT*)tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.osPid ) ;
                                                        if( bOk )
                                                        {
                                                            //etRock.traceF( tinP , T("tmReportF a/ 9 / l") ) ; //U:: TO FIND A BUG
                                                            grabC& grab = *(grabC*)pbCopy ;
                    
                                                            if( grab.cGrabbedF() )
                                                            {
                                                                //etRock.traceF( tinP , T("tmReportF a/ 9 / k") ) ; //U:: TO FIND A BUG
                                                                if( swTinCopy.idSlotOfLeverF( tinP , grab.osTidF() ) )
                                                                {
                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / j") ) ; //U:: TO FIND A BUG
                                                                    cLeverOsTid = grab.osTidF() ;
                                                                    byteT* pbFrom = (byteT*)&(countT&)swTinCopy ;
                                                                    copyHeadS& head     = *(copyHeadS*)pbFrom ;
                                                                    tinS&   tinCopy     = *(tinS*)( pbFrom + sizeof( copyHeadS ) ) ;
                    
                                                                    ZE( countT , idAdamRoot ) ;
                                                                    ZE( countT , idAdam ) ;
                                                                    {
                                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / i") ) ; //U:: TO FIND A BUG
                                                                        ZE( byteT* , pbCopy ) ;
                                                                        PUSE.newF( tinP , LF , pbCopy , sizeof( adamGlobal1S ) ) ; ___( pbCopy ) ;
                                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / h") ) ; //U:: TO FIND A BUG
                                                                        if( pbCopy )
                                                                        {
                                                                            //etRock.traceF( tinP , T("tmReportF a/ 9 / g") ) ; //U:: TO FIND A BUG
                                                                            ZE( boolT , bOk ) ;
                                                                            thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( adamGlobal1S ) , bOk , (voidT*)tinCopy.pAdamGlobal1 , tinCopy.osPid ) ;
                                                                            if( bOk )
                                                                            {
                                                                                //etRock.traceF( tinP , T("tmReportF a/ 9 / f") ) ; //U:: TO FIND A BUG
                                                                                adamGlobal1S& ag1 = *(adamGlobal1S*)pbCopy ;
                                                                                idAdam = ag1.idAdam ;
                        
                                                                                ZE( byteT* , pbCopy ) ;
                                                                                PUSE.newF( tinP , LF , pbCopy , sizeof( processGlobal1S ) ) ; ___( pbCopy ) ;
                                                                                //etRock.traceF( tinP , T("tmReportF a/ 9 / e") ) ; //U:: TO FIND A BUG
                                                                                if( pbCopy )
                                                                                {
                                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / d") ) ; //U:: TO FIND A BUG
                                                                                    ZE( boolT , bOk ) ;
                                                                                    thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( processGlobal1S ) , bOk , (voidT*)ag1.pProcessGlobal1 , tinCopy.osPid ) ;
                                                                                    if( bOk )
                                                                                    {
                                                                                        processGlobal1S& pg1 = *(processGlobal1S*)pbCopy ;
                                                                                        idAdamRoot = pg1.idAdamRoot ;
                                                                                    }
                                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / c") ) ; //U:: TO FIND A BUG
                                                                                }
                                                                                PUSE( tinP , pbCopy ) ;
                                                                                //etRock.traceF( tinP , T("tmReportF a/ 9 / b") ) ; //U:: TO FIND A BUG
                                                                            }
                                                                            //etRock.traceF( tinP , T("tmReportF a/ 9 / a") ) ; //U:: TO FIND A BUG
                                                                        }
                                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / 9") ) ; //U:: TO FIND A BUG
                                                                        PUSE( tinP , pbCopy ) ;
                                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / 8") ) ; //U:: TO FIND A BUG
                                                                    }

                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / 7") ) ; //U:: TO FIND A BUG
                                                                    sRptTin << (strokeS*)( T("this is grabbed by osTid:")+TF1(grab.osTidF())+T(" idAdamRoot:")+TF1(idAdamRoot)+T(" idAdam:")+TF1(idAdam)+T(" idThread:")+TF1(tinCopy.monitor.idThread)+T(" postThreadName:\"")+TF1(tinCopy.postThreadName)+T("\"\r\n") ) ;
                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / 6") ) ; //U:: TO FIND A BUG
                                                                }
                                                                else
                                                                {
                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / 5") ) ; //U:: TO FIND A BUG
                                                                    sRptTin << (strokeS*)( T("this is grabbed by a thread that is gone [osTid]: ")+TF1(grab.osTidF())+T("\r\n") ) ;
                                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / 4") ) ; //U:: TO FIND A BUG
                                                                }
                                                                //etRock.traceF( tinP , T("tmReportF a/ 9 / 3") ) ; //U:: TO FIND A BUG
                                                            }
                                                            //etRock.traceF( tinP , T("tmReportF a/ 9 / 2") ) ; //U:: TO FIND A BUG
                                                        }
                                                        //etRock.traceF( tinP , T("tmReportF a/ 9 / 1") ) ; //U:: TO FIND A BUG
                                                    }
                                                    //etRock.traceF( tinP , T("tmReportF a/ 9 / 0") ) ; //U:: TO FIND A BUG
                                                    PUSE( tinP , pbCopy ) ;
                                                    //etRock.traceF( tinP , T("tmReportF a/ 8") ) ; //U:: TO FIND A BUG
                                                    break ;
                                                }
                                                case ifcIDtYPEdERIVEDbASEgRABc_grabitC :
                                                {
                                                    //etRock.traceF( tinP , T("tmReportF a/ 7") ) ; //U:: TO FIND A BUG
                                                    ZE( byteT* , pbCopy ) ;
                                                    PUSE.newF( tinP , LF , pbCopy , sizeof( grabitC ) ) ; ___( pbCopy ) ;
                                                    if( pbCopy )
                                                    {
                                                        ZE( boolT , bOk ) ;
                                                        thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( grabitC ) , bOk , (voidT*)tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.osPid ) ;
                                                        if( bOk )
                                                        {
                                                            grabitC& grabit = *(grabitC*)pbCopy ;
                    
                                                            countT foo = 2 ; //U::
                                                        }
                                                    }
                                                    PUSE( tinP , pbCopy ) ;
                                                    //etRock.traceF( tinP , T("tmReportF a/ 6") ) ; //U:: TO FIND A BUG
                                                    break ;
                                                }
                                                case ifcIDtYPEdERIVEDbASEgRABc_grabotC :
                                                {
                                                    //etRock.traceF( tinP , T("tmReportF a/ 5") ) ; //U:: TO FIND A BUG
                                                    ZE( byteT* , pbCopy ) ;
                                                    PUSE.newF( tinP , LF , pbCopy , sizeof( grabotC ) ) ; ___( pbCopy ) ;
                                                    if( pbCopy )
                                                    {
                                                        ZE( boolT , bOk ) ;
                                                        thirdC::dosReadProcessMemoryIF( tinP , pbCopy , sizeof( grabotC ) , bOk , (voidT*)tinCopy.monitor.pPanLifiGrabbing[ 0 ] , tinCopy.osPid ) ;
                                                        if( bOk )
                                                        {
                                                            grabotC& grabot = *(grabotC*)pbCopy ;
                    
                                                            countT foo = 2 ; //U::
                                                        }
                                                    }
                                                    PUSE( tinP , pbCopy ) ;
                                                    //etRock.traceF( tinP , T("tmReportF a/ 4") ) ; //U:: TO FIND A BUG
                                                    break ;
                                                }
                                                default :
                                                {
                                                    LOGrAW3( "105 tmReportF unexpected value [pbg->idTypeCt]: " , pbg->idTypeCt , "\r\n" ) ;
                                                    //2009.12.20: 105 tmReportF unexpected value [pbg->idTypeCt]: 0
                                                    BLAMMO ;
                                                }
                                            }
                                        }
                                    }
                                    PUSE( tinP , pbCopy ) ;
                                }
                    
                                //etRock.traceF( tinP , T("tmReportF a/ 3") ) ; //U:: TO FIND A BUG
                                if( bDash ) sRptTin << (strokeS*)( T(DASH256 "\r\n") ) ;
                                countT idnf = tinCopy.monitor.cInNest - OFFsLOTtINnESTmAX ;
                                if( (sCountT)idnf < 1 ) idnf = 1 ;
                                for( countT idn = tinCopy.monitor.cInNest ; idn >= idnf && !bQuitMonitorP ; idn -- )
                                {
                                    countT offez = idn & OFFsLOTtINnESTmAX ;
                                    countT offe = ( idn & OFFsLOTtINnESTmAX ) << 1 ;
                                    countT idLine  = tinCopy.monitor.pLFnest[ offe     ] ;
                                    countT idiFile = tinCopy.monitor.pLFnest[ offe + 1 ] ;
                                        
                                    OStEXT( ostoRpt , OFFsLOTtINnESTmAX * TUCK )
                                    OStEXTC( ostoRpt , tinCopy.pEIPInNest[ offez ] , ' ' ) ;
                                    OStEXTAK( ostoRpt , " | " ) ;
                                    OStEXTC( ostoRpt , tinCopy.pIdInNest[ offez ] , ' ' ) ;
                                    OStEXTAK( ostoRpt , "'th: " ) ;
                                    OStEXTCmIN( ostoRpt , idLine , 4 ) ;
                                    OStEXTAK( ostoRpt , "." ) ;
                                    OStEXTCmIN( ostoRpt , idiFile , 7 ) ;
                                    OStEXTAK( ostoRpt , "    " ) ;
                                    const osTextT* postTitle = processGlobal7S::_processGlobal7I_IF().source.postFileTitleF( tinP , processGlobal7S::_processGlobal7I_IF().source.idFileRankF( tinP , idiFile ) ) ;
                                    if( postTitle )
                                    {
                                        OStEXTA( ostoRpt , postTitle ) ;
                                    }
                                    OStEXTAK( ostoRpt , "\r\n" ) ;
                                    sRptTin << (strokeS*)( T(ostoRpt) ) ;
                                }
                                sRptTin << (strokeS*)( T("\r\n") ) ;
                                //etRock.traceF( tinP , T("tmReportF a/ 2") ) ; //U:: TO FIND A BUG
                            }
                        }
                        //etRock.traceF( tinP , T("tmReportF a/ 1") ) ; //U:: TO FIND A BUG

                        if( pbBookOut + cbBookOut - pbc )
                        {
                            countT foo = 2 ;
                        }

                        //U::__( pbBookOut + cbBookOut - pbc ) ;
                    }
                    PUSE( tinP , pbBookOut ) ;
                }
                //etRock.traceF( tinP , T("tmReportF a/ 0") ) ; //U:: TO FIND A BUG
                swTinCopy.freeAllF( tinP ) ;

                if( !bQuitMonitorP )
                {
                    _IO_
                    //etRock.traceF( tinP , T("tmReportF 9/ ") ) ; //U:: TO FIND A BUG
                    //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  4\r\n" ) ;
                    stPeriodDataP.grabF( tinP , TAG( TAGiDnULL ) ) ;

                    //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  3\r\n" ) ;
                    stPeriodDataP << (byteT*)0 ;
                    new( 0 , tinP , (byteT*)&stPeriodDataP[ 1 ] , sizeof( periodDataS ) ) periodDataS( tinP , *stPeriodDataP.third.third_pEtherContainsMe_F() ) ;

                    if( stPeriodDataP > CpERIODSrETAIN )
                    {
                        _IO_
                        countT cToDo = stPeriodDataP - CpERIODSrETAIN ;
                        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                        do
                        {
                            periodDataS* ppd = (periodDataS*)&stPeriodDataP.upF( tinP , hWalk ) ;
                            DELzOMBIE( ppd ) ;
                            stPeriodDataP.extractF( 0 , tinP ) ;
                        }
                        while( ~hWalk && -- cToDo ) ;
                    }

                    //U::CONJ: THIS IS OBSOLETED BY THE PRECEDING SNIP: stPeriodDataP.purgeF( tinP , 0x10 ) ; //U::DESTROY THE periodDataS INSTANCES

                    if( stPeriodDataP > 1 && !bQuitMonitorP )
                    {
                        _IO_
                        periodDataS& pd = *(periodDataS*)&stPeriodDataP[ 2 ] ;

                        countT cFlavors = pd.swEventTally.cFlavorsF( tinP ) ;
                        ZE( countT , total ) ;
                        for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                        {
                            countT idType = pd.cLeverIdType = pd.swEventTally.leverF( tinP , idf ) ;
                            countT tally = pd.swEventTally ;
                            sRptEvent << (strokeS*)( TF3(tally,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T(processGlobal3S::_processGlobal3I_IF().mapSay(idType))+T("\r\n") ) ;
                            total += tally ;
                        }
                        sRptEvent << (strokeS*)( TF3(total,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T("total\r\n") ) ;

                        cFlavors = pd.swsLog.cFlavorsF( tinP ) ;
                        for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                        {
                            pd.pczLeverThread = (const countT*)pd.swsLog.leverF( tinP , idf ) ;
                            sRptLog << (strokeS*)( T(pd.pczLeverThread)+T(":\r\n\r\n") ) ;
                            
                            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                            do sRptLog << (strokeS*)( T((osTextT*)pd.swsLog.downF(tinP,hWalk))+T("\r\n") ) ;
                            while( ~hWalk ) ;
                            sRptLog << (strokeS*)( T("\r\n") ) ;
                        }
                    }
                    stPeriodDataP.ungrabF( tinP ) ;

                    //etRock.traceF( tinP , T("tmReportF 8/ ") ) ; //U:: TO FIND A BUG
                    //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  2\r\n" ) ;
                    TN( tcr  , "\r\n" ) ;

                    countT cFlavors = sw_pbzGrainCode.cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors && !bQuitMonitorP ; idf ++ )
                    {
                        _IO_
                        cLeverGrainCode = sw_pbzGrainCode.leverF( tinP , idf ) ;
                        byteT* pbzGrainCode = (byteT*)&(countT&)sw_pbzGrainCode ;

                        ZE( strokeS* , psttRpt ) ;
                        etThread.strMakeF( tinP , LF , psttRpt , (const strokeS*)T("\r\n\r\n") , cbGrainCode << 1 ) ; ___( psttRpt ) ;

                        ZE( countT , offRow ) ;
                        for( countT offg = 0 ; offg < cbGrainCode && !bQuitMonitorP ; offg ++ )
                        {
                            if( !( offg % cColsGrainCode ) )
                            {
                                if( offg )
                                {
                                    offRow ++ ;
                                    etThread.strFuseF( tinP , psttRpt , tcr ) ;
                                }
                                etThread.strFuseF( tinP , psttRpt , TF3(offRow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,3) ) ;
                            }

                            osTextT post2[ 2 ] = { pbzGrainCode[ offg ] , 0 } ;
                            etThread.strFuseF( tinP , psttRpt , T(post2) ) ;
                        }
                        etThread.strFuseF( tinP , psttRpt , tcr ) ;

                        sRptAdd << (strokeS*)( T("\r\n\r\nProcess [osPid]:    ")+TF2(cLeverGrainCode,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF4(cLeverGrainCode,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(psttRpt) ) ;
                        etThread.delF( tinP , psttRpt ) ;
                    }

                    if( !bQuitMonitorP )
                    {
                        _IO_
                        //etRock.traceF( tinP , T("tmReportF 7/ ") ) ; //U:: TO FIND A BUG
                        soulC sReports(   tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.reports" , TICK ) ; //20200920@1726: INCREASED FROM ( TOCK << 4 )

                        etRock.traceF( tinP , T("report Title  [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptTitle ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Event  [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptEvent ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Log    [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptLog   ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Add    [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptAdd   ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Sex    [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptSex   ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Napkin [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptNapkin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        etRock.traceF( tinP , T("report Tin    [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRptTin   ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                        { _IO_ sReports << sRptTitle  ; }
                        { _IO_ sReports << sRptEvent  ; }
                        { _IO_ sReports << sRptLog    ; }
                        { _IO_ sReports << sRptAdd    ; }
                        { _IO_ sReports << sRptSex    ; }
                        { _IO_ sReports << sRptNapkin ; }
                        { _IO_ sReports << sRptTin    ; }

                        //etRock.traceF( tinP , T("tmReportF 6/ ") ) ; //U:: TO FIND A BUG
                        //U::BUG: boxPutF OCCASIONALLY FAILS: diskMakeDirF/lath prior slash is at position less than 4: "///d/"
                        //20121126@1750: I VAGUELY RECALL THAT I FOUND THIS BUG; HAVEN'T SEEN IT LATELY

                        //LOGrAW3( "tmReportF 2 [flHOMEsuTILITY_SNAPsHOT]: " , F(home.flagsUtility) & flHOMEsuTILITY_SNAPsHOT , "\r\n" ) ;

                        //etRock.traceF( tinP , T("tmReportF 5/ ") ) ; //U:: TO FIND A BUG
                        TN( tFile , "" ) ; tFile = T("///ideafarm/ephemeral/reports/") ;
                        if( bSnapShot || F(home.flagsUtility) & flHOMEsuTILITY_SNAPsHOT ) tFile += textC(ifcIDtEXTgEN_TIMEnOW,tinP,TAG(TAGiDnULL))+T(".")+T(postSnapShotRequestP&&*postSnapShotRequestP?postSnapShotRequestP:"snapshot") ;
                        else                                                              tFile += T("minute") ;
                        tFile += T(".rpt.kernel.idMemorySpace.")+TF3(idMemorySpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,3)+T(".")+TF2(idMinute,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE)+T(".txt") ;

                        //etRock.traceF( tinP , T("tmReportF 4/ ") ) ; //U:: TO FIND A BUG
                        if( bSnapShot )
                        {
                            _IO_
                            for(;;)
                            {
                                flagsT oldf = fliPendingSnapShotRequestP ;
                                flagsT newf = oldf & ~fliMaskPending ;
                                if( oldf == setIfEqualsAM( fliPendingSnapShotRequestP , newf , oldf ) ) break ;
                            }

                            if( !fliPendingSnapShotRequestP ) *postSnapShotRequestP = 0 ;
                        }

                        //etRock.traceF( tinP , T("tmReportF 3/ ") ) ; //U:: TO FIND A BUG
                        //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  1\r\n" ) ;
                        //CONoUTrAW5( "tmReportF idMemorySpace:" , idMemorySpaceP , " idMinute:" , idMinute , " writing file \"" ) ;
                        //CONoUTrAW( tFile ) ;
                        //CONoUTrAW( "\"\r\n" ) ;

                        //LOGrAW5( "tmReportF idMemorySpace:" , idMemorySpaceP , " idMinute:" , idMinute , " writing file \"" ) ;
                        //LOGrAW( tFile ) ;
                        //LOGrAW( "\"\r\n" ) ;

                        //REMOVE: etThread.boxPutF( tinP , tFile , (osTextT*)sReports , sReports.csF( tinP ) ) ;

                        if( !bQuitMonitorP )
                        {
                            _IO_
                            OPENfILEwRITE1( tFile )
                            while( sReports && !bQuitMonitorP )
                            {
                                _IO_
                                soulC sRpt( tinP , TAG( TAGiDnULL ) ) ;
                                sReports >> sRpt ;
                                etRock.traceF( tinP , T("report pulled [idMemorySpaceP,cFields]:    ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2((countT)sRpt,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                while( sRpt )
                                {
                                    ZE( strokeS* , psttr ) ;
                                    sRpt >> psttr ; ___( psttr ) ;
                                
                                    ZE( osTextT* , postr ) ;
                                    countT costr = etThread.strMakeF( tinP , LF , postr , psttr ) ; ___( postr ) ;
                                    etThread.delF( tinP , psttr ) ;
                                        
                                    etThread.fileWriteF( tinP , hFile1 , postr , costr ) ;
                                    etThread.delF( tinP , postr ) ;
                                }
                            }
                        }

                        if( !bQuitMonitorP )
                        {
                            _IO_
                            //etRock.traceF( tinP , T("tmReportF 2/ ") ) ; //U:: TO FIND A BUG
                            //LOGrAW3( "report written to disk []: " , idMemorySpaceP , "\r\n" ) ;

                            bkReport.writeF( tinP , pbBookOut , cbBookOut , 0 , 0 , flBOOKScwRITE_HEADfINGER1 | flBOOKScwRITE_HEADiDfORMAT | flBOOKScwRITE_HEADcBdATA | flBOOKScwRITE_HEADfINGER2 | flBOOKScwRITE_TAILfINGER | flBOOKScwRITE_ALLOWoDDlENGTH ) ;
                        }
                        PUSE( tinP , pbBookOut ) ;

                        //CONoUTrAW5( "tmReportF idMemorySpace:" , idMemorySpaceP , " idMinute:" , idMinute , " written\r\n" ) ;
                        //CONoUTrAW3( "tmReportF " , idMemorySpaceP , ":  0\r\n" ) ;
                        //etRock.traceF( tinP , T("tmReportF 1/ ") ) ; //U:: TO FIND A BUG
                    }
                }
            }

            bCompileReportP.ungrabF( tinP ) ;
        }
//#endif
    }
    etRock.traceF( tinP , T("tmReportF 0/ ") ) ; //U:: TO FIND A BUG
}
DONE( tmReportF )

TASK( tmVultureF )
if( pTaskP && pTaskP->c1 )
{
    const countT osPidPrey = pTaskP->c1 ;
    //etThread.traceF( tinP , T("tmVultureF [osPid]:")+TF4(osPidPrey,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(": waiting for death") ) ;

    HANDLE osh = OpenProcess( PROCESS_TERMINATE | SYNCHRONIZE | PROCESS_QUERY_LIMITED_INFORMATION , 0 , osPidPrey ) ;
    if( osh )
    {
        boolT bOk = WaitForSingleObject( osh , INFINITE ) ;

        ZE( DWORD , rc ) ;
        bOk = GetExitCodeProcess( osh , &rc ) ;
        //etThread.traceF( tinP , T("tmVultureF [osPid,rc]:")+TF4(osPidPrey,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(": process terminated with code    ")+TF2((countT)rc,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN)+T("    ")+TF4((countT)rc,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa) ) ;

        CloseHandle( osh ) ;
    }
}
DONE( tmVultureF )

TASK( tmYellF )
if( pTaskP )
{
    //CONoUTrAW( "tmYell/+\r\n" ) ;

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    while( !ether )
    {
        //etThread.beeClickF( tinP ) ;

        //CONoUTrAW( "tmYell/yell/+\r\n" ) ;
        THREADmODE1oN( flTHREADmODE1_YELL )
        YELL( "yippee!" ) ;
        THREADmODE1rESTORE
        //CONoUTrAW( "tmYell/yell/-\r\n" ) ;

        ++ s ; ether.osSleepF( tinP , TOCK ) ;
    }

    //CONoUTrAW( "tmYell/-\r\n" ) ;
}
DONE( tmYellF )

#if defined( NEVERdEFINED )
//U:: ALT: MOVE THIS FUNCTIONALITY INTO A SIMPLE ADAM THAT JUST DOES IT AND COOPERATES WITH OTHER ADAM CELLS ON LOCAL (LAN) COMPUTERS, SUCH AS THE FACTORIES ON THE IDEAFARM SUBNET
// OBJECTIVE: DETECT WHEN CLOAK PROCESS TERMINATES ON LOCAL HOST OR ON ANY OTHER HOST ON THE LAN.  IF SO, SHUTDOWN THAT HOST TO PREVENT IT FROM BEING ONLINE IN AN UNCLOAKED STATE
// THE INITIAL PLAN WAS FOR MONITOR (THIS ADAM) TO DO THAT
// BUT IF THE IDEAFARM HOME IS TO BE CLOAKED, THE SERVICE PROGRAM (OR SOME OTHER PROGRAM LAUNCHED BY SERVICE) WILL HAVE TO DO IT.
// ALT: A DEDICATED HOME CAN CLOAK ALL OTHER HOMES ON THE LOCAL COMPUTER
// THIS CAN BE A DEDICATED COMPUTER ON THE LAN THAT IS NEVER LOGGED ON TO AND DOESN'T RUN ANY SOFTWARE SO HAS A VERY SMALL ATTACK SURFACE
// ... YOU GET THE IDEA.  COME UP WITH WO OR MORE SCHEMES TO ENSURE THAT THE TERMINATION OF A CLOAK PROCESS IS DETECTED AND TRIGGERS SHUTDOWN OR SOME OTHER DEFENSE
TASK( tmCloakF )
if( pTaskP )
{
    //etThread.traceF( tinP , T("hiring cloak") ) ;
    countT idDeathType = etThread.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_CLOAK , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO | flHIRE_WAIT , nicNameC() ) ;
    //etThread.traceF( tinP , T("error: cloak has died [idDeathType]:    ")+TF2(idDeathType,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;    
    //U:: BUG: idDeathType IS 0 WHEN CLOAK IS KILLED WITHIN PROCESS EXPLORER
    //U:: TEST idDeathType AND IF CLOAK WAS MURDERED THEN DON'T NAP BEFORE SHUTTING DOWN

    //etThread.traceF( tinP , T("cloak has died ; napping for a TOCK") ) ;
    ether.osSleepF( tinP , TOCK ) ;
    if( !ether )
    {
        //etThread.traceF( tinP , T("i have not yet been fired, so cloak's death is unexplained") ) ;
        //etThread.traceF( tinP , T("shutting down this computer for security (not really)") ) ;    
        //U::etThread.osFireF( tinP , 1 ) ;
        //etThread.traceF( tinP , T("this computer has been told to shut down (not really)") ) ;    
    }
}
DONE( tmCloakF )
#endif

TASK( tmEatTelemetrySysF )
if( pTaskP && pTaskP->c1 )
{
    countT* pcArgP = (countT*)pTaskP->c1 ;
    boolT&       bQuitEatingP               =   *(boolT*)pcArgP[ 0 ] ;
    countT       idMemorySpaceP             =            pcArgP[ 1 ] ;
    countT&      cLeverIdMemoryP            =  *(countT*)pcArgP[ 2 ] ;
    switchC&     swMemorySpaceP             = *(switchC*)pcArgP[ 3 ] ;
    countT       idMinuteZeP                =            pcArgP[ 4 ] ;
    countT&      cHamburgersP               =  *(countT*)pcArgP[ 5 ] ;
    flagsT&      fliPendingSnapShotRequestP =  *(flagsT*)pcArgP[ 6 ] ;
    osTextT*     postSnapShotRequestP       =  (osTextT*)pcArgP[ 7 ] ;
    batonC&      bCompileReportP            =  *(batonC*)pcArgP[ 8 ] ;
    etThread.delF( tinP , pcArgP ) ;

    tinP.c4Tell.c1 = idMemorySpaceP ;

    TN( tb4 , "    " ) ;

    //CONoUTrAW3( "tmEatTelemetrySysF [idMemorySpaceP]: " , idMemorySpaceP , "\r\n" ) ;

    //if( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL ) etThread.osThreadF( TaRG1( tmYellF ) ) ;

    TELL( "setting rush" )
    etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;

    TELL( "getting memory space structure" )
    swMemorySpaceP.grabF( tinP , TAG( TAGiDnULL ) ) ;
    __( !swMemorySpaceP.idSlotOfLeverF( tinP , idMemorySpaceP ) ) ;
    cLeverIdMemoryP = idMemorySpaceP ;
    memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpaceP ;
    swMemorySpaceP.ungrabF( tinP ) ;

    TELL( "constructing period data structure" )
    stackC stPeriodData( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_BLOB|flSTACKc_ALLOWzE , sizeof( periodDataS ) ) ;
    stPeriodData << (byteT*)0 ;
    new( 0 , tinP , (byteT*)&stPeriodData[ 1 ] , sizeof( periodDataS ) ) periodDataS( tinP , etThread ) ;

    TELL( "launching tmReportF" )
    signC sgnDone_tmReportF_( tinP , TAG( TAGiDnULL ) ) ;
    etThread.osThreadF( tinP , countTC() , tmReportF , &sgnDone_tmReportF_ , flTHREADlAUNCH_null , 0 , (countT)&bQuitEatingP , idMemorySpaceP , (countT)&stPeriodData , (countT)&memorySpace , idMinuteZeP , (countT)&fliPendingSnapShotRequestP , (countT)postSnapShotRequestP , (countT)&bCompileReportP ) ;

    THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
    {
        TELL( "constructing telemetry books" ) //THE NEXT LINE WILL BLOCK UNTIL A BOOK ENTRY IS WRITTEN , SO I WILL NOT BE ABLE TO QUIT UNTIL THAT HAPPENS

        //U:: THE NEXT LINE USED TO SPECIFY THE DELETE FLAG, BUT AS OF 20131222@1558 THIS CAUSES FAILURES ; DELETE FLAG REMOVED WITHOUT ANALYSIS

        //etThread.traceF( tinP , T("tmEatTelemetrySysF / ct'ing bksTelemetrySys [idMemorySpaceP]: ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        booksC bksTelemetrySys( tinP , TAG( TAGiDnULL ) , "bksTelemetrySys" , ifcIDsTATEsPACE_MULTIPLEaDAMS , idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL ? flBOOKSc_null : flBOOKSc_USEgRABmEMORYsPACEoVERRIDE , 0 , 0 , 0 , 0 , 0 , idMemorySpaceP , &bQuitEatingP ) ;
        //etThread.traceF( tinP , T("tmEatTelemetrySysF / ct'ed bksTelemetrySys [idMemorySpaceP]: ")+TF2(idMemorySpaceP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

        if( !(const poopC&)bksTelemetrySys )
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
            while( !bQuitEatingP && !POOP )
            {
                TELL( "eating 1" )
                while( !bQuitEatingP && !POOP )
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
                    TELL( "waiting to read a new telemetry item / U:: 3" )
                    HANDLEaPPnOTEScOUNTcLASS ch = hRead ;
                    TELL( "waiting to read a new telemetry item / U:: 2" )
                    //etThread.traceF( tinP , T("eating telemetry at [idDebug,off,idBook]:    ")+TF2(idDebug,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(ch.c1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(ch.c2,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    boolT bDelete = bksTelemetrySys.readF( tinP , pbi , cbi , hRead , flBOOKScrEAD_STILLhUNGRYiSoK ) ;
                    TELL( "waiting to read a new telemetry item / U:: 1" )
                    //tinP.pc Utility[ 0 ] -- ; //U::TO FIND A BUG
                    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 7") ) ;
    
                    TELL( "waiting to read a new telemetry item / U:: 0" )
                    if( !pbi )
                    {
                        //etThread.traceF( tinP , T("read returned null") ) ;
                        TELL( "readF returned null" )
                        cbi = cbiSave ;
                        hRead = hReadSave ;
                        break ;
                    }
                    else
                    {
                        TELL( "readF returned telemetry" )
                        //etThread.traceF( tinP , T("tmEatTelemetrySysF: readF returned telemetry") ) ; //U:: TO FIND A BUG
                        __( cbi - cbiSave ) ; //SHOULD ALWAYS GET THE ENTIRE SHEBANG
        
                        if( bBookHead )
                        {
                            //etThread.traceF( tinP , T("read returned head") ) ;
                            TELL( "parsing head" )
                            telemetryBookHeadS& head = *(telemetryBookHeadS*)pbi ;
                            while( !head.finger2 && !bQuitEatingP ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                            if( bQuitEatingP ) break ;

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
                            //etThread.traceF( tinP , T("read returned body") ) ;
                            TELL( "got a hamburger" )
                            countT idHamburger = incv02AM( cHamburgersP ) ; // OPERATOR ++ CAN BE USED FOR SPEED IF ACCURACY IS NOT NEEDED; AS OF THIS WRITING ACCURACY IS NOT NEEDED
                            //CONoUTrAW5( "tmEatTelemetrySysF [idMemorySpace,idHamburger]: " , idMemorySpaceP , " " , idHamburger , "\r\n" ) ;
    
                            ++ idCycle ;
        
                            TELL( "waiting for finger2 to be set in telemetry" )
                            tellS& told = *(tellS*)pbi ;
                            while( !told.finger2 && !bQuitEatingP ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                            if( bQuitEatingP ) break ;
                            TELL( "checking fingers" )
                            __( getNegAM( told.finger1 ) - FINGERnEG_TELEMETRY1 ) ;
                            __( getNegAM( told.finger2 ) - FINGERnEG_TELEMETRY2 ) ;
        
                            countT& fingerTail = *(countT*)( pbi + sizeof( tellS ) + told.cbNote ) ;
                            while( !fingerTail && !bQuitEatingP ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
                            if( bQuitEatingP ) break ;
                            __( getNegAM( fingerTail ) - FINGERnEG_BOOK0cwRITEtAIL ) ;
    
                            TELL( "tallying" )
                            stPeriodData.grabF( tinP , TAG( TAGiDnULL ) ) ;
                            periodDataS& pd = *(periodDataS*)&stPeriodData[ 1 ] ;
                            pd.cLeverIdType = told.idType ;
                            ++ pd.swEventTally ;
                            stPeriodData.ungrabF( tinP ) ;
        
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
                                switch( told.idType )
                                {
                                    case ifcIDtYPEtELLsYS_GLObEGINcT :
                                    {
                                        _IO_
                                        //etThread.traceF( tinP , T("ifcIDtYPEtELLsYS_GLObEGINcT [osPid]: ")+TF4(told.osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa) ) ;
                                        if( told.osPid != tinP.osPid ) etThread.osThreadF( TaRG1( tmVultureF ) , told.osPid ) ;
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_GLObEGINdT :
                                    {
                                        _IO_
                                        //etThread.traceF( tinP , T("ifcIDtYPEtELLsYS_GLObEGINdT [osPid]: ")+TF4(told.osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa) ) ;
                                        break ;
                                    }
                                }
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
                                    case ifcIDtYPEtELLsYS_SNAPsHOT :
                                    {
                                        TELL( "SNAPsHOT" )

                                        ZE( flagsT , mask ) ;
                                        countT cSpace = ifcIDmEMORYsPACE_max - ifcIDmEMORYsPACE_min + 1 ;
                                        while( cSpace -- ) mask = mask << 1 | 1 ;
                                        if( !setIfZeAM( fliPendingSnapShotRequestP , mask ) )
                                        {
                                            thirdC::c_strcpyIF( tinP , postSnapShotRequestP , pbNote ) ;
                                            LOGrAW( T("snapshot: \"")+T(pbNote)+T("\"\r\n") ) ; //U::
                                        }
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_LOG :
                                    {
                                        TELL( "LOG" )
                                        osTextT* postEntry = postOldC( tinP , etThread , pbNote ) ; ___( postEntry ) ;
                                        countT pczLever[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , told.idThread , 0 } ;
                                        stPeriodData.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                        periodDataS& pd = *(periodDataS*)&stPeriodData[ 1 ] ;
                                        pd.pczLeverThread = pczLever ;
                                        //etThread.traceF( tinP , T("before ++++ [swsLog.cFlavors,swsLog] :    ")+TF2(pd.swsLog.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(pd.swsLog,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                        pd.swsLog << postEntry ; postEntry = 0 ;
                                        //etThread.traceF( tinP , T("after  ++++ [swsLog.cFlavors,swsLog] :    ")+TF2(pd.swsLog.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(pd.swsLog,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                        stPeriodData.ungrabF( tinP ) ;
            
                                        //CONoUTrAW( T("log: \"")+T(pbNote)+T("\"\r\n") ) ; //U::
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_TINcTP :
                                    case ifcIDtYPEtELLsYS_TINcTI :
                                    {
                                        TELL( "TINcTP TINcTI" )
                                        if( told.cbNote == sizeof( tellInfoSysTinS ) )
                                        {
                                            //etThread.traceF( tinP , T("ifcIDtYPEtELLsYS_TINcTP/I") ) ;
                                            tellInfoSysTinS& note = *(tellInfoSysTinS*)pbNote ;
            
                                            {
                                                tinEntryS entry( tinP , note.idSerial , told.osTid , told.osPid , told.idType == ifcIDtYPEtELLsYS_TINcTI , note.ip , note.idTin , told.idThread , note.postThreadName , note.idTinNamed , note.idLineCt , note.idiFileCt ) ;
                
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("thread ++++ :    ")+TF2(told.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+T(note.postThreadName) ) ;
                                                }

                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , told.osPid , told.idThread , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;

                                                //etThread.traceF( tinP , T("before ++++ swsTin [cPlates,pczLeverAdam]:    ")+TF2(memorySpace.swsTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(memorySpace.pczLeverAdam) ) ;
                                                //etThread.traceF( tinP , T("before ++++ [swsTin.cFlavors     ,swsTin     ] :    ")+TF2(memorySpace.swsTin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                //etThread.traceF( tinP , T("before ++++ [swsTinWhere.cFlavors,swsTinWhere] :    ")+TF2(memorySpace.swsTinWhere.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTinWhere,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                                ZE( countT , ids ) ;
                                                memorySpace.swsTin.sinkF( tinP , ids , (byteT*)&entry , flSTACKsINK_UNIQUE , subtract_tinEntryS_F ) ;
                                                if( !ids ) { BLAMMO ; }
                                                //else     { etThread.traceF( tinP , T("++ [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(entry.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ; }

                                                memorySpace.swsTinWhere.sinkF( tinP , countTC() , (byteT*)&entry , flSTACKsINK_UNIQUE , subtract_tinEntryS_F ) ;

                                                //etThread.traceF( tinP , T("after ++++ swsTin [cPlates,pczLeverAdam]:    ")+TF2(memorySpace.swsTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(memorySpace.pczLeverAdam) ) ;
                                                //etThread.traceF( tinP , T("after  ++++ [swsTin.cFlavors     ,swsTin     ] :    ")+TF2(memorySpace.swsTin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                //etThread.traceF( tinP , T("after  ++++ [swsTinWhere.cFlavors,swsTinWhere] :    ")+TF2(memorySpace.swsTinWhere.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTinWhere,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                                //if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) )
                                                //{
                                                //    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                                //    do
                                                //    {
                                                //        tinEntryS& wo = *(tinEntryS*)&memorySpace.swsTin.downF( tinP , hDown ) ;
                                                //        if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) ) etThread.traceF( tinP , T("w  [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(wo.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                                //    }
                                                //    while( !ether && ~hDown ) ;
                                                //}

                                                memorySpace.grab.ungrabF( tinP ) ;
        
                                                //if( !etThread.strCompareF( tinP , T(entry.postThreadName) , T("tm1F") ) )
                                                //{
                                                //    OStEXT(  ostoSay , TUCK ) ;
                                                //    OStEXTAK( ostoSay , "+ [idThread,idTin,osTid,postThreadName]: " ) ;
                                                //    OStEXTC(  ostoSay , entry.idThread , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , " ) ;
                                                //    OStEXTC(  ostoSay , entry.idTin , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , " ) ;
                                                //    OStEXTC(  ostoSay , entry.osTid , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , \"" ) ;
                                                //    OStEXTA(  ostoSay , entry.postThreadName ) ;
                                                //    OStEXTAK( ostoSay , "\"\r\n" ) ;
                                                //
                                                //    CONoUTrAW( ostoSay ) ;
                                                //}

                                                //LOGrAW5( "TINcTP [cFlavors,cPlatesAll]:" , memorySpace.swsTin.cFlavorsF( tinP ) , " " , memorySpace.swsTin.cPlatesAllF( tinP ) , "\r\n" ) ;
                                                //etThread.traceF( tinP , T("U::: tinS ct told [&told,idThread,postThreadName]: ")+TF2((countT)&told,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(told.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                            }
                                        }
            
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_TINdTI :
                                    case ifcIDtYPEtELLsYS_TINdTP :
                                    {
                                        TELL( "TINdTI TINdTP" )
                                        if( told.cbNote == sizeof( tellInfoSysTinS ) )
                                        {
                                            //etThread.traceF( tinP , T("ifcIDtYPEtELLsYS_TINdTP/I") ) ;
                                            tellInfoSysTinS& note = *(tellInfoSysTinS*)pbNote ;
                                            {
                                                tinEntryS entry( tinP , note.idSerial , told.osTid , told.osPid , told.idType == ifcIDtYPEtELLsYS_TINdTI , note.ip , note.idTin , told.idThread , note.postThreadName , note.idTinNamed , note.idLineCt , note.idiFileCt ) ;
                                                //if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) ) etThread.traceF( tinP , T("-  [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(entry.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("thread ---- :    ")+TF2(told.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+T(note.postThreadName) ) ;
                                                }
                        
                                                ZE( countT , ids ) ;
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , told.osPid , told.idThread , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;

                                                //etThread.traceF( tinP , T("before ---- [swsTin.cFlavors     ,swsTin     ] :    ")+TF2(memorySpace.swsTin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                //etThread.traceF( tinP , T("before ---- [swsTinWhere.cFlavors,swsTinWhere] :    ")+TF2(memorySpace.swsTinWhere.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTinWhere,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                                //if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) )
                                                //{
                                                //    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                                //    do
                                                //    {
                                                //        tinEntryS& wo = *(tinEntryS*)&memorySpace.swsTin.downF( tinP , hDown ) ;
                                                //        if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) ) etThread.traceF( tinP , T("w  [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(wo.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                                //    }
                                                //    while( !ether && ~hDown ) ;
                                                //}

                                                memorySpace.swsTin.sinkF( tinP , ids , (byteT*)&entry , flSTACKsINK_QUERY , subtract_tinEntryS_F ) ;
                                                if( ids )
                                                {
                                                    //if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) ) etThread.traceF( tinP , T("-- [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(entry.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(entry.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                                    memorySpace.swsTin.extractF( 0 , tinP ) ;
                                                    if( !memorySpace.swsTin ) memorySpace.swsTin.freeF( tinP ) ;
                                                }
                                                else
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("error: tinS destruction told but entry not found in swsTin [idThread,postThreadName]: ")+TF2(told.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                                }

                                                //if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) )
                                                //{
                                                //    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                                //    do
                                                //    {
                                                //        tinEntryS& wo = *(tinEntryS*)&memorySpace.swsTin.downF( tinP , hDown ) ;
                                                //        if( !etThread.strCompareF( tinP , T("tmHireF") , T(note.postThreadName) ) ) etThread.traceF( tinP , T("w  [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(wo.idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(wo.idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(note.postThreadName) ) ;
                                                //    }
                                                //    while( !ether && ~hDown ) ;
                                                //}

                                                ids = 0 ; // memorySpace.swsTin memorySpace.swsTinWhere ARE REDUNDANT SO THAT tmWhereF tmWhereRptF DO NOT TOUCH THE stackC OBJECT THAT tmRptMainF USES
                                                memorySpace.swsTinWhere.sinkF( tinP , ids , (byteT*)&entry , flSTACKsINK_QUERY , subtract_tinEntryS_F ) ;
                                                if( ids )
                                                {
                                                    memorySpace.swsTinWhere.extractF( 0 , tinP ) ;
                                                    if( !memorySpace.swsTinWhere ) memorySpace.swsTinWhere.freeF( tinP ) ;
                                                }
                                                else
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("error: entrty not found in swsTinWhere") ) ;
                                                }

                                                //etThread.traceF( tinP , T("after ---- swsTin [cPlates,pczLeverAdam]:    ")+TF2(memorySpace.swsTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(memorySpace.pczLeverAdam) ) ;
                                                //etThread.traceF( tinP , T("after  ---- [swsTin.cFlavors     ,swsTin     ] :    ")+TF2(memorySpace.swsTin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                //etThread.traceF( tinP , T("after  ---- [swsTinWhere.cFlavors,swsTinWhere] :    ")+TF2(memorySpace.swsTinWhere.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsTinWhere,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                                memorySpace.grab.ungrabF( tinP ) ;
        
                                                //if( !etThread.strCompareF( tinP , T(entry.postThreadName) , T("tm1F") ) )
                                                //{
                                                //    OStEXT(  ostoSay , TUCK ) ;
                                                //    OStEXTAK( ostoSay , "- [idThread,idTin,osTid,postThreadName]: " ) ;
                                                //    OStEXTC(  ostoSay , entry.idThread , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , " ) ;
                                                //    OStEXTC(  ostoSay , entry.idTin , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , " ) ;
                                                //    OStEXTC(  ostoSay , entry.osTid , 0 ) ;
                                                //    OStEXTAK( ostoSay , " , \"" ) ;
                                                //    OStEXTA(  ostoSay , entry.postThreadName ) ;
                                                //    OStEXTAK( ostoSay , "\"\r\n" ) ;
                                                //
                                                //    CONoUTrAW( ostoSay ) ;
                                                //}

                                                //LOGrAW5( "TINdTP [cFlavors,cPlatesAll]:" , memorySpace.swsTin.cFlavorsF( tinP ) , " " , memorySpace.swsTin.cPlatesAllF( tinP ) , "\r\n" ) ;
                                            }
                                        }    
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_SEXcT :
                                    {
                                        TELL( "SEXcT" )
                                        if( told.cbNote == sizeof( tellInfoSysSexS ) )
                                        {
                                            tellInfoSysSexS& note = *(tellInfoSysSexS*)pbNote ;
            
                                            {
                                                sexEntryS entry( tinP , note.osPid , note.postName , note.expCbDrop , note.expSlots , note.pSex , note.idLineCt , note.idiFileCt ) ;
                
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , note.osPid , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;
                                                //etThread.traceF( tinP , T("before ++++ [swsSex.cFlavors,swsSex] :    ")+TF2(memorySpace.swsSex.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsSex,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.swsSex.sinkF( tinP , countTC() , (byteT*)&entry , flSTACKsINK_UNIQUE , subtract_sexEntryS_F ) ;
                                                //etThread.traceF( tinP , T("after  ++++ [swsSex.cFlavors,swsSex] :    ")+TF2(memorySpace.swsSex.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsSex,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                //etThread.traceF( tinP , T("swsSex ++++ [cPlatesNew]:    ")+TF2(memorySpace.swsSex,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                memorySpace.grab.ungrabF( tinP ) ;
                                            }
                                        }
            
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_SEXdT :
                                    {
                                        TELL( "SEXdT" )
                                        if( told.cbNote == sizeof( tellInfoSysSexS ) )
                                        {
                                            tellInfoSysSexS& note = *(tellInfoSysSexS*)pbNote ;
                                            {
                                                sexEntryS entry( tinP , note.osPid , note.postName , note.expCbDrop , note.expSlots , note.pSex , note.idLineCt , note.idiFileCt ) ;
                        
                                                ZE( countT , ids ) ;
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , note.osPid , 0 } ;
                                                //etThread.traceF( tinP , T("before ---- [swsSex.cFlavors,swsSex] :    ")+TF2(memorySpace.swsSex.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsSex,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;
                                                memorySpace.swsSex.sinkF( tinP , ids , (byteT*)&entry , flSTACKsINK_QUERY , subtract_sexEntryS_F ) ;
                                                if( ids )
                                                {
                                                    //etThread.traceF( tinP , T("swsSex ---- [cPlatesOld,ids]:    ")+TF2(memorySpace.swsSex,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(ids,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                    memorySpace.swsSex.extractF( 0 , tinP ) ;
                                                    if( !memorySpace.swsSex ) memorySpace.swsSex.freeF( tinP ) ;
                                                }
                                                else
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("error: entry not found in swsSex") ) ;
                                                }
                                                //etThread.traceF( tinP , T("after  ---- [swsSex.cFlavors,swsSex] :    ")+TF2(memorySpace.swsSex.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsSex,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.grab.ungrabF( tinP ) ;
                                            }
                                        }    
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_NAPKINfORMAT :
                                    case ifcIDtYPEtELLsYS_NAPKINaTTACH :
                                    {
                                        TELL( "ifcIDtYPEtELLsYS_NAPKINfORMAT ifcIDtYPEtELLsYS_NAPKINaTTACH" )
                                        if( told.cbNote == sizeof( tellInfoSysNapkinS ) )
                                        {
                                            tellInfoSysNapkinS& note = *(tellInfoSysNapkinS*)pbNote ;
                                            {
                                                napkinEntryS entry( tinP , note.osPid , note.postName , note.pbData , note.cbData , note.idLineCt , note.idiFileCt ) ;
                
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , note.osPid , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;
                                                //etThread.traceF( tinP , T("before ++++ [swsNapkin.cFlavors,swsNapkin] :    ")+TF2(memorySpace.swsNapkin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsNapkin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.swsNapkin.sinkF( tinP , countTC() , (byteT*)&entry , flSTACKsINK_UNIQUE , subtract_napkinEntryS_F ) ;
                                                //etThread.traceF( tinP , T("swsNapkin ++++ [cPlatesNew]:    ")+TF2(memorySpace.swsNapkin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                //etThread.traceF( tinP , T("after  ++++ [swsNapkin.cFlavors,swsNapkin] :    ")+TF2(memorySpace.swsNapkin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsNapkin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.grab.ungrabF( tinP ) ;
                                            }
                                        }    
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_NAPKINdETACH :
                                    {
                                        TELL( "ifcIDtYPEtELLsYS_NAPKINfORMAT ifcIDtYPEtELLsYS_NAPKINaTTACH" )
                                        if( told.cbNote == sizeof( tellInfoSysNapkinS ) )
                                        {
                                            tellInfoSysNapkinS& note = *(tellInfoSysNapkinS*)pbNote ;
                                            {
                                                napkinEntryS entry( tinP , note.osPid , note.postName , note.pbData , note.cbData , note.idLineCt , note.idiFileCt ) ;
                        
                                                ZE( countT , ids ) ;
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , note.osPid , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;
                                                //etThread.traceF( tinP , T("before ---- [swsNapkin.cFlavors,swsNapkin] :    ")+TF2(memorySpace.swsNapkin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsNapkin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.swsNapkin.sinkF( tinP , ids , (byteT*)&entry , flSTACKsINK_QUERY , subtract_napkinEntryS_F ) ;
                                                if( ids )
                                                {
                                                    //etThread.traceF( tinP , T("swsNapkin ---- [cPlatesOld,ids]:    ")+TF2(memorySpace.swsNapkin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(ids,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                    memorySpace.swsNapkin.extractF( 0 , tinP ) ;
                                                    if( !memorySpace.swsNapkin ) memorySpace.swsNapkin.freeF( tinP ) ;
                                                }
                                                else
                                                {
                                                    _IO_
                                                    //etThread.traceF( tinP , T("error: entry not found in swsNapkin") ) ;
                                                }
                                                //etThread.traceF( tinP , T("after  ---- [swsNapkin.cFlavors,swsNapkin] :    ")+TF2(memorySpace.swsNapkin.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsNapkin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.grab.ungrabF( tinP ) ;
                                            }
                                        }    
                                        break ;
                                    }
                                    case ifcIDtYPEtELLsYS_PROCESSgLOBAL1scT :
                                    {
                                        TELL( "ifcIDtYPEtELLsYS_PROCESSgLOBAL3scT" )
                                        if( told.cbNote == sizeof( tellInfoSysProcessGlobal1S ) )
                                        {
                                            tellInfoSysProcessGlobal1S& note = *(tellInfoSysProcessGlobal1S*)pbNote ;
                                            {
                                                processGlobal3EntryS entry( tinP , note.osPid , note.pbEarlyGrain , note.cGrains ) ;
                
                                                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                                countT pczLeverAdamMe[] = { told.idAdamRoot ? told.idAdamRoot : - 1 , told.idAdam ? told.idAdam : - 1 , note.osPid , 0 } ;
                                                memorySpace.pczLeverAdam = pczLeverAdamMe ;
                                                //etThread.traceF( tinP , T("before ++++ [swsProcessGlobal3.cFlavors,swsProcessGlobal3] :    ")+TF2(memorySpace.swsProcessGlobal3.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsProcessGlobal3,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.swsProcessGlobal3.sinkF( tinP , countTC() , (byteT*)&entry , flSTACKsINK_UNIQUE , subtract_processGlobal3EntryS_F ) ;
                                                //etThread.traceF( tinP , T("swsProcessGlobal3 ++++ [cPlatesNew]:    ")+TF2(memorySpace.swsProcessGlobal3,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                //etThread.traceF( tinP , T("after  ++++ [swsProcessGlobal3.cFlavors,swsProcessGlobal3] :    ")+TF2(memorySpace.swsProcessGlobal3.cFlavorsF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tb4+TF2(memorySpace.swsProcessGlobal3,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                                memorySpace.grab.ungrabF( tinP ) ;
                                            }
                                        }    
                                        break ;
                                    }
                                }
                            }
    
                            cbi = sizeof( telemetryBookHeadS ) ;
                        }
            
                        TELL( "maybe deleting hamburger" )
                        if( bDelete ) PUSE( tinP , *(byteT**)&pbi ) ;
                        else          pbi = 0 ;
                    }
            
                    bBookHead = !bBookHead ;
                }
                if( bQuitEatingP ) break ;
            
                TELL( "napping for a quarter tock" )
                ++ s ; etThread.osSleepF( tinP , TOCK >> 2 ) ;
                //CONoUTrAW( "." ) ;
            }
            //etThread.traceF( tinP , T("tmEatTelemetrySysF / 6") ) ;
        }

        if( idMemorySpaceP == 4 )
        {
            countT foo = 2 ;
        }

        //U::THE NEXT LINE NO LONGER WILL WORK BECAUSE THE DELETE FLAG HAS ALREADY BEEN SPECIFIED WHEN CT fileC ; IT ALSO WOULDN'T WORK BECAUSE IT DOES NOT CHANGE THE FLAGS THAT ARE USED TO CT bookC INSTANCE
        if( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL ) bksTelemetrySys.fileFlagsRefF() &= ~flFILEc_DELETE ; // I AM PROBABLY READING THE CURRENT bookC, WHICH IS STILL OPEN FOR WRITING SO CANNOT BE DELETED NOW
        //etThread.traceF( tinP , T("tmEatTelemetrySysF / 5") ) ;
    }
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 4") ) ;
    THREADmODE3rESTORE

    TELL( "waiting for tmReportF to end" )
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 3") ) ;
    sgnDone_tmReportF_.waitF( tinP ) ;

    TELL( "purging period data" )
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 2") ) ;
    if( stPeriodData )
    {
        countT cToDo = stPeriodData ;
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            periodDataS* ppd = (periodDataS*)&stPeriodData.upF( tinP , hWalk ) ;
            DELzOMBIE( ppd ) ;
            stPeriodData.extractF( 0 , tinP ) ;
        }
        while( ~hWalk && -- cToDo ) ;
    }
    TELL( "cleaning up 1" )
    //etThread.traceF( tinP , T("tmEatTelemetrySysF / 1") ) ;
}
TELL( "cleaning up 0" )
//etThread.traceF( tinP , T("tmEatTelemetrySysF / 0") ) ;
DONE( tmEatTelemetrySysF )

TASK( tmFireAllF )
if( pTaskP )
{
    etherC& etRock = etherC::etRockIF( tinP ) ;
    //U::if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_NOsYSTEMtHREADS ) ) { __( tinP.monitor.idThread - ifcIDtHREADlOW_tmFireAllF ) ; }

    {
        slabS& slab = slabS::slabF() ;
        homeS& home = homeS::homeIF() ;
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        //etRock.traceF( tinP , T("tmFireAllF is napping; wake me up by setting flHOMEs_FIREtHIShOME") ) ;

        while
        (
            !ether
            && !etThread
            && !( slab.flagsi & fliSLABs_QUIT )
            && !( F(home.flags) & flHOMEs_FIREtHIShOME )
            && ( !home.idVersionIpdosBan || !home.idVersionIpdosMe || home.idVersionIpdosBan < home.idVersionIpdosMe )
        )
        {
            ether.osSleepF( tinP , TOCK >> 3 ) ;
        }

        etRock.traceF( tinP , T("tmFireAllF stopped napping") ) ;

        //THIS IS NOT NEEDED BECAUSE sListen IS A QUITTER SOCKET SO tmWatchF WILL CONNECT TO IT
        //{   //20160419@1731: ADDED THIS BLOCK AND REMOVED idpKiller VARIABLE WHICH WAS NOT USED; DONE TO FIX QUIT QUALITY ; CONJ: THIS BLOCK WAS ACCIDENTALLY DELETED
        //    etRock.traceF( tinP , T("tmFireAllF/ awakened ; connecting to idPortKernelMonitor: ")+TF2(home.idPortKernelMonitor,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
        //
        //    socketC sockm( tinP , etThread , TAG( TAGiDnULL ) ) ;
        //    sockm.connectF( tinP , home.idPortKernelMonitor , socketC::nicNameIF( tinP , etThread , T("10.1.1.1") ) ) ;
        //    etRock.traceF( tinP , T("tmFireAllF/ perhaps connected to idPortKernelMonitor") ) ;
        //}

        etRock.traceF( tinP , T("tmFireAllF calling etherFireImpersonateMonitorIF") ) ;
        etherC::etherFireImpersonateMonitorIF( tinP ) ;
        etRock.traceF( tinP , T("tmFireAllF called  etherFireImpersonateMonitorIF") ) ;

        //home.flags |= flHOMEs_SUPPRESStELLS ;

        if( home.idVersionIpdosMe && home.idVersionIpdosBan && home.idVersionIpdosMe <= home.idVersionIpdosBan )
        {
            osTextT postNote[] =
            {
                postIPDOSlONG "\r\n"
                "IPDOS (tm)\r\n"
                "http://ideafarm.com\r\n"
                "\r\n"
                "An old version of IPDOS (tm) is active on this computer.  Please download\r\n"
                "a current version.  This version has been disabled.\r\n"
                "\r\n"
                "Thank you for using IPDOS (tm).\r\n"

            } ;

            etThread.boxPutF( tinP , T("///desk/IdeaFarm " "(tm) Warning (disabled).txt") , postNote , sizeof postNote - 1 ) ;
        }
    }

    TN( tc , "\r\n" ) ;
    TN( tb , " " ) ;
    
    //CODE SYNC: ec40104 ME
    {
        countT pchb[ CfIREaLLsLOTS ] ;
    
        homeS& home = homeS::homeIF() ;
        for( countT off = 0 ; off < CfIREaLLrANKS - 1 ; off ++ ) //I DO NOT FIRE THE HIGHEST GROUP, WHICH IS USED ONLY BY ME
        {
            if( home.pFireAll[ off ].cHearts && home.pFireAll[ off ].cHeartBeats )
            {
                //CONoUTrAW3( "firing group " , off + 1 , "\r\n" ) ;
                etRock.traceF( tinP , T("firing group [off+1]:    ")+TF2(off+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                //etThread.beeClickF( tinP , TUCK + 0x10 * off , TOCK * 4 ) ;

                home.pFireAll[ off ].bFire ++ ;
                //etThread.strokeF( tinP , T("firing group ")+TF1(off+1)+tc ) ;
                etThread.memSetF( tinP , (byteT*)pchb , sizeof pchb ) ;
                ZE( countT , idLook ) ;
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                for(;;)
                {
                    if( POOP )
                    {
                        LOGrAW( "tmFireAllF/POOP is set\r\n" ) ;
                        break ;
                    }

                    if( etThread )
                    {
                        LOGrAW( "tmFireAllF/etThread is impotent\r\n" ) ;
                        break ;
                    }

                    pchb[ ( ++ idLook ) % ( sizeof pchb / sizeof pchb[ 0 ] ) ] = home.pFireAll[ off ].cHeartBeats ;

                    ++ s ; etThread.osSleepF( tinP , TOCK >> 2 ) ; //PRESUMED DEAD IF STOPPED FOR TOCK >> 2

                    countT cHearts     = home.pFireAll[ off ].cHearts ;
                    countT cHeartBeats = home.pFireAll[ off ].cHeartBeats ;
                    if( !cHearts )
                    {
                        etRock.traceF( tinP , T("0 hearts remain [off+1]:    ")+TF2(off+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                        break ;
                    }
                    else if( cHeartBeats == pchb[ ( idLook + 1 ) % ( sizeof pchb / sizeof pchb[ 0 ] ) ] )
                    {
                        etRock.traceF( tinP , T("some hearts remain but none of them are beating [off+1,cHearts]:    ")+TF2(off+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cHearts,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                        break ;
                    }
                    else
                    {
                        etRock.traceF( tinP , T("some beating hearts remain [off+1,cHearts,cHeartBeats]:    ")+TF2(off+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cHearts,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cHeartBeats,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    }
                }
            }
        }
    }
}

//CONoUTrAW( "tmFireAllF/-" ) ; //U::
DONE( tmFireAllF )

TASK( tmFireMyselfF )
etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
YELL( "napping before firing myself")
{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TOCK * 0x8 /*, 0 , flSLEEP_TALK*/ ) ;
    //++ s ; ether.osSleepF( tinP , TOCK * 0xd /*, 0 , flSLEEP_TALK*/ ) ;
}
YELL( "firing myself")
//CONoUTrAW( "firing myself\r\n" ) ;
ether.etherFireImpersonateMonitorIF( tinP ) ;
YELL( "cleaning up")
DONE( tmFireMyselfF )

#if defined( NEVERdEFINED )

TASK( tmTestImpotenceF )

etThread.emailFactoryReportF( tinP , T("i will test impotence after napping TOCK << 4") ) ;

sleepC s( tinP , TAG( TAGiDnULL ) ) ;
++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;

if( !ether )
{
    etThread.emailFactoryReportF( tinP , T("testing impotence") ) ;
    __1
}

DONE( tmTestImpotenceF )
    
TASK( tmKillYourselfImmediatelyF )

etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;

homeS& home = homeS::homeIF() ;

countT cDo = 8 ;
while( cDo -- )
{
    if( !cDo ) etThread.emailFactoryReportF( tinP , T("dying in 1/2 day") ) ;

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TICK << 7 ) ;
}

etThread.emailFactoryReportF( tinP , T("dying in 1/2 hour") ) ;

{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TICK << 3 ) ;
}

etThread.traceF( tinP , T("setting flHOMEs_KILLsELFiMMEDIATELY") ) ;
home.flags |= flHOMEs_KILLsELFiMMEDIATELY ;
BLAMMO ;

DONE( tmKillYourselfImmediatelyF )

    //U::REMOVE IN PRODUCTON ; THIS IS FOR RESOURCE LEAK TESTING
    DWORD WINAPI tmGorillaRawF( VOID* pvP )
    {
        return 0 ;
    }
    TASK( tmGorillasRawF )
    if( pTaskP )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether && !POOP )
        {
            countT cDo = TUCK >> 4 ;
            while( cDo -- )
            {
                SECURITYaTTRIBUTE_saUNRESTRICTED( 0 ) ;
                BOSnOvALUE( WHATgbo , SetLastError( 0 ) )
                ZE( DWORD , osTid ) ;
                BOS( WHATgbo , BOSoK , CreateThread( &sa , TOCK , tmGorillaRawF , 0 , 0 , &osTid ) )
                BOSpOOP
                HANDLE oshThread = (HANDLE)tinP.brcRaw ;
                if( oshThread )
                {
                    BOS( WHATgbo , BOSoK , CloseHandle( oshThread ) )
                    BOSpOOP
                }
                else
                {
                    BOSdOnOTtEST( WHATgbo , GetLastError() )
                    countT idError = tinP.brcRaw ;
                    LOGrAW3( "[idError]: " , idError , "\r\n" ) ;
                }
            }
    
            ++ s ; ether.osSleepF( tinP , TOCK << 1 ) ;
        }
    }
    DONE( tmGorillasRawF )

#endif

TASK( tmHireF )
if( pTaskP && pTaskP->c1 )
{
    countT& cHamburgersP = *(countT*)pTaskP->c1 ;

    //U::if( !( F(thirdC::third_flagsModeProcess2I_IF(tinP)) & flMODEpROCESS2_NOsYSTEMtHREADS ) ) { __( tinP.monitor.idThread - ifcIDtHREADlOW_tmHireF ) ; }
    
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    
        ++ s ; ether.osSleepF( tinP , TOCK * 0x4 ) ; //SLEEP TO GIVE INSTALLER TIME TO GO AWAY
        
        //U:: //SLEEP TO GIVE TELEMETRY EATERS TIME TO READ ALL TELEMETRY ALREADY BOOKED
        //U:: ZE( countT , save ) ;
        //U:: do
        //U:: {
        //U::     save = cHamburgersP ;
        //U::     ++ s ; ether.osSleepF( tinP , TOCK ) ;
        //U::     CONoUTrAW5( "tmHireF [save,cHamburgersP]: " , save , " " , cHamburgersP , "\r\n" ) ;
        //U:: }
        //U:: while( !ether && ( !save || save + 0x10 <= cHamburgersP ) ) ;
    }    

    ZE( countT , idAdamRequested ) ;
    {
        TN( tTest , "!idAdamMonitor" ) ;

        strokeS*& pstt1p = etThread.ether_pstt1_processParametersI_F( tinP ) ;

        ZE( boolT , bArmed ) ;
        FORsTRINGSiN1( pstt1p )
        {
            //etThread.traceF( tinP , T("process parameter: \"")+T(psttc1)+T("\"") ) ;
            if( bArmed )
            {
                bArmed = 0 ;
                idAdamRequested = etThread.strDigitsToSCountF( tinP , psttc1 , 0 , 1 ) ;
                break ;
            }
            else if( !etThread.strCompareF( tinP , psttc1 , tTest ) ) bArmed = 1 ;
        }
    }

    if( idAdamRequested ) ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , idAdamRequested , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    else
    {
        // THIS IS THE OLD PRODUCT, WITH FULL RELAY CAPABILITY INCLUDING CIO SUPPORT FOR CONSOLE IO
        // 
        // STATUS: WORKS AOK ON MY COMPUTER BUT PEGS CPU ON DANIEL'S
        // CONSOLE ONLY SUPPORTS IO VIA CIO, WHICH IS UNNECESSARILY SLOW FOR LOCAL WORK
        // COMMENTED OUT WITH INTENT TO REDESIGN THE PACKAGE TO GET STABLE AND QUICK INITIAL PRODUCT
        // THIS INITIAL PRODUCT IS ENVISIONED AS LIKE ADOBE ACROBAT BUT FOR KNOWLEDGE TREES
        // IT WILL HAVE NO RELAY OR NETWORKING CAPABILITY
        // 
        // DO NOT DELETE THIS COMMENT; IT POINTS TO THE OLD ADAM CHAIN, WHICH IS ALMOST COMPLETELY DEBUGGED
        // PLAN
        // 
        // 1. RELEASE A KT VIEWER/EDITOR PRODUCT
        // 2. ESTABLISH QUALITY REPUTATION IN THE MARKET
        // 3. ESTABLISH RELIABLE REVENUE STREAM
        // 4. REWRITE THE MONITOR (005 CODE INTO 105), ENHANCING TO DETECT CPU SPINS
        // 5. TEST AND TUNE THE RELAY SYSTEM
        // 6. ADD RELAY CAPABILITY TO THE PRODUCT
        // 7. LEASE AND CONFIGURE A DEDICATED SERVER TO SERVE AS THE ROOT RELAY
        // 8. "TURN ON" RELAY CAPABILITY IN THE PRODUCT
        // 9. FIELD TEST AND TUNE SO USER CANNOT SEE ANY LOADING OR OTHER EFFECTS OF THE RELAY SUBSYSTEM
        // a. INCREMENTALLY ADD THE REMAINDER OF THIS ADAM SET TO THE PRODUCT
        // b. OBJECTIVE: MIGRATE THIS ADAM SET TO THE PRODUCT WHILE ENSURING ROCK SOLID BEHAVIOR IN FIELD
        // 
        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_HOMEfLAGS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    
        
    
        //if( 0xffffff == etherC::ifc_idHomeI_IF() ) ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_TIMEcARD   , T("!noTells !ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        //else                                             ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_NEWcONSOLE , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        
        //if( 0xffffff == etherC::ifc_idHomeI_IF() ) ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_TIMEcARD         , T("!noTells !ignoreFireByOperator")   , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        //else                                             ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_KERNEL3PANICdOOR , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        
        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , 0x4010ffe , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        
        //ether.osThread AdamF( tinP , ifcIDaDAM_MEMBRANEgLASS ) ;
    
        //THIS WAS THE PRODUCTION LINE UNTIL 2010.12.23, WHEN LOCAL LIST DEVELOPMENT WAS FINISHED AND DEVELOPMENT RESUMED ON THE RELAY SUBSYSTEM
        // /*if( 1 < etherC::ifc_idHomeIdisk_IF() )*/    ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_MEMBRANEgLASS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        
        //else                                          ether.osThreadF( tinP , countTC() , tmFireMyselfF ) ;
        //else                                          homeS::homeIF().flags |= flHOMEs_FIREtHIShOME ;
        
        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_ROOThTTPsERVER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_KERNEL3BANG , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
        //ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_GORILLAbANG , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        /*PROD*/ /*if( idMe == IDcOMPUTER_IPDOSmASTERcRAFTWORKoLD0 || idMe == IDcOMPUTER_IPDOSmASTERcRAFTWORKoLD0sERVER )*/ ether.ifcHireF( tinP , T("ifcIDaDAM_MONITOR") , ifcIDaDAM_MEMBRANEgLASS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    
        //U::TO FIND A BUG
        //CONoUTrAW( "setting flHOMEs_FIREtHIShOME\r\n" ) ;
        //homeS::homeIF().flags |= flHOMEs_FIREtHIShOME ;
        
        //ether.osThreadF( tinP , countTC() , tmFireMyselfF ) ;
    }
}
DONE( tmHireF )


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
//SOURCE: 5adam.510004fb.2 END
