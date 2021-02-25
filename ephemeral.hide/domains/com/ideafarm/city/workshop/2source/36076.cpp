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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076001.bitsc.dt_bitsc BEGIN
#define DDNAME       "3func.36076001.bitsc.dt_bitsc"
#define DDNUMB      (countT)0x36076001
#define IDFILE      (countT)0x124b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/bitsC::~bitsC( voidT )/*1*/
{
    TINSL
    //IN

    //if( tinP.pc Utility[ 0 ] )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "\r\n-" ) ;
    //    OStEXTC(  ostoSay , pbBits , 0 ) ;
    //    //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    //    LOGrAW( ostoSay ) ;
    //}

    //tinP.pc Utility[ 1 ] ++ ;
    tinP.tlsDelF( pbBits ) ;
    //tinP.pc Utility[ 1 ] -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076001.bitsc.dt_bitsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076002.bitsc.bitsc BEGIN
#define DDNAME       "3func.36076002.bitsc.bitsc"
#define DDNUMB      (countT)0x36076002
#define IDFILE      (countT)0x124c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//IN_STAT IS COMMENTED OUT TO DECLUTTER THE EXCEPTION REPORT (STEP LIST); ENABLE IT TO STUDY EXECUTION COST OF bitsC

/*1*/bitsC::bitsC( tinS& tinP , const countT cBitsP , const byteT* const pbP , const countT idSetP ) :/*1*/
idMe( 0 ) ,
cBits( cBitsP ) ,
cbMe( 1 + ( cBitsP - 1 ) / SB ) ,
pbBits( 0 )
{
    //IN
    *(countT*)&idMe = 1 + incv02AM( tinP.pAdamGlobal1->_bitsC_.idMeLath ) ;
    countT pcIdSet[] = { idSetP , 0 } ;
    ctF( tinP , pbP , pcIdSet ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076002.bitsc.bitsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076003.bitsc.bitsc BEGIN
#define DDNAME       "3func.36076003.bitsc.bitsc"
#define DDNUMB      (countT)0x36076003
#define IDFILE      (countT)0x124d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/bitsC::bitsC( tinS& tinP , const countT cBitsP , const byteT* const pbP , const countT* pcIdSetP ) :/*1*/
idMe( 0 ) ,
cBits( cBitsP ) ,
cbMe( 1 + ( cBitsP - 1 ) / SB ) ,
pbBits( 0 )
{
    //IN
    *(countT*)&idMe = 1 + incv02AM( tinP.pAdamGlobal1->_bitsC_.idMeLath ) ;
    ctF( tinP , pbP , pcIdSetP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076003.bitsc.bitsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076004.bitsc.ctf BEGIN
#define DDNAME       "3func.36076004.bitsc.ctf"
#define DDNUMB      (countT)0x36076004
#define IDFILE      (countT)0x124e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT bitsC::ctF( tinS& tinP , const byteT* const pbP , const countT* pcIdSetP )/*1*/
{
    if( idMe == 0xffffffff )
    {
        countT foo = 2 ;
    }

    //IN
    if( !cBits || !cbMe ) { BLAMMO ; }

    //tinP.pc Utility[ 1 ] ++ ;
    pbBits = tinP.tlsNewF( cbMe ) ;
    //tinP.pc Utility[ 1 ] -- ;

    //if( tinP.pc Utility[ 0 ] )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "\r\n+" ) ;
    //    OStEXTC(  ostoSay , pbBits , 0 ) ;
    //    //etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    //    LOGrAW( ostoSay ) ;
    //}

    if( pbP ) thirdC::c_memcpyIF( tinP , pbBits , pbP , cbMe ) ;
    else      thirdC::c_memsetIF(        pbBits       , cbMe ) ; // tinP NOT USED TO PREVENT CALL OF _IO_ WHICH BLOWS STACK DURING INOUT TRACE

    if( pcIdSetP )
    {
        while( *pcIdSetP )
        {
            countT off = ( *pcIdSetP - 1 ) % cBits ;
            pbBits[ off / SB ] |= (byteT)( 1 << off % SB ) ;

            ++ pcIdSetP ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076004.bitsc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076005.bitsc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.36076005.bitsc.operator_bytet_ptr"
#define DDNUMB      (countT)0x36076005
#define IDFILE      (countT)0x124f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/bitsC::operator byteT*( voidT )/*1*/
{
    //TINSL
    //IN
    //OUT
    return pbBits ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076005.bitsc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076006.bitsc.bitsc BEGIN
#define DDNAME       "3func.36076006.bitsc.bitsc"
#define DDNUMB      (countT)0x36076006
#define IDFILE      (countT)0x1250


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/bitsC::bitsC( const countT cBitsP , const byteT* const pbP , const countT idSetP ) :/*1*/
idMe( 0 ) ,
cBits( cBitsP ) ,
cbMe( 1 + ( cBitsP - 1 ) / SB ) ,
pbBits( 0 )
{
    TINSL
    //IN
    *(countT*)&idMe = 1 + incv02AM( tinP.pAdamGlobal1->_bitsC_.idMeLath ) ;
    countT pcIdSet[] = { idSetP , 0 } ;
    ctF( tinP , pbP , pcIdSet ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076006.bitsc.bitsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076007.bitsc.bitsc BEGIN
#define DDNAME       "3func.36076007.bitsc.bitsc"
#define DDNUMB      (countT)0x36076007
#define IDFILE      (countT)0x1251


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/bitsC::bitsC( const countT cBitsP , const byteT* const pbP , const countT* pcIdSetP ) :/*1*/
idMe( 0 ) ,
cBits( cBitsP ) ,
cbMe( 1 + ( cBitsP - 1 ) / SB ) ,
pbBits( 0 )
{
    TINSL
    //IN
    *(countT*)&idMe = 1 + incv02AM( tinP.pAdamGlobal1->_bitsC_.idMeLath ) ;
    ctF( tinP , pbP , pcIdSetP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076007.bitsc.bitsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076008.bitsc.bitandf BEGIN
#define DDNAME       "3func.36076008.bitsc.bitandf"
#define DDNUMB      (countT)0x36076008
#define IDFILE      (countT)0x1252


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to true iff all specified bits are set
*/
/**/
/*1*/boolT bitsC::bitAndF( const countT cBitsP , const byteT* const pbBitsP , const countT* pcIdP )/*1*/
{
    //TINSL
    //IN
    boolT bTrue = 1 ;

    if( pcIdP )
    {
        while( *pcIdP && bTrue )
        {
            countT off = ( *pcIdP - 1 ) % cBitsP ;
            byteT test = (byteT)( 1 << off % SB ) ;

            if( !( pbBitsP[ off / SB ] & test ) ) bTrue = 0 ;

            ++ pcIdP ;
        }
    }

    //OUT
    return bTrue ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36076* : 3func.36076008.bitsc.bitandf END
