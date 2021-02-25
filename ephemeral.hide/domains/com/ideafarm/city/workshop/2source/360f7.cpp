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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7002.depositdetails.dt_depositdetails BEGIN
#define DDNAME       "3func.360f7002.depositdetails.dt_depositdetails"
#define DDNUMB      (countT)0x360f7002
#define IDFILE      (countT)0x1454


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/depositDetailS::~depositDetailS( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    PUSE( tinP , *(byteT**)&pczNote ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7002.depositdetails.dt_depositdetails END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7003.depositdetails.depositdetails BEGIN
#define DDNAME       "3func.360f7003.depositdetails.depositdetails"
#define DDNUMB      (countT)0x360f7003
#define IDFILE      (countT)0x1455


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/depositDetailS::depositDetailS( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    thirdC::c_memsetIF( tinP , (byteT*)this , sizeof *this ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7003.depositdetails.depositdetails END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7004.depositdetails.psttf BEGIN
#define DDNAME       "3func.360f7004.depositdetails.psttf"
#define DDNUMB      (countT)0x360f7004
#define IDFILE      (countT)0x1456


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT depositDetailS::psttF( tinS& tinP , etherC& etherP , strokeS*& psttP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    const countT ccNote = !pczNote ? 0 : thirdC::c_strlenIF( tinP , pczNote ) ;

    etherP.strMakeF( tinP , LF , psttP , 0 , ( 0xa + ccNote ) * 0x10 ) ; ___( psttP ) ;
    if( psttP )
    {
        countT pco[] =
        {
            moneyT1 ,
            moneyT2 ,
            idCommission ,
            idDeposit ,
            timeT1 ,
            timeT2 ,
            idAccDepositor ,
            idProduct ,
            idBucket ,
            idAccBucketOwner
        } ;

        countT cDo     = sizeof pco / sizeof pco[ 0 ] ;
        countT cDoLess = cDo - 1 ;
        for( countT offi = 0 ; offi < cDo ; offi ++ )
        {
            flagsT flagsf = flFORMAT_NObIGITvALUES ;
            if( offi != 1 && offi != 5 ) flagsf |= flFORMAT_UNSIGNED ;

            etherP.strFuseF( tinP , psttP , TF3((sCountT)pco[offi],flagsf,8+(offi<cDoLess)) ) ;
        }

        if( pczNote ) etherP.strFuseF( tinP , psttP , T(" ")+T(pczNote) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f7* : 3func.360f7004.depositdetails.psttf END
