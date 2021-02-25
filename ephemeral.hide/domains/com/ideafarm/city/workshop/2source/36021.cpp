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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021001.infodisk1s.dt_infodisk1s BEGIN
#define DDNAME       "3func.36021001.infodisk1s.dt_infodisk1s"
#define DDNUMB      (countT)0x36021001
#define IDFILE      (countT)0x1014


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/infoDisk1S::~infoDisk1S( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021001.infodisk1s.dt_infodisk1s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021002.infodisk1s.infodisk1s BEGIN
#define DDNAME       "3func.36021002.infodisk1s.infodisk1s"
#define DDNUMB      (countT)0x36021002
#define IDFILE      (countT)0x1015


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12c0001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 thirdP
*/
/**/

/*1*/infoDisk1S::infoDisk1S( tinS& tinP , thirdC& thirdP )/*1*/ :
third( thirdP ) ,
idVolume( 0 ) ,
idFileSystem( 0 ) ,
cBytesPerSector( 0 ) ,
cSectorsPerAllocationUnit( 0 ) ,
cAllocationUnits( 0 ) ,
cUnusedUnits( 0 )
{
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_
    BREAKiF ;
    BREAKiF ;
    if( postVolumeName ) *postVolumeName = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021002.infodisk1s.infodisk1s END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021004.infodisk1s.operator_shiftleft BEGIN
#define DDNAME       "3func.36021004.infodisk1s.operator_shiftleft"
#define DDNUMB      (countT)0x36021004
#define IDFILE      (countT)0x1016


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12c0002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 infoDisk1aP
*/
/**/

/*1*/infoDisk1S& infoDisk1S::operator<<( infoDisk1aS& infoDisk1aP )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    //IN_E
    idFileSystem                = infoDisk1aP.idFileSystem ;
    cSectorsPerAllocationUnit   = infoDisk1aP.cSectorsPerAllocationUnit ;
    cAllocationUnits            = infoDisk1aP.cAllocationUnits ;
    cUnusedUnits                = infoDisk1aP.cUnusedUnits ;
    cBytesPerSector             = infoDisk1aP.cBytesPerSector ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021004.infodisk1s.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021005.infodisk1s.operator_shiftleft BEGIN
#define DDNAME       "3func.36021005.infodisk1s.operator_shiftleft"
#define DDNUMB      (countT)0x36021005
#define IDFILE      (countT)0x1017


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.12c0003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 infoDisk1bP
*/
/**/

/*1*/infoDisk1S& infoDisk1S::operator<<( infoDisk1bS& infoDisk1bP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    //IN_E
    idVolume = infoDisk1bP.idVolume ;
    thirdC::c_strncpyIF( tinP , postVolumeName , infoDisk1bP.postVolumeName , sizeof postVolumeName ) ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36021* : 3func.36021005.infodisk1s.operator_shiftleft END
