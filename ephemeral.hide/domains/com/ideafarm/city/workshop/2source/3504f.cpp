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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3504f* : 3func.3504f005.sleepc.blammoifif BEGIN
#define DDNAME       "3func.3504f005.sleepc.blammoifif"
#define DDNUMB      (countT)0x3504f005
#define IDFILE      (countT)0xb09


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$blammoIfIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1700005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT sleepC::blammoIfIF( tinS& tinP )/*1*/
{
    //CODEsYNC DUPLICATE CODE: 1700005 1700003
    if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_EXCEPTIONrEPORTINGiNpROGRESS ) )
    {
        //NEXT LINE COMMENTED OUT SO I CAN BE CALLED BY sleepC::sleepC TO ENSURE THAT CONSTRUCTING CODE MAY, AT CT TIME, SLEEP
        //if( !tinP.grabPseudo.cGrabbed            ) { BLAMMO ; }
        if( tinP.grabPseudo.osTid && tinP.grabPseudo.osTid != tinP.osTid ) { BLAMMO ; }

        SET_bStopOk
        if( !_bStopOk )
        {
            LOGcALLnEST( "sleep blammo 2" )
            OStEXT( ostor , 0x100 ) ;
            OStEXTAK( ostor , "sleep blammo 2 (blammoIfIF) on thread \"" )
            OStEXTA( ostor , tinP.postThreadName )
            OStEXTAK( ostor , "\"; pc" "UtilityI[1] is " ) ;
            //OStEXTC( ostor , tinP.pc Utility[ 1 ] , 0 ) ;
            OStEXTAK( ostor , "; idLineMile is " ) ;
            OStEXTC( ostor , tinP.idLineMile , 0 ) ;
            OStEXTAK( ostor , "\r\n" ) ;
            etherC::ifcSayIF( ostor , flSAY_LOG | flSAY_APPEND ) ;
            LOGrAW( ostor ) ;

            BLAMMO ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3504f* : 3func.3504f005.sleepc.blammoifif END
