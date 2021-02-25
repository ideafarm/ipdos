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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128002.branchs.dt_branchs BEGIN
#define DDNAME       "3func.36128002.branchs.dt_branchs"
#define DDNUMB      (countT)0x36128002
#define IDFILE      (countT)0x1516


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/branchS::~branchS( voidT )/*1*/
{
    TINSL

    if( idType == ifcIDtYPEbRANCHs_strokeSstr ) tinP.pEther->delF( tinP , *(byteT**)&value ) ;
    if( psttRefHtmlId                         ) tinP.pEther->delF( tinP , psttRefHtmlId    ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128002.branchs.dt_branchs END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128003.branchs.branchs BEGIN
#define DDNAME       "3func.36128003.branchs.branchs"
#define DDNUMB      (countT)0x36128003
#define IDFILE      (countT)0x1517


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/branchS::branchS( const countT valueP , const countT idTypeP ) :/*1*/
flags( flBRANCHs_null ) ,
idType( idTypeP ) ,
value( valueP ) ,
psttRefHtmlId( 0 ) ,
hashv( 0 ) ,
hashId( 0 ) ,
jbrRight( 0 ) ,
jbrUp( 0 ) ,
jbrUpCursor( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128003.branchs.branchs END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128004.branchs.loadif BEGIN
#define DDNAME       "3func.36128004.branchs.loadif"
#define DDNUMB      (countT)0x36128004
#define IDFILE      (countT)0x1518


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT branchS::loadIF( tinS& tinP , etherC& etherP , const boolT& bQuitP , jotC& jotP , countT& csttTrimmedP , soulC& soulLinesP , const flagsT flagsP , soulC* pSoulLinkP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __NZ( csttTrimmedP ) ;
        __Z( soulLinesP ) ;
        FV( flBRANCHslOADf , flagsP ) ;
        if( POOP ) return ;
    }

    // ----- CONSTRUCT A TREE OF branchS INSTANCES THAT CONTAINS INCOMPLETELY CONSTRUCTED REFERENCE BRANCHES

    _IO_

    /**/etherP.traceF( tinP , T("loadIF / +") ) ;
    jotC jotReferences( tinP , "branchs.loadif.references" , flJOTc_WRITE | flJOTc_DELETE | flJOTc_PRIVATE ) ;
    strokeS sttMark01( 0x10 , sc_MARK ) ;
    {
        stackC  stCursor( tinP , etherP , TAG( TAGiDnULL ), flSTACKc_DOnOTsERIALIZE | flSTACKc_XRAY , ifcSTACKtYPE_countT ) ;
        {
            strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
            strokeS sttColon( ':' ) ;
            TN( tBlank , " "   ) ;
            TN( tBackSlash , "\\"   ) ;
            TN( tb0  , "\\0"  ) ; // FLAG: INCLUDE IFF idEditionP == 0 (BRANCHES MARKED WITH THIS FLAG ARE COMMENTS SINCE idEditionP CANNOT BE 0)
            TN( tb1  , "\\1"  ) ; // FLAG: INCLUDE IFF idEditionP == 1
            TN( tb2  , "\\2"  ) ; // FLAG: INCLUDE IFF idEditionP == 2
            TN( tb3  , "\\3"  ) ; // FLAG: INCLUDE IFF idEditionP == 3 
            TN( tb4  , "\\4"  ) ; // FLAG: INCLUDE IFF idEditionP == 4
            TN( tb5  , "\\5"  ) ; // FLAG: INCLUDE IFF idEditionP == 5
            TN( tb6  , "\\6"  ) ; // FLAG: INCLUDE IFF idEditionP == 6
            TN( tb7  , "\\7"  ) ; // FLAG: INCLUDE IFF idEditionP == 7
            TN( tb8  , "\\8"  ) ; // FLAG: INCLUDE IFF idEditionP == 8
            TN( tb9  , "\\9"  ) ; // FLAG: INCLUDE IFF idEditionP == 9
            TN( tba  , "\\a"  ) ; // AUDIO FILE NAME
            TN( tbb  , "\\\\" ) ;
            TN( tbc  , "\\c"  ) ; // TEXT ASCII FILE NAME
            TN( tbd  , "\\d"  ) ; // SUPPRESS NEW PARAGRAPH
            TN( tbe  , "\\e"  ) ; // TEXT EMAIL FILE NAME
            TN( tbf  , "\\f"  ) ; // FILE NAME
            TN( tbg  , "\\g"  ) ; // RESERVED (IF EVER NEED A "GO" MARK TO CAUSE INSERTION OF "#foo" TO GO TO THE ID MARK INSERTED IN OBEDIENCE TO \h
            TN( tbh  , "\\h"  ) ; // "HERE"
            TN( tbi  , "\\i"  ) ; // ICON OR OTHER IMAGE FILE NAME (CONTENT EXPLICITLY SPECIFIED BY AUTHOR, IN CONTRAST TO THE ICONS THAT putFileIF USES AUTOMATICALLY E.G. TO INDICATE THE TYPE OF ANCHOR)
            TN( tbj  , ""     ) ; // RESERVED
            TN( tbk  , "\\k"  ) ; // SUPPRESS KID PAGE
            TN( tbl  , "\\l"  ) ; // URL LAW
            TN( tbm  , "\\m"  ) ; // MARK
            TN( tbn  , "\\n"  ) ; // NULL
            TN( tbo  , "\\o"  ) ; // URL OTHER
            TN( tbp  , "\\p"  ) ; // TEXT PDF FILE NAME
            TN( tbq  , ""     ) ; // RESERVED
            TN( tbr  , "\\r"  ) ; // FLAG: RAW: DO NOT CAPITALIZE AND DO NOT APPEND A PERIOD
            TN( tbs  , "\\s"  ) ; // SNAPSHOT PHOTO FILE NAME
            TN( tbt  , "\\t"  ) ; // URL SCHOLARLY TREATISE
            TN( tbu  , ""     ) ; // RESERVED
            TN( tbv  , "\\v"  ) ; // VIDEO MOVIE FILE NAME
            TN( tbw  , "\\w"  ) ; // SOIL FILE NAME
            TN( tbx  , "\\x"  ) ; // LONE PARAGRAPH: FOR THIS BRANCH'S PAGE, REDUCE MAX LEVEL BY 1 SO THAT ONLY A SINGLE PARAGRAPH OF THESIS SENTENCES APPEARS
            TN( tby  , "\\y"  ) ; // MISCELLANEOUS FILE NAME
            TN( tbz  , "\\z"  ) ; // ZIP FILE NAME
            TN( tm01 , ""     ) ; tm01 = T("")+sttMark01 ;
            TN( tm11 , ""     ) ; tm11 = T("")+S2(0x11,sc_MARK) ;
            TN( tm21 , ""     ) ; tm21 = T("")+S2(0x12,sc_MARK) ;
            TN( tm31 , ""     ) ; tm31 = T("")+S2(0x13,sc_MARK) ;
            TN( tm41 , ""     ) ; tm41 = T("")+S2(0x14,sc_MARK) ;
            TN( tm51 , ""     ) ; tm51 = T("")+S2(0x15,sc_MARK) ;
            TN( tm61 , ""     ) ; tm61 = T("")+S2(0x16,sc_MARK) ;
            TN( tm71 , ""     ) ; tm71 = T("")+S2(0x17,sc_MARK) ;
            TN( tm81 , ""     ) ; tm81 = T("")+S2(0x18,sc_MARK) ;
            TN( tm91 , ""     ) ; tm91 = T("")+S2(0x19,sc_MARK) ;
            TN( tma1 , ""     ) ; tma1 = T("")+S2(0x1a,sc_MARK) ;
            TN( tmb1 , ""     ) ; tmb1 = T("")+S2(0x1b,sc_MARK) ;
            TN( tmc1 , ""     ) ; tmc1 = T("")+S2(0x1c,sc_MARK) ;
            TN( tmd1 , ""     ) ; tmd1 = T("")+S2(0x1d,sc_MARK) ;
            TN( tme1 , ""     ) ; tme1 = T("")+S2(0x1e,sc_MARK) ;
            TN( tmf1 , ""     ) ; tmf1 = T("")+S2(0x1f,sc_MARK) ;
            TN( tm02 , ""     ) ; tm02 = T("")+S2(0x20,sc_MARK) ;
            TN( tm12 , ""     ) ; tm12 = T("")+S2(0x21,sc_MARK) ;
            TN( tm22 , ""     ) ; tm22 = T("")+S2(0x22,sc_MARK) ;
            TN( tm32 , ""     ) ; tm32 = T("")+S2(0x23,sc_MARK) ;
            TN( tm42 , ""     ) ; tm42 = T("")+S2(0x24,sc_MARK) ;
            TN( tm52 , ""     ) ; tm52 = T("")+S2(0x25,sc_MARK) ;
            TN( tm62 , ""     ) ; tm62 = T("")+S2(0x26,sc_MARK) ;
            TN( tm72 , ""     ) ; tm72 = T("")+S2(0x27,sc_MARK) ;
            TN( tm82 , ""     ) ; tm82 = T("")+S2(0x28,sc_MARK) ;
            TN( tm92 , ""     ) ; tm92 = T("")+S2(0x29,sc_MARK) ;
            TN( tma2 , ""     ) ; tma2 = T("")+S2(0x2a,sc_MARK) ;
            TN( tmb2 , ""     ) ; tmb2 = T("")+S2(0x2b,sc_MARK) ;
            TN( tmc2 , ""     ) ; tmc2 = T("")+S2(0x2c,sc_MARK) ;
            TN( tmd2 , ""     ) ; tmd2 = T("")+S2(0x2d,sc_MARK) ;
            TN( tme2 , ""     ) ; tme2 = T("")+S2(0x2e,sc_MARK) ;
            TN( tmff , ""     ) ; tmff = T("")+S2(0xff,sc_MARK) ;

            ZE( boolT , bFail ) ;
            boolT bNoRefs = !!( F(flagsP) & flBRANCHslOADf_NOrEFERENCES ) ;
            countT cFieldsIn = soulLinesP ;
            TN( tTraceWhat , "loadIF / constructing tree from text lines in soulC / " ) ;
            for( countT idFieldIn = 1 ; !bQuitP && idFieldIn <= cFieldsIn ; idFieldIn ++ )
            {
                //U:: TO FIND A BUG
                if( idFieldIn == 0x1806a ) // ITERATION 0x1806b FAILS IN strEncodeF
                {
                    countT foo = 2 ;
                }

                ZE( countT , idTypeIn ) ;
                ZE( flagsT , flagsIn  ) ;
                ZE( countT , cbIn     ) ;
                byteT* pbzEncoded = soulLinesP.pbFieldF( tinP , idTypeIn , flagsIn , cbIn , idFieldIn ) ;
                __( idTypeIn - ifcIDtYPEsOULiTEM_strokeSptr ) ;
                __( flagsIn - flSOULiTEM_null ) ;
                __( !cbIn ) ;

                {
                    countT cRemain = idFieldIn == 1 ? cFieldsIn : cFieldsIn - idFieldIn ;
                    /*if( idFieldIn == 1 || !( cRemain % TUCK ) )*/ etherP.traceF( tinP , tTraceWhat+T(" [cRemain]: ")+TF2(cRemain,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                }

                if( !POOP )
                {
                    ZE( strokeS* , psttLine ) ;
                    etherP.strDecodeF( tinP , psttLine , pbzEncoded ) ; ___( psttLine ) ;
                    etherP.traceF( tinP , psttLine ) ;

                    countT idLevelLath = stCursor ;

                    countT idf = 1 ;
                    countT idLevel = etherP.strIdAnyF( tinP , 0 , flSTRmATCH_null , idf , sttq , tBlank , psttLine , 0 , 1 , flSTRiDaNY_NOT ) ;

                    if( !idLevel ) //NULL LINE OR LINE OF BLANKS
                    {
                        bFail = 1 ;
                        break ;
                    }
                
                    ZE( strokeS* , pstttBranch ) ;
                    etherP.strTrimF( tinP , pstttBranch , psttLine , tBlank ) ; ___( pstttBranch ) ;
                    etherP.delF( tinP , psttLine ) ;

                    ZE( strokeS* , psttLabelShort ) ;
                    if( pstttBranch->idAdam && pstttBranch[ CSpREFIX ] == sttColon )
                    {
                        const countT idColon2 = etherP.strIdF( tinP , sttColon , pstttBranch , 2 ) ;
                        if( idColon2 > 2 && idColon2 < pstttBranch->idAdam )                                                                        // IF THIS LOOKS LIKE A LABELED BRANCH
                        {
                            countT idf = 2 ;
                            countT idl = idColon2 - 1 ;
                            etherP.strSubstringF( tinP , psttLabelShort , idf , idl , pstttBranch ) ; ___( psttLabelShort ) ;

                            ZE( strokeS* , pstttAfterLabelShort ) ;
                            {
                                idf = idColon2 + 1 ;
                                etherP.strSubstringF( tinP , pstttAfterLabelShort , idf , countTC() , pstttBranch ) ; ___( pstttAfterLabelShort ) ;
                                etherP.strTrimF( tinP , pstttAfterLabelShort , 0 , tBlank ) ; ___( pstttAfterLabelShort ) ;
                                if( pstttAfterLabelShort && pstttAfterLabelShort->idAdam )
                                {
                                    //etherP.strokeF( tinP , T("[psttLabelShort,pstttAfterLabelShort]: \"")+T(psttLabelShort)+T("\" \"")+T(pstttAfterLabelShort)+T("\"\r\n") ) ;
                                    etherP.delF( tinP , pstttBranch ) ;
                                    pstttBranch = pstttAfterLabelShort ;
                                                  pstttAfterLabelShort = 0 ;
                                }
                                else 
                                {
                                    etherP.delF( tinP , psttLabelShort ) ;
                                    etherP.delF( tinP , pstttAfterLabelShort ) ;
                                }
                            }
                        }
                        else if( !idColon2 && pstttBranch->idAdam > 1 )                                                                             // IF THIS LOOKS LIKE A REFERENCE TO A LABELED BRANCH
                        {
                            countT idf = 2 ;
                            etherP.strSubstringF( tinP , psttLabelShort , idf , countTC() , pstttBranch ) ; ___( psttLabelShort ) ;
                            etherP.strTrimF( tinP , psttLabelShort , 0 , tBlank ) ; ___( psttLabelShort ) ;
                            if( psttLabelShort && psttLabelShort->idAdam ) etherP.delF( tinP , pstttBranch ) ;
                            else                                 etherP.delF( tinP , psttLabelShort   ) ;
                        }
                    }

                    etherP.traceF( tinP , T("loadIfIF [idLevel,psttLabelShort,pstttBranch]: ")+TF2(idLevel,flFORMAT_NObIGITvALUES)+T(" \"")+T(psttLabelShort)+T("\" \"")+T(pstttBranch)+T("\"\r\n") ) ;

                    if( idLevel > idLevelLath + 1 ) // CAN SPECIFY KID OF LATH BRANCH, BUT NO HIGHER
                    {
                        bFail = 1 ;
                        break ;
                    }
                
                    ZE( countT , jNew ) ;
                    ZE( countT , jNewLag ) ;
                    if( pstttBranch )
                    {
                        //ENCODE ESCAPE CHARACTERS
                        ZE( countT , idMark ) ;
                        {
                            countT cFoundLit  = etherP.strReplaceF( tinP , pstttBranch , 0 , tbb  , tmff , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // HIDE ALL LITERAL BACKSLASH
                            countT cFoundMark = etherP.strReplaceF( tinP , pstttBranch , 0 , tbm  , tm01 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\m"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbf  , tm11 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\f"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tba  , tm21 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\a"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbs  , tm31 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\s"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbv  , tm41 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\v"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbc  , tm51 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\c"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbe  , tm61 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\e"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbp  , tm71 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\p"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbl  , tm81 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\l"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbt  , tm91 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\t"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbo  , tma1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\o"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbx  , tmb1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\x"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbr  , tmc1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\r"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbd  , tmd1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\d"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbk  , tme1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\k"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbi  , tmf1 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\i"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbn  , tm02 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\n"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb0  , tm12 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\0"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb1  , tm22 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\1"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb2  , tm32 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\2"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb3  , tm42 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\3"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb4  , tm52 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\4"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb5  , tm62 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\5"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb6  , tm72 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\6"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb7  , tm82 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\7"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb8  , tm92 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\8"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tb9  , tma2 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\9"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbz  , tmb2 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\z"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tby  , tmc2 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\y"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbw  , tmd2 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\w"
                                                etherP.strReplaceF( tinP , pstttBranch , 0 , tbh  , tme2 , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // ENCODE ALL "\h"
                            if( cFoundLit )     etherP.strReplaceF( tinP , pstttBranch , 0 , tmff , tBackSlash   , 0 , flSTRrEPLACE_IGNOREqUOTES ) ; ___( pstttBranch ) ; // SHOW ALL LITERAL BACKSLASH

                            if( cFoundMark ) idMark = etherP.strIdF( tinP , sttMark01 , pstttBranch , 1 ) ;
                        }

                        csttTrimmedP += pstttBranch->idAdam ;
                        { countT offw = CSpREFIX + idMark ; etherP.strConvertToUpperCaseF( tinP , pstttBranch[ offw ] , pstttBranch[ offw ] ) ; } //CAPITALIZE WOTH STROKE IN THE BODY

                        ZEJ( byteT* , pbEncoded , jotP ) ;
                        etherP.strEncodeF( tinP , pbEncoded , pstttBranch ) ; ___( pbEncoded ) ;

                        jNewLag = jNew ;
                        jNew = jotP.writeF( tinP , 0 , sizeof( branchS ) ) ;
                        __Z( jNew ) ;

                        if( !POOP )
                        {
                            PSP( pageNew , jNew ) ;
                            new( 0 , tinP , (byteT*)(const byteT*)pageNew , pageNew ) branchS( (countT)pbEncoded ) ;
                        }

                        etherP.traceF( tinP , T("loadIF new branch   [jNew,pstttBranch]: ")+TF2(jNew,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+T(pstttBranch) ) ;

                        etherP.delF( tinP , pstttBranch ) ;

                        if( POOP ) etherP.delF( tinP , pbEncoded ) ;
                        else
                        {
                            pbEncoded = 0 ;
                            if( psttLabelShort )
                            {
                                ZEJ( byteT* , pbEncoded , jotReferences ) ;
                                etherP.strEncodeF( tinP , pbEncoded , psttLabelShort ) ; ___( pbEncoded ) ;
                                jotReferences.writeF( tinP , (byteT*)&jNew , sizeof jNew ) ; // jotReferences WILL CONTAIN A SEQUENCE OF [psttLabelShort,jNew] PAIRS
                            }
                        }
                        etherP.delF( tinP , psttLabelShort ) ;
                    }
                    else if( psttLabelShort )
                    {
                        csttTrimmedP += psttLabelShort->idAdam ;

                        ZE( byteT* , pbEncoded ) ;
                        etherP.strEncodeF( tinP , pbEncoded , psttLabelShort ) ; ___( pbEncoded ) ;

                        jNewLag = jNew ;
                        jNew = jotP.writeF( tinP , 0 , sizeof( branchS ) ) ;
                        __Z( jNew ) ;

                        if( !POOP )
                        {
                            PSP( pageNew , jNew ) ;
                            new( 0 , tinP , (byteT*)(const byteT*)pageNew , pageNew ) branchS( (countT)pbEncoded , !bNoRefs ? ifcIDtYPEbRANCHs_branchSptr : ifcIDtYPEbRANCHs_strokeSstr ) ;
                        }

                        etherP.traceF( tinP , T("loadIF new reference [jNew,psttLabelShort]: ")+TF2(jNew,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+T(psttLabelShort) ) ;

                        etherP.delF( tinP , psttLabelShort ) ;

                        if( POOP ) etherP.delF( tinP , pbEncoded ) ;
                    }
                    else { __1 }

                    if( !POOP )
                    {
                        if( idLevel == idLevelLath + 1 )
                        {
                            if( idLevelLath )
                            {
                                BSP( brDown , stCursor[ 1 ] ) ;
                                __NZ( B(brDown).jbrUp ) ;
                                B(brDown).jbrUp = jNew ;
                            }
                
                            stCursor << jNew ; jNew = 0 ;
                        }
                        else
                        {
                            if( idLevel < idLevelLath ) stCursor.purgeF( tinP , idLevel ) ;
                
                            BSP( brLeft , stCursor[ 1 ] ) ;
                            __NZ( B(brLeft).jbrRight ) ;
                            B(brLeft).jbrRight = jNew ;
                
                            stCursor[ 1 ] = jNew ; jNew = 0 ;
                        }
                    }
                }
            }
            __( bFail ) ;
        }
    }

    ZE( strokeS* , psttzLabelShort ) ;
    ZE( switchC* , pSw_jbr ) ;
    {
        stackC stHashCollisions( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE ) ;
        for( countT offPass = 0 ; !bQuitP && offPass <= 1 ; offPass ++ )
        {
            TN( tTraceWhat , !offPass ? "loadIF / setting hashv / " : "loadIF / setting hashId and setting reference jPointers / " ) ;
            /**/etherP.traceF( tinP , tTraceWhat+T("+") ) ;
        
            byteT pb_barryHash[ sizeof( barryC  ) ] ;
            byteT pb_sw_jbr[    sizeof( switchC ) ] ;

            ZE( boolT , bDeleteBarryAsZombie ) ;
            if( !offPass )
            {
                if( tinP.pBarryUtility ) tinP.pBarryUtility->setF( tinP ) ; // ALLOW CALLER TO PRECONSTRUCT barryC INSTANCE SO THAT INABILITY TO CT CAN BE DETECTED EARLIER (barryC HAS A HUGE MEMORY FOOTPRINT)
                else
                {
                    /**/etherP.traceF( tinP , T("constructing barryC instance") ) ;
                    tinP.pBarryUtility = new( 0 , tinP , pb_barryHash , sizeof pb_barryHash ) barryC( tinP ) ; //TO ALLOW APP TO PRECONSTRUCT barryC
                    /**/etherP.traceF( tinP , T("constructed  barryC instance") ) ;
                    bDeleteBarryAsZombie = 1 ;
                }
            }

            if( offPass )
            {
                pSw_jbr = new( 0 , tinP , pb_sw_jbr , sizeof pb_sw_jbr ) switchC( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , psttzLabelShort ) ;
                if( pSw_jbr )
                {
                    do
                    {
                        pageC pi( tinP , jotReferences , 0 ) ;
                        pi = jotReferences ;
                        if( !(const byteT*)pi ) break ;
                        else
                        {
                            if( !psttzLabelShort ) { etherP.strDecodeF( tinP , psttzLabelShort , pi ) ; ___( psttzLabelShort ) ; }
                            else
                            {
                                countT& jbrSwitched = *pSw_jbr ;

                                if( jbrSwitched )
                                {
                                    /**/etherP.traceF( tinP , T("error: label is not unique [label]: \"")+T(psttzLabelShort)+T("\"") ) ;                         //U:: TEST ERRORS SUCH AS THIS TO ENSURE THAT SOFTWARE DOESN'T CRASH
                                    etherP.delF( tinP , psttzLabelShort ) ;
                                    __1
                                    break ;
                                }

                                *pSw_jbr = *(countT*)(const byteT*)pi ;
                                etherP.delF( tinP , psttzLabelShort ) ;
                            }
                        }
                    }
                    while( !bQuitP ) ;
                }
            }

            staqC stq_jbrDad( tinP ) ;
            ZE( countT , idBranch ) ;
            countT jbrc = 2 | jotP.tagHighNibbleF() ;
            const countT cCollisions = !offPass ? 0 : stHashCollisions ;
            byteT pbSwHashId[ sizeof( switchC ) ] ;
            ZE( countT , cLeverHash ) ;
            switchC* pSwHashId = !cCollisions ? 0 : new( 0 , tinP , pbSwHashId , sizeof pbSwHashId ) switchC( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE , cLeverHash ) ;
            while( !POOP && !bQuitP && jbrc )
            {
                if( !(const byteT*)jotP[ jbrc & ~NM_HIGH ] )
                {
                    etherP.traceF( tinP , T("setting jbrc to ze [idBranch before incrementing]: ")+TF3(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                    jbrc = 0 ;
                }
                else
                {
                    _IO_

                    ++ idBranch ;
                    /*if( !( idBranch % ( TUCK << 4 ) ) )*/ etherP.traceF( tinP , tTraceWhat+T("[idBranch]: ")+TF2(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
        
                    //if( !offPass && idBranch >= 0x13aa0 ) //U:: TO FIND A BUG, WE TRACE: loadIF / setting hashv / [idBranch]: aaa31
                    //{
                    //    //if( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_INoUTcHATTER ) ) { THREADmODE2oN( flTHREADmODE2_INoUTcHATTER ); }
                    //
                    //    //etherP.traceF( tinP , T("loadIF [idBranch]: ")+TF2(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) , flTRACE_null , ifcIDtRACEdIVERT_8 ) ;
                    //
                    //    //LOGrAW5( "loadIF [idThread,idBranch]:    " , tinP.monitor.idThread , "    " , idBranch , "\r\n" ) ;
                    //}

                    {
                        BSP( brc , jbrc ) ;

                        switch( B(brc).idType )
                        {
                            case ifcIDtYPEbRANCHs_strokeSstr :
                            case ifcIDtYPEbRANCHs_branchSptr :
                            {
                                break ;
                            }
                            default :
                            {
                                etherP.traceF( tinP , T("unexpected type [idType]: ")+TF3(B(brc).idType,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                                __1
                                break ;
                            }
                        }
                    }
        
                    if( !offPass )
                    {
                        BSP( brc , jbrc ) ;

                        if( B(brc).idType != ifcIDtYPEbRANCHs_strokeSstr ) B(brc).hashv = 0xeeeeeeee ; //U::TO FIND A BUG
                        else                                               B(brc).hashF( tinP , jbrc , *tinP.pBarryUtility , stHashCollisions ) ;
                    }
                    else
                    {
                        ZE( countT , idTypec ) ;
                        ZE( countT , valuec ) ;
                        {
                            BSP( brc , jbrc ) ;
                            idTypec = B(brc).idType ;
                            valuec  = B(brc).value  ;
                        }

                        if( idTypec == ifcIDtYPEbRANCHs_strokeSstr )
                        {
                            BSP( brc , jbrc ) ;
                            if( !cCollisions || !stHashCollisions( B(brc).hashv ) ) B(brc).hashId = 1 ;
                            else
                            {
                                cLeverHash = B(brc).hashv ;
                                B(brc).hashId = ++ *pSwHashId ;
                            }
                        }
                        else if( idTypec == ifcIDtYPEbRANCHs_branchSptr ) //REPLACING REFERENCES COULD BE DONE ON EITHER PASS ; DONE HERE TO BALANCE MEMORY USAGE (barryC IS USED ON THE OTHER PASS)
                        {                                                 //I NOW SUPPORT !link REFERENCES, WHICH HAS TO BE DONE ON LATH PASS SINCE I NEED THE HASH VALUES
                            // LABEL FORMATS
                            //
                            //  label                                                                         POINTS TO A LABEL WITHIN THE INSTANT KT
                            //  !link,"test.ideafarm.com//http/index",label@htmlId                            POINTS TO A FOREIGN LABEL, TO BE RESOLVED USING THE SPECIFIED LINK FILE
                            //  !link,"archiveview.ideafarm.com//http/201x/3/index",archive                   ACTUAL EXAMPLE (FOM ARCHIVE TOC KT)
                            //

                            // SEMANTICS
                            // 
                            // FOR NORMAL LABELS, THE INSTANT BRANCH WILL REMAIN OF TYPE ifcIDtYPEbRANCHs_branchSptr
                            // FOR !link  LABELS, THE INSTANT BRANCH WILL BECOME OF TYPE ifcIDtYPEbRANCHs_strokeSstr, WITH A GENERATED STRING VALUE (AN HTML HYPERTEXT LINK)
                            // 

                            ZE( strokeS* , psttLabelLong ) ;
                            {
                                byteT* pbEncoded = (byteT*)valuec ;
                                etherP.strDecodeF( tinP , psttLabelLong , (byteT*)valuec ) ; ___( psttLabelLong ) ;
                                etherP.delF( tinP , pbEncoded ) ;

                                etherP.traceF( tinP , T("loadIF: [psttLabelLong]:    ")+T(psttLabelLong) ) ;
                            }

                            ZE( strokeS* , psttLabelWordBox ) ;
                            ZE( strokeS* , psttLabelWordLever ) ;
                            ZE( strokeS* , psttLabelWordElement ) ;
                            {
                                ZE( strokeS* , pstt1LabelLongWords ) ;
                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                etherP.strWordsF( tinP , pstt1LabelLongWords , psttLabelLong , sttq , T(",") , flSTRwORDS_null , 0 , 0 , 0 , 0 , 0 ) ; ___( pstt1LabelLongWords ) ;
                                ZE( boolT , bFarLabel ) ;
                                FORsTRINGSiN1( pstt1LabelLongWords )
                                {
                                    etherP.traceF( tinP , T("loadIF: labelLong word:    ")+T(psttc1) ) ;

                                    if( !etherP.strCompareF( tinP , psttc1 , T("!link") ) ) bFarLabel = 1 ;
                                    else if( !bFarLabel )
                                    {
                                             if( !psttLabelWordLever   ) { etherP.strMakeF( tinP , LF , psttLabelWordLever   , psttc1 ) ; ___( psttLabelWordLever   ) ; }
                                        else if( !psttLabelWordElement ) { etherP.strMakeF( tinP , LF , psttLabelWordElement , psttc1 ) ; ___( psttLabelWordElement ) ; }
                                    }
                                    else
                                    {
                                             if( !psttLabelWordBox     ) { etherP.strMakeF( tinP , LF , psttLabelWordBox     , psttc1 ) ; ___( psttLabelWordBox     ) ; }
                                        else if( !psttLabelWordLever   ) { etherP.strMakeF( tinP , LF , psttLabelWordLever   , psttc1 ) ; ___( psttLabelWordLever   ) ; }
                                        else if( !psttLabelWordElement ) { etherP.strMakeF( tinP , LF , psttLabelWordElement , psttc1 ) ; ___( psttLabelWordElement ) ; }
                                    }
                                }
                                etherP.delF( tinP , pstt1LabelLongWords ) ;
                            }

                            etherP.strTrimF( tinP , psttLabelWordBox , 0 , 0 , T("\"") ) ;
                            etherP.traceF( tinP , T("loadIF: label word     [box]:   ")+T(psttLabelWordBox    ) ) ;
                            etherP.traceF( tinP , T("loadIF: label word   [lever]:   ")+T(psttLabelWordLever  ) ) ;
                            etherP.traceF( tinP , T("loadIF: label word [element]:   ")+T(psttLabelWordElement) ) ;

                            if( !psttLabelWordBox )
                            {
                                __Z( pSw_jbr ) ;

                                BSP( brc , jbrc ) ;
                                if( !pSw_jbr->idSlotOfLeverF( tinP , (countT)psttLabelWordLever ) )
                                {
                                    B(brc).value = 0 ;        // jbrzHe        (THIS LINE OVERWRITES pbEncoded WHICH IS NOW A ZOMBIE POINTER
                                    etherP.traceF( tinP , T("error: could not find reference \"")+T(psttLabelLong)+T("\"") ) ;
                                    __1                                                                                                       //20180420@1949: COMMENTED OUT WITHOUT ANALYSIS TO HANDLE MISSING LABEL
                                }
                                else
                                {
                                    psttzLabelShort      = psttLabelWordLever ;
                                    B(brc).psttRefHtmlId = psttLabelWordElement  ;
                                                           psttLabelWordElement = 0 ;
                                    B(brc).value = *pSw_jbr ; // jbrzHe        (THIS LINE OVERWRITES pbEncoded WHICH IS NOW A ZOMBIE POINTER
                                    etherP.traceF( tinP , T("setting reference [jbrHe,psttzLabelShort,psttRefHtmlId]:")+TF2(*pSw_jbr,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    \"")+T(psttzLabelShort)+T("\"    \"")+T(B(brc).psttRefHtmlId)+T("\"") ) ;
                                }
                            }
                            else
                            {
                                etherP.traceF( tinP , T("link label [label,box]:    \"")+T(psttLabelWordLever)+T("\"")+T("    \"")+T(psttLabelWordBox)+T(".link.pages.soul.not.html")+T("\"") ) ;

                                TN( tNoteFromCloud , "" ) ;
                                if( psttLabelWordElement )
                                {
                                    soulC soulIdFragCloud( tinP , TAG( TAGiDnULL ) ) ;
                                    IFsCRATCH
                                    {
                                        SCOOPS

                                        TN( tBox , "" ) ; tBox = T(psttLabelWordBox)+T(".link.frag.notes.soul.not.html") ;

                                        ZE( byteT* , pbLink ) ;
                                        ZE( countT , cbLink ) ;
                                        tinP.pEtScratch->boxGetShadowF( tinP , pbLink , cbLink , tBox ) ; ___( pbLink ) ;

                                        if( POOP )
                                        {
                                            POOPR ;
                                            tNoteFromCloud = T("Please report this error:  Could not get frag note linkage from ")+tBox ;
                                        }
                                        else soulIdFragCloud.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbLink , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                                        etherP.delF( tinP , pbLink ) ;
                                    }

                                    ZE( boolT , bLabelShort ) ;
                                    ZE( boolT , bFound ) ;
                                    while( soulIdFragCloud ) //U:: OBTAIN THE CONTENTS OF THE MATCHING NOTE FILE
                                    {
                                        bLabelShort = !bLabelShort ;

                                        ZE( strokeS* , psttp ) ;
                                        soulIdFragCloud >> psttp ; ___( psttp ) ;

                                        if( bLabelShort )
                                        {
                                            if( !etherP.strCompareF( tinP , psttp , psttLabelWordElement ) ) bFound = 1 ;
                                        }
                                        else if( bFound )
                                        {
                                            etherP.traceF( tinP , T("retrieving note from [psttp]: \"")+T(psttp)+T("\"") ) ;

                                            ZE( byteT* , postNote ) ;
                                            ZE( countT , costNote ) ;
                                            IFsCRATCH
                                            {
                                                SCOOPS
                                                tinP.pEtScratch->boxGetShadowF( tinP , postNote , costNote , psttp ) ; ___( postNote ) ;
                                                if( POOP )
                                                {
                                                    POOPR
                                                    tNoteFromCloud = T("Please report this error:  Could not get note text from ")+T(psttp) ;
                                                }
                                                else if( !postNote || !*postNote ) tNoteFromCloud = T("Please report this error:  Note text in ")+T(psttp)+T(" is null length") ;
                                                else tNoteFromCloud = T(postNote) ;
                                            }

                                            etherP.traceF( tinP , T("soulIdFragCloud [psttp]: ")+T(psttp) ) ;
                                            etherP.delF( tinP , postNote ) ;
                                            etherP.delF( tinP , psttp ) ;
                                            break ;
                                        }

                                        etherP.traceF( tinP , T("soulIdFragCloud [psttp]: ")+T(psttp) ) ;
                                        etherP.delF( tinP , psttp ) ;
                                    }
                                }

                                ZE( countT   , hashvGot ) ;
                                ZE( countT   , hashIdGot ) ;
                                ZE( strokeS* , psttFileTinyGot ) ;
                                ZE( strokeS* , psttTextGot ) ;
                                ZE( boolT    , bGotIt ) ;
                                {
                                    soulC soulLinkInner( tinP , TAG( TAGiDnULL ) ) ;
                                    {
                                        soulC soulLinkOuter( tinP , TAG( TAGiDnULL ) ) ;
                                        {
                                            ZE( byteT* , pbLink ) ;
                                            ZE( countT , cbLink ) ;
                                            TN( tBox , "" ) ; tBox = T(psttLabelWordBox)+T(".link.pages.soul.not.html") ;
                                            IFsCRATCH
                                            {
                                                SCOOPS
                                                tinP.pEtScratch->boxGetShadowF( tinP , pbLink , cbLink , tBox ) ; ___( pbLink ) ;
                                                if( POOP )
                                                {
                                                    POOPR ;
                                                    etherP.traceF( tinP , T("error:  could not get page linkage from ")+tBox ) ;
                                                }
                                            }

                                            if( pbLink ) ; etherP.boxPutF( tinP , T("///d/tmp/x/verify.soul.not.html") , pbLink , cbLink ) ; //U:: TO FIND A BUG

                                            if( pbLink ) soulLinkOuter.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_soulC , pbLink , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ;
                                            etherP.delF( tinP , pbLink ) ;
                                        }

                                        if( soulLinkOuter )
                                        {
                                            {
                                                ZE( osTextT* , postTM ) ;
                                                soulLinkOuter >> postTM ; ___( postTM ) ;
                                                /**/etherP.traceF( tinP , T("outer [tm]:   \"")+T(postTM)+T("\"") ) ;
                                                etherP.delF( tinP , postTM ) ;

                                                ZE( countT , finger ) ;
                                                soulLinkOuter >> finger ;
                                                /**/etherP.traceF( tinP , T("outer [finger]:   ")+TF2(finger,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                                ZE( countT , idFormat ) ;
                                                soulLinkOuter >> idFormat ;
                                                /**/etherP.traceF( tinP , T("outer [idFormat]:   ")+TF2(idFormat,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                            }

                                            {
                                                ZE( strokeS* , psttFolderFile ) ;
                                                soulLinkOuter >> psttFolderFile ; ___( psttFolderFile ) ;
                                                /**/etherP.traceF( tinP , T("outer [folderFile]:   \"")+T(psttFolderFile)+T("\"") ) ;

                                                countT idHit = etherP.strIdF( tinP , strokeS( '/' ) , psttFolderFile , - 1 ) ;
                                                if( idHit )
                                                {
                                                    idHit ++ ;
                                                    etherP.strSubstringF( tinP , psttFileTinyGot , idHit , countTC() , psttFolderFile ) ; ___( psttFileTinyGot ) ;
                                                }

                                                etherP.delF( tinP , psttFolderFile ) ;
                                            }
                                            /**/etherP.traceF( tinP , T("outer [fileTiny]:   \"")+T(psttFileTinyGot)+T("\"") ) ;

                                            soulLinkOuter >> soulLinkInner ;
                                        }

                                        if( soulLinkInner )
                                        {
                                            {
                                                ZE( osTextT* , postTM ) ;
                                                soulLinkInner >> postTM ; ___( postTM ) ;
                                                /**/etherP.traceF( tinP , T("inner [tm]:   \"")+T(postTM)+T("\"") ) ;
                                                etherP.delF( tinP , postTM ) ;

                                                ZE( countT , finger ) ;
                                                soulLinkInner >> finger ;
                                                /**/etherP.traceF( tinP , T("inner [finger]:   ")+TF2(finger,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                                ZE( countT , idFormat ) ;
                                                soulLinkInner >> idFormat ;
                                                /**/etherP.traceF( tinP , T("inner [idFormat]:   ")+TF2(idFormat,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                            }

                                            ZE( countT , cFlavors ) ;
                                            soulLinkInner >> cFlavors ;
                                            /**/etherP.traceF( tinP , T("inner [cFlavors]:   ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                            ZE( boolT , bFound ) ;
                                            while( soulLinkInner && !bFound )
                                            {
                                                ZE( strokeS* , psttLabelShort ) ;
                                                soulLinkInner >> psttLabelShort ; ___( psttLabelShort ) ;
                                                /**/etherP.traceF( tinP , T("inner [label]:   \"")+T(psttLabelShort)+T("\"") ) ;

                                                if( !etherP.strCompareF( tinP , psttLabelShort , psttLabelWordLever ) ) bFound = 1 ;
                                                etherP.delF( tinP , psttLabelShort ) ;

                                                ZE( countT , hashv ) ;
                                                soulLinkInner >> hashv ;
                                                /**/etherP.traceF( tinP , T("inner [hashv]:   ")+TF2(hashv,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                                ZE( countT , hashId ) ;
                                                soulLinkInner >> hashId ;
                                                /**/etherP.traceF( tinP , T("inner [hashId]:   ")+TF2(hashId,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;

                                                ZE( strokeS* , psttText ) ;
                                                soulLinkInner >> psttText ; ___( psttText ) ;
                                                /**/etherP.traceF( tinP , T("inner [text]:   \"")+T(psttText)+T("\"") ) ;

                                                if( bFound )
                                                {
                                                    hashvGot    = hashv  ;
                                                    hashIdGot   = hashId ;
                                                    psttTextGot = psttText ;
                                                                  psttText = 0 ;
                                                    bGotIt = 1 ;
                                                }

                                                etherP.delF( tinP , psttText ) ;
                                            }
                                        }
                                    }
                                }

                                if( !bGotIt )
                                {
                                    etherP.traceF( tinP , T("loadIF: error: could not find far label [box,label]:    ")+T(psttLabelWordBox)+T("    ")+T(psttLabelWordLever) ) ;
                                    __1
                                }

                                if( !POOP )
                                {
                                    etherP.traceF( tinP , T("got   [tiny]: \"")+T(psttFileTinyGot)+T("\"") ) ;
                                    etherP.traceF( tinP , T("got  [hashv]: ")+TF2(hashvGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                    etherP.traceF( tinP , T("got [hashId]: ")+TF2(hashIdGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;
                                    etherP.traceF( tinP , T("got   [text]: \"")+T(psttTextGot)+T("\"") ) ;
                                    etherP.traceF( tinP , T("got   [note]: \"")+tNoteFromCloud+T("\"") ) ;

                                    // TRIM THE TEXT
                                    if( psttTextGot )
                                    {
                                        countT idf = 1 ;
                                        ZE( countT , idl ) ;
                                        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                        if( etherP.strIdF( tinP , idf , sttq , sttMark01 , psttTextGot , idl , 1 ) )
                                        {
                                            strokeS* psttd = psttTextGot ;
                                                             psttTextGot = 0 ;

                                            etherP.strSubstringF( tinP , psttTextGot , idf , sttq , sttMark01 , psttd ) ; ___( psttTextGot ) ;
                                            etherP.delF( tinP , psttd ) ;
                                        }
                                        etherP.traceF( tinP , T("got trimmed [text]:   \"")+T(psttTextGot)+T("\"") ) ;
                                    }

                                    // BUILD THE URI
                                    TN( tUri , "" ) ;
                                    TN( tHost , "" ) ;
                                    {
                                        countT idf = 1 ;
                                        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                        strokeS sttSlash( '/' ) ;
                                        TN( tSlash , "/" ) ;
                                        ZE( countT , idWord ) ;
                                        while( idf )
                                        {
                                            ZE( strokeS* , psttw ) ;
                                            etherP.strSubstringF( tinP , psttw , idf , sttq , sttSlash , psttLabelWordBox ) ; ___( psttw ) ;

                                            switch( ++ idWord )
                                            {
                                                case 1  : { tHost = tUri = T(psttw)                                        ; break ; }
                                                case 2  :
                                                case 3  : {                                                                  break ; }
                                                default : {         tUri += !idf ? T("/pages/")+T(psttw) : tSlash+T(psttw) ; break ; }
                                            }

                                            etherP.delF( tinP , psttw ) ;
                                        }

                                        strokeS sttDot( '.' ) ;
                                        tUri += T(".z.black.")+TF3(hashvGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+sttDot+TF3(hashIdGot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(".html") ;
                                    }
                                    etherP.traceF( tinP , T("uri" ":   \"")+tUri+T("\"") ) ;

                                    // BUILD THE REPLACEMENT BRANCH TEXT (HTML HYPERTEXT LINK)
                                    //
                                    // EXAMPLE: <a href="http://test.ideafarm.com/pages/index.z.black.a1587c89.10000000.html#here"><span style="color:#c80" onmouseout="sayMessageF( 0 , 16000 )" onmouseover="sayMessageF( 'Click to jump from this IdeaFarm (tm) Knowledge Tree to another one!' , 0 )">20100815: 22222222222222222222222</span></a>
                                    //

                                    TN( tDisplay , "" ) ; tDisplay = tNoteFromCloud.csF( tinP )
                                        ? tNoteFromCloud
                                        : T(psttTextGot)
                                    ;

                                    TN( tn , "" ) ;
                                    TN( tTextNew , "" ) ; tTextNew = !bGotIt
                                        ? T("please report this error:  could not resolve reference")
                                        : T("<a href=\"http://")+tUri+(!psttLabelWordElement?tn:T("#")+T(psttLabelWordElement))+T("\"><span style=\"color:#c80\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Click to jump from this IdeaFarm (tm) Knowledge Tree to the one at ")+tHost+T("!' , 0 )\">")+tDisplay+T("</span></a>")
                                    ;

                                    etherP.traceF( tinP , T("new text:   \"")+tTextNew+T("\"") ) ;

                                    {
                                        ZEJ( byteT* , pbEncoded , jotP ) ;
                                        etherP.strEncodeF( tinP , pbEncoded , tTextNew ) ; ___( pbEncoded ) ;

                                        if( POOP ) etherP.delF( tinP , pbEncoded ) ;

                                        BSP( brc , jbrc ) ;
                                        B(brc).idType = ifcIDtYPEbRANCHs_strokeSstr ;
                                        B(brc).value  = (countT)pbEncoded ;
                                    }

                                    etherP.delF( tinP , psttFileTinyGot ) ;
                                    etherP.delF( tinP , psttTextGot ) ;
                                }
                            }
                            etherP.delF( tinP , psttLabelWordLever ) ;
                            etherP.delF( tinP , psttLabelLong ) ;
                            etherP.delF( tinP , psttLabelWordBox ) ;
                            etherP.delF( tinP , psttLabelWordLever ) ;
                            etherP.delF( tinP , psttLabelWordElement ) ;
                        }
                    }
        
                    if( POOP ) break ;
        
                    {
                        BSP( brc , jbrc ) ;
                        if( B(brc).idType == ifcIDtYPEbRANCHs_strokeSstr )
                        {
                            if( !B(brc).hashv || ( offPass && !B(brc).hashId ) ) etherP.traceF( tinP , T("branch [idBranch,hashv,hashId]: ")+TP("",stq_jbrDad)+TF3(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T("    ")+TF3(B(brc).hashv,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T("    ")+TF3(B(brc).hashId,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                        }
                    }

                    ZE( countT , jbrUpc ) ;
                    ZE( countT , jbrRightc ) ;
                    {
                        BSP( brc , jbrc ) ;
                        jbrUpc    = B(brc).jbrUp    ;
                        jbrRightc = B(brc).jbrRight ;
                    }

                    if( jbrUpc )
                    {
                        stq_jbrDad << jbrc ;
                        jbrc = jbrUpc ;
                    }
                    else if( jbrRightc ) jbrc = jbrRightc ;
                    else if( stq_jbrDad )
                    {
                        ZE( boolT , bFound ) ;
                        while( stq_jbrDad )
                        {
                            jbrc = 0 ;
                            stq_jbrDad >> jbrc ;
                            __Z( jbrc ) ;
                            if( POOP ) break ;
        
                            BSP( brc , jbrc ) ;
                            if( B(brc).jbrRight )
                            {
                                jbrc = B(brc).jbrRight ;
                                bFound = 1 ;
                                break ;
                            }
                        }
        
                        if( !bFound ) jbrc = 0 ;
                    }
                    else jbrc = 0 ;
                }
        
                if( POOP ) etherP.traceF( tinP , T("poop at loop - [idBranch]: ")+TF3(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
            }
            /**/etherP.traceF( tinP , tTraceWhat+T("- / after loop") ) ;

            if( bDeleteBarryAsZombie )
            {
                /**/etherP.traceF( tinP , T("deleting pBarryUtility") ) ;
                DELzOMBIE( tinP.pBarryUtility ) // USED TO DELETE HERE BUT REMOVED TO SUPPORT bRepeat
                /**/etherP.traceF( tinP , T("deleted pBarryUtility") ) ;
            }

            /**/etherP.traceF( tinP , T("deleting pSwHashId") ) ;
            DELzOMBIE( pSwHashId ) ;
            /**/etherP.traceF( tinP , tTraceWhat+T("-") ) ;
        }

        if( !POOP && pSoulLinkP && pSw_jbr ) // pSw_jbr NULL TEST ADDED 20160429@1518 WITHOUT ANALYSIS
        {                                         //EXPORT [psttLabelShort,hashv,hashId] TO A FILE SO THAT OTHER KT CAN REFERENCE THE LABELS IN THE INSTANT KT
            /**/etherP.traceF( tinP , T("stuffing pSoulLinkP") ) ;
            {
                *pSoulLinkP << (osTextT*)T(" >> IdeaFarm (tm) - (c) Wo'O Ideafarm - ideafarm.com << ") ;
                ZE( countT , finger ) ;
                putNegAM( *(countT*)&finger , FINGERnEG_KTlINKfILEiNNER ) ;
                *pSoulLinkP << finger ;
                *pSoulLinkP << (countT)1 ; // idFormat
            }

            TN( tb , " " ) ;
            countT cFlavors = pSw_jbr->cFlavorsF( tinP ) ; //U:: 20160429@1510: pSw_jbr NULL DURING QUIT
            *pSoulLinkP << cFlavors ;
            etherP.traceF( tinP , T("loadIF: stuffing *pSoulLinkP [pSw_jbr->cFlavors]: ")+TF2(cFlavors,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U;; TO FIND A BUG
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                psttzLabelShort = (strokeS*)pSw_jbr->leverF( tinP , idf ) ;
                etherP.traceF( tinP , T("loadIF: stuffing *pSoulLinkP [idf,psttzLabelShort]: ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(psttzLabelShort) ) ; //U;; TO FIND A BUG
                *pSoulLinkP << psttzLabelShort ;
                countT jbrc = *pSw_jbr ;
                __Z( jbrc ) ;
                if( !POOP )
                {
                    ZE( countT , idType ) ;
                    ZE( countT , hashv ) ;
                    ZE( countT , hashId ) ;
                    ZE( countT , jbrText ) ;
                    {
                        BSP( brc , jbrc ) ;
                        idType  = B(brc).idType ;
                        hashv   = B(brc).hashv  ;
                        hashId  = B(brc).hashId ;
                        jbrText = B(brc).value  ;
                    }
                    *pSoulLinkP << hashv ;
                    *pSoulLinkP << hashId ;

                    PSP( pageEncoded , jbrText ) ;
                    const byteT* pbzEncoded = idType == ifcIDtYPEbRANCHs_strokeSstr ? (const byteT*)pageEncoded : 0 ;
                    __Z( pbzEncoded ) ;
                    ZE( strokeS* , psttText ) ;
                    etherP.strDecodeF( tinP , psttText , pbzEncoded ) ; ___( psttText ) ;
                    etherP.traceF( tinP , T("loadIF: export: stuffing *pSoulLinkP [idf,idType,hashv,hashId,pstText]: ")+T("    ")+TF2(idf,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(idType,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(hashv,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(hashId,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+T(psttText) ) ; //U;; TO FIND A BUG
                    *pSoulLinkP << psttText ;
                    etherP.delF( tinP , psttText ) ;
                }
            }
            /**/etherP.traceF( tinP , T("stuffed pSoulLinkP") ) ;
        }
        DELzOMBIE( pSw_jbr ) ;
    }
    /**/etherP.traceF( tinP , T("loadIF / -") ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128004.branchs.loadif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128005.branchs.cdepthif BEGIN
#define DDNAME       "3func.36128005.branchs.cdepthif"
#define DDNUMB      (countT)0x36128005
#define IDFILE      (countT)0x1519


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 idEditionP
  if not 0 then inspects branch values to detect branches that are suppressed for the specified edition
*/
/**/

// I HANDLE LOOPING SILENTLY, CONTAINING ONLY THE LOGIC THAT I NEED TO RETURN PROMPTLY AS SOON AS I KNOW THAT DEPTH IS NOT DEFINED
// IF I AM A REFERENCE, I RETURN THE MAXIMUM OF ITS DEPTH AND THE DEPTH OF THE BRANCH THAT I REFERENCE

/*1*/countT branchS::cDepthIF( tinS& tinP , etherC& etherP , const countT jMeP , const countT cDepthMaxP , const countT idEditionP )/*1*/
{
    ZE( countT , cDepth ) ;

    ZE( flagsT , flagsMe ) ;
    ZE( countT , idTypeMe ) ;
    {
        BSP( brMe , jMeP ) ;
        flagsMe  = B(brMe).flags  ;
        idTypeMe = B(brMe).idType ;
    }

    boolT bNix = !!branchS::bEditionIF( tinP , etherP , jMeP , idEditionP ) ;

    ZE( countT , cDepthHe ) ;
    if( !bNix && idTypeMe == ifcIDtYPEbRANCHs_branchSptr )
    {
        const countT jStart = jMeP ;
        countT jHe = jStart ;

        ZE( countT , idTypeHe ) ;
        ZE( countT , valueHe  ) ;
        {
            BSP( brHe , jHe ) ;
            idTypeHe = B(brHe).idType ;
            valueHe  = B(brHe).value  ;
        }

        while( idTypeHe == ifcIDtYPEbRANCHs_branchSptr )
        {
            if( jStart == valueHe ) valueHe = idTypeHe = jHe = 0 ;
            else if( !valueHe )                                          //20180420@0954:  ADDED WITHOUT ANALYSIS TO HANDLE !jHe WHEN etherSoilF PROCESSES A KT WITH AN INTENTIONAL MISSING LABEL
            {
                 etherP.traceF( tinP , T("branchS::cDepthIF: error: following a branch pointer led nowhere") ) ;
                 valueHe = idTypeHe = jHe = 0 ;
            }
            else
            {
                jHe = valueHe ;
                BSP( brHe , jHe ) ;
                idTypeHe = B(brHe).idType ;
                valueHe  = B(brHe).value  ;
            }
        }

        if( jHe ) cDepthHe = cDepthIF( tinP , etherP , jHe , cDepthMaxP , idEditionP ) ;
    }

    if( bNix ) cDepth = - 1 ;
    else
    {
        ZE( countT , cDepthMe ) ;
        if( cDepthMaxP )
        {
            countT jc = jMeP ;

            ZE( countT , jcUp ) ;
            {
                BSP( brc , jc ) ;
                jcUp = B(brc).jbrUp ;
            }

            if( jcUp )
            {
                jc = jcUp ;

                cDepthMe ++ ; //TENTATIVE; WILL BE DECREMENTED IF ALL KIDS ARE NIXED

                ZE( countT , cDepthKidMax ) ;
                ZE( boolT ,  bFoundKid ) ;
                const countT jStart = jc ;
                do
                {
                    countT cDepthKid = cDepthIF( tinP , etherP , jc , cDepthMaxP - 1 , idEditionP ) ;
                    if( cDepthKid != - 1 )
                    {
                        if( !bFoundKid ) bFoundKid = 1 ;
                        if( cDepthKidMax < cDepthKid ) cDepthKidMax = cDepthKid ;
                    }

                    ZE( countT , jcRight ) ;
                    {
                        BSP( brc , jc ) ;
                        jcRight = B(brc).jbrRight ;
                    }

                    jc = jcRight ;
                }
                while( jc ) ;

                if( !bFoundKid ) cDepthMe -- ;
                else             cDepthMe += cDepthKidMax ;
            }
        }

        cDepth = cDepthMe > cDepthHe
            ? cDepthMe
            : cDepthHe
        ;
    }

    return cDepth ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128005.branchs.cdepthif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128008.branchs.putfileif BEGIN
#define DDNAME       "3func.36128008.branchs.putfileif"
#define DDNUMB      (countT)0x36128008
#define IDFILE      (countT)0x151a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
warning: i assume that the body portion of each branch value is unique
if this assumption is not satisfied by the input, i will fail when i attempt to open an output file that already exists
U::enhance to obey a flag saying "lint walk to detect nonunique hash values"
*/
/**/

#define DELETEpbs                                                                   \
                                                                                    \
    {                                                                               \
        if( bDeletePrefix ) etherP.delF( tinP , psttvPrefix ) ;                     \
                            etherP.delF( tinP , psttvBody ) ;                       \
        if( bDeleteSuffix ) etherP.delF( tinP , psttvSuffix ) ;                     \
    }

//U::ELIMINATE cNestP ; RESULT WILL BECOME INVARIANT WRT cNestP

voidT tFileF( tinS& tinP , etherC& etherP , textC& tFilePathP , textC& tFileShortBlackP , textC& tFileShortWhiteP , textC& tFileTinyP , const countT jP , putFileS& pP , const countT cNestP , const countT idEditionP )
{
    BSP( br , jP ) ;

    ZE( boolT , bRoot ) ;
    {
        countT jNakedMe = jP & ~NM_HIGH ;
        if( jNakedMe == 2 ) bRoot = 1 ;
    }

    if( B(br).idType != ifcIDtYPEbRANCHs_branchSptr )
    {
        ZE( strokeS* , psttPart1 ) ;
        ZE( strokeS* , psttPart2 ) ;
        etherP.strBisectF( tinP , psttPart1 , psttPart2 , pP.psttFile , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPart1 ) ; ___( psttPart2 ) ;
        tFilePathP  = T(psttPart1)+TF2(idEditionP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+(cNestP==1?pP.tn:pP.thSlash+pP.thLeaf)+pP.thSlash ;
        tFileTinyP  = T(psttPart2) ;
        tFileShortBlackP = tFileTinyP+(bRoot?pP.tn      :pP.thDotZDot+T("black.")+TF3(B(br).hashv,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+pP.thDot+TF3(B(br).hashId,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8))+T(".html") ;
        tFileShortWhiteP = tFileTinyP+(bRoot?T(".white"):pP.thDotZDot+T("white.")+TF3(B(br).hashv,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+pP.thDot+TF3(B(br).hashId,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8))+T(".html") ;
        etherP.delF( tinP , psttPart1 ) ;
        etherP.delF( tinP , psttPart2 ) ;
    }
}

//PC|    PSEUDOcODE
//PC|    
//PC|    putFileIF
//PC|    
//PC|        // ****  PREPARE  ****
//PC|    
//PC|        calculate tFile Path Short Tiny
//PC|        register tFileShort
//PC|        calculate tDown1 tDown2 (queries registry)
//PC|        
//PC|        for offPass 0 , 1 (accumulate csttOut , write psttOutBlack)
//PC|    
//PC|            // ****  WALK jMeP  ****
//PC|    
//PC|            while jc
//PC|    
//PC|                // **** SET psttvBody  ****
//PC|    
//PC|                if bShow
//PC|    
//PC|                    // ****  REGISTER URL  ****
//PC|    
//PC|                // ****  CLIMB  ****
//PC|    
//PC|                if bShow
//PC|    
//PC|                    // ****  APPEND TEXT  ****
//PC|    
//PC|                    if bKid && not redundant
//PC|    
//PC|                        // ****  ORDER PAGE FOR CURRENT BRANCH  ****
//PC|    
//PC|            write tFilePath+tFileShort
//PC|    

/*1*/voidT branchS::putFileIF( tinS& tinP , etherC& etherP , const boolT& bQuitP , countT& cPendingP , stackC& st_putFileJob_P , putFileS& pP , const countT offLevelP , const countT jMeP , const countT jDadP , const countT jGrandDadP , countT& cLeverBranchP , switchC& swFileP , countT cNestP , const countT idEditionP , const strokeS* const psttTimeStampP , const strokeS* const psttBanner1P , const strokeS* const psttBanner2P , const strokeS* const psttNameSpaceP )/*1*/
{
    etherP.traceF( tinP , TP("",cNestP)+T("put""FileIF/+ ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jDadP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jGrandDadP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
    IFbEcAREFUL
    {
        if( POOP ) return ;

        if( !cNestP )
        {
            countT jNakedMe = jMeP & ~NM_HIGH ;
            if( jNakedMe != 2 )                 // THE ROOT BRANCH MUST BE 2 BECAUSE I CONTAIN CODE THAT TESTS FOR THIS VALUE
            {
                __( jNakedMe ) ;
            }
        }

        if( POOP ) return ;

        BSP( br , jMeP ) ;

        __Z( B(br).hashv ) ;
        __Z( B(br).hashId ) ;
        __Z( idEditionP ) ;
        __( idEditionP > 9 ) ;
        if( POOP ) return ;
    }

    _IO_

    //etherP.traceF( tinP , TP("",cNestP)+T("U::/ff") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // ****           ****************************************************************************************************************************************
    // ****  PREPARE  ****************************************************************************************************************************************
    // ****           ****************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************
    // *******************************************************************************************************************************************************

    static countT idInLath ;
    static countT idInTest = 3 ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == idInTest )
    {
        countT foo = 2 ;
    }

    if( ++ cNestP > pP.cNestMax )
    {
        LOGrAW( "error: infinite loop detected\r\n" ) ;
        __1
    }

    TN( tFilePath  , "" ) ;
    TN( tFileTiny  , "" ) ;
    TN( tFileShortBlack , "" ) ;
    TN( tFileShortWhite , "" ) ;
    tFileF( tinP , etherP , tFilePath , tFileShortBlack , tFileShortWhite , tFileTiny , jMeP , pP , cNestP , idEditionP ) ;
    //etherP.traceF( tinP , TP("",cNestP)+T("U::/ee") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

    ZE( boolT , bDone ) ;
    {
        _IO_

        //U::T:
        if( jDadP == jGrandDadP ) //U:: KLUDGE TO MAKE PERVERSE RACE OUTCOME LESS LIKELY
        {
            //sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            //++ s ; etherP.osSleepF( tinP , TOCK ) ;
        }

        swFileP.grabF( tinP , TAG( TAGiDnULL ) ) ;
        bDone = swFileP.idSlotOfLeverF( tinP , jMeP ) ; //A:ASSUME: WOTH CALL TO WRITE THIS FILE IS THE "BEST" CALL TO USE SINCE jDadP != jGrandDadP
        if( !bDone )
        {
            cLeverBranchP = jMeP ;
            swFileP = (countT)1 ; //U:: 20171227@1430: THIS VALUE IS ARBITRARY AND IS NEVER USED. MIGRATE TO USE stackC OR SOME CONTAINER OTHER THAN switchC BECAUSE NO LONGER STORING FILE NAME
        }
        swFileP.ungrabF( tinP ) ;
    }
    //etherP.traceF( tinP , TP("",cNestP)+T("U::/dd") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

    if( !bDone )
    {
        _IO_
        boolT bRootMe  = ( jMeP  & ~NM_HIGH ) == 2 ;
        boolT bRootDad = ( jDadP & ~NM_HIGH ) == 2 ;

        //if( !bRootMe && !bRootDad )
        //{
        //    __Z( jMeP  - jDadP      ) ;
        //    __Z( jMeP  - jGrandDadP ) ;
        //    __Z( jDadP - jGrandDadP ) ;
        //}

        if( POOP ) { BLAMMO ; } //U:: THIS IS POSSIBLE DUE TO A RACE CONDITION: IF OO JOBS FOR THE SAME PAGE ARE QUEUED, IT IS POSSIBLE FOR THE "WRONG" (OOTH) JOB TO GET TO THIS POINT

        //LOGrAW3( "put""FileF/+ [cNestP]: " , cNestP , "\r\n" ) ;

        textC& trpToRoot = cNestP == 1 ? pP.thNull : pP.thDotDotSlash ;

        TN( tDown1Black , "" ) ;
        TN( tDown1White , "" ) ;
        TN( tDown2Black , "" ) ;
        TN( tDown2White , "" ) ;
        ZE( boolT , bSuppressDown1 ) ;
        ZE( boolT , bSuppressDown2 ) ;
        if( jMeP != jDadP )
        {
            _IO_
            TN( tDadFilePath  , "" ) ;
            TN( tDadFileTiny  , "" ) ;
            TN( tDadFileShortBlack , "" ) ;
            TN( tDadFileShortWhite , "" ) ;
            tFileF( tinP , etherP , tDadFilePath , tDadFileShortBlack , tDadFileShortWhite , tDadFileTiny , jDadP , pP , cNestP , idEditionP ) ;

            boolT bRootDad = !etherP.strCompareF( tinP , tDadFileShortBlack , tFileTiny+T(".html") ) ;

            tDown1Black = bRootDad
                ? trpToRoot+tDadFileShortBlack
                : tDadFileShortBlack
            ;

            tDown1White = bRootDad
                ? trpToRoot+tDadFileShortWhite
                : tDadFileShortWhite
            ;

            if( jDadP != jGrandDadP )
            {
                TN( tGrandDadFilePath  , "" ) ;
                TN( tGrandDadFileTiny  , "" ) ;
                TN( tGrandDadFileShortBlack , "" ) ;
                TN( tGrandDadFileShortWhite , "" ) ;
                tFileF( tinP , etherP , tGrandDadFilePath , tGrandDadFileShortBlack , tGrandDadFileShortWhite , tGrandDadFileTiny , jGrandDadP , pP , cNestP , idEditionP ) ;

                boolT bRootGrandDad = !etherP.strCompareF( tinP , tGrandDadFileShortBlack , tFileTiny+T(".html") ) ;

                tDown2Black = bRootGrandDad
                    ? trpToRoot+tGrandDadFileShortBlack
                    : tGrandDadFileShortBlack
                ;

                tDown2White = bRootGrandDad
                    ? trpToRoot+tGrandDadFileShortWhite
                    : tGrandDadFileShortWhite
                ;
            }

            {
                _IO_
                ZE( countT , idTypeDad ) ;
                ZE( countT , valueDad ) ;
                {
                    BSP( br , jDadP ) ;
                    valueDad  = B(br).value  ;
                    idTypeDad = B(br).idType ;
                }
                PSP( pageEncoded , valueDad ) ;

                const byteT* pbzEncoded = idTypeDad == ifcIDtYPEbRANCHs_strokeSstr ? (const byteT*)pageEncoded : 0 ;
                if( pbzEncoded )
                {
                    ZE( strokeS* , psttvDecoded ) ;
                    etherP.strDecodeF( tinP , psttvDecoded , pbzEncoded ) ; ___( psttvDecoded ) ;

                    if( !psttvDecoded || !psttvDecoded->idAdam || etherP.strIdF( tinP , pP.sMark02 , psttvDecoded ) )
                    {
                        etherP.traceF( tinP , T("dad has null length value") ) ;
                        bSuppressDown1 = 1 ;
                    }

                    etherP.delF( tinP , psttvDecoded ) ;
                }
            }

            {
                _IO_
                ZE( countT , idTypeGrandDad ) ;
                ZE( countT , valueGrandDad ) ;
                {
                    BSP( br , jGrandDadP ) ;
                    valueGrandDad  = B(br).value  ;
                    idTypeGrandDad = B(br).idType ;
                }
                PSP( pageEncoded , valueGrandDad ) ;

                const byteT* pbzEncoded = idTypeGrandDad == ifcIDtYPEbRANCHs_strokeSstr ? (const byteT*)pageEncoded : 0 ;
                if( pbzEncoded )
                {
                    ZE( strokeS* , psttvDecoded ) ;
                    etherP.strDecodeF( tinP , psttvDecoded , pbzEncoded ) ; ___( psttvDecoded ) ;

                    if( !psttvDecoded || !psttvDecoded->idAdam || etherP.strIdF( tinP , pP.sMark02 , psttvDecoded ) )
                    {
                        etherP.traceF( tinP , T("granddad has null length value") ) ;
                        bSuppressDown2 = 1 ;
                    }

                    etherP.delF( tinP , psttvDecoded ) ;
                }
            }
        }
        //etherP.traceF( tinP , TP("",cNestP)+T("U::/cc") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

        if( tDown1Black.csF( tinP ) > tDown1White.csF( tinP ) ) { BLAMMO ; }
        if( tDown2Black.csF( tinP ) > tDown2White.csF( tinP ) ) { BLAMMO ; }

        textC& tUrlIcon         = cNestP == 1 ? pP.thpuIcon          : pP.thpuIcon          ;
        textC& tUrlMicrophone   = cNestP == 1 ? pP.thpuMicrophone    : pP.thpuMicrophone    ;
        textC& tUrlCamera       = cNestP == 1 ? pP.thpuCamera        : pP.thpuCamera        ;
        textC& tUrlVideocam     = cNestP == 1 ? pP.thpuVideocam      : pP.thpuVideocam      ;
        textC& tUrlZipIcon      = cNestP == 1 ? pP.thpuZipIcon       : pP.thpuZipIcon       ;
        textC& tUrlMiscIcon     = cNestP == 1 ? pP.thpuMiscIcon      : pP.thpuMiscIcon      ;
        textC& tUrlSoilIcon     = cNestP == 1 ? pP.thpuSoilIcon      : pP.thpuSoilIcon      ;
        textC& tUrlTextAscii    = cNestP == 1 ? pP.thpuTextAscii     : pP.thpuTextAscii     ;
        textC& tUrlTextEmail    = cNestP == 1 ? pP.thpuTextEmail     : pP.thpuTextEmail     ;
        textC& tUrlTextPdf      = cNestP == 1 ? pP.thpuTextPdf       : pP.thpuTextPdf       ;
        textC& tUrlLinkLaw      = cNestP == 1 ? pP.thpuLinkLaw       : pP.thpuLinkLaw       ;
        textC& tUrlLinkTreatise = cNestP == 1 ? pP.thpuLinkTreatise  : pP.thpuLinkTreatise  ;
        textC& tUrlLinkOther    = cNestP == 1 ? pP.thpuLinkOther     : pP.thpuLinkOther     ;

        textC& tUrl1            = cNestP == 1 ? pP.thpu1             : pP.thpu1             ;
        textC& tUrl2            = cNestP == 1 ? pP.thpu2             : pP.thpu2             ;
        textC& tUrl3            = cNestP == 1 ? pP.thpu3             : pP.thpu3             ;
        textC& tUrl4            = cNestP == 1 ? pP.thpu4             : pP.thpu4             ;
        textC& tUrl5            = cNestP == 1 ? pP.thpu5             : pP.thpu5             ;
        textC& tUrl6            = cNestP == 1 ? pP.thpu6             : pP.thpu6             ;
        textC& tUrl7            = cNestP == 1 ? pP.thpu7             : pP.thpu7             ;
        textC& tUrl8            = cNestP == 1 ? pP.thpu8             : pP.thpu8             ;
        textC& tUrl9            = cNestP == 1 ? pP.thpu9             : pP.thpu9             ;
        textC& tUrla            = cNestP == 1 ? pP.thpua             : pP.thpua             ;
        textC& tUrlb            = cNestP == 1 ? pP.thpub             : pP.thpub             ;

        textC** pptUrl = cNestP == 1 ? &pP.ppthpu[ 0 ] : &pP.ppthpu[ 0 ] ;

        TN( tPrologWas_aBlack , "" ) ; tPrologWas_aBlack = T(

            "                                        <a href=\"../")+tFileTiny+T(".html\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Click to climb down to the root branch (home page).' , 0 )\">root</a>\r\n"

        ) ;

        TN( tPrologWas_aWhite , "" ) ; tPrologWas_aWhite = T(

            "                                        <a href=\"../")+tFileTiny+T(".white.html\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Click to climb down to the root branch (home page).' , 0 )\">root</a>\r\n"

        ) ;
        
        if( tPrologWas_aBlack.csF( tinP ) > tPrologWas_aWhite.csF( tinP ) ) { BLAMMO ; }

        TN( thBranchTerminator , "" ) ;

        ZE( countT , oBiasDefault ) ;
        ZE( boolT  , bMaxReduced  ) ;
        ZE( boolT  , bEmitSpan    ) ;
        /*const*/ countT idLevelMax = 3 ; // WATCOM COMPILER HAS BEEN OBSERVED TO EMIT INCORRECT OBJECT CODE FOR const LOCAL VARIABLES
        {
            _IO_
            ZE( countT , idTypeMe ) ;
            ZE( countT , valueMe ) ;
            {
                BSP( br , jMeP ) ;
                valueMe  = B(br).value  ;
                idTypeMe = B(br).idType ;
            }
            PSP( pageEncoded , valueMe ) ;

            const byteT* pbzEncoded = idTypeMe == ifcIDtYPEbRANCHs_strokeSstr ? (const byteT*)pageEncoded : 0 ;
            if( pbzEncoded )
            {
                ZE( strokeS* , psttvDecoded ) ;
                etherP.strDecodeF( tinP , psttvDecoded , pbzEncoded ) ; ___( psttvDecoded ) ;

                if( etherP.strIdF( tinP , pP.sMarkb1 , psttvDecoded , 1 ) )
                {
                    -- *(countT*)&idLevelMax ;
                    ++ oBiasDefault ;
                    bMaxReduced = 1 ;
                }

                etherP.delF( tinP , psttvDecoded ) ;
            }
        }

        stackC stCursor( tinP , etherP , TAG( TAGiDnULL ), flSTACKc_DOnOTsERIALIZE|flSTACKc_XRAY               , ifcSTACKtYPE_countT   ) ;
        stackC stJump(   tinP , etherP , TAG( TAGiDnULL ), flSTACKc_DOnOTsERIALIZE|flSTACKc_XRAY|flSTACKc_BLOB , 2 * sizeof( countT )  ) ;
        stackC stNix(    tinP , etherP , TAG( TAGiDnULL ), flSTACKc_DOnOTsERIALIZE|flSTACKc_XRAY               , ifcSTACKtYPE_countT   ) ;
        //etherP.traceF( tinP , TP("",cNestP)+T("U::/bb") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

        if( !POOP )
        {
            _IO_
            //etherP.traceF( tinP , TP("",cNestP)+T("U::/aa") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
            ZE( strokeS* , psttOutBlack ) ;
            ZE( strokeS* , psttOutWhite ) ;
            ZE( strokeS* , psttu ) ;
            etherP.strUniqueF( tinP , psttu ) ; ___( psttu ) ;
            TN( tSoulNameBlack , "" ) ; tSoulNameBlack = T(psttu)+T(".putfileif.s.out.black.")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;
            TN( tSoulNameWhite , "" ) ; tSoulNameWhite = T(psttu)+T(".putfileif.s.out.white.")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;
            etherC::etRockIF( tinP ).traceF( tinP , T("putFileIF [sOutJotName]: ")+tSoulNameBlack ) ;

            soulC sOutBlack( tinP , TAG( TAGiDnULL ) , flSOUL_null , (osTextT*)tSoulNameBlack ) ;
            soulC sOutWhite( tinP , TAG( TAGiDnULL ) , flSOUL_null , (osTextT*)tSoulNameWhite ) ;
            etherP.delF( tinP , psttu ) ;
            //etherP.traceF( tinP , TP("",cNestP)+T("U::/99") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

            ZE( countT , csttNeeded ) ;
            TN( tHash , "" ) ;
            for( countT offPass = 0 ; offPass <= 1 ; offPass ++ ) // 0: ACCUMULATE csttOut ; 1: WRITE psttOutBlack
            {
                _IO_
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/88") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                etherP.traceF( tinP , T("pass begun [cNest,idPass]:    ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offPass+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                stCursor.purgeF( tinP ) ; // NEEDED EVEN IF !offPass BECAUSE I MIGHT HAVE RESTARTED DUE TO CREATING A KID (U::THIS IS AN OBSOLETE COMMENT)
                stJump.purgeF( tinP ) ;
                __NZ( stNix ) ;

                if( offPass )
                {
                    etherP.strFuseF( tinP , psttOutBlack , pP.tHtml10PageBeginBlack , &sOutBlack ) ; ___( psttOutBlack ) ;
                    etherP.strFuseF( tinP , psttOutWhite , pP.tHtml10PageBeginWhite , &sOutWhite ) ; ___( psttOutWhite ) ;
                }

                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // ****             **************************************************************************************************************************************
                // ****  WALK jMeP  **************************************************************************************************************************************
                // ****             **************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************
                // *******************************************************************************************************************************************************

                countT jc = jMeP  ;
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/77") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                if( jMeP == 0xb0000056 || jMeP == 0xb0000044 )
                {
                    countT foo = 2 ; //U:: TO FIND A BUG
                }

                etherP.traceF( tinP , TP("",cNestP)+T("walk begun [jMeP]:    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/66") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                ZE( countT , oBias ) ;
                {
                    _IO_ // WHERE RANK #2: 71% OF TOTAL putFileIF TIME IS SPENT IN HERE
                    //etherP.traceF( tinP , T("calling cDepthIF") ) ;
                    countT cDepthGross = 1 + cDepthIF( tinP , etherP , jc , idLevelMax - 1 , idEditionP ) ; // "GROSS": "INCLUDING B(bc)"
                    //etherP.traceF( tinP , T("called  cDepthIF [cDepthGross]: ")+TF2(cDepthGross,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    __Z( cDepthGross ) ; //WILL OCCUR WHEN I AM NIXED FOR THIS EDITION
                    oBias = cDepthGross >= idLevelMax
                        ? oBiasDefault
                        : idLevelMax - cDepthGross
                    ;
            
                    //etherP.traceF( tinP , T("[oBias]: ")+TF2(oBias,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    //CONoUTrAW3( "[cDepthGross]: " , cDepthGross , "\r\n" ) ;
                }
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/55") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                TN( tRefHtmlIdLag , "" ) ;
                boolT bJumpedLag = !!jumpIfIF( tinP , jc , stJump , tRefHtmlIdLag ) ;

                ZE( countT , cLevelsNoted ) ;
                if( jGrandDadP != jDadP )
                {
                    cLevelsNoted ++ ;
                    stCursor << jGrandDadP ;
                }

                if( jDadP != jMeP )
                {
                    cLevelsNoted ++ ;
                    stCursor << jDadP ;
                }

                //etherP.traceF( tinP , TP("",cNestP)+T("U::/44") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                stCursor << jMeP ;

                // RECIPE
                // 
                // THIS RECIPE WALKS THE TREE WITH THE ROOT B(bc)
                // ON ENTRY, B(bc) MUST POINT TO A BRANCH OF TYPE OTHER THAN branchSptr
                // WHENEVER A VALUE IS ASSIGNED TO B(bc), THAT SAME VALUE IS IMMEDIATELY LOADED INTO stCursor[1], EITHER BY PUSHING OR BY PATCHING
                // NORMALLY, WHEN A NEW VALUE IS PATCHED INTO B(bc), B(bc) IS IMMEDIATELY DEREFERENCED SO THAT IT DOES NOT POINT TO A BRANCH OF TYPE branchSptr
                // NORMALLY, B(bc) NEVER POINTS TO A BRANCH OF TYPE branchSptr
                // THE ONLY EXCEPTION IS THE WALKING OF A BRANCH OF TYPE branchSptr
                // IF BRANCH r REFERENCES BRANCH t, BRANCH t IS WALKED
                // AFTER BRANCH t IS WALKED, BRANCH r IS WALKED
                // SINCE r IS A REFERENCE, ITS VALUE IS NOT EMITTED
                // THUS THE ENTIRE CONTENT OF t, INCLUDING THE VALUE OF t, IS EMITTED, AND THEN THE ENTIRE CONTENT OF r'S KIDS AND YOUNGER SIBLINGS IS EMITTED
                // 
                // CLIMBING RECIPE:  ASSUMES NO REFERENCES.  GOING RIGHT IS ILLEGAL IF AT ROOT OR IF GOT HERE BY JUMPING
                // 
                // IF CAN GO UP THEN GO UP
                // ELSE IF CAN GO RIGHT THEN GO RIGHT
                // ELSE 
                //  1. GO DOWN UNTIL CAN GO RIGHT
                //  2. GO RIGHT
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/33") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                TN( tCloseAnchor , "" ) ; tCloseAnchor = T("\"/></a>") ;
                boolT bWoth = 1 ;
                ZE( countT , jbrEditionNix ) ;
                ZE( countT , idBranch ) ; //ONLY FOR TRACING
                while( jc && !POOP )
                {
                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/22") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    {
                        BSP( bcDebug , jc ) ;
                        branchS& bDebug = B(bcDebug) ; //U:: TO FIND A BUG
                        if( bDebug.psttRefHtmlId || bDebug.idType == ifcIDtYPEbRANCHs_branchSptr )
                        {
                            countT foo = 2 ;
                        }
                    }

                    _IO_ //WHERE RANK #3: 11% OF TOTAL putFileIF TIME IS SPENT IN HERE
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // ****                ***********************************************************************************************************************************
                    // **** SET psttvBody  ***********************************************************************************************************************************
                    // ****                ***********************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************

                    //etherP.traceF( tinP , TP("",cNestP)+T("walk [jMeP,jc]:    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jc,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/11") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    const countT jcTrace = jc ;
                    ++ idBranch ;
                    if( !( idBranch % ( TUCK << 4 ) ) ) etherP.traceF( tinP , T("branch begun [cNest,idPass,idBranch,jc]:    ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offPass+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jcTrace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    if( stJump > 0x10 )
                    {
                        etherP.traceF( tinP , T("error: infinite loop detected") ) ;
                        __1
                    }

                    ZE( countT , idTypeCursor   ) ;
                    ZE( countT , valueCursor    ) ;
                    ZE( countT , jbrUpCursor    ) ;
                    ZE( countT , jbrRightCursor ) ;
                    {
                        BSP( bc , jc ) ;
                        idTypeCursor   = B(bc).idType   ;
                        valueCursor    = B(bc).value    ;
                        jbrUpCursor    = B(bc).jbrUp    ;
                        jbrRightCursor = B(bc).jbrRight ;
                    }

                    //THIS STUFF IS EARLY SO THAT offLevel CAN BE USED TO CONDITIONALLY SELECT FROM A LIST OF DELIMITED COMMA SEPARATED FILE NAMES E.G. \ifile1.jpg,file2.jpg\i
                    countT offLevel   = stCursor - cLevelsNoted - 1 ;
                    boolT  bMaxGrand  = offLevel == idLevelMax - 1 ;
                    boolT  bMaxAlmost = offLevel == idLevelMax - 2 ;
                    boolT  bShow      = idTypeCursor != ifcIDtYPEbRANCHs_branchSptr && offLevel <= idLevelMax - 1 ;
                    //CONoUTrAWb( "[jc,bShow,offLevel,idLevelMax,stCursor]: " , jc , " " , bShow , " " , offLevel , " " , idLevelMax , " " , stCursor , "\r\n" ) ;

                    ZE( boolT , bDeletePrefix ) ;
                    ZE( boolT , bDeleteSuffix ) ;
                    ZE( strokeS* , psttvPrefix ) ;
                    ZE( strokeS* , psttvBody ) ;
                    ZE( strokeS* , psttvSuffix ) ;
                    ZE( strokeS* , psttvDecoded ) ;
                    ZE( boolT , bRegisterUrl ) ;
                    {
                        PSP( pageEncoded , valueCursor ) ;
                        const byteT* pbzEncoded = idTypeCursor == ifcIDtYPEbRANCHs_strokeSstr ? (const byteT*)pageEncoded : 0 ;

                        if( pbzEncoded )
                        {
                            _IO_
                            etherP.strDecodeF( tinP , psttvDecoded , pbzEncoded ) ; ___( psttvDecoded ) ;
                            //etherP.traceF( tinP , T("branch:\r\n")+T(psttvDecoded) ) ;

                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/z") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            bRegisterUrl = 1 ;
                            {
                                _IO_
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/y") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                countT idf = 1 ;
                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                if( etherP.strIdAnyF( tinP , 0 , flSTRmATCH_null , idf , sttq , pP.tMacroEscapes , psttvDecoded ) )
                                {
                                    TN( tComma , "," ) ;
                                    for( countT offe = 0 ; offe < sizeof pP.ppsMacroEscapes / sizeof pP.ppsMacroEscapes[ 0 ] ; offe ++ )
                                    {
                                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/x") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                        strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                        ZE( countT , cHits ) ;
                                        {
                                            countT idf = 1 ;
                                            while( idf )
                                            {
                                                if( etherP.strIdF( tinP , idf , sttq , *pP.ppsMacroEscapes[ offe ] , psttvDecoded ) ) cHits ++ ;
                                            }
                                        }

                                        //etherP.traceF( tinP , T("[offe,cHits]:    ")+TF2(offe,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cHits,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

                                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/w") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                        if( cHits && !( cHits % 2 ) )
                                        {
                                            strokeS* pstti = psttvDecoded ;
                                                             psttvDecoded = 0 ;
        
                                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/v") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                            TN( te1  , "" ) ;
                                            TN( te2  , "" ) ;
                                            TN( te1a , "" ) ;
                                            {
                                                switch( offe )
                                                {
                                                    case 0x0 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'voice recording'                                              , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlMicrophone     +tCloseAnchor ; break ; }
                                                    case 0x1 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'snapshot picture'                                             , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlCamera         +tCloseAnchor ; break ; }
                                                    case 0x2 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'video movie'                                                  , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlVideocam       +tCloseAnchor ; break ; }
                                                    case 0x3 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'text ascii'                                                   , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlTextAscii      +tCloseAnchor ; break ; }
                                                    case 0x4 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'text email'                                                   , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlTextEmail      +tCloseAnchor ; break ; }
                                                    case 0x5 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'text pdf'                                                     , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlTextPdf        +tCloseAnchor ; break ; }
                                                    case 0x6 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'link to statutory or case law'                                , 0 )\" href=\""                            )            ; te2 = pP.tn           +T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlLinkLaw        +tCloseAnchor ; break ; }
                                                    case 0x7 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'link to scholarly treatise'                                   , 0 )\" href=\""                            )            ; te2 = pP.tn           +T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlLinkTreatise   +tCloseAnchor ; break ; }
                                                    case 0x8 : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'link to url other than law or treatise'                       , 0 )\" href=\""                            )            ; te2 = pP.tn           +T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlLinkOther      +tCloseAnchor ; break ; }
                                                    case 0x9 :
                                                    {
                                                        //te1 = offLevel
                                                        //    ? T("<img style=\"max-width:100%\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Fast loading, low resolution image.  To view full resolution, click the image.'  , 0 )\" src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/" )/*+trpToRoot+pP.thpArchiveSlash*/+pP.sMark11
                                                        //    : T("<img style=\""            "\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Slow loading, full resolution image.  For more viewing options, download this image and open its file with your favorite image editor.' , 0 )\" src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/" )/*+trpToRoot+pP.thpArchiveSlash*/+pP.sMark11
                                                        //;

                                                        te1 = offLevel
                                                            ? T("<img style=\"max-width:100%\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( '' , 0 )\" src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/" )/*+trpToRoot+pP.thpArchiveSlash*/+pP.sMark11
                                                            : T("")+pP.sMark101+T("<img style=\""            "\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( '' , 0 )\" src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/" )/*+trpToRoot+pP.thpArchiveSlash*/+pP.sMark11
                                                        ;

                                                        te2  = pP.tn+pP.sMark11+T("\">") ;
                                                        break ;
                                                    }
                                                    case 0xa : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'zip container'                                                , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlZipIcon        +tCloseAnchor ; break ; }
                                                    case 0xb : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'miscellaneous file'                                           , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlMiscIcon       +tCloseAnchor ; break ; }
                                                    case 0xc : { te1 = T(  "<a onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'IdeaFarm (tm) SOIL (Sentient Object Interface Language) file' , 0 )\" href=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+pP.sMark11 ; te2 = pP.tn+pP.sMark11+T("\">")+T("<img src=\"http://" postDOMAINnAMEaRCHIVEiDEAFARMcOM "/")+tUrlSoilIcon       +tCloseAnchor ; break ; }
                                                    case 0xd :
                                                    {
                                                        te1 = T("<span id=\"" ) ;
                                                        te2 = T("\"></span>")   ;
                                                        etherP.traceF( tinP , T("html tag (putFileIF): \"")+T(pstti)+T("\"") ) ;
                                                        break ;
                                                    }
                                                }
                                            }

                                            countT cstta = pstti->idAdam + cHits * ( te1.csF( tinP ) + te2.csF( tinP ) ) ;

                                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/u") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                            etherP.strMakeF( tinP , LF , psttvDecoded , 0 , cstta ) ; ___( psttvDecoded ) ;

                                            ZE( boolT , bIn ) ;
                                            countT idf = 1 ;
                                            while( idf )
                                            {
                                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/t") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                                ZE( strokeS* , psttw ) ;
                                                etherP.strSubstringF( tinP , psttw , idf , sttq , *pP.ppsMacroEscapes[ offe ] , pstti ) ; ___( psttw ) ;
                                                if( psttw && psttw->idAdam )
                                                {
                                                    if( offe != 0x9 || !bIn ) etherP.strFuseF( tinP , psttvDecoded , psttw ) ;
                                                    else
                                                    {
                                                        ZE( strokeS* , pstt1w ) ;
                                                        etherP.strWordsF( tinP , pstt1w , psttw , sttq , tComma ) ; ___( pstt1w ) ;

                                                        if( !offLevel )
                                                        {
                                                            FORsTRINGSiN1( pstt1w )
                                                            {
                                                                if( BlATHsTRING1 ) etherP.strFuseF( tinP , psttvDecoded , psttc1 ) ;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            FORsTRINGSiN1( pstt1w )
                                                            {
                                                                etherP.strFuseF( tinP , psttvDecoded , psttc1 ) ;
                                                                break ;
                                                            }
                                                        }

                                                        etherP.delF( tinP , pstt1w ) ;
                                                    }
                                                }

                                                etherP.delF( tinP , psttw ) ;
                                                if( idf || bIn ) etherP.strFuseF( tinP , psttvDecoded , !bIn ? te1 : te2 ) ;
                                                bIn = !bIn ;
                                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/s") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                            }

                                            etherP.delF( tinP , pstti ) ;
                                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/r") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                        }
                                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/q") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                    }
                                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/p") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                }
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/o") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            }
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/n") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                            {
                                _IO_
                                countT idMark = etherP.strIdF( tinP , pP.sMark01 , psttvDecoded , 1 ) ;
                                if( !idMark )
                                {
                                    psttvSuffix = psttvPrefix = pP.tn ;
                                    psttvBody                 = psttvDecoded ;
                                                                psttvDecoded = 0 ;
                                }
                                else
                                {
                                    countT idf = 1 ;
                                    strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                    etherP.strSubstringF( tinP , psttvPrefix , idf , sttq , pP.sMark01 , psttvDecoded ) ; ___( psttvPrefix ) ;

                                    if( !idf )
                                    {
                                        psttvBody = psttvPrefix ; psttvSuffix = psttvPrefix = pP.tn ;
                                    }
                                    else
                                    {
                                        bDeletePrefix = 1 ;

                                        etherP.strSubstringF( tinP , psttvBody , idf , sttq , pP.sMark01 , psttvDecoded ) ; ___( psttvBody ) ;

                                        if( !idf ) psttvSuffix = pP.tn ;
                                        else
                                        {
                                            etherP.strSubstringF( tinP , psttvSuffix , idf , sttq , pP.sMark01 , psttvDecoded ) ; ___( psttvSuffix ) ;
                                            bDeleteSuffix = 1 ;
                                        }
                                    }
                                }
                                __Z( psttvPrefix ) ; //SHOULD BE IMPOSSIBLE
                                __Z( psttvBody   ) ; // "
                                __Z( psttvSuffix ) ; // "
                            }
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/m") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }
                    }
                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/l") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                    if( bShow && stNix ) bShow = 0 ;

                    if( bShow )
                    {
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/k") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        _IO_ //WHERE RANK #4: b% OF TOTAL putFileIF TIME IS SPENT IN HERE
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // ****                ***********************************************************************************************************************************
                        // ****  REGISTER URL  ***********************************************************************************************************************************
                        // ****                ***********************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************

                        countT jNix = branchS::bEditionIF( tinP , etherP , jc , idEditionP ) ;
                        if( jNix )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/j") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            bShow = 0 ;
                            stNix << jNix ;
                        }
                        else if( bRegisterUrl )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/i") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            TN( tm4 , "" ) ; tm4 = pP.tn+pP.sMark11 ;
                            ZE( strokeS* , pstt1f ) ;
                            strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/h") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            countT cWords = etherP.strWordsF( tinP , pstt1f , psttvDecoded ? psttvDecoded : psttvBody , sttq , tm4 , flSTRwORDS_DELIMITERS ) ; ___( pstt1f ) ;
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/g") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            if( cWords > 1 )
                            {
                                ZE( boolT , bArm ) ;
                                FORsTRINGSiN1( pstt1f )
                                {
                                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/f") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                    countT idDelimiter = etherP.strIdF( tinP , tm4 , psttc1 ) ;

                                    if( idDelimiter )
                                    {
                                        if( idDelimiter != 1 ) { BLAMMO ; }
                                        countT cDelimiters = psttc1->idAdam ;
                                        if( cDelimiters > 1 ) etherP.traceF( tinP , T("exception: null length file name (multiple adjacent delimiters encountered) [cDelimiters]:    ")+TF2(cDelimiters,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                        if( cDelimiters % 2 ) bArm = !bArm ;
                                    }
                                    else if( bArm )
                                    {
                                        //etherP.traceF( tinP , T("registering: \"")+T(psttc1)+T("\"") ) ;
                                        //U::TO FIND A BUG: pP.pswUrlReferenced->grabF( tinP , TAG( TAGiDnULL ) ) ;
                                        //U::TO FIND A BUG: *pP.ppsttLever = psttc1 ;
                                        //U::TO FIND A BUG: ++ *pP.pswUrlReferenced ;
                                        //U::TO FIND A BUG: pP.pswUrlReferenced->ungrabF( tinP ) ;
                                    }
                                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/e") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                }
                            }
                            etherP.delF( tinP , pstt1f ) ;
                        }
                    }
                    etherP.delF( tinP , psttvDecoded ) ;
                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/d") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // ****         ******************************************************************************************************************************************
                    // ****  CLIMB  ******************************************************************************************************************************************
                    // ****         ******************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************
                    // *******************************************************************************************************************************************************

                    ZE( boolT , bUp ) ;
                    ZE( boolT , bJumped ) ;

                    if( jc != stCursor[ 1 ] ) { BLAMMO ; }
                    countT jcSaveMe       =                                                                 stCursor[ 1 ] ;
                    countT jcSaveDad      =                                 stCursor >= 2 ? stCursor[ 2 ] : stCursor[ 1 ] ;
                    countT jcSaveGrandDad = stCursor >= 3 ? stCursor[ 3 ] : stCursor >= 2 ? stCursor[ 2 ] : stCursor[ 1 ] ;

                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/c") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    TN( tRefHtmlId , "" ) ;
                    if( jbrUpCursor )
                    {
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/b") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        //CONoUTrAW( "UP\r\n" ) ;
                        //etherP.traceF( tinP , T("UP") ) ;
                        bUp = 1 ;
                        jc = jbrUpCursor ;

                        bJumped = !!jumpIfIF( tinP , jc , stJump , tRefHtmlId ) ;
                        //__Z( jc ) ;                                                               //20180420@1058:  !jc CAN HAPPEN WHEN PROCESSING A KT WITH INTENTIONALLY MISSING LABEL

                        if( jc ) stCursor << jc ;
                        else
                        {
                            DELETEpbs
                            etherP.traceF( tinP , T("error: jumped (up) off of a cliff (possibly a missing label in the kt") ) ;
                            break ;
                        }
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/a") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    }
                    else if( jbrRightCursor && jc != jMeP && !bJumpedLag )
                    {
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/Z") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        //CONoUTrAW( "RIGHT\r\n" ) ;
                        //etherP.traceF( tinP , T("RIGHT") ) ;

                        if( stNix && stNix[ 1 ] == jc ) // I DON'T KNOW WHETHER BOTH OF THESE ARE NEEDED
                        {
                            ZE( countT , cd ) ;
                            stNix >> cd ;
                            //CONoUTrAW3( "Unsuppressing " , cd , "\r\n" ) ;
                        }

                        jc = jbrRightCursor ;

                        bJumped = !!jumpIfIF( tinP , jc , stJump , tRefHtmlId ) ;
                        //__Z( jc ) ;                                                               //20180420@1058:  !jc CAN HAPPEN WHEN PROCESSING A KT WITH INTENTIONALLY MISSING LABEL

                        if( jc ) stCursor[ 1 ] = jc ;
                        else
                        {
                            DELETEpbs
                            etherP.traceF( tinP , T("error: jumped (right) off of a cliff (possibly a missing label in the kt") ) ;
                            break ;
                        }
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/X") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    }
                    else
                    {
                        _IO_
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/W") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        if( idTypeCursor != ifcIDtYPEbRANCHs_branchSptr && unJumpIfIF( tinP , jc , stJump ) )
                        {
                            stCursor[ 1 ] = jc ; // IF UNJUMP THEN THE NEXT ITERATION WILL PROCESS THE REFERENCE BRANCH'S KIDS AND YOUNGER SIBLINGS
                        }
                        else
                        {
                            // GO DOWN UNTIL I CAN GO RIGHT ; THEN GO RIGHT
                            //etherP.traceF( tinP , T("DOWN THEN RIGHT...") ) ;

                            ZE( boolT , bDone ) ;
                            while( jc )
                            {
                                {
                                    BSP( bcdOld , jc ) ;

                                    if( stNix && stNix[ 1 ] == jc ) // I DON'T KNOW WHETHER BOTH OF THESE ARE NEEDED
                                    {
                                        ZE( countT , cd ) ;
                                        stNix >> cd ;
                                        //CONoUTrAW3( "Unsuppressing " , cd , "\r\n" ) ;
                                    }

                                    //CONoUTrAW( "DOWN\r\n" ) ;
                                    //etherP.traceF( tinP , T("...DOWN") ) ;
                                    { ZE( countT , cnu ) ; stCursor >> cnu ; }
                                    jc = stCursor
                                        ? stCursor[ 1 ]
                                        : 0
                                    ;
                                }

                                ZE( countT , idTypeNew   ) ;
                                ZE( countT , valueNew    ) ;
                                ZE( countT , jbrUpNew    ) ;
                                ZE( countT , jbrRightNew ) ;
                                {
                                    BSP( bc , jc ) ;                    //U:: 20190802@0915: BUG: ACCESS VIOLATION IFF THERE IS EXACTLY 1 BRANCH (JUST THE ROOT BRANCH)
                                    idTypeNew   = B(bc).idType   ;
                                    jbrRightNew = B(bc).jbrRight ;
                                }

                                if( !jc ) break ;
                                else if( idTypeNew != ifcIDtYPEbRANCHs_branchSptr && unJumpIfIF( tinP , jc , stJump ) )
                                {
                                    stCursor[ 1 ] = jc ;
                                    break ;
                                }

                                if( stNix && stNix[ 1 ] == jc ) // I DON'T KNOW WHETHER BOTH OF THESE ARE NEEDED
                                {
                                    ZE( countT , cd ) ;
                                    stNix >> cd ;
                                    //CONoUTrAW3( "Unsuppressing " , cd , "\r\n" ) ;
                                }

                                if( jbrRightNew && jc != jMeP )
                                {
                                    //CONoUTrAW( "RIGHT\r\n" ) ;
                                    //etherP.traceF( tinP , T("...RIGHT") ) ;
                                    jc = jbrRightNew ;
                                    if( jc )
                                    {
                                        bJumped = !!jumpIfIF( tinP , jc , stJump , tRefHtmlId ) ;
                                        if( !POOP ) stCursor[ 1 ] = jc ;
                                        else        break ;
                                    }
                                    break ;
                                }

                                if( jc == jMeP ) //20131207@1756: ADDED WITHOUT ANALYSIS
                                {
                                    //etherP.traceF( tinP , T("...END") ) ;
                                    jc = 0 ;
                                    break ;
                                }
                            }
                        }
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/V") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    }
                    if( jc && jc != stCursor[ 1 ] ) { BLAMMO ; }

                    if( bShow )
                    {
                        _IO_    // WHERE RANK #1: 34% OF TOTAL putFileIF TIME IS SPENT IN HERE
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/U") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // ****               ************************************************************************************************************************************
                        // ****  APPEND TEXT  ************************************************************************************************************************************
                        // ****               ************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************
                        // *******************************************************************************************************************************************************

                        boolT bNoNewPara  = psttvBody->idAdam && bMaxAlmost && !!etherP.strIdF( tinP , pP.sMarkd1 , psttvBody ) ;

                        boolT bNoKid      = psttvBody->idAdam               && !!etherP.strIdF( tinP , pP.sMarke1 , psttvBody ) ;
                        if( bNoKid )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("suppressing kid [pstetvBody]:  ")+T(psttvBody) ) ;
                        }
                        ZE( boolT , bNoBody ) ;
                        if( !psttvBody->idAdam ) bNoBody = 1 ;
                        else
                        {
                            ZE( osTextT* , postvBody ) ;
                            etherP.strMakeF( tinP , LF , postvBody , psttvBody ) ; ___( postvBody ) ;
                            if( !*postvBody ) bNoBody = 1 ;
                            etherP.delF( tinP , postvBody ) ;
                        }

                        countT cDepth = cDepthIF( tinP , etherP , jcSaveMe , 1 , idEditionP ) ;
                        __( cDepth == - 1 ) ;
                        //etherP.traceF( tinP , TP("",cNestP)+T("[bNoKid,bNoBody,cDepth]:    ")+TF2(bNoKid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(bNoBody,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(cDepth,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG
                        boolT bKid = bNoKid || bNoBody || !cDepth
                            ? 0
                            : !oBiasDefault
                                ? bUp && ( bMaxGrand || bMaxAlmost )
                                : bUp &&   bMaxGrand
                        ;
                        //etherP.traceF( tinP , TP("",cNestP)+T("[bKid,oBiasDefault,bUp,bMaxGrand,bMaxAlmost]:    ")+TF2(bKid,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(oBiasDefault,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(bUp,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(bMaxGrand,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(bMaxAlmost,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO FIND A BUG

                        //CONoUTrAW( T("[idIn,cNestP,offPass,pBranch,psttvBody]: ")+TF2(idIn,flFORMAT_NObIGITvALUES)+T(" ")+TF2(cNestP,flFORMAT_NObIGITvALUES)+T(" ")+TF2(offPass,flFORMAT_NObIGITvALUES)+T(" ")+TF2(jcSaveMe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" \"")+T(psttvBody)+T("\"\r\n") ) ;

                        TN( tSpanBegin , "" ) ;
                        TN( tSpanEnd , "" ) ;
                        TN( tPrefix1 , "" ) ;
                        TN( tPrefix2Black , "" ) ;
                        TN( tPrefix2White , "" ) ;
                        TN( tSuffix , "" ) ;
                        if( bJumpedLag )
                        {
                            tSpanBegin = pP.tSpanBeginOpen+pP.tSpanBeginColorReferenceBlack+pP.tSpanBeginFlyJump+pP.tSpanBeginClose ;
                            tSpanEnd   = pP.tSpanEndOpenClose ;
                        }

                        BSP( bcSaveMe , jcSaveMe ) ;
                        branchS& bDebug = B(bcSaveMe) ; //U:: TO FIND A BUG

                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/T") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        if( !bKid )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/S") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            //CONoUTrAW( "\r\n" ) ;
                            countT offUse = bNoBody || bNoNewPara
                                ? 2
                                : offLevel + oBias
                            ;

                            boolT bIt = offUse == 2 && bMaxAlmost && !oBias ;

                            switch( offUse )
                            {
                                case 0 : { tPrefix2White = tPrefix2Black =       pP.tTitleBegin                                         ;           tSuffix = pP.tTitleEnd              ; break ; }
                                case 1 : { tPrefix2White = tPrefix2Black =       pP.tNewPara  +(bNoBody?pP.tn:pP.titOn)                 ;           tSuffix = (bNoBody?pP.tn:pP.titOff) ; break ; }
                                case 2 : { tPrefix2White = tPrefix2Black = bIt ? pP.tNewDetail+(bNoBody?pP.tn:pP.titOn) : pP.tNewDetail ; if( bIt ) tSuffix = (bNoBody?pP.tn:pP.titOff) ; break ; }
                                default: { BLAMMO ; }
                            }
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/R") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }
                        else
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/Q") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                            TN( tFilePath  , "" ) ;
                            TN( tFileTiny  , "" ) ;
                            TN( tFileShortBlack , "" ) ;
                            TN( tFileShortWhite , "" ) ;
                            tFileF( tinP , etherP , tFilePath , tFileShortBlack , tFileShortWhite , tFileTiny , jcSaveMe , pP , cNestP , idEditionP ) ;

                            TN( tGo , "" ) ;
                            if( tRefHtmlIdLag.csF( tinP ) ) tGo = T("#")+tRefHtmlIdLag ;

                            swFileP.grabF( tinP , TAG( TAGiDnULL ) ) ;
                            boolT bFound = !!swFileP.idSlotOfLeverF( tinP , jcSaveMe ) ;
                            swFileP.ungrabF( tinP ) ;

                            if( bFound )
                            {
                                //CONoUTrAW( "        FOUND IN SWITCH\r\n" ) ;

                                //CS:CODEsYNCH: PSEUDODUPLICATE: 36128008 36128008
                                TN( tRelativePath , "" ) ;
                                tRelativePath = !etherP.strCompareF( tinP , tFileShortBlack , tFileTiny+T(".html") )
                                    ? trpToRoot
                                    : ((strokeS*)tFileShortBlack)[ CSpREFIX ].idAdam == '!'
                                        ? trpToRoot+pP.thpArchiveSlash
                                        : trpToRoot+T("pages/")
                                ;

                                if( bMaxGrand || bNoNewPara )
                                {
                                    tPrefix1 = pP.tNewDetail ;
                                    tPrefix2Black = pP.tLinkBegin+tRelativePath+tFileShortBlack+tGo+pP.tLinkMiddle+(bMaxAlmost?(bNoBody?pP.tn:pP.titOn):pP.tn) ;
                                    tPrefix2White = pP.tLinkBegin+tRelativePath+tFileShortWhite+tGo+pP.tLinkMiddle+(bMaxAlmost?(bNoBody?pP.tn:pP.titOn):pP.tn) ;
                                }
                                else
                                {
                                    tPrefix1 = pP.tNewPara ;
                                    tPrefix2Black = pP.tLinkBegin+tRelativePath+tFileShortBlack+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                    tPrefix2White = pP.tLinkBegin+tRelativePath+tFileShortWhite+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                }

                                bKid = 0 ;
                            }
                            else
                            {
                                //CONoUTrAW( "    NOT FOUND IN SWITCH\r\n" ) ;
                                __Z( B(bcSaveMe).hashv ) ;
                                __Z( B(bcSaveMe).hashId ) ;

                                if( POOP ) break ;
                                else
                                {
                                    //CS:CODEsYNCH: PSEUDODUPLICATE: 36128008 36128008
                                    TN( tRelativePath , "" ) ;
                                    tRelativePath = !etherP.strCompareF( tinP , tFileShortBlack , tFileTiny+T(".html") )
                                        ? trpToRoot
                                        : ((strokeS*)tFileShortBlack)[ CSpREFIX ].idAdam == '!'
                                            ? trpToRoot+pP.thpArchiveSlash
                                            : trpToRoot+T("pages/")
                                    ;

                                    if( bMaxGrand )
                                    {
                                        tPrefix1 = pP.tNewDetail ;
                                        tPrefix2Black = pP.tLinkBegin+tRelativePath+tFileShortBlack+tGo+pP.tLinkMiddle ;
                                        tPrefix2White = pP.tLinkBegin+tRelativePath+tFileShortWhite+tGo+pP.tLinkMiddle ;
                                    }
                                    else if( bNoNewPara )
                                    {
                                        tPrefix1 = pP.tNewDetail ;
                                        tPrefix2Black = pP.tLinkBegin+tRelativePath+tFileShortBlack+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                        tPrefix2White = pP.tLinkBegin+tRelativePath+tFileShortWhite+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                    }
                                    else
                                    {
                                        tPrefix1 = pP.tNewPara ;
                                        tPrefix2Black = pP.tLinkBegin+tRelativePath+tFileShortBlack+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                        tPrefix2White = pP.tLinkBegin+tRelativePath+tFileShortWhite+tGo+pP.tLinkMiddle+(bNoBody?pP.tn:pP.titOn) ;
                                    }
                                }
                            }

                            tSuffix = bMaxAlmost ? (bNoBody?pP.tn:pP.titOff)+pP.tLinkEnd : pP.tLinkEnd ;

                            if( offLevel && !tSpanBegin.csF( tinP ) )
                            {
                                switch( offLevel )
                                {
                                    case 1 : { tSpanBegin = pP.tSpanBeginOpen+pP.tSpanBeginFlyClimbUp1+pP.tSpanBeginClose ; break ; }
                                    case 2 : { tSpanBegin = pP.tSpanBeginOpen+pP.tSpanBeginFlyClimbUp2+pP.tSpanBeginClose ; break ; }
                                }

                                tSpanEnd = pP.tSpanEndOpenClose ;
                            }
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/P") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }

                        if( !psttvBody->idAdam || etherP.strIdF( tinP , pP.sMarkc1 , psttvBody ) || etherP.strIdF( tinP , pP.sMark02 , psttvBody ) ) thBranchTerminator = pP.tn ;
                        else switch( psttvBody[ CSpREFIX - 1 + psttvBody->idAdam ].idAdam )
                        {
                            case '>' :
                            case ':' :
                            case '!' :
                            case '?' : { thBranchTerminator = pP.tn ; break ; }
                            default : { thBranchTerminator = pP.thDot ; break ; }
                        }

                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/O") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        countT offLevelKid = offLevelP + offLevel ; //U:: SHOULD BE const
                        //etherP.traceF( tinP , TP("",cNestP)+T("put""FileIF/ [offLevelKid,offLevelP,offLevel]:    ")+TF2(offLevelKid,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offLevelP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offLevel,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                        if( bWoth )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/N") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            ZE( strokeS* , psttUrlFileShort )  ;
                            etherP.strToUrlF( tinP , psttUrlFileShort , tFileShortBlack ) ; ___( psttUrlFileShort ) ;

                            //TRACES THE HTML FILE NAME: etherP.traceF( tinP , T("U:: [tFileShortBlack]: ")+tFileShortBlack ) ;

                            TN( tElMaybe , "" ) ;
                            ZE( strokeS* , psttvBodyTrunc ) ;
                            ZE( boolT    , bDelBodyTrunc ) ;
                            {
                                countT idf = 1 ;
                                countT idl = 0x20 ;
                                if( psttvBody->idAdam > idl )
                                {
                                    etherP.strSubstringF( tinP , psttvBodyTrunc , idf , idl , psttvBody ) ; ___( psttvBodyTrunc ) ;
                                    bDelBodyTrunc = 1 ;
                                    tElMaybe = T("...") ;
                                }
                                else psttvBodyTrunc = psttvBody ;
                            }

                            ZE( strokeS* , psttUrlBodyTrunc )  ;
                            etherP.strToUrlF( tinP , psttUrlBodyTrunc , T(psttvBodyTrunc)+( tElMaybe.csF( tinP ) ? tElMaybe : pP.thDot ) ) ; ___( psttUrlBodyTrunc ) ;
                            if( bDelBodyTrunc ) etherP.delF( tinP , psttvBodyTrunc ) ;

                            ZE( boolT , bRoot  ) ;
                            ZE( boolT , bDown1 ) ;
                            ZE( boolT , bDown2 ) ;
                            switch( offLevelKid )
                            {
                                case 0  : {                                       break ; }
                                case 1  : {                          bDown1 = 1 ; break ; }
                                case 2  : {             bDown2 = 1 ; bDown1 = 1 ; break ; }
                                default : { bRoot = 1 ; bDown2 = 1 ; bDown1 = 1 ; break ; }
                            }

                            TN( tHtml20Title , psttvBody->idAdam && etherP.strIdF( tinP , pP.sMark101 , psttvBody , 1 ) ? (strokeS*)pP.thPageTitleImage : psttvBody ) ;

                            TN( tSoilLink , "" ) ; tSoilLink =

                                T("                                        <a href=\"")
                                +trpToRoot
                                +T("soil/index.1.html\" onmouseout=\"sayMessageF( 0 , 16000 )\" onmouseover=\"sayMessageF( 'Click to view the source file for this IdeaFarm (tm) Knowledge Tree' , 0 )\">soil</a>\r\n") ;

                            ;

                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/M") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            TN( tMap , "[treemap goes here]" ) ;
                            if( !offPass )
                            {
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/L") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                csttNeeded +=
                                      tHtml20Title.csF( tinP )
                                    + thBranchTerminator.csF( tinP )
                                    + pP.tHtml30TitleEnd.csF( tinP )
                                    + ( pP.tHtml40BodyBeginBlack.csF( tinP ) >= pP.tHtml40BodyBeginWhite.csF( tinP ) ? pP.tHtml40BodyBeginBlack.csF( tinP ) : pP.tHtml40BodyBeginWhite.csF( tinP ) )

                                    + pP.tHtml50TableBegin.csF( tinP )
                                    + psttUrlFileShort->idAdam
                                    + pP.tBodyProlog_20.csF( tinP )
                                    + psttUrlBodyTrunc->idAdam
                                    + pP.tBodyProlog_30.csF( tinP )
                                    + ( pP.tBodyProlog_40Black.csF( tinP ) >= pP.tBodyProlog_40White.csF( tinP ) ? pP.tBodyProlog_40Black.csF( tinP ) : pP.tBodyProlog_40White.csF( tinP ) )
                                    + pP.tBodyProlog_50.csF( tinP )
                                    + ( tFileShortBlack.csF( tinP ) >= tFileShortWhite.csF( tinP ) ? tFileShortBlack.csF( tinP ) : tFileShortWhite.csF( tinP ) )
                                    + pP.tBodyProlog_60.csF( tinP )
                                    + ( pP.tBodyProlog_70Black.csF( tinP ) >= pP.tBodyProlog_70White.csF( tinP ) ? pP.tBodyProlog_70Black.csF( tinP ) : pP.tBodyProlog_70White.csF( tinP ) )
                                    + ( !psttNameSpaceP ? 0 : 1 + psttNameSpaceP->idAdam )
                                    + ( tFileShortBlack.csF( tinP ) >= tFileShortWhite.csF( tinP ) ? tFileShortBlack.csF( tinP ) : tFileShortWhite.csF( tinP ) )
                                    + ( pP.tBodyProlog_80Black.csF( tinP ) >= pP.tBodyProlog_80White.csF( tinP ) ? pP.tBodyProlog_80Black.csF( tinP ) : pP.tBodyProlog_80White.csF( tinP ) )
                                    + ( !psttBanner1P ? 0 : psttBanner1P->idAdam )
                                    + pP.tBodyProlog_90.csF( tinP )
                                    + pP.tBodyProlog_a0.csF( tinP )
                                    + pP.tBodyProlog_b0.csF( tinP )
                                    + tSoilLink.csF( tinP )
                                    + pP.tBodyProlog_c0.csF( tinP )
                                    + ( !psttBanner2P ? 0 : psttBanner2P->idAdam )
                                    + ( pP.tBodyProlog_d0Black.csF( tinP ) >= pP.tBodyProlog_d0White.csF( tinP ) ? pP.tBodyProlog_d0Black.csF( tinP ) : pP.tBodyProlog_d0White.csF( tinP ) )
                                    + pP.tBodyProlog_e0.csF( tinP )
                                    + ( pP.tBodyProlog_f0Black.csF( tinP ) >= pP.tBodyProlog_f0White.csF( tinP ) ? pP.tBodyProlog_f0Black.csF( tinP ) : pP.tBodyProlog_f0White.csF( tinP ) )
                                    + pP.tBodyProlog_01.csF( tinP )
                                    + pP.tBodyProlog_11.csF( tinP )
                                    + pP.tBodyProlog_21.csF( tinP )
                                    + pP.tBodyProlog_31.csF( tinP )
                                    + pP.tBodyProlog_41.csF( tinP )
                                    + pP.tBodyProlog_51.csF( tinP )
                                    + pP.tBodyProlog_61.csF( tinP )
                                    + pP.tBodyProlog_71.csF( tinP )
                                    + pP.tBodyProlog_81.csF( tinP )
                                    + pP.tBodyProlog_91.csF( tinP )
                                    + pP.tBodyProlog_a1.csF( tinP )
                                    + pP.tBodyProlog_b1.csF( tinP )
                                    + pP.tBodyProlog_c1.csF( tinP )
                                    + pP.tBodyProlog_d1.csF( tinP )
                                    + pP.tBodyProlog_e1.csF( tinP )
                                    + pP.tBodyProlog_f1.csF( tinP )
                                    + pP.tBodyProlog_002.csF( tinP )

                                    + psttUrlFileShort->idAdam
                                    + psttUrlBodyTrunc->idAdam
                                    + ( tFileShortBlack.csF( tinP ) >= tFileShortWhite.csF( tinP ) ? tFileShortBlack.csF( tinP ) : tFileShortWhite.csF( tinP ) )
                                    + ( !psttBanner1P ? 0 : psttBanner1P->idAdam )
                                    //+ tMap.csF( tinP )
                                ;

                                if( bDown1 )
                                {
                                    if( bDown2 )
                                    {
                                        if( bRoot ) csttNeeded += tPrologWas_aWhite.csF( tinP ) ;
                                        csttNeeded += pP.tPrologc.csF( tinP ) + ( tDown2Black.csF( tinP ) >= tDown2White.csF( tinP ) ? tDown2Black.csF( tinP ) : tDown2White.csF( tinP ) ) + pP.tPrologd.csF( tinP ) ;
                                    }
                                    csttNeeded += pP.tProloge.csF( tinP ) + tDown1White.csF( tinP ) + pP.tPrologf.csF( tinP ) ;
                                }

                                if( bDown1 )
                                {
                                    if( bDown2 )
                                    {
                                        if( bRoot ) csttNeeded += tPrologWas_aWhite.csF( tinP ) ;
                                        csttNeeded += pP.tPrologc.csF( tinP ) + ( tDown2Black.csF( tinP ) >= tDown2White.csF( tinP ) ? tDown2Black.csF( tinP ) : tDown2White.csF( tinP ) ) + pP.tPrologd.csF( tinP ) ;
                                    }
                                    csttNeeded += pP.tProloge.csF( tinP ) + tDown1White.csF( tinP ) + pP.tPrologf.csF( tinP ) ;
                                }

                                //if( psttTimeStampP ) csttNeeded += psttTimeStampP->idAdam ;

                                if( psttBanner2P ) csttNeeded += psttBanner2P->idAdam ;
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/K") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            }
                            else
                            {
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/J") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                etherP.strFuseF( tinP , psttOutBlack , tHtml20Title   , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , tHtml20Title   , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , thBranchTerminator  , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , thBranchTerminator  , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tHtml30TitleEnd    , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tHtml30TitleEnd    , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tHtml40BodyBeginBlack , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tHtml40BodyBeginWhite , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tHtml50TableBegin , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tHtml50TableBegin , &sOutWhite ) ;

                                if( pP.tHtml50TableBegin.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , psttUrlFileShort      , &sOutBlack ) ;
                                    etherP.strFuseF( tinP , psttOutWhite , psttUrlFileShort      , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_20 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_20 , &sOutWhite ) ;

                                if( pP.tBodyProlog_20.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , psttUrlBodyTrunc      , &sOutBlack ) ;
                                    etherP.strFuseF( tinP , psttOutWhite , psttUrlBodyTrunc      , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_30 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_30 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_40Black , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_40White , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_50 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_50 , &sOutWhite ) ;

                                if( pP.tBodyProlog_50.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , tFileShortWhite , &sOutBlack ) ; //INTENTIONALLY THE OTHER COLOR
                                    etherP.strFuseF( tinP , psttOutWhite , tFileShortBlack , &sOutWhite ) ; //INTENTIONALLY THE OTHER COLOR
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_60 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_60 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_70Black , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_70White , &sOutWhite ) ;

                                if( psttNameSpaceP && pP.tBodyProlog_70Black.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , T(psttNameSpaceP)+pP.thSlash , &sOutBlack ) ;
                                    etherP.strFuseF( tinP , psttOutWhite , T(psttNameSpaceP)+pP.thSlash , &sOutWhite ) ;
                                }

                                if( pP.tBodyProlog_70Black.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , tFileShortBlack , &sOutBlack ) ;
                                    etherP.strFuseF( tinP , psttOutWhite , tFileShortWhite , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_80Black , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_80White , &sOutWhite ) ;

                                if( pP.tBodyProlog_80Black.csF( tinP ) )
                                {
                                    if( psttBanner1P ) etherP.strFuseF( tinP , psttOutBlack , psttBanner1P , &sOutBlack ) ;
                                    if( psttBanner1P ) etherP.strFuseF( tinP , psttOutWhite , psttBanner1P , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_90 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_90 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_a0 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_a0 , &sOutWhite ) ;

                                if( pP.tBodyProlog_a0.csF( tinP ) )
                                {
                                    if( bDown1 )
                                    {
                                        if( bDown2 )
                                        {
                                            if( bRoot ) etherP.strFuseF( tinP , psttOutBlack , tPrologWas_aBlack , &sOutBlack ) ;
                                            if( bRoot ) etherP.strFuseF( tinP , psttOutWhite , tPrologWas_aWhite , &sOutWhite ) ;

                                            if( !bSuppressDown2 )
                                            {
                                                etherP.strFuseF( tinP , psttOutBlack , pP.tPrologc , &sOutBlack ) ;
                                                etherP.strFuseF( tinP , psttOutWhite , pP.tPrologc , &sOutWhite ) ;

                                                etherP.strFuseF( tinP , psttOutBlack , tDown2Black , &sOutBlack ) ;
                                                etherP.strFuseF( tinP , psttOutWhite , tDown2White , &sOutWhite ) ;

                                                etherP.strFuseF( tinP , psttOutBlack , pP.tPrologd , &sOutBlack ) ;
                                                etherP.strFuseF( tinP , psttOutWhite , pP.tPrologd , &sOutWhite ) ;
                                            }
                                        }

                                        if( !bSuppressDown1 )
                                        {
                                            etherP.strFuseF( tinP , psttOutBlack , pP.tProloge , &sOutBlack ) ;
                                            etherP.strFuseF( tinP , psttOutWhite , pP.tProloge , &sOutWhite ) ;

                                            etherP.strFuseF( tinP , psttOutBlack , tDown1Black , &sOutBlack ) ;
                                            etherP.strFuseF( tinP , psttOutWhite , tDown1White , &sOutWhite ) ;

                                            etherP.strFuseF( tinP , psttOutBlack , pP.tPrologf , &sOutBlack ) ;
                                            etherP.strFuseF( tinP , psttOutWhite , pP.tPrologf , &sOutWhite ) ;
                                        }
                                    }
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_b0 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_b0 , &sOutWhite ) ;

                                if( pP.tBodyProlog_b0.csF( tinP ) )
                                {
                                    etherP.strFuseF( tinP , psttOutBlack , tSoilLink , &sOutBlack ) ;
                                    etherP.strFuseF( tinP , psttOutWhite , tSoilLink , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_c0 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_c0 , &sOutWhite ) ;

                                if( pP.tBodyProlog_c0.csF( tinP ) )
                                {
                                    if( psttBanner2P ) etherP.strFuseF( tinP , psttOutBlack , psttBanner2P , &sOutBlack ) ;
                                    if( psttBanner2P ) etherP.strFuseF( tinP , psttOutWhite , psttBanner2P , &sOutWhite ) ;
                                }

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_d0Black , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_d0White , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_e0 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_e0 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_f0Black , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_f0White , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_01 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_01 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_11 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_11 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_21 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_21 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_31 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_31 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_41 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_41 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_51 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_51 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_61 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_61 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_71 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_71 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_81 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_81 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_91 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_91 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_a1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_a1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_b1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_b1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_c1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_c1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_d1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_d1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_e1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_e1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_f1 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_f1 , &sOutWhite ) ;

                                etherP.strFuseF( tinP , psttOutBlack , pP.tBodyProlog_002 , &sOutBlack ) ;
                                etherP.strFuseF( tinP , psttOutWhite , pP.tBodyProlog_002 , &sOutWhite ) ;
                                //etherP.traceF( tinP , TP("",cNestP)+T("U::/I") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            }
                            etherP.delF( tinP , psttUrlFileShort ) ;
                            etherP.delF( tinP , psttUrlBodyTrunc ) ;
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/H") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }

                        if( tPrefix2Black.csF( tinP ) > tPrefix2White.csF( tinP ) ) { BLAMMO ; }

                        boolT bWrapped = bMaxAlmost || ( bMaxReduced && bMaxGrand ) ; //U::ENHANCE TO ENABLE SOIL INPUT TO CONTAIN OVERRIDES WHICH INVERT THE DEFAULT BEHAVIOR FOR EACH LEVEL WITHIN A PAGE; SYNTAX: \1\2\3
                        if( !offPass )
                        {
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/G") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                           csttNeeded += tPrefix1.csF( tinP ) + tPrefix2White.csF( tinP ) + tSpanBegin.csF( tinP ) + psttvBody->idAdam + thBranchTerminator.csF( tinP ) + tSpanEnd.csF( tinP ) + tSuffix.csF( tinP ) ;
                            if( bWrapped ) csttNeeded += psttvPrefix->idAdam + psttvSuffix->idAdam ;
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/F") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }
                        else
                        {                                                                            //U:: bSuppressWoth IS USED TO SUPPRESS THE TITLE HEADER FOR MODE ROOT.  BEST PRACTICE FOR MODE ROOT IS A SINGLE PAGE WITH NO CLICKABLE NAVIGATION (BECAUSE THERE IS NO HEADER INCLUDING NO DOWN NAVIGATION)
                            boolT bSuppressWoth = bWoth && !pP.tHtml50TableBegin.csF( tinP ) ;       //U:: KLUDGE: TEST FOR MODE DIRECTLY HERE, NOT OPAQUELY BY TESTING LENGTH OF A PARTICULAR STRING
                            //etherP.traceF( tinP , TP("",cNestP)+T("[bSuppressWoth,bWoth,cs]:    ")+TF2(bSuppressWoth,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(bWoth,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ")+TF2(pP.tHtml50TableBegin.csF(tinP),flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("    ") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/E") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                                                  etherP.strFuseF( tinP , psttOutBlack , tPrefix1    , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , tPrefix1    , &sOutWhite ) ;

                            if( bWrapped        ) etherP.strFuseF( tinP , psttOutBlack , psttvPrefix , &sOutBlack ) ;
                            if( bWrapped        ) etherP.strFuseF( tinP , psttOutWhite , psttvPrefix , &sOutWhite ) ;

                            if( bSuppressWoth  ) ; //etherP.traceF( tinP , TP("",cNestP)+T("suppressing:    ")+T(psttvBody) ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                            else
                            {
                                                  //etherP.traceF( tinP , TP("",cNestP)+T("NOT suppressing:    ")+T(psttvBody) ) ; //U::TO FIND A BUG (TRACE SQUEEZE)

                                                  etherP.strFuseF( tinP , psttOutBlack , tPrefix2Black , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , tPrefix2White , &sOutWhite ) ;

                                                  etherP.strFuseF( tinP , psttOutBlack , tSpanBegin  , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , tSpanBegin  , &sOutWhite ) ;

                                                  etherP.strFuseF( tinP , psttOutBlack , psttvBody   , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , psttvBody   , &sOutWhite ) ;

                                                  etherP.strFuseF( tinP , psttOutBlack , thBranchTerminator  , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , thBranchTerminator  , &sOutWhite ) ;

                                                  etherP.strFuseF( tinP , psttOutBlack , tSpanEnd    , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , tSpanEnd    , &sOutWhite ) ;

                                                  etherP.strFuseF( tinP , psttOutBlack , tSuffix     , &sOutBlack ) ;
                                                  etherP.strFuseF( tinP , psttOutWhite , tSuffix     , &sOutWhite ) ;
                            }

                            if( bWrapped ) etherP.strFuseF( tinP , psttOutBlack , psttvSuffix , &sOutBlack ) ;
                            if( bWrapped ) etherP.strFuseF( tinP , psttOutWhite , psttvSuffix , &sOutWhite ) ;
                            //etherP.traceF( tinP , TP("",cNestP)+T("U::/D") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        }

                        if( bWoth ) bWoth = 0 ;

                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/C") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                        if( offPass && bKid && !bQuitP )
                        {
                            countT jcSaveNakedDad      = jcSaveDad      & ~NM_HIGH ;
                            countT jcSaveNakedGrandDad = jcSaveGrandDad & ~NM_HIGH ;
                            //U::T: if( jcSaveNakedGrandDad != jcSaveNakedDad || jcSaveNakedDad == 2 ) //THIS SUPPRESSES REDUNDANT ORDER BY DAD WHEN GRANDDAD HAS ALREADY ORDERED IT
                            {
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // ****                                 ******************************************************************************************************************
                                // ****  ORDER PAGE FOR CURRENT BRANCH  ******************************************************************************************************************
                                // ****                                 ******************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************
                                // *******************************************************************************************************************************************************

                                etherP.traceF( tinP , TP("",cNestP)+T("job: ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jcSaveMe,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jcSaveDad,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jcSaveGrandDad,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                                putFileJobS job( idEditionP , cNestP , offLevelKid , jcSaveMe , jcSaveDad , jcSaveGrandDad ) ;

                                inc02AM( cPendingP ) ;
                                st_putFileJob_P << (byteT*)&job ;
                            }
                        }
                        //etherP.traceF( tinP , TP("",cNestP)+T("U::/B") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    }

                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/A") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                    bJumpedLag = bJumped ;
                    tRefHtmlIdLag = tRefHtmlId ;
                    DELETEpbs
                    if( !( idBranch % ( TUCK << 4 ) ) ) etherP.traceF( tinP , T("branch ended [cNest,idPass,idBranch,jc]:    ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offPass+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(idBranch,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jcTrace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                    //etherP.traceF( tinP , TP("",cNestP)+T("U::/9") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                }

                //etherP.traceF( tinP , TP("",cNestP)+T("U::/8") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                     if( !offPass      ) csttNeeded += pP.tEpilogBlack.csF( tinP ) ;            // IF offPass == - 1 THEN I'VE CREATED A KID HTML FILE SO MUST START OVER FROM SCRATCH
                else if(  offPass == 1 )
                {
                    etherP.strFuseF( tinP , psttOutBlack , pP.tEpilogBlack , &sOutBlack ) ;
                    etherP.strFuseF( tinP , psttOutWhite , pP.tEpilogWhite , &sOutWhite ) ;
                }
                etherP.traceF( tinP , T("pass ended [cNest,idPass]:    ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(offPass+1,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/7") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
            }

            if( !POOP && ( sOutBlack || psttOutBlack ) )
            {
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/6") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                if( !bQuitP )
                {
                    _IO_
                    handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                    etherP.fileOpenF( tinP , hFile , countTC() , tFilePath+tFileShortBlack , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;

                    if( !sOutBlack )
                    {
                        ZE( osTextT* , posto ) ;
                        countT costo = etherP.strMakeF( tinP , LF , posto , psttOutBlack ) ; ___( posto ) ;
                        etherP.delF( tinP , psttOutBlack ) ;

                        etherP.fileWriteF( tinP , hFile , posto , costo ) ;
                        etherP.delF( tinP , posto ) ;
                    }
                    else while( sOutBlack )
                    {
                        ZE( strokeS* , psttp ) ;
                        sOutBlack >> psttp ; ___( psttp ) ;

                        ZE( osTextT* , posto ) ;
                        countT costo = etherP.strMakeF( tinP , LF , posto , psttp ) ; ___( posto ) ;
                        etherP.delF( tinP , psttp ) ;

                        etherP.fileWriteF( tinP , hFile , posto , costo ) ;
                        etherP.delF( tinP , posto ) ;
                    }
                    etherP.traceF( tinP , T("    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+tFileShortBlack ) ;
                }

                //etherP.traceF( tinP , TP("",cNestP)+T("U::/5") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
                if( !bQuitP )
                {

                    TN( tFileShortUse , "" ) ; tFileShortUse = !etherP.strCompareF( tinP , tFileShortBlack , tFileTiny+T(".html") )
                        ? tFileTiny+T(".white.html")
                        : tFileShortWhite
                    ;

                    _IO_
                    handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                    etherP.fileOpenF( tinP , hFile , countTC() , tFilePath+tFileShortUse , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ;

                    if( !sOutWhite )
                    {
                        ZE( osTextT* , posto ) ;
                        countT costo = etherP.strMakeF( tinP , LF , posto , psttOutBlack ) ; ___( posto ) ;
                        etherP.delF( tinP , psttOutBlack ) ;

                        etherP.fileWriteF( tinP , hFile , posto , costo ) ;
                        etherP.delF( tinP , posto ) ;
                    }
                    else while( sOutWhite )
                    {
                        ZE( strokeS* , psttp ) ;
                        sOutWhite >> psttp ; ___( psttp ) ;

                        ZE( osTextT* , posto ) ;
                        countT costo = etherP.strMakeF( tinP , LF , posto , psttp ) ; ___( posto ) ;
                        etherP.delF( tinP , psttp ) ;

                        etherP.fileWriteF( tinP , hFile , posto , costo ) ;
                        etherP.delF( tinP , posto ) ;
                    }
                    etherP.traceF( tinP , T("    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+tFileShortWhite ) ;
                }
                //etherP.traceF( tinP , TP("",cNestP)+T("U::/4") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
            }
            etherP.delF( tinP , psttOutBlack ) ;
            etherP.delF( tinP , psttOutWhite ) ;
            //etherP.traceF( tinP , TP("",cNestP)+T("U::/3") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
        }

        //etherP.traceF( tinP , TP("",cNestP)+T("U::/2") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
    }

    //etherP.traceF( tinP , TP("",cNestP)+T("U::/1") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
    cNestP -- ;
    etherP.traceF( tinP , TP("",cNestP)+T("put""FileIF/- ")+TF2(cNestP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jMeP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jDadP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jGrandDadP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
    //etherP.traceF( tinP , TP("",cNestP)+T("U::/0") ) ; //U::TO FIND A BUG (TRACE SQUEEZE)
}

#undef DELETEpbs


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128008.branchs.putfileif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128009.branchs.putfileif BEGIN
#define DDNAME       "3func.36128009.branchs.putfileif"
#define DDNUMB      (countT)0x36128009
#define IDFILE      (countT)0x151b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//U::MOVE TO BASE
struct _export fileSizeNameS
{
    osTextT*       postOsName ;
    const countT   cbUsed ;
    const countT   cbUsedHigh ;

    NEWdELcLASSpROTOS ;
    ~fileSizeNameS( voidT ) ;
    fileSizeNameS( tinS& tinP , etherC& etherP , const infoFileS& infoP , const strokeS* const psttShortP ) ;
}
;

NEWdELcLASS( 1 , fileSizeNameS )

fileSizeNameS::~fileSizeNameS( voidT )
{
    TINSL
    tinP.pEther->delF( tinP , postOsName ) ;
}

fileSizeNameS::fileSizeNameS( tinS& tinP , etherC& etherP , const infoFileS& infoP , const strokeS* const psttShortP ) :
postOsName( 0 ) ,
cbUsed( infoP.cbUsed ) ,
cbUsedHigh( infoP.cbUsedHigh )
{
    etherP.strMakeF( tinP , LF , postOsName , psttShortP ) ; ___( postOsName ) ;
}

countT subtractSizeNameF( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    const fileSizeNameS* const pSizeName1P = (const fileSizeNameS*)c1P ;
    const fileSizeNameS* const pSizeName2P = (const fileSizeNameS*)c2P ;

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;

             if( !pSizeName1P && !pSizeName2P )              ;
        else if(  pSizeName1P && !pSizeName2P ) scSgn =   1 ;
        else if( !pSizeName1P &&  pSizeName2P ) scSgn = - 1 ;
        else
        {
                         scSgn = pSizeName1P->cbUsedHigh - pSizeName2P->cbUsedHigh ;
            if( !scSgn ) scSgn = pSizeName1P->cbUsed     - pSizeName2P->cbUsed     ;
            if( !scSgn ) scSgn = thirdC::c_strcmpIF( tinP , pSizeName1P->postOsName , pSizeName2P->postOsName ) ;
        }
    }

    return - scSgn ;
}

TASK( tmPutFileWorkerF )

static countT idInLath ;                                                             //U::TO FIND A BUG: LOTS OF SPINLOCK SPINNING ON THESE THREADS
countT idIn = 1 + incv02AM( idInLath ) ;                                             //U::TO FIND A BUG: LOTS OF SPINLOCK SPINNING ON THESE THREADS
THREADmODE3oN( idIn == 1 ? flTHREADmODE3_LOGsPINcALLnEST : flTHREADmODE3_null )      //U::TO FIND A BUG: LOTS OF SPINLOCK SPINNING ON THESE THREADS

if( pTaskP && pTaskP->c1 )
{
    thirdC::c_memcpyIF( tinP , (byteT*)tinP.ppJot , (byteT*)pTaskP->pTinDad->ppJot , sizeof tinP.ppJot ) ; //U::DEFINE A MACRO "INHERITjOTrEGISTRY"

    countT*        pcArgP = (countT*)pTaskP->c1 ;

    countT&        cWorkersP       =      *(countT*)pcArgP[ 0x0 ] ;
    countT&        cPendingP       =      *(countT*)pcArgP[ 0x1 ] ;
    putFileS&      pP              =    *(putFileS*)pcArgP[ 0x2 ] ;
    countT&        cLeverBranchP   =      *(countT*)pcArgP[ 0x3 ] ;
    switchC&       swFileP         =     *(switchC*)pcArgP[ 0x4 ] ;
    stackC&        st_putFileJob_P =      *(stackC*)pcArgP[ 0x5 ] ;
    boolT          bWhereP         =                pcArgP[ 0x6 ] ;
    const strokeS* psttzTimeStampP =      (strokeS*)pcArgP[ 0x7 ] ;
    const strokeS* psttzBanner1P   =      (strokeS*)pcArgP[ 0x8 ] ;
    const strokeS* psttzBanner2P   =      (strokeS*)pcArgP[ 0x9 ] ;
    const strokeS* psttzNameSpaceP =      (strokeS*)pcArgP[ 0xa ] ;

    bWhereP = 1 ; //U::20140808@1625: DISABLED PENDING MIGRATION TO NEW BLOB FUNCTIONALITY FOR switchC ; ENABLE AFTER Where HAS BEEN MODIFIED TO CONFORM TO THE NEW FUNCTIONALITY (THE LEVER WILL BE A POINTER RATHER THAN A PLACE WHERE A VALUE IS WRITTEN)
    //20180119@1634: 0->1 WITHOUT ANALYSIS

    if( bWhereP ) etThread.traceF( tinP , T("bWhere is set") ) ;

    etThread.delF( tinP , pcArgP ) ;

    tinP.monitor.idWhat2 = - 1 ;
    if( bWhereP ) etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_REGISTERtHREAD ) ;

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    while( cPendingP )
    {
        st_putFileJob_P.grabF( tinP , TAG( TAGiDnULL ) ) ;
        while( st_putFileJob_P )
        {
            putFileJobS job ;
            byteT* pb_job = (byteT*)&job ;
            st_putFileJob_P >> pb_job ;
            st_putFileJob_P.ungrabF( tinP ) ;

            etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_WATCH ) ;

            if( bWhereP ) etThread.traceF( tinP , T("bWhere is set / calling putFileIF") ) ;
            branchS::putFileIF( tinP , etThread , countTC() , cPendingP , st_putFileJob_P , pP , job.offLevel , job.jMe , job.jDad , job.jGrandDad , cLeverBranchP , swFileP , job.cNest , job.idEdition , psttzTimeStampP , psttzBanner1P , psttzBanner2P , psttzNameSpaceP ) ;
            dec02AM( cPendingP ) ;

            etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_UNWATCH ) ;

            if( bWhereP ) etThread.traceF( tinP , T("bWhere is set / called  putFileIF") ) ;

            st_putFileJob_P.grabF( tinP , TAG( TAGiDnULL ) ) ;
        }
        st_putFileJob_P.ungrabF( tinP ) ;

        ++ s ; etThread.osSleepF( tinP ) ;
    }

    if( bWhereP ) etThread.etherWhereF( tinP , ifcIDaCTIONwHERE_UNREGISTERtHREAD ) ;
    tinP.monitor.idWhat2 = 0 ;

    dec02AM( cWorkersP ) ;
}
THREADmODE3rESTORE
DONE( tmPutFileWorkerF )

/*1*/voidT branchS::putFileIF( tinS& tinP , etherC& etherP , const boolT& bQuitP , putFileS& pP , jotC& jotP , const countT idSequenceJotP , const strokeS* const psttTimeStampP , const strokeS* const psttBanner1P , const strokeS* const psttBanner2P , const strokeS* const psttNameSpaceP , const osTextT* const postSourceP , const countT costSourceP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flBRANCHspUTfILEf , pP.flags ) ;
        if( POOP ) return ;
    }

    ZE( countT , cLeverBranch ) ;
    switchC swFile( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_null , cLeverBranch ) ;

    for( countT idEdition = 3 ; idEdition <= 3 && !bQuitP ; idEdition ++ )
    //for( countT idEdition = 1 ; idEdition <= 5 && !bQuitP ; idEdition ++ )
    {
        etherP.traceF( tinP , T("put""FileIF/ + edition [idEdition]: ")+TF2(idEdition,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
        etherP.traceF( tinP , T("put""FileIF/ [psttFile]:    ")+T(pP.psttFile) ) ;

        if( postSourceP && costSourceP )
        {                                                                                   // WRITE THE INPUT FILE AS AN HTML FILE SO THAT IT CAN BE VIEWED IN A BROWSER
            TN( tFileSoilTo , "" ) ;
            {
                ZE( strokeS* , psttPart1 ) ;
                ZE( strokeS* , psttPart2 ) ;
                etherP.strBisectF( tinP , psttPart1 , psttPart2 , pP.psttFile , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPart1 ) ; ___( psttPart2 ) ;
                tFileSoilTo = T(psttPart1)+TF2(idEdition,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("/soil/")+T(psttPart2)+T(".") ;
                etherP.delF( tinP , psttPart1 ) ;
                etherP.delF( tinP , psttPart2 ) ;
            }

            handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            etherP.fileOpenF( tinP , hFile , countTC() , tFileSoilTo+T("1.html") , ifcOPENaCCESS_W , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ; // READABLE LIST OF LINKAGE LABELS

            etherP.fileWriteF( tinP , hFile , "<pre>\r\n" , 7 ) ;
            for( countT offi = 0 ; offi < costSourceP ; offi ++ )
            {
                switch( postSourceP[ offi ] )
                {
                    case '<' : { etherP.fileWriteF( tinP , hFile , "&lt;"             , 4 ) ; break ; }
                    case '>' : { etherP.fileWriteF( tinP , hFile , "&gt;"             , 4 ) ; break ; }
                    default  : { etherP.fileWriteF( tinP , hFile , postSourceP + offi , 1 ) ; break ; }
                }
            }
            etherP.fileWriteF( tinP , hFile , "\r\n<pre>\r\n" , 9 ) ;
        }

        {
            osTextT* ppSuffix[] =
            {
                ".link.pages.soul.not.html"         ,
                ".link.pages.txt"                   ,
                ".link.frag.notes.soul.not.html"    ,
                ".link.frag.notes.txt"
            } ;

            for( countT offi = 0 ; offi < sizeof ppSuffix / sizeof ppSuffix[ 0 ] ; offi ++ )
            {
                TN( tFileSuffix    , ppSuffix[ offi ] ) ;
                TN( tFileLinkFrom  , "" ) ; tFileLinkFrom = T(pP.psttFile)+tFileSuffix ;
                if( etherP.diskFileExistsF( tinP , tFileLinkFrom ) )
                {
                    TN( tFileLinkTo  , "" ) ;
                    {
                        ZE( strokeS* , psttPart1 ) ;
                        ZE( strokeS* , psttPart2 ) ;
                        etherP.strBisectF( tinP , psttPart1 , psttPart2 , pP.psttFile , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPart1 ) ; ___( psttPart2 ) ;
                        tFileLinkTo = T(psttPart1)+TF2(idEdition,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("/")+T(psttPart2)+tFileSuffix ;
                        etherP.delF( tinP , psttPart1 ) ;
                        etherP.delF( tinP , psttPart2 ) ;
                    }

                    etherP.diskWalkCopyFileF( tinP , tFileLinkTo , tFileLinkFrom ) ;
                }
            }
        }

        //LOGrAW3( "calling putFileIF for edition " , idEdition , " +\r\n" ) ;
        stackC st_putFileJob( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_BLOB /*| flSTACKc_FIFO*/ /*| flSTACKc_XRAY*/ , sizeof( putFileJobS ) ) ;      //20171229@0841: FIFO->LIFO TO REDUCE ADDRESS SPACE USAGE (FIFO RESULTS IN ALL LEAF JOBS BEING ACCUMATED BEFORE ANY ARE DONE)
        ZE( countT , cPending ) ;
        {
            countT idJot = jotP.tagHighNibbleF() | idSequenceJotP ;
            putFileJobS job( idEdition , 0 , 0 , idJot , idJot , idJot ) ;
            inc02AM( cPending ) ;
            st_putFileJob << (byteT*)&job ;
        }
        //LOGrAW3( "called  putFileIF for edition " , idEdition , " -\r\n" ) ;

        {
            ZE( countT , cWorkers ) ;
            {
                countT cDo = thirdC::osProcessorsIF( tinP ) << 1 ; //4->2 IN RESPONSE TO POOL EXHAUSTION 20170607@1650 ; 20171214@2204: << 2 -> >> 1 IN RESPONSE TO POOL EXHAUSTION; 20171229@1632: ">> 1" -> "" AFTER ELIMIMATING baryC PREALLOCATION
                //cDo = 1 ;                                          //20171218@1405: cDo = 1 TO FIND A BUG

                etherP.etherWhereF( tinP , ifcIDaCTIONwHERE_SETUP , flETHERwHERE_null , cDo ) ;
                boolT bWoth = 1 ;
                while( cDo -- )
                {
                    inc02AM( cWorkers ) ;

                    ZE( countT* , pcArg ) ;
                    countT pcFrom[] = { (countT)&cWorkers , (countT)&cPending , (countT)&pP , (countT)&cLeverBranch , (countT)&swFile , (countT)&st_putFileJob , bWoth , (countT)psttTimeStampP , (countT)psttBanner1P , (countT)psttBanner2P , (countT)psttNameSpaceP } ;
                    etherP.newF( tinP , LF , *(byteT**)&pcArg , sizeof pcFrom ) ; ___( pcArg ) ;
                    etherP.memCopyF( tinP , (byteT*)pcArg , (byteT*)pcFrom , sizeof pcFrom ) ;

                    etherP.osThreadF( TaRG1( tmPutFileWorkerF ) , (countT)pcArg ) ;
                    if( bWoth ) bWoth = 0 ;
                }
            }

            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            while( cWorkers )
            {
                ++ s ; etherP.osSleepF( tinP ) ;
            }

            etherP.etherWhereF( tinP , ifcIDaCTIONwHERE_SHUTDOWN ) ;
        }

        TN( tFile      , pP.psttFile ) ;
        TN( tFileDadShort , "" ) ;
        TN( tFileDirDad , "" ) ;
        TN( tFileDir   , "" ) ;
        TN( tFileShort , "" ) ;
        {
            ZE( strokeS* , psttPart1 ) ;
            ZE( strokeS* , psttPart2 ) ;
            etherP.strBisectF( tinP , psttPart1 , psttPart2 , pP.psttFile , T("/") , - 1 , flSTRbISECT_APPENDdELIMITER ) ; ___( psttPart1 ) ; ___( psttPart2 ) ;
            tFileDirDad = T(psttPart1) ;
            tFileDir    = T(psttPart1)+TF2(idEdition,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN)+T("/") ; //20141005@1103: ADDED "|flFORMAT_FOREIGN" W/O ANALYSIS SO THAT DIRECTORIES WILL SORT NICER
            tFileShort  = T(psttPart2) ;
            etherP.delF( tinP , psttPart1 ) ;
            etherP.delF( tinP , psttPart2 ) ;

            ZE( strokeS* , psttDadShort ) ;
            strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
            etherP.strWordF( tinP , psttDadShort , tFileDirDad , sttq , strokeS( '/') , - 2 ) ; ___( psttDadShort ) ;
            tFileDadShort = T(psttDadShort) ;
            etherP.delF( tinP , psttDadShort ) ;
        }

        hoverC hover1( tinP , etherP , tFileDir ) ;

        TN( tFileReadme , "!readme.txt" ) ;
        {
            TN( tReadme ,

                "IdeaFarm " "(tm) Knowledge Tree\r\n"
                "\r\n"
                "\r\n"
                "An IdeaFarm " "(tm) Knowledge Tree is a multimedia hypertext document.\r\n"
                "Knowledge trees are distributed as \"html files\" accompanied by audio\r\n"
                "and video files, and are viewed by opening the file named \"index.html\".\r\n"
                "When this is done, your web browser will appear.\r\n"
                "\r\n"
                "These files comprise one \"shipping volume\" of a possibly multivolume set.\r\n"
                "Copy this entire shipping volume, and all others in the set, into a new\r\n"
                "folder.  The order in which you copy multiple volumes of a set does not matter.\r\n"
                "Open that folder, and then open the file \"index.html\".\r\n"
                "\r\n"
                "For a periodical, each new issue is shipped as a volume or set of volumes.\r\n"
                "Copy the volumes of the new issue into the folder that contains prior issues.\r\n"
                "\r\n"
                "If you are a new subscriber, ask the publisher whether prior issues are\r\n"
                "available.\r\n"

            ) ;

            etherP.boxPutF( tinP , tFileDir+tFileReadme , tReadme , tReadme.csF( tinP ) ) ;
        }

        if( !( F(pP.flags) & flBRANCHspUTfILEf_NOzIP ) && !bQuitP )
        {
            TN( tExe , "" ) ;
            {
                ZE( strokeS* , psttm ) ;
                etherP.diskMapFileNameF( tinP , psttm , T("///ideafarm/precious/domains/com/ideafarm/city/workshop/infozip/zip.exe/zip.exe") ) ; ___( psttm ) ;
                tExe = T(psttm) ;
                etherP.delF( tinP , psttm ) ;
            }

            osFileNameC osfExe(  tinP , etherP , tExe ) ;
            TN( tExeOs , osfExe ) ;

            countT idVolume = 1 ; // MULTIPLE VOLUMES ARE NEEDED DUE TO THE CAPACITY LIMIT (4.7 GB) OF A DVD DISK
            countT idZip    = 1 ; // MULTIPLE ZIP FILES ARE NEEDED DUE TO THE CAPACITY LIMIT (TOCK >> 1) OF THE COMMAND LINE ARGUMENT TO osProcessF
            osFileNameC osfOut(  tinP , etherP , tFileDir+T("ideafarm.com.")+tFileShort+T(".kt.")+TF3(idVolume,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".")+TF3(idZip,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".zip") ) ;
            TN( tArg     , "-9r "  ) ; tArg     += T(osfOut) ;
            TN( tb , " " ) ;
            TN( tcr      , "\r\n" ) ;

            //20130728@1422: DON'T KNOW WHY THE DRIVE LETTER IS HARDCODED: TN( tPathArchive , "" ) ; tPathArchive = T("///d/ideafarm.home.")+TF2(etherP.ifc_idHomeIdisk_IF(),flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/IdeaFarm " "(tm)/Drop Files Here To Archive/" ) ;
            TN( tPathArchive , "" ) ; tPathArchive = T("///ideafarm/IdeaFarm " "(tm)/Drop Files Here To Archive/" ) ;
            hoverC hover2( tinP , etherP , tPathArchive ) ;

            etherP.traceF( tinP , T("put""FileIF/ + edition ")+TF2(idEdition,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(": loading stFile") ) ;
            stackC stFile( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO|flSTACKc_DOnOTsERIALIZE ) ; //WILL CONTAIN fileSizeNameS* POINTERS, IN DECREASING ORDER OF FILE SIZE

            pP.pswUrlReferenced->grabF( tinP , TAG( TAGiDnULL ) ) ;
            countT cFlavors = pP.pswUrlReferenced->cFlavorsF( tinP ) ; 
            for( countT idf = 1 ; idf <= cFlavors && !bQuitP ; idf ++ )
            {
                *pP.ppsttLever = (strokeS*)pP.pswUrlReferenced->leverF( tinP , idf ) ;
                etherP.strokeF( tinP , T("[cRemaining,file]: ")+TF2(cFlavors-idf,flFORMAT_NObIGITvALUES)+T(" ")+tPathArchive+T(*pP.ppsttLever)+T("\r\n") ) ;

                ZE( infoFileS* , pInfo ) ;
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                {
                    etherC& etThread = etherP ;
                    OPENfILErEAD1( tPathArchive+T(*pP.ppsttLever) )
                    //CONoUTrAW( " querying file size name\r\n" ) ;
                    etherP.diskFileQueryF( tinP , pInfo , hFile1 ) ; ___( pInfo ) ;
                    //CONoUTrAW3( " queried file size name [pSizeName]: " , pSizeName , "\r\n" ) ;

                    if( pInfo && pInfo->psttIfoName ) etherP.delF( tinP , pInfo->psttIfoName ) ;
                }
                THREADmODE1rESTORE

                if( pInfo )
                {
                    fileSizeNameS* pSizeName = new( 0 , tinP , LF ) fileSizeNameS( tinP , etherP , *pInfo , *pP.ppsttLever ) ; ___( pSizeName ) ;

                    if( pSizeName )
                    {
                        //CONoUTrAWb( "[idf,cbUsed,cbUsedHigh]: " , idf , " " , pSizeName->cbUsed , " " , pSizeName->cbUsedHigh , "" ) ;
                        //CONoUTrAW( T(" \"")+T(pSizeName->postOsName)+T("\"\r\n") ) ;

                        ZE( countT , ids ) ;
                        stFile.sinkF( tinP , ids , (countT)pSizeName , flSTACKsINK_UNIQUE , subtractSizeNameF ) ; pSizeName = 0 ;
                        __Z( ids ) ;
                    }
                }

                DEL( pInfo ) ;
            }
            pP.pswUrlReferenced->ungrabF( tinP ) ;

            boolT bWoth = 1 ;
            stackC stLater( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO|flSTACKc_DOnOTsERIALIZE ) ; // USED TO POUR SOME BACK INTO stFile, PRESERVING THE DECREASING ORDER OF FILE SIZE
            while( stFile ) // WHILE I STILL NEED TO EMIT ANOTHER VOLUME
            {
                if( ( bWoth && bWoth -- ) || !( stFile % TUCK ) ) etherP.traceF( tinP , T("put""FileIF/ + edition ")+TF2(idEdition,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(": zipping [stFile,stLater]: ")+TF2(stFile,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(stLater,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
                CONoUTrAW( "------------ SORTED:\r\n" ) ;
                countT  capRemainLo = 0x18244F00 ; // 4.7 GB (4700000000_9 BYTES)
                sCountT capRemainHi = 0x1 ;

                ZE( strokeS* , psttArg ) ;
                {
                    osFileNameC osfOut2(  tinP , etherP , tFileDir+T("ideafarm.com.")+tFileShort+T(".kt.")+TF3(idVolume,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".")+TF3(idZip,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".zip") ) ;
                    TN( tArg , "-9r " ) ; tArg += T(osfOut2) ;
                    countT csttAllMax = ( TOCK >> 1 ) - 2 ; // WIN32 DOC CLAIMS LIMIT OF ( TOCK >> 1 ) - 1 EXCLUDING TERMINATOR, BUT THE LIMIT IS REALLY 1 LESS
                    etherP.strMakeF( tinP , LF , psttArg , tArg , csttAllMax - 1 - tExeOs.csF( tinP ) - tArg.csF( tinP ) ) ; ___( psttArg ) ; // COMMAND LINE LIMIT FOR dosExecPgmF.  LIMIT - COSTeXE - SPACE AFTER EXE - TERMINATOR
                }

                handleC hFile1( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                ZE( countT , idResult ) ;
                etherP.fileOpenF( tinP , hFile1 , idResult , T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/put""FileF/")+tFileDadShort+T("/packing.list.")+TF2(idEdition,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(idVolume,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(idZip,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".txt") , ifcOPENaCCESS_WR , 0 , flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeO ) ;

                __NZ( stLater ) ;
                if( idResult == ifcOPENrESULT_EXISTED )
                {
                    CONoUTrAW( "packing list found\r\n" ) ;

                    ZE( infoFileS* , pInfoPack ) ;
                    etherP.diskFileQueryF( tinP , pInfoPack , hFile1 ) ; ___( pInfoPack ) ;
                    if( !pInfoPack->cbUsed ) idResult = 0 ;
                    else
                    {
                        stackC stListed_postShort( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO|flSTACKc_DOnOTsERIALIZE , ifcSTACKtYPE_PTR_byteT ) ;
                        {
                            ZE( strokeS* , pstt1Short ) ;
                            {
                                ZE( strokeS* , psttPack ) ;
                                {
                                    ZE( osTextT* , postPack ) ;
                                    etherP.newF( tinP , LF , postPack , pInfoPack->cbUsed + 1 ) ; ___( postPack ) ;
                                    if( postPack )
                                    {
                                        countT cbActual = pInfoPack->cbUsed ;
                                        etherP.fileReadF( tinP , postPack , cbActual , hFile1 ) ;
                                        __( cbActual - pInfoPack->cbUsed ) ;
                                        postPack[ pInfoPack->cbUsed ] = 0 ;
                                        etherP.strMakeFromOsTextF( tinP , psttPack , postPack ) ; ___( psttPack ) ;
                                    }
                                    etherP.delF( tinP , postPack ) ;
                                }

                                strokeS sttq( 0 , sc_IGNOREqUOTES ) ;
                                etherP.strWordsF( tinP , pstt1Short , psttPack , sttq , tcr ) ; ___( pstt1Short ) ;
                                etherP.delF( tinP , psttPack ) ;
                            }

                            FORsTRINGSiN1( pstt1Short )
                            {
                                ZE( osTextT* , postShort ) ;
                                etherP.strMakeF( tinP , LF , postShort , psttc1 ) ; ___( postShort ) ;

                                ZE( countT , ids ) ;
                                stListed_postShort.sinkF( tinP , ids , postShort , flSTACKsINK_UNIQUE ) ;
                                if( !ids )
                                {
                                    etherP.delF( tinP , postShort ) ;
                                    __1 ; //IMPOSSIBLE UNLESS A HUMAN EDITS THE PACKING LIST TO CREATE DUPLICATE LINES
                                }
                            }
                            etherP.delF( tinP , pstt1Short ) ;
                        }

                        stackC stHold( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO|flSTACKc_DOnOTsERIALIZE ) ;
                        while( stFile )
                        {
                            ZE( fileSizeNameS* , pSizeName ) ;
                            stFile >> *(countT*)&pSizeName ;

                            if( !stListed_postShort( pSizeName->postOsName ) ) stLater << (countT)pSizeName ;
                            else
                            {
                                ZE( osTextT* , postShort ) ;
                                stListed_postShort.extractF( (byteT*)&postShort , tinP ) ;
                                etherP.delF( tinP , postShort ) ;
                                stHold << (countT)pSizeName ;
                            }
                        }
                        stListed_postShort.purgeF( tinP ) ;

                        while( stHold )
                        {
                            ZE( countT , c_pSizeName ) ;
                            stHold >> c_pSizeName ;
                            stFile << c_pSizeName ;
                        }
                    }
                    DEL( pInfoPack ) ;
                }

                ZE( boolT , bVolumeOk ) ;
                while( stFile )
                {
                    ZE( fileSizeNameS* , pSizeName ) ;
                    stFile >> *(countT*)&pSizeName ;

                    TN( tName , pSizeName->postOsName ) ;
                    TN( tWo , " " ) ; tWo += tName ;

                    bVolumeOk =
                    (
                        idResult == ifcOPENrESULT_EXISTED                               // IF stFile IS LOADED WITH A PACKING LIST
                        ||
                        ( pSizeName->cbUsedHigh < capRemainHi )
                        ||
                        ( pSizeName->cbUsedHigh == capRemainHi && pSizeName->cbUsed < capRemainLo )
                    ) ;

                    boolT bOk =
                    (
                        tWo.csF( tinP ) <= psttArg[ 2 ].idAdam
                        &&
                        bVolumeOk
                    ) ;

                    etherP.strokeF( tinP , TF3(capRemainLo,capRemainHi?flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE:flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,8)+(capRemainHi?TF3(capRemainHi,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9):TP("",9))+TF3(pSizeName->cbUsed,pSizeName->cbUsedHigh?flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE:flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,8)+(pSizeName->cbUsedHigh?TF3(pSizeName->cbUsedHigh,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9):TP("",9))+T(idResult==ifcOPENrESULT_EXISTED?"****PACKINGLISTED**** ":bOk?"* ":" ")+TF2(idVolume,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(idZip,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("\r\n") ) ;

                    if( !bOk ) stLater << (countT)pSizeName ;
                    else
                    {
                        if( idResult != ifcOPENrESULT_EXISTED ) etherP.fileWriteF( tinP , hFile1 , tName+tcr , tName.csF( tinP ) + tcr.csF( tinP ) ) ;
                        etherP.osTimeSubtractF( tinP , capRemainLo , capRemainHi , pSizeName->cbUsed , pSizeName->cbUsedHigh ) ;
                        DEL( pSizeName ) ;

                        etherP.strFuseF( tinP , psttArg , tWo ) ;
                    }
                }

                CONoUTrAW3( "------------ " , stLater , " LATER:\r\n" ) ;
                while( stLater )
                {
                    ZE( fileSizeNameS* , pSizeName ) ;
                    stLater >> *(countT*)&pSizeName ;

                    etherP.strokeF( tinP , TF3(pSizeName->cbUsed,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FILLzE,8)+T(",")+TF3(pSizeName->cbUsedHigh,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9)+T("\r\n") ) ;

                    stFile << (countT)pSizeName ;
                }

                boolT bLath = !stFile ;
                if( !bQuitP )
                {
                    if( bLath )
                    {
                        hoverC hover3( tinP , etherP , tFileDir ) ;
                        osFileNameC osfOut(  tinP , etherP , T("ideafarm.com.")+tFileShort+T(".kt.")+TF3(idVolume,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".")+TF3(idZip,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES|flFORMAT_FOREIGN|flFORMAT_FILLzE,2)+T(".zip") ) ;
                        TN( tArgMove , "-9rm " ) ; tArgMove += T(osfOut) ;
                        ZE( countT , value ) ;
                        ZE( countT , idDeathType ) ;
                        etherP.osProcessF( tinP , countTC() , countTC() , value , idDeathType , tExe , tArgMove+tb+tFileReadme+tb+tFileShort+T(".html")+tb+tFileShort+T(".*.html") ) ;
                        hoverC hover4( tinP , etherP , tPathArchive ) ;
                    }
                    ZE( countT , value ) ;
                    ZE( countT , idDeathType ) ;
                    etherP.osProcessF( tinP , countTC() , countTC() , value , idDeathType , tExe , psttArg ) ;
                }
                etherP.delF( tinP , psttArg ) ;

                if( !bLath )
                {
                    if( bVolumeOk ) idZip ++ ;
                    else
                    {
                        idZip = 1 ;
                        idVolume ++ ;
                    }
                }
            }
        }

        etherP.traceF( tinP , T("put""FileIF/ - edition [idEdition]: ")+TF2(idEdition,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
        if( F(pP.flags) & flBRANCHspUTfILEf_BEEP ) etherP.beeClickF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.36128009.branchs.putfileif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.3612800a.branchs.hashf BEGIN
#define DDNAME       "3func.3612800a.branchs.hashf"
#define DDNUMB      (countT)0x3612800a
#define IDFILE      (countT)0x151c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT branchS::hashF( tinS& tinP , const countT jbrMeP , barryC& barryHashP , stackC& stHashCollisionsP )/*1*/
{
    switch( idType )    
    {
        case ifcIDtYPEbRANCHs_strokeSstr :
        {
            if( value )
            {
                byteT pb_pageRelease[ sizeof( pageReleaseC ) ] ;
                pageReleaseC* pPageRelease = new( 0 , tinP , pb_pageRelease , sizeof pb_pageRelease ) pageReleaseC( tinP , (const byteT*)this ) ;

                byteT pb_pageEncoded[ sizeof( pageC ) ] ;
                pageC* pPageEncoded = new( 0 , tinP , pb_pageEncoded , sizeof pb_pageEncoded ) pageC( jotC::readIF( tinP , value ) ) ; //U::BUG: THIS MIGHT BE IN ANOTHER BOOK

                __( ((countT*)(const byteT*)*pPageEncoded)[ 0 ] - FINGERnEG_STReNCODEf ) ;
            
                if( POOP )
                {
                    etherC::etRockIF( tinP ).traceF( tinP , T("branchS::hashF / invalid finger in encoding") ) ;
                    DELzOMBIE( pPageEncoded ) ;
                    DELzOMBIE( pPageRelease ) ;
                }
                else
                {
                    countT cbe = ((countT*)(const byteT*)*pPageEncoded)[ 1 ] ;
                    countT myHash = ::hashF( (const byteT*)*pPageEncoded + sizeof( countT ) , cbe + sizeof( countT ) , 0 ) ; // HASHES EVERYTHING AFTER THE FINGERPRINT INCLUDING THE cbe FIELD
                    DELzOMBIE( pPageEncoded ) ;

                    {
                        BSP( brThis , jbrMeP ) ;

                        B(brThis).hashv = myHash ;

                        if( !B(brThis).hashv )
                        {
                            etherC::etRockIF( tinP ).traceF( tinP , T("::hashF returned a null hash") ) ;
                            B(brThis).hashv = - 1 ;
                        }
                        __Z( B(brThis).hashv ) ;
                
                        if( !POOP )
                        {
                            countT mask   ; //INTENTIONALLY UNINITIALIZED FOR SPEED
                            countT offBit ; //INTENTIONALLY UNINITIALIZED FOR SPEED
                            countT& bits = barryHashP( tinP , B(brThis).hashv , mask , offBit ) ;
                        
                            if( !( bits & mask ) ) bits |= mask ;
                            else                   stHashCollisionsP.sinkF( tinP , countTC() , B(brThis).hashv , flSTACKsINK_UNIQUE ) ;
                        }
                    }

                    DELzOMBIE( pPageRelease ) ;
                }
            }

            break ;
        }
        default :
        {
            BLAMMO ; // CALLER SHOULD CALL ME ONLY FOR STROKE STRING BRANCHES
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.3612800a.branchs.hashf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.3612800b.branchs.beditionif BEGIN
#define DDNAME       "3func.3612800b.branchs.beditionif"
#define DDNUMB      (countT)0x3612800b
#define IDFILE      (countT)0x151d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i return 0 iff this branch is included in the specified edition
else i return the address of the branch that i reference
 if i am not a reference branch then i return my own address (this)
do not delete the pointer that i return
most callers can interpret it as a boolean
putFileIF needs to push my nonze""ro return value into stNix
*/
/**/

/*1*/countT branchS::bEditionIF( tinS& tinP , etherC& etherP , const countT jMeP , const countT idEditionP )/*1*/
{
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;

    if( idIn == 0x13 )
    {
        countT foo = 2 ;
    }

    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( jMeP ) ;
        __Z( idEditionP ) ;
        __( idEditionP > 9 ) ;
        if( POOP ) return 0 ;
    }

    const countT jStart = jMeP ;
    countT       jHe    = jStart ;

    ZE( countT , idTypeHe ) ;
    ZE( countT , valueHe ) ;
    {
        BSP( brHe , jHe ) ;
        idTypeHe = B(brHe).idType ;
        valueHe  = B(brHe).value  ;
    }

    while( idTypeHe == ifcIDtYPEbRANCHs_branchSptr )
    {
        etherP.traceF( tinP , T("branchS::bEditionF: [valueHe]:    ")+TF2(valueHe,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ;    //U:: TO FIND A BUG

        if( jStart == valueHe ) { idTypeHe = jHe = 0 ; }
        else
        {
            branchS* pDebug = (branchS*)valueHe ;

            jHe = valueHe ;

            if( !jHe )                                          //20180420@0954:  ADDED WITHOUT ANALYSIS TO HANDLE !jHe WHEN etherSoilF PROCESSES A KT WITH AN INTENTIONAL MISSING LABEL
            {
                 etherP.traceF( tinP , T("branchS::bEditionF: error: following a branch pointer led nowhere") ) ;
                 idTypeHe = 0 ;
            }
            else
            {
                BSP( brHe , jHe ) ;
                idTypeHe = B(brHe).idType ;
                valueHe  = B(brHe).value  ;
            }
        }
    }

    boolT bOk = !!jHe ;
    if( bOk && idTypeHe == ifcIDtYPEbRANCHs_strokeSstr )
    {
        static strokeS sMark12( 0x21 , sc_MARK ) ; // \0:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 0 (THESE BRANCHES ARE COMMENTS BECAUSE idEditionP CANNOT BE 0)
        static strokeS sMark22( 0x22 , sc_MARK ) ; // \1:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 1
        static strokeS sMark32( 0x23 , sc_MARK ) ; // \2:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 2
        static strokeS sMark42( 0x24 , sc_MARK ) ; // \3:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 3
        static strokeS sMark52( 0x25 , sc_MARK ) ; // \4:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 4
        static strokeS sMark62( 0x26 , sc_MARK ) ; // \5:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 5
        static strokeS sMark72( 0x27 , sc_MARK ) ; // \6:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 6
        static strokeS sMark82( 0x28 , sc_MARK ) ; // \7:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 7
        static strokeS sMark92( 0x29 , sc_MARK ) ; // \8:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 8
        static strokeS sMarka2( 0x2a , sc_MARK ) ; // \9:                                     FLAG: CONDITIONALLY INCLUDE THIS BRANCH IFF idEditionP == 9

        ZE( strokeS* , psttDecoded ) ;
        {
            PSP( psp , valueHe ) ;
            etherP.strDecodeF( tinP , psttDecoded , psp ) ; ___( psttDecoded ) ;
        }

        boolT pBoolEdition[] =
        {
            !!etherP.strIdF( tinP , sMark12 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark22 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark32 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark42 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark52 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark62 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark72 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark82 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMark92 , psttDecoded ) ,
            !!etherP.strIdF( tinP , sMarka2 , psttDecoded )
        } ;
        etherP.delF( tinP , psttDecoded ) ;

        for( countT offe = 0 ; offe < sizeof pBoolEdition / sizeof pBoolEdition[ 0 ] ; offe ++ ) // RESET bOk IF THIS BRANCH IS CONDITIONAL
        {
            if( pBoolEdition[ offe ] )
            {
                bOk = 0 ;
                break ;
            }
        }

        if( !bOk && pBoolEdition[ idEditionP ] ) bOk = 1 ;                                       // SET bOk IF CONDITIONAL AND CONDITION IS SATISFIED
    }

    return bOk ? 0 : jHe ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36128* : 3func.3612800b.branchs.beditionif END
