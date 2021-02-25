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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9002.sessionc.dt_sessionc BEGIN
#define DDNAME       "3func.360a9002.sessionc.dt_sessionc"
#define DDNUMB      (countT)0x360a9002
#define IDFILE      (countT)0x1355


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC::~sessionC( voidT )/*1*/
{
    TINSL

    //CONoUTrAW3( "" , this , " -\r\n" ) ; //TO FIND A BUG

    _IO_

    soulC soul( tinP , TAG( TAGiDnULL ) ) ;
    (*this) >> soul ;

    ZE( strokeS* , psttFolder ) ;
    if( psttUser    &&    psttUser->idAdam ) { ether.strMakeF( tinP , LF , psttFolder , psttUser        ) ; ___( psttFolder ) ; }
    else                                     { ether.strMakeF( tinP , LF , psttFolder , T("!anonymous") ) ; ___( psttFolder ) ; }

    //U::THE FINE INOUT IS TO FIND A BUG: I AM DELETING A strokeS* DROP THAT IS NOT OWNED
    { _IO_ ether.delF( tinP , *(strokeS**)&psttPeer ) ; }
    { _IO_ ether.delF( tinP , *(strokeS**)&psttUser ) ; }
    { _IO_ ether.delF( tinP , psttEmailLoggedIn     ) ; }

    ZE( strokeS* , psttPeer ) ;
    ether.strMakeF( tinP , LF , psttPeer , (strokeS*)T(nnPeer) ) ; ___( psttPeer ) ;
    ether.strReplaceF( tinP , psttPeer , 0 , T(":") , T(".") ) ;        // IPv4: a.b.c.d ; IPv6: a:b:c:d:e:f:g:h

    ZE( strokeS* , psttu ) ;
    ether.boxPutUniqueF( tinP , psttu , T("///ideafarm/ephemeral/domains/com/ideafarm/ipdos/sessions/")+TF2(etherC::ifc_idAdamI_IF(tinP),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+T(psttFolder)+T("/")+T(psttPeer)+T("/session") , WS( soul ) ) ; ___( psttu ) ;
    ether.delF( tinP , psttPeer ) ;
    { _IO_ ether.delF( tinP , psttu ) ; }
    { _IO_ ether.delF( tinP , psttFolder ) ; }
    { _IO_ ether.delF( tinP , pbAppMemory ) ; }

    countT cFlavors = swStringVariable.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        psttzKey = (strokeS*)swStringVariable.leverF( tinP , idf ) ;
        { _IO_ ether.delF( tinP , *(strokeS**)&(countT&)swStringVariable ) ; }
    }

    { _IO_ ether.delF( tinP , psttKeyDefPending ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9002.sessionc.dt_sessionc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9003.sessionc.sessionc BEGIN
#define DDNAME       "3func.360a9003.sessionc.sessionc"
#define DDNUMB      (countT)0x360a9003
#define IDFILE      (countT)0x1356


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC::sessionC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , sessionsC& sessionsP , countT& idSessionLathP , const nicNameC nnPeerP , const strokeS* const psttPeerP , const strokeS* const psttUserP ) :/*1*/
ether( etherP ) ,
sessions( sessionsP ) ,
idSession( ++ idSessionLathP ) ,
timeCt() ,
nnPeer( nnPeerP ) ,
psttPeer( psttPeerP ? (const strokeS*)psttOldC( tinP , etherP , psttPeerP ) : 0 ) ,
psttUser( psttUserP ? (const strokeS*)psttOldC( tinP , etherP , psttUserP ) : 0 ) ,
psttEmailLoggedIn( 0 ) ,
idAccountLoggedIn( 0 ) ,
idAccountCommission( 0 ) ,
idHeadFlavorOverride( 0 ) ,
flagsPrivilege( flSESSIONpRIVILEGE_null ) ,
flagsUtility( flSESSIONuTILITY_null ) ,
cTouch( - 1 ) , //SO WILL BE 0 AFTER CT
cLeverIdDispenser( 0 ) ,
swIdDispenser( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_null , cLeverIdDispenser ) ,
psttLeverUrl( 0 ) ,
swPageState( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_null , psttLeverUrl , 0 , sizeof( count8S ) ) ,
pbAppMemory( 0 ) ,
stJournal( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
psttzKey( 0 ) ,
swStringVariable( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_null , psttzKey ) ,
psttKeyDefPending( 0 )
{
    //CONoUTrAW3( "" , this , " +\r\n" ) ; //TO FIND A BUG
    _IO_
    ___( psttPeer ) ;
    ___( psttUser ) ;
    ether.osTimeNowF( tinP , *(countT*)&timeCt.time1 , *(sCountT*)&timeCt.time2 ) ;
    touchF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9003.sessionc.sessionc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9004.sessionc.operator_countt BEGIN
#define DDNAME       "3func.360a9004.sessionc.operator_countt"
#define DDNUMB      (countT)0x360a9004
#define IDFILE      (countT)0x1357


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC::operator countT( voidT ) const/*1*/
{
    return idSession ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9004.sessionc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9005.sessionc.touchf BEGIN
#define DDNAME       "3func.360a9005.sessionc.touchf"
#define DDNUMB      (countT)0x360a9005
#define IDFILE      (countT)0x1358


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::touchF( tinS& tinP , const strokeS* const psttUrlP )/*1*/
{
    _IO_
    inc02AM( cTouch ) ;

    ZE( countT , timeN1 ) ;
    ZE( sCountT , timeN2 ) ;
    ether.osTimeNowF( tinP , timeN1 , timeN2 ) ;

    timeLathTouch.time1 = timeN1 ; // THIS CAN RACE WITH OTHER THREADS SO timeLathTouch CAN CHANGE BACKWARDS TO AN EARLIER TIME
    timeLathTouch.time2 = timeN2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9005.sessionc.touchf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9006.sessionc.agef BEGIN
#define DDNAME       "3func.360a9006.sessionc.agef"
#define DDNUMB      (countT)0x360a9006
#define IDFILE      (countT)0x1359


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/timeS sessionC::ageF( tinS& tinP )/*1*/
{
    _IO_
    timeS timeAge ;
    ether.osTimeNowF( tinP , timeAge.time1 , timeAge.time2 ) ;
    ether.osTimeSubtractF( tinP , timeAge.time1 , timeAge.time2 , timeCt.time1 , timeCt.time2 ) ;
    return timeAge ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9006.sessionc.agef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9007.sessionc.idlef BEGIN
#define DDNAME       "3func.360a9007.sessionc.idlef"
#define DDNUMB      (countT)0x360a9007
#define IDFILE      (countT)0x135a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/timeS sessionC::idleF( tinS& tinP )/*1*/
{
    _IO_
    timeS timeIdle ;
    ether.osTimeNowF( tinP , timeIdle.time1 , timeIdle.time2 ) ;
    ether.osTimeSubtractF( tinP , timeIdle.time1 , timeIdle.time2 , timeLathTouch.time1 , timeLathTouch.time2 ) ;
    return timeIdle ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9007.sessionc.idlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9008.sessionc.operator_shiftright BEGIN
#define DDNAME       "3func.360a9008.sessionc.operator_shiftright"
#define DDNUMB      (countT)0x360a9008
#define IDFILE      (countT)0x135b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::operator >>( soulC& sP )/*1*/
{
    TINSL

    _IO_
    sP << (countT)FINGERnEG_SESSIONcsOUL ;
    sP << (countT)9 ; //idFormat
    sP << processGlobal1I.idAdamRoot ; //idFormat >= 3
    sP << idSession ;
    sP << timeCt.time1 ;
    sP << (countT)timeCt.time2 ;
    nnPeer >> sP ;
    sP << psttPeer ;
    sP << psttUser ; //idFormat >= 6
    //sP << psttUserLag ; // 7 <= idFormat <= 8
    sP << timeLathTouch.time1 ;
    sP << (countT)timeLathTouch.time2 ;
    sP << cTouch ; //idFormat >= 4

    // idFormat >= 8
    swIdDispenser.grabF( tinP , TAG( TAGiDnULL ) ) ;
    countT cFlavors = swIdDispenser.cFlavorsF( tinP ) ;
    sP << cFlavors ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLeverIdDispenser = swIdDispenser.leverF( tinP , idf ) ;
        sP << cLeverIdDispenser ;
        sP << (countT)swIdDispenser ;
    }
    swIdDispenser.ungrabF( tinP ) ;

    //sP << idAdLath ;    // 5 <= idFormat <= 7
    //sP << idSlideLath ; // 5 <= idFormat <= 7
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9008.sessionc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9009.sessionc.privilegesf BEGIN
#define DDNAME       "3func.360a9009.sessionc.privilegesf"
#define DDNUMB      (countT)0x360a9009
#define IDFILE      (countT)0x135c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::privilegesF( tinS& tinP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV(flSESSIONpRIVILEGE,flagsP) ;
        if( POOP ) return ;
    }

    flagsPrivilege = flagsP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9009.sessionc.privilegesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900a.sessionc.privilegesf BEGIN
#define DDNAME       "3func.360a900a.sessionc.privilegesf"
#define DDNUMB      (countT)0x360a900a
#define IDFILE      (countT)0x135d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT sessionC::privilegesF( tinS& tinP ) const/*1*/
{
    return flagsPrivilege ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900a.sessionc.privilegesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900b.sessionc.ctouchf BEGIN
#define DDNAME       "3func.360a900b.sessionc.ctouchf"
#define DDNUMB      (countT)0x360a900b
#define IDFILE      (countT)0x135e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sessionC::cTouchF( tinS& tinP )/*1*/
{
    return cTouch ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900b.sessionc.ctouchf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900c.sessionc.dispenseidf BEGIN
#define DDNAME       "3func.360a900c.sessionc.dispenseidf"
#define DDNUMB      (countT)0x360a900c
#define IDFILE      (countT)0x135f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sessionC::dispenseIdF( tinS& tinP , const countT cLeverP , const boolT bPriorP )/*1*/
{
    _IO_
    swIdDispenser.grabF( tinP , TAG( TAGiDnULL ) ) ;
    cLeverIdDispenser = cLeverP ;
    countT vv = bPriorP
        ? -- ((countT&)swIdDispenser)
        : ++ ((countT&)swIdDispenser)
    ;
    swIdDispenser.ungrabF( tinP ) ;
    return vv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900c.sessionc.dispenseidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900d.sessionc.operator_bytet_ptr_ref BEGIN
#define DDNAME       "3func.360a900d.sessionc.operator_bytet_ptr_ref"
#define DDNUMB      (countT)0x360a900d
#define IDFILE      (countT)0x1360


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC::operator byteT*&( voidT )/*1*/
{
    return pbAppMemory ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900d.sessionc.operator_bytet_ptr_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900e.sessionc.setemailf BEGIN
#define DDNAME       "3func.360a900e.sessionc.setemailf"
#define DDNUMB      (countT)0x360a900e
#define IDFILE      (countT)0x1361


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::setEmailF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    _IO_
    ether.delF( tinP , psttEmailLoggedIn ) ;
    if( psttP )
    {
        ether.strMakeF( tinP , LF , psttEmailLoggedIn , psttP ) ; ___( psttEmailLoggedIn ) ;
        ether.strConvertToLowerCaseF( tinP , psttEmailLoggedIn ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900e.sessionc.setemailf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900f.sessionc.getemailf BEGIN
#define DDNAME       "3func.360a900f.sessionc.getemailf"
#define DDNUMB      (countT)0x360a900f
#define IDFILE      (countT)0x1362


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::getEmailF( tinS& tinP , strokeS*& psttP )/*1*/
{
    _IO_
    __NZ( psttP ) ;
    strokeS* psttzCopy = psttEmailLoggedIn ;
    if( psttzCopy ) { ether.strMakeF( tinP , LF , psttP , psttzCopy ) ; ___( psttP ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a900f.sessionc.getemailf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9010.sessionc.setidaccountf BEGIN
#define DDNAME       "3func.360a9010.sessionc.setidaccountf"
#define DDNUMB      (countT)0x360a9010
#define IDFILE      (countT)0x1363


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::setIdAccountF( tinS& tinP , const countT idAccountP )/*1*/
{
    idAccountLoggedIn = idAccountP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9010.sessionc.setidaccountf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9011.sessionc.getidaccountf BEGIN
#define DDNAME       "3func.360a9011.sessionc.getidaccountf"
#define DDNUMB      (countT)0x360a9011
#define IDFILE      (countT)0x1364


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sessionC::getIdAccountF( tinS& tinP )/*1*/
{
    return idAccountLoggedIn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9011.sessionc.getidaccountf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9012.sessionc.setidheadflavoroverridef BEGIN
#define DDNAME       "3func.360a9012.sessionc.setidheadflavoroverridef"
#define DDNUMB      (countT)0x360a9012
#define IDFILE      (countT)0x1365


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::setIdHeadFlavorOverrideF( tinS& tinP , const countT idP )/*1*/
{
    idHeadFlavorOverride = idP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9012.sessionc.setidheadflavoroverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9013.sessionc.getidheadflavoroverridef BEGIN
#define DDNAME       "3func.360a9013.sessionc.getidheadflavoroverridef"
#define DDNUMB      (countT)0x360a9013
#define IDFILE      (countT)0x1366


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sessionC::getIdHeadFlavorOverrideF( tinS& tinP )/*1*/
{
    return idHeadFlavorOverride ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9013.sessionc.getidheadflavoroverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9014.sessionc.setidaccountcommissionf BEGIN
#define DDNAME       "3func.360a9014.sessionc.setidaccountcommissionf"
#define DDNUMB      (countT)0x360a9014
#define IDFILE      (countT)0x1367


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::setIdAccountCommissionF( tinS& tinP , const countT idAccountP )/*1*/
{
    idAccountCommission = idAccountP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9014.sessionc.setidaccountcommissionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9015.sessionc.getidaccountcommissionf BEGIN
#define DDNAME       "3func.360a9015.sessionc.getidaccountcommissionf"
#define DDNUMB      (countT)0x360a9015
#define IDFILE      (countT)0x1368


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sessionC::getIdAccountCommissionF( tinS& tinP )/*1*/
{
    return idAccountCommission ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9015.sessionc.getidaccountcommissionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9016.sessionc.setflagsutilityf BEGIN
#define DDNAME       "3func.360a9016.sessionc.setflagsutilityf"
#define DDNUMB      (countT)0x360a9016
#define IDFILE      (countT)0x1369


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionC::setFlagsUtilityF( tinS& tinP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV(flSESSIONuTILITY,flagsP) ;
        if( POOP ) return ;
    }

    flagsUtility = flagsP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9016.sessionc.setflagsutilityf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9017.sessionc.getflagsutilityf BEGIN
#define DDNAME       "3func.360a9017.sessionc.getflagsutilityf"
#define DDNUMB      (countT)0x360a9017
#define IDFILE      (countT)0x136a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT sessionC::getFlagsUtilityF( tinS& tinP ) const/*1*/
{
    return flagsUtility ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a9* : 3func.360a9017.sessionc.getflagsutilityf END
