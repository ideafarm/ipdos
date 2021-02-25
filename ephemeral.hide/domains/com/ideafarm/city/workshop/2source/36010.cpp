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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36010* : 3func.36010001.batonboxc.batonboxc BEGIN
#define DDNAME       "3func.36010001.batonboxc.batonboxc"
#define DDNUMB      (countT)0x36010001
#define IDFILE      (countT)0xead


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1130001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8200104.1.1.0.html\"\>8200104:  WAKEsHOW( "example.simplest.func.1130001.batonBoxC.batonBoxC" )\</A\>
this function will make all directories specified in psttP, if necessary
arguments
 etherP
 psttP
  a box name to use as the object of contention
  if ze, defaults to "///ideafarm/ephemeral/domains/com/ideafarm/city/batonBox"
  example: "///ideafarm/ephemeral/domains/my.domain/my.file"
*/
/**/
/*1*/batonBoxC::batonBoxC( tinS& tinP , etherC& etherP , const strokeS* const psttP ) :/*1*/
ether( etherP ) ,
handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE )
{
    _IO_
    ZE( strokeS* , pstt ) ;
    if( psttP ) { ether.diskMapFileNameF( tinP , pstt , psttP ) ; ___( pstt ) ; }
    else        { ether.diskMapFileNameF( tinP , pstt , T("///ideafarm/ephemeral/domains/com/ideafarm/city/batonBox") ) ; ___( pstt ) ; }

    ether.diskMakeDirIfNeededF( tinP , pstt ) ;

    ZE( countT , flagsResult ) ;
    ether.fileOpenF( tinP , handle , flagsResult , pstt , ifcOPENaCCESS_WR , 0 , 0 , ifcOPENhOW_nCeR ) ;
    ether.delF( tinP , pstt ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36010* : 3func.36010001.batonboxc.batonboxc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36010* : 3func.36010002.batonboxc.dt_batonboxc BEGIN
#define DDNAME       "3func.36010002.batonboxc.dt_batonboxc"
#define DDNUMB      (countT)0x36010002
#define IDFILE      (countT)0xeae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1130002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9200104.1.1.0.html\"\>9200104:  WAKEsHOW( "example.simplest.func.1130002.batonBoxC.dt_batonBoxC" )\</A\>
*/
/**/
/*1*/batonBoxC::~batonBoxC( voidT )/*1*/
{
    TINSL
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36010* : 3func.36010002.batonboxc.dt_batonboxc END
