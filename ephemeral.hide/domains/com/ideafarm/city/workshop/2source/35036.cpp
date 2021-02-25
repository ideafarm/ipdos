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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.3503604e.soulc.cfieldif BEGIN
#define DDNAME       "3func.3503604e.soulc.cfieldif"
#define DDNUMB      (countT)0x3503604e
#define IDFILE      (countT)0xb04


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cFieldF.0.html\"\>instances\</A\>
\<A HREF=\"5.14e0021.1.0.html\"\>definition\</A\>
evaluates to the value of the specified field, which must contain a countT value, without modifying the object
my return value can be used to modify the field
warning: do not use the reference that i evaluate to after calling any function that removes the referenced object from the soulC object
arguments
 tinP
 idFieldP
  must not be 0
  1 refers to the wo'th field in the soul
  if this value is greater than the number of fields present, impotence occurs
 pbsP
  must point to a backing image of a soulC object
   e.g. must be obtained by casting a soulC object to byteT*
*/
/**/

/*1*/countT& soulC::cFieldIF( tinS& tinP , countT idFieldP , const byteT* const pbsP )/*1*/
{
    IFbEcAREFUL    
    {
        if( !idFieldP || !pbsP ) return tinP.pAdamGlobal1->_soulC_.cnu ;
    }

    _IO_

    const byteT* pbc = pbsP ;

    ZE( countT , idFormat ) ;
    if( pbc && getNegAM( *(countT*)pbc ) == FINGERnEG_SOULc )
    {
                                   pbc += sizeof( countT ) ;
        idFormat = *(countT*)pbc ; pbc += sizeof( countT ) ;
    }

    const byteT* const pbe = pbc + sizeof( countT ) + *(countT*)pbc ;
    pbc += sizeof( countT ) ; //MOVE TO WO'TH LENGTH PREFIXED FIELD

    while( pbc < pbe && -- idFieldP ) pbc += sizeof( countT ) + *(countT*)pbc ;

    POOPIE
    if( pbc >= pbe )
    {
        pbc = 0 ;
        __1
    }
    else
    {
        __( ((countT*)pbc)[ 0 ] - 3 * sizeof( countT ) ) ;
        __( ((countT*)pbc)[ 1 ] - ifcIDtYPEsOULiTEM_countT ) ;
        FV( flSOULiTEM , ((countT*)pbc)[ 2 ] ) ;
        __( !( F(((countT*)pbc)[2]) & flSOULiTEM_MADEoFcOUNToBJECTS ) ) ;
    }
    if( POOP ) pbc = 0 ;

    return pbc ? ((countT*)pbc)[ 3 ] : tinP.pAdamGlobal1->_soulC_.cnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.3503604e.soulc.cfieldif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.3503604f.soulc.cfieldsif BEGIN
#define DDNAME       "3func.3503604f.soulc.cfieldsif"
#define DDNUMB      (countT)0x3503604f
#define IDFILE      (countT)0xb05


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pbsP
  must point to a backing image of a soulC object
   e.g. must be obtained by casting a soulC object to byteT*
*/
/**/

/*1*/countT soulC::cFieldsIF( tinS& tinP , const byteT* const pbsP )/*1*/
{
    IFbEcAREFUL
    {
        if( !pbsP ) return tinP.pAdamGlobal1->_soulC_.cnu ;
    }

    _IO_

    const byteT* pbc = pbsP ;

    ZE( countT , idFormat ) ;
    if( pbc && getNegAM( *(countT*)pbc ) == FINGERnEG_SOULc )
    {
                                   pbc += sizeof( countT ) ;
        idFormat = *(countT*)pbc ; pbc += sizeof( countT ) ;
    }

    const byteT* const pbe = pbc + sizeof( countT ) + *(countT*)pbc ;

    pbc += sizeof( countT ) ; //MOVE TO WO'TH LENGTH PREFIXED FIELD

    ZE( countT , tally ) ;
    while( pbc < pbe )
    {
        ++ tally ;
        pbc += sizeof( countT ) + *(countT*)pbc ;
    }

    return tally ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.3503604f.soulc.cfieldsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036053.soulc.newrecyclableif BEGIN
#define DDNAME       "3func.35036053.soulc.newrecyclableif"
#define DDNUMB      (countT)0x35036053
#define IDFILE      (countT)0xb06


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/soulC* soulC::newRecyclableIF( tinS& tinP )/*1*/
{
    return new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036053.soulc.newrecyclableif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036054.soulc.traceif BEGIN
#define DDNAME       "3func.35036054.soulc.traceif"
#define DDNUMB      (countT)0x35036054
#define IDFILE      (countT)0xb07


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT soulC::traceIF( tinS& tinP , boolT bOnP )/*1*/
{
    _IO_
    tinP.pAdamGlobal5->_soulC_grabTrace.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !tinP.pAdamGlobal1->_soulC_.pStkTrace == !bOnP ) { BLAMMO ; }

    if( bOnP ) { LOGrAW( "soulC: about to turn trace ON\r\n"  ) ; etherC::etRockIF( tinP )( tinP , tinP.pAdamGlobal1->_soulC_.pStkTrace , TAG( TAGiDnULL ) ) ; }
    else       { etherC::etRockIF( tinP )( tinP , tinP.pAdamGlobal1->_soulC_.pStkTrace ) ; LOGrAW( "soulC: just turned trace OFF\r\n" ) ; }

    tinP.pAdamGlobal5->_soulC_grabTrace.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036054.soulc.traceif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036057.soulc.dumpif BEGIN
#define DDNAME       "3func.35036057.soulc.dumpif"
#define DDNUMB      (countT)0x35036057
#define IDFILE      (countT)0xb08


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT soulC::dumpIF( tinS& tinP , strokeS*& psttP , const byteT* const pbSoulImageP )/*1*/
{
    _IO_
    etherC& er = etherC::etRockIF( tinP ) ;
    er.strMakeF( tinP , LF , psttP , 0 , TOCK * 0x10 ) ; ___( psttP ) ; //U::ALLOCATE ACCORDING TO NUMBER OF ELTS

    const byteT* pbc = pbSoulImageP ;
    if( getNegAM( *(countT*)pbc ) != FINGERnEG_SOULc ) er.strFuseF( tinP , psttP , T("invalid fingerprint") ) ;
    else if( pbc += sizeof( countT ) , *(countT*)pbc != 1 ) er.strFuseF( tinP , psttP , T("invalid idFormat") ) ;
    else
    {
        pbc += sizeof( countT ) ;
        countT cbToDo = *(countT*)pbc ; pbc += sizeof( countT ) ;
        er.strFuseF( tinP , psttP , T("{") ) ;

        while( cbToDo )
        {
            countT cbToDoWo = *(countT*)pbc ; pbc += sizeof( countT ) ; cbToDo -= sizeof( countT ) + cbToDoWo ;

            countT idType = *(countT*)pbc ; pbc += sizeof( countT ) ; cbToDoWo -= sizeof( countT ) ;
            er.strFuseF( tinP , psttP , T("[")+T(processGlobal3I.mapSoulItem(idType)) ) ;

            flagsT flags = *(flagsT*)pbc ; pbc += sizeof( flagsT ) ; cbToDoWo -= sizeof( flagsT ) ;

            switch( idType )
            {
                case ifcIDtYPEsOULiTEM_soulC :
                {
                    ZE( strokeS* , psttd ) ;
                    dumpIF( tinP , psttd , pbc ) ; ___( psttd ) ;
                    er.strFuseF( tinP , psttP , psttd ) ;
                    er.delF( tinP , psttd ) ;
                    break ;
                }
                case ifcIDtYPEsOULiTEM_countT :
                {
                    er.strFuseF( tinP , psttP , T(":")+TF2(*(countT*)pbc,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ; //U::FOR SOME OS, NEED TO SWAB HERE (REORDER BYTES)
                    break ;
                }
                case ifcIDtYPEsOULiTEM_strokeSptr :
                {
                    if( F(flags) & flSOULiTEM_NULLpTR ) er.strFuseF( tinP , psttP , T(" is null") ) ;
                    else
                    {
                        const byteT* pbEncoded = pbc ;
                        ZE( strokeS* , psttDecoded ) ;
                        er.strDecodeF( tinP , psttDecoded , pbEncoded ) ; ___( psttDecoded ) ;
                        er.strReplaceF( tinP , psttDecoded , 0 , ifcIDtYPEsTRrEPLACE_MAKEiMPORT , psttDecoded[ 2 ].idAdam ) ; ___( psttDecoded ) ;
    
                        ZE( boolT , bDump ) ;
                        if( psttDecoded )
                        {
                            for( countT ida = 1 ; ida <= psttDecoded->idAdam ; ida ++ )
                            {
                                if( psttDecoded[ CSpREFIX - 1 + ida ].idCaste != sc_cALPHABET1 )
                                {
                                    bDump = 1 ;
                                    break ;
                                }
                            }
        
                            if( !bDump )
                            {
                                er.strFuseF( tinP , psttP , T(":")+T(psttDecoded) ) ;
                                er.delF( tinP , psttDecoded ) ;
                            }
                            else
                            {
                                ZE( strokeS* , psttd ) ;
                                er.strDumpStrokesIF( tinP , psttd , psttDecoded ) ; ___( psttd ) ;
                                er.delF( tinP , psttDecoded ) ;
                                er.strFuseF( tinP , psttP , T(":")+T(psttd) ) ;
                                er.delF( tinP , psttd ) ;
                            }
                        }
                    }

                    break ;
                }
                case ifcIDtYPEsOULiTEM_baseSoilXxxxCptr :
                {
                    break ;
                }
                case ifcIDtYPEsOULiTEM_byteT :
                case ifcIDtYPEsOULiTEM_strokeS :
                case ifcIDtYPEsOULiTEM_measureT :
                case ifcIDtYPEsOULiTEM_measure04T :
                case ifcIDtYPEsOULiTEM_nicNameC :
                case ifcIDtYPEsOULiTEM_count2S :
                case ifcIDtYPEsOULiTEM_count3S :
                case ifcIDtYPEsOULiTEM_count4S :
                case ifcIDtYPEsOULiTEM_count5S :
                case ifcIDtYPEsOULiTEM_count6S :
                case ifcIDtYPEsOULiTEM_count7S :
                case ifcIDtYPEsOULiTEM_count8S :
                case ifcIDtYPEsOULiTEM_count9S :
                case ifcIDtYPEsOULiTEM_baseSoilXxxxC :
                case ifcIDtYPEsOULiTEM_handleC :
                case ifcIDtYPEsOULiTEM_byteTptr :
                case ifcIDtYPEsOULiTEM_countTptr :
                {
                    break ;
                }
            }
            pbc += cbToDoWo ;

            er.strFuseF( tinP , psttP , T("]") ) ;
        }
        er.strFuseF( tinP , psttP , T("}") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35036* : 3func.35036057.soulc.dumpif END
