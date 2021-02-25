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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057002.grabMemorySpaceC.dt_grabMemorySpaceC BEGIN
#define DDNAME       "3func.36057002.grabMemorySpaceC.dt_grabMemorySpaceC"
#define DDNUMB      (countT)0x36057002
#define IDFILE      (countT)0x11b9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1790002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/grabMemorySpaceC::~grabMemorySpaceC( voidT )/*1*/
{
    TINSL
    backGrabMemorySpaceC* psg = (backGrabMemorySpaceC*)handle.cNoteF() ;
    if( 1 == decv02AM( psg->cRef ) ) DELzOMBIE( psg ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057002.grabMemorySpaceC.dt_grabMemorySpaceC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057003.grabMemorySpaceC.grabMemorySpaceC BEGIN
#define DDNAME       "3func.36057003.grabMemorySpaceC.grabMemorySpaceC"
#define DDNUMB      (countT)0x36057003
#define IDFILE      (countT)0x11ba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1790003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/grabMemorySpaceC::grabMemorySpaceC( tinS& tinP , const countT idGroupP , const countT idMemorySpaceP ) :/*1*/
grabitx( tinP , TAG( TAGiDnULL ) ) ,
handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SHAREDmEMORY )
{
    ZE( flagsT , flagsSharedMemory ) ;
    thirdC::dosOpenSharedMemIF( tinP , handle , flagsSharedMemory , "//napkinC/grabMemorySpaceC" , 0 , sizeof( backGrabMemorySpaceC ) , ifcOPENsHAREDmEMORYhOW_nCeO , idMemorySpaceP ) ;
    backGrabMemorySpaceC* pBack = (backGrabMemorySpaceC*)handle.cNoteF() ;
    if( !pBack ) { BLAMMO ; }
    
    if( !( F(flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
    {
        new( 0 , tinP , (byteT*)pBack , sizeof( backGrabMemorySpaceC ) ) backGrabMemorySpaceC( tinP , idGroupP ) ;
    }
    else
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( getNegAM( pBack->finger2 ) != FINGERnEG_BACKgRABmEMORYsPACEc2 )
        {
            ++ s ; thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
        }
    }

    inc02AM( pBack->cRef ) ;

    //thirdC::c_strncpyIF( tinP , tinP.postTell , "grabMemorySpaceC::grabMemorySpaceC/-( about to BLAMMO )" , sizeof tinP.postTell ) ;
    //BLAMMO ; //U::
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057003.grabMemorySpaceC.grabMemorySpaceC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057004.grabMemorySpaceC.grabf BEGIN
#define DDNAME       "3func.36057004.grabMemorySpaceC.grabf"
#define DDNUMB      (countT)0x36057004
#define IDFILE      (countT)0x11bb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1790004.1.0.html\"\>definition\</A\>
code that calls me must be at ifcTHREADpRIORITY_SPINLOCK
*/
/**/

/*1*/voidT grabMemorySpaceC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    if( tinP.idDesire != ifcTHREADpRIORITY_SPINLOCK ) { BLAMMO ; }

    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        backGrabMemorySpaceC* psg = (backGrabMemorySpaceC*)handle.cNoteF() ;
        psg->grabot.grabF( tinP , idLineP , idiFileP , pbBitsP ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057004.grabMemorySpaceC.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057005.grabMemorySpaceC.ungrabf BEGIN
#define DDNAME       "3func.36057005.grabMemorySpaceC.ungrabf"
#define DDNUMB      (countT)0x36057005
#define IDFILE      (countT)0x11bc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1790005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT grabMemorySpaceC::ungrabF( tinS& tinP )/*1*/
{
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        backGrabMemorySpaceC* psg = (backGrabMemorySpaceC*)handle.cNoteF() ;
        psg->grabot.ungrabF( tinP ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36057* : 3func.36057005.grabMemorySpaceC.ungrabf END
