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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5002.listingc.dt_listingc BEGIN
#define DDNAME       "3func.360e5002.listingc.dt_listingc"
#define DDNUMB      (countT)0x360e5002
#define IDFILE      (countT)0x141b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
derived classes can be dt either normally or by calling me
 if i detect that the destruction of the derived class has not yet begun, i will destroy it
  in this case, listingC members will be dt oo times
*/
/**/

/*1*/listingC::~listingC( voidT )/*1*/
{
    TINSL

    __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ) ;

    if( flagsi & fliLISTINGc_DESTRUCTING ) { __( flagsi & fliLISTINGc_GRABBED ) ; }
    else
    {
        flagsi |= fliLISTINGc_DESTRUCTING ;

        if( !( flagsi & fliLISTINGc_MIXINlIST ) )
        {
            if( !( flagsi & fliLISTINGc_MIXINdATUM ) )    { /*CONoUTrAW( "~listingC/+\r\n" )           ;*/ listingC*               pd =              (listingC*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~listingC/-\r\n" )             ;*/ }
            else
            {
                switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
                {
                    case ifcIDtYPEmIXINdATUM_countT     : { /*CONoUTrAW( "~listing_countT_C/+\r\n"     ) ;*/ listing_countT_C*     pd =     (listing_countT_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~listing_countT_C/-\r\n"      ) ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_blob       : { /*CONoUTrAW( "~listing_blob_C/+\r\n"       ) ;*/ listing_blob_C*       pd =       (listing_blob_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~listing_blob_C/-\r\n"        ) ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_countTstrz : { /*CONoUTrAW( "~listing_countTstrz_C/+\r\n" ) ;*/ listing_countTstrz_C* pd = (listing_countTstrz_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~listing_countTstrz_C/-\r\n"  ) ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_listingVSP : { /*CONoUTrAW( "~listing_listingVSP_C/+\r\n" ) ;*/ listing_listingVSP_C* pd = (listing_listingVSP_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~listing_listingVSP_C/-\r\n"  ) ;*/ break ; }
                    default                             : { BLAMMO                                                                                                                                                                    ;   break ; }
                }
            }
        }
        else
        {
            if( !( flagsi & fliLISTINGc_MIXINdATUM ) )    { /*CONoUTrAW3( "~listC/" , ((listC*)this)->idName , "/+\r\n" ) ;*/ listC* pd =              (listC*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW3( "~listC/" , ((listC*)this)->idName , "/-\r\n" ) ;*/ }
            else
            {
                switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
                {
                    case ifcIDtYPEmIXINdATUM_countT     : { /*CONoUTrAW( "~list_countT_C/+\r\n"        ) ;*/    list_countT_C*     pd =        (list_countT_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~list_countT_C/-\r\n"        )  ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_blob       : { /*CONoUTrAW( "~list_blob_C/+\r\n"          ) ;*/    list_blob_C*       pd =          (list_blob_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~list_blob_C/-\r\n"          )  ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_countTstrz : { /*CONoUTrAW( "~list_countTstrz_C/+\r\n"    ) ;*/    list_countTstrz_C* pd =    (list_countTstrz_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~list_countTstrz_C/-\r\n"    )  ;*/ break ; }
                    case ifcIDtYPEmIXINdATUM_listingVSP : { /*CONoUTrAW( "~list_listingVSP_C/+\r\n"    ) ;*/    list_listingVSP_C* pd =    (list_listingVSP_C*)this ; DELzOMBIE( pd ) ; /*CONoUTrAW( "~list_listingVSP_C/-\r\n"    )  ;*/ break ; }
                    default                             : { BLAMMO                                                                                                                                                                    ;   break ; }
                }
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5002.listingc.dt_listingc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5003.listingc.listingc BEGIN
#define DDNAME       "3func.360e5003.listingc.listingc"
#define DDNUMB      (countT)0x360e5003
#define IDFILE      (countT)0x141c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
must be a base class
*/
/**/

/*1*/listingC::listingC( tinS& tinP , const listC& listDadP , const flagsT flagsP ) :/*1*/
cRef( 0 ) ,
flagsi( fliLISTINGc_null ) ,
idTypeDatum( 0 ) ,
aptDad( tinP , (byteT*)&listDadP )
{
    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    if( !( F(flagsP) & flLISTINGc_DOnOTrEGISTERiNtIN ) )
    {
        __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc ) ) ;
        __( tinP.ta.pushed.u.listWalk.cbf.pNewP ) ;
        if( !tinP.ta.pushed.u.listWalk.cbf.pNewP ) tinP.ta.pushed.u.listWalk.cbf.pNewP = this ;
    }

    //CONoUTrAW( "listingC\r\n" ) ; 
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5003.listingc.listingc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5007.listingc.openf BEGIN
#define DDNAME       "3func.360e5007.listingc.openf"
#define DDNUMB      (countT)0x360e5007
#define IDFILE      (countT)0x141d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
thread desire must be ifcTHREADpRIORITY_SPINLOCK
 caller must remain RUSH until after hListP is destroyed
 to do this, caller can ct a grabitC instance
parameters
 tinP
 hListP
  must be null
 pczNameDadP
  must be 0 unless i am a listC instance
  else must be the fully qualified name of the listC instance that contains me
*/
/**/

/*1*/voidT listingC::openF( tinS& tinP , handleC& hListP , const countT* const pczNameDadP , countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( thirdC::dosPriorityIF( tinP ) - ifcTHREADpRIORITY_SPINLOCK ) ;
        __( ~hListP ) ;
        if( POOP ) return ;
    }

    _IO_

    //U:: TO FIND A BUG
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == 0x2b4 )
    {
        countT foo = 2 ;
    }

    ZE( countT , cName ) ;
    //if( this->flagsF() & fliLISTINGc_MIXINlIST )
    //{
    //    cName = ((listC*)this)->nameF() ;
    //    //ZE( osTextT* , postName ) ;
    //    //getListNameGF( tinP , postName , cName ) ; ___( postName ) ;
    //
    //    OStEXT(   ostoSay , TUCK << 1 ) ;
    //    OStEXTAK( ostoSay , "\r\n" ) ;
    //    OStEXTC(  ostoSay , tinP.monitor.idThread , 0 ) ;
    //    OStEXTAK( ostoSay , " | ++++  " ) ;
    //    OStEXTC(  ostoSay , cName , 0 ) ;
    //    //OStEXTA(  ostoSay , postName ) ;
    //    //PUSE( tinP , postName ) ;
    //    CONoUTrAW( ostoSay ) ;
    //}

    ZE( countT , idNameDebug ) ;
    flagsT flagsx = flGRABITc_SUPPRESScTdT | flGRABITc_SHARElAYER | flGRABITc_UNKEYED ; //CS:CODEsYNC 360e5007 35001126 "flGRABITc_UNKEYED" IS SPECIFIED TO AVOID NEEDING TO DOUBLE THE SIZE OF THE sexC ALLOCATION DROP FOR listingC INSTANCES.  sizeof( listingC ) IS CURRENTLY OPTIMAL.  ADDING A countT MEMBER TO HOLD A KEY WOULD CHANGE THE ALLOCATION DROP SIZE.
    if( flagsi & fliLISTINGc_MIXINlIST )
    {
        countT idName = ((listC*)this)->nameF( 0 ) ;
        idNameDebug = idName ;
        if
        (
            idName == LISTnAME_ROOT
            ||
            idName == LISTnAME_ROOTaPPLICATION
            ||
            (
                idName >= LISTnAME_ROOTsYSTEM1
                &&
                idName <= LISTnAME_ROOTsYSTEM8              //CS:CODEsYNC: 330e5007 33001126 3300039b
            )
        )
        flagsx |= flGRABITc_RECURSEuSINGtINs ;
    }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) , flagsi , ifcIDgRABITbIT_00 + offLISTINGgRABBEDbIT , *(grabitC*)0 , 0 , 0 , 0 , flagsx , 0 , idGrabLayerP ) ;

    //ZE( countT , cDebug ) ;
    //if( tinP.pc Utility[ 0 ] && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_KERNEL2MONITOR )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "openF /   grabbing [idName]: " ) ;
    //    OStEXTC(  ostoSay , idNameDebug , 0 ) ;
    //
    //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    //    cDebug = idNameDebug ;
    //}


    //U:: TO FIND A BUG
    OStEXT(   ostoSay , TUCK << 2 ) ;
    OStEXTCF( ostoSay , (countT)&flagsi , '0' ) ;
    OStEXTAK( ostoSay , " : ++++ GRABBING" ) ;
    //etherC::etRockIF( tinP ).traceF( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;

    grabitx.grabF( tinP , TAG( TAGiDnULL ) ) ;

    //U:: TO FIND A BUG
    OStEXTAK( ostoSay , " ++++ GRABBED" ) ;
    //etherC::etRockIF( tinP ).traceF( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;

    //if( tinP.pc Utility[ 0 ] && tinP.pAdamGlobal1->idAdam == ifcIDaDAM_KERNEL2MONITOR )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "openF /   grabbed  [idName]: " ) ;
    //    OStEXTC(  ostoSay , idNameDebug , 0 ) ;
    //
    //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    //}

    //if( this->flagsF() & fliLISTINGc_MIXINlIST )
    //{
    //    //ZE( osTextT* , postName ) ;
    //    //getListNameGF( tinP , postName , cName ) ; ___( postName ) ;
    //
    //    OStEXT(   ostoSay , TUCK << 1 ) ;
    //    OStEXTAK( ostoSay , "\r\n" ) ;
    //    OStEXTC(  ostoSay , tinP.monitor.idThread , 0 ) ;
    //    OStEXTAK( ostoSay , " | +++++ " ) ;
    //    OStEXTC(  ostoSay , cName , 0 ) ;
    //    //OStEXTA(  ostoSay , postName ) ;
    //    //PUSE( tinP , postName ) ;
    //    CONoUTrAW( ostoSay ) ;
    //}

    hListP.osF( ifcIDtYPEhANDLE_LISTING , (countT)this ) ;

    if( !( flagsi & fliLISTINGc_MIXINlIST ) ) { __( pczNameDadP ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5007.listingc.openf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5008.listingc.operator_subtract BEGIN
#define DDNAME       "3func.360e5008.listingc.operator_subtract"
#define DDNUMB      (countT)0x360e5008
#define IDFILE      (countT)0x141e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sCountT listingC::operator -( const listingC& lP ) const/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    const byteT flagsMe = (byteT)(    flagsi & fliLISTINGc_maskTypeBits ) ; //CS: CODEsYNC: 21e0008 00104af
    const byteT flagsHe = (byteT)( lP.flagsi & fliLISTINGc_maskTypeBits ) ; //CS: CODEsYNC: 21e0008 00104af
                                                                                                                          
    ZE( sCountT , heavy ) ;
    if( flagsMe & fliLISTINGc_MIXINlIST && flagsHe & fliLISTINGc_MIXINlIST ) heavy = ((listC*)this)->nameF() - ((listC*)&lP)->nameF() ;

    if( !heavy ) heavy = flagsMe - flagsHe ;

    if( !heavy ) heavy = idTypeDatum - lP.idTypeDatum ;

    if( !heavy && idTypeDatum )
    {
        if( flagsMe & fliLISTINGc_MIXINlIST ) switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
        {
            case ifcIDtYPEmIXINdATUM_countT     : { heavy =                           *(countT*)*(list_countT_C*)this -                           *(countT*)*(list_countT_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_blob       : { heavy =                                       *(list_blob_C*)this -                                       *(list_blob_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_countTstrz : { heavy =                                 *(list_countTstrz_C*)this -                                 *(list_countTstrz_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_listingVSP : { heavy =    (const listingC*)(listingVSP)*(list_listingVSP_C*)this -    (const listingC*)(listingVSP)*(list_listingVSP_C*)&lP ; break ; }
            default                             : { BLAMMO                                                                                                                       ; break ; }
        }
        else switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
        {
            case ifcIDtYPEmIXINdATUM_countT     : { heavy =                        *(countT*)*(listing_countT_C*)this -                        *(countT*)*(listing_countT_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_blob       : { heavy =                                    *(listing_blob_C*)this -                                    *(listing_blob_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_countTstrz : { heavy =                              *(listing_countTstrz_C*)this -                              *(listing_countTstrz_C*)&lP ; break ; }
            case ifcIDtYPEmIXINdATUM_listingVSP : { heavy = (const listingC*)(listingVSP)*(listing_listingVSP_C*)this - (const listingC*)(listingVSP)*(listing_listingVSP_C*)&lP ; break ; }
            default                             : { BLAMMO                                                                                                                       ; break ; }
        }
    }

    return heavy ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5008.listingc.operator_subtract END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5009.listingc.crefdatumf BEGIN
#define DDNAME       "3func.360e5009.listingc.crefdatumf"
#define DDNUMB      (countT)0x360e5009
#define IDFILE      (countT)0x141f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT listingC::cRefDatumF( voidT ) const/*1*/
{
    //FOR MAX SPEED, NO OVERHEAD CODE ( _IO_ IFbEcAREFUL )

    const byteT flagsMe = (byteT)(    flagsi & fliLISTINGc_maskTypeBits ) ; //CS: CODEsYNC: 21e0008 00104af

    ZE( countT , cRef ) ;
    if( idTypeDatum )
    {
        if( flagsMe & fliLISTINGc_MIXINlIST ) switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
        {
            case ifcIDtYPEmIXINdATUM_countT     : { cRef =     ((list_countT_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_blob       : { cRef =       ((list_blob_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_countTstrz : { cRef = ((list_countTstrz_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_listingVSP : { cRef = ((list_listingVSP_C*)this)->cRefPrivateF() ; break ; }
            default                             : { BLAMMO                                            ; break ; }
        }
        else switch( idTypeDatum ) //CS:CODEsYNC: 00104b0 21e0006 21e0002 21e0008 21e0009 220000e
        {
            case ifcIDtYPEmIXINdATUM_countT     : { cRef =     ((listing_countT_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_blob       : { cRef =       ((listing_blob_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_countTstrz : { cRef = ((listing_countTstrz_C*)this)->cRefPrivateF() ; break ; }
            case ifcIDtYPEmIXINdATUM_listingVSP : { cRef = ((listing_listingVSP_C*)this)->cRefPrivateF() ; break ; }
            default                             : { BLAMMO                                               ; break ; }
        }
    }

    return cRef ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e5009.listingc.crefdatumf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500b.listingc.listingc BEGIN
#define DDNAME       "3func.360e500b.listingc.listingc"
#define DDNUMB      (countT)0x360e500b
#define IDFILE      (countT)0x1420


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
must be a base class
*/
/**/

/*1*/listingC::listingC( tinS& tinP , const flagsT flagsP ) :/*1*/
cRef( 0 ) ,
flagsi( fliLISTINGc_null ) ,
idTypeDatum( 0 )

{
    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    if( !( F(flagsP) & flLISTINGc_DOnOTrEGISTERiNtIN ) )
    {
        __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc ) ) ;
        __( tinP.ta.pushed.u.listWalk.cbf.pNewP ) ;
        if( !tinP.ta.pushed.u.listWalk.cbf.pNewP ) tinP.ta.pushed.u.listWalk.cbf.pNewP = this ;
    }

    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    //CONoUTrAW( "listingC\r\n" ) ; 
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500b.listingc.listingc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500b.listingc.namef BEGIN
#define DDNAME       "3func.360e500b.listingc.namef"
#define DDNUMB      (countT)0x360e500b
#define IDFILE      (countT)0x1420


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
*/
/**/

/*1*/countT listingC::nameF( sCountT idP ) const/*1*/
{
    listC* pList = flagsi & fliLISTINGc_MIXINlIST

        ? (listC*)this          
        : &APT( listC , aptDad )

    ;

    return pList->nameF( idP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500b.listingc.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500c.listingc.namef BEGIN
#define DDNAME       "3func.360e500c.listingc.namef"
#define DDNUMB      (countT)0x360e500c
#define IDFILE      (countT)0x1422


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
*/
/**/

/*1*/countT listingC::nameF( tinS& tinP , countT*& pczNameP ) const/*1*/
{
    listC* pList = flagsi & fliLISTINGc_MIXINlIST

        ? (listC*)this          
        : &APT( listC , aptDad )

    ;

    return pList->nameF( tinP , pczNameP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e5* : 3func.360e500c.listingc.namef END
