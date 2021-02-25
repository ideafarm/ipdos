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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035001.pczc.dt_pczc BEGIN
#define DDNAME       "3func.36035001.pczc.dt_pczc"
#define DDNUMB      (countT)0x36035001
#define IDFILE      (countT)0x10ee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14d0002.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/pczC::~pczC( voidT )/*1*/
{
    TINSL
    PUSE( tinP , *(byteT**)&pcz ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035001.pczc.dt_pczc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035002.pczc.pczc BEGIN
#define DDNAME       "3func.36035002.pczc.pczc"
#define DDNUMB      (countT)0x36035002
#define IDFILE      (countT)0x10ef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14d0003.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/pczC::pczC( countT cP , ... )/*1*/ :
pcz( 0 )
{
    countT* pcc = &cP ;
    ZE( countT , cc ) ;
    while( *pcc )
    {
        cc ++ ;
        pcc ++ ;
    }

    TINSL
    countT cba = sizeof( countT ) * ( cc + 1 ) ;
    tinP.pAdamGlobal1->pPoolHomeTemp->newF( tinP , LF , *(byteT**)&pcz , cba ) ; ___( pcz ) ;
    if( pcz )
    {
        #if defined( ENABLEdROPnOTES )

            dropNoteS* pNote = tinP.pAdamGlobal1->pPoolHomeTemp->pDropNoteF( tinP , (byteT*)pcz ) ;
            if( pNote )
            {
                pNote->idType       = ifciDtYPEdROPnOTE_pczCpcz ;
                pNote->cbRequested  = pNote->cbUsedReally = cba ;
            }

        #endif
    }
    ZE( countT , ecnu ) ;
    if( pcz ) thirdC::c_memcpyIF( tinP , (byteT*)pcz , (byteT*)&cP , cba ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035002.pczc.pczc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035003.pczc.operator_countt_ptr BEGIN
#define DDNAME       "3func.36035003.pczc.operator_countt_ptr"
#define DDNUMB      (countT)0x36035003
#define IDFILE      (countT)0x10f0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.14d0004.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/pczC::operator countT*( voidT )/*1*/
{
    return pcz ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36035* : 3func.36035003.pczc.operator_countt_ptr END
