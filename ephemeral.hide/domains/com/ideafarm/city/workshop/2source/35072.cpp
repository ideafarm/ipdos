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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072002.relayc.handleunregisterif BEGIN
#define DDNAME       "3func.35072002.relayc.handleunregisterif"
#define DDNUMB      (countT)0x35072002
#define IDFILE      (countT)0xb0c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT relayC::handleUnregisterIF( tinS& tinP , idPortTimeC idptMeP , const countT* const pczChannelP )/*1*/
{
    ZE( boolT , bOk ) ;
    if( !pczChannelP )
    {
        tinP.pAdamGlobal5->_relayC_grabHandleAll.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( tinP.pAdamGlobal1->_relayC_.idptHandleAll == idptMeP )
        {
                       tinP.pAdamGlobal1->_relayC_.idptHandleAll = (countT)0 ;
            (nicNameC&)tinP.pAdamGlobal1->_relayC_.idptHandleAll = (countT)0 ;
            bOk = 1 ;
        }
        tinP.pAdamGlobal5->_relayC_grabHandleAll.ungrabF( tinP ) ;
    }

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072002.relayc.handleunregisterif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072003.relayc.handleregistermeifif BEGIN
#define DDNAME       "3func.35072003.relayc.handleregistermeifif"
#define DDNUMB      (countT)0x35072003
#define IDFILE      (countT)0xb0d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT relayC::handleRegisterMeIfIF( tinS& tinP , idPortTimeC idptMeP , const countT* const pczChannelP )/*1*/
{
    ZE( boolT , bOk ) ;
    if( !pczChannelP )
    {
        tinP.pAdamGlobal5->_relayC_grabHandleAll.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !tinP.pAdamGlobal1->_relayC_.idptHandleAll || idptMeP - tinP.pAdamGlobal1->_relayC_.idptHandleAll < 0 )
        {
            tinP.pAdamGlobal1->_relayC_.idptHandleAll = idptMeP ;
            bOk = 1 ;
            //CONoUTrAW3( "handle port is now: " , tinP.pAdamGlobal1->_relayC_.idptHandleAll , "\r\n" ) ;
        }
        tinP.pAdamGlobal5->_relayC_grabHandleAll.ungrabF( tinP ) ;
    }

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072003.relayc.handleregistermeifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072004.relayc.handlerefreshtimestampif BEGIN
#define DDNAME       "3func.35072004.relayc.handlerefreshtimestampif"
#define DDNUMB      (countT)0x35072004
#define IDFILE      (countT)0xb0e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT relayC::handleRefreshTimeStampF( tinS& tinP , idPortTimeC idptMeP , const countT* const pczChannelP )/*1*/
{
    ZE( boolT , bOk ) ;
    if( !pczChannelP )
    {
        tinP.pAdamGlobal5->_relayC_grabHandleAll.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( tinP.pAdamGlobal1->_relayC_.idptHandleAll == idptMeP )
        {
            tinP.pAdamGlobal1->_relayC_.idptHandleAll = idptMeP ;
            bOk = 1 ;
        }
        tinP.pAdamGlobal5->_relayC_grabHandleAll.ungrabF( tinP ) ;
    }

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072004.relayc.handlerefreshtimestampif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072005.relayc.handlequeryif BEGIN
#define DDNAME       "3func.35072005.relayc.handlequeryif"
#define DDNUMB      (countT)0x35072005
#define IDFILE      (countT)0xb0f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC relayC::handleQueryIF( tinS& tinP , const countT* const pczChannelP )/*1*/
{
    idPortTimeC idpth ;
    //if( !pczChannelP )
    //{
    //    tinP.pAdamGlobal5->_relayC_grabHandleAll.grabF( tinP , TAG( TAGiDnULL ) ) ;
    //    idpth = tinP.pAdamGlobal1->_relayC_.idptHandleAll ;
    //    tinP.pAdamGlobal5->_relayC_grabHandleAll.ungrabF( tinP ) ;
    //}

    if( !*tinP.pEther )
    {
        countT idSpace = 1 ;
        //ENABLE WHEN A PRODUCTION RELAY SYSTEM EXISTS AND NEED TO DO DEVELOPMENT IN A SANDBOX
        //{
        //    ZE( strokeS* , psttw ) ;
        //    countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
        //    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
        //    tinP.pEther->boxGetShadow::20141115@1937::MIGRATE:TO:USE:SETTINGS.BIT.TREE::SettingF( tinP , psttw , T("///d/ideafarm.home.")+TF1(idHomeDisk)+T(".setting.keyValue.idSpace") ) ; ___( psttw ) ;
        //    THREADmODE1rESTORE
        //    ZE( countT , idSpacew ) ;
        //    if( psttw ) idSpacew = tinP.pEther->strDigitsToSCountF( tinP , psttw ) ;
        //    tinP.pEther->delF( tinP , psttw ) ;
        //    if( idSpacew && idSpacew <= 3 ) idSpace = idSpacew ;
        //    else switch( idHomeDisk )
        //    {
        //        case 1 : { idSpace = 3 ; break ; }
        //        case 2 : { idSpace = 2 ; break ; }
        //        case 3 : { idSpace = 2 ; break ; }
        //        case 4 : { idSpace = 2 ; break ; }
        //        case 5 : { idSpace = 2 ; break ; }
        //    }
        //}

        for( countT idDo = 1 ; idDo <= 2 ; idDo ++ )
        {
            ZE( nicNameC* , pnn ) ;
            ZE( countT    , cnn ) ;
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
            //OLD:socketC::nicNameIF( tinP , *tinP.pEther , pnn , cnn , T(idDo==1?"nicname.":"port.")+TF1(idSpace)+T(".space.ideafarm.com") ) ;
            socketC::nicNameIF( tinP , *tinP.pEther , pnn , cnn , T(idDo==1?"spacenn.ideafarm.com":"spaceport.ideafarm.com") ) ;
            THREADmODE1rESTORE
            if( cnn == 1 ) //U::IPV6
            {
                if( idDo == 1 )          idpth = *pnn ;
                else            (countT&)idpth = pnn->pcId[ 0 ] ;
            }
            tinP.pEther->delF( tinP , pnn ) ;
        }
    }

    return idpth ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072005.relayc.handlequeryif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072006.relayc.hdrif BEGIN
#define DDNAME       "3func.35072006.relayc.hdrif"
#define DDNUMB      (countT)0x35072006
#define IDFILE      (countT)0xb10


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::hdrBagIF( tinS& tinP , soulC& sBagP , idPortTimeC& idptP , countT& idSerialLathHeaderP , const flagsT flagsP , const countT idTypeP )/*1*/
{
    /* 1-4 */ idptP >> sBagP ;
    /* 5   */ sBagP << (countT)( 1 + incv02AM( idSerialLathHeaderP ) ) ;
    /* 6   */ sBagP << flagsP ;
    /* 7   */ sBagP << idTypeP ;

    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072006.relayc.hdrif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072007.relayc.sortopenif BEGIN
#define DDNAME       "3func.35072007.relayc.sortopenif"
#define DDNUMB      (countT)0x35072007
#define IDFILE      (countT)0xb11


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::sortOpenIF( tinS& tinP , stackC& stIdptOpenP , stackC& stIdptGossipP , stackC& stIdptTempP )/*1*/
{
    stIdptTempP.purgeF( tinP ) ;
    if( stIdptOpenP )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            idPortTimeC& idpt = *(idPortTimeC*)&stIdptOpenP.downF( tinP , hDown ) ;
            stIdptTempP.sinkF( tinP , countTC() , (byteT*)&idpt , flSTACKsINK_UNIQUE , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
        }
        while( !stIdptOpenP.third && ~hDown ) ;
    }
    stIdptOpenP.purgeF( tinP ) ;
    if( stIdptTempP )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            idPortTimeC& idpt = *(idPortTimeC*)&stIdptTempP.downF( tinP , hDown ) ;
            stIdptOpenP.sinkF( tinP , countTC() , (byteT*)&idpt , flSTACKsINK_UNIQUE , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
        }
        while( !stIdptOpenP.third && ~hDown ) ;
    }
    stIdptTempP.purgeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072007.relayc.sortopenif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072008.relayc.mylistif BEGIN
#define DDNAME       "3func.35072008.relayc.mylistif"
#define DDNUMB      (countT)0x35072008
#define IDFILE      (countT)0xb12


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::myListIF( tinS& tinP , soulC& soulP , stackC& stRelayP )/*1*/
{
    _IO_
    stRelayP.grabF( tinP , TAG( TAGiDnULL ) ) ;
    soulP << (countT)stRelayP ;
    if( stRelayP )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do *(idPortTimeC*)&stRelayP.downF( tinP , hDown ) >> soulP ;
        while( !stRelayP.third && ~hDown ) ;
    }
    stRelayP.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072008.relayc.mylistif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072009.relayc.hislistif BEGIN
#define DDNAME       "3func.35072009.relayc.hislistif"
#define DDNUMB      (countT)0x35072009
#define IDFILE      (countT)0xb13


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/countT relayC::hisListIF( tinS& tinP , stackC& stP , soulC& soulP , stackC& stIdptGossipP , countT& idFieldP )/*1*/
{
    _IO_
    const countT cRelays = soulP.cFieldF( tinP , idFieldP ++ ) ;
    countT cToDo = cRelays ;
    if( &stP == &stIdptGossipP )
    {
    }
    while( cToDo -- )
    {
        idPortTimeC idpt = idPortTimeC::fieldF( tinP , soulP , idFieldP ) ; idFieldP += idPortTimeC::cFieldsF( tinP ) ;
        if( idpt ) stP.sinkF( tinP , countTC() , (byteT*)&idpt , flSTACKsINK_UNIQUE , subtractIdPortTimesF , &stP == &stIdptGossipP ? - 1 : (countT)&stIdptGossipP ) ;
    }
    return cRelays ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072009.relayc.hislistif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200a.relayc.popif BEGIN
#define DDNAME       "3func.3507200a.relayc.popif"
#define DDNUMB      (countT)0x3507200a
#define IDFILE      (countT)0xb14


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// x: idRankMeP
//
//  0: x
//  1: 2x+0                                            | 2x+1
//  2: 4x+0                    4x+1                    | 4x+2                    4x+3
//  3: 8x+0        8x+1        8x+2        8x+3        | 8x+4        8x+5        8x+6        8x+7
//  4: 01x+0 01x+1 01x+2 01x+3 01x+4 01x+5 01x+6 01x+7 | 01x+8 01x+9 01x+a 01x+b 01x+c 01x+d 01x+e 01x+f
//
//  n: (2**n)*x ................ (2**n)*x+(2**(n-1))-1 | (2**n)*x+(2**(n-1)) ............ (2**n)*(x+1)-1
//

/*1*/voidT relayC::popIF( tinS& tinP , stackC* pStPop0P , stackC* pStPop1P , stackC* pStPop2P , stackC* pStPop3P , stackC* pStPop4P , soulC& sBagP , stackC& stIdptOpenP , stackC& stIdptGossipP , idPortTimeC& idptP , const boolT bDudP )/*1*/
{
    IFsCRATCH
    {
        //TESTER CODE FOR flagsUpF
        //static countT cIn ;
        //if( !incv02AM( cIn ) )
        //{
        //    const countT idrMax = 0x10 ;
        //    LOGrAW( T("idrMax: ")+TF1(idrMax)+T("\r\n") ) ;
        //    for( countT idrMe = 1 ; idrMe <= idrMax ; idrMe ++ )
        //    {
        //        LOGrAW( T("\r\nidrMe: ")+TF1(idrMe)+T("\r\n") ) ;
        //        for( countT idrTo = idrMe + 1 ; idrTo <= idrMax ; idrTo ++ )
        //        {
        //            flagsT flagsUp = flagsUpF( idrMe , idrTo , idrMax ) ;
        //            LOGrAW( TF3(idrTo,flFORMAT_UNSIGNED,9)+TF1(flagsUp)+T("\r\n") ) ;
        //        }
        //    }
        //}
    
        _IO_
    
        //tinP.pEther->traceF( tinP , T("popIF / ++++") ) ;

        //U::
        ZE( boolT , bDebug ) ;
        ZE( countT , idSerialBag ) ;
        if( sBagP.cFieldF( tinP , ifcIDfIELDbAG_IDtYPE ) == ifcIDtYPEbAG_WRAP )
        {
            ZE( countT , idTypesWrap ) ;
            ZE( flagsT , flagssWrap ) ;
            ZE( countT , cbfsWrap ) ;
            byteT* pbsWrap = sBagP.pbFieldF( tinP , idTypesWrap , flagssWrap , cbfsWrap , ifcIDfIELDbAG_WRAP ) ;
            
            if( soulC::cFieldsIF( tinP , pbsWrap ) >= ifcIDfIELDwRAP_IDtYPE )
            {
                countT idType = soulC::cFieldIF( tinP , ifcIDfIELDwRAP_IDtYPE , pbsWrap ) ;
                if( idType == ifcIDtYPEwRAP_GIFT )
                {
                    ZE( countT , idTypeChannel ) ;
                    ZE( flagsT , flagsChannel ) ;
                    ZE( countT , cbfChannel ) ;
                    countT* pczChannel = (countT*)soulC::pbFieldIF( tinP , idTypeChannel , flagsChannel , cbfChannel , ifcIDfIELDwRAP_CHANNEL , pbsWrap ) ;
                    if( pczChannel && pczChannel[ 0 ] == ifcIDcHANNEL1_BYfUNCTION && pczChannel[ 1 ] == ifcIDcHANNELfUNCTION_MEDIATED && pczChannel[ 2 ] == ifcIDaDAM_SECRETsERVICE && pczChannel[ 3 ] == ifcIDaDAM_CONSOLE && pczChannel[ 4 ] == ifcIDcHANNELfUNCTION_STROKEcONSOLE )
                    {
                        bDebug = 1 ;
                        idSerialBag = sBagP.cFieldF( tinP , ifcIDfIELDbAG_IDsERIAL ) ;
                    }
                }
            }
        }
    
        {
            //if( bDebug ) { CONoUTrAW3( "popIF got a secret STROKEStOcONSOLE " , idSerialBag , "\r\n" ) ; }
        }
    
        flagsT flags = sBagP.cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
        if( F(flags) & flRELAYpOP_DOWN )
        {
            //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_DOWN") ) ;
            if( pStPop0P )
            {
                ZE( soulC* , psBagCopy ) ;
                (*tinP.pEther)( tinP , psBagCopy , TAG( TAGiDnULL ) ) ;
                if( psBagCopy )
                {
                    *psBagCopy = sBagP ;
                    if( bDudP )
                    {
                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_DOWN / dud") ) ;
                        flagsT& flags = psBagCopy->cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
                        flags &= ~( F(flRELAYpOP_DOWN) | F(flRELAYpOP_UP) ) ;
                    }

                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_DOWN / pushing to *pStPop0P") ) ;
                    *pStPop0P << psBagCopy ; psBagCopy = 0 ;
                    //if( bDebug ) { CONoUTrAW3( "popping secret packet " , idSerialBag , " DOWN\r\n" ) ; }
                }
            }
        }
    
        if( F(flags) & flRELAYpOP_UP )
        {
            //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP") ) ;
            boolT bLateral = 1 ;
            flagsT flagsUp = 3 ; //BOTH UP LEFT AND UP RIGHT
            if( sBagP.cFieldF( tinP , ifcIDfIELDbAG_IDtYPE ) == ifcIDtYPEbAG_WRAP )
            {
                //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / is a wrap") ) ;
                ZE( countT , idTypesWrap ) ;
                ZE( flagsT , flagssWrap ) ;
                ZE( countT , cbfsWrap ) ;
                byteT* pbsWrap = sBagP.pbFieldF( tinP , idTypesWrap , flagssWrap , cbfsWrap , ifcIDfIELDbAG_WRAP ) ;
    
                ZE( soulC* , psWrap ) ;
                (*tinP.pEther)( tinP , psWrap , TAG( TAGiDnULL ) ) ;
                if( psWrap )
                {
                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / is a wrap / inspecting") ) ;
                    //O: THIS IS EXPENSIVE; CAN ELIMINATE BY COPYING sTo TO THE OUTER ENVELOPE
                    psWrap->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbsWrap , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
    
                    if( !psWrap->bKidEmptyF( tinP , ifcIDfIELDwRAP_TO ) )
                    {
                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / is a wrap / inspecting / sTo is not empty") ) ;
                        //if( !psWrap->bKidEmptyF( tinP , ifcIDfIELDwRAP_TOmEDIATOR ) ) { CONoUTrAW( "sToMediator is not empty\r\n" ) ; }
                        flagsUp = bLateral = 0 ; //THIS IS A POINT TO POINT PACKET SO DON'T POP SIDE TO SIDE (REDUNDANT, TO MAKE BROADCAST MORE ROBOST)
    
                        ZE( boolT , bDebugUsingMediator ) ;
                        ZE( byteT* , pbs ) ;
                        {
                            flagsT flagsPut = psWrap->cFieldF( tinP , ifcIDfIELDwRAP_FLAGS ) ;
    
                            ZE( countT , idType ) ;
                            ZE( flagsT , flags ) ;
                            ZE( countT , cbf ) ;
                            pbs = !( F(flagsPut) & flCIOpUT_IGNOREmEDIATORlIST ) && !psWrap->bKidEmptyF( tinP , ifcIDfIELDwRAP_TOmEDIATOR )
                                ? ( bDebugUsingMediator = 1 , psWrap->pbFieldF( tinP , idType , flags , cbf , ifcIDfIELDwRAP_TOmEDIATOR ) )
                                : ( bDebugUsingMediator = 0 , psWrap->pbFieldF( tinP , idType , flags , cbf , ifcIDfIELDwRAP_TO         ) )
                            ;
                            //CONoUTrAW3( "popIF: bDebugUsingMediator: " , bDebugUsingMediator , "\r\n" ) ;
                        }
    
                        ZE( soulC* , psTo ) ; // WILL CONTAIN EITHER sTo OR sToMediator
                        (*tinP.pEther)( tinP , psTo , TAG( TAGiDnULL ) ) ;
                        if( psTo )
                        {
                            //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / is a wrap / inspecting / sTo is not empty / inspecting psTo") ) ;
                            psTo->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbs , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
    
                            GRABrELAYlISTS
                            countT idRankMe = stIdptOpenP( (byteT*)&idptP , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
                            //CONoUTrAW3( "popIF: idRankMe: " , idRankMe , "\r\n" ) ;
                            const countT idRankMax = stIdptOpenP ;
                            //tinP.pEther->traceF( tinP , T("[idRankMax,idRankMe]:    ")+TF2(idRankMax,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idRankMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                            if( idRankMe ) while( (countT)*psTo && flagsUp != 3 ) //U:: EDIT soulC TO ELIMINATE THE NEED TO CAST TO countT TO GET THE NUBMER OF ITEMS
                            {
                                ZE( countT , idRankTo ) ;
                                {
                                    idPortTimeC idptTo ;
                                    idptTo << *psTo ;
                                    if( idptTo ) idRankTo = stIdptOpenP( (byteT*)&idptTo , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
                                }
    
                                //THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                //CONoUTrAW( T("popIF: idRankTo: ")+TF1(idRankTo)+T(" ")+T(idptTo)+T("\r\n") ) ;
                                //THREADmODE1rESTORE
    
                                if( idRankTo )
                                {
                                    flagsUp |= flagsUpF( idRankMe , idRankTo , idRankMax ) ;
                                    //tinP.pEther->traceF( tinP , T("[idRankTo,flagsUp]:    ")+TF2(idRankTo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(flagsUp,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                }
                            }
                            UNGRABrELAYlISTS
                        }
                        (*tinP.pEther)( tinP , psTo ) ;
                        //CONoUTrAW3( "popIF: flagsUp: " , flagsUp , "\r\n" ) ;
                    }
                }
                (*tinP.pEther)( tinP , psWrap ) ;
            }
    
            if( flagsUp & 1 && pStPop1P )
            {
                //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 1") ) ;
                ZE( soulC* , psBagCopy ) ;
                (*tinP.pEther)( tinP , psBagCopy , TAG( TAGiDnULL ) ) ;
                if( psBagCopy )
                {
                    *psBagCopy = sBagP ;
                    if( bDudP )
                    {
                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 1 / dud") ) ;
                        flagsT& flags = psBagCopy->cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
                        flags &= ~( F(flRELAYpOP_DOWN) | F(flRELAYpOP_UP) ) ;
                    }

                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 1 / doing") ) ;
                    *pStPop1P << psBagCopy ; psBagCopy = 0 ;
                    //if( bDebug ) { CONoUTrAW3( "popping secret packet " , idSerialBag , " UP1\r\n" ) ; }
                }
            }
        
            if( flagsUp & 2 && pStPop2P )
            {
                //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 2") ) ;
                ZE( soulC* , psBagCopy ) ;
                (*tinP.pEther)( tinP , psBagCopy , TAG( TAGiDnULL ) ) ;
                if( psBagCopy )
                {
                    *psBagCopy = sBagP ;
                    if( bDudP )
                    {
                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 2 / dud") ) ;
                        flagsT& flags = psBagCopy->cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
                        flags &= ~( F(flRELAYpOP_DOWN) | F(flRELAYpOP_UP) ) ;
                    }

                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up to 2 / doing") ) ;
                    *pStPop2P << psBagCopy ; psBagCopy = 0 ;
                    //if( bDebug ) { CONoUTrAW3( "popping secret packet " , idSerialBag , " UP2\r\n" ) ; }
                }
            }
            
            if( bLateral )
            {
                if( pStPop3P )
                {
                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 3") ) ;
                    ZE( soulC* , psBagCopy ) ;
                    (*tinP.pEther)( tinP , psBagCopy , TAG( TAGiDnULL ) ) ;
                    if( psBagCopy )
                    {
                        *psBagCopy = sBagP ;
                        if( bDudP )
                        {
                            //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 3 / dud") ) ;
                            flagsT& flags = psBagCopy->cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
                            flags &= ~( F(flRELAYpOP_DOWN) | F(flRELAYpOP_UP) ) ;
                        }

                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 3 / doing") ) ;
                        *pStPop3P << psBagCopy ; psBagCopy = 0 ;
                        //if( bDebug ) { CONoUTrAW3( "popping secret packet " , idSerialBag , " LEFT\r\n" ) ; }
                    }
                }
                
                if( pStPop4P )
                {
                    //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 4") ) ;
                    ZE( soulC* , psBagCopy ) ;
                    (*tinP.pEther)( tinP , psBagCopy , TAG( TAGiDnULL ) ) ;
                    if( psBagCopy )
                    {
                        *psBagCopy = sBagP ;
                        if( bDudP )
                        {
                            //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 4 / dud") ) ;
                            flagsT& flags = psBagCopy->cFieldF( tinP , ifcIDfIELDbAG_FLAGS ) ;
                            flags &= ~( F(flRELAYpOP_DOWN) | F(flRELAYpOP_UP) ) ;
                        }

                        //tinP.pEther->traceF( tinP , T("popIF / flRELAYpOP_UP / popping up lateral to 4 / doing") ) ;
                        *pStPop4P << psBagCopy ; psBagCopy = 0 ;
                        //if( bDebug ) { CONoUTrAW3( "popping secret packet " , idSerialBag , " RIGHT\r\n" ) ; }
                    }
                }
            }
        }

        //tinP.pEther->traceF( tinP , T("popIF / ----") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200a.relayc.popif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200b.relayc.idworkinvertif BEGIN
#define DDNAME       "3func.3507200b.relayc.idworkinvertif"
#define DDNUMB      (countT)0x3507200b
#define IDFILE      (countT)0xb15


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::idWorkInvertIF( tinS& tinP , countT& idWorkInvert1P , countT& idWorkInvert2P , const countT idWorkP )/*1*/
{
    _IO_     TLNA( "idWorkInvertIF" )
    idWorkInvert1P =
        idWorkP == IDtYPErELAYpOPcLIENTwORK_IMPLODE
        ? IDtYPErELAYpOPcLIENTwORK_EXPLODE1
        : idWorkP == IDtYPErELAYpOPcLIENTwORK_EXPLODE1
            ? IDtYPErELAYpOPcLIENTwORK_IMPLODE
            : idWorkP == IDtYPErELAYpOPcLIENTwORK_EXPLODE2
                ? IDtYPErELAYpOPcLIENTwORK_IMPLODE
                : idWorkP == IDtYPErELAYpOPcLIENTwORK_LEFT
                    ? IDtYPErELAYpOPcLIENTwORK_RIGHT
                    : IDtYPErELAYpOPcLIENTwORK_LEFT
    ;

    idWorkInvert2P = idWorkP == IDtYPErELAYpOPcLIENTwORK_EXPLODE1 ? IDtYPErELAYpOPcLIENTwORK_EXPLODE2 : 0 ;
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200b.relayc.idworkinvertif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200c.relayc.blistedif BEGIN
#define DDNAME       "3func.3507200c.relayc.blistedif"
#define DDNUMB      (countT)0x3507200c
#define IDFILE      (countT)0xb16


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT relayC::bListedIF( tinS& tinP , stackC& stIdptOpenP , stackC& stIdptGossipP , const idPortTimeC& idptP )/*1*/
{
    GRABrELAYlISTS
    ZE( boolT , bListed ) ;
    if( stIdptOpenP )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            idPortTimeC& idpt = *(idPortTimeC*)&stIdptOpenP.downF( tinP , hDown ) ;
            if( idpt == idptP ) //THIS LOOKS AT idPort; SINK LOOKS AT TIME
            {
                bListed = 1 ;
                break ; //SPEC: I MUST LEAVE THE LATHREF CURSOR AT THE PLATE THAT I FOUND
            }
        }
        while( !stIdptOpenP.third && ~hDown ) ;
    }
    UNGRABrELAYlISTS
    return bListed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200c.relayc.blistedif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200d.relayc.idptserverif BEGIN
#define DDNAME       "3func.3507200d.relayc.idptserverif"
#define DDNUMB      (countT)0x3507200d
#define IDFILE      (countT)0xb17


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::idptServerIF( tinS& tinP , idPortTimeC& idptPeerP , stackC& stIdptOpenP , idPortTimeC& idptP , stackC& stIdptGossipP , const countT idMyWorkP , const boolT bDuplicateIsOkP )/*1*/
{
    _IO_     TLNA( "idptServerIF" )
    if( idptPeerP ) { BLAMMO ; }
    if( stIdptOpenP.third ) { BLAMMO ; }

    GRABrELAYlISTS
    countT cRelays = stIdptOpenP ;
    countT ideMe = stIdptOpenP( (byteT*)&idptP , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;

    if( !ideMe ) //WILL BE TRUE IF I HAVE JUST RESTAMPED MYSELF
    {
        ZE( boolT , bFound ) ;
        GRABrELAYlISTS
        if( stIdptOpenP )
        {
            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                ideMe ++ ;
                idPortTimeC& idpt = *(idPortTimeC*)&stIdptOpenP.downF( tinP , hDown ) ;
                if( idpt == idptP ) //THIS LOOKS AT idPort; SINK LOOKS AT TIME
                {
                    bFound = 1 ;
                    break ;
                }
            }
            while( !stIdptOpenP.third && ~hDown ) ;
        }
        UNGRABrELAYlISTS
        if( !bFound ) ideMe = 0 ;
    }

    if( ideMe )
    {
        idPortTimeC idptNull ;
        switch( idMyWorkP ) // idptP IS SET IFF A DISTINCT RELAY EXISTS
        {
            case  IDtYPErELAYpOPcLIENTwORK_IMPLODE  : { if(           1 != ideMe         ) idptPeerP =               *(idPortTimeC*)&stIdptOpenP[ ideMe / 2                             ]            ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_EXPLODE1 : { if( stIdptOpenP >= ideMe * 2     ) idptPeerP =               *(idPortTimeC*)&stIdptOpenP[ ideMe * 2                             ]            ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_EXPLODE2 : { if( stIdptOpenP >= ideMe * 2 + 1 ) idptPeerP =               *(idPortTimeC*)&stIdptOpenP[ ideMe * 2 + 1                         ]            ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_LEFT     : {                                    idptPeerP = cRelays > 1 ? *(idPortTimeC*)&stIdptOpenP[ ideMe > 1       ? ideMe - 1 : cRelays ] : idptNull ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_RIGHT    : {                                    idptPeerP = cRelays > 1 ? *(idPortTimeC*)&stIdptOpenP[ ideMe < cRelays ? ideMe + 1 : 1       ] : idptNull ; break ; }
        }
    }

    if( !bDuplicateIsOkP )
    {
        switch( idMyWorkP ) // idptP IS SET IFF A DISTINCT RELAY EXISTS
        {
            case IDtYPErELAYpOPcLIENTwORK_RIGHT    : { idPortTimeC nt ; idptServerIF( tinP , nt , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_LEFT     , 1 ) ; if( idptPeerP == nt ) idptPeerP = 0 ; }
            case IDtYPErELAYpOPcLIENTwORK_LEFT     : { idPortTimeC nt ; idptServerIF( tinP , nt , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_EXPLODE2 , 1 ) ; if( idptPeerP == nt ) idptPeerP = 0 ; }
            case IDtYPErELAYpOPcLIENTwORK_EXPLODE2 : { idPortTimeC nt ; idptServerIF( tinP , nt , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_EXPLODE1 , 1 ) ; if( idptPeerP == nt ) idptPeerP = 0 ; }
            case IDtYPErELAYpOPcLIENTwORK_EXPLODE1 : { idPortTimeC nt ; idptServerIF( tinP , nt , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_IMPLODE  , 1 ) ; if( idptPeerP == nt ) idptPeerP = 0 ; }
        }
    }

    UNGRABrELAYlISTS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200d.relayc.idptserverif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200e.relayc.idporttimeclientif BEGIN
#define DDNAME       "3func.3507200e.relayc.idporttimeclientif"
#define DDNUMB      (countT)0x3507200e
#define IDFILE      (countT)0xb18


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::idPortTimeClientIF( tinS& tinP , idPortTimeC& idptPeer1P , idPortTimeC& idptPeer2P , stackC& stIdptOpenP , idPortTimeC& idptP , stackC& stIdptGossipP , const countT idHisWorkP )/*1*/
{
    _IO_     TLNA( "idPortTimeClientIF" )
    if( idptPeer1P ) { BLAMMO ; }
    if( idptPeer2P ) { BLAMMO ; }
    if( stIdptOpenP.third ) { BLAMMO ; }

    GRABrELAYlISTS

    countT cRelays = stIdptOpenP ;
    countT ideMe = stIdptOpenP( (byteT*)&idptP , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
    if( ideMe )
    {
        idPortTimeC idptNull ;
        switch( idHisWorkP ) // idptP IS SET IFF A DISTINCT RELAY EXISTS
        {
            case  IDtYPErELAYpOPcLIENTwORK_IMPLODE  : { if( stIdptOpenP >= ideMe * 2 ) idptPeer1P =              *(idPortTimeC*)&stIdptOpenP[ ideMe * 2                           ]            ; if( stIdptOpenP >= ideMe * 2 + 1 ) idptPeer2P = *(idPortTimeC*)&stIdptOpenP[ ideMe * 2 + 1 ] ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_EXPLODE1 :
            case  IDtYPErELAYpOPcLIENTwORK_EXPLODE2 : { if( 1 < ideMe                ) idptPeer1P =              *(idPortTimeC*)&stIdptOpenP[ ideMe / 2                           ]            ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_LEFT     : {                                idptPeer1P = cRelays > 1 ? *(idPortTimeC*)&stIdptOpenP[ ideMe < cRelays ? ideMe + 1 : 1      ] : idptNull ; break ; }
            case  IDtYPErELAYpOPcLIENTwORK_RIGHT    : {                                idptPeer1P = cRelays > 1 ? *(idPortTimeC*)&stIdptOpenP[ ideMe > 1      ? ideMe - 1 : cRelays ] : idptNull ; break ; }
        }
    }
    UNGRABrELAYlISTS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200e.relayc.idporttimeclientif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200f.relayc.idporttimeclientsexpectedif BEGIN
#define DDNAME       "3func.3507200f.relayc.idporttimeclientsexpectedif"
#define DDNUMB      (countT)0x3507200f
#define IDFILE      (countT)0xb19


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::idPortTimeClientsExpectedIF( tinS& tinP , stackC& stRelayExpectedP , stackC& stIdptOpenP , stackC& stIdptGossipP , idPortTimeC& idptP , const countT idWorkP )/*1*/
{
    if( idWorkP )
    {
        // { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , idWorkP  ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
        {
            idPortTimeC n1 ;
            idPortTimeC n2 ;
            idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , idWorkP  ) ;
            if( n1 )
            {
                stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ;
            }
        }
    }
    else
    {
        { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_IMPLODE  ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
        { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_EXPLODE1 ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
        { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_EXPLODE2 ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
        { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_LEFT     ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
        { idPortTimeC n1 ; idPortTimeC n2 ; idPortTimeClientIF( tinP , n1 , n2 , stIdptOpenP , idptP , stIdptGossipP , IDtYPErELAYpOPcLIENTwORK_RIGHT    ) ; if( n1 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n1 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; if( n2 ) stRelayExpectedP.sinkF( tinP , countTC() , (byteT*)&n2 , flSTACKsINK_UNIQUE , subtractIdPortTimesF , - 1 ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.3507200f.relayc.idporttimeclientsexpectedif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072010.relayc.gossipifif BEGIN
#define DDNAME       "3func.35072010.relayc.gossipifif"
#define DDNUMB      (countT)0x35072010
#define IDFILE      (countT)0xb1a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
if idptGossipP is absent and is not already gossipped, then gossip about it
*/
/**/
/*1*/idPortTimeC relayC::gossipIfIF( tinS& tinP , countT& idSerialLathHeaderP , stackC* const pStPop0P , stackC* const pStPop1P , stackC* const pStPop2P , stackC* const pStPop3P , stackC* const pStPop4P , stackC& stIdptOpenP , stackC& stIdptGossipP , stackC& stIdptTempP , stackC& stRelayAbsentP , idPortTimeC& idptGossipP , idPortTimeC& idptP , const countT idWorkP )/*1*/
{
    idPortTimeC idptGossipped ;
    switch( idWorkP )
    {
        case IDtYPErELAYpOPcLIENTwORK_IMPLODE :
        {
            ZE( soulC* , psBagPop ) ;
            GRABrELAYlISTS
            if
            (
                 stRelayAbsentP( (byteT*)&idptGossipP , subtractIdPortsF , - 1 ) &&
                !stIdptGossipP( (byteT*)&idptGossipP , subtractIdPortsF , - 1 )
            )
            {
                idptGossipped = idptGossipP ;
                idPortTimeC* pnRoot = stIdptOpenP ? (idPortTimeC*)&stIdptOpenP[ 1 ] : 0 ;
                if( pnRoot && *pnRoot == idptP )
                {
                    stIdptGossipP.sinkF( tinP , countTC() , (byteT*)&idptGossipP , flSTACKsINK_UNIQUE , subtractIdPortsF , - 1 ) ;
                    sortOpenIF( tinP , stIdptOpenP , stIdptGossipP , stIdptTempP ) ;
                }
                else (*tinP.pEther)( tinP , psBagPop , TAG( TAGiDnULL ) ) ;
            }
            UNGRABrELAYlISTS
        
            if( psBagPop )
            {
                hdrBagIF( tinP , *psBagPop , idptP , idSerialLathHeaderP , flRELAYpOP_DOWN , ifcIDtYPEbAG_CLIENTpOPgOSSIP ) ;
                idptGossipP >> *psBagPop ;
                popIF( tinP , pStPop0P , pStPop1P , pStPop2P , pStPop3P , pStPop4P , *psBagPop , stIdptOpenP , stIdptGossipP , idptP ) ;
                (*tinP.pEther)( tinP , psBagPop ) ;
            }
            break ;
        }
    }

    return idptGossipped ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072010.relayc.gossipifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072011.relayc.testif BEGIN
#define DDNAME       "3func.35072011.relayc.testif"
#define DDNUMB      (countT)0x35072011
#define IDFILE      (countT)0xb1b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT relayC::testIF( tinS& tinP , idPortTimeC& idptP , countT& idSerialLathHeaderP , idPortTimeC& idptTestP )/*1*/
{
    boolT bOk = 1 ;
    IFsCRATCH
    {
        SCOOPS
        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , idptTestP , (nicNameC&)idptTestP ) ;
        if( POOP )
        {
            POOPRqUIET
            bOk = 0 ;
            tinP.pEther->traceF( tinP , T("testIF: could not connect [idptTestP:nn,idPort]:    ")+T((nicNameC&)idptTestP)+T("    ")+TF2((countT&)idptTestP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        }
        else
        {
            ZE( soulC* , psBag ) ;
            (*tinP.pEtScratch)( tinP , psBag , TAG( TAGiDnULL ) ) ;
            ZE( soulC* , psBagOk ) ;
            (*tinP.pEtScratch)( tinP , psBagOk , TAG( TAGiDnULL ) ) ;
            if( psBag && psBagOk )
            {
                hdrBagIF( tinP , *psBag , idptP , idSerialLathHeaderP , flRELAYpOP_DOWN , ifcIDtYPEbAG_CLIENTnULL ) ;
    
                sock.writeF( tinP , *psBag ) ;
                TELL( "reading ok+ 15" )
                VERIFYrELAY2( sock , *psBagOk ) ;
                TELL( "reading ok-" )
            }
            (*tinP.pEtScratch)( tinP , psBag ) ;
            (*tinP.pEtScratch)( tinP , psBagOk ) ;

            if( POOP )
            {
                POOPR
                bOk = 0 ;
            }
        }
    }
    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072011.relayc.testif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072012.relayc.hellotohandleif BEGIN
#define DDNAME       "3func.35072012.relayc.hellotohandleif"
#define DDNUMB      (countT)0x35072012
#define IDFILE      (countT)0xb1c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT relayC::helloToHandleIF( tinS& tinP , idPortTimeC& idptP , countT& idSerialLathHeaderP )/*1*/
{
    IFsCRATCH
    {
        for(;;)
        {
            //CONoUTrAW( "helloToHandleIF: a querying handle\r\n" ) ;
            idPortTimeC idpthc = handleQueryIF( tinP ) ;
    
            if( !idpthc ) break ;
    
            ZE( boolT , bOk ) ;
            {
                SCOOPS
                socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL )/*U:: , 0 , flSOCKETc_TOPsECRET*/ ) ;
                //CONoUTrAW( "helloToHandleIF: 9 connecting\r\n" ) ;
                sock.connectF( tinP , idpthc , (nicNameC&)idpthc ) ;
                //CONoUTrAW( "helloToHandleIF: 8 after calling connectF\r\n" ) ;
                if( !POOP )
                {
                    //CONoUTrAW( "helloToHandleIF: 7 after connecting ok\r\n" ) ;
                    ZE( soulC* , psBag ) ;
                    (*tinP.pEtScratch)( tinP , psBag , TAG( TAGiDnULL ) ) ;
                    ZE( soulC* , psBagOk ) ;
                    (*tinP.pEtScratch)( tinP , psBagOk , TAG( TAGiDnULL ) ) ;
                    if( psBag && psBagOk )
                    {
                        //CONoUTrAW( "helloToHandleIF: 6 making hello bag\r\n" ) ;
                        hdrBagIF( tinP , *psBag , idptP , idSerialLathHeaderP , flRELAYpOP_DOWN , ifcIDtYPEbAG_CLIENTpOPuNgOSSIP ) ;
                        idptP >> *psBag ;
                        idptP >> *psBag ;
            
                        //tinP.pEther->traceF( tinP , T("writing hello bag") ) ;
                        //CONoUTrAW( "helloToHandleIF: 5 writing the hello bag\r\n" ) ;
                        sock.writeF( tinP , *psBag ) ; //ASSUME: SERVER WILL, IF ROOT, ADD ME TO ITS LIST
                        //CONoUTrAW( "helloToHandleIF: 4 reading the ok bag\r\n" ) ;
                        TELL( "reading ok+ 5" )
                        VERIFYrELAY2( sock , *psBagOk ) ;
                        TELL( "reading ok-" )
                        if( POOP ) POOPR
                        else       bOk = 1 ;
                    }
                    (*tinP.pEtScratch)( tinP , psBag ) ;
                    (*tinP.pEtScratch)( tinP , psBagOk ) ;
                }
                if( POOP )
                {
                    POOPRqUIET
                    tinP.pEther->traceF( tinP , T("helloToHandleIF / could not say hello to handle [idpthc:nn,idPort]:    ")+T((nicNameC&)idpthc)+T("    ")+TF2((countT&)idpthc,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                }
            }

            //CONoUTrAW3( "helloToHandleIF: 2 bOk:" , bOk , "\r\n" ) ;
            if( bOk ) break ;
    
            //CONoUTrAW( "helloToHandleIF: 1 unregistering handle\r\n" ) ;
            handleUnregisterIF( tinP , idpthc ) ;
            //CONoUTrAW( "helloToHandleIF: 0 end of loop snippet\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072012.relayc.hellotohandleif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072013.relayc.dowraplocallyifif BEGIN
#define DDNAME       "3func.35072013.relayc.dowraplocallyifif"
#define DDNUMB      (countT)0x35072013
#define IDFILE      (countT)0xb1d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT relayC::doWrapLocallyIfIF( tinS& tinP , etherC& etThread , RELAYiNFOpARMS , const byteT* const pbsWrapP , const idPortTimeC& idptOriginP , const countT idPhaseP )/*1*/
{
    RELAYiNFOf

    if( !idPhaseP || idPhaseP == 1 )
    {
        GRABrELAYlISTS
        idPortTimeC* pnRoot = stIdptOpenP ? (idPortTimeC*)&stIdptOpenP[ 1 ] : 0 ;
        UNGRABrELAYlISTS
        if( pnRoot && *pnRoot == idptP )
        {
            ZE( countT , idTypeidType ) ;
            ZE( flagsT , flagsidType ) ;
            ZE( countT , cbidType ) ;
            byteT* pbidType = soulC::pbFieldIF( tinP , idTypeidType , flagsidType , cbidType , ifcIDfIELDwRAP_IDtYPE , pbsWrapP ) ;
        
            if( pbidType && *(countT*)pbidType == ifcIDtYPEwRAP_GIFT )
            {
                ZE( countT , idTypeC ) ;
                ZE( flagsT , flagsC ) ;
                ZE( countT , cbC ) ;
                countT* pczChannel = (countT*)soulC::pbFieldIF( tinP , idTypeC , flagsC , cbC , ifcIDfIELDwRAP_CHANNEL , pbsWrapP ) ;

                ZE( countT , idTypesToM ) ;
                ZE( flagsT , flagssToM ) ;
                ZE( countT , cbsToM ) ;
                byteT* pbsToM = soulC::pbFieldIF( tinP , idTypesToM , flagssToM , cbsToM , ifcIDfIELDwRAP_TOmEDIATOR , pbsWrapP ) ;
        
                if( pczChannel && pbsToM )
                {
                    if( pczChannel[ 0 ] == ifcIDcHANNEL1_BYfUNCTION && pczChannel[ 1 ] == ifcIDcHANNELfUNCTION_MEDIATED && pczChannel[ 2 ] )
                    {
                        countT idAdamMediator = pczChannel[ 2 ] ;
    
                        if( idPortTimeC::cFieldsF( tinP ) - 4 ) { BLAMMO ; }
                        ZE( countT , off ) ;
                        for(;;)
                        {
                            ZE( countT , idType_idPort ) ;
                            ZE( flagsT , flags_idPort ) ;
                            ZE( countT , cb_idPort ) ;
                            byteT* pb_idPort = soulC::pbFieldIF( tinP , idType_idPort , flags_idPort , cb_idPort , off + 1 , pbsToM ) ;
        
                            ZE( countT , idType_nn ) ;
                            ZE( flagsT , flags_nn ) ;
                            ZE( countT , cb_nn ) ;
                            byteT* pb_nn = soulC::pbFieldIF( tinP , idType_nn , flags_nn , cb_nn , off + 2 , pbsToM ) ;
        
                            ZE( countT , idType_time1 ) ;
                            ZE( flagsT , flags_time1 ) ;
                            ZE( countT , cb_time1 ) ;
                            byteT* pb_time1 = soulC::pbFieldIF( tinP , idType_time1 , flags_time1 , cb_time1 , off + 3 , pbsToM ) ;
        
                            ZE( countT , idType_time2 ) ;
                            ZE( flagsT , flags_time2 ) ;
                            ZE( countT , cb_time2 ) ;
                            byteT* pb_time2 = soulC::pbFieldIF( tinP , idType_time2 , flags_time2 , cb_time2 , off + 4 , pbsToM ) ;
        
                            if( !pb_time2 ) break ;
                            else if( !*(countT*)pb_idPort )
                            {
                                swsIdptMediatorP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                                swsIdptMediatorAltP.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
                                idAdamMediatorP = idAdamMediator ;
                                const boolT bAlt = swsIdptMediatorP && swsIdptMediatorAltP
                                    ? ( tinP.ranUni % TUCK ) / TUCK * 2
                                    : swsIdptMediatorP
                                        ? 0
                                        : 1
                                ;

                                switchStackC& swsm = bAlt ? swsIdptMediatorAltP : swsIdptMediatorP ;
                                idPortTimeC idptm ;
                                byteT* pb_idptm = (byteT*)&idptm ;
                                swsm.randomF( tinP , pb_idptm ) ;
                                if( !idptm )
                                {
                                    tinP.pEther->traceF( tinP , T(bAlt?"could not assign a mediator because --> ":"could not assign a mediator because <-- ")+TF2(swsIdptMediatorP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(swsIdptMediatorAltP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" cells of ")+TF2(idAdamMediator,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" are registered") ) ;
                                    LOGrAW7( bAlt ? "could not assign a mediator because -->" : "could not assign a mediator because <--" , swsIdptMediatorP , " " , swsIdptMediatorAltP , " cells of " , idAdamMediator , " are registered\r\n" ) ;
                                }

                                //THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                //etThread.strokeF( tinP , T("patched null mediator to ")+TF1(idAdamMediatorP)+T(" mediator\r\n")+T(idptm)+T("\r\n") ) ; //U::
                                //THREADmODE1rESTORE
    
                                swsIdptMediatorAltP.ungrabF( tinP ) ;
                                swsIdptMediatorP.ungrabF( tinP ) ;
        
                                *(countT*)pb_idPort = idptm ;
                                *(nicNameC*)pb_nn   = (nicNameC&)idptm ;
                                const timeS& time   = idptm ;
                                *(countT*)pb_time1  = time.time1 ;
                                *(countT*)pb_time2  = time.time2 ;
    
                                //{
                                //    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                //    idPortTimeC& idptms = *(idPortTimeC*)&swsIdptMediatorP[ 1 ] ;
                                //    etThread.strokeF( tinP , T("top plate is ")+T(idptms)+T("\r\n") ) ; //U::
                                //    etThread.strokeF( tinP , T("patched from ")+T(idptm)+T("\r\n") ) ; //U::
                                //    etThread.strokeF( tinP , T("patched to ")+TF1(*(countT*)pb_idPort)+T(*(nicNameC*)pb_nn)+T("\r\n") ) ; //U::
                                //    THREADmODE1rESTORE
                                //}
                            }
            
                            off += 4 ;
                        }
                    }
                }
            }
    
            if( soulC::cFieldsIF( tinP , pbsWrapP ) >= ifcIDfIELDwRAP_GIFT && soulC::cFieldIF( tinP , ifcIDfIELDwRAP_IDtYPE , pbsWrapP ) == ifcIDtYPEwRAP_GIFT )
            {
                ZE( countT , idTypec ) ;
                ZE( flagsT , flagsc ) ;
                ZE( countT , cbc ) ;
                countT* pczChannel = (countT*)soulC::pbFieldIF( tinP , idTypec , flagsc , cbc , ifcIDfIELDwRAP_CHANNEL , pbsWrapP ) ;
                                
                if( pczChannel && pczChannel[ 0 ] == ifcIDcHANNEL1_BYfUNCTION && pczChannel[ 1 ] == ifcIDcHANNELfUNCTION_MEDIATORrEGISTRATION )
                {
                    ZE( countT , idTypeGift ) ;
                    ZE( flagsT , flagsGift ) ;
                    ZE( countT , cbGift ) ;
                    byteT* pbsGift = soulC::pbFieldIF( tinP , idTypeGift , flagsGift , cbGift , ifcIDfIELDwRAP_GIFT , pbsWrapP ) ;
    
                    ZE( countT , idType1 ) ;
                    ZE( flagsT , flags1 ) ;
                    ZE( countT , cb1 ) ;
                    byteT* pb_idCmd = soulC::pbFieldIF( tinP , idType1 , flags1 , cb1 , 1 , pbsGift ) ;
    
                    ZE( countT , idType2 ) ;
                    ZE( flagsT , flags2 ) ;
                    ZE( countT , cb2 ) ;
                    byteT* pb_idAdam = soulC::pbFieldIF( tinP , idType2 , flags2 , cb2 , 2 , pbsGift ) ;
    
                    if( idptOriginP && pb_idCmd && pb_idAdam )
                    {
                        countT idCmd  = *(countT*)pb_idCmd ;
                        countT idAdam = *(countT*)pb_idAdam ;
                                                
                        swsIdptMediatorP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                        idAdamMediatorP = idAdam ;

                        switch( idCmd )
                        {
                            case ifcIDcMDrEGISTERmEDIATOR_AMaLIVE :
                            {
                                //THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                //etThread.strokeF( tinP , T("m+: ")+TF1(idAdam)+T(" ")+T(idptOriginP)+T("\r\n") ) ;
                                //THREADmODE1rESTORE

                                swsIdptMediatorP.sinkF( tinP , countTC() , (byteT*)&idptOriginP , flSTACKsINK_UNIQUE , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
                                break ;
                            }
                            case ifcIDcMDrEGISTERmEDIATOR_AMdEAD  :
                            {
                                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                                etThread.strokeF( tinP , T("m-: ")+TF1(idAdam)+T(" ")+T(idptOriginP)+T("\r\n") ) ;
                                THREADmODE1rESTORE

                                switchStackC* ppSws[] = { &swsIdptMediatorP , &swsIdptMediatorAltP } ;

                                for( countT off = 0 ; off < 2 ; off ++ )
                                {
                                    ZE( countT , ids ) ;
                                    ppSws[ off ]->sinkF( tinP , ids , (byteT*)&idptOriginP , flSTACKsINK_QUERY , subtractIdPortTimesF , (countT)&stIdptGossipP ) ;
                                    if( ids ) ppSws[ off ]->extractF( 0 , tinP ) ;
                                }
                                break ;
                            }
                        }

                        swsIdptMediatorP.ungrabF( tinP ) ;
                    }
                }
            }
        }
    }

    if( !idPhaseP || idPhaseP == 2 )
    {
        ZE( soulC* , psWrap ) ;
        etThread( tinP , psWrap , TAG( TAGiDnULL ) ) ;
        if( psWrap )
        {
            psWrap->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbsWrapP , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;

            ZE( boolT , bTargeted ) ; //U::
            boolT bDo = 1 ;
            if( !psWrap->bKidEmptyF( tinP , ifcIDfIELDwRAP_TO ) )
            {
                flagsT flagsPut = psWrap->cFieldF( tinP , ifcIDfIELDwRAP_FLAGS ) ;
                boolT bToMediators = !( F(flagsPut) & flCIOpUT_IGNOREmEDIATORlIST ) && !psWrap->bKidEmptyF( tinP , ifcIDfIELDwRAP_TOmEDIATOR ) ;
        
                //bDo WAS RESET HERE ; ON 2011.01.13 THE RESET LINE WAS MOVED SO THAT RESET ONLY OCCURS IF *psTo ; WAS NOT GETTING OWN WRAP ON A DUT WITH RELAY IN LONE HOME

                ZE( countT , idTypesToOrToM ) ;
                ZE( flagsT , flagssToOrToM ) ;
                ZE( countT , cbfsToOrToM ) ;
                byteT* pbsToOrToM = psWrap->pbFieldF( tinP , idTypesToOrToM , flagssToOrToM , cbfsToOrToM , bToMediators ? ifcIDfIELDwRAP_TOmEDIATOR : ifcIDfIELDwRAP_TO ) ;
        
                if( pbsToOrToM )
                {
                    ZE( soulC* , psTo ) ;
                    etThread( tinP , psTo , TAG( TAGiDnULL ) ) ;
                    if( psTo )
                    {
                        psTo->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbsToOrToM , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
            
                        if( *psTo )
                        {
                            bDo = 0 ;
                            while( (countT)*psTo )
                            {
                                idPortTimeC idptTo ;
                                idptTo << *psTo ;
                                if( idptTo == idptP )
                                {
                                    bTargeted = bDo = 1 ;
                                    break ;
                                }
                            }
                        }
                    }
                    etThread( tinP , psTo ) ;
                }
            }
        
            if( bDo )
            {
                //CONoUTrAW( "doWrapLocallyIfIF: bDo is true\r\n" ) ;
                {
                    ZE( countT , idTypeidType ) ;
                    ZE( flagsT , flagsidType ) ;
                    ZE( countT , cbidType ) ;
                    byteT* pbidType = soulC::pbFieldIF( tinP , idTypeidType , flagsidType , cbidType , ifcIDfIELDwRAP_IDtYPE , pbsWrapP ) ;
                
                    if( pbidType && *(countT*)pbidType == ifcIDtYPEwRAP_GIFT )
                    {
                        ZE( countT , idTypeC ) ;
                        ZE( flagsT , flagsC ) ;
                        ZE( countT , cbC ) ;
                        countT* pczChannel = (countT*)soulC::pbFieldIF( tinP , idTypeC , flagsC , cbC , ifcIDfIELDwRAP_CHANNEL , pbsWrapP ) ;
                
                        if( pczChannel && pczChannel[ 0 ] == ifcIDcHANNEL1_BYfUNCTION && pczChannel[ 1 ] == ifcIDcHANNELfUNCTION_MEDIATORrEGISTRATION )
                        {
                            ZE( countT , idTypeGift ) ;
                            ZE( flagsT , flagsGift ) ;
                            ZE( countT , cbGift ) ;
                            byteT* pbsGift = soulC::pbFieldIF( tinP , idTypeGift , flagsGift , cbGift , ifcIDfIELDwRAP_GIFT , pbsWrapP ) ;

                            if( pbsGift )
                            {
                                ZE( soulC* , psGift ) ;
                                etThread( tinP , psGift , TAG( TAGiDnULL ) ) ;
                                if( psGift )
                                {
                                    psGift->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbsGift , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                            
                                    if( *psGift == 2 )
                                    {
                                        ZE( countT , idCmd ) ;
                                        *psGift >> idCmd ;
                                        ZE( countT , idAdam ) ;
                                        *psGift >> idAdam ;
                            
                                        if( idCmd == ifcIDcMDrEGISTERmEDIATOR_AMaLIVE && idAdam == ifcIDaDAM_SECRETsERVICE ) homeS::homeIF().cSecretServerRegistrationsSeen ++ ;
                                    }
                                }
                                etThread( tinP , psGift ) ;
                            }
                        }
                    }
                }

                //THIS BLOCK IS JUST FOR DEBUGGING AND SHOULD BE COMMENTED OUT IN PRODUCTION
                //THIS BLOCK WILL FAIL IF THE SECRET IS EMPTY OR NOT OF THE EXPECTED CONTENTS
                //{
                //    ZE( countT , idTypeidType ) ;
                //    ZE( flagsT , flagsidType ) ;
                //    ZE( countT , cbidType ) ;
                //    byteT* pbidType = soulC::pbFieldIF( tinP , idTypeidType , flagsidType , cbidType , ifcIDfIELDwRAP_IDtYPE , pbsWrapP ) ;
                //
                //    if( pbidType && *(countT*)pbidType == ifcIDtYPEwRAP_GIFT )
                //    {
                //        ZE( countT , idTypeC ) ;
                //        ZE( flagsT , flagsC ) ;
                //        ZE( countT , cbC ) ;
                //        countT* pczChannel = (countT*)soulC::pbFieldIF( tinP , idTypeC , flagsC , cbC , ifcIDfIELDwRAP_CHANNEL , pbsWrapP ) ;
                //
                //        if( pczChannel && pczChannel[ 0 ] == ifcIDcHANNEL1_BYfUNCTION && pczChannel[ 1 ] == ifcIDcHANNELfUNCTION_MEDIATED && pczChannel[ 2 ] == ifcIDaDAM_SECRETsERVICE && pczChannel[ 3 ] == ifcIDaDAM_CONSOLE && pczChannel[ 4 ] == ifcIDcHANNELfUNCTION_STROKEcONSOLE )
                //        {
                //            ZE( countT , idTypeGift ) ;
                //            ZE( flagsT , flagsGift ) ;
                //            ZE( countT , cbGift ) ;
                //            byteT* pbsGift = soulC::pbFieldIF( tinP , idTypeGift , flagsGift , cbGift , ifcIDfIELDwRAP_GIFT , pbsWrapP ) ;
                //
                //            if( pbsGift )
                //            {
                //                ZE( soulC* , psGift ) ;
                //                etThread( tinP , psGift , TAG( TAGiDnULL ) ) ;
                //                if( psGift )
                //                {
                //                    psGift->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbsGift , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                //
                //                    ZE( soulC* , psSecret ) ;
                //                    etThread.cioGetSecretF( tinP , psSecret , *psGift ) ; ___( psSecret ) ;
                //                    if( psSecret )
                //                    {
                //                        ZE( strokeS* , psttw ) ;
                //                        *psSecret >> psttw ; ___( psttw ) ;
                //    
                //                        countT idColon = etThread.strIdF( tinP , T(":") , psttw ) ;
                //                        if( idColon )
                //                        {
                //                            ZE( strokeS* , psttw2 ) ;
                //                            countT idf = idColon + 1 ;
                //                            ZE( countT , idl ) ;
                //                            etThread.strSubstringF( tinP , psttw2 , idf , idl , psttw ) ; ___( psttw2 ) ;
                //                            countT idBlank = etThread.strIdF( tinP , T(" ") , psttw2 ) ;
                //                            if( idBlank )
                //                            {
                //                                ZE( strokeS* , psttw3 ) ;
                //                                countT idf = 1 ;
                //                                countT idl = idBlank - 1 ;
                //                                etThread.strSubstringF( tinP , psttw3 , idf , idl , psttw2 ) ; ___( psttw3 ) ;
                //                                countT idMessage = etThread.strDigitsToSCountF( tinP , psttw3 ) ;
                //                                {
                //                                    ZE( countT , idTypesToM ) ;
                //                                    ZE( flagsT , flagssToM ) ;
                //                                    ZE( countT , cbfsToM ) ;
                //                                    byteT* pbsToM = psWrap->pbFieldF( tinP , idTypesToM , flagssToM , cbfsToM , ifcIDfIELDwRAP_TOmEDIATOR ) ;
                //                                    countT bM = soulC::cFieldsIF( tinP , pbsToM ) ;
                //
                //                                    static countT idMsg1Lath ;
                //                                    static countT idMsg2Lath ;
                //                                    ( bM ? idMsg1Lath : idMsg2Lath ) = idMessage ;
                //
                //                                    etThread.strokeF( tinP , T("\f")+TF1(idMsg1Lath)+T(" ")+TF1(idMsg2Lath)+T(bM?" MEDIATED":" FINAL") ) ;
                //                                }
                //                                etThread.delF( tinP , psttw3 ) ;
                //                            }
                //                            etThread.delF( tinP , psttw2 ) ;
                //                        }
                //                        etThread.delF( tinP , psttw ) ;
                //                    }
                //                    etThread( tinP , psSecret ) ;
                //                }
                //                etThread( tinP , psGift ) ;
                //            }
                //        }
                //    }
                //}

                swsWrapRefP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                countT cFlavors = swsWrapRefP.cFlavorsF( tinP ) ;
                if( !cFlavors ) etThread( tinP , psWrap ) ;
                else
                {
                    ZE( count2S* , pc2WrapRef ) ;
                    etThread.newF( tinP , LF , pc2WrapRef ) ; ___( pc2WrapRef ) ;
                    if( pc2WrapRef )
                    {
                        pc2WrapRef->c1 = (countT)psWrap ; psWrap = 0 ;
                        pc2WrapRef->c2 = cFlavors ; //cRef
                        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                        {
                            //CONoUTrAW( "doWrapLocallyIfIF: pushed a wrap ref\r\n" ) ; //U::
                            cLeverPayloadP = swsWrapRefP.leverF( tinP , idf ) ;
                            swsWrapRefP << (countT)pc2WrapRef ; //W: WARNING: THESE DUPLICATE POINTERS MUST ONLY BE DELETED WHEN !cRef, I.E. ONLY WO TIME
                        }
                    }
                }
                swsWrapRefP.ungrabF( tinP ) ;
            }
        }
        etThread( tinP , psWrap ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35072* : 3func.35072013.relayc.dowraplocallyifif END
