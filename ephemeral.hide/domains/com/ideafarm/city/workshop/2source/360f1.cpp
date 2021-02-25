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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1001.subaccounts.dt_subaccounts BEGIN
#define DDNAME       "3func.360f1001.subaccounts.dt_subaccounts"
#define DDNUMB      (countT)0x360f1001
#define IDFILE      (countT)0x1448


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/subaccountS::~subaccountS( voidT )/*1*/
{
    TINSL

    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        if( F(flagsThis) & flSUBACCOUNT_SET )
        {
            socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
            sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
                    
            soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
            sOut << (countT)FINGERnEG_LISTsERVERcMD ;
            sOut << (countT)1 ;
            sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_SETsUBACCOUNTdESCRIPTION ;
            sOut << idAcc ;
            sOut << idSub ;
            sOut << flagsMode ;
            sOut << psttTitle ;
            sOut << psttNameIn ;
            sOut << psttNameOut ;
            pushFieldValuesF( tinP , sOut , pStkEmailRelay             ) ;
            sOut << cEmailRelayDrawings ;
            pushFieldValuesF( tinP , sOut , pStkAutoresponse           ) ;
            pushFieldValuesF( tinP , sOut , pStkRecipe                 ) ;
            pushFieldValuesF( tinP , sOut , pStkEmailPenpalExactOr     ) ;
            pushFieldValuesF( tinP , sOut , pStkEmailPenpalContainsOr  ) ;
            pushFieldValuesF( tinP , sOut , pStkEmailPenpalContainsAnd ) ;

            sock.writeF( tinP , sOut ) ;
                    
            soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
            sock.readF( tinP , sIn ) ;
                    
            ZE( countT , finger ) ;
            sIn >> finger ;
            __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
                    
            ZE( countT , idFormat ) ;
            sIn >> idFormat ;
            __( idFormat - 1 ) ;
                    
            ZE( boolT , bDone ) ;
            sIn >> bDone ;
            __Z( bDone ) ;
                    
            countT idSubSave = idSub ; idSub = 0 ;
            sIn >> idSub ;
            __( idSubSave && idSub != idSubSave ) ;

            if( POOP ) { POOPR ; }

            //CONoUTrAW( tinP.postThreadName ) ;
            //CONoUTrAWb( "\r\nsubaccountS/dt [idAdam,idThread,idAcc,idSub,bDone]: " , tinP.pAdamGlobal1->idAdam , "(" , tinP.monitor.idThread , ") " , idAcc , ":" , idSub , " bDone:" , bDone , "\r\n" ) ; //U::
        }

        PUSE( tinP , *(byteT**)&psttTitle   ) ;
        PUSE( tinP , *(byteT**)&psttNameIn  ) ;
        PUSE( tinP , *(byteT**)&psttNameOut ) ;
    
        { _IO_ if( pStkEmailRelay             ) (*tinP.pEtScratch)( tinP , pStkEmailRelay             ) ; }
        { _IO_ if( pStkAutoresponse           ) (*tinP.pEtScratch)( tinP , pStkAutoresponse           ) ; }
        { _IO_ if( pStkRecipe                 ) (*tinP.pEtScratch)( tinP , pStkRecipe                 ) ; }
        { _IO_ if( pStkEmailPenpalExactOr     ) (*tinP.pEtScratch)( tinP , pStkEmailPenpalExactOr     ) ; }
        { _IO_ if( pStkEmailPenpalContainsOr  ) (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsOr  ) ; }
        { _IO_ if( pStkEmailPenpalContainsAnd ) (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsAnd ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1001.subaccounts.dt_subaccounts END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1002.subaccounts.subaccounts BEGIN
#define DDNAME       "3func.360f1002.subaccounts.subaccounts"
#define DDNUMB      (countT)0x360f1002
#define IDFILE      (countT)0x1449


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/subaccountS::subaccountS( tinS& tinP , etherC& etherP , const countT idAccP , countT& idSubP , flagsT flagsP ) :/*1*/
idAcc( idAccP ) ,
idSub( idSubP ) ,
flagsThis( flagsP ) ,
flagsMode( 0 ) ,
flagsMemberOf( 0 ) ,
idMode( 0 ) ,
cEmailRelayDrawings( 0 ) ,
psttTitle( 0 ) ,
psttNameIn( 0 ) ,
psttNameOut( 0 ) ,
pStkEmailRelay( 0 ) ,
pStkAutoresponse( 0 ) ,
pStkRecipe( 0 ) ,
pStkEmailPenpalExactOr( 0 ) ,
pStkEmailPenpalContainsOr( 0 ) ,
pStkEmailPenpalContainsAnd( 0 )
{
    //CONoUTrAW( tinP.postThreadName ) ;
    //CONoUTrAWb( "\r\nsubaccountS/ct [idAdam,idThread,idAcc,idSub,flags]: " , tinP.pAdamGlobal1->idAdam , "(" , tinP.monitor.idThread , ") " , idAccP , ":" , idSubP , " " , flagsP , "\r\n" ) ; //U::

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccP ) ;
        __Z( idSubP ) ;
        FV(flSUBACCOUNT,flagsP) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( boolT , bOk ) ;
    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        const boolT bAll = ( flagsThis & ~( F(flSUBACCOUNT_SET) ) ) == flSUBACCOUNT_null ;

        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYeMAILrELAY             ) { (*tinP.pEtScratch)( tinP , pStkEmailRelay             , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailRelay             ) ; }
        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYaUTORESPONSE           ) { (*tinP.pEtScratch)( tinP , pStkAutoresponse           , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkAutoresponse           ) ; }
        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYrECIPE                 ) { (*tinP.pEtScratch)( tinP , pStkRecipe                 , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkRecipe                 ) ; }
        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYeMAILpENPALeXACToR     ) { (*tinP.pEtScratch)( tinP , pStkEmailPenpalExactOr     , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalExactOr     ) ; }
        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYeMAILpENPALcONTAINSoR  ) { (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsOr  , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalContainsOr  ) ; }
        if( bAll || F(flagsThis) & flSUBACCOUNT_QUERYeMAILpENPALcONTAINSaND ) { (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsAnd , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalContainsAnd ) ; }

        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
    
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        sOut << (countT)FINGERnEG_LISTsERVERcMD ;
        sOut << (countT)1 ;
        sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_QUERYsUBACCOUNTdESCRIPTION ;
        sOut << idAcc ;
        sOut << idSub ;
        sock.writeF( tinP , sOut ) ;
    
        soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
        sock.readF( tinP , sIn ) ;
    
        if( POOP ) { POOPR ; }
        else
        {
            ZE( countT , finger ) ;
            sIn >> finger ;
            __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
        
            ZE( countT , idFormat ) ;
            sIn >> idFormat ;
            __( idFormat - 1 ) ;

            ZE( boolT , bAccExists ) ;
            sIn >> bAccExists ;
            __Z( bAccExists ) ;

            ZE( boolT , bSubExists ) ;
            sIn >> bSubExists ;
            __Z( bSubExists ) ;

            if( POOP ) { POOPR ; }
            else
            {
                sIn >> flagsMode ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYfLAGSmODE ) ) flagsMode = 0 ;
    
                sIn >> idMode ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYiDmODE ) ) idMode = 0 ;
    
                sIn >> flagsMemberOf ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYfLAGSmEMBERoF ) ) flagsMemberOf = 0 ;
            
                sIn >> psttTitle ; ___( psttTitle ) ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYtITLE ) ) PUSE( tinP , *(byteT**)&psttTitle ) ;
    
                sIn >> psttNameIn ; ___( psttNameIn ) ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYnAMEiN ) ) PUSE( tinP , *(byteT**)&psttNameIn ) ;
    
                sIn >> psttNameOut ; ___( psttNameOut ) ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYnAMEoUT ) ) PUSE( tinP , *(byteT**)&psttNameOut ) ;
    

                push_pstt_F( tinP , pStkEmailRelay             , sIn ) ;
                sIn >> cEmailRelayDrawings ;
                if( !bAll && !( F(flagsThis) & flSUBACCOUNT_QUERYrELAYdRAWINGS ) ) cEmailRelayDrawings = 0 ;
                push_pstt_F( tinP , pStkAutoresponse           , sIn ) ;
                push_pstt_F( tinP , pStkRecipe                 , sIn ) ;
                push_pstt_F( tinP , pStkEmailPenpalExactOr     , sIn ) ;
                push_pstt_F( tinP , pStkEmailPenpalContainsOr  , sIn ) ;
                push_pstt_F( tinP , pStkEmailPenpalContainsAnd , sIn ) ;

                if( POOP ) { POOPR ; }
                else       bOk = 1 ;
            }
        }
    }
    __Z( bOk ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1002.subaccounts.subaccounts END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1003.subaccounts.subaccounts BEGIN
#define DDNAME       "3func.360f1003.subaccounts.subaccounts"
#define DDNUMB      (countT)0x360f1003
#define IDFILE      (countT)0x144a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/subaccountS::subaccountS( tinS& tinP , etherC& etherP , const countT idAccP , countT& idSubP , const strokeS* const psttTitleP , const strokeS* const psttNameInP , const strokeS* const psttNameOutP , const flagsT flagsModeP , const countT idModeP , const flagsT flagsMemberOfP ) :/*1*/
idAcc( idAccP ) ,
idSub( idSubP ) ,
flagsThis( flSUBACCOUNT_SET ) ,
flagsMode( flagsModeP ) ,
flagsMemberOf( flagsMemberOfP ) ,
idMode( idModeP ) ,
cEmailRelayDrawings( 0 ) ,
psttTitle( 0 ) ,
psttNameIn( 0 ) ,
psttNameOut( 0 ) ,
pStkEmailRelay( 0 ) ,
pStkAutoresponse( 0 ) ,
pStkRecipe( 0 ) ,
pStkEmailPenpalExactOr( 0 ) ,
pStkEmailPenpalContainsOr( 0 ) ,
pStkEmailPenpalContainsAnd( 0 )
{
    //CONoUTrAW( tinP.postThreadName ) ;
    //CONoUTrAW7( "\r\nsubaccountS/ct [idAdam,idThread,idAcc]: " , tinP.pAdamGlobal1->idAdam , "(" , tinP.monitor.idThread , ") " , idAccP , "\r\n" ) ; //U::

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccP ) ;
        __Z( psttTitleP ) ;
        __Z( psttNameInP ) ;
        __Z( psttNameOutP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherP.strMakeF( tinP , LF , psttTitle   , psttTitleP   ) ; ___( psttTitle   ) ;
    etherP.strMakeF( tinP , LF , psttNameIn  , psttNameInP  ) ; ___( psttNameIn  ) ;
    etherP.strMakeF( tinP , LF , psttNameOut , psttNameOutP ) ; ___( psttNameOut ) ;

    (*tinP.pEtScratch)( tinP , pStkEmailRelay             , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailRelay             ) ;
    (*tinP.pEtScratch)( tinP , pStkAutoresponse           , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkAutoresponse           ) ;
    (*tinP.pEtScratch)( tinP , pStkRecipe                 , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkRecipe                 ) ;
    (*tinP.pEtScratch)( tinP , pStkEmailPenpalExactOr     , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalExactOr     ) ;
    (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsOr  , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalContainsOr  ) ;
    (*tinP.pEtScratch)( tinP , pStkEmailPenpalContainsAnd , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ; ___( pStkEmailPenpalContainsAnd ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f1* : 3func.360f1003.subaccounts.subaccounts END
