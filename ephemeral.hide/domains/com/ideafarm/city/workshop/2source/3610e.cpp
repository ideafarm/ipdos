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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610e* : 3func.3610e002.parm_tmadammainf_s.dt_parm_tmadammainf_s BEGIN
#define DDNAME       "3func.3610e002.parm_tmadammainf_s.dt_parm_tmadammainf_s"
#define DDNUMB      (countT)0x3610e002
#define IDFILE      (countT)0x14ad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/parm_tmAdamMainF_S::~parm_tmAdamMainF_S( voidT )/*1*/
{
    TINSL

    puseC( tinP , poolUsedByLauncher ) ;

    DEL( pag6 ) ;
    DEL( pag5 ) ;
    DEL( pag4 ) ;
    DEL( pag3 ) ;
    DEL( pag2 ) ;
    pag1->deregisterHeartF() ;
    DEL( pag1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610e* : 3func.3610e002.parm_tmadammainf_s.dt_parm_tmadammainf_s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610e* : 3func.3610e003.parm_tmadammainf_s.parm_tmadammainf_s BEGIN
#define DDNAME       "3func.3610e003.parm_tmadammainf_s.parm_tmadammainf_s"
#define DDNUMB      (countT)0x3610e003
#define IDFILE      (countT)0x14ae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/parm_tmAdamMainF_S::parm_tmAdamMainF_S( tinS& tinP , countT idAdamP ) :/*1*/
poolUsedByLauncher( PUSE ) ,
pag1( new( 0 , tinP , LF ) adamGlobal1S         ) ,
pag2
(
    (
        pag1->setIdAdamF( idAdamP ) ,
        pag1->registerHeartF() ,
        new( 0 , tinP , LF ) adamGlobal2S
    )
) ,
pag3( new( 0 , tinP , LF ) adamGlobal3S( tinP ) ) ,
pag4( new( 0 , tinP , LF ) adamGlobal4S         ) ,
pag5( new( 0 , tinP , LF ) adamGlobal5S         ) ,
pag6( new( 0 , tinP , LF ) adamGlobal6S( tinP ) ) ,
dadAg1( *tinP.pAdamGlobal1 )
{
    ___( pag1 ) ;
    ___( pag2 ) ;
    ___( pag3 ) ;
    ___( pag4 ) ;
    ___( pag5 ) ;
    ___( pag6 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610e* : 3func.3610e003.parm_tmadammainf_s.parm_tmadammainf_s END
