//SOURCE: 5adam.51000511.1 BEGIN
#define DDNAME "5adam.51000511.1"
#define DDNUMB 0x51000511
#define IDFILE (countT)0x0
#define postHEADER "51000511.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000511.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
obsoletes ff40104
i began as an exact copy of ff40104
i am an object oriented rewrite of ff40104, which works
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_KERNEL3BANG" )/*1*/

voidT cioGetF( tinS& tinP , etherC& etherP , const boolT& bQuitP , const countT idPayloadTypeP , soulC*& psPayloadP , countT*& pczChannelP , countT& cArgP , const idPortTimeC& idptOriginP )
{
    //etherP.traceF( tinP , T("cioGetF [idPayloadTypeP]: ")+TF2(idPayloadTypeP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

    if( idPayloadTypeP == ifcIDtYPEgIFT_APPLICATION )
    {
        ZE( strokeS* , psttMsg ) ;
        *psPayloadP >> psttMsg ; ___( psttMsg ) ;

        etherP.traceF( tinP , T("cioGetF [channel,message]: ")+TF2(pczChannelP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" \"")+T(psttMsg)+T("\"") ) ;

        etherP.delF( tinP , psttMsg ) ;
        etherP.delF( tinP , pczChannelP ) ; //OPTIONAL
        DEL( psPayloadP ) ; //OPTIONAL
    }
}

TASK( tmTestF )

etThread.traceF( tinP , T("napping") ) ;
{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TOCK << 2 ) ;
}
etThread.traceF( tinP , T("napped") ) ;

etThread.cioSetGetF( tinP , cioGetF ) ;

nicNameC nnMe = socketC::nicNameIF( tinP , etThread , 0 ) ;

soulC sGift( tinP , TAG( TAGiDnULL ) ) ;
TN( tMsg , "" ) ; tMsg = T("banged [nnMe,idHome]:    ")+T(nnMe)+T("    ")+TF2(processGlobal1S::_processGlobal1I_IF().idHome,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ;
sGift << (strokeS*)tMsg ;


soulC sTo( tinP , TAG( TAGiDnULL ) ) ;
soulC sToMediator( tinP , TAG( TAGiDnULL ) ) ;

ZE( boolT , bQuit ) ;
count8S c8c( 1 , 2 , 3 , 4 ) ;

sleepC s( tinP , TAG( TAGiDnULL ) ) ;
while( !ether )
{
    etThread.cioPutF( tinP , bQuit , c8c , sGift , &sTo , &sToMediator ) ;

    ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ;
}

DONE( tmTestF )

TASK( tmRelayF )
TELL( "setting up" )
if( pTaskP && pTaskP->c1 )
{
    countT& cRelaysP = *(countT*)pTaskP->c1 ;
    ZE( boolT , bReady ) ;
    relayC relay( tinP , etThread , bReady ) ;
    cRelaysP -- ;
}
DONE( tmRelayF )

TODO

{
    homeS& host = homeS::homeIF() ;
    host.idpTeat = idPortC() ;
}
    
ZE( countT , cRelays ) ;
{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    countT cDo = 1 ;
    while( cDo -- )
    {
        cRelays ++ ; etThread.osThreadF( TaRG1( tmRelayF ) , (countT)&cRelays ) ;
        ++ s ; etThread.osSleepF( tinP , TOCK ) ;
    }

//U:: COMMENTED OUT TO GET CLOUD WORKING ON factory2
//U::    /*if( etherC::ifc_idHomeIdisk_IF() == 1 )*/ etThread.osThreadF( TaRG1( tmTestF ) ) ;

    while( cRelays ) { ++ s ; etThread.osSleepF( tinP , TUCK * 0x40 ) ; }
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
//SOURCE: 5adam.51000511.1 END
