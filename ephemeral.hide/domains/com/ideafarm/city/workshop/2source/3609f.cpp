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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609f* : 3func.3609f002.bitmapoldc.bitmapoldc BEGIN
#define DDNAME       "3func.3609f002.bitmapoldc.bitmapoldc"
#define DDNUMB      (countT)0x3609f002
#define IDFILE      (countT)0x1321


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bitmapOldC::bitmapOldC( tinS& tinP , etherC& etherP , const handleC& hDrawWindowP , const countT colsP , const countT rowsP ) :/*1*/
hDraw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ,
hBitmap( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hFont( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hPen( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hBrush( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL )
{
    thirdC& third = etherP ;

    third.winOpenBitmapPseudodeviceF( tinP , hDraw , hDrawWindowP ) ;
    __Z( hDraw ) ;
    third.winOpenDrawingToolF( tinP , hPen   , ifcIDtYPEdRAWINGtOOL_PEN   , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hBrush , ifcIDtYPEdRAWINGtOOL_BRUSH , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hFont  , ifcIDtYPEdRAWINGtOOL_FONT  , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hBitmap , ifcIDtYPEdRAWINGtOOL_BITMAP , hDrawWindowP , count2S( colsP , rowsP ) ) ;
    {
        handleC hPrior( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
        third.winSelectDrawingToolF( tinP , hDraw , hPen    , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hBrush  , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hFont   , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hBitmap , hPrior ) ; hPrior.resetF() ;

              HANDLEaPPnOTEScOUNTcLASS& cAppNotesDraw   = hDraw ;
        const HANDLEaPPnOTEScOUNTcLASS& cAppNotesBitmap = hBitmap ;
        cAppNotesDraw.c1 = cAppNotesBitmap.c1 ;
        cAppNotesDraw.c2 = cAppNotesBitmap.c2 ;
        //LOGrAWtID4( "bitmapOldC::bitmapOldC (cCols,cRows): " , cAppNotesDraw.c1 , " " , cAppNotesDraw.c2 ) ;
    }

    third.winSetTextAlignF( tinP , hDraw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609f* : 3func.3609f002.bitmapoldc.bitmapoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609f* : 3func.3609f003.bitmapoldc.bitmapoldc BEGIN
#define DDNAME       "3func.3609f003.bitmapoldc.bitmapoldc"
#define DDNUMB      (countT)0x3609f003
#define IDFILE      (countT)0x1322


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bitmapOldC::bitmapOldC( tinS& tinP , etherC& etherP , const countT colsP , const countT rowsP ) :/*1*/
hDraw( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ,
hBitmap( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hFont( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hPen( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ,
hBrush( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL )
{
    thirdC& third = etherP ;

    third.winOpenBitmapPseudodeviceF( tinP , hDraw , handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWpRIVATE ) ) ;
    __Z( hDraw ) ;
    third.winOpenDrawingToolF( tinP , hPen   , ifcIDtYPEdRAWINGtOOL_PEN   , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hBrush , ifcIDtYPEdRAWINGtOOL_BRUSH , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hFont  , ifcIDtYPEdRAWINGtOOL_FONT  , hDraw ) ;
    third.winOpenDrawingToolF( tinP , hBitmap , ifcIDtYPEdRAWINGtOOL_BITMAPmONOCHROME , count2S( colsP , rowsP ) ) ;
    {
        handleC hPrior( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_DRAWINGtOOL ) ;
        third.winSelectDrawingToolF( tinP , hDraw , hPen    , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hBrush  , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hFont   , hPrior ) ; hPrior.resetF() ;
        third.winSelectDrawingToolF( tinP , hDraw , hBitmap , hPrior ) ; hPrior.resetF() ;

              HANDLEaPPnOTEScOUNTcLASS& cAppNotesDraw   = hDraw ;
        const HANDLEaPPnOTEScOUNTcLASS& cAppNotesBitmap = hBitmap ;
        cAppNotesDraw.c1 = cAppNotesBitmap.c1 ;
        cAppNotesDraw.c2 = cAppNotesBitmap.c2 ;
        //LOGrAWtID4( "bitmapOldC::bitmapOldC (cCols,cRows): " , cAppNotesDraw.c1 , " " , cAppNotesDraw.c2 ) ;
    }

    third.winSetTextAlignF( tinP , hDraw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3609f* : 3func.3609f003.bitmapoldc.bitmapoldc END
