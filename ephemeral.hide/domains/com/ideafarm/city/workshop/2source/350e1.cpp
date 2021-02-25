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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e1* : 3func.350e100b.slotsc.bstateexistsif BEGIN
#define DDNAME       "3func.350e100b.slotsc.bstateexistsif"
#define DDNUMB      (countT)0x350e100b
#define IDFILE      (countT)0xb3c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT slotsC::bStateExistsIF( tinS& tinP , const osTextT* const postNameP , const countT expCbDropP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    ZE( boolT , bExists ) ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
    boolT bStateExists = !idStateSpaceP
        ? 0
        : tinP.pEther->diskFileExistsF( tinP , T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/")+TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")+T(postNameP)+T(".slotsC.sex.*") )
    ;
    THREADmODE1rESTORE

    if( bStateExists ) for( countT offs = 0 ; !bExists && offs < CsLOTeXTENTS ; offs ++ )
    {
        OStEXT(   ostoName , TUCK << 2 )
        OStEXTA(  ostoName , postNameP ) ;
        OStEXTAK( ostoName , ".slotsC.sex." ) ;
        OStEXTCF( ostoName , offs , '0' ) ;
            
        bExists = sexC::bStateExistsIF( tinP , ostoName , expCbDropP , offs , idStateSpaceP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e1* : 3func.350e100b.slotsc.bstateexistsif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e1* : 3func.350e100c.slotsc.ctfilenamelikeif BEGIN
#define DDNAME       "3func.350e100c.slotsc.ctfilenamelikeif"
#define DDNUMB      (countT)0x350e100c
#define IDFILE      (countT)0xb3d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT slotsC::ctFileNameLikeIF( tinS& tinP , textC& tLikeP , const osTextT* const postNameP , const countT idStateSpaceP )/*1*/
{
    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    tLikeP =

        T("///ideafarm/ephemeral/backed.up.daily/domains/com/ideafarm/ipdos/memorySpaces/")+T(thirdC::postUserNameIF())+T("/")+TF2(tinP.pAdamGlobal1->idMemorySpace,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/stateSpaces/")
        +TF2(idStateSpaceP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("/")
        +T(postNameP)
        +T(".slotsC.sex.*")

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e1* : 3func.350e100c.slotsc.ctfilenamelikeif END
