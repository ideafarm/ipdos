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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094001.blobc.blobc BEGIN
#define DDNAME       "3func.36094001.blobc.blobc"
#define DDNUMB      (countT)0x36094001
#define IDFILE      (countT)0x12d0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/blobC::blobC( tinS& tinP , byteT* pbAllP , const countT cbAllP ) :/*1*/
pbAll( pbAllP ) ,
pbEnd( pbAll + cbAllP ) ,
pbAppend( pbAll ) ,
cItems( 0 ) ,
pbCursor( pbAll ) ,
idCursor( 1 )
{
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094001.blobc.blobc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094002.blobc.operator_elt BEGIN
#define DDNAME       "3func.36094002.blobc.operator_elt"
#define DDNUMB      (countT)0x36094002
#define IDFILE      (countT)0x12d1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const byteT* blobC::operator []( const countT idP ) //DEPARTS FROM CODING CONVENTION FOR MAX SPEED/*1*/
{
    if( !idP || cItems < idP ) return 0 ;
    else
    {
        sCountT scToDo = idP - idCursor ;
             if( scToDo > 0 ) while( scToDo -- ) { idCursor ++ ; pbCursor += 2 * sizeof( countT ) + ((countT*)pbCursor)[   0 ] ; }
        else if( scToDo < 0 ) while( scToDo ++ ) { idCursor -- ; pbCursor -= 2 * sizeof( countT ) + ((countT*)pbCursor)[ - 1 ] ; }
        return pbCursor ; // RETURNS THE ADDRESS OF THE LENGTH PREFIX; DONE THIS WAY TO FACILITATE SUBSETTING, SPLITTING, COMBINING blobC AGGREGATES; RETURN VALUE IS ALWAYS THE BEGINNING OF A VALID AGGREGATE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094002.blobc.operator_elt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094003.blobc.appendf BEGIN
#define DDNAME       "3func.36094003.blobc.appendf"
#define DDNUMB      (countT)0x36094003
#define IDFILE      (countT)0x12d2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT blobC::appendF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    ZE( boolT , bOk ) ;
    if( pbAppend + cbP + 2 * sizeof( countT ) <= pbEnd )
    {
        *(countT*)pbAppend = cbP ;                              pbAppend += sizeof( countT ) ;
        thirdC::c_memcpyIF( tinP , pbAppend , pbP , cbP ) ;     pbAppend += cbP ;
        *(countT*)pbAppend = cbP ;                              pbAppend += sizeof( countT ) ;
        cItems ++ ;
        bOk = 1 ;
    }

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36094* : 3func.36094003.blobc.appendf END
