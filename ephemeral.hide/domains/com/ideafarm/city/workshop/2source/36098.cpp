//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third BEGIN
#define DDNAME       "1snip.1a000002.includegenmake.base.hide.third"
#define DDNUMB      (countT)0x1a000002
#define IDFILE      (countT)0x86a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005f002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*this includes the base hide flavor of ipdos.h*//*1*/
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.2.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36098* : 3func.36098001.eyeoldc.operator_shiftright BEGIN
#define DDNAME       "3func.36098001.eyeoldc.operator_shiftright"
#define DDNUMB      (countT)0x36098001
#define IDFILE      (countT)0x12f6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT eyeOldC::operator>>( vTextC& vtP )/*1*/
{
    TINSL
    ZE( strokeS* , psttSpec ) ;
    TN( tn , "" ) ;
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    const countT cFlavors = sw_psttObject.cFlavorsF( tinP ) ;
    {
        ZE( countT , csttObjects ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            idObject = sw_psttObject.leverF( tinP , idf ) ;
            csttObjects += ( *(strokeS**)&(countT&)sw_psttObject )->idAdam ;
        }
        tinP.pEther->strMakeF( tinP , LF , psttSpec , tn+S3(1.0,scOld_mmFRAMEtO,1.0)+S2(0,scOld_FRAMEdETACH) , 2 + csttObjects ) ; ___( psttSpec ) ;
    }

    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        idObject = sw_psttObject.leverF( tinP , idf ) ;
        tinP.pEther->strFuseF( tinP , psttSpec , *(strokeS**)&(countT&)sw_psttObject ) ;
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    tinP.pEther->strFuseF( tinP , psttSpec , tn+S2(0,scOld_POPfRAMEdETACH)+S2(0,scOld_POPfRAME) ) ;

    vtP.setF( tinP , psttSpec ) ; //U: CONJ: THIS CODE IS IN DEVELOPMENT; IT DOES NOT YET APPLY THE EYE TRANSFORM

    {
        ZE( strokeS* , psttd ) ;
        etherC::strDumpStrokesIF( tinP , psttd , psttSpec ) ; ___( psttd ) ;
    
        if( psttd->idAdam > TUCK )
        {
            strokeS* psttDoomed = psttd ; psttd = 0 ;
            countT idf = 1 ;
            countT idl = TUCK ;
            ether.strSubstringF( tinP , psttd , idf , idl , psttDoomed ) ; ___( psttd ) ;
            ether.delF( tinP , psttDoomed ) ;
        }
    
        LOGrAWtID( T(psttd) ) ;
        ether.delF( tinP , psttd ) ;
    }

    tinP.pEther->delF( tinP , psttSpec ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36098* : 3func.36098001.eyeoldc.operator_shiftright END
