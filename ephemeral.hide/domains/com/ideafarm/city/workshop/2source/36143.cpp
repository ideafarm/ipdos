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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143002.fileWindowsC.dt_fileWindowsC BEGIN
#define DDNAME       "3func.36143002.fileWindowsC.dt_fileWindowsC"
#define DDNUMB      (countT)0x36143002
#define IDFILE      (countT)0x1586


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/fileWindowsC::~fileWindowsC( voidT )/*1*/
{
    if( offLo || offHi )
    {
        TINSL
        fileWindowC* pfw = (fileWindowC*)pbfw ;
        DELzOMBIE( pfw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143002.fileWindowsC.dt_fileWindowsC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143003.fileWindowsC.fileWindowsC BEGIN
#define DDNAME       "3func.36143003.fileWindowsC.fileWindowsC"
#define DDNUMB      (countT)0x36143003
#define IDFILE      (countT)0x1587


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/fileWindowsC::fileWindowsC( tinS& tinP , etherC& etherP , const strokeS* const psttFileP , const flagsT flagsP , const countT cTriesP ) :/*1*/
ether( etherP ) ,
flagsCt( flagsP ) ,
fi
(
    tinP , psttFileP , F(flagsP) & flFILEwINDOW_WRITE ? ifcOPENaCCESS_WR : ifcOPENaCCESS_R , 0 ,
    flOPENdETAILS_LOCnONE
    | ( F(flagsP) & flFILEwINDOW_DOnOTvALIDATE        ? flOPENdETAILS_DOnOTvALIDATE        : flOPENdETAILS_null )
    | ( F(flagsP) & flFILEwINDOW_DOnOTmAKEdIRiFnEEDED ? flOPENdETAILS_DOnOTmAKEdIRiFnEEDED : flOPENdETAILS_null )
    ,
    ifcOPENhOW_nFeO , flFILEaTTR_null , flFILEc_null , cTriesP
) ,
cbFileLo( 0 ) ,
cbFileHi( 0 ) ,
cbDoLo( 0 ) ,
cbDoHi( 0 ) ,
offLo( 0 ) ,
offHi( 0 )
{
    _IO_
    if( !POOP )
    {
        ZE( infoFileS* , pInfo ) ;
        ether.diskFileQueryF( tinP , pInfo , fi ) ;
        if( pInfo )
        {
            cbDoLo = cbFileLo = pInfo->cbUsed     ;
            cbDoHi = cbFileHi = pInfo->cbUsedHigh ;
        }
        DEL( pInfo ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143003.fileWindowsC.fileWindowsC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143004.fileWindowsC.getF BEGIN
#define DDNAME       "3func.36143004.fileWindowsC.getF"
#define DDNUMB      (countT)0x36143004
#define IDFILE      (countT)0x1588


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT fileWindowsC::getF( tinS& tinP , byteT*& pbP , countT& cbP , const countT cbWantP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( pbP ) ;
        __( cbP ) ;
        __( !cbWantP ) ;
        if( POOP ) return ;
    }

    if( cbDoHi || cbDoLo )
    {
        countT cbWindow = cbDoHi || cbDoLo >= cbWantP
            ? cbWantP
            : cbDoLo
        ;

        if( offLo || offHi )
        {
            fileWindowC* pfw = (fileWindowC*)pbfw ;
            DELzOMBIE( pfw ) ;
        }

        fileWindowC* pfw = new( 0 , tinP , pbfw , sizeof pbfw ) fileWindowC( tinP , ether , fi , offLo , offHi , cbWindow , flagsCt ) ;

        pbP = *pfw ;
        cbP = cbWindow ;

        if( cbDoLo < cbWindow ) cbDoHi -- ;
        cbDoLo -= cbWindow ;

        countT offLoLag = offLo ;
        offLo += cbWindow ;
        if( offLo < offLoLag ) offHi ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36143* : 3func.36143004.fileWindowsC.getF END
