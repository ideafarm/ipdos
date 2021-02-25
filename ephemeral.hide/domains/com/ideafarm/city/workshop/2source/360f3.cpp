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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f3* : 3func.360f3001.deposits.dt_deposits BEGIN
#define DDNAME       "3func.360f3001.deposits.dt_deposits"
#define DDNUMB      (countT)0x360f3001
#define IDFILE      (countT)0x144e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/depositS::~depositS( voidT )/*1*/
{
    TINSL

    IFsCRATCH
    {
        SCOOPS

        if( POOP ) { POOPR ; }

        if( F(flagsThis) & flDEPOSIT_SET )
        {
            socketC sock( tinP , *tinP.pEtScratch , TAG( TAGiDnULL ) ) ;
            sock.connectF( tinP , homeS::homeIF().idPortListMoneyBuckets ) ;
                    
            soulC sOut( tinP , TAG( TAGiDnULL ) ) ;
            sOut << (countT)FINGERnEG_LISTsERVERcMD ;
            sOut << (countT)1 ;
            sOut << (countT)ifcIDcMDlISTsERVERmONEYbUCKETS_PUT ;

            sOut << idAccBucketOwner ;
            sOut << idBucket ;
            sOut << idProduct ;
            sOut << idAccDepositor ;
            sOut << pczNote ;         //LEAST SIGNIFICANT -> MOST SIGNIFICANT
            sOut << timeT1 ;
            sOut << (countT)timeT2 ;
            sOut << idDeposit ;
            sOut << idAccCommission ;
            sOut << moneyT1 ;
            sOut << (countT)moneyT2 ;

            sock.writeF( tinP , sOut ) ;
                    
            soulC sIn( tinP , TAG( TAGiDnULL ) ) ;
            sock.readF( tinP , sIn ) ;
                    
            ZE( countT , finger ) ;
            sIn >> finger ;
            __( finger - FINGERnEG_LISTsERVERrEPLY ) ;
                    
            ZE( countT , idFormat ) ;
            sIn >> idFormat ;
            __( idFormat - 1 ) ;
                    
            ZE( boolT , bDone ) ;
            sIn >> bDone ;
            __Z( bDone ) ;
                    
            if( POOP ) { POOPR ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f3* : 3func.360f3001.deposits.dt_deposits END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f3* : 3func.360f3002.deposits.deposits BEGIN
#define DDNAME       "3func.360f3002.deposits.deposits"
#define DDNUMB      (countT)0x360f3002
#define IDFILE      (countT)0x144f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 timeT1P
 timeT2P
  must be obtained from osTimeNowUniqueF
  the same time stamp may be, and generally is, used on oo or more money bucket operations
  but these time stamps are assumed to identify the operations that comprise an exchange set
  the exchange set to which an operation belongs is identified by its time stamp
  for this to be reliable, the code that executes the exchange set must obtain a unique time value and use it to stamp all of the operations in the exchange set
  i enforce this requirement by inspecting the time value to verify that it was obtained from osTimeNowUniqueF
*/
/**/

/*1*/depositS::depositS( tinS& tinP , countT idAccBucketOwnerP , countT idBucketP , countT idProductP , countT idAccDepositorP , countT* pczNoteP , countT timeT1P , sCountT timeT2P , countT idDepositP , countT idAccCommissionP , countT moneyT1P , sCountT moneyT2P ) :/*1*/
flagsThis( flDEPOSIT_SET ) ,
idAccBucketOwner( idAccBucketOwnerP ) ,
idBucket( idBucketP ) ,
idProduct( idProductP ) ,
idAccDepositor( idAccDepositorP ) ,
pczNote( pczNoteP ) ,
timeT1( timeT1P ) ,
timeT2( timeT2P & ~BM_HIGH ) ,
idDeposit( idDepositP ) ,
idAccCommission( idAccCommissionP ) ,
moneyT1( moneyT1P ) ,
moneyT2( moneyT2P )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idAccBucketOwner ) ;
        __Z( idBucket ) ;
        __Z( idAccDepositor ) ;
        __Z( timeT2 ) ;
        __Z( idDeposit ) ;
        __( !moneyT1 && !moneyT2 ) ;
        __( !( timeT2P & BM_HIGH ) ) ; //timeT1P timeT2P MUST BE OBTAINED FROM etherC::osTimeNowUniqueF
        if( POOP ) return ;
    }

    _IO_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f3* : 3func.360f3002.deposits.deposits END
