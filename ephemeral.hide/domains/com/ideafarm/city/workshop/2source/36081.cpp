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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081002.ostextc.dt_ostextc BEGIN
#define DDNAME       "3func.36081002.ostextc.dt_ostextc"
#define DDNUMB      (countT)0x36081002
#define IDFILE      (countT)0x126d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/osTextC::~osTextC( voidT )/*1*/
{
    if( pbFoot + cbFoot - 1 < postc ) { BLAMMO ; }
    osTextT ostLath = *( pbFoot + cbFoot - 1 ) ;
    if( ostLath && ostLath != 'b' ) { BLAMMO ; }
    thirdC::c_memsetIF( pbFoot , cbFoot ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081002.ostextc.dt_ostextc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081003.ostextc.ostextc BEGIN
#define DDNAME       "3func.36081003.ostextc.ostextc"
#define DDNUMB      (countT)0x36081003
#define IDFILE      (countT)0x126e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/osTextC::osTextC( const countT cbFootP , const osTextT* const postP , byteT* const pbaFootP , const countT cbaFootP ) :/*1*/
footC( cbFootP , pbaFootP , cbaFootP ) ,
postc( pbFoot )
{
    if( postP )
    {
        thirdC::c_strncpyIF( postc , postP , cbFoot ) ;
        postc += thirdC::c_strlenIF( postc ) ;
        if( *postc ) { BLAMMO ; } //SHOULD BE IMPOSSIBLE
        if( pbFoot + cbFoot <= postc ) { BLAMMO ; }
    }
    else
    {
        *postc = 0 ;
        thirdC::c_memsetIF( postc + 1 , cbFoot - 1 , FILLbYTE_OStEXTc ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081003.ostextc.ostextc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081004.ostextc.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.36081004.ostextc.operator_ostextt_ptr"
#define DDNUMB      (countT)0x36081004
#define IDFILE      (countT)0x126f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/osTextC::operator const osTextT*( voidT ) const/*1*/
{
    return pbFoot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081004.ostextc.operator_ostextt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081005.ostextc.operator_call BEGIN
#define DDNAME       "3func.36081005.ostextc.operator_call"
#define DDNUMB      (countT)0x36081005
#define IDFILE      (countT)0x1270


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT* osTextC::operator ()( const osTextT* postP , countT costaP , const boolT bNoTerminatorP )/*1*/
{
    if( bNoTerminatorP > 1 ) { BLAMMO ; }
    if( postP )
    {
        if( !costaP && bNoTerminatorP ) { BLAMMO ; }

        if( !costaP ) costaP = thirdC::c_strlenIF( postP ) + 1 ;

        if( pbFoot + cbFoot < postc + costaP + bNoTerminatorP )
        {
            TINSL
            LOGrAW( " [postP]: \"" ) ;
            LOGrAW( postP ) ;
            LOGrAW( "\"\r\n" ) ;
            LOGrAW3( "[pbFoot+cbFoot]              : " , pbFoot + cbFoot , "\r\n" ) ;
            LOGrAW3( "[postc+costaP+bNoTerminatorP]: " , postc + costaP + bNoTerminatorP , "\r\n" ) ;
            LOGrAW( "[pbFoot]: \"" ) ;
            LOGrAW( pbFoot ) ;
            LOGrAW( "\"\r\n[postc]: \"" ) ;
            LOGrAW( postc ) ;
            LOGrAW( "\"\r\n" ) ;
            LOGrAW3( "cbFoot:" , cbFoot , "\r\n" ) ;
            LOGrAW3( "costaP:" , costaP , "\r\n" ) ;
            LOGrAW3( "bNoTerminatorP:" , bNoTerminatorP , "\r\n" ) ;
            LOGrAW3( "pbFoot+cbFoot:" , pbFoot + cbFoot , "\r\n" ) ;
            LOGrAW3( "postc+costaP+bNoTerminatorP:" , postc + costaP + bNoTerminatorP , "\r\n" ) ;
            BLAMMO ;
        }

        thirdC::c_memcpyIF( poopC() , postc , postP , costaP ) ;
        postc += costaP + bNoTerminatorP - 1 ;
        if( bNoTerminatorP ) *postc = 0 ;

        if( *postc ) { BLAMMO ; }
    }
    else
    {
        if( costaP ) { BLAMMO ; }
        postc = pbFoot ;
        *postc = 0 ;
        thirdC::c_memsetIF( postc + 1 , cbFoot - 1 , FILLbYTE_OStEXTc ) ;
    }
    return pbFoot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081005.ostextc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081006.ostextc.costf BEGIN
#define DDNAME       "3func.36081006.ostextc.costf"
#define DDNUMB      (countT)0x36081006
#define IDFILE      (countT)0x1271


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT osTextC::costF( voidT ) const/*1*/
{
    return postc - pbFoot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081006.ostextc.costf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081007.ostextc.operator_plus BEGIN
#define DDNAME       "3func.36081007.ostextc.operator_plus"
#define DDNUMB      (countT)0x36081007
#define IDFILE      (countT)0x1272


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT* osTextC::operator +( sCountT offP ) const/*1*/
{
    if( offP < 0 ) { BLAMMO ; }
    return pbFoot + offP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081007.ostextc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081008.ostextc.operator_plus BEGIN
#define DDNAME       "3func.36081008.ostextc.operator_plus"
#define DDNUMB      (countT)0x36081008
#define IDFILE      (countT)0x1273


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT* osTextC::operator +( countT offP ) const/*1*/
{
    if( (sCountT)offP < 0 ) { BLAMMO ; }
    return pbFoot + offP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081008.ostextc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081009.ostextc.operator_call BEGIN
#define DDNAME       "3func.36081009.ostextc.operator_call"
#define DDNUMB      (countT)0x36081009
#define IDFILE      (countT)0x1274


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT* osTextC::operator ()( const osTextC& ostoP , countT costaP )/*1*/
{
    if( costaP ) { BLAMMO ; } //TO DETECT USE OF WRONG MACRO

    if( ostoP.costF() ) (*this)( (const osTextT*)ostoP , ostoP.costF() + 1 ) ;
    else                (*this)( 0 , 0 ) ;
    return pbFoot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.36081009.ostextc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.3608100a.ostextc.operator_element BEGIN
#define DDNAME       "3func.3608100a.ostextc.operator_element"
#define DDNUMB      (countT)0x3608100a
#define IDFILE      (countT)0x1275


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT& osTextC::operator []( sCountT offP ) const/*1*/
{
    if( offP < 0 ) { BLAMMO ; }
    return *( pbFoot + offP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.3608100a.ostextc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.3608100b.ostextc.truncatef BEGIN
#define DDNAME       "3func.3608100b.ostextc.truncatef"
#define DDNUMB      (countT)0x3608100b
#define IDFILE      (countT)0x1276


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT osTextC::truncateF( const countT costMaxP )/*1*/
{
    if( postc - pbFoot > costMaxP )
    {
        postc = pbFoot + costMaxP ;
        *postc = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36081* : 3func.3608100b.ostextc.truncatef END
