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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed002.list_blob_c.dt_list_blob_c BEGIN
#define DDNAME       "3func.360ed002.list_blob_c.dt_list_blob_c"
#define DDNUMB      (countT)0x360ed002
#define IDFILE      (countT)0x143b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/list_blob_C::~list_blob_C( voidT )/*1*/
{
    TINSL

    if( flagsi & fliLISTINGc_DESTRUCTING )
    {
    }
    else flagsi |= fliLISTINGc_DESTRUCTING ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed002.list_blob_c.dt_list_blob_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed003.list_blob_c.list_blob_c BEGIN
#define DDNAME       "3func.360ed003.list_blob_c.list_blob_c"
#define DDNUMB      (countT)0x360ed003
#define IDFILE      (countT)0x143c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/list_blob_C::list_blob_C( tinS& tinP , const listC& listDadP , const countT idNameP , const countT idLineNewP , const countT idiFileNewP , const byteT* const pbP , const countT cbP ) :/*1*/
listC( tinP , listDadP , idNameP ) ,
datum_blob_C( tinP , flagsi , idTypeDatum , pbP , cbP , *this , idLineNewP , idiFileNewP )
{
    //CONoUTrAW( "list_blob_C\r\n" ) ; 

    //OStEXT( ostoSay , TUCK << 2 ) ;
    //OStEXTC( ostoSay , nameF() , 0 ) ;
    //OStEXTAK( ostoSay , " | \"" ) ;
    //OStEXTA(  ostoSay , (byteT*)*this ) ;
    //OStEXTAK( ostoSay , "\" +\r\n" ) ;
    //CONoUTrAW( ostoSay ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed003.list_blob_c.list_blob_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed004.list_blob_c.operator_assign BEGIN
#define DDNAME       "3func.360ed004.list_blob_c.operator_assign"
#define DDNUMB      (countT)0x360ed004
#define IDFILE      (countT)0x143d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT list_blob_C::assignF( tinS& tinP , const byteT* const pbP , const countT cbP )/*1*/
{
    datum_blob_C::assignF( tinP , pbP , cbP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360ed* : 3func.360ed004.list_blob_c.operator_assign END
