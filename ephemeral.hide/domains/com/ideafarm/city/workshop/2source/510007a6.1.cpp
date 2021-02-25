//SOURCE: 5adam.510007a6.1 BEGIN
#define DDNAME "5adam.510007a6.1"
#define DDNUMB 0x510007a6
#define IDFILE (countT)0x0
#define postHEADER "510007a6.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510007a6.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_GORILLAbANG" )/*1*/

voidT cioGetF( tinS& tinP , etherC& etherP , const boolT& bQuitP , const countT idPayloadTypeP , soulC*& psPayloadP , countT*& pczChannelP , countT& cArgP , const idPortTimeC& idptOriginP )
{
    etherP.traceF( tinP , T("cioGetF [idPayloadTypeP]: ")+TF2(idPayloadTypeP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

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

TODO

etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / ++++") ) ;

{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TOCK << 3 ) ;
}

etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / awakening") ) ;

etThread.cioSetGetF( tinP , cioGetF ) ;

nicNameC nnMe = socketC::nicNameIF( tinP , etThread , 0 ) ;

soulC sGift( tinP , TAG( TAGiDnULL ) ) ;
TN( tMsg , "" ) ; tMsg = T("banged [nnMe,idHome]:    ")+T(nnMe)+T("    ")+TF2(processGlobal1S::_processGlobal1I_IF().idHome,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ;
sGift << (strokeS*)tMsg ;

ZE( boolT , bQuit ) ;
count8S c8c( 1 , 2 , 3 , 4 ) ;

sleepC s( tinP , TAG( TAGiDnULL ) ) ;
while( !ether )
{
    etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / calling cioPutF") ) ;
    etThread.cioPutF( tinP , bQuit , c8c , sGift ) ;
    etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / called  cioPutF") ) ;

    ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ;
}

etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / loafing") ) ;

etherC::loafIF( tinP ) ;

etThread.traceF( tinP , T("ifcIDaDAM_GORILLAbANG / ----") ) ;

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
//SOURCE: 5adam.510007a6.1 END
