//SOURCE: 5adam.51000621.1 BEGIN
#define DDNAME "5adam.51000621.1"
#define DDNUMB 0x51000621
#define IDFILE (countT)0x0
#define postHEADER "51000621.h"
#define ifcENABLEtHIRDpARTIES
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.1.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\ipdos.adam.show.third.2.h"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.51000621.1.ClINESiNdEF"

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/WAKEsHOWtEXT( "build.eve.refresh.generated.snips" )/*1*/

#define PRODUCTION

TASK( tmWorkF )
if( pTaskP && pTaskP->c1 && pTaskP->c2 )
{
    stackC& stIdAdamP  = *(stackC*)pTaskP->c1 ;
    countT& cKidsGoneP = *(countT*)pTaskP->c2 ;

    {
        mapCTC& mapAdam = processGlobal3S::_processGlobal3I_IF().mapAdam ;
        TN( tcr , "\r\n" ) ;
        while( !ether )
        {
            ZE( countT , idAdam ) ;
            stIdAdamP.grabF( tinP , TAG( TAGiDnULL ) ) ;
            if( stIdAdamP ) stIdAdamP >> idAdam ;
            stIdAdamP.ungrabF( tinP ) ;
    
            if( !idAdam ) break ;

            TN( tAdam , "" )       ; tAdam = T(mapAdam(idAdam)) ;
            if( !tAdam.csF( tinP ) ) tAdam = TF2(idAdam,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;

            const flagsT flagsHire = flHIRE_WAIT | flHIRE_DISPLAYaUTO ;
            switch( idAdam )
            {
                case ifcIDaDAM_PATCHaLLmASTERS :
                case ifcIDaDAM_CLOAK           :
                case ifcIDaDAM_KERNEL2MONITOR  :
                case ifcIDaDAM_HOMEfLAGS       :
                case ifcIDaDAM_KERNEL3BANG     :
                case ifcIDaDAM_GORILLAbANG     :
                case ifcIDaDAM_MEMBRANEgLASS   :
                case ifcIDaDAM_PREPARElISTS    :
                case ifcIDaDAM_WATCH           :
                case ifcIDaDAM_WATCHiDLEcPU    :
                case ifcIDaDAM_CONSOLE         :
                case ifcIDaDAM_PISS            :
                case ifcIDaDAM_CLOUD           :
                case ifcIDaDAM_ROOThTTPsERVER  :
                case ifcIDaDAM_ROOThEAL        :
                case ifcIDaDAM_SNAPwORDS       :
                case ifcIDaDAM_TIME            :
                case ifcIDaDAM_ROOTmAILoUT     :
                case ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK :
                case ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER :
                case ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 :
                case ifcIDaDAM_ACCESSeVENTS4bOOKbYhASHbYTE2 :
                case ifcIDaDAM_ACCESSeVENTS5bOOKbYhASHbYTE3 :
                case ifcIDaDAM_ACCESSeVENTS6bOOKbYcONTAINERuRI :
                case ifcIDaDAM_ACCESSeVENTS8aUDITbOOKS :
                case ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI :
                case ifcIDaDAM_TOOLwALKsEARCH  :
                case ifcIDaDAM_GORILLAhTTPiDEAFARMcOM :
                case ifcIDaDAM_GORILLAhTTPiDEAFARMcOMrEPORTER :
                case ifcIDaDAM_MONTHLYwOtABLEnOTICEeMAILS :
                case ifcIDaDAM_TOOLwHITElISTuPDATER :
                case ifcIDaDAM_TOOLiNoUTfRAMEctELEMETRYrEPORTER :

                case 0x51000760                 :
                case 0x51000761                 :
                case 0x51000762                 :
                case 0x51000763                 :
                case 0x51000764                 :
                case 0x510006cd                 :
                case 0x5100077b                 :
                case 0x510005e7                 :
                case 0x51000782                 :

                case ifcIDaDAM_TOOLrPTeMAIL0   : // COMMENT THIS LINE OUT TO CAUSE ME TO LAUNCH EMAIL PARSER
                case ifcIDaDAM_TOOLrPTeMAIL1   :
                case ifcIDaDAM_TOOLrPTeMAIL2   :
                case ifcIDaDAM_TOOLrPTeMAIL3   :
                case ifcIDaDAM_TOOLrPTeMAIL4   :

                //U:: ENABLE THESE IN PRODUCTION AFTER THEY ALL WORK (I.E. AFTER THE GRAPHICS PRESENTATION SUBSYSTEM HAS BEEN REWRITTEN)
                case ifcIDaDAM_STARTER1 :
                case ifcIDaDAM_STARTER2 :
                case ifcIDaDAM_STARTER3 :
                case ifcIDaDAM_STARTER4 :
                case ifcIDaDAM_STARTER5 :


                {
                    break ;
                }

                case ifcIDaDAM_SYMBOLtABLE : // THIS WO MUST HIRE SYNCHRONOUSLY BECAUSE IT REPEATEDLY HIRES THE SAME ADAM (ONLY WO INSTANCE OF AN ADAM CAN RUN AT A TIME; SUCCEEDING INSTANCES ARE INTERPRETED AS REPLACEMENTS (BY THE HANDOFFoLD SUBSYSTEM) FOR THE INSTANCE THAT IS RUNNING)
                {                            // 20200524@1352: THE PRECEDING COMMENT IS OBSOLETE.  MULTIPLE INSTANCES OF AN ADAM PROCESS ARE NOW USED (E.G. CLOUD)
                    osTextT* ppostDef[] =    //U:: LAUNCH THESE ASYNCHRONOUSLY AND SIMULTANEOUSLY WITH SOME IPC TO WAIT UNTIL THEY ARE ALL DONE
                    {
                        "1snip.11200099.idwm"                           ,
                        "1snip.112000c0.ifcidtypesoulitem"              ,
                        "1snip.112000c1.ifcidtypedropnote"              ,
                        "1snip.112000cc.bos"                            ,
                        "1snip.112000d6.ifcideventexceptionmonitored"   ,
                        "1snip.11200124.ifcidadam"                      ,
                        "1snip.11200170.ifcidtypetellsys"               ,
                        "1snip.112001bf.ifcidtypestrokecallback"        ,
                        "1snip.112001cf.ifcidtypetool"                  ,
                        "1snip.112001d2.ifcidtinnamed"                  ,
                        "1snip.112001ea.ifcidadamclass"                 ,
                        "1snip.11200218.idtyperelaypopclientwork"       ,
                        "1snip.11200241.ifcidphasethread"               ,
                        "1snip.11200242.ifcidphaseadam"                 ,
                        "1snip.112002a5.saa1"                           ,
                        "1snip.1120035a.ifcidphaseprocess"              ,
                        "1snip.1120039b.listname"                       ,
                        "1snip.1120044f.sc"                             ,
                        "1snip.112004de.sa_sss"

                    } ;
                    
                    for( countT offd = 0 ; !ether && offd < sizeof ppostDef / sizeof ppostDef[ 0 ] ; offd ++ )
                    {
                        ether.strokeF( tinP , T("hiring ")+tAdam+T(" to make from ")+T(ppostDef[offd])+tcr ) ;
                        ether.ifcHireF( tinP , T("621") , idAdam , T(ppostDef[offd])+T(" !noTells") , flagsHire ) ;
                    }
                
                    break ;
                }

                case ifcIDaDAM_DEFlINES :
                {
                    ether.strokeF( tinP , T("hiring ")+tAdam+tcr ) ;
                    ether.ifcHireF( tinP , T("621") , idAdam , T("!faceHear \"\" !noTells") , flagsHire ) ;
                    break ;
                }

                default :
                {
                    if( idAdam < ifcIDaDAM_SCRATCH01 )
                    {
                        ether.strokeF( tinP , T("hiring ")+tAdam+tcr ) ;
                        ether.ifcHireF( tinP , T("621") , idAdam , T("!noTells") , flagsHire ) ;
                    }
                    break ;
                }
            }
        }
    }

    inc02AM( cKidsGoneP ) ;
}
DONE( tmWorkF )

// TO REFRESH ALL HEADER FILES, REMOVE THE "//" N THE NEXT LINE, DELETE THE "ephemeral" DIRECTORY, BUILD ELVES , AND THEN RUN ELVES
// WHEN I RUN AS PART OF ELVES, I WILL ADD "//" BACK INTO THIS SOURCE FILE SO THAT THE FINAL BUILD PASS WILL TERMINATE (RATHER THAN LOOP INDEFINITELY)
//#define DOaLL

TODO

TN( tcr   , "\r\n"   ) ;
TN( tcri2 , "\r\n  " ) ;
TN( te    , " ..."   ) ;

countT pcIdAdam[] =
{
    //DEFINE DOaLL TO REFRESH THE GENERATED SNIP FILES, WHICH MUST BE DONE BEFORE BUILDING A RELEASE

    #if defined( DOaLL )

        ifcIDaDAM_HEADER , ifcIDaDAM_DEFlINES , ifcIDaDAM_MANGLEtABLE , ifcIDaDAM_SOIXLoLDwORDdEFS , ifcIDaDAM_DEFtITLE , ifcIDaDAM_DEFiDiMMUTABLE , ifcIDaDAM_SYMBOLtABLE , ifcIDaDAM_SYMBOLtABLE2 , ifcIDaDAM_CODEmEASUREMENTS ,

    #endif

    //FOR DEBUGGING
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_PREPARElISTS
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_WATCH , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_ROOThTTPsERVER
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_HEADER
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_SCRATCH06
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_SCRATCH0d
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH03 //, ifcIDaDAM_SCRATCH04

    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_PISS
    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_HOMEfLAGS , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD

    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_TOOLrPTeMAIL0 , ifcIDaDAM_TOOLrPTeMAIL1 , ifcIDaDAM_TOOLrPTeMAIL2 , ifcIDaDAM_TOOLrPTeMAIL3 , ifcIDaDAM_TOOLrPTeMAIL4

    //       ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_PATCHaLLmASTERS , ifcIDaDAM_HOMEfLAGS , ifcIDaDAM_KERNEL3BANG , ifcIDaDAM_MEMBRANEgLASS , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD , ifcIDaDAM_CONSOLE , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_SNAPwORDS , ifcIDaDAM_SCRATCH09

    //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH0f

    #if defined( PRODUCTION )

        ifcIDaDAM_ELF , ifcIDaDAM_TOOLiNoUTfRAMEctELEMETRYrEPORTER , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_PATCHaLLmASTERS , ifcIDaDAM_HOMEfLAGS , ifcIDaDAM_KERNEL3BANG , ifcIDaDAM_GORILLAbANG , ifcIDaDAM_MEMBRANEgLASS , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH , ifcIDaDAM_WATCHiDLEcPU , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD /*, ifcIDaDAM_CONSOLE*/ , ifcIDaDAM_SNAPwORDS , ifcIDaDAM_TIME , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_ROOThTTPsERVER /*, ifcIDaDAM_ROOThEAL , ifcIDaDAM_GORILLAhTTPiDEAFARMcOM , ifcIDaDAM_GORILLAhTTPiDEAFARMcOMrEPORTER , ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS4bOOKbYhASHbYTE2 , ifcIDaDAM_ACCESSeVENTS5bOOKbYhASHbYTE3 , ifcIDaDAM_ACCESSeVENTS6bOOKbYcONTAINERuRI , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI , ifcIDaDAM_ACCESSeVENTS8aUDITbOOKS , ifcIDaDAM_TOOLwALKsEARCH*/

        //, ifcIDaDAM_SCRATCH07       //U:: TO FIND A BUG

    #else

        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH /*, ifcIDaDAM_CLOUD*/ , ifcIDaDAM_PISS/*  , 0x51000710*/
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_TOOLrPTeMAIL0 , ifcIDaDAM_TOOLrPTeMAIL1 , ifcIDaDAM_TOOLrPTeMAIL2 , ifcIDaDAM_TOOLrPTeMAIL3 , ifcIDaDAM_TOOLrPTeMAIL4
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH /*, ifcIDaDAM_PISS */ , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , 0x51000723
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH02 , ifcIDaDAM_PREPARElISTS
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS4rEPORT
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_HEADER
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH  , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS8aUDITbOOKS
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_TOOLwALKsEARCH
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH07 , ifcIDaDAM_PREPARElISTS
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH   , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH09
        //ifcIDaDAM_ELF , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS4bOOKbYhASHbYTE2 , ifcIDaDAM_ACCESSeVENTS5bOOKbYhASHbYTE3
        //ifcIDaDAM_ELF , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1
        //ifcIDaDAM_ELF , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS4bOOKbYhASHbYTE2 , ifcIDaDAM_ACCESSeVENTS5bOOKbYhASHbYTE3 , ifcIDaDAM_ACCESSeVENTS6bOOKbYcONTAINERuRI , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI
        //ifcIDaDAM_ELF  , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_SCRATCH0a
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0c
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_SCRATCH0b
        //ifcIDaDAM_ELF , ifcIDaDAM_GORILLAhTTPiDEAFARMcOM
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0b
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0b
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_GORILLAhTTPiDEAFARMcOM , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0d
        //ifcIDaDAM_ELF , 0x51000617
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_GORILLAhTTPiDEAFARMcOMrEPORTER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0c
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0d , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0d
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_MONTHLYwOtABLEnOTICEeMAILS
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0a
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0b
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL3BANG
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0e
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR 
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF
        //ifcIDaDAM_ELF , 0x51000760 , 0x51000761 , 0x51000762 , 0x51000763 , 0x51000764
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , 0x510006cd
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_MEMBRANEgLASS
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_CLOAK , ifcIDaDAM_MEMBRANEgLASS
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_CLOAK , ifcIDaDAM_MEMBRANEgLASS
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0e
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_SCRATCH0e
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_SCRATCH0e , ifcIDaDAM_SCRATCH0f
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , 0x5100077b
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , 0x5100077d
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , 0x510005e7
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , 0x51000782
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , 0x51000782
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER //, ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER //, ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_DEFiDiMMUTABLE , ifcIDaDAM_DEFtITLE
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER //, ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER //, ifcIDaDAM_ROOTmAILoUT
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwHITElISTuPDATER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER 
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwHITElISTuPDATER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER 
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwHITElISTuPDATER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , 0x510005ff
        //ifcIDaDAM_ELF , 0x51000652
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH04
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH03
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH05
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH05 , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , 0x51000791
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_PATCHaLLmASTERS , ifcIDaDAM_HOMEfLAGS , ifcIDaDAM_MEMBRANEgLASS , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH , ifcIDaDAM_WATCHiDLEcPU
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH07
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH07
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH07 , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH09
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR //, ifcIDaDAM_PATCHaLLmASTERS , ifcIDaDAM_HOMEfLAGS /*, ifcIDaDAM_KERNEL3BANG*/ , ifcIDaDAM_MEMBRANEgLASS , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH , ifcIDaDAM_WATCHiDLEcPU , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD /*, ifcIDaDAM_CONSOLE*/ , ifcIDaDAM_SNAPwORDS , ifcIDaDAM_TIME , ifcIDaDAM_ROOTmAILoUT , ifcIDaDAM_ROOThTTPsERVER /*, ifcIDaDAM_ROOThEAL , ifcIDaDAM_GORILLAhTTPiDEAFARMcOM , ifcIDaDAM_GORILLAhTTPiDEAFARMcOMrEPORTER , ifcIDaDAM_ACCESSeVENTS1gATHERuNPACK , ifcIDaDAM_ACCESSeVENTS2bOOKtOGETHER , ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 , ifcIDaDAM_ACCESSeVENTS4bOOKbYhASHbYTE2 , ifcIDaDAM_ACCESSeVENTS5bOOKbYhASHbYTE3 , ifcIDaDAM_ACCESSeVENTS6bOOKbYcONTAINERuRI , ifcIDaDAM_ACCESSeVENTS7rEPORTbYcONTAINERuRI , ifcIDaDAM_ACCESSeVENTS8aUDITbOOKS , ifcIDaDAM_TOOLwALKsEARCH*/
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH05
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH09
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH09
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH08 
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER , ifcIDaDAM_SCRATCH08 , ifcIDaDAM_TOOLiNoUTfRAMEctELEMETRYrEPORTER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH08 
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER //, ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_PATCHaLLmASTERS , ifcIDaDAM_HOMEfLAGS , ifcIDaDAM_MEMBRANEgLASS , ifcIDaDAM_PREPARElISTS , ifcIDaDAM_WATCH , ifcIDaDAM_WATCHiDLEcPU , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS
        //ifcIDaDAM_ELF , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH
        //ifcIDaDAM_ELF , ifcIDaDAM_PISS , ifcIDaDAM_CLOUD
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH09
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL3BANG , ifcIDaDAM_GORILLAbANG
        //ifcIDaDAM_ELF , ifcIDaDAM_CLOAK , ifcIDaDAM_KERNEL2MONITOR , ifcIDaDAM_KERNEL3BANG , ifcIDaDAM_GORILLAbANG
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL3BANG , ifcIDaDAM_GORILLAbANG
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL3BANG
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH08
        //ifcIDaDAM_ELF , ifcIDaDAM_KERNEL2MONITOR
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0a
        //ifcIDaDAM_ELF , ifcIDaDAM_WATCH , ifcIDaDAM_ROOThTTPsERVER
        //ifcIDaDAM_ELF , ifcIDaDAM_SCRATCH0a
        ifcIDaDAM_ELF , ifcIDaDAM_TOOLwALKsEARCH


    #endif

    #if defined( DOaLL )

        , ifcIDaDAM_STARTER1 , ifcIDaDAM_STARTER2 , ifcIDaDAM_STARTER3 , ifcIDaDAM_STARTER4 , ifcIDaDAM_STARTER5 ,

    #endif

} ;

//U:: 20200924@1716: HIGH PRIORITY: REWRITE THIS TO LAUNCH THREADS TO DO ALL BUILDS SIMULTANEOUSLY

stackC stIdAdam( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ;
ZE( countT , cErrors ) ;
{
    stackC stErrors( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_null , ifcSTACKtYPE_PTR_soulC ) ;
    for( countT offa = 0 ; !ether && offa < sizeof pcIdAdam / sizeof pcIdAdam[ 0 ] ; offa ++ )
    {
        mapCTC& mapAdam = processGlobal3S::_processGlobal3I_IF().mapAdam ;

        TN( tAdam , "" )       ; tAdam = T(mapAdam(pcIdAdam[offa])) ;
        if( !tAdam.csF( tinP ) ) tAdam = TF2(pcIdAdam[offa],flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) ;

        ether.strokeF( tinP , tcr+T("Breathe.  Push.  Breathe.  Push.  Making ")+tAdam+te ) ;

        ZE( boolT , bMade ) ;
        IFsCRATCH
        {
            SCOOPS
        
//U::20200924@2052: CONJ: COMMENTING THIS OUT WILL SPEED UP BUILDS
#if defined( NEVERdEFINED )
            tinP.pEtScratch->osMakeHoverFileF( tinP , pcIdAdam[ offa ] ) ;
        
            if( POOP ) { POOPR ; }
            else       bMade = 1 ;
#endif

            if( bMade ) ether.strokeF( tinP , T("  You are so beautiful!  I cloned   ")+tAdam ) ;
            else
            {
                tinP.pEtScratch->osMakeF( tinP , stErrors , pcIdAdam[ offa ] , flMAKE_DEBUG | flMAKE_ENABLEtHIRDpARTIES ) ;

                if( !POOP && !stErrors ) bMade = 1 ;
                else if( POOP ) { POOPR ; }

                if( bMade )
                {
                    if( pcIdAdam[ offa ] != 0x51000622 ) stIdAdam << pcIdAdam[ offa ] ;
                    ether.strokeF( tinP , T("  You are so beautiful!  I made   ")+tAdam ) ;
                }
                else
                {
                    etThread.strokeF( tinP , T("  Aaaaauuuuggggghhhhhh!") ) ;
                    while( stErrors )
                    {
                        cErrors ++ ;
            
                        ZE( soulC* , ps ) ;
                        stErrors >> ps ; ___( ps ) ;
                    
                        ZE( countT , idLine ) ;    
                        *ps >> idLine ;
                    
                        ZE( countT , idCol ) ;    
                        *ps >> idCol ;
                    
                        ZE( strokeS* , psttLine ) ;
                        *ps >> psttLine ; ___( psttLine ) ;
                    
                        ZE( strokeS* , psttNote ) ;
                        *ps >> psttNote ; ___( psttNote ) ;
                        etThread.strokeF( tinP , TF2(idLine,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("(")+TF2(idCol,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T("): ")+T(psttLine)+tcri2+T(psttNote)+tcr ) ;
                    
                        etThread.delF( tinP , psttLine ) ;
                        etThread.delF( tinP , psttNote ) ;
                    
                        DEL( ps ) ;
                    }
                }
            }
        }
    }
}

if( cErrors )
{
    ether.strokeF( tinP , T("I am Eve.  I was not able to make all of my babies,\r\nso I am loafing.") ) ;
    etherC::loafIF( tinP ) ;
}
else
{
    countT cKids = thirdC::osProcessorsIF( tinP ) << 1 ;
    cKids = 1 ;
    ZE( countT , cKidsGone ) ;
    { countT cLaunch = cKids ; while( cLaunch -- ) ether.osThreadF( TaRG1( tmWorkF ) , (countT)&stIdAdam , (countT)&cKidsGone ) ; }

    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
    while( !ether && cKidsGone < cKids ) { ++ s ; ether.osSleepF( tinP , TOCK >> 2 ) ; }
}

#if defined( DOaLL )

    etThread.diskFileOrDirDeleteF( tinP , T("///ideafarm/ephemeral/domains/com/ideafarm/city/workshop/3object/")       , flFILEoRdIRdELETE_RECURSE ) ;

    IFsCRATCH
    {
        SCOOPS
        
        tinP.pEtScratch->diskFileOrDirDeleteF( tinP , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/master/")   , flFILEoRdIRdELETE_RECURSE , 1 ) ; //WILL NOT BE ABLE TO DELETE BASE OR ADAM
        tinP.pEtScratch->diskFileOrDirDeleteF( tinP , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/exedll/1/hover/")    , flFILEoRdIRdELETE_RECURSE , 1 ) ; //WILL NOT BE ABLE TO DELETE BASE OR ADAM
        if( POOP ) { POOPR ; } // WILL ALWAYS POOP BECAUSE SOME OF THE FILES ARE IN USE, BUT THE FILE THAT MUST BE DELETED (MY MASTER FILE) WILL BE
    }

    {
        TN( tMe , "///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/5adam.51000621.1" ) ;
        ZE( osTextT* , posti ) ;
        ZE( countT   , costi ) ;
        etThread.boxGetShadowF( tinP , posti , costi , tMe ) ; ___( posti ) ;

        ZE( strokeS* , pstti ) ;
        etThread.strMakeFromOsTextF( tinP , pstti , posti ) ; ___( pstti ) ;
        etThread.delF( tinP , posti ) ;
        etThread.strReplaceF( tinP , pstti , 0 , T("\r\n#define DOaLL") , T("\r\n//#define DOaLL") ) ; ___( pstti ) ;

        costi = etThread.strMakeF( tinP , LF , posti , pstti ) ; ___( posti ) ;
        etThread.delF( tinP , pstti ) ;

        etThread.boxPutF( tinP , tMe , posti , costi ) ;
        etThread.delF( tinP , posti ) ;
    }

    {
        TN( tHe , "///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.112000f5.FV" ) ;
        ZE( osTextT* , posti ) ;
        ZE( countT   , costi ) ;
        etThread.boxGetShadowF( tinP , posti , costi , tHe ) ; ___( posti ) ;
    
        ZE( strokeS* , pstti ) ;
        etThread.strMakeFromOsTextF( tinP , pstti , posti ) ; ___( pstti ) ;
        etThread.delF( tinP , posti ) ;
        etThread.strReplaceF( tinP , pstti , 0 , T("\r\n#define FVsUPPRESS") , T("\r\n//#define FVsUPPRESS") ) ; ___( pstti ) ;
    
        costi = etThread.strMakeF( tinP , LF , posti , pstti ) ; ___( posti ) ;
        etThread.delF( tinP , pstti ) ;
    
        etThread.boxPutF( tinP , tHe , posti , costi ) ;
        etThread.delF( tinP , posti ) ;
    }

    etThread.traceF( tinP , T("I am Eve.  I have built the generated snips.  Now, I'm outahere") ) ;

#else

    etThread.traceF( tinP , T("I am Eve.  Now, I'm outahere.") ) ;

#endif

//conGF( "\r\n\r\nAND SO ARE YOU!\r\n" ) ;
//etThread.osFireF( tinP , 1 ) ;

REST


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
//SOURCE: 5adam.51000621.1 END
