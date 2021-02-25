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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091002.tcpromptc.dt_tcpromptc BEGIN
#define DDNAME       "3func.36091002.tcpromptc.dt_tcpromptc"
#define DDNUMB      (countT)0x36091002
#define IDFILE      (countT)0x12c7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/tcPromptC::~tcPromptC( voidT )/*1*/
{
    TINSL
    ether.delF( tinP , psttPrompt ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091002.tcpromptc.dt_tcpromptc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091003.tcpromptc.tcpromptc BEGIN
#define DDNAME       "3func.36091003.tcpromptc.tcpromptc"
#define DDNUMB      (countT)0x36091003
#define IDFILE      (countT)0x12c8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/tcPromptC::tcPromptC( tinS& tinP , etherC& etherP , const osTextT* const postOldCommentP , strokeS*& psttValueP , const strokeS* const psttPromptP , batonC* const pBatonP , signC* const pSignP , const flagsT flFeaturesP , countT csttReserveP , tcStateCBFT pTcStateCBFP , const countT cArgP , flagsT* const pFlagsTcFeatureDisableP , const countT cFramesPadRightP , const countT cFramesPadUpP , const countT rgbFrameP , const countT idTabClassP , const countT idTabP , soulC* const psFeaturesP , const countT idToolFilterListP ) :/*1*/
tcButtonC( tinP , postOldCommentP , buPromptCBF , (countT)this , flFeaturesP | flTCfEATURE_KEYaCTION | flTCfEATURE_HOTkEY | flTCfEATURE_HOTkEYgRABStAB , pFlagsTcFeatureDisableP , T("")+S2(0x000000,scOld_cPUSHcOLOR)+T(psttPromptP)+S2(0,scOld_POPcOLOR) , csttReserveP , rgbFrameP , 0 , 0 , 0 , 0 , idTabClassP , idTabP , psFeaturesP , idToolFilterListP ) ,
psttValue( psttValueP ) ,
psttPrompt( 0 ) ,
pBaton( pBatonP ) ,
pSign( pSignP ) ,
ether( etherP ) ,
pTcStateCBF( pTcStateCBFP ) ,
cArg( cArgP ) ,
cFramesPadRight( cFramesPadRightP ) ,
cFramesPadUp( cFramesPadUpP )
{
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( !psttValue ) { etherP.strMakeF( tinP , LF , psttValue ) ; ___( psttValue ) ; }
    freshF( tinP , psttPromptP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091003.tcpromptc.tcpromptc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091004.tcpromptc.freshf BEGIN
#define DDNAME       "3func.36091004.tcpromptc.freshf"
#define DDNUMB      (countT)0x36091004
#define IDFILE      (countT)0x12c9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT tcPromptC::freshF( tinS& tinP , const strokeS* const psttPromptP )/*1*/
{
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !psttPrompt || psttPromptP )
    {
        ether.delF( tinP , psttPrompt ) ;
        ether.strMakeF( tinP , LF , psttPrompt , psttPromptP ) ; ___( psttPrompt ) ;
    }

    if( !psttValue ) { ether.strMakeF( tinP , LF , psttValue ) ; ___( psttValue ) ; }

    setF( tinP , T("")+S3(1.0,scOld_mmFRAMEtO,1.0)+S3((measureT)cFramesPadRight,scOld_mmPADfORsADAMfRAMES,(measureT)cFramesPadUp)+S3((measureT)(psttPrompt->idAdam+psttValue->idAdam),scOld_mmFRAMEcELLS,(measureT)1.0)+T(psttPrompt)+T(psttValue)+S2(0,scOld_POPfRAME)+S2(0,scOld_POPfRAME) ) ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36091* : 3func.36091004.tcpromptc.freshf END
