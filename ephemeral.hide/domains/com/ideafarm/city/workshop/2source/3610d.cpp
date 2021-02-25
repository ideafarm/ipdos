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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d002.linkedc.dt_linkedc BEGIN
#define DDNAME       "3func.3610d002.linkedc.dt_linkedc"
#define DDNUMB      (countT)0x3610d002
#define IDFILE      (countT)0x14a7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/linkedC::~linkedC( voidT )/*1*/
{
    TINSL

    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        //if( tinP.pc Utility[ 0 ] ) { CONoUTrAW( "linkedC destructor\r\n" ) ; } //U:: TO FIND A BUG

        if( &root != this )
        {
            //LOGrAW5( "linkedC ----                              :    " , tinP.monitor.idThread , "    " , this , "\r\n" ) ;

            grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

            linkedC* pc = &root ;
            pc->grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;
            //LOGrAW7( "8 linkedC ----   grabbed [idThread,this,that]: " , tinP.monitor.idThread , "    " , this , "    " , pc , "\r\n" ) ;

            ZE( boolT , bFound ) ;
            if( !pc->pKid ) pc->ungrabF( tinP ) ;
            else            while( pc->pKid )
            {
                if( getNegAM( pc->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }

                pc->pKid->grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;
                //LOGrAW7( "7 linkedC ----   grabbed [idThread,this,that]: " , tinP.monitor.idThread , "    " , this , "    " , pc->pKid , "\r\n" ) ;
        
                //LOGrAW5( "linkedC ----      walk [idThread,pc->pKid]:    " , tinP.monitor.idThread , "                      " , pc->pKid , "\r\n" ) ;

                if( pc->pKid == this )
                {
                    //LOGrAW( "                                                                                                found myself!\r\n" ) ;
                    bFound = 1 ;

                    if( pKid )
                    {
                        pKid->grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;
                        //LOGrAW7( "4 linkedC ----   grabbed [idThread,this,that]: " , tinP.monitor.idThread , "    " , this , "    " , pKid , "\r\n" ) ;
                    }

                    pc->pKid = pKid ;
                               pKid = 0 ;

                    ungrabF( tinP ) ;
                    //LOGrAW7( "3 linkedC ---- UNgrabbed [idThread,this,that]: " , tinP.monitor.idThread , "    " , this , "    " , this , "\r\n" ) ;
                }
        
                pc->ungrabF( tinP ) ;
                //LOGrAW7( "2 linkedC ---- UNgrabbed [idThread,this,that]: " , tinP.monitor.idThread , "    " , this , "    " , pc , "\r\n" ) ;

                if( !pc->pKid ) break ;
                else
                {
                    pc = pc->pKid ;
                    if( !pc->pKid ) pc->ungrabF( tinP ) ;
                }
            }

            __Z( bFound ) ;
            if( !bFound )
            {
                LOGrAW( "1 ~linkedC: error: could not find myself in the list; calling BLAMMO\r\n" ) ;
                BLAMMO ;
            }
        }

        if( getNegAM( finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }
        putNegAM( finger , FINGERnEG_GRABOTc ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d002.linkedc.dt_linkedc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d003.linkedc.linkedc BEGIN
#define DDNAME       "3func.3610d003.linkedc.linkedc"
#define DDNUMB      (countT)0x3610d003
#define IDFILE      (countT)0x14a8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEsHOWtEXT( "scratch" )/*1*/

/*
use me to ct a root instance
it is illegal to use this ct'or to ct a derived class instance
 the root should not be of a derived type
i am only for ct'ing the root of a linked list
the root has no application data associated with it
my idTypeP and idGrabLayerP are copied into each instance linked to me
parameters
 tinP
 idLineCtP
 idiFileCtP
 pbBitsCtP
 idTypeP
  for application use
  normally 0
  application code can specify a unique idType value so that it can identify the derived class when walking heterogeneous linked instances
 idGrabLayerP
*/

/**/

/*1*/linkedC::linkedC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idTypeP , const countT idGrabLayerP ) :/*1*/
grabotC( tinP , idLineCtP , idiFileCtP , pbBitsCtP , this == &processGlobal3I._handleC_linked_sm ? flGRABITc_SHARElAYER | flGRABITc_SNEAKYlOVER : flGRABITc_SHARElAYER , 0 , idGrabLayerP ) ,
idType( idTypeP ) ,
root( *this ) ,
pKid( 0 ) ,
idAdam( tinP.pAdamGlobal1->idAdam )
{
    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        //if( tinP.pc Utility[ 0 ] ) { CONoUTrAW( "linkedC 2\r\n" ) ; } //U:: TO FIND A BUG

        if( getNegAM( finger ) == FINGERnEG_LINKEDc ) { BLAMMO ; }  //U:: 20201027@1358: TO FIND A BUG
        if( getNegAM( finger ) != FINGERnEG_GRABOTc ) { BLAMMO ; }  //U:: 20201027@1358: TO FIND A BUG
        putNegAM( finger , FINGERnEG_LINKEDc ) ;








































        //if( this == &processGlobal3I._handleC_linked_sm )
        //{
        //    CONoUTrAW3( "\r\nlinkedC::linkedC for _handleC_linked_sm [idGrabLayerP]: " , idGrabLayerP , "\r\n" ) ;
        //}
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d003.linkedc.linkedc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d004.linkedc.linkedc BEGIN
#define DDNAME       "3func.3610d004.linkedc.linkedc"
#define DDNUMB      (countT)0x3610d004
#define IDFILE      (countT)0x14a9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 idLineCtP
 idiFileCtP
 pbBitsCtP
 rootP
  should specify an instance that is not of a derived type
   the root instance has no application data associated with it
  i will be attached as the kid of the root
   the former kid of the root will become my kid
   this is most efficient when ct and dt is probabilistically lifo
    lifo is not required
    but ct and dt is fastest when it is strictly lifo
*/

/**/

/*1*/linkedC::linkedC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , linkedC& rootP ) :/*1*/
grabotC( tinP , idLineCtP , idiFileCtP , pbBitsCtP , &rootP == &processGlobal3I._handleC_linked_sm ? flGRABITc_SHARElAYER | flGRABITc_SNEAKYlOVER : flGRABITc_SHARElAYER , 0 , rootP.idGrabLayer ) ,
idType( rootP.idType ) ,
root( rootP ) ,
pKid( 0 ) ,
idAdam( tinP.pAdamGlobal1->idAdam )
{
    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        //if( tinP.pc Utility[ 0 ] ) { CONoUTrAW( "linkedC 1\r\n" ) ; } //U:: TO FIND A BUG

        if( getNegAM( finger ) == FINGERnEG_LINKEDc ) { BLAMMO ; }  //U:: 20201027@1358: TO FIND A BUG
        if( getNegAM( finger ) != FINGERnEG_GRABOTc ) { BLAMMO ; }  //U:: 20201027@1358: TO FIND A BUG
        putNegAM( finger , FINGERnEG_LINKEDc ) ;

        grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

        //U::TO FIND A BUG 20161225@0951
        {
            root.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;

            //LOGrAW5( "linkedC ++++                              :    " , tinP.monitor.idThread , "    " , this , "\r\n" ) ;
        
            linkedC* pc = &root ;
            while( pc->pKid )
            {
                if( getNegAM( pc->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }
                if( getNegAM( pc->pKid->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }
                pc->pKid->grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;

                //LOGrAW5( "linkedC ++++      walk [idThread,pc->pKid]:    " , tinP.monitor.idThread , "                      " , pc->pKid , "\r\n" ) ;
        
                if( pc->pKid == this )
                {
                    LOGrAW( "linkedC::linkedC / error: i am already in the list, so am calling BLAMMO\r\n" ) ;      //U::20201027@1300: OBSERVED, AFTER ADDING bksTelemetryApp
                    BLAMMO ;
                }
        
                pc->ungrabF( tinP ) ;
                pc = pc->pKid ;
            }
            pc->ungrabF( tinP ) ;
        }

        root.grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;

        if( !root.pKid ) { root.pKid = this ; }
        else
        {
            //20161225@0937: CONJ: NOT NEEDED: root.pKid->grabF( tinP , TAGoR( TAGiDnULL , idLineCt , idiFileCt , (byteT*)0 ) ) ;

            pKid = root.pKid ;
                   root.pKid = this ;

            //20161225@0937: CONJ: NOT NEEDED: pKid->ungrabF( tinP ) ;
        }

        root.ungrabF( tinP ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d004.linkedc.linkedc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d005.linkedc.openkidf BEGIN
#define DDNAME       "3func.3610d005.linkedc.openkidf"
#define DDNUMB      (countT)0x3610d005
#define IDFILE      (countT)0x14aa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT linkedC::openKidF( tinS& tinP , handleC& hP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( ~hP ) ;
        if( POOP ) return ;
    }

    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        grabF( tinP , TAG( TAGiDnULL ) ) ;

        if( !pKid ) ungrabF( tinP ) ;
        else    
        {
            if( getNegAM( pKid->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }
            pKid->grabF( tinP , TAG( TAGiDnULL ) ) ;
            ungrabF( tinP ) ;
            hP.osF( ifcIDtYPEhANDLE_LINKED , (countT)pKid ) ;
        }
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d005.linkedc.openkidf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d006.linkedc.getlinkif BEGIN
#define DDNAME       "3func.3610d006.linkedc.getlinkif"
#define DDNUMB      (countT)0x3610d006
#define IDFILE      (countT)0x14ab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/linkedC& linkedC::getLinkIF( tinS& tinP , handleC& hP )/*1*/
{
    linkedC* pl = (linkedC*)hP.osF( ifcIDtYPEhANDLE_LINKED ) ;
    if( !pl                                               ) { BLAMMO ; }
    if( pl && getNegAM( pl->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }
    return *pl ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d006.linkedc.getlinkif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d007.linkedc.nextif BEGIN
#define DDNAME       "3func.3610d007.linkedc.nextif"
#define DDNUMB      (countT)0x3610d007
#define IDFILE      (countT)0x14ac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT linkedC::nextIF( tinS& tinP , handleC& hP )/*1*/
{
    //tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        linkedC* pOld = (linkedC*)hP.osF( ifcIDtYPEhANDLE_LINKED ) ;
        if( !pOld                                                  ) { BLAMMO ; }
        if(  pOld && getNegAM( pOld->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }

        linkedC* pNew = pOld->pKid ;
        if(  pNew && getNegAM( pNew->finger ) != FINGERnEG_LINKEDc ) { BLAMMO ; }

        if( pNew ) pNew->grabF( tinP , TAG( TAGiDnULL ) ) ;
        hP.closeIfF() ;
        if( pNew ) hP.osF( ifcIDtYPEhANDLE_LINKED , (countT)pNew ) ;
    }
    THREADmODE4rESTORE
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610d* : 3func.3610d007.linkedc.nextif END
