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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102001.datum_counttstrz_c.dt_datum_counttstrz_c BEGIN
#define DDNAME       "3func.36102001.datum_counttstrz_c.dt_datum_counttstrz_c"
#define DDNUMB      (countT)0x36102001
#define IDFILE      (countT)0x147b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countTstrz_C::~datum_countTstrz_C( voidT )/*1*/
{
    TINSL
    //CS:CODEsYNC: 23c0002 23c0005
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102001.datum_counttstrz_c.dt_datum_counttstrz_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102002.datum_counttstrz_c.datum_counttstrz_c BEGIN
#define DDNAME       "3func.36102002.datum_counttstrz_c.datum_counttstrz_c"
#define DDNUMB      (countT)0x36102002
#define IDFILE      (countT)0x147c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countTstrz_C::datum_countTstrz_C( tinS& tinP , byteT& flagsiP , byteT& idTypeP , const countT* const pcP , const listingC& listingP ) :/*1*/
datumC( flagsiP , idTypeP , ifcIDtYPEmIXINdATUM_countTstrz , listingP )
{
    //CS:CODEsYNC: 23c0003 23c0005
    if( pcP )
    {
        countT ccv = thirdC::c_strlenIF( tinP , pcP ) ;
        countT cca = 3 + ccv ; // cRef cc value nullCount

        ZE( byteT* , pbData ) ;
        PUSE.newF( tinP , LF , pbData , cca * sizeof( countT ) ) ; ___( pbData ) ;
        if( pbData )
        {
            byteT* pbc = pbData ;

            *(countT*)pbc = 0   ; pbc += sizeof( countT ) ; //CS:CODEsYNC: 2200010 23c0003
            *(countT*)pbc = ccv ; pbc += sizeof( countT ) ;
            thirdC::c_memcpyIF( tinP , pbc , (byteT*)pcP , ( 1 + ccv ) * sizeof( countT ) ) ;

            aptData = pbData ;

            indexF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102002.datum_counttstrz_c.datum_counttstrz_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102003.datum_counttstrz_c.operator_countt_ptr BEGIN
#define DDNAME       "3func.36102003.datum_counttstrz_c.operator_countt_ptr"
#define DDNUMB      (countT)0x36102003
#define IDFILE      (countT)0x147d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_countTstrz_C::operator countT*( voidT ) const/*1*/
{
    return !aptData ? 0 : (countT*)(byteT*)aptData + 2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102003.datum_counttstrz_c.operator_countt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102004.datum_counttstrz_c.operator_assign BEGIN
#define DDNAME       "3func.36102004.datum_counttstrz_c.operator_assign"
#define DDNUMB      (countT)0x36102004
#define IDFILE      (countT)0x147e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT datum_countTstrz_C::operator =( const countT* const pcP )/*1*/
{
    //CS:CODEsYNC: 23c0002 23c0005
    TINSL
    byteT* pbData = (byteT*)aptData ;
    PUSE( tinP , pbData ) ;
    aptData.resetF() ;

    //CS:CODEsYNC: 23c0003 23c0005
    if( pcP )
    {
        countT ccv = thirdC::c_strlenIF( tinP , pcP ) ;
        countT cca = 3 + ccv ; // cRef cc value nullCount
        ZE( byteT* , pbData ) ;
        PUSE.newF( tinP , LF , pbData , cca * sizeof( countT ) ) ; ___( pbData ) ;
        if( pbData )
        {
            byteT* pbc = pbData ;

            *(countT*)pbc = 0   ; pbc += sizeof( countT ) ; //CS:CODEsYNC: 2200010 23c0003
            *(countT*)pbc = ccv ; pbc += sizeof( countT ) ;
            thirdC::c_memcpyIF( tinP , pbc , (byteT*)pcP , ( 1 + ccv ) * sizeof( countT ) ) ;

            aptData = pbData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36102* : 3func.36102004.datum_counttstrz_c.operator_assign END
