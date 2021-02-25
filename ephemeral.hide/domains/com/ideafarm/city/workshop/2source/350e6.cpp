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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6004.listc.openif BEGIN
#define DDNAME       "3func.350e6004.listc.openif"
#define DDNUMB      (countT)0x350e6004
#define IDFILE      (countT)0xb49


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i open the specified listC object, creating all specified dad lists in the current pool that do not exist
arguments
 tinP
 pczNameP
  must not be 0 or null length
  each element of this null terminated string must either be a valid list name or the address of a null terminated string of osTextT
  the ze'th element must be either LISTnAME_ROOTaPPLICATION or LISTnAME_ROOTsYSTEM2
  a countT value is a valid listC name iff BM_HIGH is set
  i will modify elements in this string, replacing osTextT* values with numeric values obtained by looking the osTextT up in the dictionary of the current pool
  specifies the fully qualified name of a listC object relative to the root listC object
   the 0'th offset specifies the name of a listC object that is registered in the root listC object
  for each offset, a listC object will be constructed in the current pool if one is not already registered in the listC object specified by the prior offset
*/
/**/

/*1*/flagsT listC::openIF( tinS& tinP , handleC& hListP , const countT* const pczNameP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISToPENrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __( ~hListP ) ;
        __Z( pczNameP ) ;
        if( POOP ) return flagsRC ;
        __( *pczNameP - LISTnAME_ROOT ) ;
        FV( flLISToPEN , flagsP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    LNV( pczNameP )

    aptC& aptRoot = PUSE.aptListRootF() ;

    //if( tinP.pEther ) etherC::etRockIF( tinP ).traceF( tinP , T("[&aptRoot]:  (foreign ordering)    ")+TF2((countT)&aptRoot,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN) ) ;

    ZE( listC** , ppPreallocatedLists ) ; // NULL TERMINATED LIST OF PREALLOCATED listC ; CBF DISPENSES BY CLAIMING THE LEAF AND SETTING IT TO ZE

    if( aptRoot ) flagsRC |= flLISToPENrETURNcODE_ROOTlISTeXISTED ;
    else if( !( F(flagsP) & flLISToPEN_IFeXISTS ) )
    {
        countT ccName = thirdC::c_strlenIF( tinP , pczNameP ) ;
        ppPreallocatedLists = (listC**)tinP.tlsNewF( ( ccName + 1 ) * sizeof( listC* ) ) ;

        __Z( ppPreallocatedLists ) ;

        if( !POOP )
        {
            {
                listC** ppc = ppPreallocatedLists ;
                while( !POOP && ccName -- )
                {
                    ZE( listC* , pPre ) ;

                    THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc | flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ;
                    //THREADmODE3oN( flTHREADmODE3_DOnOTmAKEsEXiNpOOL )
                    pPre = new( 0 , tinP , LF ) listC( tinP , LISTnAME_PREALLOCATED , flLISTINGc_DOnOTrEGISTERiNtIN ) ; ___( pPre ) ;
                    //THREADmODE3rESTORE
                    THREADmODE2rESTORE
                    __Z( pPre ) ;
                    if( !POOP ) *( ppc ++ ) = pPre ;
                }
                *( ppc ++ ) = 0 ;
            }

            ZE( listC* , pNew ) ;
            THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc | flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ;
            {
                PUSHtINaRGS
                pNew = new( 0 , tinP , LF ) listC( tinP , LISTnAME_ROOT , flLISTINGc_DOnOTrEGISTERiNtIN ) ; ___( pNew ) ;
                if( pNew && !( pNew->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
                POPtINaRGS
            }
            THREADmODE2rESTORE
            aptC aptNew( tinP , pNew ) ;
            if( aptRoot.setIfZeF( aptNew ) )
            {
                THREADmODE2oN( flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ;
                DEL( pNew ) ;
                THREADmODE2rESTORE
            }
            __Z( aptRoot ) ;
        }
    }

    if( aptRoot )
    {
        listC* pList = &APT( listC , aptRoot ) ;
        __Z( pList ) ;
        if( pList && !( pList->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

        if( !pczNameP[ 1 ] ) pList->openF( tinP , hListP , 0 , idGrabLayerP ) ;
        else
        {
            _IO_
            handleC hListRoot( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
            {
                _IO_
                { grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ; pList->openF( tinP , hListRoot , 0 , idGrabLayerP ) ; }
                flagsRC |= openIF( tinP , hListP , hListRoot , pczNameP + 1 , flagsP , idGrabLayerP , ppPreallocatedLists ) ; //U::REMOVE THE countTC() PARAMETER
            }
        }
    }

    if( ppPreallocatedLists )
    {
        listC** ppc = ppPreallocatedLists ;
        THREADmODE2oN( flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ;
        while( *ppc ) { DEL( *( ppc ++ ) ) ; }
        THREADmODE2rESTORE

        tinP.tlsDelF( *(byteT**)&ppPreallocatedLists ) ;
    }

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6004.listc.openif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6005.listc.openif BEGIN
#define DDNAME       "3func.350e6005.listc.openif"
#define DDNUMB      (countT)0x350e6005
#define IDFILE      (countT)0xb4a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i open the specified listC object, creating all specified dad lists in the current pool that do not exist
arguments
 tinP
 hListFromP
  open handle to a listC in the current pool
  this handle will remain open until after i return
 pczNameP
  must not be 0 or null length
  each element of this null terminated string must either be a valid list name or the address of a null terminated string of osTextT
  a countT value is a valid listC name iff BM_HIGH is set
  i will modify elements in this string, replacing osTextT* values with numeric values obtained by looking the osTextT up in the dictionary of the current pool
  specifies the fully qualified name of a listC object relative to the root listC object
   the 0'th offset specifies the name of a listC object that is registered in the root listC object
  for each offset, a listC object will be constructed in the current pool if one is not already registered in the listC object specified by the prior offset
 flagsP
 ppPreallocatedListsP
*/
/**/

/*1*/flagsT listC::openIF( tinS& tinP , handleC& hListP , handleC& hListDadP , const countT* const pczKidP , const flagsT flagsP , const countT idGrabLayerP , listC** const ppPreallocatedListsP )/*1*/
{
    flagsT flagsRC = flLISToPENrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __( ~hListP ) ;
        __Z( hListDadP ) ;
        __Z( pczKidP ) ;
        FV( flLISToPEN , flagsP ) ;
        __( F(flagsP) & flLISToPEN_IFeXISTS && F(flagsP) & flLISToPEN_IFnOTeXISTS ) ;
        if( POOP ) return flagsRC ;
        __( !*pczKidP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    LNV( pczKidP )

    //U::TO FIND A BUG
    //{
    //    ZE( countT , off ) ;
    //    while( pczKidP[ off ] )
    //    {
    //        if( pczKidP[ off ] == LISTnAME_STRETCHbEGINcOUNT && ( !off || pczKidP[ off - 1 ] == LISTnAME_ROOTaPPLICATION ) )
    //        {
    //            BLAMMO ;
    //        }
    //
    //        off ++ ;
    //    }
    //}

    aptC& aptRoot = PUSE.aptListRootF() ;
    listC* pListRoot = (listC*)(byteT*)aptRoot ;

    listC* pList = (listC*)hListDadP.osF( ifcIDtYPEhANDLE_LISTING ) ;
    __Z( pList ) ;
    if( pList && !( pList->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

    byteT pbBoth[ 2 * SIZEOF_handleC ] ;
    byteT* const pbLo = pbBoth ;
    byteT* const pbHi = pbBoth + SIZEOF_handleC ;

    handleC* ppHand[ 2 ] ;
    ppHand[ 0 ] = new( 0 , tinP , pbLo , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    ppHand[ 1 ] = new( 0 , tinP , pbHi , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    ZE( countT , offWoth ) ;

    flagsRC |= flLISToPENrETURNcODE_LISTeXISTED ;
    ZE( countT , offn ) ;
    flagsT flagsMask = ~( F(flLISToPEN_IFnOTeXISTS) ) ;
    while( pczKidP[ offn ] )
    {
        if( !pczKidP[ offn + 1 ] ) flagsMask = - 1 ;

        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkAttachListIfCBF ;

        tinP.ta.pushed.u.listWalk.walk.flagsWalkP = !offn && F(flagsP) & flLISToPEN_RETAINrOOT
            ? flLISTwALK_CALLERgRABBEDrOOT | flLISTwALK_DOnOTuNGRABoOTHaTeNDoFwALK | flLISTwALK_RETAINrOOT
            : flLISTwALK_CALLERgRABBEDrOOT | flLISTwALK_DOnOTuNGRABoOTHaTeNDoFwALK
        ;

        tinP.ta.pushed.u.listWalk.walk.pHandleRootP           = &hListDadP ;
        tinP.ta.pushed.u.listWalk.walk.pOffWothP              = &offWoth ;
        tinP.ta.pushed.u.listWalk.walk.pHandleLoP             = ppHand[ 0 ] ;
        tinP.ta.pushed.u.listWalk.walk.pHandleHiP             = ppHand[ 1 ] ;
        tinP.ta.pushed.u.listWalk.cbf.ppPreallocatedListsP    = ppPreallocatedListsP ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]               = pczKidP[ offn ] ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 1 ]               = flagsP & flagsMask ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 2 ]               = 0 ;
        flagsT flagsWalk = pList->walkF( tinP , idGrabLayerP ) ;
        if( F(flagsWalk) & flLISTwALKrETURNcODE_NEWlISTING ) flagsRC &= ~( F(flLISToPENrETURNcODE_LISTeXISTED) ) ;
        pList = (listC*)tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] ;
        POPtINaRGS

        if( pList && !( pList->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
        __( !pList && !( F(flagsP) & ( flLISToPEN_IFeXISTS | flLISToPEN_IFnOTeXISTS ) ) ) ;

        offn ++ ;
        offWoth = !offWoth ;

        if( !pList )
        {
            if( !( F(flagsP) & flLISToPEN_IFnOTeXISTS ) ) flagsRC &= ~( F(flLISToPENrETURNcODE_LISTeXISTED) ) ;
            break ;
        }
    }
    // pList NOW POINTS TO THE SPECIFIED listC OBJECT; offWoth POINTS TO THIS FINAL *pList, WHICH IS OPEN (GRABBED)

    if( pList )
    {
        if( !( pList->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
        hListP.osF( ifcIDtYPEhANDLE_LISTING , (countT)pList ) ;

        //CONoUTrAW5( "opened list [pPoolUse,pList]: " , tinP.pPoolUse , " " , pList , " " ) ; //U::
        //CONoUTrAW( tinP.pPoolUse->postNameF( tinP ) ) ;
        //CONoUTrAW( "\r\n" ) ;
    }

    {
        _IO_
        ppHand[ offWoth ]->resetF() ;
    }
    {
        _IO_
        DELzOMBIE( ppHand[  !offWoth ] ) ;
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6005.listc.openif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6006.listc.walkif BEGIN
#define DDNAME       "3func.350e6006.listc.walkif"
#define DDNUMB      (countT)0x350e6006
#define IDFILE      (countT)0xb4b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i walk the specified listC object, creating all specified dad lists in the current pool that do not exist
caller must set tinP. ta.a.pc1 tinP. ta.a.pc2 tinP. ta.a.pc3 using CLEARaRGS
all documentation for listC::walkF applies to me unless noted otherwise here
arguments
 tinP
  pcArg1 see listC::walkF
  pcArg2 see listC::walkF
  pcArg3 see listC::walkF
 pczNameP
  must not be 0 or null length
  the ze'th element must be either LISTnAME_ROOTaPPLICATION or LISTnAME_ROOTsYSTEM2
  i will modify elements in this string, replacing osTextT* values with numeric values obtained by looking the osTextT up in the dictionary of the current pool
   if 0 or null length, then the root listC object will be walked
  specifies the fully qualified name of a listC object relative to the root listC object
   the 0'th offset specifies the name of a listC object that is registered in the root listC object
  for each offset, a listC object will be constructed in the current pool if one is not already registered in the listC object specified by the prior offset
  after creating and walking to obtain the specified listC object, i walk it
*/
/**/

/*1*/flagsT listC::walkIF( tinS& tinP , countT* const pczNameP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( pczNameP ) ;
        if( POOP ) return flagsRC ;
        __( *pczNameP - LISTnAME_ROOT ) ;
        if( POOP ) return flagsRC ;
        FV( flLISToPEN , flagsP ) ;
        __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_TINaRGSpUSHED ) ) ; //INTENDED TO FORCE APPLICATION CODE TO PUSH THE TIN ARGS AND SET THEM BEFORE EACH CALL TO ME
        __( !tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.cRecurseP ) ;
        FV( flLISTwALK , tinP.ta.pushed.u.listWalk.walk.flagsWalkP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pOffWothP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleLoP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleHiP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    LNV( pczNameP )

    handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    if( F( openIF( tinP , hList , pczNameP , flagsP , idGrabLayerP ) ) & flLISToPENrETURNcODE_LISTeXISTED ) flagsRC |= flLISTwALKrETURNcODE_LISTeXISTED ;
    __( !hList && !( F(flagsP) & flLISToPEN_IFeXISTS ) ) ;

    if( ~hList )
    {
        listC& list = *(listC*)hList.osF( ifcIDtYPEhANDLE_LISTING ) ;
        if( !( list.flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

        flagsT savePushed   = tinP.ta.pushed.u.listWalk.walk.flagsWalkP ;
                              tinP.ta.pushed.u.listWalk.walk.flagsWalkP |= flLISTwALK_CALLERgRABBEDrOOT ;

        flagsT saveRetained = tinP.ta.retained.u.listWalk.walk.flagsWalkP ;
                              tinP.ta.retained.u.listWalk.walk.flagsWalkP |= flLISTwALK_null ;        //20180510@1127: NOT USED; RETAINED FOR FUTURE USE

        flagsRC |= list.walkF( tinP , idGrabLayerP ) ;

        tinP.ta.retained.u.listWalk.walk.flagsWalkP = saveRetained ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP   = savePushed   ;
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6006.listc.walkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6007.listc.walkif BEGIN
#define DDNAME       "3func.350e6007.listc.walkif"
#define DDNUMB      (countT)0x350e6007
#define IDFILE      (countT)0xb4c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i walk the specified listC object, creating all specified dad lists in the current pool that do not exist
caller must set tinP. ta.a.pc1 tinP. ta.a.pc2 tinP. ta.a.pc3 using CLEARaRGS
all documentation for listC::walkF applies to me unless noted otherwise here
arguments
 tinP
  pcArg1 see listC::walkF
  pcArg2 see listC::walkF
  pcArg3 see listC::walkF
 hListFromP
  must be open
 pczNameP
  normally not 0 and not null length
   i will modify elements in this string, replacing osTextT* values with numeric values obtained by looking the osTextT up in the dictionary of the current pool
   specifies the fully qualified name of a listC object relative to the root listC object
    the 0'th offset specifies the name of a listC object that is registered in the root listC object
   for each offset, a listC object will be constructed in the current pool if one is not already registered in the listC object specified by the prior offset
   after creating and walking to obtain the specified listC object, i walk it
  if 0 or null length
   i will walk hListFromP
*/
/**/

/*1*/flagsT listC::walkIF( tinS& tinP , handleC& hListFromP , countT* const pczNameP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( hListFromP ) ;
        FV( flLISToPEN , flagsP ) ;
        __( !( F(tinP.flagsThreadMode2) & flTHREADmODE2_TINaRGSpUSHED ) ) ; //INTENDED TO FORCE APPLICATION CODE TO PUSH THE TIN ARGS AND SET THEM BEFORE EACH CALL TO ME
        __( !tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.cRecurseP ) ;
        FV( flLISTwALK , tinP.ta.pushed.u.listWalk.walk.flagsWalkP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pOffWothP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleLoP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pHandleHiP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ) ;
        __(  tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    const handleC* phList = &hListFromP ; //NORMALLY OVERRIDDEN

    handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    if( pczNameP && *pczNameP )
    {
        LNV( pczNameP )
        if( F( openIF( tinP , hList , hListFromP , pczNameP , flagsP , idGrabLayerP ) ) & flLISToPENrETURNcODE_LISTeXISTED ) flagsRC |= flLISTwALKrETURNcODE_LISTeXISTED ;
        __( !hList && !( F(flagsP) & flLISToPEN_IFeXISTS ) ) ;
        phList = &hList ;
    }

    if( ~*phList )
    {
        listC& list = *(listC*)phList->osF( ifcIDtYPEhANDLE_LISTING ) ;
        if( !( list.flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
        flagsT flagsSave = tinP.ta.pushed.u.listWalk.walk.flagsWalkP ;
                           tinP.ta.pushed.u.listWalk.walk.flagsWalkP |= flLISTwALK_CALLERgRABBEDrOOT ;
        flagsRC |= list.walkF( tinP , idGrabLayerP ) ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flagsSave ;
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6007.listc.walkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6009.listc.dictionaryqueryfromtextif BEGIN
#define DDNAME       "3func.350e6009.listc.dictionaryqueryfromtextif"
#define DDNUMB      (countT)0x350e6009
#define IDFILE      (countT)0xb4d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT listC::dictionaryQueryFromTextIF( tinS& tinP , const osTextT* const postP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( postP ) ;
        FV(flDICTIONARYqUERYfROMtEXT,flagsP) ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return 0 ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkQueryFromTextCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = (countT)postP ;
    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM2 , LISTnAME_DICTIONARY , 0 } ;
    walkIF( tinP , pczName , F(flagsP) & flDICTIONARYqUERYfROMtEXT_IFeXISTS ? flLISToPEN_IFeXISTS : flLISToPEN_null , idGrabLayerP ) ;
    countT idWord = tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return idWord ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6009.listc.dictionaryqueryfromtextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600a.listc.dictionaryqueryfromidif BEGIN
#define DDNAME       "3func.350e600a.listc.dictionaryqueryfromidif"
#define DDNUMB      (countT)0x350e600a
#define IDFILE      (countT)0xb4e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/blobVSP listC::dictionaryQueryFromIdIF( tinS& tinP , const countT idP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( idP ) ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return 0 ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    countT cbNeeded = sizeof( blobVSP ) ;
    __( cbNeeded > sizeof tinP.ta.pushed.u.listWalk.util.pcP - 2 * sizeof( countT ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkQueryFromIdCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = idP ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] = cbNeeded ;
    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM2 , LISTnAME_DICTIONARY , 0 } ;
    walkIF( tinP , pczName , flLISToPEN_null , idGrabLayerP ) ;

    blobVSP   vsp( *(blobVSP*)&tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] ) ;
    blobVSP* pvsp = (blobVSP*)&tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] ;
    DELzOMBIE( pvsp ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return vsp ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600a.listc.dictionaryqueryfromidif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600b.listc.dictionaryforgettextif BEGIN
#define DDNAME       "3func.350e600b.listc.dictionaryforgettextif"
#define DDNUMB      (countT)0x350e600b
#define IDFILE      (countT)0xb4f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT listC::dictionaryForgetTextIF( tinS& tinP , const osTextT* const postP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( postP ) ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkForgetTextCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = (countT)postP ;
    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM2 , LISTnAME_DICTIONARY , 0 } ;
    walkIF( tinP , pczName , flLISToPEN_null , idGrabLayerP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600b.listc.dictionaryforgettextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600c.listc.dictionaryforgetidif BEGIN
#define DDNAME       "3func.350e600c.listc.dictionaryforgetidif"
#define DDNUMB      (countT)0x350e600c
#define IDFILE      (countT)0xb50


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT listC::dictionaryForgetIdIF( tinS& tinP , const countT idP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( idP ) ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkForgetIdCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = idP ;
    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM2 , LISTnAME_DICTIONARY , 0 } ;
    walkIF( tinP , pczName , flLISToPEN_null , idGrabLayerP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600c.listc.dictionaryforgetidif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600d.listc.dictionaryreplaceostextif BEGIN
#define DDNAME       "3func.350e600d.listc.dictionaryreplaceostextif"
#define DDNUMB      (countT)0x350e600d
#define IDFILE      (countT)0xb51


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i replace each osTextT* value in pczNameP with the id values of that string in the dictionary
 the string is added to the dictionary if it is not already there
 if the input value does not have the BM_HIGH bit set, it is assumed to be a zombie pointer to a null terminated osTextT string
 such a value is replaced with the associated id value, which always has the BM_HIGH bit set
*/
/**/

/*1*/voidT listC::dictionaryReplaceOsTextIF( tinS& tinP , countT* const pczNameP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pczNameP ) ;
        if( POOP ) return ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return ;
    }

    _IO_

    countT* pccName = pczNameP ;
    while( *pccName )
    {
        if( !( *pccName & BM_HIGH ) ) *pccName = dictionaryQueryFromTextIF( tinP , (osTextT*)*pccName ) ;
        pccName ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600d.listc.dictionaryreplaceostextif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600e.listc.fieldif BEGIN
#define DDNAME       "3func.350e600e.listc.fieldif"
#define DDNUMB      (countT)0x350e600e
#define IDFILE      (countT)0xb52


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i manifest a "records database" model that imposes conventional "fields in records" structure onto the ipdos list subsystem
 the list subsystem manifests named data stores, each of which is a list of lists
  each list is a sequence of "listings"
  a listing can have a datum attached to it
  a listing can also be a list
  although a listing can simultaneously have a datum attached to it and also be a list, but this is not normally done
   typically, a listing serves either as a sublist or as a leaf that contains a datum
  each datum can be a countT , a countT string, or a blob (including an osTextT string)
   since blobs are supported, a datum can store a soulC image
   since a soulC image can be stored, a datum can store a (compressed) strokeS string
  in this "list of lists" topology each node is undifferentiated from the others
   any node can be a list, and any node can have an attached datum
 i impose additional structure
 applications can use me to manifest conventional database functionality
 i am still more general than the conventional database model
  within a record, a given field can have multiple values
  these values can be of heterogeneous type
   for example, within a record, the "name" field can have several text string values intermixed with several countT values
parameters
 tinP
 pOutP
  must be 0
  caller must delete by invoking "DELlIST( fieldEditParamOutC , pOut ) ;"
  caller can display *pOut by invoking "SAYfIELDoUT( "[put comment text here]" ) ;"
 hRecordP
  must not be 0
  must be a handle to an open listC instance
  this listC instance corresponds to a "record" in the conventional model
 pczFieldP
  can be 0
  normally is not ze and is of length 1
  is the name of the "field" that i am to operate on
  if all calls to me for a given record use a pczFieldP of length 1 then the record will have a conventional structure
   the record will be a list of field names, and each field name will be a list of (possibly heterogeneous typed) values
  by using calls to me for a given record that use pczFieldP of varying positive lengths, fields that are subfields of other fields can be created and queried
  if pczFieldP is null or of null length, the "record" will be a simple list of (possibly heterogeneous typed) values
   such a record will contain no field names, but the type of each value is, as always, stored
 inP
  this is an expression that evaluates to a temporary fieldEditParamInC instance
  this is where the caller tells me what to do
  examples
   _1_pushC( 0x1234 )
    creates a new listing with an attached countT datum
   _1_pushC( "brown cow" )
    creates a new listing with an attached byteT string (null terminated blob) value
   _1_queryC() + _1_modeAllC()
    queries all values of the specified field
   _1_queryC() + _1_modeAllC() + _1_no_below_C( 4 ) + _1_no_above_C( 6 ) + _1_no_below_C( "cc" ) + _1_no_above_C( "ee" )
    queries all values of the specified field that are either numeric and between 4 and 6, or text strings that are between "cc" and "ee"
  flagsP
*/
/**/

/*1*/flagsT listC::fieldIF( tinS& tinP , fieldEditParamOutC*& pOutP , handleC& hRecordP , const countT* pczFieldP , const fieldEditParamInC& inP , const countT idLineNewP , const countT idiFileNewP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( hRecordP ) ;
        __NZ( pOutP ) ;
        FV(flFIELDeDIT,inP.flags)
        {
            countT cValues = !!inP.cValue + ( !!inP.pbzValue || !!inP.cbzValue ) + !!inP.pczValue + !!inP.pListingValue ;
            __( cValues > 1 ) ;
        }
        FV( flLISToPEN , flagsP ) ;
        __( F(inP.flags) & flFIELDeDIT_MODEpUSHsINK && inP.postzIdSerialSpace ) ; // I WILL DISPENSE AN idSerial VALUE ONLY IF I DECIDE TO PUSH, AND JUST IN TIME; SO I CANNOT SUPPORT SINK, SINCE THAT WOULD REQUIRE EARLY DISPENSING 
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    {
        listC& record = *(listC*)hRecordP.osF( ifcIDtYPEhANDLE_LISTING ) ;
        if( !( record.flagsi & fliLISTINGc_RECORD ) ) record.flagsi |= fliLISTINGc_RECORD ; 
    }


    //U::TO FIND A BUG
    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    if( idIn == 0x4139 )
    {
        countT foo = 2 ;
    }

    {
        handleC hKid( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
        if( pczFieldP )
        {
            if( F( openIF( tinP , hKid , hRecordP , pczFieldP , flagsP | flLISToPEN_RETAINrOOT , idGrabLayerP ) ) & flLISToPENrETURNcODE_LISTeXISTED ) flagsRC |= flLISTwALKrETURNcODE_LISTeXISTED ;
    
            if( !hKid ) { __( !( F(flagsP) & flLISToPEN_IFeXISTS ) ) ; }
        }
    
        if( !POOP )
        {
            const handleC& hField = ~hKid ? hKid : hRecordP ;
    
            listC& field = *(listC*)hField.osF( ifcIDtYPEhANDLE_LISTING ) ;

            if( !( field.flagsi & fliLISTINGc_FIELD ) ) field.flagsi |= fliLISTINGc_FIELD ; 

            flagsT saveRetained = tinP.ta.retained.u.listWalk.walk.flagsWalkP ;
                                  tinP.ta.retained.u.listWalk.walk.flagsWalkP  = F(inP.flags) & flFIELDeDIT_DOnOTiNDEXdATA ? flLISTwALK_DOnOTiNDEXdATA : flLISTwALK_null ;

            PUSHtINaRGS
        
            //U::
            //{
            //    byteT* pbTest = (byteT*)hRecordP.osF( ifcIDtYPEhANDLE_LISTING ) ;
            //    //CONoUTrAW5( "testing list [pPoolUse,pTest]: " , tinP.pPoolUse , " " , pbTest , " " ) ; //U::
            //    //CONoUTrAW( tinP.pPoolUse->postNameF( tinP ) ) ;
            //    //CONoUTrAW( "\r\n" ) ;
            //    aptC aptTest ;
            //    aptTest = pbTest ;
            //    __Z( aptTest ) ;
            //}

                                                          tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkFieldEditCBF ;
                                                          tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_CALLERgRABBEDrOOT ;
                                                          tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = (countT)&pOutP ;
                                                          tinP.ta.pushed.u.listWalk.util.pcP[ 1 ]      = (countT)&inP ;
          //                                              tinP.ta.pushed.u.listWalk.util.pcP[ 2 ]                                          IS USED AS A CURSOR
                                                          tinP.ta.pushed.u.listWalk.util.pcP[ 3 ]      = inP.cKeep ;
          //                                              tinP.ta.pushed.u.listWalk.util.pcP[ 4 ]                                          WILL CONTAIN THE NUMBER OF LISTINGS NOT DELETED
          //                                              tinP.ta.pushed.u.listWalk.util.pcP[ 5 ]                                          WILL CONTAIN THE NUMBER OF LISTINGS DELETED
                                                          tinP.ta.pushed.u.listWalk.util.pcP[ 6 ]      = idLineNewP ;
                                                          tinP.ta.pushed.u.listWalk.util.pcP[ 7 ]      = idiFileNewP ;


            flagsRC |= field.walkF( tinP , idGrabLayerP ) ;
    
            POPtINaRGS

            tinP.ta.retained.u.listWalk.walk.flagsWalkP = saveRetained  ;
        }
    }

    listC::deleteIF( tinP , hRecordP , pczFieldP , flLISTdELETE_IFeMPTY , idGrabLayerP ) ;
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600e.listc.fieldif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600f.listc.deleteif BEGIN
#define DDNAME       "3func.350e600f.listc.deleteif"
#define DDNUMB      (countT)0x350e600f
#define IDFILE      (countT)0xb53


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::deleteIF( tinS& tinP , const countT* const pczNameP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( pczNameP ) ;
        if( POOP ) return flagsRC ;
        __( *pczNameP - LISTnAME_ROOT ) ;
        FV( flLISTdELETE , flagsP ) ;
        if( POOP ) return flagsRC ;
    }
    
    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    if
    (
        (
               pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM2
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM3
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM4
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM5         //20180507@1727: ADDED WITHOUT ANALYSIS
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM6         //20180507@1727: ADDED WITHOUT ANALYSIS
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM7         //20180507@1727: ADDED WITHOUT ANALYSIS
            || pczNameP[ 1 ] == LISTnAME_ROOTsYSTEM8         //20180507@1727: ADDED WITHOUT ANALYSIS
        )
        &&
        flagsP == flLISTdELETE_null
    )
    {
        countT pcza[] = { LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , 0 } ; // THE APPLICATION LIST MUST BE DELETED BEFORE EITHER THE DICTIONARY OR THE INDEX IS DELETED
        deleteIF( tinP , pcza , flLISTdELETE_null , idGrabLayerP ) ;       // THIS IS BECAUSE DELETING AN APPLICATION DATUM WILL UNINDEX IT, AND THE DICTIONARY MUST EXIST DURING UNINDEXING
    }

    if( !pczNameP[ 1 ] )
    {
        countT pcza[] = { LISTnAME_ROOT , LISTnAME_ROOTaPPLICATION , 0 } ; //EXPLICIT BECAUSE MUST BE DELETED IN THIS ORDER
        countT pcz8[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM8     , 0 } ;
        countT pcz7[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM7     , 0 } ;
        countT pcz6[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM6     , 0 } ;
        countT pcz5[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM5     , 0 } ;
        countT pcz4[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4     , 0 } ;
        countT pcz3[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM3     , 0 } ;
        countT pcz2[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM2     , 0 } ;
        countT pcz1[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM1     , 0 } ;
        deleteIF( tinP , pcza , flLISTdELETE_null , idGrabLayerP ) ;
        deleteIF( tinP , pcz8 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS
        deleteIF( tinP , pcz7 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS
        deleteIF( tinP , pcz6 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS
        deleteIF( tinP , pcz5 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS
        deleteIF( tinP , pcz4 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS
        deleteIF( tinP , pcz3 , flLISTdELETE_null , idGrabLayerP ) ;
        deleteIF( tinP , pcz2 , flLISTdELETE_null , idGrabLayerP ) ;
        deleteIF( tinP , pcz1 , flLISTdELETE_null , idGrabLayerP ) ;    //20180507@1727: ADDED WITHOUT ANALYSIS

        aptC& aptRoot = PUSE.aptListRootF() ;
        listingC* pd = &APT( listingC , aptRoot ) ;
        if( aptRoot.resetF() )
        {
            THREADmODE2oN( flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ;
            DEL( pd ) ;
            THREADmODE2rESTORE
        }
    }
    else
    {
        ZE( countT* , pczWalk ) ;
        ZE( countT  , cDoomed ) ;
        {
            countT ccName = thirdC::c_strlenIF( tinP , pczNameP ) ;
            countT ccKeep = ccName - 1 ;
            ZE( countT , ccWalk ) ;
            ccWalk = !ccKeep
                ?                                  ccName
                : ( cDoomed = pczNameP[ ccKeep ] , ccKeep )
            ;

            puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
            PUSE.newF( tinP , LF , *(byteT**)&pczWalk , sizeof( countT ) * ( ccWalk + 1 ) ) ; ___( pczWalk ) ;
            thirdC::c_memcpyIF( tinP , (byteT*)pczWalk , (byteT*)pczNameP , sizeof( countT ) * ccWalk ) ;
            pczWalk[ ccWalk ] = 0 ;
        }

        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkDeleteListCBF ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = cDoomed ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] = flagsP ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] = (countT)&flagsRC ;
        flagsRC |= walkIF( tinP , pczWalk , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
        POPtINaRGS

        { puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ; PUSE( tinP , *(byteT**)&pczWalk ) ; }
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e600f.listc.deleteif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6010.listc.lintif BEGIN
#define DDNAME       "3func.350e6010.listc.lintif"
#define DDNUMB      (countT)0x350e6010
#define IDFILE      (countT)0xb54


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT listC::lintIF( tinS& tinP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    aptC& aptRoot = PUSE.aptListRootF() ;
    if( aptRoot )
    {
        listC* pList = &APT( listC , aptRoot ) ;
        __Z( pList ) ;
    
        if( pList )
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkLintCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_IGNOREgRABITbIT | flLISTwALK_RESETgRABITbIT | flLISTwALK_WALKkIDbEFOREcALLINGkID | flLISTwALK_DOnOTwALKkIDaFTERcALLINGkID ;

            //CS:CODEsYNC: 330e6010 320000b4
            // tinP.ta.retained.u.listWalk.util.pcP[ 0 ]:  LATH ENCOUNTERED VALUE OF A FIELD NAMED LISTnAME_IDuPDATEbEGUN
            // tinP.ta.retained.u.listWalk.util.pcP[ 1 ]:  LATH ENCOUNTERED VALUE OF A FIELD NAMED LISTnAME_IDuPDATEcOMPLETED

            pList->walkF( tinP , idGrabLayerP ) ;

            __NZ( tinP.ta.retained.u.listWalk.util.pcP[ 0 ] ) ; // ALL NONZE VALUES SHOULD BE DETECTED, PROCESSED, AND RESET BEFORE walkF RETURNS
            __NZ( tinP.ta.retained.u.listWalk.util.pcP[ 1 ] ) ; // ALL NONZE VALUES SHOULD BE DETECTED, PROCESSED, AND RESET BEFORE walkF RETURNS

            POPtINaRGS
        }
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6010.listc.lintif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6011.listc.pourif BEGIN
#define DDNAME       "3func.350e6011.listc.pourif"
#define DDNUMB      (countT)0x350e6011
#define IDFILE      (countT)0xb55


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to 1 iff the source list existed, even if it was empty
if the source list is empty or does not exist then i do not do anything
*/
/**/

/*1*/flagsT listC::pourIF( tinS& tinP , countT* const pczNameToP , countT* const pczNameFromP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTpOURrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( pczNameFromP ) ;
        __Z( pczNameToP ) ;
        if( POOP ) return flagsRC ;
        __( *pczNameToP - LISTnAME_ROOT ) ;
        __( *pczNameFromP - LISTnAME_ROOT ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    aptC aptWoth ;
    {
        handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
        if( F( openIF( tinP , hList , pczNameFromP , flLISToPEN_IFeXISTS , idGrabLayerP ) ) & flLISToPENrETURNcODE_LISTeXISTED ) flagsRC |= flLISTpOURrETURNcODE_SOURCElISTeXISTED ;

        if( ~hList )
        {
            listC::unIndexIF( tinP , hList , flLISTwALK_RETAINrOOT ) ;

            listC& list = *(listC*)hList.osF( ifcIDtYPEhANDLE_LISTING ) ;
            aptWoth = list.aptKid ;
                      list.aptKid.resetF() ;
        }
    }

    if( aptWoth )
    {
        flagsRC |= flLISTpOURrETURNcODE_SOURCElISTINGSeXISTED ;

        handleC hList( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
        openIF( tinP , hList , pczNameToP , flLISToPEN_null , idGrabLayerP ) ;

        listC& list = *(listC*)hList.osF( ifcIDtYPEhANDLE_LISTING ) ;

        if( !list.aptKid ) list.aptKid = aptWoth ;
        else
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_CALLERgRABBEDrOOT ;
            list.walkF( tinP , idGrabLayerP ) ;
            POPtINaRGS

            //AT THIS POINT, I RETAIN MY GRAB ON THE DESTINATION LIST AND I KNOW THAT NO OTHER THREAD POSESSES A GRAB ON ANY OF ITS listingC INCLUDING THOSE OF KID LISTS

            listingC* pCursor = &APT( listingC , aptWoth ) ;
            while( ((listC*)pCursor)->aptBro ) pCursor = &APT( listingC , ((listC*)pCursor)->aptBro ) ;

            __( !list.aptKid ) ;
            ((listC*)pCursor)->aptBro = list.aptKid ;
        }

        listC::indexIF( tinP , hList ) ;
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6011.listc.pourif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6012.listc.chatterif BEGIN
#define DDNAME       "3func.350e6012.listc.chatterif"
#define DDNUMB      (countT)0x350e6012
#define IDFILE      (countT)0xb56


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::chatterIF( tinS& tinP , countT* const pczNameP , flagsT flagsP , countT cArgP , const countT idGrabLayerP )/*1*/
{
    countT  pczRoot[] = { LISTnAME_ROOT , 0 } ;
    countT* pczName   = pczNameP ? pczNameP : pczRoot ;
    flagsT  flagsRC   = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( pczName ) ;
        if( POOP ) return flagsRC ;
        FV( flLISTwALKcHATTER , flagsP ) ;
        __( *pczName - LISTnAME_ROOT ) ;
        if( !( F(flagsP) & flLISTwALKcHATTER_MAPiDjOTvALUES ) )
        {
            __NZ( cArgP ) ;
        }
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkChatterCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_IGNOREdELETErEQUESTEDbIT ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = pczName[ 1 ] ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] = flagsP ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] = F(flagsP) & flLISTwALKcHATTER_MAPiDjOTvALUES
        ? cArgP
        : 0
    ;


    flagsRC |= walkIF( tinP , pczName , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6012.listc.chatterif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6013.listc.countif BEGIN
#define DDNAME       "3func.350e6013.listc.countif"
#define DDNUMB      (countT)0x350e6013
#define IDFILE      (countT)0xb57


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countVSP listC::countIF( tinS& tinP , handleC& hRecordP , const countT* pczFieldP , const flagsT flagsP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( hRecordP ) ;
        FV( flLISToPEN , flagsP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc | flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ;
    ZE( fieldEditParamOutC* , pOut ) ;
    fieldIF( tinP , pOut , hRecordP , pczFieldP , _1_queryC() + _1_modeQueryNewC() + _1_modePushIfNotExistC() + _1_pushNullCountC() , LF , flagsP ) ;
    __( !pOut && !( F(flagsP) & flLISToPEN_IFeXISTS ) ) ;
    THREADmODE2rESTORE

    countVSP vspc ;
    if( pOut )
    {
        vspc = pOut->vspCount ;
        DELlIST( fieldEditParamOutC , pOut ) ;
        __( !(const countT*)vspc ) ;
    }

    return vspc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6013.listc.countif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6015.listc.indexif BEGIN
#define DDNAME       "3func.350e6015.listc.indexif"
#define DDNUMB      (countT)0x350e6015
#define IDFILE      (countT)0xb58


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/FD_INDEXif( countT , - 1 )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6015.listc.indexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6016.listc.indexif BEGIN
#define DDNAME       "3func.350e6016.listc.indexif"
#define DDNUMB      (countT)0x350e6016
#define IDFILE      (countT)0xb59


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_INDEXif( osTextT* const , !valueP )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6016.listc.indexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6017.listc.indexif BEGIN
#define DDNAME       "3func.350e6017.listc.indexif"
#define DDNUMB      (countT)0x350e6017
#define IDFILE      (countT)0xb5a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_INDEXif( countT* const , !valueP )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6017.listc.indexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6018.listc.unindexif BEGIN
#define DDNAME       "3func.350e6018.listc.unindexif"
#define DDNUMB      (countT)0x350e6018
#define IDFILE      (countT)0xb5b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/FD_UNiNDEXif( countT , - 1 )/*1*/



//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6018.listc.unindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6019.listc.unindexif BEGIN
#define DDNAME       "3func.350e6019.listc.unindexif"
#define DDNUMB      (countT)0x350e6019
#define IDFILE      (countT)0xb5c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_UNiNDEXif( osTextT* const , !valueP )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6019.listc.unindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601a.listc.unindexif BEGIN
#define DDNAME       "3func.350e601a.listc.unindexif"
#define DDNUMB      (countT)0x350e601a
#define IDFILE      (countT)0xb5d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_UNiNDEXif( countT* const , !valueP )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601a.listc.unindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601b.listc.walkindexif BEGIN
#define DDNAME       "3func.350e601b.listc.walkindexif"
#define DDNUMB      (countT)0x350e601b
#define IDFILE      (countT)0xb5e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/FD_WALKiNDEXif( countT )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601b.listc.walkindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601c.listc.walkindexif BEGIN
#define DDNAME       "3func.350e601c.listc.walkindexif"
#define DDNUMB      (countT)0x350e601c
#define IDFILE      (countT)0xb5f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_WALKiNDEXif( osTextT* const )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601c.listc.walkindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601d.listc.walkindexif BEGIN
#define DDNAME       "3func.350e601d.listc.walkindexif"
#define DDNUMB      (countT)0x350e601d
#define IDFILE      (countT)0xb60


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/FD_WALKiNDEXif( countT* const )/*1*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601d.listc.walkindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601e.listc.walkenumerateif BEGIN
#define DDNAME       "3func.350e601e.listc.walkenumerateif"
#define DDNUMB      (countT)0x350e601e
#define IDFILE      (countT)0xb61


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
args
 tinP
 cNameP
  must not be 0 or null length 
  the name of the field
*/
/**/

/*1*/flagsT listC::walkEnumerateIF( tinS& tinP , datumS*& pDatumP , const countT cNameP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __NZ( pDatumP ) ;
        __Z( cNameP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    {
        const osTextT* postMasterPool = PUSE.postNameF( tinP ) ;
        const countT idStateSpace = PUSE.idStateSpaceF() ;
        puseC          puseIndex( tinP , idStateSpace == ifcIDsTATEsPACE_SINGLEaDAM( tinP ) || idStateSpace == ifcIDsTATEsPACE_SCRATCH ? ifcIDpOOL_ADAMtEMP : ifcIDpOOL_HOMEtEMP ) ;

        countT pczPrefix[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM3 , LISTnAME_FIELDvALUEiNDEX , (countT)postMasterPool , LISTnAME_ROOTaPPLICATION , cNameP , 0 } ;
        listC::dictionaryReplaceOsTextIF( tinP , pczPrefix ) ;
        LNV( pczPrefix )

        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkEnumerateCBF ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_FILTEReNDoFsTRETCHEDvALUE ;
        flagsRC = listC::walkIF( tinP , pczPrefix , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
        pDatumP = *(datumS**)&tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] ;
        POPtINaRGS
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601e.listc.walkenumerateif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601f.listc.deleteif BEGIN
#define DDNAME       "3func.350e601f.listc.deleteif"
#define DDNUMB      (countT)0x350e601f
#define IDFILE      (countT)0xb62


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::deleteIF( tinS& tinP , handleC& hListDadP , const countT* const pczKidP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( pczKidP ) ;
        if( POOP ) return flagsRC ;
        __( !*pczKidP ) ;
        LNV( pczKidP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    ZE( countT* , pczWalk ) ; // LIST THAT CONTAINS LEAF
    ZE( countT  , cDoomed ) ; // LEAF
    {
        countT ccKid = thirdC::c_strlenIF( tinP , pczKidP ) ;

        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
        PUSE.newF( tinP , LF , *(byteT**)&pczWalk , sizeof( countT ) * ccKid ) ; ___( pczWalk ) ;
        if( ccKid > 1 ) thirdC::c_memcpyIF( tinP , (byteT*)pczWalk , (byteT*)pczKidP , sizeof( countT ) * ( ccKid - 1 ) ) ;
        pczWalk[ ccKid - 1 ] = 0 ;

        cDoomed = pczKidP[ ccKid - 1 ] ;    // LEAF
    }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkDeleteListCBF ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 0 ] = cDoomed ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 1 ] = flagsP ;
    tinP.ta.pushed.u.listWalk.util.pcP[ 2 ] = (countT)&flagsRC ;

    if( *pczWalk )
    {
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_null ;
        flagsRC |= walkIF( tinP , hListDadP , pczWalk , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
    }
    else
    {
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_CALLERgRABBEDrOOT ;
        listC& listDad = *(listC*)hListDadP.osF( ifcIDtYPEhANDLE_LISTING ) ;
        listDad.walkF( tinP , idGrabLayerP ) ;
    }

    POPtINaRGS

    { puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ; PUSE( tinP , *(byteT**)&pczWalk ) ; }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e601f.listc.deleteif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6020.listc.isindexedif BEGIN
#define DDNAME       "3func.350e6020.listc.isindexedif"
#define DDNUMB      (countT)0x350e6020
#define IDFILE      (countT)0xb63


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT listC::isIndexedIF( tinS& tinP , const countT idGrabLayerP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( boolT , bYes ) ;
    if( tinP.pPoolUse ) //I MIGHT BE CALLED LATE, WHEN !tinP.pPoolUse
    {
        const osTextT* postMasterPool = PUSE.postNameF( tinP ) ;
 
        const countT idStateSpace = PUSE.idStateSpaceF() ;

        const countT idPoolUse = !idStateSpace || idStateSpace == ifcIDsTATEsPACE_SINGLEaDAM( tinP ) || idStateSpace == ifcIDsTATEsPACE_SCRATCH ? ifcIDpOOL_ADAMtEMP : ifcIDpOOL_HOMEtEMP ; // "!idStateSpace" ADDED WITHOUT ANALYSIS

        if( idPoolUse == ifcIDpOOL_ADAMtEMP || tinP.pAdamGlobal1->pPoolHomeTemp )       // IF ifcIDpOOL_HOMEtEMP && !tinP.pAdamGlobal1->pPoolHomeTemp THEN CLEARLY IS NOT INDEXED
        {
            puseC puseIndex( tinP , idPoolUse ) ;

            THREADmODE2oN( flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING )
            countT idNameIndex = listC::dictionaryQueryFromTextIF( tinP , postMasterPool , flDICTIONARYqUERYfROMtEXT_IFeXISTS ) ;
            THREADmODE2rESTORE

            if( idNameIndex )
            {
                grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

                handleC h1( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                countT pcz1[] = { LISTnAME_ROOT , 0 } ;
                listC::openIF( tinP , h1 , pcz1 , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
                if( ~h1 )
                {
                    handleC h2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                    countT pcz2[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM3 , 0 } ;
                    listC::openIF( tinP , h2 , pcz2 , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
                    h1.closeIfF() ;
                    if( ~h2 )
                    {
                        handleC h3( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                        countT pcz3[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM3 , LISTnAME_FIELDvALUEiNDEX , 0 } ;
                        listC::openIF( tinP , h3 , pcz3 , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
                        h2.closeIfF() ;
                        if( ~h3 )
                        {
                            if( idNameIndex )
                            {
                                countT pczIndex[] = { idNameIndex , 0 } ;
                                handleC hIndex( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                                listC::openIF( tinP , hIndex , h3 , pczIndex , flLISToPEN_IFeXISTS , idGrabLayerP ) ;
                                h3.closeIfF() ;
                                bYes = ~hIndex ;
                            }
                        }
                    }
                }
            }
        }
    }

    return bYes ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6020.listc.isindexedif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6021.listc.indexif BEGIN
#define DDNAME       "3func.350e6021.listc.indexif"
#define DDNUMB      (countT)0x350e6021
#define IDFILE      (countT)0xb64


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::indexIF( tinS& tinP , handleC& hListP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( hListP ) ;
        FV( flLISTwALK , flagsP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    listC& list = *(listC*)hListP.osF( ifcIDtYPEhANDLE_LISTING ) ;
    if( !( list.flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkIndexCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_CALLERgRABBEDrOOT | flagsP ;
    flagsRC |= list.walkF( tinP , idGrabLayerP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6021.listc.indexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6022.listc.unindexif BEGIN
#define DDNAME       "3func.350e6022.listc.unindexif"
#define DDNUMB      (countT)0x350e6022
#define IDFILE      (countT)0xb65


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::unIndexIF( tinS& tinP , handleC& hListP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        __Z( hListP ) ;
        FV( flLISTwALK , flagsP ) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    listC& list = *(listC*)hListP.osF( ifcIDtYPEhANDLE_LISTING ) ;
    if( !( list.flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkUnIndexCBF ;
    tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_CALLERgRABBEDrOOT | flagsP ;
    flagsRC |= list.walkF( tinP , idGrabLayerP ) ;
    POPtINaRGS
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return flagsRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6022.listc.unindexif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6026.listc.dictionaryrestoreostextif BEGIN
#define DDNAME       "3func.350e6026.listc.dictionaryrestoreostextif"
#define DDNUMB      (countT)0x350e6026
#define IDFILE      (countT)0xb66


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i am the inverse of dictionaryReplaceOsTextIF
i replace each recognized id value in pczNameP with a smart pointer, of class blobSP, to the value of that id in the dictionary
on input, the BM_HIGH bit must be set in every element of pczNameP
the caller must DELzOMBIE each of these blobSP instances
 call DELzOMBIE for each element that does not have BM_HIGH set
 if this is not done, leaks will be reported
*/
/**/

/*1*/voidT listC::dictionaryRestoreOsTextIF( tinS& tinP , countT* const pczNameP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pczNameP ) ;
        if( POOP ) return ;
        __( tinP.monitor.cGrabbed && !( F(tinP.flagsThreadMode2) & flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING ) ) ; // TO PREVENT DEADLOCKING, A THREAD MAY NOT BEGIN A WALK IN THE LIST TREE WHILE IT POSESSES A listingC ; THIS PROHIBITION IS MORE THAN NECESSARY BUT IS SIMPLE TO ENFORCE ; THE NECESSARY CONDITION IS TO PREVENT "BACKWARD" WALKING ; cGrabbed COUNTS ANY grabitC GRAB, NOT JUST GRABS OF listingC INSTANCES
        if( POOP ) return ;

        {
            countT* pccName = pczNameP ;
            while( *pccName ) { __Z( *( pccName ++ ) & BM_HIGH ) ; }
        }

        if( POOP ) return ;
    }

    _IO_

    countT* pccName = pczNameP ;
    while( *pccName )
    {
        blobVSP vspPost = dictionaryQueryFromIdIF( tinP , *pccName ) ;

        if( (const byteT*)vspPost )
        {
            *pccName = 0 ;
            *(blobSP*)pccName = vspPost ;
        }

        pccName ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.350e6* : 3func.350e6026.listc.dictionaryrestoreostextif END
