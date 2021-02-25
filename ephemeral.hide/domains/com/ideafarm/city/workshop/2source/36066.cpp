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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36066* : 3func.36066001.threadcheckc.dt_threadcheckc BEGIN
#define DDNAME       "3func.36066001.threadcheckc.dt_threadcheckc"
#define DDNUMB      (countT)0x36066001
#define IDFILE      (countT)0x11f9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/threadCheckC::~threadCheckC( voidT )/*1*/
{
//    TINSL
//    if( pcIdThread )
//    {
//        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
//        for(;;)
//        {
//            grabF( tinP , tinP.cGrab_pTinKid , tinP.idDesire_cGrab_pTinKid ) ;
//        
//            tinS* pCursor = tinP.pTinKid ;
//            while( pCursor )
//            {
//                countT* pcc = pcIdThread ;
//                while( *pcc && *pcc != pCursor->idThread ) pcc ++ ;
//                if( !*pcc ) break ; //IF NOT FOUND
//                pCursor = pCursor->pTinBro ;
//            }
//            // pCursor IS EITHER 0 OR POINTS TO A tinS THAT IS NOT REGISTERED
//        
//            ungrabF( tinP , tinP.cGrab_pTinKid , tinP.idDesire_cGrab_pTinKid ) ;
//
//            if( pCursor )
//            {
//                BOSnOvALUE( WHATsn , OS sLEEPf( 100 ) ) //U::
//            }
//            //U::if( pCursor ) { ++ s ; thirdC::dosSleepWinkIF( tinP ) ; }
//            else          break ;
//        }
//
//        PUSE( tinP , *(byteT**)&pcIdThread ) ;
//    }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36066* : 3func.36066001.threadcheckc.dt_threadcheckc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36066* : 3func.36066002.threadcheckc.threadcheckc BEGIN
#define DDNAME       "3func.36066002.threadcheckc.threadcheckc"
#define DDNUMB      (countT)0x36066002
#define IDFILE      (countT)0x11fa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/threadCheckC::threadCheckC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
pcIdThread( 0 )
{
//    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
//    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
//
//    if( tinP.pEther )
//    {
//        grabF( tinP , tinP.cGrab_pTinKid , tinP.idDesire_cGrab_pTinKid ) ;
//    
//        ZE( countT , cKids ) ;
//        tinS* pCursor = tinP.pTinKid ;
//        while( pCursor )
//        {
//            cKids ++ ;
//            pCursor = pCursor->pTinBro ;
//        }
//    
//        tinP.pEther->newF( tinP , LF , pcIdThread , cKids + 1 ) ; ___( pcIdThread ) ;
//        if( pcIdThread )
//        {
//            countT* pco = pcIdThread ;
//            pCursor = tinP.pTinKid ;
//            while( pCursor )
//            {
//                *pco = pCursor->idThread ;
//                pco ++ ;
//                pCursor = pCursor->pTinBro ;
//            }
//            *pco = 0 ;
//        }
//    
//        ungrabF( tinP , tinP.cGrab_pTinKid , tinP.idDesire_cGrab_pTinKid ) ;
//    }
    if( tinP.fingerprint && pbBitsCtP ) ; //U::
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36066* : 3func.36066002.threadcheckc.threadcheckc END
