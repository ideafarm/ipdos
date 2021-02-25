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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d002.jotc.dt_jotc BEGIN
#define DDNAME       "3func.3612d002.jotc.dt_jotc"
#define DDNUMB      (countT)0x3612d002
#define IDFILE      (countT)0x1525


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/jotC::~jotC( voidT )/*1*/
{
    TINSL
    //etherC::etRockIF( tinP ).traceF( tinP , T("jotC - [this,tag]: ")+TF2((countT)this,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(tagHighNibble,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
    SCOOPS
    IFbEcAREFUL
    {
        if( POOP ) return ;
        if( !( F(flagsCt) & flJOTc_DOnOTrEGISTER ) )
        {
            __Z(  idSlotJot ) ;
            __NZ( idSlotJot > sizeof tinP.ppJot / sizeof tinP.ppJot[ 0 ] ) ;
            if( POOP ) return ;
            __NZ( tinP.ppJot[ idSlotJot - 1 ] != this ) ;
        }
        if( POOP ) return ;
    }

    _IO_

    if( !( F(flagsCt) & flJOTc_DOnOTrEGISTER ) )
    {
        tinP.ppJot[ idSlotJot - 1 ] = 0 ;
        idSlotJot = 0 ;
    }

    if( POOP ) POOPR
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d002.jotc.dt_jotc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d003.jotc.jotc BEGIN
#define DDNAME       "3func.3612d003.jotc.jotc"
#define DDNUMB      (countT)0x3612d003
#define IDFILE      (countT)0x1526


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

// I CANNOT BE USED EARLY/LATE BECAUSE I USE textC TO CONSTRUCT A UNIQUE NAME
// IF IT IS EVER NECESSARY TO SUPPORT EARLY/LATE, EDIT THIS DEF TO AVOID USING textC (THE T MACRO) IF EARLY/LATE

// IF flJOTc_DOnOTrEGISTER THEN I WILL NOT SET ANY BITS IN NM_HIGH FOR idJot VALUES

/*1*/jotC::jotC( tinS& tinP , const osTextT* const postNameP , const flagsT flagsP , const countT cbDataBookP , const countT cIndexEntriesBookP , const countT cKeepInactiveP , countT idGrabLayerP , flagsT flagsGrabP , countT idMemorySpaceP ) :/*1*/
grabC( tinP , TAG( TAGiDnULL ) , flagsGrabP | flGRABc_NOTjEALOUS , idGrabLayerP ) ,     // flGRABc_NOTjEALOUS IS ADDED BECAUSE USING ME WILL USUALLY OR ALWAYS RESULT IN booksC BEING GRABBED
idSlotJot( 0 ) ,
tagHighNibble( 0 ) ,
_idThreadCt( tinP.monitor.idThread ) ,
bksIndex( tinP , TAG( TAGiDnULL ) , ( F(flagsP) & flJOTc_PRIVATE ? TF2(tinP.osPid,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(tinP.monitor.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".") : T("") )+T(postNameP)+T(".jotC.index") , F(flagsP) & flJOTc_PRIVATE ? ifcIDsTATEsPACE_SCRATCH : ifcIDsTATEsPACE_MULTIPLEaDAMS , ( F(flagsP) & flJOTc_WRITE ? flBOOKSc_WRITER : flBOOKSc_null ) | ( F(flagsP) & flJOTc_PURGEoNcT ? flBOOKSc_PURGEoNcT : flBOOKSc_null ) | ( F(flagsP) & flJOTc_DELETE ? flBOOKSc_PURGEoNdT : flBOOKSc_null ) , !( F(flagsP) & flJOTc_WRITE ) ? 0 : sizeof( handle0111C ) * ( cIndexEntriesBookP ? cIndexEntriesBookP : CBjOTbOOKdEFAULT / sizeof( handle0111C ) ) , cKeepInactiveP , 0 , 0 , 0 , idMemorySpaceP ) ,
bksData(  tinP , TAG( TAGiDnULL ) , ( F(flagsP) & flJOTc_PRIVATE ? TF2(tinP.osPid,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(tinP.monitor.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".") : T("") )+T(postNameP)+T(".jotC.data" ) , F(flagsP) & flJOTc_PRIVATE ? ifcIDsTATEsPACE_SCRATCH : ifcIDsTATEsPACE_MULTIPLEaDAMS , ( F(flagsP) & flJOTc_WRITE ? flBOOKSc_WRITER : flBOOKSc_null ) | ( F(flagsP) & flJOTc_PURGEoNcT ? flBOOKSc_PURGEoNcT : flBOOKSc_null ) | ( F(flagsP) & flJOTc_DELETE ? flBOOKSc_PURGEoNdT : flBOOKSc_null ) , !( F(flagsP) & flJOTc_WRITE ) ? 0 :                           cbDataBookP        ? cbDataBookP        : CBjOTbOOKdEFAULT                           , cKeepInactiveP , 0 , 0 , 0 , idMemorySpaceP ) ,
cIndexEntriesPerIndexBook( bksIndex.cbBodyBookF() / sizeof( handle0111C ) ) ,
idLathRead( 0 ) ,
idMaxWritten( 0 ) ,
flagsCt( flagsP )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        FV( flJOTc , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_

    if( !( F(flagsP) & flJOTc_DOnOTrEGISTER ) )
    {
        ZE( countT , offr ) ;
        for( ; offr < CsLOTSjOTrEGISTRY ; offr ++ )
        {
            if( !tinP.ppJot[ offr ] )
            {
                tinP.ppJot[ offr ] = this ;
                idSlotJot = 1 + offr ;
                break ;
            }
        }
        if( offr == CsLOTSjOTrEGISTRY )
        {
            BLAMMO ;
        }

        tagHighNibble = ( offr << sizeof( countT ) * SB - 4 ) | BM_HIGH ;
    }

    idMaxWritten = idLathRead = tagHighNibble ; // SEE jotC::writeF FOR THE SPECIFICATION OF THE BIT LAYOUT OF AN idJot VALUE

    ZE( countT* , pcpIdBookSizePairs ) ;
    bksIndex.cbEachBookF( tinP , pcpIdBookSizePairs ) ;

    if( pcpIdBookSizePairs )
    {
        ZE( countT , cJots ) ;
        ZE( countT , idBookLath ) ;
        countT cBooks = *pcpIdBookSizePairs ;
        countT* pcc = pcpIdBookSizePairs + 1 ;
        while( cBooks -- )
        {
            countT idBook = pcc[ 0 ] ;
            countT cbUsed = pcc[ 1 ] ;
            __( idBook - 1 - idBookLath ) ;
            __( cbUsed % sizeof( handle0111C ) ) ;
            idBookLath = idBook ;

            cJots += cbUsed / sizeof( handle0111C ) ;
            pcc += 2 ;
        }
        idMaxWritten += cJots ;
    }
    tinP.pEther->delF( tinP , pcpIdBookSizePairs ) ;

    //etherC::etRockIF( tinP ).traceF( tinP , T("jotC + [this,tag,name]: ")+TF2((countT)this,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(tagHighNibble,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+T(postNameP) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d003.jotc.jotc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d004.jotc.writef BEGIN
#define DDNAME       "3func.3612d004.jotc.writef"
#define DDNUMB      (countT)0x3612d004
#define IDFILE      (countT)0x1527


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT jotC::writeF( tinS& tinP , const byteT* const pb1P , const countT cb1P , const byteT* const pb2P , const countT cb2P , const flagsT flagsP )/*1*/
{
    _IO_

    handle0111C hJotData ;
    bksData.writeF( tinP , hJotData , pb1P , cb1P , pb2P , cb2P ) ;

    handle0111C hJotIndex ;
    bksIndex.writeF( tinP , hJotIndex , (byteT*)&hJotData , sizeof hJotData ) ;

    // BIT LAYOUT FOR idNew (NUMBERS ASSUME sizeof( countT ) IS 02 BITS
    // 
    // OFFSET  LENGTH   DESCRIPTION
    // 
    // 0       c1       JOT ID, ASSIGNED SERIALLY STARTING WITH 1
    // c1      3        OFFsLOT OF *this IN tinP.ppJot
    // f1      1        ALWAYS SET ; INDICATES THAT THE VALUE IS AN idJot RATHER THAN A MEMORY ADDRESS
    // 

    countT idNew =
        tagHighNibble
        |
        (
            1
            +
            (
                ( hJotIndex.c2F() - 1 ) * cIndexEntriesPerIndexBook
                +
                hJotIndex.c1F()         / sizeof( handle0111C )
            )
        )
    ;

    {
        countT idOld = idNew - 1 ;

        const countT idDesireSave = thirdC::dosPriorityIF( tinP ) ;
        thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;

        ZE( countT , idCycle ) ;
        tinP.cYield = 0 ;

        for(;;)
        {
            if( idOld == setIfEqualsAM( idMaxWritten , idNew , idOld ) ) break ;
            else                                                         thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ;
        }

        tinP.cYield = 0 ;
        thirdC::dosPriorityIF( tinP , idDesireSave ) ;
    }

    //CONoUTrAW3( "writeF [idNew]: " , idNew , "\r\n" ) ;
    return idNew ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d004.jotc.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d005.jotc.readf BEGIN
#define DDNAME       "3func.3612d005.jotc.readf"
#define DDNUMB      (countT)0x3612d005
#define IDFILE      (countT)0x1528


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/pageC jotC::readF( tinS& tinP , countT idP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return pageC( tinP , bksData ) ;
        __Z( idP ) ;
        __( idP & NM_HIGH && ( idP & NM_HIGH ) - tagHighNibble ) ; // idP NEED NOT BE TAGGED, BUT IF TAGGED, THE TAG MUST MATCH MY TAG
        if( POOP ) return pageC( tinP , bksData ) ;
    }

    _IO_

    if( ( idMaxWritten & ~NM_HIGH ) < ( idP & ~NM_HIGH ) ) return pageC( tinP , bksData ) ;

    handle0111C hJotData ;
    {
        countT offWant = ( idP - 1 ) & ~NM_HIGH ;
        handle0011C hJotIndex( ( offWant % cIndexEntriesPerIndexBook ) * sizeof( handle0111C ) , 1 + offWant / cIndexEntriesPerIndexBook ) ;

        pageC page_hJotData( tinP , bksIndex , sizeof( handle0111C ) ) ;
        bksIndex.readF( tinP , page_hJotData , hJotIndex ) ;

        __( sizeof( handle0111C ) - page_hJotData ) ;
        __Z( (const byteT*)page_hJotData ) ;

        if( !POOP ) hJotData = *(handle0111C*)(const byteT*)page_hJotData ;
    }

    ZE( const byteT* , pbzData ) ;
    pageC pageData( tinP , bksData ) ;
    if( !POOP ) bksData.readF( tinP , pageData , hJotData ) ;

    return pageData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d005.jotc.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d006.jotc.operator_element BEGIN
#define DDNAME       "3func.3612d006.jotc.operator_element"
#define DDNUMB      (countT)0x3612d006
#define IDFILE      (countT)0x1529


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/pageC jotC::operator []( countT idP )/*1*/
{
    TINSL

    _IO_
    return readF( tinP , idP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d006.jotc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d007.jotc.operator_pagec BEGIN
#define DDNAME       "3func.3612d007.jotc.operator_pagec"
#define DDNUMB      (countT)0x3612d007
#define IDFILE      (countT)0x152a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/jotC::operator pageC( voidT )/*1*/
{
    TINSL

    _IO_

    return readF( tinP , 1 + incv02AM( idLathRead ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d007.jotc.operator_pagec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d008.jotc.peekidbookf BEGIN
#define DDNAME       "3func.3612d008.jotc.peekidbookf"
#define DDNUMB      (countT)0x3612d008
#define IDFILE      (countT)0x152b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT jotC::peekIdBookF( tinS& tinP , countT idP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( idP ) ;
        __( idP & NM_HIGH && ( idP & NM_HIGH ) - tagHighNibble ) ; // idP NEED NOT BE TAGGED, BUT IF TAGGED, THE TAG MUST MATCH MY TAG
        if( POOP ) return 0 ;
    }

    _IO_

    if( ( idMaxWritten & ~NM_HIGH ) < ( idP & ~NM_HIGH ) ) return 0 ;

    handle0111C hJotData ;
    {
        countT offWant = ( idP - 1 ) & ~NM_HIGH ;
        handle0011C hJotIndex( ( offWant % cIndexEntriesPerIndexBook ) * sizeof( handle0111C ) , 1 + offWant / cIndexEntriesPerIndexBook ) ;

        pageC page_hJotData( tinP , bksIndex , sizeof( handle0111C ) ) ;
        bksIndex.readF( tinP , page_hJotData , hJotIndex ) ;

        __( sizeof( handle0111C ) - page_hJotData ) ;
        __Z( (const byteT*)page_hJotData ) ;

        if( !POOP ) hJotData = *(handle0111C*)(const byteT*)page_hJotData ;
    }

    return hJotData.c2F() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612d* : 3func.3612d008.jotc.peekidbookf END
