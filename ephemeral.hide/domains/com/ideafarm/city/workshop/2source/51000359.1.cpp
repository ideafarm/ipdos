//SOURCE: 5adam.51000359.1 BEGIN
#define DDNAME "5adam.51000359.1"
#define DDNUMB 0x51000359
#define IDFILE (countT)0x0
#define postHEADER "51000359.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000359.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.b530104.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/WAKEsHOWtEXT( "ifcIDaDAM_PATCHaLLmASTERS.city.center.update.idCopy.in.all.master.files" )/*1*/

TODO

CONoUTrAW("AT WORK\r\n") ;
ZE( countT , cNameInspect ) ;
{
    strokeS*& pstt1p = etThread.ether_pstt1_processParametersI_F( tinP ) ;
    ZE( countT , idp )
    FORsTRINGSiN1( pstt1p )
    {
        if( ++ idp == 3 )
        {
            cNameInspect = etThread.strDigitsToSCountF( tinP , psttc1 ) ;
            etThread.strokeF( tinP , T("parm: \"")+T(psttc1)+T("\" value: ")+T(cNameInspect)+T("\r\n") ) ;
            break ;
        }
    }
}

{
    batonC batUpdate( tinP , TAG( TAGiDnULL ) , T("ifc.update") ) ;
    batUpdate.grabF( tinP , TAG( TAGiDnULL ) ) ;
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    masterOldC master( tinP , etThread , TAG( TAGiDnULL ) , cNameInspect ) ;
    {
        batonC b_cLever_swIdCopy( tinP , TAG( TAGiDnULL ) ) ;
        ZE( countT , cLever_swIdCopy ) ;
        switchC swIdCopy( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , cLever_swIdCopy ) ;
        master.idCopyF( tinP , swIdCopy , cLever_swIdCopy , b_cLever_swIdCopy ) ;

        countT cFlavors = swIdCopy.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever_swIdCopy = swIdCopy.leverF( tinP , idf ) ;
            countT idCopy = swIdCopy ;
            if( !idCopy ) master.obsoleteF( tinP , cLever_swIdCopy ) ;
        }
    }

    master.renumberObsoleteNamesF( tinP ) ;
    stackC stObsolete( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ;
    master.listObsoleteNamesF( tinP , stObsolete ) ;
    master.resetFlagObsoleteF( tinP ) ;

    thirdC& thThread = etThread ;
    while( stObsolete )
    {
        ZE( countT , cNameo ) ;
        stObsolete >> cNameo ;

        ZE( strokeS* , psttf ) ;
        etThread.strMakeF( tinP , LF , psttf , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/master/ideafarm.")+TF3(cNameo,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)+T(".ipdos-wm") ) ; ___( psttf ) ;

        ZE( byteT* , pbIm ) ;
        ZE( countT , cbIm ) ;
        etThread.boxGetShadowF( tinP , pbIm , cbIm , psttf ) ; ___( pbIm ) ;

        ZE( imageExeDllC* , pInfo ) ;
        thThread.imageExeDllF( tinP , pInfo , pbIm ) ; ___( pInfo ) ;
        if( !pInfo || !pInfo->postDescription )
        {
            etThread.strokeF( tinP , T("i could not obtain a description\r\n") ) ;
            etThread.delF( tinP , pbIm ) ;
            DEL( pInfo ) ;
            __1
        }
        else
        {
            osTextT postTag[] = " @idCopy " ; postTag[ 1 ] = '!' ;

            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            countT ido = etThread.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T(postTag) , T(pInfo->postDescription) ) ;
            if( !ido )
            {
                etThread.strokeF( tinP , T("i could not find the idCopy tag in the description\r\n") ) ;
                etThread.delF( tinP , pbIm ) ;
                DEL( pInfo ) ;
            }
            else
            {
                ido += 9 ; // ID OF TOKEN THAT FOLLOWS " !idCopy "

                countT idCopy = master.idCopyF( tinP , cNameo ) ;
                ZE( byteT* , pbIdCopy ) ;
                etThread.strMakeF( tinP , LF , pbIdCopy , TF3(idCopy,flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ; ___( pbIdCopy ) ;
                etThread.memCopyF( tinP , pInfo->postDescription - 1 + ido , pbIdCopy , 8 ) ;
                DEL( pInfo ) ;
                etThread.delF( tinP , pbIdCopy ) ;
                etThread.boxPutF( tinP , psttf , pbIm , cbIm ) ;
                etThread.delF( tinP , pbIm ) ;
                etThread.strokeF( tinP , TF3(idCopy,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+TF3(cNameo,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T("\r\n") ) ;
                etThread.osMakeHoverFileF( tinP , cNameo ) ;

                if( cNameo == 0x01000020 )
                {
                    //etThread.strokeF( tinP , T("just made the hidee executable\r\n") ) ;

                    TN( tFile , "///d/ideafarm.work/backed.up.never/gen/cmd/hidee0.bat" ) ;
                    TN( tBody , "@echo off\r\nset hideeid=" ) ; tBody += TF3(idCopy,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)+T("\r\n") ;

                    etThread.boxPutF( tinP , tFile , tBody , tBody.csF( tinP ) ) ;
                }
                else if( cNameo == 0x01000030 )
                {
                    //etThread.strokeF( tinP , T("just made the showe executable\r\n") ) ;

                    TN( tFile , "///d/ideafarm.work/backed.up.never/gen/cmd/showe0.bat" ) ;
                    TN( tBody , "@echo off\r\nset showeid=" ) ; tBody += TF3(idCopy,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8)+T("\r\n") ;

                    etThread.boxPutF( tinP , tFile , tBody , tBody.csF( tinP ) ) ;
                }
            }
        }

        etThread.delF( tinP , psttf ) ;
    }
    THREADmODE1rESTORE
    batUpdate.ungrabF( tinP ) ;
}

etThread.strokeF( tinP , T("done\r\n") ) ;

REST

//VISIBLE


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
//SOURCE: 5adam.51000359.1 END
