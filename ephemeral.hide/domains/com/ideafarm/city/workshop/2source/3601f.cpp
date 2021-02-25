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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3601f* : 3func.3601f001.infofiles.infofiles BEGIN
#define DDNAME       "3func.3601f001.infofiles.infofiles"
#define DDNUMB      (countT)0x3601f001
#define IDFILE      (countT)0x1011


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12a0001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c500104.1.1.0.html\"\>c500104:  WAKEsHOW( "example.simplest.func.12a0001.infoFileS.infoFileS" )\</A\>
arguments
*/
/**/

/*1*/infoFileS::infoFileS( tinS& tinP )/*1*/ :
psttIfoName( 0 ) ,
postOsName( 0 ) ,
costaOsName( 0 ) ,
postOsNameAlt( 0 ) ,
costaOsNameAlt( 0 ) ,
flags( 0 ) ,
cbUsed( 0 ) ,
cbUsedHigh( 0 ) ,
cbAllocated( 0 ) ,
cbAllocatedHigh( 0 ) ,
timeCreated2( 0 ) ,
timeCreated1( 0 ) ,
timeWritten2( 0 ) ,
timeWritten1( 0 ) ,
timeAccessed2( 0 ) ,
timeAccessed1( 0 )
{
    _IO_
    BREAKiF ;
    BREAKiF ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3601f* : 3func.3601f001.infofiles.infofiles END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3601f* : 3func.3601f002.infofiles.dt_infofiles BEGIN
#define DDNAME       "3func.3601f002.infofiles.dt_infofiles"
#define DDNUMB      (countT)0x3601f002
#define IDFILE      (countT)0x1012


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12a0002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e400104.1.1.0.html\"\>e400104:  WAKEsHOW( "example.simplest.func.12a0002.infoFileS.dt_infoFileS" )\</A\>
*/
/**/

/*1*/infoFileS::~infoFileS( voidT )/*1*/
{
    TINSL
    if( tinP.pPoolUse && ( postOsName || psttIfoName ) )
    {
        PUSE( tinP , postOsName ) ;
        PUSE( tinP , postOsNameAlt ) ;
        PUSE( tinP , *(byteT**)&psttIfoName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3601f* : 3func.3601f002.infofiles.dt_infofiles END
