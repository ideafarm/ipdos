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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d002.staqc.staqc BEGIN
#define DDNAME       "3func.3608d002.staqc.staqc"
#define DDNUMB      (countT)0x3608d002
#define IDFILE      (countT)0x12b2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/staqC::staqC( tinS& tinP , const countT cbeP , const countT ceP ) :/*1*/
aa( tinP , cbeP , ceP )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d002.staqc.staqc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d003.staqc.operatorshiftleft BEGIN
#define DDNAME       "3func.3608d003.staqc.operatorshiftleft"
#define DDNUMB      (countT)0x3608d003
#define IDFILE      (countT)0x12b3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/staqC& staqC::operator <<( const byteT* const pbP )/*1*/
{
    if( !pbP ) aa[ aa.ceHighWaterF() ] ;
    else switch( aa.cbeF() )
    {
        case 1 :
        {
            aa[ aa.ceHighWaterF() ] = *pbP ;
            break ;
        }
        case sizeof( countT ) :
        {
            *(countT*)&aa[ aa.ceHighWaterF() ] = *(countT*)pbP ;
            break ;
        }
        default :
        {
            TINSL
            thirdC::c_memcpyIF( tinP , &aa[ aa.ceHighWaterF() ] , pbP , aa.cbeF() ) ;
            break ;
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d003.staqc.operatorshiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d004.staqc.operatorshiftright BEGIN
#define DDNAME       "3func.3608d004.staqc.operatorshiftright"
#define DDNUMB      (countT)0x3608d004
#define IDFILE      (countT)0x12b4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/staqC& staqC::operator >>( byteT* const pbP )/*1*/
{
    TINSL
    if( !aa.ceHighWaterF() ) { BLAMMO ; }
    thirdC::c_memcpyIF( tinP , pbP , &aa[ aa.ceHighWaterF() - 1 ] , aa.cbeF() ) ;
    aa.trimF( tinP , aa.ceHighWaterF() - 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608d* : 3func.3608d004.staqc.operatorshiftright END
