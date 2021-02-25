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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602f* : 3func.3602f001.etherinitc.dt_etherinitc BEGIN
#define DDNAME       "3func.3602f001.etherinitc.dt_etherinitc"
#define DDNUMB      (countT)0x3602f001
#define IDFILE      (countT)0x10b6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1450002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/etherInitC::~etherInitC( voidT )/*1*/
{
    TINSL
    _IO_
    {
        if( tinP.pAdamGlobal1->_etherC_.pSwEtThread && (countT)&ether == *tinP.pAdamGlobal1->_etherC_.pSwEtThread ) tinP.pAdamGlobal1->_etherC_.pSwEtThread->freeF( tinP ) ;
    
        if( tinP.pAdamGlobal1->_etherC_.pEtPrime == &ether )
        {
    
            //PSEUDODUPLICATE CODE: 1450002 12f0002 1030003 1020171
            if( tinP.pAdamGlobal1->_etherC_.pSwsRecycle )
            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                countT cFlavors = tinP.pAdamGlobal1->_etherC_.pSwsRecycle->cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle = (countT*)tinP.pAdamGlobal1->_etherC_.pSwsRecycle->leverF( tinP , idf ) ;
    
                    while( *tinP.pAdamGlobal1->_etherC_.pSwsRecycle )
                    {
                        ZE( voidT* , pObject ) ;
                        *tinP.pAdamGlobal1->_etherC_.pSwsRecycle >> *(countT*)&pObject ;
    
                        //LOGrAWtID4( "deleting object " , (countT)pObject , " using pcz lever at " , tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle ) ; //U::
    
                        if( tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle && pObject )
                        {
                            //U::
                            countT cFoo = *tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle ;
                            switch( cFoo )
   
                            //U::switch( *tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle )
                            {
                                case ifcIDtYPErECYCLE_soulC        : { DEL(        *(soulC**)&pObject ) ; break ; }
                                case ifcIDtYPErECYCLE_stackC       : { DEL(       *(stackC**)&pObject ) ; break ; }
                                case ifcIDtYPErECYCLE_switchC      : { DEL(      *(switchC**)&pObject ) ; break ; }
                                case ifcIDtYPErECYCLE_switchStackC : { DEL( *(switchStackC**)&pObject ) ; break ; }
                                default                            : { BLAMMO                           ; break ; }
                            }
                        }
                    }
                }
                THREADmODE1rESTORE
            }
            DEL( tinP.pAdamGlobal1->_etherC_.pSwsRecycle ) ; //TO MAKE SURE THAT etRock EXISTS WHEN THESE ARE DELETED
    
            DEL( tinP.pAdamGlobal1->_etherC_.pBatFiringKids      ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pSwEtThread         ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pTxtWinTitle        ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pTxtDllEntry1       ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2       ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pBatWinTitle        ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pStkCatchers        ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pStkQuitters        ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pStkAcceptors       ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pStkIdleTimeouters  ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pSwDllReferences    ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pBatWindowDeletion  ) ;
    
            DEL( tinP.pAdamGlobal1->_etherC_.pEtPaint            ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pEtText             ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pEtRock             ) ;
            DEL( tinP.pAdamGlobal1->_etherC_.pEtLongLasting      ) ;
    
            tinP.pAdamGlobal1->_etherC_.pEtPrime = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602f* : 3func.3602f001.etherinitc.dt_etherinitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602f* : 3func.3602f002.etherinitc.etherinitc BEGIN
#define DDNAME       "3func.3602f002.etherinitc.etherinitc"
#define DDNUMB      (countT)0x3602f002
#define IDFILE      (countT)0x10b7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1450003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/etherInitC::etherInitC( tinS& tinP , countT c_pP )/*1*/ :
ether( *(etherC*)c_pP ) //ASSUME: c_pP IS NEVER 0.  CAN HAVE ACCESS VIOLATION
{
    if( !tinP.pAdamGlobal1->_etherC_.pEtPrime )
    {
        tinP.pAdamGlobal1->_etherC_.pEtPrime = &ether ;

        tinP.pAdamGlobal1->_etherC_.pEtLongLasting = new( 0 , tinP , LF ) etherC(   tinP , TAG( TAGiDnULL )                                 ) ; ___( tinP.pAdamGlobal1->_etherC_.pEtLongLasting ) ;
        tinP.pAdamGlobal1->_etherC_.pEtText        = new( 0 , tinP , LF ) etherC(   tinP , TAG( TAGiDnULL )                                 ) ; ___( tinP.pAdamGlobal1->_etherC_.pEtText        ) ;
        tinP.pAdamGlobal1->_etherC_.pEtPaint       = new( 0 , tinP , LF ) etherC(   tinP , TAG( TAGiDnULL )                                 ) ; ___( tinP.pAdamGlobal1->_etherC_.pEtPaint       ) ;
        tinP.pAdamGlobal1->_etherC_.pEtRock        = new( 0 , tinP , LF ) etherC(   tinP , TAG( TAGiDnULL ) , flTHIRDmODE_IMPOTENCEtObLAMMO ) ; ___( tinP.pAdamGlobal1->_etherC_.pEtRock        ) ;

        //U:: 20200520@1428: BUG: THE NEXT LINE CT A switchStackC THAT IS GRABBED FROM CODE WITHIN booksC::writeF.  IT IS RARE.  IT WILL FAIL DUE TO NONMONOTONIC GRABBING.  bksTrace IS BEING WRITTEN.  CONJ: NEED TO EDIT CODE SO THAT booksC::writeF CANNOT CALL RECYCLER
        if( tinP.pAdamGlobal1->_etherC_.pEtRock ) { tinP.pAdamGlobal1->_etherC_.pSwsRecycle = new( 0 , tinP , LF ) switchStackC( tinP , *tinP.pAdamGlobal1->_etherC_.pEtRock , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_etherC_.pczl_pSwsRecycle , flSTACKc_null , 0 , ifcIDgRABlAYER_7BASEmISC1 /*U::THIS IS A PROBLEM BECAUSE IT IS GRABBED WHILE WITHIN booksC::writeF. THIS CODE JUST MAKES EXPLICIT THE DEFAULT PARAMETERS*/ ) ; ___( tinP.pAdamGlobal1->_etherC_.pSwsRecycle ) ; }

        if( tinP.pAdamGlobal1->_etherC_.pEtLongLasting )
        {
            tinP.pAdamGlobal1->_etherC_.pBatWindowDeletion    = new( 0 , tinP , LF ) batonC(  tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER                             ) ; ___( tinP.pAdamGlobal1->_etherC_.pBatWindowDeletion    ) ;
            tinP.pAdamGlobal1->_etherC_.pSwDllReferences      = new( 0 , tinP , LF ) switchC( tinP , *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_etherC_.oshDllLever ) ; ___( tinP.pAdamGlobal1->_etherC_.pSwDllReferences      ) ;
            tinP.pAdamGlobal1->_etherC_.pStkIdleTimeouters    = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , TAG( TAGiDnULL )                                                           ) ; ___( tinP.pAdamGlobal1->_etherC_.pStkIdleTimeouters    ) ;
            tinP.pAdamGlobal1->_etherC_.pStkAcceptors         = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , TAG( TAGiDnULL )                                                           ) ; ___( tinP.pAdamGlobal1->_etherC_.pStkAcceptors         ) ;
            tinP.pAdamGlobal1->_etherC_.pStkCatchers          = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , TAG( TAGiDnULL )                                                           ) ; ___( tinP.pAdamGlobal1->_etherC_.pStkCatchers          ) ;
            tinP.pAdamGlobal1->_etherC_.pStkQuitters          = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , TAG( TAGiDnULL )                                                           ) ; ___( tinP.pAdamGlobal1->_etherC_.pStkQuitters          ) ;
            tinP.pAdamGlobal1->_etherC_.pBatWinTitle          = new( 0 , tinP , LF ) batonC(  tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABlAYER_7BASEmISC1 , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER                                                        ) ; ___( tinP.pAdamGlobal1->_etherC_.pBatWinTitle          ) ;
            tinP.pAdamGlobal1->_etherC_.pTxtWinTitle          = new( 0 , tinP , LF ) textC(   tinP , TAG( TAGiDnULL ) , flTEXTc_null , ""                                                                                     ) ; ___( tinP.pAdamGlobal1->_etherC_.pTxtWinTitle          ) ;
            tinP.pAdamGlobal1->_etherC_.pSwEtThread           = new( 0 , tinP , LF ) switchC( *tinP.pAdamGlobal1->_etherC_.pEtLongLasting , tinP , TAG( TAGiDnULL )                                                           ) ; ___( tinP.pAdamGlobal1->_etherC_.pSwEtThread           ) ;
            tinP.pAdamGlobal1->_etherC_.pBatFiringKids        = new( 0 , tinP , LF ) batonC(  tinP , TAG( TAGiDnULL )                                                                                                         ) ; ___( tinP.pAdamGlobal1->_etherC_.pBatFiringKids        ) ;
            tinP.pAdamGlobal1->_etherC_.pTxtDllEntry1         = new( 0 , tinP , LF ) textC(   tinP , TAG( TAGiDnULL ) , flTEXTc_null , ""                                                                                     ) ; ___( tinP.pAdamGlobal1->_etherC_.pTxtDllEntry1         ) ;
            tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2         = new( 0 , tinP , LF ) textC(   tinP , TAG( TAGiDnULL ) , flTEXTc_null , ""                                                                                     ) ; ___( tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2         ) ;

            *tinP.pAdamGlobal1->_etherC_.pTxtDllEntry1 = T("W?") ; ;

            //2011.06.27:EDITED THIS FOR MIGRATON FROM sadamStateOldS::doCBF -> sadamC::doF

            //CODEsYNCH: 1450003 0022025
            // INSTRUCTIONS FOR GETTING THIS VALUE
            // 1. EDIT base21.lnk to add a line "op mangle" after the "op map" line
            // 2. LINK (base l t)
            // 3. "g b" "cd w*" "cd o" "rw *.map"
            // 4. search for "do CBF"
            //
            // 2011.04.11: THE MAP REPORT IS NOW IN \tmp\base.map

            // YOU WILL FIND A LINE SIMILAR TO:
            // 0001:000b3cee  W?doCBF$:paperOldC$n(rn$tinS$$rn$etherC$$xuixuixpnxuirn$s adamStateOldS$$)ui
            //2011.04.11:     W?doCBF$:sadamStateOldS$n(rn$tinS$$rn$etherC$$uiuipnxui)ui
            //2011.06.27:     W?doF$:sadamC$n(rn$tinS$$rn$etherC$$uiuipnxui)ui
            //
            // 5. COPY THE SUFFIX AFER "do CBF$:paperOldC" FROM THAT LINE ; THEN APPEND rn$s adamStateOldS$$ AS LATH PARAMETER

            //*tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2 = T("$n(rn$tinS$$rn$etherC$$xuixuixpnxuirn$s adamStateOldS$$)ui") ;
            //*tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2 = T("$n(rn$tinS$$rn$etherC$$uiuipnxuirn$sadamStateOldS$$)ui") ;
              *tinP.pAdamGlobal1->_etherC_.pTxtDllEntry2 = T("$n(rn$tinS$$rn$etherC$$uiuipnxuirn$sadamC$$)ui") ;                                   //2011.06.27
                                                              
        }                                                      

    }
    else if( tinP.pAdamGlobal1->_etherC_.pSwEtThread && !*tinP.pAdamGlobal1->_etherC_.pSwEtThread ) *tinP.pAdamGlobal1->_etherC_.pSwEtThread = (countT)&ether ; // etThread MUST BE THE FIRST etherC OBJECT CREATED ON EACH THREAD, EXCEPT FOR etPrime AND THE etherC OBJECTS THAT ARE CT'D BY etPrime'S CT'OR
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3602f* : 3func.3602f002.etherinitc.etherinitc END
