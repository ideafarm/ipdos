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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046001.tintallys.tintallys BEGIN
#define DDNAME       "3func.36046001.tintallys.tintallys"
#define DDNUMB      (countT)0x36046001
#define IDFILE      (countT)0x1173


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1670003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tinTallyS::tinTallyS( tinS& tinP )/*1*/
{
    bTally = 0 ;
    timeBuild = timeBaseBuiltF() ;
    resetF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046001.tintallys.tintallys END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046002.tintallys.resetf BEGIN
#define DDNAME       "3func.36046002.tintallys.resetf"
#define DDNUMB      (countT)0x36046002
#define IDFILE      (countT)0x1174


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$resetF.0.html\"\>instances\</A\>
\<A HREF=\"5.1670004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT tinTallyS::resetF( tinS& tinP )/*1*/
{
    thirdC::c_memsetIF( (byteT*)this + sizeof bTally + sizeof timeBuild , sizeof( tinTallyS ) - sizeof bTally - sizeof timeBuild ) ; // tinP OVERLOAD IS NOT USED BECAUSE IT WOULD CALL _IO_, RESULTING IN cInNest INCR TO 1, CLOBBERED BY memset, AND THEN DECR TO -1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046002.tintallys.resetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046003.tintallys.flushf BEGIN
#define DDNAME       "3func.36046003.tintallys.flushf"
#define DDNUMB      (countT)0x36046003
#define IDFILE      (countT)0x1175


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$flushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1670005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT tinTallyS::flushF( tinS& tinP , etherC& etThread )/*1*/
{
    ZE( strokeS* , psttnu ) ;
    //U: COMMENTED OUT CAUSE CAN TAKE A LONG TIME ESP FOR WIN98: etThread.boxPutGenerationF( tinP , psttnu , T("///ideafarm/ephemeral/domains/com/ideafarm/tallyS/flushF") , 0x10000 , (byteT*)this + sizeof bTally , sizeof *this - sizeof bTally ) ;
    resetF( tinP ) ;
    if( etThread ) ; //U:
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046003.tintallys.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046004.tintallys.nowf BEGIN
#define DDNAME       "3func.36046004.tintallys.nowf"
#define DDNUMB      (countT)0x36046004
#define IDFILE      (countT)0x1176


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nowF.0.html\"\>instances\</A\>
\<A HREF=\"5.1670006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT tinTallyS::nowF( tinS& tinP , etherC& etThread )/*1*/
{
    timeS& timeStamp = timeStart ? timeEnd : timeStart ;
    timeStamp.time2 = timeStamp.time1 = 0 ;
    etThread.osTimeNowF( tinP , timeStamp.time1 , timeStamp.time2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36046* : 3func.36046004.tintallys.nowf END
