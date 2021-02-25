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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36032* : 3func.36032002.imageexedllc.dt_imageexedllc BEGIN
#define DDNAME       "3func.36032002.imageexedllc.dt_imageexedllc"
#define DDNUMB      (countT)0x36032002
#define IDFILE      (countT)0x10d8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1480002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/imageExeDllC::~imageExeDllC( voidT )/*1*/
{
    TINSL
    DEL( pSt_postFuncNameExported ) ;
    DEL( pSt_postDllUsed          ) ;
    DEL( pSt_postSectionName      ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36032* : 3func.36032002.imageexedllc.dt_imageexedllc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36032* : 3func.36032003.imageexedllc.imageexedllc BEGIN
#define DDNAME       "3func.36032003.imageexedllc.imageexedllc"
#define DDNUMB      (countT)0x36032003
#define IDFILE      (countT)0x10d9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1480003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/imageExeDllC::imageExeDllC( tinS& tinP , thirdC& thirdP )/*1*/ :
third( thirdP ) ,
postImageName( 0 ) ,
pSt_postFuncNameExported( 0 ) ,
pSt_postDllUsed( 0 ) ,
pSt_postSectionName( 0 ) ,
postDescription( 0 ) ,
costDescriptionAlloc( 0 ) ,
bDll( 0 )
{
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( third.pEtherContainsMe )
    {
        pSt_postFuncNameExported = new( 0 , tinP , LF ) stackC( tinP , *thirdP.pEtherContainsMe , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ; ___( pSt_postFuncNameExported ) ;
        pSt_postDllUsed          = new( 0 , tinP , LF ) stackC( tinP , *thirdP.pEtherContainsMe , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ; ___( pSt_postDllUsed ) ;
        pSt_postSectionName      = new( 0 , tinP , LF ) stackC( tinP , *thirdP.pEtherContainsMe , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ; ___( pSt_postSectionName ) ;
    }

    for( countT off = 0 ; off < CpOSTdLLuSED ; off ++ ) ppostDllUsed[ off ] = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36032* : 3func.36032003.imageexedllc.imageexedllc END
