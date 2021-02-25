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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d002.restartc.dt_restartc BEGIN
#define DDNAME       "3func.3605d002.restartc.dt_restartc"
#define DDNUMB      (countT)0x3605d002
#define IDFILE      (countT)0x11cb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1800002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/restartC::~restartC( voidT )/*1*/
{
    boolT bTop = *pprTop == this ;

    if( bTop )
    {
        if( prU ) { BLAMMO ; }
        *pprTop = prD ;
    }

    if( prU ) prU->prD = prD ;
    if( prD ) prD->prU = prU ;

    if( bTop ) osTid = 0 ; //NEEDED SO THAT rootExceptionFilterF WILL SEE THAT MY BACKING SLOT IS AVAILABLE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d002.restartc.dt_restartc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d003.restartc.restartc BEGIN
#define DDNAME       "3func.3605d003.restartc.restartc"
#define DDNUMB      (countT)0x3605d003
#define IDFILE      (countT)0x11cc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1800003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/restartC::restartC( tinS& tinP , countT idTypeEventAcceptP , bAcceptEventFT pbAcceptEventFP , countT* const pcArgP ) :/*1*/
//INTENTIONALLY NOT INITIALIZED BECAUSE THIS IS ONLY USED WHEN *this IS FLOAT FOR THE THREAD, AND IT IS ALREADY SET: osTid( 0 ) ,
pprTop( &tinP.pRestart ) ,
prD( tinP.pRestart ) ,
prU( 0 ) ,
cRestarted( 0 ) ,
idTypeEventAccept( idTypeEventAcceptP ) ,
flags( flRESTARTc_null ) ,
pbAcceptEventF( pbAcceptEventFP ) ,
pcArg( pcArgP )
{
    //U::TO FIND A BUG
    countT ebpMeDebug     = ebpAM() ;
    countT ebpCallerDebug = *(countT*)ebpMeDebug ;
    countT meDebug        = (countT)this ;

    //VERIFY THAT NO INSTANCES DERIVED FROM cleanC HAVE BEEN CT IN THE CALLER'S STACK FRAME
    {
        countT ebpMe     = ebpAM() ;
        countT ebpCaller = *(countT*)ebpMe ;
        if( ebpCaller > (countT)tinP.pClean && (countT)tinP.pClean > ebpMe )
        {
            logGF( "restartC: error: cleanC objects have already been constructed in the caller's stack frame\r\n" ) ;
            BLAMMO ;
        }
    }

    thirdC::c_memsetIF( (byteT*)pcRegisters , sizeof pcRegisters ) ;
    if( prD ) prD->prU = this ;
    *pprTop = this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d003.restartc.restartc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d004.restartc.restartc BEGIN
#define DDNAME       "3func.3605d004.restartc.restartc"
#define DDNUMB      (countT)0x3605d004
#define IDFILE      (countT)0x11cd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to me anywhere except in rootExceptionFilterF
*/
/**/

/*1*/restartC::restartC( restartC*& prTopP , countT idTypeEventAcceptP , bAcceptEventFT pbAcceptEventFP , countT* const pcArgP ) :/*1*/
//INTENTIONALLY NOT INITIALIZED BECAUSE THIS IS ONLY USED WHEN *this IS ROOT FOR THE THREAD, AND IT IS ALREADY SET: osTid( 0 ) ,
pprTop( &prTopP ) ,
prD( prTopP ) ,
prU( 0 ) ,
cRestarted( 0 ) ,
idTypeEventAccept( idTypeEventAcceptP ) ,
flags( flRESTARTc_null ) ,
pbAcceptEventF( pbAcceptEventFP ) ,
pcArg( pcArgP )
{
    thirdC::c_memsetIF( (byteT*)pcRegisters , sizeof pcRegisters ) ;
    if( prD ) prD->prU = this ;
    *pprTop = this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d004.restartc.restartc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d005.restartc.operator_countt BEGIN
#define DDNAME       "3func.3605d005.restartc.operator_countt"
#define DDNUMB      (countT)0x3605d005
#define IDFILE      (countT)0x11ce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1800004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/restartC::operator countT( voidT )/*1*/
{
    return cRestarted ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d005.restartc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d006.restartc.bacceptf BEGIN
#define DDNAME       "3func.3605d006.restartc.bacceptf"
#define DDNUMB      (countT)0x3605d006
#define IDFILE      (countT)0x11cf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$bAcceptF.0.html\"\>instances\</A\>
\<A HREF=\"5.1800005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT restartC::bAcceptF( tinS* const pTinP , tellInfoSysExceptionS& infoP )/*1*/
{
    return pbAcceptEventF
        ? (*pbAcceptEventF)( pTinP , infoP , pcArg )
        : !idTypeEventAccept
            ? 1
            : idTypeEventAccept == infoP.idException
    ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605d* : 3func.3605d006.restartc.bacceptf END
