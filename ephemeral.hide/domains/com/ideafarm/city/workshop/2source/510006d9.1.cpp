//SOURCE: 5adam.510006d9.1 BEGIN
#define DDNAME "5adam.510006d9.1"
#define DDNUMB 0x510006d9
#define IDFILE (countT)0x0
#define postHEADER "510006d9.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510006d9.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/WAKEhIDE( "ifcIDaDAM_CLOUD" )/*1*/

struct cloudSpecsS
{
    osTextT  postBuilding         [ TUCK ] ;
    osTextT  postDesire           [ TUCK ] ;
    osTextT  postId               [ TUCK ] ;
    osTextT  postIfDiffer         [ TUCK ] ;
    osTextT  postLocal            [ TUCK ] ;
    osTextT  postName             [ TUCK ] ;
    osTextT  postPassword         [ TUCK ] ;
    osTextT  postRemote           [ TUCK ] ;
    osTextT  postUser             [ TUCK ] ;
    osTextT  postDelete           [ TUCK ] ;
    osTextT  postDelTries         [ TUCK ] ;
    osTextT  postMaster           [ TUCK ] ;
    osTextT  postNetwork          [ TUCK ] ;
    osTextT  postNapTocks         [ TUCK ] ;
    osTextT  postAllOrNone        [ TUCK ] ;
    osTextT  postGhost            [ TUCK ] ;
    osTextT  postWaitStepModulo   [ TUCK ] ;
    osTextT  postWaitStepRemainder[ TUCK ] ;
    osTextT  postLike             [ TUCK ] ;
    osTextT  postCbMin            [ TUCK ] ;
    osTextT  postCbMax            [ TUCK ] ;
    osTextT  postTrace            [ TUCK ] ;
    osTextT  postCopy             [ TUCK ] ;
    osTextT  postRenameToHash     [ TUCK ] ;
    osTextT  postMoveLocalToAfter [ TUCK ] ;
    osTextT  postVerifyLocalList  [ TUCK ] ;
    osTextT  postHireAdamAfter    [ TUCK ] ;

    NEWdELcLASSpROTOS ;
    cloudSpecsS( tinS& tinP , etherC& etherP , const strokeS* const psttNameP ) ;
    cloudSpecsS( tinS& tinP , etherC& etherP , const strokeS* const psttNameP , const osTextT* const postBuildingP , const osTextT* const postDesireP , const osTextT* const postIdP , const osTextT* const postIfDifferP , const osTextT* const postLocalP , const osTextT* const postPasswordP , const osTextT* const postRemoteP , const osTextT* const postUserP , const osTextT* const postDeleteP , const osTextT* const postDelTriesP , const osTextT* const postMasterP , const osTextT* const postNetworkP , const osTextT* const postNapTocksP , const osTextT* const postAllOrNoneP , const osTextT* const postGhostP , const osTextT* const postWaitStepModuloP , const osTextT* const postWaitStepRemainderP , const osTextT* const postLikeP , const osTextT* const postCbMinP , const osTextT* const postCbMaxP , const osTextT* const postTraceP , const osTextT* const postCopyP , const osTextT* const postRenameToHashP , const osTextT* const postMoveLocalToAfterP , const osTextT* const postVerifyLocalListP , const osTextT* const postHireAdamAfterP ) ;
    voidT setF( tinS& tinP , etherC& etherP , const strokeS* const psttCloudP , const strokeS* const psttShortKeyP ) ;
    voidT sayF( tinS& tinP , etherC& etherP ) ;
}
;

NEWdELcLASS( 1 , cloudSpecsS ) ;

cloudSpecsS::cloudSpecsS( tinS& tinP , etherC& etherP , const strokeS* const psttNameP )
{
    thirdC::c_memsetIF( tinP , (byteT*)this , sizeof *this ) ;
    TN( tName , psttNameP ) ; thirdC::c_strcpyIF( tinP , postName , tName ) ;
}

cloudSpecsS::cloudSpecsS( tinS& tinP , etherC& etherP , const strokeS* const psttNameP , const osTextT* const postBuildingP , const osTextT* const postDesireP , const osTextT* const postIdP , const osTextT* const postIfDifferP , const osTextT* const postLocalP , const osTextT* const postPasswordP , const osTextT* const postRemoteP , const osTextT* const postUserP , const osTextT* const postDeleteP , const osTextT* const postDelTriesP , const osTextT* const postMasterP , const osTextT* const postNetworkP , const osTextT* const postNapTocksP , const osTextT* const postAllOrNoneP , const osTextT* const postGhostP , const osTextT* const postWaitStepModuloP , const osTextT* const postWaitStepRemainderP , const osTextT* const postLikeP , const osTextT* const postCbMinP , const osTextT* const postCbMaxP , const osTextT* const postTraceP , const osTextT* const postCopyP , const osTextT* const postRenameToHashP , const osTextT* const postMoveLocalToAfterP , const osTextT* const postVerifyLocalListP , const osTextT* const postHireAdamAfterP )
{
    thirdC::c_memsetIF( tinP , (byteT*)this , sizeof *this ) ;
    TN( tName , psttNameP ) ; thirdC::c_strcpyIF( tinP , postName , tName ) ;

    if( postBuildingP          ) thirdC::c_strcpyIF( tinP , postBuilding          , postBuildingP          ) ;
    if( postDesireP            ) thirdC::c_strcpyIF( tinP , postDesire            , postDesireP            ) ;
    if( postIdP                ) thirdC::c_strcpyIF( tinP , postId                , postIdP                ) ;
    if( postIfDifferP          ) thirdC::c_strcpyIF( tinP , postIfDiffer          , postIfDifferP          ) ;
    if( postLocalP             ) thirdC::c_strcpyIF( tinP , postLocal             , postLocalP             ) ;
    if( postPasswordP          ) thirdC::c_strcpyIF( tinP , postPassword          , postPasswordP          ) ;
    if( postRemoteP            ) thirdC::c_strcpyIF( tinP , postRemote            , postRemoteP            ) ;
    if( postUserP              ) thirdC::c_strcpyIF( tinP , postUser              , postUserP              ) ;
    if( postDeleteP            ) thirdC::c_strcpyIF( tinP , postDelete            , postDeleteP            ) ;
    if( postDelTriesP          ) thirdC::c_strcpyIF( tinP , postDelTries          , postDelTriesP          ) ;
    if( postMasterP            ) thirdC::c_strcpyIF( tinP , postMaster            , postMasterP            ) ;
    if( postNetworkP           ) thirdC::c_strcpyIF( tinP , postNetwork           , postNetworkP           ) ;
    if( postNapTocksP          ) thirdC::c_strcpyIF( tinP , postNapTocks          , postNapTocksP          ) ;
    if( postAllOrNoneP         ) thirdC::c_strcpyIF( tinP , postAllOrNone         , postAllOrNoneP         ) ;
    if( postGhostP             ) thirdC::c_strcpyIF( tinP , postGhost             , postGhostP             ) ;
    if( postWaitStepModuloP    ) thirdC::c_strcpyIF( tinP , postWaitStepModulo    , postWaitStepModuloP    ) ;
    if( postWaitStepRemainderP ) thirdC::c_strcpyIF( tinP , postWaitStepRemainder , postWaitStepRemainderP ) ;
    if( postLikeP              ) thirdC::c_strcpyIF( tinP , postLike              , postLikeP              ) ;
    if( postCbMinP             ) thirdC::c_strcpyIF( tinP , postCbMin             , postCbMinP             ) ;
    if( postCbMaxP             ) thirdC::c_strcpyIF( tinP , postCbMax             , postCbMaxP             ) ;
    if( postTraceP             ) thirdC::c_strcpyIF( tinP , postTrace             , postTraceP             ) ;
    if( postCopyP              ) thirdC::c_strcpyIF( tinP , postCopy              , postCopyP              ) ;
    if( postRenameToHashP      ) thirdC::c_strcpyIF( tinP , postRenameToHash      , postRenameToHashP      ) ;
    if( postMoveLocalToAfterP  ) thirdC::c_strcpyIF( tinP , postMoveLocalToAfter  , postMoveLocalToAfterP  ) ;
    if( postVerifyLocalListP   ) thirdC::c_strcpyIF( tinP , postVerifyLocalList   , postVerifyLocalListP   ) ;
    if( postHireAdamAfterP     ) thirdC::c_strcpyIF( tinP , postHireAdamAfter     , postHireAdamAfterP     ) ;
}

voidT cloudSpecsS::setF( tinS& tinP , etherC& etherP , const strokeS* const psttCloudP , const strokeS* const psttShortKeyP )
{
    TN( tPrefix    , "" ) ; tPrefix = T("!cloud.")+T(psttCloudP)+T(".") ;

    TN( tBuilding          , "building"          ) ;
    TN( tDesire            , "desire"            ) ;
    TN( tId                , "id"                ) ;
    TN( tIfDiffer          , "ifdiffer"          ) ;
    TN( tLocal             , "local"             ) ;
    TN( tPassword          , "password"          ) ;
    TN( tRemote            , "remote"            ) ;
    TN( tUser              , "user"              ) ;
    TN( tDelete            , "delete"            ) ;
    TN( tDelTries          , "delete.tries"      ) ;
    TN( tMaster            , "master"            ) ;
    TN( tNetwork           , "network"           ) ;
    TN( tNapTocks          , "naptocks"          ) ;
    TN( tAllOrNone         , "allornone"         ) ;
    TN( tGhost             , "ghost"             ) ;
    TN( tWaitStepModulo    , "waitstepmodulo"    ) ;
    TN( tWaitStepRemainder , "waitstepremainder" ) ;
    TN( tLike              , "like"              ) ;
    TN( tCbMin             , "cbmin"             ) ;
    TN( tCbMax             , "cbmax"             ) ;
    TN( tTrace             , "trace"             ) ;
    TN( tCopy              , "copy"              ) ;
    TN( tRenameToHash      , "renametohash"      ) ;
    TN( tMoveLocalToAfter  , "movelocaltoafter"  ) ;
    TN( tVerifyLocalList   , "verifylocallist"   ) ;
    TN( tHireAdamAfter     , "hireadamafter"     ) ;

    textC* pptKey[] =
    {
        &tBuilding          ,
        &tDesire            ,
        &tId                ,
        &tIfDiffer          ,
        &tLocal             ,
        &tPassword          ,
        &tRemote            ,
        &tUser              ,
        &tDelete            ,
        &tDelTries          ,
        &tMaster            ,
        &tNetwork           ,
        &tNapTocks          ,
        &tAllOrNone         ,
        &tGhost             ,
        &tWaitStepModulo    ,
        &tWaitStepRemainder ,
        &tLike              ,
        &tCbMin             ,
        &tCbMax             ,
        &tTrace             ,
        &tCopy              ,
        &tRenameToHash      ,
        &tMoveLocalToAfter  ,
        &tVerifyLocalList   ,
        &tHireAdamAfter     ,
    } ;

    osTextT* ppostv[] =
    {
        postBuilding          ,
        postDesire            ,
        postId                ,
        postIfDiffer          ,
        postLocal             ,
        postPassword          ,
        postRemote            ,
        postUser              ,
        postDelete            ,
        postDelTries          ,
        postMaster            ,
        postNetwork           ,
        postNapTocks          ,
        postAllOrNone         ,
        postGhost             ,
        postWaitStepModulo    ,
        postWaitStepRemainder ,
        postLike              ,
        postCbMin             ,
        postCbMax             ,
        postTrace             ,
        postCopy              ,
        postRenameToHash      ,
        postMoveLocalToAfter  ,
        postVerifyLocalList   ,
        postHireAdamAfter     ,
    } ;

    for( countT offk = 0 ; offk < sizeof pptKey / sizeof pptKey[ 0 ] ; offk ++ )
    {
        if( !*ppostv[ offk ] && !etherP.strCompareF( tinP , psttShortKeyP , (strokeS*)*pptKey[ offk ] ) )
        {
            ZE( strokeS* , psttv ) ;
            etherP.querySettingF( tinP , psttv , tPrefix + *pptKey[offk] ) ; ___( psttv ) ;
            thirdC::c_strcpyIF( tinP , ppostv[ offk ] , T(psttv) ) ;
            etherP.delF( tinP , psttv ) ;
            break ;
        }
    }
}

voidT cloudSpecsS::sayF( tinS& tinP , etherC& etherP )
{
    ZE( strokeS* , psttSay ) ;
    etherP.strMakeF( tinP , LF , psttSay , 0 , TUCK << 3 ) ; ___( psttSay ) ;

    etherP.strFuseF( tinP , psttSay , T("cloud spec" ": "       ) ) ;
    etherP.strFuseF( tinP , psttSay , T(  " building:"          ) ) ; etherP.strFuseF( tinP , psttSay , T(postBuilding         ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; desire:"            ) ) ; etherP.strFuseF( tinP , psttSay , T(postDesire           ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; id:"                ) ) ; etherP.strFuseF( tinP , psttSay , T(postId               ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; ifdiffer:"          ) ) ; etherP.strFuseF( tinP , psttSay , T(postIfDiffer         ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; local:"             ) ) ; etherP.strFuseF( tinP , psttSay , T(postLocal            ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; password:"          ) ) ; etherP.strFuseF( tinP , psttSay , T(/*postPassword*/"(hidden for security)" ) ) ; //THE ISSUE HERE RELATES TO AUTOMATIC UPDATES ; FOR AUTOMATIC UPDATES, THIS LINE WILL DISPLAY IDEAFARM.COM'S PASSWORD TO EVERY USER ; ENABLING THIS LINE MIGHT BE OK AS LONG AS IT IS CONDITIONALLY DISABLED FOR AUTOMATIC UPDATE AND FOR ANY OTHER HARDCODED CLOUD PASSWORD
    etherP.strFuseF( tinP , psttSay , T(" ; remote:"            ) ) ; etherP.strFuseF( tinP , psttSay , T(postRemote           ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; user:"              ) ) ; etherP.strFuseF( tinP , psttSay , T(postUser             ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; delete:"            ) ) ; etherP.strFuseF( tinP , psttSay , T(postDelete           ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; delete.tries:"      ) ) ; etherP.strFuseF( tinP , psttSay , T(postDelTries         ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; master:"            ) ) ; etherP.strFuseF( tinP , psttSay , T(postMaster           ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; network:"           ) ) ; etherP.strFuseF( tinP , psttSay , T(postNetwork          ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; naptocks:"          ) ) ; etherP.strFuseF( tinP , psttSay , T(postNapTocks         ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; allornone:"         ) ) ; etherP.strFuseF( tinP , psttSay , T(postAllOrNone        ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; ghost:"             ) ) ; etherP.strFuseF( tinP , psttSay , T(postGhost            ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; waitstepmoduo:"     ) ) ; etherP.strFuseF( tinP , psttSay , T(postWaitStepModulo   ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; waitstepremainder:" ) ) ; etherP.strFuseF( tinP , psttSay , T(postWaitStepRemainder) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; like:"              ) ) ; etherP.strFuseF( tinP , psttSay , T(postLike             ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; cbmin:"             ) ) ; etherP.strFuseF( tinP , psttSay , T(postCbMin            ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; cbmax:"             ) ) ; etherP.strFuseF( tinP , psttSay , T(postCbMax            ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; trace:"             ) ) ; etherP.strFuseF( tinP , psttSay , T(postTrace            ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; copy:"              ) ) ; etherP.strFuseF( tinP , psttSay , T(postCopy             ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; renametohash:"      ) ) ; etherP.strFuseF( tinP , psttSay , T(postRenameToHash     ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; movelocaltoafter:"  ) ) ; etherP.strFuseF( tinP , psttSay , T(postMoveLocalToAfter ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; verifylocallist:"   ) ) ; etherP.strFuseF( tinP , psttSay , T(postVerifyLocalList  ) ) ;
    etherP.strFuseF( tinP , psttSay , T(" ; hireadamafter:"     ) ) ; etherP.strFuseF( tinP , psttSay , T(postHireAdamAfter    ) ) ;

    etherP.traceF( tinP , psttSay , /*flTRACE_NOpREFIX |*/ flTRACE_KEEPcRlF ) ;
    etherP.delF( tinP , psttSay ) ;
}

boolT cloudUpdateLocalCBF( tinS& tinP , etherC& etherP , cloudC& cloudP , const strokeS* const psttShortP , countT* pcArgP )
{
    return 1 ;
}

boolT cloudUpdateRemoteCBF( tinS& tinP , etherC& etherP , cloudC& cloudP , const strokeS* const psttShortP , countT* pcArgP )
{
    return 1 ;
}

boolT cloudNixLocalCBF( tinS& tinP , etherC& etherP , cloudC& cloudP , const strokeS* const psttShortP , countT* pcArgP )
{
    return 1 ;
}

boolT cloudNixRemoteCBF( tinS& tinP , etherC& etherP , cloudC& cloudP , const strokeS* const psttShortP , countT* pcArgP )
{
    return 1 ;
}

byteT pbBuffer[ TUCK ] ;
byteT pbBufferCopy[ TUCK ] ;
countT myCBF( tinS& tinP , countT& cArg1P , countT& cArg2P )
{
    strokeS*&     psttzLeverCloudP =     *(strokeS**)(&cArg2P)[ 1 ] ;
    switchStackC& swsSettingsP     = *(switchStackC*)(&cArg2P)[ 2 ] ;

    thirdC::c_memsetIF( tinP , pbBufferCopy , sizeof pbBufferCopy ) ;

    for( countT offr = 0 ; pbBuffer[ offr ] ; offr ++ ) pbBufferCopy[ offr ] = reverseBitsF( pbBuffer[ offr ] ) ;

    osTextT postHey[] = "!cloud." ;
    if( thirdC::c_strstrIF( tinP , pbBufferCopy , postHey ) )
    {
        osTextT* postc = pbBufferCopy + sizeof postHey - 1 ;
        osTextT* poste = thirdC::c_strrchrIF( tinP , postc , '.' ) ;
        *( poste ++ ) = 0 ;

        TN( tCloud , postc ) ;
        ZE( strokeS* , psttKey ) ;
        tinP.pEther->strMakeFromOsTextF( tinP , psttKey , poste ) ; ___( psttKey ) ;

        psttzLeverCloudP = tCloud ;
        ZE( countT , ids ) ;
        swsSettingsP.sinkF( tinP , ids , psttKey , flSTACKsINK_UNIQUE ) ;
        __Z( ids ) ; // NONUNIQUENESS IS IMPOSSIBLE BECAUSE bitTreeC IS USED TO STORE THE SETTINGS KEYS AND VALUES
    }

    return 0 ;
}

#define ADDfLAK |  0x84c73d00
#define SUBfLAK & ~0x84c73d00

//202102241535: THIS IS OBSOLETE NOW THAT CODE IS OPEN SOURCE
#if defined( NEVERdEFINED )

voidT secretAutoUpdateF( tinS& tinP , etherC& etherP , textC& tUserP , textC& tPasswordP )
{
    countT pcUser[]     = { 'i' ADDfLAK , 'p' ADDfLAK , 'd' ADDfLAK , 'o' ADDfLAK , 's' ADDfLAK , '.' ADDfLAK , 'u' ADDfLAK , 'p' ADDfLAK , 'd' ADDfLAK , 'a' ADDfLAK , 't' ADDfLAK , 'e' ADDfLAK , '.' ADDfLAK , 'c' ADDfLAK , 'l' ADDfLAK , 'i' ADDfLAK , 'e' ADDfLAK , 'n' ADDfLAK , 't' ADDfLAK } ;
    countT pcPassword[] = { 'f' ADDfLAK , 'd' ADDfLAK , '3' ADDfLAK , '1' ADDfLAK , 'd' ADDfLAK , '1' ADDfLAK , 'a' ADDfLAK , 'd' ADDfLAK , 'b' ADDfLAK , 'a' ADDfLAK , '6' ADDfLAK , 'a' ADDfLAK , '4' ADDfLAK , '9' ADDfLAK , '6' ADDfLAK , '8' ADDfLAK , '9' ADDfLAK , 'b' ADDfLAK , 'a' ADDfLAK , '9' ADDfLAK , '9' ADDfLAK , 'b' ADDfLAK , 'c' ADDfLAK , 'e' ADDfLAK , '8' ADDfLAK , 'a' ADDfLAK , '6' ADDfLAK , '1' ADDfLAK , 'a' ADDfLAK , '6' ADDfLAK , '0' ADDfLAK , '4' ADDfLAK } ;

    for( countT offi = 0 ; offi < sizeof pcUser / sizeof pcUser[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcUser[ offi ] SUBfLAK ) , 0 } ;
        tUserP += T(postWo) ;
    }

    for( countT offi = 0 ; offi < sizeof pcPassword / sizeof pcPassword[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcPassword[ offi ] SUBfLAK ) , 0 } ;
        tPasswordP += T(postWo) ;
    }
}

voidT secretPreciousF( tinS& tinP , etherC& etherP , textC& tUserP , textC& tPasswordP )
{
    countT pcUser[]     = { 'p' ADDfLAK , 'u' ADDfLAK , 'b' ADDfLAK , 'l' ADDfLAK , 'i' ADDfLAK , 'c' ADDfLAK , '.' ADDfLAK , 'p' ADDfLAK , 'r' ADDfLAK , 'e' ADDfLAK , 'c' ADDfLAK , 'i' ADDfLAK , 'o' ADDfLAK , 'u' ADDfLAK , 's' ADDfLAK , '.' ADDfLAK , 'r' ADDfLAK , 'e' ADDfLAK , 'a' ADDfLAK , 'd' ADDfLAK , 'e' ADDfLAK , 'r' ADDfLAK } ;
    countT pcPassword[] = { '6' ADDfLAK , 'f' ADDfLAK , '6' ADDfLAK , 'e' ADDfLAK , 'd' ADDfLAK , '8' ADDfLAK , 'e' ADDfLAK , '2' ADDfLAK , 'e' ADDfLAK , '2' ADDfLAK , '1' ADDfLAK , 'e' ADDfLAK , '4' ADDfLAK , '3' ADDfLAK , '8' ADDfLAK , '1' ADDfLAK , 'b' ADDfLAK , '0' ADDfLAK , '5' ADDfLAK , '3' ADDfLAK , 'f' ADDfLAK , 'e' ADDfLAK , 'e' ADDfLAK , '6' ADDfLAK , 'a' ADDfLAK , '4' ADDfLAK , '2' ADDfLAK , '8' ADDfLAK , '1' ADDfLAK , '1' ADDfLAK , '0' ADDfLAK , '2' ADDfLAK } ;

    for( countT offi = 0 ; offi < sizeof pcUser / sizeof pcUser[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcUser[ offi ] SUBfLAK ) , 0 } ;
        tUserP += T(postWo) ;
    }

    for( countT offi = 0 ; offi < sizeof pcPassword / sizeof pcPassword[ 0 ] ; offi ++ )
    {
        osTextT postWo[] = { (osTextT)( pcPassword[ offi ] SUBfLAK ) , 0 } ;
        tPasswordP += T(postWo) ;
    }
}

#endif

//U::NEXT: LOAD THE CLOUD NAMES INTO A CONTAINER AND THEN LAUNCH AN ADMINISTRATOR THREAD FOR EACH CLOUD

// THESE ARE THE KEYS OF THE SETTINGS THAT ARE NEEDED TO ADMINISTER A RACKSPACE CLOUD ("Cloud Files" at Rackspace.com)
//
// THE "!cloud." PREFIX WITHIN EACH KEY IS MANDATORY ; THE CLOUD ADMINISTRATOR IGNORES SETTINGS THAT DO NOT BEGIN WITH "!cloud." WHEN
// SEARCHING SETTINGS TO BUILD A LIST OF THE CLOUDS THAT IT IS TO ADMINISTER
//
// THE "test" PART OF EACH KEY IS AN ARBITRARY NAME CHOSEN BY THE USER TO IDENTIFY A CLOUD THAT IS TO BE ADMINISTERED.  THIS NAME
// INDICATES WHICH CLOUD THE SETTING APPLIES TO.  THIS NAME MUST NOT CONTAIN BLANKS AND SHOULD CONTAIN ONLY DIGITS ('0'-'9') AND/OR
// LOWER CASE ALPHAS ('a'-'z').  IT SHOULD NOT CONTAIN PUNCTUATION.  THE '!' CHARACTER IS RESERVED FOR USE WITHIN IPDOS (tm).
//
// THE SUFFIX OF EACH KEY, "building", "id", "local", ETC., IS MANDATORY.  THESE SUFFIXES CORRESPOND TO INFORMATION ITEMS REQUIRED
// TO ADMINISTER THE CLOUD.  THESE SUFFIX NAMES ARE CHOSEN TO CORRESPOND CLOSELY TO THE NAMES USED BY THE CLOUD SERVICE PROVIDER
// (E.G. rackspace.com).  THE FOLLOWING IS A LIST OF ALL OF THE SETTINGS REQUIRED FOR A RACKSPACE CLOUD.
//
//  "!cloud.test.building"
//  "!cloud.test.desire"
//  "!cloud.test.id"
//  "!cloud.test.local"
//  "!cloud.test.password"
//  "!cloud.test.remote"
//  "!cloud.test.user"
// 
// SETTINGS WITH THESE NAMES RESULT IN THE FOLLOWING SHORT KEYS BEING DEFINED FOR THE CLOUD THAT THE USER HAS NAMED "test":
// 
// cloud: test
//   key: building
//   key: desire
//   key: id
//   key: local
//   key: password
//   key: remote
//   key: user
//
// IMMEDIATELY AFTER INSTALLING IPDOS (tm), NONE OF THESE SETTINGS EXIST.  AFTER INSTALLING IPDOS (tm), CONTACT IDEAFARM.COM TO
// ESTABLISH AN EMAIL SUPPORT RELATIONSHIP AND TO ENABLE IPDOS (tm) ON YOUR COMPUTER.  THEN CONFIGURE IPDOS.  YOU CONFIGURE
// IPDOS BY CREATING ASCII PLAIN TEXT FILES WITH NAMES THAT END WITH ".soil".  EACH SUCH FILE MUST CONFORM TO THE REQUIREMENTS
// OF THE SOIL (tm)  ("SENTIENT OBJECT INTERFACE LANGUAGE") LANGUAGE.  STORE EACH OF YOUR SOIL FILES IN A SAFE PLACE.  THINK
// OF EACH OF THESE FILES AS A DECLARATORY PROGRAM.  TO "RUN" SUCH A PROGRAM, COPY AND PASTE ** A COPY ** OF THE PROGRAM INTO
// A PARTICULAR FOLDER WITHIN THE IPDOS (tm) HOME FOLDER.  THE PARTICULAR FOLDER IS:
// 
//     ///ideafarm.home.1/IdeaFarm (tm)/SYSTEM/Drop a Copy of SOIL (tm) Text Here/
// 
// WHEN YOU DO THAT, THE FILE WILL DISAPPEAR IMMEDIATELY BECAUSE IT HAS BEEN MOVED TO ANOTHER FOLDER:
// 
//     ///ideafarm.home.1/IdeaFarm (tm)/SYSTEM/SOIL (tm) Text Being Eaten/
// 
// WITHIN A MINUTE OR OO, THE FILE WILL BE MOVED INTO WO OF OO FOLDERS:
// 
//     ///ideafarm.home.1/IdeaFarm (tm)/SYSTEM/Pick Up SOIL (tm) Reply Text Here/
// 
//     ///ideafarm.home.1/IdeaFarm (tm)/SYSTEM/Pick Up Rejected Files Here/
// 
// IF THE FILE IS REJECTED, IT WILL BE ACCOMPANIED WITH ANOTHER ASCII PLAIN TEXT FILE THAT CONTAINS ERROR INFORMATION
// TO INSPECT OR EDIT A SOIL (TM) FILE, OPEN IT WITH A NORMAL TEXT EDITOR (SUCH AS NOTEPAD.EXE ON WINDOWS).  THE FIRST
// TIME THAT YOU OPEN A SOIL (TM) FILE, TELL WINDOWS WHAT FILE YOU WANT TO USE WHENEVER OPENING A SOIL (TM) FILE.
// 

TODO

thirdC::osProcessIdPhaseAdamIF( tinP , ifcIDpHASEhANDOFFoLD_WORKING ) ;

const countT idDesireSave = etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZIER ) ;

TN( tArgKeyName , "!name" ) ;

ZE( strokeS* , psttNapCommand ) ;
TN( tArgKeyCloudSpec , "!napCloudSpec" ) ;
{
    strokeS*& pstt1Param = etThread.ether_pstt1_processParametersI_F( tinP ) ;
    ZE( boolT , bArmed ) ;
    FORsTRINGSiN1( pstt1Param )
    {
        etThread.traceF( tinP , T("param: ")+T(psttc1) ) ;
        if( !etThread.strCompareF( tinP , psttc1 , tArgKeyCloudSpec ) ) bArmed = 1 ;
        else if( bArmed )
        {
            bArmed = 0 ;
            etThread.strMakeF( tinP , LF , psttNapCommand , psttc1 ) ; ___( psttNapCommand ) ;
        }
    }
}

homeS& home = homeS::homeIF() ;

/*
if
(
    !( F(home.flags) & flHOMEs_PAIDpRIVILEGES )
    &&
    !( F(home.flags) & flHOMEs_IDEAFARMcLOUDiSgONE )
)
etThread.traceF( tinP , T("CLOUD: doing nothing since this home does not have PAID privileges") ) ;
else*/ if( !psttNapCommand )
{
    ZE( strokeS* , psttzLeverCloud ) ;
    switchStackC swsSettings( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , psttzLeverCloud , flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_strokeS ) ;

    countT pcArg[] = { 0 , (countT)&psttzLeverCloud , (countT)&swsSettings } ;
    etThread.walkSettingsF( tinP , pbBuffer , sizeof pbBuffer , countTC() , myCBF , pcArg ) ;

    ZE( boolT  , bQuit   ) ;
    ZE( countT , cClouds ) ;
    countT cFlavors = swsSettings.cFlavorsF( tinP ) ;
    etThread.traceF( tinP , T("launching a cloud administrator process for each cloud [cClouds]: ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
    ZE( boolT , bExeDllPublisher ) ;
    TN( tb , " " ) ;
    for( countT idf = 1 ; !ether && idf <= cFlavors ; idf ++ )
    {
        psttzLeverCloud = (strokeS*)swsSettings.leverF( tinP , idf ) ;
        etThread.traceF( tinP , T("cloud: ")+T(psttzLeverCloud) ) ;

        TN( tNapSpecName , "" ) ;
        {
            ZE( strokeS* , psttu ) ;
            etThread.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
            tNapSpecName = T("cloud.napSpec.")+T(psttu) ;
            etThread.delF( tinP , psttu ) ;
        }

        etThread.traceF( tinP , T("constructing cloud spec napkin with name: ")+tNapSpecName ) ;
        napkinC napSpec( tinP , TAG( TAGiDnULL ) , tNapSpecName , 0 , sizeof( cloudSpecsS ) , ifcOPENsHAREDmEMORYhOW_nCeF ) ;

        cloudSpecsS* pSpec = new( 0 , tinP , &napSpec ) cloudSpecsS( tinP , etThread , psttzLeverCloud ) ; ___( pSpec ) ;
        napSpec.formattingIsDoneF( tinP ) ; // *pSpec IS NOT COMPLETELY FORMATTED YET, BUT DEFERRING THIS LINE WOULD CAUSE THE MONOTONIC GRABBING RULE TO BE VIOLATED BECAUSE TELEMETRY CAN BE WRITTEN DURING THE CALL TO cloudSpecsS::setF

        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        while( swsSettings )
        {
            ZE( strokeS* , psttk ) ;
            swsSettings >> psttk ;
            //etThread.traceF( tinP , T("  key: ")+T(psttk) ) ;
            pSpec->cloudSpecsS::setF( tinP , etThread , psttzLeverCloud , psttk ) ;
            etThread.delF( tinP , psttk ) ;
        }
        THREADmODE1rESTORE

        if( !thirdC::c_strcmpIF( tinP , pSpec->postRemote , "exedll.1" ) ) bExeDllPublisher = 1 ;

        pSpec->sayF( tinP , etThread ) ;

        cClouds ++ ;
        etThread.ifcHireF( tinP , T("ifcIDaDAM_CLOUD") , tinP.pAdamGlobal1->idAdam , tArgKeyName+T(" \"")+T(pSpec->postName)+T("\" ")+tArgKeyCloudSpec+tb+tNapSpecName , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether && napSpec.cRefF() == 1 ) { ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ; }
    }

    countT idComputer = etThread.diskIdF( tinP , T("///c") ) ;

    ZE( boolT , bSuppressPrecious ) ;
    {
        ZE( strokeS* , psttSuppressPrecious ) ; etThread.querySettingF( tinP , psttSuppressPrecious , T("!ipdos.suppress.precious")  ) ; ___( psttSuppressPrecious ) ;
        bSuppressPrecious = psttSuppressPrecious && !etThread.strCompareF( tinP , psttSuppressPrecious , T("yes") ) ;
        etThread.delF( tinP , psttSuppressPrecious ) ;
    }

    ZE( boolT , bForcePrecious ) ;
    {
        ZE( strokeS* , psttForcePrecious ) ; etThread.querySettingF( tinP , psttForcePrecious , T("!ipdos.force.precious")  ) ; ___( psttForcePrecious ) ;
        bForcePrecious = psttForcePrecious && !etThread.strCompareF( tinP , psttForcePrecious , T("yes") ) ;
        etThread.delF( tinP , psttForcePrecious ) ;
    }

    ZE( boolT , bSuppressAutoUpdate ) ;
    {
        ZE( strokeS* , psttSuppressAutoUpdate ) ; etThread.querySettingF( tinP , psttSuppressAutoUpdate , T("!ipdos.suppress.auto.update")  ) ; ___( psttSuppressAutoUpdate ) ;
        bSuppressAutoUpdate = psttSuppressAutoUpdate && !etThread.strCompareF( tinP , psttSuppressAutoUpdate , T("yes") ) ;
        etThread.delF( tinP , psttSuppressAutoUpdate ) ;
    }

    ZE( boolT , bForceAutoUpdate ) ;
    {
        ZE( strokeS* , psttForceAutoUpdate ) ; etThread.querySettingF( tinP , psttForceAutoUpdate , T("!ipdos.force.auto.update")  ) ; ___( psttForceAutoUpdate ) ;
        bForceAutoUpdate = psttForceAutoUpdate && !etThread.strCompareF( tinP , psttForceAutoUpdate , T("yes") ) ;
        etThread.delF( tinP , psttForceAutoUpdate ) ;
    }

    countT idComputerCraftworkMaster = IDcOMPUTER_IPDOSmASTERcRAFTWORK ;

    if( bSuppressAutoUpdate || ( !bForceAutoUpdate && ( bExeDllPublisher || idComputer == idComputerCraftworkMaster ) ) ) // DISABLE AUTO UPDATE IF DEVELOPMENT MACHINE
    {
        TN( tReasons , "" ) ;
        if( bExeDllPublisher                               ) tReasons += T("\"this home publishes exedll.1\"") ;
        if( idComputer == idComputerCraftworkMaster        ) tReasons += T(tReasons.csF(tinP)?"    \"this home is on a development computer\"":"\"this home is on a development computer\"") ;
        if( bSuppressAutoUpdate                            ) tReasons += T(tReasons.csF(tinP)?"    \"this home is configured to suppress automatic update\"":"\"this home is configured to suppress automatic update\"") ;

        etThread.traceF( tinP , T("cloud: IPDOS (tm) automatic update will be suppressed [reasons]:    ")+tReasons ) ;
    }
    else
    {
        if( bForceAutoUpdate ) etThread.traceF( tinP , T("cloud: settings indicate that automatic update is to be forced") ) ;
        etThread.traceF( tinP , T("cloud: IPDOS (tm) automatic update") ) ;

        // IT IS CRITICAL THAT THE "hover" DIRECTORY BE PROCESSED BEFORE THE "master" DIRECTORY, BOTH WHEN THE DEVELOPMENT COMPUTER PUBLISHES AND WHEN A CLIENT UPDATES ITSELF
        // THIS IS ASSURED AS LONG AS THE BASE OPERATING SYSTEM COLLATES "hover" BEFORE "master"
        // THE REASON FOR THE REQUIREMENT IS THAT EVERY FILE IN "hover" THAT IS REFERENCED BY A FILE IN "master" MUST EXIST
        // IT IS THE REFERENCES IN THE FILES IN "master" THAT DETERMINE WHICH FILE IN "hover" IS LAUNCHED WHEN LAUNCHING THE PROCESS FOR AN ADAM

        TN( tNapSpecName , "" ) ;
        {
            ZE( strokeS* , psttu ) ;
            etThread.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
            tNapSpecName = T("cloud.napSpec.")+T(psttu) ;
            etThread.delF( tinP , psttu ) ;
        }

        etThread.traceF( tinP , T("constructing cloud spec napkin with name: ")+tNapSpecName ) ;
        napkinC napSpec( tinP , TAG( TAGiDnULL ) , tNapSpecName , 0 , sizeof( cloudSpecsS ) , ifcOPENsHAREDmEMORYhOW_nCeF ) ;

        TN( tUser , "ipdos.update.client" ) ;   //A:ASSUME: THIS USER ACCOUNT ONLY HAS READ-ONLY ACCESS TO RACKSPACE CLOUD FILES
        TN( tPassword , "ee1d248d02ea4c6894858cd383849b77" ) ;
        //secretAutoUpdateF( tinP , etThread , tUser , tPassword ) ;

                                                     // cloudSpecsS( tinP , etherP   , psttNameP                        , postBuildingP , postDesireP , postIdP         , postIfDifferP , postLocalP                                                       , postPasswordP , postRemoteP , postUserP , postDeleteP , postDelTriesP , postMasterP , postNetworkP , postNapTocksP , postAllOrNoneP , postGhostP , postWaitStepModuloP , postWaitStepRemainderP , postLikeP , postCbMinP , postCbMaxP , postTraceP , postCopyP , postRenameToHashP , postMoveLocalToAfterP , postVerifyLocalListP , postHireAdamAfterP ) ;
        cloudSpecsS* pSpec = new( 0 , tinP , &napSpec ) cloudSpecsS( tinP , etThread , T("IPDOS (tm) automatic update") , "IAD"         , 0           , "rackspace.com" , 0             , "///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/" , tPassword     , "exedll.1"  , tUser     , "notexist"  , "1"           , "remote"    , 0            , "0008"        , "yes"          , "no"       , "0"                 , "0"                    , ""        , 0          , 0          , "no"       , "yes"     , "no"              , ""                    , ""                   , ""                 ) ; ___( pSpec ) ;
        napSpec.formattingIsDoneF( tinP ) ;

        pSpec->sayF( tinP , etThread ) ;

        cClouds ++ ;
        etThread.ifcHireF( tinP , T("ifcIDaDAM_CLOUD") , tinP.pAdamGlobal1->idAdam , tArgKeyName+T(" \"")+T(pSpec->postName)+T("\" ")+tArgKeyCloudSpec+tb+tNapSpecName , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether && napSpec.cRefF() == 1 ) { ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ; }
    }

    // PRECIOUS (SOURCE AND BUILD) DISCLOSURE: COPYRIGHTED OPEN SOURCE
    if( bSuppressPrecious || ( !bForcePrecious && ( bExeDllPublisher || idComputer == idComputerCraftworkMaster ) ) ) // DISABLE PRECIOUS IF DEVELOPMENT MACHINE
    {
        TN( tReasons , "" ) ;
        if( bSuppressPrecious                              ) tReasons += T("\"settings indicate that precious is to be suppressed\"") ;
        if( idComputer == idComputerCraftworkMaster        ) tReasons += T(tReasons.csF(tinP)?"    \"this home is on a development computer\"":"\"this home is on a development computer\"") ;
        if( bExeDllPublisher                               ) tReasons += T("\"this home publishes exedll.1\"") ;

        etThread.traceF( tinP , T("cloud: IdeaFarm (tm) Precious (source code) will be suppressed [reasons]:    ")+tReasons ) ;
    }
    else
    {
        if( bForcePrecious ) etThread.traceF( tinP , T("cloud: settings indicate that precious is to be forced") ) ;
        etThread.traceF( tinP , T("cloud: IdeaFarm (tm) Precious Disclosure (c) Wo'O Ideafarm") ) ;

        TN( tNapSpecName , "" ) ;
        {
            ZE( strokeS* , psttu ) ;
            etThread.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
            tNapSpecName = T("cloud.napSpec.")+T(psttu) ;
            etThread.delF( tinP , psttu ) ;
        }

        etThread.traceF( tinP , T("constructing cloud spec napkin with name: ")+tNapSpecName ) ;
        napkinC napSpec( tinP , TAG( TAGiDnULL ) , tNapSpecName , 0 , sizeof( cloudSpecsS ) , ifcOPENsHAREDmEMORYhOW_nCeF ) ;

        TN( tUser , "public.precious.reader" ) ;
        TN( tPassword , "61a1c6f418e5486493196c4d91d0a6e5" ) ;
        //secretPreciousF( tinP , etThread , tUser , tPassword ) ;
                                                                                                                                                                                                                                                                                                                                             /*0001 TOCKS = 1 HOUR (90 FOREIGN MINUTES)*/
                                                     // cloudSpecsS( tinP , etherP   , psttNameP                                     , postBuildingP , postDesireP , postIdP         , postIfDifferP , postLocalP                     , postPasswordP , postRemoteP                             , postUserP , postDeleteP , postDelTriesP , postMasterP , postNetworkP , postNapTocksP , postAllOrNoneP , postGhostP , postWaitStepModuloP , postWaitStepRemainderP , postLikeP , postCbMinP , postCbMaxP , postTraceP , postCopyP , postRenameToHashP , postMoveLocalToAfterP , postVerifyLocalListP , postHireAdamAfterP ) ;
        cloudSpecsS* pSpec = new( 0 , tinP , &napSpec ) cloudSpecsS( tinP , etThread , T("IdeaFarm (tm) Precious (c) Wo'O Ideafarm") , "IAD"         , 0           , "rackspace.com" , 0             , "///ideafarm/precious.zipped/" , tPassword     , "ideafarm.home.1.precious.zip.disclose" , tUser     , "notexist"  , "1"           , "remote"    , 0            , "0008"        , "yes"          , "no"       , "0"                 , "0"                    , ""        , 0          , 0          , "no"       , "yes"     , "no"              , ""                    , ""                   , ""                 ) ; ___( pSpec ) ;
        napSpec.formattingIsDoneF( tinP ) ;

        pSpec->sayF( tinP , etThread ) ;

        cClouds ++ ;
        etThread.ifcHireF( tinP , T("ifcIDaDAM_CLOUD") , tinP.pAdamGlobal1->idAdam , tArgKeyName+T(" \"")+T(pSpec->postName)+T("\" ")+tArgKeyCloudSpec+tb+tNapSpecName , flHIRE_DISPLAYaUTO , nicNameC() ) ;

        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether && napSpec.cRefF() == 1 ) { ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ; }
    }

    if( cClouds )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( !ether ) { ++ s ; ether.osSleepF( tinP , TOCK ) ; } // REMAIN ALIVE SO THAT THE PROCESSES THAT I LAUNCH REMAIN ATTACHED TO THE PROCESS TREE GROWING FROM THE IPDOS (TM) SERVICE PROCESS
    }
}
else
{
    etThread.traceF( tinP , T("command received: ")+T(psttNapCommand) ) ;

    napkinC napSpec( tinP , TAG( TAGiDnULL ) , T(psttNapCommand) , 0 , sizeof( cloudSpecsS ) , ifcOPENsHAREDmEMORYhOW_nFeO ) ;

    cloudSpecsS& cloudSpec = *(cloudSpecsS*)(byteT*)napSpec ;

    cloudSpec.sayF( tinP , etThread ) ;

    ZE( countT , idCloud ) ;
    if( *cloudSpec.postId && !etThread.strCompareF( tinP , T(cloudSpec.postId) , T("rackspace.com") ) ) idCloud = ifcIDcLOUD_RACKSPACE ;

    countT pcArgUpdate[]    = { (countT)&cloudSpec } ;
    countT pcArgNix[] = { (countT)&cloudSpec } ;

    /*const*/ flagsT flagsCt      = flCLOUDc_null ;
    //etThread.traceF( tinP , T("debug [flagsCt]: ")+TF3(flagsCt,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;

    countT       idDoIfDiffer = ifcIDdOcLOUDiFdIFFER_REPORT ;

    if( *cloudSpec.postIfDiffer )
    {
             if( !etThread.strCompareF( tinP , T(cloudSpec.postIfDiffer) , T("nothing") ) ) idDoIfDiffer = ifcIDdOcLOUDiFdIFFER_NOTHING ;
        else if( !etThread.strCompareF( tinP , T(cloudSpec.postIfDiffer) , T("report" ) ) ) idDoIfDiffer = ifcIDdOcLOUDiFdIFFER_REPORT  ;
        else if( !etThread.strCompareF( tinP , T(cloudSpec.postIfDiffer) , T("replace") ) ) idDoIfDiffer = ifcIDdOcLOUDiFdIFFER_REPLACE ;
    }

    if( idCloud && *cloudSpec.postUser && *cloudSpec.postPassword && *cloudSpec.postRemote && *cloudSpec.postName && *cloudSpec.postLocal && *cloudSpec.postBuilding )
    {
        countT waitStepModulo    = etThread.strDigitsToSCountF( tinP , T(cloudSpec.postWaitStepModulo   ) ) ;
        countT waitStepRemainder = etThread.strDigitsToSCountF( tinP , T(cloudSpec.postWaitStepRemainder) ) ;

        countT time1Nap = *cloudSpec.postNapTocks
            ? etThread.strDigitsToSCountF( tinP , T(cloudSpec.postNapTocks) ) << 0x10
            : waitStepModulo >= 2
                ? 0                                                                             // IF I AM PARTICIPATING IN A STEPPING GROUP THEN THE NAP SPECIFICATION DEFAULTS TO 0
                : TICK << 4                                                                     // ELSE                                           THE NAP SPECIFICATION DEFAULTS TO WO HOUR
        ;

        TN( tAborted , "cloud administration cycle aborted ; napping for 01 tock" ) ;
        TN( tEnded   , "" ) ; tEnded = T("cloud administration cycle ended ; napping for ")+TF2(time1Nap>>0x10,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" tock") ;

        if( waitStepModulo >= 2 ) etThread.traceF( tinP , T("before beginning each cloud administration cycle, i will wait for home.idStepSoil % ")+TF2(waitStepModulo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" to be ")+TF2(waitStepRemainder,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" and i will increment home.idStepSoil before and after each cycle") ) ;
        else                      etThread.traceF( tinP , T("after each successful cloud administration cycle, i will nap for ")+TF2(time1Nap>>0x10,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" tock before beginning a new cycle") ) ;

        homeS& home = homeS::homeIF() ;
        etherC& etPrime = etherC::etPrimeIF( tinP ) ;

        IFsCRATCH
        {
            SCOOPS

            while( !etPrime && !ether && !etThread )
            {
                #if defined( NEVERdEFINED )
                if
                (
                    !( F(home.flags) & flHOMEs_PAIDpRIVILEGES )
                    &&
                    !( F(home.flags) & flHOMEs_IDEAFARMcLOUDiSgONE )
                )
                {
                    etThread.traceF( tinP , T("CLOUD: quitting because this home no longer has PAID privileges") ) ;
                    break ;
                }
                #endif

                if( !etPrime && waitStepModulo >= 2 )
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;

                    TN( tb4 , "    " ) ;
                    ZE( boolT , bNapped ) ;

                    while( !etPrime && home.idStepSoil % waitStepModulo != waitStepRemainder )
                    {
                        if( !bNapped )
                        {
                            ether.traceF( tinP , T("cloudC: waitstep: waiting begun [idStepSoil,waitStepModulo,waitStepRemainder]:    ")+TF2(home.idStepSoil,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2(waitStepModulo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2(waitStepRemainder,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                            bNapped = 1 ;
                        }

                        ++ s ; etPrime.osSleepF( tinP , TOCK ) ;
                    }

                    if( !etPrime )
                    {
                        ether.traceF( tinP , T(bNapped?"cloudC: waitstep: waiting ended [idStepSoil,waitStepModulo,waitStepRemainder]:    ":"cloudC: waitstep: did not wait  [idStepSoil,waitStepModulo,waitStepRemainder]:    ")+TF2(home.idStepSoil,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2(waitStepModulo,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+tb4+TF2(waitStepRemainder,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                        countT idStep = 1 + incv02AM( home.idStepSoil ) ;
                        etThread.traceF( tinP , T("cloud: step: [idStepSoil]:    ")+TF2(idStep,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    }
                }

                ZE( boolT , bFail ) ;
                {
                    ZE( boolT , bRestoreTracing ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postTrace , "no" ) )
                    {
                        static boolT bDone ;
                        if( !bDone )
                        {
                            bDone = 1 ;
                            etThread.traceF( tinP , T("tracing will be suppressed for this adam while the cloudC instance exists, because the cloud specification requests this") ) ;
                        }

                        if( !( F(thirdC::third_flagsModeAdam1I_IF(tinP)) & flADAMmODE1_NOtRACING ) )
                        {
                            bRestoreTracing = 1 ;
                            thirdC::third_flagsModeAdam1I_IF( tinP ) |= flADAMmODE1_NOtRACING ;
                        }
                    }

                    //etThread.traceF( tinP , T("cloud administration cycle begun / renaming files to eliminate invalid characters") ) ;
                    //etThread.disk FixBadFileNamesF( tinP , T(cloudSpec.postLocal) , flETHERfIXnAMES_RECURSE ) ; // JUST IN CASE AN INVALID FILE NAME GOT IN

                    etThread.traceF( tinP , T("cloud administration begun / initial administration routine / starting") ) ;

                    TN( tName , cloudSpec.postName ) ;

                    flagsT flagsCloud = flagsCt ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;

                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postNetwork , "internal" ) ) flagsCloud |= flCLOUDc_USEiNTERNALlAN ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postMaster  , "remote"   ) ) flagsCloud |= flCLOUDc_REMOTEiSmASTER ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postDelete  , "exist"    ) ) flagsCloud |= flCLOUDc_DELETEiFmASTEReXIST ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postDelete  , "notexist" ) ) flagsCloud |= flCLOUDc_DELETEiFmASTERnOTeXIST ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postGhost   , "yes"      ) ) flagsCloud |= flCLOUDc_GHOST ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postCopy , "no"     ) ) flagsCloud |= flCLOUDc_NOcOPY ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postRenameToHash , "yes" ) ) flagsCloud |= flCLOUDc_RENAMEtOhASH ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;
                    if( !thirdC::c_strcmpIF( tinP , cloudSpec.postVerifyLocalList , "no" ) ) flagsCloud |= flCLOUDc_DOnOTvERIFYlOCALlIST ;
                    //etThread.traceF( tinP , T("debug [flagsCloud]: ")+TF3(flagsCloud,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) ) ;

                    countT idDesireSave = etThread.osThreadSwitchingDesireF( tinP ) ;
                    etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_LAZY ) ;
                    _IO_
                    {
                        if( tName.csF( tinP ) > 0x30 )
                        {
                            ZE( strokeS* , psttn ) ;
                            countT idf = 1 ;
                            countT idl = 0x30 ;
                            etThread.strSubstringF( tinP , psttn , idf , idl , tName ) ; ___( psttn ) ;
                            tName = T(psttn) ;
                            etThread.delF( tinP , psttn ) ;
                            etThread.traceF( tinP , T("warning: cloud name truncated to length 03:  ")+tName ) ;
                        }

                        cloudC cloudRax( tinP , tName , idDoIfDiffer , flagsCloud , idCloud , T(cloudSpec.postBuilding) , T(cloudSpec.postUser) , T(cloudSpec.postPassword) , T(cloudSpec.postRemote) , T(cloudSpec.postLocal) , T(cloudSpec.postLike) , etThread.strDigitsToSCountF( tinP , T(cloudSpec.postCbMin) ) , etThread.strDigitsToSCountF( tinP , T(cloudSpec.postCbMax) ) , etThread.strDigitsToSCountF( tinP , T(cloudSpec.postDelTries) ) , F(flagsCloud) & flCLOUDc_REMOTEiSmASTER ? cloudUpdateLocalCBF : cloudUpdateRemoteCBF , pcArgUpdate , F(flagsCloud) & flCLOUDc_REMOTEiSmASTER ? cloudNixLocalCBF : cloudNixRemoteCBF , pcArgNix , T(cloudSpec.postMoveLocalToAfter) , T(cloudSpec.postHireAdamAfter) ) ;
                        etThread.osThreadSwitchingDesireF( tinP , idDesireSave ) ;

                        if( POOP )
                        {
                            POOPR
                            bFail = 1 ;
                            etThread.traceF( tinP , T("cloud administration cycle could not be completed") ) ;
                        }

                        etThread.traceF( tinP , T("cloud administration cycle ending") ) ;
                    }

                    etThread.traceF( tinP , bFail ? tAborted : tEnded ) ;
                    if( bRestoreTracing ) thirdC::third_flagsModeAdam1I_IF( tinP ) &= ~( F(flADAMmODE1_NOtRACING) ) ;
                }

                if( !etPrime )
                {
                    if( bFail ) time1Nap = TOCK << 4 ;

                    if( time1Nap && !ether )
                    {
                        etThread.traceF( tinP , T("cloud: napping [time1Nap]:    ")+TF2(time1Nap,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                        ether.osSleepF( tinP , time1Nap ) ;
                        etThread.traceF( tinP , T("cloud: napped  [time1Nap]:    ")+TF2(time1Nap,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    }

                    if( waitStepModulo >= 2 )
                    {
                        countT idStep = 1 + incv02AM( home.idStepSoil ) ;
                        etThread.traceF( tinP , T("cloud: step: [idStepSoil]:    ")+TF2(idStep,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                    }
                }
            }
        }
    }
    else etThread.traceF( tinP , T("cloud administration suppressed because some required settings were not found") ) ;
}
etThread.delF( tinP , psttNapCommand ) ;

etThread.osThreadSwitchingDesireF( tinP , idDesireSave ) ;

thirdC::osProcessIdPhaseAdamIF( tinP , ifcIDpHASEhANDOFFoLD_SHUTTINGdOWN ) ;

REST


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef DDNUMB
#undef DDNAME
#undef IDFILE
#undef postHEADER
#undef ifcENABLEtHIRDpARTIES
//SOURCE: 5adam.510006d9.1 END
