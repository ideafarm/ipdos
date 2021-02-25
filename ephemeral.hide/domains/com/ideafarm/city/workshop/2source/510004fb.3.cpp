//SOURCE: 5adam.510004fb.3 BEGIN
#define DDNAME "5adam.510004fb.3"
#define DDNUMB 0x510004fb
#define IDFILE (countT)0x0
#define postHEADER "510004fb.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510004fb.3.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*1*//*ifcIDaDAM_KERNEL2MONITOR 3*//*1*/

#include postHEADER

TASK( tmConsoleF )
if( pTaskP && pTaskP->c1 )
{
    boolT&   bQuitConsoleP   =   *(boolT*)pTaskP->c1 ;
    countT&  cLeverIdMemoryP =  *(countT*)pTaskP->c2 ;
    switchC& swMemorySpaceP  = *(switchC*)pTaskP->c3 ;

    ZE( countT , icCycle ) ;
    TN( tcr , "\r\n" ) ;
    TN( tb , " " ) ;
    TN( top , "(" ) ;
    TN( tcp , ")" ) ;
    while( !POOP && !bQuitConsoleP )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;

        if( !( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_SERVICE ) )
        {
            ZE( strokeS* , psttr ) ;
            etThread.strMakeF( tinP , LF , psttr , T("\fIPDOS (tm) <> IdeaFarm " "(tm) Piggyback Distributed Operating System\r\nPerformance Monitor\r\ncycle: ")+TF2(++icCycle,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n") , TOCK ) ; ___( psttr ) ;

            swMemorySpaceP.grabF( tinP , TAG( TAGiDnULL ) ) ;
            countT cFlavors = swMemorySpaceP.cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                cLeverIdMemoryP = swMemorySpaceP.leverF( tinP , idf ) ;
                memorySpaceS& memorySpace = *(memorySpaceS*)&(countT&)swMemorySpaceP ;
                
                memorySpace.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

                const countT cFlavors = memorySpace.swsTin.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    memorySpace.pczLeverAdam = (countT*)memorySpace.swsTin.leverF( tinP , idf ) ;

                    etThread.strFuseF( tinP , psttr , 
    
                         T("Memory space: ")+TF2(cLeverIdMemoryP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tcr
                        +T("swsTin       : ")+TF2(memorySpace.swsTin,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tcr
    
                    ) ;

                    if( memorySpace.swsTin )
                    {
                        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                        do
                        {
                            tinEntryS& info = *(tinEntryS*)&memorySpace.swsTin.downF( tinP , hWalk ) ;
    
                            byteT pbCopyTin[ sizeof( tinS ) ] ;
                            tinS* pCopyTin = (tinS*)pbCopyTin ;
                            ZE( boolT , bOk ) ;
                            thirdC::dosReadProcessMemoryIF( tinP , pbCopyTin , sizeof( tinS ) , bOk , (voidT*)info.ip , info.osPid ) ;
                            if( !bOk || getNegAM( pCopyTin->fingerprint ) != FINGERnEG_TINs || info.idSerial != pCopyTin->idSerial ) pCopyTin = 0 ;
                            else
                            {
                                countT pc2[ 2 ] ; //CODE SYNC: ad40104 003002a: fingerprint idSerial MUST BE AT OFFSETS 0 4
                                bOk = 0 ;
                                thirdC::dosReadProcessMemoryIF( tinP , (byteT*)pc2 , sizeof pc2 , bOk , (voidT*)info.ip , info.osPid ) ;
                                if( !bOk || getNegAM( pc2[ 0 ] ) != FINGERnEG_TINs || info.idSerial != pc2[ 1 ] ) pCopyTin = 0 ;
                            }
    
                            if( pCopyTin && pCopyTin->monitor.pPanLifiGrabbing[ 0 ] )
                            {
                                etThread.strFuseF( tinP , psttr , 
                            
                                    TF3(info.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)
                                    +TP(info.postThreadName,0x20)
            
                                ) ;
    
                                etThread.strFuseF( tinP , psttr ,
                                    
                                    tb+TF2(pCopyTin->monitor.pPanLifiGrabbing[2],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)
                                    +top+TF2(pCopyTin->monitor.pPanLifiGrabbing[1],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tcp
                                    
                                ) ;
    
                                etThread.strFuseF( tinP , psttr , tcr ) ;
    
                                for( countT off = 0 ; off < sizeof pCopyTin->pPanLifiRecurseGrabbedLevel / sizeof pCopyTin->pPanLifiRecurseGrabbedLevel[ 0 ] ; off ++ ) //U::OBSOLETED BY MIGRATION TO pPanLifiRecurseGrabbedLevel; SEE tmReportF
                                {                                                                                                                              //U::BUG: SHOULD BE off += 5?
                                    if( pCopyTin->pPanLifiRecurseGrabbedLevel[ off ] )
                                    {
                                        byteT pbCopyGrab[ sizeof( grabC ) ] ;
                                        grabC* pCopyGrab = (grabC*)pbCopyGrab ;
                                        ZE( boolT , bOk ) ;
                                        thirdC::dosReadProcessMemoryIF( tinP , pbCopyGrab , sizeof( grabC ) , bOk , (voidT*)pCopyTin->pPanLifiRecurseGrabbedLevel[ off ] , info.osPid ) ;
                                        if( !bOk || getNegAM( pCopyGrab->finger ) != FINGERnEG_GRABc ) pCopyGrab = 0 ;
                                        else
                                        {
                                            etThread.strFuseF( tinP , psttr ,
                                        
                                                TP("",0x29)+TF2(pCopyGrab->idiFileCt,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)
                                                +top+TF2(pCopyGrab->idLineCt,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tcp+tcr
                                        
                                            ) ;
                                        }
                                    }
                                }
                            }
                        }
                        while( ~hWalk ) ;
                    }
                }

                memorySpace.grab.ungrabF( tinP ) ;
            }
            swMemorySpaceP.ungrabF( tinP ) ;

            if( !( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_SERVICE ) ) etThread.strokeF( tinP , psttr ) ;
            else
            {
                TN( tRpt , psttr ) ;
                ZE( strokeS* , psttf ) ;
                etThread.boxPutGenerationF( tinP , psttf , T("///d/ideafarm.rpt.monitor.console") , TUCK , (osTextT*)tRpt , tRpt.csF( tinP ) ) ; ___( psttf ) ;
                etThread.delF( tinP , psttf ) ;
            }

            etThread.delF( tinP , psttr ) ;
        }
   
        ++ s ; etThread.osSleepF( tinP , TOCK * 0x8 ) ;
    }
}
DONE( tmConsoleF )

TASK( tmFooF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    grabC& grab1 = *(grabC*)pTaskP->c1 ;
    grabC& grab2 = *(grabC*)pTaskP->c2 ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
    grab1.grabF( tinP , TAG( TAGiDnULL ) ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; ether.osSleepF( tinP , TOCK ) ;
    }
    //CONoUTrAW3( "tmFooF/" , tinP.monitor.idThread , ": grabbing (this should deadlock)\r\n" ) ;
    grab2.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //CONoUTrAW3( "tmFooF/" , tinP.monitor.idThread , ": you'll never see this\r\n" ) ;
    THREADmODE1rESTORE ;
}
DONE( tmFooF )

TASK( tmGooF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    grabitC& grab1 = *(grabitC*)pTaskP->c1 ;
    grabitC& grab2 = *(grabitC*)pTaskP->c2 ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
    grab1.grabF( tinP , TAG( TAGiDnULL ) ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; ether.osSleepF( tinP , TOCK ) ;
    }
    //CONoUTrAW3( "tmGooF/" , tinP.monitor.idThread , ": grabbing (this should deadlock)\r\n" ) ;
    grab2.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //CONoUTrAW3( "tmGooF/" , tinP.monitor.idThread , ": you'll never see this\r\n" ) ;
    THREADmODE1rESTORE ;
}
DONE( tmGooF )

#if defined( NEVERdEFINED )

TASK( tmHooF )
if( pTaskP && pTaskP->c1 )
{
    grabC& grab1 = *(grabC*)pTaskP->c1 ;
    boolT  bNap  =          pTaskP->c2 ;

    if( bNap )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; ether.osSleepF( tinP , TOCK ) ;
    }

    grab1.grabF( tinP , TAG( TAGiDnULL ) ) ;
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ; //INTENTIONALLY NOT RESTORED
}
DONE( tmHooF )

#endif


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
//SOURCE: 5adam.510004fb.3 END
