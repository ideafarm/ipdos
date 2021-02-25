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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c002.vtextc.dt_vtextc BEGIN
#define DDNAME       "3func.3608c002.vtextc.dt_vtextc"
#define DDNUMB      (countT)0x3608c002
#define IDFILE      (countT)0x12ab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/vTextC::~vTextC( voidT )/*1*/
{
    TINSL
    paperOldC::callSadamsIF( tinP , ether , ifcIDtYPEsTROKEcALLbACK_DESTROY , 0 , 0 , flCALLsADAMS_null , this ) ;
    if( psFeaturesVT ) ether( tinP , psFeaturesVT ) ; // WILL BE DONE HERE ONLY IF I WAS NEVER USED
    ether.delF( tinP , psttVolatile ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c002.vtextc.dt_vtextc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c003.vtextc.vtextc BEGIN
#define DDNAME       "3func.3608c003.vtextc.vtextc"
#define DDNUMB      (countT)0x3608c003
#define IDFILE      (countT)0x12ac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/vTextC::vTextC( tinS& tinP , const osTextT* const postOldCommentP , const strokeS* const psttP , countT csttReserveP , soulC* const psFeaturesP , sadamCBFT pSadamCBFP , const countT cArgP , const countT idToolFilterListP ) :/*1*/
textC( tinP , TAG( TAGiDnULL ) , flTEXTc_vTextC ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
psttVolatile( 0 ) ,
psFeaturesVT( 0 ) ,
recycleLever1( csttReserveP ) ,
pSadamCBF( pSadamCBFP ) ,
cArg( cArgP ) ,
pSadam( 0 )
{
    ether( tinP , psFeaturesVT , TAG( TAGiDnULL ) ) ;
    *psFeaturesVT << (countT)sc_cADAM ;

    ZE( soulC* , psFeature ) ;
    ether( tinP , psFeature , TAG( TAGiDnULL ) ) ;

    if( postOldCommentP ) //IS DONE WOTH FOR DEBUGGING CONVENIENCE, SO features.fc.postOldComment IS SET WHEN doF PROCESSES OTHER FEATURE SPECS
    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_COMMENT ;
        *psFeature << postOldCommentP ;
        *psFeaturesVT << *psFeature ;
    }

    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_OWNER ;
        *psFeature << (countT)this ;
        *psFeaturesVT << *psFeature ;
    }
                                    
    {
        ZE( strokeS* , psttBody ) ;
        ether.strMakeF( tinP , LF , psttBody , psttP , csttReserveP ) ; ___( psttBody ) ;
        while( csttReserveP -- ) ether.strFuseF( tinP , psttBody , S2(saA1_HARDbLANKfILLEDwITHpEE,sc_cALPHABET1) ) ;

        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_BODY ;
        *psFeature << psttBody ;
        *psFeaturesVT << *psFeature ;
        ether.delF( tinP , psttBody ) ;
    }

    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_STATErEFERENCE ;
        *psFeature << (countT)&pSadam ;
        *psFeaturesVT << *psFeature ;

        //if( !thirdC::c_strcmpIF( tinP , postOldCommentP , "vtHint" ) )
        //    { LOGrAWtID2( T("vTextC::vTextC/")+T(postOldCommentP)+T("/[&pSadam]: ") , (countT)&pSadam ) }
    }

    if( idToolFilterListP )
    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_TOOLfILTERlIST ;
        *psFeature << (countT)idToolFilterListP ;
        *psFeaturesVT << *psFeature ;
    }

    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_VOLATILEbODY ;
        *psFeature << (countT)IDVB_DEFAULT ;
        *psFeature << (countT)&psttVolatile ;
        *psFeature << (countT)&baton ;
        *psFeaturesVT << *psFeature ;
    }

    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_MOUSE ;
        *psFeature << (countT)( flFEATUREsADAMmOUSE_TOOLpOSITION | flFEATUREsADAMmOUSE_TOOLbUTTONlEFT | flFEATUREsADAMmOUSE_TOOLbUTTONrIGHT | flFEATUREsADAMmOUSE_ACTIONmOVE | flFEATUREsADAMmOUSE_ACTIONdOWN ) ;
        *psFeaturesVT << *psFeature ;
    }

    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_FLYOVER ;
        *psFeaturesVT << *psFeature ;
    }

    if( pSadamCBFP )
    {
        psFeature->removeAllF( tinP ) ;
        *psFeature << (countT)ifcIDtYPEfEATUREsADAM_CALLbACK ;
        *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_ANIMATE ;
        *psFeature << (strokeS*)T("_vtCBF") ;
        *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_FLYOVER ;
        *psFeature << (strokeS*)T("_vtCBF") ;
        *psFeature << (countT)ifcIDtYPEsADAMcALLbACK_IFhIT ;
        *psFeature << (strokeS*)T("_vtCBF") ;
        *psFeature << (countT)this ;
        *psFeaturesVT << *psFeature ;
    }
    ether( tinP , psFeature ) ;

    if( psFeaturesP ) psFeaturesVT->shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteT , *psFeaturesP , 0 , flSOULiTEM_null , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c003.vtextc.vtextc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c004.vtextc.setf BEGIN
#define DDNAME       "3func.3608c004.vtextc.setf"
#define DDNUMB      (countT)0x3608c004
#define IDFILE      (countT)0x12ad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT vTextC::setF( tinS& tinP , const strokeS* const psttP , const flagsT flagsP , const countT csttMinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flVtEXTsET , flagsP ) ;
        __( csttMinP < 1 ) ;
        if( POOP ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( pSadam && pSadam->pStrike )
    {
        pSadam->features.cLeverVolBody = IDVB_DEFAULT ;
        vBodyS& vb = *(vBodyS*)&(countT&)*pSadam->features.pswVolBody ;
        vb.flags |= flVbODYs_NEWsPEC ;
    }

    ether.delF( tinP , psttVolatile ) ;
    if( psttP )
    {
        TN( tSay , "" ) ;
        if( !( F(flagsP) & flVtEXTsET_CELLStOfIT ) ) tSay = T(psttP) ;
        else
        {
            countT cCols = psttP->idAdam ;
            if( cCols < csttMinP ) cCols = csttMinP ;

            tSay =

                T("")
                +S3((measureT)cCols,scOld_mmFRAMEcELLS,1.0)
                +T(psttP)
                +S2(0,scOld_POPfRAME)

            ;
        }

        ether.strMakeF( tinP , LF , psttVolatile , tSay ) ; ___( psttVolatile ) ;
    }

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c004.vtextc.setf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c005.vtextc.operator_shiftleft BEGIN
#define DDNAME       "3func.3608c005.vtextc.operator_shiftleft"
#define DDNUMB      (countT)0x3608c005
#define IDFILE      (countT)0x12ae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/vTextC& vTextC::operator <<( vTextC& vtP )/*1*/
{
    TINSL
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    vtP.baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( psttVolatile ) ether.delF( tinP , psttVolatile ) ; //psttVolatile WILL USUALLY BE 0 SINCE I AM USUALLY USED TO SHIFT VALUES WITHIN A SET OF MANY INSTANCES
    psttVolatile = vtP.psttVolatile ;
    vtP.psttVolatile = 0 ;

    vtP.baton.ungrabF( tinP ) ;
    baton.ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c005.vtextc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c006.vtextc.getf BEGIN
#define DDNAME       "3func.3608c006.vtextc.getf"
#define DDNUMB      (countT)0x3608c006
#define IDFILE      (countT)0x12af


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT vTextC::getF( tinS& tinP , strokeS*& psttP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    ether.strMakeF( tinP , LF , psttP , psttVolatile ) ; ___( psttP ) ;
    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c006.vtextc.getf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c007.vtextc.idadamf BEGIN
#define DDNAME       "3func.3608c007.vtextc.idadamf"
#define DDNUMB      (countT)0x3608c007
#define IDFILE      (countT)0x12b0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/countT vTextC::idAdamF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    ZE( countT , idAdam ) ;
    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( psttMe && psttMe->idAdam == 1 && psttMe[ CSpREFIX ].idCaste == sc_cADAM ) idAdam = psttMe[ CSpREFIX ].idAdam ;
    baton.ungrabF( tinP ) ;
    return idAdam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c007.vtextc.idadamf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c008.vtextc.bpendingf BEGIN
#define DDNAME       "3func.3608c008.vtextc.bpendingf"
#define DDNUMB      (countT)0x3608c008
#define IDFILE      (countT)0x12b1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/boolT vTextC::bPendingF( tinS& tinP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;

    ZE( boolT , bPending ) ;
    if( !psttVolatile || !pSadam ) bPending = 1 ;
    else
    {
        pSadam->features.cLeverVolBody = IDVB_DEFAULT ;
        vBodyS& vb = *(vBodyS*)&(countT&)*pSadam->features.pswVolBody ;
        bPending = !!( F(vb.flags) & flVbODYs_NEWsPEC ) ;
    }

    baton.ungrabF( tinP ) ;
    return bPending ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608c* : 3func.3608c008.vtextc.bpendingf END
