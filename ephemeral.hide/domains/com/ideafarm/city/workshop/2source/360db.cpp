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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360db* : 3func.360db002.tells.tells BEGIN
#define DDNAME       "3func.360db002.tells.tells"
#define DDNUMB      (countT)0x360db002
#define IDFILE      (countT)0x13d1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/tellS::tellS( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idTypeP , const countT cbNoteP ) :/*1*/
finger1( 0 ) ,
idTell( ( putNegAM( finger1 , FINGERnEG_TELEMETRY1 ) , !tinP.pAdamGlobal1 ? 0 : 1 + incv02AM( tinP.pAdamGlobal1->idTellLath ) ) ) ,
idLineTalking( idLineCtP ) ,
idiFileTalking( idiFileCtP ) ,
idCell( !tinP.pAdamGlobal1 ? 0 : tinP.pAdamGlobal1->idCell ) ,
idAdamRoot( processGlobal1I.idAdamRoot ) ,
idAdam( !tinP.pAdamGlobal1 ? 0 : tinP.pAdamGlobal1->idAdam ) ,
idThread( tinP.monitor.idThread ) ,
idPhase2Talking( tinP.idPhase2 ) ,
idPhase3Talking( tinP.idPhase3 ) ,
bIda( 0 ) ,
ipMe( 0 ) ,
osTid( dosGetInfoBlocksIdThreadIF() ) ,
osPid( dosGetInfoBlocksIdProcessIF( tinP ) ) ,
flags( flTELLc_null ) ,
idType( idTypeP ) ,
cbNote( cbNoteP ) ,
finger2( 0 )
{
    //COMMENTED OUT BECAUSE THIS HAPPENS FOR 0130001 (INSTALLER)
    //static bDone ;
    //if( !bDone )
    //{
    //    if( !idAdamRoot ) { bDone = 1 ; POPUP( "tellS: idAdamRoot is null" ) ; }
    //    if( !idAdam     ) { bDone = 1 ; POPUP( "tellS: idAdam is null" ) ; }
    //}

    putNegAM( finger2 , FINGERnEG_TELEMETRY2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360db* : 3func.360db002.tells.tells END
