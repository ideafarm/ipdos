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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36077* : 3func.36077001.tlsstackframenotlss.dt_tlsstackframenotlss BEGIN
#define DDNAME       "3func.36077001.tlsstackframenotlss.dt_tlsstackframenotlss"
#define DDNUMB      (countT)0x36077001
#define IDFILE      (countT)0x1253


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/tlsStackFrameNoTlsS::~tlsStackFrameNoTlsS( voidT )/*1*/
{
    tinEarlyLate.postRptExceptionLath = 0 ;
    tinEarlyLate.pTieLath = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36077* : 3func.36077001.tlsstackframenotlss.dt_tlsstackframenotlss END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36077* : 3func.36077002.tlsstackframenotlss.tlsstackframenotlss BEGIN
#define DDNAME       "3func.36077002.tlsstackframenotlss.tlsstackframenotlss"
#define DDNUMB      (countT)0x36077002
#define IDFILE      (countT)0x1254


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.17b0003.1.0.html\"\>definition\</A\>
*/
/**/

//CODEsYNCH: 19d0003 17b0003 IDENTICAL EXCEPT FOR pbTls

/*1*/tlsStackFrameNoTlsS::tlsStackFrameNoTlsS( const countT idTypeP , const osTextT* const postP , const countT cArgP ) :/*1*/
zap_fingerVerify( (byteT*)&fingerVerify , sizeof fingerVerify , flZAP_DT ) ,
fingerVerify( 0 ) ,
finger( 0 ) ,
pTin
(
    (
        putNegAM( *(countT*)&fingerVerify , FINGERnEG_THREADlOCALsTORAGEvERIFY ) ,
        putNegAM( *(countT*)&finger       , FINGERnEG_THREADlOCALsTORAGE       ) ,
        idTypeP == ifcIDtYPEtLS_BENCH || idTypeP == ifcIDtYPEtLS_CONSOLE || idTypeP == ifcIDtYPEtLS_WINDOW
            ? &processGlobal4I.tinVeryEarlyLateMain
            : idTypeP == ifcIDtYPEtLS_EXCEPTION
                ? (tinS*)((count3S*)cArgP)->c1 // tinOffender
                : &tinEarlyLate
    )
)
,
tinEarlyLate
(
    *pTin , LF , (byteT*)0 ,
    idTypeP == ifcIDtYPEtLS_KID ? ((taskS*)cArgP)->idThread : 1 ,
    idTypeP == ifcIDtYPEtLS_KID ? ((taskS*)cArgP)->pTinDad : 0
    ,
    idTypeP == ifcIDtYPEtLS_KID || idTypeP == ifcIDtYPEtLS_EXCEPTION
        ? postP
        : POSTtHREADnAMEmAIN
    ,
    flTINs_DISABLEcOMMENTS |
    (
        idTypeP == ifcIDtYPEtLS_BENCH || idTypeP == ifcIDtYPEtLS_CONSOLE || idTypeP == ifcIDtYPEtLS_WINDOW || idTypeP == ifcIDtYPEtLS_EXCEPTION
            ? flTINs_null
            : flTINs_NOeLDER
    )
    ,
    idTypeP == ifcIDtYPEtLS_BENCH || idTypeP == ifcIDtYPEtLS_CONSOLE || idTypeP == ifcIDtYPEtLS_WINDOW
        ? ifcIDtINnAMED_tinEarlyLateMain
        : ifcIDtINnAMED_tinEarlyLate
    ,
    processGlobal1I.pbTlsMain
    ,
    sizeof processGlobal1I.pbTlsMain
)
,
rc( 0 )
,
postRptExceptionLath( thirdC::third_tinS_ref_IF() , "postRptExceptionLath" , "tin" , COSTArPTeXCEPTION , ifcIDtYPEsTATICC_FOOT )
,
tellInfoSysExceptionLath( thirdC::third_tinS_ref_IF() , "tellInfoSysExceptionLath" , "tin" , sizeof( tellInfoSysExceptionS ) )
,
stackTop( thirdC::third_tinS_ref_IF() , "sysStackTop" , "tin" )
{
    (countT&)stackTop = (countT)( this + 1 ) ;

    osTextT* postRieLath = (osTextT*)postRptExceptionLath + sizeof( countT ) ;
         if( !tinEarlyLate.postRptExceptionLath  ) tinEarlyLate.postRptExceptionLath = postRieLath ;
    else if(  tinEarlyLate.postRptExceptionLath != postRieLath ) { BLAMMO ; }

    tellInfoSysExceptionS* pTieLath = (tellInfoSysExceptionS*)(byteT*)tellInfoSysExceptionLath ;
         if( !tinEarlyLate.pTieLath             ) tinEarlyLate.pTieLath = pTieLath ;
    else if(  tinEarlyLate.pTieLath != pTieLath ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36077* : 3func.36077002.tlsstackframenotlss.tlsstackframenotlss END
