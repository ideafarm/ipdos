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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d001.updnc.dt_updnc BEGIN
#define DDNAME       "3func.3604d001.updnc.dt_updnc"
#define DDNUMB      (countT)0x3604d001
#define IDFILE      (countT)0x1186


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16e0002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/upDnC::~upDnC( voidT )/*1*/
{
    TINSL
    dnF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d001.updnc.dt_updnc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d002.updnc.updnc BEGIN
#define DDNAME       "3func.3604d002.updnc.updnc"
#define DDNUMB      (countT)0x3604d002
#define IDFILE      (countT)0x1187


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16e0003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/upDnC::upDnC( tinS& tinP , countT idLineUseP , countT idiFileUseP , const byteT* const pbBitsUseP , countT idFileUseP , etherC& etherUseP ) :/*1*/
idLineUse( idLineUseP ) ,
idiFileUse( idiFileUseP ) ,
idFileUse( idFileUseP ) ,
pEtherUse( &etherUseP ) ,
pEcUse( 0 ) ,
pEtherSave( 0 ) ,
pEcSave( 0 )
{
    upF( tinP , idLineUse , idiFileUse , pbBitsUseP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d002.updnc.updnc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d003.updnc.dnf BEGIN
#define DDNAME       "3func.3604d003.updnc.dnf"
#define DDNUMB      (countT)0x3604d003
#define IDFILE      (countT)0x1188


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$dnF.0.html\"\>instances\</A\>
\<A HREF=\"5.16e0004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT upDnC::dnF( tinS& tinP )/*1*/
{
    if( F(tinP.flagsThreadMode1) & flTHREADmODE1_UPDATEtIN && !( tinP.monitor.idDirty % 2 ) )
    {
        tinP.monitor.idDirty ++ ;

        if( tinP.tally.bTally ) tinP.tally.pcExits[ idFileUse ] ++ ;

        tinP.monitor.pLFnest[     ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ] = _idLineNestSave ;
        tinP.monitor.pLFnest[    ( ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] = _idFileNestSave ;
        tinP.pIdInNest[       tinP.monitor.cInNest & OFFsLOTtINnESTmAX ] = _idInNestSave ;
        tinP.pIdProgressNest[ tinP.monitor.cInNest & OFFsLOTtINnESTmAX ] = _idProgressNestSave ;
        tinP.monitor.idStep ++ ;
        tinP.monitor.cInNest -- ;
        tinP.pLFstep[ ( tinP.monitor.idStep & OFFsLOTtINsTEPmAX ) << 1 ] = idLineUse & ~fliSTEP_FLAGmASK | fliSTEP_NESTcHANGE | fliSTEP_NESToUT ;
        tinP.pLFstep[ ( ( tinP.monitor.idStep & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] = idiFileUse ;
        tinP.monitor.idDirty ++ ;
    }

    tinP.pEther = pEtherSave ; //FOR SPEED, *Save ARE NOT ZEED
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d003.updnc.dnf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d004.updnc.upf BEGIN
#define DDNAME       "3func.3604d004.updnc.upf"
#define DDNUMB      (countT)0x3604d004
#define IDFILE      (countT)0x1189


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$upF.0.html\"\>instances\</A\>
\<A HREF=\"5.16e0005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT upDnC::upF( tinS& tinP , countT idLineUseP , countT idiFileUseP , const byteT* const pbBitsUseP )/*1*/
{
    idLineUse  = idLineUseP  ;
    idiFileUse = idiFileUseP ;
    if( pbBitsUseP ) ; //U::

    pEtherSave = tinP.pEther                   ;
                 tinP.pEther       = pEtherUse ;

    if( F(tinP.flagsThreadMode1) & flTHREADmODE1_UPDATEtIN && !( tinP.monitor.idDirty % 2 ) )
    {
        tinP.monitor.idDirty ++ ;
        tinP.monitor.idStep ++ ;
        tinP.monitor.cInNest ++ ;

        _idFileNestSave     = tinP.monitor.pLFnest[     ( ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ;
        _idLineNestSave     = tinP.monitor.pLFnest[     ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ] ;
        _idInNestSave       = tinP.pIdInNest[       tinP.monitor.cInNest & OFFsLOTtINnESTmAX ] ;
        _idProgressNestSave = tinP.pIdProgressNest[ tinP.monitor.cInNest & OFFsLOTtINnESTmAX ] ;
        tinP.pLFstep[ ( ( tinP.monitor.idStep      & OFFsLOTtINsTEPmAX ) << 1 ) + 1 ] =   tinP.monitor.pLFnest[ ( ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] = DDNUMB ;
        tinP.pLFstep[ ( tinP.monitor.idStep      & OFFsLOTtINsTEPmAX ) << 1 ] = ( tinP.monitor.pLFnest[ ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ] = ifcLINE & ~fliSTEP_FLAGmASK ) | fliSTEP_NESTcHANGE ;
        tinP.pIdInNest[ tinP.monitor.cInNest & OFFsLOTtINnESTmAX ] ++ ;
        tinP.monitor.idDirty ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604d* : 3func.3604d004.updnc.upf END
