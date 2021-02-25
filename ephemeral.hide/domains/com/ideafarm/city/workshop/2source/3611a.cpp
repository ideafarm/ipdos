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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a003.eyec.eyec BEGIN
#define DDNAME       "3func.3611a003.eyec.eyec"
#define DDNUMB      (countT)0x3611a003
#define IDFILE      (countT)0x14d7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/eyeC::eyeC( tinS& tinP , etherC& etherP ) :/*1*/
ether( etherP ) ,
associateC( tinP , etherP , IDgROUP , sizeof( assViewStqS ) ) ,
vAt( tinP , etherP ) ,
aHeading( 0 ) ,
aElevation( 0 ) ,
aBank( 0 ) ,
matEyeFromWorld( pm9EyeFromWorld , 3 ) ,
flagsUtility( flEYEc_null )
{
    rotationAM( pm9EyeFromWorld , &aHeading , &aElevation , &aBank ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a003.eyec.eyec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a004.eyec.wheref BEGIN
#define DDNAME       "3func.3611a004.eyec.wheref"
#define DDNUMB      (countT)0x3611a004
#define IDFILE      (countT)0x14d8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeC::whereF( vectorOldC& vAtP , measureT& aHeadingP , measureT& aElevationP , measureT& aBankP ) const/*1*/
{
    vAtP        = vAt        ;
    aHeadingP   = aHeading   ;
    aElevationP = aElevation ;
    aBankP      = aBank      ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a004.eyec.wheref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a006.eyec.behindf BEGIN
#define DDNAME       "3func.3611a006.eyec.behindf"
#define DDNUMB      (countT)0x3611a006
#define IDFILE      (countT)0x14d9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/vectorOldC eyeC::behindF( tinS& tinP , vectorOldC& e1P , vectorOldC& e2P ) const/*1*/
{
    vectorOldC found( tinP , ether ) ; // THIS WILL REMAIN NULL UNLESS THERE IS A CLEAR NEED TO CALCULATE AN INTERMEDIATE "BEHIND POINT"

    if
    (
        /*AT LEAST WO ENDPOINT IS BEHIND ME*/                                           ( e1P( 3 ) <= - FUZZ1 || e2P( 3 ) <= FUZZ1 )
        &&
        (
            /*1 IS TO MY LEFT AND 2 IS TO MY RIGHT*/                                    ( e1P( 1 ) <= - FUZZ1 && FUZZ1 <= e2P( 1 ) )
            ||
            /*2 IS TO MY LEFT AND 1 IS TO MY RIGHT*/                                    ( e2P( 1 ) <= - FUZZ1 && FUZZ1 <= e1P( 1 ) )
        )
    )
    {
        measureT magx1 = e1P( 1 ) >= 0 ? e1P( 1 ) : - e1P( 1 ) ;
        measureT magx2 = e2P( 1 ) >= 0 ? e2P( 1 ) : - e2P( 1 ) ;
        measureT ratio = magx1 / ( magx1 + magx2 ) ;
        
        vectorOldC  diff( tinP , ether ) ;
        diff = e2P - e1P ;
        diff *= ratio ;
        
        vectorOldC maybe( tinP , ether ) ;
        maybe = e1P + diff ;

        if( maybe( 3 ) < - FUZZ1 )
        {
            found = maybe ;
            found( 1 ) = 0.0 ; // QUASHES TINY ABSOLUTE VALUE THAT IS DUE TO CALCULATION ERRORS
        }
    }

    return found ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a006.eyec.behindf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a007.eyec.directionf BEGIN
#define DDNAME       "3func.3611a007.eyec.directionf"
#define DDNUMB      (countT)0x3611a007
#define IDFILE      (countT)0x14da


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i return true iff heading is undefined or PI (directly behind me)
aHeadingP will be set to PI if the point is "directly behind" i.e. the raw aHeadingP value is near PI or - PI
 this is done so that application code can use an equality test to detect the "directly behind" heading
parameters
 tinP
 aHeadingP
  must be 0
 aElevationP
  must be 0
 eP
  this vector need not be clean
 flagsP
*/
/**/

/*1*/boolT eyeC::directionF( tinS& tinP , measureT& aHeadingP , measureT& aElevationP , const vectorOldC& eP , const flagsT flagsP ) const/*1*/
{
    if( aHeadingP || aElevationP ) { BLAMMO ; }

    measureT pmXYZ[] = { eP( 1 ) , eP( 2 ) , eP( 3 ) } ;
    return directionAM( aHeadingP , aElevationP , pmXYZ , !!( F(flagsP) & flEYEdIRECTION_SNAPhEADINGtOpI ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a007.eyec.directionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a008.eyec.directionf BEGIN
#define DDNAME       "3func.3611a008.eyec.directionf"
#define DDNUMB      (countT)0x3611a008
#define IDFILE      (countT)0x14db


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i am mostly general but contain some adjustment code to facilitate tweaking off of the xz plane to get a valid aHeadingP
*/
/**/

/*1*/boolT eyeC::directionF( tinS& tinP , measureT& aHeadingP , measureT& aElevationP , vectorOldC& vTweakP , const vectorOldC& vTowardP , const flagsT flagsP ) const/*1*/
{
    vectorOldC vPath = vTowardP - vTweakP ;
    vectorOldC vStep = vPath ;
    vStep.clean3F() ;

    measureT mScaleT = vStep( 1 ) //"T":"target"
        ? vStep( 1 )
        : vStep( 3 )
            ? vStep( 3 )
            : vStep( 2 )
    ;
    if( mScaleT < 0.0 ) mScaleT *= - 1.0 ;

    measureT mScaleO = vStep( 3 ) //"O":"other"
        ? vStep( 3 )
        : vStep( 1 )
            ? vStep( 1 )
            : vStep( 2 )
    ;
    if( mScaleO < 0.0 ) mScaleO *= - 1.0 ;

    if( mScaleT < mScaleO ) // I USE THE DIMENSION WITH THE LARGEST DIFFERENCE ; THIS AVOIDS OVERSHOOTING, AND ALSO CAUSES TINY DIFFERENCE THAT RESULTS FROM CALCULATION ERRORS TO NOT BE USED
    {
        measureT save = mScaleT ;
                        mScaleT = mScaleO ;
                                  mScaleO = save ;
    }

    measureT delta = FUZZ3 * mScaleO ;

    if( delta < 0.0   ) delta = - delta  ;
    if( delta < FUZZ3 ) delta =   FUZZ3 ;

    if( mScaleT )
    {
        measureT mGrow = delta / mScaleT ;
        if( mGrow < 0.0 ) mGrow *= - 1.0 ;

        vStep *= mGrow ;
    }
    else vStep *= FUZZ3 ;

    ZE( boolT , bHeadingUndefined ) ;
    ZE( countT , idCycle ) ;
    while( vTweakP += vStep , aElevationP = aHeadingP = 0 , directionF( tinP , aHeadingP , aElevationP , vTweakP , flagsP ) )
    {

        if( ++ idCycle == TUCK >> 4 )
        {
            bHeadingUndefined = 1 ;
            break ;
        }
    }

    return bHeadingUndefined ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a008.eyec.directionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a009.eyec.aboveorbelowf BEGIN
#define DDNAME       "3func.3611a009.eyec.aboveorbelowf"
#define DDNUMB      (countT)0x3611a009
#define IDFILE      (countT)0x14dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/vectorOldC eyeC::aboveOrBelowF( tinS& tinP , vectorOldC& e1P , vectorOldC& e2P ) const/*1*/
{
    vectorOldC found( tinP , ether ) ; // THIS WILL REMAIN NULL UNLESS THERE IS A CLEAR NEED TO CALCULATE AN INTERMEDIATE "ABOVEbELOW POINT"

    boolT bx =
        (
            /*1 IS TO MY LEFT AND 2 IS TO MY RIGHT*/                                    ( e1P( 1 ) <= - FUZZ1 && FUZZ1 <= e2P( 1 ) )
            ||
            /*2 IS TO MY LEFT AND 1 IS TO MY RIGHT*/                                    ( e2P( 1 ) <= - FUZZ1 && FUZZ1 <= e1P( 1 ) )
        )
    ;

    boolT bz =
        (
            /*1 IS BEHIND AND 2 IS IN FRONT*/                                           ( e1P( 3 ) <= - FUZZ1 && FUZZ1 <= e2P( 3 ) )
            ||
            /*2 IS BEHIND AND 1 IS IN FRONT*/                                           ( e2P( 3 ) <= - FUZZ1 && FUZZ1 <= e1P( 3 ) )
        )
    ;

    if( bx || bz )
    {
        countT idAxis      = bx ? 1 : 3 ;
        countT idAxisOther = bx ? 3 : 1 ;

        measureT magx1 = e1P( idAxis ) >= 0 ? e1P( idAxis ) : - e1P( idAxis ) ;
        measureT magx2 = e2P( idAxis ) >= 0 ? e2P( idAxis ) : - e2P( idAxis ) ;
        measureT ratio = magx1 / ( magx1 + magx2 ) ;
        
        vectorOldC  diff( tinP , ether ) ;
        diff = e2P - e1P ;
        diff *= ratio ;
        
        vectorOldC maybe( tinP , ether ) ;
        maybe = e1P + diff ;

        if( - FUZZ1 < maybe( idAxisOther ) && maybe( idAxisOther ) < FUZZ1 )
        {
            found = maybe ;
            found( 3 ) = found( 1 ) = 0.0 ;
        }
    }

    return found ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a009.eyec.aboveorbelowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00a.eyec.movef BEGIN
#define DDNAME       "3func.3611a00a.eyec.movef"
#define DDNUMB      (countT)0x3611a00a
#define IDFILE      (countT)0x14dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeC::moveF( tinS& tinP , const vectorOldC& vDeltaAtP , const measureT deltaHeadingP , const measureT deltaElevationP , const measureT deltaBankP )/*1*/
{
    _IO_
    vAt        += vDeltaAtP       ;

    aHeading   += deltaHeadingP   ;
    aElevation += deltaElevationP ;
    aBank      += deltaBankP      ;

    //LOGrAW( T("eyeC::moveF [aHeading,aElevation,aBank]: ")+TFF(aHeading)+T(" ")+TFF(aElevation)+T(" ")+TFF(aBank)+T("\r\n") ) ;

    rotationAM( pm9EyeFromWorld , &aHeading , &aElevation , &aBank ) ;

    moonThePhotographersF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00a.eyec.movef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00b.eyec.heargossipf BEGIN
#define DDNAME       "3func.3611a00b.eyec.heargossipf"
#define DDNUMB      (countT)0x3611a00b
#define IDFILE      (countT)0x14de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT eyeC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
{
    if( idTypeP == ifcIDtYPEgOSSIP_SYSTEM && idMsgP == ifcIDmSGgOSSIP_BITMAPiSvIRGIN && ( originP.idGroupF() == /*deviceC*/ 0x36122 || originP.idGroupF() == /*displayC*/ 0x36118 ) )
    {
        flagsT save = flagsUtility ;
        flagsUtility |= flEYEc_PELdTdOnOTeRASE ;
        moonThePhotographersF( tinP ) ;
        flagsUtility = save ;
    }

    return 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00b.eyec.heargossipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00c.eyec.saycheesef BEGIN
#define DDNAME       "3func.3611a00c.eyec.saycheesef"
#define DDNUMB      (countT)0x3611a00c
#define IDFILE      (countT)0x14df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT eyeC::sayCheeseF( tinS& tinP , byteT* const pbaViewP , countT cbaViewP , associateC& viewerP )/*1*/
{
    _IO_
    if
    (
        (
            viewerP.idGroupF() == /*displayC*/ 0x36118 ||
            viewerP.idGroupF() == /*deviceC*/  0x36122
        )
        &&
        cbView   >= sizeof( assViewStqS )
        &&
        cbaViewP >= sizeof( assViewEyeS )
    )
    {
        deviceC& device = *(deviceC*)&viewerP ;

        assViewEyeS* pave = new( 0 , tinP , pbaViewP , sizeof( assViewEyeS ) ) assViewEyeS( tinP , *this , 0x10 ) ;

        stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

        if( stAss )
        {
            grabitC grabx( tinP , TAG( TAGiDnULL ) ) ; // spaceC::pelF CALLS thirdC::osThreadYieldIF, SO I MUST SET RUDE HERE
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                assViewC* pavi = (assViewC*)( &stAss.downF( tinP , hWalk ) + 1 ) ;
                if( pavi->isValidF() && pavi->idGroupF() == /*assViewStqS*/ 0x36125 )
                {
                    staqC& stqi = ((assViewStqS*)pavi)->stq_pAssView ;

                    countT ce = stqi ;
                    for( countT idi = 1 ; idi <= ce ; idi ++ )
                    {
                        spaceC& space = *(spaceC*)stqi[ idi ] ;
                        space.pEye    = this ;

                        ZE( pelC* , pPel ) ;
                        space.pelF( tinP , pPel , device ) ;
                        ___( pPel ) ;
                                        
                        pave->stq_pAssView << (countT)pPel ; pPel = 0 ;
                    }
                }
            }
            while( ~hWalk ) ;
        }

        stAss.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611a* : 3func.3611a00c.eyec.saycheesef END
