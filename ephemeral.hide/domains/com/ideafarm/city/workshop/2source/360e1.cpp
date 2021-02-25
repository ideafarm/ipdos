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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1002.slotsc.dt_slotsc BEGIN
#define DDNAME       "3func.360e1002.slotsc.dt_slotsc"
#define DDNUMB      (countT)0x360e1002
#define IDFILE      (countT)0x13e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/slotsC::~slotsC( voidT )/*1*/
{
    TINSL

    _IO_

    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ ) // DELETE sexC BACKED IN *pPoolContainsMe (I.E. NESTED IN OTHER sexC INSTANCES)
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] && !( F( ppSex[ offs ]->flagsStateF() ) & flSEXcsTATE_USINGnAPfORmETA ) ) { DELzOMBIE( ppSex[ offs ] ) ; }
        inc02AM( pcTallyOut[ offs ] ) ;
    }

    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] ) DELzOMBIE( ppSex[ offs ] ) ;
        inc02AM( pcTallyOut[ offs ] ) ;
    }

    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        grabC* pDoomed = (grabC*)pbzaGrab + offs ;
        DELzOMBIE( pDoomed ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1002.slotsc.dt_slotsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1003.slotsc.slotsc BEGIN
#define DDNAME       "3func.360e1003.slotsc.slotsc"
#define DDNUMB      (countT)0x360e1003
#define IDFILE      (countT)0x13e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

//  cBitsExpSlots IS SET ACCORDING TO THIS TABLE
//     | 
//     | expCbDrop      expSlotsAddressable     expSlotsMin     expSlotsMax     expSlotsAddressable-expSlotsMin     cBitsNeeded
//     | 
//     | 0              f1                      01              f1              f                                   4
//     | 1              e1                      f               e1              f                                   4
//     | 2              d1                      e               d1              f                                   4
//     | 3              c1                      d               c1              f                                   4
//     | 4              b1                      c               b1              f                                   4
//     | 5              a1                      b               a1              f                                   4
//     | 6              91                      a               91              f                                   4
//     | 7              81                      9               81              f                                   4
//     | 8              71                      8               71              f                                   4
//     | 9              61                      7               61              f                                   4
//     | a              51                      6               51              f                                   4
//     | b              41                      5               41              f                                   4
//     | c              31                      4               31              f                                   4
//     | d              21                      3               21              f                                   4
//     | e              11                      2               11              f                                   4
//     | f              01                      1               01              f                                   4
//     | 01             f                       0               f               f                                   4
//     | 11             e                       0               e               e                                   4
//     | 21             d                       0               d               d                                   4
//     | 31             c                       0               c               c                                   4
//     | 41             b                       0               b               b                                   4
//     | 51             a                       0               a               a                                   4
//     | 61             9                       0               9               9                                   4
//     | 71             8                       0               8               8 --------------------------------- 4
//     | 81             7                       0               7               7                                   3
//     | 91             6                       0               6               6                                   3
//     | a1             5                       0               5               5                                   3
//     | b1             4                       0               4               4 --------------------------------- 3
//     | c1             3                       0               3               3                                   2
//     | d1             2                       0               2               2 --------------------------------- 2
//     | e1             1                       0               1               1 --------------------------------- 1
//     | f1             0                       0               0               0 --------------------------------- 0
//     | 

/*1*/slotsC::slotsC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idLineNewP , const countT idiFileNewP , const osTextT* const postNameP , const countT poolC_cBitsExpCbDropP , const countT expCbDropP , const flagsT flagsP , const countT idStateSpaceP , countT idMemorySpaceP , poolC* const pPoolContainsMeP ) :/*1*/
flagsCt( flagsP ) ,
idStateSpace( idStateSpaceP ) ,
idMemorySpace( idMemorySpaceP ) ,
poolC_cBitsExpCbDrop( poolC_cBitsExpCbDropP ) ,
expCbDrop( expCbDropP ) ,
expSlotsMin
(
    thirdC::os_expCbAllocationGrain_IF( tinP ) > expCbDrop
        ? thirdC::os_expCbAllocationGrain_IF( tinP ) - expCbDrop
        : expCbDrop == 0x11                                     // THESE ARE OPTIMIZATIONS TO REDUCE ADDRESS SPACE FRAGMENTATION ; sexC OF THESE SIZES WOULD BE CT DURING SETUP OF EVERY ADAM ANYWAY
            ? 3
            : expCbDrop == 0x12                                 // THESE ARE OPTIMIZATIONS TO REDUCE ADDRESS SPACE FRAGMENTATION ; sexC OF THESE SIZES WOULD BE CT DURING SETUP OF EVERY ADAM ANYWAY
                ? 2
                : 0
) ,
cBitsExpSlots
(
    4           //U:: TRIGRAPH AFTER VERIFY THE TABLE BELOW IS CORRECT
) ,
pGrabNewElt( (grabC*)pbzaGrab ) ,
pPoolContainsMe( pPoolContainsMeP )
{
    _IO_
    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }
    THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )
    {
        puseC puse( tinP , ifcIDpOOL_NONE ) ;
        thirdC::c_strcpyIF( tinP , postName , postNameP ) ;
        thirdC::c_memsetIF( tinP , (byteT*)ppSex      , sizeof ppSex      ) ;
        thirdC::c_memsetIF( tinP , (byteT*)pcTallyIn  , sizeof pcTallyIn  ) ;
        thirdC::c_memsetIF( tinP , (byteT*)pcTallyOut , sizeof pcTallyOut ) ;

        if( expCbDrop == 0xc )
        {
            countT foo = 2 ;
        }

        for( countT offg = expSlotsMin ; offg < CsLOTeXTENTS ; offg ++ ) new( 0 , tinP , pbzaGrab + offg * sizeof( grabC ) , sizeof( grabC ) ) grabC( tinP , TAG( TAGiDnULL ) , flGRABc_NOTjEALOUS | flGRABc_SHARElAYER , ifcIDgRABlAYER_8POOL5nEW ) ;
    
        //if( idStateSpaceP ) { CONoUTrAW( T("slotsC: ")+T(postName)+T("=========================================================================================================\r\n") ) ; }
    
        OStEXT(   ostoNameGroup , TUCK << 2 )
        OStEXTA(  ostoNameGroup , postName ) ;
        OStEXTAK( ostoNameGroup , ".slotsC.sex" ) ;
                
        boolT bBrowse =  F(flagsCt) & flSLOTSc_BROWSE ;
    
        ZE( countT , bitsStateExists ) ;
        if( idStateSpaceP )
        {
            {
                OStEXT( ostoLike , TUCK * 2 ) ;
                {
                    poopC poop ;
                    SCOOP
    
                    osTextT postHome[ TUCK << 1 ] ;
                    thirdC::diskFindHomeIF( tinP , postHome , sizeof postHome , "ideafarm" ) ;
                    if( POOP ) { BLAMMO ; }

                    OStEXTA(  ostoLike , postHome ) ;                                                                         thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\ephemeral" ) ;                                                                    thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\backed.up.daily" ) ;                                                              thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\domains" ) ;                                                                      thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\com" ) ;                                                                          thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\ideafarm" ) ;                                                                     thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\ipdos" ) ;                                                                        thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\memorySpaces" ) ;                                                                 thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\" ) ;
                    OStEXTA(  ostoLike , thirdC::postUserNameIF() ) ;                                                         thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\" ) ;
                    OStEXTCF( ostoLike , tinP.pAdamGlobal1->idMemorySpace , '0' ) ;                                           thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\stateSpaces" ) ;                                                                  thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    OStEXTAK( ostoLike , "\\" ) ;
                    OStEXTC(  ostoLike , idStateSpaceP , 0 ) ;                                                                thirdC::dosCreateDirIF( tinP , ostoLike ) ;
                    POOPR
    
                    OStEXTAK( ostoLike , "\\" ) ;
                    OStEXTA(  ostoLike , ostoNameGroup ) ;
                    OStEXTAK( ostoLike , "\\.*.data.*" ) ;
                }

                {
                    handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                    do
                    {
                        osTextT postName[ TUCK << 1 ] ;
                        postName[ 0 ] = 0 ;
                        thirdC::dosFindFileOrDirSimpleIF( tinP , postName , sizeof postName , hFind , ostoLike ) ;
                        if( !postName[ 0 ] )
                        {
                            __( ~hFind ) ;
                            break ;
                        }
    
                        ZE( boolT , bOk ) ;
                        {
                            POOPIE ;

                            handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                            thirdC::dosOpenIF( tinP , tinP.pEther , hFile , countTC() , postName , ifcOPENaCCESS_R , 0 , flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO , flFILEaTTR_null , 0 , 1 ) ;
                            if( !POOP )
                            {
                                if( !hFile ) { BLAMMO ; } //SHOULD BE IMPOSSIBLE

                                infoFileS info( tinP ) ;
                                infoFileS* pInfo = &info ;
                                thirdC::dosQueryFileInfoIF( tinP , pInfo , hFile ) ;
                                if( !POOP && ( info.cbUsed || info.cbUsedHigh ) ) bOk = 1 ;
                            }
                        }
    
                        if( !bOk )
                        {
                            thirdC::dosDeleteIF( tinP , postName , 1 ) ;
                            continue ;
                        }

                        osTextT postBefore[] = ".slotsC.sex." ;
                        osTextT* postAt = thirdC::c_strstrIF( tinP , postName , postBefore ) ;
                        if( postAt )
                        {
                            postAt += sizeof postBefore - 1 ;
                            osTextT* postEnd = thirdC::c_strstrIF( tinP , postAt , "." ) ;
                            if( postEnd )
                            {
                                *postEnd = 0 ;
                                countT offNeed = thirdC::c_atoiIF( postAt ) ; ;
                                bitsStateExists |= 1 << offNeed ;
                            }
                        }
                    }
                    while( ~hFind ) ;
                }
            }
        }
    
        if( bBrowse || bitsStateExists )
        {
            for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
            {
                if( bBrowse || bitsStateExists >> offs & 1 )
                {
                    OStEXT(   ostoName , TUCK << 2 )
                    OStEXTA(  ostoName , ostoNameGroup ) ;
                    OStEXTAK( ostoName , "." ) ;
                    OStEXTC(  ostoName , offs , 0 ) ;
    
                    pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
                    inc02AM( pcTallyIn[ offs ] ) ;
                    if( ppSex[ offs ] ) { BLAMMO ; }
                    else
                    {
                        flagsT flagsc = bBrowse ? fliSEXc_BROWSE : fliSEXc_null ;
                        if( F(flagsCt) & flSLOTSc_READoNLY ) flagsc |= fliSEXc_READoNLY ;
                        if( F(flagsCt) & flSLOTSc_NOTES    ) flagsc |= fliSEXc_NOTES    ;
    
                        IFsCRATCH
                        {
                            SCOOPS

                            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                            sexC* pSexNew = new( 0 , tinP , pbza1 + offs * sizeof( sexC ) , sizeof( sexC ) ) sexC( tinP , TAG( TAGiDnULL ) , idLineNewP , idiFileNewP , ostoName , expCbDrop , offs , flagsc , idStateSpace , idMemorySpace , pPoolContainsMe ) ;
                            THREADmODE1rESTORE
        
                            if( POOP )
                            {
                                POOPR
                                DELzOMBIE( pSexNew ) ;
                            }
                            else
                            {
                                //OStEXT(    ostoSay , TOCK << 0 ) ;
                                //OStEXTAK(  ostoSay , "\r\n+ [pNew,list]: " ) ;
                                //OStEXTC(   ostoSay , pSexNew , 0 ) ;
                                //sexC* pc = pPoolContainsMe->pSexLifoConstructed ;
                                //while( pc )
                                //{
                                //    OStEXTAK( ostoSay , " , " ) ;
                                //    OStEXTC(  ostoSay , pc , 0 ) ;
                                //    pc = pc->pSexLifoConstructed ;
                                //}
                                //CONoUTrAW( ostoSay ) ;

                                pSexNew->pSexLifoConstructed = pPoolContainsMe->pSexLifoConstructed                 ;
                                                               pPoolContainsMe->pSexLifoConstructed = pSexNew ;

                                ppSex[ offs ] = pSexNew ;
                            }
                        }
                    }
                    inc02AM( pcTallyOut[ offs ] ) ;
                    pGrabNewElt[ offs ].ungrabF( tinP ) ;
                }
            }
        }
    }
    THREADmODE2rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1003.slotsc.slotsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1004.slotsc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.360e1004.slotsc.operator_bytet_ptr"
#define DDNUMB      (countT)0x360e1004
#define IDFILE      (countT)0x13e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/slotsC::operator byteT*( voidT )/*1*/
{
    TINSL
    return newF( tinP , LF , flSLOTScnEW_null ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1004.slotsc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1005.slotsc.operator_call BEGIN
#define DDNAME       "3func.360e1005.slotsc.operator_call"
#define DDNUMB      (countT)0x360e1005
#define IDFILE      (countT)0x13e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::operator ()( tinS& tinP , byteT*& pbP )/*1*/
{
    _IO_
    if( F(flagsCt) & flSLOTSc_READoNLY ) { BLAMMO ; }

    if( pbP )
    {
        countT& dropHeader = ((countT*)pbP)[ - 1 ] ;
        countT mask = ( 1 << CbITSeXPsLOTS ) - 1 ;
        countT offs = expSlotsMin + ( ( dropHeader >> poolC_cBitsExpCbDrop ) & mask ) ;

        if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_POOLdELtRYhARDERaNDtRACE ) )
        {
            countT& dropHeader = ((countT*)pbP)[ - 1 ] ;
            countT mask = ( 1 << CbITSeXPsLOTS ) - 1 ;
            countT offs = expSlotsMin + ( ( dropHeader >> poolC_cBitsExpCbDrop ) & mask ) ;

            if( !ppSex[ offs ] ) { BLAMMO ; }

            inc02AM( pcTallyIn[ offs ] ) ;

            countT idLag = ppSex[ offs ]->idLathNewDelF() ;
            (*ppSex[ offs ])( tinP , pbP ) ;                    // I TRY TO DELETE pbP HERE

            if( pbP )
            {
                THREADmODE3oN( flTHREADmODE3_POOLdELtRYhARDERaNDtRACE )

                tinP.pcUtility[ 0 ] = (countT)pbP ;

                if( pPoolContainsMe ) (*pPoolContainsMe)( tinP , pbP ) ;
                else
                {
                    ZE( boolT , bDeleted ) ;
                    ZE( countT , offsTry ) ;
                    for( offsTry = 0 ; offsTry < CsLOTeXTENTS ; offsTry ++ )
                    {
                        if( ppSex[ offsTry ] )
                        {
                            (*ppSex[ offsTry ])( tinP , pbP ) ;

                            if( !pbP )
                            {
                                bDeleted = 1 ;
                                break ;
                            }
                        }
                    }

                    tinP.pcUtility[ 1 ] = dropHeader ;
                    tinP.pcUtility[ 2 ] = mask ;
                    tinP.pcUtility[ 3 ] =            BM_HIGH | expSlotsMin              ;
                    tinP.pcUtility[ 4 ] =            BM_HIGH | poolC_cBitsExpCbDrop     ;
                    tinP.pcUtility[ 5 ] =            BM_HIGH | offs                     ;
                    tinP.pcUtility[ 6 ] =            BM_HIGH | bDeleted                 ;
                    tinP.pcUtility[ 7 ] = bDeleted ? BM_HIGH | offsTry              : 0 ;
                }

                THREADmODE3rESTORE
                if( !pPoolContainsMe ) { BLAMMOiD( 0xf ) ; }   // I BLAMMO EVEN IF I WAS ABLE TO DELETE THE DROP, BECAUSE dropHeader HAS BEEN CORRUPTED OR THERE IS SOME OTHER ERROR
            }                                                  //A:ASSUME: IF pPoolContainsMe THEN I ASSUME THAT *pPoolContainsMe WILL BLAMMO AFTER TRACING

            inc02AM( pcTallyOut[ offs ] ) ;
        }
        else
        {
            etherC* pEtRock = &etherC::etRockIF( tinP ) ;
            if( pEtRock )
            {
                OStEXT( ostoSay , TUCK << 0 ) ;
                OStEXTA( ostoSay , "slotsC::operator (): trying harder [expCbDrop]:    " ) ;
                OStEXTC(  ostoSay , expCbDrop , 0 ) ;

                pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
            }

            ZE( countT , offsTry ) ;
            for( offsTry = 0 ; offsTry < CsLOTeXTENTS ; offsTry ++ )
            {
                if( ppSex[ offsTry ] )
                {
                    (*ppSex[ offsTry ])( tinP , pbP ) ;
                    if( !pbP ) break ;
                }
            }

            if( pEtRock )
            {
                OStEXT( ostoSay , TUCK << 0 ) ;
                OStEXTA(  ostoSay , !pbP ? "slotsC::operator (): trying harder succeeded [expCbDrop,expSlotsMin,poolC_cBitsExpCbDrop,dropHeader,mask,offs,offsTry]:    " : "slotsC::operator (): trying harder failed [expCbDrop,expSlotsMin,poolC_cBitsExpCbDrop,dropHeader,mask,offs]:    " ) ;
                OStEXTC(  ostoSay , expCbDrop , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , expSlotsMin , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , poolC_cBitsExpCbDrop , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , dropHeader , '0' ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , mask , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , offs , 0 ) ;
                if( !pbP )
                {
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , offsTry , 0 ) ;
                }

                pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1005.slotsc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1006.slotsc.operator_not BEGIN
#define DDNAME       "3func.360e1006.slotsc.operator_not"
#define DDNUMB      (countT)0x360e1006
#define IDFILE      (countT)0x13ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/boolT slotsC::operator !( voidT )/*1*/
{
    TINSL
    _IO_
    boolT bEmpty = 1 ;
    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] )
        {
            bEmpty = 0 ;
            inc02AM( pcTallyOut[ offs ] ) ;
            break ;
        }
        inc02AM( pcTallyOut[ offs ] ) ;
    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1006.slotsc.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1007.slotsc.pdropnotef BEGIN
#define DDNAME       "3func.360e1007.slotsc.pdropnotef"
#define DDNUMB      (countT)0x360e1007
#define IDFILE      (countT)0x13eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

#if defined( ENABLEdROPnOTES )

    /*1*/dropNoteS* slotsC::pDropNoteF( tinS& tinP , const byteT* const pbP )/*1*/
    {
        _IO_
        ZE( dropNoteS* , pNote ) ;
        for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
        {
            inc02AM( pcTallyIn[ offs ] ) ;
            if( ppSex[ offs ] )
            {
                //U::TO FIND A BUG (AFTER FOUND, REMOVE ALL OF THIS bDie AND RESTART STUFF
                //ZE( boolT , bDie ) ;
                //if( thirdC::third_idPhaseAdam_IF( tinP ) == ifcIDpHASEaDAM_DLLwORKING1 && tinP.idPhase1 == ifcIDpHASEtHREAD_WORKING )
                //{
                //    RESTART
                //    _restart.flags |= flRESTARTc_QUIET ;
                //
                //    if( _restart )
                //    {
                //        if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("slotsC::pDropNoteF [_restart]: ")+TF2(_restart,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                //        if( _restart == TUCK ) bDie = 1 ;
                //    }
                //}
    
                /*if( !bDie )*/ pNote = (*ppSex[ offs ]).pDropNoteF( tinP , pbP ) ;
                //else        { BLAMMO ; }
    
                if( pNote )
                {
                    inc02AM( pcTallyOut[ offs ] ) ;
                    break ;
                }
            }
            inc02AM( pcTallyOut[ offs ] ) ;
        }
    
        return pNote ;
    }

#endif


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1007.slotsc.pdropnotef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1008.slotsc.operator_element BEGIN
#define DDNAME       "3func.360e1008.slotsc.operator_element"
#define DDNUMB      (countT)0x360e1008
#define IDFILE      (countT)0x13ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

// IF sexC DATA STORES ARE NESTED THEN pbP MIGHT EXIST WITHIN MULTIPLE sexC INSTANCES
// IF SO, THEN I RETURN THE idApt OF THE INSTANCE THAT HAS THE SMALLEST expSlots SIZE

/*1*/countT slotsC::operator []( const byteT* pbP )/*1*/
{
    TINSL
    _IO_
    countT offApt = - 1 ;
    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] )
        {
            countT offApt1 = (*ppSex[ offs ])[ pbP ] ;
            if( offApt1 != - 1 )
            {
                BLAMMOiFcANNOTsHIFTlEFT( offApt1 , CbITSeXPsLOTS ) ;
                offApt = offApt1 << CbITSeXPsLOTS | ( offs - expSlotsMin ) ;

                inc02AM( pcTallyOut[ offs ] ) ;
                break ;
            }
        }
        inc02AM( pcTallyOut[ offs ] ) ;
    }
    return offApt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1008.slotsc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1009.slotsc.operator_element BEGIN
#define DDNAME       "3func.360e1009.slotsc.operator_element"
#define DDNUMB      (countT)0x360e1009
#define IDFILE      (countT)0x13ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/byteT* slotsC::operator []( const countT offP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( offP == - 1 ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }
    countT offs = expSlotsMin + ( offP & ( 1 << CbITSeXPsLOTS ) - 1 ) ;

    inc02AM( pcTallyIn[ offs ] ) ;

    if( !ppSex[ offs ] )
    {
        pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !ppSex[ offs ] )
        {
            flagsT flagsc = fliSEXc_null ;
            if( F(flagsCt) & flSLOTSc_BROWSE   ) flagsc |= fliSEXc_BROWSE   ;
            if( F(flagsCt) & flSLOTSc_READoNLY ) flagsc |= fliSEXc_READoNLY ;
            if( F(flagsCt) & flSLOTSc_NOTES    ) flagsc |= fliSEXc_NOTES    ;

            OStEXT(   ostoName , TUCK << 2 )
            OStEXTA(  ostoName , postName ) ;
            OStEXTAK( ostoName , ".slotsC.sex." ) ;
            OStEXTCF( ostoName , offs , '0' ) ;

            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            sexC* pSexNew = new( 0 , tinP , pbza1 + offs * sizeof( sexC ) , sizeof( sexC ) ) sexC( tinP , TAG( TAGiDnULL ) , LF , ostoName , expCbDrop , offs , flagsc , idStateSpace , idMemorySpace , pPoolContainsMe ) ;
            THREADmODE1rESTORE

            //OStEXT(    ostoSay , TOCK << 0 ) ;
            //OStEXTAK(  ostoSay , "\r\n+ [pNew,list]: " ) ;
            //OStEXTC(   ostoSay , pSexNew , 0 ) ;
            //sexC* pc = pPoolContainsMe->pSexLifoConstructed ;
            //while( pc )
            //{
            //    OStEXTAK( ostoSay , " , " ) ;
            //    OStEXTC(  ostoSay , pc , 0 ) ;
            //    pc = pc->pSexLifoConstructed ;
            //}
            //CONoUTrAW( ostoSay ) ;

            pSexNew->pSexLifoConstructed = pPoolContainsMe->pSexLifoConstructed           ;
                                           pPoolContainsMe->pSexLifoConstructed = pSexNew ;

            ppSex[ offs ] = pSexNew ;
        }
        pGrabNewElt[ offs ].ungrabF( tinP ) ;
    }

    __( !ppSex[ offs ] ) ;

    byteT* pbo = !ppSex[ offs ] ? 0 : (*ppSex[ offs ])[ offP >> CbITSeXPsLOTS ] ; //A:ASSUME: countT IS 02 BITS
    __Z( pbo ) ;

    inc02AM( pcTallyOut[ offs ] ) ;
    return pbo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1009.slotsc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100a.slotsc.walkf BEGIN
#define DDNAME       "3func.360e100a.slotsc.walkf"
#define DDNUMB      (countT)0x360e100a
#define IDFILE      (countT)0x13ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::walkF( tinS& tinP , slotsWalkCBFT pSlotsWalkCBFP , countT& cArgP )/*1*/
{
    _IO_
    if( pSlotsWalkCBFP ) for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] )
        {
            ZE( const sexHeadS*  , pHead       ) ;
            ZE( const byteT*     , pbBitsOwned ) ;
            ZE( const dropNoteS* , pNotes      ) ;
            ZE( const byteT*     , pbData      ) ;
            ppSex[ offs ]->peekF( tinP , pHead , pbBitsOwned , pNotes , pbData ) ;

            (*pSlotsWalkCBFP)( tinP , cArgP , pHead , pbBitsOwned , pNotes , pbData ) ;
        }
        inc02AM( pcTallyOut[ offs ] ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100a.slotsc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100d.slotsc.flushf BEGIN
#define DDNAME       "3func.360e100d.slotsc.flushf"
#define DDNUMB      (countT)0x360e100d
#define IDFILE      (countT)0x13ef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::flushF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( idStateSpace )
    {
        for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
        {
            inc02AM( pcTallyIn[ offs ] ) ;
            if( ppSex[ offs ] ) ppSex[ offs ]->flushF( tinP ) ;
            inc02AM( pcTallyOut[ offs ] ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100d.slotsc.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100e.slotsc.glassf BEGIN
#define DDNAME       "3func.360e100e.slotsc.glassf"
#define DDNUMB      (countT)0x360e100e
#define IDFILE      (countT)0x13f0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT slotsC::glassF( tinS& tinP , strokeS*& psttP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    tinP.pEther->strMakeF( tinP , LF , psttP , T("slotsC [flagsCt,idStateSpace,idMemorySpace,expCbDrop,expSlotsMin,postName]: ") , TUCK << 1 ) ; ___( psttP ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(flagsCt      ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(idStateSpace ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(expCbDrop    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(expSlotsMin  ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , T("\"")+T(postName)+T("\"") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100e.slotsc.glassf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100f.slotsc.deleteemptiesiff BEGIN
#define DDNAME       "3func.360e100f.slotsc.deleteemptiesiff"
#define DDNUMB      (countT)0x360e100f
#define IDFILE      (countT)0x13f1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::deleteEmptiesIfF( tinS& tinP )/*1*/
{
    _IO_

    if( F(flagsCt) & flSLOTSc_READoNLY ) { BLAMMO ; }

    //20170412@1618: U::COMMENTED OUT TO FIND A BUG; IF NOW CNR NEED MORE TESTING (MULTITHREADED)
    //20170706@1617: ENABLED BECAUSE AM SEEING POOL EXHAUSTION

    for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
    {
        inc02AM( pcTallyIn[ offs ] ) ;
        if( ppSex[ offs ] && !*ppSex[ offs ] )
        {
            /**/ //CS:CODEsYNC: DUPLICATE CODE: 360e1005 360e100f
            /**/ 
            /**/ // DELETE ppSex[ offs ] IF IT IS STILL EMPTY
            /**/ // THIS CODE IS INTENDED TO ACHIEVE THREAD SAFETY WITHOUT REQUIRING SERIALIZATION WITH THREADS THAT WANT TO NEW/DEL A POOL DROP USING ppSex[ offs ]
            /**/ // FOR SPEED, SERIALIZATION IS NOT USED FOR NORMAL POOL DROP NEW/DEL OPERATIONS
            /**/ // SERIALIZATION IS ONLY USED WHEN CONSTRUCTING OR DESTROYING sexC INSTANCES (WHICH ARE REGISTERED IN ppSex[])
            /**/ 
            /**/ pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
            /**/ 
            /**/ THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            /**/ sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            /**/ for(;;)                                                                                                // FOREVER
            /**/ {
            /**/     countT tallyIn  = pcTallyIn[  offs ] ; // ENTRIES AND EXITS OF ALL CODE THAT ACCESSES THIS sexC
            /**/     countT tallyOut = pcTallyOut[ offs ] ;
            /**/ 
            /**/     if( !!*ppSex[ offs ] ) break ;                                                                     // IF sexC IS NO LONGER EMPTY THEN ABORT
            /**/ 
            /**/     if( tallyIn - 1 == tallyOut )                                                                      // IF NO OTHER THREADS WERE ACCESSING
            /**/     {
            /**/         sexC* pszSnap = ppSex[ offs ] ;
            /**/         sexC* psDoomed = (sexC*)setIfEqualsAM( *(countT*)( ppSex + offs ) , 0 , (countT)pszSnap ) ;    // HIDE THIS sexC
            /**/         if( psDoomed != pszSnap ) { BLAMMO ; } //SHOULD BE IMPOSSIBLE
            /**/ 
            /**/         if( tallyIn == pcTallyIn[ offs ] && tallyOut == pcTallyOut[ offs ] )                           // IF NO OTHER THREADS HAVE BEGUN ACCESSING
            /**/         {
            /**/             if( !!*psDoomed ) { BLAMMO ; }                                                             // BLAMMO IF NOT EMPTY (SHOULD BE IMPOSSIBLE)
            /**/
            /**/             if( pPoolContainsMe->pSexLifoConstructed == psDoomed ) pPoolContainsMe->pSexLifoConstructed = psDoomed->pSexLifoConstructed ; // DEREGISTER FROM DELETION LIST
            /**/             else
            /**/             {
            /**/                 sexC* pc = pPoolContainsMe->pSexLifoConstructed ;
            /**/                 while( pc )
            /**/                 {
            /**/                    if( pc->pSexLifoConstructed == psDoomed )
            /**/                    {
            /**/                        pc->pSexLifoConstructed = psDoomed->pSexLifoConstructed ; 
            /**/                        break ;
            /**/                    }
            /**/
            /**/                    pc = pc->pSexLifoConstructed ;
            /**/                 }
            /**/             }
            /**/
            /**/             DELzOMBIE( psDoomed ) ;                                                                    // DESTROY THIS sexC
            /**/             break ;                                                                                    // BREAK
            /**/         }
            /**/         else if( setIfZeAM( *(countT*)( ppSex + offs ) , (countT)psDoomed ) ) { BLAMMO ; }             // SHOW THIS sexC (BLAMMO SHOULD BE IMPOSSIBLE)
            /**/ 
            /**/         ++ s ; thirdC::dosSleepWinkIF( tinP ) ;                                                        // NAP A WINK
            /**/     }
            /**/ }
            /**/ THREADmODE1rESTORE
            /**/ 
            /**/ pGrabNewElt[ offs ].ungrabF( tinP ) ;
        }
        inc02AM( pcTallyOut[ offs ] ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e100f.slotsc.deleteemptiesiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1010.slotsc.newf BEGIN
#define DDNAME       "3func.360e1010.slotsc.newf"
#define DDNUMB      (countT)0x360e1010
#define IDFILE      (countT)0x13f2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/byteT* slotsC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL                 //20131223@1504: ADDED WITHOUT ANALYSIS; BEFORE, I WOULD DO WORK EVEN IF POOP
    {
        if( POOP ) return 0 ;
        FV( flSLOTScnEW , flagsP ) ;
        if( POOP ) return 0 ;
    }

    ZE( byteT* , pbo ) ;
    {
        _IO_
        if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }
        if( F(flagsCt) & flSLOTSc_READoNLY ) { BLAMMO ; }
        //USE THE LARGEST AVAILABLE SEX TO ALLOW SMALLER EXTENTS TO BECOME EMPTY AND BE DELETED
        //THIS ENCOURAGES DENSITY SO REDUCES PAGING
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;

        for( countT offPass = 0 ; ; offPass ++ ) //IF !flSLOTScnEW_DOnOTbLOCK, WILL BLOCK UNTIL SUCCEED IN GETTING A DROP ALLOCATED
        {
            if( offPass > 1 ) { BLAMMO ; }

            for( sCountT offs = sizeof ppSex / sizeof ppSex[ 0 ] - 1 ; - 1 + (sCountT)expSlotsMin < offs ; offs -- )
            {
                inc02AM( pcTallyIn[ offs ] ) ;
                if( ppSex[ offs ] )
                {
                    static countT idInLath ;
                    countT idIn = 1 + incv02AM( idInLath ) ;
                    if( idIn == 1 )
                    {
                        countT foo = 2 ;
                    }

                    pbo = ppSex[ offs ]->newF( tinP , idLineP , idiFileP ) ;

                    if( pbo )
                    {
                        dropNoteS* pDropNote = ppSex[ offs ]->pDropNoteF( tinP , pbo ) ;

                        if( pDropNote ) putNegAM( pDropNote->finger , FINGERnEG_dropNoteSslotsC1 ) ;

                        countT& dropHeader = ((countT*)pbo)[ - 1 ] ;

                        BLAMMOiFcANNOTsHIFTlEFT( dropHeader , CbITSeXPsLOTS ) ;
                        dropHeader = dropHeader << CbITSeXPsLOTS | ( offs - expSlotsMin ) ;

                        if( pDropNote )
                        {
                            pDropNote->dropHeaderCopy = dropHeader ;
                            putNegAM( pDropNote->finger , FINGERnEG_dropNoteSslotsC2 ) ;
                        }

                        inc02AM( pcTallyOut[ offs ] ) ;
                        break ;
                    }
                }
                inc02AM( pcTallyOut[ offs ] ) ;
            }

            if( pbo ) break ;

            if( !( F(flagsP) & flSLOTScnEW_DOnOTcTsEXc ) )
            {
                flagsT flagsc = fliSEXc_null ;
                if( F(flagsCt) & flSLOTSc_BROWSE   ) flagsc |= fliSEXc_BROWSE   ;
                if( F(flagsCt) & flSLOTSc_READoNLY ) flagsc |= fliSEXc_READoNLY ;
                if( F(flagsCt) & flSLOTSc_NOTES    ) flagsc |= fliSEXc_NOTES    ;

                countT offs = expSlotsMin ;                                         //ALLOCATE THE SMALLEST UNALLOCATED EXTENT
                for( ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
                {
                    inc02AM( pcTallyIn[ offs ] ) ;
                    if( ppSex[ offs ] )
                    {
                        inc02AM( pcTallyOut[ offs ] ) ;
                        continue ; // INTENTIONALLY NOT SERIALIZED, FOR SPEED.  WILL BE RECHECKED WITHIN SERIALIZED BLOCK OF CODE
                    }

                    inc02AM( pcTallyOut[ offs ] ) ;
                    break ;
                }

                pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ; // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                inc02AM( pcTallyIn[ offs ] ) ;

                countT bNested = pGrabNewElt[ offs ].cGrabbedF() - 1 ;              //20170928@1030: ADDED WITHOUT ANALYIS TO WORKAROUND: SEE THE COMMENTED OUT BLAMMO CODE THAT FOLLOWS
                if( bNested > 1 )
                {
                    pGrabNewElt[ offs ].ungrabF( tinP ) ; // --------------------------------------------------------------------------------------------
                    inc02AM( pcTallyOut[ offs ] ) ;
                    offPass = - 1 ;
                    continue ;
                }

                if( ppSex[ offs ] )
                {
                    pGrabNewElt[ offs ].ungrabF( tinP ) ; // --------------------------------------------------------------------------------------------
                    inc02AM( pcTallyOut[ offs ] ) ;
                    offPass = - 1 ;
                    continue ;
                }

                //20170928@1030: DISABLED WITHOUT ANALYIS TO WORKAROUND: SEE PRECEDING CODE THAT NOW MERELY CONTNINUES THE LOOP
                //countT bNested = pGrabNewElt[ offs ].cGrabbedF() - 1 ;
                //if( bNested > 1 ) { BLAMMO ; }

                const flagsT maskExpCbDrop = 1 << expCbDrop ;
                const flagsT maskExpSlots  = 1 << offs      ;
                boolT bNest1 = !!( tinP.fliSexCtPendingExpCbDrop & maskExpCbDrop ) ;
                boolT bNest2 = !!( tinP.fliSexCtPendingExpSlots  & maskExpSlots  ) ;

                OStEXT(   ostoName , TUCK << 2 )
                OStEXTA(  ostoName , postName ) ;
                OStEXTAK( ostoName , ".slotsC.sex." ) ;
                OStEXTCF( ostoName , offs , '0' ) ;

                byteT* pbzaUse = ( !bNested ? pbza1 : pbza2 ) + offs * sizeof( sexC ) ;
                if( pbzaUse == (byteT*)ppSex[ offs ] ) { BLAMMO ; }

                sexC* pSexNew = new( 0 , tinP , pbzaUse , sizeof( sexC ) ) sexC( tinP , TAG( TAGiDnULL ) , idLineP , idiFileP , ostoName , expCbDrop , offs , flagsc , idStateSpace , idMemorySpace , pPoolContainsMe ) ;

                if( pSexNew && (const poopC&)*pSexNew ) // *pSexNew CT FAILED, EITHER BECAUSE IT DETECTED THAT IT CT'D ITSELF RECURSIVELY OR BECAUSE INSUFFICIENT CONTIGUOUS MEMORY IS AVAILABLE
                {
                    DELzOMBIE( pSexNew ) ;
                    pGrabNewElt[ offs ].ungrabF( tinP ) ; // -------------------------------------------------------------------------------------------------
                    inc02AM( pcTallyOut[ offs ] ) ;
                }
                else //U::BUG: SHOULD BE "else if( pSexNew )"
                {
                    pbo = pSexNew->newF( tinP , idLineP , idiFileP ) ;
                    //20180509@1131:  WHEN sexC NESTING IS DISABLED, sexC INSTANCES CAN BE CONSTRUCTED WITH NO SLOTS AVAILABLE, SO CANNOT DO THIS:  if( !pbo ) { BLAMMO ; } // TO MAKE SURE THAT sexC::sexC SETS IMPOTENCE IF IT FAILS FOR EITHER REASON (RECURSION OR INSUFFICIENT CONTIGUOUS MEMORY)

                    if( pbo )
                    {
                        countT& dropHeader = ((countT*)pbo)[ - 1 ] ;
                        BLAMMOiFcANNOTsHIFTlEFT( dropHeader , CbITSeXPsLOTS ) ;
                        dropHeader = dropHeader << CbITSeXPsLOTS | ( offs - expSlotsMin ) ;
                    }

                    pSexNew->pSexLifoConstructed = pPoolContainsMe->pSexLifoConstructed           ;
                                                   pPoolContainsMe->pSexLifoConstructed = pSexNew ;

                    ppSex[ offs ] = pSexNew ;

                    pGrabNewElt[ offs ].ungrabF( tinP ) ; // -------------------------------------------------------------------------------------------------
                    inc02AM( pcTallyOut[ offs ] ) ;
                }
            }

            if( pbo || F(flagsP) & flSLOTScnEW_DOnOTbLOCK ) break ;

            ++ s ; thirdC::dosSleepRWinkIF( tinP ) ;
        }
        THREADmODE1rESTORE
    }

    return pbo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1010.slotsc.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1011.slotsc.deletetopsexf BEGIN
#define DDNAME       "3func.360e1011.slotsc.deletetopsexf"
#define DDNUMB      (countT)0x360e1011
#define IDFILE      (countT)0x13f3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/countT slotsC::deleteTopSexF( tinS& tinP )/*1*/
{
    _IO_

    ZE( countT , rc ) ;
    if( !pPoolContainsMe->pSexLifoConstructed ) rc = 2 ;
    else
    {
        for( countT offs = expSlotsMin ; offs < sizeof ppSex / sizeof ppSex[ 0 ] ; offs ++ )
        {
            if( ppSex[ offs ] == pPoolContainsMe->pSexLifoConstructed )
            {
                pPoolContainsMe->pSexLifoConstructed = ppSex[ offs ]->pSexLifoConstructed ;
                DELzOMBIE( ppSex[ offs ] ) ;

                rc = !pPoolContainsMe->pSexLifoConstructed ? 2 : 1 ;
                break ;
            }
        }
    }

    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1011.slotsc.deletetopsexf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1012.slotsc.makeSexF BEGIN
#define DDNAME       "3func.360e1012.slotsc.makeSexF"
#define DDNUMB      (countT)0x360e1012
#define IDFILE      (countT)0x13f4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::makeSexF( tinS& tinP , const countT expSlotsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }
    if( F(flagsCt) & flSLOTSc_READoNLY ) { BLAMMO ; }
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

    flagsT flagsc = fliSEXc_null ;
    if( F(flagsCt) & flSLOTSc_BROWSE   ) flagsc |= fliSEXc_BROWSE   ;
    if( F(flagsCt) & flSLOTSc_READoNLY ) flagsc |= fliSEXc_READoNLY ;
    if( F(flagsCt) & flSLOTSc_NOTES    ) flagsc |= fliSEXc_NOTES    ;

    countT offs = expSlotsP ;

    pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ; // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    inc02AM( pcTallyIn[ offs ] ) ;

    if( !ppSex[ offs ] )
    {
        const flagsT maskExpCbDrop = 1 << expCbDrop ;
        const flagsT maskExpSlots  = 1 << offs      ;
        boolT bNest1 = !!( tinP.fliSexCtPendingExpCbDrop & maskExpCbDrop ) ;
        boolT bNest2 = !!( tinP.fliSexCtPendingExpSlots  & maskExpSlots  ) ;

        OStEXT(   ostoName , TUCK << 2 )
        OStEXTA(  ostoName , postName ) ;
        OStEXTAK( ostoName , ".slotsC.sex." ) ;
        OStEXTCF( ostoName , offs , '0' ) ;

        byteT* pbzaUse = pbza1 + offs * sizeof( sexC ) ;
        if( pbzaUse == (byteT*)ppSex[ offs ] ) { BLAMMO ; }

        sexC* pSexNew = new( 0 , tinP , pbzaUse , sizeof( sexC ) ) sexC( tinP , TAG( TAGiDnULL ) , LF , ostoName , expCbDrop , offs , flagsc , idStateSpace , idMemorySpace , pPoolContainsMe ) ;

        if( pSexNew && (const poopC&)*pSexNew ) // *pSexNew CT FAILED, EITHER BECAUSE IT DETECTED THAT IT CT'D ITSELF RECURSIVELY OR BECAUSE INSUFFICIENT CONTIGUOUS MEMORY IS AVAILABLE
        {
            DELzOMBIE( pSexNew ) ;
            BLAMMO ;                        //20180613@1222: ADDED WITHOUT ANALYSIS
        }
        else if( pSexNew )
        {

            pSexNew->pSexLifoConstructed = pPoolContainsMe->pSexLifoConstructed           ;
                                           pPoolContainsMe->pSexLifoConstructed = pSexNew ;

            ppSex[ offs ] = pSexNew ;
        }
    }

    pGrabNewElt[ offs ].ungrabF( tinP ) ; // -------------------------------------------------------------------------------------------------
    inc02AM( pcTallyOut[ offs ] ) ;

    THREADmODE1rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1012.slotsc.makeSexF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1013.slotsc.testDropHeadersF BEGIN
#define DDNAME       "3func.360e1013.slotsc.testDropHeadersF"
#define DDNUMB      (countT)0x360e1013
#define IDFILE      (countT)0x13f5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT slotsC::testDropHeadersF( tinS& tinP )/*1*/
{
    //_IO_

    for( countT offsTry = 0 ; offsTry < CsLOTeXTENTS ; offsTry ++ )
    {
        if( ppSex[ offsTry ] ) ppSex[ offsTry ]->testDropHeadersF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e1* : 3func.360e1013.slotsc.testDropHeadersF END
