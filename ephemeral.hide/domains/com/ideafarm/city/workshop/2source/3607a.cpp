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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607a* : 3func.3607a003.parameterc.parameterc BEGIN
#define DDNAME       "3func.3607a003.parameterc.parameterc"
#define DDNUMB      (countT)0x3607a003
#define IDFILE      (countT)0x1260


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
quoted parameter values are supported, and these can contain escaped characters
arguments
 postToP
  must point to costaToP bytes that i may write to
 costaToP
  can be 0
  if 0 then i do nothing
 postKeyP
  can be 0
  if 0 then the idAdam value for this process is implied
   this value is specified in the woth word of the command line
   if the command line contains no words then ifcIDaDAM_KERNEL1DRIVER is implied
*/
/**/

/*1*/parameterC::parameterC( osTextT* postToP , countT costaToP , const osTextT* postKeyP )/*1*/
{
    const osTextT* postExe  = thirdC::postExeFileNameIF() ;

    const osTextT* postArgs = thirdC::postOldCmdLineIF() ;
    while( *postArgs && *postArgs == ' ' ) postArgs ++ ; //SKIP LEADING BLANKS
    while( *postArgs && *postArgs != ' ' ) postArgs ++ ; //SKIP EXE FILE NAME (USELESS SINCE NOT FULLY QUALIFIED FOR GUI PROCESSES)
    while( *postArgs && *postArgs == ' ' ) postArgs ++ ; //SKIP LEADING BLANKS

    const osTextT* const postKeySave = postKeyP ;
    const osTextT* const postToSave = postToP ;

    if( !postKeyP )
    {
        ZE( boolT , bFiler ) ;
        if( thirdC::c_strstrIF( postExe , "ideafarm.0130001" ) )
        {
            //CONoUTrAW3( "\r\nparameterC 1 old [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
            *(countT*)&processGlobal1I.idHome |= fliIDhOME_HOMELESS ;
            //CONoUTrAW3( "\r\nparameterC 1 new [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
            bFiler = 1 ;
        }

        {
            ZE( countT , idHomeDisk ) ;
            osTextT posth[] =  ":\\ideafarm.home." ;
            if( postExe + 1 == thirdC::c_strstrIF( postExe , posth ) )
            {
                idHomeDisk = thirdC::c_atoiIF( postExe + 1 + sizeof posth - 1 ) ;
                if( idHomeDisk )
                {
                    countT flagSave = processGlobal1I.idHome & 0xff000000 ; //A: ASSUME: sizeof( countT ) == 4
                    *(countT*)&processGlobal1I.idHome = idHomeDisk ;
                    *(countT*)&processGlobal1I.idHome |= flagSave ;
                }

                #if defined( __NT__ )

                    const osTextT* posti = postExe ;
                    osTextT* posto = processGlobal1I.postPathHomeTmp ;
                    *( posto ++ ) = *( posti ++ ) ;
                    *( posto ++ ) = *( posti ++ ) ;
                    *( posto ++ ) = *( posti ++ ) ;
                    while( *posti != '\\' ) *( posto ++ ) = *( posti ++ ) ;
                    *( posto ++ ) = '\\' ;
                    *( posto ++ ) = 't' ;
                    *( posto ++ ) = 'm' ;
                    *( posto ++ ) = 'p' ;

                    CreateDirectory( processGlobal1I.postPathHomeTmp , 0 ) ;

                #endif
            }

            if( !idHomeDisk )
            {
                //CONoUTrAW3( "\r\nparameterC 2 old [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
                *(countT*)&processGlobal1I.idHome |= fliIDhOME_HOMELESS ;
                //CONoUTrAW3( "\r\nparameterC 2 new [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
            }
        }

        ZE( boolT , bDriver ) ;
        osTextT posti[] =  "!installer" ;
        if( !*postArgs ) bDriver = 1 ;
        else if( postArgs == thirdC::c_strstrIF( postArgs , posti ) )
        {
            //CONoUTrAW3( "\r\nparameterC 3 old [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
            *(countT*)&processGlobal1I.idHome |= fliIDhOME_HOMELESS ;
            //CONoUTrAW3( "\r\nparameterC 3 new [idHome]: " , processGlobal1I.idHome , "" ) ; //U::
            bDriver = 1 ;
        }

        if( processGlobal1I.idHome & fliIDhOME_HOMELESS ) processGlobal1I._thirdC_flagsModeProcess2 |= /*flMODEpROCESS2_DOnOThIREaDAMS |*/ flMODEpROCESS2_DOnOTdISPLAYtHIRDpARTYaDS ;

        if( bFiler )
        {
            if( costaToP >= 0x9 ) thirdC::c_itoaIF( postToP , 0x1000310 ) ;
        }
        else if( bDriver )
        {
            if( costaToP >= 0x9 ) thirdC::c_itoaIF( postToP , ifcIDaDAM_KERNEL1DRIVER ) ;

            // COMMENTED OUT CAUSE I DON'T SEE WHY I WOULD EVER WANT TO SEARCH FOR AN INACTIVE HOME: if( !( processGlobal1I.idHome & fliIDhOME_HOMELESS ) ) processGlobal1I._thirdC_flagsModeProcess2 |= flMODEpROCESS2_IDhOSTsEARCH ; //U::USED TO ONLY BE DONE WHEN idHomeDiskOverrideG IS SET; THIS LINE MUST BE EDITED TO RESTORE THE ORIGINAL INTENDED FUNCTIONALITY, WHATEVER THAT WAS
            //THE BASIC IDEA WAS TO SEARCH FOR A MEMORY SPACE NOT OCCUPIED BY A MONITOR (1050104)
        }
        else
        {
            //GET THE WOTH PARAMETER, WHICH IS idAdam IN FOREIGN BIGIT ORDER TO MAKE IT EASY FOR BRAIN DEAD BAT FILE PROGRAMS TO CONSTRUCT THE PARAMETER
            //I REVERSE THE BIGIT ORDER WHEN WRITING TO postToP UNLESS THE INPUT VALUE BEGINS WITH '!' INDICATING THAT IT IS A SYMBOLIC VALUE NOT NUMERIC

            //conGF( "parameterC [postToP,postArgs]: " ) ;
            //conGF( (countT)postToP ) ;
            //conGF( " \"" ) ;
            //conGF( postArgs ) ;
            //conGF( "\"\r\n" ) ;

            osTextT* const postToSave = postToP ;

            boolT bReverse = *postArgs != '@' ;     //DETECTS SYMBOLIC ADAM VALUE, E.G. "@find"

            const osTextT* poste = postArgs ;
            while( *poste && *poste != ' ' ) poste ++ ;
            if( postArgs <= poste )
            {
                countT cToDo = poste - postArgs ; //EXCLUDES NULL TERMINATOR

                if( !bReverse )
                {
                    while( cToDo -- ) *( postToP ++ ) = *( postArgs ++ ) ; 
                                      *( postToP ++ ) = 0 ;
                }
                else
                {
                    postToP += cToDo ;             //POSITION TO WRITE NULL TERMINATOR

                                      *( postToP -- ) = 0 ;
                    while( cToDo -- ) *( postToP -- ) = *( postArgs ++ ) ; 

                    if( postToP != postToSave - 1 ) { BLAMMO ; }
                    postToP ++ ;
                }
            }

            //conGF( "reordered: \"" ) ;
            //conGF( postToP ) ;
            //conGF( "\"\r\n" ) ;
        }
    }
    else if( costaToP -- )
    {
        const osTextT* const postToSave = postToP ;
        const osTextT* postc = thirdC::c_strstrIF( postArgs , postKeyP ) ;

        ZE( boolT , bDone ) ;
        if( postc )
        {
            postc = thirdC::c_strstrIF( postc , " " ) ;
            while( *postc == ' ' ) postc ++ ;
            boolT bQuoted = *postc == '"' ;
            if( bQuoted ) postc ++ ;
            // postc POINTS TO VALUE

            const osTextT* poste = postc ;
            if( !bQuoted ) while( *poste && *poste != ' ' ) poste ++ ;
            else           while( *poste && ( *poste != '"' || *( poste - 1 ) == '\\' ) ) poste ++ ;
            // poste POINTS TO END OF VALUE

            ZE( countT , cEscape ) ;
            {
                const osTextT* postc2 = postc ;
                while( postc2 < poste )
                {
                    if( *postc2 == '\\' && ( postc2 == postc || postc2[ - 1 ] != '\\' ) ) cEscape ++ ;
                    postc2 ++ ;
                }
            }
    
            if( costaToP > poste - postc - cEscape ) costaToP = poste - postc - cEscape ;
    
            if( !cEscape ) while( costaToP -- ) *( postToP ++ ) = *( postc ++ ) ;
            else
            {
                const osTextT* postc2 = postc ;
                while( costaToP -- )
                {
                    if( *postc2 == '\\' && ( postc2 == postc || postc2[ - 1 ] != '\\' ) ) postc2 ++ ;
                    *( postToP ++ ) = *( postc2 ++ ) ;
                }
            }

            *postToP = 0 ;
            bDone = 1 ;
        }

        if( !bDone && !thirdC::c_strcmpIF( postKeyP , "!idHome" ) )
        {
            const osTextT* postc = thirdC::postExeFileNameIF() ; //U::MIGRATE TO USE THIS TO GET IDHOME SINCE PATH NOT PRESENT IN CMD LINE FOR GUI PROCESS

            ZE( countT , idHomeDisk ) ;
            osTextT posth[] =  ":\\ideafarm.home." ;
            if( postc + 1 == thirdC::c_strstrIF( postc , posth ) )
            {
                postc += 1 + sizeof posth - 1 ;
                const osTextT* poste = thirdC::c_strstrIF( postc , "\\" ) ;
                if( postc < poste )
                {
                    if( costaToP > poste - postc + 1 ) costaToP = poste - postc + 1 ;
                    while( -- costaToP ) *( postToP ++ ) = *( postc ++ ) ;
                    *postToP = 0 ;
                }
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607a* : 3func.3607a003.parameterc.parameterc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607a* : 3func.3607a004.parameterc.parameterc BEGIN
#define DDNAME       "3func.3607a004.parameterc.parameterc"
#define DDNUMB      (countT)0x3607a004
#define IDFILE      (countT)0x1261


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 postKeyP
*/
/**/

/*1*/parameterC::parameterC( const osTextT* postKeyP )/*1*/
{
    const osTextT* postArgs = thirdC::postOldCmdLineIF() ;
    while( *postArgs && *postArgs == ' ' ) postArgs ++ ; //SKIP LEADING BLANKS
    while( *postArgs && *postArgs != ' ' ) postArgs ++ ; //SKIP EXE FILE NAME (USELESS SINCE NOT FULLY QUALIFIED FOR GUI PROCESSES)
    while( *postArgs && *postArgs == ' ' ) postArgs ++ ; //SKIP LEADING BLANKS

    if( !postKeyP ) { BLAMMO ; }
    else
    {
        if( !thirdC::c_strcmpIF( postKeyP , "!quietInOut" ) )
        {
            if( thirdC::c_strstrIF( postArgs , postKeyP ) ) processGlobal1I._thirdC_flagsModeProcess1 |= flMODEpROCESS1_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY ;
        }
        else { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607a* : 3func.3607a004.parameterc.parameterc END
