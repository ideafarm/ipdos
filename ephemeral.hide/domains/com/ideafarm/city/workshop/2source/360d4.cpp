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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4002.adamc.dt_adamc BEGIN
#define DDNAME       "3func.360d4002.adamc.dt_adamc"
#define DDNUMB      (countT)0x360d4002
#define IDFILE      (countT)0x13ae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/adamC::~adamC( voidT )/*1*/
{
    TINSL

    tinP.pAdamGlobal4->_adamC_grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !tinP.pAdamGlobal1->_adamC_pAdam ) { BLAMMO ; }

    if( tinP.pAdamGlobal1->_adamC_pAdam == this ) tinP.pAdamGlobal1->_adamC_pAdam = pAdam ;
    else
    {
        adamC* pac = tinP.pAdamGlobal1->_adamC_pAdam ;
        while( pac->pAdam != this ) pac = pac->pAdam ; //WILL BLAMMO READING 0 (OFFSET OF pAdam IN ME) IF I AM NOT LISTED
        pac->pAdam = pAdam ;
    }

    tinP.pAdamGlobal4->_adamC_grab.ungrabF( tinP ) ;

    sw_pMarketX.grabF( tinP , TAG( TAGiDnULL ) ) ;
    countT cFlavors = sw_pMarketX.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        idGoodLever = sw_pMarketX.leverF( tinP , idf ) ;
        napkinC* pNapkin = (napkinC*)( &(countT&)sw_pMarketX + 1 ) ;
        marketC* pMarketX = (marketC*)(byteT*)*pNapkin ;
        DELzOMBIE( pMarketX ) ; //A:ASSUME: adamC DEFINITION CODE MAY ASSUME THAT A FLAVOR, ONCE ALLOCATED, IS NEVER DELETED EXCEPT HERE
        DELzOMBIE( pNapkin ) ;
    }
    sw_pMarketX.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4002.adamc.dt_adamc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4003.adamc.adamc BEGIN
#define DDNAME       "3func.360d4003.adamc.adamc"
#define DDNUMB      (countT)0x360d4003
#define IDFILE      (countT)0x13af


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/adamC::adamC( tinS& tinP , etherC& etherP ) :/*1*/
pAdam( 0 ) ,
ether( etherP ) ,
grab( tinP , TAG( TAGiDnULL ) ) ,
idGoodLever( 0 ) ,
sw_pMarketX( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_PATCHnEWfLAVOR , idGoodLever , 0 , sizeof( countT ) + sizeof( napkinC ) ) ,
mMoney( 0.0 )
{
    tinP.pAdamGlobal4->_adamC_grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !tinP.pAdamGlobal1->_adamC_pAdam ) tinP.pAdamGlobal1->_adamC_pAdam = this ;
    else
    {
        adamC* pac = tinP.pAdamGlobal1->_adamC_pAdam ;
        while( pac->pAdam ) pac = pac->pAdam ;
        pac->pAdam = this ;
    }

    tinP.pAdamGlobal4->_adamC_grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4003.adamc.adamc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4004.adamc.marketf BEGIN
#define DDNAME       "3func.360d4004.adamc.marketf"
#define DDNUMB      (countT)0x360d4004
#define IDFILE      (countT)0x13b0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/marketC& adamC::marketF( tinS& tinP , const countT idGoodP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    sw_pMarketX.grabF( tinP , TAG( TAGiDnULL ) ) ;
    idGoodLever = idGoodP ;
    countT& flavor = sw_pMarketX ;
    if( flavor == SWITCHfLAVORpATCH )
    {
        flavor = 0 ;
        byteT* pbNapkin = (byteT*)( &flavor + 1 ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
        napkinC* pNapkin = new( 0 , tinP , pbNapkin , sizeof( napkinC ) ) napkinC( tinP , TAG( TAGiDnULL ) , T("napMarket.")+TF2(idGoodP,flFORMAT_NObIGITvALUES) , 0 , sizeof( marketC ) , ifcOPENsHAREDmEMORYhOW_nCeO ) ;
        THREADmODE1rESTORE ;
        new( 0 , tinP , pNapkin ) marketC( tinP , *pNapkin , idGoodP ) ;
    }
    marketC* pMarketX = (marketC*)(byteT*)*(napkinC*)( &(countT&)sw_pMarketX + 1 ) ;
    sw_pMarketX.ungrabF( tinP ) ;
    grab.ungrabF( tinP ) ;

    return *pMarketX ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4004.adamc.marketf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4005.adamc.pricef BEGIN
#define DDNAME       "3func.360d4005.adamc.pricef"
#define DDNUMB      (countT)0x360d4005
#define IDFILE      (countT)0x13b1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/measure04T adamC::priceF( tinS& tinP , const countT idGoodP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    measure04T mPrice = marketF( tinP , idGoodP ).priceF( tinP , ether ) ;
    grab.ungrabF( tinP ) ;

    return mPrice ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4005.adamc.pricef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4006.adamc.sellf BEGIN
#define DDNAME       "3func.360d4006.adamc.sellf"
#define DDNUMB      (countT)0x360d4006
#define IDFILE      (countT)0x13b2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT adamC::sellF( tinS& tinP , const countT idGoodP , measure04T& mQuantityP , const flagsT flagsP , const measure04T mPriceMinP , const measure04T mPriceMaxP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    marketF( tinP , idGoodP ).sellF( tinP , ether , mMoney , mQuantityP , flagsP , mPriceMinP , mPriceMaxP ) ;
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4006.adamc.sellf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4007.adamc.buyf BEGIN
#define DDNAME       "3func.360d4007.adamc.buyf"
#define DDNUMB      (countT)0x360d4007
#define IDFILE      (countT)0x13b3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT adamC::buyF( tinS& tinP , const countT idGoodP , measure04T& mQuantityP , const flagsT flagsP , const measure04T mPriceMinP , const measure04T mPriceMaxP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    marketF( tinP , idGoodP ).buyF( tinP , ether , mMoney , mQuantityP , flagsP , mPriceMinP , mPriceMaxP ) ;
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4007.adamc.buyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4008.adamc.mannaf BEGIN
#define DDNAME       "3func.360d4008.adamc.mannaf"
#define DDNUMB      (countT)0x360d4008
#define IDFILE      (countT)0x13b4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT adamC::mannaF( tinS& tinP , const measure04T mMannaP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    mMoney += mMannaP ;
    //CONoUTrAW( T("adamC::mannaF/ [mMoney,mMannaP]: ")+TF1((measureT)mMoney)+T("    ")+TF1((measureT)mMannaP)+T("\r\n") ) ;
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d4* : 3func.360d4008.adamc.mannaf END
