//SOURCE: 5adam.510004fb.4 BEGIN
#define DDNAME "5adam.510004fb.4"
#define DDNUMB 0x510004fb
#define IDFILE (countT)0x0
#define postHEADER "510004fb.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.510004fb.4.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*1*//*ifcIDaDAM_KERNEL2MONITOR 4*//*1*/

#include postHEADER

//CODEsYNC: 1050104 10200dc
voidT unregisterObsoleteDriversF( tinS& tinP , etherC& etThread , const countT idAdamP )
{
    ZE( strokeS* , psttDriverName ) ;
    etThread.osDriverNameFromMasterF( tinP , psttDriverName , idAdamP ) ; ___( psttDriverName ) ;

    thirdC& thThread = etThread ;
    stackC stDriver( tinP , thThread , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_byteT ) ;

    //U::EDIT ALL NECESSARY CODE SO THAT (1) OBSOLETED SERVICE CAN BE ACTIVE, AND (2) ONLY SERVICES FOR THE CURRENT HOME ARE AFFECTED
    TN( tMask , "IdeaFarm.H" ) ; tMask += TF2(etherC::ifc_idHomeIdisk_IF(),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".") ;
    thThread.osDriversF( tinP , stDriver , tMask ) ; //U::FUNCTION CHANGED; NOW RETURNS -ALL- DRIVERS, NOT JUST INACTIVE
    while( stDriver )
    {
        ZE( osTextT* , postn ) ;
        stDriver >> postn ;

        ZE( countT , idHomeOld ) ;
        ZE( countT , idAdamOld ) ;
        ZE( countT , idVersionOld ) ;
        etThread.osDriverParseNameF( tinP , idHomeOld , idAdamOld , idVersionOld , T(postn) ) ;

        ZE( countT , idHomeNew ) ;
        ZE( countT , idAdamNew ) ;
        ZE( countT , idVersionNew ) ;
        etThread.osDriverParseNameF( tinP , idHomeNew , idAdamNew , idVersionNew , psttDriverName ) ;

        if( idAdamOld == idAdamNew && idVersionOld != idVersionNew )
        {
            //POPUP( T("1050104 1: actor, victim:\r\n")+T(psttDriverName)+T("\r\n")+T(postn) ) ; //U::
            //U::thThread.osDriverUnregisterF( tinP , T(postn) ) ;
            CONoUTrAW( T("i would unregister \"")+T(postn)+T("\"\r\n") ) ; //U::
        }

        thThread.delF( tinP , postn ) ;
    }
    etThread.delF( tinP , psttDriverName ) ;

    thThread.osDriversF( tinP , stDriver , "IdeaFarmCity." ) ; //U::FUNCTION CHANGED; NOW RETURNS -ALL- DRIVERS, NOT JUST INACTIVE
    while( stDriver )
    {
        ZE( osTextT* , postn ) ;
        stDriver >> postn ;
        thThread.osDriverUnregisterF( tinP , T(postn) ) ;
        thThread.delF( tinP , postn ) ;
    }
}

countT subtract_poolOldEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    _IO_
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
    }

    poolOldEntryS* pe1 = (poolOldEntryS*)c1P ;
    poolOldEntryS* pe2 = (poolOldEntryS*)c2P ;

    ZE( sCountT , sgn ) ;
    if( pe1 && pe2 )
    {
        sgn = thirdC::c_strcmpIF( tinP , pe1->postName , pe2->postName ) ;
        if( !sgn )
        {
                 if( pe1->idClient > pe2->idClient ) sgn =   1 ;
            else if( pe1->idClient < pe2->idClient ) sgn = - 1 ;
            else if( pe1->osPid    > pe2->osPid    ) sgn =   1 ;
            else if( pe1->osPid    < pe2->osPid    ) sgn = - 1 ;
            else if( pe1->pvMe     > pe2->pvMe     ) sgn =   1 ;
            else if( pe1->pvMe     < pe2->pvMe     ) sgn = - 1 ;
        }                       
    }                       
    return sgn ;
}

countT subtract_napkinEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    _IO_

    napkinEntryS* pe1 = (napkinEntryS*)c1P ;
    napkinEntryS* pe2 = (napkinEntryS*)c2P ;

    //if( pEther )
    //{
    //    etherC& ether = *(etherC*)pEther ;
    //    ether.traceF( tinP , T("subtract_napkinEntryS_F A 1 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe1->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe1->postName) ) ;
    //    ether.traceF( tinP , T("subtract_napkinEntryS_F A 2 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe2->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe2->postName) ) ;
    //}

    ZE( sCountT , sgn ) ;
    if( pe1 && pe2 )
    {
        //sgn = thirdC::c_strcmpIF( tinP , pe1->postName , pe2->postName) ;
        //if( !sgn )
        {
                 if( pe1->osPid     > pe2->osPid     ) sgn =   1 ;
            else if( pe1->osPid     < pe2->osPid     ) sgn = - 1 ;
            else if( pe1->pbData    > pe2->pbData    ) sgn =   1 ;
            else if( pe1->pbData    < pe2->pbData    ) sgn = - 1 ;
            else if( pe1->cbData    > pe2->cbData    ) sgn =   1 ;
            else if( pe1->cbData    < pe2->cbData    ) sgn = - 1 ;
        }
    }                       

    //if( pEther )
    //{
    //    etherC& ether = *(etherC*)pEther ;
    //    ether.traceF( tinP , T("subtract_napkinEntryS_F B 1 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe1->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe1->postName) ) ;
    //    ether.traceF( tinP , T("subtract_napkinEntryS_F B 2 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe2->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe2->postName) ) ;
    //    ether.traceF( tinP , T("subtract_napkinEntryS_F B   [sgn]                              :    ")+TF2(sgn,flFORMAT_NObIGITvALUES) ) ;
    //}
    return sgn ;
}

countT subtract_processGlobal3EntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    _IO_

    processGlobal3EntryS* pe1 = (processGlobal3EntryS*)c1P ;
    processGlobal3EntryS* pe2 = (processGlobal3EntryS*)c2P ;

    ZE( sCountT , sgn ) ;
    if( pe1 && pe2 )
    {
        {
                 if( pe1->osPid        > pe2->osPid        ) sgn =   1 ;
            else if( pe1->osPid        < pe2->osPid        ) sgn = - 1 ;
            else if( pe1->pbEarlyGrain > pe2->pbEarlyGrain ) sgn =   1 ;
            else if( pe1->pbEarlyGrain < pe2->pbEarlyGrain ) sgn = - 1 ;
            else if( pe1->cGrains      > pe2->cGrains      ) sgn =   1 ;
            else if( pe1->cGrains      < pe2->cGrains      ) sgn = - 1 ;
        }
    }                       
    return sgn ;
}

countT subtract_sexEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    _IO_

    sexEntryS* pe1 = (sexEntryS*)c1P ;
    sexEntryS* pe2 = (sexEntryS*)c2P ;

    //if( pEther )
    //{
    //    etherC& ether = *(etherC*)pEther ;
    //    ether.traceF( tinP , T("subtract_sexEntryS_F A 1 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe1->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe1->postName) ) ;
    //    ether.traceF( tinP , T("subtract_sexEntryS_F A 2 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe2->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe2->postName) ) ;
    //}

    ZE( sCountT , sgn ) ;
    if( pe1 && pe2 )
    {
        sgn = thirdC::c_strcmpIF( tinP , pe1->postName , pe2->postName) ;
        if( !sgn )
        {
                 if( pe1->osPid     > pe2->osPid     ) sgn =   1 ;
            else if( pe1->osPid     < pe2->osPid     ) sgn = - 1 ;
            else if( pe1->expCbDrop > pe2->expCbDrop ) sgn =   1 ;
            else if( pe1->expCbDrop < pe2->expCbDrop ) sgn = - 1 ;
            else if( pe1->expSlots  > pe2->expSlots  ) sgn =   1 ;
            else if( pe1->expSlots  < pe2->expSlots  ) sgn = - 1 ;
            else if( pe1->pSex      > pe2->pSex      ) sgn =   1 ;
            else if( pe1->pSex      < pe2->pSex      ) sgn = - 1 ;
        }
    }                       

    //if( pEther )
    //{
    //    etherC& ether = *(etherC*)pEther ;
    //    ether.traceF( tinP , T("subtract_sexEntryS_F B 1 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe1->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe1->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe1->postName) ) ;
    //    ether.traceF( tinP , T("subtract_sexEntryS_F B 2 [osPid,expCbDrop,expSlots,postName]:    ")+TF2(pe2->osPid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expCbDrop,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pe2->expSlots,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(pe2->postName) ) ;
    //    ether.traceF( tinP , T("subtract_sexEntryS_F B   [sgn]                              :    ")+TF2(sgn,flFORMAT_NObIGITvALUES) ) ;
    //}
    return sgn ;
}

countT subtract_tinEntryS_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    _IO_

    tinEntryS* pe1 = (tinEntryS*)c1P ;
    tinEntryS* pe2 = (tinEntryS*)c2P ;

    ZE( sCountT , sgn ) ;
    if( pe1 && pe2 )
    {
             if( pe1->osPid    > pe2->osPid    ) sgn =   1 ;
        else if( pe1->osPid    < pe2->osPid    ) sgn = - 1 ;
        else if( pe1->idThread > pe2->idThread ) sgn =   1 ;
        else if( pe1->idThread < pe2->idThread ) sgn = - 1 ;
        else if( pe1->idTin    > pe2->idTin    ) sgn =   1 ;
        else if( pe1->idTin    < pe2->idTin    ) sgn = - 1 ;
        else if( pe1->idSerial > pe2->idSerial ) sgn =   1 ;
        else if( pe1->idSerial < pe2->idSerial ) sgn = - 1 ;
        else if( pe1->bIda     > pe2->bIda     ) sgn =   1 ;
        else if( pe1->bIda     < pe2->bIda     ) sgn = - 1 ;
        else if( pe1->ip       > pe2->ip       ) sgn =   1 ;
        else if( pe1->ip       < pe2->ip       ) sgn = - 1 ;
    }                       

    if( !sgn /*&& tinP.pc Utility[ 0 ]*/ )
    {
        etherC& ether = *(etherC*)pEther ;
        //if( !ether.strCompareF( tinP , T("tmHireF") , T(pe1->postThreadName) ) ) ether.traceF( tinP , T("M  [idSerial,bIda,ip,idTin,idThread,postThreadName]: ")+TF2(pe1->idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe1->bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe1->ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe1->idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe1->idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(pe1->postThreadName)+T(" |||| ")+TF2(pe2->idSerial,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe2->bIda,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe2->ip,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe2->idTin,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(pe2->idThread,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+T(pe2->postThreadName) ) ;
    }
    return sgn ;
}

NEWdELcLASS( 1 , memorySpaceS )

memorySpaceS::memorySpaceS( tinS& tinP , etherC& etherP ) :
ether( etherP ) ,
bQuitMonitor( 0 ) ,
bQuitEating( 0 ) ,
sgnDone_tmEatTelemetrySysF_( tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC2 ) ,
grab( tinP , TAG( TAGiDnULL ) , flGRABc_NOTjEALOUS , ifcIDgRABlAYER_7BASEmISC2 ) ,
cLeverSay( 0 ) ,
swTallySay( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , cLeverSay ) ,
stPool(     tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( poolOldEntryS ) ) ,
pczLeverAdam( 0 ) ,
swsNapkin(         tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverAdam , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( napkinEntryS         ) ) ,
swsSex(            tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverAdam , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( sexEntryS            ) ) ,
swsTin(            tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverAdam , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( tinEntryS            ) ) ,
swsTinWhere(       tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverAdam , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( tinEntryS            ) ) ,
swsProcessGlobal3( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverAdam , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_BLOB , sizeof( processGlobal3EntryS ) )
{
}

NEWdELcLASS( 2 , periodDataS )

periodDataS::periodDataS( tinS& tinP , etherC& etherP ) :
cLeverIdType( 0 ) ,
swEventTally( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE|flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLeverIdType ) ,
pczLeverThread( 0 ) ,
swsLog( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE|flSTACKc_ALLOWmULTIPLEuNSERIALIZED , pczLeverThread , flSTACKc_DOnOTsERIALIZE|flSTACKc_ALLOWmULTIPLEuNSERIALIZED , ifcSTACKtYPE_PTR_byteT )
{
}

poolOldEntryS::poolOldEntryS( tinS& tinP , countT osPidP , voidT* pvMeP , countT cbPoolP , countT idClientP , osTextT* postNameP , countT costNameP ) :
cRef( 1 ) ,
osPid( osPidP ) ,
pvMe( pvMeP ) ,
cbPool( cbPoolP ) ,
idClient( idClientP ) ,
costName( costNameP )
{
    _IO_    TELLsYSlIFInAME( "poolOldEntryS::poolOldEntryS" )
    if( sizeof postName > thirdC::c_strlenIF( tinP , postNameP ) ) thirdC::c_strncpyIF( tinP , postName  , postNameP , sizeof postName ) ;
    else                                                           { BLAMMO ; }
}

napkinEntryS::napkinEntryS( tinS& tinP , const countT osPidP , const osTextT* const postNameP , const byteT* const pbDataP , const countT cbDataP , const countT idLineCtP , const countT idiFileCtP ) :
osPid( osPidP ) ,
pbData( pbDataP ) ,
cbData( cbDataP ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP )
{
    _IO_    TELLsYSlIFInAME( "napkinEntryS::napkinEntryS" )
    thirdC::c_strncpyIF( tinP , postName , postNameP , sizeof postName ) ;
}

processGlobal3EntryS::processGlobal3EntryS( tinS& tinP , const countT osPidP , const byteT* const pbEarlyGrainP , const countT cGrainsP ) :
osPid( osPidP ) ,
pbEarlyGrain( pbEarlyGrainP ) ,
cGrains( cGrainsP )
{
    _IO_    TELLsYSlIFInAME( "processGlobal3EntryS::processGlobal3EntryS" )
}

sexEntryS::sexEntryS( tinS& tinP , const countT osPidP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , sexC* pSexP , const countT idLineCtP , const countT idiFileCtP ) :
osPid( osPidP ) ,
expCbDrop( expCbDropP ) ,
expSlots( expSlotsP ) ,
pSex( pSexP ) ,
pbCopy( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP )
{
    _IO_    TELLsYSlIFInAME( "sexEntryS::sexEntryS" )
    thirdC::c_strncpyIF( tinP , postName , postNameP , sizeof postName ) ;
}

tinEntryS::tinEntryS( tinS& tinP , countT idSerialP , countT osTidP , countT osPidP , boolT bIdaP , countT ipP , countT idTinP , countT idThreadP , const osTextT* const postThreadNameP , const countT idTinNamedP , const countT idLineCtP , const countT idiFileCtP ) :
idSerial( idSerialP ) ,
osTid( osTidP ) ,
osPid( osPidP ) ,
bIda( bIdaP ) ,
ip( ipP ) ,
pbCopy( 0 ) ,
idTin( idTinP ) ,
idThread( idThreadP ) ,
idTinNamed( idTinNamedP ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
idStepLath( 0 )
{
    _IO_    TELLsYSlIFInAME( "tinEntryS::tinEntryS" )
    thirdC::c_strncpyIF( tinP , postThreadName , postThreadNameP , sizeof postThreadName ) ;
    //CONoUTrAW( "tinEntryS ct: " ) ; //U::
    //CONoUTrAW( postThreadName ) ; //U::
    //CONoUTrAW( "\r\n" ) ; //U::
}

voidT buildRemovalUtilityF( tinS& tinP , etherC& etThread )
{
    ZE( boolT , bNU ) ;
    QUITO( &bNU )
    
    TN( tFolder , postFOLDERrEMOVALuTILITY ) ;
    
    TN( tMaster , "///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/master/" ) ;
    TN( tKiller , "" ) ; tKiller = T("ideafarm.")+TF3(ifcIDaDAM_UNINSTALLER,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,8)+T(".ipdos-wm") ;
    
    soulC soul1m( tinP , TAG( TAGiDnULL ) ) ;
    etThread.boxMenuF( tinP , soul1m , tMaster+T("*") ) ;
    FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
    {
        if
        (
            etThread.strIdF( tinP , T("ideafarm.01020010.ipdos-wm") , psttc1 ) ||
            etThread.strIdF( tinP , T("ideafarm.01000020.ipdos-wm") , psttc1 ) ||
            etThread.strIdF( tinP , tKiller                    , psttc1 )
        )
        {
            ZE( byteT* , pbf ) ;
            ZE( countT , cbf ) ;
            etThread.boxGetShadowF( tinP , pbf , cbf , psttc1 ) ; ___( pbf ) ;
            ZE( strokeS* , psttShort ) ;
            strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
            etThread.strWordF( tinP , psttShort , psttc1 , sttq , S1C('/') , - 1 ) ; ___( psttShort ) ;
            //etThread.strokeF( tinP , T(psttShort)+T("\r\n") ) ;
    
            etThread.boxPutF( tinP , tFolder+T(psttShort) , pbf , cbf ) ;
    
            etThread.delF( tinP , psttShort ) ;
            etThread.delF( tinP , pbf ) ;
        }
    }
    FORsTRINGSiNsPANNEDcOMBINEDtAIL1
    
    TN( tBat , "@echo off\r\nideafarm.01000020.ipdos-wm \"" ) ; tBat += tFolder + tKiller + T("\" !noTells\r\n") ;
    etThread.boxPutF( tinP , tFolder+T("openMe.bat") , tBat , tBat.csF( tinP ) ) ;
    QUITR
}

boolT reportGrabF( tinS& tinP , soulC& sRptP , const strokeS* const psttPrefixP , const countT* const pcPanLifiP , const countT osPidP )
{
    ZE( boolT , bReported ) ;

    sRptP << (strokeS*)(
                
        T(psttPrefixP)
        +T(" grab object ")+TF2(pcPanLifiP[0],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" grabF at:")+TF2(pcPanLifiP[2],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF4(pcPanLifiP[1],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(")\r\n")
                
    ) ;
                
    bReported = 1 ;

    //U::CODE MINE FOR EXPLORATORY REPORTING OF SUPPLEMENTAL INFORMATION AVAILABLE IF THIS IS A grabC BUT NOT IF THIS IS A grabitC GRAB
    //byteT pbCopyBase[ sizeof( baseGrabC ) ] ;
    //ZE( boolT , bOk ) ;
    //thirdC::dosReadProcessMemoryIF( tinP , pbCopyBase , sizeof( baseGrabC ) , bOk , pvGrabP , osPidP ) ;
    //if( bOk )
    //{
    //    baseGrabC& bg = *(baseGrabC*)pbCopyBase ;
    //    sRptP << (strokeS*)(
    //        
    //        T(psttPrefixP)
    //        +T(" ct:")+TF2(bg.idiFileCt,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF4(bg.idLineCt,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(")")
    //        +T(" at:")+TF2(bg.idiFileGrabber,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF4(bg.idLineGrabber,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(")")
    //        
    //    ) ;
    //        
    //    if( bg.idiFileGrabberNote ) sRptP << (strokeS*)( T(" ")+TF2(bg.idiFileGrabberNote,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF4(bg.idLineGrabberNote,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN,0,0xa)+T(")\r\n") ) ;
    //    else                        sRptP << (strokeS*)( T("\r\n") ) ;
    //        
    //    bReported = 1 ;
    //}

    return bReported ;
}


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
//SOURCE: 5adam.510004fb.4 END
