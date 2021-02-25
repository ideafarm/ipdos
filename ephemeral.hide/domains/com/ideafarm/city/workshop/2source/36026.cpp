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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026001.vectoroldc.dt_vectoroldc BEGIN
#define DDNAME       "3func.36026001.vectoroldc.dt_vectoroldc"
#define DDNUMB      (countT)0x36026001
#define IDFILE      (countT)0x103b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3130104.1.1.0.html\"\>3130104:  WAKEsHOW( "example.simplest.func.1310001.vectorOldC.dt_vectorOldC" )\</A\>
*/
/**/

/*1*/vectorOldC::~vectorOldC( voidT )/*1*/
{
    TINSL
    ether.delF( tinP , pma ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026001.vectoroldc.dt_vectoroldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026002.vectoroldc.vectoroldc BEGIN
#define DDNAME       "3func.36026002.vectoroldc.vectoroldc"
#define DDNUMB      (countT)0x36026002
#define IDFILE      (countT)0x103c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8130104.1.1.0.html\"\>8130104:  WAKEsHOW( "example.simplest.func.1310002.vectorOldC.vectorOldC" )\</A\>
*/
/**/

/*1*/vectorOldC::vectorOldC( const vectorOldC& vP )/*1*/ :
ether( vP.ether ) ,
cSize( vP.cSize ) ,
pma( 0 ) ,
mnu( 0 )
{
    TINSL
    ether.newF( tinP , LF , pma , 1 + cSize ) ; ___( pma ) ;

    if( pma )
    {
        for( countT ide = 1 ; ide <= cSize ; ide ++ )
        {
            pma[ ide ] = vP.pma[ ide ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026002.vectoroldc.vectoroldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026003.vectoroldc.vectoroldc BEGIN
#define DDNAME       "3func.36026003.vectoroldc.vectoroldc"
#define DDNUMB      (countT)0x36026003
#define IDFILE      (countT)0x103d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2130104.1.1.0.html\"\>2130104:  WAKEsHOW( "example.simplest.func.1310003.vectorOldC.vectorOldC" )\</A\>
*/
/**/

/*1*/vectorOldC::vectorOldC( tinS& tinP , etherC& etherP , const countT cSizeP )/*1*/ :
ether( etherP ) ,
cSize( cSizeP ) ,
pma( 0 ) ,
mnu( 0 )
{
    const countT cca = 1 + cSize ;
    ether.newF( tinP , LF , pma , cca ) ; ___( pma ) ;
    ether.memSetF( tinP , (byteT*)pma , cca * sizeof( measureT ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026003.vectoroldc.vectoroldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026004.vectoroldc.operator_measuret BEGIN
#define DDNAME       "3func.36026004.vectoroldc.operator_measuret"
#define DDNUMB      (countT)0x36026004
#define IDFILE      (countT)0x103e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6130104.1.1.0.html\"\>6130104:  WAKEsHOW( "example.simplest.func.1310004.vectorOldC.operator_measureT" )\</A\>
evaluates to the squared length of the vector
 take the square root of this value to obtain the length of the vector
*/
/**/

/*1*/vectorOldC::operator measureT( voidT ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    ZE( measureT , mLength ) ;
    for( countT ide = 1 ; ide <= cSize ; ide ++ ) mLength += pma[ ide ] * pma[ ide ] ;
    return mLength ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026004.vectoroldc.operator_measuret END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026005.vectoroldc.operator_assign BEGIN
#define DDNAME       "3func.36026005.vectoroldc.operator_assign"
#define DDNUMB      (countT)0x36026005
#define IDFILE      (countT)0x103f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7130104.1.1.0.html\"\>7130104:  WAKEsHOW( "example.simplest.func.1310005.vectorOldC.operator_assign" )\</A\>
*/
/**/

/*1*/vectorOldC& vectorOldC::operator =( const vectorOldC& vP )/*1*/
{
    TINSL
    ether.delF( tinP , pma ) ;
    cSize = vP.cSize ;

    ether.newF( tinP , LF , pma , 1 + cSize ) ; ___( pma ) ;

    if( pma )
    {
        for( countT ide = 0 ; ide <= cSize ; ide ++ )
        {
            pma[ ide ] = vP.pma[ ide ] ;
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026005.vectoroldc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026006.vectoroldc.operator_call BEGIN
#define DDNAME       "3func.36026006.vectoroldc.operator_call"
#define DDNUMB      (countT)0x36026006
#define IDFILE      (countT)0x1040


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1310006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5130104.1.1.0.html\"\>5130104:  WAKEsHOW( "example.simplest.func.1310006.vectorOldC.operator_call" )\</A\>
*/
/**/

/*1*/measureT& vectorOldC::operator ()( const countT idP ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return *(measureT*)&mnu ;
        //__Z( idP ) ; //IT IS LEGAL (OK) FOR APPS TO USE THE OFFSET 0 ELEMENT FOR ANY PURPOSE, E.G. TO FLAG VALID/INVALID VALUE, ETC.; OFFSET 0 IS NOT USED BY THE CLASS
        __( idP > cSize ) ;
        if( ether ) return *(measureT*)&mnu ;
    }

    return pma[ idP ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026006.vectoroldc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026007.vectoroldc.sayf BEGIN
#define DDNAME       "3func.36026007.vectoroldc.sayf"
#define DDNUMB      (countT)0x36026007
#define IDFILE      (countT)0x1041


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sayF.0.html\"\>instances\</A\>
\<A HREF=\"5.1310007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4130104.1.1.0.html\"\>4130104:  WAKEsHOW( "example.simplest.func.1310007.vectorOldC.sayF" )\</A\>
*/
/**/

/*1*/voidT vectorOldC::sayF( tinS& tinP )/*1*/
{
    for( countT ide = 1 ; ide <= cSize ; ide ++ )
    {    
        //ether.strokeF( tinP , TF6(operator()(ide),flFORMAT_EXPONENT,0,0,2,6)+T("\t") ) ;
        LOGrAW( TF6(operator()(ide),flFORMAT_EXPONENT,0,0,2,6)+T("\t") ) ;
    }
    ether.strokeF( tinP , T("\r\n") ) ;
    LOGrAW( "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026007.vectoroldc.sayf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026008.vectoroldc.operator_multiply BEGIN
#define DDNAME       "3func.36026008.vectoroldc.operator_multiply"
#define DDNUMB      (countT)0x36026008
#define IDFILE      (countT)0x1042


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/measureT vectorOldC::operator *( const vectorOldC& vP ) const/*1*/
{
    ZE( measureT , dotProduct ) ;
    if( cSize == vP.cSize ) for( countT ide = 1 ; ide <= cSize ; ide ++ ) dotProduct += pma[ ide ] * vP.pma[ ide ] ;

    return dotProduct ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36026* : 3func.36026008.vectoroldc.operator_multiply END
