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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005001.socketc.socketc BEGIN
#define DDNAME       "3func.36005001.socketc.socketc"
#define DDNUMB      (countT)0x36005001
#define IDFILE      (countT)0xe1f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1070001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3420104.1.1.0.html\"\>3420104:  WAKEsHOW( "example.simplest.func.1070001.socketC.socketC" )\</A\>
constructs a socket that can be used to communicate with another local or a remote process
sets the linger option
arguments
 tinP
 etherP
 idTypeP
 flagsP
default behavior is to not time out, except that SSL socket defaults to timeout in a TICK (approx. 5 foreign minutes)
 this is because SSL is a piece of shit and can peg the cpu in an infinite loop
*/
/**/

/*1*/socketC::socketC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const boolT idTypeP , const flagsT flagsP , const countT* const pIdleTimeAllowedReadP , const countT* const pIdleTimeAllowedWriteP , const countT* const pTimeAllowedConnectedP , const strokeS* const psttPemCertificatesP , const strokeS* const psttPemPrivateKeyP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
cFunctionsPending( 0 ) ,
pOdometer( 0 ) ,
bAcceptedByLF( 0 ) ,
pEther( &etherP ) ,
pPoop( &(const poopC&)etherP ) ,
idType( idTypeP ) ,
fListening( 0 ) ,
flags
(
    flagsP |
    (
        ( !pIdleTimeAllowedReadP && !pIdleTimeAllowedWriteP && !pTimeAllowedConnectedP && !( F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ) ) || idType == ifcSOCKETtYPE_DATAgRAM
            ? flSOCKETc_DOnOTrEGISTERtIMEoUT
            : flSOCKETc_null
    )
) ,
flagsMode( flSOCKETcmODE_null ) ,
bWrite( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
bRead( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ,
idMsgOutLast( 0 ) ,
idMsgInLast( 0 ) ,
cbMsgInLast( 0 ) ,
bAcceptor( 0 ) ,
bCatcher( 0 ) ,
idPortMe( 0 ) ,
hnu( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ,
mom( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ,
dad( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ,
idPhaseTopSecret( ifcIDpHASEsOCKETtOPsECRET_1SENDpINnAME ) ,
pczKeyTopSecret( 0 ) ,
pczKeyTopSecretPeer( 0 ) ,
psttName( 0 ) ,
timeAllowedConnected( pTimeAllowedConnectedP ? *pTimeAllowedConnectedP : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysZe                : tinP.pAdamGlobal3->_socketC_.alwaysZe ) , // SSL IS A PIECE OF SHIT: IT CAN PEG CPU FOREVER IN AN INFINITE LOOP ; 20161201@1201: CHANGED FROM TICK TO ZE TO AVOID CANCELING LONG CLOUD TRANSFERS.  HOPEFULLY THE IDLE LIMITS WILL SUFFICE TO KILL SSL PEGGING CPU
idleTimeAllowedRead(  pIdleTimeAllowedReadP  ? *pIdleTimeAllowedReadP  : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysTimeoutDefaultWan : tinP.pAdamGlobal3->_socketC_.alwaysZe ) ,
idleTimeAllowedWrite( pIdleTimeAllowedWriteP ? *pIdleTimeAllowedWriteP : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysTimeoutDefaultWan : tinP.pAdamGlobal3->_socketC_.alwaysZe ) ,
pMapPortBind( 0 ) ,
hSslContext( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_openSslContext ) ,
psttPemCertificates( 0 ) ,
psttPemPrivateKey( 0 )
{
    inc02AM( cFunctionsPending ) ;
    {
        //20141028@0638: REGISTRATION MOVED TO HERE
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !incv02AM( tinP.pAdamGlobal3->_socketC_.cRef ) )
        {
            if( tinP.pAdamGlobal3->_socketC_.pSwOdometer )
            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    while( tinP.pAdamGlobal3->_socketC_.pSwOdometer )
                    {
                        ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                    }
                }
                THREADmODE1rESTORE
            }

            etherC& etRock = etherC::etRockIF( tinP ) ;
            tinP.pAdamGlobal3->_socketC_.pSwOdometer = new( 0 , tinP , LF ) switchC( tinP , etRock , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_null , tinP.pAdamGlobal3->_socketC_.nnLever , 0 , sizeof( sockOdometerS ) ) ; ___( tinP.pAdamGlobal3->_socketC_.pSwOdometer ) ;
        }
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;

        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( idType == ifcSOCKETtYPE_STREAM   && F(flags) & flSOCKETc_CANbROADCAST         ) ;
            __( idType == ifcSOCKETtYPE_DATAgRAM && F(flags) & flSOCKETc_NOlINGER             ) ;
            __( idType == ifcSOCKETtYPE_DATAgRAM && F(flags) & flSOCKETc_DOnOTrEGISTERqUITTER ) ;
            FV( flSOCKETc , flagsP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        if( psttPemCertificates ) { etherP.strMakeF( tinP , LF , psttPemCertificates , psttPemCertificatesP ) ; ___( psttPemCertificates ) ; }
        if( psttPemPrivateKey   ) { etherP.strMakeF( tinP , LF , psttPemPrivateKey   , psttPemPrivateKeyP   ) ; ___( psttPemPrivateKey   ) ; }

        //if( idleTimeAllowedRead  && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN ) { BLAMMO ; }
        //if( idleTimeAllowedWrite && idleTimeAllowedWrite != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN ) { BLAMMO ; } 
    
        if( idleTimeAllowedRead  && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN )
            pEther->traceF( tinP , T("socketC / unusual parameter value [this,idleTimeAllowedRead ]: ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idleTimeAllowedRead ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( idleTimeAllowedWrite && idleTimeAllowedWrite != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN )
            pEther->traceF( tinP , T("socketC / unusual parameter value [this,idleTimeAllowedWrite]: ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idleTimeAllowedWrite,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

        if( F(flags) & flSOCKETc_CRYPTfOREIGNsSL ) etherP.openSsl_getContextF( tinP , hSslContext , psttPemCertificatesP , psttPemPrivateKeyP ) ;
    
        if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
        else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    
        //20141028@0638: REGISTRATION MOVED FROM HERE
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        pEther->sockF( tinP , handle , idType , !( F(flags) & flSOCKETc_CRYPTfOREIGNsSL ) ? 0 : &hSslContext ) ;
        __Z( handle ) ;
        if( !( F(flags) & flSOCKETc_NOdUALsTACK  )                                     ) pEther->sockOptionDualStackF( tinP , handle ) ;
        if( !( F(flags) & flSOCKETc_NOlINGER     ) && idType == ifcSOCKETtYPE_STREAM   ) pEther->sockOptionLingerF(    tinP , handle ) ;
        if( !( F(flags) & flSOCKETc_NOsENDnOW    ) && idType == ifcSOCKETtYPE_STREAM   ) pEther->sockOptionSendNowF(   tinP , handle ) ;
        if(    F(flags) & flSOCKETc_CANbROADCAST   && idType == ifcSOCKETtYPE_DATAgRAM ) pEther->sockOptionBroadcastF( tinP , handle ) ;

        if( idType != ifcSOCKETtYPE_DATAgRAM && !( F(flags) & flSOCKETc_DOnOTrEGISTERqUITTER ) )
        {
            //__( F(tinP.flagsThreadMode3) & flTHREADmODE3_NOTwATCHED ) ;
            ZE( countT , idSlot ) ;
            etherC::sockStkQuittersF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
            __Z( idSlot ) ;
        }
    
        if( !( F(flags) & flSOCKETc_DOnOTrEGISTERtIMEoUT ) )
        {
            ZE( countT , idSlot ) ;
            etherC::sockStkIdleTimeoutersF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
            __Z( idSlot ) ;
        }
    
        if( timeAllowedConnected && F(flagsP) & flSOCKETc_CTbYlISTENER ) FRESHtIMEaTOMIC( *pEther , timeConnected.time1 , timeConnected.time2 )
    
        bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005001.socketc.socketc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005002.socketc.socketc BEGIN
#define DDNAME       "3func.36005002.socketc.socketc"
#define DDNUMB      (countT)0x36005002
#define IDFILE      (countT)0xe20


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1070002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4420104.1.1.0.html\"\>4420104:  WAKEsHOW( "example.simplest.func.1070002.socketC.socketC" )\</A\>
wrapper so that socketC instructions can be used for a socket created elsewhere
when this overload is used, the caller is responsible for closing the socket after this object is destroyed
 it is illegal to close the socket before this socketC object is destroyed
this constructor sets the linger option
 U: PROBABLY DO NOT WANT TO ALTER THE PROPERTIES OF THE SPECIFIED SOCKET
arguments
 etherP
 handleP
  must not be 0
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000f.flSOCKETc!||
*/
/**/

/*1*/socketC::socketC( etherC& etherP , tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , handleC& handleP , const boolT idTypeP , const flagsT flagsP , const countT* const pIdleTimeAllowedReadP , const countT* const pIdleTimeAllowedWriteP , const countT* const pTimeAllowedConnectedP , nicNameC& nnPeerP , const strokeS* const psttPemCertificatesP , const strokeS* const psttPemPrivateKeyP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
cFunctionsPending( 0 ) ,
nnPeer( nnPeerP ) ,
pOdometer( 0 ) ,
bAcceptedByLF( 0 ) ,
pEther( &etherP ) ,
pPoop( &(const poopC&)etherP ) ,
idType( idTypeP ) ,
fListening( 0 ) ,
flags
(
    flagsP |
    (
        ( !pIdleTimeAllowedReadP && !pIdleTimeAllowedWriteP && !pTimeAllowedConnectedP ) || idType == ifcSOCKETtYPE_DATAgRAM
            ? flSOCKETc_DOnOTrEGISTERtIMEoUT
            : flSOCKETc_null
    )
) ,
flagsMode( flSOCKETcmODE_null ) ,
bWrite( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
bRead( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ,
idMsgOutLast( 0 ) ,
idMsgInLast( 0 ) ,
cbMsgInLast( 0 ) ,
bAcceptor( 0 ) ,
bCatcher( 0 ) ,
idPortMe( 0 ) ,
hnu( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ,
mom( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ,
dad( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ) ,
idPhaseTopSecret( ifcIDpHASEsOCKETtOPsECRET_1SENDpINnAME ) ,
pczKeyTopSecret( 0 ) ,
pczKeyTopSecretPeer( 0 ) ,
psttName( 0 ) ,
timeAllowedConnected( pTimeAllowedConnectedP ? *pTimeAllowedConnectedP : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysZe                : tinP.pAdamGlobal3->_socketC_.alwaysZe ) , // SSL IS A PIECE OF SHIT: IT CAN PEG CPU FOREVER IN AN INFINITE LOOP ; 20161201@1201: CHANGED FROM TICK TO ZE TO AVOID CANCELING LONG CLOUD TRANSFERS.  HOPEFULLY THE IDLE LIMITS WILL SUFFICE TO KILL SSL PEGGING CPU
idleTimeAllowedRead(  pIdleTimeAllowedReadP  ? *pIdleTimeAllowedReadP  : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysTimeoutDefaultWan : tinP.pAdamGlobal3->_socketC_.alwaysZe ) ,
idleTimeAllowedWrite( pIdleTimeAllowedWriteP ? *pIdleTimeAllowedWriteP : F(flagsP) & flSOCKETc_CRYPTfOREIGNsSL ? tinP.pAdamGlobal3->_socketC_.alwaysTimeoutDefaultWan : tinP.pAdamGlobal3->_socketC_.alwaysZe ) ,
pMapPortBind( 0 ) ,
hSslContext( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_openSslContext ) ,
psttPemCertificates( 0 ) ,
psttPemPrivateKey( 0 )
{
    inc02AM( cFunctionsPending ) ;
    {
        //20141028@0638: REGISTRATION MOVED TO HERE
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !incv02AM( tinP.pAdamGlobal3->_socketC_.cRef ) )
        {
            if( tinP.pAdamGlobal3->_socketC_.pSwOdometer )
            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    while( tinP.pAdamGlobal3->_socketC_.pSwOdometer )
                    {
                        ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                    }
                }
                THREADmODE1rESTORE
            }

            etherC& etRock = etherC::etRockIF( tinP ) ;
            tinP.pAdamGlobal3->_socketC_.pSwOdometer = new( 0 , tinP , LF ) switchC( tinP , etRock , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_null , tinP.pAdamGlobal3->_socketC_.nnLever , 0 , sizeof( sockOdometerS ) ) ; ___( tinP.pAdamGlobal3->_socketC_.pSwOdometer ) ;
        }
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;

        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( idType == ifcSOCKETtYPE_STREAM   && F(flags) & flSOCKETc_CANbROADCAST         ) ;
            __( idType == ifcSOCKETtYPE_DATAgRAM && F(flags) & flSOCKETc_NOlINGER             ) ;
            __( idType == ifcSOCKETtYPE_DATAgRAM && F(flags) & flSOCKETc_DOnOTrEGISTERqUITTER ) ;
            FV( flSOCKETc , flagsP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        if( psttPemCertificates ) { etherP.strMakeF( tinP , LF , psttPemCertificates , psttPemCertificatesP ) ; ___( psttPemCertificates ) ; }
        if( psttPemPrivateKey   ) { etherP.strMakeF( tinP , LF , psttPemPrivateKey   , psttPemPrivateKeyP   ) ; ___( psttPemPrivateKey   ) ; }
    
        //if( idleTimeAllowedRead  && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN ) { BLAMMO ; }
        //if( idleTimeAllowedWrite && idleTimeAllowedWrite != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN ) { BLAMMO ; } 
    
        if( idleTimeAllowedRead  && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN )
            pEther->traceF( tinP , T("socketC / unusual parameter value [this,idleTimeAllowedRead ]: ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idleTimeAllowedRead ,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        if( idleTimeAllowedWrite && idleTimeAllowedWrite != SOCKETtIMEOUTdEFAULTwAN && idleTimeAllowedRead  != SOCKETtIMEOUTdEFAULTlAN )
            pEther->traceF( tinP , T("socketC / unusual parameter value [this,idleTimeAllowedWrite]: ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idleTimeAllowedWrite,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

        if( F(flags) & flSOCKETc_CRYPTfOREIGNsSL ) etherP.openSsl_getContextF( tinP , hSslContext , psttPemCertificatesP , psttPemPrivateKeyP ) ;

        if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
        else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    
        //20141028@0638: REGISTRATION MOVED FROM HERE
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        handle << handleP ;
        __Z( handle ) ;
        if( !( F(flags) & flSOCKETc_NOdUALsTACK  )                                     ) pEther->sockOptionDualStackF( tinP , handle ) ;
        if( !( F(flags) & flSOCKETc_NOlINGER     ) && idType == ifcSOCKETtYPE_STREAM   ) pEther->sockOptionLingerF(    tinP , handle ) ; //U: PROBABLY DON'T WANT TO ALTER THE PROPERTIES OF THE SPECIFIED SOCKET
        if( !( F(flags) & flSOCKETc_NOsENDnOW    ) && idType == ifcSOCKETtYPE_STREAM   ) pEther->sockOptionSendNowF(   tinP , handle ) ;
        if(    F(flags) & flSOCKETc_CANbROADCAST   && idType == ifcSOCKETtYPE_DATAgRAM ) pEther->sockOptionBroadcastF( tinP , handle ) ;
    
        if( idType != ifcSOCKETtYPE_DATAgRAM && !( F(flags) & flSOCKETc_DOnOTrEGISTERqUITTER ) )
        {
            //__( F(tinP.flagsThreadMode3) & flTHREADmODE3_NOTwATCHED ) ;
            ZE( countT , idSlot ) ;
            etherC::sockStkQuittersF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
            __Z( idSlot ) ;
        }
    
        if( F(flags) & flSOCKETc_TOPsECRET && F(flags) & flSOCKETc_CTbYlISTENER )
        {
            //CONoUTrAW( "ACCEPTED IN TOP SECRET MODE\r\n" ) ;
            __NZ( pczKeyTopSecret ) ;
            pEther->cioMakeKeyF( tinP , pczKeyTopSecret , idbKEYtYPE_PIN , idbKEYpINtYPE_SOCKETcONNECTION ) ; ___( pczKeyTopSecret ) ;
        }
    
        if( !( F(flags) & flSOCKETc_DOnOTrEGISTERtIMEoUT ) )
        {
            ZE( countT , idSlot ) ;
            etherC::sockStkIdleTimeoutersF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
            __Z( idSlot ) ;
        }
    
        if( timeAllowedConnected && F(flagsP) & flSOCKETc_CTbYlISTENER ) FRESHtIMEaTOMIC( *pEther , timeConnected.time1 , timeConnected.time2 )
    
        bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005002.socketc.socketc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005003.socketc.dt_socketc BEGIN
#define DDNAME       "3func.36005003.socketc.dt_socketc"
#define DDNUMB      (countT)0x36005003
#define IDFILE      (countT)0xe21


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1070003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5420104.1.1.0.html\"\>5420104:  WAKEsHOW( "example.simplest.func.1070003.socketC.dt_socketC" )\</A\>
i can be called while another thread is blocked on a read or a write
 i do not refer to bRead or bWrite before closing the socket
i will deregister myself from stAcceptors even if i am impotent
 this is to avoid having an invalid pointer exist
*/
/**/

/*1*/socketC::~socketC( voidT )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        TINSL
        _IO_
    
        SCOOPP
    
        {
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( cFunctionsPending > 1 )
            {
                ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
            }
            THREADmODE1rESTORE
        }
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( 1 == decv02AM( tinP.pAdamGlobal3->_socketC_.cRef ) )
        {
            if( !tinP.pAdamGlobal3->_socketC_.pSwOdometer ) { BLAMMO ; }
    
            countT cFlavors = tinP.pAdamGlobal3->_socketC_.pSwOdometer->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                tinP.pAdamGlobal3->_socketC_.nnLever = *(nicNameC*)tinP.pAdamGlobal3->_socketC_.pSwOdometer->leverF( tinP , idf ) ;
                pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
                //if( tinP.pc Utility[ 0 ] ) { LOGrAW( TD("socketC::~socketC/odometer/")+TF3(pOdometer->cbRead,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,8)+T(" ")+TF3(pOdometer->cbWrite,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,8)+T(tinP.pAdamGlobal3->_socketC_.nnLever)+T("\r\n") ) ; }
            }
    
            DEL( tinP.pAdamGlobal3->_socketC_.pSwOdometer ) ;
        }
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;

        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        pEther->delF( tinP , psttName ) ;
    
        const countT ecSave = *pEther ;
        *pEther = 0 ;
    
        if( bCatcher && !( F(flags) & flSOCKETc_DOnOTrEGISTERcATCHER ) )
        {
            etherC::sockStkCatchersF( tinP ).grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( etherC::sockStkCatchersF( tinP )( (countT)this ) ) etherC::sockStkCatchersF( tinP ).extractF( tinP ) ;
            else                                                   __1
            etherC::sockStkCatchersF( tinP ).ungrabF( tinP ) ;
        }
    
        if( idType != ifcSOCKETtYPE_DATAgRAM && !( F(flags) & flSOCKETc_DOnOTrEGISTERqUITTER ) )
        {
            etherC::sockStkQuittersF( tinP ).grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( etherC::sockStkQuittersF( tinP )( (countT)this ) ) etherC::sockStkQuittersF( tinP ).extractF( tinP ) ;
            else if( !fListening )                                 __1
            etherC::sockStkQuittersF( tinP ).ungrabF( tinP ) ;
        }
    
        if( bAcceptor && !( F(flags) & flSOCKETc_DOnOTrEGISTERaCCEPTOR ) )
        {
            etherC::sockStkAcceptorsF( tinP ).grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( etherC::sockStkAcceptorsF( tinP )( (countT)this ) ) etherC::sockStkAcceptorsF( tinP ).extractF( tinP ) ;
            else                                                     __1
            etherC::sockStkAcceptorsF( tinP ).ungrabF( tinP ) ;
        }
    
        if( !( F(flags) & flSOCKETc_DOnOTrEGISTERtIMEoUT ) )
        {
            etherC::sockStkIdleTimeoutersF( tinP ).grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( etherC::sockStkIdleTimeoutersF( tinP )( (countT)this ) ) etherC::sockStkIdleTimeoutersF( tinP ).extractF( tinP ) ;
            else                                                     __1
            etherC::sockStkIdleTimeoutersF( tinP ).ungrabF( tinP ) ;
        }
        bRead.ungrabF( tinP ) ;
    
        if( !( F(flags) & flSOCKETc_LEAVEsOCKEToPENwHENdIE ) && ~handle ) handle.closeIfF() ;
    
        {
            countT** pppczKTS[] = { &pczKeyTopSecret , &pczKeyTopSecretPeer } ;
    
            countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
            for( countT off = 0 ; off < 2 ; off ++ )
            {
                if( /*off == 0 &&*/ *pppczKTS[ off ] ) //U::DELETE MY COPY OF THE PEER'S KEY IFF IT DID NOT OVERWRITE EXISTING COPY
                {                                      //U::ALT: SET A FLAG TO REMEMBER THAT PEER'S KEY ALREADY EXISTED, SO DON'T DELETE IT
                    TN( tDot , "." ) ;
                    textC tShort( tinP , TAG( TAGiDnULL ) , flTEXTc_null , *pppczKTS[ off ] , flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE , 8 , 0 , tDot ) ;
                    TN( tLong , "" ) ; tLong = T("///desk/" POSTfOLDERsECURITYkEYdEPOSITORY)+(idHomeDisk==1?T(""):T(" (Home ")+TF1(idHomeDisk)+T(")"))+T("/")+tShort ;
            
                    IFsCRATCH
                    {
                        SCOOPS
                        tinP.pEtScratch->boxZapF( tinP , tLong , 1 ) ;
                        if( POOP ) POOPR
                    }
                }
                pEther->delF( tinP , *pppczKTS[ off ] ) ;
            }
        }

        pEther->delF( tinP , psttPemCertificates ) ;
        pEther->delF( tinP , psttPemPrivateKey   ) ;
    
        *pEther = ecSave ;
    
        if( pMapPortBind ) pMapPortBind->idPortSpecified = pMapPortBind->idPortActual = 0 ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005003.socketc.dt_socketc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005004.socketc.bindf BEGIN
#define DDNAME       "3func.36005004.socketc.bindf"
#define DDNUMB      (countT)0x36005004
#define IDFILE      (countT)0xe22


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$bindF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7420104.1.1.0.html\"\>7420104:  WAKEsHOW( "example.simplest.func.1070005.socketC.bindF" )\</A\>
associates this socket with the specified port and host
see the sockBindF instruction for etherC objects
arguments
 idPortP
 nicNameP
 cTriesP
  can be 0
  if 0 then will retry forever until successful
*/
/**/

/*1*/countT socketC::bindF( tinS& tinP , const countT idPortP , const nicNameC nicNameP , const countT cTriesP , const boolT bInUseOkP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        _IO_
    
        ZE( ipMapHomeS* , pMap ) ;
        ZE( countT , idPortActual ) ;
        if( idPortP )
        {
            pMap = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
            countT cToDo = CiPmAPhOME ;
            while( cToDo )
            {
                if( pMap->idHome == etherC::ifc_idHomeIdisk_IF() )
                {
                    if( F(pMap->flagsHome) & flIPmAPhOMEs_NOmAPPING || !pMap->nnHome )
                    {
                        pMap = 0 ;
                        break ;
                    }
    
                    for( countT offp = 0 ; offp < sizeof pMap->pPort / sizeof pMap->pPort[ 0 ] ; offp ++ )
                    {
                        if( idPortP == pMap->pPort[ offp ].idPortSpecified )
                        {
                            idPortActual = pMap->pPort[ offp ].idPortActual ;
                            break ;
                        }
                    }
    
                    break ;
                }
    
                pMap ++ ;
                cToDo -- ;
            }
        }
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( bInUseOkP ) pEther->sockOptionReuseAddressF( tinP , handle ) ;
        countT idPortRequest = pMap ? idPortActual : idPortP ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        idPortMe = pEther->sockBindF( tinP , handle , idPortRequest , nicNameP , cTriesP ) ;
        THREADmODE1rESTORE
        if( pMap )
        {
            TN( tSay , "" ) ; tSay = TF2(tinP.pAdamGlobal1->idAdam,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/bindF: bound to port ")+TF4(idPortMe,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(" rather than to ")+TF2(idPortP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n") ;
            CONoUTrAW( tSay ) ;
            //LOGrAW( tSay ) ;
        }
        bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
        if( pMap )
        {
            const countT cSlots = sizeof pMap->pPort / sizeof pMap->pPort[ 0 ] ;
            ZE( countT , offp ) ;
            for( ; offp < cSlots ; offp ++ )
            {
                if( !setIfZeAM( pMap->pPort[ offp ].idPortSpecified , idPortP ) ) break ;
            }
    
            if( offp < cSlots )
            {
                pMapPortBind = &pMap->pPort[ offp ] ;
                pMapPortBind->idPortActual = idPortMe ;
            }
        }
    
    }
    dec02AM( cFunctionsPending ) ;
    return idPortMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005004.socketc.bindf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005005.socketc.stopwaitingf BEGIN
#define DDNAME       "3func.36005005.socketc.stopwaitingf"
#define DDNUMB      (countT)0x36005005
#define IDFILE      (countT)0xe23


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$stopWaitingF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070006.1.0.html\"\>definition\</A\>
interrupts another thread that is blocked on an instruction to this socket
i permanently "ruin" this socketC object
unlike most member functions, i do not refer to bRead or bWrite
*/
/**//*1*/voidT socketC::stopWaitingF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        pEther->sockCancelF( tinP , handle ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005005.socketc.stopwaitingf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005006.socketc.connectf BEGIN
#define DDNAME       "3func.36005006.socketc.connectf"
#define DDNUMB      (countT)0x36005006
#define IDFILE      (countT)0xe24


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$connectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8420104.1.1.0.html\"\>8420104:  WAKEsHOW( "example.simplest.func.1070007.socketC.connectF" )\</A\>
connects to a peer socket
the peer socket must be listening for new clients
most applications should only specify the tinP argument
arguments
 tinP
 idPortP
  can be 0
  if 0 then will connect to a port specified by the port ifcPORToLD2_CHAT server of nicNameP
 nicNameP
  can be 0
  if 0 then the local host is implied
 cTriesP
 time1P
 time2P
*/
/**/

/*1*/voidT socketC::connectF( tinS& tinP , countT idPortP , const nicNameC nicNameP , countT cTriesP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        ZE( ipMapHomeS* , pMap ) ;
        if( nicNameP )
        {
            pMap = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
            countT cToDo = CiPmAPhOME ;
            while( cToDo )
            {
                if( pMap->nnHome == nicNameP ) break ;
                pMap ++ ;
                cToDo -- ;
            }
    
            if( !cToDo || F(pMap->flagsHome) & flIPmAPhOMEs_NOmAPPING ) pMap = 0 ;
        }
    
        if( pMap )
        {
            const countT cSlots = sizeof pMap->pPort / sizeof pMap->pPort[ 0 ] ;
            for( countT offp = 0 ; offp < cSlots ; offp ++ )
            {
                if( idPortP == pMap->pPort[ offp ].idPortSpecified )
                {
                    idPortP =  pMap->pPort[ offp ].idPortActual ; //U::RACE: MIGHT STILL BE ZE
                    CONoUTrAW9( "" , tinP.pAdamGlobal1->idAdam , "/connectF: mapping connection to  " , *(const countT*)nicNameP , " port " , pMap->pPort[ offp ].idPortSpecified , " to port " , pMap->pPort[ offp ].idPortActual , "\r\n" ) ;
                    break ;
                }
            }
        }
    
        countT idPort = idPortP ;
        if( !idPort )
        {
            socketC sChat( tinP , *pEther , TAG( TAGiDnULL ) ) ;
            sChat.connectF( tinP , ifcPORToLD2_CHAT , nicNameP ) ;
    
            soulC soulo( tinP , TAG( TAGiDnULL ) , flSOUL_null , ifcIDcMDsESSION_NEWsOCKET ) ;
            sChat.writeF( tinP , soulo ) ;
    
            soulC souli( tinP , TAG( TAGiDnULL ) ) ;
            sChat.readF( tinP , souli ) ;
            ZE( countT , idReply ) ;
            souli >> idReply ;
            __( idReply - ifcIDcMDsESSION_NEWsOCKETrEPLY ) ;
            souli >> idPort ;
    
            //pEther->strokeF( tinP , T("the chat server told me to connect to port ")+TF1(idPort)+T("\r\n") ) ;
        }
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        pEther->sockConnectF( tinP , handle , idPort , nicNameP , cTriesP , time1P , time2P ) ;
        THREADmODE1rESTORE
        nnPeer = nicNameP ;
    
        {
            idPortMe = 0 ;
            nicNameC idh ;
            myNameF( tinP , idPortMe , idh ) ;
        }
    
        if( F(flags) & flSOCKETc_TOPsECRET )
        {
            //CONoUTrAW( "CONNECTED IN TOP SECRET MODE\r\n" ) ;
            __NZ( pczKeyTopSecret ) ;
            pEther->cioMakeKeyF( tinP , pczKeyTopSecret , idbKEYtYPE_PIN , idbKEYpINtYPE_SOCKETcONNECTION ) ; ___( pczKeyTopSecret ) ;
            bRead.ungrabF( tinP ) ;
            bWrite.ungrabF( tinP ) ;
        }
        else
        {
            bRead.ungrabF( tinP ) ;
            bWrite.ungrabF( tinP ) ;
            //CONoUTrAW( tinP.postThreadName ) ;
            //CONoUTrAW( " connected in the clear\r\n" ) ;
        }
    
        if( timeAllowedConnected ) FRESHtIMEaTOMIC( *pEther , timeConnected.time1 , timeConnected.time2 )
    
        if( F(flags) & flSOCKETc_CRYPTfOREIGNsSL && !( F(flags) & flSOCKETc_CRYPTfOREIGNsSLdEFERhANDSHAKE ) ) shakeHandsAsClientF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005006.socketc.connectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005008.socketc.listenf BEGIN
#define DDNAME       "3func.36005008.socketc.listenf"
#define DDNUMB      (countT)0x36005008
#define IDFILE      (countT)0xe25


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$listenF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070009.1.0.html\"\>definition\</A\>
if i am to accept connections, listenF must be called once before the first call to acceptF
after calling listenF, be sure to verify !ether, to ensure that tinP.pAdamGlobal1->_thirdC_.flQuitting was not just set, before calling acceptF
*/
/**/

/*1*/voidT socketC::listenF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( fListening ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        pEther->sockListenF( tinP , handle ) ;
        fListening = 1 ;
    
        if( !bAcceptor )
        {
            bAcceptor = 1 ;
            if( !( F(flags) & flSOCKETc_DOnOTrEGISTERaCCEPTOR ) )
             {
                etherC::sockStkQuittersF( tinP ).grabF( tinP , TAG( TAGiDnULL ) ) ;
                if( etherC::sockStkQuittersF( tinP )( (countT)this ) ) etherC::sockStkQuittersF( tinP ).extractF( tinP ) ;
                etherC::sockStkQuittersF( tinP ).ungrabF( tinP ) ;
    
                //__( F(tinP.flagsThreadMode3) & flTHREADmODE3_NOTwATCHED ) ;
    
                ZE( countT , idSlot ) ;
                etherC::sockStkAcceptorsF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
                __Z( idSlot ) ;
            }
        }
    
        bRead.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005008.socketc.listenf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005009.socketc.peekf BEGIN
#define DDNAME       "3func.36005009.socketc.peekf"
#define DDNUMB      (countT)0x36005009
#define IDFILE      (countT)0xe26


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$peekF.0.html\"\>instances\</A\>
\<A HREF=\"5.107000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0520104.1.1.0.html\"\>0520104:  WAKEsHOW( "example.simplest.func.107000a.socketC.peekF" )\</A\>
gets the specified number of bytes from the peer, without removing them from the peer
see the flSOCKETc symbolic constants for flags that can be specified
arguments
 pbP
 cbP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001000f.flSOCKETc!||
*/
/**/

/*1*/countT socketC::peekF( tinS& tinP , byteT* const pbP , const countT cbP , const flagsT flagsP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( countT , rc ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }

            __Z( pbP ) ;
            __Z( cbP ) ;
            FV( flSOCKETcrEAD , flagsP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        _IO_
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        rc = pEther->sockPeekF( tinP , handle , pbP , cbP , flagsP , time1P , time2P , F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ? ifcIDmODEsOCKETS_ENCRYPTED : ifcIDmODEsOCKETS_NOTeNCRYPTED ) ;
        THREADmODE1rESTORE
        bRead.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
    return rc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005009.socketc.peekf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500a.socketc.readf BEGIN
#define DDNAME       "3func.3600500a.socketc.readf"
#define DDNUMB      (countT)0x3600500a
#define IDFILE      (countT)0xe27


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.107000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9420104.1.1.0.html\"\>9420104:  WAKEsHOW( "example.simplest.func.107000b.socketC.readF" )\</A\>
gets the specified number of bytes from the peer
evaluates to the actual number of bytes read
see the flSOCKETc symbolic constants for flags that can be specified
arguments
 pbP
 cbP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100fd.flSOCKETcrEAD!||
*/
/**/

/*1*/countT socketC::readF( tinS& tinP , byteT* const pbP , const countT cbP , const flagsT flagsP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( countT , cbActual ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }

            __Z( pbP ) ;
            __Z( cbP ) ;
            FV( flSOCKETcrEAD , flagsP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;

        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        cbActual = pEther->sockReadF( tinP , handle , pbP , cbP , flagsP , time1P , time2P , F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ? ifcIDmODEsOCKETS_ENCRYPTED : ifcIDmODEsOCKETS_NOTeNCRYPTED ) ;
        THREADmODE1rESTORE
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
    return cbActual ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500a.socketc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500b.socketc.writef BEGIN
#define DDNAME       "3func.3600500b.socketc.writef"
#define DDNUMB      (countT)0x3600500b
#define IDFILE      (countT)0xe28


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.107000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a420104.1.1.0.html\"\>a420104:  WAKEsHOW( "example.simplest.func.107000c.socketC.writeF" )\</A\>
writes specified bytes to the peer
arguments
 pbP
  must not be 0
 cbP
  if 0 then pbP must be a null terminated string of bytes, which will be written
  the terminating null (0) will -not- be written
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( pbP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        //U:: REMOVE THIS OLD CODE
        //if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , pbP , cbP ) ;
        //else                                               pEther->sockWriteF(     tinP , handle      , pbP , cbP ) ;

        pEther->sockWriteF( tinP , handle , pbP , cbP , F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ? ifcIDmODEsOCKETS_ENCRYPTED : ifcIDmODEsOCKETS_NOTeNCRYPTED ) ;

        THREADmODE1rESTORE
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500b.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500c.socketc.readworeplyf BEGIN
#define DDNAME       "3func.3600500c.socketc.readworeplyf"
#define DDNUMB      (countT)0x3600500c
#define IDFILE      (countT)0xe29


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readWoReplyF.0.html\"\>instances\</A\>
\<A HREF=\"5.107000d.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
reads a reply from the peer
to be used only on a telnet protocol connection
this function is inefficient
arguments
 psttP
 csttEstimateP
  can be 0
  if 0 then 100 is implied
  if the actual line input is longer than this, the bad coding style condition will be set
*/
/**/

#if defined( NEVERdEFINED )

// BEFORE REWRITE (THIS CODE DOES NOT WORK; IT HANGS WHILE PROCESSING MULTILINE RESPONSE DURING SMTP INITIALIZATION)

/*1*/countT socketC::readWoReplyF( tinS& tinP , strokeS*& psttP , countT csttEstimateP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( countT , replyCode ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        if( !csttEstimateP ) csttEstimateP = 0x100 ;
        byteT pbIn[] = { 0 , 0 } ;
        strokeS psttDash[ CSpREFIX + 4 ] ;
        SETpREFIX( psttDash , 4 , 0 ) ;
        psttDash[ CSpREFIX     ] = 0 ;
        psttDash[ CSpREFIX + 1 ] = 0 ;
        psttDash[ CSpREFIX + 2 ] = 0 ;
        psttDash[ CSpREFIX + 3 ] = 0 ;
        ZE( countT , fLF ) ;
        ZE( boolT , fBegin ) ; // AM ABOUT TO READ THE FIRST CHAR IN A LINE
        fBegin = 1 ;
        ZE( countT , idCycle ) ;
        while( !*pEther )
        {
            if( ++ idCycle == 7 )
            {
                countT foo = 2 ;
            }

            CONoUTrAW( "." ) ;
            if( fBegin )
            {
                fBegin = 0 ;
                if( !psttDash[ CSpREFIX ] ) // NEXT 3 CHARS ARE A CODE, FOLLOWED BY ' ' OR '-'
                {
                    ZE( countT , off ) ;
                    while( !*pEther && off < 3 )
                    {
                        CONoUTrAW( "!" ) ;
                        readF( tinP , pbIn , 1 ) ;
                        CONoUTrAW( pbIn ) ; //U::
                        if( !*pEther ) psttDash[ CSpREFIX + off ++ ] = pbIn[ 0 ] ;
                    }
                    if( !*pEther ) replyCode = pEther->strDigitsToSCountF( tinP , psttDash , 0xa , 1 ) ;
                    if( !*pEther )
                    {
                        readF( tinP , pbIn , 1 ) ;
                        CONoUTrAW( pbIn ) ; //U::
                        if( !*pEther ) psttDash[ CSpREFIX + off ++ ] = pbIn[ 0 ] ;
                    }
    
                    if( !*pEther && psttDash[ CSpREFIX - 1 + off ] != '-' )
                         psttDash[ CSpREFIX + 3 ] = psttDash[ CSpREFIX + 2 ] = psttDash[ CSpREFIX + 1 ] = psttDash[ CSpREFIX ] = 0 ;
                }
                else // NEXT 4 CHARS ARE EITHER "CONTINUATION STUTTER" OR MOSTLY MATCH pbDash OR ARE MESSAGE TEXT
                {
                    byteT pbFirst[] = { 0 , 0 , 0 , 0 , 0 } ;
                    ZE( countT , off ) ;
                    peekF( tinP , pbFirst , 4 ) ;
                    off = 4 ;
                    ZE( strokeS* , psttFirst ) ;
                    pEther->strMakeF( tinP , LF , psttFirst , T(pbFirst) ) ; ___( psttFirst ) ;
    
                    if( !pEther->strCompareF( tinP , psttDash , psttFirst , 4 ) )
                    {
                        byteT pbToss[] = { 0 , 0 } ;
                        off = 0 ;
                        while( !*pEther && off < 4 )
                        {
                            CONoUTrAW( "@" ) ;
                            readF( tinP , pbToss , 1 ) ;
                            CONoUTrAW( pbToss ) ; //U::
                            if( !*pEther ) off ++ ;
                        }
                    }
                    else if( !pEther->strCompareF( tinP , psttDash , psttFirst , 3 ) && (countT)psttFirst[ CSpREFIX + 3 ] == ' ' ) // TERMINATION CODE
                    {
                        psttDash[ CSpREFIX + 3 ] = psttDash[ CSpREFIX + 2 ] = psttDash[ CSpREFIX + 1 ] = psttDash[ CSpREFIX ] = 0 ;
                        byteT pbToss[] = { 0 , 0 } ;
                        off = 0 ;
                        while( !*pEther && off < 4 )
                        {
                            CONoUTrAW( "#" ) ;
                            readF( tinP , pbToss , 1 ) ;
                            CONoUTrAW( pbToss ) ; //U::
                            if( !*pEther ) off ++ ;
                        }
                    }
    
                    pEther->delF( tinP , psttFirst ) ;
                }
            }
            else
            {
                CONoUTrAW( "$" ) ;
                byteT pbIn[] = { 0 , 0 } ;
                readF( tinP , pbIn , 1 ) ;
                CONoUTrAW( pbIn ) ; //U::
                if( !*pEther )
                {
                    pEther->strFuseF( tinP , psttP , T(pbIn) , 0 , 0 , strokeS() , 0 , 0 , /*U::SOUL?*/ csttEstimateP ) ; ___( psttP ) ;
                    fBegin = *pbIn == '\n' ;
                    if( fBegin && !psttDash[ CSpREFIX ] ) break ;
                }
            }
        }
    
        CONoUTrAW( "\r\nout of loop\r\n" ) ;

        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
    return replyCode ;
}

#else


/*1*/countT socketC::readWoReplyF( tinS& tinP , strokeS*& psttP , countT csttEstimateP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( countT , replyCode ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
            __NZ( psttP ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;

        _IO_

        if( !csttEstimateP ) csttEstimateP = 0x100 ;

        pEther->strMakeF( tinP , LF , psttP , 0 , csttEstimateP ) ; ___( psttP ) ;

        {
            ZE( osTextT* , postLine ) ;
            pEther->newF( tinP , LF , postLine , csttEstimateP ) ; ___( postLine ) ;

            ZE( countT , offo ) ;
            while( !POOP )
            {
                byteT pbIn[] = { 0 , 0 } ;
                readF( tinP , pbIn , 1 ) ;
                //CONoUTrAW( "[char]:    " ) ;
                //CONoUTrAW3( "" , *pbIn , "    " ) ; //U::
                //CONoUTrAW( pbIn ) ; //U::
                //CONoUTrAW( "\r\n" ) ;

                postLine[ offo ++ ] = pbIn[ 0 ] ;

                if( postLine[ offo - 1 ] == '\n' )
                {
                    postLine[ offo ] = 0 ;
                    pEther->strFuseF( tinP , psttP , T(postLine) ) ;
                    offo = 0 ;

                    if( postLine[ 3 ] == ' ' )
                    {
                        postLine[ 3 ] = 0 ;
                        replyCode = pEther->strDigitsToSCountF( tinP , T(postLine) , 0xa , 1 ) ;
                        break ;
                    }
                }
            }

            pEther->delF( tinP , postLine ) ;
        }

        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
    return replyCode ;
}

#endif

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500c.socketc.readworeplyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500d.socketc.writef BEGIN
#define DDNAME       "3func.3600500d.socketc.writef"
#define DDNUMB      (countT)0x3600500d
#define IDFILE      (countT)0xe2a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.107000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b420104.1.1.0.html\"\>b420104:  WAKEsHOW( "example.simplest.func.107000e.socketC.writeF" )\</A\>
sends the string, including its prefix, to the peer
arguments
 tinP
 psttP
  must not be 0
 bNoPrefixP
  if 0 then the prefixed string at psttP is written
  if 1 then the unprefixed string at psttP + CSpREFIX is written
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const strokeS* const psttP , const boolT bNoPrefixP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( psttP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        if( bNoPrefixP ) writeF( tinP , (byteT*)( psttP + CSpREFIX ) , sizeof( strokeS ) * (            psttP->idAdam ) ) ;
        else             writeF( tinP , (byteT*)psttP                , sizeof( strokeS ) * ( CSpREFIX + psttP->idAdam ) ) ;
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500d.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500f.socketc.readwomultilinef BEGIN
#define DDNAME       "3func.3600500f.socketc.readwomultilinef"
#define DDNUMB      (countT)0x3600500f
#define IDFILE      (countT)0xe2b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readWoMultilineF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8430104.1.1.0.html\"\>8430104:  WAKEsHOW( "example.simplest.func.1070010.socketC.readWoMultilineF" )\</A\>
gets one multiline message from the peer
the end of the message is marked by a line that is equal to psttDelimiterP
the terminating line that equals the delimiter string is excluded from the returned string
if only the terminating line is read, psttP will be a null length string
else psttP will contain a line, followed by "\r\n", for each line read, excluding the terminating line
arguments
 psttP
  after evaluation, will contain the lines read
 psttDelimiterP
  value of the line to be used as the delimiting line
  example: T("stop here")
   in this example, reading will stop when a line consisting exactly of "stop here" is encountered
  the delimiting line is excluded from the value returned in psttP
  can be 0
  if 0 then T("") is used
   reading will stop when a null length line is encountered
 csttEstimateP
  can be 0
  if 0 then 100 is implied
*/
/**/

/*1*/voidT socketC::readWoMultilineF( tinS& tinP , strokeS*& psttP , const strokeS* const psttDelimiterP , countT csttEstimateP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        ZE( strokeS* , psttDelimiter ) ;
        if( psttDelimiterP ) { pEther->strMakeF( tinP , LF , psttDelimiter , psttDelimiterP ) ; ___( psttDelimiter ) ; }
        else                 { pEther->strMakeF( tinP , LF , psttDelimiter , T("")          ) ; ___( psttDelimiter ) ; }
        if( !csttEstimateP ) csttEstimateP = 0x100 ;
    
        TN( tCRLF , "\r\n" ) ;
        while( !*pEther )
        {
            ZE( strokeS* , psttl ) ;
            readWoLineF( tinP , psttl , csttEstimateP ) ; ___( psttl ) ;
            if( !pEther->strCompareF( tinP , psttl , psttDelimiter ) )
            {
                pEther->delF( tinP , psttl ) ;
                break ;
            }
            else
            {
                pEther->strFuseF( tinP , psttP , psttl , 0 , 0 , strokeS() , 0 , 0 ,/*U::SOUL?*/ csttEstimateP ) ; ___( psttP ) ;
                pEther->strFuseF( tinP , psttP , tCRLF ) ; ___( psttP ) ;
                pEther->delF( tinP , psttl ) ;
            }
        }
        pEther->delF( tinP , psttDelimiter ) ;    
    
        if( !psttP ) { pEther->strMakeF( tinP , LF , psttP , T("") ) ; ___( psttP ) ; }
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600500f.socketc.readwomultilinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005010.socketc.readwolinef BEGIN
#define DDNAME       "3func.36005010.socketc.readwolinef"
#define DDNUMB      (countT)0x36005010
#define IDFILE      (countT)0xe2c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readWoLineF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c420104.1.1.0.html\"\>c420104:  WAKEsHOW( "example.simplest.func.1070011.socketC.readWoLineF" )\</A\>
gets one line from the peer socket
 a line is delimited by "\r\n" or "\r" or "\n"
  if "\r" is not followed by an "\n", an implicit "\n" is used
  this allows each line to be delimited by ether "\r\n" or "\r"
   this forgiving behavior was inserted after seeing that some html at search.excite.com contained orphan "\r"s
 the delimiting "\r\n" is excluded from the returned string
this function is inefficient, so should not be used to read "long" lines
arguments
 psttP
 csttEstimateP
  must not be 0
  if the actual line input is longer than this, a bad coding style error will be generated
 postEscapeP
  may be 0
  if not 0 then must be a null terminated string
  if match then i return the id of the osTextT match immediately and do not set psttP
*/
/**/

//U::REWRITE TO ELIMINATE csttEstimateP
//U::NOTE I ALLREADY HAVE THE OTHER OVERLOAD

/*1*/osTextT socketC::readWoLineF( tinS& tinP , strokeS*& psttP , const countT csttEstimateP , const osTextT* const postEscapeP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( osTextT , ostEscaped ) ;
    {
        SCOOPP
        IFbEcAREFUL        
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }

            __Z( csttEstimateP ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        ZE( byteT , bIn ) ;
        strokeS psttIn[ CSpREFIX + 1 ] ;
        SETpREFIX( psttIn , 1 , 0 ) ;
        psttIn[ CSpREFIX ] = 0 ;
        boolT bLookForEscape = !!postEscapeP ;
        pEther->strMakeF( tinP , LF , psttP , 0 , csttEstimateP ) ; ___( psttP ) ;
        boolT bWoth = 1 ; //U:: TO FIND A BUG
        if( psttP ) while( !*pEther )
        {
            if( !psttP[ 2 ].idAdam ) break ; //csttExtra (see s*.GETpREFIX)
    
            readF( tinP , &bIn , 1 ) ;
    
            if( bWoth )
            {
                bWoth = 0 ;
            }

            if( bLookForEscape )
            {
                bLookForEscape = 0 ;
                ZE( countT , offi ) ;
                while( postEscapeP[ offi ] )
                {
                    if( bIn == postEscapeP[ offi ++ ] )
                    {
                        ostEscaped = postEscapeP[ offi - 1 ] ;
                        break ;
                    }
                }
    
                if( ostEscaped ) break ;
            }
    
            if( bIn == '\n' ) break ;
            else if( bIn == '\r' )
            {
                peekF( tinP , &bIn , 1 ) ;
                if( bIn == '\n' )
                {
                    readF( tinP , &bIn , 1 ) ;
                }
                break ;
            }
            else
            {
                psttIn[ CSpREFIX ] = bIn ;
                pEther->strFuseF( tinP , psttP , psttIn , 0 , 0 , strokeS() , 0 , 0 ,/*U::SOUL?*/ csttEstimateP ) ; ___( psttP ) ;
            }
        }
        if( !ostEscaped && !psttP ) { pEther->strMakeF( tinP , LF , psttP , T("") ) ; ___( psttP ) ; }
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;

    return ostEscaped ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005010.socketc.readwolinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005011.socketc.mynamef BEGIN
#define DDNAME       "3func.36005011.socketc.mynamef"
#define DDNUMB      (countT)0x36005011
#define IDFILE      (countT)0xe2d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$myNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e420104.1.1.0.html\"\>e420104:  WAKEsHOW( "example.simplest.func.1070012.socketC.myNameF" )\</A\>
gets my own host id and port id
it is illegal to call me on an unconnected socket when a valid nicNameP is needed
 on an unconnected socket on a multihomed host, nicNameP is undefined on return
arguments
 idPortP
 nicNameP
*/
/**/

/*1*/voidT socketC::myNameF( tinS& tinP , countT& idPortP , nicNameC& nicNameP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        pEther->sockMyNameF( tinP , idPortP , nicNameP , handle ) ;
        //bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005011.socketc.mynamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005012.socketc.peernamef BEGIN
#define DDNAME       "3func.36005012.socketc.peernamef"
#define DDNUMB      (countT)0x36005012
#define IDFILE      (countT)0xe2e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$peerNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f420104.1.1.0.html\"\>f420104:  WAKEsHOW( "example.simplest.func.1070013.socketC.peerNameF" )\</A\>
gets the peer's host id and port id
this will only work if the socket is connected
arguments
 idPortP
 nicNameP
*/
/**//*1*/voidT socketC::peerNameF( tinS& tinP , countT& idPortP , nicNameC& nicNameP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        pEther->sockPeerNameF( tinP , idPortP , nicNameP , handle ) ;
        //bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005012.socketc.peernamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005013.socketc.etherf BEGIN
#define DDNAME       "3func.36005013.socketc.etherf"
#define DDNUMB      (countT)0x36005013
#define IDFILE      (countT)0xe2f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$etherF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d420104.1.1.0.html\"\>d420104:  WAKEsHOW( "example.simplest.func.1070014.socketC.etherF" )\</A\>
unconditionally replaces the etherC object that will do the work for this socket
if etherP is impotent then it retains its impotence value
if it is not impotent, then it inherits the impotence value of the old *this->pEther
use this function to control which etherC object will become impotent if an exception occurs
arguments
 etherP
*/
/**//*1*/voidT socketC::etherF( tinS& tinP , etherC& etherP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        _IO_
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        countT const ecOld = *pEther ;
        pEther = &etherP ; // ASSUME: THIS IS COMPILED TO A SINGLE ASSEMBLY INSTRUCTION, SO OTHER THREADS WILL NEVER GET AN INVALID POINTER VALUE
        pPoop = &(const poopC&)etherP ;
        if( !*pEther ) *pEther = ecOld ;
        mom.etherF( tinP , etherP ) ;
        dad.etherF( tinP , etherP ) ;
        bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005013.socketc.etherf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005014.socketc.readtonulllinef BEGIN
#define DDNAME       "3func.36005014.socketc.readtonulllinef"
#define DDNUMB      (countT)0x36005014
#define IDFILE      (countT)0xe30


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readToNullLineF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070016.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
U: do not use this function; it does not work correctly
 this function will, in general, read more than it should from the peer socket
gets one multiline message from the peer
the end of the message is marked by a line containing no characters
the terminating "\r\n\r\n" is excluded from the returned string
this overload is less efficient than the one that returns a string of osTextT's
 it should only be used for convenience, when the messages are short
assumption: the multiline message is no more than CBlIMITfROMsTUPIDcLIENT bytes long
arguments
 psttP
 fConPutP
 csttEstimateP
  can be 0
  if 0 then 100 is implied
  if the actual line input is longer than this, no error will occur but bad coding style warnings will be generated
*/
/**//*1*/voidT socketC::readToNullLineF( tinS& tinP , strokeS*& psttP , countT csttEstimateP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        if( !csttEstimateP ) csttEstimateP = 0x100 ;
        ZE( byteT* , pbb ) ;
        pEther->newF( tinP , LF , pbb , CBlIMITfROMsTUPIDcLIENT + 1 ) ; ___( pbb ) ;
    
        while( !*pEther )
        {
            countT cba = readF( tinP , pbb , CBlIMITfROMsTUPIDcLIENT , flSOCKETcrEAD_STILLhUNGRYiSoK | flSOCKETcrEAD_JUSToNEmOUTHFUL ) ;
            pbb[ cba ] = 0 ;
            if( !cba ) break ;
    
            ZE( strokeS* , psttw ) ;
            pEther->strMakeF( tinP , LF , psttw , T(pbb) , csttEstimateP ) ; ___( psttw ) ;
            countT idf = 1 ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            ZE( countT , idp ) ;
            if( psttw[ CSpREFIX ] == S1C('\r') && psttw[ CSpREFIX + 1 ] == S1C('\n') ) idp = 1 ;
            if( !idp ) idp = pEther->strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T("\r\n\r\n") , psttw ) ;
            if( !*pEther && idp ) psttw[ CSpREFIX - 1 + idp ] = S1C( 0 ) ;
            pEther->strFuseF( tinP , psttP , psttw , 0 , 0 , strokeS() , 0 , 0 ,/*U::SOUL?*/ csttEstimateP ) ; ___( psttP ) ;
            pEther->delF( tinP , psttw ) ;
            if( idp ) break ;
        }
    
        if( !psttP ) { pEther->strMakeF( tinP , LF , psttP , T("") ) ; ___( psttP ) ; }
        pEther->delF( tinP , pbb ) ;
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005014.socketc.readtonulllinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005015.socketc.readtonulllinef BEGIN
#define DDNAME       "3func.36005015.socketc.readtonulllinef"
#define DDNUMB      (countT)0x36005015
#define IDFILE      (countT)0xe31


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readToNullLineF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070017.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
U: do not use this function; it does not work correctly
 this function will, in general, read more than it should from the peer socket
gets one multiline message from the peer
the end of the message is marked by a line containing no characters
the terminating "\r\n\r\n" is excluded from the returned string
this overload is more efficient than the one that returns a string of strokeS's
assumption: the multiline message is no more than CBlIMITfROMsTUPIDcLIENT bytes long
arguments
 postP
 fConPutP
 csttEstimateP
  can be 0
  if 0 then 100 is implied
  if the actual line input is longer than this, no error will occur but bad coding style warnings will be generated
*/
/**//*1*/voidT socketC::readToNullLineF( tinS& tinP , osTextT*& postP , countT csttEstimateP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        if( !csttEstimateP ) csttEstimateP = 0x100 ;
        pEther->newF( tinP , LF , postP , CBlIMITfROMsTUPIDcLIENT + 1 ) ; ___( postP ) ;
    
        ZE( countT , off ) ;
        while( !*pEther )
        {
            countT cba = readF( tinP , postP + off , CBlIMITfROMsTUPIDcLIENT - off , flSOCKETcrEAD_STILLhUNGRYiSoK | flSOCKETcrEAD_JUSToNEmOUTHFUL ) ;
            postP[ off + cba ] = 0 ;
            if( !cba ) break ;
            ZE( countT , idp ) ;
            if( postP[ 0 ] == '\r' && postP[ 1 ] == '\n' ) idp = 1 ;
            else
            {
                ZE( osTextT* , postd ) ;
                postd = (osTextT*)thirdC::c_strstrIF( tinP , postP , "\r\n\r\n" ) ;
                if( postd ) idp = postd - postP + 1 ;
            }
            if( idp && !*pEther ) postP[ idp - 1 ] = 0 ;
            if( idp ) break ;
            off += cba ;
            __( CBlIMITfROMsTUPIDcLIENT <= off ) ;
        }
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005015.socketc.readtonulllinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005016.socketc.writemsgf BEGIN
#define DDNAME       "3func.36005016.socketc.writemsgf"
#define DDNUMB      (countT)0x36005016
#define IDFILE      (countT)0xe32


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeMsgF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2930104.1.1.0.html\"\>2930104:  WAKEsHOW( "example.simplest.func.1070019.socketC.writeMsgF" )\</A\>
writes specified bytes to the peer using the IFC message protocol
 writes 1, idMsgOut, cbP, pbP
  1 indicates that this is a message (rather than an ack)
  idMsgOut is consecutive from 1 and is unique for each message going out from a socket
 then reads 2, idMsgOutr, cbr
  2 indicates that this is an ack
  idMsgOutr must equal the idMsgOut just sent
  cbr must equal the cbP just sent
this protocol is subject to change
 both ends of a connection should use writeMsgF, readMsgOkF, and readMsgNokF
arguments
 pbP
  must not be 0
 cbP
  if 0 then pbP must be a null terminated string of bytes, which will be written
  the terminating null (0) will -not- be written
*/
/**/

/*1*/voidT socketC::writeMsgF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( pbP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        countT cbo = cbP ? cbP : pEther->strBodyLengthF( tinP , pbP ) ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        countT idType = 1 ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idType , sizeof idType ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idType , sizeof idType ) ;

        countT idMsgOut = ++ idMsgOutLast ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idMsgOut , sizeof idMsgOut ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idMsgOut , sizeof idMsgOut ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&cbo , sizeof cbo ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&cbo , sizeof cbo ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , pbP , cbo ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , pbP , cbo ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&idType , sizeof idType , handle ) ;
        else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&idType , sizeof idType ) ;

        __( idType - 2 ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&idMsgOut , sizeof idMsgOut , handle ) ;
        else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&idMsgOut , sizeof idMsgOut ) ;

        __( idMsgOut - idMsgOutLast ) ;
        ZE( countT , cbr ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&cbr , sizeof cbr , handle ) ;
        else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&cbr , sizeof cbr ) ;

        THREADmODE1rESTORE
        __( cbr - cbo ) ;
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005016.socketc.writemsgf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005017.socketc.readmsgf BEGIN
#define DDNAME       "3func.36005017.socketc.readmsgf"
#define DDNUMB      (countT)0x36005017
#define IDFILE      (countT)0xe33


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readMsgF.0.html\"\>instances\</A\>
\<A HREF=\"5.107001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3930104.1.1.0.html\"\>3930104:  WAKEsHOW( "example.simplest.func.107001a.socketC.readMsgF" )\</A\>
reads specified bytes to the peer using the IFC message protocol
 the remote peer is assumed to have written a message using the following protocol
  writes 1, idMsg, cbP, pbP
   1 indicates that this is a message (rather than an ack)
   idMsg is consecutive from 1 and is unique for each message going out from a socket
  then reads 2, idMsgr, cbr
   2 indicates that this is an ack
   idMsgr must equal the idMsg just sent
   cbr must equal the cbP just sent
 this protocol is subject to change
  both ends of a connection should use writeMsgF, readMsgF, and readMsgOkF (or readMsgNack)
the caller -must- follow this call with a call to readMsgOkF (or readMsgNokF)
 this function grabs the socketC object but does not release it
 readMsgOkF will release it without grabbing it
 call readMsgOkF after the data received has been processed
 call readMsgNokF if the data cannot be processed
this function evaluates to the number of bytes of data received (and placed into pbP)
this function appends a null byte to the data, which is not included in the length value that is returned
arguments
 pbP
  must be 0
*/
/**/

/*1*/countT socketC::readMsgF( tinS& tinP , byteT*& pbP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }

            __NZ( pbP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }

        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ; // THIS IS RELEASED BY readMsgOkF OR readMsgNokF
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        {
            ZE( countT , idType ) ;
            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&idType  , sizeof idType , handle ) ;
            else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&idType  , sizeof idType ) ;
             __( idType - 1 ) ;
        }
    
        {
            ZE( countT , idMsgIn ) ;
            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&idMsgIn , sizeof idMsgIn , handle ) ;
            else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&idMsgIn , sizeof idMsgIn ) ;
            __( idMsgIn - idMsgInLast - 1 ) ;
            idMsgInLast = idMsgIn ;
        }

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , (byteT*)&cbMsgInLast , sizeof cbMsgInLast , handle ) ;
        else                                               pEther->sockReadF(     tinP , handle      , (byteT*)&cbMsgInLast , sizeof cbMsgInLast ) ;

        THREADmODE1rESTORE
        __Z( cbMsgInLast ) ;
        if( cbMsgInLast )
        {
            pEther->newF( tinP , LF , pbP , cbMsgInLast + 1 ) ; ___( pbP ) ;
            if( pbP ) pbP[ cbMsgInLast ] = 0 ;
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , pbP , cbMsgInLast , handle ) ;
            else                                               pEther->sockReadF(     tinP , handle      , pbP , cbMsgInLast ) ;

            THREADmODE1rESTORE
        }
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
    }
    dec02AM( cFunctionsPending ) ;
    return cbMsgInLast ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005017.socketc.readmsgf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005018.socketc.readmsgokf BEGIN
#define DDNAME       "3func.36005018.socketc.readmsgokf"
#define DDNUMB      (countT)0x36005018
#define IDFILE      (countT)0xe34


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readMsgOkF.0.html\"\>instances\</A\>
\<A HREF=\"5.107001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4930104.1.1.0.html\"\>4930104:  WAKEsHOW( "example.simplest.func.107001b.socketC.readMsgOkF" )\</A\>
sends an acknowledgement to the peer that processing was successful for the last message read using the IFC message protocol
 the remote peer is assumed to have written a message using the following protocol
  writes 1, idMsg, cbP, pbP
   1 indicates that this is a message (rather than an ack)
   idMsg is consecutive from 1 and is unique for each message going out from a socket
  then reads 2, idMsgr, cbr
   2 indicates that this is an ack
   idMsgr must equal the idMsg just sent
   cbr must equal the cbP just sent
 this protocol is subject to change
  both ends of a connection should use writeMsgF, readMsgF, and readMsgOkF (or readMsgNack)
the caller -must- precede this call with a call to readMsgF
 this function releases the socketC object but does not grab it
call readMsgOkF after the data received has been processed
call readMsgNokF if the data cannot be processed
arguments
 tinP
*/
/**/

/*1*/voidT socketC::readMsgOkF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        {
            countT idType = 2 ;
            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idType , sizeof idType ) ;
            else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idType , sizeof idType ) ;
        }

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idMsgInLast , sizeof idMsgInLast ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idMsgInLast , sizeof idMsgInLast ) ;

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&cbMsgInLast , sizeof cbMsgInLast ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&cbMsgInLast , sizeof cbMsgInLast ) ;

        THREADmODE1rESTORE
    
        bRead.ungrabF( tinP ) ; //THIS IS BALANCED BY THE BATON GRAB IN readMsgF
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005018.socketc.readmsgokf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005019.socketc.readmsgnokf BEGIN
#define DDNAME       "3func.36005019.socketc.readmsgnokf"
#define DDNUMB      (countT)0x36005019
#define IDFILE      (countT)0xe35


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readMsgNokF.0.html\"\>instances\</A\>
\<A HREF=\"5.107001c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5930104.1.1.0.html\"\>5930104:  WAKEsHOW( "example.simplest.func.107001c.socketC.readMsgNokF" )\</A\>
sends an acknowledgement to the peer that processing was -not- successful for the last message read using the IFC message protocol
 the remote peer is assumed to have written a message using the following protocol
  writes 1, idMsg, cbP, pbP
   1 indicates that this is a message (rather than an ack)
   idMsg is consecutive from 1 and is unique for each message going out from a socket
  then reads 2, idMsgr, cbr
   2 indicates that this is an ack
   idMsgr must equal the idMsg just sent
   cbr must equal the cbP just sent
 this protocol is subject to change
  both ends of a connection should use writeMsgF, readMsgF, and readMsgOkF (or readMsgNack)
the caller -must- precede this call with a call to readMsgF
 this function releases the socketC object but does not grab it
call readMsgOkF after the data received has been processed
call readMsgNokF if the data cannot be processed
arguments
 tinP
*/
/**/

/*1*/voidT socketC::readMsgNokF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        {
            countT idType = 2 ;
            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idType , sizeof idType ) ;
            else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idType , sizeof idType ) ;
        }

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&idMsgInLast , sizeof idMsgInLast ) ;
        else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&idMsgInLast , sizeof idMsgInLast ) ;

        {
            ZE( countT , cZe ) ;
            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , (byteT*)&cZe , sizeof cZe ) ;
            else                                               pEther->sockWriteF(     tinP , handle      , (byteT*)&cZe , sizeof cZe ) ;
        }

        THREADmODE1rESTORE
    
        bRead.ungrabF( tinP ) ; //THIS IS BALANCED BY THE BATON GRAB IN readMsgF
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005019.socketc.readmsgnokf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501a.socketc.operator_countt BEGIN
#define DDNAME       "3func.3600501a.socketc.operator_countt"
#define DDNUMB      (countT)0x3600501a
#define IDFILE      (countT)0xe36


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.107001d.1.0.html\"\>definition\</A\>
this always evaluates to idPortMe, even if impotent
 this is so tmWatchF can connect to an acceptor port to unblock it for termination
*/
/**/

/*1*/socketC::operator countT( voidT )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        TINSL
        SCOOPP
    
        //IFbEcAREFUL
        //{
        //    if( *pEther )
        //    {
        //        dec02AM( cFunctionsPending ) ;
        //        return 0 ;
        //    }
        //}
    
        _IO_
    }
    dec02AM( cFunctionsPending ) ;
    return idPortMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501a.socketc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501b.socketc.writef BEGIN
#define DDNAME       "3func.3600501b.socketc.writef"
#define DDNUMB      (countT)0x3600501b
#define IDFILE      (countT)0xe37


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.107001e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const countT idPortP , const nicNameC nicNameP , const byteT* const pbP , const countT cbP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( idPortP ) ;
            __Z( pbP ) ;
            __Z( cbP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        pEther->sockWriteF( tinP , handle , idPortP , nicNameP , pbP , cbP ) ;
        THREADmODE1rESTORE
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer = nicNameP ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501b.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501c.socketc.readf BEGIN
#define DDNAME       "3func.3600501c.socketc.readf"
#define DDNUMB      (countT)0x3600501c
#define IDFILE      (countT)0xe38


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.107001f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::readF( tinS& tinP , byteT*& pbP , countT& cbP , countT& idPortP , nicNameC& nicNameP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __NZ( pbP ) ;
            __( cbP ) ;
            __( idPortP ) ;
            __( nicNameP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !bCatcher )
        {
            bCatcher = 1 ;
            if( !( F(flags) & flSOCKETc_DOnOTrEGISTERcATCHER ) )
            {
                //__( F(tinP.flagsThreadMode3) & flTHREADmODE3_NOTwATCHED ) ;
                ZE( countT , idSlot ) ;
                etherC::sockStkCatchersF( tinP ).sinkF( tinP , idSlot , (countT)this , flSTACKsINK_UNIQUE ) ;
                __Z( idSlot ) ;
            }
        }
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

        if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_readF( tinP , pbP , cbP , handle ) ;
        else                                               pEther->sockReadF( tinP , pbP , cbP , idPortP , nicNameP , handle , time1P , time2P ) ;

        THREADmODE1rESTORE
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer = nicNameP ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501c.socketc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501d.socketc.writef BEGIN
#define DDNAME       "3func.3600501d.socketc.writef"
#define DDNUMB      (countT)0x3600501d
#define IDFILE      (countT)0xe39


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070020.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const countT idPortP , const nicNameC nicNameP , const countT idTypeP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( idPortP ) ;
            __Z( idTypeP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        pEther->sockWriteF( tinP , handle , idPortP , nicNameP , (byteT*)&idTypeP , sizeof idTypeP ) ;
        THREADmODE1rESTORE
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer = nicNameP ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501d.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501e.socketc.readf BEGIN
#define DDNAME       "3func.3600501e.socketc.readf"
#define DDNUMB      (countT)0x3600501e
#define IDFILE      (countT)0xe3a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070021.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::readF( tinS& tinP , countT& idTypeP , countT& idPortP , nicNameC& nicNameP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( idTypeP ) ;
            __( idPortP ) ;
            __( nicNameP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        ZE( byteT* , pbi ) ;
        ZE( countT , cbi ) ;
        readF( tinP , pbi , cbi , idPortP , nicNameP , time1P , time2P ) ;
        if( cbi == sizeof idTypeP ) idTypeP = *(countT*)pbi ;
        pEther->delF( tinP , pbi ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501e.socketc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501f.socketc.acceptf BEGIN
#define DDNAME       "3func.3600501f.socketc.acceptf"
#define DDNUMB      (countT)0x3600501f
#define IDFILE      (countT)0xe3b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$acceptF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070022.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6420104.1.1.0.html\"\>6420104:  WAKEsHOW( "example.simplest.func.1070004.socketC.acceptF" )\</A\>
waits for a peer to connect
then constructs another socket for that connection
normally, the new socket should be serviced and then d eleted by another thread (task)
 this permits the accepting thread (task) to resume listening for another client immediately
listenF must be called once, after bindF and before the first call to acceptF
arguments
 pSocketP
 bRefuseP
*/
/**/

/*1*/voidT socketC::acceptF( tinS& tinP , socketC*& pSocketP , countT& idPortP , nicNameC& nicNameP , boolT& bRefuseP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __NZ( pSocketP ) ;
            __Z( fListening ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        handleC hClient( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_SOCKET ) ;
        pEther->sockAcceptF( tinP , hClient , idPortP , nicNameP , handle , bRefuseP , ~hSslContext ? &hSslContext : 0 ) ;
        if( ~hClient )
        {
            pSocketP = new( 0 , tinP , LF ) socketC( *pEther , tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , hClient , idType , flags | flSOCKETc_CTbYlISTENER | flSOCKETc_NOdUALsTACK , &idleTimeAllowedRead , &idleTimeAllowedWrite , &timeAllowedConnected , nicNameP , psttPemCertificates , psttPemPrivateKey ) ; ___( pSocketP ) ;

            if( pSocketP )
            {
                pSocketP->bAcceptedByLF = 1 ;
                if( psttName ) pSocketP->nameF( tinP , psttName ) ;
            }
        }
    
        if( F(flags) & flSOCKETc_CRYPTfOREIGNsSL && !( F(flags) & flSOCKETc_CRYPTfOREIGNsSLdEFERhANDSHAKE ) ) pSocketP->shakeHandsAsServerF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
}

//A: NOTE: ON SOME OS, a thread calling close() on a socket that is in accept() on another thread will hangs.
//A: if run into this, can use Tim's suggestion above
//A: 
//A: }
//A:   }
//A:     }
//A:       return accept(socket, cli_addr, &clilen);  
//A:       /* Someone connected - make a new socket */
//A:     if (FD_ISSET (socket, &fdvar)) {
//A:   else {
//A:   }
//A:     return -1;  /* The listening socket was closed */
//A: {
//A:   if (select (socket + 1, &fdvar, (fd_set *) 0, (fd_set *) 0, NULL) < 0)
//A: 
//A:   FD_SET (socket, &fdvar);
//A:   FD_ZE (&fdvar);
//A: 
//A:   clilen = sizeof(*cli_addr);
//A: 
//A:   fd_set fdvar;
//A:   
//A:   int  clilen;
//A: {
//A: int intAccept(int socket, struct sockaddr* cli_addr)
//A: 
//A: Tim Hatton
//A: Best regards,
//A: 
//A: or otherwise of this idea!!!
//A: I'd very much welcome any feed back on the appropriateness
//A: 
//A: is made.
//A: -1. Otherwise it will return a new socket fd when a connection
//A: thread to close the listening port at which time it will return
//A: This will block for ever but it is possible for another
//A: I've written a replacement function for accept which uses select.


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600501f.socketc.acceptf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005021.socketc.writef BEGIN
#define DDNAME       "3func.36005021.socketc.writef"
#define DDNUMB      (countT)0x36005021
#define IDFILE      (countT)0xe3c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070024.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const countT idPortP , const nicNameC nicNameP , const countT* const pcP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( idPortP ) ;
            __Z( pcP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( !*pcP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        pEther->sockWriteF( tinP , handle , idPortP , nicNameP , (byteT*)pcP , sizeof( countT ) * pEther->strBodyLengthF( tinP , pcP ) ) ;
        THREADmODE1rESTORE
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer = nicNameP ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005021.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005023.socketc.readf BEGIN
#define DDNAME       "3func.36005023.socketc.readf"
#define DDNUMB      (countT)0x36005023
#define IDFILE      (countT)0xe3d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070026.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::readF( tinS& tinP , soulC& soulP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __( !(const byteT*)soulP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
//U:: TO FIND A BUG
static countT idInLath ;
countT idIn = 1 + incv02AM( idInLath ) ;
tinP.pcUtility[ 2 ] = idIn ;

        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        if( F(flags) & flSOCKETc_TOPsECRET )
        {
            ZE( boolT , bPayload ) ;
            while( !*pEther && !bPayload )
            {
                ZE( countT , idCmd ) ;
        
                readF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
                switch( idCmd )
                {
                    case ifcIDcMDsOCKETtOPsECRET_PAYLOAD :
                    {
                        bPayload = 1 ;
                        break ;
                    }
                    case ifcIDcMDsOCKETtOPsECRET_1MYpINnAMEiS :
                    {
                        ZE( soulC* , pSoul ) ;
                        (*pEther)( tinP , pSoul , TAG( TAGiDnULL ) ) ;
                        if( pSoul )
                        {
                            readF( tinP , *pSoul ) ;
                            *pSoul >> pczKeyTopSecretPeer ; ___( pczKeyTopSecretPeer ) ;
                            idptRelayTopSecretPeer << *pSoul ;
                        }
                        (*pEther)( tinP , pSoul ) ;
    
                        break ;
                    }
                    case ifcIDcMDsOCKETtOPsECRET_2SENDpINiMAGEsECRETLY :
                    {
                        ZE( countT , timeN1 ) ;
                        ZE( sCountT , timeN2 ) ;
                        pEther->osTimeNowF( tinP , timeN1 , timeN2 ) ;
    
                        if( !timeWothTopSecretPinRequestReceived.time1 && !timeWothTopSecretPinRequestReceived.time2 )
                        {
                            //CONoUTrAW( "woth request received\r\n" ) ;
                            timeWothTopSecretPinRequestReceived.time1 = timeN1 ;
                            timeWothTopSecretPinRequestReceived.time2 = timeN2 ;
                        }
                        else
                        {
                            countT timeD1 = timeN1 ;
                            sCountT timeD2 = timeN2 ;
                            pEther->osTimeSubtractF( tinP , timeD1 , timeD2 , timeWothTopSecretPinRequestReceived.time1 , timeWothTopSecretPinRequestReceived.time2 ) ;
        
                            //THE NEXT LINE SUPPRESSES TOP SECRECY FOR INFANT CONNECTIONS, TO REDUCE THE LOAD ON THE SECRET SERVERS
                            if( timeD2 || timeD1 > TOCK * 0x40 ) //U::TICK
                            {
                                //CONoUTrAW( "request not ignored 1\r\n" ) ;
                                countT timeD1 = timeN1 ;
                                sCountT timeD2 = timeN2 ;
                                pEther->osTimeSubtractF( tinP , timeD1 , timeD2 , timeLathTopSecretPinSend.time1 , timeLathTopSecretPinSend.time2 ) ;
            
                                if( timeD2 || timeD1 > TOCK * 0x40 ) //THIS TEST ELIMINATES REDUNDANT JOB ORDERS TO SECRET SERVICE
                                {
                                    //CONoUTrAW( "request not ignored 2\r\n" ) ;
                                    //CONoUTrAW( TT(timeD1,timeD2)+T("\r\n")+TF1(tinP.monitor.idThread)+T(".+ ")+T(tinP.postThreadName)+T("\r\n") ) ;
                                    timeLathTopSecretPinSend.time1 = timeN1 ;
                                    timeLathTopSecretPinSend.time2 = timeN2 ;
                
                                    TN( tDot , "." ) ;
                                    textC tShort( tinP , TAG( TAGiDnULL ) , flTEXTc_null , (countT*)pczKeyTopSecret , flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE , 8 , 0 , tDot ) ;
                                    countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
                                    TN( tLong , "" ) ; tLong = T("///desk/" POSTfOLDERsECURITYkEYdEPOSITORY)+(idHomeDisk==1?T(""):T(" (Home ")+TF1(idHomeDisk)+T(")"))+T("/")+tShort ;
                            
                                    ZE( byteT* , pbKey ) ;
                                    ZE( countT , cbKey ) ;
                                    pEther->boxGetShadowF( tinP , pbKey , cbKey , tLong , 1 ) ; ___( pbKey ) ;
                                    if( POOP ) break ;
                            
                                    if( !pbKey || !cbKey ) __1
                                    else
                                    {
                                        ZE( soulC* , psSecret ) ;
                                        (*pEther)( tinP , psSecret , TAG( TAGiDnULL ) ) ;
                                        ZE( soulC* , psTo ) ;
                                        (*pEther)( tinP , psTo , TAG( TAGiDnULL ) ) ;
                                        if( psSecret && psTo )
                                        {
                                            idptRelayTopSecretPeer >> *psTo ;
                                            *psSecret << pczKeyTopSecret ;
                                            psSecret->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pbKey , cbKey ) ;
                                            //CONoUTrAW( TF1(tinP.monitor.idThread)+T(".")+T(tinP.postThreadName)+T(": whispering\r\n")+T(pczKeyTopSecret)+T("\r\n") ) ; //U::
                                            //pEther->beeClickF( tinP , 1760 * 3 ) ;
        
                                            //static countT cIn ;
                                            //if( !incv02AM( cIn ) && idHomeDisk == 2 ) //U::TO FIND A BUG
                                            {
                                                CONoUTrAW( "whispering\r\n" ) ;
                                                pEther->cioPutSecretF( tinP , etherC::etPrimeIF( tinP ) , *psSecret , *psTo , count8S( ifcIDaDAM_KERNEL3BANG , ifcIDcHANNELfUNCTION_SECREThANDsHAKEkEY ) ) ;
                                            }
                                        }
                                        (*pEther)( tinP , psTo ) ;
                                        (*pEther)( tinP , psSecret ) ;
                                    }
                            
                                    pEther->delF( tinP , pbKey ) ;
                                    //CONoUTrAW( TF1(tinP.monitor.idThread)+T(".- ")+T(tinP.postThreadName)+T("\r\n") ) ;
                                }
                            }
                        }
    
                        break ;
                    }
                    case ifcIDcMDsOCKETtOPsECRET_3APPLYtHISpINrEFERENCE :
                    {
                        {
                            ZE( countT , ccCode ) ;
                            readF( tinP , (byteT*)&ccCode , sizeof ccCode ) ;
    
                            if( !ccCode ) __1
                            else
                            {
                                ZE( count01T* , pcCode ) ;
                                pEther->newF( tinP , LF , pcCode , ccCode ) ; ___( pcCode ) ;
                                if( pcCode )
                                {
                                    readF( tinP , (byteT*)pcCode , ccCode * sizeof( count01T ) ) ; //CANNOT USE soulC BECAUSE PIN HAS ALREADY BEEN APPLIED TO PEER AND I DO NOT WANT TO FIDDLE WITH MY flags MEMBER BECAUSE I AM NOT SERIALIZED WRT writeF
                
                                    if( !*pEther )
                                    {
                                        ZE( byteT* , pbIn1 ) ;
                                        ZE( countT , cbIn1 ) ;
                                        dad( tinP , pbIn1 , cbIn1 , pcCode , ccCode ) ; ___( pbIn1 ) ;
                                        __NZ( pbIn1 ) ;
                                    }
                                }
                                pEther->delF( tinP , pcCode ) ;
                            }
                        }
    
                        ZE( soulC* , psFinger ) ;
                        (*pEther)( tinP , psFinger , TAG( TAGiDnULL ) ) ;
                        if( psFinger )
                        {
                            readF( tinP , *psFinger ) ;
                            ZE( countT , finger ) ;
                            *psFinger >> finger ;
                            __( finger - FINGERnEG_SOCKETsECREThANDSHAKE ) ;
                        }
                        (*pEther)( tinP , psFinger ) ;
    
                        break ;
                    }
                    default :
                    {
                        __( idCmd ) ;
                        __1
                        break ;
                    }
                }
            }
        }
    
        if( F(flags) & flSOCKETc_NOsECRECY )
        {
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

            if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) /*U::pEther->openSsl_readF( tinP ,  , handle )*/ ;
            else                                               pEther->sockReadF( tinP , soulP , handle , time1P , time2P ) ;

            THREADmODE1rESTORE
        }
        else if( !*pEther )
        {
            ZE( count01T , woth ) ;
            readF( tinP , (byteT*)&woth , sizeof woth , flSOCKETcrEAD_null , time1P , time2P ) ;
            if( !woth ) //THIS SOUL'S ENCODING IS AN ESCAPE SEQUENCE
            {
                count01T pcCodeEp[ 3 ] = { woth } ; //"Ep": "ESCAPE SEQUENCE PREFIX: NULL IDcMD CCaRG"
                readF( tinP , (byteT*)( pcCodeEp + 1 ) , sizeof pcCodeEp - sizeof pcCodeEp[ 0 ] , flSOCKETcrEAD_null , time1P , time2P ) ;
                if( pcCodeEp[ 2 ] )
                {
                    ZE( count01T* , pcCodeE ) ;
                    countT ccCodeE = 3 + pcCodeEp[ 2 ] ;
                    pEther->newF( tinP , LF , pcCodeE , ccCodeE ) ; ___( pcCodeE ) ;
                    if( pcCodeE )
                    {
                        pcCodeE[ 0 ] = pcCodeEp[ 0 ] ;
                        pcCodeE[ 1 ] = pcCodeEp[ 1 ] ;
                        pcCodeE[ 2 ] = pcCodeEp[ 2 ] ;
                        readF( tinP , (byteT*)( pcCodeE + 3 ) , sizeof( count01T ) * pcCodeEp[ 2 ] , flSOCKETcrEAD_null , time1P , time2P ) ;
            
                        if( !*pEther )
                        {
                            ZE( byteT* , pbIn1 ) ;
                            ZE( countT , cbIn1 ) ;
                            dad( tinP , pbIn1 , cbIn1 , pcCodeE , ccCodeE ) ; ___( pbIn1 ) ;
                            __Z( pbIn1 ) ;
                            __Z( cbIn1 ) ;
                            soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbIn1 , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ; //WILL NOT BE DONE IF PEER JUST SENT A PIN REFERENCE
                            pEther->delF( tinP , pbIn1 ) ;
                        }
                    }
                    pEther->delF( tinP , pcCodeE ) ;
                }
            }
            else
            {
                ZE( countT , finger   ) ;
                ZE( countT , idFormat ) ;
                ZE( countT , length   ) ;
                {
                    count01T pcCode1[ 3 * sizeof( countT ) ] = { woth } ;
                    readF( tinP , (byteT*)( pcCode1 + 1 ) , sizeof pcCode1 - sizeof pcCode1[ 0 ] , flSOCKETcrEAD_null , time1P , time2P ) ;
            
                    if( !*pEther )
                    {
                        ZE( byteT* , pbIn1 ) ;
                        ZE( countT , cbIn1 ) ;
                        dad( tinP , pbIn1 , cbIn1 , pcCode1 , 3 * sizeof( countT ) ) ; ___( pbIn1 ) ;
                        __( cbIn1 - 3 * sizeof( countT ) ) ;
                        if( pbIn1 )
                        {
                            finger   = ((countT*)pbIn1)[ 0 ] ;
                            idFormat = ((countT*)pbIn1)[ 1 ] ;
                            length   = ((countT*)pbIn1)[ 2 ] ;
                        }
                        pEther->delF( tinP , pbIn1 ) ;
                    }
                }    
    
                ZE( byteT* , pbIn2 ) ;
                ZE( countT , cbIn2 ) ;
                if( length )
                {
                    ZE( count01T* , pcCode2 ) ;
                    pEther->newF( tinP , LF , pcCode2 , length ) ; ___( pcCode2 ) ;
                    if( pcCode2 )
                    {
                        readF( tinP , (byteT*)pcCode2 , sizeof( count01T ) * length , flSOCKETcrEAD_null , time1P , time2P ) ;
                        if( !*pEther )
                        {
                            dad( tinP , pbIn2 , cbIn2 , pcCode2 , length ) ; ___( pbIn2 ) ;
                            __( cbIn2 - length ) ;
                        }        
                    }
                    pEther->delF( tinP , pcCode2 ) ;
                }
    
                ZE( byteT* , pbAll ) ;
                pEther->newF( tinP , LF , pbAll , 3 * sizeof( countT ) + length ) ; ___( pbAll ) ;
                if( pbAll )
                {
                    ((countT*)pbAll)[ 0 ] = finger   ;
                    ((countT*)pbAll)[ 1 ] = idFormat ;
                    ((countT*)pbAll)[ 2 ] = length   ;
                    if( cbIn2 ) pEther->memCopyF( tinP , pbAll + 3 * sizeof( countT ) , pbIn2 , cbIn2 ) ;
                    soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbAll , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                }
                pEther->delF( tinP , pbAll ) ;
                pEther->delF( tinP , pbIn2 ) ;
            }
        }
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005023.socketc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005024.socketc.writef BEGIN
#define DDNAME       "3func.36005024.socketc.writef"
#define DDNUMB      (countT)0x36005024
#define IDFILE      (countT)0xe3e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070027.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , const countT idPortP , const nicNameC nicNameP , soulC& soulP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }

            __Z( idPortP ) ;

            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        pEther->sockWriteF( tinP , handle , idPortP , nicNameP , soulP ) ;
        THREADmODE1rESTORE
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer = nicNameP ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005024.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005025.socketc.writef BEGIN
#define DDNAME       "3func.36005025.socketc.writef"
#define DDNUMB      (countT)0x36005025
#define IDFILE      (countT)0xe3f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070028.1.0.html\"\>definition\</A\>
arguments
 tinP
 soulP
  if not flSOCKETc_TOPsECRET then the image of soulP is written
  else see idCmdTopSecretP
 pczPillNameP
  normally 0
  if not 0 then the codes for the soulP image will be written to a pill file
   only a reference to that pill file will be sent over the connection
 bPinP
 idCmdTopSecretP
  normally 0
  if not flSOCKETc_TOPsECRET then ignored
  if flSOCKETc_TOPsECRET and 0 then soulP is handled as data to be sent
   equivalent to specifying ifcIDcMDsOCKETtOPsECRET_PAYLOAD
  if flSOCKETc_TOPsECRET and not 0 then soulP is interpreted as arguments to the specified command
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , soulC& soulP , const countT* const pczPillNameP , const boolT bPinP , countT idCmdTopSecretP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        boolT bPayload = 1 ;
        if( F(flags) & flSOCKETc_TOPsECRET )
        {
            BLAMMO ; //U::flSOCKETc_TOPsECRET IS NOT YET SUPPORTED; IT WORKS AND CODING IS COMPLETE, BUT DEADLOCK OCCURS 1/2 OF TIME; DISABLED PENDING COMPLETION OF MONITOR
    
            switch( idPhaseTopSecret )
            {
                case ifcIDpHASEsOCKETtOPsECRET_1SENDpINnAME :
                {
                    if( pczKeyTopSecret && homeS::homeIF().idptRelay )
                    {
                        idPhaseTopSecret = ifcIDpHASEsOCKETtOPsECRET_2REQUESTpINiMAGE ;
        
                        countT idCmd = ifcIDcMDsOCKETtOPsECRET_1MYpINnAMEiS ;
                        writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
        
                        ZE( soulC* , pSoul ) ;
                        (*pEther)( tinP , pSoul , TAG( TAGiDnULL ) ) ;
                        if( pSoul )
                        {
                            *pSoul << pczKeyTopSecret ;
                            homeS::homeIF().idptRelay >> *pSoul ;
                            writeF( tinP , *pSoul ) ;
                        }
                        (*pEther)( tinP , pSoul ) ;
                    }
    
                    break ;
                }
                case ifcIDpHASEsOCKETtOPsECRET_2REQUESTpINiMAGE :
                {
                    if( !pczKeyTopSecretPeer ) break ;
                    else
                    {
                        TN( tDot , "." ) ;
                        textC tShort( tinP , TAG( TAGiDnULL ) , flTEXTc_null , (countT*)pczKeyTopSecretPeer , flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE , 8 , 0 , tDot ) ;
                        countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
                        TN( tLongPeer , "" ) ; tLongPeer = T("///desk/" POSTfOLDERsECURITYkEYdEPOSITORY)+(idHomeDisk==1?T(""):T(" (Home ")+TF1(idHomeDisk)+T(")"))+T("/")+tShort ;
    
                        if( pEther->diskFileExistsF( tinP , tLongPeer ) ) idPhaseTopSecret = ifcIDpHASEsOCKETtOPsECRET_3SENDpINrEFERENCE ;
                        else
                        {
                            if( homeS::homeIF().cSecretServerRegistrationsSeen )
                            {
                                countT idCmd = ifcIDcMDsOCKETtOPsECRET_2SENDpINiMAGEsECRETLY ;
                                writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
                            }
                            break ;
                        }
                    }
                }
                case ifcIDpHASEsOCKETtOPsECRET_3SENDpINrEFERENCE :
                {
                    idPhaseTopSecret = ifcIDpHASEsOCKETtOPsECRET_4SECURED ;
                    ZE( soulC* , pSoul ) ;
                    (*pEther)( tinP , pSoul , TAG( TAGiDnULL ) ) ;
                    if( pSoul )
                    {
                        //CONoUT( "sending reference" ) ;
    
                        {
                            ZE( count01T* , pcCode ) ;
                            ZE( countT    , ccCode ) ;
                            mom( tinP , pcCode , ccCode , 0 , 0 , pczKeyTopSecretPeer , 1 ) ; ___( pcCode ) ;
                    
                            if( !pcCode || !ccCode ) __1
                            else
                            {
                                countT idCmd = ifcIDcMDsOCKETtOPsECRET_3APPLYtHISpINrEFERENCE ;
                                writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
        
                                writeF( tinP , (byteT*)&ccCode , sizeof ccCode ) ;
                                writeF( tinP , (byteT*)pcCode , ccCode * sizeof( count01T ) ) ;
                            }
                            pEther->delF( tinP , pcCode ) ;
    
                            ZE( soulC* , psFinger ) ;
                            (*pEther)( tinP , psFinger , TAG( TAGiDnULL ) ) ;
                            if( psFinger )
                            {
                                *psFinger << (countT)FINGERnEG_SOCKETsECREThANDSHAKE ;
                                writeF( tinP , *psFinger ) ;
                            }
                            (*pEther)( tinP , psFinger ) ;
                        }
                    }
                    (*pEther)( tinP , pSoul ) ;
    
                    break ;
                }
            }
    
    
            if( !idCmdTopSecretP ) idCmdTopSecretP = ifcIDcMDsOCKETtOPsECRET_PAYLOAD ;
            writeF( tinP , (byteT*)&idCmdTopSecretP , sizeof idCmdTopSecretP ) ;
    
            if( idCmdTopSecretP != ifcIDcMDsOCKETtOPsECRET_PAYLOAD )
            {
                bPayload = 0 ;
                //switch( idCmdTopSecretP )
                {
                    /*default :*/ { __( idCmdTopSecretP ) ; /*break ;*/ }
                }
            }
        }
    
        if( bPayload )
        {
            if( F(flags) & flSOCKETc_NOsECRECY )
            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

                if( F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL ) pEther->openSsl_writeF( tinP , handle , WS( soulP ) ) ;
                else                                               pEther->sockWriteF(     tinP , handle      , soulP       ) ;

                THREADmODE1rESTORE
            }
            else if( !*pEther )
            {
                const byteT* pbOut = soulP ;
                ZE( countT , cbTrailer ) ;
                {
                    ZE( countT , idFormat ) ;
                    const byteT* pbc = pbOut ;
                    if( pbc && getNegAM( *(countT*)pbc ) == FINGERnEG_SOULc )
                    {
                                                    pbc += sizeof( countT ) ;
                        idFormat  = *(countT*)pbc ; pbc += sizeof( countT ) ;
                        cbTrailer = *(countT*)pbc ;
                    }
                    else pbOut = 0 ;
                }
    
                if( pbOut )
                {
                    countT cbOut = 3 * sizeof( countT ) + cbTrailer ;
            
                    ZE( count01T* , pcCode ) ;
                    ZE( countT    , ccCode ) ;
                    mom( tinP , pcCode , ccCode , pbOut , cbOut , pczPillNameP , bPinP ) ; ___( pcCode ) ;
            
                    if( !pcCode || !ccCode ) __1
                    else                     writeF( tinP , (byteT*)pcCode , sizeof( count01T ) * ccCode ) ;
                    pEther->delF( tinP , pcCode ) ;
                }
            }
        }
    
        if( idleTimeAllowedWrite ) FRESHtIMEaTOMIC( *pEther , timeLathWrite.time1 , timeLathWrite.time2 )
    
        bWrite.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005025.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005026.socketc.readf BEGIN
#define DDNAME       "3func.36005026.socketc.readf"
#define DDNUMB      (countT)0x36005026
#define IDFILE      (countT)0xe40


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070029.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::readF( tinS& tinP , countT& idTypeP , const flagsT flagsP , const countT time1P , const sCountT time2P )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
            __( idTypeP ) ;
            FV( flSOCKETcrEAD , flagsP ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        readF( tinP , (byteT*)&idTypeP , sizeof idTypeP , flagsP , time1P , time2P ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005026.socketc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005027.socketc.writef BEGIN
#define DDNAME       "3func.36005027.socketc.writef"
#define DDNUMB      (countT)0x36005027
#define IDFILE      (countT)0xe41


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.107002a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT socketC::writeF( tinS& tinP , countT cP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        writeF( tinP , (byteT*)&cP , sizeof cP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005027.socketc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005028.socketc.etherf BEGIN
#define DDNAME       "3func.36005028.socketc.etherf"
#define DDNUMB      (countT)0x36005028
#define IDFILE      (countT)0xe42


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$etherF.0.html\"\>instances\</A\>
\<A HREF=\"5.107002b.1.0.html\"\>definition\</A\>
*/
/**//*1*/etherC& socketC::etherF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( etherC* , pEther2 ) ;
    {
        SCOOPP
        _IO_
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        pEther2 = pEther ;
        //bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
    return *pEther2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005028.socketc.etherf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005029.socketc.handlef BEGIN
#define DDNAME       "3func.36005029.socketc.handlef"
#define DDNUMB      (countT)0x36005029
#define IDFILE      (countT)0xe43


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$handleF.0.html\"\>instances\</A\>
\<A HREF=\"5.107002c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/const handleC& socketC::handleF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return hnu ;
            }
        }
    
        _IO_
    }
    dec02AM( cFunctionsPending ) ;
    return handle ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.36005029.socketc.handlef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502a.socketc.canceliftimedoutf BEGIN
#define DDNAME       "3func.3600502a.socketc.canceliftimedoutf"
#define DDNUMB      (countT)0x3600502a
#define IDFILE      (countT)0xe44


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//UPDATING OF timeLathRead MUST BE MONOTONIC IN OO ATOMIC ASSIGNMENTS
// 1. UPDATE time2 BY AN ATOMIC ASSIGNMENT
// 2. UPDATE time1 BY AN ATOMIC ASSIGNMENT
// I MUST TEST FOR timeE2 > 0 BECAUSE I MIGHT SAMPLE AFTER timeLathRead.time2 WAS INCREMENTED (AT MIDNIGHT) AND BEFORE time1 HAS BEEN UPDATED FROM A HIGH VALUE TO A LOW VALUE

/*1*/voidT socketC::cancelIfTimedOutF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        if( !fListening )
        {
            ZE( boolT , bIdleRead ) ;
            ZE( boolT , bIdleWrite ) ;
            ZE( boolT , bConnectOld ) ;
            if( idleTimeAllowedRead )
            {
                //if( idleTimeAllowedRead != TICK ) pEther->traceF( tinP , T("socket at ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" [idleTimeAllowedRead]: ")+TF2(idleTimeAllowedRead,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                if( !timeLathRead.time1 && !timeLathRead.time2 ) pEther->osTimeNowF( tinP , timeLathRead.time1 , timeLathRead.time2 ) ;
                else
                {
                    ZE( countT , timeE1 ) ;
                    ZE( sCountT , timeE2 ) ;
                    pEther->osTimeNowF( tinP , timeE1 , timeE2 ) ; //UPDATING IS NOT ALLOWED TO RESET timeLathRead BECAUSE THAT MIGHT HAPPEN RIGHT HERE
                    pEther->osTimeSubtractF( tinP , timeE1 , timeE2 , timeLathRead.time1 , timeLathRead.time2 ) ;
                    if( timeE2 > 0 || timeE1 > idleTimeAllowedRead ) bIdleRead = 1 ;
                }
            }
        
            if( idleTimeAllowedWrite )
            {
                //if( idleTimeAllowedWrite != TICK ) pEther->traceF( tinP , T("socket at ")+TF2((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" [idleTimeAllowedWrite]: ")+TF2(idleTimeAllowedWrite,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                if( !timeLathWrite.time1 && !timeLathWrite.time2 ) pEther->osTimeNowF( tinP , timeLathWrite.time1 , timeLathWrite.time2 ) ;
                else
                {
                    ZE( countT , timeE1 ) ;
                    ZE( sCountT , timeE2 ) ;
                    pEther->osTimeNowF( tinP , timeE1 , timeE2 ) ; //UPDATING IS NOT ALLOWED TO RESET timeLathWrite BECAUSE THAT MIGHT HAPPEN RIGHT HERE
                    pEther->osTimeSubtractF( tinP , timeE1 , timeE2 , timeLathWrite.time1 , timeLathWrite.time2 ) ;
                    if( timeE2 > 0 || timeE1 > idleTimeAllowedWrite ) bIdleWrite = 1 ;
                }
            }
    
            if( timeAllowedConnected && ( timeConnected.time1 || timeConnected.time2 ) )
            {
                ZE( countT , timeE1 ) ;
                ZE( sCountT , timeE2 ) ;
                pEther->osTimeNowF( tinP , timeE1 , timeE2 ) ;
                pEther->osTimeSubtractF( tinP , timeE1 , timeE2 , timeConnected.time1 , timeConnected.time2 ) ;
            
                if( timeE2 > 0 || timeE1 > timeAllowedConnected ) bConnectOld = 1 ;
            }
    
            if( ( bIdleRead && bIdleWrite ) || bConnectOld )
            {
                TN( tSayPrefix , "cancelIfTimedOutF [idleTimeAllowedRead,idldTimeAllowedWrite,timeAllowedConnected]: " ) ; tSayPrefix += TF2(idleTimeAllowedRead,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" ")+TF2(idleTimeAllowedWrite,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" ")+TF2(timeAllowedConnected,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(": ") ;
                TN( tSay , "" ) ;
                if( bIdleRead && bIdleWrite ) { tSay = tSayPrefix+T("reading and writing idle time limits both exceeded") ; pEther->traceF( tinP , tSay ) ; }
                if( bConnectOld             ) { tSay = tSayPrefix+T("connection time limit exceeded"                    ) ; pEther->traceF( tinP , tSay ) ; }

                pEther->traceF( tinP , T(" | cancelIfTimedOutF/stale socketC at ")+TF2((countT)this,flFORMAT_UNSIGNED|flFORMAT_NObASE)+T(" is being cancelled") ) ;

                handle.closeIfF() ;
            }
        }
    
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502a.socketc.canceliftimedoutf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502b.socketc.namef BEGIN
#define DDNAME       "3func.3600502b.socketc.namef"
#define DDNUMB      (countT)0x3600502b
#define IDFILE      (countT)0xe45


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**//*1*/voidT socketC::nameF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        _IO_
        bWrite.grabF( tinP , TAG( TAGiDnULL ) ) ;
        //bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        pEther->delF( tinP , psttName ) ;
        pEther->strMakeF( tinP , LF , psttName , psttP ) ; ___( psttName ) ;
    
        //bRead.ungrabF( tinP ) ;
        bWrite.ungrabF( tinP ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502b.socketc.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502c.socketc.verifyreplyf BEGIN
#define DDNAME       "3func.3600502c.socketc.verifyreplyf"
#define DDNUMB      (countT)0x3600502c
#define IDFILE      (countT)0xe46


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
verifies that the reply indicates the specified return code
arguments
 rcP
*/
/**/

/*1*/voidT socketC::verifyReplyF( tinS& tinP , const countT rcP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( POOP )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
        ZE( strokeS* , psttReply ) ;
        countT rc = readWoReplyF( tinP , psttReply ) ; ___( psttReply ) ;

        pEther->traceF( tinP , T("[reply]: ")+T(psttReply) ) ;

        if( rcP == -1 )
        {
            ZE( strokeS* , psttw ) ;
            pEther->strFromF( tinP , psttw , rc ) ; ___( psttw ) ;
            pEther->strokeF( tinP , T(psttw)+T(" :::: ")+T(psttReply) ) ;
            pEther->delF( tinP , psttw ) ;
        }
        else if( rcP != rc )
        {
            TN( tSay , "" ) ; tSay = T("\r\nunexpected telnet reply: \"")+T(psttReply)+T("\"\r\n") ;
            //
            CONoUTrAW( tSay ) ;
            //LOGrAW( tSay ) ;
    
            __( rc ) ;
            __1
        }
        pEther->delF( tinP , psttReply ) ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502c.socketc.verifyreplyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502d.socketc.readwolinef BEGIN
#define DDNAME       "3func.3600502d.socketc.readwolinef"
#define DDNUMB      (countT)0x3600502d
#define IDFILE      (countT)0xe47


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/osTextT socketC::readWoLineF( tinS& tinP , countT& offP , osTextT* const postP , const countT costaP , const osTextT* const postEscapeP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    ZE( osTextT , ostEscaped ) ;
    {
        SCOOPP
        IFbEcAREFUL        
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
            __Z( costaP ) ;
            __( costaP <= offP ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return 0 ;
            }
        }
    
        const countT _odoSockCbReadOpen  = tinP.odoSockCbRead  ;
        const countT _odoSockCbWriteOpen = tinP.odoSockCbWrite ;
    
        bRead.grabF( tinP , TAG( TAGiDnULL ) ) ;
        _IO_
        ZE( byteT , bIn ) ;
        boolT bLookForEscape = !!postEscapeP ;
        while( !*pEther && offP < costaP )
        {
            readF( tinP , &bIn , 1 ) ;
    
            if( bLookForEscape )
            {
                bLookForEscape = 0 ;
                ZE( countT , offi ) ;
                while( postEscapeP[ offi ] )
                {
                    if( bIn == postEscapeP[ offi ++ ] )
                    {
                        ostEscaped = postEscapeP[ offi - 1 ] ;
                        break ;
                    }
                }
    
                if( ostEscaped ) break ;
            }
    
            if( bIn == '\n' ) break ;
            else if( bIn == '\r' )
            {
                peekF( tinP , &bIn , 1 ) ;
                if( bIn == '\n' ) readF( tinP , &bIn , 1 ) ;
                break ;
            }
            else postP[ offP ++ ] = bIn ;
        }
    
        if( idleTimeAllowedRead ) FRESHtIMEaTOMIC( *pEther , timeLathRead.time1 , timeLathRead.time2 )
    
        bRead.ungrabF( tinP ) ;
    
        tinP.pAdamGlobal3->_socketC_.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        tinP.pAdamGlobal3->_socketC_.nnLever = nnPeer ;
        pOdometer = (sockOdometerS*)&(countT&)*tinP.pAdamGlobal3->_socketC_.pSwOdometer ;
        pOdometer->cbRead  += tinP.odoSockCbRead  - _odoSockCbReadOpen  ;
        pOdometer->cbWrite += tinP.odoSockCbWrite - _odoSockCbWriteOpen ;
        tinP.pAdamGlobal3->_socketC_.grab.ungrabF( tinP ) ;
    
    }
    dec02AM( cFunctionsPending ) ;

    return ostEscaped ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502d.socketc.readwolinef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502e.socketc.shakeHandsasclientF BEGIN
#define DDNAME       "3func.3600502e.socketc.shakeHandsasclientF"
#define DDNUMB      (countT)0x3600502e
#define IDFILE      (countT)0xe48


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT socketC::shakeHandsAsClientF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
            __( !( F(flags    ) & flSOCKETc_CRYPTfOREIGNsSL               ) ) ;
            __(    F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL             ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        pEther->openSsl_wrapSocketF( tinP , handle , handle ) ;
        pEther->openSsl_shakeHandsAsClientF( tinP , handle ) ;
        flagsMode |= flSOCKETcmODE_CRYPTfOREIGNsSL ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502e.socketc.shakeHandsasclientF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502f.socketc.shakeHandsasserverF BEGIN
#define DDNAME       "3func.3600502f.socketc.shakeHandsasserverF"
#define DDNUMB      (countT)0x3600502f
#define IDFILE      (countT)0xe49


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT socketC::shakeHandsAsServerF( tinS& tinP )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        SCOOPP
        IFbEcAREFUL    
        {
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
            __( !( F(flags    ) & flSOCKETc_CRYPTfOREIGNsSL               ) ) ;
            __(    F(flagsMode) & flSOCKETcmODE_CRYPTfOREIGNsSL             ) ;
            if( *pEther )
            {
                dec02AM( cFunctionsPending ) ;
                return ;
            }
        }
    
        _IO_
    
        pEther->openSsl_wrapSocketF( tinP , handle , handle ) ;
        pEther->openSsl_shakeHandsAsServerF( tinP , handle ) ;
        flagsMode |= flSOCKETcmODE_CRYPTfOREIGNsSL ;
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36005* : 3func.3600502f.socketc.shakeHandsasserverF END
