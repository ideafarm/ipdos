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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb002.booksc.dt_booksc BEGIN
#define DDNAME       "3func.360fb002.booksc.dt_booksc"
#define DDNUMB      (countT)0x360fb002
#define IDFILE      (countT)0x1462


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#define BOOKnOWmASK ( (byteT)( 1 << OFFbOOKsLOTnOW % SB ) )

#define BOOKnOWeXISTS ( pbFlagsiBookBackCt[ OFFbOOKsLOTnOW / SB ] & mask )

#define NEWbOOK1bLAMMOiFcT                                                                  \
                                                                                            \
        byteT mask = BOOKnOWmASK ;                                                          \
        if( BOOKnOWeXISTS ) { BLAMMO ; }

#define BOOKnOWrESETfLAG pbFlagsiBookBackCt[ OFFbOOKsLOTnOW / SB ] &= ~mask ;

#define NEWbOOK2sETfLAG pbFlagsiBookBackCt[ OFFbOOKsLOTnOW / SB ] |= mask ;

#define OFFbOOKsLOTnOW ( offBookBackNow % CbOOKsLOTS )

#define DELzOMBIEbOOKbACKnOWiF                                                                                                                                                                      \
                                                                                                                                                                                                    \
    {                                                                                                                                                                                               \
        byteT mask = BOOKnOWmASK ;                                                                                                                                                                  \
                                                                                                                                                                                                    \
        if( BOOKnOWeXISTS )                                                                                                                                                                         \
        {                                                                                                                                                                                           \
            BOOKnOWrESETfLAG                                                                                                                                                                        \
            bookC* pDoomed = (bookC*)PBbOOKbACKnOW ;                                                                                                                                                \
            DELzOMBIE( pDoomed ) ;                                                                                                                                                                  \
        }                                                                                                                                                                                           \
        /*else                                                                                                                                                                                */    \
        /*{                                                                                                                                                                                   */    \
        /*    OStEXT(   ostoSay , TUCK << 2 ) ;                                                                                                                                               */    \
        /*    OStEXTAK( ostoSay , "DELzOMBIEbOOKbACKnOWiF / not deleting [pbBook,offBookBackNow,pbFlagsiBookBackCt,*pbFlagsiBookBackCt,pbFlagsiBookBackCt[OFFbOOKsLOTnOW/SB]&mask]:    " ) ;  */    \
        /*    OStEXTC(  ostoSay , PBbOOKbACKnOW , '0' ) ;                                                                                                                                     */    \
        /*    OStEXTAK( ostoSay ,"    " ) ;                                                                                                                                                   */    \
        /*    OStEXTC(  ostoSay , offBookBackNow , 0 ) ;                                                                                                                                      */    \
        /*    OStEXTAK( ostoSay ,"    " ) ;                                                                                                                                                   */    \
        /*    OStEXTCF( ostoSay , pbFlagsiBookBackCt , '0' ) ;                                                                                                                                */    \
        /*    OStEXTAK( ostoSay ,"    " ) ;                                                                                                                                                   */    \
        /*    OStEXTC(  ostoSay , *pbFlagsiBookBackCt , 0 ) ;                                                                                                                                 */    \
        /*    OStEXTAK( ostoSay ,"    " ) ;                                                                                                                                                   */    \
        /*    OStEXTC(  ostoSay , pbFlagsiBookBackCt[OFFbOOKsLOTnOW/SB]&mask , 0 ) ;                                                                                                          */    \
        /*    OStEXTAK( ostoSay , "\r\n" ) ;                                                                                                                                                  */    \
        /*    LOGrAW(   ostoSay ) ;                                                                                                                                                           */    \
        /*}                                                                                                                                                                                   */    \
    }

/*1*/booksC::~booksC( voidT )/*1*/
{
    TINSL
    SCOOP

    _IO_

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~booksC/+\r\n" ) ; //U:: TO FIND A BUG

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;

         if( this == &processGlobal3I.bksTelemetrySys ) processGlobal1I.flDt |= flCTdTg_bksTelemetrySys ;
    else if( this == &processGlobal3I.bksTelemetryApp ) processGlobal1I.flDt |= flCTdTg_bksTelemetryApp ;
    else if( this == &processGlobal3I.bksWord         ) processGlobal1I.flDt |= flCTdTg_bksWord         ;
    else if( this == &processGlobal3I.bksWords        ) processGlobal1I.flDt |= flCTdTg_bksWords        ;

    for( offBookBackNow = 0 ; offBookBackNow < CbOOKsLOTS ; offBookBackNow ++ )
    {
        processGlobal3I.heap.delF( tinP , *(byteT**)&ppcpIdBook[ offBookBackNow ] ) ;
        DELzOMBIEbOOKbACKnOWiF
    }

    if( *(countT*)pbNapReadCursor )
    {
        napkinC* pnDoomed = (napkinC*)pbNapReadCursor ;
        fileC*   pfDoomed = (fileC*)pbFileReadCursor ;
        DELzOMBIE( pnDoomed ) ;
        DELzOMBIE( pfDoomed ) ;
    }

    processGlobal3I.heap.delF( tinP , postNameShort                   ) ;
    processGlobal3I.heap.delF( tinP , postBookNameScratch             ) ;
    processGlobal3I.heap.delF( tinP , pbBookBack                      ) ;
    processGlobal3I.heap.delF( tinP , pbFlagsiBookBackCt              ) ;
    processGlobal3I.heap.delF( tinP , *(byteT**)&pcpIdBookScratch1    ) ;
    processGlobal3I.heap.delF( tinP , *(byteT**)&pcpIdBookScratchMin  ) ;
    processGlobal3I.heap.delF( tinP , *(byteT**)&pcpIdBookScratchMax  ) ;
    processGlobal3I.heap.delF( tinP , *(byteT**)&ppcpIdBook           ) ;

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
    if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) //BOTH FLAVORS ARE RETAINED IN ORDER TO HAVE TRUE UNLIMITED CAPACITY WHEN PUSE EXISTS
    {
        if( F(flagsCt) & flBOOKSc_PURGEoNdT )
        {
            handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
            do
            {
                osTextT postName[ TUCK << 1 ] ;
                postName[ 0 ] = 0 ;
                thirdC::dosFindFileOrDirSimpleIF( tinP , postName , sizeof postName , hFind , postFindLike ) ;
                if( !postName[ 0 ] )
                {
                    __( ~hFind ) ;
                    break ;
                }

                thirdC::dosDeleteIF( tinP , postName ) ;
            }
            while( ~hFind ) ;
        }
    }
    else
    {
        if( F(flagsCt) & flBOOKSc_PURGEoNdT )
        {
            fileNameC fnLike( tinP , *tinP.pEther , psttFindLike ) ;
            patternC pat( tinP , *tinP.pEther , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
             handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
             do
             {
                 ZE( infoFileS* , pInfo ) ;
                 tinP.pEtScratch->diskFindFileOrDirF( tinP , pInfo , hFind , fnLike.pathF() , &pat ) ; ___( pInfo ) ;
                 if( pInfo && !( F(pInfo->flags) & flFILEaTTR_DIRECTORY ) ) tinP.pEtScratch->diskFileOrDirDeleteF( tinP , pInfo->psttIfoName ) ;
                 DEL( pInfo ) ;
             }
             while( ~hFind ) ;
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
        }
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
        tinP.pEtScratch->delF( tinP , psttFindLike ) ;
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    psttFindLike\r\n" ) ;
    }

    THREADmODE3rESTORE

    //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "~booksC/-\r\n" ) ; //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb002.booksc.dt_booksc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb003.booksc.booksc BEGIN
#define DDNAME       "3func.360fb003.booksc.booksc"
#define DDNUMB      (countT)0x360fb003
#define IDFILE      (countT)0x1463


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 idLineCtP
 idiFileCtP
 pbBitsCtP
 postP
  can be 0
  if 0 then idStateSpaceP must also be 0
  if not 0 then idStateSpaceP must also not be 0
  if flBOOKSc_DOnOTuSEpUSE then postP must point to storage that will remain defined for the life of the instance
   coding conformance
    use a string literal whenever feasible
    document the requirement in a comment
 idStateSpaceP
  can be 0
  if 0 then instance does not persist after lath referencing process ends
 flagsP
 cbP
 pbBooksNoPuseBackP
  this backing memory is use if, and only if, flBOOKSc_DOnOTuSEpUSE
 cbBooksNoPuseBackP
 pbQuitP
  affects only construction
  can be 0
  if not 0 then points to boolT
  if 0 then constructor will not return until it has seen at least wo backing file
  if not 0 then constructor will quit waiting for a backing file to appear when *pbQuitP becomes nonze
   if constructor quits then the instance will become impotent
*/
/**/

#define MYaLLOC(lvalueP,cbP) { if( pbc + cbP > pbe ) { BLAMMO ; } else { (lvalueP) = pbc ; pbc += (cbP) ; } }

/*1*/booksC::booksC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , const countT idStateSpaceP , const flagsT flagsP , const countT cbP , const countT cKeepInactiveP , const byteT bFillP , byteT* const pbBooksNoPuseBackP , const countT cbBooksNoPuseBackP , const countT idMemorySpaceP , const boolT* pbQuitP ) :/*1*/
poop( flPOOP_SMELLY ) ,
ccMaxIdBook( TUCK >> 5 ) , //20190116@0943: REDUCED FROM TUCK TO TUCK >> 5 IN ORDER TO CONSERVE heapC USAGE; AS OF THIS WRITING SOME CODE SUPPORTS LENGTHS > 1 COUNT BUT OTHER CODE LIMITS NAME TO A SINGLE COUNT
pcpIdBookScratch1(    0 ) ,
pcpIdBookScratchMin( 0 ) ,
pcpIdBookScratchMax( 0 ) ,
pbBookBack( 0 ) ,
pbFlagsiBookBackCt( 0 ) ,
offBookBackNow( - 1 ) ,
flagsCt( flagsP ) ,
flagsCtBook
(
    ( F(flagsP) & flBOOKSc_DELETE                  ? flBOOKc_DELETE                  : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_WRITER                  ? flBOOKc_WRITER                  : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_DOnOTuSEpUSE            ? flBOOKc_DOnOTuSEpUSE            : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_DOnOTrEGISTERfILE       ? flBOOKc_DOnOTrEGISTERfILE       : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_USEgRABmEMORYsPACEoVERRIDE ? flBOOKc_USEgRABmEMORYsPACEoVERRIDE : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_DOnOTiNITIALIZEdATA     ? flBOOKc_DOnOTiNITIALIZEdATA     : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_LOCK                    ? flBOOKc_LOCK                    : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_DOnOTsERIALIZEnAPKINS   ? flBOOKc_DOnOTsERIALIZEnAPKIN    : flBOOKc_null ) |
    ( F(flagsP) & flBOOKSc_RESETcREFoNcT           ? flBOOKc_RESETcREFoNcT           : flBOOKc_null )
) ,
postNameShort( 0 ) ,
postBookNameScratch( 0 ) ,
cbBodyNew( cbP ) ,
idStateSpace( idStateSpaceP ) ,
idMemorySpace( idMemorySpaceP ) ,
grabBookNow( tinP , idLineCtP , idiFileCtP , pbBitsCtP , flGRABc_NOTjEALOUS | flGRABc_SNEAKYlOVER | flGRABc_SHARElAYER , ifcIDgRABlAYER_bBOOKSc ) , // flGRABc_SHARElAYER: NEEDED BECAUSE booksC::writeF CAN CALL ITSELF RECURSIVELY DUE TO TELEMETRY WHEN CHANGING bookC INSTANCES
cKeepInactive( cKeepInactiveP ) ,
ppcpIdBook( 0 ) ,
psttFindLike( 0 ) ,
bFill( bFillP )
{
    //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+T("ct + [offBookBackNow,CbOOKsLOTS]:    ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(CbOOKsLOTS,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

    //U:: CYCLING IS CURRENTLY NOT SUPPORTED CORRECTLY WHEN CbOOKsLOTS IS NOT 1
    //FOR CYCLING, ALL EXISTING FILES MUST BE OPENED.  THIS IS NOT CURRENTLY DONE
    //FOR CYCLING, offbookBackNow MUST BE SET TO POINT TO THE BOOK THAT CURRENTLY CONTAINS THE MOST RECENT WRITING
    //FOR CYCLING, MULTITHREADING AND SHARING BY MULTIPLE WRITING PROCESSES NEEDS TO BE THOUGHT ABOUT
    //CONJ: THE CURRENT CODE (20160621@1450) WILL WORK AOK FOR SHARED CYCLING AS LONG AS CbOOKsLOTS IS 1
    //NOTE: SINGLE THREADED CYCLING WORKS AOK FOR ANY CbOOKsLOTS VALUE
    //CONJ: THE CYCLING ISSUE IS ONLY FOR CONSTRUCTION; WRITING IS ALREADY SERIALIZED SO SHOULD WORK OK.  THIS SUGGESTS THAT SERIALIZING CONSTRUCTION WITH WRITING MIGHT SUFFICE

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE )
        {
            __( tinP.monitor.idThread != 1 ) ; //I WILL USE STATIC STORAGE SO WILL NOT BE THREAD SAFE; INTENDED ONLY FOR CT/DT OF INSTANCES IN STATIC STORAGE
            __( !postP != !idStateSpaceP ) ;  //INSTANCES WITHOUT BACKING FILES MUST BE UNNAMED; THIS RESTRICTION CAN BE REMOVED ONCE I AM EDITED TO ENUMERATE SHARED MEMORY OBJECTS RATHER THAN BACKING FILES
            __Z( pbBooksNoPuseBackP ) ;
            __Z( cbBooksNoPuseBackP ) ;
            __( CbOOKsLOTS > 2 ) ;
        }
        else
        {
            __Z( idStateSpaceP ) ; // !idStateSpaceP CAN BE ALLOWED IF THERE IS EVER A REASON TO DO SO, BUT THIS WOULD BE AN ODD APPLICATION BECAUSE THE CLIENT READER WOULD NEED TO KEEP UP WITH THE SERVER WRITER ; IF A SERVER WRITER FINISHED WRITING A bookC BEFORE THE CLIENT READER STARTED READING IT, THE DATA IN THE bookC WOULD BE LOST
        }
        FV( flBOOKSc , flagsP ) ;
        __NZ( cbP && !( F(flagsP) & flBOOKSc_WRITER ) ) ;
        //U:: DESIGN PROBLEM: INSTANCE SHARED BY MULTIPLE PROCESSES CANNOT PURGEoNcT: __NZ( F(flagsCt) & flBOOKSc_CYCLE && !( F(flagsCt) & flBOOKSc_PURGEoNcT ) ) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP | flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )

    //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;

    {
        countT cbaIdBook     = ccMaxIdBook * sizeof( countT )     ;
        countT cbaPointers   = ( CbOOKsLOTS ) * sizeof( countT* )  ;
        countT cbaBooks      = ( CbOOKsLOTS ) * SIZEOF_bookC       ;
        countT cbaFlags      = 1 + ( CbOOKsLOTS ) / SB ;
        countT costaName     = 1 + thirdC::c_strlenIF( tinP , postP )     ;
        countT costaBookName = costaName + TUCK ; //U:: REPLACE "TUCK" WITH ACTUAL NEEDED

        {
            byteT*       pbc = pbBooksNoPuseBackP ;
            byteT* const pbe = pbc + cbBooksNoPuseBackP ;

            postNameShort                  = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , costaName     ) ;
            postBookNameScratch            = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , costaBookName ) ;
            pbBookBack                     = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaBooks      ) ;
            pbFlagsiBookBackCt             = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaFlags      ) ;
            *(byteT**)&pcpIdBookScratch1   = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaIdBook     ) ;
            *(byteT**)&pcpIdBookScratchMin = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaIdBook     ) ;
            *(byteT**)&pcpIdBookScratchMax = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaIdBook     ) ;
            *(byteT**)&ppcpIdBook          = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaPointers   ) ;

            thirdC::c_memsetIF( tinP , pbFlagsiBookBackCt    , cbaFlags    ) ;
            thirdC::c_memsetIF( tinP , *(byteT**)&ppcpIdBook , cbaPointers ) ;

            for( countT offb = 0 ; offb < CbOOKsLOTS ; offb ++ )
            {
                *(byteT**)&ppcpIdBook[ offb ] = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cbaIdBook ) ;
            }
        }

        for( countT offb = 0 ; offb < CbOOKsLOTS ; offb ++ )
        {
            thirdC::c_memsetIF( tinP , *(byteT**)&ppcpIdBook[ offb ] , cbaIdBook ) ;
        }

        thirdC::c_memsetIF( tinP , pbNapReadCursor , sizeof pbNapReadCursor ) ; // WOTH COUNT: MUST BE 0 IFF CURSOR NAPKIN IS NOT CT    //A:ASSUME: napkinC IMAGE ALWAYS BEGINS WITH A NONZE countT VALUE
        thirdC::c_memcpyIF( tinP , postNameShort , postP , costaName ) ;

        //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
        if( !( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) )
        {
            TN( tLike , "///ideafarm/ephemeral/backed.up.daily/domains/com" ) ;
            tLike += T("/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF3(idMemorySpace?idMemorySpace:tinP.pAdamGlobal1->idMemorySpace,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE,8)+T("/stateSpaces/")+TF2(idStateSpace,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("/")+T(postNameShort)+T(".booksC.1.book.*.bookC") ;
            tinP.pEther->strMakeF( tinP , LF , psttFindLike , tLike ) ; ___( psttFindLike ) ;
        }
        //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    psttFindLike\r\n" ) ;
    }

    offBookBackNow ++ ;
    //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+T("ct [offBookBackNow]: ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(": ct / incremented") ) ; //U:: TO FIND A BUG

    //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;
    setBookNameIdF( tinP , F(flagsCt) & flBOOKSc_PURGEoNcT ? flBOOKScsELECT_PURGE : flBOOKScsELECT_null , 0 , pbQuitP ) ;
    //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    called setBookNameIdF\r\n" ) ;

    if( !POOP )
    {
        NEWbOOK1bLAMMOiFcT
        THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
        new( 0 , tinP , PBbOOKbACKnOW , SIZEOF_bookC ) bookC( tinP , idLineCtP , idiFileCtP , pbBitsCtP , postBookNameScratch , idStateSpace , flagsCtBook , F(flagsCtBook) & flBOOKc_WRITER ? cbBodyNew : 0 , bFill , idMemorySpace ) ;
        THREADmODE3rESTORE
        NEWbOOK2sETfLAG

        if( PCPiDbOOKnOW[ 0 ] == 1 && PCPiDbOOKnOW[ 1 ] == 1 ) ((bookHeadS&)BOOKnOW).flags |= flBOOKhEADs_PRIORbOOKnOTcONTINUEDhERE ;
    
        if( this == &processGlobal3I.bksTelemetrySys )
        {
            processGlobal1I.flCt |= flCTdTg_bksTelemetrySys ;

            ZE( const byteT* , pbi  ) ;
            countT cbi = - 1 ;
            ZE( countT , offi ) ;
            processGlobal3I.bkTelemetrySysEarlyLate.readF( tinP , pbi , cbi , offi ) ;
            CONoUTrAW3( "booksC: pouring early system telemetry [cbi]:    " , cbi , "\r\n" ) ;
            writeF( tinP , pbi , cbi , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ELSEfILLtOeND , 0 ) ;
            processGlobal3I.bkTelemetrySysEarlyLate.purgeF( tinP ) ;
        }
        else if( this == &processGlobal3I.bksTelemetryApp )
        {
            processGlobal1I.flCt |= flCTdTg_bksTelemetryApp ;

            ZE( const byteT* , pbi  ) ;
            countT cbi = - 1 ;
            ZE( countT , offi ) ;
            THREADmODE4oN( flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;                  //U:: WARRANTS FURTHER STUDY AND CRAFTWORK ; THE GOAL IS TO PREVENT OUT OF ORDER APP TELEMETRY DO TO APP TELEMETRY GENERATED DURING THIS POUR OPERATION
            processGlobal3I.bkTelemetryAppEarlyLate.readF( tinP , pbi , cbi , offi ) ;      //U:: THIS STUDY IS LOW PRIORITY BECAUSE THE PENDING BUFFER DOES NOT YET EXIST AND 0 TELEMETRY IS POURED
            CONoUTrAW3( "booksC: pouring early application telemetry [cbi]:    " , cbi , "\r\n" ) ;
            writeF( tinP , pbi , cbi , 0 , 0 , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ELSEfILLtOeND , 0 ) ;
            processGlobal3I.bkTelemetryAppEarlyLate.purgeF( tinP ) ;
            THREADmODE4rESTORE
        }
        else if( this == &processGlobal3I.bksWord  ) processGlobal1I.flCt |= flCTdTg_bksWord         ;
        else if( this == &processGlobal3I.bksWords ) processGlobal1I.flCt |= flCTdTg_bksWords        ;
    }

    //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+T("ct - [offBookBackNow,CbOOKsLOTS]:    ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(CbOOKsLOTS,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

    //CONoUTrAW3( "[heap.cNew-cDel]:    " , processGlobal3S::_processGlobal3I_IF().heap.cNewF()-processGlobal3S::_processGlobal3I_IF().heap.cDelF() , "    \r\n" ) ;

    THREADmODE3rESTORE

    if( tinP.pPoolUse && F(flagsP) & flBOOKSc_RESETcREFoNcT )
    {
        ZE( boolT , bnu ) ;
        touchAllBooksF( tinP , &bnu ) ;
        *(flagsT*)&flagsCtBook &= ~( F(flBOOKc_RESETcREFoNcT) ) ;
    }
}

#undef MYaLLOC


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb003.booksc.booksc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb004.monitors.monitors BEGIN
#define DDNAME       "3func.360fb004.monitors.monitors"
#define DDNUMB      (countT)0x360fb004
#define IDFILE      (countT)0x1464


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.15d0003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/monitorS::monitorS( tinS& tinP , const countT idThreadP ) :/*1*/
whereS( tinP ) ,
idProcessOld( 0 ) ,
idThread( idThreadP ) ,
idStep( 0 ) ,
zap_pPanLifiGrabbing_( (byteT*)pPanLifiGrabbing , sizeof pPanLifiGrabbing, flZAP_CT ) ,
cGrabbed( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb004.monitors.monitors END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb005.booksc.writef BEGIN
#define DDNAME       "3func.360fb005.booksc.writef"
#define DDNUMB      (countT)0x360fb005
#define IDFILE      (countT)0x1465


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
for caller convenience, i optionally take input from oo sources
parameters
 tinP
 pb1P
  can be 0
  is normally not 0
  if 0 then all remaining bytes of book will be set to (byteT)cb1P
 cb1P
  if !pb1P then specifies the fill value and must be < TUCK
  if  pb1P then specifies the number of bytes at pb1P
   should not be 0
   if 0 then i will calculate the null terminated length of pb1P
 pb2P
  may be 0
   is normally 0
  if not 0 then points to second input source
 cb2P
  may be 0
  if pb2P then should not be 0
  if 0 then i will calculate the null terminated length of pb2P
*/
/**/

//20171117@2056: THE FOLLOWING IS A KLUDGE THAT I AM USING TO IMPLEMENT A HEAP SO THAT I CAN ELIMINATE THE USE OF PUSE IN ORDER TO AVOID NONMONOTONIC GRABBING
//I SUPPORT UP TO 01 THREADS SIMULTANEOUSLY 

osTextT postBookNameNoPuse2_0[ TUCK ] ;
osTextT postBookNameNoPuse2_1[ TUCK ] ;
osTextT postBookNameNoPuse2_2[ TUCK ] ;
osTextT postBookNameNoPuse2_3[ TUCK ] ;
osTextT postBookNameNoPuse2_4[ TUCK ] ;
osTextT postBookNameNoPuse2_5[ TUCK ] ;
osTextT postBookNameNoPuse2_6[ TUCK ] ;
osTextT postBookNameNoPuse2_7[ TUCK ] ;
osTextT postBookNameNoPuse2_8[ TUCK ] ;
osTextT postBookNameNoPuse2_9[ TUCK ] ;
osTextT postBookNameNoPuse2_a[ TUCK ] ;
osTextT postBookNameNoPuse2_b[ TUCK ] ;
osTextT postBookNameNoPuse2_c[ TUCK ] ;
osTextT postBookNameNoPuse2_d[ TUCK ] ;
osTextT postBookNameNoPuse2_e[ TUCK ] ;
osTextT postBookNameNoPuse2_f[ TUCK ] ;

osTextT* ppostBookNameNoPuse2[] =                           //CS:CODEsYNC: 360fb005 360fb005
{
    postBookNameNoPuse2_0 ,
    postBookNameNoPuse2_1 ,
    postBookNameNoPuse2_2 ,
    postBookNameNoPuse2_3 ,
    postBookNameNoPuse2_4 ,
    postBookNameNoPuse2_5 ,
    postBookNameNoPuse2_6 ,
    postBookNameNoPuse2_7 ,
    postBookNameNoPuse2_8 ,
    postBookNameNoPuse2_9 ,
    postBookNameNoPuse2_a ,
    postBookNameNoPuse2_b ,
    postBookNameNoPuse2_c ,
    postBookNameNoPuse2_d ,
    postBookNameNoPuse2_e ,
    postBookNameNoPuse2_f ,
}
;

countT pcRef_postBookNameNoPuse2[ 0x10 ] ;                  //CS:CODEsYNC: 360fb005 360fb005

/*1*/countT booksC::writeF( tinS& tinP , const byteT* pb1P , countT cb1P , const byteT* pb2P , countT cb2P , const flagsT flagsP , handleC* const phWroteP /*U::, countT** ppcpIdAptP*/ )/*1*/
{
    SCOOP

    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        if( pb1P && !cb1P ) cb1P = thirdC::c_strlenIF( tinP , pb1P ) ;  //20200920@1713: MOVED THESE 2 LINES EARLIER TO HERE W/O ANALYSIS
        if( pb2P && !cb2P ) cb2P = thirdC::c_strlenIF( tinP , pb2P ) ;
        __NZ( !pb2P && cb2P ) ;
        __NZ( cbBodyNew < cb1P + cb2P && F(flagsP) & flBOOKScwRITE_ALLoRnONE ) ;
        if( POOP ) return 0 ;
        //__( ppcpIdAptP && *ppcpIdAptP ) ; //20171112@1557: ADDED WITHOUT ANALYSIS WHILE EDITING TO PREALLOCATE TO AVOID USING POOL WHILE grabBookNow IS GRABBED
        //__( ppcpIdAptP && ( this == &processGlobal3I.bksTelemetrySys || this == &processGlobal3I.bksTelemetryApp || this == &processGlobal3I.bksTrace || this == &processGlobal3I.bksTraceDivert01 || this == &processGlobal3I.bksWord || this == &processGlobal3I.bksWords ) ) ; //CAPTURE OF TELEMETRY OR TRACE IS GUARANTEED TO NEVER INVOLVE USE OF A poolC INSTANCE; SUCH USAGE COULD EMIT TELEMETRY OR TRACE, CAUSING SCRATCH BOOK OVERFLOW
        FV( flBOOKScwRITE , flagsP ) ;
        if( phWroteP )
        {
            __NZ( !( F(flagsP) & flBOOKScwRITE_ALLoRnONE ) && !( F(flagsP) & flBOOKScwRITE_SETrEMAINING ) ) ;
            __( *PCPiDbOOKnOW != 1 ) ; // IDbOOK VALUES ARE UNLIMITED.  BUT ONLY LENGTH 1 IDbOOK VALUES CAN BE STORED WITHIN A handleC.  FOR MORE CAPACITY, INCREASE THE SIZE OF handleC::c2AppNote
        }
        if( POOP ) return 0 ;
    }

    //  pseudocode
    //   set flag pool alloc from heap
    //   if have something to write
    //    grab grabBookNow
    //    set pBookUse to scratch if exists, or to BOOKnOW otherwise
    //    while have something to write
    //     write to pBookUse
    //     if wrote something but did not exhaust book then break
    //     else if scratch or no scratching then blammo
    //     else
    //      adjust parameters by cbDone      
    //      if scratch not allocated
    //       allocate from tls and ct scratch book
    //       increment offBookNow
    //       dt book
    //       ct book
    //      if i allocated scratch
    //       pour scratch  (this might ct and use a new scratch book)
    //       dt scratch and free tls
    //    ungrab grabBookNow

    _IO_

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )     //20200912@1846: ADDED WITHOUT ANALYSIS TO PREVENT RARE EVENT FAILURE THAT I CANNOT LOCATE

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    //U::DELETE THE NEXT LINE ONCE I AM TESTED TO VERIFY THAT I DO NOT TRIGGER NONMONOTONIC GRABBING BLAMMO
    //if( this == &processGlobal3I.bksTelemetrySys || this == &processGlobal3I.bksTelemetryApp /*|| this == &processGlobal3I.bksTrace || this == &processGlobal3I.bksTraceDivert01*/ || this == &processGlobal3I.bksWord || this == &processGlobal3I.bksWords ) return 0 ;  //U:: TO WORKAROUND A BUG (NONMONOTONIC GRABBING)

    //20191008@0844: DON'T KNOW WHY DONE THIS WAY RATHER THAN JUST USE _IO_
    //byteT _pbInOutFrame[ sizeof( inOutFrameC ) ] ;
    //inOutFrameC* pInOutFrame = this == &processGlobal3I.bksTrace || this == &processGlobal3I.bksTraceDivert01 || this == &processGlobal3I.bksTraceDivert02 || this == &processGlobal3I.bksTraceDivert03 || this == &processGlobal3I.bksTraceDivert04 || this == &processGlobal3I.bksTraceDivert05 || this == &processGlobal3I.bksTraceDivert06 || this == &processGlobal3I.bksTraceDivert07 || this == &processGlobal3I.bksTraceDivert08
    //    ? 0 
    //    : new( 0 , tinP , _pbInOutFrame , sizeof _pbInOutFrame ) inOutFrameC( tinP , LF , IDFILE , BiFCcLASS )
    //;

    ZE( countT , idBook ) ;
    if( cb1P || F(flagsP) & flBOOKScwRITE_SETrEMAINING )
    {
        _IO_
        const boolT bTelemetrySys = this == &processGlobal3I.bksTelemetrySys    ;
        const boolT bTelemetryApp = this == &processGlobal3I.bksTelemetryApp    ;
        const boolT bTrace        = this == &processGlobal3I.bksTrace           ;
        //const boolT bTraceDivert1 = this == &processGlobal3I.bksTraceDivert01 ;

        //20171117@2104: ppcpIdAptP SUPPORT IS COMMENTED OUT BECAUSE IT IS NOT CURRENTLY USED AND ITS CURRENT CODE REQUIRES USE OF PUSE, WHICH CAUSES NONMONOTONIC GRABBING.  BEFORE ENABLING, MUST BE REWRITTEN TO AVOID USING PUSE
        //if( !ppcpIdAptP || !tinP.pPoolUse || !processGlobal1I._grabC_pgw )
        //{
            if( processGlobal1I._grabC_pgw ) grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //}
        //else
        //{
        //    countT save = *PCPiDbOOKnOW ;
        //    PUSE.newF( tinP , LF , *(byteT**)ppcpIdAptP , sizeof( countT ) * ( 2 + save ) ) ; ___( *ppcpIdAptP ) ;
        //    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //
        //    while( *PCPiDbOOKnOW - save )
        //    {
        //        grabBookNow.ungrabF( tinP ) ;
        //        PUSE( tinP , *(byteT**)ppcpIdAptP ) ;
        //        save = *PCPiDbOOKnOW ;
        //        PUSE.newF( tinP , LF , *(byteT**)ppcpIdAptP , sizeof( countT ) * ( 2 + save ) ) ; ___( *ppcpIdAptP ) ;
        //        grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //    }
        //}

        book0C* pBookUse = bTelemetrySys && tinP.pBk0TelemetrySysScratch
            ? tinP.pBk0TelemetrySysScratch
            : bTelemetryApp && tinP.pBk0TelemetryAppScratch
                ? tinP.pBk0TelemetryAppScratch
                : bTrace && tinP.pBk0TraceScratch
                    ? tinP.pBk0TraceScratch
                    : &BOOKnOW
        ;

        //if( !( (bookHeadS&)*pBookUse ).cbBody ) { BLAMMO ; } //U::TO FIND A BUG  20140401

        ZE( byteT* , pbtScratchBuffer ) ; //USED AS BOOLEAN TO INDICATE THAT I AM THE CALL NEST LEVEL THAT MUST POUR AND THEN DESTROY THE SCRATCH BOOK

        flagsT flagsWrite = flBOOK0cwRITE_null ;
        if( F(flagsP) & flBOOKScwRITE_PURGE                         ) flagsWrite |= flBOOK0cwRITE_PURGE                         ; //WARNING: THIS ONLY PURGES THE CURRENT BOOK; TO PURGE THE BOOK SET, APP CAN DESTROY THIS INSTANCE AND CT AN INSTANCE USING flBOOKSc_PURGEoNcT
        if( F(flagsP) & flBOOKScwRITE_ALLoRnONE                     ) flagsWrite |= flBOOK0cwRITE_ALLoRnONE                     ;
        if( F(flagsP) & flBOOKScwRITE_ELSEfILLtOeND                 ) flagsWrite |= flBOOK0cwRITE_ELSEfILLtOeND                 ;
        if( F(flagsP) & flBOOKScwRITE_HEADfINGER1                   ) flagsWrite |= flBOOK0cwRITE_HEADfINGER1                   ;
        if( F(flagsP) & flBOOKScwRITE_HEADiDfORMAT                  ) flagsWrite |= flBOOK0cwRITE_HEADiDfORMAT                  ;
        if( F(flagsP) & flBOOKScwRITE_HEADcBdATA                    ) flagsWrite |= flBOOK0cwRITE_HEADcBdATA                    ;
        if( F(flagsP) & flBOOKScwRITE_HEADfINGER2                   ) flagsWrite |= flBOOK0cwRITE_HEADfINGER2                   ;
        if( F(flagsP) & flBOOKScwRITE_TAILfINGER                    ) flagsWrite |= flBOOK0cwRITE_TAILfINGER                    ;
        if( F(flagsP) & flBOOKScwRITE_ALLOWoDDlENGTH                ) flagsWrite |= flBOOK0cwRITE_ALLOWoDDlENGTH                ;
        if( F(flagsP) & flBOOKScwRITE_SETrEMAINING                  ) flagsWrite |= flBOOK0cwRITE_SETrEMAINING                  ;

        if( pBookUse != tinP.pBk0TelemetrySysScratch && pBookUse != tinP.pBk0TelemetryAppScratch && pBookUse != tinP.pBk0TraceScratch )
        {
            _IO_
            if( F(flagsP) & flBOOKScwRITE_FLUSHbOOKhEADoNcHANGE         ) flagsWrite |= flBOOK0cwRITE_FLUSHbOOKhEADoNcHANGE         ;
            if( F(flagsP) & flBOOKScwRITE_FLUSHb4tAIL                   ) flagsWrite |= flBOOK0cwRITE_FLUSHb4tAIL                   ;
            if( F(flagsP) & flBOOKScwRITE_FLUSHaTpAGE                   ) flagsWrite |= flBOOK0cwRITE_FLUSHaTpAGE                   ;
        }

        ZE( book0C** , ppBk0Scratch ) ;
        //ZE( boolT , bDeleteOutParam ) ;
        while( cb1P || F(flagsP) & flBOOKScwRITE_SETrEMAINING )
        {
            _IO_
            if( phWroteP ) // MUST BE CHECKED AGAIN HERE BECAUSE PCPiDbOOKnOW MIGHT HAVE CHANGED SINCE ENTERING ME
            {
                _IO_
                __( *PCPiDbOOKnOW != 1 ) ; // IDbOOK VALUES ARE UNLIMITED.  BUT ONLY LENGTH 1 IDbOOK VALUES CAN BE STORED WITHIN A handleC.  FOR MORE CAPACITY, INCREASE THE SIZE OF handleC::c2AppNote
                if( POOP ) break ;
            }

            countT cbDone1 = cb1P ;
            countT cbDone2 = cb2P ;
            ZE( flagsT , flagsResult ) ;
            ZE( countT , offWrote ) ;
            ZE( countT , offAt ) ;
            {
                _IO_
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
                offAt = pBookUse->writeF( tinP , flagsResult , pb1P , cbDone1 , pb2P , cbDone2 , flagsWrite , phWroteP ? &offWrote : 0 ) ;
                THREADmODE1rESTORE ;
            }

            if( phWroteP && cbDone1 )
            {
                _IO_
                if( !( F(flagsP) & flBOOKScwRITE_SETrEMAINING ) ) { __( cb1P - cbDone1 ) ; }
                __( cb2P - cbDone2 ) ;

                if( !POOP )
                {
                    _IO_
                    phWroteP->osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT , 0 , cbDone1 + cbDone2 ) ;
                    HANDLEaPPnOTEScOUNTcLASS& c2AppNote = *phWroteP ;
                    c2AppNote.c1 = offWrote ;
                    c2AppNote.c2 = PCPiDbOOKnOW[ 1 ] ;
                }
            }

            // idBook IS INTENDED TO BE THE ID OF THE WOTH BOOK TO RECEIVE ANY PART OF THE FULL ITEM WRITTEN; FOR CHECKPOINT / RESTART FUNCTIONALITY, TRANSACTION PROCESSING SHOULD USE flBOOKScwRITE_ALLoRnONE
            if( cbDone1 && !idBook ) idBook = PCPiDbOOKnOW[ 1 ] ; // APPS CAN USE THE LOWEST ORDER idBook countT TO IDENTIFY WHICH BOOK A TRANSACTION WAS WRITTEN TO, EVEN WHEN THE FULL IDbOOK VALUE IS LEN > 1, IN ORDER TO SUPPORT CHECKPOINT / RESTART FUNCTIONALITY WITHIN TRANSACTION PROCESSING

            flagsWrite &= ~( F(flBOOK0cwRITE_CONTINUEfROMpRIOR) ) ;

            //if( ppcpIdAptP && *ppcpIdAptP )
            //{
            //    if( !cbDone1 ) bDeleteOutParam = 1 ;
            //    else
            //    {
            //        (*ppcpIdAptP)[ 0 ] = 1 + *PCPiDbOOKnOW ;
            //        (*ppcpIdAptP)[ 1 ] = offAt ;
            //        thirdC::c_memcpyIF( tinP , (byteT*)( *ppcpIdAptP + 2 ) , (byteT*)( PCPiDbOOKnOW + 1 ) , sizeof( countT ) * *PCPiDbOOKnOW ) ;
            //    }
            //}

            boolT bWroteLath = !!( F(flagsResult) & flBOOK0cwRITErESULT_WROTElATHbYTE    ) ;
            boolT bWroteAll  =  !( F(flagsResult) & flBOOK0cwRITErESULT_COULDnOTwRITEaLL ) ;

            if( cbDone1 && !bWroteLath ) // SHOULD BE IMPOSSIBLE IF flBOOKScwRITE_SETrEMAINING BECAUSE A flBOOKScwRITE_SETrEMAINING CALL WILL ALWAYS WRITE AT LEAST WO BYTE AND WILL ALWAYS WRITE THE LATH BYTE ; THIS IS BECAUSE ANY PRIOR WRITE THAT WRITES THE LATH BYTE WILL ALWAYS CLOSE THE BOOK AND OPEN THE NEXT BOOK
            {
                _IO_
                if( ( !( F(flagsP) & flBOOKScwRITE_SETrEMAINING ) && cbDone1 != cb1P ) || cbDone2 != cb2P ) { BLAMMO ; } // cbDoneX MUST EQUAL cbXP; IF I DIDN'T WRITE THE LATH BYTE THEN I MUST HAVE WRITTEN ALL THAT I WANTED TO WRITE
                break ;
            }
            else if( pBookUse == tinP.pBk0TelemetrySysScratch ) { BLAMMO ; } //20141206@0700: OBSERVED WITHIN ifcIDaDAM_CLOUD WHILE 3 INSTANCES EXISTED ; 20151026@2013: DITTO WHILE MORE THAN 3 EXISTED BUT ONLY WO WAS ACTIVE AT A TIME ; 20151125@1532 piss (156)
            else if( pBookUse == tinP.pBk0TelemetryAppScratch ) { BLAMMO ; }
            else if( pBookUse == tinP.pBk0TraceScratch ) { BLAMMO ; }
            else if( F(flagsP) & flBOOKScwRITE_NOsCRATCHING ) { BLAMMO ; }
            else
            {
                _IO_
                THREADmODE4oFF( flTHREADmODE4_INoUTfRAMEfORCEcOLLECTaPPtELEMETRY )
                //ALLOCATE postBookNameNoPuse2 (PUSE IS NOT USED TO AVOID NONMONOTONIC GRABBING.  SO I NEED TO HAVE MY OWN LITTLE HEAP)
                ZE( osTextT* , postBookName ) ;   //U:: BUG: THIS IS NOT REENTRANT.  I NEED TO USE POOL OR SOME OTHER MEMORY ALLOCATION SCHEME FOR THIS NAME SO THAT I AM REENTRANT
                ZE( countT   , offEltMyHeap ) ;
                {
                    _IO_
                    countT cElts = sizeof ppostBookNameNoPuse2 / sizeof ppostBookNameNoPuse2[ 0 ] ;
                    for( offEltMyHeap = 0 ; offEltMyHeap < cElts ; offEltMyHeap ++ )
                    {
                        _IO_
                        if( !setIfZeAM( pcRef_postBookNameNoPuse2[ offEltMyHeap ] , 1 ) )
                        {
                            postBookName = ppostBookNameNoPuse2[ offEltMyHeap ] ;
                            break ;
                        }
                    }
                    if( offEltMyHeap == cElts ) { BLAMMO ; }
                }

                // !cbDone1 || bWroteLath

                if( pb1P ) pb1P += cbDone1 ;
                           cb1P -= cbDone1 ;

                if( pb2P ) pb2P += cbDone2 ;
                           cb2P -= cbDone2 ;

                if( !cb1P && cb2P )
                {
                    pb1P = pb2P ; pb2P = 0 ;
                    cb1P = cb2P ; cb2P = 0 ;
                }                 

                //IF flBOOKScwRITE_SETrEMAINING || !cb1P THEN I AM DONE WRITING MY DATA BUT MUST SET A FLAG IN THE NEW HEADER TO INDICATE THAT I WAIVE MY RIGHT TO WRITE ITS WOTH BYTE

                if
                (
                    ( bTelemetrySys && !tinP.pBk0TelemetrySysScratch )
                    ||
                    ( bTelemetryApp && !tinP.pBk0TelemetryAppScratch )
                    ||
                    ( bTrace     && !tinP.pBk0TraceScratch )
                )
                {
                    _IO_
                    //ALLOCATED ROOM FOR 4 NAPKIN TELLS: DEL( p BookOld ) + NEW( p BookOld )
                    //const countT cbtBuffer = bTelemetrySys || bTelemetryApp
                    //    ? sizeof( bookHeadS ) + 2 * ( sizeof( tellS ) + CBtELEMETRYeNVELOPE + sizeof( tellInfoSysNapkinS ) ) + 1       // ADD 1 TO ENSURE THAT THE LATH BYTE OF THE SCRATCH BUFFER IS NOT WRITTEN BY THE TELEMETRY EMITTED WHEN I DELETE AND NEW p BookOld
                    //    : TOCK ; //A:ASSUME: TRACE FROM DEL( p BookOld ) NEW( p BookOld ) IS FEWER THAN TOCK BYTES
                    //;
                
                    const countT cbtBuffer = TOCK ; //20151125@1605: OLD CODE FAILS ; RATHER THAN ANALYZE, JUST THROW A TOCK AT THE PROBLEM

                    const countT cbtBook0  = sizeof( book0C ) ;
                    {
                        _IO_
                        TELL( "booksC::writeF / calling tlsNewF 1" )
                        pbtScratchBuffer = tinP.tlsNewF( cbtBuffer ) ;
                        TELL( "booksC::writeF / called tlsNewF 1" )
                    }

                    ZE( byteT* , pbtBook0 ) ;
                    {
                        _IO_
                        TELL( "booksC::writeF / calling tlsNewF 2" )
                        pbtBook0  = tinP.tlsNewF( cbtBook0 ) ;
                        TELL( "booksC::writeF / called tlsNewF 2" )
                    }

                    if( !pbtScratchBuffer || !pbtBook0 ) { BLAMMO ; }
                    else
                    {
                        _IO_
                        ppBk0Scratch = bTelemetrySys
                            ? &tinP.pBk0TelemetrySysScratch
                            : bTelemetryApp
                                ? &tinP.pBk0TelemetryAppScratch
                                : &tinP.pBk0TraceScratch
                        ;

                        {
                            *ppBk0Scratch = new( 0 , tinP , pbtBook0 , cbtBook0 ) book0C( tinP , pbtScratchBuffer , cbtBuffer ) ;
                        }
                        ((bookHeadS&)**ppBk0Scratch).flags |= flBOOKhEADs_PRIORbOOKnOTcONTINUEDhERE ;
                        //if( !(    (bookHeadS&)**ppBk0Scratch    ).cbBody ) { BLAMMO ; } //U::TO FIND A BUG  20140401
                    }
                }

                offBookBackNow ++ ;
                //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(": writeF / incremented") ) ; //U:: TO FIND A BUG
                ZE( boolT , bBookNowIsDestroyed ) ;
                if( F(flagsCt) & flBOOKSc_CYCLE )
                {
                    _IO_
                    if( offBookBackNow < CbOOKsLOTS ) bBookNowIsDestroyed = 1 ;
                    else                              BOOKnOW.purgeF( tinP ) ;
                }
                else
                {
                    _IO_
                    //CONoUTrAW( "\r\n----------- DELETING BOOK ++++++++++++" ) ;
                    pBookUse = 0 ;
                    //tinP.pc Utility[ 0 ] ++ ; //U:: TO FIND A BUG
                    DELzOMBIEbOOKbACKnOWiF
                    //tinP.pc Utility[ 0 ] -- ; //U:: TO FIND A BUG
                    bBookNowIsDestroyed = 1 ;
                    //CONoUTrAW( "\r\n----------- DELETED  BOOK ------------" ) ;
                }

                {
                    _IO_
                    countT pcpWo[] = { 1 , 1 } ;
                    addF( tinP , PCPiDbOOKnOW , PCPiDbOOKlAG , pcpWo ) ;

                    //if( PCPiDbOOKnOW[ 0 ] && PCPiDbOOKnOW[ 1 ] >= TUCK ) //U::20141104@0740: TO FIND A BUG (RUNAWAY WHILE PROCESSING all.soil)
                    //{
                    //    //if( tinP.pEther ) tinP.pEther->trace F( tinP , T("booksC::writeF [idBook]: ")+TF2(PCPiDbOOKnOW[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    //}
                }

                //20171112@1617: ALWAYS USE OStEXT RATHER THAN POOL, IN ORDER TO AVOID USING POOL WHILE grabBookNow IS GRABBED IN ORDER TO AVOID NONMONOTONIC GRABBING
                //if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE )
                {
                    _IO_
                    OStEXT(   ostoName , TUCK << 1 ) ; //JUST TO MAKE SURE THAT BASE OS MAXPATH IS THE LIMITING CAPACITY CONSTRAINT
                    OStEXTA(  ostoName , postNameShort ) ;
                    OStEXTAK( ostoName , ".booksC.1.book." ) ;
                    OStEXTCF(  ostoName , *PCPiDbOOKnOW , '0' ) ;
                    for( countT offi = *PCPiDbOOKnOW ; offi ; offi -- )
                    {
                        OStEXTAK( ostoName , "." ) ;
                        OStEXTCF(  ostoName , PCPiDbOOKnOW[ offi ] , '0' ) ;
                    }
        
                    thirdC::c_strcpyIF( tinP , postBookName , ostoName ) ;
                }
                //else
                //{
                //    TN( tIdBook , "" ) ;                             //U::ELIMINATE USE OF POOL WHILE grabBookNew IS GRABBED
                //    {
                //        tIdBook = TF3(*PCPiDbOOKnOW,flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                //        TN( tDot , "." ) ;
                //        for( countT offi = *PCPiDbOOKnOW ; offi ; offi -- ) tIdBook += tDot+TF3(PCPiDbOOKnOW[offi],flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                //    }
                //
                //    TN( tName , "" ) ; tName = T(postNameShort)+T(".booksC.1.book.")+tIdBook ;
                //    PUSE.newF( tinP , LF , *(byteT**)&postBookName , tName.csF( tinP ) + 1 ) ; ___( postBookName ) ;
                //    if( postBookName ) thirdC::c_strcpyIF( tinP , postBookName , tName ) ;
                //}

                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
                //CONoUTrAW( "\r\n+++++++++++ NEWING BOOK ++++++++++++" ) ;

                if( bBookNowIsDestroyed )
                {
                    _IO_
                    NEWbOOK1bLAMMOiFcT

                    //tinP.pc Utility[ 0 ] ++ ; //U:: TO FIND A BUG
                    THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
                    {
                        _IO_
                        THREADmODE3oN(  flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
                        {
                            _IO_
                            THREADmODE3oFF( flTHREADmODE3_SUPPRESStRACING )
                            new( 0 , tinP , PBbOOKbACKnOW , SIZEOF_bookC ) bookC( tinP , TAG( TAGiDnULL ) , postBookName , idStateSpace , flagsCtBook , F(flagsCt) & flBOOKSc_WRITER ? cbBodyNew : 0 , bFill , idMemorySpace ) ;
                            THREADmODE3rESTORE
                        }
                        THREADmODE3rESTORE
                    }
                    THREADmODE3rESTORE
                    //tinP.pc Utility[ 0 ] -- ; //U:: TO FIND A BUG

                    NEWbOOK2sETfLAG

                    pBookUse = &BOOKnOW ;
                }

                //CONoUTrAW( "\r\n+++++++++++ NEWED  BOOK ------------" ) ;
                THREADmODE1rESTORE ;
                //if( !( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) ) PUSE( tinP , postBookName ) ;
                pcRef_postBookNameNoPuse2[ offEltMyHeap ] = 0 ;                                     //THIS FREES THE HEAP ALLOCATION THAT I WAS USING FOR THE NAME

                if( !POOP && ( bWroteLath || ( F(flagsP) & flBOOKScwRITE_ALLoRnONE && !bWroteAll ) ) )
                {
                    _IO_
                    if( !( F(flagsP) & flBOOKScwRITE_SETrEMAINING ) && cb1P ) flagsWrite |= flBOOK0cwRITE_CONTINUEfROMpRIOR ; //GIVE MYSELF PERMISSION TO WRITE WOTH BYTE (ON MY NEXT ITERATION)
                    else //GIVE OTHERS PERMISSION TO WRITE WOTH BYTE
                    {
                        _IO_
                        flagsT& flags = ((bookHeadS&)BOOKnOW).flags ;
        
                        for(;;)
                        {
                            _IO_
                            flagsT flagsSnap = flags ;
                            if( flagsSnap == setIfEqualsAM( flags , flagsSnap | flBOOKhEADs_PRIORbOOKnOTcONTINUEDhERE , flagsSnap ) ) break ;
                        }
                    }
                }
                THREADmODE4rESTORE
            }

            if( F(flagsP) & flBOOKScwRITE_SETrEMAINING ) break ;
        }

        if( pbtScratchBuffer )
        {
            _IO_
            if( !ppBk0Scratch ) { BLAMMO ; }

            ZE( const byteT* , pbi ) ;
            countT cbi = - 1 ;
            ZE( countT , offi ) ;
            (*ppBk0Scratch)->readF( tinP , pbi , cbi , offi ) ;
            book0C* pBk0Doomed = *ppBk0Scratch ;
                                 *ppBk0Scratch = 0 ;

            if( cbi )
            {
                _IO_
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
                writeF( tinP , pbi , cbi ) ; //THIS LINE MIGHT USE CONSTRUCT AND USE A NEW SCRATCH BOOK
                THREADmODE1rESTORE ;
            }

            DELzOMBIE( pBk0Doomed ) ;
            tinP.tlsDelF( *(byteT**)&pBk0Doomed ) ;
            tinP.tlsDelF( pbtScratchBuffer ) ;
        }

        if( processGlobal1I._grabC_pgw ) grabBookNow.ungrabF( tinP ) ;

        //if( bDeleteOutParam ) { PUSE( tinP , *(byteT**)ppcpIdAptP ) ; }
    }

    THREADmODE3rESTORE
    THREADmODE1rESTORE

    //DELzOMBIE( pInOutFrame ) ;

    return idBook ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb005.booksc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb006.booksc.readf BEGIN
#define DDNAME       "3func.360fb006.booksc.readf"
#define DDNUMB      (countT)0x360fb006
#define IDFILE      (countT)0x1466


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 pbP
 cbP
  if 0 then i read the remainder of the current book
 handleP
 flagsP
 pbQuitP
 idCursorP
*/
/**/

//20180816@1429: ENHANCE TO READ REMAINDER OF CURRENT BOOK IF !cbP

/*1*/boolT booksC::readF( tinS& tinP , const byteT*& pbP , countT& cbP , handleC& handleP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( pbP ) ;
        //__Z( cbP ) ;
        __( !tinP.pPoolUse ) ; // booksC INSTANCES CAN BE CT/DT AND WRITTEN TO EARLY AND LATE, BUT readF CAN ONLY BE CALLED WHEN PUSE EXISTS
        __( *PCPiDbOOKnOW != 1 ) ; // IDbOOK VALUES ARE UNLIMITED.  BUT ONLY LENGTH 1 IDbOOK VALUES CAN BE STORED WITHIN A handleC.  FOR MORE CAPACITY, INCREASE THE SIZE OF handleC::c2AppNote
        FV( flBOOKScrEAD , flagsP ) ;
        if( !phCursorP )
        {
            //U:: ENABLE IN PRODUCTION AFTER COMPLETING CRAFTWORK TO SUPPORT phCursorP: __( idCursorP - 1 ) ;  // DEFAULT VALUE IS 1, WHICH SHOULD NEVER BE OVERRIDDEN IF phCursorP 0 (IF 0 THEN idCursorP IS IGNORED)
        }
        else
        {
            countT idType = phCursorP->idTypeF() ;
            __( idType - ifcIDtYPEhANDLE_BOOKSrEADcURSOR ) ;
        }
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , bnu ) ;
    const boolT& bQuit = pbQuitP ? *pbQuitP : bnu ;

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    HANDLEaPPnOTEScOUNTcLASS cursor ;
    if( phCursorP )
    {
        if( !*phCursorP )
        {
            TN( tName , "" ) ; tName = T("bkCursor.")+TF3(tinP.pAdamGlobal1->idAdam,flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(".")+TF3(idCursorP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8) ;
            bookC* pBook = new( 0 , tinP , LF ) bookC( tinP , TAG( TAGiDnULL ) , tName , ifcIDsTATEsPACE_SINGLEaDAM( tinP ) , flBOOKc_WRITER | flBOOKc_PRIORbOOKnOTcONTINUEDhERE , sizeof HANDLEaPPnOTEScOUNTcLASS ) ;
            __Z( pBook ) ;
            if( !POOP )
            {
                HANDLEaPPnOTEScOUNTcLASS ze ;

                ZE( flagsT , flResult ) ;
                countT cb1 = sizeof ze ;
                pBook->writeF( tinP , flResult , (byteT*)&ze , cb1 , 0 , countTC() , flBOOK0cwRITE_ALLoRnONE ) ; //FORMATS IFF NOT YET FORMATTED
                phCursorP->osF( ifcIDtYPEhANDLE_BOOKSrEADcURSOR , (countT)pBook ) ;

                if( F(flResult) & flBOOK0cwRITErESULT_COULDnOTwRITEaLL )
                {
                    ZE( const byteT* , pbzi ) ;
                    countT cbzi = sizeof cursor ;
                    ZE( countT , offi ) ;
                    pBook->readF( tinP , pbzi , cbzi , offi ) ;
                    if( pbzi ) cursor = *(HANDLEaPPnOTEScOUNTcLASS*)pbzi ;      //WILL SILENTLY DO NOTHING IF BACKING FILE IS TOO SMALL
                }
            }
        }
        else cursor = *phCursorP ;
    }

    if( !handleP )
    {
        handleP.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
        HANDLEaPPnOTEScOUNTcLASS& c2AppNote = handleP ;

        c2AppNote = cursor ;

        if( !c2AppNote.c2 ) // 20140427@1312: IF CALLER HAS INITIALIZED c2AppNote.c2 THEN I WILL USE THEM ; THIS ENABLES CALLER TO BEGIN READING AT A POINT OTHER THAN THE BEGINNING OF THE WOTH BOOK
        {
            ZE( countT* , pcpIdBookMin ) ;
            ZE( countT* , pcpIdBookMax ) ;
            if( idStateSpace ) idBookMinMaxF( tinP , pcpIdBookMin , pcpIdBookMax , flBOOKScsELECT_null , &bQuit ) ;

            c2AppNote.c1 = 0 ;
            //c2AppNote.c2 = PCPiDbOOKnOW[ 1 ] ;  //20140831@1232: CHANGED WITHOUT ANALYSIS SO THAT NULL HANDLE WILL DEFAULT TO BEGINNING OF WOTH BOOK RATHER THAN CURRENT BOOK

            c2AppNote.c2 = pcpIdBookMin && pcpIdBookMin[ 0 ] == 1 ? pcpIdBookMin[ 1 ] : 1 ;
        }
    }

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;

    countT cbToDo = cbP ? cbP : - 1 ;
    ZE( const byteT* , pbzSnip ) ; //AFTER LOOP, WILL CONTAIN THE LATH SNIP RETRIEVED
    ZE( countT , cbzSnip ) ;
    ZE( stackC* , pStkSnip ) ; //AFTER LOOP, WILL CONTAIN PRIOR SNIPS RETRIEVED, IF ANY
    ZE( boolT , bBecameMaster ) ;
    while( cbToDo && ~handleP )  // THE ONLY PURPOSE OF LOOPING IS TO OBTAIN A BLOB SPANNED OVER MULTIPLE BOOKS; WILL BREAK OUT OF LOOP IF F(flagsP) & flBOOKScrEAD_CURRENTbOOKoNLY
    {                            //20140508@1952: LOOP NOW ALSO IS USED TO BLOCK IF I WANT TO CHANGE BOOKS AND THE CURRENT BOOK HAS A PENDING SMART POINTER
        //LOAD THE BOOK THAT I WANT TO READ FROM

        HANDLEaPPnOTEScOUNTcLASS& c2AppNote = handleP ;
        countT pcpOffIdBookWant[] = { 2 , c2AppNote.c1 , c2AppNote.c2 } ; //THIS IS AN ANACHRONISM MOTIVATED BY AN EARLIER DESIGN IN WHICH pcpOffIdBookWant POINTED TO A POOL DROP AND WAS USED AS THE osh FOR handleP

        //static countT offWantedLath ; //U:: TO FIND A BUG
        countT offWanted = pcpOffIdBookWant[ 1 ] ;
        //if( tinP.pc Utility[ 0 ] /*&& offWanted >> 0x10 != offWantedLath >> 0x10*/ )
        //{
        //    offWantedLath = offWanted ;
        //    tinP.pEther->trace F( tinP , T("booksC::readF / wanted [offInBook,idBook]:")+T("    ")+TF2(pcpOffIdBookWant[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pcpOffIdBookWant[2],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG
        //}

        boolT bWrongBook = *pcpOffIdBookWant - 1 != *PCPiDbOOKnOW || thirdC::c_memcmpIF( tinP , (byteT*)( pcpOffIdBookWant + 2 ) , (byteT*)( PCPiDbOOKnOW + 1 ) , sizeof( countT ) * *PCPiDbOOKnOW ) ;

        //if( bWrongBook )
        //{
        //    OStEXT(   ostoSay , TUCK << 2 ) ;
        //    OStEXTAK( ostoSay , "\r\nbooksC::readF/ wants book [idThread,postThreadName,this,idBookWant,idBookHave]:    " ) ;
        //    OStEXTC(  ostoSay , tinP.monitor.idThread , 0 ) ;
        //    OStEXTAK( ostoSay , "    " ) ;
        //    OStEXTA(  ostoSay , tinP.postThreadName ) ;
        //    OStEXTAK( ostoSay , "    " ) ;
        //    OStEXTC(  ostoSay , this , 0 ) ;
        //    OStEXTAK( ostoSay , "    " ) ;
        //    OStEXTC(  ostoSay , pcpOffIdBookWant[ 2 ] , 0 ) ;
        //    OStEXTAK( ostoSay , "    " ) ;
        //    OStEXTC(  ostoSay , PCPiDbOOKnOW[ 1 ] , 0 ) ;
        //    OStEXTAK( ostoSay , "\r\n" ) ;
        //
        //    CONoUTrAW( ostoSay ) ;
        //}

        //20180620@2009: ELIMINATED WITHOUT ANALYSIS: cRef MIGHT WELL BE NONZE AND THAT IS TAKEN CARE OF BY cKeepInactive AND BY DT'OR
        //20180707@0801: RESTORED: MUST DO THIS NOW BECAUSE BLOCKING DURING DT WILL RESULT IN DEADLOCK SINCE I HAVE GRABBED grabBookNow
        if( bWrongBook && ((bookHeadS&)BOOKnOW).cRef )
        {
            grabBookNow.ungrabF( tinP ) ;
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            {
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                ++ s ; thirdC::dosSleepWinkIF( tinP ) ; // THIS SHOULD BE LONG ENOUGH TO MAKE IT UNLIKELY THAT I WILL GET LUCKY AND "GET IN" IF ANOTHER THREAD IS ACTIVELY READING THE CURRENT BOOK
            }
            THREADmODE1rESTORE
            grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;
        
            if( bQuit ) break ;
            else        continue ;
        }

        //if( bWrongBook ) { LOGrAW5( "[offBookBackNow,bWrongBook]:    " , offBookBackNow , "    " , bWrongBook , "\r\n" ) ; }

        if( bWrongBook )
        {
            ZE( boolT , bFound ) ;
            {
                countT save = offBookBackNow ;
                countT cDo = CbOOKsLOTS - 1 ; // "- 1" BECAUSE ALREADY KNOW THAT CURRENT BOOK IS WRONG
                while( cDo -- )
                {
                    offBookBackNow ++ ;
                    if( PCPiDbOOKnOW && *pcpOffIdBookWant - 1 == *PCPiDbOOKnOW && !thirdC::c_memcmpIF( tinP , (byteT*)( pcpOffIdBookWant + 2 ) , (byteT*)( PCPiDbOOKnOW + 1 ) , sizeof( countT ) * *PCPiDbOOKnOW ) )
                    {
                        //LOGrAW3( "found! setting [offBookBackNow]:    " , offBookBackNow , "\r\n" ) ;
                        bFound = 1 ;
                        break ;
                    }
                }

                if( !bFound ) offBookBackNow = save ;
            }

            if( !bFound )
            {
                offBookBackNow ++ ;
                DELzOMBIEbOOKbACKnOWiF
                PUSE( tinP , *(byteT**)&PCPiDbOOKnOW ) ;

                PUSE.newF( tinP , LF , *(byteT**)&PCPiDbOOKnOW , sizeof( countT ) * *pcpOffIdBookWant ) ; ___( PCPiDbOOKnOW ) ;
                *PCPiDbOOKnOW = *pcpOffIdBookWant - 1 ;
                thirdC::c_memcpyIF( tinP , (byteT*)( PCPiDbOOKnOW + 1 ) , (byteT*)( pcpOffIdBookWant + 2 ) , sizeof( countT ) * ( *pcpOffIdBookWant - 1 ) ) ;

                TN( tIdBook , "" ) ;
                {
                    tIdBook = TF3(*PCPiDbOOKnOW,flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                    TN( tDot , "." ) ;
                    for( countT offi = *PCPiDbOOKnOW ; offi ; offi -- ) tIdBook += tDot+TF3(PCPiDbOOKnOW[offi],flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                }

                TN( tName , "" ) ; tName = T(postNameShort)+T(".booksC.1.book.")+tIdBook ;

                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;

                //U:: BUG: THIS WILL CREATE A ZOMBIE POINTER TO book0C; REWRITE TO AVOID DELETING THE BOOK
                //20181107@1116: THIS BUG WAS WORKED AROUND BY EDITING OTHER CODE SO THAT THIS CODE ISN'T EXERCIZED.  THIS CODE IS INCORRECT.  CORRECT CODE WILL AVOID DELETING A bookC AND THEN ATTEMPTING TO UNDO THAT DELETION

                THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
                if( F(flagsP) & flBOOKScrEAD_STILLhUNGRYiSoK && !bookC::bFileExistsIF( tinP , *tinP.pEther , tName , idStateSpace , idMemorySpace ) )
                {
                    cbToDo = 0 ;
                    PUSE( tinP , *(byteT**)&PCPiDbOOKnOW ) ; //AT THE BEGINNING OF THIS BLOCK, I DELETED THIS BOOK.  CODE THAT LOOKS AT THE BOOK INSTANCES MUST CHECK FOR !PCPiDbOOKnOW TO AVOID ACCESSING A DELETED INSTANCE.  RACE CONDITION EXIST IF MULTIPLE THREADS ARE READING, BUT MULTITHREADED READING PROBABLY IS UNSUPPORTABLE ANYWAY
                    offBookBackNow -- ;
                }
                else
                {
                    CONoUTrAW( "opening " ) ;
                    CONoUTrAW( tName ) ;
                    CONoUTrAW( "\r\n" ) ;

                    NEWbOOK1bLAMMOiFcT
                    new( 0 , tinP , PBbOOKbACKnOW , SIZEOF_bookC ) bookC( tinP , TAG( TAGiDnULL ) , tName , idStateSpace , flagsCtBook & ~( F(flBOOKSc_WRITER) ) , 0 , bFill , idMemorySpace ) ; // A:ASSUME: CALLER ALWAYS WANTS TO READ THE NEW BOOK ; TO SUPPORT A WRITER, A FLAG CAN BE DEFINED TO CHANGE THIS BEHAVIOR
                    NEWbOOK2sETfLAG
                }
                THREADmODE1rESTORE ;
                THREADmODE3rESTORE
            }
        }

        if( cbToDo )
        {
            bookHeadS& head = BOOKnOW ;

            if( cbToDo == - 1 )                                             // -1 INDICATES THAT CALLER WANTS ME TO RETURN THE REMAINDER OF THE BOOK
            {
                cbToDo = head.cbUsed - head.cbFill - c2AppNote.c1 ;
                if( !cbToDo ) break ;   // NOTHING MORE TO READ SO WE'RE DONE
            }

            //20181107@1054: REMOVED cbToDo == -1 AS ALTERNATIVE CONDITION IN NEXT LINE BECAUSE INCONSISTENT WITH SEMANTIC COMMENT
            if( head.cbUsed == head.cbBody && c2AppNote.c1 >= head.cbUsed - head.cbFill )                                           // (THIS FUNCTIONALITY IS DEFINITELY NEEDED BY tmEatTelemetryF) NO MORE BYTES ARE AVAILABLE IN THE CURRENT BOOK AND THERE NEVER WILL BE BECAUSE THE CURRENT BOOK IS FILLED TO THE BRIM
            {
                __NZ( head.cbUsed < c2AppNote.c1 ) ;
                
                pcpOffIdBookWant[ 1 ] = 0 ;     //THE NEXT READ SHOULD BE AT THE BEGINNING OF THE NEXT BOOK
                pcpOffIdBookWant[ 2 ] ++ ;
                __Z( pcpOffIdBookWant[ 2 ] ) ; // ONLY LENGTH 1 IDbOOK STRINGS ARE ALLOWED.  FOR MORE CAPACITY, EDIT THIS CODE AND INCREASE THE SIZE OF handleC::c2AppNote

                handleP.closeIfF() ;

                handleP.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
                HANDLEaPPnOTEScOUNTcLASS& c2AppNote = handleP ;
                c2AppNote.c1 = pcpOffIdBookWant[ 1 ] ;
                c2AppNote.c2 = pcpOffIdBookWant[ 2 ] ;

                if( phCursorP && ~*phCursorP )          //PSEUDOdUPLICATEcODE: 360fb006 360fb006
                {
                    bookC* pBook = (bookC*)phCursorP->osF( ifcIDtYPEhANDLE_BOOKSrEADcURSOR ) ;
                    ZE( flagsT , flResult ) ;
                    countT cb1 = sizeof c2AppNote ;
                    pBook->writeF( tinP , flResult , (byteT*)&c2AppNote , cb1 , 0 , countTC() , flBOOK0cwRITE_ALLoRnONE | flBOOK0cwRITE_PURGEiFfULL ) ;
                }
            }
            else
            {
                // MOVE A PRIOR SNIP OUT OF THE WAY
                if( pbzSnip )
                {
                    __Z( cbzSnip ) ;
                    if( !pStkSnip ) (*tinP.pEther)( tinP , pStkSnip , TAG( TAGiDnULL ) , flSTACKc_FIFO | flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_XRAY , ifcSTACKtYPE_PTR_byteT ) ; ___( pStkSnip ) ;
                    __Z( pStkSnip ) ;

                    if( !POOP )
                    {
                        ZE( byteT* , pbw ) ;
                        PUSE.newF( tinP , LF , *(byteT**)&pbw , sizeof( countT ) + cbzSnip ) ; ___( pbw ) ;
                        __Z( pbw ) ;

                        if( !POOP )
                        {
                            *(countT*)pbw = cbzSnip ;
                            thirdC::c_memcpyIF( tinP , pbw + sizeof( countT ) , pbzSnip , cbzSnip ) ;
                            *pStkSnip << pbw ; pbw = 0 ;
                        }
                    }

                    pbzSnip = 0 ;
                    cbzSnip = 0 ;
                }
                __NZ( pbzSnip ) ;
                __NZ( cbzSnip ) ;

                cbzSnip = cbToDo ;
                BOOKnOW.readF( tinP , pbzSnip , cbzSnip , c2AppNote.c1 ) ;

                //IF READ SUCCEEDED THEN ADVANCE PERSISTENT CURSOR *phCursorP
                if( pbzSnip && phCursorP && ~*phCursorP )          //PSEUDOdUPLICATEcODE: 360fb006 360fb006
                {
                    bookC* pBook = (bookC*)phCursorP->osF( ifcIDtYPEhANDLE_BOOKSrEADcURSOR ) ;
                    ZE( flagsT , flResult ) ;
                    countT cb1 = sizeof c2AppNote ;
                    pBook->writeF( tinP , flResult , (byteT*)&c2AppNote , cb1 , 0 , countTC() , flBOOK0cwRITE_ALLoRnONE | flBOOK0cwRITE_PURGEiFfULL ) ;
                }

                if( !cbzSnip || F(flagsP) & flBOOKScrEAD_CURRENTbOOKoNLY ) cbToDo  = 0       ;
                else                                                       cbToDo -= cbzSnip ;
            }
        }
    }

    boolT bCallerMustDelete = !!pStkSnip ;
    if( !bCallerMustDelete )
    {
        pbP = pbzSnip ;
        cbP = cbzSnip ;
    }
    else if( !bQuit )
    {
        __NZ( F(flagsP) & flBOOKScrEAD_CURRENTbOOKoNLY ) ;

        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;

        countT cbaAll = cbzSnip ;
        do
        {
            byteT* pbw = (byteT*)pStkSnip->downF( tinP , hWalk ) ;
            cbaAll += *(countT*)pbw ;
        }
        while( ~hWalk ) ;

        __NZ( pbP ) ;
        PUSE.newF( tinP , LF , *(byteT**)&pbP , cbaAll + 1 ) ; ___( pbP ) ;
        __Z( pbP ) ;
        cbP = cbaAll ; //20131204@1219: ADDED WITHOUT ANALYSIS

        if( !POOP )
        {
            byteT* pbo = (byteT*)pbP ;
            while( *pStkSnip )
            {
                ZE( byteT* , pbw ) ;
                *pStkSnip >> pbw ;
                thirdC::c_memcpyIF( tinP , pbo , pbw + sizeof( countT ) , *(countT*)pbw ) ; pbo += *(countT*)pbw ;
                PUSE( tinP , pbw ) ;
            }

            if( pbzSnip && cbzSnip ) { thirdC::c_memcpyIF( tinP , pbo , pbzSnip , cbzSnip ) ; pbo += cbzSnip ; }
            *pbo = 0 ;
        }

        (*tinP.pEther)( tinP , pStkSnip ) ;
    }
    else
    {
        while( *pStkSnip )
        {
            ZE( byteT* , pbw ) ;
            *pStkSnip >> pbw ;
            PUSE( tinP , pbw ) ;
        }

        (*tinP.pEther)( tinP , pStkSnip ) ;  //20181210@1316: ADDED WITHOUT ANALYSIS
    }

    if( F(flagsP) & flBOOKScrEAD_INCREMENTrEFERENCEcOUNTiF && !bCallerMustDelete )    //20181210@1318: ADDED "&& !bCallerMustDelete" BECAUSE I AM RETURNING A pbP THAT POINTS TO A poolC DROP RATHER THAN INTO A bookC INSTANCE
    {
        bookHeadS& head = BOOKnOW ;
    
        if( !tinP.pEther )
        {
            countT cRefWas = incv02AM( head.cRef ) ;
            if( cRefWas == -1 ) { BLAMMO ; }
        }
        else
        {
            countT* pcRef = &head.cRef ;
            countT cRefWas = incv02AM( *pcRef ) ;
    
            //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 )
            //{
            //    OStEXT(   ostoSay , TUCK << 2 ) ;
            //    OStEXTAK( ostoSay , "booksC [this,pcRef,cRefWas]:    " ) ;
            //    OStEXTCmIN( ostoSay , this , 8 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , pcRef , 0 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , cRefWas , 0 ) ;
            //    OStEXTAK( ostoSay , " +" ) ;
            //
            //    etherC::etRockIF( tinP ).traceF( tinP , (const strokeS* const)(const osTextT* const)ostoSay , flTRACE_LOOP | flTRACE_PARAMETERiSoStEXT ) ;
            //}

            if( cRefWas == -1 ) { BLAMMO ; }
        }
    }

    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE

    return bCallerMustDelete ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb006.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb007.booksc.writef BEGIN
#define DDNAME       "3func.360fb007.booksc.writef"
#define DDNUMB      (countT)0x360fb007
#define IDFILE      (countT)0x1467


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
use me when the application code will not know and cannot calculate cb1P+cb2P so that cb1P+cb2P must be stored within hJotP
*/
/**/

/*1*/countT booksC::writeF( tinS& tinP , handle0111C& hJotP , const byteT* const pb1P , const countT cb1P , const byteT* const pb2P , const countT cb2P , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    countT idBook = writeF( tinP , pb1P , cb1P , pb2P , cb2P , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ALLOWoDDlENGTH | flagsP , &hw ) ;

    //{
    //    const HANDLEaPPnOTEScOUNTcLASS& a = hw ;
    //    countT pcp[] = { 2 , a.c1 , a.c2 } ;
    //
    //    TN( tcr , "\r\n" ) ;
    //    CONoUTrAW( TF2(pcp,flFORMAT_PREFIXED)+tcr ) ;
    //}

    hw >> hJotP ;

    THREADmODE3rESTORE

    return idBook ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb007.booksc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb008.booksc.readf BEGIN
#define DDNAME       "3func.360fb008.booksc.readf"
#define DDNUMB      (countT)0x360fb008
#define IDFILE      (countT)0x1468


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT booksC::readF( tinS& tinP , const byteT*& pbP , countT& cbP , handle0111C& hJotP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{








    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    hw.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
    hw << hJotP ;



    cbP = hw.cNoteF() ;
    boolT bCallerMustDelete = readF( tinP , pbP , cbP , hw , flagsP , pbQuitP , phCursorP , idCursorP ) ;







    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE

    return bCallerMustDelete ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb008.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb009.booksc.writef BEGIN
#define DDNAME       "3func.360fb009.booksc.writef"
#define DDNUMB      (countT)0x360fb009
#define IDFILE      (countT)0x1469


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
use me when the application code knows or can calculate cb1P+cb2P so that cb1P+cb2P need not be stored within hJotP
*/
/**/

/*1*/countT booksC::writeF( tinS& tinP , handle0011C& hJotP , const byteT* const pb1P , const countT cb1P , const byteT* const pb2P , const countT cb2P , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    countT idBook = writeF( tinP , pb1P , cb1P , pb2P , cb2P , flBOOKScwRITE_ALLoRnONE | flBOOKScwRITE_ALLOWoDDlENGTH | flagsP , &hw ) ;

    //{
    //    const HANDLEaPPnOTEScOUNTcLASS& a = hw ;
    //    countT pcp[] = { 2 , a.c1 , a.c2 } ;
    //
    //    TN( tcr , "\r\n" ) ;
    //    CONoUTrAW( TF2(pcp,flFORMAT_PREFIXED)+tcr ) ;
    //}

    hw >> hJotP ;

    THREADmODE3rESTORE

    return idBook ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb009.booksc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00a.booksc.readf BEGIN
#define DDNAME       "3func.360fb00a.booksc.readf"
#define DDNUMB      (countT)0x360fb00a
#define IDFILE      (countT)0x146a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT booksC::readF( tinS& tinP , const byteT*& pbP , countT& cbP , handle0011C& hJotP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{








    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    hw.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
    hw << hJotP ;




    boolT bCallerMustDelete = readF( tinP , pbP , cbP , hw , flagsP , pbQuitP , phCursorP , idCursorP ) ;







    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE

    return bCallerMustDelete ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00a.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00b.booksc.setbooknameidf BEGIN
#define DDNAME       "3func.360fb00b.booksc.setbooknameidf"
#define DDNUMB      (countT)0x360fb00b
#define IDFILE      (countT)0x146b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
*/
/**/

/*1*/voidT booksC::setBookNameIdF( tinS& tinP , const flagsT flagsP , const countT* const pcpIdBookWantP , const boolT* pbQuitP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flBOOKScsELECT , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    setPcpIdBookWantF( tinP , flagsP , pcpIdBookWantP , pbQuitP ) ;

    thirdC::c_memcpyIF( tinP , (byteT*)PCPiDbOOKnOW , (byteT*)pcpIdBookScratch1 , sizeof( countT ) * ( 1 + *pcpIdBookScratch1 ) ) ;

    OStEXT(   ostoName , TUCK << 1 ) ; //JUST TO MAKE SURE THAT BASE OS MAXPATH IS THE LIMITING CAPACITY CONSTRAINT
    OStEXTA(  ostoName , postNameShort ) ;
    OStEXTAK( ostoName , ".booksC.1.book." ) ;
    OStEXTCF( ostoName , *PCPiDbOOKnOW , '0' ) ;
    for( countT offi = *PCPiDbOOKnOW ; offi ; offi -- )
    {
        OStEXTAK( ostoName , "." ) ;
        OStEXTCF( ostoName , PCPiDbOOKnOW[ offi ] , '0' ) ;
    }

    thirdC::c_strcpyIF( tinP , postBookNameScratch , ostoName ) ;

    THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00b.booksc.setbooknameidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00c.booksc.selectbookf BEGIN
#define DDNAME       "3func.360fb00c.booksc.selectbookf"
#define DDNUMB      (countT)0x360fb00c
#define IDFILE      (countT)0x146c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
*/
/**/

/*1*/voidT booksC::selectBookF( tinS& tinP , const flagsT flagsP , const countT* const pcpIdBookWantP , const boolT* pbQuitP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( *PCPiDbOOKnOW ) ;
        if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE )
        {
            __( tinP.monitor.idThread != 1 ) ; //I WILL USE STATIC STORAGE SO WILL NOT BE THREAD SAFE; INTENDED ONLY FOR CT/DT OF INSTANCES IN STATIC STORAGE
        }
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    setPcpIdBookWantF( tinP , flagsP , pcpIdBookWantP , pbQuitP ) ;

    countT offBookBackNowSave = offBookBackNow ;
    for( offBookBackNow = 0 ; offBookBackNow < CbOOKsLOTS ; offBookBackNow ++ )
    {
        if
        (
            *PCPiDbOOKnOW < *pcpIdBookScratch1
            ||
            *PCPiDbOOKnOW > *pcpIdBookScratch1
            ||
            thirdC::c_memcmpIF( tinP , (byteT*)( PCPiDbOOKnOW + 1 ) , (byteT*)( pcpIdBookScratch1 + 1 ) , *PCPiDbOOKnOW * sizeof( countT ) )
        )
        continue ;

        break ;
    }

    if( offBookBackNow < CbOOKsLOTS )    // IF FOUND
    {
        //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(": selectBookF / selected (found)") ) ; //U:: TO FIND A BUG

        BOOKnOW.flagsCtRefF() &= ~( F(flBOOKc_WRITER) ) ; // A:ASSUME: CALLER ALWAYS WANTS TO READ THE NEW BOOK ; TO SUPPORT A WRITER, A FLAG CAN BE DEFINED TO CHANGE THIS BEHAVIOR
    }
    else
    {
        offBookBackNow = ++ offBookBackNowSave ;

        //if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": ")+T(postNameShort)+T(": ")+TF2(offBookBackNow,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(": selectBookF / selected (not found so incremented)") ) ; //U:: TO FIND A BUG

        DELzOMBIEbOOKbACKnOWiF

        setBookNameIdF( tinP , flagsP , pcpIdBookScratch1 ) ;

        flagsT flagsCtRead = flagsCtBook & ~( F(flBOOKSc_WRITER) ) ; // A:ASSUME: CALLER ALWAYS WANTS TO READ THE NEW BOOK ; TO SUPPORT A WRITER, A FLAG CAN BE DEFINED TO CHANGE THIS BEHAVIOR

        NEWbOOK1bLAMMOiFcT
        THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
        new( 0 , tinP , PBbOOKbACKnOW , SIZEOF_bookC ) bookC( tinP , TAG( TAGiDnULL ) , postBookNameScratch , idStateSpace , flagsCtRead , 0 , bFill , idMemorySpace ) ;
        THREADmODE1rESTORE ;
        THREADmODE3rESTORE

        NEWbOOK2sETfLAG
    }

    THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00c.booksc.selectbookf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00d.booksc.cbeachbookf BEGIN
#define DDNAME       "3func.360fb00d.booksc.cbeachbookf"
#define DDNUMB      (countT)0x360fb00d
#define IDFILE      (countT)0x146d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT booksC::cbEachBookF( tinS& tinP , countT*& pcpIdBookSizePairsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pcpIdBookSizePairsP ) ;
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    if( idStateSpace )
    {
        staqC stqIdBookCb( tinP , 2 * sizeof( countT ) , 0x20 ) ;
        TN( tBefore , ".booksC.1.book." ) ;
        TN( tAfter  , ".bookC" ) ;
        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
        TN( tDot , "." ) ;
        fileNameC fnLike( tinP , *tinP.pEther , psttFindLike ) ;
        patternC pat( tinP , *tinP.pEther , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

        handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
        do
        {
            ZE( infoFileS* , pInfo ) ;
            tinP.pEtScratch->diskFindFileOrDirF( tinP , pInfo , hFind , fnLike.pathF() , &pat ) ; ___( pInfo ) ;
            if( pInfo && !( F(pInfo->flags) & flFILEaTTR_DIRECTORY ) )
            {
                ZE( strokeS* , psttw ) ;
                countT idf = 1 ;
                tinP.pEther->strSubstringF( tinP , psttw , idf , sttq , tBefore , pInfo->psttIfoName ) ; ___( psttw ) ;
                tinP.pEther->delF( tinP , psttw ) ;
                tinP.pEther->strSubstringF( tinP , psttw , idf , sttq , tAfter , pInfo->psttIfoName ) ; ___( psttw ) ;

                ZE( strokeS* , pstt1w ) ;
                countT cWords = tinP.pEther->strWordsOldF( tinP , pstt1w , psttw , sttq , tDot ) ; ___( pstt1w ) ;
                tinP.pEther->delF( tinP , psttw ) ;

                ZE( countT* , pcpIdLook ) ;
                PUSE.newF( tinP , LF , *(byteT**)&pcpIdLook , sizeof( countT ) * cWords ) ; ___( pcpIdLook ) ;
                if( pcpIdLook )
                {
                    countT* pco = pcpIdLook ;

                    FORsTRINGSiN1( pstt1w )
                    {
                        *pco = tinP.pEther->strDigitsToSCountF( tinP , psttc1 , 0 , 1 ) ;
                        if( pco == pcpIdLook ) pco = pcpIdLook + cWords - 1 ;
                        else                       pco -- ;
                    }
                }
                tinP.pEther->delF( tinP , pstt1w ) ;

                TN( tIdLook , "" ) ;
                {
                    tIdLook = TF3(*pcpIdLook,flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                    TN( tDot , "." ) ;
                    for( countT offi = *pcpIdLook ; offi ; offi -- ) tIdLook += tDot+TF3(pcpIdLook[offi],flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,8) ;
                }
        
                TN( tName , "" ) ; tName = T(postNameShort)+T(".booksC.1.book.")+tIdLook ;

                THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
                bookC* pLook = new( 0 , tinP , LF ) bookC( tinP , TAG( TAGiDnULL ) , tName , idStateSpace , flBOOKc_null , 0 , bFill , idMemorySpace ) ; ___( pLook ) ;
                THREADmODE1rESTORE ;
                THREADmODE3rESTORE

                if( pLook && pcpIdLook )
                {
                    const bookHeadS& head = *pLook ;

                    countT pc2[] = { pcpIdLook[ 1 ] , head.cbUsed } ;
                    stqIdBookCb << (byteT*)pc2 ;

                    //CONoUTrAW3( T("book: \"")+tName+T("\" [cbUsed]: ") , head.cbUsed , "\r\n" ) ;
                }
                tinP.pEther->delF( tinP , pcpIdLook ) ;
                DEL( pLook ) ;
            }
            DEL( pInfo ) ;
        }
        while( ~hFind ) ;

        countT cBooks = stqIdBookCb ;
        if( cBooks )
        {
            tinP.pEther->newF( tinP , LF , pcpIdBookSizePairsP , 1 + ( cBooks << 1 ) ) ; ___( pcpIdBookSizePairsP ) ;
            if( pcpIdBookSizePairsP )
            {
                *pcpIdBookSizePairsP = cBooks ;

                countT* pcc = pcpIdBookSizePairsP + 1 ;
                pcc += cBooks - 1 << 1 ;

                while( stqIdBookCb ) { stqIdBookCb >> (byteT*)pcc ; pcc -= 2 ; }
            }
        }
    }

    THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00d.booksc.cbeachbookf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00e.booksc.readf BEGIN
#define DDNAME       "3func.360fb00e.booksc.readf"
#define DDNUMB      (countT)0x360fb00e
#define IDFILE      (countT)0x146e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT booksC::readF( tinS& tinP , pageC& pageP , handleC& handleP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( (const byteT*)pageP ) ;
        __Z( (countT)pageP ) ;
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;





    ZE( const byteT* , pbz ) ;
    countT cbz = pageP ;

    boolT bCallerMustDelete = readF( tinP , pbz , cbz , handleP , flagsP | flBOOKScrEAD_INCREMENTrEFERENCEcOUNTiF , pbQuitP , phCursorP , idCursorP ) ;

    //tinP.pEther->trace F( tinP , T("[idBook,cRef]:    ")+TF2((pcpIdBookF())[1],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cRefBookF(),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

    if( !pbQuitP || !*pbQuitP ) pageP = pageC( tinP , *this , bCallerMustDelete ? 0 : &((bookHeadS&)BOOKnOW).cRef , pbz , cbz , bCallerMustDelete ? flPAGEc_DELETE : flPAGEc_null ) ; //U: 20181210@1339: CONJ: BUG: IF flPAGEc_DELETE THEN COPY CONSTRUCTOR SHOULD COPY THE pbz SO THAT EACH INSTANCE CAN DELETE IT

    if( !bCallerMustDelete )
    {
        countT* pcRef = &((bookHeadS&)BOOKnOW).cRef ;
        countT cRefWas = decv02AM( *pcRef ) ;

        //if( tinP.pEther && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 )
        //{
        //    OStEXT(     ostoSay , TUCK << 2 ) ;
        //    OStEXTAK(   ostoSay , "booksC [this,pcRef,cRefWas]:    " ) ;
        //    OStEXTCmIN( ostoSay , this , 8 ) ;
        //    OStEXTAK(   ostoSay , "    " ) ;
        //    OStEXTC(    ostoSay , pcRef , 0 ) ;
        //    OStEXTAK(   ostoSay , "    " ) ;
        //    OStEXTC(    ostoSay , cRefWas , 0 ) ;
        //    OStEXTAK(   ostoSay , " -" ) ;
        //
        //    tinP.pEther->trace F( tinP , (const strokeS* const)(const osTextT* const)ostoSay , flTRACE_LOOP | flTRACE_PARAMETERiSoStEXT ) ;
        //}

        if( cRefWas == 1 ) { BLAMMO ; }                             //SHOULD BE IMPOSSIBLE SINCE pageP NOW CONTAINS A REFERENCE
    }

    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00e.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00f.booksc.readf BEGIN
#define DDNAME       "3func.360fb00f.booksc.readf"
#define DDNUMB      (countT)0x360fb00f
#define IDFILE      (countT)0x146f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT booksC::readF( tinS& tinP , pageC& pageP , handle0111C& hJotP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{








    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    hw.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
    hw << hJotP ;

    pageC page( tinP , *this , hw.cNoteF() ) ;
    pageP = page ;

                              readF( tinP , pageP , hw , flagsP , pbQuitP , phCursorP , idCursorP ) ;







    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb00f.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb010.booksc.readf BEGIN
#define DDNAME       "3func.360fb010.booksc.readf"
#define DDNUMB      (countT)0x360fb010
#define IDFILE      (countT)0x1470


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT booksC::readF( tinS& tinP , pageC& pageP , handle0011C& hJotP , const flagsT flagsP , const boolT* pbQuitP , handleC* const phCursorP , const countT idCursorP )/*1*/
{








    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    grabBookNow.grabF( tinP , TAG( TAGiDnULL ) ) ;

    handleC hw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
    hw.osF( ifcIDtYPEhANDLE_BOOKS , FINGERnEG_HANDLEbOOKSjOT ) ;
    hw << hJotP ;




                              readF( tinP , pageP , hw , flagsP , pbQuitP , phCursorP , idCursorP ) ;







    grabBookNow.ungrabF( tinP ) ;

    THREADmODE3rESTORE


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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb010.booksc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb011.booksc.setf BEGIN
#define DDNAME       "3func.360fb011.booksc.setf"
#define DDNUMB      (countT)0x360fb011
#define IDFILE      (countT)0x1471


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
warning: i work iff idStateSpace (if backed by disk)
arguments
 tinP
*/
/**/

/*1*/voidT booksC::setF( tinS& tinP , const byteT bFillP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    ZE( countT* , pcpIdBookMin ) ;
    ZE( countT* , pcpIdBookMax ) ;
    if( idStateSpace ) idBookMinMaxF( tinP , pcpIdBookMin , pcpIdBookMax , flBOOKScsELECT_null , 0 ) ;

    if( pcpIdBookMin[ 0 ] == 1 && pcpIdBookMax[ 0 ] == 1 && pcpIdBookMin[ 1 ] <= pcpIdBookMax[ 1 ] ) while( pcpIdBookMin[ 1 ] <= pcpIdBookMax[ 1 ] )
    {
        selectBookF( tinP , flBOOKScsELECT_null , pcpIdBookMin ) ;
        BOOKnOW.setF( tinP , bFillP ) ;
        pcpIdBookMin[ 1 ] ++ ;
    }

    if( !( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) )
    {
        PUSE( tinP , *(byteT**)&pcpIdBookMin ) ;
        PUSE( tinP , *(byteT**)&pcpIdBookMax ) ;
    }

    THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb011.booksc.setf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb012.booksc.idbookminmaxf BEGIN
#define DDNAME       "3func.360fb012.booksc.idbookminmaxf"
#define DDNUMB      (countT)0x360fb012
#define IDFILE      (countT)0x1472


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
*/
/**/

/*1*/voidT booksC::idBookMinMaxF( tinS& tinP , countT*& pcpIdBookMinP , countT*& pcpIdBookMaxP , const flagsT flagsP , const boolT* pbQuitP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE )
        {
            __( tinP.monitor.idThread != 1 ) ; //I WILL USE STATIC STORAGE SO WILL NOT BE THREAD SAFE; INTENDED ONLY FOR CT/DT OF INSTANCES IN STATIC STORAGE
            FV( flBOOKScsELECT , flagsP ) ;
        }
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    if( idStateSpace )
    {                                                               //U:: ENUMERATE SHARED MEMORY RATHER THAN BACKING FILES
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        if( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) //BOTH FLAVORS ARE RETAINED IN ORDER TO HAVE TRUE UNLIMITED CAPACITY WHEN PUSE EXISTS
        {
            ZE( countT , costPrefix ) ;
            {
                OStEXT( ostoPrefix , TUCK << 1 ) ;
                {
                    poopC poop ;
                    SCOOP

                    osTextT postHome[ TUCK << 1 ] ;
                    thirdC::diskFindHomeIF( tinP , postHome , sizeof postHome , "ideafarm" ) ;
                    if( POOP ) { BLAMMO ; }

                    OStEXTA(  ostoPrefix , postHome ) ;                                                                         thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\ephemeral" ) ;                                                                    thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\backed.up.daily" ) ;                                                              thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\domains" ) ;                                                                      thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\com" ) ;                                                                          thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\ideafarm" ) ;                                                                     thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\ipdos" ) ;                                                                        thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\memorySpaces" ) ;                                                                 thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\" ) ;
                    OStEXTA(  ostoPrefix , thirdC::postUserNameIF() ) ;                                                         thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\" ) ;
                    OStEXTCF( ostoPrefix , idMemorySpace ? idMemorySpace : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;           thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\stateSpaces" ) ;                                                                  thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    OStEXTAK( ostoPrefix , "\\" ) ;
                    OStEXTC(  ostoPrefix , idStateSpace , 0 ) ;                                                                 thirdC::dosCreateDirIF( tinP , ostoPrefix ) ;
                    POOPR

                    OStEXTAK( ostoPrefix , "\\" ) ;
                    OStEXTA(  ostoPrefix , postNameShort ) ;
                    OStEXTAK( ostoPrefix , ".booksC.1.book." ) ;
                }
                costPrefix = ostoPrefix.costF() ;

                OStEXT(   ostoLike , TUCK << 2 ) ;
                OStEXTA(  ostoLike , ostoPrefix ) ;
                OStEXTAK( ostoLike , "*" ) ;

                thirdC::c_strcpyIF( tinP , postFindLike , ostoLike ) ;
            }

            __( !!tinP.pPoolUse ) ; //subtractF TESTS THIS AND WILL RETURN A POINTER THAT I DO NOT EXPECT IF IT IS TRUE

            const countT cbToCopy = ccMaxIdBook * sizeof( countT ) ;
            if( cbToCopy > ccMaxIdBook * sizeof( countT ) ) *(countT*)&cbToCopy = ccMaxIdBook * sizeof( countT ) ;
            for(;;)
            {
                handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                do
                {
                    osTextT postName[ TUCK << 1 ] ;
                    postName[ 0 ] = 0 ;
                    thirdC::dosFindFileOrDirSimpleIF( tinP , postName , sizeof postName , hFind , postFindLike ) ;
                    //if( tinP.pEther ) tinP.pEther->trace F( tinP , T("idBookMinMazF inspecting [postName]:    ")+T(postName) ) ;
                    if( !postName[ 0 ] )
                    {
                        __( ~hFind ) ;
                        break ;
                    }

                    if( F(flagsP) & flBOOKScsELECT_PURGE )
                    {
                        thirdC::dosDeleteIF( tinP , postName ) ;
                        if( POOP ) { POOPR ; }
                    }
                    else
                    {
                        osTextT* postv = postName + costPrefix ; // EXAMPLE: "00000001.0000001c.bookC"
                        //CONoUTrAW( "found pcp value \"" ) ;
                        //CONoUTrAW( postv ) ;
                        //CONoUTrAW( "\"\r\n" ) ;

                        ZE( countT , cWords ) ;
                        if( *postv )
                        {
                            const osTextT* posti = postv ;
                            do
                            {
                                posti = thirdC::c_strstrIF( tinP , posti , "." ) ;
                                if( posti )
                                {
                                    posti ++ ;
                                    cWords ++ ;
                                }
                            }
                            while( posti ) ;
                        }

                        {                                       // SET pcpIdBookScratch1 FROM THE FILE NAME
                            const osTextT* posti = postv ;
                            ZE( countT , offo ) ;
                            ZE( osTextT* , poste ) ;
                            countT cToDo = cWords ;
                            while( cToDo -- )
                            {
                                poste = thirdC::c_strstrIF( tinP , posti , "." ) ;
                                if( !poste ) break ; //SHOULD NEVER OCCUR

                                *poste = 0 ;                                // EXAMPLE: "00000001"
                                pcpIdBookScratch1[ offo ] = thirdC::c_atoiForeignIF( posti ) ;
                                posti = poste + 1 ;

                                if( !offo ) offo = cWords - 1 ;
                                else        offo -- ;
                            }
                        }

                        if( !pcpIdBookMinP )
                        {
                            thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookScratchMin , (byteT*)pcpIdBookScratch1 , cbToCopy ) ;
                            thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookScratchMax , (byteT*)pcpIdBookScratch1 , cbToCopy ) ;

                            pcpIdBookMinP = pcpIdBookScratchMin ;
                            pcpIdBookMaxP = pcpIdBookScratchMax ;
                        }
                        else
                        {
                            //CONoUTrAW7( "comparing " , pcpIdBookScratch1[ 1 ] , " to [min,max]: [" , pcpIdBookScratchMin[ 1 ] , "," , pcpIdBookScratchMax[ 1 ] , "]\r\n" ) ;
                            ZE( countT* , pcpnu ) ;
                            sCountT sgn = subtractF( tinP , pcpnu , pcpIdBookScratchMin , pcpIdBookScratch1 ) ;
                            __NZ( pcpnu ) ;

                            if( sgn > 0 ) thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookScratchMin , (byteT*)pcpIdBookScratch1 , cbToCopy ) ;
        
                            sgn = subtractF( tinP , pcpnu , pcpIdBookScratchMax , pcpIdBookScratch1 ) ;
                            __NZ( pcpnu ) ;

                            if( sgn < 0 ) thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookScratchMax , (byteT*)pcpIdBookScratch1 , cbToCopy ) ;
                        }
                    }
                    //if( tinP.pEther ) tinP.pEther->trace F( tinP , T("idBookMinMazF inspected  [postName]:    ")+T(postName) ) ;
                }
                while( ~hFind ) ;
        
                if( pcpIdBookMinP || F(flagsCt) & flBOOKSc_WRITER ) break ;
        
                if( pbQuitP && *pbQuitP )
                {
                    __1
                    break ;
                }

                ++ s ; tinP.pEther->osSleepF( tinP , TOCK ) ;
            }
        }
        else
        {
            IFsCRATCH
            {
                for(;;)
                {
                    TN( tBefore , ".booksC.1.book." ) ;
                    TN( tAfter  , ".bookC" ) ;
                
                    strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                    strokeS sttDot( '.' ) ;
                    TN( tDot , "." ) ;
                    fileNameC fnLike( tinP , *tinP.pEther , psttFindLike ) ;
                    patternC pat( tinP , *tinP.pEther , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

                    handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                    do
                    {
                        ZE( infoFileS* , pInfo ) ;
                        {
                            SCOOPS
                            tinP.pEtScratch->diskFindFileOrDirF( tinP , pInfo , hFind , fnLike.pathF() , &pat ) ; ___( pInfo ) ;
                            if( POOP )
                            {
                                POOPR
                                break ;
                            }
                        }
                        //if( tinP.pEther && pInfo ) tinP.pEther->trace F( tinP , T("idBookMinMaxF inspecting [psttIfoName]:    ")+T(pInfo->psttIfoName) ) ;

                        if( pInfo && !( F(pInfo->flags) & flFILEaTTR_DIRECTORY ) )
                        {
                            if( F(flagsP) & flBOOKScsELECT_PURGE )
                            {
                                SCOOPS
                                tinP.pEtScratch->diskFileOrDirDeleteF( tinP , pInfo->psttIfoName , flFILEoRdIRdELETE_null , 1 ) ;
                                if( POOP ) { POOPR ; }
                            }
                            else
                            {
                                ZE( strokeS* , psttw ) ;
                                countT idf = 1 ;
                                tinP.pEther->strSubstringF( tinP , psttw , idf , sttq , tBefore , pInfo->psttIfoName ) ; ___( psttw ) ;
                                tinP.pEther->delF( tinP , psttw ) ;
                                tinP.pEther->strSubstringF( tinP , psttw , idf , sttq , tAfter , pInfo->psttIfoName ) ; ___( psttw ) ;
                
                                ZE( strokeS* , pstt1w ) ;
                                countT cWords = tinP.pEther->strWordsOldF( tinP , pstt1w , psttw , sttq , tDot ) ; ___( pstt1w ) ;
                                tinP.pEther->delF( tinP , psttw ) ;
                                ZE( countT* , pcpIdBookThis ) ;
                                PUSE.newF( tinP , LF , *(byteT**)&pcpIdBookThis , sizeof( countT ) * cWords ) ; ___( pcpIdBookThis ) ;
                                if( pcpIdBookThis )
                                {
                                    countT* pco = pcpIdBookThis ;
                
                                    FORsTRINGSiN1( pstt1w )
                                    {
                                        *pco = tinP.pEther->strDigitsToSCountF( tinP , psttc1 , 0 , 1 ) ;
                                        if( pco == pcpIdBookThis ) pco = pcpIdBookThis + cWords - 1 ;
                                        else                       pco -- ;
                                    }
                                }
                                tinP.pEther->delF( tinP , pstt1w ) ;
                
                                if( !pcpIdBookMinP )
                                {
                                    pcpIdBookMinP = pcpIdBookThis ; pcpIdBookThis = 0 ;
                                    PUSE.newF( tinP , LF , *(byteT**)&pcpIdBookMaxP , sizeof( countT ) * ( 1 + *pcpIdBookMinP ) ) ; ___( pcpIdBookMaxP ) ;
                                    __Z( pcpIdBookMaxP ) ;
                                    if( !POOP ) thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookMaxP , (byteT*)pcpIdBookMinP , sizeof( countT ) * ( 1 + *pcpIdBookMinP ) ) ;
                                }
                                else
                                {
                                    ZE( countT* , pcpnu ) ;
                
                                    sCountT sgn = subtractF( tinP , pcpnu , pcpIdBookMinP , pcpIdBookThis ) ; ___( pcpnu ) ;
                                    PUSE( tinP , *(byteT**)&pcpnu ) ;
                                    if( sgn > 0 )
                                    {
                                        PUSE( tinP , *(byteT**)&pcpIdBookMinP ) ;
                                        countT cba = sizeof( countT ) * ( 1 + *pcpIdBookThis ) ;
                                        PUSE.newF( tinP , LF , *(byteT**)&pcpIdBookMinP , cba ) ; ___( pcpIdBookMinP ) ;
                                        if( pcpIdBookMinP ) thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookMinP , (byteT*)pcpIdBookThis , cba ) ;
                                    }
                
                                    sgn = subtractF( tinP , pcpnu , pcpIdBookMaxP , pcpIdBookThis ) ; ___( pcpnu ) ;
                                    PUSE( tinP , *(byteT**)&pcpnu ) ;
                                    if( sgn < 0 )
                                    {
                                        PUSE( tinP , *(byteT**)&pcpIdBookMaxP ) ;
                                        countT cba = sizeof( countT ) * ( 1 + *pcpIdBookThis ) ;
                                        PUSE.newF( tinP , LF , *(byteT**)&pcpIdBookMaxP , cba ) ; ___( pcpIdBookMaxP ) ;
                                        if( pcpIdBookMaxP ) thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookMaxP , (byteT*)pcpIdBookThis , cba ) ;
                                    }
                
                                    PUSE( tinP , *(byteT**)&pcpIdBookThis ) ;
                                }
                            }
                        }
                        //if( tinP.pEther && pInfo ) tinP.pEther->trace F( tinP , T("idBookMinMaxF inspected  [psttIfoName]:    ")+T(pInfo->psttIfoName) ) ;
                        DEL( pInfo ) ;
                    }
                    while( ~hFind ) ;
            
                    if( pcpIdBookMinP || F(flagsCt) & flBOOKSc_WRITER ) break ;
            
                    if( pbQuitP && *pbQuitP )
                    {
                        __1                                             //U:: 20200603@1924 CONJ: THIS HAPPENS BECAUSE SOME MEMORY SPACES ARE MONITORED BUT NOT USED
                        break ;
                    }
            
                    ++ s ; tinP.pEther->osSleepF( tinP , TOCK ) ;
                }
            }
        }
    }

    THREADmODE3rESTORE
}

#undef DELzOMBIEbOOKbACKnOWiF

#undef BOOKnOWmASK

#undef BOOKnOWeXISTS

#undef NEWbOOK1bLAMMOiFcT                                                                 

#undef BOOKnOWrESETfLAG

#undef NEWbOOK2sETfLAG

#undef OFFbOOKsLOTnOW



//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb012.booksc.idbookminmaxf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb013.booksc.setpcpidbookwantf BEGIN
#define DDNAME       "3func.360fb013.booksc.setpcpidbookwantf"
#define DDNUMB      (countT)0x360fb013
#define IDFILE      (countT)0x1473


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
i set pcpIdBookScratch1
*/
/**/

/*1*/voidT booksC::setPcpIdBookWantF( tinS& tinP , const flagsT flagsP , const countT* const pcpIdBookWantP , const boolT* pbQuitP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flBOOKScsELECT , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_

    THREADmODE3oN( flTHREADmODE3_POOLaLLOCATEfROMhEAP )

    ZE( countT* , pcpIdBookMin ) ;
    ZE( countT* , pcpIdBookMax ) ;
    if( idStateSpace && !pcpIdBookWantP ) idBookMinMaxF( tinP , pcpIdBookMin , pcpIdBookMax , flagsP , pbQuitP ) ;

    if( !POOP )
    {
        const countT* const pcpIdBookUse = pcpIdBookWantP
            ? pcpIdBookWantP
            : F(flagsP) & flBOOKScsELECT_WOTH
                ? pcpIdBookMin
                : F(flagsP) & flBOOKScsELECT_LATH
                    ? pcpIdBookMax
                    : F(flagsCt) & flBOOKSc_WRITER
                        ? pcpIdBookMax
                        : pcpIdBookMin
        ;

        if( !pcpIdBookUse ) pcpIdBookScratch1[ 1 ] = pcpIdBookScratch1[ 0 ] = 1 ;
        else                thirdC::c_memcpyIF( tinP , (byteT*)pcpIdBookScratch1 , (byteT*)pcpIdBookUse , sizeof( countT ) * ( 1 + *pcpIdBookUse ) ) ;
    }

    if( !( F(flagsCt) & flBOOKSc_DOnOTuSEpUSE ) )
    {
        PUSE( tinP , *(byteT**)&pcpIdBookMin ) ;
        PUSE( tinP , *(byteT**)&pcpIdBookMax ) ;
    }

    THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb013.booksc.setpcpidbookwantf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb014.booksc.touchAllBooksF BEGIN
#define DDNAME       "3func.360fb014.booksc.touchAllBooksF"
#define DDNUMB      (countT)0x360fb014
#define IDFILE      (countT)0x1474


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
i set pcpIdBookScratch1
*/
/**/

/*1*/voidT booksC::touchAllBooksF( tinS& tinP , const boolT* pbQuitP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    {
        ZE( boolT , bnu ) ;
        const boolT& bQuit = pbQuitP ? *pbQuitP : bnu ;

        ZE( countT , idBook ) ;
        handleC hRead( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_BOOKS ) ;
        while( !POOP && !bQuit )
        {
            ZE( const byteT* , pbi ) ;

            countT cbi = 1 ;
            boolT bDelete = readF( tinP , pbi , cbi , hRead , flBOOKScrEAD_STILLhUNGRYiSoK , &bQuit ) ; // NEEDED BECAUSE "READ REMAINDER OF CURRENT BOOK" REPEATEDLY WILL NEVER ADVANCE TO THE NEXT BOOK; SO WE BEGIN EACH ITERATION WITH READING THE WOTH BYTE OF THE CURRENT BOOK
            __NZ( bDelete ) ;
    
            if( !pbi ) break ;

            pbi = 0 ;
            cbi = 0 ;
            bDelete = readF( tinP , pbi , cbi , hRead , flBOOKScrEAD_null , &bQuit ) ;
            __NZ( bDelete ) ;
    
            if( !pbi ) break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fb* : 3func.360fb014.booksc.touchAllBooksF END
