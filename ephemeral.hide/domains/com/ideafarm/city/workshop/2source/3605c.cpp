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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c002.grabc.dt_grabc BEGIN
#define DDNAME       "3func.3605c002.grabc.dt_grabc"
#define DDNUMB      (countT)0x3605c002
#define IDFILE      (countT)0x11c6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.17f0002.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/grabC::~grabC( voidT )/*1*/
{
    if( getNegAM( finger ) != FINGERnEG_GRABc ) { BLAMMO ; }
    putNegAM( finger , FINGERnEG_BASEgRABc ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c002.grabc.dt_grabc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c003.grabc.grabc BEGIN
#define DDNAME       "3func.3605c003.grabc.grabc"
#define DDNUMB      (countT)0x3605c003
#define IDFILE      (countT)0x11c7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.17f0003.1.0.html\"\>definition\</A\>
*/
/**/

//COMMENTS ON flags
// IS A CONSTANT.  BENEFITS: PREVENTS DEFAULT ASSIGNMENT OPERATOR
// IS HANDLED THIS WAY TO RESPECT PREFORMATTING

/*1*/grabC::grabC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , flagsT flagsP , countT idGrabLayerP )/*1*/ :
baseGrabC( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabC , flBASEgRABc_EXPLICITfORMATTING | ( F(flagsP) & flGRABc_NOTjEALOUS ? flBASEgRABc_NOTjEALOUS : flBASEgRABc_null ) | ( F(flagsP) & flGRABc_SNEAKYlOVER ? flBASEgRABc_SNEAKYlOVER : flBASEgRABc_null ) | ( F(flagsP) & flGRABc_SHARElAYER ? flBASEgRABc_SHARElAYER : flBASEgRABc_null ) )
{
    //CONoUTrAW( "grabC: +\r\n" ) ; //U:: TO FIND A BUG
    SCOOP

    {
        POOPIE
        FV( flGRABc , flagsP )
        if( !( F(flagsP) & flGRABc_EXPLICITfORMATTING ) ) formatF( tinP , flagsP , idLineCtP , idiFileCtP , pbBitsCtP , idGrabLayerP ) ;
        if( !idMe && !( F(flagsP) & flGRABc_DISABLED ) ) { BLAMMO ; }
        if( POOP ) { BLAMMO ; }
    }
    //CONoUTrAW( "grabC: -\r\n" ) ; //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c003.grabc.grabc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c004.grabc.formatf BEGIN
#define DDNAME       "3func.3605c004.grabc.formatf"
#define DDNUMB      (countT)0x3605c004
#define IDFILE      (countT)0x11c8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$formatF.0.html\"\>instances\</A\>
\<A HREF=\"5.17f0004.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT grabC::formatF( tinS& tinP , flagsT flagsP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , countT idGrabLayerP )/*1*/
{
    POOPIE


    if( !processGlobal1I._grabC_pgw && !( F(flagsP) & flGRABc_DISABLED ) ) { BLAMMO ; }

    thirdC::c_memsetIF( tinP , (byteT*)this + sizeof( baseGrabC ) , sizeof *this - sizeof( baseGrabC ) ) ; //U::UGLY: MIGRATE TO EXPLICIT INITIALIZATION OF MY MEMBERS
    //U::BUG: THE PRECEDING LINE WILL CLOBBER ANY VIRTUAL MEMBER TABLE THAT EXISTS

    {
        flagsT flbg = F(flagsP) & flGRABc_DOnOTrEGISTERiNtIN ? flBASEgRABc_EXPLICITfORMATTING | flBASEgRABc_DOnOTrEGISTER : flBASEgRABc_EXPLICITfORMATTING ;
        if( F(flagsP) & flGRABc_NOTjEALOUS  ) flbg |= flBASEgRABc_NOTjEALOUS  ;
        if( F(flagsP) & flGRABc_SNEAKYlOVER ) flbg |= flBASEgRABc_SNEAKYlOVER ;
        if( F(flagsP) & flGRABc_SHARElAYER  ) flbg |= flBASEgRABc_SHARElAYER  ;
        baseGrabC::formatF( tinP , idLineCtP , idiFileCtP , ifcIDtYPEdERIVEDbASEgRABc_grabC , flbg , idGrabLayerP ) ;
    }

    homeS* ph = F(processGlobal1I.flCt) & flCTdTg_napHomeI && !( F(processGlobal1I.flDt) & flCTdTg_napHomeI ) ? (homeS*)(byteT*)processGlobal3I.napHome : 0 ;

    idMe           = ph ? 1 + incv02AM( ph->idSerialLath ) : 0 ;
    flags          = flagsP ;

    idGrabberOk = 1 ;

    //TO TEST WRAP: RETAIN THIS CODE AND USE IT TO VERIFY THAT grabC DOES NOT FAIL WHEN idGrabberOk WRAPS TO 0
    //
    // TEST HISTORY
    // 20121116@1351: TESTED AOK WITH 673_ "example.gorilla.1snip.1500006a.grabC.wrapping.idGrabber"
    //
    //idGrabberHigh = - (sCountT)( TOCK << 2 ) ;
    //idGrabberOk   = idGrabberHigh + 1 ;

    putNegAM( finger , FINGERnEG_GRABc ) ;

    if( F(flags) & flGRABc_GRABBED )
    {
        grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;
        if( F(flags) & flGRABc_GRABBEDnEVERtID ) osTid = - 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c004.grabc.formatf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c005.grabc.grabf BEGIN
#define DDNAME       "3func.3605c005.grabc.grabf"
#define DDNUMB      (countT)0x3605c005
#define IDFILE      (countT)0x11c9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
pseudocode
 wait for tid lock to clear
 if kiss bank balance decrement kiss bank and return
 else
  if i already have it then just increment cGrabbed
  else
   if i am the ok: write my data into fields
   else
    if i cannot register myself in the wanter array: sleep loop until i am the ok, and then insert my data
    else   
     suspend myself
     remove myself from the wanter array
     write my data
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.17f0005.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/boolT grabC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )/*1*/
{
    boolT bDebugTrace = 0/*tinP.pc Utility[ 0 ]*/ ;      //U:: TO FIND A BUG
    if( bDebugTrace )
    {
        //tinP.pc Utility[ 0 ] = 0 ;  //U:: TO FIND A BUG
        tinP.pEther->traceF( tinP , T("U:: grabC::grabF / r") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    }

    SCOOP

    //CONoUTrAW( "+" ) ;
    //if( F(tinP.flagsThreadMode2) & flTHREADmODE2_ADAMmAINtHREAD ) { CONoUTrAW3( "" , tinP.pAdamGlobal1->idAdam , " G+\r\n" ) ; }
    //U::
    IFwHEREiSwATCHING
    {
        countT idi0 = IDIfILEcALLER( 0 ) ;
        countT idi1 = IDIfILEcALLER( 1 ) ;
        countT idi2 = IDIfILEcALLER( 2 ) ;
        countT idi3 = IDIfILEcALLER( 3 ) ;
        //ALL OF THE idAdam CASE VALUES ARE OBSOLETED: 0xghij104 -> 0x401jihg -> 0x400jihg -> list.map -> 0x51000zzz
        //if
        //(
        //    idi0 == 0x4000a01
        //)
        //{
        //    //LOGrAWtID2( "batonC::grabF called by ... by " , idi1 ) ;
        //}
    }

    if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / q") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    //ZE( countT , idInDebug ) ;
    //if( tinP.pAdamGlobal1->idAdam == 0x4010501 )
    //{
    //    static countT idInDebugLath ;
    //    idInDebug = 1 + incv02AM( idInDebugLath ) ;
    //
    //    OStEXT(   os , TUCK << 2 ) ;
    //    OStEXTC(  os , idInDebug , '0' ) ;
    //    OStEXTAK( os , " | " ) ;
    //    OStEXTC9( os , tinP.osTid ) ;
    //    OStEXTAK( os , " | " ) ;
    //    OStEXTC(  os , tinP.monitor.idThread , 0 ) ;
    //    OStEXTAK( os , " " ) ;
    //    OStEXTA(  os , tinP.postThreadName ) ;
    //    OStEXTAK( os , " | {" ) ;
    //    OStEXTC(  os , this , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idLineCt , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idiFileCt , 0 ) ;
    //    OStEXTAK( os , "} ++++" ) ;
    //
    //    for( countT offi = 0 ; offi < sizeof tinP.pPanLifiRecurseGrabbedLevel / sizeof tinP.pPanLifiRecurseGrabbedLevel[ 0 ] ; offi ++ )
    //    {
    //        if( !( offi % 5 ) )
    //        {
    //            if( !tinP.pPanLifiRecurseGrabbedLevel[ offi ] )
    //            {
    //                offi += 4 ;
    //                continue ;
    //            }
    //            else { OStEXTAK(  os , " [" ) ; }
    //        }
    //        else { OStEXTAK(  os , "," ) ; }
    //        OStEXTC(   os , tinP.pPanLifiRecurseGrabbedLevel[ offi ] , 0 ) ;
    //        if( offi % 5 == 3 ) { OStEXTAK(  os , "]" ) ; }
    //    }
    //    OStEXTAK(  os , "\r\n" ) ;
    //
    //    CONoUTrAW( os ) ;
    //}

    if( osTidLock && osTidLock != tinP.osTid ) //NO OTHER THREAD GETS TO BEGIN THE GRAB RECIPE UNTIL THE LOCKER DOES HIS THANG (USUALLY GRABBING)
    {
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / p") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        const countT idDesireSave = thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;

        ZE( countT , idCycle ) ;
        tinP.cYield = 0 ;
        while( osTidLock ) thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.cYield = 0 ;
        thirdC::dosPriorityIF( tinP , idDesireSave ) ;
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / o") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    }

    boolT bGrabbed = 1 ;
    if( F(flagsP) & flGRABcGRABf_WITHDRAWkISSiF )
    {
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / n") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        if( F(flagsP) & flGRABcGRABf_CLEARkISSbANK )
        {
            for(;;)
            {
                countT vv = stat.cKissBank ;
                if( !vv ) break ;
                else if( vv == setIfEqualsAM( stat.cKissBank , 0 , vv ) )
                {
                    bGrabbed = 0 ;
                    break ;
                }
            }
        }
        else
        {
            for(;;)
            {
                countT vv = stat.cKissBank ;
                if( !vv ) break ;
                else if( vv == setIfEqualsAM( stat.cKissBank , vv - 1 , vv ) )
                {
                    bGrabbed = 0 ;
                    break ;
                }
            }
        }
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / m") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    }

    if( bGrabbed )
    {
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / l") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        if( this == &tinP.grabPseudo )
        {
            if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / k") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
            registerBegunF( tinP , idLineP , idiFileP ) ;
            if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / j") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG

            cGrabbed ++ ;
        }
        else
        {
            if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / i") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
            _IO_
    
            if( F(flags) & flGRABc_DISABLED ) { BLAMMO ; }
            if( F(tinP.flagsThreadMode1     ) &   flTHREADmODE1_DISALLOWgRABoFiNTERPROCESSgRABs && F(flags) & flGRABc_INTERpROCESS ) { BLAMMO ; }
            if( F(tinP.pAdamGlobal1->_thirdC_.flagsModeAdam1) & flADAMmODE1_DISALLOWgRABoFiNTERPROCESSgRABs && F(flags) & flGRABc_INTERpROCESS ) { BLAMMO ; }
        
            const countT osTidMe = tinP.osTid ;
            if( !osTidMe ) { BLAMMO ; }
        
            if( osTid == osTidMe && !( F(flags) & flGRABc_DISABLErECURSION ) )
            {
                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / h") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                registerBegunF( tinP , idLineP , idiFileP , flBASEgRABcrEGISTERbEGUN_RECURSING ) ;
                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / g") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                inc02AM( cGrabbed ) ;
                if( cGrabbed == - 1 ) { BLAMMO ; }
            }
            else
            {
                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / f") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                registerBegunF( tinP , idLineP , idiFileP ) ;
                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / e") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG

                //U:: EDIT THIS CODE SO THAT THE RACE IS AVOIDED WHILE ONLY CHANGING PRIORITY WHEN I NEED TO REGISTER
                // THIS MIGHT BE DONE BY INSPECTING idGrabberHigh AND SETTING SPINLOCK IF IT LOOKS LIKE I WILL PROBABLY NEED IT
                // DON'T DO THIS UNTIL KNOW THAT CHANGING THREAD PRIORITY IS TOO EXPENSIVE TO JUST ALWAYS DO IT OO TIMES HERE

                //THIS IS ONLY NEEDED FOR THE REGISTRATION BLOCK, WHICH I USUALLY WON'T EXECUTE (SINCE USUALLY idGrabberOk == idGrabberMe) ;
                // BUT IF I PUT IT THERE, THAT CREATES A RACE CONDITION: AFTER OBTAINING idGrabberMe BUT BEFORE REGISTERING MYSELF, A RUDE THREAD MIGHT YIELD SPIN
                // TRYING TO KISS ME WITH THE SPIN PREVENTING ME FROM REGISTERING MYSELF 

                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / d") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    /*S*/       const countT idDesireSave = thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    /*S*/
    /*S*/       countT idGrabberMe = 1 + incv02AM( idGrabberHigh ) ;
    /*S*/
    /*S*/       if( idGrabberOk == idGrabberMe )
    /*S*/       {
    /*S*/           thirdC::dosPriorityIF( tinP , idDesireSave ) ;
                    if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / c") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG

                    idLineGrabber      = idLineP ; //THESE ARE INFORMATORY ONLY; THEY ARE NOT RESET; THEY ARE OVERWRITTEN HERE
                    idiFileGrabber     = idiFileP ; //SINCE THESE VALUES ARE RETAINED WHEN NOT GRABBED, THE MONITOR CAN SEE WHICH GRAB LINES ARE CURRENTLY ACTIVE
                    idLineGrabberNote  = 0/*U::*/ ;
                    idiFileGrabberNote = 0/*U::*/ ;
                    idDesireGrabber    = tinP.idDesire ;
    
                    //CODE SYNCH: 17f0005 1700003
                    stat.cCollisionsNew = 0 ; //U:MIGHT OVERWRITE A FEW COLLISIONS THAT SHOULD BE COUNTED AS NEW (I.E. SINCE INCREMENTING idGrabberOk)
                    if( cGrabbed )                   { BLAMMO ; }
                    inc02AM( cGrabbed ) ;
                    if( cGrabbed == - 1 )            { BLAMMO ; }
                    if( osTid ) { BLAMMO ; }
                    else        osTid = osTidMe ;
                    inc02AM( stat.cAcquisitions ) ;
                }
    /*S*/       else
    /*S*/       {
    /*S*/           ZE( boolT , bRegistered ) ;
    /*S*/           ZE( countT , ogw ) ;
    /*S*/           if( F(flags) & flGRABc_ISsIGN || !( F(tinP.pAdamGlobal1->_thirdC_.flagsModeAdam1) & flADAMmODE1_LOGdEADLOCKS ) ) for( ogw = 0 ; ogw < processGlobal1I._grabC_cgw ; ogw ++ )
    /*S*/           {
    /*S*/               if( !setIfZeAM( processGlobal1I._grabC_pgw[ ogw ].osTid , osTidMe ) ) //ASSUME: IF !osTid THEN THE SLOT IS FREE (I.E. osTid IS THE LATH TO BE ZEED)
    /*S*/               {
    /*S*/                   if(  processGlobal1I._grabC_pgw[ ogw ].idGrab    ) { BLAMMO ; }
    /*S*/                   if(  processGlobal1I._grabC_pgw[ ogw ].idGrabber ) { BLAMMO ; }
    /*S*/                   if( !processGlobal1I._grabC_pgw[ ogw ].bDirty    ) { BLAMMO ; }
    /*S*/
    /*S*/                   handleC hProcessMe( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
    /*S*/                   hProcessMe.osF( ifcIDtYPEhANDLE_PROCESS , thirdC::osOpenProcessIF() ) ;
    /*S*/                   countT oshpMe = hProcessMe.osF( ifcIDtYPEhANDLE_PROCESS ) ;
    /*S*/                   ZE( countT , note ) ;
    /*S*/                   countT oshtMe = thirdC::osOpenThreadIF() ;
    /*S*/
    /*S*/                   countT osh = thirdC::osHandleCloneIF( tinP , note , oshtMe , ifcIDtYPEhANDLE_THREAD , oshpMe , oshpMe ) ;
    /*S*/
    /*S*/                   processGlobal1I._grabC_pgw[ ogw ].hThread.osF( ifcIDtYPEhANDLE_THREAD , (countT)osh ) ;
    /*S*/                   if( !processGlobal1I._grabC_pgw[ ogw ].hThread )
    /*S*/                   {
    /*S*/                       //CONoUTrAW( "i could not clone a thread handle to myself\r\n" ) ; //U:: USED TO BLAMMO HERE; TO MAKE SERVER RELIABLE, I NOW JUST ABANDON REGISTERING
    /*S*/                       //LOGrAWtID( "i could not clone a thread handle to myself" ) ; //U:: USED TO BLAMMO HERE; TO MAKE SERVER RELIABLE, I NOW JUST ABANDON SLOTTING
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].osTid = 0 ;
    /*S*/                   }
    /*S*/                   else
    /*S*/                   {
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].flags = F(tinP.flagsThreadMode2) & flTHREADmODE2_CHATTERgRABwANTfREEZES ? flGRABwANT_CHATTERrESUME : flGRABwANT_null ;
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].idGrab = idMe ;           // SCANNER LOOKS FOR THESE OO VALUES
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].idGrabber = idGrabberMe ; // SCANNER LOOKS FOR THESE OO VALUES
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].osPid = tinP.osPid ;
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].idThread = tinP.monitor.idThread ;
    /*S*/                       processGlobal1I._grabC_pgw[ ogw ].bDirty = 0 ;
    /*S*/    
    /*S*/                       thirdC::dosPriorityIF( tinP , idDesireSave ) ;
                                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / b") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                                bRegistered = 1 ;
                            }
                            break ;
                        }
                    }
        
    /*S*/           inc02AM( stat.cCollisions ) ;
    /*S*/           inc02AM( stat.cCollisionsNew ) ;
    /*S*/
    /*S*/           if( !bRegistered )
    /*S*/           {
    /*S*/               _IO_
    /*S*/               thirdC::dosPriorityIF( tinP , idDesireSave ) ;
                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / a") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        for(;;)
                        {
                            ++ s ; thirdC::dosSleepRawIF( tinP , 1 ) ;      //20201206@1637: 0x20 -> 1
                            if( idGrabberOk == idGrabberMe )
                            {
                                stat.cCollisionsNew = 0 ; //U:MIGHT OVERWRITE A FEW COLLISIONS THAT SHOULD BE COUNTED AS NEW (I.E. SINCE INCREMENTING idGrabberOk)
                                if( cGrabbed )                   { BLAMMO ; }
                                inc02AM( cGrabbed ) ;
                                if( cGrabbed == - 1 )            { BLAMMO ; }
                                if( idDesireGrabber )            { BLAMMO ; }
                                else                             idDesireGrabber  = tinP.idDesire ;
                                if( osTid )                      { BLAMMO ; }
                                else                             osTid = osTidMe ;
        
                                break ;
                            }
                        }
                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 9") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                        THREADmODE1rESTORE
                    }
                    else
                    {
                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 8") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                        _IO_
                        if( F(processGlobal1I._grabC_pgw[ogw].flags) & flGRABwANT_CHATTERrESUME )
                        {
                            OStEXT( ostoBuf , 0x140 )
                            OStEXTA( ostoBuf , "FROZEN " ) ;
                            OStEXTC( ostoBuf , tinP.monitor.idThread , 0 ) ;
                            OStEXTA( ostoBuf , " " ) ;
                            OStEXTA( ostoBuf , tinP.postThreadName ) ;
                            OStEXTA( ostoBuf , "\r\n" ) ;
                            thirdC::dosWriteStdOutIF( ostoBuf ) ;
                        }

                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 7") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                        thirdC::dosSuspendThreadIF( tinP ) ;
                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 6") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG

                        if( F(processGlobal1I._grabC_pgw[ogw].flags) & flGRABwANT_CHATTERrESUME )
                        {
                            OStEXT( ostoBuf , 0x140 )
                            OStEXTA( ostoBuf , "THAWED " ) ;
                            OStEXTC( ostoBuf , tinP.monitor.idThread , 0 ) ;
                            OStEXTA( ostoBuf , " " ) ;
                            OStEXTA( ostoBuf , tinP.postThreadName ) ;
                            OStEXTA( ostoBuf , "\r\n" ) ;
                            thirdC::dosWriteStdOutIF( ostoBuf ) ;
                        }
        
                        processGlobal1I._grabC_pgw[ ogw ].bDirty = 1 ;
                        processGlobal1I._grabC_pgw[ ogw ].flags = 0 ;
                        processGlobal1I._grabC_pgw[ ogw ].idThread = 0 ;
                        {
                            _IO_
                            processGlobal1I._grabC_pgw[ ogw ].hThread.closeIfF() ;
                        }
                        processGlobal1I._grabC_pgw[ ogw ].idGrab = 0 ;
                        processGlobal1I._grabC_pgw[ ogw ].idGrabber = 0 ;
                        processGlobal1I._grabC_pgw[ ogw ].osPid = 0 ;
                        processGlobal1I._grabC_pgw[ ogw ].osTid = 0 ; //MUST BE ZEED LATH; NOTE THAT bDirty IS NOT RESET
            
                        stat.cCollisionsNew = 0 ; //U:MIGHT OVERWRITE A FEW COLLISIONS THAT SHOULD BE COUNTED AS NEW (I.E. SINCE INCREMENTING idGrabberOk)
                        if( idGrabberOk != idGrabberMe ) { tinP.pcUtility[ 0xf ] = idGrabberOk ; tinP.pcUtility[ 0xe ] = idGrabberMe ; BLAMMO ; }
                        if( cGrabbed )                   { tinP.pcUtility[ 0xf ] = cGrabbed ; BLAMMO ; }
                        inc02AM( cGrabbed ) ;
                        if( cGrabbed == - 1 )            { BLAMMO ; }
                        if( idDesireGrabber )            { tinP.pcUtility[ 0xf ] = idDesireGrabber ; BLAMMO ; }
                        else                             idDesireGrabber  = tinP.idDesire ;
                        if( osTid )                      { BLAMMO ; }
                        else                             osTid = osTidMe ;
                        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 5") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
                    }
                    inc02AM( stat.cAcquisitions ) ;
                }
                if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 4") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
            }
            if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 3") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        }

        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 2") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        registerDoneF( tinP , idLineP , idiFileP ) ;
        if( bDebugTrace ) tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 1") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
    }

    if( pbBitsP ) ; //U::
    //if( (countT)this == etherC::ether_cUtility_IF( tinP , 0 ) ) { LOGrAWtID( "G-" ) ; }
    //CONoUTrAW( "-" ) ;
    //if( tinP.monitor.idThread == 1 ) { CONoUTrAW3( "" , tinP.pAdamGlobal1->idAdam , " G-\r\n" ) ; }
    //if( F(tinP.flagsThreadMode2) & flTHREADmODE2_ADAMmAINtHREAD ) { CONoUTrAW3( "" , tinP.pAdamGlobal1->idAdam , " G-\r\n" ) ; }

    //if( tinP.pAdamGlobal1->idAdam == 0x4010501 )
    //{
    //    OStEXT(   os , TUCK << 2 ) ;
    //    OStEXTC(  os , idInDebug , '0' ) ;
    //    OStEXTAK( os , " | " ) ;
    //    OStEXTC9( os , tinP.osTid ) ;
    //    OStEXTAK( os , " | " ) ;
    //    OStEXTC(  os , tinP.monitor.idThread , 0 ) ;
    //    OStEXTAK( os , " " ) ;
    //    OStEXTA(  os , tinP.postThreadName ) ;
    //    OStEXTAK( os , " | {" ) ;
    //    OStEXTC(  os , this , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idLineCt , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idiFileCt , 0 ) ;
    //    OStEXTAK( os , "} @@@@" ) ;
    //
    //    for( countT offi = 0 ; offi < sizeof tinP.pPanLifiRecurseGrabbedLevel / sizeof tinP.pPanLifiRecurseGrabbedLevel[ 0 ] ; offi ++ )
    //    {
    //        if( !( offi % 5 ) )
    //        {
    //            if( !tinP.pPanLifiRecurseGrabbedLevel[ offi ] )
    //            {
    //                offi += 4 ;
    //                continue ;
    //            }
    //            else { OStEXTAK(  os , " [" ) ; }
    //        }
    //        else { OStEXTAK(  os , "," ) ; }
    //        OStEXTC(   os , tinP.pPanLifiRecurseGrabbedLevel[ offi ] , 0 ) ;
    //        if( offi % 5 == 3 ) { OStEXTAK(  os , "]" ) ; }
    //    }
    //    OStEXTAK(  os , "\r\n" ) ;
    //
    //    CONoUTrAW( os ) ;
    //}

    //U:: TO FIND A BUG
    if( bDebugTrace )
    {
        tinP.pEther->traceF( tinP , T("U:: grabC::grabF / 0") , flTRACE_HOMEeCHO | flTRACE_FORCEnOsILENCE , ifcIDtRACEdIVERT_3 ) ; //U:: TO FIND A BUG
        //tinP.pc Utility[ 0 ] = bDebugTrace ;  //U:: TO FIND A BUG
    }

    return bGrabbed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c005.grabc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c006.grabc.ungrabf BEGIN
#define DDNAME       "3func.3605c006.grabc.ungrabf"
#define DDNUMB      (countT)0x3605c006
#define IDFILE      (countT)0x11ca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.17f0006.1.0.html\"\>definition\</A\>
any thread may call me
multiple threads can call me
the caller must ensure that i am not called too many times
 i contain code that will USUALLY detect excess ungrabs and block
 it is illegal to rely upon this code, which will fail if the asynchronous excess call occurs at a particular time
 U::conj: this is no longer true; the current code is rock solid w.r.t. racing ungrabbers
excess calls to me will block
i evaluate to the number of ungrabs i did, which will always be 1 if flagsP is flGRABcUNGRABf_null
arguments
 tinP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010393.flUNGRAB!||
*/
/**/

/*1*/countT grabC::ungrabF( tinS& tinP , const flagsT flagsP )/*1*/
{
    SCOOP

    countT cUngrabsDone = 1 ;
    if( this == &tinP.grabPseudo ) cGrabbed -- ;
    else
    {
        if( F(flags) & flGRABc_DISABLED ) { BLAMMO ; }
        if( F(tinP.flagsThreadMode1     ) &   flTHREADmODE1_DISALLOWgRABoFiNTERPROCESSgRABs && F(flags) & flGRABc_INTERpROCESS ) { BLAMMO ; }
        if( F(tinP.pAdamGlobal1->_thirdC_.flagsModeAdam1) & flADAMmODE1_DISALLOWgRABoFiNTERPROCESSgRABs && F(flags) & flGRABc_INTERpROCESS ) { BLAMMO ; }
        {
            POOPIE
            FV(flGRABcUNGRABf,flagsP)
            if( POOP ) { BLAMMO ; }
        }
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    
        _IO_
        if( F(flagsP) & flGRABcUNGRABf_IF )
        {
            if( !cGrabbed ) cUngrabsDone = 0 ;
        }
        else //U::EDIT TO NOT BLOCK IF flGRABcUNGRABf_ALLrECURSIONS IS SPECIFIED
        {
            countT cIgnore = 0x80 ;
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( !cGrabbed )
            {
                if( !cIgnore || !( -- cIgnore ) ) { BLAMMO ; } ;
    
                ++ s ; thirdC::dosSleepRawIF( tinP , 0x20 ) ;
            }
        }
    
        //CODE SYNCH: 1700002 17f0006
        if( cUngrabsDone )
        {
            ZE( boolT , bKiss ) ;
            if( !( F(flagsP) & flGRABcUNGRABf_ALLrECURSIONS ) )
            {
                unregisterF( tinP ) ;
                if( 1 == decv02AM( cGrabbed ) ) bKiss = 1 ;
            }
            else
            {
                if( osTid != tinP.osTid ) { BLAMMO ; } //CATCH PROBABLE APPLICATION CODE ERROR
    
                ZE( countT , cDone ) ;
                for(;;)
                {
                    unregisterF( tinP ) ;
                    cDone ++ ;
                    countT prior = decv02AM( cGrabbed ) ;
                    if( prior == 1 ) bKiss = 1 ;
    
                    if( (sCountT)prior <= 1 ) break ;
                }
                
                cUngrabsDone = cDone ;
            }
    
            if( bKiss )
            {
                tinP.cYield = 0 ;
                osTid = idDesireGrabber = 0 ;
        
                const countT idDesireSave = thirdC::dosPriorityIF( tinP ) ;
                thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;

                countT idGrabberKiss = 1 + incv02AM( idGrabberOk ) ;

                boolT bWoth = 1 ; //ALSO USED TO INDICATE "bKissChanged"
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ZE( boolT  , bFound ) ;
                ZE( countT , idCycle ) ;
                //while( !cGrabbed && idGrabberOk == idGrabberKiss && idGrabberKiss <= idGrabberHigh )
                while( !cGrabbed && idGrabberOk == idGrabberKiss && (sCountT)( idGrabberHigh - idGrabberKiss ) >= 0 )
                {
                    if( bWoth ) bWoth = 0 ;
                    else        thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;

                    ZE( countT , ogw ) ;
                    for( ; ogw < processGlobal1I._grabC_cgw ; ogw ++ )
                    {
                        if( processGlobal1I._grabC_pgw[ ogw ].idGrab == idMe && processGlobal1I._grabC_pgw[ ogw ].idGrabber == idGrabberKiss )
                        {
                            if( processGlobal1I._grabC_pgw[ ogw ].bDirty ) //SOME DIRTY ENTRIES ARE TENTATIVE AND WILL DISAPPEAR (E.G. IF WANTER IS WILLING TO WITHDRAW FROM KISS BANK)
                            {
                                ZE( countT , idCycle2 ) ;
                                countT save = tinP.cYield ;
                                              tinP.cYield = 0 ;
                                while( processGlobal1I._grabC_pgw[ ogw ].bDirty ) thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
                                tinP.cYield = save ;

                                if( processGlobal1I._grabC_pgw[ ogw ].idGrab != idMe || processGlobal1I._grabC_pgw[ ogw ].idGrabber != idGrabberKiss ) continue ;
                            }

                            if( !processGlobal1I._grabC_pgw[ ogw ].hThread ) { BLAMMO ; }
        
                            //U:O: USE tinP.osPid
                            //U:O: if processGlobal1I._grabC_pgw[ ogw ].osPid == tinP.osPid THEN JUST USE PSEUDOHANDLE FOR hProcessWant
                            handleC hProcessMe( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
                            hProcessMe.osF( ifcIDtYPEhANDLE_PROCESS , (countT)thirdC::osOpenProcessIF() ) ;
        
                            handleC hProcessWant = hProcessF( tinP , processGlobal1I._grabC_pgw[ ogw ].osPid , dosGetInfoBlocksIdProcessIF( tinP ) ) ;
                            if( !hProcessWant ) { BLAMMO ; }
        
                            handleC hThreadWant( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
                            hThreadWant.cloneF( processGlobal1I._grabC_pgw[ ogw ].hThread , dosGetInfoBlocksIdProcessIF( tinP ) , hProcessMe , hProcessWant ) ;
                            if( !hThreadWant ) { BLAMMO ; }
                        
                            thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ; //THIS WILL GIVE THE WANTER TIME TO GET TO SLEEP
        
                            if( F(processGlobal1I._grabC_pgw[ogw].flags) & flGRABwANT_CHATTERrESUME )
                            {
                                OStEXT( ostoBuf , 0x140 )
                                OStEXTA( ostoBuf , "heatin " ) ;
                                OStEXTC( ostoBuf , processGlobal1I._grabC_pgw[ ogw ].idThread , 0 ) ;
                                OStEXTA( ostoBuf , " (heater: " ) ;
                                OStEXTC( ostoBuf , tinP.monitor.idThread , 0 ) ;
                                OStEXTA( ostoBuf , " " ) ;
                                OStEXTA( ostoBuf , tinP.postThreadName ) ;
                                OStEXTA( ostoBuf , ")\r\n" ) ;
                                thirdC::dosWriteStdOutIF( ostoBuf ) ;
                            }
        
                            thirdC::dosResumeThreadIF( tinP , hThreadWant , 1 ) ;
                            bFound = 1 ;

                            break ;
                        }
                    }
        
                    if( !bWoth && ogw < processGlobal1I._grabC_cgw ) break ;
                }
                tinP.cYield = 0 ;

                thirdC::dosPriorityIF( tinP , idDesireSave ) ;

                if( !bFound && F(flagsP) & flGRABcUNGRABf_DEPOSITkISSiF ) inc02AM( stat.cKissBank ) ;
            }
        }
    
        THREADmODE1rESTORE
    }

    //if( tinP.pAdamGlobal1->idAdam == 0x4010501 )
    //{
    //    OStEXT(   os , TUCK << 2 ) ;
    //    OStEXTAK( os , "         | " ) ;
    //    OStEXTC9( os , tinP.osTid ) ;
    //    OStEXTAK( os , " | " ) ;
    //    OStEXTC(  os , tinP.monitor.idThread , 0 ) ;
    //    OStEXTAK( os , " " ) ;
    //    OStEXTA(  os , tinP.postThreadName ) ;
    //    OStEXTAK( os , " | {" ) ;
    //    OStEXTC(  os , this , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idLineCt , 0 ) ;
    //    OStEXTAK( os , "," ) ;
    //    OStEXTC(  os , idiFileCt , 0 ) ;
    //    OStEXTAK( os , "} ----" ) ;
    //
    //    for( countT offi = 0 ; offi < sizeof tinP.pPanLifiRecurseGrabbedLevel / sizeof tinP.pPanLifiRecurseGrabbedLevel[ 0 ] ; offi ++ )
    //    {
    //        if( !( offi % 5 ) )
    //        {
    //            if( !tinP.pPanLifiRecurseGrabbedLevel[ offi ] )
    //            {
    //                offi += 4 ;
    //                continue ;
    //            }
    //            else { OStEXTAK(  os , " [" ) ; }
    //        }
    //        else { OStEXTAK(  os , "," ) ; }
    //        OStEXTC(   os , tinP.pPanLifiRecurseGrabbedLevel[ offi ] , 0 ) ;
    //        if( offi % 5 == 3 ) { OStEXTAK(  os , "]" ) ; }
    //    }
    //    OStEXTAK(  os , "\r\n" ) ;
    //
    //    CONoUTrAW( os ) ;
    //}

    //if( (countT)this == etherC::ether_cUtility_IF( tinP , 0 ) ) { LOGrAWtID( "U-" ) ; }
    return cUngrabsDone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605c* : 3func.3605c006.grabc.ungrabf END
