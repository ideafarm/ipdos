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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36079* : 3func.36079001.processglobalendc.dt_processglobalendc BEGIN
#define DDNAME       "3func.36079001.processglobalendc.dt_processglobalendc"
#define DDNUMB      (countT)0x36079001
#define IDFILE      (countT)0x125e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/processGlobalEndC::~processGlobalEndC( voidT )/*1*/
{
    //thirdC::dosWriteStdOutIF( "~processGlobalEndC/+\r\n" ) ;

    if( !bTlsEarlyLateIF() ) bTlsEarlyLateIF() = 1 ; //CAN BE 0 IF CTRL-C OCCURS WHEN NOT EXIST HANDLER; WHICH CAUSES GLOBALS TO BE DESTROYED WITHOUT MAIN CODE EVER SETTING THIS BOOLEAN ; CAN ALSO BE 0 IF ExitProcess IS CALLED, WHICH CALLS DLL TERMINATION ENTRY POINT
    //if( !bTlsEarlyLateI ) bTlsEarlyLateI = 1 ; //CAN BE 0 IF CTRL-C OCCURS WHEN NOT EXIST HANDLER; WHICH CAUSES GLOBALS TO BE DESTROYED WITHOUT MAIN CODE EVER SETTING THIS BOOLEAN ; CAN ALSO BE 0 IF ExitProcess IS CALLED, WHICH CALLS DLL TERMINATION ENTRY POINT

    TINSL
    //thirdC::dosWriteStdOutIF( "~processGlobalEndC/1\r\n" ) ;
    if( tinP.monitor.idThread <= ClOWtHREADS && !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }

    if( thirdC::third_idPhaseProcess_IF() < ifcIDpHASEpROCESS_EPILOGdESTROYINGgLOBALS ) thirdC::third_idPhaseProcess_IF() = ifcIDpHASEpROCESS_EPILOGdESTROYINGgLOBALS ;

    //thirdC::dosWriteStdOutIF( "~processGlobalEndC/-\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36079* : 3func.36079001.processglobalendc.dt_processglobalendc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36079* : 3func.36079002.processglobalendc.processglobalendc BEGIN
#define DDNAME       "3func.36079002.processglobalendc.processglobalendc"
#define DDNUMB      (countT)0x36079002
#define IDFILE      (countT)0x125f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/processGlobalEndC::processGlobalEndC( tinS& tinP )/*1*/
{
    //B eep( TUCK * 0x18 , TUCK ) ; //U::

    if( thirdC::third_idPhaseProcess_IF() < ifcIDpHASEpROCESS_PROLOGaLLgLOBALScONSTRUCTED ) thirdC::third_idPhaseProcess_IF() = ifcIDpHASEpROCESS_PROLOGaLLgLOBALScONSTRUCTED ;

    if( tinP.monitor.idThread <= ClOWtHREADS && !( ++ processGlobal1I.pcPhaseLow[ tinP.monitor.idThread ] ) ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36079* : 3func.36079002.processglobalendc.processglobalendc END
