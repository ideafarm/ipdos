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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6002.listc.dt_listc BEGIN
#define DDNAME       "3func.360e6002.listc.dt_listc"
#define DDNUMB      (countT)0x360e6002
#define IDFILE      (countT)0x1423


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/listC::~listC( voidT )/*1*/
{
    TINSL

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    //tinP.pc Utility[ 0 ] ++ ;
    //CONoUTrAW7( "~listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / +\r\n" ) ;

    if( !( flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
    if( flagsi & fliLISTINGc_DESTRUCTING )
    {
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkUnIndexCBF ;
            //if( flagsi & fliLISTINGc_GRABBED ) tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_CALLERgRABBEDrOOT ;
            walkF( tinP , tinP.ta.retained.u.listWalk.walk.idGrabLayer ) ;
            POPtINaRGS
        }

        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkDeleteAllCBF ;
        //tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flLISTwALK_IGNOREcREFdATUM | flLISTwALK_IGNOREcREF ; //U::WHY DO I NEED TO IGNORE CREF ; CAN'T I BLOCK PENDING CLIENT REFERENCES?

        walkF( tinP , tinP.ta.retained.u.listWalk.walk.idGrabLayer ) ; //U::CODE TO ENFORCE THAT THIS IS SET BY CALLER
        POPtINaRGS
    }
    else flagsi |= fliLISTINGc_DESTRUCTING ;

    //CONoUTrAW7( "~listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / -\r\n" ) ;
    //tinP.pc Utility[ 0 ] -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6002.listc.dt_listc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6003.listc.listc BEGIN
#define DDNAME       "3func.360e6003.listc.listc"
#define DDNUMB      (countT)0x360e6003
#define IDFILE      (countT)0x1424


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/listC::listC( tinS& tinP , const listC& listDadP , const countT idNameP , const flagsT flagsP ) :/*1*/
listingC( tinP , listDadP , flagsP ) ,
idName( idNameP ) ,
idNameKidDefaultLath( 0 )
{
    _IO_

    //tinP.pc Utility[ 0 ] ++ ;
    //CONoUTrAW7( "*listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / +\r\n" ) ;

    __( !( idName >> sizeof( countT ) * SB - 1 ) ) ;
    listingC::flagsi |= fliLISTINGc_MIXINlIST ;
    if( !( flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
    //CONoUTrAW( "listC\r\n" ) ; 

    //if( idNameP == 0x80000001 && tinP.pPoolUse )
    //{
    //    CONoUTrAW3( "listC named 10000008 [this]: " , this , " in pool \"" ) ;
    //    CONoUTrAW( tinP.pPoolUse->postNameF( tinP ) ) ;
    //    CONoUTrAW( "\"\r\n" ) ;
    //}

    if( tinP.pEther )
    {
        timeLathModified.time2 = timeLathModified.time1 = 0 ;
        tinP.pEther->osTimeNowF( tinP , timeLathModified.time1 , timeLathModified.time2 ) ;
    }

    //CONoUTrAW7( "*listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / -\r\n" ) ;
    //tinP.pc Utility[ 0 ] -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6003.listc.listc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6008.listc.walkf BEGIN
#define DDNAME       "3func.360e6008.listc.walkf"
#define DDNUMB      (countT)0x360e6008
#define IDFILE      (countT)0x1425


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i call myself recursively, perhaps deeply
 for efficiency and to avoid exhausting the thread stack, i use tinP. ta.a.pc for my arguments
 the outermost caller of me must clear the entire tinP. ta.a.pc1 and tinP. ta.a.pc2 AND tinP. ta.a.pc3 arrays and then set them as specified in the following
it is illegal for listWalkCBFT to store a pointer or reference to any listingC object for use outside of the callback function
it is illegal for any application code to reference listingC instances anywhere other than within the definition of a listWalkCBFT function
arguments for the outermost call to walkF
 tinP
  see tinArgS, which is used both to call me and for me to pass info into a callback function provided by the caller
 pczNameP
  caller must declare a name for the list being walked
  the lath value must equal idName
  if walking the root list, *pczNameP must be 0
*/
/**/

/*1*/flagsT listC::walkF( tinS& tinP , const countT idGrabLayerP )/*1*/
{
    flagsT flagsRC = flLISTwALKrETURNcODE_null ;

    IFbEcAREFUL
    {
        if( POOP ) return flagsRC ;
        FV(flLISTwALK,tinP.ta.pushed.u.listWalk.walk.flagsWalkP) ;
        if( POOP ) return flagsRC ;
    }

    _IO_

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    tinP.ta.pushed.u.listWalk.cbf.idNestP ++ ;

    ZE( countT* , pczName ) ;
    nameF( tinP , pczName ) ; //20140111@1810: NOW ALLOCATED IN TLS: { puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ; ___( pczName ) ; }

    ZE( boolT , bClearPoolRecord ) ;
    if( pczName[ 0 ] == LISTnAME_ROOT && pczName[ 1 ] == LISTnAME_ROOTsYSTEM3 && pczName[ 2 ] == LISTnAME_FIELDvALUEiNDEX && pczName[ 3 ] && !pczName[ 4 ] && !tinP.ta.retained.u.listWalk.walk.pPoolRecord )
    {
        bClearPoolRecord = 1 ;

        THREADmODE2oN( flTHREADmODE2_ALLOWdICTIONARYwHILEgRABBING )
        blobVSP vspo = listC::dictionaryQueryFromIdIF( tinP , pczName[ 3 ] ) ;
        THREADmODE2rESTORE
        __( !(const byteT*)vspo ) ;
        tinP.ta.retained.u.listWalk.walk.pPoolRecord = poolC::pPoolFromNameIF( tinP , vspo ) ;
        __( !tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
    }

    byteT pbDefault[ 2 * SIZEOF_handleC ] ;
    byteT* const pbLo = tinP.ta.pushed.u.listWalk.walk.pHandleLoP ? (byteT*)tinP.ta.pushed.u.listWalk.walk.pHandleLoP : pbDefault ;
    byteT* const pbHi = tinP.ta.pushed.u.listWalk.walk.pHandleHiP ? (byteT*)tinP.ta.pushed.u.listWalk.walk.pHandleHiP : pbDefault + SIZEOF_handleC ;

    handleC* ppHand[ 2 ] ;
    ppHand[ 0 ] = tinP.ta.pushed.u.listWalk.walk.pHandleLoP ? (handleC*)pbLo : new( 0 , tinP , pbLo , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    ppHand[ 1 ] = tinP.ta.pushed.u.listWalk.walk.pHandleHiP ? (handleC*)pbHi : new( 0 , tinP , pbHi , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

    ZE( countT , offWothDefault ) ;
    countT& offWoth = *( tinP.ta.pushed.u.listWalk.walk.pOffWothP ? tinP.ta.pushed.u.listWalk.walk.pOffWothP : &offWothDefault ) ;

    //CONoUTrAW3( "[    flagsi]: " , flagsi , "\r\n" ) ;
    if( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_RESETgRABITbIT && flagsi & fliLISTINGc_GRABBED )
    {
        CONoUTrAW3( " resetting the GRABBED bit for listC [idName]: " , idName , "\r\n" ) ;
        flagsi &= (byteT)~fliLISTINGc_GRABBED ;
    }

    if( !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & ( flLISTwALK_CALLERgRABBEDrOOT | flLISTwALK_IGNOREgRABITbIT ) ) ) { grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ; openF( tinP , *ppHand[ offWoth ] , 0 , idGrabLayerP ) ; }
    boolT bWothIsRoot = 1 ;

    ZE( countT , cKidNotDeleted ) ;
    ZE( countT , cKidNew ) ;
    tinP.ta.pushed.u.listWalk.cbf.idCallP = 0 ;
    aptC* pApt = &aptKid ;
    listingC* pk = &APT( listingC , *pApt ) ;
    listC* pklNU = pk && pk->flagsF() & fliLISTINGc_MIXINlIST ? (listC*)pk : 0 ; //FOR DEBUGGING CONVENIENCE ; NOT USED

    //if( tinP.pc Utility[ 0 ] && idName == LISTnAME_RECORD && pk )
    //{
    //    poolC* pPoolIn = poolC::pPoolIF( tinP , (byteT*)pk ) ;
    //    boolT  bOk     = listingC::bIsListingIF( tinP , pk ) ;
    //
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "listC::walkF old [idAdam,apt,ptr,puse,inpool]: " ) ;
    //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , 0 ) ;
    //    OStEXTAK( ostoSay , " " ) ;
    //    OStEXTC(  ostoSay , aptKid , 0 ) ;
    //    OStEXTAK( ostoSay , " " ) ;
    //    OStEXTC(  ostoSay , pk , 0 ) ;
    //    OStEXTAK( ostoSay , " " ) ;
    //    OStEXTA(  ostoSay , tinP.pPoolUse->postNameF( tinP ) ) ;
    //    OStEXTAK( ostoSay , " " ) ;
    //    OStEXTA(  ostoSay , pPoolIn ? pPoolIn->postNameF( tinP ) : "unknown" ) ;
    //    OStEXTA(  ostoSay , bOk  ? " (is a listingC)" : " (is NOT a listingC)" ) ;
    //    OStEXTAK( ostoSay , "\r\n" ) ;
    //
    //    CONoUTrAW( ostoSay ) ;
    //    LOGrAW(    ostoSay ) ;
    //}

    ZE( boolT , bQuit ) ;
    while( pk )
    {
        //static countT idPassLath ;
        //countT idPass = 1 + incv02AM( idPassLath ) ;
        //if( !( idPass % TUCK ) ) { CONoUTrAW( "~" ) ; } //U::WHY IS CPU NOT PEGGED?

        if( !listingC::bIsListingIF( tinP , *pApt ) )
        {
            __( *pApt ) ;
            __1
            break ;
        }

        //CONoUTrAW3( "[pk->flagsi]: " , pk->flagsF() , "\r\n" ) ;
        if( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_RESETgRABITbIT && pk->flagsF() & fliLISTINGc_GRABBED )
        {
            if( pklNU ) { CONoUTrAW3( " resetting the GRABBED bit for listC [idName]: " , pklNU->idName , "\r\n" ) ; }
            else        { CONoUTrAW(  " resetting the GRABBED bit for a listingC\r\n" ) ; }
            pk->flagsRefF() &= (byteT)~fliLISTINGc_GRABBED ;
        }

        if( !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_IGNOREgRABITbIT ) ) { grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ; pk->openF( tinP , *ppHand[ !offWoth ] , 0 , idGrabLayerP ) ; }

        flagsT flRetCode = flLISTwALKcALLbACKrETURNcODE_null ;
        ZE( boolT , bWothDeleted ) ;
        if( !( pk->flagsF() & fliLISTINGc_DELETErEQUESTED ) )
        {
            if // THIS EARLY WALK CODE DOES NOT EXECUTE UNLESS EXPLICITLY REQUESTED BY APPLICATION CODE
            (
                F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_WALKkIDbEFOREcALLINGkID
                && ( listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST ) || listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST | fliLISTINGc_MIXINdATUM ) )
            )
            {
                tinP.ta.pushed.u.listWalk.walk.cRecurseP ++ ;
                flagsT flagsSave = tinP.ta.pushed.u.listWalk.walk.flagsWalkP ;
                                   tinP.ta.pushed.u.listWalk.walk.flagsWalkP |= flLISTwALK_CALLERgRABBEDrOOT ;

                countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                              tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

                // ********************************************************
                flagsT flagsRC = ((listC*)pk)->walkF( tinP , idGrabLayerP ) ;
                // ********************************************************

                tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;

                tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flagsSave ;
                tinP.ta.pushed.u.listWalk.walk.cRecurseP -- ;
            }

            boolT bCall = !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_FILTEReNDoFsTRETCHEDvALUE ) ; //IF NO FILTER FLAGS ARE SET

            if( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_FILTEReNDoFsTRETCHEDvALUE )
            {
                for( countT off = 0 ; pczName[ off ] ; off ++ )
                {
                    switch( pczName[ off ] )
                    {
                        case LISTnAME_STRETCHeND             : { tinP.ta.pushed.u.listWalk.walk.offStretchEnd   = off ; break ; }
                        case LISTnAME_STRETCHbEGINoStEXTsTRZ :
                        case LISTnAME_STRETCHbEGINcOUNT      :
                        case LISTnAME_STRETCHbEGINcOUNTsTRZ  :
                        case LISTnAME_STRETCHbEGINbITS       : { tinP.ta.pushed.u.listWalk.walk.offStretchBegin = off ; break ; }
                        default                              : { if( tinP.ta.pushed.u.listWalk.walk.offStretchEnd ) tinP.ta.pushed.u.listWalk.walk.offStretchEnd = tinP.ta.pushed.u.listWalk.walk.offStretchBegin = 0 ; break ; }
                    }
                }

                bCall = !!tinP.ta.pushed.u.listWalk.walk.offStretchEnd ;
            }

            if( bCall )
            {
                tinP.ta.pushed.u.listWalk.cbf.pListingP = pk ;
                __( !listingC::bIsListingIF( tinP , tinP.ta.pushed.u.listWalk.cbf.pListingP ) ) ; //U::TO FIND A BUG
                tinP.ta.pushed.u.listWalk.cbf.pDadP = this ;

                countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                              tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

                THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc | flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ;
                tinP.ta.pushed.u.listWalk.cbf.idCallP ++ ;
                // ****************************************************************************************************************************
                if( tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP ) flRetCode = (*tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP)( tinP ) ;
                // ****************************************************************************************************************************
                THREADmODE2rESTORE

                tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;

                FV(flLISTwALKcALLbACKrETURNcODE,flRetCode) ;
                if( POOP ) break ;

                //CS:CODEsYNC: PSEUDOdUPLICATEcODE 2200004 2200004
                if( tinP.ta.pushed.u.listWalk.cbf.pNewP )
                {
                    flagsRC |= flLISTwALKrETURNcODE_NEWlISTING ;
                    cKidNew ++ ;

                    listingC*& pNew = tinP.ta.pushed.u.listWalk.cbf.pNewP ;
                    __( ((listC*)pNew)->aptBro ) ;
                        ((listC*)pNew)->aptBro = *pApt ;
                                                  *pApt = pNew ;
                                                          pNew = 0 ;
                                             __( !*pApt ) ;
                    if( POOP ) break ;
                }
    
                bWothDeleted = !( F(flRetCode) & flLISTwALKcALLbACKrETURNcODE_DELETE ) ; //WOTH CAN BE CLOSED NOW UNLESS THE CURRENT LISTING MIGHT BE DELETED AFTER BEING WALKED
                if( bWothDeleted ) 
                {
                    cKidNotDeleted ++ ;

                    DELzOMBIE( ppHand[ offWoth ] ) ;
                    ppHand[ offWoth ] = new( 0 , tinP , offWoth ? pbHi : pbLo , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
            
                    if( bWothIsRoot && !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_RETAINrOOT ) )
                    {
                        if( tinP.ta.pushed.u.listWalk.walk.ppHandleRootP && tinP.ta.pushed.u.listWalk.walk.pbHandleRootP )
                        {
                            handleC*& phRoot = *tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ;
                            DELzOMBIE( phRoot ) ;
            
                            if( tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) phRoot = new( 0 , tinP , tinP.ta.pushed.u.listWalk.walk.pbHandleRootP , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                        }
                        else if( tinP.ta.pushed.u.listWalk.walk.pHandleRootP ) tinP.ta.pushed.u.listWalk.walk.pHandleRootP->closeIfF() ;
                    }
                }
    
                if( F(flRetCode) & flLISTwALKcALLbACKrETURNcODE_DELETE ) pk->flagsRefF() |= fliLISTINGc_DELETErEQUESTED ;
            }

            if // NOTE THAT I WILL WALK A LIST EVEN IF ITS INSPECTOR RETURNED flLISTwALKcALLbACKrETURNcODE_QUIT
            (
                   !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_DOnOTwALKkIDaFTERcALLINGkID )
                && !( F(flRetCode) & flLISTwALKcALLbACKrETURNcODE_DOnOTwALKmE )
                && ( listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST ) || listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST | fliLISTINGc_MIXINdATUM ) )
            )
            {
                tinP.ta.pushed.u.listWalk.walk.cRecurseP ++ ;
                flagsT flagsSave = tinP.ta.pushed.u.listWalk.walk.flagsWalkP ;
                                   tinP.ta.pushed.u.listWalk.walk.flagsWalkP |= flLISTwALK_CALLERgRABBEDrOOT ;

                countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                              tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

                // ********************************************************
                flagsT flagsRC = ((listC*)pk)->walkF( tinP , idGrabLayerP ) ;
                // ********************************************************

                tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;

                tinP.ta.pushed.u.listWalk.walk.flagsWalkP = flagsSave ;
                tinP.ta.pushed.u.listWalk.walk.cRecurseP -- ;
            }
            if( POOP ) break ;

            if
            (
                pk->flagsF() & fliLISTINGc_DELETErEQUESTED
                && ( listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST ) || listingC::bIsListingIF( tinP , *pApt , fliLISTINGc_MIXINlIST | fliLISTINGc_MIXINdATUM ) )
                && pczName
                && pczName[ 0 ] == LISTnAME_ROOT
                && pczName[ 1 ] == LISTnAME_ROOTaPPLICATION
            )
            {
                PUSHtINaRGS
                tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkUnIndexCBF ;
                tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_CALLERgRABBEDrOOT ;

                countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                              tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

                // ********************************************************
                ((listC*)pk)->walkF( tinP , idGrabLayerP ) ;
                // ********************************************************

                tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;

                POPtINaRGS
            }
        }

        boolT bKidDeleted =
            pk->flagsF() & fliLISTINGc_DELETErEQUESTED
            && ( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_IGNOREcREFdATUM || pk->idTypeDatumF() == ifcIDtYPEmIXINdATUM_listingVSP || !pk->cRefDatumF() )
            && ( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_IGNOREcREF                                                              || !pk->cRefF()      )
        ;

        if( bKidDeleted )
        {
            byteT* pbFind = (byteT*)&pk->flagsRefF() ;
            for( countT offr = 0 ; offr < CmAXgRABITrECURSEiNtINs ; offr ++ )
            {
                if( tinP.ppbGrabitRecurse[ offr ] == pbFind && tinP.pcGrabitRecurse[ offr ] )
                {
                    bKidDeleted = 0 ; // THE CALLING THREAD GRABBED *pk RECURSIVELY AND IT WILL STILL BE GRABBED IF I TRY TO DELETE IT
                    break ;           // THIS HAPPENS WHILE DELETING {ROOT,APPLICATION} WHEN UNINDEX ATTEMPTS TO DELETE SYSTEM2, WHICH IS STILL GRABBED AS PART OF THE WALK OF ROOT
                }
            }
        }

        if( bKidDeleted )
        {
            *pApt = ((listC*)pk)->aptBro ;  //CAST IS DONE TO AVOID NEEDING TO MAKE ME A FRIEND OF listingC; IN GENERAL, *pk WILL NOT BE A listC INSTANCE; THIS IS OK BECAUSE aptBro IS A MEMBER OF listingC SO WILL ALWAYS BE AT THE EXPECTED LOCATION
                    ((listC*)pk)->aptBro.resetF() ;
        
            DELzOMBIE( ppHand[ !offWoth ] ) ;
            ppHand[ !offWoth ] = new( 0 , tinP , !offWoth ? pbHi : pbLo , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

            countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                          tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

            THREADmODE2oN( flTHREADmODE2_ALLOWdESTRUCTIONoFlISTINGc ) ;
            DEL( pk ) ;
            THREADmODE2rESTORE

            tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;
        }

        if( !bKidDeleted && !bWothDeleted )
        {
            DELzOMBIE( ppHand[ offWoth ] ) ;
            ppHand[ offWoth ] = new( 0 , tinP , offWoth ? pbHi : pbLo , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

            if( bWothIsRoot && !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_RETAINrOOT ) )
            {
                if( tinP.ta.pushed.u.listWalk.walk.ppHandleRootP && tinP.ta.pushed.u.listWalk.walk.pbHandleRootP )
                {
                    handleC*& phRoot = *tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ;
                    DELzOMBIE( phRoot ) ;
            
                    if( tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) phRoot = new( 0 , tinP , tinP.ta.pushed.u.listWalk.walk.pbHandleRootP , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                }
                else if( tinP.ta.pushed.u.listWalk.walk.pHandleRootP ) tinP.ta.pushed.u.listWalk.walk.pHandleRootP->closeIfF() ;
            }
        }

        if( F(flRetCode) & flLISTwALKcALLbACKrETURNcODE_QUIT )
        {
            bQuit = 1 ;
            break ;
        }

        if( pk ) pApt = &((listC*)pk)->aptBro ; // IF !pk THEN *pApt NOW POINTS TO THE listingC THAT FOLLOWED THE DELETED listingC
        pk = &APT( listingC , *pApt ) ;
        pklNU = pk && pk->flagsF() & fliLISTINGc_MIXINlIST ? (listC*)pk : 0 ; //FOR DEBUGGING CONVENIENCE ; NOT USED
        if( !bKidDeleted )
        {
            offWoth = !offWoth ;
            if( bWothIsRoot ) bWothIsRoot = 0 ;
        }
    }

    if( !POOP && !bQuit )
    {
        tinP.ta.pushed.u.listWalk.cbf.pListingP = 0 ;
        tinP.ta.pushed.u.listWalk.cbf.pDadP = this ;
        THREADmODE2oN( flTHREADmODE2_ALLOWcONSTRUCTIONoFlISTINGc | flTHREADmODE2_ALLOWnEWdROPnOTiNaDAMtEMP ) ;
        tinP.ta.pushed.u.listWalk.cbf.idCallP ++ ;

        countT save = tinP.ta.retained.u.listWalk.walk.idGrabLayer ;
                      tinP.ta.retained.u.listWalk.walk.idGrabLayer = idGrabLayerP ;

        // ********************************************************************************************************************************************************************
        flagsT flRetCode = !tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP ? flLISTwALKcALLbACKrETURNcODE_null : (*tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP)( tinP ) ;
        // ********************************************************************************************************************************************************************
        THREADmODE2rESTORE

        tinP.ta.retained.u.listWalk.walk.idGrabLayer = save ;

        FV(flLISTwALKcALLbACKrETURNcODE,flRetCode) ;
    
        //CS:CODEsYNC: PSEUDOdUPLICATEcODE 2200004 2200004
        if( !POOP && tinP.ta.pushed.u.listWalk.cbf.pNewP )
        {
            flagsRC |= flLISTwALKrETURNcODE_NEWlISTING ;
            cKidNew ++ ;

            listingC*& pNew = tinP.ta.pushed.u.listWalk.cbf.pNewP ;
            __( ((listC*)pNew)->aptBro ) ;
                ((listC*)pNew)->aptBro = *pApt ;
                                          *pApt = pNew ;

            //if( tinP.pc Utility[ 0 ] && idName == LISTnAME_RECORD )
            //{
            //    poolC* pPoolIn = poolC::pPoolIF( tinP , (byteT*)pNew ) ;
            //    boolT  bOk     = listingC::bIsListingIF( tinP , pNew ) ;
            //
            //    OStEXT(   ostoSay , TUCK << 2 ) ;
            //    OStEXTAK( ostoSay , "listC::walkF new [idAdam,apt,ptr,puse,inpool]: " ) ;
            //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , *pApt , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , pNew , 0 ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTA(  ostoSay , tinP.pPoolUse->postNameF( tinP ) ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTA(  ostoSay , pPoolIn ? pPoolIn->postNameF( tinP ) : "unknown" ) ;
            //    OStEXTA(  ostoSay , bOk ? " (is a listingC)" : " (is NOT a listingC)" ) ;
            //    OStEXTAK( ostoSay , "\r\n" ) ;
            //
            //    CONoUTrAW( ostoSay ) ;
            //    LOGrAW(    ostoSay ) ;
            //}

                                                  pNew = 0 ;
            __( !*pApt ) ;
        }
    }

    if( !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_DOnOTuNGRABwOTHaTeNDoFwALK ) )
    {
        DELzOMBIE( ppHand[  offWoth ] ) ;

        if( bWothIsRoot && !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_RETAINrOOT ) )
        {
            if( tinP.ta.pushed.u.listWalk.walk.ppHandleRootP && tinP.ta.pushed.u.listWalk.walk.pbHandleRootP )
            {
                handleC*& phRoot = *tinP.ta.pushed.u.listWalk.walk.ppHandleRootP ;
                DELzOMBIE( phRoot ) ;
            
                if( tinP.ta.pushed.u.listWalk.walk.pbHandleRootP ) phRoot = new( 0 , tinP , tinP.ta.pushed.u.listWalk.walk.pbHandleRootP , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
            }
            else if( tinP.ta.pushed.u.listWalk.walk.pHandleRootP ) tinP.ta.pushed.u.listWalk.walk.pHandleRootP->closeIfF() ;
        }
    }

    if( !( F(tinP.ta.pushed.u.listWalk.walk.flagsWalkP) & flLISTwALK_DOnOTuNGRABoOTHaTeNDoFwALK ) ) { DELzOMBIE( ppHand[ !offWoth ] ) ; }

    if( !ppHand[ 0 ] && tinP.ta.pushed.u.listWalk.walk.pHandleLoP ) ppHand[ 0 ] = new( 0 , tinP , (byteT*)tinP.ta.pushed.u.listWalk.walk.pHandleLoP , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
    if( !ppHand[ 1 ] && tinP.ta.pushed.u.listWalk.walk.pHandleHiP ) ppHand[ 1 ] = new( 0 , tinP , (byteT*)tinP.ta.pushed.u.listWalk.walk.pHandleHiP , SIZEOF_handleC ) handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

    if( bClearPoolRecord ) tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;

    //{ puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ; PUSE( tinP , *(byteT**)&pczName ) ; }
    tinP.tlsDelF( *(byteT**)&pczName ) ;

    tinP.ta.pushed.u.listWalk.cbf.idNestP -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6008.listc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6023.listc.listc BEGIN
#define DDNAME       "3func.360e6023.listc.listc"
#define DDNUMB      (countT)0x360e6023
#define IDFILE      (countT)0x1426


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/listC::listC( tinS& tinP , const countT idNameP , const flagsT flagsP ) :/*1*/
listingC( tinP , flagsP ) ,
idName( idNameP ) ,
idNameKidDefaultLath( 0 )
{
    _IO_

    //tinP.pc Utility[ 0 ] ++ ;
    //CONoUTrAW7( " listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / +\r\n" ) ;

    __NZ( idName != LISTnAME_ROOT && idName != LISTnAME_PREALLOCATED ) ; //THIS IS TO MAKE IT EASIER TO FIND ILLEGAL CALLS TO ME ; I MAY BE CALLED ONLY BY poolC::face_poolC_S::face_poolC_S

    __( !( idName >> sizeof( countT ) * SB - 1 ) ) ;
    listingC::flagsi |= fliLISTINGc_MIXINlIST ;
    //CONoUTrAW( "listC\r\n" ) ; 

    //if( idNameP == 0x80000001 && tinP.pPoolUse )
    //{
    //    CONoUTrAW3( "listC named 10000008 [this]: " , this , " in pool \"" ) ;
    //    CONoUTrAW( tinP.pPoolUse->postNameF( tinP ) ) ;
    //    CONoUTrAW( "\"\r\n" ) ;
    //}

    if( tinP.pEther )
    {
        timeLathModified.time2 = timeLathModified.time1 = 0 ;
        tinP.pEther->osTimeNowF( tinP , timeLathModified.time1 , timeLathModified.time2 ) ;
    }
    //CONoUTrAW7( " listC [@,idName,idLevel]: " , this , " " , idName , " " , tinP.pc Utility[ 0 ] , " / -\r\n" ) ;
    //tinP.pc Utility[ 0 ] -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6023.listc.listc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6024.listc.namef BEGIN
#define DDNAME       "3func.360e6024.listc.namef"
#define DDNUMB      (countT)0x360e6024
#define IDFILE      (countT)0x1427


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
the full name of a listC instance is a null terminated string of countT values of the form { LISTnAME_ROOT , n2 , n3 , ... , s3 , s2 , s1 , me , 0 }
parameters
 tinP
 idP
  can be any value
  0: returns me, my name
  1: returns n1, the name of the root list, which is always LISTnAME_ROOT
  -1: returns s1, the name of the list that contains me (dad)
  -2: returns s2, the name of the list that contains the list that contains me (daddad)
  etc.
*/
/**/

// MINIMAL ERROR CHECKING, FOR SPEED

/*1*/countT listC::nameF( sCountT idP ) const/*1*/
{
    //O: _IO_

    if( !( flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

    ZE( countT , name ) ;
    if( !idP ) name = idName ;
    else if( idP < 0 )
    {
        countT cSkip = - idP - 1 ;

        listC* pc = &APT( listC , aptDad ) ;
        while( pc && cSkip -- )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
            pc = &APT( listC , pc->aptDad ) ;
        }

        if( pc )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
            name = pc->idName ;
        }
    }
    else
    {
        countT ccName = 1 ; // 1 IS TO COUNT MYSELF
        {
            listC* pc = &APT( listC , aptDad ) ;
            while( pc )
            {
                if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
                ccName ++ ;
                pc = &APT( listC , pc->aptDad ) ;
            }
        }

        countT cSkip = ccName - idP - 1 ;

        listC* pc = &APT( listC , aptDad ) ;
        while( pc && cSkip -- )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
            pc = &APT( listC , pc->aptDad ) ;
        }

        if( pc )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
            name = pc->idName ;
        }
    }

    return name ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6024.listc.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6025.listc.namef BEGIN
#define DDNAME       "3func.360e6025.listc.namef"
#define DDNUMB      (countT)0x360e6025
#define IDFILE      (countT)0x1428


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 pczNameP
  must be 0
  20140111@0653: obsolete: will be allocated in ifcIDpOOL_ADAMtEMP
  will be allocated in TLS ("thread local storage")
  caller must NOT tag using the ___( ) macro
  caller must delete
*/
/**/

// MINIMAL ERROR CHECKING, FOR SPEED

/*1*/countT listC::nameF( tinS& tinP , countT*& pczNameP ) const/*1*/
{
    _IO_

    if( pczNameP ) { BLAMMO ; }

    countT ccName = 1 ; // 1 IS TO COUNT MYSELF
    {
        listC* pc = &APT( listC , aptDad ) ;
        while( pc )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

            ccName ++ ;
            pc = &APT( listC , pc->aptDad ) ;
        }
    }

    //{ puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ; PUSE.newF( tinP , LF , *(byteT**)&pczNameP , sizeof( countT ) * ( ccName + 1 ) ) ; ___( pczNameP ) ; } // CALLER SHOULD TAG AND MUST ENSURE THAT ADAMtEMP POOL IS USED WHEN TAGGING
    pczNameP = (countT*)tinP.tlsNewF( sizeof( countT ) * ( ccName + 1 ) ) ;

    if( pczNameP )
    {

        countT* pcTo = pczNameP + ccName ;
        *( pcTo -- ) = 0 ;
        *( pcTo -- ) = idName ;

        listC* pc = &APT( listC , aptDad ) ;
        while( pc )
        {
            if( !( pc->flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }
            *( pcTo -- ) = pc->idName ;
            pc = &APT( listC , pc->aptDad ) ;
        }
        __( pcTo + 1 - pczNameP ) ;
    }

    return ccName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6025.listc.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6026.listc.resetIndexBitsIF BEGIN
#define DDNAME       "3func.360e6026.listc.resetIndexBitsIF"
#define DDNUMB      (countT)0x360e6026
#define IDFILE      (countT)0x1429


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/flagsT listC::resetIndexBitsIF( tinS& tinP , handleC& hListP , const flagsT flagsP , const countT idGrabLayerP )/*1*/
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

    listC& list = *(listC*)hListP.osF( ifcIDtYPEhANDLE_LISTING ) ;
    if( !( list.flagsi & fliLISTINGc_MIXINlIST ) ) { BLAMMO ; }

    grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    PUSHtINaRGS
    tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkResetIndexBitsCBF ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e6* : 3func.360e6026.listc.resetIndexBitsIF END
