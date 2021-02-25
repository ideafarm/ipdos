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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ae* : 3func.360ae002.processglobal1s.dt_processglobal1s BEGIN
#define DDNAME       "3func.360ae002.processglobal1s.dt_processglobal1s"
#define DDNUMB      (countT)0x360ae002
#define IDFILE      (countT)0x137e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/processGlobal1S::~processGlobal1S( voidT )/*1*/
{
    //if( this == &processGlobal1I )
    //{
    //    TINSL
    //
    //    tellInfoSysProcessGlobal1S ti ;
    //    ti.osPid        = tinP.osPid ;
    //    ti.pbEarlyGrain = pbEarlyGrain ;
    //    ti.cGrains      = TOCK >> 1 ;
    //    TELLsYSc3( ifcIDtYPEtELLsYS_PROCESSgLOBAL1sdT , (byteT*)&ti , sizeof ti )
    //}

    #if defined( __NT__ )

        //thirdC::openSsl_shutdownIF() ;

        ZE( countT , _brcRaw ) ;

        BOSnOtIN( FreeLibrary( zlib_hModule ) )
        if( !_brcRaw ) { BLAMMO ; }

        BOSnOtIN( FreeLibrary( openSsl_hModule ) )
        if( !_brcRaw ) { BLAMMO ; }

    #endif
    idPhaseProcess = ifcIDpHASEpROCESS_EPILOGaLLgLOBALSdESTROYED ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ae* : 3func.360ae002.processglobal1s.dt_processglobal1s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ae* : 3func.360ae003.processglobal1s.processglobal1s BEGIN
#define DDNAME       "3func.360ae003.processglobal1s.processglobal1s"
#define DDNUMB      (countT)0x360ae003
#define IDFILE      (countT)0x137f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

const osTextT* const processGlobal1S::_handleC_postOldClassName = "handleC" ;

flagsT processGlobal1S::pcValidFlags[] =
{
    #include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.1900000b.genValidFlags.h"
}
;

osTextT processGlobal1S::postIdNumaNode[ 0x9 ] = { 0 , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' } ;

osTextT processGlobal1S::postIdAdamRoot[ 0x9 ] = { 0 , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' } ;

osTextT processGlobal1S::postIdHome[ 0x9 ] = { 0 , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' } ;

countT processGlobal1S::pcPrime[] = { 0x11 , 0x13 , 0x17 , 0x1d , 0x1f , 0x25 , 0x29 , 0x2b , 0x2f , 0x35 , 0x3b , 0x3d , 0x43 , 0x47 , 0x49 , 0x4f } ;

byteT processGlobal1S::pbnuTuck[ TUCK ] ;

/*1*/processGlobal1S::processGlobal1S( voidT ) :/*1*/
_displayC_pDisplay( 0 ) ,
_grabC_cgw( TOCK ) , //GLOBALS WON'T CT WITH LESS THAN TOCK
_grabC_pgw( 0 ) ,
_poolC_pPool( 0 ) ,
_poolC_cBacked( 0 ) ,
_poolC_idFlushLath( 0 ) ,
_poolC_bQuitFlushing( 0 ) ,
_handleC_cInstances( 0 ) ,
_taskS_idThreadLath( 3 ) , //1:main 2:heart 3:break
_thirdC_flagsModeProcess1( flMODEpROCESS1_JOT ) ,
_thirdC_flagsModeProcess2( flMODEpROCESS2_null ) ,
_thirdC_flagsProcessState( flPROCESSsTATE_MAINtHREADiSaLONE ) ,
_tinS_idTinLath( 0 ) ,
//bGo( 0 ) ,
cb_idPortTimeC_( sizeof( idPortTimeC ) ) ,
cb_nicNameC_( sizeof( nicNameC ) ) ,
ccPrime( sizeof pcPrime / sizeof pcPrime[ 0 ] ) ,
ccValidFlags( sizeof pcValidFlags / sizeof pcValidFlags[ 0 ] ) ,
cDebug( 0 ) ,
flCt( flCTdTg_null ) ,
flDt( flCTdTg_null ) ,
idAdamRoot( 0 ) ,
idHome( 1 ) ,
idNumaNode( 0 ) ,
idProcessOld( 0 ) ,
idPhaseProcess( ifcIDpHASEpROCESS_PROLOGcONSTRUCTINGgLOBALS ) ,
idTrial( 0 ) ,
osTidMain( 0 ) ,
osTidTerminator( 0 ) ,
ostLathLog( 0 ) ,
flagsCpuFeatures( queryCpuFeaturesAM() ) ,
cbAllocationGrain( TOCK ) ,
idLineBlammo( 0 ) ,
idiFileBlammo( 0 ) ,
idLineBlammoCt( 0 ) ,
idiFileBlammoCt( 0 ) ,
idBlammo( 0 ) ,
openSsl_hModule( 0 ) ,
openSsl_pMethodF( 0 ) ,
openSsl_pInitF( 0 ) ,
openSsl_pContextF( 0 ) ,
openSsl_pContextFreeF( 0 ) ,
openSsl_pWrapperF( 0 ) ,
openSsl_pWrapperFreeF( 0 ) ,
openSsl_pWrapF( 0 ) ,
openSsl_pShakeAsServerF( 0 ) ,
openSsl_pShakeAsClientF( 0 ) ,
openSsl_pWriteF( 0 ) ,
openSsl_pReadF( 0 ) ,
openSsl_pPeekF( 0 ) ,
openSsl_pWaveByeF( 0 ) ,
openSsl_pPemFileCertF( 0 ) ,
openSsl_pPemFileKeyF( 0 ) ,
openSsl_pCurvesF( 0 ) ,
zlib_hModule( 0 ) ,
zlib_pDeflateInitF( 0 ) ,
zlib_pDeflateF( 0 ) ,
zlib_pDeflateEndF( 0 ) ,
zlib_pInflateInitF( 0 ) ,
zlib_pInflateInit2F( 0 ) ,
zlib_pInflateF( 0 ) ,
zlib_pInflateEndF( 0 )
{
    if( this != &processGlobal1I ) { BLAMMO ; }

    {
        //TINSL
        //
        //#if defined( __NT__ )
        //
        //    {
        //        countT ci = sizeof( PSAPI_WORKING_SET_EX_INFORMATION ) ;
        //        if( ci != sizeof( count04T ) )
        //        {
        //            LOGrAW3( "error: unexpected size [sizeof(PSAPI_WORKING_SET_EX_INFORMATION)]: ]: " , sizeof( PSAPI_WORKING_SET_EX_INFORMATION ) , "\r\n" ) ;
        //            BLAMMO ;
        //        }
        //    }
        //
        //    PSAPI_WORKING_SET_EX_INFORMATION* pInfoGrain = (PSAPI_WORKING_SET_EX_INFORMATION*)pcInfoGrain ;
        //
        //    CONoUTrAW( "\r\n\r\nAddress Space Usage (ct processGlobal1I):\r\n\r\n" ) ;
        //
        //    ZE( countT , cbGrain ) ;
        //    {
        //        SYSTEM_INFO info ;
        //        GetSystemInfo( &info ) ;
        //        cbGrain = info.dwAllocationGranularity ;
        //    }
        //
        //    if( cbAllocationGrain != cbGrain ) { BLAMMO ; }
        //    CONoUTrAW3( "[cbGrain]: " , cbGrain , "\r\n" ) ;
        //    ZE( countT , idColLath ) ;
        //    countT offg = -1 ;
        //    for( byteT* pbTry = 0 ; pbTry < (byteT*)BM_HIGH ; pbTry += cbGrain )
        //    {
        //        //ZE( boolT , bOk ) ;
        //        //ZE( byteT , bIn ) ;
        //        //thirdC::dosReadProcessMemoryIF( tinP , &bIn , 1 , bOk , (voidT*)pbTry , tinP.osPid ) ;
        //        //
        //        //byteT mask = (byteT)( 1 << ( ++ offg ) % SB ) ;
        //        //if( bOk ) pbEarlyGrain[ offg / SB ] |= mask ;
        //
        //        //CONoUTrAW( bOk ? "0" : "." ) ;
        //        //if( ++ idColLath == TUCK )
        //        //{
        //        //    idColLath = 0 ;
        //        //    CONoUTrAW( "\r\n" ) ;
        //        //}
        //
        //        pInfoGrain[ ++ offg ].VirtualAddress = (voidT*)pbTry ;
        //    }
        //
        //    static BOOL bOk = QueryWorkingSetEx( GetCurrentProcess() , pInfoGrain , sizeof( PSAPI_WORKING_SET_EX_INFORMATION ) * TOCK / 2 ) ;
        //
        //    //B:static BOOL bOk = QueryWorkingSetEx( GetCurrentProcess() , pInfoGrain , sizeof pInfoGrain ) ;
        //
        //    countT rc = bOk ? 0 : GetLastError() ;
        //    CONoUTrAW5( "processGlobal1I / QueryWorkingSetEx [bOk,rc]:    " , bOk , "    " , rc , "\r\n" ) ;
        //
        //#endif

        //U::CAN'T DO THIS EARLY.  DO IT IN processGlobal3S, WHERE THIS CODE WAS BEFORE BEING MOVED HERE
        //{
        //    tellInfoSysProcessGlobal1S ti ;
        //    ti.osPid        = tinP.osPid ;
        //    ti.pbEarlyGrain = pbEarlyGrain ;
        //    ti.cGrains      = TOCK >> 1 ;
        //    TELLsYSc3( ifcIDtYPEtELLsYS_PROCESSgLOBAL1scT , (byteT*)&ti , sizeof ti )
        //}
    }

    ZE( countT , _brcRaw ) ;
    BOSnOtIN( GetCurrentThreadId() )
    osTidMain = _brcRaw ;

    if( !osTidMain ) { BLAMMO ; }
    if( this != &processGlobal1I ) { BLAMMO ; }

    #if defined( __NT__ )

        ecInfo.ExceptionRecord = &eInfo ;
        ecInfo.ContextRecord   = &cInfo ;

        {
            osTextT postDllOpenSsl[ TUCK << 1 ] ;  // EXAMPLE:  POSThHOMEdRIVE ":\\ideafarm.home.12345678\\"
            {
                thirdC::c_strcpyIF( postDllOpenSsl , (osTextT*)thirdC::postExeFileNameIF() ) ;

                osTextT postTestA[] = ":\\ideafarm.home." ;

                osTextT* postA = thirdC::c_strstrIF( postDllOpenSsl , postTestA ) ;

                if( !postA || postA - postDllOpenSsl != 1 ) *postDllOpenSsl = 0 ;
                else
                {
                    osTextT* postBS = thirdC::c_strstrIF( postA + sizeof postTestA - 1  , "\\" ) ;
                    if( !postBS ) *postDllOpenSsl = 0 ;
                    else *( ++ postBS ) = 0 ;
                }
            }

            if( *postDllOpenSsl ) // OPENSSL IS LOADED VERY EARLY SO THAT IT CAN BE USED VERY EARLY ; IT IS LOADED DYNAMICALLY MAINLY BECAUSE OPENSSL HEADERS ARE NOT COMPATIBLE WITH WATCOM COMPILER
            {                     // A POLICY OF NEVER LOADING THIRD PARTY LIBRARIES STATICALLY MIGHT BE A GOOD IDEA TO CONSERVE MEMORY AND SPEED UP PROCESS INITIALIZATION ; IF HUNDREDS OR THOUSANDS OF 3RD PARTY MODULES ARE SUPPORTED THEN DYNAMIC, ON DEMAND LOADING BECOMES NECESSARY, SO MIGHT AS WELL DO THEM ALL THAT WAY, JUST IN CASE SUCH A SCENARIO MATERIALIZES

                //20200613@1930: RETIRED WHEN MIGRATED workshop/openssl TO CONTAIN RELEASE OF OPENSSL BUILT USING CURRENT SOURCE:  thirdC::c_strcatIF( postDllOpenSsl , "precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\dll\\ssleay32.dll" ) ;
                thirdC::c_strcatIF( postDllOpenSsl , "precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin\\libssl-3.dll" ) ; // 20200613@1930

                //CONoUTrAW( postDllOpenSsl ) ;
                //CONoUTrAW( "\r\n" ) ;
                //LOGrAW( "U::TO FIND A BUG, OPENSSL DLL IS NOT LOADED DURING CT OF processGlobal1I:\r\n" ) ;
                //LOGrAW( postDllOpenSsl ) ;
                //LOGrAW( "\r\n\r\n" ) ;

                _brcRaw = 0 ;
                BOSnOtIN( LoadLibraryEx( postDllOpenSsl , 0 , /*LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR*/0x100 | /*LOAD_LIBRARY_SEARCH_DEFAULT_DIRS*/0x1000 ) ) ;
                openSsl_hModule = (HMODULE)_brcRaw ;

                if( !openSsl_hModule )
                {
                    countT rc = GetLastError() ;
                    LOGrAW( "\r\n [postDllOpenSsl]:    " ) ;
                    LOGrAW( postDllOpenSsl ) ;
                    LOGrAW3( "\r\nLoadLibraryEx [rc]:    " , rc , "\r\n" ) ;

                    BLAMMO ;
                }
                else
                {                                                                
                    //20200613@2004: DEPRECATED AND NOT FOUND:  _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSLv23_method"    ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pMethodF      =          (openSsl_pMethodFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "TLS_method"       ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pMethodF      =          (openSsl_pMethodFT)_brcRaw ; 

                    //20200613@2004: DEPRECATED AND NOT FOUND:  _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_library_init" ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pInitF        =            (openSsl_pInitFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "OPENSSL_init_ssl" ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pInitF        =            (openSsl_pInitFT)_brcRaw ; 

                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_CTX_new"                        ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pContextF       =         (openSsl_pContextFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_CTX_free"                       ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pContextFreeF   =     (openSsl_pContextFreeFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_new"                            ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pWrapperF       =         (openSsl_pWrapperFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_free"                           ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pWrapperFreeF   =     (openSsl_pWrapperFreeFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_set_fd"                         ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pWrapF          =            (openSsl_pWrapFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_connect"                        ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pShakeAsClientF =   (openSsl_pShakeAsClientFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_accept"                         ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pShakeAsServerF =   (openSsl_pShakeAsServerFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_write"                          ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pWriteF         =           (openSsl_pWriteFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_read"                           ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pReadF          =            (openSsl_pReadFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_peek"                           ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pPeekF          =            (openSsl_pPeekFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_shutdown"                       ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pWaveByeF       =         (openSsl_pWaveByeFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_CTX_use_certificate_chain_file" ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pPemFileCertF   =     (openSsl_pPemFileCertFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_CTX_use_PrivateKey_file"        ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pPemFileKeyF    =      (openSsl_pPemFileKeyFT)_brcRaw ; 
                    //_brcRaw = 0 ; BOSnOtIN( GetProcAddress( openSsl_hModule , "SSL_CTX_set_ecdh_auto"              ) ) ; if( !_brcRaw ) { BLAMMO ; } ; openSsl_pCurvesF        =          (openSsl_pCurvesFT)_brcRaw ; 
                }

                //thirdC::openSsl_setupIF() ;
            }
        }

        {
            osTextT postDllZlib[ TUCK << 1 ] ;  // EXAMPLE:  POSThHOMEdRIVE ":\\ideafarm.home.12345678\\"
            {
                thirdC::c_strcpyIF( postDllZlib , (osTextT*)thirdC::postExeFileNameIF() ) ;

                osTextT postTestA[] = ":\\ideafarm.home." ;

                osTextT* postA = thirdC::c_strstrIF( postDllZlib , postTestA ) ;

                if( !postA || postA - postDllZlib != 1 ) *postDllZlib = 0 ;
                else
                {
                    osTextT* postBS = thirdC::c_strstrIF( postA + sizeof postTestA - 1  , "\\" ) ;
                    if( !postBS ) *postDllZlib = 0 ;
                    else *( ++ postBS ) = 0 ;
                }
            }

            if( *postDllZlib ) // ZLIB IS LOADED VERY EARLY SO THAT IT CAN BE USED VERY EARLY ; IT IS LOADED DYNAMICALLY MAINLY BECAUSE ZLIB HEADERS ARE NOT COMPATIBLE WITH WATCOM COMPILER
            {                     // A POLICY OF NEVER LOADING THIRD PARTY LIBRARIES STATICALLY MIGHT BE A GOOD IDEA TO CONSERVE MEMORY AND SPEED UP PROCESS INITIALIZATION ; IF HUNDREDS OR THOUSANDS OF 3RD PARTY MODULES ARE SUPPORTED THEN DYNAMIC, ON DEMAND LOADING BECOMES NECESSARY, SO MIGHT AS WELL DO THEM ALL THAT WAY, JUST IN CASE SUCH A SCENARIO MATERIALIZES

                thirdC::c_strcatIF( postDllZlib , "precious\\domains\\com\\ideafarm\\city\\workshop\\zlib\\unzipped.zlib123dll\\dll32\\zlibwapi.dll" ) ;

                _brcRaw = 0 ;
                BOSnOtIN( LoadLibraryEx( postDllZlib , 0 , 0 ) ) ;
                zlib_hModule = (HMODULE)_brcRaw ;

                if( !zlib_hModule ) { BLAMMO ; }
                else
                {                                                                
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "deflateInit_" ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pDeflateInitF  =  (zlib_deflateInitFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "deflate"      ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pDeflateF      =      (zlib_deflateFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "deflateEnd"   ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pDeflateEndF   =   (zlib_deflateEndFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "inflateInit_" ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pInflateInitF  =  (zlib_inflateInitFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "inflateInit2_") ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pInflateInit2F = (zlib_inflateInit2FT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "inflate"      ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pInflateF      =      (zlib_inflateFT)_brcRaw ; 
                    _brcRaw = 0 ; BOSnOtIN( GetProcAddress( zlib_hModule , "inflateEnd"   ) ) ; if( !_brcRaw ) { BLAMMO ; } ; zlib_pInflateEndF   =   (zlib_inflateEndFT)_brcRaw ; 
                }
            }
        }

    #endif
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ae* : 3func.360ae003.processglobal1s.processglobal1s END
