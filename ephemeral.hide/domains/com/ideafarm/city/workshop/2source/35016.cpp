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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35016* : 3func.35016096.switchstackc.newrecyclableif BEGIN
#define DDNAME       "3func.35016096.switchstackc.newrecyclableif"
#define DDNUMB      (countT)0x35016096
#define IDFILE      (countT)0xaff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/switchStackC* switchStackC::newRecyclableIF( tinS& tinP , const countT idTypeLeverP , const flagsT flagsSwitchP , const countT c_pLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , const countT c_pcpLeverLathRefP )/*1*/
{
    __( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE && !( F(flagsSwitchP) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) ; //WILL BE DESTROYED BY THREAD main AND MIGHT BE DISPENSED TO ANOTHER THREAD, SO WON'T DO THIS
    __( F(flagsStackP)  & flSTACKc_DOnOTsERIALIZE && !( F(flagsStackP)  & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) ; //WILL BE DESTROYED BY THREAD main AND MIGHT BE DISPENSED TO ANOTHER THREAD, SO WON'T DO THIS

    ZE( switchStackC* , pSwsNew ) ;
    switch( idTypeLeverP )
    {
        case ifcIDtYPElEVER_countT      : { pSwsNew = new( 0 , tinP , LF ) switchStackC( tinP , etherC::etRockIF( tinP ) , TAG( TAGiDnULL ) , flagsSwitchP ,   *(countT*)c_pLeverP , flagsStackP , idTypeP , idGrabLayerP , (countT*)c_pcpLeverLathRefP ) ; break ; }
        case ifcIDtYPElEVER_PTR_strokeS : { pSwsNew = new( 0 , tinP , LF ) switchStackC( tinP , etherC::etRockIF( tinP ) , TAG( TAGiDnULL ) , flagsSwitchP , *(strokeS**)c_pLeverP , flagsStackP , idTypeP , idGrabLayerP , (countT*)c_pcpLeverLathRefP ) ; break ; }
        case ifcIDtYPElEVER_PTR_plateC  : { pSwsNew = new( 0 , tinP , LF ) switchStackC( tinP , etherC::etRockIF( tinP ) , TAG( TAGiDnULL ) , flagsSwitchP ,  *(plateC**)c_pLeverP , flagsStackP , idTypeP , idGrabLayerP , (countT*)c_pcpLeverLathRefP ) ; break ; }
    }

    return pSwsNew ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35016* : 3func.35016096.switchstackc.newrecyclableif END
