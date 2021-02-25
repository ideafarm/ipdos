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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139002.napkinsc.dt_napkinsc BEGIN
#define DDNAME       "3func.36139002.napkinsc.dt_napkinsc"
#define DDNUMB      (countT)0x36139002
#define IDFILE      (countT)0x1554


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/napkinsC::~napkinsC( voidT )/*1*/
{
    TINSL

    _IO_

    ZE( boolT , bImpotent )
    if( POOP )
    {
        POOPR
        bImpotent = 1 ;
    }

    for( countT offDock = 0 ; offDock < cDocks ; offDock ++ )
    {
        if( pcDockOffNapkin[ offDock ] != - 1 )
        {
            napkinC* pnDoomed = (napkinC*)pbDockNapkin + offDock ;
            DELzOMBIE( pnDoomed ) ;

            fileC* pfDoomed = (fileC*)pbDockFile + offDock ;
            DELzOMBIE( pfDoomed ) ;
        }
    }

    if( F(flagsCt) & flNAPKINSc_PURGEoNdT )
    {
        osTextT postPath[ TUCK << 1 ] ;
        thirdC::postPathStateSpaceIF( tinP , postPath , sizeof postPath , idStateSpace , idMemorySpaceCt ) ;
        __Z( *postPath ) ;

        if( !POOP )
        {
            ifFileNameC iffn( tinP , *tinP.pEther , postPath ) ;

            TN( tLike , "" ) ; tLike = T(iffn)+T(postName)+T(".*") ;

            //etherC::etRockIF( tinP ).traceF( tinP , T("deleting: ")+tLike ) ;

            const countT* pcQuitSave = tinP.pcQuit ;
                                       tinP.pcQuit = 0 ;

            fileNameC fnLike( tinP , *tinP.pEther , tLike ) ;
            patternC pat( tinP , *tinP.pEther , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

            ZE( strokeS* , pstt1f ) ;
            countT cFound = tinP.pEther->diskFindFileOrDirF( tinP , pstt1f , fnLike.pathF() , &pat , 0 , 0 , 0 , 8 ) ; ___( pstt1f ) ;

            tinP.pcQuit = pcQuitSave ;

            FORsTRINGSiN1( pstt1f )
            {
                //etherC::etRockIF( tinP ).traceF( tinP , T("deleting: ")+T(psttc1) ) ;
                tinP.pEther->diskFileOrDirDeleteF( tinP , psttc1 ) ;
                //etherC::etRockIF( tinP ).traceF( tinP , T("deleted : ")+T(psttc1) ) ;
            }
            tinP.pEther->delF( tinP , pstt1f ) ;
        }
    }

    __NZ( bImpotent ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139002.napkinsc.dt_napkinsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139003.napkinsc.napkinsc BEGIN
#define DDNAME       "3func.36139003.napkinsc.napkinsc"
#define DDNUMB      (countT)0x36139003
#define IDFILE      (countT)0x1555


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/napkinsC::napkinsC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , countT expCbPerNapkinP , countT expCbPerItemP , const countT idStateSpaceP , const flagsT flagsP , const countT idMemorySpaceP ) :/*1*/
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
idMemorySpaceCt( idMemorySpaceP ) ,
cDocks( sizeof pbDockNapkin / SIZEOF_napkinC ) ,
offDockNextCt( 0 ) ,
idStateSpace( idStateSpaceP ? idStateSpaceP : ifcIDsTATEsPACE_SINGLEaDAM( tinP ) ) ,
expCbPerNapkin( expCbPerNapkinP ) ,
expCbPerItem( expCbPerItemP ) ,
flagsCt( flagsP )
{
    SCOOP

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    thirdC::c_memsetIF( tinP , (byteT*)pcDockOffNapkin , sizeof pcDockOffNapkin , - 1 ) ;

    thirdC::c_strncpyIF( tinP , postName , postP , sizeof postName ) ;

    if( F(flagsCt) & flNAPKINSc_PURGEoNcT )
    {
        osTextT postPath[ TUCK << 1 ] ;
        thirdC::postPathStateSpaceIF( tinP , postPath , sizeof postPath , idStateSpace , idMemorySpaceCt ) ;
        __Z( *postPath ) ;

        if( !POOP )
        {
            ifFileNameC iffn( tinP , *tinP.pEther , postPath ) ;

            TN( tLike , "" ) ; tLike = T(iffn)+T(postName)+T(".*") ;

            //etherC::etRockIF( tinP ).traceF( tinP , T("deleting: ")+tLike ) ;

            const countT* pcQuitSave = tinP.pcQuit ;
                                       tinP.pcQuit = 0 ;

            fileNameC fnLike( tinP , *tinP.pEther , tLike ) ;
            patternC pat( tinP , *tinP.pEther , fnLike , ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT ) ;

            ZE( strokeS* , pstt1f ) ;
            countT cFound = tinP.pEther->diskFindFileOrDirF( tinP , pstt1f , fnLike.pathF() , &pat , 0 , 0 , 0 , 8 ) ; ___( pstt1f ) ;

            tinP.pcQuit = pcQuitSave ;

            FORsTRINGSiN1( pstt1f )
            {
                //etherC::etRockIF( tinP ).traceF( tinP , T("deleting: ")+T(psttc1) ) ;
                tinP.pEther->diskFileOrDirDeleteF( tinP , psttc1 ) ;
                //etherC::etRockIF( tinP ).traceF( tinP , T("deleted : ")+T(psttc1) ) ;
            }
            tinP.pEther->delF( tinP , pstt1f ) ;
        }
    }

    //PREALLOCATE TO FILL THE DOCKS (IF ALLOCATION IS GOING TO FAIL, LET'S FIND OUT NOW)
    countT expItemsPerNapkin = expCbPerNapkinP - expCbPerItemP ;
    countT cItemsPerNapkin   = 1 << expItemsPerNapkin ;
    for( countT offDock = 0 ; offDock < cDocks ; offDock ++ ) (*this)[ offDock * cItemsPerNapkin ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139003.napkinsc.napkinsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139004.napkinsc.operator_element BEGIN
#define DDNAME       "3func.36139004.napkinsc.operator_element"
#define DDNUMB      (countT)0x36139004
#define IDFILE      (countT)0x1556


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/byteT* napkinsC::operator []( const countT offElementP )/*1*/
{
    //A:ASSUME: sizeof( countT ) == sizeof( count02T )

    // CALCULATE pcDockOffNapkin
    
    // offElementP   SPECIFIES THE ARRAY ELEMENT THAT I WANT
    // offNapkinWant SPECIFIES THE napkinC THAT I WANT
    //
    // offByte       = offElementP << expCbPerItem
    //
    // offNapkinWant = offByte     >> expCbPerNapkin
    //

    TINSL

    _IO_

    countT   offNapkinWant = - 1 ;
    count04T offByteWant   = offElementP ;   //A:ASSUME: countT IS 02 BITS
    {
        offByteWant <<= expCbPerItem ;

        count04T offn = offByteWant ;

        offn >>= expCbPerNapkin ;
        offNapkinWant = (countT)offn ;
    }
    //etherC::etRockIF( tinP ).traceF( tinP , T("[offElementP,offNapkinWant]: ")+TF2(offElementP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(offNapkinWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) /*, flTRACE_NOpREFIX*/ ) ;

    ZE( byteT* , pbDockNapkinData ) ;
    countT offDockWant = - 1 ;
    for( countT offDock = 0 ; offDock < cDocks ; offDock ++ )
    {
        if( pcDockOffNapkin[ offDock ] == offNapkinWant )
        {
            offDockWant = offDock ;
            break ;
        }
    }
    //etherC::etRockIF( tinP ).traceF( tinP , T("  [offDockWant]: ")+TF2(offDockWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) /*, flTRACE_NOpREFIX*/ ) ;

    if( offDockWant != - 1 )
    {
        napkinC& napkin = *( (napkinC*)pbDockNapkin + offDockWant ) ;
        pbDockNapkinData = napkin ;
    }
    else
    {
        countT offDockMake = offDockNextCt ++ ;
                             offDockNextCt %= cDocks ;
        //etherC::etRockIF( tinP ).traceF( tinP , T("  [offDockMake]: ")+TF2(offDockMake,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) /*, flTRACE_NOpREFIX*/ ) ;

        if( pcDockOffNapkin[ offDockMake ] != - 1 )
        {
            pcDockOffNapkin[ offDockMake ]  = - 1 ;

            napkinC* pnDoomed = (napkinC*)pbDockNapkin + offDockMake ;
            DELzOMBIE( pnDoomed ) ;

            fileC* pfDoomed = (fileC*)pbDockFile + offDockMake ;
            DELzOMBIE( pfDoomed ) ;
        }

        TN( tName , "" ) ; tName = T(postName)+T(".")+TF3(offNapkinWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN,8) ;
        //etherC::etRockIF( tinP ).traceF( tinP , T("  [tName]: \"")+tName+T("\"") /*, flTRACE_NOpREFIX*/ ) ;

        ctFileF( tinP , offDockMake , tName ) ;

        {
            osTextT postBuf[ TUCK ] ;
            thirdC::c_strcpyIF( tinP , postBuf , "napkinsC/" ) ;
            thirdC::c_strcatIF( tinP , postBuf , tName ) ;

            THREADmODE3oN( flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE )
            new( 0 , tinP , (byteT*)( (napkinC*)pbDockNapkin + offDockMake ) , sizeof( napkinC ) ) napkinC
            (
                tinP ,
                idLineCt ,
                idiFileCt ,
                pbBitsCt ,
                postBuf ,
                (const handleC*)((fileC*)pbDockFile)[ offDockMake ] ,
                1 << expCbPerNapkin ,
                ifcOPENsHAREDmEMORYhOW_nCeF ,
                flNAPKINc_null ,
                - 1 ,
                idMemorySpaceCt
            ) ;
            THREADmODE3rESTORE
        }

        napkinC& napkin = *( (napkinC*)pbDockNapkin + offDockMake ) ;
        napkin.formattingIsDoneF( tinP ) ;
        pbDockNapkinData = napkin ;

        pcDockOffNapkin[ offDockMake ] = offNapkinWant ;
    }

    // CALCULATE THE OFFSET WITHIN THE NAPKIN

    // RECIPE
    // NAPKIN SIZE IS A POWER OF 2, SO IS REPRESENTED BY A SINGLE BIT
    // THE TOTAL VALUE IN pOffB[] EQUALS THE VALUE OF THE BITS BELOW THAT BIT POSITION, PLUS THE VALUE OF THE BITS AT OR ABOVE THAT BIT POSITION
    // THE LATTER VALUE IS A MULTIPLE OF THE NAPKIN SIZE SO DOES NOT MODIFY THE MODULUS
    // TO CALCULATE THE MODULUS, THOSE BITS ARE DISCARDED
    // THE BITS WHICH REMAIN REPRESENT THE VALUE OF THE OFFSET INTO THE NAPKIN THAT CONTAINS THE SPECIFIED BYTE

    // RECIPE FOR DISCARDING THE BITS AT AND ABOVE THE MODULUS BIT
    // THE MODULUS BIT IS ALWAYS IN pOffB[ 0 ] SINCE NAPKIN SIZE IS LIMITED TO MAXcOUNTT
    // SO pOffB[ 1 , 2 , ... ] ARE DISCARDED
    // A MASK IS CALCULATED THAT WILL BE USED TO RETAIN ONLY THE LOW BITS IN pOffB[ 0 ]

    countT mask = - 1 ;
    {
        if( !expCbPerNapkin ) mask = 0 ;
        else
        {
            countT cShift = sizeof( countT ) * SB - expCbPerNapkin ;
            mask <<= cShift ;
            mask >>= cShift ;
        }
    }
    countT offWant = (countT)offByteWant & mask ;

    //etherC::etRockIF( tinP ).traceF( tinP , T("  [pbDockNapkinData,offWant,+]: ")+TF3((countT)pbDockNapkinData,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T("    ")+TF3(offWant,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED,8)+T("    ")+TF3((countT)(pbDockNapkinData+offWant),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8) /*, flTRACE_NOpREFIX*/ ) ;

    return pbDockNapkinData + offWant ; //U:: NEED TO CALCULATE THE OFFSET TO RETURN
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139004.napkinsc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139005.napkinsc.ctfilenameif BEGIN
#define DDNAME       "3func.36139005.napkinsc.ctfilenameif"
#define DDNUMB      (countT)0x36139005
#define IDFILE      (countT)0x1557


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT napkinsC::ctFileNameIF( tinS& tinP , textC& tP , const osTextT* const postNameP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        __( tP.csF( tinP ) ) ;
        if( POOP ) return ;
    }

    _IO_

    tP = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF3(idMemorySpaceCt?idMemorySpaceCt:tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,8)+T("/stateSpaces/" )+TF2(idStateSpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+T(postNameP)+T(".napkinsC.napkinC") ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139005.napkinsc.ctfilenameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139006.napkinsc.ctfilef BEGIN
#define DDNAME       "3func.36139006.napkinsc.ctfilef"
#define DDNUMB      (countT)0x36139006
#define IDFILE      (countT)0x1558


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT napkinsC::ctFileF( tinS& tinP , const countT offDockP , const osTextT* const postNameP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        if( POOP ) return ;
    }

    _IO_

    OStEXT( ostoName , TUCK << 2 )              //20200509@1034: INCREASED FROM TUCK TO TUCK << 2
    {
        TN( tName , "" ) ;
        ctFileNameIF( tinP , tName , postNameP ) ;

        etherC& ether = *tinP.pEther ;
        ZE( strokeS* , psttm ) ;
        ether.diskMapFileNameF( tinP , psttm , tName ) ; ___( psttm ) ;
        osFileNameC osName( tinP , ether , T(psttm) ) ;
        ether.delF( tinP , psttm ) ;

        OStEXTA( ostoName , osName ) ;
    }

    countT access       = ifcOPENaCCESS_WR ; //CANNOT SPECIFY READ ONLY HERE BECAUSE napkinC MIGHT NEED TO FORMAT ITSELF EVEN IF I AM ONLY GOING TO READ THE DATA SECTION OF THE NAPKIN
    countT share        = ifcOPENsHARE_WR  ;
    countT how          = ifcOPENhOW_nCeO  ;
    flagsT flagsDetails = flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_LOCrANsEQ | flOPENdETAILS_NOcACHE ;

    //etherC::etRockIF( tinP ).traceF( tinP , T(ostoName) ) ;

    new( 0 , tinP , pbDockFile + offDockP * sizeof( fileC ) , sizeof( fileC ) ) fileC( tinP , ostoName , access , share , flagsDetails , how , flFILEaTTR_null , flFILEc_null ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36139* : 3func.36139006.napkinsc.ctfilef END
