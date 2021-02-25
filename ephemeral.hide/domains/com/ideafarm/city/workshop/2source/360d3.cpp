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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3002.marketc.dt_marketc BEGIN
#define DDNAME       "3func.360d3002.marketc.dt_marketc"
#define DDNUMB      (countT)0x360d3002
#define IDFILE      (countT)0x13a6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/marketC::~marketC( voidT )/*1*/
{
    if( 1 == decv02AM( cRef ) )
    {
        {
            countT* pcIdGood = (countT*)(byteT*)processGlobal4I._marketC_napGoodRegistry ;
            countT  ccIdGood = (countT)processGlobal4I._marketC_napGoodRegistry / sizeof( countT ) ;
            for( countT off = 0 ; off < ccIdGood ; off ++ )
            {
                if( idGood == setIfEqualsAM( pcIdGood[ off ] , 0 , idGood ) ) break ;
            }
        }

        TINSL
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3002.marketc.dt_marketc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3003.marketc.marketc BEGIN
#define DDNAME       "3func.360d3003.marketc.marketc"
#define DDNUMB      (countT)0x360d3003
#define IDFILE      (countT)0x13a7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/marketC::marketC( tinS& tinP , napkinC& napBackP , const countT idGoodP ) :/*1*/
grab( tinP , TAG( TAGiDnULL ) , flGRABc_DISABLED | flGRABc_EXPLICITfORMATTING )
{
    if( !napBackP.bFormattedF() )
    {
        cRef = 1 ;
        grab.formatF( tinP , flGRABc_null , TAG( TAGiDnULL ) ) ;
        idGood = idGoodP ;
        mMoney = TOCK ; //U::INITIALIZE TO 0 AND GET REAL MONEY
        mStock = 0.0 ;
        idPeriod = 0 ;

        offBucket = 0 ;
        thirdC::c_memsetIF( tinP , (byteT*)pOffTockBucket , sizeof pOffTockBucket ) ;
        pmPrice[ 0 ] = 1.0 ; //A:ASSUME: DEMAND AND SUPPLY ARE STATIONARY; SUPPLY IS PERFECTLY INELASTIC; DEMAND IS UNIT ELASTIC
        pmPrice[ 1 ] = 2.0 ;
        thirdC::c_memsetIF( tinP , (byteT*)pmSupply , sizeof pmSupply ) ;
        thirdC::c_memsetIF( tinP , (byteT*)pmDemand , sizeof pmDemand ) ;

        {
            countT* pcIdGood = (countT*)(byteT*)processGlobal4I._marketC_napGoodRegistry ;
            countT  ccIdGood = (countT)processGlobal4I._marketC_napGoodRegistry / sizeof( countT ) ;
            for( countT off = 0 ; off < ccIdGood ; off ++ )
            {
                if( !setIfZeAM( pcIdGood[ off ] , idGoodP ) ) break ;
            }
        }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3003.marketc.marketc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3004.marketc.adjustpricef BEGIN
#define DDNAME       "3func.360d3004.marketc.adjustpricef"
#define DDNUMB      (countT)0x360d3004
#define IDFILE      (countT)0x13a8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT marketC::adjustPriceF( tinS& tinP , etherC& etherP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( countT , offTockNow ) ;
    {
        ZE( sCountT , timeN2 ) ;
        etherP.osTimeNowF( tinP , offTockNow , timeN2 ) ;
        offTockNow >>= 0x10 ; //0x10 SCALES TO UNIT==TOCK
    }

    if( !idPeriod || pOffTockBucket[ offBucket ] != offTockNow )
    {
        idPeriod ++ ;
        offBucket = !( idPeriod % 2 ) ; //A SPEED OPTIMIZATION
        pOffTockBucket[ offBucket ] = offTockNow ;

        if( idPeriod > 2 )
        {
            ZE( measure04T , ep ) ;
            ZE( measure04T , eq ) ;
            boolT bOk = equilibriumF( tinP , ep , eq , pmPrice[ 0 ] , pmSupply[ 0 ] , pmPrice[ 1 ] , pmSupply[ 1 ] , pmPrice[ 0 ] , pmDemand[ 0 ] , pmPrice[ 1 ] , pmDemand[ 1 ] ) ;
    
            pmDemand[ offBucket ] = pmSupply[ offBucket ] = 0.0 ;
            if( bOk ) pmPrice[ offBucket ] = ep ;
    
            CONoUTrAW( T("period: ")+TF2(idPeriod,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ;    ep: ")+TF2((measureT)ep,flFORMAT_NObIGITvALUES)+T("    ;    eq: ")+TF2((measureT)eq,flFORMAT_NObIGITvALUES)+T("    ;    stock: ")+TF2((measureT)mStock,flFORMAT_NObIGITvALUES)+T("    ;    price: ")+TF2((measureT)pmPrice[offBucket],flFORMAT_NObIGITvALUES)+T("\r\n") ) ;
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3004.marketc.adjustpricef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3005.marketc.equilibriumf BEGIN
#define DDNAME       "3func.360d3005.marketc.equilibriumf"
#define DDNUMB      (countT)0x360d3005
#define IDFILE      (countT)0x13a9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// equilibriumF: MAPS 4 POINTS TO A FIFTH POINT
// WO'TH PAIR OF POINTS ARE ASSUMED TO LIE ON A LINEAR SUPPLY LOCUS
// OO'TH PAIR OF POINTS ARE ASSUMED TO LIE ON A LINEAR DEMAND LOCUS
// I SOLVE FOR THE INTERSECTION POINT

// I ASSUME THAT DEMAND IS UNIT ELASTIC AND SUPPLY IS PERFECTLY INELASTIC AND THAT BOTH ARE STATIONARY OVER THE OO PERIODS OF DATA THAT I USE
// I DO NOT EXPLOIT SYSTEM INFORMATION THAT COULD ENABLE ME TO SOLVE GENERAL EQUILIBRIUM FOR THE EXACT CLEARING PRICE
// INSTEAD, I JUST ESTIMATE DEMAND AND SUPPLY PARAMETRICALLY AND USE THOSE ESTIMATES TO SOLVE FOR EQUILIBRIUM
// I COULD BE ENHANCED TO EXPLOIT THE AVAILABLE SYSTEM INFO TO CALCULATE GENERAL EQUILIBRIUM AND TO USE A WEIGHTED AVERAGE OF THE TWO RESULTS

/*1*/boolT marketC::equilibriumF( tinS& tinP , measure04T& epP , measure04T& eqP , const measure04T s1pP , const measure04T s1qP , const measure04T s2pP , const measure04T s2qP , const measure04T d1pP , const measure04T d1qP , const measure04T d2pP , const measure04T d2qP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    boolT bOk = 1 ;
    if( TINY3( d1qP ) || TINY3( d2qP ) || TINY3( d1pP ) || TINY3( d2pP ) ) bOk = 0 ;
    else
    {
        measure04T logB   = ( thirdC::mathLogIF( tinP , d1qP ) + thirdC::mathLogIF( tinP , d2qP ) + thirdC::mathLogIF( tinP , d1pP ) + thirdC::mathLogIF( tinP , d2pP ) ) / 2.0 ;
        measure04T supply = ( s1qP + s2qP ) / 2.0 ;
        epP = thirdC::mathExpIF( tinP , logB - thirdC::mathLogIF( tinP , supply ) ) ;
        eqP = supply ;
    }

    grab.ungrabF( tinP ) ;
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3005.marketc.equilibriumf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3006.marketc.pricef BEGIN
#define DDNAME       "3func.360d3006.marketc.pricef"
#define DDNUMB      (countT)0x360d3006
#define IDFILE      (countT)0x13aa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/measure04T marketC::priceF( tinS& tinP , etherC& etherP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    adjustPriceF( tinP , etherP ) ;

    measure04T mPrice = pmPrice[ offBucket ] ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3006.marketc.pricef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3007.marketc.sellf BEGIN
#define DDNAME       "3func.360d3007.marketc.sellf"
#define DDNUMB      (countT)0x360d3007
#define IDFILE      (countT)0x13ab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT marketC::sellF( tinS& tinP , etherC& etherP , measure04T& mMoneyP , measure04T& mQuantityP , const flagsT flagsP , const measure04T mPriceMinP , const measure04T mPriceMaxP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    adjustPriceF( tinP , etherP ) ;

    if( F(flagsP) & flMARKETsELL_IFpRICEiNrANGE && !( mPriceMinP <= pmPrice[ offBucket ] && pmPrice[ offBucket ] <= mPriceMaxP ) ) mQuantityP = 0.0 ;

    if( mQuantityP )
    {
        if( !( F(flagsP) & flMARKETsELL_RETRYING ) ) pmSupply[ offBucket ] += mQuantityP ;
    
        measure04T mMoneyNeeded = mQuantityP * pmPrice[ offBucket ] ;
        if( mMoney < mMoneyNeeded ) mMoney = mMoneyNeeded ; //U::GET REAL MONEY FROM SOMEWHERE
    
        measure04T mQuantityMax = mMoney / pmPrice[ offBucket ] ;
        if( mQuantityP > mQuantityMax ) mQuantityP = mQuantityMax ;
    
        if( mQuantityP )
        {
            measure04T mTake = mQuantityP * pmPrice[ offBucket ] ;
        
            mMoneyP += mTake ;
            mMoney  -= mTake ;
        
            mStock += mQuantityP ;
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3007.marketc.sellf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3008.marketc.buyf BEGIN
#define DDNAME       "3func.360d3008.marketc.buyf"
#define DDNUMB      (countT)0x360d3008
#define IDFILE      (countT)0x13ac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT marketC::buyF( tinS& tinP , etherC& etherP , measure04T& mMoneyP , measure04T& mQuantityP , const flagsT flagsP , const measure04T mPriceMinP , const measure04T mPriceMaxP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    adjustPriceF( tinP , etherP ) ;

    if( F(flagsP) & flMARKETbUY_IFpRICEiNrANGE && !( mPriceMinP <= pmPrice[ offBucket ] && pmPrice[ offBucket ] <= mPriceMaxP ) ) mQuantityP = 0.0 ;

    if( mQuantityP )
    {
        {
            const measure04T mQuantityMax = mMoneyP / pmPrice[ offBucket ] ;
            if( mQuantityP > mQuantityMax ) mQuantityP = mQuantityMax ;
        }
    
        if( mQuantityP )
        {
            if( !( F(flagsP) & flMARKETbUY_RETRYING ) ) pmDemand[ offBucket ] += mQuantityP ;
        
            if( mQuantityP > mStock )
            {
                mQuantityP = mStock ;
            }
        
            if( mQuantityP )
            {
                measure04T mTake = mQuantityP * pmPrice[ offBucket ] ;
        
                mMoneyP -= mTake ;
                mMoney  += mTake ;
    
                mStock -= mQuantityP ;
            }
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3008.marketc.buyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3009.marketc.mannaf BEGIN
#define DDNAME       "3func.360d3009.marketc.mannaf"
#define DDNUMB      (countT)0x360d3009
#define IDFILE      (countT)0x13ad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT marketC::mannaF( tinS& tinP , const measure04T mMannaP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    mMoney += mMannaP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d3* : 3func.360d3009.marketc.mannaf END
