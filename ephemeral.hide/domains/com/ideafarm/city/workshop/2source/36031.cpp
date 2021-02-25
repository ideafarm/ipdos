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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031002.recdirc.dt_recdirc BEGIN
#define DDNAME       "3func.36031002.recdirc.dt_recdirc"
#define DDNUMB      (countT)0x36031002
#define IDFILE      (countT)0x10cd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
\<A HREF=\"5.1470002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/recDirC::~recDirC( voidT )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        //ALWAYS WANT TO DO DT, TO AVOID LEAKS. if( ether ) return ;
    }

    if( pbSoul ) ether.delF( tinP , pbSoul ) ;
    ether.delF( tinP , psttName ) ;
    ether.delF( tinP , pbBlob ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031002.recdirc.dt_recdirc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031003.recdirc.recdirc BEGIN
#define DDNAME       "3func.36031003.recdirc.recdirc"
#define DDNUMB      (countT)0x36031003
#define IDFILE      (countT)0x10ce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1470003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/recDirC::recDirC( tinS& tinP , etherC& etherP , const countT idPortP , const nicNameC nicNameP , const flagsT flagsP , const strokeS* const psttNameP , const byteT* const pbBlobP , const countT cbBlobP )/*1*/ :
ether( etherP ) ,
pbSoul( 0 ) ,
idPort( idPortP ) ,
nicName( nicNameP ) ,
flags( flagsP ) ,
psttName( 0 ) ,
pbBlob( 0 ) ,
cbBlob( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __( cbBlobP && !pbBlobP ) ;
        FV( flRECdIRc , flagsP ) ;
        if( ether ) return ;
    }

    if( psttNameP ) { ether.strMakeF( tinP , LF , psttName , psttNameP ) ; ___( psttName ) ; }

    if( pbBlobP ) cbBlob = cbBlobP ? cbBlobP : ether.strBodyLengthF( tinP , pbBlobP ) ;
    if( cbBlob )
    {
        ether.newF( tinP , LF , pbBlob , cbBlob ) ; ___( pbBlob ) ;
        ether.memCopyF( tinP , pbBlob , pbBlobP , cbBlob ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031003.recdirc.recdirc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031004.recdirc.recdirc BEGIN
#define DDNAME       "3func.36031004.recdirc.recdirc"
#define DDNUMB      (countT)0x36031004
#define IDFILE      (countT)0x10cf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1470004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/recDirC::recDirC( tinS& tinP , etherC& etherP , const byteT* const pbSoulP )/*1*/ :
ether( etherP ) ,
pbSoul( 0 ) ,
idPort( 0 ) ,
nicName( 0 ) ,
flags( 0 ) ,
psttName( 0 ) ,
pbBlob( 0 ) ,
cbBlob( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( pbSoulP ) ;
        if( ether ) return ;
    }

    _IO_
    ctF( tinP , pbSoulP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031004.recdirc.recdirc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031005.recdirc.soulf BEGIN
#define DDNAME       "3func.36031005.recdirc.soulf"
#define DDNUMB      (countT)0x36031005
#define IDFILE      (countT)0x10d0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$soulF.0.html\"\>instances\</A\>
\<A HREF=\"5.1470005.1.0.html\"\>definition\</A\>
creates a length prefixed string of bytes that can be used to construct an identical recDirC object
arguments
 tinP
 pbP
  must be 0
*/
/**/
/*1*/voidT recDirC::soulF( tinS& tinP , byteT*& pbP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __NZ( pbP ) ;
        if( ether ) return ;
    }

    countT cbs = sizeof( countT ) * 4 + sizeof( boolT ) + processGlobal1I.cb_nicNameC_ + ( psttName ? sizeof( strokeS ) * ( CSpREFIX + psttName->idAdam ) : 0 ) + cbBlob ;
    ether.newF( tinP , LF , pbP , cbs ) ; ___( pbP ) ;

    if( pbP )
    {
        byteT* pbc = pbP ;
         *(countT*)pbc = cbs - sizeof( countT ) ; pbc += sizeof( countT  ) ;
         *(countT*)pbc = idPort                 ; pbc += sizeof( countT  ) ;
         *(countT*)pbc = flags                  ; pbc += sizeof( countT  ) ;
         *(countT*)pbc = cbBlob                 ; pbc += sizeof( countT  ) ;
        *(nicNameC*)pbc = nicName                 ; pbc += processGlobal1I.cb_nicNameC_ ;
          *(boolT*)pbc = !!psttName             ; pbc += sizeof( boolT   ) ;

        if( psttName )
        {
            countT cbn = sizeof( strokeS ) * ( CSpREFIX + psttName->idAdam ) ;
            ether.memCopyF( tinP , (byteT*)pbc , (byteT*)psttName , cbn ) ; pbc += cbn ;
        }

        if( cbBlob ) ether.memCopyF( tinP , (byteT*)pbc , pbBlob , cbBlob ) ; pbc += cbBlob ;

        __( pbc - pbP > cbs ) ;
        __( pbc - pbP < cbs ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031005.recdirc.soulf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031006.recdirc.operator_equal BEGIN
#define DDNAME       "3func.36031006.recdirc.operator_equal"
#define DDNUMB      (countT)0x36031006
#define IDFILE      (countT)0x10d1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1470006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT recDirC::operator ==( const recDirC& drP ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    boolT bSame =

        idPort   == drP.idPort   &&
        nicName   == drP.nicName   &&
        flags    == drP.flags    &&
        cbBlob   == drP.cbBlob   &&
        !!pbBlob == !!drP.pbBlob

    ;

    if( psttName ) bSame &= drP.psttName && !ether.strCompareF( tinP , psttName , drP.psttName ) ;
    else           bSame &= !drP.psttName ;

    if( bSame && pbBlob ) bSame &= !ether.memCompareF( tinP , pbBlob , drP.pbBlob , cbBlob ) ;

    return bSame ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031006.recdirc.operator_equal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031007.recdirc.operator_notequal BEGIN
#define DDNAME       "3func.36031007.recdirc.operator_notequal"
#define DDNUMB      (countT)0x36031007
#define IDFILE      (countT)0x10d2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1470007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT recDirC::operator !=( const recDirC& drP ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    return !( operator ==( drP ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031007.recdirc.operator_notequal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031008.recdirc.strokef BEGIN
#define DDNAME       "3func.36031008.recdirc.strokef"
#define DDNUMB      (countT)0x36031008
#define IDFILE      (countT)0x10d3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//
/*
 U: CONJ: THIS SNIPPET IS GARBAGE
 countT   idPort ;
 nicNameC  nicName ;
 flagsT   flags ;
 strokeS* psttName ;
 byteT*   pbBlob ;
 countT   cbBlob ;
*/

/*
\<A HREF=\"6.$strokeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1470008.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT recDirC::strokeF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    ether.strokeF( tinP , TF1(idPort)+T(" ")+TF1(nicName)+T(" ")+TF1(flags) ) ;    
    if( psttName ) ether.strokeF( tinP , T(" \"")+T(psttName)+T("\"") ) ;    
    if( pbBlob && cbBlob ) ether.strokeF( tinP , T(" ")+TF1(cbBlob)+T(" \"")+T(pbBlob)+T("\"") ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031008.recdirc.strokef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031009.recdirc.operator_minus BEGIN
#define DDNAME       "3func.36031009.recdirc.operator_minus"
#define DDNUMB      (countT)0x36031009
#define IDFILE      (countT)0x10d4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1470009.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/sCountC recDirC::operator -( const recDirC& drP ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return sCountC( tinP , ether ) ;
    }

    sCountC scSgn1( tinP , ether ,     &idPort , SB * ( sizeof     idPort + processGlobal1I.cb_nicNameC_ ) ) ;
    sCountC scSgn2( tinP , ether , &drP.idPort , SB * ( sizeof drP.idPort + processGlobal1I.cb_nicNameC_ ) ) ;

    return scSgn1 - scSgn2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.36031009.recdirc.operator_minus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100a.recdirc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.3603100a.recdirc.operator_bytet_ptr"
#define DDNUMB      (countT)0x3603100a
#define IDFILE      (countT)0x10d5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.147000a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/recDirC::operator byteT*( voidT )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    if( !pbSoul ) soulF( tinP , pbSoul ) ;

    return pbSoul ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100a.recdirc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100b.recdirc.ctf BEGIN
#define DDNAME       "3func.3603100b.recdirc.ctf"
#define DDNUMB      (countT)0x3603100b
#define IDFILE      (countT)0x10d6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctF.0.html\"\>instances\</A\>
\<A HREF=\"5.147000c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT recDirC::ctF( tinS& tinP , const byteT* const pbSoulP )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( pbSoulP ) ;
        if( ether ) return ;
    }

    const byteT* pbc = pbSoulP ;
    const countT cbs = sizeof( countT ) + *(countT*)pbc ; pbc += sizeof( countT ) ;
    idPort      =  *(countT*)pbc ; pbc += sizeof( countT  ) ;
    flags       =  *(countT*)pbc ; pbc += sizeof( countT  ) ;
    cbBlob      =  *(countT*)pbc ; pbc += sizeof( countT  ) ;
    nicName      = *(nicNameC*)pbc ; pbc += processGlobal1I.cb_nicNameC_ ;
    boolT bName =   *(boolT*)pbc ; pbc += sizeof( boolT   ) ;

    if( bName )
    {
        strokeS* psttn = (strokeS*)pbc ;
        ether.strMakeF( tinP , LF , psttName , psttn ) ; ___( psttName ) ;
        pbc += sizeof( strokeS ) * ( CSpREFIX + psttn->idAdam ) ;
    }

    if( cbBlob )
    {
        ether.newF( tinP , LF , pbBlob , cbBlob ) ; ___( pbBlob ) ;
        ether.memCopyF( tinP , pbBlob , pbc , cbBlob ) ;
        pbc += cbBlob ;
    }

    __( pbc - pbSoulP > cbs ) ;
    __( pbc - pbSoulP < cbs ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100b.recdirc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100c.recdirc.recdirc BEGIN
#define DDNAME       "3func.3603100c.recdirc.recdirc"
#define DDNUMB      (countT)0x3603100c
#define IDFILE      (countT)0x10d7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.147000d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/recDirC::recDirC( tinS& tinP , etherC& etherP , socketC& sockP )/*1*/ :
ether( etherP ) ,
pbSoul( 0 ) ,
idPort( 0 ) ,
nicName( 0 ) ,
flags( 0 ) ,
psttName( 0 ) ,
pbBlob( 0 ) ,
cbBlob( 0 )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_

    ZE( byteT* , pbSoulIn ) ;            
    SOULfROMsOCK( ether , pbSoulIn , sockP ) ;
    ctF( tinP , pbSoulIn ) ;
    ether.delF( tinP , pbSoulIn ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36031* : 3func.3603100c.recdirc.recdirc END
