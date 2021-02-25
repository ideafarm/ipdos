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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006002.scountc.dt_scountc BEGIN
#define DDNAME       "3func.36006002.scountc.dt_scountc"
#define DDNUMB      (countT)0x36006002
#define IDFILE      (countT)0xe4a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1220104.1.1.0.html\"\>1220104:  WAKEsHOW( "example.simplest.func.1080005.sCountC.dt_sCountC" )\</A\>
*/
/**//*1*/sCountC::~sCountC( voidT )/*1*/
{
    TINSL
    _IO_
    ether.delF( tinP , pc ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006002.scountc.dt_scountc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006003.scountc.scountc BEGIN
#define DDNAME       "3func.36006003.scountc.scountc"
#define DDNUMB      (countT)0x36006003
#define IDFILE      (countT)0xe4b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0220104.1.1.0.html\"\>0220104:  WAKEsHOW( "example.simplest.func.1080003.sCountC.sCountC" )\</A\>
this object will contain the value 0 after construction
arguments
 etherP
*/
/**//*1*/sCountC::sCountC( tinS& tinP , etherC& etherP )/*1*/ :
ether( etherP ) ,
cbit( 2 ) ,
pc( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    ether.newF( tinP , LF , pc , 1 ) ; ___( pc ) ;
    if( !ether && pc ) *pc = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006003.scountc.scountc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006004.scountc.scountc BEGIN
#define DDNAME       "3func.36006004.scountc.scountc"
#define DDNUMB      (countT)0x36006004
#define IDFILE      (countT)0xe4c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5a20104.1.1.0.html\"\>5a20104:  WAKEsHOW( "example.simplest.func.1080004.sCountC.sCountC" )\</A\>
arguments
 cP
*/
/**//*1*/sCountC::sCountC( const sCountC& cP )/*1*/ :
ether( cP.ether ) ,
cbit( cP.cbit ) ,
pc( 0 )
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    countT cBytes = 1 + cbit / SB ;
    countT cWords = 1 + cbit / SC ;
    ether.newF( tinP , LF , pc , cWords ) ; ___( pc ) ;
    ether.memSetF( tinP , (byteT*)pc , cWords * (SC/SB) ) ;
    ether.memCopyF( tinP , (byteT*)pc , (byteT*)cP.pc , cBytes ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006004.scountc.scountc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006005.scountc.operator_countt_ptr BEGIN
#define DDNAME       "3func.36006005.scountc.operator_countt_ptr"
#define DDNUMB      (countT)0x36006005
#define IDFILE      (countT)0xe4d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2220104.1.1.0.html\"\>2220104:  WAKEsHOW( "example.simplest.func.1080006.sCountC.operator_countT_ptr" )\</A\>
evaluates to a pointer to a string of countT's
bits are allocated, and the sign bits are extended
 the value is grown until it completely occupies an integral number of countT's
*/
/**//*1*/sCountC::operator countT*( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    growBitsToF( tinP , ( cbit / SC + 1 ) * SC ) ; //THIS MOVES THE SIGN BIT LEFT TO WHERE OTHER PROGRAMS WOULD EXPECT IT
    return pc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006005.scountc.operator_countt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006006.scountc.operator_scountt_ptr BEGIN
#define DDNAME       "3func.36006006.scountc.operator_scountt_ptr"
#define DDNUMB      (countT)0x36006006
#define IDFILE      (countT)0xe4e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3220104.1.1.0.html\"\>3220104:  WAKEsHOW( "example.simplest.func.1080007.sCountC.operator_sCountT_ptr" )\</A\>
evaluates to a pointer to a string of countT's
bits are allocated, and the sign bits are extended
 the value is grown until it completely occupies an integral number of countT's
*/
/**//*1*/sCountC::operator sCountT*( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    growBitsToF( tinP , ( cbit / SC + 1 ) * SC ) ; //THIS MOVES THE SIGN BIT LEFT TO WHERE OTHER PROGRAMS WOULD EXPECT IT
    return (sCountT*)pc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006006.scountc.operator_scountt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006007.scountc.operator_countt BEGIN
#define DDNAME       "3func.36006007.scountc.operator_countt"
#define DDNUMB      (countT)0x36006007
#define IDFILE      (countT)0xe4f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4220104.1.1.0.html\"\>4220104:  WAKEsHOW( "example.simplest.func.1080008.sCountC.operator_countT" )\</A\>
evaluates to the number of bits currently used to express this object's value
*/
/**//*1*/sCountC::operator countT( voidT ) const/*1*/
{
    TINSL
    IFbEcAREFUL    
    {
        if( ether ) return 0 ;
    }

    return cbit ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006007.scountc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006008.scountc.operator_increment BEGIN
#define DDNAME       "3func.36006008.scountc.operator_increment"
#define DDNUMB      (countT)0x36006008
#define IDFILE      (countT)0xe50


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5220104.1.1.0.html\"\>5220104:  WAKEsHOW( "example.simplest.func.1080009.sCountC.operator_increment" )\</A\>
evaluates to a reference to this object
increments this object's value
arguments
 postfixP
*/
/**//*1*/sCountC& sCountC::operator ++( sCountT postfixP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    sCountC ccB( tinP , ether , 1 ) ;
    *this = *this + ccB ;
    postfixP = postfixP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006008.scountc.operator_increment END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006009.scountc.operator_decrement BEGIN
#define DDNAME       "3func.36006009.scountc.operator_decrement"
#define DDNUMB      (countT)0x36006009
#define IDFILE      (countT)0xe51


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7220104.1.1.0.html\"\>7220104:  WAKEsHOW( "example.simplest.func.108000a.sCountC.operator_decrement" )\</A\>
evaluates to a reference to this object
decrements this object's value
arguments
 postfixP
*/
/**//*1*/sCountC& sCountC::operator --( sCountT postfixP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    sCountC ccB( tinP , ether , 1 ) ;
    *this = *this - ccB ;
    postfixP = postfixP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006009.scountc.operator_decrement END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600a.scountc.operator_increment BEGIN
#define DDNAME       "3func.3600600a.scountc.operator_increment"
#define DDNUMB      (countT)0x3600600a
#define IDFILE      (countT)0xe52


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6220104.1.1.0.html\"\>6220104:  WAKEsHOW( "example.simplest.func.108000b.sCountC.operator_increment" )\</A\>
evaluates to a reference to this object
increments this object's value
*/
/**//*1*/sCountC& sCountC::operator ++( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    sCountC ccB( tinP , ether , 1 ) ;
    *this = *this + ccB ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600a.scountc.operator_increment END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600b.scountc.operator_decrement BEGIN
#define DDNAME       "3func.3600600b.scountc.operator_decrement"
#define DDNUMB      (countT)0x3600600b
#define IDFILE      (countT)0xe53


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8220104.1.1.0.html\"\>8220104:  WAKEsHOW( "example.simplest.func.108000c.sCountC.operator_decrement" )\</A\>
evaluates to a reference to this object
decrements this object's value
*/
/**//*1*/sCountC& sCountC::operator --( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    sCountC ccB( tinP , ether , 1 ) ;
    *this = *this - ccB ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600b.scountc.operator_decrement END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600c.scountc.operator_plus BEGIN
#define DDNAME       "3func.3600600c.scountc.operator_plus"
#define DDNUMB      (countT)0x3600600c
#define IDFILE      (countT)0xe54


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9220104.1.1.0.html\"\>9220104:  WAKEsHOW( "example.simplest.func.108000d.sCountC.operator_plus" )\</A\>
evaluates to a reference to this object
*/
/**//*1*/sCountC& sCountC::operator +( voidT )/*1*/
{
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600c.scountc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600d.scountc.operator_minus BEGIN
#define DDNAME       "3func.3600600d.scountc.operator_minus"
#define DDNUMB      (countT)0x3600600d
#define IDFILE      (countT)0xe55


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a220104.1.1.0.html\"\>a220104:  WAKEsHOW( "example.simplest.func.108000e.sCountC.operator_minus" )\</A\>
evaluates to the negative of object's value
*/
/**//*1*/sCountC sCountC::operator -( voidT ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether , 0 ) ;
    }

    _IO_
    sCountC cResult( *this ) ;
    cResult.onesComplementF( tinP ) ;
    ++ cResult ;
    return cResult ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600d.scountc.operator_minus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600e.scountc.operator_not BEGIN
#define DDNAME       "3func.3600600e.scountc.operator_not"
#define DDNUMB      (countT)0x3600600e
#define IDFILE      (countT)0xe56


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b220104.1.1.0.html\"\>b220104:  WAKEsHOW( "example.simplest.func.108000f.sCountC.operator_not" )\</A\>
evaluates to 0, or 1 iff this object is ze
*/
/**//*1*/sCountC sCountC::operator !( voidT ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether , 0 ) ;
    }

    _IO_
    sCountC c0( tinP , ether ) ;
    sCountC c1( tinP , ether , 1 ) ;

    if( *this == c0 ) return c1 ;
    else              return c0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600e.scountc.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600f.scountc.operator_complement BEGIN
#define DDNAME       "3func.3600600f.scountc.operator_complement"
#define DDNUMB      (countT)0x3600600f
#define IDFILE      (countT)0xe57


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c220104.1.1.0.html\"\>c220104:  WAKEsHOW( "example.simplest.func.1080010.sCountC.operator_complement" )\</A\>
evaluates to this object's value after inverting all bits
*/
/**//*1*/sCountC sCountC::operator ~( voidT ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether , 0 ) ;
    }

    _IO_
    sCountC cResult( *this ) ;
    cResult.onesComplementF( tinP ) ;
    return cResult ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600600f.scountc.operator_complement END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006010.scountc.operator_multiply BEGIN
#define DDNAME       "3func.36006010.scountc.operator_multiply"
#define DDNUMB      (countT)0x36006010
#define IDFILE      (countT)0xe58


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d220104.1.1.0.html\"\>d220104:  WAKEsHOW( "example.simplest.func.1080011.sCountC.operator_multiply" )\</A\>
evaluates to this object's value times cP
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator *( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    // THIS FUNCTION MULTIPLIES TWO BINARY NUMBERS OF ARBITRARY LENGTH
    // 1. EXPAND EACH NUMBER
    // 2. PROCESS EACH BIT POSITION, PLACING RESULT IN OPERAND 1
    // 3. CONTRACT OPERAND 1
    // 4. REPLACE VALUE OF THIS OBJECT WITH OPERAND 1
    //
    // THIS FUNCTION DOES NOT USE EXPANSION.  IT ACCUMULATES THE SUM
    // OF ALL BIT-PAIR MULTIPLICATIONS
    //
    // THE MOST SIGNIFICANT BIT OF EACH OPERAND IS TREATED AS A SIGN BIT
    //
    // OPTIMIZATION: THIS FUNCTION COULD BE OPTIMIZED SIGNIFICANTLY
    // BY DEFINING AND THEN USING A << SHIFT OPERATOR

    _IO_
    sCountC c1( *this ) ;
    sCountC c2( cP ) ;
    boolT fNeg1 = c1.fNegativeF( tinP ) ;
    boolT fNeg2 = c2.fNegativeF( tinP ) ;
    if( fNeg1 ) c1 = - c1 ;
    if( fNeg2 ) c2 = - c2 ;
    countT cbit1 = c1 ;
    countT cbit2 = c2 ;
    c1.growBitsToF( tinP , cbit1 + 1 ) ;
    c2.growBitsToF( tinP , cbit2 + 1 ) ;
    cbit1 = c1 ;
    cbit2 = c2 ;
    ZE( countT* , pc1 ) ;
    ZE( countT* , pc2 ) ;
    ZE( countT* , pcr ) ;
    pc1 = c1 ;
    pc2 = c2 ;
    countT cbitn = cbit1 + cbit2 ;
    countT cWords = 1 + cbitn / SC ;
    ether.newF( tinP , LF , pcr , cWords ) ; ___( pcr ) ;
    ether.memSetF( tinP , (byteT*)pcr , cWords * (SC/SB) ) ;

    // PERFORM THE MULTIPLICATION
    sCountC acc( tinP , ether , (countT)0 ) ;
    if( !ether )
    {
        countT boffSign1 = cbit1 - 1 ;
        countT boffSign2 = cbit2 - 1 ;
        for( countT boff1 = 0 ; boff1 < boffSign1 ; boff1 ++ )
        {
            for( countT boff2 = 0 ; boff2 < boffSign2 ; boff2 ++ )
            {
                if( bitF( tinP , pc1 , boff1 ) && bitF( tinP , pc2 , boff2 ) )
                {
                    countT one = 1 ;
                    ether.memSetF( tinP , (byteT*)pcr , cWords * (SC/SB) ) ;
                    setBitF( tinP , pcr , boff1 + boff2 , 1 ) ;
                    acc += sCountC( tinP , ether , pcr , cbitn ) ;
                }
            }
        }
        if( fNeg1 != fNeg2 ) acc = - acc ;
    }
    ether.delF( tinP , pcr ) ;

    // RETURN THE RESULT AS A TEMPORARY sCountC OBJECT
    sCountC cResult( acc ) ;
    return cResult ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006010.scountc.operator_multiply END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006011.scountc.operator_modulo BEGIN
#define DDNAME       "3func.36006011.scountc.operator_modulo"
#define DDNUMB      (countT)0x36006011
#define IDFILE      (countT)0xe59


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f220104.1.1.0.html\"\>f220104:  WAKEsHOW( "example.simplest.func.1080012.sCountC.operator_modulo" )\</A\>
evaluates to this object's value modulo (remainder) cP
operand 1 is formed from my highest order (sign) bit and my low order 31 bits
both operands are signed, and the result is signed modulus
arguments
 cP
*/
/**//*1*/sCountT sCountC::operator %( const sCountT cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
        __( !ether && sizeof( countT ) != 0x4 ) ;
        if( ether ) return 0 ;
    }

    _IO_

    //U:: CHEAT: THIS WILL WORK ONLY FOR UP TO 04 BITS

    sCountC me( *this ) ;
    me.growBitsToF( tinP , SC << 1 ) ;

    countT  cBits   = me ;
    countT* pcValue = me ;
    count04T& cBig = *(count04T*)pcValue ;

    count04T rc = cBig % cP ;

    return (sCountT)rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006011.scountc.operator_modulo END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006012.scountc.operator_plus BEGIN
#define DDNAME       "3func.36006012.scountc.operator_plus"
#define DDNUMB      (countT)0x36006012
#define IDFILE      (countT)0xe5a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0320104.1.1.0.html\"\>0320104:  WAKEsHOW( "example.simplest.func.1080013.sCountC.operator_plus" )\</A\>
evaluates to this object's value plus cP
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator +( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    // THIS FUNCTION ADDS TWO BINARY NUMBERS OF ARBITRARY LENGTH

    _IO_
    sCountC c1( *this ) ;
    sCountC c2( cP ) ;
    countT cbit1 = c1 ;
    countT cbit2 = c2 ;
    countT cbitn = cbit1 + 1 ;
    if( cbit1 < cbit2 ) cbitn = cbit2 + 1 ;
    c1.growBitsToF( tinP , cbitn ) ;
    c2.growBitsToF( tinP , cbitn ) ;
    ZE( countT* , pc1 ) ;
    ZE( countT* , pc2 ) ;
    ZE( countT* , pcr ) ;
    ether.newF( tinP , LF , pcr , 1 + cbitn / SC ) ; ___( pcr ) ;
    ether.memSetF( tinP , (byteT*)pcr , 1 + cbitn/SB ) ;
    pc1 = c1 ;
    pc2 = c2 ;

    // PERFORM THE ADDITION, DISCARDING THE CARRY FLAG AT THE END
    ZE( countT , carry ) ;
    if( !ether )
    {
        for( countT boff = 0 ; boff < cbitn ; boff ++ )
        {
            countT total = carry + bitF( tinP , pc1 , boff ) + bitF( tinP , pc2 , boff ) ;
            if( total )
            {
                setBitF( tinP , pcr , boff , total & 1 ) ;
            }
            carry = total >> 1 ;
        }
    }

    sCountC cr( tinP , ether , pcr , cbitn ) ;
    ether.delF( tinP , pcr ) ;
    return cr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006012.scountc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006013.scountc.operator_minus BEGIN
#define DDNAME       "3func.36006013.scountc.operator_minus"
#define DDNUMB      (countT)0x36006013
#define IDFILE      (countT)0xe5b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1320104.1.1.0.html\"\>1320104:  WAKEsHOW( "example.simplest.func.1080014.sCountC.operator_minus" )\</A\>
evaluates to this object's value minus cP
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator -( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    return operator +( ++ ~cP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006013.scountc.operator_minus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006014.scountc.operator_less BEGIN
#define DDNAME       "3func.36006014.scountc.operator_less"
#define DDNUMB      (countT)0x36006014
#define IDFILE      (countT)0xe5c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080015.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2320104.1.1.0.html\"\>2320104:  WAKEsHOW( "example.simplest.func.1080015.sCountC.operator_less" )\</A\>
evaluates to 0, or 1 if this object is less than cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator <( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    sCountC cr = *this - cP ;
    boolT booley = cr.fNegativeF( tinP ) ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006014.scountc.operator_less END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006015.scountc.operator_greater BEGIN
#define DDNAME       "3func.36006015.scountc.operator_greater"
#define DDNUMB      (countT)0x36006015
#define IDFILE      (countT)0xe5d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080016.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5320104.1.1.0.html\"\>5320104:  WAKEsHOW( "example.simplest.func.1080016.sCountC.operator_greater" )\</A\>
evaluates to 0, or 1 if this object is greater than cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator >( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    sCountC cr = cP ;
    cr -= *this ;
    boolT booley = cr.fNegativeF( tinP ) ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006015.scountc.operator_greater END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006016.scountc.operator_lessorequal BEGIN
#define DDNAME       "3func.36006016.scountc.operator_lessorequal"
#define DDNUMB      (countT)0x36006016
#define IDFILE      (countT)0xe5e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080017.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3320104.1.1.0.html\"\>3320104:  WAKEsHOW( "example.simplest.func.1080017.sCountC.operator_lessOrEqual" )\</A\>
evaluates to 0, or 1 if this object is less than or equal to cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator <=( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    boolT booley = !operator >( cP ) ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006016.scountc.operator_lessorequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006017.scountc.operator_greaterorequal BEGIN
#define DDNAME       "3func.36006017.scountc.operator_greaterorequal"
#define DDNUMB      (countT)0x36006017
#define IDFILE      (countT)0xe5f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080018.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6320104.1.1.0.html\"\>6320104:  WAKEsHOW( "example.simplest.func.1080018.sCountC.operator_greaterOrEqual" )\</A\>
evaluates to 0, or 1 if this object is greater than or equal to cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator >=( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    boolT booley = !operator <( cP ) ;
    return booley ; 
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006017.scountc.operator_greaterorequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006018.scountc.operator_equal BEGIN
#define DDNAME       "3func.36006018.scountc.operator_equal"
#define DDNUMB      (countT)0x36006018
#define IDFILE      (countT)0xe60


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4320104.1.1.0.html\"\>4320104:  WAKEsHOW( "example.simplest.func.1080019.sCountC.operator_equal" )\</A\>
returns 0, or 1 if this object is equal to cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator ==( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    boolT booley = !operator <( cP ) && !operator >( cP ) ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006018.scountc.operator_equal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006019.scountc.operator_notequal BEGIN
#define DDNAME       "3func.36006019.scountc.operator_notequal"
#define DDNUMB      (countT)0x36006019
#define IDFILE      (countT)0xe61


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7320104.1.1.0.html\"\>7320104:  WAKEsHOW( "example.simplest.func.108001a.sCountC.operator_notEqual" )\</A\>
returns 0, or 1 iff this object is not equal to cP
arguments
 cP
*/
/**//*1*/boolT sCountC::operator !=( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL    
    {
        if( ether ) return 0 ;
    }

    _IO_
    boolT booley = !operator ==( cP ) ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006019.scountc.operator_notequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601a.scountc.operator_and BEGIN
#define DDNAME       "3func.3600601a.scountc.operator_and"
#define DDNUMB      (countT)0x3600601a
#define IDFILE      (countT)0xe62


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8320104.1.1.0.html\"\>8320104:  WAKEsHOW( "example.simplest.func.108001b.sCountC.operator_and" )\</A\>
evaluates to 0, or 1 iff both this object and cP contains a nonze value
arguments
 cP
*/
/**//*1*/boolT sCountC::operator &&( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    sCountC ze( tinP , ether ) ;
    boolT booley = *this != ze && cP != ze ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601a.scountc.operator_and END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601b.scountc.operator_or BEGIN
#define DDNAME       "3func.3600601b.scountc.operator_or"
#define DDNUMB      (countT)0x3600601b
#define IDFILE      (countT)0xe63


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9320104.1.1.0.html\"\>9320104:  WAKEsHOW( "example.simplest.func.108001c.sCountC.operator_or" )\</A\>
evaluates to 0, or 1 iff either this object or (nonexclusive) cP contains a nonze value
arguments
 cP
*/
/**//*1*/boolT sCountC::operator ||( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    sCountC ze( tinP , ether ) ;
    boolT booley = *this != ze || cP != ze ;
    return booley ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601b.scountc.operator_or END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601c.scountc.operator_assign BEGIN
#define DDNAME       "3func.3600601c.scountc.operator_assign"
#define DDNUMB      (countT)0x3600601c
#define IDFILE      (countT)0xe64


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a320104.1.1.0.html\"\>a320104:  WAKEsHOW( "example.simplest.func.108001d.sCountC.operator_assign" )\</A\>
evaluates to a reference to this object
replaces the old value with cP
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator =( const sCountC& cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    cbit = cP.cbit ;
    ether.delF( tinP , pc ) ;

    countT cBytes = 1 + cbit / SB ;
    countT cWords = 1 + cbit / SC ;
    ether.newF( tinP , LF , pc , cWords ) ; ___( pc ) ;
    ether.memSetF( tinP , (byteT*)pc , cWords * (SC/SB) ) ;
    ether.memCopyF( tinP , (byteT*)pc , (byteT*)cP.pc , cBytes ) ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601c.scountc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601d.scountc.operator_assign BEGIN
#define DDNAME       "3func.3600601d.scountc.operator_assign"
#define DDNUMB      (countT)0x3600601d
#define IDFILE      (countT)0xe65


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b320104.1.1.0.html\"\>b320104:  WAKEsHOW( "example.simplest.func.108001e.sCountC.operator_assign" )\</A\>
evaluates to a reference to this object
replaces the old value with cP
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator =( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    cbit = cbitF( tinP , cP ) ;
    ether.delF( tinP , pc ) ;

    ether.newF( tinP , LF , pc , 1 ) ; ___( pc ) ;
    ether.memSetF( tinP , (byteT*)pc , (SC/SB) ) ;
    ether.memCopyF( tinP , (byteT*)pc , (byteT*)&cP , (SC/SB) ) ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601d.scountc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601e.scountc.operator_incrementby BEGIN
#define DDNAME       "3func.3600601e.scountc.operator_incrementby"
#define DDNUMB      (countT)0x3600601e
#define IDFILE      (countT)0xe66


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108001f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c320104.1.1.0.html\"\>c320104:  WAKEsHOW( "example.simplest.func.108001f.sCountC.operator_incrementBy" )\</A\>
evaluates to a reference to this object
adds cP to the old value, replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator +=( const sCountC& cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this + cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601e.scountc.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601f.scountc.operator_decrementby BEGIN
#define DDNAME       "3func.3600601f.scountc.operator_decrementby"
#define DDNUMB      (countT)0x3600601f
#define IDFILE      (countT)0xe67


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080020.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d320104.1.1.0.html\"\>d320104:  WAKEsHOW( "example.simplest.func.1080020.sCountC.operator_decrementBy" )\</A\>
evaluates to a reference to this object
subtracts cP from the old value, replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator -=( const sCountC& cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this - cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600601f.scountc.operator_decrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006020.scountc.operator_multiplyby BEGIN
#define DDNAME       "3func.36006020.scountc.operator_multiplyby"
#define DDNUMB      (countT)0x36006020
#define IDFILE      (countT)0xe68


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080021.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e320104.1.1.0.html\"\>e320104:  WAKEsHOW( "example.simplest.func.1080021.sCountC.operator_multiplyBy" )\</A\>
evaluates to a reference to this object
multiplies the old value by cP, replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator *=( const sCountC& cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this * cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006020.scountc.operator_multiplyby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006021.scountc.operator_moduloby BEGIN
#define DDNAME       "3func.36006021.scountc.operator_moduloby"
#define DDNUMB      (countT)0x36006021
#define IDFILE      (countT)0xe69


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080022.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1420104.1.1.0.html\"\>1420104:  WAKEsHOW( "example.simplest.func.1080022.sCountC.operator_moduloBy" )\</A\>
evaluates to a reference to this object
calculates the modulo (remainder), replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator %=( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this % cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006021.scountc.operator_moduloby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006022.scountc.bitf BEGIN
#define DDNAME       "3func.36006022.scountc.bitf"
#define DDNUMB      (countT)0x36006022
#define IDFILE      (countT)0xe6a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$bitF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080023.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to 1 or 0, the value of the specified bit
arguments
 cP
 offP
*/
/**//*1*/boolT sCountC::bitF( tinS& tinP , const countT cP , const countT offP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    countT cc = cP ;
    cc >>= offP ;
    return cc & 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006022.scountc.bitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006023.scountc.bitf BEGIN
#define DDNAME       "3func.36006023.scountc.bitf"
#define DDNUMB      (countT)0x36006023
#define IDFILE      (countT)0xe6b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$bitF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080024.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to 1 or 0, the value of the specified bit
arguments
 pcP
 offP
*/
/**//*1*/boolT sCountC::bitF( tinS& tinP , const countT* const pcP , const countT offP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    ZE( boolT , bit ) ;
    if( !ether ) bit = bitF( tinP , pcP[ offP/SC ] , offP%SC ) ;
    return bit ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006023.scountc.bitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006024.scountc.cbitf BEGIN
#define DDNAME       "3func.36006024.scountc.cbitf"
#define DDNUMB      (countT)0x36006024
#define IDFILE      (countT)0xe6c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cbitF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080025.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to the number of bits in cP, using cbitF
arguments
 cP
*/
/**//*1*/countT sCountC::cbitF( tinS& tinP , const sCountT cP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    countT cBit = cbitF( tinP , (countT*)&cP , SB * sizeof cP ) ;
    return cBit ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006024.scountc.cbitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006025.scountc.cbitf BEGIN
#define DDNAME       "3func.36006025.scountc.cbitf"
#define DDNUMB      (countT)0x36006025
#define IDFILE      (countT)0xe6d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cbitF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080026.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to the number of bits required to express the value
 one sign bit is always included
arguments
 pcP
 cbitP
*/
/**//*1*/countT sCountC::cbitF( tinS& tinP , const countT* const pcP , const countT cbitP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    ZE( countT , cbitLocal ) ;
    boolT fNeg = bitF( tinP , pcP , cbitP - 1 ) ;
    countT off = cbitP - 1 ;
    while( off && bitF( tinP , pcP , off ) == fNeg ) off -- ;
    cbitLocal = off + 2 ; //RETAINS ONE OF THE SIGN BITS
    return cbitLocal ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006025.scountc.cbitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006026.scountc.fnegativef BEGIN
#define DDNAME       "3func.36006026.scountc.fnegativef"
#define DDNUMB      (countT)0x36006026
#define IDFILE      (countT)0xe6e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$fNegativeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080027.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to 1 if negative, else to 0
*/
/**//*1*/boolT sCountC::fNegativeF( tinS& tinP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    boolT fNeg = bitF( tinP , pc , cbit - 1 ) ;
    return fNeg ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006026.scountc.fnegativef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006027.scountc.growbitstof BEGIN
#define DDNAME       "3func.36006027.scountc.growbitstof"
#define DDNUMB      (countT)0x36006027
#define IDFILE      (countT)0xe6f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$growBitsToF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080028.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
increases the bit capacity, reallocating new storage if needed
arguments
 cbitNewP
*/
/**//*1*/voidT sCountC::growBitsToF( tinS& tinP , const countT cbitNewP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    if( cbitNewP > cbit )
    {
        ZE( countT* , pcn ) ;
        countT cBytesOld = 1 + cbit / SB ;
        countT cBytes = 1 + cbitNewP / SB ;
        countT cWords = 1 + cbitNewP / SC ; // A "word" HERE IS THE SIZE OF countT
        ether.newF( tinP , LF , pcn , cWords ) ; ___( pcn ) ;
        ether.memSetF( tinP , (byteT*)pcn , cWords * (SC/SB) ) ;
        ether.memCopyF( tinP , (byteT*)pcn , (byteT*)pc , cBytesOld ) ;
        boolT fNeg = bitF( tinP , pcn , cbit - 1 ) ;
        for( countT boff = cbit ; boff < cbitNewP ; boff ++ )
        {
            setBitF( tinP , pcn , boff , fNeg ) ;
        }
        ether.delF( tinP , pc ) ;
        pc = pcn ;
        cbit = cbitNewP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006027.scountc.growbitstof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006028.scountc.onescomplementf BEGIN
#define DDNAME       "3func.36006028.scountc.onescomplementf"
#define DDNUMB      (countT)0x36006028
#define IDFILE      (countT)0xe70


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$onesComplementF.0.html\"\>instances\</A\>
\<A HREF=\"5.1080029.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
inverts all bits
*/
/**//*1*/voidT sCountC::onesComplementF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    countT cc = 1 + cbit / SC ;
    for( countT off = 0 ; off < cc ; off ++ )
    {
        pc[ off ] = ~pc[ off ] ;
    }
    setBitRangeF( tinP , pc , cbit , SC * cc - 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006028.scountc.onescomplementf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006029.scountc.setbitf BEGIN
#define DDNAME       "3func.36006029.scountc.setbitf"
#define DDNUMB      (countT)0x36006029
#define IDFILE      (countT)0xe71


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$setBitF.0.html\"\>instances\</A\>
\<A HREF=\"5.108002a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
sets the specified bit
arguments
 pcP
 offP
 valueP
*/
/**//*1*/voidT sCountC::setBitF( tinS& tinP , countT* const pcP , const countT offP , const boolT valueP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    countT value = valueP ;
    __( value != !!value ) ;
    countT one = 1 ;
    countT mask = ~( one << offP%SC ) ;
    value <<= offP ;
    if( !ether )
    {
        pcP[ offP/SC ] &= mask ;
        pcP[ offP/SC ] |= value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006029.scountc.setbitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602a.scountc.setbitrangef BEGIN
#define DDNAME       "3func.3600602a.scountc.setbitrangef"
#define DDNUMB      (countT)0x3600602a
#define IDFILE      (countT)0xe72


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$setBitRangeF.0.html\"\>instances\</A\>
\<A HREF=\"5.108002b.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
sets bits, using setBitF
arguments
 pcP
 off1P
 off2P
 valueP
*/
/**//*1*/voidT sCountC::setBitRangeF( tinS& tinP , countT* const pcP , const countT off1P , const countT off2P , const boolT valueP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    for( countT off = off1P ; off <= off2P ; off ++ )
    {
        setBitF( tinP , pcP , off , valueP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602a.scountc.setbitrangef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602b.scountc.setcbitf BEGIN
#define DDNAME       "3func.3600602b.scountc.setcbitf"
#define DDNUMB      (countT)0x3600602b
#define IDFILE      (countT)0xe73


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$setCBitF.0.html\"\>instances\</A\>
\<A HREF=\"5.108002c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
updates cbit, using cbitF
*/
/**//*1*/voidT sCountC::setCBitF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    cbit = cbitF( tinP , pc , cbit ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602b.scountc.setcbitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602c.scountc.operator_divide BEGIN
#define DDNAME       "3func.3600602c.scountc.operator_divide"
#define DDNUMB      (countT)0x3600602c
#define IDFILE      (countT)0xe74


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108002e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e220104.1.1.0.html\"\>e220104:  WAKEsHOW( "example.simplest.func.108002e.sCountC.operator_divide" )\</A\>
evaluates to an sCountC object
divides this object's value by cP
the time required is approximately proportional to the number of true bits in the result
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator /( const sCountC& cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    _IO_
    sCountC c1( *this ) ;
    sCountC c2( cP ) ;
    c1.setCBitF( tinP ) ;
    c2.setCBitF( tinP ) ;
    countT cbit1 = c1 ;
    countT cbit2 = c2 ;
    ZE( countT* , pcr ) ;
    ether.newF( tinP , LF , pcr , 1 + cbit1 / SC ) ; ___( pcr ) ;
    ether.memSetF( tinP , (byteT*)pcr , 1 + cbit1/SB ) ;

    for( sCountT offr = cbit1 - cbit2 ; offr >= 0 ; offr -- )
    {
        sCountC trial( c2 ) ;
        if( offr )
        {
            countT offr2 = offr ;
            sCountC factor( tinP , ether, 2 ) ;
            while( -- offr2 ) factor *= 2 ;
            trial *= factor ;
        }

        sCountC diff( tinP , ether ) ;
        diff = c1 - trial ;
        if( !diff.fNegativeF( tinP ) )
        {
            c1 -= trial ;
            setBitF( tinP , pcr , offr , 1 ) ;
        }

        if( c1 == sCountC( tinP , ether ) ) break ;
    }

    c1 = sCountC( tinP , ether , pcr , cbit1 ) ;
    ether.delF( tinP , pcr ) ;
    return c1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602c.scountc.operator_divide END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602d.scountc.operator_divideby BEGIN
#define DDNAME       "3func.3600602d.scountc.operator_divideby"
#define DDNUMB      (countT)0x3600602d
#define IDFILE      (countT)0xe75


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.108002f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f320104.1.1.0.html\"\>f320104:  WAKEsHOW( "example.simplest.func.108002f.sCountC.operator_divideBy" )\</A\>
evaluates to a reference to this object
divides this object's value by cP; replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator /=( const sCountC& cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this / cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602d.scountc.operator_divideby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602e.scountc.operator_divideby BEGIN
#define DDNAME       "3func.3600602e.scountc.operator_divideby"
#define DDNUMB      (countT)0x3600602e
#define IDFILE      (countT)0xe76


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080030.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0420104.1.1.0.html\"\>0420104:  WAKEsHOW( "example.simplest.func.1080030.sCountC.operator_divideBy" )\</A\>
evaluates to a reference to this object
divides this object's value by cP; replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator /=( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this / cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602e.scountc.operator_divideby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602f.scountc.operator_plus BEGIN
#define DDNAME       "3func.3600602f.scountc.operator_plus"
#define DDNUMB      (countT)0x3600602f
#define IDFILE      (countT)0xe77


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080031.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6a20104.1.1.0.html\"\>6a20104:  WAKEsHOW( "example.simplest.func.1080031.sCountC.operator_plus" )\</A\>
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator +( const sCountT cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    _IO_
    sCountC cr = *this + sCountC( tinP , ether , cP ) ;
    return cr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.3600602f.scountc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006030.scountc.operator_minus BEGIN
#define DDNAME       "3func.36006030.scountc.operator_minus"
#define DDNUMB      (countT)0x36006030
#define IDFILE      (countT)0xe78


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080032.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7a20104.1.1.0.html\"\>7a20104:  WAKEsHOW( "example.simplest.func.1080032.sCountC.operator_minus" )\</A\>
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator -( const sCountT cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    _IO_
    sCountC cr = *this - sCountC( tinP , ether , cP ) ;
    return cr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006030.scountc.operator_minus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006031.scountc.operator_multiply BEGIN
#define DDNAME       "3func.36006031.scountc.operator_multiply"
#define DDNUMB      (countT)0x36006031
#define IDFILE      (countT)0xe79


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080033.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8a20104.1.1.0.html\"\>8a20104:  WAKEsHOW( "example.simplest.func.1080033.sCountC.operator_multiply" )\</A\>
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator *( const sCountT cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    _IO_
    sCountC cr = *this * sCountC( tinP , ether , cP ) ;
    return cr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006031.scountc.operator_multiply END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006032.scountc.operator_divide BEGIN
#define DDNAME       "3func.36006032.scountc.operator_divide"
#define DDNUMB      (countT)0x36006032
#define IDFILE      (countT)0xe7a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080034.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9a20104.1.1.0.html\"\>9a20104:  WAKEsHOW( "example.simplest.func.1080034.sCountC.operator_divide" )\</A\>
arguments
 cP
*/
/**//*1*/sCountC sCountC::operator /( const sCountT cP ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    _IO_
    sCountC cr = *this / sCountC( tinP , ether , cP ) ;
    return cr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006032.scountc.operator_divide END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006033.scountc.operator_incrementby BEGIN
#define DDNAME       "3func.36006033.scountc.operator_incrementby"
#define DDNUMB      (countT)0x36006033
#define IDFILE      (countT)0xe7b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080035.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.aa20104.1.1.0.html\"\>aa20104:  WAKEsHOW( "example.simplest.func.1080035.sCountC.operator_incrementBy" )\</A\>
evaluates to a reference to this object
increments this object's value by cP; replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator +=( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this + cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006033.scountc.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006034.scountc.operator_decrementby BEGIN
#define DDNAME       "3func.36006034.scountc.operator_decrementby"
#define DDNUMB      (countT)0x36006034
#define IDFILE      (countT)0xe7c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080036.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ba20104.1.1.0.html\"\>ba20104:  WAKEsHOW( "example.simplest.func.1080036.sCountC.operator_decrementBy" )\</A\>
evaluates to a reference to this object
decrements this object's value by cP; replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator -=( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this - cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006034.scountc.operator_decrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006035.scountc.operator_multiplyby BEGIN
#define DDNAME       "3func.36006035.scountc.operator_multiplyby"
#define DDNUMB      (countT)0x36006035
#define IDFILE      (countT)0xe7d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080037.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ca20104.1.1.0.html\"\>ca20104:  WAKEsHOW( "example.simplest.func.1080037.sCountC.operator_multiplyBy" )\</A\>
evaluates to a reference to this object
multiplies this object's value by cP; replacing the old value
arguments
 cP
*/
/**//*1*/sCountC& sCountC::operator *=( const sCountT cP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    *this = *this * cP ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006035.scountc.operator_multiplyby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006036.scountc.scountc BEGIN
#define DDNAME       "3func.36006036.scountc.scountc"
#define DDNUMB      (countT)0x36006036
#define IDFILE      (countT)0xe7e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e120104.1.1.0.html\"\>e120104:  WAKEsHOW( "example.simplest.func.1080001.sCountC.sCountC" )\</A\>
objects of this class can contain arbitrarily large whole numbers
the initial value is taken from the specified string of countT's
 the order of the countT string is from least to most significant
cbitP can be any value
arguments
 etherP
 pcP
 cbitP
*/
/**//*1*/sCountC::sCountC( tinS& tinP , etherC& etherP , const countT* pcP , const countT cbitP )/*1*/ :
ether( etherP ) ,
cbit( cbitP ) ,
pc( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( pcP ) ;
        __Z( cbit ) ;
        if( ether ) return ;
    }

    // THERE ARE NO RESTRICTIONS ON pcP.  IN PARTICULAR, IT MAY POINT
    // TO AN ODD NUMBER OF BYTES AND BITS (E.G. 3,5) THAT LIE AT THE
    // END OF ADDRESSABLE MEMORY. IN THE 3,5 CASE, THIS FUNCTION WILL
    // READ ALL BITS OF THE FOURTH BYTE, BUT WILL IGNORE THE 3 TRAILING
    // BITS IN THAT LAST BYTE.  SUBSEQUENT BYTES WILL NOT BE ACCESSED,
    // EVEN WHEN THE LAST BYTE IS IN THE MIDDLE OF A countT.

    _IO_
    countT cBytes = 1 + cbit / SB ;
    countT cWords = 1 + cbit / SC ; // A "word" HERE IS THE SIZE OF countT
    ether.newF( tinP , LF , pc , cWords ) ; ___( pc ) ;
    ether.memSetF( tinP , (byteT*)pc , cWords * (SC/SB) ) ;
    ether.memCopyF( tinP , (byteT*)pc , (byteT*)pcP , cBytes ) ;
    countT cbitOld = cbit ;
    cbit = cbitF( tinP , pc , cbit ) ;
    setBitRangeF( tinP , pc , cbit , cbitOld - 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006036.scountc.scountc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006037.scountc.scountc BEGIN
#define DDNAME       "3func.36006037.scountc.scountc"
#define DDNUMB      (countT)0x36006037
#define IDFILE      (countT)0xe7f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1080002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f120104.1.1.0.html\"\>f120104:  WAKEsHOW( "example.simplest.func.1080002.sCountC.sCountC" )\</A\>
this object will contain the value cP after construction
arguments
 etherP
 cP
*/
/**//*1*/sCountC::sCountC( tinS& tinP , etherC& etherP , const sCountT cP )/*1*/ :
ether( etherP ) ,
cbit( cbitF( tinP , cP ) ) ,
pc( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    ether.newF( tinP , LF , pc , 1 ) ; ___( pc ) ;
    ether.memSetF( tinP , (byteT*)pc , (SC/SB) ) ;
    ether.memCopyF( tinP , (byteT*)pc , (byteT*)&cP , (SC/SB) ) ;
    setBitRangeF( tinP , pc , cbit , SC - 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36006* : 3func.36006037.scountc.scountc END
