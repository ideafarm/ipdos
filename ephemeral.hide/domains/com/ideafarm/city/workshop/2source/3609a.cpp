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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a001.backoldc.backoldc BEGIN
#define DDNAME       "3func.3609a001.backoldc.backoldc"
#define DDNUMB      (countT)0x3609a001
#define IDFILE      (countT)0x1302


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

//DERIVED CT MUST CALL ctSuffixF
//DERIVED DT MUST CALL dtPrefixF

//CODEsYNC: 1c60006 1c60003: PAPER LIST IS ASSUMED TO BE INVARIANT UNTIL *this IS DESTROYED

/*1*/backOldC::backOldC( tinS& tinP , etherC& etherP , const countT cPapersP , const measureT mColsP , const measureT mRowsP , const countT cArgP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
ether( etherP ) ,
poop( etherP ) ,
papers( tinP , etherP , *this , cPapersP , cArgP , pPaperToBackCBFP , cPaperToBackArgP ) ,
stqr_mIdColOriginUnder( tinP ) ,
stqr_mIdRowOriginUnder( tinP ) ,
stqPelsBack( tinP , sizeof( bitmapOldC ) ) ,
mIdColOrigin( 0.0f ) ,
mIdRowOrigin( 0.0f ) ,
mCols( mColsP ) ,
mRows( mRowsP ) ,
pbLeverToolFilter( (const byteT*)&c2leverToolFilter ) ,
swsSadamToolFilter( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pbLeverToolFilter , sizeof c2leverToolFilter , flSTACKc_BLOB , sizeof( count3S ) ) ,
bDebug( 0 ) ,
cTraceOn( 0 )
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    thirdC::c_memsetIF( tinP , (byteT*)&rowBack.rw  , sizeof rowBack.rw  ) ;
    setModeFlagsF( tinP , flPAPERbACKmODE_ABSENT , flPAPERbACKmODE_null ) ; //APP CODE MUST EXPLICITLY RESET "ABSENT" FLAG
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a001.backoldc.backoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a002.backoldc.ctsuffixf BEGIN
#define DDNAME       "3func.3609a002.backoldc.ctsuffixf"
#define DDNUMB      (countT)0x3609a002
#define IDFILE      (countT)0x1303


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT backOldC::ctSuffixF( tinS& tinP , const countT cArgP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP )/*1*/
{
    //NOT SERIALIZED BECAUSE CALLED ONLY WITHIN CT'OR OF DERIVED CLASS
    papers.ctSuffixF( tinP , ether , cArgP , pPaperToBackCBFP , cPaperToBackArgP ) ;

    const countT cPapers = papers ;
    for( countT idPaper = 1 ; idPaper <= cPapers ; idPaper ++ ) pmRowsLathRender[ idPaper - 1 ] = pmColsLathRender[ idPaper - 1 ] = MAXmEASUREt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a002.backoldc.ctsuffixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a003.backoldc.strokeallpapersf BEGIN
#define DDNAME       "3func.3609a003.backoldc.strokeallpapersf"
#define DDNUMB      (countT)0x3609a003
#define IDFILE      (countT)0x1304


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::strokeAllPapersF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    ZE( paperOldC** , pzPaper ) ;
    ZE( countT , cPapers ) ;
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        cPapers = papers ;
        if( cPapers ) { ether.newF( tinP , LF , *(countT**)&pzPaper , 1 + cPapers ) ; ___( pzPaper ) ; }
        if( pzPaper ) for( countT idp = 1 ; idp <= cPapers ; idp ++ ) pzPaper[ idp ] = papers( tinP , idp ) ;
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    }

    //CODEsYNC: 1c60006 1c60003: PAPER LIST IS ASSUMED TO BE INVARIANT UNTIL *this IS DESTROYED
    if( pzPaper ) for( countT idp = 1 ; idp <= cPapers ; idp ++ ) pzPaper[ idp ]->strokeF( tinP , psttP ) ;

    ether.delF( tinP , *(countT**)&pzPaper ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a003.backoldc.strokeallpapersf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a005.backoldc.freshtoolsallflagonf BEGIN
#define DDNAME       "3func.3609a005.backoldc.freshtoolsallflagonf"
#define DDNUMB      (countT)0x3609a005
#define IDFILE      (countT)0x1305


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::freshToolsAllFlagOnDownF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    for( countT idTool = ifcIDtYPEtOOL_begin + 1 ; idTool < ifcIDtYPEtOOL_end ; idTool ++ )
        rowBack.rw.pfToolState_f[ idTool - ifcIDtYPEtOOL_begin - 1 ] = thirdC::winGetKeyStateIF( idTool ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a005.backoldc.freshtoolsallflagonf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a006.backoldc.freshtoolsmousepositionf BEGIN
#define DDNAME       "3func.3609a006.backoldc.freshtoolsmousepositionf"
#define DDNUMB      (countT)0x3609a006
#define IDFILE      (countT)0x1306


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::freshToolsMousePositionF( tinS& tinP )/*1*/
{
    POINT info ;
    BOS( WHATgbo , BOSoK , GetCursorPos( &info ) )
    BOSpOOP
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    rowBack.rw.pcToolState_12[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] = thirdC::winIfColIF( info.x ) ;
    rowBack.rw.pcToolState_22[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_x2Begin - 1 ] = thirdC::winIfRowIF( info.y , mRowsF() ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a006.backoldc.freshtoolsmousepositionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a007.backoldc.dtprefixf BEGIN
#define DDNAME       "3func.3609a007.backoldc.dtprefixf"
#define DDNUMB      (countT)0x3609a007
#define IDFILE      (countT)0x1307


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT backOldC::dtPrefixF( tinS& tinP )/*1*/
{
    //NOT SERIALIZED BECAUSE CALLED ONLY WITHIN DT'OR OF DERIVED CLASS

    setModeFlagsF( tinP , flPAPERbACKmODE_ABSENT , flPAPERbACKmODE_null ) ;
    paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_DESTROY , 0 , 0 , flCALLsADAMS_null , 0 , 0 , this ) ;

    papers.dtPrefixF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a007.backoldc.dtprefixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a008.backoldc.freshtoolsmousebuttonsnotpresentf BEGIN
#define DDNAME       "3func.3609a008.backoldc.freshtoolsmousebuttonsnotpresentf"
#define DDNUMB      (countT)0x3609a008
#define IDFILE      (countT)0x1308


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::freshToolsMouseButtonsNotPresentF( tinS& tinP )/*1*/
{
    BOS( WHATgbo , BOSoK , GetSystemMetrics( SM_CMOUSEBUTTONS ) )
    BOSpOOP
    const countT cMouseButtons = tinP.brcRaw ; //RETURNS 0 IF NO MOUSE IS INSTALLED
                           
    if( cMouseButtons < 3 ) //FROM MEMORY: THIS CODE HAS NO EFFECT ON WINDOWS XP; 3 MOUSE BUTTONS ARE ALWAYS "PRESENT"
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_MOUSEbUTTONcENTER - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
        if( cMouseButtons < 2 )
        {
            rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_MOUSEbUTTONrIGHT - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
            if( !cMouseButtons )
            {
                rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_MOUSEbUTTONlEFT - ifcIDtYPEtOOL_begin - 1 ] =
                rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_MOUSEpOSITION   - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
            }
        }
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a008.backoldc.freshtoolsmousebuttonsnotpresentf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a009.backoldc.btoolfilterallowsf BEGIN
#define DDNAME       "3func.3609a009.backoldc.btoolfilterallowsf"
#define DDNUMB      (countT)0x3609a009
#define IDFILE      (countT)0x1309


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i return whether the tool action is allowed for the specified adam
for a given list, the result is determined by the lath applicable rule
 general rules that apply to all adams are inspected woth
 then the rules that apply to the specified adam are inspected
if 0 is specified for idListP, all lists are inspected
 the result is determined by the lath list inspected
*/

/**/

/*1*/boolT backOldC::bToolFilterAllowsF( tinS& tinP , const countT idToolP , const countT idActionP , const countT idAdamP , const countT idListP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bOk = 1 ;

    if( !idListP )
    {
        countT cFlavors = swsSadamToolFilter.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            count2S& c2l = *(count2S*)swsSadamToolFilter.leverF( tinP , idf ) ;
            if( c2l.c2 != idAdamP ) continue ;

            bOk = bToolFilterAllowsF( tinP , idToolP , idActionP , idAdamP , c2l.c1 ) ;
        }
    }
    else
    {
        c2leverToolFilter.c1 = idListP ;
        countT pcIdAdam[] = { 0 , idAdamP } ;
        for( countT off = 0 ; off <= 1 ; off ++ )
        {
            c2leverToolFilter.c2 = pcIdAdam[ off ] ;
            if( swsSadamToolFilter )
            {
                handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    count3S& c3p = *(count3S*)&swsSadamToolFilter.downF( tinP , hWalk ) ;
                    switch( c3p.c1 )
                    {
                        case ifcIDtYPEsADAMtOOLfILTER_DENYaCTION :
                        {
                            if( idActionP == c3p.c2 ) bOk = 0 ;
                            break ;
                        }
                        case ifcIDtYPEsADAMtOOLfILTER_ALLOWaCTION :
                        {
                            if( idActionP == c3p.c2 ) bOk = 1 ;
                            break ;
                        }
                        case ifcIDtYPEsADAMtOOLfILTER_DENYtOOL :
                        {
                            if( idToolP == c3p.c2 ) bOk = 0 ;
                            break ;
                        }
                        case ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOL :
                        {
                            if( idToolP == c3p.c2 ) bOk = 1 ;
                            break ;
                        }
                        case ifcIDtYPEsADAMtOOLfILTER_DENYtOOLaCTION :
                        {
                            if( idToolP == c3p.c2 && idActionP == c3p.c3 ) bOk = 0 ;
                            break ;
                        }
                        case ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOLaCTION :
                        {
                            if( idToolP == c3p.c2 && idActionP == c3p.c3 ) bOk = 1 ;
                            break ;
                        }
                    }
                }
                while( ~hWalk ) ;
            }
        }
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a009.backoldc.btoolfilterallowsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00a.backoldc.filtergrabmousef BEGIN
#define DDNAME       "3func.3609a00a.backoldc.filtergrabmousef"
#define DDNUMB      (countT)0x3609a00a
#define IDFILE      (countT)0x130a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::THIS IS AN AD HOC FUNCTION USED TO MAKE ALL MEMBERS, INCLUDING swsSadamToolFilter, PRIVATE
//U::IT SHOULD BE REPLACED WITH A SET OF GENERAL MEMBER FUNCTIONS THAT APPS CAN USE TO SPECIFY FILTER LISTS

/*1*/voidT backOldC::filterGrabMouseF( tinS& tinP , const countT idAdamP , const boolT bFilterP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    const countT idList = DDNUMB ;
    ZE( boolT , bListExists ) ;
    {
        countT cFlavors = swsSadamToolFilter.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            count2S& c2l = *(count2S*)swsSadamToolFilter.leverF( tinP , idf ) ;
            if( c2l.c1 == idList )
            {
                bListExists = 1 ;
                break ;
            }
        }
    }

    if( bFilterP )
    {
        if( !bListExists )
        {
            count3S c3p1No( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONlEFT ) ;
            count3S c3p2No( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONcENTER ) ;
            count3S c3p3No( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONrIGHT ) ;
            count3S c3p4No( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEpOSITION ) ;
        
            count3S c3p1Yes( ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOL , ifcIDtYPEtOOL_MOUSEbUTTONlEFT ) ;
            count3S c3p2Yes( ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOL , ifcIDtYPEtOOL_MOUSEbUTTONcENTER ) ;
            count3S c3p3Yes( ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOL , ifcIDtYPEtOOL_MOUSEbUTTONrIGHT ) ;
            count3S c3p4Yes( ifcIDtYPEsADAMtOOLfILTER_ALLOWtOOL , ifcIDtYPEtOOL_MOUSEpOSITION ) ;
        
            c2leverToolFilter.c1 = idList ;

            c2leverToolFilter.c2 = 0 ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p1No ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p2No ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p3No ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p4No ) ;
        
            c2leverToolFilter.c2 = idAdamP ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p1Yes ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p2Yes ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p3Yes ) ;
            swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3p4Yes ) ;
        }
    }
    else
    {
        countT cFlavors = swsSadamToolFilter.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            count2S& c2l = *(count2S*)swsSadamToolFilter.leverF( tinP , idf ) ;
            if( c2l.c1 == idList ) swsSadamToolFilter.freeF( tinP , 1 ) ;
        }
        swsSadamToolFilter.freeNullFlavorsF( tinP ) ;
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00a.backoldc.filtergrabmousef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00b.backoldc.pushpaperdrawoverrideprotectedf BEGIN
#define DDNAME       "3func.3609a00b.backoldc.pushpaperdrawoverrideprotectedf"
#define DDNUMB      (countT)0x3609a00b
#define IDFILE      (countT)0x130b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::pushPaperDrawOverrideProtectedF( tinS& tinP , const countT idPaperP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    papers.pushRenderF( tinP , idPaperP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00b.backoldc.pushpaperdrawoverrideprotectedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00c.backoldc.poppaperdrawoverrideprotectedf BEGIN
#define DDNAME       "3func.3609a00c.backoldc.poppaperdrawoverrideprotectedf"
#define DDNUMB      (countT)0x3609a00c
#define IDFILE      (countT)0x130c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::popPaperDrawOverrideProtectedF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    papers.popRenderF( tinP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00c.backoldc.poppaperdrawoverrideprotectedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00d.backoldc.setmodeflagsf BEGIN
#define DDNAME       "3func.3609a00d.backoldc.setmodeflagsf"
#define DDNUMB      (countT)0x3609a00d
#define IDFILE      (countT)0x130d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::setModeFlagsF( tinS& tinP , const flagsT flagsOnP , const flagsT flagsOffP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    flagsT prior = rowBack.ro.flagsPaperBackMode ;
    rowBack.rw.flagsPaperBackMode |= flagsOnP ;
    rowBack.rw.flagsPaperBackMode &= ~( F(flagsOffP) ) ;

    boolT bDeparted =    F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT   && !( F(prior) & flPAPERbACKmODE_ABSENT ) ;
    boolT bArrived  = !( F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) &&    F(prior) & flPAPERbACKmODE_ABSENT   ;

    //if( bDeparted ) { LOGrAW3( "departed [&flags]: " , &rowBack.ro.flagsPaperBackMode , "\r\n" ) ; }
    //if( bArrived  ) { LOGrAW3( "arrived  [&flags]: " , &rowBack.ro.flagsPaperBackMode , "\r\n" ) ; }

         if( bArrived  ) paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_WAKE , 0 , 0 , flCALLsADAMS_FIFO , 0 , 0 , this ) ;
    else if( bDeparted ) paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_WAKE , 0 , 0 , flCALLsADAMS_null , 0 , 0 , this ) ;

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00d.backoldc.setmodeflagsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00e.backoldc.wraprenderf BEGIN
#define DDNAME       "3func.3609a00e.backoldc.wraprenderf"
#define DDNUMB      (countT)0x3609a00e
#define IDFILE      (countT)0x130e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i render the specified strokes onto the current drawing paper
my main job is to wrap words
i must deal with the possibility that the drawing paper changes
 if the drawing paper changes then i must render correctly to the correct drawing paper
*/
/**/

/*1*/countT backOldC::wrapRenderF( tinS& tinP , const strokeS* const psttP , const handleC* const phCloneP , const countT* pczIdAdamSnapP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttP ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , cWrap ) ;
    IFsCRATCH
    {
        SCOOPS

        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( psttP->idAdam )
        {
            //U::HARDCODED TO WORK CORRECTLY IF PAPER [n] IS PUSHED FOR LOW [n]; NEED TO SUPPORT ALL POSSIBLE VALUES FOR idAdam I.E. WILDCARD

            ZE( strokeS* , psttDelim ) ;
            ether.strMakeF( tinP , LF , psttDelim , T(" ") , TUCK ) ; ___( psttDelim ) ;
            ether.strFuseF( tinP , psttDelim , S2(' ',sc_NULL) ) ;
            ether.strFuseF( tinP , psttDelim , S2(0,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(1,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(2,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(3,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(4,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(5,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(6,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(7,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(8,scOld_cPUSHpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(0,scOld_POPpAPERoVERRIDE) ) ;
            ether.strFuseF( tinP , psttDelim , S2(0,scOld_POPpAPERoVERRIDE) ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            {
                strokeS sttcr = S2('\r',sc_cALPHABET1) ;
                strokeS sttlf = S2('\n',sc_cALPHABET1) ;
        
                ZE( strokeS* , pstt1w ) ;
                {
                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                    ether.strWordsOldF( tinP , pstt1w , psttP , sttq , psttDelim , flSTRwORDS_DELIMITERS ) ; ___( pstt1w ) ;
                }
        
                FORsTRINGSiN1( pstt1w ) //EACH STRING IS EITHER A WORD OR A DELIMITER SNIP
                {
                    if( ether.strIdF( tinP , psttc1[ CSpREFIX ] , psttDelim ) ) renderF( tinP , *papers.selectF( tinP , ifcIDcMDpAPERsELECT_QUERYrENDER ).x1.pPulp , psttc1 , phCloneP ) ;
                    else
                    {
                        pulpOldC& pulp = *papers.selectF( tinP , ifcIDcMDpAPERsELECT_QUERYrENDER ).x1.pPulp ;
                        strokingFrameS* psfd = (strokingFrameS*)&pulp.stqr_strokingFrame[ 2 + pulp.rCache.offFrame + pulp.rCache.offFrameWrap ] ;
                        if( psfd->bWrap )
                        {
                            const measureT mIdColEnd = psfd->mIdCol + psfd->mCols ;
    
                            ZE( measureT , mIdColRight ) ;
                            {
                                ZE( measureT , mIdColWord ) ;
                                ZE( measureT , mIdRowWord ) ;
                                ZE( measureT , mColsWord ) ;
                                ZE( measureT , mRowsWord ) ;
                                countT bWrapSave = psfd->bWrap ;
                                psfd->bWrap = 0 ;
        
                                const flagsT flSave = pulp.flagsMode ; pulp.flagsMode |= flPULPmODE_RIPPLESoNLY ;
    
                                pulp.boundingRectF( tinP , mIdColWord , mIdRowWord , mColsWord , mRowsWord , T(psttc1) , phCloneP , pczIdAdamSnapP ) ; //DOES SNAP/RESTORE, SO psfd BECOMES A ZOMBIE
    
                                psfd = (strokingFrameS*)&pulp.stqr_strokingFrame[ 2 + pulp.rCache.offFrame + pulp.rCache.offFrameWrap ] ;
                                pulp.flagsMode = flSave ;
                                psfd->bWrap = bWrapSave ;
                                mIdColRight = mIdColWord - 1.0 + mColsWord ;
                            }
            
                            if( mIdColEnd <= mIdColRight ) //HITTING THE COLUMN JUST OUTSIDE OF THE STROKING FRAME TRIGGERS WRAP
                            {
                                strokeS psttw[ CSpREFIX + 2 ] ;
                                SETpREFIX( psttw , 2 , 0 ) ;
                                psttw[ CSpREFIX     ] = sttcr ;
                                psttw[ CSpREFIX + 1 ] = sttlf ;

                                renderF( tinP , pulp , psttw , phCloneP ) ;
                                cWrap ++ ;
                            }
                        }
        
                        renderF( tinP , pulp , psttc1 , phCloneP ) ;
                    }
                }
                ether.delF( tinP , psttDelim ) ;
                ether.delF( tinP , pstt1w ) ;
            }
        }

        if( POOP ) POOPR ;
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    return cWrap ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00e.backoldc.wraprenderf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00f.backoldc.wraprenderoverridef BEGIN
#define DDNAME       "3func.3609a00f.backoldc.wraprenderoverridef"
#define DDNUMB      (countT)0x3609a00f
#define IDFILE      (countT)0x130f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::wrapRenderOverrideF( tinS& tinP , const strokeS* const psttP , const handleC* const phCloneP , const countT* pczIdAdamSnapP , const flagsT flagsModeOnP , const flagsT flagsModeOffP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    pulpOldC& pulp = *papers.selectF( tinP , ifcIDcMDpAPERsELECT_QUERYrENDER ).x1.pPulp ; //A:ASSUME: psttP DOES NOT CHANGE p PaperDraw

    const flagsT _savemode = pulp.flagsMode ;
    pulp.flagsMode |= flagsModeOnP ;
    pulp.flagsMode &= ~( F(flagsModeOffP) ) ;

    wrapRenderF( tinP , psttP , phCloneP , pczIdAdamSnapP ) ;

    pulp.flagsMode = _savemode ;

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a00f.backoldc.wraprenderoverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a010.backoldc.selectpaperf BEGIN
#define DDNAME       "3func.3609a010.backoldc.selectpaperf"
#define DDNUMB      (countT)0x3609a010
#define IDFILE      (countT)0x1310


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperOldC& backOldC::selectPaperF( tinS& tinP , const countT idCmdP , countT idPaperP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    paperOldC& paper = papers.selectF( tinP , idCmdP , idPaperP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    return paper ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a010.backoldc.selectpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a011.backoldc.filterkeepnormalkeysf BEGIN
#define DDNAME       "3func.3609a011.backoldc.filterkeepnormalkeysf"
#define DDNUMB      (countT)0x3609a011
#define IDFILE      (countT)0x1311


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::filterKeepNormalKeysF( tinS& tinP , const countT idAdamP , const boolT bFilterP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    const countT idList = DDNUMB ;
    ZE( boolT , bListExists ) ;
    {
        countT cFlavors = swsSadamToolFilter.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            count2S& c2l = *(count2S*)swsSadamToolFilter.leverF( tinP , idf ) ;
            if( c2l.c1 == idList )
            {
                bListExists = 1 ;
                break ;
            }
        }
    }

    if( bFilterP )
    {
        if( !bListExists )
        {
            c2leverToolFilter.c1 = idList ;
            c2leverToolFilter.c2 = idAdamP ;

            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_CONTROLbEGIN        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ALT                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ALTrIGHT            ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_BACKSPACE           ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_BASEoScELLlIST      ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_BASEoSlEFT          ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_BASEoSrIGHT         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_CONTROL             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_CONTROLrIGHT        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_DELETE              ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_DELETEnUM           ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_DOWN                ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_DOWNnUM             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_END                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ENDnUM              ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ENTER               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ENTERnUM            ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_ESCAPE              ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F1                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F2                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F3                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F4                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F5                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F6                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F7                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F8                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F9                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F10                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F11                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_F12                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_HOME                ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_HOMEnUM             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_INSERT              ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_INSERTnUM           ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_LEFT                ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_LEFTnUM             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_LOCKcAPS            ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_LOCKnUM             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_LOCKsCROLL          ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_NULLnUM             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_PAGEdOWN            ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_PAGEdOWNnUM         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_PAGEuP              ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_PAGEuPnUM           ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_BREAK               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_PAUSE               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_RIGHT               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_RIGHTnUM            ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_SHIFT               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_SHIFTrIGHT          ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_TAB                 ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_TABbACK             ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_UP                  ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_UPnUM               ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_CONTROLeND          ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONlEFT     ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONcENTER   ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEbUTTONrIGHT    ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON1         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON2         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON3         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON4         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON5         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON6         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON7         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON8         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON9         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONa         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONb         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONc         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONd         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONe         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONf         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON01        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON11        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON21        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON31        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON41        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON51        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON61        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON71        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON81        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON91        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONa1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONb1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONc1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONd1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONe1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTONf1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1bUTTON02        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON1         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON2         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON3         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON4         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON5         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON6         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON7         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON8         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON9         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONa         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONb         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONc         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONd         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONe         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONf         ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON01        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON11        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON21        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON31        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON41        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON51        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON61        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON71        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON81        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON91        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONa1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONb1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONc1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONd1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONe1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTONf1        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2bUTTON02        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_MOUSEpOSITION       ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY1pOSITION        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
            { count3S c3( ifcIDtYPEsADAMtOOLfILTER_DENYtOOL , ifcIDtYPEtOOL_JOY2pOSITION        ) ; swsSadamToolFilter.sinkF( tinP , countTC() , (byteT*)&c3 ) ; }
        }
    }
    else
    {
        countT cFlavors = swsSadamToolFilter.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            count2S& c2l = *(count2S*)swsSadamToolFilter.leverF( tinP , idf ) ;
            if( c2l.c1 == idList ) swsSadamToolFilter.freeF( tinP , 1 ) ;
        }
        swsSadamToolFilter.freeNullFlavorsF( tinP ) ;
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a011.backoldc.filterkeepnormalkeysf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a013.backoldc.mcolsrowsf BEGIN
#define DDNAME       "3func.3609a013.backoldc.mcolsrowsf"
#define DDNUMB      (countT)0x3609a013
#define IDFILE      (countT)0x1312


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT backOldC::mColsRowsF( tinS& tinP , const measureT mColsP , const measureT mRowsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    mCols = mColsP ;
    mRows = mRowsP ;
    //LOGrAW3( "mColsRowsF set [mRows]: " , mRows , "\r\n" ) ;

    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn > 0x10 )
    {
        countT foo = 2 ;
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a013.backoldc.mcolsrowsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a014.backoldc.settoolflagsf BEGIN
#define DDNAME       "3func.3609a014.backoldc.settoolflagsf"
#define DDNUMB      (countT)0x3609a014
#define IDFILE      (countT)0x1313


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::setToolFlagsF( tinS& tinP , const countT idToolP , const flagsT flagsOnP , const flagsT flagsOffP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    rowBack.rw.pfToolState_f[ idToolP - ifcIDtYPEtOOL_begin - 1 ] |=      flagsOnP     ;
    rowBack.rw.pfToolState_f[ idToolP - ifcIDtYPEtOOL_begin - 1 ] &= ~( F(flagsOffP) ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a014.backoldc.settoolflagsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a015.backoldc.resetallf BEGIN
#define DDNAME       "3func.3609a015.backoldc.resetallf"
#define DDNUMB      (countT)0x3609a015
#define IDFILE      (countT)0x1314


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::resetAllF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    thirdC::c_memsetIF( tinP , (byteT*)&rowBack.rw , sizeof rowBack.rw ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a015.backoldc.resetallf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a016.backoldc.resettoolmousepositionflagsf BEGIN
#define DDNAME       "3func.3609a016.backoldc.resettoolmousepositionflagsf"
#define DDNUMB      (countT)0x3609a016
#define IDFILE      (countT)0x1315


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::resetToolMousePositionFlagsF( tinS& tinP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_MOUSEpOSITION - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_null ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609a* : 3func.3609a016.backoldc.resettoolmousepositionflagsf END
