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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038002.netc.dt_netc BEGIN
#define DDNAME       "3func.36038002.netc.dt_netc"
#define DDNUMB      (countT)0x36038002
#define IDFILE      (countT)0x1147


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1510002.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/netC::~netC( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( third ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    bDestructionInProgress ++ ;
    if( idPort )
    {
        bQuit_tmCatch = 1 ;
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( !third && !bDone_tmCatch )
            {
                ++ s ;
                handleC hSoc( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ;
                third.s_socketIF( tinP , hSoc , ifcSOCKETtYPE_DATAgRAM ) ;
                third.s_bindF( tinP , hSoc ) ;
                soulC soulo( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDtYPEdATAGRAM_NETc_NULL ) ;
                third.s_writeF( tinP , hSoc , idPort , nicNameC() , soulo ) ;
                third.dosSleepIF( tinP , TUCK * 0x40 ) ;
            }
        }

        baton.ungrabF( tinP ) ;
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( cReadPending )
            {
                ++ s ;
                sgnCatch.giveF( tinP )  ;
                third.dosSleepIF( tinP , TUCK * 0x40 ) ;
            }
        }
        baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038002.netc.dt_netc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038003.netc.netc BEGIN
#define DDNAME       "3func.36038003.netc.netc"
#define DDNUMB      (countT)0x36038003
#define IDFILE      (countT)0x1148


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1510003.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 idPortP
  can be 0
  if 0 then this net object cannot read; it can only write
*/
/**/

/*1*/netC::netC( tinS& tinP , thirdC& thirdP , const countT idPortP )/*1*/ :
third( thirdP ) ,
idPort( idPortP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
bQuit_tmCatch( 0 ) ,
bDone_tmCatch( 0 ) ,
idGramLast( 0 ) ,
b_idGramLath( tinP , TAG( TAGiDnULL ) ) ,
b_stCatch( tinP , TAG( TAGiDnULL ) ) ,
stCatch( tinP , thirdP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_soulC ) ,
sgnCatch( tinP , TAG( TAGiDnULL ) ) ,
cReadPending( 0 ) ,
bDestructionInProgress( 0 )
{
    if( tinP.fingerprint ) ;

    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( idPort ) third.osThreadF( tinP , countTC() , _tmCatchF , 0 , flTHREADlAUNCH_null , 0 , (countT)&bQuit_tmCatch , (countT)&bDone_tmCatch , idPort , (countT)&b_stCatch , (countT)&stCatch , (countT)&sgnCatch , (countT)&thirdP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038003.netc.netc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038004.netc.writef BEGIN
#define DDNAME       "3func.36038004.netc.writef"
#define DDNUMB      (countT)0x36038004
#define IDFILE      (countT)0x1149


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1510004.1.0.html\"\>definition\</A\>
arguments
 tinP
 nicNameP
  can be 0
  if 0 then the local host is implied
 soulP
 idPortP
  can be 0 unless idPort was 0 for the constructor
  if 0 then netC::idPort is used
  should be 0 except for special applications
*/
/**/
/*1*/voidT netC::writeF( tinS& tinP , const nicNameC& nicNameP , soulC& soulP , const countT idPortP )/*1*/
{
    IFbEcAREFUL
    {
        if( third ) return ;
        __( !idPort && !idPortP ) ;
        if( third ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    ZE( nicNameC* , pMeI ) ;
    ZE( countT , cMe ) ;
    third.s_nicNameF( tinP , pMeI , cMe ) ; ___( pMeI ) ;

    ZE( countT , idDisk ) ;
    {
        ZE( infoDisk1S* , pInfo ) ;
        third.dosQueryFSInfoF( tinP , pInfo , "///c" ) ; ___( pInfo ) ;
        if( pInfo ) idDisk = pInfo->idVolume ;
        DEL( pInfo ) ;
    }

    thirdC thp( tinP , TAG( TAGiDnULL ) ) ;

    ZE( countT , cOut ) ;
    b_idGramLath.grabF( tinP , TAG( TAGiDnULL ) ) ;
    idGramLast ++ ;
    for( countT offMe = 0 ; offMe < cMe ; offMe ++ )
    {
        handleC hsoo( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ;
        thp.s_socketIF( tinP , hsoo , ifcSOCKETtYPE_DATAgRAM ) ;
        thp.s_bindF( tinP , hsoo , 0 , pMeI[ offMe ] ) ;
        if( thp ) thp = 0 ;
        else
        {
            soulC soulo( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDtYPEdATAGRAM_NETc_SOULc ) ;
            soulo << idDisk ;
            soulo << idGramLast ;
            pMeI[ offMe ] >> soulo ;
            soulo << soulP ;

            thp.s_writeF( tinP , hsoo , idPortP ? idPortP : idPort , nicNameP , soulo ) ;
            if( thp ) thp = 0 ;
            else      cOut ++ ;
        }
    }
    b_idGramLath.ungrabF( tinP ) ;

    third.delF( tinP , pMeI ) ;
    __Z( cOut ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038004.netc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038005.netc.readf BEGIN
#define DDNAME       "3func.36038005.netc.readf"
#define DDNUMB      (countT)0x36038005
#define IDFILE      (countT)0x114a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1510005.1.0.html\"\>definition\</A\>
i cannot be used if idPort was 0 when i was constructed
i block until wo or more soulC objects have been received or until i am being destroyed
arguments
 tinP
 stP
  must be of type ifcSTACKtYPE_PTR_soulC
  after evaluation, will contain wo or more soulC objects, each containing annotation fields followed by the received soulC object
*/
/**/
/*1*/voidT netC::readF( tinS& tinP , stackC& stP )/*1*/
{
    IFbEcAREFUL
    {
        if( third ) return ;
        __Z( idPort ) ;
        __( stP.idTypeF( tinP ) - ifcSTACKtYPE_PTR_soulC ) ;
        if( third ) return ;
    }

    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !bDestructionInProgress )
    {
        cReadPending ++ ;
        baton.ungrabF( tinP ) ;
        sgnCatch.waitF( tinP ) ;
        baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
        b_stCatch.grabF( tinP , TAG( TAGiDnULL ) ) ;

        while( !third && stCatch )
        {
            ZE( soulC* , psi ) ;
            stCatch >> psi ;
            stP << psi ;
        }

        b_stCatch.ungrabF( tinP ) ;
        cReadPending -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038005.netc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038006.netc.writef BEGIN
#define DDNAME       "3func.36038006.netc.writef"
#define DDNUMB      (countT)0x36038006
#define IDFILE      (countT)0x114b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1510006.1.0.html\"\>definition\</A\>
broadcasts to all ifc hosts known to the local host
evaluates to the number of hosts written to
arguments
 tinP
 soulP
 idPortP
  can be 0 unless idPort was 0 for the constructor
  if 0 then netC::idPort is used
  should be 0 except for special applications
*/
/**/
/*1*/countT netC::writeF( tinS& tinP , soulC& soulP , const countT idPortP )/*1*/
{
    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( !idPort && !idPortP ) ;
        if( third ) return 0 ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    soulC souli( tinP , TAG( TAGiDnULL ) ) ;
    {
        handleC hso( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ;
        third.s_socketIF( tinP , hso ) ;
        third.s_bindF( tinP , hso ) ;
        third.s_connectF( tinP , hso , ifcPORToLD2_CHAT ) ;
        soulC soulo( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDcMDsESSION_QUERYaLLkNOWNnICnAMES ) ;
        third.s_writeF( tinP , hso , soulo ) ;
        third.s_readF( tinP , souli , hso ) ;
        //COMMENTED OUT FOR SPEED.  WILL CAUSE SERVER TO BE IMPOTENT. ASSUME: SERVER WILL RESET ITS IMPOTENCE
        //soulC soulo2( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDcMDsESSION_BYE ) ;
        //third.s_writeF( tinP , hso , soulo2 ) ;
    }
    stackC stNicName( tinP , third , TAG( TAGiDnULL ) , souli ) ;

    ZE( countT , cNicName ) ;

    while( !third && stNicName )
    {
        ZE( nicNameC* , pNicName ) ;
        stNicName >> pNicName ;
        if( pNicName )
        {
            cNicName ++ ;
            writeF( tinP , *pNicName , soulP , idPortP ) ;
        }
        third.delF( tinP , pNicName ) ;
    }

    baton.ungrabF( tinP ) ;
    return cNicName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038006.netc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038007.netc.parsef BEGIN
#define DDNAME       "3func.36038007.netc.parsef"
#define DDNUMB      (countT)0x36038007
#define IDFILE      (countT)0x114c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$parseF.0.html\"\>instances\</A\>
\<A HREF=\"5.1510007.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT netC::parseF( tinS& tinP , soulC& soulSmallP , nicNameC& nicNameP , countT& idDiskP , countT& idGramP , soulC& soulBigP )/*1*/
{
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( nicNameP ) ;
        __NZ( idDiskP ) ;
        __NZ( idGramP ) ;
        __( (countT)soulBigP - 5 ) ;
        if( third ) return ;
    }

    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( countT , idGramType ) ;
    soulBigP >> idGramType ;
    __( idGramType - ifcIDtYPEdATAGRAM_NETc_SOULc ) ;
    if( !third )
    {
        soulBigP >> idDiskP ;
        soulBigP >> idGramP ;
        nicNameP  << soulBigP ;
        soulBigP >> soulSmallP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36038* : 3func.36038007.netc.parsef END
