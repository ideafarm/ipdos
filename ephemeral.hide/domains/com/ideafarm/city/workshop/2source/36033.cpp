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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033002.masterc.dt_masterc BEGIN
#define DDNAME       "3func.36033002.masterc.dt_masterc"
#define DDNUMB      (countT)0x36033002
#define IDFILE      (countT)0x10da


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1490002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/masterOldC::~masterOldC( voidT )/*1*/
{
    TINSL
    scoopC scoop( tinP , LF , ether ) ;
    upDn.upF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
    IFbEcAREFUL
    {
        if( POOP )
        {
            tinP.pAdamGlobal1->_masterOldC_.pMePrime = 0 ;
            if( b_bHost_grabbed ) bHost.ungrabF( tinP ) ; // ASSUME GRABBED BY CT
            return ;
        }
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime == this )
    {
        //ZE( byteT* , pbSoul ) ;
        //soulF( tinP , pbSoul ) ; ___( pbSoul ) ;
        //if( pbSoul )
        //{
        //    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        //    ether.boxPutF( tinP , psttFileSoul , pbSoul , 3 * sizeof( countT ) + ((countT*)pbSoul)[ 2 ] ) ;
        //    THREADmODE1rESTORE
        //}
        //ether.delF( tinP , pbSoul ) ;
        ether.delF( tinP , psttFileSoul ) ;

        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            count3S*& pc3n = (count3S*&)(countT&)swc3 ;
            if( !pc3n ) __1
            else
            {
                stackC*& pStUses = *(stackC**)&pc3n->c3 ;
                if( !pStUses ) __1
                else           { DEL( pStUses ) ; }
            }

            ether.delF( tinP , pc3n ) ;
        }
        b_cLever.ungrabF( tinP ) ;

        tinP.pAdamGlobal1->_masterOldC_.pMePrime = 0 ;
    }

    if( b_bHost_grabbed ) bHost.ungrabF( tinP ) ; // ASSUME GRABBED BY CT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033002.masterc.dt_masterc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033003.masterc.masterc BEGIN
#define DDNAME       "3func.36033003.masterc.masterc"
#define DDNUMB      (countT)0x36033003
#define IDFILE      (countT)0x10db


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1490003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/masterOldC::masterOldC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT cNameInspectP , const boolT bIgnoreSoulFileP )/*1*/ :
upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCtP ) , IDFILE , etherP ) ,
ether( etherP ) ,
bHost( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , T("masterOldC") , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) , // A HOST BATON WITH THE SAME NAME IS ALSO USED BY masterOldC
b_bHost_grabbed( 0 ) ,
psttFileSoul( 0 ) ,
idCopyHW( 0 ) ,
b_cLever( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ,
cLever( 0 ) ,
swc3( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_FIFO , cLever ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP )
{
    scoopC scoop( tinP , LF , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    bHost.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCtP ) ) ; // ASSUME UNGRABBED BY DT
    b_bHost_grabbed = 1 ;

    if( !tinP.pAdamGlobal1->_masterOldC_.pMePrime )
    {
        tinP.pAdamGlobal1->_masterOldC_.pMePrime = this ;

        ether.strMakeF( tinP , LF , psttFileSoul , T(FILEnAMEsOUL_masterOldC) ) ; ___( psttFileSoul ) ;

        ZE( byteT* , pbSoul ) ;
        //THIS WAS BROKEN WHEN MIGRATING FILE NAMES TO NEW FORMAT, AND I DECIDED TO ELIMINATE TO CONFORM WITH "NO REDUNDANT STATE"
        //{
        //    SCOOPS
        //    if( !bIgnoreSoulFileP )
        //    {
        //        ZE( countT , cbSoul ) ;
        //        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        //        tinP.pEtScratch->boxGetF( tinP , pbSoul , cbSoul , psttFileSoul , 1 ) ;
        //        THREADmODE1rESTORE
        //    }
        //    if( POOP ) POOPR
        //}

        if( pbSoul ) ctF( tinP , pbSoul , cNameInspectP ) ;
        else         ctInspectF( tinP ) ;
        ether.delF( tinP , pbSoul ) ;
    }
    upDn.dnF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033003.masterc.masterc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033004.masterc.ctf BEGIN
#define DDNAME       "3func.36033004.masterc.ctf"
#define DDNUMB      (countT)0x36033004
#define IDFILE      (countT)0x10dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::ctF( tinS& tinP , const byteT* const pbSoulP , const countT cNameInspectP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) ;
        __Z( pbSoulP ) ;
        if( POOP ) return ;
    }

    const byteT* pbc = pbSoulP ;
    if( getNegAM( *(countT*)pbc ) == FINGERnEG_SOULc )
    {
                                              pbc += sizeof( countT ) ;
        if( *(countT*)pbc != 1 ) { BLAMMO ; } pbc += sizeof( countT ) ;
    }

    const byteT* pbe = pbc + sizeof( countT ) + *(countT*)pbc ; pbc += sizeof( countT ) ;

    b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;

    idCopyHW = *(countT*)pbc ; pbc += sizeof( countT ) ;
    countT cFlavors = *(countT*)pbc ; pbc += sizeof( countT ) ;

    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        countT cName   = *(countT*)pbc ; pbc += sizeof( countT ) ;
        flagsT flags   = *(countT*)pbc ; pbc += sizeof( countT ) ;
        countT idCopy  = *(countT*)pbc ; pbc += sizeof( countT ) ;
        countT cPlates = *(countT*)pbc ; pbc += sizeof( countT ) ;

        stackC stUses( tinP , ether , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_FIFO ) ;
        for( countT idp = 1 ; idp <= cPlates ; idp ++ )
        {
            stUses << *(countT*)pbc ; pbc += sizeof( countT ) ;
        }

        newNameF( tinP , cName , stUses , flags , idCopy ) ;
    }
    __( pbc - pbe ) ;

    if( cNameInspectP )
    {
        delNameIfF( tinP , cNameInspectP ) ;
        ctInspectF( tinP , cNameInspectP ) ;
    }

    b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033004.masterc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033005.masterc.ctinspectf BEGIN
#define DDNAME       "3func.36033005.masterc.ctinspectf"
#define DDNUMB      (countT)0x36033005
#define IDFILE      (countT)0x10dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctInspectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490005.1.0.html\"\>definition\</A\>
if !cNameInspectP then masterOldC becomes a model of the actual current state of the master files
i obey tinP.pcQuit
*/
/**/

/*1*/voidT masterOldC::ctInspectF( tinS& tinP , const countT cNameInspectP )/*1*/
{
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == 5 )
    {
        countT foo = 2 ;
    }

    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) ;
        if( POOP ) return ;
    }

    thirdC& third = ether ;
    strokeS sttSlash( '/' ) ;
    TN( tTagIdCopy , "!idCopy" ) ;

    b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;

    soulC soul1m( tinP , TAG( TAGiDnULL ) ) ;
    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    countT cToDo = ether.boxMenuF( tinP , soul1m , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/master/ideafarm.")+( cNameInspectP ? TF3(cNameInspectP,flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,sizeof(countT)*2)+T(".ipdos-wm") : T("*.ipdos-wm") ) ) ;
    THREADmODE1rESTORE

    FORsTRINGSiNsPANNEDcOMBINEDhEAD1( soul1m )
    {
        if( tinP.pcQuit && *tinP.pcQuit ) break ;

        cToDo -- ;

        ZE( byteT* , pbm ) ;
        ZE( countT , cbm ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        ether.boxGetShadowF( tinP , pbm , cbm , psttc1 ) ; ___( pbm ) ;
        THREADmODE1rESTORE

        ZE( imageExeDllC* , pInfo ) ;
        third.imageExeDllF( tinP , pInfo , pbm ) ; ___( pInfo ) ;
        if( !pInfo ) __1
        else
        {
            ZE( countT , cName ) ;
            {
                ZE( strokeS* , psttw ) ;
                strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;                                       //  0              1
                ether.strWordF( tinP , psttw , psttc1 , sttq , sttSlash , - 1 ) ; ___( psttw ) ;    //  123456789abcdef0123456789a
                if( !psttw || psttw->idAdam - 0x12 - 2 * sizeof( countT ) ) __1                     // "ideafarm.12345678.ipdos-wm"
                else
                {
                    //sttq = ze ;
                    countT idf = 0xa ;
                    countT idl = idf + sizeof( countT ) * 2 - 1 ;
                    ZE( strokeS* , psttw2 ) ;
                    ether.strSubstringF( tinP , psttw2 , idf , idl , psttw ) ; ___( psttw2 ) ;
                    cName = ether.strDigitsToSCountF( tinP , psttw2 , 0 , 1 ) ;
                    ether.delF( tinP , psttw2 ) ;
                }
                ether.delF( tinP , psttw ) ;
            }

            if( !cName ) __1
            else
            {
                ZE( countT , idCopy ) ;
                {
                    ZE( strokeS* , pstt1w ) ;
                    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                    ether.strWordsOldF( tinP , pstt1w , T(pInfo->postDescription) , sttq ) ; ___( pstt1w ) ;
                    ZE( boolT , bNext ) ;
                    ZE( boolT , bFound ) ;
                    FORsTRINGSiN2( pstt1w )
                    {
                        if( bNext )
                        {
                            idCopy = ether.strDigitsToSCountF( tinP , psttc2 ) ;
                            bFound = 1 ;
                            break ;
                        }
                        else if( !ether.strCompareF( tinP , psttc2 , tTagIdCopy ) ) bNext = 1 ;
                    }
                    ether.delF( tinP , pstt1w ) ;
                    __Z( bFound ) ;
                }

                stackC stUses( tinP , ether , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_FIFO ) ;
                if( pInfo->pSt_postDllUsed && *pInfo->pSt_postDllUsed )
                {
                    handleC handle( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        byteT* postUses = (byteT*)pInfo->pSt_postDllUsed->downF( tinP , handle ) ;
                        TN( tUses , postUses ) ;
                        strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
                        countT idf = 1 ;
                        if( tUses.csF( tinP ) == 0x1a && 0x12 == ether.strIdF( tinP , 0 , flSTRmATCH_null , idf , sttq , T(".ipdos-wm") , tUses ) )
                        {
                            idf = 0xa ;
                            countT idl = idf + sizeof( countT ) * 2 - 1 ;
                            //sttq = ze ;
                            ZE( strokeS* , psttw3 ) ;
                            ether.strSubstringF( tinP , psttw3 , idf , idl , tUses ) ; ___( psttw3 ) ;
                            if( ether.strIsDigitsF( tinP , psttw3 ) )
                            {
                                countT cUses = ether.strDigitsToSCountF( tinP , psttw3 , 0 , 1 ) ;
                                if( cUses ) stUses << cUses ;
                            }
                            ether.delF( tinP , psttw3 ) ;
                        }
                    }
                    while( !ether && ~handle ) ;
                }

                newNameF( tinP , cName , stUses , flMASTERc_null , idCopy ) ;
            }
        }
        DEL( pInfo ) ;
        ether.delF( tinP , pbm ) ;
    }
    FORsTRINGSiNsPANNEDcOMBINEDtAIL1

    b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033005.masterc.ctinspectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033006.masterc.soulf BEGIN
#define DDNAME       "3func.36033006.masterc.soulf"
#define DDNUMB      (countT)0x36033006
#define IDFILE      (countT)0x10de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$soulF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::soulF( tinS& tinP , byteT*& pbSoulP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __NZ( pbSoulP ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->soulF( tinP , pbSoulP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        const countT cFlavors = swc3.cFlavorsF( tinP ) ;

        countT cbn = sizeof( countT ) * ( 5 + cFlavors * 4 ) ; // FINGERPRINT , IDFORMAT , LENGTHpREFIX , idCopyHW , cFlavors ; FOR EA FLAVOR: cLever , flags , idCopy , cPlates
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            count3S*& pc3n = (count3S*&)(countT&)swc3 ;
            if( !pc3n ) __1
            else
            {
                if( !pc3n->c3 ) __1
                else
                {
                    stackC& stUses = *(stackC*)pc3n->c3 ;
                    cbn += sizeof( countT ) * stUses ;      // FOR EACH PLATE: value
                }
            }
        }

        ether.newF( tinP , LF , pbSoulP , cbn ) ; ___( pbSoulP ) ;
        if( pbSoulP )
        {
            byteT* pbc = pbSoulP ;
            byteT* pbe = pbSoulP + cbn ;
            putNegAM( *(countT*)pbc , FINGERnEG_SOULc ) ; pbc += sizeof( countT ) ;
            *(countT*)pbc = 1                          ; pbc += sizeof( countT ) ;
            *(countT*)pbc = cbn - 3 * sizeof( countT ) ; pbc += sizeof( countT ) ;
            *(countT*)pbc = idCopyHW                   ; pbc += sizeof( countT ) ;
            *(countT*)pbc = cFlavors                   ; pbc += sizeof( countT ) ;

            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                *(countT*)pbc = cLever = swc3.leverF( tinP , idf ) ; pbc += sizeof( countT ) ;

                count3S*& pc3n = (count3S*&)(countT&)swc3 ;
                if( !pc3n ) __1
                else
                {
                    if( !pc3n->c3 ) __1
                    else
                    {
                        stackC& stUses = *(stackC*)pc3n->c3 ;

                        *(countT*)pbc = pc3n->c1 ; pbc += sizeof( countT ) ;
                        *(countT*)pbc = pc3n->c2 ; pbc += sizeof( countT ) ;
                        *(countT*)pbc = stUses   ; pbc += sizeof( countT ) ;

                        if( stUses )
                        {
                            handleC handle( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                            do
                            {
                                *(countT*)pbc = stUses.upF( tinP , handle ) ; pbc += sizeof( countT ) ;
                            }
                            while( !ether && ~handle ) ;
                        }
                    }
                }
            }

            __( pbc - pbe ) ;
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033006.masterc.soulf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033007.masterc.delnameiff BEGIN
#define DDNAME       "3func.36033007.masterc.delnameiff"
#define DDNUMB      (countT)0x36033007
#define IDFILE      (countT)0x10df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$delNameIfF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::delNameIfF( tinS& tinP , const countT cNameP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( cNameP ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->delNameIfF( tinP , cNameP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else if( cLever == cNameP )
            {
                count3S*& pc3 = (count3S*&)(countT&)swc3 ;

                if( !pc3 ) __1
                else
                {
                    stackC*& pStUses = *(stackC**)&pc3->c3 ;
                    if( !pStUses ) __1
                    else           { DEL( pStUses ) ; }
                }

                ether.delF( tinP , pc3 ) ;

                swc3.freeF( tinP ) ;
                break ;
            }
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033007.masterc.delnameiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033008.masterc.newnamef BEGIN
#define DDNAME       "3func.36033008.masterc.newnamef"
#define DDNUMB      (countT)0x36033008
#define IDFILE      (countT)0x10e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490008.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::newNameF( tinS& tinP , const countT cNameP , stackC& stUsesP , const flagsT flagsP , const countT idCopyP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( cNameP ) ;
        FV( flMASTERc , flagsP ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->newNameF( tinP , cNameP , stUsesP , flagsP , idCopyP ) ;
    else
    {
        if( idCopyHW < idCopyP ) idCopyHW = idCopyP ;

        ZE( count3S* , pc3n ) ;
        ether.newF( tinP , LF , pc3n ) ; ___( pc3n ) ;
        if( pc3n )
        {
            pc3n->c1 = flagsP ;
            pc3n->c2 = idCopyP ;
            pc3n->c3 = (countT)new( 0 , tinP , LF ) stackC( tinP , ether , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_FIFO ) ; ___( pc3n->c3 ) ;

            if( pc3n->c3 )
            {
                stackC& stUses = *(stackC*)pc3n->c3 ;

                b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
                cLever = cNameP ;
                __NZ( swc3 ) ;
                swc3 = (countT)pc3n ;

                stUsesP.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
                if( stUsesP )
                {
                    handleC handle( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        countT cUses = stUsesP.downF( tinP , handle ) ;

                        ZE( countT , ids ) ;
                        stUses.sinkF( tinP , ids , cUses , flSTACKsINK_UNIQUE ) ;
                        __Z( ids ) ;
                    }
                    while( !ether && ~handle ) ;
                }
                stUsesP.ungrabF( tinP ) ;

                b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033008.masterc.newnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033009.masterc.newnamef BEGIN
#define DDNAME       "3func.36033009.masterc.newnamef"
#define DDNUMB      (countT)0x36033009
#define IDFILE      (countT)0x10e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490009.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::newNameF( tinS& tinP , const countT cNameP , const countT* const pczUsesP , const flagsT flagsP , const countT idCopyP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( cNameP ) ;
        FV( flMASTERc , flagsP ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->newNameF( tinP , cNameP , pczUsesP , flagsP , idCopyP ) ;
    else
    {
        stackC stUses( tinP , ether , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_FIFO ) ;

        if( pczUsesP )
        {
            const countT* pczc = pczUsesP ;
            while( *pczc )
            {
                stUses << *pczc ;
                pczc ++ ;
            }
        }

        newNameF( tinP , cNameP , stUses , flagsP , idCopyP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033009.masterc.newnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300a.masterc.obsoletef BEGIN
#define DDNAME       "3func.3603300a.masterc.obsoletef"
#define DDNUMB      (countT)0x3603300a
#define IDFILE      (countT)0x10e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$obsoleteF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000a.1.0.html\"\>definition\</A\>
marks the name as obsolete
marks all users of that name as obsolete
if cNameP is already marked as obsolete then nothing is done and impotence does not occur
this function restores the current lever value before returning
*/
/**/

/*1*/voidT masterOldC::obsoleteF( tinS& tinP , const countT cNameP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( cNameP ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->obsoleteF( tinP , cNameP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cLeverSave = cLever ;
        cLever = cNameP ;
        if( !swc3 ) __1
        else
        {
            count3S& c3 = *(count3S*)(countT)swc3 ;
            countT&  flags = c3.c1 ;

            if( !( F(flags) & flMASTERc_OBSOLETE ) )
            {
                flags |= flMASTERc_OBSOLETE ;

                countT cFlavors = swc3.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    cLever = swc3.leverF( tinP , idf ) ;

                    ZE( boolT , bFound ) ;
                    if( !swc3 ) __1
                    else
                    {
                        count3S& c3 = *(count3S*)(countT)swc3 ;
                        countT& flags = c3.c1 ;

                        if( !c3.c3 ) __1
                        else
                        {
                            stackC& stUses = *(stackC*)c3.c3 ;

                            if( stUses )
                            {
                                handleC handle( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                                do
                                {
                                    countT cUsed = stUses.downF( tinP , handle ) ;
                                    if( cNameP == cUsed )
                                    {
                                        bFound = 1 ;
                                        break ;
                                    }
                                }
                                while( !ether && ~handle ) ;
                            }

                            if( bFound ) obsoleteF( tinP , cLever ) ;
                        }
                    }
                }
            }
        }

        cLever = cLeverSave ;
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300a.masterc.obsoletef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300b.masterc.renumberobsoletenamesf BEGIN
#define DDNAME       "3func.3603300b.masterc.renumberobsoletenamesf"
#define DDNUMB      (countT)0x3603300b
#define IDFILE      (countT)0x10e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$renumberObsoleteNamesF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::renumberObsoleteNamesF( tinS& tinP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->renumberObsoleteNamesF( tinP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;
                if( F(c3.c1) & flMASTERc_OBSOLETE )
                {
                    countT idc = ++ idCopyHW ;
                    if( idc > 0xfffffff ) idc = idCopyHW = 1 ; // ASSUME: countT IS 32 BITS. ELIMINATE THIS ROLLOVER IF NOT LIMITED TO 7 DIGITS

                    c3.c2 = idc ;
                }
            }
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300b.masterc.renumberobsoletenamesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300c.masterc.resetflagobsoletef BEGIN
#define DDNAME       "3func.3603300c.masterc.resetflagobsoletef"
#define DDNUMB      (countT)0x3603300c
#define IDFILE      (countT)0x10e4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$resetFlagObsoleteF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::resetFlagObsoleteF( tinS& tinP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->resetFlagObsoleteF( tinP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;
                if( F(c3.c1) & flMASTERc_OBSOLETE ) c3.c1 &= ~( F(flMASTERc_OBSOLETE) ) ;
            }
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300c.masterc.resetflagobsoletef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300d.masterc.cnamef BEGIN
#define DDNAME       "3func.3603300d.masterc.cnamef"
#define DDNUMB      (countT)0x3603300d
#define IDFILE      (countT)0x10e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cNameF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT masterOldC::cNameF( tinS& tinP , const countT idCopyP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( idCopyP ) ;
        if( POOP ) return 0 ;
    }

    ZE( countT , cName ) ;

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) cName = tinP.pAdamGlobal1->_masterOldC_.pMePrime->cNameF( tinP , idCopyP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;
                if( idCopyP == c3.c2 )
                {
                    cName = cLever ;
                    break ;
                }
            }
        }
        b_cLever.ungrabF( tinP ) ;
    }

    return cName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300d.masterc.cnamef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300e.masterc.strokef BEGIN
#define DDNAME       "3func.3603300e.masterc.strokef"
#define DDNUMB      (countT)0x3603300e
#define IDFILE      (countT)0x10e6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strokeF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::strokeF( tinS& tinP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->strokeF( tinP ) ;
    else
    {
        ether.strokeF( tinP , T("masterOldC report (begin)\r\n") ) ;

        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;

            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;
                flagsT& flags = c3.c1 ;
                countT& idCopy = c3.c2 ;
                ether.strokeF( tinP , TF3(cLever,flFORMAT_UNSIGNED|flFORMAT_FILLzE,7)+T("    ")+TF3(flags,flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T("    ")+TF3(idCopy,flFORMAT_UNSIGNED,8) ) ;

                if( !c3.c3 ) __1
                else
                {
                    stackC& stUses = *(stackC*)c3.c3 ;

                    if( stUses )
                    {
                        handleC handle( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                        do ether.strokeF( tinP , T("    ")+TF3(stUses.downF(tinP,handle),flFORMAT_UNSIGNED|flFORMAT_FILLzE,7) ) ;
                        while( !ether && ~handle ) ;
                    }

                    ether.strokeF( tinP , T("\r\n") ) ;
                }
            }
        }
        b_cLever.ungrabF( tinP ) ;

        ether.strokeF( tinP , T("masterOldC report (end)\r\n") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300e.masterc.strokef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300f.masterc.idcopyf BEGIN
#define DDNAME       "3func.3603300f.masterc.idcopyf"
#define DDNUMB      (countT)0x3603300f
#define IDFILE      (countT)0x10e7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idCopyF.0.html\"\>instances\</A\>
\<A HREF=\"5.149000f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT masterOldC::idCopyF( tinS& tinP , const countT cNameP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __Z( cNameP ) ;
        if( POOP ) return 0 ;
    }

    ZE( countT , idCopy ) ;

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) idCopy = tinP.pAdamGlobal1->_masterOldC_.pMePrime->idCopyF( tinP , cNameP ) ;
    else
    {
        {
            b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
            countT cFlavors = swc3.cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                cLever = swc3.leverF( tinP , idf ) ;
                if( cLever != cNameP ) continue ;
                else
                {
                    if( !swc3 ) __1
                    else
                    {
                        count3S& c3 = *(count3S*)(countT)swc3 ;
                        idCopy = c3.c2 ;
                    }

                    break ;
                }
            }
            b_cLever.ungrabF( tinP ) ;
        }
    }

    return idCopy ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.3603300f.masterc.idcopyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033010.masterc.idcopyf BEGIN
#define DDNAME       "3func.36033010.masterc.idcopyf"
#define DDNUMB      (countT)0x36033010
#define IDFILE      (countT)0x10e8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idCopyF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490010.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::idCopyF( tinS& tinP , switchC& swIdCopyP , countT& cLever_swIdCopyP , batonC& b_cLever_swIdCopyP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        __( swIdCopyP.cFlavorsF( tinP ) ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->idCopyF( tinP , swIdCopyP , cLever_swIdCopyP , b_cLever_swIdCopyP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;

                b_cLever_swIdCopyP.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
                cLever_swIdCopyP = cLever ;
                swIdCopyP = c3.c2 ;
                b_cLever_swIdCopyP.ungrabF( tinP ) ;
            }
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033010.masterc.idcopyf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033011.masterc.listobsoletenamesf BEGIN
#define DDNAME       "3func.36033011.masterc.listobsoletenamesf"
#define DDNUMB      (countT)0x36033011
#define IDFILE      (countT)0x10e9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$listObsoleteNamesF.0.html\"\>instances\</A\>
\<A HREF=\"5.1490011.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT masterOldC::listObsoleteNamesF( tinS& tinP , stackC& stP )/*1*/
{
    scoopC scoop( tinP , LF , ether ) ;
    upDnC upDn( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , IDFILE , ether ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( !tinP.pAdamGlobal1->_masterOldC_.pMePrime ) ;
        if( POOP ) return ;
    }

    if( tinP.pAdamGlobal1->_masterOldC_.pMePrime != this ) tinP.pAdamGlobal1->_masterOldC_.pMePrime->listObsoleteNamesF( tinP , stP ) ;
    else
    {
        b_cLever.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) ) ;
        countT cFlavors = swc3.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swc3.leverF( tinP , idf ) ;
            if( !swc3 ) __1
            else
            {
                count3S& c3 = *(count3S*)(countT)swc3 ;
                if( F(c3.c1) & flMASTERc_OBSOLETE ) stP << cLever ;
            }
        }
        b_cLever.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36033* : 3func.36033011.masterc.listobsoletenamesf END
