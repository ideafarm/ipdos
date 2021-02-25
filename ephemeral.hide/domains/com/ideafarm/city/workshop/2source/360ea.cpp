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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea001.datum_blob_c.dt_datum_blob_c BEGIN
#define DDNAME       "3func.360ea001.datum_blob_c.dt_datum_blob_c"
#define DDNUMB      (countT)0x360ea001
#define IDFILE      (countT)0x1432


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_blob_C::~datum_blob_C( voidT )/*1*/
{
    TINSL
    //CS:CODEsYNC: 360ea001 360ea004
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
    __( pbData ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea001.datum_blob_c.dt_datum_blob_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea002.datum_blob_c.datum_blob_c BEGIN
#define DDNAME       "3func.360ea002.datum_blob_c.datum_blob_c"
#define DDNUMB      (countT)0x360ea002
#define IDFILE      (countT)0x1433


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_blob_C::datum_blob_C( tinS& tinP , byteT& flagsiP , byteT& idTypeP , const byteT* const pbP , const countT cbP , const listingC& listingP , const countT idLineNewP , const countT idiFileNewP ) :/*1*/
datumC( flagsiP , idTypeP , ifcIDtYPEmIXINdATUM_blob , listingP )
{
    //CS:CODEsYNC: 360ea004 360ea002
    if( pbP || cbP )    // IF !pbP THEN I WILL CREATE AN UNINITIALIZED DATUM OF SIZE cbP ; THIS CAN BE USED TO CREATE LARGE INTERPROCESS SHARED BUFFERS
    {
        countT cbv = cbP ? cbP : 1 + thirdC::c_strlenIF( tinP , pbP ) ;
        countT cba = 2 * sizeof( countT ) + cbv ; // cRef cb value
        ZE( byteT* , pbData ) ;
        PUSE.newF( tinP , idLineNewP , idiFileNewP , pbData , cba ) ; ___( pbData ) ;
        if( pbData )
        {
            byteT* pbc = pbData ;

            *(countT*)pbc = 0   ; pbc += sizeof( countT ) ; //CS:CODEsYNC: 2200010 2240003
            *(countT*)pbc = cbv ; pbc += sizeof( countT ) ;
            if( pbP ) thirdC::c_memcpyIF( tinP , pbc , pbP , cbv ) ;

            aptData = pbData ;

            if( pbP ) indexF( tinP ) ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea002.datum_blob_c.datum_blob_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea003.datum_blob_c.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.360ea003.datum_blob_c.operator_ostextt_ptr"
#define DDNUMB      (countT)0x360ea003
#define IDFILE      (countT)0x1434


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_blob_C::operator byteT*( voidT ) const/*1*/
{
    return !aptData ? 0 : (byteT*)aptData + 2 * sizeof( countT ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea003.datum_blob_c.operator_ostextt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea004.datum_blob_c.assignf BEGIN
#define DDNAME       "3func.360ea004.datum_blob_c.assignf"
#define DDNUMB      (countT)0x360ea004
#define IDFILE      (countT)0x1435


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT datum_blob_C::assignF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    unIndexF( tinP ) ; //20131224@1950: ADDED WITHOUT ANALYSIS

    //CS:CODEsYNC: 360ea001 360ea004
    byteT* pbData = (byteT*)aptData ;
    CONoUTrAW3( "Del " , pbData , "\r\n" ) ; //U::TO FIND A  LEAK
    PUSE( tinP , pbData ) ;
    __( pbData ) ;
    aptData.resetF() ;

    //CS:CODEsYNC: 360ea004 360ea002
    if( pbP || cbP )
    {
        countT cbv = cbP ? cbP : 1 + thirdC::c_strlenIF( tinP , pbP ) ;
        countT cba = 2 * sizeof( countT ) + cbv ; // cRef cb value
        ZE( byteT* , pbData ) ;
        PUSE.newF( tinP , LF , pbData , cba ) ; ___( pbData ) ;
        CONoUTrAW3( "New " , pbData , "\r\n" ) ; //U::TO FIND A  LEAK
        if( pbData )
        {
            byteT* pbc = pbData ;

            *(countT*)pbc = 0   ; pbc += sizeof( countT ) ;
            *(countT*)pbc = cbv ; pbc += sizeof( countT ) ;
            if( pbP ) thirdC::c_memcpyIF( tinP , pbc , pbP , cbv ) ;

            aptData = pbData ;

            if( pbP ) indexF( tinP ) ; //20131224@1950: ADDED WITHOUT ANALYSIS
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ea* : 3func.360ea004.datum_blob_c.assignf END
