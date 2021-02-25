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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a002.rootwordc.dt_rootwordc BEGIN
#define DDNAME       "3func.3606a002.rootwordc.dt_rootwordc"
#define DDNUMB      (countT)0x3606a002
#define IDFILE      (countT)0x1207


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/rootWordC::~rootWordC( voidT )/*1*/
{
    TINSL
    ether.delF( tinP , *(osTextT**)&postName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a002.rootwordc.dt_rootwordc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a003.rootwordc.rootwordc BEGIN
#define DDNAME       "3func.3606a003.rootwordc.rootwordc"
#define DDNUMB      (countT)0x3606a003
#define IDFILE      (countT)0x1208


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/rootWordC::rootWordC( tinS& tinP , etherC& etherP , const osTextT* const postNameP ) :/*1*/
baseSoilXxxxC( tinP.pAdamGlobal1->_rootWordC_.postOldClassName , postName ) ,
ether( etherP ) ,
postName( 0 )
{
    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        etherP.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___( postName ) ;
        etherP.memCopyF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a003.rootwordc.rootwordc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a004.rootwordc.operator_call BEGIN
#define DDNAME       "3func.3606a004.rootwordc.operator_call"
#define DDNUMB      (countT)0x3606a004
#define IDFILE      (countT)0x1209


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT rootWordC::operator ()( tinS& tinP , soulC& slP )/*1*/
{
    {
        ZE( baseSoilXxxxC* , pMeI ) ;
        slP >> pMeI ;
        if( pMeI != (baseSoilXxxxC*)this ) { BLAMMO ; }
    }

    ZE( countT , idCmdBase ) ;
    slP >> idCmdBase ;
    switch( idCmdBase )
    {
        case ifcIDcMDbASE_CLASSnAME :
        {
            slP << (strokeS*)T(tinP.pAdamGlobal1->_rootWordC_.postOldClassName) ;
            break ;
        }
        case ifcIDcMDbASE_INSTANCEnAME :
        {
            slP << (strokeS*)T(postName) ;
            break ;
        }
        case ifcIDcMDbASE_TICK :
        {
            break ;
        }
        case ifcIDcMDbASE_TOCK :
        {
            break ;
        }
        case ifcIDcMDbASE_REFERENCE :
        {
            flagsT save = slP.flags ;
            slP.flags &= ~( F(flSOUL_LIVE) ) ;
            slP << (baseSoilXxxxC*)this ;
            slP.flags = save ;
            break ;
        }
        case ifcIDcMDbASE_CMDdEFAULT :
        {
            ZE( strokeS* , psttw ) ;
            slP >> psttw ; ___( psttw ) ;

            ZE( soixlOldSpaceC* , pParser ) ;
            slP >> *(baseSoilXxxxC**)&pParser ;

            if( psttw && pParser )
            {
                countT idArgNext = 1 ;
                ZE( byteT* , pbFieldNext ) ;
                ZE( countT , idTypeNext ) ;
                ZE( flagsT , flagsNext ) ;
                ZE( countT , cbFieldNext ) ;
            
                if( !ether.strCompareF( tinP , psttw , T("?") ) )
                {
                    POPUP( T(postName)+T(": \"?\" received.") ) ;
                }
                else if( !ether.strCompareF( tinP , psttw , T("dup") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                    else
                    {
                        ZE( countT , vv ) ;
                        slP >> vv ; idArgNext ++ ;
                        slP << vv << vv ;
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("--") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                    else
                    {
                        ZE( countT , vv ) ;
                        slP >> vv ; idArgNext ++ ;
                        slP << -- vv ;
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("++") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                    else
                    {
                        ZE( countT , vv ) ;
                        slP >> vv ; idArgNext ++ ;
                        slP << ++ vv ;
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("if") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                    else
                    {
                        ZE( strokeS* , psttElse ) ;
                        slP >> psttElse ; ___( psttElse ) ; idArgNext ++ ;
                
                        IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                        else
                        {
                            ZE( strokeS* , psttThen ) ;
                            slP >> psttThen ; ___( psttThen ) ; idArgNext ++ ;
                    
                            IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                            else
                            {
                                ZE( boolT , bThen ) ;
                                slP >> bThen ; idArgNext ++ ;
                        
                                if( bThen ) slP << psttThen ;
                                else        slP << psttElse ;
                        
                                PUSE( tinP , *(byteT**)&psttElse ) ;
                                PUSE( tinP , *(byteT**)&psttThen ) ;
                        
                                slP O(*pParser) ;
                            }
                        }
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("for") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                    else
                    {
                        ZE( strokeS* , psttExpr ) ;
                        slP >> psttExpr ; ___( psttExpr ) ; idArgNext ++ ;
                
                        IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                        else
                        {
                            ZE( strokeS* , psttProlog ) ;
                            slP >> psttProlog ; ___( psttProlog ) ; idArgNext ++ ;
                
                            IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                            else
                            {
                                ZE( strokeS* , psttDo ) ;
                                slP >> psttDo ; ___( psttDo ) ; idArgNext ++ ;
                    
                                IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                                else
                                {
                                    ZE( strokeS* , psttEpilog ) ;
                                    slP >> psttEpilog ; ___( psttEpilog ) ; idArgNext ++ ;
                    
                                    for(;;)
                                    {
                                        boolT bAbort = 1 ;
                                        slP << psttExpr O(*pParser) ;
                                        IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                                        else
                                        {
                                            bAbort = 0 ;
                                            countT& cExpr = slP.cFieldF( tinP ) ;
                                            if( !cExpr )
                                            {
                                                ZE( countT , vv ) ;
                                                slP >> vv ; idArgNext ++ ;
                                                break ;
                                            }
                                            slP << psttProlog O(*pParser) << psttDo O(*pParser) << psttEpilog O(*pParser) ;
                                        }
            
                                        if( bAbort ) break ;
                                    }
                        
                                    PUSE( tinP , *(byteT**)&psttExpr ) ;
                                    PUSE( tinP , *(byteT**)&psttProlog ) ;
                                    PUSE( tinP , *(byteT**)&psttDo ) ;
                                    PUSE( tinP , *(byteT**)&psttEpilog ) ;
                                }
                            }
                        }
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("whiledo") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                    else
                    {
                        ZE( strokeS* , psttExpr ) ;
                        slP >> psttExpr ; ___( psttExpr ) ; idArgNext ++ ;
                
                        IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                        else
                        {
                            ZE( strokeS* , psttDo ) ;
                            slP >> psttDo ; ___( psttDo ) ; idArgNext ++ ;
                    
                            for(;;)
                            {
                                boolT bAbort = 1 ;
                                slP << psttExpr O(*pParser) ;
                                IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                                else
                                {
                                    bAbort = 0 ;
                                    countT& cExpr = slP.cFieldF( tinP ) ;
                                    if( !cExpr )
                                    {
                                        ZE( countT , vv ) ;
                                        slP >> vv ; idArgNext ++ ;
                                        break ;
                                    }
                                    slP << psttDo O(*pParser) ;
                                }

                                if( bAbort ) break ;
                            }
                        
                            PUSE( tinP , *(byteT**)&psttExpr ) ;
                            PUSE( tinP , *(byteT**)&psttDo ) ;
                        }
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("dowhile") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                    else
                    {
                        ZE( strokeS* , psttExpr ) ;
                        slP >> psttExpr ; ___( psttExpr ) ; idArgNext ++ ;
                
                        IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                        else
                        {
                            ZE( strokeS* , psttDo ) ;
                            slP >> psttDo ; ___( psttDo ) ; idArgNext ++ ;
                    
                            for(;;)
                            {
                                slP << psttDo O(*pParser) ;

                                boolT bAbort = 1 ;
                                slP << psttExpr O(*pParser) ;
                                IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_countT )
                                else
                                {
                                    bAbort = 0 ;
                                    countT& cExpr = slP.cFieldF( tinP ) ;
                                    if( !cExpr )
                                    {
                                        ZE( countT , vv ) ;
                                        slP >> vv ; idArgNext ++ ;
                                        break ;
                                    }
                                }

                                if( bAbort ) break ;
                            }
                        
                            PUSE( tinP , *(byteT**)&psttExpr ) ;
                            PUSE( tinP , *(byteT**)&psttDo ) ;
                        }
                    }
                }
                else if( !ether.strCompareF( tinP , psttw , T("null") ) )
                {
                }
                else if( !ether.strCompareF( tinP , psttw , T("POPUP") ) )
                {
                    IFbADpEEK( slP , psttw , ifcIDtYPEsOULiTEM_strokeSptr )
                    else
                    {
                        ZE( strokeS* , psttw ) ;
                        slP >> psttw ; ___( psttw ) ; idArgNext ++ ;

                        //CONoUTrAW( T("POPUP suppressed: \"")+T(psttw)+T("\"\r\n") ) ;
                        POPUPsOIXLoLD( T(psttw) ) ;

                        ether.delF( tinP , psttw ) ;
                    }
                }
                else if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_SOIXLoLDnOpOPUPoNeRROR ) ) { POPUPsOIXLoLD( T("The word \"")+T(psttw)+T("\" is not a root word.") ) ; }

                //DO NOT PUT API'S TO CLASSES HERE; DERIVE CLASSES FROM baseSoilXxxxC; SEE etherC AS AN EXAMPLE
                //ISSUE: SHOULD SUPPORT FOR GLOBAL API'S BE HARDCODED HERE OR GENERATED: CONJ: GENERATED AND INCLUDED HERE
                //ISSUE: SHOULD SUPPORT FOR MACRO (SUCH AS POPUP) BE HARDCODED HERE OR GENERATED: CONJ: HANDCODED HERE (THERE IS NO TYPE INFO IN THE MACRO)
                //ALT: REQUIRE TYPING INFO TO BE PRESENT IN THE MACRO #define STATEMENT WO'TH TOKEN
                //E.G. POPUPsOIXLoLD(/*5*/osTextT*/*5*/postP)
            }
            ether.delF( tinP , psttw ) ;
            break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a004.rootwordc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a005.rootwordc.operator_shiftleft BEGIN
#define DDNAME       "3func.3606a005.rootwordc.operator_shiftleft"
#define DDNUMB      (countT)0x3606a005
#define IDFILE      (countT)0x120a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& rootWordC::operator <<( soulC& slP )/*1*/
{
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a005.rootwordc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a006.rootwordc.operator_shiftright BEGIN
#define DDNAME       "3func.3606a006.rootwordc.operator_shiftright"
#define DDNUMB      (countT)0x3606a006
#define IDFILE      (countT)0x120b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& rootWordC::operator >>( soulC& slP )/*1*/
{
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a006.rootwordc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a007.rootwordc.operator_shiftright BEGIN
#define DDNAME       "3func.3606a007.rootwordc.operator_shiftright"
#define DDNUMB      (countT)0x3606a007
#define IDFILE      (countT)0x120c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const baseSoilXxxxC& rootWordC::operator >>( soulC& slP ) const/*1*/
{
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606a* : 3func.3606a007.rootwordc.operator_shiftright END
