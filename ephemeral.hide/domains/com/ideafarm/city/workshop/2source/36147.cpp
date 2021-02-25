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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36147* : 3func.36147002.cachedS.dt_cachedS BEGIN
#define DDNAME       "3func.36147002.cachedS.dt_cachedS"
#define DDNUMB      (countT)0x36147002
#define IDFILE      (countT)0x158f

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/cachedS::~cachedS( voidT )/*1*/
{
    TINSL
    {
        _IO_
        DEL( pPtr_pbBlob ) ;
    }
    ether.traceF( tinP , T("destroying [name]:    ")+T(psttName) ) ;
    {
        _IO_
        ether.delF( tinP , *(strokeS**)&psttName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36147* : 3func.36147002.cachedS.dt_cachedS END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36147* : 3func.36147003.cachedS.cachedS BEGIN
#define DDNAME       "3func.36147003.cachedS.cachedS"
#define DDNUMB      (countT)0x36147003
#define IDFILE      (countT)0x1590

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

GARBAGEcOLLECTORdEF( 1 , bytesC )

/*1*/cachedS::cachedS( tinS& tinP , etherC& etherP , strokeS*& psttNameP , osTextT*& pbBlobP , countT& cbBlobP , const countT osTimeToLiveMsP , const countT cArgP ) :/*1*/
ether( etherP ) ,
osTimePushedMs( (countT)thirdC::osTimeTicksSinceBootIF() ) ,
osTimeToLiveMs( osTimeToLiveMsP ) ,
psttName( psttNameP ) ,
pPtr_pbBlob( 0 ) ,
cbBlob( cbBlobP ) ,
cArg( cArgP )
{
    psttNameP = 0 ;
    cbBlobP   = 0 ;

    POINTERc_BEGIN( 1 , bytesC )
    pbBlobP
    POINTERc_END( 1 , ptr_pbBlob )

    pPtr_pbBlob = new( 0 , tinP , LF ) POINTERc( ptr_pbBlob ) ; ___( pPtr_pbBlob ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36147* : 3func.36147003.cachedS.cachedS END
