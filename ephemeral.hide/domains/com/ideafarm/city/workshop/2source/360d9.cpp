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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9002.aptc.aptc BEGIN
#define DDNAME       "3func.360d9002.aptc.aptc"
#define DDNUMB      (countT)0x360d9002
#define IDFILE      (countT)0x13c8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/aptC::aptC( tinS& tinP , const byteT* const pbP ) :/*1*/
idApt( pbP && tinP.pPoolUse ? (*tinP.pPoolUse)[ pbP ] : 0 )
{
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9002.aptc.aptc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9003.aptc.aptc BEGIN
#define DDNAME       "3func.360d9003.aptc.aptc"
#define DDNUMB      (countT)0x360d9003
#define IDFILE      (countT)0x13c9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/aptC::aptC( const countT idAptP ) :/*1*/
idApt( idAptP )
{
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9003.aptc.aptc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9004.aptc.operator_countt BEGIN
#define DDNAME       "3func.360d9004.aptc.operator_countt"
#define DDNUMB      (countT)0x360d9004
#define IDFILE      (countT)0x13ca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/aptC::operator countT( voidT ) const/*1*/
{
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
    return idApt & 0x3fffffff ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9004.aptc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9005.aptc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.360d9005.aptc.operator_bytet_ptr"
#define DDNUMB      (countT)0x360d9005
#define IDFILE      (countT)0x13cb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/aptC::operator byteT*( voidT ) const/*1*/
{
    TINSL
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
    countT stripped = idApt & 0x3fffffff ;
    return stripped ? (*tinP.pPoolUse)[ stripped ] : 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9005.aptc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9007.aptc.operator_assign BEGIN
#define DDNAME       "3func.360d9007.aptc.operator_assign"
#define DDNUMB      (countT)0x360d9007
#define IDFILE      (countT)0x13cc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT aptC::operator =( byteT* const pbAptP )/*1*/
{
    TINSL
    countT save = getBitsF() ;
    idApt = (*tinP.pPoolUse)[ pbAptP ] ;
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
    if( save ) setBitsF( save ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9007.aptc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9008.aptc.aptc BEGIN
#define DDNAME       "3func.360d9008.aptc.aptc"
#define DDNUMB      (countT)0x360d9008
#define IDFILE      (countT)0x13cd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/aptC::aptC( tinS& tinP , const listingC* const pAptP ) :/*1*/
idApt( pAptP && tinP.pPoolUse ? (*tinP.pPoolUse)[ (byteT*)pAptP ] : 0 )
{
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9008.aptc.aptc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9009.aptc.operator_countt_ref BEGIN
#define DDNAME       "3func.360d9009.aptc.operator_countt_ref"
#define DDNUMB      (countT)0x360d9009
#define IDFILE      (countT)0x13ce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

// /*1*/aptC::operator countT&( voidT )/*1*/
// {
//     return idApt ;
// }


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d9009.aptc.operator_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d900a.aptc.operator_assign BEGIN
#define DDNAME       "3func.360d900a.aptc.operator_assign"
#define DDNUMB      (countT)0x360d900a
#define IDFILE      (countT)0x13cf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT aptC::operator =( listingC* const plAptP )/*1*/
{
    TINSL
    countT save = getBitsF() ;
    idApt = (*tinP.pPoolUse)[ (const byteT*)plAptP ] ;
    if( idApt == - 1 ) { BLAMMO ; } //U:: TO FIND A BUG
    if( save ) setBitsF( save ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d9* : 3func.360d900a.aptc.operator_assign END
