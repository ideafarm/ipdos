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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115002.sadamc.dt_sadamc BEGIN
#define DDNAME       "3func.36115002.sadamc.dt_sadamc"
#define DDNUMB      (countT)0x36115002
#define IDFILE      (countT)0x14be


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamC::~sadamC( voidT )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( POOP ) return ;
        if( POOP ) return ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115002.sadamc.dt_sadamc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115003.sadamc.sadamc BEGIN
#define DDNAME       "3func.36115003.sadamc.sadamc"
#define DDNUMB      (countT)0x36115003
#define IDFILE      (countT)0x14bf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamC::sadamC( tinS& tinP , const countT idAdamP , soulC*& psFeaturesP ) :/*1*/
neverZe( NEVERzE ) ,
zap_neverZe( (byteT*)&neverZe , sizeof neverZe , flZAP_DT ) ,
features( tinP , idAdamP , psFeaturesP ) ,
flags( flSADAMc_null ) ,
cLocked( 0 ) ,
pStrike( 0 ) ,
cRefStroke( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( neverZe ) ;
        if( POOP ) return ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115003.sadamc.sadamc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115004.sadamc.sadamc BEGIN
#define DDNAME       "3func.36115004.sadamc.sadamc"
#define DDNUMB      (countT)0x36115004
#define IDFILE      (countT)0x14c0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamC::sadamC( sadamC& sP ) :/*1*/
zap_neverZe( (byteT*)&neverZe , sizeof neverZe , flZAP_DT ) ,
features( sP.features ) ,
flags( flSADAMc_null ) ,
cRefStroke( sP.cRefStroke )
{
    if( sP.neverZe != NEVERzE ) { BLAMMO ; }
    else
    {
        neverZe = NEVERzE ;
        cLocked   = 0 ;

        if( !sP.pStrike ) pStrike = 0 ;
        else
        {
            TINSL
            pStrike = new( 0 , tinP , pbStrike , sizeof pbStrike ) strikeS( tinP ) ;
            *pStrike = *sP.pStrike ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115004.sadamc.sadamc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115005.sadamc.dof BEGIN
#define DDNAME       "3func.36115005.sadamc.dof"
#define DDNUMB      (countT)0x36115005
#define IDFILE      (countT)0x14c1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//THIS COMMENT MIGHT BE OBSOLETE NOW THAT s adamStateOldS::do CBF -> sadamC::doF
//THE UNDERSCORE PREVENTS COLLISION WITH A CALLBACK FUNCTION SPECIFIED AS A SADAM FEATURE
//IF "doF" IS SPECIFIED AS A SADAM FEATURE, IT WILL NOT BE FOUND IN THE ADAM DLL BECAUSE THE NAME CONFLICTS WITH THE ENTRY POINT EXPORTED BY THE BASE DLL (THIS MODULE)

/*1*/boolT sadamC::doF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const handleC* const phCloneP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_


    const osTextT* postIdType = processGlobal3S::_processGlobal3I_IF().mapSadamCall( idTypeCallP ) ;

    //U::
    //static countT idInLath ;
    //countT idIn = 1 + incv02AM( idInLath ) ;
    //if( idTypeCallP != ifcIDtYPEsTROKEcALLbACK_ANIMATE && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_MOUSE && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGING && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGED && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_TABaRRIVING && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_TABlEAVING )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTA(  ostoSay , tinP.postThreadName ) ;
    //    OStEXTAK( ostoSay , " | doF/" ) ;
    //    OStEXTA(  ostoSay , postIdType ) ;
    //    OStEXTAK( ostoSay , "/+ [idIn]: " ) ;
    //    OStEXTC(  ostoSay , idIn , 0 ) ;
    //    OStEXTAK( ostoSay , " +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\n" ) ;
    //    LOGrAW( ostoSay ) ;
    //}

    paperOldC::grabIF( tinP , TAG( TAGiDnULL ) ) ; //U::TO FIND A BUG

    //tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //const boolT bGoItStrike = idTypeCallP == ifcIDtYPEsTROKEcALLbACK_STRIKE || idTypeCallP == ifcIDtYPEsTROKEcALLbACK_DESTROY ;
    //if( bGoItStrike ) tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    //if( !thirdC::c_strcmpIF( tinP , features.fc.postOldComment , "vtTest" ) && !etherC::ether_cUtility_IF( tinP ) )
    //{
    //    if( idTypeCallP != ifcIDtYPEsTROKEcALLbACK_ANIMATE ) { LOGrAWtID( T("vtTest: idAdam ")+TF1(features.fc.idAdam)+T(" \"")+T(processGlobal3I.mapSadamCall(idTypeCallP))+T("\"") ) ; }
    //}

    //if( idTypeCallP != ifcIDtYPEsTROKEcALLbACK_ANIMATE ) { TN( tSay , "" ) ; tSay = T("idAdam ")+TF1(features.fc.idAdam)+T(" \"")+T(processGlobal3I.mapSadamCall(idTypeCallP))+T("\"\r\n") ; LOGrAW( tSay ) ; }

    ZE( boolT , bStrikeKilled ) ;
    ZE( boolT , bDeleteStrike ) ;

    if( idTypeCallP == ifcIDtYPEsTROKEcALLbACK_STRIKE && pStrike ) pStrike->sc.pPaper->eraseGlyphF( tinP , *this , idEventP , phCloneP ) ;

    if( pStrike && F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamPrologCBF )
    {
        _IO_
        (*features.fc.pSadamPrologCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
    }

    //if
    //(
    //    idTypeCallP != ifcIDtYPEsTROKEcALLbACK_ANIMATE  &&
    //    idTypeCallP != ifcIDtYPEsTROKEcALLbACK_KEYBOARD  &&
    //    idTypeCallP != ifcIDtYPEsTROKEcALLbACK_MOUSE
    //)
    //{
    //    TN( tSay , "" ) ; tSay = T("doF (idAdam,postOldComment,idTypeCall,idAdam,b OwnTab,b TabWasHere: ")+TF1(features.fc.idAdam)+T(processGlobal3I.mapSadamCall(idTypeCallP))+T(" \"")+T(pStrike?features.fc.postOldComment:"")+T("\" ")+TF1(pStrike?F(flags)&flSADAMc_OWNtAB:0)+T(" ")+TF1(F(flags)&flSADAMc_TABwAShERE)+T("\r\n") ;
    //    LOGrAW( tSay ) ; //U::
    //}

    ZE( boolT , bHandled ) ;
    switch( idTypeCallP )
    {
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE1 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE2 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE3 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE4 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE5 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE6 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE7 :
        case ifcIDtYPEsTROKEcALLbACK_FORaDAMtOUSE8 :
        {
            if( features.fc.idIntercom && features.fc.pSadamIntercomCBF )
            {
                _IO_
                (*features.fc.pSadamIntercomCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
            }
            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_DESTROY :
        {
            //if( &w P.papers.selectF( tinP , ifcIDcMDpAPERsELECT_QUERYrENDER ) == pStrike->sc.pPaper )
            {
                //TN( tSay , "" ) ; tSay = T("doF destroy/+/idAdam,b OwnTab,b TabWasHere: \"")+T(pStrike?features.fc.postOldComment:"")+T("\" ")+TF1(F(flags)&flSADAMc_OWNtAB)+T(" ")+TF1(F(flags)&flSADAMc_TABwAShERE)+T("\r\n") ;
                //LOGrAW( tSay ) ; //U::
                if( !( F(flags) & flSADAMc_DESTROYED ) ) //I WILL NORMALLY BE CALLED OO TIMES BECAUSE THE APP WILL HAVE OO REFERENCES TO ME; BAD STYLE APP MIGHT HAVE AN ARBITRARY NUMBER OF REFERENCES TO ME
                {
                    flags |= flSADAMc_DESTROYED ;

                    //LOGrAW3( "destroyed [idAdam]: " , features.fc.idAdam , "\r\n" ) ;
    
                    if( pStrike )
                    {
                        if( F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamBeforeDestroyCBF ) (*features.fc.pSadamBeforeDestroyCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
            
                        if( F(flags) & flSADAMc_OWNtAB && F(features.fc.flagsAdam) & flFEATUREsADAMaDAM_TABhEREsUPPRESSEShOTkEYS ) backOldC::setModeFlagsIF( tinP , flPAPERbACKmODE_null , flPAPERbACKmODE_SUPPRESShOTkEYS ) ;
    
                        //CODEsYNC: PSEUDOdUPLICATE CODE 0b50007 0b50007
                        if( F(pStrike->sc.flags) & flSTRIKEs_AWAKE )
                        {
                            pStrike->sc.flags &= ~( F(flSTRIKEs_AWAKE) ) ;
                            bStrikeKilled = 1 ;
                            if( features.fc.pSadamAnimateCBF ) (*features.fc.pSadamAnimateCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_SLEEP , idEventP , pcNotesP , *this ) ;
                        }
            
                        if( features.fc.pSadamAnimateCBF ) (*features.fc.pSadamAnimateCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;

                        //LOGrAW( "DESTROY: zapping my sadamState structure\r\n" ) ;
                        bDeleteStrike = 1 ;
                    }
                }

                //TN( tSay , "" ) ; tSay = T("doF destroy/-/idAdam,b OwnTab,b TabWasHere: ")+TF1(features.fc.idAdam)+T(" ")+TF1(F(flags)&flSADAMc_OWNtAB)+T(" ")+TF1(F(flags)&flSADAMc_TABwAShERE)+T("\r\n") ;
                //LOGrAW( tSay ) ; //U::
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_WAKE :
        {
            if( F(features.fc.flagsFlyoverHighlight) & flFEATUREsADAMfLYOVERhIGHLIGHT_EXISTS && !( F(pStrike->sc.flags) & flSTRIKEs_DRAG ) )
            {
                sCountT idCol = pStrike->sc.pPaper->rowBackF().ro.pcToolState_12[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] ;
                sCountT idRow = pStrike->sc.pPaper->rowBackF().ro.pcToolState_22[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] ;
                boolT bIn =
                (
                    pStrike->sc.pPaper->bShowF( tinP )                                       &&
                    idCol >= R( pStrike->sc.mIdColHot )                                   &&
                    idCol <= R( pStrike->sc.mIdColHot ) - 1.0 + R( pStrike->sc.mColsHot ) &&
                    idRow >= R( pStrike->sc.mIdRowHot )                                   &&
                    idRow <= R( pStrike->sc.mIdRowHot ) - 1.0 + R( pStrike->sc.mRowsHot )
                )
                ;

                //DUPLICATEcODE
                if( features.fc.pSadamInOutQueryCBF )
                {
                    countT pcNotes[] = { 1 , 3 , (countT)&bIn , idCol , idRow , 0 } ;
                    (*features.fc.pSadamInOutQueryCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_INoUTqUERY , idEventP , pcNotes , *this ) ;
                }

                if( !bIn ) pStrike->sc.flags &= ~( F(flSTRIKEs_FLY) ) ;
                else
                {
                    pStrike->sc.flags |= flSTRIKEs_FLY ;

                    pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_FLYOVER ) ;

                    if( features.fc.pSadamFlyoverCBF )
                    {
                        countT pcNotes[] = { 1 , 4 , ifcIDtYPEtOOL_MOUSEpOSITION , ifcIDtYPEaCTION_MOVE , idCol , idRow , 0 } ;
                        (*features.fc.pSadamFlyoverCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_FLYOVER , idEventP , pcNotes , *this ) ;
                    }
                }
            }

            if( !( F(pStrike->sc.flags) & flSTRIKEs_AWAKE ) )
            {
                pStrike->sc.flags |= flSTRIKEs_AWAKE ;
                if( features.fc.pSadamAnimateCBF ) (*features.fc.pSadamAnimateCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_SLEEP :
        {
            //CODEsYNC: PSEUDOdUPLICATE CODE 0b50007 0b50007
            if( F(pStrike->sc.flags) & flSTRIKEs_AWAKE )
            {
                pStrike->sc.flags &= ~( F(flSTRIKEs_AWAKE) ) ;
                bStrikeKilled = 1 ;
                if( features.fc.pSadamAnimateCBF ) (*features.fc.pSadamAnimateCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_STRIKE :
        {
            paperOldC& paper =  *(paperOldC*)pcNotesP[ 0 ] ;
            strokeS& sttr = *(strokeS*)pcNotesP[ 1 ] ;

            ZE( boolT , bErase ) ;
            if( pStrike ) bErase = 1 ;
            else          pStrike = new( 0 , tinP , pbStrike , sizeof pbStrike ) strikeS( tinP ) ;

            flags &= ~( F(flSADAMc_DESTROYED) ) ;
            paper.renderStartF() ;

            features.fc.idIntercom = 0 ;
            features.fc.cyclesPerDragRedraw = 4 ;
            pStrike->sc.pPaper = &paper ;

            ZE( boolT , bRestoreMove ) ;
            ZE( countT , cFrameNestDown ) ;
            ZE( countT , cFrameNestLeft ) ;
            ZE( countT , cFrameNestUp ) ;
            ZE( countT , cFrameNestRight ) ;
            TN( tBody , "" ) ;

            //LOGrAW( "STRIKE: getting hot rect and detecting wrap\r\n" ) ; //U::
            countT pczIdAdamSnap[] = { features.fc.idAdam , 0 } ;
            {
                pulpOldC& pulp = *pStrike->sc.pPaper->x1.pPulp ;
                strokingFrameS& sfw = *(strokingFrameS*)&pulp.stqr_strokingFrame[ 2 + pulp.rCache.offFrame + pulp.rCache.offFrameWrap ] ;

                pStrike->sc.mRowsHot = pStrike->sc.mColsHot = pStrike->sc.mIdRowHot = pStrike->sc.mIdColHot = 0.0 ;
                if( pStrike->sc.pPaper->x1.pPulp->boundingRectF( tinP , pStrike->sc.mIdColHot , pStrike->sc.mIdRowHot , pStrike->sc.mColsHot , pStrike->sc.mRowsHot , features.psttBody , phCloneP , pczIdAdamSnap , flBOUND_OIL ) )
                {
                    //LOGrAW( "STRIKE: wrap detected; going to new line and getting hot rect again\r\n" ) ; //U::
                    pStrike->sc.pPaper->x1.pPulp->x1.back.wrapRenderOverrideF( tinP , T("\r\n") , phCloneP , pczIdAdamSnap , flPULPmODE_null , flPULPmODE_null ) ;
                
                    pStrike->sc.mRowsHot = pStrike->sc.mColsHot = pStrike->sc.mIdRowHot = pStrike->sc.mIdColHot = 0.0 ;
                    pStrike->sc.pPaper->x1.pPulp->boundingRectF( tinP , pStrike->sc.mIdColHot , pStrike->sc.mIdRowHot , pStrike->sc.mColsHot , pStrike->sc.mRowsHot , features.psttBody , phCloneP , pczIdAdamSnap , flBOUND_OIL ) ;
                }
                //TN( tSay , "" ) ; tSay = T("STRIKE: set pStrike->sc.mIdRowHot to ")+TF1(pStrike->sc.mIdRowHot)+T("\r\n") ;
                //LOGrAW( tSay ) ; //U::
            }

            //LOGrAW( "STRIKE: perhaps adjusting hot rect for frame\r\n" ) ; //U::

            ZE( strokeS* , psttFramedBody ) ;
            if( !( F(features.fc.flagsFrame) & flFEATUREsADAMfRAME_EXISTS ) ) { etherP.strMakeF( tinP , LF , psttFramedBody , features.psttBody ) ; ___( psttFramedBody ) ; }
            else                                                           pStrike->sc.pPaper->makeFramedSadamBodyF( tinP , psttFramedBody , *this , features.psttBody , cFrameNestDown , cFrameNestLeft , cFrameNestUp , cFrameNestRight ) ; ___( psttFramedBody ) ;

            //LOGrAW( "STRIKE: preparing to render\r\n" ) ; //U::
            
            {
                if( bErase )
                {
                    pStrike->sc.mColsMoved = 0.0 ;
                    pStrike->sc.mRowsMoved = 0.0 ;
                }
                else
                {
                    const strokingFrameS& sf  = pStrike->sc.pPaper->sfF( tinP , 0 ) ;
                    const strokingFrameS& sfd = pStrike->sc.pPaper->sfF( tinP , 1 ) ;

                    thirdC::c_memcpyIF( tinP , (byteT*)&pStrike->sc.sf    , (byteT*)&sf  , sizeof pStrike->sc.sf    ) ;
                    thirdC::c_memcpyIF( tinP , (byteT*)&pStrike->sc.sfDad , (byteT*)&sfd , sizeof pStrike->sc.sfDad ) ;

                    if( bRestoreMove )
                    {
                        //LOGrAW5( "STRIKE retrieving and resetting pStrike->sc.m*Moved [pStrike->sc.mColsMoved,pStrike->sc.mRowsMoved]: " , pStrike->sc.mColsMoved , " " , pStrike->sc.mRowsMoved , "\r\n" ) ;
                        measureT mColsMove  = pStrike->sc.mColsMoved ;
                        measureT mRowsMove  = pStrike->sc.mRowsMoved ;
                        if( mColsMove || mRowsMove )
                        {
                            pStrike->sc.mColsMoved = 0.0 ;
                            pStrike->sc.mRowsMoved = 0.0 ;
                
                            pStrike->sc.mIdColMoveTo = sf.mIdCol + mColsMove ;
                            pStrike->sc.mIdRowMoveTo = sf.mIdRow + mRowsMove ;
                            //LOGrAW5( "STRIKE [mIdColMoveTo,mIdRowMoveTo]: " , pStrike->sc.mIdColMoveTo , " " , pStrike->sc.mIdRowMoveTo , "\r\n" ) ;
                        }
                    }
                }

                pStrike->sc.pPaper->x1.pPulp->x1.back.wrapRenderOverrideF( tinP , psttFramedBody , phCloneP , pczIdAdamSnap , !bErase ? flPULPmODE_null : flPULPmODE_SUPPRESSpELcOLORcHANGES , flPULPmODE_null ) ;

                //U::CONJ: BUG: SHOULD STRIKE VOLATILE VALUE HERE
            }
            etherP.delF( tinP , psttFramedBody ) ;

            if( F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamAfterRenderCBF ) (*features.fc.pSadamAfterRenderCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;

            if( bErase ) bDeleteStrike = 1 ;

            //TN( tSay , "" ) ; tSay = T("STRIKE ")+TF1(features.fc.idAdam)+T(" ")+TF1(pStrike->sc.id Render)+T("/-: pStrike->sc.pPaper->pPulp->mIdColNow is ")+TF1(pStrike->sc.pPaper->pPulp->mIdColNow)+T("\r\n") ;
            //LOGrAW( tSay ) ; //U::
            paper.renderEndF() ;
            //if( !bErase ) { TN( tSay , "" ) ; tSay = T("sadam ")+TF1(features.fc.idAdam)+T(": \"")+features.psttBody+T("\"\r\n") ; LOGrAW( tSay ) ; }

            //if( bDebugTrace ) { LOGrAWtID( T("ifcIDtYPEsTROKEcALLbACK_STRIKE/- \"")+T(features.fc.postOldComment)+T("\"") ) ; }


            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_KEYBOARD :
        {
            if( pcNotesP[ 0 ] == 1 && pcNotesP[ 1 ] == 2 && pStrike->sc.pPaper->bShowF( tinP ) )
            {
                const countT& idTool   = pcNotesP[ 2 ] ;
                const countT& idAction = pcNotesP[ 3 ] ;

                if( pStrike->sc.pPaper->bToolFilterAllowsF( tinP , idTool , idAction , features.fc.idAdam , features.fc.idToolFilterList ) )
                {
                    if( F(features.fc.flagsKeyboard) & flFEATUREsADAMkEYBOARD_EXISTS )
                    {
                        if
                        (
                            F(features.fc.flagsKeyboard) & flFEATUREsADAMkEYBOARD_OUTSIDE
                            ||
                            F(flags) & flSADAMc_OWNtAB
                        )
                        {
                            ZE( boolT , bDo ) ;
                            switch( idAction )
                            {
                                case ifcIDtYPEaCTION_DOWN :
                                {
                                    if( F(features.fc.flagsKeyboard) & flFEATUREsADAMkEYBOARD_ACTIONdOWN ) bDo = 1 ;
                                    break ;
                                }
                                case ifcIDtYPEaCTION_UP :
                                {
                                    if( F(features.fc.flagsKeyboard) & flFEATUREsADAMkEYBOARD_ACTIONuP ) bDo = 1 ;
                                    break ;
                                }
                            }
    
                            if( bDo )
                            {
                                if( F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamIfHitCBF )
                                {
                                    _IO_
                                    bHandled = (*features.fc.pSadamIfHitCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
                                }
    
                                if( F(features.fc.flagsCio) & flFEATUREsADAMcIO_EXISTS && features.pczChannelOut )
                                {
                                    ZE( soulC* , psReport ) ;
                                    etherP( tinP , psReport , TAG( TAGiDnULL ) ) ;
                                    if( psReport )
                                    {
                                        *psReport << idTypeCallP ;
                                        //*psReport << (countT)0 ; //U::idSnipP
                                        //*psReport << (countT)0 ; //U::idsP
                                        *psReport << idTool ;
                                        *psReport << idAction ;
    
                                        etherP.cioPutF( tinP , etherC::etPrimeIF( tinP ) , features.pczChannelOut , *psReport ) ;
                                    }
                                    etherP( tinP , psReport ) ;
                                }
                            }
                        }
                    }
    
                    //DONE LATH SO REGULAR KEY PROCESSING IS NOT EFFECTIVE FOR THE HOTKEY PRESS
                    //EXAMPLE: A HOTKEY THAT JUMPS THE TAB TO A PROMPT WILL NOT ALSO BE APPENDED TO THE PROMPT'S VALUE
                    if
                    (
                        !( F(tinP.pAdamGlobal1->_backOldC_.rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_SUPPRESShOTkEYS ) &&
                        idAction == ifcIDtYPEaCTION_DOWN &&
                        features.fc.pSadamHotKeyCBF &&
                        (
                            idTool == features.fc.assignedHotKey
                            ||
                            ( F(flags) & flSADAMc_OWNtAB && ( idTool == ifcIDtYPEtOOL_ENTER || idTool == ifcIDtYPEtOOL_ENTERnUM ) )
                        )
                    )
                    {
                        //LOGrAW( "KEYBOARD: calling hot key cbf\r\n" ) ;
                        (*features.fc.pSadamHotKeyCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_HOTkEY , idEventP , pcNotesP , *this ) ;
                    }
                }
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_JOYsTICK :
        {
            if( F(features.fc.flagsJoyStick) & flFEATUREsADAMjOYsTICK_EXISTS && pStrike->sc.pPaper->bShowF( tinP ) )
            {
                const countT& idTool   = pcNotesP[ 2 ] ;
                const countT& idAction = pcNotesP[ 3 ] ;

                if( pStrike->sc.pPaper->bToolFilterAllowsF( tinP , idTool , idAction , features.fc.idAdam , features.fc.idToolFilterList ) )
                {
                    if( pcNotesP[ 0 ] == 1 && pcNotesP[ 1 ] >= 2 && pcNotesP[ 1 ] <= 4 ) //U::INSPECT WHAT THIS CODE LINE SHOULD BE
                    {
                        if( F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamIfHitCBF )
                        {
                            _IO_
                            bHandled = (*features.fc.pSadamIfHitCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
                        }
    
                        if( F(features.fc.flagsCio) & flFEATUREsADAMcIO_EXISTS && features.pczChannelOut )
                        {
                            ZE( soulC* , psReport ) ;
                            etherP( tinP , psReport , TAG( TAGiDnULL ) ) ;
                            if( psReport )
                            {
                                const measureT* pmxP   = idAction == ifcIDtYPEaCTION_MOVE ? (const measureT*)pcNotesP[ 4 ] : 0 ;
    
                                *psReport << idTypeCallP ;
                                //*psReport << (countT)0 ; //U::idSnipP ;
                                //*psReport << (countT)0 ; //U::idsP ;
                                *psReport << idTool ;
                                *psReport << idAction ;
                                if( pmxP )
                                {
                                    *psReport << pmxP[ 0 ] ;
                                    *psReport << pmxP[ 1 ] ;
                                    *psReport << pmxP[ 2 ] ;
                                    *psReport << pmxP[ 3 ] ;
                                    *psReport << pmxP[ 4 ] ;
                                    *psReport << pmxP[ 5 ] ;
                                    *psReport << pmxP[ 6 ] ;
                                }
    
                                etherP.cioPutF( tinP , etherC::etPrimeIF( tinP ) , features.pczChannelOut , *psReport ) ;
                            }
                            etherP( tinP , psReport ) ;
                        }
                    }
                }
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_MOUSE :
        {
            if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_EXISTS && pStrike->sc.pPaper->bShowF( tinP ) )
            {
                const countT& idTool   = pcNotesP[ 2 ] ;
                const countT& idAction = pcNotesP[ 3 ] ;
                const countT& idCol    = pcNotesP[ 4 ] ;
                const countT& idRow    = pcNotesP[ 5 ] ;

                if( pStrike->sc.pPaper->bToolFilterAllowsF( tinP , idTool , idAction , features.fc.idAdam , features.fc.idToolFilterList ) )
                {
                    if( pcNotesP[ 0 ] == 1 && pcNotesP[ 1 ] == 4 ) //U::CONJ: THIS TEST IS OBSOLETE
                    {
                        boolT bIn =
                        (
                            pStrike->sc.pPaper->bShowF( tinP )                                             &&
                            (sCountT)idCol >= R( pStrike->sc.mIdColHot )                                   &&
                            (sCountT)idCol <= R( pStrike->sc.mIdColHot ) - 1.0 + R( pStrike->sc.mColsHot )    &&
                            (sCountT)idRow >= R( pStrike->sc.mIdRowHot )                                   &&
                            (sCountT)idRow <= R( pStrike->sc.mIdRowHot ) - 1.0 + R( pStrike->sc.mRowsHot )
                        )
                        ;
    
                        //DUPLICATEcODE
                        if( features.fc.pSadamInOutQueryCBF )
                        {
                            countT pcNotes[] = { 1 , 3 , (countT)&bIn , idCol , idRow , 0 } ;
                            (*features.fc.pSadamInOutQueryCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_INoUTqUERY , idEventP , pcNotes , *this ) ;
                        }
    
                        if( F(features.fc.flagsFlyoverHighlight) & flFEATUREsADAMfLYOVERhIGHLIGHT_EXISTS && !( F(pStrike->sc.flags) & flSTRIKEs_DRAG ) )
                        {
                            if( !( F(pStrike->sc.flags) & flSTRIKEs_FLY ) != !bIn )
                            {
                                if( bIn ) pStrike->sc.flags |=      flSTRIKEs_FLY ;
                                else      pStrike->sc.flags &= ~( F(flSTRIKEs_FLY) ) ;

                                pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_FLYOVER ) ;
                            }
                        }
    
                        if( pStrike->sc.idNestWothRender == 1 && F(features.fc.flagsDraggable) & flFEATUREsADAMdRAGGABLE_EXISTS )
                        {
                            if( idTool == ifcIDtYPEtOOL_MOUSEbUTTONrIGHT )
                            {
                                if( idAction == ifcIDtYPEaCTION_DOWN && bIn )
                                {
                                    pStrike->sc.flags |= flSTRIKEs_DRAG ;
                                    pStrike->sc.mOffDragCol = idCol - pStrike->sc.sf.mIdCol ;
                                    pStrike->sc.mOffDragRow = idRow - pStrike->sc.sf.mIdRow ;
    
                                    //LOGrAW7( "right button down [idAdam,mOffDragCol,mOffDragRow]: " , features.fc.idAdam , " " , pStrike->sc.mOffDragCol , " " , pStrike->sc.mOffDragRow , "\r\n" ) ;

                                    if( features.fc.pSadamDragCBF )
                                    {
                                        countT pcNotes[] = { (countT)&bIn , idCol , idRow , 0 } ;
                                        (*features.fc.pSadamInOutQueryCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_DRAGbEGIN , idEventP , pcNotes , *this ) ;
                                    }
                                }
                                else if( idAction == ifcIDtYPEaCTION_UP )
                                {
                                    pStrike->sc.flags &= ~( F(flSTRIKEs_DRAG) ) ;
    
                                    if( features.fc.pSadamDragCBF )
                                    {
                                        countT pcNotes[] = { (countT)&bIn , idCol , idRow , 0 } ;
                                        (*features.fc.pSadamInOutQueryCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_DRAGeND , idEventP , pcNotes , *this ) ;
                                    }
                                }
                            }
                            else if( F(pStrike->sc.flags) & flSTRIKEs_DRAG && idTool == ifcIDtYPEtOOL_MOUSEpOSITION )
                            {
                                pStrike->sc.mIdColMoveTo = idCol - pStrike->sc.mOffDragCol ;
                                pStrike->sc.mIdRowMoveTo = idRow - pStrike->sc.mOffDragRow ;
                                //LOGrAW7( "drag [idAdam,mIdColMoveTo,mIdRowMoveTo]: " , features.fc.idAdam , " " , pStrike->sc.mIdColMoveTo , " " , pStrike->sc.mIdRowMoveTo , "\r\n" ) ;
                            }
                        }
    
                        if( bIn || F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_OUTSIDE )
                        {
                            ZE( boolT , bDo ) ;
                            switch( idAction )
                            {
                                case ifcIDtYPEaCTION_DOWN :
                                {
                                    if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_ACTIONdOWN )
                                    {
                                        switch( idTool )
                                        {
                                            case ifcIDtYPEtOOL_MOUSEbUTTONlEFT   : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONlEFT   ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONcENTER : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONcENTER ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONrIGHT  : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONrIGHT  ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEpOSITION     : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLpOSITION     ) { bDo = 1 ; } break ; }
                                        }
                                    }
    
                                    if( idTool == ifcIDtYPEtOOL_MOUSEbUTTONlEFT && features.fc.idTabClass && bIn ) sadamsC::pSadamsIF( tinP )->tabFreshF( tinP , etherP , ifcIDtYPEtABfRESH_JUMP , this ) ;
    
                                    break ;
                                }
                                case ifcIDtYPEaCTION_UP :
                                {
                                    if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_ACTIONuP )
                                    {
                                        switch( idTool )
                                        {
                                            case ifcIDtYPEtOOL_MOUSEbUTTONlEFT   : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONlEFT   ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONcENTER : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONcENTER ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONrIGHT  : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONrIGHT  ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEpOSITION     : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLpOSITION     ) { bDo = 1 ; } break ; }
                                        }
                                    }
                                    break ;
                                }
                                case ifcIDtYPEaCTION_MOVE :
                                {
                                    if( bIn && features.fc.pSadamFlyoverCBF ) (*features.fc.pSadamFlyoverCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_FLYOVER , idEventP , pcNotesP , *this ) ;
    
                                    //ZE( countT , timeN1 ) ;
                                    //ZE( sCountT , timeN2 ) ;
                                    //etherP.osTimeNowF( tinP , timeN1 , timeN2 ) ;
                                    //TN( tSay , "" ) ; tSay = T("\r\n")+TTtOCK(timeN1,timeN2)+T(" ")+T(tinP.postThreadName)+T(" MOUSEmOVE/idAdam: ")+TF1(features.fc.idAdam)+T("\r\n") ;
                                    //LOGrAW( tSay ) ;
    
                                    if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_ACTIONmOVE )
                                    {
                                        switch( idTool )
                                        {
                                            case ifcIDtYPEtOOL_MOUSEbUTTONlEFT   : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONlEFT   ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONcENTER : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONcENTER ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEbUTTONrIGHT  : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLbUTTONrIGHT  ) { bDo = 1 ; } break ; }
                                            case ifcIDtYPEtOOL_MOUSEpOSITION     : { if( F(features.fc.flagsMouse) & flFEATUREsADAMmOUSE_TOOLpOSITION     ) { bDo = 1 ; } break ; }
                                        }
                                    }
                                    break ;
                                }
                            }
    
                            if( bDo )
                            {
                                if( F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamIfHitCBF )
                                {
                                    _IO_
                                    bHandled = (*features.fc.pSadamIfHitCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
                                }
    
                                if( F(features.fc.flagsCio) & flFEATUREsADAMcIO_EXISTS && features.pczChannelOut )
                                {
                                    ZE( soulC* , psReport ) ;
                                    etherP( tinP , psReport , TAG( TAGiDnULL ) ) ;
                                    if( psReport )
                                    {
                                        *psReport << idTypeCallP ;
                                        //*psReport << (countT)0 ; //U::idSnipP
                                        //*psReport << (countT)0 ; //U::idsP
                                        *psReport << idTool ;
                                        *psReport << idAction ;
                                        *psReport << idCol ;
                                        *psReport << idRow ;
    
                                        etherP.cioPutF( tinP , etherC::etPrimeIF( tinP ) , features.pczChannelOut , *psReport ) ;
                                    }
                                    etherP( tinP , psReport ) ;
                                }
                            }
                        }
                    }
                }
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_TABaRRIVING :
        {
            boolT bAlreadyOwnedTab = F(flags) & flSADAMc_OWNtAB ;
            flags |= flSADAMc_OWNtAB ;

            if( !bAlreadyOwnedTab )
            {
                //ZE( countT , timeN1 ) ;
                //ZE( sCountT , timeN2 ) ;
                //etherP.osTimeNowF( tinP , timeN1 , timeN2 ) ;
                //LOGrAWtID( TTtOCK(timeN1,timeN2)+T(" TABaRRIVING/idAdam: ")+TF1(features.fc.idAdam)+T(" ")+T(features.fc.postOldComment) ) ;

                if( features.fc.pSadamTabCBF )
                {
                    _IO_

                    if( F(features.fc.flagsAdam) & flFEATUREsADAMaDAM_TABhEREsUPPRESSEShOTkEYS ) backOldC::setModeFlagsIF( tinP , flPAPERbACKmODE_SUPPRESShOTkEYS , flPAPERbACKmODE_null ) ; //U::CONJ: BUG: THIS SHOULD BE DONE EVEN IF THERE ISN'T A CBF

                    (*features.fc.pSadamTabCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABaRRIVING , idEventP , pcNotesP , *this ) ;
                }
    
                pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_OWNtAB ) ; //PROVISIONAL; CAN BE USED UNTIL eyeOldC IS USED; THEN WILL NEED TO USE SOMETHING THAT DOES NOT REQUIRE FLOODFILL

                //THIS SNIPPET IS EXERCISED BUT DOES NOTHING BECAUSE ps ttDefaultHighlightTabOwnerOn IS NULL STRING
                {
                    features.cLeverVolBody = IDVB_SYShIGHLIGHToWNtAB ;
                    vBodyS& vb = *(vBodyS*)&(countT&)*features.pswVolBody ;
                    if( !vb.flags ) new( 0 , tinP , (byteT*)&vb , features.pswVolBody->cbDataF() ) vBodyS ;
                    vb.ppsttSpec = &features.psttDefaultHighlightTabOwnerOn ;
                }
            }

            //else
            //{
            //    ZE( countT , timeN1 ) ;
            //    ZE( sCountT , timeN2 ) ;
            //    etherP.osTimeNowF( tinP , timeN1 , timeN2 ) ;
            //    TN( tSay , "" ) ; tSay = T("\r\n")+TTtOCK(timeN1,timeN2)+T(" ")+T(tinP.postThreadName)+T(" TABaRRIVING (already owned so doing nada/idAdam: ")+TF1(features.fc.idAdam)+T("\r\n") ;
            //    LOGrAW( tSay ) ;
            //}

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_TABlEAVING :
        {
            boolT bAlreadyOwnedTab = F(flags) & flSADAMc_OWNtAB ;
            flags &= ~( F(flSADAMc_OWNtAB|flSADAMc_TABwAShERE) ) ;

            if( bAlreadyOwnedTab )
            {
                //ZE( countT , timeN1 ) ;
                //ZE( sCountT , timeN2 ) ;
                //etherP.osTimeNowF( tinP , timeN1 , timeN2 ) ;
                //LOGrAWtID( TTtOCK(timeN1,timeN2)+T(" TABlEAVING/idAdam: ")+TF1(features.fc.idAdam)+T(" ")+T(features.fc.postOldComment) ) ;

                if( features.fc.pSadamTabCBF )
                {
                    _IO_
                    if( F(features.fc.flagsAdam) & flFEATUREsADAMaDAM_TABhEREsUPPRESSEShOTkEYS ) backOldC::setModeFlagsIF( tinP , flPAPERbACKmODE_null , flPAPERbACKmODE_SUPPRESShOTkEYS ) ; //U::CONJ: BUG: THIS SHOULD BE DONE EVEN IF THERE ISN'T A CBF
                    (*features.fc.pSadamTabCBF)( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABlEAVING , idEventP , pcNotesP , *this ) ;
                }
    
                pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_OWNtAB ) ; //PROVISIONAL; CAN BE USED UNTIL eyeOldC IS USED; THEN WILL NEED TO USE SOMETHING THAT DOES NOT REQUIRE FLOODFILL
                {
                    features.cLeverVolBody = IDVB_SYShIGHLIGHToWNtAB ;
                    vBodyS& vb = *(vBodyS*)&(countT&)*features.pswVolBody ;
                    if( !vb.flags ) new( 0 , tinP , (byteT*)&vb , features.pswVolBody->cbDataF() ) vBodyS ;
                    vb.ppsttSpec = &features.psttDefaultHighlightTabOwnerOff ;
                }
            }

            break ;
        }
        case ifcIDtYPEsTROKEcALLbACK_ANIMATE              :
        case ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGING :
        case ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGED  :
        {
            if( features.fc.pSadamAnimateCBF ) (*features.fc.pSadamAnimateCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
            break ;
        }
    }

    if( bStrikeKilled )
    {
        if( pStrike )
        {
            pStrike->sc.flags &= ~( F(flSTRIKEs_DRAG) ) ;
    
            if( F(pStrike->sc.flags) & flSTRIKEs_FLY )
            {
                pStrike->sc.flags &= ~( F(flSTRIKEs_FLY) ) ;
                pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_FLYOVER ) ;
            }
    
            if( F(pStrike->sc.flagsHighlighted) & flSADAMhIGHLIGHT_DOWN ) pStrike->sc.pPaper->sadamHighlightF( tinP , *this , flSADAMhIGHLIGHT_DOWN ) ;
        }
    }

    if( idTypeCallP == ifcIDtYPEsTROKEcALLbACK_STRIKE )
    {
        pStrike->sc.pPaper->renderVolatilesF( tinP , *this , phCloneP , flSTRIKEvOLATILE_LOADpOSITION ) ;
    }

    if( pStrike && F(features.fc.flagsCallBack) & flFEATUREsADAMcALLbACK_EXISTS && features.fc.pSadamEpilogCBF )
    {
        _IO_
        (*features.fc.pSadamEpilogCBF)( tinP , etherP , idTypeCallP , idEventP , pcNotesP , *this ) ;
    }

    if( bDeleteStrike )
    {
        if( F(flags) & flSADAMc_OWNtAB )
        {
            flags &= ~( F(flSADAMc_OWNtAB) ) ;
            flags |=      flSADAMc_TABwAShERE    ;
        }
        else flags &= ~( F(flSADAMc_TABwAShERE) ) ;

        if( F(flags) & flSADAMc_OWNtAB ) flags |= flSADAMc_TABwAShERE ;

        DELzOMBIE( pStrike ) ;
        DELzOMBIE( pStrike ) ;
    }

    //if( bGoItRender ) tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    //if( idTypeCallP != ifcIDtYPEsTROKEcALLbACK_ANIMATE && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_MOUSE && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGING && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGED && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_TABaRRIVING && idTypeCallP != ifcIDtYPEsTROKEcALLbACK_TABlEAVING )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTA(  ostoSay , tinP.postThreadName ) ;
    //    OStEXTAK( ostoSay , " | doF/" ) ;
    //    OStEXTA(  ostoSay , postIdType ) ;
    //    OStEXTAK( ostoSay , "/- [idIn]: " ) ;
    //    OStEXTC(  ostoSay , idIn , 0 ) ;
    //    OStEXTAK( ostoSay , " -----------------------------------------------------------------------------------------------------------------------\r\n" ) ;
    //    LOGrAW( ostoSay ) ;
    //}
    //tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    paperOldC::ungrabIF( tinP ) ; //U::TO FIND A BUG
    return bHandled ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115005.sadamc.dof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115006.sadamc.bawakepresentf BEGIN
#define DDNAME       "3func.36115006.sadamc.bawakepresentf"
#define DDNUMB      (countT)0x36115006
#define IDFILE      (countT)0x14c2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT sadamC::bAwakePresentF( tinS& tinP )/*1*/
{
    boolT bKeep = !pStrike || !( F(pStrike->sc.flags) & flSTRIKEs_AWAKE ) || F(pStrike->sc.pPaper->x1.pPulp->x1.back.rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT
        ? 0
        : 1
    ;

    return bKeep ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36115* : 3func.36115006.sadamc.bawakepresentf END
