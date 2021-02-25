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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b002.riverc.dt_riverc BEGIN
#define DDNAME       "3func.3602b002.riverc.dt_riverc"
#define DDNUMB      (countT)0x3602b002
#define IDFILE      (countT)0x108e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1370002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3a30104.1.1.0.html\"\>3a30104:  WAKEsHOW( "example.simplest.func.1370002.riverC.dt_riverC" )\</A\>
*/
/**/

/*1*/riverC::~riverC( voidT )/*1*/
{
    TINSL
    SCOOP

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    bDestroy = 1 ;
    {
        socketC snu( tinP , ether , TAG( TAGiDnULL ) ) ;
        snu.connectF( tinP , idPort ) ;
    }
    sgnDone_tmRiverAccept.waitF( tinP ) ;
    writeMsgF( tinP , "!amDry" ) ;
    DEL( psOut ) ;
    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b002.riverc.dt_riverc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b003.riverc.riverc BEGIN
#define DDNAME       "3func.3602b003.riverc.riverc"
#define DDNUMB      (countT)0x3602b003
#define IDFILE      (countT)0x108f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1370003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4a30104.1.1.0.html\"\>4a30104:  WAKEsHOW( "example.simplest.func.1370003.riverC.riverC" )\</A\>
*/
/**/

/*1*/riverC::riverC( tinS& tinP , etherC& etherP , const nicNameC nicNameP , const countT idPortP )/*1*/ :
ether( etherP ) ,
poop( etherP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
nicName( nicNameP ) ,
idPort( idPortP ? idPortP : ifcPORToLD1rIVERdEFAULT ) ,
psOut( new( 0 , tinP , LF ) socketC( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ) ,
bDestroy( 0 ) ,
sgnDone_tmRiverAccept( tinP , TAG( TAGiDnULL ) )
{
    SCOOP
    ___( psOut ) ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( nicNameP ) ;
        __( nicNameP == socketC::nicNameIF( tinP , etherP ) ) ;
        if( POOP ) return ;
    }

    IFsCRATCH
    {
        {
            SCOOPS
            if( psOut ) psOut->connectF( tinP , idPort , nicName ) ;
            while( POOP && !ether )
            {
                POOPR
                DEL( psOut ) ;
                tinP.pEtScratch->beeSingDigitsF( tinP , 0x6 ) ;
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; tinP.pEtScratch->osSleepF( tinP , TOCK ) ;
                }
                psOut = new( 0 , tinP , LF ) socketC( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ; ___( psOut ) ;
                if( psOut ) psOut->connectF( tinP , idPort , nicName ) ;
            }
            if( POOP ) POOPR
        }
    
        signC sgnReady( tinP , TAG( TAGiDnULL ) ) ;
        { ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmRiverAcceptF , &sgnDone_tmRiverAccept , flTHREADlAUNCH_null , 0 , (countT)&bDestroy , idPort , (countT)this , (countT)&sgnReady ) ; }
        sgnReady.waitF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b003.riverc.riverc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b004.riverc.writemsgf BEGIN
#define DDNAME       "3func.3602b004.riverc.writemsgf"
#define DDNUMB      (countT)0x3602b004
#define IDFILE      (countT)0x1090


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeMsgF.0.html\"\>instances\</A\>
\<A HREF=\"5.1370004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5a30104.1.1.0.html\"\>5a30104:  WAKEsHOW( "example.simplest.func.1370004.riverC.writeMsgF" )\</A\>
*/
/**/

/*1*/voidT riverC::writeMsgF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __Z( psOut ) ;
        if( POOP ) return ;
    }

    IFsCRATCH
    {
        SCOOPS
        psOut->writeMsgF( tinP , pbP , cbP ) ;
        while( POOP && !ether )
        {
            POOPR
            DEL( psOut ) ;
            tinP.pEtScratch->beeSingDigitsF( tinP , 0x8 ) ;
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ++ s ; tinP.pEtScratch->osSleepF( tinP , TOCK ) ;
            }
            psOut = new( 0 , tinP , LF ) socketC( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ; ___( psOut ) ;
            if( psOut )
            {
                psOut->connectF( tinP , idPort , nicName ) ;
                psOut->writeMsgF( tinP , pbP , cbP ) ;
            }
        }
        if( POOP ) POOPR
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602b* : 3func.3602b004.riverc.writemsgf END
