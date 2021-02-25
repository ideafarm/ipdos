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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3001.papersoldc.papersoldc BEGIN
#define DDNAME       "3func.360a3001.papersoldc.papersoldc"
#define DDNUMB      (countT)0x360a3001
#define IDFILE      (countT)0x1328


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/papersOldC::papersOldC( tinS& tinP , etherC& etherP , backOldC& backP , const countT cPapersP , const countT cArgP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP ) :/*1*/
back( backP ) ,
cPapers( cPapersP ) ,
cLeverIdPaper( 0 ) ,
swPaper( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED , cLeverIdPaper , 0 , sizeof( paperOldC ) ) ,
stq_idPaperRenderUnder( tinP ) ,
idPaperShow( 1 ) ,
idPaperRenderDefault( ifcIDpAPER_SHOW ) ,
idPaperRender( ifcIDpAPER_DEFAULT ) ,
idPaperScratch( cPapersP >= 3 ? 3 : 0 ) ,
pPaperShow( 0 ) ,
pPaperRenderDefault( 0 ) ,
pPaperRender( 0 ) ,
pPaperScratch( 0 )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3001.papersoldc.papersoldc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3002.papersoldc.ctsuffixf BEGIN
#define DDNAME       "3func.360a3002.papersoldc.ctsuffixf"
#define DDNUMB      (countT)0x360a3002
#define IDFILE      (countT)0x1329


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT papersOldC::ctSuffixF( tinS& tinP , etherC& etherP , const countT cArgP , paperToBackCBFT pPaperToBackCBFP , countT cPaperToBackArgP )/*1*/
{
    //paperOldC OBJECTS CANNOT BE CT UNTIL CT OF backOldC DERIVED CLASS OBJECT IS FULLY CT, BECAUSE VIRTUAL FUNCTION TABLE IS NEEDED
    for( cLeverIdPaper = 1 ; cLeverIdPaper <= cPapers ; cLeverIdPaper ++ ) //4:aok 8:aok 01:nocando(bitmapct)
    {
        if( swPaper.idSlotOfLeverF( tinP , cLeverIdPaper ) ) { BLAMMO ; }
        else
        {
            byteT* pbPaper = (byteT*)&(countT&)swPaper ;
            new( 0 , tinP , pbPaper , sizeof( paperOldC ) ) paperOldC( tinP , etherP , cArgP , back , pPaperToBackCBFP , cPaperToBackArgP ) ;

            if( cLeverIdPaper == idPaperShow ) pPaperShow = (paperOldC*)pbPaper ; //MUST BE DONE BEFORE selectNEWF CAN BE CALLED

            //LOGrAWtID4( "paper " , cLeverIdPaper , ": " , (countT)pbPaper ) ;//U::TO STUDY A BUG
        }
    }

    selectF( tinP , ifcIDcMDpAPERsELECT_SETrENDERdEFAULT , idPaperRenderDefault ) ; //WILL SET ALL OF THE pPaper* CACHE MEMBERS
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3002.papersoldc.ctsuffixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3003.papersoldc.dtprefixf BEGIN
#define DDNAME       "3func.360a3003.papersoldc.dtprefixf"
#define DDNUMB      (countT)0x360a3003
#define IDFILE      (countT)0x132a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT papersOldC::dtPrefixF( tinS& tinP )/*1*/
{
    countT cFlavors = swPaper.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        cLeverIdPaper = swPaper.leverF( tinP , idf ) ;
        paperOldC* pPaperDoomed = (paperOldC*)&(countT&)swPaper ;
        DELzOMBIE( pPaperDoomed ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3003.papersoldc.dtprefixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3004.papersoldc.selectf BEGIN
#define DDNAME       "3func.360a3004.papersoldc.selectf"
#define DDNUMB      (countT)0x360a3004
#define IDFILE      (countT)0x132b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i, and i alone, am responsible for keeping the cache members (pPaper*) coherent with the authoritative members (idPaper*)
i always return a valid reference
it is illegal to call me when there are no papers
arguments
 tinP
 idCmdP
 idPaperP
  can be 0 < idPaperP <= cPapers
  can also be one of the ifcIDpAPER symbolic values
   not all symbolic values are legal for all idCmdP values
*/
/**/

#define ifcIDcMDrETURNsHOW            0x1
#define ifcIDcMDrETURNrENDERdEFAULT   0x2
#define ifcIDcMDrETURNrENDER          0x3
#define ifcIDcMDrETURNsCRATCH         0x4

/*1*/paperOldC& papersOldC::selectF( tinS& tinP , const countT idCmdP , countT idPaperP )/*1*/
{
    //LOGrAW5( "****************************************************************************************************\r\npapersOldC::selectF [idCmdP,idPaperP]: " , idCmdP , " " , idPaperP , "\r\n" ) ;
    ZE( boolT , bFreshCache ) ;
    ZE( countT , idCmdReturn ) ;
    ZE( paperOldC* , pPaper ) ;
    switch( idCmdP )
    {
        case ifcIDcMDpAPERsELECT_SETsHOW :
        {
            //LOGrAW( "SETsHOW\r\n" ) ;
            __( idPaperP == ifcIDpAPER_SHOW ) ;
            switch( idPaperP )
            {
                case ifcIDpAPER_DEFAULT : { idPaperP = 1                        ; break ; }
                case ifcIDpAPER_NOTsHOW : { idPaperP = idPaperShow != 1 ? 1 : 2 ; break ; } //LOWEST idPaper THAT IS NOT SHOW
                case ifcIDpAPER_SCRATCH : { idPaperP = idPaperScratch           ; break ; }
            }
            __( idPaperP > cPapers ) ;

            if( idPaperShow != idPaperP )
            {
                idPaperShow = idPaperP ;
                bFreshCache = 1 ;
            }
            //INTENTIONAL FALLTHROUGH
        }
        case ifcIDcMDpAPERsELECT_QUERYsHOW :
        {
            //LOGrAW( "QUERYsHOW\r\n" ) ;
            idCmdReturn = ifcIDcMDrETURNsHOW ;
            break ;
        }
        case ifcIDcMDpAPERsELECT_SETrENDERdEFAULT :
        {
            //LOGrAW( "SETrENDERdEFAULT\r\n" ) ;
            if( idPaperP == ifcIDpAPER_DEFAULT ) idPaperRenderDefault = ifcIDpAPER_NOTsHOW ;
            else                                 idPaperRenderDefault = idPaperP ;
            bFreshCache = 1 ;
            //INTENTIONAL FALLTHROUGH
        }
        case ifcIDcMDpAPERsELECT_QUERYrENDERdEFAULT :
        {
            //LOGrAW( "QUERYrENDERdEFAULT\r\n" ) ;
            idCmdReturn = ifcIDcMDrETURNrENDERdEFAULT ;
            break ;
        }
        case ifcIDcMDpAPERsELECT_SETrENDER :
        {
            //LOGrAW( "SETrENDER\r\n" ) ;
            idPaperRender = idPaperP ;
            bFreshCache = 1 ;
            //INTENTIONAL FALLTHROUGH
        }
        case ifcIDcMDpAPERsELECT_QUERYrENDER :
        {
            //LOGrAW( "QUERYrENDER\r\n" ) ;
            idCmdReturn = ifcIDcMDrETURNrENDER ;
            break ;
        }
        case ifcIDcMDpAPERsELECT_SETsCRATCH :
        {
            //LOGrAW( "SETsCRATCH\r\n" ) ;
            idPaperScratch = idPaperP ;
            bFreshCache = 1 ;
            //INTENTIONAL FALLTHROUGH
        }
        case ifcIDcMDpAPERsELECT_QUERYsCRATCH :
        {
            //LOGrAW( "QUERYsCRATCH\r\n" ) ;
            idCmdReturn = ifcIDcMDrETURNsCRATCH ;
            break ;
        }
        default : { BLAMMO ; break ; }
    }

    if( bFreshCache )
    {
        //SHOW
        cLeverIdPaper = idPaperShow ;
        pPaperShow = !swPaper.idSlotOfLeverF( tinP , cLeverIdPaper ) ? 0 : (paperOldC*)&(countT&)swPaper ;

        //RENDERdEFAULT
        countT idPaper = idPaperRenderDefault ;
        __( idPaper == ifcIDpAPER_DEFAULT ) ;
        switch( idPaper )
        {
            case ifcIDpAPER_SHOW    : { idPaper = idPaperShow              ; break ; }
            case ifcIDpAPER_NOTsHOW : { idPaper = idPaperShow != 1 ? 1 : 2 ; break ; }
            case ifcIDpAPER_SCRATCH : { idPaper = idPaperScratch           ; break ; }
        }
        cLeverIdPaper = idPaper ;
        pPaperRenderDefault = !swPaper.idSlotOfLeverF( tinP , cLeverIdPaper ) ? 0 : (paperOldC*)&(countT&)swPaper ;

        //RENDER
        if( idPaperRender == ifcIDpAPER_DEFAULT ) pPaperRender = pPaperRenderDefault ;
        else
        {
            countT idPaper = idPaperRender ;
            switch( idPaper )
            {
                case ifcIDpAPER_SHOW    : { idPaper = idPaperShow              ; break ; }
                case ifcIDpAPER_NOTsHOW : { idPaper = idPaperShow != 1 ? 1 : 2 ; break ; }
                case ifcIDpAPER_SCRATCH : { idPaper = idPaperScratch           ; break ; }
            }
            cLeverIdPaper = idPaper ;
            pPaperRender = !swPaper.idSlotOfLeverF( tinP , cLeverIdPaper ) ? 0 : (paperOldC*)&(countT&)swPaper ;
        }

        //SCRATCH
        if( !idPaperScratch ) pPaperScratch = 0 ;
        else
        {
            cLeverIdPaper = idPaperScratch ;
            pPaperScratch = !swPaper.idSlotOfLeverF( tinP , cLeverIdPaper ) ? 0 : (paperOldC*)&(countT&)swPaper ;
        }

        //LOGrAW9( "papersOldC::selectF [idPaperRenderDefault,idPaperRender,idPaperShow,idPaperScratch]: " , idPaperRenderDefault , " " , idPaperRender , " " , idPaperShow , " " , idPaperScratch , "\r\n" ) ;
    }

    //DEFAULT CASCADE (APPLIES ONLY IF I AM CALLED BEFORE ALL PAPERS ARE CT); PURPOSE IS TO ENSURE A VALID REF IS ALWAYS RETURNED
    if( !pPaperShow          ) { BLAMMO ; }
    if( !pPaperRenderDefault ) pPaperRenderDefault = pPaperShow          ;
    if( !pPaperRender        ) pPaperRender        = pPaperRenderDefault ;
    if( !pPaperScratch       ) pPaperScratch       = pPaperRender        ;

    switch( idCmdReturn )
    {
        case ifcIDcMDrETURNsHOW          : { pPaper = pPaperShow          ; break ; }
        case ifcIDcMDrETURNrENDERdEFAULT : { pPaper = pPaperRenderDefault ; break ; }
        case ifcIDcMDrETURNrENDER        : { pPaper = pPaperRender        ; break ; }
        case ifcIDcMDrETURNsCRATCH       : { pPaper = pPaperScratch       ; break ; }
        default                          : { BLAMMO                       ; break ; }
    }

    if( !pPaper ) { BLAMMO ; }
    return *pPaper ;
}

#undef ifcIDcMDrETURNsHOW
#undef ifcIDcMDrETURNrENDERdEFAULT
#undef ifcIDcMDrETURNrENDER
#undef ifcIDcMDrETURNsCRATCH


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3004.papersoldc.selectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3005.papersoldc.idpaperf BEGIN
#define DDNAME       "3func.360a3005.papersoldc.idpaperf"
#define DDNUMB      (countT)0x360a3005
#define IDFILE      (countT)0x132c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT papersOldC::idPaperF( const paperOldC& paperP )/*1*/
{
    return swPaper( *(countT*)&paperP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3005.papersoldc.idpaperf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3006.papersoldc.operator_countt BEGIN
#define DDNAME       "3func.360a3006.papersoldc.operator_countt"
#define DDNUMB      (countT)0x360a3006
#define IDFILE      (countT)0x132d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/papersOldC::operator countT( voidT )/*1*/
{
    return cPapers ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3006.papersoldc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3007.papersoldc.operator_call BEGIN
#define DDNAME       "3func.360a3007.papersoldc.operator_call"
#define DDNUMB      (countT)0x360a3007
#define IDFILE      (countT)0x132e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/paperOldC* papersOldC::operator ()( tinS& tinP , const countT idP )/*1*/
{
    paperOldC* pPaper ;
    if( swPaper.idSlotOfLeverF( tinP , idP ) )
    {
        cLeverIdPaper = idP ;
        pPaper = (paperOldC*)&(countT&)swPaper ;
    }
    return pPaper ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3007.papersoldc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3008.papersoldc.pushrenderf BEGIN
#define DDNAME       "3func.360a3008.papersoldc.pushrenderf"
#define DDNUMB      (countT)0x360a3008
#define IDFILE      (countT)0x132f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT papersOldC::pushRenderF( tinS& tinP , const countT idPaperP )/*1*/
{
    if( idPaperP && idPaperP <= cPapers )
    {
        stq_idPaperRenderUnder << idPaperRender ;
        selectF( tinP , ifcIDcMDpAPERsELECT_SETrENDER , idPaperP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3008.papersoldc.pushrenderf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3009.papersoldc.poprenderf BEGIN
#define DDNAME       "3func.360a3009.papersoldc.poprenderf"
#define DDNUMB      (countT)0x360a3009
#define IDFILE      (countT)0x1330


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT papersOldC::popRenderF( tinS& tinP )/*1*/
{
    if( stq_idPaperRenderUnder )
    {
        ZE( countT , idPaper ) ;
        stq_idPaperRenderUnder >> idPaper ;
        selectF( tinP , ifcIDcMDpAPERsELECT_SETrENDER , idPaper ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360a3* : 3func.360a3009.papersoldc.poprenderf END
