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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b001.grabnotess.grabnotess BEGIN
#define DDNAME       "3func.3604b001.grabnotess.grabnotess"
#define DDNUMB      (countT)0x3604b001
#define IDFILE      (countT)0x1181


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16c0003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/grabNotesS::grabNotesS( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP )/*1*/ :
grab( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flGRABc_DISABLED )
{
    formatF( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b001.grabnotess.grabnotess END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b002.grabnotess.idnextf BEGIN
#define DDNAME       "3func.3604b002.grabnotess.idnextf"
#define DDNUMB      (countT)0x3604b002
#define IDFILE      (countT)0x1182


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idNextF.0.html\"\>instances\</A\>
\<A HREF=\"5.16c0004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT grabNotesS::idNextF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return 1 + incv02AM( tinP.pAdamGlobal1->_grabNotesS_.idLath ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b002.grabnotess.idnextf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b003.grabnotess.formatf BEGIN
#define DDNAME       "3func.3604b003.grabnotess.formatf"
#define DDNUMB      (countT)0x3604b003
#define IDFILE      (countT)0x1183


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$formatF.0.html\"\>instances\</A\>
\<A HREF=\"5.16c0005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT grabNotesS::formatF( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP )/*1*/
{
    thirdC::c_memsetIF( tinP , (byteT*)this , sizeof *this ) ;
    flags = flGRABnOTES_null ;
    grab.formatF( tinP , flGRABc_null , TAG( TAGiDnULL ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604b* : 3func.3604b003.grabnotess.formatf END
