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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac002.adamglobal1s.dt_adamglobal1s BEGIN
#define DDNAME       "3func.360ac002.adamglobal1s.dt_adamglobal1s"
#define DDNUMB      (countT)0x360ac002
#define IDFILE      (countT)0x1371


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/adamGlobal1S::~adamGlobal1S( voidT )/*1*/
{
    if( idAdam && idGroupFireAll )
    {
        ZE( countT , offo ) ;
        for( ; offo < CfIREgROUPS ; offo ++ )
        {
            if( idAdam == setIfEqualsAM( processGlobal1I.pFireGroup[ offo ].idAdam , 0 , idAdam ) )
            {
                if( processGlobal1I.pFireGroup[ offo ].idGroup != idGroupFireAll ) { BLAMMO ; }
                processGlobal1I.pFireGroup[ offo ].idGroup = 0 ;
                break ;
            }
        }
        if( offo == CfIREgROUPS ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac002.adamglobal1s.dt_adamglobal1s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac003.adamglobal1s.adamglobal1s BEGIN
#define DDNAME       "3func.360ac003.adamglobal1s.adamglobal1s"
#define DDNUMB      (countT)0x360ac003
#define IDFILE      (countT)0x1372


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

countT adamGlobal1S::idSerialAdamLath ;

/*1*/adamGlobal1S::adamGlobal1S( voidT ) :/*1*/
pProcessGlobal1( &processGlobal1S::_processGlobal1I_IF() ) ,
pProcessGlobal2( &processGlobal2S::_processGlobal2I_IF() ) ,
pProcessGlobal3( &processGlobal3S::_processGlobal3I_IF() ) ,
pProcessGlobal4( &processGlobal4S::_processGlobal4I_IF() ) ,
pProcessGlobal5( &processGlobal5S::_processGlobal5I_IF() ) ,
pProcessGlobal6( &processGlobal6S::_processGlobal6I_IF() ) ,
pProcessGlobal7( &processGlobal7S::_processGlobal7I_IF() ) ,
_adamC_pAdam( 0 ) ,
cYieldHighWater( 0 ) ,
flagsAdam( flADAM_null ) ,
flagsAdamState( flADAMsTATE_null ) ,
idLineBlammo( 0 ) ,
idiFileBlammo( 0 ) ,
idLineBlammoCt( 0 ) ,
idiFileBlammoCt( 0 ) ,
idAdam( 0 ) ,
idCell( this == &rootAdamGlobal1I ? 0 : 1 + incv02AM( homeS::homeIF().idCellLath ) ) , //FOR rootAdamGlobal1I, WILL BE SET DURING CONSTRUCTION OF napHome
idEventSadamsLath( 0 ) ,
idGroupFireAll( CfIREaLLrANKS >> 1 ) ,
idTellLath( 0 ) ,
idMemorySpace( ifcIDmEMORYsPACE_APPLICATION ) ,
idPhaseAdam( ifcIDpHASEaDAM_EXEpROLOGcONSTRUCTINGaDAMgLOBALS ) ,
idPhaseAdamNoHandoffOld( 0 ) ,
idSerialAdam( 1 + incv02AM( idSerialAdamLath ) ) ,
oshServiceStatus( 0 ) ,
pGrabWatch( 0 ) ,
pPoolAdamTemp( 0 ) ,
pPoolHomeTemp( 0 ) ,
pPoolScratch( 0 ) ,
pPoolAdamPerm( 0 ) ,
pPoolHomePerm( 0 ) ,
postServiceName( 0 ) ,
pBksLog( 0 ) ,
pbDebug( 0 ) ,
cThreadsWatched( 1 ) ,
pSadams( 0 ) ,
m01DrawSmooth( 1.0 ) ,
_deviceC_cMe( 0 ) ,
_deviceC_cHelper( 0 ) ,
_deviceC_flagsHelper( flDEVICEchELPER_null ) ,
_deviceC_pStkJob( 0 ) ,
pTranslateStateCallerCBF( 0 ) ,
pEtThreadMain( 0 ) ,
cSpins1( 0 ) ,
cSpins2( 0 ) ,
cSpins3( 0 ) ,
cSpins4( 0 )
{
    if( this != &rootAdamGlobal1I )
    {
        thirdC::c_memsetIF( (byteT*)pcDebug                      , sizeof pcDebug              ) ;
        thirdC::c_memsetIF( (byteT*)pcExitsWhere                 , sizeof pcExitsWhere         ) ;
        thirdC::c_memsetIF( (byteT*)pcServiceStatus              , sizeof pcServiceStatus      ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac003.adamglobal1s.adamglobal1s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac004.adamglobal1s.setidadamf BEGIN
#define DDNAME       "3func.360ac004.adamglobal1s.setidadamf"
#define DDNUMB      (countT)0x360ac004
#define IDFILE      (countT)0x1373


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT adamGlobal1S::setIdAdamF( const countT idAdamP )/*1*/
{
    const countT idgDefault = CfIREaLLrANKS >> 1 ;
    const countT idgMax     = CfIREaLLrANKS  ;
    if( *(countT*)&idgMax - 6 <= idgDefault ) { BLAMMO ; }
    if( *(countT*)&idgDefault <= 3          ) { BLAMMO ; }

    *(countT*)&idAdam = idAdamP ;
    *(countT*)&idMemorySpace = rootAdamGlobal1I.idMemorySpace ; 

    switch( idAdam )
    {                                                           //CASES ARE ORDERED INCREASING IN THIS VALUE
        case ifcIDaDAM_WATCH                                : { *(countT*)&idGroupFireAll = 1              ; break ; }
        case ifcIDaDAM_PREPARElISTS                         : { *(countT*)&idGroupFireAll = 2              ; break ; }
                                                                //DEFAULT MUST BE AT THIS POINT IN THE ORDERING
        case ifcIDaDAM_LISTsERVERmONEYbUCKETS               : { *(countT*)&idGroupFireAll = idgMax - 6     ; break ; }
        case ifcIDaDAM_LISTsERVERiDaCCOUNTdESCRIPTION       : { *(countT*)&idGroupFireAll = idgMax - 5     ; break ; }
        case ifcIDaDAM_LISTsERVEReMAILiDaCCOUNT             : { *(countT*)&idGroupFireAll = idgMax - 4     ; break ; }
        case ifcIDaDAM_DOMAINsERIALnUMBERdISPENSER          : { *(countT*)&idGroupFireAll = idgMax - 3     ; break ; }
        case ifcIDaDAM_KERNELwATCHdATABASE                  : { *(countT*)&idGroupFireAll = idgMax - 2     ; break ; }
        case ifcIDaDAM_MEMBRANEgLASS                        : { *(countT*)&idGroupFireAll = idgMax - 1     ; break ; }
        case ifcIDaDAM_KERNEL2MONITOR                       : { *(countT*)&idGroupFireAll = idgMax         ; break ; }

        default                                             : { *(countT*)&idGroupFireAll = idgDefault     ; break ; }
    }

    ZE( countT , offo ) ;
    for( ; offo < CfIREgROUPS ; offo ++ )
    {
        if( !setIfZeAM( processGlobal1I.pFireGroup[ offo ].idAdam , idAdamP ) )
        {
            processGlobal1I.pFireGroup[ offo ].idGroup = idGroupFireAll ;
            break ;
        }
    }
    if( offo == CfIREgROUPS ) { BLAMMO ; }

    //CONoUTrAW5( "setIdAdamF [idAdamP,idGroupFireAll]: " , idAdamP , " " , idGroupFireAll , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac004.adamglobal1s.setidadamf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac005.adamglobal1s.registerheartf BEGIN
#define DDNAME       "3func.360ac005.adamglobal1s.registerheartf"
#define DDNUMB      (countT)0x360ac005
#define IDFILE      (countT)0x1374


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT adamGlobal1S::registerHeartF( voidT )/*1*/
{
    if( idAdam )
    {
        if( !idGroupFireAll ) { BLAMMO ; }

        inc02AM( homeS::homeIF().pFireAll[ idGroupFireAll - 1 ].cHearts ) ;
        flagsAdamState |= flADAMsTATE_HEARTbEATrEGISTERED ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac005.adamglobal1s.registerheartf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac006.adamglobal1s.deregisterheartf BEGIN
#define DDNAME       "3func.360ac006.adamglobal1s.deregisterheartf"
#define DDNUMB      (countT)0x360ac006
#define IDFILE      (countT)0x1375


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT adamGlobal1S::deregisterHeartF( voidT )/*1*/
{
    if( F(flagsAdamState) & flADAMsTATE_HEARTbEATrEGISTERED )
    {
        if( !idGroupFireAll ) { BLAMMO ; }

        dec02AM( homeS::homeIF().pFireAll[ idGroupFireAll - 1 ].cHearts ) ;
        flagsAdamState &= ~( F(flADAMsTATE_HEARTbEATrEGISTERED) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ac* : 3func.360ac006.adamglobal1s.deregisterheartf END
