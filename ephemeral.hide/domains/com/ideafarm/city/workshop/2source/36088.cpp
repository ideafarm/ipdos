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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088002.strokes.strokes BEGIN
#define DDNAME       "3func.36088002.strokes.strokes"
#define DDNUMB      (countT)0x36088002
#define IDFILE      (countT)0x128b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokeS::strokeS( const strokeS& sP )/*1*/
{
    idAdam = sP.idAdam ;
    idCaste = sP.idCaste ;
    cNote = sP.cNote ;

    if( idCaste == sc_cADAM ) registerF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088002.strokes.strokes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088003.strokes.operator_assign BEGIN
#define DDNAME       "3func.36088003.strokes.operator_assign"
#define DDNUMB      (countT)0x36088003
#define IDFILE      (countT)0x128c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokeS& strokeS::operator =( const strokeS& sP )/*1*/
{
    if( idCaste == sc_cADAM ) deregisterF() ;

    idAdam = sP.idAdam ;
    idCaste = sP.idCaste ;
    cNote  = sP.cNote  ;

    if( idCaste == sc_cADAM ) registerF() ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088003.strokes.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088006.strokes.idtoolf BEGIN
#define DDNAME       "3func.36088006.strokes.idtoolf"
#define DDNUMB      (countT)0x36088006
#define IDFILE      (countT)0x128d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//I MAP MYSELF TO AN idTool VALUE

/*1*/countT strokeS::idToolF( tinS& tinP ) const/*1*/
{
    ZE( countT , idTool ) ;
    if( idCaste != sc_cALPHABET1 ) ;
    else if( idAdam >= ifcIDtYPEtOOL_begin && idAdam <= ifcIDtYPEtOOL_end ) idTool = idAdam ;
    else if( idAdam > saA1_TOOLbegin && idAdam < saA1_TOOLend ) idTool = ifcIDtYPEtOOL_begin - saA1_TOOLbegin + idAdam ;
    else if
    (
        idAdam >= 'A' &&
        idAdam <= 'Z'
    )
    idTool = ifcIDtYPEtOOL_A - 'A' + idAdam ;
    else if
    (
        idAdam >= 'a' &&
        idAdam <= 'z'
    )
    idTool = ifcIDtYPEtOOL_a - 'a' + idAdam ;
    else if
    (
        idAdam >= '0' &&
        idAdam <= '9'
    )
    idTool = ifcIDtYPEtOOL_0 - '0' + idAdam ;
    else switch( idAdam )
    {
        case '`'  : { idTool = ifcIDtYPEtOOL_ACCENT           ; break ; }
        case '&'  : { idTool = ifcIDtYPEtOOL_AND              ; break ; }
        case '@'  : { idTool = ifcIDtYPEtOOL_AT               ; break ; }
        case '\\' : { idTool = ifcIDtYPEtOOL_BACKsLASH        ; break ; }
        case '^'  : { idTool = ifcIDtYPEtOOL_CARET            ; break ; }
        case ':'  : { idTool = ifcIDtYPEtOOL_COLON            ; break ; }
        case ','  : { idTool = ifcIDtYPEtOOL_COMMA            ; break ; }
        case '}'  : { idTool = ifcIDtYPEtOOL_CURLEYcLOSE      ; break ; }
        case '{'  : { idTool = ifcIDtYPEtOOL_CURLEYoPEN       ; break ; }
        case '/'  : { idTool = ifcIDtYPEtOOL_DIVIDE           ; break ; }
        case '$'  : { idTool = ifcIDtYPEtOOL_DOLLAR           ; break ; }
        case '='  : { idTool = ifcIDtYPEtOOL_EQUALS           ; break ; }
        case '!'  : { idTool = ifcIDtYPEtOOL_EXCLAIM          ; break ; }
        case '>'  : { idTool = ifcIDtYPEtOOL_GREATERtHAN      ; break ; }
        case '<'  : { idTool = ifcIDtYPEtOOL_LESStHAN         ; break ; }
        case '-'  : { idTool = ifcIDtYPEtOOL_MINUS            ; break ; }
        case '*'  : { idTool = ifcIDtYPEtOOL_MULTIPLY         ; break ; }
        case '|'  : { idTool = ifcIDtYPEtOOL_OR               ; break ; }
        case ')'  : { idTool = ifcIDtYPEtOOL_PARENcLOSE       ; break ; }
        case '('  : { idTool = ifcIDtYPEtOOL_PARENoPEN        ; break ; }
        case '%'  : { idTool = ifcIDtYPEtOOL_PERCENT          ; break ; }
        case '.'  : { idTool = ifcIDtYPEtOOL_PERIOD           ; break ; }
        case '+'  : { idTool = ifcIDtYPEtOOL_PLUS             ; break ; }
        case '#'  : { idTool = ifcIDtYPEtOOL_POUND            ; break ; }
        case '?'  : { idTool = ifcIDtYPEtOOL_QUESTION         ; break ; }
        case '"'  : { idTool = ifcIDtYPEtOOL_QUOTEdOUBLE      ; break ; }
        case '\'' : { idTool = ifcIDtYPEtOOL_QUOTEsINGLE      ; break ; }
        case ';'  : { idTool = ifcIDtYPEtOOL_SEMICOLON        ; break ; }
        case ' '  : { idTool = ifcIDtYPEtOOL_SPACE            ; break ; }
        case ']'  : { idTool = ifcIDtYPEtOOL_SQUAREcLOSE      ; break ; }
        case '['  : { idTool = ifcIDtYPEtOOL_SQUAREoPEN       ; break ; }
        case '~'  : { idTool = ifcIDtYPEtOOL_TILDE            ; break ; }
        case '_'  : { idTool = ifcIDtYPEtOOL_UNDERSCORE       ; break ; }
    }

    if( tinP.fingerprint ) ;
    return idTool ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088006.strokes.idtoolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088007.strokes.strokes BEGIN
#define DDNAME       "3func.36088007.strokes.strokes"
#define DDNUMB      (countT)0x36088007
#define IDFILE      (countT)0x128e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokeS::strokeS( const countT idAdamP , const countT idCasteP )/*1*/
{
    if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
    else
    {
        idCaste = idCasteP ;
        idAdam  = idAdamP ;
        cNote   = 0 ;

        if( idCaste == sc_cADAM ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088007.strokes.strokes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088008.strokes.strokes BEGIN
#define DDNAME       "3func.36088008.strokes.strokes"
#define DDNUMB      (countT)0x36088008
#define IDFILE      (countT)0x128f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokeS::strokeS( const countT fingerprintP , soulC*& pSoulP )/*1*/
{
    if( fingerprintP != FINGERnEG_SADAMsTROKEcT ) { BLAMMO ; }
    if( !pSoulP                                 ) { BLAMMO ; }

    TINSL
    do idAdam = 1 + incv02AM( tinP.pAdamGlobal1->_strokeS_.idSadamLath ) ;
    while( !idAdam ) ;

    idCaste = sc_cADAM ;
    cNote   = 0 ;

    registerF( &pSoulP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088008.strokes.strokes END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088009.strokes.deregisterf BEGIN
#define DDNAME       "3func.36088009.strokes.deregisterf"
#define DDNUMB      (countT)0x36088009
#define IDFILE      (countT)0x1290


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT strokeS::deregisterF( voidT ) const/*1*/
{
    TINSL
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;

    if( !tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ) { BLAMMO ; }
    if( tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures )
    {
        tinP.pAdamGlobal1->_strokeS_.leverSadamFeatures = idAdam ;
        count2S& c2r = *(count2S*)&(countT&)*tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ;

        if( !c2r.c1 || !c2r.c2 ) { BLAMMO ; }
        if( !( -- c2r.c1 ) )
        {
            //LOGrAW5( "strokeS::deregisterF deregistering features  [idAdam,cRef]: " , idAdam , " " , c2r.c1 + 1 , "\r\n" ) ;
            etherC::etRockIF( tinP )( tinP , *(soulC**)&c2r.c2 ) ;
            tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures->freeF( tinP ) ;
            sadamsC::pSadamsIF( tinP )->deregisterF( tinP , idAdam ) ;
        }
        else
        {
            //LOGrAW5( "strokeS::deregisterF deregistering reference [idAdam,cRef]: " , idAdam , " " , c2r.c1 + 1 , "\r\n" ) ;
        }

        if( !tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures->cFlavorsF( tinP ) ) etherC::etRockIF( tinP )( tinP , tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ) ;
    }

    sadamC* pSadam = sadamsC::pSadamsIF( tinP )->pSadamF( tinP , idAdam , 0 ) ;
    if( pSadam && !( -- pSadam->cRefStroke ) )
    {
        DELzOMBIE( pSadam ) ;
        sadamsC::freeNullsIF( tinP ) ; //U::O: extractF() WILL BE FASTER
    }

    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.36088009.strokes.deregisterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.3608800a.strokes.registerf BEGIN
#define DDNAME       "3func.3608800a.strokes.registerf"
#define DDNUMB      (countT)0x3608800a
#define IDFILE      (countT)0x1291


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT strokeS::registerF( soulC** ppSoulP ) const/*1*/
{
    TINSL
    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    sadamsC* pSadams = sadamsC::pSadamsIF( tinP ) ;
    if( pSadams )
    {
        if( !tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ) etherC::etRockIF( tinP )( tinP , tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_strokeS_.leverSadamFeatures , 0 , sizeof( count2S ) ) ;

        if( tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures )
        {
            if( !ppSoulP && !tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures->idSlotOfLeverF( tinP , idAdam ) ) { BLAMMO ; }
    
            tinP.pAdamGlobal1->_strokeS_.leverSadamFeatures = idAdam ;
            count2S& c2r = *(count2S*)&(countT&)*tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ;

            if( ppSoulP )
            {
                soulC* psFeat = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ; ___( psFeat ) ; //U::THIS COPY WILL NOT BE NEEDED WHEN OLD CODE IS GONE
                *psFeat = **ppSoulP ;
                sadamC& sad = (*pSadams)( tinP , idAdam , 0 , &psFeat ) ;
                sad.cRefStroke ++ ;
    
                if( c2r.c1 || c2r.c2 ) { BLAMMO ; }
                c2r.c1 = 1 ;
                c2r.c2 = (countT)*ppSoulP ; *ppSoulP = 0 ;
                //LOGrAW5( "strokeS::registerF registering features  [idAdam,cRef]: " , idAdam , " " , c2r.c1 , "\r\n" ) ;
            }
            else
            {
                c2r.c1 ++ ;
                //LOGrAW5( "strokeS::registerF registering reference [idAdam,cRef]: " , idAdam , " " , c2r.c1 , "\r\n" ) ;
    
                sadamC& sad = (*pSadams)( tinP , idAdam , 0 ) ;
                sad.cRefStroke ++ ;
            }
        }
    }
    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.3608800a.strokes.registerf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.3608800b.strokes.featuresf BEGIN
#define DDNAME       "3func.3608800b.strokes.featuresf"
#define DDNUMB      (countT)0x3608800b
#define IDFILE      (countT)0x1292


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT strokeS::featuresF( tinS& tinP , soulC*& psFeaturesP ) const/*1*/
{
    if( idCaste == sc_cADAM )
    {
        if( !idAdam ) { BLAMMO ; }

        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ) { BLAMMO ; }

        tinP.pAdamGlobal1->_strokeS_.leverSadamFeatures = idAdam ;
        count2S& c2r = *(count2S*)&(countT&)*tinP.pAdamGlobal1->_strokeS_.pSwSadamFeatures ;
        if( !c2r.c1 || !c2r.c2 ) { BLAMMO ; }

        etherC::etRockIF( tinP )( tinP , psFeaturesP , TAG( TAGiDnULL ) ) ;
        if( psFeaturesP ) *psFeaturesP = *(soulC*)c2r.c2 ;

        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36088* : 3func.3608800b.strokes.featuresf END
