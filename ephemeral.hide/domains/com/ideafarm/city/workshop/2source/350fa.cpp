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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350fa* : 3func.350fa004.bookc.ctfilenameif BEGIN
#define DDNAME       "3func.350fa004.bookc.ctfilenameif"
#define DDNUMB      (countT)0x350fa004
#define IDFILE      (countT)0xb67


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bookC::ctFileNameIF( tinS& tinP , textC& tP , const osTextT* const postNameP , const countT idStateSpaceP , countT idMemorySpaceP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        __Z( idStateSpaceP ) ;
        __( tP.csF( tinP ) ) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    //20200417@1911: PRESERVE NULL idMemorySpaceP TO AVOID FORCING CALLER TO SET flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE
    //if( !idMemorySpaceP ) idMemorySpaceP = tinP.pAdamGlobal1->idMemorySpace ;

    _IO_
    //CS:CODEsYNC: 2340004 2340005
    tP = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF3(idMemorySpaceP?idMemorySpaceP:tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,8)+T("/stateSpaces/" )+TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+T(postNameP)+T(".bookC") ;

    //CONoUTrAW( T("bookC::ctFileNameIF [tP]: \"")+tP+T("\"\r\n") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350fa* : 3func.350fa004.bookc.ctfilenameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350fa* : 3func.350fa006.bookc.bfileexistsif BEGIN
#define DDNAME       "3func.350fa006.bookc.bfileexistsif"
#define DDNUMB      (countT)0x350fa006
#define IDFILE      (countT)0xb68


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT bookC::bFileExistsIF( tinS& tinP , etherC& etherP , const osTextT* const postNameP , const countT idStateSpaceP , countT idMemorySpaceP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( postNameP ) ;
        __Z( idStateSpaceP ) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    TN( tFile , "" ) ;
    ctFileNameIF( tinP , tFile , postNameP , idStateSpaceP , idMemorySpaceP ) ;
    boolT bExists = !!etherP.diskFileExistsF( tinP , tFile ) ;

    return bExists ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350fa* : 3func.350fa006.bookc.bfileexistsif END
