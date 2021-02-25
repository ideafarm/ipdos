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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36134* : 3func.36134002.pagereleasec.dt_pagereleasec BEGIN
#define DDNAME       "3func.36134002.pagereleasec.dt_pagereleasec"
#define DDNUMB      (countT)0x36134002
#define IDFILE      (countT)0x153d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/pageReleaseC::~pageReleaseC( voidT )/*1*/
{
    TINSL

    ZE( countT , offr ) ;
    for( ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
    {
        if( tinP.pBookMark[ offr ].pBooks == bmNewSave.pBooks )
        {
            BLAMMO ;
            break ;
        }
    }

    for( offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
    {
        if( !tinP.pBookMark[ offr ].pBooks )
        {
            tinP.pBookMark[ offr ] = bmNewSave ;
            break ;
        }
    }

    if( offr == sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ) { BLAMMO ; }

    pBooksSave->lockF( tinP , TAG( TAGiDnULL ) ) ;
    pBooksSave->selectBookF( tinP , flBOOKScsELECT_null , tinP.pBookMark[ offr ].pcpIdBook ) ;
    if( !( 1 + incv02AM( pBooksSave->cRefBookF() ) ) ) { BLAMMO ; } ; //U::O: CONJ: cRef CAN BE MAINTAINED USING ++ -- SINCE MUST ALWAYS BE SERIALIZED SINCE pBook IS VOLATILE
    pBooksSave->unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36134* : 3func.36134002.pagereleasec.dt_pagereleasec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36134* : 3func.36134003.pagereleasec.pagereleasec BEGIN
#define DDNAME       "3func.36134003.pagereleasec.pagereleasec"
#define DDNUMB      (countT)0x36134003
#define IDFILE      (countT)0x153e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/pageReleaseC::pageReleaseC( tinS& tinP , const byteT* const pbP ) :/*1*/
pBooksSave( 0 )
{
    countT offbm = -1 ;
    for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
    {
        if( tinP.pBookMark[ offr ].pbz == pbP )
        {
            offbm = offr ;
            break ;
        }
    }

    if( offbm == -1 ) { BLAMMO ; }
    else
    {
        pBooksSave = tinP.pBookMark[ offbm ].pBooks ;
        bmNewSave  = tinP.pBookMark[ offbm ] ;

        thirdC::c_memsetIF( tinP , (byteT*)&tinP.pBookMark[ offbm ] , sizeof tinP.pBookMark[ offbm ] ) ;

        pBooksSave->lockF( tinP , TAG( TAGiDnULL ) ) ;
        if( !decv02AM( pBooksSave->cRefBookF() ) ) { BLAMMO ; } ; //U::O: CONJ: cRef CAN BE MAINTAINED USING ++ -- SINCE MUST ALWAYS BE SERIALIZED SINCE pBook IS VOLATILE
        pBooksSave->unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36134* : 3func.36134003.pagereleasec.pagereleasec END
