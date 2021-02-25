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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069002.lexc.lexc BEGIN
#define DDNAME       "3func.36069002.lexc.lexc"
#define DDNUMB      (countT)0x36069002
#define IDFILE      (countT)0x1202


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/lexC::lexC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postNameP ) :/*1*/
baseSoilXxxxC( tinP.pAdamGlobal1->_lexC_.postOldClassName , postName ) ,
postName( 0 ) ,
ether( etherP ) ,
psttl( 0 ) ,
swDef( tinP , etherP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , psttl )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069002.lexc.lexc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069003.lexc.operator_call BEGIN
#define DDNAME       "3func.36069003.lexc.operator_call"
#define DDNUMB      (countT)0x36069003
#define IDFILE      (countT)0x1203


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT lexC::operator ()( tinS& tinP , soulC& slP )/*1*/
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
            slP << (strokeS*)T(tinP.pAdamGlobal1->_lexC_.postOldClassName) ;
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

            ZE( boolT , bFound ) ;
            if( !ether.strCompareF( tinP , psttw , T("?") ) )
            {
                POPUP( T(postName)+T(": \"?\" received.") ) ;
            }
            else if( swDef.idSlotOfLeverF( tinP , (countT)psttw ) )
            {
                psttl = psttw ;
                soulC& slDef = *(soulC*)(countT)swDef ;
                psttl = 0 ;
                slP.playF( tinP , slDef ) ;
                bFound = 1 ;
            }
            slP << bFound ;

            PUSE( tinP , *(byteT**)&psttw ) ;
            break ;
        }
        case ifcIDcMDbASE_CMDsPECIFIED :
        {
            ZE( countT , idCmd ) ;
            slP >> idCmd ;
            switch( idCmd )
            {
                case IDcMDwORD_DEFINE :
                {
                    psttl = 0 ;
                    slP >> psttl ; ___( psttl ) ;

                    soulC*& pSoul = *(soulC**)&(countT&)swDef ;
                    if( !pSoul ) pSoul = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ;
                    else         { POPUP( T("WARNING: Word \"")+T(psttl)+T("\" is being redefined in lexC object \"")+T(postName)+T("\".  This might not be supported in the future.  It is bad code style.") ) ; }

                    if( pSoul )
                    {
                        pSoul->removeAllF( tinP ) ;
                        slP >> *pSoul ;
                    }
                    PUSE( tinP , *(byteT**)&psttl ) ;
                    break ;
                }
            }
            break ;
        }
    }

    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069003.lexc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069004.lexc.operator_shiftleft BEGIN
#define DDNAME       "3func.36069004.lexc.operator_shiftleft"
#define DDNUMB      (countT)0x36069004
#define IDFILE      (countT)0x1204


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& lexC::operator <<( soulC& slP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069004.lexc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069005.lexc.operator_shiftright BEGIN
#define DDNAME       "3func.36069005.lexc.operator_shiftright"
#define DDNUMB      (countT)0x36069005
#define IDFILE      (countT)0x1205


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& lexC::operator >>( soulC& slP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069005.lexc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069006.lexc.operator_shiftright BEGIN
#define DDNAME       "3func.36069006.lexc.operator_shiftright"
#define DDNUMB      (countT)0x36069006
#define IDFILE      (countT)0x1206


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const baseSoilXxxxC& lexC::operator >>( soulC& slP ) const/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36069* : 3func.36069006.lexc.operator_shiftright END
