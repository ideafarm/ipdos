//SOURCE: 5adam.51000750.1 BEGIN
#define DDNAME "5adam.51000750.1"
#define DDNUMB 0x51000750
#define IDFILE (countT)0x0
#define postHEADER "51000750.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000750.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

//OBSOLETES 5adam.5100059d.1
// 20190728@1946: EDIT TO MIGRATE FROM boxMenuF TO diskFindWothF

/*
watches a directory containing email to send
*/
/**/

/*1*/WAKEhIDE( "ifcIDaDAM_ROOTmAILoUT" )/*1*/

#define flFAIL_COULDnOTgETsHADOW                    0xe00001ff
#define flFAIL_DURINGpARSING                        0xe00002ff
#define flFAIL_COULDnOTcONNECT                      0xe00004ff
#define flFAIL_HELLOrEJECTED                        0xe00008ff
#define flFAIL_MAILfROMrEJECTED                     0xe00010ff
#define flFAIL_RCPTtOrEJECTED                       0xe00020ff
#define flFAIL_DATAcOMMANDrREJECTED                 0xe00040ff
#define flFAIL_BODYrEJECTED                         0xe00080ff
#define flFAIL_QUITcOMMANDrEJECTED                  0xe00100ff
#define flFAIL_UNKNOWNeRROR                         0xe00200ff
#define flFAIL_COULDnOTgETsHORTfILEnAME             0xe00400ff
#define flFAIL_COULDnOTmOVEfILE                     0xe00800ff
#define flFAIL_DATAcANNOToPENfILE                   0xe01000ff
#define flFAIL_DATAcANNOTgETbODYfILEiNFO            0xe02000ff
#define flFAIL_DATAbODYfILEtOOlARGE                 0xe04000ff
#define flFAIL_DATAfILEdOESnOTeXIST                 0xe08000ff
#define flFAIL_UNAUTHORIZEDrELAYsERVER              0xe10000ff
#define flFAIL_STARTtlsrEJECTED                     0xe20000ff
#define flFAIL_COULDnOTzAPsENTfILE                  0xe40000ff

//DUPLICATE CODE: b750104 3a50104
voidT queryEmailFromIdAccountF( tinS& tinP , strokeS*& psttP , const countT cPassAccountSP )
{
    if( POOP ) return ;
    __NZ( psttP ) ;
    if( POOP ) return ;

    IFsCRATCH
    {
        SCOOPS

        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , homeS::homeIF().idPortListServerEmailIdAccount ) ;
    
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        sOut << (countT)FINGERnEG_LISTsERVERcMD ;
        sOut << (countT)1 ;
        sOut << (countT)ifcIDcMDlISTsERVEReMAILiDaCCOUNT_ASKeMAILfROMiDaCCOUNT ;
        sOut << cPassAccountSP ;
        sock.writeF( tinP , sOut ) ;
    
        soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
        sock.readF( tinP , sIn ) ;
    
        ZE( countT , finger ) ;
        sIn >> finger ;
        __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
    
        ZE( countT , idFormat ) ;
        sIn >> idFormat ;
        __( idFormat - 1 ) ;
    
        sIn >> psttP ; ___( psttP ) ;
    }
}

boolT writeBodySnipFromFileF( tinS& tinP , etherC& etherP , socketC& sockP , const strokeS* const psttFileBodyP , flagsT& flagsFailP )
{
    ZE( boolT , bFail ) ;
    //etherP.traceF( tinP , T("processing body file \"")+T(psttFileBodyP)+T("\"") ) ;

    TN( tLit , "!literal:" ) ;
    if( 1 == etherP.strIdF( tinP , tLit , psttFileBodyP ) )
    {
        //CONoUTrAW( T("sending literal value\r\n") ) ;
        if( tLit.csF( tinP ) < psttFileBodyP->idAdam )
        {
            ZE( strokeS* , psttb ) ;
            countT idf = tLit.csF( tinP ) + 1 ;
            ZE( countT , idl ) ;
            etherP.strSubstringF( tinP , psttb , idf , idl , psttFileBodyP ) ; ___( psttb ) ;
            TN( tBody , "" ) ; tBody = T(psttb) ;
            etherP.delF( tinP , psttb ) ;
            sockP.writeF( tinP , (osTextT*)tBody , tBody.csF( tinP ) ) ;
        }
    }
    else if( !etherP.diskFileExistsF( tinP , psttFileBodyP ) )
    {
        flagsFailP |= flFAIL_DATAfILEdOESnOTeXIST ;
        bFail = 1 ;
    }
    else
    {
        IFsCRATCH
        {
            SCOOPS

            //CONoUTrAW( T("opening body file\r\n") ) ;
            handleC hFileBody( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            tinP.pEtScratch->fileOpenF( tinP , hFileBody , countTC() , psttFileBodyP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_LOCsEQ | flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO ) ;
            if( POOP )
            {
                POOPR
                flagsFailP |= flFAIL_DATAcANNOToPENfILE ;
                //CONoUTrAW( "writing data: could not open the body file\r\n" ) ;
                bFail = 1 ;
            }
    
            if( !bFail )
            {
                ZE( infoFileS* , pInfo ) ;
                tinP.pEtScratch->diskFileQueryF( tinP , pInfo , hFileBody ) ; ___( pInfo ) ;
                if( POOP )
                {
                    POOPR
                    flagsFailP |= flFAIL_DATAcANNOTgETbODYfILEiNFO ;
                    //CONoUTrAW( "writing data: could not get info for body file\r\n" ) ;
                    bFail = 1 ;
                }
        
                if( !bFail && pInfo )
                {
                    if( pInfo->cbUsedHigh )
                    {
                        POOPR
                        flagsFailP |= flFAIL_DATAbODYfILEtOOlARGE ;
                        //CONoUTrAW( "writing data: body file is too large\r\n" ) ;
                        DEL( pInfo ) ;
                        bFail = 1 ;
                    }
    
                    if( !bFail )
                    {
                        //CONoUTrAW3( "writing data: body file is " , pInfo->cbUsed , " bytes\r\n" ) ;
                        countT cToDo = pInfo->cbUsed ;
                        const countT costa = TOCK < cToDo ? TOCK : cToDo ;
            
                        ZE( osTextT* , posti ) ;
                        etherP.newF( tinP , LF , posti , costa ) ; ___( posti ) ;
                        if( posti )
                        {
                            boolT bNew = 1 ;
                            while( cToDo )
                            {
                                countT cNibble = costa < cToDo ? costa : cToDo ;
                                etherP.fileReadF( tinP , posti , cNibble , hFileBody ) ;
                                cToDo -= cNibble ;
            
                                for( countT offi = 0 ; offi < cNibble ; offi ++ )
                                {
                                    sockP.writeF( tinP , posti + offi , 1 ) ;
                                    switch( posti[ offi ] )
                                    {
                                        case '\r' :
                                        case '\n' :
                                        {
                                            if( !bNew ) bNew = 1 ;
                                            break ;
                                        }
                                        case '.' :
                                        {
                                            if( bNew )
                                            {
                                                bNew = 0 ;
                                                sockP.writeF( tinP , "." , 1 ) ;
                                            }
                                            break ;
                                        }
                                        default :
                                        {
                                            if( bNew ) bNew = 0 ;
                                            break ;
                                        }
                                    }
                                }
                            }
                        }
                        etherP.delF( tinP , posti ) ;
                    }
                }
                DEL( pInfo ) ;
            }
        }

        //U::CANNOT DO THIS HERE BECAUSE THERE MIGHT BE MUTLIPLE RECIPIENTS, EACH OF WHICH NEEDS THIS FILE TO EXIST: if( !bFail && etherP.diskFileExistsF( tinP , psttFileBodyP ) ) etherP.boxZapF( tinP , psttFileBodyP ) ;
    }

    return bFail ;
}

boolT logBodySnipFromFileF( tinS& tinP , etherC& etherP , const strokeS* const psttFileBodyP )
{
    _IO_
    ZE( boolT , bFail ) ;
    //CONoUTrAW( T("processing body file \"")+T(psttFileBodyP)+T("\"\r\n") ) ;

    TN( tLit , "!literal:" ) ;
    if( 1 == etherP.strIdF( tinP , tLit , psttFileBodyP ) )
    {
        //CONoUTrAW( T("sending literal value\r\n") ) ;
        if( tLit.csF( tinP ) < psttFileBodyP->idAdam )
        {
            ZE( strokeS* , psttb ) ;
            countT idf = tLit.csF( tinP ) + 1 ;
            ZE( countT , idl ) ;
            etherP.strSubstringF( tinP , psttb , idf , idl , psttFileBodyP ) ; ___( psttb ) ;
            TN( tBody , "" ) ; tBody = T(psttb) ;
            etherP.delF( tinP , psttb ) ;
            //CONoUTrAW( tBody ) ;
        }
    }
    else if( !etherP.diskFileExistsF( tinP , psttFileBodyP ) )
    {
        bFail = 1 ;
    }
    else
    {
        IFsCRATCH
        {
            SCOOPS

            //CONoUTrAW( T("opening body file\r\n") ) ;
            handleC hFileBody( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            tinP.pEtScratch->fileOpenF( tinP , hFileBody , countTC() , psttFileBodyP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_LOCsEQ | flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO ) ;
            if( POOP )
            {
                POOPR
                //CONoUTrAW( "writing data: could not open the body file\r\n" ) ;
                bFail = 1 ;
            }
    
            if( !bFail )
            {
                ZE( infoFileS* , pInfo ) ;
                tinP.pEtScratch->diskFileQueryF( tinP , pInfo , hFileBody ) ; ___( pInfo ) ;
                if( POOP )
                {
                    POOPR
                    //CONoUTrAW( "writing data: could not get info for body file\r\n" ) ;
                    bFail = 1 ;
                }
        
                if( !bFail && pInfo )
                {
                    if( pInfo->cbUsedHigh )
                    {
                        POOPR
                        //CONoUTrAW( "writing data: body file is too large\r\n" ) ;
                        DEL( pInfo ) ;
                        bFail = 1 ;
                    }
    
                    if( !bFail )
                    {
                        //CONoUTrAW3( "writing data: body file is " , pInfo->cbUsed , " bytes\r\n" ) ;
                        countT cToDo = pInfo->cbUsed ;
                        const countT costa = TOCK < cToDo ? TOCK : cToDo ;
            
                        ZE( osTextT* , posti ) ;
                        etherP.newF( tinP , LF , posti , costa ) ; ___( posti ) ;
                        if( posti )
                        {
                            boolT bNew = 1 ;
                            while( cToDo )
                            {
                                countT cNibble = costa < cToDo ? costa : cToDo ;
                                etherP.fileReadF( tinP , posti , cNibble , hFileBody ) ;
                                cToDo -= cNibble ;
            
                                for( countT offi = 0 ; offi < cNibble ; offi ++ )
                                {
                                    osTextT post2[] = { posti[ offi ] , 0 } ;
                                    //CONoUTrAW( post2 ) ;
                                    switch( posti[ offi ] )
                                    {
                                        case '\r' :
                                        case '\n' :
                                        {
                                            if( !bNew ) bNew = 1 ;
                                            break ;
                                        }
                                        case '.' :
                                        {
                                            if( bNew )
                                            {
                                                bNew = 0 ;
                                                //CONoUTrAW( "." ) ;
                                            }
                                            break ;
                                        }
                                        default :
                                        {
                                            if( bNew ) bNew = 0 ;
                                            break ;
                                        }
                                    }
                                }
                            }
                        }
                        etherP.delF( tinP , posti ) ;
                    }
                }
                DEL( pInfo ) ;
            }
        }

        //U::CANNOT DO THIS HERE BECAUSE THERE MIGHT BE MUTLIPLE RECIPIENTS, EACH OF WHICH NEEDS THIS FILE TO EXIST: if( !bFail && etherP.diskFileExistsF( tinP , psttFileBodyP ) ) etherP.boxZapF( tinP , psttFileBodyP ) ;
    }
    return bFail ;
}

boolT getBodySnipFromFileF( tinS& tinP , etherC& etherP , strokeS*& psttP , const strokeS* const psttFileBodyP , const countT csttMaxP = TOCK )
{
    _IO_
    ZE( boolT , bFail ) ;

    TN( tLit , "!literal:" ) ;
    if( 1 == etherP.strIdF( tinP , tLit , psttFileBodyP ) )
    {
        if( tLit.csF( tinP ) < psttFileBodyP->idAdam )
        {
            ZE( strokeS* , psttb ) ;
            countT idf = tLit.csF( tinP ) + 1 ;
            ZE( countT , idl ) ;
            etherP.strSubstringF( tinP , psttb , idf , idl , psttFileBodyP ) ; ___( psttb ) ;
            TN( tBody , "" ) ; tBody = T(psttb) ;
            etherP.delF( tinP , psttb ) ;
            etherP.strMakeF( tinP , LF , psttP , tBody ) ; ___( psttP ) ;
        }
    }
    else if( !etherP.diskFileExistsF( tinP , psttFileBodyP ) )
    {
        bFail = 1 ;
    }
    else
    {
        IFsCRATCH
        {
            SCOOPS

            //CONoUTrAW( T("opening body file\r\n") ) ;
            handleC hFileBody( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            tinP.pEtScratch->fileOpenF( tinP , hFileBody , countTC() , psttFileBodyP , ifcOPENaCCESS_R , 0 , flOPENdETAILS_LOCsEQ | flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO ) ;
            if( POOP )
            {
                POOPR
                //CONoUTrAW( "writing data: could not open the body file\r\n" ) ;
                bFail = 1 ;
            }
    
            if( !bFail )
            {
                ZE( infoFileS* , pInfo ) ;
                tinP.pEtScratch->diskFileQueryF( tinP , pInfo , hFileBody ) ; ___( pInfo ) ;
                if( POOP )
                {
                    POOPR
                    //CONoUTrAW( "writing data: could not get info for body file\r\n" ) ;
                    bFail = 1 ;
                }
        
                if( !bFail && pInfo )
                {
                    if( pInfo->cbUsedHigh )
                    {
                        POOPR
                        //CONoUTrAW( "writing data: body file is too large\r\n" ) ;
                        DEL( pInfo ) ;
                        bFail = 1 ;
                    }
    
                    if( !bFail )
                    {
                        //CONoUTrAW3( "writing data: body file is " , pInfo->cbUsed , " bytes\r\n" ) ;
                        countT cToDo = pInfo->cbUsed ;

                        if( cToDo > csttMaxP ) cToDo = csttMaxP ;

                        const countT costa = cToDo ;
            
                        ZE( osTextT* , posti ) ;
                        etherP.newF( tinP , LF , posti , costa ) ; ___( posti ) ;
                        if( posti )
                        {
                            etherP.fileReadF( tinP , posti , cToDo , hFileBody ) ;
                            etherP.strFuseF( tinP , psttP , T(posti) ) ; ___( psttP ) ;
                        }
                        etherP.delF( tinP , posti ) ;
                    }
                }
                DEL( pInfo ) ;
            }
        }
    }
    return bFail ;
}

TODO

boolT bSandbox = etherC::ifc_idHomeI_IF() & fliIDhOME_HOMELESS ;
bSandbox = 0 ;

if( !bSandbox )
{
    //#if defined( NEVERdEFINED )



    //U::MOVE THIS TO EARLY ADAM IN BUNDLE
    //ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_KERNEL3BANG , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

    #if defined( NEVERdEFINED )

    {
        ZE( boolT , bGorillaHttp ) ;
        {
            ZE( strokeS* , psttGorillaHttp ) ; etThread.querySettingF( tinP , psttGorillaHttp , T("!ipdos.gorilla.http")  ) ; ___( psttGorillaHttp ) ;
            bGorillaHttp = psttGorillaHttp && !etThread.strCompareF( tinP , psttGorillaHttp , T("yes") ) ;
            etThread.delF( tinP , psttGorillaHttp ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bGorillaHttp]:    ")+TF2(bGorillaHttp,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( bGorillaHttp ) ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_GORILLAhTTPiDEAFARMcOM , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    }

    {
        ZE( boolT , bGorillaHttpReporter ) ;
        {
            ZE( strokeS* , psttGorillaHttpReporter ) ; etThread.querySettingF( tinP , psttGorillaHttpReporter , T("!ipdos.gorilla.http.reporter")  ) ; ___( psttGorillaHttpReporter ) ;
            bGorillaHttpReporter = psttGorillaHttpReporter && !etThread.strCompareF( tinP , psttGorillaHttpReporter , T("yes") ) ;
            etThread.delF( tinP , psttGorillaHttpReporter ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bGorillaHttpReporter]:    ")+TF2(bGorillaHttpReporter,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( bGorillaHttpReporter ) ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_GORILLAhTTPiDEAFARMcOMrEPORTER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    }

    #endif

    {
        ZE( boolT , bServeHttp ) ;
        {
            ZE( strokeS* , psttServeHttp ) ; etThread.querySettingF( tinP , psttServeHttp , T("!ipdos.serve.http")  ) ; ___( psttServeHttp ) ;
            bServeHttp = psttServeHttp && !etThread.strCompareF( tinP , psttServeHttp , T("yes") ) ;
            etThread.delF( tinP , psttServeHttp ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bServeHttp]:    ")+TF2(bServeHttp,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( bServeHttp )
        {
            ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_ROOThTTPsERVER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
            homeS::homeIF().flagsAdams |= flHOMEsaDAMS_ROOThTTPsERVER ;
        }
    }

//U:: ENABLE AFTER MORE TESTING (SAW A.V.)
#if defined( NEVERdEFINED )
    {
        ZE( boolT , bNoServeBang ) ;
        {
            ZE( strokeS* , psttServeBang ) ; etThread.querySettingF( tinP , psttServeBang , T("!ipdos.serve.bang")  ) ; ___( psttServeBang ) ;
            bNoServeBang = psttServeBang && !etThread.strCompareF( tinP , psttServeBang , T("no") ) ;
            etThread.delF( tinP , psttServeBang ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bNoServeBang]:    ")+TF2(bNoServeBang,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( !bNoServeBang )
        {
            ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_KERNEL3BANG , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
            ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_GORILLAbANG , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;

            homeS::homeIF().flagsAdams |= flHOMEsaDAMS_ROOTbANG ;
        }
    }
#endif

    {
        ZE( boolT , bServeSmtp ) ;
        {
            ZE( strokeS* , psttServeSmtp ) ; etThread.querySettingF( tinP , psttServeSmtp , T("!ipdos.serve.smtp")  ) ; ___( psttServeSmtp ) ;
            bServeSmtp = psttServeSmtp && !etThread.strCompareF( tinP , psttServeSmtp , T("yes") ) ;
            etThread.delF( tinP , psttServeSmtp ) ;
        }

        //20190730@0808: MOVED TO HERE BUT NOT TESTED.  IDEAFARM.COM CURRENTLY USES GOOGLE.COM'S SMTP SERVER TO RELAY OUTGOING EMAIL
        etThread.traceF( tinP , T("ROOTmAILoUT: [bServeSmtp]:    ")+TF2(bServeSmtp,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( bServeSmtp ) ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_ROOTsMTPsERVER , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
    }

    #if defined( NEVERdEFINED )

    {
        ZE( boolT , bHeal ) ;
        {
            ZE( strokeS* , psttHeal ) ; etThread.querySettingF( tinP , psttHeal , T("!ipdos.heal")  ) ; ___( psttHeal ) ;
            bHeal = psttHeal && !etThread.strCompareF( tinP , psttHeal , T("yes") ) ;
            etThread.delF( tinP , psttHeal ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bHeal]:    ")+TF2(bHeal,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( bHeal )
        {
            ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , ifcIDaDAM_ROOThEAL , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
            homeS::homeIF().flagsAdams |= flHOMEsaDAMS_ROOThEAL ;
        }
    }

    #endif

    {
        ZE( boolT , bProcessAccessLogs ) ;
        {
            ZE( strokeS* , psttProcessAccessLogs ) ; etThread.querySettingF( tinP , psttProcessAccessLogs , T("!ipdos.process.access.logs")  ) ; ___( psttProcessAccessLogs ) ;
    //        bProcessAccessLogs = psttProcessAccessLogs && !etThread.strCompareF( tinP , psttProcessAccessLogs , T("yes") ) ;
            etThread.delF( tinP , psttProcessAccessLogs ) ;
        }

        etThread.traceF( tinP , T("ROOTmAILoUT: [bProcessAccessLogs]:    ")+TF2(bProcessAccessLogs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

        ether.ifcHireF( tinP , T("ifcIDaDAM_ROOTmAILoUT") , bProcessAccessLogs ? ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER : ifcIDaDAM_CLOUD , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; // flHIRE_DISPLAYaUTO CAN BE COMMENTED OUT TO AVOID WDW FOR ROOT CLOUD INSTANCE WHICH IS USUALLY NOT INTERESTING
    }

    //#endif

    //{
    //    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    //    ++ s ; ether.osSleepF( tinP , TOCK * 0x10 ) ; //TO AVOID LOADING SERVER DURING SYSTEM GEN
    //}
}

const countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;

TN( tToSend           , "" ) ; tToSend           = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/email.to.send/") ;
TN( tSent             , "" ) ; tSent             = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/email.sent/") ;
TN( tNotSent          , "" ) ; tNotSent          = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/email.notsent/") ;
TN( tNotSentAbandoned , "" ) ; tNotSentAbandoned = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/email.notsentabandoned/") ;

etThread.diskMakeDirIfNeededF( tinP , tToSend ) ;
etThread.diskMakeDirIfNeededF( tinP , tSent ) ;
etThread.diskMakeDirIfNeededF( tinP , tNotSent ) ;
etThread.diskMakeDirIfNeededF( tinP , tNotSentAbandoned ) ;

//20190728@2139: COMMENTED OUT TO PUT THIS ADAM BACK INTO SERVICE WITHOUT OTHER LEGACY ADAMS:  etThread.osThreadAdamF( tinP , ifcIDaDAM_ROOTfORMdATAeATER ) ;
TN( tStar , "*" ) ;
TN( tSlash , "/" ) ;
strokeS sSlash( '/' , sc_cFROMaSCII ) ;
stackC stTo( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
stackC stCc( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
stackC stBc( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
TN( tDotRN , ".\r\n" ) ;
TN( tLeadingDot , "\r\n." ) ;
TN( tLeadingDoubleDot , "\r\n.." ) ;
ZE( countT  , timeL1 ) ;
ZE( sCountT , timeL2 ) ;
TN( t1ListSmtpRelayServers , "" ) ;
ZE( strokeS* , psttzLeverProtocol ) ;
switchC swProtocol( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , psttzLeverProtocol ) ;
while( !ether && !etThread )
{
    ZE( countT  , timeN1 ) ;
    ZE( sCountT , timeN2 ) ;
    etThread.osTimeNowF( tinP , timeN1 , timeN2 ) ;

    countT  timeE1 = timeN1 ;
    sCountT timeE2 = timeN2 ;
    etThread.osTimeSubtractF( tinP , timeE1 , timeE2 , timeL1 , timeL2 ) ;

    if( timeE2 || timeE1 > TICK )
    {
        timeL1 = timeN1 ;
        timeL2 = timeN2 ;

        {
            countT cFlavors = swProtocol.cFlavorsF( tinP ) ;
            {
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    psttzLeverProtocol = (strokeS*)swProtocol.leverF( tinP , idf ) ;
                    strokeS*& psttProtocol = (strokeS*&)(countT&)swProtocol ;
                    etThread.delF( tinP , psttProtocol ) ;
                }
                swProtocol.freeAllF( tinP ) ;
            }
        }

        {
            ZE( strokeS* , pstt1i ) ;
            {
                ZE( strokeS* , pstti ) ;
                etThread.querySettingF( tinP , pstti , T("!ipdos.smtp.relays")  ) ; ___( pstti ) ;
                if( pstti && pstti->idAdam )
                {
                    strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                    etThread.strWordsF( tinP , pstt1i , pstti , sttq , T("/") ) ; ___( pstt1i ) ;
                    t1ListSmtpRelayServers = T(pstt1i) ;
                }
                etThread.delF( tinP , pstti ) ;
            }
            etThread.delF( tinP , pstt1i ) ;
            if( t1ListSmtpRelayServers.csF( tinP ) )
            {
                strokeS* psttz1 = t1ListSmtpRelayServers ;
                FORsTRINGSiN1( psttz1 )
                {
                    //etThread.traceF( tinP , T("[authorized smtp relay server]: ")+T(psttc1) ) ;

                    ZE( strokeS* , pstti ) ;
                    etThread.querySettingF( tinP , pstti , T("!ipdos.smtp.relay..")+T(psttc1)  ) ; ___( pstti ) ;
                    if( pstti && pstti->idAdam )
                    {
                        //etThread.traceF( tinP , T("protocol [server, protocol]: ")+T(psttc1)+T("    ")+T(pstti) ) ;

                        psttzLeverProtocol = psttc1 ;
                        strokeS*& psttProtocol = (strokeS*&)(countT&)swProtocol ;
                        psttProtocol = pstti ; pstti = 0 ;
                    }
                    etThread.delF( tinP , pstti ) ;
                }
            }
        }

        handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
        do
        {
            ZE( infoFileS* , pInfo ) ;
            etThread.diskFindFileOrDirF( tinP , pInfo , hFind , tNotSent ) ;

            if( !pInfo || !pInfo->psttIfoName )
            {
                DEL( pInfo ) ;
                break ;
            }
            else
            {
                //TN( tIfoName , pInfo->psttIfoName ) ;

                const boolT bDir = pInfo->psttIfoName[ CSpREFIX - 1 + pInfo->psttIfoName->idAdam ].idAdam == '/' ;

                if( !bDir )
                {
                    TN( tShort , "" ) ;
                    {
                        ZE( strokeS* , psttnu ) ;
                        ZE( strokeS* , psttShort ) ;
                        etThread.strBisectF( tinP , psttnu , psttShort , pInfo->psttIfoName , tSlash , - 1 - bDir , flSTRbISECT_APPENDdELIMITER ) ; ___( psttnu ) ; ___( psttShort ) ;
                        etThread.delF( tinP , psttnu ) ;
                        tShort = T(psttShort) ;
                        etThread.delF( tinP , psttShort ) ;
                    }

                    etThread.diskMoveFileOrDirF( tinP , tToSend+tShort , pInfo->psttIfoName ) ;
                    //etThread.traceF( tinP , tShort ) ;
                }
            }
            DEL( pInfo ) ;
        }
        while( !ether && ~hFind && !POOP ) ;
    }

    handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
    do
    {
        ZE( infoFileS* , pInfo ) ;
        etThread.diskFindFileOrDirF( tinP , pInfo , hFind , tToSend ) ;

        if( !pInfo || !pInfo->psttIfoName )
        {
            DEL( pInfo ) ;
            break ;
        }
        else
        {
            const boolT bDir = pInfo->psttIfoName[ CSpREFIX - 1 + pInfo->psttIfoName->idAdam ].idAdam == '/' ;

            if( !bDir )
            {
                TN( tIfoName , pInfo->psttIfoName ) ;

                TN( tShort , "" ) ;
                {
                    ZE( strokeS* , psttnu ) ;
                    ZE( strokeS* , psttShort ) ;
                    etThread.strBisectF( tinP , psttnu , psttShort , tIfoName , tSlash , - 1 - bDir , flSTRbISECT_APPENDdELIMITER ) ; ___( psttnu ) ; ___( psttShort ) ;
                    etThread.delF( tinP , psttnu ) ;
                    tShort = T(psttShort) ;
                    etThread.delF( tinP , psttShort ) ;
                }

                //etThread.traceF( tinP , tShort ) ;

                //etThread.traceF( tinP , TT(timeN1,timeN2)+T(" | mailing out ")+T((strokeS*)tIfoName)+T(": ") ) ;
                ZE( flagsT , flagsFail ) ;

                IFsCRATCH{}
                soulC sIn( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
                IFsCRATCH
                {
                    SCOOPS
                    tinP.pEtScratch->boxGetShadowF( tinP , sIn , tIfoName ) ;
                    if( POOP )
                    {
                        POOPR ;
                        flagsFail |= flFAIL_COULDnOTgETsHADOW ;
                        etThread.traceF( tinP , TT(timeN1,timeN2)+T(" | could not get shadow of ")+T((strokeS*)tIfoName)+T(": ") ) ;
                    }
                }

                ZE( boolT , bFailPermanent ) ;
                if( !( F(flagsFail) & flFAIL_COULDnOTgETsHADOW ) )
                {
                    ZE( strokeS* , psttHost ) ;
                    sIn >> psttHost ; ___( psttHost ) ;

                    ZE( countT , idPort ) ;
                    sIn >> idPort ;

                    ZE( strokeS* , psttProtocolName ) ;
                    {
                        //etThread.traceF( tinP , T("parsing [psttHost]: ")+T(psttHost) ) ;
                        ZE( strokeS* , pstt1w ) ;
                        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                        etThread.strWordsF( tinP , pstt1w , psttHost , sttq , T("[]") ) ; ___( pstt1w ) ;
                        etThread.delF( tinP , psttHost ) ;
                        FORsTRINGSiN1( pstt1w )
                        {
                            if( !psttHost ) { etThread.strMakeF( tinP , LF , psttHost , psttc1 ) ; ___( psttHost ) ; }
                            else
                            {
                                etThread.strMakeF( tinP , LF , psttProtocolName , psttc1 ) ; ___( psttProtocolName ) ;
                                break ;
                            }
                        }
                        etThread.delF( tinP , pstt1w ) ;
                        //etThread.traceF( tinP , T("after parsing [psttHost]: ")+T(psttHost) ) ;
                        //etThread.traceF( tinP , T("after parsing [psttProtocolName]: ")+T(psttProtocolName) ) ;
                    }

                    TN( tProtocolOverride , "" ) ;
                    if( psttProtocolName && psttProtocolName->idAdam )
                    {
                        ZE( strokeS* , pstti ) ;
                        TN( tKey , "" ) ; tKey = T("!ipdos.smtp.relay..")+T(psttHost)+T("..")+T(psttProtocolName) ;
                        //etThread.traceF( tinP , T("query override protocol [tKey]: ")+tKey ) ;
                        etThread.querySettingF( tinP , pstti , tKey  ) ; ___( pstti ) ;
                        if( !pstti || !pstti->idAdam ) etThread.traceF( tinP , T("not found [tKey]: ")+tKey ) ;
                        else
                        {
                            //etThread.traceF( tinP , T("protocol override [server, name, protocol]: ")+T(psttHost)+T("    ")+T(psttProtocolName)+T("    ")+T(pstti) ) ;
                            tProtocolOverride = T(pstti) ;
                        }
                        etThread.delF( tinP , pstti ) ;
                    }
                    etThread.delF( tinP , psttProtocolName ) ;

                    ZE( strokeS* , psttFrom ) ;
                    sIn >> psttFrom ; ___( psttFrom ) ;

                    countT cFrToCcLines = 1 ;
                    countT csttFrToCc = psttFrom->idAdam ;
                    {
                        stackC* ppzStk[] = { &stTo , &stCc , &stBc } ;
                        for( countT off = 0 ; off < 3 ; off ++ )
                        {
                            ZE( countT , cPlates ) ;
                            sIn >> cPlates ;
                            if( off < 2 ) cFrToCcLines += cPlates ;
                            while( cPlates -- )
                            {
                                ZE( strokeS* , psttw ) ;
                                sIn >> psttw ; ___( psttw ) ;
                                //switch( off )
                                //{
                                //    case 0 : { etThread.traceF( tinP , T("To: \"")   +T(psttw)+T("\"\r\n") ) ; break ; }
                                //    case 1 : { etThread.traceF( tinP , T("Cc" ": \"")+T(psttw)+T("\"\r\n") ) ; break ; }
                                //    case 2 : { etThread.traceF( tinP , T("Bc" ": \"")+T(psttw)+T("\"\r\n") ) ; break ; }
                                //}
                                if( psttw )
                                {
                                    if( off < 2 ) csttFrToCc += psttw->idAdam ;
                                    *ppzStk[ off ] << psttw ; psttw = 0 ;
                                }
                            }
                        }
                    }

                    ZE( strokeS* , psttFileBody ) ;
                    sIn >> psttFileBody ; ___( psttFileBody ) ;

                    //if( psttFileBody && psttFileBody->idAdam > CSpREFIX )
                    //{
                    //    //if( psttFileBody[ CSpREFIX ].idCaste == sc_PREFIXlENGTH ) { //CONoUTrAW( "STRING OF STRINGS? yes\r\n" ) ; }
                    //    //else                                                      { //CONoUTrAW( "STRING OF STRINGS? NO!\r\n" ) ; }
                    //    //CONoUTrAW3( "ISsTRINGoFsTRINGS evaluates to " , ISsTRINGoFsTRINGS( psttFileBody ) , "\r\n" ) ;
                    //
                    //    //ZE( strokeS* , psttDump ) ;
                    //    //etThread.strDumpIF( tinP , psttDump , (byteT*)psttFileBody , sizeof( strokeS ) * ( CSpREFIX * 2 + 1 ) , flSTRdUMP_null , sizeof( strokeS ) , sizeof( countT ) ) ; ___( psttDump ) ;
                    //    //CONoUTrAW( T("****DUMPbEGIN\r\n")+T(psttDump)+T("\r\n****DUMPeND\r\n") ) ;
                    //    //etThread.delF( tinP , psttDump ) ;
                    //}
                    ////else { //CONoUTrAW( "bad news, bro! psttFileBody is null or short\r\n" ) ; }

                    //PARSE psttFrom AND LOOKUP ACCOUNT OWNER NAME
                    TN( tEmailOwner , "" ) ;
                    ZE( stackC* , pStkEmailRelay ) ;
                    etThread( tinP , pStkEmailRelay , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailRelay ) ;
                    if( pStkEmailRelay )
                    {
                        TN( tNameOut , "" ) ;
                        TN( tNameIn , "" ) ;
                        {
                            ZE( countT , cPassSubaccount ) ; // 2
                            ZE( countT , cPassAccount    ) ; // 3
                            ZE( countT , idFormat        ) ; // 4

                            IFsCRATCH
                            {
                                SCOOPS
                            
                                ZE( strokeS* , psttw ) ;
                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                countT idf = 1 ;
                                tinP.pEtScratch->strSubstringF( tinP , psttw , idf , sttq , S1C('@') , psttFrom ) ; ___( psttw ) ;
                                if( POOP ) POOPR
                                else if( psttw && psttw->idAdam )
                                {
                                    ZE( strokeS* , pstt1w ) ;
                                    const countT cWords = tinP.pEtScratch->strWordsOldF( tinP , pstt1w , psttw , sttq , T(".") ) ; ___( pstt1w ) ;
                                    if( pstt1w )
                                    {
                                        FORsTRINGSiN1( pstt1w )
                                        {
                                            if( BlATHsTRING1 ) idFormat = tinP.pEtScratch->strDigitsToSCountF( tinP , tIfoName , 36 ) ;
                                        }
                
                                        switch( idFormat )
                                        {
                                            case 1 : // [idItem].fdee86.trswwh1.doubleblind.1
                                            {
                                                __( cWords < 4 ) ;
                                                __( cWords > 5 ) ;
                
                                                if( POOP ) POOPR
                                                else
                                                {
                                                    countT idWord = 6 - cWords ; // 1 OR 2
                
                                                    FORsTRINGSiN2( pstt1w )
                                                    {
                                                        if( idWord <= 3 )
                                                        {
                                                            __( !tinP.pEtScratch->strIsDigitsF( tinP , psttc2 , 36 ) ) ;                           // REJECT IF NOT ALL DIGITS
                                                            if( POOP )
                                                            {
                                                                POOPR
                                                                break ;
                                                            }
                                
                                                            ZE( countT* , pco ) ;
                                                            switch( idWord )
                                                            {
                                                                case 2 : { pco = &cPassSubaccount ; break ; }
                                                                case 3 : { pco = &cPassAccount    ; break ; }
                                                            }
                    
                                                            if( pco ) *pco = tinP.pEtScratch->strDigitsToSCountF( tinP , psttc2 , 36 ) ;
                                                        }
                                                        else { __( tinP.pEtScratch->strCompareF( tinP , psttc2 , T("doubleblind") ) ) ; }
                
                                                        if( idWord ++ == 4 ) break ;
                                                    }
                                                }
                                                break ;
                                            }
                                        }
                                    }
                                    etThread.delF( tinP , pstt1w ) ;
                                }
                                etThread.delF( tinP , psttw ) ;
                            }
        
                            if( cPassAccount && cPassSubaccount )
                            {
                                {
                                    ZE( strokeS* , psttw ) ;
                                    queryEmailFromIdAccountF( tinP , psttw , cPassAccount ) ; ___( psttw ) ;
                                    tEmailOwner = T(psttw) ;
                                    etThread.delF( tinP , psttw ) ;
                                }
        
                                {
                                    subaccountS info( tinP , etThread , cPassAccount , cPassSubaccount , flSUBACCOUNT_QUERYeMAILrELAY | flSUBACCOUNT_QUERYnAMEiN | flSUBACCOUNT_QUERYnAMEoUT ) ;
                                
                                    tNameIn  = T(info.psttNameIn) ;
                                    tNameOut = T(info.psttNameOut) ;
        
                                    if( info.pStkEmailRelay ) while( *info.pStkEmailRelay )
                                    {
                                        ZE( strokeS* , psttw ) ;
                                        *info.pStkEmailRelay >> psttw ; ___( psttw ) ;
                                        *pStkEmailRelay << psttw ;
                                    }
                                }
                            }
                        }
        
                        TN( tFrToCcOutgoing , "" ) ;
                        TN( tFrToCcIncoming , "" ) ;
                        IFsCRATCH
                        {
                            SCOOPS
                        
                            //MAPPING GLOBAL ALIASES
                            //CS:CODEsYNC: b750104 3a50104
                            //SUPPORT FOR hello@ideafarm.com COMMENTED OUT DUE TO DECISION TO NOT PROVIDE ANY FUNCTIONALITY TO ANONYMOUS INTERNET USERS
                            //if( !tinP.pEtScratch->strCompareF( tinP , psttFrom , T(ifcEMAIL_HELLO) ) )
                            //{
                            //    tinP.pEtScratch->delF( tinP , psttFrom ) ;
                            //    tinP.pEtScratch->strMakeF( tinP , LF , psttFrom , T("hello@ideafarm.com") ) ; ___( psttFrom ) ;
                            //}

                            textC* pptFrToCc[] = { &tFrToCcOutgoing , &tFrToCcIncoming } ;
                            for( countT offc = 0 ; offc <= 1 ; offc ++ )
                            {
                                ZE( strokeS* , psttFrToCc ) ;
                                
                                textC& tName = !offc ? tNameOut : tNameIn ;
                                const countT csttName = !tName.csF( tinP ) ? 0 : tName.csF( tinP ) + 3 ;
            
                                const countT cstta = csttFrToCc + cFrToCcLines * 0x10 + csttName ; //0x10 IS MORE THAN NEEDED (0xa)
            
                                tinP.pEtScratch->strMakeF( tinP , LF , psttFrToCc , 0 , cstta ) ; ___( psttFrToCc ) ;
                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T("From: ") ) ;
                                if( csttName ) tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T("\"")+tName+T("\" ") ) ;
                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T("<") ) ;
                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , psttFrom ) ;
                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T(">\r\n") ) ;
            
                                {
                                    stackC* ppzStk[] = { &stTo , &stCc } ;
                                    for( countT off = 0 ; off < 2 ; off ++ )
                                    {
                                        if( *ppzStk[ off ] )
                                        {
                                            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                            do
                                            {
                                                strokeS* psttw = (strokeS*)ppzStk[ off ]->downF( tinP , hWalk ) ;
                                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T(!off?"To: <":"Cc" ": <") ) ;
                                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , psttw ) ;
                                                tinP.pEtScratch->strFuseF( tinP , psttFrToCc , T(">\r\n") ) ;
                                            }
                                            while( ~hWalk ) ;
                                        }
                                    }
                                }
            
                                *pptFrToCc[ offc ] = T(psttFrToCc) ;
                                etThread.delF( tinP , psttFrToCc ) ;
                            }
            
                            if( POOP )
                            {
                                POOPR
                                flagsFail |= flFAIL_DURINGpARSING ;
                            }
                        }

                        if( !( F(flagsFail) & flFAIL_DURINGpARSING ) )
                        {
                            stackC* ppzStk[] = { &stTo , &stCc , &stBc } ;
                            for( countT offs = 0 ; offs < 3 && !flagsFail ; offs ++ )
                            {
                                //etThread.traceF( tinP , T("beginning of handling ")+TF2(*ppzStk[offs],flFORMAT_NObIGITvALUES)+T(" recipients for list ")+TF2(offs,flFORMAT_NObIGITvALUES) ) ;
                                if( *ppzStk[ offs ] )
                                {
                                    handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                    do
                                    {
                                        strokeS* psttr = (strokeS*)ppzStk[ offs ]->downF( tinP , hWalk ) ;
                                        //etThread.traceF( tinP , T("beginning of recipient \"")+T(psttr)+T("\"") ) ;
        
                                        ZE( strokeS* , psttBccLine ) ;
                                        IFsCRATCH
                                        {
                                            SCOOPS
                                            
                                            ZE( boolT , bIncoming ) ;
                                            if( *pStkEmailRelay )
                                            {
                                                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                                do
                                                {
                                                    strokeS* psttw = (strokeS*)pStkEmailRelay->downF( tinP , hWalk ) ;
                                                    if( !tinP.pEtScratch->strCompareF( tinP , psttr , psttw ) )
                                                    {
                                                        bIncoming = 1 ;
                                                        break ;
                                                    }
                                                }
                                                while( ~hWalk ) ;
                                            }
            
                                            if( offs == 2 )
                                            {
                                                tinP.pEtScratch->strFuseF( tinP , psttBccLine , T("Bcc" ": <") , 0 , 0 , strokeS() , 0 , 0 , /*U::SOUL?*/ 3 + psttr->idAdam ) ; ___( psttBccLine ) ;
                                                tinP.pEtScratch->strFuseF( tinP , psttBccLine , psttr ) ;
                                                tinP.pEtScratch->strFuseF( tinP , psttBccLine , T(">\r\n") ) ;
                                            }
        
                                            //countT idleTimeAllowedRead  = TOCK * 0x10 ;
                                            //countT idleTimeAllowedWrite = TOCK * 0x10 ;
                                            countT timeAllowedConnected = TICK >> 2 ;
                                            countT idleTimeAllowedRead  = SOCKETtIMEOUTdEFAULTwAN ;
                                            countT idleTimeAllowedWrite = SOCKETtIMEOUTdEFAULTwAN ;

                                            socketC sockc( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) , 0 , flSOCKETc_CRYPTfOREIGNsSL | flSOCKETc_CRYPTfOREIGNsSLdEFERhANDSHAKE , &idleTimeAllowedRead , &idleTimeAllowedWrite , &timeAllowedConnected ) ;
        
                                            nicNameC hidServer ;
                                            TN( tProtocol , "" ) ;
                                            {
                                                ZE( strokeS* , psttRelayServer ) ;
                                                ZE( strokeS* , psttMxExclude ) ;
                                                {
                                                    ZE( strokeS* , psttSetting ) ;

                                                    tinP.pEtScratch->strMakeF( tinP , LF , psttRelayServer , psttHost ) ; ___( psttRelayServer ) ;

                                                    //U:: 20190728@1932:  REWRITE TO USE A SETTING RATHER THAN HARDCODE
                                                    //tinP.pEtScratch->boxGetShadow::20141115@1937::MIGRATE:TO:USE:SETTINGS.BIT.TREE::SettingF( tinP , psttSetting , T("///d/ideafarm.home.")+TF1(etherC::ifc_idHomeIdisk_IF())+T(".setting.keyValue.smtprelay") ) ; ___( psttSetting ) ;
                                                    //if( psttSetting )
                                                    //{
                                                    //    ZE( strokeS* , pstt1l ) ;
                                                    //    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                                                    //    tinP.pEtScratch->strWordsOldF( tinP , pstt1l , psttSetting , sttq , T("\r\n") ) ; ___( pstt1l ) ;
                                                    //    FORsTRINGSiN1( pstt1l )
                                                    //    {
                                                    //             if( !psttRelayServer ) { tinP.pEtScratch->strMakeF( tinP , LF , psttRelayServer , tIfoName ) ; ___( psttRelayServer ) ; }
                                                    //        else if( !psttMxExclude   ) { tinP.pEtScratch->strMakeF( tinP , LF , psttMxExclude   , tIfoName ) ; ___( psttMxExclude   ) ; }
                                                    //        else break ;
                                                    //    }
                                                    //    etThread.delF( tinP , pstt1l ) ;
                                                    //}
                                                    //etThread.delF( tinP , psttSetting ) ;
                                                    //CONoUTrAW( T("relay server: \"")+T(psttRelayServer)+T("\"\r\n") ) ;
                                                    //CONoUTrAW( T("mx exclude  : \"")+T(psttMxExclude)+T("\"\r\n") ) ;
                                                }
                            
                                                ZE( strokeS* , psttServer ) ;
                                                {
                                                    ZE( strokeS* , psttMxName ) ;
                                                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                                                    tinP.pEtScratch->strWordF( tinP , psttMxName , psttr , sttq , strokeS('@') , -1 ) ; ___( psttMxName ) ;
            
                                                    if( !psttRelayServer || !psttRelayServer->idAdam || ( psttMxExclude && !tinP.pEtScratch->strCompareF( tinP , psttMxExclude , psttMxName ) ) ) { tinP.pEtScratch->dnsNicNamesF( tinP , psttServer , psttMxName , ifcIDtYPEdNSqUERY_MX ) ; ___( psttServer ) ; }
                                                    else                                                                                                                               { tinP.pEtScratch->strMakeF(     tinP , LF , psttServer , psttRelayServer                   ) ; ___( psttServer ) ; }
                                                    etThread.delF( tinP , psttMxName ) ;
                                                }
                                                etThread.delF( tinP , psttRelayServer ) ;
                                                etThread.delF( tinP , psttMxExclude ) ;
            
                                                //etThread.traceF( tinP , T("[psttServer]: ")+T(psttServer) ) ;

                                                ZE( boolT , bOk ) ;
                                                {
                                                    strokeS* psttz1 = t1ListSmtpRelayServers ;
                                                    FORsTRINGSiN1( psttz1 )
                                                    {
                                                        if( !etThread.strCompareF( tinP , psttc1 , psttServer ) )
                                                        {
                                                            bOk = 1 ;
                                                            //etThread.traceF( tinP , T("authorized [psttServer]: ")+T(psttServer) ) ;
                                                            break ;
                                                        }
                                                    }
                                                }

                                                __Z( bOk ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_UNAUTHORIZEDrELAYsERVER ;
                                                    etThread.traceF( tinP , T("unauthorized smtp relay server: ")+T(psttServer) ) ;
                                                    etThread.delF( tinP , psttServer ) ;
                                                    break ;
                                                }

                                                hidServer = socketC::nicNameIF( tinP , *tinP.pEtScratch , psttServer ) ;

                                                if( tProtocolOverride.csF( tinP ) )
                                                {
                                                    tProtocol = tProtocolOverride ;
                                                    //etThread.traceF( tinP , T("override [tProtocol]: ")+tProtocol ) ;
                                                }
                                                else if( swProtocol.idSlotOfLeverF( tinP , (countT)psttServer ) )
                                                {
                                                    psttzLeverProtocol = psttServer ;
                                                    strokeS* psttzProtocol = (strokeS*)(countT&)swProtocol ;
                                                    tProtocol = T(psttzProtocol) ;
                                                }

                                                //etThread.traceF( tinP , T("[psttServer,hidServer,tProtocol]:    ")+T(psttServer)+T("    ")+T(hidServer)+T("    ")+tProtocol ) ;
                                                etThread.delF( tinP , psttServer ) ;
                                            }

                                            TN( tHelloVerb   , "helo" ) ;
                                            TN( tHelloMyName , "ipdos.ideafarm.com" ) ;
                                            ZE( boolT , bTls ) ;
                                            TN( tUser , "" ) ;
                                            TN( tPassword , "" ) ;
                                            if( tProtocol.csF( tinP ) )
                                            {
                                                ZE( countT , idFormat ) ;
                                                ZE( strokeS* , pstt1w ) ;
                                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                                etThread.strWordsF( tinP , pstt1w , tProtocol , sttq ) ; ___( pstt1w ) ;
                                                ZE( countT , idw ) ;
                                                boolT bOk = 1 ;
                                                FORsTRINGSiN1( pstt1w )
                                                {
                                                    //etThread.traceF( tinP , T("protocol word: ")+T(psttc1) ) ;
                                                    switch( ++ idw )
                                                    {
                                                        case 1 :
                                                        {
                                                            if( etThread.strCompareF( tinP , psttc1 , T("format") ) )
                                                            {
                                                                etThread.traceF( tinP , T("unexpected  (expected \"format\")") ) ;
                                                                bOk = 0 ;
                                                            }
                                                            break ;
                                                        }
                                                        case 2 :
                                                        {
                                                            if( etThread.strCompareF( tinP , psttc1 , T("1") ) )
                                                            {
                                                                etThread.traceF( tinP , T("unexpected  (expected \"1\")") ) ;
                                                                bOk = 0 ;
                                                            }
                                                            else idFormat = 1 ;
                                                            break ;
                                                        }
                                                        default :
                                                        {
                                                            switch( idFormat )
                                                            {
                                                                case 1 :
                                                                {
                                                                    switch( idw )
                                                                    {
                                                                        case 3 :
                                                                        {
                                                                            if( etThread.strCompareF( tinP , psttc1 , T("ehlo") ) )
                                                                            {
                                                                                etThread.traceF( tinP , T("unexpected  (expected \"ehlo\")") ) ;
                                                                                bOk = 0 ;
                                                                            }
                                                                            else tHelloVerb = T("ehlo") ;

                                                                            break ;
                                                                        }
                                                                        case 4 :
                                                                        {
                                                                            tHelloMyName = T(psttc1) ;
                                                                            break ;
                                                                        }
                                                                        case 5 :
                                                                        {
                                                                            if( etThread.strCompareF( tinP , psttc1 , T("starttls") ) )
                                                                            {
                                                                                etThread.traceF( tinP , T("unexpected  (expected \"starttls\")") ) ;
                                                                                bOk = 0 ;
                                                                            }
                                                                            else bTls = 1 ;

                                                                            break ;
                                                                        }
                                                                        case 6 :
                                                                        {
                                                                            if( etThread.strCompareF( tinP , psttc1 , T("auth") ) )
                                                                            {
                                                                                etThread.traceF( tinP , T("unexpected  (expected \"auth\")") ) ;
                                                                                bOk = 0 ;
                                                                            }

                                                                            break ;
                                                                        }
                                                                        case 7 :
                                                                        {
                                                                            if( etThread.strCompareF( tinP , psttc1 , T("login") ) )
                                                                            {
                                                                                etThread.traceF( tinP , T("unexpected  (expected \"login\")") ) ;
                                                                                bOk = 0 ;
                                                                            }

                                                                            break ;
                                                                        }
                                                                        case 8 :
                                                                        {
                                                                            tUser = T(psttc1) ;
                                                                            break ;
                                                                        }
                                                                        case 9 :
                                                                        {
                                                                            tPassword = T(psttc1) ;
                                                                            break ;
                                                                        }
                                                                    }
                                                                    break ;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if( !bOk ) break ;
                                                }
                                                etThread.delF( tinP , pstt1w ) ;
                                            }

                                            //etThread.traceF( tinP , T("connecting to port ")+TF4(idPort,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa) ) ;
                                            sockc.connectF( tinP , idPort , hidServer ) ;
                                            sockc.verifyReplyF( tinP , 220 ) ;

                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_COULDnOTcONNECT ;
                                                etThread.traceF( tinP , T("connecting: failed") ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }
                            
                                            TN( tSay , "" ) ; tSay = ( tHelloVerb+T(" ")+tHelloMyName+T("\r\n") ) ;
                                            //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                            sockc.writeF( tinP , (osTextT*)tSay ) ;
                                            sockc.verifyReplyF( tinP , 250 ) ;
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_HELLOrEJECTED ;
                                                etThread.traceF( tinP , T("hello rejected: ")+tHelloVerb+T(" ")+tHelloMyName ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }
                        
                                            if( bTls )
                                            {
                                                tSay = T("starttls\r\n") ;
                                                //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                                sockc.writeF( tinP , (osTextT*)tSay ) ;
                                                sockc.verifyReplyF( tinP , 220 ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_STARTtlsrEJECTED ;
                                                    etThread.traceF( tinP , T("starttls rejected") ) ;
                                                    etThread.delF( tinP , psttBccLine ) ;
                                                    break ;
                                                }

                                                sockc.shakeHandsAsClientF( tinP ) ;
                            
#if defined( NEVERdEFINED )
                                                sockc.writeF( tinP , (osTextT*)( tHelloVerb+T(" ")+tHelloMyName+T("\r\n") ) ) ;
                                                sockc.verifyReplyF( tinP , 250 ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_HELLOrEJECTED ;
                                                    etThread.traceF( tinP , T("hello rejected: ")+tHelloVerb+T(" ")+tHelloMyName ) ;
                                                    etThread.delF( tinP , psttBccLine ) ;
                                                    break ;
                                                }
#endif
                                            }

                                            if( tUser.csF( tinP ) )
                                            {
                                                tSay = T("auth login\r\n") ;
                                                //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                                sockc.writeF( tinP , (osTextT*)tSay ) ;
                                                sockc.verifyReplyF( tinP , 334 ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_STARTtlsrEJECTED ;
                                                    etThread.traceF( tinP , T("auth login rejected") ) ;
                                                    etThread.delF( tinP , psttBccLine ) ;
                                                    break ;
                                                }

                                                tSay = tUser+T("\r\n") ;
                                                //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                                sockc.writeF( tinP , (osTextT*)tSay ) ;
                                                sockc.verifyReplyF( tinP , 334 ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_STARTtlsrEJECTED ;
                                                    etThread.traceF( tinP , T("user rejected") ) ;
                                                    etThread.delF( tinP , psttBccLine ) ;
                                                    break ;
                                                }
                                            }

                                            if( tPassword.csF( tinP ) )
                                            {
                                                tSay = tPassword+T("\r\n") ;
                                                //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                                sockc.writeF( tinP , (osTextT*)tSay ) ;
                                                sockc.verifyReplyF( tinP , 235 ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    flagsFail |= flFAIL_STARTtlsrEJECTED ;
                                                    etThread.traceF( tinP , T("password rejected") ) ;
                                                    etThread.delF( tinP , psttBccLine ) ;
                                                    break ;
                                                }
                                            }

                                            tSay = T("mail from:<")+T(psttFrom)+T(">\r\n") ;
                                            //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                            sockc.writeF( tinP , (osTextT*)tSay ) ;
                                            sockc.verifyReplyF( tinP , 250 ) ;
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_MAILfROMrEJECTED ;
                                                etThread.traceF( tinP , T("mail from: failed") ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }

                                            tSay = T("rcpt to:<")+T(psttr)+T(">\r\n") ;
                                            //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                            sockc.writeF( tinP , (osTextT*)tSay ) ;
                                            sockc.verifyReplyF( tinP , 250 ) ;
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_RCPTtOrEJECTED ;
                                                etThread.traceF( tinP , T("writing rcpt to: failed") ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }
                                
                                            tSay = T("data\r\n") ;
                                            //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                            sockc.writeF( tinP , (osTextT*)tSay ) ;
                                            sockc.verifyReplyF( tinP , 354 ) ;
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_DATAcOMMANDrREJECTED ;
                                                etThread.traceF( tinP , T("writing data cmd: failed") ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }
                                
                                            {
                                                {
                                                    TN( tHeaders , "" ) ; tHeaders = (!bIncoming?tFrToCcOutgoing:tFrToCcIncoming)+T(psttBccLine) ;
                                                    //etThread.traceF( tinP , T("[tHeaders]: ")+tHeaders ) ;
                                                    sockc.writeF( tinP , (osTextT*)tHeaders , tHeaders.csF( tinP ) ) ;
                                                }
        
                                                if( !ISsTRINGoFsTRINGS( psttFileBody ) ) { __( writeBodySnipFromFileF( tinP , etThread , sockc , psttFileBody , flagsFail ) ) ; }
                                                else
                                                {
                                                    FORsTRINGSiN1( psttFileBody )
                                                    {
                                                        __( writeBodySnipFromFileF( tinP , etThread , sockc , psttc1 , flagsFail ) ) ;      //20190929@1526: psttc1 WITHOUT ANALYSIS
                                                        if( POOP )
                                                        {
                                                            POOPR
                                                            etThread.traceF( tinP , T("call to writeBodySnipFromFileF failed [psttc1]: ")+T(psttc1) ) ;
                                                            etThread.delF( tinP , psttBccLine ) ;
                                                            break ;
                                                        }
                                                    }
                                                }
        
                                                if( POOP )
                                                {
                                                   POOPR
                                                   etThread.traceF( tinP , T("call to writeBodySnipFromFileF failed [psttFileBody]: ")+T(psttFileBody) ) ;
                                                   etThread.delF( tinP , psttBccLine ) ;
                                                   break ;
                                                }
        
                                                sockc.writeF( tinP , "\r\n.\r\n" , 5 ) ;
                                            }
                                            sockc.verifyReplyF( tinP , 250 ) ; //WILL FAIL IF ANTISPAM RELAYER REFUSES DATA BECAUSE IT CONTAINS REFERENCE TO BLACKLISTED (SPAMMER) WEB SITE
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_BODYrEJECTED ;
                                                bFailPermanent = 1 ;

                                                //LOG THE DATA
                                                //{
                                                //    TN( tHeaders , "" ) ; tHeaders = (!bIncoming?tFrToCcOutgoing:tFrToCcIncoming)+T(psttBccLine) ;
                                                //    CONoUTrAW( tHeaders ) ;
                                                //}
                                                //
                                                //if( !ISsTRINGoFsTRINGS( psttFileBody ) ) { __( logBodySnipFromFileF( tinP , etThread , psttFileBody ) ) ; }
                                                //else
                                                //{
                                                //    FORsTRINGSiN1( psttFileBody )
                                                //    {
                                                //        __( logBodySnipFromFileF( tinP , etThread , psttc1 ) ) ;      //20190929@1526: psttc1 WITHOUT ANALYSIS
                                                //    }
                                                //}

                                                //SEND A REJECTED NOTICE TO from
                                                //{
                                                //    CONoUTrAW( T("could not send; notifying\"")+T(psttFrom)+T("\"\r\n") ) ;
                                                //    TN( tReply ,
                                                //
                                                //        "Subject: Your email could not be sent\r\n"
                                                //        "\r\n"
                                                //        "Email sent by the IDEAFARM.COM email server is relayed through\r\n"
                                                //        "\r\n"
                                                //        "    k2smtpout.secureserver.net\r\n"
                                                //        "\r\n"
                                                //        "That relay combats spam by refusing to handle items that appeaer to be spam.\r\n"
                                                //        "It thinks that your note is spam, so is refusing to relay it to your intended\r\n"
                                                //        "recipient.\r\n"
                                                //        "\r\n"
                                                //        "Please resend your email after editing it to avoid this \"no spam\" censoring.\r\n"
                                                //        "\r\n"
                                                //        "Tips:\r\n"
                                                //        "\r\n"
                                                //        "    1. Remove all references to web sites that might be listed as spamming sites.\r\n"
                                                //        "\r\n"
                                                //        "    2. If your email contains a '[' followed immediately by a ']', put a space between\r\n"
                                                //        "       the brackets so that they appear as \"[ ]\".  (Adding the space between the brackets\r\n"
                                                //        "       will avoid a bug in the censoring software.)\r\n"
                                                //
                                                //    ) ;
                                                //
                                                //    etThread.boxPutF( tinP , T("//smtp/" ifcEMAIL_MAILoUT "/")+T(psttFrom) , tReply , tReply.csF( tinP ) ) ;
                                                //}

                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }

                                            //THIS CAN CYCLE INFINITELY
                                            //else if( etThread.strCompareF( tinP , psttFrom , T(ifcEMAIL_MAILoUT) ) )
                                            //{
                                            //    CONoUTrAW( T("an email was sent.  notifying \"")+T(psttFrom)+T("\"\r\n") ) ;
                                            //    //NOTIFY from THAT EMAIL WAS SENT
                                            //    {
                                            //        TN( tReply ,
                                            //
                                            //            "Subject: Your email was sent\r\n"
                                            //            "\r\n"
                                            //            "Your email was sent.\r\n"
                                            //
                                            //        ) ;
                                            //
                                            //        etThread.boxPutF( tinP , T("//smtp/" ifcEMAIL_MAILoUT "/")+T(psttFrom) , tReply , tReply.csF( tinP ) ) ;
                                            //    }
                                            //
                                            //    break ;
                                            //}

                                            tSay = T("quit\r\n") ;
                                            //etThread.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                            sockc.writeF( tinP , (osTextT*)tSay ) ;
                                            sockc.verifyReplyF( tinP , 221 ) ;
                                            if( POOP )
                                            {
                                                POOPR
                                                flagsFail |= flFAIL_QUITcOMMANDrEJECTED ;
                                                etThread.traceF( tinP , T("writing quit: failed") ) ;
                                                etThread.delF( tinP , psttBccLine ) ;
                                                break ;
                                            }
                                            //etThread.traceF( tinP , T("destroying socket") ) ;
                                        }
                                        //etThread.traceF( tinP , T("destroyed socket") ) ;
        
                                        etThread.delF( tinP , psttBccLine ) ;
                                        //etThread.traceF( tinP , T("end of recipient \"")+T(psttr)+T("\"") ) ;
                                    }
                                    while( ~hWalk ) ;
                                }
                                //etThread.traceF( tinP , T("end of handling list ")+TF2(offs,flFORMAT_NObIGITvALUES) ) ;
                            }
                        }
                    }
                    etThread.delF( tinP , psttFrom ) ;
                    etThread.delF( tinP , psttHost ) ;
                    etThread( tinP , pStkEmailRelay ) ;
                    //etThread.traceF( tinP , T("cleaning up 1") ) ;

                    etThread.delF( tinP , psttFileBody ) ;

                    stTo.purgeF( tinP ) ;
                    stCc.purgeF( tinP ) ;
                    stBc.purgeF( tinP ) ;
                }

                //etThread.traceF( tinP , T("cleaning up 2") ) ;
                if( POOP )
                {
                    POOPR
                    flagsFail |= flFAIL_UNKNOWNeRROR ;
                    //etThread.traceF( tinP , T("unknown error") ) ;
                }

                //etThread.traceF( tinP , T("cleaning up 3") ) ;

                if( POOP )
                {
                    POOPR
                    flagsFail |= flFAIL_COULDnOTgETsHORTfILEnAME ;
                }

                //etThread.traceF( tinP , T("moving the file") ) ;

                TN( tWhere , "" ) ; tWhere = bFailPermanent

                    ? tNotSentAbandoned
                    : F(flagsFail)
                        ? tNotSent
                        : tSent
                ;

                IFsCRATCH
                {
                    SCOOPS
                
                    tinP.pEtScratch->diskMoveFileOrDirF( tinP , tWhere+tShort , tIfoName ) ;
                    if( POOP )
                    {
                        POOPR
                        flagsFail |= flFAIL_COULDnOTmOVEfILE ;
                    }
                }

                IFsCRATCH                               //20201010@1520: ADDED WITHOUT ANALYSIS TO PREVENT ACCUMULATION OF FILES
                {
                    SCOOPS
                
                    if( !bFailPermanent && !( F(flagsFail) ) )
                    {
                        tinP.pEtScratch->boxZapF( tinP , tWhere+tShort ) ;
                        if( POOP )
                        {
                            POOPR
                            flagsFail |= flFAIL_COULDnOTzAPsENTfILE ;
                        }
                    }
                }

                //etThread.traceF( tinP , (!F(flagsFail)?T("aok"):T("flagsFail:")+TF2(flagsFail,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)) ) ;
            }
        }
        DEL( pInfo ) ;
    }
    while( !ether && ~hFind && !POOP ) ;

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
}

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
//SOURCE: 5adam.51000750.1 END
