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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608e* : 3func.3608e002.tcbuttonc.dt_tcbuttonc BEGIN
#define DDNAME       "3func.3608e002.tcbuttonc.dt_tcbuttonc"
#define DDNUMB      (countT)0x3608e002
#define IDFILE      (countT)0x12b5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/tcButtonC::~tcButtonC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608e* : 3func.3608e002.tcbuttonc.dt_tcbuttonc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608e* : 3func.3608e003.tcbuttonc.tcbuttonc BEGIN
#define DDNAME       "3func.3608e003.tcbuttonc.tcbuttonc"
#define DDNUMB      (countT)0x3608e003
#define IDFILE      (countT)0x12b6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/tcButtonC::tcButtonC( tinS& tinP , const osTextT* const postOldCommentP , tcStateCBFT pTcStateCBFP , const countT cArgP , const flagsT flFeaturesP , flagsT* const pFlagsTcFeatureDisableP , const strokeS* const psttP , countT csttReserveP , const countT rgbFrameP , const countT cFrameNestDownP , const countT cFrameNestLeftP , const countT cFrameNestUpP , const countT cFrameNestRightP , const countT idTabClassP , const countT idTabP , soulC* const psFeaturesP , const countT idToolFilterListP ) :/*1*/
vTextC( tinP , postOldCommentP , psttP , csttReserveP , psFeaturesP , 0 , 0 , idToolFilterListP ) ,
flFeatures( flFeaturesP ) ,
flagsTcState( flTCsTATE_null ) ,
pTcStateCBF( pTcStateCBFP ) ,
cArg( cArgP ) ,
pFlagsTcFeatureDisable( pFlagsTcFeatureDisableP )
{
    ZE( soulC* , psFeature ) ;
    ether( tinP , psFeature , TAG( TAGiDnULL ) ) ;

    if( F(flFeaturesP) & flTCfEATURE_FRAME )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_FRAME ;
        *psFeature << rgbFrameP ;

        if( F(flFeaturesP) & flTCfEATURE_FRAMEpEE ) *psFeature << (countT)flFEATUREsADAMfRAME_PEEoN ;

        if( cFrameNestDownP || cFrameNestLeftP || cFrameNestUpP || cFrameNestRightP )
        {
            if( !( F(flFeaturesP) & flTCfEATURE_FRAMEpEE ) ) *psFeature << (countT)flFEATUREsADAMfRAME_null ;

            *psFeature << cFrameNestDownP  ;
            *psFeature << cFrameNestLeftP  ;
            *psFeature << cFrameNestUpP    ;
            *psFeature << cFrameNestRightP ;
        }

        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_MOUSE )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_MOUSE ;
        *psFeature << (countT)( flFEATUREsADAMmOUSE_TOOLpOSITION | flFEATUREsADAMmOUSE_OUTSIDE | flFEATUREsADAMmOUSE_ACTIONmOVE | flFEATUREsADAMmOUSE_ACTIONdOWN | flFEATUREsADAMmOUSE_ACTIONuP | flFEATUREsADAMmOUSE_TOOLbUTTONlEFT | flFEATUREsADAMmOUSE_TOOLbUTTONrIGHT ) ;
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_HOTkEY )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_HOTkEY ;

        if( F(flFeaturesP) & flTCfEATURE_HOTkEYbIGIT )
        {
            *psFeature << (countT)0 ;
            *psFeature << (countT)flFEATUREsADAMhOTkEY_BIGIT ;
        }

        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_FLYOVERhIGHLIGHT )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_FLYOVERhIGHLIGHT ;
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_DRAGGABLE )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_DRAGGABLE ;
        *psFeature << (countT)flFEATUREsADAMdRAGGABLE_null ; // THIS IS WHERE A "PERSISTENCE" FLAG WOULD OPTIONALLY BE SET ; THIS LINE IS REQUIRED SO AS TO DOCUMENT HOW THE CODE IS TO BE ENHANCED TO SUPPORT PERISISTENCE
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_TABpARTICIPANT )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_TABpARTICIPANT ;
        if( idTabClassP ) *psFeature << idTabClassP ;
        if( idTabP      ) *psFeature << idTabP      ;
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;

        //U::ELIMINATE THIS SNIP OBSOLETED BY MIGRATING TO ifcIDtYPEfEATUREsADAM_TABpARTICIPANT
        flagsT flags = flFEATUREsADAMaDAM_null ;
        if( F(flFeaturesP) & flTCfEATURE_TABhEREsUPPRESSEShOTkEYS ) flags |= flFEATUREsADAMaDAM_TABhEREsUPPRESSEShOTkEYS ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_ADAM ;
        *psFeature << flags ;
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    if( F(flFeaturesP) & flTCfEATURE_KEYaCTION )
    {
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_KEYBOARD ;
        *psFeature << (countT)( flFEATUREsADAMkEYBOARD_ACTIONdOWN ) ;
        *psFeaturesVT << *psFeature ;
        psFeature->removeAllF( tinP ) ;
    }

    *psFeature << (countT)ifcIDtYPEfEATUREsADAM_CALLbACK ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_BEFOREdESTROY ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_ANIMATE ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_IFhIT ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_HOTkEY ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_INoUTqUERY ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_DRAG ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_ERASE ;
    *psFeature << (strokeS*)T("_tcButtonCBF") ;
    if( F(flFeaturesP) & flTCfEATURE_TABpARTICIPANT )
    {
        *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_TAB ;
        *psFeature << (strokeS*)T("_tcButtonCBF") ;
    }
    if( F(flFeaturesP) & flTCfEATURE_FLYOVER )
    {
        *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_FLYOVER ;
        *psFeature << (strokeS*)T("_tcButtonCBF") ;
    }

    *psFeature << (countT)this ;
    *psFeaturesVT << *psFeature ;
    psFeature->removeAllF( tinP ) ;

    ether( tinP , psFeature ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608e* : 3func.3608e003.tcbuttonc.tcbuttonc END
