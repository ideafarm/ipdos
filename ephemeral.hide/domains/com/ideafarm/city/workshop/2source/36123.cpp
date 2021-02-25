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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123002.surfc.dt_surfc BEGIN
#define DDNAME       "3func.36123002.surfc.dt_surfc"
#define DDNUMB      (countT)0x36123002
#define IDFILE      (countT)0x1502


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/surfC::~surfC( voidT )/*1*/
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123002.surfc.dt_surfc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123003.surfc.surfc BEGIN
#define DDNAME       "3func.36123003.surfc.surfc"
#define DDNUMB      (countT)0x36123003
#define IDFILE      (countT)0x1503


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 etherP
 surfaceErrorLimitP
 pSurfaceCBFP
  can be 0
  normally is not 0
  if 0 then associated paperC instances will be mapped directly to associated devices
  whenever the behavior of this function changes, application code must call this->moonThePhotographersF( tinP ) ;
   for example, if the surface has nonze linear and/or angular velocity, application code must call moonThePhotographersF so that each associate updates its view of *this
 cArgP
 pSpaceFromPaperPrologCBFP
 pSpaceFromPaperEpilogCBFP
 flagsP
*/
/**/

/*1*/surfC::surfC( tinS& tinP , etherC& etherP , const measureT surfaceErrorLimitP , surfaceCBFT pSurfaceCBFP , const countT cArgP , spaceFromPaperPrologCBFT pSpaceFromPaperPrologCBFP , spaceFromPaperEpilogCBFT pSpaceFromPaperEpilogCBFP , const flagsT flagsP ) :/*1*/
associateC( tinP , etherP , IDgROUP , sizeof( spaceC ) ) ,
pSurfaceCBF( pSurfaceCBFP ) ,
cArg( cArgP ) ,
pSpaceFromPaperPrologCBF( pSpaceFromPaperPrologCBFP ) ,
pSpaceFromPaperEpilogCBF( pSpaceFromPaperEpilogCBFP ) ,
surfaceErrorLimit( surfaceErrorLimitP ) ,
flagsCt( flagsP )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123003.surfc.surfc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123004.surfc.spacef BEGIN
#define DDNAME       "3func.36123004.surfc.spacef"
#define DDNUMB      (countT)0x36123004
#define IDFILE      (countT)0x1504


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT surfC::spaceF( tinS& tinP , spaceS* const pSpaceP , glyphTallyS* const pTallyP , const paperS& paperP , const countT rgbP , const flagsT flagsP , const measureT m01StepP ) const/*1*/
{
    if( pTallyP )
    {
        if( F(flagsP) &flSURFcsPACE_NEWcYCLE && pSpaceFromPaperPrologCBF ) (*pSpaceFromPaperPrologCBF)( tinP , cArg ) ;

        pTallyP->cGlyph = paperP.cGlyph ;
        pTallyP->cPoint = 0 ;
    }

    ZE( countT , offpi ) ;
    ZE( countT , offpo ) ;
    ZE( countT , rgbOverride ) ;
    for( countT offg = 0 ; offg < paperP.cGlyph ; offg ++ )
    {
        if( pSpaceP && F(paperP.pFlagsTail[offg]) & flTAIL_SET )
        {
            if( pSurfaceCBF ) (*pSurfaceCBF)( pSpaceP->pPointTail[ offg ] , paperP.pPointTail[ offg ] , cArg ) ;
            else                              pSpaceP->pPointTail[ offg ] = paperP.pPointTail[ offg ]          ;

            pSpaceP->pFlagsTail[ offg ] = flTAIL_SET ;
        }

        const countT offpLath = paperP.pcSize[ offg ] - 1 ;

        if( F(flagsCt) & flSURFc_NOsMOOTHIES )
        {
            for( countT offp = 0 ; offp <= offpLath ; offp ++ )
            {
                //DUPLICATED CODE: 35123004 35123004
                if( pTallyP )
                {
                    offpi ++ ;
                    pTallyP->cPoint ++ ;
                }
                else
                {
                    if( pSurfaceCBF ) (*pSurfaceCBF)( pSpaceP->pPoint[ offpo ++ ] , paperP.pPoint[ offpi ++ ] , cArg ) ;
                    else                              pSpaceP->pPoint[ offpo ++ ] = paperP.pPoint[ offpi ++ ]          ;

                    pSpaceP->pcSize[ offg ] ++ ;
                }
            }
        }
        else
        {
            for( countT offp = 0 ; offp <= offpLath ; offp ++ )
            {
                if( !offp )
                {
                    //DUPLICATED CODE: 35123004 35123004
                    if( pTallyP )
                    {
                        offpi ++ ;
                        pTallyP->cPoint ++ ;
                    }
                    else
                    {
                        if( pSurfaceCBF ) (*pSurfaceCBF)( pSpaceP->pPoint[ offpo ++ ] , paperP.pPoint[ offpi ++ ] , cArg ) ;
                        else                              pSpaceP->pPoint[ offpo ++ ] = paperP.pPoint[ offpi ++ ]          ;

                        pSpaceP->pcSize[ offg ] ++ ;
                    }
                }
                else
                {
                    boolT pbUse[ 9 ] ; //7 CANDIDATE POINTS PLUS THE OO ENDPOINTS
                    BOSdOnOTtEST( WHATgbo , memset( pbUse + 1 , 0 , sizeof pbUse - 2 * sizeof( boolT ) ) )
                    pbUse[ 8 ] = 1 ;
                
                    cPoint2S pPoint2[ 9 ] ;
                    pPoint2[ 0 ] = paperP.pPoint[ offpi - 1 ] ;
                    pPoint2[ 8 ] = paperP.pPoint[ offpi ++  ] ;
                
                    countT pcoa[] = { 0 , 0 , 4 , 0 , 2 , 4 , 6 } ;
                    countT pcob[] = { 8 , 4 , 8 , 2 , 4 , 6 , 8 } ; //ALL SPREADS pcob[ oo ] - pcoa[ oo ] MUST BE EVEN
                
                    for( countT oo = 0 ; oo < sizeof pcoa / sizeof pcoa[ 0 ] ; oo ++ )
                    {
                        countT offa = pcoa[ oo ] ;
                        countT offb = pcob[ oo ] ;
                        countT offm = ( offb + offa ) >> 1 ;
                    
                        pPoint2[ offm ] = ( pPoint2[ offa ] + pPoint2[ offb ] ) / 2.0 ;
                    
                        mPoint3S ca ;
                        mPoint3S cm ;
                        mPoint3S cb ;
                        if( pSurfaceCBF )
                        {
                            (*pSurfaceCBF)( ca , pPoint2[ offa ] , cArg ) ;
                            (*pSurfaceCBF)( cm , pPoint2[ offm ] , cArg ) ;
                            (*pSurfaceCBF)( cb , pPoint2[ offb ] , cArg ) ;
                        }
                        else
                        {
                            ca = pPoint2[ offa ] ;
                            cm = pPoint2[ offm ] ;
                            cb = pPoint2[ offb ] ;
                        }

                        {
                            mPoint3S ce ;
                            ce.x = R( 0.5 * ca.x + 0.5 * cb.x ) ;
                            ce.y = R( 0.5 * ca.y + 0.5 * cb.y ) ;
                            ce.z = R( 0.5 * ca.z + 0.5 * cb.z ) ;
                    
                            mPoint3S cError ;
                            cError.x = cm.x - ce.x ;
                            cError.y = cm.y - ce.y ;
                            cError.z = cm.z - ce.z ;
                    
                            measureT mErrorx = cError.x ;
                            measureT mErrory = cError.y ;
                            measureT mErrorz = cError.z ;
                            measureT error   = mErrorx * mErrorx + mErrory * mErrory + mErrorz * mErrorz ;

                            if( error <= surfaceErrorLimit ) break ;
                            else                             pbUse[ offm ] = 1 ;
                        }
                    }
                
                    for( countT offe = 1 ; offe < sizeof pPoint2 / sizeof pPoint2[ 0 ] ; offe ++ ) // THE ZE'TH ELEMENT IS LAGGED OUTPUT SO IS NEVER CHECKED HERE
                    {
                        if( pbUse[ offe ] )
                        {
                            if( pTallyP ) pTallyP->cPoint ++ ;
                            else
                            {
                                if( pSurfaceCBF ) (*pSurfaceCBF)( pSpaceP->pPoint[ offpo ++ ] , pPoint2[ offe ] , cArg ) ;
                                else                              pSpaceP->pPoint[ offpo ++ ] = pPoint2[ offe ]          ;

                                pSpaceP->pcSize[ offg ] ++ ;
                            }
                        }
                    }
                }
            }
        }
    }

    if( pSpaceP && pSpaceFromPaperEpilogCBF ) (*pSpaceFromPaperEpilogCBF)( tinP , rgbOverride , rgbP , cArg ) ;

    //if( pTallyP ) { LOGrAW5( "spaceF [cGlyph,cPoint]: " , pTallyP->cGlyph , " " , pTallyP->cPoint , "\r\n" ) ; }

    return rgbOverride ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123004.surfc.spacef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123006.surfc.saycheesef BEGIN
#define DDNAME       "3func.36123006.surfc.saycheesef"
#define DDNUMB      (countT)0x36123006
#define IDFILE      (countT)0x1505


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT surfC::sayCheeseF( tinS& tinP , byteT* const pbaViewP , countT cbaViewP , associateC& viewerP )/*1*/
{
    if( cbView >= sizeof( spaceC ) && cbaViewP >= sizeof( assViewStqS ) )
    {
        assViewStqS* pav = new( 0 , tinP , pbaViewP , sizeof( assViewStqS ) ) assViewStqS( tinP , *this , 0x10 ) ;

        stAss.grabF( tinP , TAG( TAGiDnULL ) ) ;

        if( stAss )
        {
            handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do
            {
                assViewC& av = *(assViewC*)( &stAss.downF( tinP , hWalk ) + 1 ) ;
                if( av.isValidF() && av.idGroupF() == /*spaceC*/ 0x36120 ) pav->stq_pAssView << (countT)&av ;
            }
            while( ~hWalk ) ;
        }

        stAss.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123006.surfc.saycheesef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123007.surfc.heargossipf BEGIN
#define DDNAME       "3func.36123007.surfc.heargossipf"
#define DDNUMB      (countT)0x36123007
#define IDFILE      (countT)0x1506


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT surfC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
{
    /**/LOGrAWb( "hearGossipF [idgMe,idgOrigin,idType,cArg]: " , idGroup , " " , originP.idGroupF() , " " , idTypeP , " " , idMsgP , " " , cArgP , "\r\n" ) ;
    return 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36123* : 3func.36123007.surfc.heargossipf END
