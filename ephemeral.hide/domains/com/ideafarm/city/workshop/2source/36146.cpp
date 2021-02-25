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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36146* : 3func.36146002.fileNameC.dt_fileNameC BEGIN
#define DDNAME       "3func.36146002.fileNameC.dt_fileNameC"
#define DDNUMB      (countT)0x36146002
#define IDFILE      (countT)0x158d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/fileNameC::~fileNameC( voidT )/*1*/
{
    TINSL
    ether.delF( tinP , psttLong  ) ;
    ether.delF( tinP , psttPath  ) ;
    ether.delF( tinP , psttShort ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36146* : 3func.36146002.fileNameC.dt_fileNameC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36146* : 3func.36146003.fileNameC.fileNameC BEGIN
#define DDNAME       "3func.36146003.fileNameC.fileNameC"
#define DDNUMB      (countT)0x36146003
#define IDFILE      (countT)0x158e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/fileNameC::fileNameC( tinS& tinP , etherC& etherP , const strokeS* const psttP ) :/*1*/
ether( etherP ) ,
psttLong( 0 ) ,
psttPath( 0 ) ,
psttShort( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    boolT bDir = psttP[ CSpREFIX - 1 + psttP->idAdam ].idAdam == '/' ;

    etherP.strMakeF( tinP , LF , psttLong , psttP ) ; ___( psttLong ) ;
    etherP.strBisectF( tinP , psttPath , psttShort , psttLong , T("/") , - 1 - !!bDir , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPath ) ; ___( psttShort ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36146* : 3func.36146003.fileNameC.fileNameC END
