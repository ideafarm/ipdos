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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36072* : 3func.36072001.relayc.relayc BEGIN
#define DDNAME       "3func.36072001.relayc.relayc"
#define DDNUMB      (countT)0x36072001
#define IDFILE      (countT)0x123f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/relayC::relayC( tinS& tinP , etherC& etThread , boolT& bReadyP )/*1*/
{
    _IO_
    etherC& ether = etherC::etPrimeIF() ;
    stackC stPsoServer(                  tinP , etThread , TAG( TAGiDnULL ) ) ;
    idPortC idPortOrigin ;
    const byteT* pbLever = (const byteT*)&idPortOrigin ;
    switchStackC swsIdSerialReceived(    tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , pbLever , sizeof idPortOrigin ) ;
    switchStackC swsIdSerialReceivedAlt( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , pbLever , sizeof idPortOrigin ) ;
    stackC stIdptTemp(                  tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ; // { idpt , timeBorn1 , timeBorn2 }, SORTED BY TIME BORN
    stackC stIdptOpen(                  tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ; // { idpt , timeBorn1 , timeBorn2 }, SORTED BY TIME BORN
    stackC stIdptGossip(                tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ; // { idpt , timeBorn1 , timeBorn2 }, SORTED BY TIME BORN
    stackC stIdptPopClient(             tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ;
    ZE( countT , idAdamMediator ) ;
    switchStackC swsIdptMediator(       tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , idAdamMediator , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ;
    switchStackC swsIdptMediatorAlt(    tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , idAdamMediator , flSTACKc_BLOB , sizeof( idPortTimeC ) ) ;

    const countT cKidThreadsSave = tinP.cKidThreads ;
    ranUniC ruZeWo( tinP , 1 , 1 ) ;
    ZE( boolT , bQuit ) ;
    homeS& home = homeS::homeIF() ;
    ZE( countT , cLeverPayload ) ;
    switchStackC swsWrapRef( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , cLeverPayload , flSTACKc_FIFO|flSTACKc_GIVEsIGNnEWpLATE ) ;

    idPortTimeC idptHandle = handleQueryIF( tinP ) ;

    IFsCRATCH
    {
        socketC sListen( tinP , *tinP.pEtScratch , TAG( TAGiDnULL )/*U:: , 0 , flSOCKETc_TOPsECRET*/ ) ;
        idPortC idPort ;
        {
            SCOOPS

            countT idpTry = ifcIDpORT_RELAY ;
            for(;;)
            {
                idPort = sListen.bindF( tinP , idpTry , nicNameC() , 1 ) ;
                if( !POOP )
                {
                    etThread.traceF( tinP , T("bind aok to requested port [idPort]:    ")+TF2(idpTry,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    break ;
                }
                else
                {
                    POOPRqUIET
                    idPort = idPortC() ;
                    etThread.traceF( tinP , T("could not bind to requested port [idPort]:    ")+TF2(idpTry,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    idpTry ++ ;
                }
            }
        }

        sListen.etherF( tinP , etThread ) ;

        idPort = socketC::nicNameIF( tinP , etThread ) ;
    
        idPortTimeC idpt ;
        idpt = idPort ;
        idpt.timeStampIfF( tinP , etThread ) ;
    
        //if( !handleQueryIF( tinP ) )
        //{
        //    {
        //        sleepC s( tinP , TAG( TAGiDnULL ) ) ; //GIVE EXISTING NODES TIME TO ASSUME THE HANDLE ROLE
        //        countT cTries = TUCK / /* 8 */0x40 ;
        //        while( !ether && cTries && cTries -- )
        //        {
        //            ether.osSleepF( tinP , TOCK ) ;
        //            if( handleQueryIF( tinP ) ) break ;
        //        }
        //
        //        if( !cTries && !handleQueryIF( tinP ) ) handleRegisterMeIfIF( tinP , idpt ) ; //P: A NEWBIE NODE WILL POLL FOR 4 TOCKS BEFORE REGISTERING ITSELF AS HANDLE
        //    }
        //}
    
        ZE( boolT , bTalk ) ;
        ZE( countT , cGossipIn ) ;
        ZE( countT , idSerialLathHeader ) ;
        ZE( boolT , bAltSws ) ;
    
        count8S _c8ni1P( (countT)&idpt , (countT)&bQuit , (countT)&stPsoServer , (countT)&swsIdSerialReceived , 0 , 0 , 0 , 0 ) ;
        count8S _c8ni2P( 0 , (countT)&stIdptTemp , (countT)&stIdptOpen , (countT)&stIdptGossip , (countT)&idAdamMediator , (countT)&swsIdptMediator , (countT)&swsIdptMediatorAlt , (countT)&cGossipIn ) ;
        count8S _c8ni3P( (countT)&idSerialLathHeader , (countT)&idPortOrigin , (countT)&swsIdSerialReceived , (countT)&bAltSws , (countT)&cLeverPayload , (countT)&swsWrapRef ) ;
    
        stackC*& pStPop0 = *(stackC**)&_c8ni1P.c5 ;
        stackC*& pStPop1 = *(stackC**)&_c8ni1P.c6 ;
        stackC*& pStPop2 = *(stackC**)&_c8ni1P.c7 ;
        stackC*& pStPop3 = *(stackC**)&_c8ni1P.c8 ;
        stackC*& pStPop4 = *(stackC**)&_c8ni2P.c1 ;
        ZE( countT , cLooksForNewPing ) ;
        ZE( boolT , bLaunchedAcceptor ) ;
        signC sgnDone_tmRelayTeatAcceptorF( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayPopClientF0( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayPopClientF1( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayPopClientF2( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayPopClientF3( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayPopClientF4( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayKillF( tinP , TAG( TAGiDnULL ) ) ;
        signC sgnDone_tmRelayInitiatorF( tinP , TAG( TAGiDnULL ) ) ;
        {
            TELL( "setting up 2" )
            if( idpt )
            {
                TELL( "setting up 2.c" )
                if( !ether ) sListen.listenF( tinP ) ;
                TELL( "setting up 2.b" )
            
                ZE( countT  , timeB1 ) ;
                ZE( sCountT , timeB2 ) ;
                etThread.osTimeNowF( tinP , timeB1 , timeB2 ) ;
            
                boolT bWoth = 1 ;
                ZE( countT , idClient ) ;
                while( !POOP && !ether && !bQuit )
                {
                    if( bWoth ) etThread.osThreadF( tinP , countTC() , tmRelayTickleF , 0 , flTHREADlAUNCH_null , 0 , (idPortC&)idpt , (countT)&bWoth ) ;
        
                    ZE( socketC* , pso ) ;
                    TELL( "waiting for a client to connect" )
                    {
                        //static boolT bRefused ;
                        boolT bRefuse = /*++ idClient == tinP.monitor.idThread && !( bRefused ++ ) ? 1 :*/ 0 ;
                        nicNameC nnPeer ;
                        ZE( countT , idPortPeer ) ;
                        sListen.acceptF( tinP , pso , idPortPeer , nnPeer , bRefuse ) ;
                        //etThread.traceF( tinP , T("accepted [nnPeer,idPortPeer]:    ")+T(nnPeer)+T("    ")+TF2(idPortPeer,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        //CONoUT( "client accepted" ) ;
                    }
            
                    if( bWoth ) //WOTH CLIENT MUST NOT BE REFUSED
                    {
                        etThread.traceF( tinP , T("writing woth bag ifcIDtYPEbAG_SERVERoK") ) ;
                        pso->etherF( tinP , *tinP.pEtScratch ) ;
                        bWoth = 0 ;
                        IFsCRATCH
                        {
                            SCOOPS
                            soulC sBagOk( tinP , TAG( TAGiDnULL ) , flSOUL_null , (countT)ifcIDtYPEbAG_SERVERoK ) ;
                            pso->writeF( tinP , sBagOk ) ;
                            if( POOP )
                            {
                                POOPRqUIET
                                etThread.traceF( tinP , T("could not write sBagOk for woth client") ) ;
                            }
                        }
                        DEL( pso ) ;
            
                        //P: A NEWBIE CLIENT KNOWS ABOUT ITSELF AND THE HANDLE
                        stIdptOpen.sinkF( tinP , countTC() , (byteT*)&idpt   , flSTACKsINK_UNIQUE , subtractIdPortTimesF , (countT)&stIdptGossip ) ;
                        {
                            idPortTimeC idpthc = handleQueryIF( tinP ) ;
                            if( idpthc && NICnAMElOCAL != ((nicNameC&)(idPortC&)idpthc).pcId[ 0 ] ) stIdptOpen.sinkF( tinP , countTC() , (byteT*)&idpthc , flSTACKsINK_UNIQUE , subtractIdPortTimesF , (countT)&stIdptGossip ) ;
                        }
                    
                        TELL( "setting up 2.4" )
                        pStPop0 = new( 0 , tinP , LF ) stackC( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_GIVEsIGNnEWpLATE , ifcSTACKtYPE_PTR_soulC ) ;
                        pStPop1 = new( 0 , tinP , LF ) stackC( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_GIVEsIGNnEWpLATE , ifcSTACKtYPE_PTR_soulC ) ;
                        pStPop2 = new( 0 , tinP , LF ) stackC( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_GIVEsIGNnEWpLATE , ifcSTACKtYPE_PTR_soulC ) ;
                        pStPop3 = new( 0 , tinP , LF ) stackC( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_GIVEsIGNnEWpLATE , ifcSTACKtYPE_PTR_soulC ) ;
                        pStPop4 = new( 0 , tinP , LF ) stackC( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_GIVEsIGNnEWpLATE , ifcSTACKtYPE_PTR_soulC ) ;
                    
                        TELL( "setting up 2.3" )
        
                        if( pStPop0 && pStPop1 && pStPop2 && pStPop3 && pStPop4 )
                        {
    
                            etThread.osThreadF( tinP , countTC() , tmRelayPopClientF , &sgnDone_tmRelayPopClientF0 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , IDtYPErELAYpOPcLIENTwORK_IMPLODE  ) ;
                            etThread.osThreadF( tinP , countTC() , tmRelayPopClientF , &sgnDone_tmRelayPopClientF1 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , IDtYPErELAYpOPcLIENTwORK_EXPLODE1 ) ;
                            etThread.osThreadF( tinP , countTC() , tmRelayPopClientF , &sgnDone_tmRelayPopClientF2 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , IDtYPErELAYpOPcLIENTwORK_EXPLODE2 ) ;
                            etThread.osThreadF( tinP , countTC() , tmRelayPopClientF , &sgnDone_tmRelayPopClientF3 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , IDtYPErELAYpOPcLIENTwORK_LEFT     ) ;
                            etThread.osThreadF( tinP , countTC() , tmRelayPopClientF , &sgnDone_tmRelayPopClientF4 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , IDtYPErELAYpOPcLIENTwORK_RIGHT    ) ;
                        }
    
                        etThread.osThreadF( tinP , countTC() , tmRelayKillF         , &sgnDone_tmRelayKillF , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS ) ;
                        etThread.osThreadF( tinP , countTC() , tmRelayInitiatorF    , &sgnDone_tmRelayInitiatorF , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , (countT)&stIdptPopClient , (countT)&cLooksForNewPing , (countT)&bReadyP ) ;
                        etThread.osThreadF( tinP , countTC() , tmRelayTeatAcceptorF , &sgnDone_tmRelayTeatAcceptorF , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS ) ;
                        if( !etThread ) bLaunchedAcceptor = 1 ;
    
                        continue ;
                    }
                    else if( bQuit )
                    {
                        TELL( "quitting" )
                        //etherC::ifcSayIF( T("gasp!") , flSAY_APPEND | flSAY_LOG ) ;
                        pso->etherF( tinP , *tinP.pEtScratch ) ;
                        SCOOPS
                        DEL( pso ) ;
                        break ;
                    }
                    //else { CONoUTrAW( "z" ) ; } //U::
    
                    TELL( "launching tmRelayServerCatchBagF" )
                    if( !ether && pso ) etThread.osThreadF( tinP , countTC() , tmRelayServerCatchBagF , 0 , flTHREADlAUNCH_null , 0 , RELAYiNFOaRGcOUNTS , (countT)pso , (countT)&sListen , (countT)&stIdptPopClient , (countT)&cLooksForNewPing ) ;
                    else 
                    {
                        pso->etherF( tinP , *tinP.pEtScratch ) ;
                        SCOOPS
                        DEL( pso ) ;
                    }
                }
            }
        }
    
        bQuit = 1 ; //U::ADDED WITHOUT STUDY
        if( bLaunchedAcceptor )
        {
            //{
            //    SCOOPS
            //    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            //    while( !POOP && !home.idpTeat ) { ++ s ; tinP.pEtScratch->osSleepF( tinP , TUCK * 0x40 ) ; }
            //}
        
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( !sgnDone_tmRelayTeatAcceptorF )
            {
                SCOOPSnEW
                socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
                sock.connectF( tinP , home.idpTeat , (nicNameC&)home.idpTeat , 1 ) ;
                if( !POOP )
                {
                    SCOOPSdEL
                    break ;
                }
                else
                {
                    POOPR
                    SCOOPSdEL
                }

                if( sgnDone_tmRelayTeatAcceptorF ) break ;
    
                ++ s ; tinP.pEtScratch->osSleepF( tinP , TUCK * 0x40 ) ;
            }
        }
    
        sgnDone_tmRelayTeatAcceptorF.waitF( tinP ) ;
        sgnDone_tmRelayPopClientF0.waitF( tinP ) ;
        sgnDone_tmRelayPopClientF1.waitF( tinP ) ;
        sgnDone_tmRelayPopClientF2.waitF( tinP ) ;
        sgnDone_tmRelayPopClientF3.waitF( tinP ) ;
        sgnDone_tmRelayPopClientF4.waitF( tinP ) ;
        sgnDone_tmRelayKillF.waitF( tinP ) ;
        sgnDone_tmRelayInitiatorF.waitF( tinP ) ;
    
        handleUnregisterIF( tinP , idpt ) ; //P: ENDING NODE DEREGISTERS ITSELF AS HANDLE
    
        ZE( countT , cPoof ) ;
        TELL( "unregistering my bang stacks and calc poof" )
        if( pStPop0 ) { cPoof += *pStPop0 ; }
        if( pStPop1 ) { cPoof += *pStPop1 ; }
        if( pStPop2 ) { cPoof += *pStPop2 ; }
        if( pStPop3 ) { cPoof += *pStPop3 ; }
        if( pStPop4 ) { cPoof += *pStPop4 ; }
    
        TELL( "deleting bang stacks" )
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        DEL( pStPop0 ) ;
        DEL( pStPop1 ) ;
        DEL( pStPop2 ) ;
        DEL( pStPop3 ) ;
        DEL( pStPop4 ) ;
        THREADmODE1rESTORE
    
        TELL( "relayC: cleaning up" )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36072* : 3func.36072001.relayc.relayc END
