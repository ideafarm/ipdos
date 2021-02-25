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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148002.cacheC.dt_cacheC BEGIN
#define DDNAME       "3func.36148002.cacheC.dt_cacheC"
#define DDNUMB      (countT)0x36148002
#define IDFILE      (countT)0x1591

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/cacheC::~cacheC( voidT )/*1*/
{
    TINSL
    purgeF( tinP , 0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148002.cacheC.dt_cacheC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148003.cacheC.cacheC BEGIN
#define DDNAME       "3func.36148003.cacheC.cacheC"
#define DDNUMB      (countT)0x36148003
#define IDFILE      (countT)0x1592

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/cacheC::cacheC( tinS& tinP , etherC& etherP ) :/*1*/
ether( etherP ) ,
cLeverOsTimeLathReferenced( 0 ) ,
swsCache( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_SINKrEVERSE , cLeverOsTimeLathReferenced , flSTACKc_BLOB , sizeof( cachedS ) )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148003.cacheC.cacheC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148004.cacheC.pushF BEGIN
#define DDNAME       "3func.36148004.cacheC.pushF"
#define DDNUMB      (countT)0x36148004
#define IDFILE      (countT)0x1593


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cacheC::pushF( tinS& tinP , strokeS*& psttNameP , byteT*& pbP , countT& cbP , const countT osTimeToLiveMsP , const countT cArgP )/*1*/
{
    grabF( tinP , TAG( TAGiDnULL ) ) ;

    cLeverOsTimeLathReferenced = (countT)thirdC::osTimeTicksSinceBootIF() ;

    byteT pbza[ sizeof( cachedS ) ] ;
    new( 0 , tinP , pbza , sizeof pbza ) cachedS( tinP , ether , psttNameP , pbP , cbP , osTimeToLiveMsP , cArgP ) ;

    swsCache << pbza ;

    ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148004.cacheC.pushF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148005.cacheC.operator_call BEGIN
#define DDNAME       "3func.36148005.cacheC.operator_call"
#define DDNUMB      (countT)0x36148005
#define IDFILE      (countT)0x1594

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/cachedS* cacheC::operator ()( tinS& tinP , const strokeS* const psttNameP )/*1*/
{
    countT msSinceBootNow = (countT)thirdC::osTimeTicksSinceBootIF() ;

    grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( cachedS* , pFound ) ;
    ZE( countT , osTimeToLiveMs ) ;
    ZE( countT , ageMs ) ;
    ZE( boolT , bExtracted ) ;
    byteT pbExtracted[ sizeof( cachedS ) ] ;
    {
        countT cFlavors = swsCache.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLeverOsTimeLathReferenced = swsCache.leverF( tinP , idf ) ;

            if( swsCache )
            {
                handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    cachedS* pCached = (cachedS*)&(countT&)swsCache.downF( tinP , hDown ) ;
                    if( !ether.strCompareF( tinP , psttNameP , pCached->psttName ) )
                    {
                        ageMs          = msSinceBootNow - pCached->osTimePushedMs ;
                        osTimeToLiveMs =                  pCached->osTimeToLiveMs ;

                        swsCache.extractF( pbExtracted , tinP ) ;
                        bExtracted = 1 ;
                        break ;
                    }
                }
                while( !POOP && !swsCache.third && ~hDown ) ;

                if( !swsCache ) swsCache.freeF( tinP , 1 ) ;

                if( bExtracted ) break ;
            }
        }

        swsCache.freeNullFlavorsF( tinP ) ;
    }

    if( bExtracted )
    {
        if( osTimeToLiveMs < ageMs )
        {
            cachedS* pDoomed = (cachedS*)pbExtracted ;
            DELzOMBIE( pDoomed ) ;
        }
        else
        {
            cLeverOsTimeLathReferenced = (countT)thirdC::osTimeTicksSinceBootIF() ;
            swsCache << pbExtracted ;

            pFound = (cachedS*)&(countT&)swsCache[ 1 ] ;
        }
    }

    ungrabF( tinP ) ;

    return pFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148005.cacheC.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148006.cacheC.purgeF BEGIN
#define DDNAME       "3func.36148006.cacheC.purgeF"
#define DDNUMB      (countT)0x36148006
#define IDFILE      (countT)0x1595


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cacheC::purgeF( tinS& tinP , countT cRetainP )/*1*/
{
    _IO_

    grabF( tinP , TAG( TAGiDnULL ) ) ;

    TN( tb4 , "    " ) ;
    countT cFlavors = swsCache.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        _IO_
        cLeverOsTimeLathReferenced = swsCache.leverF( tinP , idf ) ;

        countT cPlates = swsCache ;
        if( cPlates )                   //U:: CONJ: THIS SHOULD ALWAYS BE TRUE, SO IMPOTENCE OR BLAMMO IF IT IS NOT (THE CACHE SHOULD NEVER HAVE AN EMPTY FLAVOR)
        {
            _IO_

            if( cRetainP >= cPlates ) cRetainP -= cPlates ;
            else
            {
                handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    _IO_
                    cachedS* pCached = (cachedS*)&(countT&)swsCache.downF( tinP , hDown ) ;
                    if( cRetainP && cRetainP -- ) ;
                    else
                    {
                        {
                            _IO_
                            DELzOMBIE( pCached ) ;
                        }
                        {
                            _IO_
                            swsCache.extractF( 0 , tinP ) ;
                        }
                    }
                }
                while( !POOP && !swsCache.third && ~hDown ) ;
            }
        }

        if( !swsCache )
        {
            _IO_
            swsCache.freeF( tinP , 1 ) ;
        }
    }

    swsCache.freeNullFlavorsF( tinP ) ;

    ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148006.cacheC.purgeF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148007.cacheC.reportF BEGIN
#define DDNAME       "3func.36148007.cacheC.reportF"
#define DDNUMB      (countT)0x36148007
#define IDFILE      (countT)0x1596

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cacheC::reportF( tinS& tinP , const strokeS* const psttTitleP )/*1*/
{
    TN( tb4 , "    " ) ;

    ether.traceF( tinP , T("cache report [title]:    ")+(psttTitleP?T(psttTitleP):T("cacheC report")) ) ;

    grabF( tinP , TAG( TAGiDnULL ) ) ;

    countT cFlavors = swsCache.cFlavorsF( tinP ) ;

    ether.traceF( tinP , T("[cFlavors]:    ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLeverOsTimeLathReferenced = swsCache.leverF( tinP , idf ) ;
        ether.traceF( tinP , T("[cLeverOsTimeLathReferenced]:    ")+TF2(cLeverOsTimeLathReferenced,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

        if( swsCache )
        {
            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                cachedS& cached = *(cachedS*)&(countT&)swsCache.downF( tinP , hDown ) ;
                ether.traceF( tinP , cached.psttName ) ;
            }
            while( !POOP && !swsCache.third && ~hDown ) ;
        }
    }

    ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36148* : 3func.36148007.cacheC.reportF END
