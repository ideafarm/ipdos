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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e000e.sexc.bstateexistsif BEGIN
#define DDNAME       "3func.350e000e.sexc.bstateexistsif"
#define DDNUMB      (countT)0x350e000e
#define IDFILE      (countT)0xb39


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT sexC::bStateExistsIF( tinS& tinP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    ZE( boolT , bExists ) ;
    if( tinP.pEther )
    {
        TN( tMeta , "" ) ;
        TN( tData , "" ) ;
        ctFileNamesIF( tinP , tMeta , tData , postNameP , expCbDropP , expSlotsP , idStateSpaceP ) ;

        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        bExists =
            tinP.pEther->diskFileExistsF( tinP , tMeta ) &&
            tinP.pEther->diskFileExistsF( tinP , tData )
        ;

        //CONoUTrAW( T(bExists?"    found: ":"not found: ")+tData+T("\r\n") ) ;

        if( !bExists )
        {
            if( tinP.pEther->diskFileExistsF( tinP , tMeta ) ) tinP.pEther->diskFileOrDirDeleteF( tinP , tMeta ) ;
            if( tinP.pEther->diskFileExistsF( tinP , tData ) ) tinP.pEther->diskFileOrDirDeleteF( tinP , tData ) ;
        }
        THREADmODE1rESTORE
    }
    return bExists ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e000e.sexc.bstateexistsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e000f.sexc.ctfilenamesif BEGIN
#define DDNAME       "3func.350e000f.sexc.ctfilenamesif"
#define DDNUMB      (countT)0x350e000f
#define IDFILE      (countT)0xb3a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexC::ctFileNamesIF( tinS& tinP , textC& tMetaP , textC& tDataP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    TN( tDot , "." ) ;
    TN( tPrefix , "" ) ; tPrefix = T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/" ) ; tPrefix += TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+T(postNameP)+tDot ;
    TN( tSuffix , "" ) ; tSuffix = tDot+TF2(expCbDropP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+tDot+TF2(expSlotsP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;
    tMetaP = tPrefix+T("sexC.meta")+tSuffix ;
    tDataP = tPrefix+T("sexC.data")+tSuffix ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e000f.sexc.ctfilenamesif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e0010.sexc.ctfilenamelikeif BEGIN
#define DDNAME       "3func.350e0010.sexc.ctfilenamelikeif"
#define DDNUMB      (countT)0x350e0010
#define IDFILE      (countT)0xb3b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
sets tLikeP so that it will find any state file associated with postNameP
*/
/**/

/*1*/voidT sexC::ctFileNameLikeIF( tinS& tinP , textC& tLikeP , const osTextT* const postNameP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tLikeP =

        T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/")
        +TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")
        +T(postNameP)
        +T(".sexC.data.*")

    ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e0* : 3func.350e0010.sexc.ctfilenamelikeif END
