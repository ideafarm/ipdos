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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a002.pricerc.dt_pricerc BEGIN
#define DDNAME       "3func.3602a002.pricerc.dt_pricerc"
#define DDNUMB      (countT)0x3602a002
#define IDFILE      (countT)0x108a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1360002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/pricerC::~pricerC( voidT )/*1*/
{
    TINSL
    SCOOP
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    countT cFlavors = sw_psttDll.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        pcPart = (countT*)sw_psttDll.leverF( tinP , idf ) ;
        strokeS* psttw = (strokeS*)(countT)sw_psttDll ;
        ether.delF( tinP , psttw ) ;
    }

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a002.pricerc.dt_pricerc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a003.pricerc.pricerc BEGIN
#define DDNAME       "3func.3602a003.pricerc.pricerc"
#define DDNUMB      (countT)0x3602a003
#define IDFILE      (countT)0x108b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1360003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/pricerC::pricerC( tinS& tinP , etherC& etherP )/*1*/ :
ether( etherP ) ,
poop( etherP ) ,
pcPart( 0 ) ,
sw_psttDll( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , pcPart ) ,
baton( tinP , TAG( TAGiDnULL ) )
{
    SCOOP
    IFsCRATCH
    {
        hoverC hover( tinP , ether , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/7use/") ) ;
    
        soulC soul1m( tinP , TAG( TAGiDnULL ) ) ;
        countT cFiles = ether.boxMenuF( tinP , soul1m , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/7use/401?????.ipdos-wd") ) ; //U::EDITED WITHOUT ANALYSIS WHEN "1234567w.dll" -> "12345678.ipdos-wm"
        FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
        {
            handleC hDll( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DLL ) ;
            SCOOPS
            tinP.pEtScratch->dllOpenF( tinP , hDll , psttc1 ) ;
    
              ZE( partsFT , pPartsF ) ; tinP.pEtScratch->dllEntryF( tinP , (voidT*&)pPartsF , hDll , T("_partsF@12") ) ;
            { ZE( priceFT , pPriceF ) ; tinP.pEtScratch->dllEntryF( tinP , (voidT*&)pPriceF , hDll , T("_priceF@16") ) ; }
            { ZE( shareFT , pShareF ) ; tinP.pEtScratch->dllEntryF( tinP , (voidT*&)pShareF , hDll , T("_shareF@16") ) ; }
    
            if( POOP ) POOPR
            else
            {
                stackC stPart( tinP , ether , TAG( TAGiDnULL ) ) ;
                if( pPartsF )
                {
                    (*pPartsF)( tinP , *tinP.pEtScratch , stPart ) ;
                    if( POOP ) POOPR
                }
    
                while( stPart )
                {
                    ZE( strokeS* , psttDll ) ;
                    ether.strMakeF( tinP , LF , psttDll , psttc1 ) ; ___( psttDll ) ;
    
                    ZE( countT , cPart ) ;
                    stPart >> cPart ;
                    pcPart = (const countT*)cPart ;
                    if( !(countT)sw_psttDll ) sw_psttDll = (countT)psttDll ;
                    else ether.etherPutLogF( tinP , T("\"")+T(psttc1)+T("\" prices part ")+TF1(pcPart)+T(", which is already priced by adam class \"")+T((strokeS*)(countT)sw_psttDll)+T("\"") ) ;
                }
            }
        }
        FORsTRINGSiNsPANNEDcOMBINEDtAIL1
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a003.pricerc.pricerc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a004.pricerc.pricef BEGIN
#define DDNAME       "3func.3602a004.pricerc.pricef"
#define DDNUMB      (countT)0x3602a004
#define IDFILE      (countT)0x108c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$priceF.0.html\"\>instances\</A\>
\<A HREF=\"5.1360004.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/measureT pricerC::priceF( tinS& tinP , const countT* const pcPartP , const countT qtyP )/*1*/
{
    SCOOP
    hoverC hover( tinP , ether , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/7use/") ) ;
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    pcPart = (countT*)pcPartP ;
    strokeS* psttDll = (strokeS*)(countT)sw_psttDll ;
    baton.ungrabF( tinP ) ;

    ZE( measureT , mPrice ) ;
    if( psttDll )
    {
        handleC hDll( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DLL ) ;
        ether.dllOpenF( tinP , hDll , psttDll ) ;
        ZE( priceFT , pPriceF ) ;
        ether.dllEntryF( tinP , (voidT*&)pPriceF , hDll , T("_priceF@16") ) ;
        if( pPriceF ) mPrice = (*pPriceF)( tinP , ether , pcPartP , qtyP ) ;
    }

    return mPrice ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a004.pricerc.pricef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a005.pricerc.sharef BEGIN
#define DDNAME       "3func.3602a005.pricerc.sharef"
#define DDNUMB      (countT)0x3602a005
#define IDFILE      (countT)0x108d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$shareF.0.html\"\>instances\</A\>
\<A HREF=\"5.1360005.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT pricerC::shareF( tinS& tinP , stackC& stShareP , const countT* const pcPartP )/*1*/
{
    SCOOP
    hoverC hover( tinP , ether , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/7use/") ) ;
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    pcPart = (countT*)pcPartP ;
    strokeS* psttDll = (strokeS*)(countT)sw_psttDll ;
    baton.ungrabF( tinP ) ;

    if( psttDll )
    {
        handleC hDll( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DLL ) ;
        ether.dllOpenF( tinP , hDll , psttDll ) ;
        ZE( shareFT , pShareF ) ;
        ether.dllEntryF( tinP , (voidT*&)pShareF , hDll , T("_shareF@16") ) ;
        if( pShareF ) (*pShareF)( tinP , ether , stShareP , pcPartP ) ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602a* : 3func.3602a005.pricerc.sharef END
