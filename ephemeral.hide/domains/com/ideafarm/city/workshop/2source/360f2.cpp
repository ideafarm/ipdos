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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2002.accounts.dt_accounts BEGIN
#define DDNAME       "3func.360f2002.accounts.dt_accounts"
#define DDNUMB      (countT)0x360f2002
#define IDFILE      (countT)0x144b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/accountS::~accountS( voidT )/*1*/
{
    TINSL

    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        if( F(flagsThis1) & flACCOUNT1_SET )
        {
            socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
            sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
                    
            soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
            sOut << (countT)FINGERnEG_LISTsERVERcMD ;
            sOut << (countT)1 ;
            sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_SETaCCOUNTdESCRIPTION ;
            sOut << idAcc ;
            sOut << flagsMode ;
            sOut << psttAddressName ;
            sOut << psttAddressStreet ;
            sOut << psttAddressCity ;
            sOut << psttAddressState ;
            sOut << psttAddressCountryCode ;
            sOut << psttAddressZip ;
            sOut << psttAddressCountry ;
            sOut << psttAddressStatus ;
            sOut << psttFirstName ;
            sOut << psttLastName ;
            sOut << psttResidenceCountry ;
            sOut << psttZipAt ;
            sOut << psttCharset ;
            sOut << psttPaypalPayerEmail ;
            sOut << psttPaypalPayerId ;
            sOut << psttPaypalPayerStatus ;
            sOut << psttPaypalProtectionEligibility ;
            sOut << psttDirectoryGreeting ;
            sOut << psttHelloGreeting ;

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
                    
            if( POOP ) { POOPR ; }
        }

        PUSE( tinP , *(byteT**)&psttAddressName ) ;
        PUSE( tinP , *(byteT**)&psttAddressStreet ) ;
        PUSE( tinP , *(byteT**)&psttAddressCity ) ;
        PUSE( tinP , *(byteT**)&psttAddressState ) ;
        PUSE( tinP , *(byteT**)&psttAddressCountryCode ) ;
        PUSE( tinP , *(byteT**)&psttAddressZip ) ;
        PUSE( tinP , *(byteT**)&psttAddressCountry ) ;
        PUSE( tinP , *(byteT**)&psttAddressStatus ) ;
        PUSE( tinP , *(byteT**)&psttFirstName ) ;
        PUSE( tinP , *(byteT**)&psttLastName ) ;
        PUSE( tinP , *(byteT**)&psttResidenceCountry ) ;
        PUSE( tinP , *(byteT**)&psttZipAt ) ;
        PUSE( tinP , *(byteT**)&psttCharset ) ;
        PUSE( tinP , *(byteT**)&psttPaypalPayerEmail ) ;
        PUSE( tinP , *(byteT**)&psttPaypalPayerId ) ;
        PUSE( tinP , *(byteT**)&psttPaypalPayerStatus ) ;
        PUSE( tinP , *(byteT**)&psttPaypalProtectionEligibility ) ;
        PUSE( tinP , *(byteT**)&psttDirectoryGreeting ) ;
        PUSE( tinP , *(byteT**)&psttHelloGreeting ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2002.accounts.dt_accounts END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2003.accounts.accounts BEGIN
#define DDNAME       "3func.360f2003.accounts.accounts"
#define DDNUMB      (countT)0x360f2003
#define IDFILE      (countT)0x144c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/accountS::accountS( tinS& tinP , etherC& etherP , const countT idAccP , flagsT flagsThis1P , flagsT flagsThis2P ) :/*1*/
idAcc( idAccP ) ,
flagsThis1( flagsThis1P ) ,
flagsThis2( flagsThis2P ) ,
flagsMode( fliACCOUNTmODE_null ) ,
psttAddressName( 0 ) ,
psttAddressStreet( 0 ) ,
psttAddressCity( 0 ) ,
psttAddressState( 0 ) ,
psttAddressCountryCode( 0 ) ,
psttAddressZip( 0 ) ,
psttAddressCountry( 0 ) ,
psttAddressStatus( 0 ) ,
psttFirstName( 0 ) ,
psttLastName( 0 ) ,
psttResidenceCountry( 0 ) ,
psttZipAt( 0 ) ,
psttCharset( 0 ) ,
psttPaypalPayerEmail( 0 ) ,
psttPaypalPayerId( 0 ) ,
psttPaypalPayerStatus( 0 ) ,
psttPaypalProtectionEligibility( 0 ) ,
psttDirectoryGreeting( 0 ) ,
psttHelloGreeting( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccP ) ;
        FV(flACCOUNT1,flagsThis1P) ;
        FV(flACCOUNT2,flagsThis2P) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( boolT , bOk ) ;
    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        const boolT bAll = ( flagsThis1 & ~( F(flACCOUNT1_SET) ) ) == flACCOUNT1_null ;

        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , homeS::homeIF().idPortListServerIdAccountDescription ) ;
    
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        sOut << (countT)FINGERnEG_LISTsERVERcMD ;
        sOut << (countT)1 ;
        sOut << (countT)ifcIDcMDlISTsERVERiDaCCOUNTdESCRIPTION_QUERYaCCOUNTdESCRIPTION ;
        sOut << idAcc ;
        sock.writeF( tinP , sOut ) ;
    
        soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
        sock.readF( tinP , sIn ) ;
    
        if( POOP )
        {
            POOPR ;
            LOGrAW3( "accountS: could not query account description (socket write and read failed) [idAcc]: " , idAccP , "\r\n" ) ;
        }
        else
        {
            ZE( countT , finger ) ;
            sIn >> finger ;
            if( finger - FINGERnEG_LISTsERVERrEPLY )
            {
                LOGrAW5( "accountS: could not query account description (finger) [idAcc,finger]: " , idAccP , " " , finger , "\r\n" ) ;
                __1 ;
            }
        
            ZE( countT , idFormat ) ;
            sIn >> idFormat ;
            if( idFormat - 1 )
            {
                LOGrAW5( "accountS: could not query account description (idFormat) [idAcc,idFormat]: " , idAccP , " " , idFormat , "\r\n" ) ;
                __1 ;
            }

            ZE( boolT , bAccExists ) ;
            sIn >> bAccExists ;
            if( bAccExists > 1 )
            {
                LOGrAW5( "accountS: could not query account description (bAccExists) [idAcc,bAccExists]: " , idAccP , " " , bAccExists , "\r\n" ) ;
                __1 ;
            }

            if( POOP )
            {
                POOPR ;
                *(flagsT*)&flagsThis1 |= flACCOUNT1_FYIeRRORcOULDnOTqUERY ;
            }
            else if( !bAccExists )
            {
                *(flagsT*)&flagsThis1 |= flACCOUNT1_FYIdOESnOTeXIST ;
                bOk = 1 ;
            }
            else
            {
                flagsMode = 0 ;
                sIn >> flagsMode ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYfLAGSmODE                     ) ) flagsMode = 0 ;

                sIn >> psttAddressName ; ___( psttAddressName ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESSnAME                   ) ) PUSE( tinP , *(byteT**)&psttAddressName ) ;

                sIn >> psttAddressStreet ; ___( psttAddressStreet ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESSsTREET                 ) ) PUSE( tinP , *(byteT**)&psttAddressStreet ) ;

                sIn >> psttAddressCity ; ___( psttAddressCity ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESScITY                   ) ) PUSE( tinP , *(byteT**)&psttAddressCity ) ;

                sIn >> psttAddressState ; ___( psttAddressState ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESSsTATE                  ) ) PUSE( tinP , *(byteT**)&psttAddressState ) ;

                sIn >> psttAddressCountryCode ; ___( psttAddressCountryCode ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESScOUNTRYcODE            ) ) PUSE( tinP , *(byteT**)&psttAddressCountryCode ) ;

                sIn >> psttAddressZip ; ___( psttAddressZip ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESSzIP                    ) ) PUSE( tinP , *(byteT**)&psttAddressZip ) ;

                sIn >> psttAddressCountry ; ___( psttAddressCountry ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESScOUNTRY                ) ) PUSE( tinP , *(byteT**)&psttAddressCountry ) ;

                sIn >> psttAddressStatus ; ___( psttAddressStatus ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYaDDRESSsTATUS                 ) ) PUSE( tinP , *(byteT**)&psttAddressStatus ) ;

                sIn >> psttFirstName ; ___( psttFirstName ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYfIRSTnAME                     ) ) PUSE( tinP , *(byteT**)&psttFirstName ) ;

                sIn >> psttLastName ; ___( psttLastName ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYlASTnAME                      ) ) PUSE( tinP , *(byteT**)&psttLastName ) ;

                sIn >> psttResidenceCountry ; ___( psttResidenceCountry ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYrESIDENCEcOUNTRY              ) ) PUSE( tinP , *(byteT**)&psttResidenceCountry ) ;

                sIn >> psttZipAt ; ___( psttZipAt ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYzIPaT                         ) ) PUSE( tinP , *(byteT**)&psttZipAt ) ;

                sIn >> psttCharset ; ___( psttCharset ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYcHARSET                       ) ) PUSE( tinP , *(byteT**)&psttCharset ) ;

                sIn >> psttPaypalPayerEmail ; ___( psttPaypalPayerEmail ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYpAYPALpAYEReMAIL              ) ) PUSE( tinP , *(byteT**)&psttPaypalPayerEmail ) ;

                sIn >> psttPaypalPayerId ; ___( psttPaypalPayerId ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYpAYPALpAYERiD                 ) ) PUSE( tinP , *(byteT**)&psttPaypalPayerId ) ;

                sIn >> psttPaypalPayerStatus ; ___( psttPaypalPayerStatus ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYpAYPALpAYERsTATUS             ) ) PUSE( tinP , *(byteT**)&psttPaypalPayerStatus ) ;

                sIn >> psttPaypalProtectionEligibility ; ___( psttPaypalProtectionEligibility ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYpAYPALpROTECTIONeLIGIBILITY   ) ) PUSE( tinP , *(byteT**)&psttPaypalProtectionEligibility ) ;

                sIn >> psttDirectoryGreeting ; ___( psttDirectoryGreeting ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYdIRECTORYgREETING             ) ) PUSE( tinP , *(byteT**)&psttDirectoryGreeting ) ;

                sIn >> psttHelloGreeting ; ___( psttHelloGreeting ) ;
                if( !bAll && !( F(flagsThis2) & flACCOUNT2_QUERYhELLOgREETING                 ) ) PUSE( tinP , *(byteT**)&psttHelloGreeting ) ;

                if( POOP )
                {
                    POOPR ;
                    LOGrAW3( "accountS: could not query account description (soul pull) [idAcc]: " , idAccP , "\r\n" ) ;
                }
                else       bOk = 1 ;
            }
        }
    }

    if( !bOk )
    {
        LOGrAW3( "accountS: could not completely query account description [idAcc]: " , idAccP , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2003.accounts.accounts END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2004.accounts.accounts BEGIN
#define DDNAME       "3func.360f2004.accounts.accounts"
#define DDNUMB      (countT)0x360f2004
#define IDFILE      (countT)0x144d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/accountS::accountS( tinS& tinP , etherC& etherP , const countT idAccP , const flagsT flagsModeP , const strokeS* const psttAddressNameP , const strokeS* const psttAddressStreetP , const strokeS* const psttAddressCityP , const strokeS* const psttAddressStateP , const strokeS* const psttAddressCountryCodeP , const strokeS* const psttAddressZipP , const strokeS* const psttAddressCountryP , const strokeS* const psttAddressStatusP , const strokeS* const psttFirstNameP , const strokeS* const psttLastNameP , const strokeS* const psttResidenceCountryP , const strokeS* const psttZipAtP , const strokeS* const psttCharsetP , const strokeS* const psttPaypalPayerEmailP , const strokeS* const psttPaypalPayerIdP , const strokeS* const psttPaypalPayerStatusP , const strokeS* const psttPaypalProtectionEligibilityP , const strokeS* const psttDirectoryGreetingP , const strokeS* const psttHelloGreetingP ) :/*1*/
idAcc( idAccP ) ,
flagsThis1( flACCOUNT1_SET ) ,
flagsThis2( flACCOUNT2_null ) ,
flagsMode( flagsModeP ) ,
psttAddressName( 0 ) ,
psttAddressStreet( 0 ) ,
psttAddressCity( 0 ) ,
psttAddressState( 0 ) ,
psttAddressCountryCode( 0 ) ,
psttAddressZip( 0 ) ,
psttAddressCountry( 0 ) ,
psttAddressStatus( 0 ) ,
psttFirstName( 0 ) ,
psttLastName( 0 ) ,
psttResidenceCountry( 0 ) ,
psttZipAt( 0 ) ,
psttCharset( 0 ) ,
psttPaypalPayerEmail( 0 ) ,
psttPaypalPayerId( 0 ) ,
psttPaypalPayerStatus( 0 ) ,
psttPaypalProtectionEligibility( 0 ) ,
psttDirectoryGreeting( 0 ) ,
psttHelloGreeting( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccP ) ;
        if( POOP ) return ;
    }

    _IO_

    if( psttAddressNameP                  ) { etherP.strMakeF( tinP , LF , psttAddressName                 , psttAddressNameP                  ) ; ___( psttAddressName                    ) ; }
    if( psttAddressStreetP                ) { etherP.strMakeF( tinP , LF , psttAddressStreet               , psttAddressStreetP                ) ; ___( psttAddressStreet                  ) ; }
    if( psttAddressCityP                  ) { etherP.strMakeF( tinP , LF , psttAddressCity                 , psttAddressCityP                  ) ; ___( psttAddressCity                    ) ; }
    if( psttAddressStateP                 ) { etherP.strMakeF( tinP , LF , psttAddressState                , psttAddressStateP                 ) ; ___( psttAddressState                   ) ; }
    if( psttAddressCountryCodeP           ) { etherP.strMakeF( tinP , LF , psttAddressCountryCode          , psttAddressCountryCodeP           ) ; ___( psttAddressCountryCode             ) ; }
    if( psttAddressZipP                   ) { etherP.strMakeF( tinP , LF , psttAddressZip                  , psttAddressZipP                   ) ; ___( psttAddressZip                     ) ; }
    if( psttAddressCountryP               ) { etherP.strMakeF( tinP , LF , psttAddressCountry              , psttAddressCountryP               ) ; ___( psttAddressCountry                 ) ; }
    if( psttAddressStatusP                ) { etherP.strMakeF( tinP , LF , psttAddressStatus               , psttAddressStatusP                ) ; ___( psttAddressStatus                  ) ; }
    if( psttFirstNameP                    ) { etherP.strMakeF( tinP , LF , psttFirstName                   , psttFirstNameP                    ) ; ___( psttFirstName                      ) ; }
    if( psttLastNameP                     ) { etherP.strMakeF( tinP , LF , psttLastName                    , psttLastNameP                     ) ; ___( psttLastName                       ) ; }
    if( psttResidenceCountryP             ) { etherP.strMakeF( tinP , LF , psttResidenceCountry            , psttResidenceCountryP             ) ; ___( psttResidenceCountry               ) ; }
    if( psttZipAtP                        ) { etherP.strMakeF( tinP , LF , psttZipAt                       , psttZipAtP                        ) ; ___( psttZipAt                          ) ; }
    if( psttCharsetP                      ) { etherP.strMakeF( tinP , LF , psttCharset                     , psttCharsetP                      ) ; ___( psttCharset                        ) ; }
    if( psttPaypalPayerEmailP             ) { etherP.strMakeF( tinP , LF , psttPaypalPayerEmail            , psttPaypalPayerEmailP             ) ; ___( psttPaypalPayerEmail               ) ; }
    if( psttPaypalPayerIdP                ) { etherP.strMakeF( tinP , LF , psttPaypalPayerId               , psttPaypalPayerIdP                ) ; ___( psttPaypalPayerId                  ) ; }
    if( psttPaypalPayerStatusP            ) { etherP.strMakeF( tinP , LF , psttPaypalPayerStatus           , psttPaypalPayerStatusP            ) ; ___( psttPaypalPayerStatus              ) ; }
    if( psttPaypalProtectionEligibilityP  ) { etherP.strMakeF( tinP , LF , psttPaypalProtectionEligibility , psttPaypalProtectionEligibilityP  ) ; ___( psttPaypalProtectionEligibility    ) ; }
    if( psttDirectoryGreetingP            ) { etherP.strMakeF( tinP , LF , psttDirectoryGreeting           , psttDirectoryGreetingP            ) ; ___( psttDirectoryGreeting              ) ; }
    if( psttHelloGreetingP                ) { etherP.strMakeF( tinP , LF , psttHelloGreeting               , psttHelloGreetingP                ) ; ___( psttHelloGreeting                  ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f2* : 3func.360f2004.accounts.accounts END
