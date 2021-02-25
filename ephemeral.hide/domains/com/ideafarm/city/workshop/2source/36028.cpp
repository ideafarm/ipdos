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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028002.busc.dt_busc BEGIN
#define DDNAME       "3func.36028002.busc.dt_busc"
#define DDNUMB      (countT)0x36028002
#define IDFILE      (countT)0x107c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1330002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2230104.1.1.0.html\"\>2230104:  WAKEsHOW( "example.simplest.func.1330002.busC.dt_busC" )\</A\>
*/
/**/

/*1*/busC::~busC( voidT )/*1*/
{
    TINSL
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
    if( bSubscribe )
    {
        sgnQuit_tmSubscribe.giveF( tinP ) ;
        sgnDone_tmSubscribe.waitF( tinP ) ;
    }

    if( pbv ) ether.delF( tinP , pbv ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028002.busc.dt_busc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028003.busc.busc BEGIN
#define DDNAME       "3func.36028003.busc.busc"
#define DDNUMB      (countT)0x36028003
#define IDFILE      (countT)0x107d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1330003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1230104.1.1.0.html\"\>1230104:  WAKEsHOW( "example.simplest.func.1330003.busC.busC" )\</A\>
*/
/**/

/*1*/busC::busC( tinS& tinP , etherC& etherP , signC& sgn_cSubscribersP , signC& sgn_pbvP , const countT idBusP )/*1*/ :
ether( etherP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
idBus( idBusP ) ,
sgnQuit_tmSubscribe( tinP , TAG( TAGiDnULL ) ) ,
sgnDone_tmSubscribe( tinP , TAG( TAGiDnULL ) ) ,
sgn_cSubscribers( sgn_cSubscribersP ) ,
bSubscribe( 0 ) ,
idPortSubscribe( 0 ) ,
cSubscribers( 0 ) ,
cbv( 0 ) ,
pbv( 0 ) ,
sgn_pbv( sgn_pbvP ) ,
idCmd( 0 )
{
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028003.busc.busc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028004.busc.csubscribersf BEGIN
#define DDNAME       "3func.36028004.busc.csubscribersf"
#define DDNUMB      (countT)0x36028004
#define IDFILE      (countT)0x107e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cSubscribersF.0.html\"\>instances\</A\>
\<A HREF=\"5.1330004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6230104.1.1.0.html\"\>6230104:  WAKEsHOW( "example.simplest.func.1330004.busC.cSubscribersF" )\</A\>
*/
/**/

/*1*/countT busC::cSubscribersF( tinS& tinP )/*1*/
{
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
    subscribeIfF( tinP ) ;
    baton.ungrabF( tinP ) ;
    return cSubscribers ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028004.busc.csubscribersf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028005.busc.subscribeiff BEGIN
#define DDNAME       "3func.36028005.busc.subscribeiff"
#define DDNUMB      (countT)0x36028005
#define IDFILE      (countT)0x107f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$subscribeIfF.0.html\"\>instances\</A\>
\<A HREF=\"5.1330005.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/

/**/

/*1*/voidT busC::subscribeIfF( tinS& tinP )/*1*/
{
    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !bSubscribe )
    {
        bSubscribe = 1 ;

        {
            signC sgnReady( tinP , TAG( TAGiDnULL ) ) ;
            { ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmSubscribeF , &sgnDone_tmSubscribe , flTHREADlAUNCH_null , 0 , (countT)this , (countT)&sgnQuit_tmSubscribe , (countT)&idPortSubscribe , (countT)&sgnReady , (countT)&sgn_cSubscribers , (countT)&sgn_pbv ) ; }
            sgnReady.waitF( tinP ) ;

            socketC socko( tinP , ether , TAG( TAGiDnULL ) ) ;
            socko.connectF( tinP , ifcPORToLD1bUSsERVER , socketC::nicNameIF( tinP , ether , T(WWWiDEAFARMcOM) ) ) ;

            socko.writeF( tinP , (byteT*)&idBus , sizeof idBus ) ;

            countT idCmdw = idCMDbUS_SUBSCRIBE ;
            socko.writeF( tinP , (byteT*)&idCmdw , sizeof idCmdw ) ;

            socko.writeF( tinP , (byteT*)&idPortSubscribe , sizeof idPortSubscribe ) ;

            ether.delF( tinP , pbv ) ;

            socko.readF( tinP , (byteT*)&idCmdw , sizeof idCmdw ) ;
            idCmd = idCmdw ;

            ZE( countT , cbvw ) ;
            socko.readF( tinP , (byteT*)&cbvw , sizeof cbvw ) ;
            cbv = cbvw ;

            ZE( byteT* , pbvw ) ;
            ether.newF( tinP , LF , pbvw , cbv + 1 ) ; ___( pbvw ) ;
            if( pbvw )
            {
                pbvw[ cbv ] = 0 ;
                if( cbv ) socko.readF( tinP , pbvw , cbv ) ;
                pbv = pbvw ;
                pbvw = 0 ;
            }
            sgn_pbv.giveF( tinP ) ;
        }
        sgn_cSubscribers.waitF( tinP ) ;
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028005.busc.subscribeiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028006.busc.operator_countt BEGIN
#define DDNAME       "3func.36028006.busc.operator_countt"
#define DDNUMB      (countT)0x36028006
#define IDFILE      (countT)0x1080


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1330006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7230104.1.1.0.html\"\>7230104:  WAKEsHOW( "example.simplest.func.1330006.busC.operator_countT" )\</A\>
*/
/**/

/*1*/busC::operator countT( voidT )/*1*/
{
    TINSL
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
    subscribeIfF( tinP ) ;
    baton.ungrabF( tinP ) ;
    return cbv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028006.busc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028007.busc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.36028007.busc.operator_bytet_ptr"
#define DDNUMB      (countT)0x36028007
#define IDFILE      (countT)0x1081


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1330007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3230104.1.1.0.html\"\>3230104:  WAKEsHOW( "example.simplest.func.1330007.busC.operator_byteT_ptr" )\</A\>
*/
/**/

/*1*/busC::operator byteT*( voidT )/*1*/
{
    TINSL
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_
    subscribeIfF( tinP ) ;
    baton.ungrabF( tinP ) ;
    return pbv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028007.busc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028008.busc.writef BEGIN
#define DDNAME       "3func.36028008.busc.writef"
#define DDNUMB      (countT)0x36028008
#define IDFILE      (countT)0x1082


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1330008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4230104.1.1.0.html\"\>4230104:  WAKEsHOW( "example.simplest.func.1330008.busC.writeF" )\</A\>
arguments
 tinP
 pbP
 cbP
*/

/**/

/*1*/voidT busC::writeF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    socketC sock( tinP , ether , TAG( TAGiDnULL ) ) ;
    sock.connectF( tinP , ifcPORToLD1bUSsERVER , socketC::nicNameIF( tinP , ether , T(WWWiDEAFARMcOM) ) ) ;

    sock.writeF( tinP , (byteT*)&idBus , sizeof idBus ) ;
    { countT idCmd = idCMDbUS_WRITE ; sock.writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ; }

    if( pbP )
    {
        countT cbv = cbP ? cbP : ether.strBodyLengthF( tinP , pbP ) ;

        sock.writeF( tinP , (byteT*)&cbv , sizeof cbv ) ;
        if( cbv ) sock.writeF( tinP , pbP , cbv ) ;
    }
    else
    {
        ZE( countT , cbv ) ;
        sock.writeF( tinP , (byteT*)&cbv , sizeof cbv ) ;
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36028* : 3func.36028008.busc.writef END
