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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8001.datum_countt_c.dt_datum_countt_c BEGIN
#define DDNAME       "3func.360e8001.datum_countt_c.dt_datum_countt_c"
#define DDNUMB      (countT)0x360e8001
#define IDFILE      (countT)0x142d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countT_C::~datum_countT_C( voidT )/*1*/
{
    TINSL

    byteT* pbData = (byteT*)aptData ;

    __( *(countT*)pbData ) ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( *(countT*)pbData ) { ++ s ; thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ; } // cRef
    }
    THREADmODE1rESTORE ;

    unIndexF( tinP ) ;

    PUSE( tinP , pbData ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8001.datum_countt_c.dt_datum_countt_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8002.datum_countt_c.datum_countt_c BEGIN
#define DDNAME       "3func.360e8002.datum_countt_c.datum_countt_c"
#define DDNUMB      (countT)0x360e8002
#define IDFILE      (countT)0x142e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countT_C::datum_countT_C( tinS& tinP , byteT& flagsiP , byteT& idTypeP , const countT valueP , const listingC& listingP ) :/*1*/
datumC( flagsiP , idTypeP , ifcIDtYPEmIXINdATUM_countT , listingP )
{
    ZE( byteT* , pbData ) ;
    PUSE.newF( tinP , LF , pbData , 2 * sizeof( countT ) ) ; ___( pbData ) ;
    if( pbData )
    {
        ((countT*)pbData)[ 0 ] = 0 ; //CS:CODEsYNC: 2200010 2220003
        ((countT*)pbData)[ 1 ] = valueP ;
        aptData = pbData ;

        //CONoUTrAW5( "datum_countT_C: [pbData,aptData]: " , pbData , " " , aptData , "     pool: \"" ) ;
        //CONoUTrAW( tinP.pPoolUse->guts.postName ) ;
        //CONoUTrAW( "\"\r\n" ) ;

        indexF( tinP ) ;
        //BLAMMO ; //U::TO TEST
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8002.datum_countt_c.datum_countt_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8003.datum_countt_c.operator_countt_ptr BEGIN
#define DDNAME       "3func.360e8003.datum_countt_c.operator_countt_ptr"
#define DDNUMB      (countT)0x360e8003
#define IDFILE      (countT)0x142f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countT_C::operator countT*( voidT ) const/*1*/
{
    return !aptData ? 0 : (countT*)(byteT*)aptData + 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e8* : 3func.360e8003.datum_countt_c.operator_countt_ptr END
