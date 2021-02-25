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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611c* : 3func.3611c002.papers.dt_papers BEGIN
#define DDNAME       "3func.3611c002.papers.dt_papers"
#define DDNUMB      (countT)0x3611c002
#define IDFILE      (countT)0x14e4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperS::~paperS( voidT )/*1*/
{
    TINSL
    PUSE( tinP , *(byteT**)&pPoint ) ;
    PUSE( tinP , *(byteT**)&pPointTail ) ;
    PUSE( tinP , *(byteT**)&pFlagsTail ) ;
    PUSE( tinP , *(byteT**)&pcSize ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611c* : 3func.3611c002.papers.dt_papers END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611c* : 3func.3611c003.papers.papers BEGIN
#define DDNAME       "3func.3611c003.papers.papers"
#define DDNUMB      (countT)0x3611c003
#define IDFILE      (countT)0x14e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperS::paperS( tinS& tinP , const countT cGlyphP , const countT cPointP ) :/*1*/
cGlyph( cGlyphP ) ,
pcSize( 0 ) ,
pFlagsTail( 0 ) ,
pPointTail( 0 ) ,
cPoint( cPointP ) ,
pPoint( 0 ) ,
offos( 0 ) ,
offop( 0 )
{
    PUSE.newF( tinP , LF , *(byteT**)&pcSize , sizeof( countT   ) * cGlyphP ) ; ___( pcSize ) ;
    PUSE.newF( tinP , LF , *(byteT**)&pFlagsTail , sizeof( flagsT   ) * cGlyphP ) ; ___( pFlagsTail ) ;
    PUSE.newF( tinP , LF , *(byteT**)&pPointTail , sizeof( cPoint2S ) * cGlyphP ) ; ___( pPointTail ) ;
    PUSE.newF( tinP , LF , *(byteT**)&pPoint , sizeof( cPoint2S ) * cPointP ) ; ___( pPoint ) ;

    thirdC::c_memsetIF( tinP , (byteT*)pcSize     , sizeof( countT   ) * cGlyphP ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pFlagsTail , sizeof( flagsT   ) * cGlyphP ) ; //INTENTIONAL ILLEGAL FLAG VALUES, FOR SPEED ; DO NOT USE FV()
    //NOT NEEDED: thirdC::c_memsetIF( tinP , (byteT*)pPointTail , sizeof( cPoint2S ) * cGlyphP ) ;
    //NOT NEEDED: thirdC::c_memsetIF( tinP , (byteT*)pPoint , sizeof( cPoint2S  ) * cPointP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3611c* : 3func.3611c003.papers.papers END
