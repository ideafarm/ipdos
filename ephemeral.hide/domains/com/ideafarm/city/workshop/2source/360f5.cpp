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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f5* : 3func.360f5001.buckettotalc.buckettotalc BEGIN
#define DDNAME       "3func.360f5001.buckettotalc.buckettotalc"
#define DDNUMB      (countT)0x360f5001
#define IDFILE      (countT)0x1451


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bucketTotalC::bucketTotalC( tinS& tinP , countT idAccBucketOwnerP , countT idBucketP , countT idProductP , countT idAccDepositorP , countT* pczNoteP , countT timeT1P , sCountT timeT2P , countT idAccCommissionP ) :/*1*/
moneyT1( 0 ) ,
moneyT2( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
        sock.connectF( tinP , homeS::homeIF().idPortListMoneyBuckets ) ;
                    
        soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
        sOut << (countT)FINGERnEG_LISTsERVERcMD ;
        sOut << (countT)1 ;
        sOut << (countT)ifcIDcMDlISTsERVERmONEYbUCKETS_GETtOTAL ;

        sOut << idAccBucketOwnerP ;
        sOut << idBucketP ;
        sOut << idProductP ;
        sOut << idAccDepositorP ;
        sOut << pczNoteP ;                       //LEAST SIGNIFICANT -> MOST SIGNIFICANT; CAN BE PARTIAL (HIGHEST SIGNIFICANCE MUST BE INCLUDED)
        sOut << timeT1P ;
        sOut << (countT)timeT2P ;
        sOut << idAccCommissionP ;

        sock.writeF( tinP , sOut ) ;
                    
        soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
        sock.readF( tinP , sIn ) ;
                    
        ZE( countT , finger ) ;
        sIn >> finger ;
        __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
                    
        ZE( countT , idFormat ) ;
        sIn >> idFormat ;
        __( idFormat - 1 ) ;
                    
        sIn >> moneyT1 ;
        sIn >> *(countT*)&moneyT2 ;

        ZE( boolT , bDone ) ;
        sIn >> bDone ;
        __Z( bDone ) ;
                    
        if( POOP ) { POOPR ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f5* : 3func.360f5001.buckettotalc.buckettotalc END
