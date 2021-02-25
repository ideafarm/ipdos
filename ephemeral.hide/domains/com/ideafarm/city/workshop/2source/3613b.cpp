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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b002.bittreec.dt_bittreec BEGIN
#define DDNAME       "3func.3613b002.bittreec.dt_bittreec"
#define DDNUMB      (countT)0x3613b002
#define IDFILE      (countT)0x155d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// THESE DEFINES ARE ONLY FOR THE bitTreeC MODULE AND MUST BE UNDEFINED AT THE END OF THE LATH DEFINITION

#define ERASEbUFFERbIT                                                      \
                                                                            \
    {                                                                       \
        pp.offBit -- ;                                                      \
        byteT* pbc   = pp.pbBuffer + pp.offBit / SB ;                       \
        countT offBB =               pp.offBit % SB ;                       \
        byteT  mask  = (byteT)( 1 << offBB )  ;                             \
        *pbc &= ~mask ;                                                     \
    }

#define RESETbUFFERbIT                                                      \
                                                                            \
    {                                                                       \
        byteT* pbc   = pp.pbBuffer + pp.offBit / SB ;                       \
        countT offBB =               pp.offBit % SB ;                       \
        byteT  mask  = (byteT)( 1 << offBB )  ;                             \
        *pbc &= ~mask ;                                                     \
        pp.offBit ++ ;                                                      \
    }

#define SETbUFFERbIT                                                        \
                                                                            \
    {                                                                       \
        byteT* pbc   = pp.pbBuffer + pp.offBit / SB ;                       \
        countT offBB =               pp.offBit % SB ;                       \
        byteT  mask  = (byteT)( 1 << offBB )  ;                             \
        *pbc |= mask ;                                                      \
        pp.offBit ++ ;                                                      \
    }


#define CLIMB(zwP)                                                                                      \
                                                                                                        \
    {                                                                                                   \
        *pp.pstThis <<                                                                                  \
        (                                                                                               \
            pbRawBegin                                                                                  \
                ? (countT)pp.pThis                                                                      \
                : pp.idThis                                                                             \
        ) ;                                                                                             \
                                                                                                        \
        *pp.pstKidsDone << (countT)0 ;                                                                  \
                                                                                                        \
        if( pbRawBegin ) pp.pThis  = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p##zwP ) ;                      \
        else             pp.idThis =            BhIDE( BM_HIGH , PtHIS->p##zwP ) ;                      \
    }

#define UNCLIMB                                                                                         \
                                                                                                        \
    {                                                                                                   \
        if( pbRawBegin )                                                                                \
        {                                                                                               \
            pp.pThis = 0 ;                                                                              \
            *pp.pstThis >> *(countT*)&pp.pThis ;                                                        \
        }                                                                                               \
        else                                                                                            \
        {                                                                                               \
            pp.idThis = 0 ;                                                                             \
            *pp.pstThis >> pp.idThis ;                                                                  \
        }                                                                                               \
                                                                                                        \
        ZE( countT , cnu ) ;                                                                            \
        *pp.pstKidsDone >> cnu ;                                                                        \
    }

#define OFFlEVEL ( (countT)*pp.pstThis )

#define PtHIS ( pbRawBegin ? pp.pThis : !pp.idThis ? (bitNodeS*)0 : ( (bitNodeS*)(const byteT*)(*pNapkins)[ - 1 + pp.idThis ] ) )

#define COMPLETEnAME ( BkEEP( BM_HIGH , PtHIS->p0 ) )

#define ESCAPE ( BkEEP( BM_HIGH , PtHIS->p1 ) )

#define UP(zwP) BhIDE( BM_HIGH , PtHIS->p##zwP )

#define REPORT                                                                                                                          \
                                                                                                                                        \
    if( !cKidsDone )                                                                                                                    \
    {                                                                                                                                   \
        if( pp.pCBF )                                                                                                                   \
        {                                                                                                                               \
            ZE( countT , cnu ) ;                                                                                                        \
            (*pp.pCBF)( tinP , ( !pp.pcDatum ? cnu : *pp.pcDatum ) , *pp.pcArg ) ; /* pcArg == 0 IS ALLOWED */                          \
        }                                                                                                                               \
        else                                                                                                                            \
        {                                                                                                                               \
            /* DISPLAY THE WOTH offBitP BITS IN pbBufferP */                                                                            \
                                                                                                                                        \
            TN( tSay , "" ) ;                                                                                                           \
            for( countT offb = 0 ; offb < pp.offBit ; offb ++ )                                                                         \
            {                                                                                                                           \
                byteT* pbc    = pp.pbBuffer + offb / SB  ;                                                                              \
                countT offBB  =               offb % SB  ;      /* "offBB" : "offset of bit in byte"    */                              \
                byteT  mask   = (byteT)( 1 << offBB ) ;                                                                                 \
                                                                                                                                        \
                tSay += T(*pbc&mask?"1":"0") ;                                                                                          \
            }                                                                                                                           \
            etherC::etRockIF( tinP ).traceF( tinP , tSay ) ;                                                                                        \
        }                                                                                                                               \
    }


/*1*/bitTreeC::~bitTreeC( voidT )/*1*/
{
    TINSL
    _IO_
    dtF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b002.bittreec.dt_bittreec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b003.bittreec.bittreec BEGIN
#define DDNAME       "3func.3613b003.bittreec.bittreec"
#define DDNUMB      (countT)0x3613b003
#define IDFILE      (countT)0x155e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bitTreeC::bitTreeC( tinS& tinP , const osTextT* const postP , const flagsT flagsP , const countT idStateSpaceP , const countT expNodesPerNapkinP , const countT cNodeMaxP , const countT idMemorySpaceP ) :/*1*/
pbRawBegin( 0 ) ,
pbRawCursor( 0 ) ,
pbRawEnd( 0 ) ,
pNapkins( 0 ) ,
cElementsDispensed( 0 ) ,
cErrorTraces( 0 ) ,
flagsCt( flagsP ) ,
idStateSpaceCt( idStateSpaceP ? idStateSpaceP : ifcIDsTATEsPACE_SINGLEaDAM( tinP ) ) ,
expNodesPerNapkinCt( expNodesPerNapkinP ) ,
cNodeMaxCt( cNodeMaxP ) ,
idMemorySpaceCt( idMemorySpaceP )
{
    _IO_
    thirdC::c_strcpyIF( postCt , postP ) ;
    thirdC::c_strcatIF( postCt , cNodeMaxCt ? ".bitTreeC.nap.raw" : ".bitTreeC.napkins" ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b003.bittreec.bittreec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b004.bittreec.newf BEGIN
#define DDNAME       "3func.3613b004.bittreec.newf"
#define DDNUMB      (countT)0x3613b004
#define IDFILE      (countT)0x155f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* pbBitsP , countT offBitP , countT cBitsP , countT* const pcDatumP )/*1*/
{
    _IO_
    byteT* pbSave = tinP.pbRecursiveParameters     ;
                    tinP.pbRecursiveParameters = 0 ;

    bitNodeS* pRoot = pbRawBegin
        ? (bitNodeS*)pbRawBegin
        : (bitNodeS*)(*pNapkins)[ 0 ]
    ;

    rParam_new_S pp( pbRawBegin ? 0 : 1 , pbRawBegin ? pRoot : 0 , pbBitsP , offBitP , cBitsP , pcDatumP ) ;
    
    tinP.pbRecursiveParameters = (byteT*)&pp ;              // AM USING THIS EVEN THOUGH I AM NOT RECURSIVELY CALLING MYSELF; THIS IS FOR SPEED
    
    while( PtHIS && !newStepF( tinP ) ) ;
    
    __( !PtHIS ) ;                                       // DETECTS FAILURE E.G. DUE TO EXHAUSTION OF RAW NAPKIN

    tinP.pbRecursiveParameters = pbSave ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b004.bittreec.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b005.bittreec.newstepf BEGIN
#define DDNAME       "3func.3613b005.bittreec.newstepf"
#define DDNUMB      (countT)0x3613b005
#define IDFILE      (countT)0x1560


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT bitTreeC::newStepF( tinS& tinP )/*1*/
{
    _IO_
    rParam_new_S& pp = *(rParam_new_S*)tinP.pbRecursiveParameters ;

    pp.cSteps ++ ;
    //etherC::etRockIF( tinP ).traceF( tinP , TF3(espAM(),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;

    if( !pp.pbBits ) { BLAMMO ; }                                                                           // SOURCE BITS MUST BE SPECIFIED

    if( pp.offBit >= SB )                                                                                   // NORMALIZE SO pp.offBit IS [0-7]
    {
        pp.pbBits += pp.offBit /  SB ;
                     pp.offBit %= SB ;
    }

    while( BkEEP( BM_HIGH , PtHIS->p1 ) )                                                                //SKIP ANY ESCAPE NODES
    {
        if( pp.pcDatum && !pp.cBits ) *pp.pcDatum = BhIDE( BM_HIGH , PtHIS->p0 ) ;

        if( pbRawBegin ) pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p1 ) ;
        else
        {
            countT idThisNew = BhIDE( BM_HIGH , PtHIS->p1 ) ;
            //pp.pThis = (bitNodeS*)(*pNapkins)[ idThisNew - 1 ] ;
            pp.idThis = idThisNew ;
        }
    }

    ZE( boolT , bDone ) ;
    if( !pp.cBits )
    {






        __NZ( BkEEP( BM_HIGH , *(countT*)&PtHIS->p0 ) ) ;                                                // FAIL IF ITEM ALREADY EXISTS

        if( !POOP )
        {
            *(countT*)&PtHIS->p0 |= BM_HIGH ;                                                                       // INDICATE THAT THE PATH TO *pp.pThis HAS BEEN CREATED (NO EFFECT IF DUPLIATE)

            if( pp.pcDatum )
            {
                bitNodeS* pbn = newNodeF( tinP ) ;
                *pbn = *PtHIS ;

                // CONVERT *pThis INTO AN ESCAPE NODE
                // p0 WILL CONTAIN THE VALUE OF *pcDatum
                // p1 WILL POINT TO THE NEW NODE, WHICH IS AN IDENTICAL COPY OF THE NODE THAT HAS BECOME THE ESCAPE NODE

                PtHIS->p0 = (bitNodeS*)*pp.pcDatum ;

                PtHIS->p1 = pbRawBegin
                    ?            pbn
                    : (bitNodeS*)cElementsDispensed
                ;

                *(countT*)&PtHIS->p1 |= BM_HIGH ;                                                            // MARK THIS AS AN ESCAPE NODE (FOLLOW p1 TO CONTINUE WALKING)
            }
        }

        bDone = 1 ;
    }
    else                                                                                                    // ATTACH A NODE FOR THE CURSORED BIT
    {
        pp.myBit = *pp.pbBits ;

        pp.myBit >>= pp.offBit ;                                                                            // DISCARD LOWER BITS
        pp.myBit <<= pp.offBit ;

        pp.myBit <<= SB - 1 - pp.offBit ;                                                                   // DISCARD HIGHER BITS
        pp.myBit >>= SB - 1 - pp.offBit ;

        if( !pp.myBit )
        {
            if( BhIDE( BM_HIGH , PtHIS->p0 ) )
            {
                if( pbRawBegin ) pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p0 ) ;
                else
                {
                    countT idThisNew = BhIDE( BM_HIGH , PtHIS->p0 ) ;

                    //pp.pThis = !idThisNew
                    //    ? 0
                    //    : (bitNodeS*)(const byteT*)(*pNapkins)[ idThisNew - 1 ]
                    //;

                    pp.idThis = idThisNew ;
                }
            }
            else
            {
                bitNodeS* pbn = newNodeF( tinP ) ;

                if( pbRawBegin )
                {
                    *(countT*)&PtHIS->p0 |= (countT)pbn ;
                    pp.pThis = pbn ;
                }
                else
                {
                    *(countT*)&PtHIS->p0 |= cElementsDispensed ;                                         // THIS IS THE ID OF THE NEW NODE
                    pp.idThis = cElementsDispensed ;
                }
            }

            pp.offBit ++ ;
            pp.cBits  -- ;
        }
        else
        {
            if( BhIDE( BM_HIGH , PtHIS->p1 ) )
            {
                if( pbRawBegin ) pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p1 ) ;
                else
                {
                    countT idThisNew = BhIDE( BM_HIGH , PtHIS->p1 ) ;

                    //pp.pThis = !idThisNew
                    //    ? 0
                    //    : (bitNodeS*)(const byteT*)(*pNapkins)[ idThisNew - 1 ]
                    //;

                    pp.idThis = idThisNew ;
                }
            }
            else
            {
                bitNodeS* pbn = newNodeF( tinP ) ;

                if( pbRawBegin )
                {
                    *(countT*)&PtHIS->p1 |= (countT)pbn ;
                    pp.pThis = pbn ;
                }
                else
                {
                    *(countT*)&PtHIS->p1 |= cElementsDispensed ;                                         // THIS IS THE ID OF THE NEW NODE
                    pp.idThis = cElementsDispensed ;
                }
            }

            pp.offBit ++ ;
            pp.cBits  -- ;
        }
    }

    return bDone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b005.bittreec.newstepf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b006.bittreec.tracef BEGIN
#define DDNAME       "3func.3613b006.bittreec.tracef"
#define DDNUMB      (countT)0x3613b006
#define IDFILE      (countT)0x1561


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::traceF( tinS& tinP , countT& cNestP )/*1*/
{
    _IO_
    bitNodeS* pRoot = pbRawBegin
        ? (bitNodeS*)pbRawBegin
        : (bitNodeS*)(*pNapkins)[ 0 ]
    ;

    pRoot->traceF( tinP , cNestP , pNapkins ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b006.bittreec.tracef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b007.bittreec.walkf BEGIN
#define DDNAME       "3func.3613b007.bittreec.walkf"
#define DDNUMB      (countT)0x3613b007
#define IDFILE      (countT)0x1562


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::walkF( tinS& tinP , stackC& stThisP , stackC& stKidsDoneP , byteT* pbBufferP , countT cbBufferP , countT& cNestP , ifc2FT pCBFP , countT* pcArgP , const boolT* const pQuitP , bitNodeS* pRootP )/*1*/
{
    _IO_
    byteT* pbSave = tinP.pbRecursiveParameters     ;
                    tinP.pbRecursiveParameters = 0 ;

    bitNodeS* pRoot = pRootP
        ? pRootP
        : pbRawBegin
            ? (bitNodeS*)pbRawBegin
            : (bitNodeS*)(*pNapkins)[ 0 ]
    ;

    stKidsDoneP << (countT)0 ;

    ZE( countT , cDatum ) ;
    rParam_walk_S pp( pbRawBegin ? 0 : 1 , pbRawBegin ? pRoot : 0 , stThisP , stKidsDoneP , pbBufferP , cbBufferP , countTC() , pCBFP , pcArgP , F(flagsCt) & flBITtREEc_SHOWdATAdURINGwALK ? &cDatum : 0 ) ;

    tinP.pbRecursiveParameters = (byteT*)&pp ;

    if( !pQuitP ) while(             PtHIS && !walkStepF( tinP ) ) ;
    else          while( !*pQuitP && PtHIS && !walkStepF( tinP ) ) ;

    tinP.pbRecursiveParameters = 0 ;

    tinP.pbRecursiveParameters = pbSave ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b007.bittreec.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b008.bittreec.queryf BEGIN
#define DDNAME       "3func.3613b008.bittreec.queryf"
#define DDNUMB      (countT)0x3613b008
#define IDFILE      (countT)0x1563


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bitNodeS* bitTreeC::queryF( tinS& tinP , const byteT* pbBitsP , countT offBitP , countT cBitsP , countT* const pcDatumP )/*1*/
{
    _IO_
    byteT* pbSave = tinP.pbRecursiveParameters     ;
                    tinP.pbRecursiveParameters = 0 ;

    bitNodeS* pRoot = pbRawBegin
        ? (bitNodeS*)pbRawBegin
        : (bitNodeS*)(*pNapkins)[ 0 ]
    ;

    rParam_new_S pp( pbRawBegin ? 0 : 1 , pbRawBegin ? pRoot : 0 , pbBitsP , offBitP , cBitsP , pcDatumP ) ;

    tinP.pbRecursiveParameters = (byteT*)&pp ;

    while( PtHIS && !queryStepF( tinP ) ) ;

    tinP.pbRecursiveParameters = 0 ;

    tinP.pbRecursiveParameters = pbSave ;
    return PtHIS ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b008.bittreec.queryf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b009.bittreec.querystepf BEGIN
#define DDNAME       "3func.3613b009.bittreec.querystepf"
#define DDNUMB      (countT)0x3613b009
#define IDFILE      (countT)0x1564


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT bitTreeC::queryStepF( tinS& tinP )/*1*/
{
    _IO_
    rParam_new_S& pp = *(rParam_new_S*)tinP.pbRecursiveParameters ;

    pp.cSteps ++ ;
    //etherC::etRockIF( tinP ).traceF( tinP , TF3(espAM(),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;

    if( !pp.pbBits ) { BLAMMO ; }                                                                           // SOURCE BITS MUST BE SPECIFIED

    if( pp.offBit >= SB )                                                                                   // NORMALIZE SO pp.offBit IS [0-7]
    {
        pp.pbBits += pp.offBit /  SB ;
                     pp.offBit %= SB ;
    }

    while( BkEEP( BM_HIGH , PtHIS->p1 ) )                                                                //SKIP ANY ESCAPE NODES
    {
        if( pp.pcDatum && !pp.cBits ) *pp.pcDatum = BhIDE( BM_HIGH , PtHIS->p0 ) ;

        if( pbRawBegin ) pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p1 ) ;
        else
        {
            countT idThisNew = BhIDE( BM_HIGH , PtHIS->p1 ) ;
              pp.pThis = (bitNodeS*)(*pNapkins)[ idThisNew - 1 ] ;
            pp.idThis = idThisNew ;
        }
    }

    ZE( boolT , bDone ) ;
    if( !pp.cBits )
    {
        if( !( *(countT*)&PtHIS->p0 & BM_HIGH ) )
        {
            pp.pThis = 0 ; // INDICATE NOT FOUND
            pp.idThis = 0 ;
        }



























        bDone = 1 ;
    }
    else                                                                                                    // ATTACH A NODE FOR THE CURSORED BIT
    {
        pp.myBit = *pp.pbBits ;

        pp.myBit >>= pp.offBit ;                                                                            // DISCARD LOWER BITS
        pp.myBit <<= pp.offBit ;

        pp.myBit <<= SB - 1 - pp.offBit ;                                                                   // DISCARD HIGHER BITS
        pp.myBit >>= SB - 1 - pp.offBit ;

        if( !pp.myBit )
        {
            if( pbRawBegin )
            {
                pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p0 ) ;











            }
            else
            {
                countT idThisNew = BhIDE( BM_HIGH , PtHIS->p0 ) ;

                //pp.pThis = !idThisNew
                //    ? 0
                //    : (bitNodeS*)(const byteT*)(*pNapkins)[ idThisNew - 1 ]
                //;

                pp.idThis = idThisNew ;




            }

            pp.offBit ++ ;
            pp.cBits  -- ;
        }
        else
        {
            if( pbRawBegin )
            {
                pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p1 ) ;











            }
            else
            {




                countT idThisNew = BhIDE( BM_HIGH , PtHIS->p1 ) ;

                //pp.pThis = !idThisNew
                //    ? 0
                //    : (bitNodeS*)(const byteT*)(*pNapkins)[ idThisNew - 1 ]
                //;

                pp.idThis = idThisNew ;
            }

            pp.offBit ++ ;
            pp.cBits  -- ;
        }
    }

    return bDone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b009.bittreec.querystepf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00a.bittreec.newnodef BEGIN
#define DDNAME       "3func.3613b00a.bittreec.newnodef"
#define DDNUMB      (countT)0x3613b00a
#define IDFILE      (countT)0x1565


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bitNodeS* bitTreeC::newNodeF( tinS& tinP )/*1*/
{
    _IO_
    ZE( bitNodeS* , pbn ) ;

    if( pbRawBegin )
    {
        if( !cRemainingF() )
        {
            if( cErrorTraces ++ < TUCK ) etherC::etRockIF( tinP ).traceF( tinP , T("i've run out of memory so cannot construct a bitNodeS") ) ;
        }
        else
        {
            byteT* pbrc = pbRawCursor ;
                          pbRawCursor += sizeof( bitNodeS ) ;

            pbn = new( pbrc ) bitNodeS ;
        }
    }
    else
    {
        if( cElementsDispensed + 1 >= BM_HIGH )
        {
            if( cErrorTraces ++ < TUCK ) etherC::etRockIF( tinP ).traceF( tinP , T("i've run out of index values so cannot construct a bitNodeS") ) ;
        }
        else
        {
            pbn = new( *pNapkins , cElementsDispensed ) bitNodeS ;
        }
    }

    return pbn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00a.bittreec.newnodef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00b.bittreec.walkstepf BEGIN
#define DDNAME       "3func.3613b00b.bittreec.walkstepf"
#define DDNUMB      (countT)0x3613b00b
#define IDFILE      (countT)0x1566


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT bitTreeC::walkStepF( tinS& tinP )/*1*/
{
    _IO_
    rParam_walk_S& pp = *(rParam_walk_S*)tinP.pbRecursiveParameters ;

    countT& cKidsDone = (*pp.pstKidsDone)[ 0 ] ;

    pp.cSteps ++ ;
    //etherC::etRockIF( tinP ).traceF( tinP , T("walkStepF [offBit,cKidsDone]: ")+TF2(pp.offBit,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cKidsDone,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    [ ")+TF3((countT)PtHIS->p0,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(" , ")+TF3((countT)PtHIS->p1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(" ]") ) ;

    while( BkEEP( BM_HIGH , PtHIS->p1 ) )                                                                //SKIP ANY ESCAPE NODES
    {
        if( pp.pcDatum && !pp.cBits ) *pp.pcDatum = BhIDE( BM_HIGH , PtHIS->p0 ) ;

        if( pbRawBegin ) pp.pThis = (bitNodeS*)BhIDE( BM_HIGH , PtHIS->p1 ) ;
        else
        {
            countT idThisNew = BhIDE( BM_HIGH , PtHIS->p1 ) ;
            pp.pThis = (bitNodeS*)(*pNapkins)[ idThisNew - 1 ] ;
            pp.idThis = idThisNew ;
        }
    }

    //etherC::etRockIF( tinP ).traceF( tinP , T("buffer [cBits,cBytes,text]: ")+TF3(pp.offBit,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,4)+T(" ")+TF3(pp.offBit/8,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,4)+T("    \"")+T(pp.pbBuffer)+T("\"") ) ;
    if( COMPLETEnAME ) REPORT

    ZE( boolT , bDone ) ;
    switch( cKidsDone ++ )
    {
        case 0 :
        {
            if( UP( 0 ) && !ESCAPE )
            {
                RESETbUFFERbIT                                              // THIS CLIMB REPRESENTS A '0' BIT
                CLIMB( 0 )
            }

            break ;
        }
        case 1 :
        {
            if( UP( 1 ) )
            {
                if( !ESCAPE ) SETbUFFERbIT                                  // THIS CLIMB REPRESENTS A '1' BIT
                CLIMB( 1 )
            }

            break ;
        }
        case 2 :
        {
            if( !OFFlEVEL ) bDone = 1 ;
            else
            {
                UNCLIMB
                if( !ESCAPE ) ERASEbUFFERbIT
            }

            break ;
        }
    }

    return bDone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00b.bittreec.walkstepf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00c.bittreec.ctf BEGIN
#define DDNAME       "3func.3613b00c.bittreec.ctf"
#define DDNUMB      (countT)0x3613b00c
#define IDFILE      (countT)0x1567


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::ctF( tinS& tinP )/*1*/
{
    _IO_
    if( cNodeMaxCt )
    {
        //U:: idStateSpaceCt: ADD SUPPORT HERE FOR PERSISTENT NAPKIN IF NONZE idStateSpaceCt ; CURRENT CODE SILENTLY IGNORES idStateSpaceCt
        //THIS IS NECESSARY FOR COMPLETE FUNCTIONALITY ; IT IS BEING DEFERRED SIMPLY OUT OF FATIGUE
        //ADDING THIS SUPPORT WILL GIVE IPDOS ADAMS AN EXTREMELY FAST WAY TO COMMUNICATE WITH EACH OTHER WITH PERSISTENT STATE
        //FOR EXAMPLE, THIS COULD BE USED FOR PERSISTENT CONFIGURATION INFORMATION

        countT cba = cNodeMaxCt * sizeof( bitNodeS ) ;
        new( 0 , tinP , pbDockNapRaw , sizeof pbDockNapRaw ) napkinC( tinP , TAG( TAGiDnULL ) , postCt , 0 , cba , ifcOPENsHAREDmEMORYhOW_nCeF , flNAPKINc_null , - 1 , idMemorySpaceCt ) ;
        ((napkinC*)pbDockNapRaw)->formattingIsDoneF( tinP ) ;
        pbRawCursor = pbRawBegin = *(napkinC*)pbDockNapRaw ;
        pbRawEnd    = pbRawBegin + cba ;
    }
    else
    {
        countT cbNeeded = sizeof( bitNodeS ) ;
        countT expCbPerItem = 1 ;
        while( 1 << expCbPerItem < cbNeeded ) expCbPerItem ++ ;

        flagsT flNapkins = flNAPKINSc_null ;
        if( F(flagsCt) & flBITtREEc_PURGEoNcT )flNapkins |= flNAPKINSc_PURGEoNcT ;
        if( F(flagsCt) & flBITtREEc_PURGEoNdT )flNapkins |= flNAPKINSc_PURGEoNdT ;

        new( 0 , tinP , pbDockNapkins , sizeof pbDockNapkins ) napkinsC( tinP , TAG( TAGiDnULL ) , postCt , expCbPerItem + expNodesPerNapkinCt , expCbPerItem , idStateSpaceCt , flNapkins , idMemorySpaceCt ) ;
        pNapkins = (napkinsC*)pbDockNapkins ;
    }

    if( F(flagsCt) & flBITtREEc_WRITE ) newNodeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00c.bittreec.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00d.bittreec.dtf BEGIN
#define DDNAME       "3func.3613b00d.bittreec.dtf"
#define DDNUMB      (countT)0x3613b00d
#define IDFILE      (countT)0x1568


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::dtF( tinS& tinP )/*1*/
{
    _IO_
    if( pbRawBegin )
    {
        napkinC* pDoomed = (napkinC*)pbDockNapRaw ;
        DELzOMBIE( pDoomed ) ;
    }
    else
    {
        napkinsC* pDoomed = (napkinsC*)pbDockNapkins ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00d.bittreec.dtf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00e.bittreec.purgef BEGIN
#define DDNAME       "3func.3613b00e.bittreec.purgef"
#define DDNUMB      (countT)0x3613b00e
#define IDFILE      (countT)0x1569


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitTreeC::purgeF( tinS& tinP )/*1*/
{
    _IO_
    dtF( tinP ) ;
    ctF( tinP ) ;
}

// THESE DEFINES ARE ONLY FOR THE bitTreeC MODULE AND MUST BE UNDEFINED AT THE END OF THE LATH DEFINITION

#undef ERASEbUFFERbIT
#undef RESETbUFFERbIT
#undef SETbUFFERbIT
#undef CLIMB
#undef UNCLIMB
#undef OFFlEVEL
#undef PtHIS
#undef COMPLETEnAME
#undef ESCAPE
#undef UP
#undef REPORT


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613b* : 3func.3613b00e.bittreec.purgef END
