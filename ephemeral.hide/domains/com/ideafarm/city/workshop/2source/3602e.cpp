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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e002.windowoldc.dt_windowoldc BEGIN
#define DDNAME       "3func.3602e002.windowoldc.dt_windowoldc"
#define DDNUMB      (countT)0x3602e002
#define IDFILE      (countT)0x1095


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1440002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/windowOldC::~windowOldC( voidT )/*1*/
{
    TINSL
    SCOOP
    //NOT SERIALIZED BECAUSE CT/DT FUNCTION

    dtPrefixF( tinP ) ;

    etherC::ether_pBatWindowDeletionI_F( tinP )->grabF( tinP , TAG( TAGiDnULL ) ) ;
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    bDoomed = 1 ;

    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether && cReferences )
            { ++ s ; ether.osSleepF( tinP , TUCK * 0x40 ) ; }
    }

    if( tinP.pAdamGlobal1->_windowOldC_.pRoot == this ) tinP.pAdamGlobal1->_windowOldC_.pRoot = 0 ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    etherC::ether_pBatWindowDeletionI_F( tinP )->ungrabF( tinP ) ;

    {
        countT cFlavors = swKeyName.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            leverIdKey = swKeyName.leverF( tinP , idf ) ;
            ether.delF( tinP , *(strokeS**)&(countT&)swKeyName ) ;
        }
    }
    
    {
        stackC& st = *tinP.pAdamGlobal1->_windowOldC_.pstWindow ;

        st.grabF( tinP , TAG( TAGiDnULL ) ) ;

        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;    
        do
        {
            windowOldC* pw = (windowOldC*)st.downF( tinP , handle ) ;
            if( pw == this )
            {
                st.extractF( tinP ) ;
                break ;
            }
        }
        while( ~handle ) ;

        st.ungrabF( tinP ) ;
    }
    
    ZE( countT , ecnu ) ;
    
    if( !*tinP.pAdamGlobal1->_windowOldC_.pstWindow ) { DEL( tinP.pAdamGlobal1->_windowOldC_.pstWindow ) ; } //RACE CONDITION IF ANOTHER THREAD MIGHT CREATE AN INSTANCE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e002.windowoldc.dt_windowoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e003.windowoldc.windowoldc BEGIN
#define DDNAME       "3func.3602e003.windowoldc.windowoldc"
#define DDNUMB      (countT)0x3602e003
#define IDFILE      (countT)0x1096


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1440003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
a windowOldC object can be constructed on any thread
 it will be serviced by thread 1
the first windowOldC object constructed must be the root output window
 tinP.pAdamGlobal1->_windowOldC_.pRoot will be set to its address
*/
/**/

/*1*/windowOldC::windowOldC( tinS& tinP , etherC& etherP , const countT cPapersP , const countT cTriesP , const boolT bNotVisibleP , const sCountT idColP , const sCountT idRowP , const countT cColP , const countT cRowP , const countT cColClientP , const countT cRowClientP , const boolT bRootP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP )/*1*/ :
backOldC( tinP , etherP , cPapersP ) ,
cReferences( 0 ) ,
bDoomed( 0 ) ,
hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ,
idWindow( ++ tinP.pAdamGlobal1->_windowOldC_.idWindowLath ) ,
mIdColInDad( idColP + tinP.pAdamGlobal1->_thirdC_.mColsAdjForWinFrame ) ,
mIdRowInDad( idRowP + tinP.pAdamGlobal1->_thirdC_.mRowsAdjForWinFrame ) ,
mIdColFrameInDad( idColP ) ,
mIdRowFrameInDad( idRowP ) ,
mIdColOsOrigin( 0.0 ) ,
mIdRowOsOrigin( 0.0 ) ,
hDrawWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ,
idKeyLathDownLag( 0 ) ,
idKeyLathDown( 0 ) ,
psttlKeyName( 0 ) ,
swKeyLathDown(             tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttlKeyName ) ,
swKey(                     tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttlKeyName ) ,
leverIdKey( 0 ) ,
swKeyName(                 tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , leverIdKey )
//signShown( tinP , TAG( TAGiDnULL ) ) ,
{
    SCOOP
    //NOT SERIALIZED BECAUSE CT/DT FUNCTION
    ctF( tinP , 0 , idColP , idRowP , cColP , cRowP , cColClientP , cRowClientP , bRootP , bNotVisibleP , cTriesP , pPaperToBackCBFP , cPaperToBackArgP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e003.windowoldc.windowoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e004.windowoldc.operator_countt BEGIN
#define DDNAME       "3func.3602e004.windowoldc.operator_countt"
#define DDNUMB      (countT)0x3602e004
#define IDFILE      (countT)0x1097


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1440004.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to hWindow, the handle used by the operating system to refer to the operating system window for this object
*/
/**/

/*1*/windowOldC::operator const handleC&( voidT ) const/*1*/
{
    TINSL
    SCOOP
    //NOT SERIALIZED BECAUSE const FUNCTION
    return hWindow ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e004.windowoldc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e005.windowoldc.windowoldc BEGIN
#define DDNAME       "3func.3602e005.windowoldc.windowoldc"
#define DDNUMB      (countT)0x3602e005
#define IDFILE      (countT)0x1098


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1440005.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
a windowOldC object can be constructed on any thread
 it will be serviced by thread 1
the following note is obsoleted by addition of poolOld and ether members and needs to be rewritten
must only be constructed in the poolOld associated with etherP
 this is to ensure that the windowOldC object can be d eleted automatically by calling DEL() on its "this" value
 in other words, it is to ensure that the object is programmatically deletable i.e. not on the stack or in static memory
arguments
 tinP
  must not be 0
  tinP.monitor.idThread must be thirdC::idThreadWindow
 windowP
 bRootP
 bNotVisibleP
*/
/**/

/*1*/windowOldC::windowOldC( tinS& tinP , etherC& etherP , const countT cPapersP , const windowOldC& windowP , const countT cTriesP , const boolT bNotVisibleP , const sCountT idColP , const sCountT idRowP , const countT cColP , const countT cRowP , const countT cColClientP , const countT cRowClientP , const boolT bRootP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP )/*1*/ :
backOldC( tinP , etherP , cPapersP ) ,
cReferences( 0 ) ,
bDoomed( 0 ) ,
hWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ,
idWindow( ++ tinP.pAdamGlobal1->_windowOldC_.idWindowLath ) ,
mIdColInDad( idColP + tinP.pAdamGlobal1->_thirdC_.mColsAdjForWinFrame ) ,
mIdRowInDad( idRowP + tinP.pAdamGlobal1->_thirdC_.mRowsAdjForWinFrame ) ,
mIdColFrameInDad( idColP ) ,
mIdRowFrameInDad( idRowP ) ,
mIdColOsOrigin( 0.0 ) ,
mIdRowOsOrigin( 0.0 ) ,
hDrawWindow( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ,
idKeyLathDownLag( 0 ) ,
idKeyLathDown( 0 ) ,
psttlKeyName( 0 ) ,
swKeyLathDown(             tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttlKeyName ) ,
swKey(                     tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , psttlKeyName ) ,
leverIdKey( 0 ) ,
swKeyName(                 tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , leverIdKey )
//signShown( tinP , TAG( TAGiDnULL ) ) ,
{
    SCOOP
    //NOT SERIALIZED BECAUSE CT/DT FUNCTION
    ctF( tinP , &windowP , idColP , idRowP , cColP , cRowP , cColClientP , cRowClientP , bRootP , bNotVisibleP , cTriesP , pPaperToBackCBFP , cPaperToBackArgP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e005.windowoldc.windowoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e006.windowoldc.ctf BEGIN
#define DDNAME       "3func.3602e006.windowoldc.ctf"
#define DDNUMB      (countT)0x3602e006
#define IDFILE      (countT)0x1099


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctF.0.html\"\>instances\</A\>
\<A HREF=\"5.1440006.1.0.html\"\>definition\</A\>
each windowOldC object must be allocated in its etherC object's poolOld, and cannot be d eleted (except in winMessageHandlerF)
*/
/**/

struct osNameIfcIdS
{
    osTextT*    post ;
    countT      id ;
}
;

struct idNameS
{
    countT      id ;
    osTextT*    post ;
}
;

/*1*/voidT windowOldC::ctF( tinS& tinP , const windowOldC* const pWindowP , const sCountT idColP , const sCountT idRowP , const countT cColP , const countT cRowP , const countT cColClientP , const countT cRowClientP , const boolT bRootP , const boolT bNotVisibleP , const countT cTriesP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( ether ) return ;
        //CONJ: OBSOLETE; NEED TO DISABLE THIS NOW THAT CONTAIN MY OWN POOLoLD AND ETHER: __( !(>>>>(p oolC&)et<<>>OBSOLETEDcODE:INTENTIONALcOMPILEeRROR<<<<her).b MineF( tinP , (byteT*)this ) ) ;
        //if( ether ) return ;
    }

    _IO_

     //NOT SERIALIZED BECAUSE CT/DT FUNCTION

    //PSEUDODUPLICATED CODE: 1440006 0010296: 1440006(MASTER) IS SORTED BY LONG OS NAME; 0010296(COPY) IS SORTED BY IFC NAME

    {
        const idNameS pIdName[] =
        {
            #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.112001cf.ifcIDtYPEtOOL.h"
        }
        ;

        const countT offEnd = sizeof pIdName / sizeof pIdName[ 0 ] ;
        for( countT off = 0 ; off < offEnd ; off ++ )
        {
            leverIdKey = pIdName[ off ].id ;
            strokeS* psttn = psttOldC( tinP , ether , T(pIdName[off].post) ) ; ___( psttn ) ;
            swKeyName = (countT)psttn ;
        }
    }

    //U::LOAD swKey WITH THE IFC KEY VALUE FOR EACH EXTENDED OS KEY NAME
    //THE EXTENDED OS KEY NAME IS THE OS KEY VALUE CONCATENATED WITH THE OS KEY NAME
    //WINDOWS IS SUCH A PIECE OF SHIT.
    {
        //NOTE THAT flFORMAT_NObIGITvALUES MUST BE USED TO CONSTRUCT STROKE STRINGS CONTAINING THESE "xx." PREFIXES
        osNameIfcIdS pOsNameIfcId[] =
        {
            "03.Scroll Lock"                , ifcIDtYPEtOOL_LOCKsCROLL , //ELICITED BY PRESSING Ctrl_ScrollLock
            "91.Scroll Lock"                , ifcIDtYPEtOOL_LOCKsCROLL ,
            "90.Num Lock"                   , ifcIDtYPEtOOL_LOCKnUM ,
            "7e.`"                          , ifcIDtYPEtOOL_TILDE ,
            "7d.]"                          , ifcIDtYPEtOOL_CURLEYcLOSE ,
            "7c.\\"                         , ifcIDtYPEtOOL_OR ,
            "7b.F12"                        , ifcIDtYPEtOOL_F12 ,
            "7b.["                          , ifcIDtYPEtOOL_CURLEYoPEN ,
            "7a.Z"                          , ifcIDtYPEtOOL_z ,
            "7a.F11"                        , ifcIDtYPEtOOL_F11 ,
            "79.Y"                          , ifcIDtYPEtOOL_y ,
            "79.F10"                        , ifcIDtYPEtOOL_F10 ,
            "78.X"                          , ifcIDtYPEtOOL_x ,
            "78.F9"                         , ifcIDtYPEtOOL_F9 ,
            "77.W"                          , ifcIDtYPEtOOL_w ,
            "77.F8"                         , ifcIDtYPEtOOL_F8 ,
            "76.V"                          , ifcIDtYPEtOOL_v ,
            "76.F7"                         , ifcIDtYPEtOOL_F7 ,
            "75.U"                          , ifcIDtYPEtOOL_u ,
            "75.F6"                         , ifcIDtYPEtOOL_F6 ,
            "74.T"                          , ifcIDtYPEtOOL_t ,
            "74.F5"                         , ifcIDtYPEtOOL_F5 ,
            "73.S"                          , ifcIDtYPEtOOL_s ,
            "73.F4"                         , ifcIDtYPEtOOL_F4 ,
            "72.R"                          , ifcIDtYPEtOOL_r ,
            "72.F3"                         , ifcIDtYPEtOOL_F3 ,
            "71.Q"                          , ifcIDtYPEtOOL_q ,
            "71.F2"                         , ifcIDtYPEtOOL_F2 ,
            "70.P"                          , ifcIDtYPEtOOL_p ,
            "70.F1"                         , ifcIDtYPEtOOL_F1 ,
            "6f.O"                          , ifcIDtYPEtOOL_o ,
            "6e.N"                          , ifcIDtYPEtOOL_n ,
            "6d.M"                          , ifcIDtYPEtOOL_m ,
            "6c.L"                          , ifcIDtYPEtOOL_l ,
            "6b.K"                          , ifcIDtYPEtOOL_k ,
            "6a.J"                          , ifcIDtYPEtOOL_j ,
            "69.I"                          , ifcIDtYPEtOOL_i ,
            "68.H"                          , ifcIDtYPEtOOL_h ,
            "67.G"                          , ifcIDtYPEtOOL_g ,
            "66.F"                          , ifcIDtYPEtOOL_f ,
            "65.E"                          , ifcIDtYPEtOOL_e ,
            "64.D"                          , ifcIDtYPEtOOL_d ,
            "63.C"                          , ifcIDtYPEtOOL_c ,
            "62.B"                          , ifcIDtYPEtOOL_b ,
            "61.A"                          , ifcIDtYPEtOOL_a ,
            "60.`"                          , ifcIDtYPEtOOL_ACCENT ,
            "5f.-"                          , ifcIDtYPEtOOL_UNDERSCORE ,
            "5e.6"                          , ifcIDtYPEtOOL_CARET ,
            "5d.Application"                , ifcIDtYPEtOOL_BASEoScELLlIST ,
            "5d.]"                          , ifcIDtYPEtOOL_SQUAREcLOSE ,
            "5c.Right Windows"              , ifcIDtYPEtOOL_BASEoSrIGHT ,
            "5c.\\"                         , ifcIDtYPEtOOL_BACKsLASH ,
            "5b.Left Windows"               , ifcIDtYPEtOOL_BASEoSlEFT ,
            "5b.["                          , ifcIDtYPEtOOL_SQUAREoPEN ,
            "5a.Z"                          , ifcIDtYPEtOOL_Z ,
            "59.Y"                          , ifcIDtYPEtOOL_Y ,
            "58.X"                          , ifcIDtYPEtOOL_X ,
            "57.W"                          , ifcIDtYPEtOOL_W ,
            "56.V"                          , ifcIDtYPEtOOL_V ,
            "55.U"                          , ifcIDtYPEtOOL_U ,
            "54.T"                          , ifcIDtYPEtOOL_T ,
            "53.S"                          , ifcIDtYPEtOOL_S ,
            "52.R"                          , ifcIDtYPEtOOL_R ,
            "51.Q"                          , ifcIDtYPEtOOL_Q ,
            "50.P"                          , ifcIDtYPEtOOL_P ,
            "4f.O"                          , ifcIDtYPEtOOL_O ,
            "4e.N"                          , ifcIDtYPEtOOL_N ,
            "4d.M"                          , ifcIDtYPEtOOL_M ,
            "4c.L"                          , ifcIDtYPEtOOL_L ,
            "4b.K"                          , ifcIDtYPEtOOL_K ,
            "4a.J"                          , ifcIDtYPEtOOL_J ,
            "49.I"                          , ifcIDtYPEtOOL_I ,
            "48.H"                          , ifcIDtYPEtOOL_H ,
            "47.G"                          , ifcIDtYPEtOOL_G ,
            "46.F"                          , ifcIDtYPEtOOL_F ,
            "45.E"                          , ifcIDtYPEtOOL_E ,
            "44.D"                          , ifcIDtYPEtOOL_D ,
            "43.C"                          , ifcIDtYPEtOOL_C ,
            "42.B"                          , ifcIDtYPEtOOL_B ,
            "41.A"                          , ifcIDtYPEtOOL_A ,
            "40.2"                          , ifcIDtYPEtOOL_AT ,
            "3f./"                          , ifcIDtYPEtOOL_QUESTION ,
            "3e.."                          , ifcIDtYPEtOOL_GREATERtHAN ,
            "3d.="                          , ifcIDtYPEtOOL_EQUALS ,
            "3c.,"                          , ifcIDtYPEtOOL_LESStHAN ,
            "3b.;"                          , ifcIDtYPEtOOL_SEMICOLON ,
            "3a.;"                          , ifcIDtYPEtOOL_COLON ,
            "39.Num 9"                      , ifcIDtYPEtOOL_PAD9 ,
            "39.9"                          , ifcIDtYPEtOOL_9 ,
            "38.Num 8"                      , ifcIDtYPEtOOL_PAD8 ,
            "38.8"                          , ifcIDtYPEtOOL_8 ,
            "37.Num 7"                      , ifcIDtYPEtOOL_PAD7 ,
            "37.7"                          , ifcIDtYPEtOOL_7 ,
            "36.Num 6"                      , ifcIDtYPEtOOL_PAD6 ,
            "36.6"                          , ifcIDtYPEtOOL_6 ,
            "35.Num 5"                      , ifcIDtYPEtOOL_PAD5 ,
            "35.5"                          , ifcIDtYPEtOOL_5 ,
            "34.Num 4"                      , ifcIDtYPEtOOL_PAD4 ,
            "34.4"                          , ifcIDtYPEtOOL_4 ,
            "33.Num 3"                      , ifcIDtYPEtOOL_PAD3 ,
            "33.3"                          , ifcIDtYPEtOOL_3 ,
            "32.Num 2"                      , ifcIDtYPEtOOL_PAD2 ,
            "32.2"                          , ifcIDtYPEtOOL_2 ,
            "31.Num 1"                      , ifcIDtYPEtOOL_PAD1 ,
            "31.1"                          , ifcIDtYPEtOOL_1 ,
            "30.Num 0"                      , ifcIDtYPEtOOL_PAD0 ,
            "30.0"                          , ifcIDtYPEtOOL_0 ,
            "2f.Num /"                      , ifcIDtYPEtOOL_DIVIDEnUM ,
            "2f./"                          , ifcIDtYPEtOOL_DIVIDE ,
            "2e.Num Del1"                   , ifcIDtYPEtOOL_DELETEnUM , /*THE OS USES "2e.Num Del" FOR BOTH OF THESE CASES*/
            "2e.Num Del2"                   , ifcIDtYPEtOOL_PERIODnUM , /*THE OS USES "2e.Num Del" FOR BOTH OF THESE CASES*/
            "2e.Delete"                     , ifcIDtYPEtOOL_DELETE ,
            "2e.."                          , ifcIDtYPEtOOL_PERIOD ,
            "2d.Num 0"                      , ifcIDtYPEtOOL_INSERTnUM ,
            "2d.Num -"                      , ifcIDtYPEtOOL_MINUSnUM ,
            "2d.Insert"                     , ifcIDtYPEtOOL_INSERT ,
            "2d.-"                          , ifcIDtYPEtOOL_MINUS ,
            "2c.,"                          , ifcIDtYPEtOOL_COMMA ,
            "2b.Num +"                      , ifcIDtYPEtOOL_PLUSnUM ,
            "2b.="                          , ifcIDtYPEtOOL_PLUS ,
            "2a.Num *"                      , ifcIDtYPEtOOL_MULTIPLYnUM ,
            "2a.8"                          , ifcIDtYPEtOOL_MULTIPLY ,
            "29.0"                          , ifcIDtYPEtOOL_PARENcLOSE ,
            "28.Num 2"                      , ifcIDtYPEtOOL_DOWNnUM ,
            "28.Down"                       , ifcIDtYPEtOOL_DOWN ,
            "28.9"                          , ifcIDtYPEtOOL_PARENoPEN ,
            "27.Right"                      , ifcIDtYPEtOOL_RIGHT ,
            "27.Num 6"                      , ifcIDtYPEtOOL_RIGHTnUM ,
            "27.'"                          , ifcIDtYPEtOOL_QUOTEsINGLE ,
            "26.Up"                         , ifcIDtYPEtOOL_UP ,
            "26.Num 8"                      , ifcIDtYPEtOOL_UPnUM ,
            "26.7"                          , ifcIDtYPEtOOL_AND ,
            "25.Num 4"                      , ifcIDtYPEtOOL_LEFTnUM ,
            "25.Left"                       , ifcIDtYPEtOOL_LEFT ,
            "25.5"                          , ifcIDtYPEtOOL_PERCENT ,
            "24.Num 7"                      , ifcIDtYPEtOOL_HOMEnUM ,
            "24.Home"                       , ifcIDtYPEtOOL_HOME ,
            "24.4"                          , ifcIDtYPEtOOL_DOLLAR ,
            "23.Num 1"                      , ifcIDtYPEtOOL_ENDnUM ,
            "23.End"                        , ifcIDtYPEtOOL_END ,
            "23.3"                          , ifcIDtYPEtOOL_POUND ,
            "22.Page Down"                  , ifcIDtYPEtOOL_PAGEdOWN ,
            "22.Num 3"                      , ifcIDtYPEtOOL_PAGEdOWNnUM ,
            "22.'"                          , ifcIDtYPEtOOL_QUOTEdOUBLE ,
            "21.Page Up"                    , ifcIDtYPEtOOL_PAGEuP ,
            "21.Num 9"                      , ifcIDtYPEtOOL_PAGEuPnUM ,
            "21.1"                          , ifcIDtYPEtOOL_EXCLAIM ,
            "20.Space"                      , ifcIDtYPEtOOL_SPACE ,
            "1b.Esc"                        , ifcIDtYPEtOOL_ESCAPE ,
            "14.Caps Lock"                  , ifcIDtYPEtOOL_LOCKcAPS ,
            "13.Pause"                      , ifcIDtYPEtOOL_PAUSE ,
            "03.Break"                      , ifcIDtYPEtOOL_BREAK ,
            "12.Right Alt"                  , ifcIDtYPEtOOL_ALTrIGHT ,
            "12.Alt"                        , ifcIDtYPEtOOL_ALT ,
            "11.Right Ctrl"                 , ifcIDtYPEtOOL_CONTROLrIGHT ,
            "11.Ctrl"                       , ifcIDtYPEtOOL_CONTROL ,
            "10.Shift"                      , ifcIDtYPEtOOL_SHIFT ,
            "10.Right Shift"                , ifcIDtYPEtOOL_SHIFTrIGHT ,
            "0d.Num Enter"                  , ifcIDtYPEtOOL_ENTERnUM ,
            "0d.Enter"                      , ifcIDtYPEtOOL_ENTER ,
            "0c.Num 5"                      , ifcIDtYPEtOOL_NULLnUM ,
            "09.Tab"                        , ifcIDtYPEtOOL_TAB ,
            "09.Tab.shifted"                , ifcIDtYPEtOOL_TABbACK ,
            "08.Backspace"                  , ifcIDtYPEtOOL_BACKSPACE ,
        }
        ;

        const countT offEnd = sizeof pOsNameIfcId / sizeof pOsNameIfcId[ 0 ] ;
        for( countT off = 0 ; off < offEnd ; off ++ )
        {
            TN( tName , pOsNameIfcId[ off ].post ) ;
            psttlKeyName = tName ;
            swKey = pOsNameIfcId[ off ].id ;
        }
    }
    
    if( !tinP.pAdamGlobal1->_windowOldC_.pstWindow ) { tinP.pAdamGlobal1->_windowOldC_.pstWindow = new( 0 , tinP , LF ) stackC( tinP , ether , TAG( TAGiDnULL ) ) ; ___( tinP.pAdamGlobal1->_windowOldC_.pstWindow ) ; }
    
    if( tinP.pAdamGlobal1->_windowOldC_.pstWindow ) *tinP.pAdamGlobal1->_windowOldC_.pstWindow << (countT)this ;
    
    //LOGrAWtID4( "windowOldC::ctF calling winCreateWindowF (cColP,cRowP): " , cColP , " " , cRowP ) ;
    if( tinP.monitor.idThread == thirdC::third_idThreadWindowsIF( tinP ) ) ((thirdC&)ether).winCreateWindowF( tinP , pWindowP ? *pWindowP : handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) , hWindow , MAINwINDOWcLASSnAME , MAINwINDOWcLASSnAME , pWindowP ? ( bRootP ? idtWIN_ROOT : idtWIN_KID ) : idtWIN_ROOT , idColP , idRowP , cColP , cRowP , cColClientP , cRowClientP , thirdC::third_hWindowingClientIF( tinP ) , bNotVisibleP , cTriesP ) ;
    else if( pWindowP )
    {
        ZE( count8S* , pc8a ) ;
        ZE( count8S* , pc8b ) ;
        ZE( count2S* , pc2 ) ;
        ether.newF( tinP , LF , pc8a ) ; ___( pc8a ) ;
        ether.newF( tinP , LF , pc8b ) ; ___( pc8b ) ;
        ether.newF( tinP , LF , pc2  ) ; ___( pc2  ) ;
        if( pc2 && pc8a && pc8b )
        {
            pc2->c1 = (countT)pc8a ;
            pc2->c2 = (countT)pc8b ;

            pc8a->c1 = (countT)pWindowP ;
            pc8a->c2 = idColP ;
            pc8a->c3 = idRowP ;
            pc8a->c4 = cColP ;
            pc8a->c5 = cRowP ;
            pc8a->c6 = cColClientP ;
            pc8a->c7 = cRowClientP ;
            pc8a->c8 = bRootP ;
            pc8b->c1 = (countT)&hWindow ;
            pc8b->c2 = bNotVisibleP ;    
            pc8b->c3 = cTriesP ;

            __( !!((thirdC&)ether).winSendMessageF( tinP , *pWindowP , idwm_CREATEwINDOW , (countT)pc2 ) ) ;
        }
    }
    else __1
    
    mColsRowsF( tinP , cColClientP , cRowClientP ) ;

    ((thirdC&)ether).winOpenDrawingHandleF( tinP , hDrawWindow , hWindow ) ;
    
    //U::MOVE THIS TO LATH THING DONE WHEN paperOldC NO LONGER NEEDS tinP.pAdamGlobal1->_windowOldC_.pRoot
    etherC::ether_pBatWindowDeletionI_F( tinP )->grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( !tinP.pAdamGlobal1->_windowOldC_.pRoot ) tinP.pAdamGlobal1->_windowOldC_.pRoot = this ; //NEEDED BY paperOldC PENDING REDESIGN OF SERIALIZATION FOR CLASSES RELATED TO paperOldC
    etherC::ether_pBatWindowDeletionI_F( tinP )->ungrabF( tinP ) ;

    ctSuffixF( tinP , (countT)&hDrawWindow , pPaperToBackCBFP , cPaperToBackArgP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e006.windowoldc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e009.windowoldc.backoldctpaperf BEGIN
#define DDNAME       "3func.3602e009.windowoldc.backoldctpaperf"
#define DDNUMB      (countT)0x3602e009
#define IDFILE      (countT)0x109a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backOldCtPaperF( tinS& tinP , pulpOldC& pulpP , paperOldC& paperP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;

    ((thirdC&)ether).winOpenDrawingToolF( tinP , pulp.hPen   , ifcIDtYPEdRAWINGtOOL_PEN   , hDrawWindow ) ;
    ((thirdC&)ether).winOpenDrawingToolF( tinP , pulp.hBrush , ifcIDtYPEdRAWINGtOOL_BRUSH , hDrawWindow ) ;
    ((thirdC&)ether).winOpenDrawingToolF( tinP , pulp.hFont  , ifcIDtYPEdRAWINGtOOL_FONT  , hDrawWindow ) ;
    {
        handleC hPrior( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
        ((thirdC&)ether).winSelectDrawingToolF( tinP , hDrawWindow , pulp.hFont , hPrior ) ;
        hPrior.resetF() ;
    }

    pulp.pHndDrawBitmap = &(handleC&)pulp.bitmapNormal ; //U::

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e009.windowoldc.backoldctpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00a.windowoldc.backidtypef BEGIN
#define DDNAME       "3func.3602e00a.windowoldc.backidtypef"
#define DDNUMB      (countT)0x3602e00a
#define IDFILE      (countT)0x109b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT windowOldC::backIdTypeF( voidT ) const/*1*/
{
    //NOT SERIALIZED BECAUSE const FUNCTION
    return ifcIDtYPEpAPERbACK_windowOldC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00a.windowoldc.backidtypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00c.windowoldc.backpositionf BEGIN
#define DDNAME       "3func.3602e00c.windowoldc.backpositionf"
#define DDNUMB      (countT)0x3602e00c
#define IDFILE      (countT)0x109c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backPositionF( tinS& tinP , pulpOldC& pulpP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    thirdC::winMoveIF( tinP , *pulp.pHndDrawBitmap , mIdColP , mIdRowP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00c.windowoldc.backpositionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00d.windowoldc.backflushf BEGIN
#define DDNAME       "3func.3602e00d.windowoldc.backflushf"
#define DDNUMB      (countT)0x3602e00d
#define IDFILE      (countT)0x109d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backFlushF( tinS& tinP , pulpOldC& pulpP , const measureT mIdColP , const measureT mIdRowP , const measureT mColsP , const measureT mRowsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    const measureT mIdCol = mIdColP ? mIdColP : 1.0 ;
    const measureT mIdRow = mIdRowP ? mIdRowP : 1.0 ;

    LOGrAW5( "backFlushF to window from bitmap [oshTo,oshFrom]: " , hDrawWindow.osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , " " , pulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , "\r\n" ) ; //U::TO FIND A BUG

    thirdC::winBitBltIF( tinP , ifcIDtYPEpAINT_OPAQUE , hDrawWindow , *pulp.pHndDrawBitmap , mColsP ? mColsP : mCols , mRowsP ? mRowsP : mRows , mIdCol , mIdRow , mIdCol , mIdRow ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00d.windowoldc.backflushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00e.windowoldc.backresetf BEGIN
#define DDNAME       "3func.3602e00e.windowoldc.backresetf"
#define DDNUMB      (countT)0x3602e00e
#define IDFILE      (countT)0x109e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backResetF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;

    SelectClipRgn( (HDC)pulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , 0 ) ;

    ((thirdC&)ether).winSetPaintTypeF( tinP , *pulp.pHndDrawBitmap  ) ;
    backScratchBitmapPopF( tinP , pulp , 1 ) ;

    ((thirdC&)ether).winResetF( tinP , *pulp.pHndDrawBitmap , *this ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00e.windowoldc.backresetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00f.windowoldc.backdtpaperf BEGIN
#define DDNAME       "3func.3602e00f.windowoldc.backdtpaperf"
#define DDNUMB      (countT)0x3602e00f
#define IDFILE      (countT)0x109f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backDtPaperF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    voidT* pnu = &pulpP ;
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e00f.windowoldc.backdtpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e010.windowoldc.backsadamhighlightf BEGIN
#define DDNAME       "3func.3602e010.windowoldc.backsadamhighlightf"
#define DDNUMB      (countT)0x3602e010
#define IDFILE      (countT)0x10a0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backSadamHighlightF( tinS& tinP , pulpOldC& pulpP , paperOldC& paperP , const countT rgbP , measureT mColFromP , measureT mRowFromP , measureT mColToP , measureT mRowToP , const measureT mShrinkP , const countT cSidesP )/*1*/
{
    mColFromP += mShrinkP ;
    mRowFromP += mShrinkP ;
    mColToP   -= mShrinkP ;
    mRowToP   -= mShrinkP ;

    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;

    handleC hPen(   tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    handleC hBrush( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    ((thirdC&)ether).winOpenDrawingToolF( tinP , hPen   , ifcIDtYPEdRAWINGtOOL_PEN   , hDrawWindow , &(countT&)countTC( rgbP ) ) ;
    ((thirdC&)ether).winOpenDrawingToolF( tinP , hBrush , ifcIDtYPEdRAWINGtOOL_BRUSH , hDrawWindow , &(countT&)countTC( rgbP ) ) ;

    handleC hPenSave(   tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    handleC hBrushSave( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    ((thirdC&)ether).winSelectDrawingToolF( tinP , *pulp.pHndDrawBitmap , hPen   , hPenSave   ) ;
    ((thirdC&)ether).winSelectDrawingToolF( tinP , *pulp.pHndDrawBitmap , hBrush , hBrushSave ) ;

    const countT oshDraw = pulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) ;
    BOS( WHATgbo , BOSoK , SaveDC( (HDC)oshDraw ) )
    BOSpOOP
    BOSdOnOTtEST( WHATgbo , ExtSelectClipRgn( (HDC)oshDraw , 0 , RGN_COPY ) )

    //TN( tSay , "" ) ; tSay = T("backSadamHighlightF: (mColFromP,mColToP): ")+TF1(mColFromP)+T(" ")+TF1(mColToP)+T("\r\n") ;
    //LOGrAW( tSay ) ;

    ((thirdC&)ether).winRectangleF( tinP , *pulp.pHndDrawBitmap , mColFromP , mRowFromP , mColToP , mRowToP ) ;

    RestoreDC( (HDC)oshDraw , - 1 ) ; //INTENDED TO RESTORE WHATEVER CLIPPING REGION WAS IN EFFECT

    handleC hPenDup(   tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    handleC hBrushDup( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
    ((thirdC&)ether).winSelectDrawingToolF( tinP , *pulp.pHndDrawBitmap , hPenSave   , hPenDup   ) ;
    ((thirdC&)ether).winSelectDrawingToolF( tinP , *pulp.pHndDrawBitmap , hBrushSave , hBrushDup ) ;

    hPenSave.resetF() ;
    hBrushSave.resetF() ;
    hPenDup.resetF() ;
    hBrushDup.resetF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e010.windowoldc.backsadamhighlightf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e011.windowoldc.backsuppressrefreshf BEGIN
#define DDNAME       "3func.3602e011.windowoldc.backsuppressrefreshf"
#define DDNUMB      (countT)0x3602e011
#define IDFILE      (countT)0x10a1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT windowOldC::backSuppressRefreshF( tinS& tinP , const paperOldC& paperP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    countT idPaper = papers.idPaperF( paperP ) ;
    
    ZE( boolT , bSuppress ) ;
    if( idPaper && idPaper < papers )
    {
        bSuppress = mCols == pmColsLathRender[ idPaper - 1 ] && mRows == pmRowsLathRender[ idPaper - 1 ] ;
    
        if( !bSuppress )
        {
            pmColsLathRender[ idPaper - 1 ] = mCols ;
            pmRowsLathRender[ idPaper - 1 ] = mRows ;
        }
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;

    return bSuppress ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e011.windowoldc.backsuppressrefreshf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e012.windowoldc.backflushasyncf BEGIN
#define DDNAME       "3func.3602e012.windowoldc.backflushasyncf"
#define DDNUMB      (countT)0x3602e012
#define IDFILE      (countT)0x10a2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#if defined( NEVERdEFINED )

//WORKS, BUT IS NOT USED IN IPDOS (tm)

/*1*/voidT windowOldC::backFlushAsyncF( tinS& tinP , const measureT mIdColMinP , const measureT mIdRowMinP , const measureT mIdColMaxP , const measureT mIdRowMaxP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    ((thirdC&)ether).winI nvalidateRectF( tinP , *this , mIdColMinP , mIdRowMinP , mIdColMaxP , mIdRowMaxP ) ;
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e012.windowoldc.backflushasyncf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e013.windowoldc.backnotifybeforesadamf BEGIN
#define DDNAME       "3func.3602e013.windowoldc.backnotifybeforesadamf"
#define DDNUMB      (countT)0x3602e013
#define IDFILE      (countT)0x10a3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backNotifyBeforeSadamF( tinS& tinP , pulpOldC& pulpP , const strokeS& sttP , const flagsT flagsP )/*1*/
{
    //NOT SERIALIZED BECAUSE NULL FUNCTION
    countT cnu = (countT)&pulpP ;
    if( tinP.fingerprint && sttP.idAdam && flagsP && cnu ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e013.windowoldc.backnotifybeforesadamf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e014.windowoldc.backabsentf BEGIN
#define DDNAME       "3func.3602e014.windowoldc.backabsentf"
#define DDNUMB      (countT)0x3602e014
#define IDFILE      (countT)0x10a4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT windowOldC::backAbsentF( voidT ) const/*1*/
{
    TINSL
    //LOGrAW5( "query [&flags,bAbsent]: " , &rowBack.ro.flagsPaperBackMode , " " , !!( F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) , "\r\n" ) ;

    //NOT SERIALIZED BECAUSE const
    return !!( F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e014.windowoldc.backabsentf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e015.windowoldc.keydownf BEGIN
#define DDNAME       "3func.3602e015.windowoldc.keydownf"
#define DDNUMB      (countT)0x3602e015
#define IDFILE      (countT)0x10a5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::keyDownF( tinS& tinP , const countT idCmdP , const countT p1P , const countT p2P )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                
    //U::
    if( p1P == VK_ESCAPE )
    {
        countT foo = 2 ;
    }

    ZE( countT , idTool ) ;
    {
        boolT bShifted = p1P != VK_TAB
            ? 0
            : !!( F(thirdC::winGetKeyStateIF(ifcIDtYPEtOOL_SHIFT)) & flTOOL_DOWN ) || !!( F(thirdC::winGetKeyStateIF(ifcIDtYPEtOOL_SHIFTrIGHT)) & flTOOL_DOWN )
        ;
    
        osTextT postn[ 0x100 ] ;
        countT cbn = thirdC::winGetKeyNameTextIF( postn , sizeof postn , p2P ) ;
        TN( tName , postn ) ;
                            
        if( p1P == 0x2e && !thirdC::c_strcmpIF( tinP , postn , "Num Del" ) )
        {
            if( idCmdP == WM_KEYDOWN ) thirdC::c_strcatIF( tinP , postn  , "1" ) ;
            else                       thirdC::c_strcatIF( tinP , postn  , "2" ) ;
        }
                            
        TN( tName2 , "" ) ; tName2 = TF3(p1P,flFORMAT_FOREIGN|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES,2)+T(".")+T(postn)+T(bShifted?".shifted":"") ;
                            
        psttlKeyName = tName2 ;
        leverIdKey = swKey ;
                            
        psttlKeyName = tName ;
        swKeyLathDown = idTool = leverIdKey ;
    
        if( !idTool ) { TN( tSay , "" ) ; tSay = T("no idTool registered for name \"")+tName2+T("\"\r\n") ; LOGrAW( tSay ) ; }
    }
    
    if( idKeyLathDown == ifcIDtYPEtOOL_BASEoScELLlIST && idTool == ifcIDtYPEtOOL_SHIFT )
    {
        idKeyLathDownLag = idKeyLathDown ;
        idKeyLathDown = idTool ;
        idTool = 0 ;
    }
    else if( idKeyLathDownLag == ifcIDtYPEtOOL_BASEoScELLlIST && idKeyLathDown == ifcIDtYPEtOOL_SHIFT && idTool == ifcIDtYPEtOOL_F10 )
    {
        idKeyLathDownLag = idKeyLathDown ;
        idKeyLathDown = idTool ;
        idTool = 0 ;
    }
    
    if( !idTool ) tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    else
    {
        boolT bOn = F(thirdC::winGetKeyStateIF(idTool)) & flTOOL_ON ;
        countT idToolShadow = idToolShadowF( idTool ) ;
            
        setToolFlagsF( tinP , idTool , flTOOL_DOWN , flTOOL_null ) ;
        if( bOn ) setToolFlagsF( tinP , idTool , flTOOL_ON   , flTOOL_null ) ;
        else      setToolFlagsF( tinP , idTool , flTOOL_null , flTOOL_ON   ) ;
    
        if( idToolShadow )
        {
            setToolFlagsF( tinP , idToolShadow , flTOOL_DOWN , flTOOL_null ) ;
            if( bOn ) setToolFlagsF( tinP , idToolShadow , flTOOL_ON   , flTOOL_null ) ;
            else      setToolFlagsF( tinP , idToolShadow , flTOOL_null , flTOOL_ON   ) ;
        }
    
        //osTextT* postVkSymbol = postVkSymbolF( tinP , p1P ) ;
        //TN( tSay , "" ) ; tSay = TF1(p1P)+T(" \"")+T(postVkSymbol)+T("\"") ;
        //LOGrAW( tSay ) ;
    
        idKeyLathDownLag = idKeyLathDown ;
        idKeyLathDown = idTool ;
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
        ZE( countT , cCalled ) ;

        count8S c8n( 1 , 2 , idTool , ifcIDtYPEaCTION_DOWN ) ;
        cCalled = paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_KEYBOARD , c8n , 0 ) ;
    
        switch( idTool )
        {
            case ifcIDtYPEtOOL_TAB     :
            case ifcIDtYPEtOOL_TABbACK :
            {
                sadamsC::pSadamsIF( tinP )->tabFreshF( tinP , ether , idTool == ifcIDtYPEtOOL_TAB ? ifcIDtYPEtABfRESH_RIGHT : ifcIDtYPEtABfRESH_LEFT ) ;
                break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e015.windowoldc.keydownf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e016.windowc.keyupf BEGIN
#define DDNAME       "3func.3602e016.windowc.keyupf"
#define DDNUMB      (countT)0x3602e016
#define IDFILE      (countT)0x10a6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::keyUpF( tinS& tinP , const countT p2P )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    ZE( countT , idTool ) ;
    {
        osTextT postn[ 0x100 ] ;
        countT cbn = thirdC::winGetKeyNameTextIF( postn , sizeof postn , p2P ) ;
        TN( tName , postn ) ;
                        
        psttlKeyName = tName ;
        idTool = swKeyLathDown ;
    }
    
    ZE( countT , cCalled ) ;
    if( idTool )
    {
        boolT bOn = F(thirdC::winGetKeyStateIF(idTool)) & flTOOL_ON ;
        countT idToolShadow = idToolShadowF( idTool ) ;
    
        setToolFlagsF( tinP , idTool , flTOOL_null , flTOOL_DOWN ) ;
        if( bOn ) setToolFlagsF( tinP , idTool , flTOOL_ON   , flTOOL_null ) ;
        else      setToolFlagsF( tinP , idTool , flTOOL_null , flTOOL_ON   ) ;
    
        if( idToolShadow )
        {
            setToolFlagsF( tinP , idToolShadow , flTOOL_null , flTOOL_DOWN ) ;
            if( bOn ) setToolFlagsF( tinP , idToolShadow , flTOOL_ON   , flTOOL_null ) ;
            else      setToolFlagsF( tinP , idToolShadow , flTOOL_null , flTOOL_ON   ) ;
        }
    
        count8S c8n( 1 , 2 , idTool , ifcIDtYPEaCTION_UP ) ;
        cCalled = paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_KEYBOARD , c8n , 0 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e016.windowc.keyupf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e017.windowoldc.freshcolrowindadf BEGIN
#define DDNAME       "3func.3602e017.windowoldc.freshcolrowindadf"
#define DDNUMB      (countT)0x3602e017
#define IDFILE      (countT)0x10a7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::freshColRowInDadF( tinS& tinP , const measureT mIdColP , const measureT mIdRowP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    mIdColInDad = mIdColP ;
    mIdRowInDad = mIdRowP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e017.windowoldc.freshcolrowindadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e018.windowoldc.pushpaperdrawoverridef BEGIN
#define DDNAME       "3func.3602e018.windowoldc.pushpaperdrawoverridef"
#define DDNUMB      (countT)0x3602e018
#define IDFILE      (countT)0x10a8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::pushPaperDrawOverrideF( tinS& tinP , pulpOldC& pulpP , const countT idPaperP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) ) pushPaperDrawOverrideProtectedF( tinP , idPaperP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e018.windowoldc.pushpaperdrawoverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e019.windowoldc.poppaperdrawoverridef BEGIN
#define DDNAME       "3func.3602e019.windowoldc.poppaperdrawoverridef"
#define DDNUMB      (countT)0x3602e019
#define IDFILE      (countT)0x10a9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::popPaperDrawOverrideF( tinS& tinP , pulpOldC& pulpP , const flagsT flagsP )/*1*/
{
    if( !( F(flagsP) & flDRAW_SUPPRESSpELcOLORcHANGES ) ) popPaperDrawOverrideProtectedF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e019.windowoldc.poppaperdrawoverridef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01a.windowoldc.backdrawonscratchdevicef BEGIN
#define DDNAME       "3func.3602e01a.windowoldc.backdrawonscratchdevicef"
#define DDNUMB      (countT)0x3602e01a
#define IDFILE      (countT)0x10aa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backDrawOnScratchDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    pulp.selectScratchBitmapF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01a.windowoldc.backdrawonscratchdevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01b.windowoldc.backscratchbitmappushf BEGIN
#define DDNAME       "3func.3602e01b.windowoldc.backscratchbitmappushf"
#define DDNUMB      (countT)0x3602e01b
#define IDFILE      (countT)0x10ab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backScratchBitmapPushF( tinS& tinP , pulpOldC& pulpP , const countT cColsP , const countT cRowsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;

    byteT pbb[ sizeof( bitmapOldC ) ] ;
    new( 0 , tinP , pbb , sizeof pbb ) bitmapOldC( tinP , ether , hDrawWindow , cColsP , cRowsP ) ;
    pulp.stqBitmapScratch << pbb ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01b.windowoldc.backscratchbitmappushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01c.windowoldc.scratchbitmappopf BEGIN
#define DDNAME       "3func.3602e01c.windowoldc.scratchbitmappopf"
#define DDNUMB      (countT)0x3602e01c
#define IDFILE      (countT)0x10ac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backScratchBitmapPopF( tinS& tinP , pulpOldC& pulpP , const boolT bAllP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& state = *(winPulpOldC*)&pulpP ;

    while( state.stqBitmapScratch )
    {
        byteT pbb[ sizeof( bitmapOldC ) ] ;
        state.stqBitmapScratch >> pbb ;
        bitmapOldC* pDoomed = (bitmapOldC*)pbb ;
        DELzOMBIE( pDoomed ) ;

        if( !bAllP ) break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01c.windowoldc.scratchbitmappopf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01d.windowoldc.backdrawonnormaldevicef BEGIN
#define DDNAME       "3func.3602e01d.windowoldc.backdrawonnormaldevicef"
#define DDNUMB      (countT)0x3602e01d
#define IDFILE      (countT)0x10ad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backDrawOnNormalDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    pulp.selectNormalBitmapF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01d.windowoldc.backdrawonnormaldevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01e.windowoldc.backdrawonnulldevicef BEGIN
#define DDNAME       "3func.3602e01e.windowoldc.backdrawonnulldevicef"
#define DDNUMB      (countT)0x3602e01e
#define IDFILE      (countT)0x10ae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backDrawOnNullDeviceF( tinS& tinP , pulpOldC& pulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;
    pulp.selectNullBitmapF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01e.windowoldc.backdrawonnulldevicef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01f.windowoldc.backscratchbitmapmonochromepushf BEGIN
#define DDNAME       "3func.3602e01f.windowoldc.backscratchbitmapmonochromepushf"
#define DDNUMB      (countT)0x3602e01f
#define IDFILE      (countT)0x10af


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::backScratchBitmapMonochromePushF( tinS& tinP , pulpOldC& pulpP , const countT cColsP , const countT cRowsP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    winPulpOldC& pulp = *(winPulpOldC*)&pulpP ;

    byteT pbb[ sizeof( bitmapOldC ) ] ;
    new( 0 , tinP , pbb , sizeof pbb ) bitmapOldC( tinP , ether , cColsP , cRowsP ) ;
    pulp.stqBitmapScratch << pbb ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e01f.windowoldc.backscratchbitmapmonochromepushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e020.windowoldc.renderf BEGIN
#define DDNAME       "3func.3602e020.windowoldc.renderf"
#define DDNUMB      (countT)0x3602e020
#define IDFILE      (countT)0x10b0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

const measureT pmtRef[       7 ] = { 0.00 , 1.0/6.0 , 2.0/6.0 , 3.0/6.0 , 4.0/6.0 , 5.0/6.0 , 1.0 } ;
const measureT pmtExpandRef[ 7 ] = { 0.00 , 0.0     , 1.0/4.0 , 2.0/4.0 , 3.0/4.0 , 1.0     , 1.0 } ;

const measureT* pmt  = pmtExpandRef ;
const measureT* pmts = pmtExpandRef ;

#define M2(cP,rP)  { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; winPulp.mIdColNow  = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc ; winPulp.mIdRowNow  = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr ; winPulp.idLineType = 0 ; moveOrLineTransformedF( tinP , winPulp ) ; }
#define L2(cP,rP)  { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; mIdColWork = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc ; mIdRowWork = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr ; winPulp.mIdColNow = mIdColWork ; winPulp.mIdRowNow = mIdRowWork ; winPulp.idLineType = 1 ; moveOrLineTransformedF( tinP , winPulp ) ; }
#define LE2(cP,rP) { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; mIdColWork = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc ; mIdRowWork = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr ; winPulp.mIdColNow = mIdColWork ; winPulp.mIdRowNow = mIdRowWork ; winPulp.idLineType = 2 ; moveOrLineTransformedF( tinP , winPulp ) ; }

#define M4(cP,rP,cAdjP,rAdjP)  { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; winPulp.mIdColNow  = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc + (cAdjP) ; winPulp.mIdRowNow  = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr + (rAdjP) ; winPulp.idLineType = 0 ; moveOrLineTransformedF( tinP , winPulp ) ; }
#define L4(cP,rP,cAdjP,rAdjP)  { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; mIdColWork = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc + (cAdjP) ; mIdRowWork = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr + (rAdjP) ; winPulp.mIdColNow = mIdColWork ; winPulp.mIdRowNow = mIdRowWork ; winPulp.idLineType = 1 ; moveOrLineTransformedF( tinP , winPulp ) ; }
#define LE4(cP,rP,cAdjP,rAdjP) { winPulp.mIdColLag = winPulp.mIdColNow ; winPulp.mIdRowLag = winPulp.mIdRowNow ; mIdColWork = (cP) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc + (cAdjP) ; mIdRowWork = (rP) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr + (rAdjP) ; winPulp.mIdColNow = mIdColWork ; winPulp.mIdRowNow = mIdRowWork ; winPulp.idLineType = 2 ; moveOrLineTransformedF( tinP , winPulp ) ; }

#define PUSH(caseP,staqP)                                         \
                                                                  \
    case caseP :                                                  \
    {                                                             \
        pushF( tinP , staqP , sttP , caseP , winPulp ) ;          \
        break ;                                                   \
    }

#define DUP(caseP,staqP)                                          \
                                                                  \
    case caseP :                                                  \
    {                                                             \
        duplicateF( tinP , staqP , sttP , caseP , winPulp ) ;     \
        break ;                                                   \
    }

#define POP(caseP,staqP)                                          \
                                                                  \
    case caseP :                                                  \
    {                                                             \
        popF( tinP , staqP , caseP , 0 , winPulp ) ;              \
        break ;                                                   \
    }

#define POPbIG(caseP,staqP,cbP)                                   \
                                                                  \
    case caseP :                                                  \
    {                                                             \
        popF( tinP , staqP , caseP , cbP , winPulp ) ;            \
        break ;                                                   \
    }

/*
*/
/**/

boolT bLog3302e = 1 ; //FOR DEBUGGING CONVENIENCE; SET TO 0 IN PRODUCTION

// SPECS
//  
//  MOST CASTES INTERPRET idAdam cNote AS measureT IMAGES
//  THE ONLY EXCEPTIONS ARE THE GLYPH CASTES SUCH AS sc_cALPHABET1 sc_cFROMaSCII ETC
//  EVEN IF ONLY INTEGRAL VALUES ARE MEANINGFUL, THE IMAGE IS INTERPRETED AS A measureT IMAGE
//  THIS IS SO THAT APPLICATION WRITERS DO NOT NEED TO REMEMBER WHICH CASTES TAKE WHICH TYPE OF ARGUMENTS
//  IF A CAST IS TO SUPPORT INTEGRAL VALUES BEYOND THE RANGE OF measureT, AN EXCEPTION WILL NEED TO BE MADE AND DOCUMENTED
//  

#define LW (8)
#define LWM (9)

#define TRACEtITLEiF                                                \
                                                                    \
    if( cTraceOn && !bTraceTitleWritten )                           \
    {                                                               \
        bTraceTitleWritten = 1 ;                                    \
        strokeS sttd( '-' , sc_cALPHABET1 , 0 ) ;                   \
        TN( tSay , "" ) ; tSay = /*TPS("pPulp",LW,sttd)+T(" ")+TPS("idIn",LW,sttd)+T(" ")+TPS("e/w",5,sttd)*//*+T(" ")+TPS("idPaperO",LW,sttd)*//*+T(" ")+TPS("idPaperS",LW,sttd)+T(" ")+TPS("idPaperD",LW,sttd)*//*+T(" ")+TPS("pPaperO",LW,sttd)*//*+T(" ")+TPS("pPaperS",LW,sttd)+T(" ")+TPS("pPaperD",LW,sttd)+T(" ")+TPS("mPadR",LW,sttd)+T(" ")+*/TPS("col",LW,sttd)+T(" ")+TPS("row",LW,sttd)+T(" ")+TPS("sfColMin",LW,sttd)+T(" ")+TPS("sfRowMin",LW,sttd)+T(" ")+TPS("sfColMax",LW,sttd)+T(" ")+TPS("sfRowMax",LW,sttd)+T(" ")+TPS("sfCols",LW,sttd)+T(" ")+TPS("sfRows",LW,sttd)/*+T(" ")+TPS("thread",0xa,sttd)*/+T(" ")+TPS("caste",0xc+processGlobal3I.mapAdam.costMaxF()-0xd,sttd)+T(" ")+TPS("flags",LW,sttd)+T(" comments--------\r\n") ; \
        LOGrAW( tSay ) ;                                            \
    }

#define TRACEiF                                                                                                                                                 \
                                                                                                                                                                \
    if( cTraceOn )                                                                                                                                              \
    {                                                                                                                                                           \
        strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;                                                     \
                                                                                                                                                                \
        static countT costm = 5 + 8/*ALLOWANCE FOR cTraceOn UP TO 8*/ + processGlobal3I.mapAdam.costMaxF() ;                                                    \
                                                                                                                                                                \
        /*ZE( const paperOldC* , pPaperDrawDefault ) ;                                                                                                         */\
        /*ZE( countT , idPaperDrawDefault ) ;                                                                                                               */\
        /*if( papers.stq_pPaperDrawUnder )                                                                                                                    */\
        /*{                                                                                                                                                   */\
        /*    countT cUnder = papers.stq_pPaperDrawUnder ;                                                                                                    */\
        /*    if( cUnder )                                                                                                                                    */\
        /*    {                                                                                                                                               */\
        /*        pPaperDrawDefault  = (const paperOldC*)papers.stq_pPaperDrawUnder[ cUnder ] ;                                                                  */\
        /*        idPaperDrawDefault = papers.swPaper( *(countT*)pPaperDrawDefault ) ;                                                                        */\
        /*    }                                                                                                                                               */\
        /*}                                                                                                                                                   */\
                                                                                                                                                                \
        TN( tPadNest , " " ) ;                                                                                                                                  \
        TN( tPadEach , "| " ) ;                                                                                                                                 \
        countT cToDo = cTraceOn - 1 ;                                                                                                                           \
        while( cToDo -- ) tPadNest += tPadEach ;                                                                                                                \
                                                                                                                                                                \
        TN( tSay , "" ) ; tSay = winPulp.mIdColNow == sf.mIdCol && winPulp.mIdRowNow == sf.mIdRow                                                               \
                                                                                                                                                                \
            ? /*TF3((countT)&pulpP,flFORMAT_null,LW)+T(" ")+TF3(idIn,flFORMAT_null,LW)+T(backIdTypeF()==ifcIDtYPEpAPERbACK_eyeOldC?" eye   ":"       ")*//*+(idPaperDrawDefault?TF3(idPaperDrawDefault,flFORMAT_null,LW+1):TP("",LW+1))*//*+TF3(papers.idPaperF(papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYsHOW)),flFORMAT_null,LW+1)+TF3(papers.idPaperF(papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYrENDER)),flFORMAT_null,LW+1)*//*+(pPaperDrawDefault?TF3((countT)pPaperDrawDefault,flFORMAT_null,LW+1):TP("",LW+1))*//*+TF3((countT)&papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYsHOW),flFORMAT_null,LW+1)+TF3((countT)&papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYrENDER),flFORMAT_null,LW+1)+TF3(winPulp.rCache.mPadRight,flFORMAT_null,LW)+T(" ")+*/TP("",2*LW+2)                                                                                      +TF3(R(sf.mIdCol),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdRow),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdCol-(measureT)1+sf.mCols),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdRow-(measureT)1+sf.mRows),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mCols),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mRows),flFORMAT_null,LW)/*+T(" ")+TP(tinP.postThreadName,0xa)*/+tPadNest+TP(processGlobal3I.mapCaste(sttP.idCaste),costm-tPadNest.csF(tinP)-0xd)+T(" ")+TF3(winPulp.flagsMode,flFORMAT_UNSIGNED,LW)+T(" | ") \
            : /*TF3((countT)&pulpP,flFORMAT_null,LW)+T(" ")+TF3(idIn,flFORMAT_null,LW)+T(backIdTypeF()==ifcIDtYPEpAPERbACK_eyeOldC?" eye   ":"       ")*//*+(idPaperDrawDefault?TF3(idPaperDrawDefault,flFORMAT_null,LW+1):TP("",LW+1))*//*+TF3(papers.idPaperF(papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYsHOW)),flFORMAT_null,LW+1)+TF3(papers.idPaperF(papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYrENDER)),flFORMAT_null,LW+1)*//*+(pPaperDrawDefault?TF3((countT)pPaperDrawDefault,flFORMAT_null,LW+1):TP("",LW+1))*//*+TF3((countT)&papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYsHOW),flFORMAT_null,LW+1)+TF3((countT)&papers.selectF(tinP,ifcIDcMDpAPERsELECT_QUERYrENDER),flFORMAT_null,LW+1)+TF3(winPulp.rCache.mPadRight,flFORMAT_null,LW)+T(" ")+*/TF3(R(winPulp.mIdColNow),flFORMAT_null,LW)+T(" ")+TF3(R(winPulp.mIdRowNow),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdCol),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdRow),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdCol-(measureT)1+sf.mCols),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mIdRow-(measureT)1+sf.mRows),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mCols),flFORMAT_null,LW)+T(" ")+TF3(R(sf.mRows),flFORMAT_null,LW)/*+T(" ")+TP(tinP.postThreadName,0xa)*/+tPadNest+TP(processGlobal3I.mapCaste(sttP.idCaste),costm-tPadNest.csF(tinP)-0xd)+T(" ")+TF3(winPulp.flagsMode,flFORMAT_UNSIGNED,LW)+T(" | ") \
                                                                                                                                                                \
        ;                                                                                                                                                       \
                                                                                                                                                                \
        LOGrAW( tSay ) ;                                                                                                                                        \
    }

/*1*/voidT windowOldC::renderF( tinS& tinP , pulpOldC& pulpP , const strokeS* const psttP , const handleC* const phCloneP )/*1*/
{

    winPulpOldC& winPulp = *(winPulpOldC*)&pulpP ;
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;

    static boolT bDebugOn ;
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    for( countT idAdam = 1 ; idAdam <= psttP->idAdam ; idAdam ++ )
    {
        strokeS& sttP = psttP[ CSpREFIX - 1 + idAdam ] ;

        static boolT bTraceTitleWritten ;

        //cTraceOn = 1 ;
        //cTraceOn = sttP.idCaste == sc_cALPHABET1 && sttP.idAdam >= 'a' && sttP.idAdam <= 'z' ;
        //if( !cTraceOn && sttP.idCaste == scOld_cPUSHpAPERoVERRIDE ) cTraceOn = 1 ;
        //if( !cTraceOn ) cTraceOn = backIdTypeF() == ifcIDtYPEpAPERbACK_eyeOldC ;

        ZE( boolT , bRetainTrace ) ;
        if( !cTraceOn && sttP.idCaste == scOld_DEBUG ) bRetainTrace = cTraceOn = 1 ;

        //if( cTraceOn > 1 ) { LOGrAW( "\r\n" ) ; } //IF I AM CALLED RECURSIVELY

        TRACEtITLEiF

        TRACEiF

        boolT bDo = winPulp.stqr_if[ 1 ] ;
        if( !bDo ) switch( sttP.idCaste )
        {
            case scOld_ccIFnOTEnOTEeQUALS            :
            case scOld_ccIFnOTEnOTElESStHAN          :
            case scOld_ccIFnOTEnOTEnOTlESStHAN       :
            case scOld_mcIFlITERALnOTEeQUALS         :
            case scOld_mcIFlITERALnOTElESStHAN       :
            case scOld_mcIFlITERALnOTEnOTlESStHAN    :
            case scOld_cmIFnOTElITERALeQUALS         :
            case scOld_cmIFnOTElITERALlESStHAN       :
            case scOld_cmIFnOTElITERALnOTlESStHAN    :
            case scOld_mmIFlITERALlITERALeQUALS      :
            case scOld_mmIFlITERALlITERALlESStHAN    :
            case scOld_mmIFlITERALlITERALnOTlESStHAN : { winPulp.cNestIfSkipped ++ ; break ; }
        }

        if( bDo )
        {
            if( winPulp.cNestIfSkipped ) winPulp.cNestIfSkipped = 0 ;


            switch( sttP.idCaste )
            {
                PUSH( scOld_cPUSHrIPPLES                     , winPulp.stqr_cRipples               )
                PUSH( scOld_cPUSHsTYLE                       , winPulp.stqr_flStyle                )
                PUSH( scOld_cPUSHsIDES                       , winPulp.stqr_cPolygonSides          )
                PUSH( scOld_cPUSHoFFfRAME                    , winPulp.stqr_offFrame               )
                PUSH( scOld_cPUSHoFFfRAMEwRAP                , winPulp.stqr_offFrameWrap           )
                PUSH( scOld_cCOLmARGINsADAMfRAMEpUSH         , winPulp.stqr_cColsMarginSadamFrame  )
                PUSH( scOld_cROWmARGINsADAMfRAMEpUSH         , winPulp.stqr_cRowsMarginSadamFrame  )
                PUSH( scOld_cRENDERfLAGScONTROLpUSH          , winPulp.stqr_fRenderControl         )
                PUSH( scOld_cRENDERfLAGScYCLEDpUSH           , winPulp.stqr_fRenderCycled          )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL1pUSH   , winPulp.stqr_fRenderCyclingDetail1  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL2pUSH   , winPulp.stqr_fRenderCyclingDetail2  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL3pUSH   , winPulp.stqr_fRenderCyclingDetail3  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL4pUSH   , winPulp.stqr_fRenderCyclingDetail4  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL5pUSH   , winPulp.stqr_fRenderCyclingDetail5  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL6pUSH   , winPulp.stqr_fRenderCyclingDetail6  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL7pUSH   , winPulp.stqr_fRenderCyclingDetail7  )
                PUSH( scOld_cRENDERfLAGScYCLINGdETAIL8pUSH   , winPulp.stqr_fRenderCyclingDetail8  )
                PUSH( scOld_cRENDERhANDLERfINALtRANSFORMpUSH , winPulp.stqr_pHandlerFinalTransform )
        
                PUSH( scOld_cRENDERfLOATrIGHTpUSH                , winPulp.stqr_m01FloatRight          )
                PUSH( scOld_cRENDERfLOATrIGHTcApUSH              , winPulp.stqr_m01FloatRight_A        )
                PUSH( scOld_cRENDERfLOATrIGHTcBpUSH              , winPulp.stqr_m01FloatRight_B        )
                PUSH( scOld_cRENDERfLOATrIGHTcCpUSH              , winPulp.stqr_m01FloatRight_C        )
                PUSH( scOld_cRENDERfLOATrIGHTcDpUSH              , winPulp.stqr_m01FloatRight_D        )
                PUSH( scOld_cRENDERfLOATuPpUSH                   , winPulp.stqr_m01FloatUp             )
                PUSH( scOld_cRENDERfLOATuPcApUSH                 , winPulp.stqr_m01FloatUp_A           )
                PUSH( scOld_cRENDERfLOATuPcBpUSH                 , winPulp.stqr_m01FloatUp_B           )
                PUSH( scOld_cRENDERfLOATuPcCpUSH                 , winPulp.stqr_m01FloatUp_C           )
                PUSH( scOld_cRENDERfLOATuPcDpUSH                 , winPulp.stqr_m01FloatUp_D           )
        
                PUSH( scOld_cRENDER01COLhOTpOINTpUSH             , winPulp.stqr_m01ColHotPoint          )
                PUSH( scOld_cRENDER01COLhOTpOINTcApUSH           , winPulp.stqr_m01ColHotPoint_A        )
                PUSH( scOld_cRENDER01COLhOTpOINTcBpUSH           , winPulp.stqr_m01ColHotPoint_B        )
                PUSH( scOld_cRENDER01COLhOTpOINTcCpUSH           , winPulp.stqr_m01ColHotPoint_C        )
                PUSH( scOld_cRENDER01COLhOTpOINTcDpUSH           , winPulp.stqr_m01ColHotPoint_D        )
                PUSH( scOld_cRENDER01ROWhOTpOINTpUSH             , winPulp.stqr_m01RowHotPoint          )
                PUSH( scOld_cRENDER01ROWhOTpOINTcApUSH           , winPulp.stqr_m01RowHotPoint_A        )
                PUSH( scOld_cRENDER01ROWhOTpOINTcBpUSH           , winPulp.stqr_m01RowHotPoint_B        )
                PUSH( scOld_cRENDER01ROWhOTpOINTcCpUSH           , winPulp.stqr_m01RowHotPoint_C        )
                PUSH( scOld_cRENDER01ROWhOTpOINTcDpUSH           , winPulp.stqr_m01RowHotPoint_D        )
                PUSH( scOld_mRENDERcOShOTaNGLEpUSH               , winPulp.stqr_mCosHotAngle            )
                PUSH( scOld_mRENDERsINhOTaNGLEpUSH               , winPulp.stqr_mSinHotAngle            )
                PUSH( scOld_mRENDERhOTaNGLEcApUSH                , winPulp.stqr_mHotAngle_A             )
                PUSH( scOld_mRENDERhOTaNGLEcBpUSH                , winPulp.stqr_mHotAngle_B             )
                PUSH( scOld_mRENDERhOTaNGLEcCpUSH                , winPulp.stqr_mHotAngle_C             )
                PUSH( scOld_mRENDERhOTaNGLEcDpUSH                , winPulp.stqr_mHotAngle_D             )
                PUSH( scOld_cRENDER01COLmIRRORpOINTpUSH          , winPulp.stqr_m01ColMirrorPoint      )
                PUSH( scOld_cRENDER01COLmIRRORpOINTcApUSH        , winPulp.stqr_m01ColMirrorPoint_A    )
                PUSH( scOld_cRENDER01COLmIRRORpOINTcBpUSH        , winPulp.stqr_m01ColMirrorPoint_B    )
                PUSH( scOld_cRENDER01COLmIRRORpOINTcCpUSH        , winPulp.stqr_m01ColMirrorPoint_C    )
                PUSH( scOld_cRENDER01COLmIRRORpOINTcDpUSH        , winPulp.stqr_m01ColMirrorPoint_D    )
                PUSH( scOld_cRENDER01ROWmIRRORpOINTpUSH          , winPulp.stqr_m01RowMirrorPoint      )
                PUSH( scOld_cRENDER01ROWmIRRORpOINTcApUSH        , winPulp.stqr_m01RowMirrorPoint_A    )
                PUSH( scOld_cRENDER01ROWmIRRORpOINTcBpUSH        , winPulp.stqr_m01RowMirrorPoint_B    )
                PUSH( scOld_cRENDER01ROWmIRRORpOINTcCpUSH        , winPulp.stqr_m01RowMirrorPoint_C    )
                PUSH( scOld_cRENDER01ROWmIRRORpOINTcDpUSH        , winPulp.stqr_m01RowMirrorPoint_D    )
                PUSH( scOld_mRENDERcOSmIRRORaNGLEpUSH            , winPulp.stqr_mCosMirrorAngle        )
                PUSH( scOld_mRENDERsINmIRRORaNGLEpUSH            , winPulp.stqr_mSinMirrorAngle        )
                PUSH( scOld_mRENDERmIRRORaNGLEcApUSH             , winPulp.stqr_mMirrorAngle_A         )
                PUSH( scOld_mRENDERmIRRORaNGLEcBpUSH             , winPulp.stqr_mMirrorAngle_B         )
                PUSH( scOld_mRENDERmIRRORaNGLEcCpUSH             , winPulp.stqr_mMirrorAngle_C         )
                PUSH( scOld_mRENDERmIRRORaNGLEcDpUSH             , winPulp.stqr_mMirrorAngle_D         )
                PUSH( scOld_mRENDERcOLsCALEpUSH                  , winPulp.stqr_mColScale              )
                PUSH( scOld_mRENDERcOLsCALEcApUSH                , winPulp.stqr_mColScale_A            )
                PUSH( scOld_mRENDERcOLsCALEcBpUSH                , winPulp.stqr_mColScale_B            )
                PUSH( scOld_mRENDERcOLsCALEcCpUSH                , winPulp.stqr_mColScale_C            )
                PUSH( scOld_mRENDERcOLsCALEcDpUSH                , winPulp.stqr_mColScale_D            )
                PUSH( scOld_mRENDERrOWsCALEpUSH                  , winPulp.stqr_mRowScale              )
                PUSH( scOld_mRENDERrOWsCALEcApUSH                , winPulp.stqr_mRowScale_A            )
                PUSH( scOld_mRENDERrOWsCALEcBpUSH                , winPulp.stqr_mRowScale_B            )
                PUSH( scOld_mRENDERrOWsCALEcCpUSH                , winPulp.stqr_mRowScale_C            )
                PUSH( scOld_mRENDERrOWsCALEcDpUSH                , winPulp.stqr_mRowScale_D            )
                PUSH( scOld_mRENDERcOLsHEAR1pUSH                 , winPulp.stqr_mColShear1             )
                PUSH( scOld_mRENDERcOLsHEAR1cApUSH               , winPulp.stqr_mColShear1_A           )
                PUSH( scOld_mRENDERcOLsHEAR1cBpUSH               , winPulp.stqr_mColShear1_B           )
                PUSH( scOld_mRENDERcOLsHEAR1cCpUSH               , winPulp.stqr_mColShear1_C           )
                PUSH( scOld_mRENDERcOLsHEAR1cDpUSH               , winPulp.stqr_mColShear1_D           )
                PUSH( scOld_mRENDERcOLsHEAR2pUSH                 , winPulp.stqr_mColShear2             )
                PUSH( scOld_mRENDERcOLsHEAR2cApUSH               , winPulp.stqr_mColShear2_A           )
                PUSH( scOld_mRENDERcOLsHEAR2cBpUSH               , winPulp.stqr_mColShear2_B           )
                PUSH( scOld_mRENDERcOLsHEAR2cCpUSH               , winPulp.stqr_mColShear2_C           )
                PUSH( scOld_mRENDERcOLsHEAR2cDpUSH               , winPulp.stqr_mColShear2_D           )
                PUSH( scOld_mRENDERcOLsHEAR3pUSH                 , winPulp.stqr_mColShear3             )
                PUSH( scOld_mRENDERcOLsHEAR3cApUSH               , winPulp.stqr_mColShear3_A           )
                PUSH( scOld_mRENDERcOLsHEAR3cBpUSH               , winPulp.stqr_mColShear3_B           )
                PUSH( scOld_mRENDERcOLsHEAR3cCpUSH               , winPulp.stqr_mColShear3_C           )
                PUSH( scOld_mRENDERcOLsHEAR3cDpUSH               , winPulp.stqr_mColShear3_D           )
                PUSH( scOld_mRENDERrOWsHEAR1pUSH                 , winPulp.stqr_mRowShear1             )
                PUSH( scOld_mRENDERrOWsHEAR1cApUSH               , winPulp.stqr_mRowShear1_A           )
                PUSH( scOld_mRENDERrOWsHEAR1cBpUSH               , winPulp.stqr_mRowShear1_B           )
                PUSH( scOld_mRENDERrOWsHEAR1cCpUSH               , winPulp.stqr_mRowShear1_C           )
                PUSH( scOld_mRENDERrOWsHEAR1cDpUSH               , winPulp.stqr_mRowShear1_D           )
                PUSH( scOld_mRENDERrOWsHEAR2pUSH                 , winPulp.stqr_mRowShear2             )
                PUSH( scOld_mRENDERrOWsHEAR2cApUSH               , winPulp.stqr_mRowShear2_A           )
                PUSH( scOld_mRENDERrOWsHEAR2cBpUSH               , winPulp.stqr_mRowShear2_B           )
                PUSH( scOld_mRENDERrOWsHEAR2cCpUSH               , winPulp.stqr_mRowShear2_C           )
                PUSH( scOld_mRENDERrOWsHEAR2cDpUSH               , winPulp.stqr_mRowShear2_D           )
                PUSH( scOld_mRENDERrOWsHEAR3pUSH                 , winPulp.stqr_mRowShear3             )
                PUSH( scOld_mRENDERrOWsHEAR3cApUSH               , winPulp.stqr_mRowShear3_A           )
                PUSH( scOld_mRENDERrOWsHEAR3cBpUSH               , winPulp.stqr_mRowShear3_B           )
                PUSH( scOld_mRENDERrOWsHEAR3cCpUSH               , winPulp.stqr_mRowShear3_C           )
                PUSH( scOld_mRENDERrOWsHEAR3cDpUSH               , winPulp.stqr_mRowShear3_D           )
                PUSH( scOld_mRENDERcOSvECTORpUSH                 , winPulp.stqr_mCosVector             )
                PUSH( scOld_mRENDERsINvECTORpUSH                 , winPulp.stqr_mSinVector             )
                PUSH( scOld_mRENDERvECTORcApUSH                  , winPulp.stqr_mVector_A              )
                PUSH( scOld_mRENDERvECTORcBpUSH                  , winPulp.stqr_mVector_B              )
                PUSH( scOld_mRENDERvECTORcCpUSH                  , winPulp.stqr_mVector_C              )
                PUSH( scOld_mRENDERvECTORcDpUSH                  , winPulp.stqr_mVector_D              )
                PUSH( scOld_mRENDERpADrIGHTpUSH                  , winPulp.stqr_m01PadRight            )
                PUSH( scOld_mRENDERpADrIGHTcApUSH                , winPulp.stqr_m01PadRight_A          )
                PUSH( scOld_mRENDERpADrIGHTcBpUSH                , winPulp.stqr_m01PadRight_B          )
                PUSH( scOld_mRENDERpADrIGHTcCpUSH                , winPulp.stqr_m01PadRight_C          )
                PUSH( scOld_mRENDERpADrIGHTcDpUSH                , winPulp.stqr_m01PadRight_D          )
                PUSH( scOld_mRENDERpADuPpUSH                     , winPulp.stqr_m01PadUp               )
                PUSH( scOld_mRENDERpADuPcApUSH                   , winPulp.stqr_m01PadUp_A             )
                PUSH( scOld_mRENDERpADuPcBpUSH                   , winPulp.stqr_m01PadUp_B             )
                PUSH( scOld_mRENDERpADuPcCpUSH                   , winPulp.stqr_m01PadUp_C             )
                PUSH( scOld_mRENDERpADuPcDpUSH                   , winPulp.stqr_m01PadUp_D             )
        
                DUP( scOld_cRENDERfLAGScONTROLdUP           , winPulp.stqr_fRenderControl         )
                DUP( scOld_cRENDERfLAGScYCLEDdUP            , winPulp.stqr_fRenderCycled          )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL1dUP    , winPulp.stqr_fRenderCyclingDetail1  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL2dUP    , winPulp.stqr_fRenderCyclingDetail2  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL3dUP    , winPulp.stqr_fRenderCyclingDetail3  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL4dUP    , winPulp.stqr_fRenderCyclingDetail4  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL5dUP    , winPulp.stqr_fRenderCyclingDetail5  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL6dUP    , winPulp.stqr_fRenderCyclingDetail6  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL7dUP    , winPulp.stqr_fRenderCyclingDetail7  )
                DUP( scOld_cRENDERfLAGScYCLINGdETAIL8dUP    , winPulp.stqr_fRenderCyclingDetail8  )
                DUP( scOld_cRENDERhANDLERfINALtRANSFORMdUP  , winPulp.stqr_pHandlerFinalTransform )
                DUP( scOld_cRENDERfLOATrIGHTdUP             , winPulp.stqr_m01FloatRight          )
                DUP( scOld_cRENDERfLOATrIGHTcAdUP           , winPulp.stqr_m01FloatRight_A        )
                DUP( scOld_cRENDERfLOATrIGHTcBdUP           , winPulp.stqr_m01FloatRight_B        )
                DUP( scOld_cRENDERfLOATrIGHTcCdUP           , winPulp.stqr_m01FloatRight_C        )
                DUP( scOld_cRENDERfLOATrIGHTcDdUP           , winPulp.stqr_m01FloatRight_D        )
                DUP( scOld_cRENDERfLOATuPdUP                , winPulp.stqr_m01FloatUp             )
                DUP( scOld_cRENDERfLOATuPcAdUP              , winPulp.stqr_m01FloatUp_A           )
                DUP( scOld_cRENDERfLOATuPcBdUP              , winPulp.stqr_m01FloatUp_B           )
                DUP( scOld_cRENDERfLOATuPcCdUP              , winPulp.stqr_m01FloatUp_C           )
                DUP( scOld_cRENDERfLOATuPcDdUP              , winPulp.stqr_m01FloatUp_D           )
                DUP( scOld_cRENDER01COLhOTpOINTdUP          , winPulp.stqr_m01ColHotPoint          )
                DUP( scOld_cRENDER01COLhOTpOINTcAdUP        , winPulp.stqr_m01ColHotPoint_A        )
                DUP( scOld_cRENDER01COLhOTpOINTcBdUP        , winPulp.stqr_m01ColHotPoint_B        )
                DUP( scOld_cRENDER01COLhOTpOINTcCdUP        , winPulp.stqr_m01ColHotPoint_C        )
                DUP( scOld_cRENDER01COLhOTpOINTcDdUP        , winPulp.stqr_m01ColHotPoint_D        )
                DUP( scOld_cRENDER01ROWhOTpOINTdUP          , winPulp.stqr_m01RowHotPoint          )
                DUP( scOld_cRENDER01ROWhOTpOINTcAdUP        , winPulp.stqr_m01RowHotPoint_A        )
                DUP( scOld_cRENDER01ROWhOTpOINTcBdUP        , winPulp.stqr_m01RowHotPoint_B        )
                DUP( scOld_cRENDER01ROWhOTpOINTcCdUP        , winPulp.stqr_m01RowHotPoint_C        )
                DUP( scOld_cRENDER01ROWhOTpOINTcDdUP        , winPulp.stqr_m01RowHotPoint_D        )
                DUP( scOld_mRENDERcOShOTaNGLEdUP            , winPulp.stqr_mCosHotAngle            )
                DUP( scOld_mRENDERsINhOTaNGLEdUP            , winPulp.stqr_mSinHotAngle            )
                DUP( scOld_mRENDERhOTaNGLEcAdUP             , winPulp.stqr_mHotAngle_A             )
                DUP( scOld_mRENDERhOTaNGLEcBdUP             , winPulp.stqr_mHotAngle_B             )
                DUP( scOld_mRENDERhOTaNGLEcCdUP             , winPulp.stqr_mHotAngle_C             )
                DUP( scOld_mRENDERhOTaNGLEcDdUP             , winPulp.stqr_mHotAngle_D             )
                DUP( scOld_cRENDER01COLmIRRORpOINTdUP       , winPulp.stqr_m01ColMirrorPoint      )
                DUP( scOld_cRENDER01COLmIRRORpOINTcAdUP     , winPulp.stqr_m01ColMirrorPoint_A    )
                DUP( scOld_cRENDER01COLmIRRORpOINTcBdUP     , winPulp.stqr_m01ColMirrorPoint_B    )
                DUP( scOld_cRENDER01COLmIRRORpOINTcCdUP     , winPulp.stqr_m01ColMirrorPoint_C    )
                DUP( scOld_cRENDER01COLmIRRORpOINTcDdUP     , winPulp.stqr_m01ColMirrorPoint_D    )
                DUP( scOld_cRENDER01ROWmIRRORpOINTdUP       , winPulp.stqr_m01RowMirrorPoint      )
                DUP( scOld_cRENDER01ROWmIRRORpOINTcAdUP     , winPulp.stqr_m01RowMirrorPoint_A    )
                DUP( scOld_cRENDER01ROWmIRRORpOINTcBdUP     , winPulp.stqr_m01RowMirrorPoint_B    )
                DUP( scOld_cRENDER01ROWmIRRORpOINTcCdUP     , winPulp.stqr_m01RowMirrorPoint_C    )
                DUP( scOld_cRENDER01ROWmIRRORpOINTcDdUP     , winPulp.stqr_m01RowMirrorPoint_D    )
                DUP( scOld_mRENDERcOSmIRRORaNGLEdUP        , winPulp.stqr_mCosMirrorAngle        )
                DUP( scOld_mRENDERsINmIRRORaNGLEdUP        , winPulp.stqr_mSinMirrorAngle        )
                DUP( scOld_mRENDERmIRRORaNGLEcAdUP         , winPulp.stqr_mMirrorAngle_A         )
                DUP( scOld_mRENDERmIRRORaNGLEcBdUP         , winPulp.stqr_mMirrorAngle_B         )
                DUP( scOld_mRENDERmIRRORaNGLEcCdUP         , winPulp.stqr_mMirrorAngle_C         )
                DUP( scOld_mRENDERmIRRORaNGLEcDdUP         , winPulp.stqr_mMirrorAngle_D         )
                DUP( scOld_mRENDERcOLsCALEdUP              , winPulp.stqr_mColScale              )
                DUP( scOld_mRENDERcOLsCALEcAdUP            , winPulp.stqr_mColScale_A            )
                DUP( scOld_mRENDERcOLsCALEcBdUP            , winPulp.stqr_mColScale_B            )
                DUP( scOld_mRENDERcOLsCALEcCdUP            , winPulp.stqr_mColScale_C            )
                DUP( scOld_mRENDERcOLsCALEcDdUP            , winPulp.stqr_mColScale_D            )
                DUP( scOld_mRENDERrOWsCALEdUP              , winPulp.stqr_mRowScale              )
                DUP( scOld_mRENDERrOWsCALEcAdUP            , winPulp.stqr_mRowScale_A            )
                DUP( scOld_mRENDERrOWsCALEcBdUP            , winPulp.stqr_mRowScale_B            )
                DUP( scOld_mRENDERrOWsCALEcCdUP            , winPulp.stqr_mRowScale_C            )
                DUP( scOld_mRENDERrOWsCALEcDdUP            , winPulp.stqr_mRowScale_D            )
                DUP( scOld_mRENDERcOLsHEAR1dUP             , winPulp.stqr_mColShear1             )
                DUP( scOld_mRENDERcOLsHEAR1cAdUP           , winPulp.stqr_mColShear1_A           )
                DUP( scOld_mRENDERcOLsHEAR1cBdUP           , winPulp.stqr_mColShear1_B           )
                DUP( scOld_mRENDERcOLsHEAR1cCdUP           , winPulp.stqr_mColShear1_C           )
                DUP( scOld_mRENDERcOLsHEAR1cDdUP           , winPulp.stqr_mColShear1_D           )
                DUP( scOld_mRENDERcOLsHEAR2dUP             , winPulp.stqr_mColShear2             )
                DUP( scOld_mRENDERcOLsHEAR2cAdUP           , winPulp.stqr_mColShear2_A           )
                DUP( scOld_mRENDERcOLsHEAR2cBdUP           , winPulp.stqr_mColShear2_B           )
                DUP( scOld_mRENDERcOLsHEAR2cCdUP           , winPulp.stqr_mColShear2_C           )
                DUP( scOld_mRENDERcOLsHEAR2cDdUP           , winPulp.stqr_mColShear2_D           )
                DUP( scOld_mRENDERcOLsHEAR3dUP             , winPulp.stqr_mColShear3             )
                DUP( scOld_mRENDERcOLsHEAR3cAdUP           , winPulp.stqr_mColShear3_A           )
                DUP( scOld_mRENDERcOLsHEAR3cBdUP           , winPulp.stqr_mColShear3_B           )
                DUP( scOld_mRENDERcOLsHEAR3cCdUP           , winPulp.stqr_mColShear3_C           )
                DUP( scOld_mRENDERcOLsHEAR3cDdUP           , winPulp.stqr_mColShear3_D           )
                DUP( scOld_mRENDERrOWsHEAR1dUP             , winPulp.stqr_mRowShear1             )
                DUP( scOld_mRENDERrOWsHEAR1cAdUP           , winPulp.stqr_mRowShear1_A           )
                DUP( scOld_mRENDERrOWsHEAR1cBdUP           , winPulp.stqr_mRowShear1_B           )
                DUP( scOld_mRENDERrOWsHEAR1cCdUP           , winPulp.stqr_mRowShear1_C           )
                DUP( scOld_mRENDERrOWsHEAR1cDdUP           , winPulp.stqr_mRowShear1_D           )
                DUP( scOld_mRENDERrOWsHEAR2dUP             , winPulp.stqr_mRowShear2             )
                DUP( scOld_mRENDERrOWsHEAR2cAdUP           , winPulp.stqr_mRowShear2_A           )
                DUP( scOld_mRENDERrOWsHEAR2cBdUP           , winPulp.stqr_mRowShear2_B           )
                DUP( scOld_mRENDERrOWsHEAR2cCdUP           , winPulp.stqr_mRowShear2_C           )
                DUP( scOld_mRENDERrOWsHEAR2cDdUP           , winPulp.stqr_mRowShear2_D           )
                DUP( scOld_mRENDERrOWsHEAR3dUP             , winPulp.stqr_mRowShear3             )
                DUP( scOld_mRENDERrOWsHEAR3cAdUP           , winPulp.stqr_mRowShear3_A           )
                DUP( scOld_mRENDERrOWsHEAR3cBdUP           , winPulp.stqr_mRowShear3_B           )
                DUP( scOld_mRENDERrOWsHEAR3cCdUP           , winPulp.stqr_mRowShear3_C           )
                DUP( scOld_mRENDERrOWsHEAR3cDdUP           , winPulp.stqr_mRowShear3_D           )
                DUP( scOld_mRENDERcOSvECTORdUP             , winPulp.stqr_mCosVector             )
                DUP( scOld_mRENDERsINvECTORdUP             , winPulp.stqr_mSinVector             )
                DUP( scOld_mRENDERvECTORcAdUP              , winPulp.stqr_mVector_A              )
                DUP( scOld_mRENDERvECTORcBdUP              , winPulp.stqr_mVector_B              )
                DUP( scOld_mRENDERvECTORcCdUP              , winPulp.stqr_mVector_C              )
                DUP( scOld_mRENDERvECTORcDdUP              , winPulp.stqr_mVector_D              )
                DUP( scOld_mRENDERpADrIGHTdUP              , winPulp.stqr_m01PadRight            )
                DUP( scOld_mRENDERpADrIGHTcAdUP            , winPulp.stqr_m01PadRight_A          )
                DUP( scOld_mRENDERpADrIGHTcBdUP            , winPulp.stqr_m01PadRight_B          )
                DUP( scOld_mRENDERpADrIGHTcCdUP            , winPulp.stqr_m01PadRight_C          )
                DUP( scOld_mRENDERpADrIGHTcDdUP            , winPulp.stqr_m01PadRight_D          )
                DUP( scOld_mRENDERpADuPdUP                 , winPulp.stqr_m01PadUp               )
                DUP( scOld_mRENDERpADuPcAdUP               , winPulp.stqr_m01PadUp_A             )
                DUP( scOld_mRENDERpADuPcBdUP               , winPulp.stqr_m01PadUp_B             )
                DUP( scOld_mRENDERpADuPcCdUP               , winPulp.stqr_m01PadUp_C             )
                DUP( scOld_mRENDERpADuPcDdUP               , winPulp.stqr_m01PadUp_D             )
                DUP( scOld_cDUPhIGHwATER                   , winPulp.stqr_mIdRowHighWater        )
                DUP( scOld_cDUPlOWwATER                    , winPulp.stqr_mIdRowLowWater         )
                DUP( scOld_cDUPrIGHTwATER                  , winPulp.stqr_mIdColHighWater        )
                DUP( scOld_cDUPlEFTwATER                   , winPulp.stqr_mIdColLowWater         )
                case scOld_cPUSHiDoBJECT :
                {
                    pushF( tinP , winPulp.stqr_idObject , sttP , scOld_cPUSHiDoBJECT , winPulp ) ;
                    break ;
                }
                case scOld_mmPADfORsADAMfRAMES :
                {
                    strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                    strokingFrameS& sf  = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ; //BECAUSE INHERITED
                    sf.cStrokingFramesPadRight = sfd.cStrokingFramesPadRight = *(measureT*)&sttP.idAdam ;
                    sf.cStrokingFramesPadUp    = sfd.cStrokingFramesPadUp    = *(measureT*)&sttP.cNote ;
                    winPulp.cacheF( tinP , scOld_mmPADfORsADAMfRAMES ) ;
                    break ;
                }
                case scOld_ccFRAMEfORsADAMfRAMES :
                {
                    strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                    measureT mColNeeded = ( 1.0 + winPulp.rCache.mColsMarginSadamFrame ) * sttP.idAdam ;
                    measureT mRowNeeded = ( 1.0 + winPulp.rCache.mRowsMarginSadamFrame ) * sttP.cNote ;
        
                    strokingFrameS sfn( sf.flags , sf.cStrokingFramesPadRight , sf.cStrokingFramesPadUp , winPulp.mIdColNow + mColNeeded , winPulp.mIdRowNow + mRowNeeded , sf.mCols - 2 * mColNeeded , sf.mRows - 2 * mRowNeeded ) ;
                    winPulp.stqr_strokingFrame << (byteT*)&sfn ;
                    winPulp.cacheF( tinP , scOld_ccFRAMEfORsADAMfRAMES ) ;
                    winPulp.positionPaperBackF( tinP ) ;
                    break ;
                }
                case scOld_mmRENDERsCALErATIOpUSH :
                {
                    measureT mColScale = mColsF() * *(measureT*)&sttP.idAdam ;
                    measureT mRowScale = mRowsF() * *(measureT*)&sttP.idAdam ;
                    if( cTraceOn ) { TN( tSay , "" ) ; tSay = TF1(mColScale)+T(",")+TF1(mRowScale) ; LOGrAW( tSay ) ; }
        
                    winPulp.stqr_mColScale << mColScale ;
                    winPulp.stqr_mRowScale << mRowScale ;
                    winPulp.cacheF( tinP , 0 ) ; //WHEN winPulp.cacheF OBEYS ITS PARAMETER, CALL IT OO TIMES, WO'CE FOR EACH STACK
        
                    break ;
                }
                case scOld_cPUSHcOLOR :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    countT rgb = sttw.idAdam ;
                    count3S c3c( 0 , 0 , rgb ) ;
                    if( cTraceOn ) { LOGrAW3( "rgb:" , rgb , "" ) ; }
        
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        //BOS( WHATgbo , BOSoK , CreatePen( PS_SOLID , 1 , rgb ) )
                        //BOSpOOP
                        //HPEN oshPen = (HPEN)tinP.brcRaw ;
                        BOS( WHATgbo , BOSoK , CreatePen( PS_SOLID , 1 , PALETTERGB( rgb & 0xff , rgb >> 8 & 0xff , rgb >> 0x10 & 0xff ) ) )
                        BOSpOOP
                        HPEN oshPen = (HPEN)tinP.brcRaw ;
                    
                        if( c3c.c1 || c3c.c2 ) { BLAMMO ; } //U::O: COMMENT OUT IN PRODUCTION
                        BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)winPulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , oshPen ) )
                        c3c.c1 = tinP.brcRaw ;
                        c3c.c2 = (countT)oshPen ;
                    }
        
                    winPulp.stqr_color << (byteT*)&c3c ;
        
                    break ;
                }
                case scOld_cPUSHiDtYPEpAINT :
                {
                    pushF( tinP , winPulp.stqr_idTypePaint , sttP , scOld_cPUSHiDtYPEpAINT , winPulp ) ;
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) ) ((thirdC&)ether).winSetPaintTypeF( tinP , *winPulp.pHndDrawBitmap  , winPulp.rCache.idTypePaint ) ;
                    break ;
                }
                case scOld_cPUSHpAPERoVERRIDE :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    pushPaperDrawOverrideF( tinP , pulpP , sttw.idAdam , F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ) ;

                    break ;
                }
                case scOld_cIDvARIABLE :
                {
                    countT idv = sttP.idAdam ;
                    if( idv && winPulp.ppVarsHandlerF && *winPulp.ppVarsHandlerF ) (**winPulp.ppVarsHandlerF)( tinP , ether , winPulp.stqr_paperVars , 0 , idv , ifcIDrEASONeVALUATINGfACEvARS_RENDER , ( winPulp.pVarsHandlerFIArg ? *winPulp.pVarsHandlerFIArg : 0 ) ) ;
                    countT cVars = winPulp.stqr_paperVars ;
                    if( idv && idv <= cVars )
                    {
                        strokeS* psttv = (strokeS*)winPulp.stqr_paperVars[ cVars + 1 - idv ] ;
                        if( psttv ) wrapRenderF( tinP , psttv , phCloneP ) ;
                    }
        
                    break ;
                }
                case sc_cFROMcONTROL :
                {
                    switch( sttP.idAdam )
                    {
                        case '\r' :
                        {
                            strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                            winPulp.mIdColNow = sfd.mIdCol ;
                            if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;

                            if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                            {
                                const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                                const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                                thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                            }
                            winPulp.positionStrokingFrameIfF( tinP ) ;
        
                            break ;
                        }
                        case '\n' :
                        {
                            strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                            //if( bLog3302e ) { TN( tSay , "" ) ; tSay = T("lf: winPulp.mIdRowNow: ")+TF1(winPulp.mIdRowNow)+T(" -> ")+TF1((measureT)(-MAXmEASUREt==sfd.mIdRowHighWater?sfd.mIdRow:sfd.mIdRowHighWater+1.0+winPulp.rCache.mPadUp))+T("\r\n") ; LOGrAW( tSay ) ; }
                            winPulp.mIdRowNow = - MAXmEASUREt == sfd.mIdRowHighWater
                                ? sfd.mIdRow
                                : sfd.mIdRowHighWater + 1.0 + winPulp.rCache.mPadUp
                            ;
                            if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                            if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                            {
                                const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                                const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                                thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                            }
                            winPulp.positionStrokingFrameIfF( tinP ) ;
        
                            break ;
                        }
                    }
                    break ;
                }
                case sc_cFROMaSCII :
                {
                    measureT mIdColSave = winPulp.mIdColNow ;

                    ZE( countT , cCol ) ;
                    ZE( countT , cRow ) ;
                    {
                        osTextT post2[] = { (osTextT)sttP.idAdam , 0 } ;
                        ((thirdC&)ether).winDrawTextF( tinP , *winPulp.pHndDrawBitmap  , cCol , cRow , mIdColOrigin + winPulp.mIdColNow , mIdRowOrigin + winPulp.mIdRowNow , post2 , 1 , F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ) ;
                    }
                    measureT mIdColHigh = winPulp.mIdColNow + cCol - 1 ;
                    measureT mIdRowHigh = winPulp.mIdRowNow + cRow - 1 ;
                    winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                    winPulp.newWaterF( mIdColHigh , mIdRowHigh ) ;
                    winPulp.mIdColNow += cCol ;

                    winPulp.positionStrokingFrameIfF( tinP ) ;

                    break ;
                }
                case scOld_mmMOVE :
                case scOld_mmMOVEtO :
                case scOld_mmMOVEpEL :
                case scOld_mmMOVEpELtO :
                case scOld_mmMOVEcELLS :
                {
                    if( cTraceOn && sttP.idCaste == scOld_mmMOVEpEL )
                    {
                        countT foo = 2 ;
                    }

                    static countT idInLath ;
                    countT idIn = 1 + incv02AM( idInLath ) ;
                    if( idIn == 2 )
                    {
                        countT foo = 2 ;
                    }

                    const measureT mIdColSave = winPulp.mIdColNow ;
                    const measureT mIdRowSave = winPulp.mIdRowNow ;


                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    //LOGrAWtID6( "scOld_mmMOVE (bDebugOn,idCol,idRow): " , bDebugOn , " " , R( winPulp.mIdColNow ) , " " , R( winPulp.mIdRowNow ) ) ;

                    winPulp.mColRowF( winPulp.mIdColNow , winPulp.mIdRowNow , sttP.idCaste , scOld_mmMOVE , sttw ) ;

                    if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                        const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                        thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                    }
                    winPulp.positionStrokingFrameIfF( tinP ) ;

                    if( F(winPulp.flagsRender) & flPAPERrENDER_NOTES )
                    {
                        /*.5.*/ winPulp.stqr_notes << mIdRowSave ;
                        /*.4.*/ winPulp.stqr_notes << mIdColSave ;
                        /*.3.*/ winPulp.stqr_notes << winPulp.mIdRowNow ;
                        /*.2.*/ winPulp.stqr_notes << winPulp.mIdColNow ;
                        /*.1.*/ winPulp.stqr_notes << (measureT)4 ; //NUMBER OF PLATES PUSHED

                        //if( cTraceOn ) { TN( tSay , "" ) ; tSay = T("there are ")+TF1(winPulp.stqr_notes)+T(" notes after i pushed 5") ; LOGrAW( tSay ) ; }
                    }

                    break ;
                }
                case scOld_mmLINE :
                case scOld_mmLINEtO :
                case scOld_mmLINEpEL :
                case scOld_mmLINEpELtO :
                case scOld_mmLINEcELLS :
                {
                    if( bDebugOn )
                    {
                        countT foo = 2 ;
                    }

                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    const measureT mIdColFrom = winPulp.mIdColNow ;
                    const measureT mIdRowFrom = winPulp.mIdRowNow ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo  , mIdRowTo , sttP.idCaste , scOld_mmLINE , sttw ) ;
        
                    winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                    winPulp.mIdColNow = mIdColTo ;
                    winPulp.mIdRowNow = mIdRowTo ;
                    //winPulp.idLineType = 1 ;
                    winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;

                    {
                        flagsT flagsl = F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ;
                        if( !( F(flagsl) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
                        {
                            const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                            const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                            thirdC::winLineIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice , winPulp.colorF() , flagsl ) ;
                        }
                    }

                    winPulp.positionStrokingFrameIfF( tinP ) ;
                    break ;
                }
                case scOld_mmLINEeND :
                case scOld_mmLINEeNDtO :
                case scOld_mmLINEeNDpEL :
                case scOld_mmLINEeNDpELtO :
                case scOld_mmLINEeNDcELLS :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    const measureT mIdColFrom = winPulp.mIdColNow ;
                    const measureT mIdRowFrom = winPulp.mIdRowNow ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo , mIdRowTo , sttP.idCaste , scOld_mmLINEeND , sttw ) ;
        
                    winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                    winPulp.mIdColNow = mIdColTo ;
                    winPulp.mIdRowNow = mIdRowTo ;
                    //winPulp.idLineType = 2 ;
                    winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;

                    {
                        flagsT flagsl = F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_INCLUDEeNDpEL | flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_INCLUDEeNDpEL ;
                        if( !( F(flagsl) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
                        {
                            const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                            const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                            thirdC::winLineIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice , winPulp.colorF() , flagsl ) ;
                        }
                    }

                    winPulp.positionStrokingFrameIfF( tinP ) ;
                    break ;
                }
                case scOld_mmELLIPSE :
                case scOld_mmELLIPSEtO :
                case scOld_mmELLIPSEpEL :
                case scOld_mmELLIPSEpELtO :
                case scOld_mmELLIPSEcELLS :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    const measureT mIdColFrom = winPulp.mIdColNow ;
                    const measureT mIdRowFrom = winPulp.mIdRowNow ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo , mIdRowTo , sttP.idCaste , scOld_mmELLIPSE , sttw ) ;

                    winPulp.newWaterF( mIdColFrom , mIdRowFrom ) ;
                    winPulp.newWaterF( mIdColTo , mIdRowTo ) ;

                    flagsT flagsd = F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ;
                    if( !( F(flagsd) & flDRAW_SUPPRESSpELcOLORcHANGES ) ) thirdC::winArcIF( tinP , *winPulp.pHndDrawBitmap , mIdColOrigin + mIdColFrom , mIdRowOrigin + mIdRowFrom , mIdColOrigin + mIdColTo , mIdRowOrigin + mIdRowTo , flagsd ) ;
                    break ;
                }
                case scOld_mmRECTANGLE :
                case scOld_mmRECTANGLEtO :
                case scOld_mmRECTANGLEpEL :
                case scOld_mmRECTANGLEpELtO :
                case scOld_mmRECTANGLEcELLS :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    const measureT mIdColFrom = winPulp.mIdColNow ;
                    const measureT mIdRowFrom = winPulp.mIdRowNow ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo , mIdRowTo , sttP.idCaste , scOld_mmRECTANGLE , sttw ) ;

                    winPulp.newWaterF( mIdColFrom , mIdRowFrom ) ;
                    winPulp.newWaterF( mIdColTo , mIdRowTo ) ;

                    flagsT flagsd = F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ;
                    if( !( F(flagsd) & flDRAW_SUPPRESSpELcOLORcHANGES ) ) thirdC::winRectangleIF( tinP , *winPulp.pHndDrawBitmap , mIdColOrigin + mIdColFrom , mIdRowOrigin + mIdRowFrom , mIdColOrigin + mIdColTo , mIdRowOrigin + mIdRowTo , flagsd ) ;
                    break ;
                }
                case scOld_mmCLIP :
                case scOld_mmCLIPtO :
                case scOld_mmCLIPpEL :
                case scOld_mmCLIPpELtO :
                case scOld_mmCLIPcELLS :
                {
                    //U::SUPPORT COMPLEX CLIP REGIONS (MULTIPLE CLIP STROKES)
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    const measureT mIdColFrom = winPulp.mIdColNow ;
                    const measureT mIdRowFrom = winPulp.mIdRowNow ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo , mIdRowTo , sttP.idCaste , scOld_mmCLIP , sttw ) ;
        
                    count5S c5p( 0 , *(countT*)&mIdColFrom , *(countT*)&mIdRowFrom , *(countT*)&mIdColTo , *(countT*)&mIdRowTo ) ;
                    const boolT bDraw = !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) ;

                    if( bDraw )
                    {
                        const countT cRowsDraw = ((const HANDLEaPPnOTEScOUNTcLASS&)*winPulp.pHndDrawBitmap).c2 ;
                
                        RECT info ;
                        info.left   = R( thirdC::winOsColIF( mIdColOrigin + *(measureT*)&c5p.c2             ) ) ; //mColFrom
                        info.top    = R( thirdC::winOsRowIF( mIdRowOrigin + *(measureT*)&c5p.c3 , cRowsDraw ) ) ; //mRowFrom
                        info.right  = R( thirdC::winOsColIF( mIdColOrigin + *(measureT*)&c5p.c4             ) ) ; //mColTo
                        info.bottom = R( thirdC::winOsRowIF( mIdRowOrigin + *(measureT*)&c5p.c5 , cRowsDraw ) ) ; //mRowTo
                                
                        if( info.left <= info.right ) info.right ++ ;
                        else                          info.left  ++ ;
                                
                        if( info.top <= info.bottom ) info.bottom ++ ;
                        else                          info.top    ++ ;
                    
                        BOS( WHATgbo , BOSoK , CreateRectRgnIndirect( &info ) )
                        BOSpOOP
                        HRGN osh = (HRGN)tinP.brcRaw ;
                        BOSdOnOTtEST( WHATgbo , ExtSelectClipRgn( (HDC)winPulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , osh , RGN_AND ) )
                
                        c5p.c1 = (countT)osh ; //U::MIGRATE TO count5S ELIMINATING c1
                    }

                    if( bDraw ) winPulp.stqr_paperOldClip << (byteT*)&c5p ;
        
                    break ;
                }
                case scOld_mmFRAME :
                case scOld_mmFRAMEtO :
                case scOld_mmFRAMEpEL :
                case scOld_mmFRAMEpELtO :
                case scOld_mmFRAMEcELLS :
                {
                    static countT idInLath ;
                    countT idIn2 = 1 + incv02AM( idInLath ) ;
                    if( idIn2 == 0xe || cTraceOn )
                    {
                        countT foo = 2 ;
                    }

                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;
        
                    strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                    //measureT mIdColTo = sf.mIdCol - 1.0 + sf.mCols ;
                    //measureT mIdRowTo = sf.mIdRow - 1.0 + sf.mRows ;
                    ZE( measureT , mIdColTo ) ;
                    ZE( measureT , mIdRowTo ) ;
                    winPulp.mColRowF( mIdColTo , mIdRowTo , sttP.idCaste , scOld_mmFRAME , sttw ) ;
        
                    //if( bLog3302e )
                    //if( sttP.idCaste == scOld_mmFRAMEcELLS )
                    //{
                    //    strokingFrameS& sf  = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                    //    TN( tSay , "" ) ; tSay = T("\r\nold ")+TF1(winPulp.stqr_strokingFrame)+T(": ")+TF1(sf.mIdCol)+T(" - ")+TF1(sf.mIdCol-(measureT)1.0+sf.mCols)+T("\r\n") ;
                    //    LOGrAW( tSay ) ;
                    //}
        
                    if( winPulp.mIdColNow > mIdColTo )
                    {
                        measureT save = winPulp.mIdColNow ;
                        winPulp.mIdColNow = mIdColTo ;
                        mIdColTo = save ;
                    }
        
                    if( winPulp.mIdRowNow > mIdRowTo )
                    {
                        measureT save = winPulp.mIdRowNow ;
                        winPulp.mIdRowNow = mIdRowTo ;
                        mIdRowTo = save ;
                    }
        
                    strokingFrameS sfn( sf.flags , sf.cStrokingFramesPadRight , sf.cStrokingFramesPadUp , winPulp.mIdColNow , winPulp.mIdRowNow , mIdColTo - winPulp.mIdColNow + 1 , mIdRowTo - winPulp.mIdRowNow + 1 ) ;
                    winPulp.stqr_strokingFrame << (byteT*)&sfn ;
                    winPulp.cacheF( tinP , scOld_mmFRAME ) ;
                    winPulp.positionStrokingFrameIfF( tinP ) ;
        
                    //if( sttP.idCaste == scOld_mmFRAMEcELLS )
                    //{
                    //    strokingFrameS& sf  = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                    //    TN( tSay , "" ) ; tSay = T("new ")+TF1(winPulp.stqr_strokingFrame)+T(": ")+TF1(sf.mIdCol)+T(" - ")+TF1(sf.mIdCol-(measureT)1.0+sf.mCols) ;
                    //    LOGrAW( tSay ) ;
                    //}
                    break ;
                }
                case sc_cADAM :
                {
                    //CALLBACK PROTOCOL
                    // psttc1 AND ids P ARE PROVIDED SO THAT THE CALLbACK FUNCTION CAN IMPLEMENT PARAMETER PASSING
                    // THE RECOMMENDED SCHEME IS TO DO NOTHING EXCEPT WHEN ids P IS 1, SO THAT THE REMAINING STROKES CAN BE USED AS PARAMETERS
                    // THE CALLBACK FUNCTION MUST...
                    //   ... UPDATE wP
                    //CODEsYNC: DUPLICATED CODE 1020187 10301bf

                    sadamsC* pSadams = sadamsC::pSadamsIF( tinP ) ;
                    if( pSadams )
                    {
                        sadamC& sad = (*pSadams)( tinP , sttP.idAdam , phCloneP ) ;
                        featuresS& features = *(featuresS*)&(const featuresS&)sad ;
                        if( features.fc.idAdam != sttP.idAdam ) { BLAMMO ; }
            
                        if( cTraceOn ) { LOGrAW3( "[idAdam]:" , sttP.idAdam , "\r\n" ) ; }
                        if( cTraceOn ) cTraceOn ++ ;
                        const countT idEvent = 1 + incv02AM( tinP.pAdamGlobal1->idEventSadamsLath ) ;
                        backNotifyBeforeSadamF( tinP , pulpP , sttP , F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ) ;
                        sad.doF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_STRIKE , idEvent , count2S( (countT)&winPulp.paper , (countT)&sttP ) , phCloneP ) ;
                        if( cTraceOn ) cTraceOn -- ;
                
                        if( sad.pStrike && !( F(rowBack.ro.flagsPaperBackMode) & flPAPERbACKmODE_ABSENT ) ) sad.doF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_WAKE , idEvent , 0 , phCloneP ) ;
                    }

                    break ;
                }
                case sc_cALPHABET1 :
                {
                    const flagsT _saveMode = winPulp.flagsMode ;
                    flagsT flStyle = winPulp.stqr_flStyle[ 1 ] ;
                    //U::VALIDATE WHEN PUSHED
        
                    ZE( boolT , bMove ) ;
                    if( tinP.pAdamGlobal1->_etherC_.pIfcRenderingHandlerF ) bMove = (*tinP.pAdamGlobal1->_etherC_.pIfcRenderingHandlerF)( tinP , ether , *this  , tinP.pAdamGlobal1->_etherC_.cIfcRenderingHandlerInfo ) ;
                    if( bMove )
                    {
                        if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                        if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                        {
                            const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                            const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                            thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                        }
                        winPulp.positionStrokingFrameIfF( tinP ) ;
                    }
        
                    if( winPulp.rCache.mCol > 0.5 && winPulp.rCache.mRow > 0.5 )
                    {
                        winPulp.mIdColTransformAnchor = winPulp.mIdColNow + winPulp.rCache.mc1 - 1.0 + winPulp.rCache.mColHotPoint ;
                        winPulp.mIdRowTransformAnchor = winPulp.mIdRowNow + winPulp.rCache.mr1 - 1.0 + winPulp.rCache.mRowHotPoint ;
        
                        if( winPulp.rCache.bHotAngle )
                        {
                            winPulp.flagsMode |= flPULPmODE_TRANSFORMaTaNGLE ;
                            winPulp.mCosHotAngle = *(measureT*)&winPulp.stqr_mCosHotAngle[ 1 ] ;
                            winPulp.mSinHotAngle = *(measureT*)&winPulp.stqr_mSinHotAngle[ 1 ] ;
                        }
        
                        //U::ALL OF THE OLD ALPHA CELL VALUES IN CACHE ARE OBSOLETED BY MIGRATION TO pmt[1]-pmt[5]
                        //U::THE FOLLOWING COMMENT IS OBSOLETED BY MIGRATION TO pmt[1]-pmt[5]
                        // IT IS ILLEGAL TO REFER TO mcq mcm mrq mrm ABOVE THIS LINE (NOT ENFORCED FOR MAX SPEED)
                        const boolT _bPeeSave = winPulp.rCache.bPeeWhileMoving ;
                        winPulp.rCache.bPeeWhileMoving = 1 ;
                        measureT mIdColSave = winPulp.mIdColNow ;
                        measureT mIdRowSave = winPulp.mIdRowNow ;
                        ZE( measureT , mIdColWork ) ;
                        ZE( measureT , mIdRowWork ) ;
                        boolT bExpand = 1 ;
                        if( F(flStyle) & flRENDERsTYLE_SCOREuNDER      ) { bExpand = 0 ; M2(pmt[0],pmt[0]) LE2(pmt[6],pmt[0]) }
                        if( F(flStyle) & flRENDERsTYLE_SCOREoVER       ) { bExpand = 0 ; M2(pmt[0],pmt[6]) LE2(pmt[6],pmt[6]) }
                        if( F(flStyle) & flRENDERsTYLE_SCORElEFT       ) { bExpand = 0 ; M2(pmt[0],pmt[0]) LE2(pmt[0],pmt[6]) }
                        if( F(flStyle) & flRENDERsTYLE_SCORErIGHT      ) { bExpand = 0 ; M2(pmt[6],pmt[0]) LE2(pmt[6],pmt[6]) }
                        if( F(flStyle) & flRENDERsTYLE_STRIKEdOWN      ) { bExpand = 0 ; M2(pmt[0],pmt[6]) LE2(pmt[6],pmt[0]) }
                        if( F(flStyle) & flRENDERsTYLE_STRIKEuP        ) { bExpand = 0 ; M2(pmt[0],pmt[0]) LE2(pmt[6],pmt[6]) }
                        if( F(flStyle) & flRENDERsTYLE_STRIKElEFTrIGHT ) { bExpand = 0 ; M2(pmt[0],pmt[3]) LE2(pmt[6],pmt[3]) }
                        if( F(flStyle) & flRENDERsTYLE_STRIKEbOTTOMuP  ) { bExpand = 0 ; M2(pmt[3],pmt[0]) LE2(pmt[3],pmt[6]) }
        
                        if( !bExpand ) pmt = pmts = pmtRef ;
        
                        boolT bUseSavedPosition = 1 ;
                        if( cTraceOn ) { TN( tSay , "" ) ; tSay = T("'")+sttP+T("' \"")+T(processGlobal3I.mapTool(sttP.idToolF(tinP)))+T("\"") ; LOGrAW( tSay ) ; }
                        //else                     { LOGrAW( T("sc_cALPHABET1: '")+sttP+T("' (")+TF1(sttP.idAdam)+T(")\r\n") ) ; }
                        switch( sttP.idAdam & 0xff000000 )
                        {
                            case sscDEFAULT : // US KEYBOARD
                            {
                                switch( sttP.idAdam & 0xffff )
                                {
                                    //abcdefghijklmnopqrstuvwxyz
                                    //ABCDEFGHIJKLMNOPQRSTUVWXYZ
                                    case 'a'  : { M2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) L2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) L2(pmt[1],pmts[3]) L2(pmt[5],pmts[3]) break ; }
                                    case 'b'  : { M2(pmt[1],pmts[5]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) L2(pmt[5],pmts[4]) L2(pmt[1],pmts[4]) break ; }
                                    case 'c'  : { M2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'd'  : { M2(pmt[5],pmts[5]) L2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) break ; }
                                    case 'e'  : { M2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) L2(pmt[5],pmts[3]) L2(pmt[1],pmts[3]) break ; }
                                    case 'f'  : { M2(pmt[3],pmts[2]) L2(pmt[3],pmts[5]) LE2(pmt[4],pmts[5]) M2(pmt[1],pmts[4]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'g'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) L2(pmt[5],pmts[4]) L2(pmt[1],pmts[4]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) break ; }
                                    case 'h'  : { M2(pmt[1],pmts[2]) LE2(pmt[1],pmts[5]) M2(pmt[5],pmts[2]) L2(pmt[5],pmts[4]) L2(pmt[1],pmts[4]) break ; }
                                    case 'i'  : { M2(pmt[5],pmts[2]) L2(pmt[3],pmts[2]) L2(pmt[3],pmts[4]) LE2(pmt[1],pmts[4]) M2(pmt[3],pmts[5]) LE2(pmt[3],pmts[5]) break ; }
                                    case 'j'  : { M2(pmt[1],pmts[2]) L2(pmt[3],pmts[2]) L2(pmt[3],pmts[4]) LE2(pmt[5],pmts[4]) M2(pmt[3],pmts[5]) LE2(pmt[3],pmts[5]) break ; }
                                    case 'k'  : { M2(pmt[1],pmts[2]) LE2(pmt[1],pmts[5]) M2(pmt[5],pmts[2]) LE2(pmt[1],pmts[3]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'l'  : { M2(pmt[5],pmts[2]) L2(pmt[3],pmts[2]) L2(pmt[3],pmts[5]) LE2(pmt[1],pmts[5]) break ; }
                                    case 'm'  : { M2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) LE2(pmt[5],pmts[2]) M2(pmt[3],pmts[2]) L2(pmt[3],pmts[4]) break ; }
                                    case 'n'  : { M2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) LE2(pmt[5],pmts[2]) break ; }
                                    case 'o'  : { M2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) L2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) break ; }
                                    case 'p'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) L2(pmt[5],pmts[2]) L2(pmt[1],pmts[2]) break ; }
                                    case 'q'  : { M2(pmt[5],pmt[1]) L2(pmt[5],pmts[4]) L2(pmt[1],pmts[4]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) break ; }
                                    case 'r'  : { M2(pmt[1],pmts[2]) L2(pmt[1],pmts[4]) LE2(pmt[5],pmts[4]) break ; }
                                    case 's'  : { M2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) L2(pmt[5],pmts[3]) L2(pmt[1],pmts[3]) L2(pmt[1],pmts[4]) LE2(pmt[5],pmts[4]) break ; }
                                    case 't'  : { M2(pmt[3],pmts[5]) L2(pmt[3],pmts[2]) LE2(pmt[4],pmts[2]) M2(pmt[1],pmts[4]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'u'  : { M2(pmt[1],pmts[4]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'v'  : { M2(pmt[1],pmts[4]) L2(pmt[1],pmts[3]) L2(pmt[3],pmts[2]) L2(pmt[5],pmts[3]) LE2(pmt[5],pmts[4]) break ; }
                                    case 'w'  : { M2(pmt[1],pmts[4]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) LE2(pmt[5],pmts[4]) M2(pmt[3],pmts[3]) L2(pmt[3],pmts[2]) break ; }
                                    case 'x'  : { M2(pmt[1],pmts[2]) LE2(pmt[5],pmts[4]) M2(pmt[1],pmts[4]) LE2(pmt[5],pmts[2]) break ; }
                                    case 'y'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmts[4]) M2(pmt[1],pmts[4]) L2(pmt[1],pmts[2]) L2(pmt[5],pmts[2]) break ; }
                                    case 'z'  : { M2(pmt[1],pmts[4]) L2(pmt[5],pmts[4]) L2(pmt[1],pmts[2]) LE2(pmt[5],pmts[2]) break ; }
        
                                    case 'A'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) LE2(pmt[5],pmt[1]) M2(pmt[2],pmt[2]) LE2(pmt[4],pmt[2]) break ; }




                                    case 'B'  :
                                    {




                                        {
                                            winPulp.mIdColLag = winPulp.mIdColNow ;
                                            winPulp.mIdRowLag = winPulp.mIdRowNow ;
                                            winPulp.mIdColNow  = (pmt[1]) * ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc ;
                                            winPulp.mIdRowNow  = (pmt[1]) * ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr ;
                                            winPulp.idLineType = 0 ;
                                            moveOrLineTransformedF( tinP , winPulp ) ;
                                        }




                                        //M2(pmt[1],pmt[1])




                                        L2(pmt[5],pmt[2])
                                        LE2(pmt[1],pmt[3])
                                        L2(pmt[5],pmt[4])
                                        L2(pmt[1],pmt[5])
                                        L2(pmt[1],pmt[1])
                                        break ;
                                    }




                                    //case 'B'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[1],pmt[3]) L2(pmt[5],pmt[4]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) break ; }




                                    case 'C'  : { M2(pmt[5],pmt[2]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[4]) break ; }
                                    case 'D'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[2]) L2(pmt[5],pmt[4]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) break ; }
                                    case 'E'  : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) break ; }
                                    case 'F'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) break ; }
                                    case 'G'  : { M2(pmt[4],pmt[2]) L2(pmt[5],pmt[2]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'H'  : { M2(pmt[1],pmt[1]) LE2(pmt[1],pmt[5]) M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[3]) M2(pmt[5],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case 'I'  : { M2(pmt[3],pmt[5]) LE2(pmt[3],pmt[1]) M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'J'  : { M2(pmt[1],pmt[2]) L2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'K'  : { M2(pmt[1],pmt[1]) LE2(pmt[1],pmt[5]) M2(pmt[5],pmt[1]) LE2(pmt[1],pmt[3]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'L'  : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
                                    case 'M'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[3],pmt[3]) L2(pmt[5],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case 'N'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) break ; }




                                    case 'O'  :
                                    {
                                        //LOGrAWtID( "---- 'O' BEGIN ----" ) ;
                                        M2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1])
                                        //LOGrAWtID( "---- 'O' END ----" ) ;
                                        break ;
                                    }
                                    //case 'O'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) break ; }




                                    case 'P'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) break ; }
                                    case 'Q'  : { M2(pmt[4],pmt[2]) L2(pmt[5],pmt[1]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) break ; }
                                    case 'R'  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[3]) LE2(pmt[1],pmt[3]) LE2(pmt[5],pmt[1]) break ; }
                                    case 'S'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[2]) L2(pmt[1],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'T'  : { M2(pmt[3],pmt[1]) L2(pmt[3],pmt[5]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'U'  : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'V'  : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[3],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) break ; }
                                    case 'W'  : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) L2(pmt[5],pmt[5]) M2(pmt[3],pmt[3]) L2(pmt[3],pmt[1]) break ; }
                                    case 'X'  : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case 'Y'  : { M2(pmt[1],pmt[5]) L2(pmt[3],pmt[3]) LE2(pmt[5],pmt[5]) M2(pmt[3],pmt[1]) L2(pmt[3],pmt[3]) break ; }
                                    case 'Z'  : { M2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
        
                                    case '1'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[2],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '2'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '3'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '4'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[2],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[5],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '5'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[2],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[5],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '6'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[5],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '7'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[5],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '8'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[2],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '9'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[2],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                    case '0'  : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[2],pmt[1]) break ; }
        
                                    case ' '  : { break ; }
                                    case '`'  : { M2(pmt[2],pmt[5]) LE2(pmt[4],pmt[4]) break ; }
                                    case '~'  : { M2(pmt[1],pmt[4]) L2(pmt[2],pmt[5]) L2(pmt[4],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
                                    case '!'  : { M2(pmt[3],pmt[5]) LE2(pmt[3],pmt[2]) M2(pmt[2],pmt[1]) LE2(pmt[4],pmt[1]) break ; }
                                    case '@'  : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[2]) L2(pmt[2],pmt[2]) L2(pmt[2],pmt[4]) LE2(pmt[4],pmt[4]) break ; }
                                    case '#'  : { M2(pmt[2],pmt[1]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[1]) LE2(pmt[4],pmt[5]) M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[2]) M2(pmt[1],pmt[4]) LE2(pmt[5],pmt[4]) break ; }
                                    case '$'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[2]) L2(pmt[1],pmt[4]) LE2(pmt[5],pmt[5]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case '%'  : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[1],pmt[4]) LE2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) LE2(pmt[5],pmt[2]) break ; }
                                    case '^'  : { M2(pmt[1],pmt[4]) L2(pmt[3],pmt[5]) LE2(pmt[5],pmt[4]) break ; }
                                    case '&'  : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[2]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
                                    case '*'  : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[3]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case '('  : { M2(pmt[5],pmt[1]) L2(pmt[4],pmt[2]) L2(pmt[4],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
                                    case ')'  : { M2(pmt[1],pmt[1]) L2(pmt[2],pmt[2]) L2(pmt[2],pmt[4]) LE2(pmt[1],pmt[5]) break ; }
                                    case '-'  : { M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) break ; }
                                    case '_'  : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
                                    case '='  : { M2(pmt[2],pmt[2]) LE2(pmt[4],pmt[2]) M2(pmt[4],pmt[3]) LE2(pmt[2],pmt[3]) break ; }
                                    case '+'  : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case '['  : { M2(pmt[5],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[4],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case '{'  : { M2(pmt[5],pmt[2]) L2(pmt[5],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[4],pmt[5]) L2(pmt[5],pmt[5]) LE2(pmt[5],pmt[4]) break ; }
                                    case ']'  : { M2(pmt[1],pmt[1]) L2(pmt[2],pmt[1]) L2(pmt[2],pmt[5]) LE2(pmt[1],pmt[5]) break ; }
                                    case '}'  : { M2(pmt[1],pmt[2]) L2(pmt[1],pmt[1]) L2(pmt[2],pmt[1]) L2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) LE2(pmt[1],pmt[4]) break ; }
                                    case '\\' : { M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case '|'  : { M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case ';'  : { M2(pmt[1],pmt[1]) L2(pmt[2],pmt[2]) LE2(pmt[1],pmt[2]) break ; }
                                    case ':'  : { M2(pmt[1],pmts[2]) L2(pmt[2],pmts[2]) L2(pmt[2],pmts[3]) LE2(pmt[1],pmts[3]) break ; }
                                    case '\'' : { M2(pmt[3],pmt[5]) LE2(pmt[3],pmt[4]) break ; }
                                    case '"'  : { M2(pmt[2],pmt[5]) LE2(pmt[2],pmt[4]) M2(pmt[4],pmt[4]) LE2(pmt[4],pmt[5]) break ; }
                                    case ','  : { M2(pmt[1],pmt[1]) LE2(pmt[2],pmt[2]) break ; }
                                    case '<'  : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[3]) LE2(pmt[5],pmt[5]) break ; }
                                    case '.'  : { M2(pmt[1],pmt[2]) L2(pmt[1],pmt[1]) LE2(pmt[2],pmt[1]) break ; }
                                    case '>'  : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[3]) LE2(pmt[1],pmt[5]) break ; }
                                    case '/'  : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case '?'  : { M2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) LE2(pmt[3],pmt[2]) M2(pmt[2],pmt[1]) LE2(pmt[4],pmt[1]) break ; }
        
                                    //DUPLICATED CODE
                                    case '\r' :
                                    {
                                        bUseSavedPosition = 0 ;
        
                                        strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                                        winPulp.mIdColNow = sfd.mIdCol ;
                                        winPulp.mIdRowNow = mIdRowSave ;
                                        if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                                        if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                                        {
                                            const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                                            const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                                            thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                                        }
                                        winPulp.positionStrokingFrameIfF( tinP ) ;
        
                                        break ;
                                    }
                                    case '\n' :
                                    {
                                        bUseSavedPosition = 0 ;
                                        strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                                        //if( bLog3302e ) { TN( tSay , "" ) ; tSay = T("lf: winPulp.mIdRowNow: ")+TF1(winPulp.mIdRowNow)+T(" -> ")+TF1((measureT)(-MAXmEASUREt==sfd.mIdRowHighWater?sfd.mIdRow:sfd.mIdRowHighWater+1.0+winPulp.rCache.mPadUp))+T("\r\n") ; LOGrAW( tSay ) ; }
                                        winPulp.mIdColNow = mIdColSave ;
                                        winPulp.mIdRowNow = - MAXmEASUREt == sfd.mIdRowHighWater
                                            ? sfd.mIdRow
                                            : sfd.mIdRowHighWater + 1.0 + winPulp.rCache.mPadUp
                                        ;
                                        if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                                        if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                                        {
                                            const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                                            const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                                            thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                                        }
                                        winPulp.positionStrokingFrameIfF( tinP ) ;
        
                                        break ;
                                    }
        
                                    case saA1_TOOLbegin                              :
                                    case saA1_TOOLa                                  :
                                    case saA1_TOOLb                                  :
                                    case saA1_TOOLc                                  :
                                    case saA1_TOOLd                                  :
                                    case saA1_TOOLe                                  :
                                    case saA1_TOOLf                                  :
                                    case saA1_TOOLg                                  :
                                    case saA1_TOOLh                                  :
                                    case saA1_TOOLi                                  :
                                    case saA1_TOOLj                                  :
                                    case saA1_TOOLk                                  :
                                    case saA1_TOOLl                                  :
                                    case saA1_TOOLm                                  :
                                    case saA1_TOOLn                                  :
                                    case saA1_TOOLo                                  :
                                    case saA1_TOOLp                                  :
                                    case saA1_TOOLq                                  :
                                    case saA1_TOOLr                                  :
                                    case saA1_TOOLs                                  :
                                    case saA1_TOOLt                                  :
                                    case saA1_TOOLu                                  :
                                    case saA1_TOOLv                                  :
                                    case saA1_TOOLw                                  :
                                    case saA1_TOOLx                                  :
                                    case saA1_TOOLy                                  :
                                    case saA1_TOOLz                                  :
                                    case saA1_TOOLA                                  :
                                    case saA1_TOOLB                                  :
                                    case saA1_TOOLC                                  :
                                    case saA1_TOOLD                                  :
                                    case saA1_TOOLE                                  :
                                    case saA1_TOOLF                                  :
                                    case saA1_TOOLG                                  :
                                    case saA1_TOOLH                                  :
                                    case saA1_TOOLI                                  :
                                    case saA1_TOOLJ                                  :
                                    case saA1_TOOLK                                  :
                                    case saA1_TOOLL                                  :
                                    case saA1_TOOLM                                  :
                                    case saA1_TOOLN                                  :
                                    case saA1_TOOLO                                  :
                                    case saA1_TOOLP                                  :
                                    case saA1_TOOLQ                                  :
                                    case saA1_TOOLR                                  :
                                    case saA1_TOOLS                                  :
                                    case saA1_TOOLT                                  :
                                    case saA1_TOOLU                                  :
                                    case saA1_TOOLV                                  :
                                    case saA1_TOOLW                                  :
                                    case saA1_TOOLX                                  :
                                    case saA1_TOOLY                                  :
                                    case saA1_TOOLZ                                  :
                                    case saA1_TOOL0                                  :
                                    case saA1_TOOL1                                  :
                                    case saA1_TOOL2                                  :
                                    case saA1_TOOL3                                  :
                                    case saA1_TOOL4                                  :
                                    case saA1_TOOL5                                  :
                                    case saA1_TOOL6                                  :
                                    case saA1_TOOL7                                  :
                                    case saA1_TOOL8                                  :
                                    case saA1_TOOL9                                  :
                                    case saA1_TOOLPAD0                               :
                                    case saA1_TOOLPAD1                               :
                                    case saA1_TOOLPAD2                               :
                                    case saA1_TOOLPAD3                               :
                                    case saA1_TOOLPAD4                               :
                                    case saA1_TOOLPAD5                               :
                                    case saA1_TOOLPAD6                               :
                                    case saA1_TOOLPAD7                               :
                                    case saA1_TOOLPAD8                               :
                                    case saA1_TOOLPAD9                               :
                                    case saA1_TOOLACCENT                             :
                                    case saA1_TOOLAND                                :
                                    case saA1_TOOLAT                                 :
                                    case saA1_TOOLBACKsLASH                          :
                                    case saA1_TOOLCARET                              :
                                    case saA1_TOOLCOLON                              :
                                    case saA1_TOOLCOMMA                              :
                                    case saA1_TOOLCURLEYcLOSE                        :
                                    case saA1_TOOLCURLEYoPEN                         :
                                    case saA1_TOOLDIVIDE                             :
                                    case saA1_TOOLDIVIDEnUM                          :
                                    case saA1_TOOLDOLLAR                             :
                                    case saA1_TOOLEQUALS                             :
                                    case saA1_TOOLEXCLAIM                            :
                                    case saA1_TOOLGREATERtHAN                        :
                                    case saA1_TOOLLESStHAN                           :
                                    case saA1_TOOLMINUS                              :
                                    case saA1_TOOLMINUSnUM                           :
                                    case saA1_TOOLMULTIPLY                           :
                                    case saA1_TOOLMULTIPLYnUM                        :
                                    case saA1_TOOLOR                                 :
                                    case saA1_TOOLPARENcLOSE                         :
                                    case saA1_TOOLPARENoPEN                          :
                                    case saA1_TOOLPERCENT                            :
                                    case saA1_TOOLPERIOD                             :
                                    case saA1_TOOLPERIODnUM                          :
                                    case saA1_TOOLPLUS                               :
                                    case saA1_TOOLPLUSnUM                            :
                                    case saA1_TOOLPOUND                              :
                                    case saA1_TOOLQUESTION                           :
                                    case saA1_TOOLQUOTEdOUBLE                        :
                                    case saA1_TOOLQUOTEsINGLE                        :
                                    case saA1_TOOLSEMICOLON                          :
                                    case saA1_TOOLSPACE                              :
                                    case saA1_TOOLSQUAREcLOSE                        :
                                    case saA1_TOOLSQUAREoPEN                         :
                                    case saA1_TOOLTILDE                              :
                                    case saA1_TOOLUNDERSCORE                         : {  break ; }
        
                                    case saA1_TOOLCONTROLbEGIN                       : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[4]) M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) break ; }
                                    case saA1_TOOLALT                                :
                                    case saA1_TOOLALTrIGHT                           : { M2(pmt[1],pmt[1]) L2(pmt[3],pmt[5]) LE2(pmt[3],pmt[1]) M2(pmt[4],pmt[5]) L2(pmt[4],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_TOOLBACKSPACE                          : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[1]) L2(pmt[3],pmt[5]) M2(pmt[3],pmt[1]) L2(pmt[1],pmt[5]) M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) break ; }
                                    case saA1_TOOLBASEoScELLlIST                     : { M2(pmt[1],pmt[1]) L2(pmt[5],pmt[1]) L2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[4]) L2(pmt[5],pmt[4]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[4]) M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_TOOLBASEoSlEFT                         :
                                    case saA1_TOOLBASEoSrIGHT                        : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[3],pmt[1]) L2(pmt[3],pmt[3]) M2(pmt[5],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[4],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) break ; }
                                    case saA1_TOOLCONTROL                            :
                                    case saA1_TOOLCONTROLrIGHT                       : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[2]) LE2(pmt[5],pmt[2]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[3],pmt[3]) L2(pmt[3],pmt[5]) break ; }
                                    case saA1_TOOLDELETE                             :
                                    case saA1_TOOLDELETEnUM                          : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[1]) L2(pmt[5],pmt[5]) M2(pmt[5],pmt[1]) L2(pmt[1],pmt[5]) break ; }
                                    case saA1_TOOLDOWN                               :
                                    case saA1_TOOLDOWNnUM                            : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[1]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLEND                                :
                                    case saA1_TOOLENDnUM                             : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[1]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_TOOLENTER                              :
                                    case saA1_TOOLENTERnUM                           : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[3]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_TOOLESCAPE                             : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[3],pmt[3]) LE2(pmt[4],pmt[2]) M2(pmt[2],pmt[4]) L2(pmt[2],pmt[3]) L2(pmt[3],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[4]) L2(pmt[4],pmt[3]) L2(pmt[3],pmt[4]) L2(pmt[4],pmt[4]) break ; }
                                    case saA1_TOOLF1                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) break ; }
                                    case saA1_TOOLF2                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLF3                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLF4                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) break ; }
                                    case saA1_TOOLF5                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) break ; }
                                    case saA1_TOOLF6                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLF7                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) break ; }
                                    case saA1_TOOLF8                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[5]) break ; }
                                    case saA1_TOOLF9                                 : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[5]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) break ; }
                                    case saA1_TOOLF10                                : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[5]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLF11                                : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[5]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) M2(pmt[5],pmt[2]) L2(pmt[3],pmt[2]) break ; }
                                    case saA1_TOOLF12                                : { M2(pmt[1],pmt[5]) L2(pmt[2],pmt[5]) LE2(pmt[2],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[5]) M2(pmt[5],pmt[4]) L2(pmt[3],pmt[4]) break ; }
                                    case saA1_TOOLHOME                               :
                                    case saA1_TOOLHOMEnUM                            : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[3],pmt[1]) L2(pmt[3],pmt[3]) M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_TOOLINSERT                             :
                                    case saA1_TOOLINSERTnUM                          : { M2(pmt[2],pmt[2]) L2(pmt[2],pmt[4]) L2(pmt[4],pmt[4]) L2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) M2(pmt[1],pmt[1]) L2(pmt[2],pmt[2]) M2(pmt[5],pmt[5]) L2(pmt[4],pmt[4]) M2(pmt[1],pmt[5]) L2(pmt[2],pmt[4]) M2(pmt[5],pmt[1]) L2(pmt[4],pmt[2]) break ; }
                                    case saA1_TOOLLEFT                               :
                                    case saA1_TOOLLEFTnUM                            : { M2(pmt[3],pmt[1]) L2(pmt[1],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[3],pmt[1]) M2(pmt[5],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLLOCKcAPS                           : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[2],pmt[2]) L2(pmt[2],pmt[5]) L2(pmt[5],pmt[5]) break ; }
                                    case saA1_TOOLLOCKnUM                            : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[2],pmt[5]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_TOOLLOCKsCROLL                         : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) M2(pmt[2],pmt[2]) L2(pmt[5],pmt[2]) L2(pmt[5],pmt[4]) L2(pmt[2],pmt[4]) L2(pmt[2],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_TOOLNULLnUM                            : { M2(pmt[2],pmt[2]) L2(pmt[2],pmt[4]) L2(pmt[4],pmt[4]) L2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLPAGEdOWN                           :
                                    case saA1_TOOLPAGEdOWNnUM                        : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[1]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[1],pmt[5]) L2(pmt[1],pmt[4]) L2(pmt[5],pmt[4]) L2(pmt[5],pmt[5]) L2(pmt[1],pmt[5]) M2(pmt[3],pmt[4]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLPAGEuP                             :
                                    case saA1_TOOLPAGEuPnUM                          : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[1],pmt[1]) L2(pmt[1],pmt[2]) L2(pmt[5],pmt[2]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[3],pmt[2]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLBREAK                              : { M2(pmt[1],pmt[3]) L2(pmt[4],pmt[3]) M2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[4],pmt[1]) LE2(pmt[4],pmt[5]) break ; }
                                    case saA1_TOOLPAUSE                              : { M2(pmt[1],pmt[3]) L2(pmt[5],pmt[3]) M2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_TOOLRIGHT                              :
                                    case saA1_TOOLRIGHTnUM                           : { M2(pmt[3],pmt[1]) L2(pmt[5],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[3],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLSHIFT                              :
                                    case saA1_TOOLSHIFTrIGHT                         : { M2(pmt[1],pmt[1]) L2(pmt[3],pmt[1]) L2(pmt[3],pmt[3]) L2(pmt[1],pmt[3]) L2(pmt[1],pmt[5]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[1]) LE2(pmt[4],pmt[5]) M2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[5],pmt[3]) break ; }
                                    case saA1_TOOLTAB                                :
                                    case saA1_TOOLTABbACK                            : { M2(pmt[1],pmt[5]) LE2(pmt[3],pmt[5]) M2(pmt[2],pmt[1]) L2(pmt[2],pmt[5]) M2(pmt[3],pmt[1]) L2(pmt[4],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_TOOLUP                                 :
                                    case saA1_TOOLUPnUM                              : { M2(pmt[1],pmt[3]) L2(pmt[3],pmt[5]) L2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[3],pmt[1]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLCONTROLeND                         : { M2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) break ; }
                                    case saA1_TOOLMOUSEbUTTONlEFT                    : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[5],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) M2(pmt[1],pmt[5]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLMOUSEbUTTONcENTER                  : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[5],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) M2(pmt[2],pmt[4]) L2(pmt[4],pmt[4]) break ; }
                                    case saA1_TOOLMOUSEbUTTONrIGHT                   : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[5],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) M2(pmt[5],pmt[5]) L2(pmt[3],pmt[3]) break ; }
        
                                    case saA1_TOOLJOY1bUTTON1                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON2                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTON3                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON4                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY1bUTTON5                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON6                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTON7                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON8                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) break ; }
                                    case saA1_TOOLJOY1bUTTON9                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONa                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTONb                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONc                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY1bUTTONd                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONe                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTONf                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON01                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) break ; }
                                    case saA1_TOOLJOY1bUTTON11                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON21                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTON31                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON41                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY1bUTTON51                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON61                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTON71                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON81                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) break ; }
                                    case saA1_TOOLJOY1bUTTON91                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONa1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTONb1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONc1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY1bUTTONd1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTONe1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY1bUTTONf1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY1bUTTON02                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[1]) L2(pmt[4],pmt[1]) L2(pmt[5],pmt[2]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[2]) LE2(pmt[4],pmt[5]) break ; }
        
                                    case saA1_TOOLJOY2bUTTON1                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON2                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTON3                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON4                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY2bUTTON5                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON6                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTON7                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON8                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) break ; }
                                    case saA1_TOOLJOY2bUTTON9                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONa                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTONb                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONc                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY2bUTTONd                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONe                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTONf                        : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON01                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) break ; }
                                    case saA1_TOOLJOY2bUTTON11                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON21                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTON31                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON41                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY2bUTTON51                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON61                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTON71                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON81                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) break ; }
                                    case saA1_TOOLJOY2bUTTON91                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONa1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTONb1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONc1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) break ; }
                                    case saA1_TOOLJOY2bUTTONd1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTONe1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) break ; }
                                    case saA1_TOOLJOY2bUTTONf1                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[5]) L2(pmt[2],pmt[5]) M2(pmt[4],pmt[4]) L2(pmt[2],pmt[4]) M2(pmt[4],pmt[3]) L2(pmt[2],pmt[3]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) break ; }
                                    case saA1_TOOLJOY2bUTTON02                       : { M2(pmt[1],pmt[5]) L2(pmt[1],pmt[2]) L2(pmt[2],pmt[1]) L2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[2]) LE2(pmt[2],pmt[5]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[5]) M2(pmt[4],pmt[2]) LE2(pmt[4],pmt[5]) break ; }
        
        
                                    case saA1_TOOLx2Begin                            : { break ; }
                                    case saA1_TOOLMOUSEpOSITION                      : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[1],pmt[3]) L2(pmt[5],pmt[3]) M2(pmt[3],pmt[5]) L2(pmt[3],pmt[3]) break ; }
                                    case saA1_TOOLx2End                              : { break ; }
                                    case saA1_TOOLx7Begin                            : { break ; }
                                    case saA1_TOOLJOY1pOSITION                       : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[2]) L2(pmt[4],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[4]) break ; }
                                    case saA1_TOOLJOY2pOSITION                       : { M2(pmt[2],pmt[1]) L2(pmt[1],pmt[2]) L2(pmt[1],pmt[5]) L2(pmt[5],pmt[5]) L2(pmt[5],pmt[1]) L2(pmt[2],pmt[1]) M2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) M2(pmt[3],pmt[2]) LE2(pmt[3],pmt[4]) break ; }
                                    case saA1_TOOLx7End                              : { break ; }
                                    case saA1_TOOLend                                : { break ; }
        
                                    case saA1_V1 : { M2(pmt[1],pmt[1]) LE2(pmt[1],pmt[5]) break ; }
                                    case saA1_V2 : { M2(pmt[2],pmt[1]) LE2(pmt[2],pmt[5]) break ; }
                                    case saA1_V3 : { M2(pmt[3],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case saA1_V4 : { M2(pmt[4],pmt[1]) LE2(pmt[4],pmt[5]) break ; }
                                    case saA1_V5 : { M2(pmt[5],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_H1 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_H2 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[2]) break ; }
                                    case saA1_H3 : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_H4 : { M2(pmt[1],pmt[4]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_H5 : { M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_VU12 : { M2(pmt[1],pmt[1]) LE2(pmt[2],pmt[5]) break ; }
                                    case saA1_VU13 : { M2(pmt[1],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case saA1_VU14 : { M2(pmt[1],pmt[1]) LE2(pmt[4],pmt[5]) break ; }
                                    case saA1_VU15 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_VU23 : { M2(pmt[2],pmt[1]) LE2(pmt[3],pmt[5]) break ; }
                                    case saA1_VU24 : { M2(pmt[2],pmt[1]) LE2(pmt[4],pmt[5]) break ; }
                                    case saA1_VU25 : { M2(pmt[2],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_VU34 : { M2(pmt[3],pmt[1]) LE2(pmt[4],pmt[5]) break ; }
                                    case saA1_VU35 : { M2(pmt[3],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_VU45 : { M2(pmt[4],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_VD12 : { M2(pmt[1],pmt[5]) LE2(pmt[2],pmt[1]) break ; }
                                    case saA1_VD13 : { M2(pmt[1],pmt[5]) LE2(pmt[3],pmt[1]) break ; }
                                    case saA1_VD14 : { M2(pmt[1],pmt[5]) LE2(pmt[4],pmt[1]) break ; }
                                    case saA1_VD15 : { M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_VD23 : { M2(pmt[2],pmt[5]) LE2(pmt[3],pmt[1]) break ; }
                                    case saA1_VD24 : { M2(pmt[2],pmt[5]) LE2(pmt[4],pmt[1]) break ; }
                                    case saA1_VD25 : { M2(pmt[2],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_VD34 : { M2(pmt[3],pmt[5]) LE2(pmt[4],pmt[1]) break ; }
                                    case saA1_VD35 : { M2(pmt[3],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_VD45 : { M2(pmt[4],pmt[5]) LE2(pmt[5],pmt[1]) break ; }
                                    case saA1_HU12 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[2]) break ; }
                                    case saA1_HU13 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_HU14 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HU15 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HU23 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_HU24 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HU25 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HU34 : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HU35 : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HU45 : { M2(pmt[1],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HD12 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[2]) break ; }
                                    case saA1_HD13 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_HD14 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HD15 : { M2(pmt[1],pmt[1]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HD23 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[3]) break ; }
                                    case saA1_HD24 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HD25 : { M2(pmt[1],pmt[2]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HD34 : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[4]) break ; }
                                    case saA1_HD35 : { M2(pmt[1],pmt[3]) LE2(pmt[5],pmt[5]) break ; }
                                    case saA1_HD45 : { M2(pmt[1],pmt[4]) LE2(pmt[5],pmt[5]) break ; }
        
                                    case saA1_TRADEmARK : { M2(pmt[1],pmt[5]) LE2(pmt[5],pmt[5]) M2(pmt[2],pmt[1]) L2(pmt[2],pmt[5]) M2(pmt[3],pmt[1]) L2(pmt[3],pmt[4]) L2(pmt[5],pmt[4]) LE2(pmt[5],pmt[1]) M2(pmt[4],pmt[1]) L2(pmt[4],pmt[4]) break ; }
                                    case saA1_COPYrIGHT : { M2(pmt[1],pmt[1]) L2(pmt[1],pmt[4]) L2(pmt[5],pmt[4]) L2(pmt[5],pmt[1]) L2(pmt[1],pmt[1]) M2(pmt[4],pmt[2]) L2(pmt[2],pmt[2]) L2(pmt[2],pmt[3]) LE2(pmt[4],pmt[3]) break ; }
                                    case saA1_HARDbLANKfILLEDwITHpEE :
                                    {
                                        winPulp.newWaterF(                         winPulp.rCache.msBc ,                         winPulp.rCache.msBr ) ;
                                        winPulp.newWaterF( ( winPulp.rCache.msAc - 1.0 ) + winPulp.rCache.msBc , ( winPulp.rCache.msAr - 1.0 ) + winPulp.rCache.msBr ) ;
                                        break ;
                                    }
                                }
                                break ;
                            }
                            case sscDIGIT : // NUMERIC SYMBOLS (ALL 01 OF THEM) //CONJ: THIS SUPPORTS ALL RADIXES UP TO 00001
                            {
                                //U::REF: case '7'  : { M2(pmt[1],pmt[5]) LE2(pmt[1],pmt[1]) M2(pmt[5],pmt[2]) L2(pmt[1],pmt[2]) M2(pmt[5],pmt[3]) L2(pmt[1],pmt[3]) M2(pmt[5],pmt[4]) L2(pmt[1],pmt[4]) M2(pmt[2],pmt[5]) L2(pmt[1],pmt[5]) break ; }
                                //ASSUME: sizeof( countT ) == 8
                                countT value = sttP.idAdam & 0xffff ;
                                countT cBits = 1 + ( sttP.idAdam >> 0x10 & 0xf ) ;
                                if( cBits != winPulp.rCache.cBits )
                                {
                                    ether.delF( tinP , winPulp.rCache.pmrb ) ;
                                    winPulp.rCache.cBits = cBits ;
                                    ether.newF( tinP , LF , winPulp.rCache.pmrb , 1 + winPulp.rCache.cBits ) ; ___( winPulp.rCache.pmrb ) ;
                                    if( winPulp.rCache.pmrb ) for( countT off = 0 ; off <= winPulp.rCache.cBits ; off ++ ) winPulp.rCache.pmrb[ off ] = pmt[1] + (measureT)off / (measureT)winPulp.rCache.cBits * pmt[5] ;
                                }
        
                                if( winPulp.rCache.pmrb )
                                {
                                    M2(pmt[1],pmt[1]) LE2(pmt[1],pmt[5])
                                    if( !value ) { M2(pmt[2],pmt[1]) L2(pmt[1],pmt[1]) }
                                    else
                                    {
                                        for( countT off = 1 ; off <= winPulp.rCache.cBits ; off ++ )
                                        {
                                            if( value&1 ) { M2(pmt[5],winPulp.rCache.pmrb[off]) }
                                            else          { M2(pmt[2],winPulp.rCache.pmrb[off]) }
                                            L2(pmt[1],winPulp.rCache.pmrb[off])
                                            value >>= 1 ;
                                        }
                                    }
                                }
        
                                break ;
                            }
                        }
        
                        winPulp.rCache.bPeeWhileMoving = _bPeeSave ;
        
                        if( bUseSavedPosition )
                        {
                            strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                            //if( bLog3302e ) { TN( tSay , "" ) ; tSay = T("alpha1: winPulp.mIdColNow: ")+TF1(winPulp.mIdColNow)+T(" -> ")+TF1(mIdColSave+sf.mCols+winPulp.rCache.mPadRight)+T("\r\n") ; LOGrAW( tSay ) ; }
                            //if( bLog3302e ) { TN( tSay , "" ) ; tSay = T("alpha1: winPulp.mIdRowNow: ")+TF1(winPulp.mIdRowNow)+T(" -> ")+TF1(mIdRowSave)+T("\r\n") ; LOGrAW( tSay ) ; }
                            if( F(winPulp.flagsRender) & flPAPERrENDER_FRAMEdETACHED ) winPulp.mIdColNow = mIdColSave                                       ;
                            else                                                       winPulp.mIdColNow = mIdColSave + sf.mCols + winPulp.rCache.mPadRight ;
                            winPulp.mIdRowNow = mIdRowSave ;
                            if( winPulp.rCache.bPeeWhileMoving ) winPulp.newWaterF( winPulp.mIdColNow , winPulp.mIdRowNow ) ;
                            if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                            {
                                const measureT mColDevice = mIdColOrigin + winPulp.mIdColNow ;
                                const measureT mRowDevice = mIdRowOrigin + winPulp.mIdRowNow ;
                                thirdC::winMoveIF( tinP , *winPulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
                            }
                            winPulp.positionStrokingFrameIfF( tinP ) ;
                        }
        
                        if( !bExpand ) pmt = pmts = pmtExpandRef ;
                    }
                    winPulp.flagsMode = _saveMode ;
        
                    break ;
                }
                case scOld_cOVERRIDEnEXTsTROKE :
                {
                    if( cTraceOn ) { LOGrAW3( "" , sttP.idAdam , "" ) ; }
        
                    winPulp.flagsRenderNoPush |= flPAPERrENDERnOpUSH_OVERRIDEnEXTsTROKE ;
                    winPulp.stqr_strokeOverrideIdPlate << sttP.idAdam ;
                    break ;
                }
                case scOld_mmRADIAL :
                {
                    measureT mAngle = *(measureT*)&sttP.idAdam ;
                    measureT mReach = *(measureT*)&sttP.cNote ;
        
                    ZE( measureT , musx1 ) ;
                    ZE( measureT , musy1 ) ;
                    countT cCorners = usF( tinP , musx1 , musy1 , mAngle ) ;
                    musx1 = ( musx1 + 1.0 ) / 2.0 ;
                    musy1 = ( musy1 + 1.0 ) / 2.0 ;
        
                    measureT musx0 = musx1 * ( 1.0 - mReach ) + 0.5 * mReach ;
                    measureT musy0 = musy1 * ( 1.0 - mReach ) + 0.5 * mReach ;
        
                    ZE( measureT , mIdColWork ) ;
                    ZE( measureT , mIdRowWork ) ;
                    M2( musx0 , musy0 ) L2( musx1 , musy1 )
        
                    if( F(winPulp.flagsRender) & flPAPERrENDER_NOTES )
                    {
                        /*.6.*/ winPulp.stqr_notes << (measureT)cCorners ;
                        /*.5.*/ winPulp.stqr_notes << musy1 ;
                        /*.4.*/ winPulp.stqr_notes << musx1 ;
                        /*.3.*/ winPulp.stqr_notes << musy0 ;
                        /*.2.*/ winPulp.stqr_notes << musx0 ;
                        /*.1.*/ winPulp.stqr_notes << (measureT)5 ; //NUMBER OF PLATES PUSHED

                        if( cTraceOn ) { TN( tSay , "" ) ; tSay = T("there are ")+TF1(winPulp.stqr_notes)+T(" notes after i pushed 6") ; LOGrAW( tSay ) ; }
                    }
                    break ;
                }
                case scOld_xxPUSHoVERRIDElITERALlITERAL :
                {
                    strokeS sttcr( sttP.idAdam , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , sttP.cNote ) ;
                    byteT* pb_sttcr = (byteT*)&sttcr ;
                    winPulp.stqr_strokeOverride << pb_sttcr ;
                    break ;
                }
                case scOld_mmPUSHoVERRIDElITERALlITERALcOLrOWrELATIVE :
                {
                    strokeS sttcr( sttP.idAdam , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , sttP.cNote ) ;
                    ZE( measureT , mIdCol ) ;
                    ZE( measureT , mIdRow ) ;
                    winPulp.mColRowF( mIdCol , mIdRow , scOld_mmMOVEtO , scOld_mmMOVE , sttcr ) ;
                    sttcr.idAdam = *(countT*)&mIdCol ;
                    sttcr.cNote  = *(countT*)&mIdRow ;

                    byteT* pb_sttcr = (byteT*)&sttcr ;
                    winPulp.stqr_strokeOverride << pb_sttcr ;
                    break ;
                }
                case scOld_ccPUSHoVERRIDEnOTEnOTE :
                {
                    if( sttP.idAdam <= winPulp.stqr_notes && sttP.cNote <= winPulp.stqr_notes )
                    {
                        strokeS sttcr( winPulp.stqr_notes[ sttP.idAdam ] , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , winPulp.stqr_notes[ sttP.cNote ] ) ;
                        byteT* pb_sttcr = (byteT*)&sttcr ;
                        winPulp.stqr_strokeOverride << pb_sttcr ;
                    }
                    break ;
                }
                case scOld_cxPUSHoVERRIDEnOTElITERAL :
                {
                    if( sttP.idAdam <= winPulp.stqr_notes )
                    {
                        strokeS sttcr( winPulp.stqr_notes[ sttP.idAdam ] , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , sttP.cNote ) ;
                        byteT* pb_sttcr = (byteT*)&sttcr ;
                        winPulp.stqr_strokeOverride << pb_sttcr ;
                    }
                    break ;
                }
                case scOld_xcPUSHoVERRIDElITERALnOTE :
                {
                    if( sttP.cNote <= winPulp.stqr_notes )
                    {
                        strokeS sttcr( sttP.idAdam , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , winPulp.stqr_notes[ sttP.cNote ] ) ;
                        byteT* pb_sttcr = (byteT*)&sttcr ;
                        winPulp.stqr_strokeOverride << pb_sttcr ;
                    }
                    break ;
                }
                case scOld_ccIFnOTEnOTEeQUALS :
                case scOld_ccIFnOTEnOTElESStHAN :
                case scOld_ccIFnOTEnOTEnOTlESStHAN :
                {
                    if( sttP.idAdam <= winPulp.stqr_notes && sttP.cNote <= winPulp.stqr_notes )
                    {
                        measureT v1 = *(measureT*)&winPulp.stqr_notes[ sttP.idAdam ] ;
                        measureT v2 = *(measureT*)&winPulp.stqr_notes[ sttP.cNote  ] ;
                        switch( sttP.idCaste )
                        {
                            case scOld_ccIFnOTEnOTEeQUALS      : { winPulp.stqr_if << (boolT)( v1 == v2 ) ; break ; }
                            case scOld_ccIFnOTEnOTElESStHAN    : { winPulp.stqr_if << (boolT)( v1 <  v2 ) ; break ; }
                            case scOld_ccIFnOTEnOTEnOTlESStHAN : { winPulp.stqr_if << (boolT)( v1 >= v2 ) ; break ; }
                        }
                    }
                    else winPulp.stqr_if << (countT)0 ;
                    break ;
                }
                case scOld_mcIFlITERALnOTEeQUALS :
                case scOld_mcIFlITERALnOTElESStHAN :
                case scOld_mcIFlITERALnOTEnOTlESStHAN :
                {
                    if( sttP.cNote <= winPulp.stqr_notes )
                    {
                        measureT v1 = *(measureT*)&sttP.idAdam ;
                        measureT v2 = *(measureT*)&winPulp.stqr_notes[ sttP.cNote  ] ;
                        switch( sttP.idCaste )
                        {
                            case scOld_mcIFlITERALnOTEeQUALS      : { winPulp.stqr_if << (boolT)( v1 == v2 ) ; break ; }
                            case scOld_mcIFlITERALnOTElESStHAN    : { winPulp.stqr_if << (boolT)( v1 <  v2 ) ; break ; }
                            case scOld_mcIFlITERALnOTEnOTlESStHAN : { winPulp.stqr_if << (boolT)( v1 >= v2 ) ; break ; }
                        }
                    }
                    else winPulp.stqr_if << (countT)0 ;
                    break ;
                }
                case scOld_cmIFnOTElITERALeQUALS :
                case scOld_cmIFnOTElITERALlESStHAN :
                case scOld_cmIFnOTElITERALnOTlESStHAN :
                {
                    if( sttP.idAdam <= winPulp.stqr_notes )
                    {
                        measureT v1 = *(measureT*)&winPulp.stqr_notes[ sttP.idAdam ] ;
                        measureT v2 = *(measureT*)&sttP.cNote ;
                        switch( sttP.idCaste )
                        {
                            case scOld_cmIFnOTElITERALeQUALS      : { winPulp.stqr_if << (boolT)( v1 == v2 ) ; break ; }
                            case scOld_cmIFnOTElITERALlESStHAN    : { winPulp.stqr_if << (boolT)( v1 <  v2 ) ; break ; }
                            case scOld_cmIFnOTElITERALnOTlESStHAN : { winPulp.stqr_if << (boolT)( v1 >= v2 ) ; break ; }
                        }
                    }
                    else winPulp.stqr_if << (countT)0 ;
                    break ;
                }
                case scOld_mmIFlITERALlITERALeQUALS :
                case scOld_mmIFlITERALlITERALlESStHAN :
                case scOld_mmIFlITERALlITERALnOTlESStHAN :
                {
                        measureT v1 = *(measureT*)&sttP.idAdam ;
                        measureT v2 = *(measureT*)&sttP.cNote ;
                        switch( sttP.idCaste )
                        {
                            case scOld_mmIFlITERALlITERALeQUALS      : { winPulp.stqr_if << (boolT)( v1 == v2 ) ; break ; }
                            case scOld_mmIFlITERALlITERALlESStHAN    : { winPulp.stqr_if << (boolT)( v1 <  v2 ) ; break ; }
                            case scOld_mmIFlITERALlITERALnOTlESStHAN : { winPulp.stqr_if << (boolT)( v1 >= v2 ) ; break ; }
                        }
                    break ;
                }
                case scOld_cANIMATEcBF :
                {
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        if( sttP.idAdam && winPulp.stAnimateCbfStrokes( sttP.idAdam ) )
                        {
                            (*(animateCBFT)sttP.idAdam)( tinP , ether  , 0 , tinP.pAdamGlobal1->_pulpOldC_.cAnimateArg ) ;
                            winPulp.stAnimateCbfStrokes.extractF( 0 , tinP ) ;
                        }
                        else winPulp.stAnimateCbfStrokes.sinkF( tinP , countTC() , sttP.idAdam , flSTACKsINK_UNIQUE ) ;
                    }
                    break ;
                }
                case scOld_ccFLOOD :
                {
                    countT rgbTest = sttP.idAdam ;
                    flagsT flagsf  = sttP.cNote ;

                    //LOGrAWtID4( "paperOldC::renderF/scOld_ccFLOOD (rgbTest,flagsf): " , rgbTest , " "  , flagsf ) ;

                    if( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) flagsf |= flDRAW_SUPPRESSpELcOLORcHANGES ;

                    if( !( F(flagsf) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
                    {
                        thirdC::winFloodIF( tinP , *winPulp.pHndDrawBitmap , mIdColOrigin + winPulp.mIdColNow , mIdRowOrigin + winPulp.mIdRowNow , rgbTest , winPulp.colorF() , flagsf ) ;
                    }

                    break ;
                }
                case scOld_ccSCRATCHbITMAPpUSH :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;

                    countT cCols = sttw.idAdam ;
                    countT cRows = sttw.cNote ;

                    //LOGrAWtID4( "scOld_ccSCRATCHbITMAPpUSH (cCols,cRows): " , cCols , " " , cRows )
                    backScratchBitmapPushF( tinP , pulpP , cCols , cRows ) ;
                    break ;
                }
                case scOld_ccSCRATCHbITMAPmONOCHROMEpUSH :
                {
                    strokeS sttw = sttP ; //O: AVOID MAKING THIS COPY (NEEDED ONLY IF OVERRIDING)
                    winPulp.overrideF( tinP , sttw ) ;

                    countT cCols = sttw.idAdam ;
                    countT cRows = sttw.cNote ;

                    //LOGrAWtID4( "scOld_ccSCRATCHbITMAPpUSH (cCols,cRows): " , cCols , " " , cRows )
                    backScratchBitmapMonochromePushF( tinP , pulpP , cCols , cRows ) ;
                    break ;
                }

                case scOld_ccCALCaDD  :
                case scOld_ccCALCsUB  :
                case scOld_ccCALCmUL  :
                case scOld_ccCALCdIV  :
                case scOld_ccCALCmOD  :
                case scOld_ccCALClOG  :
                case scOld_ccCALCeXP  :
                case scOld_ccCALCcOS  :
                case scOld_ccCALCsIN  :
                case scOld_ccCALCsQRT :
                case scOld_ccCALCaTAN :
                {
                    boolT bAbort = !!( F(winPulp.flagsRender) & flPAPERrENDER_NOTES ) ;
                    ZE( countT , cOp1 ) ;
                    ZE( countT , cOp2 ) ;
                    ZE( countT , cValue ) ;

                    if( bAbort ) winPulp.flagsRender &= ~( F(flPAPERrENDER_NOTES) ) ;
                    else
                    {
                        if( F(winPulp.flagsRenderCalcNoPush) & flPAPERrENDERcALCnOpUSH_LITERAL1 ) cOp1 = sttP.idAdam ;
                        else if( F(winPulp.flagsRenderCalcNoPush) & flPAPERrENDERcALCnOpUSH_RAM1 )
                        {
                            if( !winPulp.stqRam ) bAbort = 1 ;
                            else
                            {
                                countT* pcElts = (countT*)winPulp.stqRam[ 1 ] ;
                                if( !pcElts || pcElts[ 0 ] < sttP.idAdam ) bAbort = 1 ;
                                else                                       cOp1 = pcElts[ sttP.idAdam ] ;
                            }
                        }
                        else if( sttP.idAdam <= winPulp.stqr_notes ) cOp1 = winPulp.stqr_notes[ sttP.idAdam ] ;
                        else bAbort |= 1 ;
        
                        if( F(winPulp.flagsRenderCalcNoPush) & flPAPERrENDERcALCnOpUSH_LITERAL2 ) cOp2 = sttP.cNote ;
                        else if( F(winPulp.flagsRenderCalcNoPush) & flPAPERrENDERcALCnOpUSH_RAM2 )
                        {
                            if( !winPulp.stqRam ) bAbort = 1 ;
                            else
                            {
                                countT* pcElts = (countT*)winPulp.stqRam[ 1 ] ;
                                if( !pcElts || pcElts[ 0 ] < sttP.cNote ) bAbort = 1 ;
                                else                                      cOp2 = pcElts[ sttP.cNote ] ;
                            }
                        }
                        else if( sttP.cNote <= winPulp.stqr_notes ) cOp2 = winPulp.stqr_notes[ sttP.cNote ] ;
                        else bAbort |= 1 ;
                    }

                    if( !bAbort )
                    {
                        flagsT flagsType = winPulp.flagsRenderCalcNoPush & ( flPAPERrENDERcALCnOpUSH_COUNT | flPAPERrENDERcALCnOpUSH_COUNT1 | flPAPERrENDERcALCnOpUSH_COUNT2 ) ;

                        switch( flagsType )
                        {
                            case flPAPERrENDERcALCnOpUSH_COUNT | flPAPERrENDERcALCnOpUSH_COUNT1 | flPAPERrENDERcALCnOpUSH_COUNT2 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { cValue = cOp1 + cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { cValue = cOp1 - cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { cValue = cOp1 * cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { cValue = cOp1 / cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { cValue = cOp1 % cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { cValue = thirdC::mathLog2IF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { cValue = thirdC::mathExpIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { cValue = thirdC::mathCosIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { cValue = thirdC::mathSinIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { cValue = thirdC::mathSqrtIF( tinP , cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { cValue = thirdC::mathAtanIF( tinP , cOp1 , cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT | flPAPERrENDERcALCnOpUSH_COUNT1 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { cValue = cOp1 + *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { cValue = cOp1 - *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { cValue = cOp1 * *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { cValue = cOp1 / *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { cValue = cOp1 % (countT)*(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { cValue = thirdC::mathLog2IF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { cValue = thirdC::mathExpIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { cValue = thirdC::mathCosIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { cValue = thirdC::mathSinIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { cValue = thirdC::mathSqrtIF( tinP , cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { cValue = thirdC::mathAtanIF( tinP , cOp1 , *(measureT*)&cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT | flPAPERrENDERcALCnOpUSH_COUNT2 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { cValue = *(measureT*)&cOp1 + cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { cValue = *(measureT*)&cOp1 - cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { cValue = *(measureT*)&cOp1 * cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { cValue = *(measureT*)&cOp1 / cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { cValue = (countT)*(measureT*)&cOp1 % cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { cValue = thirdC::mathLog2IF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { cValue = thirdC::mathExpIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { cValue = thirdC::mathCosIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { cValue = thirdC::mathSinIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { cValue = thirdC::mathSqrtIF( tinP , *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { cValue = thirdC::mathAtanIF( tinP , *(measureT*)&cOp1 , cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { cValue = *(measureT*)&cOp1 + *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { cValue = *(measureT*)&cOp1 - *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { cValue = *(measureT*)&cOp1 * *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { cValue = *(measureT*)&cOp1 / *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { cValue = (countT)*(measureT*)&cOp1 % (countT)*(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { cValue = thirdC::mathLog2IF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { cValue = thirdC::mathExpIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { cValue = thirdC::mathCosIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { cValue = thirdC::mathSinIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { cValue = thirdC::mathSqrtIF( tinP , *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { cValue = thirdC::mathAtanIF( tinP , *(measureT*)&cOp1 , *(measureT*)&cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT1 | flPAPERrENDERcALCnOpUSH_COUNT2 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { *(measureT*)&cValue = cOp1 + cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { *(measureT*)&cValue = cOp1 - cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { *(measureT*)&cValue = cOp1 * cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { *(measureT*)&cValue = cOp1 / cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { *(measureT*)&cValue = cOp1 % cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { *(measureT*)&cValue = thirdC::mathLog2IF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { *(measureT*)&cValue = thirdC::mathExpIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { *(measureT*)&cValue = thirdC::mathCosIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { *(measureT*)&cValue = thirdC::mathSinIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { *(measureT*)&cValue = thirdC::mathSqrtIF( tinP , cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { *(measureT*)&cValue = thirdC::mathAtanIF( tinP , cOp1 , cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT1 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { *(measureT*)&cValue = cOp1 + *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { *(measureT*)&cValue = cOp1 - *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { *(measureT*)&cValue = cOp1 * *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { *(measureT*)&cValue = cOp1 / *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { *(measureT*)&cValue = cOp1 % (countT)*(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { *(measureT*)&cValue = thirdC::mathLog2IF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { *(measureT*)&cValue = thirdC::mathExpIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { *(measureT*)&cValue = thirdC::mathCosIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { *(measureT*)&cValue = thirdC::mathSinIF( tinP ,  cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { *(measureT*)&cValue = thirdC::mathSqrtIF( tinP , cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { *(measureT*)&cValue = thirdC::mathAtanIF( tinP , cOp1 , *(measureT*)&cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_COUNT2 :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { *(measureT*)&cValue = *(measureT*)&cOp1 + cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { *(measureT*)&cValue = *(measureT*)&cOp1 - cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { *(measureT*)&cValue = *(measureT*)&cOp1 * cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { *(measureT*)&cValue = *(measureT*)&cOp1 / cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { *(measureT*)&cValue = (countT)*(measureT*)&cOp1 % cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { *(measureT*)&cValue = thirdC::mathLog2IF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { *(measureT*)&cValue = thirdC::mathExpIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { *(measureT*)&cValue = thirdC::mathCosIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { *(measureT*)&cValue = thirdC::mathSinIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { *(measureT*)&cValue = thirdC::mathSqrtIF( tinP , *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { *(measureT*)&cValue = thirdC::mathAtanIF( tinP , *(measureT*)&cOp1 , cOp2 ) ; break ; }
                                }
                                break ;
                            }
                            case flPAPERrENDERcALCnOpUSH_null :
                            {
                                switch( sttP.idCaste )
                                {
                                    case scOld_ccCALCaDD  : { *(measureT*)&cValue = *(measureT*)&cOp1 + *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCsUB  : { *(measureT*)&cValue = *(measureT*)&cOp1 - *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmUL  : { *(measureT*)&cValue = *(measureT*)&cOp1 * *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCdIV  : { *(measureT*)&cValue = *(measureT*)&cOp1 / *(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALCmOD  : { *(measureT*)&cValue = (countT)*(measureT*)&cOp1 % (countT)*(measureT*)&cOp2 ; break ; }
                                    case scOld_ccCALClOG  : { *(measureT*)&cValue = thirdC::mathLog2IF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCeXP  : { *(measureT*)&cValue = thirdC::mathExpIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCcOS  : { *(measureT*)&cValue = thirdC::mathCosIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsIN  : { *(measureT*)&cValue = thirdC::mathSinIF( tinP ,  *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCsQRT : { *(measureT*)&cValue = thirdC::mathSqrtIF( tinP , *(measureT*)&cOp1 ) ; break ; }
                                    case scOld_ccCALCaTAN : { *(measureT*)&cValue = thirdC::mathAtanIF( tinP , *(measureT*)&cOp1 , *(measureT*)&cOp2 ) ; break ; }
                                }
                                break ;
                            }
                        }

                        /*.2.*/ winPulp.stqr_notes << cValue ;
                        /*.1.*/ winPulp.stqr_notes << (measureT)1 ; //NUMBER OF PLATES PUSHED
                    }

                    winPulp.flagsRenderCalcNoPush = flPAPERrENDERcALCnOpUSH_null ;
                    break ;
                }
                //case sc_NULL :
                //{
                //    strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                //    LOGrAW5( "renderF: sc_NULL " , sttP.idAdam , " at x:" ,  R( sf.mIdCol ) , "\r\n" ) ;
                //    break ;
                //}

                POPbIG( scOld_POPrENDERsTROKEoVERRIDE       , winPulp.stqr_strokeOverride , sizeof( strokeS ) )
                POP( scOld_POPrIPPLES                       , winPulp.stqr_cRipples                 )
                POP( scOld_POPsTYLE                         , winPulp.stqr_flStyle                  )
                POP( scOld_POPsIDES                         , winPulp.stqr_cPolygonSides            )
                POP( scOld_POPoFFfRAME                      , winPulp.stqr_offFrame                 )
                POP( scOld_POPoFFfRAMEwRAP                  , winPulp.stqr_offFrameWrap             )
                POP( scOld_OLDCMDpOPhIGHwATER               , winPulp.stqr_mIdRowHighWater          )
                POP( scOld_OLDCMDpOPlOWwATER                , winPulp.stqr_mIdRowLowWater           )
                POP( scOld_OLDCMDpOPrIGHTwATER              , winPulp.stqr_mIdColHighWater          )
                POP( scOld_OLDCMDpOPlEFTwATER               , winPulp.stqr_mIdColLowWater           )
                POP( scOld_RENDERfLAGScONTROLpOP            , winPulp.stqr_fRenderControl           )
                POP( scOld_COLmARGINsADAMfRAMEpOP           , winPulp.stqr_cColsMarginSadamFrame    )
                POP( scOld_ROWmARGINsADAMfRAMEpOP           , winPulp.stqr_cRowsMarginSadamFrame    )
                POP( scOld_RENDERfLAGScYCLEDpOP             , winPulp.stqr_fRenderCycled            )
                POP( scOld_RENDERfLAGScYCLINGdETAIL1pOP     , winPulp.stqr_fRenderCyclingDetail1    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL2pOP     , winPulp.stqr_fRenderCyclingDetail2    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL3pOP     , winPulp.stqr_fRenderCyclingDetail3    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL4pOP     , winPulp.stqr_fRenderCyclingDetail4    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL5pOP     , winPulp.stqr_fRenderCyclingDetail5    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL6pOP     , winPulp.stqr_fRenderCyclingDetail6    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL7pOP     , winPulp.stqr_fRenderCyclingDetail7    )
                POP( scOld_RENDERfLAGScYCLINGdETAIL8pOP     , winPulp.stqr_fRenderCyclingDetail8    )
                POP( scOld_RENDERhANDLERfINALtRANSFORMpOP   , winPulp.stqr_pHandlerFinalTransform   )
                POP( scOld_RENDERfLOATrIGHTpOP              , winPulp.stqr_m01FloatRight            )
                POP( scOld_RENDERfLOATrIGHTcApOP            , winPulp.stqr_m01FloatRight_A          )
                POP( scOld_RENDERfLOATrIGHTcBpOP            , winPulp.stqr_m01FloatRight_B          )
                POP( scOld_RENDERfLOATrIGHTcCpOP            , winPulp.stqr_m01FloatRight_C          )
                POP( scOld_RENDERfLOATrIGHTcDpOP            , winPulp.stqr_m01FloatRight_D          )
                POP( scOld_RENDERfLOATuPpOP                 , winPulp.stqr_m01FloatUp               )
                POP( scOld_RENDERfLOATuPcApOP               , winPulp.stqr_m01FloatUp_A             )
                POP( scOld_RENDERfLOATuPcBpOP               , winPulp.stqr_m01FloatUp_B             )
                POP( scOld_RENDERfLOATuPcCpOP               , winPulp.stqr_m01FloatUp_C             )
                POP( scOld_RENDERfLOATuPcDpOP               , winPulp.stqr_m01FloatUp_D             )
                POP( scOld_RENDER01COLhOTpOINTpOP           , winPulp.stqr_m01ColHotPoint           )
                POP( scOld_RENDER01COLhOTpOINTcApOP         , winPulp.stqr_m01ColHotPoint_A         )
                POP( scOld_RENDER01COLhOTpOINTcBpOP         , winPulp.stqr_m01ColHotPoint_B         )
                POP( scOld_RENDER01COLhOTpOINTcCpOP         , winPulp.stqr_m01ColHotPoint_C         )
                POP( scOld_RENDER01COLhOTpOINTcDpOP         , winPulp.stqr_m01ColHotPoint_D         )
                POP( scOld_RENDER01ROWhOTpOINTpOP           , winPulp.stqr_m01RowHotPoint           )
                POP( scOld_RENDER01ROWhOTpOINTcApOP         , winPulp.stqr_m01RowHotPoint_A         )
                POP( scOld_RENDER01ROWhOTpOINTcBpOP         , winPulp.stqr_m01RowHotPoint_B         )
                POP( scOld_RENDER01ROWhOTpOINTcCpOP         , winPulp.stqr_m01RowHotPoint_C         )
                POP( scOld_RENDER01ROWhOTpOINTcDpOP         , winPulp.stqr_m01RowHotPoint_D         )
                POP( scOld_RENDERcOShOTaNGLEpOP             , winPulp.stqr_mCosHotAngle             )
                POP( scOld_RENDERsINhOTaNGLEpOP             , winPulp.stqr_mSinHotAngle             )
                POP( scOld_RENDERhOTaNGLEcApOP              , winPulp.stqr_mHotAngle_A              )
                POP( scOld_RENDERhOTaNGLEcBpOP              , winPulp.stqr_mHotAngle_B              )
                POP( scOld_RENDERhOTaNGLEcCpOP              , winPulp.stqr_mHotAngle_C              )
                POP( scOld_RENDERhOTaNGLEcDpOP              , winPulp.stqr_mHotAngle_D              )
                POP( scOld_RENDER01COLmIRRORpOINTpOP        , winPulp.stqr_m01ColMirrorPoint        )
                POP( scOld_RENDER01COLmIRRORpOINTcApOP      , winPulp.stqr_m01ColMirrorPoint_A      )
                POP( scOld_RENDER01COLmIRRORpOINTcBpOP      , winPulp.stqr_m01ColMirrorPoint_B      )
                POP( scOld_RENDER01COLmIRRORpOINTcCpOP      , winPulp.stqr_m01ColMirrorPoint_C      )
                POP( scOld_RENDER01COLmIRRORpOINTcDpOP      , winPulp.stqr_m01ColMirrorPoint_D      )
                POP( scOld_RENDER01ROWmIRRORpOINTpOP        , winPulp.stqr_m01RowMirrorPoint        )
                POP( scOld_RENDER01ROWmIRRORpOINTcApOP      , winPulp.stqr_m01RowMirrorPoint_A      )
                POP( scOld_RENDER01ROWmIRRORpOINTcBpOP      , winPulp.stqr_m01RowMirrorPoint_B      )
                POP( scOld_RENDER01ROWmIRRORpOINTcCpOP      , winPulp.stqr_m01RowMirrorPoint_C      )
                POP( scOld_RENDER01ROWmIRRORpOINTcDpOP      , winPulp.stqr_m01RowMirrorPoint_D      )
                POP( scOld_RENDERcOSmIRRORaNGLEpOP          , winPulp.stqr_mCosMirrorAngle          )
                POP( scOld_RENDERsINmIRRORaNGLEpOP          , winPulp.stqr_mSinMirrorAngle          )
                POP( scOld_RENDERmIRRORaNGLEcApOP           , winPulp.stqr_mMirrorAngle_A           )
                POP( scOld_RENDERmIRRORaNGLEcBpOP           , winPulp.stqr_mMirrorAngle_B           )
                POP( scOld_RENDERmIRRORaNGLEcCpOP           , winPulp.stqr_mMirrorAngle_C           )
                POP( scOld_RENDERmIRRORaNGLEcDpOP           , winPulp.stqr_mMirrorAngle_D           )
                POP( scOld_RENDERcOLsCALEpOP                , winPulp.stqr_mColScale                )
                POP( scOld_RENDERcOLsCALEcApOP              , winPulp.stqr_mColScale_A              )
                POP( scOld_RENDERcOLsCALEcBpOP              , winPulp.stqr_mColScale_B              )
                POP( scOld_RENDERcOLsCALEcCpOP              , winPulp.stqr_mColScale_C              )
                POP( scOld_RENDERcOLsCALEcDpOP              , winPulp.stqr_mColScale_D              )
                POP( scOld_RENDERrOWsCALEpOP                , winPulp.stqr_mRowScale                )
                POP( scOld_RENDERrOWsCALEcApOP              , winPulp.stqr_mRowScale_A              )
                POP( scOld_RENDERrOWsCALEcBpOP              , winPulp.stqr_mRowScale_B              )
                POP( scOld_RENDERrOWsCALEcCpOP              , winPulp.stqr_mRowScale_C              )
                POP( scOld_RENDERrOWsCALEcDpOP              , winPulp.stqr_mRowScale_D              )
                POP( scOld_RENDERcOLsHEAR1pOP               , winPulp.stqr_mColShear1               )
                POP( scOld_RENDERcOLsHEAR1cApOP             , winPulp.stqr_mColShear1_A             )
                POP( scOld_RENDERcOLsHEAR1cBpOP             , winPulp.stqr_mColShear1_B             )
                POP( scOld_RENDERcOLsHEAR1cCpOP             , winPulp.stqr_mColShear1_C             )
                POP( scOld_RENDERcOLsHEAR1cDpOP             , winPulp.stqr_mColShear1_D             )
                POP( scOld_RENDERcOLsHEAR2pOP               , winPulp.stqr_mColShear2               )
                POP( scOld_RENDERcOLsHEAR2cApOP             , winPulp.stqr_mColShear2_A             )
                POP( scOld_RENDERcOLsHEAR2cBpOP             , winPulp.stqr_mColShear2_B             )
                POP( scOld_RENDERcOLsHEAR2cCpOP             , winPulp.stqr_mColShear2_C             )
                POP( scOld_RENDERcOLsHEAR2cDpOP             , winPulp.stqr_mColShear2_D             )
                POP( scOld_RENDERcOLsHEAR3pOP               , winPulp.stqr_mColShear3               )
                POP( scOld_RENDERcOLsHEAR3cApOP             , winPulp.stqr_mColShear3_A             )
                POP( scOld_RENDERcOLsHEAR3cBpOP             , winPulp.stqr_mColShear3_B             )
                POP( scOld_RENDERcOLsHEAR3cCpOP             , winPulp.stqr_mColShear3_C             )
                POP( scOld_RENDERcOLsHEAR3cDpOP             , winPulp.stqr_mColShear3_D             )
                POP( scOld_RENDERrOWsHEAR1pOP               , winPulp.stqr_mRowShear1               )
                POP( scOld_RENDERrOWsHEAR1cApOP             , winPulp.stqr_mRowShear1_A             )
                POP( scOld_RENDERrOWsHEAR1cBpOP             , winPulp.stqr_mRowShear1_B             )
                POP( scOld_RENDERrOWsHEAR1cCpOP             , winPulp.stqr_mRowShear1_C             )
                POP( scOld_RENDERrOWsHEAR1cDpOP             , winPulp.stqr_mRowShear1_D             )
                POP( scOld_RENDERrOWsHEAR2pOP               , winPulp.stqr_mRowShear2               )
                POP( scOld_RENDERrOWsHEAR2cApOP             , winPulp.stqr_mRowShear2_A             )
                POP( scOld_RENDERrOWsHEAR2cBpOP             , winPulp.stqr_mRowShear2_B             )
                POP( scOld_RENDERrOWsHEAR2cCpOP             , winPulp.stqr_mRowShear2_C             )
                POP( scOld_RENDERrOWsHEAR2cDpOP             , winPulp.stqr_mRowShear2_D             )
                POP( scOld_RENDERrOWsHEAR3pOP               , winPulp.stqr_mRowShear3               )
                POP( scOld_RENDERrOWsHEAR3cApOP             , winPulp.stqr_mRowShear3_A             )
                POP( scOld_RENDERrOWsHEAR3cBpOP             , winPulp.stqr_mRowShear3_B             )
                POP( scOld_RENDERrOWsHEAR3cCpOP             , winPulp.stqr_mRowShear3_C             )
                POP( scOld_RENDERrOWsHEAR3cDpOP             , winPulp.stqr_mRowShear3_D             )
                POP( scOld_RENDERcOSvECTORpOP               , winPulp.stqr_mCosVector               )
                POP( scOld_RENDERsINvECTORpOP               , winPulp.stqr_mSinVector               )
                POP( scOld_RENDERvECTORcApOP                , winPulp.stqr_mVector_A                )
                POP( scOld_RENDERvECTORcBpOP                , winPulp.stqr_mVector_B                )
                POP( scOld_RENDERvECTORcCpOP                , winPulp.stqr_mVector_C                )
                POP( scOld_RENDERvECTORcDpOP                , winPulp.stqr_mVector_D                )
                POP( scOld_RENDERpADrIGHTpOP                , winPulp.stqr_m01PadRight              )
                POP( scOld_RENDERpADrIGHTcApOP              , winPulp.stqr_m01PadRight_A            )
                POP( scOld_RENDERpADrIGHTcBpOP              , winPulp.stqr_m01PadRight_B            )
                POP( scOld_RENDERpADrIGHTcCpOP              , winPulp.stqr_m01PadRight_C            )
                POP( scOld_RENDERpADrIGHTcDpOP              , winPulp.stqr_m01PadRight_D            )
                POP( scOld_RENDERpADuPpOP                   , winPulp.stqr_m01PadUp                 )
                POP( scOld_RENDERpADuPcApOP                 , winPulp.stqr_m01PadUp_A               )
                POP( scOld_RENDERpADuPcBpOP                 , winPulp.stqr_m01PadUp_B               )
                POP( scOld_RENDERpADuPcCpOP                 , winPulp.stqr_m01PadUp_C               )
                POP( scOld_RENDERpADuPcDpOP                 , winPulp.stqr_m01PadUp_D               )
                case scOld_POPiDoBJECT :
                {
                    countT idObjectOld = winPulp.rCache.idObject ;
                    popF( tinP , winPulp.stqr_idObject , scOld_POPiDoBJECT , 0 , winPulp ) ;
                    break ;
                }
                case scOld_POPiDtYPEpAINT :
                {
                    popF( tinP , winPulp.stqr_idTypePaint , scOld_POPiDtYPEpAINT , 0 , winPulp ) ;
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        ((thirdC&)ether).winSetPaintTypeF( tinP , *winPulp.pHndDrawBitmap  , winPulp.rCache.idTypePaint ) ;
                    }
                    break ;
                }
                case scOld_cPUSHoRIGIN :
                {
                    flagsT flags = sttP.idAdam ;

                    measureT mColOrigin = winPulp.mIdColNow ;
                    measureT mRowOrigin = winPulp.mIdRowNow ;
                    if( F(flags) & flPUSHoRIGIN_WOwO )
                    {
                        mColOrigin -- ;
                        mRowOrigin -- ;
                    }
                    if( F(flags) & flPUSHoRIGIN_MIRROR )
                    {
                        mColOrigin *= - 1 ;
                        mRowOrigin *= - 1 ;
                    }

                    backPushOriginF( mColOrigin , mRowOrigin ) ;

                    if( cTraceOn )
                    {
                        countT idColO = mColOrigin >= 0 ? mColOrigin : - mColOrigin ;
                        countT idRowO = mRowOrigin >= 0 ? mRowOrigin : - mRowOrigin ;
                        TN( tSay , "" ) ; tSay = T(mColOrigin>=0.0f?"+":"-")+TF1(idColO)+T(" , ")+T(mRowOrigin>=0.0f?"+":"-")+TF1(idRowO) ;
                        LOGrAW( tSay ) ;
                    }

                    break ;
                }
                case scOld_POPoRIGIN :
                {
                    backPopOriginF() ;
                    break ;
                }
                case scOld_cDUPoRIGIN :
                {
                    countT ido = sttP.idAdam ;

                    backDupOriginF( ido ) ;

                    if( cTraceOn ) { TN( tSay , "" ) ; tSay = TF1(ido) ; LOGrAW( tSay ) ; }

                    break ;
                }
                case scOld_SNAP                      : { winPulp.snapF( tinP , ether ) ; break ; }
                case scOld_RESTORE                   : { winPulp.snapF( tinP , ether , 1 ) ; break ; }
                case scOld_RENDERsTROKEoVERRIDEpURGE :
                {
                    winPulp.stqr_strokeOverride.purgeF( tinP ) ;
                    winPulp.stqr_strokeOverrideIdPlate.purgeF( tinP ) ;
                    break ;
                }
                case scOld_PUSHoVERRIDEcOLrOW :
                {
                    strokeS sttcr( winPulp.mIdColNow , scOld_ccRENDERstROKEoVERRIDEuSEmYvALUES , winPulp.mIdRowNow ) ;
                    byteT* pb_sttcr = (byteT*)&sttcr ;
                    winPulp.stqr_strokeOverride << pb_sttcr ;
                    break ;
                }
                case scOld_OLDCMDpUSHwRAPtRAP :
                {
                    winPulp.stqr_mIdColWrapOLD << winPulp.mIdColNow ;
                    break ;
                }
                case scOld_OLDCMDpOPwRAPtRAP :
                {
                    if(  winPulp.stqr_mIdColWrapOLD > 1 )
                    {
                        ZE( measureT , mFoo ) ;
                        winPulp.stqr_mIdColWrapOLD >> mFoo ;
                    }
                    break ;
                }
                case scOld_POPfRAME :
                {
                    if(  winPulp.stqr_strokingFrame > 1 )
                    {
                        strokingFrameS sf ;
                        byteT* pbsf = (byteT*)&sf ;
                        winPulp.stqr_strokingFrame >> pbsf ;
        
                        //if( bLog3302e )
                        //{
                        //    strokingFrameS& sf  = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                        //    TN( tSay , "" ) ; tSay = TP(tinP.postThreadName,0x10)+T(" new:")+TF1(winPulp.stqr_strokingFrame)+T(": POPPED TO FRAME AT COL ")+TF1(sf.mIdCol)+T("\r\n") ;
                        //    LOGrAW( tSay ) ;
                        //}
        
                        winPulp.cacheF( tinP , scOld_POPfRAME ) ;
                        winPulp.positionPaperBackF( tinP ) ;
                    }
                    break ;
                }
                case scOld_WRAPoN :
                case scOld_WRAPoFF :
                {
                    strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                    winPulp.stqr_bWrapUnder << sfd.bWrap ;
                    if( sttP.idCaste == scOld_WRAPoN && sfd.bWrap < - 1 ) sfd.bWrap ++ ;
                    else if( sfd.bWrap )                               sfd.bWrap -- ;
                    break ;
                }
                case scOld_POPwRAPoFFoN :
                {
                    if( winPulp.stqr_bWrapUnder )
                    {
                        strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                        sfd.bWrap = 0 ; winPulp.stqr_bWrapUnder >> sfd.bWrap ;
                    }
                    break ;
                }
                case scOld_PEEwHILEmOVINGoN :
                case scOld_PEEwHILEmOVINGoFF :
                {
                    strokingFrameS& sfd = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 2 + winPulp.rCache.offFrame + winPulp.rCache.offFrameWrap ] ;
                    if( sttP.idCaste == scOld_PEEwHILEmOVINGoN ) sfd.bPeeWhileMoving ++ ;
                    else                                      sfd.bPeeWhileMoving -- ;
                    winPulp.cacheF( tinP , scOld_PEEwHILEmOVINGoN ) ;
                    break ;
                }
                case scOld_PUSHrIPPLESoNLYoN :
                case scOld_PUSHrIPPLESoNLYoFF :
                {
                    boolT bRipplesOnly = !!( F(winPulp.flagsMode) & flPULPmODE_RIPPLESoNLY ) ;

                    winPulp.stqr_bRipplesOnlyUnder << bRipplesOnly ;
                    if( sttP.idCaste == scOld_PUSHrIPPLESoNLYoN ) winPulp.flagsMode |=      flPULPmODE_RIPPLESoNLY    ;
                    else                                       winPulp.flagsMode &= ~( F(flPULPmODE_RIPPLESoNLY) ) ;
                    break ;
                }
                case scOld_POPrIPPLESoNLYoFFoN :
                {
                    if( winPulp.stqr_bRipplesOnlyUnder )
                    {
                        ZE( boolT , bRipplesOnly ) ;
                        winPulp.stqr_bRipplesOnlyUnder >> bRipplesOnly ;
                        if( bRipplesOnly ) winPulp.flagsMode |=      flPULPmODE_RIPPLESoNLY    ;
                        else               winPulp.flagsMode &= ~( F(flPULPmODE_RIPPLESoNLY) ) ;
                    }
                    break ;
                }
                case scOld_FRAMEaTTACH :
                case scOld_FRAMEdETACH :
                {
                    winPulp.stqr_flagsRenderUnder << winPulp.flagsRender ;

                    if( sttP.idCaste == scOld_FRAMEdETACH ) winPulp.flagsRender |=      flPAPERrENDER_FRAMEdETACHED ;
                    else                                 winPulp.flagsRender &= ~( F(flPAPERrENDER_FRAMEdETACHED) ) ;
                    break ;
                }
                case scOld_OLDCMDpUSHhIGHwATER  : { winPulp.stqr_mIdRowHighWater  << (measureT)-MAXmEASUREt ; break ; }
                case scOld_OLDCMDpUSHlOWwATER   : { winPulp.stqr_mIdRowLowWater   << (measureT) MAXmEASUREt ; break ; }
                case scOld_OLDCMDpUSHrIGHTwATER : { winPulp.stqr_mIdColHighWater  << (measureT)-MAXmEASUREt ; break ; }
                case scOld_OLDCMDpUSHlEFTwATER  : { winPulp.stqr_mIdColLowWater   << (measureT) MAXmEASUREt ; break ; }
                case scOld_MOVEuPrIGHTfORaDAMfRAME :
                case scOld_MOVEdOWNrIGHTfORaDAMfRAME :
                case scOld_MOVEuPlEFTfORaDAMfRAME :
                case scOld_MOVEdOWNlEFTfORaDAMfRAME :
                {
                    ZE( measureT , mCols ) ;
                    ZE( measureT , mRows ) ;
                    switch( sttP.idCaste )
                    {
                        case scOld_MOVEuPrIGHTfORaDAMfRAME   : { mCols =  ( 1.0 + winPulp.rCache.mColsMarginSadamFrame ) ; mRows =  ( 1.0 + winPulp.rCache.mRowsMarginSadamFrame ) ; break ; }
                        case scOld_MOVEdOWNrIGHTfORaDAMfRAME : { mCols =  ( 1.0 + winPulp.rCache.mColsMarginSadamFrame ) ; mRows = -( 1.0 + winPulp.rCache.mRowsMarginSadamFrame ) ; break ; }
                        case scOld_MOVEuPlEFTfORaDAMfRAME    : { mCols = -( 1.0 + winPulp.rCache.mColsMarginSadamFrame ) ; mRows =  ( 1.0 + winPulp.rCache.mRowsMarginSadamFrame ) ; break ; }
                        case scOld_MOVEdOWNlEFTfORaDAMfRAME  : { mCols = -( 1.0 + winPulp.rCache.mColsMarginSadamFrame ) ; mRows = -( 1.0 + winPulp.rCache.mRowsMarginSadamFrame ) ; break ; }
                    }
        
                    strokeS psttw[ CSpREFIX + 1 ] ;
                    SETpREFIX( psttw , 1 , 0 ) ;
                    psttw[ CSpREFIX ] = S3(mCols,scOld_mmMOVEpEL,mRows) ;

                    if( cTraceOn ) cTraceOn ++ ;
                    renderF( tinP , pulpP , psttw , phCloneP ) ;
                    if( cTraceOn ) cTraceOn -- ;
                    break ;
                }
                case scOld_mMOVEpADlEFT :
                case scOld_mMOVEpADrIGHT :
                case scOld_mMOVEpADdOWN :
                case scOld_mMOVEpADuP :
                {
                    ZE( measureT , mCols ) ;
                    ZE( measureT , mRows ) ;
                    measureT mScale = *(measureT*)&sttP.idAdam ;
                    if( !mScale )
                    {
                        switch( sttP.idCaste )
                        {
                            case scOld_mMOVEpADlEFT  : { mCols = - winPulp.rCache.mPadRight ; break ; }
                            case scOld_mMOVEpADrIGHT : { mCols =   winPulp.rCache.mPadRight ; break ; }
                            case scOld_mMOVEpADdOWN  : { mRows = - winPulp.rCache.mPadUp    ; break ; }
                            case scOld_mMOVEpADuP    : { mRows =   winPulp.rCache.mPadUp    ; break ; }
                        }
                    }
                    else
                    {
                        switch( sttP.idCaste )
                        {
                            case scOld_mMOVEpADlEFT  : { mCols = - winPulp.rCache.mPadRight * mScale ; break ; }
                            case scOld_mMOVEpADrIGHT : { mCols =   winPulp.rCache.mPadRight * mScale ; break ; }
                            case scOld_mMOVEpADdOWN  : { mRows = - winPulp.rCache.mPadUp    * mScale ; break ; }
                            case scOld_mMOVEpADuP    : { mRows =   winPulp.rCache.mPadUp    * mScale ; break ; }
                        }
                    }
        
                    strokeS psttw[ CSpREFIX + 1 ] ;
                    SETpREFIX( psttw , 1 , 0 ) ;
                    psttw[ CSpREFIX ] = S3(mCols,scOld_mmMOVEpEL,mRows) ;

                    if( cTraceOn ) cTraceOn ++ ;
                    renderF( tinP , pulpP , psttw , phCloneP ) ;
                    if( cTraceOn ) cTraceOn -- ;
                    break ;
                }
                case scOld_POPcLIP :
                {
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        if( winPulp.stqr_paperOldClip )
                        {
                            {
                                count5S c5p ;
                                byteT* pbp = (byteT*)&c5p ;
                                winPulp.stqr_paperOldClip >> pbp ;
                                BOS( WHATgbo , BOSoK , DeleteObject( HRGN( c5p.c1 ) ) )
                                BOSpOOP
                            }
                    
                            BOSdOnOTtEST( WHATgbo , ExtSelectClipRgn( (HDC)winPulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , 0 , RGN_COPY ) )
                    
                            countT cElts = winPulp.stqr_paperOldClip ;
                            for( countT ids = 1 ; ids <= cElts ; ids ++ )
                            {
                                count5S& c5p = *(count5S*)&winPulp.stqr_paperOldClip[ ids ] ;
                                BOSdOnOTtEST( WHATgbo , ExtSelectClipRgn( (HDC)winPulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , HRGN( c5p.c1 ) , RGN_AND ) )
                            }
                        }
                    }
                    break ;
                }
                case scOld_POPcOLOR :
                {
                    if( winPulp.stqr_color )
                    {
                        count3S c3c ;
                        byteT* pbc = (byteT*)&c3c ;
                        winPulp.stqr_color >> pbc ;
                        if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                        {
                            BOSdOnOTtEST( WHATgbo , SelectObject( (HDC)winPulp.pHndDrawBitmap->osF( ifcIDtYPEhANDLE_DRAWpRIVATE ) , HPEN( c3c.c1 ) ) )
                            countT oshOldVerify = tinP.brcRaw ;
                            if( oshOldVerify != c3c.c2 ) { BLAMMO ; } //U::O: COMMENT THIS OUT IN PRODUCTION
                            BOS( WHATgbo , BOSoK , DeleteObject( HPEN( c3c.c2 ) ) )
                            BOSpOOP
                            c3c.c2 = 0 ;
                        }
                    }
                    
                    break ;
                }
                case scOld_POPpAPERoVERRIDE :
                {
                    popPaperDrawOverrideF( tinP , pulpP , F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ) ;
                    break ;
                }
                case scOld_TRACEoN :
                {
                    cTraceOn ++ ;
                    TRACEtITLEiF
                    TRACEiF
                    break ;
                }
                case scOld_TRACEoFF :
                {
                    cTraceOn -- ;
                    LOGrAW( "\r\n" ) ;
                    break ;
                }
                case scOld_NOTESoN :
                case scOld_NOTESoFF :
                {
                    winPulp.stqr_flagsRenderUnder << winPulp.flagsRender ;

                    if( sttP.idCaste == scOld_NOTESoN ) winPulp.flagsRender |=      flPAPERrENDER_NOTES ;
                    else                            winPulp.flagsRender &= ~( F(flPAPERrENDER_NOTES) ) ;
                    break ;
                }
                case scOld_DISCARDnOTEsET :
                {
                    countT cPlates    = winPulp.stqr_notes ;
                    countT cPlatesSet = !cPlates ? 0 : 1 + (countT)*(measureT*)&winPulp.stqr_notes[ 1 ] ;

                    if( cTraceOn )
                        { TN( tSay , "" ) ; tSay = T("there are ")+TF1(cPlates)+T(" notes before i discard ")+TF1(cPlatesSet) ; LOGrAW( tSay ) ; }

                    if( cPlates && cPlatesSet <= cPlates )
                    {
                        while( cPlatesSet -- )
                        {
                            ZE( countT , cnu ) ;
                            winPulp.stqr_notes >> cnu ;
                        }
                    }
        
                    break ;
                }
                //SEPARATE case CLAUSE FOR EACH CMD VALUE THAT PUSHES TO winPulp.stqr_flagsRenderUnder (I.E. EACH flPAPERrENDER_ FLAG)
                case scOld_POPfRAMEdETACH :
                case scOld_POPnOTESoNoFF :
                {
                    if( winPulp.stqr_flagsRenderUnder ) { winPulp.flagsRender = 0 ; winPulp.stqr_flagsRenderUnder >> winPulp.flagsRender ; }
                    break ;
                }
                case scOld_POPiF :
                {
                    if( winPulp.stqr_if > 1 ) { ZE( countT , cFoo ) ; winPulp.stqr_if >> cFoo ; }
                    break ;
                }
                case scOld_ELSE :
                {
                    boolT& bIf = winPulp.stqr_if[ 1 ] ;
                    bIf = !bIf ;
                    break ;
                }
                case scOld_cLOGrENDER :
                {
                    //TN( tSay , "" ) ; tSay = T("\"")+T((osTextT*)sttP.idAdam)+T("\"\r\n") ;
                    //LOGrAW( tSay ) ;
                    break ;
                }
                case scOld_cLOGwINDOWpOSITION :
                {
                    //TN( tSay , "" ) ; tSay = T("scOld_cLOGwINDOWpOSITION (mIdCol,mIdRow): ")+TF1(winPulp.mIdColNow)+T(" ")+TF1(winPulp.mIdRowNow)+T(" \"")+T((osTextT*)sttP.idAdam)+T("\"\r\n") ;
                    //LOGrAW( tSay ) ;
                    break ;
                }
                case scOld_cLOGsTROKINGfRAME :
                {
                    strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                    measureT mIdColTo = sf.mIdCol - 1.0 + sf.mCols ;
                    measureT mIdRowTo = sf.mIdRow - 1.0 + sf.mRows ;
                    //TN( tSay , "" ) ; tSay = T("scOld_cLOGsTROKINGfRAME (offFrame,cFrames,mIdCol,mIdRow,mCols,mRows,mIdColTo,mIdRowTo): ")+TF1(winPulp.rCache.offFrame)+T(" ")+TF1(winPulp.stqr_strokingFrame)+T(" ")+TF1(sf.mIdCol)+T(" ")+TF1(sf.mIdRow)+T(" ")+TF1(sf.mCols)+T(" ")+TF1(sf.mRows)+T(" ")+TF1(mIdColTo)+T(" ")+TF1(mIdRowTo)+T(" ")+T(" \"")+T((osTextT*)sttP.idAdam)+T("\"\r\n") ;
                    //LOGrAW( tSay ) ;

                    break ;
                }
                case scOld_POPtABfRESH :
                {
                    if( winPulp.stqr_flagsModeI_ )
                    {
                        tinP.pAdamGlobal1->_pulpOldC_.flagsMode = 0 ;
                        winPulp.stqr_flagsModeI_ >> tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
                    }
                    break ;
                }
                case scOld_PUSHtABfRESHoFF :
                {
                    winPulp.stqr_flagsModeI_ << tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
                    tinP.pAdamGlobal1->_pulpOldC_.flagsMode |= flPAPERmODEi_SUPPRESStABfRESH ;
                    break ;
                }
                case scOld_PUSHtABfRESHoN :
                {
                    winPulp.stqr_flagsModeI_ << tinP.pAdamGlobal1->_pulpOldC_.flagsMode ;
                    tinP.pAdamGlobal1->_pulpOldC_.flagsMode &= ~( F(flPAPERmODEi_SUPPRESStABfRESH) ) ;
                    break ;
                }
                case scOld_PELSpUSH :
                case scOld_PELSpUSHbACK :
                case scOld_MONOCHROMEpELSpUSH :
                case scOld_MONOCHROMEpELSpUSHbACK :
                {
                    //INTENTIONALLY UNINITIALIZED, FOR SPEED
                    countT idColFrom ;
                    countT idRowFrom ;
                    countT cCols     ;
                    countT cRows     ;
                    {
                        strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;
                        measureT mIdColTo = sf.mIdCol - 1.0 + sf.mCols ;
                        measureT mIdRowTo = sf.mIdRow - 1.0 + sf.mRows ;
                        countT idColTo   = R( mIdColTo  ) ;
                        countT idRowTo   = R( mIdRowTo  ) ;

                        idColFrom = R( sf.mIdCol ) ;
                        idRowFrom = R( sf.mIdRow ) ;
                        cCols = 1 + idColTo - idColFrom ;
                        cRows = 1 + idRowTo - idRowFrom ;
                    }
        
                    if( F(winPulp.flagsRender) & flPAPERrENDER_NOTES )
                    {
                        /*.7.*/ winPulp.stqr_notes << (measureT)cRows ;
                        /*.6.*/ winPulp.stqr_notes << (measureT)cCols ;
                        /*.5.*/ winPulp.stqr_notes << (measureT)( idRowFrom - 1 + cRows ) ;
                        /*.4.*/ winPulp.stqr_notes << (measureT)( idColFrom - 1 + cCols ) ;
                        /*.3.*/ winPulp.stqr_notes << (measureT)idRowFrom ;
                        /*.2.*/ winPulp.stqr_notes << (measureT)idColFrom ;
                        /*.1.*/ winPulp.stqr_notes << (measureT)6 ; //NUMBER OF PLATES PUSHED

                        if( cTraceOn ) { TN( tSay , "" ) ; tSay = T("pushing (")+TF1(cCols)+T(",")+TF1(cRows)+T(") (cols,rows) starting at (")+TF1(idColFrom)+T(",")+TF1(idRowFrom)+T(") ; there are ")+TF1(winPulp.stqr_notes)+T(" notes after i pushed 7 ; ") ; LOGrAW( tSay ) ; }
                    }

                    flagsT flagsd = F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ;
                    if( sttP.idCaste == scOld_MONOCHROMEpELSpUSH || sttP.idCaste == scOld_MONOCHROMEpELSpUSHbACK ) flagsd |= flDRAW_MONOCHROMEbITMAP ;
                    if( !( F(flagsd) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
                    {
                        staqC* pStq    = sttP.idCaste == scOld_PELSpUSH ? &winPulp.stqPelsPaper : &stqPelsBack ;
                
                        *pStq << (byteT*)0 ;
                
                        if( F(flagsd) & flDRAW_MONOCHROMEbITMAP ) new( 0 , tinP , (byteT*)&(*pStq)[ 1 ] , sizeof( bitmapOldC ) ) bitmapOldC( tinP , ether               , cCols , cRows ) ;
                        else                                      new( 0 , tinP , (byteT*)&(*pStq)[ 1 ] , sizeof( bitmapOldC ) ) bitmapOldC( tinP , ether , hDrawWindow , cCols , cRows ) ;
                
                        bitmapOldC& bitmap = *(bitmapOldC*)&(*pStq)[ 1 ] ;
                        const measureT mColDevice = mIdColOrigin + idColFrom ;
                        const measureT mRowDevice = mIdRowOrigin + idRowFrom ;
                        thirdC::winBitBltIF( tinP , ifcIDtYPEpAINT_OPAQUE , bitmap , *winPulp.pHndDrawBitmap , cCols , cRows , 1.0 , 1.0 , mColDevice , mRowDevice ) ;
                    }

                    break ;
                }
                case scOld_PELSpOP :
                case scOld_PELSpOPbACK :
                {
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        staqC* pStq = sttP.idCaste == scOld_PELSpOP ? &winPulp.stqPelsPaper : &stqPelsBack ;
                        if( pStq && *pStq )
                        {
                            byteT pbBitmap[ sizeof( bitmapOldC ) ] ;
                            *pStq >> pbBitmap ;
                
                            bitmapOldC* pBitmap = (bitmapOldC*)pbBitmap ;
                            DELzOMBIE( pBitmap ) ;
                        }
                    }
                    break ;
                }
                case scOld_cPELSdRAW :
                case scOld_cPELSdRAWbACK :
                {
                    countT idPlate = sttP.idAdam ? sttP.idAdam : 1 ;
                    if( !( F(winPulp.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
                    {
                        staqC* pStq = sttP.idCaste == scOld_cPELSdRAW ? &winPulp.stqPelsPaper : &stqPelsBack ;
                        if( pStq && idPlate <= *pStq )
                        {
                            bitmapOldC& bitmap = *(bitmapOldC*)&(*pStq)[ idPlate ] ;
                
                            countT cCols = ((HANDLEaPPnOTEScOUNTcLASS&)(handleC&)bitmap).c1 ;
                            countT cRows = ((HANDLEaPPnOTEScOUNTcLASS&)(handleC&)bitmap).c2 ;
                
                            thirdC::winBitBltIF( tinP , ifcIDtYPEpAINT_XOR , *winPulp.pHndDrawBitmap , bitmap , cCols , cRows , mIdColOrigin + winPulp.mIdColNow , mIdRowOrigin + winPulp.mIdRowNow , 1.0 , 1.0 ) ; //THIS LINE MIGHT HIT THE ROW ABOVE AND/OR THE COL TO THE RIGHT OF THE CURRENT STROKING FRAME, BECAUSE THE RENDERED STROKING FRAMES CAN VARY IN SIZE DUE TO ROUNDING
                        }
                    }
                    break ;
                }
                case scOld_PELSpUSHbEGIN :
                {
                    break ;
                }
                case scOld_PELSpUSHeND :
                {
                    break ;
                }
                case scOld_PELSpUSHeNDbACK :
                {
                    break ;
                }
                case scOld_DRAWoNnORMALdEVICE :
                {
                    backDrawOnNormalDeviceF( tinP , pulpP ) ;
                    break ;
                }
                case scOld_DRAWoNsCRATCHdEVICE :
                {
                    backDrawOnScratchDeviceF( tinP , pulpP ) ;
                    break ;
                }
                case scOld_DRAWoNnULLdEVICE :
                {
                    backDrawOnNullDeviceF( tinP , pulpP ) ;
                    break ;
                }
                case scOld_cSCRATCHbITMAPpOP :
                {
                    backScratchBitmapPopF( tinP , pulpP , sttP.idAdam ) ;
                    break ;
                }
                case scOld_cBEEP :
                {
                    countT hz = sttP.idAdam ? sttP.idAdam : TUCK ;
                    ether.beeClickF( tinP , hz ) ;
                    break ;
                }
                case scOld_cCALCpUSHrAMlAYER : //U:: allocates idAdam countT objects, accessed using 1-based indexing; index 0 contains number of elements allocated
                {
                    ZE( countT* , pcElts ) ;
                    ether.newF( tinP , LF , pcElts , 1 + sttP.idAdam ) ; ___( pcElts ) ;
                    if( pcElts )
                    {
                        pcElts[ 0 ] = sttP.idAdam ;
                        winPulp.stqRam << (countT)pcElts ;
                    }

                    break ;
                }
                case scOld_CALCpOPrAMlAYER :
                {
                    if( winPulp.stqRam )
                    {
                        ZE( countT* , pcElts ) ;
                        winPulp.stqRam >> *(countT*)&pcElts ;

                        if( F(winPulp.flagsRender) & flPAPERrENDER_NOTES )
                        {
                            const countT cElts = pcElts[ 0 ] ;

                            for( countT off = cElts ; off ; off -- ) winPulp.stqr_notes << pcElts[ off ] ;
                            winPulp.stqr_notes << cElts ; //NUMBER OF PLATES PUSHED

                            if( cTraceOn ) { TN( tSay , "" ) ; tSay = T("there are ")+TF1(winPulp.stqr_notes)+T(" notes after i pushed ")+TF1(cElts+1) ; LOGrAW( tSay ) ; }
                        }

                        ether.delF( tinP , pcElts ) ;
                    }
                    break ;
                }
                case scOld_CALCoP1lITERAL :     { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_LITERAL1) ; break ; }
                case scOld_CALCoP1rAM :         { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_RAM1)     ; break ; }
                case scOld_CALCoP2lITERAL :     { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_LITERAL2) ; break ; }
                case scOld_CALCoP2rAM :         { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_RAM2)     ; break ; }
                case scOld_CALCfORMATcOUNT :    { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_COUNT)    ; break ; }
                case scOld_CALCoP1fORMATcOUNT : { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_COUNT1)   ; break ; }
                case scOld_CALCoP2fORMATcOUNT : { winPulp.flagsRenderCalcNoPush |= F(flPAPERrENDERcALCnOpUSH_COUNT2)   ; break ; }
                case scOld_DEBUG : //THIS IS JUST FOR DEBUG CONVENIENCE
                {
                    strokingFrameS& sf = *(strokingFrameS*)&winPulp.stqr_strokingFrame[ 1 + winPulp.rCache.offFrame ] ;

                    bDebugOn = !bDebugOn ;
                    //LOGrAWtID2( "bDebugOn is now " , bDebugOn ) ;

                    bDebug = !bDebug ;

                    break ;
                }
            }
        }

        if( cTraceOn && sttP.idCaste != sc_cADAM && processGlobal1I.ostLathLog != '\n' ) { LOGrAW( "                " ) ; winPulp.logStrokeF( tinP , sttP ) ; LOGrAW( "\r\n" ) ; }

        if( cTraceOn == 1 && sttP.idCaste == scOld_DEBUG && !bRetainTrace ) cTraceOn = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e020.windowoldc.renderf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e021.windowoldc.pushf BEGIN
#define DDNAME       "3func.3602e021.windowoldc.pushf"
#define DDNUMB      (countT)0x3602e021
#define IDFILE      (countT)0x10b1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::pushF( tinS& tinP , staqC& staqP , const strokeS& sttP , const countT caseP , winPulpOldC& winPulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    strokeS sttw = sttP ;
    winPulpP.overrideF( tinP , sttw ) ;
    if( cTraceOn ) winPulpP.logStrokeF( tinP , sttw ) ;

    staqP << sttw.idAdam ;
    winPulpP.cacheF( tinP , caseP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e021.windowoldc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e022.windowoldc.popf BEGIN
#define DDNAME       "3func.3602e022.windowoldc.popf"
#define DDNUMB      (countT)0x3602e022
#define IDFILE      (countT)0x10b2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::popF( tinS& tinP , staqC& staqP , const countT caseP , const countT cbP , winPulpOldC& winPulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    byteT pb01[ 0x10 ] ;
    if( cbP > sizeof pb01 ) { BLAMMO ; } //U::COMMENT OUT IN PRODUCTION FOR SPEED

    byteT* pb_object = pb01 ;

    if( staqP ) staqP >> pb_object ;

    //else if( cTraceOn ) { LOGrAW( "nothing to pop" ) ; }
    winPulpP.cacheF( tinP , caseP ) ;
    //if( cTraceOn )
    //{
    //    if( cbP == sizeof( countT ) ) { TN( tSay , "" ) ; tSay = TF1(*(countT*)pb01)+T(" (")+TF1(*(measureT*)pb01)+T(") ") ; LOGrAW( tSay ) ; }
    //    else if( cbP == sizeof( strokeS ) ) winPulpP.logStrokeF( tinP , *(strokeS*)pb01 ) ;
    //    else
    //    {
    //        ZE( strokeS* , psttd ) ;
    //        etherC& er = etherC::etRockIF( tinP ) ;
    //        er.strDumpIF( tinP , psttd , pb01 , cbP ) ; ___( psttd ) ;
    //        LOGrAW( T(psttd) ) ;
    //        er.delF( tinP , psttd ) ;
    //    }
    //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e022.windowoldc.popf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e023.windowoldc.duplicatef BEGIN
#define DDNAME       "3func.3602e023.windowoldc.duplicatef"
#define DDNUMB      (countT)0x3602e023
#define IDFILE      (countT)0x10b3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::duplicateF( tinS& tinP , staqC& staqP , const strokeS& sttP , const countT caseP , winPulpOldC& winPulpP )/*1*/
{
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( cTraceOn ) winPulpP.logStrokeF( tinP , sttP ) ;

    staqP << staqP[ sttP.idAdam ] ;
    winPulpP.cacheF( tinP , caseP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e023.windowoldc.duplicatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e024.windowoldc.moveorlinetransformedf BEGIN
#define DDNAME       "3func.3602e024.windowoldc.moveorlinetransformedf"
#define DDNUMB      (countT)0x3602e024
#define IDFILE      (countT)0x10b4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT windowOldC::moveOrLineTransformedF( tinS& tinP , winPulpOldC& winPulpP )/*1*/
{
    if( winPulpP.idLineType )
    {
        //measureT mRow = winPulpP.mIdRowNow - winPulpP.mIdRowTransformAnchor ; //U:PLAY TRANSFORM: MIRROR HORIZONTALLY AT THE BASELINE
        //winPulpP.mIdRowNow   = winPulpP.mIdRowTransformAnchor - mRow ;

        transformHotAngleF( tinP , winPulpP.mIdColNow , winPulpP.mIdRowNow , winPulpP ) ;
        winPulpP.newWaterF( winPulpP.mIdColNow , winPulpP.mIdRowNow ) ;
        {
            flagsT flagsl = F(winPulpP.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ? flDRAW_SUPPRESSpELcOLORcHANGES : flDRAW_null ;
            if( winPulpP.idLineType == 2 ) flagsl |= flDRAW_INCLUDEeNDpEL ;
            if( !( F(flagsl) & flDRAW_SUPPRESSpELcOLORcHANGES ) )
            {
                winPulpOldC& pulp = *(winPulpOldC*)&winPulpP ;
                const measureT mColDevice = mIdColOrigin + winPulpP.mIdColNow ;
                const measureT mRowDevice = mIdRowOrigin + winPulpP.mIdRowNow ;
                thirdC::winLineIF( tinP , *pulp.pHndDrawBitmap , mColDevice , mRowDevice , pulp.colorF() , flagsl ) ;
            }
        }
    }
    else
    {
        //measureT mRow = winPulpP.mIdRowNow - winPulpP.mIdRowTransformAnchor ; //U:PLAY TRANSFORM: MIRROR HORIZONTALLY AT THE BASELINE
        //winPulpP.mIdRowNow = winPulpP.mIdRowTransformAnchor - mRow ;

        transformHotAngleF( tinP , winPulpP.mIdColNow , winPulpP.mIdRowNow , winPulpP ) ;

        if( winPulpP.rCache.bPeeWhileMoving ) winPulpP.newWaterF( winPulpP.mIdColNow , winPulpP.mIdRowNow ) ;
        if( !( F(winPulpP.flagsMode) & flPULPmODE_SUPPRESSpELcOLORcHANGES ) )
        {
            winPulpOldC& pulp = *(winPulpOldC*)&winPulpP ;
            const measureT mColDevice = mIdColOrigin + winPulpP.mIdColNow ;
            const measureT mRowDevice = mIdRowOrigin + winPulpP.mIdRowNow ;
            thirdC::winMoveIF( tinP , *pulp.pHndDrawBitmap , mColDevice , mRowDevice ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e024.windowoldc.moveorlinetransformedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e025.windowoldc.transformhotanglef BEGIN
#define DDNAME       "3func.3602e025.windowoldc.transformhotanglef"
#define DDNUMB      (countT)0x3602e025
#define IDFILE      (countT)0x10b5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// tinS& tinP PARAMETER INTENTIONALLY OMITTED, FOR MAX SPEED
// tinP ADDED PROVISIONALLY DURING PREPARATION FOR PORT TO LINUX, WHICH INVOLVED ADDING tinP PARAMETER TO THE MATH FUNCTIONS AND OTHER FUNCTIONS IN ORDER TO MAKE THE CODE MORE CONFORMANT AND TO ENABLE THE USE OF THE BOS() MACROS FOR ALL THIRD PARTY CALLS

/*1*/voidT windowOldC::transformHotAngleF( tinS& tinP , measureT& colP , measureT& rowP , winPulpOldC& winPulpP )/*1*/
{
    if( F(winPulpP.flagsMode) & flPULPmODE_TRANSFORMaTaNGLE )
    {
        //U::OPTIMIZE FOR SPEED AFTER DEBUGGING/UNDERSTANDING

        measureT mCol = colP - winPulpP.mIdColTransformAnchor ;
        measureT mRow = rowP - winPulpP.mIdRowTransformAnchor ;
        if( mCol || mRow )
        {
            measureT mLen      = thirdC::mathSqrtIF( tinP , mCol * mCol + mRow * mRow ) ;
            measureT mOsAngle1 = thirdC::mathAtanIF( tinP , mCol , mRow ) ;

            measureT mColRay = winPulpP.mCosHotAngle ;
            measureT mRowRay = winPulpP.mSinHotAngle ;

            measureT mOsAngleT = thirdC::mathAtanIF( tinP , mColRay , mRowRay ) ;
            measureT mOsAngle2 = mOsAngle1 + mOsAngleT /*+ PI / 2*/ ;
            colP = thirdC::mathCosIF( tinP , mOsAngle2 ) ;
            rowP = thirdC::mathSinIF( tinP , mOsAngle2 ) ;
            colP *= mLen ;
            rowP *= mLen ;
            colP += winPulpP.mIdColTransformAnchor ;
            rowP += winPulpP.mIdRowTransformAnchor ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602e* : 3func.3602e025.windowoldc.transformhotanglef END
