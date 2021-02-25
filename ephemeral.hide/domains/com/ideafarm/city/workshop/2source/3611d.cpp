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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d002.paperc.dt_paperc BEGIN
#define DDNAME       "3func.3611d002.paperc.dt_paperc"
#define DDNUMB      (countT)0x3611d002
#define IDFILE      (countT)0x14e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperC::~paperC( voidT )/*1*/
{
    TINSL
    strokeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d002.paperc.dt_paperc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d003.paperc.paperc BEGIN
#define DDNAME       "3func.3611d003.paperc.paperc"
#define DDNUMB      (countT)0x3611d003
#define IDFILE      (countT)0x14e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperC::paperC( tinS& tinP , etherC& etherP , const countT cColP , const countT cRowP ) :/*1*/
associateC( tinP , etherP , IDgROUP ) ,
cLever_rgb( 0 ) ,
swPaper( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLever_rgb , 0 , sizeof( paperS ) ) ,
cCol( cColP ) ,
cRow( cRowP )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d003.paperc.paperc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d004.paperc.strokef BEGIN
#define DDNAME       "3func.3611d004.paperc.strokef"
#define DDNUMB      (countT)0x3611d004
#define IDFILE      (countT)0x14e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#define SEThEADiF                                                                                                                                   \
                                                                                                                                                    \
    if( !( offpInGlyph ++ ) )                                                                                                                       \
    {                                                                                                                                               \
        pPaperHead = pPaper ;                                                                                                                       \
        offosHead  = pPaper->offos ;                                                                                                                \
        ptHead     = ptLag1 ;                                                                                                                       \
    }

#define SETtAILiF                                                                                                                                   \
                                                                                                                                                    \
    if( offpInGlyph )                                                                                                                               \
    {                                                                                                                                               \
        offpInGlyph = 0 ;                                                                                                                           \
                                                                                                                                                    \
        if( ptHead == ptLag1 )                                                                                                                      \
        {                                                                                                                                           \
            pPaperHead->pFlagsTail[ offosHead ] = flTAIL_SET ;                                                                                      \
            pPaperHead->pPointTail[ offosHead ] = ptLag2 ;                                                                                          \
        }                                                                                                                                           \
    }

#define M2(offColP,offRowP)                                                                                                                         \
                                                                                                                                                    \
    if( !offPass )                                                                                                                                  \
    {                                                                                                                                               \
        if( cPointNew )                                                                                                                             \
        {                                                                                                                                           \
            pgt->cGlyph ++ ;                                                                                                                        \
            pgt->cPoint += cPointNew ;                                                                                                              \
                           cPointNew = 0 ;                                                                                                          \
        }                                                                                                                                           \
    }                                                                                                                                               \
    else                                                                                                                                            \
    {                                                                                                                                               \
        if( pPaper && pPaper->pcSize[ pPaper->offos ] ) ++ pPaper->offos ;                                                                          \
                                                                                                                                                    \
        cPoint2S p00 = { pGrid->offCol + pGrid->pcOffColSym[ offColP ] , pGrid->offRow + pGrid->pcOffRowSym[ offRowP ] } ;                          \
        SETlAG( p00.x , p00.y )                                                                                                                     \
        /*LOGrAW5( "\r\npaper M2 [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;*/                                                                \
    }

#define SETlAG(xP,yP) { ptLag2 = ptLag1 ; ptLag1.x = (xP) ; ptLag1.y = (yP) ; }

#define L2(offColP,offRowP)                                                                                                                         \
                                                                                                                                                    \
    if( !offPass )                                                                                                                                  \
    {                                                                                                                                               \
        cPointNew += 1 + !cPointNew ;                                                                                                               \
    }                                                                                                                                               \
    else                                                                                                                                            \
    {                                                                                                                                               \
        if( pPaper->offos >= pPaper->cGlyph ) { BLAMMO ; }                                                                                          \
                                                                                                                                                    \
        if( !pPaper->pcSize[ pPaper->offos ] )                                                                                                      \
        {                                                                                                                                           \
            ++ pPaper->pcSize[ pPaper->offos ] ;                                                                                                    \
            pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;                                                                                           \
            pGridDad->highWaterF( ptLag1 ) ;                                                                                                        \
        }                                                                                                                                           \
                                                                                                                                                    \
        ++ pPaper->pcSize[ pPaper->offos ] ;                                                                                                        \
                                                                                                                                                    \
        SETlAG( pGrid->offCol + pGrid->pcOffColSym[ offColP ] , pGrid->offRow + pGrid->pcOffRowSym[ offRowP ] )                                     \
                                                                                                                                                    \
        pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;                                                                                               \
        pGridDad->highWaterF( ptLag1 ) ;                                                                                                            \
        /*LOGrAW5( "paper L2 [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;*/                                                                    \
    }

/*1*/voidT paperC::strokeF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    grabF( tinP , TAG( TAGiDnULL ) ) ;

    {
        countT cFlavors = swPaper.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever_rgb = swPaper.leverF( tinP , idf ) ;
            paperS* pPaper = (paperS*)&(countT&)swPaper ;
            DELzOMBIE( pPaper ) ;
        }
        swPaper.freeAllF( tinP ) ;
    }

    if( psttP && psttP->idAdam )
    {
        switchC swgt( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , cLever_rgb , 0 , sizeof( glyphTallyS ) ) ;
        for( countT offPass = 0 ; offPass <= 1 ; offPass ++ )
        {
            //LOGrAW3( "********************************************************************* [offPass]: " , offPass , "\r\n" ) ;

            staqC stq_grid( tinP , sizeof( gridS ) , 8 ) ;
            ZE( gridS* , pGridDeviceGross ) ;
            {
                stq_grid << (byteT*)0 ;
                pGridDeviceGross = (gridS*)&(countT&)stq_grid[ 1 ] ;
                new( 0 , tinP , (byteT*)pGridDeviceGross , sizeof( gridS ) ) gridS( 0 , 0 , cCol , cRow , flGRIDs_DETACHEDaLWAYS ) ;
            }

            ZE( gridS* , pGridDeviceNet ) ;
            {
                countT cColMargin = 0/*pGridDeviceGross->cCol / ( TUCK >> 2 )*/ ;
                countT cRowMargin = 0/*pGridDeviceGross->cRow / ( TUCK >> 2 )*/ ;
                stq_grid << (byteT*)0 ;
                pGridDeviceNet = (gridS*)&(countT&)stq_grid[ 1 ] ;
                new( 0 , tinP , (byteT*)pGridDeviceNet , sizeof( gridS ) ) gridS( cColMargin , cRowMargin , 1 + pGridDeviceGross->offColMax - ( cColMargin << 1 ) , 1 + pGridDeviceGross->offRowMax - ( cRowMargin << 1 ) , flGRIDs_DETACHEDaLWAYS ) ;
            }

            ZE( gridS* , pGridText ) ; // 06 COLS BY 81 ROWS
            {
                countT cColPer = 1 + pGridDeviceNet->offColMax / 0x10/*0x60*/ ;
                countT cRowPer = 1 + pGridDeviceNet->offRowMax / 0x4/*0x18*/ ;

                stq_grid << (byteT*)0 ;
                pGridText = (gridS*)&(countT&)stq_grid[ 1 ] ;
                new( 0 , tinP , (byteT*)pGridText , sizeof( gridS ) ) gridS( pGridDeviceNet->offCol , pGridDeviceNet->offRow , cColPer , cRowPer , /*flGRIDs_PAD |*/ flGRIDs_WRAP ) ;
            }

            staqC stq_idGrid( tinP , sizeof( countT ) , 8 ) ;
            stq_idGrid << (countT)1 ;

            gridS* pGridDad = (gridS*)&stq_grid[ stq_idGrid[ 1 ] + ( stq_idGrid[ 1 ] < stq_grid ) ] ;
            gridS* pGrid    = (gridS*)&stq_grid[ stq_idGrid[ 1 ]                                  ] ;

            ZE( paperS* , pPaper ) ;
            ZE( glyphTallyS* , pgt ) ;
            if( !offPass )
            {
                cLever_rgb = ifcRGB_W4 ;
                pgt = (glyphTallyS*)&(countT&)swgt ;
                pgt->cPoint = pgt->cGlyph = 0 ;
            }
            else
            {
                countT idf = swPaper.idSlotOfLeverF( tinP , ifcRGB_W4 ) ;
                if( idf ) pPaper = (paperS*)&swPaper[ idf ] ;
            }

            cPoint2S ptHead = { 0 , 0 } ;
            ZE( paperS* , pPaperHead ) ;
            ZE( countT , offosHead ) ;
            ZE( countT , offpInGlyph ) ;
            staqC stq_bDetached( tinP ) ;
            staqC stq_bDetachedFuture( tinP ) ;
            cPoint2S ptLag2 = { 0 , 0 } ;
            cPoint2S ptLag1 = { 0 , 0 } ; //A REASONABLE IMPLIED STARTING POINT SO THAT OMISSION OF AN EXPLICIT MOVE WILL PRODUCE REASONABLE OUTPUT
            ZE( countT , cPointNew ) ;
            ZE( countT , offo ) ;
            countT offe = CSpREFIX + psttP->idAdam ;
            for( countT offi = CSpREFIX ; offi < offe ; offi ++ )
            {
                //A:ASSUME: DECISION TO WRAP DOES NOT AFFECT THE NUMBER OF POINTS (IF NOT TRUE THEN DO WRAP ON BOTH PASSES)
                if( offPass && F(pGrid->flags) & flGRIDs_WRAP && !( F(pGrid->flags) & ( flGRIDs_DETACHED | flGRIDs_DETACHEDaLWAYS ) ) )
                {
                    ZE( countT , csttWordHere ) ;
                    flagsT flagsLater = pGrid->flags ;
                    ZE( countT , cOver ) ;
                    for( countT offi2 = offi ; offi2 < offe ; offi2 ++ )
                    {
                        ZE( boolT , bContinue ) ;
                        ZE( boolT , bBreak    ) ;
                        switch( psttP[ offi2 ].idCaste )
                        {
                            // CASTES THAT CONTROL THE COUNTING OF WORD LENGTH GO HERE
                            case sc_PUSHdETACH :
                            {
                                stq_bDetachedFuture << (boolT)!!( F(pGrid->flags) & flGRIDs_DETACHED ) ;
                                bContinue = 1 ;
                                break ;
                            }
                            case sc_PUSHaTTACH :
                            {
                                stq_bDetachedFuture << (boolT)!!( F(pGrid->flags) & flGRIDs_DETACHED ) ;
                                bContinue = 1 ;
                                break ;
                            }
                            case sc_POPdETACHaTTACH :
                            {
                                if( stq_bDetachedFuture )
                                {
                                    ZE( boolT , bDetached ) ;
                                    stq_bDetachedFuture >> bDetached ;

                                    if( bDetached ) flagsLater |= flGRIDs_DETACHED ;
                                    else            flagsLater &= ~( F(flGRIDs_DETACHED) ) ;
                                }
                                bContinue = 1 ;
                                break ;
                            }

                            // CASTES THAT TERMINATE A WORD GO HERE (A WORD IS ALSO TERMINATED BY A ' ')
                            case sc_cPUSHiDgRID :
                            case sc_cPOPiDgRID :
                            {
                                bBreak = 1 ;
                                break ;
                            }

                            // CASTES THAT DO NOT COUNT TOWARD WORD LENGTH GO HERE
                            case sc_cCOLOR :
                            {
                                bContinue = 1 ;
                                break ;
                            }

                            // THIS CASTE NORMALLY COUNTS TOWARD WORD LENGTH, BUT IF ' ' IT DOES NOT AND ALSO IT TERMINATES COUNTING
                            case sc_cSYMBOL1 :
                            {
                                if( psttP[ offi2 ].idAdam == ' ' ) bBreak = 1 ;
                                //INTENTIONAL FALLTHROUGH
                            }

                            // CASTES THAT COUNT TOWARD WORD LENGTH GO HERE
                            // EACH MOVE AND LINE IS ASSUMED TO RESULT IN POINTS THAT ARE ALL WITHIN THE GRID ; IF FALSE THEN THOSE OUT OF BOUNDS PELS MIGHT EXTEND BEYOND THE WRAPPING BOUNDARY
                            case sc_mmMOVEtO :
                            case sc_ccMOVEpEL :
                            case sc_ccLINEpEL :
                            case sc_mmLINEtO :
                            {
                                if( ( F(pGrid->flags) & flGRIDs_DETACHEDaLWAYS || F(flagsLater) & flGRIDs_DETACHED ) && cOver ++ ) bContinue = 1 ; //A:ASSUME: ALL MOVES AND LINES ARE WITHIN THE GRID (IF NOT TRUE THEN MIGHT NEED A WRAP THAT I WILL NOT DO)
                                break ;
                            }

                            default : { bBreak = 1 ; break ; }
                        }

                        if( bBreak ) break ;
                        else if( bContinue ) continue ;

                        csttWordHere ++ ;
                    }
                    stq_bDetachedFuture.purgeF( tinP ) ;

                    countT offColEnd = pGridDad->offCol + pGridDad->offColMax + 1 ;
                    countT offColNew = pGrid->offCol + ( pGrid->cColPad + pGrid->offColMax + 1 ) * csttWordHere ;
                    //LOGrAW9( "\r\ninspecting for wrap [offi,csttWordHere,offColEnd,offColNew]: " , offi , " " , csttWordHere , " " , offColEnd , " " , offColNew , "\r\n" ) ;

                    if( offColEnd < offColNew )
                    {
                        pGrid->offCol = 0 ;

                        //BECAUSE SCREEN REAL ESTATE IS SCARCE, WRAP GOES TO HIGH WATER, WHICH MIGHT PRODUCE A VERY THIN ROW (E.G. IF IT IS ALL UNDERSCORES '_')
                        //U::PROVIDE A FLAG THAT DECLARES THAT WRAP SHOULD ALWAYS RISE BY AT LEAST THE GRID HEIGHT
                        //pGrid->offRow += pGrid->cRowPad + pGrid->offRowMax + 1 ;

                        if( pGrid->offRow < pGridDad->cRowHighWater + pGrid->cRowPad ) pGrid->offRow = pGridDad->cRowHighWater + pGrid->cRowPad ;
                        //LOGrAW5( "\r\nwrapping to [offCol,offRow]: " , pGrid->offCol , " " , pGrid->offRow , "\r\n" ) ;
                    }
                }

                switch( psttP[ offi ].idCaste )
                {
                    case sc_cCOLOR :
                    {
                        if( !offPass )
                        {
                            if( cPointNew )
                            {
                                pgt->cGlyph ++ ;
                                pgt->cPoint += cPointNew ;
                                               cPointNew = 0 ;
                            }

                            if( !pgt->cGlyph ) swgt.freeF( tinP ) ;

                            cLever_rgb = psttP[ offi ].idAdam ;
                            pgt = (glyphTallyS*)&(countT&)swgt ;
                        }
                        else
                        {
                            if( pPaper && pPaper->pcSize[ pPaper->offos ] ) ++ pPaper->offos ;

                            if( swPaper.idSlotOfLeverF( tinP , psttP[ offi ].idAdam ) )
                            {
                                cLever_rgb = psttP[ offi ].idAdam ;
                                pPaper = (paperS*)&(countT&)swPaper ;
                            }
                        }

                        break ;
                    }
                    case sc_mmMOVEtO :
                    {
                        if( !offPass )
                        {
                            if( cPointNew )
                            {
                                pgt->cGlyph ++ ;
                                pgt->cPoint += cPointNew ;
                                               cPointNew = 0 ;
                            }
                        }
                        else
                        {
                            SETtAILiF

                            if( pPaper && pPaper->pcSize[ pPaper->offos ] ) ++ pPaper->offos ;

                            //LOGrAW7( "mmMOVEtO calculation of y [pGrid->offRow,pGrid->offRowMax,R(*(measureT*)&psttP[ offi ].cNote)]: " , pGrid->offRow , " " , pGrid->offRowMax , " " , R( *(measureT*)&psttP[ offi ].cNote ) , "\r\n" ) ;
                            cPoint2S p00 = { pGrid->offCol + pGrid->offColMax * *(measureT*)&psttP[ offi ].idAdam , pGrid->offRow + pGrid->offRowMax * *(measureT*)&psttP[ offi ].cNote } ;
                            SETlAG( p00.x , p00.y )                                                                                                                     \
                            //LOGrAW5( "\r\npaper mmMOVEtO [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;
                        }
                        break ;
                    }
                    case sc_ccMOVEpEL :
                    {
                        if( !offPass )
                        {
                            if( cPointNew )
                            {
                                pgt->cGlyph ++ ;
                                pgt->cPoint += cPointNew ;
                                               cPointNew = 0 ;
                            }
                        }
                        else
                        {
                            SETtAILiF

                            if( pPaper && pPaper->pcSize[ pPaper->offos ] ) ++ pPaper->offos ;

                            SETlAG( ptLag1.x + psttP[ offi ].idAdam , ptLag1.y + psttP[ offi ].cNote )
                            //LOGrAW5( "paper mmMOVEpEL [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;
                        }

                        break ;
                    }
                    case sc_ccLINEpEL :
                    {
                        if( !offPass )
                        {
                            cPointNew += 1 + !cPointNew ;
                        }
                        else
                        {
                            SEThEADiF

                            if( pPaper->offos >= pPaper->cGlyph ) { BLAMMO ; }

                            if( !pPaper->pcSize[ pPaper->offos ] )
                            {
                                ++ pPaper->pcSize[ pPaper->offos ] ;
                                pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;
                                pGridDad->highWaterF( ptLag1 ) ;
                            }
                            ++ pPaper->pcSize[ pPaper->offos ] ;

                            SETlAG( ptLag1.x + psttP[ offi ].idAdam , ptLag1.y + psttP[ offi ].cNote )

                            pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;
                            pGridDad->highWaterF( ptLag1 ) ;
                            //LOGrAW5( "paper ccLINEpEL [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;
                        }
                        break ;
                    }
                    case sc_mmLINEtO :
                    {
                        if( !offPass ) cPointNew += 1 + !cPointNew ;
                        else
                        {
                            SEThEADiF

                            if( pPaper->offos >= pPaper->cGlyph ) { BLAMMO ; }

                            if( !pPaper->pcSize[ pPaper->offos ] )
                            {
                                ++ pPaper->pcSize[ pPaper->offos ] ;
                                pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;
                                pGridDad->highWaterF( ptLag1 ) ;
                            }

                            ++ pPaper->pcSize[ pPaper->offos ] ;

                            //LOGrAW7( "mmLINEtO calculation of y [pGrid->offRow,pGrid->offRowMax,R(*(measureT*)&psttP[ offi ].cNote)]: " , pGrid->offRow , " " , pGrid->offRowMax , " " , R( *(measureT*)&psttP[ offi ].cNote ) , "\r\n" ) ;
                            SETlAG( pGrid->offCol + pGrid->offColMax * *(measureT*)&psttP[ offi ].idAdam , pGrid->offRow + pGrid->offRowMax * *(measureT*)&psttP[ offi ].cNote )

                            pPaper->pPoint[ pPaper->offop ++ ] = ptLag1 ;
                            pGridDad->highWaterF( ptLag1 ) ;
                            //LOGrAW5( "paper mmLINEtO [x,y]: " , ptLag1.x , " " , ptLag1.y , "\r\n" ) ;
                        }
                        break ;
                    }
                    case sc_cPUSHiDgRID :
                    {
                        if( psttP[ offi ].idAdam && psttP[ offi ].idAdam <= stq_grid )
                        {
                            stq_idGrid << psttP[ offi ].idAdam ;
                            pGridDad = (gridS*)&stq_grid[ stq_idGrid[ 1 ] + ( stq_idGrid[ 1 ] < stq_grid ) ] ;
                            pGrid    = (gridS*)&stq_grid[ stq_idGrid[ 1 ]                                  ] ;
                        }
                        break ;
                    }
                    case sc_cPOPiDgRID :
                    {
                        if( stq_idGrid > 1 )
                        {
                            ZE( countT , idg ) ;
                            stq_idGrid >> idg ;
                            pGridDad = (gridS*)&stq_grid[ stq_idGrid[ 1 ] + ( stq_idGrid[ 1 ] < stq_grid ) ] ;
                            pGrid    = (gridS*)&stq_grid[ stq_idGrid[ 1 ]                                  ] ;
                        }
                        break ;
                    }
                    case sc_cSYMBOL1 :
                    {
                        SEThEADiF

                        switch( psttP[ offi ].idAdam )
                        {
                            case ' '  : {                                          break ; }
                            case 'O'  : { M2(0,0) L2(6,0)  L2(6,6) L2(0,6) L2(0,0) break ; } //M2(1,1) L2(5,1)  L2(5,5) L2(1,5) L2(1,1)
                        }
                        break ;
                    }
                    case sc_PUSHdETACH :
                    {
                        stq_bDetached << (boolT)!!( F(pGrid->flags) & flGRIDs_DETACHED ) ;
                        pGrid->flags |= flGRIDs_DETACHED ;
                        break ;
                    }
                    case sc_PUSHaTTACH :
                    {
                        stq_bDetached << (boolT)!!( F(pGrid->flags) & flGRIDs_DETACHED ) ;
                        pGrid->flags &= ~( F(flGRIDs_DETACHED) ) ;
                        break ;
                    }
                    case sc_POPdETACHaTTACH :
                    {
                        if( stq_bDetached )
                        {
                            ZE( boolT , bDetached ) ;
                            stq_bDetached >> bDetached ;

                            if( bDetached ) pGrid->flags |= flGRIDs_DETACHED ;
                            else            pGrid->flags &= ~( F(flGRIDs_DETACHED) ) ;
                        }
                        break ;
                    }
                }

                pGrid->advanceGridIfF( *pGridDad , psttP[ offi ].idCaste , ptLag1 ) ;
            }

            if( !offPass )
            {
                if( cPointNew )
                {
                    pgt->cGlyph ++ ;
                    pgt->cPoint += cPointNew ;
                                   cPointNew = 0 ;
                }

                countT cFlavors = swgt.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    cLever_rgb = swgt.leverF( tinP , idf ) ;
                    glyphTallyS& gt = *(glyphTallyS*)&(countT&)swgt ;
                    if( gt.cGlyph && gt.cPoint )
                    {
                        paperS* pPaper = (paperS*)&(countT&)swPaper ;
                        new( 0 , tinP , (byteT*)pPaper , sizeof( paperS ) ) paperS( tinP , gt.cGlyph , gt.cPoint ) ;

                        //LOGrAW9( "swgt [idf,rgb,cGlyph,cPoint]: " , idf , " " , cLever_rgb , " " , gt.cGlyph , " " , gt.cPoint , "\r\n" ) ;
                    }
                }

                stq_grid.purgeF( tinP ) ;
                stq_bDetached.purgeF( tinP ) ;
            }
            else
            {
                SETtAILiF

                if( pPaper->pcSize[ pPaper->offos ] ) ++ pPaper->offos ;
            }
        }
    }

    ungrabF( tinP ) ;

    moonThePhotographersF( tinP ) ;
}

#undef M2
#undef L2


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d004.paperc.strokef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d005.paperc.spacef BEGIN
#define DDNAME       "3func.3611d005.paperc.spacef"
#define DDNUMB      (countT)0x3611d005
#define IDFILE      (countT)0x14e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperC::spaceF( tinS& tinP , spaceC*& pSpaceP , surfC& surfP , const measureT m01StepP )/*1*/
{
    if( !pSpaceP )
    {
        pSpaceP = new( 0 , tinP , LF ) spaceC( tinP , ether , *this ) ;
    }

    if( pSpaceP )
    {
        grabF( tinP , TAG( TAGiDnULL ) ) ;

        switchC      swTally( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , cLever_rgb , 0 , sizeof( glyphTallyS ) ) ;
        const countT cFlavors = swPaper.cFlavorsF( tinP ) ;

        for( countT idPass = 1 ; idPass <= 2 ; idPass ++ )
        {
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                cLever_rgb = swPaper.leverF( tinP , idf ) ;
                paperS* pPaper = (paperS*)&(countT&)swPaper ;

                glyphTallyS* pTally = (glyphTallyS*)&(countT&)swTally ;

                if( idPass == 1 ) surfP.spaceF( tinP , 0 , pTally , *pPaper , cLever_rgb , idf == 1 ? flSURFcsPACE_NEWcYCLE : flSURFcsPACE_null , m01StepP ) ;
                else
                {
                    spaceS* pSpace = (spaceS*)&(*pSpaceP)[ cLever_rgb ] ;
                    new( 0 , tinP , (byteT*)pSpace , sizeof( spaceS ) ) spaceS( tinP , pTally->cGlyph , pTally->cPoint ) ;
                    pSpace->rgbOverride = surfP.spaceF( tinP , pSpace , 0 , *pPaper , cLever_rgb , flSURFcsPACE_null , m01StepP ) ;
                }
            }
        }

        ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d005.paperc.spacef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d006.paperc.validatef BEGIN
#define DDNAME       "3func.3611d006.paperc.validatef"
#define DDNUMB      (countT)0x3611d006
#define IDFILE      (countT)0x14ea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperC::validateF( tinS& tinP )/*1*/
{
    grabF( tinP , TAG( TAGiDnULL ) ) ;
    countT cFlavors = swPaper.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLever_rgb = swPaper.leverF( tinP , idf ) ;
        paperS* pPaper = (paperS*)&(countT&)swPaper ;

        if( pPaper->cGlyph - pPaper->offos ) { BLAMMO ; }
        if( pPaper->cPoint - pPaper->offop ) { BLAMMO ; }
    }
    ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d006.paperc.validatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d007.paperc.pelf BEGIN
#define DDNAME       "3func.3611d007.paperc.pelf"
#define DDNUMB      (countT)0x3611d007
#define IDFILE      (countT)0x14eb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperC::pelF( tinS& tinP , pelC*& pPelP , const deviceC& deviceP )/*1*/
{
    if( pPelP ) { BLAMMO ; }

    pPelP = new( 0 , tinP , LF ) pelC( tinP , ether , deviceP , *this ) ;

    if( pPelP )
    {
        countT cFlavors = swPaper.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever_rgb = swPaper.leverF( tinP , idf ) ;
            paperS* pPaper = (paperS*)&(countT&)swPaper ;
            pelS* pPel = (pelS*)&(*pPelP)[ cLever_rgb ] ;
            new( 0 , tinP , (byteT*)pPel , sizeof( pelS ) ) pelS( tinP , *pPaper , cCol , cRow , deviceP ) ;
            if( pPel ) ;
        }

        pPelP->writeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d007.paperc.pelf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d008.paperc.paperc BEGIN
#define DDNAME       "3func.3611d008.paperc.paperc"
#define DDNUMB      (countT)0x3611d008
#define IDFILE      (countT)0x14ec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperC::paperC( tinS& tinP , etherC& etherP , const deviceC& deviceP ) :/*1*/
associateC( tinP , etherP , IDgROUP ) ,
cLever_rgb( 0 ) ,
swPaper( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLever_rgb , 0 , sizeof( paperS ) ) ,
cCol( deviceP.cColF() ) ,
cRow( deviceP.cRowF() )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d008.paperc.paperc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d009.paperc.saycheesef BEGIN
#define DDNAME       "3func.3611d009.paperc.saycheesef"
#define DDNUMB      (countT)0x3611d009
#define IDFILE      (countT)0x14ed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT paperC::sayCheeseF( tinS& tinP , byteT* const pbaViewP , countT cbaViewP , associateC& viewerP )/*1*/
{
    if( viewerP.idGroupF() == /*surfC*/ 0x36123 && cbaViewP >= sizeof( spaceC ) )
    {
        new( 0 , tinP , pbaViewP , sizeof( spaceC ) ) spaceC( tinP , ether , *this ) ;
        spaceC* pSpace = (spaceC*)pbaViewP ;
        spaceF( tinP , pSpace , (surfC&)viewerP , 1.0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d009.paperc.saycheesef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d00a.paperc.heargossipf BEGIN
#define DDNAME       "3func.3611d00a.paperc.heargossipf"
#define DDNUMB      (countT)0x3611d00a
#define IDFILE      (countT)0x14ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT paperC::hearGossipF( tinS& tinP , associateC& originP , const countT idTypeP , const countT idMsgP , const countT cArgP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611d* : 3func.3611d00a.paperc.heargossipf END
