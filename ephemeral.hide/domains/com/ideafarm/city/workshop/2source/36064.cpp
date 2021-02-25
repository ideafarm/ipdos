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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36064* : 3func.36064001.branchesolds.dt_branchesolds BEGIN
#define DDNAME       "3func.36064001.branchesolds.dt_branchesolds"
#define DDNUMB      (countT)0x36064001
#define IDFILE      (countT)0x11f5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/branchesOldS::~branchesOldS( voidT )/*1*/
{
    TINSL
    if( pTree ) pTree->nearbyCloseF( tinP ) ;

    PUSE( tinP , *(byteT**)&ppsttzDnGGMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpGGMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnGDads ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpGDads ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnGMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpGMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnDads ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpDads ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpMoms ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnBros ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpBros ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnWives ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpWives ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnKids ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpKids ) ;
    PUSE( tinP , *(byteT**)&ppsttzDnGKids ) ;
    PUSE( tinP , *(byteT**)&ppsttzUpGKids ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36064* : 3func.36064001.branchesolds.dt_branchesolds END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36064* : 3func.36064002.branchesolds.branchesolds BEGIN
#define DDNAME       "3func.36064002.branchesolds.branchesolds"
#define DDNUMB      (countT)0x36064002
#define IDFILE      (countT)0x11f6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/branchesOldS::branchesOldS( voidT ) :/*1*/
pTree( 0 ) ,
cDnGGMoms( 0 ) ,
ppsttzDnGGMoms( 0 ) ,
cUpGGMoms( 0 ) ,
ppsttzUpGGMoms( 0 ) ,
cDnGDads( 0 ) ,
ppsttzDnGDads( 0 ) ,
cUpGDads( 0 ) ,
ppsttzUpGDads( 0 ) ,
cDnGMoms( 0 ) ,
ppsttzDnGMoms( 0 ) ,
cUpGMoms( 0 ) ,
ppsttzUpGMoms( 0 ) ,
cDnDads( 0 ) ,
ppsttzDnDads( 0 ) ,
cUpDads( 0 ) ,
ppsttzUpDads( 0 ) ,
cDnMoms( 0 ) ,
ppsttzDnMoms( 0 ) ,
cUpMoms( 0 ) ,
ppsttzUpMoms( 0 ) ,
cDnBros( 0 ) ,
ppsttzDnBros( 0 ) ,
cUpBros( 0 ) ,
ppsttzUpBros( 0 ) ,
cDnWives( 0 ) ,
ppsttzDnWives( 0 ) ,
cUpWives( 0 ) ,
ppsttzUpWives( 0 ) ,
cDnKids( 0 ) ,
ppsttzDnKids( 0 ) ,
cUpKids( 0 ) ,
ppsttzUpKids( 0 ) ,
cDnGKids( 0 ) ,
ppsttzDnGKids( 0 ) ,
cUpGKids( 0 ) ,
ppsttzUpGKids( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36064* : 3func.36064002.branchesolds.branchesolds END
