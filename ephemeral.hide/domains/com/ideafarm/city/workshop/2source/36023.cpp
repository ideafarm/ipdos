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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36023* : 3func.36023001.infoboxgetputs.infoboxgetputs BEGIN
#define DDNAME       "3func.36023001.infoboxgetputs.infoboxgetputs"
#define DDNUMB      (countT)0x36023001
#define IDFILE      (countT)0x1019


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12e0001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
used by boxC getF and putF to detect a zombie peer
arguments
 etherP
 socketP
 msWaitP
*/
/**/

/*1*/infoBoxGetPutS::infoBoxGetPutS( tinS& tinP , etherC& etherP , socketC& socketP , const countT msWaitP )/*1*/ :
ether( etherP ) ,
socket( socketP ) ,
fAttacked( 0 ) ,
fCanDeleteMe( 0 ) ,
fZombie( 1 ) ,
msWait( msWaitP )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36023* : 3func.36023001.infoboxgetputs.infoboxgetputs END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36023* : 3func.36023002.infoboxgetputs.dt_infoboxgetputs BEGIN
#define DDNAME       "3func.36023002.infoboxgetputs.dt_infoboxgetputs"
#define DDNUMB      (countT)0x36023002
#define IDFILE      (countT)0x101a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12e0002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/infoBoxGetPutS::~infoBoxGetPutS( voidT )/*1*/
{
    //U:TINSL
    //U:while( !ether && !fCanDeleteMe ) ether.osSleepF( tinP , TUCK * 16 ) ;
    return ; //U: THIS IS JUST TO PREVENT A COMPILER WARNING
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36023* : 3func.36023002.infoboxgetputs.dt_infoboxgetputs END
