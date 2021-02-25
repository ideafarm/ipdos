//SOURCE: 5adam.51000707.1 BEGIN
#define DDNAME "5adam.51000707.1"
#define DDNUMB 0x51000707
#define IDFILE (countT)0x0
#define postHEADER "51000707.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000707.1.ClINESiNdEF"


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.7b30104.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/WAKEhIDE( "ifcIDaDAM_TIME" )/*1*/

TODO

ether.ifcHireF( tinP , T("ifcIDaDAM_TIME") , ifcIDaDAM_ROOTmAILoUT , T("!ignoreFireByOperator") , flHIRE_DISPLAYaUTO , nicNameC() ) ; // flHIRE_DISPLAYaUTO CAN BE COMMENTED OUT TO AVOID WDW FOR ROOT CLOUD INSTANCE WHICH IS USUALLY NOT INTERESTING 

ZE( countT , minuteLath ) ;
static countT pcTallyInLath[ CCtALLYiN ] ;
while( !ether && !POOP )
{
    ZE( countT , time1 ) ;
    ZE( sCountT , time2 ) ;
    etThread.osTimeNowF( tinP , time1 , time2 ) ;
    countT minute = time1 >> 0x14 ;

    if( minuteLath != minute)
    {
        minuteLath = minute ;

        {
            homeS* ph = &homeS::homeIF() ;

            if( ph )
            {
                countT pcTallyInSnap[ CCtALLYiN ] ;
                thirdC::c_memcpyIF( tinP , (byteT*)pcTallyInSnap , (byteT*)ph->pcTallyIn , sizeof pcTallyInSnap ) ;

                countT pcTallyInDelta[ CCtALLYiN ] ;
                thirdC::c_memcpyIF( tinP , (byteT*)pcTallyInDelta , (byteT*)pcTallyInSnap , sizeof pcTallyInDelta ) ;

                ZE( boolT , bBorrow ) ;
                for( countT offt = 0 ; offt < sizeof pcTallyInDelta / sizeof pcTallyInDelta[ 0 ] ; offt ++ )
                {
                    if( bBorrow )
                    {
                        bBorrow = !pcTallyInDelta[ offt ] ;
                        pcTallyInDelta[ offt ] -- ;
                    }

                    if( pcTallyInDelta[ offt ] < pcTallyInLath[ offt ] )
                    {
                        if( bBorrow ) { BLAMMO ; } //IMPOSSIBLE
                        else          bBorrow ++ ;
                    }

                    pcTallyInDelta[ offt ] -= pcTallyInLath[ offt ] ;
                }

                thirdC::c_memcpyIF( tinP , (byteT*)pcTallyInLath , (byteT*)pcTallyInSnap , sizeof pcTallyInLath ) ;

                //REPORT DELTA
                //TN( tSay , "home speed [inOutFrameC ct per minute]: " ) ;
                //for( countT offt = 0 ; offt < sizeof pcTallyInDelta / sizeof pcTallyInDelta[ 0 ] ; offt ++ )
                //{
                //    boolT bDone = 1 ;
                //    for( countT offt2 = offt + 1 ; offt2 < sizeof pcTallyInDelta / sizeof pcTallyInDelta[ 0 ] ; offt2 ++ )
                //    {
                //        if( pcTallyInDelta[ offt2 ] )
                //        {
                //            bDone = 0 ;
                //            break ;
                //        }
                //    }
                //
                //    if( !pcTallyInDelta[ offt ] && bDone ) break ;
                //    else                                   tSay += TF2(pcTallyInDelta[offt],(bDone?flFORMAT_NObIGITvALUES:flFORMAT_NObIGITvALUES|flFORMAT_FILLzE)) ;
                //}
                //etThread.traceF( tinP , tSay ) ;
            }
        }

        ZE( strokeS* , pstto ) ;
        etThread.strMakeF( tinP , LF , pstto , 0 , TOCK ) ; ___( pstto ) ;
        
        etThread.strFuseF( tinP , pstto , T("\r\nminute: ")+TF2(minute,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T("\r\n\r\n") ) ;

        {
        
            ZE( strokeS* , psttc ) ;
            etThread.strCalendarF( tinP , psttc , time2 ) ; ___( psttc ) ;
            etThread.strFuseF( tinP  , pstto , psttc ) ;
            etThread.delF( tinP , psttc ) ;
        }
        
        etThread.strFuseF( tinP , pstto , T("\r\n") ) ;

        TN( tOut , pstto ) ;
        etThread.delF( tinP , pstto ) ;
        
        etThread.boxPutF( tinP , T("///ideafarm/tmp/time.ttt") , tOut , tOut.csF( tinP ) ) ;

        etThread.strokeF( tinP , tOut ) ;
    }

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    ++ s ; ether.osSleepF( tinP , TOCK ) ;
}

etThread.strokeF( tinP , T("ok") ) ;
etherC::loafIF( tinP ) ;

REST

//VISIBLE


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef DDNUMB
#undef DDNAME
#undef IDFILE
#undef postHEADER
#undef ifcENABLEtHIRDpARTIES
//SOURCE: 5adam.51000707.1 END
