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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103002.list_counttstrz_c.dt_list_counttstrz_c BEGIN
#define DDNAME       "3func.36103002.list_counttstrz_c.dt_list_counttstrz_c"
#define DDNUMB      (countT)0x36103002
#define IDFILE      (countT)0x147f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/list_countTstrz_C::~list_countTstrz_C( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103002.list_counttstrz_c.dt_list_counttstrz_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103003.list_counttstrz_c.list_counttstrz_c BEGIN
#define DDNAME       "3func.36103003.list_counttstrz_c.list_counttstrz_c"
#define DDNUMB      (countT)0x36103003
#define IDFILE      (countT)0x1480


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/list_countTstrz_C::list_countTstrz_C( tinS& tinP , const listC& listDadP , const countT idNameP , const countT* const pczP ) :/*1*/
listC( tinP , listDadP , idNameP ) ,
datum_countTstrz_C( tinP , flagsi , idTypeDatum , pczP , *this )
{
    //CONoUTrAW( "list_countTstrz_C\r\n" ) ; 

    //OStEXT( ostoSay , TUCK << 2 ) ;
    //OStEXTC( ostoSay , nameF( tinP ) , 0 ) ;
    //OStEXTAK( ostoSay , " | \"" ) ;
    //OStEXTA(  ostoSay , (countT*)*this ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103003.list_counttstrz_c.list_counttstrz_c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103004.list_counttstrz_c.operator_assign BEGIN
#define DDNAME       "3func.36103004.list_counttstrz_c.operator_assign"
#define DDNUMB      (countT)0x36103004
#define IDFILE      (countT)0x1481


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT list_countTstrz_C::operator =( const countT* const pcP )/*1*/
{
    datum_countTstrz_C::operator =( pcP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36103* : 3func.36103004.list_counttstrz_c.operator_assign END
