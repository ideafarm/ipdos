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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d001.iffilenamec.iffilenamec BEGIN
#define DDNAME       "3func.3600d001.iffilenamec.iffilenamec"
#define DDNUMB      (countT)0x3600d001
#define IDFILE      (countT)0xea5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10f0001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d200104.1.1.0.html\"\>d200104:  WAKEsHOW( "example.simplest.func.10f0001.ifFileNameC.ifFileNameC" )\</A\>
postP: a file name, in os format
 example: "\\my.dir\\my.file"  (implies the ifo file name "///d/my.dir/my/file")
 can be ze
 during construction, the equivalent city file name is calculated
 if unqualified, no change is made
  is assumed to be unqualified if there is no colon (:) in the second position
  unqualified names must not contain backslash (\)
arguments
 thirdP
 postP
*/
/**/

/*1*/ifFileNameC::ifFileNameC( tinS& tinP , thirdC& thirdP , const osTextT* const postP )/*1*/ :
post( 0 ) ,
third( thirdP )
{
    IFbEcAREFUL    
    {
        if( third ) return ;
        __Z( postP ) ;
        if( third ) return ;
    }

    _IO_
    {
        if( postP[ 1 ] == ':' )
        {
            __( postP[ 2 ] != '\\' ) ;

            osTextT postPrefix[] = { '/' , '/' , '/' , *postP , '/' , 0 } ;
            OStEXT(   ostot , 0x200 )
            OStEXTAK( ostot , postPrefix )            
            OStEXTA(  ostot , postP + 3 )
            third.c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostot , '\\' , '/' ) ;

            const countT costa = ostot.costF() + 1 ;
            third.newF( tinP , LF , post , costa ) ; ___( post ) ;
            thirdC::c_strncpyIF( tinP , post , ostot , costa ) ;
        }
        else if( postP[ 0 ] == '\\' && postP[ 1 ] == '\\' )
        {
            osTextT postPrefix[] = { '/' , '/' , '/' , '/' , 0 } ;
            OStEXT(   ostot , 0x200 )
            OStEXTAK( ostot , postPrefix )            
            OStEXTA(  ostot , postP + 2 )
            third.c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostot , '\\' , '/' ) ;

            const countT costa = ostot.costF() + 1 ;
            third.newF( tinP , LF , post , costa ) ; ___( post ) ;
            thirdC::c_strncpyIF( tinP , post , ostot , costa ) ;
        }
        else
        {
            const countT costa = third.c_strlenIF( tinP , postP ) + 1 ;
            third.newF( tinP , LF , post , costa ) ; ___( post ) ;
            thirdC::c_strncpyIF( tinP , post , postP , costa ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d001.iffilenamec.iffilenamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d002.iffilenamec.dt_iffilenamec BEGIN
#define DDNAME       "3func.3600d002.iffilenamec.dt_iffilenamec"
#define DDNUMB      (countT)0x3600d002
#define IDFILE      (countT)0xea6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10f0002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1300104.1.1.0.html\"\>1300104:  WAKEsHOW( "example.simplest.func.10f0002.ifFileNameC.dt_ifFileNameC" )\</A\>
*/
/**/

/*1*/ifFileNameC::~ifFileNameC( voidT )/*1*/
{
    TINSL
    _IO_
    third.delF( tinP , post ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d002.iffilenamec.dt_iffilenamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d003.iffilenamec.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.3600d003.iffilenamec.operator_ostextt_ptr"
#define DDNUMB      (countT)0x3600d003
#define IDFILE      (countT)0xea7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10f0003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2300104.1.1.0.html\"\>2300104:  WAKEsHOW( "example.simplest.func.10f0003.ifFileNameC.operator_osTextT_ptr" )\</A\>
returns a file name in city format
can return 0
this function is very efficient; no conversion is done
*/
/**/

/*1*/ifFileNameC::operator osTextT*( voidT )/*1*/
{
    //IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    return post ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600d* : 3func.3600d003.iffilenamec.operator_ostextt_ptr END
