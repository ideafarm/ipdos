//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third BEGIN
#define DDNAME       "1snip.1a000002.includegenmake.base.hide.third"
#define DDNUMB      (countT)0x1a000002
#define IDFILE      (countT)0x86a


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
/*1*//*this includes the base hide flavor of ipdos.h*//*1*/
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.base.hide.third.2.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.1a000002.includeGenMake.base.hide.third : 1snip.1a000002.includegenmake.base.hide.third END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138002.cloudc.dt_cloudc BEGIN
#define DDNAME       "3func.36138002.cloudc.dt_cloudc"
#define DDNUMB      (countT)0x36138002
#define IDFILE      (countT)0x1542


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/cloudC::~cloudC( voidT )/*1*/
{
    TINSL
    SCOOP

    _IO_

    if( F(flagsState) & flCLOUDsTATE_CTkVrEMOTE )
    {
        keyValuePairsC* pbd = (keyValuePairsC*)pb_kvFileMetaByNameRemote ;
        DELzOMBIE( pbd ) ;
    }

    if( F(flagsState) & flCLOUDsTATE_CTkVlOCAL )
    {
        keyValuePairsC* pbd = (keyValuePairsC*)pb_kvFileMetaByNameLocal ;
        DELzOMBIE( pbd ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138002.cloudc.dt_cloudc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138003.cloudc.cloudc BEGIN
#define DDNAME       "3func.36138003.cloudc.cloudc"
#define DDNUMB      (countT)0x36138003
#define IDFILE      (countT)0x1543


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
the depth of local directory nesting that i can accommodate is limited by CsLOTSjOTrEGISTRY
 each recursion consumes 4 slots in the jot registry
*/
/**/

// MOST COMMON WOTH
const osTextT postLook1[] = ".!.transcript."   ;
const osTextT postLook2[] = ".!.note."         ;
const osTextT postLook3[] = ".!.day.title.ttt" ;
const osTextT postLook4[] = ".!.narrative."    ;

boolT bGhostF( tinS& tinP , const osTextT* const postShortP )
{
    return

                                    postShortP               &&
        !thirdC::c_strstrIF( tinP , postShortP , postLook1 ) &&
        !thirdC::c_strstrIF( tinP , postShortP , postLook2 ) &&
        !thirdC::c_strstrIF( tinP , postShortP , postLook3 ) &&
        !thirdC::c_strstrIF( tinP , postShortP , postLook4 )

    ;
}

voidT hasherF( tinS& tinP , etherC& etherP , const boolT& bQuitP , countT& bFailP , countT& cHashersP , const infoFileS* pInfoP , const strokeS* const psttLocalContainerRootP , const strokeS* const psttLocalContainerP , keyValuePairsC& kvP , countT& cFileOrDirDoneP )
{
    IFsCRATCH
    {
        SCOOPS

        etherC& etScratch = *tinP.pEtScratch ;
        etherC& etRock    = etherC::etRockIF( tinP ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        //etRock.traceF( tinP , T("hasherF [idIn]: ")+TF2(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        TN( tIfoName , pInfoP->psttIfoName ) ;
        TN( tSlash , "/" ) ;

        TN( tShort , "" ) ;
        {
            ZE( strokeS* , psttnu ) ;
            ZE( strokeS* , psttShort ) ;
            etherP.strBisectF( tinP , psttnu , psttShort , pInfoP->psttIfoName , tSlash , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttnu ) ; ___( psttShort ) ;
            etherP.delF( tinP , psttnu ) ;
            tShort = T(psttShort) ;
            etherP.delF( tinP , psttShort ) ;
        }

        TN( tPseudoPath , "" ) ;
        {
            __NZ( 1 != etherP.strIdF( tinP , psttLocalContainerRootP , psttLocalContainerP ) ) ;

            if( !POOP && psttLocalContainerRootP->idAdam != psttLocalContainerP->idAdam )
            {
                ZE( strokeS* , psttpp ) ;
                countT idf = psttLocalContainerRootP->idAdam + 1 ;
                ZE( countT , idl ) ;
                etherP.strSubstringF( tinP , psttpp , idf , idl , psttLocalContainerP ) ; ___( psttpp ) ;
                tPseudoPath = T(psttpp) ;
                etherP.delF( tinP , psttpp ) ;
            }
        }
                    
        ZE( osTextT* , postShort ) ;
        countT costShort = etherP.strMakeF( tinP , LF , postShort , tPseudoPath+tShort ) ; ___( postShort ) ;
        for( countT offr = 0 ; offr < costShort ; offr ++ ) postShort[ offr ] = reverseBitsF( postShort[ offr ] ) ;

        if( kvP.queryF( tinP , postShort , 0 , costShort * SB ) )
        {
            inc02AM( cFileOrDirDoneP ) ;
        }
        else
        {
            while( !POOP && !etherP && !bQuitP && !bFailP && !etPrime )
            {
                metaS meta( tinP ) ;
                meta.cbUsed = pInfoP->cbUsed ;

                //OBTAIN md5 HASH
                {
                    fileC fi( tinP , pInfoP->psttIfoName , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , 1 ) ;

                    if( POOP )
                    {
                        POOPR
                        etRock.traceF( tinP , T("cloudC: could not open file to calculate its hash ; will retry after napping 1 tock") ) ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                        continue ;
                    }

                    countT cbChunk = pInfoP->cbUsed < TOCK
                        ? pInfoP->cbUsed
                        : TOCK
                    ;

                    ZE( byteT* , pbBuffer ) ;
                    etherP.newF( tinP , LF , pbBuffer , cbChunk ) ; ___( pbBuffer ) ;
                    __Z( pbBuffer ) ;

                    if( POOP )
                    {
                        POOPR
                        etRock.traceF( tinP , T("cloudC: could not obtain pool drop for hash buffer ; will retry after napping 1 tock") ) ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                        continue ;
                    }

                    countT cDoLo = pInfoP->cbUsed ;
                    countT cDoHi = 0   ;

                    hasherC hasher( tinP , etherP ) ;
                    while( !POOP && ( cDoHi || cDoLo ) )
                    {
                        countT cbNow = cbChunk ;
                        if( !cDoHi && cbNow > cDoLo ) cbNow = cDoLo ;

                        if( cDoLo < cbNow ) cDoHi -- ;
                        cDoLo -= cbNow ;

                        etScratch.fileReadF( tinP , pbBuffer , cbNow , fi ) ;
                        hasher.eatF( tinP , pbBuffer , cbNow ) ;
                    }

                    if( POOP )
                    {
                        POOPR
                        etRock.traceF( tinP , T("cloudC: could not read file to accumulate its hash ; will retry after napping 1 tock") ) ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                        etherP.delF( tinP , pbBuffer ) ;
                        continue ;
                    }

                    hasher.queryF( tinP , (byteT*)meta.pcHashMd5 , sizeof meta.pcHashMd5 ) ;

                    etherP.delF( tinP , pbBuffer ) ;
                }

                if( POOP ) { BLAMMO ; } //SHOULD BE IMPOSSIBLE
                else                    
                {
                    etherP.traceF( tinP , T("localFile : ")+tPseudoPath+tShort , flTRACE_null , ifcIDtRACEdIVERT_8 ) ; //U:: SUPPRESS THIS UNLESS FLAG IS SET BY THE CONSTRUCTOR CALLER

                    kvP.newF( tinP , LF , postShort , 0 , costShort * SB , (byteT*)&meta , sizeof meta ) ;
                    inc02AM( cFileOrDirDoneP ) ;
                    break ;
                }
            }
        }

        etherP.delF( tinP , postShort ) ;
    }
    dec02AM( cHashersP ) ;
}

TASK( tmHasherF )
if( pTaskP && pTaskP->c1 )
{
    countT* pcArgP = (countT*)pTaskP->c1 ;

    etherC&              etherP                  =         *(etherC*)pcArgP[ 0 ] ;
    const boolT&         bQuitP                  =          *(boolT*)pcArgP[ 1 ] ;
    countT&              cFailP                  =         *(countT*)pcArgP[ 2 ] ;
    countT&              cHashersP               =         *(countT*)pcArgP[ 3 ] ;
    const infoFileS*     pInfoP                  =       (infoFileS*)pcArgP[ 4 ] ;
    const strokeS* const psttLocalContainerRootP =   (const strokeS*)pcArgP[ 5 ] ;
    const strokeS* const psttLocalContainerP     =   (const strokeS*)pcArgP[ 6 ] ;
    keyValuePairsC&      kvP                     = *(keyValuePairsC*)pcArgP[ 7 ] ;
    countT&              cFileOrDirDoneP         =         *(countT*)pcArgP[ 8 ] ;

    hasherF( tinP , etherP , bQuitP , cFailP , cHashersP , pInfoP , psttLocalContainerRootP , psttLocalContainerP , kvP , cFileOrDirDoneP ) ;
    DEL( pInfoP ) ;
    etherP.delF( tinP , pcArgP ) ;
}
DONE( tmHasherF )

countT walkToFreshenCBF( tinS& tinP , countT& cArg1P , countT& cArg2P )
{
    jotC&                jotMetaWalkP            =             *(jotC*)(&cArg2P)[ 0x0 ] ;
    cloudC&              cloudP                  =           *(cloudC*)(&cArg2P)[ 0x1 ] ;
    SCOOPO( cloudP )

    const boolT bPull  = F(cloudP.flagsCtF()) & flCLOUDc_REMOTEiSmASTER ;
    const boolT bGhost = F(cloudP.flagsCtF()) & flCLOUDc_GHOST          ;

    __Z( cArg1P ) ;
    if( POOP ) return 0 ;

    const osTextT*       postBufferMP            =     (const osTextT*)(&cArg2P)[ 0x2 ] ;
          osTextT*       postBufferCP            =           (osTextT*)(&cArg2P)[ 0x3 ] ;
    const countT         costBuffersP            =                     (&cArg2P)[ 0x4 ] ;
    keyValuePairsC&      kvFileMetaByNameRemoteP =   *(keyValuePairsC*)(&cArg2P)[ 0x5 ] ;
    keyValuePairsC&      kvFileMetaByNameLocalP  =   *(keyValuePairsC*)(&cArg2P)[ 0x6 ] ;
    cloudUpdateCBFT      pCloudUpdateCBFP        =    (cloudUpdateCBFT)(&cArg2P)[ 0x7 ] ;
    countT*              pcArgUpdateP            =            (countT*)(&cArg2P)[ 0x8 ] ;
    cloudNixCBFT         pCloudNixCBFP           =       (cloudNixCBFT)(&cArg2P)[ 0x9 ] ;
    countT*              pcArgNixP               =            (countT*)(&cArg2P)[ 0xa ] ;
    const strokeS* const psttCloudContainerP     =     (const strokeS*)(&cArg2P)[ 0xb ] ;
    const strokeS* const psttLocalContainerP     =     (const strokeS*)(&cArg2P)[ 0xc ] ;
    soulC&               sStaleFileNameCbUsedP   =            *(soulC*)(&cArg2P)[ 0xe ] ;

    pageC                pageMetaWalk           = jotMetaWalkP[ cArg1P ] ;
    const metaS&         metaWalk               = *(const metaS*)(const byteT*)pageMetaWalk ;

    etherC& etCloud = cloudP ;

    thirdC::c_strcpyIF( tinP , postBufferCP , postBufferMP ) ;

    for( countT offr = 0 ; postBufferMP[ offr ] ; offr ++ ) postBufferCP[ offr ] = reverseBitsF( postBufferMP[ offr ] ) ;

    TN( tShort , "" ) ; tShort = T(postBufferCP) ;

    {
        static countT idInLath ;
        countT idIn = ++ idInLath ;
        if( !( idIn % ( TUCK << 4 ) ) ) etCloud.traceF( tinP , T(bPull?"!remote: ":"!local: ")+TF3(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" ")+tShort ) ;
    }

    boolT bDo = 1 ;
    {
        pageC        pageMetaTo = ( bPull ? kvFileMetaByNameLocalP : kvFileMetaByNameRemoteP )( tinP , postBufferMP , 0 , thirdC::c_strlenIF( tinP , postBufferMP ) * SB ) ;
        const metaS* pMetaTo    = (const metaS*)(const byteT*)pageMetaTo ;

        if( bGhost && bGhostF( tinP , tShort ) )
        {
            if( pMetaTo && !pMetaTo->cbUsed ) bDo = 0 ;
        }
        else
        {
            if( pMetaTo && *pMetaTo == metaWalk ) bDo = 0 ;
        }
    }
    
    if( !POOP && bDo )
    {
        if( !pCloudUpdateCBFP || (*pCloudUpdateCBFP)( tinP , *tinP.pEther , cloudP , tShort , pcArgUpdateP ) )
        {
            //etCloud.traceF( tinP , T("stale:  ")+tShort ) ;

            sStaleFileNameCbUsedP << (strokeS*)tShort ;
            sStaleFileNameCbUsedP << metaWalk.cbUsed ;
        }
    }

    return 0 ;
}

countT walkLocalToNixCBF( tinS& tinP , countT& cArg1P , countT& cArg2P )
{
    jotC&                jotMetaCloudP           =             *(jotC*)(&cArg2P)[ 0x0 ] ;
    cloudC&              cloudP                  =           *(cloudC*)(&cArg2P)[ 0x1 ] ;
    SCOOPO( cloudP )

    __Z( cArg1P ) ;
    if( POOP ) return 0 ;

    const osTextT*       postBufferMP            =     (const osTextT*)(&cArg2P)[ 0x2 ] ;
          osTextT*       postBufferCP            =           (osTextT*)(&cArg2P)[ 0x3 ] ;
    const countT         costBuffersP            =                     (&cArg2P)[ 0x4 ] ;
    keyValuePairsC&      kvFileMetaByNameRemoteP =   *(keyValuePairsC*)(&cArg2P)[ 0x5 ] ;
    keyValuePairsC&      kvFileMetaByNameLocalP  =   *(keyValuePairsC*)(&cArg2P)[ 0x6 ] ;
    cloudUpdateCBFT      pCloudUpdateCBFP        =    (cloudUpdateCBFT)(&cArg2P)[ 0x7 ] ;
    countT*              pcArgUpdateP            =            (countT*)(&cArg2P)[ 0x8 ] ;
    cloudNixCBFT         pCloudNixCBFP           =       (cloudNixCBFT)(&cArg2P)[ 0x9 ] ;
    countT*              pcArgNixP               =            (countT*)(&cArg2P)[ 0xa ] ;
    const strokeS* const psttCloudContainerP     =     (const strokeS*)(&cArg2P)[ 0xb ] ;
    const strokeS* const psttLocalContainerP     =     (const strokeS*)(&cArg2P)[ 0xc ] ;
    const countT         idDoIfDifferP           =                     (&cArg2P)[ 0xd ] ;
    soulC&               sStaleFileNameCbUsedP   =            *(soulC*)(&cArg2P)[ 0xe ] ;
    soulC&               sDoomedFileNamesP       =            *(soulC*)(&cArg2P)[ 0xf ] ;

    pageC                pageMetaCloud           = jotMetaCloudP[ cArg1P ] ;
    const metaS&         metaCloud               = *(const metaS*)(const byteT*)pageMetaCloud ;

    thirdC::c_strcpyIF( tinP , postBufferCP , postBufferMP ) ;

    for( countT offr = 0 ; postBufferMP[ offr ] ; offr ++ ) postBufferCP[ offr ] = reverseBitsF( postBufferMP[ offr ] ) ;

    etherC& etCloud = cloudP ;

    //{
    //    static countT idInLath ;
    //    countT idIn = ++ idInLath ;
    //
    //    flagsT flagst = !( idIn % ( TUCK << 4 ) )
    //        ? flTRACE_NOpREFIX
    //        : flTRACE_NOpREFIX | flTRACE_NOcONSOLE
    //    ;
    //
    //    etCloud.traceF( tinP , T("!cloud: ")+TF3(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" ")+T(postBufferCP) , flagst ) ;
    //}

    {
        static countT idInLath ;
        countT idIn = ++ idInLath ;
        if( !( idIn % ( TUCK << 4 ) ) ) etCloud.traceF( tinP , T("!cloud: ")+TF3(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" ")+T(postBufferCP) ) ;
    }

    const boolT bNixIfNotExist = !!( F(cloudP.flagsCtF()) & flCLOUDc_DELETEiFmASTERnOTeXIST ) ;

    boolT bNix = bNixIfNotExist ;
    {
        pageC        pageMetaLocal  = kvFileMetaByNameLocalP(  tinP , postBufferMP , 0 , thirdC::c_strlenIF( tinP , postBufferMP ) * SB ) ;
        pageC        pageMetaRemote = kvFileMetaByNameRemoteP( tinP , postBufferMP , 0 , thirdC::c_strlenIF( tinP , postBufferMP ) * SB ) ;

        const metaS* pMetaLocal     = (const metaS*)(const byteT*)pageMetaLocal  ;
        const metaS* pMetaRemote    = (const metaS*)(const byteT*)pageMetaRemote ;

        if( bNixIfNotExist )
        {
            if( pMetaRemote                                              ) bNix = !bNix ;
        }
        else
        {
            if( pMetaRemote && pMetaLocal && *pMetaLocal == *pMetaRemote ) bNix = !bNix ;
        }
    }

    if( !POOP && bNix )
    {
        if( !pCloudNixCBFP || (*pCloudNixCBFP)( tinP , *tinP.pEther , cloudP , T(postBufferCP) , pcArgNixP ) )
        {
            sDoomedFileNamesP << (strokeS*)T(postBufferCP) ;
        }
    }

    return 0 ;
}

countT walkRemoteToNixCBF( tinS& tinP , countT& cArg1P , countT& cArg2P )
{
    jotC&                jotMetaCloudP           =             *(jotC*)(&cArg2P)[ 0x0 ] ;
    cloudC&              cloudP                  =           *(cloudC*)(&cArg2P)[ 0x1 ] ;
    SCOOPO( cloudP )

    __Z( cArg1P ) ;
    if( POOP ) return 0 ;

    const osTextT*       postBufferMP            =     (const osTextT*)(&cArg2P)[ 0x2 ] ;
          osTextT*       postBufferCP            =           (osTextT*)(&cArg2P)[ 0x3 ] ;
    const countT         costBuffersP            =                     (&cArg2P)[ 0x4 ] ;
    keyValuePairsC&      kvFileMetaByNameRemoteP =   *(keyValuePairsC*)(&cArg2P)[ 0x5 ] ;
    keyValuePairsC&      kvFileMetaByNameLocalP  =   *(keyValuePairsC*)(&cArg2P)[ 0x6 ] ;
    cloudUpdateCBFT      pCloudUpdateCBFP        =    (cloudUpdateCBFT)(&cArg2P)[ 0x7 ] ;
    countT*              pcArgUpdateP            =            (countT*)(&cArg2P)[ 0x8 ] ;
    cloudNixCBFT         pCloudNixCBFP           = (cloudNixCBFT)(&cArg2P)[ 0x9 ] ;
    countT*              pcArgNixP               =            (countT*)(&cArg2P)[ 0xa ] ;
    const strokeS* const psttCloudContainerP     =     (const strokeS*)(&cArg2P)[ 0xb ] ;
    const strokeS* const psttLocalContainerP     =     (const strokeS*)(&cArg2P)[ 0xc ] ;
    const countT         idDoIfDifferP           =                     (&cArg2P)[ 0xd ] ;
    soulC&               sStaleFileNameCbUsedP   =            *(soulC*)(&cArg2P)[ 0xe ] ;
    soulC&               sDoomedFileNamesP       =            *(soulC*)(&cArg2P)[ 0xf ] ;

    pageC                pageMetaCloud           = jotMetaCloudP[ cArg1P ] ;
    const metaS&         metaCloud               = *(const metaS*)(const byteT*)pageMetaCloud ;

    thirdC::c_strcpyIF( tinP , postBufferCP , postBufferMP ) ;

    for( countT offr = 0 ; postBufferMP[ offr ] ; offr ++ ) postBufferCP[ offr ] = reverseBitsF( postBufferMP[ offr ] ) ;

    etherC& etCloud = cloudP ;

    //{
    //    static countT idInLath ;
    //    countT idIn = ++ idInLath ;
    //
    //    flagsT flagst = !( idIn % ( TUCK << 4 ) )
    //        ? flTRACE_NOpREFIX
    //        : flTRACE_NOpREFIX | flTRACE_NOcONSOLE
    //    ;
    //
    //    etCloud.traceF( tinP , T("!cloud: ")+TF3(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" ")+T(postBufferCP) , flagst ) ;
    //}

    {
        static countT idInLath ;
        countT idIn = ++ idInLath ;
        if( !( idIn % ( TUCK << 4 ) ) ) etCloud.traceF( tinP , T("!cloud: ")+TF3(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" ")+T(postBufferCP) ) ;
    }

    const boolT bNixIfNotExist = !!( F(cloudP.flagsCtF()) & flCLOUDc_DELETEiFmASTERnOTeXIST ) ;

    boolT bNix = bNixIfNotExist ;
    {
        pageC        pageMetaLocal  = kvFileMetaByNameLocalP(  tinP , postBufferMP , 0 , thirdC::c_strlenIF( tinP , postBufferMP ) * SB ) ;
        pageC        pageMetaRemote = kvFileMetaByNameRemoteP( tinP , postBufferMP , 0 , thirdC::c_strlenIF( tinP , postBufferMP ) * SB ) ;

        const metaS* pMetaLocal     = (const metaS*)(const byteT*)pageMetaLocal  ;
        const metaS* pMetaRemote    = (const metaS*)(const byteT*)pageMetaRemote ;

        if( bNixIfNotExist )
        {
            if( pMetaLocal                                               ) bNix = !bNix ;
        }
        else
        {
            if( pMetaLocal && pMetaRemote && *pMetaLocal == *pMetaRemote ) bNix = !bNix ;
        }
    }

    if( !POOP && bNix )
    {
        if( !pCloudNixCBFP || (*pCloudNixCBFP)( tinP , *tinP.pEther , cloudP , T(postBufferCP) , pcArgNixP ) )
        {
            sDoomedFileNamesP << (strokeS*)T(postBufferCP) ;
        }
    }

    return 0 ;
}

voidT walkLocalToLoadKvF( tinS& tinP , etherC& etherP , const boolT& bQuitP , keyValuePairsC& kvP , const strokeS* const psttLocalContainerP , const strokeS* const psttLocalContainerRootP , const strokeS* const psttLikeP , const countT cbMinP , const countT cbMaxP , const flagsT flagsCtP )
{
    etherC& etRock = etherC::etRockIF( tinP ) ;

    etRock.traceF( tinP , T("cloudC: 7 loading kvP from ")+T(psttLocalContainerP) ) ;

    IFsCRATCH
    {
        SCOOPS

        etherC& etScratch = *tinP.pEtScratch ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;

        //const poopC& poopScratch = etScratch ;
        //const countT* pIdPoop = &(const countT&)poopScratch ;
        //etRock.traceF( tinP , T("[pIdPoop]: ")+TF3((countT)pIdPoop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8) ) ;

        TN( tDisk , "" ) ;
        {
            ZE( strokeS* , psttDisk ) ;
            {
                ZE( strokeS* , psttm ) ;
                etherP.diskMapFileNameF( tinP , psttm , psttLocalContainerP ) ; ___( psttm ) ; //THIS SHOULD BE REDUNDANT SINCE cloudC CODE SHOULD ALWAYS BE GIVEN MAPPED FILE NAMES
                countT idf = 1 ;
                countT idl = 5 ;
                etherP.strSubstringF( tinP , psttDisk , idf , idl , psttm ) ; ___( psttDisk ) ;
                etherP.delF( tinP , psttm ) ;
            }
            tDisk = T(psttDisk) ;
            etherP.delF( tinP , psttDisk ) ;
            etRock.traceF( tinP , T("[tDisk]: ")+tDisk ) ;
        }

        TN( tLike  , ""  ) ; tLike = T(psttLocalContainerP)+T("*") ;
        TN( tSlash , "/" ) ;
        TN( tDotSlash , "./" ) ;
        TN( tDotDotSlash , "../" ) ;
        const countT cHashersMax = thirdC::osProcessorsIF( tinP ) << 1 ;
        const boolT bVerify = !( F(flagsCtP) & flCLOUDc_DOnOTvERIFYlOCALlIST ) ;
        etRock.traceF( tinP , T("cloudC when calculating the md5 hash of each local file, i will use up to this many threads [cHashersMax]: ")+TF2(cHashersMax,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        while( !etPrime && !etherP && !bQuitP )  // RETRIES UNTIL SUCCESSFULLY PROCESSES ALL FILES
        {
            ZE( strokeS* , psttu ) ;
            etherP.strUniqueF( tinP , psttu ) ; ___( psttu ) ;

            jotC jotDir1(  tinP , T("walklocal.dir.1." )+T(psttu) , flJOTc_DELETE | flJOTc_WRITE ) ;
            jotC jotFile1( tinP , T("walklocal.file.1.")+T(psttu) , flJOTc_DELETE | flJOTc_WRITE ) ;
            jotC jotDir2(  tinP , T("walklocal.dir.2." )+T(psttu) , flJOTc_DELETE | flJOTc_WRITE ) ;
            jotC jotFile2( tinP , T("walklocal.file.2.")+T(psttu) , flJOTc_DELETE | flJOTc_WRITE ) ;

            etherP.delF( tinP , psttu ) ;

            ZE( boolT , bFail ) ;

            // ***********************************************************************************************    LOAD jotDir jotFile (list of directory names, list of file names)   ***************************************************************

            ZE( countT , cFiles ) ;
            for( countT offPass = 0 ; offPass <= !!bVerify && !bFail ; offPass ++ )
            {
                etRock.traceF( tinP , T("accumulating list ")+T(!offPass?"1 (of 2)":"2 (of 2)")+T(" of file names") ) ;
                countT cFilesRemaining = !offPass ? 0 : cFiles ;

                jotC& jotDir  = !offPass ? jotDir1  : jotDir2  ;
                jotC& jotFile = !offPass ? jotFile1 : jotFile2 ;

                fileNameC fnLike( tinP , etherP , tLike ) ;
                patternC pat( tinP , etherP , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

                handleC hFind( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILEfIND ) ;
                do
                {
                    if( !etScratch.diskIdF( tinP , tDisk ) || POOP )
                    {
                        POOPR
                        bFail ++ ;
                        etRock.traceF( tinP , T("error: while accumulating local file names, could not access ")+tDisk+T(".  will retry after napping 1 tock") ) ; ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                        break ;
                    }

                    ZE( infoFileS* , pInfo ) ;
                    etScratch.diskFindFileOrDirF( tinP , pInfo , hFind , fnLike.pathF() , &pat ) ; //20160814@1946: SILENTLY FAILED.  HOW: DISCONNECT USB CABLE FROM EXTERNAL DRIVE. NO IMPOTENCE; CONJ: JUST RETURNS NULL pInfo OR pInfo->psttIfoName

                    if( !etScratch.diskIdF( tinP , tDisk ) || POOP )
                    {
                        POOPR
                        DEL( pInfo ) ;
                        bFail ++ ;
                        etRock.traceF( tinP , T("error: while accumulating local file names, could not access ")+tDisk+T(".  will retry after napping 1 tock") ) ; ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                        break ;
                    }

                    if( !pInfo || !pInfo->psttIfoName )
                    {
                        DEL( pInfo ) ;
                        break ;
                    }
                    else
                    {
                        TN( tIfoName , pInfo->psttIfoName ) ;
                        //etRock.traceF( tinP , T("cloudC: [file]: ")+tIfoName ) ;

                        const boolT bDir = pInfo->psttIfoName[ CSpREFIX - 1 + pInfo->psttIfoName->idAdam ].idAdam == '/' ;

                        TN( tShort , "" ) ;
                        {
                            ZE( strokeS* , psttnu ) ;
                            ZE( strokeS* , psttShort ) ;
                            etherP.strBisectF( tinP , psttnu , psttShort , pInfo->psttIfoName , tSlash , - 1 - bDir , flSTRbISECT_APPENDdELIMITER ) ; ___( psttnu ) ; ___( psttShort ) ;
                            if( etherP.strCompareF( tinP , psttnu , psttLocalContainerP ) ) //SHOULD BE IMPOSSIBLE
                            {
                                LOGrAW( T("cloudC::cloudC [pInfo->psttIfoName]:     \"")+T(pInfo->psttIfoName)+T("\"\r\n") ) ;
                                LOGrAW( T("cloudC::cloudC [psttnu]:                 \"")+T(psttnu)+T("\"\r\n") ) ;
                                LOGrAW( T("cloudC::cloudC [psttLocalContainerP]:    \"")+T(psttLocalContainerP)+T("\"\r\n") ) ;
                                BLAMMO ;
                            }
                            etherP.delF( tinP , psttnu ) ;
                            tShort = T(psttShort) ;
                            etherP.delF( tinP , psttShort ) ;
                        }

                        if( bDir )
                        {
                            if( etherP.strCompareF( tinP , tShort , tDotSlash ) && etherP.strCompareF( tinP , tShort , tDotDotSlash ) ) jotDir.writeF( tinP , tShort , tShort.csF( tinP ) + 1 ) ;
                        }
                        else if( etherP.strIdF( tinP , T(".!writing.") , tShort ) )          // THE META FILE IS IGNORED, BUT THE PARTIALLY WRITTEN DATA FILE WILL BE INCLUDED
                        {
                            etherP.traceF( tinP , T("ignoring !writing metafile [tShort]:  ")+tShort ) ;
                        }
                        else if
                        (
                            (    !psttLikeP    ||          !psttLikeP->idAdam    ||    etherP.strFileMatchF( tinP , psttLikeP , tShort )       )
                            &&
                            (    !cbMinP       ||          pInfo->cbUsedHigh     ||    cbMinP <= pInfo->cbUsed                                 )
                            &&
                            (    !cbMaxP       ||    (    !pInfo->cbUsedHigh     &&              pInfo->cbUsed <= cbMaxP    )                  )
                        )
                        {
                            if( !offPass )
                            {
                                cFiles ++ ;
                                if( !( cFiles % ( TUCK << 4 ) ) ) etRock.traceF( tinP , tShort ) ;
                            }
                            else
                            {
                                if( !( cFilesRemaining % ( TUCK << 4 ) ) ) etRock.traceF( tinP , T("[cFilesRemaining]: ")+TF2(cFilesRemaining,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                cFilesRemaining -- ;
                            }

                            jotFile.writeF( tinP , tShort , tShort.csF( tinP ) + 1 ) ;
                        }
                        DEL( pInfo ) ;
                    }
                }
                while( ~hFind && !bQuitP && !POOP && !bFail ) ;
            }

            if( bQuitP || etPrime || etherP ) break ;

            if( bFail ) continue ;

            if( bVerify )
            {
                etRock.traceF( tinP , T("verifying that both lists have the same number of file names") ) ;
                if( jotDir1.cElementsF() != jotDir2.cElementsF() || jotFile1.cElementsF() != jotFile2.cElementsF() ) continue ;

                // ***********************************************************************************************    VERIFY THAT EACH JOT PAIR IS IDENTICAL    ***************************************************************

                for( countT offPass = 0 ; offPass <= 1 && !bFail ; offPass ++ )
                {
                    countT cRemaining = !offPass ? jotDir1.cElementsF() : jotFile1.cElementsF() ;
                    etRock.traceF( tinP , T(!offPass?"verifying that both directory lists are identical":"verifying that both file lists are identical") ) ;
                    jotC& jot1 = !offPass ? jotDir1 : jotFile1 ;
                    jotC& jot2 = !offPass ? jotDir2 : jotFile2 ;

                    while( !bQuitP && !etPrime && !etherP && !POOP )
                    {
                        if( !( cRemaining % ( TUCK << 4 ) ) ) etRock.traceF( tinP , T("[cRemaining]: ")+TF2(cRemaining,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        cRemaining -- ;

                        pageC page1 = jot1 ;
                        pageC page2 = jot2 ;
                        const osTextT* post1 = page1 ;
                        const osTextT* post2 = page2 ;

                             if( !post1 && !post2 ) break ;
                        else if( !post1 || !post2 ) { BLAMMO ; } // SHOULD BE IMPOSSIBLE ;
                        else if( thirdC::c_strcmpIF( tinP , post1 , post2 ) )
                        {
                            bFail ++ ;
                            break ;
                        }
                    }

                    jot1.resetLathReadF() ;
                    jot2.resetLathReadF() ;
                }

                if( bFail ) continue ;
            }

            // ***********************************************************************************************    WRITE HASH FOR EACH FILE TO KV    ***************************************************************

            ZE( countT , cHashers ) ;
            ZE( countT , cFileOrDirDone ) ;
            for( countT offPass = 0 ; offPass <= 1 && !bFail ; offPass ++ )
            {
                countT cRemaining = !offPass ? jotDir1.cElementsF() : jotFile1.cElementsF() ;
                etRock.traceF( tinP , T(!offPass?"calling myself recursively for each directory":"calculating hash for each file") ) ;
                jotC& jotShort = !offPass ? jotDir1 : jotFile1 ;

                while( !bQuitP && !etPrime && !etherP && !POOP && !bFail )
                {
                    pageC pageShort = jotShort ;
                    const osTextT* postShort = pageShort ;

                    if( !( cRemaining % ( TUCK << 2 ) ) ) etRock.traceF( tinP , T("[cRemaining]: ")+TF2(cRemaining,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    cRemaining -- ;

                    if( !postShort ) break ;
                    else
                    {
                        if( !offPass )
                        {
                            TN( tKid , psttLocalContainerP ) ; tKid += T(postShort) ;
                            walkLocalToLoadKvF( tinP , etherP , bQuitP , kvP , tKid , psttLocalContainerRootP , psttLikeP , cbMinP , cbMaxP , flagsCtP ) ;
                        }
                        else
                        {
                            ZE( infoFileS* , pInfo ) ;
                            {
                                TN( tLong , (const strokeS*)( T(psttLocalContainerP)+T(postShort) ) ) ;

                                while( !bQuitP && !etPrime && !etherP && !POOP )
                                {
                                    fileC myFile( tinP , (const strokeS*)tLong , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , 1 ) ;
                                    etScratch.diskFileQueryF( tinP , pInfo , myFile ) ; ___( pInfo ) ;

                                    if( pInfo && !pInfo->psttIfoName ) { etScratch.strMakeF( tinP , LF , pInfo->psttIfoName , tLong ) ; ___( pInfo->psttIfoName ) ; }
                                    __Z( pInfo ) ;
                                    if( pInfo )
                                    {
                                        __Z( pInfo->psttIfoName ) ;
                                    }

                                    if( POOP )
                                    {
                                        POOPR
                                        etRock.traceF( tinP , T("exception: could not get info for local file: ")+tLong ) ;
                                        bFail = 1 ;
                                        break ;
                                    }
                                    else
                                    {
                                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                                        while( cHashers == cHashersMax )
                                        {
                                            ++ s ; etRock.osSleepF( tinP , TOCK >> 2 ) ;
                                        }

                                        inc02AM( cHashers ) ;
                                        //if( pInfo->cbUsed < TOCK << 4 )
                                        {
                                            hasherF( tinP                         ,          etherP ,          bQuitP ,          bFail ,          cHashers ,         pInfo ,         psttLocalContainerRootP ,         psttLocalContainerP ,          kvP ,          cFileOrDirDone ) ;
                                            DEL( pInfo ) ;
                                        }
                                        //else
                                        //{
                                        //    ZE( countT* , pcArg ) ;
                                        //    etherP.newF( tinP , LF , pcArg , 9 ) ; ___( pcArg ) ;
                                        //    if( pcArg )
                                        //   {
                                        //        pcArg[ 0 ] = (countT)&etherP                 ;
                                        //        pcArg[ 1 ] = (countT)&bQuitP                 ;
                                        //        pcArg[ 2 ] = (countT)&bFail                  ;
                                        //        pcArg[ 3 ] = (countT)&cHashers               ;
                                        //        pcArg[ 4 ] = (countT)pInfo                   ;
                                        //        pcArg[ 5 ] = (countT)psttLocalContainerRootP ;
                                        //        pcArg[ 6 ] = (countT)psttLocalContainerP     ;
                                        //        pcArg[ 7 ] = (countT)&kvP                    ;
                                        //        pcArg[ 8 ] = (countT)&cFileOrDirDone         ;
                                        //
                                        //        etherP.osThreadF( TaRG1( tmHasherF ) , (countT)pcArg ) ;
                                        //    }
                                        //}

                                        break ;
                                    }
                                }
                            }
                        }
                    }
                }

                jotShort.resetLathReadF() ;
            }

            if( bFail ) continue ;

            // ***********************************************************************************************    WAIT FOR HASH THREADS TO DIE    ***************************************************************

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( cHashers )
            {
                ++ s ; etRock.osSleepF( tinP , TOCK >> 2 ) ;
            }

            if( !bFail )
            {
                etRock.traceF( tinP , T("cloudC: calculated hash for ")+TF2(cFileOrDirDone,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" (")+TF4(cFileOrDirDone,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(") local files") ) ;
                break ;
            }
            else etRock.traceF( tinP , T("cloudC: i was only able to calculate hash for ")+TF2(cFileOrDirDone,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" (")+TF4(cFileOrDirDone,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0x10,0xa)+T(") local files ; i will make another pass to process the remaining files") ) ;
        }
    }
    etRock.traceF( tinP , T("cloudC: 6 loaded  kvP from ")+T(psttLocalContainerP) ) ;
}

TASK( tmFreshenFileF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 && pTaskP->c3 && pTaskP->c4 && pTaskP->c5 && pTaskP->c6 && pTaskP->c8 )
{
    cloudC&  cloudP               = *(cloudC*)pTaskP->c1 ;
    countT&  cTokensFreeP         = *(countT*)pTaskP->c2 ;
    strokeS* psttzCloudContainerP = (strokeS*)pTaskP->c3 ;
    strokeS* psttzLocalContainerP = (strokeS*)pTaskP->c4 ;
    strokeS* psttShortP           = (strokeS*)pTaskP->c5 ;
    batonC&  batConnectP          = *(batonC*)pTaskP->c6 ;
    countT   offsP                =           pTaskP->c7 ;
    soulC&   sRenameP             =  *(soulC*)pTaskP->c8 ;

    poopC& poopCloud = cloudP ;

    const boolT bPull  = F(cloudP.flagsCtF()) & flCLOUDc_REMOTEiSmASTER ;
    const boolT bGhost = F(cloudP.flagsCtF()) & flCLOUDc_GHOST ;

    TN( tShort , psttShortP ) ;
    etThread.delF( tinP , psttShortP ) ;

    if( bPull )
    {
        boolT bWoGhost = bGhost && bGhostF( tinP , tShort ) ;

        if( !bWoGhost )
        {
            etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !downloading / calling pullFileF \"")+tShort+T("\"") ) ;
            cloudP.pullFileF( tinP , sRenameP , T(psttzLocalContainerP)+tShort , psttzCloudContainerP , tShort ) ;
            etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !downloading / called  pullFileF \"")+tShort+T("\"") ) ;
        }
        else
        {
            etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !downloading / making ghost \"")+tShort+T("\"") ) ;
            { fileC fg( tinP , (strokeS*)( T(psttzLocalContainerP)+tShort ) , ifcOPENaCCESS_W , 0 , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_DOnOTrEGISTER /*flOPENdETAILS_null*/ , ifcOPENhOW_nCeR ) ; }
            etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !downloading / made   ghost \"")+tShort+T("\"") ) ;
        }
    }
    else
    {
        etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !uploading / calling pushFileF [expCbUsed,cbUsedHigh,name]: ")+TF4(offsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" , ")+T(" \"")+tShort+T("\"") /*, flTRACE_NOpREFIX*/ ) ;
        cloudP.pushFileF( tinP , batConnectP , psttzCloudContainerP , tShort , psttzLocalContainerP ) ;
        etRock.traceF( tinP , T("[poopCloud]: ")+TF3((countT)poopCloud,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(" ; !uploading / called  pushFileF [expCbUsed,cbUsedHigh,name]: ")+TF4(offsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" , ")+T(" \"")+tShort+T("\"") /*, flTRACE_NOpREFIX*/ ) ;
    }

    inc02AM( cTokensFreeP ) ;
}
etThread.traceF( tinP , T("freshen thread exiting") ) ;
DONE( tmFreshenFileF )

//SHOULD BE 2 IN PRODUCTION
#define CtOKENSfRESHENfILE 2

/*1*/cloudC::cloudC( tinS& tinP , const strokeS* const psttNameP , const countT idDoIfDifferP , const flagsT flagsP , const countT idCloudP , const strokeS* const psttBuildingP , const strokeS* const psttUserP , const strokeS* const psttPasswordP , const strokeS* const psttCloudContainerP , const strokeS* const psttLocalContainerP , const strokeS* const psttLikeP , const countT cbMinP , const countT cbMaxP , const countT cTriesWhenDeletingLocalP , cloudUpdateCBFT pCloudUpdateCBFP , countT* const pcArgUpdateP , cloudNixCBFT pCloudNixCBFP , countT* const pcArgNixP , const strokeS* const psttPourLocalAfterContainerP , const strokeS* const psttAdamHireAfterP ) :/*1*/
ether( tinP , TAG( TAGiDnULL ) , flTHIRDmODE_IMPOTENCEeXPECTED ) ,
poop( (poopC&)(const poopC&)ether ) ,
idCloud( idCloudP ) ,
tBuilding(                  tinP , TAG( TAGiDnULL ) , flTEXTc_null , psttBuildingP ) ,
tUser(                      tinP , TAG( TAGiDnULL ) , flTEXTc_null , psttUserP ) ,
tPassword(                  tinP , TAG( TAGiDnULL ) , flTEXTc_null , psttPasswordP ) ,
hCloud(                     tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_CLOUD ) ,
bHandle(                    tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
flagsCt( flagsP ) ,
flagsState( flCLOUDsTATE_null ) ,
idDoIfDiffer( idDoIfDifferP ) ,
tReplyCode200_OK(           tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 200 OK"           ) ,
tReplyCode201_Created(      tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 201 Created"      ) ,
tReplyCode202_Accepted(     tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 202 Accepted"     ) ,
tReplyCode204_NoContent(    tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 204 No Content"   ) ,
tReplyCode401_Unauthorized( tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 401 Unauthorized" ) ,
tReplyCode404_NotFound(     tinP , TAG( TAGiDnULL ) , flTEXTc_null , "HTTP/1.1 404 Not Found"    ) ,
tUrlCloudAgent(             tinP , TAG( TAGiDnULL ) , flTEXTc_null , ""                          ) ,
tHost(                      tinP , TAG( TAGiDnULL ) , flTEXTc_null , ""                          )
{
    SCOOP

    const countT* pIdSubType = &(const countT&)poop ; //U::TO FIND A BUG

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttNameP ) ;
        __Z( idDoIfDifferP ) ; //U::DEFINE AND USE A MACRO TO VALIDATE THAT THE VALUE IS IN [min,max]
        FV( flCLOUDc , flagsP ) ;
        __Z( idCloudP ) ;
        __Z( psttBuildingP ) ;
        __Z( psttUserP ) ;
        __Z( psttPasswordP ) ;
        __Z( psttCloudContainerP ) ;
        __NZ( !psttLocalContainerP && ( !( F(flagsP) & flCLOUDc_DOnOTlOADlOCAL ) || !( F(flagsP) & flCLOUDc_NOcOPY ) ) ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etRock = etherC::etRockIF( tinP ) ;
    etherC& etPrime = etherC::etPrimeIF() ;
    const boolT& bQuit = etPrime ;
    const boolT  bRetry = &ether == tinP.pEtScratch ;

    ZE( strokeS* , psttLocalContainerMapped ) ;
    if( psttLocalContainerP ) { ether.diskMapFileNameF( tinP , psttLocalContainerMapped , psttLocalContainerP ) ; ___( psttLocalContainerMapped ) ; }

    if( psttPourLocalAfterContainerP && psttPourLocalAfterContainerP->idAdam ) etRock.traceF( tinP , T("cloudC: afterward, will pour local container    ")+T(psttLocalContainerP)+T("    to:    ")+T(psttPourLocalAfterContainerP) ) ;

    if( psttAdamHireAfterP && psttAdamHireAfterP->idAdam ) etRock.traceF( tinP , T("cloudC: afterward, will hire adam    ")+T(psttAdamHireAfterP)+T("    and will wait for that adam to die") ) ;

    while( !bQuit && !POOP )      // RETRY LOOP: LOOPS ONLY TO RETRY ON FAILURE
    {
        openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;

        if( !POOP ) /*etRock.traceF( tinP , T("cloudC: b: open remote aok") )*/ ;
        else if( !bRetry )
        {
            etRock.traceF( tinP , T("cloudC: b: open remote FAILED") ) ;
            break ;
        }
        else
        {
            POOPR
            etRock.traceF( tinP , T("cloudC: b: open remote FAILED remote list ; will retry after napping 01 tock") ) ;

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
            continue ;
        }

        if( !POOP && !( F(flagsCt) & flCLOUDc_DOnOTlOADrEMOTE ) )
        {
            new( 0 , tinP , pb_kvFileMetaByNameRemote , sizeof pb_kvFileMetaByNameRemote ) keyValuePairsC( tinP , T("kv.cloud.file.meta.by.name.")+T(psttNameP)+T(".cloud") , flKEYvALUEpAIRSc_WRITE | flKEYvALUEpAIRSc_PURGEoNcT | flKEYvALUEpAIRSc_PURGEoNdT , 0 , 0x18 ) ;
            flagsState |= flCLOUDsTATE_CTkVrEMOTE ;
            keyValuePairsC& kvFileMetaByNameRemote = *(keyValuePairsC*)pb_kvFileMetaByNameRemote ;

            while( !bQuit )
            {
                bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                hCloud.closeIfF() ;
                openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;
                bHandle.ungrabF( tinP ) ;
        
                etRock.traceF( tinP , T("cloudC: a: loading remote list") ) ;
                TN( tMarker , "" ) ;
                ZE( countT , cRemote ) ;
                while( !bQuit && !POOP )
                {
                    countT cRemoteNew = listFilesF( tinP , psttCloudContainerP , tMarker , psttLikeP , cbMinP , cbMaxP ) ;
                    if( !cRemoteNew ) break ;
                    else              cRemote += cRemoteNew ;
                }

                if( !POOP )
                {
                    etRock.traceF( tinP , T("cloudC: 9: loaded remote list; contains ")+TF2(cRemote,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" (")+TF4(cRemote,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(") files ") ) ;
                    break ;
                }
                else if( !bRetry )
                {
                    etRock.traceF( tinP , T("cloudC: 9: load FAILED remote list") ) ;
                    break ;
                }
                else
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: 9: load FAILED remote list ; will retry after napping 01 tock") ) ;
                    kvFileMetaByNameRemote.purgeF( tinP ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
                }
            }
        }

        const boolT bPull = F(flagsCt) & flCLOUDc_REMOTEiSmASTER ;

        if( !POOP && !( F(flagsCt) & flCLOUDc_DOnOTlOADlOCAL ) )
        {
            new( 0 , tinP , pb_kvFileMetaByNameLocal , sizeof pb_kvFileMetaByNameLocal ) keyValuePairsC( tinP , T("kv.cloud.file.meta.by.name.")+T(psttNameP)+T(".local") , flKEYvALUEpAIRSc_WRITE | flKEYvALUEpAIRSc_PURGEoNcT | flKEYvALUEpAIRSc_PURGEoNdT , 0 , 0x18 ) ;
            flagsState |= flCLOUDsTATE_CTkVlOCAL ;
            keyValuePairsC& kvFileMetaByNameLocal = *(keyValuePairsC*)pb_kvFileMetaByNameLocal ;

            if( bPull ) etRock.traceF( tinP , T("cloudC: warning: i am not checking for bad file names since i am pulling (into ")+T(psttLocalContainerMapped)+T(" ) ; when pulling, i assume that the names in the cloud are as desired, even if they are invalid for a subsequent push") ) ;
            else if( F(flagsCt) & flCLOUDc_RENAMEtOhASH )
            {
                etRock.traceF( tinP , T("cloudC: renaming all files to hash in ")+T(psttLocalContainerMapped) ) ;
                etRock.traceF( tinP , T("cloudC: U::DEVELOP THE RENAMING FUNCTION AND CALL HERE") ) ;
                etRock.traceF( tinP , T("cloudC: renamed  all files to hash in ")+T(psttLocalContainerMapped) ) ;
            }

            //20170413@1404: THIS IS OBSOLETE NOW THAT FILESETS ARE USED FOR ARCHIVAL ("!ideafarm.8.2.00000000.00000001.*")
            //else
            //{
            //    etRock.traceF( tinP , T("cloudC: fixing bad file names, if any, in ")+T(psttLocalContainerMapped) ) ;
            //    ether.disk FixBadFileNamesF( tinP , psttLocalContainerMapped , flETHERfIXnAMES_RECURSE ) ;
            //    etRock.traceF( tinP , T("cloudC: fixed  bad file names, if any, in ")+T(psttLocalContainerMapped) ) ;
            //}

            while( !bQuit )
            {
                walkLocalToLoadKvF( tinP , ether , bQuit , kvFileMetaByNameLocal , psttLocalContainerMapped , psttLocalContainerMapped , psttLikeP , cbMinP , cbMaxP , flagsCt ) ;

                if( !POOP ) break ;
                else if( !bRetry )
                {
                    break ;
                }
                else
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: call to walkLocalToLoadKvF failed ; will retry after napping 01 tock") ) ;

                    kvFileMetaByNameLocal.purgeF( tinP ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
                }
            }
        }

        ZE( osTextT* , postBufferM ) ; // 'M': "master"
        ZE( osTextT* , postBufferC ) ; // 'C': "copy"
        const countT   costBuffers = TOCK ;                          //TOCK IS USED JUST TO ELIMINATE SUPPORT ISSUES FOR FOOLS WHO USE HUGELY LONG FILE NAMES
        ether.newF( tinP , LF , postBufferM , costBuffers ) ; ___( postBufferM ) ;
        ether.newF( tinP , LF , postBufferC , costBuffers ) ; ___( postBufferC ) ;
        ether.memSetF( tinP , postBufferM , costBuffers , 0 ) ;
        ether.memSetF( tinP , postBufferC , costBuffers , 0 ) ;

        soulC sDoomedFileNames( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.doomed.file.names" ) ;
        stackC stThis(     tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE                    , ifcSTACKtYPE_countT ) ;
        stackC stKidsDone( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWzE , ifcSTACKtYPE_countT ) ;
        soulC sStaleFileNameCbUsed( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen" ) ;

        keyValuePairsC& kvFileMetaByNameRemote = *(keyValuePairsC*)pb_kvFileMetaByNameRemote ;
        keyValuePairsC& kvFileMetaByNameLocal = *(keyValuePairsC*)pb_kvFileMetaByNameLocal ;

        // pcArg[ 0 ] IS RESERVED FOR USE BY keyValuePairsC::walkF, WHICH WILL PUT A jotC* INTO IT SO THAT MY WALK CBF'S CAN ACCESS THE jotC THAT CONTAINS THE METADATA

                        // 0   1              2                     3                     4             5                                 6                                7                          8                      9                       a                   b                             c                             d              e                              f
        countT pcArg[] = { 0 , (countT)this , (countT)postBufferM , (countT)postBufferC , costBuffers , (countT)&kvFileMetaByNameRemote , (countT)&kvFileMetaByNameLocal , (countT)pCloudUpdateCBFP , (countT)pcArgUpdateP , (countT)pCloudNixCBFP , (countT)pcArgNixP , (countT)psttCloudContainerP , (countT)psttLocalContainerMapped , idDoIfDiffer , (countT)&sStaleFileNameCbUsed , (countT)&sDoomedFileNames } ;

        if( !POOP && !( F(flagsCt) & flCLOUDc_NOcOPY ) && !( F(flagsCt) & flCLOUDc_DELETEiFmASTEReXIST ) ) // IF DELETE IF MASTER EXISTS THEN NOcOPY FLAG IS IMPLIED (IT WOULD NEVER MAKE SENSE TO COPY MASTER TO SLAVE AND THEN DELETE SLAVE IF MASTER EXISTS; NOTHING WOULD BE ACCOMPLISHED BY THE COPY)
        {
            etRock.traceF( tinP , T( bPull ? "cloudC: master is remote: i will update local to match remote" : "cloudC: master is local: i will update remote to match local" ) ) ;

            while( !bQuit )
            {
                stThis.purgeF(     tinP ) ;
                stKidsDone.purgeF( tinP ) ;
                ether.memSetF( tinP , postBufferM , costBuffers , 0 ) ;
                ether.memSetF( tinP , postBufferC , costBuffers , 0 ) ;
                sStaleFileNameCbUsed.removeAllF( tinP ) ;
                etRock.traceF( tinP , T("cloudC: 3 walking to freshen") ) ;

                if( bPull ) kvFileMetaByNameRemote.walkF( tinP , stThis , stKidsDone , postBufferM , costBuffers , countTC() , walkToFreshenCBF , pcArg , &bQuit ) ;
                else        kvFileMetaByNameLocal.walkF(  tinP , stThis , stKidsDone , postBufferM , costBuffers , countTC() , walkToFreshenCBF , pcArg , &bQuit ) ;

                if( !POOP ) etRock.traceF( tinP , T("cloudC: 8: walked to freshen ; sStaleFileNameCbUsed is now loaded") ) ;
                else if( !bRetry )
                {
                    etRock.traceF( tinP , T("cloudC: 8: could not walk to freshen") ) ;
                    break ;
                }
                else
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: 8: could not walk to freshen ; will retry after napping for 01 tocks") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;

                    continue ;
                }

                // THESE WILL BE USED TO OO POWER SORT THE FILES BY SIZE
                // EACH IS ASSOCIATED WITH A POWER OF 2, FROM 0 TO f1
                // THIS COVERS THE RANGE OF POSSIBLE FILE SIZES, SINCE Rackspace.com FILES ARE LIMITED TO 4 GB
                // FILES OF SIZE <= 2**0 WILL BE REGISTERED INTO THE 00 ELEMENT
                // FILES OF SIZE <= 2**1 WILL BE REGISTERED INTO THE 10 ELEMENT, ETC.

                soulC sStaleFileNameCbUsed_00( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.00" ) ;
                soulC sStaleFileNameCbUsed_10( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.10" ) ;
                soulC sStaleFileNameCbUsed_20( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.20" ) ;
                soulC sStaleFileNameCbUsed_30( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.30" ) ;
                soulC sStaleFileNameCbUsed_40( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.40" ) ;
                soulC sStaleFileNameCbUsed_50( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.50" ) ;
                soulC sStaleFileNameCbUsed_60( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.60" ) ;
                soulC sStaleFileNameCbUsed_70( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.70" ) ;
                soulC sStaleFileNameCbUsed_80( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.80" ) ;
                soulC sStaleFileNameCbUsed_90( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.90" ) ;
                soulC sStaleFileNameCbUsed_a0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.a0" ) ;
                soulC sStaleFileNameCbUsed_b0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.b0" ) ;
                soulC sStaleFileNameCbUsed_c0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.c0" ) ;
                soulC sStaleFileNameCbUsed_d0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.d0" ) ;
                soulC sStaleFileNameCbUsed_e0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.e0" ) ;
                soulC sStaleFileNameCbUsed_f0( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.f0" ) ;
                soulC sStaleFileNameCbUsed_01( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.01" ) ;
                soulC sStaleFileNameCbUsed_11( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.11" ) ;
                soulC sStaleFileNameCbUsed_21( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.21" ) ;
                soulC sStaleFileNameCbUsed_31( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.31" ) ;
                soulC sStaleFileNameCbUsed_41( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.41" ) ;
                soulC sStaleFileNameCbUsed_51( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.51" ) ;
                soulC sStaleFileNameCbUsed_61( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.61" ) ;
                soulC sStaleFileNameCbUsed_71( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.71" ) ;
                soulC sStaleFileNameCbUsed_81( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.81" ) ;
                soulC sStaleFileNameCbUsed_91( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.91" ) ;
                soulC sStaleFileNameCbUsed_a1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.a1" ) ;
                soulC sStaleFileNameCbUsed_b1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.b1" ) ;
                soulC sStaleFileNameCbUsed_c1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.c1" ) ;
                soulC sStaleFileNameCbUsed_d1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.d1" ) ;
                soulC sStaleFileNameCbUsed_e1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.e1" ) ;
                soulC sStaleFileNameCbUsed_f1( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.f1" ) ;
                soulC sStaleFileNameCbUsed_02( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.file.names.to.freshen.02" ) ;

                soulC* ppsFreshen[] =
                {
                    &sStaleFileNameCbUsed_00 ,
                    &sStaleFileNameCbUsed_10 ,
                    &sStaleFileNameCbUsed_20 ,
                    &sStaleFileNameCbUsed_30 ,
                    &sStaleFileNameCbUsed_40 ,
                    &sStaleFileNameCbUsed_50 ,
                    &sStaleFileNameCbUsed_60 ,
                    &sStaleFileNameCbUsed_70 ,
                    &sStaleFileNameCbUsed_80 ,
                    &sStaleFileNameCbUsed_90 ,
                    &sStaleFileNameCbUsed_a0 ,
                    &sStaleFileNameCbUsed_b0 ,
                    &sStaleFileNameCbUsed_c0 ,
                    &sStaleFileNameCbUsed_d0 ,
                    &sStaleFileNameCbUsed_e0 ,
                    &sStaleFileNameCbUsed_f0 ,
                    &sStaleFileNameCbUsed_01 ,
                    &sStaleFileNameCbUsed_11 ,
                    &sStaleFileNameCbUsed_21 ,
                    &sStaleFileNameCbUsed_31 ,
                    &sStaleFileNameCbUsed_41 ,
                    &sStaleFileNameCbUsed_51 ,
                    &sStaleFileNameCbUsed_61 ,
                    &sStaleFileNameCbUsed_71 ,
                    &sStaleFileNameCbUsed_81 ,
                    &sStaleFileNameCbUsed_91 ,
                    &sStaleFileNameCbUsed_a1 ,
                    &sStaleFileNameCbUsed_b1 ,
                    &sStaleFileNameCbUsed_c1 ,
                    &sStaleFileNameCbUsed_d1 ,
                    &sStaleFileNameCbUsed_e1 ,
                    &sStaleFileNameCbUsed_f1 ,
                    &sStaleFileNameCbUsed_02 ,
                } ;

                __NZ( (countT)sStaleFileNameCbUsed % 2 ) ; // sStaleFileNameCbUsed CONTAINS A [name,cbUsed] PAIR FOR EACH STALE FILE

                const countT cStale = (countT)sStaleFileNameCbUsed >> 1 ;

                etRock.traceF( tinP , T("cloudC: 7: sorting ")+TF3(cStale,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" file names listed in sStaleFileNameCbUsed by file size") ) ;

                if( cStale ) while( sStaleFileNameCbUsed )
                {
                    {
                        countT cRemaining = (countT)sStaleFileNameCbUsed >> 1 ;
                        if( !( cRemaining % ( TUCK << 4 ) ) ) etRock.traceF( tinP , TF3(cRemaining,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" file names remain to be sorted") ) ;
                    
                        //TO FIND A BUG 20150521@1156 VISIBLE PROGRESS STOPS AT THIS POINT
                        //if( cRemaining == 0x35126 )
                        //{
                        //    countT foo = 2 ;
                        //}
                    }

                    ZE( strokeS* , psttfn ) ;
                    sStaleFileNameCbUsed >> psttfn ; ___( psttfn ) ;

                    ZE( countT , cbUsed ) ;
                    sStaleFileNameCbUsed >> cbUsed ;

                    TN( tShort , psttfn ) ;
                    //etRock.traceF( tinP , TF3(cbUsed,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,9)+TF4(cbUsed,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0x10,0xa)+tShort ) ;

                    ZE( countT , offs ) ;
                    countT cbMax = 1 ;
                    while( cbMax < cbUsed )
                    {
                        offs ++ ;
                        if( !( cbMax <<= 1 ) ) break ;
                    }

                    //etRock.traceF( tinP , TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    *ppsFreshen[ offs ] << psttfn ;
                    ether.delF( tinP , psttfn ) ;
                }
                etRock.traceF( tinP , T("cloudC: 6: sorted all file names listed in sStaleFileNameCbUsed by file size") ) ;

                bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                hCloud.closeIfF() ;
                openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;
                bHandle.ungrabF( tinP ) ;

                if( cStale ) for( countT offs = 0 ; offs < sizeof ppsFreshen / sizeof ppsFreshen[ 0 ] ; offs ++ )
                {
                    etRock.traceF( tinP , (strokeS*)( T("cloudC: 5.5: group ")+TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" contains ")+TF2((countT)*ppsFreshen[offs],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" files to be freshened.") ) ) ;
                }

                // HOW TOKENS WORK
                // TOKENS ARE USED TO CONTROL THE NUMBER OF WORKER THREADS, EACH OF WHICH IS TRANSFERING WO FILE
                // EACH ELEMENT OF ppsFreshen IS ASSOCIATED WITH A PARTICULAR OO POWER FILE SIZE RANGE
                // FILES ARE ROUGH SORTED BY SIZE AND ARE PROCESSED IN INCREASING ORDER OF SIZE RANGE
                // offs IS THE OFFSET INTO ppsFreshen SO INDICATES THE SIZE RANGE CURRENTLY BEING PROCESSED

                // cTokensExist IS INITIALIZED TO THE NUMBER OF TOKENS THAT WILL EXIST FOR THE SMALLEST FILES (E.G. offs == 0)
                // cTokensFree IS INITIALIZED TO cTokensExist
                // THE TRANSFER THREAD LAUNCHER BLOCKS UNTIL cTokensFree != 0
                // THEN, BEFORE LAUNCHING EACH TRANSFER THREAD, cTokensFree IS DECREMENTED
                // THE TRANSFER THREAD WILL DO ITS WORK AND THEN INCREMENT cTokensFree, CONCEPTUALLY TO FREE ITS TOKEN SO THAT ANOTHER TRANSFER THREAD CAN BE LAUNCHED

                // cTokensExist IS THE NUMBER OF SIMULTANEOUS TRANSFERS THAT WILL BE ALLOWED FOR THAT FILE SIZE RANGE
                // THE ACTION OF THE LAUNCHER AND THE LAUNCHED THREADS CAUSES cTokensFree TO VARY WITHIN [0,cTokensExist]

                // WHEN offs HAS BEEN INCREMENTED TO PARTICULAR VALUES, cTokensExist AND cTokensFree ARE BOTH DECREMENTED IN A WAY THAT ENSURES THAT cTokensFree IS NEVER NEGATIVE
                // THIS REDUCES THE NUMBER OF SIMULTANEOUS TRANSFERS ALLOWED

                // THE PARTICULAR VALUES ARE HARDCODED AND ARE SELECTED SO THAT THE NUMBER OF SIMULTANEOUS TRANSFERS ARE MINIMIZED SUCH THAT THE NETWORK CONNECTION IS FULLY UTILIZED

                batonC batConnect( tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ;
                countT cTokensExist = 4 ; //CS: CODEsYNC: 36138003 36138003
                countT cTokensFree = cTokensExist ;
                soulC sRename( tinP , TAG( TAGiDnULL ) , flSOUL_null , "soul.cloudc.rename" ) ;
                if( cStale ) for( countT offs = 0 ; !etPrime && offs < sizeof ppsFreshen / sizeof ppsFreshen[ 0 ] ; offs ++ )
                {
                    etRock.traceF( tinP , T("cloudC: 5: processing ")+TF2((countT)*ppsFreshen[offs],flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" file names in group ")+TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                    {
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        while( !etPrime && !cTokensFree ) { ++ s ; etPrime.osSleepF( tinP , TOCK >> 2 ) ; }
                    }

                    if( !etPrime && cTokensExist > 1 ) switch( offs )  // CONDITIONALLY REDUCE cTokensExist BY 1 SO THAT IT DECREASES TO 1 FOR LARGE FILES ; "cTokensExist > 1" IS DEFENSIVE CODING TO ENSURE IS NEVER REDUCED BELOW 1
                    {
                        //CS: CODEsYNC: 36138003 36138003
                        //O: TUNE THESE CASE VALUES SO THAT cTokensExist IS REDUCED INCREMENTALLY AS FILE SIZE INCREASES SO THAT  cTokensExist == 1 FOR LARGE FILES
                        case 0x14 : // FILE SIZE   1048576 BYTES
                        case 0x16 : // FILE SIZE   4194304 BYTES
                        //case 0x18 : // FILE SIZE  16777216 BYTES  (THIS IS SUPPRESSED BECAUSE SOME THROTTLING BY NETWORKS APPEARS TO BE PER THREAD, SO MORE WORK IS ALLOWED IF 2 FILES ARE TRANSFERRED SIMULTANEOUSLY
                        case 0x1e : // FILE SIZE   BYTES
                        {
                            cTokensExist -- ;
                            if( !decv02AM( cTokensFree ) ) { BLAMMO ; }
                            //etRock.traceF( tinP , T("cloudC: decremented number of simultaneous transfers allowed [offs,cTokensExist]: ")+TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" , ")+TF2(cTokensExist,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                            break ;
                        }
                    }
                    etRock.traceF( tinP , T("for group ")+TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(", ")+TF2(cTokensExist,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" simultaneous file transfers will be allowed") ) ;

                    boolT bWoth = 1 ;
                    while( *ppsFreshen[ offs ] )
                    {
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        while( !etPrime && !cTokensFree ) { ++ s ; etPrime.osSleepF( tinP , TOCK >> 2 ) ; }

                        if( etPrime || POOP )
                        {
                            if( etPrime ) etRock.traceF( tinP , T("cloudC: quitting early because this process has been fired") ) ;
                            if( POOP    ) etRock.traceF( tinP , T("cloudC: quitting early because *this is impotent") ) ;
                            break ;
                        }

                        {
                            countT cRemaining = *ppsFreshen[ offs ] ;
                            etRock.traceF( tinP , TF3(cRemaining,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T(" file names remain to be processed in group ")+TF2(offs,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        }

                        if( !decv02AM( cTokensFree ) ) { BLAMMO ; }

                        if( bWoth || offs >= 0x1c )
                        {
                            bWoth = 0 ;

                            etherC::etRockIF( tinP ).traceF( tinP , T("obtaining fresh authorization") ) ;
                            bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                            hCloud.closeIfF() ;
                            openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;
                            bHandle.ungrabF( tinP ) ;
                        }

                        ZE( strokeS* , psttfn ) ;
                        *ppsFreshen[ offs ] >> psttfn ; ___( psttfn ) ;

                        ether.osThreadF( TaRG1( tmFreshenFileF ) , (countT)this , (countT)&cTokensFree , (countT)psttCloudContainerP , (countT)psttLocalContainerMapped , (countT)psttfn , (countT)&batConnect , offs , (countT)&sRename ) ;
                    }

                    if( etPrime || POOP )
                    {
                             if( etPrime && POOP ) etRock.traceF( tinP , T("cloudC: 4: breaking because i have been fired and also cloudC is impotent") ) ;
                        else if( etPrime         ) etRock.traceF( tinP , T("cloudC: 4: breaking because i have been fired") ) ;
                        else if(            POOP ) etRock.traceF( tinP , T("cloudC: 4: breaking because cloudC is impotent") ) ;
                        break ; // *this WILL BE IMPOTENT IF A pushFileF HAS FAILED
                    }
                }

                //etRock.traceF( tinP , T("cloudC: 3: waiting for all freshen tokens to be returned if any are still being used") ) ;
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;

                    while( cTokensFree < cTokensExist )
                    {
                        //etRock.traceF( tinP , T("cloudC: 3: waiting for all freshen tokens to be returned") ) ;
                        ++ s ; etRock.osSleepF( tinP , TOCK >> 2 ) ;
                    }
                }
                //etRock.traceF( tinP , T("cloudC: 3 waited  for all freshen tokens to be returned if any are still being used") ) ;

                if( !POOP )
                {
                    if( F(flagsCt) & flCLOUDc_COPYaLLoRnONE )
                    {
                        etRock.traceF( tinP , T("cloudC: 2: all freshens succeeded, so renaming newly received local files from temporary names to intened names") ) ;
                        while( sRename )
                        {
                            ZE( strokeS* , psttfnNew ) ;
                            ZE( strokeS* , psttfnOld ) ;
                            sRename >> psttfnNew ; ___( psttfnNew ) ;
                            sRename >> psttfnOld ; ___( psttfnOld ) ;

                            etRock.traceF( tinP , T("cloudC: renaming (all or none) [new,old]:") ) ;
                            etRock.traceF( tinP , psttfnNew ) ;
                            etRock.traceF( tinP , psttfnOld ) ;

                            ether.diskFileOrDirDeleteF( tinP , psttfnNew ) ;             //IT WOULD BE NICE TO BE ABLE TO DO THIS ATOMICALLY
                            ether.diskMoveFileOrDirF(   tinP , psttfnNew , psttfnOld ) ; //IT WOULD BE NICE TO BE ABLE TO DO THIS ATOMICALLY

                            ether.delF( tinP , psttfnNew ) ;
                            ether.delF( tinP , psttfnOld ) ;
                        }
                    }
                    else
                    {
                        __( sRename ) ;
                    }

                    etRock.traceF( tinP , T("cloudC: 1: walked  to freshen") ) ;
                    break ;
                }
                else if( !bRetry )
                {
                    etRock.traceF( tinP , T("cloudC: 1: walk FAILED  to freshen") ) ;
                    break ;
                }
                else
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: 1: walk FAILED  to freshen ; i will retry after napping 01 tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; etPrime.osSleepF( tinP , TOCK << 4 ) ;
                }
            }
        }

        if( !POOP && ( F(flagsCt) & flCLOUDc_DELETEiFmASTERnOTeXIST || F(flagsCt) & flCLOUDc_DELETEiFmASTEReXIST ) )
        {
            while( !bQuit )
            {
                bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                hCloud.closeIfF() ;
                openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;
                bHandle.ungrabF( tinP ) ;
    
                //20170328@1818: ADDED WITHOUT ANALYSIS, TO MAKE SIMILAR TO COPY OPERATION
                stThis.purgeF(     tinP ) ;
                stKidsDone.purgeF( tinP ) ;
                ether.memSetF( tinP , postBufferM , costBuffers , 0 ) ;
                ether.memSetF( tinP , postBufferC , costBuffers , 0 ) ;
                sStaleFileNameCbUsed.removeAllF( tinP ) ;

                sDoomedFileNames.removeAllF( tinP ) ;

                etRock.traceF( tinP , T( F(flagsCt) & flCLOUDc_DELETEiFmASTERnOTeXIST ? "cloudC: 1: walking to nix if master not exist" :  "cloudC: 1: walking to nix if master exist" ) ) ;

                if( bPull ) kvFileMetaByNameLocal.walkF(  tinP , stThis , stKidsDone , postBufferM , costBuffers , countTC() , walkLocalToNixCBF  , pcArg , &bQuit ) ;
                else        kvFileMetaByNameRemote.walkF( tinP , stThis , stKidsDone , postBufferM , costBuffers , countTC() , walkRemoteToNixCBF , pcArg , &bQuit ) ;

                if( !POOP )
                {
                    if( sDoomedFileNames )
                    {
                        if( !bPull ) deleteRemoteFilesF( tinP , psttCloudContainerP , sDoomedFileNames ) ;
                        else while( sDoomedFileNames )
                        {
                            ZE( strokeS* , psttfn ) ;
                            sDoomedFileNames >> psttfn ; ___( psttfn ) ;
        
                            ether.traceF( tinP , T("!nixLocal \"")+T(psttfn)+T("\"") ) ;
                            ether.diskFileOrDirDeleteF( tinP , T(psttLocalContainerMapped)+T(psttfn) , flFILEoRdIRdELETE_null , cTriesWhenDeletingLocalP ) ;
        
                            ether.delF( tinP , psttfn ) ;
                        }
                    }

                    etRock.traceF( tinP , T("cloudC: 0: walked  to nix") ) ;
                    break ;
                }
                else if( !bRetry )
                {
                    etRock.traceF( tinP , T("cloudC: 0: walk FAILED  to nix") ) ;
                    break ;
                }
                else
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: 0: walk FAILED  to nix ; i will retry after napping 01 tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    ++ s ; ether.osSleepF( tinP , TOCK << 4 ) ;
                }
            }
        }

        ether.delF( tinP , postBufferM ) ;
        ether.delF( tinP , postBufferC ) ;

        if( !POOP ) break ;
    }
    ether.delF( tinP , psttLocalContainerMapped ) ;

    if( psttPourLocalAfterContainerP && psttPourLocalAfterContainerP->idAdam )
    {
        ZE( strokeS* , psttToMapped ) ;
        ether.diskMapFileNameF( tinP , psttToMapped , psttPourLocalAfterContainerP ) ; ___( psttToMapped) ;

        ZE( strokeS* , psttFromMapped ) ;
        ether.diskMapFileNameF( tinP , psttFromMapped , psttLocalContainerP ) ; ___( psttFromMapped) ;

        if
        (
               !psttToMapped
            ||  psttToMapped->idAdam < 5
            ||  psttToMapped[   CSpREFIX + 0 ].idAdam != '/'
            ||  psttToMapped[   CSpREFIX + 1 ].idAdam != '/'
            ||  psttToMapped[   CSpREFIX + 2 ].idAdam != '/'
            ||  psttToMapped[   CSpREFIX + 4 ].idAdam != '/'
            || !psttFromMapped
            ||  psttFromMapped->idAdam < 5
            ||  psttFromMapped[ CSpREFIX + 0 ].idAdam != '/'
            ||  psttFromMapped[ CSpREFIX + 1 ].idAdam != '/'
            ||  psttFromMapped[ CSpREFIX + 2 ].idAdam != '/'
            ||  psttFromMapped[ CSpREFIX + 4 ].idAdam != '/'
            ||  psttFromMapped[ CSpREFIX + 3 ].idAdam != psttToMapped[ CSpREFIX + 3 ].idAdam
        )
        {
            etRock.traceF( tinP , T("cloudC: error: move must be to the same file system instance (hard drive [to,from]:     ")+T(psttToMapped)+T("    ")+T(psttFromMapped) ) ;
        }
        else
        {
            if( !ether.diskFileExistsF( tinP , psttLocalContainerP ) ) etRock.traceF( tinP , T("cloudC: moving local container    ")+T(psttLocalContainerP)+T(": does not exist so nothing moved") ) ;
            else
            {
                etRock.traceF( tinP , T("cloudC: moving local container    ")+T(psttLocalContainerP)+T("    to:    ")+T(psttPourLocalAfterContainerP) ) ;
                ZE( strokeS* , psttNewUnique ) ;
                ether.strMakeF( tinP , LF , psttNewUnique , psttPourLocalAfterContainerP , TUCK ) ; ___( psttNewUnique ) ;       //A:ASSUME: TUCK IS LARGE ENOUGH TO HOLD THE UNIQUE STRING
                ether.diskMoveFileOrDirUniqueF( tinP , psttNewUnique , psttLocalContainerP ) ;
                ether.delF( tinP , psttNewUnique ) ;
                etRock.traceF( tinP , T("cloudC: moved  local container    ")+T(psttLocalContainerP)+T("    to:    ")+T(psttNewUnique) ) ;
            }
        }

        ether.delF( tinP , psttToMapped ) ;
        ether.delF( tinP , psttFromMapped ) ;
    }

    IFsCRATCH
    {
        SCOOPS

        etherC& etScratch = *tinP.pEtScratch ;

        if( psttAdamHireAfterP && psttAdamHireAfterP->idAdam )
        {
            countT idAdam = etScratch.strDigitsToSCountF( tinP , psttAdamHireAfterP ) ;

            if( !idAdam ) etRock.traceF( tinP , T("cloudC: cannot hire adam ")+T(psttAdamHireAfterP)+T(" because idAdam is 0") ) ;
            else
            {
                etRock.traceF( tinP , T("cloudC: hiring adam    ")+T(psttAdamHireAfterP) ) ;
                etScratch.ifcHireF( tinP , T("cloudC::cloudC") , idAdam , 0 , flHIRE_WAIT | flHIRE_DISPLAYaUTO , 0 , 0 , 1 ) ;

                if( POOP )
                {
                    POOPR
                    etRock.traceF( tinP , T("cloudC: could not hire adam    ")+T(psttAdamHireAfterP) ) ;
                }
                else etRock.traceF( tinP , T("cloudC: hired  adam    ")+T(psttAdamHireAfterP) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138003.cloudc.cloudc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138004.cloudc.openf BEGIN
#define DDNAME       "3func.36138004.cloudc.openf"
#define DDNUMB      (countT)0x36138004
#define IDFILE      (countT)0x1544


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::openF( tinS& tinP , const countT idCloudP , const strokeS* const psttBuildingP , const strokeS* const psttUserP , const strokeS* const psttKeyP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idCloudP ) ;
        __Z( psttBuildingP ) ;
        __Z( psttUserP ) ;
        __Z( psttKeyP ) ;
        if( POOP ) return ;
    }

    _IO_

    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
    {
        cloudInfoS* pch = new( 0 , tinP , LF ) cloudInfoS( tinP , ifcIDcLOUD_RACKSPACE ) ; ___( pch ) ;
        hCloud.osF( ifcIDtYPEhANDLE_CLOUD , (countT)pch ) ;
    }

    TN( tSayBody ,

        "{\r\n"
        "   \"auth\":\r\n"
        "   {\r\n"
        "      \"RAX-KSKEY:apiKeyCredentials\":\r\n"
        "      {\r\n"
        "         \"username\": \""

    ) ;

    tSayBody += T(psttUserP) ;

    tSayBody += T(

        "\",\r\n"
        "         \"apiKey\": \""

    ) ;

    tSayBody += T(psttKeyP) ;

    tSayBody += T(

        "\"\r\n"
        "      }\r\n"
        "   }\r\n"
        "}\r\n"

    ) ;

    TN( tRackApiIdentity , "identity.api.rackspacecloud.com" ) ;
    TN( tSay , 

        "POST /v2.0/tokens HTTP/1.1\r\n"
        "User-Agent: IPDOS (tm)\r\n"
        "Host: identity.api.rackspacecloud.com\r\n"
        "Accept: application/json\r\n"
        "Content-Type: application/json\r\n"
        "Content-Length: "

    ) ;
    tSay += TF4(tSayBody.csF(tinP),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa)+T("\r\n\r\n")+tSayBody ;

    etherC& etPrime = etherC::etPrimeIF( tinP ) ;
    etherC& etRock  = etherC::etRockIF( tinP ) ;

    ZE( osTextT* , postBody ) ;
    IFsCRATCH
    {
        SCOOPS

        etherC& etScratch = *tinP.pEtScratch ;

        while( !POOP && !etPrime )
        {
            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;

            //etRock.traceF( tinP , T("cloudC::openF / connecting        to ")+tRackApiIdentity ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , ether , tRackApiIdentity ) ) ;
            //etRock.traceF( tinP , T("cloudC::openF / perhaps connected to ")+tRackApiIdentity ) ;
            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

            ZE( countT , costBody ) ;
            ZE( boolT  , bChunked ) ;
            if( !POOP )
            {
                osTextT postLineBuffer[ TOCK ] ;
                ZE( countT , offb ) ;
                boolT bWoth = 1 ;
                TN( tContentLength , "Content-Length:" ) ;
                TN( tTransferEncoding , "Transfer-Encoding:" ) ;
                TN( tChunked , "chunked" ) ;
                for( offb = 0 ; !POOP && offb < sizeof postLineBuffer ; offb ++ )
                {
                    __Z( ss.readF( tinP , postLineBuffer + offb , 1 ) ) ;

                    if( !POOP && postLineBuffer[ offb ] == '\r' )         // IF I HAVE A LINE OF HEADER
                    {
                        postLineBuffer[ offb ] = 0 ;
                        TN( tLine , postLineBuffer ) ;

                        if( bWoth )
                        {
                            bWoth = 0 ;
                            __Z( offb ) ;

                            if( !POOP )
                            {
                                __NZ( 1 == ether.strIdF( tinP , tReplyCode401_Unauthorized , tLine ) ) ;
                                if( POOP )
                                {
                                    etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                                    break ;
                                }

                                __( !ether.strIdF( tinP , tReplyCode200_OK , tLine ) ) ;
                            }
                        }

                        if( !POOP )
                        {
                            if( offb )
                            {
                                postLineBuffer[ offb ] = 0 ;
                                //ether.traceF( tinP , T("header line: ")+T(postLineBuffer) ) ;
                            }

                            osTextT ostLF ;
                            __Z( ss.readF( tinP , &ostLF , 1 ) ) ;
                            __NZ( ostLF != '\n' ) ;
                        }

                        if( !POOP )
                        {
                            strokeS sttBlank( ' ' ) ;
                            if( 1 == ether.strIdF( tinP , tContentLength , tLine ) )
                            {
                                strokeS* psttLine = tLine ;
                                countT idf = tContentLength.csF( tinP ) + 1 ;
                                while( psttLine[ CSpREFIX - 1 + idf ] == sttBlank ) idf ++ ;
                                ZE( countT , idl ) ;

                                ZE( strokeS* , psttw ) ;
                                ether.strSubstringF( tinP , psttw , idf , idl , psttLine ) ; ___( psttw ) ;
                                costBody = ether.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
                                ether.delF( tinP , psttw ) ;
                            }
                            else if( 1 == ether.strIdF( tinP , tTransferEncoding , tLine ) )
                            {
                                bChunked = !!ether.strIdF( tinP , tChunked , tLine ) ;
                            }
                        }

                             if( !offb ) break ;
                        else if( !POOP ) offb = - 1 ;
                    }
                }
            }
            __Z( costBody || bChunked ) ;

            if( !POOP )
            {
                if( bChunked )
                {
                    __NZ( costBody ) ;

                    ether.newF( tinP , LF , postBody , TOCK ) ; ___( postBody ) ; //CAPACITY LIMIT FOR BODY
                    __Z( postBody ) ;

                    osTextT  postLengthBuffer[ TUCK ] = { 0 } ;

                    for( countT offl = 0 ; !POOP && offl < sizeof postLengthBuffer - 1 ; offl ++ )
                    {
                        if( !ss.readF( tinP , postLengthBuffer + offl , 1 ) ) { BLAMMO ; } ;
                        
                        if( postLengthBuffer[ offl ] == '\r' )
                        {
                            postLengthBuffer[ offl ] = 0 ;
                            thirdC::c_strlwrIF( tinP , postLengthBuffer) ;
                            countT costDo = ether.strDigitsToSCountF( tinP , T(postLengthBuffer) , 0 , 1 ) ;
                            offl = - 1 ;

                            if( !costDo ) break ;
                            else
                            {
                                ZE( countT , idFail ) ;

                                osTextT ostWo ;
                                     if( !ss.readF( tinP , &ostWo , 1 ) ) idFail = 1 ; // '\n'
                                else if( ostWo != '\n'                  ) idFail = 2 ;
                                else
                                {
                                    while( costDo && !POOP )
                                    {
                                        countT costGot = ss.readF( tinP , postBody + costBody , costDo ) ;
                                        __Z( costGot ) ;

                                        if( !POOP )
                                        {
                                            costBody += costGot ;
                                            costDo   -= costGot ;
                                        }
                                    }

                                    if( !POOP )
                                    {
                                             if( !ss.readF( tinP , &ostWo , 1 ) ) idFail = 3 ; // '\r'
                                        else if( ostWo != '\r'                  ) idFail = 4 ;
                                        else if( !ss.readF( tinP , &ostWo , 1 ) ) idFail = 5 ; // '\n'
                                        else if( ostWo != '\n'                  ) idFail = 6 ;
                                    }
                                }

                                if( idFail )
                                {
                                    etRock.traceF( tinP , T("cloudC::openF: unexpected character received [idFail,ostWo]: ")+TF2(idFail,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(ostWo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; 
                                    LOGrAW( "\r\ncloudC::openF: unexpected character received after receiving:\r\n\r\n" ) ;
                                    LOGrAW( postBody ) ;
                                    LOGrAW( "\r\n\r\n---- end ------------------------------------\r\n" ) ;

                                   __( idFail ) ;
                                }
                            }
                        }
                    }
                }
                else
                {
                    ether.newF( tinP , LF , postBody , costBody ) ; ___( postBody ) ;
                    __Z( postBody ) ;

                    if( !POOP ) { __Z( costBody == ss.readF( tinP , postBody , costBody ) ) ; }
                }
            }

            if( !POOP ) break ;
            else
            {
                POOPR
                etRock.traceF( tinP , T("cloudC::openF: could not obtain authorization reply; will retry after 1 tock") ) ;

                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ; // CALLER MIGHT HAVE GRABBED MY HANDLE TO PREVENT ACCESS WHILE MOMENTARILY CLOSED
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK ) ;
                }
                THREADmODE1rESTORE ;
            }
        }
    }

    // PARSING RULES
    // 
    //  FOR OBTAINING publicURL
    // 
    //   valueF: IF PATH IS "access" / "serviceCatalog" / "endpoints" / "publicURL"                 THEN STORE VALUE INTO tMaybePublicUrl1
    // 
    //   valueF: IF PATH IS "access" / "serviceCatalog" / "endpoints" / "internalURL"               THEN STORE VALUE INTO tMaybeInternalUrl1
    // 
    //   valueF: IF PATH IS "access" / "serviceCatalog" / "endpoints" / "region" AND VALUE IS "IAD" THEN SET flCLOUDoPENsCRATCH_MYrEGION
    // 
    //   IF PATH IS "access" / "serviceCatalog" / "endpoints"  AND ENCOUNTER "}"            THEN CLEAR flCLOUDoPENsCRATCH_MYrEGION tMaybePublicUrl1 tMaybeInternalUrl1 AFTER CONDITIONALLY STORING tMaybePublicUrl1  tMaybeInternalUrl1 INTO tMaybePublicUrl2 tMaybeInternalUrl2
    // 
    //   valueF: IF PATH IS "access" / "serviceCatalog" / "name"       AND VALUE IS "cloudFiles"    THEN SET flCLOUDoPENsCRATCH_CLOUDfILES
    // 
    //   IF PATH IS "access" / "serviceCatalog"                AND ENCOUNTER "}"            THEN CLEAR flCLOUDoPENsCRATCH_CLOUDfILES tMaybePublicUrl2 tMaybeInternalUrl2 AFTER CONDITIONALLY STORING tMaybePublicUrl2 tMaybeInternalUrl2 INTO tPublicURL tInternalURL
    // 

    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // ****                                                                                                                                          ****
    // **** SAMPLE JSON TEXT THAT I MUST PARSE                                                                                                       ****
    // ****                                                                                                                                          ****
    // **** WHAT FOLLOWS WAS OBTAINED BY LOGGING postBody AND THEN MANUALLY FORMATTING FOR READABILITY BY ADDING NEWLINES AND INDENTATION            ****
    // ****                                                                                                                                          ****
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // 
    // {
    //     "access"
    //     :
    //     {
    //         "serviceCatalog"
    //         :
    //         [
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.autoscale.api.rackspacecloud.com\/v1.0\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.autoscale.api.rackspacecloud.com\/v1.0\/921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.autoscale.api.rackspacecloud.com\/v1.0\/921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.autoscale.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"autoscale"
    //                 ,
    //                 "type":"rax:autoscale"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.backup.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.backup.api.rackspacecloud.com\/v1.0\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.backup.api.rackspacecloud.com\/v1.0\/921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.backup.api.rackspacecloud.com\/v1.0\/921871","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudBackup"
    //                 ,
    //                 "type":"rax:backup"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/iad.servers.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/iad.servers.api.rackspacecloud.com\/","versionInfo":"https:\/\/iad.servers.api.rackspacecloud.com\/v2","region":"IAD"}
    //                     ,
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/hkg.servers.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/hkg.servers.api.rackspacecloud.com\/","versionInfo":"https:\/\/hkg.servers.api.rackspacecloud.com\/v2","region":"HKG"}
    //                     ,
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/syd.servers.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/syd.servers.api.rackspacecloud.com\/","versionInfo":"https:\/\/syd.servers.api.rackspacecloud.com\/v2","region":"SYD"}
    //                     ,
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/dfw.servers.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/dfw.servers.api.rackspacecloud.com\/","versionInfo":"https:\/\/dfw.servers.api.rackspacecloud.com\/v2","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"cloudServersOpenStack"
    //                 ,
    //                 "type":"compute"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.loadbalancers.api.rackspacecloud.com\/v1.0\/921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.loadbalancers.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.loadbalancers.api.rackspacecloud.com\/v1.0\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.loadbalancers.api.rackspacecloud.com\/v1.0\/921871","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudLoadBalancers"
    //                 ,
    //                 "type":"rax:load-balancer"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.databases.api.rackspacecloud.com\/v1.0\/921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.databases.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.databases.api.rackspacecloud.com\/v1.0\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.databases.api.rackspacecloud.com\/v1.0\/921871","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudDatabases"
    //                 ,
    //                 "type":"rax:database"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.blockstorage.api.rackspacecloud.com\/v1\/921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.blockstorage.api.rackspacecloud.com\/v1\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.blockstorage.api.rackspacecloud.com\/v1\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.blockstorage.api.rackspacecloud.com\/v1\/921871","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudBlockStorage"
    //                 ,
    //                 "type":"volume"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/global.cdn.api.rackspacecloud.com\/v1.0\/921871","internalURL":"https:\/\/global.cdn.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"rackCDN"
    //                 ,
    //                 "type":"rax:cdn"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/identity.api.rackspacecloud.com\/v2.0","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"Cloud Auth Service"
    //                 ,
    //                 "type":"identity"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/dns.api.rackspacecloud.com\/v1.0\/921871"}
    //                 ]
    //                 ,
    //                 "name":"cloudDNS"
    //                 ,
    //                 "type":"rax:dns"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/","versionInfo":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/v2","region":"DFW"}
    //                     ,
    //                     {"versionId":"1","tenantId":"921871","publicURL":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/v1.0\/921871","versionList":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/","versionInfo":"https:\/\/dfw.bigdata.api.rackspacecloud.com\/v1.0","region":"DFW"}
    //                     ,
    //                     {"versionId":"2","tenantId":"921871","publicURL":"https:\/\/iad.bigdata.api.rackspacecloud.com\/v2\/921871","versionList":"https:\/\/iad.bigdata.api.rackspacecloud.com\/","versionInfo":"https:\/\/iad.bigdata.api.rackspacecloud.com\/v2","region":"IAD"}
    //                     ,
    //                     {"versionId":"1","tenantId":"921871","publicURL":"https:\/\/iad.bigdata.api.rackspacecloud.com\/v1.0\/921871","versionList":"https:\/\/iad.bigdata.api.rackspacecloud.com\/","versionInfo":"httpis:\/\/iad.bigdata.api.rackspacecloud.com\/v1.0","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudBigData"
    //                 ,
    //                 "type":"rax:bigdata"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.queues.api.rackspacecloud.com\/v1\/921871","internalURL":"https:\/\/snet-syd.queues.api.rackspacecloud.com\/v1\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.queues.api.rackspacecloud.com\/v1\/921871","internalURL":"https:\/\/snet-dfw.queues.api.rackspacecloud.com\/v1\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.queues.api.rackspacecloud.com\/v1\/921871","internalURL":"https:\/\/snet-iad.queues.api.rackspacecloud.com\/v1\/921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.queues.api.rackspacecloud.com\/v1\/921871","internalURL":"https:\/\/snet-hkg.queues.api.rackspacecloud.com\/v1\/921871","region":"HKG"}
    //                 ]
    //                 ,
    //                 "name":"cloudQueues"
    //                 ,
    //                 "type":"rax:queues"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.orchestration.api.rackspacecloud.com\/v1\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.orchestration.api.rackspacecloud.com\/v1\/921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.orchestration.api.rackspacecloud.com\/v1\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.orchestration.api.rackspacecloud.com\/v1\/921871","region":"HKG"}
    //                 ]
    //                 ,
    //                 "name":"cloudOrchestration"
    //                 ,
    //                 "type":"orchestration"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.feeds.api.rackspacecloud.com\/921871","internalURL":"https:\/\/atom.prod.dfw1.us.ci.rackspace.net\/921871","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/ord.feeds.api.rackspacecloud.com\/921871","internalURL":"https:\/\/atom.prod.ord1.us.ci.rackspace.net\/921871","region":"ORD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.feeds.api.rackspacecloud.com\/921871","internalURL":"https:\/\/atom.prod.syd2.us.ci.rackspace.net\/921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.feeds.api.rackspacecloud.com\/921871","internalURL":"https:\/\/atom.prod.iad3.us.ci.rackspace.net\/921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.feeds.api.rackspacecloud.com\/921871","internalURL":"https:\/\/atom.prod.hkg1.us.ci.rackspace.net\/921871","region":"HKG"}
    //                 ]
    //                 ,
    //                 "name":"cloudFeeds"
    //                 ,
    //                 "type":"rax:feeds"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.networks.api.rackspacecloud.com\/v2.0","region":"HKG"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.networks.api.rackspacecloud.com\/v2.0","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.networks.api.rackspacecloud.com\/v2.0","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.networks.api.rackspacecloud.com\/v2.0","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"cloudNetworks"
    //                 ,
    //                 "type":"network"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/global.metrics.api.rackspacecloud.com\/v2.0\/921871","region":"IAD"}
    //                 ]
    //                 ,
    //                 "name":"cloudMetrics"
    //                 ,
    //                 "type":"rax:cloudmetrics"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/iad.images.api.rackspacecloud.com\/v2","region":"IAD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/dfw.images.api.rackspacecloud.com\/v2","region":"DFW"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/syd.images.api.rackspacecloud.com\/v2","region":"SYD"}
    //                     ,
    //                     {"tenantId":"921871","publicURL":"https:\/\/hkg.images.api.rackspacecloud.com\/v2","region":"HKG"}
    //                 ]
    //                 ,
    //                 "name":"cloudImages"
    //                 ,
    //                 "type":"image"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/sites.api.rackspacecloud.com\/v1.0\/921871","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"cloudSites"
    //                 ,
    //                 "type":"rax:sites"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"921871","publicURL":"https:\/\/monitoring.api.rackspacecloud.com\/v1.0\/921871"}
    //                 ]
    //                 ,
    //                 "name":"cloudMonitoring"
    //                 ,
    //                 "type":"rax:monitor"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/storage101.iad3.clouddrive.com\/v1\/MossoCloudFS_921871","internalURL":"https:\/\/snet-storage101.iad3.clouddrive.com\/v1\/MossoCloudFS_921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/storage101.syd2.clouddrive.com\/v1\/MossoCloudFS_921871","internalURL":"https:\/\/snet-storage101.syd2.clouddrive.com\/v1\/MossoCloudFS_921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/storage101.hkg1.clouddrive.com\/v1\/MossoCloudFS_921871","internalURL":"https:\/\/snet-storage101.hkg1.clouddrive.com\/v1\/MossoCloudFS_921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/storage101.dfw1.clouddrive.com\/v1\/MossoCloudFS_921871","internalURL":"https:\/\/snet-storage101.dfw1.clouddrive.com\/v1\/MossoCloudFS_921871","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"cloudFiles"
    //                 ,
    //                 "type":"object-store"
    //             }
    //             ,
    //             {
    //                 "endpoints"
    //                 :
    //                 [
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/cdn5.clouddrive.com\/v1\/MossoCloudFS_921871","region":"IAD"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/cdn4.clouddrive.com\/v1\/MossoCloudFS_921871","region":"SYD"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/cdn6.clouddrive.com\/v1\/MossoCloudFS_921871","region":"HKG"}
    //                     ,
    //                     {"tenantId":"MossoCloudFS_921871","publicURL":"https:\/\/cdn1.clouddrive.com\/v1\/MossoCloudFS_921871","region":"DFW"}
    //                 ]
    //                 ,
    //                 "name":"cloudFilesCDN"
    //                 ,
    //                 "type":"rax:object-cdn"
    //             }
    //         ]
    //         ,
    //         "user"
    //         :
    //         {
    //             "RAX-AUTH:defaultRegion":"IAD"
    //             ,
    //             "roles"
    //             :
    //             [
    //                 {"name":"compute:default","tenantId":"921871","description":"A Role that allows a user access to keystone Service methods","id":"6"}
    //                 ,
    //                 {"name":"object-store:default","tenantId":"MossoCloudFS_921871","description":"A Role that allows a user access to keystone Service methods","id":"5"}
    //                 ,
    //                 {"name":"identity:default","description":"Default Role.","id":"2"}
    //                 ,
    //                 {"name":"object-store:admin","description":"Object Store Admin Role for Account User","id":"10000256"}
    //             ]
    //             ,
    //             "name":"ipdos.01"
    //             ,
    //             "id":"dd6192d72eb24966802a7199af266166"
    //         }
    //         ,
    //         "token"
    //         :
    //         {
    //             "expires":"2016-07-03T16:01:36.956Z"
    //             ,
    //             "RAX-AUTH:authenticatedBy":["APIKEY"]
    //             ,
    //             "id":"AAA_5-V7Na9UdhJVlmTwuP4K5fCwt0dm89MhEGj9cLeird2tDA21Zm91Ni97Jw-Q3NCEcBSSCLEJCuOejAPvlfQHAISTuyu570xXxkf5YPBeGXCO6vXKpMw9sFqzJV5SRRs6iO_-4MJ3mA"
    //             ,
    //             "tenant"
    //             :
    //             {
    //                 "name":"921871"
    //                 ,
    //                 "id":"921871"
    //             }
    //         }
    //     }
    // }
    // 
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // ****                                                                                                                                          ****
    // **** SAMPLE JSON TEXT THAT I MUST PARSE (END)                                                                                                 ****
    // ****                                                                                                                                          ****
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************
    // **************************************************************************************************************************************************

    //LOGrAW( "\r\nopenF [JSON postBody]:\r\n-------------------------------------------------------------------------------------\r\n" ) ;
    //LOGrAW( postBody ) ; //U::TO CRAFT
    //LOGrAW( "\r\n-------------------------------------------------------------------------------------\r\n" ) ;

    if( !POOP )
    {
        TN( tIn , "" ) ; // WILL CONTAIN A SINGLE, TRIMMED JSON WORD
        {
            osTextT* postJsonSq = thirdC::c_strstrIF( tinP , postBody , "[" ) ;
            osTextT* postJson   = thirdC::c_strstrIF( tinP , postBody , "{" ) ;
            if( postJsonSq && postJsonSq < postJson ) postJson = postJsonSq ;

            if( postJson )
            {
                ZE( countT , idLevel ) ;
                ZE( boolT  , bNix ) ;
                for( osTextT* postc = postJson ; *postc ; postc ++ )
                {
                    if( bNix )
                    {
                        *postc = 0 ;
                        break ;
                    }

                    switch( *postc )
                    {
                        case '[' :
                        case '{' : {        ++ idLevel              ; break ; }

                        case ']' :
                        case '}' : { if( !( -- idLevel ) ) bNix = 1 ; break ; }
                    }
                }

                tIn = T(postJson) ;
            }
        }

        cloudOpenScratchS openScratch( tinP , idCloudP , psttBuildingP ) ;
        stackC stPath( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;
        wordF( tinP , openScratch , stPath , tIn ) ;
    }
    ether.delF( tinP , postBody ) ;

    if( !POOP )
    {
        cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;

        textC& tUrl = F(flagsCt) & flCLOUDc_USEiNTERNALlAN
            ? cloudInfo.tRackspaceInternalUrl
            : cloudInfo.tRackspacePublicUrl
        ;

        //ether.traceF( tinP , T("cloud opened [tUrl]: ")+tUrl ) ;

        countT idfHost  = ether.strIdF( tinP , strokeS( '/' ) , tUrl , 2 ) ;
        countT idfShort = ether.strIdF( tinP , strokeS( '/' ) , tUrl , 3 ) ;

        ZE( strokeS* , psttHost  ) ;
        ZE( strokeS* , psttUrlCloudAgent ) ;
        if( idfHost && idfShort )
        {
            idfHost ++ ;
            countT idlHost = idfShort - 1 ;
            ZE( countT , idlShort ) ;
            ether.strSubstringF( tinP , psttHost          , idfHost  , idlHost  , tUrl ) ; ___( psttHost          ) ;
            ether.strSubstringF( tinP , psttUrlCloudAgent , idfShort , idlShort , tUrl ) ; ___( psttUrlCloudAgent ) ;
        }

        tHost          = T(psttHost) ;
        tUrlCloudAgent = T(psttUrlCloudAgent) ;

        ether.delF( tinP , psttHost ) ;
        ether.delF( tinP , psttUrlCloudAgent ) ;

        //ether.traceF( tinP , T("[tHost]: ")+tHost ) ;
        //ether.traceF( tinP , T("[tUrlCloudAgent]: ")+tUrlCloudAgent ) ;
    }

    bHandle.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138004.cloudc.openf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138006.cloudc.getcloudinfof BEGIN
#define DDNAME       "3func.36138006.cloudc.getcloudinfof"
#define DDNUMB      (countT)0x36138006
#define IDFILE      (countT)0x1545


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cloudC::getCloudInfoF( tinS& tinP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    TN( tSay , "" ) ;
    {
        // EXAMPLE OF QUERY (NO BODY IS SENT)
        // GET /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123?format=json HTTP/1.1
        // Host: storage.clouddrive.com
        // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c

        bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
        cloudInfoS& rAuthP = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
        tSay = T("GET ")+tUrlCloudAgent+T("?format=json HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+rAuthP.tRackspaceAccessToken+T("\r\n\r\n") ;
        bHandle.ungrabF( tinP ) ;
    }

    //ether.traceF( tinP , tSay ) ;

    socketC ss( tinP , ether , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
    ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , ether , tHost ) ) ;
    ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

    char postHear[ TOCK ] ; 
    thirdC::c_memsetIF( tinP , postHear , sizeof postHear ) ;
    countT costHear = ss.readF( tinP , postHear , sizeof postHear , flSOCKETcrEAD_STILLhUNGRYiSoK ) ;
    //ether.traceF( tinP , T(postHear) ) ;
    //ether.boxPutF( tinP , T("///d/tmp/x/foo.ttt") , postHear , costHear ) ;

    if( !POOP )
    {
        __Z( thirdC::c_memcmpIF( tinP , tReplyCode401_Unauthorized , postHear , tReplyCode401_Unauthorized.csF( tinP ) ) ) ;
        if( POOP ) etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;

        //{
        //    TN( tIn , "" ) ; // WILL CONTAIN A SINGLE, TRIMMED JSON WORD
        //    osTextT* postBody = thirdC::c_strstrIF( tinP , postHear , "\r\n\r\n" ) ;
        //    if( postBody )
        //    {
        //        osTextT* postJsonSq = thirdC::c_strstrIF( tinP , postBody , "[" ) ;
        //        osTextT* postJson   = thirdC::c_strstrIF( tinP , postBody , "{" ) ;
        //        if( postJsonSq && postJsonSq < postJson ) postJson = postJsonSq ;
        //
        //        if( postJson )
        //        {
        //            ZE( countT , idLevel ) ;
        //            ZE( boolT  , bNix ) ;
        //            for( osTextT* postc = postJson ; *postc ; postc ++ )
        //            {
        //                if( bNix )
        //                {
        //                    *postc = 0 ;
        //                    break ;
        //                }
        //
        //                switch( *postc )
        //                {
        //                    case '[' :
        //                    case '{' : {        ++ idLevel              ; break ; }
        //
        //                    case ']' :
        //                    case '}' : { if( !( -- idLevel ) ) bNix = 1 ; break ; }
        //                }
        //            }
        //
        //            tIn = T(postJson) ;
        //        }
        //    }
        //    //ether.boxPutF( tinP , T("///d/tmp/x/goo.ttt") , tIn , tIn.csF( tinP ) ) ;
        //    //ether.traceF( tinP , tIn ) ;
        //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138006.cloudc.getcloudinfof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138007.cloudc.wordf BEGIN
#define DDNAME       "3func.36138007.cloudc.wordf"
#define DDNUMB      (countT)0x36138007
#define IDFILE      (countT)0x1546


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cloudC::wordF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etRock = etherC::etRockIF( tinP ) ;
    //etRock.traceF( tinP , T("wordF [psttP]: ")+T(psttP) ) ;

    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
    cloudInfoS& rP = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
    // RECIPE
    // 
    // INPUT FORMAT SPECIFICATION
    // INPUT IS EXACTLY WO word
    //
    // word := { pair , pair , ... }
    //
    // pair := key : value
    // 
    // value := word
    //
    // value := [ word , word , ... ]
    //

    //VERIFY THAT psttP BEGINS WITH '{' AND ENDS WITH '}'
    __NZ( psttP[ CSpREFIX ].idAdam != '{' || psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam != '}' ) ;

    if( !POOP && psttP->idAdam > 2 )
    {
        const countT idWordWoth = 1 ;
        const countT idWordLath = psttP->idAdam ;

        ZE( countT , idLevel ) ;
        ZE( countT , idLevelLag ) ;
        countT idPairWoth = idWordWoth + 1 ;
        ZE( boolT , bIgnore ) ;
        ZE( countT , idsIgnoreWoth ) ;
        for( countT ids = idWordWoth ; ids <= idWordLath ; ids ++ )
        {
            idLevelLag = idLevel ;
            countT ostc = psttP[ CSpREFIX - 1 + ids ].idAdam ;

            if( ostc == '"' )
            {
                bIgnore = !bIgnore ;

                //if( bIgnore ) idsIgnoreWoth = ids ;
                //else
                //{
                //    countT idf = idsIgnoreWoth ;
                //    countT idl = ids ;
                //
                //    ZE( strokeS* , psttIgnored ) ;
                //    ether.strSubstringF( tinP , psttIgnored , idf , idl , psttP ) ; ___( psttIgnored ) ;
                //    ether.traceF( tinP , T("ignored: ")+T(psttIgnored) ) ;
                //    ether.delF( tinP , psttIgnored ) ;
                //}
            }

            if( bIgnore ) continue ;

            switch( ostc )
            {
                case '[' : { ++ idLevel ; break ; }

                case ']' : { -- idLevel ; break ; }

                case '{' : { ++ idLevel ; break ; }

                case '}' : { -- idLevel ; } // INTENTIONAL FALLTHROUGH

                case ',' :
                {
                    if( !idLevel || ( idLevel == 1 && ostc == ',' ) )
                    {
                        countT idPairLath = ids - 1 ;

                        ZE( strokeS* , psttPair ) ;
                        ether.strSubstringF( tinP , psttPair , idPairWoth , idPairLath , psttP ) ; ___( psttPair ) ;
                        ether.strTrimF( tinP , psttPair ) ; ___( psttPair ) ;
                        pairF( tinP , scrP , stPathP , psttPair ) ;
                        ether.delF( tinP , psttPair ) ;

                        idPairWoth = ids + 1 < idWordLath
                            ? ids + 1
                            : 0
                        ;
                    }
                }
            }

            //if( idLevelLag != idLevel )
            //{
            //    ether.traceF( tinP , T("[ids,idLevel]: ")+TF2(ids,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idLevel,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
            //}
        }
    }

    //CS:CODEsYNC: DUPLICATE CODE: 36138009 36138007
    TN( tPath , "" ) ;
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        if( stPathP )
        {
            do tPath += T((strokeS*)stPathP.upF(tinP,hWalk))+T("/") ;
            while( ~hWalk ) ;
        }
    }
    //etRock.traceF( tinP , T("wordF [tPath]: ")+tPath ) ;

    TN( tPathEndpoints      , "\"access\"/\"serviceCatalog\"/\"endpoints\"/" ) ;
    TN( tPathServiceCatalog , "\"access\"/\"serviceCatalog\"/" ) ;

    if( !ether.strCompareF( tinP , tPath , tPathEndpoints ) )
    {
        if( !F(scrP.flags) & flCLOUDoPENsCRATCH_MYrEGION )
        {
            //etRock.traceF( tinP , T("wordF / the word is for another region ") ) ;
        }
        else
        {
            scrP.tMaybePublicUrl2   = scrP.tMaybePublicUrl1   ;
            scrP.tMaybeInternalUrl2 = scrP.tMaybeInternalUrl1 ;
            //etRock.traceF( tinP , T("wordF / my region!  setting [tMaybePublicUrl2,tMaybeInternalUrl2]: ")+scrP.tMaybePublicUrl2+T(" ")+scrP.tMaybeInternalUrl2 ) ;
        }

        scrP.flags &= ~( F(flCLOUDoPENsCRATCH_MYrEGION) ) ;
        scrP.tMaybePublicUrl1 = scrP.tMaybeInternalUrl1 = T("") ;
    }
    else if( !ether.strCompareF( tinP , tPath , tPathServiceCatalog ) )
    {
        if( !F(scrP.flags) & flCLOUDoPENsCRATCH_CLOUDfILES )
        {
            //etRock.traceF( tinP , T("wordF / the word is not for cloud files ") ) ;
        }
        else
        {
            TN( tOld , "\\/" ) ;
            TN( tNew , "/" ) ;
            ZE( strokeS* , psttCleaned1 ) ;
            ZE( strokeS* , psttCleaned2 ) ;
            ether.strReplaceF( tinP , psttCleaned1 , scrP.tMaybePublicUrl2   , tOld , tNew , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( psttCleaned1 ) ;
            ether.strReplaceF( tinP , psttCleaned2 , scrP.tMaybeInternalUrl2 , tOld , tNew , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( psttCleaned2 ) ;

            ether.strTrimF( tinP , psttCleaned1 , 0 , 0 , T("\"") ) ; ___( psttCleaned1 ) ;
            ether.strTrimF( tinP , psttCleaned2 , 0 , 0 , T("\"") ) ; ___( psttCleaned2 ) ;

            rP.tRackspacePublicUrl   = T(psttCleaned1) ;
            rP.tRackspaceInternalUrl = T(psttCleaned2) ;
            ether.delF( tinP , psttCleaned1 ) ;
            ether.delF( tinP , psttCleaned2 ) ;
            //etRock.traceF( tinP , T("wordF / cloud files!  setting [tRackspacePublicUrl,tRackspaceInternalUrl]: ")+rP.tRackspacePublicUrl+T(" ")+rP.tRackspaceInternalUrl ) ;
        }

        scrP.flags &= ~( F(flCLOUDoPENsCRATCH_CLOUDfILES) ) ;
        scrP.tMaybePublicUrl2 = scrP.tMaybeInternalUrl2 = T("") ;
    }

    bHandle.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138007.cloudc.wordf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138008.cloudc.pairf BEGIN
#define DDNAME       "3func.36138008.cloudc.pairf"
#define DDNUMB      (countT)0x36138008
#define IDFILE      (countT)0x1547


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::pairF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
    cloudInfoS& rP = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;

    //etherC::etRockIF( tinP ).traceF( tinP , T("pairF [psttP]: ")+T(psttP) ) ;

    // RECIPE
    // 
    // INPUT FORMAT SPECIFICATION
    // INPUT IS EXACTLY WO word
    //
    // pair := key : value
    // 
    // value := word
    //
    // value := [ word , word , ... ]
    //

    if( psttP->idAdam > 2 )
    {
        const countT idPairWoth = 1 ;
        const countT idPairLath = psttP->idAdam ;

        ZE( countT , idLevel ) ;
        countT idKeyWoth = idPairWoth ;
        ZE( countT , idValueWoth ) ;
        ZE( boolT  , bIgnore ) ;
        ZE( countT , idsIgnoreWoth ) ;
        for( countT ids = idPairWoth ; ids <= idPairLath ; ids ++ )
        {
            countT ostc = psttP[ CSpREFIX - 1 + ids ].idAdam ;

            if( ostc == '"' ) bIgnore = !bIgnore ;
            if( bIgnore ) continue ;

            switch( ostc )
            {
                case '[' :
                case '{' : { ++ idLevel ; break ; }

                case ']' :
                case '}' : { -- idLevel ; break ; }

                case ':' :
                {
                    if( !idLevel && idKeyWoth )
                    {
                        countT idKeyLath = ids - 1 ;

                        ZE( strokeS* , psttKey ) ;
                        ether.strSubstringF( tinP , psttKey , idKeyWoth , idKeyLath , psttP ) ; ___( psttKey ) ;
                        ether.strTrimF( tinP , psttKey ) ; ___( psttKey ) ;
                        keyF( tinP , scrP , stPathP , psttKey ) ;
                        ether.delF( tinP , psttKey ) ;
                        idKeyWoth = 0 ;

                        idValueWoth = ids + 1 <= idPairLath
                            ? ids + 1
                            : 0
                        ;
                    }

                    break ;
                }
            }
        }

        if( !idLevel && idValueWoth )
        {
            ZE( strokeS* , psttValue ) ;
            ZE( countT , idValueLath ) ;
            ether.strSubstringF( tinP , psttValue , idValueWoth , idValueLath , psttP ) ; ___( psttValue ) ;
            ether.strTrimF( tinP , psttValue ) ; ___( psttValue ) ;
            valueF( tinP , scrP , stPathP , psttValue ) ;
            ether.delF( tinP , psttValue ) ;
            idValueWoth = 0 ;
        }
    }
    bHandle.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138008.cloudc.pairf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138009.cloudc.valuef BEGIN
#define DDNAME       "3func.36138009.cloudc.valuef"
#define DDNUMB      (countT)0x36138009
#define IDFILE      (countT)0x1548


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::valueF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
    cloudInfoS& rP = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;

    //CS:CODEsYNC: DUPLICATE CODE: 36138009 36138007
    TN( tPath , "" ) ;
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        if( stPathP )
        {
            do tPath += T((strokeS*)stPathP.upF(tinP,hWalk))+T("/") ;
            while( ~hWalk ) ;
        }
    }

    {
        TN( tPathPublicURL   , "\"access\"/\"serviceCatalog\"/\"endpoints\"/\"publicURL\"/"   ) ;
        TN( tPathInternalURL , "\"access\"/\"serviceCatalog\"/\"endpoints\"/\"internalURL\"/" ) ;
        TN( tPathRegion      , "\"access\"/\"serviceCatalog\"/\"endpoints\"/\"region\"/"      ) ;
        TN( tPathName        , "\"access\"/\"serviceCatalog\"/\"name\"/"                      ) ;
        TN( tPathToken       , "\"access\"/\"token\"/\"id\"/"                                 ) ;

        if( !ether.strCompareF( tinP , tPath , tPathPublicURL ) )
        {
            scrP.tMaybePublicUrl1 = T(psttP) ;
            //etherC::etRockIF( tinP ).traceF( tinP , T("valueF LOOKIEHERE! GOTwO! [scrP.tMaybePublicUrl1]: ")+scrP.tMaybePublicUrl1 ) ;
        }
        else if( !ether.strCompareF( tinP , tPath , tPathInternalURL ) )
        {
            scrP.tMaybeInternalUrl1 = T(psttP) ;
            //etherC::etRockIF( tinP ).traceF( tinP , T("valueF GOTwO! [scrP.tMaybeInternalUrl1]: ")+scrP.tMaybeInternalUrl1 ) ;
        }
        else if( !ether.strCompareF( tinP , tPath , tPathRegion ) )
        {
            if( !ether.strCompareF( tinP , T(psttP) , T("\"")+scrP.tBuilding+T("\"") ) )
            {
                //etherC::etRockIF( tinP ).traceF( tinP , T("valueF / setting flCLOUDoPENsCRATCH_MYrEGION") ) ;
                scrP.flags |= flCLOUDoPENsCRATCH_MYrEGION   ;
            }
        }
        else if( !ether.strCompareF( tinP , tPath , tPathName ) )
        {
            if( !ether.strCompareF( tinP , T(psttP) , T("\"cloudFiles\"") ) )
            {
                //etherC::etRockIF( tinP ).traceF( tinP , T("valueF / setting flCLOUDoPENsCRATCH_CLOUDfILES") ) ;
                scrP.flags |= flCLOUDoPENsCRATCH_CLOUDfILES ;
            }
        }
        else if( !ether.strCompareF( tinP , tPath , tPathToken ) )
        {
            ZE( strokeS* , psttw ) ;
            ether.strFromJsonF( tinP , psttw , psttP ) ; ___( psttw ) ;
            rP.tRackspaceAccessToken = T(psttw) ;
            ether.delF( tinP , psttw ) ;
            //etherC::etRockIF( tinP ).traceF( tinP , T("valueF GOTwO! [rP.tRackspaceAccessToken]: ")+rP.tRackspaceAccessToken ) ;
        }
    }

    if( psttP->idAdam ) switch( psttP[ CSpREFIX ].idAdam )
    {
        case '[' :
        {
            __NZ( psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam != ']' ) ;
            if( POOP ) break ;

            ZE( strokeS* , psttList ) ;
            countT idf = 2 ;
            countT idl = psttP->idAdam - 1 ;
            ether.strSubstringF( tinP , psttList , idf , idl , psttP ) ; ___( psttList ) ;
            listF( tinP , scrP , stPathP , psttList ) ;
            ether.delF( tinP , psttList ) ;
            break ;
        }
        case '{' :
        {
            __NZ( psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam != '}' ) ;
            if( POOP ) break ;

            wordF( tinP , scrP , stPathP , psttP ) ;
            break ;
        }
    }

    if( stPathP )
    {
        ZE( strokeS* , psttKey ) ;
        stPathP >> psttKey ;
        ether.delF( tinP , psttKey ) ;
    }

    bHandle.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138009.cloudc.valuef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800a.cloudc.itemf BEGIN
#define DDNAME       "3func.3613800a.cloudc.itemf"
#define DDNUMB      (countT)0x3613800a
#define IDFILE      (countT)0x1549


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::itemF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    //ether.traceF( tinP , T("[item]: ")+T(psttP) ) ;

    if( psttP->idAdam )
    {
        switch( psttP[ CSpREFIX ].idAdam )
        {
            case '[' :
            {
                __NZ( psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam != ']' ) ;
                if( POOP ) break ;

                ZE( strokeS* , psttList ) ;
                countT idf = 2 ;
                countT idl = psttP->idAdam - 1 ;
                ether.strSubstringF( tinP , psttList , idf , idl , psttP ) ; ___( psttList ) ;
                listF( tinP , scrP , stPathP , psttList ) ;
                ether.delF( tinP , psttList ) ;
                break ;
            }
            case '{' :
            {
                __NZ( psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam != '}' ) ;
                if( POOP ) break ;

                wordF( tinP , scrP , stPathP , psttP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800a.cloudc.itemf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800b.cloudc.listf BEGIN
#define DDNAME       "3func.3613800b.cloudc.listf"
#define DDNUMB      (countT)0x3613800b
#define IDFILE      (countT)0x154a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::listF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    //ether.traceF( tinP , T("[list]: ")+T(psttP) ) ;

    if( psttP->idAdam > 2 )
    {
        const countT idListWoth = 1 ;
        const countT idListLath = psttP->idAdam ;

        ZE( countT , idLevel ) ;
        countT idItemWoth = idListWoth ;
        ZE( boolT  , bIgnore ) ;
        ZE( countT , idsIgnoreWoth ) ;
        for( countT ids = idListWoth ; ids <= idListLath ; ids ++ )
        {
            countT ostc = psttP[ CSpREFIX - 1 + ids ].idAdam ;

            if( ostc == '"' ) bIgnore = !bIgnore ;
            if( bIgnore ) continue ;

            switch( ostc )
            {
                case '[' :
                case '{' : { ++ idLevel ; break ; }

                case ']' :
                case '}' : { -- idLevel ; break ; }

                case ',' :
                {
                    if( !idLevel )
                    {
                        countT idItemLath = ids - 1 ;

                        ZE( strokeS* , psttItem ) ;
                        ether.strSubstringF( tinP , psttItem , idItemWoth , idItemLath , psttP ) ; ___( psttItem ) ;
                        ether.strTrimF( tinP , psttItem ) ; ___( psttItem ) ;
                        itemF( tinP , scrP , stPathP , psttItem ) ;
                        ether.delF( tinP , psttItem ) ;

                        idItemWoth = ids + 1 <= idListLath
                            ? ids + 1
                            : 0
                        ;
                    }

                    break ;
                }
            }
        }

        if( idItemWoth )
        {
            ZE( strokeS* , psttItem ) ;
            ZE( countT , idItemLath ) ;
            ether.strSubstringF( tinP , psttItem , idItemWoth , idItemLath , psttP ) ; ___( psttItem ) ;
            ether.strTrimF( tinP , psttItem ) ; ___( psttItem ) ;
            itemF( tinP , scrP , stPathP , psttItem ) ;
            ether.delF( tinP , psttItem ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800b.cloudc.listf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800c.cloudc.keyf BEGIN
#define DDNAME       "3func.3613800c.cloudc.keyf"
#define DDNUMB      (countT)0x3613800c
#define IDFILE      (countT)0x154b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::keyF( tinS& tinP , cloudOpenScratchS& scrP , stackC& stPathP , const strokeS* const psttP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    //etherC& etRock = etherC::etRockIF( tinP ) ;
    //etRock.traceF( tinP , T("keyF [psttP]: ")+T(psttP) ) ;

    ZE( strokeS* , psttw ) ;
    ether.strMakeF( tinP , LF , psttw , psttP ) ; ___( psttw ) ;
    stPathP << psttw ;

    TN( tPath , "" ) ;
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            strokeS* psttWo = (strokeS*)stPathP.upF( tinP , hWalk ) ;
            tPath += !tPath.csF( tinP )
                ? T(psttWo)
                : T(" / ")+T(psttWo)
            ;
        }
        while( ~hWalk ) ;
    }

    //etRock.traceF( tinP , T("keyF [tPath]: ")+tPath ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800c.cloudc.keyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800d.cloudc.listfilesf BEGIN
#define DDNAME       "3func.3613800d.cloudc.listfilesf"
#define DDNUMB      (countT)0x3613800d
#define IDFILE      (countT)0x154c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT cloudC::listFilesF( tinS& tinP , const strokeS* const psttCloudContainerP , textC& tMarkerP , const strokeS* const psttLikeP , const countT cbMinP , const countT cbMaxP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    TN( tSay , "" ) ;
    {
        ZE( strokeS* , psttMarkerEncoded ) ;
        if( tMarkerP.csF( tinP ) ) { ether.strToUrlF( tinP , psttMarkerEncoded , tMarkerP ) ; ___( psttMarkerEncoded ) ; }

        // EXAMPLE OF QUERY (NO BODY IS SENT)
        // GET /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/test HTTP/1.1
        // Host: storage.clouddrive.com
        // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c

        tSay = T("GET ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("?format=json") ;
        if( psttMarkerEncoded ) tSay += T("&marker=")+T(psttMarkerEncoded) ;
        ether.delF( tinP , psttMarkerEncoded ) ;

        bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
        cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
        tSay += T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\n\r\n") ;
        bHandle.ungrabF( tinP ) ;
    }

    etherC& etRock = etherC::etRockIF( tinP ) ;
    //etRock.traceF( tinP , tSay ) ;

    ZE( countT , cGot ) ; // INCLUDES ITEMS FILTERED OUT BY FAILING TO MATCH psttLikeP
    IFsCRATCH
    {
        SCOOPS
        etherC& etScratch = *tinP.pEtScratch ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;

        static countT idInLath ;
        const countT idIn = ++ idInLath ;
        while( !etPrime && !ether && !POOP )
        {
            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
            etRock.traceF( tinP , T("listFilesF / connecting to \"")+tHost+T("\"") ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
            etRock.traceF( tinP , T(POOP?"listFilesF / could not connect to \"":"listFilesF / connected to \"")+tHost+T("\"") ) ;

            //LOGrAW( "\r\n---------------------------------------------------------------------------------------------\r\n" ) ;
            //LOGrAW( tSay ) ; //U:: TO FIND A BUG
            //LOGrAW( "\r\n---------------------------------------------------------------------------------------------\r\n" ) ;

            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

            //LOAD THE REPLY HEADER
            ZE( countT , costBody ) ;
            {
                osTextT postHead[ TOCK ] ; 
                thirdC::c_memsetIF( tinP , postHead , sizeof postHead ) ;

                osTextT* postc = postHead ;
                osTextT* poste = postHead + sizeof postHead - 1 ;

                ZE( boolT , bGotHead ) ;
                while( postc < poste && ss.readF( tinP , postc , 1 ) )
                {
                    if( postc - postHead >= 3 && postc[ 0 ] == '\n' && postc[ - 1 ] == '\r' && postc[ - 2 ] == '\n' && postc[ - 3 ] == '\r' )
                    {
                        postc[ -3 ] = 0 ;
                        bGotHead = 1 ;
                        break ;
                    }

                    postc ++ ;
                }
                __Z( bGotHead ) ;

                if( POOP )
                {
                    POOPR

                    etRock.traceF( tinP , T("listFilesF 1 / connect, write, or read failed / will retry after napping for 01 tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK << 4 ) ;

                    continue ;
                }

                //LOGrAW( "\r\n-------- REPLY HEADER: ----------------------------------------------------------------------\r\n" ) ;
                //LOGrAW( postHead ) ; //U:: TO FIND A BUG
                //LOGrAW( "\r\n---------------------------------------------------------------------------------------------\r\n" ) ;

                __Z( thirdC::c_memcmpIF( tinP , tReplyCode401_Unauthorized , postHead , tReplyCode401_Unauthorized.csF( tinP ) ) ) ;
                if( POOP )
                {
                    etRock.traceF( tinP , T("authorization refused") ) ;
                    break ;
                }

                if( !thirdC::c_memcmpIF( tinP , postHead , tReplyCode204_NoContent , tReplyCode204_NoContent.csF( tinP ) ) ) break ;

                __NZ( thirdC::c_memcmpIF( tinP , postHead , tReplyCode200_OK , tReplyCode200_OK.csF( tinP ) ) ) ;
                if( POOP )
                {
                    POOPR

                    etRock.traceF( tinP , T(postHead) ) ;
                    etRock.traceF( tinP , T("listFilesF 1 / unexpected reply code / will retry after napping for 01 tock") ) ;
                    etRock.traceF( tinP , T("listFilesF 1 / suggestion: verify that this container exists:    ")+T(psttCloudContainerP) ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK << 4 ) ;

                    continue ;
                }

                osTextT postTag[] = "\r\nContent-Length:" ;

                postc = thirdC::c_strstrIF( tinP , postHead , postTag ) ;
                if( postc )
                {
                    postc += sizeof postTag - 1 ;
                    while( *postc == ' ' ) postc ++ ;
                    poste = postc ;
                    while( *poste >= '0' && *poste <= '9' ) poste ++ ;
                    *poste = 0 ;

                    costBody = thirdC::c_atoiForeignDecimalIF( postc , 0 ) ;
                }
            }

            ZE( osTextT* , postBody ) ;
            ether.newF( tinP , LF , postBody , costBody + 1 ) ; ___( postBody ) ;
            __Z( postBody ) ;

            osTextT postShort[ TUCK ] = "" ;
            if( POOP ) etRock.traceF( tinP , T("listFilesF / could not get pool drop") ) ;
            else
            {
                postBody[ costBody ] = 0 ;

                {
                    osTextT* posti = postBody ;
                    countT cDo = costBody ;
                    while( !POOP && cDo )
                    {
                        countT costBite = ss.readF( tinP , posti , cDo ) ;
                        __Z( costBite ) ;
                        posti += costBite ;
                        cDo   -= costBite ;
                    }
                }

                if( POOP )
                {
                    POOPR

                    etRock.traceF( tinP , T("listFilesF 2 / connect, write, or read failed / will retry after napping for 01 tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK << 4 ) ;

                    continue ;
                }

                //LOGrAW( "\r\n-------- REPLY HEADER: ----------------------------------------------------------------------\r\n" ) ;
                //LOGrAW( postBody ) ; //U:: TO FIND A BUG
                //LOGrAW( "\r\n---------------------------------------------------------------------------------------------\r\n" ) ;

                // THIS IS WHAT THE RESPONSE LOOKS LIKE (WITH BLACKSPACE ADDED FOR READABILITY)
                //
                //    [
                //        {
                //            "hash": "b780cb58f1e55912cac006cb7594edac"
                //            ,
                //            "last_modified": "2014-12-10T05:54:07.596160"
                //            ,
                //            "bytes": 6
                //            ,
                //            "name": "1"
                //            ,
                //            "content_type": "application/octet-stream"
                //        }
                //        ,
                //        {
                //            "hash": "3918695a4255570e86d32b315f1cef37"
                //            ,
                //            "last_modified": "2014-12-10T05:54:08.325520"
                //            ,
                //            "bytes": 14
                //            ,
                //            "name": "2"
                //            ,
                //            "content_type": "application/octet-stream"
                //        }
                //    ]

                osTextT* postSets = thirdC::c_strstrIF( tinP , postBody , "[" ) ;
                __Z( postSets ) ;

                if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find open square bracket") ) ;
                else
                {
                    __( postSets - postBody ) ;

                    if( POOP ) etRock.traceF( tinP , T("listFilesF / the woth open square bracket is not exactly at the beginning of the body as expected") ) ;
                    else
                    {
                        postSets ++ ;
                        osTextT* poste = postBody + costBody - 1 ;

                        __( *poste - ']' ) ;

                        if( POOP ) etRock.traceF( tinP , T("listFilesF / lath character in body is not close square bracket") ) ;
                        else
                        {
                            {
                                osTextT* postv = thirdC::c_strstrIF( tinP , postSets , "]" ) ;
                                if( poste - postv )
                                {
                                    etRock.traceF( tinP , T("listFilesF / unexpected close square bracket encountered in:") ) ;
                                    osTextT* postDump = postv - 0x20 ;
                                    if( postDump < postSets ) postDump = postSets ;
                                    etRock.traceF( tinP , T("dump: ")+T(postDump) ) ;
                                    etRock.traceF( tinP , T("listFilesF / if this is in a file name, please rename the file to eliminate square (and curly) brackets") ) ;
                                }
                            }

                            *poste = 0 ;

                            osTextT* postc = postSets ;

                            osTextT postKey[] = "\"name\":" ;
                            osTextT postKeyIgnore[] = "\"content_type\": \"application/directory\"" ;
                            while( !POOP && postc && *postc )
                            {
                                osTextT* postSet = thirdC::c_strstrIF( tinP , postc , "{" ) ;
                                if( !postSet ) break ;

                                postSet ++ ;

                                osTextT* poste = thirdC::c_strstrIF( tinP , postSet , "}" ) ;
                                __Z( poste ) ;

                                if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find close curly bracket") ) ;
                                else
                                {
                                    *poste = 0 ;
                                    postc = poste + 1 ;

                                    //LOGrAW( "\r\n---------- SET BEGIN ----------------\r\n" ) ;
                                    //LOGrAW( postSet ) ;
                                    //LOGrAW( "\r\n---------- SET END ----------------\r\n" ) ;

                                    //    ---------- SET BEGIN ----------------
                                    //    "hash": "b780cb58f1e55912cac006cb7594edac", "last_modified": "2014-12-10T05:54:07.596160", "bytes": 6, "name": "1", "content_type": "application/octet-stream"
                                    //    ---------- SET END ----------------

                                    ZE( boolT , bIgnoreName ) ;
                                    {
                                        osTextT* postc = thirdC::c_strstrIF( tinP , postSet , postKey ) ;
                                        __Z( postc ) ;

                                        bIgnoreName = !!thirdC::c_strstrIF( tinP , postSet , postKeyIgnore ) ;

                                        if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find \"name\" key") ) ;
                                        else
                                        {
                                            postc += sizeof postKey - 1 ;
                                            while( *postc == ' ' ) postc ++ ;
                                            __NZ( *postc != '"' ) ;

                                            if( POOP ) etRock.traceF( tinP , T("listFilesF / woth nonblank in name is not double quote") ) ;
                                            else
                                            {
                                                postc ++ ;
                                                osTextT* poste = thirdC::c_strstrIF( tinP , postc , "\"" ) ;
                                                __Z( poste ) ;

                                                if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find trailing double quote for name") ) ;
                                                else if( !bIgnoreName )
                                                {
                                                    *poste = 0 ;
                                                    thirdC::c_strncpyIF( tinP , postShort , postc , sizeof postShort ) ;
                                                }
                                            }
                                        }
                                    }

                                    if( !bIgnoreName && psttLikeP && psttLikeP->idAdam )
                                    {
                                        bIgnoreName = !ether.strFileMatchF( tinP , psttLikeP , T(postShort) ) ;
                                        if( bIgnoreName ) cGot ++ ;
                                    }

                                    if( !bIgnoreName )
                                    {
                                        metaS meta( tinP ) ;
                                        {
                                            osTextT postKey[] = "\"bytes\":" ;
                                            osTextT* postc = thirdC::c_strstrIF( tinP , postSet , postKey ) ;
                                            __Z( postc ) ;

                                            if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find \"bytes\" key") ) ;
                                            else
                                            {
                                                postc += sizeof postKey - 1 ;
                                                while( *postc == ' ' ) postc ++ ;

                                                osTextT* poste = postc ;
                                                while( *poste >= '0' && *poste <= '9' ) poste ++ ;
                                                *poste = 0 ;

                                                meta.cbUsed = thirdC::c_atoiForeignDecimalIF( postc , 0 ) ;
                                            }
                                        }

                                        ZE( boolT , bIgnoreSize ) ;
                                        {
                                            if
                                            (
                                                ( cbMinP && meta.cbUsed < cbMinP )
                                                ||
                                                ( cbMaxP && meta.cbUsed > cbMaxP )
                                            )
                                            bIgnoreSize = 1 ;
                                        }

                                        if( !bIgnoreSize )
                                        {
                                            {
                                                osTextT postKey[] = "\"hash\":" ;
                                                osTextT* postc = thirdC::c_strstrIF( tinP , postSet , postKey ) ;
                                                __Z( postc ) ;

                                                if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find \"hash\" key") ) ;
                                                else
                                                {
                                                    postc += sizeof postKey - 1 ;
                                                    while( *postc == ' ' ) postc ++ ;
                                                    __NZ( *postc != '"' ) ;

                                                    if( POOP ) etRock.traceF( tinP , T("listFilesF / woth nonblank in hash is not double quote") ) ;
                                                    else
                                                    {
                                                        postc ++ ;
                                                        osTextT* poste = thirdC::c_strstrIF( tinP , postc , "\"" ) ;
                                                        __Z( poste ) ;

                                                        if( POOP ) etRock.traceF( tinP , T("listFilesF / could not find trailing double quote for hash") ) ;
                                                        else
                                                        {
                                                            *poste = 0 ;
                                                            __( thirdC::c_strlenIF( tinP , postc ) - 0x20 ) ;

                                                            if( POOP ) etRock.traceF( tinP , T("listFilesF / length of hash is not 02") ) ;
                                                            else
                                                            {
                                                                // b780cb58f1e55912cac006cb7594edac

                                                                for( countT offo = 0 ; offo < 4 ; offo ++ )
                                                                {
                                                                    osTextT postr[] = { postc[ 6 ] , postc[ 7 ] , postc[ 4 ] , postc[ 5 ] , postc[ 2 ] , postc[ 3 ] , postc[ 0 ] , postc[ 1 ] , 0 } ;
                                                                    meta.pcHashMd5[ offo ] = thirdC::c_atoiForeignIF( postr , 0 ) ;
                                                                    postc += 8 ;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            //THIS IS THE POINT OF NO RETURN SINCE I AM ABOUT TO MODIFY btP ; IF POOP OCCURS, THERE'S NO WAY FOR ME TO CLEAN UP
                                            if( POOP ) etRock.traceF( tinP , T("listFilesF / impotent, so not adding to kvFileMetaByNameRemote") ) ;
                                            else
                                            {
                                                etRock.traceF( tinP , T("remoteFile: ")+T(postShort) , flTRACE_null , ifcIDtRACEdIVERT_8 ) ; //U:: SUPPRESS THIS UNLESS FLAG IS SET BY THE CONSTRUCTOR CALLER

                                                osTextT postReversedBits[ sizeof postShort ] ; // TOCK TO AVOID LIMITING FILE NAME LENGTH ; THIS COULD BE ALLOCATED FROM THE POOL TO LENGTH OF postHead STRING
                                                byteT* posti = postShort ;
                                                byteT* posto = postReversedBits ;
                                                while( *posti ) *( posto ++ ) = reverseBitsF( *( posti ++ ) ) ; // SO TREE WILL SORT EACH BYTE BY MSB (BIG-ENDIAN), PRODUCING THE NORMAL COLLATING SEQUENCE
                                                *posto = 0 ;
                                                countT costo = posto - postReversedBits ;

                                                cGot ++ ;
                                                ((keyValuePairsC*)pb_kvFileMetaByNameRemote)->newF( tinP , LF , postReversedBits , 0 , costo * SB , (byteT*)&meta , sizeof meta ) ;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            ether.delF( tinP , postBody ) ;

            tMarkerP = T(postShort) ;
            etRock.traceF( tinP , T("marker: \"")+tMarkerP+T("\"") ) ;
            break ;
        }
    }

    return cGot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800d.cloudc.listfilesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800e.cloudc.pushfilef BEGIN
#define DDNAME       "3func.3613800e.cloudc.pushfilef"
#define DDNUMB      (countT)0x3613800e
#define IDFILE      (countT)0x154d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::pushFileF( tinS& tinP , batonC& batConnectP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP , const strokeS* const psttLocalContainerP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttCloudContainerP ) ;
        __Z( psttLocalContainerP ) ;
        __Z( psttShortP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etRock = etherC::etherC::etRockIF( tinP ) ;
    etRock.traceF( tinP , T("pushing: ")+T(psttShortP) ) ;

    //U::TO TEST AND FIND A BUG
    //static countT idInLath ;
    //countT idIn = 1 + incv02AM( idInLath ) ;
    //
    //ZE( boolT , bFuckItUp ) ;
    //if( !( idIn % 0x4 ) )
    //{
    //    etherC::etRockIF( tinP ).traceF( tinP , T("simulating a permanent error for this file because idIn is ")+TF2(idIn,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
    //    bFuckItUp = 1 ;
    //}

    //LOGrAW( tSay ) ;
    //etRock.traceF( tinP , T("the PUT utterance has been appended to the log") ) ;

    //ZE( boolT , bPermanentFailure ) ;
    IFsCRATCH
    {
        SCOOPS

        const boolT bGhost = F(flagsCtF()) & flCLOUDc_GHOST ;
        char postHear[ TOCK ] ; 
        ZE( countT , costHear ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;
        //countT cForgive = 0x4 ;
        TN( tn , "" ) ;
        TN( tSay , "" ) ;
        while( !etPrime && !POOP )
        {
            if( !tSay.csF( tinP ) )
            {
                ZE( strokeS* , psttShortUrlEncoded ) ;
                etScratch.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

                // EXAMPLE
                // 
                // PUT /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
                // Host: storage.clouddrive.com
                // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
                // Content-Length: 512000
                //  
                // [ ...object content... ]
                // 

                ZE( countT , cbUsed ) ;
                if( !bGhost )
                {
                    fileC fi( tinP , (strokeS*)( T(psttLocalContainerP)+T(psttShortP) ) , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO ) ;
                    ZE( infoFileS* , pInfo ) ;
                    etScratch.diskFileQueryF( tinP , pInfo , fi ) ;
                    if( pInfo ) cbUsed = pInfo->cbUsed ;
                    DEL( pInfo ) ;
                }

                {
                    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
                    tSay = T("PUT ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\nContent-Length: ")+TF4(cbUsed,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa)+T("\r\n\r\n") ;
                    bHandle.ungrabF( tinP ) ;
                }
                etScratch.delF( tinP , psttShortUrlEncoded ) ;
            }

            {
                //countT idleTimeAllowedRead  = TICK >> 1 ;
                //countT idleTimeAllowedWrite = TICK >> 1 ;
                socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL /*, &idleTimeAllowedRead , &idleTimeAllowedWrite*/ ) ;
                batConnectP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
                ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;
                batConnectP.ungrabF( tinP ) ;

                if( !bGhost )
                {
                    ZE( countT , cbUsed ) ;
                    fileC fi( tinP , (strokeS*)( T(psttLocalContainerP)+T(psttShortP) ) , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO ) ;
                    {
                        ZE( infoFileS* , pInfo ) ;
                        etScratch.diskFileQueryF( tinP , pInfo , fi ) ;
                        if( pInfo ) cbUsed = pInfo->cbUsed ;
                        DEL( pInfo ) ;
                    }

                    countT cbChunk = cbUsed > TOCK
                        ? TOCK
                        : cbUsed
                    ;
                
                    ZE( byteT* , pbBuffer ) ;
                    etScratch.newF( tinP , LF , pbBuffer , cbChunk ) ; ___( pbBuffer ) ;
                
                    if( pbBuffer )
                    {
                        countT cDoLo = cbUsed ;
                        countT cDoHi = 0   ;
                
                        while( cDoHi || cDoLo )
                        {
                            countT cbNow = cbChunk ;
                            if( !cDoHi && cbNow > cDoLo ) cbNow = cDoLo ;
                
                            if( cDoLo < cbNow ) cDoHi -- ;
                            cDoLo -= cbNow ;
                
                            etScratch.fileReadF( tinP , pbBuffer , cbNow , fi ) ;
                            ss.writeF(           tinP , pbBuffer , cbNow      ) ;
                        }
                    }
                    etScratch.delF( tinP , pbBuffer ) ;
                }

                thirdC::c_memsetIF(  tinP , postHear , sizeof postHear ) ;
                costHear = ss.readF( tinP , postHear , sizeof postHear , flSOCKETcrEAD_STILLhUNGRYiSoK ) ;
            }

            //if( bFuckItUp )
            //{
            //    etherC::etRockIF( tinP ).traceF( tinP , T("simulated connect write or read error") ) ;
            //    __1
            //}

            if( POOP )
            {
                POOPR

                //if( cForgive -- )
                //{
                    //etherC::etRockIF( tinP ).traceF( tinP , T("pushFileF / connect , write, or read failed ; forgiven ; will retry after napping 01 tock.  (")+TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" remain)") ) ;
                    etherC::etRockIF( tinP ).traceF( tinP , T("pushFileF / connect , write, or read failed ; forgiven ; will retry after napping 8 tock.") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK << 3 ) ;
                    continue ;
                //}
                //else
                //{
                //    bPermanentFailure = 1 ;
                //    etherC::etRockIF( tinP ).traceF( tinP , T("pushFileF / connect , write, or read failed ; not forgiven") ) ;
                //    break ;
                //}
            }

            TN( tHear , postHear ) ;

            __NZ( 1 == etScratch.strIdF( tinP , tReplyCode401_Unauthorized , tHear ) ) ;

            if( POOP )
            {
                POOPR

                etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused ; obtaining new authorization") ) ;
                bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                hCloud.closeIfF() ;
                openF( tinP , idCloud , tBuilding , tUser , tPassword ) ;
                bHandle.ungrabF( tinP ) ;
                tSay = tn ;

                continue ;
            }

            if( etScratch.strIdF( tinP , tReplyCode202_Accepted , tHear ) ) etherC::etRockIF( tinP ).traceF( tinP , T("\"accepted\" response received, which is not satisfactory so i will retry") ) ;

            boolT bOk =
                !!etScratch.strIdF( tinP , tReplyCode201_Created , tHear )
                //&&
                //!etScratch.strIdF( tinP , tReplyCode202_Accepted , tHear )
            ;

            __Z( bOk ) ;

            if( POOP )
            {
                POOPR
                etherC::etRockIF( tinP ).traceF( tinP , tHear ) ;
                etherC::etRockIF( tinP ).traceF( tinP , T("pushFileF / unexpected or unsatisfactory reply (only \"created\" is satisfactory) ; will retry after napping 1 tick") ) ;

                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                etPrime.osSleepF( tinP , TICK << 0 ) ; // NAP IS LONG TO DEACTIVATE THIS THREAD SO THAT OTHER THREADS HAVE A CHANCE TO COMPLETE ; THIS IS INTENDED TODYNAMICALLY RESPOND TO CHANGING CONNECTIVITY AND SERVER RESPONSIVENESS CONDITIONS
                continue ;
            }
            else
            {
                etherC::etRockIF( tinP ).traceF( tinP , T("pushed : ")+T(psttShortP) ) ;
            }

            break ;
        }
    }

    //__NZ( bPermanentFailure ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800e.cloudc.pushfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800f.cloudc.deleteremotefilef BEGIN
#define DDNAME       "3func.3613800f.cloudc.deleteremotefilef"
#define DDNUMB      (countT)0x3613800f
#define IDFILE      (countT)0x154e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cloudC::deleteRemoteFileF( tinS& tinP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttCloudContainerP ) ;
        __Z( psttShortP ) ;
        if( POOP ) return ;
    }

    _IO_

    TN( tSay , "" ) ;
    {
        ZE( strokeS* , psttShortUrlEncoded ) ;
        ether.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

        // EXAMPLE
        // 
        // DELETE /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
        // Host: storage.clouddrive.com
        // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
        //  

        {
            bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
            cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
            tSay = T("DELETE ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\n\r\n") ;
            bHandle.ungrabF( tinP ) ;
        }
        ether.delF( tinP , psttShortUrlEncoded ) ;
    }

    //LOGrAW( tSay ) ;
    //ether.traceF( tinP , T("the DELETE utterance has been appended to the log") ) ;

    ZE( boolT , bPermanentFailure ) ;
    IFsCRATCH
    {
        SCOOPS

        char postHear[ TOCK ] ; 
        ZE( countT , costHear ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;
        countT cForgive = 0x2 ;
        while( !etPrime && !POOP )
        {
            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

            thirdC::c_memsetIF(  tinP , postHear , sizeof postHear ) ;
            costHear = ss.readF( tinP , postHear , sizeof postHear , flSOCKETcrEAD_STILLhUNGRYiSoK ) ;

            TN( tHear , postHear ) ;

            if( POOP )
            {
                POOPR

                if( cForgive -- )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / connect , write, or read failed ; forgiven ; will retry after napping 01 tock.  (")+TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" remain)") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK << 4 ) ;
                    continue ;
                }
                else
                {
                    bPermanentFailure = 1 ;
                    etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / connect , write, or read failed ; not forgiven") ) ;
                    break ;
                }
            }

            __NZ( 1 == ether.strIdF( tinP , tReplyCode401_Unauthorized , tHear ) ) ;
            if( POOP )
            {
                POOPR
                bPermanentFailure = 1 ;
                etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                break ;
            }

            __( !ether.strIdF( tinP , tReplyCode204_NoContent , tHear ) && !ether.strIdF( tinP , tReplyCode404_NotFound , tHear ) ) ;
            if( POOP )
            {
                POOPR
                etherC::etRockIF( tinP ).traceF( tinP , tHear ) ;
                etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / unexpected reply (other than \"no content\" or \"not found\") ; will retry after napping 01 tock") ) ;

                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                etPrime.osSleepF( tinP , TOCK << 4 ) ;
                continue ;
            }

            break ;
        }
    }

    __NZ( bPermanentFailure ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.3613800f.cloudc.deleteremotefilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138010.cloudc.queryremotefilef BEGIN
#define DDNAME       "3func.36138010.cloudc.queryremotefilef"
#define DDNUMB      (countT)0x36138010
#define IDFILE      (countT)0x154f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT cloudC::queryRemoteFileF( tinS& tinP , countT& cbLoP , countT& cbHiP , strokeS*& psttHashP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( cbLoP ) ;
        __NZ( cbHiP ) ;
        __NZ( psttHashP ) ;
        __Z( psttCloudContainerP ) ;
        __Z( psttShortP ) ;
        if( POOP ) return ;
    }

    _IO_

    TN( tSay , "" ) ;
    {
        ZE( strokeS* , psttShortUrlEncoded ) ;
        ether.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

        // EXAMPLE
        // 
        // HEAD /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
        // Host: storage.clouddrive.com
        // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
        //  

        {
            bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
            cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
            tSay = T("HEAD ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\n\r\n") ;
            bHandle.ungrabF( tinP ) ;
        }
        ether.delF( tinP , psttShortUrlEncoded ) ;
    }

    //LOGrAW( tSay ) ;
    //ether.traceF( tinP , T("the HEAD utterance has been appended to the log") ) ;

    IFsCRATCH
    {
        char postHear[ TOCK ] ; 
        ZE( countT , costHear ) ;
        ZE( boolT , bOk ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;
        //boolT bWoth = 1 ; //U::TO FIND A BUG
        countT cTries = TUCK >> 5 ;
        while( cTries -- && !etPrime && !POOP )
        {
            SCOOPS

            //if( bWoth ) //U:: TO FIND A BUG
            //{
            //    bWoth = 0 ;
            //    __1 ;
            //}

            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

            thirdC::c_memsetIF(  tinP , postHear , sizeof postHear ) ;
            costHear = ss.readF( tinP , postHear , sizeof postHear , flSOCKETcrEAD_STILLhUNGRYiSoK ) ;

            TN( tHear , postHear ) ;
            ether.traceF( tinP , T(postHear) ) ;

            if( !POOP )
            {
                __NZ( 1 == ether.strIdF( tinP , tReplyCode401_Unauthorized , tHear ) ) ;
                if( POOP )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                    break ;
                }

                __( !ether.strIdF( tinP , tReplyCode200_OK , tHear ) ) ;

                if( !POOP )
                {
                    bOk = 1 ;
                    break ;
                }
                else
                {
                    POOPR ;

                    ether.traceF( tinP , T("will retry after napping for a tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK ) ;
                }
            }
        }

        if( bOk )
        {
            osTextT postTagLength[] = "\nContent-Length:" ;
            osTextT postTagHash[] = "\nEtag:" ;

            osTextT* postc1 = thirdC::c_strstrIF( tinP , postHear , postTagLength ) ;
            osTextT* postc2 = thirdC::c_strstrIF( tinP , postHear , postTagHash ) ;

            if( postc1 )
            {
                postc1 += sizeof postTagLength - 1 ;
                while( *postc1 == ' ' ) postc1 ++ ;

                osTextT* poste = postc1 ;
                while( *poste && *poste != '\r' && *poste != '\n' ) poste ++ ;
                *poste = 0 ;

                cbLoP = ether.strDigitsToSCountF( tinP , T(postc1) , 0xa , 1 ) ;
                cbHiP = 0 ; //U::SUPPORT LARGE FILES
            }

            if( postc2 )
            {
                postc2 += sizeof postTagHash - 1 ;
                while( *postc2 == ' ' ) postc2 ++ ;

                osTextT* poste = postc2 ;
                while( *poste && *poste != '\r' && *poste != '\n' ) poste ++ ;
                *poste = 0 ;
                ether.strMakeFromOsTextF( tinP , psttHashP , postc2 ) ; ___( psttHashP ) ;
            }

            //static countT idInLath ;
            //countT idIn = ++ idInLath ;
            //etScratch.boxPutF( tinP , T("///d/tmp/x/query.reply.")+TF2(idIn,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(".ttt") , postHear , costHear ) ;
            if( POOP ) POOPR ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138010.cloudc.queryremotefilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138011.cloudc.pullfilef BEGIN
#define DDNAME       "3func.36138011.cloudc.pullfilef"
#define DDNUMB      (countT)0x36138011
#define IDFILE      (countT)0x1550


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::pullFileF( tinS& tinP , byteT*& pbP , countT& cbP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP , const countT cTriesP )/*1*/
{
    SCOOP

    etherC& etRock = etherC::etRockIF( tinP ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( pbP ) ;
        __NZ( cbP ) ;
        __Z( psttCloudContainerP ) ;
        __Z( psttShortP ) ;
        if( POOP ) return ;
    }

    _IO_

    //LOGrAW( tSay ) ;
    //etRock.traceF( tinP , T("the GET utterance has been appended to the log") ) ;

    IFsCRATCH
    {
        SCOOPS

        ZE( boolT , bOk ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;
        //boolT bWoth = 1 ; //U::TO FIND A BUG

        boolT bNoQuit          = cTriesP == - 1 ;
        boolT bNoQuitEarly     = !cTriesP ;
        countT cTriesRemaining = cTriesP ;

        TN( tSay , "" ) ;
        while
        (
            !POOP
            &&
            (
                bNoQuit
                ||
                (
                    !etPrime
                    &&
                    ( bNoQuitEarly || cTriesRemaining -- )
                )
            )
        )
        {
            //if( bWoth ) //U:: TO FIND A BUG
            //{
            //    bWoth = 0 ;
            //    __1 ;
            //}

            if( !tSay.csF( tinP ) )
            {
                ZE( strokeS* , psttShortUrlEncoded ) ;
                etScratch.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

                // EXAMPLE
                // 
                // GET /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
                // Host: storage.clouddrive.com
                // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
                //  

                {
                    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
                    tSay = T("GET ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\n\r\n") ;
                    bHandle.ungrabF( tinP ) ;
                }
                etScratch.delF( tinP , psttShortUrlEncoded ) ;
            }

            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

            // SAMPLE REPLY
            // 
            // HTTP/1.1 200 OK
            // Content-Length: 39
            // Accept-Ranges: bytes
            // Last-Modified: Mon, 08 Dec 2014 04:14:34 GMT
            // Etag: f1290729de5a5ba08b49016a88a0f740
            // X-Timestamp: 1418012073.44724
            // Content-Type: application/octet-stream
            // X-Trans-Id: tx567c206bc36246dab9325-00548525aaiad3
            // Date: Mon, 08 Dec 2014 04:14:34 GMT
            // 
            // administrator.email@foo.com
            // my.iddisk
            // 

            osTextT postBuffer[ TOCK ] ;
            ZE( countT , offb ) ;
            boolT bWoth = 1 ;
            TN( tContentLength , "Content-Length:" ) ;
            for( offb = 0 ; !POOP && offb < sizeof postBuffer ; offb ++ )
            {
                __Z( ss.readF( tinP , postBuffer + offb , 1 ) ) ;

                if( !POOP && postBuffer[ offb ] == '\r' )         // IF I HAVE A LINE OF HEADER
                {
                    postBuffer[ offb ] = 0 ;
                    TN( tLine , postBuffer ) ;

                    if( bWoth )
                    {
                        bWoth = 0 ;
                        __Z( offb ) ;

                        if( !POOP )
                        {
                            __NZ( 1 == etScratch.strIdF( tinP , tReplyCode401_Unauthorized , tLine ) ) ;
                            if( POOP )
                            {
                                etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                                break ;
                            }

                            if( !etScratch.strIdF( tinP , tReplyCode200_OK , tLine ) )
                            {
                                etRock.traceF( tinP , T("pullFileF / exception: did not expect [tLine]: ")+tLine ) ;
                                etRock.traceF( tinP , T("[tSay]: ")+tSay ) ;
                                __1
                            }
                        }
                    }

                    if( !POOP )
                    {
                        if( offb )
                        {
                            postBuffer[ offb ] = 0 ;
                            //etScratch.traceF( tinP , T("header line: ")+T(postBuffer) ) ;
                        }

                        osTextT ostLF ;
                        __Z( ss.readF( tinP , &ostLF , 1 ) ) ;
                        __NZ( ostLF != '\n' ) ;
                    }

                    if( !POOP )
                    {
                        strokeS sttBlank( ' ' ) ;
                        if( 1 == etScratch.strIdF( tinP , tContentLength , tLine ) )
                        {
                            strokeS* psttLine = tLine ;
                            countT idf = tContentLength.csF( tinP ) + 1 ;
                            while( psttLine[ CSpREFIX - 1 + idf ] == sttBlank ) idf ++ ;
                            ZE( countT , idl ) ;

                            ZE( strokeS* , psttw ) ;
                            etScratch.strSubstringF( tinP , psttw , idf , idl , psttLine ) ; ___( psttw ) ;
                            cbP = etScratch.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
                            etScratch.delF( tinP , psttw ) ;
                        }
                    }

                    if( !offb ) break ;
                    else if( !POOP ) offb = - 1 ;
                }
            }

            if( !POOP )
            {
                if( cbP )
                {
                    etScratch.newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
                    __Z( pbP ) ;

                    if( !POOP )
                    {
                        byteT* pbc = pbP ;
                        countT cDo = cbP ;
                        while( cDo )
                        {
                            countT cbGot = ss.readF( tinP , pbc , cDo ) ;
                            __Z( cbGot ) ;

                            if( POOP ) break ;
                            else
                            {
                                cDo -= cbGot ;
                                pbc += cbGot ;
                            }
                        }
                    }
                    pbP[ cbP ] = 0 ;
                }

                if( !POOP )
                {
                    bOk = 1 ;
                    break ;
                }
                else
                {
                    POOPR ;

                    etScratch.delF( tinP , pbP ) ;

                    etScratch.traceF( tinP , T("will retry after napping for a tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK ) ;
                }
            }
        }

        __Z( bOk ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138011.cloudc.pullfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138012.cloudc.pushfilef BEGIN
#define DDNAME       "3func.36138012.cloudc.pushfilef"
#define DDNUMB      (countT)0x36138012
#define IDFILE      (countT)0x1551


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::pushFileF( tinS& tinP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP , const byteT* const pbP , countT cbP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttCloudContainerP ) ;
        __Z( pbP ) ;
        if( POOP ) return ;
        if( !cbP ) cbP = thirdC::c_strlenIF( tinP , pbP ) ;    
        __Z( cbP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etRock = etherC::etherC::etRockIF( tinP ) ;
    //LOGrAW( tSay ) ;
    //etRock.traceF( tinP , T("the PUT utterance has been appended to the log") ) ;

    IFsCRATCH
    {
        char postHear[ TOCK ] ; 
        ZE( countT , costHear ) ;
        ZE( boolT , bOk ) ;
        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;
        countT cTries = TUCK >> 5 ;
        TN( tSay , "" ) ;
        while( cTries -- && !etPrime && !POOP )
        {
            SCOOPS

            if( !tSay.csF( tinP ) )
            {
                ZE( strokeS* , psttShortUrlEncoded ) ;
                etScratch.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

                // EXAMPLE
                // 
                // PUT /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
                // Host: storage.clouddrive.com
                // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
                // Content-Length: 512000
                //  
                // [ ...object content... ]
                // 

                {
                    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
                    tSay = T("PUT ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\nContent-Length: ")+TF4(cbP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa)+T("\r\n\r\n") ;
                    bHandle.ungrabF( tinP ) ;
                }
                etScratch.delF( tinP , psttShortUrlEncoded ) ;
            }

            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
            ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;
            ss.writeF( tinP , pbP , cbP ) ;

            thirdC::c_memsetIF(  tinP , postHear , sizeof postHear ) ;
            costHear = ss.readF( tinP , postHear , sizeof postHear , flSOCKETcrEAD_STILLhUNGRYiSoK ) ;

            TN( tHear , postHear ) ;
            //etRock.traceF( tinP , T(postHear) ) ;

            if( !POOP )
            {
                __NZ( 1 == etScratch.strIdF( tinP , tReplyCode401_Unauthorized , tHear ) ) ;
                if( POOP )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                    break ;
                }

                if( !etScratch.strIdF( tinP , tReplyCode201_Created , tHear ) )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("exception: did not expect [tHear]: ")+tHear ) ;
                    etherC::etRockIF( tinP ).traceF( tinP , T("[tSay]: ")+tSay ) ;
                    __1
                }

                if( !POOP )
                {
                    bOk = 1 ;
                    break ;
                }
                else
                {
                    POOPR ;

                    etRock.traceF( tinP , T("will retry after napping for a tock") ) ;

                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138012.cloudc.pushfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138013.cloudc.pullfilef BEGIN
#define DDNAME       "3func.36138013.cloudc.pullfilef"
#define DDNUMB      (countT)0x36138013
#define IDFILE      (countT)0x1552


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT cloudC::pullFileF( tinS& tinP , soulC& sRenameP , const strokeS* const psttFileP , const strokeS* const psttCloudContainerP , const strokeS* const psttShortP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttFileP ) ;
        __Z( psttCloudContainerP ) ;
        __Z( psttShortP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etRock = etherC::etRockIF( tinP ) ;
    //LOGrAW( tSay ) ;
    //etRock.traceF( tinP , T("the GET utterance has been appended to the log") ) ;

    ZE( boolT , bOk ) ;
    IFsCRATCH
    {
        SCOOPS

        if( POOP )
        {
            POOPR
            etRock.traceF( tinP , T("pullFileF / etScratch is impotent on entry (coding error).  resetting") ) ;
        }

        etherC& etPrime   = etherC::etPrimeIF( tinP ) ;
        etherC& etScratch = *tinP.pEtScratch ;

        TN( tn , "" ) ;
        TN( tSay , "" ) ;
        while( !POOP && !etPrime )
        {
            if( !tSay.csF( tinP ) )
            {
                ZE( strokeS* , psttShortUrlEncoded ) ;                                                                                                  
                etScratch.strToUrlF( tinP , psttShortUrlEncoded , psttShortP ) ; ___( psttShortUrlEncoded ) ;

                // EXAMPLE
                // 
                // GET /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123/archive/shortEncodedName HTTP/1.1
                // Host: storage.clouddrive.com
                // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
                //  

                {
                    bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
                    tSay = T("GET ")+tUrlCloudAgent+T("/")+T(psttCloudContainerP)+T("/")+T(psttShortUrlEncoded)+T(" HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\n\r\n") ;
                    bHandle.ungrabF( tinP ) ;
                }
                etScratch.delF( tinP , psttShortUrlEncoded ) ;
            }

            //countT idleTimeAllowedRead  = TICK >> 1 ;
            //countT idleTimeAllowedWrite = TICK >> 1 ;
            socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL /*, &idleTimeAllowedRead , &idleTimeAllowedWrite*/ ) ;

            ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;

            TN( tFileTmp , "" ) ;
            ZE( boolT , bNotFound ) ;
            if( POOP ) etRock.traceF( tinP , T("pullFileF / could not connect") ) ;
            else
            {
                ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;

                if( POOP ) etRock.traceF( tinP , T("pullFileF / could not write request") ) ;
                else
                {
                    // SAMPLE REPLY
                    // 
                    // HTTP/1.1 200 OK
                    // Content-Length: 39
                    // Accept-Ranges: bytes
                    // Last-Modified: Mon, 08 Dec 2014 04:14:34 GMT
                    // Etag: f1290729de5a5ba08b49016a88a0f740
                    // X-Timestamp: 1418012073.44724
                    // Content-Type: application/octet-stream
                    // X-Trans-Id: tx567c206bc36246dab9325-00548525aaiad3
                    // Date: Mon, 08 Dec 2014 04:14:34 GMT
                    // 
                    // administrator.email@foo.com
                    // my.iddisk
                    // 

                    osTextT postDebug[ TOCK ] ;                                 //U::TO FIND A BUG
                    thirdC::c_memsetIF( tinP , postDebug , sizeof postDebug ) ; //U::TO FIND A BUG
                    ZE( countT , offoDebug ) ;                                  //U::TO FIND A BUG

                    osTextT postBuffer[ TOCK ] ;
                    ZE( countT , offb ) ;
                    boolT bWoth = 1 ;
                    TN( tContentLength , "Content-Length:" ) ;
                    ZE( countT , cbFile ) ;
                    for( offb = 0 ; !POOP && offb < sizeof postBuffer ; offb ++ )
                    {
                        __Z( ss.readF( tinP , postBuffer + offb , 1 ) ) ;

                        if( !POOP ) postDebug[ offoDebug ++ ] = postBuffer[ offb ] ;

                        if( POOP )
                        {
                            postBuffer[ offb ] = 0 ;

                            etRock.traceF( tinP , T("pullFileF / could not read a byte of a reply header line [offb,fragment]: ")+TF2(offb,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" >>>>")+T(postBuffer)+T("<<<<") ) ;
                        }
                        else if( postBuffer[ offb ] == '\r' )         // IF I HAVE A LINE OF HEADER
                        {
                            postBuffer[ offb ] = 0 ;
                            TN( tLine , postBuffer ) ;

                            if( bWoth )
                            {
                                bWoth = 0 ;
                                __Z( offb ) ;

                                if( !POOP )
                                {
                                    __NZ( 1 == etScratch.strIdF( tinP , tReplyCode401_Unauthorized , tLine ) ) ;
                                    if( POOP )
                                    {
                                        etRock.traceF( tinP , T("authorization refused") ) ;
                                        tSay = tn ;
                                        break ;
                                    }

                                    if( etScratch.strIdF( tinP , tReplyCode404_NotFound , tLine ) )
                                    {
                                        bNotFound = 1 ;
                                        etRock.traceF( tinP , T("not found in remote: \"")+T(psttShortP)+T("\"") ) ;
                                    }

                                    __( !etScratch.strIdF( tinP , tReplyCode200_OK , tLine ) ) ;
                                }
                            }

                            if( !POOP )
                            {
                                if( offb )
                                {
                                    postBuffer[ offb ] = 0 ;
                                    //etRock.traceF( tinP , T("pullFileF / header line: ")+T(postBuffer) ) ;
                                }

                                osTextT ostLF ;
                                __Z( ss.readF( tinP , &ostLF , 1 ) ) ;

                                if( POOP ) etRock.traceF( tinP , T("pullFileF / could not read expected LF byte") ) ;
                                else
                                {
                                    __NZ( ostLF != '\n' ) ;
                                    if( POOP ) etRock.traceF( tinP , T("pullFileF / expected LF byte but received ")+TF2(ostLF,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                    else
                                    {
                                        strokeS sttBlank( ' ' ) ;
                                        if( 1 == etScratch.strIdF( tinP , tContentLength , tLine ) )
                                        {
                                            strokeS* psttLine = tLine ;
                                            countT idf = tContentLength.csF( tinP ) + 1 ;
                                            while( psttLine[ CSpREFIX - 1 + idf ] == sttBlank ) idf ++ ;
                                            ZE( countT , idl ) ;

                                            ZE( strokeS* , psttw ) ;
                                            etScratch.strSubstringF( tinP , psttw , idf , idl , psttLine ) ; ___( psttw ) ;
                                            cbFile = etScratch.strDigitsToSCountF( tinP , psttw , 0xa , 1 ) ;
                                            etScratch.delF( tinP , psttw ) ;
                                        }
                                    }
                                }
                            }

                            if( !offb ) break ;
                            else if( !POOP ) offb = - 1 ;
                        }
                    }

                    if( POOP )
                    {
                        etRock.traceF( tinP , T("pullFileF / error detected while inspecting reply header") ) ;
                        etRock.traceF( tinP , T("pullFileF / [offoDebug,responseFragment]: ")+TF2(offoDebug,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" >>>>")+T(postDebug)+T("<<<<") ) ;
                        etRock.traceF( tinP , T("pullFileF / [tSay]: >>>>")+tSay+T("<<<<") ) ;

                        //LOGrAW( "\r\n---- REQUEST ----------------------------\r\n" ) ;
                        //LOGrAW( tSay ) ;
                        //LOGrAW( "\r\n--------------------------------\r\n" ) ;
                        //LOGrAW( "\r\n---- REPLY (LINES RECEIVED UP TO WHEN ERROR DETECTED) ----------------------------\r\n" ) ;
                        //LOGrAW( postDebug ) ;
                        //LOGrAW( "\r\n--------------------------------\r\n" ) ;
                    }
                    else
                    {
                        ZE( byteT* , pbBuffer ) ;
                        countT cbBuffer = cbFile < TOCK ? cbFile : TOCK ;
                        etScratch.newF( tinP , LF , pbBuffer , cbBuffer ) ; ___( pbBuffer ) ;
                        __Z( pbBuffer ) ;

                        {
                            ZE( strokeS* , psttPath ) ; // OBTAINED SO TMP FILE WILL BE ON THE SAME VOLUME AS THE FILE TO BE REPLACED ; ANY FAILURE WILL ALSO BE VISIBLE SINCE TMP FILE IS IN THE SAME FOLDER
                            ZE( strokeS* , psttnu ) ;
                            etScratch.strBisectF( tinP , psttPath , psttnu , psttFileP , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPath ) ; ___( psttnu ) ;
                            etScratch.delF( tinP , psttnu ) ;

                            ZE( strokeS* , psttu ) ;
                            etScratch.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
                            tFileTmp = T(psttPath)+T("/pullFileF.")+T(psttu) ;
                            etScratch.delF( tinP , psttPath ) ;
                            etScratch.delF( tinP , psttu ) ;
                        }

                        if( !POOP )
                        {
                            fileC fOut( tinP , (strokeS*)tFileTmp , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;

                            //tinP.pc Utility[ 0 ] = 1 ; //U::TO FIND A BUG

                            countT cDo = cbFile ;
                            while( cDo && !POOP )
                            {
                                countT cbBite = cDo < cbBuffer ? cDo : cbBuffer ;

                                countT cbGot = ss.readF( tinP , pbBuffer , cbBite ) ;
                                __Z( cbGot ) ;

                                if( POOP ) etRock.traceF( tinP , T("pullFileF / could not read bite [cDo,cbBite,cbGot]: ")+TF2(cDo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cbBite,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cbGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                else
                                {
                                    //etRock.traceF( tinP , T("pullFileF / U:: TO FIND A BUG: 20161201@1132: aok read bite [cDo,cbBite,cbGot]: ")+TF2(cDo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cbBite,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(cbGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                    etScratch.fileWriteF( tinP , fOut , pbBuffer , cbGot ) ;
                                    cDo -= cbGot ;
                                }
                            }
                        }
                        etScratch.delF( tinP , pbBuffer ) ;
                    }
                }
            }

            if( !POOP )
            {
                bOk = 1 ;

                if( F(flagsCt) & flCLOUDc_COPYaLLoRnONE )
                {
                    sRenameP << psttFileP ;
                    sRenameP << (strokeS*)tFileTmp ;
                }
                else
                {
                    etScratch.diskFileOrDirDeleteF( tinP , psttFileP ) ;            //IT WOULD BE NICE TO BE ABLE TO DO THIS ATOMICALLY
                    etScratch.diskMoveFileOrDirF(   tinP , psttFileP , tFileTmp ) ; //IT WOULD BE NICE TO BE ABLE TO DO THIS ATOMICALLY
                }

                break ;
            }
            else
            {
                POOPR ;

                if( bNotFound )
                {
                    etRock.traceF( tinP , T("skipping this file") ) ;
                    bOk = 1 ;
                    break ;
                }
                else
                {
                    etScratch.diskFileOrDirDeleteF( tinP , tFileTmp ) ;
                    etRock.traceF( tinP , T("will retry after napping for a tock") ) ;
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    etPrime.osSleepF( tinP , TOCK ) ;
                }
            }
        }

        __Z( bOk ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138013.cloudc.pullfilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138014.cloudc.deleteremotefilesf BEGIN
#define DDNAME       "3func.36138014.cloudc.deleteremotefilesf"
#define DDNUMB      (countT)0x36138014
#define IDFILE      (countT)0x1553


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

//1 IS SUBTRACTED DEFENSIVELY SO THAT I WILL NOT FAIL IF SERVER ONLY ALLOWS WO LESS THAN THE CLAIMED MAXIMUM NUMBER OF FILES
#define CfILESmAXpERbULKdELETE ( 10000 - 1 )

/*1*/voidT cloudC::deleteRemoteFilesF( tinS& tinP , const strokeS* const psttCloudContainerP , soulC& sDoomedFileNamesP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttCloudContainerP ) ;
        __Z( sDoomedFileNamesP ) ;
        if( POOP ) return ;
    }

    _IO_

    etherC& etPrime   = etherC::etPrimeIF( tinP ) ;

    ZE( osTextT* , postBody ) ;
    countT costaBody = CfILESmAXpERbULKdELETE * ( ( COSTcLOUDfILEnAMEmAX << 2 ) + 2 ) + 1 ; // "<< 2" IS WORST CASE ENCODING EXPANSION; "+ 2" IS CRLF, AND "+ 1" IS TERMINATING NULL
    ether.newF( tinP , LF , postBody , costaBody ) ; ___( postBody ) ;
    osTextT* posteBody = postBody + costaBody - 1 ;

    TN( tcr , "\r\n" ) ;
    TN( tSlashContainerSlash , "" ) ; tSlashContainerSlash = T("/")+T(psttCloudContainerP)+T("/") ;
    while( !etPrime && !POOP && sDoomedFileNamesP )
    {
        etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFilesF / building a request [cFiles]: ")+TF2((countT)sDoomedFileNamesP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
        //EACH LOOP BUILDS AND EMITS WO BULK DELETION REQUEST

        ZE( countT , costBody ) ;
        {
            osTextT* postc = postBody ;

            ZE( countT , cFiles ) ;
            while( !etPrime && sDoomedFileNamesP )
            {
                if( cFiles ++ == CfILESmAXpERbULKdELETE ) break ;

                ZE( strokeS* , psttfn ) ;
                sDoomedFileNamesP >> psttfn ; ___( psttfn ) ;

                ZE( strokeS* , pstte ) ;
                ether.strToUrlF( tinP , pstte , psttfn ) ; ___( pstte ) ;
                ether.delF( tinP , psttfn ) ;

                ZE( osTextT* , poste ) ;
                countT coste = ether.strMakeF( tinP , LF , poste , tSlashContainerSlash+T(pstte)+tcr ) ; ___( poste ) ;
                ether.delF( tinP , pstte ) ;

                if( postc + coste > posteBody ) { BLAMMO ; }

                ether.memCopyF( tinP , postc , poste , coste ) ;
                postc += coste ;
                ether.delF( tinP , poste ) ;
            }
            *postc = 0 ; // FOR DEBUGGING CONVENIENCE ; WILL NOT BE SENT TO SERVER

            costBody = postc - postBody ;
        }

        // EXAMPLE
        // DELETE /v1/MossoCloudFS_0672d7fa-9f85-4a81-a3ab-adb66a880123?bulk-delete=yes HTTP/1.1
        // Host: storage.clouddrive.com
        // X-Auth-Token: f064c46a782c444cb4ba4b6434288f7c
        // Content-Type: text/plain
        // Content-Length: 1234

        TN( tSay , "" ) ;
        {
            bHandle.grabF( tinP , TAG( TAGiDnULL ) ) ;
            cloudInfoS& cloudInfo = *(cloudInfoS*)hCloud.osF( ifcIDtYPEhANDLE_CLOUD ) ;
            tSay = T("DELETE ")+tUrlCloudAgent+T("/?bulk-delete=yes HTTP/1.1\r\nHost: ")+tHost+T("\r\nX-Auth-Token: ")+cloudInfo.tRackspaceAccessToken+T("\r\nAccept: application/json\r\nContent-Type: text/plain\r\nContent-Length: ")+TF4(costBody,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_NObASE,0,0xa)+T("\r\n\r\n") ;
            bHandle.ungrabF( tinP ) ;
        }

        LOGrAW( "------------ deleteRemoteFilesF: REQUEST HEAD BEGIN -----------------------------\r\n" ) ;
        LOGrAW( tSay ) ;
        LOGrAW( "------------ deleteRemoteFilesF: REQUEST HEAD END -----------------------------\r\n" ) ;

        LOGrAW( "------------ deleteRemoteFilesF: REQUEST BODY BEGIN -----------------------------\r\n" ) ;
        LOGrAW( postBody ) ;
        LOGrAW( "------------ deleteRemoteFilesF: REQUEST BODY END -----------------------------\r\n" ) ;

        ZE( boolT , bPermanentFailure ) ;
        IFsCRATCH
        {
            SCOOPS

            //char postHear[ TOCK ] ; 
            ZE( countT , costHear ) ;
            etherC& etScratch = *tinP.pEtScratch ;
            //countT cForgive = 0x2 ;
            while( !etPrime && !POOP )
            {
                etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFilesF / requesting deletion") ) ;
                socketC ss( tinP , etScratch , TAG( TAGiDnULL ) , ifcSOCKETtYPE_STREAM , flSOCKETc_CRYPTfOREIGNsSL ) ;
                ss.connectF( tinP , 443 , socketC::nicNameIF( tinP , etScratch , tHost ) ) ;
                ss.writeF( tinP , (osTextT*)tSay , (countT)tSay.csF( tinP ) ) ;
                ss.writeF( tinP , postBody , costBody ) ;

                osTextT postHearHead[ TOCK ] = { 0 } ;
                ZE( countT , costHearHead ) ;
                ZE( boolT , bChunked ) ;
                ZE( countT , costBody ) ;
                {
                    for( ; costHearHead < sizeof postHearHead - 1 ; costHearHead ++ )
                    {
                        countT costIn = ss.readF( tinP , postHearHead + costHearHead , 1 ) ;
                        
                        if( !costIn )                                                                                                       //20180303@1506: OBSERVED !costIn
                        {
                            POOPR
                            etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / did not receive a fulll reply ; will retry with a new connection.") ) ;
                            continue ;
                        }
                        else if( costHearHead >= 3 && !thirdC::c_memcmpIF( tinP , postHearHead + costHearHead - 3 , "\r\n\r\n" , 4 ) )
                        {
                            costHearHead -= 3 ;
                            break ;
                        }
                    }
                    postHearHead[ costHearHead ] = 0 ;

                    LOGrAW( "------------ deleteRemoteFilesF: REPLY HEAD BEGIN -----------------------------\r\n" ) ;
                    LOGrAW( postHearHead ) ;
                    LOGrAW( "------------ deleteRemoteFilesF: REPLY HEAD END -----------------------------\r\n" ) ;

                    if( thirdC::c_strstrIF( tinP , postHearHead , "Transfer-Encoding: chunked" ) )  bChunked = 1 ;

                    osTextT postKey[] = "Content-Length:" ;
                    osTextT* postLength = thirdC::c_strstrIF( tinP , postHearHead , postKey ) ;
                    if( postLength )
                    {
                        postLength += sizeof postKey - 1 ;

                        for( osTextT* postc = postLength ; *postc ; postc ++ )
                        {
                            if( *postc == '\r' || *postc == '\n' )
                            {
                                *postc = 0 ;
                                break ;
                            }
                        }

                        if( *postLength ) costBody = thirdC::c_atoiForeignIF( postLength ) ;
                    }
                }

                osTextT postHearBody[ TOCK ] = { 0 } ;
                ZE( countT , costHearBody ) ;
                if( !bChunked )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFilesF: !bChunked so not logging reply") ) ;
                }
                else
                {
                    osTextT  postHearLength[ TUCK ] = { 0 } ;

                    for( countT offl = 0 ; offl < sizeof postHearLength - 1 ; offl ++ )
                    {
                        if( !ss.readF( tinP , postHearLength + offl , 1 ) ) { BLAMMO ; } ;
                        
                        if( postHearLength[ offl ] == '\r' )
                        {
                            postHearLength[ offl ] = 0 ;
                            countT costDo = ether.strDigitsToSCountF( tinP , T(postHearLength) , 0 , 1 ) ;
                            offl = - 1 ;

                            if( !costDo ) break ;
                            else
                            {
                                osTextT ostWo ;
                                if( !ss.readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\n'

                                if( costDo != ss.readF( tinP , postHearBody + costHearBody , costDo ) ) { BLAMMO ; } ;
                                costHearBody += costDo ;
                                postHearBody[ costHearBody ] = 0 ; //20170602@1459 ADDED WITHOUT ANALYSIS WHILE ADDING LOGGING OF SAY AND REPLY

                                if( !ss.readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\r'
                                if( !ss.readF( tinP , &ostWo , 1 ) ) { BLAMMO ; } ; // '\n'
                            }
                        }
                    }
                }

                LOGrAW( "------------ REPLY BODY BEGIN -----------------------------\r\n" ) ;
                LOGrAW( postHearBody ) ;
                LOGrAW( "------------ REPLY BODY END -----------------------------\r\n" ) ;

                etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFilesF / requested  deletion (i did not inspect the response)") ) ;
                break ; // I ASSUME THAT THE DELETION REQUEST WAS SUCCESSFUL ; I DO NOT INSPECT THE REPLY

                //TN( tIn , "" ) ; // WILL CONTAIN A SINGLE, TRIMMED JSON WORD
                //{
                //    osTextT* postBody = thirdC::c_strstrIF( tinP , postHear , "\r\n\r\n" ) ;
                //    if( postBody )
                //    {
                //        osTextT* postJsonSq = thirdC::c_strstrIF( tinP , postBody , "[" ) ;
                //        osTextT* postJson   = thirdC::c_strstrIF( tinP , postBody , "{" ) ;
                //        if( postJsonSq && postJsonSq < postJson ) postJson = postJsonSq ;
                //
                //        if( postJson )
                //        {
                //            ZE( countT , idLevel ) ;
                //            ZE( boolT  , bNix ) ;
                //            for( osTextT* postc = postJson ; *postc ; postc ++ )
                //            {
                //                if( bNix )
                //                {
                //                    *postc = 0 ;
                //                    break ;
                //                }
                //
                //                switch( *postc )
                //                {
                //                    case '[' :
                //                    case '{' : {        ++ idLevel              ; break ; }
                //
                //                    case ']' :
                //                    case '}' : { if( !( -- idLevel ) ) bNix = 1 ; break ; }
                //                }
                //            }
                //
                //            tIn = T(postJson) ;
                //        }
                //    }
                //}
                //etherP.boxPutF( tinP , T("///d/tmp/x/goo.ttt") , tIn , tIn.csF( tinP ) ) ;

                //U:: THIS CODEmINE IS FROM ANOTHER MEMBER FUNCTION ; USE IT TO ADD REPLY VALIDATION (THE CURRENT CODE DOES NOT INSPECT THE REPLY)
                // if( POOP )
                // {
                //     POOPR
                // 
                //     if( cForgive -- )
                //     {
                //         etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / connect , write, or read failed ; forgiven ; will retry after napping 01 tock.  (")+TF2(cForgive,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" remain)") ) ;
                // 
                //         sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                //         etPrime.osSleepF( tinP , TOCK << 4 ) ;
                //         continue ;
                //     }
                //     else
                //     {
                //         bPermanentFailure = 1 ;
                //         etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / connect , write, or read failed ; not forgiven") ) ;
                //         break ;
                //     }
                // }
                // 
                // __NZ( 1 == ether.strIdF( tinP , tReplyCode401_Unauthorized , tHear ) ) ;
                // if( POOP )
                // {
                //     POOPR
                //     bPermanentFailure = 1 ;
                //     etherC::etRockIF( tinP ).traceF( tinP , T("authorization refused") ) ;
                //     break ;
                // }
                // 
                // __( !ether.strIdF( tinP , tReplyCode204_NoContent , tHear ) && !ether.strIdF( tinP , tReplyCode404_NotFound , tHear ) ) ;
                // if( POOP )
                // {
                //     POOPR
                //     etherC::etRockIF( tinP ).traceF( tinP , tHear ) ;
                //     etherC::etRockIF( tinP ).traceF( tinP , T("deleteRemoteFileF / unexpected reply (other than \"no content\" or \"not found\") ; will retry after napping 01 tock") ) ;
                // 
                //     sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                //     etPrime.osSleepF( tinP , TOCK << 4 ) ;
                //     continue ;
                // }
                // 
                // break ;
            }
        }

        __NZ( bPermanentFailure ) ;
    }
    ether.delF( tinP , postBody ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36138* : 3func.36138014.cloudc.deleteremotefilesf END
