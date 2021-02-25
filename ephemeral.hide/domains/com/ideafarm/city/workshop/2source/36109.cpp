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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109002.datums.dt_datums BEGIN
#define DDNAME       "3func.36109002.datums.dt_datums"
#define DDNUMB      (countT)0x36109002
#define IDFILE      (countT)0x148c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datumS::~datumS( voidT )/*1*/
{
    TINSL

    puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;

    DEL( pNext ) ;

    switch( idType )
    {
        case ifcIDtYPEmIXINdATUM_blob :
        case ifcIDtYPEmIXINdATUM_countTstrz  :
        {
            if( postValue )
            {
                PUSE( tinP , postValue ) ;            
                __( postValue ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109002.datums.dt_datums END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109003.datums.datums BEGIN
#define DDNAME       "3func.36109003.datums.datums"
#define DDNUMB      (countT)0x36109003
#define IDFILE      (countT)0x148d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datumS::datumS( tinS& tinP , const countT cValueP ) :/*1*/
pNext( 0 ) ,
idType( ifcIDtYPEmIXINdATUM_countT ) ,
cValue( cValueP )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109003.datums.datums END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109004.datums.datums BEGIN
#define DDNAME       "3func.36109004.datums.datums"
#define DDNUMB      (countT)0x36109004
#define IDFILE      (countT)0x148e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datumS::datumS( tinS& tinP , const osTextT* const postValueP ) :/*1*/
pNext( 0 ) ,
idType( ifcIDtYPEmIXINdATUM_blob ) ,
postValue( 0 )
{
    if( postValueP )
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        countT costValue = thirdC::c_strlenIF( tinP , postValueP ) ;
        countT cba = costValue + 1 ;
        PUSE.newF( tinP , LF , postValue , cba ) ; ___( pczValue ) ;
        __Z( postValue ) ;
        if( !POOP ) thirdC::c_memcpyIF( tinP , postValue , postValueP , cba ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109004.datums.datums END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109005.datums.datums BEGIN
#define DDNAME       "3func.36109005.datums.datums"
#define DDNUMB      (countT)0x36109005
#define IDFILE      (countT)0x148f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datumS::datumS( tinS& tinP , const countT* const pczValueP ) :/*1*/
pNext( 0 ) ,
idType( ifcIDtYPEmIXINdATUM_countTstrz ) ,
pczValue( 0 )
{
    if( pczValueP )
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        countT ccValue = thirdC::c_strlenIF( tinP , pczValueP ) ;
        countT cba = sizeof( countT ) * ( ccValue + 1 ) ;
        PUSE.newF( tinP , LF , *(byteT**)&pczValue , cba ) ; ___( pczValue ) ;
        __Z( pczValue ) ;
        if( !POOP ) thirdC::c_memcpyIF( tinP , (byteT*)pczValue , (byteT*)pczValueP , cba ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36109* : 3func.36109005.datums.datums END
