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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025001.sqmatrixoldc.dt_sqmatrixoldc BEGIN
#define DDNAME       "3func.36025001.sqmatrixoldc.dt_sqmatrixoldc"
#define DDNUMB      (countT)0x36025001
#define IDFILE      (countT)0x102e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e820104.1.1.0.html\"\>e820104:  WAKEsHOW( "example.simplest.func.1300001.sqMatrixOldC.dt_sqMatrixOldC" )\</A\>
*/
/**/

/*1*/sqMatrixOldC::~sqMatrixOldC( voidT )/*1*/
{
    TINSL
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == 4 )
    {
        countT foo = 2 ;
    }

    CONoUTrAW7( "~sqMatrixOldC      [idIn,this,pma]: " , idIn , " " , this , " " , pma , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025001.sqmatrixoldc.dt_sqmatrixoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025002.sqmatrixoldc.sqmatrixoldc BEGIN
#define DDNAME       "3func.36025002.sqmatrixoldc.sqmatrixoldc"
#define DDNUMB      (countT)0x36025002
#define IDFILE      (countT)0x102f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0920104.1.1.0.html\"\>0920104:  WAKEsHOW( "example.simplest.func.1300002.sqMatrixOldC.sqMatrixOldC" )\</A\>
*/
/**/

/*1*/sqMatrixOldC::sqMatrixOldC( sqMatrixOldC& sqmP )/*1*/ :
ether( sqmP.ether ) ,
cSize( sqmP.cSize ) ,
pma( 0 ) ,
mnu( 0 )
{
    TINSL
    const countT cca = ( 1 + cSize ) * ( 1 + cSize ) ;
    ether.newF( tinP , LF , pma , cca ) ; ___( pma ) ;
    CONoUTrAW5( " sqMatrixOldC copy [this,pma]: " , this , " " , pma , "\r\n" ) ;

    if( pma )
    {
        for( countT idr = 0 ; idr <= cSize ; idr ++ )
        {
            for( countT idc = 0 ; idc <= cSize ; idc ++ )
            {
                pma[ idr * cSize + idc ] = sqmP.pma[ idr * cSize + idc ] ;
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025002.sqmatrixoldc.sqmatrixoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025003.sqmatrixoldc.sqmatrixoldc BEGIN
#define DDNAME       "3func.36025003.sqmatrixoldc.sqmatrixoldc"
#define DDNUMB      (countT)0x36025003
#define IDFILE      (countT)0x1030


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f820104.1.1.0.html\"\>f820104:  WAKEsHOW( "example.simplest.func.1300003.sqMatrixOldC.sqMatrixOldC" )\</A\>
*/
/**/

/*1*/sqMatrixOldC::sqMatrixOldC( tinS& tinP , etherC& etherP , const countT cSizeP )/*1*/ :
ether( etherP ) ,
cSize( cSizeP ) ,
pma( 0 ) ,
mnu( 0 )
{
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;

    const countT cca = ( 1 + cSize ) * ( 1 + cSize ) ;
    ether.newF( tinP , LF , pma , cca ) ; ___( pma ) ;
    CONoUTrAW7( " sqMatrixOldC      [idIn,this,pma]: " , idIn , " " , this , " " , pma , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025003.sqmatrixoldc.sqmatrixoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025004.sqmatrixoldc.operator_measuret BEGIN
#define DDNAME       "3func.36025004.sqmatrixoldc.operator_measuret"
#define DDNUMB      (countT)0x36025004
#define IDFILE      (countT)0x1031


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9920104.1.1.0.html\"\>9920104:  WAKEsHOW( "example.simplest.func.1300004.sqMatrixOldC.operator_measureT" )\</A\>
evaluates to the determinant of the matrix
*/
/**/

/*1*/sqMatrixOldC::operator measureT( voidT ) const/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( ether ) return 0 ;
    }

    ZE( measureT , det ) ;
    if( !cSize ) ;
    else if( cSize == 1 ) det = pma[ cSize + 1 ] ;
    else if( cSize == 2 ) det = pma[ cSize + 1 ] * pma[ 2 * cSize + 2 ] - pma[ cSize + 2 ] * pma[ 2 * cSize + 1 ] ;
    else
    {
        measureT mSign = 1 ;
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            sqMatrixOldC mm( tinP , ether , cSize - 1 ) ;
            for( countT rr = 1 ; rr <= cSize ; rr ++ )
            {
                for( countT cc = 1 ; cc <= cSize ; cc ++ )
                {
                    if( rr == 1 || cc == idc ) continue ;

                    const countT rt =                  rr - 1 ;
                    const countT ct = cc < idc ? cc : cc - 1 ;

                    mm( rt , ct ) = pma[ rr * cSize + cc ] ;
                }
            }

            det += pma[ cSize + idc ] * cofactorF( tinP , 1 , idc ) ;

            mSign *= - 1 ;
        }
    }

    return det ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025004.sqmatrixoldc.operator_measuret END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025005.sqmatrixoldc.operator_assign BEGIN
#define DDNAME       "3func.36025005.sqmatrixoldc.operator_assign"
#define DDNUMB      (countT)0x36025005
#define IDFILE      (countT)0x1032


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a920104.1.1.0.html\"\>a920104:  WAKEsHOW( "example.simplest.func.1300005.sqMatrixOldC.operator_assign" )\</A\>
*/
/**/

/*1*/sqMatrixOldC& sqMatrixOldC::operator =( const sqMatrixOldC& sqmP )/*1*/
{
    TINSL
    ether.delF( tinP , pma ) ;
    cSize = sqmP.cSize ;

    const countT cca = ( 1 + cSize ) * ( 1 + cSize ) ;
    ether.newF( tinP , LF , pma , cca ) ; ___( pma ) ;

    if( pma )
    {
        for( countT idr = 0 ; idr <= cSize ; idr ++ )
        {
            for( countT idc = 0 ; idc <= cSize ; idc ++ )
            {
                pma[ idr * cSize + idc ] = sqmP.pma[ idr * cSize + idc ] ;
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025005.sqmatrixoldc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025006.sqmatrixoldc.operator_call BEGIN
#define DDNAME       "3func.36025006.sqmatrixoldc.operator_call"
#define DDNUMB      (countT)0x36025006
#define IDFILE      (countT)0x1033


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2920104.1.1.0.html\"\>2920104:  WAKEsHOW( "example.simplest.func.1300006.sqMatrixOldC.operator_call" )\</A\>
*/
/**/

/*1*/measureT& sqMatrixOldC::operator ()( const countT cRowP , const countT cColP )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( ether ) return mnu ;
        __( cRowP > cSize ) ;
        __( cColP > cSize ) ;
        if( ether ) return mnu ;
    }

    return pma[ cRowP * cSize + cColP ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025006.sqmatrixoldc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025007.sqmatrixoldc.operator_multiply BEGIN
#define DDNAME       "3func.36025007.sqmatrixoldc.operator_multiply"
#define DDNUMB      (countT)0x36025007
#define IDFILE      (countT)0x1034


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1300007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7920104.1.1.0.html\"\>7920104:  WAKEsHOW( "example.simplest.func.1300007.sqMatrixOldC.operator_multiply" )\</A\>
*/
/**/

/*1*/sqMatrixOldC sqMatrixOldC::operator *( const sqMatrixOldC& sqmP ) const/*1*/
{
    TINSL

    sqMatrixOldC rslt( tinP , ether , cSize ) ;
    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            for( countT ide = 1 ; ide <= cSize ; ide ++ ) rslt( idr , idc ) += pma[ idr * cSize + ide ] * sqmP.pma[ ide * cSize + idc ] ;
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025007.sqmatrixoldc.operator_multiply END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025008.sqmatrixoldc.transposef BEGIN
#define DDNAME       "3func.36025008.sqmatrixoldc.transposef"
#define DDNUMB      (countT)0x36025008
#define IDFILE      (countT)0x1035


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$transposeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1300008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3920104.1.1.0.html\"\>3920104:  WAKEsHOW( "example.simplest.func.1300008.sqMatrixOldC.transposeF" )\</A\>
*/
/**/

/*1*/sqMatrixOldC sqMatrixOldC::transposeF( tinS& tinP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return *(sqMatrixOldC*)this ;
    }

    sqMatrixOldC tra( tinP , ether , cSize ) ;

    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {    
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            tra( idr , idc ) = pma[ idc * cSize + idr ] ;
        }
    }

    return tra ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025008.sqmatrixoldc.transposef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025009.sqmatrixoldc.sayf BEGIN
#define DDNAME       "3func.36025009.sqmatrixoldc.sayf"
#define DDNUMB      (countT)0x36025009
#define IDFILE      (countT)0x1036


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sayF.0.html\"\>instances\</A\>
\<A HREF=\"5.1300009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1920104.1.1.0.html\"\>1920104:  WAKEsHOW( "example.simplest.func.1300009.sqMatrixOldC.sayF" )\</A\>
*/
/**/

/*1*/voidT sqMatrixOldC::sayF( tinS& tinP )/*1*/
{
    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {    
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            //ether.strokeF( tinP , TF4(pma[idr*cSize+idc],flFORMAT_EXPONENT,2,6) ) ;
            LOGrAW( TF6(pma[idr*cSize+idc],flFORMAT_EXPONENT,0,0,2,6) ) ;
            //if( idc < cSize ) ether.strokeF( tinP , T(" ") ) ;
            if( idc < cSize ) { LOGrAW( " ") ; }
        }
        //ether.strokeF( tinP , T("\r\n") ) ;
        LOGrAW( "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.36025009.sqmatrixoldc.sayf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500a.sqmatrixoldc.cofactorf BEGIN
#define DDNAME       "3func.3602500a.sqmatrixoldc.cofactorf"
#define DDNUMB      (countT)0x3602500a
#define IDFILE      (countT)0x1037


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cofactorF.0.html\"\>instances\</A\>
\<A HREF=\"5.130000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5920104.1.1.0.html\"\>5920104:  WAKEsHOW( "example.simplest.func.130000a.sqMatrixOldC.cofactorF" )\</A\>
*/
/**/

/*1*/measureT sqMatrixOldC::cofactorF( tinS& tinP , const countT idRowP , const countT idColP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( ether ) return 0 ;
        __Z( cSize ) ;
        __Z( idRowP ) ;
        __Z( idColP ) ;
        __( cSize < idRowP ) ;
        __( cSize < idColP ) ;
        if( ether ) return 0 ;
    }

    measureT mSign = 1 ;
    {
        countT cFlip = idRowP + idColP ;
        while( cFlip -- ) mSign *= -1 ;
    }

    sqMatrixOldC mm( tinP , ether , cSize - 1 ) ;
    for( countT rr = 1 ; rr <= cSize ; rr ++ )
    {
        for( countT cc = 1 ; cc <= cSize ; cc ++ )
        {
            if( rr == idRowP || cc == idColP ) continue ;

            const countT rt = rr < idRowP ? rr : rr - 1 ;
            const countT ct = cc < idColP ? cc : cc - 1 ;

            mm( rt , ct ) = pma[ rr * cSize + cc ] ;
        }
    }

    return mSign * mm ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500a.sqmatrixoldc.cofactorf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500b.sqmatrixoldc.adjointf BEGIN
#define DDNAME       "3func.3602500b.sqmatrixoldc.adjointf"
#define DDNUMB      (countT)0x3602500b
#define IDFILE      (countT)0x1038


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$adjointF.0.html\"\>instances\</A\>
\<A HREF=\"5.130000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4920104.1.1.0.html\"\>4920104:  WAKEsHOW( "example.simplest.func.130000b.sqMatrixOldC.adjointF" )\</A\>
*/
/**/

/*1*/sqMatrixOldC sqMatrixOldC::adjointF( tinS& tinP )/*1*/
{
    sqMatrixOldC sqmnu( tinP , ether , cSize ) ;

    IFbEcAREFUL
    {
        if( ether ) return sqmnu ;
    }

    sqMatrixOldC raw( tinP , ether , cSize ) ;

    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {    
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            raw( idr , idc ) = cofactorF( tinP , idr , idc ) ;
        }
    }

    sqMatrixOldC adj( tinP , ether , cSize ) ; //WORKAROUND TO COMPILER BUG THAT CANNOT HANDLE CT AND ASSIGN IN SAME STMT
    adj = raw.transposeF( tinP ) ;

    return adj ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500b.sqmatrixoldc.adjointf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500c.sqmatrixoldc.inversef BEGIN
#define DDNAME       "3func.3602500c.sqmatrixoldc.inversef"
#define DDNUMB      (countT)0x3602500c
#define IDFILE      (countT)0x1039


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$inverseF.0.html\"\>instances\</A\>
\<A HREF=\"5.130000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6920104.1.1.0.html\"\>6920104:  WAKEsHOW( "example.simplest.func.130000c.sqMatrixOldC.inverseF" )\</A\>
*/
/**/

/*1*/sqMatrixOldC sqMatrixOldC::inverseF( tinS& tinP )/*1*/
{
    measureT  det = *this ;
    IFbEcAREFUL
    {
        if( ether ) return *(sqMatrixOldC*)this ;
        __Z( det ) ;
        if( ether ) return *(sqMatrixOldC*)this ;
    }

    sqMatrixOldC inv( tinP , ether , cSize ) ; //WORKAROUND TO COMPILER BUG THAT CANNOT HANDLE CT AND ASSIGN IN SAME STMT
    inv = adjointF( tinP ) ;

    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {    
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            inv( idr , idc ) /= det ;
        }
    }

    return inv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500c.sqmatrixoldc.inversef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500d.sqmatrixoldc.operator_multiply BEGIN
#define DDNAME       "3func.3602500d.sqmatrixoldc.operator_multiply"
#define DDNUMB      (countT)0x3602500d
#define IDFILE      (countT)0x103a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.130000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8920104.1.1.0.html\"\>8920104:  WAKEsHOW( "example.simplest.func.130000d.sqMatrixOldC.operator_multiply" )\</A\>
*/
/**/

/*1*/vectorOldC sqMatrixOldC::operator *( const vectorOldC& vP ) const/*1*/
{
    TINSL

    vectorOldC rslt( tinP , ether , cSize ) ;
    for( countT idr = 1 ; idr <= cSize ; idr ++ )
    {
        for( countT idc = 1 ; idc <= cSize ; idc ++ )
        {
            rslt( idr ) +=  pma[ idr * cSize + idc ] * vP( idc ) ;
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36025* : 3func.3602500d.sqmatrixoldc.operator_multiply END
