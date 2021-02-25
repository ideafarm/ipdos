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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36054* : 3func.36054002.fileopens.dt_fileopens BEGIN
#define DDNAME       "3func.36054002.fileopens.dt_fileopens"
#define DDNUMB      (countT)0x36054002
#define IDFILE      (countT)0x11ab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1760002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/fileOpenS::~fileOpenS( voidT )/*1*/
{
    TINSL

    PUSE( tinP , postName ) ;
    PUSE( tinP , postNameTag ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36054* : 3func.36054002.fileopens.dt_fileopens END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36054* : 3func.36054003.fileopens.fileopens BEGIN
#define DDNAME       "3func.36054003.fileopens.fileopens"
#define DDNUMB      (countT)0x36054003
#define IDFILE      (countT)0x11ac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1760003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/fileOpenS::fileOpenS( tinS& tinP , thirdC& thirdP , const osTextT* const postNameP , const osTextT* const postNameTagP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const countT cbP , handleC& hTagP ) :/*1*/
postName( postOldC( tinP , thirdP , postNameP ) ) ,
postNameTag( postNameTagP ? (osTextT*)postOldC( tinP , thirdP , postNameTagP ) : 0 ) ,
idAccess( idAccessP ) ,
idShare( idShareP ) ,
flagsDetails( flagsDetailsP ) ,
idHow( idHowP ) ,
flagsAttribute( flagsAttributeP ) ,
cb( cbP ) ,
hTag( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
flagsAtClose( flFILEaTcLOSE_null )
{
    ___( postName ) ;
    ___( postNameTag ) ;
    hTag << hTagP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36054* : 3func.36054003.fileopens.fileopens END
