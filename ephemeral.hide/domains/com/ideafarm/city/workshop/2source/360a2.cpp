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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2002.vbodys.dt_vbodys BEGIN
#define DDNAME       "3func.360a2002.vbodys.dt_vbodys"
#define DDNUMB      (countT)0x360a2002
#define IDFILE      (countT)0x1323


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/vBodyS::~vBodyS( voidT )/*1*/
{
    TINSL
    *(countT*)&neverZe = 0 ; //SUBSEQUENT switchC::freeNullsF WILL FREE MY FLAVOR
    tinP.pEther->delF( tinP , psttDone ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2002.vbodys.dt_vbodys END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2003.vbodys.vbodys BEGIN
#define DDNAME       "3func.360a2003.vbodys.vbodys"
#define DDNUMB      (countT)0x360a2003
#define IDFILE      (countT)0x1324


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/vBodyS::vBodyS( voidT ) :/*1*/
neverZe( SWITCHfLAVORpATCH ) , //ALREADY INITIALIZED BY switchC::operator countT&(), UNLESS FLAVOR IS BEING REUSED
zBaton_ppsttSpec( 0 ) ,
ppsttSpec( 0 ) ,
flags( flVbODYs_null ) ,
idPhase( 0 ) ,
psttDone( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2003.vbodys.vbodys END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2004.vbodys.operator_assign BEGIN
#define DDNAME       "3func.360a2004.vbodys.operator_assign"
#define DDNUMB      (countT)0x360a2004
#define IDFILE      (countT)0x1325


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/vBodyS& vBodyS::operator =( vBodyS& vbP )/*1*/
{
    TINSL

    zBaton_ppsttSpec = vbP.zBaton_ppsttSpec ;
    ppsttSpec        = vbP.ppsttSpec ;
    flags            = vbP.flags ;
    idPhase          = vbP.idPhase ;

    tinP.pEther->delF( tinP , psttDone ) ;
    psttDone = psttOldC( tinP , *tinP.pEther , vbP.psttDone ) ; ___( psttDone ) ;

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2004.vbodys.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2005.vbodys.operator_shiftleft BEGIN
#define DDNAME       "3func.360a2005.vbodys.operator_shiftleft"
#define DDNUMB      (countT)0x360a2005
#define IDFILE      (countT)0x1326


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT vBodyS::operator <<( soulC& sP )/*1*/
{
    TINSL

    zBaton_ppsttSpec = 0 ; sP >> *(countT*)&zBaton_ppsttSpec ;
    ppsttSpec        = 0 ; sP >> *(countT*)&ppsttSpec        ;
    flags            = 0 ; sP >> flags                       ;
    idPhase          = 0 ; sP >> idPhase                     ;

    tinP.pEther->delF( tinP , psttDone ) ;
    sP >> psttDone ; ___( psttDone ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2005.vbodys.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2006.vbodys.operator_shiftright BEGIN
#define DDNAME       "3func.360a2006.vbodys.operator_shiftright"
#define DDNUMB      (countT)0x360a2006
#define IDFILE      (countT)0x1327


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT vBodyS::operator >>( soulC& sP )/*1*/
{
    TINSL

    sP << (countT)zBaton_ppsttSpec ;
    sP << (countT)ppsttSpec ;
    sP << flags ;
    sP << idPhase ;
    sP << psttDone ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a2* : 3func.360a2006.vbodys.operator_shiftright END
