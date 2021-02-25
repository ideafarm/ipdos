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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f002.sleepc.dt_sleepc BEGIN
#define DDNAME       "3func.3604f002.sleepc.dt_sleepc"
#define DDNUMB      (countT)0x3604f002
#define IDFILE      (countT)0x118f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1700002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/sleepC::~sleepC( voidT )/*1*/
{
    if( pTin->idTinNamed != ifcIDtINnAMED_tinHeartI )
    {
        TINSL
        if( pTin != &tinP )
        {
            OStEXT( ostoBuf , 0x80 )
            OStEXTAK( ostoBuf , "\r\npTin : \"" ) ;
            OStEXTA( ostoBuf , pTin->postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , pTin->idTin , 0 ) ;
            OStEXTAK( ostoBuf , "\r\nTINSL: \"" ) ;
            OStEXTA( ostoBuf , tinP.postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , tinP.idTin , 0 ) ;
            OStEXTAK( ostoBuf , " bTlsEarlyLateI: " ) ;
            OStEXTC( ostoBuf , bTlsEarlyLateIF() , 0 ) ;
            //OStEXTC( ostoBuf , bTlsEarlyLateI , 0 ) ;
            OStEXTAK( ostoBuf , "\r\n" ) ;

            etherC::ifcSayIF( ostoBuf , flSAY_LOG | flSAY_APPEND ) ;

            BLAMMO ;
        }
    }

    if( bOuter )
    {
        //CODE SYNCH: 1700002 17f0006
        //SIMULATE WHAT grabC::ungrabF WOULD DO TO RESET THE OBJECT
        pTin->grabPseudo.osTid = pTin->grabPseudo.cGrabbed = 0 ;
        pTin->grabPseudo.idGrabberOk ++ ;
    }

    if( bOsCall ) pTin->grabPseudo.flags &= ~( F(flGRABc_PSEUDOoScALL) ) ;
    (countT&)pTin->grabPseudo.idLineCt  = idLineCtSave  ;
    (countT&)pTin->grabPseudo.idiFileCt = idiFileCtSave ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f002.sleepc.dt_sleepc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f003.sleepc.sleepc BEGIN
#define DDNAME       "3func.3604f003.sleepc.sleepc"
#define DDNUMB      (countT)0x3604f003
#define IDFILE      (countT)0x1190


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1700003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/sleepC::sleepC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const boolT bOsCallP ) :/*1*/
idLineCtSave( tinP.grabPseudo.idLineCt ) ,
idiFileCtSave( tinP.grabPseudo.idiFileCt ) ,
pTin( &tinP ) ,
bOsCall( bOsCallP ) ,
bOuter( !tinP.grabPseudo.cGrabbed )
{
    if( pTin == &processGlobal3I.tinVeryVeryEarlyLateMain && F(processGlobal1I.flCt) & flCTdTg_tinVeryEarlyLateMainI && !( F(processGlobal1I.flDt) & flCTdTg_tinVeryEarlyLateMainI ) )
    {
        BLAMMO ;
    }

    blammoIfIF( tinP ) ;

    //CODEsYNC DUPLICATE CODE: 1700005 1700003
    if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_EXCEPTIONrEPORTINGiNpROGRESS ) )
    {
        SET_bStopOk

        if( !_bStopOk )
        {

            LOGcALLnEST( "sleep blammo 1" )
            OStEXT( ostor , 0x100 ) ;
            OStEXTAK( ostor , "sleep blammo 1 (sleepC constructor) on thread \"" )
            OStEXTA( ostor , tinP.postThreadName )
            OStEXTAK( ostor , "\"; pcUtilityI[1] is " ) ;
            //OStEXTC( ostor , tinP.pc Utility[ 1 ] , 0 ) ;
            OStEXTAK( ostor , "; idLineMile is " ) ;
            OStEXTC( ostor , tinP.idLineMile , 0 ) ;
            OStEXTAK( ostor , "\r\n" ) ;

            etherC::ifcSayIF( ostor , flSAY_LOG | flSAY_APPEND ) ;

            BLAMMO ;
        }
    }

    if( pTin->idTinNamed != ifcIDtINnAMED_tinHeartI )
    {
        TINSL
        if( pTin != &tinP )
        {
            OStEXT( ostoBuf , 0x80 )
            OStEXTAK( ostoBuf , "\r\npTin : \"" ) ;
            OStEXTA( ostoBuf , pTin->postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , pTin->idTin , 0 ) ;
            OStEXTAK( ostoBuf , "\r\nTINSL: \"" ) ;
            OStEXTA( ostoBuf , tinP.postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , tinP.idTin , 0 ) ;
            OStEXTAK( ostoBuf , " bTlsEarlyLateI: " ) ;
            OStEXTC( ostoBuf , bTlsEarlyLateIF() , 0 ) ;
            //OStEXTC( ostoBuf , bTlsEarlyLateI , 0 ) ;
            OStEXTAK( ostoBuf , "\r\n" ) ;

            etherC::ifcSayIF( ostoBuf , flSAY_LOG | flSAY_APPEND ) ;

            BLAMMO ;
        }
    }

    if( bOuter )
    {
        //SIMULATE WHATEVER grabF DOES TO MAKE grabPseudo LOOK GRABBED
        //CODE SYNCH: 17f0005 1700003
        countT idGrabberMe = 1 + incv02AM( pTin->grabPseudo.idGrabberHigh ) ;
        if( pTin->grabPseudo.idGrabberOk != idGrabberMe )
        {
            { BLAMMO ; }
        }
        pTin->grabPseudo.stat.cCollisionsNew = 0 ; //U:MIGHT OVERWRITE A FEW COLLISIONS THAT SHOULD BE COUNTED AS NEW (I.E. SINCE INCREMENTING idGrabberOk)
        if( pTin->grabPseudo.cGrabbed == - 1 )
        {
            { BLAMMO ; }
        }
        if( pTin->grabPseudo.osTid )
        {
            { BLAMMO ; }
        }
        else                         pTin->grabPseudo.osTid = tinP.osTid ;
        if( pTin->grabPseudo.stat.cAcquisitions != - 1 ) inc02AM( pTin->grabPseudo.stat.cAcquisitions ) ;
        pTin->grabPseudo.cGrabbed ++ ;
    }
    (countT&)pTin->grabPseudo.idLineCt  = idLineCtP  ;
    (countT&)pTin->grabPseudo.idiFileCt = idiFileCtP ;
    if( bOsCall ) pTin->grabPseudo.flags |= flGRABc_PSEUDOoScALL ; //IT IS ILLEGAL, THOUGH NOT ENFORCED, TO CONSTRUCT A sleepC OBJECT ON THIS THREAD WHILE I EXIST; THIS IS BECAUSE I DO NOT SAVE AND RESTORE THE grabC FLAGS

    if( pbBitsCtP ) ; //U::
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f003.sleepc.sleepc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f004.sleepc.operator_increment BEGIN
#define DDNAME       "3func.3604f004.sleepc.operator_increment"
#define DDNUMB      (countT)0x3604f004
#define IDFILE      (countT)0x1191


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1700004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT sleepC::operator ++( voidT )/*1*/
{
    if( pTin->idTinNamed != ifcIDtINnAMED_tinHeartI )
    {
        TINSL
        if( pTin != &tinP )
        {
            OStEXT( ostoBuf , 0x80 )
            OStEXTAK( ostoBuf , "\r\npTin : \"" ) ;
            OStEXTA( ostoBuf , pTin->postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , pTin->idTin , 0 ) ;
            OStEXTAK( ostoBuf , "\r\nTINSL: \"" ) ;
            OStEXTA( ostoBuf , tinP.postThreadName ) ;
            OStEXTAK( ostoBuf , "\" idTin: " ) ;
            OStEXTC( ostoBuf , tinP.idTin , 0 ) ;
            OStEXTAK( ostoBuf , " bTlsEarlyLateI: " ) ;
            OStEXTC( ostoBuf , bTlsEarlyLateIF() , 0 ) ;
            //OStEXTC( ostoBuf , bTlsEarlyLateI , 0 ) ;
            OStEXTAK( ostoBuf , "\r\n" ) ;

            etherC::ifcSayIF( ostoBuf , flSAY_LOG | flSAY_APPEND ) ;

            BLAMMO ;
        }
    }

    if( pTin->grabPseudo.stat.cCollisions    != - 1 ) pTin->grabPseudo.stat.cCollisions    ++ ;
    if( pTin->grabPseudo.stat.cCollisionsNew != - 1 ) pTin->grabPseudo.stat.cCollisionsNew ++ ;
}

 voidT sleepC::operator ++( sCountT scP )
{
    TINSL
    BLAMMO ;
    if( scP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604f* : 3func.3604f004.sleepc.operator_increment END
