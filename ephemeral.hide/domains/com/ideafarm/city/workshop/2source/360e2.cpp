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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2002.poolc.dt_poolc BEGIN
#define DDNAME       "3func.360e2002.poolc.dt_poolc"
#define DDNUMB      (countT)0x360e2002
#define IDFILE      (countT)0x13f6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

poolC::guts_poolC_S::~guts_poolC_S( voidT )
{
    TINSL
    _IO_

    ZE( boolT , bDone ) ;
    while( !bDone )
    {
        ZE( countT , cTried ) ;
        for( countT offs = 0 ; offs < sizeof ppSlots / sizeof ppSlots[ 0 ] ; offs ++ )
        {
            if( !ppSlots[ offs ] ) continue ;

            cTried ++ ;
            countT rc = ppSlots[ offs ]->deleteTopSexF( tinP ) ;
            if( rc )
            {
                if( rc == 2 ) bDone = 1 ;
                break ;
            }
        }

        if( !cTried ) break ; // ALL ppSlots ELEMENTS ARE NULL
    }

    for( countT offs = 0 ; offs < sizeof ppSlots / sizeof ppSlots[ 0 ] ; offs ++ )
    {
        grabC* pDoomed = (grabC*)pbzaGrab + offs ;
        DELzOMBIE( pDoomed ) ;
        DELzOMBIE( ppSlots[ offs ] ) ;
    }
}

poolC::face_poolC_S::~face_poolC_S( voidT )
{
    TINSL
    //_IO_

    //U:: THIS CODE IS NOW REDUNDANT AND DOES NOT WORK
    //listC* pRoot = &APT( listC , aptListRoot ) ;
    //THREADmODE2oN( flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ;
    //DEL( pRoot ) ;
    //THREADmODE2rESTORE
}

/*1*/poolC::~poolC( voidT )/*1*/
{
    TINSL
    _IO_

    //CONoUTrAW( "~poolC/+:  " ) ;
    //CONoUTrAW( guts.postName ) ;
    //CONoUTrAW( " *********************************************************************************************************\r\n" ) ;

    {
        face_poolC_S* pFace = (face_poolC_S*)(byteT*)napFace ;
        if( 1 == decv02AM( pFace->cRef ) )
        {
            THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )                                                                                            \
            if( !guts.idStateSpace )
            {
                {
                    puseC puseMe( tinP , *this ) ;
                    countT pczName[] = { LISTnAME_ROOT , 0 } ;
                    listC::deleteIF( tinP , pczName ) ;
                }
                DELzOMBIE( pFace ) ;
            }

            ZE( boolT , bIndexed ) ;
            {
                puseC puseMe( tinP , *this ) ;
                bIndexed = listC::isIndexedIF( tinP ) ; // IF I JUST DELETED LISTnAME_ROOT, THE ASSOCIATED INDEX WILL NO LONGER EXIST
            }

            if( bIndexed )
            {
                {
                    puseC puseMe( tinP , *this ) ;

                    handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , 0 } ;
                    listC::openIF( tinP , hList , pczName , flLISToPEN_IFeXISTS ) ;

                    if( ~hList ) listC::unIndexIF( tinP , hList ) ;
                }
            }
            THREADmODE2rESTORE
        }
    }

    if( tinP.pAdamGlobal1->pPoolAdamTemp == this ) // THIS IS OK BECAUSE ADAMteMP CONTAINS ITS OWN INDEX
    {
        DELzOMBIE( tinP.pAdamGlobal1->pPoolHomeTemp ) ;
        DELzOMBIE( tinP.pAdamGlobal1->pPoolScratch  ) ;
        DELzOMBIE( tinP.pAdamGlobal1->pPoolAdamPerm ) ;
        DELzOMBIE( tinP.pAdamGlobal1->pPoolHomePerm ) ;
    }

         if( tinP.pAdamGlobal1->pPoolHomePerm == this ) tinP.pAdamGlobal1->pPoolHomePerm = 0 ;
    else if( tinP.pAdamGlobal1->pPoolAdamPerm == this ) tinP.pAdamGlobal1->pPoolAdamPerm = 0 ;
    else if( tinP.pAdamGlobal1->pPoolScratch  == this ) tinP.pAdamGlobal1->pPoolScratch  = 0 ;
    else if( tinP.pAdamGlobal1->pPoolHomeTemp == this ) tinP.pAdamGlobal1->pPoolHomeTemp = 0 ;
    else if( tinP.pAdamGlobal1->pPoolAdamTemp == this ) tinP.pAdamGlobal1->pPoolAdamTemp = 0 ;

    if( tinP.pPoolUse == this ) tinP.pPoolUse = 0 ;

    if( F(flagsInstance) & flPOOLiNSTANCE_FACEcONSTRUCTED )
    {
        fileC* pDoomed = (fileC*)pbFileFace ;
        DELzOMBIE( pDoomed ) ;
    }

    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( guts.idStateSpace && ! -- processGlobal1I._poolC_cBacked ) processGlobal1I._poolC_bQuitFlushing ++ ;

    if( processGlobal1I._poolC_pPool == this ) processGlobal1I._poolC_pPool = pNext ;
    else
    {
        poolC* pCursor = processGlobal1I._poolC_pPool ;
        while( pCursor )
        {
            if( pCursor->pNext == this )
            {
                pCursor->pNext = pNext ;
                break ;
            }

            pCursor = pCursor->pNext ;
        }
        __Z( pCursor ) ;
    }

    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;

    //CONoUTrAW( "~poolC/-:  " ) ;
    //CONoUTrAW( guts.postName ) ;
    //CONoUTrAW( " *********************************************************************************************************\r\n" ) ;

    homeS& home = homeS::homeIF() ;
    ZE( poolRegistrationS* , pReg ) ;
    {   // *this IS REGISTERED EARLY AND DEREGISTERED LATE BECAUSE sexC CONSTRUCTORS AND DESTRUCTORS MUST REFER TO IT
        // THIS MEANS THAT poolC INSTANCES THAT ARE REGISTERED ARE NOT NECESSARILY FULLY CONSTRUCTED AND USEABLE

        // RECIPE
        // 
        // grab array
        // for each array element
        //  if formatted and name matches
        //   if decrementing cRef resulted in 0
        //    unformat
        //   break
        // if array exhausted blammo

        poolRegistrationS* pRegs = (poolRegistrationS*)home.pb_pPoolReg ;
        ZE( countT , offr ) ;
        grabitC grabx( tinP , TAG( TAGiDnULL ) , (byteT*)&home.fliGrab , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_null , 0 , ifcIDgRABlAYER_8POOL3dT ) ;
        for( offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
        {
            if( pRegs[ offr ].flagsi & fliPOOLrEGISTRATIONs_FORMATTED && !thirdC::c_strcmpIF( tinP , pRegs[ offr ].postPoolName , guts.postName ) )
            {
                pReg = pRegs + offr ;
                break ;
            }
        }
        if( offr == CpOOLrEGISTRATIONSmAX ) { BLAMMO ; }
    }

    {
        guts_poolC_S* pDoomed = (guts_poolC_S*)(byteT*)napGuts ; 
        DELzOMBIE( pDoomed ) ;                                          // slotsC AND sexC ARE DT HERE
    }

    {
        grabitC grabx( tinP , TAG( TAGiDnULL ) , (byteT*)&pReg->flagsi , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_null , 0 , ifcIDgRABlAYER_8POOL4dT ) ;
        if( pReg && 1 == decv02AM( pReg->cRefPool ) )                       // MUST BE DONE AFTER sexC ARE DT
        {
            pReg->flagsi = fliPOOLrEGISTRATIONs_GRABBED ;
            pReg->resetF( tinP ) ;
            thirdC::c_memsetIF( tinP , pReg->postPoolName , sizeof pReg->postPoolName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2002.poolc.dt_poolc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2003.poolc.poolc BEGIN
#define DDNAME       "3func.360e2003.poolc.poolc"
#define DDNUMB      (countT)0x360e2003
#define IDFILE      (countT)0x13f7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/


//  cBitsExpCbDrop IS SET ACCORDING TO THIS TABLE
//     | 
//     | EXPmAX-EXPmIN   HIGHESToFFSET       BITSnEEDED
//     | 
//     | 0               0  ---------------- 0
//     | 1               1  ---------------- 1
//     | 2               2  ---------------- 2
//     | 3               3                   2
//     | 4               4  ---------------- 3
//     | 5               5                   3
//     | 6               6                   3
//     | 7               7                   3
//     | 8               8  ---------------- 4
//     | 9               9                   4
//     | a               a                   4
//     | b               b                   4
//     | c               c                   4
//     | d               d                   4
//     | e               e                   4
//     | f               f                   4
//     | 01              01 ---------------- 5
//     | 11              11                  5
//     | 21              21                  5
//     | 31              31                  5
//     | 41              41                  5
//     | 51              51                  5
//     | 61              61                  5
//     | 71              71                  5
//     | 81              81                  5
//     | 91              91                  5
//     | a1              a1                  5
//     | b1              b1                  5
//     | c1              c1                  5
//     | d1              d1                  5
//     | e1              e1                  5
//     | f1 (impossible) f1                  5              (expCbDrop f1 IS IMPOSSIBLE BECAUSE THE LOWEST ALLOCATION GRAIN IS NOT AVAILABLE AND THE RUNNING PROGRAM'S FOOTPRINT OCCUPIES PART OF THE REMAINDER OF THE LOWER HALF OF THE FULL ADDRESS SPACE (THE UPPER HALF IS NOT ACCESSIBLE TO APPLICATION CODE)
//     | 

poolC::guts_poolC_S::guts_poolC_S( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postNameP , const flagsT flagsP , const countT idStateSpaceP , const countT expCbDropMinP , const countT expCbDropMaxP , countT idMemorySpaceP ) :
flagsCt( flagsP ) ,
idStateSpace( idStateSpaceP ) ,
idMemorySpace( idMemorySpaceP ) ,
pGrabNewElt( (grabC*)pbzaGrab ) ,
expCbDropMin( expCbDropMinP != - 1 ? expCbDropMinP : 0                                        ) ,
expCbDropMax( expCbDropMaxP != - 1 ? expCbDropMaxP : sizeof ppSlots / sizeof ppSlots[ 0 ] - 1 ) ,
cBitsExpCbDrop
(
    expCbDropMax - expCbDropMin <= 2
        ? expCbDropMax - expCbDropMin
        : expCbDropMax - expCbDropMin == 3
            ? 2
            : expCbDropMax - expCbDropMin <= 7
                ? 3
                : expCbDropMax - expCbDropMin <= 0xf
                    ? 4
                    : 5
)
{
    _IO_
    thirdC::c_strcpyIF( tinP , postName , postNameP ) ;
    thirdC::c_memsetIF( tinP , (byteT*)ppSlots , sizeof ppSlots ) ;

    for( countT offg = 0 ; offg < CsLOTsIZESmAX ; offg ++ ) new( 0 , tinP , pbzaGrab + offg * sizeof( grabC ) , sizeof( grabC ) ) grabC( tinP , TAG( TAGiDnULL ) , flGRABc_NOTjEALOUS | flGRABc_SHARElAYER , ifcIDgRABlAYER_8POOL5nEW ) ;
}

poolC::face_poolC_S::face_poolC_S( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :
finger( 0 ) ,
idFormat( 1 ) ,
flFormat( flPOOLfORMAT_NOTES ) ,
cRef( 1 ) ,
idListNameLath( 0 )
{
    _IO_
    putNegAM( *(countT*)&finger , FINGERnEG_POOLcfACE ) ;
}

/*1*/poolC::poolC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postNameP , const flagsT flagsP , const countT idStateSpaceP , const countT expCbDropMinP , const countT expCbDropMaxP , const countT* pczHintPreallocationP , countT idMemorySpaceP ) :/*1*/
batPoolCt
(
    tinP , idLineCtP , idiFileCtP , pbBitsCtP ,
    (
        tinP.tlsNewF( TUCK ) ,                                                                              //TLS:1     "poolC/batonCt/[postNameP]"
        thirdC::c_strcatIF
        (
            tinP ,
            thirdC::c_strcpyIF
            (
                tinP , tinP.pbF() , "poolC/batonCt/"                                                        /*TLS:1*/
            ) ,
            postNameP
        )
    ) ,
    ifcIDgRABlAYER_8POOL1cT , flBATONc_GRABBED | flBATONc_NOTjEALOUS , pb_batPoolCt , sizeof pb_batPoolCt
) ,
napFace
(
    tinP ,idLineCtP , idiFileCtP , pbBitsCtP ,
    (
        tinP.tlsNewF( 0x10 ) ,                                                                              //TLS:2     [idStateSpaceP]
        thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , idStateSpaceP ) ,                                      /*TLS:2*/
        tinP.tlsNewF( TUCK ) ,                                                                              //TLS:3     "poolC/face/[postNameP].[idStateSpaceP]"
        thirdC::c_strcatIF
        (
            tinP ,
            thirdC::c_strcatIF
            (
                tinP ,
                thirdC::c_strcatIF
                (
                    tinP ,
                    thirdC::c_strcpyIF
                    (
                        tinP , tinP.pbF() , "poolC/face/"                                                   /*TLS:3*/
                    ) ,
                    postNameP
                ) ,
                "."
            ) ,
            tinP.pbF( 2 )                                                                                   /*TLS:2*/
        )
    ) ,
    (
        !idStateSpaceP
            ? 0
            :
                (
                    ctFilesF( tinP , postNameP , idStateSpaceP ) ,
                    (const handleC*)*(fileC*)pbFileFace
                )
    ) ,
    sizeof( face_poolC_S ) , ifcOPENsHAREDmEMORYhOW_nCeO , flNAPKINc_null , - 1 , idMemorySpaceP
) ,
pNext
(
    (
        ctFaceF( tinP , idLineCtP , idiFileCtP , pbBitsCtP , idStateSpaceP ) ,
        tinP.tlsNewF( sizeof( flagsT ) ) ,                                                                  //TLS:4     [flagsThreadMode1]
        *(flagsT*)tinP.pbF() = tinP.flagsThreadMode1 ,                                                      /*TLS:4*/
        tinP.flagsThreadMode1 |= flTHREADmODE1_ALLOWsTOPwHILEgRABBING ,
        (poolC*)0
    )
) ,
flagsInstance( flPOOLiNSTANCE_null ) ,
napGuts
(
    tinP , idLineCtP , idiFileCtP , pbBitsCtP ,
    (
        tinP.tlsNewF( 0x10 ) ,                                                                              //TLS:5     "[osTid]"
        thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , tinP.osTid ) ,                                         /*TLS:5*/
        tinP.tlsNewF( 0x10 ) ,                                                                              //TLS:6     [this]
        thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , (countT)this ) ,                                       /*TLS:6*/
        tinP.tlsNewF( TUCK ) ,                                                                              //TLS:7     "poolC/guts/[postNameP].[this].[osTid]
        thirdC::c_strcatIF
        (
            tinP ,
            thirdC::c_strcatIF
            (
                tinP ,
                thirdC::c_strcatIF
                (
                    tinP ,
                    thirdC::c_strcatIF
                    (
                        tinP ,
                        thirdC::c_strcatIF
                        (
                            tinP ,
                            thirdC::c_strcpyIF
                            (
                                tinP , tinP.pbF() , "poolC/guts/"                                           /*TLS:7*/
                            ) ,
                            postNameP
                        ) ,
                        "."
                    ) ,
                    tinP.pbF( 2 )                                                                           /*TLS:6*/
                ) ,
                "."
            ) ,
            tinP.pbF( 3 )                                                                                   /*TLS:5*/
        )
    ) ,
    0 , sizeof( guts_poolC_S ) , ifcOPENsHAREDmEMORYhOW_nCeF //ALWAYS USES MEMORY SPACE OF THE CONSTRUCTING PROCESS
) ,
guts( *(guts_poolC_S*)(byteT*)napGuts ) ,
pSexLifoConstructed( 0 )
{
    _IO_
                                                    tinP.tlsDelF( countTC() ) ; //TLS:7
                                                    tinP.tlsDelF( countTC() ) ; //TLS:6
                                                    tinP.tlsDelF( countTC() ) ; //TLS:5
    flagsT saveThreadMode1 = *(flagsT*)tinP.pbF() ; tinP.tlsDelF( countTC() ) ; //TLS:4
                                                    tinP.tlsDelF( countTC() ) ; //TLS:3
                                                    tinP.tlsDelF( countTC() ) ; //TLS:2
                                                    tinP.tlsDelF( countTC() ) ; //TLS:1

    IFbEcAREFUL
    {
        FV( flTHREADmODE1 , saveThreadMode1 ) ;
        FV( flTHREADmODE1 , tinP.flagsThreadMode1 ) ;
        FV( flPOOLc , flagsP ) ;
        __( idMemorySpaceP && ( idMemorySpaceP < ifcIDmEMORYsPACE_min || idMemorySpaceP > ifcIDmEMORYsPACE_max ) ) ;
    }

    //U:: TO FIND A BUG
    {
        aptC& aptnu = aptListRootF() ;
        if( aptnu ) ;
    }

    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }

    //20170830@2027: ctFaceF WAS CALLED HERE.  MOVED TO EARLIER TO AVOID RECURSIVELY GRABBING GRABmEMORYsPACE

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // MAYBE RESET cRef
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

    if( F(flagsP) & flPOOLc_RESETcrEF && ((face_poolC_S*)(byteT*)napFace)->cRef != 1 ) //A:ASSUME: I AM NOT RACING WITH ANOTHER PROCESS TO ctFaceF()
    {
        CONoUTrAW3( " resetting poolC cRef to 1 from " , ((face_poolC_S*)(byteT*)napFace)->cRef , "\r\n" ) ;
        ((face_poolC_S*)(byteT*)napFace)->cRef = 1 ;
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // FORMAT napGuts
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    new( 0 , tinP , &napGuts ) guts_poolC_S( tinP , idLineCtP , idiFileCtP , pbBitsCtP , postNameP , flagsP , idStateSpaceP , expCbDropMinP , expCbDropMaxP , idMemorySpaceP ) ;
    napGuts.formattingIsDoneF( tinP ) ; //MUST BE DONE AFTER napFace IS FULLY CT SO THAT tinP.idDesire IS UNWOUND CORRECTLY

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // CREATE AND FORMAT REGISTRATION RECORD OR WAIT UNTIL ANOTHER poolC INSTANCE HAS DONE SO
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

    {   // *this IS REGISTERED EARLY AND DEREGISTERED LATE BECAUSE sexC CONSTRUCTORS AND DESTRUCTORS MUST REFER TO IT
        // THIS MEANS THAT poolC INSTANCES THAT ARE REGISTERED ARE NOT NECESSARILY FULLY CONSTRUCTED AND USEABLE
        homeS& home = homeS::homeIF() ;
        poolRegistrationS* pRegs = (poolRegistrationS*)home.pb_pPoolReg ;
        ZE( countT , offr ) ;

        // RECIPE
        // 
        // while( !done )
        //  grab array
        //  for each array element
        //   if formatted and name matches
        //    update
        //    set done
        //    break
        //  if !done
        //   for each array element
        //    if set cRef from 0 to 1
        //     format
        //     set done
        //     break
        // 
        //  ungrab array
        //  if !done
        //   nap

        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            for(;;)
            {
                ZE( boolT , bDone ) ;
                {
                    grabitC grabx( tinP , TAG( TAGiDnULL ) , (byteT*)&home.fliGrab , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_null , 0 , ifcIDgRABlAYER_9POOLlAYER1 ) ;

                    for( countT offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
                    {
                        grabitC grabx( tinP , TAG( TAGiDnULL ) , (byteT*)&pRegs[ offr ].flagsi , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_null , 0 , ifcIDgRABlAYER_9POOLlAYER2) ;
                        if( pRegs[ offr ].flagsi & fliPOOLrEGISTRATIONs_FORMATTED && !thirdC::c_strcmpIF( tinP , pRegs[ offr ].postPoolName , postNameP ) )
                        {
                            inc02AM( pRegs[ offr ].cRefPool ) ;
                            bDone = 1 ;        
                            break ;
                        }
                    }

                    if( !bDone ) for( countT offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
                    {
                        grabitC grabx( tinP , TAG( TAGiDnULL ) , (byteT*)&pRegs[ offr ].flagsi , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_null , 0 , ifcIDgRABlAYER_9POOLlAYER3 ) ;
                        if( !setIfZeAM( pRegs[ offr ].cRefPool , 1 ) )
                        {
                            pRegs[ offr ].resetF( tinP ) ;
                            thirdC::c_strcpyIF( tinP , pRegs[ offr ].postPoolName , postNameP ) ;
                            pRegs[ offr ].flagsi |= fliPOOLrEGISTRATIONs_FORMATTED ;
                            bDone = 1 ;        
                            break ;
                        }
                    }
                }
                if( bDone ) break ;

                etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)"poolC / registration / waiting for a free slot" , flTRACE_PARAMETERiSoStEXT ) ;
                ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
            }
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // EARLY CONSTRUCT ALL slotsC INSTANCES THAT I WANT
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

    {
        puseC puse( tinP , ifcIDpOOL_NONE ) ;
    
        //CONoUTrAW( " poolC/+:  " ) ;
        //CONoUTrAW( guts.postName ) ;
        //CONoUTrAW( " *********************************************************************************************************\r\n" ) ;
    
        OStEXT(   ostoNameGroup , TUCK << 2 )
        OStEXTA(  ostoNameGroup , guts.postName ) ;
        OStEXTAK( ostoNameGroup , ".poolC" ) ;
                
        boolT bBrowse =  F(guts.flagsCt) & flPOOLc_BROWSE ;

        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
        // FOR PERSISTENT INSTANCES, FOR EACH expCbDrop, SET A BIT IF A BACKING FILE EXISTS
        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    
        ZE( countT , bitsStateExists ) ;
        if( idStateSpaceP )
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
                OStEXTA(  ostoLike , postNameP ) ;
                OStEXTAK( ostoLike , ".poolC.slots.*.data.*" ) ;
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

                        while( !bOk )
                        {
                            handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                            thirdC::dosOpenIF( tinP , tinP.pEther , hFile , countTC() , postName , ifcOPENaCCESS_R , ifcOPENsHARE_WR , flOPENdETAILS_DOnOTvALIDATE , ifcOPENhOW_nFeO , flFILEaTTR_null , 0 , 1 ) ;
                            if( POOP ) break ;

                            if( !hFile ) { BLAMMO ; } //SHOULD BE IMPOSSIBLE

                            infoFileS info( tinP ) ;
                            infoFileS* pInfo = &info ;
                            thirdC::dosQueryFileInfoIF( tinP , pInfo , hFile ) ;
                            if( POOP ) break ;

                            if( info.cbUsed || info.cbUsedHigh ) bOk = 1 ;

                            else { CONoUTrAW3( "thread " , tinP.monitor.idThread , " uh ohh!\r\n" ) ; } //U::
                        }
                    }

                    if( !bOk )
                    {
                        POOPIE ;
                        thirdC::dosDeleteIF( tinP , postName , 1 ) ;
                        continue ;
                    }

                    osTextT postBefore[] = ".poolC.slots." ;
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

        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
        // EARLY CONSTRUCT THE slotsC INSTANCE FOR EACH expCbDrop THAT I WANT
        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    
        if( bBrowse || bitsStateExists )
        {
            for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
            {
                if( bBrowse || bitsStateExists >> offs & 1 )
                {
                    OStEXT(   ostoName , TUCK << 2 )
                    OStEXTA(  ostoName , ostoNameGroup ) ;
                    OStEXTAK( ostoName , ".slots." ) ;
                    OStEXTCF( ostoName , offs , '0' ) ;
    
                    //CONoUTrAW( ostoName ) ;
                    //CONoUTrAW( "\r\n" ) ;
    
                    const countT expCbDrop   = offs ;
    
                    guts.pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
                    if( guts.ppSlots[ offs ] ) { BLAMMO ; }
                    else
                    {
                        flagsT flagsc = bBrowse ? flSLOTSc_BROWSE : flSLOTSc_null ;
                        if( F(guts.flagsCt) & flPOOLc_READoNLY ) flagsc |= flSLOTSc_READoNLY ;
                        if( F(guts.flagsCt) & flPOOLc_NOTES    ) flagsc |= flSLOTSc_NOTES    ;
        
                        guts.ppSlots[ offs ] = new( 0 , tinP , guts.pbza + offs * sizeof( slotsC ) , sizeof( slotsC ) ) slotsC( tinP , TAG( TAGiDnULL ) , LF , ostoName , guts.cBitsExpCbDrop , expCbDrop , flagsc , guts.idStateSpace , guts.idMemorySpace , this ) ;
        
                        if( !( F(guts.flagsCt) & ( flPOOLc_MAKEaLL | flPOOLc_KEEPeMPTIES ) ) && !*guts.ppSlots[ offs ] ) { DELzOMBIE( guts.ppSlots[ offs ] ) ; }
                    }
                    guts.pGrabNewElt[ offs ].ungrabF( tinP ) ;
                }
            }
        }

        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
        // EARLY CONSTRUCT THE slotsC INSTANCE FOR EACH HINT expCbDrop
        // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    
        if( pczHintPreallocationP )
        {
            for( ; *pczHintPreallocationP ; pczHintPreallocationP ++ )
            {
                boolT  bAll            = *pczHintPreallocationP       & BM_HIGH2        ;           //U:: OBEY THIS
                countT expCbDropWanted = *pczHintPreallocationP       & ( 1 << SB ) - 1 ;
                countT expSlotsWanted  = *pczHintPreallocationP >> SB & ( 1 << SB ) - 1 ;

                if( guts.expCbDropMin <= expCbDropWanted && expCbDropWanted <= guts.expCbDropMax )
                {
                    countT offs = expCbDropWanted ;

                    OStEXT(   ostoName , TUCK << 2 )
                    OStEXTA(  ostoName , ostoNameGroup ) ;
                    OStEXTAK( ostoName , ".slots." ) ;
                    OStEXTCF( ostoName , offs , '0' ) ;
    
                    //CONoUTrAW( ostoName ) ;
                    //CONoUTrAW( "\r\n" ) ;
    
                    guts.pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;

                    if( !guts.ppSlots[ offs ] )
                    {
                        flagsT flagsc = flSLOTSc_null ;
                        if( F(guts.flagsCt) & flPOOLc_READoNLY ) flagsc |= flSLOTSc_READoNLY ;
                        if( F(guts.flagsCt) & flPOOLc_NOTES    ) flagsc |= flSLOTSc_NOTES    ;
        
                        guts.ppSlots[ offs ] = new( 0 , tinP , guts.pbza + offs * sizeof( slotsC ) , sizeof( slotsC ) ) slotsC( tinP , TAG( TAGiDnULL ) , LF , ostoName , guts.cBitsExpCbDrop , offs , flagsc , guts.idStateSpace , guts.idMemorySpace , this ) ;
                    }

                    guts.ppSlots[ offs ]->makeSexF( tinP , expSlotsWanted ) ;

                    guts.pGrabNewElt[ offs ].ungrabF( tinP ) ;
                }
            }
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // LAUNCH tmPoolFlushF IF NOT YET LAUNCHED
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;

    pNext = processGlobal1I._poolC_pPool ;
            processGlobal1I._poolC_pPool = this ;

    if( idStateSpaceP && ! processGlobal1I._poolC_cBacked ++ )
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        tinP.pEther->osThreadF( TaRG1( tmPoolFlushF ) ) ;
    }

    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // REGISTER MYSELF AS AN ADAM/HOME TEMP/PERM (OR SCRATCH) INSTANCE
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

         if( !tinP.pAdamGlobal1->pPoolAdamTemp         ) tinP.pPoolUse = tinP.pAdamGlobal1->pPoolAdamTemp = this ; //A:ASSUME: THE ADAM TEMP POOL IS CT WOTH
    else if( this == (poolC*)tinP.pAdamGlobal1->pbzpht )                 tinP.pAdamGlobal1->pPoolHomeTemp = this ;
    else if( this == (poolC*)tinP.pAdamGlobal1->pbzpsc )                 tinP.pAdamGlobal1->pPoolScratch  = this ;
    else if( this == (poolC*)tinP.pAdamGlobal1->pbzpap )                 tinP.pAdamGlobal1->pPoolAdamPerm = this ;
    else if( this == (poolC*)tinP.pAdamGlobal1->pbzphp )                 tinP.pAdamGlobal1->pPoolHomePerm = this ;

    batPoolCt.ungrabF( tinP ) ;

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // MAYBE RESET ALL INDEX BITS
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

    tinP.flagsThreadMode1 = saveThreadMode1 ;

    if( F(flagsP) & flPOOLc_RESETiNDEXbITS )
    {
        puseC puseMe( tinP , *this ) ;

        handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
        countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , 0 } ;
        listC::openIF( tinP , hList , pczName , flLISToPEN_IFeXISTS ) ;

        if( ~hList ) listC::resetIndexBitsIF( tinP , hList ) ;
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------
    // MAYBE INDEX ALL OF MY DATUM VALUES
    // ---------------------------------------------------------------------------------------------------------------------------------------------------------------

    // INDEX IFF NEW INTO MEMORY... (OPTIMIZATION:)... UNLESS I FORMATTED, WHICH IMPLIES THAT THERE IS NO CONTENT YET

    if
    (
           !( F(flagsInstance) & flPOOLiNSTANCE_NAPfACEfORMATTEDbYmE                 )                                  // I DIDN'T FORMAT MY BACKING IMAGE                         (DO NOTHING IF I FORMATTED MY BACKING IMAGE BECAUSE THERE IS NO DATA TO INDEX)
        && !( F(napFace.flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED )                                  // MY BACKING IMAGE DIDN'T ALREADY EXIST                    (DO NOTHING IF BACKING DATA ALREADY EXISTED BECAUSE ITS CREATOR PRESUMABLY INDEXED IT ALL)
        && !( F(flagsP) & flPOOLc_DOnOTiNDEXdURINGcT                                 )                                  // MY CALLER DIDN'T FORBID ME TO INDEX MYSELF               (DO NOTHING IF I AM TOLD TO DO NOTHING)
    )
    {                                                                                                                   // INDEX ALL OF MY DATUM VALUES
        THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )
        {
            puseC puseMe( tinP , *this ) ;

            handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
            countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , 0 } ;
            listC::openIF( tinP , hList , pczName , flLISToPEN_IFeXISTS ) ;

            if( ~hList )
            {
                //CONoUTrAW( "poolC / indexing list root/application of \"" ) ;
                //CONoUTrAW( postNameP ) ;
                //CONoUTrAW( "\"\r\n" ) ;

                listC::indexIF( tinP , hList ) ;
            }
        }
        THREADmODE2rESTORE
    }

    //CONoUTrAW( " poolC/-:  " ) ;
    //CONoUTrAW( guts.postName ) ;
    //CONoUTrAW( " *********************************************************************************************************\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2003.poolc.poolc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2004.poolc.newf BEGIN
#define DDNAME       "3func.360e2004.poolc.newf"
#define DDNUMB      (countT)0x360e2004
#define IDFILE      (countT)0x13f8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , byteT*& pbP , const countT cbP , const flagsT flagsP )/*1*/
{
    poopC poop ;
    SCOOP ;  // THIS IS INTENDED TO PREVENT AMBIENT IMPOTENCE FROM AFFECTING ME ; WO REASON IS TO ENSURE THAT C++ CALLS TO OVERLOADED OPERATOR new RETURN A NONZE POINTER IF POSSIBLE ; WHEN AN OVERLOADD new RETURNS 0, C++ (WATCOM) JUMPS IMMEDIATELY BEYOND THE ASSOCIATED CT'OR CALL AND CALLS DT'OR FOR TEMPORARIES (bitsC) THAT WERE NEVER CT'D ; THE ROOT PROBLEM HERE IS THAT THE COMPILER DOES NOT GENERATE CORRECT CODE; THE GENERATED CODE SHOULD JUMP BEYOND THE DT'OR CALLS FOR THE TEMPORARIES

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( ISnULLjpOINTER( pbP ) ) ;
        FV( flPOOLcnEW , flagsP ) ;
        if( POOP ) return ;
    }

    {
        _IO_

        //    //U:: 20180208@0638: TO ELIMINATE ALL USE OF poolC BY booksC AND bookC
        //    if( thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 )
        //    {
        //        BLAMMOiFcALLEDbY( "booksC" )
        //        BLAMMOiFcALLEDbY( "bookC" )
        //    }

        //if( tinP.pc Utility[ 0 ] ) //TO FIND A BUG
        //{
        //    CONoUTrAW3( "\r\npoolC::newF + [cbP]: " , cbP , "" ) ;
        //}

        if( pbP ) // IF I AM TO DIVERT THIS REQUEST TO A SPECIFIED jotC INSTANCE RATHER THAN ALLOCATE FROM MY sexC INSTANCES
        {
            jotC&  juse  = *tinP.ppJot[ (countT)pbP - JrEQUEST_min ] ;
            countT idJot = juse.writeF( tinP , 0 , cbP ) ;
            pbP          = (byteT*)idJot ;
        }
        else if( F(tinP.flagsThreadMode3) & flTHREADmODE3_POOLaLLOCATEfROMhEAP ) pbP = processGlobal3I.heap.newF( tinP , idLineP , idiFileP , cbP ) ;
        else
        {
            if( F(guts.flagsCt) & flPOOLc_READoNLY ) { BLAMMO ; }

            if( this != tinP.pAdamGlobal1->pPoolAdamTemp && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ) { BLAMMO ; }
            if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }

            countT offs = guts.expCbDropMin ;
            countT cbuMax = 1 << offs ;
            while( cbuMax && cbP > cbuMax )
            {
                offs ++ ;
                cbuMax <<= 1 ;
            }

            if( cbuMax && offs <= guts.expCbDropMax )
            {
                if( !guts.ppSlots[ offs ] )
                {
                    guts.pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
                    if( !guts.ppSlots[ offs ] )
                    {
                        OStEXT(   ostoName , TUCK << 2 )
                        OStEXTA(  ostoName , guts.postName ) ;
                        OStEXTAK( ostoName , ".poolC" ) ;
                        OStEXTAK( ostoName , ".slots." ) ;
                        OStEXTCF( ostoName , offs , '0' ) ;

                        flagsT flagsc = flSLOTSc_null ;
                        if( F(guts.flagsCt) & flPOOLc_READoNLY ) flagsc |= flSLOTSc_READoNLY ;
                        if( F(guts.flagsCt) & flPOOLc_NOTES    ) flagsc |= flSLOTSc_NOTES    ;
                
                        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                        guts.ppSlots[ offs ] = new( 0 , tinP , guts.pbza + offs * sizeof( slotsC ) , sizeof( slotsC ) ) slotsC( tinP , TAG( TAGiDnULL ) , idLineP , idiFileP , ostoName , guts.cBitsExpCbDrop , offs , flagsc , guts.idStateSpace , guts.idMemorySpace , this ) ;
                        THREADmODE1rESTORE
                    }
                    guts.pGrabNewElt[ offs ].ungrabF( tinP ) ;
                }

                flagsT flagsSlots = flSLOTScnEW_null ;
                if( F(flagsP) & flPOOLcnEW_DOnOTcTsEXc ) flagsSlots |= flSLOTScnEW_DOnOTcTsEXc ;
                if( F(flagsP) & flPOOLcnEW_DOnOTbLOCK  ) flagsSlots |= flSLOTScnEW_DOnOTbLOCK  ;

                //if( offs == 0x18 ) etherC::etRockIF( tinP ).traceF( tinP , T("++++++++ new") ) ; //U::20140808@1936: TO FIND A BUG

                THREADmODE4oN( flTHREADmODE4_DOnOTtESTdROPhEADERS )

                pbP = guts.ppSlots[ offs ]->newF( tinP , idLineP , idiFileP , flagsSlots ) ;

                dropNoteS* pDropNote = guts.ppSlots[ offs ]->pDropNoteF( tinP , pbP ) ;

                if( pDropNote ) putNegAM( pDropNote->finger , FINGERnEG_dropNoteSpoolC1 ) ;

                countT& dropHeader = ((countT*)pbP)[ - 1 ] ;

                BLAMMOiFcANNOTsHIFTlEFT( dropHeader , guts.cBitsExpCbDrop ) ;

                dropHeader = dropHeader << guts.cBitsExpCbDrop | offs - guts.expCbDropMin ;

                if( pDropNote )
                {
                    pDropNote->dropHeaderCopy = dropHeader ;
                    putNegAM( pDropNote->finger , FINGERnEG_dropNoteSpoolC2 ) ;
                }

                THREADmODE4rESTORE

                if( !pbP && !( F(flagsP) & flPOOLcnEW_DOnOTbLOCK ) )
                {
                    __( cbP ) ;
                    __1
                }
            }
        }

        //if( tinP.pc Utility[ 0 ] ) //TO FIND A BUG
        //{
        //    CONoUTrAW3( "\r\npoolC::newF - [cbP]: " , cbP , "" ) ;
        //    if( cbP == 0x241b0 )
        //    {
        //        static countT idInLath ;
        //        countT idIn = 1 + incv02AM( idInLath ) ;
        //
        //        if( idIn == TUCK )
        //        {
        //            countT foo = 2 ;
        //        }
        //    }
        //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2004.poolc.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2005.poolc.operator_call BEGIN
#define DDNAME       "3func.360e2005.poolc.operator_call"
#define DDNUMB      (countT)0x360e2005
#define IDFILE      (countT)0x13f9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::operator ()( tinS& tinP , byteT*& pbP )/*1*/
{
    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #5 HIGHEST FREQUENCY OF CALLS
    //_IO_

    //I CAN BE CALLED WHEN this IS NULL, AND I MUST BEHAVE OK

    //20201106@1436: WITHOUT ANALYSIS, CHANGED "< pbP" to "<= pbP"
    if( processGlobal0I.pbHeap <= pbP && pbP < processGlobal0I.pbHeapEnd ) processGlobal3I.heap.delF( tinP , pbP ) ;

    if( pbP )
    {
        countT& dropHeader = ((countT*)pbP)[ - 1 ] ;
        countT mask = ( 1 << guts.cBitsExpCbDrop ) - 1 ;
        countT offs = guts.expCbDropMin + ( dropHeader & mask ) ;

        if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_POOLdELtRYhARDERaNDtRACE ) )
        {
            countT c_this = (countT)this ;
            if( c_this && F(guts.flagsCt) & flPOOLc_READoNLY ) { BLAMMO ; }
            if( !guts.ppSlots[ offs ] ) { BLAMMO ; }
            //if( offs == 0x18 ) etherC::etRockIF( tinP ).traceF( tinP , T("-------- DELETE") ) ; //U::20140808@1936: TO FIND A BUG

            (*guts.ppSlots[ offs ])( tinP , pbP ) ;
        }
        else
        {
            etherC* pEtRock = &etherC::etRockIF( tinP ) ;
            if( pEtRock )
            {
                OStEXT( ostoSay , TUCK << 0 ) ;
                OStEXTA( ostoSay , "poolC::operator (): trying harder" ) ;

                pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
            }

            ZE( countT , offsTry ) ;
            for( offsTry = 0 ; offsTry < CsLOTsIZESmAX ; offsTry ++ )
            {
                if( guts.ppSlots[ offsTry ] )
                {
                    (*guts.ppSlots[ offsTry ])( tinP , pbP ) ;
                    if( !pbP ) break ;
                }
            }

            if( pEtRock )
            {
                OStEXT( ostoSay , TUCK << 1 ) ;
                OStEXTA( ostoSay , !pbP ? "poolC::operator (): trying harder succeeded [cBitsExpCbDrop,expCbDropMin,dropHeader,mask,offs,offsTry]:    " : "poolC::operator (): trying harder failed [cBitsExpCbDrop,expCbDropMin,dropHeader,mask,offs]:    " ) ;
                OStEXTC(  ostoSay , guts.cBitsExpCbDrop , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , guts.expCbDropMin , 0 ) ;
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

            if( !pbP && offs - offsTry ) { BLAMMOiD( offs - offsTry ) ; }
        }

        if( pbP ) { BLAMMO ; }
    }
}


//U:: OBSOLETED BY ADDITION OF DROP HEADER ; THIS WAS AT THE END OF THE DEF
#if defined( NEVERdEFINED )
    for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
    {
        if( guts.ppSlots[ offs ] )
        {
            (*guts.ppSlots[ offs ])( tinP , pbP ) ;
            if( !pbP )
            {
                //if( !*guts.ppSlots[ offs ] ) { DELzOMBIE( guts.ppSlots[ offs ] ) ; }
                break ;
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2005.poolc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2006.poolc.operator_not BEGIN
#define DDNAME       "3func.360e2006.poolc.operator_not"
#define DDNUMB      (countT)0x360e2006
#define IDFILE      (countT)0x13fa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/boolT poolC::operator !( voidT ) const/*1*/
{
    TINSL
    _IO_
    boolT bEmpty = 1 ;
    for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
    {
        if( guts.ppSlots[ offs ] )
        {
            bEmpty = 0 ;
            break ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2006.poolc.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2007.poolc.pdropnotef BEGIN
#define DDNAME       "3func.360e2007.poolc.pdropnotef"
#define DDNUMB      (countT)0x360e2007
#define IDFILE      (countT)0x13fb


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

    /*1*/dropNoteS* poolC::pDropNoteF( tinS& tinP , const byteT* const pbP )/*1*/
    {
        _IO_
        ZE( dropNoteS* , pNote ) ;
        for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
        {
            if( guts.ppSlots[ offs ] )
            {
                pNote = (*guts.ppSlots[ offs ]).pDropNoteF( tinP , pbP ) ;
                if( pNote ) break ;
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2007.poolc.pdropnotef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2008.poolc.operator_element BEGIN
#define DDNAME       "3func.360e2008.poolc.operator_element"
#define DDNUMB      (countT)0x360e2008
#define IDFILE      (countT)0x13fc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

// IF sexC DATA STORES ARE NESTED THEN pbP MIGHT EXIST WITHIN MULTIPLE slotsC INSTANCES
// IF SO, THEN I RETURN THE idApt OF THE INSTANCE THAT HAS THE SMALLEST expCbDrop SIZE

/*1*/countT poolC::operator []( const byteT* pbP )/*1*/
{
    TINSL
    _IO_
    ZE( countT , idApt ) ;
    for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
    {
        if( guts.ppSlots[ offs ] )
        {
            countT offApt = (*guts.ppSlots[ offs ])[ pbP ] ;
            if( offApt != - 1 )
            {
                __( !offApt && !offs ) ; //SHOULD BE IMPOSSIBLE SINCE EXP CBSLOT + EXP SLOT IS ALWAYS >= EXP ALLOCATION GRAIN (IMPOSED BY slotsC)

                idApt = offApt << guts.cBitsExpCbDrop | ( offs - guts.expCbDropMin ) ;

                //__( idApt == - 1 ) ; //TO FIND A BUG ; SHOULD BE IMPOSSIBLE

                //if( tinP.pc Utility[ 0 ] )
                //{
                //    OStEXT(   ostoSay , TUCK << 1 ) ;
                //    OStEXTAK( ostoSay , "pointer " ) ;
                //    OStEXTC(  ostoSay , pbP , '0' ) ;
                //    OStEXTAK( ostoSay , " is apt " ) ;
                //    OStEXTC(  ostoSay , idApt , '0' ) ;
                //    OStEXTAK( ostoSay , " which is in slots at offset " ) ;
                //    OStEXTC(  ostoSay , offs , 0 ) ;
                //    OStEXTAK( ostoSay , " of pool named \"" ) ;
                //    OStEXTA(  ostoSay , guts.postName ) ;
                //    OStEXTAK( ostoSay , "\"\r\n" ) ;
                //    CONoUTrAW( ostoSay ) ;
                //}

                break ;
            }
        }
    }
    return idApt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2008.poolc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2009.poolc.operator_element BEGIN
#define DDNAME       "3func.360e2009.poolc.operator_element"
#define DDNUMB      (countT)0x360e2009
#define IDFILE      (countT)0x13fd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/byteT* poolC::operator []( const countT idAptP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( idAptP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    if( F(tinP.flagsThreadMode2) & flTHREADmODE2_DISALLOWpUSE ) { BLAMMO ; }
    const countT offs = guts.expCbDropMin + ( idAptP & ( 1 << guts.cBitsExpCbDrop ) - 1 ) ;     //U::O: STORE "( 1 << guts.cBitsExpCbDrop ) - 1" as a const countT

    if( !guts.ppSlots[ offs ] )
    {
        guts.pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !guts.ppSlots[ offs ] )
        {
            OStEXT(   ostoName , TUCK << 2 )
            OStEXTA(  ostoName , guts.postName ) ;
            OStEXTAK( ostoName , ".poolC" ) ;
            OStEXTAK( ostoName , ".slots." ) ;
            OStEXTCF( ostoName , offs , '0' ) ;

            flagsT flagsc = flSLOTSc_null ;
            if( F(guts.flagsCt) & flPOOLc_READoNLY ) flagsc |= flSLOTSc_READoNLY ;
            if( F(guts.flagsCt) & flPOOLc_NOTES    ) flagsc |= flSLOTSc_NOTES    ;
        
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            guts.ppSlots[ offs ] = new( 0 , tinP , guts.pbza + offs * sizeof( slotsC ) , sizeof( slotsC ) ) slotsC( tinP , TAG( TAGiDnULL ) , LF , ostoName , guts.cBitsExpCbDrop , offs , flagsc , guts.idStateSpace , guts.idMemorySpace , this ) ;
            THREADmODE1rESTORE
        }
        guts.pGrabNewElt[ offs ].ungrabF( tinP ) ;
    }

    __( !guts.ppSlots[ offs ] ) ;

    byteT* pbRC = (*guts.ppSlots[ offs ])[ ( idAptP & ~( BM_HIGH | BM_HIGH2 ) ) >> guts.cBitsExpCbDrop ] ;  //A:ASSUME: countT IS 02 BITS

    //if( tinP.pc Utility[ 0 ] )
    //{
    //    OStEXT(   ostoSay , TUCK << 1 ) ;
    //    OStEXTAK( ostoSay , "apt " ) ;
    //    OStEXTC(  ostoSay , idAptP , '0' ) ;
    //    OStEXTAK( ostoSay , " is pointer " ) ;
    //    OStEXTC(  ostoSay , pbRC , '0' ) ;
    //    OStEXTAK( ostoSay , " which is in slots at offset " ) ;
    //    OStEXTC(  ostoSay , offs , 0 ) ;
    //    OStEXTAK( ostoSay , " of pool named \"" ) ;
    //    OStEXTA(  ostoSay , guts.postName ) ;
    //    OStEXTAK( ostoSay , "\"\r\n" ) ;
    //    CONoUTrAW( ostoSay ) ;
    //}

    return pbRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2009.poolc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200b.poolc.postnamef BEGIN
#define DDNAME       "3func.360e200b.poolc.postnamef"
#define DDNUMB      (countT)0x360e200b
#define IDFILE      (countT)0x13fe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/const osTextT* poolC::postNameF( tinS& tinP ) const/*1*/
{
    return guts.postName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200b.poolc.postnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200c.poolc.walkf BEGIN
#define DDNAME       "3func.360e200c.poolc.walkf"
#define DDNUMB      (countT)0x360e200c
#define IDFILE      (countT)0x13ff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::walkF( tinS& tinP , slotsWalkCBFT pSlotsWalkCBFP , countT& cArgP )/*1*/
{
    _IO_
    if( pSlotsWalkCBFP ) for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
    {
        if( guts.ppSlots[ offs ] ) guts.ppSlots[ offs ]->walkF( tinP , pSlotsWalkCBFP , cArgP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200c.poolc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200e.poolc.ctfacef BEGIN
#define DDNAME       "3func.360e200e.poolc.ctfacef"
#define DDNUMB      (countT)0x360e200e
#define IDFILE      (countT)0x1400


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT poolC::ctFaceF( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idStateSpaceP )/*1*/
{
    _IO_
    ZE( boolT , bFormattedByMe ) ;
    if( !(byteT*)napFace )
    {
        __1 ;
    }
    else
    {
        bFormattedByMe = F(napFace.flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED
            ? 0                                                                                         //RAM EXISTED: NO
            : !idStateSpaceP
                ? 1                                                                                     //STATELESS: YES
                : ((fileC*)pbFileFace)->idOpenResultF( tinP  ) == ifcOPENrESULT_EXISTED
                    ? 0                                                                                 //STATE EXISTED: NO
                    : 1                                                                                 //STATE DID NOT EXIST: YES
        ;

        if( bFormattedByMe )
        {
            flagsInstance |= flPOOLiNSTANCE_NAPfACEfORMATTEDbYmE ;

            THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc ) ;
            {
                PUSHtINaRGS
                new( 0 , tinP , &napFace ) face_poolC_S( tinP , idLineCtP , idiFileCtP , pbBitsCtP ) ;
                POPtINaRGS
            }
            THREADmODE2rESTORE
        }
        else inc02AM( ((face_poolC_S*)(byteT*)napFace)->cRef ) ;

        if( !( F(napFace.flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) ) napFace.formattingIsDoneF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200e.poolc.ctfacef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200f.poolc.ctfilesf BEGIN
#define DDNAME       "3func.360e200f.poolc.ctfilesf"
#define DDNUMB      (countT)0x360e200f
#define IDFILE      (countT)0x1401


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT poolC::ctFilesF( tinS& tinP , const osTextT* const postNameP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    TN( tNameFace , "" ) ; tNameFace = 

        T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/")
        +TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")
        +T(postNameP)
        +T(".poolC.face")

    ;

    if
    (
        !thirdC::c_strcmpIF( tinP , postNameP , "scratch" )
        &&
        (
            tinP.pAdamGlobal1->idAdam == ifcIDaDAM_PREPARElISTS
            ||
            tinP.pAdamGlobal1->idCell == 1
        )
    )
    {
        //A:ASSUME: IF idCell == 1 THEN AM STILL ALONE UNTIL AFTER THIS BLOCK IS EXECUTED (I.E. NO RACE WITH CELL 2 GETTING HERE BEFORE CELL 1)

        //CONoUTrAW( "zapping scratch pool files\r\n" ) ;
        for( countT idm = ifcIDmEMORYsPACE_min ; idm <= ifcIDmEMORYsPACE_max ; idm ++ )
        {
            if( idm >= ifcIDmEMORYsPACE_RESERVEDmIN && idm <= ifcIDmEMORYsPACE_RESERVEDmAX ) continue ;

            soulC soul1m( tinP , TAG( TAGiDnULL ) ) ;
            tinP.pEther->boxMenuF( tinP , soul1m , T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(idm,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/")+TF2(ifcIDsTATEsPACE_SCRATCH,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/scratch.poolC.*") ) ;
            FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
            {
                //CONoUTrAW( " \"" ) ;
                //CONoUTrAW( T(psttc1) ) ;
                //CONoUTrAW( "\" ..." ) ;
                tinP.pEther->boxZapF( tinP , psttc1 ) ;
                //CONoUTrAW( " done\r\n" ) ;
            }
            FORsTRINGSiNsPANNEDcOMBINEDtAIL1
        }
        //CONoUTrAW( "all scratch pool files zapped\r\n" ) ;
    }

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    new( 0 , tinP , pbFileFace , sizeof pbFileFace ) fileC( tinP , (strokeS*)tNameFace , ifcOPENaCCESS_WR , ifcOPENsHARE_WR , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_DOnOTrEGISTER | flOPENdETAILS_LOCrANDOM | flOPENdETAILS_NOcACHE , ifcOPENhOW_nCeO ) ;
    THREADmODE1rESTORE

    flagsInstance |= flPOOLiNSTANCE_FACEcONSTRUCTED ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e200f.poolc.ctfilesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2010.poolc.reportf BEGIN
#define DDNAME       "3func.360e2010.poolc.reportf"
#define DDNUMB      (countT)0x360e2010
#define IDFILE      (countT)0x1402


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
U::this needs more development
 it is unuseably slow
*/

/**/

voidT slotsWalkCBF( tinS& tinP , countT& cArgP , const sexHeadS* pHeadP , const byteT* pbBitsOwnedP , const dropNoteS* pNotesP , const byteT* pbDataP )
{
    if( tinP.pEther && cArgP )
    {
        soulC& soulRptP  = *(soulC*)cArgP ;
        etherC& etThread = *tinP.pEther ;

        ZE( strokeS* , pstte ) ;
        {
            TN( tEntry , "" ) ; tEntry = T(

                "\r\n"
                "\r\n"
                "sexHeadS:\r\n"
                "\r\n"
                "cRef       : ")+TF2(pHeadP->cRef,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "expCbDrop  : ")+TF2(pHeadP->expCbDrop,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "expSlots   : ")+TF2(pHeadP->expSlots,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "postName   : \"")+T(pHeadP->postName)+T("\"\r\n"
                "flagsCtCopy:")+TF2(pHeadP->flagsCtCopy,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "cSlotsAvoidLo:")+TF2(pHeadP->cSlotsAvoidLo,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "cSlotsAvoidHi" ":")+TF2(pHeadP->cSlotsAvoidHi,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n"
                "owned bits: "

            ) ;

            etThread.strMakeF( tinP , LF , pstte , tEntry , TICK ) ; ___( pstte ) ; //U::TO FIND A BUG
            //U::etThread.strMakeF( tinP , LF , pstte , tEntry , TUCK + ( TUCK << 1 ) * ( 1 << pHeadP->expSlots ) ) ; ___( pstte ) ;                 //A:1
        }

        countT cBits = 1 << pHeadP->expSlots ;
        TN( tcr , "\r\n" ) ;
        TN( tAt , "@" ) ;
        TN( tDash , "-" ) ;
        ZE( countT , cFound ) ;
        for( countT offb = 0 ; offb < cBits ; offb ++ )
        {
            countT offByte = offb / SB ;
            countT offBit  = offb % SB ;

            if( pbBitsOwnedP[ offByte ] >> offBit & 1 )
            {
                cFound ++ ;
                etThread.strFuseF( tinP , pstte , tAt ) ;                                                                           //A:1
            }
            else etThread.strFuseF( tinP , pstte , tDash ) ;                                                                        //A:1
        }

        if( !cFound ) etThread.strFuseF( tinP , pstte , tcr ) ;
        else
        {
            etThread.strFuseF( tinP , pstte , T("\r\n\r\nvalues:\r\noffset-- ptu cbUsed cUsed-\r\n") ) ;

            TN( tq , "\"" ) ;
            TN( tbq , " \"" ) ;
            TN( tb , " " ) ;
            TN( tqcr , "\"\r\n" ) ;
            TN( tWhite , TbLACK ) ;
            countT cbSlot = 1 << pHeadP->expCbDrop ;
            for( countT offb = 0 ; offb < cBits ; offb ++ )
            {
                countT offByte = offb / SB ;
                countT offBit  = offb % SB ;

                if( pbBitsOwnedP[ offByte ] >> offBit & 1 )
                {
                    const strokeS* psttc = (const strokeS*)( pbDataP + offb * cbSlot ) ;
                    if( ISsTRING( psttc ) )
                    {
                        countT csttOriginal = psttc->idAdam ;
                        countT cbOriginal = ( CSpREFIX + csttOriginal ) * sizeof( strokeS ) ;
                        countT ptUsed = ( cbOriginal << 8 ) / cbSlot ;

                        ZE( strokeS* , psttLine ) ;
                        etThread.strReplaceAnyF( tinP , psttLine , psttc , tWhite , tb , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( psttLine ) ;

                        if( psttLine->idAdam > TUCK )
                        {
                            strokeS* psttd = psttLine ;
                                             psttLine = 0 ;

                            countT idf = 1 ;
                            countT idl = TUCK ;
                            etThread.strSubstringF( tinP , psttLine , idf , idl , psttd ) ; ___( psttLine ) ;
                            etThread.delF( tinP , psttd ) ;
                        }

                        etThread.strFuseF( tinP , pstte , TF3(offb,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,8)+tb+TF3(ptUsed,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,3)+tb+TF3(cbOriginal,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,6)+tb+TF3(csttOriginal,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,6)+tbq ) ;
                        etThread.strFuseF( tinP , pstte , psttLine ) ;
                        etThread.strFuseF( tinP , pstte , tqcr ) ;
                        etThread.delF( tinP , psttLine ) ;

                        etThread.strDumpStrokesIF( tinP , psttLine , psttc ) ; ___( psttLine ) ;
                        etThread.strFuseF( tinP , pstte , tq ) ;
                        etThread.strFuseF( tinP , pstte , psttLine ) ;
                        etThread.strFuseF( tinP , pstte , tqcr ) ;
                        etThread.delF( tinP , psttLine ) ;
                    }
                    else
                    {
                        ZE( strokeS* , psttLine ) ;
                        etThread.strDumpIF( tinP , psttLine , pbDataP + offb * cbSlot , cbSlot , 0x10 , 4 , '.' ) ; ___( psttLine ) ;
                        etThread.strFuseF( tinP , pstte , psttLine ) ;
                        etThread.delF( tinP , psttLine ) ;
                    }
                }
            }
        }

        etThread.strFuseF( tinP , soulRptP , pstte ) ;
        etThread.delF( tinP , pstte ) ;
    }
}

/*1*/voidT poolC::reportF( tinS& tinP , soulC& soulP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ; // *tinP.pEther RATHER THAN A  etherC& PARAMETER IS USED SO THAT IN THE FUTURE I CAN DO SOMETHING USEFUL WHEN NO INSTANCE OF etherC EXISTS
        if( POOP ) return ;
    }

    _IO_
    if( tinP.pEther )
    {
        countT cArg = (countT)&soulP ;
        walkF( tinP , slotsWalkCBF , cArg ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2010.poolc.reportf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2013.poolc.flushf BEGIN
#define DDNAME       "3func.360e2013.poolc.flushf"
#define DDNUMB      (countT)0x360e2013
#define IDFILE      (countT)0x1403


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::flushF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( guts.idStateSpace )
    {
        for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
        {
            if( guts.ppSlots[ offs ] ) guts.ppSlots[ offs ]->flushF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2013.poolc.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2014.poolc.reportf BEGIN
#define DDNAME       "3func.360e2014.poolc.reportf"
#define DDNUMB      (countT)0x360e2014
#define IDFILE      (countT)0x1404


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

voidT slotsWalkTallyCBF( tinS& tinP , countT& cArgP , const sexHeadS* pHeadP , const byteT* pbBitsOwnedP , const dropNoteS* pNotesP , const byteT* pbDataP )
{
    if( tinP.pEther && cArgP && pNotesP )
    {
        countT*  pcArgP    = (countT*)cArgP ;
        countT*& pczLeverP = *(countT**)pcArgP[ 0 ] ;
        switchC& swTallyP  = *(switchC*)pcArgP[ 1 ] ;

        countT cSlots = 1 << pHeadP->expSlots ;
        //ZE( countT , cFound ) ;
        //for( countT offb = 0 ; offb < cSlots ; offb ++ )
        //{
        //    countT offByte = offb / SB ;
        //    countT offBit  = offb % SB ;
        //
        //    if( pbBitsOwnedP[ offByte ] >> offBit & 1 ) cFound ++ ;
        //}

        //if( cFound )
        {
            countT cbSlot = 1 << pHeadP->expCbDrop ;

            for( countT offb = 0 ; offb < cSlots ; offb ++ )
            {
                countT offByte = offb / SB ;
                countT offBit  = offb % SB ;

                if( pbBitsOwnedP[ offByte ] >> offBit & 1 )     // IF SLOT IS OWNED (IN USE)
                {
                    const dropNoteS* pn = pNotesP + offb ;

                    countT pczLever[] = { pn->idiFileTagged , pn->idLineTagged , pn->idiFileTagged2 , pn->idLineTagged2 , 0 } ;
                    pczLeverP = pczLever ;

                    countT* pcTally = &(countT&)swTallyP ;

                    pcTally[ 0 ] ++ ;
                    pcTally[ 1 ] += cbSlot ;
                    if( !pcTally[ 2 ] || pcTally[ 2 ] > cbSlot ) pcTally[ 2 ] = cbSlot ;        // MINIMUM SLOT SIZE
                    if(                  pcTally[ 3 ] < cbSlot ) pcTally[ 3 ] = cbSlot ;        // MAXIMUM SLOT SIZE
                }
                else                                            // IF SLOT IS NOT OWNED (AVAILABLE)
                {
                    countT pczLever[] = { -1 , -1 , cbSlot , cSlots , 0 } ;
                    pczLeverP = pczLever ;

                    countT* pcTally = &(countT&)swTallyP ;

                    pcTally[ 0 ] ++ ;
                    pcTally[ 1 ] += cbSlot ;
                    if( !pcTally[ 3 ] ) pcTally[ 3 ] = pcTally[ 2 ] = -1 ;
                }
            }
        }
    }
}

/*1*/voidT poolC::reportF( tinS& tinP , const countT*& pczLeverP , switchC& swTallyP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ; // *tinP.pEther RATHER THAN A  etherC& PARAMETER IS USED SO THAT IN THE FUTURE I CAN DO SOMETHING USEFUL WHEN NO INSTANCE OF etherC EXISTS
        __( swTallyP.cbDataF() - 4 * sizeof( countT ) ) ;
        if( POOP ) return ;
    }

    _IO_
    if( tinP.pEther )
    {
        countT pcArg[] = { (countT)&pczLeverP , (countT)&swTallyP } ;
        countT cArg = (countT)pcArg ;
        walkF( tinP , slotsWalkTallyCBF , cArg ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2014.poolc.reportf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2016.poolc.reportf BEGIN
#define DDNAME       "3func.360e2016.poolc.reportf"
#define DDNUMB      (countT)0x360e2016
#define IDFILE      (countT)0x1405


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

voidT slotsWalkTraceCBF( tinS& tinP , countT& cArgP , const sexHeadS* pHeadP , const byteT* pbBitsOwnedP , const dropNoteS* pNotesP , const byteT* pbDataP )
{
    if( tinP.pEther )
    {
        if( pHeadP )
        {
            ZE( strokeS* , psttg ) ;
            pHeadP->glassF( tinP , psttg ) ; ___( psttg ) ;
            etherC::etRockIF( tinP ).traceF( tinP , psttg ) ;
            tinP.pEther->delF( tinP , psttg ) ;
        }

        if( pNotesP )
        {
            countT cBits = 1 << pHeadP->expSlots ;
            ZE( countT , cFound ) ;
            for( countT offb = 0 ; offb < cBits ; offb ++ )
            {
                countT offByte = offb / SB ;
                countT offBit  = offb % SB ;

                if( pbBitsOwnedP[ offByte ] >> offBit & 1 ) cFound ++ ;
            }

            //if( cFound )
            {
                for( countT offb = 0 ; offb < cBits ; offb ++ )
                {
                    countT offByte = offb / SB ;
                    countT offBit  = offb % SB ;

                    //if( pbBitsOwnedP[ offByte ] >> offBit & 1 )
                    {
                        const dropNoteS* pn = pNotesP + offb ;

                        TN( tDump , "" ) ;
                        TN( tb4 , "    " ) ;
                        TN( tq , "\"" ) ;
                        if( pn->idType == ifciDtYPEdROPnOTE_strokeS )
                        {
                            countT cbSlot = 1 << pHeadP->expCbDrop ;
                            strokeS* psttRaw = (strokeS*)( pbDataP + cbSlot * offb ) ;
                            strokeS* psttc = psttRaw ;
                            strokeS* pstte = psttRaw + CSpREFIX + psttRaw->idAdam ;

                            //DISPLAY EACH STRING IN A STRING OF STRINGS WITH ARBITRARY NONUNIFORM NESTING
                            while( psttc < pstte )
                            {
                                if( psttc->idCaste != sc_PREFIXlENGTH ) break ;

                                if( psttc->idAdam >= CSpREFIX && psttc[ CSpREFIX ].idCaste == sc_PREFIXlENGTH )
                                {
                                    psttc += CSpREFIX ;
                                    continue ;
                                }
                                else if( psttc->idAdam )
                                {
                                    ZE( strokeS* , psttd ) ;
                                    tinP.pEther->strReplaceAnyF( tinP , psttd , psttc , T(TbLACK) , T(" ") ) ; ___( psttd ) ;

                                    if( psttd->idAdam > TOCK )
                                    {
                                        strokeS* psttDoomed = psttd ; psttd = 0 ;
                                        countT idf = 1 ;
                                        countT idl = TOCK ;
                                        tinP.pEther->strSubstringF( tinP , psttd , idf , idl , psttDoomed ) ; ___( psttd ) ;
                                        tinP.pEther->delF( tinP , psttDoomed ) ;
                                    }

                                    if( tDump.csF( tinP ) ) tDump += tb4 ;
                                    tDump += tq+T(psttd)+tq ;
                                    tinP.pEther->delF( tinP , psttd ) ;

                                    psttc += CSpREFIX + psttc->idAdam ;
                                }
                                else psttc += CSpREFIX ;
                            }
                        }

                        ZE( strokeS* , psttg ) ;
                        pn->glassF( tinP , psttg ) ; ___( psttg ) ;
                        etherC::etRockIF( tinP ).traceF( tinP , !tDump.csF( tinP ) ? psttg : (strokeS*)( T(psttg)+tDump ) ) ;
                        tinP.pEther->delF( tinP , psttg ) ;
                    }
                }
            }
        }
    }
}

/*1*/voidT poolC::reportF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ; // *tinP.pEther RATHER THAN A  etherC& PARAMETER IS USED SO THAT IN THE FUTURE I CAN DO SOMETHING USEFUL WHEN NO INSTANCE OF etherC EXISTS
        if( POOP ) return ;
    }

    _IO_
    walkF( tinP , slotsWalkTraceCBF , countTC() ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2016.poolc.reportf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2018.poolc.glassf BEGIN
#define DDNAME       "3func.360e2018.poolc.glassf"
#define DDNUMB      (countT)0x360e2018
#define IDFILE      (countT)0x1406


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT poolC::glassF( tinS& tinP , strokeS*& psttP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    tinP.pEther->strMakeF( tinP , LF , psttP , T("slotsC [flagsCt,idStateSpace,idMemorySpace,postName]: ") , TUCK << 1 ) ; ___( psttP ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(guts.flagsCt      ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(guts.idStateSpace ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(guts.idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , T("\"")+T(guts.postName)+T("\"") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e2018.poolc.glassf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e201a.poolc.deleteemptiesiff BEGIN
#define DDNAME       "3func.360e201a.poolc.deleteemptiesiff"
#define DDNUMB      (countT)0x360e201a
#define IDFILE      (countT)0x1407


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::deleteEmptiesIfF( tinS& tinP )/*1*/
{
    _IO_

    if( !( F(guts.flagsCt) & flPOOLc_KEEPeMPTIES ) ) for( countT offs = guts.expCbDropMin ; offs <= guts.expCbDropMax ; offs ++ )
    {
        guts.pGrabNewElt[ offs ].grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( guts.ppSlots[ offs ] ) guts.ppSlots[ offs ]->deleteEmptiesIfF( tinP ) ;
        guts.pGrabNewElt[ offs ].ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e201a.poolc.deleteemptiesiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e201b.poolc.testDropHeadersF BEGIN
#define DDNAME       "3func.360e201b.poolc.testDropHeadersF"
#define DDNUMB      (countT)0x360e201b
#define IDFILE      (countT)0x1408


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::testDropHeadersF( tinS& tinP )/*1*/
{
    //_IO_

    for( countT offsTry = 0 ; offsTry < CsLOTsIZESmAX ; offsTry ++ )
    {
        if( guts.ppSlots[ offsTry ] ) guts.ppSlots[ offsTry ]->testDropHeadersF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e2* : 3func.360e201b.poolc.testDropHeadersF END
