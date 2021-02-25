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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084001.poopc.dt_poopc BEGIN
#define DDNAME       "3func.36084001.poopc.dt_poopc"
#define DDNUMB      (countT)0x36084001
#define IDFILE      (countT)0x127c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/poopC::~poopC( voidT )/*1*/
{
    putNegAM( fingerprint , FINGERnEG_POOPczOMBIE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084001.poopc.dt_poopc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084002.poopc.poopc BEGIN
#define DDNAME       "3func.36084002.poopc.poopc"
#define DDNUMB      (countT)0x36084002
#define IDFILE      (countT)0x127d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/poopC::poopC( const flagsT flagsP ) :/*1*/
fingerprint( 0 ) ,
flagsSave( ( putNegAM( fingerprint , FINGERnEG_POOPc ) , flagsP ) )
{
    resetF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084002.poopc.poopc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084003.poopc.operator_const_countt_ref BEGIN
#define DDNAME       "3func.36084003.poopc.operator_const_countt_ref"
#define DDNUMB      (countT)0x36084003
#define IDFILE      (countT)0x127e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//I AM NOT REALLY A CONST FUNCTION ; I WILL MODIFY *this DURING SHUTDOWN
//THE COMPILER IS NOT INFORMED OF THIS INTENTIONALLY
//THE IMPLICATION IS THAT THE poop MEMBER OF AN INSTANCE OF A CLASS MIGHT CHANGE EVEN IF THE INSTANCE IS CONST OR THE FUNCTION THAT CALLS ME IS CONST

/*1*/poopC::operator const countT&( voidT ) const/*1*/
{
    if( getNegAM( fingerprint ) != FINGERnEG_POOPc )
    {
        //TINSL

        //SEE: THIS OCCURS DURING windowOldC DESTRUCTION IF SOME SADAMS STILL EXIST
        if( getNegAM( fingerprint ) == FINGERnEG_POOPczOMBIE )  //OBSERVED DURING SHUTDOWN 0b2c5f
        {
            //CONoUTrAW9( "poopC::op countT& zombie fingerprint [ebp,esp,this,fingerprint]: " , ebpAM() , " " , espAM() , " " , this , " " , fingerprint , "\r\n" ) ;
            BLAMMO ;
        }
        else
        {
            //CONoUTrAW9( "poopC::op countT& [ebp,esp,this,fingerprint]: " , ebpAM() , " " , espAM() , " " , this , " " , fingerprint , "\r\n" ) ;
            BLAMMO ;
        }
    }

    if( F(processGlobal1I.flCt) & flCTdTg_napSlabI && !( F(processGlobal1I.flDt) & flCTdTg_napSlabI ) && slabS::slabF().flagsi & fliSLABs_SHUTDOWN && !idSubType )
    {
        ((poopC*)this)->idType = ifcIDtYPEpOOP_JUICYlUCY ;
        ((poopC*)this)->idSubType = 1 ;
    }

    return idSubType ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084003.poopc.operator_const_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084004.poopc.gruntf BEGIN
#define DDNAME       "3func.36084004.poopc.gruntf"
#define DDNUMB      (countT)0x36084004
#define IDFILE      (countT)0x127f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 idLineP
 idiFileP
 pbBitsP
 idSubTypeP
 idTypeP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001034f.ifcIDtYPEpOOP!||
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00101dd.flGRUNT!||
*/
/**/

/*1*/voidT poopC::gruntF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP , const countT idSubTypeP , const countT idTypeP )/*1*/
{
    if( getNegAM( fingerprint ) != FINGERnEG_POOPc ) { BLAMMO ; }

    if( idSubTypeP && !setIfZeAM( idSubType , idSubTypeP ) )
    {
        flagsT tmSave = tinP.flagsThreadMode1 ;
        tinP.flagsThreadMode1 &= ~( F(flTHREADmODE1_UPDATEtIN) ) ; //CONJ: NO LONGER NEEDED (IF IN OUT IS REMOVED)

        idType = idTypeP ;
        if( idTypeP == ifcIDtYPEpOOP_FIRED ) flags &= ~( F(flPOOP_SMELLY) ) ;
        idLineGrunt = idLineP ;
        idiFileGrunt = idiFileP ;

        const boolT bTrace = !( F(tinP.flagsThreadMode1) & flTHREADmODE1_QUIETiMPOTENCE ) && F(processGlobal1I.flCt) & flCTdTg_exceptionHandlerRegistered && !( F(processGlobal1I.flDt) & flCTdTg_exceptionHandlerRegistered ) ; //SILENCES EARLY/LATE TRACING

        const boolT bRaiseException =

            !( F(tinP.flagsThreadMode1) & flTHREADmODE1_QUIETiMPOTENCE )
            &&
            ( F(flags) & flPOOP_SMELLY || F(tinP.flagsThreadMode2) & flTHREADmODE2_SMELLY )
            &&
            !( slabS::slabF().flagsi & fliSLABs_SHUTDOWN )

        ;

        if( bTrace )
        {
            //if( tinP.monitor.idThread == ifcIDtHREADlOW_tmWatchF )
            //{
            //    countT foo = 2 ;
            //}

            OStEXT(   ostoSay , TUCK << 2 ) ;
            OStEXTAK( ostoSay , "gruntF (" ) ;
            OStEXTA(  ostoSay , idTypeP == ifcIDtYPEpOOP_FIRED                          ? " fired"       : "" ) ;
            OStEXTA(  ostoSay , F(tinP.flagsThreadMode1) & flTHREADmODE1_QUIETiMPOTENCE ? " quiet"       : "" ) ;
            OStEXTA(  ostoSay , F(flags) & flPOOP_SMELLY                                ? " smelly"      : "" ) ;
            OStEXTA(  ostoSay , F(tinP.flagsThreadMode2) & flTHREADmODE2_SMELLY         ? " forceSmelly" : "" ) ;
            //OStEXTA(  ostoSay , slabS::slabF().flagsi & fliSLABs_SHUTDOWN             ? " shutdown"    : "" ) ;
            OStEXTAK( ostoSay , " ) at " ) ;
            OStEXTC(  ostoSay , idLineP , 0 ) ;
            OStEXTAK( ostoSay , "(" ) ;
            OStEXTC(  ostoSay , idiFileP , 0 ) ;
            OStEXTAK( ostoSay , ") idTypeP:" ) ;
            OStEXTC(  ostoSay , idTypeP , 0 ) ;
            OStEXTAK( ostoSay , " idSubTypeP:" ) ;
            OStEXTC(  ostoSay , idSubTypeP , 0 ) ;
                    
            etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT | flTRACE_NOcONSOLE | flTRACE_NOtELL ) ;
        }

        if( bRaiseException )
        {
            if( !( F(processGlobal1I.flCt) & flCTdTg_exceptionHandlerRegistered ) || F(processGlobal1I.flDt) & flCTdTg_exceptionHandlerRegistered )
                etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)"gruntF: raising exception with no exception handler registered" , flTRACE_PARAMETERiSoStEXT | flTRACE_NOcONSOLE | flTRACE_NOtELL ) ;
            else
                etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)"gruntF: raising exception"                                      , flTRACE_PARAMETERiSoStEXT | flTRACE_NOcONSOLE | flTRACE_NOtELL ) ;

            countT pcArgs[] = { idLineP , idiFileP , idSubTypeP , idTypeP } ;
            thirdC::dosRaiseExceptionIF( tinP , ifcIDeVENTeXCEPTIONmONITORED_GRUNT , pcArgs , sizeof pcArgs / sizeof pcArgs[ 0 ] ) ;
        }

        tinP.flagsThreadMode1 = tmSave ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084004.poopc.gruntf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084005.poopc.resetf BEGIN
#define DDNAME       "3func.36084005.poopc.resetf"
#define DDNUMB      (countT)0x36084005
#define IDFILE      (countT)0x1280


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
*/
/**/

/*1*/voidT poopC::resetF( voidT )/*1*/
{
    flags = flagsSave ;
    idiFileGrunt = idLineGrunt = idSubType = idType = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084005.poopc.resetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084006.poopc.chatterf BEGIN
#define DDNAME       "3func.36084006.poopc.chatterf"
#define DDNUMB      (countT)0x36084006
#define IDFILE      (countT)0x1281


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
*/
/**/

/*1*/voidT poopC::chatterF( tinS& tinP , const countT idLineP , const countT idiFileP ) const/*1*/
{
    //LOGrAW3( "sniff sniff poopC object grunt " , idSubType , "\r\n" ) ;
    //POPUP( "chatterF: sniff sniff" ) ;

    //tinP.pc Utility[ 0 ] = idLineP ;
    //tinP.pc Utility[ 1 ] = idiFileP ;
    //tinP.pc Utility[ 2 ] = idLineGrunt ;
    //tinP.pc Utility[ 3 ] = idiFileGrunt ;
    //tinP.pc Utility[ 4 ] = idSubType ;

    if( tinP.pEther )
    {
        OStEXT(   ostoSay , TUCK << 2 ) ;
        OStEXTA(  ostoSay , ( F(flags) & flPOOP_SMELLY ? "poopC sniff sniff [idLineChatter,idiFileChatter,idLineGrunt,idiFileGrunt,idSubType]:    " : "poopC [idLineChatter,idiFileChatter,idLineGrunt,idiFileGrunt,idSubType]:    " ) ) ;
        OStEXTC(  ostoSay , idLineP , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idiFileP , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idLineGrunt , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idiFileGrunt , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idSubType , ' ' ) ;

        etherC::etRockIF( tinP ).traceF( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36084* : 3func.36084006.poopc.chatterf END
