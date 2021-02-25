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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063001.treeoldc.dt_treeoldc BEGIN
#define DDNAME       "3func.36063001.treeoldc.dt_treeoldc"
#define DDNUMB      (countT)0x36063001
#define IDFILE      (countT)0x11dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/treeOldC::~treeOldC( voidT )/*1*/
{
    TINSL
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    PcURSOR
    pCursor = pRoot ;
    delF( tinP ) ;
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063001.treeoldc.dt_treeoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063002.treeoldc.treeoldc BEGIN
#define DDNAME       "3func.36063002.treeoldc.treeoldc"
#define DDNUMB      (countT)0x36063002
#define IDFILE      (countT)0x11dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/treeOldC::treeOldC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , countT& cLeverCursorP , treeOldCBFT pBranchDefinitionCBFP , const countT cbDataP , flagsT flagsSwitchP , flagsT flagsStackP ) :/*1*/
ether( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ,
grab( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) /*U::CANNOT HAVE THIS BECAUSE upF IS RECURSIVE.  WHY DID I THINK THAT I NEED TO DISABLE RECURSION??? , flGRABc_DISABLErECURSION */ ) ,
pBranchDefinitionCBF( pBranchDefinitionCBFP ) ,
cbd( cbDataP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pRoot( 0 ) ,
cLeverCursor( cLeverCursorP ) ,
sw_pCursor( tinP , ether , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitch , cLeverCursorP , &cLeverCursorP ) ,
cLeverWifeShared( 0 ) ,
psttLeverKidsShared( 0 ) ,
cNU( 0 )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063002.treeoldc.treeoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063003.treeoldc.newkidf BEGIN
#define DDNAME       "3func.36063003.treeoldc.newkidf"
#define DDNUMB      (countT)0x36063003
#define IDFILE      (countT)0x11de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::newKidF( tinS& tinP , const strokeS* const psttP , soulC* pSoulP , const boolT bLeftP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;

    PcURSOR
    if( !pCursor )
    {
        ether.newF( tinP , LF , *(byteT**)&pRoot , sizeof( branchHeaderOldS ) + cbd ) ; ___( pRoot ) ;
        if( pRoot )
        {
            PcURSOR
            new( 0 , tinP , (byteT*)pRoot , sizeof( branchHeaderOldS ) ) branchHeaderOldS( 0 ) ;

            TN( tRoot , "" ) ; tRoot = T(psttP) ;
    
            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_TREEwALK ) ;
            handle.osF( ifcIDtYPEhANDLE_TREEwALK , (countT)pRoot ) ;

            countT cArg = (countT)(strokeS*)tRoot ;
            (*pBranchDefinitionCBF)( tinP , ether , ifcIDtYPEtREEbRANCHdEFINITIONoLDcb_NEW , flTREEwALK_null , handle , (byteT*)( pRoot + 1 ) , cbd , cArg ) ;
    
            if( pSoulP )
            {
                ZE( flagsT , flagsTreeWrite ) ;
                *pSoulP >> flagsTreeWrite ;

                if( F(flagsTreeWrite) & flTREEwRITE_cLeverWife )
                {
                    *pSoulP >> pRoot->cLeverWife ;
                }

                if( F(flagsTreeWrite) & flTREEwRITE_pSw_psttWife )
                {
                    const countT save = pRoot->cLeverWife ;

                    ether( tinP , pRoot->pSw_psttWife , TAG( TAGiDnULL ) , flagsSwitch , cLeverWifeShared , sw_pCursor.pLeverLathRefF( tinP ) ) ;
                    if( pRoot->pSw_psttWife )
                    {
                        ZE( countT , cFlavors ) ;
                        *pSoulP >> cFlavors ;

                        while( cFlavors -- )
                        {
                            pRoot->cLeverWife = 0 ;
                            *pSoulP >> pRoot->cLeverWife ;
                            cLeverWifeShared = pRoot->cLeverWife ;
                            *pSoulP >> *(strokeS**)&(countT&)*pRoot->pSw_psttWife ;
                        }
                    }

                    pRoot->cLeverWife = save ;
                }

                if( F(flagsTreeWrite) & flTREEwRITE_psttLeverKids )
                {
                    *pSoulP >> pRoot->psttLeverKids ; //U::ELIMINATE THIS
                    ether.delF( tinP , pRoot->psttLeverKids ) ;
                }
            }
        }
    }
    else
    {
        branchHeaderOldS& hdr = *pCursor ;
        if( !hdr.pSw_psttWife        ) { ether( tinP , hdr.pSw_psttWife        , TAG( TAGiDnULL ) , flagsSwitch , cLeverWifeShared    , sw_pCursor.pLeverLathRefF( tinP ) ) ; }
        if( !hdr.pSw_idKidLathHugged ) { ether( tinP , hdr.pSw_idKidLathHugged , TAG( TAGiDnULL ) , flagsSwitch , psttLeverKidsShared , sw_pCursor.pLeverLathRefF( tinP ) ) ; }
        if( !hdr.pSwsKids            ) { ether( tinP , hdr.pSwsKids            , TAG( TAGiDnULL ) , flagsSwitch , psttLeverKidsShared , flagsStack | flSTACKc_BLOB , sizeof( branchHeaderOldS ) + cbd , sw_pCursor.pLeverLathRefF( tinP ) ) ; }

        if( hdr.pSwsKids && hdr.pSw_psttWife && hdr.pSw_idKidLathHugged )
        {
            ZE( branchHeaderOldS* , pKid ) ;
            ether.newF( tinP , LF , *(byteT**)&pKid , sizeof( branchHeaderOldS ) + cbd ) ; ___( pKid ) ;
            if( pKid )
            {
                new( 0 , tinP , (byteT*)pKid , sizeof( branchHeaderOldS ) ) branchHeaderOldS( &hdr ) ;
                countT cArg = (countT)psttP ;

                handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_TREEwALK ) ;
                handle.osF( ifcIDtYPEhANDLE_TREEwALK , (countT)pKid ) ;

                (*pBranchDefinitionCBF)( tinP , ether , ifcIDtYPEtREEbRANCHdEFINITIONoLDcb_NEW , flTREEwALK_null , handle , (byteT*)( pKid + 1 ) , cbd , cArg ) ;
    
                if( pSoulP )
                {
                    ZE( flagsT , flagsTreeWrite ) ;
                    *pSoulP >> flagsTreeWrite ;
        
                    if( F(flagsTreeWrite) & flTREEwRITE_cLeverWife )
                    {
                        *pSoulP >> pKid->cLeverWife ;
                    }
        
                    if( F(flagsTreeWrite) & flTREEwRITE_pSw_psttWife )
                    {
                        const countT save = pKid->cLeverWife ;
        
                        ether( tinP , pKid->pSw_psttWife , TAG( TAGiDnULL ) , flagsSwitch , cLeverWifeShared , sw_pCursor.pLeverLathRefF( tinP ) ) ;
                        if( pKid->pSw_psttWife )
                        {
                            ZE( countT , cFlavors ) ;
                            *pSoulP >> cFlavors ;
        
                            while( cFlavors -- )
                            {
                                pKid->cLeverWife = 0 ;
                                *pSoulP >> pKid->cLeverWife ;
                                cLeverWifeShared = pKid->cLeverWife ;
                                *pSoulP >> *(strokeS**)&(countT&)*pKid->pSw_psttWife ;
                            }
                        }
        
                        pKid->cLeverWife = save ;
                    }

                    if( F(flagsTreeWrite) & flTREEwRITE_psttLeverKids )
                    {
                        *pSoulP >> pKid->psttLeverKids ; //U::ELIMINATE THIS
                        ether.delF( tinP , pKid->psttLeverKids ) ;
                    }
                }
            }
            SET_psttLeverKids( pCursor )
            if( !pCursor->psttLeverKids ) wifeF( tinP ) ;
            psttLeverKidsShared = pCursor->psttLeverKids ;
            hdr.pSwsKids->insertF( tinP , (countT)pKid , ifcSTACKtYPE_BLOB , 0 , bLeftP ) ;
            ether.delF( tinP , *(byteT**)&pKid ) ;
        }
    }

    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063003.treeoldc.newkidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063004.treeoldc.wifef BEGIN
#define DDNAME       "3func.36063004.treeoldc.wifef"
#define DDNUMB      (countT)0x36063004
#define IDFILE      (countT)0x11df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to call me before creating the root branch
arguments
 tinP
 psttP
  can be 0
  if 0 then i select the lath wife that i referenced at the current branch
   if i have never referenced a wife on this branch then i set a wife named ""
*/
/**/

/*1*/voidT treeOldC::wifeF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    PcURSOR
    if( pCursor )
    {
        if( !pCursor->pSw_psttWife ) ether( tinP , pCursor->pSw_psttWife , TAG( TAGiDnULL ) , flagsSwitch , cLeverWifeShared , sw_pCursor.pLeverLathRefF( tinP ) ) ;
        pCursor->cLeverWife = cLeverWifeShared = *sw_pCursor.pLeverLathRefF( tinP ) ;
        strokeS*& psttWife = *(strokeS**)&(countT&)*pCursor->pSw_psttWife ;
        if( psttWife )
        {
            if
            (
                ( psttWife->idAdam && !psttP )
                ||
                ether.strCompareF( tinP , psttWife , psttP )
            )
            ether.delF( tinP , psttWife ) ;
        }

        if( !psttWife ) { psttWife = psttOldC( tinP , ether , psttP ) ; ___( psttWife ) ; }
        pCursor->psttLeverKids = psttWife ;
    }
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063004.treeoldc.wifef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063005.treeoldc.operator_countt_ref BEGIN
#define DDNAME       "3func.36063005.treeoldc.operator_countt_ref"
#define DDNUMB      (countT)0x36063005
#define IDFILE      (countT)0x11e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to call me before creating the root branch
*/
/**/

/*1*/treeOldC::operator countT&( voidT )/*1*/
{
    TINSL
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    countT* pcRef = &cNU ;
    PcURSOR
    if( pCursor ) pcRef = (countT*)( pCursor + 1 ) ;
    grab.ungrabF( tinP ) ;

    return *pcRef ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063005.treeoldc.operator_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063006.treeoldc.nearbyf BEGIN
#define DDNAME       "3func.36063006.treeoldc.nearbyf"
#define DDNUMB      (countT)0x36063006
#define IDFILE      (countT)0x11e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::nearbyF( tinS& tinP , branchesOldS& branchesP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;

    if( !branchesP.pTree )
    {
        branchesP.pTree = this ;
    
        PcURSOR
        if( pCursor )
        {
            if( pCursor->pSwsKids )
            {
                SET_psttLeverKids( pCursor )
    
                //----GKIDS---------------------------------------------------------------------------
                {
                    ZE( countT** , ppcDown0 ) ;
                    ZE( countT** , ppcUp0 ) ;
                    countT   cDnKids0 = - 1 ; //U::USE THE FIELDS IN branchesP
                    countT   cUpKids0 = - 1 ;
                    pCursor->pSwsKids->grabListF( tinP , ppcDown0 , ppcUp0 , cDnKids0 , cUpKids0 ) ;
    
                    if( ppcDown0 )
                    {
                        branchHeaderOldS* pKid = (branchHeaderOldS*)ppcDown0[ 0 ] ;
                        if( pKid->pSwsKids )
                        {
                            SET_psttLeverKids( pKid )
        
                            ZE( countT** , ppcDown ) ;
                            ZE( countT** , ppcUp ) ;
                            pKid->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnGKids , *(countT*)&branchesP.cUpGKids ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnGKids , 1 + branchesP.cDnGKids ) ; ___( branchesP.ppsttzDnGKids ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpGKids , 1 + branchesP.cUpGKids ) ; ___( branchesP.ppsttzUpGKids ) ;
                    
                            if( ppcDown )
                            {
                                {for( countT off = 0 ; off <= branchesP.cDnGKids ; off ++ )
                                {
                                    branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcDown[ off ] + 1 ) ;
                                    *(const strokeS**)&branchesP.ppsttzDnGKids[ off ] = data.psttb ;
                                }}
                    
                                for( countT off = 0 ; off <= branchesP.cUpGKids ; off ++ )
                                {
                                    branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcUp[ off ] + 1 ) ;
                                    *(const strokeS**)&branchesP.ppsttzUpGKids[ off ] = data.psttb ;
                                }
                            }

                            pKid->pSwsKids->ungrabF( tinP ) ;
                            ether.delF( tinP , *(countT**)&ppcDown ) ;
                            ether.delF( tinP , *(countT**)&ppcUp ) ;
                        }
                    }
        
                    pCursor->pSwsKids->ungrabF( tinP ) ;
                    ether.delF( tinP , *(countT**)&ppcDown0 ) ;
                    ether.delF( tinP , *(countT**)&ppcUp0 ) ;
                }
    
                SET_psttLeverKids( pCursor )
    
                //----KIDS---------------------------------------------------------------------------
                {
                    ZE( countT** , ppcDown ) ;
                    ZE( countT** , ppcUp ) ;
                    pCursor->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnKids , *(countT*)&branchesP.cUpKids ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnKids , 1 + branchesP.cDnKids ) ; ___( branchesP.ppsttzDnKids ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpKids , 1 + branchesP.cUpKids ) ; ___( branchesP.ppsttzUpKids ) ;
            
                    if( ppcDown )
                    {
                        {for( countT off = 0 ; off <= branchesP.cDnKids ; off ++ )
                        {
                            branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcDown[ off ] + 1     ) ;
                            *(const strokeS**)&branchesP.ppsttzDnKids[ off ] = data.psttb ;
                        }}
            
                        for( countT off = 0 ; off <= branchesP.cUpKids ; off ++ )
                        {
                            branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcUp[ off ] + 1     ) ;
                            *(const strokeS**)&branchesP.ppsttzUpKids[ off ] = data.psttb ;
                        }
                    }
        
                    pCursor->pSwsKids->ungrabF( tinP ) ;
                    ether.delF( tinP , *(countT**)&ppcDown ) ;
                    ether.delF( tinP , *(countT**)&ppcUp ) ;
                }
    
                //----WIVES---------------------------------------------------------------------------
                {
                    ZE( countT** , ppcDown ) ;
                    ZE( countT** , ppcUp ) ;
                    pCursor->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnWives , *(countT*)&branchesP.cUpWives , 1 ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnWives , 1 + branchesP.cDnWives ) ; ___( branchesP.ppsttzDnWives ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpWives , 1 + branchesP.cUpWives ) ; ___( branchesP.ppsttzUpWives ) ;
                
                    if( ppcDown )
                    {
                        {for( countT off = 0 ; off <= branchesP.cDnWives ; off ++ )
                        {
                            strokeS* psttd =  *(strokeS**)ppcDown[ off ] ;
                            *(const strokeS**)&branchesP.ppsttzDnWives[ off ] = psttd ;
                        }}
                    
                        for( countT off = 0 ; off <= branchesP.cUpWives ; off ++ )
                        {
                            strokeS* psttd =  *(strokeS**)ppcUp[ off ] ;
                            *(const strokeS**)&branchesP.ppsttzUpWives[ off ] = psttd ;
                        }
                    }
                
                    pCursor->pSwsKids->ungrabF( tinP ) ; //I RELY ON grab.grabF TO ENSURE THAT THE ZOMBIE POINTERS WILL REMAIN VALID. THIS IS WHY grab DOES NOT ALLOW RECURSION
                    ether.delF( tinP , *(countT**)&ppcDown ) ;
                    ether.delF( tinP , *(countT**)&ppcUp ) ;
                }
            }
        
            if( pCursor == pRoot )
            {
                //----ME---------------------------------------------------------------------------
                *(countT*)&branchesP.cDnBros = 0 ;
                *(countT*)&branchesP.cUpBros = 0 ;
                ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnBros , 1 + branchesP.cDnBros ) ; ___( branchesP.ppsttzDnBros ) ;
                ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpBros , 1 + branchesP.cUpBros ) ; ___( branchesP.ppsttzUpBros ) ;
        
                branchDataOldS& data = *(branchDataOldS*)(     pCursor + 1     ) ;
                *(const strokeS**)&branchesP.ppsttzUpBros[ 0 ] = *(const strokeS**)&branchesP.ppsttzDnBros[ 0 ] = data.psttb ;
            }
            else
            {
                branchHeaderOldS* pDad = pCursor->pbrDad ;
                SET_psttLeverKids( pDad )
    
                //----BROS---------------------------------------------------------------------------
                {
                    ZE( countT** , ppcDown ) ;
                    ZE( countT** , ppcUp ) ;
                    pDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnBros , *(countT*)&branchesP.cUpBros ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnBros , 1 + branchesP.cDnBros ) ; ___( branchesP.ppsttzDnBros ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpBros , 1 + branchesP.cUpBros ) ; ___( branchesP.ppsttzUpBros ) ;
                
                    if( ppcDown )
                    {
                        {for( countT off = 0 ; off <= branchesP.cDnBros ; off ++ )
                        {
                            branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcDown[ off ] + 1     ) ;
                            *(const strokeS**)&branchesP.ppsttzDnBros[ off ] = data.psttb ;
                        }}
                    
                        for( countT off = 0 ; off <= branchesP.cUpBros ; off ++ )
                        {
                            branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcUp[ off ] + 1     ) ;
                            *(const strokeS**)&branchesP.ppsttzUpBros[ off ] = data.psttb ;
                        }
                    }
                
                    pDad->pSwsKids->ungrabF( tinP ) ;
                    ether.delF( tinP , *(countT**)&ppcDown ) ;
                    ether.delF( tinP , *(countT**)&ppcUp ) ;
                }
    
                //----MOMS---------------------------------------------------------------------------
                {
                    ZE( countT** , ppcDown ) ;
                    ZE( countT** , ppcUp ) ;
                    pDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnMoms , *(countT*)&branchesP.cUpMoms , 1 ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnMoms , 1 + branchesP.cDnMoms ) ; ___( branchesP.ppsttzDnMoms ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpMoms , 1 + branchesP.cUpMoms ) ; ___( branchesP.ppsttzUpMoms ) ;
                
                    if( ppcDown )
                    {
                        {for( countT off = 0 ; off <= branchesP.cDnMoms ; off ++ )
                        {
                            strokeS* psttd =  *(strokeS**)ppcDown[ off ] ;
                            *(const strokeS**)&branchesP.ppsttzDnMoms[ off ] = psttd ;
                        }}
                    
                        for( countT off = 0 ; off <= branchesP.cUpMoms ; off ++ )
                        {
                            strokeS* psttd =  *(strokeS**)ppcUp[ off ] ;
                            *(const strokeS**)&branchesP.ppsttzUpMoms[ off ] = psttd ;
                        }
                    }
                
                    pDad->pSwsKids->ungrabF( tinP ) ;
                    ether.delF( tinP , *(countT**)&ppcDown ) ;
                    ether.delF( tinP , *(countT**)&ppcUp ) ;
                }
                
                if( pDad == pRoot )
                {
                    //----DAD---------------------------------------------------------------------------
                    *(countT*)&branchesP.cDnDads = 0 ;
                    *(countT*)&branchesP.cUpDads = 0 ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnDads , 1 + branchesP.cDnDads ) ; ___( branchesP.ppsttzDnDads ) ;
                    ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpDads , 1 + branchesP.cUpDads ) ; ___( branchesP.ppsttzUpDads ) ;
            
                    branchDataOldS& data = *(branchDataOldS*)(     pRoot + 1     ) ;
                    *(const strokeS**)&branchesP.ppsttzUpDads[ 0 ] = *(const strokeS**)&branchesP.ppsttzDnDads[ 0 ] = data.psttb ;
                }
                else
                {
                    branchHeaderOldS* pDadDad = pCursor->pbrDad->pbrDad ;
                    SET_psttLeverKids( pDadDad )
            
                    //----DADS---------------------------------------------------------------------------
                    {
                        ZE( countT** , ppcDown ) ;
                        ZE( countT** , ppcUp ) ;
                        pDadDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnDads , *(countT*)&branchesP.cUpDads ) ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnDads , 1 + branchesP.cDnDads ) ; ___( branchesP.ppsttzDnDads ) ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpDads , 1 + branchesP.cUpDads ) ; ___( branchesP.ppsttzUpDads ) ;
                    
                        if( ppcDown )
                        {
                            {for( countT off = 0 ; off <= branchesP.cDnDads ; off ++ )
                            {
                                branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcDown[ off ] + 1     ) ;
                                *(const strokeS**)&branchesP.ppsttzDnDads[ off ] = data.psttb ;
                            }}
                    
                            for( countT off = 0 ; off <= branchesP.cUpDads ; off ++ )
                            {
                                branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcUp[ off ] + 1     ) ;
                                *(const strokeS**)&branchesP.ppsttzUpDads[ off ] = data.psttb ;
                            }
                        }
            
                        pDadDad->pSwsKids->ungrabF( tinP ) ;
                        ether.delF( tinP , *(countT**)&ppcDown ) ;
                        ether.delF( tinP , *(countT**)&ppcUp ) ;
                    }
    
                    //----GMOMS---------------------------------------------------------------------------
                    {
                        ZE( countT** , ppcDown ) ;
                        ZE( countT** , ppcUp ) ;
                        pDadDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnGMoms , *(countT*)&branchesP.cUpGMoms , 1 ) ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnGMoms , 1 + branchesP.cDnGMoms ) ; ___( branchesP.ppsttzDnGMoms ) ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpGMoms , 1 + branchesP.cUpGMoms ) ; ___( branchesP.ppsttzUpGMoms ) ;
                        
                        if( ppcDown )
                        {
                            {for( countT off = 0 ; off <= branchesP.cDnGMoms ; off ++ )
                            {
                                strokeS* psttd =  *(strokeS**)ppcDown[ off ] ;
                                *(const strokeS**)&branchesP.ppsttzDnGMoms[ off ] = psttd ;
                            }}
                            
                            for( countT off = 0 ; off <= branchesP.cUpGMoms ; off ++ )
                            {
                                strokeS* psttd =  *(strokeS**)ppcUp[ off ] ;
                                *(const strokeS**)&branchesP.ppsttzUpGMoms[ off ] = psttd ;
                            }
                        }
                        
                        pDadDad->pSwsKids->ungrabF( tinP ) ;
                        ether.delF( tinP , *(countT**)&ppcDown ) ;
                        ether.delF( tinP , *(countT**)&ppcUp ) ;
                    }
                
                    if( pDadDad == pRoot )
                    {
                        //----GDAD---------------------------------------------------------------------------
                        *(countT*)&branchesP.cDnGDads = 0 ;
                        *(countT*)&branchesP.cUpGDads = 0 ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnGDads , 1 + branchesP.cDnGDads ) ; ___( branchesP.ppsttzDnGDads ) ;
                        ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpGDads , 1 + branchesP.cUpGDads ) ; ___( branchesP.ppsttzUpGDads ) ;
                
                        branchDataOldS& data = *(branchDataOldS*)(     pRoot + 1     ) ;
                        *(const strokeS**)&branchesP.ppsttzUpGDads[ 0 ] = *(const strokeS**)&branchesP.ppsttzDnGDads[ 0 ] = data.psttb ;
                    }
                    else
                    {
                        branchHeaderOldS* pDadDadDad = pCursor->pbrDad->pbrDad->pbrDad ;
                        SET_psttLeverKids( pDadDadDad )
                
                        //----GDADS---------------------------------------------------------------------------
                        {
                            ZE( countT** , ppcDown ) ;
                            ZE( countT** , ppcUp ) ;
                            pDadDadDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnGDads , *(countT*)&branchesP.cUpGDads ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnGDads , 1 + branchesP.cDnGDads ) ; ___( branchesP.ppsttzDnGDads ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpGDads , 1 + branchesP.cUpGDads ) ; ___( branchesP.ppsttzUpGDads ) ;
                        
                            if( ppcDown )
                            {
                                {for( countT off = 0 ; off <= branchesP.cDnGDads ; off ++ )
                                {
                                    branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcDown[ off ] + 1     ) ;
                                    *(const strokeS**)&branchesP.ppsttzDnGDads[ off ] = data.psttb ;
                                }}
                        
                                for( countT off = 0 ; off <= branchesP.cUpGDads ; off ++ )
                                {
                                    branchDataOldS& data = *(branchDataOldS*)(     (branchHeaderOldS*)ppcUp[ off ] + 1     ) ;
                                    *(const strokeS**)&branchesP.ppsttzUpGDads[ off ] = data.psttb ;
                                }
                            }

                            pDadDadDad->pSwsKids->ungrabF( tinP ) ;
                            ether.delF( tinP , *(countT**)&ppcDown ) ;
                            ether.delF( tinP , *(countT**)&ppcUp ) ;
                        }
                
        
                        //----GGMOMS---------------------------------------------------------------------------
                        {
                            ZE( countT** , ppcDown ) ;
                            ZE( countT** , ppcUp ) ;
                            pDadDadDad->pSwsKids->grabListF( tinP , ppcDown , ppcUp , *(countT*)&branchesP.cDnGGMoms , *(countT*)&branchesP.cUpGGMoms , 1 ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzDnGGMoms , 1 + branchesP.cDnGGMoms ) ; ___( branchesP.ppsttzDnGGMoms ) ;
                            ether.newF( tinP , LF , *(countT**)&branchesP.ppsttzUpGGMoms , 1 + branchesP.cUpGGMoms ) ; ___( branchesP.ppsttzUpGGMoms ) ;
                            
                            if( ppcDown )
                            {
                                {for( countT off = 0 ; off <= branchesP.cDnGGMoms ; off ++ )
                                {
                                    strokeS* psttd =  *(strokeS**)ppcDown[ off ] ;
                                    *(const strokeS**)&branchesP.ppsttzDnGGMoms[ off ] = psttd ;
                                }}
                                
                                for( countT off = 0 ; off <= branchesP.cUpGGMoms ; off ++ )
                                {
                                    strokeS* psttd =  *(strokeS**)ppcUp[ off ] ;
                                    *(const strokeS**)&branchesP.ppsttzUpGGMoms[ off ] = psttd ;
                                }
                            }
                            
                            pDadDadDad->pSwsKids->ungrabF( tinP ) ;
                            ether.delF( tinP , *(countT**)&ppcDown ) ;
                            ether.delF( tinP , *(countT**)&ppcUp ) ;
                        }
                    }
                }
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063006.treeoldc.nearbyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063007.treeoldc.walkf BEGIN
#define DDNAME       "3func.36063007.treeoldc.walkf"
#define DDNUMB      (countT)0x36063007
#define IDFILE      (countT)0x11e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 handleP
 bQuitP
 idLevelP
  must be 0 except when i call myself
 cArgP
 bReverseP
 bHeadersP
 pCallBackFP
  must not be 0
*/
/**/

/*1*/voidT treeOldC::walkF( tinS& tinP , handleC& handleP , const boolT& bQuitP , countT& idLevelP , treeOldCBFT pCallBackFP , countT& cArgP , const flagsT flagsP )/*1*/
{
    //ASSUME: handleP IS EITHER 0 OR POINTS TO THE branchHeaderOldS OBJECT WHOSE KIDS ARE TO BE WALKED
    //0 IMPLIES WALK THE pCursor BRANCH

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pCallBackFP ) ;
        FV( flTREEwALK , flagsP ) ;
        if( POOP ) return ;
    }

    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;

    if( !idLevelP )
    {
        idLevelP = 1 ;
        (*pCallBackFP)( tinP , ether , ifcIDtYPEtREEwALKcb_BEGIN , flagsP , handleP , 0 , idLevelP , cArgP ) ;
    }

    PcURSOR
    if( pCursor )
    {
        boolT bReverse  = F(flagsP) & flTREEwALK_REVERSE ;
        boolT bHeaders  = F(flagsP) & flTREEwALK_HEADERS ;
        boolT pPreserve = F(flagsP) & flTREEwALK_PRESERVElATHrEF ;
        if( !handleP ) handleP.osF( ifcIDtYPEhANDLE_TREEwALK , (countT)pCursor ) ;
        branchHeaderOldS* pHere = (branchHeaderOldS*)handleP.osF( ifcIDtYPEhANDLE_TREEwALK ) ;
        if( pHere )
        {
            (*pCallBackFP)( tinP , ether , !bReverse ? ifcIDtYPEtREEwALKcb_BRANCHbEGIN : ifcIDtYPEtREEwALKcb_BRANCHeND , flagsP , handleP , (byteT*)( pHere + !bHeaders ) , !!bHeaders * sizeof( branchHeaderOldS ) + cbd , cArgP ) ;

            if( pHere->pSwsKids )
            {
                switchStackC& swsk = *pHere->pSwsKids ;
    
                idLevelP ++ ;
                countT cFlavors = swsk.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; !bQuitP && idf <= cFlavors ; idf ++ )
                {
                    psttLeverKidsShared = pHere->psttLeverKids = (strokeS*)swsk.leverF( tinP , idf ) ;
                    ZE( countT , idklhSave ) ;
                    if( pPreserve ) ((stackC&)swsk).pPlateF( tinP , idklhSave ) ;

                    (*pCallBackFP)( tinP , ether , ifcIDtYPEtREEwALKcb_WIFEbEGIN , flagsP , handleP , (byteT*)pHere->psttLeverKids , idLevelP , cArgP ) ;
                    if( swsk )
                    {
                        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                        do
                        {
                            countT c_pKid = (countT)&( bReverse ? swsk.downF( tinP , hWalk ) : swsk.upF( tinP , hWalk ) ) ;
                            handleC hTreeWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_TREEwALK ) ;
                            hTreeWalk.osF( ifcIDtYPEhANDLE_TREEwALK , c_pKid ) ;
                            walkF( tinP , hTreeWalk , bQuitP , idLevelP , pCallBackFP , cArgP , flagsP ) ;
                        }
                        while( !swsk.third && !bQuitP && ~hWalk ) ;
                    }
                    (*pCallBackFP)( tinP , ether , ifcIDtYPEtREEwALKcb_WIFEeND , flagsP , handleP , (byteT*)pHere->psttLeverKids , idLevelP , cArgP ) ;

                    if( pPreserve ) swsk[ idklhSave ] ;
                }
                idLevelP -- ;
            }
    
            (*pCallBackFP)( tinP , ether , !bReverse ? ifcIDtYPEtREEwALKcb_BRANCHeND : ifcIDtYPEtREEwALKcb_BRANCHbEGIN , flagsP , handleP , (byteT*)( pHere + !bHeaders ) , !!bHeaders * sizeof( branchHeaderOldS ) + cbd , cArgP ) ;
            //MUST NOT REFER TO pHere AFTER ifcIDtYPEtREEwALKcb_BRANCHbEGIN CALBACK CAUSE CALLBACK MIGHT HAVE DELETED THE BRANCH HEADER
        }

    }

    if( idLevelP == 1 )
    {
        (*pCallBackFP)( tinP , ether , ifcIDtYPEtREEwALKcb_END , flagsP , handleP , 0 , idLevelP , cArgP ) ;
        idLevelP = 0 ;
    }

    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063007.treeoldc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063008.treeoldc.upf BEGIN
#define DDNAME       "3func.36063008.treeoldc.upf"
#define DDNUMB      (countT)0x36063008
#define IDFILE      (countT)0x11e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 bQueryP
  if 0 then pCursor is updated if possible and i evaluate to 1 if pCursor changed or to 0 if pCursor did not change
  if 1 then pCursor is not updated and i evaluate to the number of kids that pCursor has
 cRepeaT
*/
/**/

/*1*/countT treeOldC::upF( tinS& tinP , const boolT bQueryP , const countT cRepeatP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    PcURSOR
    ZE( countT , cKids ) ;
    if( pCursor && pCursor->pSwsKids )
    {
        SET_psttLeverKids( pCursor )

        if( cRepeatP )
        {
            branchHeaderOldS* pSave = pCursor ;
            pCursor = (branchHeaderOldS*)&(*pCursor->pSwsKids)[ 0 ] ;
            cKids = upF( tinP , bQueryP , cRepeatP - 1 ) ;
            pCursor = pSave ;
        }
        else
        {
            if( bQueryP ) cKids = *pCursor->pSwsKids ;
            else
            {
                pCursor = (branchHeaderOldS*)&(*pCursor->pSwsKids)[ 0 ] ;
                cKids = 1 ;
            }
        }
    }
    grab.ungrabF( tinP ) ;
    return cKids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063008.treeoldc.upf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063009.treeoldc.downf BEGIN
#define DDNAME       "3func.36063009.treeoldc.downf"
#define DDNUMB      (countT)0x36063009
#define IDFILE      (countT)0x11e4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 bQueryP
  if 0 then pCursor is updated if possible and i evaluate to 1 if pCursor changed or to 0 if pCursor did not change
  if 1 then pCursor is not updated and i evaluate to the number of uncles (including dad) that pCursor has
*/
/**/

/*1*/countT treeOldC::downF( tinS& tinP , const boolT bQueryP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    PcURSOR
    ZE( countT , cDads ) ;
    if( pCursor )
    {
        if( bQueryP )
        {
            if( pCursor->pbrDad )
            {
                if( pCursor->pbrDad->pbrDad )
                {
                    SET_psttLeverKids( pCursor->pbrDad->pbrDad )
                    cDads = *pCursor->pbrDad->pbrDad->pSwsKids ;
                }
                else cDads = 1 ;
            }
        }
        else if( pCursor->pbrDad )
        {
            pCursor = pCursor->pbrDad ;
            hugKidF( tinP , pCursor ) ;
            cDads = 1 ;
        }
    }
    grab.ungrabF( tinP ) ;
    return cDads ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063009.treeoldc.downf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300a.treeoldc.leftf BEGIN
#define DDNAME       "3func.3606300a.treeoldc.leftf"
#define DDNUMB      (countT)0x3606300a
#define IDFILE      (countT)0x11e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::leftF( tinS& tinP , const boolT bQueryP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    ZE( boolT , bOk ) ;
    PcURSOR
    if( pCursor && pCursor->pbrDad )
    {
        SET_psttLeverKids( pCursor->pbrDad )
        if( pCursor->pbrDad ) bOk = pCursor->pbrDad->pSwsKids->downF( tinP , bQueryP ) ;
        if( bOk && !bQueryP ) pCursor = (branchHeaderOldS*)&(*pCursor->pbrDad->pSwsKids)[ 0 ] ;
    }
    grab.ungrabF( tinP ) ;
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300a.treeoldc.leftf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300b.treeoldc.rightf BEGIN
#define DDNAME       "3func.3606300b.treeoldc.rightf"
#define DDNUMB      (countT)0x3606300b
#define IDFILE      (countT)0x11e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::rightF( tinS& tinP , const boolT bQueryP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    ZE( boolT , bOk ) ;
    PcURSOR
    if( pCursor && pCursor->pbrDad )
    {
        SET_psttLeverKids( pCursor->pbrDad )
        if( pCursor->pbrDad ) bOk = pCursor->pbrDad->pSwsKids->upF( tinP , bQueryP ) ;
        if( bOk && !bQueryP ) pCursor = (branchHeaderOldS*)&(*pCursor->pbrDad->pSwsKids)[ 0 ] ;
    }
    grab.ungrabF( tinP ) ;
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300b.treeoldc.rightf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300c.treeoldc.inf BEGIN
#define DDNAME       "3func.3606300c.treeoldc.inf"
#define DDNUMB      (countT)0x3606300c
#define IDFILE      (countT)0x11e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::inF( tinS& tinP , const boolT bQueryP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    ZE( boolT , bOk ) ;
    PcURSOR
    if( pCursor )
    {
        SET_psttLeverKids( pCursor )
        if( pCursor->pSwsKids ) bOk = pCursor->pSwsKids->inF( tinP , bQueryP ) ;
        if( bOk && !bQueryP ) wifeF( tinP , (strokeS*)pCursor->pSwsKids->leverF( tinP ) ) ;
    }
    grab.ungrabF( tinP ) ;
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300c.treeoldc.inf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300d.treeoldc.outf BEGIN
#define DDNAME       "3func.3606300d.treeoldc.outf"
#define DDNUMB      (countT)0x3606300d
#define IDFILE      (countT)0x11e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::outF( tinS& tinP , const boolT bQueryP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    ZE( boolT , bOk ) ;
    PcURSOR
    if( pCursor )
    {
        SET_psttLeverKids( pCursor )
        if( pCursor->pSwsKids ) bOk = pCursor->pSwsKids->outF( tinP , bQueryP ) ;
        if( bOk && !bQueryP ) wifeF( tinP , (strokeS*)pCursor->pSwsKids->leverF( tinP ) ) ;
    }
    grab.ungrabF( tinP ) ;
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300d.treeoldc.outf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300e.treeoldc.nearbyclosef BEGIN
#define DDNAME       "3func.3606300e.treeoldc.nearbyclosef"
#define DDNUMB      (countT)0x3606300e
#define IDFILE      (countT)0x11e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::nearbyCloseF( tinS& tinP )/*1*/
{
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300e.treeoldc.nearbyclosef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300f.treeoldc.delf BEGIN
#define DDNAME       "3func.3606300f.treeoldc.delf"
#define DDNUMB      (countT)0x3606300f
#define IDFILE      (countT)0x11ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::delF( tinS& tinP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;

    PcURSOR
    if( pCursor )
    {
        ZE( branchHeaderOldS* , pCursorNew ) ;
        ZE( boolT , bWentDown ) ;
        if( pCursor->pbrDad )
        {
            SET_psttLeverKids( pCursor->pbrDad ) //ASSUME: THIS IS MY MOTHER

            //A:ASSUME: pCursor IS ALWAYS HUGGED I.E. THE LATHREF'D OF ITS SIBLINGS
            bWentDown = !pCursor->pbrDad->pSwsKids->upF( tinP ) && !pCursor->pbrDad->pSwsKids->downF( tinP ) ;
            pCursorNew = bWentDown
                ? pCursor->pbrDad
                : (branchHeaderOldS*)&(*pCursor->pbrDad->pSwsKids)[ 0 ]
            ;

            if( *pCursor->pbrDad->pSwsKids )
            {
                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    if( pCursor == (branchHeaderOldS*)&pCursor->pbrDad->pSwsKids->downF( tinP , hWalk ) )
                    {
                        pCursor->pbrDad->pSwsKids->extractF( 0 , tinP , 0 ) ;
                        break ;
                    }
                }
                while( !pCursor->pbrDad->pSwsKids->poop && ~hWalk ) ;
            }
        }

        count4S c4p( (countT)this , (countT)&ether , (countT)pBranchDefinitionCBF , cbd ) ;
        countT cArg = (countT)&c4p ;

        grab.flagsRefF() &= ~( F(flGRABc_DISABLErECURSION) ) ;
        handleC hTreeWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_TREEwALK ) ;
        walkF( tinP , hTreeWalk , countTC() , countTC() , branchDestructionCBF , cArg , flTREEwALK_HEADERS | flTREEwALK_REVERSE ) ;

        if( pRoot == pCursor ) pRoot = 0 ;
        pCursor = pCursorNew ;
        if( bWentDown ) hugKidF( tinP , pCursor ) ;
    }

    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.3606300f.treeoldc.delf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063010.treeoldc.writef BEGIN
#define DDNAME       "3func.36063010.treeoldc.writef"
#define DDNUMB      (countT)0x36063010
#define IDFILE      (countT)0x11eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 soulP
  may be empty or not empty
 psttP
  may be 0
  is normally 0
  if 0 then the soul of the current branch (and its kids) is written to soulP
  if not 0 then soulP receives the soul of a branch with value psttP and with no kids
   this mode does not currently support a fully general treeOldC object
   it applies only to a treeOldC object with the default data definition (each branch is a strokeS string)
*/
/**/

/*1*/voidT treeOldC::writeF( tinS& tinP , soulC& soulP , const strokeS* const psttP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    soulP << (countT)FINGERnEG_TREEoLDcsOUL ;    
    soulP << (countT)1 ;    

    if( psttP )
    {
        flagsT flagsTreeWrite = flTREEwRITE_null ;

        soulP << (countT)ifcIDtYPEtREEwALKcb_BEGIN ;
        soulP << (countT)ifcIDtYPEtREEwALKcb_BRANCHbEGIN ;
        soulP << psttP ;
        soulP << flagsTreeWrite ;
        soulP << (countT)ifcIDtYPEtREEwALKcb_BRANCHeND ;
        soulP << flagsTreeWrite ;
        soulP << (countT)ifcIDtYPEtREEwALKcb_END ;
    }
    else
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_TREEwALK ) ;
        count2S c2p( (countT)this , (countT)&soulP ) ;
        countT cArg = (countT)&c2p ;
        walkF( tinP , hWalk , countTC() , countTC() , _treeWriteCBF , cArg , flTREEwALK_HEADERS ) ;
    }
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063010.treeoldc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063011.treeoldc.readf BEGIN
#define DDNAME       "3func.36063011.treeoldc.readf"
#define DDNUMB      (countT)0x36063011
#define IDFILE      (countT)0x11ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT treeOldC::readF( tinS& tinP , soulC& soulP , const boolT& bQuitP , const poopC* pPoopP , boolT bLeftP )/*1*/
{
    ZE( countT , cBranches ) ;

    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    scoopC scoop( tinP , LF , pPoopP ? *pPoopP : *tinP.pPoop ) ;

    ZE( soulC* , psCopy ) ;
    ether( tinP , psCopy , TAG( TAGiDnULL ) ) ;
    if( psCopy )
    {
        for( countT idPass = 1 ; !bQuitP && idPass <= 2 ; idPass ++ )
        {
            *psCopy = soulP ;
    
            ZE( countT , fingerprint ) ;
            *psCopy >> fingerprint ;
            __( fingerprint != FINGERnEG_TREEoLDcsOUL && fingerprint != FINGERnEGoLD_treeOldCsoul ) ;
        
            ZE( countT , idVersion ) ;
            *psCopy >> idVersion ;
            __( idVersion - 1 ) ;
        
            PcURSOR
            countT idLevelIncoming = pRoot ? 2 : 1 ;
            while( !bQuitP && *psCopy )
            {
                ZE( countT , idType ) ;
                *psCopy >> idType ;
            
                switch( idType )
                {
                    case ifcIDtYPEtREEwALKcb_BRANCHbEGIN :
                    {
                        ZE( strokeS* , psttw ) ;
                        *psCopy >> psttw ;
                        if( idPass == 1 )
                        {
                            cBranches ++ ;
                            newKidF( tinP , psttw , psCopy , bLeftP ) ;
                            if( bLeftP ) bLeftP = 0 ;
                        }
                        ether.delF( tinP , psttw ) ;
    
                        break ;
                    }
                    case ifcIDtYPEtREEwALKcb_WIFEbEGIN :
                    {
                        idLevelIncoming ++ ;
                        if( idLevelIncoming > 2 ) upF( tinP ) ;
        
                        ZE( strokeS* , psttw ) ;
                        *psCopy >> psttw ;
                        wifeF( tinP , psttw ) ;
                        ether.delF( tinP , psttw ) ;
                        break ;
                    }
                    case ifcIDtYPEtREEwALKcb_WIFEeND :
                    {
                        if( idLevelIncoming > 2 ) downF( tinP ) ;
                        idLevelIncoming -- ;
                        break ;
                    }
                    case ifcIDtYPEtREEwALKcb_BRANCHeND :
                    {
                        ZE( flagsT , flagsTreeWrite ) ;
                        *psCopy >> flagsTreeWrite ;
    
                        if( F(flagsTreeWrite) & flTREEwRITE_pSwsKids )
                        {
                            ZE( countT , cFlavors ) ;
                            *psCopy >> cFlavors ;
                            while( cFlavors -- )
                            {
                                ZE( strokeS* , psttLeverKids ) ;
                                *psCopy >> psttLeverKids ;
                                wifeF( tinP , psttLeverKids ) ;
    
                                ZE( countT , idLathRef ) ;
                                *psCopy >> idLathRef ;
                                if( idPass == 2 && idLathRef ) hugKidF( tinP , idLathRef ) ;
    
                                ether.delF( tinP , psttLeverKids ) ;
                            }
                        }
                        break ;
                    }
                }
            }
        }
    }
    ether( tinP , psCopy ) ;
    grab.ungrabF( tinP ) ;
    return cBranches ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063011.treeoldc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063012.treeoldc.hugkidf BEGIN
#define DDNAME       "3func.36063012.treeoldc.hugkidf"
#define DDNUMB      (countT)0x36063012
#define IDFILE      (countT)0x11ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::hugKidF( tinS& tinP , const countT idP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    ZE( boolT , bHugged ) ;
    PcURSOR
    if( pCursor )
    {
        SET_psttLeverKids( pCursor )
        if( *pCursor->pSwsKids >= idP )
        {
            (*pCursor->pSwsKids)[ idP ] ;
            bHugged = 1 ;
        }
    }
    grab.ungrabF( tinP ) ;
    return bHugged ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063012.treeoldc.hugkidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063013.treeoldc.grabf BEGIN
#define DDNAME       "3func.36063013.treeoldc.grabf"
#define DDNUMB      (countT)0x36063013
#define IDFILE      (countT)0x11ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    grab.grabF( tinP , idLineP , idiFileP , pbBitsP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063013.treeoldc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063014.treeoldc.ungrabf BEGIN
#define DDNAME       "3func.36063014.treeoldc.ungrabf"
#define DDNUMB      (countT)0x36063014
#define IDFILE      (countT)0x11ef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::ungrabF( tinS& tinP )/*1*/
{
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063014.treeoldc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063015.treeoldc.bemptyf BEGIN
#define DDNAME       "3func.36063015.treeoldc.bemptyf"
#define DDNUMB      (countT)0x36063015
#define IDFILE      (countT)0x11f0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT treeOldC::bEmptyF( tinS& tinP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bEmpty = !pRoot ;
    grab.ungrabF( tinP ) ;
    if( tinP.fingerprint ) ;
    return bEmpty ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063015.treeoldc.bemptyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063016.treeoldc.operator_branchdatas_ptr BEGIN
#define DDNAME       "3func.36063016.treeoldc.operator_branchdatas_ptr"
#define DDNUMB      (countT)0x36063016
#define IDFILE      (countT)0x11f1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/treeOldC::operator branchDataOldS*( voidT )/*1*/
{
    TINSL

    ZE( branchDataOldS* , pData ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    PcURSOR
    if( pCursor ) pData = (branchDataOldS*)( pCursor + 1 ) ;

    grab.ungrabF( tinP ) ;

    return pData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063016.treeoldc.operator_branchdatas_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063017.treeoldc.pleverlathreff BEGIN
#define DDNAME       "3func.36063017.treeoldc.pleverlathreff"
#define DDNUMB      (countT)0x36063017
#define IDFILE      (countT)0x11f2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT* treeOldC::pLeverLathRefF( tinS& tinP )/*1*/
{
    return sw_pCursor.pLeverLathRefF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063017.treeoldc.pleverlathreff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063018.treeoldc.hugkidf BEGIN
#define DDNAME       "3func.36063018.treeoldc.hugkidf"
#define DDNUMB      (countT)0x36063018
#define IDFILE      (countT)0x11f3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::hugKidF( tinS& tinP , branchHeaderOldS* const pHeaderP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
    if( pHeaderP && pHeaderP->pbrDad )
    {
        SET_psttLeverKids( pHeaderP->pbrDad )
        if( !*pHeaderP->pbrDad->pSwsKids ) { __1 ; }
        else
        {
            ZE( boolT , bFound ) ;
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                if( pHeaderP == (branchHeaderOldS*)&pHeaderP->pbrDad->pSwsKids->downF( tinP , hWalk ) )
                {
                    bFound = 1 ;
                    break ;
                }
            }
            while( !pHeaderP->pbrDad->pSwsKids->poop && ~hWalk ) ;
            if( !bFound ) { __1 ; }
        }
    }
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063018.treeoldc.hugkidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063019.treeoldc.jumpf BEGIN
#define DDNAME       "3func.36063019.treeoldc.jumpf"
#define DDNUMB      (countT)0x36063019
#define IDFILE      (countT)0x11f4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT treeOldC::jumpF( tinS& tinP , const handleC& handleP )/*1*/
{
    if( ~handleP )
    {
        grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        *sw_pCursor.pLeverLathRefF( tinP ) = cLeverCursor ;
        PcURSOR
        pCursor = (branchHeaderOldS*)handleP.osF( ifcIDtYPEhANDLE_TREEwALK ) ;
        hugKidF( tinP , pCursor ) ;
        grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36063* : 3func.36063019.treeoldc.jumpf END
