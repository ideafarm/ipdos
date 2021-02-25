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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36051* : 3func.36051001.serverinfo2s.dt_serverinfo2s BEGIN
#define DDNAME       "3func.36051001.serverinfo2s.dt_serverinfo2s"
#define DDNUMB      (countT)0x36051001
#define IDFILE      (countT)0x1193


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/serverInfo2S::~serverInfo2S( voidT )/*1*/
{
    if( psttName ) { TINSL tinP.pEther->delF( tinP , psttName ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36051* : 3func.36051001.serverinfo2s.dt_serverinfo2s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36051* : 3func.36051002.serverinfo2s.serverinfo2s BEGIN
#define DDNAME       "3func.36051002.serverinfo2s.serverinfo2s"
#define DDNUMB      (countT)0x36051002
#define IDFILE      (countT)0x1194


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//





/*
\<A HREF=\"5.1720003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/serverInfo2S::serverInfo2S( const countT idPortHintP , const countT flagsSocketP , const strokeS* const psttNameP , countT cSessionMaxP , const countT cArgP , countT time1graceP , countT cWorkersP , const boolT bStateP , const countT cbdVaryingP , translateStateFT translateStateFP , const strokeS* const psttSuffixP , stateFT stateBeginFP , stateFT stateEndFP , sessionsC* const pSessionsP ) :/*1*/
flagsSocket( flagsSocketP ) ,
idPortHint( idPortHintP ) ,
psttName( 0 ) ,
cSessionMax( cSessionMaxP ) ,
cArg( cArgP ) ,
time1grace( time1graceP ) ,
cWorkers( cWorkersP ) ,
bState( bStateP ) ,
cbdVarying( cbdVaryingP ) ,
translateStateF( translateStateFP ) ,
psttSuffix( psttSuffixP ) ,
stateBeginF( stateBeginFP ) ,
stateEndF( stateEndFP ) ,
pSessions( pSessionsP )
{
    if( psttNameP ) { TINSL tinP.pEther->strMakeF( tinP , LF , psttName , psttNameP ) ; ___( psttName ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36051* : 3func.36051002.serverinfo2s.serverinfo2s END
