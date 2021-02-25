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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612f* : 3func.3612f004.dropnotes.glassf BEGIN
#define DDNAME       "3func.3612f004.dropnotes.glassf"
#define DDNUMB      (countT)0x3612f004
#define IDFILE      (countT)0x152f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT dropNoteS::glassF( tinS& tinP , strokeS*& psttP ) const/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( tinP.pEther ) ;
        __NZ( psttP ) ;
        if( POOP ) return ;
    }

    countT costMaxType = processGlobal3I.mapdropNoteType.costMaxF() ;
    const osTextT* postType = processGlobal3I.mapdropNoteType( idType ) ;

                   tinP.pEther->strMakeF( tinP , LF , psttP , T("dropNoteS [idNewLath,idDelLath,idType,cbRequested,cbUsedReally,idAdam,idLineTagged,idiFileTagged,idLineTagged2,idiFileTagged2,flagsMonitor,idThreadNew,idThreadDel,idNewForTagLine]: ") , costMaxType + ( TUCK << 1 ) ) ; ___( psttP ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idNewLath      ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idDelLath      ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;

                   tinP.pEther->strFuseF( tinP , psttP , T(idNewLath>idDelLath?"* ":"  ") ) ; // THIS DROP IS IN USE

    if( postType ) tinP.pEther->strFuseF( tinP , psttP , TP(postType,costMaxType+1) ) ;
    else           tinP.pEther->strFuseF( tinP , psttP , TF3(idType         ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,costMaxType+1) ) ;

                   tinP.pEther->strFuseF( tinP , psttP , TF3(cbRequested    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(cbUsedReally   ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idAdam         ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idLineTagged   ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idiFileTagged  ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idLineTagged2  ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idiFileTagged2 ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(flagsMonitor   ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idThreadNew    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idThreadDel    ,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
                   tinP.pEther->strFuseF( tinP , psttP , TF3(idNewForTagLine,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES,9) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612f* : 3func.3612f004.dropnotes.glassf END
