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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004001.textc.textc BEGIN
#define DDNAME       "3func.36004001.textc.textc"
#define DDNUMB      (countT)0x36004001
#define IDFILE      (countT)0xe03


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.da20104.1.1.0.html\"\>da20104:  WAKEsHOW( "example.simplest.func.1050001.textC.textC" )\</A\>
stores a string of strokes, calculated from postP
postP can be 0
arguments
 etherP
 postP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const osTextT* const postP , const countT csP , const strokeS sttPadP , const boolT fLeadingP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    //IN_C
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    const countT costi = postP ? ether.strBodyLengthF( tinP , postP ) : 0 ;
    const countT csttPad = costi < csP ? csP - costi : 0 ;

    if( (countT)this == 0x906618 )
    {
        countT foo = 2 ;
    }

    ether.strMakeFromOsTextF( tinP , psttMe , postP ? postP : "" , 0 , csttPad ) ; ___BITScT( psttMe , 0xd4d ) ;

    if( csP )
    {
        ether.strResizeF( tinP , psttMe , csP , sttPadP , fLeadingP ) ; ___BITScT( psttMe , 0xd4c ) ;
    }

    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004001.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004002.textc.textc BEGIN
#define DDNAME       "3func.36004002.textc.textc"
#define DDNUMB      (countT)0x36004002
#define IDFILE      (countT)0xe04


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ea20104.1.1.0.html\"\>ea20104:  WAKEsHOW( "example.simplest.func.1050002.textC.textC" )\</A\>
stores a string of strokeS's
psttP can be 0
arguments
 etherP
 psttP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const strokeS* const psttP , const countT csP , const strokeS sttPadP , const boolT fLeadingP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    if( (countT)this == 0x906618 )
    {
        countT foo = 2 ;
    }

    if( psttP ) { ether.strFuseF( tinP , psttMe , psttP , 0 , 0 , strokeS() , 0 , 0 ,/*U::SOUL?*/ csP > psttP->idAdam ? csP - psttP->idAdam : 0 ) ;  ___BITScT( psttMe , 0xd50 ) ; }
    else        { ether.strMakeF( tinP , LF , psttMe , T("") , csP                                           ) ;  ___BITScT( psttMe , 0xd4f ) ; }
    if( csP ) { ether.strResizeF( tinP , psttMe , csP , sttPadP , fLeadingP ) ;  ___BITScT( psttMe , 0xd4e ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004002.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004003.textc.dt_textc BEGIN
#define DDNAME       "3func.36004003.textc.dt_textc"
#define DDNUMB      (countT)0x36004003
#define IDFILE      (countT)0xe05


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fa20104.1.1.0.html\"\>fa20104:  WAKEsHOW( "example.simplest.func.1050003.textC.dt_textC" )\</A\>
*/
/**/

/*1*/textC::~textC( voidT )/*1*/
{
    TINSL
    //IN_C
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    ether.delF( tinP , psttLower ) ;
    ether.delF( tinP , psttMe ) ;
    ether.delF( tinP , postMe ) ;
    ether.delF( tinP , puntMe ) ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004003.textc.dt_textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004004.textc.operator_strokes_ptr BEGIN
#define DDNAME       "3func.36004004.textc.operator_strokes_ptr"
#define DDNUMB      (countT)0x36004004
#define IDFILE      (countT)0xe06


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0b20104.1.1.0.html\"\>0b20104:  WAKEsHOW( "example.simplest.func.1050004.textC.operator_strokeS_ptr" )\</A\>
evaluates to a pointer to a strokeS string
*/
/**/

/*1*/textC::operator strokeS*( voidT ) /*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    return psttMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004004.textc.operator_strokes_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004005.textc.operator_plus BEGIN
#define DDNAME       "3func.36004005.textc.operator_plus"
#define DDNUMB      (countT)0x36004005
#define IDFILE      (countT)0xe07


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1b20104.1.1.0.html\"\>1b20104:  WAKEsHOW( "example.simplest.func.1050005.textC.operator_plus" )\</A\>
evaluates to a textC object that contains a concatenation of my value with that of tP
arguments
 tP
  i might modify this even though it is declared a constant
  i cast in order to avoid zillions of compiler warnings
  the modification can occur only if tP is a vTextC object
*/
/**/

/*1*/textC textC::operator +( TPpARAM )/*1*/
{
    TPpARAMmAP
    TINSL

    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tP.loadVTextValueIfF( tinP ) ;
    loadVTextValueIfF( tinP ) ;
    if( !ether && !!psttMe )
    {
        _IO_

        boolT bList = F(flags) & flTEXTc_LIST ;
        countT csttExtra = bList
            ? CSpREFIX + ((textC&)tP).csF( tinP )
            :            ((textC&)tP).csF( tinP )
        ;

        ZE( strokeS* , psttBoth ) ;
        ether.strFuseF( tinP , psttBoth , psttMe , 0 , 0 , strokeS() , 0 , 0 , csttExtra ) ; ___BITScT( psttBoth , 0xd52 ) ;
 
        if( bList ) { ether.strFuseSeparateF( tinP , psttBoth , tP ) ; ___BITScT( psttBoth , 0xd51 ) ; }
        else        { ether.strFuseF(         tinP , psttBoth , tP ) ; ___BITScT( psttBoth , 0xd51 ) ; }

        TN( tr , psttBoth ) ;
        tr.bConvertible = bConvertible && tP.bConvertible ;
        ether.delF( tinP , psttBoth ) ;
        return tr ;
    }
    else
    {
        _IO_
        TN( tr , "" ) ;
        return tr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004005.textc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004006.textc.textc BEGIN
#define DDNAME       "3func.36004006.textc.textc"
#define DDNUMB      (countT)0x36004006
#define IDFILE      (countT)0xe08


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4b20104.1.1.0.html\"\>4b20104:  WAKEsHOW( "example.simplest.func.1050006.textC.textC" )\</A\>
arguments
 tP
*/
/**/

/*1*/textC::textC( TPpARAM , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT csP , const strokeS sttPadP , const boolT fLeadingP )/*1*/ :
idLineCt(  idLineCtP && idiFileCtP ? idLineCtP  : _tP.idLineCt  ) ,
idiFileCt( idLineCtP && idiFileCtP ? idiFileCtP : _tP.idiFileCt ) ,
flags( flagsP ) ,
ether( (*(textC*)&_tP).ether ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    TPpARAMmAP
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return ;
        __( !(strokeS*)tP ) ;
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    tP.loadVTextValueIfF( tinP ) ;

    //U: WHY DID WE CODE IT THIS WAY?:
    //countT idf = 1 ;
    //strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    //ZE( countT , idLathI ) ;
    //ether.strSubstringF( tinP , psttMe , idf , idLathI , tP ) ;  ___BITScT( psttMe , 0xd55 ) ;

    ether.strMakeF( tinP , LF , psttMe , tP , csP ? csP - tP.csF( tinP ) : 0 ) ;  ___BITScT( psttMe , 0xd54 ) ;
    if( csP ) { ether.strResizeF( tinP , psttMe , csP , sttPadP , fLeadingP ) ;  ___BITScT( psttMe , 0xd53 ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004006.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004007.textc.csf BEGIN
#define DDNAME       "3func.36004007.textc.csf"
#define DDNUMB      (countT)0x36004007
#define IDFILE      (countT)0xe09


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$csF.0.html\"\>instances\</A\>
\<A HREF=\"5.1050007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2b20104.1.1.0.html\"\>2b20104:  WAKEsHOW( "example.simplest.func.1050007.textC.csF" )\</A\>
evaluates to the length of the string
 in other words, this evaluates to pstt->idAdam
*/
/**/

/*1*/countT textC::csF( tinS& tinP )/*1*/
{
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
        __Z( psttMe ) ;
        if( ether ) return 0 ;

    }

    _IO_
    return psttMe->idAdam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004007.textc.csf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004008.textc.textc BEGIN
#define DDNAME       "3func.36004008.textc.textc"
#define DDNUMB      (countT)0x36004008
#define IDFILE      (countT)0xe0a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5b20104.1.1.0.html\"\>5b20104:  WAKEsHOW( "example.simplest.func.1050008.textC.textC" )\</A\>
arguments
 etherP
 sttP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const strokeS sttP , const countT csP , const strokeS sttPadP , const boolT fLeadingP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( sttP ) ;
        if( ether ) return ;
    }

    //IN_C
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strMakeF( tinP , LF , psttMe , T("") , csP ? csP : 1 ) ;  ___BITScT( psttMe , 0xd58 ) ;
    ether.strFuseF( tinP , psttMe , sttP ) ;  ___BITScT( psttMe , 0xd57 ) ;
    if( csP ) { ether.strResizeF( tinP , psttMe , csP , sttPadP , fLeadingP ) ;  ___BITScT( psttMe , 0xd56 ) ; }
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004008.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004009.textc.textc BEGIN
#define DDNAME       "3func.36004009.textc.textc"
#define DDNUMB      (countT)0x36004009
#define IDFILE      (countT)0xe0b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6b20104.1.1.0.html\"\>6b20104:  WAKEsHOW( "example.simplest.func.1050009.textC.textC" )\</A\>
equivalent in function to etherC::strFromF
arguments
 etherP
 valueP
 flagsFormatP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001004c.flFORMAT!||
 csP
  minimum length of the final string
  if more strokes are needed to represent the number, psttP will be longer than csP
 radixP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const sCountT valueP , const flagsT flagsFormatP , const countT csP , const countT radixP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004009.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400a.textc.textc BEGIN
#define DDNAME       "3func.3600400a.textc.textc"
#define DDNUMB      (countT)0x3600400a
#define IDFILE      (countT)0xe0c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7b20104.1.1.0.html\"\>7b20104:  WAKEsHOW( "example.simplest.func.105000a.textC.textC" )\</A\>
equivalent in function to etherC::strFromTimeF
arguments
 time1P
 time2P
 tinP
 idFirstP
  see etherC::strFromTimeP
 idLastP
  see etherC::strFromTimeP
 sttRadixP
  can be 0
  if not 0 then will be used to mark the radix point
   for time, use S1C('.') or S1C('@')
   for money, use S1C('.') or S1C('$')
 psttDelimiter
  can be 0
  if not 0 then will be used to separate each value (time, tuck, tock, tick, day, duck, dock, dick)
  normally should be 0
*/
/**/

/*1*/textC::textC( countT time1P , sCountT time2P , tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT idFirstP , const countT idLastP , const strokeS sttRadixP , const strokeS* const psttDelimiterP , const countT idFormatP , const flagsT flagsFormatP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    //COMMENTED OUT 2011.09.23 BECAUSE BEHAVIOR IS UNDESIRABLE (LARGE VALUE WILL BE STORED WHENEVER 0 IS EXPECTED): if( !time1P && !time2P ) ether.osTimeNowF( tinP , time1P , time2P ) ;

    ether.strFromTimeF( tinP , psttMe , time1P , time2P , idFirstP , idLastP , sttRadixP , psttDelimiterP , idFormatP , flagsFormatP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400a.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400b.textc.operator_plus BEGIN
#define DDNAME       "3func.3600400b.textc.operator_plus"
#define DDNUMB      (countT)0x3600400b
#define IDFILE      (countT)0xe0d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3b20104.1.1.0.html\"\>3b20104:  WAKEsHOW( "example.simplest.func.105000b.textC.operator_plus" )\</A\>
evaluates to a textC object that contains a concatenation of my value with that of sP
arguments
 tP
*/
/**/

/*1*/textC textC::operator +( const strokeS& sP )/*1*/
{
    TINSL
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    if( !ether && !!psttMe )
    {
        _IO_
        ZE( strokeS* , psttBoth ) ;
        ether.strFuseF( tinP , psttBoth , psttMe , 0 , 0 , strokeS() , 0 , 0 ,/*U::SOUL?*/ 1 ) ; ___BITScT( psttBoth , 0xd5a ) ;
        ether.strFuseF( tinP , psttBoth , sP ) ; ___BITScT( psttBoth , 0xd59 ) ;
        TN( tr , psttBoth ) ;
        tr.bConvertible = bConvertible ;
        ether.delF( tinP , psttBoth ) ;
        return tr ;
    }
    else
    {
        _IO_
        TN( tr , "" ) ;
        return tr ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400b.textc.operator_plus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400c.textc.textc BEGIN
#define DDNAME       "3func.3600400c.textc.textc"
#define DDNUMB      (countT)0x3600400c
#define IDFILE      (countT)0xe0e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8b20104.1.1.0.html\"\>8b20104:  WAKEsHOW( "example.simplest.func.105000c.textC.textC" )\</A\>
equivalent in function to etherC::strFromF
arguments
 etherP
 valueP
 flagsFormatP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001004c.flFORMAT!||
 csP
  minimum length of the final string
  if more strokes are needed to represent the number, psttP will be longer than csP
 radixP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const sCountC& valueP , const flagsT flagsFormatP , const countT csP , const countT radixP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400c.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400d.textc.textc BEGIN
#define DDNAME       "3func.3600400d.textc.textc"
#define DDNUMB      (countT)0x3600400d
#define IDFILE      (countT)0xe0f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9b20104.1.1.0.html\"\>9b20104:  WAKEsHOW( "example.simplest.func.105000d.textC.textC" )\</A\>
equivalent in function to etherC::strFromF
arguments
 etherP
 valueP
 flagsFormatP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001004c.flFORMAT!||
 csP
  minimum length of the final string
  if more strokes are needed to represent the number, psttP will be longer than csP
 radixP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT valueP , const flagsT flagsFormatP , const countT csP , const countT radixP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400d.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400e.textc.textc BEGIN
#define DDNAME       "3func.3600400e.textc.textc"
#define DDNUMB      (countT)0x3600400e
#define IDFILE      (countT)0xe10


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ab20104.1.1.0.html\"\>ab20104:  WAKEsHOW( "example.simplest.func.105000e.textC.textC" )\</A\>
equivalent in function to etherC::strFromF
arguments
 etherP
 valueP
 flagsFormatP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001004c.flFORMAT!||
 csP
  minimum length of the final string
  if more strokes are needed to represent the number, psttP will be longer than csP
  - 1 : special value that results in a string long enough to hold the maximum value of valueP, which is -1
 radixP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const measureT valueP , const flagsT flagsFormatP , const countT csP , const countT radixP , const countT idcPointP , const countT cPrecisionP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , idcPointP , cPrecisionP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400e.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400f.textc.textc BEGIN
#define DDNAME       "3func.3600400f.textc.textc"
#define DDNUMB      (countT)0x3600400f
#define IDFILE      (countT)0xe11


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.105000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e830104.1.1.0.html\"\>e830104:  WAKEsHOW( "example.simplest.func.105000f.textC.textC" )\</A\>
arguments
 etherP
 pcValueP
 flagsFormatP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001004c.flFORMAT!||
 csP
  minimum length of the final string
  if more strokes are needed to represent the number, psttP will be longer than csP
 radixP
 psttSeparatorP
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT* const pcValueP , const flagsT flagsFormatP , const countT csP , const countT radixP , const strokeS* const psttSeparatorP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , pcValueP , flagsFormatP , csP , radixP , psttSeparatorP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600400f.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004010.textc.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.36004010.textc.operator_ostextt_ptr"
#define DDNUMB      (countT)0x36004010
#define IDFILE      (countT)0xe12


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f830104.1.1.0.html\"\>f830104:  WAKEsHOW( "example.simplest.func.1050010.textC.operator_osTextT_ptr" )\</A\>
evaluates to a pointer to a null terminated osTextT string
this string is only calculated once for each textC object
it is not calculated until it is needed
*/
/**/

/*1*/textC::operator osTextT*( voidT )/*1*/
{
    TINSL ;
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
        __Z( bConvertible ) ;
        if( ether ) return 0 ;
    }

    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    if( !postMe ) { ether.strMakeF( tinP , LF , postMe , psttMe ) ; ___BITScT( postMe , 0xd5b ) ; }
    return postMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004010.textc.operator_ostextt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004011.textc.operator_untextt_ptr BEGIN
#define DDNAME       "3func.36004011.textc.operator_untextt_ptr"
#define DDNUMB      (countT)0x36004011
#define IDFILE      (countT)0xe13


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0930104.1.1.0.html\"\>0930104:  WAKEsHOW( "example.simplest.func.1050011.textC.operator_unTextT_ptr" )\</A\>
evaluates to a pointer to a null terminated unTextT string
this string is only calculated once for each textC object
it is not calculated until it is needed
*/
/**/

/*1*/textC::operator unTextT*( voidT )/*1*/
{
    TINSL ;
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
        __Z( bConvertible ) ;
        if( ether ) return 0 ;
    }

    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    if( !puntMe ) { ether.strMakeF( tinP , LF , puntMe , psttMe ) ; ___BITScT( puntMe , 0xd5c ) ; }
    return puntMe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004011.textc.operator_untextt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004012.textc.operator_assign BEGIN
#define DDNAME       "3func.36004012.textc.operator_assign"
#define DDNUMB      (countT)0x36004012
#define IDFILE      (countT)0xe14


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1930104.1.1.0.html\"\>1930104:  WAKEsHOW( "example.simplest.func.1050012.textC.operator_assign" )\</A\>
*/
/**/

/*1*/textC& textC::operator =( TPpARAM )/*1*/
{
    TPpARAMmAP
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tP.loadVTextValueIfF( tinP ) ;
    loadVTextValueIfF( tinP ) ;
    ether.delF( tinP , puntMe ) ;
    ether.delF( tinP , postMe ) ;
    ether.delF( tinP , psttMe ) ;
    ether.strMakeF( tinP , LF , psttMe , tP.psttMe ) ;  ___BITScT( psttMe , 0xd5d ) ;
    bConvertible = tP.bConvertible ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004012.textc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004013.textc.operator_incrementby BEGIN
#define DDNAME       "3func.36004013.textc.operator_incrementby"
#define DDNUMB      (countT)0x36004013
#define IDFILE      (countT)0xe15


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050013.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/textC& textC::operator +=( TPpARAM )/*1*/
{
    TPpARAMmAP
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tP.loadVTextValueIfF( tinP ) ;
    loadVTextValueIfF( tinP ) ;
    *this = *this + tP ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004013.textc.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004015.textc.textc BEGIN
#define DDNAME       "3func.36004015.textc.textc"
#define DDNUMB      (countT)0x36004015
#define IDFILE      (countT)0xe16


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050015.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const nicNameC& valueP , const flagsT flagsFormatP , const countT csP , const countT radixP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004015.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004016.textc.textc BEGIN
#define DDNAME       "3func.36004016.textc.textc"
#define DDNUMB      (countT)0x36004016
#define IDFILE      (countT)0xe17


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050016.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT cbBlobP , const byteT* const pbBlobP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    //IN_C
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , pbBlobP , cbBlobP ) ;  ___BITScT( psttMe , 0xd5e ) ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004016.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004017.textc.textc BEGIN
#define DDNAME       "3func.36004017.textc.textc"
#define DDNUMB      (countT)0x36004017
#define IDFILE      (countT)0xe18


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050017.1.0.html\"\>definition\</A\>
arguments
 idP
  must not be 0
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001019b.ifcIDtEXTgEN!||
 tinP
*/
/**/

/*1*/textC::textC( const countT idP , tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
        __Z( idP ) ;
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    switch( idP )
    {
        case ifcIDtEXTgEN_UNIQUE  :
        {
            ether.strUniqueF( tinP , psttMe ) ; ___( psttMe ) ;
            break ;
        }
        case ifcIDtEXTgEN_TIMEnOW :
        {
            ZE( countT , timeN1 ) ;
            ZE( sCountT , timeN2 ) ;
            ether.osTimeNowF( tinP , timeN1 , timeN2 ) ;
            ether.strFromTimeF( tinP , psttMe , timeN1 , timeN2 ) ; ___( psttMe ) ;
            break ;
        }
        case ifcIDtEXTgEN_TIMEnOWfOREIGN :
        {
            ZE( countT , timeN1 ) ;
            ZE( sCountT , timeN2 ) ;
            ether.osTimeNowF( tinP , timeN1 , timeN2 ) ;

            ZE( countT , ms ) ;
            ZE( countT , ss ) ;
            ZE( countT , mm ) ;
            ZE( countT , hh ) ;
            ZE( countT , d ) ;
            ZE( countT , m ) ;
            ZE( sCountT , y ) ;
            ZE( countT , dow ) ;
            ether.osTimeToOldTimeF( tinP , ms , ss , mm , hh , d , m , y , dow , timeN1 , timeN2 , flOStIMEtOoLDtIME_null ) ;

            ether.strMakeF( tinP , LF , psttMe , 0 , TUCK ) ; ___( psttMe ) ;
            ether.strFuseF( tinP , psttMe , TF4(y+1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN|flFORMAT_NObASE,4,0xa) ) ;
            ether.strFuseF( tinP , psttMe , TF4(m+1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN|flFORMAT_NObASE,2,0xa) ) ;
            ether.strFuseF( tinP , psttMe , TF4(d+1,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN|flFORMAT_NObASE,2,0xa) ) ;
            ether.strFuseF( tinP , psttMe , T("@") ) ;
            ether.strFuseF( tinP , psttMe , TF4(hh,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN|flFORMAT_NObASE,2,0xa) ) ;
            ether.strFuseF( tinP , psttMe , TF4(mm,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE|flFORMAT_FOREIGN|flFORMAT_NObASE,2,0xa) ) ;

            break ;
        }
        case ifcIDtEXTgEN_TIMEnOWdELTArESET :
        case ifcIDtEXTgEN_TIMEnOWdELTA :
        {
            ZE( countT , timeD1 ) ;
            ZE( sCountT , timeD2 ) ;
            ether.osTimeNowF( tinP , timeD1 , timeD2 ) ;
            timeS now( timeD1 , timeD2 ) ;

            if( idP == ifcIDtEXTgEN_TIMEnOWdELTArESET ) tinP.timeTraceWoth = tinP.timeTraceLath = now ;

            ether.osTimeSubtractF( tinP , timeD1 , timeD2 , tinP.timeTraceLath.time1 , tinP.timeTraceLath.time2 ) ;
            tinP.timeTraceLath = now ;

            ether.strFromTimeF( tinP , psttMe , timeD1 , timeD2 ) ; ___( psttMe ) ;
            break ;
        }
        default: { __( idP ) ; break ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004017.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004018.textc.textc BEGIN
#define DDNAME       "3func.36004018.textc.textc"
#define DDNUMB      (countT)0x36004018
#define IDFILE      (countT)0xe19


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/textC::textC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const idPortTimeC& valueP , const flagsT flagsFormatP , const countT csP , const countT radixP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
flags( flagsP ) ,
ether( etherC::etTextIF( tinP ) ) ,
psttMe( 0 ) ,
postMe( 0 ) ,
puntMe( 0 ) ,
psttLower( 0 ) ,
bConvertible( 1 )
{
    IFbEcAREFUL    
    {
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    ether.strFromF( tinP , psttMe , valueP , flagsFormatP , csP , radixP ) ; ___( psttMe ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004018.textc.textc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004019.textc.operator_equals BEGIN
#define DDNAME       "3func.36004019.textc.operator_equals"
#define DDNUMB      (countT)0x36004019
#define IDFILE      (countT)0xe1a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT textC::operator ==( TPpARAM )/*1*/
{
    TPpARAMmAP
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tP.loadVTextValueIfF( tinP ) ;
    loadVTextValueIfF( tinP ) ;
    boolT bEquals = psttMe && tP.psttMe ? !ether.strCompareF( tinP , psttMe , tP.psttMe ) : 0 ;

    return bEquals ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.36004019.textc.operator_equals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401a.textc.operator_notequals BEGIN
#define DDNAME       "3func.3600401a.textc.operator_notequals"
#define DDNUMB      (countT)0x3600401a
#define IDFILE      (countT)0xe1b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT textC::operator !=( TPpARAM )/*1*/
{
    TPpARAMmAP
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tP.loadVTextValueIfF( tinP ) ;
    loadVTextValueIfF( tinP ) ;
    boolT bNotEquals = psttMe && tP.psttMe ? !!ether.strCompareF( tinP , psttMe , tP.psttMe ) : 0 ; //DO NOT REMOVE "!!" TO GET A '-' FUNCTION; DEFINE AN OPERATOR SUBTRACT IF NEED THAT

    return bNotEquals ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401a.textc.operator_notequals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401b.textc.loadvtextvalueiff BEGIN
#define DDNAME       "3func.3600401b.textc.loadvtextvalueiff"
#define DDNUMB      (countT)0x3600401b
#define IDFILE      (countT)0xe1c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT textC::loadVTextValueIfF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( ( !psttMe || !psttMe->idAdam ) && F(flags) & flTEXTc_vTextC )
    {
        vTextC* pvMe = (vTextC*)this ;
        if( pvMe->psFeaturesVT ) *this = T("")+SADAM(pvMe->psFeaturesVT) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401b.textc.loadvtextvalueiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401c.textc.psttlowerf BEGIN
#define DDNAME       "3func.3600401c.textc.psttlowerf"
#define DDNUMB      (countT)0x3600401c
#define IDFILE      (countT)0xe1d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0b20104.1.1.0.html\"\>0b20104:  WAKEsHOW( "example.simplest.func.1050004.textC.operator_strokeS_ptr" )\</A\>
evaluates to a pointer to a strokeS string
*/
/**/

/*1*/strokeS* textC::psttLowerF( tinS& tinP ) /*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    if( !psttLower ) { ether.strConvertToLowerCaseF( tinP , psttLower , psttMe ) ; ___( psttLower ) ; }
    return psttLower ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401c.textc.psttlowerf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401d.textc.operator_assign BEGIN
#define DDNAME       "3func.3600401d.textc.operator_assign"
#define DDNUMB      (countT)0x3600401d
#define IDFILE      (countT)0xe1e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1050012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1930104.1.1.0.html\"\>1930104:  WAKEsHOW( "example.simplest.func.1050012.textC.operator_assign" )\</A\>
*/
/**/

/*1*/textC& textC::operator =( const strokeS* const psttP )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return *this ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    loadVTextValueIfF( tinP ) ;
    ether.delF( tinP , puntMe ) ;
    ether.delF( tinP , postMe ) ;
    ether.delF( tinP , psttMe ) ;
    ether.strMakeF( tinP , LF , psttMe , psttP ) ;  ___BITScT( psttMe , 0xd5d ) ;
    bConvertible = 1 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36004* : 3func.3600401d.textc.operator_assign END
