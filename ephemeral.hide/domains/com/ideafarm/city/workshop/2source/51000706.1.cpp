//SOURCE: 5adam.51000706.1 BEGIN
#define DDNAME "5adam.51000706.1"
#define DDNUMB 0x51000706
#define IDFILE (countT)0x0
#define postHEADER "51000706.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000706.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_SNAPwORDS" )/*1*/

TODO

ether.ifcHireF( tinP , T("SNAPwORDS") , ifcIDaDAM_TIME , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; // flHIRE_DISPLAYaUTO CAN BE COMMENTED OUT TO AVOID WDW FOR ROOT CLOUD INSTANCE WHICH IS USUALLY NOT INTERESTING

while( !ether && !POOP )
{
    ZE( countT* , pcWords ) ;
    countT cWords = etThread.snapWordsF( tinP , pcWords ) ; ___( pcWords ) ;

    //etThread.traceF( tinP , T("snapWords trace begun [cWords]:    ")+TF2(cWords,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

    mapCTC& mapFileTitle = processGlobal3S::_processGlobal3I_IF().mapFileTitle ;

    for( countT offw = - 1 ; offw < cWords ; )
    {
        if( pcWords[ ++ offw ] )
        {
            countT idLine   = pcWords[    offw ] & 0x1fff ;  pcWords[ offw ] >>= 0xd ;
            countT idFile   = pcWords[    offw ] & 0x1fff ;  pcWords[ offw ] >>= 0xd ;
            countT idThread = pcWords[    offw ] & 0x7    ;  pcWords[ offw ] >>= 3 ;
            countT idCell   = pcWords[    offw ] & 0x7    ;
            countT ccSuffix = pcWords[ ++ offw ] ;

            const osTextT* const postTitle = !idFile ? 0 : mapFileTitle( idFile ) + sizeof( countT ) ;

            ZE( strokeS* , psttSuffix ) ;
            etThread.strMakeF( tinP , LF , psttSuffix , 0 , ccSuffix * 9 ) ; ___( psttSuffix ) ;

            TN( tb , " " ) ;
            for( countT ids = 1 ; ids <= ccSuffix ; ids ++ )
            {
                if( ids != 1 ) etThread.strFuseF( tinP , psttSuffix , tb ) ;
                etThread.strFuseF( tinP , psttSuffix , TF2(pcWords[++offw],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            }

            //etThread.traceF( tinP , T("[suffix,offw,idCell,idThread,idFile,idLine]:    ")+TF2(pcWords[offw+1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(offw,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idCell,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF4(idLine,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T("    ")+T(psttSuffix) ) ;
            etThread.delF( tinP , psttSuffix ) ;
        }
    }

    etThread.delF( tinP , pcWords ) ;
    //etThread.traceF( tinP , T("snapWords trace ended [cWords]:    ")+TF2(cWords,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TICK ) ;
}

etThread.traceF( tinP , T("ok") ) ;
etherC::loafIF( tinP ) ;

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
//SOURCE: 5adam.51000706.1 END
