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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3002.filec.dt_filec BEGIN
#define DDNAME       "3func.360e3002.filec.dt_filec"
#define DDNUMB      (countT)0x360e3002
#define IDFILE      (countT)0x1409


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/fileC::~fileC( voidT )/*1*/
{
    TINSL
    _IO_

    hFile.closeIfF() ;

    if( F(flagsCt) & flFILEc_DELETE )
    {
        thirdC::dosDeleteIF( tinP , postFileOrZip , - 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3002.filec.dt_filec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3003.filec.ctf BEGIN
#define DDNAME       "3func.360e3003.filec.ctf"
#define DDNUMB      (countT)0x360e3003
#define IDFILE      (countT)0x140a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT fileC::ctF( tinS& tinP , const osTextT* const postP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const countT cTriesP )/*1*/
{
    //if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("fileC::ctF on entry          [POOP,postP]:    ")+TF2(POOP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(postP) ) ;

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( sizeof postFileOrZip <= thirdC::c_strlenIF( tinP , postP ) ) ;
        if( POOP ) return ;
    }

    _IO_
    //if( tinP.pc Utility[ 0 ] )
    //{
    //    OStEXT(  ostoSay , TUCK * 2 ) ;
    //    OStEXTAK( ostoSay , "fileC::ctF [postP]: \"" ) ;
    //    OStEXTA(  ostoSay , postP ) ;
    //    OStEXTAK( ostoSay , "\"\r\n" ) ;
    //}

    thirdC::c_strcpyIF( tinP , postFileOrZip , postP ) ;

    //if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("fileC::ctF calling dosOpenIF [POOP,postP]:    ")+TF2(POOP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(postP) ) ;
    thirdC::dosOpenIF( tinP , tinP.pEther , hFile , idOpenResult , postP , idAccessP , idShareP , flagsDetailsP , idHowP , flagsAttributeP , 0 , cTriesP ) ;
    //if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("fileC::ctF called  dosOpenIF [POOP,postP]:    ")+TF2(POOP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(postP) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3003.filec.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3004.filec.filec BEGIN
#define DDNAME       "3func.360e3004.filec.filec"
#define DDNUMB      (countT)0x360e3004
#define IDFILE      (countT)0x140b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/fileC::fileC( tinS& tinP , const osTextT* const postP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const flagsT flagsP , const countT cTriesP , const osTextT* const postZipP ) :/*1*/
hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
idOpenResult( 0 ) ,
flagsCt( flagsP )
{
    _IO_






    ctF( tinP , postP  , idAccessP , idShareP , flagsDetailsP , idHowP , flagsAttributeP , cTriesP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3004.filec.filec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3005.filec.filec BEGIN
#define DDNAME       "3func.360e3005.filec.filec"
#define DDNUMB      (countT)0x360e3005
#define IDFILE      (countT)0x140c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/fileC::fileC( tinS& tinP , const strokeS* const psttP , const countT idAccessP , const countT idShareP , const flagsT flagsDetailsP , const countT idHowP , const flagsT flagsAttributeP , const flagsT flagsP , const countT cTriesP , const osTextT* const postZipP ) :/*1*/
hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ,
idOpenResult( 0 ) ,
flagsCt( flagsP )
{
    _IO_
    etherC& ether = *tinP.pEther ;
    ZE( strokeS* , psttm ) ;
    ether.diskMapFileNameF( tinP , psttm , psttP ) ; ___( psttm ) ;
    osFileNameC osName( tinP , ether , T(psttm) ) ;
    ether.delF( tinP , psttm ) ;

    ctF( tinP , osName , idAccessP , idShareP , flagsDetailsP , idHowP , flagsAttributeP , cTriesP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3005.filec.filec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3006.filec.idopenresultf BEGIN
#define DDNAME       "3func.360e3006.filec.idopenresultf"
#define DDNUMB      (countT)0x360e3006
#define IDFILE      (countT)0x140d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/countT fileC::idOpenResultF( tinS& tinP  )/*1*/
{
    _IO_
    return idOpenResult ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3006.filec.idopenresultf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3007.filec.operator_handlec_ref_const BEGIN
#define DDNAME       "3func.360e3007.filec.operator_handlec_ref_const"
#define DDNUMB      (countT)0x360e3007
#define IDFILE      (countT)0x140e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/fileC::operator const handleC&( voidT )/*1*/
{
    TINSL
    _IO_
    return hFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3007.filec.operator_handlec_ref_const END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3008.filec.operator_handlec_ptr_const BEGIN
#define DDNAME       "3func.360e3008.filec.operator_handlec_ptr_const"
#define DDNUMB      (countT)0x360e3008
#define IDFILE      (countT)0x140f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/fileC::operator const handleC*( voidT )/*1*/
{
    TINSL
    _IO_
    return &hFile ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e3* : 3func.360e3008.filec.operator_handlec_ptr_const END
