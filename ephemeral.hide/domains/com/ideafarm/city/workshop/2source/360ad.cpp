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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad001.sourcec.sourcec BEGIN
#define DDNAME       "3func.360ad001.sourcec.sourcec"
#define DDNUMB      (countT)0x360ad001
#define IDFILE      (countT)0x1376


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/


/*
*/
/**/

/*1*/sourceC::sourceC( voidT ) :/*1*/
pcFile( pcFileF() ) ,
cFiles( cFilesF() ) ,
pIdTitle( pIdTitleF() ) ,
cTitles( cTitlesF() )
{
    if( cTitles - cFiles )
    {
        CONoUTrAW3( "sourceC::sourceC: cFiles : " , cFiles , "\r\n" ) ;
        CONoUTrAW3( "sourceC::sourceC: cTitles: " , cTitles , "\r\n" ) ;
        CONoUTrAW( "sourceC::sourceC: Please use IdeaFarm " "(tm) Elves to fully refresh the generated source code\r\nThen delete all ipdos object modules to cause a full rebuild.\r\n" ) ;

        // COHERENCE IN THESE LISTS IS REQUIRED SO THAT DIAGNOSTIC INFORMATION WILL POINT TO THE CORRECT SOURCE FILE
    }

    {
        for( countT off = 0 ; off < cTitles ; off ++ )
            *(countT*)pIdTitle[ off ].post = thirdC::c_strlenIF( pIdTitle[ off ].post + sizeof( countT ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad001.sourcec.sourcec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad002.sourcec.pcfilef BEGIN
#define DDNAME       "3func.360ad002.sourcec.pcfilef"
#define DDNUMB      (countT)0x360ad002
#define IDFILE      (countT)0x1377


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//DUPLICATED IN bench/filepile/1.cpp 0c0000b
// "IC" = "immutable, compressed"
const countT _pcFileI[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.19000005.genFileIds.h"
}
;

sCountT sourceC::pscPoolNewPrivateI[ 1 + sizeof _pcFileI / sizeof _pcFileI[ 0 ] / 2 ] ;
sCountT sourceC::pscPoolDelPrivateI[ 1 + sizeof _pcFileI / sizeof _pcFileI[ 0 ] / 2 ] ;

/*1*/const countT* sourceC::pcFileF( voidT ) const/*1*/
{
    return _pcFileI ;
}

countT sourceC::cFilesF( voidT ) const
{
    return sizeof _pcFileI / sizeof _pcFileI[ 0 ] / 2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad002.sourcec.pcfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad003.sourcec.idfileimmutablef BEGIN
#define DDNAME       "3func.360ad003.sourcec.idfileimmutablef"
#define DDNUMB      (countT)0x360ad003
#define IDFILE      (countT)0x1378


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sourceC::idFileImmutableF( tinS& tinP , const countT idFileP ) const/*1*/
{
    _IO_
    ZE( countT , off ) ;
    while( off < cFiles && idFileP != pcFile[ ( off << 1 ) + 1 ] ) off ++ ;
    ZE( countT , idFileImmutable ) ;
    if( off < cFiles ) idFileImmutable = pcFile[ off << 1 ] ;
    return idFileImmutable ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad003.sourcec.idfileimmutablef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad004.sourcec.pidtitlef BEGIN
#define DDNAME       "3func.360ad004.sourcec.pidtitlef"
#define DDNUMB      (countT)0x360ad004
#define IDFILE      (countT)0x1379


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// "CT" = "compressed, title"
const dictionaryFileTitleS _pIdTitleI[] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.19000006.genFileTitles.h"
}
;

/*1*/const dictionaryFileTitleS* sourceC::pIdTitleF( voidT ) const/*1*/
{
    return _pIdTitleI ;
}

countT sourceC::cTitlesF( voidT ) const
{
    return sizeof _pIdTitleI / sizeof _pIdTitleI[ 0 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad004.sourcec.pidtitlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad005.sourcec.postfiletitlef BEGIN
#define DDNAME       "3func.360ad005.sourcec.postfiletitlef"
#define DDNUMB      (countT)0x360ad005
#define IDFILE      (countT)0x137a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*1*/const osTextT* sourceC::postFileTitleF( tinS& tinP , const countT idFileP ) const/*1*/
{
    //CONDITIONALLY CALLED BY _IO_
    //IN
    ZE( countT , off ) ;
    while( off < cTitles && idFileP != pIdTitle[ off ].id ) off ++ ;
    ZE( const osTextT* , postFileTitle ) ;
    if( off < cTitles ) postFileTitle = pIdTitle[ off ].post + sizeof( countT ) ; //ASSUME: THE WO'TH sizeof( countT ) BYTES IN THE TABLE ENTRY HAVE BEEN INITIALIZED TO costFileTitle

    //OUT
    if( tinP.fingerprint ) ;
    return postFileTitle ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad005.sourcec.postfiletitlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad006.sourcec.idfilerankf BEGIN
#define DDNAME       "3func.360ad006.sourcec.idfilerankf"
#define DDNUMB      (countT)0x360ad006
#define IDFILE      (countT)0x137b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//PSEUDODUPLICATED IN bench/filepile/1.cpp 0c0000b
/*1*/countT sourceC::idFileRankF( tinS& tinP , const countT idFileImmutableP ) const/*1*/
{
    //CONDITIONALLY CALLED BY _IO_
    //IN
    ZE( countT , off ) ;
    while( off < cFiles && idFileImmutableP != pcFile[ off << 1 ] ) off ++ ;
    ZE( countT , idFile ) ;
    if( off < cFiles ) idFile = pcFile[ ( off << 1 ) + 1 ] ;

    //OUT
    if( tinP.fingerprint ) ;
    return idFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad006.sourcec.idfilerankf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad007.sourcec.idfilef BEGIN
#define DDNAME       "3func.360ad007.sourcec.idfilef"
#define DDNUMB      (countT)0x360ad007
#define IDFILE      (countT)0x137c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sourceC::idFileF( tinS& tinP , const osTextT* const postFileP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    //U: conj: ON OS/2 THIS FUNCTION GETS FULLY QUAL NAME.  (ON WINDOWS, IT GETS A NAME LIKE "eb30104.cpp"

    ZE( countT , idFile2 ) ;
    ZE( osTextT* , posti ) ;

    #if defined( __OS2__ )
        posti = thirdC::c_strstrIF( tinP , postFileP , "." ) ; //U: CONJ: THIS IS WRONGO: ASSUME: FILE NUMBER (E.G. "1000104" IS AFTER THE FIRST PERIOD IN THE FULLY QUATAG( TAGiDnULL )ED NAME
    #elif defined( __NT__ )
        posti = (osTextT*)postFileP ;
    #endif

    //IN, OUT ARE SUPPRESSED SO THAT THIS FUNCTION DOES NOT APPEAR IN tinP'S TRACE FOR THIS THREAD
    //THE IN, OUT LINES HERE CAN BE ENABLED IF NEEDED.  THEY ARE COMMENTED OUT ONLY FOR COSMETIC REASONS (TO IMPROVE THE READABILITY OF THE TRACE INFORMATION IN tinS)
    //IN
    if( posti && !POOP )
    {
        #if defined( __OS2__ )
            posti ++ ;
        #endif

        const osTextT postIdi[] = { posti[ 0x5 ] , posti[ 0x6 ] , posti[ 0x7 ] , posti[ 0x8 ] , posti[ 0x9 ] , posti[ 0xa ] , posti[ 0xb ] , 0 } ;

        countT idi = thirdC::c_atoiIF( tinP , postIdi ) ;

        ZE( countT , off ) ;
        while( off < cFiles && idi != pcFile[ off << 1 ] )
            off ++ ;
        if( off < cFiles ) idFile2 = pcFile[ ( off << 1 ) + 1 ] ;
    }
    //OUT

    return idFile2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad007.sourcec.idfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad008.sourcec.sourcef BEGIN
#define DDNAME       "3func.360ad008.sourcec.sourcef"
#define DDNUMB      (countT)0x360ad008
#define IDFILE      (countT)0x137d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sourceC& sourceC::sourceIF( voidT )/*1*/
{
    return processGlobal7I.source ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ad* : 3func.360ad008.sourcec.sourcef END
