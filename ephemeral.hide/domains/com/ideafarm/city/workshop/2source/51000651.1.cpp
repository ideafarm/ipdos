//SOURCE: 5adam.51000651.1 BEGIN
#define DDNAME "5adam.51000651.1"
#define DDNUMB 0x51000651
#define IDFILE (countT)0x0
#define postHEADER "51000651.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000651.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::WAKEhIDE FOR PRODUCTION
//THIS IS SO THAT THE USER INTERFACE IS CLEAN
//EACH HARDWARE HOST HAS A HARDWARE HOME AND OPTIONALLY WO OR MORE LOGIN HOMES
//HOMES IN THE IPDOS CLOUD ARE THUS OF OO TYPES
//BUT THE DISTINCTION IS TRANSPARENT TO ALL IPDOS FUNCTIONALITY INCLUDING INTERHOME COMMUNICATION
//ALL LOGIN HOMES HAVE FULL ACCESS TO THE HARDWARE, BUT HARDWARE HOMES DO NOT HAVE ANY ACCESS TO A HUMAN OPERATOR
//ACCESS TO A HUMAN OPERATOR IS AN OPTIONAL "FEATURE", USING MICROSOFT'S TERMINOLOGY
//IN THE FUTURE, THE TYPE OF THE HARDWARE WILL BE A FEATURE, TOO, DISTINGUISHING LAPTOP HARDWARE FROM SMARTPHONE HARDWARE
//WHEN DIFFERENT TYPES OF HARDWARE EXIST IN THE IPDOS CLOUD, THE FEATURE LIST WILL EXPAND TO INDICATE THE PRESENCE OR ABSENCE OF PARTICULAR CAPABILITIES SUCH AS TELEPHONY AND A FULL KEYBOARD AND LARGE DISPLAY

/*1*/WAKEhIDE( "ifcIDaDAM_PISS" )/*1*/

// NOTE 1: AVOIDING POOL OVERFLOW
//
// IF AN EXCESSIVELY LARGE FILE IS DROPPED, IT WILL BOUNCE IMMEDIATELY TO THE ERROR FOLDER
// THIS IS TO AVOID POOL OVERFLOW, WHICH OCCURS BECAUSE INPUT TEXT IS CONVERTED TO STRINGS OF strokeS
// THE HARDCODED LIMIT IS INTENDED TO SUFFICE FOR WO IFC QUARTER'S WORTH OF DATA
// WHEN IPDOS (tm) IS PORTED TO 04 BIT HARDWARE, THE NEED FOR THIS LIMIT WILL VANISH

boolT myCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP )
{
    boolT bDoIt = 1 ;
    return bDoIt ;
}

TASK( tmRenameF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    strokeS* psttDropInP        = (strokeS*)pTaskP->c1 ;
    strokeS* psttNeverDropHereP = (strokeS*)pTaskP->c2 ;

    TN( tDropIn        , psttDropInP        ) ;
    TN( tNeverDropHere , psttNeverDropHereP ) ;

    TN( tUser , thirdC::postUserNameIF() ) ;

    ZE( strokeS* , psttmDropIn ) ;
    etThread.diskMapFileNameF( tinP , psttmDropIn , psttDropInP ) ; ___( psttmDropIn ) ;
    etThread.delF( tinP , psttDropInP ) ;
    
    boolT bWoth = 1 ;
    handleC hWait( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEwAIT ) ;
    while( !ether && !POOP )
    {
        if( etThread.etherC::diskWaitDirF( tinP , hWait , ether , psttmDropIn , flWAITdIR_RECURSE | flWAITdIR_FILEnAME | flWAITdIR_DIRnAME ) || bWoth )
        {
            if( bWoth ) bWoth = 0 ;

            TN( tTo , "///ideafarm/IdeaFarm " "(tm)/" ) ; tTo += tUser+T("/Pick Up Files Ready for Processing Here/") ;
            strokeS* psttzTo = tTo ;
    
            ZE( countT , cDirs ) ;
            ZE( countT , cFiles ) ;
            etThread.diskWalkRenameForArchivalF( tinP , cDirs , cFiles , ether , psttzTo , psttmDropIn , myCBF ) ;
            CONoUTrAW5( "" , cDirs , " " , cFiles , "\r\n" ) ;
        }
    }
    etThread.delF( tinP , psttmDropIn ) ;
}
DONE( tmRenameF )

TASK( tmCleanF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    const strokeS* const psttBounceP   = (strokeS*)pTaskP->c1 ;
    const strokeS* const psttDropSoilP = (strokeS*)pTaskP->c2 ;

    TN( tBounce  , psttBounceP  ) ;
    TN( tDrop , psttDropSoilP ) ;
    TN( tSlash , "/" ) ;    

    IFsCRATCH
    {
        boolT bWoth = 1 ;
        handleC hWait( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEwAIT ) ;
        while( !ether && !POOP )
        {
            if( etThread.etherC::diskWaitDirF( tinP , hWait , ether , tDrop , flWAITdIR_DIRnAME ) || bWoth )
            {
                if( bWoth ) bWoth = 0 ;

                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ZE( countT , cFail ) ;
                do
                {
                    soulC soul1m( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.clean.menu" ) ;
                    etThread.boxMenuF( tinP , soul1m , tDrop+T("*") , 0 , TUCK ) ;
                    FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
                    {
                        if( psttc1[ CSpREFIX - 1 + psttc1->idAdam ].idAdam == '/' )                                 // IF DIRECTORY
                        {
                            ZE( strokeS* , psttPath ) ;
                            ZE( strokeS* , psttShort ) ;
                            countT ids = etThread.etherC::strBisectF( tinP , psttPath , psttShort , psttc1 , tSlash , - 2 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPath ) ; ___( psttShort ) ;
                            if( ids )                                                                                   // IF HAVE PATH (ALWAYS TRUE)
                            {
                                TN( tShort , psttShort ) ;

                                SCOOPS
                                tinP.pEtScratch->diskMoveFileOrDirF( tinP , tBounce+tShort , psttc1 , 1 ) ;                   // MOVE TO ANUS
                                if( POOP )                                                                                  // IF COULD NOT MOVE TO ANUS
                                {
                                    POOPR
        
                                    ZE( strokeS* , psttn ) ;
                                    etThread.strMakeF( tinP , LF , psttn , tBounce , TUCK+tShort.csF( tinP ) ) ; ___( psttn ) ;
        
                                    tinP.pEtScratch->diskMoveFileOrDirUniqueF( tinP , psttn , psttc1 , 1 ) ;                    // MOVE UNIQUE TO ANUS
                                    etThread.delF( tinP , psttn ) ;
                                    if( POOP )                                                                                  // IF COULD NOT MOVE UNIQUE
                                    {
                                        POOPR
                                        cFail ++ ;                                                                                  // INCREMENT cFail
                                    }
                                }
                            }
                            etThread.delF( tinP , psttPath ) ;
                            etThread.delF( tinP , psttShort ) ;
                        }
                    }
                    FORsTRINGSiNsPANNEDcOMBINEDtAIL1

                    _IO_
                    if( cFail ) { ++ s ; ether.osSleepF( tinP , TOCK ) ; }
                }
                while( cFail ) ;
            }
        }
    }
}
DONE( tmCleanF )

TASK( tmPingF ) // MAKE MYSELF VISIBLE TO OTHER PISS CELLS ON THE LAN
if( pTaskP )
{
    nicNameC nnCast = socketC::nicNameIF( tinP , etThread , T("!broadcast") ) ;
    
    socketC sockPing( tinP , etThread , TAG( TAGiDnULL ) , ifcSOCKETtYPE_DATAgRAM , flSOCKETc_CANbROADCAST ) ;
    countT idPortMe = sockPing.bindF( tinP ) ;
    
    soulC sOut( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.ping.out" ) ;
    sOut << (countT)1 ; //PING
    
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    while( !ether && !POOP )
    {
        sockPing.writeF( tinP , ifcIDpORT_DOOR , nnCast , sOut ) ;
    
        _IO_
        ++ s ; ether.osSleepF( tinP , TOCK ) ;
    }
}
DONE( tmPingF )

TASK( tmObeySoilF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    countT&  cFailP                     = *(countT*)pTaskP->c1 ;
    const strokeS* const psttzPickSoilP = (strokeS*)pTaskP->c2 ;
    const strokeS* const psttzBounceP   = (strokeS*)pTaskP->c3 ;
    strokeS* psttFileNameP              = (strokeS*)pTaskP->c4 ;
    osTextT* postiP                     = (osTextT*)pTaskP->c5 ;
    countT   costiP                     =           pTaskP->c6 ;

    //CANNOT DO THIS WHEN QUEUEING WORK FOR A JOB, BECAUSE HAVE MULTIPLE tmObeySoilF THREADS AND THIS USES TOO MUCH MEMORY
    //THIS IS JUST A PREALLOCATOR SO WILL FIND OUT EARLIER IF CANNOT GET THIS MEMORY
    //THIS NEEDS TO BE REDESIGNED SO WILL USE ONLY A SINGLE INSTANCE OF barryC EVEN IF QUEUEING JOBS AND EVEN IF USING REPEAT
    //UNTIL THESE SCENAIOS ARE HANDLED SO THAT ONLY WO INSTANCE IS CT'D, THE FOLLOWING PREALLOCATING LINES MUST BE COMMENTED OUT

    //20171202@0909: PROVISIONALLY ENABLING THIS, SO IT IS PROVISIONALLY ILLEGAL TO RUN MORE THAN WO tmObeySoilF THREAD PER HOME
    //20171229@1256: COMMENTED barryC PREALLOCATION OUT BECAUSE IT CONSUMES 1/4 OF THE ADDRESS SPACE

    //etThread.traceF( tinP , T("setting up / ct'ing barryC") ) ;
    //tinP.pBarryUtility = new( 0 , tinP , LF ) barryC( tinP ) ; ___( tinP.pBarryUtility ) ;
    //etThread.traceF( tinP , T("setting up / ct'ed barryC") ) ;

    ZE( strokeS* , psttPath ) ;
    ZE( strokeS* , psttShort ) ;
    countT ids = etThread.etherC::strBisectF( tinP , psttPath , psttShort , psttFileNameP , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPath ) ; ___( psttShort ) ;
    if( ids )
    {
        _IO_
        TN( tPickSoil , psttzPickSoilP ) ;
        TN( tShort , psttShort ) ;
        TN( tTo , "" ) ;
        //if( costiP > costiMax ) // NOTE 1: AVOIDING POOL OVERFLOW
        //{
        //    tTo = T(psttzBounceP) ;
        //    etThread.boxPutF( tinP , tTo+T("read.this.error.message.txt") , tErrorFileTooBig , tErrorFileTooBig.csF( tinP ) ) ;
        //}
        //else
        {
            _IO_
            ZE( boolT , bAbort ) ;
            soulC soulNativeLint( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.native.lint" ) ;
            {
                _IO_
                soulC soulNativeIn( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.native.in" ) ;
                {
                    _IO_
                    soulC soulPrepared( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.prepared" ) ;
                    {
                        _IO_
                        etThread.traceF( tinP , T("loading soulAsciiIn") ) ;
                        soulC soulAsciiIn( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.ascii.in" ) ;

                        if( costiP <= TOCK )
                        {       
                            _IO_
                            ZE( strokeS* , pstti ) ;                                                                  // INSPECT AND PERHAPS ANNOTATE
                            etThread.strMakeFromOsTextF( tinP , pstti , postiP , costiP ) ; ___( pstti ) ;

                            etThread.strFuseF( tinP , soulAsciiIn , pstti , 0 , S1C( '\\' ) , T("[]") ) ;
                            etThread.delF( tinP , pstti ) ;
                        }
                        else
                        {
                            _IO_
                            countT cDo = costiP ;
                            osTextT* postzBite = postiP ;
                            while( cDo )
                            {
                                _IO_
                                etThread.traceF( tinP , T("loading soulAsciiIn [cDo]: ")+TF2(cDo,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                countT costBite = cDo <= TOCK ? cDo : TOCK ;
                                while( postzBite[ costBite - 1 ] == '\\' ) costBite -- ; // LATH MUST NOT BE ESCAPE CHAR
                                cDo -= costBite ;

                                ZE( strokeS* , pstti ) ;                                                                  // INSPECT AND PERHAPS ANNOTATE
                                etThread.strMakeFromOsTextF( tinP , pstti , postzBite , costBite ) ; ___( pstti ) ;
                                postzBite += costBite ;

                                etThread.strFuseF( tinP , soulAsciiIn , pstti , 0 , S1C( '\\' ) , T("[]") ) ;
                                etThread.delF( tinP , pstti ) ;
                            }
                        }

                        etThread.traceF( tinP , T("loading soulPrepared") ) ;
                        {
                            _IO_
                            for( countT idPass = 1 ; ; idPass ++ )
                            {
                                _IO_
                                etThread.traceF( tinP , T("loading soulPrepared [idPass]: ")+TF2(idPass,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                if( !etThread.etherSoilF( tinP , ether , soulPrepared , soulAsciiIn , ifcIDmODEeTHERsOIL_PREPAREsOURCE , 0 , flETHERsOILf_CONSUMEiNPUT , postiP , costiP ) )
                                {
                                    _IO_
                                    etThread.traceF( tinP , T("loaded soulPrepared for final pass [idPass]: ")+TF2(idPass,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                    break ;
                                }
                                else
                                {
                                    _IO_
                                    etThread.traceF( tinP , T("pouring for another pass [idPass,soulPrepared]: ")+TF2(idPass,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2((countT)soulPrepared,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                    while( soulPrepared )
                                    {
                                        _IO_
                                        countT cRemain = soulPrepared ;
                                        if( !( cRemain % ( TUCK << 4 ) ) ) etThread.traceF( tinP , T("[cRemain]: ")+TF2(cRemain,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                        ZE( strokeS* , psttp ) ;
                                        soulPrepared >> psttp ; ___( psttp ) ;
                                        soulAsciiIn << psttp ;
                                        etThread.delF( tinP , psttp ) ;
                                    }
                                }
                            }
                        }
                    }

                    //U::COMMENT OUT IN PRODUCTION
                    //{
                    //    soulC soulTmpDebug( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.tmp.debug" ) ;
                    //    while( soulPrepared )
                    //    {
                    //        ZE( strokeS* , psttp ) ;
                    //        soulPrepared >> psttp ; ___( psttp ) ;
                    //        soulTmpDebug << psttp ;
                    //        etThread.delF( tinP , psttp ) ;
                    //    }
                    //
                    //    //LOGrAW( "\r\n---- PREPARED: (BEGIN) ----\r\n" ) ;
                    //    while( soulTmpDebug )
                    //    {
                    //        ZE( strokeS* , psttp ) ;
                    //        soulTmpDebug >> psttp ; ___( psttp ) ;
                    //        soulPrepared << psttp ;
                    //        LOGrAW( T(psttp) ) ;
                    //        etThread.delF( tinP , psttp ) ;
                    //    }
                    //    //LOGrAW( "\r\n---- PREPARED: (END) ----\r\n" ) ;
                    //}

                    etThread.traceF( tinP , T("loading soulNativeIn") ) ;
                    etThread.etherSoilF( tinP , ether , soulNativeIn , soulPrepared , ifcIDmODEeTHERsOIL_NATIVEfROMaSCII , 0 , flETHERsOILf_CONSUMEiNPUT , postiP , costiP ) ;
                }

                etThread.traceF( tinP , T("loading soulNativeLint and calculating bAbort") ) ;
                bAbort = !!etThread.etherSoilF( tinP , ether , soulNativeLint , soulNativeIn , ifcIDmODEeTHERsOIL_LINT , 0 , flETHERsOILf_CONSUMEiNPUT , postiP , costiP ) ;
            }

            if( bAbort )
            {
                _IO_
                DEL( tinP.pBarryUtility ) ;
                etThread.traceF( tinP , T("abort: loading soulAsciiLint") ) ;
                soulC soulAsciiLint( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.ascii.lint" ) ;
                etThread.etherSoilF( tinP , ether , soulAsciiLint , soulNativeLint , ifcIDmODEeTHERsOIL_ASCIIfROMnATIVE , 0 , flETHERsOILf_CONSUMEiNPUT , postiP , costiP ) ;

                //U:: TO FIND A BUG
                //while( soulAsciiLint )
                //{
                //    ZE( strokeS* , psttp ) ;
                //    soulAsciiLint >> psttp ; ___( psttp ) ;
                //    etThread.strokeF( tinP , T("[part]: \"")+T(psttp)+T("\"\r\n") ) ;
                //    etThread.delF( tinP , psttp ) ;
                //}

                etThread.traceF( tinP , T("abort: writing poop file") ) ;
                tTo = T(psttzBounceP) ;                                                                               // POINT TO ANUS
                {
                    _IO_
                    OPENfILEwRITE1( tTo+T("poop.")+tShort )
                    while( soulAsciiLint )
                    {
                        _IO_
                        ZE( strokeS* , psttr ) ;
                        soulAsciiLint >> psttr ; ___( psttr ) ;

                        ZE( osTextT* , postr ) ;
                        countT costr = etThread.strMakeF( tinP , LF , postr , psttr ) ; ___( postr ) ;
                        etThread.delF( tinP , psttr ) ;
                    
                        etThread.fileWriteF( tinP , hFile1 , postr , costr ) ;
                        etThread.delF( tinP , postr ) ;
                    }
                }
            }
            else
            {
                _IO_
                etThread.traceF( tinP , T("loading soulReports") ) ;
                soulC soulReports( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.reports" , CBjOTbOOKwRAPPER( CBjOTbOOKdEFAULT , 1 ) ) ;

                //TO GET REPORTS, COMMENT OUT THE CONSUMEiNPUT FLAG
                etThread.traceF( tinP , T("loading soulReports / calling etherSoilF") ) ;

                do     soulReports.removeAllF( tinP ) ;
                while( !ether && !POOP && etThread.etherSoilF( tinP , ether , soulReports , soulNativeLint , ifcIDmODEeTHERsOIL_REPORT , 0 , flETHERsOILf_null/*flETHERsOILf_CONSUMEiNPUT*/ , postiP , costiP ) ) ; // WHILE IS TO OBEY bRepeat ; WILL REPEAT FOREVER UNTIL I AM FIRED
                DEL( tinP.pBarryUtility ) ;

                TN( tn , "" ) ;
                TN( tPrefix , "report." ) ;
                TN( tSuffix , ".soil" ) ;
                TN( tFile , "" ) ;
                while( soulReports )
                {
                    _IO_
                    etThread.traceF( tinP , T("writing report file") ) ;
                    ZE( strokeS* , psttf ) ;
                    soulReports >> psttf ; ___( psttf ) ;
                    tFile = T(psttf) ;
                    etThread.delF( tinP , psttf ) ;
            
                    soulC soulr( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.report" ) ;
                    soulReports >> soulr ;
                    etThread.traceF( tinP , T("loading soulReports / [cFields,tFile]: ")+TF2((countT)soulr,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    \"")+tFile+T("\"") ) ;
            
                    OPENfILEwRITE1( tPickSoil+tPrefix+tFile+tSuffix )
                    while( soulr )
                    {
                        _IO_
                        ZE( strokeS* , psttr ) ;
                        soulr >> psttr ; ___( psttr ) ;
            
                        ZE( osTextT* , postr ) ;
                        countT costr = etThread.strMakeF( tinP , LF , postr , psttr ) ; ___( postr ) ;
                        etThread.delF( tinP , psttr ) ;
                    
                        etThread.fileWriteF( tinP , hFile1 , postr , costr ) ;
                        etThread.delF( tinP , postr ) ;
                    }
                }
                etThread.traceF( tinP , T("where: unregistered thread") ) ;

                // TAKES A LOT OF TIME AND I DO NOT NEED IT, EXCEPT WHEN DEBUGGING SOIL REPLACEMENTS
                if( soulNativeLint )
                {
                    _IO_
                    etThread.traceF( tinP , T("loading soulAsciiOut") ) ;
                    soulC soulAsciiOut( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.ascii.out" ) ; //THIS IMAGE SHOULD BE IDENTICAL TO THE LINT IMAGE IF NO MARKS, SO THIS STEP COULD BE ELIMINATED; WE DO IT THIS WAY BECAUSE, OTHER THAN SOME MORE CODE, IT IS COSTLESS AND CONFIDENCE OF CORRECTNESS IS HIGHER (LINT MARKUP CODE IS COMPLEX SO MIGHT CONTAIN BUGS)
                    etThread.etherSoilF( tinP , ether , soulAsciiOut , soulNativeLint , ifcIDmODEeTHERsOIL_ASCIIfROMnATIVE , 0 , flETHERsOILf_CONSUMEiNPUT , postiP , costiP ) ;

                    etThread.traceF( tinP , T("writing pseudoduplicate file of input file from soulAsciiOut") ) ;
                    tTo = tPickSoil ;                                                                              // POINT TO BLOOD
                    {
                        _IO_
                        OPENfILEwRITE1( tTo+T("poop.")+tShort )
                        while( soulAsciiOut )
                        {
                            _IO_
                            ZE( strokeS* , psttr ) ;
                            soulAsciiOut >> psttr ; ___( psttr ) ;
                    
                            ZE( osTextT* , postr ) ;
                            countT costr = etThread.strMakeF( tinP , LF , postr , psttr ) ; ___( postr ) ;
                            etThread.delF( tinP , psttr ) ;
                        
                            etThread.fileWriteF( tinP , hFile1 , postr , costr ) ;
                            etThread.delF( tinP , postr ) ;
                        }
                    }
                }
            }
        }

        etThread.traceF( tinP , T("cleaning up") ) ;
        tinP.pEtScratch->diskMoveFileOrDirF( tinP , tTo+tShort , psttFileNameP , 1 ) ;                     // MOVE TO ANUS
        if( POOP )                                                                                  // IF COULD NOT MOVE TO ANUS
        {
            _IO_
            POOPR
        
            ZE( strokeS* , psttn ) ;
            etThread.strMakeF( tinP , LF , psttn , tTo , TUCK+tShort.csF( tinP ) ) ; ___( psttn ) ;
        
            tinP.pEtScratch->diskMoveFileOrDirUniqueF( tinP , psttn , psttFileNameP , 1 ) ;                    // MOVE UNIQUE TO ANUS
            etThread.delF( tinP , psttn ) ;
            if( POOP )                                                                                  // IF COULD NOT MOVE UNIQUE
            {
                POOPR
                inc02AM( cFailP ) ;                                                                     // INCREMENT cFail
            }
        }
    }
    etThread.delF( tinP , psttPath ) ;
    etThread.delF( tinP , psttShort ) ;
    etThread.delF( tinP , psttFileNameP ) ;
    etThread.delF( tinP , postiP ) ;
}
etThread.traceF( tinP , T("thread exit") ) ;
DONE( tmObeySoilF )

TASK( tmHireF )

{
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;  // ENOUGH TIME SO THAT I WILL BE ABLE TO PROCESS A SETTINGS UPDATE
}

boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;
bSandbox = 0 ;
if( !bSandbox ) ether.ifcHireF( tinP , T("PISS") , ifcIDaDAM_SNAPwORDS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; // flHIRE_DISPLAYaUTO CAN BE COMMENTED OUT TO AVOID WDW FOR ROOT CLOUD INSTANCE WHICH IS USUALLY NOT INTERESTING

DONE( tmHireF )

//TASK( tmFixArcNamesF )
//etThread.traceF( tinP , T("archive: fixing bad file names, if any") ) ;
//etThread.disk FixBadFileNamesF( tinP , T("///ideafarm/IdeaFarm " "(tm)/")+T(thirdC::postUserNameIF())+T("/Drop Files Here To Archive/") ) ;
//etThread.traceF( tinP , T("archive: fixed  bad file names, if any") ) ;
//DONE( tmFixArcNamesF )

TODO

TN( tComputerName , "" ) ;
{
    TN( tHome , "" ) ; tHome = T("///d/ideafarm.home.")+TF2(etherC::ifc_idHomeIdisk_IF(),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;

    ZE( strokeS* , psttName ) ;
    //U::CALL THIS ONLY IF SETTINGS FILES EXIST: etThread.querySettingF( tinP , psttName , T("computer.name") ) ;

    if( psttName && psttName->idAdam ) tComputerName = T(psttName) ;
    etThread.delF( tinP , psttName ) ;
}

TN( tUser         , thirdC::postUserNameIF() ) ;
TN( tDesk         , "///ideafarm/IdeaFarm " "(tm)/"  ) ;
TN( tDeskUser     , "///ideafarm/IdeaFarm " "(tm)/"  ) ; tDeskUser += tUser+T("/") ;

TN( tBounce        , "///ideafarm/IdeaFarm " "(tm)/" ) ; tBounce        += tUser+T("/Pick Up Rejected Files Here/"                                                   ) ;
TN( tDropArchive   , "///ideafarm/IdeaFarm " "(tm)/" ) ; tDropArchive   += tUser+T("/Drop Files Here To Archive/"                                                    ) ;
TN( tNeverDropHere , "///ideafarm/IdeaFarm " "(tm)/" ) ; tNeverDropHere += tUser+T("/never.drop.here/"                                                               ) ;
TN( tDropIn        , "///ideafarm/IdeaFarm " "(tm)/" ) ; tDropIn        += tUser+T("/Drop Files From Devices Here/"                                                  ) ;
TN( tDropIn1       , "///ideafarm/IdeaFarm " "(tm)/" ) ; tDropIn1       += tUser+T("/Drop Files From Devices Here/camera/"                                           ) ;
TN( tDropIn2       , "///ideafarm/IdeaFarm " "(tm)/" ) ; tDropIn2       += tUser+T("/Drop Files From Devices Here/voice.recorder/"                                   ) ;
TN( tDropSoil      , "///ideafarm/IdeaFarm " "(tm)/" ) ; tDropSoil      += tUser+T("/Drop a Copy of SOIL (tm) Text Here/"                                            ) ;
TN( tEatingSoil    , "///ideafarm/IdeaFarm " "(tm)/" ) ; tEatingSoil    += tUser+T("/SOIL (tm) Text Being Eaten/"                                                    ) ;
TN( tPickToProcess , "///ideafarm/IdeaFarm " "(tm)/" ) ; tPickToProcess += tUser+T("/Pick Up Files Ready for Processing Here/"                                       ) ;
TN( tPickSoil      , "///ideafarm/IdeaFarm " "(tm)/" ) ; tPickSoil      += tUser+T("/Pick Up SOIL (tm) Reply Text Here/"                                             ) ;
{
    textC* pptDir[] =
    {
        &tDesk          , // 0
        &tDeskUser      , // 1
        &tBounce        , // 2
        &tDropArchive   , // 3
        &tNeverDropHere , // 4
        &tDropIn        , // 5 OPTIONAL: NOT CREATED UNLESS NONE EXIST
        &tDropIn1       , // 6 OPTIONAL: NOT CREATED UNLESS NONE EXIST
        &tDropIn2       , // 7
        &tDropSoil      , // 8
        &tEatingSoil    , // 9
        &tPickToProcess , // a
        &tPickSoil        // b
    } ;

    //20140415@1204: DISABLED THIS SO WILL CREATE ANY MISSING FOLDERS: if( !etThread.diskFileExistsF( tinP , tBounce ) )

    ZE( countT , cMade ) ;
    for( countT offi = 0 ; offi < sizeof pptDir / sizeof pptDir[ 0 ] ; offi ++ )
    {
        if
        (
            !etThread.diskFileExistsF( tinP , *pptDir[ offi ] )
            &&
            (
                !cMade
                ||
                (
                    offi != 3
                    &&
                    offi != 4
                )
            )
        )
        {
            cMade ++ ;
            etThread.diskMakeDirF( tinP , *pptDir[ offi ] ) ;
        }
    }
}

//const countT costiMax = CSTTmAXsOIL ;
//TN( tErrorFileTooBig , "" ) ; tErrorFileTooBig = T(
//
//    "Error: The input file is too large.\r\n"
//    "\r\n"
//    "The file that you have dropped is larger than ")+TF2(costiMax,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" bytes (")+TF4(costiMax,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(" bytes).\r\n"
//    "IPDOS (tm) is designed to run quickly and efficiently on 04 bit (64_9 bit) computers with lots of memory available.\r\n"
//    "IPDOS (tm) will not realize this architectural potential until it is ported to the 04 bit cpu architecture.\r\n"
//    "\r\n"
//    "Workaround: Limit your input file to data for the current IdeaFarm " "(tm) City calendar quarter.\r\n"
//    "When each quarter ends, use a final version of the file for that quarter to obtain IdeaFarm " "(tm) Hoe reports for that quarter.\r\n"
//    "If you generate too much of data within a single quarter, divide the quarter into 2 or 4 or 8 reporting periods.\r\n"
//
//) ;

{
    ZE( strokeS* , psttDropIn ) ;
    ZE( strokeS* , psttNeverDropHere ) ;
    etThread.strMakeF( tinP , LF , psttDropIn , tDropIn ) ; ___( psttDropIn ) ;
    etThread.strMakeF( tinP , LF , psttNeverDropHere , tNeverDropHere ) ; ___( psttNeverDropHere ) ;

    etThread.osThreadF( TaRG1( tmRenameF ) , (countT)psttDropIn , (countT)psttNeverDropHere ) ;
}

//20161112@1559: DISABLED AS PART OF ENHANCING 6d9 TO OPTIONALLY RENAME ALL LOCAL MASTER FILES TO NUMERIC NAMES, PRESERVING THE ORIGINAL NAME IN A HASH LOOKUP FILE
//etThread.osThreadF( TaRG1( tmFixArcNamesF ) ) ; // REDUNDANT, JUST IN CASE A FILE WITH A BAD NAME HAS GOTTEN INTO THE ARCHIVE ; U::ADD bQuitP PARAMETER

//etThread.osThreadF( TaRG1( tmPingF ) ) ; //U::COMMENTED OUT BECAUSE SAW A FAILURE IN s_writeF 20121219@2102
etThread.osThreadF( TaRG1( tmCleanF ) , (countT)(strokeS*)tBounce , (countT)(strokeS*)tDropSoil ) ;

ether.osThreadF( TaRG1( tmHireF ) ) ;

if( !etThread.strCompareF( tinP , tComputerName , T("ifo.master") ) )
{
    //THIS IS THE WO TO USE, BUT ONLY IF MASTER: ether.ifcHireF( tinP , T("U::TO FIND A WINDOWS RESOURCE LEAK") , ifcIDaDAM_ROOThTTPsERVER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; //U:: TO FIND A WINDOWS RESOURCE LEAK
    //ether.osThread AdamF( tinP , ifcIDaDAM_ROOThTTPsERVER ) ;
}

const countT idDesireSave = etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZIER ) ;

IFsCRATCH
{
    boolT bWoth = 1 ;
    handleC hWait( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEwAIT ) ;
    while( !ether && !POOP )
    {
        if( etThread.etherC::diskWaitDirF( tinP , hWait , ether , tDropSoil , flWAITdIR_FILEnAME ) || bWoth )
        {
            if( bWoth ) bWoth = 0 ;

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ZE( countT , cFail ) ;
            do
            {
                cFail = 0 ;

                soulC soul1m( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.eat.menu" ) ;
                etThread.boxMenuF( tinP , soul1m , tDropSoil+T("*.soil") , 0 , TUCK ) ; // FOR ALL FILES OR DIRS "*.soil"
                FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
                {
                    //CONoUTrAW( T("inspecting: ")+T(psttc1)+T("\r\n") ) ;

                    if( psttc1[ CSpREFIX - 1 + psttc1->idAdam ].idAdam != '/' )                                 // IF NOT DIRECTORY
                    {
                        TN( tFileBeingEaten , "" ) ;
                        {
                            ZE( strokeS* , psttPath ) ;
                            ZE( strokeS* , psttShort ) ;
                            countT ids = etThread.etherC::strBisectF( tinP , psttPath , psttShort , psttc1 , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ;
                            ___( psttPath ) ;
                            ___( psttShort ) ;
                            tFileBeingEaten = tEatingSoil+T(psttShort) ;
                            etThread.delF( tinP , psttPath ) ;
                            etThread.delF( tinP , psttShort ) ;

                            tinP.pEtScratch->diskMoveFileOrDirF( tinP , tFileBeingEaten , psttc1 , 1 ) ;
                            if( POOP ) POOPR
                        }

                        SCOOPS
                        ZE( osTextT* , posti ) ;
                        ZE( countT   , costi ) ;
                        tinP.pEtScratch->boxGetShadowF( tinP , posti , costi , tFileBeingEaten , 1 ) ; ___( posti ) ;        // GET THE FILE

                        if( POOP )                                                                                  // IF COULD NOT GET THE FILE
                        {
                            POOPR
                            cFail ++ ;                                                                                  // INCREMENT cFail
                            CONoUTrAW( T("could not input ")+tFileBeingEaten+T(" ; will nap, then retry\r\n") ) ;
                        }
                        else if( !costi ) etThread.delF( tinP , posti ) ;
                        else
                        {
                            ZE( strokeS* , psttFileName ) ;
                            etThread.strMakeF( tinP , LF , psttFileName , tFileBeingEaten ) ; ___( psttFileName ) ;
                            etThread.osThreadF( TaRG1( tmObeySoilF ) , (countT)&cFail , (countT)(strokeS*)tPickSoil , (countT)(strokeS*)tBounce , (countT)psttFileName , (countT)posti , costi ) ; psttFileName = 0 ; posti = 0 ;
                        }
                    }
                }
                FORsTRINGSiNsPANNEDcOMBINEDtAIL1

                _IO_
                if( cFail ) { ++ s ; ether.osSleepF( tinP , TOCK ) ; }
            }
            while( cFail ) ;
        }
    }
}

etThread.osThreadSwitchingDesireF( tinP , idDesireSave ) ;

REST


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef DDNUMB
#undef DDNAME
#undef IDFILE
#undef postHEADER
#undef ifcENABLEtHIRDpARTIES
//SOURCE: 5adam.51000651.1 END
