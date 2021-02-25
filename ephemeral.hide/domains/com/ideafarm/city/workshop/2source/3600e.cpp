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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e001.osfilenamec.osfilenamec BEGIN
#define DDNAME       "3func.3600e001.osfilenamec.osfilenamec"
#define DDNUMB      (countT)0x3600e001
#define IDFILE      (countT)0xea8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1100001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5300104.1.1.0.html\"\>5300104:  WAKEsHOW( "example.simplest.func.1100001.osFileNameC.osFileNameC" )\</A\>
postP: a file name in mapped city format, or an unqualified name (no slashes)
 example: "///c" "/my.dir/my.file"
 example: "///c" "/my.dir/"
 example: "///c" "/"
 can be ze
arguments
 thirdP
 postP
*/
/**/

/*1*/osFileNameC::osFileNameC( tinS& tinP , thirdC& thirdP , const osTextT* const postP )/*1*/ :
post( 0 ) ,
third( thirdP )
{
    IFbEcAREFUL    
    {
        if( third ) return ;
        __Z( postP ) ;
        if( third ) return ;
        __Z( *postP ) ;
        if( third ) return ;
        boolT bFail = postP[ 1 ] == ':' || thirdC::c_strstrIF( tinP , postP , "\\" ) ;
        if( bFail && tinP.pEther )
            etherC::etRockIF( tinP ).traceF( tinP , T("osFileNameC bad parameter [postP]: ")+T(postP) ) ;
        __NZ( bFail ) ;
        if( third ) return ;
    }

    _IO_
    if( postP )
    {
        boolT bHose  = postP == third.c_strstrIF( tinP , postP , "/hose/" ) ;
        boolT bBaton = postP == third.c_strstrIF( tinP , postP , "/baton/" ) ;
        boolT bShort = postP[ 0 ] != '/' ;
        boolT bNetbios = 1 ;
             if( bHose  ) { __( !postP[ 6 ] ) ; }
        else if( bBaton ) { __( !postP[ 7 ] ) ; }
        else if( !bShort )
        {
            __( postP[ 0 ] != '/' ) ;
            __( postP[ 1 ] != '/' ) ;
            __( postP[ 2 ] != '/' ) ;
            if( postP[ 3 ] != '/' )
            {
                __( postP[ 4 ] != '/' ) ;
                bNetbios = 0 ;
            }
        }

        OStEXT( ostot , 0x200 )
        if( bHose )
        {
            #ifdef __OS2__
                OStEXTAK( ostot  , "/pipe" ) ;
                OStEXTA( ostot  , postP ) ;
            #elif defined( __NT__ )
                OStEXTAK( ostot  , "//." ) ;
                OStEXTA( ostot  , postP ) ;
            #endif
        }
        else if( bBaton )
        {
            OStEXTAK( ostot  , "/sem32/" ) ;
            OStEXTA( ostot  , postP + 1 ) ; //19971127.1208: "+ 2" -> "+ 1" TO FIX NT "\sem32\aton\bhpc"
        }
        else if( bShort ) OStEXTA( ostot  , postP )
        else if( bNetbios )
        {
            osTextT postPrefix[] = { '/' , 0 } ;
            OStEXTA( ostot  , postPrefix ) ;
            OStEXTA( ostot  , postP + 3 ) ;
        }
        else
        {
            osTextT postPrefix[] = { postP[ 3 ] , ':' , '/' , 0 } ;
            OStEXTA( ostot  , postPrefix ) ;
            OStEXTA( ostot  , postP + 5 ) ;
        }

        //CONJ: DON'T REALLY NEED THIS (I HOPE): while( third.c_strstrIF( tinP , post , "//" ) ) { third.c_zReplaceF( tinP , post , "//" , "/$/" ) ; ___( post ) ; }
        third.c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostot , '/' , '\\' ) ;
        #if defined( __NT__ )
            if( bBaton ) third.c_zReplaceIF( tinP , (osTextT*)(const osTextT*)ostot , '\\' , '$' ) ;
        #endif

        //U::MAKES 620 STOP AFTER MAKING WOTH HOVER FILE: if( postP[ strlen( postP ) - 1 ] == '/' ) ostot.truncateF( ostot.costF() - 1 ) ; //20120319: ENABLED THIS

        third.newF( tinP , LF , post , ostot.costF() + 1 ) ; ___( post ) ;
        third.c_memcpyIF( tinP , post , ostot , ostot.costF() + 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e001.osfilenamec.osfilenamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e002.osfilenamec.dt_osfilenamec BEGIN
#define DDNAME       "3func.3600e002.osfilenamec.dt_osfilenamec"
#define DDNUMB      (countT)0x3600e002
#define IDFILE      (countT)0xea9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1100002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6300104.1.1.0.html\"\>6300104:  WAKEsHOW( "example.simplest.func.1100002.osFileNameC.dt_osFileNameC" )\</A\>
*/
/**/

/*1*/osFileNameC::~osFileNameC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e002.osfilenamec.dt_osfilenamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e003.osfilenamec.operator_ostextt_ptr BEGIN
#define DDNAME       "3func.3600e003.osfilenamec.operator_ostextt_ptr"
#define DDNUMB      (countT)0x3600e003
#define IDFILE      (countT)0xeaa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1100003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7300104.1.1.0.html\"\>7300104:  WAKEsHOW( "example.simplest.func.1100003.osFileNameC.operator_osTextT_ptr" )\</A\>
evaluates to a file name
this function is very efficient; no calculation is done
it is legal (ok) to modify the memory that my return value points to
 for example, calling code can replace the trailing backslash in a directory name with a null byte
*/
/**/

/*1*/osFileNameC::operator osTextT*( voidT )/*1*/
{
    TINSL
    IFbEcAREFUL
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600e* : 3func.3600e003.osfilenamec.operator_ostextt_ptr END
