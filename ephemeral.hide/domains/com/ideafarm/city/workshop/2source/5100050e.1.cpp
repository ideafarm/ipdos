//SOURCE: 5adam.5100050e.1 BEGIN
#define DDNAME "5adam.5100050e.1"
#define DDNUMB 0x5100050e
#define IDFILE (countT)0x0
#define postHEADER "5100050e.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.5100050e.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_HOMEfLAGS" )/*1*/

boolT bOkDnsValueF( tinS& tinP , const strokeS* const psttP )
{
    ZE( boolT , bOk ) ;
    IFsCRATCH
    {
        SCOOPS
        nicNameC nn = tinP.pEtScratch->sockNicNameF( tinP , psttP ) ;
        if( POOP )
        {
            POOPR
            //CONoUTrAW( "F" ) ;
        }
        else if( !nn ) { /*CONoUTrAW( "F" ) ;*/ }
        else  bOk = 1 ;
    }

    //LOGrAW3( "bOkDnsValueF [bOk]: " , bOk , "\r\n" ) ;
    return bOk ;
}

boolT bDnsRefusedVersionF( tinS& tinP , const strokeS* const psttP )
{
    ZE( boolT , bRefused ) ; //VERSION REFUSED FLAG WILL BE SET ONLY IF I GET A POSITIVE DENIAL FROM THE DNS
    IFsCRATCH
    {
        SCOOPS
        nicNameC nn = tinP.pEtScratch->sockNicNameF( tinP , psttP ) ;
        if( POOP ) POOPR
        else if( nn.pcId[ 0 ] == 0xff00ff00 ) bRefused = 1 ;
    }

    //LOGrAW3( "bDnsRefusedVersionF [bRefused]: " , bRefused , "\r\n" ) ;
    return bRefused ;
}

boolT bOkHttpPageF( tinS& tinP , const strokeS* const psttP )
{
    ZE( boolT , bOk ) ;
    IFsCRATCH
    {
        SCOOPS
        ZE( byteT* , pbHome  ) ;
        ZE( countT , cbHome ) ;
        tinP.pEtScratch->boxGetShadowF( tinP , pbHome  , cbHome  , psttP  ) ; ___( pbHome  ) ;
        tinP.pEtScratch->delF( tinP , pbHome  ) ;
        if( POOP )
        {
            POOPR
            //CONoUTrAW( "F" ) ;
        }
        else bOk = 1 ;
    }

    //LOGrAW3( "bOkHttpPageF [bOk]: " , bOk , "\r\n" ) ;
    return bOk ;
}

voidT rosterF( tinS& tinP , strokeS*& psttP )
{
    IFsCRATCH
    {
        SCOOPS
        TN( tRosterHttp  , "www.ideafarm.com//http//index.htm" ) ;
        //TN( tRosterHttp  , "www.fuckyourbrain.com//http//index.htm" ) ;
        ZE( byteT* , pbAll  ) ;
        ZE( countT , cbAll ) ;
        tinP.pEtScratch->boxGetShadowF( tinP , pbAll , cbAll , tRosterHttp ) ; ___( pbAll  ) ;
    
        tinP.pEtScratch->boxPutF( tinP , T("///d/tmp.ideafarm.txt") , pbAll , cbAll ) ;
    
        ZE( strokeS* , psttAll ) ;
        tinP.pEtScratch->strMakeF( tinP , LF , psttAll , T(pbAll) ) ; ___( psttAll ) ;
        tinP.pEtScratch->delF( tinP , pbAll  ) ;
    
        countT idf = 1 ;
        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
        countT cSkip = 1 ;
        etherC& etRock = etherC::etRockIF( tinP ) ;
        while( idf && !POOP )
        {
            ZE( strokeS* , psttSection ) ;
            tinP.pEtScratch->strSubstringF( tinP , psttSection , idf , sttq , T("<hr>") , psttAll ) ; ___( psttSection ) ;
            if( cSkip && cSkip -- ) ;
            else                    tinP.pEtScratch->strokeF( tinP , T("<<<<")+T(psttSection)+T(">>>>") ) ;
            tinP.pEtScratch->delF( tinP , psttSection ) ;
        }
        tinP.pEtScratch->delF( tinP , psttAll ) ;
    
        if( POOP )
        {
            POOPR
            tinP.pEtScratch->delF( tinP , psttP ) ;
        }
    }
}

#define ADDfLAK |  0x84c73d00
#define SUBfLAK & ~0x84c73d00

//20210224@1610: THIS IS OBSOLETE NOW THAT CODE IS OPEN SOURCE
#if defined( NEVERdEFINED )

voidT secretF( tinS& tinP , etherC& etherP , textC& tUserP , textC& tPasswordP )
{
    countT pcUser[]     = { 'i' ADDfLAK , 'p' ADDfLAK , 'd' ADDfLAK , 'o' ADDfLAK , 's' ADDfLAK , '.' ADDfLAK , '0' ADDfLAK , '1' ADDfLAK } ;
    countT pcPassword[] = { '8' ADDfLAK , 'd' ADDfLAK , 'b' ADDfLAK , 'b' ADDfLAK , '3' ADDfLAK , '6' ADDfLAK , 'b' ADDfLAK , 'a' ADDfLAK , '0' ADDfLAK , '3' ADDfLAK , 'd' ADDfLAK , 'a' ADDfLAK , '4' ADDfLAK , '0' ADDfLAK , '0' ADDfLAK , 'c' ADDfLAK , '8' ADDfLAK , 'f' ADDfLAK , 'c' ADDfLAK , 'f' ADDfLAK , '3' ADDfLAK , '6' ADDfLAK , '4' ADDfLAK , 'a' ADDfLAK , 'b' ADDfLAK , '9' ADDfLAK , 'c' ADDfLAK , 'e' ADDfLAK , 'e' ADDfLAK , 'f' ADDfLAK , 'b' ADDfLAK , '5' ADDfLAK } ;

    for( countT offi = 0 ; offi < sizeof pcUser / sizeof pcUser[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcUser[ offi ] SUBfLAK ) , 0 } ;
        tUserP += T(postWo) ;
    }

    for( countT offi = 0 ; offi < sizeof pcPassword / sizeof pcPassword[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcPassword[ offi ] SUBfLAK ) , 0 } ;
        tPasswordP += T(postWo) ;
    }
}

#endif

TASK( tmWatchIdeafarmF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 && pTaskP->c4 )
{
    strokeS* psttBuildingP           = (strokeS*)pTaskP->c1 ;
    strokeS* psttUserP               = (strokeS*)pTaskP->c2 ;
    strokeS* psttPasswordP           = (strokeS*)pTaskP->c3 ;
    strokeS* psttRemoteHomeRegistryP = (strokeS*)pTaskP->c4 ;

    homeS& home = homeS::homeIF() ;
    etherC& etRock = etherC::etRockIF( tinP ) ;

    IFsCRATCH
    {
        SCOOPS

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        etherC& etRock = etherC::etRockIF( tinP ) ;
        while( !ether && !etThread && !POOP )
        {
            //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop /+") ) ;

            TN( tName , "" ) ;
            {
                ZE( strokeS* , psttu ) ;
                etThread.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
                tName = T(psttu) ;
                etThread.delF( tinP , psttu ) ;
            }

            {
                //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop /2") ) ;
                cloudC cloud( tinP , tName , ifcIDdOcLOUDiFdIFFER_NOTHING , flCLOUDc_NOcOPY | flCLOUDc_DOnOTlOADlOCAL | flCLOUDc_DOnOTlOADrEMOTE , ifcIDcLOUD_RACKSPACE , psttBuildingP , psttUserP , psttPasswordP , psttRemoteHomeRegistryP ) ;
                //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop /1") ) ;
        
                TN( tStuck1 , "setIfEqualsAM is stuck 1" ) ;
                TN( tStuck2 , "setIfEqualsAM is stuck 2" ) ;
                if( POOP )
                {
                    POOPR
                    etRock.traceF( tinP , T("tmWatchIdeafarmF / the IdeaFarm (tm) accounting cloud is not visible") ) ;

                    if( !( F(home.flags) & flHOMEs_IDEAFARMcLOUDiSgONE ) ) for( countT ii = 0 ;; ii ++ )
                    {
                        flagsT flagso = home.flags ;
                        flagsT flagsn = flagso | flHOMEs_IDEAFARMcLOUDiSgONE ;
                        if( flagso == setIfEqualsAM( home.flags , flagsn , flagso ) ) break ;
                        if( ii > TUCK ) etRock.traceF( tinP , tStuck1 ) ;
                    }
                }
                else
                {
                    //etRock.traceF( tinP , T("tmWatchIdeafarmF / connected aok to the IdeaFarm (tm) accounting cloud") ) ;

                    if( F(home.flags) & flHOMEs_IDEAFARMcLOUDiSgONE ) for( countT ii = 0 ;; ii ++ )
                    {
                        flagsT flagso = home.flags ;
                        flagsT flagsn = flagso & ~(F(flHOMEs_IDEAFARMcLOUDiSgONE)) ;
                        if( flagso == setIfEqualsAM( home.flags , flagsn , flagso ) ) break ;
                        if( ii > TUCK ) etRock.traceF( tinP , tStuck2 ) ;
                    }
                }
                //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop /0") ) ;
            }

            //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop / napping for tick << 7") ) ;
            ++ s ; ether.osSleepF( tinP , TICK << 7 ) ;                                         //20181110@1429: "TOCK << 4" -> "TICK << 7" TO REDUCE BANDWIDTH CHARGES; MIGHT NEED TO MAKE THIS MORE FREQUENT WHEN HAVE NEW USERS
            //etRock.traceF( tinP , T("tmWatchIdeafarmF / loop /-") ) ;
        }
    }
    etThread.delF( tinP , psttBuildingP           ) ;
    etThread.delF( tinP , psttUserP               ) ;
    etThread.delF( tinP , psttPasswordP           ) ;
    etThread.delF( tinP , psttRemoteHomeRegistryP ) ;
}
DONE( tmWatchIdeafarmF )

TASK( tmGetIdHomeF )

homeS& home = homeS::homeIF() ;

TN( tName , "" ) ;
{
    ZE( strokeS* , psttu ) ;
    etThread.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
    tName = T(psttu) ;
    etThread.delF( tinP , psttu ) ;
}
TN( tBuilding , "IAD" ) ;

TN( tUser , "ipdos.01" ) ;
TN( tPassword , "749b4eaeb75c46ac86d12d6e8d059b09" ) ;
//secretF( tinP , etThread , tUser , tPassword ) ;

TN( tRemoteHomeRegistry , "ipdos.home.registry" ) ;
TN( tRemoteHomePrivileges , "ipdos.home.privileges" ) ;

ZE( boolT , bApproved ) ;
ZE( boolT , bPissHired ) ;
{
    thirdC::c_strcpyIF( tinP , home.postIdHomeGlobal , "!queryingSettings" ) ;

    TN( tSettingPrefix , "!ipdos." ) ;
    TN( tSuffixPrimaryEndUserEmail  , "primary.end.user.email" ) ;
    TN( tSuffixPrimaryEndUserName   , "primary.end.user.name"  ) ;
    TN( tSuffixArbitraryUniquifier1 , "arbitrary.uniquifier.1" ) ;

    ZE( strokeS* , psttUserEmail            ) ; etThread.querySettingF( tinP , psttUserEmail            , tSettingPrefix+tSuffixPrimaryEndUserEmail  ) ; ___( psttUserEmail            ) ;
    ZE( strokeS* , psttUserName             ) ; etThread.querySettingF( tinP , psttUserName             , tSettingPrefix+tSuffixPrimaryEndUserName   ) ; ___( psttUserName             ) ;
    ZE( strokeS* , psttArbitraryUniquifier1 ) ; etThread.querySettingF( tinP , psttArbitraryUniquifier1 , tSettingPrefix+tSuffixArbitraryUniquifier1 ) ; ___( psttArbitraryUniquifier1 ) ;
    
    if( psttUserEmail ) { etThread.strConvertToLowerCaseF( tinP , psttUserEmail ) ; ___( psttUserEmail ) ; }

    countT idComputer = etThread.diskIdF( tinP , T("///c") ) ;
    ZE( strokeS* , psttIdComputer ) ;
    etThread.strFromF( tinP , psttIdComputer , idComputer , flFORMAT_NObIGITvALUES | flFORMAT_UNSIGNED | flFORMAT_FILLzE , 2 * sizeof( countT ) ) ; ___( psttIdComputer ) ;
    
    countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
    ZE( strokeS* , psttIdHomeDisk ) ;
    etThread.strFromF( tinP , psttIdHomeDisk , idHomeDisk , flFORMAT_NObIGITvALUES | flFORMAT_UNSIGNED | flFORMAT_FILLzE , 2 * sizeof( countT ) ) ; ___( psttIdHomeDisk ) ;

    ZE( boolT , bSettingsAreBad ) ;
    {
             if( !psttUserEmail            ) { bSettingsAreBad |= 1 ; etThread.traceF( tinP , (strokeS*)( T("invalid setting: the ")+tSuffixPrimaryEndUserEmail+T(" setting is missing"                                                      ) ) ) ; }
        else if( !psttUserEmail->idAdam    ) { bSettingsAreBad |= 1 ; etThread.traceF( tinP , (strokeS*)( T("invalid setting: the ")+tSuffixPrimaryEndUserEmail+T(" setting must be at least 1 character"                                    ) ) ) ; }

             if( !psttUserName             ) { bSettingsAreBad |= 1 ; etThread.traceF( tinP , (strokeS*)( T("invalid setting: the ")+tSuffixPrimaryEndUserName+T(" setting is missing"                                                       ) ) ) ; }
        else if( !psttUserName->idAdam     ) { bSettingsAreBad |= 1 ; etThread.traceF( tinP , (strokeS*)( T("invalid setting: the ")+tSuffixPrimaryEndUserName+T(" setting must be at least 1 character"                                     ) ) ) ; }

             if( !psttArbitraryUniquifier1 ) { bSettingsAreBad |= 1 ; etThread.traceF( tinP , (strokeS*)( T("invalid setting: the ")+tSuffixArbitraryUniquifier1+T(" setting is missing (it should normally be set to \"\", the null string)") ) ) ; }
    }

    if( bSettingsAreBad )
    {
        thirdC::c_strcpyIF( tinP , home.postIdHomeGlobal , "!settingsAreInvalid" ) ;
        ether.ifcHireF( tinP , T("HOMEfLAGS") , ifcIDaDAM_PISS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; //MUST HIRE PISS EVEN IF NO PAID PRIVILEGES IN ORDER TO ALLOW USER TO UPDATE SETTINGS
    }
    else
    {
        thirdC::c_strcpyIF( tinP , home.postIdHomeGlobal , "!registering" ) ;

        ZE( strokeS* , psttMe ) ;
        etThread.strMakeF( tinP , LF , psttMe , 0 , 
    
            psttUserEmail->idAdam                                   +
            psttUserName->idAdam                                    +
            psttIdComputer->idAdam                                  +
            psttIdHomeDisk->idAdam                                  +
            psttArbitraryUniquifier1->idAdam                        +
            TUCK
    
        ) ; ___( psttMe ) ;
    
        TN( tcr , "\r\n" ) ;
    
        etThread.strFuseF( tinP , psttMe , T("ideafarm.com\r\nIPDOS (tm) - IdeaFarm (tm) Piggyback Distributed Operating System\r\nHome Folder Registration\r\nformat:1\r\n") ) ;
        etThread.strFuseF( tinP , psttMe , psttUserEmail ) ;
        etThread.strFuseF( tinP , psttMe , tcr ) ;
        etThread.strFuseF( tinP , psttMe , psttUserName ) ;
        etThread.strFuseF( tinP , psttMe , tcr ) ;
        etThread.strFuseF( tinP , psttMe , psttIdComputer ) ;
        etThread.strFuseF( tinP , psttMe , tcr ) ;
        etThread.strFuseF( tinP , psttMe , psttIdHomeDisk ) ;
        etThread.strFuseF( tinP , psttMe , tcr ) ;
        etThread.strFuseF( tinP , psttMe , psttArbitraryUniquifier1 ) ;
        etThread.strFuseF( tinP , psttMe , tcr ) ;
    
        TN( tMe , psttMe ) ;
        etThread.delF( tinP , psttMe ) ;
    
        osTextT* postzMe = tMe ;
        countT   costzMe = thirdC::c_strlenIF( tinP , postzMe ) ;       // DONE THIS WAY BECAUSE csF() COUNT WILL DIFFER IF SOME STROKES WERE SUPPRESSED WHEN CONVERTING TO osTextT
    
        //LOGrAW( postzMe ) ;
   
        TN( tHash , "" ) ;
        {
            hasherC hasher( tinP , etThread ) ;
            hasher.eatF( tinP , postzMe , costzMe ) ;

            ZE( strokeS* , psttHash ) ;
            hasher.queryStringF( tinP , psttHash ) ; ___( psttHash ) ;
            tHash = T(psttHash) ;
            etThread.delF( tinP , psttHash ) ;
        }
    
        TN( tEmailCleaned , "" ) ;
        TN( tShortSuffix , ".home.txt" ) ;
        {
            TN( tSmallOld , "" ) ; tSmallOld =
        
                T("")
                +S2(sa_SSSaND,sc_ccSSS)
                    +S3(sa_SSSoR,sc_ccSSS,sp_SSSfLAGrANGEpAIRS|sp_SSSfLAGnOT)
            
                        +T("az09")
            
                    +S2(sa_SSSoReND,sc_ccSSS)
                +S2(sa_SSSaNDeND,sc_ccSSS)
        
            ;
    
            ZE( strokeS* , psttc ) ;
            TN( tn , "" ) ;
            etThread.strReplaceF( tinP , psttc , psttUserEmail , tSmallOld , tn ) ; ___( psttc ) ;
    
            const countT costEmailMax = COSTiDhOMEgLOBALmAX - COSTpOSThASHmD5 - tShortSuffix.csF( tinP ) - 1 ;

            if( psttc->idAdam > costEmailMax )
            {
                strokeS* psttd = psttc ;
                                 psttc = 0 ;
                countT idf = 1 ;
                countT idl = costEmailMax ;
                etThread.strSubstringF( tinP , psttc , idf , idl , psttd ) ; ___( psttc ) ;
                etThread.delF( tinP , psttd ) ;
            }
    
            tEmailCleaned = T(psttc) ;
            etThread.delF( tinP , psttc ) ;
        }
    
        TN( tPostIdHomeGlobal , "" ) ; tPostIdHomeGlobal = tEmailCleaned+strokeS('.')+tHash ;
        TN( tShort            , "" ) ; tShort            = tPostIdHomeGlobal+tShortSuffix ;

        {
            ZE( strokeS* , psttBuilding ) ;
            ZE( strokeS* , psttUser ) ;
            ZE( strokeS* , psttPassword ) ;
            ZE( strokeS* , psttRemoteHomeRegistry ) ;
            etThread.strMakeF( tinP , LF , psttBuilding           , tBuilding           ) ; ___( psttBuilding           ) ;
            etThread.strMakeF( tinP , LF , psttUser               , tUser               ) ; ___( psttUser               ) ;
            etThread.strMakeF( tinP , LF , psttPassword           , tPassword           ) ; ___( psttPassword           ) ;
            etThread.strMakeF( tinP , LF , psttRemoteHomeRegistry , tRemoteHomeRegistry ) ; ___( psttRemoteHomeRegistry ) ;

            etThread.osThreadF( TaRG1( tmWatchIdeafarmF ) , (countT)psttBuilding , (countT)psttUser , (countT)psttPassword , (countT)psttRemoteHomeRegistry ) ;
            psttBuilding = psttUser = psttPassword = psttRemoteHomeRegistry = 0 ;
        }

        IFsCRATCH
        {
            SCOOPS
    
            ZE( boolT , bDone ) ;
            etherC& etRock = etherC::etRockIF( tinP ) ;
            while( !ether && !POOP && !bDone )
            {
                cloudC cloud( tinP , tName , ifcIDdOcLOUDiFdIFFER_NOTHING , flCLOUDc_NOcOPY | flCLOUDc_DOnOTlOADlOCAL | flCLOUDc_DOnOTlOADrEMOTE , ifcIDcLOUD_RACKSPACE , tBuilding , tUser , tPassword , tRemoteHomeRegistry ) ;
    
                ZE( boolT  , bUploadedOk ) ;
                if( POOP )
                {
                    POOPR
                    etThread.traceF( tinP , T("home registration check / cannot connect") ) ;

                    if( !bPissHired )
                    {
                        bPissHired = 1 ;
                        ether.ifcHireF( tinP , T("HOMEfLAGS") , ifcIDaDAM_PISS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; // IdeaFarm (tm) Bundle IS FREEWARE WHEN IdeaFarm (tm) ADMINISTRATIVE CLOUD IS NOT VISIBLE (E.G. IF I DIE AND MY RACKSPACE ACCOUNTS ARE CLOSED)
                    }
                }
                else
                {
                    etThread.traceF( tinP , T("home registration file: ")+tShort ) ;
                    ZE( byteT* , postHe ) ;
                    ZE( countT , costHe ) ;
                    cloud.pullFileF( tinP , postHe , costHe , tRemoteHomeRegistry , tShort , 1 ) ; ___( postHe ) ;
                    if( POOP )
                    {
                        POOPR
                        cloud.pushFileF( tinP , tRemoteHomeRegistry , tShort , postzMe , costzMe ) ; //U:: cTries = 1

                        if( !POOP ) bUploadedOk = 1 ;
                        else
                        {
                            POOPR
                            etThread.traceF( tinP , T("home registration check / could not upload / will nap for 01 tock and then retry") ) ;
                        }
                    }
                    else if( postHe && costHe )
                    {
                        if( costHe == costzMe && !thirdC::c_memcmpIF( tinP , postHe , postzMe , costHe ) )
                        {
                            bApproved = bDone = 1 ;
                            thirdC::c_strcpyIF( tinP , home.postIdHomeGlobal , tPostIdHomeGlobal ) ;
                        }
                        else
                        {
                            etThread.traceF( tinP , T("file name collision:  please stop IPDOS (tm), edit your settings file to change the value of the arbitrary.uniquifier.1 setting, and then start IPDOS (tm)") ) ;
                            bDone = 1 ;
                        }

                        LOGrAW( postHe ) ;
                    }
                    etThread.delF( tinP , postHe ) ;
                }

                if( bDone ) break ;
                else if( !bUploadedOk )
                {
                    etThread.traceF( tinP , T("home registration check / napping for 01 tock before retrying") ) ;
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ether.osSleepF( tinP , TOCK << 4 ) ;
                }
            }
        }
    }
    
    etThread.delF( tinP , psttUserEmail            ) ;
    etThread.delF( tinP , psttUserName             ) ;
    etThread.delF( tinP , psttIdComputer           ) ;
    etThread.delF( tinP , psttIdHomeDisk           ) ;
    etThread.delF( tinP , psttArbitraryUniquifier1 ) ;
}

if( bApproved )
{
    //INSPECT !paid.txt TO DISCOVER WHETHER home.postIdHomeGlobal IS LISTED
    IFsCRATCH
    {
        SCOOPS

        ZE( boolT , bSaidNotPaid ) ;
        ZE( boolT , bSaidPaid ) ;
        TN( tShort , "!paid.txt" ) ;
        TN( tb4 , "    " ) ;
        etherC& etRock = etherC::etRockIF( tinP ) ;
        while( !ether && !POOP )
        {
            ZE( boolT , bPaid ) ;

            countT idComputer = etThread.diskIdF( tinP , T("///c") ) ;
            etThread.traceF( tinP , T("[idComputer,idComputerCraftwork]:    ")+TF2(idComputer,flFORMAT_NObIGITvALUES|flFORMAT_FILLzE|flFORMAT_FOREIGN)+tb4+TF2(IDcOMPUTER_IPDOSmASTERcRAFTWORK,flFORMAT_NObIGITvALUES|flFORMAT_FILLzE|flFORMAT_FOREIGN) ) ;
            if( idComputer == IDcOMPUTER_IPDOSmASTERcRAFTWORK )
            {
                etThread.traceF( tinP , T("home privileges check / this is IDcOMPUTER_IPDOSmASTERcRAFTWORK so has paid privileges") ) ;
                bPaid = 1 ;

                ZE( flagsT , flagsOld ) ;
                ZE( flagsT , flagsNew ) ;
                do
                {
                    flagsOld = home.flags ;
                    flagsNew = flagsOld | flHOMEs_PAIDpRIVILEGES ;
                }
                while( flagsOld != setIfEqualsAM( home.flags , flagsNew , flagsOld ) ) ;

                if( !bPissHired )
                {
                    bPissHired = 1 ;
                    etThread.traceF( tinP , T("hiring PISS") ) ;
                    ether.ifcHireF( tinP , T("HOMEfLAGS") , ifcIDaDAM_PISS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; //MUST HIRE PISS EVEN IF NO PAID PRIVILEGES IN ORDER TO ALLOW USER TO UPDATE SETTINGS
                }
            }
            else
            {
                etThread.traceF( tinP , T("querying privileges") ) ;
                cloudC cloud( tinP , tName , ifcIDdOcLOUDiFdIFFER_NOTHING , flCLOUDc_NOcOPY | flCLOUDc_DOnOTlOADlOCAL | flCLOUDc_DOnOTlOADrEMOTE , ifcIDcLOUD_RACKSPACE , tBuilding , tUser , tPassword , tRemoteHomePrivileges ) ;

                if( POOP )
                {
                    POOPR
                    etThread.traceF( tinP , T("home privileges check / cannot connect") ) ;
                }
                else
                {
                    ZE( byteT* , postPaidList ) ;
                    ZE( countT , costPaidList ) ;
                    cloud.pullFileF( tinP , postPaidList , costPaidList , tRemoteHomePrivileges , tShort , 1 ) ; ___( postPaidList ) ;
                    if( POOP )
                    {
                        POOPR
                        etThread.traceF( tinP , T("home privileges check / could not download \"")+tShort+T("\" from \"")+tRemoteHomePrivileges+T("\" / will nap for 01 tock and then retry") ) ;
                    }
                    else if( postPaidList && costPaidList )
                    {
                        LOGrAW( "\r\nhome.postIdHomeGlobal:\r\n" ) ;
                        LOGrAW( home.postIdHomeGlobal ) ;
                        LOGrAW( "\r\n\r\npostPaidList:\r\n" ) ;
                        LOGrAW( postPaidList ) ;
                        LOGrAW( "\r\n\r\n" ) ;

                        if( thirdC::c_strstrIF( tinP , postPaidList , home.postIdHomeGlobal ) )
                        {
                            if( !bSaidPaid )
                            {
                                bSaidPaid    = 1 ;
                                bSaidNotPaid = 0 ;
                                etThread.traceF( tinP , T("this home has paid privileges") ) ;
                            }

                            bPaid = 1 ;

                            ZE( flagsT , flagsOld ) ;
                            ZE( flagsT , flagsNew ) ;
                            do
                            {
                                flagsOld = home.flags ;
                                flagsNew = flagsOld | flHOMEs_PAIDpRIVILEGES ;
                            }
                            while( flagsOld != setIfEqualsAM( home.flags , flagsNew , flagsOld ) ) ;

                            //TO SUPPRESS CONTINUED CHECKING, HIRE AND BREAK HERE
                            //ether.ifcHireF( tinP , T("HOMEfLAGS") , ifcIDaDAM_PISS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ;
                            //break ;
                        }
                        else
                        {
                            if( !bSaidNotPaid )
                            {
                                bSaidNotPaid = 1 ;
                                bSaidPaid    = 0 ;
                                etThread.traceF( tinP , T("this home does NOT have paid privileges") ) ;
                            }

                            ZE( flagsT , flagsOld ) ;
                            ZE( flagsT , flagsNew ) ;
                            do
                            {
                                flagsOld = home.flags ;
                                flagsNew = flagsOld & ~( F(flHOMEs_PAIDpRIVILEGES) ) ;
                            }
                            while( flagsOld != setIfEqualsAM( home.flags , flagsNew , flagsOld ) ) ;
                        }

                        if( !bPissHired )
                        {
                            bPissHired = 1 ;
                            ether.ifcHireF( tinP , T("HOMEfLAGS") , ifcIDaDAM_PISS , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; //MUST HIRE PISS EVEN IF NO PAID PRIVILEGES IN ORDER TO ALLOW USER TO UPDATE SETTINGS
                        }
                    }
                    etThread.delF( tinP , postPaidList ) ;
                }
            }

            etThread.traceF( tinP , T(bPaid?"home privileges check / napping for 01 tick before checking again":"home privileges check / napping for 01 tock before checking again") ) ;
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ether.osSleepF( tinP , bPaid ? TICK << 7 : TOCK << 4 ) ;
        }
    }
}

DONE( tmGetIdHomeF )

TASK( tmUpd8PaidHListF )

etherC& etRock = etherC::etRockIF( tinP ) ;
while( !ether && !POOP )
{
    ZE( countT , cHomes ) ;
    TN( tLike , "///ideafarm/tmp/ipdos.home.registry/*.home.txt" ) ;
    if( etThread.diskFileExistsF( tinP , tLike ) )
    {
        fileNameC fnLike( tinP , etThread , tLike ) ;
        patternC pat( tinP , etThread , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

        fileC fiPaid( tinP , (strokeS*)T("///ideafarm/tmp/ipdos.home.privileges/!paid.txt") , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;
        TN( tcr , "\r\n" ) ;
        TN( tSlash , "/" ) ;
        handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
        do
        {
            cHomes ++ ;
        
            ZE( infoFileS* , pInfo ) ;
            etThread.diskFindFileOrDirF( tinP , pInfo , hFind , fnLike.pathF() , &pat ) ; ___( pInfo ) ;
            if( pInfo && pInfo->psttIfoName && pInfo->psttIfoName[ CSpREFIX - 1 + pInfo->psttIfoName->idAdam ].idAdam != '/' )
            {
                ZE( strokeS* , psttPath ) ;
                ZE( strokeS* , psttShort ) ;
                etThread.strBisectF( tinP , psttPath , psttShort , pInfo->psttIfoName , tSlash , - 1 , flSTRbISECT_APPENDdELIMITER ) ;
                ___( psttPath ) ;
                ___( psttShort ) ;
                etThread.delF( tinP , psttPath ) ;
        
                if( !( cHomes % TUCK ) ) etThread.traceF( tinP , psttShort ) ;
        
                ZE( strokeS* , psttShorter ) ;
                countT idf = 1 ;
                countT idl = psttShort->idAdam - 9 ; // REMOVE ".home.txt"
                etThread.strSubstringF( tinP , psttShorter , idf , idl , psttShort ) ; ___( psttShorter ) ;
                etThread.delF( tinP , psttShort ) ;
        
                TN( tOut , psttShorter ) ; tOut += tcr ;
                etThread.fileWriteF( tinP , fiPaid , tOut , tOut.csF( tinP ) ) ;
                etThread.delF( tinP , psttShorter ) ;
            }
            DEL( pInfo ) ;
        }
        while( ~hFind && !ether && !POOP ) ;
    }
    
    //etThread.traceF( tinP , T("cHomes: ")+TF2(cHomes,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

    //etThread.traceF( tinP , T("napping for 01 tock") ) ;
    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ether.osSleepF( tinP , TOCK << 4 ) ;
}

DONE( tmUpd8PaidHListF )

TODO

homeS& home = homeS::homeIF() ;

etThread.osThreadF( TaRG1( tmGetIdHomeF ) ) ;

//U:: 20200920@1855: THIS SHOULD BE DONE BY factory3-5, AND IT SHOULD BE DONE IN A WAY THAT AVOIDS SPF (SINGLE POINT OF FAILURE) SO THAT IT WORKS EVEN IF ALL BUT WO FACTORY IS DOWN
if( etThread.diskIdF( tinP , T("///c") ) == IDcOMPUTER_IPDOSmASTERcRAFTWORK ) etThread.osThreadF( TaRG1( tmUpd8PaidHListF ) ) ; //U:: USE A SETTINGS FILE

etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZIEST ) ;
THREADmODE1oN( flTHREADmODE1_QUIETiMPOTENCE )

//ENABLE WO OF THESE LINES TO VERIFY THAT THE IPDOS SYSTEM SHUTS DOWN AS SOON AS THE COMPUTER IS ONLINE
//TN( tVersionMe , "2.version.ipdos.ideafarm.com" ) ;
//TN( tVersionMe , "1.version.ipdos.ideafarm.com" ) ;
//TN( tVersionMe , "20141115.1852.version.ipdos.ideafarm.com" ) ;
  TN( tVersionMe , "20141209.1044.version.ipdos.ideafarm.com" ) ; //PRODUCTION

TN( tIdeafarm  , "ideafarm.com" ) ;
TN( tRoster  , "www.ideafarm.com" ) ;
TN( tGoogle , "www.google.com" ) ;
TN( tTime , "www.time.gov" ) ;
TN( tRosterHttp  , "www.ideafarm.com//http//" ) ;
TN( tGoogleHttp , "www.google.com//http//" ) ;
TN( tTimeHttp , "www.time.gov//http//" ) ;
etherC& etRock = etherC::etRockIF( tinP ) ;
while( !etThread && !ether )
{
    //tmWatchF WILL QUIT IF IT EVER SEES THE flHOMEs_VERSIONrEFUSED FLAG

    if( bOkDnsValueF( tinP , tIdeafarm ) )
    {
        ZE( flagsT , flagsOld ) ;
        ZE( flagsT , flagsNew ) ;
        do
        {
            flagsOld = home.flags ;
            flagsNew = flagsOld | flHOMEs_ONLINE ;
        }
        while( flagsOld != setIfEqualsAM( home.flags , flagsNew , flagsOld ) ) ;
    }

    //OLD PRODUCTION: if( bOkDnsValueF( tinP , tTime ) || bOkDnsValueF( tinP , tGoogle ) ) flagsNew |= flHOMEs_ONLINE ;

    if( bDnsRefusedVersionF( tinP , tVersionMe ) )
    {
        etThread.traceF( tinP , T("error:  IPDOS (tm) on this computer is stale.  please obtain a fresh (current) copy") ) ;

        ZE( flagsT , flagsOld ) ;
        ZE( flagsT , flagsNew ) ;
        do
        {
            flagsOld = home.flags ;
            flagsNew = flagsOld | flHOMEs_VERSIONrEFUSED ;
        }
        while( flagsOld != setIfEqualsAM( home.flags , flagsNew , flagsOld ) ) ;
    }

    //ZE( strokeS* , psttRoster ) ;
    //rosterF( tinP , *tinP.zEtScratch , psttRoster ) ; ___( psttRoster ) ;
    //tinP.zEtScratch->delF( tinP , psttRoster ) ;

    //LOGrAW3( "ifcIDaDAM_HOMEfLAGS [home.flags]: " , home.flags , "\r\n" ) ;

    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        ++ s ; ether.osSleepF( tinP , TOCK * 0x10 ) ;
    }
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
//SOURCE: 5adam.5100050e.1 END
