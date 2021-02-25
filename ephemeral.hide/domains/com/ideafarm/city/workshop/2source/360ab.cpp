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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab002.httpreplys.dt_httpreplys BEGIN
#define DDNAME       "3func.360ab002.httpreplys.dt_httpreplys"
#define DDNUMB      (countT)0x360ab002
#define IDFILE      (countT)0x136e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/httpReplyS::~httpReplyS( voidT )/*1*/
{
    TINSL

    waitF( tinP ) ;

    DEL( *(pbRefC**)&prPostUrl               ) ;
    DEL( *(pbRefC**)&prPostTitle             ) ;
    DEL( *(pbRefC**)&prPostDescription       ) ;
    DEL( *(pbRefC**)&prPostMetaDescription   ) ;
    DEL( *(pbRefC**)&prPostKeywords          ) ;
    DEL( *(pbRefC**)&prPostSlogan            ) ;
    DEL( *(pbRefC**)&prPostPageHelp          ) ;
    DEL( *(pbRefC**)&prPostBody              ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab002.httpreplys.dt_httpreplys END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab003.httpreplys.httpreplys BEGIN
#define DDNAME       "3func.360ab003.httpreplys.httpreplys"
#define DDNUMB      (countT)0x360ab003
#define IDFILE      (countT)0x136f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/httpReplyS::httpReplyS( httpReplyRefC** ppRefOverrideP , const countT idFormP , pbRefC*& prPostBodyP , voidT* pCBFP , const countT idSnipHttpPrefixP , pbRefC*& prPostUrlP , pbRefC*& prPostTitleP , pbRefC*& prPostDescriptionP , pbRefC*& prPostMetaDescriptionP , pbRefC*& prPostSloganP , pbRefC*& prPostPageHelpP , pbRefC*& prPostKeywordsP , const countT idSnipHttpLocationP ) :/*1*/
ppRefOverride( ppRefOverrideP ) ,
cServed( 0 ) ,
idForm( idFormP ) ,
idSnipHttpPrefix( idSnipHttpPrefixP ) ,
idSnipHttpLocation( idSnipHttpLocationP ) ,
prPostUrl(             prPostUrlP             ) ,
prPostTitle(           prPostTitleP           ) ,
prPostDescription(     prPostDescriptionP     ) ,
prPostMetaDescription( prPostMetaDescriptionP ) ,
prPostKeywords(        prPostKeywordsP        ) ,
prPostSlogan(          prPostSloganP          ) ,
prPostPageHelp(        prPostPageHelpP        ) ,
prPostBody(            prPostBodyP            ) ,
pCBF( (httpDynamicReplyBodyCBFT)pCBFP )
{
    prPostUrlP             =
    prPostTitleP           =
    prPostDescriptionP     =
    prPostMetaDescriptionP =
    prPostKeywordsP        =
    prPostSloganP          =
    prPostPageHelpP        =
    prPostBodyP            =
    0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab003.httpreplys.httpreplys END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab004.httpreplys.overridef BEGIN
#define DDNAME       "3func.360ab004.httpreplys.overridef"
#define DDNUMB      (countT)0x360ab004
#define IDFILE      (countT)0x1370


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/
/*1*/httpReplyRefC httpReplyS::overrideF( tinS& tinP )/*1*/
{
    _IO_

    httpReplyRefC refUse = *this ;

    ZE( httpReplyS* , pCursor ) ;
    while( pCursor = &(httpReplyS&)refUse , pCursor->ppRefOverride && *pCursor->ppRefOverride )
    {
        refUse = **pCursor->ppRefOverride ;
    }

    return refUse ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ab* : 3func.360ab004.httpreplys.overridef END
