//SOURCE: 5adam.5100057b.1 BEGIN
#define DDNAME "5adam.5100057b.1"
#define DDNUMB 0x5100057b
#define IDFILE (countT)0x0
#define postHEADER "5100057b.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.5100057b.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_ROOThTTPsERVER" )/*1*/

//OBSOLETES c750104, WHICH WAS A QUICK HACK TO GET THE WEB SITE UP

voidT httpFreshenCacheCBF( tinS& tinP , etherC& etThread , const boolT& bQuitP , httpServerC& meP , sessionsC& sessionsP , countT& cArgP , const boolT bCleanupP )
{
    _IO_
    IFsCRATCH
    {
        SCOOPS

        if( !bQuitP && !bCleanupP )
        {
            TELL( "setting up recyclables" )
            ZE( stackC* , pStkIdAcc ) ;
            etThread( tinP , pStkIdAcc , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_XRAY ) ; ___( pStkIdAcc ) ;
    
            ZE( strokeS* , psttzLeverZip ) ;
    
            ZE( switchStackC* , pSwsCities ) ;
            etThread( tinP , pSwsCities , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttzLeverZip , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , ifcSTACKtYPE_PTR_strokeS ) ; ___( pSwsCities ) ;
    
            ZE( switchStackC* , pSwsAccount ) ;
            etThread( tinP , pSwsAccount , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttzLeverZip , flSTACKc_ALLOWzE | flSTACKc_BLOB | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , sizeof( accountS ) ) ; ___( pSwsAccount ) ;
            
            if( pStkIdAcc && pSwsCities && pSwsAccount )
            {
                TELL( "cting sock" )
                socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
                TELL( "connecting" )
                sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
                
                TELL( "ct sOut" )
                soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
                sOut << (countT)FINGERnEG_LISTsERVERcMD ;
                sOut << (countT)1 ;
                sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_ENUMERATEiDaCCOUNT ;
                TELL( "writing sOut" )
                sock.writeF( tinP , sOut ) ;
                
                TELL( "ct sIn" )
                soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
                TELL( "reading sIn" )
                sock.readF( tinP , sIn ) ;
                
                TELL( "pulling finger" )
                ZE( countT , finger ) ;
                sIn >> finger ;
                __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
                
                TELL( "pulling idFormat" )
                ZE( countT , idFormat ) ;
                sIn >> idFormat ;
                __( idFormat - 1 ) ;
            
                TELL( "pulling cIdAccount" )
                ZE( countT , cIdAccount ) ;
                sIn >> cIdAccount ;
                //CONoUTrAW3( "[cIdAccount]: " , cIdAccount , "\r\n" ) ;
            
                TELL( "stacking idAcc" )
                while( cIdAccount -- )
                {
                    ZE( countT , idAcc ) ;
                    sIn >> idAcc ;
                    *pStkIdAcc << idAcc ;
                }
        
                TELL( "testing poop after getting idAcc enumeration" )
                if( !POOP )
                {
                    TELL( "setting up to get acct info" )
                    TN( tSep , " <> " ) ;
                    strokeS* psttSep = tSep ;
                    TN( tcr    , "<BR>\r\n" ) ;
                    strokeS* psttCRLF = tcr ;
                    TN( tp    , "<P>\r\n" ) ;
                    strokeS* psttPara = tp ;
        
                    TN( tNo1 , "Carol Brouillet" ) ; // US <> 94306 <> Palo Alto <> Carol Brouillet <> US
                    TN( tNo2 , "Gigi Williams" ) ; // US <> 94025 <> Menlo Park <> Gigi Williams <> US
                    TN( tNo3 , "Test Account" ) ; // US <> 33166 <> Miami <> Test Account <> US
                    TN( tNo4 , "Timur Mukminov" ) ; // US <> 94040 <> Mountain View <> Timur Mukminov <> US
        
                    TN( tNo5 , "Christina Palmer" ) ; // US <> 94040 <> Mountain View <> Christina Palmer <> US
                    TN( tNo6 , "Brian Shura" ) ; // US <> 95128 <> San Jose <> Brian Shura <> US
                    TN( tNo7 , "Antony Bergmann" ) ; // US <> 95128 <> San Jose <> Brian Shura <> US
            
                    TELL( "popping all idAcc values if" )
                    if( *pStkIdAcc )
                    {
                        TELL( "popping all idAcc values" )
                        while( *pStkIdAcc )
                        {
                            TELL( "popping an idAcc" )
                            ZE( countT , idAcc ) ;
                            *pStkIdAcc >> idAcc ;
        
                            TELL( "obtaining account info into temp buffer" )
                            byteT pbInfoTmp[ sizeof( accountS ) ] ;
                            new( 0 , tinP , pbInfoTmp , sizeof pbInfoTmp ) accountS( tinP , etThread , idAcc , flACCOUNT1_null , flACCOUNT2_QUERYfLAGSmODE | flACCOUNT2_QUERYaDDRESScOUNTRYcODE | flACCOUNT2_QUERYaDDRESSzIP | flACCOUNT2_QUERYaDDRESScITY | flACCOUNT2_QUERYaDDRESSnAME | flACCOUNT2_QUERYrESIDENCEcOUNTRY | flACCOUNT2_QUERYzIPaT ) ;
                            accountS& info = *(accountS*)pbInfoTmp ;
        
                            boolT bDelete = 1 ;
        
                            TELL( "inspecting list me flag" )
                            if
                            (
                                F(info.flagsMode) & fliACCOUNTmODE_LISTmEdIRECTORY     /*&&*/
                                //!etThread.strIdF( tinP , tNo1 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo2 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo3 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo4 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo5 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo6 , info.psttAddressName ) &&
                                //!etThread.strIdF( tinP , tNo7 , info.psttAddressName )
                            )
                            {
                                TELL( "setting bOk to exclude listed people" )
                                boolT bOk =
                    
                                       ( etThread.strCompareF( tinP , info.psttAddressName , T("Jeffrey Froning") ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94040") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("Robert Brown"   ) ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94541") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("Dean Hart"      ) ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94040") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("William Andyman") ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94040") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("Robb Mitchell"  ) ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94040") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("Ruby Unknown"   ) ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94040") ) )
                                    && ( etThread.strCompareF( tinP , info.psttAddressName , T("Antony Bergmann") ) || etThread.strCompareF( tinP , info.psttAddressZip , T("94401") ) )
                    
                                ;
            
                                TELL( "storing account info and city info if" )
                                if( bOk )
                                {
                                    TELL( "setting zip lever 2" )
                                    psttzLeverZip = info.psttAddressZip ;
        
                                    TELL( "copying account info to switchstack plate" )
                                    *pSwsAccount << (byteT*)0 ;
                                    thirdC::c_memcpyIF( tinP , (byteT*)&(*pSwsAccount)[ 1 ] , pbInfoTmp , sizeof pbInfoTmp ) ;
                                    bDelete = 0 ;
        
                                    TELL( "sinking city" )
                                    ZE( countT , ids ) ;
                                    ZE( strokeS* , psttw ) ;
                                    etThread.strMakeF( tinP , LF , psttw , info.psttAddressCity  ) ; ___( psttw ) ;
                                    pSwsCities->sinkF( tinP , ids , psttw , flSTACKsINK_UNIQUE ) ;
                                    if( !ids ) PUSE( tinP , *(byteT**)&psttw ) ;                
                                }
                            }
        
                            TELL( "deleting acct info if" )
                            if( bDelete )
                            {
                                TELL( "deleting account info" )
                                accountS* pzInfo = (accountS*)pbInfoTmp ;
                                DELzOMBIE( pzInfo ) ;
                                TELL( "deleted account info" )
                            }
                        }
                    }
        
                    TELL( "counting the size needed for the zip list string" )
                    ZE( countT , csttaZips ) ;
                    countT cFlavors = pSwsCities->cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        psttzLeverZip = (strokeS*)pSwsCities->leverF( tinP , idf ) ;
                        if( psttzLeverZip ) csttaZips += CSpREFIX + psttzLeverZip->idAdam ;
                    }
        
                    TELL( "allocating the zip list string 2" )
                    ZE( strokeS* , pstt1Zips ) ;
                    etThread.strMakeF( tinP , LF , pstt1Zips , 0 , csttaZips ) ; ___( pstt1Zips ) ;
        
                    TELL( "tasting the zip flavors" )
                    cFlavors = pSwsCities->cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        TELL( "setting the zip lever" )
                        psttzLeverZip = (strokeS*)pSwsCities->leverF( tinP , idf ) ;
        
                        TELL( "allocating the zip list string" )
                        etThread.strFuseSeparateF( tinP , pstt1Zips , psttzLeverZip ) ;
        
                        TELL( "building the show and click snip pair" )
                        TN( tShow  , "" ) ;
                        TN( tClick , "" ) ;
                        {
                            TN( tHead , "" ) ;
                            TN( tNull , "" ) ;
                            TN( tSep , " , " ) ;
                            TN( tPara , "\r\n<P>\r\n" ) ;
                            while( *pSwsCities )
                            {
                                ZE( strokeS* , psttw ) ;
                                *pSwsCities >> psttw ;
                                tHead += ( tHead.csF( tinP ) ? tSep : tNull )+T(psttw) ;
                                PUSE( tinP , *(byteT**)&psttw ) ;                
                            }
                            tHead += T("\r\n<P>\r\n") ;
            
                            TN( tAllHead , "" ) ; tAllHead = T("<SPAN CLASS=spaXXSmall STYLE=\"color:" ifcCOLORhTMLwHAT_FOREnOTEnORMAL "\"><I><U>")+T(psttzLeverZip)+T(": ")+tHead+T("</U></I></SPAN>") ;
                            tShow  = tAllHead ;
                            tClick = tAllHead ;
            
                            __( !*pSwsAccount ) ;
                            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                            do
                            {
                                accountS* pzInfo = (accountS*)&pSwsAccount->downF( tinP , hWalk ) ;
            
                                tClick +=
        
                                      T("<A HREF=\"/nobot/action/obeyDirectoryClick.html?idaccclickee=")
                                    + TF2(pzInfo->idAcc,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)
                                    + T("\">")
                                    + T(pzInfo->psttAddressName)
                                    + T("</A>")
                                    + T(psttCRLF)
        
                                ;
        
                                tShow +=
        
                                      T(pzInfo->psttAddressName)
                                    + T(psttCRLF)
        
                                ;
        
                                DELzOMBIE( pzInfo ) ;
                            }
                            while( ~hWalk ) ;
                            tShow  += tPara ;
                            tClick += tPara ;
                        }
        
                        TELL( "storing the show and click snip pair" )
                        meP.storeSnipF( tinP , T("zip.show.")+T(psttzLeverZip)  , tShow  ) ;
                        meP.storeSnipF( tinP , T("zip.click.")+T(psttzLeverZip) , tClick ) ;
                    }
        
                    {
                        TELL( "storing zips list snip" )
                        countT cbImage = sizeof( strokeS ) * ( CSpREFIX + pstt1Zips->idAdam ) ;
                        ZE( osTextT* , postsZips ) ;
                        PUSE.newF( tinP , LF , postsZips , sizeof( countT ) * 2 + cbImage ) ; ___( postsZips ) ;
                        countT* pcc = (countT*)postsZips ;
                        *pcc = 0       ; pcc ++ ;
                        *pcc = cbImage ; pcc ++ ; //CLIENT CODE CAN VALIDATE THIS BY COMPARING WITH CALCULATED IMAGE SIZE TO ENSURE THAT IT IS INTERPRETING THE BYTES CORRECTLY AS A STROKE STRING
                        thirdC::c_memcpyIF( tinP , (byteT*)pcc , (byteT*)pstt1Zips , cbImage ) ;
                        meP.storeSnipF( tinP , T("zip.list") , *(const osTextT**)&postsZips ) ;
                        TELL( "cleaning up 6" )
                    }
        
                    TELL( "cleaning up 5" )
                    etThread.delF( tinP , pstt1Zips ) ;
                }
                TELL( "cleaning up 4" )
            }
            TELL( "cleaning up 3.3" )
            etThread( tinP , pStkIdAcc ) ;
            TELL( "cleaning up 3.2" )
            etThread( tinP , pSwsCities ) ;
            TELL( "cleaning up 3.1" )
            etThread( tinP , pSwsAccount ) ;
            TELL( "cleaning up 3.0" )
    
            etThread.beeClickF( tinP ) ;
            TELL( "cleaning up 2" )
        }
        TELL( "cleaning up 1" )

        if( POOP ) { POOPR ; }
    }

    TELL( "returning" )
}

TASK( tmUpdateCacheF )
{
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;

    TN( tNameU1 , "127.0.0.1//http/talk.body?cachesearch=no" ) ;
    TN( tNameU2 , "127.0.0.1//http/talk.body?cachesearch=no&badge=force" ) ;
    //TN( tNameS1 , "127.0.0.1//https/talk.body?cachesearch=no" ) ;
    //TN( tNameS2 , "127.0.0.1//https/talk.body?cachesearch=no&badge=force" ) ;

    textC* ptName[] = { &tNameU1 , &tNameU2 /*, &tNameS1 , &tNameS2*/ } ;  // CS:CODEsYNC: 5100057b 5100057b

    textC& tName = *ptName[ ( idIn - 1 ) % ( sizeof ptName / sizeof ptName[ 0 ] ) ] ;
    while( !ether )
    {
        ZE( byteT* , pbIn ) ;
        ZE( countT , cbIn ) ;
        IFsCRATCH
        {
            SCOOPS
            tinP.pEtScratch->boxGetShadowF( tinP , pbIn , cbIn , tName , 1 , SOCKETtIMEOUTdEFAULTwAN ) ; ___( pbIn ) ; // SOCKETtIMEOUTdEFAULTwAN IS USED TO GIVE TIME TO RECOMPILE AND YET AVOID TRACE COMPLAINING FOR UNUSUAL TIMEOUT VALUE
            if( POOP )                                                                                                 //U:: boxC: SUPPORT SEPARATE TIMEOUT VALUES FOR READ/WRITE/CONNECTED, AND ONLY SUPPORT time1 NOT time2
            {
                POOPRqUIET
                etThread.traceF( tinP , T("boxGetShadowF failed") ) ;
            }
        }
        etThread.delF( tinP , pbIn ) ;
    }
}
DONE( tmUpdateCacheF )

TODO

ZE( flagsT , flagsSave ) ;
{
    //20120901: COMMENTED OUT TO GET THIS TO WORK
    //THREADmODE2sAVE0( flagsSave )
    //THREADmODE2oN0( flTHREADmODE2_UNLOCKpOOLiDENTITY )
    //puseC pusePeanut( tinP , "list.lath.peanut" , flPOOLc_null , ifcIDsTATEsPACE_MULTIPLEaDAMS ) ;
    //puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    //THREADmODE2rESTORE0( flagsSave )

    booksC booksSurvey( tinP , TAG( TAGiDnULL ) , "survey1" , ifcIDsTATEsPACE_MULTIPLEaDAMS , flBOOKSc_WRITER , TOCK ) ;

    ZE( countT , cLeverPassword ) ;
    switchStackC swsUnconfirmedPeerDeleteEmailZipCountryByPassword( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , cLeverPassword , flSTACKc_null , ifcSTACKtYPE_PTR_strokeS , ifcIDgRABlAYER_7BASEmISC1 ) ;

    count8S c8p( /*(countT)&pusePeanut*/0 , (countT)&booksSurvey , (countT)&cLeverPassword , (countT)&swsUnconfirmedPeerDeleteEmailZipCountryByPassword ) ;
    countT cArgApp = (countT)&c8p ;

    httpServerC_arg1S arg1U( TAG( TAGiDnULL ) , etThread , cArgApp , ifcIDpORT_HTTP  , flSOCKETc_null            , T("World Wide Web") ) ;
    httpServerC_arg1S arg1S( TAG( TAGiDnULL ) , etThread , cArgApp , ifcIDpORT_HTTPS , flSOCKETc_CRYPTfOREIGNsSL , T("World Wide Web Secured") ) ;
    httpServerC_arg2S arg2 ;
    //U:: ENABLE AFTER REWRITE DATABASE SUBSYSTEMS FOR BILLING:: arg2.pHttpFreshenCacheCBF = httpFreshenCacheCBF ;

    cacheC cache( tinP , etThread ) ;

    {
        httpServerC serverU( tinP , arg1U , arg2 , &cache ) ;
        httpServerC serverS( tinP , arg1S , arg2 , &cache ) ;
        countT cDo = 2 ;                                                // CS:CODEsYNC: 5100057b 5100057b
        while( cDo -- ) etThread.osThreadF( TaRG1( tmUpdateCacheF ) ) ;
        ether.loafIF( tinP ) ;
    }

    THREADmODE2sAVE0( flagsSave )
    THREADmODE2oN0( flTHREADmODE2_UNLOCKpOOLiDENTITY )
}
THREADmODE2rESTORE0( flagsSave )

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
//SOURCE: 5adam.5100057b.1 END
