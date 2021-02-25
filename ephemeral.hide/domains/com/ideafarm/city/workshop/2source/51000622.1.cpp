//SOURCE: 5adam.51000622.1 BEGIN
#define DDNAME "5adam.51000622.1"
#define DDNUMB 0x51000622
#define IDFILE (countT)0x0
#define postHEADER "51000622.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000622.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEsHOW( "ifcIDaDAM_ELF" )/*1*/

boolT toolCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP )
{
    ZE( boolT , bDoIt ) ;
    if( !POOP )
    {
        const osTextT* postName = postNameP + 1 ;

        osTextT* ppostDW[] =                            // "DW": "DirWanted"
        {
            /*.0.*/ ":\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\"                                        ,
            /*.1.*/ ":\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\"                                                  ,
            /*.2.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\"                                             ,
            /*.3.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\documents\\ideafarm.city.constitution\\"                  ,
            /*.4.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\"                                                   ,
            /*.5.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip\\"                                               ,
            /*.6.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\dll\\"                                          ,
            /*.7.*/ ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\microsoft\\"

        } ;

        boolT bDir = postName[ thirdC::c_strlenIF( tinP , postName ) - 1 ] == '\\' ;

        if( bDir )
        {
            for( countT offi = 0 ; offi < sizeof ppostDW / sizeof ppostDW[ 0 ] ; offi ++ )
            {
                if( ppostDW[ offi ] == thirdC::c_strstrIF( tinP , ppostDW[ offi ] , postName ) )
                {
                    bDoIt = 1 ;
                    break ;
                }
            }

        }
        else if
        (
            !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\readme.pdf"                    )
        )
        {
            bDoIt = 1 ;
        }
        else if
        (
            !thirdC::c_strstrIF( tinP , postNameP , ".ClINESiNdEF" )
        )
        {
            for( countT offi = 0 ; offi < sizeof ppostDW / sizeof ppostDW[ 0 ] ; offi ++ )
            {
                if( postName == thirdC::c_strstrIF( tinP , postName , ppostDW[ offi ] ) )
                {
                    switch( offi )
                    {
                        case 2 :
                        {
                            if( postName == thirdC::c_strstrIF( tinP , postName , ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam.51001" ) ) bDoIt = 1 ;

                            break ;
                        }
                        case 4 :
                        {
                            if
                            (
                                   !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\ipdos.h"                          )
                                || !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\1snip.0050010.gen_CsOURCEfILES.h" )
                            )
                            bDoIt = 1 ;

                            break ;
                        }
                        case 5 :
                        {
                            if
                            (
                                !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip\\zip.exe\\zip.exe" )
                            )
                            bDoIt = 1 ;

                            break ;
                        }
                        case 7 :
                        {
                            if( !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\microsoft\\Msi.Lib" ) ) bDoIt = 1 ;

                            break ;
                        }
                        default :
                        {
                            bDoIt = 1 ;

                            break ;
                        }
                    }

                    break ;
                }
            }
        }
    }

    //CONoUTrAW( bDoIt ? "ACCEPTED " : "rejected " ) ;
    //CONoUTrAW( postNameP ) ;
    //CONoUTrAW( "\r\n" ) ;

    return bDoIt ;
}

boolT preciousCBF( tinS& tinP , countT& cDirsP , countT& cFilesP , const boolT& bQuitP , const osTextT* const postNameP , countT* const pcArgP )
{
    const osTextT* postName = postNameP + 1 ;

    boolT  bDoIt =

        postName == thirdC::c_strstrIF( tinP , postName , ":\\ideafarm.home.1\\precious" )
        ||
        !thirdC::c_strcmpIF( tinP , postName , ":\\ideafarm.home.1\\readme.pdf" )

        //REDUNDANT SINCE release IS NOT IN precious
        //&&
        //!thirdC::c_strstrIF( tinP , postNameP , "\\workshop\\release" )

    ;

    //if( bDoIt ) { LOGrAW( T("preciousCBF [postName]: \"")+T(postName)+T("\"\r\n") ) ; }

    static osTextT post2[] = "a" ;
    CONoUTrAW( post2 ) ;
    if( ++ *post2 > 'z' ) *post2 = 'a' ;

    return bDoIt ;
}

TODO

ZE( countT , cErrors ) ;
TN( tcr , "\r\n" ) ;
TN( tcri2 , "\r\n  " ) ;
TN( tCmdMake , "!make" ) ;
TN( tCmdPrecious , "!precious" ) ;
TN( tCmdTool     , "!tool" ) ;
ZE( boolT , bArmMake ) ;
countT cSkip = 1 ;
strokeS sttExclaim('!') ;
FORsTRINGSiN1( etThread.ether_pstt1_processParametersI_F( tinP ) )
{
    //CONoUTrAW( T("parameter: \"")+T(psttc1)+T("\"\r\n") ) ;

    if( cSkip && cSkip -- ) continue ;
    if( !psttc1->idAdam ) break ;
                
    if( bArmMake )
    {
        bArmMake = 0 ;
        countT idAdam = etThread.strDigitsToSCountF( tinP , psttc1 ) | 0x51000000 ;

        CONoUTrAW3( "[idAdam]: " , idAdam , "\r\n" ) ;

        stackC stErrors( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , ifcSTACKtYPE_PTR_soulC ) ;
        etThread.osMakeF( tinP , stErrors , idAdam , flMAKE_DEBUG | flMAKE_ENABLEtHIRDpARTIES ) ; //U::ELIMINATE flMAKE_ENABLEtHIRDpARTIES

        while( stErrors )
        {
            cErrors ++ ;

            ZE( soulC* , ps ) ;
            stErrors >> ps ; ___( ps ) ;
        
            ZE( countT , idLine ) ;    
            *ps >> idLine ;
        
            ZE( countT , idCol ) ;    
            *ps >> idCol ;
        
            ZE( strokeS* , psttLine ) ;
            *ps >> psttLine ; ___( psttLine ) ;
        
            ZE( strokeS* , psttNote ) ;
            *ps >> psttNote ; ___( psttNote ) ;
            etThread.strokeF( tinP , TF2(idLine,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF2(idCol,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("): ")+T(psttLine)+tcri2+T(psttNote)+tcr ) ;
        
            etThread.delF( tinP , psttLine ) ;
            etThread.delF( tinP , psttNote ) ;
        
            DEL( ps ) ;
        }
    }
    else if( !etThread.strCompareF( tinP , psttc1 , tCmdMake ) ) bArmMake = 1 ;
    else if
    (
        !etThread.strCompareF( tinP , psttc1 , tCmdPrecious )
        ||
        !etThread.strCompareF( tinP , psttc1 , tCmdTool )
    )
    {
        const boolT bPrecious = !etThread.strCompareF( tinP , psttc1 , tCmdPrecious ) ;

        TN( tRelease , "///d/tmp/ps/" ) ; // SHORT AS POSSIBLE.  THIS INCREMENT TO THE LENGTH OF THE FILE NAME CAN CAUSE A FILE COPY TO SILENTLY FAIL
        TN( tFrom    , "///d/ideafarm.home.1/" ) ;

        TN( tTo      , "ideafarm.home.1" ) ;
        strokeS sSlash( '/' ) ;
        TN( tBigTo , "" ) ; tBigTo = tRelease+tTo+sSlash ;

        IFbEcAREFUL
        {
            SCOOPS
            tinP.pEtScratch->traceF( tinP , T("zapping ")+tBigTo ) ;
            tinP.pEtScratch->diskFileOrDirDeleteF( tinP , tBigTo  , flFILEoRdIRdELETE_RECURSE , 1 ) ;
            tinP.pEtScratch->traceF( tinP , T("zapped  ")+tBigTo ) ;
            if( POOP ) POOPR ;

            {
                TN( tElves , "///d/ideafarm.home.1/precious/domains/com/ideafarm/city/workshop/elves/" ) ;

                ZE( countT , cDirs ) ;
                ZE( countT , cFiles ) ;
                etThread.diskWalkCopyF( tinP , cDirs , cFiles , ether , tBigTo , tFrom , bPrecious ? preciousCBF : toolCBF ) ;
            }

            {
                hoverC hoverRelease( tinP , etThread , tRelease ) ;

                textC tTime( ifcIDtEXTgEN_TIMEnOWfOREIGN , tinP , TAG( TAGiDnULL ) ) ;

                TN( tZip , "" ) ; tZip = T("20990009@0001.")+tTime+T(".ideafarm.!confidential.")+T(bPrecious?"precious":"elves")+T(".zip") ;

                tinP.pEtScratch->diskFileOrDirDeleteF( tinP , tZip , flFILEoRdIRdELETE_null , 1 ) ;
                if( POOP ) POOPR ;

                etThread.diskZipF( tinP , tZip , tTo , flZIP_DELETE ) ;
            }
        }
    }
}

if( cErrors )
{
    ether.strokeF( tinP , T("Errors occured, so I am loafing.") ) ;
    etherC::loafIF( tinP ) ;
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
//SOURCE: 5adam.51000622.1 END
