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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3510b* : 3func.3510b00b.selectc.enumerateif BEGIN
#define DDNAME       "3func.3510b00b.selectc.enumerateif"
#define DDNUMB      (countT)0x3510b00b
#define IDFILE      (countT)0xb69


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
args
 tinP
 cNameP
  must not be 0 or null length 
  the name of the field
*/
/**/

/*1*/flagsT selectC::enumerateIF( tinS& tinP , datumS*& pDatumP , const countT cNameP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __NZ( pDatumP ) ;
        __Z( cNameP ) ; //U::IF NO FIELD IS SPECIFIED THEN ENUMERATE ALL OF THE FIELD NAMES INDEXED IN THE CURRENT PUSE
        if( POOP ) return flagsRC ;
    }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    flagsRC = listC::walkEnumerateIF( tinP , pDatumP , cNameP ) ; ___( pDatumP ) ;

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3510b* : 3func.3510b00b.selectc.enumerateif END
