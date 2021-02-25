//SOURCE: 5adam.510005d2.1 BEGIN
#define DDNAME "5adam.510005d2.1"
#define DDNUMB 0x510005d2
#define IDFILE (countT)0x0
#define postHEADER "510005d2.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510005d2.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i reset the grabit bits in all persistent lists for this home
i die after doing this, to conserve process resources
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_PREPARElISTS" )/*1*/

TODO

{
    soulC soul1m( tinP , TAG( TAGiDnULL ) ) ;
    countT cFiles = etThread.boxMenuF( tinP , soul1m , T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/*") , 0 , 0x10 ) ;
    
    strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
    strokeS sttSlash( '/' ) ;
    strokeS sttDot( '.' ) ;
    TN( tcr   , "\r\n" ) ;
    TN( tStar     , "*" ) ;
    TN( tSlashStar , "/*" ) ;
    TN( tStarFace , "*.face" ) ;
    TN( tSuffix , ".poolC.face" ) ;
    TN( tBookSuffix , "bookC" ) ;
    FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
    {
        if( psttc1[ CSpREFIX - 1 + psttc1->idAdam ].idAdam != '/' )
        {
            etThread.delF( tinP , psttc1 ) ;
            continue ;
        }

        etThread.traceF( tinP , T("11111111+ ")+T(psttc1) ) ;

        ZE( strokeS* , psttms ) ;
        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
        etThread.strWordF( tinP , psttms , psttc1 , sttq , S1C('/') , - 2 ) ; ___( psttms ) ;
        countT idMemorySpace = etThread.strDigitsToSCountF( tinP , psttms ) ;
        PUSE( tinP , *(byteT**)&psttms ) ;
        //CONoUTrAW3( "[idMemorySpace]: " , idMemorySpace , "\r\n" ) ;

        soulC soul2m( tinP , TAG( TAGiDnULL ) ) ;
        countT cFiles = etThread.boxMenuF( tinP , soul2m , T(psttc1)+tStar , 0 , 0x10 ) ;
        FORsTRINGSiNsPANNEDcOMBINEDhEAD2( soul2m )
        {
            if( psttc2[ CSpREFIX - 1 + psttc2->idAdam ].idAdam != '/' )
            {
                etThread.delF( tinP , psttc2 ) ;
                continue ;
            }

            etThread.traceF( tinP , T("22222222+ ")+T(psttc2) ) ;
            soulC soul3m( tinP , TAG( TAGiDnULL ) ) ;
            countT cFiles = etThread.boxMenuF( tinP , soul3m , T(psttc2)+tStar , 0 , 0x10 ) ;
            FORsTRINGSiNsPANNEDcOMBINEDhEAD3( soul3m )
            {
                etThread.traceF( tinP , T("33333333+ ")+T(psttc3) ) ;
                //DELETE NAPKIN BACKING FILES THAT ARE NOT COMPLETELY FORMATTED
                {
                    soulC soul4m( tinP , TAG( TAGiDnULL ) ) ;
                    countT cFiles = etThread.boxMenuF( tinP , soul4m , T(psttc3)+tStar , 0 , 0x10 ) ;
                    FORsTRINGSiNsPANNEDcOMBINEDhEAD4( soul4m )
                    {
                        etThread.traceF( tinP , T("aaaa +") ) ;
                        {
                            ZE( strokeS* , psttw ) ;
                            etThread.strWordF( tinP , psttw , psttc4 , sttq , sttDot , - 1 ) ; ___( psttw ) ;
                            boolT bSkip = !etThread.strCompareF( tinP , tBookSuffix , psttw ) ;
                            etThread.delF( tinP , psttw ) ;
                            if( bSkip )
                            {
                                etThread.traceF( tinP , T("aaaa -") ) ;
                                etThread.delF( tinP , psttc4 ) ;
                                continue ;
                            }
                        }

                        etThread.traceF( tinP , T("44444444 ")+T(psttc4) ) ;
                        etThread.traceF( tinP , T("PREPARElISTS inspecting: ")+T(psttc4) ) ;
                        ZE( boolT , bOk ) ;
                        {
                            handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                            etThread.fileOpenF( tinP , hFile , countTC() , psttc4 , ifcOPENaCCESS_R , 0 , flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO ) ;
    
                            ZE( infoFileS* , pInfo ) ;
                            etThread.diskFileQueryF( tinP , pInfo , hFile ) ; ___( pInfo ) ;
                            if( pInfo && ( pInfo->cbUsed > 3 * sizeof( countT ) || pInfo->cbUsedHigh ) )
                            {
                                countT pc3[ 3 ] ;
                                countT cbr = sizeof pc3 ;
                                etThread.fileReadF( tinP , (byteT*)pc3 , cbr , hFile ) ;
                                if( cbr == sizeof pc3 && ( getNegAM( pc3[ 2 ] ) == FINGERnEG_NAPKINiSfORMATTED || getNegAM( pc3[ 2 ] ) == - 1 ) ) bOk = 1 ;
                            }
                            DEL( pInfo ) ;
                        }

                        if( !bOk )
                        {
                            etThread.boxZapF( tinP , psttc4 ) ;
                            etThread.traceF( tinP , T("PREPARElISTS deleted: ")+T(psttc4) ) ;
                        }
                        etThread.traceF( tinP , T("aaaa -") ) ;
                    }
                    FORsTRINGSiNsPANNEDcOMBINEDtAIL4
                }

                //CLEANING UP BACKING IMAGES (E.G. RESETTING grabitC BITS)
                {
                    soulC soul5m( tinP , TAG( TAGiDnULL ) ) ;
                    countT cFiles = etThread.boxMenuF( tinP , soul5m , T(psttc3)+tStarFace , 0 , 0x10 ) ;
                    FORsTRINGSiNsPANNEDcOMBINEDhEAD5( soul5m )
                    {
                        etThread.traceF( tinP , T("55555555+ ")+T(psttc5) ) ;
                        ZE( strokeS* , psttw1 ) ;
                        ZE( strokeS* , psttw2 ) ;
                        ZE( strokeS* , psttw4 ) ;
                        etThread.strWordF( tinP , psttw1 , psttc5 , sttq , sttSlash , - 1 ) ; ___( psttw1 ) ;
                        etThread.strWordF( tinP , psttw2 , psttc5 , sttq , sttSlash , - 2 ) ; ___( psttw2 ) ;
                        etThread.strWordF( tinP , psttw4 , psttc5 , sttq , sttSlash , - 4 ) ; ___( psttw4 ) ;
                        ZE( strokeS* , psttName ) ;
                        countT idf = 1 ;
                        boolT bFound = etThread.strSubstringF( tinP , psttName , idf , sttq , tSuffix , psttw1 ) ; ___( psttName ) ;
                        if( bFound )
                        {
                            countT idStateSpace = etThread.strDigitsToSCountF( tinP , psttw2 ) ; ;
                            if( idStateSpace )
                            {
                                TN( tName , psttName ) ;
                                osTextT* postName = tName ;
                                THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )
                                etThread.traceF( tinP , T("PREPARElISTS cleaning: ")+T(psttName) ) ;
                
                                {
                                    puseC puseReset( tinP , postName , flPOOLc_DOnOTiNDEXdURINGcT | flPOOLc_RESETcrEF | flPOOLc_RESETiNDEXbITS , idStateSpace , - 1 , - 1 , 0 , idMemorySpace ) ; //U::CONJ: flPOOLc_RESETcrEF DOES NOT CAUSE ANY grabitC BITS TO BE RESET, WHICH IS THE MAIN ORIGINAL PURPOSE OF THIS PROGRAM (20180522@1348)
                                    countT pczName[] = { LISTnAME_ROOT , 0 } ;
                                    listC::lintIF( tinP ) ;
                                }
                                etThread.traceF( tinP , T("done     : ")+T(psttName)+tcr ) ;
                                THREADmODE2rESTORE
                            }
                        }
                        etThread.delF( tinP , psttName ) ;
                        etThread.delF( tinP , psttw4 ) ;
                        etThread.delF( tinP , psttw2 ) ;
                        etThread.delF( tinP , psttw1 ) ;
                        etThread.traceF( tinP , T("55555555- ")+T(psttc5) ) ;
                    }
                    FORsTRINGSiNsPANNEDcOMBINEDtAIL5
                }
                etThread.traceF( tinP , T("33333333- ")+T(psttc3) ) ;
            }
            FORsTRINGSiNsPANNEDcOMBINEDtAIL3
            etThread.traceF( tinP , T("22222222- ")+T(psttc2) ) ;
        }
        FORsTRINGSiNsPANNEDcOMBINEDtAIL2
        etThread.traceF( tinP , T("11111111- ")+T(psttc1) ) ;
    }
    FORsTRINGSiNsPANNEDcOMBINEDtAIL1
}

etThread.strokeF( tinP , T("ok\r\n") ) ;

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
//SOURCE: 5adam.510005d2.1 END
