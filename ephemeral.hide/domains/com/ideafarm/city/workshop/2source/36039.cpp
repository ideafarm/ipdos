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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36039* : 3func.36039001.thirdinitc.dt_thirdinitc BEGIN
#define DDNAME       "3func.36039001.thirdinitc.dt_thirdinitc"
#define DDNUMB      (countT)0x36039001
#define IDFILE      (countT)0x114d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1540002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thirdInitC::~thirdInitC( voidT )/*1*/
{
    if( F(third.flagsMode) & flTHIRDmODE_TINoWNER )
    {
        TINSL
        thirdC::dosCloseThreadResourcesIF( tinP ) ;
        third.thirdDiscardTinF() ;
    }

    TINSL
    if( tinP.pAdamGlobal1->_thirdC_.pThPrime == &third )
    {
        DEL( tinP.pAdamGlobal1->_thirdC_.pSwFileOpen ) ;
        DEL( tinP.pAdamGlobal1->_thirdC_.pStk_pThird ) ;
        DEL( tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting ) ;
        DEL( tinP.pAdamGlobal1->_thirdC_.pSwKillSocket ) ; //ASSUME: s_shutdown1F HAS BEEN CALLED

        if( tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle )
        {
            switchC* pswd = tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle ;
            tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle = 0 ; //GRAB WILL USE ME IF I AM NOT ZE

            tinP.pAdamGlobal4->_thirdC_grab_lOsPid.grabF( tinP , TAG( TAGiDnULL ) ) ;
            countT cFlavors = pswd->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                tinP.pAdamGlobal1->_thirdC_.lOsPid = pswd->leverF( tinP , idf ) ;
                countT& osh = *pswd ;
                if( osh )
                {
                     #if defined( __NT__ )
                        thirdC::osHandleCloseIF( osh ) ; //U::USE A handleC OBJECT TO DO THIS
                    #endif
                    osh = 0 ;
                }
            }
            tinP.pAdamGlobal4->_thirdC_grab_lOsPid.ungrabF( tinP ) ;
            DEL( pswd ) ;
        }

        if( tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle )
        {
            switchC* pswd = tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle ;
            tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle = 0 ; //GRAB WILL USE ME IF I AM NOT ZE

            tinP.pAdamGlobal4->_thirdC_grab_lOsTid.grabF( tinP , TAG( TAGiDnULL ) ) ;
            countT cFlavors = pswd->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                tinP.pAdamGlobal1->_thirdC_.lOsTid = pswd->leverF( tinP , idf ) ;
                countT& osh = *pswd ;
                if( osh )
                {
                    #if defined( __NT__ )
                        thirdC::osHandleCloseIF( osh ) ; //U::USE A handleC OBJECT TO DO THIS
                    #endif
                    osh = 0 ;
                }
            }
            tinP.pAdamGlobal4->_thirdC_grab_lOsTid.ungrabF( tinP ) ;
            DEL( pswd ) ;
        }

        DELzOMBIE( tinP.pAdamGlobal1->_thirdC_.phCritSec ) ;
        DEL( tinP.pAdamGlobal1->_thirdC_.pThLongLasting ) ;

        tinP.pAdamGlobal1->_thirdC_.pThPrime = 0 ;
    }

    putNegAM( *(countT*)&third.fingerprint , FINGERnEG_THIRDczOMBIE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36039* : 3func.36039001.thirdinitc.dt_thirdinitc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36039* : 3func.36039002.thirdinitc.thirdinitc BEGIN
#define DDNAME       "3func.36039002.thirdinitc.thirdinitc"
#define DDNUMB      (countT)0x36039002
#define IDFILE      (countT)0x114e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1540003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/thirdInitC::thirdInitC( tinS& tinP , countT c_pP )/*1*/ :
third( *(thirdC*)c_pP ) //ASSUME: c_pP IS NEVER 0.  CAN HAVE ACCESS VIOLATION
{
    _IO_
    putNegAM( *(countT*)&third.fingerprint , FINGERnEG_THIRDc ) ;
    if( !tinP.pAdamGlobal1->_thirdC_.pThPrime )
    {
        tinP.pAdamGlobal1->_thirdC_.pThPrime = &third ;
        tinP.pAdamGlobal1->_thirdC_.phCritSec = new( 0 , tinP , tinP.pAdamGlobal1->_thirdC_.pbZombieCritSec , sizeof tinP.pAdamGlobal1->_thirdC_.pbZombieCritSec ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_CRITICALsECTION ) ;
        tinP.pAdamGlobal1->_thirdC_.pThLongLasting = new( 0 , tinP , LF ) thirdC( tinP , TAG( TAGiDnULL ) ) ; ___( tinP.pAdamGlobal1->_thirdC_.pThLongLasting ) ;
        if( tinP.pAdamGlobal1->_thirdC_.pThLongLasting )
        {
            tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle      = new( 0 , tinP , LF ) switchC( tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_thirdC_.lOsPid                                               ) ;
            ___( tinP.pAdamGlobal1->_thirdC_.pSwProcessHandle      ) ; //U::MOVE THIS TO END OF PRECEDING LINE
            tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle       = new( 0 , tinP , LF ) switchC( tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_thirdC_.lOsTid                                               ) ; ___( tinP.pAdamGlobal1->_thirdC_.pSwThreadHandle       ) ;
            tinP.pAdamGlobal1->_thirdC_.pSwFileOpen           = new( 0 , tinP , LF ) switchC( tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_thirdC_.cLever_pSwFileOpen   , 0 , 0 , ifcIDgRABlAYER_aBASEmISC4  ) ; ___( tinP.pAdamGlobal1->_thirdC_.pSwFileOpen           ) ;
            tinP.pAdamGlobal1->_thirdC_.pSwKillSocket         = new( 0 , tinP , LF ) switchC( tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL ) , flSTACKc_null , tinP.pAdamGlobal1->_thirdC_.cLever_pSwKillSocket , 0 , sizeof( killSocketS ) ) ; ___( tinP.pAdamGlobal1->_thirdC_.pSwKillSocket         ) ;
            tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL )                                                                              ) ; ___( tinP.pAdamGlobal1->_thirdC_.pStkTasksWhenQuitting ) ;
            tinP.pAdamGlobal1->_thirdC_.pStk_pThird           = new( 0 , tinP , LF ) stackC(  tinP , *tinP.pAdamGlobal1->_thirdC_.pThLongLasting , TAG( TAGiDnULL )                                                                              ) ; ___( tinP.pAdamGlobal1->_thirdC_.pStk_pThird           ) ;
        }
    }
    tinP.flags |= flTINs_REGISTERED ; //U::CONJ: THIS IS NOT NEEDED NOW THAT pTinF IS USED
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36039* : 3func.36039002.thirdinitc.thirdinitc END
