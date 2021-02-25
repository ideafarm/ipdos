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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35128* : 3func.35128006.branchs.unjumpifif BEGIN
#define DDNAME       "3func.35128006.branchs.unjumpifif"
#define DDNUMB      (countT)0x35128006
#define IDFILE      (countT)0xb6c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT branchS::unJumpIfIF( tinS& tinP , countT& jbrP , stackC& stJumpP )/*1*/
{
    ZE( countT , cJumped ) ;
    while( stJumpP && (&(countT&)stJumpP[1])[ 1 ] == jbrP )
    {
        cJumped ++ ;
        countT pc2[] = { 0 , 0 } ;
        byteT* pbRef = (byteT*)pc2 ;
        stJumpP >> pbRef ;
        jbrP = pc2[ 0 ] ;

        //CONoUTrAW5( "unjump [0,1]: " , pc2[ 0 ] , " " , pc2[ 1 ] , "\r\n" ) ;
    }

    return cJumped ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35128* : 3func.35128006.branchs.unjumpifif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35128* : 3func.35128007.branchs.jumpifif BEGIN
#define DDNAME       "3func.35128007.branchs.jumpifif"
#define DDNUMB      (countT)0x35128007
#define IDFILE      (countT)0xb6d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT branchS::jumpIfIF( tinS& tinP , countT& jbrP , stackC& stJumpP , textC& tRefHtmlIdP )/*1*/
{
    ZE( countT , cJumped ) ;
    const countT jLoop = jbrP ;

    ZE( countT , idTypeNow ) ;
    ZE( countT , valueNow ) ;
    {
        BSP( br , jbrP ) ;
        idTypeNow = B(br).idType ;
        valueNow  = B(br).value ;
    }

    while( idTypeNow == ifcIDtYPEbRANCHs_branchSptr )
    {
        {
            BSP( br , jbrP ) ;
            if( B(br).psttRefHtmlId ) tRefHtmlIdP = T(B(br).psttRefHtmlId) ; //STICKY: WILL USE THE LATH ID SEEN ; NO SPECIFIC REASON TO DO THIS ; THIS MIGHT INVITE BAD (TRICKY) KT STYLE, BUT I'LL LEAVE IT BECAUSE IT MIGHT TURN OUT TO BE A COOL FEATURE ; DANGER: THE ID THAT IS APPLIED MIGHT POSITION THE LEAF PAGE IN AN UNDESIRABLE PLACE SINCE THE CODED ID WAS CODED TO APPLY TO ANOTHER BRANCH
        }

        cJumped ++ ;
        //etherC::etRockIF( tinP ).traceF( tinP , T("jumpIfIF + [jbrP,cJumped,jLoop,value]:    ")+TF2(jbrP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cJumped,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jLoop,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(valueNow,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;

        if( jLoop == valueNow )
        {
            etherC::etRockIF( tinP ).traceF( tinP , T("jumpIfIF [cJumped]: loop detected") ) ;
            jbrP = 0 ;
            break ;
        }

        countT pc2[] = { jbrP , valueNow } ;
        byteT* pbRef = (byteT*)pc2 ;
        stJumpP << pbRef ;

        jbrP = valueNow ;

        if( !jbrP )                                          //20180420@0954:  ADDED WITHOUT ANALYSIS TO HANDLE !jHe WHEN etherSoilF PROCESSES A KT WITH AN INTENTIONAL MISSING LABEL
        {
             etherC::etRockIF( tinP ).traceF( tinP , T("branchS::jumpIfIF: error: following a branch pointer led nowhere") ) ;
             idTypeNow = 0 ;
        }
        else
        {
            BSP( br , jbrP ) ;
            idTypeNow = B(br).idType ;
            valueNow  = B(br).value ;
        }

        //etherC::etRockIF( tinP ).traceF( tinP , T("jumpIfIF - [jbrP,cJumped,jLoop,value]:    ")+TF2(jbrP,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(cJumped,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(jLoop,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("    ")+TF2(valueNow,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ) ;
    }

    return cJumped ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35128* : 3func.35128007.branchs.jumpifif END
