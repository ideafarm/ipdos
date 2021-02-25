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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090002.paperoldc.dt_paperoldc BEGIN
#define DDNAME       "3func.36090002.paperoldc.dt_paperoldc"
#define DDNUMB      (countT)0x36090002
#define IDFILE      (countT)0x12b7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/paperOldC::~paperOldC( voidT )/*1*/
{
    TINSL

    if( getNegAM( finger ) != FINGERnEG_PAPERc ) { BLAMMO ; }

    fireAnimatorIfIF( tinP ) ; //DONE EARLY TO WORK AROUND BUG: tmAnimateSada... CAN REFERENCE A NULL x1.pPulp ONCE A PAPER HAS BEEN DT ; THIS WORKAROUND WILL ONLY WORK IF NO windowOldC IS DT UNTIL THE ENTIRE APPLICATION IS TERMINATING

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    x1.pPulp->x1.back.backDtPaperF( tinP , *x1.pPulp ) ;
    DEL( x1.pPulp ) ;

    while( stDef )
    {
        byteT pbs[ sizeof( strokeS ) ] ;
        strokeS* pstt = (strokeS*)pbs ;
        stDef >> *(byteT**)&pstt ;
        if( pstt->idCaste == sc_cADAM ) pstt->deregisterF() ;
    }

    if( !tinP.pAdamGlobal1->_paperOldC_.pStInstances || !*tinP.pAdamGlobal1->_paperOldC_.pStInstances ) { BLAMMO ; }
    else
    {
        tinP.pAdamGlobal1->_paperOldC_.pStInstances->grabF( tinP , TAG( TAGiDnULL ) ) ;

        ZE( countT , ids ) ;
        tinP.pAdamGlobal1->_paperOldC_.pStInstances->sinkF( tinP , ids , (countT)this , flSTACKsINK_QUERY ) ;
        if( !ids ) { BLAMMO ; }
        else       tinP.pAdamGlobal1->_paperOldC_.pStInstances->extractF( 0 , tinP ) ;

        if( !*tinP.pAdamGlobal1->_paperOldC_.pStInstances )
        {
            tinP.pAdamGlobal1->_paperOldC_.pStInstances->ungrabF( tinP ) ;
            ether( tinP , tinP.pAdamGlobal1->_paperOldC_.pStInstances ) ;

            //U::FIRING WAS DONE HERE, BUT THIS DOESN'T WORK WITH CURRENT CODE; tmAnimateSad... WILL REFERENCE NULL x1.pPulp: fireAnimatorIfIF( tinP ) ;
            DEL( tinP.pAdamGlobal1->_paperOldC_.pSwHotKey ) ;
        }
        else tinP.pAdamGlobal1->_paperOldC_.pStInstances->ungrabF( tinP ) ;
    }

    putNegAM( *(countT*)&finger , FINGERnEG_PAPERczOMBIE ) ;

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090002.paperoldc.dt_paperoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090003.paperoldc.paperoldc BEGIN
#define DDNAME       "3func.36090003.paperoldc.paperoldc"
#define DDNUMB      (countT)0x36090003
#define IDFILE      (countT)0x12b8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/paperOldC::paperOldC( tinS& tinP , etherC& etherP , const countT cArgP , backOldC& backP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
finger( finger ) ,
ether( etherP ) ,
poop( etherP ) ,
stDef( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_BLOB | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_GIVEsIGNdELpLATE | flSTACKc_GIVEsIGNnEWpLATE | flSTACKc_XRAY , sizeof( strokeS ) )
{
    //20180312@0844: DISABLED THESE == TESTS BECAUSE THEY CAN HAPPEN AS RARE SPUROUS EVENTS:  if( getNegAM( finger ) == FINGERnEG_PAPERc ) { BLAMMO ; }
    putNegAM( *(countT*)&finger , FINGERnEG_PAPERc ) ;

    //PAPERS 1 2 ARE THE PRIMARY PAPERS
    //INITIALLY, PAPER 1 IS BOTH THE PRIMARY SHOW AND THE PRIMARY DRAW PAPER
    //APP CODE CAN DRAW, SWITCH, DRAW, SWITCH, ETC TO CONCEAL INTERMEDIATE DRAWING RESULTS

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( !tinP.pAdamGlobal1->_paperOldC_.pStInstances )
    {
        ether( tinP , tinP.pAdamGlobal1->_paperOldC_.pStInstances , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ; ___( tinP.pAdamGlobal1->_paperOldC_.pStInstances ) ;
        tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF = new( 0 , tinP , LF ) signC( tinP , TAG( TAGiDnULL ) ) ; ___( tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF ) ;
    
        etherC& etRock = etherC::etRockIF( tinP ) ;
        tinP.pAdamGlobal1->_paperOldC_.pSwHotKey    = new( 0 , tinP , LF ) switchC( tinP , etRock , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , tinP.pAdamGlobal1->_paperOldC_.psttlBody ) ; ___( tinP.pAdamGlobal1->_paperOldC_.pSwHotKey ) ;

        if( tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF ) etRock.osThreadF( tinP , countTC() , tmAnimateSadamsOnPaperF , tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF ) ;
    }

    {
        ZE( countT , ids ) ;
        tinP.pAdamGlobal1->_paperOldC_.pStInstances->sinkF( tinP , ids , (countT)this , flSTACKsINK_UNIQUE ) ;
        if( !ids ) { BLAMMO ; }
    }

    switch( backP.backIdTypeF() )
    {
        case ifcIDtYPEpAPERbACK_windowOldC : { x1.pPulp = new( 0 , tinP , LF ) winPulpOldC( tinP , ether , *this , backP , *(handleC*)cArgP , pPaperToBackCBFP , cPaperToBackArgP ) ; ___( x1.pPulp ) ; break ; }
        case ifcIDtYPEpAPERbACK_eyeOldC    : { x1.pPulp = new( 0 , tinP , LF ) eyePulpOldC( tinP , ether , *this , backP ,                    pPaperToBackCBFP , cPaperToBackArgP ) ; ___( x1.pPulp ) ; break ; }
        default                         : { BLAMMO                                                                                                                                         ; break ; }
    }

    x1.pPulp->x1.back.backOldCtPaperF( tinP , *x1.pPulp , *this ) ;

    purgeF( tinP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090003.paperoldc.paperoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090006.paperoldc.sadamhighlightf BEGIN
#define DDNAME       "3func.36090006.paperoldc.sadamhighlightf"
#define DDNUMB      (countT)0x36090006
#define IDFILE      (countT)0x12b9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::sadamHighlightF( tinS& tinP , sadamC& sadamP , flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flSADAMhIGHLIGHT , flagsP )
        if( POOP ) return ;
    }

    _IO_

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( countT , rgb ) ;
    if( flagsP == flSADAMhIGHLIGHT_null ) flagsP = flSADAMhIGHLIGHT_DOWN ;
    if(  F(flagsP) & flSADAMhIGHLIGHT_DOWN    ) rgb |= ifcRGB_G4 ;
    if(  F(flagsP) & flSADAMhIGHLIGHT_OWNtAB  ) rgb |= ifcRGB_B4 ;
    if(  F(flagsP) & flSADAMhIGHLIGHT_FLYOVER ) rgb |= ifcRGB_R4 ;
    if(  F(flagsP) & flSADAMhIGHLIGHT_FLASH   ) rgb |= ifcRGB_W4 ;

    //TN( tWordsRequest , "" ) ;
    //if(  F(flagsP) & flSADAMhIGHLIGHT_DOWN    ) tWordsRequest += T(" DOWN") ;
    //if(  F(flagsP) & flSADAMhIGHLIGHT_OWNtAB  ) tWordsRequest += T(" OWNtAB") ;
    //if(  F(flagsP) & flSADAMhIGHLIGHT_FLYOVER ) tWordsRequest += T(" FLYOVER") ;
    //if(  F(flagsP) & flSADAMhIGHLIGHT_FLASH   ) tWordsRequest += T(" FLASH") ;

    //TN( tWords , "" ) ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_DOWN    ) tWords += T(" DOWN") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_OWNtAB  ) tWords += T(" OWNtAB") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_FLYOVER ) tWords += T(" FLYOVER") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_FLASH   ) tWords += T(" FLASH") ;

    //ZE( countT , timeN1 ) ;
    //ZE( sCountT , timeN2 ) ;
    //ether.osTimeNowF( tinP , timeN1 , timeN2 ) ;
    //if( sadamP.features.fc.idAdam == 0x45 ) { LOGrAWtID( TTtOCK(timeN1,timeN2)+T(" sadamHighlightF/+/idAdam: ")+TF1(sadamP.features.fc.idAdam)+T(" \"")+T(sadamP.features.fc.postOldComment)+T("\" ")+TF1(sadamP.pStrike->sc.flagsHighlighted)+tWords+T(" <--- ")+TF1(flagsP)+tWordsRequest ) ; }

    measureT mColFrom = sadamP.pStrike->sc.mIdColHot ;
    measureT mRowFrom = sadamP.pStrike->sc.mIdRowHot ;
    measureT mColTo   = sadamP.pStrike->sc.mIdColHot - 1.0 + sadamP.pStrike->sc.mColsHot ;
    measureT mRowTo   = sadamP.pStrike->sc.mIdRowHot - 1.0 + sadamP.pStrike->sc.mRowsHot ;

    if( !( F(x1.pPulp->flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
    {
        sadamP.pStrike->sc.flagsHighlighted ^= F(flagsP) ;
        measureT mShrink = F(sadamP.features.fc.flagsFrame) & flFEATUREsADAMfRAME_EXISTS ? 1.0 : 0.0 ;
        x1.pPulp->x1.back.backSadamHighlightF( tinP , *x1.pPulp , *this , rgb , mColFrom , mRowFrom , mColTo , mRowTo , mShrink , sadamP.pStrike->sc.cSidesFrame ) ;
    }

    //tWords = T("") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_DOWN    ) tWords += T(" DOWN") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_OWNtAB  ) tWords += T(" OWNtAB") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_FLYOVER ) tWords += T(" FLYOVER") ;
    //if(  F(sadamP.pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_FLASH   ) tWords += T(" FLASH") ;

    //if( sadamP.features.fc.idAdam == 0x45 ) { LOGrAWtID( TTtOCK(timeN1,timeN2)+T(" sadamHighlightF/-/idAdam: ")+TF1(sadamP.features.fc.idAdam)+T(" \"")+T(sadamP.features.fc.postOldComment)+T("\" ")+TF1(sadamP.pStrike->sc.flagsHighlighted)+tWords+T(" <--- ")+TF1(flagsP)+tWordsRequest ) ; }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090006.paperoldc.sadamhighlightf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090007.paperoldc.moveglyphf BEGIN
#define DDNAME       "3func.36090007.paperoldc.moveglyphf"
#define DDNUMB      (countT)0x36090007
#define IDFILE      (countT)0x12ba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::moveGlyphF( tinS& tinP , sadamC& sadamP , const handleC* const phCloneP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //U::DO I NEED TO BE SERIALIZED?: NOT SERIALIZED CAUSE PRIVATE

    if( sadamP.pStrike->sc.mIdColMoveTo != MAXmEASUREt )
    {
        if( sadamP.pStrike->sc.mIdRowMoveTo == MAXmEASUREt ) { BLAMMO ; }

        const measureT mIdColMoveTo = sadamP.pStrike->sc.mIdColMoveTo ;
        const measureT mIdRowMoveTo = sadamP.pStrike->sc.mIdRowMoveTo ;
                                      sadamP.pStrike->sc.mIdColMoveTo =
                                      sadamP.pStrike->sc.mIdRowMoveTo = MAXmEASUREt ;  

        measureT mDeltaCol = mIdColMoveTo - sadamP.pStrike->sc.sf.mIdCol ;
        measureT mDeltaRow = mIdRowMoveTo - sadamP.pStrike->sc.sf.mIdRow ;

        //LOGrAW9( "moveGlyphF [mDeltaCol,mDeltaRow,mIdColMoveTo,mIdColMoveTo]: " , mDeltaCol , " " , mDeltaRow , " " , mIdColMoveTo , " " , mIdRowMoveTo , "\r\n" ) ;

        if( mDeltaCol || mDeltaRow )
        {
            //LOGrAW7( "moveGlyphF [idAdam,mIdColMoveTo,mIdRowMoveTo]: " , sadamP.features.fc.idAdam , " " , mIdColMoveTo , " " , mIdRowMoveTo , "\r\n" ) ;

            strokingFrameS sfw ;
            strokingFrameS sfwd ;
            thirdC::c_memcpyIF( tinP , (byteT*)&sfw  , (byteT*)&sadamP.pStrike->sc.sf    , sizeof sfw ) ;
            thirdC::c_memcpyIF( tinP , (byteT*)&sfwd , (byteT*)&sadamP.pStrike->sc.sfDad , sizeof sfwd ) ;
    
            winPulpOldC& winPulp = *(winPulpOldC*)x1.pPulp ;

            winPulp.stqr_strokingFrame << (byteT*)&sfwd ;
            winPulp.stqr_strokingFrame << (byteT*)&sfw ;
            winPulp.cacheF( tinP , scOld_mmFRAME ) ;
            winPulp.positionPaperBackF( tinP ) ;
    
            const flagsT flHighSave = sadamP.pStrike->sc.flagsHighlighted ;
            if( F(flHighSave) ) sadamHighlightF( tinP , sadamP , flHighSave ) ;
    
            //ERASE OLD
            const flagsT _saveModeI = tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
            const flagsT _saveMode  = winPulp.flagsMode ;
            tinP.pAdamGlobal1->_pulpOldC_.flagsMode |= flPAPERmODEi_SUPPRESStABfRESH ;
            winPulp.x1.back.wrapRenderF( tinP , sadamP.features.psttBody , phCloneP ) ;
            renderVolatilesF( tinP , sadamP , phCloneP ) ;
            winPulp.flagsMode = _saveMode ;

            sadamP.pStrike->sc.sfDad.mIdCol += mDeltaCol ;
            sadamP.pStrike->sc.sfDad.mIdRow += mDeltaRow ;

            strokingFrameS& sf  = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 ] ; //U::WHAT ABOUT NONDEFAULT OFFSET
            strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 ] ; //U::WHAT ABOUT NONDEFAULT OFFSETS
            thirdC::c_memcpyIF( tinP , (byteT*)&sf  , (byteT*)&sadamP.pStrike->sc.sf    , sizeof sf ) ;
            thirdC::c_memcpyIF( tinP , (byteT*)&sfd , (byteT*)&sadamP.pStrike->sc.sfDad , sizeof sfd ) ;

            sadamP.pStrike->sc.sf.mIdCol = sf.mIdCol = mIdColMoveTo ;
            sadamP.pStrike->sc.sf.mIdRow = sf.mIdRow = mIdRowMoveTo ;
            sadamP.pStrike->sc.mIdColHot += mDeltaCol ;
            sadamP.pStrike->sc.mIdRowHot += mDeltaRow ;
            winPulp.cacheF( tinP , scOld_mmFRAME ) ;
            winPulp.positionPaperBackF( tinP ) ;
    
            //DRAW NEW
            winPulp.x1.back.wrapRenderF( tinP , sadamP.features.psttBody , phCloneP ) ;
            renderVolatilesF( tinP , sadamP , phCloneP ) ;
            tinP.pAdamGlobal1->_pulpOldC_.flagsMode = _saveModeI ;

            if( F(flHighSave) ) sadamHighlightF( tinP , sadamP , flHighSave ) ;
    
            {
                strokingFrameS sf ;
                byteT* pbsf = (byteT*)&sf ;
                winPulp.stqr_strokingFrame >> pbsf ;
                winPulp.stqr_strokingFrame >> pbsf ;
                winPulp.cacheF( tinP , saOLD_POPfRAME ) ;
                winPulp.positionPaperBackF( tinP ) ;
            }
    
            if( F(sadamP.features.fc.flagsFlyoverHighlight) & flFEATUREsADAMfLYOVERhIGHLIGHT_EXISTS && !( F(sadamP.pStrike->sc.flags) & flSTRIKEs_DRAG ) )
            {
                sCountT idCol = winPulp.x1.back.rowBack.ro.pcToolState_12[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] ;
                sCountT idRow = winPulp.x1.back.rowBack.ro.pcToolState_22[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] ;
                boolT bIn =
                (
                    idCol >= R( sadamP.pStrike->sc.mIdColHot )                                   &&
                    idCol <= R( sadamP.pStrike->sc.mIdColHot ) - 1.0 + R( sadamP.pStrike->sc.mColsHot ) &&
                    idRow >= R( sadamP.pStrike->sc.mIdRowHot )                                   &&
                    idRow <= R( sadamP.pStrike->sc.mIdRowHot ) - 1.0 + R( sadamP.pStrike->sc.mRowsHot )
                )
                ;

                const boolT bFlyOld = F(sadamP.pStrike->sc.flags) & flSTRIKEs_FLY ;
                if( bIn ) sadamP.pStrike->sc.flags |= flSTRIKEs_FLY ;
                else      sadamP.pStrike->sc.flags &= ~( F(flSTRIKEs_FLY) ) ;
                if( !( F(sadamP.pStrike->sc.flags) & flSTRIKEs_FLY ) != !bFlyOld ) sadamHighlightF( tinP , sadamP , flSADAMhIGHLIGHT_FLYOVER ) ;
            }

            sadamP.pStrike->sc.mColsMoved += mDeltaCol ;
            sadamP.pStrike->sc.mRowsMoved += mDeltaRow ;
            //LOGrAW7( "moveGlyphF [idAdam,mColsMoved,mRowsMoved]: " , sadamP.features.fc.idAdam , " " , sadamP.pStrike->sc.mColsMoved , " " , sadamP.pStrike->sc.mRowsMoved , "\r\n" ) ;
        }
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090007.paperoldc.moveglyphf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090009.paperoldc.flushf BEGIN
#define DDNAME       "3func.36090009.paperoldc.flushf"
#define DDNUMB      (countT)0x36090009
#define IDFILE      (countT)0x12bb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::flushF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    x1.pPulp->x1.back.backFlushF( tinP , *x1.pPulp ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090009.paperoldc.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000a.paperoldc.rendervolatilesf BEGIN
#define DDNAME       "3func.3609000a.paperoldc.rendervolatilesf"
#define DDNUMB      (countT)0x3609000a
#define IDFILE      (countT)0x12bc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::renderVolatilesF( tinS& tinP , sadamC& sadamP , const handleC* const phCloneP , const flagsT flagsP , vBodyS* const pvbP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    winPulpOldC& winPulp = *(winPulpOldC*)x1.pPulp ;
    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
    {
        strokingFrameS sfw ;
        thirdC::c_memcpyIF( tinP , (byteT*)&sfw , (byteT*)&sadamP.pStrike->sc.sf , sizeof sfw ) ;
        sfw.bWrap = 0 ;

        winPulp.stqr_strokingFrame << (byteT*)&sfw ;
        winPulp.cacheF( tinP , scOld_mmFRAME ) ;
        winPulp.positionPaperBackF( tinP ) ;

        //CODEsYNC: 0b50005 0b50007
        if( F(flagsP) & flSTRIKEvOLATILE_LOADpOSITION )
        {
            sadamP.pStrike->sc.mIdColHotVolatileBodyRendered             = sadamP.pStrike->sc.mIdColHot             ;
            sadamP.pStrike->sc.mIdRowHotVolatileBodyRendered             = sadamP.pStrike->sc.mIdRowHot             ;
            sadamP.pStrike->sc.mColsHotVolatileBodyRendered              = sadamP.pStrike->sc.mColsHot              ;
            sadamP.pStrike->sc.mRowsHotVolatileBodyRendered              = sadamP.pStrike->sc.mRowsHot              ;
            sadamP.pStrike->sc.mColsMarginSadamFrameVolatileBodyRendered = sadamP.pStrike->sc.mColsMarginSadamFrame ;
            sadamP.pStrike->sc.mRowsMarginSadamFrameVolatileBodyRendered = sadamP.pStrike->sc.mRowsMarginSadamFrame ;
        }

        mColRowMinMaxS crmm ;
        crmm.mColMin = sadamP.pStrike->sc.mIdColHotVolatileBodyRendered ;
        crmm.mColMax = sadamP.pStrike->sc.mIdColHotVolatileBodyRendered - 1.0 + sadamP.pStrike->sc.mColsHotVolatileBodyRendered ;
        crmm.mRowMin = sadamP.pStrike->sc.mIdRowHotVolatileBodyRendered ;
        crmm.mRowMax = sadamP.pStrike->sc.mIdRowHotVolatileBodyRendered - 1.0 + sadamP.pStrike->sc.mRowsHotVolatileBodyRendered ;
        if( F(sadamP.features.fc.flagsFrame) & flFEATUREsADAMfRAME_EXISTS )
        {
            crmm.mColMin +=   1.0 + sadamP.pStrike->sc.mColsMarginSadamFrameVolatileBodyRendered ;
            crmm.mColMax += - 1.0 - sadamP.pStrike->sc.mColsMarginSadamFrameVolatileBodyRendered ;
            crmm.mRowMin +=   1.0 + sadamP.pStrike->sc.mRowsMarginSadamFrameVolatileBodyRendered ;
            crmm.mRowMax += - 1.0 - sadamP.pStrike->sc.mRowsMarginSadamFrameVolatileBodyRendered ;
        }

        if( pvbP ) renderVolatileF( tinP , *pvbP , crmm , flagsP , phCloneP ) ;
        else
        {
            countT cFlavors = sadamP.features.pswVolBody->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                sadamP.features.cLeverVolBody = sadamP.features.pswVolBody->leverF( tinP , idf ) ;
                vBodyS& vb = *(vBodyS*)&(countT&)*sadamP.features.pswVolBody ;
                renderVolatileF( tinP , vb , crmm , flagsP , phCloneP ) ;
            }
        }
    
        {
            strokingFrameS sf ;
            byteT* pbsf = (byteT*)&sf ;
            winPulp.stqr_strokingFrame >> pbsf ;
            winPulp.cacheF( tinP , saOLD_POPfRAME ) ;
            winPulp.positionPaperBackF( tinP ) ;
        }
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000a.paperoldc.rendervolatilesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000b.paperoldc.eraseglyphf BEGIN
#define DDNAME       "3func.3609000b.paperoldc.eraseglyphf"
#define DDNUMB      (countT)0x3609000b
#define IDFILE      (countT)0x12bd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::eraseGlyphF( tinS& tinP , sadamC& sadamP , const countT idEventP , const handleC* const phCloneP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& winPulp = *(winPulpOldC*)x1.pPulp ;
    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
    {
        if( F(sadamP.flags) & flSADAMc_OWNtAB )
        {
            sadamsC::pSadamsIF( tinP )->tabFreshF( tinP , ether , ifcIDtYPEtABfRESH_RIGHT ) ;
            if( F(sadamP.features.fc.flagsAdam) & flFEATUREsADAMaDAM_TABhEREsUPPRESSEShOTkEYS ) backOldC::setModeFlagsIF( tinP , flPAPERbACKmODE_null , flPAPERbACKmODE_SUPPRESShOTkEYS ) ;
        }

        if( F(sadamP.features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && sadamP.features.fc.pSadamEraseCBF )
        {
            _IO_
            (*sadamP.features.fc.pSadamEraseCBF)( tinP , ether , ifcIDtYPEsTROKEcALLbACK_ERASE , idEventP , 0 , sadamP ) ;
        }

        //ERASE GLYPH
        {
            //TN( tSay , "" ) ; tSay = T("sadamC::doF erasure/+/idAdam,b OwnTab,b TabWasHere: ")+TF1(sadamP.features.fc.idAdam)+T(" ")+TF1(F(sadamP.flags)&flSADAMc_OWNtAB)+T(" ")+TF1(F(sadamP.flags)&flSADAMc_TABwAShERE)+T("\r\n") ;
            //LOGrAW( tSay ) ; //U::

            strokingFrameS sfw ;
            thirdC::c_memcpyIF( tinP , (byteT*)&sfw , (byteT*)&sadamP.pStrike->sc.sf , sizeof sfw ) ;
            sfw.bWrap = 0 ;

            winPulp.stqr_strokingFrame << (byteT*)&sfw ;
            winPulp.cacheF( tinP , scOld_mmFRAME ) ;
            winPulp.positionPaperBackF( tinP ) ;
        
            if( F(sadamP.pStrike->sc.flagsHighlighted) ) sadamHighlightF( tinP , sadamP , sadamP.pStrike->sc.flagsHighlighted ) ;
    
            const flagsT _saveMode = winPulp.flagsMode ;
            winPulp.x1.back.wrapRenderF( tinP , sadamP.features.psttBody , phCloneP ) ;
            renderVolatilesF( tinP , sadamP , phCloneP ) ;
            winPulp.flagsMode = _saveMode ;
    
            {
                strokingFrameS sf ;
                byteT* pbsf = (byteT*)&sf ;
                winPulp.stqr_strokingFrame >> pbsf ;
                winPulp.cacheF( tinP , saOLD_POPfRAME ) ;
                winPulp.positionPaperBackF( tinP ) ;
            }
    
            //TN( tSay , "" ) ; tSay = T("sadamC::doF erasure/-/idAdam,b OwnTab,b TabWasHere: ")+TF1(sadamP.features.fc.idAdam)+T(" ")+TF1(F(sadamP.flags)&flSADAMc_OWNtAB)+T(" ")+TF1(F(sadamP.flags)&flSADAMc_TABwAShERE)+T("\r\n") ;
            //LOGrAW( tSay ) ; //U::
        }
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000b.paperoldc.eraseglyphf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000c.paperoldc.hotkeyf BEGIN
#define DDNAME       "3func.3609000c.paperoldc.hotkeyf"
#define DDNUMB      (countT)0x3609000c
#define IDFILE      (countT)0x12be


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const countT& paperOldC::hotKeyF( tinS& tinP , strokeS* const psttlBodyP )/*1*/
{
    static countT cnu ;
    countT* pchk = &cnu ;

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( tinP.pAdamGlobal1->_paperOldC_.pSwHotKey )
    {
        tinP.pAdamGlobal1->_paperOldC_.psttlBody = psttlBodyP ;
        pchk = &(countT&)*tinP.pAdamGlobal1->_paperOldC_.pSwHotKey ;
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    return *pchk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000c.paperoldc.hotkeyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000d.paperoldc.bhotkeyexistsf BEGIN
#define DDNAME       "3func.3609000d.paperoldc.bhotkeyexistsf"
#define DDNUMB      (countT)0x3609000d
#define IDFILE      (countT)0x12bf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT paperOldC::bHotKeyExistsF( tinS& tinP , const strokeS* const psttlBodyP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bExists = tinP.pAdamGlobal1->_paperOldC_.pSwHotKey && !!tinP.pAdamGlobal1->_paperOldC_.pSwHotKey->idSlotOfLeverF( tinP , (countT)psttlBodyP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    return bExists ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000d.paperoldc.bhotkeyexistsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000e.paperoldc.assignhotkeyf BEGIN
#define DDNAME       "3func.3609000e.paperoldc.assignhotkeyf"
#define DDNUMB      (countT)0x3609000e
#define IDFILE      (countT)0x12c0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::KLUDGE: IF bBigitP IS -1 THEN FORGET ABOUT BIGITS AND ASSIGN ANY AVAILABLE KEY

/*1*/countT paperOldC::assignHotKeyF( tinS& tinP , strokeS* const psttlBodyP , const boolT bBigitP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    ZE( countT , idToolAssigned ) ;
    {
        //ZE( stackC* , pStka ) ; //"a":"available"
        //ether( tinP , pStka , TAG( TAGiDnULL ) , flSTACKc_null , ifcSTACKtYPE_countT ) ;
        boolT pAvail[ ifcIDtYPEtOOL_end - ifcIDtYPEtOOL_begin - 1 ] ; //end AND begin ARE EXCLUDED
        thirdC::c_memsetIF( tinP , (byteT*)pAvail , sizeof pAvail ) ;
        //if( pStka )
        {
            for( countT idt = ifcIDtYPEtOOL_end - 1 ; idt > ifcIDtYPEtOOL_begin ; idt -- )
            {
                countT offt = idt - ifcIDtYPEtOOL_begin - 1 ;

                if( bBigitP == - 1 ) pAvail[ offt ] ++ ;
                else
                {
                    ZE( boolT , bBigitTool ) ;
                    switch( idt )
                    {
                        case ifcIDtYPEtOOL_Z : // Ze
                        case ifcIDtYPEtOOL_W : // Wo
                        case ifcIDtYPEtOOL_O : // Oo
                        case ifcIDtYPEtOOL_R : // Re
                        case ifcIDtYPEtOOL_F : // Fo
                        case ifcIDtYPEtOOL_I : // fI
                        case ifcIDtYPEtOOL_S : // Se
                        case ifcIDtYPEtOOL_V : // Ve
                        case ifcIDtYPEtOOL_T : // Ta
                        case ifcIDtYPEtOOL_N : // Ni
                        case ifcIDtYPEtOOL_A : // Ay
                        case ifcIDtYPEtOOL_B : // Be
                        case ifcIDtYPEtOOL_C : // Ce
                        case ifcIDtYPEtOOL_D : // De
                        case ifcIDtYPEtOOL_E : // Ee
                        case ifcIDtYPEtOOL_U : // fU
                        {
                            bBigitTool = 1 ;
                            break ;
                        }
                    }
        
                    if( bBigitP )
                    {
                        if( bBigitTool )
                        {
                            //pStka->sinkF( tinP , countTC() , idt ) ;
                            pAvail[ offt ] ++ ;                             //INCREMENT RATHER THAN "= 1" IS DONE BECAUSE INCREMENT IS FASTER
                        }
                    }
                    else
                    {
                        if( !bBigitTool )
                        {
                            //pStka->sinkF( tinP , countTC() , idt ) ;
                            pAvail[ offt ] ++ ;
                        }
                    }
                }
            }
    
            if( tinP.pAdamGlobal1->_paperOldC_.pSwHotKey )
            {
                {
                    countT cFlavors = tinP.pAdamGlobal1->_paperOldC_.pSwHotKey->cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        tinP.pAdamGlobal1->_paperOldC_.psttlBody = (strokeS*)tinP.pAdamGlobal1->_paperOldC_.pSwHotKey->leverF( tinP , idf ) ;
                        countT idt = *tinP.pAdamGlobal1->_paperOldC_.pSwHotKey ;
                        countT offt = idt - ifcIDtYPEtOOL_begin - 1 ;

                        //if( idt && (*pStka)( idt ) ) pStka->extractF( 0 , tinP , 0 ) ;
                        if( idt && pAvail[ offt ] ) pAvail[ offt ] -- ;                             //DECREMENT RATHER THAN "= 0" IS DONE BECAUSE DECREMENT IS FASTER
                    }
                }
            
                countT   csttlBody = psttlBodyP->idAdam ;
                for( countT ids = 1 ; ids <= csttlBody ; ids ++ )
                {
                    countT idt = psttlBodyP[ CSpREFIX - 1 + ids ].idToolF( tinP ) ;
                    countT offt = idt - ifcIDtYPEtOOL_begin - 1 ;
                    if( idt <= ifcIDtYPEtOOL_begin || idt >= ifcIDtYPEtOOL_end ) continue ;
            
                    //if( (*pStka)( idt ) )
                    if( pAvail[ offt ] )
                    {
                        tinP.pAdamGlobal1->_paperOldC_.psttlBody = psttlBodyP ;
                        idToolAssigned = *tinP.pAdamGlobal1->_paperOldC_.pSwHotKey = idt ;
                        break ;
                    }
                }
            }
        }
        //ether( tinP , pStka ) ;
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    return idToolAssigned ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000e.paperoldc.assignhotkeyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000f.paperoldc.makeframedsadambodyf BEGIN
#define DDNAME       "3func.3609000f.paperoldc.makeframedsadambodyf"
#define DDNUMB      (countT)0x3609000f
#define IDFILE      (countT)0x12c1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::makeFramedSadamBodyF( tinS& tinP , strokeS*& psttFramedP , sadamC& sadamP , const strokeS* const psttBodyP , const countT cFrameNestDownP , const countT cFrameNestLeftP , const countT cFrameNestUpP , const countT cFrameNestRightP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( psttFramedP ) ;
        if( POOP ) return ;
    }

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    sadamP.pStrike->sc.mColsMarginSadamFrame = x1.pPulp->rCache.mColsMarginSadamFrame ;
    sadamP.pStrike->sc.mRowsMarginSadamFrame = x1.pPulp->rCache.mRowsMarginSadamFrame ;
    
    measureT mColsEach = 1.0 + sadamP.pStrike->sc.mColsMarginSadamFrame ;
    measureT mRowsEach = 1.0 + sadamP.pStrike->sc.mRowsMarginSadamFrame ;

    measureT mColsLeft  = mColsEach * ( 1 + cFrameNestLeftP  ) ;
    measureT mRowsDown  = mRowsEach * ( 1 + cFrameNestDownP  ) ;

    measureT mColsRight = mColsEach * ( 1 + cFrameNestRightP ) ;
    measureT mRowsUp    = mRowsEach * ( 1 + cFrameNestUpP    ) ;

    measureT mColsHot  = sadamP.pStrike->sc.mColsHot + mColsLeft + mColsRight ;
    measureT mRowsHot  = sadamP.pStrike->sc.mRowsHot + mRowsDown + mRowsUp    ;

    const strokingFrameS& sf = sadamP.pStrike->sc.pPaper->sfF( tinP , 0 ) ;
    measureT mColsToHot = sadamP.pStrike->sc.mIdColHot - sf.mIdCol ; // FOR GLYPHS SUCH AS 'i', THE HOT AREA IS AT AN OFFSET UPWARD AND RIGHTWARD FROM THE LOWER LEFT CORNER OF THE STROKING FRAME
    measureT mRowsToHot = sadamP.pStrike->sc.mIdRowHot - sf.mIdRow ;

    sadamP.pStrike->sc.mIdColHot -= mColsLeft ;
    sadamP.pStrike->sc.mIdRowHot -= mRowsDown ;
    sadamP.pStrike->sc.mColsHot   = mColsHot  ;
    sadamP.pStrike->sc.mRowsHot   = mRowsHot  ;

    //TN( tSay , "" ) ; tSay = T("RENDER 2: set sadamP.pStrike->sc.mIdRowHot to ")+TF1(sadamP.pStrike->sc.mIdRowHot)+T("\r\n") ;
    //LOGrAW( tSay ) ; //U::
 
    //tSay = TF1(sadamP.features.fc.idAdam)+T(": HOT RECTANGLE COLUMNS: ")+TF1(sadamP.pStrike->sc.mIdColHot)+T(" for ")+TF1(sadamP.pStrike->sc.mColsHot)+T(" cols\r\n") ;
    //LOGrAW( tSay ) ;

    ether.strMakeF( tinP , LF , psttFramedP , 0 , psttBodyP->idAdam + 0x27 ) ; ___( psttFramedP ) ;
    sadamP.pStrike->sc.cSidesFrame = CpOLYGONsIDESdEFAULT * ( psttBodyP->idAdam ? psttBodyP->idAdam : 1 ) ;

    boolT bPee = !!( F(sadamP.features.fc.flagsFrame) & flFEATUREsADAMfRAME_PEEoN ) ;


                                                          //                                      +TARGETfRAME
                                                          //                                      |       +COPYoFtARGETfRAME
                                                          //                                      |       |   +ENCLOSUREfRAME
                                                          //                                      |       |   |
                                                          //RELATIVE FRAME (0 IS CURRENT):        ?   ?   0   1
                                                          ether.strFuseF( tinP , psttFramedP ,    S2(0,scOld_FRAMEdETACH) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,    S3(0.0,scOld_mmMOVEtO,0.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,    S3(1.0,scOld_mmFRAMEtO,1.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,        S2(0,scOld_POPfRAMEdETACH) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(0,scOld_cPUSHoFFfRAME) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(0,scOld_PUSHoVERRIDEcOLrOW) ) ;                                        //AAAA+  (POSITION BEFORE RENDERING BODY)
                                                          ether.strFuseF( tinP , psttFramedP ,            psttBodyP ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(0,scOld_PUSHoVERRIDEcOLrOW) ) ;                                        //BBBB+  (POSITION AFTER RENDERING BODY)
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(2,scOld_cOVERRIDEnEXTsTROKE) ) ;                                       //AAAA
                                                          ether.strFuseF( tinP , psttFramedP ,            S3(0.0,scOld_mmMOVEpELtO,0.0) ) ;                                         //MOVE TO LOWER LEFT CORNER OF FRAME
                                                          ether.strFuseF( tinP , psttFramedP ,            S3(mColsToHot-mColsLeft,scOld_mmMOVEpEL,mRowsToHot-mRowsDown) ) ;                             //MOVE TO LOWER LEFT CORNER OF FRAME
                                                          ether.strFuseF( tinP , psttFramedP ,            S3(mColsHot-1.0,scOld_mmFRAMEpEL,mRowsHot-1.0) ) ;                        //FRAME TO WHERE I WANT THE FRAME RECTANGLE TO BE
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_FRAMEdETACH) ) ;
    if( !bPee )
    {
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_cPUSHrIPPLES) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_PUSHrIPPLESoNLYoN) ) ;
    }
    if( !( sadamP.features.fc.rgbFrame & 0xff000000 ) )
    {
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(sadamP.features.fc.rgbFrame,scOld_cPUSHcOLOR) ) ;
    }
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(sadamP.pStrike->sc.cSidesFrame,scOld_cPUSHsIDES) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S3(0.0,scOld_mmMOVEtO,0.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S3(1.0,scOld_mmLINEtO,0.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S3(1.0,scOld_mmLINEtO,1.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S3(0.0,scOld_mmLINEtO,1.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S3(0.0,scOld_mmLINEtO,0.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_POPsIDES) ) ;
    if( !( sadamP.features.fc.rgbFrame & 0xff000000 ) )
    {
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_POPcOLOR) ) ;
    }
    if( !bPee )
    {
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_POPrIPPLESoNLYoFFoN) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_POPrIPPLES) ) ;
    }
                                                          ether.strFuseF( tinP , psttFramedP ,                S2(0,scOld_POPfRAMEdETACH) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(0,scOld_POPfRAME) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,            S2(0,scOld_POPoFFfRAME) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,        S2(0,scOld_POPfRAME) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,    S2(0,scOld_cOVERRIDEnEXTsTROKE) ) ;                                           //BBBB-
                                                          ether.strFuseF( tinP , psttFramedP ,    S3(0.0,scOld_mmMOVEpELtO,0.0) ) ;
                                                          ether.strFuseF( tinP , psttFramedP ,    S2(0,scOld_POPrENDERsTROKEoVERRIDE) ) ;                                       //AAAA-


    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.3609000f.paperoldc.makeframedsadambodyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090010.paperoldc.sff BEGIN
#define DDNAME       "3func.36090010.paperoldc.sff"
#define DDNUMB      (countT)0x36090010
#define IDFILE      (countT)0x12c2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const strokingFrameS& paperOldC::sfF( tinS& tinP , const boolT bDadP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    const strokingFrameS* const psf = bDadP
        ? (strokingFrameS*)&x1.pPulp->stqr_strokingFrame[ 2 + x1.pPulp->rCache.offFrame + x1.pPulp->rCache.offFrameWrap ]
        : (strokingFrameS*)&x1.pPulp->stqr_strokingFrame[ 1 + x1.pPulp->rCache.offFrame                               ]
    ;

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    if( !psf ) { BLAMMO ; }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    return *psf ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090010.paperoldc.sff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090011.paperoldc.bshowf BEGIN
#define DDNAME       "3func.36090011.paperoldc.bshowf"
#define DDNUMB      (countT)0x36090011
#define IDFILE      (countT)0x12c3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT paperOldC::bShowF( tinS& tinP ) const/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bYes = this == &x1.pPulp->x1.back.selectPaperF( tinP , ifcIDcMDpAPERsELECT_QUERYrENDER ) ; //U:: WORKAROUND SO SADAMS, WHICH ARE STROKED ONTO DRAW PAPER, RESPOND TO KEYSTROKES; NECESSARY UNTIL DRAW/SHOW/OVERRIDEdRAW IS REDESIGNED
    //U::DESIRED SEMANTICS: boolT bYes = this == &x1.pPulp->x1.back.selectPaperF( tinP , ifcIDcMDpAPERsELECT_QUERYsHOW ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090011.paperoldc.bshowf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090023.paperoldc.rendervolatilef BEGIN
#define DDNAME       "3func.36090023.paperoldc.rendervolatilef"
#define DDNUMB      (countT)0x36090023
#define IDFILE      (countT)0x12c4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::renderVolatileF( tinS& tinP , vBodyS& vbP , const mColRowMinMaxS& crmmP , const flagsT flagsP , const handleC* const phCloneP )/*1*/
{
    if( !( F(vbP.flags) & flVbODYs_STALEeRASED ) )
    {
        if( F(flagsP) & flSTRIKEvOLATILE_LOADsPEC )
        {
            ether.delF( tinP , vbP.psttDone ) ;
            if( vbP.zBaton_ppsttSpec ) vbP.zBaton_ppsttSpec->grabF( tinP , TAG( TAGiDnULL ) ) ;
            ether.strMakeF( tinP , LF , vbP.psttDone , *vbP.ppsttSpec ) ; ___( vbP.psttDone ) ;
            if( vbP.zBaton_ppsttSpec ) vbP.zBaton_ppsttSpec->ungrabF( tinP ) ;
        }
    
        TN( tSayV , "" ) ; tSayV =
        
            T("")+
            S2(0,scOld_FRAMEdETACH)+
            S3(crmmP.mColMin,scOld_mmMOVEpELtO,crmmP.mRowMin)+
            S2(0,scOld_POPfRAMEdETACH)+
            S3(crmmP.mColMax,scOld_mmFRAMEpELtO,crmmP.mRowMax)+
            T(vbP.psttDone)+
            S2(0,scOld_POPfRAME)
                        
        ;
    
        winPulpOldC& winPulp = *(winPulpOldC*)x1.pPulp ;
        winPulp.x1.back.wrapRenderF( tinP , tSayV , phCloneP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090023.paperoldc.rendervolatilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090024.paperoldc.purgef BEGIN
#define DDNAME       "3func.36090024.paperoldc.purgef"
#define DDNUMB      (countT)0x36090024
#define IDFILE      (countT)0x12c5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::purgeF( tinS& tinP , const flagsT flagsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    x1.pPulp->purgeF( tinP , ether , flagsP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090024.paperoldc.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090026.paperoldc.banimatedf BEGIN
#define DDNAME       "3func.36090026.paperoldc.banimatedf"
#define DDNUMB      (countT)0x36090026
#define IDFILE      (countT)0x12c6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT paperOldC::bAnimatedF( tinS& tinP )/*1*/
{
    return !!tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36090* : 3func.36090026.paperoldc.banimatedf END
