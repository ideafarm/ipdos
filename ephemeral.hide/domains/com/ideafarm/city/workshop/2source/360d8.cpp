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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8002.pusec.dt_pusec BEGIN
#define DDNAME       "3func.360d8002.pusec.dt_pusec"
#define DDNUMB      (countT)0x360d8002
#define IDFILE      (countT)0x13c1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::~puseC( voidT )/*1*/
{
    TINSL
    if( tinP.pPoolUse && tinP.pPoolUse != tinP.pAdamGlobal1->pPoolAdamTemp && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; }

    if( !( F(flagsMode) & flPUSEcmODE_DOnOTHINGwHENdIE ) ) tinP.pPoolUse = pPoolUseLag ;

    if( bDeleteUse )
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        DEL( pPoolUse ) ;
    }

    //if( tinP.pPoolUse == tinP.pAdamGlobal1->pPoolAdamTemp ) tinP.pc Utility[ 0 ] = 0 ; //U:: NORMALLY COMMENTED OUT; CAN BE USED ALONG WITH CODE IN poolC::newF TO VERIFY THAT ADAM TEMP IS USED FOR TEMPORARY DROPS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8002.pusec.dt_pusec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8003.pusec.pusec BEGIN
#define DDNAME       "3func.360d8003.pusec.pusec"
#define DDNUMB      (countT)0x360d8003
#define IDFILE      (countT)0x13c2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

//CBUG:COMPILERbUG
// COMPILER GENERATES INCORRECT CODE FOR THIS LINE: poolC( tinP , ( psttNameP ? T(psttNameP) : T("apartments") ) ) ,
// THE COMPILER USES A BIT JUST BELOW ebp TO TELL ITSELF WHICH textC OBJECT IT CONSTRUCTED
// BUT WHEN IT IS TIME TO DESTRUCT THE TEMPORARY textC OBJECT, THE GENERATED CODE CLEARS THE BIT JUST BEFORE IT TESTS IT
// THIS IS THE WO'TH TIME THAT I USED THIS TYPE OF CODING
// I THINK THAT THIS IS THE ONLY COMPILER BUG THAT I HAVE FOUND, OTHER THAN THE DESIGN IMPERFECTION THAT I PATCH FOR DURING BUILD

/*1*/puseC::puseC( tinS& tinP , const osTextT* const postNameP , const flagsT flagsP , const countT idStateSpaceP , const countT expCbDropMinP , const countT expCbDropMaxP , const countT* const pczHintPreallocationP , const countT idMemorySpaceP ) :/*1*/
pPoolUseLag( tinP.pPoolUse ) ,
pPoolUse( 0 ) ,
bDeleteUse( 1 ) ,
flagsMode( flPUSEcmODE_null )
{
    if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; }
    if( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) ) { BLAMMO ; }

    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        pPoolUse = new( 0 , tinP , LF ) poolC( tinP , TAG( TAGiDnULL ) , postNameP ? postNameP : "apartments" , flagsP , idStateSpaceP , expCbDropMinP , expCbDropMaxP , pczHintPreallocationP , idMemorySpaceP ) ; ___( pPoolUse ) ;
    }

    tinP.pPoolUse = pPoolUse ; //MUST BE DONE AFTER THE ___() ON THE PRECEDING LINE

    //tinP.pc Utility[ 0 ] = (countT)tinP.pPoolUse ; //U:: NORMALLY COMMENTED OUT; CAN BE USED ALONG WITH CODE IN poolC::newF TO VERIFY THAT ADAM TEMP IS USED FOR TEMPORARY DROPS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8003.pusec.pusec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8004.pusec.pusec BEGIN
#define DDNAME       "3func.360d8004.pusec.pusec"
#define DDNUMB      (countT)0x360d8004
#define IDFILE      (countT)0x13c3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::puseC( tinS& tinP , const countT idPoolP ) :/*1*/
pPoolUseLag( tinP.pPoolUse ) ,
pPoolUse( 0 ) ,
bDeleteUse( 0 ) ,
flagsMode( flPUSEcmODE_null )
{
    if( idPoolP != ifcIDpOOL_NONE && idPoolP != ifcIDpOOL_ADAMtEMP && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; }

    switch( idPoolP )
    {
        case ifcIDpOOL_NONE         : { tinP.pPoolUse = pPoolUse = 0                                ; break ; }
        case ifcIDpOOL_ADAMtEMP     : { tinP.pPoolUse = pPoolUse = tinP.pAdamGlobal1->pPoolAdamTemp ; break ; }
        case ifcIDpOOL_HOMEtEMP     : { if( !tinP.pAdamGlobal1->pPoolHomeTemp )                                                                                                                                                      tinP.pAdamGlobal1->pPoolHomeTemp = new( 0 , tinP , tinP.pAdamGlobal1->pbzpht , sizeof tinP.pAdamGlobal1->pbzpht ) poolC( tinP , TAG( TAGiDnULL ) , "home.temp"      , flPOOLc_NOTES                                      ) ;   tinP.pPoolUse = pPoolUse = tinP.pAdamGlobal1->pPoolHomeTemp ; break ; }
        case ifcIDpOOL_SCRATCH      : { if( !tinP.pAdamGlobal1->pPoolScratch  )                                                                                                                                                      tinP.pAdamGlobal1->pPoolScratch  = new( 0 , tinP , tinP.pAdamGlobal1->pbzpsc , sizeof tinP.pAdamGlobal1->pbzpsc ) poolC( tinP , TAG( TAGiDnULL ) , "scratch"        , flPOOLc_null  , ifcIDsTATEsPACE_SCRATCH            ) ;   tinP.pPoolUse = pPoolUse = tinP.pAdamGlobal1->pPoolScratch  ; break ; }
        case ifcIDpOOL_ADAMpERM     : { if( !tinP.pAdamGlobal1->pPoolAdamPerm ) { OStEXT(   ostoPoolAdamPerm , 0x20 ) ; OStEXTAK( ostoPoolAdamPerm , "adam.perm." ) ; OStEXTC(  ostoPoolAdamPerm , tinP.pAdamGlobal1->idAdam , 0 ) ; tinP.pAdamGlobal1->pPoolAdamPerm = new( 0 , tinP , tinP.pAdamGlobal1->pbzpap , sizeof tinP.pAdamGlobal1->pbzpap ) poolC( tinP , TAG( TAGiDnULL ) , ostoPoolAdamPerm , flPOOLc_null  , ifcIDsTATEsPACE_SINGLEaDAM( tinP ) ) ; } tinP.pPoolUse = pPoolUse = tinP.pAdamGlobal1->pPoolAdamPerm ; break ; }
        case ifcIDpOOL_HOMEpERM     : { if( !tinP.pAdamGlobal1->pPoolHomePerm )                                                                                                                                                      tinP.pAdamGlobal1->pPoolHomePerm = new( 0 , tinP , tinP.pAdamGlobal1->pbzphp , sizeof tinP.pAdamGlobal1->pbzphp ) poolC( tinP , TAG( TAGiDnULL ) , "home.perm"      , flPOOLc_null  , ifcIDsTATEsPACE_MULTIPLEaDAMS      ) ;   tinP.pPoolUse = pPoolUse = tinP.pAdamGlobal1->pPoolHomePerm ; break ; }
        default :
        {
            __( idPoolP ) ;
            __1 ;
        }
    }

    //if( tinP.pPoolUse != tinP.pAdamGlobal1->pPoolAdamTemp ) tinP.pc Utility[ 0 ] = (countT)tinP.pPoolUse ; //U:: NORMALLY COMMENTED OUT; CAN BE USED ALONG WITH CODE IN poolC::newF TO VERIFY THAT ADAM TEMP IS USED FOR TEMPORARY DROPS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8004.pusec.pusec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8005.pusec.pusec BEGIN
#define DDNAME       "3func.360d8005.pusec.pusec"
#define DDNUMB      (countT)0x360d8005
#define IDFILE      (countT)0x13c4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::puseC( puseC& puseP ) :/*1*/
pPoolUseLag( 0 ) ,
pPoolUse( 0 ) ,
bDeleteUse( 0 ) ,
flagsMode( flPUSEcmODE_null )
{
    TINSL
    if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; }
    pPoolUseLag = tinP.pPoolUse ;
    tinP.pPoolUse = pPoolUse = puseP.pPoolUse ;

    //if( tinP.pPoolUse != tinP.pAdamGlobal1->pPoolAdamTemp ) tinP.pc Utility[ 0 ] = (countT)tinP.pPoolUse ; //U:: NORMALLY COMMENTED OUT; CAN BE USED ALONG WITH CODE IN poolC::newF TO VERIFY THAT ADAM TEMP IS USED FOR TEMPORARY DROPS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8005.pusec.pusec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8006.pusec.operator_poolc_ref BEGIN
#define DDNAME       "3func.360d8006.pusec.operator_poolc_ref"
#define DDNUMB      (countT)0x360d8006
#define IDFILE      (countT)0x13c5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::operator poolC&( voidT )/*1*/
{
    return *pPoolUse ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8006.pusec.operator_poolc_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8007.pusec.pusec BEGIN
#define DDNAME       "3func.360d8007.pusec.pusec"
#define DDNUMB      (countT)0x360d8007
#define IDFILE      (countT)0x13c6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::puseC( voidT ) :/*1*/
pPoolUseLag( 0 ) ,
pPoolUse( 0 ) ,
bDeleteUse( 0 ) ,
flagsMode( flPUSEcmODE_null )
{
    TINSL
    if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; } //U::20170912@1231: ADDED WITHOUT ANALYSIS
    pPoolUse = pPoolUseLag = tinP.pPoolUse ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8007.pusec.pusec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8008.pusec.pusec BEGIN
#define DDNAME       "3func.360d8008.pusec.pusec"
#define DDNUMB      (countT)0x360d8008
#define IDFILE      (countT)0x13c7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/puseC::puseC( tinS& tinP , poolC& poolP ) :/*1*/
pPoolUseLag( tinP.pPoolUse ) ,
pPoolUse( 0 ) ,
bDeleteUse( 0 ) ,
flagsMode( flPUSEcmODE_null )
{
    if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_UNLOCKpOOLiDENTITY ) ) { BLAMMO ; } //U::20170912@1231: ADDED WITHOUT ANALYSIS
    tinP.pPoolUse = pPoolUse = &poolP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d8* : 3func.360d8008.pusec.pusec END
