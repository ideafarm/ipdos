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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034002.ranunic.dt_ranunic BEGIN
#define DDNAME       "3func.36034002.ranunic.dt_ranunic"
#define DDNUMB      (countT)0x36034002
#define IDFILE      (countT)0x10ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14a0002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/ranUniC::~ranUniC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034002.ranunic.dt_ranunic END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034003.ranunic.ranunic BEGIN
#define DDNAME       "3func.36034003.ranunic.ranunic"
#define DDNUMB      (countT)0x36034003
#define IDFILE      (countT)0x10eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14a0003.1.0.html\"\>definition\</A\>
after construction, i can be used to obtain a sequence of random values
this value sequence will be either pseudorandom or truly random
 pseudorandom: the sequence will always be the same
  consider a process that constructs a ranUniC object with a nonze seed and then draws a sequence of 001 values
  this sequence will look random
  but every time the process is run, exactly the same sequence is drawn
 "truly" random: the sequence will differ because the system clock value is used as the seed
  it is "truly" random in the sense that the behavior of the process is not completely determined by the state of the process
   it is determined in part by the system clock
 it is acceptable, but bad form, to construct a separate ranUniC object for each value
  if a nonze cSeedP value is used then this will not work at all
   all of the values in the sequence will be equal
  if a ze cSeedP value is used then the sequence will only be as random as the thirdC::osTimeIF()+thirdC::osClockIF( tinP ) function is
   it is possible that the thirdC::osTimeIF()+thirdC::osClockIF( tinP ) function is not very random on some platforms
    this would happen, for example, if the underlying hardware has a large grainsize
  these deficiencies are acceptable when constructing a separate ranUniC for each drawing yields increased code simplicity
   for example, it might obviate the need for requiring a caller to pass in a ranUniC argument to a function
arguments
 mRangeP
  drawing results will be in (0,mRange)
  if 0 then mRange==1 is implied
 cSeedP
  can be 0
  if 0 then thirdC::osTimeIF() will be used
  defaults to 0
  specify 0 for "true" randomness
   behavior will be random w.r.t. the state of the calling process
  specify -1 (or another nonze value) for pseudorandomness
   behavior will be completely determined by the state of the calling process
  pseudorandomness is easier to debug, but the sequence will be the same over repeated trials starting with the same seed
  "true" randomness is needed when a separate ranUniC object is constructed to obtain a single value
*/
/**/

/*1*/ranUniC::ranUniC( tinS& tinP , const measure04T mRangeP , const countT cSeedP )/*1*/ :
mRange( mRangeP ) ,
cnIA( 16807 ) ,
cnIM( 2147483647 ) ,
cnAM( 1.0 / cnIM ) ,
cnIQ( 127773 ) ,
cnIR( 2836 ) ,
cnNDIV( 1 + ( cnIM - 1 ) / ( sizeof pscRandom / sizeof pscRandom[ 0 ] ) ) ,
cnEPS( 1.2e-7 ) ,
cnRNMAX( 1.0 - cnEPS ) ,
mRandom( 0.5 ) ,
scRandom( cSeedP ? cSeedP : thirdC::osTimeIF() + thirdC::osClockIF( tinP ) ) , // - 1 IN "NUMERICAL RECIPES IN C" BOOK
scRandom2( 0 ) ,
scRandom3( 0 )
{
    // "*idum": scRandom
    // "iy": scRandom2
    // "k": scRandom3
    // "iv": pscRandom
    // "temp": mRandom
    // "NTAB": sizeof pscRandom / sizeof pscRandom[ 0 ]

    if( scRandom < 0 ) scRandom = - scRandom ;
    if( scRandom < 1 ) scRandom = 1 ;

    for( sCountT offr = sizeof pscRandom / sizeof pscRandom[ 0 ] + 7 ; offr >= 0 ; offr -- )
    {
        drawPrivateF() ;
        if( offr < sizeof pscRandom / sizeof pscRandom[ 0 ] ) pscRandom[ offr ] = scRandom ;
    }

    scRandom2 = pscRandom[ 0 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034003.ranunic.ranunic END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034004.ranunic.operator_measure04t BEGIN
#define DDNAME       "3func.36034004.ranunic.operator_measure04t"
#define DDNUMB      (countT)0x36034004
#define IDFILE      (countT)0x10ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14a0004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1010104.1.1.0.html\"\>1010104:  WAKEsHOW( "example.simplest.func.14a0004.ranUniC.operator_measure04T" )\</A\>
evaluates to a value in (0,mRange)
 if !mRange then will evaluate to a value in (0,1)
 the endpoint values are guaranteed to not occur
*/
/**/

/*1*/ranUniC::operator measure04T( voidT )/*1*/
{
    drawPrivateF() ;
    countT offc = scRandom / cnNDIV ;

    scRandom2 = pscRandom[ offc ] ;
                pscRandom[ offc ] = scRandom ;

    mRandom = cnAM * scRandom2 ;
    if( mRandom > cnRNMAX ) mRandom = cnRNMAX ;
    if( mRange ) mRandom *= mRange ;
    if( !mRandom ) { BLAMMO ; } //U::THIS IS SUPPOSED TO BE IMPOSSIBLE; REMOVE THIS TEST WHEN CONFIDENT

    return mRandom ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034004.ranunic.operator_measure04t END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034005.ranunic.drawprivatef BEGIN
#define DDNAME       "3func.36034005.ranunic.drawprivatef"
#define DDNUMB      (countT)0x36034005
#define IDFILE      (countT)0x10ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$drawPrivateF.0.html\"\>instances\</A\>
\<A HREF=\"5.14a0005.1.0.html\"\>definition\</A\>
*/
/**/

//O: MAKE THIS AN INLINE MEMBER FUNCTION (IF PERFORMANCE IS SIGNIFICANTLY BETTER)

/*1*/voidT ranUniC::drawPrivateF( voidT )/*1*/
{
    scRandom3 = scRandom / cnIQ ;
    scRandom = cnIA * ( scRandom - scRandom3 * cnIQ ) - cnIR * scRandom3 ;
    if( scRandom < 0 ) scRandom += cnIM ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36034* : 3func.36034005.ranunic.drawprivatef END
