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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35150* : 3func.35150007.pagec.validateif BEGIN
#define DDNAME       "3func.35150007.pagec.validateif"
#define DDNUMB      (countT)0x35150007
#define IDFILE      (countT)0xb6f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT pageC::validateIF( tinS& tinP , booksC& booksValidP , booksC& booksP , const byteT* const pbzP )/*1*/
{
    if( &booksValidP != &booksP ) { BLAMMO ; }                        // SAME BOOKS AS MINE

    if( pbzP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_DOnOTrEGISTERpAGEc ) )
    {
        if( !POOP )
        {
            countT offbm = -1 ;
            for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
            {
                if( tinP.pBookMark[ offr ].pBooks == &booksP )
                {
                    offbm = offr ;
                    break ;
                }
            }

            ZE( boolT , bFormat ) ;
            if( offbm == -1 ) for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
            {
                if( !tinP.pBookMark[ offr ].pBooks )
                {
                    tinP.pBookMark[ offr ].pBooks         = &booksP ;
                    tinP.pBookMark[ offr ].cRef           = 0       ;
                    tinP.pBookMark[ offr ].pbz            = 0       ;
                    tinP.pBookMark[ offr ].pcpIdBook[ 0 ] = 0       ;
                    bFormat = 1;
                    offbm = offr ;
                    break ;
                }
            }

            if( offbm == -1 ) { BLAMMO ; }              // COULD NOT REGISTER booksP BECAUSE tinP.pBookMark IS FULL

            booksP.lockF( tinP , TAG( TAGiDnULL ) ) ;

            const countT* pcpIdBookNow = booksP.pcpIdBookF() ;

            if( bFormat )
            {
                if( pcpIdBookNow[ 0 ] != 1 ) { BLAMMO ; }
                tinP.pBookMark[ offbm ].pcpIdBook[ 0 ] = pcpIdBookNow[ 0 ] ;
                tinP.pBookMark[ offbm ].pcpIdBook[ 1 ] = pcpIdBookNow[ 1 ] ;
            }

            if                                                      // NEW BOOK HAS GOOD ID
            (
                !pcpIdBookNow
                ||
                pcpIdBookNow[ 0 ] != 1
                ||
                !pcpIdBookNow[ 1 ]
            )
            { BLAMMO ; }
        
            if                                                      // OLD BOOK IS SAME AS NEW BOOK AND OLD pbz IS SAME AS NEW pbz
            (                                                       // THIS ENFORCES THE RULE THAT A THREAD CAN CONSTRUCT ONLY WO SMART POINTER AT A TIME, EXCEPT FOR DUPLICATES
                tinP.pBookMark[ offbm ].pcpIdBook
                &&
                (
                    tinP.pBookMark[ offbm ].pcpIdBook[ 0 ] != 1
                    ||
                    ( tinP.pBookMark[ offbm ].pbz && tinP.pBookMark[ offbm ].pbz != pbzP )
                    ||
                    ( !booksP.cKeepInactiveF() && tinP.pBookMark[ offbm ].pcpIdBook[ 1 ] != pcpIdBookNow[ 1 ] )        // IF !cKeepInactive THEN SHOULD BE IMPOSSIBLE SINCE pbzP MUST ALREADY BE RESIDENT IN MEMORY
                )
            )
            { BLAMMO ; }

            booksP.unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35150* : 3func.35150007.pagec.validateif END
