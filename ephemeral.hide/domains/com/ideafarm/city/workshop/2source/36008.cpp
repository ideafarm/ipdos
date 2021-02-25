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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008002.batonc.dt_batonc BEGIN
#define DDNAME       "3func.36008002.batonc.dt_batonc"
#define DDNUMB      (countT)0x36008002
#define IDFILE      (countT)0xe96


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10a0002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4a00104.1.1.0.html\"\>4a00104:  WAKEsHOW( "example.simplest.func.10a0002.batonC.dt_batonC" )\</A\>
*/
/**/

/*1*/batonC::~batonC( voidT )/*1*/
{
    TINSL
    SCOOP
    _IO_
    {
        //_IO_
        if( POOP ) BLAMMO
    }

    {
        //sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( cFunctionsPending )
        {
            //_IO_
            //THE BLAMMO IS COMMENTED OUT TO ACHIEVE SYSTEM STABILITY
            //SOME CODE IS RELYING ON THIS, CODE THAT INVOLVES A batonC THAT IS NOT A signC
            //THE EXCEPTION REPORT IS UNINTELLIGIBLE BUT IT APPEARS TO BE stackC::pBaton
            //THAT THIS HAPPENS INDICATES THAT AN OBJECT THAT CONTAINS A batonC MEMBER IS BEING DESTROYED WHILE IT IS STILL BEING USED BY ANOTHER THREAD
            //U::WHEN THE SYSTEM IS OTHERWISE STABLE, ENABLE THIS BLAMMO AND ANALYZE IT

            //if( etherC::ifc_idHomeIdisk_IF() < TUCK )
            {
                //tinP.pc Utility[ 1 ] = flags ;
                //tinP.pc Utility[ 2 ] = flagsCt ;
                BLAMMOcT ; //IT IS BAD STYLE TO RELY ON THIS LOOP, WHICH CAN BE ENABLED IF NEEDED
            }

            //++ s ; thirdC::dosSleepRawIF( tinP , 0x100 ) ;
        }
    }

    const boolT bIsSign = !!( F(flags) & flBATONc_ISsIGN ) ;
    if( pNapkin )
    {
        if( !( F(pNapkin->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
        {
            pGrabA->grabNotes.flags |= bIsSign ? flGRABnOTES_DTaSsIGNc : flGRABnOTES_DTaSbATONc ;
        }
        else if( !( F(pNapkin->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYoPEN ) )
        {
            pGrabA->grabNotes.cDetach ++ ;
            pGrabA->grabNotes.flags |= bIsSign ? flGRABnOTES_DETACHEDaSsIGNc : flGRABnOTES_DETACHEDaSbATONc ;
        }
        else pGrabA->grabNotes.flags |= bIsSign ? flGRABnOTES_DETACHEDaSsIGNc : flGRABnOTES_DETACHEDaSbATONc ;

        //U::BUG: pGrabA IS NOT DESTRUCTED, SO THREAD HANDLES, IF ANY, ARE NOT CLOSED (THERE SHOULDN'T BE ANY HANDLES, BUT THIS IS NOT CLEAN CODING)
        if( F(flagsCt) & flBATONcT_NAPKINiSzOMBIE ) { DELzOMBIE( pNapkin ) ; }
        else                                        { DEL( pNapkin ) ; }
    }
    else
    {
        pGrabA->grabNotes.flags |= bIsSign ? flGRABnOTES_DTaSsIGNc : flGRABnOTES_DTaSbATONc ;
        if( pGrabA != &grabA ) // IF pNapkin THEN pGrabA POINTS INTO THE NAPKIN'S DATA AREA AND MUST NOT BE "DELETED"
        {
            DEL( pGrabA ) ;
        }
    }
    
    if( tinP.pAdamGlobal1->pPoolHomeTemp && (*tinP.pAdamGlobal1->pPoolHomeTemp)[ (byteT*)pGrabA ] )
    {
        POPUP( "U:: DELETING pGrabA in root poolOld" )
        DEL( pGrabA ) ; //U::DEBUG: TRY THIS TO SEE IF IT IS EVER ACTIVE
    }

    {
        //_IO_
        if( POOP ) BLAMMO
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008002.batonc.dt_batonc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008003.batonc.batonc BEGIN
#define DDNAME       "3func.36008003.batonc.batonc"
#define DDNUMB      (countT)0x36008003
#define IDFILE      (countT)0xe97


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10a0001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3a00104.1.1.0.html\"\>3a00104:  WAKEsHOW( "example.simplest.func.10a0001.batonC.batonC" )\</A\>
it is illegal to construct me as a static global
 this usage is reserved for system code
 it should work for application code, but it is illegal for application code to construct static global objects
works even if impotent
postP: a name for this batonC object
 can be 0
 if not 0, must be of the form T("any.name/with.slashes.and.dots")
  U::conj; this comment is incorrect; the name must be a napkinC name
  replace "com/domain" with your domain name (e.g. "com/chevrolet" or "edu/uchicago")
fFailIfExistsP: if set, then POOP will become impotent if a baton with the same name already exists
 this can be used to prevent multiple citizens of a class from being hired on the same computer
arguments
 postP
 pbZombieP
  can be 0
  it is illegal to specify a nonze value in the definition of an adam
  if not 0 then must be the address of CBzOMBIEbATONc bytes that i can use to construct a napkin in
   i will layout pbZombieP as: PAD napkinC
  i am intended for use only by system code that needs to construct a napkinC when no poolC object exists
*/
/**/

/*1*/batonC::batonC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , const countT idGrabLayerP , const flagsT flagsP , byteT* const pbZombieP , const countT cbZombieP , const countT idMemorySpaceP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
poop( flPOOP_SMELLY ) ,
cFunctionsPending( 1 ) ,
grabA( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flGRABc_DISABLED , idGrabLayerP ) ,
pGrabA( &grabA ) ,
pNapkin( 0 ) ,
flags( flagsP ) ,
flagsCt( pbZombieP ? flBATONcT_NAPKINiSzOMBIE : flBATONcT_null )
{
    SCOOP
    {
        //U::_IO_

        OStEXTV( ostoPrefix , "batonC/" )

        IFbEcAREFUL
        {
            if( POOP ) BLAMMO ;
            if( postP )
            {
                __( !postP[ 0 ] ) ;
                __( thirdC::c_strlenIF( tinP , postP ) > COSTnAPKINnAMEmAX - ostoPrefix.costF() ) ;
                FV( flBATONc , flagsP ) ;
                __( !!pbZombieP && !cbZombieP ) ;
            }
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
            if( POOP ) BLAMMO ;
        }
    
        if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
        else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

        const boolT bIsSign = !!( F(flags) & flBATONc_ISsIGN ) ;

        flagsT flagsGrab =
            ( bIsSign                                                 ? flGRABc_ISsIGN | flGRABc_DOnOTrEGISTERiNtIN | flGRABc_DISABLErECURSION : flGRABc_null                 ) |
            ( postP                                                   ? flGRABc_INTERpROCESS                                                   : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_DOnOTrEGISTERiNtIN     ? flGRABc_DOnOTrEGISTERiNtIN                                             : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_GRABBED                ? flGRABc_GRABBED                                                        : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_GRABBEDnEVERtID        ? flGRABc_GRABBEDnEVERtID                                                : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_NOTjEALOUS             ? flGRABc_NOTjEALOUS                                                     : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_SNEAKYlOVER            ? flGRABc_SNEAKYlOVER                                                    : flGRABc_null                 ) |
            (             F(flagsP) & flBATONc_SHARElAYER             ? flGRABc_SHARElAYER                                                     : flGRABc_null                 )

        ;    

        if( postP )
        {
            if( pbZombieP && cbZombieP < sizeof( napkinC ) )
            {
                LOGrAW5( "napkinC [cbZombie,sizeofNapkinC]: " , cbZombieP , " " , sizeof( napkinC ) , "\r\n" ) ;
            }

            //U::__(  pbZombieP && cbZombieP < sizeof( napkinC ) ) ;

            OStEXT(   ostoNapkinName , COSTnAPKINnAMEmAX + 1      )
            OStEXTA(  ostoNapkinName , ostoPrefix ) ;
            OStEXTA(  ostoNapkinName , postP ) ;
            if( POOP ) BLAMMO ;

            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

                flagsT flagsNapkin = F(flagsP) & flBATONc_DOnOTsERIALIZEnAPKIN ? flNAPKINc_DOnOTsERIALIZEcT : flNAPKINc_null ;

                bitsC bits( tinP , CbITSlIFI , pbBitsCtP , 1 ) ;
                if( F(flagsCt) & flBATONcT_NAPKINiSzOMBIE ) pNapkin = new( 0 , tinP , pbZombieP , sizeof( napkinC ) ) napkinC( tinP , idLineCtP , idiFileCtP , bits , ostoNapkinName , 0 , sizeof( grabAnnotatedS ) , ifcOPENsHAREDmEMORYhOW_nCeO , flagsNapkin ) ;
                else                                      { pNapkin = new( 0 , tinP , LF                            ) napkinC( tinP , idLineCtP , idiFileCtP , bits , ostoNapkinName , 0 , sizeof( grabAnnotatedS ) , ifcOPENsHAREDmEMORYhOW_nCeO , flagsNapkin ) ; ___( pNapkin ) ; }

                THREADmODE1rESTORE
            }

            __Z( pNapkin ) ;
            __( !(byteT*)*pNapkin ) ; // THIS IS REDUNDANT; THE napkinC CONSTRUCTOR WILL HAVE BLAMMO'D
            __( *pNapkin < sizeof( grabAnnotatedS ) ) ;
            grabAnnotatedS* pGrabInNapkin = (grabAnnotatedS*)(byteT*)*pNapkin ;
            __Z( pGrabInNapkin ) ;
            if( POOP ) BLAMMO

            pGrabA = pGrabInNapkin ;
            if( !( F(pNapkin->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
            {
                pGrabA->formatF( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsGrab & ~( F(flGRABc_GRABBED) ) , idGrabLayerP ) ;
    
                pGrabA->grabNotes.osTidCt = dosGetInfoBlocksIdThreadIF() ;
                pGrabA->grabNotes.osPidCt = dosGetInfoBlocksIdProcessIF( tinP ) ;
                pGrabA->grabNotes.idCt    = grabNotesS::idNextF( tinP ) ;
                pGrabA->grabNotes.flags   = bIsSign ? flGRABnOTES_CTaSsIGNc : flGRABnOTES_CTaSbATONc ;
                pGrabA->grabNotes.cAttach = 0 ;
                pGrabA->grabNotes.cDetach = 0 ;
                pNapkin->formattingIsDoneF( tinP ) ;
            }
            else if( !( F(pNapkin->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYoPEN ) )
            {
                pGrabA->grabNotes.cAttach ++ ;
                pGrabA->grabNotes.flags   |= bIsSign ? flGRABnOTES_ATTACHEDaSsIGNc : flGRABnOTES_ATTACHEDaSbATONc ;
            }
            else
            {
                pGrabA->grabNotes.flags   |= bIsSign ? flGRABnOTES_ATTACHEDaSsIGNc : flGRABnOTES_ATTACHEDaSbATONc ;
            }

            if( F(flagsGrab) & flGRABc_GRABBED && !bIsSign ) pGrabA->grabF( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ; // ASSUME: THE CALLING CODE WILL UNGRAB ME
        }
        else
        {
            ZE( grabAnnotatedS* , pGrabInPoolOrHeap ) ;
            if( tinP.pAdamGlobal1->pPoolAdamTemp ) { pGrabInPoolOrHeap = new( 0 , tinP , LF ) grabAnnotatedS( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsGrab , idGrabLayerP ) ; ___BITScT( pGrabInPoolOrHeap , 0xdd8 ) ; } //U::LEAKS
            else
            {
                countT cba = sizeof( grabAnnotatedS ) ;
                byteT* pbGrabInHeap = processGlobal3I.heap.newF( tinP , LF , cba ) ;
                if( !pbGrabInHeap ) { BLAMMO ; }
                pGrabInPoolOrHeap = new( 0 , tinP , pbGrabInHeap , cba ) grabAnnotatedS( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsGrab , idGrabLayerP ) ;
            }
    
            if( pGrabInPoolOrHeap ) pGrabA = pGrabInPoolOrHeap ;
            else                    grabA.formatF( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsGrab , idGrabLayerP ) ;
    
            pGrabA->grabNotes.osTidCt = dosGetInfoBlocksIdThreadIF() ;
            pGrabA->grabNotes.osPidCt = dosGetInfoBlocksIdProcessIF( tinP ) ;
            pGrabA->grabNotes.idCt    = grabNotesS::idNextF( tinP ) ;
            pGrabA->grabNotes.flags   = bIsSign ? flGRABnOTES_CTaSsIGNc : flGRABnOTES_CTaSbATONc ;
            pGrabA->grabNotes.cAttach = 0 ;
            pGrabA->grabNotes.cDetach = 0 ;
        }
    
        //U::REWRITE THIS UGLYASS DEFINITION!
        if( F(pGrabA->flagsF()) & flGRABc_DISABLED && pGrabA != &grabA )
        {
            BLAMMO ;
            countT foo = 2 ;
        }

        if( F(pGrabA->flagsF()) & flGRABc_DISABLED )
        {
            pGrabA = &grabA ;
            if( F(pGrabA->flagsF()) & flGRABc_DISABLED )
            {
                pGrabA->formatF( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsGrab , idGrabLayerP ) ;
    
                pGrabA->grabNotes.osTidCt = dosGetInfoBlocksIdThreadIF() ;
                pGrabA->grabNotes.osPidCt = dosGetInfoBlocksIdProcessIF( tinP ) ;
                pGrabA->grabNotes.idCt    = grabNotesS::idNextF( tinP ) ;
                pGrabA->grabNotes.flags   = bIsSign ? flGRABnOTES_CTaSsIGNc : flGRABnOTES_CTaSbATONc ;
                pGrabA->grabNotes.cAttach = 0 ;
                pGrabA->grabNotes.cDetach = 0 ;
            }
        }

        if( POOP ) BLAMMO ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008003.batonc.batonc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008004.batonc.grabf BEGIN
#define DDNAME       "3func.36008004.batonc.grabf"
#define DDNUMB      (countT)0x36008004
#define IDFILE      (countT)0xe98
    

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.10a0004.1.0.html\"\>definition\</A\>
grab the object of contention
this will block until the object can be grabbed by this thread
blocking occurs iff another thread or process is grabbing it
blocking occurs even if impotent
*/
/**/

/*1*/boolT batonC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const flagsT flagsP )/*1*/
{
    SCOOP
    inc02AM( cFunctionsPending ) ;
    ZE( boolT , bGrabbed ) ;
    {
        _IO_
        //IFbEcAREFUL
        //{
            //if( POOP ) BLAMMO
        //}

        //U:: O: MAKE A SINGLE TEST ON A MASK OF flags RATHER THAN 01 TESTS
        //     if( F(flags) & flBATONc_CHATTER1 ) { CONoUT( "batonC 1 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER2 ) { CONoUT( "batonC 2 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER3 ) { CONoUT( "batonC 3 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER4 ) { CONoUT( "batonC 4 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER5 ) { CONoUT( "batonC 5 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER6 ) { CONoUT( "batonC 6 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER7 ) { CONoUT( "batonC 7 +" ) ; }
        //else if( F(flags) & flBATONc_CHATTER8 ) { CONoUT( "batonC 8 +" ) ; }

        bGrabbed = pGrabA->grabF( tinP , TAGoR( TAGiDnULL , idLineP , idiFileP , pbBitsP ) , flagsP ) ;

        //     if( F(flags) & flBATONc_CHATTER1 ) { CONoUT( "batonC 1 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER2 ) { CONoUT( "batonC 2 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER3 ) { CONoUT( "batonC 3 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER4 ) { CONoUT( "batonC 4 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER5 ) { CONoUT( "batonC 5 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER6 ) { CONoUT( "batonC 6 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER7 ) { CONoUT( "batonC 7 G" ) ; }
        //else if( F(flags) & flBATONc_CHATTER8 ) { CONoUT( "batonC 8 G" ) ; }

        //if( POOP ) BLAMMO
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008004.batonc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008005.batonc.ungrabf BEGIN
#define DDNAME       "3func.36008005.batonc.ungrabf"
#define DDNUMB      (countT)0x36008005
#define IDFILE      (countT)0xe99


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.10a0005.1.0.html\"\>definition\</A\>
let go of the object of contention
this will allow another thread or process to grab it
works even if impotent, as long as the internally stored hBat is not 0
any thread can call me, even if it is not the thread that grabbed *this
it is illegal to call me too many times
 for maximum speed, dropping the internal counter down into negative values is not detected
 but it is illegal to craft code that exploits or depends upon this
*/
/**/

/*1*/countT batonC::ungrabF( tinS& tinP , const flagsT flagsP )/*1*/
{
    SCOOP
    inc02AM( cFunctionsPending ) ;
    ZE( countT , cUngrabbed ) ;
    {
        _IO_
        //if( POOP ) BLAMMO

        //U:: O: MAKE A SINGLE TEST ON A MASK OF flags RATHER THAN 8 TESTS
        //     if( F(flags) & flBATONc_CHATTER1 ) { CONoUT( "batonC 1 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER2 ) { CONoUT( "batonC 2 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER3 ) { CONoUT( "batonC 3 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER4 ) { CONoUT( "batonC 4 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER5 ) { CONoUT( "batonC 5 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER6 ) { CONoUT( "batonC 6 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER7 ) { CONoUT( "batonC 7 -" ) ; }
        //else if( F(flags) & flBATONc_CHATTER8 ) { CONoUT( "batonC 8 -" ) ; }

        cUngrabbed = pGrabA->ungrabF( tinP , flagsP ) ;
        //if( POOP ) BLAMMO
    }
    dec02AM( cFunctionsPending ) ;

    return cUngrabbed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36008* : 3func.36008005.batonc.ungrabf END
