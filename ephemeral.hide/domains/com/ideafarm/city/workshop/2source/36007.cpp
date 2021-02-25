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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007001.boxc.boxc BEGIN
#define DDNAME       "3func.36007001.boxc.boxc"
#define DDNUMB      (countT)0x36007001
#define IDFILE      (countT)0xe80


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1090001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4120104.1.1.0.html\"\>4120104:  WAKEsHOW( "example.simplest.func.1090001.boxC.boxC" )\</A\>
constructs a box that can store bytes
the contents of a box are handled as a unit, normally
 "putting" fills a presumably empty box
 "getting" gets all bytes that are in the box
there are several kinds of boxes
 host//ftp/user/password/name: specifies a file on a host with an ftp server
  if user is ze length, "anonymous" is implied
  if password is ze length, "info@" "ideafarm.com" is implied
 host//pop/user/password/name: specifies a file on a host with a pop server
  if user is ze length, "anonymous" is implied
  if password is ze length, "info@" "ideafarm.com" is implied
 host//smtp: specifies an smtp server (not a file)
  host is optional and should usually be omitted
 host//http: specifies an http server
 host//news: specifies a news server
 www.ideafarm.com//time: specifies the reference time at city center
 //hose/name: specifies the client end of a hose
 //tap/name: specifies the server end of a hose
 //napkin.make: specifies a napkin to be created now
 //napkin: specifies a napkin created by another box in this or another local process
 ///name: specifies a local file
  psttP example: T("///ideafarm/ephemeral/domains/my.domain/my.file.name")
  psttP example: T("///ideafarm/ephemeral/domains/my.domain/my.directory/my.file.name")
  subdirectories will be created as needed
  psttP example: T("///c" "/my.directory/my.file.name")
   this will work, but usage of this form is discouraged
   this form might become illegal
   users might be given the ability to prevent usage of boxes of this form
  if idAccessP is ze, ifcOPENaCCESS_R is implied
  if idOpenHowP is ze, ifcOPENhOW_nFeO is implied
  if idShare is ze, ifcOPENsHARE_WR is implied
 fyles///name: specifies a fyle in the (distributed) IdeaFarm " "(tm) City fyles subsystem
  name must be of the form "n.n.n.n. ..." where each "n" is a countT value
arguments
 etherP
 psttP
 idAccessP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010015.ifcOPENaCCESS!||
 idOpenHowP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010014.ifcOPENhOW!||
 idShareP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.0010016.ifcOPENsHARE!||
 cOpenTriesP
  if 0 then will retry forever
  if not 0 then will try cOpenTriesP times
*/
/**/

/*1*/boxC::boxC( tinS& tinP , etherC& etherP , const strokeS* const psttP , const countT idAccessP , const countT idOpenHowP , const countT idShareP , const countT cOpenTriesP , countT timeAllowed1P , const sCountT timeAllowed2P , const flagsT flagsOpenDetailsP )/*1*/ :
ether( etherP ) ,
poop( etherP ) ,
fTap( 0 ) ,
handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) , //U::CONJ: FOR SOME BOX TYPES THIS HANDLE TYPE IS WRONG
hAliasIn( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
hAliasOut( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
hAliasError( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
hHoseCommand( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PIPE ) ,
hHoseReply( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PIPE ) ,
pbNapkin( 0 ) ,
pHoseProcessIn( 0 ) ,
pHoseProcessOut( 0 ) ,
pHoseProcessError( 0 ) ,
pid( 0 ) ,
psttAll( 0 ) ,
psttHost( 0 ) ,
idPort( 0 ) ,
psttType( 0 ) ,
psttUser( 0 ) ,
psttPass( 0 ) ,
psttName( 0 ) ,
pSControl( 0 ) ,
pSgnHoseFinished( 0 ) ,
pSgnTapReady( 0 ) ,
pSgnTapFinished( 0 ) ,
pBatHose( 0 ) ,
pBatTap( 0 ) ,
pBatHPC( 0 ) ,
pBatHPR( 0 ) ,
cOpenTries( cOpenTriesP ) ,
flagsOpenDetails( flagsOpenDetailsP ) ,
timeAllowed1( timeAllowed1P ) ,
timeAllowed2( timeAllowed2P )
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    countT idf = 1 ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    ZE( countT , idLathI ) ;

    ether.strMakeF( tinP , LF , psttAll , psttP ) ; ___( psttAll ) ;
    ether.strSubstringF( tinP , psttHost , idf , sttq , S1C('/') , psttAll ) ; ___( psttHost ) ;

    if( !idf )
    {
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , psttAll ) ;
        __1
    }

    {
        ZE( strokeS* , psttPort ) ;
        ether.strSubstringF( tinP , psttPort , idf , sttq , S1C('/') , psttAll ) ; ___( psttPort ) ;
        if( psttPort && (countT)*psttPort ) idPort = ether.strDigitsToSCountF( tinP , psttPort ) ;
        ether.delF( tinP , psttPort ) ;
    }
    if( !idf )
    {
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , psttAll ) ;
        __1
    }

    ether.strSubstringF( tinP , psttType , idf , sttq , S1C('/') , psttAll ) ; ___( psttType ) ;

    if( !ether.strCompareF( tinP , psttHost , T("fyles") ) )
    {
        ether.delF( tinP , psttHost ) ;
        ether.delF( tinP , psttType ) ;
        ether.strMakeF( tinP , LF , psttHost , T("") ) ; ___( psttHost ) ;
        ether.strMakeF( tinP , LF , psttType , T("fyle") ) ; ___( psttType ) ;
    }

    if( !idPort && psttType && (countT)*psttType )
    {
             if( !ether.strCompareF( tinP , psttType , T("ftp"              ) ) ) idPort = ifcPORToLD1fTP ;
        else if( !ether.strCompareF( tinP , psttType , T("smtp"             ) ) ) idPort =  25 ;
        else if( !ether.strCompareF( tinP , psttType , T("http"             ) ) ) idPort =  80 ;
        else if( !ether.strCompareF( tinP , psttType , T("https"            ) ) ) idPort = 443 ;
        else if( !ether.strCompareF( tinP , psttType , T("pop"              ) ) ) idPort = 110 ;
        else if( !ether.strCompareF( tinP , psttType , T("news"             ) ) ) idPort = 119 ;
        else if( !ether.strCompareF( tinP , psttType , T("box.server"       ) ) ) idPort = ifcPORToLD1bOXsERVER     ;
        else if( !ether.strCompareF( tinP , psttType , T("box.server.deputy") ) ) idPort = ifcPORToLD1bOXsERVER     ;
        else if( !ether.strCompareF( tinP , psttType , T("box.server.adam"  ) ) ) idPort = ifcPORToLD1bOXsERVERaDAM ;
        else if( !ether.strCompareF( tinP , psttType , T("box.sucker"       ) ) ) idPort = ifcPORToLD1bOXsUCKER     ;
        else if( !ether.strCompareF( tinP , psttType , T("time"             ) ) ) idPort = ifcPORToLD1tIMEaUTHORITY ;
        else if( !ether.strCompareF( tinP , psttType , T("dispatcher"       ) ) ) idPort = ifcPORToLD1dISPATCHER    ;
    }

    if
    ( 
        psttHost &&
        psttHost->idAdam && 
        (
            !ether.strCompareF( tinP , psttType , T("ftp") ) ||
            !ether.strCompareF( tinP , psttType , T("pop") )
        )
    )
    {
        if( !idf )
        {
            if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , psttAll ) ;
            __1
        }
        TN( tAnon , "anonymous" ) ;
        TN( tInfo , ifcEMAIL_WEBsITEcONTACT ) ;
        ether.strSubstringF( tinP , psttUser , idf , sttq , S1C('/') , psttAll , tAnon.csF( tinP ) ) ; ___( psttUser ) ;
        ether.strSubstringF( tinP , psttPass , idf , sttq , S1C('/') , psttAll , tInfo.csF( tinP ) ) ; ___( psttPass ) ;
        if( psttUser && !psttUser->idAdam ) { ether.strFuseF( tinP , psttUser , tAnon ) ; ___( psttUser ) ; }
        if( psttPass && !psttPass->idAdam ) { ether.strFuseF( tinP , psttPass , tInfo ) ; ___( psttPass ) ; }
    }

    if( idf ) { ether.strSubstringF( tinP , psttName , idf , idLathI , psttAll ) ; ___( psttName ) ; }
    else      { ether.strMakeF( tinP , LF , psttName , T("") ) ; ___( psttName ) ; }

    countT idAccess = idAccessP ;
    countT idOpenHow   = idOpenHowP ;
    countT idShare  = idShareP ;
    if( !idAccess ) idAccess = ifcOPENaCCESS_R ;
    if( !idOpenHow   ) idOpenHow   = ifcOPENhOW_nFeO ;
    if( !idShare  ) idShare  = ifcOPENsHARE_WR ;

    if( POOP ) return ;
    __Z( psttHost ) ;
    __Z( psttType ) ;
    __Z( psttName ) ;
    if( POOP ) return ;

    if( psttType && ( !ether.strCompareF( tinP , psttType , T("hose") ) || !ether.strCompareF( tinP , psttType , T("tap") ) ) )
    {
        pBatHose = new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , T("batonHose") ) ; ___( pBatHose ) ;
        pBatTap  = new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , T("batonTap" ) ) ; ___( pBatTap  ) ;
        pBatHPC  = new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , T("bhpc"     ) ) ; ___( pBatHPC  ) ;
        pBatHPR  = new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , T("bhpr"     ) ) ; ___( pBatHPR  ) ;

        pSgnHoseFinished = new( 0 , tinP , LF ) signC( tinP , TAG( TAGiDnULL ) , T("sgnHoseFinished") ) ; ___( pSgnHoseFinished ) ;
        pSgnTapReady     = new( 0 , tinP , LF ) signC( tinP , TAG( TAGiDnULL ) , T("sgnTapReady"    ) ) ; ___( pSgnTapReady     ) ;
        pSgnTapFinished  = new( 0 , tinP , LF ) signC( tinP , TAG( TAGiDnULL ) , T("sgnTapFinished" ) ) ; ___( pSgnTapFinished  ) ;
    }

    // OPEN THE BACKING FILE
    if( !ether.strCompareF( tinP , psttType , T("box.server") ) || !ether.strCompareF( tinP , psttType , T("box.server.adam") ) )
    {
        if( !POOP )
        {
            pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
            __Z( pSControl ) ;

            if( !POOP ) pSControl->connectF( tinP , /*ifcPORToLD1bOXsERVER*/idPort , ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) , cOpenTries ) ;
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("box.server.deputy") ) )
    {
        countT hidBoxServer = ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) ;
        //countT pidBoxServer = ifcPORToLD1bOXsERVER ;
        //U: ENABLE AS PART OF ENABLING DISPATCHER FUNCTION (TO USE DEPUTY BOX SERVERS)
        #if defined( NEVERdEFINED )
        {
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            if( 1 == ether.strIdF( tinP , idf , sttq , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/7use/") , psttName ) )
            {
                ZE( byteT* , pbin ) ;
                ZE( countT , cbin ) ;
                ether.boxGetShadowF( tinP , pbin , cbin , T(psttHost)+T("///dispatcher") ) ; ___( pbin ) ;
                if( !ether && pbin && cbin == 2 * sizeof( countT ) )
                {
                    hidBoxServer = *(sCountT*)pbin ;
                    pidBoxServer = ifcPORToLD1bOXsERVERdEPUTY ;
                }
                ether.delF( tinP , pbin ) ;
            }

            //U: 19971122.1715: DISABLE USE OF DEPUTY HERE CAUSE DOESN'T WORK AND DON'T KNOW WHY (I AM "COLD" ON THIS CODE NOW. DEFER THIS TILL I BECOME FAMILIAR WITH IT AGAIN.)
            hidBoxServer = ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) ;
            pidBoxServer = ifcPORToLD1bOXsERVER ;
        }
        #endif

        if( !POOP )
        {
            pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
            __Z( pSControl ) ;

            if( !POOP )
            {
                pSControl->connectF( tinP , /*pidBoxServer*/idPort , hidBoxServer , cOpenTries ) ;
                if( POOP )
                {
                    ether = 0 ;
                    DEL( pSControl ) ;
                    pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
                    __Z( pSControl ) ;
                    if( !POOP ) pSControl->connectF( tinP , /*ifcPORToLD1bOXsERVER*/idPort , ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) , cOpenTries ) ;
                }
            }
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("box.sucker") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP ) pSControl->connectF( tinP , /*ifcPORToLD1bOXsUCKER*/idPort , ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) , cOpenTries ) ;

    }
    else if( !ether.strCompareF( tinP , psttHost , T(WWWiDEAFARMcOM) ) &&  !ether.strCompareF( tinP , psttType , T("time") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP ) pSControl->connectF( tinP , /*ifcPORToLD1tIMEaUTHORITY*/idPort , ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) , cOpenTries ) ;

    }
    else if( !ether.strCompareF( tinP , psttHost , T(WWWiDEAFARMcOM) ) &&  !ether.strCompareF( tinP , psttType , T("dispatcher") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP )
        {
            pSControl->connectF( tinP , /*ifcPORToLD1dISPATCHER*/idPort , ether.sockNicNameF( tinP , psttHost->idAdam ? psttHost : 0 ) , cOpenTries ) ;

            #if defined( __OS2__ )
                countT idOs = 1 ;
            #elif defined( __NT__ )
                countT idOs = 2 ;
            #endif

            pSControl->writeF( tinP , (byteT*)&idOs , sizeof idOs ) ;
        }

    }
    else if( !ether.strCompareF( tinP , psttType , T("ftp") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP )
        {
            nicNameC hidIfo = socketC::nicNameIF( tinP , ether , psttHost->idAdam ? psttHost : 0 ) ;
            pSControl->connectF( tinP , /*port ifcPORToLD1fTP*/idPort , hidIfo , cOpenTries ) ;
            verifyReplyF( tinP , 220 ) ;

            { textC txt = T("user ") + T(psttUser) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            verifyReplyF( tinP , 331 ) ;

            { textC txt = T("pass ") + T(psttPass) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            verifyReplyF( tinP , 230 ) ;

                pSControl->writeF( tinP , (osTextT*)T("type i\r\n") ) ;
            verifyReplyF( tinP , 200 ) ;
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("smtp") ) )
    {
    }
    else if( !ether.strCompareF( tinP , psttType , T("http") ) ||  !ether.strCompareF( tinP , psttType , T("https") ) )
    {
        const boolT bHttps = !ether.strCompareF( tinP , psttType , T("https") ) ;

        if( !POOP )
        {
            boolT bNoQuitEarly = !cOpenTries ;

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            countT cDo = cOpenTries ;
            do
            {
                ZE( boolT , bConnected ) ;
                ZE( countT , cNicName ) ;
                IFsCRATCH
                {
                    SCOOPS
                    ZE( nicNameC* , pNicName ) ;
                    socketC::nicNameIF( tinP , *tinP.pEtScratch , pNicName , cNicName , psttHost->idAdam ? psttHost : 0 ) ; ___( pNicName ) ;
                    __Z( pNicName ) ;
                    __Z( cNicName ) ;

                    if( POOP ) { POOPRqUIET ; }
                    else
                    {
                        for( countT offi = 0 ; offi < cNicName ; offi ++ )
                        {
                            pSControl = new( 0 , tinP , LF ) socketC( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) , 0 , bHttps ? flSOCKETc_CRYPTfOREIGNsSL : flSOCKETc_null , countTC( timeAllowed1 ) , countTC( timeAllowed1 ) , countTC( timeAllowed1 ) ) ; ___( pSControl ) ;

                            __Z( pSControl ) ;

                            if( !POOP ) pSControl->connectF( tinP , idPort , pNicName[ offi ] , 1 ) ;

                            ZE( countT , idpMe ) ;
                            nicNameC nnMe ;
                            if( !POOP ) pSControl->myNameF( tinP , idpMe , nnMe ) ;

                            //ether.traceF( tinP , T("boxC::boxC / [idpMe,nnMe]:    ")+TF2(idpMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(nnMe) ) ;

                            if( !POOP )
                            {
                                //ether.traceF( tinP , T("boxC::boxC / http / connected [nn]: ")+T(pNicName[offi]) ) ;
                                pSControl->etherF( tinP , ether ) ;
                                bConnected = 1 ;
                                break ;
                            }
                            else
                            {
                                POOPRqUIET
                                DEL( pSControl ) ;
                            }
                        }
                    }

                    tinP.pEtScratch->delF( tinP , pNicName ) ;
                }

                if( bConnected ) break ;

                if( !pSControl )
                {
                    //TN( tSay , "" ) ;
                    //if( cNicName ) tSay = T("boxC::boxC / http / no hosts responded [cNicName]: ")+TF2(cNicName,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ;
                    //else           tSay = T("boxC::boxC / http / could not obtain a dns list [psttHost]: ")+T(psttHost) ;
                    //ether.traceF( tinP , tSay ) ;

                    if( bNoQuitEarly || cDo > 1 )
                    {
                        ether.traceF( tinP , T("boxC::boxC / http / after trying all ip addresses, napping for a wink [cNicName]: ")+TF2(cNicName,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        ++ s ; ether.osSleepF( tinP ) ; //U::20190903@2353: CALLING THIS WHEN ether IS IMPOTENT
                    }
                }
            }
            while( bNoQuitEarly || ( cDo && -- cDo ) ) ;
        }
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("pop") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP )
        {
            nicNameC hidIfo = socketC::nicNameIF( tinP , ether , psttHost->idAdam ? psttHost : 0 ) ;
            pSControl->connectF( tinP , /*port 110*/idPort , hidIfo , cOpenTries ) ;
            verifyReplyF( tinP ) ;

            { textC txt = T("user ") + T(psttUser) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            verifyReplyF( tinP ) ;

            { textC txt = T("pass ") + T(psttPass) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            verifyReplyF( tinP ) ;
        }
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("news") ) )
    {
        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( pSControl ) ;
        __Z( pSControl ) ;

        if( !POOP )
        {
            nicNameC hidIfo = socketC::nicNameIF( tinP , ether , psttHost->idAdam ? psttHost : 0 ) ;
            if( !hidIfo )
            {
                ether.strokeF( tinP , T("Could not get nicName for \"")+T(psttHost)+T("\"\r\n") ) ;
                __1
            }
            pSControl->connectF( tinP , /*port 119*/idPort , hidIfo , cOpenTries ) ;
            verifyReplyF( tinP , 200 ) ; //U: VERIFY THAT STRING CONTAINS "(posting ok)"

            if( psttName->idAdam )
            {
                { textC txt = T("group ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
                verifyReplyF( tinP , 211 ) ;
            }
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("fyle") ) )
    {
    }
    else if( !psttHost->idAdam )
    {
        if( !ether.strCompareF( tinP , psttType , T("hose") ) )
        {
            #ifdef __OS2__
                flagsT fnu = 0 ;
                ether.fileOpenF( tinP , handle , fnu , psttAll , idAccess , idShare , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , idOpenHow , 0 , 0 , cOpenTries ) ;
            #elif defined( __NT__ )
                pBatHose->grabF( tinP , TAG( TAGiDnULL ) ) ;
                pSgnTapReady->waitF( tinP ) ;
                ZE( strokeS* , psttOldC ) ;
                ZE( strokeS* , psttR ) ;
                ZE( strokeS* , psttOldCM ) ;
                ZE( strokeS* , psttRM ) ;
                ether.strMakeF( tinP , LF , psttOldC , T("///ideafarm/ephemeral/domains/com/ideafarm/tmp/hose/c.") ) ; ___( psttOldC ) ;
                ether.strMakeF( tinP , LF , psttR , T("///ideafarm/ephemeral/domains/com/ideafarm/tmp/hose/r.") ) ; ___( psttR ) ;
                ether.strFuseF( tinP , psttOldC , psttName ) ; ___( psttOldC ) ;
                ether.strFuseF( tinP , psttR , psttName ) ; ___( psttR ) ;
                ether.diskMapFileNameF( tinP , psttOldCM , psttOldC ) ; ___( psttOldCM ) ;
                ether.diskMapFileNameF( tinP , psttRM , psttR ) ; ___( psttRM ) ;
                ether.delF( tinP , psttOldC ) ;
                ether.delF( tinP , psttR ) ;
                ether.diskMakeDirIfNeededF( tinP , psttOldCM ) ;
                ether.diskMakeDirIfNeededF( tinP , psttRM ) ;
                countT fnu2 = 0 ;
                ether.fileOpenF( tinP , hHoseCommand , fnu2 , psttOldCM , idAccess , idShare , flOPENdETAILS_FAIL | flOPENdETAILS_WRITEnOW | flOPENdETAILS_TEMPORARY , idOpenHow , 0 , 0 , cOpenTries ) ;
                fnu2 = 0 ;
                ether.fileOpenF( tinP , hHoseReply   , fnu2 , psttRM , idAccess , idShare , flOPENdETAILS_FAIL | flOPENdETAILS_WRITEnOW | flOPENdETAILS_TEMPORARY , idOpenHow , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttOldCM ) ;
                ether.delF( tinP , psttRM ) ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("tap") ) )
        {
            fTap = 1 ;
            #ifdef __OS2__
                ZE( strokeS* , pstt ) ;
                ether.strMakeF( tinP , LF , pstt , T("/hose/") , psttName ? psttName->idAdam : 0 ) ; ___( pstt ) ;
                ether.strFuseF( tinP , pstt , psttName ) ; ___( pstt ) ;
                // THE FOLLOWING CALL IS SUPPORTED BY OS2 AND NT BUT -NOT- BY WIN 95
                ether.fileHoseCreateF( tinP , handle , pstt ) ;
                ether.delF( tinP , pstt ) ;
            #elif defined( __NT__ )
                pBatTap->grabF( tinP , TAG( TAGiDnULL ) ) ;
                ZE( strokeS* , psttOldC ) ;
                ZE( strokeS* , psttR ) ;
                ZE( strokeS* , psttOldCM ) ;
                ZE( strokeS* , psttRM ) ;
                ether.strMakeF( tinP , LF , psttOldC , T("///ideafarm/ephemeral/domains/com/ideafarm/tmp/hose/c.") ) ; ___( psttOldC ) ;
                ether.strMakeF( tinP , LF , psttR , T("///ideafarm/ephemeral/domains/com/ideafarm/tmp/hose/r.") ) ; ___( psttR ) ;
                ether.strFuseF( tinP , psttOldC , psttName ) ; ___( psttOldC ) ;
                ether.strFuseF( tinP , psttR , psttName ) ; ___( psttR ) ;
                ether.diskMapFileNameF( tinP , psttOldCM , psttOldC ) ; ___( psttOldCM ) ;
                ether.diskMapFileNameF( tinP , psttRM , psttR ) ; ___( psttRM ) ;
                ether.delF( tinP , psttOldC ) ;
                ether.delF( tinP , psttR ) ;
                ether.diskMakeDirIfNeededF( tinP , psttOldCM ) ;
                ether.diskMakeDirIfNeededF( tinP , psttRM ) ;
                countT fnu2 = 0 ;
                ether.fileOpenF( tinP , hHoseCommand , fnu2 , psttOldCM , idAccess , idShare , flOPENdETAILS_FAIL | flOPENdETAILS_WRITEnOW | flOPENdETAILS_TEMPORARY , idOpenHow , 0 , 0 , cOpenTries ) ;
                fnu2 = 0 ;
                ether.fileOpenF( tinP , hHoseReply   , fnu2 , psttRM , idAccess , idShare , flOPENdETAILS_FAIL | flOPENdETAILS_WRITEnOW | flOPENdETAILS_TEMPORARY , idOpenHow , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttOldCM ) ;
                ether.delF( tinP , psttRM ) ;
                pSgnTapReady->giveF( tinP ) ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("process") ) )
        {
            {
                handleC hIn(    tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                handleC hOut(   tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                handleC hError( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                hIn.osF(    ifcIDtYPEhANDLE_FILE , 0 ) ;
                hOut.osF(   ifcIDtYPEhANDLE_FILE , 1 ) ;
                hError.osF( ifcIDtYPEhANDLE_FILE , 2 ) ;
                hAliasIn = hIn ;
                hAliasOut = hOut ;
                hAliasError = hError ;
            }

            //U:pHoseProcessIn = new( 0 , tinP , LF ) boxC( tinP , ether , T("/hose/process.in/")+T(psttName) , ifcOPENaCCESS_WR , ifcOPENhOW_nCeO , 0 ) ; ___( pHoseProcessIn ) ;
            //U:if( !ether && pHoseProcessIn ) pHoseProcessIn->isInF( tinP ) ;

            pHoseProcessOut = new( 0 , tinP , LF ) boxC( tinP , ether , T("/hose/process.out/")+T(psttName) , ifcOPENaCCESS_WR , ifcOPENhOW_nCeO , 0 ) ; ___( pHoseProcessOut ) ;
            if( !ether && pHoseProcessOut ) pHoseProcessOut->isOutF( tinP ) ;

            pHoseProcessError = new( 0 , tinP , LF ) boxC( tinP , ether , T("/hose/process.error/")+T(psttName) , ifcOPENaCCESS_WR , ifcOPENhOW_nCeO , 0 ) ; ___( pHoseProcessError ) ;
            if( !ether && pHoseProcessError ) pHoseProcessError->isErrorF( tinP ) ;

            handleC h1( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            handleC h2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            h1.osF( ifcIDtYPEhANDLE_FILE , 1 ) ;
            h2.osF( ifcIDtYPEhANDLE_FILE , 2 ) ;
            countT cb = - 1 ;
            ether.fileWriteF( tinP , h1 , (byteT*)&cb , sizeof cb ) ; //U:NT (HANDLE 1 IS HARDCODED)
            ether.fileWriteF( tinP , h2 , (byteT*)&cb , sizeof cb ) ; //U:NT (HANDLE 2 IS HARDCODED)

            ZE( strokeS* , psttw ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            ether.strSubstringF( tinP , psttw , idf , sttq , S1C('/') , psttName ) ; ___( psttw ) ; // UNIQUE STRING USED BY THIS PROCESS INSTANCE
            ether.delF( tinP , psttw ) ;
            ZE( countT , idl ) ;
            ether.strSubstringF( tinP , psttw , idf , idl , psttName ) ; ___( psttw ) ;
            handleC hThread( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_THREAD ) ;
            handleC hProcess( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ;
            ether.osProcessF( tinP , countTC() , pid , ether.strDigitsToSCountF( tinP , psttw ) ) ;
            ether.delF( tinP , psttw ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.in") ) )
        {
            //U:
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.out") ) )
        {
            pHoseProcessOut = new( 0 , tinP , LF ) boxC( tinP , ether , T("/tap/process.out/")+T(psttName) ) ; ___( pHoseProcessOut ) ;
            if( !ether && pHoseProcessOut ) pHoseProcessOut->openNewClientF( tinP ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.error") ) )
        {
            pHoseProcessError = new( 0 , tinP , LF ) boxC( tinP , ether , T("/tap/process.error/")+T(psttName) ) ; ___( pHoseProcessError ) ;
            if( !ether && pHoseProcessError ) pHoseProcessError->openNewClientF( tinP ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("napkin.make") ) )
        {
            ZE( strokeS* , psttNapkin ) ;
            ZE( strokeS* , psttc1b ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            ether.strSubstringF( tinP , psttNapkin , idf , sttq , S1C('/') , psttName ) ; ___( psttNapkin ) ;
            if( idf ) { ether.strSubstringF( tinP , psttc1b , idf , sttq , S1C('/') , psttName ) ; ___( psttc1b ) ; }
            __( idf ) ;
            ZE( countT , cbNapkin ) ;
            if( psttc1b )
            {
                cbNapkin = ether.strDigitsToSCountF( tinP , psttc1b ) ;
                ether.delF( tinP , psttc1b ) ;
            }
            if( !cbNapkin ) cbNapkin = 0x100000 ;

            ZE( voidT* , pv ) ;
            ether.memOpenSharedF( tinP , handle , countTC() , psttNapkin , 0 , sizeof cbNapkin + cbNapkin , ifcOPENsHAREDmEMORYhOW_nCeF ) ; //U::BUG: SHOULD SPEC cTries=1
            pv = (voidT*)handle.cNoteF() ;
            if( pv )
            {
                *(countT*)pv = cbNapkin ;
                pbNapkin = (byteT*)pv + sizeof cbNapkin ;
            }
            __Z( pbNapkin ) ;
            ether.delF( tinP , psttNapkin ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("napkin") ) )
        {
            ZE( strokeS* , psttNapkin ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            ether.strSubstringF( tinP , psttNapkin , idf , sttq , S1C('/') , psttName ) ; ___( psttNapkin ) ;
            __( idf ) ;

            ZE( voidT* , pv ) ;
            ether.memOpenSharedF( tinP , handle , countTC() , psttNapkin ) ;
            pv = (voidT*)handle.cNoteF() ;
            pbNapkin = (byteT*)pv + sizeof(countT) ;
            __Z( pbNapkin ) ;
            ether.delF( tinP , psttNapkin ) ;
        }
        else if( !psttType->idAdam )
        {
            //THE FILE WILL BE OPENED BY THE FIRST ACCESSOR METHOD
        }
    }
    else
    {    
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , psttAll ) ;
        __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007001.boxc.boxc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007002.boxc.dt_boxc BEGIN
#define DDNAME       "3func.36007002.boxc.dt_boxc"
#define DDNUMB      (countT)0x36007002
#define IDFILE      (countT)0xe81


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1090002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5120104.1.1.0.html\"\>5120104:  WAKEsHOW( "example.simplest.func.1090002.boxC.dt_boxC" )\</A\>
*/
/**/

/*1*/boxC::~boxC( voidT )/*1*/
{
    TINSL
    SCOOP
    if( POOP )
    {
        ether.delF( tinP , psttHost ) ;
        ether.delF( tinP , psttType ) ;
        ether.delF( tinP , psttUser ) ;
        ether.delF( tinP , psttPass ) ;
        ether.delF( tinP , psttName ) ;
        ether.delF( tinP , psttAll  ) ;
        DEL( pSControl ) ;
    }
    if( POOP ) return ;

    IFbEcAREFUL
    {
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        if( POOP )
        {
            ether.delF( tinP , psttHost ) ;
            ether.delF( tinP , psttType ) ;
            ether.delF( tinP , psttUser ) ;
            ether.delF( tinP , psttPass ) ;
            ether.delF( tinP , psttName ) ;
            ether.delF( tinP , psttAll  ) ;
            DEL( pSControl ) ;
        }
        if( POOP ) return ;
    }

    _IO_
    // CLOSE THE BACKING FILE
    ZE( boolT , fTap2 ) ;
    ZE( boolT , fHose2 ) ;

    if( POOP )
    {
        __1
        ether = 0 ;
    }

    if
    (
        !ether.strCompareF( tinP , psttType , T("box.server"       ) ) ||
        !ether.strCompareF( tinP , psttType , T("box.server.deputy") ) ||
        !ether.strCompareF( tinP , psttType , T("box.server.adam"  ) ) ||
        !ether.strCompareF( tinP , psttType , T("box.sucker"       ) ) ||
        !ether.strCompareF( tinP , psttType , T("time"             ) ) ||
        !ether.strCompareF( tinP , psttType , T("dispatcher"       ) )
    )
    {
        DEL( pSControl ) ;
    }
    else if( !ether.strCompareF( tinP , psttType , T("ftp") ) )
    {
        if( pSControl ) pSControl->writeF( tinP , (osTextT*)T("quit\r\n") ) ;
        verifyReplyF( tinP , 221 ) ;
        DEL( pSControl ) ;
    }
    else if( !ether.strCompareF( tinP , psttType , T("smtp") ) )
    {
    }
    else if( !ether.strCompareF( tinP , psttType , T("http") ) || !ether.strCompareF( tinP , psttType , T("https") ) )
    {
        DEL( pSControl ) ;
    }
    else if( !ether.strCompareF( tinP , psttType , T("pop") ) )
    {
        if( pSControl ) pSControl->writeF( tinP , (osTextT*)T("quit\r\n") ) ;
        verifyReplyF( tinP ) ;
        DEL( pSControl ) ;
    }
    else if( !ether.strCompareF( tinP , psttType , T("news") ) )
    {
        if( pSControl ) pSControl->writeF( tinP , (osTextT*)T("quit\r\n") ) ;
        verifyReplyF( tinP , 205 ) ;
        DEL( pSControl ) ;
    }
    else if( !ether.strCompareF( tinP , psttType , T("fyle") ) )
    {
    }
    else if( psttHost && !psttHost->idAdam )
    {
        if( !ether.strCompareF( tinP , psttType , T("tap") ) )
        {
            #ifdef __OS2__
            #elif defined( __NT__ )
                pSgnHoseFinished->waitF( tinP ) ;
                fTap2 = 1 ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) )
        {
            #ifdef __OS2__
            #elif defined( __NT__ )
                fHose2 = 1 ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("process") ) )
        {
            ZE( countT , value ) ;
            ZE( countT , idDeathType ) ;
            ether.osProcessWaitF( tinP , value , idDeathType , pid ) ;
            __( idDeathType ) ;
            __( value ) ;
            handleC h1( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            handleC h2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            h1.osF( ifcIDtYPEhANDLE_FILE , 1 ) ;
            h2.osF( ifcIDtYPEhANDLE_FILE , 2 ) ;
            ether.fileWriteF( tinP , h1 , "\xDB" ) ; //U:NT (HANDLE 1 IS HARDCODED)
            ether.fileWriteF( tinP , h2 , "\xDB" ) ; //U:NT (HANDLE 2 IS HARDCODED)

            //U:: THIS CODE IS BUGGY
            //{ countT hAliasIn2    = 0 ; hAliasIn2    = hAliasIn    ; }
            //{ countT hAliasOut2   = 1 ; hAliasOut2   = hAliasOut   ; }
            //{ countT hAliasError2 = 2 ; hAliasError2 = hAliasError ; }

            DEL( pHoseProcessError ) ;
            DEL( pHoseProcessOut   ) ;
            //U:DEL( pHoseProcessIn    ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.in") ) )
        {
            //U:
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.out") ) )
        {
            if( !ether && pHoseProcessOut ) pHoseProcessOut->closeNewClientF( tinP ) ;
            DEL( pHoseProcessOut ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.error") ) )
        {
            if( !ether && pHoseProcessError ) pHoseProcessError->closeNewClientF( tinP ) ;
            DEL( pHoseProcessError ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("napkin.make") ) || !ether.strCompareF( tinP , psttType , T("napkin") ) )
        {
            ZE( voidT* , pv ) ;
            pv = (voidT*)( pbNapkin - sizeof(countT) ) ;
            pbNapkin = 0 ;
        }
        else if( psttType && !psttType->idAdam ) ;
        else __1
    }
    else __1

    ether.delF( tinP , psttHost ) ;
    ether.delF( tinP , psttType ) ;
    ether.delF( tinP , psttUser ) ;
    ether.delF( tinP , psttPass ) ;
    ether.delF( tinP , psttName ) ;
    ether.delF( tinP , psttAll  ) ;
    if( fHose2 )
    {
        pSgnHoseFinished->giveF( tinP ) ;
        pSgnTapFinished->waitF( tinP ) ;
        pBatHose->ungrabF( tinP ) ;
    }
    else if( fTap2 )
    {
        pSgnTapFinished->giveF( tinP ) ;
        pBatTap->ungrabF( tinP ) ;
    }

    if( pBatHose )
    {
        DEL( pSgnHoseFinished ) ;
        DEL( pSgnTapReady     ) ;
        DEL( pSgnTapFinished  ) ;

        DEL( pBatHose ) ;
        DEL( pBatTap  ) ;
        DEL( pBatHPC  ) ;
        DEL( pBatHPR  ) ;
    }

    if( POOP )      //U:: 20201105@1546: THIS IS ODD CODE.  boxC IS A VERY OLD CLASS.  REVIEW ITS ERROR HANDLING TO BRING IT INTO CONFORMANCE
    {               //    (THIS SNIPPET IS NOT IN CONFORMANCE, BECAUSE (1) IT USES "ether = 0", AND (2) IT HAS NO EFFECT (THE "__1" JUST MAKES ether IMPOTENT AGAIN SINCE SCOOP IS STILL IN EFFECT)
        ether = 0 ;
        __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007002.boxc.dt_boxc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007003.boxc.cbfilef BEGIN
#define DDNAME       "3func.36007003.boxc.cbfilef"
#define DDNUMB      (countT)0x36007003
#define IDFILE      (countT)0xe82


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cbFileF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to the number of bytes in the file
used only for local file boxes
*/
/**/

/*1*/countT boxC::cbFileF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( infoFileS* , pInfoFile ) ;
    if( !handle )
    {
        ZE( strokeS* , psttMapped ) ;
        ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
        ZE( countT , flagsResult ) ;
        ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
        ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , 0 , 0 , cOpenTries ) ;
        ether.delF( tinP , psttMapped ) ;
    }
    ether.diskFileQueryF( tinP , pInfoFile , handle ) ; ___( pInfoFile ) ;
    ZE( countT , cbFile ) ;
    if( !ether && pInfoFile ) cbFile = pInfoFile->cbUsed ;
    DEL( pInfoFile ) ;
    return cbFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007003.boxc.cbfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007004.boxc.cbfilef BEGIN
#define DDNAME       "3func.36007004.boxc.cbfilef"
#define DDNUMB      (countT)0x36007004
#define IDFILE      (countT)0xe83


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cbFileF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090004.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to the number of bytes in the box
used only for ftp boxes
the value is obtained by parsing the specified string
arguments
 psttP
*/
/**/

/*1*/countT boxC::cbFileF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( strokeS* , psttAll ) ;
    ether.strMakeF( tinP , LF , psttAll , psttP ) ; ___( psttAll ) ;
    ZE( sCountT , cbFile ) ;
    countT idf = 1 ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    if( !POOP ) __( 1 != ether.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T("status") , psttAll ) ) ;

    if( !POOP ) __( !ether.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T("\r\n") , psttAll ) || !idf ) ;
    if( psttAll && psttAll[ CSpREFIX - 1 + idf ] == S1C('-') )
    {
        ZE( strokeS* , psttw ) ;
        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttAll , 1 ) ; ___( psttw ) ;
        ether.delF( tinP , psttw ) ;
        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttAll , 1 ) ; ___( psttw ) ;
        ether.delF( tinP , psttw ) ;
        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttAll , 1 ) ; ___( psttw ) ;
        ether.delF( tinP , psttw ) ;
        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttAll , 1 ) ; ___( psttw ) ;
        ether.delF( tinP , psttw ) ;
        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttAll , 1 ) ; ___( psttw ) ;
        cbFile = ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
        ether.delF( tinP , psttw ) ;
        if( !POOP ) __( cbFile < 0 ) ;
        if(  ether ) cbFile = 0 ;
    }
    ether.delF( tinP , psttAll ) ;
    return cbFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007004.boxc.cbfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007005.boxc.getf BEGIN
#define DDNAME       "3func.36007005.boxc.getf"
#define DDNUMB      (countT)0x36007005
#define IDFILE      (countT)0xe84


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$getF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6120104.1.1.0.html\"\>6120104:  WAKEsHOW( "example.simplest.func.1090005.boxC.getF" )\</A\>
gets all bytes contained in this box
 www.ideafarm.com/time: gets reference time from city center
  the time is returned in an timeS structure
 host/ftp: gets the remote file's bytes
 host/http: gets the remote file's bytes
 host/pop: retrieves the mail item whose id is specified in cbP (which must be nonze)
 host/news: retrieves the mail item whose id is specified in cbP (which must be nonze)
 //name: gets the bytes of a local file
 /hose/name: gets a message from a hose
  assumption:  messages are small enough to fit entirely within an internal buffer
 /tap/name: gets a message from a tap
  assumption:  messages are small enough to fit entirely within an internal buffer
 /napkin.make: get bytes from a napkin
 /napkin: get bytes from a napkin
pbP and cbP must be ze, except where noted otherwise
arguments
 pbP
 cbP
*/
/**/

/*1*/voidT boxC::getF( tinS& tinP , byteT*& pbP , countT& cbP , const flagsT flagsP , const osTextT* const postBodyP , countT costBodyP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __NZ( pbP ) ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        //U::FV( flBOXcgET , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    // GET THE BACKING FILE BYTES
    if( !ether.strCompareF( tinP , psttType , T("box.server") ) || !ether.strCompareF( tinP , psttType , T("box.server.adam") ) || !ether.strCompareF( tinP , psttType , T("box.server.deputy") ) && pSControl )
    {
        _IO_
        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

        countT idf = 1 ;
        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
        { textC txt = T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        ZE( countT , cbAll ) ;
        pSControl->readF( tinP , (byteT*)&cbAll , sizeof cbAll ) ;
        //U: info.fZombie = 0 ;
        if( !cbAll )
        {
            if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , psttName ) ;
            __1
        }
        if( !POOP )
        {
            _IO_
            if( !!ether.strIdF( tinP , idf , sttq , S1C(' ') , psttName ) )
            {
                cbP = cbAll ;
                ether.newF( tinP , LF , pbP , cbP ) ; ___( pbP ) ;
                pSControl->readF( tinP , pbP , cbP ) ;
            }
            else
            {
                pSControl->readF( tinP , (byteT*)&cbP , sizeof cbP ) ;
                __( cbAll - sizeof( countT ) - cbP ) ;
                ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                if( pbP ) pbP[ cbP ] = 0 ;
                if( cbP ) pSControl->readF( tinP , pbP , cbP ) ;
            }

            if( POOP )
            {
                ether.delF( tinP , pbP ) ;
                cbP = 0 ;
            }
        }
    }
    else if( !ether.strCompareF( tinP , psttHost , T(WWWiDEAFARMcOM) ) && !ether.strCompareF( tinP , psttType , T("time") ) && pSControl )
    {
        _IO_
        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

        cbP = sizeof( sCountT ) + sizeof( countT ) ;
        ether.newF( tinP , LF , pbP , cbP ) ; ___( pbP ) ;
        pSControl->readF( tinP , pbP , cbP ) ;

        //U: info.fZombie = 0 ;
        if( POOP )
        {
            ether.delF( tinP , pbP ) ;
            cbP = 0 ;
        }
    }
    else if( !ether.strCompareF( tinP , psttHost , T(WWWiDEAFARMcOM) ) && !ether.strCompareF( tinP , psttType , T("dispatcher") ) && pSControl )
    {
        _IO_
        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

        cbP = 2 * sizeof( countT ) ;
        ether.newF( tinP , LF , pbP , cbP ) ; ___( pbP ) ;
        pSControl->readF( tinP , pbP , cbP ) ;

        //U: info.fZombie = 0 ;
        if( POOP )
        {
            ether.delF( tinP , pbP ) ;
            cbP = 0 ;
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("ftp") ) && pSControl )
    {
        _IO_
        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

        __NZ( cbP ) ;
        { textC txt = T("stat ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }

        ZE( sCountT , cbFile ) ;
        if( !POOP )
        {
            _IO_
            ZE( strokeS* , psttReply ) ;
            countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
            cbFile = cbFileF( tinP , psttReply ) ;
            {
                _IO_
                ether.delF( tinP , psttReply ) ;
            }
            __( rc != 213 && rc != 211 ) ;
        }
        //U: info.fZombie = 0 ;

        socketC sData( tinP , ether , TAG( TAGiDnULL ) ) ;
        sData.bindF( tinP ) ;
        sData.listenF( tinP ) ;
        nicNameC nicName ;
        { ZE( countT , idpnu ) ; pSControl->myNameF( tinP , idpnu , nicName ) ; }
        ZE( countT , idPort ) ;
        { nicNameC nicNamenu ; sData.myNameF( tinP , idPort , nicNamenu ) ; }
        ZE( strokeS* , pstthp ) ;
        ether.strFromIdPortNicNameF( tinP , pstthp , idPort , nicName ) ; ___( pstthp ) ;
        { textC txt = T("port ")+T(pstthp)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        {
            _IO_
            ether.delF( tinP , pstthp ) ;
        }
        verifyReplyF( tinP , 200 ) ;

        { textC txt = T("retr ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }

        ZE( socketC* , pso ) ;
        nicNameC nnPeer ;
        ZE( countT , idPortPeer ) ;
        ZE( boolT , bRefuse ) ;
        sData.acceptF( tinP , pso , idPortPeer , nnPeer , bRefuse ) ;
        __( bRefuse ) ;
        __Z( pso ) ;
        verifyReplyF( tinP , 0x96 ) ; // 150

        if( !POOP )
        {
            _IO_
            if( cbFile ) //THIS WILL HANG FOREVER IF THE REMOTE HOST FAILS TO SEND ENOUGH BYTES
            {
                ether.newF( tinP , LF , pbP , cbFile + 1 ) ; ___( pbP ) ;
                pbP[ cbFile ] = 0 ;
                pso->readF( tinP , pbP , cbFile ) ;
            }
        }

        verifyReplyF( tinP , 0xe2 ) ; // 226
        DEL( pso ) ;
        if( !POOP ) cbP = cbFile ;
        else         ether.delF( tinP , pbP ) ;
    }
    else if( ( !ether.strCompareF( tinP , psttType , T("http") ) || !ether.strCompareF( tinP , psttType , T("https") ) ) )
    {
        _IO_

        const boolT bHttps = !ether.strCompareF( tinP , psttType , T("https") ) ;

        //THREADmODE4oN( flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY )
        __Z( pSControl ) ;
        __( cbP ) ;
        if( psttName )
        {
            //20190818@1037: COMMENTED OUT WITHOUT ANALYSIS: __( !psttName->idAdam ) ;
            if( psttName->idAdam ) { __( psttName[ CSpREFIX ].idAdam == ' ' ) ; } //U: GOAL IS TO ENSURE THAT THERE ARE NO BLANKS ANYWHERE IN psttName
        }

        if( !POOP )
        {
            _IO_
            boolT bNoQuitEarly = !cOpenTries ;
            ZE( boolT , bFail ) ;

            IFsCRATCH
            {
                SCOOPS

                TESTsCRATCH //U:: TO FIND A BUG
                etherC& etSave = pSControl->etherF( tinP ) ;
                __NZ( &etSave != &ether ) ;

                TN( t200 , "200" ) ;
                TN( t307 , "307" ) ; //U:: 20190817@1559: EDIT TO FULLY SUPPORT TEMPORARY AND PERMANENT REDIRECTS (SILENTLY FOLLOW REDIRECTS UNLESS CALLER TELLS ME NOT TO)
                countT cTries = cOpenTries ;
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                do
                {
                    _IO_
                    TESTsCRATCH //U:: TO FIND A BUG
                    pSControl->etherF( tinP , *tinP.pEtScratch ) ;

                    {
                        TN( tRequest , "" ) ; tRequest = T(F(flagsP)&flBOXcgETf_HTTPpOST?"POST /":"GET /")+T(psttName)+T(" HTTP/1.1\r\nHost: ")+T(psttHost)+T("\r\nConnection: close") ;

                        if( postBodyP )
                        {
                            if( !costBodyP ) costBodyP = thirdC::c_strlenIF( tinP , postBodyP ) ;
                            if( costBodyP  ) tRequest += T("\r\nContent-Length: ")+TF4(costBodyP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa) ;
                        }

                        tRequest += T("\r\n\r\n") ;

                        if( postBodyP ) tRequest += T(postBodyP) ;

                        pSControl->writeF( tinP , (osTextT*)tRequest ) ;
                        //etherC::etRockIF( tinP ).traceF( tinP , tRequest ) ;

                        if( POOP )
                        {
                            POOPRqUIET
                            ether.traceF( tinP , T("getF: could not write socket 640") ) ;
                            bFail = 1 ;
                        }
                    }

                    TESTsCRATCH //U:: TO FIND A BUG
                    ZE( osTextT* , postHeadPlus ) ;
                    ZE( countT   , costHeadPlus ) ;
                    ZE( countT   , costHead     ) ;
                    if( !bFail )
                    {
                        _IO_
                        TESTsCRATCH //U:: TO FIND A BUG
                        const countT costaHeadPlus = TOCK >> 2 ;
                        ether.newF( tinP , LF , postHeadPlus , costaHeadPlus ) ; ___( postHeadPlus ) ;
                        if( postHeadPlus )
                        {
                            _IO_
                            TESTsCRATCH //U:: TO FIND A BUG
                            //ether.memSetF( tinP , postHeadPlus , costaHeadPlus ) ;

                            //CONoUTrAW( "\r\n" USCORE127 "\r\n" ) ;
                            osTextT* postc      = postHeadPlus  ;
                            countT   costRemain = costaHeadPlus ;        
                            ZE( boolT , bEnd ) ;
                            while( !bEnd && costRemain )
                            {
                                _IO_
                                TESTsCRATCH //U:: TO FIND A BUG
                                ZE( countT , delta ) ;
                                IFsCRATCH
                                {
                                    SCOOPS
                                    delta = pSControl->readF( tinP , postc , costRemain , flSOCKETcrEAD_JUSToNEmOUTHFUL | flSOCKETcrEAD_STILLhUNGRYiSoK ) ;
                                    if( POOP )
                                    {
                                        POOPRqUIET
                                        ether.traceF( tinP , T("getF: could not read socket 175") ) ;
                                        bFail = 1 ;
                                        break ;
                                    }
                                }

                                TESTsCRATCH //U:: TO FIND A BUG
                                if( !delta ) break ;
                                else
                                {
                                    _IO_
                                    ZE( boolT , bFound ) ;
                                    ZE( countT , offFound ) ;
                                    countT offMax = delta - 4 ;
                                    for( countT offi = 0 ; offi <= offMax ; offi ++ )
                                    {
                                        if
                                        (
                                               postc[ offi     ] == '\r'
                                            && postc[ offi + 1 ] == '\n'
                                            && postc[ offi + 2 ] == '\r'
                                            && postc[ offi + 3 ] == '\n'
                                        )
                                        {
                                            bFound = 1 ;
                                            offFound = offi ;
                                            break ;
                                        }
                                    }

                                    osTextT* poste = !bFound ? 0 : postc + offFound ;
                                    osTextT* postcWas = postc ;

                                    costHeadPlus += delta ;
                                    postc        += delta ;
                                    costRemain   -= delta ;

                                    if( poste )
                                    {
                                        bEnd = 1 ;
                                        delta = poste - postcWas ;
                                        *poste = 0 ;
                                    }

                                    costHead += delta ;

                                    //CONoUTrAW( postc ) ;
                                }
                                TESTsCRATCH //U:: TO FIND A BUG
                            }
                            //CONoUTrAW( "\r\n" USCORE127 "\r\n" ) ;
                            TESTsCRATCH //U:: TO FIND A BUG
                        }
                        TESTsCRATCH //U:: TO FIND A BUG
                    }
                    TESTsCRATCH //U:: TO FIND A BUG

                    if( !bFail )
                    {
                        _IO_
                        ZE( osTextT* , postzBodySome ) ;
                        ZE( countT   , costzBodySome ) ;
                        if( costHeadPlus - costHead > 4 )
                        {
                            postzBodySome = postHeadPlus + costHead + 4 ;
                            costzBodySome = costHeadPlus - costHead - 4 ;
                        }

                        ZE( countT , costBody ) ;
                        ZE( strokeS* , psttAction ) ;
                        TN( tColonWhite , ": " ) ;
                        TN( tKeyContentLength , "content-length"     ) ;
                        TN( tKeyUserAgent     , "user-agent"         ) ;
                        TN( tKeyConnection    , "connection"         ) ;
                        TN( tTransferEncoding , "transfer-encoding:" ) ;
                        TN( tChunked          , "chunked"            ) ;
                        ZE( boolT , bChunked ) ;
                        ZE( boolT , bLengthSet ) ;
                        {
                            _IO_
                            ZE( strokeS* , pstt1Line ) ;
                            {
                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                ether.strWordsF( tinP , pstt1Line , T(postHeadPlus) , sttq , T("\r\n") ) ; ___( pstt1Line ) ;
                            }

                            boolT bWoth = 1 ;
                            FORsTRINGSiN1( pstt1Line )
                            {
                                _IO_
                                ZE( strokeS* , psttl ) ;
                                ether.strConvertToLowerCaseF( tinP , psttl , psttc1 ) ; ___( psttl ) ;

                                if( bWoth )
                                {
                                    bWoth = 0 ;

                                    //ether.traceF( tinP , psttl ) ;

                                    countT idf = 1 ;
                                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;

                                    if( psttl->idAdam > TUCK ) { bFail = 1 ; } // DEFENSIVE
                                    if( !POOP )                        
                                    {
                                        ZE( strokeS* , pstt1w ) ;
                                        ether.strWordsF( tinP , pstt1w , psttl , sttq ) ; ___( pstt1w ) ;
                                        ZE( countT , idWord ) ;
                                        FORsTRINGSiN1( pstt1w )
                                        {
                                            if( ++ idWord == 1 ) continue ;
                                            if( ether.strCompareF( tinP , psttc1 , t200 ) && ether.strCompareF( tinP , psttc1 , t307 ) ) { bFail = 1 ; } ;
                                            break ;
                                        }
                                        {
                                            _IO_
                                            ether.delF( tinP , pstt1w ) ;
                                        }
                                    }
                                }
                                else  // HEADER LINE ASSUMED TO BE OF THE FORM, FOR EXAMPLE,  "Content-Length:1234"
                                {
                                    ZE( strokeS* , psttKey ) ;
                                    ZE( strokeS* , psttValue ) ;
                                    countT idf = 1 ;
                                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                                    ether.strSubstringF( tinP , psttKey , idf , sttq , tColonWhite , psttl , 1 ) ; ___( psttKey ) ;
                                    ether.strConvertToLowerCaseF( tinP , psttKey ) ; ___( psttKey ) ;
                                    if( idf )
                                    {
                                        ether.strSubstringF( tinP , psttValue , idf , countTC() , psttl ) ; ___( psttValue ) ;
                                        ether.strTrimF( tinP , psttValue , 0 , T(TbLACKnEWlINE) ) ; ___( psttValue ) ;
                                    
                                        if( !ether.strCompareF( tinP , psttKey , tKeyContentLength ) )
                                        {
                                            costBody = ether.strDigitsToSCountF( tinP , psttValue , 0xa , 1 ) ;
                                            bLengthSet = 1 ;
                                        }
                                        else if( !ether.strCompareF( tinP , psttKey , tTransferEncoding ) )
                                        {
                                            bChunked = !ether.strCompareF( tinP , psttValue , tChunked ) ;
                                        }
                                    }
                                
                                    {
                                        _IO_
                                        ether.delF( tinP , psttKey ) ;
                                    }
                                    {
                                        _IO_
                                        ether.delF( tinP , psttValue ) ;
                                    }
                                }
                                {
                                    _IO_
                                    ether.delF( tinP , psttl ) ;
                                }
                            }
                            {
                                _IO_
                                ether.delF( tinP , pstt1Line ) ;
                            }
                        }

                        if( !bFail )
                        {
                            _IO_
                            if( costBody )
                            {
                                cbP = costBody ;
                                ether.newF( tinP , LF , pbP , costBody + 1 ) ; ___( pbP ) ;
                                if( pbP )
                                {
                                    if( !bChunked )
                                    {
                                        osTextT* postc = pbP ;
                                        if( costzBodySome ) { ether.memCopyF( tinP , postc , postzBodySome , costzBodySome ) ; postc += costzBodySome ; }

                                        countT costToDo = costBody - costzBodySome ;
                                        if( costToDo )
                                        {
                                            IFsCRATCH
                                            {
                                                SCOOPS
                                                pSControl->readF( tinP , postc , costToDo ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    ether.traceF( tinP , T("getF: could not read socket 175 [costToDo]:    ")+TF2(costToDo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                                    ether.delF( tinP , pbP ) ;
                                                    bFail = 1 ;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        BLAMMO ;

                                        //U:: REWRITE TO SUPPORT CHUNKS WHILE AVOIDING SINGLE BYTE READS
                                        #if defined( NEVERdEFINED )

                                            ZE( countT , cbe ) ;
                                            osTextT postLengthBuffer[ TUCK ] = { 0 } ;
                                            for( countT offl = 0 ; offl < sizeof postLengthBuffer - 1 ; offl ++ )
                                            {
                                                if( !pSControl->readF( tinP , postLengthBuffer + offl , 1 ) ) { BLAMMO ; } ;

                                                if( postLengthBuffer[ offl ] == '\r' )
                                                {
                                                    postLengthBuffer[ offl ] = 0 ;
                                                    thirdC::c_strlwrIF( tinP , postLengthBuffer) ;
                                                    countT costDo = ether.strDigitsToSCountF( tinP , T(postLengthBuffer) , 0 , 1 ) ;
                                                    offl = - 1 ;

                                                    if( !costDo ) break ;
                                                    else
                                                    {
                                                        osTextT ostWo ;
                                                        if( !pSControl->readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\n'

                                                        while( costDo && !POOP )
                                                        {
                                                            countT costGot = pSControl->readF( tinP , pbP + cbP , costDo ) ;
                                                            __Z( costGot ) ;

                                                            if( !POOP )
                                                            {
                                                                cbP += costGot ;
                                                                costDo   -= costGot ;
                                                            }
                                                        }

                                                        if( !pSControl->readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\r'
                                                        if( !pSControl->readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\n'
                                                    }
                                                }
                                            }

                                        #endif
                                    }

                                    if( !bFail && pbP ) pbP[ costBody ] = 0 ;
                                }
                            }
                        }

                        //ether.traceF( tinP , T("getF [name]:    ")+T(psttNameP) , flTRACE_null , ifcIDtRACEdIVERT_7 ) ; //U:: TO FIND A BUG

                        TESTsCRATCH //U:: TO FIND A BUG
                    }
                    ether.delF( tinP , postHeadPlus ) ;

                    if( !POOP && !bFail )
                    {
                        pSControl->etherF( tinP , etSave ) ;
                        break ;
                    }
                    else
                    {
                        _IO_
                        POOPRqUIET

                        pSControl->etherF( tinP , etSave ) ;

                        DEL( pSControl ) ;

                        //PSEUDOdUPLICATEcODE: 36007001 36007005
                        pSControl = new( 0 , tinP , LF ) socketC( tinP , ether , TAG( TAGiDnULL ) , 0 , bHttps ? flSOCKETc_CRYPTfOREIGNsSL : flSOCKETc_null , countTC( timeAllowed1 ) , countTC( timeAllowed1 ) , countTC( timeAllowed1 ) ) ; ___( pSControl ) ;
                        __Z( pSControl ) ;

                        pSControl->etherF( tinP , *tinP.pEtScratch ) ;

                        if( !POOP )
                        {
                            nicNameC hidIfo = socketC::nicNameIF( tinP , ether , psttHost->idAdam ? psttHost : 0 ) ;
                            pSControl->connectF( tinP , /*port 80*/idPort , hidIfo , cOpenTries ) ;
                        }

                        if( POOP )
                        {
                            POOPRqUIET
                            ether.traceF( tinP , T("boxC::getF / could not replace socket and connect") ) ;
                        }

                        if( bNoQuitEarly || cTries > 1 )
                        {
                            ether.traceF( tinP , T("boxC::getF / napping for a wink") ) ;
                            ++ s ; ether.osSleepF( tinP ) ;
                        }
                    }
                    TESTsCRATCH //U:: TO FIND A BUG
                }
                while( !ether && ( bNoQuitEarly || ( cTries && -- cTries ) ) ) ; // thirdC::thPrimeIF( tinP ) IS NOT CHECKED HERE BECAUSE IT WOULD HANG IF I AM CALLED DURING TERMINATION, AFTER thPrimeIF HAS BEEN DESTROYED

                if( POOP )
                {
                    POOPR
                    bFail = 1 ;
                }
            }
            __( bFail ) ;
        }
        //THREADmODE4rESTORE
    }
    else if( !ether.strCompareF( tinP , psttType , T("pop") ) && pSControl )
    {
        _IO_
        ZE( strokeS* , psttIdWanted ) ;
        ZE( strokeS* , psttTop ) ;
        {
            sCountT idWanted = cbP ;
            if( idWanted < 0 )
            {
                idWanted = - idWanted ;
                ether.strMakeF( tinP , LF , psttTop , T("200") ) ; ___( psttTop ) ;
            }
            __Z( idWanted ) ;
            cbP = 0 ;
            ether.strFromF( tinP , psttIdWanted , idWanted , flFORMAT_NObASE|flFORMAT_FOREIGN , 0 , 10 ) ; ___( psttIdWanted ) ;
        }

        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }
        if( psttTop )
        {
            _IO_
            { textC txt = T("top ") + T(psttIdWanted) + T(" ") + T(psttTop) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            {
                _IO_
                ether.delF( tinP , psttTop ) ;
            }
        }
        else { textC txt = T("retr ") + T(psttIdWanted) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        {
            _IO_
            ether.delF( tinP , psttIdWanted ) ;
        }
        verifyReplyF( tinP ) ;
        //U: info.fZombie = 0 ;

        if( !POOP )
        {
            _IO_
            ZE( strokeS* , pstti ) ;
            pSControl->readWoMultilineF( tinP , pstti , T(".") , 0x10000 ) ; ___( pbP ) ; //U: csttEstimateP
            cbP = ether.strMakeF( tinP , LF , pbP , pstti ) ; ___( pbP ) ;
            {
                _IO_
                ether.delF( tinP , pstti ) ;
            }
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("news") ) && pSControl )
    {
        _IO_
        if( psttName && psttName->idAdam )
        {
            _IO_
            ZE( strokeS* , psttIdWanted ) ;
            {
                _IO_
                sCountT idWanted = cbP ;
                __Z( idWanted ) ;
                cbP = 0 ;
                ether.strFromF( tinP , psttIdWanted , idWanted , flFORMAT_NObASE|flFORMAT_FOREIGN , 0 , 10 ) ; ___( psttIdWanted ) ;
            }

            infoBoxGetPutS info( tinP , ether , *pSControl ) ;
            //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

            { textC txt = T("article ")+T(psttIdWanted)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            {
                _IO_
                ether.delF( tinP , psttIdWanted ) ;
            }
            verifyReplyF( tinP , 220 ) ;
            //U: info.fZombie = 0 ;
            if( !POOP )
            {
                _IO_
                ZE( strokeS* , pstti ) ;
                pSControl->readWoMultilineF( tinP , pstti , T(".") , 0x10000 ) ; ___( pbP ) ; //U: csttEstimateP
                cbP = ether.strMakeF( tinP , LF , pbP , pstti ) ; ___( pbP ) ;
                {
                    _IO_
                    ether.delF( tinP , pstti ) ;
                }
            }
        }
        else
        {
            _IO_
            __( cbP ) ;

            infoBoxGetPutS info( tinP , ether , *pSControl ) ;
            //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

            pSControl->writeF( tinP , (osTextT*)T("list newsgroups\r\n") ) ;
            verifyReplyF( tinP , 215 ) ;
            //U: info.fZombie = 0 ;
            if( !POOP )
            {
                ZE( strokeS* , pstti ) ;
                pSControl->readWoMultilineF( tinP , pstti , T(".") , 0x10000 ) ; ___( pbP ) ; //U: csttEstimateP
                cbP = ether.strMakeF( tinP , LF , pbP , pstti ) ; ___( pbP ) ;
                {
                    _IO_
                    ether.delF( tinP , pstti ) ;
                }
            }
        }
    }
    else if( !ether.strCompareF( tinP , psttType , T("fyle") ) )
    {
        _IO_
        soulC soulo( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDcMDsESSION_GETfYLE ) ;
        soulo << psttName ;

        socketC so( tinP , ether , TAG( TAGiDnULL ) ) ;
        so.connectF( tinP , ifcPORToLD2_CHAT , socketC::nicNameIF( tinP , ether , T(WWWiDEAFARMcOM) ) ) ;
        so.writeF( tinP , soulo ) ;

        soulC souli( tinP , TAG( TAGiDnULL ) ) ;
        so.readF( tinP , souli ) ;
        ZE( countT , idCmd ) ;
        souli >> idCmd ;
        __( idCmd - ifcIDcMDsESSION_GETfYLErEPLY ) ;
        souli.shiftRightF( tinP , pbP , cbP , ifcIDtYPEsOULiTEM_byteTptr ) ; ___( pbP ) ;

        soulC soulo2( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDcMDsESSION_BYE ) ;
        so.writeF( tinP , soulo2 ) ;
    }
    else if( !psttHost->idAdam )
    {
        _IO_
        __NZ( cbP ) ;
        if( psttType && !psttType->idAdam )
        {
            cbP = cbFileF( tinP ) ;
            if( !POOP ) { ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ; }
            if( pbP ) pbP[ cbP ] = 0 ;
            if( cbP )
            {
                _IO_
                if( !handle )
                {
                    ZE( strokeS* , psttMapped ) ;
                    ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
                    ZE( countT , flagsResult ) ;
                    ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
                    ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_WR , 0 , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , 0 , 0 , cOpenTries ) ;
                    {
                        _IO_
                        ether.delF( tinP , psttMapped ) ;
                    }
                }
                ether.fileReadF( tinP , pbP , cbP , handle ) ;

                if( POOP )
                {
                    ether.delF( tinP , pbP ) ;
                    cbP = 0 ;
                }
            }
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) )
        {
            #ifdef __OS2__
                countT cb1 = sizeof cbP ;
                ether.fileReadF( tinP , (byteT*)&cbP , cb1 , handle ) ;
                ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                if( !POOP ) pbP[ cbP ] = 0 ;
                ether.fileReadF( tinP , pbP , cbP , handle ) ;
            #elif defined( __NT__ )
                //U:ASSUME: MESSAGES ARE SMALL ENOUGH THAT FILE POINTER WILL NEVER BE MOVED UNLESS THE ENTIRE MESSAGE CAN BE READ
                while( !ether )
                {
                    pBatHPR->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    countT cb1 = sizeof cbP ;
                    ether.fileReadF( tinP , (byteT*)&cbP , cb1 , hHoseReply ) ;
                    pBatHPR->ungrabF( tinP ) ;
                    if( POOP )
                    {
                        ether = 0 ;
                        {
                            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                            ++ s ; ether.osSleepF( tinP ) ;
                        }
                    }
                    else break ;
                }
                ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                if( !POOP ) pbP[ cbP ] = 0 ;
                while( !ether )
                {
                    pBatHPR->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    ether.fileReadF( tinP , pbP , cbP , hHoseReply ) ;
                    pBatHPR->ungrabF( tinP ) ;
                    if( POOP )
                    {
                        ether = 0 ;
                        {
                            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                            ++ s ; ether.osSleepF( tinP ) ;
                        }
                    }
                    else break ;
                }
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("tap") ) )
        {
            _IO_
            #ifdef __OS2__
                ZE( boolT , fStupidClient ) ;
                countT cb1 = sizeof cbP ;
                ether.fileReadF( tinP , (byteT*)&cbP , cb1 , handle ) ;
                if( cbP == - 1 ) fStupidClient = 1 , cbP = CBlIMITfROMsTUPIDcLIENT ;
                ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                if( !ether && pbP )
                {
                    if( fStupidClient ) ether.memSetF( tinP , pbP , cbP + 1 ) , *pbP = '\xDB' ;
                    else                pbP[ cbP ] = 0 ;
                }
                ether.fileReadF( tinP , pbP , cbP , handle , fStupidClient ) ;
            #elif defined( __NT__ )
                //U:NT: ENHANCE THIS CODE TO IMPLEMENT cbP == -1 I.E. CLIENT DOES NOT KNOW HOW MANY BYTES IT WILL WRITE TO THIS HOSE
                //U:ASSUME: MESSAGES ARE SMALL ENOUGH THAT FILE POINTER WILL NEVER BE MOVED UNLESS THE ENTIRE MESSAGE CAN BE READ
                while( !ether )
                {
                    pBatHPC->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    countT cb1 = sizeof cbP ;
                    ether.fileReadF( tinP , (byteT*)&cbP , cb1 , hHoseCommand ) ;
                    pBatHPC->ungrabF( tinP ) ;
                    if( POOP )
                    {
                        ether = 0 ;
                        {
                            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                            ++ s ; ether.osSleepF( tinP ) ;
                        }
                    }
                    else break ;
                }
                ether.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                if( !POOP ) pbP[ cbP ] = 0 ;
                while( !ether )
                {
                    pBatHPC->grabF( tinP , TAG( TAGiDnULL ) ) ;
                    ether.fileReadF( tinP , pbP , cbP , hHoseCommand ) ;
                    pBatHPC->ungrabF( tinP ) ;
                    if( POOP )
                    {
                        ether = 0 ;
                        {
                            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                            ++ s ; ether.osSleepF( tinP ) ;
                        }
                    }
                    else break ;
                }
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("process") ) )
        {
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.in") ) )
        {
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.out") ) )
        {
            if( !ether && pHoseProcessOut ) { pHoseProcessOut->getF( tinP , pbP , cbP ) ; ___( pbP ) ; }
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.error") ) )
        {
            if( !ether && pHoseProcessError ) { pHoseProcessError->getF( tinP , pbP , cbP ) ; ___( pbP ) ; }
        }
        else if( !ether.strCompareF( tinP , psttType , T("napkin.make") ) || !ether.strCompareF( tinP , psttType , T("napkin") ) )
        {
            if( pbNapkin )
            {
                countT cbNapkin = *(countT*)( pbNapkin - sizeof(countT) ) ;
                __( cbP ) ;
                if( !POOP ) cbP = cbNapkin ;
                ether.newF( tinP , LF , pbP , cbP ) ; ___( pbP ) ;
                ether.memCopyF( tinP , pbP , pbNapkin , cbP ) ;
            }
        }
        else __1
    }
    else __1

    if( POOP )
    {
        ether.delF( tinP , pbP ) ;
        cbP = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007005.boxc.getf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007006.boxc.putf BEGIN
#define DDNAME       "3func.36007006.boxc.putf"
#define DDNUMB      (countT)0x36007006
#define IDFILE      (countT)0xe85


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$putF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7120104.1.1.0.html\"\>7120104:  WAKEsHOW( "example.simplest.func.1090006.boxC.putF" )\</A\>
puts the bytes into the box
 host//ftp:  uses "stor" to store the bytes
 //smtp/from/to1/to2/to3//cc1/cc2/cc3//bcc1/bcc2/bcc3: sends a mail item
 some of the following is obsolete; see the code
 host//smtp/from/to1/to2/to3//cc1/cc2/cc3//bcc1/bcc2/bcc3: sends a mail item
  if "host" is specified then i do my work by connecting to "host" as an smtp client
  host is the value that follows "@" in the "to" and "cc" email addresses  (20190823@1435: nawwh)
  in this case, "from" should be a valid email address
   format: foo@bar.com
   example: 123@odeafarm.com
   example: bill@chevrolet.com
  the specified bytes should begin with a Subject: line
   the first line should begin with "Subject: ", followed by a short phrase
   the next line should be ze length
   the next line should be the first line of the body of the message
   the message can contain any printable ascii characters
    this includes lines that contain only a period
    such lines will be modified so that they are sent correctly
   do not end your message with the termination sequence
    it will be appended for you
  the first part of the name is used as the "From:" email address
   a From: header line is prepended to the body
  the next parts of the name are used as To: and Cc : email addresses
   To: or Cc : header lines are prepended to the body
   each ze length name part toggles between To: and Cc :
 host/news: posts an item to one or more newsgroups
  the first part of the name is used as the "From:" email address
   a From: header line is prepended to the article body
  the next parts of the name is used to specify newsgroups
   a Newsgroups: header line is prepended to the article body
  the specified bytes should begin with a Subject: line
   the next line should be ze length
   the next line should be the first line of the message
   the message can contain any printable ascii characters
    this includes lines that contain only a period
    such lines will be modified so that they are sent correctly
   do not end your message with the termination sequence
    it will be appended for you
 //name: writes the bytes to a local file
 /hose/name: writes the bytes to a hose
 /tap/name: writes the bytes to a tap
 /napkin.make/name: writes the bytes to a napkin
 /napkin/name: writes the bytes to a napkin
for some box types, this function will fail due to hardcoded capacity limits
 these limits involve the use of etherC::strFuseSeparateF
arguments
 pbP
  can be 0
  if 0 then a null length file will be created
  if 0 the cbP must also be 0
 cbP
  can be 0
  if 0 then the null terminated string of bytes at pbP will be written
  the terminating null byte will -not- be written
 flagsP
*/
/**/

/*1*/voidT boxC::putF( tinS& tinP , const byteT* const pbP , const countT cbP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( cbP && !pbP ) ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        FV( flBOXcpUTf , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    countT cbw = cbP ;
    if( pbP && !cbw ) cbw = ether.strBodyLengthF( tinP , pbP ) ;
    // PUT THE BACKING FILE BYTES
    if( !ether.strCompareF( tinP , psttType , T("box.sucker") ) && pSControl )
    {
        __Z( pbP ) ;
        { textC txt = T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        pSControl->writeF( tinP , (byteT*)&cbw , sizeof cbw ) ;
        pSControl->writeF( tinP , pbP , cbw ) ;
        osTextT postOk[ 3 ] = { 0 , 0 , 0 } ;
        __( 2 - pSControl->readF( tinP , postOk , 2 ) ) ;
        __( postOk[ 0 ] != 'o' || postOk[ 1 ] != 'k' ) ;
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("ftp") ) && pSControl )
    {
        infoBoxGetPutS info( tinP , ether , *pSControl ) ;
        //U:{ ZE( countT , tnu ) ; ether.osThreadF( tinP , tnu , tmBoxGetPutDeadmanF , 0 , flTHREADlAUNCH_null , 0 , (countT)&info ) ; }

        __Z( cbw ) ;

        pSControl->writeF( tinP , (osTextT*)T("pasv\r\n") ) ;

        nicNameC nicNameData ;
        ZE( countT , idPortData ) ;
        if( !POOP )
        {
            ZE( strokeS* , psttReply ) ;
            countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
            readNicNameIdPortF( tinP , nicNameData , idPortData , psttReply ) ;
            ether.delF( tinP , psttReply ) ;
            __( rc != 227 ) ;
            __Z( nicNameData ) ;
            __Z( idPortData ) ;
        }

        { textC txt = T("stor ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }

        {
            __Z( pbP ) ;
            socketC sData( tinP , ether , TAG( TAGiDnULL ) ) ;
            sData.connectF( tinP , idPortData , nicNameData ) ;
            sData.writeF( tinP , pbP , cbw ) ;
            verifyReplyF( tinP , 150 ) ;
        }
        verifyReplyF( tinP , 226 ) ;

        { textC txt = T("stat ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }

        ZE( sCountT , cbFileAfter ) ;
        if( !POOP )
        {
            ZE( strokeS* , psttReply ) ;
            countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
            cbFileAfter = cbFileF( tinP , psttReply ) ;
            ether.delF( tinP , psttReply ) ;
            __( rc != 213 ) ; //19980130.1752: CHANGED FROM 211
            __( cbFileAfter != cbw ) ;
        }
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("smtp") ) )
    {
        __Z( pbP ) ;
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        {
            sOut << psttHost ;
            sOut << idPort ;

            ZE( stackC* , pStk_psttTo ) ;
            ZE( stackC* , pStk_psttOldCc ) ;
            ZE( stackC* , pStk_psttBc ) ;
            ether( tinP , pStk_psttTo , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
            ether( tinP , pStk_psttOldCc , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
            ether( tinP , pStk_psttBc , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
            if( pStk_psttTo && pStk_psttOldCc && pStk_psttBc )
            {
                //PARSE FROM TO CC BC FROM psttName
                ZE( strokeS* , psttEmailFrom ) ;
                countT idf = 1 ;
                strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                strokeS sttSlash( '/' ) ;
                //LOGrAW( T("boxC::putF/[psttName]: \"")+T(psttName)+T("\"\r\n") ) ; //U::
                ether.strSubstringF( tinP , psttEmailFrom , idf , sttq , sttSlash , psttName ) ; ___( psttEmailFrom ) ;
                //LOGrAW( T("fr: \"")+T(psttEmailFrom)+T("\"\r\n") ) ; //U::

                {
                    {
                        stackC* pzStk = pStk_psttTo ;
                        while( idf )
                        {
                            ZE( strokeS* , psttw ) ;
                            ether.strSubstringF( tinP , psttw , idf , sttq , sttSlash , psttName ) ; ___( psttw ) ;

                            if( !psttw->idAdam )
                            {
                                CONoUTrAW( "---- cycling ----\r\n" ) ;
                                     if(  pzStk == pStk_psttTo ) pzStk = pStk_psttOldCc ;
                                else if(  pzStk == pStk_psttOldCc ) pzStk = pStk_psttBc ;
                                else if(  pzStk == pStk_psttBc ) pzStk = pStk_psttTo ;
                                else { BLAMMO ; }

                                ether.delF( tinP , psttw ) ;
                            }
                            else
                            {
                                CONoUTrAW( T("  : \"")+T(psttw)+T("\"\r\n") ) ; //U::
                                ZE( countT , ids ) ;
                                pzStk->sinkF( tinP , ids , psttw , flSTACKsINK_UNIQUE ) ;
                                if( !ids ) ether.delF( tinP , psttw ) ;
                            }
                        }
                    }
                }
    
                sOut << psttEmailFrom ;
                ether.delF( tinP , psttEmailFrom ) ;
                {
                    stackC* ppzStk[] = { pStk_psttTo , pStk_psttOldCc , pStk_psttBc } ;
                    for( countT off = 0 ; off < 3 ; off ++ )
                    {
                        sOut << (countT)*ppzStk[ off ] ;
                        while( *ppzStk[ off ] )
                        {
                            ZE( strokeS* , psttw ) ;
                            *ppzStk[ off ] >> psttw ;
                            sOut << psttw ;
                            ether.delF( tinP , psttw ) ;
                        }
                    }
                }
            }
            ether( tinP , pStk_psttTo ) ;
            ether( tinP , pStk_psttOldCc ) ;
            ether( tinP , pStk_psttBc ) ;
        }

        if( F(flagsP) & flBOXcpUTf_FILEnAME ) sOut << (strokeS*)pbP ; //CALLER MUST PASS IN A strokeS* DISGUISED AS byteT*
        else
        {
            TN( tFileBody , "" ) ;
            {
                ZE( strokeS* , psttu ) ;
                ether.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
                tFileBody = T("///ideafarm/ephemeral/domains/com/ideafarm/ipdos/tmp/")+T(psttu) ;
                ether.delF( tinP , psttu ) ;
            }
            sOut << (strokeS*)tFileBody ;
            //LOGrAW( T("boxC::putF: writing file \"")+tFileBody+T("\"\r\n") ) ;
            ether.boxPutF( tinP , tFileBody , pbP , cbP ) ;
        }

        ZE( strokeS* , psttFile ) ;
        ether.boxPutUniqueF( tinP , psttFile , T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/email.to.send/soul.email") , WS( sOut ) ) ;
        ether.delF( tinP , psttFile ) ;
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("news") ) && pSControl )
    {
        __Z( pbP ) ;
        ZE( strokeS* , psttFrom ) ;
        ZE( strokeS* , pstt1ToTo ) ;
        ZE( strokeS* , psttBody ) ;
        {
            ether.strMakeF( tinP , LF , psttBody , T("") , CSeXTRAnEWSbODY ) ; ___( psttBody ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            ether.strSubstringF( tinP , psttFrom , idf , sttq , S1C('/') , psttName ) ; ___( psttFrom ) ;
            ether.strFuseF( tinP , psttBody , T("From: ") ) ; ___( psttBody ) ;
            ether.strFuseF( tinP , psttBody , psttFrom ) ; ___( psttBody ) ;
            ether.strFuseF( tinP , psttBody , T("\r\n") ) ; ___( psttBody ) ;

            ZE( strokeS* , psttTo ) ;
            ether.strSubstringF( tinP , psttTo , idf , sttq , S1C('/') , psttName ) ; ___( psttTo ) ;
            boolT fFirst = 1 ;
            while( psttTo )
            {
                if( psttTo->idAdam )
                {
                    if( fFirst )
                    {
                        fFirst = 0 ;
                        ether.strFuseF( tinP , psttBody , T("Newsgroups"": ") ) ; ___( psttBody ) ;
                    }
                    else ether.strFuseF( tinP , psttBody , T(",") ) ; ___( psttBody ) ;
                    ether.strFuseF( tinP , psttBody , psttTo ) ; ___( psttBody ) ;

                    ether.strFuseSeparateF( tinP , pstt1ToTo , psttTo , 0 , 0 , 0 , 0 , /*U::SOUL?*/ 0x100000 ) ; ___( pstt1ToTo ) ;
                }
                else __1
                ether.delF( tinP , psttTo ) ;
                if( idf ) { ether.strSubstringF( tinP , psttTo , idf , sttq , S1C('/') , psttName ) ; ___( psttTo ) ; }
            }
            ether.strFuseF( tinP , psttBody , T("\r\n") ) ; ___( psttBody ) ;

            ZE( strokeS* , psttBody1 ) ;
            ZE( strokeS* , psttBody2 ) ;
            ether.strMakeF( tinP , LF , psttBody1 , T(pbP) ) ; ___( psttBody1 ) ;
            ether.strReplaceF( tinP , psttBody2 , psttBody1 , T("\r\n.") , T("\r\n..") ) ; ___( psttBody2 ) ;
            ether.delF( tinP , psttBody1 ) ;
            ether.strFuseF( tinP , psttBody , psttBody2 ) ; ___( psttBody ) ;
            ether.strFuseF( tinP , psttBody , T("\r\n.\r\n") ) ; ___( psttBody ) ;
            ether.delF( tinP , psttBody2 ) ;
        }

        pSControl->writeF( tinP , (osTextT*)T("post\r\n") ) ;
        verifyReplyF( tinP , 340 ) ;

        pSControl->writeF( tinP , (osTextT*)T(psttBody) ) ;
        verifyReplyF( tinP , 240 ) ;

        ether.delF( tinP , psttFrom ) ;
        ether.delF( tinP , pstt1ToTo ) ;
        ether.delF( tinP , psttBody ) ;
    }
    else if( !psttHost->idAdam )
    {
        if( psttType && !psttType->idAdam )
        {
            if( !handle )
            {
                ZE( strokeS* , psttMapped ) ;
                ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
                ZE( countT , flagsResult ) ;
                ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
                ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_WR , 0 , flagsOpenDetails | flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttMapped ) ;
            }
            if( pbP ) ether.fileWriteF( tinP , handle , pbP , cbw ) ;
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) )
        {
            __Z( pbP ) ;
            #ifdef __OS2__
                __Z( handle ) ;
                ether.fileWriteF( tinP , handle , (byteT*)&cbw , sizeof cbw ) ;
                ether.fileWriteF( tinP , handle , pbP , cbw ) ;
            #elif defined( __NT__ )
                pBatHPC->grabF( tinP , TAG( TAGiDnULL ) ) ;
                __Z( hHoseCommand ) ;
                ether.fileWriteF( tinP , hHoseCommand , (byteT*)&cbw , sizeof cbw ) ;
                ether.fileWriteF( tinP , hHoseCommand , pbP , cbw ) ;
                pBatHPC->ungrabF( tinP ) ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("tap" ) ) )
        {
            __Z( pbP ) ;
            #ifdef __OS2__
                __Z( handle ) ;
                ether.fileWriteF( tinP , handle , (byteT*)&cbw , sizeof cbw ) ;
                ether.fileWriteF( tinP , handle , pbP , cbw ) ;
            #elif defined( __NT__ )
                pBatHPR->grabF( tinP , TAG( TAGiDnULL ) ) ;
                __Z( hHoseReply ) ;
                ether.fileWriteF( tinP , hHoseReply , (byteT*)&cbw , sizeof cbw ) ;
                ether.fileWriteF( tinP , hHoseReply , pbP , cbw ) ;
                pBatHPR->ungrabF( tinP ) ;
            #endif
        }
        else if( !ether.strCompareF( tinP , psttType , T("process") ) )
        {
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.in") ) )
        {
            //U:
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.out") ) )
        {
        }
        else if( !ether.strCompareF( tinP , psttType , T("process.error") ) )
        {
        }
        else if( !ether.strCompareF( tinP , psttType , T("napkin.make") ) || !ether.strCompareF( tinP , psttType , T("napkin") ) )
        {
            __Z( pbP ) ;
            if( pbNapkin )
            {
                countT cbNapkin = *(countT*)( pbNapkin - sizeof(countT) ) ;
                __Z( cbw ) ;
                __( cbw > cbNapkin ) ;
                ether.memCopyF( tinP , pbNapkin , pbP , cbw ) ;
            }
        }
        else __1
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007006.boxc.putf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007007.boxc.putgenerationf BEGIN
#define DDNAME       "3func.36007007.boxc.putgenerationf"
#define DDNUMB      (countT)0x36007007
#define IDFILE      (countT)0xe86


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$putGenerationF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8120104.1.1.0.html\"\>8120104:  WAKEsHOW( "example.simplest.func.1090007.boxC.putGenerationF" )\</A\>
puts the bytes to a box with a unique, generated name
can be used with ftp boxes and local file boxes
 ftp
  the generated name depends upon the name generated by the ftp peer
 local files
  the generated name will be of the form boxName.nnnnnnnn
   boxName is the name specified in the boxC constructor
   nnnnnnnn is the highest current generation number, plus 1
arguments
 psttGeneratedNameP
 csttEstimateP
  must be large enough to hold a list of the names of all generations
 pbP
 cbP
*/
/**/
/*1*/voidT boxC::putGenerationF( tinS& tinP , strokeS*& psttGeneratedNameP , const countT csttEstimateP , const byteT* const pbP , const countT cbP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( psttGeneratedNameP ) ;
        __Z( pbP ) ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    countT cbw = cbP ;
    if( !cbw ) cbw = ether.strBodyLengthF( tinP , pbP ) ;

    // PUT THE BACKING FILE BYTES
    if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("ftp") ) && pSControl )
    {
        pSControl->writeF( tinP , (osTextT*)T("pasv\r\n") ) ;

        nicNameC nicNameData ;
        ZE( countT , idPortData ) ;
        if( !POOP )
        {
            ZE( strokeS* , psttReply ) ;
            countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
            readNicNameIdPortF( tinP , nicNameData , idPortData , psttReply ) ;
            ether.delF( tinP , psttReply ) ;
            __( rc != 227 ) ;
            __Z( nicNameData ) ;
            __Z( idPortData ) ;
        }

        ZE( strokeS* , psttLike ) ;
        {
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;

            countT idBetween = ether.strIdF( tinP , countTC( 1 ) , sttq , S1C('/') , psttName , 0 , - 1 ) ;
            countT idf = 1 ;
            countT idLathI = idBetween - 1 ;
            ZE( strokeS* , psttDir ) ;
            ether.strSubstringF( tinP , psttDir , idf , idLathI , psttName ) ; ___( psttDir ) ;
            idf = idBetween + 1 ;
            idLathI = 0 ;
            ether.strSubstringF( tinP , psttLike , idf , idLathI , psttName ) ; ___( psttLike ) ;
            { textC txt = T("cwd ")+T(psttDir)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
            ether.delF( tinP , psttDir ) ;
            verifyReplyF( tinP , 250 ) ;
        }

        { textC txt = T("stou ")+T(psttLike)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        ether.delF( tinP , psttLike ) ;

        {
            socketC sData( tinP , ether , TAG( TAGiDnULL ) ) ;
            sData.connectF( tinP , idPortData , nicNameData ) ;
            sData.writeF( tinP , pbP , cbw ) ;
            if( !POOP )
            {
                ZE( strokeS* , psttReply ) ;
                countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
                ZE( strokeS* , psttg ) ;
                stouGeneratedFileNameF( tinP , psttg , psttReply ) ; ___( psttg ) ;
                ether.delF( tinP , psttReply ) ;
                {
                    countT idf = 1 ;
                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;

                    countT idl = ether.strIdF( tinP , countTC( 1 ) , sttq , S1C('/') , psttAll , 0 , - 1 ) ;
                    __Z( idl ) ;
                    ZE( strokeS* , psttPrefix ) ;
                    ether.strSubstringF( tinP , psttPrefix , idf , idl , psttAll ) ; ___( psttPrefix ) ;
                    ether.strFuseF( tinP , psttGeneratedNameP , T(psttPrefix)+T(psttg) ) ; ___( psttGeneratedNameP ) ;
                    ether.delF( tinP , psttPrefix ) ;
                }
                ether.delF( tinP , psttg ) ;
                __( rc != 150 ) ;
            }
        }
        verifyReplyF( tinP , 226 ) ;
    }
    else if( !psttHost->idAdam && !psttType->idAdam )
    {
        ZE( countT , idMin ) ;
        ZE( countT , idMax ) ;
        ether.boxMenuIdRangeF( tinP , idMin , idMax , T("///")+T(psttName)+T(".*") , csttEstimateP ) ;
        ether.strMakeF( tinP , LF , psttGeneratedNameP , T("///")+T(psttName)+T(".")+TF3(++idMax,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8) ) ; ___( psttGeneratedNameP ) ;
        ether.boxPutF( tinP , psttGeneratedNameP , pbP , cbw ) ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007007.boxc.putgenerationf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007008.boxc.stougeneratedfilenamef BEGIN
#define DDNAME       "3func.36007008.boxc.stougeneratedfilenamef"
#define DDNUMB      (countT)0x36007008
#define IDFILE      (countT)0xe87


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$stouGeneratedFileNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090008.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
parses psttReplyP to obtain the generated file name
arguments
 psttGeneratedP
 psttReplyP
*/
/**/
/*1*/voidT boxC::stouGeneratedFileNameF( tinS& tinP , strokeS*& psttGeneratedP , const strokeS* const psttReplyP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    countT idfGen = 1 ;
    strokeS sttqGen( (countT)0 , sc_IGNOREqUOTES ) ;
    ZE( strokeS* , psttWord ) ;
    ether.strSubstringF( tinP , psttWord , idfGen , sttqGen , T("mode data connection for ") , psttReplyP ) ; ___( psttWord ) ;
    __Z( psttWord ) ;
    if( !idfGen )
    {
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , T(DDNAME ":  Could not extract generated name from \"")+T(psttReplyP)+T("\".") ) ;
        __1
        // OCCURED 19970414.1435
    }
    ether.delF( tinP , psttWord ) ;
    countT idfEnd = idfGen ;
    strokeS sttqEnd = sttqGen ;
    countT idLathI = ether.strIdF( tinP , 0 , flSTRmATCH_null , idfEnd , sttqEnd , T(".\r\n") , psttReplyP ) ;
    __Z( idLathI ) ;
    idLathI -- ;
    ether.strSubstringF( tinP , psttGeneratedP , idfGen , idLathI , psttReplyP ) ; ___( psttGeneratedP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007008.boxc.stougeneratedfilenamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007009.boxc.timef BEGIN
#define DDNAME       "3func.36007009.boxc.timef"
#define DDNUMB      (countT)0x36007009
#define IDFILE      (countT)0xe88


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$timeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9120104.1.1.0.html\"\>9120104:  WAKEsHOW( "example.simplest.func.1090009.boxC.timeF" )\</A\>
obtains the time that the backing file was last written
only used for local file boxes (null host, null port)
arguments
 time1P
 time2P
*/
/**/
/*1*/voidT boxC::timeF( tinS& tinP , countT& time1P , sCountT& time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam && !psttType->idAdam )
    {
        timePrivateF( tinP , time1P , time2P ) ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007009.boxc.timef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700a.boxc.timeprivatef BEGIN
#define DDNAME       "3func.3600700a.boxc.timeprivatef"
#define DDNUMB      (countT)0x3600700a
#define IDFILE      (countT)0xe89


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$timePrivateF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000a.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
obtains the time that the backing file was last written
only used for local file boxes
arguments
 time1P
 time2P
*/
/**/
/*1*/voidT boxC::timePrivateF( tinS& tinP , countT& time1P , sCountT& time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( time1P ) ;
        __( time2P ) ;
        if( POOP ) return ;
    }

    _IO_
    ZE( infoFileS* , pInfoFile ) ;
    if( !handle )
    {
        ZE( strokeS* , psttMapped ) ;
        ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
        ZE( countT , flagsResult ) ;
        ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
        ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , 0 , 0 , cOpenTries ) ;
        ether.delF( tinP , psttMapped ) ;
    }
    ether.diskFileQueryF( tinP , pInfoFile , handle ) ; ___( pInfoFile ) ;
    if( pInfoFile )
    {
        time1P = pInfoFile->timeWritten1 ;
        time2P = pInfoFile->timeWritten2 ;
        DEL( pInfoFile ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700a.boxc.timeprivatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700b.boxc.zapf BEGIN
#define DDNAME       "3func.3600700b.boxc.zapf"
#define DDNUMB      (countT)0x3600700b
#define IDFILE      (countT)0xe8a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$zapF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a120104.1.1.0.html\"\>a120104:  WAKEsHOW( "example.simplest.func.109000b.boxC.zapF" )\</A\>
destroys the backing file for this box
for a local file, i will block and retry forever until i succeed
this function can only be used on boxes of types listed here
 ftp
 pop
 local file
arguments
 tinP
 cTriesP
  can be 0
 psttP
  for pop (incoming mail) boxes, psttP is the id of the item to d elete
   example: T("1")
   example: T("89ab")
  for ftp boxes, psttP is not used and must be 0
  for local file boxes, psttP is not used and must be 0
*/
/**/

/*1*/voidT boxC::zapF( tinS& tinP , countT cTriesP , strokeS* psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        if( POOP ) return ;
    }

    _IO_
    // ZAP THE BACKING FILE BYTES
    if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("ftp") ) )
    {
        __NZ( psttP ) ;
        if( pSControl ) { textC txt = T("dele ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        verifyReplyF( tinP , 250 ) ;
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("pop") ) )
    {
        __Z( psttP ) ;
        countT idDoomed = ether.strDigitsToSCountF( tinP , psttP ) ;
        __Z( idDoomed ) ;

        ZE( strokeS* , psttw ) ;
        ether.strFromF( tinP , psttw , idDoomed , flFORMAT_FOREIGN , 0 , 10 ) ; ___( psttw ) ;
        if( pSControl ) { textC txt = T("dele ") + T(psttw) + T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        ether.delF( tinP , psttw ) ;
        verifyReplyF( tinP ) ;
    }
    else if( !psttHost->idAdam && !psttType->idAdam )
    {
        handle.closeIfF() ;
        __NZ( psttP ) ;
        ZE( strokeS* , pstt ) ;
        ether.strMakeF( tinP , LF , pstt , T("///") , psttName->idAdam ) ; ___( pstt ) ;
        ether.strFuseF( tinP , pstt , psttName ) ; ___( pstt ) ;
        ether.diskFileOrDirDeleteF( tinP , pstt , flFILEoRdIRdELETE_null , cTriesP ) ;
        ether.delF( tinP , pstt ) ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700b.boxc.zapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700c.boxc.readnicnameidportf BEGIN
#define DDNAME       "3func.3600700c.boxc.readnicnameidportf"
#define DDNUMB      (countT)0x3600700c
#define IDFILE      (countT)0xe8b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readNicNameIdPortF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
U: only supports 32 bit nicName values (IPv4)
parses psttP, which is assumed to be in the form T("arbitrary (h4,h3,h2,h1,p2,p1) arbitrary")
 the strokes before the first '(' do not matter
 the strokes after the first ')' do not matter
 the strokes delimited by '(' and ')' must be a comma delimited set of 6 base 10 numbers, with no blanks
arguments
 nicNameP
 idPortP
 psttP
*/
/**/

/*1*/voidT boxC::readNicNameIdPortF( tinS& tinP , nicNameC& nicNameP , countT& idPortP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_
    nicNameP = idPortP = 0 ;

    countT idf = 1 ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    ZE( strokeS* , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C('(') , psttP ) ; ___( psttw ) ;
    ether.delF( tinP , psttw ) ;

    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(',') , psttP ) ; ___( psttw ) ; *( (byteT*)&nicNameP + 3 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(',') , psttP ) ; ___( psttw ) ; *( (byteT*)&nicNameP + 2 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(',') , psttP ) ; ___( psttw ) ; *( (byteT*)&nicNameP + 1 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(',') , psttP ) ; ___( psttw ) ; *( (byteT*)&nicNameP + 0 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(',') , psttP ) ; ___( psttw ) ; *( (byteT*)&idPortP + 1 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C(')') , psttP ) ; ___( psttw ) ; *( (byteT*)&idPortP + 0 ) = (byteT)ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ; ether.delF( tinP , psttw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700c.boxc.readnicnameidportf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700d.boxc.verifyreplyf BEGIN
#define DDNAME       "3func.3600700d.boxc.verifyreplyf"
#define DDNUMB      (countT)0x3600700d
#define IDFILE      (countT)0xe8c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$verifyReplyF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000d.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
verifies that the reply indicates the specified return code
ether becomes impotent if it does not
arguments
 rcP
*/
/**/

/*1*/voidT boxC::verifyReplyF( tinS& tinP , const countT rcP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pSControl ) ;
        if( POOP ) return ;
    }

    _IO_
    ZE( strokeS* , psttReply ) ;
    countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
    if( rcP == -1 )
    {
        ZE( strokeS* , psttw ) ;
        ether.strFromF( tinP , psttw , rc ) ; ___( psttw ) ;
        ether.strokeF( tinP , T(psttw)+T(" :::: ")+T(psttReply) ) ;
        ether.delF( tinP , psttw ) ;
    }
    else if( rcP != rc )
    {
        ether.strokeF( tinP , T("\r\nunexpected telnet reply: \"")+T(psttReply)+T("\"\r\n") ) ;
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , T(": 14 ::::")+T(psttReply)+T(":::: ") ) ;
        __( rc ) ;
        __1
    }
    ether.delF( tinP , psttReply ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700d.boxc.verifyreplyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700e.boxc.menuf BEGIN
#define DDNAME       "3func.3600700e.boxc.menuf"
#define DDNUMB      (countT)0x3600700e
#define IDFILE      (countT)0xe8d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$menuF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1a20104.1.1.0.html\"\>1a20104:  WAKEsHOW( "example.simplest.func.109000e.boxC.menuF" )\</A\>
  \<A HREF=\"5.c120104.1.1.0.html\"\>c120104:  WAKEsHOW( "example.simplest.func.109000e.boxC.menuF" )\</A\>
obtains a menu
 host//ftp/name:  obtains the "nlst name"
 host//pop:  obtains a list of the mail items waiting to be retrieved
  each line consists of two numbers separated by a blank
   the first number is the item's id
   the second number is the item's size, in bytes
 host//news/group: obtains the range of item id's available for the group
  each line consists of two numbers separated by a blank
 ///name: lists the files that match //name
 //hose/name: lists the hoses that match /hose/name
evaluates to the number of matching items
this function will fail if the resulting length of pstt1P would be larger than about 0x100000 strokes
arguments
 soulP
 pGrabP
 cMaxP
  can be 0
  if not 0 then this is the maximum nunber of items reported in pstt1P and in the returned value
*/
/**/
/*1*/countT boxC::menuF( tinS& tinP , soulC& soulP , grabC* pGrabP , const countT cMaxP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , cItems ) ;

    if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("ftp") ) && pSControl )
    {
        pSControl->writeF( tinP , (osTextT*)T("pasv\r\n") ) ;

        nicNameC nicNameData ;
        ZE( countT , idPortData ) ;
        if( !POOP )
        {
            ZE( strokeS* , psttReply ) ;
            countT rc = pSControl->readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;
            readNicNameIdPortF( tinP , nicNameData , idPortData , psttReply ) ;
            ether.delF( tinP , psttReply ) ;
            __( rc != 227 ) ;
            __Z( nicNameData ) ;
            __Z( idPortData ) ;
        }

        { textC txt = T("nlst ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }

        socketC sData( tinP , ether , TAG( TAGiDnULL ) ) ;
        sData.connectF( tinP , idPortData , nicNameData ) ;

        if( !POOP )
        {
            ZE( strokeS* , pstt1Prefix ) ;
            ether.strMakeF( tinP , LF , pstt1Prefix , psttHost , 4 + ( psttType ? psttType->idAdam : 0 ) ) ; ___( pstt1Prefix ) ;
            ether.strFuseF( tinP , pstt1Prefix , T("/") ) ; ___( pstt1Prefix ) ;
            ether.strFuseF( tinP , pstt1Prefix , psttType ) ; ___( pstt1Prefix ) ;
            ether.strFuseF( tinP , pstt1Prefix , T("///") ) ; ___( pstt1Prefix ) ;

            ZE( strokeS* , psttEntry ) ;

            ZE( countT , cbIn ) ;
            ZE( byteT , bIn ) ;
            strokeS psttIn4[ CSpREFIX + 1 ] ;
            SETpREFIX( psttIn4 , 1 , 0 ) ;
            psttIn4[ CSpREFIX ] = 0 ;
            while( !ether && sData.readF( tinP , &bIn , 1 , flSOCKETcrEAD_STILLhUNGRYiSoK ) )
            {
                cbIn ++ ;

                if( bIn == '\n' )
                {
                    if( !cMaxP || cItems < cMaxP )
                    {
                        cItems ++ ;
                        ether.strFuseSeparateF( tinP , soulP , psttEntry , 0 , 0 , pGrabP ) ;
                    }
                    ether.delF( tinP , psttEntry ) ;
                }
                else
                {
                    psttIn4[ CSpREFIX ] = bIn ;
                    if( !psttEntry ) { ether.strMakeF( tinP , LF , psttEntry , pstt1Prefix ) ; ___( psttEntry ) ; }
                    ether.strFuseF( tinP , psttEntry , psttIn4 ) ; ___( psttEntry ) ;
                }
            }
            __NZ( psttEntry ) ;
            ether.delF( tinP , psttEntry ) ;
            ether.delF( tinP , pstt1Prefix ) ;
        }

        verifyReplyF( tinP , 150 ) ;
        verifyReplyF( tinP , 226 ) ;
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("pop") ) && pSControl )
    {
        pSControl->writeF( tinP , (osTextT*)T("list\r\n") ) ;
        verifyReplyF( tinP ) ;

        ZE( strokeS* , psttReply ) ;
        pSControl->readWoMultilineF( tinP , psttReply , T(".") , TUCK/*csttEstimateP*//*U::SOUL*/ ) ; ___( psttReply ) ;

        ZE( strokeS* , psttLine ) ;
        countT idf = 1 ;
        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
        ether.strSubstringF( tinP , psttLine , idf , sttq , T("\r\n") , psttReply ) ; ___( psttLine ) ;
        while( !ether && psttLine )
        {
            if( psttLine->idAdam )
            {
                if( !cMaxP || cItems < cMaxP )
                {
                    ZE( countT , idi ) ;
                    ZE( countT , cbi ) ;
                    {
                        ZE( strokeS* , psttw ) ;
                        countT idf = 1 ;
                        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;

                        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttLine , 1 ) ; ___( psttw ) ;
                        idi = ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
                        ether.delF( tinP , psttw ) ;

                        ether.strSubstringF( tinP , psttw , idf , sttq , T(" ") , psttLine , 1 ) ; ___( psttw ) ;
                        cbi = ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
                        ether.delF( tinP , psttw ) ;
                    }

                    cItems ++ ;
                    ether.strFuseSeparateF( tinP , soulP , TF1(idi)+T(" ")+TF1(cbi) , 0 , 0 , pGrabP ) ;
                }
            }
            ether.delF( tinP , psttLine ) ;
            if( idf ) { ether.strSubstringF( tinP , psttLine , idf , sttq , T("\r\n") , psttReply ) ; ___( psttLine ) ; }
        }

        ether.delF( tinP , psttReply ) ;
    }
    else if( psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("news") ) && pSControl )
    {
        ZE( strokeS* , psttRaw ) ;
        { textC txt = T("group ")+T(psttName)+T("\r\n") ; pSControl->writeF( tinP , (osTextT*)txt ) ; }
        if( !POOP )
        {
            countT rc = pSControl->readWoReplyF( tinP , psttRaw ) ; ___( psttRaw ) ;
            __( rc != 211 ) ;
        }
        ZE( strokeS* , psttWord ) ;
        countT idf = 1 ;
        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
        ether.strSubstringF( tinP , psttWord , idf , sttq , S1C(' ') , psttRaw ) ; ___( psttWord ) ;
        ether.delF( tinP , psttWord ) ;
        ether.strSubstringF( tinP , psttWord , idf , sttq , S1C(' ') , psttRaw ) ; ___( psttWord ) ;
        ether.strFuseSeparateF( tinP , soulP , psttWord , 0 , 0 , pGrabP ) ;
        ether.delF( tinP , psttWord ) ;
        ether.strSubstringF( tinP , psttWord , idf , sttq , S1C(' ') , psttRaw ) ; ___( psttWord ) ;
        ether.strFuseSeparateF( tinP , soulP , psttWord , 0 , 0 , pGrabP ) ;
        ether.delF( tinP , psttWord ) ;
        ether.delF( tinP , psttRaw ) ;
    }
    else if( !psttHost->idAdam && !psttType->idAdam )
    {
        ZE( strokeS* , psttR ) ;
        ether.strMakeF( tinP , LF , psttR , T("///") , psttName->idAdam ) ; ___( psttR ) ;
        ether.strFuseF( tinP , psttR , psttName ) ; ___( psttR ) ;
        ZE( strokeS* , psttM ) ;
        ether.diskMapFileNameF( tinP , psttM , psttR ) ; ___( psttM ) ;
        ether.delF( tinP , psttR ) ;

        //U::fileNameC fnLike( tinP , ether , psttM ) ;
        //U::patternC pat( tinP , ether , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;
        //U::SOUL: cItems = ether.diskFindFileOrDirF( tinP , soulP , fnLike.pathF() , &pat , 0 , cMaxP ) ;

        fileNameC fnLike( tinP , ether , psttM ) ;
        patternC pat( tinP , ether , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

        ZE( strokeS* , pstt1m ) ;
        cItems = ether.diskFindFileOrDirF( tinP , pstt1m , fnLike.pathF() , &pat , &soulP , pGrabP , 0 , cMaxP ) ; ___( pstt1m ) ;
        ether.delF( tinP , psttM ) ;

        if( pstt1m )
        {
            soulP << pstt1m ;
            ether.delF( tinP , pstt1m ) ;
        }
    }
    else if( !psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("hose") ) )
    {
        ZE( strokeS* , psttR ) ;
        ether.strMakeF( tinP , LF , psttR , T("///hose/") , psttName->idAdam ) ; ___( psttR ) ;
        ether.strFuseF( tinP , psttR , psttName ) ; ___( psttR ) ;

        fileNameC fnLike( tinP , ether , psttR ) ;
        patternC pat( tinP , ether , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;
        
        ZE( strokeS* , pstt1m ) ;
        cItems = ether.diskFindFileOrDirF( tinP , pstt1m , fnLike.pathF() , &pat , &soulP , pGrabP , 0 , cMaxP ) ; ___( pstt1m ) ;
        ether.delF( tinP , psttR ) ;

        if( pstt1m  )
        {
            soulP << pstt1m ;
            ether.delF( tinP , pstt1m ) ;
        }
    }
    else __1

    return cItems ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700e.boxc.menuf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700f.boxc.verifyreplyf BEGIN
#define DDNAME       "3func.3600700f.boxc.verifyreplyf"
#define DDNUMB      (countT)0x3600700f
#define IDFILE      (countT)0xe8e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$verifyReplyF.0.html\"\>instances\</A\>
\<A HREF=\"5.109000f.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
verifies that the reply begins with "+OK"
if not, then the reply is appended to the ether log
*/
/**/

/*1*/voidT boxC::verifyReplyF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pSControl ) ;
        if( POOP ) return ;
    }

    _IO_
    ZE( strokeS* , psttReply ) ;
    pSControl->readWoLineF( tinP , psttReply , 0x100 ) ; ___( psttReply ) ;
    ZE( countT , idf ) ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    if( ( idf = 1 /*, sttq = ze*/ , 1 != ether.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T("+OK") , psttReply ) ) )
    {
        if( !( F(ether.flagsMode) & flTHIRDmODE_IMPOTENCEeXPECTED ) ) ether.etherPutLogF( tinP , T("\xDB 16 \xDB\xDB\xDB\xDB")+T(psttReply)+T("\xDB\xDB\xDB\xDB\r\n") ) ;
    }
    idf = 1 ;
    //sttq = ze ;
    __( ether.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T("+OK") , psttReply ) != 1 ) ;
    ether.delF( tinP , psttReply ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.3600700f.boxc.verifyreplyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007010.boxc.opennewclientf BEGIN
#define DDNAME       "3func.36007010.boxc.opennewclientf"
#define DDNUMB      (countT)0x36007010
#define IDFILE      (countT)0xe8f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$openNewClientF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090010.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
opens a session with a new tap client, if a client is waiting
if a client is not waiting, blocks until a client is waiting
used only for tap boxes
*/
/**/

/*1*/voidT boxC::openNewClientF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("tap") ) )
        ether.fileHoseConnectF( tinP , handle ) ;
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007010.boxc.opennewclientf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007011.boxc.closenewclientf BEGIN
#define DDNAME       "3func.36007011.boxc.closenewclientf"
#define DDNUMB      (countT)0x36007011
#define IDFILE      (countT)0xe90


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$closeNewClientF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090011.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
ends the current session with a tap client
used only for tap boxes
*/
/**/

/*1*/voidT boxC::closeNewClientF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam && !ether.strCompareF( tinP , psttType , T("tap") ) )
        ether.fileHoseDisconnectF( tinP , handle ) ;
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007011.boxc.closenewclientf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007012.boxc.isinf BEGIN
#define DDNAME       "3func.36007012.boxc.isinf"
#define DDNUMB      (countT)0x36007012
#define IDFILE      (countT)0xe91


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$isInF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090012.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
directs the process to obtain standard in input from this box
*/
/**/
/*1*/voidT boxC::isInF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam )
    {
        if( !psttType->idAdam )
        {
            if( !handle )
            {
                ZE( strokeS* , psttMapped ) ;
                ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
                ZE( countT , flagsResult ) ;
                ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
                ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_WR , 0 , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttMapped ) ;
            }
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) ) ;
        else if( !ether.strCompareF( tinP , psttType , T("tap" ) ) ) ;
        else __1

        //U::FIX THIS: WHAT DOES IT DO?
        //ZE( countT , handleAlias ) ;
        //handleAlias = handle ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007012.boxc.isinf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007013.boxc.isoutf BEGIN
#define DDNAME       "3func.36007013.boxc.isoutf"
#define DDNUMB      (countT)0x36007013
#define IDFILE      (countT)0xe92


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$isOutF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090013.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
directs the process to send standard out output to this box
*/
/**/

/*1*/voidT boxC::isOutF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam )
    {
        if( !psttType->idAdam )
        {
            if( !handle )
            {
                ZE( strokeS* , psttMapped ) ;
                ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
                ZE( countT , flagsResult ) ;
                ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
                ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_WR , 0 , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttMapped ) ;
            }
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) ) ;
        else if( !ether.strCompareF( tinP , psttType , T("tap" ) ) ) ;
        else __1

        //U::FIX THIS. WHAT IS IT SUPPOSED TO DTO?
        //countT handleAlias = 1 ;
        //handleAlias = handle ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007013.boxc.isoutf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007014.boxc.iserrorf BEGIN
#define DDNAME       "3func.36007014.boxc.iserrorf"
#define DDNUMB      (countT)0x36007014
#define IDFILE      (countT)0xe93


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$isErrorF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090014.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
directs the process to send standard error output to this box
*/
/**/

/*1*/voidT boxC::isErrorF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        if( POOP ) return ;
    }

    _IO_
    if( !psttHost->idAdam )
    {
        if( !psttType->idAdam )
        {
            if( !handle )
            {
                ZE( strokeS* , psttMapped ) ;
                ether.diskMapFileNameF( tinP , psttMapped , psttAll ) ; ___( psttMapped ) ;
                ZE( countT , flagsResult ) ;
                ether.diskMakeDirIfNeededF( tinP , psttMapped ) ;
                ether.fileOpenF( tinP , handle , flagsResult , psttMapped , ifcOPENaCCESS_WR , 0 , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR , 0 , 0 , cOpenTries ) ;
                ether.delF( tinP , psttMapped ) ;
            }
        }
        else if( !ether.strCompareF( tinP , psttType , T("hose") ) ) ;
        else if( !ether.strCompareF( tinP , psttType , T("tap" ) ) ) ;
        else __1

        //U::FIX THIS. WHAT IS IT SUPPOSED TO DTO?
        //countT handleAlias = 2 ;
        //handleAlias = handle ;
    }
    else __1
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007014.boxc.iserrorf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007016.boxc.getf BEGIN
#define DDNAME       "3func.36007016.boxc.getf"
#define DDNUMB      (countT)0x36007016
#define IDFILE      (countT)0xe94


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$getF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090016.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT boxC::getF( tinS& tinP , soulC& soulP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( psttHost ) ;
        __Z( psttType ) ;
        __Z( psttName ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( byteT* , pbs ) ;
    ZE( countT , cbs ) ;
    getF( tinP , pbs , cbs ) ; ___( pbs ) ;
    soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pbs , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
    ether.delF( tinP , pbs ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007016.boxc.getf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007017.boxc.putf BEGIN
#define DDNAME       "3func.36007017.boxc.putf"
#define DDNUMB      (countT)0x36007017
#define IDFILE      (countT)0xe95


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$putF.0.html\"\>instances\</A\>
\<A HREF=\"5.1090017.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT boxC::putF( tinS& tinP , soulC& soulP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        //__Z( psttHost ) ; // THE "smtp" TYPE DOES NOT REQUIRE A HOST NAME
        __Z( psttType ) ;
        __Z( psttName ) ;
        if( POOP ) return ;
    }

    _IO_
    putF( tinP , WS( soulP ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36007* : 3func.36007017.boxc.putf END
