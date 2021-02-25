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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df002.sexheads.dt_sexheads BEGIN
#define DDNAME       "3func.360df002.sexheads.dt_sexheads"
#define DDNUMB      (countT)0x360df002
#define IDFILE      (countT)0x13d5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sexHeadS::~sexHeadS( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df002.sexheads.dt_sexheads END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df003.sexheads.sexheads BEGIN
#define DDNAME       "3func.360df003.sexheads.sexheads"
#define DDNUMB      (countT)0x360df003
#define IDFILE      (countT)0x13d6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sexHeadS::sexHeadS( tinS& tinP , const countT expCbDropP , const countT expSlotsP , const osTextT* const postP , const flagsT flagsCtP ) :/*1*/
cRef( 0 ) ,
expCbDrop( expCbDropP ) ,
expSlots( expSlotsP ) ,
flagsCtCopy( flagsCtP ) ,
cSlotsAvoidLo( 0 ) ,
cSlotsAvoidHi( 0 )
{
    thirdC::c_strcpyIF( tinP , postName , postP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df003.sexheads.sexheads END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df004.sexheads.glassf BEGIN
#define DDNAME       "3func.360df004.sexheads.glassf"
#define DDNUMB      (countT)0x360df004
#define IDFILE      (countT)0x13d7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexHeadS::glassF( tinS& tinP , strokeS*& psttP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    tinP.pEther->strMakeF( tinP , LF , psttP , T("sexHeadC [cRef,expCbDrop,expSlots,flagsCtCopy,cSlotsAvoidLo,cSlotsAvoidHi,postName]: ") , TUCK << 1 ) ; ___( psttP ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(cRef         ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(expCbDrop    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(expSlots     ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(flagsCtCopy  ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(cSlotsAvoidLo,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
    tinP.pEther->strFuseF( tinP , psttP , TF3(cSlotsAvoidHi,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df004.sexheads.glassf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df005.sexheads.tracef BEGIN
#define DDNAME       "3func.360df005.sexheads.tracef"
#define DDNUMB      (countT)0x360df005
#define IDFILE      (countT)0x13d8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexHeadS::traceF( tinS& tinP ) const/*1*/
{
    if( tinP.pEther )
    {
        ZE( strokeS* , psttr ) ;
        tinP.pEther->strMakeF( tinP , LF , psttr , T("sexHeadC [cRef,expCbDrop,expSlots,flagsCtCopy,cSlotsAvoidLo,cSlotsAvoidHi,postName]: ") , TUCK << 2 ) ; ___( psttr ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(cRef         ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(expCbDrop    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(expSlots     ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(flagsCtCopy  ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(cSlotsAvoidLo,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , TF3(cSlotsAvoidHi,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
        tinP.pEther->strFuseF( tinP , psttr , T("\"")+T(postName)+T("\"") ) ;

        etherC::etRockIF( tinP ).traceF( tinP , psttr ) ;
        tinP.pEther->delF( tinP , psttr ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360df* : 3func.360df005.sexheads.tracef END
