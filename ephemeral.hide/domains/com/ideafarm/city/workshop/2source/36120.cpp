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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120002.spacec.dt_spacec BEGIN
#define DDNAME       "3func.36120002.spacec.dt_spacec"
#define DDNUMB      (countT)0x36120002
#define IDFILE      (countT)0x14f6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/spaceC::~spaceC( voidT )/*1*/
{
    TINSL
    countT cFlavors = swSpace.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLever_rgb = swSpace.leverF( tinP , idf ) ;
        spaceS* pSpace = (spaceS*)&(countT&)swSpace ;
        DELzOMBIE( pSpace ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120002.spacec.dt_spacec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120003.spacec.spacec BEGIN
#define DDNAME       "3func.36120003.spacec.spacec"
#define DDNUMB      (countT)0x36120003
#define IDFILE      (countT)0x14f7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/spaceC::spaceC( tinS& tinP , etherC& etherP , const associateC& vieweeP ) :/*1*/
assViewC( IDgROUP , vieweeP , sizeof *this ) ,
ether( etherP ) ,
cLever_rgb( 0 ) ,
swSpace( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLever_rgb , 0 , sizeof( spaceS ) ) ,
pEye( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120003.spacec.spacec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120004.spacec.pelf BEGIN
#define DDNAME       "3func.36120004.spacec.pelf"
#define DDNUMB      (countT)0x36120004
#define IDFILE      (countT)0x14f8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
caller must set thread priority to RUDE
 this can be done with "grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ; "
*/
/**/

/*1*/voidT spaceC::pelF( tinS& tinP , pelC*& pPelP , deviceC& deviceP )/*1*/
{
    _IO_

    if( pPelP ) { BLAMMO ; }

    pPelP = new( 0 , tinP , LF ) pelC( tinP , ether , deviceP , viewee ) ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    if( pPelP )
    {
        countT cFlavors = swSpace.cFlavorsF( tinP ) ;
        countT cPending = cFlavors ;

        etherC::etRockIF( tinP ).traceF( tinP , T("pelF/pushJob/+") ) ;

        // EXECUTION OF THIS SNIPPET RANGES FROM 0 TIME TO 139 TIME (1/20 SECOND)
        // IT IS THE MOST INTERESTING SEGMENT OF CODE FOR STUDYING ANIMATION SPEED AND VARIABILITY THEREOF
        // THESE TIMES ARE FOR 1 GLYPH IN ADAM 6ae
        //
        /*O*/ for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        /*O*/ {
        /*O*/     cLever_rgb              = swSpace.leverF( tinP , idf ) ;
        /*O*/     const spaceS* pSpace    = (spaceS*)&(countT&)swSpace ;
        /*O*/     pelS*         pPel      = (pelS*)&(*pPelP)[ cLever_rgb ] ; // *pPel IS NOT YET CONSTRUCTED ; IT WILL BE CONSTRUCTED IN PASS 2
        /*O*/ 
        /*O*/     drawJobS job( cLever_rgb , tinP.pSgnUtility , cPending , *this , *pSpace , *pPel ) ;
        /*O*/     *tinP.pAdamGlobal1->_deviceC_pStkJob << (byteT*)&job ;
        /*O*/ }

        etherC::etRockIF( tinP ).traceF( tinP , T("pelF/pushJob/-") ) ;

        //U:: 20151023@1047:  DEADLOCK OCCURS WITHIN SEVERAL TICK HERE BECAUSE I (tmDrawF) HAVE GRABBED deviceP AND tmDisplayF/liveF/messageHandler CANNOT GRAB deviceP SO CANNOT EVER GIVE THE SIGN
        //THIS INDICATES A DESIGN ERROR, BUT I CANNOT FIX IT UNTIL I AM AGAIN FAMILIAR WITH THE CODE, WHICH WOULD TAKE SEVERAL STRONGS OF WORKING WITH IT
        //THE UNGRAB/GRAB HERE DOES NOT WORK FOR SOME REASON
        //CONJ: I CAN ELIMINATE THE ISSUE BY JUST ELIMINATING THE USE OF THE SIGN
        //CONJ: THE FUNCTION OF THE SIGN IS TO PREVENT FILLING UP THE DRAWING JOB STACK
        //ANOTHER WAY TO AVOID THAT IS SIMPLY TO NAP OR YIELD HERE UNTIL THE STACK IS EMPTY

        countT cUngrabsDone = deviceP.ungrabF( tinP , flGRABcUNGRABf_IF | flGRABcUNGRABf_ALLrECURSIONS ) ;  //20151023@0943: ADDED TO AVOID A DEADLOCK OBSERVED AT WILL BY WAITING SEVERAL TICKS USING ADAM 6ae
        tinP.pSgnUtility->waitF( tinP ) ;
        while( cUngrabsDone -- ) deviceP.grabF( tinP , TAG( TAGiDnULL ) ) ;                                 //20151023@0943: ADDED TO AVOID A DEADLOCK OBSERVED AT WILL BY WAITING SEVERAL TICKS USING ADAM 6ae
    }
    THREADmODE1rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120004.spacec.pelf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120005.spacec.operator_element BEGIN
#define DDNAME       "3func.36120005.spacec.operator_element"
#define DDNUMB      (countT)0x36120005
#define IDFILE      (countT)0x14f9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const spaceS& spaceC::operator []( countT rgbP )/*1*/
{
    cLever_rgb = rgbP ;
    return *(const spaceS*)&(countT&)swSpace ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36120* : 3func.36120005.spacec.operator_element END
