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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e5* : 3func.350e5006.listingc.bislistingif BEGIN
#define DDNAME       "3func.350e5006.listingc.bislistingif"
#define DDNUMB      (countT)0x350e5006
#define IDFILE      (countT)0xb47


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
*/
/**/

/*1*/boolT listingC::bIsListingIF( tinS& tinP , const aptC& aptP , const byteT bitsP , const byteT idTypeDatumP )/*1*/
{
    const listingC* pdListing = &APT( listingC , aptP ) ;

    if( POOP ) return 0 ;
    __Z( aptP ) ;
    __Z( pdListing ) ;
    if( POOP ) return 0 ;

    _IO_

    boolT bYes = bIsListingIF( tinP , pdListing , bitsP , idTypeDatumP ) ;
    return bYes ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e5* : 3func.350e5006.listingc.bislistingif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e5* : 3func.350e500a.listingc.bislistingif BEGIN
#define DDNAME       "3func.350e500a.listingc.bislistingif"
#define DDNUMB      (countT)0x350e500a
#define IDFILE      (countT)0xb48


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
*/
/**/

/*1*/boolT listingC::bIsListingIF( tinS& tinP , const listingC* pdListingP , const byteT bitsP , const byteT idTypeDatumP )/*1*/
{
    if( POOP ) return 0 ;
    __Z( pdListingP ) ;
    if( POOP ) return 0 ;

    _IO_

    boolT bYes = 1 ;
    byteT flagsHe = pdListingP->flagsF() ;
    if( flagsHe & (byteT)~fliLISTINGc_maskBitsUsed ) bYes = 0 ;

    ZE( countT , idTypeHe ) ;
    if( bYes )
    {
        idTypeHe = pdListingP->idTypeDatumF() ;

        if( flagsHe & fliLISTINGc_MIXINdATUM )
        {
            if( idTypeHe < ifcIDtYPEmIXINdATUM_min || idTypeHe > ifcIDtYPEmIXINdATUM_max ) bYes = 0 ;
        }
        else if( idTypeHe ) bYes = 0 ;
    }

    if( bYes && bitsP )
    {
        if( ( flagsHe & fliLISTINGc_maskTypeBits ) != bitsP ) bYes = 0 ;
        else if( idTypeDatumP )
        {
            if( idTypeDatumP != idTypeHe ) bYes = 0 ;
        }
    }
    return bYes ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e5* : 3func.350e500a.listingc.bislistingif END
