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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099002.backoldc.dt_backoldc BEGIN
#define DDNAME       "3func.36099002.backoldc.dt_backoldc"
#define DDNUMB      (countT)0x36099002
#define IDFILE      (countT)0x12f7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

//THIS DEF EXISTS DUE TO COMPILER BUG; ELSE DT COULD BE PURE VIRTUAL

/*1*/backOldC::~backOldC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099002.backoldc.dt_backoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099003.pulpoldc.dt_pulpoldc BEGIN
#define DDNAME       "3func.36099003.pulpoldc.dt_pulpoldc"
#define DDNUMB      (countT)0x36099003
#define IDFILE      (countT)0x12f8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

//LINKER COMPLAINS IF I DO NOT EXIST, EVEN THOUGH I AM PURE VIRTUAL

/*1*/pulpOldC::~pulpOldC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099003.pulpoldc.dt_pulpoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099004.pulpoldc.pulpoldc BEGIN
#define DDNAME       "3func.36099004.pulpoldc.pulpoldc"
#define DDNUMB      (countT)0x36099004
#define IDFILE      (countT)0x12f9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U:: pulpOldC NEEDS AN etherC& ether MEMBER FOR stSnap AND TO SPEED UP CALLS THAT NOW PASS IN A REFERENCE

/*1*/pulpOldC::pulpOldC( tinS& tinP , etherC& etherP , paperOldC& paperP , backOldC& backP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
paper( paperP ) ,
ether( etherP ) ,
stSnap( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_XRAY , ifcSTACKtYPE_PTR_soulC ) ,
idNestSadamRender( 0 ) ,
flagsMode( flPULPmODE_null ) ,
cFrameLevelsNoTouch( 0 ) ,
idLineType( 0 ) ,
mIdColTransformAnchor( 0.0 ) ,
mIdRowTransformAnchor( 0.0 ) ,
mCosHotAngle( 0.0 ) ,
mSinHotAngle( 0.0 ) ,
ppVarsHandlerF( 0 ) ,
pVarsHandlerFIArg( 0 ) ,
stqPelsPaper( tinP , sizeof( bitmapOldC ) ) ,
stqRam( tinP ) ,
flagsRenderCalcNoPush( flPAPERrENDERnOpUSH_null ) ,
flagsRenderNoPush( flPAPERrENDERcALCnOpUSH_null ) ,
flagsRender( flPAPERrENDER_null ) ,
cNestIfSkipped( 0 ) ,
stAnimateCbfStrokes( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ,
mIdColNow( 0.0 ) ,
mIdRowNow( 0.0 ) ,
cStrokeOverrideCbfParametersExpected( 0 ) ,
mIdColLag( 0.0 ) ,
mIdRowLag( 0.0 ) ,
snapStaqsBeginNU( 0 ) ,
stqr_paperOldClip(                   tinP , sizeof( count5S ) ) ,
stqr_pelsOld(                     tinP , sizeof( count3S ) ) ,
stqr_paperVars(                   tinP ) ,
stqr_strokingFrame(               tinP , sizeof( strokingFrameS ) , 0x10 ) ,
stqr_boundingFrame(               tinP , sizeof( strokingFrameS ) , 0x4 ) ,
stqr_flagsModeI_(                 tinP ) ,
stqr_cRipples(                    tinP ) ,
stqr_flStyle(                     tinP ) ,
stqr_cPolygonSides(               tinP ) ,
stqr_idObject(                    tinP ) ,
stqr_idTypePaint(                 tinP ) ,
stqr_offFrame(                    tinP ) ,
stqr_offFrameWrap(                tinP ) ,
stqr_mIdColWrapOLD(               tinP ) ,
stqr_mIdColLowWater(              tinP ) ,
stqr_mIdColHighWater(             tinP ) ,
stqr_mIdRowLowWater(              tinP ) ,
stqr_mIdRowHighWater(             tinP ) ,
stqr_cColsMarginSadamFrame(       tinP ) ,
stqr_cRowsMarginSadamFrame(       tinP ) ,
stqr_strokeOverride(              tinP , sizeof( strokeS ) ) ,
stqr_strokeOverrideIdPlate(       tinP ) ,
stqr_strokeOverrideCbfParameters( tinP ) ,
stqr_fRenderControl(              tinP ) ,
stqr_fRenderCycled(               tinP ) ,
stqr_fRenderCyclingDetail1(       tinP ) ,
stqr_fRenderCyclingDetail2(       tinP ) ,
stqr_fRenderCyclingDetail3(       tinP ) ,
stqr_fRenderCyclingDetail4(       tinP ) ,
stqr_fRenderCyclingDetail5(       tinP ) ,
stqr_fRenderCyclingDetail6(       tinP ) ,
stqr_fRenderCyclingDetail7(       tinP ) ,
stqr_fRenderCyclingDetail8(       tinP ) ,
stqr_pHandlerFinalTransform(      tinP ) ,
stqr_mCosVector(                  tinP ) , stqr_mVector_A(           tinP ) , stqr_mVector_B(           tinP ) , stqr_mVector_C(           tinP ) , stqr_mVector_D(           tinP ) ,
stqr_mSinVector(                  tinP ) ,
stqr_m01PadRight(                 tinP ) , stqr_m01PadRight_A(       tinP ) , stqr_m01PadRight_B(       tinP ) , stqr_m01PadRight_C(       tinP ) , stqr_m01PadRight_D(       tinP ) ,
stqr_m01PadUp(                    tinP ) , stqr_m01PadUp_A(          tinP ) , stqr_m01PadUp_B(          tinP ) , stqr_m01PadUp_C(          tinP ) , stqr_m01PadUp_D(          tinP ) ,
stqr_notes( tinP ) ,
stqr_if( tinP ) ,
stqr_flagsRenderUnder( tinP ) ,
stqr_bWrapUnder( tinP ) ,
stqr_bRipplesOnlyUnder( tinP ) ,
snapStaqsEndNU( 0 ) ,
pPaperToBackCBF( pPaperToBackCBFP ) ,
cPaperToBackArg( cPaperToBackArgP ) ,
x1( backP )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099004.pulpoldc.pulpoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099005.pulpoldc.overridef BEGIN
#define DDNAME       "3func.36099005.pulpoldc.overridef"
#define DDNUMB      (countT)0x36099005
#define IDFILE      (countT)0x12fa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i pop an idPlate value
if -1 then i do nothing
if 0 then i pop the top override stroke and use it
*/
/**/

/*1*/voidT pulpOldC::overrideF( tinS& tinP , strokeS& sttP )/*1*/
{
    if( F(flagsRenderNoPush) & flPAPERrENDERnOpUSH_OVERRIDEnEXTsTROKE )
    {
        if( x1.back.cTraceOn ) { TN( tSay , "" ) ; tSay = T("override (")+TF1(stqr_strokeOverride)+T(" available) ") ; LOGrAW( tSay ) ; }
        flagsRenderNoPush &= ~( F(flPAPERrENDERnOpUSH_OVERRIDEnEXTsTROKE) ) ;
        if( stqr_strokeOverride )
        {
            ZE( countT , idPlate ) ;
            stqr_strokeOverrideIdPlate >> idPlate ;
            if( x1.back.cTraceOn ) { TN( tSay , "" ) ; tSay = T("(plate ")+TF1(idPlate)+T(" specified); new value: ") ; LOGrAW( tSay ) ; }

            if( !idPlate )
            {
                strokeS stto ;
                byteT* pb_stto = (byteT*)&stto ;
                stqr_strokeOverride >> pb_stto ;
                sttP.idAdam = stto.idAdam ;
                sttP.cNote  = stto.cNote  ;
            }
            else if( (sCountT)idPlate > 0 && idPlate <= stqr_strokeOverride )
            {
                strokeS stto = *(strokeS*)&stqr_strokeOverride[ idPlate ] ;
                sttP.idAdam = stto.idAdam ;
                sttP.cNote  = stto.cNote  ;
            }
            if( x1.back.cTraceOn ) logStrokeF( tinP , sttP ) ;
        }
    }

    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099005.pulpoldc.overridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099006.pulpoldc.positionpaperbackf BEGIN
#define DDNAME       "3func.36099006.pulpoldc.positionpaperbackf"
#define DDNUMB      (countT)0x36099006
#define IDFILE      (countT)0x12fb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT pulpOldC::positionPaperBackF( tinS& tinP )/*1*/
{
    strokingFrameS& sf = *(strokingFrameS*)&stqr_strokingFrame[ 1 ] ;
    mIdColNow = sf.mIdCol ;
    mIdRowNow = sf.mIdRow ;
    if( rCache.bPeeWhileMoving ) newWaterF( mIdColNow , mIdRowNow ) ;

    x1.back.backPositionF( tinP , *this , mIdColNow , mIdRowNow ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099006.pulpoldc.positionpaperbackf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099007.pulpoldc.newwaterf BEGIN
#define DDNAME       "3func.36099007.pulpoldc.newwaterf"
#define DDNUMB      (countT)0x36099007
#define IDFILE      (countT)0x12fc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT pulpOldC::newWaterF( const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    {
        countT cFrames = stqr_strokingFrame ;
        if( cFrames )
        {
            strokingFrameS* pFrame = (strokingFrameS*)&stqr_strokingFrame[ cFrames ] ; //U::BUG? IS IT VALID TO INDEX THIS?
            
            countT cToDo = rCache.cRipples ;
            if( cToDo > cFrames - 1 - cFrameLevelsNoTouch ) cToDo = cFrames - 1 - cFrameLevelsNoTouch ;
    
            for( sCountT off = cFrames - 2 ; off >= 0 ; off -- )
            {
                if( cToDo -- ) pFrame[ off ].newWaterF( mIdColP , mIdRowP , rCache.cRipples ) ;
                else           break ;
            }
        }
    }

    if( !(F(flagsMode) & flPULPmODE_RIPPLESoNLY ) || rCache.cRipples )
    {
        countT cFrames = stqr_boundingFrame ;
        if( cFrames )
        {
            strokingFrameS* pFrame = (strokingFrameS*)&stqr_boundingFrame[ cFrames ] ;
            for( sCountT off = cFrames - 1 ; off >= 0 ; off -- )
            {
                pFrame[ off ].newWaterF( mIdColP , mIdRowP , rCache.cRipples ) ;
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099007.pulpoldc.newwaterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099008.pulpoldc.mcolrowf BEGIN
#define DDNAME       "3func.36099008.pulpoldc.mcolrowf"
#define DDNUMB      (countT)0x36099008
#define IDFILE      (countT)0x12fd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i calculate the new [col,row] implied by a command
 i will ignore invalid input and use the nearest valid input value instead
 this bounds checking is usually triggeredd by providing countT rather than measureT arguments in S3()
 bounds correction is needed because some countT values are nan or inf or are so small or large that nan or inf will be produced in intermediate or final calculations
 correction is applied so that illegal content values will not crash the rendering code
*/
/**/

/*1*/voidT pulpOldC::mColRowF( measureT& mColToP , measureT& mRowToP , const countT idCasteP , const countT idCasteBaseP , strokeS& sttP )/*1*/
{
    countT off = rCache.offFrame ;
    if( off > stqr_strokingFrame - 1 ) off = stqr_strokingFrame - 1 ;
    strokingFrameS& sf   = *(strokingFrameS*)&stqr_strokingFrame[ 1 + off ] ;

    //if( x1.back.x1.backIdTypeF() == ifcIDtYPEpAPERbACK_windowOldC )
    //{
    //    LOGrAWtID8( "windowOldC mColRowF: (sf)" , R( sf.mIdCol ) , " " , R( sf.mIdRow ) , " " , R( sf.mCols ) , " " , R( sf.mRows )  ) ;
    //}

    //{
    //    TINSL
    //    strokingFrameS& sfqr = *(strokingFrameS*)&stqr_strokingFrame[ 1 + off ] ;
    //    if( thirdC::c_memcmpIF( tinP , (byteT*)&sfqr , (byteT*)&sf , sizeof sf ) ) { BLAMMO ; }
    //}

    measureT mp1 = *(measureT*)&sttP.idAdam ;
    measureT mp2 = *(measureT*)&sttP.cNote ;

    switch( idCasteP - idCasteBaseP )
    {
        case 0 /*scOld_mmMOVE*/ :
        {
            //SPEC
            //
            // IF 0.0 THEN MOVE NOT AT ALL
            // IF 1.0 AND FRAME IS 100.0 THEN MOVE 100.0
            //

            if( mp1 < - (sCountT)TUCK ) mp1 = - (sCountT)TUCK ;
            if( mp1 >            TUCK ) mp1 =            TUCK ;
            if( mp2 < - (sCountT)TUCK ) mp2 = - (sCountT)TUCK ;
            if( mp2 >            TUCK ) mp2 =            TUCK ;

            mColToP = mIdColNow + mp1 * sf.mCols ;
            mRowToP = mIdRowNow + mp2 * sf.mRows ;
            break ;
        }
        case 1 /*scOld_mmMOVEtO*/ :
        {
            //SPEC
            //
            // IF 0.0 THEN MOVE TO LEFT COLUMN
            // IF 1.0 THEN MOVE TO RIGHT COLUMN
            //
            // VALUES OUTSIDE OF [0.0,1.0] CAN BE USED
            // EXAMPLE: RECIPE TO RENDER A DOUBLEWIDE STROKE
            // 
            // +S2(0,scOld_FRAMEdETACH)
            //     +S2(0,scOld_PUSHoVERRIDEcOLrOW)
            //     +S3(2.0,scOld_mmMOVEtO,1.0)
            //     +S2(0,scOld_mMOVEpADrIGHT)
            //     +S3(1.0,scOld_mmMOVEpEL,0.0)
            //     +S2(0,scOld_cOVERRIDEnEXTsTROKE)
            //     +S3(0.0,scOld_mmFRAMEpELtO,0.0)
            //     +T("O")
            //     +S2(0,scOld_POPfRAME)
            // +S2(0,scOld_POPfRAMEdETACH)
            // 
            // TO SEE WHY THIS WORKS, STUDY THIS:
            // 
            // mCols = 8
            // pad = 4
            // 
            // idColStart  idColEnd  description
            // 1           8         cell1
            // 9           c         pad1
            // d           41        cell2
            // 
            // 1 + 2 * ( 8 - 1 ) + 1 + 4 = 41
            // 

            if( mp1 < - (sCountT)TUCK ) mp1 = - (sCountT)TUCK ;
            if( mp1 >            TUCK ) mp1 =            TUCK ;
            if( mp2 < - (sCountT)TUCK ) mp2 = - (sCountT)TUCK ;
            if( mp2 >            TUCK ) mp2 =            TUCK ;

            if( mp1 != MAXmEASUREt ) mColToP = sf.mIdCol + mp1 * ( sf.mCols - 1.0 ) ;
            if( mp2 != MAXmEASUREt ) mRowToP = sf.mIdRow + mp2 * ( sf.mRows - 1.0 ) ;
            break ;
        }
        case 2 /*scOld_mmMOVEpEL*/ :
        {
            //SPEC
            //
            // IF 1.0 THEN MOVE 1 COLUMNS
            //

            if( mp1 < - (sCountT)TOCK ) mp1 = - (sCountT)TOCK ;
            if( mp1 >            TOCK ) mp1 =            TOCK ;
            if( mp2 < - (sCountT)TOCK ) mp2 = - (sCountT)TOCK ;
            if( mp2 >            TOCK ) mp2 =            TOCK ;

            mColToP = mIdColNow + mp1 ;
            mRowToP = mIdRowNow + mp2 ;
            break ;
        }
        case 3 /*scOld_mmMOVEpELtO*/ :
        {
            //SPEC
            //
            // IF 1.0 THEN MOVE TO COL 1 RELATIVE TO STROKING ORIGIN
            //
            // THE USE OF ORIGIN INFO HERE WAS REMOVED AS PART OF MIGRATING TO APPLYING IT AT A LOWER LEVEL

            if( mp1 < - (sCountT)TOCK ) mp1 = - (sCountT)TOCK ;
            if( mp1 >            TOCK ) mp1 =            TOCK ;
            if( mp2 < - (sCountT)TOCK ) mp2 = - (sCountT)TOCK ;
            if( mp2 >            TOCK ) mp2 =            TOCK ;

            mColToP = mp1 ;
            mRowToP = mp2 ;
            break ;
        }
        case 4 /*scOld_mmMOVEcELLS*/ : //LIKE MOVEtO BUT MAKES ROOM FOR mPadUp mPadRight
        {
            //SPEC (OBSOLETED)
            //
            // IF 0.0  THEN MOVE TO LEFT COLUMN
            // IF 1.0  THEN MOVE TO RIGHT COLUMN
            // IF 0.5  THEN MOVE TO MEDIAN COLUMN LESS mPadRight LESS 1 PEL
            // IF 0.25 THEN MOVE TO QUARTILE COLUMN LESS mPadRight LESS 1 PEL
            //

            // EXAMPLE: 2 COLUMNS
            //  sf.mIdCol       : 1
            //  sf.mCols        : 8
            //  rCache.mPadRight: 0
            //  mColToP         : 1 + 8.3 - 8.0 ;
            //                  =     8.4 - 8.0
            //                  =       4

            // EXAMPLE: 2 COLUMNS
            //  sf.mIdCol       : 1
            //  sf.mCols        : 8
            //  rCache.mPadRight: 1
            //  mColToP         : 8.3           (3 and 1/2)


            // EXAMPLE: 1 COLUMNS
            //  sf.mIdCol       : 1
            //  sf.mCols        : 8
            //  rCache.mPadRight: 1
            //  mColToP         : 1 + ( 8 - 1 ) / 1 - ( 1 + 1 ) * ( 1 - 1 / 1 )
            //                  = 1 + 7 = 8

            if( mp1 < - (sCountT)TUCK ) mp1 = - (sCountT)TUCK ;
            if( mp1 >            TUCK ) mp1 =            TUCK ;
            if( mp2 < - (sCountT)TUCK ) mp2 = - (sCountT)TUCK ;
            if( mp2 >            TUCK ) mp2 =            TUCK ;

            //OLD AND INCORRECT
            //mColToP = sf.mIdCol + ( sf.mCols - 1.0 ) / mp1 - ( rCache.mPadRight + 1.0 ) * ( 1.0 - 1.0 / mp1 ) ;
            //mRowToP = sf.mIdRow + ( sf.mRows - 1.0 ) / mp2 - ( rCache.mPadUp    + 1.0 ) * ( 1.0 - 1.0 / mp2 ) ;

            const measureT mCellsWide = mp1 ;
            const measureT mCellsTall = mp2 ;

            mColToP = !mCellsWide
                ? mIdColNow
                : sf.mIdCol - 1.0 + sf.mCols / mCellsWide - rCache.mPadRight * ( mCellsWide - 1.0 ) / mCellsWide
            ;

            mRowToP = !mCellsTall
                ? mIdRowNow
                : sf.mIdRow - 1.0 + sf.mRows / mCellsTall - rCache.mPadUp    * ( mCellsTall - 1.0 ) / mCellsTall
            ;

            //TN( tSay , "" ) ; tSay = T("\r\nmColRowF is using mPadRight: ")+TF1(rCache.mPadRight)+T("\r\n") ;
            //LOGrAW( tSay ) ; //U::

            break ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099008.pulpoldc.mcolrowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099009.pulpoldc.snapbasef BEGIN
#define DDNAME       "3func.36099009.pulpoldc.snapbasef"
#define DDNUMB      (countT)0x36099009
#define IDFILE      (countT)0x12fe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i snap or restore the state of the pulp
the state of each sadam is excluded unless that adam is specifically requested
if an sc_cADAM stroke is going to be rendered during the interval, its idAdam value should be specified so that it will be restored to its prior state
parameters
 tinP
 etherP
 bRestoreP
 pczIdAdamP
  if !bRestoreP
   pczIdAdamP is an optional list of sc_cADAM idAdam values to look for and snap if exists
   elements are zeed and shifted left when found
   upon my return, pczIdAdamP will point to a list of idAdam values that did not exist
  else
   pczIdAdamP is an optional list of sc_cADAM idAdam values to delete
   all snapped sadams will be restored
   all listed sadams will be deleted
*/
/**/

/*1*/voidT pulpOldC::snapBaseF( tinS& tinP , etherC& etherP , const boolT bRestoreP , countT* const pczIdAdamP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.36099009.pulpoldc.snapbasef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900a.pulpoldc.purgebasef BEGIN
#define DDNAME       "3func.3609900a.pulpoldc.purgebasef"
#define DDNUMB      (countT)0x3609900a
#define IDFILE      (countT)0x12ff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT pulpOldC::purgeBaseF( tinS& tinP , etherC& etherP , const flagsT flagsP )/*1*/
{
    _IO_

    const boolT bEmpty  = F(flagsP) & flPAPERrESET_LEAVEeMPTY ;
    const boolT bNoDraw = F(flagsP) & flPAPERrESET_NOdRAW ;

    flagsRenderNoPush = flPAPERrENDERnOpUSH_null ;
    flagsRender       = flPAPERrENDER_null ;

    //U::USE purgeF FOR NEXT 2 LINES (3 IF NOT DRAWING PELS)
    while( stqr_paperVars  ) { ZE( strokeS* , psttw ) ; stqr_paperVars  >> psttw ; etherP.delF( tinP , psttw ) ; }

    while( stqr_paperOldClip )
    {
        count5S c5p ;
        byteT* pbp = (byteT*)&c5p ;
        stqr_paperOldClip >> pbp ;

        if( !bNoDraw )
        {
            handleC hRgnDoomed( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
            hRgnDoomed.osF( ifcIDtYPEhANDLE_DRAWINGtOOL , c5p.c1 ) ;
        }
    }

    if( !bEmpty )
    {
        mIdColNow = 1.0 ;
        mIdRowNow = 1.0 ;
        x1.back.backPositionF( tinP , *this , mIdColNow , mIdRowNow ) ;
    }

    while( stqr_strokingFrame ) { strokingFrameS rf ; byteT* pb_rf = (byteT*)&rf ; stqr_strokingFrame >> pb_rf  ; }
    if( !bEmpty )
    {
        strokingFrameS rf( flSTROKINGfRAME_null , 1 , 1 , mIdColNow , mIdRowNow , x1.back.mColsF() , x1.back.mRowsF() ) ;
        stqr_strokingFrame << (byteT*)&rf ;
        stqr_strokingFrame << (byteT*)&rf ;
    }

    while( stqr_flagsModeI_                ) { ZE( countT   , cFoo ) ; stqr_flagsModeI_                      >> cFoo ; }

    while( stqr_flStyle                   ) { ZE( countT   , cFoo ) ; stqr_flStyle                         >> cFoo ; } if( !bEmpty ) stqr_flStyle                         << (countT)flRENDERsTYLE_null ;
    while( stqr_cPolygonSides             ) { ZE( countT   , cFoo ) ; stqr_cPolygonSides                   >> cFoo ; } if( !bEmpty ) stqr_cPolygonSides                   << (countT)CpOLYGONsIDESdEFAULT ;
    while( stqr_idObject                  ) { ZE( countT   , cFoo ) ; stqr_idObject                        >> cFoo ; } if( !bEmpty ) stqr_idObject                        << (countT)0 ;
    while( stqr_idTypePaint               ) { ZE( countT   , cFoo ) ; stqr_idTypePaint                     >> cFoo ; } if( !bEmpty ) stqr_idTypePaint                     << (countT)ifcIDtYPEpAINT_XOR ;
    while( stqr_offFrame                  ) { ZE( countT   , cFoo ) ; stqr_offFrame                        >> cFoo ; } if( !bEmpty ) stqr_offFrame                        << (countT)0 ;
    while( stqr_offFrameWrap              ) { ZE( countT   , cFoo ) ; stqr_offFrameWrap                    >> cFoo ; } if( !bEmpty ) stqr_offFrameWrap                    << (countT)0 ;
    while( stqr_cRipples                  ) { ZE( measureT , cFoo ) ; stqr_cRipples                        >> cFoo ; } if( !bEmpty ) stqr_cRipples                        << (countT)-1 ;

    while( stqr_mIdColWrapOLD             ) { ZE( measureT , mFoo ) ; stqr_mIdColWrapOLD                   >> mFoo ; } if( !bEmpty ) stqr_mIdColWrapOLD                   << (measureT) MAXmEASUREt ;
    while( stqr_mIdColLowWater         ) { ZE( measureT , mFoo ) ; stqr_mIdColLowWater               >> mFoo ; } if( !bEmpty ) stqr_mIdColLowWater               << (measureT) MAXmEASUREt ;
    while( stqr_mIdColHighWater        ) { ZE( measureT , mFoo ) ; stqr_mIdColHighWater              >> mFoo ; } if( !bEmpty ) stqr_mIdColHighWater              << (measureT)-MAXmEASUREt ;
    while( stqr_mIdRowLowWater         ) { ZE( measureT , mFoo ) ; stqr_mIdRowLowWater               >> mFoo ; } if( !bEmpty ) stqr_mIdRowLowWater               << (measureT) MAXmEASUREt ;
    while( stqr_mIdRowHighWater        ) { ZE( measureT , mFoo ) ; stqr_mIdRowHighWater              >> mFoo ; } if( !bEmpty ) stqr_mIdRowHighWater              << (measureT)-MAXmEASUREt ;
    while( stqr_cColsMarginSadamFrame  ) { ZE( countT   , cFoo ) ; stqr_cColsMarginSadamFrame        >> cFoo ; } if( !bEmpty ) stqr_cColsMarginSadamFrame        << (countT)1 ;
    while( stqr_cRowsMarginSadamFrame  ) { ZE( countT   , cFoo ) ; stqr_cRowsMarginSadamFrame        >> cFoo ; } if( !bEmpty ) stqr_cRowsMarginSadamFrame        << (countT)1 ;
    while( stqr_fRenderControl         ) { ZE( flagsT   , fFoo ) ; stqr_fRenderControl               >> fFoo ; } if( !bEmpty ) stqr_fRenderControl               << flRENDERcONTROL_null ;
    while( stqr_fRenderCycled          ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCycled                >> fFoo ; } if( !bEmpty ) stqr_fRenderCycled                << flRENDERcYCLED_null  ;
    while( stqr_fRenderCyclingDetail1  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail1        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail1        << flRENDERcYCLINGdETAIL1_null ;
    while( stqr_fRenderCyclingDetail2  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail2        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail2        << flRENDERcYCLINGdETAIL2_null ;
    while( stqr_fRenderCyclingDetail3  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail3        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail3        << flRENDERcYCLINGdETAIL3_null ;
    while( stqr_fRenderCyclingDetail4  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail4        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail4        << flRENDERcYCLINGdETAIL4_null ;
    while( stqr_fRenderCyclingDetail5  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail5        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail5        << flRENDERcYCLINGdETAIL5_null ;
    while( stqr_fRenderCyclingDetail6  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail6        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail6        << flRENDERcYCLINGdETAIL6_null ;
    while( stqr_fRenderCyclingDetail7  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail7        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail7        << flRENDERcYCLINGdETAIL7_null ;
    while( stqr_fRenderCyclingDetail8  ) { ZE( flagsT   , fFoo ) ; stqr_fRenderCyclingDetail8        >> fFoo ; } if( !bEmpty ) stqr_fRenderCyclingDetail8        << flRENDERcYCLINGdETAIL8_null ;
    while( stqr_pHandlerFinalTransform ) { ZE( countT   , cFoo ) ; stqr_pHandlerFinalTransform       >> cFoo ; } if( !bEmpty ) stqr_pHandlerFinalTransform       << countTC()      ;
    while( stqr_mCosVector             ) { ZE( measureT , mFoo ) ; stqr_mCosVector                   >> mFoo ; } if( !bEmpty ) stqr_mCosVector                   << (measureT) 1.0 ;
    while( stqr_mSinVector             ) { ZE( measureT , mFoo ) ; stqr_mSinVector                   >> mFoo ; } if( !bEmpty ) stqr_mSinVector                   << (measureT) 0.0 ;
    while( stqr_mVector_A              ) { ZE( measureT , mFoo ) ; stqr_mVector_A                    >> mFoo ; } if( !bEmpty ) stqr_mVector_A                    << (measureT) 1.0    ;
    while( stqr_mVector_B              ) { ZE( measureT , mFoo ) ; stqr_mVector_B                    >> mFoo ; } if( !bEmpty ) stqr_mVector_B                    << (measureT) PI / 2 ;
    while( stqr_mVector_C              ) { ZE( measureT , mFoo ) ; stqr_mVector_C                    >> mFoo ; } if( !bEmpty ) stqr_mVector_C                    << (measureT) 1.0    ;
    while( stqr_mVector_D              ) { ZE( measureT , mFoo ) ; stqr_mVector_D                    >> mFoo ; } if( !bEmpty ) stqr_mVector_D                    << (measureT) PI / 2 ;
    while( stqr_m01PadRight            ) { ZE( measureT , mFoo ) ; stqr_m01PadRight                  >> mFoo ; } if( !bEmpty ) stqr_m01PadRight                  << (measureT) 0.0f ;
    while( stqr_m01PadRight_A          ) { ZE( measureT , mFoo ) ; stqr_m01PadRight_A                >> mFoo ; } if( !bEmpty ) stqr_m01PadRight_A                << (measureT) 1.0    ;
    while( stqr_m01PadRight_B          ) { ZE( measureT , mFoo ) ; stqr_m01PadRight_B                >> mFoo ; } if( !bEmpty ) stqr_m01PadRight_B                << (measureT) PI / 2 ;
    while( stqr_m01PadRight_C          ) { ZE( measureT , mFoo ) ; stqr_m01PadRight_C                >> mFoo ; } if( !bEmpty ) stqr_m01PadRight_C                << (measureT) 1.0    ;
    while( stqr_m01PadRight_D          ) { ZE( measureT , mFoo ) ; stqr_m01PadRight_D                >> mFoo ; } if( !bEmpty ) stqr_m01PadRight_D                << (measureT) PI / 2 ;
    while( stqr_m01PadUp               ) { ZE( measureT , mFoo ) ; stqr_m01PadUp                     >> mFoo ; } if( !bEmpty ) stqr_m01PadUp                     << (measureT) 0.0f ;
    while( stqr_m01PadUp_A             ) { ZE( measureT , mFoo ) ; stqr_m01PadUp_A                   >> mFoo ; } if( !bEmpty ) stqr_m01PadUp_A                   << (measureT) 1.0    ;
    while( stqr_m01PadUp_B             ) { ZE( measureT , mFoo ) ; stqr_m01PadUp_B                   >> mFoo ; } if( !bEmpty ) stqr_m01PadUp_B                   << (measureT) PI / 2 ;
    while( stqr_m01PadUp_C             ) { ZE( measureT , mFoo ) ; stqr_m01PadUp_C                   >> mFoo ; } if( !bEmpty ) stqr_m01PadUp_C                   << (measureT) 1.0    ;
    while( stqr_m01PadUp_D             ) { ZE( measureT , mFoo ) ; stqr_m01PadUp_D                   >> mFoo ; } if( !bEmpty ) stqr_m01PadUp_D                   << (measureT) PI / 2 ;
    while( stqr_notes                  ) { ZE( countT   , cFoo ) ; stqr_notes                        >> cFoo ; }
    while( stqr_if                     ) { ZE( countT   , cFoo ) ; stqr_if                           >> cFoo ; } if( !bEmpty ) stqr_if                           << (countT) 1 ;
    while( stqr_flagsRenderUnder       ) { ZE( countT   , cFoo ) ; stqr_flagsRenderUnder             >> cFoo ; }
    while( stqr_bWrapUnder             ) { ZE( countT   , cFoo ) ; stqr_bWrapUnder                   >> cFoo ; }

    if( stAnimateCbfStrokes ) stAnimateCbfStrokes.purgeF( tinP ) ;

    if( !( F(flagsP) & flPAPERrESET_NOrESETbACK ) ) x1.back.backResetF( tinP , *this ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900a.pulpoldc.purgebasef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900b.pulpoldc.logstrokef BEGIN
#define DDNAME       "3func.3609900b.pulpoldc.logstrokef"
#define DDNUMB      (countT)0x3609900b
#define IDFILE      (countT)0x1300


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT pulpOldC::logStrokeF( tinS& tinP , const strokeS& sttP )/*1*/
{
    if( x1.back.cTraceOn ) { TN( tSay , "" ) ; tSay = T("")+TF1(sttP.idAdam)+T(",")+TF1(sttP.cNote)+T(" (")+TF1(*(measureT*)&sttP.idAdam)+T(",")+TF1(*(measureT*)&sttP.cNote)+T(")") ; LOGrAW( tSay ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900b.pulpoldc.logstrokef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900c.pulpoldc.boundingrectf BEGIN
#define DDNAME       "3func.3609900c.pulpoldc.boundingrectf"
#define DDNUMB      (countT)0x3609900c
#define IDFILE      (countT)0x1301


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$boundingRectF.0.html\"\>instances\</A\>
\<A HREF=\"5.10301ab.1.0.html\"\>definition\</A\>
i return the bounding rectangle of the rendering of a stroke string at the current location of the specified window
after calculating this information, the window is restored to its state at the time i was called
the values returned can optionally be relative to the current position (1,1)
 example: if the current position is the lowest, leftmost pel drawn, mIdColMinP will be set to 1
arguments
 tinP
 mIdColMinP
 mIdRowMinP
 mColsP
 mRowsP
 psttP
  value is not restricted
  any value that can be rendered at call time is legal
  an example of an illegal string is a string that pops more frames than currently exist
 bRelative11P
*/
/**/

/*1*/countT pulpOldC::boundingRectF( tinS& tinP , measureT& mIdColMinP , measureT& mIdRowMinP , measureT& mColsP , measureT& mRowsP , const strokeS* const psttP , const handleC* const phCloneP , const countT* pczIdAdamSnapP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( mIdColMinP ) ;
        __NZ( mIdRowMinP ) ;
        __NZ( mColsP ) ;
        __NZ( mRowsP ) ;
        __Z( psttP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , cWrap ) ;
    arrayC aIdAdam( tinP , sizeof( countT ) , TUCK ) ;
    {
        ZE( countT , offoNext ) ;
        if( pczIdAdamSnapP ) while( *pczIdAdamSnapP ) *(countT*)&aIdAdam[ offoNext ++ ] = *( pczIdAdamSnapP ++ ) ;
        for( countT idi = 1 ; idi <= psttP->idAdam ; idi ++ )
        {
            strokeS& stti = psttP[ CSpREFIX - 1 + idi ] ;
            if( stti.idCaste == sc_cADAM ) *(countT*)&aIdAdam[ offoNext ++ ] = stti.idAdam ;
        }

        *(countT*)&aIdAdam[ aIdAdam ] = 0 ;
    }

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //TO ALLOW DT OF stInvalid
    if( psttP && psttP->idAdam )
    {
        //snapF( tinP , ether , 0 , (countT*)(const countT*)aIdAdam ) ;

        handleC hClone( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_sadamsC ) ;
        sadamsC::pSadamsIF( tinP )->freezeF( tinP , hClone , phCloneP ) ;

        strokingFrameS bf ;
        stqr_boundingFrame << (byteT*)&bf ;

        {
            const flagsT flagsSave = flagsMode ;
            flagsMode |= flPULPmODE_SUPPRESSpELcOLORcHANGES ;

            if( F(flagsP) & flBOUND_RELATIVE11 ) x1.back.wrapRenderF( tinP , T("")+S2(flPUSHoRIGIN_WOwO,scOld_cPUSHoRIGIN) , &hClone            ) ;
                                         cWrap = x1.back.wrapRenderF( tinP , psttP                                      , &hClone  , aIdAdam ) ;
            if( F(flagsP) & flBOUND_RELATIVE11 ) x1.back.wrapRenderF( tinP , T("")+S2(0,scOld_POPoRIGIN)                   , &hClone            ) ;

            flagsMode = flagsSave ;
        }

        byteT* pb_bf = (byteT*)&bf ;
        stqr_boundingFrame >> pb_bf ;
        //snapF( tinP , ether , 1 , (countT*)(const countT*)aIdAdam ) ;

        if( F(flagsP) & flBOUND_OIL )
        {
            if( bf.mIdColHighOil != - MAXmEASUREt )
            {
                mIdColMinP = bf.mIdColLowOil ;
                mIdRowMinP = bf.mIdRowLowOil ;
                mColsP     = bf.mIdColHighOil - bf.mIdColLowOil + 1.0 ;
                mRowsP     = bf.mIdRowHighOil - bf.mIdRowLowOil + 1.0 ;
            }
        }
        else
        {
            if( bf.mIdColHighWater != - MAXmEASUREt )
            {
                mIdColMinP = bf.mIdColLowWater ;
                mIdRowMinP = bf.mIdRowLowWater ;
                mColsP     = bf.mIdColHighWater - bf.mIdColLowWater + 1.0 ;
                mRowsP     = bf.mIdRowHighWater - bf.mIdRowLowWater + 1.0 ;
            }
        }
    }
    THREADmODE1rESTORE
    return cWrap ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36099* : 3func.3609900c.pulpoldc.boundingrectf END
