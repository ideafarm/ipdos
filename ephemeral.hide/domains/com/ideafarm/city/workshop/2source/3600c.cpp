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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600c* : 3func.3600c001.tasks.tasks BEGIN
#define DDNAME       "3func.3600c001.tasks.tasks"
#define DDNUMB      (countT)0x3600c001
#define IDFILE      (countT)0xea3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10e0001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
pSgnDoneP: a sign that should be given when this object is destroyed
 can be ze
c1P ... c8P: arbitrary values
 normally, these are values specified during the launch of a "thread" (task)
 they can be ze
arguments
 tinP
  must be not 0
  a reference to this will be visible to the kid thread
  tinP must exist until the kid thread has ended
  this implies that a thread cannot end until all of its kid threads have ended
 tmFP
 pSgnDoneP
 cbStackP
 flagsP
 c1P
 c2P
 c3P
 c4P
 c5P
 c6P
 c7P
 c8P
 c9P
 caP
 cbP
 ccP
 cdP
 ceP
 cfP
 c01P
*/
/**/

/*1*/taskS::taskS( tinS& tinP , voidT* const tmFP , signC* pSgnDoneP , const countT cbStackP , const flagsT flagsP , countT c1P , countT c2P , countT c3P , countT c4P , countT c5P , countT c6P , countT c7P , countT c8P , countT c9P , countT caP , countT cbP , countT ccP , countT cdP , countT ceP , countT cfP , countT c01P )/*1*/ :
idThread( 1 + incv02AM( processGlobal1I._taskS_idThreadLath ) ) ,                                                                                                                                                                    
third( thirdC::thPrimeIF( tinP ) ) ,                                                                                                                                                                                                 
tmF( tmFP ) ,                                                                                                                                                                                                                        
pSgnDone( pSgnDoneP ) ,                                                                                                                                                                                                              
cbStack( cbStackP ) ,                                                                                                                                                                                                                
flags( flagsP ) ,                                                                                                                                                                                                                    
pTinDad( F(flagsP) & flTHREADlAUNCH_ORPHAN ? 0 : &tinP ) ,                                                                                                                                                                           
flagsThreadMode1Dad( tinP.flagsThreadMode1 ) ,
c1(  c1P  ) ,
c2(  c2P  ) ,
c3(  c3P  ) ,
c4(  c4P  ) ,
c5(  c5P  ) ,
c6(  c6P  ) ,
c7(  c7P  ) ,
c8(  c8P  ) ,
c9(  c9P  ) ,
ca(  caP  ) ,
cb(  cbP  ) ,
cc(  ccP  ) ,
cd(  cdP  ) ,
ce(  ceP  ) ,
cf(  cfP  ) ,
c01( c01P )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600c* : 3func.3600c001.tasks.tasks END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600c* : 3func.3600c002.tasks.dt_tasks BEGIN
#define DDNAME       "3func.3600c002.tasks.dt_tasks"
#define DDNUMB      (countT)0x3600c002
#define IDFILE      (countT)0xea4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.10e0002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
if a sign was specified during construction, it is given now
for maximum speed, this destructor contains no overhead code
*/
/**/

/*1*/taskS::~taskS( voidT )/*1*/
{
    if( pSgnDone )
    {
        TINSL
        pSgnDone->giveF( tinP , ifcIDmODEsIGNgIVE_ON ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3600c* : 3func.3600c002.tasks.dt_tasks END
