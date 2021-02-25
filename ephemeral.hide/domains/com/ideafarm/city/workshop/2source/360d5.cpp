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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5002.x0switchstackc.dt_x0switchstackc BEGIN
#define DDNAME       "3func.360d5002.x0switchstackc.dt_x0switchstackc"
#define DDNUMB      (countT)0x360d5002
#define IDFILE      (countT)0x13b5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/x0SwitchStackC::~x0SwitchStackC( voidT )/*1*/
{
    if( 1 == decv02AM( cRef ) )
    {
        TINSL
        switchStackC* pSws = (switchStackC*)pbSws ;
        DELzOMBIE( pSws ) ;

        etherC* pEther = PeTHER ;
        DELzOMBIE( pEther ) ;

        poolC* pPoolHomeTemp = (poolC*)pbPoolRoot ;
        DELzOMBIE( pPoolHomeTemp ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5002.x0switchstackc.dt_x0switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5003.x0switchstackc.x0switchstackc BEGIN
#define DDNAME       "3func.360d5003.x0switchstackc.x0switchstackc"
#define DDNUMB      (countT)0x360d5003
#define IDFILE      (countT)0x13b6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/x0SwitchStackC::x0SwitchStackC( tinS& tinP , napkinC& napBackP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , const flagsT flagsStackP , const countT idTypeP )/*1*/
{
    if( !napBackP.bFormattedF() )
    {
        cRef = 1 ;
        cLever = 0 ;
        new( 0 , tinP , pbPoolRoot , sizeof pbPoolRoot ) poolC( tinP , TAG( TAGiDnULL ) , "root" ) ;
        new( 0 , tinP , pbEther    , sizeof pbEther    ) etherC( tinP , TAG( TAGiDnULL ) ) ;
        new( 0 , tinP , pbSws      , sizeof pbSws      ) switchStackC( tinP , *(etherC*)pbEther , idLineCtP , idiFileCtP , pbBitsCtP , flagsSwitchP , cLever , flagsStackP , idTypeP ) ;
        napBackP.formattingIsDoneF( tinP ) ;
    }
    else inc02AM( cRef ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5003.x0switchstackc.x0switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5004.x0switchstackc.leverf BEGIN
#define DDNAME       "3func.360d5004.x0switchstackc.leverf"
#define DDNUMB      (countT)0x360d5004
#define IDFILE      (countT)0x13b7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT& x0SwitchStackC::leverF( tinS& tinP )/*1*/
{
    return cLever ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5004.x0switchstackc.leverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5005.x0switchstackc.operator_switchstackc_ref BEGIN
#define DDNAME       "3func.360d5005.x0switchstackc.operator_switchstackc_ref"
#define DDNUMB      (countT)0x360d5005
#define IDFILE      (countT)0x13b8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/x0SwitchStackC::operator switchStackC&( voidT )/*1*/
{
    return *(switchStackC*)pbSws ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d5* : 3func.360d5005.x0switchstackc.operator_switchstackc_ref END
