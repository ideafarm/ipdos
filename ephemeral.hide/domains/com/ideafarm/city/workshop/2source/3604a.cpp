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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a001.bufferc.dt_bufferc BEGIN
#define DDNAME       "3func.3604a001.bufferc.dt_bufferc"
#define DDNUMB      (countT)0x3604a001
#define IDFILE      (countT)0x117b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16b0002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/bufferC::~bufferC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a001.bufferc.dt_bufferc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a002.bufferc.bufferc BEGIN
#define DDNAME       "3func.3604a002.bufferc.bufferc"
#define DDNUMB      (countT)0x3604a002
#define IDFILE      (countT)0x117c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16b0003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/bufferC::bufferC( tinS& tinP ) :/*1*/
pbCursor( pbBuffer ) ,
pbEnd( pbBuffer + sizeof pbBuffer ) ,
bFrozen( 0 ) ,
cRefused( 0 ) ,
grab( tinP , TAG( TAGiDnULL ) )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a002.bufferc.bufferc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a003.bufferc.operator_shiftleft BEGIN
#define DDNAME       "3func.3604a003.bufferc.operator_shiftleft"
#define DDNUMB      (countT)0x3604a003
#define IDFILE      (countT)0x117d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16b0004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT bufferC::operator <<( const osTextT* const postP )/*1*/
{
    TINSL
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bRefused = 1 ;
    if( !bFrozen )
    {
        countT cbData = thirdC::c_strlenIF( postP ) + 1 ;
        if( pbCursor + sizeof( countT ) + cbData <= pbEnd )
        {
            bRefused = 0 ;
            *(countT*)pbCursor = cbData ;
            pbCursor += sizeof( countT ) ;
            thirdC::c_memcpyIF( tinP , pbCursor , postP , cbData ) ;
            pbCursor += cbData ;
        }
        else freezeF( tinP , 1 ) ;
    }
    grab.ungrabF( tinP ) ;

    return bRefused ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a003.bufferc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a004.bufferc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.3604a004.bufferc.operator_bytet_ptr"
#define DDNUMB      (countT)0x3604a004
#define IDFILE      (countT)0x117e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16b0005.1.0.html\"\>definition\</A\>
i evaluate to a pointer to bytes that is immediately preceeded by a countT containing its length
 the length prefix (immediately below the returned address) contains the length of the data bytes at the address
  case: the data is a null terminated string of osTextT
   the null terminator is part of the data, so is included in the length value
   note that 1 must be subtracted from this length to get the text length (excluding the null terminator)
  case: the data is a string of arbitrary bytes
   the length is the number of bytes of data
calling me disables *this (freezes the contents of *this)
 wo'ce i am called, i will not accumulate any more bytes
*/
/**/

/*1*/bufferC::operator byteT*( voidT )/*1*/
{
    TINSL
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !bFrozen ) freezeF( tinP ) ;

    ZE( byteT* , pbo ) ;
    if( pbCursor + *(countT*)pbCursor < pbEnd )
    {
        pbo = pbCursor + sizeof( countT ) ;
        pbCursor += sizeof( countT ) + *(countT*)pbCursor ;
    }

    grab.ungrabF( tinP ) ;

    return pbo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a004.bufferc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a005.bufferc.freezef BEGIN
#define DDNAME       "3func.3604a005.bufferc.freezef"
#define DDNUMB      (countT)0x3604a005
#define IDFILE      (countT)0x117f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freezeF.0.html\"\>instances\</A\>
\<A HREF=\"5.16b0006.1.0.html\"\>definition\</A\>
arguments
 tinP
 cRefusedP
  can be 0
  will be added to this->cRefused  
*/
/**/

/*1*/voidT bufferC::freezeF( tinS& tinP , boolT cRefusedP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( !bFrozen )
    {
        pbEnd = pbCursor ;
        pbCursor = pbBuffer ;
        bFrozen = 1 ;
        cRefused += cRefusedP ;
    }
    grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a005.bufferc.freezef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a006.bufferc.pushf BEGIN
#define DDNAME       "3func.3604a006.bufferc.pushf"
#define DDNUMB      (countT)0x3604a006
#define IDFILE      (countT)0x1180


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.16b0007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT bufferC::pushF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    boolT bRefused = 1 ;
    if( !bFrozen )
    {

        if( pbCursor + sizeof( countT ) + cbP <= pbEnd )
        {
            bRefused = 0 ;
            *(countT*)pbCursor = cbP ;
            pbCursor += sizeof( countT ) ;
            thirdC::c_memcpyIF( tinP , pbCursor , pbP , cbP ) ;
            pbCursor += cbP ;
        }
        else freezeF( tinP , 1 ) ;
    }
    grab.ungrabF( tinP ) ;

    return bRefused ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604a* : 3func.3604a006.bufferc.pushf END
