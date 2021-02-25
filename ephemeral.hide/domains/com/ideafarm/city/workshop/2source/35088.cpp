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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.35088004.strokes.strokeif BEGIN
#define DDNAME       "3func.35088004.strokes.strokeif"
#define DDNUMB      (countT)0x35088004
#define IDFILE      (countT)0xb1e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//I MAP EVERY LEGAL idToolP KEY VALUE TO AN sc_cALPHABET1 strokeS VALUE

/*1*/strokeS strokeS::strokeIF( tinS& tinP , const countT idToolP )/*1*/
{
    strokeS sttv ;    

    if
    (
        idToolP >= ifcIDtYPEtOOL_A &&
        idToolP <= ifcIDtYPEtOOL_Z
    )
    sttv.idAdam = 'A' + idToolP - ifcIDtYPEtOOL_A ;
    else if
    (
        idToolP >= ifcIDtYPEtOOL_a &&
        idToolP <= ifcIDtYPEtOOL_z
    )
    sttv.idAdam = 'a' + idToolP - ifcIDtYPEtOOL_a ;
    else if
    (
        idToolP >= ifcIDtYPEtOOL_0 &&
        idToolP <= ifcIDtYPEtOOL_9
    )
    sttv.idAdam = '0' + idToolP - ifcIDtYPEtOOL_0 ;
    else if
    (
        idToolP >= ifcIDtYPEtOOL_PAD0 &&
        idToolP <= ifcIDtYPEtOOL_PAD9
    )
    sttv.idAdam = '0' + idToolP - ifcIDtYPEtOOL_PAD0 ;
    else if
    (
        idToolP >= ifcIDtYPEtOOL_ACCENT &&
        idToolP <= ifcIDtYPEtOOL_UNDERSCORE
    )
    {
        static countT pcLookup[ ifcIDtYPEtOOL_UNDERSCORE + 1 - ifcIDtYPEtOOL_ACCENT ] =
        {
            '`'  , '&'  , '@'  , '\\' , '^'  , ':'  , ','  , '}'  , '{'  , '/' , '/' , '$'  , '='  , '!'  , '>'  , '<'  ,
            '-'  , '-'  , '*'  , '*'  , '|'  , ')'  , '('  , '%'  , '.'  , '.'  , '+'  , '+'  , '#'  , '?'  , '"'  , '\'' ,
            ';'  , ' '  , ']'  , '['  , '~'  , '_' 
        } ;

        sttv.idAdam = pcLookup[ idToolP - ifcIDtYPEtOOL_ACCENT ] ;
    }
    else if( idToolP >= ifcIDtYPEtOOL_CONTROLbEGIN ) sttv.idAdam = saA1_TOOLCONTROLbEGIN - ifcIDtYPEtOOL_CONTROLbEGIN + idToolP ;

    if( sttv.idAdam ) sttv.idCaste = sc_cALPHABET1 ;
    if( tinP.fingerprint ) ;
    return sttv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.35088004.strokes.strokeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.35088005.strokes.strokeif BEGIN
#define DDNAME       "3func.35088005.strokes.strokeif"
#define DDNUMB      (countT)0x35088005
#define IDFILE      (countT)0xb1f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/strokeS strokeS::strokeIF( tinS& tinP , stackC& stP )/*1*/
{
    __( stP.idTypeF( tinP ) - ifcSTACKtYPE_countT ) ;

    strokeS sttv ;    
    if( !POOP )
    {
        stP.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !stP ) stP.ungrabF( tinP ) ;
        else
        {
            ZE( countT , idTool ) ;
            stP >> idTool ;
            stP.ungrabF( tinP ) ;
            sttv = strokeIF( tinP , idTool ) ;
        }
    }

    return sttv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.35088005.strokes.strokeif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.3508800c.strokes.rendersizeif BEGIN
#define DDNAME       "3func.3508800c.strokes.rendersizeif"
#define DDNUMB      (countT)0x3508800c
#define IDFILE      (countT)0xb20


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT strokeS::renderSizeIF( tinS& tinP , etherC& etherP , const strokeS* const psttP , measureT& mColsP , measureT& mPadsP , measureT& mFrames1P )/*1*/
{
    if( psttP )
    {
        countT idNest = 1 ;
        for( countT ids = 1 ; ids <= psttP->idAdam ; ids ++ )
        {
            switch( psttP[ CSpREFIX - 1 + ids ].idCaste )
            {
                case sc_cALPHABET1 :
                {
                    if( idNest == 1 )
                    {
                        mFrames1P ++  ;
                        mPadsP ++ ;
                    }
                    break ;
                }
                case scOld_mmFRAMEtO :
                {
                    idNest ++ ;
                    break ;
                }
                case sc_cADAM :
                {
                    ZE( strokeS* , psttBody ) ;
                    bodyF( tinP , etherP , psttBody , psttP[ CSpREFIX - 1 + ids ] ) ;
                    renderSizeIF( tinP , etherP , psttBody , mColsP , mPadsP , mFrames1P ) ;
                    break ;
                }
            }
        }
        if( mPadsP ) mPadsP -- ;
    
        if( mColsP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35088* : 3func.3508800c.strokes.rendersizeif END
