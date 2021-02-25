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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff001.tinargs.tinargs BEGIN
#define DDNAME       "3func.360ff001.tinargs.tinargs"
#define DDNUMB      (countT)0x360ff001
#define IDFILE      (countT)0x1477


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/tinArgS::tinArgS( tinS& tinP )/*1*/
{
    clearF( tinP , 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff001.tinargs.tinargs END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff002.tinargs.clearf BEGIN
#define DDNAME       "3func.360ff002.tinargs.clearf"
#define DDNUMB      (countT)0x360ff002
#define IDFILE      (countT)0x1478


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinArgS::clearF( tinS& tinP , boolT bAllP )/*1*/
{
    _IO_

    byteT* pbx = bAllP
        ? (byteT*)this
        : (byteT*)&pushed
    ;

    countT cbx = bAllP
        ? sizeof *this
        : sizeof pushed
    ;

    thirdC::c_memsetIF( tinP , pbx , cbx ) ;

                  pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
    if( bAllP ) retained.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff002.tinargs.clearf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff003.tinargs.savef BEGIN
#define DDNAME       "3func.360ff003.tinargs.savef"
#define DDNUMB      (countT)0x360ff003
#define IDFILE      (countT)0x1479


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinArgS::saveF( tinS& tinP , byteT* pbP , countT cbP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cbP - sizeof pushed ) ;
        if( POOP ) return ;
    }

    thirdC::c_memcpyIF( tinP , pbP , (byteT*)&pushed , cbP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff003.tinargs.savef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff004.tinargs.restoref BEGIN
#define DDNAME       "3func.360ff004.tinargs.restoref"
#define DDNUMB      (countT)0x360ff004
#define IDFILE      (countT)0x147a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT tinArgS::restoreF( tinS& tinP , byteT* pbP , countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( cbP - sizeof pushed ) ;
        if( POOP ) return ;
    }

    thirdC::c_memcpyIF( tinP , (byteT*)&pushed , pbP , cbP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ff* : 3func.360ff004.tinargs.restoref END
