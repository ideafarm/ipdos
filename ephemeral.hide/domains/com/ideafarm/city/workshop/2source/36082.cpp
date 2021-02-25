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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36082* : 3func.36082001.footc.dt_footc BEGIN
#define DDNAME       "3func.36082001.footc.dt_footc"
#define DDNUMB      (countT)0x36082001
#define IDFILE      (countT)0x1277


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/footC::~footC( voidT )/*1*/
{
    countT& fingerFoot2 = *(countT*)( pbFoot + cbFoot ) ;
    countT& fingerFoot1 = *(countT*)( pbFoot - sizeof( countT ) ) ;
    if( FINGERnEG_FOOTc3 != getNegAM( fingerFoot3 ) ) { BLAMMO ; }
    if( FINGERnEG_FOOTc2 != getNegAM( fingerFoot2 ) ) { BLAMMO ; }
    if( FINGERnEG_FOOTc1 != getNegAM( fingerFoot1 ) ) { BLAMMO ; }
    putNegAM( fingerFoot3 , FINGERnEG_FOOTc3zOMBIE ) ;
    putNegAM( fingerFoot2 , FINGERnEG_FOOTc2zOMBIE ) ;
    putNegAM( fingerFoot1 , FINGERnEG_FOOTc1zOMBIE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36082* : 3func.36082001.footc.dt_footc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36082* : 3func.36082002.footc.footc BEGIN
#define DDNAME       "3func.36082002.footc.footc"
#define DDNUMB      (countT)0x36082002
#define IDFILE      (countT)0x1278


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/footC::footC( const countT cbFootP , byteT* const pbaFootP , const countT cbaFootP ) :/*1*/
fingerFoot3( 0 ) ,
pbFoot( ( putNegAM( fingerFoot3 , FINGERnEG_FOOTc3 ) , pbaFootP ? pbaFootP + sizeof( countT ) : (byteT*)this - sizeof( countT ) - cbFootP ) ) ,
cbFoot( cbFootP )
{
    if( cbaFootP && cbaFootP != cbFootP + 2 * sizeof( countT )        ) { BLAMMO ; }
    if( !pbaFootP && (byteT*)this != (byteT*)&fingerFoot3             ) { BLAMMO ; }
    //U::if( FINGERnEG_FOOTc1 != getNegAM( *(countT*)( pbFoot - sizeof( countT ) ) ) ) { BLAMMO ; }
    if( FINGERnEG_FOOTc1 != getNegAM( *(countT*)( pbFoot - sizeof( countT ) ) ) )
    {
        countT foo = 2 ;
    }
    if( FINGERnEG_FOOTc2 != getNegAM( *(countT*)( pbFoot + cbFoot           ) ) ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36082* : 3func.36082002.footc.footc END
