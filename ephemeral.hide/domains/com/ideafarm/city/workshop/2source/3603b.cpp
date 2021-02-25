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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b001.postoldc.postoldc BEGIN
#define DDNAME       "3func.3603b001.postoldc.postoldc"
#define DDNUMB      (countT)0x3603b001
#define IDFILE      (countT)0x1158


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1560003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/postOldC::postOldC( tinS& tinP , thirdC& third , const osTextT* const postP )/*1*/ :
postv( 0 )
{
    IFbEcAREFUL
    {
        if( third ) return ;
        __Z( postP ) ;
        if( third ) return ;
    }

    _IO_
    const countT costa = 1 + third.c_strlenIF( tinP , postP ) ;
    third.newF( tinP , LF , postv , costa ) ; ___( postv ) ;
    thirdC::c_strncpyIF( tinP , postv , postP , costa ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b001.postoldc.postoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b002.postoldc.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.3603b002.postoldc.operator_ostextt_ptr"
#define DDNUMB      (countT)0x3603b002
#define IDFILE      (countT)0x1159


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1560004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/postOldC::operator osTextT*( voidT )/*1*/
{
    return postv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b002.postoldc.operator_ostextt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b003.postoldc.postoldc BEGIN
#define DDNAME       "3func.3603b003.postoldc.postoldc"
#define DDNUMB      (countT)0x3603b003
#define IDFILE      (countT)0x115a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1560005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/postOldC::postOldC( tinS& tinP , etherC& ether , const strokeS* const psttP , const flagsT flagsP , const countT cbPrefixExtraP )/*1*/ :
postv( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( psttP ) ;
        FV(flSTRmAKE,flagsP) ;
        if( ether ) return ;
    }

    _IO_
    ether.strMakeF( tinP , LF , postv , psttP , 0 , flagsP , cbPrefixExtraP ) ; ___( postv ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3603b* : 3func.3603b003.postoldc.postoldc END
