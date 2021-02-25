//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000006.ifcENABLEtHIRDpARTIES : 1snip.1a000006.ifcenablethirdparties BEGIN
#define DDNAME       "1snip.1a000006.ifcenablethirdparties"
#define DDNUMB      (countT)0x1a000006
#define IDFILE      (countT)0x871


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005f003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*ifcENABLEtHIRDpARTIES*//*1*/
#define ifcENABLEtHIRDpARTIES


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000006.ifcENABLEtHIRDpARTIES : 1snip.1a000006.ifcenablethirdparties END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000003.includeGenMake.base.show.third : 1snip.1a000003.includegenmake.base.show.third BEGIN
#define DDNAME       "1snip.1a000003.includegenmake.base.show.third"
#define DDNUMB      (countT)0x1a000003
#define IDFILE      (countT)0x86c


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
/*1*//*this includes the base show flavor of ipdos.h*//*1*/
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.show.third.2.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000003.includeGenMake.base.show.third : 1snip.1a000003.includegenmake.base.show.third END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.01000002.cnotcppheader : 1snip.01000002.cnotcppheader BEGIN
#define DDNAME       "1snip.01000002.cnotcppheader"
#define DDNUMB      (countT)0x01000002
#define IDFILE      (countT)0x1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*//*CnOTcPPhEADER*//*1*/

#if defined( __cplusplus )

    #define MYpREFIX extern "C"

#else

    #include "d:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\include\openssl\ssl.h"

    //----------------------------------------------------- BEGIN

    //CS:CODEsYNC:DUPLICATED: 15000014 01000002

    typedef const SSL_METHOD* (__syscall *openSsl_pMethodFT        )( void )                                                    ; //const SSL_METHOD *TLS_method(void);  /* SSLv3 but can rollback to v2 */

    typedef int               (__syscall *openSsl_pInitFT          )( void )                                                    ; //int __syscall SSL_library_init( void ) ;

    typedef SSL_CTX*          (__syscall *openSsl_pContextFT       )( const SSL_METHOD* pMethodP )                              ; //SSL_CTX* __syscall SSL_CTX_new( const SSL_METHOD* method ) ;

    typedef void              (__syscall *openSsl_pContextFreeFT   )( SSL_CTX* pContextP )                                      ; // void SSL_CTX_free(SSL_CTX *ctx) ;

    typedef SSL*              (__syscall *openSsl_pWrapperFT       )( SSL_CTX* pContextP )                                      ; // SSL *SSL_new(SSL_CTX *ctx) ;

    typedef void              (__syscall *openSsl_pWrapperFreeFT   )( SSL* pWrapP )                                             ; // void SSL_free(SSL *ssl);

    typedef int               (__syscall *openSsl_pWrapFT          )( SSL* pWrapP , int hSockP )                                ; // int SSL_set_fd(SSL *ssl, int fd);

    typedef int               (__syscall *openSsl_pShakeAsClientFT )( SSL* pWrapP )                                             ; //  int SSL_connect(SSL *ssl);

    typedef int               (__syscall *openSsl_pShakeAsServerFT )( SSL* pWrapP )                                             ; //  int SSL_accept(SSL *ssl);

    typedef int               (__syscall *openSsl_pWriteFT         )( SSL* pWrapP , const void* pbP , int cbP )                 ; // int SSL_write(SSL *ssl, const void *buf, int num);

    typedef int               (__syscall *openSsl_pReadFT          )( SSL* pWrapP , void* pbP , int cbP )                       ; // int SSL_read(SSL *ssl, void *buf, int num);

    typedef int               (__syscall *openSsl_pPeekFT          )( SSL* pWrapP , void* pbP , int cbP )                       ; // int SSL_peek(SSL *ssl, void *buf, int num);

    typedef int               (__syscall *openSsl_pWaveByeFT       )( SSL* pWrapP )                                             ; // int SSL_shutdown(SSL *ssl);

    typedef int               (__syscall *openSsl_pPemFileCertFT   )( SSL_CTX* pContextP , const char* postPemP )               ; // int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx, const char *file);

    typedef int               (__syscall *openSsl_pPemFileKeyFT    )( SSL_CTX* pContextP , const char* postPemP , int idTypeP ) ; // int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx, const char *file, int type);

    typedef int               (__syscall *openSsl_pCurvesFT        )( SSL_CTX* pContextP , int onOffP )                         ; // int SSL_CTX_set_ecdh_auto(SSL_CTX *ctx, int onoff);

    //----------------------------------------------------- END

    #define MYpREFIX

#endif

#undef UNICODE
#include <excpt.h>
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

MYpREFIX void _export           c_debugF( void ) ;
MYpREFIX void _export __watcall c_getaddrinfoF( char* pbListP , unsigned cbListP , const char* const postNameP ) ;
MYpREFIX void _export           c_traceHelperIF( unsigned pP ) ;

MYpREFIX void     __watcall c_openSsl_setupIF(              unsigned* pEcP , openSsl_pInitFT            pInitFP                                                                                                                                                                                                      ) ;
MYpREFIX void     __watcall c_openSsl_waveByeIF(            unsigned* pEcP , openSsl_pWaveByeFT         pWaveByeFP       , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX SSL_CTX* __watcall c_openSsl_getContextIF(         unsigned* pEcP , openSsl_pContextFT         pContextFP       , openSsl_pMethodFT pMethodFP , openSsl_pPemFileCertFT pPemFileCertFP , openSsl_pPemFileKeyFT pPemFileKeyFP , openSsl_pCurvesFT pCurvesFP , const char* const postPemCertificatesP , const char* const postPemPrivateKeyP ) ;
MYpREFIX SSL*     __watcall c_openSsl_getWrapperIF(         unsigned* pEcP , openSsl_pWrapperFT         pWrapperFP       , SSL_CTX* pContextP                                                                                                                                                                        ) ;
MYpREFIX void     __watcall c_openSsl_wrapperFreeIF(        unsigned* pEcP , openSsl_pWrapperFreeFT     pWrapperFreeFP   , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX void     __watcall c_openSsl_wrapSocketIF(         unsigned* pEcP , openSsl_pWrapFT            pWrapFP          , unsigned oshSocketP , SSL* pSslP                                                                                                                                                          ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsClientIF( unsigned* pEcP , openSsl_pShakeAsClientFT   pShakeAsClientFP , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX void     __watcall c_openSsl_shakeHandsAsServerIF( unsigned* pEcP , openSsl_pShakeAsServerFT   pShakeAsServerFP , SSL* pSslP                                                                                                                                                                                ) ;
MYpREFIX unsigned __watcall c_openSsl_writeIF(              unsigned* pEcP , openSsl_pWriteFT           pWriteFP         , SSL* pSslP , const char* const pbP , const unsigned cbP                                                                                                                                   ) ;
MYpREFIX unsigned __watcall c_openSsl_readIF(               unsigned* pEcP , openSsl_pReadFT            pReadFP          , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                     ) ;
MYpREFIX unsigned __watcall c_openSsl_peekIF(               unsigned* pEcP , openSsl_pPeekFT            pPeekFP          , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                     ) ;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
 
#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.01000002.cnotcppheader : 1snip.01000002.cnotcppheader END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113002.featuress.dt_featuress BEGIN
#define DDNAME       "3func.36113002.featuress.dt_featuress"
#define DDNUMB      (countT)0x36113002
#define IDFILE      (countT)0x14b9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/featuresS::~featuresS( voidT )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pswVolBody ) ;
        if( POOP ) return ;
    }

    tinP.pEther->delF( tinP , pczChannelOut                     ) ;
    tinP.pEther->delF( tinP , pczChannelIn                      ) ;
    tinP.pEther->delF( tinP , psttBody                          ) ;
    tinP.pEther->delF( tinP , psttFlyover                       ) ;
    tinP.pEther->delF( tinP , psttDefaultHighlightTabOwnerOn    ) ;
    tinP.pEther->delF( tinP , psttDefaultHighlightTabOwnerOff   ) ;

    countT cFlavors = pswVolBody->cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLeverVolBody = pswVolBody->leverF( tinP , idf ) ;
        vBodyS* pd = (vBodyS*)&(countT&)*pswVolBody ;
        DELzOMBIE( pd ) ;
    }

    (*tinP.pEther)( tinP , pswVolBody ) ; //MUST NOT BE DONE BEFORE STROKE STRINGS INCLUDING VOLATILE BODY STRINGS ARE DESTROYED, BECAUSE I AM STILL IN swSadam, SO MUCH CONTINUE TO BE A VALID FORMATTED INSTANCE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113002.featuress.dt_featuress END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113003.featuress.featuress BEGIN
#define DDNAME       "3func.36113003.featuress.featuress"
#define DDNUMB      (countT)0x36113003
#define IDFILE      (countT)0x14ba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/featuresS::featuresS( tinS& tinP , const countT idAdamP , soulC*& psFeaturesP ) :/*1*/
fc( idAdamP ) ,
pczChannelOut( 0 ) ,
pczChannelIn( 0 ) ,
psttBody( 0 ) ,
psttFlyover( 0 ) ,
psttDefaultHighlightTabOwnerOn( 0 ) ,
psttDefaultHighlightTabOwnerOff( 0 ) ,
cLeverVolBody( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAdamP ) ;
        __Z( psFeaturesP ) ;
        if( POOP ) return ;
    }

    (*tinP.pEther)( tinP , pswVolBody , TAG( TAGiDnULL ) , flSTACKc_PATCHnEWfLAVOR | flSTACKc_BLOB | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLeverVolBody , 0 , sizeof( vBodyS ) ) ; ___( pswVolBody ) ;

    fc.cyclesPerDragRedraw = 4 ;
    fc.idIntercom = 0 ;

    {
        ZE( countT , idCaste ) ;
        *psFeaturesP >> idCaste ;
    }

    ZE( soulC* , psFeature ) ;
    (*tinP.pEther)( tinP , psFeature , TAG( TAGiDnULL ) ) ;
    if( psFeature )
    {
        while( (countT)*psFeaturesP )
        {
            ZE( countT , idTypeItem ) ;
            psFeaturesP->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
            if( idTypeItem != ifcIDtYPEsOULiTEM_soulC ) break ;

            *psFeaturesP >> *psFeature ;

            idTypeItem = 0 ;
            const byteT* pb_idType = psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
            if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
            {
                ZE( countT , idType ) ;
                *psFeature >> idType ;

                switch( idType )
                {
                    case ifcIDtYPEfEATUREsADAM_COMMENT :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_byteTptr )
                        {
                            thirdC::c_memsetIF( tinP , fc.postOldComment , sizeof fc.postOldComment ) ;
                            ZE( osTextT* , posti ) ;
                            *psFeature >> posti ; ___( posti ) ;
                            if( posti && *posti ) thirdC::c_strncpyIF( tinP , fc.postOldComment , posti , sizeof fc.postOldComment ) ;
                            tinP.pEther->delF( tinP , posti ) ;

                            //if( fc.idAdam == 0x5 || fc.idAdam == 0xb )
                            //{
                            //    TN( tSay , "sadam feature comment: " ) ; tSay += TF1(fc.idAdam)+T(": ")+T(fc.postOldComment) ;
                            //    LOGrAWtID( tSay ) ;
                            //}

                            //if( !thirdC::c_strcmpIF( tinP , fc.postOldComment , "buEyeMoveEast" ) || !thirdC::c_strcmpIF( tinP , fc.postOldComment , "buTest" ) )
                            //{
                            //    LOGrAWtID( T("ifcIDtYPEfEATUREsADAM_COMMENT [fc.idAdam]: ")+TF1(fc.idAdam)+T(" \"")+T(fc.postOldComment)+T("\"") )
                            //}
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_OWNER :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.pOwner = 0 ;
                            *psFeature >> *(countT*)&fc.pOwner ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_STATErEFERENCE : //U::RENAME
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( sadamC** , ppSadam ) ;
                            *psFeature >> *(countT*)&ppSadam ;
                            if( ppSadam )
                            {
                                *ppSadam = (sadamC*)( (byteT*)this - sizeof( countT ) - sizeof( zapC ) ) ; //U::ENFORCE: ASSUMES THAT I AM AT THE BEGINNING OF sadamC AFTER neverZe
                                //if( !thirdC::c_strcmpIF( tinP , ssc.postOldComment , "vtHint" ) )
                                //    { LOGrAWtID4( T("ifcIDtYPEfEATUREsADAM_STATErEFERENCE/")+T(ssc.postOldComment)+T("/[ppSadamState,this]: ") , (countT)ppSadamState , " " , (countT)this ) ; }
                            }
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_TOOLfILTERlIST :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.idToolFilterList = 0 ;
                            *psFeature >> fc.idToolFilterList ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_ADAM :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( flagsT , flags ) ;
                            *psFeature >> flags ;

                            SCOOPS
                            FV( flFEATUREsADAMaDAM , flags ) ;
                            if( !POOP ) fc.flagsAdam |= flags ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_TABpARTICIPANT :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.idTabClass = 0 ;
                            *psFeature >> fc.idTabClass ;
                        }
                        else fc.idTabClass = - 1 ;

                        idTypeItem = 0 ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.idTab = 0 ;
                            *psFeature >> fc.idTab ;
                        }
                        else fc.idTab = - 1 ;

                        tinP.pEther->delF( tinP , psttDefaultHighlightTabOwnerOn ) ;

                        //U:: 'X' IS USED PROVISIONALLY WHEN eyeOldC IS SUPPORTED.  UNTIL THEN, 'X' IS NOT USED (COLOR HIGHLIGHTING IS USED INSTEAD, BECAUSE IT LOOKS BETTER THAN THE X HIGHLIGHTING)
                        //U:: WHEN eyeOldC GOES INTO PRODUCTION, EITHER 'X' HIGHLIGHTING WILL BE NEEDED FOR TAB HIGHLIGHTING, OR SOMETHING BETTER THAN 'X' THAT CAN BE SUPPORTED WITHOUT USING FLOODFILL (UNTIL eycC SUPPORTS FLOODFILL, IF IT EVER DOES)
                        tinP.pEther->strMakeF( tinP , LF , psttDefaultHighlightTabOwnerOn , T("") ) ; ___( psttDefaultHighlightTabOwnerOn ) ; //U::
                        //U::tinP.pEther->strMakeF( tinP , LF , psttDefaultHighlightTabOwnerOn , T("X") ) ; ___( psttDefaultHighlightTabOwnerOn ) ;

                        tinP.pEther->delF( tinP , psttDefaultHighlightTabOwnerOff ) ;
                        tinP.pEther->strMakeF( tinP , LF , psttDefaultHighlightTabOwnerOff , T("") ) ; ___( psttDefaultHighlightTabOwnerOff ) ;

                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_BODY :
                    {
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_strokeSptr )
                        {
                            *psFeature >> psttBody ; ___( psttBody ) ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_VOLATILEbODY :
                    {

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( vBodyS* , pvb ) ;
                            {
                                              cLeverVolBody = 0 ;
                                *psFeature >> cLeverVolBody ;
                                if( cLeverVolBody )
                                {
                                    byteT* pba = (byteT*)&(countT&)*pswVolBody ;
                                    pvb = new( 0 , tinP , pba , pswVolBody->cbDataF() ) vBodyS ;
                                }
                            }

                            boolT bDiscard = 1 ;
                            if( pvb )
                            {
                                psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                                {
                                                             pvb->ppsttSpec = 0 ;
                                    *psFeature >> *(countT*)&pvb->ppsttSpec ;

                                    idTypeItem = 0 ;
                                    psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                    if( idTypeItem == ifcIDtYPEsOULiTEM_countT && pvb->ppsttSpec )
                                    {
                                                                 pvb->zBaton_ppsttSpec = 0 ;
                                        *psFeature >> *(countT*)&pvb->zBaton_ppsttSpec ;
                                        if( pvb->zBaton_ppsttSpec ) bDiscard = 0 ;
                                    }
                                }
                            }

                            if( bDiscard ) 
                            {
                                DELzOMBIE( pvb ) ;
                                pswVolBody->freeF( tinP ) ;
                                cLeverVolBody = 0 ;
                            }
                        }

                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_HOTkEY :
                    {
                        fc.flagsHotKey |= flFEATUREsADAMhOTkEY_EXISTS ;

                        fc.bBigit = - 1 ; //U::TRISTATE KLUDGE: -1: ASSIGN ANY VALUE (FORGET ABOUT BIGITS); 0: ASSIGN A NONBIGIT HOTKEY; 1: ASSIGN A BIGIT HOTKEY
                        fc.assignedHotKey = 0 ;
                        {
                            ZE( countT , idTypeItem ) ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem == ifcIDtYPEsOULiTEM_countT ) *psFeature >> fc.assignedHotKey ;

                            idTypeItem = 0 ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                            {
                                ZE( flagsT , flagshk ) ;
                                *psFeature >> flagshk ;
                                fc.flagsHotKey |= flagshk ;

#if defined( NEVERdEFINED )
                                TN( tBody , "" ) ;
                                if( F(fc.flagsHotKey) & flFEATUREsADAMhOTkEY_BIGIT )
                                {
                                    fc.bBigit = 1 ;

                                    osTextT* postBody = tBody ;
                                    countT   csttBody = tBody.csF( tinP ) ;
                                    if( csttBody != 2 ) fc.bBigit = 0 ;
                                    else if
                                    (
                                        thirdC::c_strcmpIF( tinP , postBody , "Ze" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Wo" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Oo" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Re" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Fo" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "fI" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Se" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ve" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ta" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ni" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ay" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Be" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ce" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "De" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "Ee" ) &&
                                        thirdC::c_strcmpIF( tinP , postBody , "fU" )
                                    )
                                    fc.bBigit = 0 ;
                                }
#endif
                            }
                        }

                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_CALLbACK :
                    {
                        fc.flagsCallBack |= flFEATUREsADAMcALLbACK_EXISTS ;

                        while( (countT)*psFeature >= 2 )
                        {
                            ZE( countT , idTypeItem ) ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem != ifcIDtYPEsOULiTEM_countT ) break ;

                            ZE( countT , idTypeCallBack ) ;
                            *psFeature >> idTypeCallBack ;

                            idTypeItem = 0 ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem != ifcIDtYPEsOULiTEM_strokeSptr ) break ;

                            ZE( strokeS* , psttOldCB ) ;
                            *psFeature >> psttOldCB ; ___( psttOldCB ) ;

                            ZE( sadamCBFT* , ppSadamCBF ) ;
                            switch( idTypeCallBack )
                            {
                                case ifcIDtYPEsADAMcALLbACK_AFTERrENDER   : { ppSadamCBF = &fc.pSadamAfterRenderCBF   ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_BEFOREdESTROY : { ppSadamCBF = &fc.pSadamBeforeDestroyCBF ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_PROLOG        : { ppSadamCBF = &fc.pSadamPrologCBF        ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_IFhIT         : { ppSadamCBF = &fc.pSadamIfHitCBF         ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_EPILOG        : { ppSadamCBF = &fc.pSadamEpilogCBF        ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_INTERCOM      : { ppSadamCBF = &fc.pSadamIntercomCBF      ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_FLYOVER       : { ppSadamCBF = &fc.pSadamFlyoverCBF       ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_TAB           : { ppSadamCBF = &fc.pSadamTabCBF           ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_ANIMATE       : { ppSadamCBF = &fc.pSadamAnimateCBF       ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_HOTkEY        : { ppSadamCBF = &fc.pSadamHotKeyCBF        ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_INoUTqUERY    : { ppSadamCBF = &fc.pSadamInOutQueryCBF    ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_DRAG          : { ppSadamCBF = &fc.pSadamDragCBF          ; break ; }
                                case ifcIDtYPEsADAMcALLbACK_ERASE         : { ppSadamCBF = &fc.pSadamEraseCBF         ; break ; }
                            }

                            if( ppSadamCBF )
                            {
                                *ppSadamCBF = 0 ;
                                IFsCRATCH
                                {
                                    SCOOPS
                                    tinP.pEtScratch->dllEntryF( tinP , *ppSadamCBF , *tinP.pAdamGlobal1->_etherC_.pHdll , psttOldCB ) ;
                                    if( POOP ) POOPR ;
                                }

                                if( !*ppSadamCBF )
                                {
                                    handleC hBase( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DLL ) ;
                                    ((thirdC&)(*tinP.pEther)).dosQueryModuleHandleF( tinP , hBase , thirdC::postBaseNameIF( tinP ) ) ;
                                    tinP.pEther->dllEntryF( tinP , *ppSadamCBF , hBase , psttOldCB ) ;
                                    hBase.resetF() ;
                                }
                            }
                            tinP.pEther->delF( tinP , psttOldCB ) ;
                        }

                        if( (countT)*psFeature )
                        {
                            ZE( countT , idTypeItem ) ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                            {
                                fc.callBackArg = 0 ;
                                *psFeature >> fc.callBackArg ;
                            }
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_CIO :
                    {
                        fc.flagsCio |= flFEATUREsADAMcIO_EXISTS ;

                        while( (countT)*psFeature >= 2 )
                        {
                            ZE( countT , idTypeItem ) ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem != ifcIDtYPEsOULiTEM_countT ) break ;

                            ZE( countT , idTypeChannel ) ;
                            *psFeature >> idTypeChannel ;

                            idTypeItem = 0 ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem != ifcIDtYPEsOULiTEM_countTptr ) break ;

                            ZE( countT* , pczChannel ) ;
                            *psFeature >> pczChannel ;

                            ZE( countT** , ppczChannel ) ;
                            switch( idTypeChannel )
                            {
                                case ifcIDtYPEsADAMcHANNEL_OUT : { ppczChannel = &pczChannelOut ; break ; }
                                case ifcIDtYPEsADAMcHANNEL_IN  : { ppczChannel = &pczChannelIn  ; break ; }
                            }

                            if( !ppczChannel ) tinP.pEther->delF( tinP , pczChannel ) ;
                            else
                            {
                                if( *ppczChannel ) tinP.pEther->delF( tinP , *ppczChannel ) ;
                                *ppczChannel = pczChannel ;
                            }
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_FRAME :
                    {
                        fc.flagsFrame |= flFEATUREsADAMfRAME_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem != ifcIDtYPEsOULiTEM_countT ) fc.rgbFrame = 0xff000000 ; //INVALID COLOR SO NO COLOR WILL BE PUSHED
                        else
                        {
                            fc.rgbFrame = 0 ;
                            *psFeature >> fc.rgbFrame ;

                            idTypeItem = 0 ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                            {
                                ZE( flagsT , flags ) ;
                                *psFeature >> flags ;

                                SCOOPS
                                FV( flFEATUREsADAMfRAME , flags ) ;
                                if( !POOP ) fc.flagsFrame |= flags ;

                                idTypeItem = 0 ;
                                psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                                {
                                    *psFeature >> fc.cFrameNestDown ;

                                    idTypeItem = 0 ;
                                    psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                    if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                                    {
                                        *psFeature >> fc.cFrameNestLeft ;

                                        idTypeItem = 0 ;
                                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                                        {
                                            *psFeature >> fc.cFrameNestUp ;

                                            idTypeItem = 0 ;
                                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                                            if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                                            {
                                                *psFeature >> fc.cFrameNestRight ;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_KEYBOARD :
                    {
                        fc.flagsKeyboard |= flFEATUREsADAMkEYBOARD_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( flagsT , flags ) ;
                            *psFeature >> flags ;

                            SCOOPS
                            FV( flFEATUREsADAMkEYBOARD , flags ) ;
                            if( !POOP ) fc.flagsKeyboard |= flags ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_JOYsTICK :
                    {
                        fc.flagsJoyStick |= flFEATUREsADAMjOYsTICK_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( flagsT , flags ) ;
                            *psFeature >> flags ;

                            SCOOPS
                            FV( flFEATUREsADAMjOYsTICK , flags ) ;
                            if( !POOP ) fc.flagsJoyStick |= flags ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_MOUSE :
                    {
                        //U::
                        if( fc.idAdam == 5 )
                        {
                            countT foo = 2 ;
                        }

                        fc.flagsMouse |= flFEATUREsADAMmOUSE_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( flagsT , flags ) ;
                            *psFeature >> flags ;

                            SCOOPS
                            FV( flFEATUREsADAMmOUSE , flags ) ;
                            if( !POOP ) fc.flagsMouse |= flags ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_INTERCOM :
                    {
                        fc.flagsIntercom |= flFEATUREsADAMiNTERCOM_EXISTS ;
                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.idIntercom = 0 ;
                            *psFeature >> fc.idIntercom ;
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_FLYOVER :
                    {
                        fc.flagsFlyover |= flFEATUREsADAMfLYOVER_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            fc.idIntercomFlyover = 0 ;
                            *psFeature >> fc.idIntercomFlyover ;

                            idTypeItem = 0 ;
                            psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                            if( idTypeItem == ifcIDtYPEsOULiTEM_strokeSptr )
                            {
                                tinP.pEther->delF( tinP , psttFlyover ) ;
                                *psFeature >> psttFlyover ;
                            }
                        }
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_FLYOVERhIGHLIGHT :
                    {
                        fc.flagsFlyoverHighlight |= flFEATUREsADAMfLYOVERhIGHLIGHT_EXISTS ;
                        break ;
                    }
                    case ifcIDtYPEfEATUREsADAM_DRAGGABLE :
                    {
                        //LOGrAW3( "setting draggable flag for sadam " , fc.idAdam , "\r\n" ) ;
                        fc.flagsDraggable |= flFEATUREsADAMdRAGGABLE_EXISTS ;

                        ZE( countT , idTypeItem ) ;
                        psFeature->pbFieldF( tinP , idTypeItem , countTC() , countTC() , 1 ) ;
                        if( idTypeItem == ifcIDtYPEsOULiTEM_countT )
                        {
                            ZE( flagsT , flags ) ;
                            *psFeature >> flags ;
                            FV( flFEATUREsADAMdRAGGABLE , flags ) ;
                            if( !POOP ) fc.flagsDraggable |= flags ;
                        }
                        break ;
                    }
                }
            }
            psFeature->removeAllF( tinP ) ;
        }
    }
    (*tinP.pEther)( tinP , psFeature ) ;

    DEL( psFeaturesP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113003.featuress.featuress END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113004.featuress.featuress BEGIN
#define DDNAME       "3func.36113004.featuress.featuress"
#define DDNUMB      (countT)0x36113004
#define IDFILE      (countT)0x14bb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/featuresS::featuresS( featuresS& fP ) :/*1*/
fc( fP.fc.idAdam )
//cLeverVolBody( 0 ) , //INTENTIONALLY NOT INITIALIZED, FOR SPEED
{
    TINSL
    (*tinP.pEther)( tinP , pswVolBody , TAG( TAGiDnULL ) , flSTACKc_PATCHnEWfLAVOR | flSTACKc_BLOB | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLeverVolBody , 0 , sizeof( vBodyS ) ) ; ___( pswVolBody ) ;

//U::    BOSdOnOTtEST( WHATgbo , memcpy( (byteT*)&fc , (byteT*)&fP.fc , sizeof fc ) )
    {
        countT _idWhatSaveBos = tinP.monitor.idWhat1 ;
        WHATgbo
        _IO_
        countT _brcRawExp = (countT)(memcpy( (byteT*)&fc , (byteT*)&fP.fc , sizeof fc )) ;
        processGlobal1S& pg1 = processGlobal1S::_processGlobal1I_IF() ;
        if( F(pg1.flCt) & flCTdTg_napHomeI && !( F(pg1.flDt) & flCTdTg_napHomeI ) )
        {
            static countT idMe ;
            countT tally = homeS::homeIF().tallyHo.tallyF( idMe ) ;
            if( !( tally % CbOStALLYpERlOG ) ) logTallyIF( tally , LF , 0 , idMe , "memcpy( (byteT*)&fc , (byteT*)&fP.fc , sizeof fc )" ) ;
        }
        tinP.monitor.idWhat1 = _idWhatSaveBos ;
        tinP.brcRaw = _brcRawExp ;
    }

    ASSIGNpcz(  pczChannelOut                   , fP.pczChannelOut                      )
    ASSIGNpcz(  pczChannelIn                    , fP.pczChannelIn                       )
    ASSIGNpstt( psttBody                        , fP.psttBody                           )
    ASSIGNpstt( psttFlyover                     , fP.psttFlyover                        )
    ASSIGNpstt( psttDefaultHighlightTabOwnerOn  , fP.psttDefaultHighlightTabOwnerOn     )
    ASSIGNpstt( psttDefaultHighlightTabOwnerOff , fP.psttDefaultHighlightTabOwnerOff    )

    countT cFlavors = fP.pswVolBody->cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLeverVolBody = fP.cLeverVolBody = fP.pswVolBody->leverF( tinP , idf ) ;
        vBodyS& vbi = *(vBodyS*)&(countT&)*fP.pswVolBody ;
        vBodyS& vbo = *(vBodyS*)&(countT&)*pswVolBody ;
        new( 0 , tinP , (byteT*)&vbo , sizeof vbo ) vBodyS( vbi ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36113* : 3func.36113004.featuress.featuress END
