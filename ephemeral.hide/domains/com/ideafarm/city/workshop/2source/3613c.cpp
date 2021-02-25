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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c002.keyvaluepairsc.dt_keyvaluepairsc BEGIN
#define DDNAME       "3func.3613c002.keyvaluepairsc.dt_keyvaluepairsc"
#define DDNUMB      (countT)0x3613c002
#define IDFILE      (countT)0x156a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/keyValuePairsC::~keyValuePairsC( voidT )/*1*/
{
    if( !( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) )
    {
        TINSL

        jotC* pDoomed = (jotC*)pbDockJot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c002.keyvaluepairsc.dt_keyvaluepairsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c003.keyvaluepairsc.keyvaluepairsc BEGIN
#define DDNAME       "3func.3613c003.keyvaluepairsc.keyvaluepairsc"
#define DDNUMB      (countT)0x3613c003
#define IDFILE      (countT)0x156b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/keyValuePairsC::keyValuePairsC( tinS& tinP , const osTextT* const postNameP , const flagsT flagsP , const countT idStateSpaceP , const countT expNodesPerNapkinP , const countT cNodeMaxP , const countT cbDataBookP , const countT cIndexEntriesBookP , const countT cKeepInactiveP , const countT idMemorySpaceP ) :/*1*/
flagsCt( flagsP ) ,
cbDataBookCt( cbDataBookP ) ,
cIndexEntriesBookCt( cIndexEntriesBookP ) ,
cKeepInactiveCt( cKeepInactiveP ) ,
btKeys
(
    tinP , postNameP ,
    (
                                                     flBITtREEc_SHOWdATAdURINGwALK
        | ( F(flagsP) & flKEYvALUEpAIRSc_WRITE     ? flBITtREEc_WRITE              : flBITtREEc_null )
        | ( F(flagsP) & flKEYvALUEpAIRSc_PURGEoNcT ? flBITtREEc_PURGEoNcT          : flBITtREEc_null )
        | ( F(flagsP) & flKEYvALUEpAIRSc_PURGEoNdT ? flBITtREEc_PURGEoNdT          : flBITtREEc_null )
    ) ,
    idStateSpaceP , expNodesPerNapkinP , cNodeMaxP , idMemorySpaceP
)
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        if( POOP ) return ;
        __Z( *postNameP ) ;
        __NZ( thirdC::c_strlenIF( tinP , postNameP ) >= sizeof postNameCt ) ;
        FV( flKEYvALUEpAIRSc , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_

    thirdC::c_strcpyIF( tinP , postNameCt , postNameP ) ;

    if( !( F(flagsP) & flKEYvALUEpAIRSc_NOjOT ) )
    {
        new( 0 , tinP , pbDockJot , sizeof pbDockJot ) jotC
        (
            tinP , postNameCt ,
            (
                  ( F(flagsCt) & flKEYvALUEpAIRSc_WRITE     ? flJOTc_WRITE  | flJOTc_DOnOTrEGISTER : flJOTc_DOnOTrEGISTER )
                | ( F(flagsCt) & flKEYvALUEpAIRSc_PURGEoNdT ? flJOTc_DELETE | flJOTc_DOnOTrEGISTER : flJOTc_DOnOTrEGISTER )
            ) ,
            cbDataBookCt , cIndexEntriesBookCt , cKeepInactiveCt , ifcIDgRABlAYER_7BASEmISC1 , flGRABc_null , idMemorySpaceP
        ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c003.keyvaluepairsc.keyvaluepairsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c004.keyvaluepairsc.newf BEGIN
#define DDNAME       "3func.3613c004.keyvaluepairsc.newf"
#define DDNUMB      (countT)0x3613c004
#define IDFILE      (countT)0x156c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT keyValuePairsC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* pbBitsP , countT offBitP , countT cBitsP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) ;
        if( POOP ) return ;
    }

    jotC& myJot = *(jotC*)pbDockJot ;
    countT idJot = myJot.writeF( tinP , pbP , cbP ) ;

    btKeys.newF( tinP , idLineP , idiFileP , pbBitsP , offBitP , cBitsP , &idJot ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c004.keyvaluepairsc.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c005.keyvaluepairsc.newf BEGIN
#define DDNAME       "3func.3613c005.keyvaluepairsc.newf"
#define DDNUMB      (countT)0x3613c005
#define IDFILE      (countT)0x156d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT keyValuePairsC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* pbBitsP , const byteT* const pbP , const countT cbP )/*1*/
{
    newF( tinP , idLineP , idiFileP , pbBitsP , 0 , thirdC::c_strlenIF( pbBitsP ) * SB , pbP , cbP ? cbP : thirdC::c_strlenIF( tinP , pbP ) + 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c005.keyvaluepairsc.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c006.keyvaluepairsc.operator_call BEGIN
#define DDNAME       "3func.3613c006.keyvaluepairsc.operator_call"
#define DDNUMB      (countT)0x3613c006
#define IDFILE      (countT)0x156e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/pageC keyValuePairsC::operator ()( tinS& tinP , const byteT* pbBitsP , countT offBitP , countT cBitsP )/*1*/
{
    jotC& myJot = *(jotC*)pbDockJot ;

    IFbEcAREFUL
    {
        if( POOP ) return pageC( tinP , myJot ) ;
        __NZ( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) ;
        if( POOP ) return pageC( tinP , myJot ) ;
    }

    ZE( countT , idJot ) ;
    if( btKeys.queryF( tinP , pbBitsP , offBitP , cBitsP , &idJot ) )
    {
        __Z( idJot ) ;
        return myJot[ idJot ] ;
    }
    else return pageC( tinP , myJot ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c006.keyvaluepairsc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c007.keyvaluepairsc.operator_call BEGIN
#define DDNAME       "3func.3613c007.keyvaluepairsc.operator_call"
#define DDNUMB      (countT)0x3613c007
#define IDFILE      (countT)0x156f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/pageC keyValuePairsC::operator ()( tinS& tinP , const byteT* pbBitsP )/*1*/
{
    return operator ()( tinP , pbBitsP , 0 , thirdC::c_strlenIF( tinP , pbBitsP ) * SB ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c007.keyvaluepairsc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c008.keyvaluepairsc.walkf BEGIN
#define DDNAME       "3func.3613c008.keyvaluepairsc.walkf"
#define DDNUMB      (countT)0x3613c008
#define IDFILE      (countT)0x1570


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 stThisP
 stKidsDoneP
 pbBufferP
 cbBufferP
 cNestP
 pCBFP
 pcArgP
  can be 0
  if not 0 then pcArg[ 0 ] must be 0
   i will use it to store the address of the jotC instance that i use to store the value associated with each key
   the caller's callback function will be able to use this address, together with an idJotP, to retrieve the datum
 pQuitP
*/
/**/

/*1*/voidT keyValuePairsC::walkF( tinS& tinP , stackC& stThisP , stackC& stKidsDoneP , byteT* pbBufferP , countT cbBufferP , countT& cNestP , ifc2FT pCBFP , countT* pcArgP , const boolT* const pQuitP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pcArgP && pcArgP[ 0 ] ) ; // THE ZE'TH ARGUMENT IS RESERVED FOR ME TO USE TO PASS IN THE ADDRESS OF MY jotC INSTANCE
        if( POOP ) return ;
    }

    ZE( countT , myArg ) ;
    countT* pcArgUse = pcArgP
        ? pcArgP
        : &myArg
    ;

    if( !( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) ) *pcArgUse = (countT)pbDockJot ;

    btKeys.walkF( tinP , stThisP , stKidsDoneP , pbBufferP , cbBufferP , cNestP , pCBFP , pcArgP , pQuitP ) ;

    if( pcArgP ) *pcArgP = 0 ;  // THE VALUE THAT i PLACED HERE IS ONLY FOR THE BENEFIT OF THE CALLBACK FUNCTION THAT I WAS CALLING ; IT MUST BE CLEARED SO THAT pcArgP WILL BE VALID IF PASSED TO ME AGAIN
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c008.keyvaluepairsc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c009.keyvaluepairsc.purgef BEGIN
#define DDNAME       "3func.3613c009.keyvaluepairsc.purgef"
#define DDNUMB      (countT)0x3613c009
#define IDFILE      (countT)0x1571


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT keyValuePairsC::purgeF( tinS& tinP )/*1*/
{
    btKeys.purgeF( tinP ) ;

    if( !( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) )
    {
        jotC* pDoomed = (jotC*)pbDockJot ;
        DELzOMBIE( pDoomed ) ;

        new( 0 , tinP , pbDockJot , sizeof pbDockJot ) jotC
        (
            tinP , postNameCt ,
            (
                  ( F(flagsCt) & flKEYvALUEpAIRSc_WRITE     ? flJOTc_WRITE  | flJOTc_DOnOTrEGISTER : flJOTc_DOnOTrEGISTER )
                | ( F(flagsCt) & flKEYvALUEpAIRSc_PURGEoNdT ? flJOTc_DELETE | flJOTc_DOnOTrEGISTER : flJOTc_DOnOTrEGISTER )
            ) ,
            cbDataBookCt , cIndexEntriesBookCt , cKeepInactiveCt
        ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c009.keyvaluepairsc.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c00a.keyvaluepairsc.queryf BEGIN
#define DDNAME       "3func.3613c00a.keyvaluepairsc.queryf"
#define DDNUMB      (countT)0x3613c00a
#define IDFILE      (countT)0x1572


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT keyValuePairsC::queryF( tinS& tinP , const byteT* pbBitsP , countT offBitP , countT cBitsP , pageC* const pPageP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( F(flagsCt) & flKEYvALUEpAIRSc_NOjOT ) ;
        if( POOP ) return 0 ;
    }

    ZE( countT , idJot ) ;
    boolT bFound = !!btKeys.queryF( tinP , pbBitsP , offBitP , cBitsP , &idJot ) ;

    if( !idJot != !bFound ) { BLAMMO ; }

    if( pPageP && idJot )
    {
        jotC& myJot = *(jotC*)pbDockJot ;
        *pPageP = myJot.readF( tinP , idJot ) ;
    }

    return !!idJot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c00a.keyvaluepairsc.queryf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c00b.keyvaluepairsc.queryf BEGIN
#define DDNAME       "3func.3613c00b.keyvaluepairsc.queryf"
#define DDNUMB      (countT)0x3613c00b
#define IDFILE      (countT)0x1573


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT keyValuePairsC::queryF( tinS& tinP , const byteT* pbBitsP , pageC* const pPageP )/*1*/
{
    return queryF( tinP , pbBitsP , 0 , thirdC::c_strlenIF( pbBitsP ) * SB , pPageP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613c* : 3func.3613c00b.keyvaluepairsc.queryf END
