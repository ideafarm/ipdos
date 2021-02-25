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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089002.strokingframes.strokingframes BEGIN
#define DDNAME       "3func.36089002.strokingframes.strokingframes"
#define DDNUMB      (countT)0x36089002
#define IDFILE      (countT)0x1293


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokingFrameS::strokingFrameS( const flagsT flagsP , const countT cStrokingFramesPadRightP , const countT cStrokingFramesPadUpP , const measureT mIdColP , const measureT mIdRowP , const measureT mColsP , const measureT mRowsP ) :/*1*/
flags( flagsP ) ,
bWrap( 0 ) ,
bPeeWhileMoving( 0 ) ,
cStrokingFramesPadRight( cStrokingFramesPadRightP ) ,
cStrokingFramesPadUp( cStrokingFramesPadUpP ) ,
mIdCol( mIdColP ) ,
mIdRow( mIdRowP ) ,
mCols( mColsP ) ,
mRows( mRowsP ) ,
mIdColLowWater(     MAXmEASUREt ) ,
mIdRowLowWater(     MAXmEASUREt ) ,
mIdColHighWater(  - MAXmEASUREt ) ,
mIdRowHighWater(  - MAXmEASUREt ) ,
mIdColLowOil(     MAXmEASUREt ) ,
mIdRowLowOil(     MAXmEASUREt ) ,
mIdColHighOil(  - MAXmEASUREt ) ,
mIdRowHighOil(  - MAXmEASUREt )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089002.strokingframes.strokingframes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089003.strokingframes.newwaterf BEGIN
#define DDNAME       "3func.36089003.strokingframes.newwaterf"
#define DDNUMB      (countT)0x36089003
#define IDFILE      (countT)0x1294


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT strokingFrameS::newWaterF( const measureT mIdColP , const measureT mIdRowP , const countT cRipplesP )/*1*/
{
    if( !cRipplesP ) ;
    else if( mIdColLowWater == MAXmEASUREt )
    {
             if( mIdColLowWater   > mIdColP ) mIdColLowWater   = mIdColP ;
             if( mIdColHighWater  < mIdColP ) mIdColHighWater  = mIdColP ;
    
             if( mIdRowLowWater   > mIdRowP ) mIdRowLowWater   = mIdRowP ;
             if( mIdRowHighWater  < mIdRowP ) mIdRowHighWater  = mIdRowP ;
    }
    else
    {
             if( mIdColLowWater   > mIdColP ) mIdColLowWater   = mIdColP ;
        else if( mIdColHighWater  < mIdColP ) mIdColHighWater  = mIdColP ;
    
             if( mIdRowLowWater   > mIdRowP ) mIdRowLowWater   = mIdRowP ;
        else if( mIdRowHighWater  < mIdRowP ) mIdRowHighWater  = mIdRowP ;
    }

    if( mIdColLowOil == MAXmEASUREt )
    {
             if( mIdColLowOil   > mIdColP ) mIdColLowOil   = mIdColP ;
             if( mIdColHighOil  < mIdColP ) mIdColHighOil  = mIdColP ;
    
             if( mIdRowLowOil   > mIdRowP ) mIdRowLowOil   = mIdRowP ;
             if( mIdRowHighOil  < mIdRowP ) mIdRowHighOil  = mIdRowP ;
    }
    else
    {
             if( mIdColLowOil   > mIdColP ) mIdColLowOil   = mIdColP ;
        else if( mIdColHighOil  < mIdColP ) mIdColHighOil  = mIdColP ;
    
             if( mIdRowLowOil   > mIdRowP ) mIdRowLowOil   = mIdRowP ;
        else if( mIdRowHighOil  < mIdRowP ) mIdRowHighOil  = mIdRowP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089003.strokingframes.newwaterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089004.strokingframes.operator_shiftleft BEGIN
#define DDNAME       "3func.36089004.strokingframes.operator_shiftleft"
#define DDNUMB      (countT)0x36089004
#define IDFILE      (countT)0x1295


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokingFrameS& strokingFrameS::operator <<( soulC& sP )/*1*/
{
    TINSL

    byteT* pbTo = (byteT*)this ;
    countT cbTo = sizeof *this ;
    sP.shiftRightF( tinP , pbTo , cbTo , ifcIDtYPEsOULiTEM_byteTptr ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089004.strokingframes.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089005.strokingframes.operator_shiftright BEGIN
#define DDNAME       "3func.36089005.strokingframes.operator_shiftright"
#define DDNUMB      (countT)0x36089005
#define IDFILE      (countT)0x1296


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokingFrameS& strokingFrameS::operator >>( soulC& sP )/*1*/
{
    TINSL

    sP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , (byteT*)this , sizeof *this ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36089* : 3func.36089005.strokingframes.operator_shiftright END
