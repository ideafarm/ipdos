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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141002.heapC.dt_heapC BEGIN
#define DDNAME       "3func.36141002.heapC.dt_heapC"
#define DDNUMB      (countT)0x36141002
#define IDFILE      (countT)0x157d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/heapC::~heapC( voidT )/*1*/
{
    TINSL
    _IO_

    if( processGlobal0I.pbHeap == pbHeap ) processGlobal0I.pbHeapEnd = processGlobal0I.pbHeap = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141002.heapC.dt_heapC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141003.heapC.heapC BEGIN
#define DDNAME       "3func.36141003.heapC.heapC"
#define DDNUMB      (countT)0x36141003
#define IDFILE      (countT)0x157e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/heapC::heapC( tinS& tinP ) :/*1*/
grabMe( tinP , TAG( TAGiDnULL ) , 0 , ifcIDgRABITbIT_00 , *(grabitC*)0 , 0 , 0 , 0 , flGRABITc_SUPPRESScTdT | flGRABITc_SNEAKYlOVER , 0 , ifcIDgRABlAYER_eHEAP )
{
    _IO_

    thirdC::c_memsetIF( tinP , pbHeap , sizeof pbHeap ) ;
    *(countT*)pbHeap = sizeof pbHeap - sizeof( countT ) ; //FORMAT: LENGTH PREFIXED ALLOCATIONS.  HIGH BIT SET MEANS IN USE.  DELETION COMBINES ALLOCATIONS NOT IN USE

    if( !processGlobal0I.pbHeap )
    {
        processGlobal0I.pbHeap    = pbHeap ;
        processGlobal0I.pbHeapEnd = pbHeap + sizeof pbHeap ;

        CONoUTrAW7( "heapC [cbHeap,pbHeap,pbEnd]:    " , *(countT*)pbHeap , "    " , processGlobal0I.pbHeap , "    " , processGlobal0I.pbHeapEnd , "\r\n" ) ; //U::TO FIND A LEAK
        LOGrAW7(    "heapC [cbHeap,pbHeap,pbEnd]:    " , *(countT*)pbHeap , "    " , processGlobal0I.pbHeap , "    " , processGlobal0I.pbHeapEnd , "\r\n" ) ; //U::TO FIND A LEAK
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141003.heapC.heapC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141004.heapC.combineF BEGIN
#define DDNAME       "3func.36141004.heapC.combineF"
#define DDNUMB      (countT)0x36141004
#define IDFILE      (countT)0x157f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//
/*
*/
/**/

/*1*/voidT heapC::combineF( tinS& tinP )/*1*/
{
    _IO_

    //testF( tinP , "combineF: before" ) ;

    ZE( countT* , pcBegin ) ;
    byteT*       pbc = pbHeap ;
    byteT* const pbe = pbHeap + sizeof pbHeap ;
    while( pbc < pbe )
    {
        countT& cbWo = *(countT*)pbc ; pbc += sizeof( countT ) + cbWo & ~BM_HIGH ;

        if( cbWo & BM_HIGH ) pcBegin = 0 ;
        else
        {
            if( !pcBegin ) pcBegin = &cbWo ;
            else           *pcBegin += sizeof( countT ) + cbWo ;
        }
    }

    //testF( tinP , "combineF: after" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141004.heapC.combineF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141005.heapC.delF BEGIN
#define DDNAME       "3func.36141005.heapC.delF"
#define DDNUMB      (countT)0x36141005
#define IDFILE      (countT)0x1580


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT heapC::delF( tinS& tinP , byteT*& pbP )/*1*/
{
    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        //if( tinP.pc Utility[ 0 ] ) { LOGrAW3( "heapC::delF [pbP  ]:    " , pbP , "\r\n" ) ; } //U:: TO FIND A LEAK

        if( pbP && pbHeap < pbP && pbP < pbHeap + sizeof pbHeap )
        {
            grabitC grabx( tinP , TAG( TAGiDnULL ) ) ;

            grabMe.grabF( tinP , TAG( TAGiDnULL ) ) ;

            //testF( tinP , "delF: before" ) ;

            byteT*       pbc = pbHeap ;
            byteT* const pbe = pbHeap + sizeof pbHeap ;
            while( pbc < pbe )
            {
                countT& cbWo = *(countT*)pbc ; pbc += sizeof( countT ) + cbWo & ~BM_HIGH ;

                if( (byteT*)&cbWo + 3 * sizeof( countT ) == pbP )
                {
                    if( !( cbWo & BM_HIGH ) )
                    {
                        dumpF( tinP , "heapC::delF detected missing used flag for pbP" , "" ) ;
                        BLAMMO ;
                    }
                    else
                    {
                        cbWo &= ~BM_HIGH ;
                        ((countT*)&cbWo)[ 2 ] = ((countT*)&cbWo)[ 1 ] = 0 ;
                    }

                    pbP = 0 ;
                    cDel ++ ;
                    cbDel += cbWo ; //U:: NOT THREAD SAFE

                    break ;
                }
            }

            if( pbP )
            {
                dumpF( tinP , "heapC::delF failed to delete pbP" , "" ) ;
                BLAMMO ;
            }

            //testF( tinP , "delF: after" ) ;
            combineF( tinP ) ;

            grabMe.ungrabF( tinP ) ;
        }
        else
        {
            //if( tinP.pc Utility[ 0 ] ) { LOGrAW3( "heapC::delF [pbP  ]:    " , pbP , " DOING NOTHING\r\n" ) ; } //U:: TO FIND A LEAK
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141005.heapC.delF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141006.heapC.newF BEGIN
#define DDNAME       "3func.36141006.heapC.newF"
#define DDNUMB      (countT)0x36141006
#define IDFILE      (countT)0x1581


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/byteT* heapC::newF( tinS& tinP , const countT idLineP , const countT idiFileP , const countT cbP )/*1*/
{
    ZE( byteT* , pbNew ) ;
    tinP.flushPendingInOutFrameTelemetryIfF() ;
    THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
    {
        _IO_

        if( !cbP )
        {
            dumpF( tinP , "heapC::newF cbP is 0" , "" ) ;
            BLAMMO ;
        }

        grabitC grabx( tinP , TAG( TAGiDnULL ) ) ;

        grabMe.grabF( tinP , TAG( TAGiDnULL ) ) ;

        //testF( tinP , "newF: before" ) ;

        countT cbAsk = cbP + 2 * sizeof( countT ) ; // idLine,idiFile,data
        byteT*       pbc = pbHeap ;
        byteT* const pbe = pbHeap + sizeof pbHeap ;
        while( pbc < pbe )
        {
            countT& cbWo = *(countT*)pbc ; pbc += sizeof( countT ) ;

            if( cbWo & BM_HIGH || cbWo < cbAsk ) pbc += cbWo & ~BM_HIGH ;
            else
            {
                ((countT*)pbc)[ 0 ] = idLineP ;
                ((countT*)pbc)[ 1 ] = idiFileP ;
                pbNew = pbc + 2 * sizeof( countT ) ;

                if( cbWo - cbAsk > 3 * sizeof( countT ) )      // THE PART THAT I DON'T NEED IS LARGE ENOUGH TO HOLD ANOTHER ALLOCATION
                {
                    countT cbRemain = cbWo - cbAsk ;
                    cbWo = cbAsk ;
                    pbc += cbWo ;
                    *(countT*)pbc = cbRemain - sizeof( countT ) ; pbc += sizeof( countT ) ;
                    *(countT*)pbc = 0                           ; pbc += sizeof( countT ) ;
                    *(countT*)pbc = 0                           ; pbc += sizeof( countT ) ;
                }

                cNew ++ ;
                cbNew += cbWo ;
                cbWo |= BM_HIGH ;

                break ;
            }
        }

        //testF( tinP , "newF: after" ) ;

        if( !pbNew )
        {
            LOGrAW9( "heapC::newF allocation failure [idAdamRoot,cbP,idLineP,idiFileP]:    " , processGlobal1I.idAdamRoot , "    " , cbP , "    " , idLineP , "    " , idiFileP , "\r\n" ) ;
            dumpF( tinP , "heapC::newF could not allocate pbNew" , "" ) ;
            BLAMMO ;
        }

        grabMe.ungrabF( tinP ) ;

        //if( tinP.pc Utility[ 0 ] ) { LOGrAW3( "heapC::newF [pbNew]:    " , pbNew , "\r\n" ) ; } //U:: TO FIND A LEAK
    }
    THREADmODE4rESTORE

    return pbNew ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141006.heapC.newF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141007.heapC.testF BEGIN
#define DDNAME       "3func.36141007.heapC.testF"
#define DDNUMB      (countT)0x36141007
#define IDFILE      (countT)0x1582

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#if defined( NEVERdEFINED )

    /*1*/voidT heapC::testF( tinS& tinP , const osTextT* const postP )/*1*/
    {
        _IO_

        //TO FIND A BUG
        //static countT idInLath ;
        //countT idIn = 1 + incv02AM( idInLath ) ;
        //if( idIn == 0x520822 )
        //{
        //    dumpF( tinP , "heapC::testF: idIn is at the break value" , postP ) ;
        //}

        byteT*       pbc = pbHeap ;
        byteT* const pbe = pbHeap + sizeof pbHeap ;
        while( pbc < pbe )
        {
            countT  cbHereGross = sizeof( countT ) + ( *(countT*)pbc & ~BM_HIGH ) ;
            countT& cbHereNet   =                      *(countT*)pbc              ; pbc += cbHereGross ;

            if( ( cbHereNet & ~BM_HIGH ) <= 2 * sizeof( countT ) )
            {
                dumpF( tinP , "heapC::testF detected cbHereNet & ~BM_HIGH <= 2 * sizeof( countT )" , postP ) ;
                BLAMMO ;
            }
        }

        if( pbc != pbe )
        {
            dumpF( tinP , "heapC::testF detected pbc != pbe" , postP ) ;
            BLAMMO ;
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141007.heapC.testF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141008.heapC.dumpF BEGIN
#define DDNAME       "3func.36141008.heapC.dumpF"
#define DDNUMB      (countT)0x36141008
#define IDFILE      (countT)0x1583

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#define CBsAYmAX ( TOCK << 4 )

/*1*/voidT heapC::dumpF( tinS& tinP , const osTextT* const post1P , const osTextT* const post2P )/*1*/
{
    _IO_

    ZE( countT , cUsed ) ;
    ZE( countT , cFree ) ;
    ZE( countT , cbUsed ) ;
    ZE( countT , cbFree ) ;

    OStEXT(   ostoSay , CBsAYmAX ) ;
    OStEXTAK( ostoSay , "heapC::dumpF ( " ) ;
    OStEXTA(  ostoSay , post1P ) ;
    OStEXTAK( ostoSay , " ; " ) ;
    OStEXTA(  ostoSay , post2P ) ;
    OStEXTAK( ostoSay , " )\r\n[pbHeap,pbEnd,cbHeap]:    " ) ;
    OStEXTC(  ostoSay , pbHeap , ' ' ) ;
    OStEXTAK( ostoSay , "    " ) ;
    OStEXTC(  ostoSay , pbHeap + sizeof pbHeap , ' ' ) ;
    OStEXTAK( ostoSay , "    " ) ;
    OStEXTC(  ostoSay , sizeof pbHeap , ' ' ) ;
    OStEXTAK( ostoSay , "\r\n\r\ncbRemaining pbc         inUse   cbHereNet   idLine      idiFile\r\n\r\n" ) ;

    byteT*       pbc = pbHeap ;
    byteT* const pbe = pbHeap + sizeof pbHeap ;
    while( pbc < pbe )
    {
        OStEXTC(  ostoSay , pbe - pbc , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , pbc , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;

        countT cbHereNet   = ((countT*)pbc)[ 0 ] ;
        countT idLine      = ((countT*)pbc)[ 1 ] ;
        countT idiFile     = ((countT*)pbc)[ 2 ] ;

        countT cbHereGross = sizeof( countT ) + ( *(countT*)pbc & ~BM_HIGH ) ;

        pbc += cbHereGross ;

        OStEXTA(  ostoSay , cbHereNet & BM_HIGH ? ".       " : "free    " ) ;
        OStEXTC(  ostoSay , cbHereNet & ~BM_HIGH , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idLine , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , idiFile , ' ' ) ;
        OStEXTAK( ostoSay , "\r\n" ) ;

        if( CBsAYmAX - ostoSay.costF() < TUCK )
        {
            LOGrAW( ostoSay ) ;
            ostoSay.truncateF() ;
        }

        if( cbHereNet & BM_HIGH )
        {
            cUsed ++ ;
            cbUsed += cbHereGross ;
        }
        else
        {
            cFree ++ ;
            cbFree += cbHereGross ;
        }
    }

    LOGrAW( ostoSay ) ;
    ostoSay.truncateF() ;

    if( pbc == pbe )
    {
        LOGrAW( "\r\npbc == pbe\r\n" ) ;
    }
    else
    {
        OStEXTAK( ostoSay , "\r\nerror [pbc,pbe,pbe-pbc,pbc-pbe]:    " ) ;
        OStEXTC(  ostoSay , pbc , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , pbe , ' ' ) ;
        OStEXTAK( ostoSay , "    " ) ;
        OStEXTC(  ostoSay , pbe-pbc , ' ' ) ;
        OStEXTAK( ostoSay , "\r\n" ) ;
        OStEXTC(  ostoSay , pbc-pbe , ' ' ) ;
        OStEXTAK( ostoSay , "\r\n" ) ;
        LOGrAW( ostoSay ) ;
        ostoSay.truncateF() ;
    }

    {
        OStEXTAK(  ostoSay , "heapC::testF [cUsed,cFree,cbUsed,cbFree]:    " ) ;
        OStEXTC(   ostoSay , cUsed , ' ' ) ;
        OStEXTAK(  ostoSay , "    " ) ;
        OStEXTC(   ostoSay , cFree , ' ' ) ;
        OStEXTAK(  ostoSay , "                " ) ;
        OStEXTC(   ostoSay , cbUsed , ' ' ) ;
        OStEXTAK(  ostoSay , "    " ) ;
        OStEXTC(   ostoSay , cbFree , ' ' ) ;
        OStEXTAK(  ostoSay , "\r\n" ) ;
        LOGrAW( ostoSay ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36141* : 3func.36141008.heapC.dumpF END
