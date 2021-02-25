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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a001.recordc.dt_recordc BEGIN
#define DDNAME       "3func.3610a001.recordc.dt_recordc"
#define DDNUMB      (countT)0x3610a001
#define IDFILE      (countT)0x1490


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/recordC::~recordC( voidT )/*1*/
{
    TINSL

    if( pczName[ 0 ] != LISTnAME_ROOT || pczName[ 1 ] != LISTnAME_ROOTaPPLICATION || pczName[ 2 ] != LISTnAME_GLOBALrECORD || pczName[ 3 ] )
    {
        countT idFlushOld = processGlobal1S::_processGlobal1I_IF()._poolC_idFlushLath ;
        countT idFlushMin = idFlushOld + 2 ;
        
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( processGlobal1S::_processGlobal1I_IF()._poolC_idFlushLath < idFlushMin ) { ++ s ; thirdC::dosSleepIF( tinP , TOCK >> 3 ) ; }
        THREADmODE1rESTORE

        countVSP vspIdUpdateCompleted = listC::countIF( tinP , hList , count2S( LISTnAME_IDuPDATEcOMPLETED ) ) ;
    
        THREADmODE3oN( flTHREADmODE3_ALLOWwRITEABLEpOINTERgET )
        *(countT*)vspIdUpdateCompleted = idUpdate ;
        THREADmODE3rESTORE
    }

    puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;

    if( pEditOut ) DELlIST( fieldEditParamOutC , pEditOut ) ;

    PUSE( tinP , *(byteT**)&pczName       ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a001.recordc.dt_recordc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a002.recordc.recordc BEGIN
#define DDNAME       "3func.3610a002.recordc.recordc"
#define DDNUMB      (countT)0x3610a002
#define IDFILE      (countT)0x1491


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/recordC::recordC( tinS& tinP , const countT* const pczNameP , const flagsT flagsP ) :/*1*/
grabitx( tinP , TAG( TAGiDnULL ) ) ,
pczName( 0 ) ,
hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ,
cFieldName( 0 ) ,
flagsFieldOpen( flLISToPEN_null ) ,
pEditOut( 0 ) ,
idUpdate( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        LNV( pczNameP ) ;
        FV(flLISToPEN,flagsP) ;
        if( POOP ) return ;
    }

    if( pczNameP[ 0 ] != LISTnAME_ROOT || pczNameP[ 1 ] != LISTnAME_ROOTaPPLICATION || pczNameP[ 2 ] != LISTnAME_GLOBALrECORD || pczNameP[ 3 ] )
    {
        recordC globals( tinP , count4S( LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , LISTnAME_GLOBALrECORD ) ) ;
    
        countVSP vspIdUpdateLath = listC::countIF( tinP , globals , count2S( LISTnAME_IDuPDATElATH ) ) ;
        THREADmODE3oN( flTHREADmODE3_ALLOWwRITEABLEpOINTERgET )
        countT*  pcIdUpdate = vspIdUpdateLath ;
        THREADmODE3rESTORE
    
        countT* pcu = (countT*)&idUpdate ;
        do *pcu = 1 + incv02AM( *pcIdUpdate ) ;
        while( !*pcu ) ;
    }

    ZE( countT , cba ) ;
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        cba = sizeof( countT ) * ( 1 + thirdC::c_strlenIF( tinP , pczNameP ) ) ;
        PUSE.newF( tinP , LF , *(byteT**)&pczName , cba ) ; ___( pczName ) ;
    }

    __Z( pczName ) ;
    if( !POOP )
    {
        thirdC::c_memcpyIF( tinP , (byteT*)pczName , (byteT*)pczNameP , cba ) ;
        listC::openIF( tinP , hList , pczName , flagsP ) ;
    }

    if( pczName[ 0 ] != LISTnAME_ROOT || pczName[ 1 ] != LISTnAME_ROOTaPPLICATION || pczName[ 2 ] != LISTnAME_GLOBALrECORD || pczName[ 3 ] )
    {
        countVSP vspIdUpdateBegun = listC::countIF( tinP , hList , count2S( LISTnAME_IDuPDATEbEGUN     ) ) ;
        
        THREADmODE3oN( flTHREADmODE3_ALLOWwRITEABLEpOINTERgET )
        *(countT*)vspIdUpdateBegun = idUpdate ;
        THREADmODE3rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a002.recordc.recordc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a003.recordc.fieldopenflagsf BEGIN
#define DDNAME       "3func.3610a003.recordc.fieldopenflagsf"
#define DDNUMB      (countT)0x3610a003
#define IDFILE      (countT)0x1492


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT recordC::fieldOpenFlagsF( tinS& tinP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        FV(flLISToPEN,flagsP) ;
        if( POOP ) return 0 ;
    }

    flagsT flagsSave = flagsFieldOpen ;
                       flagsFieldOpen = flagsP ;
    return flagsSave ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a003.recordc.fieldopenflagsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a004.recordc.operator_shiftleft BEGIN
#define DDNAME       "3func.3610a004.recordc.operator_shiftleft"
#define DDNUMB      (countT)0x3610a004
#define IDFILE      (countT)0x1493


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/recordC& recordC::operator <<( const countT cNameP )/*1*/
{
    TINSL

    cFieldName = cNameP ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a004.recordc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a005.recordc.operator_shiftleft BEGIN
#define DDNAME       "3func.3610a005.recordc.operator_shiftleft"
#define DDNUMB      (countT)0x3610a005
#define IDFILE      (countT)0x1494


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/recordC& recordC::operator <<( const fieldEditParamInC& inP )/*1*/
{
    TINSL

    if( pEditOut )
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        DELlIST( fieldEditParamOutC , pEditOut ) ;
    }

    countT pczField[] = { cFieldName , 0 } ;
    listC::fieldIF( tinP , pEditOut , hList , pczField , inP , LF ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a005.recordc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a006.recordc.operator_shiftright BEGIN
#define DDNAME       "3func.3610a006.recordc.operator_shiftright"
#define DDNUMB      (countT)0x3610a006
#define IDFILE      (countT)0x1495


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/recordC& recordC::operator >>( fieldEditParamOutC*& pOutP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
        __( pOutP ) ;
        if( POOP ) return *this ;
    }

    if( pEditOut )
    {
        pOutP = pEditOut ;
                pEditOut = 0 ;
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a006.recordc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a007.recordc.chatterf BEGIN
#define DDNAME       "3func.3610a007.recordc.chatterf"
#define DDNUMB      (countT)0x3610a007
#define IDFILE      (countT)0x1496


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT recordC::chatterF( tinS& tinP , flagsT flagsP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        FV( flLISTwALKcHATTER , flagsP ) ;
        if( POOP ) return flagsRC ;
    }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkChatterCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_IGNOREdELETErEQUESTEDbIT | flLISTwALK_null ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = *pczName ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] = flagsP ;
    flagsRC |= walkF( tinP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a007.recordc.chatterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a008.recordc.walkf BEGIN
#define DDNAME       "3func.3610a008.recordc.walkf"
#define DDNUMB      (countT)0x3610a008
#define IDFILE      (countT)0x1497


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT recordC::walkF( tinS& tinP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_TINaRGSpUSHED ) ) ; //INTENDED TO FORCE APPLICATION CODE TO PUSH THE TIN ARGS AND SET THEM BEFORE EACH CALL TO ME
        __( !tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.cRecurseP ) ;
        FV( flLISTwALK , tinP.ta.pushed.u.listWalk.walk.flagsWalkP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pOffWothP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleLoP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleHiP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) ;
        __Z( hList ) ;
        if( POOP ) return flagsRC ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    listC& list = *(listC*)hList.osF( ifcIDtYPEhANDLE_LISTING ) ;
    flagsT flagsSave = tinP.ta.pushed.u.listWalk.walk.flagsWalkP ;
                       tinP.ta.pushed.u.listWalk.walk.flagsWalkP |= flLISTwALK_CALLERgRABBEDrOOT ;
    flagsRC |= list.walkF( tinP ) ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flagsSave ;
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610a* : 3func.3610a008.recordc.walkf END
