//SOURCE: 5adam.510004fb.1 BEGIN
#define DDNAME "5adam.510004fb.1"
#define DDNUMB 0x510004fb
#define IDFILE (countT)0x0
#define postHEADER "510004fb.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510004fb.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
obsoletes 2e40104
code mine for my development: 0050104
development plan
 0050104 contained, initially, a working (but buggy) prototype
 i am to be a rewrite of that program
 same function
 simpler internal design
 as functionality is added here, remove the code from 0050104
 when 0050104 is empty, the rewrite is done
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_KERNEL2MONITOR" )/*1*/

//THIS MODULE IS RESERVED FOR MAIN THREAD FUNCTION DEFINITIONS

//ASSUME: I AM THE WOTH PROCESS TO ACCESS napHomeG SO AM ASSIGNED MEMORY SPACE 1 FOR MY EXCLUSIVE USE
//IF SO THEN THE IFC BASE GUARANTEES THAT I NEVER TOUCH SPACE 2 EXCEPT VERY EARLY (TO CONSTRUCT napHome)
//napHomeG IS MY ONLY ACHILLES HEEL; OTHER PROCESSES CAN AFFECT MY MEMORY ONLY BY CRAPPING ON napHomeG

#include postHEADER

//STATE0

TODO

//U:: ENABLE THIS WHEN ROCK SOLID ENOUGH TO LAUNCH EARLY RATHER THAN DELAYED
//etThread.osThreadF( TaRG1( tmCloakF ) ) ;
//etThread.traceF( tinP , T("napping for a quarter tick to enable base o.s. to finish initializing") ) ;
//ether.osSleepF( tinP , TICK >> 2 ) ;
//ether.traceF( tinP , T("initializing IPDOS (tm) IdeaFarm (tm) Piggyback Distributed Operating System") ) ;

//U::TO FIND A BUG
//{
//    ZE( osTextT* , postBody ) ;
//    ZE( countT   , costBody ) ;
//    //tinP.pEtScratch->boxGetShadowF( tinP , postBody , costBody , T("////factory9/x/archive/1999/!ideafarm.8.2.00000000.00000001.00000000@0000.20170131@0012.001.2a24e441984f7650ef8982bc85155e1c.00000001.data.jpg") , 1 ) ;
//    etThread.traceF( tinP , T("calling boxGetShadowF") ) ;
//    etThread.boxGetShadowF( tinP , postBody , costBody , T("////factory9/x/archive/2099/!ideafarm.8.2.00000000.00000001.20990018@0001.20190620@1125.001.6a585f340146ddf3075177c29b293bab.00000001.data.png") , 1 ) ;
//    etThread.traceF( tinP , T("called boxGetShadowF") ) ;
//    etThread.delF( tinP , postBody ) ;
//}

etherC& etRock = etherC::etRockIF( tinP ) ;
//thirdC::third_flagsModeProcess2I_IF( tinP ) |= flMODEpROCESS2_GRABoNLYwO ;

if( !ether )
{
    //stateS state( tinP , etThread ) ;

    //etThread.traceF( tinP , T("looking for the reboot setting file") ) ;
    {
        //20190812@1949: UNCONDITIONALLY SET THIS FLAG
        //GETsETTING( etThread , psttSetting , T("reboot") )
        /*if( psttSetting )*/ homeS::homeIF().flags |= flHOMEs_FIREoSoNuNHANDLEDeXCEPTION ;
        //etThread.delF( tinP , psttSetting ) ;
    }

    //U::DO THIS IFF I AM ALONE (I MIGHT HAVE JUST BEEN FIRED BY A NEWER INSTANCE OF MYSELF
    //if( IDcOMPUTER_IPDOSmASTERcRAFTWORKoLD0 != etThread.diskIdF( tinP , T("///c") ) )
    ZE( boolT , bKeep ) ;
    //etThread.traceF( tinP , T("looking for the keep setting file") ) ;
    {
        GETsETTING( etThread , psttSetting , T("keep") )
        bKeep = !!psttSetting ;
        etThread.delF( tinP , psttSetting ) ;
    }
    
    //U::__( etherC::ifc_idHomeI_IF() - etherC::ifc_idHomeIdisk_IF() ) ; // THE LOW idHomeG VALUES ARE RESERVED FOR USE BY ME; IT IS ILLEGAL TO LAUNCH AN ADAM FROM THE BASE OS CONSOLE WITHOUT SPECIFYING A HIGH !idHome VALUE (HIGH BIT SET)
    
    //etThread.traceF( tinP , T("removing obsolete drivers") ) ;
    const countT cKidsAtStart = tinP.cKidThreads ;
    if( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_DRIVER ) //WILL FAIL IF I AM HIRED AT THE COMMAND LINE
    {
        unregisterObsoleteDriversF( tinP , etThread , DDNUMB ) ;
        etThread.osDriverRemoveOldF( tinP , DDNUMB ) ;
    }

    const countT idmMin = ifcIDmEMORYsPACE_min ;
    const countT idmMax = ifcIDmEMORYsPACE_max ;

    if( !ether )
    {
        //etThread.traceF( tinP , T("launching telemetry eater threads") ) ;
        ZE( boolT , bQuitConsole ) ;
        ZE( countT , cLeverIdMemory ) ;
        ZE( countT , cHamburgers ) ;
        ZE( flagsT , fliPendingSnapShotRequest ) ;
        osTextT postSnapShotRequest[ TUCK ] = "" ;
        switchC swMemorySpace( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , cLeverIdMemory , 0 , sizeof( memorySpaceS ) ) ;
        batonC bCompileReport( tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS ) ;
        {
            ZE( countT  , timeN1 ) ;
            ZE( sCountT , timeN2 ) ;
            etThread.osTimeNowF( tinP ,  timeN1 , timeN2 ) ;
            countT idMinuteZe = timeN1 >> 0x16 ;    // 8:TUCK 01:TOCK 81:TICK 61:MINUTE(QUARTERTICK)
            for( countT idMemory = idmMin ; idMemory <= idmMax ; idMemory ++ )
            {
                if( idMemory >= ifcIDmEMORYsPACE_RESERVEDmIN && idMemory <= ifcIDmEMORYsPACE_RESERVEDmAX ) continue ;

                swMemorySpace.grabF( tinP , TAG( TAGiDnULL ) ) ;
                cLeverIdMemory = idMemory ;
                byteT* pbms = (byteT*)&(countT&)swMemorySpace ;
                memorySpaceS& memorySpace = *new( 0 , tinP , pbms , sizeof( memorySpaceS ) ) memorySpaceS( tinP , etThread ) ;
                swMemorySpace.ungrabF( tinP ) ;

                ZE( countT* , pcArg ) ;
                etThread.newF( tinP , LF , pcArg , 9 ) ; ___( pcArg ) ;
                pcArg[ 0x0 ] = (countT)&memorySpace.bQuitEating ;
                pcArg[ 0x1 ] = idMemory ;
                pcArg[ 0x2 ] = (countT)&cLeverIdMemory ;
                pcArg[ 0x3 ] = (countT)&swMemorySpace ;
                pcArg[ 0x4 ] = idMinuteZe ;
                pcArg[ 0x5 ] = (countT)&cHamburgers ;
                pcArg[ 0x6 ] = (countT)&fliPendingSnapShotRequest ;
                pcArg[ 0x7 ] = (countT)postSnapShotRequest ;
                pcArg[ 0x8 ] = (countT)&bCompileReport ;

                etThread.osThreadF( TaRG2( tmEatTelemetrySysF , memorySpace.sgnDone_tmEatTelemetrySysF_ ) , (countT)pcArg ) ;
            }
        }
        
        //etThread.traceF( tinP , T("launching ancillary threads") ) ;
        //etThread.osThreadF( tinP , countTC() , tmTestImpotenceF ) ;
        //etThread.osThreadF( tinP , countTC() , tmKillYourselfImmediatelyF ) ;
        signC sgnDone_tmFireAllF_( tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC2 ) ;
        etThread.osThreadF( tinP , countTC() , tmFireAllF , &sgnDone_tmFireAllF_ ) ;
        //U::TO QUIET THE CONSOLE FOR CRAFTWORK: etThread.osThreadF( TaRG1( tmConsoleF ) , (countT)&bQuitConsole , (countT)&cLeverIdMemory , (countT)&swMemorySpace ) ;
        etThread.osThreadF( TaRG1( tmHireF ) , (countT)&cHamburgers ) ;

        //etThread.traceF( tinP , T("launching grabC deadlocker threads") ) ;
        //grabC grabFoo1( tinP , TAG( TAGiDnULL ) ) ;
        //grabC grabFoo2( tinP , TAG( TAGiDnULL ) ) ;
        //etThread.osThreadF( TaRG1( tmFooF ) , (countT)&grabFoo1 , (countT)&grabFoo2 ) ;
        //etThread.osThreadF( TaRG1( tmFooF ) , (countT)&grabFoo2 , (countT)&grabFoo1 ) ;
        
        //etThread.traceF( tinP , T("launching grabitC deadlocker threads") ) ;
        //grabitC grabitFoo1( tinP , TAG( TAGiDnULL ) , (byteT*)0 , 0 , 0 , 0 , flGRABITc_SUPPRESScTdT ) ;
        //grabitC grabitFoo2( tinP , TAG( TAGiDnULL ) , (byteT*)0 , 0 , 0 , 0 , flGRABITc_SUPPRESScTdT ) ;
        //etThread.osThreadF( TaRG1( tmGooF ) , (countT)&grabitFoo1 , (countT)&grabitFoo2 ) ;
        //etThread.osThreadF( TaRG1( tmGooF ) , (countT)&grabitFoo2 , (countT)&grabitFoo1 ) ;
        
        //etThread.traceF( tinP , T("launching grabC zombie threads") ) ;
        //grabC grabHoo( tinP , TAG( TAGiDnULL ) ) ;
        //etThread.osThreadF( TaRG1( tmHooF ) , (countT)&grabHoo ) ;
        //etThread.osThreadF( TaRG1( tmHooF ) , (countT)&grabHoo , 1 ) ;
    
        //U::TO FIND A BUG
        //if( !ether )
        //{
        //    etThread.traceF( tinP , T("listening for clients") ) ;
        //    IFsCRATCH
        //    {
        //        SCOOPSnEW
        //        socketC sListen( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        //        homeS& home = homeS::homeIF() ;
        //        home.idPortKernelMonitor = sListen.bindF( tinP ) ;
        //        etRock.traceF( tinP , T("main: sListen bound to port ")+TF2(home.idPortKernelMonitor,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
        //        //LOGrAW3( "home.idPortKernelMonitor: " , home.idPortKernelMonitor , "\r\n" ) ;
        //
        //        if( POOP )
        //        {
        //            POOPR
        //            etThread.loafIF( tinP ) ;
        //        }
        //        else
        //        {
        //            sListen.listenF( tinP ) ;
        //            while( !POOP && !etThread && !ether )
        //            {
        //                ZE( socketC* , pso ) ;
        //                nicNameC nnPeer ;
        //                ZE( countT , idPortPeer ) ;
        //                etRock.traceF( tinP , T("main: calling acceptF for sListen") ) ;
        //                sListen.acceptF( tinP , pso , idPortPeer , nnPeer , countTC() ) ;
        //                etRock.traceF( tinP , T("main: called  acceptF for sListen") ) ;
        //
        //                if( !ether && pso ) etThread.osThreadF( tinP , countTC() , tmcMonitorServerF , 0 , flTHREADlAUNCH_null , 0 , (countT)pso , (countT)&cLeverIdMemory , (countT)&swMemorySpace ) ;
        //                else                { DEL( pso ) ; }
        //            }
        //        }
        //        SCOOPSdEL
        //    }
        //}
    
        //etThread.traceF( tinP , T("waiting for fire all thread to finish") ) ;
        sgnDone_tmFireAllF_.waitF( tinP ) ;
        //etThread.traceF( tinP , T("firing the nonkernel queue monitors") ) ;
        for( countT idMemory = idmMax ; idMemory > idmMin ; idMemory -- )
        {
            if( idMemory >= ifcIDmEMORYsPACE_RESERVEDmIN && idMemory <= ifcIDmEMORYsPACE_RESERVEDmAX ) continue ;

            cLeverIdMemory = idMemory ;
            memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpace ;
            //etThread.traceF( tinP , T("firing monitor [idMemory]:    ")+TF2(idMemory,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
            memorySpace.bQuitMonitor = memorySpace.bQuitEating = 1 ;
            memorySpace.sgnDone_tmEatTelemetrySysF_.waitF( tinP ) ;
            //etThread.traceF( tinP , T("fired  monitor [idMemory]:    ")+TF2(idMemory,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
            memorySpaceS* pms = &memorySpace ;
            DELzOMBIE( pms ) ;
        }
    
        //etThread.traceF( tinP , T("all nonkernel queue monitors are gone") ) ;
        THREADmODE1oN( flTHREADmODE1_YELL )
        YELL( "monitoring of every space other than kernel has ended" ) ;
        THREADmODE1rESTORE
    
        //etThread.traceF( tinP , T("waiting for all threads other than kernel queue monitor and console to finish") ) ;
        //CONoUTrAW( "waiting for all threads other than console and kernel monitor to go away\r\n" ) ;
        WAITuNTILaLMOSTaLONE( 2 )
    
        //etThread.traceF( tinP , T("firing kernel queue monitor") ) ;
        {
            //CONoUTrAW( "firing kernel monitor\r\n" ) ;
            thirdC::third_flagsModeProcess2I_IF(tinP) |= flMODEpROCESS2_SUPPRESStELLS ; //RACE: A THREAD MIGHT HAVE ALREADY INSPECTED THE FLAGS BUT NOT YET WRITTEN TO THE MONITOR; THE CONSEQUENCE IS THAT SOME MESSAGES AREN'T PULLED;  THIS IS AOK AS LONG AS THE QUEUE ISN'T FILLED
            cLeverIdMemory = ifcIDmEMORYsPACE_KERNEL ;
            memorySpaceS& memorySpaceKernel = *(memorySpaceS*)&(countT&)swMemorySpace ;
            bQuitConsole = memorySpaceKernel.bQuitMonitor = memorySpaceKernel.bQuitEating = 1 ;
            memorySpaceKernel.sgnDone_tmEatTelemetrySysF_.waitF( tinP ) ;
            WAITuNTILaLMOSTaLONE( 1 )
            //CONoUTrAW( "kernel monitor is gone\r\n" ) ;
            memorySpaceS* pms = &memorySpaceKernel ;
            DELzOMBIE( pms ) ;
        }    
    
        //etThread.traceF( tinP , T("firing console") ) ;
        //CONoUTrAW( "firing console\r\n" ) ;
        bQuitConsole = 1 ;
        WAITuNTILaLMOSTaLONE( 0 )
        //CONoUTrAW( "console is gone\r\n" ) ;
    
        //U:: if( !bKeep )
        //U:: {
        //U::     buildRemovalUtilityF( tinP , etThread ) ; //U::DOES NOT WORK
        //U::     ZE( strokeS* , psttDriverName ) ;
        //U::     etThread.osDriverNameFromMasterF( tinP , psttDriverName , DDNUMB ) ; ___( psttDriverName ) ;
        //U::     IFsCRATCH
        //U::     {
        //U::         SCOOPS
        //U::         ((thirdC&)*tinP.pEtScratch).osDriverUnregisterF( tinP , T(psttDriverName) ) ;
        //U::         if( POOP ) POOPR
        //U::     }
        //U::     etThread.delF( tinP , psttDriverName ) ;
        //U:: }
        //etThread.traceF( tinP , T("cleaning up") ) ;
    }

    //REMOVE IN PRODUCTION; THIS IS TO FACILITATE DEVELOPMENT OF SERVICE QUIT QUALITY
    //etThread.traceF( tinP , T("napping for 20 minutes") ) ;
    //Sleep( 1000 * 60 * 20 ) ;
    ////etThread.osSleepF( tinP , TICK ) ;
    //etThread.traceF( tinP , T("napped  for 20 minutes") ) ;
}

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
//SOURCE: 5adam.510004fb.1 END
