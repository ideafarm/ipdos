//SOURCE: 5adam.5100074e.1 BEGIN
#define DDNAME "5adam.5100074e.1"
#define DDNUMB 0x5100074e
#define IDFILE (countT)0x0
#define postHEADER "5100074e.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.5100074e.1.ClINESiNdEF"

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/


/*1*/WAKEsHOWtEXT( "tool.search.directory.tree.for.plain.text.ifcIDaDAM_TOOLwALKsEARCH" )/*1*/

TODO

// INSTRUCTIONS
// USE "g m" AND THEN "g 1" AT COMMAND PROMPT TO GO TO THE HOVER DIRECTORY
// THEN EXECUTE THE LATEST EXE CONSOLE FILE AS FOLLOWS:
// 
// EXAMPLE COMMAND LINE INVOCATION:  D:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover>ideafarm.00000442.ipdos-we 51000749 !idHome 10000008 !root ///ideafarm.home.1/ !find "save space"


strokeS* psttzEarlyFolder = etThread.ether_psttEarlyFolder_F( tinP ) ;

TN( tRootCmd , "!root" ) ;
TN( tRoot , psttzEarlyFolder ) ; // WILL BE OVERRIDDEN IF !find PARAMETER IS FOUND
TN( tFindCmd , "!find" ) ;
TN( tFind , "" ) ;
TN( tIgnoreCaseCmd , "!ignoreCase" ) ;
ZE( boolT , bIgnoreCase ) ;
{
    strokeS*& pstt1Params = etThread.ether_pstt1_processParametersI_F( tinP ) ;
    ZE( boolT , bArmedRoot ) ;
    ZE( boolT , bArmedFind ) ;
    FORsTRINGSiN1( pstt1Params )
    {
        CONoUTrAW( T(psttc1) ) ;
        CONoUTrAW( "\r\n" ) ;
             if( !etThread.strCompareF( tinP , psttc1 , tRootCmd       ) ) { bArmedRoot  = 1 ; bArmedFind = 0 ; }
        else if( !etThread.strCompareF( tinP , psttc1 , tFindCmd       ) ) { bArmedFind  = 1 ; bArmedRoot = 0 ; }
        else if( !etThread.strCompareF( tinP , psttc1 , tIgnoreCaseCmd ) ) { bIgnoreCase = 1 ;                  }
        else if( bArmedRoot )
        {
            bArmedRoot = 0 ;
            tRoot = T(psttc1) ;
        }
        else if( bArmedFind )
        {
            bArmedFind = 0 ;
            tFind = T(psttc1) ;
        }
    }
}

etThread.traceF( tinP , T("ifcIDaDAM_TOOLwALKsEARCH will search folder [psttzEarlyFolder]:    ")+T(psttzEarlyFolder) ) ;

if( !tRoot.csF( tinP ) || !tFind.csF( tinP ) ) { CONoUTrAW( "doing nothing since !root and/or !find parameter values not specified" ) ; }
else
{
    IFsCRATCH
    {
        SCOOPS

        CONoUTrAW( "\r\nSearching...\r\n" ) ;
        ZE( countT , cDirs ) ;
        ZE( countT , cFiles ) ;
        if( bIgnoreCase ) tinP.pEtScratch->diskWalkSearchIgnoreCaseF( tinP , cDirs , cFiles , ether , tRoot , tFind ) ;
        else              tinP.pEtScratch->diskWalkSearchF(           tinP , cDirs , cFiles , ether , tRoot , tFind ) ;

        if( POOP )
        {
            POOPR
            CONoUTrAW( "Error: search failed.  Check the format of the parameters; they should look like this:\r\n  !root ///d/foo.bar/ !find \"goo hoo\"\r\n" ) ;
        }
        else etThread.traceF( tinP , T("ok") ) ;
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
//SOURCE: 5adam.5100074e.1 END
