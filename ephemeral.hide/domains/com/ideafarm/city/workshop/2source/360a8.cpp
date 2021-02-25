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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8002.sessionsc.dt_sessionsc BEGIN
#define DDNAME       "3func.360a8002.sessionsc.dt_sessionsc"
#define DDNUMB      (countT)0x360a8002
#define IDFILE      (countT)0x1350


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionsC::~sessionsC( voidT )/*1*/
{
    TINSL

    bQuitWatching = 1 ;
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    while( bQuitWatching )
    {
        ++ s ; ether.osSleepF( tinP , TOCK >> 3 ) ;
    }
    THREADmODE1rESTORE

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    countT cFlavors = swSession.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        nnLever_peer = *(nicNameC*)swSession.leverF( tinP , idf ) ;
        sessionC*& pSession = *(sessionC**)&(countT&)swSession ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        DEL( pSession ) ;
        THREADmODE1rESTORE
    }
    swSession.freeAllF( tinP ) ;
    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8002.sessionsc.dt_sessionsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8003.sessionsc.sessionsc BEGIN
#define DDNAME       "3func.360a8003.sessionsc.sessionsc"
#define DDNUMB      (countT)0x360a8003
#define IDFILE      (countT)0x1351


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionsC::sessionsC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
ether( etherP ) ,
baton( tinP , idLineCtP , idiFileCtP , pbBitsCtP , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS ) ,      //20190730@1456: ADDED flBATONc_NOTjEALOUS TO FIX REGRESSION BUG
idSessionLath( 0 ) ,
swSession( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , nnLever_peer ) ,
bQuitWatching( 0 ) ,
cArgWatch( (countT)this ) ,
thWatch( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , tm_sessionsC_watchF , cArgWatch )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8003.sessionsc.sessionsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8004.sessionsc.registerconnectionf BEGIN
#define DDNAME       "3func.360a8004.sessionsc.registerconnectionf"
#define DDNUMB      (countT)0x360a8004
#define IDFILE      (countT)0x1352


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC& sessionsC::registerConnectionF( tinS& tinP , const nicNameC& nnPeerP , const strokeS* const psttPeerP , const strokeS* const psttUserP , const boolT bFlushP )/*1*/
{
    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    sessionC* pSession = &(*this)( tinP , nnPeerP , psttPeerP ) ;

    timeS idle = pSession->idleF( tinP ) ;
    if( bFlushP || idle.time2 || idle.time1 > ifcTIMEtIMEOUTsESSION )
    {
        ZE( strokeS* , psttPeer ) ;
        if( psttPeerP ) { ether.strMakeF( tinP , LF , psttPeer , psttPeerP ) ; ___( psttPeer ) ; }
        else
        {
            const strokeS* zsttPeer = pSession->zsttPeerF( tinP ) ;
            if( zsttPeer ) { ether.strMakeF( tinP , LF , psttPeer , zsttPeer ) ; ___( psttPeer ) ; }
        }

        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        DEL( pSession ) ;
        THREADmODE1rESTORE
        pSession = new( 0 , tinP , LF ) sessionC( tinP , ether , TAG( TAGiDnULL ) , *this , idSessionLath , nnPeerP , psttPeer , psttUserP ) ; ___( pSession ) ;
        swSession = (countT)pSession ; //WORKS SINCE operator () SET THE LEVER AND I STILL HAVE THE GRAB
        ether.delF( tinP , psttPeer ) ;
    }
    baton.ungrabF( tinP ) ;
    return *pSession ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8004.sessionsc.registerconnectionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8005.sessionsc.unregisterconnectionf BEGIN
#define DDNAME       "3func.360a8005.sessionsc.unregisterconnectionf"
#define DDNUMB      (countT)0x360a8005
#define IDFILE      (countT)0x1353


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sessionsC::unregisterConnectionF( tinS& tinP , const nicNameC& nnPeerP )/*1*/
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8005.sessionsc.unregisterconnectionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8006.sessionsc.operator_call BEGIN
#define DDNAME       "3func.360a8006.sessionsc.operator_call"
#define DDNUMB      (countT)0x360a8006
#define IDFILE      (countT)0x1354


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sessionC& sessionsC::operator ()( tinS& tinP , const nicNameC& nnPeerP , const strokeS* const psttPeerP )/*1*/
{
    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    nnLever_peer = nnPeerP ;
    if( !swSession.idSlotOfLeverF( tinP , (countT)&nnPeerP ) )
    {
        sessionC* pSession = new( 0 , tinP , LF ) sessionC( tinP , ether , TAG( TAGiDnULL ) , *this , idSessionLath , nnPeerP , psttPeerP ) ; ___( pSession ) ;
        __( swSession ) ;
        swSession = (countT)pSession ;
    }
    sessionC& session = *(sessionC*)(countT)swSession ;
    baton.ungrabF( tinP ) ;
    return session ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a8* : 3func.360a8006.sessionsc.operator_call END
