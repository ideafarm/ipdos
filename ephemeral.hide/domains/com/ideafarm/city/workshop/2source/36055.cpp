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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055001.hoodc.hoodc BEGIN
#define DDNAME       "3func.36055001.hoodc.hoodc"
#define DDNUMB      (countT)0x36055001
#define IDFILE      (countT)0x11ad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1770003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/hoodC::hoodC( tinS& tinP , const osTextT* const postP , const countT cbDatumP , const countT cThugsP ) :/*1*/
cbDatum( cbDatumP ) ,
cThugs( cThugsP ) ,
napkin( tinP , TAG( TAGiDnULL ) , postP , 0 , cThugsP * ( sizeof( thugC ) + cbDatumP ) )
{
    if( !( F(napkin.flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) )
    {
        if( napkin != cThugs * ( sizeof( thugC ) + cbDatum ) ) { BLAMMO ; }

        byteT* pbc = napkin ;
        byteT* pbe = (byteT*)napkin + napkin ;

        ZE( countT , oThug ) ;
        while( pbc < pbe )
        {
            new( 0 , tinP , pbc , sizeof( thugC ) ) thugC ;
            (countT&)((thugC*)pbc)->oThug = oThug ++ ;
            (countT&)((thugC*)pbc)->cbDatum = cbDatum ;
            pbc += sizeof( thugC ) + cbDatum ;
        }

        napkin.formattingIsDoneF( tinP ) ;
    }
    else if( napkin != cThugsP * ( sizeof( thugC ) + cbDatumP ) ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055001.hoodc.hoodc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055002.hoodc.operator_thugc_ref BEGIN
#define DDNAME       "3func.36055002.hoodc.operator_thugc_ref"
#define DDNUMB      (countT)0x36055002
#define IDFILE      (countT)0x11ae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1770004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/hoodC::operator thugC&( voidT )/*1*/
{
    byteT* pbc = napkin ;
    byteT* pbe = (byteT*)napkin + napkin ;

    ZE( thugC* , pThug ) ;
    while( pbc < pbe )
    {
        pThug = (thugC*)pbc ;
        if( flTHUGc_null == setIfEqualsAM( pThug->flags , flTHUGc_INuSE , flTHUGc_null ) )
        {
            pThug->bGrabbed = 0 ;
            pThug->oThugDad = - 1 ;
            pThug->oThugKid = - 1 ;
            break ;
        }
        pbc += sizeof( thugC ) + cbDatum ;
    }

    if( pbc >= pbe ) { BLAMMO ; }
    return *pThug ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055002.hoodc.operator_thugc_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055003.hoodc.operator_element BEGIN
#define DDNAME       "3func.36055003.hoodc.operator_element"
#define DDNUMB      (countT)0x36055003
#define IDFILE      (countT)0x11af


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1770005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thugC* hoodC::operator []( const countT oThugP )/*1*/
{
    thugC* pThug = (thugC*)( (byteT*)napkin + oThugP * ( sizeof( thugC ) + cbDatum ) ) ;
    if( (byteT*)napkin + napkin <= (byteT*)pThug ) pThug = 0 ;
    return pThug ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36055* : 3func.36055003.hoodc.operator_element END
