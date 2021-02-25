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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36013* : 3func.36013001.textidfilec.textidfilec BEGIN
#define DDNAME       "3func.36013001.textidfilec.textidfilec"
#define DDNUMB      (countT)0x36013001
#define IDFILE      (countT)0xf26


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1170001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 etherP
 postP
*/
/**/
/*1*/textIdFileC::textIdFileC( tinS& tinP , const osTextT* const postP )/*1*/ :
textC( tinP , TAG( TAGiDnULL ) , flTEXTc_null , postP )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( psttMe ) ;
        if( ether ) return ;
    }

    _IO_
    ZE( strokeS* , psttAll ) ;
    ZE( osTextT* , postMe ) ;
    ether.strMakeF( tinP , LF , postMe , psttMe ) ; ___( postMe ) ;
    ether.delF( tinP , psttMe ) ;
    ifFileNameC iffn( tinP , ether , postMe ) ;
    ether.strMakeF( tinP , LF , psttAll , T(iffn) ) ; ___( psttAll ) ;
    ether.delF( tinP , postMe ) ;

    ZE( strokeS* , psttw ) ;
    countT idf = 1 ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    if( postP[ 1 ] == ':' ) //U: VERIFY THAT THIS IS A CORRECT TEST OF WHETHER THE NAME IS QUATAG( TAGiDnULL )ED
    {
        ether.strSubstringF( tinP , psttw , idf , sttq , T("/dictionary/") , psttAll ) ; ___( psttw ) ;
        ether.delF( tinP , psttw ) ;
    }
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C('.') , psttAll ) ; ___( psttw ) ;
    ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttMe , idf , sttq , S1C('.') , psttAll ) ; ___( psttMe ) ;
    ether.delF( tinP , psttAll ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36013* : 3func.36013001.textidfilec.textidfilec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36013* : 3func.36013002.textidfilec.textidfilec BEGIN
#define DDNAME       "3func.36013002.textidfilec.textidfilec"
#define DDNUMB      (countT)0x36013002
#define IDFILE      (countT)0xf27


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1170002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
assumption: raw code is found in a directory named "... /dictionary/"
arguments
 etherP
 psttP
*/
/**/
/*1*/textIdFileC::textIdFileC( tinS& tinP , const strokeS* const psttP )/*1*/ :
textC( tinP , TAG( TAGiDnULL ) , flTEXTc_null , psttP )
{
    IFbEcAREFUL
    {
        if( ether ) return ;
        __Z( psttMe ) ;
        if( ether ) return ;
    }

    _IO_
    ZE( strokeS* , psttw ) ;
    countT idf = 1 ;
    strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , T("/dictionary/") , psttMe ) ; ___( psttw ) ;
    ether.delF( tinP , psttw ) ;
    ether.strSubstringF( tinP , psttw , idf , sttq , S1C('.') , psttMe ) ; ___( psttw ) ;
    ether.delF( tinP , psttw ) ;
    strokeS* psttd = psttMe ;
    psttMe = 0 ;
    ether.strSubstringF( tinP , psttMe , idf , sttq , S1C('.') , psttd ) ; ___( psttMe ) ;
    ether.delF( tinP , psttd ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36013* : 3func.36013002.textidfilec.textidfilec END
