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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ee* : 3func.360ee001.listwalkargs.listwalkargs BEGIN
#define DDNAME       "3func.360ee001.listwalkargs.listwalkargs"
#define DDNUMB      (countT)0x360ee001
#define IDFILE      (countT)0x143e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/listWalkArgOldS::listWalkArgOldS( tinS& tinP ) :/*1*/
flagsInspect( flAPTiNSPECT_null ) ,
flagsAttach( flAPTaTTACH_null ) ,
flagsDetach( flAPTdETACH_null ) ,
flagsWalk( flLISTwALKoLD_null ) ,
idTypeInspect( 0 ) ,
idTypeAttach( 0 ) ,
idTypeDetach( 0 ) ,
idNameAttached( 0 ) ,
cValueAttached( 0 ) ,
offNestLevelIdNameFound( 0 ) ,
idNameFound( 0 ) ,
cValueFound( 0 ) ,
offNestLevel( 0 ) ,
pStk_idNameFound( 0 ) ,
pStk_cValueFound( 0 ) ,
pStk_aptPrune( 0 ) ,
idNameSpec( 0 ) ,
cValueTestSpec( 0 ) ,
idModeTestInspectName( ifcIDmODEtEST_EQ ) ,
idModeTestInspectValue( ifcIDmODEtEST_EQ ) ,
cValueAttachSpec( 0 ) ,
pcValueAttachSpecLath( 0 )
{
    thirdC::c_memsetIF( tinP , (byteT*)pcUtility , sizeof pcUtility ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ee* : 3func.360ee001.listwalkargs.listwalkargs END
