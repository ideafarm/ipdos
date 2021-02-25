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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7002.rangec.rangec BEGIN
#define DDNAME       "3func.360d7002.rangec.rangec"
#define DDNUMB      (countT)0x360d7002
#define IDFILE      (countT)0x13bc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/rangeC::rangeC( tinS& tinP , countT* const pcQueuedP , const flagsT flagsP ) :/*1*/
flags( flagsP ) ,
pcQueued( F(flagsP) & flRANGEc_POINTERSaREoFFSETS ? (countT*)( (byteT*)pcQueuedP - (byteT*)this ) : pcQueuedP ) ,
pOffOpenPeer( 0 ) ,
cOpen( 0 ) ,
cSlotsOpenLow( 0 ) ,
cSlotsOpenHigh( 0 ) ,
offOpen( 0 ) ,
offFree( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7002.rangec.rangec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7003.rangec.offopenf BEGIN
#define DDNAME       "3func.360d7003.rangec.offopenf"
#define DDNUMB      (countT)0x360d7003
#define IDFILE      (countT)0x13bd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const countT& rangeC::offOpenF( tinS& tinP ) const/*1*/
{
    return offOpen ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7003.rangec.offopenf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7004.rangec.poffopenpeerf BEGIN
#define DDNAME       "3func.360d7004.rangec.poffopenpeerf"
#define DDNUMB      (countT)0x360d7004
#define IDFILE      (countT)0x13be


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT rangeC::pOffOpenPeerF( tinS& tinP , const countT* const pOffOpenPeerP )/*1*/
{
    pOffOpenPeer = !pOffOpenPeerP
        ? 0
        : F(flags) & flRANGEc_POINTERSaREoFFSETS
            ? (const countT*)( (byteT*)pOffOpenPeerP - (byteT*)this )
            : pOffOpenPeerP
    ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7004.rangec.poffopenpeerf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7005.rangec.openf BEGIN
#define DDNAME       "3func.360d7005.rangec.openf"
#define DDNUMB      (countT)0x360d7005
#define IDFILE      (countT)0x13bf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT rangeC::openF( tinS& tinP , boolT& bAbortedP , const boolT& bQuitP , const countT cSlotsMinusWoP )/*1*/
{
    //CHATTERiF { CONoUTrAW( "[" ) ; }

    const countT cSlots = cSlotsMinusWoP + 1 ;
    inc02AM( cOpen ) ;
    for(;;)
    {
        const countT olds = cSlotsOpenLow ;
        const countT news = olds + cSlots ;
        if( olds == setIfEqualsAM( cSlotsOpenLow , news , olds ) )
        {
            if( news <= olds ) inc02AM( cSlotsOpenHigh ) ;
            break ;
        }
        //CHATTERiF { CONoUTrAW( "2" ) ; }
    }

    ZE( countT , offBegin ) ;
    for(;;)
    {
        //CHATTERiF { CONoUTrAW( "1" ) ; }
        offBegin = offFree ;
        const countT offEnd = offBegin + cSlotsMinusWoP + 1 ; //CANNOT WRAP TO A VALUE GREATER THAN offBegin BECAUSE cSlotsMinusWoPis <= ffffffff
        const boolT bWrap = offEnd <= offBegin ;

        boolT bContainsOpen = !bWrap
            ?
            (
                offBegin         <= offOpen
                &&
                offOpen          <  offEnd
            )
            :
            (
                offBegin         <= offOpen
                ||
                offOpen          <  offEnd
            )
        ;

        const countT* pOffOpenPeerUse = F(flags) & flRANGEc_POINTERSaREoFFSETS ? (const countT*)( (byteT*)this + (countT)pOffOpenPeer ) : pOffOpenPeer ;

        boolT bContainsOpenPeer = !bWrap
            ?
            (
                offBegin         <= *pOffOpenPeerUse
                &&
                *pOffOpenPeerUse <  offEnd
            )
            :
            (
                offBegin         <= *pOffOpenPeerUse
                ||
                *pOffOpenPeerUse <  offEnd
            )
        ;

        if( bContainsOpen && offBegin == offOpen ) bContainsOpen = 0 ;

        if( bContainsOpenPeer )
        {
            countT* pcQueuedUse = F(flags) & flRANGEc_POINTERSaREoFFSETS ? (countT*)( (byteT*)this + (countT)pcQueued ) : pcQueued ;

            if( ( F(flags) & flRANGEc_CONSUMER ) )
            {
                if(  pcQueuedUse &&  *pcQueuedUse ) bContainsOpenPeer = 0 ; //CONSUMER WILL SLEEP UNTIL PRODUCER CLOSES
            }
            else
            {
                if( !pcQueuedUse || !*pcQueuedUse ) bContainsOpenPeer = 0 ; //PRODUCER WILL PROCEED IF ALL THAT IT HAS WRITTEN HAS BEEN CONSUMED
            }
        }

        if( bContainsOpen || bContainsOpenPeer )
        {
            if( !bQuitP )
            {
                //static countT idThreadChatter ;
                //if
                //(
                //    tinP.pc Utility[ 0 ] ||
                //    (
                //        etherC::ether_cUtility_IF( tinP ) &&
                //        (
                //            !setIfZeAM( idThreadChatter , tinP.monitor.idThread ) ||
                //            idThreadChatter == tinP.monitor.idThread
                //        )
                //    )
                //)

                //CHATTERiF
                //{
                //    CONoUTrAW
                //    (
                //        bContainsOpen && bContainsOpenPeer
                //            ? "&"
                //            : bContainsOpen
                //                ? "i"
                //                : "o"
                //    ) ;
                //
                //    if( bContainsOpen )
                //    {
                //        CONoUTrAW5( "[idThread,cOpen]: " , tinP.monitor.idThread , " " , cOpen , "\r\n" ) ;
                //    }
                //
                //    //if( bContainsOpen )
                //    //{
                //    //    //CONoUTrAW9( " cSlots:" , cSlotsMinusWoP + 1 , " begin:" , offBegin , " open:" , offOpen , " end:" , offEnd , "\r\n" ) ;
                //    //
                //    //}
                //}

                //if( !( F(flags) & flRANGEc_CONSUMER ) ) { CONoUTrAW( "+" ) ; }
                thirdC::dosSleepWinkIF( tinP ) ;
            }
            else
            {
                offBegin = 0 ;
                bAbortedP = 1 ;

                for(;;)
                {
                    const countT olds = cSlotsOpenLow ;
                    const countT news = olds - cSlots ;
                    if( olds == setIfEqualsAM( cSlotsOpenLow , news , olds ) )
                    {
                        if( news >= olds ) inc02AM( cSlotsOpenHigh ) ;
                        break ;
                    }
                }
                dec02AM( cOpen ) ;

                break ;
            }
        }
        else if( offBegin == setIfEqualsAM( offFree , offEnd , offBegin ) ) break ;
        //CHATTERiF { CONoUTrAW( "0" ) ; }
    }

    //CHATTERiF { CONoUTrAW( "]" ) ; }

    return offBegin ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7005.rangec.openf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7006.rangec.closef BEGIN
#define DDNAME       "3func.360d7006.rangec.closef"
#define DDNUMB      (countT)0x360d7006
#define IDFILE      (countT)0x13c0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT rangeC::closeF( tinS& tinP , const countT offBeginP , const countT cSlotsMinusWoP , countT cQueuedP )/*1*/
{
    //CHATTERiF { CONoUTrAW( "(" ) ; }

    const countT cSlots = cSlotsMinusWoP + 1 ;
    const countT offEnd = offBeginP + cSlots ;

    for(;;)
    {
        if( offBeginP == setIfEqualsAM( offOpen , offEnd , offBeginP ) ) break ;
        if( !( F(flags) & flRANGEc_CONSUMER ) ) { CONoUTrAW( "-" ) ; }
        thirdC::dosSleepWinkIF( tinP ) ;
    }

    countT* pcQueuedUse = F(flags) & flRANGEc_POINTERSaREoFFSETS ? (countT*)( (byteT*)this + (countT)pcQueued ) : pcQueued ;

    if( ( F(flags) & flRANGEc_CONSUMER ) ) dec02AM( *pcQueuedUse ) ;
    else                                   while( cQueuedP -- ) inc02AM( *pcQueuedUse ) ; //SUPPORTS LENGTH PREFIXED AND VARYING LENGTH ATOMIC WRITES THAT WILL NEED TO BE READ USING MULTIPLE READS

    for(;;)
    {
        const countT olds = cSlotsOpenLow ;
        const countT news = olds - cSlots ;
        if( olds == setIfEqualsAM( cSlotsOpenLow , news , olds ) )
        {
            if( news >= olds ) dec02AM( cSlotsOpenHigh ) ;
            break ;
        }
    }
    dec02AM( cOpen ) ;

    //CHATTERiF { CONoUTrAW( ")" ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360d7* : 3func.360d7006.rangec.closef END
