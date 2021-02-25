//SOURCE: 5adam.51000757.1 BEGIN
#define DDNAME "5adam.51000757.1"
#define DDNUMB 0x51000757
#define IDFILE (countT)0x0
#define postHEADER "51000757.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000757.1.ClINESiNdEF"

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_WATCHiDLEcPU" )/*1*/

#define CeXERCISES 1

voidT exerciseF( const countT& bQuitP )         // WO CALL TO ME TAKES ABOUT 1 TOCK ON factory 1
{
    countT cDo = ( TICK << 5 ) - 1 ;     // WILL DO THIS + 1 ITERATIONS
    ZE( countT , cc ) ;
    do
    {
        cc = cDo * cDo ;
    }
    while( !bQuitP && cDo -- ) ;
}

TASK( tmGorillaF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 && pTaskP->c4 && pTaskP->c5 && pTaskP->c6 )
{
    signC&      sgnGoP            =      *(signC*)pTaskP->c1 ;
    countT&     cGorillasWaitingP =     *(countT*)pTaskP->c2 ;
    grabC&      grabAccumulatorsP =      *(grabC*)pTaskP->c3 ;
    measure04T& mMinP             = *(measure04T*)pTaskP->c4 ;
    measure04T& mSumP             = *(measure04T*)pTaskP->c5 ;
    measure04T& mMaxP             = *(measure04T*)pTaskP->c6 ;
    TN( t1 , "calling exerciseF" ) ;
    TN( t2 , "called  exerciseF" ) ;

    countT idPriorityDefault = etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUDE ) ;
    while( !ether )
    {
        inc02AM( cGorillasWaitingP ) ;

        //U::REMOVE IN PRODUCTION ; THIS IS TO ELICIT RACE CONDITION TO VERIFY THAT CODE HANDLES IT BY NOT ALLOWING SIGN TO BE GIVEN BEFORE ALL ARE WAITING
        //{
        //    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        //    ether.osSleepF( tinP , TOCK << 6 ) ;
        //}

        sgnGoP.waitF( tinP , flSIGNcWAIT_null ) ;

        if( !ether )        
        {
            ZE( countT , timeA1 ) ;
            ZE( sCountT , timeA2 ) ;
            etThread.osTimeNowF( tinP , timeA1 , timeA2 ) ;

            countT cDo = CeXERCISES ;
            const countT& bQuit = ether ;

            countT idPriorityRude = etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZIEST ) ;
            while( cDo -- )
            {
                //etThread.traceF( tinP , t1 ) ;
                exerciseF( bQuit ) ;
                //etThread.traceF( tinP , t2 ) ;
            }
            etThread.osThreadSwitchingDesireF( tinP , idPriorityRude ) ;

            ZE( countT , timeB1 ) ;
            ZE( sCountT , timeB2 ) ;
            etThread.osTimeNowF( tinP , timeB1 , timeB2 ) ;
            etThread.osTimeSubtractF( tinP , timeB1 , timeB2 , timeA1 , timeA2 ) ;
            etThread.traceF( tinP , T("time to complete: ")+TF2(timeB1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

            grabAccumulatorsP.grabF( tinP , TAG( TAGiDnULL ) ) ;

            if( mMinP > timeB1 ) mMinP  = timeB1 ;
                                 mSumP += timeB1 ;
            if( mMaxP < timeB1 ) mMaxP  = timeB1 ;

            grabAccumulatorsP.ungrabF( tinP ) ;
        }
    }
    etThread.osThreadSwitchingDesireF( tinP , idPriorityDefault ) ;
}
DONE( tmGorillaF )

TODO

const countT cProcessors = thirdC::osProcessorsIF( tinP ) ;
etThread.traceF( tinP , T("[cProcessors]:    ")+TF2(cProcessors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

ZE( countT , cGorillasWaiting ) ;
signC sgnGo( tinP , TAG( TAGiDnULL ) ) ;
ZE( measure04T , mMin  ) ;
ZE( measure04T , mSum  ) ;
ZE( measure04T , mMax  ) ;
grabC grabAccumulators( tinP , TAG( TAGiDnULL ) , flGRABc_NOTjEALOUS , ifcIDgRABlAYER_7BASEmISC1 ) ;    //20200610@2039: flGRABc_NOTjEALOUS ADDED WITHOUT ANALYSIS WITHOUT IDENTIFYING THIS AS THE CULPRIT IN A JEALOUSY
TN( tb4 , "    " ) ;
countT cDo = cProcessors ;
while( cDo -- ) etThread.osThreadF( TaRG1( tmGorillaF ) , (countT)&sgnGo , (countT)&cGorillasWaiting , (countT)&grabAccumulators , (countT)&mMin , (countT)&mSum , (countT)&mMax ) ;

ether.ifcHireF( tinP , T("ifcIDaDAM_WATCHiDLEcPU") , ifcIDaDAM_HOMEfLAGS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

ZE( countT , idCycle ) ;
countT cExtra = 0 ;
while( !ether || cExtra -- )
{
    while( !ether && cGorillasWaiting < cProcessors )  // NORMALLY WILL EXECUTE ONLY WO ITERATION ; CODED THIS WAY TO HANDLE HEAVILY LOADED COMPUTER ON WHICH exerciseF DOES NOT COMPLETE WITHIN THE INTENDED PERIOD
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ether.osSleepF( tinP , TICK >> 4 , TOCK , flSLEEP_null ) ;
    }

    for(;;)     // THIS LOOP PREVENTS RACE IN WHICH I GIVE SIGN BEFORE ALL GORILLA THREADS ARE ACTUALLY REGISTERED AS WAITING WITHIN THE grabC OBJECT WITHIN THE SIGN
    {
        const grabC& grabb = sgnGo ;
        countT cWaiting = grabb.idGrabberHighF() - grabb.idGrabberOkF() ;
        //etThread.traceF( tinP , T("[cWaiting]:   ")+TF2(cWaiting,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( cWaiting == cProcessors ) break ;

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        etThread.osSleepF( tinP , TOCK >> 6 ) ;
    }

    grabAccumulators.grabF( tinP , TAG( TAGiDnULL ) ) ;
    mSum /= cProcessors ;
    etThread.traceF( tinP , T("----------------------------------------------------------------------- [idCycle,mMin,mMean,mMax]:   ")+TF2(++idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2((countT)mMin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2((countT)mSum,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2((countT)mMax,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) , flTRACE_null , ifcIDtRACEdIVERT_1 ) ;
    cGorillasWaiting = 0 ;
    mMin = MAXcOUNTT ;
    mSum = 0 ;
    mMax = 0 ;
    grabAccumulators.ungrabF( tinP ) ;

    sgnGo.giveF( tinP , ifcIDmODEsIGNgIVE_FLASH ) ;
}

etThread.traceF( tinP , T("ok") ) ;
etherC::loafIF( tinP ) ;
etThread.traceF( tinP , T("bye") ) ;

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
//SOURCE: 5adam.51000757.1 END
