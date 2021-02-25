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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078001.staticc.dt_staticc BEGIN
#define DDNAME       "3func.36078001.staticc.dt_staticc"
#define DDNUMB      (countT)0x36078001
#define IDFILE      (countT)0x1255


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::~staticC( voidT )/*1*/
{
    TINSL
    if( bReset ) thirdC::c_memsetIF( tinP , pbd , cbd , 0 ) ;
    tinP.tlsDelF( *(byteT**)&pbd ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078001.staticc.dt_staticc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078002.staticc.staticc BEGIN
#define DDNAME       "3func.36078002.staticc.staticc"
#define DDNUMB      (countT)0x36078002
#define IDFILE      (countT)0x1256


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::staticC( tinS& tinP , const osTextT* const postNameP , const osTextT* const postGroupP , const countT cbP , const countT idTypeP ) :/*1*/
cbd( cbP ? cbP : sizeof( countT ) ) ,
pbd( tinP.tlsNewF( cbd , postNameP , postGroupP ) ) ,
bReset( 0 )
{
    if( !pbd ) { BLAMMO ; }

    if( idTypeP == ifcIDtYPEsTATICC_FOOT )
    {
        if( cbd < 2 * sizeof( countT ) ) { BLAMMO ; }
        if( !*(countT*)pbd )
        {
            putNegAM( *(countT*)pbd , FINGERnEG_FOOTc1 ) ;
            putNegAM( *(countT*)( pbd + cbd - sizeof( countT ) ) , FINGERnEG_FOOTc2 ) ;
        }

        if( !postNameP ) bReset = 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078002.staticc.staticc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078003.staticc.operator_bytet_ref BEGIN
#define DDNAME       "3func.36078003.staticc.operator_bytet_ref"
#define DDNUMB      (countT)0x36078003
#define IDFILE      (countT)0x1257


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator byteT&( voidT )/*1*/
{
    return *pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078003.staticc.operator_bytet_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078004.staticc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.36078004.staticc.operator_bytet_ptr"
#define DDNUMB      (countT)0x36078004
#define IDFILE      (countT)0x1258


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator byteT*( voidT )/*1*/
{
    return pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078004.staticc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078005.staticc.operator_countt_ref BEGIN
#define DDNAME       "3func.36078005.staticc.operator_countt_ref"
#define DDNUMB      (countT)0x36078005
#define IDFILE      (countT)0x1259


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator countT&( voidT )/*1*/
{
    if( cbd < sizeof( countT ) ) { BLAMMO ; }
    return *(countT*)pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078005.staticc.operator_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078006.staticc.operator_countt_ptr BEGIN
#define DDNAME       "3func.36078006.staticc.operator_countt_ptr"
#define DDNUMB      (countT)0x36078006
#define IDFILE      (countT)0x125a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator countT*( voidT )/*1*/
{
    if( cbd < sizeof( countT ) ) { BLAMMO ; }
    return (countT*)pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078006.staticc.operator_countt_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078007.staticc.operator_measuret_ref BEGIN
#define DDNAME       "3func.36078007.staticc.operator_measuret_ref"
#define DDNUMB      (countT)0x36078007
#define IDFILE      (countT)0x125b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator measureT&( voidT )/*1*/
{
    if( cbd < sizeof( measureT ) ) { BLAMMO ; }
    return *(measureT*)pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078007.staticc.operator_measuret_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078008.staticc.operator_measuret_ptr BEGIN
#define DDNAME       "3func.36078008.staticc.operator_measuret_ptr"
#define DDNUMB      (countT)0x36078008
#define IDFILE      (countT)0x125c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/staticC::operator measureT*( voidT )/*1*/
{
    if( cbd < sizeof( measureT ) ) { BLAMMO ; }
    return (measureT*)pbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078008.staticc.operator_measuret_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078009.staticc.cbf BEGIN
#define DDNAME       "3func.36078009.staticc.cbf"
#define DDNUMB      (countT)0x36078009
#define IDFILE      (countT)0x125d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/countT staticC::cbF( voidT )/*1*/
{
    return cbd ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36078* : 3func.36078009.staticc.cbf END
