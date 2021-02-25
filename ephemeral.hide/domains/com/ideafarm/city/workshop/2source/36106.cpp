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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106001.datum_listingvsp_c.dt_datum_listingvsp_c BEGIN
#define DDNAME       "3func.36106001.datum_listingvsp_c.dt_datum_listingvsp_c"
#define DDNUMB      (countT)0x36106001
#define IDFILE      (countT)0x1485


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_listingVSP_C::~datum_listingVSP_C( voidT )/*1*/
{
    TINSL
    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    __( !tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
    puseC puseRecord( tinP , *tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;

    listingC* pHe = &APT( listingC , aptData ) ;
    __( !listingC::bIsListingIF( tinP , pHe ) ) ;
    if( !POOP ) dec01AM( pHe->cRefPrivate2F() ) ;
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106001.datum_listingvsp_c.dt_datum_listingvsp_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106002.datum_listingvsp_c.datum_listingvsp_c BEGIN
#define DDNAME       "3func.36106002.datum_listingvsp_c.datum_listingvsp_c"
#define DDNUMB      (countT)0x36106002
#define IDFILE      (countT)0x1486


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_listingVSP_C::datum_listingVSP_C( tinS& tinP , byteT& flagsiP , byteT& idTypeP , const listingC& listingRefP , const listingC& listingP ) :/*1*/
datumC( flagsiP , idTypeP , ifcIDtYPEmIXINdATUM_listingVSP , listingP )
{
    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    //ENABLING THIS WOULD PREVENT CONSTRUCTION OF DATA OTHER THAN WITH fieldIF, I.E. IT WOULD FORCE APPLICATIONS TO USE THE RECORD MODEL: __( !tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
    puseC puseRecord( tinP , *tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
    aptData = (byteT*)&listingRefP ;

    //CONoUTrAW5( "datum_listingVSP_C: [&listingRefP,aptData]: " , &listingRefP , " " , aptData , "     pool: \"" ) ;
    //CONoUTrAW( tinP.pPoolUse->guts.postName ) ;
    //CONoUTrAW( "\"\r\n" ) ;

    __Z( aptData ) ; //listingVSP MUST BE IN PUSE

    listingC* pHe = &APT( listingC , aptData ) ;
    __( !listingC::bIsListingIF( tinP , pHe ) ) ;
    if( !POOP ) inc01AM( pHe->cRefPrivate2F() ) ;
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106002.datum_listingvsp_c.datum_listingvsp_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106003.datum_listingvsp_c.operator_listingvsp BEGIN
#define DDNAME       "3func.36106003.datum_listingvsp_c.operator_listingvsp"
#define DDNUMB      (countT)0x36106003
#define IDFILE      (countT)0x1487


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datum_listingVSP_C::operator listingVSP( voidT ) const/*1*/
{
    TINSL
    __( !tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    puseC puseRecord( tinP , *tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;

    listingC* pHe = &APT( listingC , aptData ) ;
    __( !listingC::bIsListingIF( tinP , pHe ) ) ;
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return listingVSP( pHe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36106* : 3func.36106003.datum_listingvsp_c.operator_listingvsp END
