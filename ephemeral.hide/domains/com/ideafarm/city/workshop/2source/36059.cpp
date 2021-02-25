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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059002.homes.dt_homes BEGIN
#define DDNAME       "3func.36059002.homes.dt_homes"
#define DDNUMB      (countT)0x36059002
#define IDFILE      (countT)0x11bf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/homeS::~homeS( voidT )/*1*/
{
    TINSL

    putNegAM( *(countT*)&finger , FINGERnEG_HOMEszOMBIE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059002.homes.dt_homes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059003.homes.homes BEGIN
#define DDNAME       "3func.36059003.homes.homes"
#define DDNUMB      (countT)0x36059003
#define IDFILE      (countT)0x11c0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/homeS::homeS( tinS& tinP ) :/*1*/
finger( 0 ) ,
idFormat( 1 ) ,
idMe( 1 + incv02AM( slabS::slabF().cHome ) ) ,
idSerialLath( 0 ) ,
idCellLath( 0 ) ,
osTicksAtCt( thirdC::osTimeTicksSinceBootIF() ) ,
timeBoot1( 0 ) ,
timeBoot2( 0 ) ,
grabTimeUnique( tinP , TAG( TAGiDnULL ) , flGRABc_DISABLED|flGRABc_INTERpROCESS ) ,
timeUniqueLath1( 0 ) ,
timeUniqueLath2( 0 ) ,
flags( flHOMEs_null ) ,
//U::flags( flHOMEs_TRACEsILENCED | flHOMEs_TRACEnOdIVERT ) , //U:: flHOMEs_null IN PRODUCTION ; FLAGS ARE USED HERE TO LIMIT TRACING SO THAT PARTICULAR BUGS CAN BE INVESTIGATED
flagsUtility( flHOMEsuTILITY_null ) ,
flagsAdams( flHOMEsaDAMS_null ) ,
iduuHome( 0 ) ,
idPortKernelMonitor( 0 ) ,
idPortSerialNumberDispenser( 0 ) ,
idPortListServerEmailIdAccount( 0 ) ,
idPortListServerIdAccountDescription( 0 ) ,
idPortListMoneyBuckets( 0 ) ,
idPortCloak( 0 ) ,
idRank( 0 ) ,
cSecretServerRegistrationsSeen( 0 ) ,
offNextSuperRandom( 0 ) ,
cNextSuperRandom( 0 ) ,
grabSuperRandom( tinP , TAG( TAGiDnULL ) , flGRABc_DISABLED|flGRABc_INTERpROCESS ) ,
idVersionIpdosMe( 0 ) ,
idVersionIpdosTest( 0 ) ,
idVersionIpdosProduction( 0 ) ,
idVersionIpdosNag( 0 ) ,
idVersionIpdosBan( 0 ) ,
cReferencesLake( 0 ) ,
fliGrab( 0 ) ,
idStepSoil( 0 )
{
    putNegAM( *(countT*)&finger , FINGERnEG_HOMEs ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcSuperRandom     , sizeof pcSuperRandom     ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcUtility         , sizeof pcUtility         ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pFireAll          , sizeof pFireAll          ) ;
    thirdC::c_memsetIF( tinP , (byteT*)postDriverNameNew , sizeof postDriverNameNew ) ;
    thirdC::c_memsetIF( tinP , (byteT*)postDriverNameOld , sizeof postDriverNameOld ) ;
    thirdC::c_memsetIF( tinP , (byteT*)postIdHomeGlobal  , sizeof postIdHomeGlobal  ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcTallyIn         , sizeof pcTallyIn         ) ;
    thirdC::c_memsetIF( tinP , (byteT*)postHome          , sizeof postHome          ) ;

    //OStEXT( ostoSay , TUCK << 2 ) ;
    //OStEXTAK( ostoSay , "\r\nhomeS::homeS [pb_pPoolReg,pb_pPoolRegEnd]: " ) ;
    //OStEXTC(  ostoSay , pb_pPoolReg , '0' ) ;
    //OStEXTAK( ostoSay , "    " ) ;
    //OStEXTC(  ostoSay , pb_pPoolReg + sizeof pb_pPoolReg , '0' ) ;
    //CONoUTrAW( ostoSay ) ;

    //if( tinP.pc Utility[ 0 ] )
    {
        for( countT offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
        {
            byteT* pbAt    = pb_pPoolReg + offr * sizeof( poolRegistrationS ) ;
            byteT* pbAtEnd = pbAt + sizeof( poolRegistrationS ) ;

            //OStEXT( ostoSay , TUCK << 2 ) ;
            //OStEXTAK( ostoSay , "\r\nhomeS::homeS [offr,pbAt,pbAtEnd]         : " ) ;
            //OStEXTC(  ostoSay , pbAt , '0' ) ;
            //OStEXTAK( ostoSay , "    " ) ;
            //OStEXTC(  ostoSay , pbAtEnd , '0' ) ;
            //CONoUTrAW( ostoSay ) ;

            new( 0 , tinP , pbAt , sizeof( poolRegistrationS ) ) poolRegistrationS( tinP ) ;
            //new( 0 , tinP , pb_pPoolReg + offr * sizeof( poolRegistrationS ) , sizeof( poolRegistrationS ) ) poolRegistrationS( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059003.homes.homes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059004.homes.homeif BEGIN
#define DDNAME       "3func.36059004.homes.homeif"
#define DDNUMB      (countT)0x36059004
#define IDFILE      (countT)0x11c1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$homeIF.0.html\"\>instances\</A\>
\<A HREF=\"5.17c0004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/homeS& homeS::homeIF( voidT )/*1*/
{
    homeS* ph = F(processGlobal1I.flCt) & flCTdTg_napHomeI && !( F(processGlobal1I.flDt) & flCTdTg_napHomeI ) ? (homeS*)(byteT*)processGlobal3I.napHome : 0 ;
    return *ph ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059004.homes.homeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059005.homes.superrandomf BEGIN
#define DDNAME       "3func.36059005.homes.superrandomf"
#define DDNUMB      (countT)0x36059005
#define IDFILE      (countT)0x11c2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pcP
  must be 0
 ccP
  can be 0
   if 0 then nothing is done
   else i am being called to request ccP super random values
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001033c.flHOMEsUPERrANDOM!||
*/
/**/

/*1*/voidT homeS::superRandomIF( tinS& tinP , countT*& pcP , countT& ccP , const flagsT flagsP )/*1*/
{
    homeS* ph = F(processGlobal1I.flCt) & flCTdTg_napHomeI && !( F(processGlobal1I.flDt) & flCTdTg_napHomeI ) ? (homeS*)(byteT*)processGlobal3I.napHome : 0 ;
    const countT cca = !ph ? 0 : sizeof ph->pcSuperRandom / sizeof ph->pcSuperRandom[ 0 ] ;
    if( ccP > cca ) { BLAMMO ; }
    else
    {
        const boolT bExact  =  !( F(flagsP) & flHOMEsUPERrANDOM_STILLhUNGRYoK ) ;
        const boolT bDelete = !!( F(flagsP) & flHOMEsUPERrANDOM_DELETE        ) ;
    
        if( ph )
        {
            ph->grabSuperRandom.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
            if( ph->cNextSuperRandom && ccP <= ph->cNextSuperRandom || !bExact )
            {
                if( ccP > ph->cNextSuperRandom ) ccP = ph->cNextSuperRandom ;

                PUSE.newF( tinP , LF , *(byteT**)&pcP , ccP * sizeof( countT ) ) ; ___( pcP ) ;

                countT cc1 = cca - ph->offNextSuperRandom ;
                if( cc1 > ccP ) cc1 = ccP ;
                const countT cc2 = cc1 < ccP ? ccP - cc1 : 0 ;
                if( cc1 ) thirdC::c_memcpyIF( tinP , (byteT*)  pcP         , (byteT*)( ph->pcSuperRandom + ph->offNextSuperRandom ) , cc1 * sizeof( countT ) ) ;
                if( cc2 ) thirdC::c_memcpyIF( tinP , (byteT*)( pcP + cc1 ) , (byteT*)  ph->pcSuperRandom                            , cc2 * sizeof( countT ) ) ;
    
                if( bDelete )
                {
                    ph->offNextSuperRandom = ( ph->offNextSuperRandom + ccP ) % cca ;
                    ph->cNextSuperRandom -= ccP ;
                }
            }

            ph->grabSuperRandom.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36059* : 3func.36059005.homes.superrandomf END
