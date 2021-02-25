//SOURCE: 5adam.51000767.1 BEGIN
#define DDNAME "5adam.51000767.1"
#define DDNUMB 0x51000767
#define IDFILE (countT)0x0
#define postHEADER "51000767.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000767.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_CLOAK" )/*1*/


typedef enum _FILE_INFO_BY_HANDLE_CLASS_updated {
  FileBasicInfo_updated,
  FileStandardInfo_updated,
  FileNameInfo_updated,
  FileRenameInfo_updated,
  FileDispositionInfo_updated,
  FileAllocationInfo_updated,
  FileEndOfFileInfo_updated,
  FileStreamInfo_updated,
  FileCompressionInfo_updated,
  FileAttributeTagInfo_updated,
  FileIdBothDirectoryInfo_updated,
  FileIdBothDirectoryRestartInfo_updated,
  FileIoPriorityHintInfo_updated,
  FileRemoteProtocolInfo_updated,
  FileFullDirectoryInfo_updated,
  FileFullDirectoryRestartInfo_updated,
  FileStorageInfo_updated,
  FileAlignmentInfo_updated,
  FileIdInfo_updated,
  FileIdExtdDirectoryInfo_updated,
  FileIdExtdDirectoryRestartInfo_updated,
  FileDispositionInfoEx_updated,
  FileRenameInfoEx_updated,
  FileCaseSensitiveInfo_updated,
  FileNormalizedNameInfo_updated,
  MaximumFileInfoByHandleClas_updateds
} FILE_INFO_BY_HANDLE_CLASS_updated, *PFILE_INFO_BY_HANDLE_CLASS_updated;



//CONJ: WATCOM'S NT HEADERS ARE OLD
typedef struct _FILE_FULL_DIR_INFO {
  ULONG         NextEntryOffset;
  ULONG         FileIndex;
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  LARGE_INTEGER EndOfFile;
  LARGE_INTEGER AllocationSize;
  ULONG         FileAttributes;
  ULONG         FileNameLength;
  ULONG         EaSize;
  WCHAR         FileName[1];
} FILE_FULL_DIR_INFO, *PFILE_FULL_DIR_INFO;


//U::MOVE TO BASE
countT unicodeLengthF( const unTextT* puntP )
{
    ZE( countT , cunt ) ;
    for( countT offi = 0 ; puntP[ offi ] ; offi ++ ) cunt ++ ;
    return cunt ;
}

//U::MOVE TO BASE
boolT unicodeToAnsiF( byteT* pbOutP , const countT cbOutP , const byteT* pbInP , countT cInP )
{
    if( cbOutP <= cInP ) return 1 ;

    while( cInP -- )
    {
        *( pbOutP ++ ) = *( pbInP ++ ) ;
        pbInP ++ ;
    }
    *pbOutP = 0 ;

    return 0 ;
}

boolT sinkFolderToCloakCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP , const countT* const pModuloDirsP , const countT* const pModuloFilesP )
{
    _IO_
    if( postNameP )
    {
        _IO_

        etherC& etherP            = *(etherC*)pcArgP[ 0 ] ;
        stackC& stFolderToCloakP  = *(stackC*)pcArgP[ 1 ] ;
        stackC& stFolderExcludeP  = *(stackC*)pcArgP[ 2 ] ;
        stackC& stFoldersExcludeP = *(stackC*)pcArgP[ 3 ] ;

        ifFileNameC ifName( tinP , etherP , postNameP ) ;
        TN( tName , ifName ) ;

        //etherP.traceF( tinP , tName ) ;

        ZE( strokeS* , psttf ) ;
        etherP.strMakeF( tinP , LF , psttf , tName ) ; ___( psttf ) ;

        if( stFoldersExcludeP )
        {
            ZE( countT , csttNeeded ) ;
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                strokeS* psttzf = (strokeS*)stFoldersExcludeP.downF( tinP , hWalk ) ;

                if( 1 == etherP.strIdF( tinP , psttzf , psttf ) )
                {
                    etherP.traceF( tinP , T("excluding folder and its tree:    ")+T(psttf) ) ;
                    etherP.delF( tinP , psttf ) ;
                    break ;
                }
            }
            while( !etherP && !stFoldersExcludeP.third && ~hWalk ) ;
        }

        if( psttf && stFolderExcludeP )
        {
            ZE( countT , ids ) ;
            stFolderExcludeP.sinkF( tinP , ids , psttf , flSTACKsINK_QUERY ) ;
            if( ids )
            {
                etherP.traceF( tinP , T("excluding folder but not its tree:    ")+T(psttf) ) ;
                etherP.delF( tinP , psttf ) ;
            }
        }

        if( psttf )
        {
            ZE( countT , ids ) ;
            stFolderToCloakP.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
            if( !ids ) etherP.delF( tinP , psttf ) ;
            else       psttf = 0 ;
        }
    }

    return 0 ;
}

voidT replaceCloakF( tinS& tinP , etherC& etherP , fileC*& pFlockP , const strokeS* const psttFolderP )
{
    //U:: SECURITY HOLE: A MALICIOUS CLIENT CAN EXPLOIT THIS BY EMITTING THIS COMMAND AND THEN STARTING A CYCLING RACE TO TRY TO OPEN THE HANDLE ITSELF, PREVENTING ME FROM OPENING IT
    //U:: ALT: SUPPORT THIS COMMAND ONLY ONCE PER PERIOD AND LAUNCH A THREAD TO WAIT A RANDOM AMOUNT OF TIME BEFORE CLOSING AND IMMEDIATELY REOPENING THIS FILE
    //U:: ALT: IF I CANNOT REOPEN THE FILE, SHUT DOWN THE COMPUTER IMMEDIATELY (DECISION: DO THIS)

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

    DEL( pFlockP ) ; //THIS IS NEEDED BECAUSE WINDOWS IS SUCH A PIECE OF SHIT: THERE IS NO OTHER WAY TO RESET THE HANDLE SO THAT THE NEXT QUERY DOES NOT RECEIVE "ERROR_NO_MORE_FILES"

    //CS:CODEsYNCH 51000767 51000767
    IFsCRATCH
    {
        SCOOPS

        pFlockP = new( 0 , tinP , LF ) fileC( tinP , psttFolderP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_BUMPkEY | flOPENdETAILS_DOnOTmAKEdIRiFnEEDED , ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , 1 ) ; ___( pFlockP ) ;

        if( POOP )
        {
            POOPRqUIET
            etherP.traceF( tinP , T("error: could not relock folder so am shutting this computer down (U::not really):    ")+T(psttFolderP) ) ;
            DEL( pFlockP ) ;

            //U:: SHUTDOWN THE COMPUTER BY FORCE HERE (SECURITY HOLE)
        }
        else
        {
            //etherP.traceF( tinP , T("folder relocked:    ")+T(psttFolderP) ) ;
        }
    }
    THREADmODE1rESTORE
}

voidT reportFilesSimpleF( tinS& tinP , etherC& etherP , socketC*& psoP , fileC*& pFlockP , const strokeS* const psttFolderP , const strokeS* const psttPatternP )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    // QUEUE FILE INFORMATION FOR DISPENSING LATER, AFTER RELOCK psttFolderP: THIS IS NECESSARY BECAUSE CLIENT MIGHT USE FILE INFORMATION RECEIVED TO OPEN FILES, WHICH WOULD PREVENT ME FROM RELOCKING

    etherP.traceF( tinP , T("reportFilesSimpleF [psttFolderP]:    \"")+T(psttFolderP)+T("\"") ) ;

    stackC stBlobIn( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_byteT ) ;
    {
        handleC& hFile = *pFlockP ;

        ZE( byteT* , pbBuffer ) ;
        countT cbBuffer = TOCK ; // PRODUCTION
        etherP.newF( tinP , LF , pbBuffer , cbBuffer ) ; ___( pbBuffer ) ;
        thirdC::c_memsetIF( tinP , pbBuffer , cbBuffer ) ;

        ZE( boolT , bDone ) ;
        do
        {
            byteT* pbCursor = pbBuffer ;
            boolT bOk = GetFileInformationByHandleEx( (HANDLE)hFile.osF( ifcIDtYPEhANDLE_FILE ) , (FILE_INFO_BY_HANDLE_CLASS)FileFullDirectoryInfo_updated , pbBuffer , cbBuffer ) ;
            if( !bOk )
            {
                countT rc = GetLastError() ;
                switch( rc )
                {
                    case ERROR_MORE_DATA :
                    case ERROR_BAD_LENGTH :
                    {
                        etherP.delF( tinP , pbBuffer ) ;
                        cbBuffer <<= 1 ;
                        etherP.newF( tinP , LF , pbBuffer , cbBuffer ) ; ___( pbBuffer ) ;
                        thirdC::c_memsetIF( tinP , pbBuffer , cbBuffer ) ;
                        break ;
                    }
                    case ERROR_NO_MORE_FILES :
                    {
                        bDone = 1 ;
                        break ;
                    }
                }
            }
            else
            {
                ZE( countT , cbUsed ) ;
                for(;;)
                {
                    FILE_FULL_DIR_INFO& info3 = *(FILE_FULL_DIR_INFO*)pbCursor ;

                    if( info3.NextEntryOffset )
                    {
                        cbUsed += info3.NextEntryOffset ;
                        pbCursor += info3.NextEntryOffset ;
                    }
                    else
                    {
                        cbUsed += sizeof( FILE_FULL_DIR_INFO ) ;                                    // 2 EXTRA BYTES BECAUSE CONTAINS WOTH CHAR OF NAME
                        cbUsed += 2 * unicodeLengthF( (unTextT*)info3.FileName ) ;                  // WE DONT SUBTRACT 2 BECAUSE WE CODE DEFENSIVELY (NULL LENGTH NAME) AND THE EXTRA BYTE WONT HURT ANYTHING
                        break ;
                    }
                }

                ZE( byteT* , pbUsed ) ;
                etherP.newF( tinP , LF , pbUsed , cbUsed ) ; ___( pbUsed ) ;
                thirdC::c_memcpyIF( tinP , pbUsed , pbBuffer , cbUsed ) ;

                stBlobIn << pbUsed ;
            }
        }
        while( !POOP && !bDone ) ;
        etherP.delF( tinP , pbBuffer ) ;
    }

    etherP.traceF( tinP , T("reportFilesSimpleF / replacing cloak [psttFolderP]:    \"")+T(psttFolderP)+T("\"") ) ;

    replaceCloakF( tinP , etherP , pFlockP , psttFolderP ) ;

    etherP.traceF( tinP , T("reportFilesSimpleF / replaced  cloak [psttFolderP]:    \"")+T(psttFolderP)+T("\"") ) ;

    patternC* pPat = !psttPatternP || !psttPatternP->idAdam ? 0 : new( 0 , tinP , LF ) patternC( tinP , etherP , psttPatternP , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ; ___( pPat ) ;
    while( stBlobIn )
    {
        ZE( byteT* , pbIn ) ;
        stBlobIn >> pbIn ;

        byteT* pbCursor = pbIn ;
        for(;;)
        {
            FILE_FULL_DIR_INFO& info3 = *(FILE_FULL_DIR_INFO*)pbCursor ;

            osTextT postName[ TUCK << 1 ] ;
            thirdC::c_memsetIF( tinP , postName , sizeof postName ) ;
            unicodeToAnsiF( postName , sizeof postName , (byteT*)info3.FileName , info3.FileNameLength >> 1 ) ;

            if( thirdC::c_strcmpIF( tinP , postName , "." ) && thirdC::c_strcmpIF( tinP , postName , ".." ) )
            {
                boolT bDir = info3.FileAttributes & FILE_ATTRIBUTE_DIRECTORY ;

                if( pPat ) etherP.traceF( tinP , T("reportFilesSimpleF [postName]:    \"")+T(postName)+T("\"") ) ;

                TN( tShort , postName ) ;
                boolT bOk = 1 ;
                if( pPat )
                {
                    IFpATTERN( etherP , *pPat , tShort ) {}
                    else                                 bOk = 0 ;
                }

                if( bOk )
                {
                    osTextT* posto = tShort ;
                    countT   costo = tShort.csF( tinP ) ;
                    psoP->writeF( tinP , (byteT*)&costo , sizeof costo ) ;
                    psoP->writeF( tinP , posto , costo ) ;
                    etherP.traceF( tinP , T("reportFilesSimpleF / sending [posto]:    ")+T(posto) ) ;
                }
            }

            if( info3.NextEntryOffset ) pbCursor += info3.NextEntryOffset ;
            else                        break ;
        }

        etherP.delF( tinP , pbIn ) ;
    }
    DEL( pPat ) ;

    ZE( countT , costo ) ;
    psoP->writeF( tinP , (byteT*)&costo , sizeof costo ) ;
}

voidT reportFilesF( tinS& tinP , etherC& etherP , soulC*& psOutP , socketC*& psoP , fileC*& pFlockP , const strokeS* const psttFolderP , const flagsT flagsP )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        //FV(flFILEiNFO,flagsP) ;
        if( POOP ) return ;
    }

    //U:: THIS NEEDS TO BE EDITED TO DO WHAT SIMPLE DOES: QUEUE ALL FILE INFORMATION AND RECLOAK BEFORE BEGINNING TO SEND INFO TO CLIENT
    __1

    //*psOutP << psttFolderP ;

    if( F(flagsP) )
    {
        {
            handleC& hFile = *pFlockP ;

            ZE( byteT* , pbBuffer ) ;
            countT cbBuffer = TUCK << 1 ;
            etherP.newF( tinP , LF , pbBuffer , cbBuffer ) ; ___( pbBuffer ) ;
            thirdC::c_memsetIF( tinP , pbBuffer , cbBuffer ) ;

            //etherP.traceF( tinP , T("[sizeof FILE_FULL_DIR_INFO]:    ")+TF2( sizeof FILE_FULL_DIR_INFO , flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED ) ) ;

            ZE( boolT , bDone ) ;
            do
            {
                byteT* pbInfo3 = pbBuffer ;
                boolT bOk = GetFileInformationByHandleEx( (HANDLE)hFile.osF( ifcIDtYPEhANDLE_FILE ) , (FILE_INFO_BY_HANDLE_CLASS)FileFullDirectoryInfo_updated , pbBuffer , cbBuffer ) ;
                if( !bOk )
                {
                    countT rc = GetLastError() ;
                    //etherP.traceF( tinP , T("GetFileInformationByHandleEx [rc]:    ")+TF2(rc,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    switch( rc )
                    {
                        case ERROR_MORE_DATA :
                        case ERROR_BAD_LENGTH :
                        {
                            etherP.delF( tinP , pbBuffer ) ;
                            cbBuffer <<= 1 ;
                            etherP.newF( tinP , LF , pbBuffer , cbBuffer ) ; ___( pbBuffer ) ;
                            thirdC::c_memsetIF( tinP , pbBuffer , cbBuffer ) ;
                            break ;
                        }
                        case ERROR_NO_MORE_FILES :
                        {
                            bDone = 1 ;
                            break ;
                        }
                    }
                }
                else
                {
                    for(;;)
                    {
                        FILE_FULL_DIR_INFO& info3 = *(FILE_FULL_DIR_INFO*)pbInfo3 ;

                        osTextT postName[ TUCK << 1 ] ;
                        thirdC::c_memsetIF( tinP , postName , sizeof postName ) ;

                        unicodeToAnsiF( postName , sizeof postName , (byteT*)info3.FileName , info3.FileNameLength >> 1 ) ;

                        //etherP.traceF( tinP , T("    [name]:    ")+T(postName) ) ;

                        if( thirdC::c_strcmpIF( tinP , postName , "." ) && thirdC::c_strcmpIF( tinP , postName , ".." ) )
                        {
                            if( F(flagsP) & flFILEiNFO_NAME ) *psOutP << (strokeS*)T(postName) ;

                            if( F(flagsP) & flFILEiNFO_IDsERIAL ) ;
                            if( F(flagsP) & flFILEiNFO_TIMEcREATED ) ;
                            if( F(flagsP) & flFILEiNFO_TIMEaCCESSED ) ;
                            if( F(flagsP) & flFILEiNFO_TIMEwRITTEN ) ;
                            if( F(flagsP) & flFILEiNFO_TIMEcHANGED ) ;
                            if( F(flagsP) & flFILEiNFO_OFFSETeNDoFfILE ) ;
                            if( F(flagsP) & flFILEiNFO_CBaLLOCATED ) ;
                            if( F(flagsP) & flFILEiNFO_ATTRIBUTES ) ;
                            if( F(flagsP) & flFILEiNFO_CBeXTENDEDaTTRIBUTES ) ;
                            if( F(flagsP) & flFILEiNFO_CBnAME ) ;
                        }

                        if( info3.NextEntryOffset ) pbInfo3 += info3.NextEntryOffset ;
                        else                        break ;

                        if( *psOutP >= TUCK )   // THIS IS TO AVOID CAPACITY CONSTRAINT AND TO ALLOW CLIENT TO BEGIN PROCESSING THE FILE LIST
                        {
                            psoP->writeF( tinP , *psOutP ) ;
                            DEL( psOutP ) ;
                            psOutP = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ; ___( psOutP ) ;
                        }
                    }
                }
            }
            while( !POOP && !bDone ) ;
            etherP.delF( tinP , pbBuffer ) ;
        }

        replaceCloakF( tinP , etherP , pFlockP , psttFolderP ) ;
    }
}

TASK( tmcCloakServerF )
TELL( "setting up" )
if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 )
{
    socketC*  psoP              =   (socketC*)pTaskP->c1 ;
    strokeS*& psttzLeverFolderP = *(strokeS**)pTaskP->c2 ;
    switchC&  swFlockP          =  *(switchC*)pTaskP->c3 ;

    IFsCRATCH
    {
        SCOOPS
        psoP->etherF( tinP , *tinP.pEtScratch ) ;
    
        ZE( countT , idTypeConnection ) ;
        psoP->readF( tinP , (byteT*)&idTypeConnection , sizeof idTypeConnection ) ;
        switch( idTypeConnection )
        {
            case ifcIDtYPEcLOAKcONNECTION_SIMPLE :
            {
                ZE( countT , finger ) ;
                psoP->readF( tinP , (byteT*)&finger , sizeof finger ) ;
                __( finger - FINGERnEG_CLOAKsIMPLEcONNECTION ) ;

                ZE( countT , idFormat ) ;
                psoP->readF( tinP , (byteT*)&idFormat , sizeof idFormat ) ;
                __( idFormat - 1 ) ;

                ZE( countT , costLike ) ;
                psoP->readF( tinP , (byteT*)&costLike , sizeof costLike ) ;
                __( costLike > TUCK << 2 ) ;     // DEFENSIVE

                if( POOP ) etThread.traceF( tinP , T("error: invalid request prefix") ) ;
                else
                {
                    ZE( osTextT* , postLike ) ;
                    etThread.newF( tinP , LF , postLike , costLike + 1 ) ; ___( postLike ) ;
                    
                    if( postLike )
                    {
                        psoP->readF( tinP , postLike , costLike ) ;
                        postLike[ costLike ] = 0 ;

                        ifFileNameC iffn( tinP , etThread , postLike ) ;

                        fileNameC fnLike( tinP , etThread , T(iffn) ) ;
                        patternC pat( tinP , etThread , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

                        TN( tLike , fnLike.pathF() ) ;
                        strokeS* psttzLike = tLike ;

                        swFlockP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        if( !swFlockP.idSlotOfLeverF( tinP , (countT)psttzLike ) ) etThread.traceF( tinP , T("flavor not found [psttFolder]:    ")+T(psttzLike) ) ;
                        else
                        {
                            psttzLeverFolderP = tLike ;
                            fileC*& pFlock    = *(fileC**)&(countT&)swFlockP ;

                            reportFilesSimpleF( tinP , etThread , psoP , pFlock , fnLike.pathF() , fnLike ) ;
                        }
                        swFlockP.ungrabF( tinP ) ;
                    }
                }

                break ;
            }
            case ifcIDtYPEcLOAKcONNECTION_SOULFUL :
            {
                while( !POOP && !etThread && !ether && psoP )
                {
                    soulC sIn(  tinP , TAG( TAGiDnULL ) ) ;
                    soulC* psOut = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ; ___( psOut ) ;

                    psoP->readF( tinP , sIn ) ;
            
                    if( POOP ) { POOPR DEL( psoP ) ; }
                    else
                    {
                        ZE( countT , finger ) ;
                        sIn >> finger ;
                        __( finger - FINGERnEG_CLOAKcOMMAND ) ;

                        ZE( countT , idFormat ) ;
                        sIn >> idFormat ;
                        __( idFormat - 1 ) ;

                        ZE( countT , idCmd ) ;
                        sIn >> idCmd ;
                        switch( idCmd )
                        {
                            case ifcIDcMDcLOAK_QUERYfOLDERcONTENTS :
                            {
                                ZE( strokeS* , psttFolder ) ;
                                sIn >> psttFolder ;

                                ZE( flagsT , flagsWant ) ;
                                sIn >> flagsWant ;
                                //FV(flFILEiNFO,flagsWant) ;

                                if( POOP ) etThread.traceF( tinP , T("error: invalid value received [flagsWant]:    ")+TF2(flagsWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                else
                                {
                                    swFlockP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                    if( !swFlockP.idSlotOfLeverF( tinP , (countT)psttFolder ) ) etThread.traceF( tinP , T("flavor not found [psttFolder]:    ")+T(psttFolder) ) ;
                                    else
                                    {
                                        psttzLeverFolderP = psttFolder ;
                                        fileC*& pFlock   = *(fileC**)&(countT&)swFlockP ;

                                        *psOut << (countT)FINGERnEG_CLOAKrEPLY ;
                                        *psOut << (countT)1 ;
                                        *psOut << (countT)ifcIDrEPLYcLOAK_FOLDERcONTENTS ;

                                        //U::reportFilesF( tinP , etThread , psOut , psoP , pFlock , psttFolder , flagsWant ) ;
                                    }
                                    swFlockP.ungrabF( tinP ) ;
                                }

                                break ;
                            }
                            case ifcIDcMDcLOAK_QUERYaLLlOCKEDfOLDERScONTENTS :
                            {
                                ZE( flagsT , flagsWant ) ;
                                sIn >> flagsWant ;
                                //FV(flFILEiNFO,flagsWant) ;

                                if( POOP ) etThread.traceF( tinP , T("error: invalid value received [flagsWant]:    ")+TF2(flagsWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                else
                                {
                                    *psOut << (countT)FINGERnEG_CLOAKrEPLY ;
                                    *psOut << (countT)1 ;
                                    *psOut << (countT)ifcIDrEPLYcLOAK_ALLlOCKEDfOLDERScONTENTS ;

                                    swFlockP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                    countT cFlavors = swFlockP.cFlavorsF( tinP ) ;
                                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                                    {
                                        psttzLeverFolderP = (strokeS*)swFlockP.leverF( tinP , idf ) ;
                                        fileC*& pFlock   = *(fileC**)&(countT&)swFlockP ;

                                        //U::reportFilesF( tinP , etThread , psOut , psoP , pFlock , psttzLeverFolderP , flagsWant ) ;
                                    }
                                    swFlockP.ungrabF( tinP ) ;
                                }

                                break ;
                            }
                        }
            
                        psoP->writeF( tinP , *psOut ) ;
                        DEL( psOut ) ;
                        psOut = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ; ___( psOut ) ;
                        psoP->writeF( tinP , *psOut ) ;
                    }
                    DEL( psOut ) ;
                }

                break ;
            }
        }

        DEL( psoP ) ;
    }
}
DONE( tmcCloakServerF )

TASK( tmWatchHandlesF )
if( pTaskP )
{
    ZE( countT , idCycle ) ;
    while( !ether && !POOP )
    {
        {
            TN( tSuffix , "" ) ; tSuffix = TF3(++idCycle,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE,8)+T(".ttt") ;
            TN( tOut    , "" ) ; tOut    = T("///d/tmp/handle.out.")+tSuffix ;
            TN( tError  , "" ) ; tError  = T("///d/tmp/handle.error.")+tSuffix ;

            fileC fOut( tinP , (strokeS*)tOut , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;
            const handleC& hfOut = fOut ;

            fileC fError( tinP , (strokeS*)tError , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;
            const handleC& hfError = fError ;

            TN( tb4 , "    " ) ;
            ZE( countT , osTid ) ;
            ZE( countT , osPid ) ;
            ZE( countT , value ) ;
            ZE( countT , idDeathType ) ;
            //etThread.traceF( tinP , T("hiring handle.exe") ) ;
            //G:etThread.osProcessF( tinP , osTid , osPid , value , idDeathType , T("///ideafarm/precious/domains/com/ideafarm/city/workshop/bench.baseless/bench.exe") , 0 , flPROCESShIRE_null , &hfOut , &hfError , 0 ) ;
            etThread.osProcessF( tinP , osTid , osPid , value , idDeathType , T("///ideafarm/precious/domains/com/ideafarm/city/workshop/handle/handle64.exe") , 0 , flPROCESShIRE_null , &hfOut , &hfError , 0 ) ;
            //etThread.traceF( tinP , T("hired handle.exe [value,idDeathType]:    ")+TF2(value,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2(idDeathType,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        }

        ether.osSleepF( tinP , TOCK >> 1 ) ;
    }
}
DONE( tmWatchHandlesF )

TASK( tmServerF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    strokeS*& psttzLeverFolderP = *(strokeS**)pTaskP->c1 ;
    switchC&  swFlockP          =  *(switchC*)pTaskP->c2 ;

    while( !ether )
    {
        //etThread.traceF( tinP , T("listening for clients") ) ;
        IFsCRATCH
        {
            SCOOPSnEW
            socketC sListen( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) , 0 , flSOCKETc_NOsECRECY ) ;
            homeS& home = homeS::homeIF() ;
            home.idPortCloak = sListen.bindF( tinP ) ;
            //etRock.traceF( tinP , T("cloak: sListen bound to port ")+TF2(home.idPortCloak,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
            //LOGrAW3( "home.idPortKernelMonitor: " , home.idPortKernelMonitor , "\r\n" ) ;

            if( POOP )
            {
                POOPR
                etRock.traceF( tinP , T("cloak: could not bind to a port") ) ;
            }
            else
            {
                sListen.listenF( tinP ) ;
                while( !POOP && !etThread && !ether )
                {
                    ZE( socketC* , pso ) ;
                    nicNameC nnPeer ;
                    ZE( countT , idPortPeer ) ;
                    //etRock.traceF( tinP , T("cloak: calling acceptF for sListen") ) ;
                    sListen.acceptF( tinP , pso , idPortPeer , nnPeer , countTC() ) ;
                    //etRock.traceF( tinP , T("cloak: called  acceptF for sListen") ) ;

                    if( !ether && pso ) etThread.osThreadF( TaRG1( tmcCloakServerF ) , (countT)pso , (countT)&psttzLeverFolderP , (countT)&swFlockP ) ;
                    else                { DEL( pso ) ; }
                }
            }
            SCOOPSdEL
        }
    }
}
DONE( tmServerF )

TODO

stackC stFolderToCloak(      tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;
{
    stackC stFoldersToWalk(  tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;
    stackC stFolderExclude(  tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;        // SINGULAR: ONLY THE EXACT MATCH FOLDER
    stackC stFoldersExclude( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;        // PLURAL:        THE EXACT MATCH FOLDER AND ALL CONTAINED SUBFOLDERS
    {
        TN( tHome , "" ) ;
        {
            TN( tSlash , "/" ) ;
            TN( tName , "" ) ;
            FORsTRINGSiN1( etThread.ether_pstt1_processParametersI_F( tinP ) )
            {
                //etThread.traceF( tinP , T("parameter:  ")+T(psttc1) ) ;
                ZE( strokeS* , psttLower ) ;
                etThread.strConvertToLowerCaseF( tinP , psttLower , psttc1 ) ; ___( psttLower ) ;    // D:\iDeAfArM.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\ideafarm.00000180.ipdos-we
                ifFileNameC ifName( tinP , etThread , T(psttLower) ) ;
                etThread.delF( tinP , psttLower ) ;
                tName = T(ifName) ;
                break ;
            }
            //etThread.traceF( tinP , T("if name:  ")+tName ) ;
        
            ZE( strokeS* , psttHome ) ;
            ZE( strokeS* , psttNU ) ;
            etThread.strBisectF( tinP , psttHome , psttNU , tName , tSlash , 5 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttHome ) ; ___( psttNU ) ;
            tHome  = T(psttHome) ;
            etThread.delF( tinP , psttHome ) ;
            etThread.delF( tinP , psttNU ) ;
        }
        //etThread.traceF( tinP , T("home:  ")+tHome ) ;
        
        ZE( strokeS* , psttf ) ;

        // SINK FOLDERS TO WALK

        ZE( countT , ids ) ;
        etThread.strMakeF( tinP , LF , psttf , /*U:: tHome */ T("///d/tmp/locked.test/") ) ; ___( psttf ) ;
        //U::etThread.strMakeF( tinP , LF , psttf , tHome ) ; ___( psttf ) ;
        stFoldersToWalk.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        if( !ids ) etThread.delF( tinP , psttf ) ;
        else       psttf = 0 ;

        // SINK EXCLUSIONS

        etThread.strMakeF( tinP , LF , psttf , tHome+T("IdeaFarm (tm)/") ) ; ___( psttf ) ;
        ids = 0 ;
        stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        if( !ids ) etThread.delF( tinP , psttf ) ;
        else       psttf = 0 ;

        //etThread.strMakeF( tinP , LF , psttf , tHome+T("ephemeral/domains/com/ideafarm/city/park/exedll/1/master/") ) ; ___( psttf ) ;
        //ids = 0 ;
        //stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        //if( !ids ) etThread.delF( tinP , psttf ) ;
        //else       psttf = 0 ;

        //etThread.strMakeF( tinP , LF , psttf , tHome+T("ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/") ) ; ___( psttf ) ;
        //ids = 0 ;
        //stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        //if( !ids ) etThread.delF( tinP , psttf ) ;
        //else       psttf = 0 ;

        //etThread.strMakeF( tinP , LF , psttf , tHome+T("precious/domains/com/ideafarm/city/workshop/handle/") ) ; ___( psttf ) ;
        //ids = 0 ;
        //stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        //if( !ids ) etThread.delF( tinP , psttf ) ;
        //else       psttf = 0 ;

        etThread.strMakeF( tinP , LF , psttf , tHome+T("controls/") ) ; ___( psttf ) ;
        ids = 0 ;
        stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        if( !ids ) etThread.delF( tinP , psttf ) ;
        else       psttf = 0 ;

        //etThread.strMakeF( tinP , LF , psttf , tHome+T("tmp/") ) ; ___( psttf ) ;
        //ids = 0 ;
        //stFoldersExclude.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;
        //if( !ids ) etThread.delF( tinP , psttf ) ;
        //else       psttf = 0 ;
    }

    countT pcArg[] = { (countT)tinP.pEtScratch , (countT)&stFolderToCloak , (countT)&stFolderExclude , (countT)&stFoldersExclude } ;

    while( stFoldersToWalk )
    {
        ZE( strokeS* , psttf ) ;
        stFoldersToWalk >> psttf ;

        ZE( countT , ids ) ;
        stFolderToCloak.sinkF( tinP , ids , psttf , flSTACKsINK_UNIQUE ) ;

        if( !ids ) etThread.delF( tinP , psttf ) ;
        else
        {
            IFsCRATCH
            {
                SCOOPS

                ZE( countT , cDirs ) ;
                ZE( countT , cFiles ) ;
                tinP.pEtScratch->diskWalkF( tinP , cDirs , cFiles , psttf , ether , flDISKwALK_DIRECTORIESoNLY , sinkFolderToCloakCBF , pcArg , 0 , 0 ) ;

                if( POOP )
                {
                    POOPR
                    etThread.traceF( tinP , T("error: could not walk:    ")+T(psttf) ) ;
                }

                psttf = 0 ; // psttf HAS BEEN SUNK, SO THIS COPY IS A ZOMBIE
            }
        }
    }
}

ZE( strokeS* , psttzLeverFolder ) ;
switchC swFlock( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , psttzLeverFolder ) ;

while( stFolderToCloak )
{
    ZE( strokeS* , psttf ) ;
    stFolderToCloak >> psttf ;

    //CS:CODEsYNCH 51000767 51000767
    IFsCRATCH
    {
        SCOOPS

        countT cDo = 2 ;
        while( cDo -- )  //THIS IS TO VERIFY THAT I CAN DESTROY AND RECREATE THE FILE LOCK
        {
            fileC* pFlock = new( 0 , tinP , LF ) fileC( tinP , psttf , ifcOPENaCCESS_R , 0 , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_BUMPkEY | flOPENdETAILS_DOnOTmAKEdIRiFnEEDED , ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , 1 ) ; ___( pFlock ) ;

            if( POOP )
            {
                POOPRqUIET
                etThread.traceF( tinP , T("error: could not lock folder:    ")+T(psttf) ) ;
                DEL( pFlock ) ;
            }
            else
            {
                if( !cDo )
                {
                    //etThread.traceF( tinP , T("folder locked:    ")+T(psttf) ) ;
                    swFlock.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    psttzLeverFolder = psttf ;
                    if( swFlock ) DEL( pFlock )                                   //SHOULD BE IMPOSSIBLE
                    else          { swFlock = (countT)pFlock ; pFlock = 0 ; }
                    swFlock.ungrabF( tinP ) ;
                }
            }

            if( cDo )
            {
                DEL( pFlock ) ;
            }
        }
    }

    etThread.delF( tinP , psttf ) ;
}

//TN( tFolder , "" ) ;
//{
//    ZE( strokeS* , psttFolder ) ; etThread.querySettingF( tinP , psttFolder , T("!ipdos.cloak.folder")  ) ; ___( psttFolder ) ;
//    tFolder = T(psttFolder) ;
//    etThread.delF( tinP , psttFolder ) ;
//}
//etThread.traceF( tinP , T("folder:    ")+tFolder ) ;

etThread.osThreadF( TaRG1( tmServerF ) , (countT)&psttzLeverFolder , (countT)&swFlock ) ;

//U::etThread.osThreadF( TaRG1( tmWatchHandlesF ) ) ;

ether.ifcHireF( tinP , T("ifcIDaDAM_CLOAK") , ifcIDaDAM_KERNEL2MONITOR , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

ether.loafIF( tinP ) ;
//etThread.traceF( tinP , T("unlocking") ) ;

TN( tb4    , "    " ) ;
swFlock.grabF( tinP , TAG( TAGiDnULL ) ) ;
countT cFlavors = swFlock.cFlavorsF( tinP ) ;
for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
{
    psttzLeverFolder = (strokeS*)swFlock.leverF( tinP , idf ) ;
    fileC*& pFlock   = *(fileC**)&(countT&)swFlock ;

    handleC& hFile = *pFlock ;
    BY_HANDLE_FILE_INFORMATION info ;
    boolT bOk = GetFileInformationByHandle( (HANDLE)hFile.osF( ifcIDtYPEhANDLE_FILE ) , &info ) ;
    if( bOk )
    {
        //etThread.traceF( tinP , T("uncloaking [volume,idiFile]:    ")+TF3((countT)info.dwVolumeSerialNumber,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+tb4+TF3((countT)info.nFileIndexLow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+TF3((countT)info.nFileIndexHigh,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
    }

    byteT pbBuffer[ TOCK ] ;
    FILE_NAME_INFO& info2 = *(FILE_NAME_INFO*)pbBuffer ;
    bOk = GetFileInformationByHandleEx( (HANDLE)hFile.osF( ifcIDtYPEhANDLE_FILE ) , FileNameInfo , pbBuffer , sizeof pbBuffer ) ;
    if( !bOk )
    {
        countT rc = GetLastError() ;
        if( rc ) ;
    }
    else
    {
        osTextT postName[ TUCK << 1 ] ;
        thirdC::c_memsetIF( tinP , postName , sizeof postName ) ;

        unicodeToAnsiF( postName , sizeof postName , (byteT*)info2.FileName , info2.FileNameLength >> 1 ) ;

        if( bOk ) ;
        //etThread.traceF( tinP , T("[name]:    ")+T(postName) ) ;
    }

    byteT* pbInfo3 = pbBuffer ;

    {
        bOk = GetFileInformationByHandleEx( (HANDLE)hFile.osF( ifcIDtYPEhANDLE_FILE ) , (FILE_INFO_BY_HANDLE_CLASS)FileFullDirectoryInfo_updated , pbBuffer , sizeof pbBuffer ) ;

        if( !bOk )
        {
            countT rc = GetLastError() ;
            if( rc ) ;
        }
        else
        {
            for(;;)
            {
                FILE_FULL_DIR_INFO& info3 = *(FILE_FULL_DIR_INFO*)pbInfo3 ;

                osTextT postName[ TUCK << 1 ] ;
                thirdC::c_memsetIF( tinP , postName , sizeof postName ) ;

                unicodeToAnsiF( postName , sizeof postName , (byteT*)info3.FileName , info3.FileNameLength >> 1 ) ;

                if( bOk ) ;
                //etThread.traceF( tinP , T("    [name]:    ")+T(postName) ) ;

                if( info3.NextEntryOffset ) pbInfo3 += info3.NextEntryOffset ;
                else                        break ;
            }
        }
    }

    DEL( pFlock ) ;
}

swFlock.freeAllF( tinP ) ;
swFlock.ungrabF( tinP ) ;

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
//SOURCE: 5adam.51000767.1 END
