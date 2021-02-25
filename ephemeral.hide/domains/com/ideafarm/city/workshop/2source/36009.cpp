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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009002.signc.dt_signc BEGIN
#define DDNAME       "3func.36009002.signc.dt_signc"
#define DDNUMB      (countT)0x36009002
#define IDFILE      (countT)0xe9a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10b0002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.aa00104.1.1.0.html\"\>aa00104:  WAKEsHOW( "example.simplest.func.10b0002.signC.dt_signC" )\</A\>
*/
/**/
/*1*/signC::~signC( voidT )/*1*/
{
    inc02AM( cFunctionsPending ) ;
    {
        TINSL
        SCOOP

        _IO_

        {
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) ;
            {
                grabitC grabx( tinP , TAG( TAGiDnULL ) ) ;

                sleepC s( tinP , TAG( TAGiDnULL ) ) ;

                tinP.cYield = 0 ;
                ++ s ; thirdC::osThreadYieldIF( tinP , TAG( TAGiDnULL ) ) ; // HOPEFULLY PENDING CALLS ON OTHER THREADS WILL COMPLETE HERE
                tinP.cYield = 0 ;

                while( cFunctionsPending > 1 ) { ++ s ; thirdC::dosSleepRawIF( tinP , 0x100 ) ; }
            }
            THREADmODE1rESTORE ;
        }
    }
    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009002.signc.dt_signc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009003.signc.signc BEGIN
#define DDNAME       "3func.36009003.signc.signc"
#define DDNUMB      (countT)0x36009003
#define IDFILE      (countT)0xe9b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10b0003.1.0.html\"\>definition\</A\>
arguments
 thirdP
 postP: a name for the batonC object that i use
  can be 0
  if not 0, must be of the form T("any.name/with.slashes.and.dots")
   replace "com/domain" with your domain name (e.g. "com/chevrolet" or "edu/uchicago")
*/
/**/

/*1*/signC::signC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , const countT idGroupP , byteT* const pbForNapkinP )/*1*/ :
batonC
(
    tinP ,
    TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) ,
    postP ,
    idGroupP ,
    flBATONc_GRABBED | flBATONc_GRABBEDnEVERtID | flBATONc_ISsIGN | flBATONc_SHARElAYER
    ,
    pbForNapkinP
)
{
    IFbEcAREFUL
    {
        if( POOP ) { BLAMMO ; }
    }

    SCOOP
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009003.signc.signc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009004.signc.waitf BEGIN
#define DDNAME       "3func.36009004.signc.waitf"
#define DDNUMB      (countT)0x36009004
#define IDFILE      (countT)0xe9c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$waitF.0.html\"\>instances\</A\>
\<A HREF=\"5.10b0004.1.0.html\"\>definition\</A\>
waits for the sign to be given
impotence does not affect this function
*/
/**/

/*1*/voidT signC::waitF( tinS& tinP , const flagsT flagsP )/*1*/
{
    SCOOP
    FV( flSIGNcWAIT , flagsP )
    if( POOP ) { BLAMMO ; }

    inc02AM( cFunctionsPending ) ;

    _IO_

    if
    (
        grabF
        (
            tinP ,
            TAG( TAGiDnULL ) ,
            flGRABcGRABf_WITHDRAWkISSiF |
            (
                F(flagsP) & flSIGNcWAIT_CLEAR
                    ? flGRABcGRABf_CLEARkISSbANK
                    : flGRABcGRABf_null
            )
        )
    )
    ungrabF( tinP ) ;

    dec02AM( cFunctionsPending ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009004.signc.waitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009005.signc.givef BEGIN
#define DDNAME       "3func.36009005.signc.givef"
#define DDNUMB      (countT)0x36009005
#define IDFILE      (countT)0xe9d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$giveF.0.html\"\>instances\</A\>
\<A HREF=\"5.10b0005.1.0.html\"\>definition\</A\>
i can be called by multiple threads without serialization
guaranteed behavior
 default behavior
  all threads that are blocked waiting for the sign when i am called will be released exactly wo time
  these threads will be released serially, in the order in which they became blocked
  if no threads are blocked waiting, then the next thread to wait will be released immediately
 behavior if time is specified
  all threads that are blocked waiting when i am called will be released multiple times until the time expires
  all threads that begin to wait for the sign during the time interval will be appended to the list of threads being released multiple times
  when the time expires, all pending waits are released exactly 1 more time
 behavior if ifcIDmODEsIGNgIVE_ON _OFF is specified
  behavior is exactly as if FLASH was specified with a nonze time
  it is good style and legal to call me with _ON and never call me with _OFF
 coding style guide
  use FLASH with ze time whenever possible
  use FLASH with nonze time only when ze time does not give the required behavior
  use ON OFF only when FLASH does not give the required behavior
  use ON without OFF only when ON OFF does not give the required behavior
  these recommendations are motivated by the aesthetic of using the most restrictive code possible in order to maximize code readability
  these recommendations are not motivated by efficiency
  all modes are equally efficient
the calling thread must ensure that the signC is either given or destroyed before it ends
 it is illegal for a thread to end while it has posession of any grabC objects
 when a thread calls me, it momemtarily ungrabs a grabC object and then grabs it again
 a grabC object that is marked as grabbed by a thread that has ended is permanently ungrabbable
 this kind of code will work, but will cause exception notices to appear on the monitor displays
 it is for that reason that such code is illegal
any thread can call giveTakeF on a signC object
arguments
 tinP
 idModeP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00103a8.ifcIDmODEsIGNgIVE!||

*/
/**/

/*1*/voidT signC::giveF( tinS& tinP , const countT idModeP , const countT time1P , const sCountT time2P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        IV( ifcIDmODEsIGNgIVE , idModeP ) ;
        __( ( time1P || time2P ) && idModeP != ifcIDmODEsIGNgIVE_FLASH ) ;
        if( POOP ) return ;
    }

    inc02AM( cFunctionsPending ) ;

    _IO_
    switch( idModeP )
    {
        case ifcIDmODEsIGNgIVE_FLASH :
        {
            ZE( countT , idIn ) ;
            if( tinP.monitor.idThread == 7 )
            {
                static countT idInLath ;
                idIn = 1 + incv02AM( idInLath ) ;
                if( idIn == 4 )
                {
                    countT foo = 2 ;
                }
            }

            ZE( countT , idDesireSave ) ;
            if( !time1P && !time2P )
            {
                idDesireSave = thirdC::dosPriorityIF( tinP ) ;
                thirdC::dosPriorityIF( tinP , ifcTHREADpRIORITY_SPINLOCK ) ;
                pGrabA->osTidLockF() = tinP.osTid ; //CONJ: THIS HAS NO BEHAVIORAL EFFECT SO IS NOT NEEDED
                //LATER NOTE: TIDLOCK BLOCKS OTHER THREADS FROM BEGINNING THE GRAB RECIPE
                //MY TIDLOCK MEANS THAT MY FLASH CAN ONLY RELEASE OTHER THREADS THAT GOT INTO THE QUEUE BEFORE I LOCKED THE TID
                //IF NO OTHER THREADS HAVE DONE THIS THEN I WILL NOT RELEASE ANYWO (THIS SIMPLIFIES RACE ANALYSIS)
            }

            ungrabF( tinP , flGRABcUNGRABf_DEPOSITkISSiF ) ;

            if( time1P || time2P )
            {
                sleepC s( tinP, TAG( TAGiDnULL ) ) ;
                tinP.pEther->osSleepF( tinP , time1P , time2P ) ;
            }

            grabF( tinP , TAG( TAGiDnULL ) ) ;

            if( !time1P && !time2P )
            {
                pGrabA->osTidLockF() = 0 ;
                thirdC::dosPriorityIF( tinP , idDesireSave ) ;
            }

            break ;
        }
        case ifcIDmODEsIGNgIVE_ON :
        {
            ungrabF( tinP , flGRABcUNGRABf_DEPOSITkISSiF ) ;
            break ;
        }
        case ifcIDmODEsIGNgIVE_OFF :
        {
            grabF( tinP , TAG( TAGiDnULL ) ) ;
            break ;
        }
    }

    dec02AM( cFunctionsPending ) ; // RACE: THREAD THAT WAS WAITING FOR THE SIGN WILL RACE WITH ME TO INSPECT cFunctionsPending AS IT TRIES TO DESTROY *this
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009005.signc.givef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009006.signc.operator_countt BEGIN
#define DDNAME       "3func.36009006.signc.operator_countt"
#define DDNUMB      (countT)0x36009006
#define IDFILE      (countT)0xe9e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to the number of times i have been given
*/
/**/

/*1*/signC::operator countT( voidT )/*1*/
{
    return pGrabA->idGrabberOkF() - 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36009* : 3func.36009006.signc.operator_countt END
