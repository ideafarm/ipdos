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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042001.dnsresourcemiddles.dnsresourcemiddles BEGIN
#define DDNAME       "3func.36042001.dnsresourcemiddles.dnsresourcemiddles"
#define DDNUMB      (countT)0x36042001
#define IDFILE      (countT)0x1165


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1620003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/dnsResourceMiddleS::dnsResourceMiddleS( voidT ) :/*1*/
idType( 0 ) ,
idClass( 0 ) ,
secondsToLive( 0 ) ,
cbData( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042001.dnsresourcemiddles.dnsresourcemiddles END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042002.dnsresourcemiddles.logf BEGIN
#define DDNAME       "3func.36042002.dnsresourcemiddles.logf"
#define DDNUMB      (countT)0x36042002
#define IDFILE      (countT)0x1166


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$logF.0.html\"\>instances\</A\>
\<A HREF=\"5.1620004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT dnsResourceMiddleS::logF( tinS& tinP )/*1*/
{
    ;//TELLsYSc3( ifcIDtYPEtELLsYS_dnsResourceMiddleS , (byteT*)this , sizeof *this )
    if( tinP.fingerprint ) ; //U::
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042002.dnsresourcemiddles.logf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042003.dnsresourcemiddles.swabf BEGIN
#define DDNAME       "3func.36042003.dnsresourcemiddles.swabf"
#define DDNUMB      (countT)0x36042003
#define IDFILE      (countT)0x1167


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$swabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1620005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT dnsResourceMiddleS::swabF( voidT )/*1*/
{
    idType        = SWAB2( idType        ) ;
    idClass       = SWAB2( idClass       ) ;
    secondsToLive = SWAB4( secondsToLive ) ;
    cbData        = SWAB2( cbData        ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36042* : 3func.36042003.dnsresourcemiddles.swabf END
