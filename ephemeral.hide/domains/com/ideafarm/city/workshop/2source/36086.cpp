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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086001.mapctc.mapctc BEGIN
#define DDNAME       "3func.36086001.mapctc.mapctc"
#define DDNUMB      (countT)0x36086001
#define IDFILE      (countT)0x1285


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/mapCTC::mapCTC( const mapCTS* const pListP , const countT cEntriesP , const boolT bLenghPrefixedP ) :/*1*/
pList( pListP ) ,
cEntries( cEntriesP ) ,
flags( flMAP_COL1sORTED | flMAP_COL2sORTED ) ,
costPrefix( 0 )
{
    if( bLenghPrefixedP )
    {
        for( countT off = 0 ; off < cEntries ; off ++ )
            *(countT*)pList[ off ].post = thirdC::c_strlenIF( pList[ off ].post + sizeof( countT ) ) ;

        *(countT*)&costPrefix = sizeof( countT ) ;
    }

    {for( countT off = 1 ; off < cEntries ; off ++ )
    {
        if( pList[ off ].id <= pList[ off - 1 ].id )
        {
            *(flagsT*)&flags &= ~( F(flMAP_COL1sORTED) ) ;
            break ;
        }
    }}

    for( countT off = 1 ; off < cEntries ; off ++ )
    {
        if( 0 > thirdC::c_strcmpIF( pList[ off ].post + costPrefix , pList[ off - 1 ].post + costPrefix ) )
        {
            *(flagsT*)&flags &= ~( F(flMAP_COL2sORTED) ) ;
            break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086001.mapctc.mapctc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086002.mapctc.operator_call BEGIN
#define DDNAME       "3func.36086002.mapctc.operator_call"
#define DDNUMB      (countT)0x36086002
#define IDFILE      (countT)0x1286


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const osTextT* mapCTC::operator()( const countT idP )/*1*/
{
    ZE( const osTextT* , postw ) ;
    //U::ENHANCE TO DO BINARY SEARCH
    //if( !( F(flags) & flMAP_COL1sORTED ) )
    {
        for( countT off = 0 ; off < cEntries ; off ++ )
        {
            if( pList[ off ].id == idP )
            {
                postw = pList[ off ].post + costPrefix ;
                break ;
            }
        }
    }

    return postw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086002.mapctc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086003.mapctc.operator_call BEGIN
#define DDNAME       "3func.36086003.mapctc.operator_call"
#define DDNUMB      (countT)0x36086003
#define IDFILE      (countT)0x1287


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT mapCTC::operator()( const osTextT* const postP )/*1*/
{
    ZE( countT , idw ) ;
    //U::ENHANCE TO DO BINARY SEARCH
    //if( !( F(flags) & flMAP_COL2sORTED ) )

    if( !postP ) ;
    else
    {
        for( countT off = 0 ; off < cEntries ; off ++ )
        {
            if( !thirdC::c_strcmpIF( pList[ off ].post + costPrefix , postP ) )
            {
                idw = pList[ off ].id ;
                break ;
            }
        }
    }

    return idw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086003.mapctc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086004.mapctc.costmaxf BEGIN
#define DDNAME       "3func.36086004.mapctc.costmaxf"
#define DDNUMB      (countT)0x36086004
#define IDFILE      (countT)0x1288


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT mapCTC::costMaxF( voidT ) const/*1*/
{
    ZE( countT , costMax ) ;
    for( countT off = 0 ; off < cEntries ; off ++ )
    {
        countT costw = thirdC::c_strlenIF( pList[ off ].post + costPrefix ) ;
        if( costMax < costw ) costMax = costw ;
    }

    return costMax ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36086* : 3func.36086004.mapctc.costmaxf END
