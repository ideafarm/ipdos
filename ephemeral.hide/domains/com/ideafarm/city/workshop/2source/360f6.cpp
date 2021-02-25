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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f6* : 3func.360f6001.bucketdetailc.dt_bucketdetailc BEGIN
#define DDNAME       "3func.360f6001.bucketdetailc.dt_bucketdetailc"
#define DDNUMB      (countT)0x360f6001
#define IDFILE      (countT)0x1452


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bucketDetailC::~bucketDetailC( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( cDeposits && ppDetail )
    {
        for( countT offd = 0 ; offd < cDeposits ; offd ++ ) DEL( ppDetail[ offd ] ) ;
        PUSE( tinP , *(byteT**)&ppDetail ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f6* : 3func.360f6001.bucketdetailc.dt_bucketdetailc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f6* : 3func.360f6002.bucketdetailc.bucketdetailc BEGIN
#define DDNAME       "3func.360f6002.bucketdetailc.bucketdetailc"
#define DDNUMB      (countT)0x360f6002
#define IDFILE      (countT)0x1453


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bucketDetailC::bucketDetailC( tinS& tinP , countT idAccBucketOwnerP , countT idBucketP , countT idProductP , countT idAccDepositorP , countT* pczNoteP , countT timeT1P , sCountT timeT2P , countT idAccCommissionP ) :/*1*/
cDeposits( 0 ) ,
ppDetail( 0 )
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
        sOut << (countT)ifcIDcMDlISTsERVERmONEYbUCKETS_GETdETAIL ;

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

        sIn >> cDeposits ;

        if( cDeposits )
        {
            const countT cbaa = sizeof( countT ) * cDeposits ;
            PUSE.newF( tinP , LF , *(byteT**)&ppDetail , cbaa ) ; ___( ppDetail ) ;
            if( ppDetail )
            {
                thirdC::c_memsetIF( tinP , (byteT*)ppDetail , cbaa ) ;

                for( countT offo = 0 ; offo < cDeposits ; offo ++ )
                {
                    ppDetail[ offo ] = new( 0 , tinP , LF ) depositDetailS( tinP ) ; ___( ppDetail[ offo ] ) ;
                    if( ppDetail[ offo ] )
                    {
                        sIn >>            ppDetail[ offo ]->moneyT1                       ;
                        sIn >> *(countT*)&ppDetail[ offo ]->moneyT2                       ;
                        sIn >>            ppDetail[ offo ]->idCommission                  ;
                        sIn >>            ppDetail[ offo ]->idDeposit                     ;
                        sIn >>            ppDetail[ offo ]->timeT1                        ;
                        sIn >> *(countT*)&ppDetail[ offo ]->timeT2                        ;
                        sIn >>            ppDetail[ offo ]->pczNote                       ; ___( ppDetail[ offo ]->pczNote ) ;
                        sIn >>            ppDetail[ offo ]->idAccDepositor                ;
                        sIn >>            ppDetail[ offo ]->idProduct                     ;
                        sIn >>            ppDetail[ offo ]->idBucket                      ;
                        sIn >>            ppDetail[ offo ]->idAccBucketOwner              ;

                        //CONoUTrAW3( "bucketDetailC::bucketDetailC [idProduct]: " , ppDetail[ offo ]->idProduct , "\r\n" ) ; //U::
                    }
                }
            }
        }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f6* : 3func.360f6002.bucketdetailc.bucketdetailc END
