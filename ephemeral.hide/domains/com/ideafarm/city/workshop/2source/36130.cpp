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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36130* : 3func.36130004.poolregistrations.poolregistrations BEGIN
#define DDNAME       "3func.36130004.poolregistrations.poolregistrations"
#define DDNUMB      (countT)0x36130004
#define IDFILE      (countT)0x1530


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/poolRegistrationS::poolRegistrationS( tinS& tinP ) :/*1*/
cRefPool( 0 ) ,
flagsi( fliPOOLrEGISTRATIONs_null )
{
    resetF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36130* : 3func.36130004.poolregistrations.poolregistrations END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36130* : 3func.36130005.poolregistrations.resetf BEGIN
#define DDNAME       "3func.36130005.poolregistrations.resetf"
#define DDNUMB      (countT)0x36130005
#define IDFILE      (countT)0x1531


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT poolRegistrationS::resetF( tinS& tinP )/*1*/
{
    thirdC::c_memsetIF( tinP ,         postPoolName        , sizeof postPoolName        ) ;
    thirdC::c_memsetIF( tinP ,         pbSexBitGrab        , sizeof pbSexBitGrab        ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcSexGrabberOsTid   , sizeof pcSexGrabberOsTid   ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcSexGrabberRecurse , sizeof pcSexGrabberRecurse ) ;
    thirdC::c_memsetIF( tinP ,         pbSex_cRef          , sizeof pbSex_cRef          ) ;
    thirdC::c_memsetIF( tinP ,         pbSex_cQueue        , sizeof pbSex_cQueue        ) ;
    thirdC::c_memsetIF( tinP ,         pbSexBitDataIsInPool  , sizeof pbSexBitDataIsInPool  ) ;
    thirdC::c_memsetIF( tinP ,         pbSexBitMetaIsInPool  , sizeof pbSexBitMetaIsInPool  ) ;
    thirdC::c_memsetIF( tinP ,         pbSexBitFormatting  , sizeof pbSexBitFormatting  ) ;
    thirdC::c_memsetIF( tinP ,         pbSexBitFormatted   , sizeof pbSexBitFormatted   ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36130* : 3func.36130005.poolregistrations.resetf END
