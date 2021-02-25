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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e002.napkinc.dt_napkinc BEGIN
#define DDNAME       "3func.3603e002.napkinc.dt_napkinc"
#define DDNUMB      (countT)0x3603e002
#define IDFILE      (countT)0x115d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.15e0002.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/napkinC::~napkinC( voidT )/*1*/
{
    TINSL

    SCOOP
    IFbEcAREFUL
    {
        if( pbNapkin && !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) ) { __( bDataAreaFormatted - 1 ) ; }
    }

    //TO FIND A BUG
    //OStEXT(   ostoSay , TUCK ) ;
    //OStEXTAK( ostoSay , "napkinC 4: ---- [cRef before ----   ,idAdam,postP]:    " ) ;
    //OStEXTC(  ostoSay , ((napkinHeaderS*)pbNapkin)->cRef , '0' ) ;
    //OStEXTAK( ostoSay , "    " ) ;
    //OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , '0' ) ;
    //OStEXTAK( ostoSay , "    " ) ;
    //OStEXTC(  ostoSay , idMemorySpace , '0' ) ;
    //OStEXTAK( ostoSay , "    " ) ;
    //OStEXTA(  ostoSay , postName ) ;
    //OStEXTAK( ostoSay , "\r\n" ) ;
    //LOGrAW(   ostoSay ) ;
    
    _IO_

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / p\r\n" ) ;
    dieF( tinP ) ;
    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / o\r\n" ) ;
    flushF( tinP ) ;
    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / n\r\n" ) ;

    if( pbNapkin )
    {
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / m\r\n" ) ;
        if( this == &processGlobal3I.napHome ) //ASSUME: napHome IS CT WOTH
        {
             processGlobal1I.flDt |= flCTdTg_napHomeI ;
        }
        else if( this == &processGlobal3I.napSlab )
        {
             processGlobal1I.flDt |= flCTdTg_napSlabI ;
        }
        else
        {
            tellInfoSysNapkinS ti ;
            ti.osPid     = tinP.osPid ;
            thirdC::c_strncpyIF( tinP , ti.postName , postName , sizeof ti.postName ) ;
            ti.costName  = thirdC::c_strlenIF( tinP , ti.postName ) ;
            ti.pbData    = pbNapkin + sizeof( napkinHeaderS ) ;
            ti.cbData    = ((napkinHeaderS*)pbNapkin)->cbData ;
            ti.idLineCt  = idLineCt ;
            ti.idiFileCt = idiFileCt ;
            TELLsYSc3LIFI( ifcIDtYPEtELLsYS_NAPKINdETACH , (byteT*)&ti , sizeof ti , idLineCt , idiFileCt )
        }
    
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / l\r\n" ) ;
        if( F(flagsState) & flNAPKINcsTATE_DYINGaLONE )
        {
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / k\r\n" ) ;
            if( this == &processGlobal3I.napSlab )
            {
                slabS* ps = (slabS*)(byteT*)*this ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / j\r\n" ) ;
                DELzOMBIE( ps ) ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / i\r\n" ) ;
            }
            else if( this == &processGlobal3I.napHome )
            {
                homeS* ph = (homeS*)(byteT*)*this ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / h\r\n" ) ;
                DELzOMBIE( ph ) ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / g\r\n" ) ;
            }
            else if( this == &processGlobal3I._grabC_napGrabWant )
            {
                homeS* ph = (homeS*)(byteT*)processGlobal3I.napHome ;
                ph->grabTimeUnique.flags  |= flGRABc_DISABLED ;
                ph->grabSuperRandom.flags |= flGRABc_DISABLED ;
    
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / f\r\n" ) ;
                for( countT ogw = 0 ; ogw < processGlobal1I._grabC_cgw ; ogw ++ )
                {
                    grabWantS* pDoomed = processGlobal1I._grabC_pgw + ogw ;
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / e\r\n" ) ;
                    DELzOMBIE( pDoomed ) ;
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / d\r\n" ) ;
                }
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / c\r\n" ) ;
            }
            else if( this == &processGlobal7I._socketC_napIpMapHome )
            {
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / b\r\n" ) ;
                ipMapHomeS* pCursor = (ipMapHomeS*)(byteT*)*this ;
                countT cToDo = CiPmAPhOME ;
                while( cToDo -- )
                {
                    ipMapHomeS* pDoomed = pCursor ++ ;
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / a\r\n" ) ;
                    DELzOMBIE( pDoomed ) ;
                    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 9\r\n" ) ;
                }
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 8\r\n" ) ;
            }
            else if( this == &processGlobal7I._sexC_napGlobalRegistry )
            {
                grabotC* pd = (grabotC*)(byteT*)*this ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 7\r\n" ) ;
                DELzOMBIE( pd ) ;
                //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 6\r\n" ) ;
            }
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 5\r\n" ) ;
        }
    
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 4\r\n" ) ;
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 3\r\n" ) ;
        hNapkin.closeIfF() ; //pbNapkin WILL BE NULL IF CT'OR FAILED.  THIS TEST IS REQUIRED BECAUSE napkinC USES tinP.pEther RATHER THAN CARRYING ITS OWN etherC REFERENCE
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 2\r\n" ) ;
    }

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 1\r\n" ) ;
    if( pbMemorySpaceOverride ) { DELzOMBIE( pbMemorySpaceOverride ) ; }
    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~napkinC / 0\r\n" ) ;
    
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e002.napkinc.dt_napkinc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e003.napkinc.napkinc BEGIN
#define DDNAME       "3func.3603e003.napkinc.napkinc"
#define DDNUMB      (countT)0x3603e003
#define IDFILE      (countT)0x115e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.15e0003.1.0.html\"\>definition\</A\>
the calling code -must- call formattingIsDoneF after constructing me to indicate that it has finished formatting the data area
warning: application code must verify that "operator byteT*()" returns a nonze value, unless cTriesP == -1 is specified
arguments
 tinP
 idLineCtP
 idiFileCtP
 pbBitsCtP
  if idMemorySpaceP and idMemorySpaceP is not the default memory space then TAG() cannot be used
   i create a tls item that is not dt until i am dt
   TAG creates a bitsC instance that is dt as soon as i return, resulting in a non lifo d elete on the tls, which is illegal (enforced)
 ecP
 postP
 idHowP
 cbP
  can be 0
 flagsP
 cTriesP
  - 1: no quit (even when the adam has been fired)
  0: no quit early: will not quit unless etPrimeIF() is impotent (the adam has been fired)
  > 0: the number of times that i should try before quitting
  normal apps never specify a value other than -1, 0, or 1
*/
/**/

/*1*/napkinC::napkinC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , const handleC* const phFileP , countT cbP , const countT idHowP , const flagsT flagsP , countT cTriesP , countT idMemorySpaceP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flagsCt( flagsP ) ,
hNapkin( tinP , idLineCtP , idiFileCtP , (byteT*)bitsC( tinP , CbITSlIFI , 0 , (countT)(0+1) ) , ifcIDtYPEhANDLE_SHAREDmEMORY ) ,
pbNapkin( 0 ) ,
cbData( cbP ) ,
flagsSharedMemory( 0 ) ,
bDataAreaFormatted( 1 ) , // SO IMPOTENCE TEST IN DESTRUCTOR WILL NOT TRIGGER IMPOTENCE
pbMemorySpaceOverride( 0 ) ,
pzbMemorySpaceUse( &processGlobal4I.bMemorySpace ) ,
osTidCt( tinP.osTid ) ,
idDesireCtSave( thirdC::dosPriorityIF( tinP ) ) ,
flThreadMode4Save( flTHREADmODE4_null ) ,
flagsState( F(flagsP) & flNAPKINc_DOnOTcOMMIT ? flNAPKINcsTATE_NOTyETcOMMITTED : flNAPKINcsTATE_null ) ,
phFile( phFileP ) ,
idMemorySpace( idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace )
{
    SCOOP

    // THIS IS NEEDED BECAUSE NORMALLY I SET flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY SINCE I GRAB THE MEMORY SPACE AND EXIT WITH IT STILL GRABBED (TO BE UNGRABBED BY formattingIsDoneF)
    // inOutFrameC TELEMETRY BEHAVIOR IS DETERMINED BY THE STATE OF THE FLAG DURING CT, EVEN THOUGH EMISSION OCCURS DURING DT
    // THE EFFECT OF THIS CODE IS THAT MY _IO_ NEVER EMITS TELEMETRY
    tinP.flushPendingInOutFrameTelemetryIfF() ;
    ZE( flagsT , flagsSave4 ) ;
    THREADmODE4sAVE0( flagsSave4 ) ;
    THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY ) ;
    _IO_                                                         // EARLY SO THAT napkinC BEHAVIOR CANNOT BE AFFECTED BY FOREIGN IMPOTENCE      U::20201112@1927: THIS COMMENT MAKES NO SENSE
    THREADmODE4rESTORE0( flagsSave4 ) ;

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    //if( tinP.pc Utility[ 0 ] ) thirdC::third_pcDebugI_IF( tinP ) ; //U:: SHOULD BE COMMENTED OUT IN PRODUCTION; TO FACILITATE DEBUGGING USING WDW

    IFbEcAREFUL
    {
        if( POOP ) BLAMMO ;
        __Z( postP ) ;
        if( POOP ) BLAMMO ; //U:: TO FIND A BUG
        __Z( idHowP ) ;
        if( POOP ) BLAMMO ; //U:: TO FIND A BUG
        __( phFileP && F(flagsCt) & flNAPKINc_DOnOTcOMMIT ) ;
        if( POOP ) BLAMMO ; //U:: TO FIND A BUG
        FV(flNAPKINc,flagsCt)
        if( POOP ) BLAMMO ; //U:: TO FIND A BUG
        __( F(tinP.flagsThreadMode3) & flTHREADmODE3_SUPPRESStRACING ) ;  // I USE THIS FLAG IN A WAY THAT DOES NOT SUPPORT RECURSION (I AND formattingIsDoneF RESET THE FLAG RATHER THAN USE RESTORE)
        if( POOP ) BLAMMO ; //U:: TO FIND A BUG
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) BLAMMO ;
    }

    OStEXT(   ostoNapkinName , COSTnAPKINnAMEmAX )
    OStEXTAK( ostoNapkinName , "//napkinC/" ) ;
    OStEXTA(  ostoNapkinName , postP ) ;

    const flagsT flagsOpen = F(flagsCt) & flNAPKINc_READoNLY
        ? flOPENsHAREDmEMORY_READoNLY
        : flOPENsHAREDmEMORY_null
    ;

    if( F(flagsCt) & flNAPKINc_PAGEaLIGNdATA ) { BLAMMO ; } //U::BUG: 20170121@1439: SOME CODE DOES NOT SUPPORT THIS BECAUSE DATA IS ASSUMED TO IMMEDIATELY FOLLOW THE HEADER

    if( F(flagsCt) & flNAPKINc_ALLuSERS        ) *(flagsT*)&flagsOpen |= flOPENsHAREDmEMORY_ALLuSERS        ;
    if( F(flagsCt) & flNAPKINc_ALLhOMES        ) *(flagsT*)&flagsOpen |= flOPENsHAREDmEMORY_ALLhOMES        ;
    if( F(flagsCt) & flNAPKINc_ALLmEMORYsPACES ) *(flagsT*)&flagsOpen |= flOPENsHAREDmEMORY_ALLmEMORYsPACES ;
    if( F(flagsCt) & flNAPKINc_LOCK            ) *(flagsT*)&flagsOpen |= flOPENsHAREDmEMORY_LOCK            ;
    if( F(flagsCt) & flNAPKINc_DOnOTcOMMIT     ) *(flagsT*)&flagsOpen |= flOPENsHAREDmEMORY_DOnOTcOMMIT     ;

    //U::CONJ: OBSOLETED BY REWRITE OF poolC
    //OStEXT( ostoFileName , TUCK << 2 )
    //OStEXTAK( ostoFileName , "c" ":\\ideafarm.home." ) ;
    //OStEXTC( ostoFileName , etherC::ifc_idHomeIdisk_IF() , 0 ) ;
    //OStEXTAK( ostoFileName , ".setting.keyValue.cbPoolRoot" ) ;
    //
    //if( !cbP && !thirdC::c_strcmpIF( tinP , postP , "root" ) )
    //{
    //    {
    //        ZE( boolT , bFail ) ;
    //        ZE( countT , cbToRead ) ;
    //        {
    //            POOPIE
    //            ZE( countT , cbRead ) ;
    //            flagsT fSave = tinP.flagsThreadMode1 ;
    //            tinP.flagsThreadMode1 |= flTHREADmODE1_QUIETiMPOTENCE ;
    //            cbToRead = thirdC::fileReadIF( tinP , 0 , cbRead , ostoFileName ) ;
    //            tinP.flagsThreadMode1 = fSave ;
    //            bFail = !!POOP ;
    //        }
    //
    //        if( !bFail )
    //        {
    //            if( cbToRead > 8 ) cbToRead = 8 ;
    //            osTextT post9[ 0x9 ] ;
    //            thirdC::c_memsetIF( tinP , post9 , sizeof post9 ) ;
    //            thirdC::fileReadIF( tinP , post9 , cbToRead , ostoFileName ) ;
    //            if( cbToRead == 8 )
    //            {
    //                for( sCountT off = cbToRead - 1 ; off >= 0 ; off -- )
    //                {
    //                         if( post9[ off ] >= '0' && post9[ off ] <= '9' ) cbP +=       post9[ off ] - '0' ;
    //                    else if( post9[ off ] >= 'a' && post9[ off ] <= 'f' ) cbP += 0xa + post9[ off ] - 'a' ;
    //                    else break ;
    //
    //                    if( off ) cbP <<= 4 ;
    //                }
    //            }
    //        }
    //    }
    //
    //    if( !cbP ) cbP = CBdROPmEANdEFAULT ;
    //
    //    cbP += sizeof( countT ) ;
    //}

    //20200417@1855: KEEP idMemorySpaceP NULL SO THAT CALLER DOES NOT HAVE TO SET flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE
    //if( !idMemorySpaceP ) idMemorySpaceP = tinP.pAdamGlobal1->idMemorySpace ;

    //if( this == &processGlobal3I._grabC_napGrabWant )
    //{
    //    if( idMemorySpaceP == ifcIDmEMORYsPACE_KERNEL )
    //    {
    //        idMemorySpaceP = ifcIDmEMORYsPACE_APPLICATION ;
    //        //U::THINK ABOUT HOW BEST TO ALLOW MONITOR TO KISS GRABBERS WHO REGISTERED THEMSELVES IN OTHER SPACES
    //    }
    //}

    const boolT bWord = &processGlobal6I.napWord1 <= this && this <= &processGlobal6I.napWord2 ; //CODEsYNC: 15e0003 0a00001

    if( bWord )
    {
        static countT idLath ;
        
        OStEXTC( ostoNapkinName , processGlobal1I.idAdamRoot , 0 ) ;
        OStEXTAK( ostoNapkinName , "." ) ;
        OStEXTC( ostoNapkinName , tinP.osPid , 0 ) ;
        OStEXTAK( ostoNapkinName , "." ) ;
        OStEXTC( ostoNapkinName , ++ idLath , 0 ) ;
        
        //LOGrAW( ostoNapkinName )
        //LOGrAW( "\r\n" )
        
        //CONoUTrAW( ostoNapkinName )
        //CONoUTrAW( "\r\n" )
    }
        
    //if( thirdC::c_strstrIF( ostoNapkinName , "sexC/data/" ) )
    //{
    //    //LOGrAW( ostoNapkinName ) ;
    //    //LOGrAW( "\"\r\n" ) ;
    //}

    if
    (
        !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT )
        &&
        (
            ( idMemorySpaceP && idMemorySpaceP != tinP.pAdamGlobal1->idMemorySpace )
            ||
            F(flagsCt) & flNAPKINc_USEgRABmEMORYsPACEoVERRIDE
        )
    )
    {
        //static countT idInLath ;
        //countT idIn = 1 + incv02AM( idInLath ) ;
        //CONoUTrAW3( "napkinC [idIn]: " , idIn , "\r\n" ) ;
        //if( idIn == 2 )
        //{
        //    countT foo = 2 ;
        //}

        pbMemorySpaceOverride = new( 0 , tinP , pbz_bMemorySpaceOverride , sizeof pbz_bMemorySpaceOverride ) batonC( tinP , TAG( TAGiDnULL ) , "bMemorySpace" , ifcIDgRABlAYER_cGRABmEMORYsPACEc , flBATONc_DOnOTsERIALIZEnAPKIN | flBATONc_NOTjEALOUS , 0 , 0 , idMemorySpaceP ) ;
        __Z( pbMemorySpaceOverride ) ;
        if( !POOP ) pzbMemorySpaceUse = pbMemorySpaceOverride ;
    }

    thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    tinP.cYield = 0 ;

    const countT cbaHeader = F(flagsCt) & flNAPKINc_PAGEaLIGNdATA
        ? 1 << thirdC::os_expCbPage_IF( tinP )
        : sizeof( napkinHeaderS )
    ;

    thirdC::c_strncpyIF( tinP , postName , ostoNapkinName , sizeof postName ) ;

    {
        boolT bNoQuit = cTriesP == - 1 ;
        boolT bNoQuitEarly = !cTriesP ;
        ZE( boolT , bFail ) ;
        {
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
            POOPIE
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                for(;;)
                {
                    //OStEXT(   ostoSay , TUCK << 2 ) ;
                    //OStEXTAK( ostoSay , "\r\nnapkinC::napkinC [cbData,cbHeader,cbAlloc]:    " ) ;
                    //OStEXTC(  ostoSay , cbP , 0 ) ;
                    //OStEXTAK( ostoSay , "    " ) ;
                    //OStEXTC(  ostoSay , cbaHeader , 0 ) ;
                    //OStEXTAK( ostoSay , "    " ) ;
                    //OStEXTC(  ostoSay , cbP+cbaHeader , 0 ) ;
                    ////processGlobal3S::_processGlobal3I_IF().bksTrace.writeF( tinP , ostoSay , thirdC::c_strlenIF( tinP , ostoSay ) , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ALLOWoDDlENGTH ) ;
                    //CONoUTrAW( ostoSay ) ;

                    THREADmODE3oN( flTHREADmODE3_SUPPRESStRACING )
                    if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
                    {
                        tinP.flushPendingInOutFrameTelemetryIfF() ;
                        THREADmODE4sAVE0( flThreadMode4Save )
                        THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
                        pzbMemorySpaceUse->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    }

                    thirdC::dosOpenSharedMemIF( tinP , hNapkin , (flagsT&)flagsSharedMemory , postName , phFileP , cbP ? cbaHeader + cbP : 0 , idHowP , idMemorySpaceP , flagsOpen | flOPENsHAREDmEMORY_DOnOTsERIALIZE ) ;

                    if( POOP && ~hNapkin )
                    {
                        BLAMMO ;
                    }

                    if( !POOP )
                    {
                        countT cNote = hNapkin.cNoteF() ;
                        if( cNote ) pbNapkin = (byteT*)cNote + cbaHeader - sizeof( napkinHeaderS ) ;
                    }

                    if
                    (
                        POOP
                        &&
                        (
                            bNoQuit
                            ||
                            (
                                bNoQuitEarly
                                &&
                                thirdC::thPrimeExistsIF( tinP )                      // thPrimeExistsIF( tinP ) IS CHECKED BECAUSE IT WILL BE 0 WHEN I AM CALLED TO CONSTRUCT poolOldRoot AND poolOld (AFTER poolC IS EDITED TO USE napkinC)
                                &&
                                !thirdC::thPrimeIF( tinP )
                            )
                            ||
                            (
                                cTriesP
                                &&
                                -- cTriesP
                            )
                        )
                    )
                    {
                        ++ s ;
                        POOPR

                        if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
                        {
                            pzbMemorySpaceUse->ungrabF( tinP ) ;
                            THREADmODE4rESTORE0( flThreadMode4Save )
                        }

                        THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )

                        OStEXT(   ostoSay , TUCK << 2 ) ;
                        OStEXTAK( ostoSay , "napkinC::napkinC / tracing pool tallies and then napping for a wink [cbData,cTries]:    " ) ;
                        OStEXTC(  ostoSay , cbData , 0 ) ;
                        OStEXTAK( ostoSay , "    " ) ;
                        OStEXTC(  ostoSay , cTriesP , 0 ) ;

                        etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;

                        tinP.pEther->tracePoolTalliesF( tinP ) ;

                        thirdC::dosSleepRWinkIF( tinP ) ;

                        //BLAMMO ; //U:: TO FIND A BUG 20171201@1438
                    }
                    else break ;
                }
            }
            bFail = !!POOP ;
            THREADmODE1rESTORE ;
        }
    
        if( bFail && pbNapkin )
        {
            BLAMMO ; // I DO THIS TO FORCE THE FUNCTIONS THAT I CALL TO DELIVER A SENSIBLE RESULT
        }

        if( POOP )
        {
            //DOES NOT WORK:LOGrAW3( "napkinC::napkinC: blammo [cbP]: " , cbP , "\r\n" ) ;
            BLAMMO
        }
    
        if( bNoQuit ) { __Z( pbNapkin ) ; }
    }
    
    if( POOP ) BLAMMO
    else if( !pbNapkin )
    {
        bDataAreaFormatted = 0 ;

        if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
        {
            pzbMemorySpaceUse->ungrabF( tinP ) ;
            THREADmODE4rESTORE0( flThreadMode4Save )
        }
        THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )

        tinP.cYield = 0 ;
        thirdC::dosPriorityIF( tinP , idDesireCtSave ) ;
    }
    else
    {
        bDataAreaFormatted = 0 ;

        //CS:CODEsYNC: 3603e003 3603e007
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )           // I CREATED THE SHARED MEMORY
        {
            if( !( F(flagsCt) & flNAPKINc_DOnOTcOMMIT ) )
            {
                ((napkinHeaderS*)pbNapkin)->cbData     = cbP ;
                ((napkinHeaderS*)pbNapkin)->cRef       = 1   ;
                ((napkinHeaderS*)pbNapkin)->bFormatted = 0   ;

                //TO FIND A BUG
                //OStEXT(   ostoSay , TUCK ) ;
                //OStEXTAK( ostoSay , "napkinC 1: +**+ [cRef after set to 1,idAdam,postP]:    " ) ;
                //OStEXTC(  ostoSay , ((napkinHeaderS*)pbNapkin)->cRef , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTC(  ostoSay , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTA(  ostoSay , postName ) ;
                //OStEXTAK( ostoSay , "\r\n" ) ;
                //LOGrAW(   ostoSay ) ;
            }
            else
            {
                if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )          //20201030@1142: BUG?: CONJ: SHOULD NOT BE UNGRABBING HERE (MUST REMAIN GRABBED UNTIL formattingIsDoneF IS CALLED)
                {
                    pzbMemorySpaceUse->ungrabF( tinP ) ;           //U::BUG: napGuts IS FULLY CT WITHOUT EVER UNGRABBING THIS
                    THREADmODE4rESTORE0( flThreadMode4Save )
                }

                THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )
            }
        }
        else                                                                                // THE SHARED MEMORY ALREADY EXISTED
        {
            if( !( F(flagsCt) & flNAPKINc_DOnOTcOMMIT ) )
            {
                //CANNOT TEST FOR THIS BECAUSE RACE; ANOTHER THREAD MIGHT HAVE JUST DEC BUT NOT YET CLOSED HANDLE: 
                //if( !((napkinHeaderS*)pbNapkin)->cRef       ) { BLAMMO ; }

                if( (sCountT)((napkinHeaderS*)pbNapkin)->cRef < 0 )  //IT MIGHT BE 0, BUT IT SURE AS HELL BETTER NOT BE NEGATIVE!
                {
                    //TO FIND A BUG
                    //OStEXT(   ostoSay , TUCK ) ;
                    //OStEXTAK( ostoSay , "napkinC 2: ++++ [cRef BEFORE ++++ !!!,idAdam,postP]:    " ) ;
                    //OStEXTC(  ostoSay , ((napkinHeaderS*)pbNapkin)->cRef , '0' ) ;
                    //OStEXTAK( ostoSay , "    " ) ;
                    //OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , '0' ) ;
                    //OStEXTAK( ostoSay , "    " ) ;
                    //OStEXTC(  ostoSay , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;
                    //OStEXTAK( ostoSay , "    " ) ;
                    //OStEXTA(  ostoSay , postName ) ;
                    //OStEXTAK( ostoSay , "\r\n" ) ;
                    //LOGrAW(   ostoSay ) ;

                    //tinP.pc Utility[ 0 ] = ((napkinHeaderS*)pbNapkin)->cRef ;
                    //tinP.pc Utility[ 1 ] = ((napkinHeaderS*)pbNapkin)->cRef ;
                    //tinP.pc Utility[ 2 ] = ((napkinHeaderS*)pbNapkin)->cRef ;
                    //tinP.pc Utility[ 3 ] = ((napkinHeaderS*)pbNapkin)->cRef ;
                    BLAMMO ;
                }

                inc02AM( ((napkinHeaderS*)pbNapkin)->cRef ) ;

                //TO FIND A BUG
                //OStEXT(   ostoSay , TUCK ) ;
                //OStEXTAK( ostoSay , "napkinC 3: ++++ [cRef after ++++    ,idAdam,postP]:    " ) ;
                //OStEXTC(  ostoSay , ((napkinHeaderS*)pbNapkin)->cRef , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTC(  ostoSay , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;
                //OStEXTAK( ostoSay , "    " ) ;
                //OStEXTA(  ostoSay , postName ) ;
                //OStEXTAK( ostoSay , "\r\n" ) ;
                //LOGrAW(   ostoSay ) ;
            }

            if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
            {
                pzbMemorySpaceUse->ungrabF( tinP ) ;
                THREADmODE4rESTORE0( flThreadMode4Save )
            }
            else
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                while( getNegAM( ((napkinHeaderS*)pbNapkin)->bFormatted ) != FINGERnEG_NAPKINiSfORMATTED )
                {
                    ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                }
            }

            THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )
    
            tinP.cYield = 0 ;
            thirdC::dosPriorityIF( tinP , idDesireCtSave ) ;
        }
    }

    if( this == &processGlobal3I.napHome )
    {
        homeS* ph = (homeS*)(byteT*)*this ;
        if( !ph ) { CONoUTrAW( "napkinC::napkinC/napHome/ph is null\r\n" ) ; BLAMMO ; }
        else if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            new( 0 , tinP , (byteT*)*this , sizeof( homeS ) ) homeS( tinP ) ;
            formattingIsDoneF( tinP ) ;
        }
        else if( *this != sizeof( homeS ) ) { BLAMMO ; }
    
        *(countT*)&rootAdamGlobal1I.idCell = 1 + incv02AM( ph->idCellLath ) ;

        //20170213@1454: COMMENTED OUT WITHOUT ANALYSIS TO PERHAPS FIX UNEXPECTED PROCESSOR AFFINITY FOR KERNEL1_MONITOR ADAM
        //{
        //    countT idType = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS || etherC::ifc_idHomeIdisk_IF() < 0x100
        //        ? ifcIDtYPEtHREAD_WORKhORSE
        //        : rootAdamGlobal1I.idCell < 3
        //            ? ifcIDtYPEtHREAD_KERNEL
        //            : ifcIDtYPEtHREAD_SHOWpONY
        //    ;
        //    thirdC::osSelectProcessorsIF( tinP , idType ) ;
        //}

        //conGF( "napkinC [idAdamRoot]: " ) ;
        //conGF( processGlobal1I.idAdamRoot ) ;
        //conGF( "\r\n" ) ;

        ZE( boolT , bMemorySpaceChanged ) ;
        switch( processGlobal1I.idAdamRoot )
        {
            case ifcIDaDAM_CLOAK :
            {
                *(countT*)&tinP.pAdamGlobal1->idMemorySpace = ifcIDmEMORYsPACE_CLOAK ; //ifcIDmEMORYsPACE_CLOAK IS RESERVED FOR THE EXCLUSIVE USE OF ifcIDaDAM_CLOAK (ANTI-MALWARE SYSTEM INTEGRITY CHECKER)
                bMemorySpaceChanged = 1 ;
                //conGF( "memory space changed\r\n" ) ;
                break ;
            }
            case ifcIDaDAM_KERNEL1DRIVER :
            case ifcIDaDAM_KERNEL2MONITOR :
            {
                *(countT*)&tinP.pAdamGlobal1->idMemorySpace = ifcIDmEMORYsPACE_KERNEL ; //ifcIDmEMORYsPACE_KERNEL IS RESERVED FOR THE EXCLUSIVE USE OF THE DRIVER/MONITOR
                bMemorySpaceChanged = 1 ;
                //conGF( "memory space changed\r\n" ) ;
                break ;
            }
            //case 0x4010fff : //REMOVE IN PRODUCTION
            case ifcIDaDAM_MEMBRANEgLASS :
            {
                *(countT*)&tinP.pAdamGlobal1->idMemorySpace = ifcIDmEMORYsPACE_MEMBRANE ; //ifcIDmEMORYsPACE_MEMBRANE IS WRITTEN BY KERNEL AND READ BY ifcIDaDAM_MEMBRANEgLASS; NO OTHER PROCESS MAY ACCESS THE MEMBRANE SPACE
                bMemorySpaceChanged = 1 ;
                //conGF( "memory space changed\r\n" ) ;
                break ;
            }
            case ifcIDaDAM_WATCH :
            case ifcIDaDAM_WATCHiDLEcPU :
            case ifcIDaDAM_PREPARElISTS : //THIS LINE FACILITATES DEBUGGING AND HAS NO EFFECT IN PRODUCTION
            {
                *(countT*)&tinP.pAdamGlobal1->idMemorySpace = ifcIDmEMORYsPACE_WATCH ;
                bMemorySpaceChanged = 1 ;
                //conGF( "memory space changed\r\n" ) ;
                break ;
            }
        }

        //CONoUTrAW5( "napkinC::napkinC/napHome/[idCell,idMemorySpace]: " , rootAdamGlobal1I.idCell , " " , rootAdamGlobal1I.idMemorySpace , "\r\n" ) ;

        if( bMemorySpaceChanged )
        {
            grabMemorySpaceC* pgu = &processGlobal3I.grabMemorySpace ;
            DELzOMBIE( pgu ) ;
            new( 0 , tinP , (byteT*)&processGlobal3I.grabMemorySpace , sizeof processGlobal3I.grabMemorySpace ) grabMemorySpaceC( tinP , ifcIDgRABlAYER_cGRABmEMORYsPACEc ) ;

            if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
            {
                batonC* pbu = &processGlobal4I.bMemorySpace ;
                DELzOMBIE( pbu ) ;
                new( 0 , tinP , (byteT*)&processGlobal4I.bMemorySpace , sizeof processGlobal4I.bMemorySpace ) batonC( tinP , TAG( TAGiDnULL ) , "bMemorySpace" , ifcIDgRABlAYER_cGRABmEMORYsPACEc | flBATONc_NOTjEALOUS , flBATONc_DOnOTsERIALIZEnAPKIN ) ;
            }
        }

        processGlobal1I.flCt |= flCTdTg_napHomeI ;

        //OStEXT( ostol , 0x80 )
        //OStEXTAK( ostol , " idMemorySpace: " )
        //OStEXTC( ostol , rootAdamGlobal1I.idMemorySpace , 0 )
        //OStEXTAK( ostol , "\r\n" )
        //CONoUTrAW( ostol ) ;
    }
    else if( this == &processGlobal3I.napSlab )
    {
        slabS* ps = (slabS*)(byteT*)*this ;
        if( !ps ) { CONoUTrAW( "napkinC::napkinC/napSlab/ps is null\r\n" ) ; BLAMMO ; }
        else if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            new( 0 , tinP , (byteT*)*this , sizeof( slabS ) ) slabS ;
            formattingIsDoneF( tinP ) ;
        }
        else if( *this != sizeof( slabS ) ) { BLAMMO ; }

        processGlobal1I.flCt |= flCTdTg_napSlabI ;
    }
    else if( this == &processGlobal3I._grabC_napGrabWant )
    {
        if( processGlobal1I._grabC_cgw * sizeof( grabWantS ) - cbP ) { BLAMMO ; }
        if( setIfZeAM( *(countT*)&processGlobal1I._grabC_pgw , (countT)(byteT*)*this ) ) { BLAMMO ; }
    
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            thirdC::c_memsetIF( tinP , (byteT*)processGlobal1I._grabC_pgw , *this ) ;
            for( countT ogw = 0 ; ogw < processGlobal1I._grabC_cgw ; ogw ++ ) new( 0 , tinP , (byteT*)( processGlobal1I._grabC_pgw + ogw ) , sizeof( grabWantS ) ) grabWantS( tinP ) ;
            formattingIsDoneF( tinP ) ;
        }
    
        homeS* ph = (homeS*)(byteT*)processGlobal3I.napHome ;
        ph->grabTimeUnique.flags  &= ~( F(flGRABc_DISABLED) ) ;
        ph->grabSuperRandom.flags &= ~( F(flGRABc_DISABLED) ) ;
    }
    else if( this == &processGlobal4I._marketC_napGoodRegistry )
    {
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            thirdC::c_memsetIF( tinP , (byteT*)*this , (countT)*this ) ;
            formattingIsDoneF( tinP ) ;
        }
    }
    else if( this == &processGlobal7I._sexC_napGlobalRegistry )
    {
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            thirdC::c_memsetIF( tinP , (byteT*)*this , (countT)*this ) ;
            new( 0 , tinP , (byteT*)*this , sizeof( grabotC ) ) grabotC( tinP , idLineCt , idiFileCt , pbBitsCt , flGRABITc_IMAGEiSvISIBLEtOoTHERpROCESSES | flGRABITc_SHARElAYER , 0 , ifcIDgRABlAYER_8POOL5nEW ) ;
            formattingIsDoneF( tinP ) ;
        }
    }
    else if( this == &processGlobal7I._socketC_napIpMapHome )
    {
        ZE( boolT , bNew ) ;
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            bNew = 1 ;
            ipMapHomeS* pCursor = (ipMapHomeS*)(byteT*)*this ;
            countT cToDo = CiPmAPhOME ;
            while( cToDo -- ) new( 0 , tinP , (byteT*)( pCursor ++ ) , sizeof( ipMapHomeS ) ) ipMapHomeS( tinP ) ;
        }
                
        ZE( ipMapHomeS* , pMap ) ;
        if( bNew )
        {
            ipMapHomeS* const pMapArray = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
        
            for( countT offm = 0 ; offm < CiPmAPhOME ; offm ++ )
            {
                if( !setIfZeAM( pMapArray[ offm ].idHome , etherC::ifc_idHomeIdisk_IF() ) )
                {
                    pMap = pMapArray + offm ;
                    break ;
                }
            }
        }
        else
        {
            ipMapHomeS* const pMapArray = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
    
            ZE( countT , offm ) ;
            for( offm = 0 ; offm < CiPmAPhOME ; offm ++ )
            {
                if( pMapArray[ offm ].idHome == etherC::ifc_idHomeIdisk_IF() ) break ;
            }

            if( offm == CiPmAPhOME )
            {
                for( offm = 0 ; offm < CiPmAPhOME ; offm ++ )
                {
                    if( !setIfZeAM( pMapArray[ offm ].idHome , etherC::ifc_idHomeIdisk_IF() ) ) break ;
                }
            }

            if( offm < CiPmAPhOME ) pMap = pMapArray + offm ;
        }

        if( pMap && !pMap->nnHome && !( F(pMap->flagsHome) & flIPmAPhOMEs_NOmAPPING ) )
        {
            osTextT posti[ TUCK ] ;
            ZE( osTextT* , postzDomain ) ;
            ZE( osTextT* , postzMx ) ;
            nicNameC nnHome ;
            {
                OStEXT(   ostoName , TUCK << 2 ) ;
                OStEXTAK( ostoName , "c" ":\\ideafarm.home." ) ;
                OStEXTC(  ostoName , etherC::ifc_idHomeIdisk_IF() , 0 ) ;
                OStEXTAK( ostoName , ".setting.keyValue.ipmap" ) ;
    
                countT  costi = sizeof( posti ) ;
                {
                    POOPIE
                    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                    thirdC::dosReadIF( tinP , posti , costi , ostoName ) ;
                    THREADmODE1rESTORE
                    if( POOP )
                    {
                        POOPR ;
                        costi = 0 ;
                    }
                }
    
                if( costi )
                {
                    {for( countT off = 0 ; off < costi ; off ++ )
                    {
                        if( thirdC::c_strchrIF( tinP , TbLACK , posti[ off ] ) ) posti[ off ] = 0 ;
                    }}
    
                    for( countT off = 0 ; off < costi ; off ++ )
                    {
                        if( !posti[ off ] ) continue ;
    
                        ZE( osTextT** , ppo ) ;
                             if( !postzDomain ) ppo = &postzDomain ;
                        else if( !postzMx     ) ppo = &postzMx     ;
    
                        if( ppo ) *ppo = posti + off ;
                        else      nnHome = thirdC::c_atoiIF( tinP , posti + off ) ; //U::SUPPORT IPv6
    
                        off += thirdC::c_strlenIF( tinP , posti + off ) + 1 ;
                    }
                }
            }

            if( !nnHome )
            {
                pMap->flagsHome |= flIPmAPhOMEs_NOmAPPING ;
                //LOGrAW5( "" , tinP.pAdamGlobal1->idAdam , "/napkinC: no mapping for home  " , etherC::ifc_idHomeIdisk_IF() , "\r\n" ) ;
            }
            else
            {
                thirdC::c_strncpyIF( tinP , pMap->postDomainName , postzDomain , sizeof pMap->postDomainName ) ;
                thirdC::c_strncpyIF( tinP , pMap->postMxName     , postzMx     , sizeof pMap->postMxName     ) ;
                pMap->nnHome = nnHome ;

                //OStEXT( ostoLog , TUCK << 2 ) ;
                //OStEXTC( ostoLog , tinP.pAdamGlobal1->idAdam , 0 ) ;
                //OStEXTAK( ostoLog , "/napkinC: home " ) ;
                //OStEXTC( ostoLog , etherC::ifc_idHomeIdisk_IF() , 0 ) ;
                //OStEXTAK( ostoLog , " will be mapped to ports selected at run time rather than specified in code\r\n" ) ;
                //
                //LOGrAW( ostoLog ) ;
            }
        }

        if( bNew ) processGlobal7I._socketC_napIpMapHome.formattingIsDoneF( tinP ) ;
    }
    else if( bWord )
    {
        countT* pch = (countT*)(byteT*)*this ;
        if( !pch ) { BLAMMO ; }
        else if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            //LOGrAW5( "formatting data area of word napkin that contains " , *this , " bytes (memory space " , rootAdamGlobal1I.idMemorySpace , ")\r\n" )
            thirdC::c_memsetIF( tinP , (byteT*)pch , *this ) ;
            putNegAM( pch[ 0 ] , FINGERnEG_NAPwORD ) ;      // FINGERPRINT
            //pch[ 1 ]                                      // idThreadOwner (WILL BE SET BY THE CLAIMANT THREAD)
            //pch[ 2 ]                                      // NUMBER OF WORDS WRITTEN (MIGHT WRAP)
            pch[ 3 ] = CCwORD ;                             // CsLOTS (NUMBER OF WORDS CAPACITY)
            //pch[ 4 ]                                      // BEGINNING OF BUFFER AREA (USED AS CIRCULAR BUFFER)
            formattingIsDoneF( tinP ) ;
        }
        else if( *this != sizeof( countT ) * ( 4 + CCwORD ) ) { BLAMMO ; }
    }
    
    if( pbNapkin && F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED && this != &processGlobal3I.napHome ) //ASSUME: napHome IS CT WOTH
    {
        tellInfoSysNapkinS ti ;
        ti.osPid     = tinP.osPid ;
        thirdC::c_strncpyIF( tinP , ti.postName , postName , sizeof ti.postName ) ;
        ti.costName  = thirdC::c_strlenIF( tinP , ti.postName ) ;
        ti.pbData    = pbNapkin + sizeof( napkinHeaderS ) ;    // IF flNAPKINc_DOnOTcOMMIT THEN MONITOR WILL DISCOVER THE HARD WAY THAT IT CANNOT READ THIS MEMORY
        ti.cbData    = ((napkinHeaderS*)pbNapkin)->cbData ;
        ti.idLineCt  = idLineCt ;
        ti.idiFileCt = idiFileCt ;
        TELLsYSc3LIFI( ifcIDtYPEtELLsYS_NAPKINaTTACH , (byteT*)&ti , sizeof ti , idLineCt , idiFileCt )
    }

    if( POOP || !pbNapkin )
    {
        etherC& etRock = etherC::etRockIF( tinP ) ;

        etRock.traceF( tinP , T("napkinC::napkinC: could not allocate pbNapkin [idLineCtP,idiFileCtP,cbP,postP]: ")+TF2(idLineCtP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(idiFileCtP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cbP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(postP) ) ;
        etRock.traceF( tinP , T("napkinC::napkinC: tracing pool tallies") ) ;
        etRock.tracePoolTalliesF( tinP ) ;
        etRock.traceF( tinP , T("napkinC::napkinC: traced  pool tallies; now calling BLAMMO") ) ;
    
        BLAMMO ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e003.napkinc.napkinc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e004.napkinc.formattingisdonef BEGIN
#define DDNAME       "3func.3603e004.napkinc.formattingisdonef"
#define DDNUMB      (countT)0x3603e004
#define IDFILE      (countT)0x115f

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$formattingIsDoneF.0.html\"\>instances\</A\>
\<A HREF=\"5.15e0005.1.0.html\"\>definition\</A\>
i must be called exactly wo'ce after constructing me to indicate that the caller has finished formatting my data area
arguments
 tinP
*/
/**/

/*1*/voidT napkinC::formattingIsDoneF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) BLAMMO ;
        __( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) ;
        __( bDataAreaFormatted ) ;
        __( osTidCt - tinP.osTid ) ;
        __Z( pbNapkin ) ;
        if( POOP ) BLAMMO ;
    }

    _IO_

    thirdC::flushViewOfFileIF( tinP , pbNapkin , sizeof( napkinHeaderS ) + ((napkinHeaderS*)pbNapkin)->cbData ) ; //THIS IS DONE TO ENSURE THAT FINGERnEG_NAPKINiSfORMATTED CANNOT BE SEEN UNLESS THE BACKING FILE IMAGE CONTAINS A COMPLETELY FORMATTED IMAGE

    putNegAM( ((napkinHeaderS*)pbNapkin)->bFormatted , FINGERnEG_NAPKINiSfORMATTED ) ;

    bDataAreaFormatted ++ ;

    if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) )
    {
        pzbMemorySpaceUse->ungrabF( tinP ) ;
        THREADmODE4rESTORE0( flThreadMode4Save )
    }
    THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )

    thirdC::dosPriorityIF( tinP , idDesireCtSave ) ;
    tinP.cYield = 0 ;

    if( pbNapkin && this != &processGlobal3I.napHome ) //ASSUME: napHome IS CT WOTH
    {
        tellInfoSysNapkinS ti ;
        ti.osPid     = tinP.osPid ;
        thirdC::c_strncpyIF( tinP , ti.postName , postName , sizeof ti.postName ) ;
        ti.costName  = thirdC::c_strlenIF( tinP , ti.postName ) ;
        ti.pbData    = pbNapkin + sizeof( napkinHeaderS ) ;
        ti.cbData    = ((napkinHeaderS*)pbNapkin)->cbData ;
        ti.idLineCt  = idLineCt ;
        ti.idiFileCt = idiFileCt ;
        TELLsYSc3LIFI( ifcIDtYPEtELLsYS_NAPKINfORMAT , (byteT*)&ti , sizeof ti , idLineCt , idiFileCt )
    }

    if( POOP ) BLAMMO ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e004.napkinc.formattingisdonef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e005.napkinc.dief BEGIN
#define DDNAME       "3func.3603e005.napkinc.dief"
#define DDNUMB      (countT)0x3603e005
#define IDFILE      (countT)0x1160


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i must be called at least wo time for each napkinC instance
 all calls other than the wo that sets flNAPKINcsTATE_DYING will have no effect
 application code can call me to discover whether it needs to destroy an object whose image lies on the napkinC's shared memory
 ~napkinC calls me, so application code may but is not required to call me
arguments
 tinP
*/
/**/

/*1*/boolT napkinC::dieF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , bDyingAlone ) ;
    if( setFlagIfZeGF( flagsState , flNAPKINcsTATE_DYING ) )
    {
        bDyingAlone = pbNapkin && 1 == decv02AM( ((napkinHeaderS*)pbNapkin)->cRef ) ;
    
        if( bDyingAlone ) flagsState |= flNAPKINcsTATE_DYINGaLONE ; // THIS FLAG IS FOR ~napkinC
    }

    return bDyingAlone ; // THIS IS FOR APPLICATION CODE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e005.napkinc.dief END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e006.napkinc.flushf BEGIN
#define DDNAME       "3func.3603e006.napkinc.flushf"
#define DDNUMB      (countT)0x3603e006
#define IDFILE      (countT)0x1161


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT napkinC::flushF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( phFile )
    {
        //CONoUTrAW( "n" ) ;
        thirdC::flushViewOfFileIF( tinP , pbNapkin ) ;
        thirdC::dosFlushFileBuffersIF( tinP , *phFile ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e006.napkinc.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e007.napkinc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.3603e007.napkinc.operator_bytet_ptr"
#define DDNUMB      (countT)0x3603e007
#define IDFILE      (countT)0x1162


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

// TINSL CANNOT BE USED BECAUSE THAT BLOWS THE STACK DUE TO CYCLIC RECURSION INVOLVING slabC DURING CT OF GLOBALS

/*1*/napkinC::operator byteT*( voidT )/*1*/
{
    if( F(flagsState) & flNAPKINcsTATE_NOTyETcOMMITTED )
    {
        // pzbMemorySpaceUse IS USED TO SERIALIZE THE CT AND FORMATTING OF SHARED MEMORY
        // THIS MECHANISM CANNOT BE USED WHEN flNAPKINcsTATE_NOTyETcOMMITTED BECAUSE AN ARBITRARY AMOUNT OF TIME (DAYS) CAN ELAPSE BETWEEN CT AND NOW
        // THIS LACK OF PROTECTION IS HARMLESS BECAUSE flNAPKINcsTATE_NOTyETcOMMITTED CAN ONLY BE USED FOR SHARED MEMORY BACKED BY THE PAGING FILE
        // IF MULTIPLE PROCESSES OR INSTANCES CT THIS UNCOMMITTED SHARED MEMORY, THE MEMORY WILL BE COMMITTED WHEN THE WOTH CLIENT CALLS ME
        // 
        // 

        thirdC::memCommitIF( countTC() , pbNapkin , cbData ) ; //A:ASSUME: NO OTHER PROCESS OR INSTANCE HAS REFERENCED THIS SHARED MEMORY DURING THE TIME BETWEEN CT AND NOW

        flagsState &= ~F(flNAPKINcsTATE_NOTyETcOMMITTED) ;

        //CS:CODEsYNC: 3603e003 3603e007
        if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            tinS* pTin =                            F(processGlobal1I.flCt) & flCTdTg_tinMainInPool && !( F(processGlobal1I.flDt) & flCTdTg_tinMainInPool )
                ? &thirdC::third_tinS_ref_IF()
                :                                   F(processGlobal1I.flCt) & flCTdTg_tinVeryEarlyLateMainI && !( F(processGlobal1I.flDt) & flCTdTg_tinVeryEarlyLateMainI )
                    ? &processGlobal4I.tinVeryEarlyLateMain
                    :                               F(processGlobal1I.flCt) & flCTdTg_tinVeryVeryEarlyLateMainI && !( F(processGlobal1I.flDt) & flCTdTg_tinVeryVeryEarlyLateMainI )
                        ? &processGlobal3I.tinVeryVeryEarlyLateMain
                        : 0
            ;
            tinS& tinP = *pTin ;

            if( !( F(flagsCt) & flNAPKINc_DOnOTsERIALIZEcT ) ) pzbMemorySpaceUse->grabF( tinP , TAG( TAGiDnULL ) ) ;   // CALLER MUST CALL formattingIsDoneF

            if( ((napkinHeaderS*)pbNapkin)->cRef ) { BLAMMO ; } // BLAMMO BECAUSE SOMEONE HAS INCREMENTED cRef BEFORE I GOT A CHANCE TO FORMAT

            ((napkinHeaderS*)pbNapkin)->cbData     = cbData ;
            ((napkinHeaderS*)pbNapkin)->cRef       = 1   ;
            ((napkinHeaderS*)pbNapkin)->bFormatted = 0   ;
        }
        else
        {
            if( (sCountT)((napkinHeaderS*)pbNapkin)->cRef < 0 ) { BLAMMO ; } //IT MIGHT BE 0, BUT IT SURE AS HELL BETTER NOT BE NEGATIVE!

            if( !incv02AM( ((napkinHeaderS*)pbNapkin)->cRef ) ) { BLAMMO ; } // BLAMMO BECAUSE WHOEVER CREATED THE SHARED MEMORY HAS NOT FORMATTED IT
        }
    }

    return pbNapkin && ((napkinHeaderS*)pbNapkin)->cbData ? pbNapkin + sizeof( napkinHeaderS )     : 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603e* : 3func.3603e007.napkinc.operator_bytet_ptr END
