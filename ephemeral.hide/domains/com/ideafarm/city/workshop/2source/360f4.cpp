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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f4* : 3func.360f4001.stkidsubc.stkidsubc BEGIN
#define DDNAME       "3func.360f4001.stkidsubc.stkidsubc"
#define DDNUMB      (countT)0x360f4001
#define IDFILE      (countT)0x1450


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/stkIdSubC::stkIdSubC( tinS& tinP , const countT idAccP ) :/*1*/
stackC( tinP , *tinP.pEther , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_XRAY )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccP ) ;
        if( POOP ) return ;
    }

    _IO_
    IFsCRATCH
    {
        SCOOPS

        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
    
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        sOut << (countT)FINGERnEG_LISTsERVERcMD ;
        sOut << (countT)1 ;
        sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_ENUMERATEiDsUB ;
        sOut << idAccP ;
        sock.writeF( tinP , sOut ) ;
    
        soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
        sock.readF( tinP , sIn ) ;
    
        ZE( countT , finger ) ;
        sIn >> finger ;
        __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
    
        ZE( countT , idFormat ) ;
        sIn >> idFormat ;
        __( idFormat - 1 ) ;

        ZE( countT , cIdSub ) ;
        sIn >> cIdSub ;

        while( cIdSub -- )
        {
            ZE( countT , idSub ) ;
            sIn >> idSub ;
            if( idSub ) *this << idSub ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f4* : 3func.360f4001.stkidsubc.stkidsubc END
