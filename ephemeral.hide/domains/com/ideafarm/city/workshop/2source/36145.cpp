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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36145* : 3func.36145002.patternC.dt_patternC BEGIN
#define DDNAME       "3func.36145002.patternC.dt_patternC"
#define DDNUMB      (countT)0x36145002
#define IDFILE      (countT)0x158b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/patternC::~patternC( voidT )/*1*/
{
    TINSL

    for( countT offo = 0 ; offo < sizeof ppostLiteral / sizeof ppostLiteral[ 0 ] ; offo ++ ) ether.delF( tinP , ppostLiteral[ offo ] ) ;

    ether.delF( tinP , psttPattern ) ;
    ether.delF( tinP , pFlagsOverride ) ;
    ether.delF( tinP , pcMinOverride ) ;
    ether.delF( tinP , pcMaxOverride ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36145* : 3func.36145002.patternC.dt_patternC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36145* : 3func.36145003.patternC.patternC BEGIN
#define DDNAME       "3func.36145003.patternC.patternC"
#define DDNUMB      (countT)0x36145003
#define IDFILE      (countT)0x158c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/patternC::patternC( tinS& tinP , etherC& etherP , const strokeS* const psttP , const countT idTypeP ) :/*1*/
ether( etherP ) ,
psttPattern( 0 ) ,
flagsOptimize( 0 ) ,
pFlagsOverride( 0 ) ,
pcMinOverride( 0 ) ,
pcMaxOverride( 0 ) ,
flagsLiterals( flPATTERNlITERALS_null )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    //U:: CONSIDER WHETHER SHOULD USE flagsP OR idTypeP : IS THERE ANY BENEFIT FROM SUPPORTING MULTIPLE MAPPINGS (I.E. SUPPORTING THE SETTING OF MORE THAN ONE FLAG).  WOULD I EVER WANT TO USE BOTH UNIX REGULAR EXPRESSIONS AND MICROSOFT WILDCARDS?  PROBABLY NOT
    //U:: MIGRATE flPATTERNc FROM FLAGS TO AN IDtYPE

    switch( idTypeP )
    {
        case ifcIDtYPEpATTERN_NATIVE                          : { BLAMMO ; break ; }  //U:: MARKUP FOR PLAIN TEXT STRING THAT IS A THIN WRAP OF THE UNDERLYING sa_SSS CONSTANTS: sp_SSSfLAG sa_SSS
        case ifcIDtYPEpATTERN_FOREIGNwILDCARDmICROSOFT        : { ether.strPatternFromWildcardsMicrosoftF( tinP , psttPattern , flagsOptimize , pFlagsOverride , pcMinOverride , pcMaxOverride , psttP ) ; ___( psttPattern ) ; ___( pFlagsOverride ) ; ___( pcMinOverride ) ; ___( pcMaxOverride ) ; ; break ; }
        case ifcIDtYPEpATTERN_FOREIGNwILDCARDsTRICT           : { ether.strPatternFromWildcardsStrictF(    tinP , psttPattern , flagsOptimize , pFlagsOverride , pcMinOverride , pcMaxOverride , psttP ) ; ___( psttPattern ) ; ___( pFlagsOverride ) ; ___( pcMinOverride ) ; ___( pcMaxOverride ) ; ; break ; }
        case ifcIDtYPEpATTERN_FOREIGNuNIXrEGULAReXPRESSION    : { BLAMMO ; break ; }  //U:: MARKUP THAT EXACTLY SIMULATES UNIX REGULAR EXPRESSION SEMANTICS AND SYNTAX
        default                                               : { BLAMMO ; break ; }
    }

    //ZE( strokeS* , psttd ) ;
    //ether.strDumpStrokesIF( tinP , psttd , psttPattern , 0 ) ; ___( psttd ) ;
    //ether.traceF( tinP , T("[pattern]:    ")+T(psttd) ) ;
    //ether.delF( tinP , psttd ) ;

    thirdC::c_memsetIF( tinP , (byteT*)ppostLiteral , sizeof ppostLiteral ) ;

    __NZ( psttPattern[ CSpREFIX ].idCaste - sc_ccSSS  ) ;   // THE FOLLOWING CODE ASSUMES THAT psttPattern IS A CONFORMANT IPDOS (TM) PATTERN, WHICH MUST BEGIN WITH sa_SSSaND
    __NZ( psttPattern[ CSpREFIX ].idAdam  - sa_SSSaND ) ;   // (LITERAL STROKES ARE ACCUMULATED ONLY WHEN idLevel == 1)

    ZE( countT , offLit    ) ;
    ZE( countT , offo      ) ;
    ZE( countT , idLevel   ) ;
    ZE( boolT  , bSuppress ) ;
    for( countT ids = 1 ; ids <= psttPattern->idAdam ; ids ++ )
    {
        boolT bFlush = 1 ;
        switch( psttPattern[ CSpREFIX - 1 + ids ].idCaste )
        {
            case sc_cALPHABET1 :
            {
                if( idLevel == 1 )
                {
                    if( bSuppress ) bSuppress = 0 ;
                    else
                    {
                             if( ids == 2                       ) flagsLiterals |= flPATTERNlITERALS_LITERALbEGINNING ;
                        else if( ids == psttPattern->idAdam - 1 ) flagsLiterals |= flPATTERNlITERALS_LITERALeNDING    ;

                        bFlush = 0 ;
                        if( !ppostLiteral[ offLit ] )
                        {
                            etherP.newF(        tinP , LF , ppostLiteral[ offLit ] , psttPattern->idAdam + 1 ) ; ___( ppostLiteral[ offLit ] ) ;
                            thirdC::c_memsetIF( tinP      , ppostLiteral[ offLit ] , psttPattern->idAdam + 1 ) ;
                            offo = 0 ;
                        }

                        ppostLiteral[ offLit ][ offo ++ ] = (osTextT)psttPattern[ CSpREFIX - 1 + ids ].idAdam ;
                    }
                }

                break ;
            }
            case sc_ccSSS :
            {
                if( bSuppress ) bSuppress = 0 ;
                switch( psttPattern[ CSpREFIX - 1 + ids ].idAdam )
                {
                    case sa_SSSaND :
                    case sa_SSSoR  :
                    {
                        idLevel ++ ;
                        break ;
                    }
                    case sa_SSSaNDeND :
                    case sa_SSSoReND  :
                    {
                        idLevel -- ;
                        break ;
                    }
                }
                break ;
            }
            case sc_ccSSSrEPEAT :
            {
                bSuppress = 1 ;
                break ;
            }
            default :
            {
                if( bSuppress ) bSuppress = 0 ;
                break ;
            }
        }

        if( bFlush && offo )
        {
            offLit ++ ; 
            offo = 0 ;
            if( offLit >= sizeof ppostLiteral / sizeof ppostLiteral[ 0 ] ) break ;
        }
    }

    //for( offLit = 0 ; offLit < sizeof ppostLiteral / sizeof ppostLiteral[ 0 ] && ppostLiteral[ offLit ] ; offLit ++ )
    //{
    //    ether.traceF( tinP , T("literal:    \"")+T(ppostLiteral[offLit])+T("\"") ) ;
    //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36145* : 3func.36145003.patternC.patternC END
