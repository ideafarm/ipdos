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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fc* : 3func.360fc002.doc.dt_doc BEGIN
#define DDNAME       "3func.360fc002.doc.dt_doc"
#define DDNUMB      (countT)0x360fc002
#define IDFILE      (countT)0x1475


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/doC::~doC( voidT )/*1*/
{
    switch( idDo )
    {
        case ifcIDdO_REGISTERrOOTaDAMhEART :
        {
            rootAdamGlobal1I.deregisterHeartF() ;
            break ;
        }
        case ifcIDdO_SETUPsOCKETS :
        {
            TINSL
            thirdC::s_shutdown2IF( tinP ) ;
            break ;
        }
        case ifcIDdO_ALLOCATEaPPtELEMETRYpENDINGbUFFER :
        {
            TINSL

            //PSEUDOdUPLICATEcODE 360fc002 33000065
            if( tinP.pbPendingInOutFramePackets )
            {
                THREADmODE4oN( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY | flTHREADmODE4_DOnOTfLUSHpENDINGaPPtELEMETRY ) ;

                countT& cPending = *(countT*)tinP.pbPendingInOutFramePackets ;

                if( cPending )
                {
                    tellInfoAppInOutFrameS* pPending = (tellInfoAppInOutFrameS*)( tinP.pbPendingInOutFramePackets + sizeof( countT ) ) ;

                    if( cPending > CmAXpENDINGiNoUTfRAMEpACKETS )
                    {
                        CONoUTrAW5( "~doC error : [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        LOGrAW5(    "~doC error : [cPending,cMax]: " , cPending , " " , CmAXpENDINGiNoUTfRAMEpACKETS , "\r\n" ) ;
                        BLAMMO ;
                    }

                    {
                        tellC tell( tinP , LF , 0 , ifcIDtYPEtELLaPP_INoUTaRRAY , tinP.pbPendingInOutFramePackets , sizeof( countT ) + cPending * sizeof( tellInfoAppInOutFrameS ) ) ;
                        thirdC::dosTellMonitorIF( tinP , tell , ifcIDbOOKStELL_APP ) ;
                    }

                    cPending = 0 ;
                }
                THREADmODE4rESTORE
            }

            processGlobal3I.heap.delF( tinP , tinP.pbPendingInOutFramePackets ) ;

            //PS:PSEUDOdUPLICATE CODE: 36024002 360fc002
            tellInfoAppInOutFrameTinDtS info ;
            info.idThreadReporting = 1 ;
            info.cTells = tinP.cTellsWriteInOutTelemetry ;
                          tinP.cTellsWriteInOutTelemetry = 0 ;
            info.cCpuCyclesWriteInOutTelemetry = tinP.cCpuCyclesWriteInOutTelemetry ;
                                                 tinP.cCpuCyclesWriteInOutTelemetry = 0 ;

            THREADmODE4oN0( flTHREADmODE4_INoUTfRAMEdOnOTcOLLECTaPPtELEMETRY ) ;
            TELLaPPc3LIFI( ifcIDtYPEtELLaPP_INoUTtINdT , (byteT*)&info , sizeof info , ifcLINE , DDNUMB ) ;

            break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fc* : 3func.360fc002.doc.dt_doc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fc* : 3func.360fc003.doc.doc BEGIN
#define DDNAME       "3func.360fc003.doc.doc"
#define DDNUMB      (countT)0x360fc003
#define IDFILE      (countT)0x1476


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/doC::doC( const countT idDoP , const countT cArgP ) :/*1*/
idDo( idDoP ) ,
cArg( cArgP )
{
    switch( idDo )
    {
        case ifcIDdO_REGISTERrOOTaDAMhEART :
        {
            rootAdamGlobal1I.registerHeartF() ;
            break ;
        }
        case ifcIDdO_SETUPsOCKETS :
        {
            TINSL
            thirdC::s_setupIF( tinP ) ;
            break ;
        }
        case ifcIDdO_ALLOCATEaPPtELEMETRYpENDINGbUFFER :
        {
            TINSL

            if( !tinP.pbPendingInOutFramePackets )
            {
                countT cbaPending = sizeof( countT ) + CmAXpENDINGiNoUTfRAMEpACKETS * sizeof( tellInfoAppInOutFrameS ) ;
                CONoUTrAW5( "doC(3): [cbaPending,% of heap]:    " , cbaPending , "    " , ( cbaPending * TUCK ) / CBhEAP , "\r\n" ) ;

                tinP.pbPendingInOutFramePackets = processGlobal3I.heap.newF( tinP , LF , cbaPending ) ;
                *(countT*)tinP.pbPendingInOutFramePackets = 0 ;
            }

            THREADmODE4oFF0( flTHREADmODE4_INoUTfRAMEdEFERwRITINGaPPtELEMETRY )
            break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fc* : 3func.360fc003.doc.doc END
