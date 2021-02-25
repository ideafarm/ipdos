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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e200d.poolc.pdropnoteif BEGIN
#define DDNAME       "3func.350e200d.poolc.pdropnoteif"
#define DDNUMB      (countT)0x350e200d
#define IDFILE      (countT)0xb3e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

#if defined( ENABLEdROPnOTES )

    /*1*/dropNoteS* poolC::pDropNoteIF( tinS& tinP , const byteT* const pbP )/*1*/
    {
        _IO_
        ZE( dropNoteS* , pNote ) ;
        processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;
        poolC* pCursor = processGlobal1I._poolC_pPool ;
        while( !pNote && pCursor )
        {
            if( !( F(pCursor->guts.flagsCt) & flPOOLc_READoNLY ) ) pNote = pCursor->pDropNoteF( tinP , pbP ) ;
            pCursor = pCursor->pNext ;
        }
        processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
        return pNote ;
    }

#endif


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e200d.poolc.pdropnoteif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2011.poolc.ppoolif BEGIN
#define DDNAME       "3func.350e2011.poolc.ppoolif"
#define DDNUMB      (countT)0x350e2011
#define IDFILE      (countT)0xb3f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/poolC* poolC::pPoolIF( tinS& tinP , const byteT* const pbP )/*1*/
{
    _IO_
    ZE( poolC* , pPool ) ;
    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;
    poolC* pCursor = processGlobal1I._poolC_pPool ;
    while( !pPool && pCursor )
    {
        if( /*!( F(pCursor->guts.flagsCt) & flPOOLc_READoNLY ) &&*/ (*pCursor)[ pbP ] ) pPool = pCursor ;
        pCursor = pCursor->pNext ;
    }
    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
    return pPool ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2011.poolc.ppoolif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2012.poolc.ppoolfromnameif BEGIN
#define DDNAME       "3func.350e2012.poolc.ppoolfromnameif"
#define DDNUMB      (countT)0x350e2012
#define IDFILE      (countT)0xb40


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/poolC* poolC::pPoolFromNameIF( tinS& tinP , const osTextT* const postP )/*1*/
{
    _IO_
    ZE( poolC* , pPool ) ;
    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;
    poolC* pCursor = processGlobal1I._poolC_pPool ;
    while( !pPool && pCursor )
    {
        if( !thirdC::c_strcmpIF( tinP , postP , pCursor->postNameF( tinP ) ) ) pPool = pCursor ;
        else                                                                           pCursor = pCursor->pNext ;
    }
    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
    return pPool ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2012.poolc.ppoolfromnameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2015.poolc.reportif BEGIN
#define DDNAME       "3func.350e2015.poolc.reportif"
#define DDNUMB      (countT)0x350e2015
#define IDFILE      (countT)0xb41


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::reportIF( tinS& tinP , const countT*& pczLeverP , switchC& swTallyP )/*1*/
{
    _IO_

    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;
    poolC* pCursor = processGlobal1I._poolC_pPool ;
    while( pCursor )
    {
        pCursor->reportF( tinP , pczLeverP , swTallyP ) ;
        pCursor = pCursor->pNext ;
    }
    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2015.poolc.reportif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2017.poolc.reportif BEGIN
#define DDNAME       "3func.350e2017.poolc.reportif"
#define DDNUMB      (countT)0x350e2017
#define IDFILE      (countT)0xb42


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::reportIF( tinS& tinP )/*1*/
{
    _IO_

    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;
    poolC* pCursor = processGlobal1I._poolC_pPool ;
    while( pCursor )
    {
        pCursor->reportF( tinP ) ;
        pCursor = pCursor->pNext ;
    }
    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e2017.poolc.reportif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e201b.poolc.deleteemptiesifif BEGIN
#define DDNAME       "3func.350e201b.poolc.deleteemptiesifif"
#define DDNUMB      (countT)0x350e201b
#define IDFILE      (countT)0xb43


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT poolC::deleteEmptiesIfIF( tinS& tinP )/*1*/
{
    _IO_

    processGlobal4I._poolC_grab_pPool.grabF( tinP , TAG( TAGiDnULL ) ) ;

    poolC* pCursor = processGlobal1I._poolC_pPool ;
    while( pCursor )
    {
        if( !( F(pCursor->guts.flagsCt) & flPOOLc_READoNLY ) ) pCursor->deleteEmptiesIfF( tinP ) ;
        pCursor = pCursor->pNext ;
    }

    processGlobal4I._poolC_grab_pPool.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e2* : 3func.350e201b.poolc.deleteemptiesifif END
