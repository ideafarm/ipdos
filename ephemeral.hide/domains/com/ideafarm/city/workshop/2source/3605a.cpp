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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605a* : 3func.3605a001.tlsstackframelocations.dt_tlsstackframelocations BEGIN
#define DDNAME       "3func.3605a001.tlsstackframelocations.dt_tlsstackframelocations"
#define DDNUMB      (countT)0x3605a001
#define IDFILE      (countT)0x11c3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.17d0002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tlsStackFrameLocationS::~tlsStackFrameLocationS( voidT )/*1*/
{
    //LEAVE IT FOR LATE CODE (I DO NOT KNOW WHETHER THIS IS NEEDED, BUT I LIVE ON A DYING STACK SO LET IT BE THERE TILL THE STACK IS DEALLOCATED): fingerVerify = finger = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605a* : 3func.3605a001.tlsstackframelocations.dt_tlsstackframelocations END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605a* : 3func.3605a002.tlsstackframelocations.tlsstackframelocations BEGIN
#define DDNAME       "3func.3605a002.tlsstackframelocations.tlsstackframelocations"
#define DDNUMB      (countT)0x3605a002
#define IDFILE      (countT)0x11c4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.17d0003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tlsStackFrameLocationS::tlsStackFrameLocationS( voidT ) :/*1*/
zap_fingerVerify( (byteT*)&fingerVerify , sizeof fingerVerify , flZAP_DT ) ,
fingerVerify( 0 ) ,
finger( 0 ) ,
ebp( EBPiNVALIDvALUE ) , //RECOGNIZEABLE INVALID VALUE TO ASSIST IN DETECTING THAT I HAVE NOT BEEN SET
rc( 0 )
{
    putNegAM( fingerVerify , FINGERnEG_THREADlOCALsTORAGEvERIFY   ) ;
    putNegAM( finger       , FINGERnEG_THREADlOCALsTORAGElOCATION ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605a* : 3func.3605a002.tlsstackframelocations.tlsstackframelocations END
