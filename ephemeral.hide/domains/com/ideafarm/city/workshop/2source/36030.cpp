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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030001.nicnamec.nicnamec BEGIN
#define DDNAME       "3func.36030001.nicnamec.nicnamec"
#define DDNUMB      (countT)0x36030001
#define IDFILE      (countT)0x10b8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460003.1.0.html\"\>definition\</A\>
*/
/**/

// THIS DEFINITION MUST BE IN ITS OWN MODULE BECAUSE IT IS USED BY thirdC MODULES
// DO NOT REFER TO "TINSL" OR MAKE ANY REFERENCES THAT WOULD REQUIRE MODULES OTHER THAN THE THIRD MODULES
// THE REMAINING func.146* FILES MUST BE CALLED OUT INDIVIDUALLY IN base.bat

/*1*/nicNameC::nicNameC( const countT c1P , const countT c2P , const countT c3P , const countT c4P )/*1*/
{
    pcId[ 0 ] = c1P ;
    pcId[ 1 ] = c2P ;
    pcId[ 2 ] = c3P ;
    pcId[ 3 ] = c4P ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030001.nicnamec.nicnamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030002.nicnamec.operator_assign BEGIN
#define DDNAME       "3func.36030002.nicnamec.operator_assign"
#define DDNUMB      (countT)0x36030002
#define IDFILE      (countT)0x10b9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNameC& nicNameC::operator =( const countT c1P )/*1*/
{
    pcId[ 0 ] = c1P ;
    pcId[ 3 ] = pcId[ 2 ] = pcId[ 1 ] = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030002.nicnamec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030003.nicnamec.operator_equal BEGIN
#define DDNAME       "3func.36030003.nicnamec.operator_equal"
#define DDNUMB      (countT)0x36030003
#define IDFILE      (countT)0x10ba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator ==( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    return !thirdC::c_memcmpIF( tinP , (byteT*)this , (byteT*)&nicNameP , processGlobal1I.cb_nicNameC_ ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030003.nicnamec.operator_equal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030004.nicnamec.operator_equal BEGIN
#define DDNAME       "3func.36030004.nicnamec.operator_equal"
#define DDNUMB      (countT)0x36030004
#define IDFILE      (countT)0x10bb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator ==( const countT nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return pcId[ 0 ] == nicNameP && !pcId[ 1 ] && !pcId[ 2 ] && !pcId[ 3 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030004.nicnamec.operator_equal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030005.nicnamec.operator_boolt BEGIN
#define DDNAME       "3func.36030005.nicnamec.operator_boolt"
#define DDNUMB      (countT)0x36030005
#define IDFILE      (countT)0x10bc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460008.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNameC::operator boolT( voidT ) const/*1*/
{
    return pcId[ 0 ] || pcId[ 1 ] || pcId[ 2 ] || pcId[ 3 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030005.nicnamec.operator_boolt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030006.nicnamec.operator_less BEGIN
#define DDNAME       "3func.36030006.nicnamec.operator_less"
#define DDNUMB      (countT)0x36030006
#define IDFILE      (countT)0x10bd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.146000b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator <( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;

    ZE( boolT , bTrue ) ;
    {
        sCountT off = sizeof pcId / sizeof pcId[ 0 ] - 1 ;
        while( off >= 0 && !bTrue )
        {
            bTrue = pcId[ off ] < nicNameP.pcId[ off ] ;
            off -- ;
        }
    }

    return bTrue ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030006.nicnamec.operator_less END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030007.nicnamec.operator_lessorequal BEGIN
#define DDNAME       "3func.36030007.nicnamec.operator_lessorequal"
#define DDNUMB      (countT)0x36030007
#define IDFILE      (countT)0x10be


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.146000c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator <=( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return *this < nicNameP || *this == nicNameP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030007.nicnamec.operator_lessorequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030008.nicnamec.operator_greater BEGIN
#define DDNAME       "3func.36030008.nicnamec.operator_greater"
#define DDNUMB      (countT)0x36030008
#define IDFILE      (countT)0x10bf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.146000d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator >( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;

    ZE( boolT , bTrue ) ;
    {
        sCountT off = sizeof pcId / sizeof pcId[ 0 ] - 1 ;
        while( off >= 0 && !bTrue )
        {
            bTrue = pcId[ off ] > nicNameP.pcId[ off ] ;
            off -- ;
        }
    }

    return bTrue ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030008.nicnamec.operator_greater END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030009.nicnamec.operator_greaterorequal BEGIN
#define DDNAME       "3func.36030009.nicnamec.operator_greaterorequal"
#define DDNUMB      (countT)0x36030009
#define IDFILE      (countT)0x10c0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.146000e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator >=( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return *this > nicNameP || *this == nicNameP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030009.nicnamec.operator_greaterorequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000a.nicnamec.operator_increment BEGIN
#define DDNAME       "3func.3603000a.nicnamec.operator_increment"
#define DDNUMB      (countT)0x3603000a
#define IDFILE      (countT)0x10c1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.146000f.1.0.html\"\>definition\</A\>
*/
/**/


/*1*/nicNameC& nicNameC::operator ++( voidT )/*1*/
{
    BLAMMO ; //U::WHAT THE HELL IS THIS USED FOR??? (BLAMMO TO FIND OUT)
                    pcId[ 0 ] ++ ;
    if( !pcId[ 0 ] ) pcId[ 1 ] ++ ;
    if( !pcId[ 1 ] ) pcId[ 2 ] ++ ;
    if( !pcId[ 2 ] ) pcId[ 3 ] ++ ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000a.nicnamec.operator_increment END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000b.nicnamec.operator_countt_ptr BEGIN
#define DDNAME       "3func.3603000b.nicnamec.operator_countt_ptr"
#define DDNUMB      (countT)0x3603000b
#define IDFILE      (countT)0x10c2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460010.1.0.html\"\>definition\</A\>
my value is guaranteed to be not 0
*/
/**/

/*1*/nicNameC::operator const countT*( voidT ) const/*1*/
{
    return pcId ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000b.nicnamec.operator_countt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000c.nicnamec.operator_assign BEGIN
#define DDNAME       "3func.3603000c.nicnamec.operator_assign"
#define DDNUMB      (countT)0x3603000c
#define IDFILE      (countT)0x10c3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460011.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNameC& nicNameC::operator =( nicNamesC& nicNamesP )/*1*/
{
    *this = /*(nicNameC)*/nicNamesP ; //2011.02.01: CAST REMOVED DURING MIGRATION TO NEW WATCOM, WHICH COMPLAINS ABOUT NOT KNOWING WHICH CONSTRUCTOR TO USE

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000c.nicnamec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000d.nicnamec.operator_notequal BEGIN
#define DDNAME       "3func.3603000d.nicnamec.operator_notequal"
#define DDNUMB      (countT)0x3603000d
#define IDFILE      (countT)0x10c4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460012.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator !=( const nicNameC& nicNameP ) const/*1*/
{
    TINSL
    return !!thirdC::c_memcmpIF( tinP , (byteT*)this , (byteT*)&nicNameP , processGlobal1I.cb_nicNameC_ ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000d.nicnamec.operator_notequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000e.nicnamec.operator_notequal BEGIN
#define DDNAME       "3func.3603000e.nicnamec.operator_notequal"
#define DDNUMB      (countT)0x3603000e
#define IDFILE      (countT)0x10c5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1460013.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT nicNameC::operator !=( const countT nicNameP ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return pcId[ 0 ] != nicNameP || pcId[ 1 ] || pcId[ 2 ] || pcId[ 3 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000e.nicnamec.operator_notequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000f.nicnamec.operator_shiftleft BEGIN
#define DDNAME       "3func.3603000f.nicnamec.operator_shiftleft"
#define DDNUMB      (countT)0x3603000f
#define IDFILE      (countT)0x10c6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT nicNameC::operator <<( soulC& slP )/*1*/
{
    TINSL
    byteT* pbId = (byteT*)pcId ;
    countT cbId = sizeof pcId ;
    slP.shiftRightF( tinP , pbId , cbId , ifcIDtYPEsOULiTEM_nicNameC ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.3603000f.nicnamec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030010.nicnamec.operator_shiftright BEGIN
#define DDNAME       "3func.36030010.nicnamec.operator_shiftright"
#define DDNUMB      (countT)0x36030010
#define IDFILE      (countT)0x10c7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT nicNameC::operator >>( soulC& slP ) const/*1*/
{
    TINSL
    slP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_nicNameC , (byteT*)pcId , sizeof pcId , flSOULiTEM_MADEoFcOUNToBJECTS|flSOULiTEM_INCREASINGiNsIGNIFICANCE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030010.nicnamec.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030011.nicnamec.operator_notnot BEGIN
#define DDNAME       "3func.36030011.nicnamec.operator_notnot"
#define DDNUMB      (countT)0x36030011
#define IDFILE      (countT)0x10c8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT nicNameC::operator ~( voidT ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return pcId[ 0 ] || pcId[ 1 ] || pcId[ 2 ] || pcId[ 3 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030011.nicnamec.operator_notnot END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030012.nicnamec.operator_not BEGIN
#define DDNAME       "3func.36030012.nicnamec.operator_not"
#define DDNUMB      (countT)0x36030012
#define IDFILE      (countT)0x10c9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT nicNameC::operator !( voidT ) const/*1*/
{
    TINSL
    ZE( countT , ecnu ) ;
    return !( pcId[ 0 ] || pcId[ 1 ] || pcId[ 2 ] || pcId[ 3 ] ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030012.nicnamec.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030013.nicnamec.cfieldsf BEGIN
#define DDNAME       "3func.36030013.nicnamec.cfieldsf"
#define DDNUMB      (countT)0x36030013
#define IDFILE      (countT)0x10ca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT nicNameC::cFieldsF( tinS& tinP )/*1*/
{
    if( tinP.fingerprint ) ;
    return 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030013.nicnamec.cfieldsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030014.nicnamec.fieldf BEGIN
#define DDNAME       "3func.36030014.nicnamec.fieldf"
#define DDNUMB      (countT)0x36030014
#define IDFILE      (countT)0x10cb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/nicNameC& nicNameC::fieldF( tinS& tinP , soulC& soulP , const countT idFieldStartP )/*1*/
{
    if( (countT)soulP < idFieldStartP - 1 + cFieldsF( tinP ) ) { BLAMMO ; }

    ZE( countT , idType ) ;
    ZE( flagsT , flags ) ;
    ZE( countT , cbd ) ;
    nicNameC& ref = *(nicNameC*)soulP.pbFieldF( tinP , idType , flags , cbd , idFieldStartP ) ;
    if( idType != ifcIDtYPEsOULiTEM_nicNameC ) { BLAMMO ; }
    if( flags != ( flSOULiTEM_MADEoFcOUNToBJECTS|flSOULiTEM_INCREASINGiNsIGNIFICANCE ) ) { BLAMMO ; }
    if( cbd - sizeof( nicNameC ) ) { BLAMMO ; }
    return ref ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030014.nicnamec.fieldf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030015.nicnamec.adjustf BEGIN
#define DDNAME       "3func.36030015.nicnamec.adjustf"
#define DDNUMB      (countT)0x36030015
#define IDFILE      (countT)0x10cc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
use me to obtain a unique nn value that does not contain 0 terms
ifc does not support "real" nn values that contain the value -1
-1 is used as a synonym for 0
*/
/**/

/*1*/voidT nicNameC::adjustF( tinS& tinP )/*1*/
{
    for( countT off = 0 ; off < sizeof pcId / pcId[ 0 ] ; off ++ )
    {
        if( pcId[ off ] == - 1 ) { BLAMMO ; } //S: IFC SOFTWARE DOES NOT SUPPORT nn VALUES THAT CONTAIN - 1
        else if( !pcId[ off ] ) pcId[ off ] = - 1 ;
    }

    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36030* : 3func.36030015.nicnamec.adjustf END
