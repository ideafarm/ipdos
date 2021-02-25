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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056002.thugc.thugc BEGIN
#define DDNAME       "3func.36056002.thugc.thugc"
#define DDNUMB      (countT)0x36056002
#define IDFILE      (countT)0x11b0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1780003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thugC::thugC( voidT ) :/*1*/
flags( flTHUGc_null ) ,
cFrustratedGrabbers( 0 ) ,
bGrabbed( 0 ) ,
oThug( 0 ) ,
cbDatum( 0 ) ,
oThugDad( - 1 ) ,
oThugKid( - 1 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056002.thugc.thugc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056003.thugc.grabf BEGIN
#define DDNAME       "3func.36056003.thugc.grabf"
#define DDNUMB      (countT)0x36056003
#define IDFILE      (countT)0x11b1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
 recipes for grabbing
  hand over hand is always upward: never grab a lower thugC than you already have
  exploit the fact that thugs are never really d eleted; they are just marked as not being in use
  it is illegal to modify or refer to a thug field without grabbing it
\<A HREF=\"5.1780004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thugC::grabF( voidT )/*1*/
{
    TINSL

    const countT idDesireSave = thirdC::dosPriorityIF( tinP ) ;
    thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
    tinP.cYield = 0 ;

    countT osTidMe = dosGetInfoBlocksIdThreadIF() ;
    if( osTidMe == osTidGrabber ) BLAMMO ; //RECURSIVE GRAB
    if( cFrustratedGrabbers )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ; //IF A THREAD IS FRUSTRATED THEN ALL THREADS MUST SLEEP BEFORE ATTEMPTING TO GRAB
    }

    ZE( countT , cTries ) ;
    ZE( boolT , bMeFrustrated ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( setIfZeAM( bGrabbed , 1 ) )
        {
            if( cTries == TOCK )
            {
                inc02AM( cFrustratedGrabbers ) ;
                bMeFrustrated = 1 ;
            }

            ++ s ; thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
        }
    }
    tinP.cYield = 0 ;

    thirdC::dosPriorityIF( tinP , idDesireSave ) ;

    if( bMeFrustrated ) dec02AM( cFrustratedGrabbers ) ;
    osTidGrabber = osTidMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056003.thugc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056004.thugc.ungrabf BEGIN
#define DDNAME       "3func.36056004.thugc.ungrabf"
#define DDNUMB      (countT)0x36056004
#define IDFILE      (countT)0x11b2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1780005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thugC::ungrabF( voidT )/*1*/
{
    osTidGrabber = 0 ;
    if( !setIfEqualsAM( bGrabbed , 0 , 1 ) ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056004.thugc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056005.thugc.grabdadf BEGIN
#define DDNAME       "3func.36056005.thugc.grabdadf"
#define DDNUMB      (countT)0x36056005
#define IDFILE      (countT)0x11b3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabDadF.0.html\"\>instances\</A\>
\<A HREF=\"5.1780006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thugC::grabDadF( thugC& thugRootP )/*1*/
{
    thugC* ptc = &thugRootP ;
    if( ptc == this ) { BLAMMO ; }
    ptc->grabF() ;

    while( ptc->pKidF() != this )
    {
        ptc->pKidF()->grabF() ;
        ptc->ungrabF() ;
        ptc = ptc->pKidF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056005.thugc.grabdadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056006.thugc.freef BEGIN
#define DDNAME       "3func.36056006.thugc.freef"
#define DDNUMB      (countT)0x36056006
#define IDFILE      (countT)0x11b4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1780007.1.0.html\"\>definition\</A\>
arguments
 hoodP
  the hood in which i live
 idThugRootP
  must not be 0
  the id of the root thug of my gang (chain, linked list)
 bGrabbedP
  serializes access to idThugRootP
*/
/**/

/*1*/voidT thugC::freeF( hoodC& hoodP , countT& idThugRootP , boolT& bGrabbedP )/*1*/
{
    TINSL
    ZE( boolT , bFound ) ;
    GRABiDtHUGrOOT( bGrabbedP )
    thugC* pThug = !idThugRootP ? 0 : hoodP[ idThugRootP - 1 ] ;
    if( !pThug ) { UNGRABiDtHUGrOOT( bGrabbedP ) }
    else if( pThug == this )
    {
        bFound = 1 ;
        grabF() ;
        if( oThugKid != - 1 )
        {
            pKidF()->grabF() ;
            pKidF()->oThugDad = - 1 ;
            pKidF()->ungrabF() ;
            idThugRootP = 1 + oThugKid ;
            oThugKid = - 1 ;
        }
        UNGRABiDtHUGrOOT( bGrabbedP )
        ungrabF() ;
    }
    else
    {
        pThug->grabF() ;
        UNGRABiDtHUGrOOT( bGrabbedP )
    
        while( pThug )
        {
            thugC* pKid = pThug->pKidF() ;
            if( pKid == this )
            {
                bFound = 1 ;
                thugC* pKidKid = pKid->pKidF() ; // DAD: pThug; ME: this; KID: pKidKid
                
                grabF() ;
                pThug->oThugKid = oThugKid ;
                if( pKidKid )
                {
                    pKidKid->grabF() ;
                    pKidKid->oThugDad = oThugDad ;
                    pKidKid->ungrabF() ;
                    oThugKid = - 1 ;
                }
                oThugDad = - 1 ;
                pThug->ungrabF() ;
                ungrabF() ;
                break ;
            }

            if( pKid ) pKid->grabF() ;
            pThug->ungrabF() ;
            pThug = pKid ;
        }
    }

    if( !bFound ) BLAMMO ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056006.thugc.freef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056007.thugc.operator_shiftleft BEGIN
#define DDNAME       "3func.36056007.thugc.operator_shiftleft"
#define DDNUMB      (countT)0x36056007
#define IDFILE      (countT)0x11b5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1780008.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT thugC::operator <<( thugC& thugP )/*1*/
{
    if( this == &thugP ) { BLAMMO ; }
    if( !bGrabbed      ) { BLAMMO ; }

    thugC* ptc = this ;
    while( ptc->pKidF() ) //U::O: CALL pKidF() ONLY WO TIME PER STEP
    {
        ptc->pKidF()->grabF() ;
        ptc->ungrabF() ;
        ptc = ptc->pKidF() ;
        if( ptc == &thugP ) { BLAMMO ; }
    }

    thugP.grabF() ;
    ptc->oThugKid = thugP.oThug ;
    thugP.oThugDad = ptc->oThug ;
    ptc->ungrabF() ;
    thugP.ungrabF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056007.thugc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056008.thugc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.36056008.thugc.operator_bytet_ptr"
#define DDNUMB      (countT)0x36056008
#define IDFILE      (countT)0x11b6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1780009.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thugC::operator byteT*( voidT )/*1*/
{
    return (byteT*)this + sizeof *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056008.thugc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056009.thugc.pdadf BEGIN
#define DDNAME       "3func.36056009.thugc.pdadf"
#define DDNUMB      (countT)0x36056009
#define IDFILE      (countT)0x11b7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pDadF.0.html\"\>instances\</A\>
\<A HREF=\"5.178000a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thugC* thugC::pDadF( voidT )/*1*/
{
    thugC* ptDad = oThugDad == - 1
        ? 0
        : (thugC*)( (byteT*)this + ( oThugDad - oThug ) * ( sizeof( thugC ) + cbDatum ) )
    ;

    return ptDad ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.36056009.thugc.pdadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.3605600a.thugc.pkidf BEGIN
#define DDNAME       "3func.3605600a.thugc.pkidf"
#define DDNUMB      (countT)0x3605600a
#define IDFILE      (countT)0x11b8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pKidF.0.html\"\>instances\</A\>
\<A HREF=\"5.178000b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thugC* thugC::pKidF( voidT )/*1*/
{
    countT oCopy = oThugKid ; //I WILL WORK EVEN IF oThugKid IS VOLATILE (SEE ad40104)

    thugC* ptKid = oCopy == - 1
        ? 0
        : (thugC*)( (byteT*)this + ( oCopy - oThug ) * ( sizeof( thugC ) + cbDatum ) )
    ;

    return ptKid ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36056* : 3func.3605600a.thugc.pkidf END
