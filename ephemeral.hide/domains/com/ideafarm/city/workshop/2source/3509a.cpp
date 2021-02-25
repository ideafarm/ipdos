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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3509a* : 3func.3509a004.backoldc.freshjoyifif BEGIN
#define DDNAME       "3func.3509a004.backoldc.freshjoyifif"
#define DDNUMB      (countT)0x3509a004
#define IDFILE      (countT)0xb30


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::freshJoyIfIF( tinS& tinP , etherC& etherP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bSuppressJoyInspection = 1 ;
    windowOldC* pRootI = windowOldC::getRefIF( tinP ) ;
    if( pRootI )
    {
        bSuppressJoyInspection = !!( F(pRootI->rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) ;
        pRootI->letRefF() ;
    }

    if( !( F(tinP.pAdamGlobal1->_backOldC_.rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_POLLjOYeVENwHENcONSOLEhIDDEN ) && bSuppressJoyInspection ) for( countT off = 0 ; off < 0x20 ; off ++ ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY2bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY1bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = 0 ;
    else
    {
        //CAPTURE JOYSTICK POSITION
        {
            JOYINFOEX info ;
            etherP.memSetF( tinP , (byteT*)&info , sizeof info ) ;
            info.dwSize = sizeof info ;
            info.dwFlags = JOY_RETURNALL ;
            BOSdOnOTtEST( WHATgbo , joyGetPosEx( JOYSTICKID1 , &info ) )
            if( JOYERR_NOERROR == tinP.brcRaw )
            {
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_null ;

                flagsT flButtons = info.dwButtons ;
                ZE( countT , off ) ;
                while( off < 0x20 )
                {
                    tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY1bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = ( flButtons & 1 ) ? flTOOL_DOWN : flTOOL_null ;
        
                    flButtons >>= 1 ;
                    off ++ ;
                }
    
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
    
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_17Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwPOV ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV  ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_27Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwXpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_37Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwYpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_47Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwZpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_57Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwRpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_67Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwUpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_77Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwVpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77Min[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
    
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_17Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwPOV ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV  ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_27Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwXpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_37Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwYpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_47Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwZpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_57Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwRpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_67Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwUpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_77Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwVpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77Max[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
            }
            else
            {
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY1pOSITION - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
                for( countT off = 0 ; off < 0x20 ; off ++ ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY1bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
            }
    
            etherP.memSetF( tinP , (byteT*)&info , sizeof info ) ;
            info.dwSize = sizeof info ;
            info.dwFlags = JOY_RETURNALL ;
            BOSdOnOTtEST( WHATgbo , joyGetPosEx( JOYSTICKID2 , &info ) )
            if( JOYERR_NOERROR == tinP.brcRaw )
            {
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_null ;
                flagsT flButtons = info.dwButtons ;
                ZE( countT , off ) ;
                while( off < 0x20 )
                {
                    tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY2bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = ( flButtons & 1 ) ? flTOOL_DOWN : flTOOL_null ;
        
                    flButtons >>= 1 ;
                    off ++ ;
                }
    
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
    
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_17Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwPOV ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV  ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_27Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwXpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_37Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwYpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_47Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwZpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_57Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwRpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_67Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwUpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_77Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] > info.dwVpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77Min[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
    
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_17Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwPOV ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_17Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwPOV  ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_27Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwXpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_27Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwXpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_37Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwYpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_37Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwYpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_47Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwZpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_47Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwZpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_57Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwRpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_57Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwRpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_67Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwUpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_67Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwUpos ;
                if( tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pcToolState_77Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] < info.dwVpos) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pcToolState_77Max[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_x7Begin - 1 ] = info.dwVpos ;
            }
            else
            {
                tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY2pOSITION - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
                for( countT off = 0 ; off < 0x20 ; off ++ ) tinP.pAdamGlobal1->_backOldC_.rowBack.rw.pfToolState_f[ ifcIDtYPEtOOL_JOY2bUTTON1 + off - ifcIDtYPEtOOL_begin - 1 ] = flTOOL_NOTpRESENT ;
            }
        }

        //NOTIFY SADAMS OF JOYSTICK ATTACH/DETACH
        //A:ASSUME: JOYSTICK POSITION TOOLS ARE CONTIGUOUS
        for( countT idTool = ifcIDtYPEtOOL_JOY1pOSITION ; idTool <= ifcIDtYPEtOOL_JOY2pOSITION ; idTool ++ )
        {
            countT off = idTool - ifcIDtYPEtOOL_JOY1pOSITION ;
            static boolT pbNPLag[ 2 ] ;
            measureT pmxNew[ 7 ] ;
            joyPosF( tinP , pmxNew , sizeof pmxNew / sizeof pmxNew[ 0 ] , 1 + off ) ;

            const flagsT* pFlags = &tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pfToolState_f[ ( off ? ifcIDtYPEtOOL_JOY2pOSITION : ifcIDtYPEtOOL_JOY1pOSITION ) - ifcIDtYPEtOOL_begin - 1 ] ;
            boolT bNP = !!( F(*pFlags) & flTOOL_NOTpRESENT ) ;

            if( pbNPLag[ off ] != bNP )
            {
                pbNPLag[ off ] = bNP ;

                count8S c8n( 1 , 4 , idTool , bNP ? ifcIDtYPEaCTION_DETACH : ifcIDtYPEaCTION_ATTACH , (countT)pmxNew , (countT)pFlags ) ;
                paperOldC::callSadamsIF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_JOYsTICK , c8n , 0 ) ;
            }

            if( !bNP )
            {
                //NOTIFY SADAMS OF JOYSTICK POSITION CHANGES
                {
                    static measureT ppmxLag[ 2 ][ 7 ] ;
                    if( thirdC::c_memcmpIF( tinP , (byteT*)ppmxLag[ off ] , (byteT*)pmxNew , sizeof ppmxLag[ 0 ] ) )
                    {
                        thirdC::c_memcpyIF( tinP , (byteT*)ppmxLag[ off ] , (byteT*)pmxNew , sizeof ppmxLag[ 0 ] ) ;
        
                        count8S c8n( 1 , 4 , idTool , ifcIDtYPEaCTION_MOVE , (countT)pmxNew , (countT)pFlags ) ;
                        paperOldC::callSadamsIF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_JOYsTICK , c8n , 0 ) ;
                    }
                }

                //NOTIFY SADAMS OF BUTTON CHANGES FOR THIS JOYSTICK
                countT pcMinMax[ 2 ][ 2 ] = { ifcIDtYPEtOOL_JOY1bUTTON1 , ifcIDtYPEtOOL_JOY1bUTTON02 , ifcIDtYPEtOOL_JOY2bUTTON1 , ifcIDtYPEtOOL_JOY2bUTTON02 } ;
                for( countT idToolb = pcMinMax[ off ][ 0 ] ; idToolb <= pcMinMax[ off ][ 1 ] ; idToolb ++ )
                {
                    boolT bDown = !!( F(tinP.pAdamGlobal1->_backOldC_.rowBack.ro.pfToolState_f[idToolb-ifcIDtYPEtOOL_begin-1]) & flTOOL_DOWN ) ;
        
                    static boolT pbDownLag[ 0x20 ] ;
                    countT offb = idToolb - ifcIDtYPEtOOL_JOY1bUTTON1 ;
                    if( pbDownLag[ offb ] != bDown )
                    {
                        pbDownLag[ offb ] = bDown ;
        
                        //U::O: REDUNDANT; ALREADY AVAILABLE
                        //measureT pmxNew[ 7 ] ;
                        //joyPosF( tinP , pmxNew , sizeof pmxNew / sizeof pmxNew[ 0 ] , off ) ;
        
                        count8S c8n( 1 , 3 , idToolb , bDown ? ifcIDtYPEaCTION_DOWN : ifcIDtYPEaCTION_UP , (countT)pmxNew ) ;
                        paperOldC::callSadamsIF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_JOYsTICK , c8n , 0 ) ;
                    }
                }
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3509a* : 3func.3509a004.backoldc.freshjoyifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3509a* : 3func.3509a012.backoldc.setmodeflagsif BEGIN
#define DDNAME       "3func.3509a012.backoldc.setmodeflagsif"
#define DDNUMB      (countT)0x3509a012
#define IDFILE      (countT)0xb31


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT backOldC::setModeFlagsIF( tinS& tinP , const flagsT flagsOnP , const flagsT flagsOffP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal1->_backOldC_.rowBack.rw.flagsPaperBackMode |= flagsOnP ;
    tinP.pAdamGlobal1->_backOldC_.rowBack.rw.flagsPaperBackMode &= ~( F(flagsOffP) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3509a* : 3func.3509a012.backoldc.setmodeflagsif END
