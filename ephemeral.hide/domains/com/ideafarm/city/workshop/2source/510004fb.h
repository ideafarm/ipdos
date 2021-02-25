

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*1*//*ifcIDaDAM_KERNEL2MONITOR h*//*1*/

#define CfIREaLLsLOTS 0x10
#define CpERIODSrETAIN 0x2

struct periodDataS
{
    countT          cLeverIdType ;
    switchC         swEventTally ;
    const countT*   pczLeverThread ; //IDaDAMrOOT IDaDAM IDtHREAD 0
    switchStackC    swsLog ;

    NEWdELcLASSpROTOS
    periodDataS( tinS& tinP , etherC& etherP ) ;
}
;

struct memorySpaceS
{
    etherC&         ether ;
    boolT           bQuitMonitor ;
    boolT           bQuitEating ;
    signC           sgnDone_tmEatTelemetrySysF_ ;
    grabC           grab ;
    countT          cLeverSay ;
    switchC         swTallySay ;
    stackC          stPool ;
    const countT*   pczLeverAdam ; //IDaDAMrOOT IDaDAM 0
    switchStackC    swsNapkin ;
    switchStackC    swsSex ;
    switchStackC    swsTin ;
    switchStackC    swsTinWhere ;
    switchStackC    swsProcessGlobal3 ;

    NEWdELcLASSpROTOS
    memorySpaceS( tinS& tinP , etherC& etherP ) ;
}
;

struct poolOldEntryS
{
    countT  cRef ;
    countT  osPid ;
    voidT*  pvMe ;
    countT  cbPool ;
    countT  idClient ;
    countT  costName ;
    osTextT postName[ TUCK ] ;

    poolOldEntryS( tinS& tinP , countT osPidP , voidT* pvMeP , countT cbPoolP , countT idClientP , osTextT* postNameP , countT costNameP ) ;
    voidT logF( tinS& tinP , const boolT bDieP = 0 ) ;
}
;

struct napkinEntryS
{
    countT       osPid ;
    osTextT      postName[ COSTmAXnAPKINnAME + 1 + CBtOaLIGN02( COSTmAXnAPKINnAME + 1 ) ] ;
    const byteT* pbData ;
    countT       cbData ;
    countT       idLineCt ;
    countT       idiFileCt ;

    napkinEntryS( tinS& tinP , const countT osPidP , const osTextT* const postNameP , const byteT* const pbDataP , const countT cbDataP , const countT idLineCtP , const countT idiFileCtP ) ;
}
;

struct processGlobal3EntryS
{
    countT       osPid ;
    const byteT* pbEarlyGrain ;
    countT       cGrains ;

    processGlobal3EntryS( tinS& tinP , const countT osPidP , const byteT* const pbEarlyGrainP , const countT cGrainsP ) ;
}
;

struct sexEntryS
{
    countT  osPid ;
    osTextT postName[ COSTpOOLnAMEmAX ] ;
    countT  expCbDrop ;
    countT  expSlots ;
    sexC*   pSex ;
    byteT*  pbCopy ;
    countT  idLineCt ;
    countT  idiFileCt ;

    sexEntryS( tinS& tinP , const countT osPidP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , sexC* pSexP , const countT idLineCtP , const countT idiFileCtP ) ;
}
;

struct telemetryBookHeadS
{
    countT  finger1 ;
    countT  idFormat ;
    countT  cbBooked ;
    countT  finger2 ;
}
;

struct tinEntryS
{
    countT  idSerial ;
    countT  osTid ;
    countT  osPid ;
    boolT   bIda ;
    countT  ip ;
    byteT*  pbCopy ;
    countT  idTin ;
    countT  idThread ;
    osTextT postThreadName[ COSTmAXtHREADnAME + 1 ] ;
    countT  idTinNamed ;
    countT  idLineCt ;
    countT  idiFileCt ;
    countT  idStepLath ;

    tinEntryS( tinS& tinP , countT idSerialP , countT osTidP , countT osPidP , boolT bIdaP , countT ipP , countT idTinP , countT idThreadP , const osTextT* const postThreadNameP , const countT idTinNamedP , const countT idLineCtP , const countT idiFileCtP ) ;
}
;

voidT unregisterObsoleteDriversF( tinS& tinP , etherC& etThread , const countT idAdamP ) ;
voidT buildRemovalUtilityF( tinS& tinP , etherC& etThread ) ;
countT subtract_napkinEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P ) ;
countT subtract_processGlobal3EntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P ) ;
countT subtract_sexEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P ) ;
countT subtract_tinEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P ) ;
boolT reportGrabF( tinS& tinP , soulC& sRptP , const strokeS* const psttPrefixP , const countT* const pcPanLifiP , const countT osPidP = 0 ) ;

TASK0PROTO( tmcMonitorServerF ) ;
TASK0PROTO( tmHireF ) ;
TASK0PROTO( tmCloakF ) ;
TASK0PROTO( tmConsoleF ) ;
TASK0PROTO( tmFireAllF ) ;
TASK0PROTO( tmEatTelemetrySysF ) ;
TASK0PROTO( tmFooF ) ;
TASK0PROTO( tmGooF ) ;
TASK0PROTO( tmHooF ) ;
//TASK0PROTO( tmGorillasRawF ) ;
TASK0PROTO( tmKillYourselfImmediatelyF ) ;
TASK0PROTO( tmTestImpotenceF ) ;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
