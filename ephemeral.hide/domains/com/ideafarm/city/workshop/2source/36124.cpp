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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124002.associatec.dt_associatec BEGIN
#define DDNAME       "3func.36124002.associatec.dt_associatec"
#define DDNUMB      (countT)0x36124002
#define IDFILE      (countT)0x1507


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/associateC::~associateC( voidT )/*1*/
{
    TINSL

    stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( stAss )
    {
        countT cAss = stAss ;

        ZE( associateC** , ppAss ) ;
        PUSE.newF( tinP , LF , *(byteT**)&ppAss , cAss * sizeof( associateC* ) ) ; ___( ppAss ) ;
        if( ppAss )
        {
            ZE( countT , offa ) ;
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do ppAss[ offa ++ ] = (associateC*)stAss.downF( tinP , hWalk ) ;
            while( ~hWalk ) ;

            for( offa = 0 ; offa < cAss ; offa ++ ) *this -= *ppAss[ offa ] ;
        }
        PUSE( tinP , *(byteT**)&ppAss ) ;
    }

    if( stAss ) { BLAMMO ; }

    PUSE( tinP , *(byteT**)&pbZes ) ;

    stAss.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124002.associatec.dt_associatec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124003.associatec.associatec BEGIN
#define DDNAME       "3func.36124003.associatec.associatec"
#define DDNUMB      (countT)0x36124003
#define IDFILE      (countT)0x1508


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/associateC::associateC( tinS& tinP , etherC& etherP , const countT idGroupP , const countT cbViewP ) :/*1*/
idGroup( idGroupP ) ,
ether( etherP ) ,
cbView( cbViewP ) ,
stAss( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_BLOB , sizeof( countT ) + cbViewP ) ,
pbZes( 0  )
{
    PUSE.newF( tinP , LF , *(byteT**)&pbZes , sizeof( countT ) + cbViewP ) ;
    ___( pbZes ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124003.associatec.associatec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124004.associatec.operator_incrementby BEGIN
#define DDNAME       "3func.36124004.associatec.operator_incrementby"
#define DDNUMB      (countT)0x36124004
#define IDFILE      (countT)0x1509


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT associateC::operator +=( associateC& assP )/*1*/
{
    if( this == &assP ) { BLAMMO ; } //ASSOCIATION WITH SELF CAN BE ENABLED IF I EVER HAVE A REASON TO DO SO ; PROHIBITING IT MAKES THE CODE MORE TRANSPARENT
    else
    {
        TINSL

        stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

        ZE( countT , ids ) ;
        {
            *(countT*)pbZes = (countT)&assP ;
            stAss.sinkF( tinP , ids , pbZes , flSTACKsINK_UNIQUE , subtractAssBlobsF ) ;
            *(countT*)pbZes = 0 ;
        }

        if( ids )
        {
            if( cbView ) assP.sayCheeseF( tinP , (byteT*)( &stAss[ ids ] + 1 ) , cbView , *this ) ;
            assP += *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124004.associatec.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124005.associatec.operator_decrementby BEGIN
#define DDNAME       "3func.36124005.associatec.operator_decrementby"
#define DDNUMB      (countT)0x36124005
#define IDFILE      (countT)0x150a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT associateC::operator -=( associateC& assP )/*1*/
{
    if( this == &assP ) { BLAMMO ; } //ASSOCIATION WITH SELF CAN BE ENABLED IF I EVER HAVE A REASON TO DO SO ; PROHIBITING IT MAKES THE CODE MORE TRANSPARENT
    else
    {
        TINSL

        countT c_pAss = (countT)&assP ;

        stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

        boolT ids = stAss( (byteT*)&c_pAss , subtractAssBlobsF ) ;
        if( ids )
        {
            if( cbView )
            {
                assViewC* pav = (assViewC*)( &stAss[ ids ] + 1 ) ;
                if( pav->isValidF() ) { DELzOMBIE( pav ) ; } //A:ASSUME: PLATE IMAGE IS INITALIZED TO ZES SO WILL CONTAIN THE EXPECTED VALUE FOR assViewC::finger IFF A VALID IMAGE HAS BEEN CT'D
            }

            stAss.extractF( 0 , tinP ) ;
            ids = 1 ;
        }

        if( ids ) assP -= *this ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124005.associatec.operator_decrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124006.associatec.operator_countt BEGIN
#define DDNAME       "3func.36124006.associatec.operator_countt"
#define DDNUMB      (countT)0x36124006
#define IDFILE      (countT)0x150b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/associateC::operator countT( voidT ) const/*1*/
{
    return stAss ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124006.associatec.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124007.associatec.operator_element BEGIN
#define DDNAME       "3func.36124007.associatec.operator_element"
#define DDNUMB      (countT)0x36124007
#define IDFILE      (countT)0x150c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/associateC& associateC::operator []( countT idP )/*1*/
{
    return *(associateC*)stAss[ idP ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124007.associatec.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124008.associatec.walkf BEGIN
#define DDNAME       "3func.36124008.associatec.walkf"
#define DDNUMB      (countT)0x36124008
#define IDFILE      (countT)0x150d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pAssociateCBFP
  must not be 0
  i will call this callback for each view that i encounter during the walk
   the callback will be called only for views of associates that are both included and not excluded
 cArgP
  i do not use this but will pass it to the callback
 flagsP
 pczIncludeP
  can be 0
  if 0 then only the exclusion test will be applied
  if not 0 then must be a null terminated string of countT values
   each count value can be either the address of an associateC instance or an idGroup value
   if BM_HIGH  is set then the remainder of the value will be interpreted as an idGroup value referring to the associateC instance that is the subject of the view
   if BM_HIGH2 is set then the remainder of the value will be interpreted as an idGroup value referring to the assViewC   instance that is the view
   it is illegal to set both BM_HIGH and BM_HIGH2
    to specify that meaning, use oo elements in the array
 pczExcludeP
  see pczIncludeP
  if 0 then only the inclusion test will be applied
 pStqWalkerP
  must be 0
  it is illegal to specify a nonze value for this argument anywhere except within my definition
  i use this parameter when i call myself recursively
*/
/**/

/*1*/boolT associateC::walkF( tinS& tinP , associateCBFT pAssociateCBFP , countT cArgP , const flagsT flagsP , const countT* const pczIncludeP , const countT* const pczExcludeP , staqC* const pStqWalkerP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        __Z( pAssociateCBFP ) ;
        FV( flASSOCIATEcwALK , flagsP ) ;
        if( POOP ) return 0 ;
    }

    ZE( boolT , bQuit ) ;
    stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( stAss )
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            countT*     pcPlate = &stAss.downF( tinP , hWalk ) ;
            associateC& ass     = **(associateC**)pcPlate       ;
            assViewC&   assView =   *(assViewC*)( pcPlate + 1 ) ;

            if( pStqWalkerP && (*pStqWalkerP)( (countT)&ass ) ) continue ;

            if( pczIncludeP || pczExcludeP )
            {
                countT pczMe[]             = { (countT)&ass                  , 0 } ; // BM_HIGH SHOULD NOT BE APPLIED TO POINTERS BECAUSE THAT WOULD PREVENT PORTING IPDOS TO A PLATFORM THAT SUPPORTED THE USE OF ALL BITS IN POINTER VALUES (ON WINDOWS, THAT HALF OF THE ADDRESS SPACE IS RESERVED FOR SYSTEM CODE)
                countT pczMyGroupSubject[] = { ass.idGroupF() | BM_HIGH      , 0 } ; // APPLICATION CODERS MUST REMEMBER TO SET BM_HIGH WHEN SPECIFYING idGroup VALUES
                countT pczMyGroup[]        = { assView.idGroupF() | BM_HIGH2 , 0 } ; // APPLICATION CODERS MUST REMEMBER TO SET BM_HIGH2 WHEN SPECIFYING idGroup VALUES

                if( pczIncludeP &&   !thirdC::c_strstrIF( tinP , pczIncludeP , pczMyGroupSubject ) && !thirdC::c_strstrIF( tinP , pczIncludeP , pczMyGroup ) && !thirdC::c_strstrIF( tinP , pczIncludeP , pczMe )   ) continue ;
                if( pczExcludeP && (  thirdC::c_strstrIF( tinP , pczExcludeP , pczMyGroupSubject ) ||  thirdC::c_strstrIF( tinP , pczExcludeP , pczMyGroup ) ||  thirdC::c_strstrIF( tinP , pczExcludeP , pczMe ) ) ) continue ;
            }

            bQuit = (*pAssociateCBFP)( tinP , assView , ass , *this , cArgP , pStqWalkerP ) ;
            if( bQuit ) break ;

            if( F(flagsP) & flASSOCIATEcwALK_RECURSE )
            {
                byteT pbStq[ sizeof( staqC ) ] ;
                ZE( boolT , bDestroy ) ;
                if( !pStqWalkerP )
                {
                    bDestroy = 1 ;
                    *(staqC**)&pStqWalkerP = new( 0 , tinP , pbStq , sizeof pbStq ) staqC( tinP , sizeof( countT ) , TUCK ) ;
                }

                *pStqWalkerP << (countT)this ;

                bQuit = ass.walkF( tinP , pAssociateCBFP , cArgP , flagsP , pczIncludeP , pczExcludeP , pStqWalkerP ) ;

                if( !bDestroy ) 
                {
                    ZE( countT , c_pMe ) ;
                    *pStqWalkerP >> c_pMe ;
                }
                else
                {
                    staqC*& pd = *(staqC**)&pStqWalkerP ;
                    DELzOMBIE( pd ) ;
                }
            }
        }
        while( ~hWalk && !bQuit ) ;
    }
    stAss.ungrabF( tinP ) ;

    return bQuit ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124008.associatec.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124009.associatec.moonthephotographersf BEGIN
#define DDNAME       "3func.36124009.associatec.moonthephotographersf"
#define DDNUMB      (countT)0x36124009
#define IDFILE      (countT)0x150e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT associateC::moonThePhotographersF( tinS& tinP )/*1*/
{
    _IO_
    stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( stAss )
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            ( (associateC*)stAss.downF( tinP , hWalk ) )->takeMyPictureF( tinP , *this ) ;
        }
        while( ~hWalk ) ;
    }

    stAss.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.36124009.associatec.moonthephotographersf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400a.associatec.takemypicturef BEGIN
#define DDNAME       "3func.3612400a.associatec.takemypicturef"
#define DDNUMB      (countT)0x3612400a
#define IDFILE      (countT)0x150f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i am called by an associate that has changed to notify that *this (the viewer) has a stale view of the caller (the viewee)
parameters
 tinP
 vieweeP
  the associateC who has changed
*/
/**/

/*1*/voidT associateC::takeMyPictureF( tinS& tinP , associateC& vieweeP )/*1*/
{
    _IO_
    countT c_pAss = (countT)&vieweeP ;

    stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

    boolT ids = stAss( (byteT*)&c_pAss , subtractAssBlobsF ) ;
    if( ids )
    {
        if( cbView )
        {
            byteT* pbav = (byteT*)( &stAss[ ids ] + 1 ) ;
            assViewC* pd = (assViewC*)pbav ;
            if( pd->isValidF() ) { DELzOMBIE( pd ) ; } //A:ASSUME: PLATE IMAGE IS INITALIZED TO ZES SO WILL CONTAIN THE EXPECTED VALUE FOR assViewC::finger IFF A VALID IMAGE HAS BEEN CT'D
            vieweeP.sayCheeseF( tinP , pbav , cbView , *this ) ;
        }
    }

    stAss.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400a.associatec.takemypicturef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400b.associatec.saycheesef BEGIN
#define DDNAME       "3func.3612400b.associatec.saycheesef"
#define DDNUMB      (countT)0x3612400b
#define IDFILE      (countT)0x1510


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i am called by an associateC instance who wants to pull a view of me to itself
applications
 storing the state of the association
  each of a pair of associates can store a blob value representing the state of the association or the "value" resulting from the association
  the pair of values need not be equal nor even be semantically in the same class
  ze, wo, or both values can be set
  the value can semantically be a "view", but need not be
 storing the result of a binary operation between the oo associates
  the binary operation need not be commutative
parameters
 tinP
 pbaViewP
  bytes allocated by caller to store the requested view
 cbaViewP
  number of bytes that the caller has allocated at pbViewP to store the view
 viewerP
  the requestor of the view
*/
/**/

/*1*/voidT associateC::sayCheeseF( tinS& tinP , byteT* const pbaViewP , countT cbaViewP , associateC& viewerP )/*1*/
{
    if( cbaViewP >= sizeof( assViewC ) ) new( 0 , tinP , pbaViewP , sizeof( assViewC ) ) assViewC( IDgROUP , *this , cbaViewP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400b.associatec.saycheesef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400c.associatec.heargossipf BEGIN
#define DDNAME       "3func.3612400c.associatec.heargossipf"
#define DDNUMB      (countT)0x3612400c
#define IDFILE      (countT)0x1511


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT associateC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
{
    /**/LOGrAWb( "hearGossipF [idgMe,idgOrigin,idType,cArg]: " , idGroup , " " , originP.idGroupF() , " " , idTypeP , " " , idMsgP , " " , cArgP , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400c.associatec.heargossipf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400d.associatec.gossipf BEGIN
#define DDNAME       "3func.3612400d.associatec.gossipf"
#define DDNUMB      (countT)0x3612400d
#define IDFILE      (countT)0x1512


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT associateC::gossipF( tinS& tinP , const countT idMsgP , const countT cArgP , const countT idTypeP , const countT* const pczIncludeP , const countT* const pczExcludeP )/*1*/
{
    countT pcArg[] = { (countT)this , idTypeP , idMsgP , cArgP } ;
    return walkF( tinP , gossipCBF , (countT)pcArg , flASSOCIATEcwALK_RECURSE , pczIncludeP , pczExcludeP , 0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36124* : 3func.3612400d.associatec.gossipf END
