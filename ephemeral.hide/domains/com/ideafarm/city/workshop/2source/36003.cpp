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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003001.infodisks.infodisks BEGIN
#define DDNAME       "3func.36003001.infodisks.infodisks"
#define DDNUMB      (countT)0x36003001
#define IDFILE      (countT)0xe00


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1040001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 thirdP
*/
/**/

/*1*/infoDiskS::infoDiskS( tinS& tinP , thirdC& thirdP )/*1*/ :
third( thirdP ) ,
psttVolumeName( 0 ) ,
idVolume( 0 ) ,
idFileSystem( 0 ) ,
cBytesPerSector( 0 ) ,
cSectorsPerAllocationUnit( 0 ) ,
cAllocationUnits( 0 ) ,
cUnusedUnits( 0 ) ,
bLocal( 0 )
{
    _IO_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003001.infodisks.infodisks END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003002.infodisks.dt_infodisks BEGIN
#define DDNAME       "3func.36003002.infodisks.dt_infodisks"
#define DDNUMB      (countT)0x36003002
#define IDFILE      (countT)0xe01


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1040002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7500104.1.1.0.html\"\>7500104:  WAKEsHOW( "example.simplest.func.1040002.infoDiskS.dt_infoDiskS" )\</A\>
*/
/**/

/*1*/infoDiskS::~infoDiskS( voidT )/*1*/
{
    TINSL
    third.delF( tinP , psttVolumeName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003002.infodisks.dt_infodisks END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003003.infodisks.operator_shiftleft BEGIN
#define DDNAME       "3func.36003003.infodisks.operator_shiftleft"
#define DDNUMB      (countT)0x36003003
#define IDFILE      (countT)0xe02


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1040003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 infoDisk1P
*/
/**/

/*1*/infoDiskS& infoDiskS::operator<<( infoDisk1S& infoDisk1P )/*1*/
{
    idVolume                    = infoDisk1P.idVolume ;
    idFileSystem                = infoDisk1P.idFileSystem ;
    cSectorsPerAllocationUnit   = infoDisk1P.cSectorsPerAllocationUnit ;
    cAllocationUnits            = infoDisk1P.cAllocationUnits ;
    cUnusedUnits                = infoDisk1P.cUnusedUnits ;
    cBytesPerSector             = infoDisk1P.cBytesPerSector ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36003* : 3func.36003003.infodisks.operator_shiftleft END
