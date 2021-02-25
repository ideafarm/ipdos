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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029002.carc.dt_carc BEGIN
#define DDNAME       "3func.36029002.carc.dt_carc"
#define DDNUMB      (countT)0x36029002
#define IDFILE      (countT)0x1083


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1350002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/carC::~carC( voidT )/*1*/
{
    TINSL

    _IO_

    resetF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029002.carc.dt_carc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029003.carc.carc BEGIN
#define DDNAME       "3func.36029003.carc.carc"
#define DDNUMB      (countT)0x36029003
#define IDFILE      (countT)0x1084


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1350003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/carC::carC( tinS& tinP , etherC& etherP , const countT idcHirerP )/*1*/ :
ether( etherP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
idcHirer( idcHirerP ) ,
cDatum( 0 ) ,
stLog( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
stLogImpotence( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
pcPart( 0 ) ,
swUsage( tinP , etherP , TAG( TAGiDnULL ) , 0 , pcPart ) ,
mPayin( 0 )
{
    _IO_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029003.carc.carc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029004.carc.carc BEGIN
#define DDNAME       "3func.36029004.carc.carc"
#define DDNUMB      (countT)0x36029004
#define IDFILE      (countT)0x1085


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1350004.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
pbSoulP must continue to exist until i am destroyed
*/
/**/

/*1*/carC::carC( tinS& tinP , etherC& etherP , const byteT* const pbSoulP )/*1*/ :
ether( etherP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
idcHirer( pbSoulP ? ((countT*)  pbSoulP)[ 1 ] : 0 ) ,
cDatum(   pbSoulP ? ((countT*)  pbSoulP)[ 2 ] : 0 ) ,
mPayin(   pbSoulP ? ((measureT*)pbSoulP)[ 3 ] : 0 ) ,
stLog( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
stLogImpotence( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
pcPart( 0 ) ,
swUsage( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , pcPart )
{
    if( ether ) return ;
    __Z( pbSoulP ) ;
    if( ether ) return ;
    __( *(countT*)pbSoulP < 5 * sizeof( countT ) ) ;
    if( ether ) return ;

    _IO_

    countT* pcc = (countT*)pbSoulP ;

    countT cbLog          = pcc[ 4 ] ;
    countT cbLogImpotence = pcc[ 5 ] ;
    countT cbUsage        = pcc[ 6 ] ;

    __( *(countT*)pbSoulP - 6 * sizeof( countT ) - cbLog - cbLogImpotence - cbUsage ) ;

    if( !ether )
    {
        strokeS* pstt1Log          = (strokeS*)(         &pcc[ 7 ]                          ) ;
        strokeS* pstt1LogImpotence = (strokeS*)( (byteT*)&pcc[ 7 ] + cbLog                  ) ;
        countT*  pcUsage           = (countT*) ( (byteT*)&pcc[ 7 ] + cbLog + cbLogImpotence ) ;

        { FORsTRINGSiN1( pstt1Log          ) { stLog          << psttc1 ; } }
        { FORsTRINGSiN1( pstt1LogImpotence ) { stLogImpotence << psttc1 ; } }

        {
            // FORMAT OF pcUsage: FIRST countT IS cResources.  FOR EACH RESOURCE: qty , rid. rid is null terminated.

            ZE( countT , off ) ;
            countT cResources = pcUsage[ off ++ ] ;
            while( cResources -- )
            {
                countT qty = pcUsage[ off ++ ] ;
                pcPart = &pcUsage[ off ] ;
                swUsage = qty ;
                off += 1 + ether.strBodyLengthF( tinP , pcPart ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029004.carc.carc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029005.carc.soulf BEGIN
#define DDNAME       "3func.36029005.carc.soulf"
#define DDNUMB      (countT)0x36029005
#define IDFILE      (countT)0x1086


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$soulF.0.html\"\>instances\</A\>
\<A HREF=\"5.1350005.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
reconstructs a carC object from transmittable state information
 information is transmittable if it does not contain host-dependent information such as memory addresses
arguments
 tinP
 pbP
  must not be 0
  this length-prefixed string of bytes contains the state information needed to reconstruct a carC object
 bResetP
*/
/**/

/*1*/countT carC::soulF( tinS& tinP , byteT*& pbP , const boolT bResetP )/*1*/
{
    if( ether ) return 0 ;
    __NZ( pbP ) ;
    if( ether ) return 0 ;

    _IO_

    ZE( strokeS* , pstt1Log ) ;
    stLog.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( stLog )
    {
        ZE( countT , csNeeded ) ;
        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            strokeS* psttl = (strokeS*)stLog.downF( tinP , handle ) ;
            csNeeded += CSpREFIX + ( psttl ? psttl->idAdam : 0 ) ;
        }
        while( !ether && ~handle ) ;

        do
        {
            strokeS* psttl = (strokeS*)stLog.downF( tinP , handle ) ;
            if( psttl ) { ether.strFuseSeparateF( tinP , pstt1Log , psttl , 0 , 0 , 0 , 0 , /*U::SOUL?*/ csNeeded ) ; ___( pstt1Log ) ; }
        }
        while( !ether && ~handle ) ;
    }
    stLog.ungrabF( tinP ) ;
    if( !pstt1Log ) { ether.strFuseF( tinP , pstt1Log , T("") ) ; ___( pstt1Log ) ; }

    ZE( strokeS* , pstt1LogImpotence ) ;
    stLogImpotence.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( stLogImpotence )
    {
        ZE( countT , csNeeded ) ;
        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            strokeS* psttl = (strokeS*)stLogImpotence.downF( tinP , handle ) ;
            csNeeded += CSpREFIX + ( psttl ? psttl->idAdam : 0 ) ;
        }
        while( !ether && ~handle ) ;

        do
        {
            strokeS* psttl = (strokeS*)stLogImpotence.downF( tinP , handle ) ;
            if( psttl ) { ether.strFuseSeparateF( tinP , pstt1LogImpotence , psttl , 0 , 0 , 0 , 0 , /*U::SOUL?*/ csNeeded ) ; ___( pstt1LogImpotence ) ; }
        }
        while( !ether && ~handle ) ;
    }
    stLogImpotence.ungrabF( tinP ) ;
    if( !pstt1LogImpotence ) { ether.strFuseF( tinP , pstt1LogImpotence , T("") ) ; ___( pstt1LogImpotence ) ; }

    countT ccUsage = ccF( tinP , ether , swUsage ) ;
    ZE( countT* , pcUsage ) ;
    ether.newF( tinP , LF , pcUsage , ccUsage ) ; ___( pcUsage ) ;
    {
        // FORMAT OF pcUsage: FIRST countT IS cResources.  FOR EACH RESOURCE: qty , rid.  rid is null terminated.

        const countT cFlavors = swUsage.cFlavorsF( tinP ) ;
        ZE( countT , off ) ;
        pcUsage[ off ++ ] = cFlavors ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pcPart = (countT*)swUsage.leverF( tinP , idf ) ;
            countT ccPart = 1 + ether.strBodyLengthF( tinP , pcPart ) ;
            pcUsage[ off ++ ] = swUsage ;
            ether.memCopyF( tinP , (byteT*)&pcUsage[ off ] , (byteT*)pcPart , sizeof( countT ) * ccPart ) ;
            off += ccPart ;
        }
    }

    __Z( pstt1Log ) ;
    __Z( pstt1LogImpotence ) ;
    __Z( pcUsage ) ;

    ZE( countT , cbs ) ;
    if( !ether )
    {
        countT cbLog          = sizeof( strokeS ) * ( CSpREFIX + pstt1Log->idAdam          ) ;
        countT cbLogImpotence = sizeof( strokeS ) * ( CSpREFIX + pstt1LogImpotence->idAdam ) ;
        countT cbUsage        = sizeof( countT  ) * ccUsage ;
        cbs = 7 * sizeof( countT ) + cbLog + cbLogImpotence + cbUsage ;

        ether.newF( tinP , LF , pbP , cbs ) ; ___( pbP ) ;
        countT* pcc = (countT*)pbP ;
        if( pcc )
        {
            baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

            ZE( countT , off ) ;
            /*  0 */ pcc[ off ++ ] = cbs - sizeof( countT ) ;
            /*  1 */ pcc[ off ++ ] = idcHirer ;
            /*  2 */ pcc[ off ++ ] = cDatum ;
            /*  3 */ pcc[ off ++ ] = *(countT*)&mPayin ;
            /*  4 */ pcc[ off ++ ] = cbLog ;
            /*  5 */ pcc[ off ++ ] = cbLogImpotence ;
            /*  6 */ pcc[ off ++ ] = cbUsage ;

            /*  7 */                ether.memCopyF( tinP , (byteT*)&pcc[ off ]                          , (byteT*)pstt1Log          , cbLog          ) ;
            /*  + cbLog */          ether.memCopyF( tinP , (byteT*)&pcc[ off ] + cbLog                  , (byteT*)pstt1LogImpotence , cbLogImpotence ) ;
            /*  + cbLogImpotence */ ether.memCopyF( tinP , (byteT*)&pcc[ off ] + cbLog + cbLogImpotence , (byteT*)pcUsage           , cbUsage        ) ;

            if( bResetP ) resetF( tinP ) ;

            baton.ungrabF( tinP ) ;
        }
    }

    ether.delF( tinP , pstt1Log ) ;
    ether.delF( tinP , pstt1LogImpotence ) ;
    ether.delF( tinP , pcUsage ) ;

    return cbs ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029005.carc.soulf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029006.carc.operator_incrementby BEGIN
#define DDNAME       "3func.36029006.carc.operator_incrementby"
#define DDNUMB      (countT)0x36029006
#define IDFILE      (countT)0x1087


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1350006.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/carC& carC::operator +=( carC& carP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return *this ;
        __( idcHirer - carP.idcHirer ) ;
        if( ether ) return *this ;
    }

    _IO_

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    carP.baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    cDatum += carP.cDatum ;
    mPayin += carP.mPayin ;

    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
    do
    {
        strokeS* psttlOne = (strokeS*)carP.stLog.downF( tinP , handle ) ;
        if( psttlOne )
        {
            ZE( strokeS* , psttlTwo ) ;
            ether.strMakeF( tinP , LF , psttlTwo , psttlOne ) ; ___( psttlTwo ) ;
            stLog << psttlTwo ;
        }
    }
    while( ~handle ) ;

    do
    {
        strokeS* psttlOne = (strokeS*)carP.stLogImpotence.downF( tinP , handle ) ;
        if( psttlOne )
        {
            ZE( strokeS* , psttlTwo ) ;
            ether.strMakeF( tinP , LF , psttlTwo , psttlOne ) ; ___( psttlTwo ) ;
            stLogImpotence << psttlTwo ;
        }
    }
    while( ~handle ) ;

    {
        const countT cFlavors = carP.swUsage.cFlavorsF( tinP ) ;

        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pcPart = carP.pcPart = (countT*)carP.swUsage.leverF( tinP , idf ) ;
            (countT&)swUsage += (countT&)carP.swUsage ;
        }
    }

    carP.baton.ungrabF( tinP ) ;
    baton.ungrabF( tinP ) ;
    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029006.carc.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029007.carc.strf BEGIN
#define DDNAME       "3func.36029007.carc.strf"
#define DDNUMB      (countT)0x36029007
#define IDFILE      (countT)0x1088


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strF.0.html\"\>instances\</A\>
\<A HREF=\"5.1350007.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 psttP
  can be 0
  if not 0, then must have enough extra strokes to receive an appended string
  if 0 then will always allocate enough strokes for psttP
  should be 0 unless caller knows for sure how many strokes will be used
*/
/**/

/*1*/voidT carC::strF( tinS& tinP , strokeS*& psttP )/*1*/
{
    if( ether ) return ;

    _IO_

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( strokeS* , psttr11 ) ;
    ZE( strokeS* , psttr12 ) ;
    {
        ether.strFuseF( tinP , psttr11 , T("IdeaFarm " "(tm) City / Citizen ")+TF1(idcHirer)+T(" Activity Report / http://www.ideafarm.com\r\n") ) ; ___( psttr11 ) ;
        ether.strFuseF( tinP , psttr12 , T("") ) ; ___( psttr12 ) ;
    }

    ZE( strokeS* , psttr21 ) ;
    ZE( strokeS* , psttr22 ) ;
    {
        if( !stLogImpotence ) { ether.strMakeF( tinP , LF , psttr21 , T("") ) ; ___( psttr21 ) ; ether.strMakeF( tinP , LF , psttr22 , T("") ) ; ___( psttr22 ) ; }
        else
        {
            ether.strMakeF( tinP , LF , psttr21 , T("\r\n\r\nImpotence events"":\r\n\r\n") ) ; ___( psttr21 ) ;

            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;

            {
                ZE( countT , csn ) ;
                do
                {
                    strokeS* psttl = (strokeS*)stLogImpotence.downF( tinP , handle ) ;
                    if( psttl ) { csn += psttl->idAdam + 2 ; }
                }
                while( ~handle ) ;
                ether.strMakeF( tinP , LF , psttr22 , T("") , csn ) ; ___( psttr22 ) ;
            }

            do
            {
                strokeS* psttl = (strokeS*)stLogImpotence.downF( tinP , handle ) ;
                if( psttl ) { ether.strFuseF( tinP , psttr22 , T(psttl)+T("\r\n") ) ; ___( psttr22 ) ; }
            }
            while( ~handle ) ;
        }
    }

    ZE( strokeS* , psttr31 ) ;
    ZE( strokeS* , psttr32 ) ;
    {
        if( !stLog ) { ether.strMakeF( tinP , LF , psttr31 , T("") ) ; ___( psttr31 ) ; ether.strMakeF( tinP , LF , psttr32 , T("") ) ; ___( psttr32 ) ; }
        else
        {
            ether.strMakeF( tinP , LF , psttr31 , T("\r\n\r\nEvents which did not result in impotence:\r\n\r\n") ) ; ___( psttr31 ) ;
            handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;

            {
                ZE( countT , csn ) ;
                do
                {
                    strokeS* psttl = (strokeS*)stLog.downF( tinP , handle ) ;
                    if( psttl ) { csn += psttl->idAdam + 2 ; }
                }
                while( ~handle ) ;
                ether.strMakeF( tinP , LF , psttr32 , T("") , csn ) ; ___( psttr32 ) ;
            }

            do
            {
                strokeS* psttl = (strokeS*)stLog.downF( tinP , handle ) ;
                if( psttl ) { ether.strFuseF( tinP , psttr32 , T(psttl)+T("\r\n") ) ; ___( psttr32 ) ; }
            }
            while( ~handle ) ;
        }
    }

    ZE( countT , idCitizen ) ;
    switchC swShare( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_null , idCitizen ) ;
    ZE( measureT , mPriceTotal ) ;
    ZE( strokeS* , psttr41 ) ;
    ZE( strokeS* , psttr42 ) ;
    {
        const countT cFlavors = swUsage.cFlavorsF( tinP ) ;
        if( !cFlavors ) { ether.strMakeF( tinP , LF , psttr41 , T("") ) ; ___( psttr41 ) ; ether.strMakeF( tinP , LF , psttr42 , T("") ) ; ___( psttr42 ) ; }
        else
        {
            ether.strMakeF( tinP , LF , psttr41 , T("\r\n\r\nParts Usage:\r\n\r\n")+TPS("cost",0xd,S1C('-'))+T("  ")+TPS("qty",8,S1C('-'))+T("  ")+TPS("type",8,S1C('-'))+T("  ")+TPS("nicNameV4",8,S1C('-'))+T("  ")+TPS("idComp",8,S1C('-'))+T("  ")+TPS("idOwner",7,S1C('-'))+T("  ")+TPS("idPart",0x14,S1C('-'))+T("\r\n") ) ; ___( psttr41 ) ;

            {
                ZE( countT , csn ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    countT ccPart = ether.strBodyLengthF( tinP , (countT*)swUsage.leverF( tinP , idf ) ) ;
                    csn += 0x20 * ( ccPart + 2 ) ; // (A FEW MORE PER LINE THAN WE REALLY NEED) //U: 0x10
                }
                ether.strMakeF( tinP , LF , psttr42 , T("") , csn ) ; ___( psttr42 ) ;
            }

            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                pcPart = (countT*)swUsage.leverF( tinP , idf ) ;
                if( !pcPart ) __1
                else
                {
                    countT qty = swUsage ;
                    countT ccPartBig = ether.strBodyLengthF( tinP , pcPart ) ;
                    ZE( measureT , mPrice ) ;
                    if( ccPartBig > 4 )
                    {
                        countT idCmd = idCMDpRICER_PRICE ;
                        countT ccPart   = ether.strBodyLengthF( tinP , pcPart + 4 ) ; // pcPart IS PREFIXED WITH 4 countT OBJECTS THAT ARE NOT PART OF THE pcPart, NARROWLY DEFINED
                        {
                            socketC sock( tinP , ether , TAG( TAGiDnULL ) ) ;
                            sock.connectF( tinP , ifcPORToLD1pRICEaUTHORITY , 0x01010103 ) ;
                            sock.writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
                            sock.writeF( tinP , (byteT*)&ccPart , sizeof ccPart ) ;
                            sock.writeF( tinP , (byteT*)( pcPart + 4 ) , ccPart * sizeof( countT ) ) ;
                            sock.writeF( tinP , (byteT*)&qty , sizeof qty ) ;
                            sock.readF( tinP , (byteT*)&mPrice , sizeof mPrice ) ;
                        }

                        stackC stShare( tinP , ether , TAG( TAGiDnULL ) ) ;
                        idCmd = idCMDpRICER_SHARE ;
                        {
                            socketC sock( tinP , ether , TAG( TAGiDnULL ) ) ;
                            sock.connectF( tinP , ifcPORToLD1pRICEaUTHORITY , 0x01010103 ) ;
                            sock.writeF( tinP , (byteT*)&idCmd , sizeof idCmd ) ;
                            sock.writeF( tinP , (byteT*)&ccPart , sizeof ccPart ) ;
                            sock.writeF( tinP , (byteT*)( pcPart + 4 ) , ccPart * sizeof( countT ) ) ;
                            ZE( countT , cShare ) ;
                            sock.readF( tinP , (byteT*)&cShare , sizeof cShare ) ;
                            while( cShare -- )
                            {
                                ZE( countT , idCitizen ) ;
                                sock.readF( tinP , (byteT*)&idCitizen , sizeof idCitizen ) ;
                                stShare << idCitizen ;
                            }
                        }

                        if( stShare )
                        {
                            measureT mShare = mPrice / (countT)stShare ;
                            while( stShare )
                            {
                                ZE( countT , idc ) ;
                                stShare >> idc ;
                                idCitizen = idc ;
                                countT cShareTotal = swShare ;
                                measureT mShareTotal = *(measureT*)&cShareTotal ;
                                mShareTotal += mShare ;
                                swShare = *(countT*)&mShareTotal ;
                            }
                        }
                    }
                    mPriceTotal += mPrice ;

                    ether.strFuseF( tinP , psttr42 , ( mPrice ? TF4(mPrice,flFORMAT_EXPONENT,2,6) : TP("",0xd) )+T("  ")+TF3(qty,0,8)+T("  ") ) ; ___( psttr42 ) ;

                    ZE( countT , off ) ;
                    while( pcPart[ off ] )
                    {
                        ether.strFuseF( tinP , psttr42 , off < 3 ? TF3(pcPart[off++],flFORMAT_FILLzE|flFORMAT_UNSIGNED,8) : ( off == 3 ? TF3(pcPart[off++],flFORMAT_FILLzE|flFORMAT_UNSIGNED,7) : TF1(pcPart[off++]) ) ) ; ___( psttr42 ) ;
                        if( pcPart[ off ] ) { ether.strFuseF( tinP , psttr42 , off < 5 ? T("  ") : T(".") ) ; ___( psttr42 ) ; }
                        else               { ether.strFuseF( tinP , psttr42 , T("\r\n") ) ; ___( psttr42 ) ; }
                    }
                }
            }
        }
    }

    ZE( strokeS* , psttr51 ) ;
    ZE( strokeS* , psttr52 ) ;
    {
        ether.strFuseF( tinP , psttr51 ,

            T("\r\n\r\nNotes"":\r\n\r\n")

        ) ; ___( psttr51 ) ;

        ether.strFuseF( tinP , psttr52 ,

            T("cDatum = ")+TF1(cDatum)+T("\r\n"
            "total cost = ")+TF4(mPriceTotal,flFORMAT_EXPONENT,2,6)+T("\r\n"
            "payIn received = ")+TF4(mPayin,flFORMAT_EXPONENT,2,6)+( mPayin ? T("  (thank you)\r\n") : T("") )

        ) ; ___( psttr52 ) ;
    }

    if( psttr11 && psttr12 && psttr21 && psttr22 && psttr31 && psttr32 && psttr41 && psttr42 && psttr51 && psttr52 ) { ether.strMakeF( tinP , LF , psttP , T("") , psttr11->idAdam + psttr12->idAdam + psttr21->idAdam + psttr22->idAdam + psttr31->idAdam + psttr32->idAdam + psttr41->idAdam + psttr42->idAdam + psttr51->idAdam + psttr52->idAdam ) ; ___( psttP ) ; }
    ether.strFuseF( tinP , psttP , psttr11 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr12 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr21 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr22 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr31 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr32 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr41 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr42 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr51 ) ; ___( psttP ) ;
    ether.strFuseF( tinP , psttP , psttr52 ) ; ___( psttP ) ;

    ether.delF( tinP , psttr11 ) ;
    ether.delF( tinP , psttr12 ) ;
    ether.delF( tinP , psttr21 ) ;
    ether.delF( tinP , psttr22 ) ;
    ether.delF( tinP , psttr31 ) ;
    ether.delF( tinP , psttr32 ) ;
    ether.delF( tinP , psttr41 ) ;
    ether.delF( tinP , psttr42 ) ;
    ether.delF( tinP , psttr51 ) ;
    ether.delF( tinP , psttr52 ) ;

    {
        count2S c2b ;
        c2b.c1 = idcHirer ;
        c2b.c2 = *(countT*)&mPriceTotal ; // ASSUME: sizeof( measureT ) == sizeof( countT )
        ZE( strokeS* , psttnu ) ;
        ether.boxPutUniqueF( tinP , psttnu , T("///ideafarm/ephemeral/domains/com/ideafarm/1350007/transactions/")+TF1(idcHirer)+T("/debit") , (byteT*)&c2b , sizeof c2b ) ; ___( psttnu ) ;
        ether.delF( tinP , psttnu ) ;
    }

    if( mPayin )
    {
        count2S c2b ;
        c2b.c1 = idcHirer ;
        c2b.c2 = *(countT*)&mPayin ; // ASSUME: sizeof( measureT ) == sizeof( countT )
        ZE( strokeS* , psttnu ) ;
        ether.boxPutUniqueF( tinP , psttnu , T("///ideafarm/ephemeral/domains/com/ideafarm/1350007/transactions/")+TF1(idcHirer)+T("/payin") , (byteT*)&c2b , sizeof c2b ) ; ___( psttnu ) ;
        ether.delF( tinP , psttnu ) ;
    }

    if( swShare )
    {
        countT cFlavors = swShare.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            idCitizen = swShare.leverF( tinP , idf ) ;
            count2S c2b ;
            c2b.c1 = idCitizen ;
            c2b.c2 = swShare ; // ASSUME: sizeof( measureT ) == sizeof( countT )
            ZE( strokeS* , psttnu ) ;
            ether.boxPutUniqueF( tinP , psttnu , T("///ideafarm/ephemeral/domains/com/ideafarm/1350007/transactions/")+TF1(idcHirer)+T("/share") , (byteT*)&c2b , sizeof c2b ) ; ___( psttnu ) ;
            ether.delF( tinP , psttnu ) ;
        }
    }

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029007.carc.strf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029008.carc.resetf BEGIN
#define DDNAME       "3func.36029008.carc.resetf"
#define DDNUMB      (countT)0x36029008
#define IDFILE      (countT)0x1089


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$resetF.0.html\"\>instances\</A\>
\<A HREF=\"5.1350008.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
*/
/**/

/*1*/voidT carC::resetF( tinS& tinP )/*1*/
{
    if( ether ) return ;

    _IO_
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    cDatum = 0 ;
    mPayin = 0 ;

    while( stLog )
    {
        ZE( strokeS* , psttl ) ;
        stLog >> psttl ;
        ether.delF( tinP , psttl ) ;
    }

    while( stLogImpotence )
    {
        ZE( strokeS* , psttl ) ;
        stLogImpotence >> psttl ;
        ether.delF( tinP , psttl ) ;
    }

    {
        const countT cFlavors = swUsage.cFlavorsF( tinP ) ;

        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            pcPart = (countT*)swUsage.leverF( tinP , idf ) ;
            swUsage = (countT)0 ;
        }
    }

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36029* : 3func.36029008.carc.resetf END
