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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36110* : 3func.36110002.cleanc.dt_cleanc BEGIN
#define DDNAME       "3func.36110002.cleanc.dt_cleanc"
#define DDNUMB      (countT)0x36110002
#define IDFILE      (countT)0x14b2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/cleanC::~cleanC( voidT )/*1*/
{
    if( getNegAM( finger ) != FINGERnEG_CLEANc ) { BLAMMO ; }

    tinS* pTin = pTinF() ; //WILL BE 0 FOR ~tinS FOR tinVeryVeryEarlyLateMainI
    if( pTin )
    {
        tinS& tinP = *pTin ;

        cleanC* pc = this ;
        //CONoUTrAW7( "~cleanC / validating chain [idThread,this,pc]: " , tinP.monitor.idThread , " " , this , " " , pc , "\r\n" ) ;
        while( pc )
        {
            //CONoUTrAW7( "                           [idThread,this,pc]: " , tinP.monitor.idThread , " " , this , " " , pc , "\r\n" ) ;
            pc = pc->pD ;
        }

        //20141122@0824: THIS BLAMMO OCCURRED WITHIN PISS (ADAM 651_) DURING EXCEPTION PROCESSING OF A READ ACCESS VIOLATION
        //20141210@0639: THIS BLAMMO OCCURRED WITHIN PISS (ADAM 651_) DURING EXCEPTION PROCESSING OF A READ ACCESS VIOLATION
        //20141210@0642: THIS BLAMMO OCCURRED WITHIN PISS (ADAM 651_) DURING EXCEPTION PROCESSING OF A READ ACCESS VIOLATION
        //20141210@0645: THIS BLAMMO OCCURRED WITHIN PISS (ADAM 651_) DURING EXCEPTION PROCESSING OF A READ ACCESS VIOLATION
        //20160515@0857: WITHIN PISS tmObeySoilF (NOT VERIFIED NOT ANALYZED)

        pTin->pClean = pTin->pClean == this
            ? pD
            : 0        // 20171003@1214: UNTIL NOW, CODE BLAMMO'D HERE, FOR REASONS NOT CLEAR.  TO WORK AROUND THIS, I NOW JUST SILENTLY SET TO 0 AND LET THE RESTART HANDLER WORRY ABOUT THIS MYSTERY
        ;

        // HERE ARE THE HISTORY COMMENTS:
        //
        // 20121104: THIS WILL BLAMMO IF AllocConsole() IS USED BY A GRAPHICS ADAM TO GET A CONSOLE WINDOW AND THEN "Close All Windows" IS CLICKED BY THE USER
        // THIS OCCURS BECAUSE THE BASE OPERATING SYSTEM APPARENTLY KILLS THE PROCESS WITHOUT CALLING THE CONSOLE HANDLER OR IN ANY OTHER WAY GIVING APPLICATION CODE A CHANCE TO TERMINATE NORMALLY
        // THIS RESULTS IN EXECUTION JUMPING TO THE COMPILER ROUTINE THAT DESTROYS STATIC GLOBALS ; I BLAMMO BECAUSE I AM THE BASE OF tinBreak BUT THE WRONG tinP (tinInPoolMain) IS STILL REGISTERED FOR THE THREAD BECAUSE APPLICATION CODE NEVER HAD A CHANCE TO DT IT
        // THIS PROBLEM ONLY OCCURS DURING DEBUGGING BECAUSE CURRENTLY AllocConsole() IS ONLY INVOKED FOR GRAPHICS ADAMS IN ORDER TO DEBUG THEM
        // IN PRODUCTION, GRAPHICS ADAMS NEVER HAVE CONSOLES
        // IT WOULD BE COOL TO BE ABLE TO DEPLOY SUCH ADAMS, BUT NO CAN DO, BECAUSE... WINDOZE SUCKS IN SO MANY WAYS!
        // DECISION: DO NOT ATTEMPT TO EDIT IPDOS CODE TO HANDLE SUCH A JUMP
    }

    putNegAM( *(countT*)&finger , FINGERnEG_CLEANczOMBIE ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36110* : 3func.36110002.cleanc.dt_cleanc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36110* : 3func.36110003.cleanc.cleanc BEGIN
#define DDNAME       "3func.36110003.cleanc.cleanc"
#define DDNUMB      (countT)0x36110003
#define IDFILE      (countT)0x14b3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/cleanC::cleanC( tinS& tinP ) :/*1*/
finger( 0 ) ,
pD( this == (cleanC*)&tinP ? 0 : tinP.pClean ) //A:ASSUME: cleanC IS THE WOTH BASE CLASS OF tinS AND tinS HAS NO COMPILER GENERATED MEMBERS AHEAD OF ME ; I AM ENSURING THAT pD GETS INITIALIZED WHEN THE tinS INSTANCE OF WHICH I AM PART IS GIVEN SELF (NOT ELDER) AS A PARAMETER
{
    //ENSURE THAT INSTANCES ARE ON THE THREAD STACK ; RESTART CODE ASSUMES THAT cleanC INSTANCES THAT ARE TO BE CONSIDERED FOR RESTART CLEANUP ARE ON THE THREAD STACK ; IF APPLICATION CODE ALLOCATES INSTANCES ELSEWHERE, THE ERROR CHECKING CODE FOR RESTART CAN BE BROKEN
    //THERE IS NOTHING PREVENTING OTHER SYSTEM INSTANCES FROM BEING LISTED HERE AFTER VERIFYING THAT THE EXISTENCE OF SUCH A NONCONFORMING INSTANCE WILL NOT BREAK RESTART ERROR CHECKING CODE

    //20171003@1303: THIS CODE DOES NOT WORK.  (this IS NOT BETWEEN ebpMe AND ebpCaller FOR THE WOTH INSTANCE CT ON THE STACK.)  RESTART CODE APPEARS TO NO LONGER ASSUME tinS INSTANCES ARE ON STACK
    //if( thirdC::third_idPhaseProcess_IF() >= ifcIDpHASEpROCESS_PROLOGaLLgLOBALScONSTRUCTED && thirdC::third_idPhaseProcess_IF() < ifcIDpHASEpROCESS_EPILOGdESTROYINGgLOBALS )
    //{
    //    countT ebpMe     = ebpAM() ;
    //    countT ebpCaller = *(countT*)ebpMe ;
    //    if( (countT)this < ebpMe || ebpCaller < (countT)this )
    //    {
    //        conGF( "cleanC: error: cleanC objects must be ct on the thread stack\r\n" ) ;
    //        logGF( "cleanC: error: cleanC objects must be ct on the thread stack\r\n" ) ;
    //        BLAMMO ;
    //    }
    //}

    putNegAM( *(countT*)&finger , FINGERnEG_CLEANc ) ;

    tinP.pClean = this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36110* : 3func.36110003.cleanc.cleanc END
