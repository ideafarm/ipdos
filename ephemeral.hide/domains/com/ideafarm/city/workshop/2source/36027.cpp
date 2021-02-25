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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027001.tablec.dt_tablec BEGIN
#define DDNAME       "3func.36027001.tablec.dt_tablec"
#define DDNUMB      (countT)0x36027001
#define IDFILE      (countT)0x1043


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1320001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4520104.1.1.0.html\"\>4520104:  WAKEsHOW( "example.simplest.func.1320001.tableC.dt_tableC" )\</A\>
this command d eletes the structures used within tableC to organize reference information
it does not d elete the objects to which the table refers
*/
/**/

/*1*/tableC::~tableC( voidT )/*1*/
{
    TINSL
    SCOOP
    _IO_
    purgeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027001.tablec.dt_tablec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027002.tablec.tablec BEGIN
#define DDNAME       "3func.36027002.tablec.tablec"
#define DDNUMB      (countT)0x36027002
#define IDFILE      (countT)0x1044


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1320002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6520104.1.1.0.html\"\>6520104:  WAKEsHOW( "example.simplest.func.1320002.tableC.tableC" )\</A\>
copies cells verbatim
after constructing a table using me, tableP can be d eleted
*/
/**/

/*1*/tableC::tableC( tableC& tableP )/*1*/ :
ether( tableP.ether ) ,
poop( tableP.ether ) ,
baton( tableP.ether , TAGnOtIN( TAGiDnULL ) ) ,
stNames( tableP.ether , tableP.ether , TAGnOtIN( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
idPhase( idTABLEpHASE_DEFINEcOLS ) ,
stEvents( tableP.ether , tableP.ether , TAGnOtIN( TAGiDnULL ) , flSTACKc_FIFO ) ,
cObjectsDue( 0 ) ,
psttnu( 0 ) ,
psttName( 0 ) ,
idTable( ++ pTinF()->pAdamGlobal1->_tableC_.idTableLath ) ,
stnu( tableP.ether , tableP.ether , TAGnOtIN( TAGiDnULL ) ) ,
cnu( 0 ) ,
tblnu( *this ) ,
flags( 0 )
{
    TINSL
    SCOOP

    _IO_

    countT cColsNew = tableP.cColsF( tinP ) ;
    for( countT idc = 1 ; idc <= cColsNew ; idc ++ ) newColF( tinP , tableP.nameF( tinP , idc ) ) ;

    copyCellsF( tinP , tableP ) ;
    ether.strMakeF( tinP , LF , psttName , TF1(idTable) ) ; ___( psttName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027002.tablec.tablec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027003.tablec.operator_equal BEGIN
#define DDNAME       "3func.36027003.tablec.operator_equal"
#define DDNUMB      (countT)0x36027003
#define IDFILE      (countT)0x1045


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1320003.1.0.html\"\>definition\</A\>
copies cells verbatim
 after calling me, tableP can be d eleted
*/
/**/

/*1*/tableC& tableC::operator = ( tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    _IO_
    purgeF( tinP ) ;

    countT cColsNew = tableP.cColsF( tinP ) ;
    for( countT idc = 1 ; idc <= cColsNew ; idc ++ ) newColF( tinP , tableP.nameF( tinP , idc ) ) ;

    copyCellsF( tinP , tableP ) ;
    ether.strMakeF( tinP , LF , psttName , TF1(idTable) ) ; ___( psttName ) ;

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027003.tablec.operator_equal END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027004.tablec.tablec BEGIN
#define DDNAME       "3func.36027004.tablec.tablec"
#define DDNUMB      (countT)0x36027004
#define IDFILE      (countT)0x1046


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1320004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5520104.1.1.0.html\"\>5520104:  WAKEsHOW( "example.simplest.func.1320004.tableC.tableC" )\</A\>
constructs a tableC object and sets its internal name
 the internal name is orthogonal to the external name used in code
 the external name has no effect on the behavior of tableC objects
  all behavior that is affected by the identity of a table uses the internal name, not the external name
  the external name is only for use by the code in the adam definition that constructs the table object
arguments
 tinP
 etherP
 psttP
  can be 0
  if 0 then the internal name of the table is generated from the sequence number of the table
   example, the default internal name of the 23rd table constructed by an adam is T("23")
  if not 0 then psttP is used as the internal name of the table
  the internal name of the source table is prepended to each source column name when a table is derived from a source table
*/
/**/

/*1*/tableC::tableC( tinS& tinP , etherC& etherP , const strokeS* const psttP )/*1*/ :
ether( etherP ) ,
poop( etherP ) ,
baton( tinP , TAG( TAGiDnULL ) ) ,
stNames( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ,
idPhase( idTABLEpHASE_DEFINEcOLS ) ,
stEvents( tinP , etherP , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ,
cObjectsDue( 0 ) ,
psttnu( 0 ) ,
psttName( 0 ) ,
idTable( ++ tinP.pAdamGlobal1->_tableC_.idTableLath ) ,
stnu( tinP , etherP , TAG( TAGiDnULL ) ) ,
cnu( 0 ) ,
tblnu( *this ) ,
flags( 0 )
{
    SCOOP
    _IO_
    if( psttP ) { ether.strFuseF( tinP , psttName , psttP              ) ; ___( psttName ) ; }
    else        { ether.strFuseF( tinP , psttName , TF1(idTable) ) ; ___( psttName ) ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027004.tablec.tablec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027005.tablec.grabf BEGIN
#define DDNAME       "3func.36027005.tablec.grabf"
#define DDNUMB      (countT)0x36027005
#define IDFILE      (countT)0x1047


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320005.1.0.html\"\>definition\</A\>
grabs a table, so that access by other threads is blocked
*/
/**/

/*1*/voidT tableC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( POOP ) return ;
    }

    _IO_
    baton.grabF( tinP , TAGoR( TAGiDnULL , idLineP , idiFileP , pbBitsP ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027005.tablec.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027006.tablec.ungrabf BEGIN
#define DDNAME       "3func.36027006.tablec.ungrabf"
#define DDNUMB      (countT)0x36027006
#define IDFILE      (countT)0x1048


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320006.1.0.html\"\>definition\</A\>
lets go of the table, so that it can be accessed by other threads
*/
/**/

/*1*/voidT tableC::ungrabF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( POOP ) return ;
    }

    _IO_
    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027006.tablec.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027007.tablec.newcolf BEGIN
#define DDNAME       "3func.36027007.tablec.newcolf"
#define DDNUMB      (countT)0x36027007
#define IDFILE      (countT)0x1049


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newColF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9520104.1.1.0.html\"\>9520104:  WAKEsHOW( "example.simplest.func.1320007.tableC.newColF" )\</A\>
use this command to enumerate the number and type of the objects in each coinstantiation event (each row of the table)
call this once for each of the columns that a table is to have
new columns cannot be added to a table that already contains references to data
this cannot be called after newEventF has been called
*/
/**/

/*1*/voidT tableC::newColF( tinS& tinP , const strokeS* const psttNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return  ;
        __( idPhase > idTABLEpHASE_DEFINEcOLS ) ;
        if( POOP ) return  ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    ZE( strokeS* , psttn ) ;
    if( psttNameP && psttNameP->idAdam ) { ether.strMakeF( tinP , LF , psttn , psttNameP                   ) ; ___( psttn ) ; }
    else                                 { ether.strMakeF( tinP , LF , psttn , T("c")+TF1(1+stNames) ) ; ___( psttn ) ; }
    stNames << psttn ;

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027007.tablec.newcolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027008.tablec.neweventf BEGIN
#define DDNAME       "3func.36027008.tablec.neweventf"
#define DDNUMB      (countT)0x36027008
#define IDFILE      (countT)0x104a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newEventF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8520104.1.1.0.html\"\>8520104:  WAKEsHOW( "example.simplest.func.1320008.tableC.newEventF" )\</A\>
this must be called before calling newObjectF for the first of a new set of coinstantiated objects
 each row of the table is referred to as a set of coinstantiated objects
*/
/**/

/*1*/voidT tableC::newEventF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return  ;
        __( cObjectsDue ) ;
        if( POOP ) return  ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    if( idPhase == idTABLEpHASE_DEFINEcOLS ) idPhase = idTABLEpHASE_COLSdEFINED ;

    stackC* pstObjects = new( 0 , tinP , LF ) stackC( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_count2S ) ; ___( pstObjects ) ;
    __Z( pstObjects ) ;
    stEvents << (countT)pstObjects ;

    cObjectsDue = stNames ;

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027008.tablec.neweventf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027009.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027009.tablec.newobjectf"
#define DDNUMB      (countT)0x36027009
#define IDFILE      (countT)0x104b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3520104.1.1.0.html\"\>3520104:  WAKEsHOW( "example.simplest.func.1320009.tableC.newObjectF" )\</A\>
stores the value of the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
the value, rather than a reference, is stored because the value will fit into a countT
arguments
 tinP
 cP
  the value of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const countT cP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_04 , cP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027009.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700a.tablec.newobjectf BEGIN
#define DDNAME       "3func.3602700a.tablec.newobjectf"
#define DDNUMB      (countT)0x3602700a
#define IDFILE      (countT)0x104c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.132000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c520104.1.1.0.html\"\>c520104:  WAKEsHOW( "example.simplest.func.132000a.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c2P
  the address of the specified string, psttP is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_07 | _CT2_1 , (countT)psttP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700a.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700b.tablec.newobjectf BEGIN
#define DDNAME       "3func.3602700b.tablec.newobjectf"
#define DDNUMB      (countT)0x3602700b
#define IDFILE      (countT)0x104d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.132000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d520104.1.1.0.html\"\>d520104:  WAKEsHOW( "example.simplest.func.132000b.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 stP
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , stackC& stP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    countT idType = _CT2_3 ;
    switch( stP.idTypeF( tinP ) )
    {
        case ifcSTACKtYPE_tableC      : { idType |= _CT1_01 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_countT      : { idType |= _CT1_04 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_sCountT     : { idType |= _CT1_05 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_measureT    : { idType |= _CT1_06 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_strokeS : { idType |= _CT1_07 | _CT2_3 | _CT2_1 ; break ; }
        case ifcSTACKtYPE_PTR_count2S : { idType |= _CT1_08 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count3S : { idType |= _CT1_09 | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count4S : { idType |= _CT1_0a | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count5S : { idType |= _CT1_0b | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count6S : { idType |= _CT1_0c | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count7S : { idType |= _CT1_0d | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_count8S : { idType |= _CT1_0e | _CT2_3          ; break ; }
        case ifcSTACKtYPE_PTR_nicNameC : { idType |= _CT1_0f | _CT2_3          ; break ; }
    }

    newObjectPrivateF( tinP , idType , (countT)&stP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700b.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700c.tablec.newobjectf BEGIN
#define DDNAME       "3func.3602700c.tablec.newobjectf"
#define DDNUMB      (countT)0x3602700c
#define IDFILE      (countT)0x104e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.132000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a520104.1.1.0.html\"\>a520104:  WAKEsHOW( "example.simplest.func.132000c.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c2P
  the address of this object is stored in the cell
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b6.flTABLEnEWoBJECT!||
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count2S& c2P , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flTABLEnEWoBJECT , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_08 , (countT)&c2P , flagsP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700c.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700d.tablec.operator_multiply BEGIN
#define DDNAME       "3func.3602700d.tablec.operator_multiply"
#define DDNUMB      (countT)0x3602700d
#define IDFILE      (countT)0x104f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.132000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1820104.1.1.0.html\"\>1820104:  WAKEsHOW( "example.simplest.func.132000d.tableC.operator_multiply" )\</A\>
combines two tables, matching each row in *this with every row in tableP
 cRows will be cRowsF( tinP ) * tableP.cRowsF( tinP )
 cCols will be cColsF( tinP ) + tableP.cColsF( tinP )
*/
/**/

/*1*/tableC tableC::operator * ( tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
        __( this == &tableP ) ;
        if( POOP ) return *this ;
    }

    _IO_
    tableC rslt( tinP , ether ) ;

    const countT cCols = stNames ;
    {for( countT idc = 1 ; idc <= cCols ; idc ++ ) rslt.newColF( tinP , T(psttName)+T(".")+T(nameF(tinP,idc)) ) ;}
    const countT cColsRight = tableP.cColsF( tinP ) ;
    for( countT idc = 1 ; idc <= cColsRight ; idc ++ ) rslt.newColF( tinP , T(tableP.nameF(tinP))+T(".")+T(tableP.nameF(tinP,idc)) ) ;

    const countT cRows = stEvents ;
    const countT cRowsRight = tableP.cRowsF( tinP ) ;
    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        for( countT idrr = 1 ; idrr <= cRowsRight ; idrr ++ )
        {
            rslt.newEventF( tinP ) ;
            {for( countT idc = 1 ; idc <= cCols      ; idc ++ ) rslt.newObjectF( tinP , operator()(  idr , idc ) , _CT1_03 ) ;}
            for( countT idc = 1 ; idc <= cColsRight ; idc ++ ) rslt.newObjectF( tinP ,     tableP( idrr , idc ) , _CT1_03 ) ;
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700d.tablec.operator_multiply END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700e.tablec.operator_bitand BEGIN
#define DDNAME       "3func.3602700e.tablec.operator_bitand"
#define DDNUMB      (countT)0x3602700e
#define IDFILE      (countT)0x1050


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.132000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3820104.1.1.0.html\"\>3820104:  WAKEsHOW( "example.simplest.func.132000e.tableC.operator_bitwiseAnd" )\</A\>
selects rows from me
arguments
 tableP
  a table of value stacks
  the idr'th value in each value stack corresponds to my idr'th row
  if all of the corresponding values are nonze, the row is retained
*/
/**/

/*1*/tableC tableC::operator & ( tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
    }

    _IO_

    const countT cColsRight = tableP.cColsF( tinP ) ;
    const countT cRowsRight = tableP.cRowsF( tinP ) ;

    tableC rslt( tinP , ether ) ;

    const countT cRows = stEvents ;
    const countT cCols = stNames ;
    for( countT idc = 1 ; idc <= cCols ; idc ++ ) rslt.newColF( tinP , T(psttName)+T(".")+T(nameF(tinP,idc)) ) ;

    tableC handles( tinP , ether ) ;
    for( countT idcr = 1 ; idcr <= cColsRight ; idcr ++ ) handles.newColF( tinP , T(tableP.nameF(tinP,idcr)) ) ;

    for( countT idrr = 1 ; idrr <= cRowsRight ; idrr ++ )
    {
        handles.newEventF( tinP ) ;
        for( countT idcr = 1 ; idcr <= cColsRight ; idcr ++ )
        {
            ZE( countT , cnu ) ;            
            handles.newObjectF( tinP , cnu ) ;
        }
    }

    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        countT bKeep = 1 ;
        for( countT idrr = 1 ; idrr <= cRowsRight ; idrr ++ )
        {
            for( countT idcr = 1 ; idcr <= cColsRight ; idcr ++ )
            {
                //U::REWRITE THIS WHEN stackC SUPPORTS handleC PLATES
                handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                handle.osF( ifcIDtYPEhANDLE_STACKwALK , handles._CT1_04F( idrr , idcr ) ) ;
                bKeep &= !!tableP._CT2_3F( idrr , idcr ).downF( tinP , handle ) ;
                handles._CT1_04F( idrr , idcr ) = handle.osF( ifcIDtYPEhANDLE_STACKwALK ) ;
            }
        }

        if( bKeep )
        {
            rslt.newEventF( tinP ) ;
            for( countT idc = 1 ; idc <= cCols ; idc ++ ) rslt.newObjectF( tinP , operator()( idr , idc ) , _CT1_03 ) ;
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700e.tablec.operator_bitand END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700f.tablec.operator_shiftleft BEGIN
#define DDNAME       "3func.3602700f.tablec.operator_shiftleft"
#define DDNUMB      (countT)0x3602700f
#define IDFILE      (countT)0x1051


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.132000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2820104.1.1.0.html\"\>2820104:  WAKEsHOW( "example.simplest.func.132000f.tableC.operator_shiftLeft" )\</A\>
discards columns that are not specified in tableP
arguments
 tableP
  cells contain prefixed strings of strokes, which are scanned to find matching column names
  for each of my columns, i scan tableP to see if it exists in a cell
  if not, then that column is omitted from the result
*/
/**/

/*1*/tableC tableC::operator << ( tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
    }

    _IO_
    stackC stWanted( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_null , ifcSTACKtYPE_PTR_strokeS ) ;
    {
        const countT cRowsRight = tableP.cRowsF( tinP ) ;
        const countT cColsRight = tableP.cColsF( tinP ) ;

        for( countT idrr = 1 ; idrr <= cRowsRight ; idrr ++ )
        {
            for( countT idcr = 1 ; idcr <= cColsRight ; idcr ++ ) stWanted << tableP._CT1_07F( idrr , idcr ) ;
        }
    }

    tableC rslt( tinP , ether ) ;

    const countT cCols = stNames ;
    for( countT idc = 1 ; idc <= cCols ; idc ++ )
    {
        if( stWanted( (strokeS*)stNames[ idc ] ) ) rslt.newColF( tinP , T(psttName)+T(".")+T(nameF(tinP,idc)) ) ;
    }

    const countT cRows = stEvents ;
    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        rslt.newEventF( tinP ) ;
        for( countT idc = 1 ; idc <= cCols ; idc ++ )
        {
            if( stWanted( (strokeS*)stNames[ idc ] ) ) rslt.newObjectF( tinP , operator()( idr , idc ) , _CT1_03 ) ;
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602700f.tablec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027010.tablec.calcf BEGIN
#define DDNAME       "3func.36027010.tablec.calcf"
#define DDNUMB      (countT)0x36027010
#define IDFILE      (countT)0x1052


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$calcF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0820104.1.1.0.html\"\>0820104:  WAKEsHOW( "example.simplest.func.1320010.tableC.calcF" )\</A\>
calculates the value of my compiled expressions
 each cell is a stackC of values
  each value corresponds to a row in tableP
every one of my cells must be a compiled expression
tableP is the table that contains the columns named in the source expressions
arguments
 stStacksToDeleteP
  this stackC object will receive pointers to stackC objects
   one stackC object is constructed in the poolOld for each row of tableP
   this stack contains the calculated values
  the caller is responsible for deleting these stacks
   do not d elete these stacks until you are finished using the result table
 tableP
  this is the table that my compiled expressions are to be applied to
*/
/**/

/*1*/tableC tableC::calcF( stackC& stStacksToDeleteP , tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
    }

    _IO_
    tableC rslt( tinP , ether ) ;

    const countT cCols = cColsF( tinP ) ;
    for( countT idc = 1 ; idc <= cCols ; idc ++ ) rslt.newColF( tinP , T(psttName)+T(".")+T(nameF(tinP,idc)) ) ;

    const countT cRows = cRowsF( tinP ) ;
    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        rslt.newEventF( tinP ) ;
        for( countT idc = 1 ; idc <= cCols ; idc ++ )
        {
            ZE( countT , idc1 ) ;
            ZE( countT , idop ) ;
            ZE( countT , idc2 ) ;
            {
                stackC& stx = *(stackC*)operator()( idr , idc ).c2 ;

                handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                idc1 = stx.downF( tinP , handle ) ;
                idop = stx.downF( tinP , handle ) ;
                idc2 = stx.downF( tinP , handle ) ;
                __Z( idc1 ) ;
                __Z( idop ) ;
                __Z( idc2 ) ;

                __( idc1 > tableP.cColsF( tinP ) ) ;
                __( idc2 > tableP.cColsF( tinP ) ) ;
            }
            __( idop - idcOPERATOR_EQUALS ) ;

            stackC* pstx = new( 0 , tinP , LF ) stackC( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ; ___( pstx ) ;
            if( pstx )
            {
                rslt.newObjectF( tinP , *pstx ) ;
                stStacksToDeleteP << (countT)pstx ;    

                const countT cRowsr = tableP.cRowsF( tinP ) ;
                for( countT idrr = 1 ; idrr <= cRowsr ; idrr ++ )
                {
                    *pstx << (countT)!ether.strCompareF( tinP , tableP._CT1_07F( idrr , idc1 ) , tableP._CT1_07F( idrr , idc2 ) ) ;
                }
            }
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027010.tablec.calcf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027011.tablec.compilef BEGIN
#define DDNAME       "3func.36027011.tablec.compilef"
#define DDNUMB      (countT)0x36027011
#define IDFILE      (countT)0x1053


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$compileF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f720104.1.1.0.html\"\>f720104:  WAKEsHOW( "example.simplest.func.1320011.tableC.compileF" )\</A\>
evaluates to a table of compiled expressions
compiles a table of source expressions
arguments
 stStacksToDeleteP
  this stackC object will receive pointers to stackC objects
   one stackC object is constructed in the poolOld for each expression to be compiled
  the caller is responsible for deleting these stacks
   do not d elete these stacks until you are finished using the result table
 tableP
  this is the table that is to be compiled
  every cell of the table must contain an expression in source form
   example: "salesReps.name == clients.repName"
   example: "salesReps.salesYTD != salesReps.salesMTD"
*/
/**/

/*1*/tableC tableC::compileF( stackC& stStacksToDeleteP , tableC& tableP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
    }

    _IO_
    tableC rslt( tinP , ether ) ;

    const countT cCols = tableP.cColsF( tinP ) ;
    for( countT idc = 1 ; idc <= cCols ; idc ++ ) rslt.newColF( tinP , T(psttName)+T(".")+T(tableP.nameF(tinP,idc)) ) ;

    const countT cRows = tableP.cRowsF( tinP ) ;
    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        rslt.newEventF( tinP ) ;
        for( countT idc = 1 ; idc <= cCols ; idc ++ )
        {
            stackC* pstx = new( 0 , tinP , LF ) stackC( tinP , ether , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ; ___( pstx ) ;
            if( pstx )
            {
                rslt.newObjectF( tinP , *pstx ) ;
                stStacksToDeleteP << (countT)pstx ;    

                strokeS* psttb = (strokeS*)tableP( idr , idc ).c2 ;
                strokeS sttq( (countT)0 , sc_IGNOREqUOTES ) ;

                ZE( strokeS* , psttw ) ;
                ether.strWordF( tinP , psttw , psttb , sttq , S1C(' ') , 1 ) ;
                *pstx << idColF( tinP , psttw ) ;
                ether.delF( tinP , psttw ) ;

                ether.strWordF( tinP , psttw , psttb , sttq , S1C(' ') , 2 ) ;
                *pstx << idOperatorF( tinP , psttw ) ;
                ether.delF( tinP , psttw ) ;

                ether.strWordF( tinP , psttw , psttb , sttq , S1C(' ') , 3 ) ;
                *pstx << idColF( tinP , psttw ) ;
                ether.delF( tinP , psttw ) ;
            }
        }
    }

    return rslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027011.tablec.compilef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027012.tablec.operator_call BEGIN
#define DDNAME       "3func.36027012.tablec.operator_call"
#define DDNUMB      (countT)0x36027012
#define IDFILE      (countT)0x1054


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1320012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d820104.1.1.0.html\"\>d820104:  WAKEsHOW( "example.simplest.func.1320012.tableC.operator_call" )\</A\>
evaluates to a reference to the count2S object that is allocated by the tableC object for each cell
 c1 contains the idType of the cell
 c2 contains the value of the cell
  for a cell that contains a countT object, c2 is that countT object
  for most other types of cells, c2 contains the address of the object referred to by the cell
   exception examples: measureT, sCountT
arguments
 idrP
 idcP
*/
/**/

/*1*/count2S& tableC::operator () ( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP

    stackC* pstObjects = (stackC*)stEvents[ idrP ] ;
    __Z( pstObjects ) ;
    if( POOP ) return c2nu ;
    count2S* pc2o = (count2S*)(*pstObjects)[ idcP ] ;
    __Z( pc2o ) ;
    if( POOP ) return c2nu ;

    IFbEcAREFUL
    {
        if( POOP ) return c2nu ;
        __Z( idrP ) ;
        __Z( idcP ) ;
        __( stEvents < idrP ) ;
        if( POOP ) return c2nu ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    while( pc2o->c1 == _CT1_03 && pc2o->c2 )
        pc2o = (count2S*)pc2o->c2 ;
    baton.ungrabF( tinP ) ;

    return *pc2o ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027012.tablec.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027013.tablec._ct1_04f BEGIN
#define DDNAME       "3func.36027013.tablec._ct1_04f"
#define DDNUMB      (countT)0x36027013
#define IDFILE      (countT)0x1055


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_04F.0.html\"\>instances\</A\>
\<A HREF=\"5.1320013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f620104.1.1.0.html\"\>f620104:  WAKEsHOW( "example.simplest.func.1320013.tableC._CT1_04F" )\</A\>
evaluates to a reference to a countT object
this countT object is the countT object allocated by the table
for this overload, its contents are being treated as data rather than as the address of data
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/countT& tableC::_CT1_04F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return cnu ;
        __( c2o.c1 - _CT1_04 ) ;
        if( POOP ) return cnu ;
    }

    _IO_
    return c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027013.tablec._ct1_04f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027014.tablec._ct1_07f BEGIN
#define DDNAME       "3func.36027014.tablec._ct1_07f"
#define DDNUMB      (countT)0x36027014
#define IDFILE      (countT)0x1056


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_07F.0.html\"\>instances\</A\>
\<A HREF=\"5.1320014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2720104.1.1.0.html\"\>2720104:  WAKEsHOW( "example.simplest.func.1320014.tableC._CT1_07F" )\</A\>
evaluates to a reference to a pointer to a prefixed string of strokeS objects
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/strokeS*& tableC::_CT1_07F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return (strokeS*&)c2nu.c2 ;
        __( c2o.c1 - ( _CT1_07 | _CT2_1 ) ) ;
        if( POOP ) return (strokeS*&)c2nu.c2 ;
    }

    _IO_
    return *(strokeS**)&c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027014.tablec._ct1_07f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027015.tablec._ct2_3f BEGIN
#define DDNAME       "3func.36027015.tablec._ct2_3f"
#define DDNUMB      (countT)0x36027015
#define IDFILE      (countT)0x1057


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT2_3F.0.html\"\>instances\</A\>
\<A HREF=\"5.1320015.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b720104.1.1.0.html\"\>b720104:  WAKEsHOW( "example.simplest.func.1320015.tableC._CT2_3F" )\</A\>
evaluates to a reference to the stack at (idrP,idcP)
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/stackC& tableC::_CT2_3F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return stnu ;
        __( !( c2o.c1 & _CT2_3 ) ) ;
        if( POOP ) return stnu ;
    }

    _IO_
    return *(stackC*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027015.tablec._ct2_3f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027016.tablec.ccolsf BEGIN
#define DDNAME       "3func.36027016.tablec.ccolsf"
#define DDNUMB      (countT)0x36027016
#define IDFILE      (countT)0x1058


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cColsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320016.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6620104.1.1.0.html\"\>6620104:  WAKEsHOW( "example.simplest.func.1320016.tableC.cColsF" )\</A\>
evaluates to the number of columns
arguments
 tinP
*/
/**/

/*1*/countT tableC::cColsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    return stNames ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027016.tablec.ccolsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027017.tablec.crowsf BEGIN
#define DDNAME       "3func.36027017.tablec.crowsf"
#define DDNUMB      (countT)0x36027017
#define IDFILE      (countT)0x1059


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cRowsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320017.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7620104.1.1.0.html\"\>7620104:  WAKEsHOW( "example.simplest.func.1320017.tableC.cRowsF" )\</A\>
evaluates to the number of rows
arguments
 tinP
*/
/**/

/*1*/countT tableC::cRowsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    return stEvents ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027017.tablec.crowsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027018.tablec.writef BEGIN
#define DDNAME       "3func.36027018.tablec.writef"
#define DDNUMB      (countT)0x36027018
#define IDFILE      (countT)0x105a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320018.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8620104.1.1.0.html\"\>8620104:  WAKEsHOW( "example.simplest.func.1320018.tableC.writeF" )\</A\>
appends a report of my contents to psttP
arguments
 tinP
 psttP
  can be 0 or not 0
  if 0 then csttEstimateP must be enough to hold the entire dump
  if not 0 then the psttP must point to a string with enough extra strokes to hold the entire dump
 csttEstimateP
  this function will fail if csttEstimateP is not enough
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b5.flTABLEwRITE!||
*/
/**/

/*1*/voidT tableC::writeF( tinS& tinP , strokeS*& psttP , const countT csttEstimateP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flTABLEwRITE , flagsP ) ;
        if( POOP ) return ;
    }

    _IO_
    boolT bsl = F(flagsP) & flTABLEwRITE_ONElINEpERcOL ;

    ether.strFuseF( tinP , psttP , T(USCORE79 "\r\n\r\ninternal table name: \"")+T(psttName)+T("\"\r\n") , 0 , 0 , strokeS() , 0 , 0 , /*U::SOUL?*/ csttEstimateP ) ;

    countT cRows = stEvents ;
    countT cCols = stNames ;

    TN( tBlammo1 , "there are " ) ;
    TN( tBlammo2 , (strokeS*)TF1(cCols) ) ;
    textC tBlammo12 = tBlammo1 + tBlammo2 ;
    TN( tBlammo3 , " columns in this table\r\n" ) ;
    textC tBlammo = tBlammo12 + tBlammo3 ;

    ether.strFuseF( tinP , psttP , tBlammo ) ; ___( psttP ) ;
    for( countT idc = 1 ; idc <= cCols ; idc ++ )
    {
        ether.strFuseF( tinP , psttP , T("col ")+TF1(idc)+T(" name: \"")+T(nameF(tinP,idc))+T("\"\r\n") ) ; ___( psttP ) ;
    }

    ether.strFuseF( tinP , psttP , T("there are ")+TF1(cRows)+T(" rows in this table\r\n") ) ; ___( psttP ) ;
    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        for( countT idc = 1 ; idc <= cCols ; idc ++ )
        {
                 if( bsl )      { ether.strFuseF( tinP , psttP , T("(")+TF1(idr)+T(",")+TF1(idc)+T(")  ") ) ; ___( psttP ) ; }
            else if( idc == 1 ) { ether.strFuseF( tinP , psttP , T("(")+TF1(idr)+T(")  ") ) ; ___( psttP ) ; }
            else                { ether.strFuseF( tinP , psttP , T(" , ") ) ; ___( psttP ) ; }

            countT idType = operator()( idr , idc ).c1 ;

            if( idType & _CT2_3 )
            {
                idType &= ~_CT2_3 ;
                stackC& stc = _CT2_3F( idr , idc ) ;
                handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    countT vv = stc.upF( tinP , handle ) ;

                    countT idType2 = idType ;
                    if( idType2 & _CT2_1 )
                    {
                        idType2 &= ~_CT2_1 ;
                        switch( idType2 )
                        {
                            case _CT1_07 : { ether.strFuseF( tinP , psttP , T("\"")+T((strokeS*)vv)+T("\"") ) ; ___( psttP ) ; break ; }
                            default      : { __1 break ; }
                        }
                    }
                    else if( idType2 & _CT2_2 )
                    {
                        idType2 &= ~_CT2_2 ;
                        //switch( idType2 )
                        {
                            /*default      :*/ { __1 /*break ;*/ }
                        }
                    }
                    else
                    {
                        switch( idType2 )
                        {
                            case _CT1_01 : { tableC& tbl  =   *(tableC*)vv ; tbl.writeF( tinP , psttP , csttEstimateP , flagsP ) ; ___( psttP ) ; break ; }
                            case _CT1_04 : {                                 ether.strFuseF( tinP , psttP , TF2(vv,flFORMAT_UNSIGNED) ) ; ___( psttP ) ; break ; }
                            case _CT1_05 : {                                 ether.strFuseF( tinP , psttP , TF1(vv) ) ; ___( psttP ) ; break ; }
                            case _CT1_06 : {                                 ether.strFuseF( tinP , psttP , TF1(*(measureT*)&vv) ) ; ___( psttP ) ; break ; } //U: TSM
                            case _CT1_08 : { count2S&  cc =  *(count2S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_09 : { count3S&  cc =  *(count3S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0a : { count4S&  cc =  *(count4S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0b : { count5S&  cc =  *(count5S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0c : { count6S&  cc =  *(count6S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0d : { count7S&  cc =  *(count7S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T(",")+TF1(cc.c7)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0e : { count8S&  cc =  *(count8S*)vv ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T(",")+TF1(cc.c7)+T(",")+TF1(cc.c8)+T("]") ) ; ___( psttP ) ; break ; }
                            case _CT1_0f : { nicNameC& cc = *(nicNameC*)vv ; ether.strFuseF( tinP , psttP , T(cc) ) ; ___( psttP ) ; break ; }
                            default      : { __1 break ; }
                        }
                    }

                    if( ~handle ) { ether.strFuseF( tinP , psttP , T(" , ") ) ; ___( psttP ) ; }
                }
                while( ~handle ) ;
            }
            else if( idType & _CT2_1 )
            {
                idType &= ~_CT2_1 ;
                switch( idType )
                {
                    case _CT1_07 : { ether.strFuseF( tinP , psttP , T("\"")+T(_CT1_07F(idr,idc))+T("\"") ) ; ___( psttP ) ; break ; }
                    default      : { __1 break ; }
                }
            }
            else if( idType & _CT2_2 )
            {
                idType &= ~_CT2_2 ;
                //switch( idType )
                {
                    /*default      :*/ { __1 /*break ;*/ }
                }
            }
            else
            {
                switch( idType )
                {
                    case _CT1_01 : { tableC& tbl = _CT1_01F( idr , idc ) ; tbl.writeF( tinP , psttP , csttEstimateP , flagsP ) ; ___( psttP ) ; break ; }
                    case _CT1_04 : { ether.strFuseF( tinP , psttP , TF2(_CT1_04F(idr,idc),flFORMAT_UNSIGNED) ) ; ___( psttP ) ; break ; }
                    case _CT1_05 : { ether.strFuseF( tinP , psttP , TF1(_CT1_05F(idr,idc)) ) ; ___( psttP ) ; break ; }
                    case _CT1_06 : { ether.strFuseF( tinP , psttP , TF1(_CT1_06F(idr,idc)) ) ; ___( psttP ) ; break ; } //U: TSM
                    case _CT1_08 : { count2S&  cc = _CT1_08F(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_09 : { count3S&  cc = _CT1_09F(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0a : { count4S&  cc = _CT1_0aF(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0b : { count5S&  cc = _CT1_0bF(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0c : { count6S&  cc = _CT1_0cF(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0d : { count7S&  cc = _CT1_0dF(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T(",")+TF1(cc.c7)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0e : { count8S&  cc = _CT1_0eF(idr,idc) ; ether.strFuseF( tinP , psttP , T("[")+TF1(cc.c1)+T(",")+TF1(cc.c2)+T(",")+TF1(cc.c3)+T(",")+TF1(cc.c4)+T(",")+TF1(cc.c5)+T(",")+TF1(cc.c6)+T(",")+TF1(cc.c7)+T(",")+TF1(cc.c8)+T("]") ) ; ___( psttP ) ; break ; }
                    case _CT1_0f : { nicNameC& cc = _CT1_0fF(idr,idc) ; ether.strFuseF( tinP , psttP , T(cc) ) ; ___( psttP ) ; break ; }
                    default      : { __1 break ; }
                }
            }

            if( bsl || idc == cCols ) { ether.strFuseF( tinP , psttP , T("\r\n") ) ; ___( psttP ) ; }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027018.tablec.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027019.tablec.idcolf BEGIN
#define DDNAME       "3func.36027019.tablec.idcolf"
#define DDNUMB      (countT)0x36027019
#define IDFILE      (countT)0x105b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idColF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e720104.1.1.0.html\"\>e720104:  WAKEsHOW( "example.simplest.func.1320019.tableC.idColF" )\</A\>
evaluates to the id of the specified column
arguments
 tinP
 psttP
  column name
*/
/**/

/*1*/countT tableC::idColF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttP ) ;
        if( POOP ) return 0 ;
        __( !psttP->idAdam ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , idcFound ) ;
    ZE( countT , idca ) ;
    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
    do
    {
        idca ++ ;
        if( !ether.strCompareF( tinP , (strokeS*)stNames.downF( tinP , handle ) , psttP ) )
        {
            idcFound = idca ;
            break ;
        }
    }
    while( ~handle ) ;

    return idcFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027019.tablec.idcolf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701a.tablec.namef BEGIN
#define DDNAME       "3func.3602701a.tablec.namef"
#define DDNUMB      (countT)0x3602701a
#define IDFILE      (countT)0x105c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nameF.0.html\"\>instances\</A\>
\<A HREF=\"5.132001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c720104.1.1.0.html\"\>c720104:  WAKEsHOW( "example.simplest.func.132001a.tableC.nameF" )\</A\>
changes the name of a column or of the table
evaluates to the new name
arguments
 tinP
 psttP
  the new name
 idcP
  if 0 then the table name is changed
  if not 0 then the name of the specified column is changed
*/
/**/

/*1*/strokeS*& tableC::nameF( tinS& tinP , const strokeS* const psttP , const countT idcP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return psttnu ;
        __Z( psttP ) ;
        __( !psttP->idAdam ) ;
        __( idcP > stNames ) ;
        if( POOP ) return psttnu ;
    }

    _IO_
    if( idcP )
    {
        strokeS*& psttOldColName = (strokeS*&)stNames[ idcP ] ;
        ether.delF( tinP , psttOldColName ) ;
        ether.strMakeF( tinP , LF , psttOldColName , psttP ) ;
    }
    else
    {
        ether.delF( tinP , psttName ) ;
        ether.strMakeF( tinP , LF , psttName , psttP ) ;
    }
    if( idcP ) return (strokeS*&)stNames[ idcP ] ;
    else       return psttName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701a.tablec.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701b.tablec.namef BEGIN
#define DDNAME       "3func.3602701b.tablec.namef"
#define DDNUMB      (countT)0x3602701b
#define IDFILE      (countT)0x105d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nameF.0.html\"\>instances\</A\>
\<A HREF=\"5.132001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d720104.1.1.0.html\"\>d720104:  WAKEsHOW( "example.simplest.func.132001b.tableC.nameF" )\</A\>
retrieves the name of a column
this function can be, but should not be, used to change the name of a column
 use another overload of nameF to change a column name
arguments
 tinP
 idcP
  id of the column whose name is to be retrieved
*/
/**/

/*1*/strokeS*& tableC::nameF( tinS& tinP , const countT idcP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return psttnu ;
        __( idcP > stNames ) ;
        if( POOP ) return psttnu ;
    }

    _IO_
    if( idcP ) return (strokeS*&)stNames[ idcP ] ;
    else       return psttName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701b.tablec.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701c.tablec.copycellsf BEGIN
#define DDNAME       "3func.3602701c.tablec.copycellsf"
#define DDNUMB      (countT)0x3602701c
#define IDFILE      (countT)0x105e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$copyCellsF.0.html\"\>instances\</A\>
\<A HREF=\"5.132001c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 tableP
  the table whose cells are to be copied into me
  i can, but need not, already contain rows
  my columns must already be defined
*/
/**/

/*1*/voidT tableC::copyCellsF( tinS& tinP , tableC& tableP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( tableP.cColsF( tinP ) - stNames ) ;
        if( POOP ) return ;
    }

    _IO_

    const countT cRowsNew = tableP.cRowsF( tinP ) ;
    for( countT idr = 1 ; idr <= cRowsNew ; idr ++ )
    {
        newEventF( tinP ) ;

        for( countT idc = 1 ; idc <= stNames ; idc ++ )
        {
            newObjectF( tinP , tableP( idr , idc ) , flTABLEnEWoBJECT_COPYcELL ) ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701c.tablec.copycellsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701d.tablec.idoperatorf BEGIN
#define DDNAME       "3func.3602701d.tablec.idoperatorf"
#define DDNUMB      (countT)0x3602701d
#define IDFILE      (countT)0x105f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idOperatorF.0.html\"\>instances\</A\>
\<A HREF=\"5.132001d.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
evaluates to a numeric id for the specified operator
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100af.idcOPERATOR!||
arguments
 tinP
 psttP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b7.psttOPERATOR!||
*/
/**/

/*1*/countT tableC::idOperatorF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttP ) ;
        if( POOP ) return 0 ;
        __( !psttP->idAdam ) ;
        if( POOP ) return 0 ;
    }

    _IO_
    ZE( countT , ido ) ;

         if( !ether.strCompareF( tinP , psttP , psttOPERATOR_EQUALS    ) ) ido = idcOPERATOR_EQUALS ;
    else if( !ether.strCompareF( tinP , psttP , psttOPERATOR_NOTeQUALS ) ) ido = idcOPERATOR_NOTeQUALS ;

    return ido ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701d.tablec.idoperatorf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701e.tablec.purgef BEGIN
#define DDNAME       "3func.3602701e.tablec.purgef"
#define DDNUMB      (countT)0x3602701e
#define IDFILE      (countT)0x1060


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$purgeF.0.html\"\>instances\</A\>
\<A HREF=\"5.132001e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
this command d eletes the structures used within tableC to organize reference information
it does not d elete the objects to which the table refers
arguments
 tinP
*/
/**/

/*1*/voidT tableC::purgeF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    countT cEvents = stEvents ;
    while( cEvents -- )
    {
        ZE( countT , value ) ;
        stEvents >> value ;
        if( value )
        {
            stackC* pstObjects = (stackC*)value ;

            countT cObjects = *pstObjects ;
            while( cObjects -- )
            {
                ZE( count2S* , pc2o ) ;
                *pstObjects >> pc2o ;
                ether.delF( tinP , pc2o ) ;
            }

            DEL( pstObjects ) ;
        }
    }

    countT cNames = stNames ;
    while( cNames -- )
    {
        ZE( strokeS* , psttn ) ;
        stNames >> psttn ;
        ether.delF( tinP , psttn ) ;
    }

    idPhase = idTABLEpHASE_DEFINEcOLS ;
    cObjectsDue = 0 ;

    ether.delF( tinP , psttName ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701e.tablec.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701f.tablec.operator_not BEGIN
#define DDNAME       "3func.3602701f.tablec.operator_not"
#define DDNUMB      (countT)0x3602701f
#define IDFILE      (countT)0x1061


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.132001f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9620104.1.1.0.html\"\>9620104:  WAKEsHOW( "example.simplest.func.132001f.tableC.operator_not" )\</A\>
calls writeF and then writes the result using etherC::strokeF
this operator preallocates 1000 strokes per cell for the dump
for very large tables, or for small tables of long strings of strokes, use writeF instead
uses a separate line for each column
*/
/**/

/*1*/tableC& tableC::operator !( voidT )/*1*/
{
    TINSL
    SCOOP
    _IO_

    ZE( strokeS* , psttd ) ;
    writeF( tinP , psttd , 0x1000 + cRowsF( tinP ) * cColsF( tinP ) * 0x1000 , flTABLEwRITE_ONElINEpERcOL ) ;
    etherC::ifcSayIF( T(psttd) , flSAY_APPEND | flSAY_LOG ) ;
    ether.delF( tinP , psttd ) ;

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602701f.tablec.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027020.tablec.newobjectprivatef BEGIN
#define DDNAME       "3func.36027020.tablec.newobjectprivatef"
#define DDNUMB      (countT)0x36027020
#define IDFILE      (countT)0x1062


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectPrivateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320020.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
arguments
 tinP
 idTypeP
 cP
  the value to be stored in the table
  this value is the address of a non-countT object or the contents of a countT object
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b6.flTABLEnEWoBJECT!||
*/
/**/

/*1*/voidT tableC::newObjectPrivateF( tinS& tinP , const countT idTypeP , const countT cP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( idPhase == idTABLEpHASE_DEFINEcOLS ) ;
        __Z( cObjectsDue ) ;
        //U: WHY IS THIS HERE? countT idc = 1 + stNames - cObjectsDue ;
        FV( flTABLEnEWoBJECT , flagsP ) ;
        if( POOP ) return ;
    }

    baton.grabF( tinP , TAG( TAGiDnULL ) ) ;
    _IO_

    cObjectsDue -- ;
    stackC* pstObjects = (stackC*)stEvents[ - 1 ] ;
    __Z( pstObjects ) ;

    ZE( count2S* , pc2o ) ;
    ether.newF( tinP , LF , pc2o ) ; ___( pc2o ) ;
    if( pstObjects && pc2o )
    {
        if( F(flagsP) & flTABLEnEWoBJECT_COPYcELL ) *pc2o = *(count2S*)cP ;
        else
        {
            pc2o->c1 = idTypeP ;
            pc2o->c2 = cP ;
        }
        *pstObjects << pc2o ;
    }

    baton.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027020.tablec.newobjectprivatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027021.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027021.tablec.newobjectf"
#define DDNUMB      (countT)0x36027021
#define IDFILE      (countT)0x1063


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320021.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e520104.1.1.0.html\"\>e520104:  WAKEsHOW( "example.simplest.func.1320021.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c3P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count3S& c3P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_09 , (countT)&c3P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027021.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027022.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027022.tablec.newobjectf"
#define DDNUMB      (countT)0x36027022
#define IDFILE      (countT)0x1064


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320022.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f520104.1.1.0.html\"\>f520104:  WAKEsHOW( "example.simplest.func.1320022.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c4P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count4S& c4P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0a , (countT)&c4P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027022.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027023.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027023.tablec.newobjectf"
#define DDNUMB      (countT)0x36027023
#define IDFILE      (countT)0x1065


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320023.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0620104.1.1.0.html\"\>0620104:  WAKEsHOW( "example.simplest.func.1320023.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c5P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count5S& c5P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0b , (countT)&c5P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027023.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027024.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027024.tablec.newobjectf"
#define DDNUMB      (countT)0x36027024
#define IDFILE      (countT)0x1066


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320024.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1620104.1.1.0.html\"\>1620104:  WAKEsHOW( "example.simplest.func.1320024.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c6P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count6S& c6P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0c , (countT)&c6P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027024.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027025.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027025.tablec.newobjectf"
#define DDNUMB      (countT)0x36027025
#define IDFILE      (countT)0x1067


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320025.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2620104.1.1.0.html\"\>2620104:  WAKEsHOW( "example.simplest.func.1320025.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c7P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count7S& c7P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0d , (countT)&c7P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027025.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027026.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027026.tablec.newobjectf"
#define DDNUMB      (countT)0x36027026
#define IDFILE      (countT)0x1068


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320026.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3620104.1.1.0.html\"\>3620104:  WAKEsHOW( "example.simplest.func.1320026.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 c8P
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const count8S& c8P )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0e , (countT)&c8P ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027026.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027027.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027027.tablec.newobjectf"
#define DDNUMB      (countT)0x36027027
#define IDFILE      (countT)0x1069


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320027.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4620104.1.1.0.html\"\>4620104:  WAKEsHOW( "example.simplest.func.1320027.tableC.newObjectF" )\</A\>
stores the value of the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
the value, rather than a reference, is stored because the value will fit into a countT
arguments
 tinP
 cP
  the value of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const measureT mP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        { countT foo = 2 ; __( foo && sizeof( countT ) - sizeof( measureT ) ) ; }
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_06 , *(countT*)&mP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027027.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027028.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027028.tablec.newobjectf"
#define DDNUMB      (countT)0x36027028
#define IDFILE      (countT)0x106a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320028.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5620104.1.1.0.html\"\>5620104:  WAKEsHOW( "example.simplest.func.1320028.tableC.newObjectF" )\</A\>
stores a reference to the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
arguments
 tinP
 tblP
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const tableC& tblP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_01 , (countT)&tblP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027028.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027029.tablec._ct1_06f BEGIN
#define DDNAME       "3func.36027029.tablec._ct1_06f"
#define DDNUMB      (countT)0x36027029
#define IDFILE      (countT)0x106b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_06F.0.html\"\>instances\</A\>
\<A HREF=\"5.1320029.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1720104.1.1.0.html\"\>1720104:  WAKEsHOW( "example.simplest.func.1320029.tableC._CT1_06F" )\</A\>
evaluates to a reference to a measureT object
this measureT object uses the countT object allocated by the table, because it fits
for this overload, its contents are being treated as data rather than as the address of data
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/measureT& tableC::_CT1_06F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return mnu ;
        __( c2o.c1 - _CT1_06 ) ;
        if( POOP ) return mnu ;
    }

    _IO_
    return *(measureT*)&c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027029.tablec._ct1_06f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702a.tablec._ct1_01f BEGIN
#define DDNAME       "3func.3602702a.tablec._ct1_01f"
#define DDNUMB      (countT)0x3602702a
#define IDFILE      (countT)0x106c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_01F.0.html\"\>instances\</A\>
\<A HREF=\"5.132002a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a720104.1.1.0.html\"\>a720104:  WAKEsHOW( "example.simplest.func.132002a.tableC._CT1_01F" )\</A\>
evaluates to a reference to the tableC object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/tableC& tableC::_CT1_01F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return tblnu ;
        __( c2o.c1 - _CT1_01 ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return tblnu ;
    }

    _IO_
    return *(tableC*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702a.tablec._ct1_01f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702b.tablec._ct1_08f BEGIN
#define DDNAME       "3func.3602702b.tablec._ct1_08f"
#define DDNUMB      (countT)0x3602702b
#define IDFILE      (countT)0x106d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_08F.0.html\"\>instances\</A\>
\<A HREF=\"5.132002b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3720104.1.1.0.html\"\>3720104:  WAKEsHOW( "example.simplest.func.132002b.tableC._CT1_08F" )\</A\>
evaluates to a reference to the count2S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count2S& tableC::_CT1_08F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c2nu ;
        __( c2o.c1 - _CT1_08 ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c2nu ;
    }

    _IO_
    return *(count2S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702b.tablec._ct1_08f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702c.tablec._ct1_09f BEGIN
#define DDNAME       "3func.3602702c.tablec._ct1_09f"
#define DDNUMB      (countT)0x3602702c
#define IDFILE      (countT)0x106e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_09F.0.html\"\>instances\</A\>
\<A HREF=\"5.132002c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4720104.1.1.0.html\"\>4720104:  WAKEsHOW( "example.simplest.func.132002c.tableC._CT1_09F" )\</A\>
evaluates to a reference to the count3S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count3S& tableC::_CT1_09F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c3nu ;
        __( c2o.c1 - _CT1_09 ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c3nu ;
    }

    _IO_
    return *(count3S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702c.tablec._ct1_09f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702d.tablec._ct1_0af BEGIN
#define DDNAME       "3func.3602702d.tablec._ct1_0af"
#define DDNUMB      (countT)0x3602702d
#define IDFILE      (countT)0x106f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0aF.0.html\"\>instances\</A\>
\<A HREF=\"5.132002d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5720104.1.1.0.html\"\>5720104:  WAKEsHOW( "example.simplest.func.132002d.tableC._CT1_0aF" )\</A\>
evaluates to a reference to the count4S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count4S& tableC::_CT1_0aF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c4nu ;
        __( c2o.c1 - _CT1_0a ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c4nu ;
    }

    _IO_
    return *(count4S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702d.tablec._ct1_0af END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702e.tablec._ct1_0bf BEGIN
#define DDNAME       "3func.3602702e.tablec._ct1_0bf"
#define DDNUMB      (countT)0x3602702e
#define IDFILE      (countT)0x1070


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0bF.0.html\"\>instances\</A\>
\<A HREF=\"5.132002e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6720104.1.1.0.html\"\>6720104:  WAKEsHOW( "example.simplest.func.132002e.tableC._CT1_0bF" )\</A\>
evaluates to a reference to the count5S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count5S& tableC::_CT1_0bF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c5nu ;
        __( c2o.c1 - _CT1_0b ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c5nu ;
    }

    _IO_
    return *(count5S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702e.tablec._ct1_0bf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702f.tablec._ct1_0cf BEGIN
#define DDNAME       "3func.3602702f.tablec._ct1_0cf"
#define DDNUMB      (countT)0x3602702f
#define IDFILE      (countT)0x1071


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0cF.0.html\"\>instances\</A\>
\<A HREF=\"5.132002f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7720104.1.1.0.html\"\>7720104:  WAKEsHOW( "example.simplest.func.132002f.tableC._CT1_0cF" )\</A\>
evaluates to a reference to the count6S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count6S& tableC::_CT1_0cF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c6nu ;
        __( c2o.c1 - _CT1_0c ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c6nu ;
    }

    _IO_
    return *(count6S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602702f.tablec._ct1_0cf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027030.tablec._ct1_0df BEGIN
#define DDNAME       "3func.36027030.tablec._ct1_0df"
#define DDNUMB      (countT)0x36027030
#define IDFILE      (countT)0x1072


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0dF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320030.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8720104.1.1.0.html\"\>8720104:  WAKEsHOW( "example.simplest.func.1320030.tableC._CT1_0dF" )\</A\>
evaluates to a reference to the count7S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count7S& tableC::_CT1_0dF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c7nu ;
        __( c2o.c1 - _CT1_0d ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c7nu ;
    }

    _IO_
    return *(count7S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027030.tablec._ct1_0df END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027031.tablec._ct1_0ef BEGIN
#define DDNAME       "3func.36027031.tablec._ct1_0ef"
#define DDNUMB      (countT)0x36027031
#define IDFILE      (countT)0x1073


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0eF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320031.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9720104.1.1.0.html\"\>9720104:  WAKEsHOW( "example.simplest.func.1320031.tableC._CT1_0eF" )\</A\>
evaluates to a reference to the count8S object whose address is stored in the cell
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/count8S& tableC::_CT1_0eF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return c8nu ;
        __( c2o.c1 - _CT1_0e ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return c8nu ;
    }

    _IO_
    return *(count8S*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027031.tablec._ct1_0ef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027032.tablec.writef BEGIN
#define DDNAME       "3func.36027032.tablec.writef"
#define DDNUMB      (countT)0x36027032
#define IDFILE      (countT)0x1074


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320032.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e620104.1.1.0.html\"\>e620104:  WAKEsHOW( "example.simplest.func.1320032.tableC.writeF" )\</A\>
writes my data contents to the file specified by handleP
 the numbers of rows and of columns are written
 the contents of each cell are written
 information about the table, other than the number of rows and columns, is not written
arguments
 tinP
 handleP
  must not be 0
  must be an open file handleP with write access
*/
/**/

/*1*/voidT tableC::writeF( tinS& tinP , const handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( handleP ) ;
        if( POOP ) return ;
    }

    _IO_

    countT cRows = stEvents ;
    countT cCols = stNames ;

    ether.fileWriteF( tinP , handleP , (byteT*)&cRows , sizeof cRows ) ;
    ether.fileWriteF( tinP , handleP , (byteT*)&cCols , sizeof cCols ) ;

    for( countT idr = 1 ; idr <= cRows ; idr ++ )
    {
        for( countT idc = 1 ; idc <= cCols ; idc ++ )
        {
            countT idType = operator()( idr , idc ).c1 ;
            ether.fileWriteF( tinP , handleP , (byteT*)&idType , sizeof idType ) ;

            if( idType & _CT2_3 )
            {
                idType &= ~_CT2_3 ;
                stackC& stc = _CT2_3F( idr , idc ) ;

                {
                    flagsT flags  = stc.flagsF( tinP ) ;
                    countT idType = stc.idTypeF( tinP ) ;
                    ether.fileWriteF( tinP , handleP , (byteT*)&flags  , sizeof flags  ) ;
                    ether.fileWriteF( tinP , handleP , (byteT*)&idType , sizeof idType ) ;
                    countT cPlates = stc ;
                    ether.fileWriteF( tinP , handleP , (byteT*)&cPlates , sizeof cPlates ) ;
                }

                handleC hndStack( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do
                {
                    ZE( countT , vv ) ;

                    if( F(stc.flagsF(tinP)) & flSTACKc_FIFO ) vv = stc.downF( tinP , hndStack ) ; // ITEMS ARE WRITTEN IN THE ORDER THAT THEY WERE PLACED ONTO THE STACK
                    else                                     vv = stc.upF( tinP , hndStack ) ;

                    countT idType2 = idType ;
                    if( idType2 & _CT2_1 )
                    {
                        idType2 &= ~_CT2_1 ;
                        switch( idType2 )
                        {
                            case _CT1_07 :
                            {
                                strokeS* pstto = (strokeS*)vv ;
                                __Z( pstto ) ;
                                if( pstto ) ether.fileWriteF( tinP , handleP , (byteT*)pstto , ( CSpREFIX + pstto->idAdam ) * sizeof( strokeS ) ) ;
                                break ;
                            }
                            default      : { __1 break ; }
                        }
                    }
                    else if( idType2 & _CT2_2 )
                    {
                        idType2 &= ~_CT2_2 ;
                        //switch( idType2 )
                        {
                            /*default      :*/ { __1 /*break ;*/ }
                        }
                    }
                    else
                    {
                        switch( idType2 )
                        {
                            case _CT1_01 : { tableC& tbl = *(tableC*)vv ; tbl.writeF( tinP , handleP )                                  ; break ; }
                            case _CT1_04 : {                               ether.fileWriteF( tinP , handleP , (byteT*)&vv , sizeof vv ) ; break ; }
                            case _CT1_05 : {                               ether.fileWriteF( tinP , handleP , (byteT*)&vv , sizeof vv ) ; break ; }
                            case _CT1_06 : {                               ether.fileWriteF( tinP , handleP , (byteT*)&vv , sizeof vv ) ; break ; }
                            case _CT1_08 : { count2S& cc = *(count2S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_09 : { count3S& cc = *(count3S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0a : { count4S& cc = *(count4S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0b : { count5S& cc = *(count5S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0c : { count6S& cc = *(count6S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0d : { count7S& cc = *(count7S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0e : { count8S& cc = *(count8S*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                            case _CT1_0f : { nicNameC& cc = *(nicNameC*)vv ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , processGlobal1I.cb_nicNameC_ ) ; break ; }
                            default      : { __1 break ; }
                        }
                    }
                }
                while( ~hndStack ) ;
            }
            else if( idType & _CT2_1 )
            {
                idType &= ~_CT2_1 ;
                switch( idType )
                {
                    case _CT1_07 :
                    {
                        strokeS*& pstto = _CT1_07F(idr,idc) ;
                        __Z( pstto ) ;
                        if( pstto ) ether.fileWriteF( tinP , handleP , (byteT*)pstto , ( CSpREFIX + pstto->idAdam ) * sizeof( strokeS ) ) ;
                        break ;
                    }

                    default      : { __1 break ; }
                }
            }
            else if( idType & _CT2_2 )
            {
                idType &= ~_CT2_2 ;
                //switch( idType )
                {
                    /*default      :*/ { __1 /*break ;*/ }
                }
            }
            else
            {
                switch( idType )
                {
                    case _CT1_01 : { tableC&  tbl = _CT1_01F( idr , idc ) ; tbl.writeF( tinP , handleP )                                 ; break ; }
                    case _CT1_04 : { countT&   cc = _CT1_04F( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_05 : { sCountT&  cc = _CT1_05F( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_06 : { measureT& cc = _CT1_06F( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_08 : { count2S&  cc = _CT1_08F( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_09 : { count3S&  cc = _CT1_09F( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0a : { count4S&  cc = _CT1_0aF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0b : { count5S&  cc = _CT1_0bF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0c : { count6S&  cc = _CT1_0cF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0d : { count7S&  cc = _CT1_0dF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0e : { count8S&  cc = _CT1_0eF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , sizeof cc ) ; break ; }
                    case _CT1_0f : { nicNameC&  cc = _CT1_0fF( idr , idc ) ; ether.fileWriteF( tinP , handleP , (byteT*)&cc , processGlobal1I.cb_nicNameC_ ) ; break ; }
                    default      : { __1 break ; }
                }
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027032.tablec.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027033.tablec.writef BEGIN
#define DDNAME       "3func.36027033.tablec.writef"
#define DDNUMB      (countT)0x36027033
#define IDFILE      (countT)0x1075


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$writeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320033.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d620104.1.1.0.html\"\>d620104:  WAKEsHOW( "example.simplest.func.1320033.tableC.writeF" )\</A\>
writes my data contents to box psttP
 the numbers of rows and of columns are written
 the contents of each cell are written
 information about the table, other than the number of rows and columns, is not written
arguments
 tinP
 psttP
  name of the box to create or replace
  this box will contain the data that i refer to
*/
/**/

/*1*/voidT tableC::writeF( tinS& tinP , const strokeS* const psttP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( psttP ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( strokeS* , psttm ) ;
    ether.diskMapFileNameF( tinP , psttm , psttP ) ; ___( psttm ) ;
    ether.diskMakeDirIfNeededF( tinP , psttm ) ;

    handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
    ZE( countT , idResult ) ;
    ether.fileOpenF( tinP , handle , idResult , psttm , ifcOPENaCCESS_W , 0 , 0 , ifcOPENhOW_nCeR ) ;
    ether.delF( tinP , psttm ) ;

    writeF( tinP , handle ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027033.tablec.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027034.tablec.readf BEGIN
#define DDNAME       "3func.36027034.tablec.readf"
#define DDNUMB      (countT)0x36027034
#define IDFILE      (countT)0x1076


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320034.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b620104.1.1.0.html\"\>b620104:  WAKEsHOW( "example.simplest.func.1320034.tableC.readF" )\</A\>
reads data into me from the specified range of bytes in the poolOld
 the numbers of rows and of columns are read
 will become impotent if i already have declared columns and the number of columns does not match my cCols
  if there are not yet any columns in the table, columns with default names will be created, one for each column in the file
  if one or more columns are already declared for the table, this function will become impotent if the number of columns does not equal that indicated in the file
 loads each set of coinstantiated objects in the file into me
 no information about the table, other than the number of rows and columns, is read
i must be set up and ready to accept new rows
i can either contain no rows or already contain rows
arguments
 tinP
 stStringsOfBytesToDeleteP
  pointers to strings of byteT objects created by me will be put onto this stack
  the caller is responsible for deleting these strings
 stTablesToDeleteP
  pointers to tableC objects created by me will be put onto this stack
  the caller is responsible for deleting these tableC objects
 stStacksToDeleteP
  pointers to stacks created by me will be put onto this stack
  the caller is responsible for deleting these stacks
 pbcP
  an address in the poolOld from which to input cells into this table object
  this "cursor" address will be advanced by this function
   after evaluation, pbcP will point to the byte immediately following the last byte used to load this table
 pbeP
  an address in the poolOld marking an upper bound to read operations in the poolOld for this table
  must be at least than pbP + 2 * sizeof( countT )
  this address is exclusive
  this function will become impotent if it attempts to read an address at or above pbeP
*/
/**/

#define GET(argP)   { __( pbcP + sizeof argP > pbeP ) ; ether.memCopyF( tinP , (byteT*)&argP , pbcP , sizeof argP ) ; pbcP += sizeof argP ; }
#define GETNN(argP) { __( pbcP + processGlobal1I.cb_nicNameC_ > pbeP ) ; ether.memCopyF( tinP , (byteT*)&argP , pbcP , processGlobal1I.cb_nicNameC_ ) ; pbcP += processGlobal1I.cb_nicNameC_ ; }

/*1*/voidT tableC::readF( tinS& tinP , stackC& stStringsOfBytesToDeleteP , stackC& stTablesToDeleteP , stackC& stStacksToDeleteP , const byteT*& pbcP , const byteT* const pbeP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pbcP ) ;
        __Z( pbeP ) ;
        __( pbcP >= pbeP ) ;
        __( pbeP - pbcP < 2 * sizeof( countT ) ) ;
        if( POOP ) return ;
    }

    _IO_

    ZE( countT , cRowsNew ) ;
    GET( cRowsNew ) ;

    ZE( countT , cCols ) ;
    {
        ZE( countT , cColsNew ) ;
        GET( cColsNew ) ;

        if( !stNames )
        {
            countT cTries = cColsNew ;
            while( cTries -- ) newColF( tinP ) ;
            cCols = stNames ;
        }
        __( cColsNew - cCols ) ;
    }

    if( !ether )
    {
        for( countT idr = 1 ; idr <= cRowsNew ; idr ++ )
        {
            newEventF( tinP ) ;

            for( countT idc = 1 ; idc <= cCols ; idc ++ )
            {
                ZE( countT , idType ) ;
                GET( idType ) ;

                if( idType & _CT2_3 )
                {
                    idType &= ~_CT2_3 ;

                    ZE( flagsT , flagsStk ) ;
                    ZE( countT , idTypeStk ) ;
                    ZE( countT , cPlates ) ;
                    GET( flagsStk ) ;
                    GET( idTypeStk ) ;
                    GET( cPlates ) ;

                    stackC* pstk = new( 0 , tinP , LF ) stackC( tinP , ether , TAG( TAGiDnULL ) , flagsStk , idTypeStk ) ; ___( pstk ) ;
                    stStacksToDeleteP << (countT)pstk ;
                    if( pstk )
                    {    
                        newObjectF( tinP , *pstk ) ;

                        while( cPlates -- )
                        {
                            if( idType & _CT2_1 )
                            {
                                idType &= ~_CT2_1 ;
                                switch( idType )
                                {
                                    case _CT1_07 : { strokeS* pstti = (strokeS*)pbcP ; newObjectF( tinP , pstti ) ; pbcP += ( CSpREFIX + pstti->idAdam ) * sizeof( strokeS ) ; break ; }
                                    default      : { __1 break ; }
                                }
                            }
                            else if( idType & _CT2_2 )
                            {
                                idType &= ~_CT2_2 ;
                                //switch( idType )
                                {
                                    /*default      :*/ { __1 /*break ;*/ }
                                }
                            }
                            else
                            {
                                switch( idType )
                                {
                                    case _CT1_01 :
                                    {
                                        tableC* ptbl = new( 0 , tinP , LF ) tableC( tinP , ether ) ; ___( ptbl ) ; //U: READ tableC CONSTRUCTION ARGUMENTS FROM THE FILE
                                        stTablesToDeleteP << (countT)ptbl ;
                                        if( ptbl )
                                        {
                                            newObjectF( tinP , *ptbl ) ;
                                            ZE( byteT* , pbToDelete ) ;
                                            ptbl->readF( tinP , stStringsOfBytesToDeleteP , stTablesToDeleteP , stStacksToDeleteP , pbcP , pbeP ) ;
                                        }
                                        break ;
                                    }
                                    case _CT1_04 : { ZE( countT , vv )                    ; GET( vv   ) ; *pstk << vv            ;   break ; }
                                    case _CT1_05 : { ZE( sCountT , vv )                   ; GET( vv   ) ; *pstk << *(countT*)&vv ;   break ; }
                                    case _CT1_06 : { ZE( measureT , vv )                  ; GET( vv   ) ; *pstk << *(countT*)&vv ;   break ; }
                                    case _CT1_08 : { count2S* pvv = new count2S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_09 : { count3S* pvv = new count3S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0a : { count4S* pvv = new count4S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0b : { count5S* pvv = new count5S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0c : { count6S* pvv = new count6S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0d : { count7S* pvv = new count7S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0e : { count8S* pvv = new count8S ; if( pvv ) { GET( *pvv ) ; *pstk << pvv           ; } break ; }
                                    case _CT1_0f : { nicNameC* pvv = new( 0 , tinP , LF ) nicNameC ; if( pvv ) { GETNN( *pvv ) ; *pstk << pvv           ; } break ; }

                                    default      : { __1 break ; }
                                }
                            }
                        }
                    }
                }
                else if( idType & _CT2_1 )
                {
                    idType &= ~_CT2_1 ;
                    switch( idType )
                    {
                        case _CT1_07 : { strokeS* pstti = (strokeS*)pbcP ; newObjectF( tinP , pstti ) ; pbcP += ( CSpREFIX + pstti->idAdam ) * sizeof( strokeS ) ; break ; }
                        default      : { __1 break ; }
                    }
                }
                else if( idType & _CT2_2 )
                {
                    idType &= ~_CT2_2 ;
                    //switch( idType )
                    {
                        /*default      :*/ { __1 /*break ;*/ }
                    }
                }
                else
                {
                    switch( idType )
                    {

                        case _CT1_01 :
                        {
                            tableC* ptbl = new( 0 , tinP , LF ) tableC( tinP , ether ) ; ___( ptbl ) ; //U: READ tableC CONSTRUCTION ARGUMENTS FROM THE FILE
                            stTablesToDeleteP << (countT)ptbl ;
                            if( ptbl )
                            {
                                newObjectF( tinP , *ptbl ) ;
                                ZE( byteT* , pbToDelete ) ;
                                ptbl->readF( tinP , stStringsOfBytesToDeleteP , stTablesToDeleteP , stStacksToDeleteP , pbcP , pbeP ) ;
                            }
                            break ;
                        }
                        case _CT1_04 : { ZE( countT , vv )   ; GET( vv ) ; newObjectF( tinP , vv ) ; break ; }
                        case _CT1_05 : { ZE( sCountT , vv )  ; GET( vv ) ; newObjectF( tinP , vv ) ; break ; }
                        case _CT1_06 : { ZE( measureT , vv ) ; GET( vv ) ; newObjectF( tinP , vv ) ; break ; }
                        case _CT1_08 : { count2S* pvv = (count2S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count2S ) ; break ; }
                        case _CT1_09 : { count3S* pvv = (count3S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count3S ) ; break ; }
                        case _CT1_0a : { count4S* pvv = (count4S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count4S ) ; break ; }
                        case _CT1_0b : { count5S* pvv = (count5S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count5S ) ; break ; }
                        case _CT1_0c : { count6S* pvv = (count6S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count6S ) ; break ; }
                        case _CT1_0d : { count7S* pvv = (count7S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count7S ) ; break ; }
                        case _CT1_0e : { count8S* pvv = (count8S*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += sizeof( count8S ) ; break ; }
                        case _CT1_0f : { nicNameC* pvv = (nicNameC*)pbcP ; newObjectF( tinP , *pvv ) ; pbcP += processGlobal1I.cb_nicNameC_ ; break ; }
                        default      : { __1 break ; }
                    }
                }
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027034.tablec.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027035.tablec.readf BEGIN
#define DDNAME       "3func.36027035.tablec.readf"
#define DDNUMB      (countT)0x36027035
#define IDFILE      (countT)0x1077


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$readF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320035.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c620104.1.1.0.html\"\>c620104:  WAKEsHOW( "example.simplest.func.1320035.tableC.readF" )\</A\>
reads data into me from the specified box
 the numbers of rows and of columns are read
 will become impotent if the number of columns does not match my cCols
 loads each set of coinstantiated objects in the file into me
 no information about the table, other than the number of rows and columns, is read
evaluates to the number of bytes read from the file
i must be set up and ready to accept new rows
i can either contain no rows or already contain rows
arguments
 tinP
 stStringsOfBytesToDeleteP
  pointers to strings of byteT objects created by me will be put onto this stack
  the caller is responsible for deleting these strings
 stTablesToDeleteP
  pointers to tableC objects created by me will be put onto this stack
  the caller is responsible for deleting these tableC objects
 stStacksToDeleteP
  pointers to stacks created by me will be put onto this stack
  the caller is responsible for deleting these stacks
 psttP
  the name of the box from which data for the table is to be read
  this box is read nondestructively, using etherC::boxGetShadowF
 cTriesP
  can be 0
  if 0 then will block until the box can be read
  if 0 then impotence will occur if the box cannot be read
  if not 0 then impotence will -not- occur if the box cannot be read
   in this case, i will silently do nothing
*/
/**/

/*1*/countT tableC::readF( tinS& tinP , stackC& stStringsOfBytesToDeleteP , stackC& stTablesToDeleteP , stackC& stStacksToDeleteP , const strokeS* const psttP , const countT cTriesP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    ZE( countT , cbi ) ;
    ZE( byteT* , pbi ) ;
    ZE( boolT , bFail ) ;
    IFsCRATCH
    {
        SCOOPS
        tinP.pEtScratch->boxGetShadowF( tinP , pbi , cbi , psttP , cTriesP ) ; ___( pbi ) ;
        if( POOP && !cTriesP ) bFail = 1 ;
    }
    __( bFail ) ;

    if( pbi )
    {
        stStringsOfBytesToDeleteP << (countT)pbi ;

        const byteT*& pbi2 = (const byteT*&)pbi ;
        readF( tinP , stStringsOfBytesToDeleteP , stTablesToDeleteP , stStacksToDeleteP , pbi2 , pbi + cbi ) ;
    }

    return cbi ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027035.tablec.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027037.tablec.newobjectf BEGIN
#define DDNAME       "3func.36027037.tablec.newobjectf"
#define DDNUMB      (countT)0x36027037
#define IDFILE      (countT)0x1078


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320037.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b520104.1.1.0.html\"\>b520104:  WAKEsHOW( "example.simplest.func.1320037.tableC.newObjectF" )\</A\>
stores the value of the specified object in the table, and sets idType for the cell
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b0.ifcTABLEcOLtYPE1!||
//||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100b2.flTABLEcOLtYPE2!||
the value, rather than a reference, is stored because the value will fit into a countT
arguments
 tinP
 scP
  the value of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const sCountT scP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_05 , (countT)scP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027037.tablec.newobjectf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027038.tablec._ct1_05f BEGIN
#define DDNAME       "3func.36027038.tablec._ct1_05f"
#define DDNUMB      (countT)0x36027038
#define IDFILE      (countT)0x1079


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_05F.0.html\"\>instances\</A\>
\<A HREF=\"5.1320038.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0720104.1.1.0.html\"\>0720104:  WAKEsHOW( "example.simplest.func.1320038.tableC._CT1_05F" )\</A\>
evaluates to a reference to a sCountT object
this sCountT object is the countT object allocated by the table
for this overload, its contents are being treated as data rather than as the address of data
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/sCountT& tableC::_CT1_05F( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP

    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return *(sCountT*)&cnu ;
        __( c2o.c1 - _CT1_05 ) ;
        if( POOP ) return *(sCountT*)&cnu ;
    }

    _IO_
    return *(sCountT*)&c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027038.tablec._ct1_05f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027039.tablec._ct1_0ff BEGIN
#define DDNAME       "3func.36027039.tablec._ct1_0ff"
#define DDNUMB      (countT)0x36027039
#define IDFILE      (countT)0x107a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$_CT1_0fF.0.html\"\>instances\</A\>
\<A HREF=\"5.1320039.1.0.html\"\>definition\</A\>
arguments
 idrP
  the row id
 idcP
  the column id
*/
/**/

/*1*/nicNameC& tableC::_CT1_0fF( const countT idrP , const countT idcP )/*1*/
{
    TINSL
    SCOOP
    count2S& c2o = operator()( idrP , idcP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return nicNamenu ;
        __( c2o.c1 - _CT1_0f ) ;
        __( !c2o.c2 ) ;
        if( POOP ) return nicNamenu ;
    }

    _IO_
    return *(nicNameC*)c2o.c2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.36027039.tablec._ct1_0ff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602703a.tablec.newobjectf BEGIN
#define DDNAME       "3func.3602703a.tablec.newobjectf"
#define DDNUMB      (countT)0x3602703a
#define IDFILE      (countT)0x107b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newObjectF.0.html\"\>instances\</A\>
\<A HREF=\"5.132003a.1.0.html\"\>definition\</A\>
arguments
 tinP
 nicNameP
  the address of this object is stored in the cell
*/
/**/

/*1*/voidT tableC::newObjectF( tinS& tinP , const nicNameC& nicNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    newObjectPrivateF( tinP , _CT1_0f , (countT)&nicNameP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36027* : 3func.3602703a.tablec.newobjectf END
