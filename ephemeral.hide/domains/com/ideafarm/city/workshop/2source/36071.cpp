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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071001.idporttimec.idporttimec BEGIN
#define DDNAME       "3func.36071001.idporttimec.idporttimec"
#define DDNUMB      (countT)0x36071001
#define IDFILE      (countT)0x122f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC::idPortTimeC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071001.idporttimec.idporttimec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071002.idporttimec.operator_shiftright BEGIN
#define DDNAME       "3func.36071002.idporttimec.operator_shiftright"
#define DDNUMB      (countT)0x36071002
#define IDFILE      (countT)0x1230


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator >>( soulC& soulP )/*1*/
{
    *(idPortC*)this >> soulP ;
    soulP << time.time1 ;
    soulP << (countT)time.time2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071002.idporttimec.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071003.idporttimec.operator_shiftleft BEGIN
#define DDNAME       "3func.36071003.idporttimec.operator_shiftleft"
#define DDNUMB      (countT)0x36071003
#define IDFILE      (countT)0x1231


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator <<( soulC& soulP )/*1*/
{
    *(idPortC*)this << soulP ;
    soulP >> time.time1 ;
    soulP >> *(countT*)&time.time2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071003.idporttimec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071004.idporttimec.timestampiff BEGIN
#define DDNAME       "3func.36071004.idporttimec.timestampiff"
#define DDNUMB      (countT)0x36071004
#define IDFILE      (countT)0x1232


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT idPortTimeC::timeStampIfF( tinS& tinP , etherC& etThread )/*1*/
{
    time.time2 = time.time1 = 0 ;
    if( idPort ) etThread.osTimeNowF( tinP , time.time1 , time.time2 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071004.idporttimec.timestampiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071005.idporttimec.operator_assign BEGIN
#define DDNAME       "3func.36071005.idporttimec.operator_assign"
#define DDNUMB      (countT)0x36071005
#define IDFILE      (countT)0x1233


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator =( const idPortC& idpP )/*1*/
{
    (idPortC&)*this = idpP ;
    time.time2 = time.time1 = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071005.idporttimec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071006.idporttimec.operator_assign BEGIN
#define DDNAME       "3func.36071006.idporttimec.operator_assign"
#define DDNUMB      (countT)0x36071006
#define IDFILE      (countT)0x1234


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator =( const idPortTimeC& idptP )/*1*/
{
    idPort = idptP.idPort ;
    nn     = idptP.nn ;
    time.time1 = idptP.time.time1 ;
    time.time2 = idptP.time.time2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071006.idporttimec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071007.idporttimec.operator_assign BEGIN
#define DDNAME       "3func.36071007.idporttimec.operator_assign"
#define DDNUMB      (countT)0x36071007
#define IDFILE      (countT)0x1235


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator =( const countT idPortP )/*1*/
{
    idPort = idPortP ;
    nn = 0 ;
    /*if( !idPort )*/ time.time2 = time.time1 = 0 ;     //20210211@1157: UNCONDITIONAL BECAUSE time IS ONLY MEANINGFUL IN ITS ASSOCIATION WITH THE OLD nn idPort
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071007.idporttimec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071008.idporttimec.operator_equals BEGIN
#define DDNAME       "3func.36071008.idporttimec.operator_equals"
#define DDNUMB      (countT)0x36071008
#define IDFILE      (countT)0x1236


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT idPortTimeC::operator ==( const idPortTimeC& idptP ) const/*1*/
{
    return idPort == idptP.idPort && nn == idptP.nn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071008.idporttimec.operator_equals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071009.idporttimec.operator_notequals BEGIN
#define DDNAME       "3func.36071009.idporttimec.operator_notequals"
#define DDNUMB      (countT)0x36071009
#define IDFILE      (countT)0x1237


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT idPortTimeC::operator !=( const idPortTimeC& idptP ) const/*1*/
{
    return idPort != idptP.idPort || nn != idptP.nn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071009.idporttimec.operator_notequals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100a.idporttimec.operator_minus BEGIN
#define DDNAME       "3func.3607100a.idporttimec.operator_minus"
#define DDNUMB      (countT)0x3607100a
#define IDFILE      (countT)0x1238


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
if the idPortC values are equal then i return 0
else if age differs i identify the eldest
else i identify the numerical lesser
*/
/**/
/*1*/sCountT idPortTimeC::operator -( const idPortTimeC& idptP ) const/*1*/
{
    //P: NODES SORT IN TIMESTAMP ORDER; ELDEST IS LEFTMOST
    ZE( sCountT , sgn ) ;
    if( nn != idptP.nn || idPort != idptP.idPort )
    {
             if( time.time2  > idptP.time.time2                                        ) sgn =   1 ;
        else if( time.time2  < idptP.time.time2                                        ) sgn = - 1 ;
        else if( time.time1  > idptP.time.time1                                        ) sgn =   1 ;
        else if( time.time1  < idptP.time.time1                                        ) sgn = - 1 ;
        else if( nn          > idptP.nn                                                ) sgn =   1 ;
        else if( nn          < idptP.nn                                                ) sgn = - 1 ;
        else if( idPort      > idptP.idPort                                            ) sgn =   1 ;
        else if( idPort      < idptP.idPort                                            ) sgn = - 1 ;
    }
    return sgn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100a.idporttimec.operator_minus END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100b.idporttimec.operator_countt BEGIN
#define DDNAME       "3func.3607100b.idporttimec.operator_countt"
#define DDNUMB      (countT)0x3607100b
#define IDFILE      (countT)0x1239


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC::operator countT( voidT ) const/*1*/
{
    return *(idPortC*)this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100b.idporttimec.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100c.idporttimec.fieldf BEGIN
#define DDNAME       "3func.3607100c.idporttimec.fieldf"
#define DDNUMB      (countT)0x3607100c
#define IDFILE      (countT)0x123a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC idPortTimeC::fieldF( tinS& tinP , soulC& soulP , const countT idFieldStartP )/*1*/
{
    if( (countT)soulP < idFieldStartP - 1 + cFieldsF( tinP ) ) { BLAMMO ; }

    idPortTimeC copy ;
    *(idPortC*)&copy = idPortC::fieldF( tinP , soulP , idFieldStartP ) ;
    copy.time.time1       =          soulP.cFieldF( tinP , idFieldStartP + idPortC::cFieldsF( tinP ) ) ;
    copy.time.time2       = (sCountT)soulP.cFieldF( tinP , idFieldStartP + idPortC::cFieldsF( tinP ) + 1 ) ;
    return copy ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100c.idporttimec.fieldf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100d.idporttimec.cfieldsf BEGIN
#define DDNAME       "3func.3607100d.idporttimec.cfieldsf"
#define DDNUMB      (countT)0x3607100d
#define IDFILE      (countT)0x123b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT idPortTimeC::cFieldsF( tinS& tinP )/*1*/
{
    return idPortC::cFieldsF( tinP ) + 2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100d.idporttimec.cfieldsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100e.idporttimec.operator_assign BEGIN
#define DDNAME       "3func.3607100e.idporttimec.operator_assign"
#define DDNUMB      (countT)0x3607100e
#define IDFILE      (countT)0x123c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator =( const nicNameC& nnP )/*1*/
{
    nn = nnP ;
    idPort = 0 ;                                            //20210211@1157: ADDED W/O ANALYSIS ; PRESUMPTION THAT CHANGING nn WILL ALWAYS RENDER idPort IRRELEVANT BECAUSE IT IS ASSOCIATED WITH THE OLD nn
    /*if( !idPort )*/ time.time2 = time.time1 = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100e.idporttimec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100f.idporttimec.operator_times_ref BEGIN
#define DDNAME       "3func.3607100f.idporttimec.operator_times_ref"
#define DDNUMB      (countT)0x3607100f
#define IDFILE      (countT)0x123d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC::operator const timeS&( voidT ) const/*1*/
{
    return time ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.3607100f.idporttimec.operator_times_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071010.idporttimec.operator_assign BEGIN
#define DDNAME       "3func.36071010.idporttimec.operator_assign"
#define DDNUMB      (countT)0x36071010
#define IDFILE      (countT)0x123e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/idPortTimeC& idPortTimeC::operator =( const sCountT idPortP )/*1*/
{
    idPort = idPortP ;
    nn = 0 ;
    /*if( !idPort )*/ time.time2 = time.time1 = 0 ;         //20210211@1157: DO THIS UNCONDITIONALLY BECAUSE time IS MEANINGFUL ONLY IN ITS ASSOCIATION WITH THE OLD nn AND idPort
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36071* : 3func.36071010.idporttimec.operator_assign END
