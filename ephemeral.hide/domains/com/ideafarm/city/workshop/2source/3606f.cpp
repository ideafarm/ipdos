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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f001.soilspacec.dt_soilspacec BEGIN
#define DDNAME       "3func.3606f001.soilspacec.dt_soilspacec"
#define DDNUMB      (countT)0x3606f001
#define IDFILE      (countT)0x1211


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/soixlOldSpaceC::~soixlOldSpaceC( voidT )/*1*/
{
    TINSL

    for( countT off = 0 ; off < sizeof ppsttRawWord / sizeof ppsttRawWord[ 0 ] ; off ++ ) ether.delF( tinP , ppsttRawWord[ off ] ) ;

    countT cFlavors = sw_pObject.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        postLever = (osTextT*)sw_pObject.leverF( tinP , idf ) ;
        baseSoilXxxxC*& pObject = *(baseSoilXxxxC**)&(countT&)sw_pObject ;
        ether.strokeF( tinP , T("deleting object named \"")+T(pObject->postNameF(tinP))+T("\"\r\n") ) ;
        if( pObject == this ) pObject = 0 ;
        else { DEL( pObject ) ; }
    }
    ether.delF( tinP , psttUseLex ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f001.soilspacec.dt_soilspacec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f002.soilspacec.soilspacec BEGIN
#define DDNAME       "3func.3606f002.soilspacec.soilspacec"
#define DDNUMB      (countT)0x3606f002
#define IDFILE      (countT)0x1212


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/soixlOldSpaceC::soixlOldSpaceC( tinS& tinP , etherC& etherP , const strokeS* const psttNameP ) :/*1*/
baseSoilXxxxC( tinP.pAdamGlobal1->_soixlOldSpaceC_.postOldClassName , postName ) ,
postName( 0 ) ,
ether( etherP ) ,
stackPrivate( tinP , TAG( TAGiDnULL ) , flSOUL_LIFO|flSOUL_LIVE ) ,
stLex( tinP , etherP , TAG( TAGiDnULL ) ) ,
psttUseLex( 0 ) ,
postLever( 0 ) ,
psttLever( 0 ) ,
sw_pObject( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , (byteT**)&postLever ) ,
paRootWord( 0 ) ,
paStack( 0 ) ,
bLiteralNull( 0 ) ,
bLiteralCount( 0 ) ,
bLiteralStrokesAt( 0 ) ,
bLiteralBytesAt( 0 ) ,
bAt( 0 ) ,
csttExtra( 0 ) ,
scQuiet( 0 ) ,
scOff( 0 ) ,
bQuit( 0 )
{
    if( psttNameP ) etherP.strMakeF( tinP , LF , *(osTextT**)&postName , psttNameP ) ;
    etherP.memSetF( tinP , (byteT*)ppsttRawWord , sizeof ppsttRawWord ) ;

    PoBJECT( postName ) = this ;

    TN( tNameStackDefault , "stack1" ) ;
    paStack = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) , flSOUL_LIFO|flSOUL_LIVE , (osTextT*)0 , 0 , (osTextT*)tNameStackDefault )  ; ___( paStack ) ;
    PoBJECT( tNameStackDefault ) = paStack ;

    TN( tNameRootWordDefault , "rootWord1" ) ;
    paRootWord = new( 0 , tinP , LF ) rootWordC( tinP , etherP , tNameRootWordDefault ) ; ___( paRootWord ) ;
    PoBJECT( tNameRootWordDefault ) = paRootWord ;

    TN( tNameLexDefault , "lex1" ) ;
    lexC* pLex = new( 0 , tinP , LF ) lexC( tinP , etherP , TAG( TAGiDnULL ) , tNameLexDefault ) ; ___( pLex ) ;
    PoBJECT( tNameLexDefault ) = pLex ;
    stLex << (countT)pLex ; pLex = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f002.soilspacec.soilspacec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f003.soilspacec.operator_call BEGIN
#define DDNAME       "3func.3606f003.soilspacec.operator_call"
#define DDNUMB      (countT)0x3606f003
#define IDFILE      (countT)0x1213


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT soixlOldSpaceC::operator ()( tinS& tinP , soulC& slP )/*1*/
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
            slP << (strokeS*)T("soixlOldSpaceC") ;
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
            slP >> psttw ;
            //ether.strokeF( tinP , T(postName)+T(" received \"")+T(psttw)+T("\"\r\n") ) ;

            ZE( boolT , bLookup ) ;
            if( psttUseLex ) bLookup = 1 ;
            else if( !ether.strCompareF( tinP , psttw , T("soixlOld"   ) ) ) ; //"soixlOld" IS FOR "SENTIENT OBJECT INTERFACE LANGUAGE"
            else if( !ether.strCompareF( tinP , psttw , T("quiet"  ) ) ) scQuiet ++ ;
            else if( !ether.strCompareF( tinP , psttw , T("noquiet") ) ) scQuiet -- ;
            else if( !ether.strCompareF( tinP , psttw , T("off"    ) ) ) scOff ++ ;
            else if( !ether.strCompareF( tinP , psttw , T("on"     ) ) ) scOff -- ; //ADDED BECAUSE APPARENTLY A MISSING LINE BUG
            else if( !ether.strCompareF( tinP , psttw , T("quit"   ) ) ) bQuit = 1 ;
            else if( !ether.strCompareF( tinP , psttw , T("tm"     ) ) )  //"tm" IS FOR "TRADE MARK"
            {
                ZE( strokeS* , psttw ) ;
                *paStack >> psttw ;
                if( ether.strCompareF( tinP , psttw , T("IdeaFarm") ) ) { POPUPsOIXLoLD( T("I do not know how to parse SOIL (tm) code that is marked with the \"")+T(psttw)+T("\" trademark.") ) ; }
                ether.delF( tinP , psttw ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("version") ) )
            {
                ZE( countT , idv ) ;
                *paStack >> idv ;
                if( idv != 1 ) { POPUPsOIXLoLD( T("I do not know how to parse SOIL (tm) code that specifies version ")+TF2(idv,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".") ) ; }
                ether.delF( tinP , psttw ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("+") ) )
            {
                ZE( countT , idv ) ;
                *paStack >> idv ;
                csttExtra = idv ;
                ether.delF( tinP , psttw ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("#") ) )
            {
                ZE( strokeS* , psttw ) ;
                *paStack >> psttw ;
                ether.strokeF( tinP , T("comment: \"")+T(psttw)+T("\"\r\n") ) ;
                ether.delF( tinP , psttw ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("=") ) )
            {
                ZE( strokeS* , psttToName ) ;
                *paStack >> psttToName ;

                TN( tLever , "" ) ; tLever = T(psttToName) ;
                postLever = tLever ;

                if( sw_pObject.idSlotOfLeverF( tinP , (countT)postLever ) )
                {
                    baseSoilXxxxC* pObject = (baseSoilXxxxC*)(countT)sw_pObject ;
                    if( pObject )
                    {
                        *paStack << (countT)ifcIDcMDbASE_CLASSnAME << pObject ;
                        ZE( strokeS* , psttOldClass ) ;
                        *paStack >> psttOldClass ;
                        if( !ether.strCompareF( tinP , psttOldClass , T("countC") ) )
                        {
                            ZE( countT , vv ) ;
                            *paStack >> vv ;
                            *(countC*)pObject = vv ; //U:: USE THE FORTH INTERFACE TO THE OBJECT
                        }
                        else { POPUPsOIXLoLD( T(postName)+T(" is a ")+T(psttOldClass)+T(" object.  \".=\" requires countC object") ) ; }
                    }
                }
            }
            else if( !ether.strCompareF( tinP , psttw , T("x") ) )
            {
                ZE( strokeS* , psttNewWord ) ;
                *paStack >> psttNewWord ;
                ZE( strokeS* , psttDefName ) ;
                *paStack >> psttDefName ;

                TN( tLever , "" ) ; tLever = T(psttDefName) ;
                postLever = tLever ;
                if( sw_pObject.idSlotOfLeverF( tinP , (countT)postLever ) )
                {
                    baseSoilXxxxC* pObject = (baseSoilXxxxC*)(countT)sw_pObject ;
                    if( pObject )
                    {
                        *paStack << (countT)ifcIDcMDbASE_CLASSnAME << pObject ;
                        ZE( strokeS* , psttOldClass ) ;
                        *paStack >> psttOldClass ;
                        if( !ether.strCompareF( tinP , psttOldClass , T("soulC") ) )
                        {
                            lexC& lex = *(lexC*)stLex[ 1 ] ;
                            *paStack << *(soulC*)pObject ;
                            *paStack << psttNewWord O2(IDcMDwORD_DEFINE,lex) ;
                        }
                        else { POPUPsOIXLoLD( T(psttDefName)+T(" is a ")+T(psttOldClass)+T(" object.  \".x\" requires a list object") ) ; }
                    }
                }

                ether.delF( tinP , psttNewWord ) ;
                ether.delF( tinP , psttDefName ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("b@") ) )
            {
                if( !bLiteralNull ) bLiteralBytesAt = 1 ;
                else
                {
                    bLiteralNull = 0 ;
                    ZE( byteT* , pbz ) ;
                    *paStack << pbz ;
                }
            }
            else if( !ether.strCompareF( tinP , psttw , T("c") ) ) bLiteralCount = 1 ;
            else if( !ether.strCompareF( tinP , psttw , T("include") ) )
            {
                ZE( strokeS* , psttFileName ) ;
                slP >> psttFileName ;

                if( psttFileName && ether.diskFileExistsF( tinP , psttFileName ) )
                {
                    ZE( osTextT* , posti ) ;
                    ZE( countT   , costi ) ;
                    ether.boxGetShadowF( tinP , posti , costi , psttFileName ) ;
                    if( posti && costi )
                    {
                        ZE( strokeS* , psttr ) ;
                        ether.strReverseF( tinP , psttr , T(posti) , T("\r\n") ) ; ___( psttr ) ;
                        *this << psttr ;
                        ether.delF( tinP , psttr ) ;
                    }
                    ether.delF( tinP , posti ) ;
                }

                ether.delF( tinP , psttFileName ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("useLex") ) ) slP >> psttUseLex ;
            else if( !ether.strCompareF( tinP , psttw , T("?") ) )
            {
                TN( tBody , "" ) ;
                tBody = T(

                    POSTpROLOG "\r\n"
                    ". quiet space\r\n"
                    ". off space\r\n"
                    "IdeaFarm " "(tm) SOIL (tm) <> Sentient Object Interface Language\r\n"
                    "\r\n"
                    "Class: soixlOldSpaceC")+T("\r\n"
                    "Author: ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Class synopsis: Each object of the soixlOldSpaceC class represents a single human computer\r\n"
                    "operator in IdeaFarm " "(tm) Space.  Through the intermediary of a soixlOldSpaceC object,\r\n"
                    "the human can be present in IdeaFarm " "(tm) Space and can interact with the other\r\n"
                    "objects there, including soixlOldSpaceC objects representing other humans.\r\n"
                    "\r\n"
                    "Object synopsis: The author of this document, \"")+T(postName)+T("\", is your\r\n"
                    "representative in IdeaFarm " "(tm) Space.\r\n"
                    "\r\n"
                    ". on space\r\n"
                    ". .        . ?? ")+T(postName)+T("\r\n"
                    ". .0       . ?? ")+T(postName)+T("\r\n"
                    ". .@       . ?? ")+T(postName)+T("\r\n"
                    ". off      . ?? ")+T(postName)+T("\r\n"
                    ". on       . ?? ")+T(postName)+T("\r\n"
                    ". quit     . ?? ")+T(postName)+T("\r\n"
                    ". ?        . ?? ")+T(postName)+T("\r\n"
                    ". ??       . ?? ")+T(postName)+T("\r\n"
                    ". soixlOld     . ?? ")+T(postName)+T("\r\n"
                    ". tm       . ?? ")+T(postName)+T("\r\n"
                    ". version  . ?? ")+T(postName)+T("\r\n"
                    ". quiet    . ?? ")+T(postName)+T("\r\n"
                    ". noquiet  . ?? ")+T(postName)+T("\r\n"
                    ". #        . ?? ")+T(postName)+T("\r\n"
                    ". b@       . ?? ")+T(postName)+T("\r\n"
                    ". c        . ?? ")+T(postName)+T("\r\n"
                    ". n        . ?? ")+T(postName)+T("\r\n"
                    ". =        . ?? ")+T(postName)+T("\r\n"
                    ". x        . ?? ")+T(postName)+T("\r\n"
                    ". +        . ?? ")+T(postName)+T("\r\n"
                    ". off space\r\n"
                    "\r\n"
                    "I work with other objects to process the SOIL (tm) program text that you drop into\r\n"
                    "the Mouth.  You can reference these objects by name in your SOIL (tm) text.  In this\r\n"
                    "way, you can obtain further information about how your SOIL (tm) text is processed and\r\n"
                    "about the words that each object understands.\r\n"
                    "\r\n"
                    "The names of the objects that I work with are:\r\n"
                    "\r\n"

                ) ;

                countT cFlavors = sw_pObject.cFlavorsF( tinP ) ;
                {for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    postLever = (osTextT*)sw_pObject.leverF( tinP , idf ) ;
                    baseSoilXxxxC*& pObject = *(baseSoilXxxxC**)&(countT&)sw_pObject ;
                    if( pObject != this ) tBody += T("    \"")+T(pObject->postNameF(tinP))+T("\"\r\n") ;
                }}

                tBody += T(

                    "\r\n"
                    "To obtain additional information, d" "elete ze""ro or more of the following lines and then drop\r\n"
                    "this document into the Mouth.\r\n"
                    "\r\n"
                    ". on space\r\n"

                ) ;

                cFlavors = sw_pObject.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    postLever = (osTextT*)sw_pObject.leverF( tinP , idf ) ;
                    baseSoilXxxxC*& pObject = *(baseSoilXxxxC**)&(countT&)sw_pObject ;
                    if( pObject != this ) tBody += T("    . ? ")+T(pObject->postNameF(tinP))+T("\r\n") ;
                }

                tBody += T(

                    ". off space\r\n"

                ) ;

                ZE( strokeS* , pstth ) ;
                ether.strReverseF( tinP , pstth , tBody , T("\r\n") ) ; ___( pstth ) ;
                tBody = T(pstth) ;
                ether.delF( tinP , pstth ) ;

                TN_tSoixlOld
                TN_tMouth
                TN( tSoixlOldShort , postSOIXLoLDfILESfOLDERS_SHORTsOIXLoLD ) ;
                TN( tMouthShort , postSOIXLoLDfILESfOLDERS_SHORTmOUTH ) ;

                TN( tNameShort , "") ; tNameShort = T("soixlOld.help.")+T(postName)+T(".txt") ;
                TN( tName , "" ) ; tName = tSoixlOld+tNameShort ;
                ether.boxPutF( tinP , tName , tBody , tBody.csF(  tinP ) ) ;
                POPUPsOIXLoLD( T("I, \"")+T(postName)+T("\", have created \"")+tNameShort+T("\".  Read that document and then edit it to indicate what additional information you want.  Then drop it into the Mouth to obtain the additional information.") ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("??") ) )
            {
                ZE( strokeS* , psttQueryWord ) ;
                *paStack >> psttQueryWord ;

                TN( tBody , "" ) ;
                tBody = T(

                    POSTpROLOG "\r\n"
                    ". off space\r\n"
                    "\r\n"
                    USCORE79 "\r\n"
                    "IdeaFarm " "(tm) SOIL (tm) <> Sentient Object Interface Language\r\n"
                    "\r\n"
                    "Class: soixlOldSpaceC")+T("\r\n"
                    "Author: ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Subject: Command word \"")+T(psttQueryWord)+T("\"\r\n"
                    "\r\n"
                    "\r\n"
                    "Instructions:  Read this file.  It contains simple example code.  To\r\n"
                    "manifest that code, drop this file into the Mouth.  IOW, this file\r\n"
                    "is also an executable SOIL (tm) program.\r\n"
                    "\r\n"

                ) ;

                if( !ether.strCompareF( tinP , psttQueryWord , T(".") ) ) tBody += T(
                    "\r\n"
                    "Summary: Modifies the parsing of the next word, which will be parsed as\r\n"
                    "a literal.  If it is a valid countT object, it will be pushed as a countT.\r\n"
                    "Else, it will be pushed as a string of strokeS objects.\r\n"
                    "\r\n"
                    "Example phrase:    . quiet ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "This is not a command word.  It is intercepted by the space and affects\r\n"
                    "the space immediately.  A command word is pushed to the stack so that\r\n"
                    "it can be popped by an object and obeyed by that object.  Parser objects\r\n"
                    "are the only class of objects that do not completely conform to the SOIL (tm)\r\n"
                    "object interface specification.  These departures are few, and are noted\r\n"
                    "in this manner.\r\n"
                    "\r\n"
                    "In the example phrase, the \".\" tells the space to push an unnamed\r\n"
                    "object whose value is \"quiet\".  The value will be pushed as a strokeS\r\n"
                    "string object since \"quiet\" is not numeric.  The following word causes\r\n"
                    "the object named ")+T(postName)+T(" to manifest.  That object will pop\r\n"
                    "the strokeS string, interpret it as a command, and obey it.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Hello!\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T(".@") ) ) tBody += T(
                    "\r\n"
                    "Summary: Modifies the parsing of the next word, which will be parsed as\r\n"
                    "the name of the stack or list object that is to receive subsequent pushes.\r\n"
                    "\r\n"
                    "Example phrase:    .@ myList\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "This is not a command word.  It is intercepted by the space and affects\r\n"
                    "the space immediately.  A command word is pushed to the stack so that\r\n"
                    "it can be popped by an object and obeyed by that object.  Parser objects\r\n"
                    "are the only class of objects that do not completely conform to the SOIL (tm)\r\n"
                    "object interface specification.  These departures are few, and are noted\r\n"
                    "in this manner.\r\n"
                    "\r\n"
                    "This word is the only exception to the SOIL (tm) grammer, in that it precedes its\r\n"
                    "argument.  The SOIL (tm) language makes this exception so that stack switches\r\n"
                    "can occur without touching the stack or list that is currently receiving\r\n"
                    "pushes.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . myList . list . n space\r\n"
                    "    . \"Thank you, God!\" POPUP\r\n"
                    "    .@ stack1\r\n"
                    "    . myList . myWord . x space\r\n"
                    "    myWord\r\n"
                    "    myWord\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T(".0") ) ) tBody += T(
                    "\r\n"
                    "Summary: Pushes a null value of type strokeS* .\r\n"
                    "\r\n"
                    "Example phrase:    .0\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            strokeS*\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "This is not a command word.  It is intercepted by the space and affects\r\n"
                    "the space immediately.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    .0 . POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("?") ) ) tBody += T(
                    "\r\n"
                    "Summary: Places general help information onto the local desk.\r\n"
                    "\r\n"
                    "Example phrase:    . ? ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "Every object in IdeaFarm " "(tm) SOIL (tm) accepts the \"?\" command.\r\n"
                    "The normal syntax is\r\n"
                    "\r\n"
                    "    . ? someObjectName\r\n"
                    "\r\n"
                    "For example, the following phrase will produce the document that you\r\n"
                    "are reading:\r\n"
                    "\r\n"
                    "    . ? ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . ? ")+T(postName)+T("\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("??") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Places help information for a specified word onto the\r\n"
                    "local desk.\r\n"
                    "\r\n"
                    "Example phrase:    . someWord . ?? ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . n . ?? ")+T(postName)+T("\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("soixlOld") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Declares that this string of text is a SOIL (tm) (Sentient\r\n"
                    "Object Interface Language) program.\r\n"
                    "\r\n"
                    "Example phrase:    . soixlOld ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "The term SOIL (tm) is hereby released into the public domain; it is not\r\n"
                    "used as a trademark herein.  Other computer language implementors are\r\n"
                    "asked to refrain from using the term SOIL (tm) to refer to their language\r\n"
                    "implementation unless that language satisfies all of the following\r\n"
                    "criteria, which are offered as a provisional definition of the language.\r\n"
                    "Implementers and users may publish competing definitions, and may form\r\n"
                    "a standards committee that may publish a definition of the language.\r\n"
                    "No implementor or committee may trademark SOIL (tm) or impose a particular\r\n"
                    "language definition on an implementor.  In all things, let implementors\r\n"
                    "battle each other through product quality, not through lawyer quality,\r\n"
                    "in a manner that increases competition, innovation, and dynamism in the\r\n"
                    "market for SOIL (tm) implementations and applications.\r\n"
                    "\r\n"
                    "\r\n"
                    "    Syntax:\r\n"
                    "\r\n"
                    "        G1. The language is a sequence of words with no grammar and no punctuation.\r\n"
                    "\r\n"
                    "        G2. Every character in the SOIL (tm) character set is allowed in every position of a\r\n"
                    "            word.\r\n"
                    "\r\n"
                    "        G3. Input in the form of text partitioned by whitespace is supported.  This\r\n"
                    "            support provides for the input of any character in the SOIL (tm) character set.\r\n"
                    "\r\n"
                    "        G4. Machine-independent binary input is supported.\r\n"
                    "\r\n"
                    "        G5. The SOIL (tm) character set is the set of all possible 32 bit counting number\r\n"
                    "            pairs: (v,c) where v,c are each elements of [0,ffffffff].  The low order\r\n"
                    "            value v represents the \"value\" of the character.  the high order value\r\n"
                    "            c represents the \"class\" of the character.  Oo characters that differ\r\n"
                    "            only in class MUST be semantically distinct; class is not to be used to\r\n"
                    "            specify font, color, or other rendering information.\r\n"
                    "\r\n"
                    "        G6. Rendering is controlled by modal information, which can be specified by\r\n"
                    "            the use of characters of classes that are dedicated to that purpose.\r\n"
                    "\r\n"
                    "        G7. Most points in the SOIL (tm) character set space have undefined meaning.\r\n"
                    "            Classes that are defined in the language are numbered upward from 1.\r\n"
                    "            Classes at or above 000000ff are guaranteed to be undefined.\r\n"
                    "            Within a defined class, all values are either defined or reserved.\r\n"
                    "            Classes below 000000ff that are currently undefined may be treated\r\n"
                    "            as undefined, but code that does this should anticipate the possibility\r\n"
                    "            of collision with a future version of the SOIL (tm) implementation.\r\n"
                    "\r\n"
                    "        G8. IdeaFarm " "(tm) City is the cultural context of all implementations of\r\n"
                    "            the SOIL (tm) language:  (1) Text wraps upward and multiline text is read\r\n"
                    "            from the bottom up.  (2) Numeric values are represented using radix f\r\n"
                    "            (base 16) digits unless indicated otherwise.  A numeric value with\r\n"
                    "            a fractional part is always represented using a radix point, and\r\n"
                    "            always in a radix that is a power of 2.  The significance of the\r\n"
                    "            digits increases from left to right.  For example, 001 is the value\r\n"
                    "            256_9, or 256 as it is conventionally written using base 10.\r\n"
                    "\r\n"
                    "\r\n"
                    "    Semantics:\r\n"
                    "\r\n"
                    "        S1. Each word refers to an object, ether by name or by value.\r\n"
                    "            Reference by value creates an unnamed object that is destroyed\r\n"
                    "            when the reference is popped, or when the receiving stack or list\r\n"
                    "            is destroyed.  Named objects must be explicitly created and destroyed.\r\n"
                    "\r\n"
                    "        S2. There are no reserved names.\r\n"
                    "\r\n"
                    "        S3. Each word is pushed onto a stack or list as it is parsed.\r\n"
                    "\r\n"
                    "        S4. If a word is pushed onto a stack, the object referenced takes action,\r\n"
                    "            which always includes removing the reference from the stack.  The\r\n"
                    "            effect of this action is called a manifestation.  If the word is\r\n"
                    "            pushed onto a list, no action occurs; there is no manifestation.\r\n"
                    "\r\n"
                    "\r\n    S5. Possible actions include pushing and popping words."
                    "\r\n"
                    "        S6. Any resultant state change other than the pushing and\r\n"
                    "            popping of words is called a \"side effect\".\r\n"
                    "\r\n"
                    "        S7. The action of every word is reversable (undoable).\r\n"
                    "            All inherently undoable side effects are deferred\r\n"
                    "            until the program specifies \"commit\".\r\n"
                    "\r\n"
                    "        S8. The character set is extensible; a program can define\r\n"
                    "            the meaning of any undefined character class and associate\r\n"
                    "            a glyph with each of some or all values within that class.\r\n"
                    "            (A glyph specifies enough information to fully determine,\r\n"
                    "            when combined the current rendering mode, the rendering of\r\n"
                    "            the character.  This rendering will normally be distinct,\r\n"
                    "            but glyphs that are not distinct are permitted.\r\n"
                    "\r\n"
                    "        S9. When a SOIL (tm) object contains other SOIL (tm) objects, it is called a\r\n"
                    "            SOIL (tm) space.  Every object that is not in another containing object\r\n"
                    "            is contained in the Root Space for that implementation of SOIL (tm).\r\n"
                    "            The Root Space is a single space encompassing all Internet hosts\r\n"
                    "            on which that implementation of SOIL (tm) is installed.\r\n"
                    "\r\n"
                    "        Sa. Within a SOIL (tm) space, every distinct name value completely identifies\r\n"
                    "            an object.  An object can be created with any name, but if that name\r\n"
                    "            is already in use, it will \"hide\" the other objects.\r\n"
                    "\r\n"
                    "        Sb. Within a SOIL (tm) space, every object can \"see\" every other object,\r\n"
                    "            except those hidden due to name collisions.\r\n"
                    "\r\n"
                    "        Sc. Each SOIL (tm) space object can see the objects that it contains,\r\n"
                    "            and those objects can see it, using the alias \"god\".\r\n"
                    "            For the SOIL (tm) space object, a name refers to a contained \r\n"
                    "            object with that name, if it exists.  Else it refers to\r\n"
                    "            a peer object.  (Contained objects hide peer objects.)\r\n"
                    "\r\n"
                    "        Sd. An object can interact with any object that it sees\r\n"
                    "            by pushing a reference to that object onto a stack object.\r\n"
                    "            Support for this interaction when it is interprocess or\r\n"
                    "            interhost must be transparent.  Support for other kinds of\r\n"
                    "            interobject interface protocols are allowed but are not part\r\n"
                    "            of the SOIL (tm) language.\r\n"
                    "\r\n"
                    "        Se. All extant SOIL (tm) objects contained, directly or indirectly,\r\n"
                    "            in an implementation's Root Space exist in real time, and\r\n"
                    "            all implementation details involving multithreading,\r\n"
                    "            interprocess communication, and interhost communication\r\n"
                    "            must be completely transparent.\r\n"
                    "\r\n"
                    "\r\n"
                    "    Philosophy:\r\n"
                    "\r\n"
                    "        P1. The language makes no attempt to be idiot proof.\r\n"
                    "            As far as is possible, if the underlying hardware\r\n"
                    "            can do it, you can do it in SOIL (tm).\r\n"
                    "\r\n"
                    "        P2. The language is intended to be used in a spirit\r\n"
                    "            of craftsmanship.  It makes no attempt to turn\r\n"
                    "            stupid, careless, and/or lazy people into\r\n"
                    "            computer programmers.\r\n"
                    "\r\n"
                    "        P3. SOIL (tm) shares a key weakness with its inspiration,\r\n"
                    "            Forth, in that both languages are vulnerable to\r\n"
                    "            those who would develop huge, nonorthogonal\r\n"
                    "            lexicons containing words that are poorly\r\n"
                    "            named and conceived to meet an immediate\r\n"
                    "            need, without any consideration of how the\r\n"
                    "            new word will contribute to the quality of\r\n"
                    "            the lexicon to which it is added.  The primary\r\n"
                    "            protection against this must be ethical; let all\r\n"
                    "            SOIL (tm) programmers commit themselves to defining\r\n"
                    "            new words with care and restraint.  Implementations\r\n"
                    "            should facilitate this by supporting multiple lexicons,\r\n"
                    "            temporary lexicons, public lexicons, etc.\r\n"
                    "\r\n"
                    "        P4. Exception handling details are not within the scope\r\n"
                    "            of this language specification except to note that\r\n"
                    "            exceptional conditions do occur.  Implementations\r\n"
                    "            must provide a means by which the code can select\r\n"
                    "            from a menu of orthogonal actions that are to be\r\n"
                    "            taken when an exception occurs.  The default behavior\r\n"
                    "            of the code is to be of an \"impotence backoff\" nature;\r\n"
                    "            the objects involved become impotent and manifestations\r\n"
                    "            end.\r\n"
                    "\r\n"
                    "        P5. The language is strongly typed, in that values are not\r\n"
                    "            silently converted.  In general, the code that provides\r\n"
                    "            the value must provide it explicitly in the type that is\r\n"
                    "            expected by the recieving object.\r\n"
                    "\r\n"
                    "        P6. Implementations are to have glass walls, providing as much\r\n"
                    "            visibility into what is going on \"under the hood\" as\r\n"
                    "            is practical.\r\n"
                    "\r\n"
                    "        P7. Implementations are to support word definitions that declare\r\n"
                    "            what effect the word has on the stack upon which it manifests.\r\n"
                    "            This includes, at a minimum, declaration of the net change in\r\n"
                    "            the number of stack items, declaration of what types and valid\r\n"
                    "            values are pulled, and what types and possible values are pushed.\r\n"
                    "\r\n"
                    "        P8. Implementations are to support word definitions that declare\r\n"
                    "            what kinds of side effects a manifestation can have, and whether\r\n"
                    "            the manifestation is undoable even after commit.\r\n"
                    "\r\n"
                    "\r\n"
                    "    Look and Feel:\r\n"
                    "\r\n"
                    "        F1. The SOIL (tm) language specification does not specify the\r\n"
                    "            name or meaning of any word.  For example, all\r\n"
                    "            implementations of the SOIL (tm) language must have some\r\n"
                    "            name for what this document refers to as the word \"god\".\r\n"
                    "            All implementations must have some alias name by which\r\n"
                    "            contained objects can refer to the containing object.\r\n"
                    "            but the alias used, and the function of the \"root\"\r\n"
                    "            containing object, is implementation dependent.\r\n"
                    "\r\n"
                    "        F2. To encourage portability and interoperability,\r\n"
                    "            an implementation may support code that specifies\r\n"
                    "            a foreign trademark.  Each program must specify\r\n"
                    "            exactly 1 trademark and version.  This trademark\r\n"
                    "            and version, together with the code, determines the\r\n"
                    "            \"meaning\" of the code.\r\n"
                    "\r\n"
                    "        F3. To encourage portability and interoperability,\r\n"
                    "            SOIL (tm) implementors are allowed to use the trademarks\r\n"
                    "            of other SOIL (tm) implementations when stating that code\r\n"
                    "            written for the foreign trademark is supported.\r\n"
                    "            Such statements must not create confusion regarding\r\n"
                    "            the identity of the implementation or its supplier.\r\n"
                    "            Such use must be limited to statements of this form:\r\n"
                    "            \"This implementation (also) supports the XXX (tm)\r\n"
                    "            implementation of the SOIL (tm) language.  XXX is a trademark\r\n"
                    "            of YYY.\".\r\n"
                    "\r\n"
                    "        F3. The \"content\" of a SOIL (tm) implementation consists\r\n"
                    "            of the root words and root objects that it provides.\r\n"
                    "            The root word set should be small and orthogonal, and\r\n"
                    "            limited to providing program flow control capability.\r\n"
                    "            All computing work, including the basic operations\r\n"
                    "            of the CPU, should be done by root objects, not by\r\n"
                    "            root words.\r\n"
                    "\r\n"
                    "        F4. Implementors should be encouraged by the market\r\n"
                    "            and otherwise to endeavor to maximize portability\r\n"
                    "            and competition between implementations, so that\r\n"
                    "            the market for SOIL (tm) implementations is competitive,\r\n"
                    "            dynamic, and innovative.  If an implementation\r\n"
                    "            dominates the market because its users are \"locked\r\n"
                    "            in\", let that supplier be despised and reviled\r\n"
                    "            and shunned and, whenever possible, excluded from\r\n"
                    "            consideration for new projects.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Every help file exemplifies the use of the \\\"soixlOld\\\" word, which you will find in the bottom line.\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("quiet") ) ) tBody += T(
                    "\r\n"
                    "Summary:  This is a hint to me that I should operate quietly.\r\n"
                    "\r\n"
                    "Example phrase:    . quiet  ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  The current effect is to suppress some popup messages.\r\n"
                    "The effect of this word is subject to change.  Each instance\r\n"
                    "maintains a counter which causes quiet behavior whenever it is\r\n"
                    "nonze""ro.  I cause this counter to be incremented.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Message 1\" POPUP\r\n"
                    "    . quiet space\r\n"
                    "    . \"Message 2: Currently, \\\"quiet\\\" has no effect.\" POPUP\r\n"
                    "    . noquiet space\r\n"
                    "    . \"Message 3\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ". on space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("noquiet") ) ) tBody += T(
                    "\r\n"
                    "Summary:  This is a hint to me that I should operate loudly.\r\n"
                    "\r\n"
                    "Example phrase:    . noquiet ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  The effect is to undo a single \"quiet\" word by decrementing.\r\n"
                    "the associated counter.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Message 1\" POPUP\r\n"
                    "    . quiet space\r\n"
                    "    . \"Message 2: Currently, \\\"noquiet\\\" has no effect.\" POPUP\r\n"
                    "    . noquiet space\r\n"
                    "    . \"Message 3\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("off") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Causes me to ignore input words until I implicitly pop an \"on\".\r\n"
                    "\r\n"
                    "Example phrase:    . off ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "A counter is kept.  I ignore input words whenever that counter is\r\n"
                    "nonze""ro.  This word causes me to increment that counter.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Message 1\" POPUP\r\n"
                    "    . off space\r\n"
                    "    . \"Message 2: You won't see this.\" POPUP\r\n"
                    "    . on space\r\n"
                    "    . \"Message 3\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("on") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Causes me to resume parsing.  (See \"off\".)\r\n"
                    "\r\n"
                    "Example phrase:    . on ")+T(postName)+T("\r\n"
                    ". off ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "I decrement the off counter.  If that counter becomes 0, I\r\n"
                    "resume parsing.  Normal syntax must be used.  An \"on\" that\r\n"
                    "does not occur within a \". on space\" phrase will be ignored.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on ")+T(postName)+T("\r\n"
                    "\r\n"
                    "    . \"Message 1\" POPUP\r\n"
                    "    . off ")+T(postName)+T("\r\n"
                    "    . \"Message 2: You won't see this.\" POPUP\r\n"
                    "    . on ")+T(postName)+T("\r\n"
                    "    . \"Message 3\" POPUP\r\n"
                    "\r\n"
                    "    . off ")+T(postName)+T("\r\n"
                    ". on\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("quit") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Causes me to abandon parsing the current input.\r\n"
                    "\r\n"
                    "Example phrase:    . quit ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              Nothing.\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  In the current implementation, \"quit\" causes the\r\n"
                    "space object to destroy itself.\r\n"
                    "\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Message 1\" POPUP\r\n"
                    "    . quit space\r\n"
                    "    . \"Message 2: You won't see this; I don't even get input by the space.\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("tm") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Specifies the trademark of the SOIL (tm) implementation that\r\n"
                    "defines the meaning of this SOIL (tm) program.\r\n"
                    "\r\n"
                    "Example phrase:    . IdeaFarm . tm ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  The SOIL (tm) language specification grants implementers\r\n"
                    "limited rights to use the trademarks of competing implementations.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Every help file exemplifies the use of the \\\"tm\\\" word, which you will find in the bottom line.\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("version") ) ) tBody += T(
                    "\r\n"
                    "Summary:  Specifies the version of the SOIL (tm) implementation that\r\n"
                    "defines the meaning of this SOIL (tm) program.\r\n"
                    "\r\n"
                    "Example phrase:    . 1 . version ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              countC\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . \"Every help file exemplifies the use of the \\\"version\\\" word, which you will find in the bottom line.\" POPUP\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("+") ) ) tBody += T(
                    "\r\n"
                    "Summary:  I modify the parsing of the next stroke string literal.\r\n"
                    "\r\n"
                    "Example phrase:    . 001 . + ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              countC\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "The value specified will be stored until the next strokeS string\r\n"
                    "is being pushed.  It will cause that string to specify 001 extra\r\n"
                    "strokes.  Those extra strokes are not allocated until the string\r\n"
                    "is popped.\r\n"
                    "\r\n"
                    "This example will be replaced soon with a more useful wo.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . 4 . + . \"This message is stored in an unnamed string of strokeS objects, and there are 4 extra strokeS objects at the end.)\" POPUP\r\n"
                    "\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("#") ) ) tBody += T(
                    "\r\n"
                    "Summary:  I pop a word that I treat as a comment.\r\n"
                    "\r\n"
                    "Example phrase:    . \"This is a Comment.\" . # ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  My behavior is subject to change.  I currently do nothing.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "   . \"This is a Comment.\" . # ")+T(postName)+T("\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("=") ) ) tBody += T(
                    "\r\n"
                    "Summary:  The specified value is stored in the specified object,\r\n"
                    "replacing its prior value.\r\n"
                    "\r\n"
                    "Example phrase:    . 1234 . myObject . = ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              countC strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  objName must be a countC object.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . myList0 . list . n space\r\n"
                    "    . \"The variable xx contains 0 (it is false).\" POPUP\r\n"
                    "\r\n"
                    "    .@ stack1\r\n"
                    "    . myList0 . myWord0 . x space\r\n"
                    "\r\n"
                    "    . myList1 . list . n space\r\n"
                    "    . \"The variable xx contains a value other than 0 (it is true).\" POPUP\r\n"
                    "   \r\n"
                    "    .@ stack1\r\n"
                    "    . myList1 . myWord1 . x space\r\n"
                    "\r\n"
                    "    . xx . countC . n space\r\n"
                    "\r\n"
                    "    . 0  . xx . = space\r\n"
                    "    xx . myWord1 . myWord0 if\r\n"
                    "\r\n"
                    "    . 1 . xx . = space\r\n"
                    "    xx . myWord1 . myWord0 if\r\n"
                    "\r\n"
                    "    . 0 . xx . = space\r\n"
                    "    xx . myWord1 . myWord0 if\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("x") ) ) tBody += T(
                    "\r\n"
                    "Summary:  I define a new word to refer to a specific list.\r\n"
                    "\r\n"
                    "Example phrase:    . myList . myNewWord . x ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:  The list myList must not be destroyed.  The meaning of\r\n"
                    "each manifest of the word myNewWord is the manifestation of the\r\n"
                    "current contents of list myList.\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . myList . list . n space\r\n"
                    "    . \"Thank you, God!\" POPUP\r\n"
                    "    .@ stack1\r\n"
                    "    . myList . myWord . x space\r\n"
                    "    myWord\r\n"
                    "    myWord\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("b@") ) ) tBody += T(
                    "\r\n"
                    "Summary:  The next word will be pushed as a string of osTextT.\r\n"
                    "\r\n"
                    "Example phrase:    . b@ \"abcd efgh\"\r\n"
                    "\r\n"
                    "Pops:              Nothing\r\n"
                    "\r\n"
                    "Pushes:            Nothing\r\n"
                    "\r\n"
                    "Notes: A simple example will be added to this document.\r\n" //U::
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("c") ) ) tBody += T(
                    "\r\n"
                    "Summary:  The next word will be pushed as a countT.\r\n"
                    "\r\n"
                    "Example phrase:    . c abcd\r\n"
                    "\r\n"
                    "Pops:              Nothing\r\n"
                    "\r\n"
                    "Pushes:            Nothing\r\n"
                    "\r\n"
                    "Notes: A simple example will be added to this document.\r\n" //U::
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("n") ) ) tBody += T(
                    "\r\n"
                    "Summary:  I construct an object.\r\n"
                    "\r\n"
                    "Example phrase:    . myVariable . countC . n ")+T(postName)+T("\r\n"
                    "Example phrase:    . myList     . list   . n ")+T(postName)+T("\r\n"
                    "Example phrase:    . myStack    . stack  . n ")+T(postName)+T("\r\n"
                    "Example phrase:    . myEther    . etherC . n ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "Each countC object can store a single countT value.  SOIL (tm) words\r\n"
                    "can be pushed onto a list; such words are \"dead\"; no action occurs\r\n"
                    "as they are pushed.  etherC objects are the workhorses of\r\n"
                    "IdeaFarm " "(tm) SOIL (tm).\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . myList . list . n space\r\n"
                    "    . \"Thank you, God!\" POPUP\r\n"
                    "    .@ stack1\r\n"
                    "    . myList . myWord . x space\r\n"
                    "    myWord\r\n"
                    "    myWord\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("d") ) ) tBody += T(
                    "\r\n"
                    "Summary:  I destroy an object.\r\n"
                    "\r\n"
                    "Example phrase:    . myVariable . d ")+T(postName)+T("\r\n"
                    "Example phrase:    . myList     . d ")+T(postName)+T("\r\n"
                    "Example phrase:    . myStack    . d ")+T(postName)+T("\r\n"
                    "Example phrase:    . myEther    . d ")+T(postName)+T("\r\n"
                    "\r\n"
                    "Pops:              strokeString\r\n"
                    "\r\n"
                    "Pushes:            Nothing.\r\n"
                    "\r\n"
                    "Notes:\r\n"
                    "\r\n"
                    "Simple example:\r\n"
                    "\r\n"
                    "    . on space\r\n"
                    "\r\n"
                    "    . myList . list . n space\r\n"
                    "    . \"Thank you, God!\" POPUP\r\n"
                    "    .@ stack1\r\n"
                    "    . myList . myWord . x space\r\n"
                    "    myWord\r\n"
                    "    myWord\r\n"
                    "    . myList . d space\r\n"
                    "\r\n"
                    "    . off space\r\n"
                    ) ;

                ZE( strokeS* , pstth ) ;
                ether.strReverseF( tinP , pstth , tBody , T("\r\n") ) ; ___( pstth ) ;
                tBody = T(pstth) ;
                ether.delF( tinP , pstth ) ;

                ZE( strokeS* , psttOldCmd ) ;
                     if( !ether.strCompareF( tinP , psttQueryWord , T("."   ) ) ) ether.strMakeF( tinP , LF , psttOldCmd , T("literal") ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("?"   ) ) ) ether.strMakeF( tinP , LF , psttOldCmd , T("generalHelp") ) ;
                else if( !ether.strCompareF( tinP , psttQueryWord , T("??"  ) ) ) ether.strMakeF( tinP , LF , psttOldCmd , T("specificHelp") ) ;
                else                                                              { psttOldCmd = psttQueryWord ; psttQueryWord = 0 ; }
                ether.delF( tinP , psttQueryWord ) ;

                TN_tSoixlOld
                TN_tMouth
                TN( tSoixlOldShort , postSOIXLoLDfILESfOLDERS_SHORTsOIXLoLD ) ;
                TN( tMouthShort , postSOIXLoLDfILESfOLDERS_SHORTmOUTH ) ;

                TN( tNameShort , "") ; tNameShort = T("soixlOld.help.")+T(postName)+T(".")+T(psttOldCmd)+T(".txt") ;
                ether.delF( tinP , psttOldCmd ) ;
                TN( tName , "" ) ; tName = tSoixlOld+tNameShort ;
                ether.boxPutF( tinP , tName , tBody , tBody.csF(  tinP ) ) ;
                POPUPsOIXLoLD( T("I, \"")+T(postName)+T("\", have created \"")+tNameShort+T("\".  Read that document and then edit it to indicate what additional information you want.  Then drop it into the Mouth to obtain the additional information.") ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("n") ) )  //"n" IS FOR "NEW"
            {
                ZE( strokeS* , psttNewType ) ;
                ZE( strokeS* , psttNewName ) ;
                *paStack >> psttNewType ;
                *paStack >> psttNewName ;
                ether.strokeF( tinP , T(postName)+T(" is supposed to new a ")+T(psttNewType)+T(" named ")+T(psttNewName)+T(".\r\n") ) ;

                TN( tNewName , "" ) ; tNewName = T(psttNewName) ;
                ether.delF( tinP , psttNewName ) ;
                if( !ether.strCompareF( tinP , psttNewType , T("stack") ) )
                {
                    paStack = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) , flSOUL_LIFO|flSOUL_LIVE , (osTextT*)0 , 0 , (osTextT*)tNewName ) ; ___( paStack ) ;
                    PoBJECT( tNewName ) = paStack ;
                }
                else if( !ether.strCompareF( tinP , psttNewType , T("list") ) )
                {
                    paStack = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) , flSOUL_null , (osTextT*)0 , 0 , (osTextT*)tNewName ) ; ___( paStack ) ;
                    PoBJECT( tNewName ) = paStack ;
                }
                else if( !ether.strCompareF( tinP , psttNewType , T("countC") ) )
                {
                    baseSoilXxxxC* pObject = new( 0 , tinP , LF ) countC( tNewName ) ; ___( pObject ) ;
                    PoBJECT( tNewName ) = pObject ;
                }
                else if( !ether.strCompareF( tinP , psttNewType , T("etherC") ) )
                {
                    baseSoilXxxxC* pObject = new( 0 , tinP , LF ) etherC( tinP , TAG( TAGiDnULL ) , flTHIRDmODE_null , flWATCH_TIME , tNewName ) ; ___( pObject ) ;
                    PoBJECT( tNewName ) = pObject ;
                }
                else if( !ether.strCompareF( tinP , psttNewType , T("switchC") ) )
                {
                    baseSoilXxxxC* pObject = new( 0 , tinP , LF ) switchC( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_null , psttLever , 0 , 0 , ifcIDgRABlAYER_7BASEmISC1 , tNewName ) ; ___( pObject ) ;
                    PoBJECT( tNewName ) = pObject ;
                }
                else if( !ether.strCompareF( tinP , psttNewType , T("lexicon") ) )
                {
                    lexC* pLex = new( 0 , tinP , LF ) lexC( tinP , ether , TAG( TAGiDnULL ) , tNewName ) ; ___( pLex ) ;
                    PoBJECT( tNewName ) = pLex ;
                    stLex << (countT)pLex ; pLex = 0 ;
                }
                ether.delF( tinP , psttNewType ) ;
            }
            else if( !ether.strCompareF( tinP , psttw , T("d") ) )  //"d" IS FOR "DELETE"
            {
                ZE( strokeS* , psttName ) ;
                *paStack >> psttName ;
                ether.strokeF( tinP , T(postName)+T(" is supposed to del ")+T(psttName)+T(".\r\n") ) ;

                TN( tName , "" ) ; tName = T(psttName) ;
                ether.delF( tinP , psttName ) ;
                sw_pObject.grabF( tinP , TAG( TAGiDnULL ) ) ;
                postLever = tName ;
                baseSoilXxxxC* pObject = (baseSoilXxxxC*)(countT&)sw_pObject ; sw_pObject = (countT)0 ;
                sw_pObject.freeF( tinP ) ;
                sw_pObject.ungrabF( tinP ) ;

                     if( (baseSoilXxxxC*)paStack    == pObject ) paStack    = 0 ;
                else if( (baseSoilXxxxC*)paRootWord == pObject ) paRootWord = 0 ;
                else if( stLex )
                {
                    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        baseSoilXxxxC* pLex = (baseSoilXxxxC*)stLex.downF( tinP , hDown ) ;
                        if( pLex == pObject )
                        {
                            stLex.extractF( tinP ) ;
                            break ;
                        }
                    }
                    while( !ether && ~hDown ) ;
                }

                DEL( pObject ) ;
            }
            else bLookup = 1 ;

            if( bLookup )
            {
                ZE( boolT , bFound ) ;
                if( stLex )
                {
                    handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        lexC* pLex = (lexC*)stLex.downF( tinP , hDown ) ;
                        if( pLex )
                        {
                            if( psttUseLex && ether.strCompareF( tinP , psttUseLex , T(pLex->postNameF(tinP)) ) ) continue ;
    
                            *paStack << psttw << (countT)ifcIDcMDbASE_CMDdEFAULT << pLex ;
                            *paStack >> bFound ;
                        }
                    }
                    while( !ether && ~hDown && !bFound ) ;
                }
                if( !bFound ) *paStack OR(*this) << psttw O(*paRootWord) ;
                ether.delF( tinP , psttUseLex ) ;
            }

            ether.delF( tinP , psttw ) ;
            break ;
        }
        case ifcIDcMDbASE_CMDsPECIFIED :
        {
            ZE( countT , idCmd ) ;
            slP >> idCmd ;
            //switch( idCmd )
            //{
            //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f003.soilspacec.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f004.soilspacec.operater_shiftleft BEGIN
#define DDNAME       "3func.3606f004.soilspacec.operater_shiftleft"
#define DDNUMB      (countT)0x3606f004
#define IDFILE      (countT)0x1214


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
my purpose is to provide an ancillary text stream interface that understands human readable input
the primary interface to a soixlOldSpaceC object, just like any baseSoilXxxxC derived object, is operator ()
*/
/**/

/*1*/boolT soixlOldSpaceC::operator <<( const strokeS* const psttP )/*1*/
{
    TINSL

    ZE( strokeS* , pstt1w ) ;
    strokeS sttq ;
    ether.strWordsOldF( tinP , pstt1w , T(psttP) , sttq ) ; ___( pstt1w ) ;
    FORsTRINGSiN1( pstt1w )
    {
        //U:: AFTER HERE

        // if( !scOff && !scQuiet )
        // {
        //     ether.strokeF( tinP , T("----pushing \"")+T(psttc1)+T("\"---- current stack is: \"")+T(paStack->postNameF(tinP))+T("\" containing ")+TF2(*paStack,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(" items\r\n") ) ;
        // 
        //     {
        //         ZE( strokeS* , psttd ) ;
        //         soulC::dumpIF( tinP , psttd , *paStack ) ; ___( psttd ) ;
        //         ether.strokeF( tinP , T(psttd)+T("\r\n") ) ;
        //         ether.delF( tinP , psttd ) ;
        //     }
        // }

        TN( tWord , "" ) ;
        if( !ether.strIdF( tinP , S1C('^') , psttc1 ) ) tWord = T(psttc1) ;
        else
        {
            strokeS sttCaret( '^' ) ;
            strokeS sttSingleQuote( '\'' ) ;
            TN( tCaret , "^" ) ;
            countT idf = 1 ;
            ZE( countT , idCaretLag ) ;
            ZE( countT , idCaste ) ;
            ZE( countT , cSeen ) ; //NUMBER OF CARETS SEEN FOR CURRENT SNIP
            while( idf )
            {
                countT idfSave = idf ;
                countT idCaret = ether.strIdF( tinP , idf , sttq , sttCaret , psttc1 ) ;
                if( idCaret ) ether.strokeF( tinP , T("caret found at position ")+TF2(idCaret,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n") ) ;

                if( !idCaret )
                {
                    if( idCaretLag && idCaretLag < psttc1->idAdam )
                    {
                        countT idf2 = idCaretLag + 1 ;
                        ZE( countT , idl2 ) ;
                        ZE( strokeS* , psttw ) ;
                        ether.strSubstringF( tinP , psttw , idf2 , idl2 , psttc1 ) ; ___( psttw ) ;
                        tWord += T(psttw) ;
                        ether.delF( tinP , psttw ) ;
                    }
                }
                else
                {
                    cSeen ++ ;
                    if( !idCaretLag )
                    {
                        if( idCaret > 1 )
                        {
                            countT idf3 = idfSave ;
                            countT idl3 = idCaret - 1 ;
                            ZE( strokeS* , psttw ) ;
                            ether.strSubstringF( tinP , psttw , idf3 , idl3 , psttc1 ) ; ___( psttw ) ;
                            tWord += T(psttw) ;
                            ether.delF( tinP , psttw ) ;
                        }
                    }
                    else if( idCaret == idCaretLag + 1 )
                    {
                        if( cSeen == 2 )
                        {
                            tWord += tCaret ;
                            cSeen = 0 ;
                        }
                    }
                    else
                    {
                        countT idf4 = idCaretLag + 1 ;
                        countT idl4 = idCaret - 1 ;
                        ZE( strokeS* , psttw ) ;
                        ether.strSubstringF( tinP , psttw , idf4 , idl4 , psttc1 ) ; ___( psttw ) ;
                        if( cSeen == 2 ) idCaste = processGlobal3I.mapCaste( T(psttw) ) ; //SYMBOL MUST BE USED TO SPECIFY CASTE
                        else if( cSeen == 3 )
                        {
                            cSeen = 0 ;
                            ZE( countT , idAdam ) ;
                            if( psttw->idAdam == 3 && psttw[ CSpREFIX ] == sttSingleQuote && psttw[ CSpREFIX + 2 ] == sttSingleQuote ) idAdam = psttw[ CSpREFIX + 1 ].idAdam ;
                            else                                                                                                       idAdam = processGlobal3I.mapAdam( T(psttw) ) ; //SYMBOL CAN OPTIONALLY BE USED TO SPECIFY IDaDAM
    
                            if( !idAdam ) idAdam = ether.strDigitsToSCountF( tinP , psttw ) ;
    
                            strokeS sttv( idAdam , idCaste ) ;
                            tWord += T("")+sttv ;
                        }
                        ether.delF( tinP , psttw ) ;
                    }
                }

                 idCaretLag = idCaret ;
            }
        }

        postLever = tWord ;
    
        //ether.beeClickF( tinP , TUCK * 0x20 ) ; //U::
        if( !ether.strCompareF( tinP , tWord , T(postName) ) && !ether.strCompareF( tinP , ppsttRawWord[ 0 ] , T("on") ) && !ether.strCompareF( tinP , ppsttRawWord[ 1 ] , T(".") ) )
        {
            scOff -- ;
            __( bLiteralNull ) ;
        }
        else if( scOff ) { __( bLiteralNull ) ; }
        else if( bLiteralStrokesAt )
        {
            bLiteralStrokesAt = 0 ;
            //ether.strokeF( tinP , T("pushing \"")+tWord+T("\" as a strokeS@\r\n") ) ;
            if( !csttExtra ) *paStack << (strokeS*)tWord ; //U::BUG? ZOMBIE?: IS THIS PLATE GUARANTEED TO BE POPPED BEFORE tWord IS DT? (THIS IS DONE MULTIPLE PLACES IN THIS FILE)
            else
            {
                countT save = ((strokeS*)tWord)[ 2 ].idAdam ;
                ((strokeS*)tWord)[ 2 ].idAdam = csttExtra ; csttExtra = 0 ;
                *paStack << (strokeS*)tWord ; //THIS WORKS BECAUSE soulC::shiftLeftF DOES NOT ACCESS THE CLAIMED EXTRA STROKES
                ((strokeS*)tWord)[ 2 ].idAdam = save ;
            }
        }
        else if( bLiteralCount )
        {
            __( bLiteralNull ) ;
            bLiteralCount = 0 ;
            //ether.strokeF( tinP , T("pushing \"")+tWord+T("\" as a countT\r\n") ) ;
            *paStack << (countT)ether.strDigitsToSCountF( tinP , tWord ) ;
        }
        else if( bLiteralBytesAt )
        {
            bLiteralBytesAt = 0 ;
            *paStack << (osTextT*)tWord ;
        }
        else if( !ether.strCompareF( tinP , tWord , T(".") ) )
        {
            if( !bLiteralNull ) bLiteralStrokesAt = 1 ;
            else
            {
                bLiteralNull = 0 ;
                ZE( strokeS* , psttz ) ;
                *paStack << psttz ;
            }
        }
        else if( !ether.strCompareF( tinP , tWord , T(".0") ) ) bLiteralNull = 1 ;
        else if( !ether.strCompareF( tinP , tWord , T(".@") ) ) bAt = 1 ;
        else if( bAt )
        {
            bAt = 0 ;
            if( sw_pObject.idSlotOfLeverF( tinP , (countT)(osTextT*)tWord ) )
            {
                baseSoilXxxxC* pObject = (baseSoilXxxxC*)(countT)sw_pObject ;
                if( pObject )
                {
                    //U::TEST FOR CLASS NAME "soulC" HERE
                    /*if( !ether.strCompareF( tinP , psttOldClass , T("soulC") ) )*/ paStack = (soulC*)pObject ;
                    //else { POPUPsOIXLoLD( T(postName)+T(" is a ")+T(psttOldClass)+T(" object.  \".@\" requires either a stack or a list object") ) ; }
                }
            }
        }
        else if( sw_pObject.idSlotOfLeverF( tinP , (countT)postLever ) )
        {
            baseSoilXxxxC* pObject = (baseSoilXxxxC*)(countT)sw_pObject ;
            if( pObject ) *paStack << (countT)ifcIDcMDbASE_CMDdEFAULT << pObject ;
        }
        else if( ether.strCompareF( tinP , T(paStack->postOldClassNameIF(tinP)) , T("soulC") ) || !( F(((soulC*)paStack)->flags) & flSOUL_LIVE ) ) *paStack << (strokeS*)tWord O(*this) ;
        else *paStack << (strokeS*)tWord << (countT)ifcIDcMDbASE_CMDdEFAULT << this ;
    
        ether.delF( tinP , ppsttRawWord[ sizeof ppsttRawWord / sizeof ppsttRawWord[ 0 ] - 1 ] ) ;
        for( countT off = sizeof ppsttRawWord / sizeof ppsttRawWord[ 0 ] - 1 ; off ; off -- ) ppsttRawWord[ off ] = ppsttRawWord[ off - 1 ] ;
        ppsttRawWord[ 0 ] = psttOldC( tinP , ether , tWord ) ; ___( ppsttRawWord[ 0 ] ) ;

        //ether.beeClickF( tinP , TUCK * 0x18 ) ; //U::
        //U:: BEFORE HERE

        if( bQuit ) break ;
    }
    ether.delF( tinP , pstt1w ) ;

    return bQuit ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f004.soilspacec.operater_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f005.soilspacec.operator_shiftleft BEGIN
#define DDNAME       "3func.3606f005.soilspacec.operator_shiftleft"
#define DDNUMB      (countT)0x3606f005
#define IDFILE      (countT)0x1215


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& soixlOldSpaceC::operator <<( soulC& slP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f005.soilspacec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f006.soilspacec.operator_shiftright BEGIN
#define DDNAME       "3func.3606f006.soilspacec.operator_shiftright"
#define DDNUMB      (countT)0x3606f006
#define IDFILE      (countT)0x1216


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& soixlOldSpaceC::operator >>( soulC& slP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f006.soilspacec.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f007.soilspacec.operator_shiftright BEGIN
#define DDNAME       "3func.3606f007.soilspacec.operator_shiftright"
#define DDNUMB      (countT)0x3606f007
#define IDFILE      (countT)0x1217


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const baseSoilXxxxC& soixlOldSpaceC::operator >>( soulC& slP ) const/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3606f* : 3func.3606f007.soilspacec.operator_shiftright END
