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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0002.sexc.dt_sexc BEGIN
#define DDNAME       "3func.360e0002.sexc.dt_sexc"
#define DDNUMB      (countT)0x360e0002
#define IDFILE      (countT)0x13d9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/


/*1*/sexC::~sexC( voidT )/*1*/
{
    TINSL

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ; // IF CT'OR FAILED, IT IS RESPONSIBLE FOR CLEANING UP 
    }

    _IO_

    {
        countT idTypeSay = ifcIDtYPEtELLsYS_SEXdT ;
        tellInfoSysSexS info ;
        info.osPid      = tinP.osPid ;
        info.expCbDrop  = pzMetaHead->expCbDrop ;
        info.expSlots   = pzMetaHead->expSlots  ;
        thirdC::c_strcpyIF( tinP , info.postName , pzMetaHead->postName ) ;
        info.pSex       = this ;
        TELLsYSc3( idTypeSay , (byteT*)&info , sizeof info )
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // 
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    //CONoUTrAW( "~sexC [postName]: \"" ) ;
    //CONoUTrAW( pzMetaHead->postName ) ;
    //CONoUTrAW( "\"\r\n" ) ;

    if( pzMetaHead )
    {
        //{
        //    OStEXT(   ostoSay , TUCK << 2 ) ;
        //    OStEXTAK( ostoSay , "---- ~sexC [idAdam                ,expCbDrop,expSlots,n/p,pbData,pbDataEnd,postName]: " ) ;
        //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , ' ' ) ;
        //    OStEXTAK( ostoSay , "          " ) ;
        //    OStEXTC(  ostoSay , pzMetaHead->expCbDrop , ' ' ) ;
        //    OStEXTAK( ostoSay , " " ) ;
        //    OStEXTC(  ostoSay , pzMetaHead->expSlots , ' ' ) ;
        //    OStEXTA(  ostoSay , F(flagsState) & flSEXcsTATE_USINGnAPfORdATA ? " NAPKIN " : " pool   " ) ;
        //    OStEXTA(  ostoSay , F(flagsState) & flSEXcsTATE_USINGnAPfORmETA ? " NAPKIN " : " pool   " ) ;
        //    OStEXTCF( ostoSay , pbData , ' ' ) ;
        //    OStEXTAK( ostoSay , " " ) ;
        //    OStEXTCF( ostoSay , pbDataEnd , ' ' ) ;
        //    OStEXTAK( ostoSay , " \"" ) ;
        //    OStEXTA(  ostoSay , pzMetaHead->postName ) ;
        //    OStEXTAK( ostoSay , "\" " ) ;
        //    
        //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
        //}

        //------------------------------------------------------------------------------------------------------------------------------------------------------------
        // 
        //------------------------------------------------------------------------------------------------------------------------------------------------------------

        if( !thirdC::c_strstrIF( tinP , pzMetaHead->postName , postPOOLlEAKlOGGER ) )
        {
            byteT* pbNapkin = processGlobal7I._sexC_napGlobalRegistry ;
            if( pbNapkin )
            {
                grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;

                grabotC& grabot = *(grabotC*)pbNapkin ;
                sexGlobalEntryS* pe = (sexGlobalEntryS*)( pbNapkin + sizeof( grabotC ) ) ;
        
                grabot.grabF( tinP , TAG( TAGiDnULL ) ) ;
                ZE( countT , offe ) ;
                for( ; offe < CsEXeNTRIES ; offe ++ )
                {
                    if( !thirdC::c_strcmpIF( tinP , pe[ offe ].postName , pzMetaHead->postName ) )
                    {
                        if( !( -- pe[ offe ].cRef ) ) thirdC::c_memsetIF( tinP , pe[ offe ].postName , sizeof pe[ offe ].postName ) ;
                        break ;
                    }
                }
                grabot.ungrabF( tinP ) ;

                if( offe == CsEXeNTRIES )
                {
                    LOGrAW( "sexC::~sexC/i could not find myself in the registry\r\n" ) ;
                    BLAMMO ;
                }
            }
        }

        //------------------------------------------------------------------------------------------------------------------------------------------------------------
        // 
        //------------------------------------------------------------------------------------------------------------------------------------------------------------

        if( pPoolContainsMe )
        {
            ZE( poolRegistrationS* , pReg ) ;
            {
                homeS& home = homeS::homeIF() ;
                poolRegistrationS* pRegs = (poolRegistrationS*)home.pb_pPoolReg ;
                const osTextT* postPoolName = pPoolContainsMe->postNameF( tinP ) ;

                for( countT offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
                {
                    if( !thirdC::c_strcmpIF( tinP , pRegs[ offr ].postPoolName , postPoolName ) )
                    {
                        pReg = pRegs + offr ;
                        break ;
                    }
                }
            }

            if( !pReg ) { BLAMMO ; }
            else
            {
                const countT offSexBit = pzMetaHead->expCbDrop * CsLOTeXTENTS + pzMetaHead->expSlots ;

                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                while( incv8AM( pReg->pbSex_cQueue[ offSexBit ] ) )
                {
                    decv8AM( pReg->pbSex_cQueue[ offSexBit ] ) ;
                    ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                }

                countT offRef = decv8AM( pReg->pbSex_cRef[ offSexBit ] ) ;              // THE VALUES IN MY ELEMENTS REMAIN AND MUST BE CLEARED  BEFORE REUSE
    
                if( offRef == 1 ) btrAM( pReg->pbSexBitFormatted  , offSexBit ) ;
                if( !offRef ) { BLAMMO ; } // UNDERFLOW (SHOULD BE IMPOSSIBLE )

                decv8AM( pReg->pbSex_cQueue[ offSexBit ] ) ;
    
                THREADmODE1rESTORE
            }
        }

        //------------------------------------------------------------------------------------------------------------------------------------------------------------
        // 
        //------------------------------------------------------------------------------------------------------------------------------------------------------------

        if( 1 == decv02AM( pzMetaHead->cRef ) )
        {
            //U::IF A FLAG IS SET THEN LOG ALL SLOTS THAT ARE FLAGGED AS OWNED AND, IF NOTE EXISTS, REPORT THE CONTENT OF THE NOTE FOR EACH
            boolT bFoo = 1 ;
            if( bFoo )
            {
                byteT* pbzMetaBitsOwned = (byteT*)( pzMetaHead + 1 ) ;

                countT cbaBitsOwned = 1 + ( 1 << pzMetaHead->expSlots ) / SB ;
                cbaBitsOwned += CBtOaLIGN02( pbzMetaBitsOwned + cbaBitsOwned ) ;

                dropNoteS* pzMetaNote = F(pzMetaHead->flagsCtCopy) & fliSEXc_NOTES
                    ? (dropNoteS*)( pbzMetaBitsOwned + cbaBitsOwned )
                    : 0
                ;

                if( pzMetaNote )
                {
                    const countT cbSlot = 1 << pzMetaHead->expCbDrop ;
                    const countT cSlots = 1 << pzMetaHead->expSlots ;
                    const countT offSlotsUseableBegin =          pzMetaHead->cSlotsAvoidLo ;
                    const countT offSlotsUseableEnd   = cSlots - pzMetaHead->cSlotsAvoidHi ;
                    byteT* pbo = pbzMetaBitsOwned ;
                    byteT mask = 1 ;
                    ZE( countT , cLeaks ) ;

                    for( countT offs = 0 ; offs < cSlots ; offs ++ )
                    {
                        boolT bOwned = *pbo & mask ;
                        mask <<= 1 ;
                        if( !mask )
                        {
                            pbo ++ ;
                            mask = 1 ;
                        }
                    
                        if
                        (
                            offs <  offSlotsUseableBegin
                            ||
                            offs >= offSlotsUseableEnd 
                        )
                        continue ;

                        if( bOwned )
                        {
                            cLeaks ++ ;

                            byteT* pbDrop = pbData + offs * cbSlot + ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) ;
                            countT idName = listingC::bIsListingIF( tinP , (listingC*)pbDrop , fliLISTINGc_MIXINlIST )
                                ? ((listC*)pbDrop)->nameF()
                                : 0
                            ;

                            OStEXT(   ostoSay , TUCK << 1 ) ;
                            OStEXTAK( ostoSay , "\"" ) ;
                            OStEXTA(  ostoSay , pzMetaHead->postName ) ;
                            OStEXTAK( ostoSay , "\" leak: " ) ;
                            OStEXTC(  ostoSay , pbDrop , '0' ) ;
                            OStEXTAK( ostoSay , " " ) ;
                            OStEXTC(  ostoSay , pzMetaNote[ offs ].idiFileTagged , 0 ) ;
                            OStEXTAK( ostoSay , "(" ) ;
                            OStEXTC(  ostoSay , pzMetaNote[ offs ].idLineTagged , 0 ) ;
                            OStEXTAK( ostoSay , ") " ) ;
                            OStEXTC(  ostoSay , pzMetaNote[ offs ].idiFileTagged2 , 0 ) ;
                            OStEXTAK( ostoSay , "(" ) ;
                            OStEXTC(  ostoSay , pzMetaNote[ offs ].idLineTagged2 , 0 ) ;
                            OStEXTAK( ostoSay , ")" ) ;
                            if( idName )
                            {
                                OStEXTAK( ostoSay , " listC: " ) ;
                                OStEXTC(  ostoSay , idName , 0 ) ;
                            }
                            OStEXTAK( ostoSay , "\r\n" ) ;

                            CONoUTrAW( ostoSay ) ;
                            LOGrAW(    ostoSay ) ;

                            //COMMENT OUT IN PRODUCTION.  CODE LIKE THIS CAN BE USED TO FIND LEAKS: osTextT STRING
                            //if( pzMetaNote[ offs ].idLineTagged == 0x5f )
                            //{
                            //    static osTextT postTest[] = POSThHOMEdRIVE ":\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\memorySpaces\\ifo20111122\\4\\stateSpaces\\" ;
                            //    countT offx = thirdC::c_strstrIF( pbDrop , postTest ) == pbDrop ? sizeof postTest - 1 : 0 ;
                            //
                            //    //CONoUTrAW( "content: \"" ) ;
                            //    CONoUTrAW( pbDrop + offx ) ;
                            //    CONoUTrAW( "\r\n" ) ;
                            //
                            //    //LOGrAW( "content: \"" ) ;
                            //    LOGrAW( pbDrop ) ;
                            //    LOGrAW( "\r\n" ) ;
                            //}

                            //COMMENT OUT IN PRODUCTION.  CODE LIKE THIS CAN BE USED TO FIND LEAKS: strokeS STRING
                            //{
                            //    osTextT postBuf[ TUCK << 2 ] ;
                            //    strokeS* pstti = (strokeS*)pbDrop + CSpREFIX ;
                            //    osTextT* posto = postBuf ;
                            //    countT cDo = ((strokeS*)pbDrop)->idAdam ;
                            //    while( cDo -- ) *( posto ++ ) = ( pstti ++ )->idAdam ;
                            //    *posto = 0 ;
                            //
                            //    CONoUTrAW( "content: \"" ) ;
                            //    CONoUTrAW( postBuf ) ;
                            //    CONoUTrAW( "\"\r\n" ) ;
                            //
                            //    LOGrAW( "content: \"" ) ;
                            //    LOGrAW( postBuf ) ;
                            //    LOGrAW( "\"\r\n" ) ;
                            //}
                        }
                    }

                    //if( cLeaks ) BOSnOvALUE( WHATsn , OS sLEEPf( -1 ) )
                }
            }

            DELzOMBIE( pzMetaHead ) ;
        }
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // 
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    if( F(flagsState) & flSEXcsTATE_USINGnAPfORdATA )
    {
        napkinC* pnDoomed = (napkinC*)pb_napData ;
        DELzOMBIE( pnDoomed ) ;
    }

    if( F(flagsState) & flSEXcsTATE_USINGnAPfORmETA )
    {
        napkinC* pnDoomed = (napkinC*)pb_napMeta ;
        DELzOMBIE( pnDoomed ) ;
    }
    else
    {
        //U:: pbMeta IS BACKED BY A DATABASE LISTING THAT SHOULD BE DELETED IF I AM THE ONLY REFERENCE TO IT
    }

    if( F(flagsCt) & fliSEXc_MAPPEDtOdISK ) //CLOSING THE BACKING FILES BEFORE DELETING THE SHARED MEMORY THAT IS MAPPED TO THEM IS OK ACCORDING TO WIN32 DOC
    {
        puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
        fileC* pDoomed = (fileC*)pbFileMeta ;
        DELzOMBIE( pDoomed ) ;
        pDoomed = (fileC*)pbFileData ;
        DELzOMBIE( pDoomed ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0002.sexc.dt_sexc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0003.sexc.sexc BEGIN
#define DDNAME       "3func.360e0003.sexc.sexc"
#define DDNUMB      (countT)0x360e0003
#define IDFILE      (countT)0x13da


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sexC::sexC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idLineNewP , const countT idiFileNewP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , const flagsT flagsP , const countT idStateSpaceP , countT idMemorySpaceP , poolC* const pPoolContainsMeP ) :/*1*/
pPoolContainsMe( pPoolContainsMeP ) ,
flagsCt
(
    !idStateSpaceP
        ? flagsP
        :
            (
                ctFilesF( tinP , postNameP , expCbDropP , expSlotsP , idStateSpaceP )
                ,
                flagsP | fliSEXc_MAPPEDtOdISK
            )
) ,
flagsState( flSEXcsTATE_null ) ,
idStateSpace( idStateSpaceP ) ,
idLathNewDel( 0 ) ,
pbMeta( 0 ) ,
pzMetaHead( 0 ) ,
pbzMetaBitsOwned( 0 ) ,
pzMetaNote( 0 ) ,
pbData( 0 ) ,
pbDataEnd( 0 ) ,
pSexLifoConstructing( 0 ) ,
offFoundLath( - 1 ) ,
pSexLifoConstructed( 0 )
{
    thirdC::dosPriorityIF( tinP ) ; //U:: TO FIND A BUG

    const flagsT maskExpCbDrop = 1 << expCbDropP ;                              //U::REMOVE UNNECESSARY AND/OR UNUSED SERIALIZATION SUPPORT sexC poolC FOR poolRegistrationS
    const flagsT maskExpSlots  = 1 << expSlotsP  ;
    boolT bNest1 = !pPoolContainsMe ? 0 : !!( tinP.fliSexCtPendingExpCbDrop & maskExpCbDrop ) ;
    boolT bNest2 = !pPoolContainsMe ? 0 : !!( tinP.fliSexCtPendingExpSlots  & maskExpSlots  ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    ZE( boolT , bRecursionCycle ) ;

    if( pPoolContainsMe )               // I AM MAINLY FOR USE WITHIN poolC ; BUT AN APPLICATION CAN CT ME (pPoolContainsMe MUST BE 0)
    {
        sexC* pSexc = tinP.pSexLifoConstructing ;
        while( pSexc )
        {
            if( pSexc == this )
            {
                bRecursionCycle = 1 ;
                break ;
            }
            pSexc = pSexc->pSexLifoConstructing ;
        }
    }

    if( pPoolContainsMe )
    {
        pSexLifoConstructing = tinP.pSexLifoConstructing ;
                               tinP.pSexLifoConstructing = this ;

        if( !bNest1 ) tinP.fliSexCtPendingExpCbDrop |= maskExpCbDrop ;
        if( !bNest2 ) tinP.fliSexCtPendingExpSlots  |= maskExpSlots  ;
    }

    //U::A NOW HERE
    ZE( boolT , bNested   ) ;
    ZE( boolT , bObeyReg  ) ;
    ZE( boolT , bDataPool ) ;
    ZE( boolT , bMetaPool ) ;
    ZE( poolRegistrationS* , pReg ) ;
    const countT offSexBit   = expCbDropP * CsLOTeXTENTS + expSlotsP ;
    const countT offSexByte  =                 offSexBit / SB ;
    const byteT  maskSexByte = (byteT)( 1 << ( offSexBit % SB ) ) ;

    //U::B NOW HERE
    countT pczListSex[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM1 , LISTnAME_HANDhOLD , LISTnAME_SEXc , BM_HIGH | expCbDropP , BM_HIGH | expSlotsP , 0 } ;

    //U:: C NOW HERE

    if( expCbDropP == 0x10 )
    {
        countT foo = 2 ;
    }

    //CONoUTrAW3( "[expGrain]: " , thirdC::os_expCbAllocationGrain_IF( tinP ) , "\r\n" ) ;

    boolT bSmallSlots = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << expCbDropP ) < ( 1 << thirdC::os_expCbAllocationGrain_IF( tinP ) ) ; // FOR SMALL SLOT SIZES, pbData WILL POINT TO THE napkinHeaderS CONTROL STRUCTURE, WHICH IS WHY THE LOW SLOTS MUST BE MARKED AS UNAVAILABLE

    //CONoUTrAW7( "sexC [bSmallSlots,expCbDropP,expSlotsP]: " , bSmallSlots , " " , expCbDropP , " " , expSlotsP , "\r\n" ) ;

    countT cbNeededForBits = 1 + ( 1 << expSlotsP ) / SB ;
    countT cbaMeta = sizeof( sexHeadS ) + cbNeededForBits + CBtOaLIGN02( cbNeededForBits ) ;
    if( F(flagsCt) & fliSEXc_NOTES ) cbaMeta += sizeof( dropNoteS ) << expSlotsP ;

    /*FOR SMALL expCbDropP, SLOTS AT BOTTOM ARE UNUSEABLE; SEE sexHeadS::cSlotsAvoidLo*/
    countT cbaDataNeeded = ( 1 << expSlotsP ) * ( ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << expCbDropP ) ) ;
    countT cbaDataPool   = cbaDataNeeded ;
    countT cbaDataNapkin =
        
        cbaDataNeeded
        +
        (
            bSmallSlots
                ? - (sCountT)sizeof( napkinHeaderS )         // SUBTRACT FOR napHeaderS SO THAT THE BYTES ALLOCATED BY napkinC WILL BE AN INTEGRAL MULTIPLE OF THE ALLOCATION UNIT ; THIS RESULTS IN THE napHeaderS OVERLAYING SOME LOW DATA SLOTS, WHICH IS WHY THE FORMATTING CODE MUST MARK THOSE SLOTS AS UNAVAILABLE ; THE FORMATTING CODE WILL ALSO MARK SOME HIGH SLOTS AS UNAVAILABLE, IN ORDER TO GUARANTEE HEADROOM FOR ACCESSING THE HIGHEST BYTE
                :            sizeof( countT        ) - 1     // ADD HEADROOM SO THAT THE LATH BYTE CAN BE READ USING A DWORD (countT) INSTRUCTION ; SINCE THE DATA WILL BE AN INTEGRAL MULTIPLE OF THE ALLOCATION UNIT, THIS HEADROOM WILL CAUSE AN ENTIRE ALLOCATION UNIT (1 TOCK) (64K) TO BE OBTAINED JUST TO GET THESE 3 BYTES
        )

    ;

    // META LAYOUT
    // 
    // ADDRESS                                          LENGTH                                  DESCRIPTION
    // 
    // pbMeta == pzMetaHead                             sizeof( sexHeadS )                      sexHeadS
    // 
    // pbzMetaBitsOwned                                 cbMetaNeeded                            1 BIT FOR EACH OF 1 << expSlotsP SLOTS
    // 
    //                                                  CBtOaLIGN02( cbMetaNeeded )             PADDING TO ALIGN pzMetaNote TO countT BOUNDARY
    // 
    // pzMetaNote                                       sizeof( dropNoteS ) << expSlotsP        1 dropNoteS FOR EACH OF 1 << expSlotsP SLOTS
    // 
    // WHEN THE BIT FOR A SLOT IS SET, THAT SLOT IS MARKED AS "OWNED" ("IN USE")
    // 
    // A:ASSUME: sizeof( sexHeadS ) IS INTEGRAL MULTIPLE OF sizeof( countT )

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // 
    // INTRODUCTION AND OVERVIEW
    // 
    // WHEN ORIGINALLY WRITTEN, MY JOB WAS SIMPLY TO ASK THE BASE O.S. TO ALLOCATE OO SHARED MEMORY BLOBS, pbData AND pbMeta.  THESE BLOBS WERE OBTAINED USING
    // OO napkinC's.  THE ONLY UNUSUAL FEATURE OF THE CODE WAS THAT THREAD LOCAL STORAGE WAS USED TO CALCULATE THE CONSTRUCTION ARGUMENTS FOR THESE OO napkinC'S.
    // pbData IS SIMPLY A SEQUENCE OF 1 << expSlotsP "SLOTS", EACH OF SIZE 1 << expCbDropP.  WHEN APPLICATION CODE USES THE new OPERATOR TO REQUEST MEMORY FROM
    // *pPoolContainsMe, THE POINTER VALUE THAT IS RETURNED POINTS TO THE BEGINNING OF WO OF THESE SLOTS.  (THE SLOT SELECTED IS ALWAYS THE HIGHEST AVAILABLE SLOT.)
    // EACH SLOT IS ASSOCIATED WITH A SINGLE BIT IN pbMeta.  IF THAT BIT IS 0, THE SLOT IS AVAILABLE; ELSE THE SLOT IS "OWNED" (OR "IN USE").
    // 
    // poolC USES "OO POWER EXPANSION" TO CONSTRUCT sexC ("SLOTS EXTENTS") ON DEMAND.  IN THEORY, 02 INSTANCES COULD BE CONSTRUCTED FOR EACH OF 02 SLOT SIZES.
    // THE RANDOM ON DEMAND CONSTRUCTION OF 004 (1024_9 I.E. 1K) BASE O.S. MEMORY ALLOCATIONS OF VARIOUS SIZES WOULD FRAGMENT THE ADDRESS SPACE, RESULTING IN
    // ACTUAL AVAILABLE MEMORY BEING FAR BELOW THEORETICAL.  (napkinC CONSTRUCTION WOULD FAIL EVEN IF TOTAL AVAILABLE MEMORY WAS SUFFICIENT IF THERE ISN'T A
    // SUFFICIENTLY LARGE CONTIGUOUS PIECE.
    // 
    // TO REDUCE FRAGMENTATION, THIS CODE NOW ATTEMPTS TO OBTAIN MEMORY FROM *pPoolContainsMe FOR pbData AND pbMeta.  THE HAPPIEST OUTCOME FOR SUCH A REQUEST IS
    // THAT A sexC INSTANCE THAT HAS AN AVAILABLE SLOT HAPPENS TO ALREADY EXIST FOR THE PARTICULAR SLOT SIZE NEEDED.  IF NOT, THEN A sexC WILL BE CONSTRUCTED
    // RECURSIVELY.  THAT RECURSION WILL ALWAYS USE napkinC.  (I THINK THAT THIS IS TRUE.  U::STUDY THE CURRENT CODE TO SEE WHEN IT SUPPRESSES THE poolC ATTEMPTS.)
    // THE UNHAPPIEST OUTCOME IS THAT A NEW sexC IS CONSTRUCTED RECURSIVELY THAT GETS BOTH pbData AND pbMeta USING napkinC.
    // 
    // AT THE TIME OF THIS WRITING, THE ENHANCED CODE APPEARS TO WORK, BUT HAS NOT BEEN TESTED AND IS NOT UNDERSTOOD.  IN PARTICULAR, I DO NOT UNDERSTAND WHAT
    // EXACTLY DETERMINES WHETHER THE poolC ATTEMPTS ARE SUPPRESSED AND WHETHER THOSE CIRCUMSTANCES CAN BE REDUCED OR ELIMINATED.
    // 
    // THE CALLER MUST CAST ME TO (const poopC&) TO DISCOVER WHETHER I WAS CONSTRUCTED AOK.  IF SOMETHING THAT I DO CAUSES A sexC WITH THE SAME SPEC TO BE CT'D, I
    // WILL DETECT THIS AND BECOME IMPOTENT.  THE CALLER MUST DETECT THIS AND DESTROY ME RATHER THAN USE ME.  "SPECIFICATIONS" MEANS "[expCbDrop,expSlots]"
    // 
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // SET UP FOR WORK
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    //U:: C WAS HERE

    //U::B WAS HERE

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // SET bObeyReg IFF I AM NOT THE WOTH REFERENCE TO THE BIT FOR THIS sexC SPECIFICATION
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    //U::A WAS HERE

    if( pPoolContainsMe )
    {
        homeS& home = homeS::homeIF() ;
        poolRegistrationS* pRegs = (poolRegistrationS*)home.pb_pPoolReg ;
        const osTextT* postPoolName = pPoolContainsMe->postNameF( tinP ) ;

        for( countT offr = 0 ; offr < CpOOLrEGISTRATIONSmAX ; offr ++ )
        {
            if( !thirdC::c_strcmpIF( tinP , pRegs[ offr ].postPoolName , postPoolName ) )
            {
                pReg = pRegs + offr ;
                break ;
            }
        }

        //SUPPRESSED WITHOUT ANALYSIS TO GET CORRECT FUNCTION FOR OO PROCESSES ACCESSING THE SAME PERSISTENT POOL: __NZ( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) ;

        if( !POOP )
        {
            if( !pReg ) { BLAMMO ; }
            else
            {
                THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
                {
                    sleepC s( tinP , TAG( TAGiDnULL ) ) ;
                    while( incv8AM( pReg->pbSex_cQueue[ offSexBit ] ) )
                    {
                        decv8AM( pReg->pbSex_cQueue[ offSexBit ] ) ;
                        ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                    }
                }
                THREADmODE1rESTORE

                countT offRef = incv8AM( pReg->pbSex_cRef[ offSexBit ] ) ;
                if( offRef == 0xff ) { BLAMMO ; } // OVERFLOW

                bNested = !!( pReg->pbSexBitFormatting[ offSexByte ] & maskSexByte ) ; // CT OF sexC FOR A GIVEN SPEC IS SERIALIZED WITHIN slotsC::newF, SO IF THE FORMATTING BIT IS SET I MUST HAVE CALLED MYSELF

                if( offRef && !bNested ) bObeyReg = 1 ;

                if( !bObeyReg )
                {
                    btrAM( pReg->pbSexBitDataIsInPool , offSexBit ) ;
                    btrAM( pReg->pbSexBitMetaIsInPool , offSexBit ) ;
                }

                decv8AM( pReg->pbSex_cQueue[ offSexBit ] ) ;

                if( bObeyReg )
                {
                    while( !( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) ) thirdC::dosSleepWinkIF( tinP ) ;

                    bDataPool = !!( pReg->pbSexBitDataIsInPool[ offSexByte ] & maskSexByte ) ;
                    bMetaPool = !!( pReg->pbSexBitMetaIsInPool[ offSexByte ] & maskSexByte ) ;
                }
            }
        }
    }

    //U:: D NOW HERE
    const boolT bSetResetFormatting = !bObeyReg && !bNested && pReg ;
    if( bSetResetFormatting && btsAM( pReg->pbSexBitFormatting , offSexBit ) ) { BLAMMO ; }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // ALLOCATE THREAD LOCAL STORAGE
    // TLS (tinS::newF pbF delF) WAS ORIGINALLY USED FOR CODING CONVENIENCE WHEN napkinC'S WERE UNCONDITIONALLY CONSTRUCTED
    // NOW THAT napkinC'S ARE CONDITIONALLY CONSTRUCTED IN THE BODY OF THE sexC CONSTRUCTOR, TLS IS NOT NEEDED FOR CODING CONVENIENCE
    // BUT IT IS RETAINED BECAUSE IT AVOIDS THE USE OF *pPoolContainsMe, WHICH COULD TRIGGER NESTED CONSTRUCTION OF OTHER sexC
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    //CS:CODEsYNC: 360e0003 360e0003
    tinP.tlsNewF( 0x10 ) ;    thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , expSlotsP ) ;
    tinP.tlsNewF( 0x10 ) ;    thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , expCbDropP ) ;
    tinP.tlsNewF( 0x10 ) ;    thirdC::c_itoaIF( tinP , tinP.pbF() , 0x10 , idStateSpaceP ) ;
    tinP.tlsNewF( TUCK ) ;

    //U:: D WAS HERE

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    // TRY TO ALLOCATE pbData FROM A SIBLING sexC (ANOTHER sexC, EXISTING OR NEWLY CREATED, OF *pPoolContainsMe
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    static boolT bEnableNesting = 1 ; // SET TO 1 IN PRODUCTION; SET TO 0 TO DISABLE USAGE OF listC NESTING ; THIS IS STATIC TO FACILITATE MANIPULATION IN DEBUGGER
    bEnableNesting = 0 ; //U:: ENABLE THIS IN PRODUCTION ; THIS IS DISABLED ONLY TO UNCLUTTER THE OUTPUT FROM listC::chatterIF

    if
    (
        bEnableNesting
        &&
        pPoolContainsMe
        &&
        (
            ( bObeyReg && bDataPool )
            ||
            (
                !bObeyReg
                &&
                pPoolContainsMe
                // &&
                // !( F(flagsCt) & fliSEXc_BROWSE )
                &&
                !( F(tinP.flagsThreadMode3) & flTHREADmODE3_DOnOTmAKEsEXiNpOOL )
            )
        )
    )
    {
        if( bObeyReg && !bDataPool ) { BLAMMO ; }
        // ALLOCATE pbData FROM *pPoolContainsMe TO AVOID THE OVERHEAD OF USING A napkinC AND ESCAPE THE BASE O.S. ALLOCATION GRAIN MINIMUM AND MINIMIZE ADDRESS SPACE FRAGMENTATION
    
        THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )
        {
            puseC puseUse( tinP , *pPoolContainsMe ) ;
        
            countT pczField[]   = { ifcIDrECORDfIELD_SEXcbACKINGbLOBdATA , 0 } ;
        
            TELL( "ss.1" ) ; //U:: TO FIND A BUG
            grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;
            TELL( "ss.0" ) ; //U:: TO FIND A BUG

            ZE( boolT , bListsExist ) ;
            {
                {
                    handleC hListSex1( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                    listC::openIF( tinP , hListSex1 , pczListSex , flLISToPEN_IFeXISTS , ifcIDgRABlAYER_8POOL5nEW ) ;
                    if( ~hListSex1 )
                    {
                        handleC hListField( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                        listC::openIF( tinP , hListField , hListSex1 , pczField , flLISToPEN_IFeXISTS , ifcIDgRABlAYER_8POOL5nEW ) ;
                        if( ~hListField ) bListsExist = 1 ;
                    }
                }

                if
                (
                    ( 1 << expCbDropP != sizeof( listC ) || bListsExist )           // CREATION OF THE RECORD AND THE FIELD listC WOULD REQUIRE ME
                )
                {
                    handleC hListSex2( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                    listC::openIF( tinP , hListSex2 , pczListSex , flLISToPEN_null , ifcIDgRABlAYER_8POOL5nEW ) ; //U::BUG: THE grabitC::ungrabF BLAMMO OCCURS WITHIN THIS CALL
        
                    ZE( fieldEditParamOutC* , pOut ) ;
                    THREADmODE3oN( flTHREADmODE3_DOnOTmAKEsEXiNpOOL )
                    flagsT flagsRC = listC::fieldIF( tinP , pOut , hListSex2 , pczField , _1_modePushIfNotExistC() + _1_pushC( 0 , cbaDataPool ) + _1_modeQueryNewC() + _1_queryC() , idLineNewP , idiFileNewP , flLISToPEN_null , ifcIDgRABlAYER_8POOL5nEW ) ;
                    THREADmODE3rESTORE
        
                    __Z( pOut ) ;
                    if( !POOP )
                    {
                        __NZ( pOut->pNext ) ;
                        if( !POOP ) pbData = (byteT*)(const osTextT*)pOut->vspBlob ;
                    }

                    {
                        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                        DELlIST( fieldEditParamOutC , pOut ) ;
                    }
                }
        
                //DO THIS IN MY DESTRUCTOR BUT ONLY IF I AM THE ONLY CLIENT: listC::deleteIF( tinP, pczListSex ) ;
            }

            if( !bObeyReg && pReg && !( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) && btsAM( pReg->pbSexBitDataIsInPool , offSexBit ) ) { BLAMMO ; }
        }
        THREADmODE2rESTORE
    }

    //SUPPRESSED WITHOUT ANALYSIS TO GET CORRECT FUNCTION FOR OO PROCESSES ACCESSING THE SAME PERSISTENT POOL: if( pPoolContainsMe ) { __NZ( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) ; } // BECOME IMPOTENT IF I JUST RECURSIVELY CALLED MYSELF FOR THE SAME SPECIFICATIONS

    if( POOP )
    {
        //U::DELETE THE BLOB THAT I JUST ALLOCATED
    }
    else
    {
        //------------------------------------------------------------------------------------------------------------------------------------------------------------
        // IF COULD NOT, THEN ALLOCATE pbData USING A napkinC TO OBTAIN A MEMORY ALLOCATION FROM THE BASE O.S.
        //------------------------------------------------------------------------------------------------------------------------------------------------------------

        if( !pbData )
        {
            if( bObeyReg && bDataPool ) { BLAMMO ; }

            // WHEN SLOT SIZE IS SMALL, DATA OVERLAYS THE NAPKIN HEADER AND NO ADDITIONAL BYTES ARE ALLOCATED.  INSTEAD, THE LOWEST AND HIGHEST SLOTS ARE MARKED AS UNAVAILABLE; THIS IS DONE TO AVOID THE EXTRA ALLOCATION UNIT REQUIRED FOR THE NAPKIN HEADER AND THE HEADROOM BYTES.  THE SLOTS SACRIFICED OCCUPY LESS MEMORY THAN THE ALLOCATION UNIT WOULD
            // WHEN SLOT SIZE IS LARGE, DATA BEGINS IN THE NORMAL PLACE (AT THE END OF THE NAPKIN HEADER) AND ADDITIONAL BYTES ARE ALLOCATED FOR HEADROOM (SO THAT THE HIGHEST VALID BYTE CAN BE READ USING A DWORD OPERATION SUCH AS movsd)
            flagsState |= flSEXcsTATE_USINGnAPfORdATA ;

            {
                new( 0 , tinP , pb_napData , sizeof pb_napData ) napkinC
                (
                    (
                        tinP
                    ) ,
                    idLineNewP , idiFileNewP , pbBitsCtP ,
                    thirdC::c_strcatIF
                    (
                        tinP ,
                        thirdC::c_strcatIF
                        (
                            tinP ,
                            thirdC::c_strcatIF
                            (
                                tinP ,
                                thirdC::c_strcatIF
                                (
                                    tinP ,
                                    thirdC::c_strcatIF
                                    (
                                        tinP ,
                                        thirdC::c_strcatIF
                                        (
                                            tinP ,
                                            thirdC::c_strcatIF
                                            (
                                                tinP ,
                                                thirdC::c_strcpyIF
                                                (
                                                    tinP , tinP.pbF() , "sexC/data/"
                                                ) ,
                                                postNameP
                                            ) ,
                                            "."
                                        ) ,
                                        tinP.pbF( 2 )
                                    ) ,
                                    "."
                                ) ,
                                tinP.pbF( 3 )
                            ) ,
                            "."
                        ) ,
                        tinP.pbF( 4 )
                    ) ,
                    (
                        !idStateSpaceP
                            ? 0
                            : (const handleC*)*(fileC*)pbFileData
                    ) ,
                    cbaDataNapkin ,
                    F(flagsP) & (fliSEXc_BROWSE|fliSEXc_READoNLY) ? ifcOPENsHAREDmEMORYhOW_nFeO : ifcOPENsHAREDmEMORYhOW_nCeO , /*tinP.pAdamGlobal1->idMemorySpace == ifcIDmEMORYsPACE_APPLICATION && expCbDropP + expSlotsP <= 0x14 ? flNAPKINc_LOCK :*/ flNAPKINc_null , 1 , idMemorySpaceP
                ) ;
            }

            if( expCbDropP == 0x10 && expSlotsP == 0x1 ) //CT
            {
                countT foo = 2 ;
            }

            if( expCbDropP == 0xe && expSlotsP == 0x3 ) //DT
            {
                countT foo = 2 ;
            }

            pbData  = *(napkinC*)pb_napData ;
            if( pbData && bSmallSlots ) pbData -= sizeof( napkinHeaderS ) ;

            {
                if( pbData && !( F(((napkinC*)pb_napData)->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) ) ((napkinC*)pb_napData)->formattingIsDoneF( tinP ) ;
            }
        }

        pbDataEnd = !pbData ? 0 : pbData + ( ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << expCbDropP ) ) * ( 1 << expSlotsP ) ;

        //CS: CODEsYNC: PSEUDODUPLICATE: 360e0003 360e0003
        if( !pbData && pPoolContainsMe )
        {
            etherC& etRock = etherC::etRockIF( tinP ) ;

            etRock.traceF( tinP , T("sexC::sexC: could not allocate pbData for a poolC [expCbDropP,expSlotsP,idLineNewP,idiFileNewP]: ")+TF2(expCbDropP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(expSlotsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF4(idLineNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" ")+TF2(idiFileNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN) ) ;
            etRock.traceF( tinP , T("sexC::sexC: tracing pool tallies") ) ;
            etRock.tracePoolTalliesF( tinP ) ;
            etRock.traceF( tinP , T("sexC::sexC: traced  pool tallies; now calling BLAMMO") ) ;

            //etRock.traceF( tinP , T("sexC::sexC: could not allocate pbData for a poolC [expCbDropP,expSlotsP,idLineNewP,idiFileNewP]: ")+TF2(expCbDropP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(expSlotsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF4(idLineNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" ")+TF2(idiFileNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN) ) ;
            //etRock.traceF( tinP , T("sexC::sexC: calling poolC::reportF") ) ;
            //pPoolContainsMe->reportF( tinP ) ;
            //etRock.traceF( tinP , T("sexC::sexC: called  poolC::reportF; now calling BLAMMO") ) ;

            BLAMMO ; //U::PROVISIONAL: WITHOUT THIS, APP WILL STOP, AND SINCE I PRESUME TO BE HERE DUE TO A LEAK, IT'S BETTER TO BLAMMO
        }

        //------------------------------------------------------------------------------------------------------------------------------------------------------------
        // TRY TO ALLOCATE pbMeta FROM A SIBLING sexC (ANOTHER sexC, EXISTING OR NEWLY CREATED, OF *pPoolContainsMe
        //------------------------------------------------------------------------------------------------------------------------------------------------------------

        if
        (
            bEnableNesting
            &&
            pPoolContainsMe
            &&
            (
                ( bObeyReg && bMetaPool )
                ||
                (
                    !bObeyReg
                    &&
                    pPoolContainsMe
                    // &&
                    // !( F(flagsCt) & fliSEXc_BROWSE )
                    &&
                    !( F(tinP.flagsThreadMode3) & flTHREADmODE3_DOnOTmAKEsEXiNpOOL )
                )
            )
        )
        {
            if( bObeyReg && !bMetaPool ) { BLAMMO ; }

            // ALLOCATE pbMeta FROM *pPoolContainsMe TO AVOID THE OVERHEAD OF USING A napkinC AND ESCAPE THE BASE O.S. ALLOCATION GRAIN MINIMUM AND MINIMIZE ADDRESS SPACE FRAGMENTATION
        
            THREADmODE2oN( flTHREADmODE2_UNLOCKpOOLiDENTITY )
            {
                puseC puseUse( tinP , *pPoolContainsMe ) ;
            
                countT pczField[]   = { ifcIDrECORDfIELD_SEXcbACKINGbLOBlIST , 0 } ;
            
                grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;
            
                ZE( boolT , bListsExist ) ;
                {
                    handleC hListSex( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                    listC::openIF( tinP , hListSex , pczListSex , flLISToPEN_IFeXISTS , ifcIDgRABlAYER_8POOL5nEW) ;
                    if( ~hListSex )
                    {
                        handleC hListField( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                        listC::openIF( tinP , hListField , hListSex , pczField , flLISToPEN_IFeXISTS , ifcIDgRABlAYER_8POOL5nEW) ;
                        if( ~hListField ) bListsExist = 1 ;
                    }
            
                    if( ( 1 << expCbDropP != sizeof( listC ) || bListsExist ) ) // CREATION OF THE RECORD AND THE FIELD listC WOULD REQUIRE ME
                    {
                        handleC hListSex( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;
                        listC::openIF( tinP , hListSex , pczListSex , flLISToPEN_null , ifcIDgRABlAYER_8POOL5nEW) ;
            
                        ZE( fieldEditParamOutC* , pOut ) ;
                        THREADmODE3oN( flTHREADmODE3_DOnOTmAKEsEXiNpOOL )
                        flagsT flagsRC = listC::fieldIF( tinP , pOut , hListSex , pczField , _1_modePushIfNotExistC() + _1_pushC( 0 , cbaMeta ) + _1_modeQueryNewC() + _1_queryC() , idLineNewP , idiFileNewP , flLISToPEN_null , ifcIDgRABlAYER_8POOL5nEW) ;
                        THREADmODE3rESTORE
            
                        __Z( pOut ) ;
                        if( !POOP )
                        {
                            __NZ( pOut->pNext ) ;
                            if( !POOP )
                            {
                                pbMeta    = (byteT*)(const osTextT*)pOut->vspBlob ;
                                pbMetaEnd = pbMeta + cbaMeta ;
                            }
                        }

                        {
                            puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                            DELlIST( fieldEditParamOutC , pOut ) ;
                        }
                    }
                }

                if( !bObeyReg && pReg && !( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) && btsAM( pReg->pbSexBitMetaIsInPool , offSexBit ) ) { BLAMMO ; }
            }
            THREADmODE2rESTORE
        }

        //SUPPRESSED WITHOUT ANALYSIS TO GET CORRECT FUNCTION FOR OO PROCESSES ACCESSING THE SAME PERSISTENT POOL: if( pPoolContainsMe ) { __NZ( pReg->pbSexBitFormatted[ offSexByte ] & maskSexByte ) ; } // BECOME IMPOTENT IF I JUST RECURSIVELY CALLED MYSELF FOR THE SAME SPECIFICATIONS: 20171012@1227

        if( POOP )
        {
            //U::DELETE THE BLOB THAT I JUST ALLOCATED
        }
        else
        {
            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // IF COULD NOT, THEN ALLOCATE pbMeta USING A napkinC TO OBTAIN A MEMORY ALLOCATION FROM THE BASE O.S.
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            if( !pbMeta )
            {
                if( bObeyReg && bMetaPool ) { BLAMMO ; }

                flagsState |= flSEXcsTATE_USINGnAPfORmETA ;
                new( 0 , tinP , pb_napMeta , sizeof pb_napMeta ) napkinC
                (
                    tinP , idLineNewP , idiFileNewP , pbBitsCtP ,
                    (
                        thirdC::c_strcatIF
                        (
                            tinP ,
                            thirdC::c_strcatIF
                            (
                                tinP ,
                                thirdC::c_strcatIF
                                (
                                    tinP ,
                                    thirdC::c_strcatIF
                                    (
                                        tinP ,
                                        thirdC::c_strcatIF
                                        (
                                            tinP ,
                                            thirdC::c_strcatIF
                                            (
                                                tinP ,
                                                thirdC::c_strcatIF
                                                (
                                                    tinP ,
                                                    thirdC::c_strcpyIF
                                                    (
                                                        tinP , tinP.pbF() , "sexC/meta/"
                                                    ) ,
                                                    postNameP
                                                ) ,
                                                "."
                                            ) ,
                                            tinP.pbF( 2 )
                                        ) ,
                                        "."
                                    ) ,
                                    tinP.pbF( 3 )
                                ) ,
                                "."
                            ) ,
                            tinP.pbF( 4 )
                        )
                    ) ,
                    (
                        !idStateSpaceP
                            ? 0
                            : (const handleC*)*(fileC*)pbFileMeta
                    ) ,
                    cbaMeta ,
                    F(flagsP) & (fliSEXc_BROWSE|fliSEXc_READoNLY) ? ifcOPENsHAREDmEMORYhOW_nFeO : ifcOPENsHAREDmEMORYhOW_nCeO , /*tinP.pAdamGlobal1->idMemorySpace == ifcIDmEMORYsPACE_APPLICATION ? flNAPKINc_LOCK :*/ flNAPKINc_null , 1 , idMemorySpaceP
                ) ;

                pbMeta    = *(napkinC*)pb_napMeta ;
                pbMetaEnd = pbMeta + cbaMeta ;
            }

            //CS: CODEsYNC: PSEUDODUPLICATE: 360e0003 360e0003
            if( !pbMeta && pPoolContainsMe )
            {
                etherC& etRock = etherC::etRockIF( tinP ) ;

                etRock.traceF( tinP , T("sexC::sexC: could not allocate pbMeta for a poolC [expCbDropP,expSlotsP,idLineNewP,idiFileNewP]: ")+TF2(expCbDropP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(expSlotsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF4(idLineNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" ")+TF2(idiFileNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN) ) ;
                etRock.traceF( tinP , T("sexC::sexC: tracing pool tallies") ) ;
                etRock.tracePoolTalliesF( tinP ) ;
                etRock.traceF( tinP , T("sexC::sexC: traced  pool tallies; now calling BLAMMO") ) ;

                //etRock.traceF( tinP , T("sexC::sexC: could not allocate pbMeta for a poolC [expCbDropP,expSlotsP,idLineNewP,idiFileNewP]: ")+TF2(expCbDropP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF2(expSlotsP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED)+T(" ")+TF4(idLineNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN,0,0xa)+T(" ")+TF2(idiFileNewP,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED|flFORMAT_FOREIGN) ) ;
                //etRock.traceF( tinP , T("sexC::sexC: calling poolC::reportF") ) ;
                //pPoolContainsMe->reportF( tinP ) ;
                //etRock.traceF( tinP , T("sexC::sexC: called  poolC::reportF; now calling BLAMMO") ) ;

                BLAMMO ; //U::PROVISIONAL: WITHOUT THIS, APP WILL STOP, AND SINCE I PRESUME TO BE HERE DUE TO A LEAK, IT'S BETTER TO BLAMMO
            }

            __( !pbMeta ) ; //REDUNDANT BECAUSE ctNap???F WILL FAIL
            __( !pbData ) ; //REDUNDANT BECAUSE ctNap???F WILL FAIL

            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // FORMAT pbMeta
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            {
                if( !pbMeta )
                {
                    __( !( F(flagsCt) & fliSEXc_BROWSE ) ) ;
                }
                else
                {
                    const boolT bFormat = !( F(flagsState) & flSEXcsTATE_USINGnAPfORmETA )                                 // WAS LIST ALLOCATED FROM POOL?
                        ? 1                                                                                             // THEN FORMAT
                        : F(((napkinC*)pb_napMeta)->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED        // ELSE DID NAPKIN ALREADY EXIST?
                            ? 0                                                                                         // THEN DO NOT FORMAT
                            : !( F(flagsCt) & fliSEXc_MAPPEDtOdISK )                                                    // ELSE AM I STATELESS (NOT BACKED BY A DISK FILE)?
                                ? 1                                                                                     // THEN FORMAT
                                : ((fileC*)pbFileMeta)->idOpenResultF( tinP  ) == ifcOPENrESULT_EXISTED                 // ELSE DID MY BACKING FILE ALREADY EXIST?
                                    ? 0                                                                                 // THEN DO NOT FORMAT
                                    : 1                                                                                 // ELSE FORMAT
                    ;
                
                    if( !bFormat ) pzMetaHead = (sexHeadS*)pbMeta ;
                    else
                    {
                        pzMetaHead = new( 0 , tinP , pbMeta , sizeof( sexHeadS ) ) sexHeadS( tinP , expCbDropP , expSlotsP , postNameP , flagsCt ) ;

                        //CONoUTrAW9( "sexC formatting meta [USINGnAPfORdATA,bSmallSlots,expCbDropP,expSlotsP,]: " , !!( F(flagsState) & flSEXcsTATE_USINGnAPfORdATA ) , " " , bSmallSlots , " " , expCbDropP , " " , expSlotsP , "\r\n" ) ;

                        if( F(flagsState) & flSEXcsTATE_USINGnAPfORdATA && bSmallSlots )
                        {
                            countT cbSlot = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << expCbDropP ) ;
                            *(countT*)&pzMetaHead->cSlotsAvoidLo = 1 + ( sizeof( napkinHeaderS ) - 1 ) / cbSlot ; // SOME PART OF NAPKIN HEADER IS UNDER THIS MANY SLOTS
                            *(countT*)&pzMetaHead->cSlotsAvoidHi = 1 + ( sizeof( countT        ) - 2 ) / cbSlot ; // HEADROOM: sizeof( countT ) - 1 (ALWAYS 1 NOW THAT DROPhEADER IS USED; THIS LINE IS CODED GENERALLY TO WORK EVEN IF !( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ))
                        }

                        //CONoUTrAWd( "[expCbDrop,expSlots,bSmallSlots,USINGnAPfORdATA,cSlotsAvoidLo,cSlotsAvoidHi]: " , expCbDropP , " " , expSlotsP , " " , bSmallSlots , " " , !!( F(flagsState) & flSEXcsTATE_USINGnAPfORdATA ) , " " , pzMetaHead->cSlotsAvoidLo , " " , pzMetaHead->cSlotsAvoidHi , "\r\n" ) ; //U:: TO FIND A BUG
                    }
                    inc02AM( pzMetaHead->cRef ) ;

                    __( flagsCt - pzMetaHead->flagsCtCopy ) ;
            
                    pbzMetaBitsOwned = (byteT*)( pzMetaHead + 1 ) ;
            
                    countT cbaBitsOwned = 1 + ( 1 << expSlotsP ) / SB ;
                    cbaBitsOwned += CBtOaLIGN02( pbzMetaBitsOwned + cbaBitsOwned ) ;
            
                    if( F(flagsCt) & fliSEXc_NOTES ) pzMetaNote = (dropNoteS*)( pbzMetaBitsOwned + cbaBitsOwned ) ;
            
                    if( bFormat )
                    {
                        thirdC::c_memsetIF( tinP , pbzMetaBitsOwned , cbaBitsOwned ) ;

                        // IF DATA IS IN NAPKIN THEN MARK THE LOW SLOTS AS UNUSEABLE SO THAT THE DATA NAPKIN HEADER, WHICH THEY OVERLAY FOR SMALL SLOT SIZES, WON'T BE TRASHED
                        // THIS DOES NOT HAVE TO BE DONE IF pbData WAS ALLOCATED USING THE POOL BECAUSE THERE IS NO OVERLAYED napkinC HEADER TO PROTECT
                        // 
                        // IF DATA IS IN NAPKIN THEN MARK THE HIGH SLOTS AS UNUSEABLE SO THAT THERE IS ENOUGH HEADROOM FOR THE HIGHEST BYTE TO BE ACCESSED USING A DWORD INSTRUCTION
                        // THIS DOES NOT HAVE TO BE DONE IF pbData WAS ALLOCATED USING THE POOL BECAUSE HEADROOM WAS CREATED WHEN THAT sexC WAS CONSTRUCTED

                        if( F(flagsState) & flSEXcsTATE_USINGnAPfORdATA )
                        {
                                                                                                    // FOR SMALL SLOT SIZES (LESS THAN ALLOCATION GRAIN SIZE):
                            countT cToDo = pzMetaHead->cSlotsAvoidLo ;                                  // THE LOW SLOTS ARE UNUSEABLE BECAUSE THEY OVERLAY napkinHeaderS FOR (*(napkinC*)pb_napData)
                            while( cToDo -- ) btsWothAM( pbzMetaBitsOwned , 1 << pzMetaHead->expSlots ) ;
            
                            cToDo = pzMetaHead->cSlotsAvoidHi ;                                         // THE HIGH SLOTS ARE UNUSEABLE TO ENSURE HEADROOM OF sizeof( countT ) - 1 SO THAT HIGHEST BYTE CAN BE REFERENCED BY DWORD INSTRUCTION (E.G. movsd)
                            while( cToDo -- ) btsLathAM( pbzMetaBitsOwned , 1 << pzMetaHead->expSlots ) ;
                        }
            
                        if( pzMetaNote )
                        {
                            countT cSlots = 1 << pzMetaHead->expSlots ;
                            for( countT offo = 0 ; offo < cSlots ; offo ++ ) pzMetaNote[ offo ].idDelLath = pzMetaNote[ offo ].idNewLath = 0 ;
                        }
            
                        if( pzMetaNote ) thirdC::c_memsetIF( tinP , (byteT*)pzMetaNote , sizeof( dropNoteS ) << pzMetaHead->expSlots ) ;
                    }
                    else
                    {
                        __( expCbDropP - pzMetaHead->expCbDrop ) ;
                        __( expSlotsP  - pzMetaHead->expSlots  ) ;
                    }
            
                    if( expCbDropP == 0x9 && expSlotsP == 8 )
                    {
                        static countT idInLath ;
                        countT idIn = 1 + incv02AM( idInLath ) ;
                        if( idIn == 2 )
                        {
                            countT foo = 2 ;
                        }
                    }

                    if( F(flagsState) & flSEXcsTATE_USINGnAPfORmETA && !( F(((napkinC*)pb_napMeta)->flagsSharedMemory) & flOPENsHAREDmEMORYrESULT_ALREADYeXISTED ) ) ((napkinC*)pb_napMeta)->formattingIsDoneF( tinP ) ;
                }
            }

            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // FORMAT pbData: ORIGINALLY, pbData WAS NOT FORMATTED.  FORMATTING WAS ADDED (20210128@1831) ONLY SO THAT MEMORY CORRUPTION CAN BE DETECTED.  THE FORMATTING INFORMATION IS NOT NEEDED FOR ANY OTHER PURPOSE.
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            formatDataBlobF( tinP ) ; //NO ACTION IS NEEDED HERE TO PRESERVE STATE WHEN STATE FILE IS USED, SINCE THE FORMATTING INFORMATION IS ONLY USED TO DETECT MEMORY CORRUPTION SO NEED NOT BE SAVED AS STATE

            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // DEBUGGING CHATTER
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            //{
            //    OStEXT(   ostoSay , TUCK << 2 ) ;
            //    OStEXTAK( ostoSay , "      sexC [idAdam,bRecursionCycle,expCbDrop,expSlots,n/p,pbData,pbDataEnd,postName]: " ) ;
            //    OStEXTC(  ostoSay , tinP.pAdamGlobal1->idAdam , ' ' ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , bRecursionCycle , ' ' ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , expCbDropP , ' ' ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTC(  ostoSay , expSlotsP , ' ' ) ;
            //    OStEXTA(  ostoSay , F(flagsState) & flSEXcsTATE_USINGnAPfORdATA ? " NAPKIN " : " pool   " ) ;
            //    OStEXTA(  ostoSay , F(flagsState) & flSEXcsTATE_USINGnAPfORmETA ? " NAPKIN " : " pool   " ) ;
            //    OStEXTCF( ostoSay , pbData , ' ' ) ;
            //    OStEXTAK( ostoSay , " " ) ;
            //    OStEXTCF( ostoSay , pbDataEnd , ' ' ) ;
            //    OStEXTAK( ostoSay , " \"" ) ;
            //    OStEXTA(  ostoSay , postNameP ) ;
            //    OStEXTAK( ostoSay , "\" " ) ;
            //
            //    etherC::etRockIF( tinP ).traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
            //}

            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // SPECIAL PROCESSING IF I AM PART OF THE poolC USED BY THE LEAKlOGGER ADAM
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            {
                POOPIE
                if( !thirdC::c_strstrIF( tinP , pzMetaHead->postName , postPOOLlEAKlOGGER ) )
                {
                    static countT idInLath ;
                    countT idIn = 1 + incv02AM( idInLath ) ;
                    if( idIn == 23 )
                    {
                        countT foo = 2 ;
                    }

                    byteT* pbNapkin = processGlobal7I._sexC_napGlobalRegistry ;
                    if( pbNapkin )
                    {
                        grabotC& grabot = *(grabotC*)pbNapkin ;
                        sexGlobalEntryS* pe = (sexGlobalEntryS*)( pbNapkin + sizeof( grabotC ) ) ;
                
                        ZE( countT , offe ) ;
                        {
                            grabitC grabitx( tinP , TAG( TAGiDnULL ) ) ;
                            grabot.grabF( tinP , TAG( TAGiDnULL ) ) ;

                            for( offe = 0 ; offe < CsEXeNTRIES ; offe ++ )
                            {
                                if( !thirdC::c_strcmpIF( tinP , pe[ offe ].postName , pzMetaHead->postName ) )
                                {
                                    pe[ offe ].cRef ++ ;
                                    break ;
                                }
                            }
                    
                            if( offe == CsEXeNTRIES )
                            {
                                for( offe = 0 ; offe < CsEXeNTRIES ; offe ++ )
                                {
                                    if( !pe[ offe ].cRef )
                                    {
                                        pe[ offe ].cRef ++ ;
                                        thirdC::c_strcpyIF( tinP , pe[ offe ].postName , pzMetaHead->postName ) ;
                                        break ;
                                    }
                                }
                            }

                            grabot.ungrabF( tinP ) ;
                        }

                        if( offe == CsEXeNTRIES ) { LOGrAW( "sexC::sexC/registry is full\r\n" ) ; } //U: 20140605@1631: CONJ: THIS CAN HAPPEN IF EXIST MULTIPLE poolC INSTANCES OR IF EXIST MULTIPLE ADAMS (SEE osThreadAdamF)
                    }
                }
            }

            //------------------------------------------------------------------------------------------------------------------------------------------------------------
            // CLEAN UP
            //------------------------------------------------------------------------------------------------------------------------------------------------------------

            //CONoUTrAW( "\r\n-------------------------------------------------------------------------------------------------------------------\r\n" ) ;

            if( pPoolContainsMe )
            {
                if( !bNest1 ) tinP.fliSexCtPendingExpCbDrop &= ~maskExpCbDrop ;
                if( !bNest2 ) tinP.fliSexCtPendingExpCbDrop &= ~maskExpSlots  ;
            }
        }
    }

    if( pPoolContainsMe )
    {
        if( !POOP && !bObeyReg && pReg &&  btsAM( pReg->pbSexBitFormatted  , offSexBit ) ) { BLAMMO ; }
        if( bSetResetFormatting        && !btrAM( pReg->pbSexBitFormatting , offSexBit ) ) { BLAMMO ; }
    }

    //CS:CODEsYNC: 360e0003 360e0003
    tinP.tlsDelF( countTC() ) ;
    tinP.tlsDelF( countTC() ) ;
    tinP.tlsDelF( countTC() ) ;
    tinP.tlsDelF( countTC() ) ;

    if( pPoolContainsMe )
    {
        if( tinP.pSexLifoConstructing != this ) { BLAMMO ; }
        tinP.pSexLifoConstructing = pSexLifoConstructing ;
                                    pSexLifoConstructing = 0 ;
    }

    if( !POOP )
    {
        countT idTypeSay = ifcIDtYPEtELLsYS_SEXcT ;
        tellInfoSysSexS info ;
        info.osPid      = tinP.osPid ;
        info.expCbDrop  = pzMetaHead->expCbDrop ;
        info.expSlots   = pzMetaHead->expSlots  ;
        thirdC::c_strcpyIF( tinP , info.postName , pzMetaHead->postName ) ;
        info.pSex       = this ;
        info.idLineCt   = idLineCtP ;
        info.idiFileCt  = idiFileCtP ;
        TELLsYSc3LIFI( idTypeSay , (byteT*)&info , sizeof info , idLineCtP , idiFileCtP )
    }

    //if( tinP.pc Utility[ 0 ] )
    //{
    //    OStEXT(   ostoSay , TUCK << 2 ) ;
    //    OStEXTAK( ostoSay , "\r\n sexC - [postName]: \"" ) ;
    //    OStEXTA(  ostoSay , postNameP ) ;
    //    OStEXTAK( ostoSay , "\"" ) ;
    //}

    thirdC::dosPriorityIF( tinP ) ; //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0003.sexc.sexc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0006.sexc.newf BEGIN
#define DDNAME       "3func.360e0006.sexc.newf"
#define DDNUMB      (countT)0x360e0006
#define IDFILE      (countT)0x13db


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/byteT* sexC::newF( tinS& tinP , const countT idLineP , const countT idiFileP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_
    DROPnOTEdOESnOTwANTmE

    //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ROOTlEAKlOGGER && pPoolContainsMe == tinP.pAdamGlobal1->pPoolHomeTemp )
    //{
    //    BLAMMO ;
    //}

    ZE( byteT* , pbDrop ) ;
    {
        if( F(flagsCt) & fliSEXc_READoNLY ) { BLAMMO ; }

        // ILLUSTRATED SEARCH STRATEGY ASSUMING THERE HAVE BEEN MANY PRIOR NEWS AND ONLY WO PRIOR DELETE
        //
        // BIT OFFSET 0 --> cBitsAll
        //
        //
        // +-- 0                                                                +-- (cBitsAll-1)
        // |                                                                    |
        // 0000000000000000000000000000000000000000000000011111111111111111111111       SCENARIO: NOTHING DELETED
        //                                                |
        //                                                +-- offFoundLath
        // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        //                                               |
        //                                               +-- found
        //
        //
        //
        //
        // 0000000000000000000000000000000000000000000000001111111111111111111111       SCENARIO: LATH NEW HAS BEEN DELETED
        //                                                |
        //                                                +-- offFoundLath
        // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        //                                                |
        //                                                +-- found
        //
        //
        //
        //
        // 1111111111111111111111111111111111111111111111111111111111011111111111       SCENARIO: sexC IS FILLED EXCEPT FOR A DELETED EARLY ALLOCATION
        //                                                |
        //                                                +-- offFoundLath
        // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        //                                                >>>>>>>>>>>>>>>>>>>>>>>       SEARCH OVERLAPS SLIGHTLY BECAUSE IT BEGINS ON A BYTE BOUNDARY
        //                                                           |
        //                                                           +-- found
        //

        // HEURISTICS: MY SEARCH RECIPE FAVORS APPLICATION CODE THAT HAS "WELL BEHAVED" NEW/DEL BEHAVIOR
        //
        // GOOD BEHAVIOR: NEVER DELETES ANYTHING:  I WILL ALWAYS FIND A 0 BIT ON THE OO'TH TRY
        //
        // GOOD BEHAVIOR: EACH NEW IS EITHER PERMANENT OR IS DELETED IMMEDIATELY I.E. BEFORE ANY OTHER NEW:  I WILL ALWAYS FIND A 0 BIT ON THE WO'TH TRY
        //
        // GOOD BEHAVIOR: PERMANENT NEW'S ARE FOLLOWED BY LIFO NEW/DEL:  I WILL ALWAYS FIND A 0 BIT ON THE OO'TH TRY
        //
        // BAD BEHAVIOR:  PERMANENT NEW'S ARE INTERMIXED WITH FIFO NEW/DEL:  THIS WILL SLOW ME THE FUCK DOWN

        countT offFound = - 1 ;

        {
            const countT cBitsAll     = 1 << pzMetaHead->expSlots ;
            const countT cBitsSearch1 = offFoundLath == - 1
                ? cBitsAll
                : offFoundLath + 1
            ;

            offFound = btsLathAM( pbzMetaBitsOwned , cBitsSearch1 ) ;

            if( offFound == - 1 )
            {
                countT cbIgnore    = cBitsSearch1 / SB ;
                countT cBitsIgnore = cbIgnore     * SB ;

                offFound = btsWothAM( pbzMetaBitsOwned + cbIgnore , cBitsAll - cBitsIgnore ) ;  // THIS IS SLIGHTLY SLOWER THAN btsLathAM BUT IS USED BECAUSE IT REWARDS "BETTER" BEHAVIOR AND PENALIZES "WORSE" BEHAVIOR

                if( offFound != - 1 ) offFound += cBitsIgnore ;
            }
        }

        if( offFound != -1 )
        {
            offFoundLath = offFound ;

            //if( tinP.pc Utility[ 0 ] ) CONoUTrAW3( "\r\n[offFound]: " , offFound , "" ) ;

            if( offFound < pzMetaHead->cSlotsAvoidLo ) { BLAMMO ; } //U:: IN ALL 3*.sexC.*, REMOVE ALL OF THESE TESTS ONCE HAVE CONFIDENCE THAT CODE IS CORRECT
    
            const countT cbSlot = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;
            pbDrop = pbData + cbSlot * offFound + ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) ;

            {
                // DROP HEADER VALUE.  IF I AM CALLED BY poolC THEN VALUE WILL CONTAIN idApt, WHICH WILL BE USED TO IDENTIFY *this SO THAT THE DROP CAN BE DELETED WITHOUT SEARCHING FOR THE CORRECT sexC INSTANCE
                // 20210130@1202: offFound IS NOT USED TO DELETE THE DROP OR FOR ANY OTHER PURPOSE.  IT CAN BE ELIMINATED FROM dropHeader IN ORDER TO SIMPLIFY LAYOUT, ADD A CHECKSUM, OR ADD OTHER INFORMATION
                // IOW, THE NEXT LINE CAN SET dropHeader TO ANY SUFFICIENTLY SMALL VALUE.  (A VALUE THAT IS TOO LARGE WILL CAUSE SHIFT LEFT TO FAIL IN slotsC::newF poolC:newF)
                countT was = setIfEqualsAM( ((countT*)pbDrop)[ - 1 ] , offFound , getNegAM( FINGERnEG_dropHeaderInitialize ) ) ;
                if( getNegAM( was ) != FINGERnEG_dropHeaderInitialize )
                {
                    tinP.pcUtility[ 0 ] = was ;
                    BLAMMO ;
                }
            }

            tinP.cPoolDropCt ++ ;

            if( F(flagsCt) & fliSEXc_MAPPEDtOdISK ) thirdC::c_memsetIF( pbDrop , cbSlot - ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) , 0 ) ; //TO SHRINK SIZE OF COMPRESSED DISK IMAGE; SANS tinP USED FOR MAX SPEED     20180611@1452: EDITED TO AVOID WIPING THE DROP HEADER (WITHOUT ANALYSIS)

            if( pzMetaNote )
            {
                dropNoteS* pMyNote = pzMetaNote + offFound ;

                putNegAM( pMyNote->finger , FINGERnEG_dropNoteSsexC1 ) ;

                thirdC::c_memsetIF( tinP , (byteT*)pMyNote + 4 * sizeof( countT ) , sizeof( dropNoteS ) - 4 * sizeof( countT ) , 0 ) ; //CS:CODEsYNC: 1500003c 360e0006: MEMBERS BELOW ME ARE NOT INITIALIZED BY sexC::newF
                pMyNote->dropHeaderCopy = ((countT*)pbDrop)[ - 1 ] ;

                //USE THIS TO INVESTIGATE LEAKS THAT REPORT AS aaaaaaaa(aaaaaaaa) I.E. WERE NEVER TAGGED
                pMyNote->idLineTagged  = tinP.monitor.pLFnest[ ( ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 )     ] ;
                pMyNote->idiFileTagged = tinP.monitor.pLFnest[ ( ( tinP.monitor.cInNest & OFFsLOTtINnESTmAX ) << 1 ) + 1 ] ;
                if( !pMyNote->idLineTagged || !pMyNote->idiFileTagged ) { BLAMMO ; }

                countT idNewLathWas = incv02AM( pMyNote->idNewLath ) ;
                if( pMyNote->idDelLath != idNewLathWas )
                {
                    tinP.pcUtility[ 0 ] = idNewLathWas       ;
                    tinP.pcUtility[ 1 ] = pMyNote->idDelLath ;
                    BLAMMO ;
                }

                pMyNote->idAdam    = tinP.pAdamGlobal1->idAdam ;
                thirdC::c_memcpyIF( tinP , (byteT*)&pMyNote->cNest , (byteT*)&tinP.monitor.cInNest , sizeof pMyNote->cNest + sizeof pMyNote->pLFnest + sizeof pMyNote->pFlagsThreadLevelMode ) ;
                pMyNote->idThreadNew = tinP.monitor.idThread ;
                pMyNote->idThreadDel = 0 ;
                pMyNote->flagsMonitor = flOLDlEAKmONITOR_null ;

                putNegAM( pMyNote->finger , FINGERnEG_dropNoteSsexC2 ) ;
            }

            idLathNewDel = ifcIDsEXclATHnEWdEL_NEW ; // INTENTIONAL RACE
        }
    }

    ___LF( pbDrop , idLineP , idiFileP ) ;

    return pbDrop ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0006.sexc.newf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0007.sexc.operator_call BEGIN
#define DDNAME       "3func.360e0007.sexc.operator_call"
#define DDNUMB      (countT)0x360e0007
#define IDFILE      (countT)0x13dc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexC::operator ()( tinS& tinP , byteT*& pbDropP )/*1*/
{
    SCOOP
    _IO_
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    byteT* pbSlot = !pbDropP ? 0 : pbDropP - ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) ;

    if( F(flagsCt) & fliSEXc_READoNLY ) { BLAMMO ; }
    if( pbData <= pbSlot && pbSlot < pbDataEnd )
    {
        _IO_

        countT cbGross = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;
        countT offSlot = ( pbSlot - pbData ) / cbGross ;
        {
            byteT* pbv = pbData + offSlot * cbGross ;
            if( pbSlot != pbv )
            {
                //tinP.pc Utility[ 0xf ] = pbSlot - pbv ;
                BLAMMOiD( 0xaabbccdd ) ;
            }
        }

        if( F(tinP.flagsThreadMode3) & flTHREADmODE3_POOLdELtRYhARDERaNDtRACE )
        {
            etherC* pEtRock = &etherC::etRockIF( tinP ) ;
            if( pEtRock )
            {
                ZE( dropNoteS* , pDropNote ) ;
                if( pzMetaNote ) pDropNote = pzMetaNote + offSlot ;

                countT& dropHeader = *(countT*)pbSlot ;
                OStEXT( ostoSay , TUCK << 2 ) ;
                OStEXTA(  ostoSay , pDropNote ?  "sexC::operator (): trying harder is in effect and i will delete this drop [offSlot,dropHeader,dropNote]:    " : "sexC::operator (): trying harder is in effect and i will delete this drop [offSlot,dropHeader]:    " ) ;
                OStEXTC(  ostoSay , offSlot , '0' ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , dropHeader , '0' ) ;
                if( pDropNote )
                {
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->finger , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->dropHeaderCopy , '0' ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idNewLath , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idDelLath , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idType , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->cbRequested , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->cbUsedReally , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idAdam , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idLineTagged , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idiFileTagged , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idLineTagged2 , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idiFileTagged2 , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->flagsMonitor , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idThreadNew , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idThreadDel , 0 ) ;
                    OStEXTAK( ostoSay , "    " ) ;
                    OStEXTC(  ostoSay , pDropNote->idNewForTagLine , 0 ) ;
                }
                pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
            }
        }

        countT* pcSlot    = (countT*)pbSlot ;
        countT* pcSlotEnd = (countT*)( pbData + ( offSlot + 1 ) * cbGross ) ;

        if( getNegAM( pcSlot[ 0 ] ) != FINGERnEG_dropSeparator )
        {
            tinP.pcUtility[ 0 ] = pcSlot[ 0 ] ;
            tinP.pcUtility[ 1 ] = pcSlot[ 1 ] ;
            BLAMMO ;
        }

        {
            const countT cSlots               = 1 << pzMetaHead->expSlots ;
            const countT offSlotsUseableBegin =          pzMetaHead->cSlotsAvoidLo ;
            const countT offSlotsUseableEnd   = cSlots - pzMetaHead->cSlotsAvoidHi ;

            if( offSlot < offSlotsUseableEnd - 1 && getNegAM( pcSlotEnd[ 0 ] ) != FINGERnEG_dropSeparator )
            {
                tinP.pcUtility[ 0 ] = pcSlotEnd[ 0 ] ;
                tinP.pcUtility[ 1 ] = pcSlotEnd[ 1 ] ;
                BLAMMO ;                                // THE NEXT SEPARATOR IS INVALID AND MY CALLER IS THE PRIME SUSPECT
            }
        }

        if( pzMetaNote )
        {
            dropNoteS* pMyNote = pzMetaNote + offSlot ;

            countT was = setIfEqualsAM( pcSlot[ 1 ] , getNegAM( FINGERnEG_dropHeaderInitialize ) , pMyNote->dropHeaderCopy ) ;        // DROP HEADER VALUE.  IF I AM CALLED BY poolC THEN VALUE WILL CONTAIN idApt, WHICH WILL BE USED TO IDENTIFY *this SO THAT THE DROP CAN BE DELETED WITHOUT SEARCHING FOR THE CORRECT sexC INSTANCE
            if( was != pMyNote->dropHeaderCopy )
            {
                tinP.pcUtility[ 0 ] = was ;
                BLAMMO ;
            }
        }
        else putNegAM( pcSlot[ 1 ] , FINGERnEG_dropHeaderInitialize ) ;

        pbDropP = 0 ;

        ZE( countT , idLineTaggedCopy ) ;
        ZE( countT , idiFileTaggedCopy ) ;
        if( pzMetaNote )
        {
            dropNoteS* pDoomed = pzMetaNote + offSlot ;

            pDoomed->dropHeaderCopy = 0 ; // THIS IS TO PREVENT dropHeaderCopy FROM EVER CONTAINING A VALID dropHeader VALUE LEFT OVER FROM A PRIOR USE OF THE SLOT

            idLineTaggedCopy = pDoomed->idLineTagged ;
            idiFileTaggedCopy = pDoomed->idiFileTagged ;
            if( !pDoomed->idLineTagged || !pDoomed->idiFileTagged ) { BLAMMO ; }

            inc02AM( pDoomed->idDelLath ) ;

            //thirdC::c_memsetIF( (byteT*)pDoomed , sizeof( dropNoteS ) , 0 ) ; //SANS tinP USED FOR MAX SPEED; INTENTIONALLY COMMENTED OUT SO THAT SLOTS WHICH ARE NOT CONTINUALLY REUSED CAN BE VISIBLE (SUCH CODE IS CANDIDATE FOR MIGRATION FROM poolC TO jotC)
            pDoomed->idThreadDel = tinP.monitor.idThread ;

            //thirdC::c_memsetIF( (byteT*)pDoomed , sizeof( dropNoteS ) , 0xdd ) ; //U:: TO FIND A BUG

            putNegAM( pDoomed->finger , FINGERnEG_dropNoteSdeleted ) ;
        }

        if( offSlot < pzMetaHead->cSlotsAvoidLo ) { BLAMMO ; }

        if( F(flagsCt) & fliSEXc_MAPPEDtOdISK ) thirdC::c_memsetIF( pbSlot , 1 << pzMetaHead->expCbDrop , 0 ) ; //TO SHRINK SIZE OF COMPRESSED DISK IMAGE; SANS tinP USED FOR MAX SPEED

        if( !btrAM( pbzMetaBitsOwned , offSlot ) ) { BLAMMO ; } //BLAMMO IS USED RATHER THAN __() TO AVOID NEEDING TO CALL TINSL, FOR MAX SPEED ; 20210111@2031: THIS COMMENT IS OBSOLETE SINCE I NOW HAVE tinPPPPPPPPPPPPPPPPPPPPPPPPP

        tinP.cPoolDropDt ++ ;

        idLathNewDel = ifcIDsEXclATHnEWdEL_DEL ; // INTENTIONAL RACE

        if( F(tinP.flagsThreadMode3) & flTHREADmODE3_POOLdELtRYhARDERaNDtRACE )
        {
            _IO_

            etherC* pEtRock = &etherC::etRockIF( tinP ) ;
            if( pEtRock && pzMetaHead )
            {
                OStEXT(   ostoSay , TUCK << 2 ) ;
                OStEXTAK( ostoSay , "sexC::operator (): success! [expCbDrop,expSlots,pbData,pbSlot,pbDataEnd]:    " ) ;
                OStEXTC(  ostoSay , pzMetaHead->expCbDrop , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , pzMetaHead->expSlots , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , pbData , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , pbSlot , 0 ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTC(  ostoSay , pbDataEnd , '0' ) ;
                OStEXTAK( ostoSay , "    " ) ;
                OStEXTA(  ostoSay , pzMetaHead->postName ) ;
                pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
            }
        }
    }
    else
    {
        _IO_

        etherC* pEtRock = &etherC::etRockIF( tinP ) ;
        if( pEtRock && pzMetaHead )
        {
            OStEXT(   ostoSay , TUCK << 2 ) ;
            OStEXTAK( ostoSay , "sexC::operator (): out of range [expCbDrop,expSlots,pbData,pbSlot,pbDataEnd]:    " ) ;
            OStEXTC(  ostoSay , pzMetaHead->expCbDrop , 0 ) ;
            OStEXTAK( ostoSay , "    " ) ;
            OStEXTC(  ostoSay , pzMetaHead->expSlots , 0 ) ;
            OStEXTAK( ostoSay , "    " ) ;
            OStEXTC(  ostoSay , pbData , 0 ) ;
            OStEXTAK( ostoSay , "    " ) ;
            OStEXTC(  ostoSay , pbSlot , 0 ) ;
            OStEXTAK( ostoSay , "    " ) ;
            OStEXTC(  ostoSay , pbDataEnd , '0' ) ;
            OStEXTAK( ostoSay , "    " ) ;
            OStEXTA(  ostoSay , pzMetaHead->postName ) ;
            pEtRock->traceF( tinP , (strokeS*)(const osTextT*)ostoSay , flTRACE_PARAMETERiSoStEXT ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0007.sexc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0008.sexc.operator_not BEGIN
#define DDNAME       "3func.360e0008.sexc.operator_not"
#define DDNUMB      (countT)0x360e0008
#define IDFILE      (countT)0x13dd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT sexC::operator !( voidT ) const/*1*/
{
    return !bitFoundAM( pbzMetaBitsOwned , 1 << pzMetaHead->expSlots ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0008.sexc.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0009.sexc.pdropnotef BEGIN
#define DDNAME       "3func.360e0009.sexc.pdropnotef"
#define DDNUMB      (countT)0x360e0009
#define IDFILE      (countT)0x13de


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

#if defined( ENABLEdROPnOTES )

    /*1*/dropNoteS* sexC::pDropNoteF( tinS& tinP , const byteT* const pbP ) const/*1*/
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return 0 ;
        }
    
        _IO_
    
        //CS:CODEsYNC: DUPLICATE CODE: 350e2014 350e0009
        ZE( dropNoteS* , pdn ) ;
        if( pzMetaNote )
        {
            const byteT* pbSlot = pbP - ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) ;

            /*const*/ countT cbGross = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;

            if( pbData <= pbSlot && pbSlot < pbDataEnd )
            {
                countT offSet = ( pbSlot - pbData ) / cbGross ;
                pdn = pzMetaNote + offSet ;
            }
        }
    
    
        return pdn ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0009.sexc.pdropnotef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000a.sexc.operator_element BEGIN
#define DDNAME       "3func.360e000a.sexc.operator_element"
#define DDNUMB      (countT)0x360e000a
#define IDFILE      (countT)0x13df


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/byteT* sexC::operator []( const countT offP ) const/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __NZ( offP == - 1 ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    /*const*/countT cbGross = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;

    byteT* pbo = offP < 1 << pzMetaHead->expSlots
        ? pbData + cbGross * offP + ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER )
        : 0
    ;
    return pbo ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000a.sexc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000b.sexc.operator_element BEGIN
#define DDNAME       "3func.360e000b.sexc.operator_element"
#define DDNUMB      (countT)0x360e000b
#define IDFILE      (countT)0x13e0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT sexC::operator []( const byteT* pbP ) const/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return - 1 ;
    }

    _IO_

    /*const*/countT cbGross = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;

    const byteT* pbSlot = pbP - ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) ;

    countT offApt = pbData <= pbSlot && pbSlot < pbDataEnd
        ? ( pbSlot - pbData ) / cbGross
        : - 1
    ;
    return offApt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000b.sexc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000c.sexc.peekf BEGIN
#define DDNAME       "3func.360e000c.sexc.peekf"
#define DDNUMB      (countT)0x360e000c
#define IDFILE      (countT)0x13e1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexC::peekF( tinS& tinP , const sexHeadS*& pzMetaHeadP , const byteT*& pbzMetaBitsOwnedP , const dropNoteS*& pzMetaNotesP , const byteT*& pbDataP ) const/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    pzMetaHeadP          = pzMetaHead ;
    pbzMetaBitsOwnedP    = pbzMetaBitsOwned ;
    pzMetaNotesP         = pzMetaNote ;
    pbDataP              = pbData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000c.sexc.peekf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000d.sexc.ctfilesf BEGIN
#define DDNAME       "3func.360e000d.sexc.ctfilesf"
#define DDNUMB      (countT)0x360e000d
#define IDFILE      (countT)0x13e2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sexC::ctFilesF( tinS& tinP , const osTextT* const postNameP , const countT expCbDropP , const countT expSlotsP , const countT idStateSpaceP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_
    puseC puse( tinP , ifcIDpOOL_ADAMtEMP ) ;
    TN( tMeta , "" ) ;
    TN( tData , "" ) ;
    ctFileNamesIF( tinP , tMeta , tData , postNameP , expCbDropP , expSlotsP , idStateSpaceP ) ;

    new( 0 , tinP , pbFileMeta , sizeof pbFileMeta ) fileC( tinP , (strokeS*)tMeta , ifcOPENaCCESS_WR , ifcOPENsHARE_WR , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_DOnOTrEGISTER | flOPENdETAILS_LOCrANDOM | flOPENdETAILS_NOcACHE , ifcOPENhOW_nCeO ) ;
    new( 0 , tinP , pbFileData , sizeof pbFileData ) fileC( tinP , (strokeS*)tData , ifcOPENaCCESS_WR , ifcOPENsHARE_WR , flOPENdETAILS_DOnOTvALIDATE | flOPENdETAILS_DOnOTrEGISTER | flOPENdETAILS_LOCrANDOM | flOPENdETAILS_NOcACHE , ifcOPENhOW_nCeO ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e000d.sexc.ctfilesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0011.sexc.flushf BEGIN
#define DDNAME       "3func.360e0011.sexc.flushf"
#define DDNUMB      (countT)0x360e0011
#define IDFILE      (countT)0x13e3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT sexC::flushF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    _IO_

    if( idStateSpace )
    {
        ((napkinC*)pb_napData)->flushF( tinP ) ;
        ((napkinC*)pb_napMeta)->flushF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0011.sexc.flushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0012.sexc.testDropHeadersF BEGIN
#define DDNAME       "3func.360e0012.sexc.testDropHeadersF"
#define DDNUMB      (countT)0x360e0012
#define IDFILE      (countT)0x13e4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/


/*1*/voidT sexC::testDropHeadersF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
    }

    //_IO_

    if( pzMetaHead )
    {
        byteT* pbzMetaBitsOwned = (byteT*)( pzMetaHead + 1 ) ;

        countT cbaBitsOwned = 1 + ( 1 << pzMetaHead->expSlots ) / SB ;
        cbaBitsOwned += CBtOaLIGN02( pbzMetaBitsOwned + cbaBitsOwned ) ;

        dropNoteS* pzMetaNote = F(pzMetaHead->flagsCtCopy) & fliSEXc_NOTES
            ? (dropNoteS*)( pbzMetaBitsOwned + cbaBitsOwned )
            : 0
        ;

        if( pzMetaNote )
        {
            const countT cbGross              = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;
            const countT cSlots               = 1 << pzMetaHead->expSlots ;
            const countT offSlotsUseableBegin =          pzMetaHead->cSlotsAvoidLo ;
            const countT offSlotsUseableEnd   = cSlots - pzMetaHead->cSlotsAvoidHi ;
            byteT* pbo = pbzMetaBitsOwned ;
            byteT mask = 1 ;

            for( countT offs = offSlotsUseableBegin ; offs < offSlotsUseableEnd ; offs ++ )
            {
                boolT bOwned = *pbo & mask ;
                mask <<= 1 ;
                if( !mask )
                {
                    pbo ++ ;
                    mask = 1 ;
                }

                if( bOwned )
                {
                    countT& dropHeader = *(countT*)( pbData + offs * cbGross ) ;
                    if( getNegAM( pzMetaNote[ offs ].finger ) == FINGERnEG_dropNoteSpoolC2 && dropHeader - pzMetaNote[ offs ].dropHeaderCopy )
                    {
                        tinP.pcUtility[ 0 ] = dropHeader ;
                        tinP.pcUtility[ 1 ] = pzMetaNote[ offs ].dropHeaderCopy ;
                        tinP.pcUtility[ 2 ] = pzMetaNote[ offs ].idAdam ;
                        tinP.pcUtility[ 3 ] = pzMetaNote[ offs ].idLineTagged ;
                        tinP.pcUtility[ 4 ] = pzMetaNote[ offs ].idiFileTagged ;
                        tinP.pcUtility[ 5 ] = pzMetaNote[ offs ].idLineTagged2 ;
                        tinP.pcUtility[ 6 ] = pzMetaNote[ offs ].idiFileTagged2 ;
                        tinP.pcUtility[ 7 ] = pzMetaNote[ offs ].idThreadNew ;
                        tinP.pcUtility[ 8 ] = pzMetaNote[ offs ].idThreadDel ;

                        //U:: BLAMMOiD( dropHeader - pzMetaNote[ offs ].dropHeaderCopy ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0012.sexc.testDropHeadersF END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0013.sexc.formatDataBlobF BEGIN
#define DDNAME       "3func.360e0013.sexc.formatDataBlobF"
#define DDNUMB      (countT)0x360e0013
#define IDFILE      (countT)0x13e5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/


/*1*/voidT sexC::formatDataBlobF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pzMetaHead ) ;
        if( POOP ) return ;
    }

    _IO_

    const countT cbGross              = ( CBsEXdROPsEPARATOR + CBsEXdROPhEADER ) + ( 1 << pzMetaHead->expCbDrop ) ;
    const countT cSlots               = 1 << pzMetaHead->expSlots ;
    const countT offSlotsUseableBegin =          pzMetaHead->cSlotsAvoidLo ;
    const countT offSlotsUseableEnd   = cSlots - pzMetaHead->cSlotsAvoidHi ;

    for( countT offs = offSlotsUseableBegin ; offs < offSlotsUseableEnd ; offs ++ )
    {
        countT* pcSlot = (countT*)( pbData + offs * cbGross ) ;

        putNegAM( pcSlot[ 0 ] , FINGERnEG_dropSeparator ) ;
        putNegAM( pcSlot[ 1 ] , FINGERnEG_dropHeaderInitialize ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e0* : 3func.360e0013.sexc.formatDataBlobF END
