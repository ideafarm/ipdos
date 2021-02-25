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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e001.tellc.dt_tellc BEGIN
#define DDNAME       "3func.3604e001.tellc.dt_tellc"
#define DDNUMB      (countT)0x3604e001
#define IDFILE      (countT)0x118a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16f0002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tellC::~tellC( voidT )/*1*/
{
    //tinS& tinP = ebp ? *pTin2AM( ebp ) : thirdC::third_tinS_ref_IF() ; //USED BY THE EXCEPTION HANDLER IN f*.handleC.handleC
    tinS& tinP = *pTin ; //DO IT THIS WAY SO CAN TELL ON CT/DT OF tinEarlyLate
    POOPIE

         if(  bUseZombie ) ;
    else if( !bUsePool   ) processGlobal3I.heap.delF( tinP , pbData ) ;
    else                   PUSE( tinP , pbData ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e001.tellc.dt_tellc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e002.tellc.tellc BEGIN
#define DDNAME       "3func.3604e002.tellc.tellc"
#define DDNUMB      (countT)0x3604e002
#define IDFILE      (countT)0x118b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16f0003.1.0.html\"\>definition\</A\>
i construct a formatted blob
i am intended solely to be used as an argument to dosTellMonitorIF
i evaluate to either the length of, or the address of, a memory area that i lay out as follows
 wo tellS object
 optional data of a format that can be inferred from the tellS object's value
if poolOldWork exists then i will use it, and the size of the data is limited only by the unused area of the poolOld
else i will use the zombie memory area that you specify
parameters
 tinP
 idTypeP
 must not be 0
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.11200170.ifcIDtYPEtELLsYS!||
 pbP
  the data record to be emitted to the monitor
 cbP
  the length of the data record
  can be 0
  if 0 then the monitor will only see idTypeP
  note: do not set cbP to 0 to have me calculate the length of a string; i do not do that
  for maximum speed, avoid calculating string lengths at run time
 pbZombieP
  can be 0
  for speed, specify bytes on the thread stack if cbP is known at compile time
  if 0 then *tinP.pPoolUse or processGlobal3I.heap will be used
 cbZombieP
  if !pbZombieP then can be 0
  if pbZombieP then must be >= sizeof( tellS ) + cbP
 bSynchP
*/
/**/

//ASSUME: poolOldWork IS GUARANTEED TO EXIST BEFORE ANY CHILD THREADS ARE LAUNCHED AND TO CONTINUE TO EXIST UNTIL AFTER ALL CHILD THREADS END

/*1*/tellC::tellC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idTypeP , const byteT* const pbP , const countT cbP , byteT* const pbZombieP , const countT cbZombieP , const boolT bSynchP , const countT ebpP ) :/*1*/
bUseZombie( !!pbZombieP ) ,
bUsePool(    !pbZombieP && tinP.pPoolUse ) ,
ebp( ebpP ) ,
pbData( 0 ) ,
pTin( &tinP ) //FOR MY DESTRUCTOR
{
    if( cbP % sizeof( countT ) ) { BLAMMO ; } //ENFORCES CODE CONFORMANCE RULE FOR SPEEDILY WRITEABLE AND READABLE TELEMETRY

    POOPIE
    {
        {
            ZE( byteT* , pbFromPool ) ;
            pbData = bUseZombie
                ? pbZombieP
                : bUsePool
                    ? ( PUSE.newF( tinP , LF , pbFromPool , sizeof( tellS ) + cbP ) , pbFromPool )
                    : processGlobal3I.heap.newF( tinP , LF , sizeof( tellS ) + cbP )
            ;
        }
        if( bUsePool ) { ___( pbData ) ; }
    
        if( !pbP != !cbP ) BLAMMO
        if( !pbData ) BLAMMO
        if( pbData == pbZombieP    && cbZombieP           < sizeof( tellS ) + cbP ) BLAMMO
    
        countT cbd = cbP ;
    
        new( 0 , tinP , pbData , sizeof( tellS ) ) tellS( tinP , idLineCtP , idiFileCtP , pbBitsCtP , idTypeP , cbd ) ;
        //tellS& head = *(tellS*)pbData ;
        //CONoUTrAW3( "W " , head.idTell , "\r\n" ) ; //U::

        //U::EDIT ap_artmentOldC TO SUPPORT poolC (MULTIPLE ROOT POOLoLDS BREAK THE ASSUMPTION OF ap_artmentOldC CODING)
        //U::USE aptC AND apartmentsOldC TO REWRITE THIS
        //if( !bSynchP ) head.ipMe = head.bIda = 0 ;
        //else
        //{
        //    ap_artmentOldC idaMe( tinP , (byteT*)&head ) ;
        //    head.bIda = !!idaMe ;
        //    head.ipMe = head.bIda ? idaMe : (countT)&head ;
        //}

        if( cbd ) thirdC::c_memcpyIF( tinP , pbData + sizeof( tellS ) , pbP , cbd ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e002.tellc.tellc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e003.tellc.operator_bytet_ptr BEGIN
#define DDNAME       "3func.3604e003.tellc.operator_bytet_ptr"
#define DDNUMB      (countT)0x3604e003
#define IDFILE      (countT)0x118c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16f0004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tellC::operator byteT*( voidT ) const/*1*/
{
    return pbData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e003.tellc.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e004.tellc.operator_countt BEGIN
#define DDNAME       "3func.3604e004.tellc.operator_countt"
#define DDNUMB      (countT)0x3604e004
#define IDFILE      (countT)0x118d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.16f0005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/tellC::operator countT( voidT ) const/*1*/
{
    //if( ((tellS*)pbData)->cbNote == 4 ) //U:: TO FIND A BUG
    //{
    //    countT foo = 2 ;
    //}

    return sizeof( tellS ) + ((tellS*)pbData)->cbNote ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e004.tellc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e005.tellc.idtypef BEGIN
#define DDNAME       "3func.3604e005.tellc.idtypef"
#define DDNUMB      (countT)0x3604e005
#define IDFILE      (countT)0x118e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idTypeF.0.html\"\>instances\</A\>
\<A HREF=\"5.16f0006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT tellC::idTypeF( tinS& tinP ) const/*1*/
{
    return ((tellS*)pbData)->idType ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3604e* : 3func.3604e005.tellc.idtypef END
