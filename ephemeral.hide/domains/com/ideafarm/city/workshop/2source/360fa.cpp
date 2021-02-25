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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa002.bookc.dt_bookc BEGIN
#define DDNAME       "3func.360fa002.bookc.dt_bookc"
#define DDNUMB      (countT)0x360fa002
#define IDFILE      (countT)0x145f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/bookC::~bookC( voidT )/*1*/
{
    TINSL

    _IO_

    //20180707@0756: ADDED TO RESTORE BLOCKING THAT WAS RECENTLY REMOVED FROM booksC::readF
    if( pHead->cRef )
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        while( pHead->cRef )
        {
            ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
        }
    }

    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "bookC: -  " ) ;
    //    OStEXTC(  ostoSay , this , '0' ) ;
    //    OStEXTAK( ostoSay , " \r\n" ) ;
    //    LOGrAW(   ostoSay ) ;
    //}

    // if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": bookC destructing") ) ; //U:: TO FIND A BUG
    // 
    // //TO FIND A BUG
    // const osTextT* postFileName = *(fileC*)pbFile ;
    // if( postFileName && thirdC::c_strstrIF( tinP , postFileName , ".putfileif.s.out." ) )
    // {
    //     ZE( countT , offset ) ; //U:: TO FIND A BUG
    //     { //U::TO FIND A BUG
    //     _IO_
    //     { //U::TO FIND A BUG
    // 
    //     #if defined( HOMEdRIVEiS_i )
    //         static osTextT postPrefix[] = "d:\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\Wo'O Ideafarm\\4\\stateSpaces\\0000ffff\\" ;
    //     #else
    //         static osTextT postPrefix[] = "d:\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\Wo'O Ideafarm\\4\\stateSpaces\\0000ffff\\" ;
    //     #endif
    // 
    //     /*U::countT*/ offset = postFileName == thirdC::c_strstrIF( tinP , postFileName , postPrefix )
    //         ? sizeof postPrefix - 1
    //         : 0
    //     ;
    // 
    //     } //U::TO FIND A BUG
    //     } //U::TO FIND A BUG
    // 
    //     { //U::TO FIND A BUG
    //     _IO_
    //     { //U::TO FIND A BUG
    // 
    //     OStEXT(   ostoSay , TUCK << 3 ) ;
    //     OStEXTAK( ostoSay , "~bookC dt"/*" [this,pbBody,cbBody,postFile]"*/": " ) ;
    //     //OStEXTCF( ostoSay , this , '0' ) ;
    //     //OStEXTAK( ostoSay , "    " ) ;
    //     //OStEXTCF( ostoSay , pbBody , '0' ) ;
    //     //OStEXTAK( ostoSay , "    " ) ;
    //     //OStEXTCF( ostoSay , pHead->cbBody , '0' ) ;
    //     //OStEXTAK( ostoSay , "    \"" ) ;
    //     OStEXTA(  ostoSay , postFileName + offset ) ;
    //     //OStEXTAK( ostoSay , "\"" ) ;
    //     tinP.pEther->trace F( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    // 
    //     } //U::TO FIND A BUG
    //     } //U::TO FIND A BUG
    // }

    if( pbFromHeap )
    {
        processGlobal3I.heap.delF( tinP , pbFromHeap ) ;
    }
    else
    {
        {
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "deleting napkin 1\r\n" ) ;
            napkinC* pd = (napkinC*)pbNapkin ;
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "deleting napkin 0\r\n" ) ;
            DELzOMBIE( pd ) ;
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "deleted  napkin\r\n" ) ;
        }

        if( !( F(flagsCt) & flBOOKc_NOsTATEsPACE ) )
        {
            *(flagsT*)&flagsCt &= ~( F(flBOOKc_FILEiScONSTRUCTED) ) ;

            fileC* pd = (fileC*)pbFile ;
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            THREADmODE2oN( flTHREADmODE2_DISALLOWpUSE )
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "deleting backing file 1\r\n" ) ;
            DELzOMBIE( pd ) ;
            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "deleted  backing file 1\r\n" ) ;
            THREADmODE2rESTORE
            THREADmODE1rESTORE
        }
    }

    // if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": bookC destructed") ) ; //U:: TO FIND A BUG

    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "bookC: -- " ) ;
    //    OStEXTC(  ostoSay , this , '0' ) ;
    //    OStEXTAK( ostoSay , " \r\n" ) ;
    //    CONoUTrAW(   ostoSay ) ;
    //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa002.bookc.dt_bookc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa003.bookc.bookc BEGIN
#define DDNAME       "3func.360fa003.bookc.bookc"
#define DDNUMB      (countT)0x360fa003
#define IDFILE      (countT)0x1460


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
 postP
 idStateSpaceP
 flagsP
 cbP
 bFillP
 idMemorySpaceP
*/
/**/

/*1*/bookC::bookC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const osTextT* const postP , const countT idStateSpaceP , const flagsT flagsP , countT cbP , const byteT bFillP , const countT idMemorySpaceP ) :/*1*/
book0C( tinP , 0 , 0 ) ,
flagsCt
(
    idStateSpaceP
        ? flagsP
        : flagsP | flBOOKc_NOsTATEsPACE
) ,
pbFromHeap( 0 )
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        FV( flBOOKc , flagsP ) ;
        __( F(flagsP) & flBOOKc_NOsTATEsPACE      ) ; //THIS FLAG IS FOR INTERNAL USE ONLY; CALLER MAY NOT SPECIFY IT (IT IS IMPLIED BY !idStateSpaceP)
        __( F(flagsP) & flBOOKc_FILEiScONSTRUCTED ) ; //THIS FLAG IS FOR INTERNAL USE ONLY; CALLER MAY NOT SPECIFY IT
        __( cbP && !( F(flagsCt) & flBOOKc_WRITER ) ) ;
        if( F(flagsCt) & flBOOKc_USEhEAPnOTnAPKIN )
        {
            __( postP          ) ;
            __( idStateSpaceP  ) ;
            __( idMemorySpaceP ) ;
        }
        else
        {
            __Z( postP ) ;
            if( POOP ) return ;
            __( !*postP ) ;
        }
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "bookC: +  " ) ;
    //    OStEXTC(  ostoSay , this , '0' ) ;
    //    OStEXTAK( ostoSay ,"    " ) ;
    //    OStEXTA(  ostoSay , postP ) ;
    //    OStEXTAK( ostoSay , "\r\n" ) ;
    //    CONoUTrAW(   ostoSay ) ;
    //}

    // if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": bookC constructing") ) ; //U:: TO FIND A BUG

    if( postP && thirdC::c_strstrIF( tinP , postP , ".soul.reports." ) ) //U::20141002@0549: TO FIND A BUG
    {
        static countT idInLath ;
        countT idIn = 1 + incv02AM( idInLath ) ;
        if( idIn > 0x1000 )
        {
            countT foo = 2 ;
        }
    }

    if( F(flagsCt) & flBOOKc_USEhEAPnOTnAPKIN ) flagsCt |= flBOOKc_RESETcREFoNcT | flBOOKc_PRIORbOOKnOTcONTINUEDhERE ;

    flagsT flagsProvision = flBOOK0pROVISION_FORMAT ;
    if( F(flagsCt) & flBOOKc_DOnOTiNITIALIZEdATA       ) flagsProvision |= flBOOK0pROVISION_DOnOTiNITIALIZE           ;
    if( F(flagsCt) & flBOOKc_RESETcREFoNcT             ) flagsProvision |= flBOOK0pROVISION_RESETcREFoNcT             ;      //20180816@1339: ADDED WITHOUT ANALYSIS OTHER THAN TO NOTICE THAT flBOOKc_RESETcREFoNcT IS NOWHERE ELSE INSPECTED
    if( F(flagsCt) & flBOOKc_PRIORbOOKnOTcONTINUEDhERE ) flagsProvision |= flBOOK0pROVISION_PRIORbOOKnOTcONTINUEDhERE ;

    if( F(flagsCt) & flBOOKc_USEhEAPnOTnAPKIN )
    {
        countT cba = sizeof( bookHeadS ) + cbP ;
        pbFromHeap = processGlobal3I.heap.newF( tinP , idLineCtP , idiFileCtP , cba ) ;
        provisionF( tinP , pbFromHeap , cba , flagsProvision , bFillP ) ;
    }
    else
    {
        ZE( boolT  , bFileExisted ) ;
        if( idStateSpaceP )
        {
            ctFileF( tinP , postP , idStateSpaceP , idMemorySpaceP ) ;
            fileC& file = *(fileC*)pbFile ;

            bFileExisted = file.idOpenResultF( tinP  ) == ifcOPENrESULT_EXISTED ;

            //if( bFileExisted )
            {
                infoFileS info( tinP ) ;
                infoFileS* pInfo = &info ;
                thirdC::dosQueryFileInfoIF( tinP , pInfo , file ) ;

                if( info.cbUsed >= sizeof( napkinHeaderS ) + sizeof( bookHeadS ) )
                {
                    //bookHeadS head ;
                    //countT cbHead = sizeof head ;
                    //thirdC::dosReadIF( tinP , (byteT*)&head , cbHead , (const handleC&)file ) ;
                
                    //if( cbHead == sizeof head && info.cbUsed == sizeof head + head.cbBody )
                    {
                        if( cbP && cbP != info.cbUsed - sizeof( napkinHeaderS ) - sizeof( bookHeadS ) ) { BLAMMO ; }

                        if( !cbP ) cbP = info.cbUsed - sizeof( napkinHeaderS ) - sizeof( bookHeadS ) ;
                    }
                }
            }
        }

        {
            OStEXT(   ostoBuf , TUCK << 2 ) ;
            OStEXTAK( ostoBuf , "book0C/" ) ;
            OStEXTA(  ostoBuf , postP ) ;
            if( idStateSpaceP )                                 // APPENDING idStateSpaceP ENSURES THAT SHARED MEMORY NAME IS DISTINCT FOR EACH BACKING FILE; ADDED 20190104@1712 WITHOUT ANALYSIS
            {
                OStEXTAK( ostoBuf , "." ) ;
                OStEXTC(  ostoBuf , idStateSpaceP , '0' ) ;
            }

            new( 0 , tinP , pbNapkin , sizeof pbNapkin ) napkinC
            (
                tinP ,
                idLineCtP ,
                idiFileCtP ,
                pbBitsCtP ,
                ostoBuf ,
                (
                    !idStateSpaceP
                        ? 0
                        : (const handleC*)*(fileC*)pbFile
                ) ,
                sizeof( bookHeadS ) + cbP ,
                ifcOPENsHAREDmEMORYhOW_nCeO ,
                (
                      ( F(flagsP) & flBOOKc_USEgRABmEMORYsPACEoVERRIDE ? flNAPKINc_USEgRABmEMORYsPACEoVERRIDE : flNAPKINc_null )
                    | ( F(flagsP) & flBOOKc_LOCK                       ? flNAPKINc_LOCK                       : flNAPKINc_null )
                    | ( F(flagsP) & flBOOKc_DOnOTsERIALIZEnAPKIN       ? flNAPKINc_DOnOTsERIALIZEcT           : flNAPKINc_null )
                ) ,
                - 1 ,
                idMemorySpaceP
            ) ;
        }
        napkinC& napkin = *(napkinC*)pbNapkin ;

        boolT bMemoryExisted = F(napkin.flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ;

        if( bMemoryExisted || bFileExisted ) flagsProvision &= ~( F(flBOOK0pROVISION_FORMAT) ) ; //U::20201124@1544: POSSIBLE BUG: HOW CAN FILE PREEXIST WITHOUT MEMORY ALSO PREEXISTING?

        provisionF( tinP , napkin , napkin , flagsProvision , bFillP ) ;

        if( !bMemoryExisted ) napkin.formattingIsDoneF( tinP ) ;
    }

    //TO FIND A BUG
    // const osTextT* postFileName = *(fileC*)pbFile ;
    // if( postFileName && thirdC::c_strstrIF( tinP , postFileName , ".putfileif.s.out." ) )
    // //if( tinP.pEther )
    // {
    //     #if defined( HOMEdRIVEiS_i )
    //         static osTextT postPrefix[] = "d:\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\Wo'O Ideafarm\\4\\stateSpaces\\0000ffff\\" ;
    //     #else
    //         static osTextT postPrefix[] = "d:\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\Wo'O Ideafarm\\4\\stateSpaces\\0000ffff\\" ;
    //     #endif
    // 
    //     countT offset = postFileName == thirdC::c_strstrIF( tinP , postFileName , postPrefix )
    //         ? sizeof postPrefix - 1
    //         : 0
    //     ;
    // 
    //     OStEXT(   ostoSay , TUCK << 3 ) ;
    //     OStEXTAK( ostoSay , " bookC CT"/*" [this,pbBody,cbBody,postFile]"*/": " ) ;
    //     //OStEXTCF( ostoSay , this , '0' ) ;
    //     //OStEXTAK( ostoSay , "    " ) ;
    //     //OStEXTCF( ostoSay , pbBody , '0' ) ;
    //     //OStEXTAK( ostoSay , "    " ) ;
    //     //OStEXTCF( ostoSay , pHead->cbBody , '0' ) ;
    //     //OStEXTAK( ostoSay , "    \"" ) ;
    //     OStEXTA(  ostoSay , postFileName + offset ) ;
    //     //OStEXTAK( ostoSay , "\"" ) ;
    //     tinP.pEther->trace F( tinP , (const strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
    // }

    // if( tinP.pEther ) tinP.pEther->trace F( tinP , TF3((countT)this,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FILLzE,8)+T(": bookC constructed") ) ; //U:: TO FIND A BUG

    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "bookC: ++ " ) ;
    //    OStEXTC(  ostoSay , this , '0' ) ;
    //    OStEXTAK( ostoSay ,"    " ) ;
    //    OStEXTA(  ostoSay , postP ) ;
    //    OStEXTAK( ostoSay , "\r\n" ) ;
    //    LOGrAW(   ostoSay ) ;
    //}
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa003.bookc.bookc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa005.bookc.ctfilef BEGIN
#define DDNAME       "3func.360fa005.bookc.ctfilef"
#define DDNUMB      (countT)0x360fa005
#define IDFILE      (countT)0x1461


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bookC::ctFileF( tinS& tinP , const osTextT* const postNameP , const countT idStateSpaceP , countT idMemorySpaceP )/*1*/
{
    //20200417@1855: KEEP idMemorySpaceP NULL SO THAT CALLER DOES NOT HAVE TO SET flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE
    //if( !idMemorySpaceP ) idMemorySpaceP = tinP.pAdamGlobal1->idMemorySpace ;

    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( postNameP ) ;
        __Z( idStateSpaceP ) ;
        __( idMemorySpaceP && !( F(tinP.flagsThreadMode3) & flTHREADmODE3_ALLOWeXPLICITmEMORYsPACE ) && thirdC::third_idPhaseAdam_IF( tinP ) >= ifcIDpHASEaDAM_EXEpROLOGaDAMmAIN1 && thirdC::third_idPhaseAdam_IF( tinP ) < ifcIDpHASEaDAM_EXEePILOGaDAMmAINa1 ) ;
        if( POOP ) return ;
    }

    _IO_

    OStEXT( ostoName , TUCK << 2 )
    //if( F(flagsCt) & ( flBOOKc_DOnOTuSEpUSE ) )
    {
        {
            poopC poop ;
            SCOOP

            osTextT postHome[ TUCK << 1 ] ;
            thirdC::diskFindHomeIF( tinP , postHome , sizeof postHome , "ideafarm" ) ;
            if( POOP ) { BLAMMO ; }

            //CS:CODEsYNC: 2340004 2340005
            OStEXTA(  ostoName , postHome ) ;                                                                       thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\ephemeral" ) ;                                                                  thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\backed.up.daily" ) ;                                                            thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\domains" ) ;                                                                    thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\com" ) ;                                                                        thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\ideafarm" ) ;                                                                   thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\ipdos" ) ;                                                                      thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\memorySpaces" ) ;                                                               thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\" ) ;
            OStEXTA(  ostoName , thirdC::postUserNameIF() ) ;                                                       thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\" ) ;
            OStEXTCF( ostoName , idMemorySpaceP ? idMemorySpaceP : tinP.pAdamGlobal1->idMemorySpace , '0' ) ;       thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\stateSpaces" ) ;                                                                thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\" ) ;
            OStEXTC(  ostoName , idStateSpaceP , 0 ) ;                                                              thirdC::dosCreateDirIF( tinP , ostoName ) ;
            OStEXTAK( ostoName , "\\" ) ;
            OStEXTA(  ostoName , postNameP ) ;
            OStEXTAK( ostoName , ".bookC" ) ;
        }
    }
    //20171113@0847: TO ELIMINATE NONMONOTONIC GRABBING, ELIMINATE ALL USE OF poolC BY booksC bookC
    //else
    //{
    //    TN( tName , "" ) ;
    //    ctFileNameIF( tinP , tName , postNameP , idStateSpaceP , idMemorySpaceP ) ;
    //
    //    etherC& ether = *tinP.pEther ;
    //    ZE( strokeS* , psttm ) ;
    //    ether.diskMapFileNameF( tinP , psttm , tName ) ; ___( psttm ) ;
    //    osFileNameC osName( tinP , ether , T(psttm) ) ;
    //    ether.delF( tinP , psttm ) ;
    //
    //    OStEXTA( ostoName , osName ) ;
    //}

    countT access       = ifcOPENaCCESS_WR ; //CANNOT SPECIFY READ ONLY HERE BECAUSE napkinC MIGHT NEED TO FORMAT ITSELF EVEN IF I AM ONLY GOING TO READ THE DATA SECTION OF THE NAPKIN
    countT share        = ifcOPENsHARE_WR ;
    countT how          = F(flagsCt) & flBOOKc_WRITER ? ifcOPENhOW_nCeO : ifcOPENhOW_nFeO ;
    flagsT flagsDetails = flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_LOCsEQ | flOPENdETAILS_NOcACHE ;
    /*if( F(flagsCt) & ( flBOOKc_DOnOTuSEpUSE | flBOOKc_DOnOTrEGISTERfILE ) )*/ flagsDetails |= flOPENdETAILS_DOnOTrEGISTER ;    

    THREADmODE2oN( flTHREADmODE2_DISALLOWpUSE )
    new( 0 , tinP , pbFile , sizeof pbFile ) fileC( tinP , ostoName , access , share , flagsDetails , how , flFILEaTTR_null , F(flagsCt) & flBOOKc_DELETE ? flFILEc_DELETE : flFILEc_null ) ;
    THREADmODE2rESTORE

    *(flagsT*)&flagsCt |= flBOOKc_FILEiScONSTRUCTED ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360fa* : 3func.360fa005.bookc.ctfilef END
