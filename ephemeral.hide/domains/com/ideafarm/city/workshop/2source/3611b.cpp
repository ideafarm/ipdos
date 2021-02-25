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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b003.grids.grids BEGIN
#define DDNAME       "3func.3611b003.grids.grids"
#define DDNUMB      (countT)0x3611b003
#define IDFILE      (countT)0x14e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/gridS::gridS( countT offColP , countT offRowP , countT cColP , countT cRowP , flagsT flagsP ) :/*1*/
cColPad( F(flagsP) & flGRIDs_PAD ? cColP >> 4 : 0 ) ,
cRowPad( F(flagsP) & flGRIDs_PAD ? cRowP >> 4 : 0 ) ,
offColMax( cColP - cColPad - 1 ) ,
offRowMax( cRowP - cRowPad - 1 ) ,
offCol(       offColP ) ,
offRow(       offRowP ) ,
flags( flagsP ) ,
cColHighWater( 0 ) ,
cRowHighWater( 0 )
{
    INITgRIDaRRAY( Col )
    INITgRIDaRRAY( Row )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b003.grids.grids END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b004.grids.grids BEGIN
#define DDNAME       "3func.3611b004.grids.grids"
#define DDNUMB      (countT)0x3611b004
#define IDFILE      (countT)0x14e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/gridS::gridS( const gridS& gridP              , countT cColP , countT cRowP , flagsT flagsP ) :/*1*/
cColPad( F(flagsP) & flGRIDs_PAD ? cColP >> 4 : 0 ) ,
cRowPad( F(flagsP) & flGRIDs_PAD ? cRowP >> 4 : 0 ) ,
offColMax( cColP - cColPad - 1 ) ,
offRowMax( cRowP - cRowPad - 1 ) ,
offCol( gridP.offCol  ) ,
offRow( gridP.offRow  ) ,
flags( flagsP ) ,
cColHighWater( 0 ) ,
cRowHighWater( 0 )
{
    INITgRIDaRRAY( Col )
    INITgRIDaRRAY( Row )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b004.grids.grids END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b005.grids.highwaterf BEGIN
#define DDNAME       "3func.3611b005.grids.highwaterf"
#define DDNUMB      (countT)0x3611b005
#define IDFILE      (countT)0x14e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT gridS::highWaterF( cPoint2S& ptP )/*1*/
{
    if( !cColHighWater || cColHighWater < 1 + ptP.x - offCol ) cColHighWater = 1 + ptP.x - offCol ;
    if( !cRowHighWater || cRowHighWater < 1 + ptP.y - offRow ) cRowHighWater = 1 + ptP.y - offRow ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b005.grids.highwaterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b006.grids.advancegridiff BEGIN
#define DDNAME       "3func.3611b006.grids.advancegridiff"
#define DDNUMB      (countT)0x3611b006
#define IDFILE      (countT)0x14e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT gridS::advanceGridIfF( gridS& gridDadP , const countT idCasteP , cPoint2S& ptLathP )/*1*/
{
    if( !( F(flags) & ( flGRIDs_DETACHED | flGRIDs_DETACHEDaLWAYS ) ) )
    {
        switch( idCasteP )
        {
            case sc_mmMOVEtO  :
            case sc_ccMOVEpEL :
            case sc_ccLINEpEL :
            case sc_mmLINEtO  :
            {
                offCol = ptLathP.x ;
                offRow = ptLathP.y ;
    
                break ;
            }
            case sc_cSYMBOL1 :
            {
                offCol += 1 + offColMax + cColPad ;
    
                if( offCol + offColMax > gridDadP.offCol + gridDadP.offColMax ) // cColPad IS INTENTIONALLY NOT USED HERE BECAUSE PADDING IS ONLY REQUIRED IF A SUBSEQUENT GRID WILL BE RENDERED ; IOW A PAD COLUMN AT THE RIGHTMOST EDGE OF DAD GRID IS NOT "RESERVED" ; GRIDS CAN ENCROACH WITHIN IT
                {
                    TINSL
                    //LOGrAW7( "advanceGridIfF wrapping [offColNew,offMaybe,offLimit]: " , offCol , " " , offCol + offColMax , " " , gridDadP.offCol + gridDadP.offColMax , "\r\n" ) ;
                    offCol = 0 ;

                    //BECAUSE SCREEN REAL ESTATE IS SCARCE, WRAP GOES TO HIGH WATER, WHICH MIGHT PRODUCE A VERY THIN ROW (E.G. IF IT IS ALL UNDERSCORES '_')
                    //U::PROVIDE A FLAG THAT DECLARES THAT WRAP SHOULD ALWAYS RISE BY AT LEAST THE GRID HEIGHT
                    //offRow += cRowPad + offRowMax + 1 ;

                    if( offRow < gridDadP.cRowHighWater + cRowPad ) offRow = gridDadP.cRowHighWater + cRowPad ;
                }

                break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611b* : 3func.3611b006.grids.advancegridiff END
