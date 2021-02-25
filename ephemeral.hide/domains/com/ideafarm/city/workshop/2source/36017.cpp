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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017001.mapc.mapc BEGIN
#define DDNAME       "3func.36017001.mapc.mapc"
#define DDNUMB      (countT)0x36017001
#define IDFILE      (countT)0xff7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9020104.1.1.0.html\"\>9020104:  WAKEsHOW( "example.simplest.func.1220001.mapC.mapC" )\</A\>
arguments
 etherP
*/
/**/

/*1*/mapC::mapC( tinS& tinP , etherC& etherP )/*1*/ :
ether( etherP ) ,
stackk( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , ifcSTACKtYPE_PTR_count2S )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017001.mapc.mapc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017002.mapc.dt_mapc BEGIN
#define DDNAME       "3func.36017002.mapc.dt_mapc"
#define DDNUMB      (countT)0x36017002
#define IDFILE      (countT)0xff8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a020104.1.1.0.html\"\>a020104:  WAKEsHOW( "example.simplest.func.1220002.mapC.dt_mapC" )\</A\>
*/
/**/

/*1*/mapC::~mapC( voidT )/*1*/
{
    TINSL

    _IO_
    operator !() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017002.mapc.dt_mapc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017004.mapc.operator_element BEGIN
#define DDNAME       "3func.36017004.mapc.operator_element"
#define DDNUMB      (countT)0x36017004
#define IDFILE      (countT)0xff9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b020104.1.1.0.html\"\>b020104:  WAKEsHOW( "example.simplest.func.1220004.mapC.operator_element" )\</A\>
returns the value associated with value idP
 becomes impotent if no value is associated with the value idP
this operator and operator () are equally efficient
this operator is guaranteed to be at least as efficient as () in the future
most applications should use [] and avoid using () except when needing to obtain the "inverse map"
in the future, inverse mapping will be less efficient than mapping
arguments
 idP
*/
/**/

/*1*/countT mapC::operator []( const countT idP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    ZE( countT , value ) ;
    countT cValues = stackk ;
    countT idv = 1 ;
    for( ; idv <= cValues ;idv ++ )
    {
        count2S* pc2 = (count2S*)stackk[ idv ] ;
        if( pc2 && pc2->c1 == idP )
        {
            value = pc2->c2 ;
            break ;
        }
    }
    __( idv > cValues ) ;
    return value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017004.mapc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017005.mapc.operator_call BEGIN
#define DDNAME       "3func.36017005.mapc.operator_call"
#define DDNUMB      (countT)0x36017005
#define IDFILE      (countT)0xffa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c020104.1.1.0.html\"\>c020104:  WAKEsHOW( "example.simplest.func.1220005.mapC.operator_call" )\</A\>
returns the value associated with value idP
this operator and operator [] are equally efficient
most applications should use [] rather than (), except when needing to obtain the "inverse map"
in the future, inverse mapping, using (), will be less efficient than mapping, using []
arguments
 idP
*/
/**/

/*1*/countT mapC::operator ()( const countT idP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    _IO_
    ZE( countT , value ) ;
    countT cValues = stackk ;
    countT idv = 1 ;
    for( ; idv <= cValues ;idv ++ )
    {
        count2S* pc2 = (count2S*)stackk[ idv ] ;
        if( pc2 && pc2->c2 == idP )
        {
            value = pc2->c1 ;
            break ;
        }
    }
    __( idv > cValues ) ;
    return value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017005.mapc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017006.mapc.operator_countt BEGIN
#define DDNAME       "3func.36017006.mapc.operator_countt"
#define DDNUMB      (countT)0x36017006
#define IDFILE      (countT)0xffb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d020104.1.1.0.html\"\>d020104:  WAKEsHOW( "example.simplest.func.1220006.mapC.operator_countT" )\</A\>
returns the number of mappings
*/
/**/

/*1*/mapC::operator countT( voidT ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

        _IO_

    return (countT)stackk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017006.mapc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017007.mapc.operator_not BEGIN
#define DDNAME       "3func.36017007.mapc.operator_not"
#define DDNUMB      (countT)0x36017007
#define IDFILE      (countT)0xffc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1220007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e020104.1.1.0.html\"\>e020104:  WAKEsHOW( "example.simplest.func.1220007.mapC.operator_not" )\</A\>
clears all entries
*/
/**/

/*1*/voidT mapC::operator !( voidT )/*1*/
{
    TINSL
    //IN_C
    ZE( count2S* , pc2 ) ;
    while( !ether && stackk )
    {
        stackk >> pc2 ;
        ether.delF( tinP , pc2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017007.mapc.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017008.mapc.sinkf BEGIN
#define DDNAME       "3func.36017008.mapc.sinkf"
#define DDNUMB      (countT)0x36017008
#define IDFILE      (countT)0xffd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1220008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0a20104.1.1.0.html\"\>0a20104:  WAKEsHOW( "example.simplest.func.1220008.mapC.sinkF" )\</A\>
defines a mapping from c1P to c2P, using the [] operator
 example: the value of operator[ c1P ] will be c2P after sinkF is called
the mapping need not be unique or invertible
a pair that is a duplicate will cause impotence
*/
/**/

/*1*/voidT mapC::sinkF( tinS& tinP , const countT c1P , const countT c2P )/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return ;
    }

    _IO_

    ZE( count2S* , pc2 ) ;
    ether.newF( tinP , LF , pc2 ) ; ___( pc2 ) ;
    if( pc2 )
    {
        ZE( countT , idSlot ) ;
        pc2->c1 = c1P ;
        pc2->c2 = c2P ;
        stackk.sinkF( tinP , idSlot , pc2 , flSTACKsINK_UNIQUE , subtract1220008F ) ;
        __Z( idSlot ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36017* : 3func.36017008.mapc.sinkf END
