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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090004.paperoldc.strokef BEGIN
#define DDNAME       "3func.35090004.paperoldc.strokef"
#define DDNUMB      (countT)0x35090004
#define IDFILE      (countT)0xb21


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strokeF.0.html\"\>instances\</A\>
\<A HREF=\"5.103000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2000104.1.1.0.html\"\>2000104:  WAKEsHOW( "example.simplest.func.103000f.etherC.strokeF" )\</A\>
  \<A HREF=\"5.e110104.1.1.0.html\"\>e110104:  WAKEsHOW( "example.simplest.func.103000f.etherC.strokeF" )\</A\>
this function is serialized so that it will block as needed when window repainting is in progress
arguments
 tinP
 psttP
  if 0 then the bitmap is erased and all existing strokes are rerendered into it
  it is probably bad code style for an adam to specify 0 for psttP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00101c4.fl FACEtALK!||
*/
/**/

// IT IS LEGAL FOR this TO BE 0, SO THIS SOURCE FILE MUST BE NAMED 3func.34* (NONMEMBER FUNCTIONS) RATHER THAN 3func.35* (MEMBER FUNCTIONS)

//U::REWRITE THIS TO ELIMINATE ALL CASTE CODING AND TO USE A MORE EFFICIENT stackC (STORE strokeS SINGLES IN PLACE IN A sizeof( strokeS ) blob stackC AND ELIMINATE MAKING SINGLES STACK FOR EDITING

/*1*/voidT paperOldC::strokeF( tinS& tinP , const strokeS* psttP )/*1*/
{
    //static countT idInLath ;
    //ZE( countT , idIn ) ;
    //if( tinP.pc Utility[ 0 ] ) idIn = 1 + incv02AM( idInLath ) ;

    _IO_

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //if( !psttP ) { LOGcALLnEST( "strokeF(0)" ) ; }

    if( !psttP || psttP->idAdam ) // !psttP IS A REQUEST TO RERENDER ALL EXISTING STROKES
    {
        //CONCEPTS
        //
        // MY JOB IS TO MODIFY A FIFO STACK OF STROKE STRINGS, USUALLY BY PUSHING ANOTHER STRING ONTO THE STACK.
        // THIS STACK IS THE DEFINITIVE SPECIFICATION OF WHAT IS TO APPEAR IN THE WINDOW
        // I AM ALSO RESPONSIBLE FOR MAINTAINING A BITMAP WHICH IS TO ALWAYS CONFORM TO THE SPECIFICATION
        // AFTER I COMPLETE MY EDITS TO BOTH THE STACK AND THE BITMAP, I NOTIFY THE OS THAT THE BITMAP HAS CHANGED
        //
        // ASSUME: THE CURRENT STRING (IN stFace) HAS BEEN RENDERED INTO THE BITMAP AND INTO THE WINDOW

        //RECIPE SUMMARY
        //
        // 1. AS DIRECTED BY psttP, EDIT THE STRING STACK (AND THE BITMAP AND THE windowOldC OBJECT)
        // 2. TALK psttP OUT TO CLIENTS, IF ANY
        //
        //RECIPE DETAIL
        // 
        // 1. VALIDATE PARAMETERS
        // 2. cStrokesRendered = stFace
        // 3. APPLY ALL EDITS TO stFace
        // 4. PASS THROUGH stFace TO RENDER

        // OPTIMIZATIONS
        //
        // 1. WHEN THERE ARE NO WINDOWS, I DO NOT TOUCH stFace.  INSTEAD, I SIMPLY WRITE TO THE CONSOLE, IF ANY

        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        const countT c_this = (countT)this ;
        if( !c_this )
        {
            if( psttP && !( F(thirdC::third_flagsModeAdam1I_IF(tinP)) & flADAMmODE1_QUIETcONSOLE ) )
            {
                //U:ENABLE THIS CODE ONLY IF THERE IS A CONSOLE
                for( countT ids = 1 ; ids <= psttP->idAdam ; ids ++ )
                {
                    switch( psttP[ CSpREFIX - 1 + ids ].idCaste )
                    {
                        case sc_cFROMcONTROL :
                        {
                            switch( psttP[ CSpREFIX - 1 + ids ].idAdam )
                            {
                                case '\f' : { thirdC::c_systemIF( tinP , "cls" ) ; break ; }
                                case '\r' :
                                case '\n' :
                                {
                                    const osTextT post2[] = { (osTextT)psttP[ CSpREFIX - 1 + ids ].idAdam , 0 } ;
                                    thirdC::dosWriteStdOutIF( tinP , post2 ) ;
                                    break ;
                                }
                                default: { break ; }
                            }
                            break ;
                        }
                        case sc_cFROMaSCII :
                        case sc_cALPHABET1 :
                        {
                            if( psttP[ CSpREFIX - 1 + ids ].idAdam <= 0xff )
                            {
                                const osTextT post2[] = { (osTextT)psttP[ CSpREFIX - 1 + ids ].idAdam , 0 } ;
                                thirdC::dosWriteStdOutIF( tinP , post2 ) ;
                            }
                            break ;
                        }
                    }
                }
            }
        }
        else
        {
            SCOOP
            if( !POOP )
            {
                tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                thirdC& third = ether ;
    
                //windowOldC& winRoot = *thirdC::p WinRootIF() ;
                //winRoot.tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
                ZE( boolT , bSuppress ) ;
                if( !psttP ) bSuppress = x1.pPulp->x1.back.backSuppressRefreshF( tinP , *this ) ;
    
                countT cStrokesRendered = stDef ;
        
                // 3. APPLY ALL EDITS TO stDef. (VARIABLES ARE NOT EVALUATED)  IN SOME CASES, I RESET cStrokesRendered AND ERASE THE BITMAP
                ZE( boolT , bErase ) ;
                if( bSuppress ) ;
                else if( !psttP )
                {
                    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //LEGACY WORKAROUND
                    callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_DESTROY , 0 , 0 , flCALLsADAMS_null , 0 , this ) ;
                    THREADmODE1rESTORE //LEGACY WORKAROUND
                    cStrokesRendered = 0 ;    
        
                    x1.pPulp->mIdRowNow = x1.pPulp->mIdColNow = 1.0f ;
                    *(measureT*)&x1.pPulp->stqr_mIdRowHighWater[ 1 ] = 0.0f ;
                    bErase = 1 ;
                }
                else
                {
                    {
                        // BEHAVIOR
                        //
                        // I SET UP 3 STROKING FRAMES
                        // 
                        //   1. THE LOWEST FRAME COINCIDES WITH THE BOUNDARY PELS OF THE DISPLAY AND WRAP IS OFF   ; TO ACCESS, RENDER S2(2,scOld_cPUSHoFFfRAME)
                        //   2. MIDDLE FRAME IS THE ENTIRE DISPLAY LESS A THIN MARGIN ON ALL EDGES AND WRAP IS OFF ; TO ACCESS, RENDER S2(1,scOld_cPUSHoFFfRAME)
                        //   3. THE TOP FRAME IS SIZED FOR 96_9 COLUMNS AND 24_9 ROWS OF TEXT AND WRAP IS ON       ; THIS IS ACCESSED BY DEFAULT
                        // 


                        //ALWAYS DONE NOW.  APP CODE THAT DOES NOT WANT TO USE THIS DEFAULT, WHICH IS FOR TEXT, CAN USE scOld_cPUSHoFFfRAME TO SET offFrame TO 1
                        const boolT bImpliedTextCells = !cStrokesRendered ; //&& psttP->idAdam && ( psttP[ CSpREFIX ].idCaste == sc_cALPHABET1 || psttP[ CSpREFIX ].idCaste == sc_cADAM ) ;
                        if( bImpliedTextCells )
                        {
                            const measureT mRelMarginFrom =       1.0 / 64.0 ;
                            const measureT mRelMarginTo   = 1.0 - 1.0 / 64.0 ;

                            stDef << (byteT*)&S2(0,scOld_FRAMEdETACH) ;
                            stDef << (byteT*)&S3(mRelMarginFrom,scOld_mmMOVEtO,mRelMarginFrom) ;
                            stDef << (byteT*)&S3(mRelMarginTo,scOld_mmFRAMEtO,mRelMarginTo) ;
                            stDef << (byteT*)&S2(0,scOld_POPfRAMEdETACH) ;
                            stDef << (byteT*)&S3(96.0,scOld_mmFRAMEcELLS,24.0) ;
                            stDef << (byteT*)&S2(0,scOld_WRAPoN) ;
                        }
                    }

                    for( countT ids = 1 ; ids <= psttP->idAdam ; ids ++ )
                    {
                        const strokeS& sttWo = psttP[ CSpREFIX - 1 + ids ] ;
                        switch( sttWo.idCaste )
                        {
                            case sc_cFROMcONTROL :
                            case scOld_EDIT :
                            {
                                if( sttWo.idCaste != scOld_EDIT && sttWo.idAdam != '\f' ) stDef << (byteT*)&sttWo ;
                                else
                                {
                                    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //LEGACY WORKAROUND
                                    callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_DESTROY , 0 , 0 , flCALLsADAMS_null , 0 , this ) ;
                                    THREADmODE1rESTORE //LEGACY WORKAROUND
            
                                    stDef << (byteT*)&sttWo ;
    
                                    switch( sttWo.idCaste )
                                    {
                                        case sc_cFROMcONTROL :
                                        {
                                            switch( sttWo.idAdam )
                                            {
                                                case '\f' :
                                                {
                                                    while( stDef ) //PURGE DONE THIS WAY TO DEREGISTER sc_cADAM INSTANCES
                                                    {
                                                        strokeS sttWo2 ;
                                                        byteT* pb_sttWo2 = (byteT*)&sttWo2 ;
                                                        stDef >> pb_sttWo2 ;
                                                    }
                        
                                                    break ;
                                                }
                                            }
                                            break ;
                                        }
                                        case scOld_EDIT :
                                        {
                                            switch( sttWo.idAdam )
                                            {
                                                case saOLD_EDITeRASEbACKtOmARK :
                                                {
                                                    while( stDef )
                                                    {
                                                        strokeS sttWo2 ;
                                                        byteT* pb_sttWo2 = (byteT*)&sttWo2 ;
                                                        stDef >> pb_sttWo2 ;
                                                        if( sttWo.idCaste == scOld_SYSmARK ) break ;
                                                    }
                        
                                                    break ;
                                                }
                                                default : { break ; }
                                            }
                                            break ;
                                        }
                                    }
        
                                    cStrokesRendered = 0 ;    
                                    x1.pPulp->mIdRowNow = x1.pPulp->mIdColNow = 1.0f ;
                                    *(measureT*)&x1.pPulp->stqr_mIdRowHighWater[ 1 ] = 0.0f ;
                                    bErase = 1 ;
                                }
            
                                break ;
                            }
                            default :
                            {
                                if( sttWo.idCaste == sc_cADAM ) sttWo.registerF() ;
                                stDef << (byteT*)&sttWo ;
                                break ;
                            }
                        }
                    }
                }
        
                //4. PASS THROUGH stDef TO RENDER
                if( !bSuppress )
                {
                    if( bErase ) purgeF( tinP ) ;

                    if( stDef )
                    {
                        ZE( strokeS* , psttAll ) ;
                        ether.strConcatenateF( tinP , psttAll , stDef , 0 , flSTRcONCATENATE_COPY | flSTRcONCATENATE_REVERSE ) ; ___( psttAll ) ;
                        ZE( strokeS* , psttNew ) ;
                        if( !cStrokesRendered ) { psttNew = psttAll ; psttAll = 0 ; }
                        else if( cStrokesRendered < psttAll->idAdam )
                        {
                            countT idf = cStrokesRendered + 1 ;
                            ZE( countT , idl ) ;
                            ether.strSubstringF( tinP , psttNew , idf , idl , psttAll ) ; ___( psttNew ) ;
                            ether.delF( tinP , psttAll ) ;
                        }
                        else { ether.delF( tinP , psttAll ) ; }
    
                        if( psttNew )
                        {
                            //if( idIn == 1 )
                            {
                                //ether.beeClickF( tinP , TUCK << 0 ) ;
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_SETUP , flETHERwHERE_null , 1 ) ;
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_REGISTERtHREAD ) ;
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_WATCH ) ;
                            }

                            x1.pPulp->x1.back.wrapRenderF( tinP , psttNew , 0 ) ;

                            //if( idIn == 1 )
                            {
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_UNWATCH ) ;
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_UNREGISTERtHREAD ) ;
                                //ether.etherWhereF( tinP , ifcIDaCTIONwHERE_SHUTDOWN ) ;
                                //ether.beeClickF( tinP , TUCK << 1 ) ;
                            }

                            ether.delF( tinP , psttNew ) ;
                        }
                    }
                }

                requestTabFreshIF( tinP ) ;
                //winRoot.tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
                tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
            }
        }
        THREADmODE1rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090004.paperoldc.strokef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090005.paperoldc.varshandlerif BEGIN
#define DDNAME       "3func.35090005.paperoldc.varshandlerif"
#define DDNUMB      (countT)0x35090005
#define IDFILE      (countT)0xb22


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pVarsHandlerFIP
  can be 0
  if not 0 then must be the address of an application defined handler function
  this handler will be called just before the base library is about to retrieve the value of an paperOldC::x1.pPulp->stqr_paperVars variable
 cArgP
  can be 0
  this value will be passed to the handler
  its value is not used at all by the base library
*/
/**/
/*1*/voidT paperOldC::varsHandlerIF( tinS& tinP , varsHandlerFT pVarsHandlerFIFP , countT cArgP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_paperOldC_.pVarsHandlerF = pVarsHandlerFIFP ;
    tinP.pAdamGlobal1->_paperOldC_.varsHandlerArg = cArgP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090005.paperoldc.varshandlerif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090008.paperoldc.obeyanimatecbfstrokesif BEGIN
#define DDNAME       "3func.35090008.paperoldc.obeyanimatecbfstrokesif"
#define DDNUMB      (countT)0x35090008
#define IDFILE      (countT)0xb23


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::EDIT THIS TO PROCESS EACH ACTIVE PAPER ONLY WO TIME

/*1*/voidT paperOldC::obeyAnimateCbfStrokesIF( tinS& tinP , etherC& etherP , const countT idCycleP , const boolT& bQuitP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( tinP.pAdamGlobal1->_paperOldC_.pStInstances )
    {
        tinP.pAdamGlobal1->_paperOldC_.pStInstances->grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( *tinP.pAdamGlobal1->_paperOldC_.pStInstances )
        {
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                paperOldC& paper = *(paperOldC*)tinP.pAdamGlobal1->_paperOldC_.pStInstances->downF( tinP , hWalk ) ;
                if( !( F(paper.x1.pPulp->x1.back.rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) && paper.x1.pPulp->stAnimateCbfStrokes )
                {
                    handleC hWalk2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        animateCBFT pAnimateCBF = (animateCBFT)paper.x1.pPulp->stAnimateCbfStrokes.downF( tinP , hWalk2 ) ;
                        if( pAnimateCBF ) (*pAnimateCBF)( tinP , etherP , idCycleP , tinP.pAdamGlobal1->_pulpOldC_.cAnimateArg ) ;
                    }
                    while( ~hWalk2 && ( !idCycleP || !bQuitP ) ) ;
                }
            }
            while( ~hWalk && ( !idCycleP || !bQuitP ) ) ;
        }
        tinP.pAdamGlobal1->_paperOldC_.pStInstances->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090008.paperoldc.obeyanimatecbfstrokesif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090012.paperoldc.beforeanimatingif BEGIN
#define DDNAME       "3func.35090012.paperoldc.beforeanimatingif"
#define DDNUMB      (countT)0x35090012
#define IDFILE      (countT)0xb24


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::beforeAnimatingIF( tinS& tinP , etherC& etherP , const countT idCycleP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( tinP.pAdamGlobal1->_pulpOldC_.pAnimateCBF ) (*tinP.pAdamGlobal1->_pulpOldC_.pAnimateCBF)( tinP , etherP , idCycleP , tinP.pAdamGlobal1->_pulpOldC_.cAnimateArg ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090012.paperoldc.beforeanimatingif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090013.paperoldc.setbeforeanimatingif BEGIN
#define DDNAME       "3func.35090013.paperoldc.setbeforeanimatingif"
#define DDNUMB      (countT)0x35090013
#define IDFILE      (countT)0xb25


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::setBeforeAnimatingIF( tinS& tinP , animateCBFT pAnimateCBFP , const countT cArgP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_pulpOldC_.pAnimateCBF = pAnimateCBFP ;
    tinP.pAdamGlobal1->_pulpOldC_.cAnimateArg = cArgP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090013.paperoldc.setbeforeanimatingif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090015.paperoldc.freshvolatiletextif BEGIN
#define DDNAME       "3func.35090015.paperoldc.freshvolatiletextif"
#define DDNUMB      (countT)0x35090015
#define IDFILE      (countT)0xb26


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// ALL STALE VALUES MUST BE ERASED BEFORE ANY REPLACEMENT VALUES ARE RENDERED
// THIS CODE ASSUMES THAT STATE VALUES THAT IT LOOKS AT DO NOT CHANGE DURING THE CALL
// THIS IS ENFORCED BY DOING A GLOBAL GRAB AND ASSUMING THAT OTHER THREADS THAT MODIFY SADAM STATE ALSO DO A GLOBAL GRAB
// FOR EXAMPLE, ERASURES, RENDERS, PAPERBACK ABSENCE CHANGES, AND SADAM SLEEP/WAKE CHANGES ONLY OCCUR BETWEEN CALLS TO ME, NEVER DURING CALLS TO ME

//U::O: RESTORE vb IN PLACE SO CAN OBTAIN THIS REFERENCE WO TIME AND REUSE IT
//U::EITHER PREVENT APP CODE IN CALLBACKS FROM CALLING SNAP/RESTORE OR REFRESH vb REFERENCES OR EDIT snapF TO DO RESTORE IN PLACE

/*1*/voidT paperOldC::freshVolatileTextIF( tinS& tinP , etherC& etherP , const countT* const pcNotesP , const countT idCycleP )/*1*/
{
    //B eep( TUCK * ( 1 + etherC::ether_cUtility_IF( tinP ) ) , TUCK ) ; //U::TO STUDY CPU LOADING BY THIS FUNCTION
    //if( etherC::ether_cUtility_IF( tinP ) ) return ;

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( stackC* , pStk_pSadam ) ;
    sadamsC::pSadamsIF( tinP )->getF( tinP , pStk_pSadam , flGETsADAMsTATES_FIFO ) ;
    if( pStk_pSadam && *pStk_pSadam )
    {
        const countT idEvent = 1 + incv02AM( tinP.pAdamGlobal1->idEventSadamsLath ) ;
        flagsT saveModeI = tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
        tinP.pAdamGlobal1->_pulpOldC_.flagsMode |= flPAPERmODEi_SUPPRESStABfRESH ;
        //LOGrAWtID( "----BEGIN------------------------------------------------------------------------------------" ) ; //U::
        for( countT idPass = 1 ; idPass <= 3 ; idPass ++ )
        {
            //LOGrAWtID2( "pass " , idPass ) ; //U::

            if( *pStk_pSadam )
            {
                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    sadamC& sad = *(sadamC*)pStk_pSadam->downF( tinP , hWalk ) ;
                    featuresS& features = *(featuresS*)&(const featuresS&)sad ;

                    //U::NO EFFECT HERE

                    if( !sad.bAwakePresentF( tinP ) )
                    {
                        pStk_pSadam->extractF( 0 , tinP ) ;
                        continue ;
                    }

                    //LOGrAWtID( TF1(features.fc.idTabClass)+T(".")+TF1(features.fc.idTab)+T(".")+TF1(features.fc.idAdam)+T(": \"")+T(features.fc.postOldComment)+T("\"") ) ; //U::

                    countT cvFlavors = features.pswVolBody->cFlavorsF( tinP ) ;
                    for( countT idvf = 1 ; idvf <= cvFlavors ; idvf ++ )
                    {
                        features.cLeverVolBody = features.pswVolBody->leverF( tinP , idvf ) ;

                        //LOGrAWtID4( "pass " , idPass , " idvf " , idvf ) ;
                        switch( idPass )
                        {
                            case 1 :
                            {
                                if( features.fc.pSadamAnimateCBF ) sad.doF( tinP , *tinP.pEtScratch , ifcIDtYPEsTROKEcALLbACK_ANIMATE , idEvent , pcNotesP , 0 ) ;
                                
                                vBodyS& vb = *(vBodyS*)&(countT&)*features.pswVolBody ;
                                if( vb.zBaton_ppsttSpec ) vb.zBaton_ppsttSpec->grabF( tinP , TAG( TAGiDnULL ) ) ;
                                boolT bStale =
                                (
                                    (  *vb.ppsttSpec && !vb.psttDone ) ||
                                    ( !*vb.ppsttSpec &&  vb.psttDone ) ||
                                    (  *vb.ppsttSpec && etherP.strCompareF( tinP , *vb.ppsttSpec , vb.psttDone ) )
                                )
                                ;
                                if( vb.zBaton_ppsttSpec ) vb.zBaton_ppsttSpec->ungrabF( tinP ) ;
                                
                                if( F(vb.flags) & flVbODYs_STALEeRASED ) { BLAMMO ; }
                                if( bStale )
                                {
                                    if( features.fc.pSadamAnimateCBF ) sad.doF( tinP , *tinP.pEtScratch , ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGING , idEvent , pcNotesP , 0 ) ;
                                
                                    if( vb.psttDone ) sad.pStrike->sc.pPaper->x1.pPulp->rCache = sad.pStrike->rCacheVolatileSnap ;
                                    const flagsT _saveMode = sad.pStrike->sc.pPaper->x1.pPulp->flagsMode ;
                                    sad.pStrike->sc.pPaper->renderVolatilesF( tinP , sad , 0 , flSTRIKEvOLATILE_null , &vb ) ;
                                    sad.pStrike->sc.pPaper->x1.pPulp->flagsMode = _saveMode ;
                                    vb.flags |= flVbODYs_STALEeRASED ;
                                }

                                break ;
                            }
                            case 2 :
                            {
                                vBodyS& vb = *(vBodyS*)&(countT&)*features.pswVolBody ; //THIS REFERENCE IS VOLATILE DUE TO SNAP/RESTORE DURING RENDERING
                                if( F(vb.flags) & flVbODYs_STALEeRASED )
                                {
                                    vb.flags &= ~( F(flVbODYs_STALEeRASED) ) ;
                                    sad.pStrike->rCacheVolatileSnap = sad.pStrike->sc.pPaper->x1.pPulp->rCache ;
                                    sad.pStrike->sc.pPaper->renderVolatilesF( tinP , sad , 0 , flSTRIKEvOLATILE_LOADpOSITION | flSTRIKEvOLATILE_LOADsPEC , &vb ) ;
                                    requestTabFreshIF( tinP ) ; //VOLATILE TEXT MIGHT CONTAIN BUTTONS THAT PARTICIPATE IN TABBING; MOVE TO sadamC::doF SO IS DONE ONLY WHEN TAB PARTICIPANT IS CT/DT
                                    if( features.fc.pSadamAnimateCBF ) sad.doF( tinP , *tinP.pEtScratch , ifcIDtYPEsTROKEcALLbACK_VOLATILEtEXTcHANGED , idEvent , pcNotesP , 0 ) ;
                                    vb.flags &= ~( F(flVbODYs_NEWsPEC) ) ;
                                }
                                break ;
                            }
                            case 3 :
                            {
                                countT cpd = features.fc.cyclesPerDragRedraw ;
                                /*if( cpd && !( idCycleP % cpd ) )*/ sad.pStrike->sc.pPaper->moveGlyphF( tinP , sad , 0 ) ;
                                break ;
                            }
                        }
                    }
    
                    if( POOP ) POOPR
                }
                while( ~hWalk ) ;
            }
        }
        tinP.pAdamGlobal1->_pulpOldC_.flagsMode = saveModeI ;
        //LOGrAWtID( "----END--------------------------------------------------------------------------------------" ) ; //U::
    }
    etherP( tinP , pStk_pSadam ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090015.paperoldc.freshvolatiletextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090016.paperoldc.fireanimatorifif BEGIN
#define DDNAME       "3func.35090016.paperoldc.fireanimatorifif"
#define DDNUMB      (countT)0x35090016
#define IDFILE      (countT)0xb27


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::fireAnimatorIfIF( tinS& tinP )/*1*/
{
    if( tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF )
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal1->_pulpOldC_.flagsMode |= flPAPERmODEi_ANIMATIONtHREADfIRED ;
        countT cGrabs = tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP , flGRABcUNGRABf_ALLrECURSIONS ) ;
        tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF->waitF( tinP ) ;
        while( -- cGrabs ) tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        DEL( tinP.pAdamGlobal1->_paperOldC_.pSgnDone_tmAnimateSadamsOnPaperF ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090016.paperoldc.fireanimatorifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090017.paperoldc.callsadamsif BEGIN
#define DDNAME       "3func.35090017.paperoldc.callsadamsif"
#define DDNUMB      (countT)0x35090017
#define IDFILE      (countT)0xb28


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
arguments
 tinP
 idTypeP
 pcNotesP
 bFifoP
 pczIdIntercomP
  can be 0
  if not 0 then must point to a null terminated list of application defined countT values
   only the sadams that have placed a listed idIntercom value into their scratchpad will be called
*/
/**/

/*1*/countT paperOldC::callSadamsIF( tinS& tinP , etherC& etherP , const countT idTypeP , const countT* const pcNotesP , const handleC* const phCloneP , const flagsT flagsP , const vTextC* const pOwnerP , const paperOldC* const pPaperP , const backOldC* const pPaperBackP , const countT* const pczIdIntercomP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( pPaperP && pPaperBackP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , cCalled ) ;
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( stackC* , pstk_pSadam ) ;
    sadamsC::pSadamsIF( tinP )->getF( tinP , pstk_pSadam , F(flagsP) & flCALLsADAMS_FIFO ? flGETsADAMsTATES_FIFO : flGETsADAMsTATES_null ) ;
    if( pstk_pSadam )
    {
        const countT idEvent = 1 + incv02AM( tinP.pAdamGlobal1->idEventSadamsLath ) ;
        ZE( boolT , bQuit ) ;
        while( *pstk_pSadam )
        {
            ZE( sadamC* , pSadam ) ;
            *pstk_pSadam >> *(countT*)&pSadam ;

            featuresS& features = *(featuresS*)&(const featuresS&)*pSadam ;

            if( !bQuit )
            {
                countT idf = 1 ;
                if
                (
                    (
                        ( !pOwnerP && !pPaperP && !pPaperBackP )
                        ||
                        features.fc.pOwner == pOwnerP
                        ||
                        (
                            pSadam->pStrike
                            &&
                            (
                                pSadam->pStrike->sc.pPaper == pPaperP
                                ||
                                &pSadam->pStrike->sc.pPaper->x1.pPulp->x1.back == pPaperBackP
                            )
                        )
                    )
                    &&
                    ( idTypeP == ifcIDtYPEsTROKEcALLbACK_DESTROY || pSadam->pStrike )
                    &&
                    ( !pczIdIntercomP || ( pSadam->pStrike && features.fc.idIntercom && etherP.strIdF( tinP , idf , features.fc.idIntercom , pczIdIntercomP ) ) )
                )
                {
                    bQuit = pSadam->doF( tinP , etherP , idTypeP , idEvent , pcNotesP , phCloneP ) ; //bQuit RETURN VALUE IGNORED IN THIS REWRITE; CAN BE SUPPORTED IF EVER NEEDED
                    cCalled ++ ;
                }
            }
        }
    }
    etherP( tinP , pstk_pSadam ) ;

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    return cCalled ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090017.paperoldc.callsadamsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090020.paperoldc.setflashif BEGIN
#define DDNAME       "3func.35090020.paperoldc.setflashif"
#define DDNUMB      (countT)0x35090020
#define IDFILE      (countT)0xb29


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::setFlashIF( tinS& tinP , sadamC& sadamP , const countT countdownP , const countT periodP , const flagsT flagsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( sadamP.pStrike )
    {
        cmdFlashS cmd( countdownP , periodP , flagsP ) ;
        sadamP.pStrike->stqCmdFlash << (byteT*)&cmd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090020.paperoldc.setflashif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090021.paperoldc.setflashif BEGIN
#define DDNAME       "3func.35090021.paperoldc.setflashif"
#define DDNUMB      (countT)0x35090021
#define IDFILE      (countT)0xb2a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::setFlashIF( tinS& tinP , const osTextT* const postOldCommentP , const countT flashCountdownP , const countT flashPeriodP , const flagsT flagsFlashP )/*1*/
{
    //tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //s adamStateOldS* pss = s adamStateIF( tinP , postOldCommentP ) ;
    //if( pss ) setFlashIF( tinP , *pss , flashCountdownP , flashPeriodP , flagsFlashP ) ;
    //tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090021.paperoldc.setflashif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090025.paperoldc.flagsmodeif BEGIN
#define DDNAME       "3func.35090025.paperoldc.flagsmodeif"
#define DDNUMB      (countT)0x35090025
#define IDFILE      (countT)0xb2b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT paperOldC::flagsModeIF( tinS& tinP )/*1*/
{
    return tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090025.paperoldc.flagsmodeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090027.paperoldc.queryresettabfreshif BEGIN
#define DDNAME       "3func.35090027.paperoldc.queryresettabfreshif"
#define DDNUMB      (countT)0x35090027
#define IDFILE      (countT)0xb2c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT paperOldC::queryResetTabFreshIF( tinS& tinP )/*1*/
{
    ZE( countT , rv ) ;
    if( tinP.pAdamGlobal1->_paperOldC_.cTabFreshRequests )
    {
        rv = tinP.pAdamGlobal1->_paperOldC_.cTabFreshRequests ;
        tinP.pAdamGlobal1->_paperOldC_.cTabFreshRequests = 0 ;
    }
    return rv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090027.paperoldc.queryresettabfreshif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090028.paperoldc.requesttabfreshif BEGIN
#define DDNAME       "3func.35090028.paperoldc.requesttabfreshif"
#define DDNUMB      (countT)0x35090028
#define IDFILE      (countT)0xb2d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::requestTabFreshIF( tinS& tinP )/*1*/
{
    inc02AM( tinP.pAdamGlobal1->_paperOldC_.cTabFreshRequests ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090028.paperoldc.requesttabfreshif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090029.paperoldc.grabif BEGIN
#define DDNAME       "3func.35090029.paperoldc.grabif"
#define DDNUMB      (countT)0x35090029
#define IDFILE      (countT)0xb2e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::grabIF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , idLineP , idiFileP , pbBitsP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.35090029.paperoldc.grabif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.3509002a.paperoldc.ungrabif BEGIN
#define DDNAME       "3func.3509002a.paperoldc.ungrabif"
#define DDNUMB      (countT)0x3509002a
#define IDFILE      (countT)0xb2f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperOldC::ungrabIF( tinS& tinP )/*1*/
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35090* : 3func.3509002a.paperoldc.ungrabif END
