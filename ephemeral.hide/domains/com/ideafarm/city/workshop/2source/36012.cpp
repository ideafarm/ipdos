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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012001.stackc.stackc BEGIN
#define DDNAME       "3func.36012001.stackc.stackc"
#define DDNUMB      (countT)0x36012001
#define IDFILE      (countT)0xeb0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bb10104.1.1.0.html\"\>bb10104:  WAKEsHOW( "example.simplest.func.1150001.stackC.stackC" )\</A\>
constructs a stack object
an unlimited number of objects can be placed onto this stack object
arguments
 thirdP
 flagsP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ad.flSTACK!||
  if flSTACKc_COPY is specified, then idTypeP must be neither 0 nor ifcSTACKtYPE_countT
   when a stack object is being used to store countT values, the ability to specify flSTACKc_COPY would not be useful, so it is made illegal
  flSTACKc_GIVEsIGNnEWpLATE flSTACKc_GIVEsIGNdELpLATE
   at least wo thread must use signC::waitF to wait for new plates to be added to or d eleted from the stack
   when i am destroyed, if anyone is waiting for the sign, i will give it and wait for everyone to go away
 idTypeP
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.00100ae.ifcSTACKtYPE!||
  the meaning of this field depends upon whether flSTACKc_BLOB is set in flagsP
   if flSTACKc_BLOB is not set
    can be 0
    if 0 then ifcSTACKtYPE_countT is implied
    this is a change from earlier behavior
     can be 0, unless flSTACKc_COPY is specified in flagsP
      if 0 then the stack object makes no assumptions about what the numbers placed on it are
      for example, a pointer to a count4S object might be pushed, followed by a pointer to a string of strokeS objects
     if not 0, then the type declared here will be enforced
      this enforcement can be defeated by using a cast
   if flSTACKc_BLOB is set
    the value of this field is assigned into cbData, and ifcSTACKtYPE_BLOB is assigned into idType
  explicit specification of ifcSTACKtYPE_BLOB is illegal
   it is implied by the flSTACKc_BLOB flag
 pCbFP
  can be 0
  if not flSTACKc_BLOB then must be 0
  if flSTACKc_BLOB and blobs are length prefixed then must be 0
  used only if flSTACKc_BLOB and blobs are not length prefixed
   if not 0 then will be called whenever a blob is to be put onto the stackC
   this callback will receive the address of the source bytes
   it is to return the number of bytes to copy
    this value must be not greater than cbData
    it must also not be 0
     supporting 0 would not make sense because the caller would need at least 1 byteT of data to inspect to determine the length of the stored plate
*/
/**/

/*1*/stackC::stackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , const osTextT* const postFileP , cbFT pCbFP , const osTextT* const postNameP , batonC* const pBatonP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_stackC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
pBaton
(
    F(flagsP) & flSTACKc_DOnOTsERIALIZE
        ? 0
        : pBatonP
            ? pBatonP
            : ( new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) )
            //: new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER )
) ,
bDoNotDeleteBaton( !!pBatonP ) ,
cPlates( 0 ) ,
cPlatesSnap( 0 ) ,
third( thirdP ) ,
poop( third ) ,
postOsFile( 0 ) ,
ppTop( 0 ) ,
ppCursorDefault( 0 ) ,
idCursorDefault( 0 ) ,
ppLathRefDefault( 0 ) ,
idLathRefDefault( 0 ) ,
pSw_ppCursor(  0 ) ,
pSw_idCursor(  0 ) ,
pSw_ppLathRef( 0 ) ,
pSw_idLathRef( 0 ) ,
ppBottom( 0 ) ,
recycleLever1( flagsP ) ,
recycleLever2( idTypeP ) ,
flags( idTypeP == ifcSTACKtYPE_measureT ? flagsP | flSTACKc_ALLOWzE : flagsP ) ,
idType( F(flagsP) & flSTACKc_BLOB ? ifcSTACKtYPE_BLOB : ( idTypeP ? idTypeP : ifcSTACKtYPE_countT ) ) ,
bUp( 0 ) ,
cWaitingForEvent( 0 ) ,
pSgnEvent( 0 ) ,
pbnu( 0 ) ,
flagsState( flSTACKsTATE_null ) ,
ranUni( tinP ) ,
pCbF( pCbFP ) ,
cTabs( 0 ) ,
ppTab( 0 ) ,
pcTabIdSlot( 0 ) ,
cTabAge( 0 ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
pXray( 0 ) ,
pLeverLathRef( pLeverLathRefP ) ,
cbData
(
    F(flagsP) & flSTACKc_BLOB
    ?
    idTypeP
    :
    (
        idType == ifcSTACKtYPE_nicNameC
        ?
        processGlobal1I.cb_nicNameC_
        :
        //U:: (
        //U::     idType == ifcSTACKtYPE_handleC
        //U::     ?
        //U::     SIZEOF_handleC
        //U::     :
            (
                idType == ifcSTACKtYPE_timeS
                ?
                sizeof( timeS )
                :
                sizeof( countT )
            ) 
        //U:: ) 
    ) 
)
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    if( pBatonP ) { ___BITScT( pBaton , 0xdec ) ; }

    _INbATONsTACKc_

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        thirdP.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }

    if( !postFileP ) ctF( tinP ) ;
    else
    {
        {
            osFileNameC osfn( tinP , third , postFileP ) ;
            osTextT* postx = osfn ;
            const countT costa = third.c_strlenIF( tinP , postx ) + 1 ;
            third.newF( tinP , LF , postOsFile , costa ) ; ___BITScT( postOsFile , 0xdeb ) ;
            thirdC::c_strncpyIF( tinP , postOsFile , postx , costa ) ;
        }

        soulC soul( tinP , TAG( TAGiDnULL ) ) ;
        ZE( boolT , bRestore ) ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        IFsCRATCH
        {
            SCOOPS
            handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
            thirdC::dosOpenIF( tinP , tinP.pEther , hFile , countTC() , postOsFile , ifcOPENaCCESS_R , ifcOPENsHARE_R , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nFeO , 0 , 0 , 1 ) ;
            ((thirdC&)*tinP.pEtScratch).dosReadF( tinP , soul , hFile ) ;
            if( !POOP ) bRestore = 1 ;
            else
            {
                POOPR
                //NEXT LINE COMMENTED OUT TO ALLOW FILE TO NOT EXIST, IN WHICH CASE NO RESTORE IS DONE
                //__1 ;
            }
        }
        THREADmODE1rESTORE
        ctF( tinP , bRestore ? &soul : 0 ) ;
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012001.stackc.stackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012002.stackc.dt_stackc BEGIN
#define DDNAME       "3func.36012002.stackc.dt_stackc"
#define DDNUMB      (countT)0x36012002
#define IDFILE      (countT)0xeb1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cb10104.1.1.0.html\"\>cb10104:  WAKEsHOW( "example.simplest.func.1150002.stackC.dt_stackC" )\</A\>
i will d elete the object associated with each plate if i can
 if the stack is one of the following types, the object pointed to by each plate will be d eleted
  ifcSTACKtYPE_PTR_strokeS
  ifcSTACKtYPE_PTR_count2S
  ifcSTACKtYPE_PTR_count3S
  ifcSTACKtYPE_PTR_count4S
  ifcSTACKtYPE_PTR_count5S
  ifcSTACKtYPE_PTR_count6S
  ifcSTACKtYPE_PTR_count7S
  ifcSTACKtYPE_PTR_count8S
  ifcSTACKtYPE_PTR_plateC
  ifcSTACKtYPE_PTR_nicNameC
  ifcSTACKtYPE_PTR_soulC
 if the stack is one of the following types, there is no object associated with each plate
  ifcSTACKtYPE_countT
  ifcSTACKtYPE_sCountT    
  ifcSTACKtYPE_measureT   
  ifcSTACKtYPE_nicNameC
  ifcSTACKtYPE_timeS
 if the stackC object is one of the following types, it must not contain any plates when it is destroyed
  ifcSTACKtYPE_tableC
  ifcSTACKtYPE_ANY
if flSTACKc_COPY was specified during construction, then idType is used to d elete the copies that were placed onto the stack
not true: if flSTACKc_COPY was not specified, then the stack just stores numbers and, if those numbers are pointers, the application is responsible for deleting them
true: pointers will always be d eleted
 if this is not desired, the app must purge the stackC object before calling its destructor
*/
/**/

/*1*/stackC::~stackC( voidT )/*1*/
{
    TINSL
    SCOOP
    _INbATONsTACKc_

    bDying ++ ;
    if( pSgnEvent )
    {
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
        if( cWaitingForEvent )
        {
            sleepC s( tinP , TAG( TAGiDnULL ) ) ;
            ZE( countT , idTry ) ;
            while( cWaitingForEvent )
            {
                ++ s ;
                pSgnEvent->giveF( tinP ) ;
                third.dosSleepIF( tinP , TOCK ) ;
            }
        }

        DEL( pSgnEvent ) ;
        THREADmODE1rESTORE
    }

    soulC* pSoul = !postOsFile ? 0 : new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ;

    if( pSoul ) operator >>( *pSoul ) ;

    third.delF( tinP , pbnu ) ;
    purgeF( tinP ) ;

    if( postOsFile ) //U:: IF postOsFile THEN I WILL BLOW THE STACK
    {
        if( pSoul )
        {
            //ASSUME: THE DESTINATION DIRECTORY EXISTS
            THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )
            {
                handleC hFile( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_FILE ) ;
                { ZE( countT , idr ) ; third.dosOpenIF( tinP , tinP.pEther , hFile , idr , postOsFile , ifcOPENaCCESS_W , 0 , flOPENdETAILS_FAIL | flOPENdETAILS_LOCsEQ , ifcOPENhOW_nCeR ) ; }
                third.dosWriteF( tinP , hFile , *pSoul ) ;
            }
            THREADmODE1rESTORE
            DEL( pSoul ) ;
        }
        third.delF( tinP , postOsFile ) ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;

    THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING )

    if( !bDoNotDeleteBaton ) //~batonC HAS COMPLAINED OF "FUNCTIONS STILL PENDING", APPARENTLY HERE; THE CALL NEST INDICATED NESTED ~batonC, WHICH APPEARED TO NOT BE POSSIBLE, REVIEWING THE CODE; RETAIN THIS INOUT BRACKETING UNTIL THAT ISSUE HAS BEEN REPRODUCED AND ANALYSED
    {
        DEL( pBaton ) ;
    }

    DEL( pSw_ppCursor  ) ;
    DEL( pSw_idCursor  ) ;
    DEL( pSw_ppLathRef ) ;
    DEL( pSw_idLathRef ) ;
    DEL( pXray ) ;

    THREADmODE1rESTORE

    _OUTsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012002.stackc.dt_stackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012004.stackc.operator_countt BEGIN
#define DDNAME       "3func.36012004.stackc.operator_countt"
#define DDNUMB      (countT)0x36012004
#define IDFILE      (countT)0xeb2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.eb10104.1.1.0.html\"\>eb10104:  WAKEsHOW( "example.simplest.func.1150004.stackC.operator_countT" )\</A\>
evaluates to the number of items on this stack object
*/
/**/

/*1*/stackC::operator countT ( voidT ) const/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    _IO_
    return cPlates ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012004.stackc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012005.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012005.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012005
#define IDFILE      (countT)0xeb3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fb10104.1.1.0.html\"\>fb10104:  WAKEsHOW( "example.simplest.func.1150005.stackC.operator_shiftLeft" )\</A\>
places the value of an object onto this stack object
 this value might be a pointer
evaluates to a reference to this stack object
this function zees the internal cursor that is used to make operator [] speedy
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 valueP
  can be 0
  must not be a literal
   illegal: "myStack << 3 ;"
   legal:   "countT vv = 3 ; myStack << vv ;"
*/
/**/

/*1*/stackC& stackC::operator << ( const countT valueP )/*1*/
{
    //U: ALLOW ONLY FOR idType ifcSTACKtYPE_countT OR ifcSTACKtYPE_ANY (WILL NEED TO PROVIDE A PRIVATE MEMBER FUNCTION THAT DOES NOT ENFORCE THIS FOR INTERNAL USE AND USAGE BY switchStackC::stackF)
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *this ;
        __( !valueP && !( F(flags) & flSTACKc_ALLOWzE ) ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_

    CURSOR

    LATHrEF

    __( ppTop && ppTop->ppU ) ;
    __( *p_idLathRef && !*p_ppLathRef ) ;
    __( !*p_idCursor - !*p_ppCursor ) ;
    if( !third )
    {
        if( !( F(flagsState) & flSTACKsTATE_SHIFTlEFTuSED ) ) flagsState |= flSTACKsTATE_SHIFTlEFTuSED ;
        
        ZE( plateS* , ppNew ) ;
        newPlateF( tinP , ppNew , valueP ) ;
        if( ppNew )
        {
            if( !ppTop )
            {
                ppTop = ppBottom = ppNew ;
                cPlates ++ ; //U::
                adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppNew ) ;
            }
            else
            {
                if( !( F(flags) & flSTACKc_FIFO ) )
                {
                    adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_NEWaBOVE , ppNew ) ;
                    ppNew->ppD = ppTop ;
                    if( ppTop ) ppTop->ppU = ppNew ;
                    ppTop = ppNew ;
                    cPlates ++ ; //U::
                }
                else
                {
                    ppNew->ppU = ppBottom ;
                    if( ppBottom ) ppBottom->ppD = ppNew ;
                    ppBottom = ppNew ;
                    cPlates ++ ; //U::
                    adjustRefsF( tinP , cPlates , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppNew ) ;
                }
            }


            // IF WE EVER NEED TO GIVE THE SIGN FOR pSwTin, THE giveTakeF MEMBER FOR signC WILL NEED TO BE OVERRIDDEN TO AVOID USING TINSL
            newTabsIfF( tinP , ppNew , 0 ) ;
            if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNnEWpLATE ) pSgnEvent->giveF( tinP ) ;
        }
    }
    _OUTbATONsTACKc_

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012005.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012006.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012006.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012006
#define IDFILE      (countT)0xeb4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1c10104.1.1.0.html\"\>1c10104:  WAKEsHOW( "example.simplest.func.1150006.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 psttP
  can be 0
*/
/**/

/*1*/stackC& stackC::operator << ( const strokeS* const psttP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_strokeS ) ;
        __Z( psttP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)psttP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012006.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012007.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012007.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012007
#define IDFILE      (countT)0xeb5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3c10104.1.1.0.html\"\>3c10104:  WAKEsHOW( "example.simplest.func.1150007.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc2P
*/
/**/

/*1*/stackC& stackC::operator << ( const count2S* const pc2P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count2S ) ;
        __Z( pc2P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc2P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012007.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012008.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012008.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012008
#define IDFILE      (countT)0xeb6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0c10104.1.1.0.html\"\>0c10104:  WAKEsHOW( "example.simplest.func.1150008.stackC.operator_shiftRight" )\</A\>
removes the item that was most recently put onto the stack
evaluates to a reference to this stack object
this function zees the internal cursor that is used to make operator [] speedy
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 valueP
  must be 0
   exception: if ifcSTACKtYPE_nicNameC then must contain the address of the nicNameC object that the value is to be assigned into
it is illegal for code other than stackC code to call me for idType ifcSTACKtYPE_nicNameC
 this is not enforced
*/
/**/

/*1*/stackC& stackC::operator >> ( countT& valueP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *this ;
        switch( idType )
        {
            case ifcSTACKtYPE_nicNameC         :
            case ifcSTACKtYPE_timeS            : { __Z(  valueP ) ; break ; }
            case ifcSTACKtYPE_BLOB             : {                  break ; }
            default                            : { __NZ( valueP ) ; break ; }
        }
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    CURSOR

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::

    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;

    if( idIn == 0xb )
    {
        countT foo = 2 ;
    }

    LATHrEF

    __Z( ppTop ) ;
    __( !!ppTop->ppU ) ;
    __( ppTop->ppD && ppTop != ppTop->ppD->ppU ) ;
    if( !POOP )
    {
        if( F(flags) & flSTACKc_PULLrANDOMLY )
        {
            switch( idType )
            {
                case ifcSTACKtYPE_nicNameC         : { randomF( tinP ,         *(nicNameC*)valueP ) ;             extractF( 0 , tinP , 0 )            ; break ; }
                case ifcSTACKtYPE_timeS            : { randomF( tinP ,            *(timeS*)valueP ) ;             extractF( 0 , tinP , 0 )            ; break ; }
                case ifcSTACKtYPE_BLOB             : { randomF( tinP ,            (byteT*&)valueP ) ;             extractF( 0 , tinP , 0 )            ; break ; }
                default                            : { valueP = randomF( tinP )                     ;         __( extractF( tinP , 0  ) - valueP )    ; break ; }
            }
        }
        else
        {
            adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_DELETED ) ;

            plateS* ppd = ppTop ;
            ppTop = ppTop->ppD ;
            if( ppTop )
            {
                __( (plateS*)ppTop->ppU != ppd ) ;
                //U::__( ppTop->ppU != ppd ) ;
                ppTop->ppU = 0 ;
            }
    
            if( !( -- cPlates ) )
            {
                __NZ( ppTop ) ;
                __( ppBottom != ppd ) ;
                ppBottom = 0 ;
            }
    
            newTabsIfF( tinP , ppd , 1 ) ;
    
            switch( idType )
            {
                case ifcSTACKtYPE_nicNameC         : {         *(nicNameC*)valueP =         *(nicNameC*)PLATE_byteT_PTR(  ppd ) ; break ; }
                case ifcSTACKtYPE_timeS            : {            *(timeS*)valueP =            *(timeS*)PLATE_byteT_PTR(  ppd ) ; break ; }
                case ifcSTACKtYPE_BLOB             :    
                {
                    byteT*& pbv = *(byteT**)&valueP ;
                    countT& cd = PLATE_countT_REF( ppd ) ;
                    if( !pbv ) { third.newF( tinP , LF , pbv , cbData ? cbData : sizeof( countT ) + cd ) ; ___BITScT( pbv , 0xdf4 ) ; }
                    third.c_memcpyIF( tinP , pbv , (byteT*)&cd , cbData ? cbData : sizeof( countT ) + cd ) ;
    
                    break ;
                }
                default : { valueP = PLATE_countT_REF( ppd ) ; break ; }
            }

            if( F(flags) & flSTACKc_XRAY ) pXray->freeF( tinP ) ;
            else                           third.delF( tinP , (byteT*&)ppd ) ;
    
            if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNdELpLATE ) pSgnEvent->giveF( tinP ) ;
        }
    }

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::
    _OUTbATONsTACKc_

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012008.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012009.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012009.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012009
#define IDFILE      (countT)0xeb7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2c10104.1.1.0.html\"\>2c10104:  WAKEsHOW( "example.simplest.func.1150009.stackC.operator_shiftRight" )\</A\>
definition
functionally identical to operator >> ( countT& valueP 
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 psttP
  must be 0
*/
/**/

/*1*/stackC& stackC::operator >> ( strokeS*& psttP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_strokeS ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)psttP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012009.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200a.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601200a.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601200a
#define IDFILE      (countT)0xeb8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4c10104.1.1.0.html\"\>4c10104:  WAKEsHOW( "example.simplest.func.115000a.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc2P
*/
/**/

/*1*/stackC& stackC::operator >> ( count2S*& pc2P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count2S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc2P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200a.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200b.stackc.operator_element BEGIN
#define DDNAME       "3func.3601200b.stackc.operator_element"
#define DDNUMB      (countT)0x3601200b
#define IDFILE      (countT)0xeb9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ad10104.1.1.0.html\"\>ad10104:  WAKEsHOW( "example.simplest.func.115000b.stackC.operator_element" )\</A\>
idP == i evaluates to the i'th element on the stack
 idP == 2 , 3 , 4 , ... refer to items near the top of the stack
 the range of legal values, in absolute value, is from 1 to the number of items on the stack
 1-based: idP == 0 is a special value that means "most recently referenced"
  impotence will occur if 0 is specified and no plate has been referenced
  apprentice craftsmen: suggestion: avoid using 0
 idP == 1 refers to the topmost (most recently added) item
 idP == -1 refers to the bottommost (earliest) item
 idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
the application must cast my value to a reference to the appropriate class when the data on each plate is not of size sizeof( countT )
 for example, if idType == ifcSTACKtYPE_nicNameC, my value stFoo[ 2 ] must be cast to *(nicNameC*)&stFoo[ 2 ]
 warning: code that fails to do this for ifcSTACKtYPE_nicNameC will work for IPv4 but will fail for IPv6 long values
this function operates in "turbo mode" (very speedy) if idP > 0
 when idP > 0, this function will use an internal cursor to retrieve the specified value very quickly
 maximum speed is achieved when idP is 1 greater than the last value of idP specified to operator []
  in other words, this function is speediest when idP is incremented upward from 1
  actually, it is even faster in the uninteresting case where idP equals the last value specified to operator []
 near maximum speed is achieved when idP is 1 smaller than the last value of idP specified to operator []
  this is, for all practical purposes, just as fast as incrementing idP
 if idP is > 0 and is not very close to the current cursor then the tab array will be used
 for efficiency, applications should load the stackC before calling me with an idP > 0
  calling me with idP > 0 will cause tab maintainance to begin if it has not already begun
  it is more efficient to load plates before tab maintainance has begun
 in cases of multithreaded access to the stackC object, a single cursor is shared by all threads
  for example, one thread might specify idP == 34
  then another thread might specify idP == 35
  in this example, the second thread would retrieve slot 35 very quickly
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 idP
*/
/**/

/*1*/countT& stackC::operator [] ( countT idP )/*1*/
{
    TINSL
    SCOOP

    _INbATONsTACKc_
    LATHrEF

    //U::CONJ: THIS SHOULD BE ENABLED; AT A MINIMUM, DETECT idP > cPlates
    //SOME OF THESE CHECKS MUST BE DONE WHILE *this IS GRABBED
    //IFbEcAREFUL
    //{
    //    if( third ) return *(countT*)pbnu ;
    //    __( !scSteps && !*p_ppLathRef ) ;
    //    if( third ) return *(countT*)pbnu ;
    //    __( scSteps > (countT)*this ) ;
    //    if( third ) return *(countT*)pbnu ;
    //}

    plateS* ppc = pPlateF( tinP , idP ) ;
    if( ppc ) adjustRefsF( tinP , idP , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppc ) ;
    _OUTbATONsTACKc_

    if( ppc ) return PLATE_countT_REF( ppc ) ;
    else      return *(countT*)pbnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200b.stackc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200c.stackc.sinkf BEGIN
#define DDNAME       "3func.3601200c.stackc.sinkf"
#define DDNUMB      (countT)0x3601200c
#define IDFILE      (countT)0xeba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1d10104.1.1.0.html\"\>1d10104:  WAKEsHOW( "example.simplest.func.115000c.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pSubtractFP should be a function that returns the "relative density" of two objects
  cast its parameters as in this example (which is the default subtration function)
   countT subtractF( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
   if( !pEther ) return ;
   etherC& ether = *(etherC*)pEther ;
   return c1P - c2P ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifcFT)( tinS& tinP , countT& , countT& , countT& )"
this can also be used to query whether the item is on the stack without changing the stack
 if flSTACKsINK_QUERY is specified in flagsP, the item is never added to the stack
 instead, idSlotP is set to 0 if the item is not found, or to the position where the item was found
  1 indicates that valueP was found at the top of the stack
 impotence does not occur when an item is not found
 flSTACKsINK_QUERY can only be used when all plates were sunk into the stack using sinkF
if a plate is added, this function zees the internal cursor that is used to make operator [] speedy
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
for efficiency, i should not be called until after the initial plates have been loaded
 i use an array of tabs to jump around, doing a binary search
 this array of tabs is not set up until i am called for the wo'th time
 once it is set up, the tabs are maintained whenever a plate is added or removed from the stack
 the overhead of maintaining the tab array can be avoided by loading the stack before calling me
arguments
 idSlotP
  must be 0
  after return, contains the slot containing the new item
   1 indicates that the new item is at the top
   2 indicates that there is one item above the newly inserted item
   0 indicates either that the item was not added or that the item is not on the stack
    for a query, 0 indicates that an equivalent item is not on the stack
    for a unique sink, 0 indicates that the item was not added because an equivalent item is already there
 valueP
  can be 0
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  can be 0
 subtractionParmP
  can be 0
  if 0 then cbd is used
  value is not used
  it is only passed into pSubtractF
*/
/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const countT valueP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    _INsTACKc_
    ZE( plateS* , ppValue ) ;
    sinkPrivateF( tinP , idSlotP , valueP , ppValue , flagsP , pSubtractFP , subtractionParmP ) ;
    //O: __NZ( ppValue ) ;
    _OUTsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200c.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200d.stackc.sinkf BEGIN
#define DDNAME       "3func.3601200d.stackc.sinkf"
#define DDNUMB      (countT)0x3601200d
#define IDFILE      (countT)0xebb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2d10104.1.1.0.html\"\>2d10104:  WAKEsHOW( "example.simplest.func.115000d.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which is the default subtration function)
   countT subtractStringsF( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ether.strCompareF( tinP , (strokeS*)c1P , (strokeS*)c2P ) ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 tinP
 idSlotP
 psttP
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
 subtractionParmP
  if 0 then c1P and c2P point to plain strokeS strings
  else gives the "string of strings" nesting level
   if 1 then c1P and c2P are assumed to be strings of strings and i will compare the woth string in each set, ignoring subsequent strings in the string
   if 2 then i will assume "string of strings of strings"
   if 3 etc. etc.
*/
/**/countT subtractStringsF( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    if( c3P > 4 ) { BLAMMO ; }      // NOT LIKELY TO NEED MORE THAN 4 NESTS.  INTENDED TO TRAP GARBAGE VALUES OF c3P

    countT csPrefixIgnore = c3P * CSpREFIX ; // WILL BE 0 FOR NORMAL STRINGS.  WILL BE CSpREFIX FOR "STRINGS OF STRINGS", SO THAT THE PREFIX FOR THE CONTAINING STRING IS IGNORED.  GENERALLY, WILL CAUSE ME TO IGNORE THE PREFIES OF ALL CONTAINING STRINGS

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (strokeS*)c1P + csPrefixIgnore , (strokeS*)c2P + csPrefixIgnore ) ;
    }

    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const strokeS* const psttP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    if( third ) return ;
    __( idSlotP ) ;
    __Z( psttP ) ;
    FV( flSTACKsINK , flagsP ) ;
    __( idType && idType - ifcSTACKtYPE_PTR_strokeS ) ;
    __( F(flags) & flSTACKc_XRAY ) ;
    if( third ) return ;

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractStringsF ;
    sinkF( tinP , idSlotP , (countT)psttP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200d.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200e.stackc.sinkf BEGIN
#define DDNAME       "3func.3601200e.stackc.sinkf"
#define DDNUMB      (countT)0x3601200e
#define IDFILE      (countT)0xebc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3d10104.1.1.0.html\"\>3d10104:  WAKEsHOW( "example.simplest.func.115000e.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount2F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count2S*)c1P)->c1 - ((count2S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc2P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount2F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 2 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count2S* const pc2P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    if( third ) return ;
    __( idSlotP ) ;
    __Z( pc2P ) ;
    FV( flSTACKsINK , flagsP ) ;
    __( idType && idType - ifcSTACKtYPE_PTR_count2S ) ;
    __( F(flags) & flSTACKc_XRAY ) ;
    if( third ) return ;

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount2F ;
    sinkF( tinP , idSlotP , (countT)pc2P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200e.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200f.stackc.extractf BEGIN
#define DDNAME       "3func.3601200f.stackc.extractf"
#define DDNUMB      (countT)0x3601200f
#define IDFILE      (countT)0xebd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.115000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dd10104.1.1.0.html\"\>dd10104:  WAKEsHOW( "example.simplest.func.115000f.stackC.extractF" )\</A\>
returns the idP'th item and removes it from the stack
this function zees the internal cursor that is used to make operator [] speedy
it is illegal to call me for an ifcSTACKtYPE_nicNameC or ifcSTACKtYPE_timeS stackC
arguments
 idP
  1-based: idP == 0 has a special meaning
   if idP == 0 then the plate whose value was most recently referenced will be extracted
   it is illegal to call this function with idP == 0 before using one of the other member functions to refer to an item on this stackC object
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/countT stackC::extractF( tinS& tinP , const countT idP )/*1*/
{
    SCOOP
    __( idType == ifcSTACKtYPE_nicNameC ) ;
    __( idType == ifcSTACKtYPE_timeS ) ;
    __( idType == ifcSTACKtYPE_BLOB ) ;

    _INbATONsTACKc_
    ZE( countT , vv ) ;
    {
        _IO_
        extractF( (byteT*)&vv , tinP , idP ) ;
    }
    _OUTbATONsTACKc_
    return vv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601200f.stackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012010.stackc.downf BEGIN
#define DDNAME       "3func.36012010.stackc.downf"
#define DDNUMB      (countT)0x36012010
#define IDFILE      (countT)0xebe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$downF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bd10104.1.1.0.html\"\>bd10104:  WAKEsHOW( "example.simplest.func.1150010.stackC.downF" )\</A\>
call this repeatedly to obtain each value in the stack, in lifo order (top down)
the application must cast my value to a reference to the appropriate class when the data on each plate is not of size sizeof( countT )
 for example, if idType == ifcSTACKtYPE_nicNameC, my value stFoo[ 2 ] must be cast to *(nicNameC*)&stFoo[ 2 ]
 warning: code that fails to do this for ifcSTACKtYPE_nicNameC will work for IPv4 but will fail for IPv6 long values
there are two cases for which the behavior of this function is identical
 if the stack is empty
 if the stack contains exactly one item of value 0
 for both cases, the first call will return 0 and the handle will remain 0
 to distinguish between these cases, use operator countT to get the number of items on the stack
for the first call, handleP must be 0
optionally, continue to call downF until handleP is ze
 when handleP becomes ze, you have completely traversed the stack object
 no harm is done by quitting early, not using a nonze handleP
if the stackC is empty, this function will set handleP to ze and will evaluate to 0
calls to downF can be followed by calls to upF, and calls to upF can be followed by calls to downF
 most applications will call downF repeatedly until !handle
after calling downF, handle will refer to the next (downward) item
 for a given value of handle, downF and upF return the same value
 the only difference is how handle is updated
 it is legal (ok) for application code (adam definitions) to exploit this
  this is a feature of the api, not an implementation detail subject to change
the stack can be modified while it is being traversed, with one exception
 the plate referred to by handle must not be d eleted
 calling extractF to d elete the last referenced plate is ok
 calling extractF with an explicit id is ok, as long as the specified plate is not the "next" plate down
concurrent multiple traversals of a stack object are legal
 to do this, just use separate places to store each handle
concurrent traversals can be either single threaded or multithreaded
this function does not modify the internal cursor that is used to make operator [] speedy
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 handleP
  must be 0 for the first call when traversing the stack object
*/
/**/

/*1*/countT& stackC::downF( tinS& tinP , handleC& handleP )/*1*/
{
    SCOOP
    // ASSUME: handleP IS EITHER 0 OR POINTS TO THE PLATE WHOSE VALUE IS TO BE RETURNED

    IFbEcAREFUL
    {
        if( POOP )
        {
            handleP.osF( ifcIDtYPEhANDLE_STACKwALK , 0 ) ; //TO PREVENT CPU SPIN IF *this IS IMPOTENT
            return *(countT*)pbnu ;
        }
    }

    _INbATONsTACKc_
    if( !handleP ) handleP.osF( ifcIDtYPEhANDLE_STACKwALK , (countT)ppTop ) ;

    ZE( countT* , pv ) ;
    if( ~handleP )
    {    
        LATHrEF

        plateS* ppBefore = *p_ppLathRef ;
        *p_ppLathRef = (plateS*)handleP.osF( ifcIDtYPEhANDLE_STACKwALK ) ;
        if( ppBefore )
        {
                 if( (plateS*)ppBefore->ppD == *p_ppLathRef ) ++ *p_idLathRef ;
            else if( (plateS*)ppBefore->ppU == *p_ppLathRef ) -- *p_idLathRef ;
            //U:     if( ppBefore->ppD == *p_ppLathRef ) ++ *p_idLathRef ;
            //U:else if( ppBefore->ppU == *p_ppLathRef ) -- *p_idLathRef ;
            else if( ppBefore      != *p_ppLathRef )
            {
                *p_idLathRef = 0 ;
                setIdLathRefF( tinP ) ;
            }
        }
        else
        {
            *p_idLathRef = 0 ;
            setIdLathRefF( tinP ) ;
        }

        pv = &PLATE_countT_REF( *p_ppLathRef ) ;
        handleP.osF( ifcIDtYPEhANDLE_STACKwALK , (countT)(*p_ppLathRef)->ppD ) ;
    }
    _OUTbATONsTACKc_

    return pv ? *pv : *(countT*)pbnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012010.stackc.downf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012011.stackc.upf BEGIN
#define DDNAME       "3func.36012011.stackc.upf"
#define DDNUMB      (countT)0x36012011
#define IDFILE      (countT)0xebf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$upF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150011.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cd10104.1.1.0.html\"\>cd10104:  WAKEsHOW( "example.simplest.func.1150011.stackC.upF" )\</A\>
call this repeatedly to obtain each value in the stack in reverse order (bottom up)
 for a normal (lifo) stack, upF retrieves the plate values in fifo order
 for a fifo stack, upF retrieves the plate values in lifo order
the application must cast my value to a reference to the appropriate class when the data on each plate is not of size sizeof( countT )
 for example, if idType == ifcSTACKtYPE_nicNameC, my value stFoo[ 2 ] must be cast to *(nicNameC*)&stFoo[ 2 ]
 warning: code that fails to do this for ifcSTACKtYPE_nicNameC will work for IPv4 but will fail for IPv6 long values
this function should not be used to implement a fifo stack
 instead, construct the stackC object as a fifo stack, and use downF to retrieve its values in normal order
see the documentation for stackC::downF
arguments
 handleP
*/
/**/
/*1*/countT& stackC::upF( tinS& tinP , handleC& handleP )/*1*/
{
    SCOOP
    // ASSUME: handleP IS EITHER 0 OR POINTS TO THE PLATE WHOSE VALUE IS TO BE RETURNED

    IFbEcAREFUL
    {
        if( POOP )
        {
            handleP.osF( ifcIDtYPEhANDLE_STACKwALK , 0 ) ; //TO PREVENT CPU SPIN IF *this IS IMPOTENT
            return *(countT*)pbnu ;
        }
    }

    _INbATONsTACKc_
    if( !handleP ) handleP.osF( ifcIDtYPEhANDLE_STACKwALK , (countT)ppBottom ) ;

    ZE( countT* , pv ) ;
    if( ~handleP )
    {    
        LATHrEF

        plateS* ppBefore = *p_ppLathRef ;
        *p_ppLathRef = (plateS*)handleP.osF( ifcIDtYPEhANDLE_STACKwALK ) ;
        if( ppBefore )
        {
                 if( (plateS*)ppBefore->ppU == *p_ppLathRef ) -- *p_idLathRef ;
            else if( (plateS*)ppBefore->ppD == *p_ppLathRef ) ++ *p_idLathRef ;
            //U::     if( ppBefore->ppU == *p_ppLathRef ) -- *p_idLathRef ;
            //U::else if( ppBefore->ppD == *p_ppLathRef ) ++ *p_idLathRef ;
            else if( ppBefore      != *p_ppLathRef )
            {
                *p_idLathRef = 0 ;
                setIdLathRefF( tinP ) ;
            }
        }
        else
        {
            *p_idLathRef = 0 ;
            setIdLathRefF( tinP ) ;
        }

        pv = &PLATE_countT_REF( *p_ppLathRef ) ;
        handleP.osF( ifcIDtYPEhANDLE_STACKwALK , (countT)(*p_ppLathRef)->ppU ) ;
    }
    _OUTbATONsTACKc_

    return pv ? *pv : *(countT*)pbnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012011.stackc.upf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012012.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012012.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012012
#define IDFILE      (countT)0xec0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5c10104.1.1.0.html\"\>5c10104:  WAKEsHOW( "example.simplest.func.1150012.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc3P
*/
/**/

/*1*/stackC& stackC::operator << ( const count3S* const pc3P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count3S ) ;
        __Z( pc3P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc3P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012012.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012013.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012013.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012013
#define IDFILE      (countT)0xec1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7c10104.1.1.0.html\"\>7c10104:  WAKEsHOW( "example.simplest.func.1150013.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc4P
*/
/**/

/*1*/stackC& stackC::operator << ( const count4S* const pc4P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count4S ) ;
        __Z( pc4P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc4P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012013.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012014.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012014.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012014
#define IDFILE      (countT)0xec2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9c10104.1.1.0.html\"\>9c10104:  WAKEsHOW( "example.simplest.func.1150014.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc5P
*/
/**/

/*1*/stackC& stackC::operator << ( const count5S* const pc5P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count5S ) ;
        __Z( pc5P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc5P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012014.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012015.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012015.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012015
#define IDFILE      (countT)0xec3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150015.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bc10104.1.1.0.html\"\>bc10104:  WAKEsHOW( "example.simplest.func.1150015.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc6P
*/
/**/

/*1*/stackC& stackC::operator << ( const count6S* const pc6P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count6S ) ;
        __Z( pc6P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc6P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012015.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012016.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012016.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012016
#define IDFILE      (countT)0xec4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150016.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dc10104.1.1.0.html\"\>dc10104:  WAKEsHOW( "example.simplest.func.1150016.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc7P
*/
/**/

/*1*/stackC& stackC::operator << ( const count7S* const pc7P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count7S ) ;
        __Z( pc7P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc7P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012016.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012017.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012017.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012017
#define IDFILE      (countT)0xec5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150017.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fc10104.1.1.0.html\"\>fc10104:  WAKEsHOW( "example.simplest.func.1150017.stackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc8P
*/
/**/

/*1*/stackC& stackC::operator << ( const count8S* const pc8P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count8S ) ;
        __Z( pc8P ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pc8P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012017.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012018.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012018.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012018
#define IDFILE      (countT)0xec6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150018.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6c10104.1.1.0.html\"\>6c10104:  WAKEsHOW( "example.simplest.func.1150018.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc3P
*/
/**/

/*1*/stackC& stackC::operator >> ( count3S*& pc3P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count3S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc3P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012018.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012019.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012019.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012019
#define IDFILE      (countT)0xec7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8c10104.1.1.0.html\"\>8c10104:  WAKEsHOW( "example.simplest.func.1150019.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc4P
*/
/**/

/*1*/stackC& stackC::operator >> ( count4S*& pc4P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count4S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc4P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012019.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201a.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601201a.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601201a
#define IDFILE      (countT)0xec8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ac10104.1.1.0.html\"\>ac10104:  WAKEsHOW( "example.simplest.func.115001a.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc5P
*/
/**/

/*1*/stackC& stackC::operator >> ( count5S*& pc5P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count5S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc5P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201a.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201b.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601201b.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601201b
#define IDFILE      (countT)0xec9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cc10104.1.1.0.html\"\>cc10104:  WAKEsHOW( "example.simplest.func.115001b.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc6P
*/
/**/

/*1*/stackC& stackC::operator >> ( count6S*& pc6P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count6S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc6P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201b.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201c.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601201c.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601201c
#define IDFILE      (countT)0xeca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115001c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ec10104.1.1.0.html\"\>ec10104:  WAKEsHOW( "example.simplest.func.115001c.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc7P
*/
/**/

/*1*/stackC& stackC::operator >> ( count7S*& pc7P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count7S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc7P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201c.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201d.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601201d.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601201d
#define IDFILE      (countT)0xecb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115001d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0d10104.1.1.0.html\"\>0d10104:  WAKEsHOW( "example.simplest.func.115001d.stackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
if the item that this function removes was the most recently referenced item, it zees the "last reference cursor"
arguments
 pc8P
*/
/**/

/*1*/stackC& stackC::operator >> ( count8S*& pc8P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_count8S ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pc8P ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201d.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201e.stackc.sinkf BEGIN
#define DDNAME       "3func.3601201e.stackc.sinkf"
#define DDNUMB      (countT)0x3601201e
#define IDFILE      (countT)0xecc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115001e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4d10104.1.1.0.html\"\>4d10104:  WAKEsHOW( "example.simplest.func.115001e.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount3F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count3S*)c1P)->c1 - ((count3S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc3P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount3F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 3 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count3S* const pc3P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc3P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count3S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount3F ;
    sinkF( tinP , idSlotP , (countT)pc3P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201e.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201f.stackc.sinkf BEGIN
#define DDNAME       "3func.3601201f.stackc.sinkf"
#define DDNUMB      (countT)0x3601201f
#define IDFILE      (countT)0xecd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115001f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5d10104.1.1.0.html\"\>5d10104:  WAKEsHOW( "example.simplest.func.115001f.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount4F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count4S*)c1P)->c1 - ((count4S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc4P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount4F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 4 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count4S* const pc4P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc4P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count4S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount4F ;
    sinkF( tinP , idSlotP , (countT)pc4P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601201f.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012020.stackc.sinkf BEGIN
#define DDNAME       "3func.36012020.stackc.sinkf"
#define DDNUMB      (countT)0x36012020
#define IDFILE      (countT)0xece


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150020.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6d10104.1.1.0.html\"\>6d10104:  WAKEsHOW( "example.simplest.func.1150020.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount5F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count5S*)c1P)->c1 - ((count5S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc5P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount5F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 5 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count5S* const pc5P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc5P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count5S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount5F ;
    sinkF( tinP , idSlotP , (countT)pc5P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012020.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012021.stackc.sinkf BEGIN
#define DDNAME       "3func.36012021.stackc.sinkf"
#define DDNUMB      (countT)0x36012021
#define IDFILE      (countT)0xecf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150021.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7d10104.1.1.0.html\"\>7d10104:  WAKEsHOW( "example.simplest.func.1150021.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount6F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count6S*)c1P)->c1 - ((count6S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc6P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount6F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 6 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count6S* const pc6P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc6P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count6S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount6F ;
    sinkF( tinP , idSlotP , (countT)pc6P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012021.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012022.stackc.sinkf BEGIN
#define DDNAME       "3func.36012022.stackc.sinkf"
#define DDNUMB      (countT)0x36012022
#define IDFILE      (countT)0xed0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150022.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8d10104.1.1.0.html\"\>8d10104:  WAKEsHOW( "example.simplest.func.1150022.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount7F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count7S*)c1P)->c1 - ((count7S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc7P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount7F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 7 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count7S* const pc7P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc7P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count7S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount7F ;
    sinkF( tinP , idSlotP , (countT)pc7P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012022.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012023.stackc.sinkf BEGIN
#define DDNAME       "3func.36012023.stackc.sinkf"
#define DDNUMB      (countT)0x36012023
#define IDFILE      (countT)0xed1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150023.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9d10104.1.1.0.html\"\>9d10104:  WAKEsHOW( "example.simplest.func.1150023.stackC.sinkF" )\</A\>
like operator << except the new item "sinks" into the stack
 the new item sinks until the item below it is equally or more dense than it is
  iow, this function preserves ordering
   an item will not sink past another item of the same density
  pDensityFP should be a function that returns the "density" of the object
  cast its parameters, as in this example (which, unlike the default subtraction function, only looks at c1)
   countT subtractCount8F( countT& pEther , countT& c1P , countT& c2P )
{
   if( !pEther || !c1P || !c2P ) return ;
   etherC& ether = *(etherC*)pEther ;
   return ((count8S*)c1P)->c1 - ((count8S*)c2P)->c1 ;
   }
  the function must be of type ifc3FT, i.e.: "countT (*ifc3FT)( tinS& tinP , countT& , countT& , countT& )"
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pc8P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
*/
/**/countT subtractCount8F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    ZE( sCountT , scSgn ) ;
    if( pEther )
    {
        etherC& ether = *(etherC*)pEther ;
        scSgn = ether.strCompareF( tinP , (countT*)c1P , (countT*)c2P , 8 , 0 , 0 , 0 , 1 ) ;
    }
    if( c3P ) ;
    return scSgn ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const count8S* const pc8P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc8P ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_count8S ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCount8F ;
    sinkF( tinP , idSlotP , (countT)pc8P , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012023.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012024.stackc.grabf BEGIN
#define DDNAME       "3func.36012024.stackc.grabf"
#define DDNUMB      (countT)0x36012024
#define IDFILE      (countT)0xed2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150024.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    _INbATONnOtAG_
    _OUTsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012024.stackc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012025.stackc.ungrabf BEGIN
#define DDNAME       "3func.36012025.stackc.ungrabf"
#define DDNUMB      (countT)0x36012025
#define IDFILE      (countT)0xed3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150025.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::ungrabF( tinS& tinP , const flagsT flagsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    _INsTACKc_
    countT cUngrabbed = pBaton
        ? pBaton->ungrabF( tinP , flagsP )
        : 0
    ;
    _OUTsTACKc_

    return cUngrabbed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012025.stackc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012026.stackc.operator_call BEGIN
#define DDNAME       "3func.36012026.stackc.operator_call"
#define DDNUMB      (countT)0x36012026
#define IDFILE      (countT)0xed4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150026.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bb20104.1.1.0.html\"\>bb20104:  WAKEsHOW( "example.simplest.func.1150026.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals cP
 1 indicates that cP was found at the top of the stack
 2 indicates that cP was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF, specifying the same pSubtractFP
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 cP
  the value to be searched for
 pSubtractFP
  can be 0
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const countT cP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , cP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012026.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012027.stackc.newplatef BEGIN
#define DDNAME       "3func.36012027.stackc.newplatef"
#define DDNUMB      (countT)0x36012027
#define IDFILE      (countT)0xed5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newPlateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150027.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
this function zees the internal cursor that is used to make operator [] speedy
my job is to update my data completely to reflect the presence of the new plate without actually placing the plate onto the stack
the caller must place the plate onto the stack
i make no assumptions about where the caller will place the plate in the stack
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
each caller must...
 adjust references
 insert the plate into the chain
 increment cPlates
arguments
 ppNewP
  must be 0
 valueP
  if flSTACKc_ALLOWzE is set, can be 0 unless the stackC is a pointer type
   flSTACKc_ALLOWzE will not be set unless the code that constructs me specifies it
   this means that a stackC object will not accept a 0 value unless it is told in advance to do so
   this reflects a coding style principle that 0 should mean "invalid value" for a variable rather than be a member of the set of valid values
  for apprentices: think of a stackC as a stack of countT objects, which are either values or pointers to values
   by default, cbData is sizeof( countT ), which is also the size of an address
   in this case, a stackC object is a stack of countT values or addresses
   in this case, i interpret valueP as wo such value, to be copied to the data portion of the new plate
  for journeymen: it is possible to stack together images that are of a size other than sizeof( countT )
   for some idType values, cbData will be a nonze value other than sizeof( countT )
   in this case, a stackC object is a stack of images, each of size cbData bytes
   in this case, i interpret valueP as containing the address of cbData bytes that i am to copy to the data portion of the new plate
  for masters: it is possible to stack together images that are of varying sizes
   for some idType values, cbData will be 0
    in this case, a stackC object is a stack of length prefixed varying length images
    in this case, i interpret valueP as containing the address of the length prefixed string of bytes that i am to copy to the data portion of the new plate
     the data section of the plate will begin with a countT value containing the number of data bytes that follow it
   varying length images that are not length prefixed are also supported
    requirements
     the caller must know, when the stackC is constructed, the maximum possible length
     the caller must specify a callback function that can inspect an image and return its length
    to use this capability, see stackC::stackC
if flSTACKc_COPY is not set, then valueP is placed onto the stack object
if flSTACKc_COPY is set, then valueP is assumed to contain the nonze address of an object of a known type, which is copied to a newly allocated poolOld drop, whose address is placed onto the stack
*/
/**/

/*1*/voidT stackC::newPlateF( tinS& tinP , plateS*& ppNewP , const countT valueP )/*1*/
{
    SCOOP
    etherC* pEtherContainsMe ; //INTENTIONALLY UNINITIALIZED, FOR SPEED.  IS RARELY USED, BUT WHEN USED, I MUST BE FAST
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( ppNewP ) ;
        if( pCbF )
        {
            pEtherContainsMe = third.third_pEtherContainsMe_F() ;
            __Z( pEtherContainsMe ) ;
        }
        if( F(flags) & flSTACKc_COPY )
        {
            __Z( idType ) ;
            __( idType == ifcSTACKtYPE_countT ) ;
            __Z( valueP ) ;
            __( cbData != sizeof( countT ) ) ;
        }
        __( ( !cbData || cbData != sizeof( countT ) || idType == ifcSTACKtYPE_BLOB ) && !valueP && !( F(flags) & flSTACKc_ALLOWzE ) ) ;
        __( valueP < TOCK && F(flags) & flSTACKc_DISALLOWsMALLvALUE ) ;
        if( third ) return ;
             if( idType ==         ifcSTACKtYPE_nicNameC ) { __(          !*(nicNameC*)valueP && !( F(flags) & flSTACKc_ALLOWzE ) ) ; }
        else if( idType ==         ifcSTACKtYPE_timeS    ) { __(             !*(timeS*)valueP && !( F(flags) & flSTACKc_ALLOWzE ) ) ; }
        else                                       { __(                              !valueP && !( F(flags) & flSTACKc_ALLOWzE ) ) ; }
        __( F(flagsState) & flSTACKsTATE_LOCKED ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_

    if( F(flags) & flSTACKc_LOCKwHENzEpUSHED && !valueP ) flagsState |= flSTACKsTATE_LOCKED ;

    countT cbd ; //INTENTIONALLY NOT INITIALIZED, FOR SPEED
    if( !cbData ) cbd = sizeof( countT ) + *(countT*)valueP ;
    else if( !pCbF ) cbd = cbData ;
    else
    {
        cbd = (*pCbF)( tinP , *pEtherContainsMe , (byteT*)valueP ) ;
        __Z( cbd ) ;
        __( cbData < cbd ) ;
    }

    if( F(flags) & flSTACKc_XRAY ) ppNewP = (plateS*)&(*pXray)[ 0 ] ;
    else                           { third.newF( tinP , LF , (byteT*&)ppNewP , sizeof( plateS ) + cbd ) ; ___CT( ppNewP ) ; }

    __Z( ppNewP ) ;
    if( ppNewP )
    {
        ppNewP->resetF() ; // DATA SECTION IS NOT INITIALIZED

        LATHrEF

        if( !cbData || cbData != sizeof( countT ) || idType == ifcSTACKtYPE_BLOB )
        {
            if( valueP ) third.c_memcpyIF( tinP , (byteT*)ppNewP + sizeof( plateS ) , (byteT*)valueP , cbd ) ;
            else         third.c_memsetIF( tinP , (byteT*)ppNewP + sizeof( plateS ) , cbd , 0 ) ;
        }
        else
        {
            if( !( F(flags) & flSTACKc_COPY ) || !valueP ) PLATE_countT_REF( ppNewP ) = valueP ;
            else
            {
                switch( idType )
                {
                    case ifcSTACKtYPE_PTR_strokeS :
                    {
                        countT cba = ( CSpREFIX + ((strokeS*)valueP)->idAdam ) * sizeof( strokeS ) ;
                        ZE( strokeS* , pn ) ;
                        third.newF( tinP , LF , pn , cba ) ; ___BITScT( pn , 0xe0a ) ;
                        third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , cba ) ;
                        PLATE_countT_REF( ppNewP ) = (countT)pn ;
                        break ;
                    }
                    case ifcSTACKtYPE_PTR_count2S      : { ZE( count2S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count2S ) ) ; ___BITScT( pn , 0xe09 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count3S      : { ZE( count3S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count3S ) ) ; ___BITScT( pn , 0xe08 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count4S      : { ZE( count4S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count4S ) ) ; ___BITScT( pn , 0xe07 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count5S      : { ZE( count5S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count5S ) ) ; ___BITScT( pn , 0xe06 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count6S      : { ZE( count6S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count6S ) ) ; ___BITScT( pn , 0xe05 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count7S      : { ZE( count7S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count7S ) ) ; ___BITScT( pn , 0xe04 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_count8S      : { ZE( count8S*  , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , sizeof( count8S ) ) ; ___BITScT( pn , 0xe03 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_nicNameC     : { ZE( nicNameC* , pn ) ; third.newF( tinP , LF , pn ) ; third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , processGlobal1I.cb_nicNameC_ )     ; ___BITScT( pn , 0xe02 ) ; PLATE_countT_REF( ppNewP ) = (countT)pn ; break ; }
                    case ifcSTACKtYPE_PTR_byteT        :
                    {
                        ZE( byteT* , pn ) ;
                        const countT costa = third.c_strlenIF( tinP , (osTextT*)valueP ) + 1 ;
                        third.newF( tinP , LF , pn , costa ) ; ___BITScT( pn , 0xe01 ) ;
                        third.c_memcpyIF( tinP , pn , (osTextT*)valueP , costa ) ;
                        PLATE_countT_REF( ppNewP ) = (countT)pn ;
                        break ;
                    }
                    case ifcSTACKtYPE_PTR_countT :
                    {
                        countT cca = tinP.pEther->strBodyLengthF( tinP , (countT*)valueP ) + 1 ;
                        ZE( countT* , pn ) ;
                        third.newF( tinP , LF , pn , cca ) ; ___BITScT( pn , 0xe00 ) ;
                        third.c_memcpyIF( tinP , (byteT*)pn , (byteT*)valueP , cca * sizeof( countT ) ) ;
                        PLATE_countT_REF( ppNewP ) = (countT)pn ;
                        break ;
                    }
                    case ifcSTACKtYPE_PTR_soulC :
                    {
                        __Z( valueP ) ;
                        if( valueP )
                        {
                            soulC& soulSrc = *(soulC*)valueP ;
                            const byteT* pbs = soulSrc ;
                            soulC* pSoul = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) , pbs , flSOUL_null , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ; ___BITScT( pSoul , 0xdff ) ;
                            PLATE_countT_REF( ppNewP ) = (countT)pSoul ;
                        }
                        break ;
                    }
                    default : { __( idType ) ; break ; }
                }
            }
        }
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012027.stackc.newplatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012028.stackc.operator_call BEGIN
#define DDNAME       "3func.36012028.stackc.operator_call"
#define DDNUMB      (countT)0x36012028
#define IDFILE      (countT)0xed6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150028.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cb20104.1.1.0.html\"\>cb20104:  WAKEsHOW( "example.simplest.func.1150028.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals psttP
 1 indicates that psttP was found at the top of the stack
 2 indicates that psttP was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 psttP
  the value to be searched for
 pSubtractFP
  can be 0
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const strokeS* const psttP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , psttP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012028.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012029.stackc.operator_call BEGIN
#define DDNAME       "3func.36012029.stackc.operator_call"
#define DDNUMB      (countT)0x36012029
#define IDFILE      (countT)0xed7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150029.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.db20104.1.1.0.html\"\>db20104:  WAKEsHOW( "example.simplest.func.1150029.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c2P
 1 indicates that c2P was found at the top of the stack
 2 indicates that c2P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c2P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count2S& c2P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c2P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012029.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202a.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202a.stackc.operator_call"
#define DDNUMB      (countT)0x3601202a
#define IDFILE      (countT)0xed8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.eb20104.1.1.0.html\"\>eb20104:  WAKEsHOW( "example.simplest.func.115002a.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c3P
 1 indicates that c3P was found at the top of the stack
 2 indicates that c3P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c3P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count3S& c3P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c3P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202a.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202b.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202b.stackc.operator_call"
#define DDNUMB      (countT)0x3601202b
#define IDFILE      (countT)0xed9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fb20104.1.1.0.html\"\>fb20104:  WAKEsHOW( "example.simplest.func.115002b.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c4P
 1 indicates that c4P was found at the top of the stack
 2 indicates that c4P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c4P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count4S& c4P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c4P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202b.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202c.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202c.stackc.operator_call"
#define DDNUMB      (countT)0x3601202c
#define IDFILE      (countT)0xeda


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0c20104.1.1.0.html\"\>0c20104:  WAKEsHOW( "example.simplest.func.115002c.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c5P
 1 indicates that c5P was found at the top of the stack
 2 indicates that c5P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c5P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count5S& c5P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c5P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202c.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202d.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202d.stackc.operator_call"
#define DDNUMB      (countT)0x3601202d
#define IDFILE      (countT)0xedb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1c20104.1.1.0.html\"\>1c20104:  WAKEsHOW( "example.simplest.func.115002d.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c6P
 1 indicates that c6P was found at the top of the stack
 2 indicates that c6P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c6P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count6S& c6P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c6P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202d.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202e.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202e.stackc.operator_call"
#define DDNUMB      (countT)0x3601202e
#define IDFILE      (countT)0xedc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2c20104.1.1.0.html\"\>2c20104:  WAKEsHOW( "example.simplest.func.115002e.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c7P
 1 indicates that c7P was found at the top of the stack
 2 indicates that c7P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c7P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count7S& c7P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c7P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202e.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202f.stackc.operator_call BEGIN
#define DDNAME       "3func.3601202f.stackc.operator_call"
#define DDNUMB      (countT)0x3601202f
#define IDFILE      (countT)0xedd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115002f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3c20104.1.1.0.html\"\>3c20104:  WAKEsHOW( "example.simplest.func.115002f.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals c8P
 1 indicates that c8P was found at the top of the stack
 2 indicates that c8P was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 c8P
  the value to be searched for
 pSubtractFP
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const count8S& c8P , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &c8P , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601202f.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012030.stackc.topf BEGIN
#define DDNAME       "3func.36012030.stackc.topf"
#define DDNUMB      (countT)0x36012030
#define IDFILE      (countT)0xede


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$topF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150030.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d230104.1.1.0.html\"\>d230104:  WAKEsHOW( "example.simplest.func.1150030.stackC.topF" )\</A\>
evaluates to a reference to the countT object at the top of the stack
if the stack is empty, evaluates to a countT object local to this stackC object
 this static object is shared by all threads and calls to this function
this function is equivalent to stackC::operator[] with argument == 1
 example: myStack[ 1 ] is equivalent to myStack.topF(
this function is very fast
it is optimized for speed, does not check for errors, and does not perform the standard overhead functionality
it is also not serialized
 in a multithreaded app, it is possible to cause an access violation by calling this function on one thread while removing the last item on the stack on another thread
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
*/
/**/

/*1*/countT& stackC::topF( tinS& tinP )/*1*/
{
    SCOOP

    _INbATONsTACKc_
    LATHrEF

    countT* prc = (countT*)pbnu ;
    if( tinP.fingerprint ) ;
    if( ppTop )
    {
        adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppTop ) ;
        prc = &PLATE_countT_REF( ppTop ) ;
    }
    _OUTbATONsTACKc_

    return *prc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012030.stackc.topf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012031.stackc.waitf BEGIN
#define DDNAME       "3func.36012031.stackc.waitf"
#define DDNUMB      (countT)0x36012031
#define IDFILE      (countT)0xedf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$waitF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150031.1.0.html\"\>definition\</A\>
this cannot be used unless bSgnP was set when the stackC object was constructed
waits for new plates to be pushed onto the stack
 when a plate is added to the stack, this function returns
for normal applications, do the following, in the order indicated
 myStack.waitF( tinP ) ;
 myStack.grabF( tinP , TAG( TAGiDnULL ) ) ;
 <traverse or remove all plates in myStack>
 myStack.ungrabF( tinP ) ;
*/

/**/
/*1*/voidT stackC::waitF( tinS& tinP )/*1*/
{
    SCOOP
    if( third ) return ;
    __Z( pSgnEvent ) ;
    if( third ) return ;

    _INsTACKc_

    cWaitingForEvent ++ ;
    pSgnEvent->waitF( tinP ) ;
    cWaitingForEvent -- ;

    _OUTsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012031.stackc.waitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012032.stackc.operator_call BEGIN
#define DDNAME       "3func.36012032.stackc.operator_call"
#define DDNUMB      (countT)0x36012032
#define IDFILE      (countT)0xee0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150034.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::operator () ( const nicNameC& nicNameP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( idType && idType - ifcSTACKtYPE_PTR_nicNameC && idType - ifcSTACKtYPE_nicNameC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    if( idType == ifcSTACKtYPE_nicNameC ) sinkF( tinP , idSlot ,  nicNameP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;
    else                                  sinkF( tinP , idSlot , &nicNameP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012032.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012033.stackc.sinkf BEGIN
#define DDNAME       "3func.36012033.stackc.sinkf"
#define DDNUMB      (countT)0x36012033
#define IDFILE      (countT)0xee1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150035.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const nicNameC* const pNicNameP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pNicNameP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtract_nicNameC_F ;
    sinkF( tinP , idSlotP , (countT)pNicNameP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012033.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012034.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012034.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012034
#define IDFILE      (countT)0xee2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150036.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( nicNameC*& pNicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pNicNameP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012034.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012035.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012035.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012035
#define IDFILE      (countT)0xee3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150037.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const nicNameC* const pNicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        __Z( pNicNameP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pNicNameP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012035.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012036.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012036.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012036
#define IDFILE      (countT)0xee4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150039.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const soulC* const pSoulP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        if( idType && idType != ifcSTACKtYPE_PTR_soulC ) { __( idType ) ; }
        __Z( pSoulP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pSoulP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012036.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012037.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012037.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012037
#define IDFILE      (countT)0xee5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115003a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( soulC*& pSoulP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_soulC ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pSoulP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012037.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012038.stackc.sinkf BEGIN
#define DDNAME       "3func.36012038.stackc.sinkf"
#define DDNUMB      (countT)0x36012038
#define IDFILE      (countT)0xee6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115003b.1.0.html\"\>definition\</A\>
*/
/**/countT subtract_soulC_F( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
        if( !c1P || !c2P ) return 0 ;
    }

    if( tinP.fingerprint && pEther && c3P ) ;
    return *(soulC*)c1P - *(soulC*)c2P ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const soulC* const pSoulP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pSoulP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_soulC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtract_soulC_F ;
    sinkF( tinP , idSlotP , (countT)pSoulP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012038.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012039.stackc.operator_call BEGIN
#define DDNAME       "3func.36012039.stackc.operator_call"
#define DDNUMB      (countT)0x36012039
#define IDFILE      (countT)0xee7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115003c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::operator () ( soulC& soulP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , &soulP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012039.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203a.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601203a.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601203a
#define IDFILE      (countT)0xee8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115003d.1.0.html\"\>definition\</A\>
no plates are removed
 in this sense this overload is inappropriate since all of the other overloads of >> remove a plate
 it is named this in order to correspond to <<( soulC& soulP ), which adds plates
 to achieve the normal function (removal of plates), call me and then call purgeF
*/
/**/

/*1*/baseSoilXxxxC& stackC::operator >>( soulC& soulP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    _INbATONsTACKc_

    switch( idType )
    {
        case ifcSTACKtYPE_countT       :
        case ifcSTACKtYPE_sCountT      :
        case ifcSTACKtYPE_measureT     :
        case ifcSTACKtYPE_nicNameC     :
        case ifcSTACKtYPE_timeS        :
        case ifcSTACKtYPE_BLOB         :
        case ifcSTACKtYPE_PTR_nicNameC :
        case ifcSTACKtYPE_PTR_count2S  :
        case ifcSTACKtYPE_PTR_count3S  :
        case ifcSTACKtYPE_PTR_count4S  :
        case ifcSTACKtYPE_PTR_count5S  :
        case ifcSTACKtYPE_PTR_count6S  :
        case ifcSTACKtYPE_PTR_count7S  :
        case ifcSTACKtYPE_PTR_count8S  :
        {
            ZE( byteT* , pbi ) ;
            countT cbi = 5 * sizeof( countT ) ; //ASSUME: sizeof( flagsT ) == sizeof( countT )
                 if( idType == ifcSTACKtYPE_countT       || idType == ifcSTACKtYPE_sCountT      || idType == ifcSTACKtYPE_measureT ) cbi += cPlates * sizeof( countT ) ;
            else if( idType == ifcSTACKtYPE_nicNameC     || idType == ifcSTACKtYPE_PTR_nicNameC                                    ) cbi += cPlates * processGlobal1I.cb_nicNameC_ ;
            else if( idType == ifcSTACKtYPE_timeS                                                                                  ) cbi += cPlates * sizeof( timeS ) ;
            else if( idType == ifcSTACKtYPE_BLOB )
            {
                if( cbData ) cbi += cPlates * cbData ;
                else
                {
                    plateS* ppi = ppTop ;
                    while( ppi )
                    {
                        cbi += sizeof( countT ) + PLATE_countT_REF( ppi ) ;
                        ppi = ppi->ppD ;
                    }
                }
            }
            else if( idType >= ifcSTACKtYPE_PTR_count2S  && idType <= ifcSTACKtYPE_PTR_count8S                                     ) cbi += cPlates * sizeof( countT ) * ( idType + 2 - ifcSTACKtYPE_PTR_count2S ) ;
            else __1
            third.newF( tinP , LF , pbi , cbi ) ; ___BITScT( pbi , 0xe0f ) ;

            if( pbi )
            {
                ZE( countT , off ) ;
                *( countT* )( pbi + off ) = flags        ; off += sizeof( countT ) ; //ASSUME: sizeof( flagsT ) == sizeof( countT )
                *( countT* )( pbi + off ) = cPlates      ; off += sizeof( countT ) ;
                *( countT* )( pbi + off ) = idType       ; off += sizeof( countT ) ;
                *( countT* )( pbi + off ) = cbData       ; off += sizeof( countT ) ;
                *( countT* )( pbi + off ) = flagsState   ; off += sizeof( countT ) ; //ASSUME: sizeof( flagsT ) == sizeof( countT )

                plateS* ppi = F(flags) & flSTACKc_FIFO ? ppTop : ppBottom ;
                while( ppi )
                {
                    __( off >= cbi ) ;
                    if( !third )
                    {
                        if( idType == ifcSTACKtYPE_countT || idType == ifcSTACKtYPE_sCountT || idType == ifcSTACKtYPE_measureT )
                        {
                            *(countT*)( pbi + off ) = PLATE_countT_REF( ppi ) ;
                            off += sizeof( countT ) ;
                        }
                        else if( idType == ifcSTACKtYPE_BLOB )
                        {
                            if( cbData )
                            {
                                thirdC::c_memcpyIF( tinP , (byteT*)( pbi + off ) , PLATE_byteT_PTR( ppi ) , cbData ) ;
                                off += cbData ;
                            }
                            else
                            {
                                countT cbPlateData = sizeof( countT ) + PLATE_countT_REF( ppi ) ;
                                thirdC::c_memcpyIF( tinP , (byteT*)( pbi + off ) , PLATE_byteT_PTR( ppi ) , cbPlateData ) ;
                                off += cbPlateData ;
                            }
                        }
                        else if( idType == ifcSTACKtYPE_PTR_nicNameC || idType == ifcSTACKtYPE_nicNameC || idType == ifcSTACKtYPE_timeS || ( idType >= ifcSTACKtYPE_PTR_count2S && idType <= ifcSTACKtYPE_PTR_count8S ) ) //ASSUME: nicNameC AND timeS AND count2S count3S count4S count5S count6S count7S count8S MEMORY IMAGE IS A SEQUENCE OF countT OBJECTS
                        {
                            if( idType != ifcSTACKtYPE_nicNameC && idType != ifcSTACKtYPE_timeS ) { __( !PLATE_countT_REF( ppi ) ) ; }

                            if( PLATE_countT_REF( ppi ) || idType == ifcSTACKtYPE_nicNameC || idType == ifcSTACKtYPE_timeS )
                            {
                                ZE( countT , ccToDo ) ;
                                switch( idType )
                                {
                                    case    ifcSTACKtYPE_nicNameC     :
                                    case    ifcSTACKtYPE_PTR_nicNameC : ccToDo = processGlobal1I.cb_nicNameC_ / sizeof( countT ) ;
                                    case    ifcSTACKtYPE_timeS        : ccToDo = sizeof( timeS ) / sizeof( countT ) ;
                                    default                           : ccToDo = idType + 2 - ifcSTACKtYPE_PTR_count2S ;
                                }

                                countT* pcv = idType == ifcSTACKtYPE_nicNameC || idType == ifcSTACKtYPE_timeS ? (countT*)PLATE_byteT_PTR( ppi ) : (countT*)PLATE_countT_REF( ppi ) ;
                                for( countT off2 = 0 ; off2 < ccToDo ; off2 ++ )
                                {
                                    *(countT*)( pbi + off ) = pcv[ off2 ] ;
                                    off += sizeof( countT ) ;
                                }
                            }
                        }
                        else __1
                        ppi = F(flags) & flSTACKc_FIFO ? ppi->ppD : ppi->ppU ;
                    }
                }

                soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pbi , cbi ) ;
            }
            third.delF( tinP , pbi ) ;

            break ;
        }
        case ifcSTACKtYPE_PTR_plateC :
        {
            etherC* pEther = third.third_pEtherContainsMe_F() ;
            __Z( pEther ) ;
            if( pEther )
            {
                ZE( soulC* , psEnv ) ;
                (*pEther)( tinP , psEnv , TAG( TAGiDnULL ) ) ;
                if( psEnv )
                {
                    plateS* ppci = F(flags) & flSTACKc_FIFO ? ppTop : ppBottom ;
                    while( ppci )
                    {
                        plateC* pCap = (plateC*)PLATE_countT_REF( ppci ) ;
                        if( pCap ) *pCap >> *psEnv ; //NOTE THAT INFO IS LOST WHEN PLATE IS NULL; WHEN SHIFTING LEFT, WILL NOT KNOW TO CREATE A NULL PLATE
                        ppci = F(flags) & flSTACKc_FIFO ? ppci->ppD : ppci->ppU ;
                    }

                    soulP << *psEnv ;
                }
                (*pEther)( tinP , psEnv ) ;
            }

            break ;
        }
        case ifcSTACKtYPE_PTR_strokeS :
        {
            etherC* pEther = third.third_pEtherContainsMe_F() ;
            __Z( pEther ) ;
            if( pEther )
            {
                ZE( soulC* , psEnv ) ;
                (*pEther)( tinP , psEnv , TAG( TAGiDnULL ) ) ;
                if( psEnv )
                {
                    plateS* ppci = F(flags) & flSTACKc_FIFO ? ppTop : ppBottom ;
                    while( ppci )
                    {
                        strokeS* psttw = (strokeS*)PLATE_countT_REF( ppci ) ;
                        __Z( psttw ) ;
                        if( psttw ) *psEnv << psttw ; //LOADS *psEnv WITH EXPORTABLE RENDERING OF psttw

                        ppci = F(flags) & flSTACKc_FIFO ? ppci->ppD : ppci->ppU ;
                    }

                    soulP << *psEnv ;
                }
                (*pEther)( tinP , psEnv ) ;
            }

            break ;
        }
        case ifcSTACKtYPE_PTR_soulC :
        {
            //U::
            static countT idInLath ;
            countT idIn = 1 + incv02AM( idInLath ) ;
            if( idIn == 2 )
            {
                countT foo = 2 ;
            }

            countT cbi = 2 * sizeof( flagsT ) + 3 * sizeof( countT ) ;
            {
                plateS* ppci = F(flags) & flSTACKc_FIFO ? ppTop : ppBottom ;
                while( ppci )
                {
                    soulC* pso = (soulC*)PLATE_countT_REF( ppci ) ;
                    __Z( pso ) ;
                    if( pso )
                    {
                        const byteT* pbs = *pso ;
                        __Z( pbs ) ;
                        
                        if( pbs )
                        {
                            __( getNegAM( ((countT*)pbs)[ 0 ] ) - FINGERnEG_SOULc ) ;
                            __( ((countT*)pbs)[ 1 ] - 1                 ) ;
                            cbi += 3 * sizeof( countT ) + ((countT*)pbs)[ 2 ] ;
                        }
                    }

                    ppci = F(flags) & flSTACKc_FIFO ? ppci->ppD : ppci->ppU ;
                }
            }
            ZE( byteT* , pbi ) ;
            third.newF( tinP , LF , pbi , cbi ) ; ___BITScT( pbi , 0xe0d ) ;
            if( pbi )
            {
                byteT* const pbe = pbi + cbi ;

                byteT* pbc = pbi ;
                *(flagsT*)pbc = flags        ; pbc += sizeof( flagsT ) ;
                *(countT*)pbc = cPlates      ; pbc += sizeof( countT ) ;
                *(countT*)pbc = idType       ; pbc += sizeof( countT ) ;
                *(countT*)pbc = cbData       ; pbc += sizeof( countT ) ;
                *(flagsT*)pbc = flagsState   ; pbc += sizeof( flagsT ) ;

                plateS* ppci = F(flags) & flSTACKc_FIFO ? ppTop : ppBottom ;
                while( ppci )
                {
                    soulC* pso = (soulC*)PLATE_countT_REF( ppci ) ;
                    __Z( pso ) ;
                    if( pso )
                    {
                        const byteT* pbs = *pso ;
                        __Z( pbs ) ;
                        __( pbe <= pbc ) ;
                        if( !third )
                        {
                            countT cbc = 3 * sizeof( countT ) + ((countT*)pbs)[ 2 ] ;
                            __( pbe < pbc + cbc ) ;
                            third.c_memcpyIF( tinP , pbc , pbs , cbc ) ;
                            pbc += cbc ;
                        }
                    }

                    ppci = F(flags) & flSTACKc_FIFO ? ppci->ppD : ppci->ppU ;
                }

                soulP.shiftLeftF( tinP , ifcIDtYPEsOULiTEM_byteTptr , pbi , cbi ) ;
            }
            third.delF( tinP , pbi ) ;

            break ;
        }
        default : __1
    }

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203a.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203b.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601203b.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601203b
#define IDFILE      (countT)0xee9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115003d.1.0.html\"\>definition\</A\>
no plates are removed
 in this sense this overload is inappropriate since all of the other overloads of >> remove a plate
 it is named this in order to correspond to <<( soulC& soulP ), which adds plates
 to achieve the normal function (removal of plates), call me and then call purgeF
*/
/**/

/*1*/const baseSoilXxxxC& stackC::operator >>( soulC& soulP ) const/*1*/
{
    TINSL
    SCOOP

    //CANNOT SERIALIZE const INSTANCE, SO DON'T CALL ME
    BLAMMO

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203b.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203c.stackc.ctf BEGIN
#define DDNAME       "3func.3601203c.stackc.ctf"
#define DDNUMB      (countT)0x3601203c
#define IDFILE      (countT)0xeea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctF.0.html\"\>instances\</A\>
\<A HREF=\"5.115003f.1.0.html\"\>definition\</A\>
note that pSgnEvent is not given when i load from pSoulP
*/
/**/

/*1*/voidT stackC::ctF( tinS& tinP , soulC* pSoulP )/*1*/
{
    SCOOP
    // ALL CONSTRUCTORS MUST DO THIS, TO ENSURE THAT THE DEFAULT subtractF FOR sinkF WORKS PROPERLY
    { countT cbs = sizeof( count8S ) ; __( cbs != 8 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count7S ) ; __( cbs != 7 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count6S ) ; __( cbs != 6 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count5S ) ; __( cbs != 5 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count4S ) ; __( cbs != 4 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count3S ) ; __( cbs != 3 * sizeof( countT ) ) ; }
    { countT cbs = sizeof( count2S ) ; __( cbs != 2 * sizeof( countT ) ) ; }

    _INbATONsTACKc_

    __( F(flags) & flSTACKc_COPY && !idType ) ;
    __( !pBaton && !( F(flags) & flSTACKc_DOnOTsERIALIZE ) ) ;

    if( pLeverLathRef )
    {
        flagsT flagsSwitch = flSTACKc_null ;
        if( F(flags) & flSTACKc_DOnOTsERIALIZE            ) flagsSwitch |= flSTACKc_DOnOTsERIALIZE ;
        if( F(flags) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) flagsSwitch |= flSTACKc_ALLOWmULTIPLEuNSERIALIZED ;

        pSw_ppCursor  = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flagsSwitch , *pLeverLathRef ) ; ___CT( pSw_ppCursor  ) ;
        pSw_idCursor  = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flagsSwitch , *pLeverLathRef ) ; ___CT( pSw_idCursor  ) ;
        pSw_ppLathRef = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flagsSwitch , *pLeverLathRef ) ; ___CT( pSw_ppLathRef ) ;
        pSw_idLathRef = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flagsSwitch , *pLeverLathRef ) ; ___CT( pSw_idLathRef ) ;
    }

    if( cbData ) //U::PROVIDE A pbnu FOR THE CASE OF VARYING LENGTH BLOBS
    {
        third.newF( tinP , LF , pbnu , cbData ) ; ___CT( pbnu ) ;
        third.c_memsetIF( tinP , pbnu , cbData ) ;
    }

    if( pSoulP ) operator <<( *pSoulP ) ;

    if( F(flags) & ( flSTACKc_GIVEsIGNnEWpLATE | flSTACKc_GIVEsIGNdELpLATE ) )
    {
        pSgnEvent = new( 0 , tinP , LF ) signC( tinP , TAG( TAGiDnULL ) ) ; ___CT( pSgnEvent ) ; //U:: SEPARATE LINE TO FIND A BUG
    }

    if( F(flags) & flSTACKc_XRAY )
    {
        third.newF( tinP , LF , *(byteT**)&pXray , sizeof( xrayC ) ) ; ___CT( pXray ) ;
        new( 0 , tinP , (byteT*)pXray , sizeof( xrayC ) ) xrayC( tinP , F(flags) & flSTACKc_FIFO ? flXRAY_FIFO : flXRAY_null , sizeof( plateS ) + cbData ) ;
    }

    __Z( idType ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203c.stackc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203d.stackc.stackc BEGIN
#define DDNAME       "3func.3601203d.stackc.stackc"
#define DDNUMB      (countT)0x3601203d
#define IDFILE      (countT)0xeeb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150041.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC::stackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , soulC& soulP , const countT idGrabLayerP , countT* pLeverLathRefP , const osTextT* const postNameP , batonC* const pBatonP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_stackC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
pBaton
(
    pBatonP
        ? pBatonP
        : ( new( 0 , tinP , LF ) batonC( tinP , TAG( TAGiDnULL ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) )
        //: new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER )
) ,
bDoNotDeleteBaton( !!pBatonP ) ,
cPlates( 0 ) ,
cPlatesSnap( 0 ) ,
third( thirdP ) ,
poop( third ) ,
postOsFile( 0 ) ,
ppTop( 0 ) ,
ppCursorDefault( 0 ) ,
idCursorDefault( 0 ) ,
ppLathRefDefault( 0 ) ,
idLathRefDefault( 0 ) ,
pSw_ppCursor(  0 ) ,
pSw_idCursor(  0 ) ,
pSw_ppLathRef( 0 ) ,
pSw_idLathRef( 0 ) ,
ppBottom( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
flags( 0 ) ,
idType( 0 ) ,
bUp( 0 ) ,
cWaitingForEvent( 0 ) ,
pSgnEvent( 0 ) ,
pbnu( 0 ) ,
flagsState( flSTACKsTATE_null ) ,
ranUni( tinP ) ,
pCbF( 0 ) ,
cTabs( 0 ) ,
ppTab( 0 ) ,
pcTabIdSlot( 0 ) ,
cTabAge( 0 ) ,
cbData( 0 ) ,
bDying( 0 ) ,
pXray( 0 ) ,
pLeverLathRef( pLeverLathRefP ) ,
osTidOwner( 0 )
{
    ___CT( pBaton ) ;

    SCOOP
    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        thirdP.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    if( pBatonP ) { ___BITScT( pBaton , 0xe18 ) ; }

    _INbATONsTACKc_
    ctF( tinP , &soulP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203d.stackc.stackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203e.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.3601203e.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x3601203e
#define IDFILE      (countT)0xeec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150042.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const byteT* const pbP )/*1*/
{
    //CANNOT USE TINSL BECAUSE I AM USED IMPLICITLY WITHIN TINSL
    //TINSL
    //SCOOP
    //IFbEcAREFUL
    //{
    //    if( third ) return *this ;
    //    __( idType && idType != ifcSTACKtYPE_PTR_byteT && idType != ifcSTACKtYPE_BLOB ) ;
    //    __Z( pbP ) ;
    //    if( third ) return *this ;
    //}

    if( !( idType && idType != ifcSTACKtYPE_PTR_byteT && idType != ifcSTACKtYPE_BLOB ) /*&& pbP*/ ) //U::DOES NOT TEST pbP NOW BECAUSE NULL IS ALLOWED FOR BLOB; ANYWAY WANT THE TEST TO BE BELOW THE WRAPPER
    {
        //IN_E
        *this << (countT)pbP ;
        //OUT
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203e.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203f.stackc.sinkf BEGIN
#define DDNAME       "3func.3601203f.stackc.sinkf"
#define DDNUMB      (countT)0x3601203f
#define IDFILE      (countT)0xeed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150043.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const byteT* const pbP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    if( third ) return ;
    __( idSlotP ) ;
    __Z( pbP ) ;
    FV( flSTACKsINK , flagsP ) ;
    __( idType && idType != ifcSTACKtYPE_PTR_byteT && idType != ifcSTACKtYPE_BLOB ) ;
    __( F(flags) & flSTACKc_XRAY ) ;
    if( third ) return ;

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = idType == ifcSTACKtYPE_PTR_byteT ? subtractByteStringsF : subtractBlobsF ;
    sinkF( tinP , idSlotP , (countT)pbP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601203f.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012040.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012040.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012040
#define IDFILE      (countT)0xeee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
using me for blob stacks is bad coding style unless you need copies of the blobs
 use downF instead and then let the destructor d elete the plates, or call purgeF
 when i am called, i cause a copy to be made for you
\<A HREF=\"5.1150044.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( byteT*& pbP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType != ifcSTACKtYPE_PTR_byteT && idType != ifcSTACKtYPE_BLOB ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pbP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012040.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012041.stackc.operator_call BEGIN
#define DDNAME       "3func.36012041.stackc.operator_call"
#define DDNUMB      (countT)0x36012041
#define IDFILE      (countT)0xeef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150045.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::operator () ( const byteT* const pbP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , pbP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;
    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012041.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012042.stackc.insertf BEGIN
#define DDNAME       "3func.36012042.stackc.insertf"
#define DDNUMB      (countT)0x36012042
#define IDFILE      (countT)0xef0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$insertF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150047.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0c40104.1.1.0.html\"\>0c40104:  WAKEsHOW( "example.simplest.func.1150047.stackC.insertF" )\</A\>
inserts a new item into a stack at position idP or adjacent to the item most recently referenced
 when the most recently referenced item gives the insertion point, behavior depends upon the flSTACKc_FIFO flag
  flSTACKc_FIFO = 1: the new item is inserted immediately below the referenced item
  flSTACKc_FIFO = 0: the new item is inserted immediately above the referenced item
arguments
 tinP
 valueP
  must not be 0 unless i was configured with flSTACKc_ALLOWzE
  valueP must really be of the type that is declared for it with flagsP
   examples
    if ifcSTACKtYPE_BLOB and cbData is not 0 then valueP must contain the address of cbData readable bytes
    if ifcSTACKtYPE_BLOB and cbData is     0 then valueP must contain the address of readable bytes that begin with a length prefix of size sizeof( countT )
 idTypeP
  must equal the idTypeP that i was configured with when i was constructed
  impotence will occur if idType is not the expected type
  this parameter is not used in the body of my definition
 idP
  specifies the position of the cursor plate at which the insertion is to occur
  if idP > 0 then the new plate will be above the cursor plate
   the new plate will become the plate at idP
   special case: idP == 1: this is permitted even if cPlates is 0
   application: use idP == 1 to push a plate onto the top of a fifo stack
  if idP < 0 then the new plate will be below the cursor plate
   the new plate will become the plate at cPlates + 1 - idP
    using the new value of cPlates
   special case: idP == -1: this is permitted even if cPlates is 0
   application: use idP == -1 to push a plate onto the bottom of a lifo stack
  1-based: idP == 0 has a special meaning
   if idP == 0 then the new item will be inserted immediately above the plate whose value was most recently referenced
   i can be called with idP == 0 before any plate has been referenced
    if this occurs, my behavior is exactly like operator <<(...)
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/voidT stackC::insertF( tinS& tinP , const countT valueP , const countT idTypeP , countT idP , const boolT bOtherWayP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return ;
        __( !( F(flags) & flSTACKc_ALLOWzE ) && !valueP ) ;
        __( idTypeP - idType ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_

    CURSOR

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::

    LATHrEF


    if( !POOP )
    {
        if( !( F(flagsState) & flSTACKsTATE_SHIFTlEFTuSED ) ) flagsState |= flSTACKsTATE_SHIFTlEFTuSED ;

        if( !cPlates ) operator << ( valueP ) ;
        else
        {
            plateS* ppc = pPlateF( tinP , idP ) ;
            if( idP )
            {
                boolT bAbove = !( F(flags) & flSTACKc_FIFO ) ;
                if( bOtherWayP ) bAbove = !bAbove ;

                ZE( plateS* , ppNew ) ;
                newPlateF( tinP , ppNew , valueP ) ;
                adjustRefsF( tinP , idP , bAbove ? ifcIDaCTIONsTACKaDJUSTrEFS_NEWaBOVE : ifcIDaCTIONsTACKaDJUSTrEFS_NEWbELOW , ppNew ) ;

                if( bAbove )
                {
                    ppNew->ppD = ppc ;
                    if( !ppc->ppU )
                    {
                        __( ppc != ppTop ) ;
                        ppTop = ppc->ppU = ppNew ;
                    }
                    else
                    {
                        __( ppc != ppc->ppU->ppD ) ;
                        ppNew->ppU = ppc->ppU ;
                        ppc->ppU = ppc->ppU->ppD = ppNew ;
                    }
                }
                else
                {
                    ppNew->ppU = ppc ;
                    if( !ppc->ppD )
                    {
                        __( ppc != ppBottom ) ;
                        ppBottom = ppc->ppD = ppNew ;
                    }
                    else
                    {
                        __( ppc != ppc->ppD->ppU ) ;
                        ppNew->ppD = ppc->ppD ;
                        ppc->ppD = ppc->ppD->ppU = ppNew ;
                    }
                }
                cPlates ++ ;

                newTabsIfF( tinP , ppNew , 0 ) ;
                if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNnEWpLATE ) pSgnEvent->giveF( tinP ) ;
            }
        }
    }


    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012042.stackc.insertf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012043.stackc.downundof BEGIN
#define DDNAME       "3func.36012043.stackc.downundof"
#define DDNUMB      (countT)0x36012043
#define IDFILE      (countT)0xef1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$downUndoF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150048.1.0.html\"\>definition\</A\>
call me 3 times to negate the 3 most recent calls to downF
i assume that i have been called immediately after a downF call
i completely, with 1 exception, negate all effects on the stackC object of the most recent downF(...) call
 this function operates in the normal way with respect to maintaining the pointer to the most recently referenced plate
 normally, this function will evaluate to the plate that the prior to last downF call returned, so the reference will be unwound
 but if handleP is pointing to the top plate, there was no prior to last downF call, so i return 0
 in this case i do not reference any plate, so the reference is not unwound
 this is wad, but is inconvenient for code that would like me to be a "true undoer"
 code that depends upon me referring to a plate can handle this case
  test whether i return 0 to see whether i have referred to a plate
my behavior when not called immediately after a downF call has not been analyzed
 this illegal call might not cause impotence and might not be detected
the application must cast my value to a reference to the appropriate class when the data on each plate is not of size sizeof( countT )
 for example, if idType == ifcSTACKtYPE_nicNameC, my value stFoo[ 2 ] must be cast to *(nicNameC*)&stFoo[ 2 ]
 warning: code that fails to do this for ifcSTACKtYPE_nicNameC will work for IPv4 but will fail for IPv6 long values
*/
/**/

// CODE EXPLANATION
//
//  CONSIDER A SIMPLE DOWNWARD TRAVERSAL OF A stackC OBJECT
//  LET PLATE idLathI DENOTE THE MOST RECENT PLATE RETRIEVED
//  (NOTE THAT idLathI EQUALS THE NUMBER OF TIMES THAT downF HAS BEEN CALLED)
//  AT ANY TIME DURING A PURE DOWN TRAVERSAL, handleP POINTS TO PLATE idLathI+1, THE NEXT PLATE TO RETRIEVE
//  FOR EXAMPLE, WHEN idLathI IS 0, handleP IS 0, WHICH WOULD TELL downF TO RETRIEVE THE TOP PLATE (POSITION 1)
//  THE CODE COMMENTS DEPICT A PAIR OF id'S: idGot,idHandle
//  idGot IS THE ID OF THE PLATE WHOSE VALUE WAS JUST RETRIEVED
//  idHandle IS THE ID OF THE PLATE THAT handleP NOW POINTS TO
//
// MY DEFINITION EXPLICITLY CODES FOR ALL POSSIBLE CASES WHEN cPlates <= 2
// FOR cPlates > 2, THE CODE MUST DETECT WHEN ONLY 1 downF CALL HAS BEEN MADE

/*1*/countT& stackC::downUndoF( tinS& tinP , handleC& handleP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    _INbATONsTACKc_

    ZE( countT* , pv ) ;
                                                            //      ----2-OR-MORE-downF--   ----1-downF----------
                                                            //      PLATE        HANDLE     PLATE       HANDLE
                                                            //      RETRIEVED    AIMED AT   RETRIEVED   AIMED AT

    /*THE PRIOR       downF CALL*/                          //      idLathI-1     idLathI
    /*THE MOST RECENT downF CALL*/                          //      idLathI       idLathI+1

    if( cPlates < 2 ) { __( ~handleP ) ; }
    else if( cPlates == 2 )
    {
        if( ~handleP )                                       //                              1           2
            handleP = 0 ;                                   //                              0           0
        else                                                //                              2           0
        {
                   upF(   tinP , handleP ) ;                //                              2           1
                   upF(   tinP , handleP ) ;                //                              1           0
           pv   = &downF( tinP , handleP ) ;                //                              1           2
        }
    }
    else                                                    //      2            3          1           2
    {
                   upF(   tinP , handleP ) ;                //      3            2          2           1
                   upF(   tinP , handleP ) ;                //      2            1          1           0
        if( ~handleP ) pv = &downF( tinP , handleP ) ;       //      1            2          0           0
    }

    _OUTbATONsTACKc_

    return pv ? *pv : *(countT*)pbnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012043.stackc.downundof END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012044.stackc.randomf BEGIN
#define DDNAME       "3func.36012044.stackc.randomf"
#define DDNUMB      (countT)0x36012044
#define IDFILE      (countT)0xef2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150049.1.0.html\"\>definition\</A\>
i choose a plate randomly
 each of the plates is equally likely to be chosen
 the result of the wo'th call to me for a given stackC object is determined by the time that the stackC was constructed
  this time determines the seed that is used to construct the ranUniC object for the stackC
*/
/**/

/*1*/countT& stackC::randomF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
        __( idType == ifcSTACKtYPE_nicNameC ) ;
        __( idType == ifcSTACKtYPE_timeS    ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return *(countT*)pbnu ;
    }

    _INbATONsTACKc_
    countT& vv = operator[]( 1 + ranUni * cPlates ) ;
    _OUTbATONsTACKc_
    return vv ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012044.stackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012045.stackc.flagsf BEGIN
#define DDNAME       "3func.36012045.stackc.flagsf"
#define DDNUMB      (countT)0x36012045
#define IDFILE      (countT)0xef3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$flagsF.0.html\"\>instances\</A\>
\<A HREF=\"5.115004a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT stackC::flagsF( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return flags ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012045.stackc.flagsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012046.stackc.idtypef BEGIN
#define DDNAME       "3func.36012046.stackc.idtypef"
#define DDNUMB      (countT)0x36012046
#define IDFILE      (countT)0xef4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idTypeF.0.html\"\>instances\</A\>
\<A HREF=\"5.115004b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::idTypeF( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return idType ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012046.stackc.idtypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012047.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012047.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012047
#define IDFILE      (countT)0xef5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115004c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const nicNameC& nicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)&nicNameP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012047.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012048.stackc.sinkf BEGIN
#define DDNAME       "3func.36012048.stackc.sinkf"
#define DDNUMB      (countT)0x36012048
#define IDFILE      (countT)0xef6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115004d.1.0.html\"\>definition\</A\>
*/

/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const nicNameC& nicNameP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_nicNameC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtract_nicNameC_F ;
    sinkF( tinP , idSlotP , (countT)&nicNameP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012048.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012049.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012049.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012049
#define IDFILE      (countT)0xef7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115004e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( nicNameC& nicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    countT c_pNicName = (countT)&nicNameP ;
    *this >> c_pNicName ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012049.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204a.stackc.extractf BEGIN
#define DDNAME       "3func.3601204a.stackc.extractf"
#define DDNUMB      (countT)0x3601204a
#define IDFILE      (countT)0xef8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.115004f.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack
it is illegal to call me for an ifcSTACKtYPE_nicNameC or ifcSTACKtYPE_timeS stackC
arguments
 pbP
  can be 0
  if not 0 then must point to cbData bytes, which will receive the value of the extracted plate
 idP
  1-based: idP == 0 has a special meaning
   if idP == 0 then the plate whose value was most recently referenced will be extracted
   it is illegal to call this function with idP == 0 before using one of the other member functions to refer to an item on this stackC object
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/voidT stackC::extractF( byteT* const pbP , tinS& tinP , countT idP )/*1*/
{
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return ;
        if( F(flags) & flSTACKc_XRAY )
        {
            if( !idP ) ; //MUST VALIDATE LATER
            else if( F(flags) & flSTACKc_FIFO ) { __( idP != 1 && idP != - 1 ) ; }
            else                                { __( idP != 1               ) ; }
        }
        if( third ) return ;
    }

    _INbATONsTACKc_

    CURSOR

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::

    LATHrEF

    countT idSave = idP ;
    plateS* ppc = pPlateF( tinP , idP ) ;
    if( idP )
    {
        _IO_
        {
            _IO_
            adjustRefsF( tinP , idP , ifcIDaCTIONsTACKaDJUSTrEFS_DELETED ) ;
        }

        if( pbP )
        {
            _IO_
            switch( idType )
            {
                case ifcSTACKtYPE_BLOB :
                {
                    if( cbData ) third.c_memcpyIF( tinP , pbP , PLATE_byteT_PTR(  ppc ) , cbData ) ;
                    else         {  __1 } //U: SUPPORT VARIABLE LENGTH (LENGTH PREFIXED) BLOBS
                    break ;
                }
                case ifcSTACKtYPE_nicNameC : { *(nicNameC*)pbP = *(nicNameC*)PLATE_byteT_PTR(  ppc ) ; break ; }
                case ifcSTACKtYPE_timeS    : {    *(timeS*)pbP =    *(timeS*)PLATE_byteT_PTR(  ppc ) ; break ; }
                default                    : {   *(countT*)pbP =             PLATE_countT_REF( ppc ) ; break ; }
            }
        }

        if( F(flags) & flSTACKc_XRAY )
        {
            _IO_
            if( !idSave )
            {
                     if( ppc == ppTop    ) idSave =   1 ;
                else if( ppc == ppBottom ) idSave = - 1 ;
                else { __1 ; }
            }
        }

        cPlates -- ;
        if( ppBottom == ppc ) ppBottom = ppc->ppU ;
        if( ppTop    == ppc ) ppTop    = ppc->ppD ;
        if( ppc->ppD ) ppc->ppD->ppU = ppc->ppU ;
        if( ppc->ppU ) ppc->ppU->ppD = ppc->ppD ;

        {
            _IO_
            newTabsIfF( tinP , ppc , 1 ) ;
        }

        if( F(flags) & flSTACKc_XRAY )
        {
            _IO_
            pXray->freeF( tinP , idSave == - 1 ) ;
        }
        else
        {
            _IO_
            third.delF( tinP , (byteT*&)ppc ) ;
        }

        if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNdELpLATE ) pSgnEvent->giveF( tinP ) ;
    }

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204a.stackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204b.stackc.extractf BEGIN
#define DDNAME       "3func.3601204b.stackc.extractf"
#define DDNUMB      (countT)0x3601204b
#define IDFILE      (countT)0xef9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150050.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack
this function zees the internal cursor that is used to make operator [] speedy
arguments
 idP
  1-based: idP == 0 has a special meaning
   if idP == 0 then the plate whose value was most recently referenced will be extracted
   it is illegal to call this function with idP == 0 before using one of the other member functions to refer to an item on this stackC object
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/voidT stackC::extractF( tinS& tinP , nicNameC& nicNameP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( idType != ifcSTACKtYPE_nicNameC ) ;
        __NZ( nicNameP ) ;
        if( POOP ) return ;
    }

    _INbATONsTACKc_
    {
        _IO_
        extractF( (byteT*)&nicNameP , tinP , idP ) ;
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204b.stackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204c.stackc.randomf BEGIN
#define DDNAME       "3func.3601204c.stackc.randomf"
#define DDNUMB      (countT)0x3601204c
#define IDFILE      (countT)0xefa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150051.1.0.html\"\>definition\</A\>
i choose a plate randomly
 each of the plates is equally likely to be chosen
 the result of the wo'th call to me for a given stackC object is determined by the time that the stackC was constructed
  this time determines the seed that is used to construct the ranUniC object for the stackC
arguments
 tinP
 pbP
  must not be 0 unless ifcSTACKtYPE_BLOB
   ifcSTACKtYPE_BLOB: pbP can be either 0 or not 0
   if not 0 then must point to cbData writeable bytes
  must contain the address of cbData bytes
   these bytes will be assigned the value of the randomly selected plate
*/
/**/

/*1*/voidT stackC::randomF( tinS& tinP , byteT*& pbP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idType == ifcSTACKtYPE_BLOB && !cbData && !!pbP ) ;
        __( idType != ifcSTACKtYPE_BLOB            &&  !pbP ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    switch( idType )
    {
        case ifcSTACKtYPE_nicNameC         : {         *(nicNameC*)pbP =         *(nicNameC*)&operator[]( 1 + ranUni * cPlates ) ; break ; } // WE CAST TO A POINTER BECAUSE CASTING DIRECTLY TO         nicNameC& RESULTS IN A TEMPORARY countT OBJECT BEING USED
        case ifcSTACKtYPE_timeS            : {            *(timeS*)pbP =            *(timeS*)&operator[]( 1 + ranUni * cPlates ) ; break ; } // WE CAST TO A POINTER BECAUSE CASTING DIRECTLY TO            timeS& RESULTS IN A TEMPORARY countT OBJECT BEING USED
        case ifcSTACKtYPE_BLOB             :
        {
            countT& cd = operator[]( 1 + ranUni * cPlates ) ;
            if( !pbP ) { third.newF( tinP , LF , pbP , cbData ? cbData : sizeof( countT ) + cd ) ; ___BITScT( pbP , 0xe1f ) ; }
            third.c_memcpyIF( tinP , pbP , (byteT*)&cd , cbData ? cbData : sizeof( countT ) + cd ) ;

            break ;
        }
        default : { *(countT*)pbP = operator[]( 1 + ranUni * cPlates ) ; break ; }
    }
    _OUTbATONsTACKc_

    return ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204c.stackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204d.stackc.randomf BEGIN
#define DDNAME       "3func.3601204d.stackc.randomf"
#define DDNUMB      (countT)0x3601204d
#define IDFILE      (countT)0xefb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150052.1.0.html\"\>definition\</A\>
i choose a plate randomly
 each of the plates is equally likely to be chosen
 the result of the wo'th call to me for a given stackC object is determined by the time that the stackC was constructed
  this time determines the seed that is used to construct the ranUniC object for the stackC
arguments
 tinP
 nicNameP
  must be 0
  will be assigned the value of the randomly selected plate
*/
/**/

/*1*/voidT stackC::randomF( tinS& tinP , nicNameC& nicNameP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( nicNameP ) ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    byteT* pbn = (byteT*)&nicNameP ;
    randomF( tinP , pbn ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204d.stackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204e.stackc.cbdataf BEGIN
#define DDNAME       "3func.3601204e.stackc.cbdataf"
#define DDNUMB      (countT)0x3601204e
#define IDFILE      (countT)0xefc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cbDataF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150053.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::cbDataF( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return cbData ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204e.stackc.cbdataf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204f.stackc.randomf BEGIN
#define DDNAME       "3func.3601204f.stackc.randomf"
#define DDNUMB      (countT)0x3601204f
#define IDFILE      (countT)0xefd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150054.1.0.html\"\>definition\</A\>
i choose a plate randomly
 each of the plates is equally likely to be chosen
 the result of the wo'th call to me for a given stackC object is determined by the time that the stackC was constructed
  this time determines the seed that is used to construct the ranUniC object for the stackC
arguments
 tinP
 timeP
  must be 0
  will be assigned the value of the randomly selected plate
*/
/**/

/*1*/voidT stackC::randomF( tinS& tinP , timeS& timeP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( timeP ) ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    byteT* pbn = (byteT*)&timeP ;
    randomF( tinP , pbn ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601204f.stackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012050.stackc.extractf BEGIN
#define DDNAME       "3func.36012050.stackc.extractf"
#define DDNUMB      (countT)0x36012050
#define IDFILE      (countT)0xefe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150055.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack
this function zees the internal cursor that is used to make operator [] speedy
arguments
 idP
  1-based: idP == 0 has a special meaning
   if idP == 0 then the plate whose value was most recently referenced will be extracted
   it is illegal to call this function with idP == 0 before using one of the other member functions to refer to an item on this stackC object
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/voidT stackC::extractF( tinS& tinP , timeS& timeP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( idType != ifcSTACKtYPE_timeS ) ;
        __NZ( timeP ) ;
        if( POOP ) return ;
    }

    _INbATONsTACKc_
    {
        _IO_
        extractF( (byteT*)&timeP , tinP , idP ) ;
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012050.stackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012051.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012051.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012051
#define IDFILE      (countT)0xeff


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150056.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( timeS& timeP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    countT c_pTime = (countT)&timeP ;
    *this >> c_pTime ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012051.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012052.stackc.sinkf BEGIN
#define DDNAME       "3func.36012052.stackc.sinkf"
#define DDNUMB      (countT)0x36012052
#define IDFILE      (countT)0xf00


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150057.1.0.html\"\>definition\</A\>
*/

/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const timeS& timeP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_timeS ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtract_timeS_F ;
    sinkF( tinP , idSlotP , (countT)&timeP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012052.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012053.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012053.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012053
#define IDFILE      (countT)0xf01


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150058.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const timeS& timeP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)&timeP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012053.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012054.stackc.operator_call BEGIN
#define DDNAME       "3func.36012054.stackc.operator_call"
#define DDNUMB      (countT)0x36012054
#define IDFILE      (countT)0xf02


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150059.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::operator () ( const timeS& timeP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot ,  timeP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012054.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012055.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012055.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012055
#define IDFILE      (countT)0xf03


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115005a.1.0.html\"\>definition\</A\>
*/
/**/
/*1*//*voidT stackC::operator <<( soulC& soulP )*//*1*/

#include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.1900000e.stackC.loadSoulC.h"


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012055.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012056.stackc.sinkf BEGIN
#define DDNAME       "3func.36012056.stackc.sinkf"
#define DDNUMB      (countT)0x36012056
#define IDFILE      (countT)0xf04


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115005b.1.0.html\"\>definition\</A\>
*/
/**/
/*1*//*voidT stackC::sinkF( tinS& tinP , soulC& soulP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )*//*1*/

#define STACKcLOADsOULc_SINK

#include "\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\snip\1snip.1900000e.stackC.loadSoulC.h"

#undef  STACKcLOADsOULc_SINK


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012056.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012057.stackc.purgef BEGIN
#define DDNAME       "3func.36012057.stackc.purgef"
#define DDNUMB      (countT)0x36012057
#define IDFILE      (countT)0xf05


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$purgeF.0.html\"\>instances\</A\>
\<A HREF=\"5.115005c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::purgeF( tinS& tinP , countT cPlatesRetainP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    _INbATONsTACKc_

    if( cPlates < idCursorDefault || ( idCursorDefault && !ppCursorDefault ) ) { BLAMMO ; } //U::

    {
        ZE( countT , cPlatesCheck ) ;
        if( ppTop && ppTop->ppU ) { BLAMMO ; }
        if( ppBottom && ppBottom->ppD ) { BLAMMO ; }
        plateS* ppc = ppTop ;
        while( ppc )
        {
            cPlatesCheck ++ ;
            ppc = ppc->ppD ;
        }
        if( cPlatesCheck != cPlates ) { BLAMMO ; }
    }

    //CS:CODEsYNC: 115005c 115007d
    ZE( plateS** , ppDoomed ) ;
    ZE( countT   , cpDoomed ) ;
    if( cPlatesRetainP < cPlates )
    {
        if( cPlatesRetainP > cPlates ) cPlatesRetainP = cPlates ;
        cpDoomed = cPlates - cPlatesRetainP ;

        if( cpDoomed )
        {
            third.newF( tinP , LF , *(countT**)&ppDoomed , cpDoomed ) ; ___CT( ppDoomed ) ;
            if( ppDoomed )
            {
                for( countT off = 0 ; off < cpDoomed ; off ++ )
                {
                    adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_DELETED ) ;
                    ppDoomed[ off ] = ppTop ;
                    ppTop = ppTop->ppD ;
                    if( ppTop ) ppTop->ppU = 0 ;
                    else        ppBottom   = 0 ;
                    -- cPlates ;
                }
        
                flagsState = flSTACKsTATE_null ; //115005c 0050011 0010121: VERIFY THAT THIS MAKES SENSE FOR NEWLY DEFINED STATE FLAGS
            }
        }
    
        newTabsIfF( tinP , 0 , 0 ) ;
        third.delF( tinP , *(countT**)&ppTab ) ;
        third.delF( tinP , pcTabIdSlot ) ;
    }    

    //U::O: UNGRAB HERE

    if( ppDoomed )
    {
        for( countT off = 0 ; off < cpDoomed ; off ++ )
        {
            //if( F(flags) & flSTACKc_COPY )
            switch( idType )
            {
                case ifcSTACKtYPE_PTR_strokeS           : { strokeS*            pn =           (strokeS*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count2S           : { count2S*            pn =           (count2S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count3S           : { count3S*            pn =           (count3S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count4S           : { count4S*            pn =           (count4S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count5S           : { count5S*            pn =           (count5S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count6S           : { count6S*            pn =           (count6S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count7S           : { count7S*            pn =           (count7S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_count8S           : { count8S*            pn =           (count8S*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_nicNameC          : { nicNameC*           pn =          (nicNameC*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_plateC            : { plateC*             pn =            (plateC*)PLATE_countT_REF( ppDoomed[ off ] ) ;               DEL( pn )               ; break ; } //U::CONJ: WILL CALL THE BASE DT RATHER THAN THE DERIVED CLASS DT
                case ifcSTACKtYPE_PTR_byteT             : { byteT*              pn =             (byteT*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_countT            : { countT*             pn =            (countT*)PLATE_countT_REF( ppDoomed[ off ] ) ;               third.delF( tinP , pn ) ; break ; }
                case ifcSTACKtYPE_PTR_soulC             : { soulC*              pn =             (soulC*)PLATE_countT_REF( ppDoomed[ off ] ) ; etherC::etRockIF( tinP )( tinP , pn ) ; break ; }
                //U:: case ifcSTACKtYPE_handleC         : { handleC&            hh =         *(handleC*)&PLATE_countT_REF( ppDoomed[ off ] ) ; hh.closeIfF()                         ; break ; }
                case ifcSTACKtYPE_countT                :
                case ifcSTACKtYPE_sCountT               :
                case ifcSTACKtYPE_measureT              :
                case ifcSTACKtYPE_nicNameC              :
                case ifcSTACKtYPE_timeS                 :
                case ifcSTACKtYPE_BLOB                  :
                                                          { break ; }
                default                                 : { __( idType ) ; break ; } // ifcSTACKtYPE_ANY AND ifcSTACKtYPE_tableC WILL CAUSE IMPOTENCE IF THERE ARE ANY PLATES
            }
    
            if( F(flags) & flSTACKc_XRAY ) pXray->freeF( tinP ) ;
            else                           third.delF( tinP , *(countT**)&ppDoomed[ off ] ) ;
        }
        if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNdELpLATE ) pSgnEvent->giveF( tinP ) ;
    
        third.delF( tinP , *(countT**)&ppDoomed ) ;
    }
    
    //U::
    {
        ZE( countT , cPlatesCheck ) ;
        if( ppTop && ppTop->ppU ) { BLAMMO ; }
        if( ppBottom && ppBottom->ppD ) { BLAMMO ; }
        plateS* ppc = ppTop ;
        while( ppc )
        {
            cPlatesCheck ++ ;
            ppc = ppc->ppD ;
        }
        if( cPlatesCheck != cPlates ) { BLAMMO ; }
    }

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012057.stackc.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012058.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012058.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012058
#define IDFILE      (countT)0xf06


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.115005e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const measureT mP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_measureT ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << *(countT*)&mP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012058.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012059.stackc.sinkf BEGIN
#define DDNAME       "3func.36012059.stackc.sinkf"
#define DDNUMB      (countT)0x36012059
#define IDFILE      (countT)0xf07


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.115005f.1.0.html\"\>definition\</A\>
*/
/**/countT subtractMeasuresF( tinS& tinP , countT& pEther , countT& c1P , countT& c2P , countT& c3P )
{
    IFbEcAREFUL
    {
    }

    if( tinP.fingerprint && pEther && c3P ) ;
    measureT diff = *(measureT*)&c1P - *(measureT*)&c2P ;
    return diff > 0 ? 1 : ( diff < 0 ? - 1 : 0 ) ;
}

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const measureT mP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    if( third ) return ;
    __( idSlotP ) ;
    FV( flSTACKsINK , flagsP ) ;
    __( idType && idType - ifcSTACKtYPE_measureT ) ;
    __( F(flags) & flSTACKc_XRAY ) ;
    if( third ) return ;

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractMeasuresF ;
    sinkF( tinP , idSlotP , *(countT*)&mP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012059.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205a.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601205a.stackc.operator_shiftright"
#define DDNUMB      (countT)0x3601205a
#define IDFILE      (countT)0xf08


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150060.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator >> ( measureT& mP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType != ifcSTACKtYPE_measureT ) ;
        __( *(countT*)&mP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> *(countT*)&mP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205a.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205b.stackc.operator_call BEGIN
#define DDNAME       "3func.3601205b.stackc.operator_call"
#define DDNUMB      (countT)0x3601205b
#define IDFILE      (countT)0xf09


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150061.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT stackC::operator () ( const measureT mP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , mP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;
    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205b.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205c.stackc.extractf BEGIN
#define DDNAME       "3func.3601205c.stackc.extractf"
#define DDNUMB      (countT)0x3601205c
#define IDFILE      (countT)0xf0a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150062.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack
this function zees the internal cursor that is used to make operator [] speedy
it is illegal to call me for an ifcSTACKtYPE_nicNameC or ifcSTACKtYPE_handleC or ifcSTACKtYPE_timeS stackC
arguments
 idP
  1-based: idP == 0 has a special meaning
   if idP == 0 then the plate whose value was most recently referenced will be extracted
   it is illegal to call this function with idP == 0 before using one of the other member functions to refer to an item on this stackC object
  idP == 1 refers to the topmost (most recently added) item
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

//U: SUPPORT VARIABLE LEN BLOBS

/*1*/voidT stackC::extractF( tinS& tinP , byteT*& pbP , countT& cbP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( pbP ) ;
        __( cbP ) ;
        __( idType != ifcSTACKtYPE_BLOB ) ; //U::MIGHT ALSO WORK FOR TYPE PTRbYTE
        if( third ) return ;
    }
    
    _INbATONsTACKc_
    {
        _IO_
        cbP = cbData ;
        third.newF( tinP , LF , pbP , cbP + 1 ) ; ___CT( pbP ) ;
        if( pbP ) pbP[ cbP ] = 0 ;
        extractF( pbP , tinP , idP ) ;
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205c.stackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205d.stackc.flagsstatef BEGIN
#define DDNAME       "3func.3601205d.stackc.flagsstatef"
#define DDNUMB      (countT)0x3601205d
#define IDFILE      (countT)0xf0b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$flagsStateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150063.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/flagsT stackC::flagsStateF( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return flagsState ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205d.stackc.flagsstatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205e.stackc.extractnullsf BEGIN
#define DDNAME       "3func.3601205e.stackc.extractnullsf"
#define DDNUMB      (countT)0x3601205e
#define IDFILE      (countT)0xf0c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractNullsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150064.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::extractNullsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }
    
    _INbATONsTACKc_

    if( cPlates )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do if( !downF( tinP , hDown ) )
        {
            _IO_
            extractF( 0 , tinP ) ;
        }
        while( !third && ~hDown ) ;
    }

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205e.stackc.extractnullsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205f.stackc.newtabsiff BEGIN
#define DDNAME       "3func.3601205f.stackc.newtabsiff"
#define DDNUMB      (countT)0x3601205f
#define IDFILE      (countT)0xf0d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$newTabsIfF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150065.1.0.html\"\>definition\</A\>
i must not be called between the time that newPlateF is called and the time that the new plate is added to the chain
 call me after the new plate has been added to the chain
arguments
 tinP
 ppNewDelP
  the plate that has just been added or removed
*/
/**/

// pcTabIdSlot[ ii ] IS THE NUMBER OF PLATES AT OR ABOVE TAB ii, I.E. THE idSlot OF THE TABBED PLATE

/*1*/boolT stackC::newTabsIfF( tinS& tinP , plateS* ppNewDelP , const boolT bDelP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
    }

    _INbATONsTACKc_

    //validateF( tinP ) ; //U::REMOVE THIS WHEN CONFIDENT; THIS IS EXPENSIVE

    ZE( boolT , bMade ) ;
    if( !third && F(flagsState) & flSTACKsTATE_MAINTAINtABS )
    {
        _IO_
        if( !( ( ++ cTabAge ) % 0x10 ) || ( ppNewDelP && F(ppNewDelP->flags) & flPLATE_TAB ) ) // IF ppNewDelP IS MARKED AS A TAB THEN ppNewDelP MUST HAVE JUST BEEN REMOVED (IF ADDED, IT WOULD NOT HAVE THE FLAG YET)
        {
            _IO_
            bMade = 1 ; //EVEN IF I MAKE 0 TABS
            cTabAge = 0 ;
            countT cPlatesPerTab = 0x10 ;
            cTabs = cPlates / cPlatesPerTab ;
            third.delF( tinP , *(countT**)&ppTab ) ;
            third.delF( tinP , pcTabIdSlot ) ;
            if( cTabs )
            {
                _IO_
                {
                    _IO_
                    third.newF( tinP , LF , *(countT**)&ppTab , cTabs ) ; ___CT( ppTab ) ;
                }
                {
                    _IO_
                    third.newF( tinP , LF , pcTabIdSlot     , cTabs ) ; ___CT( pcTabIdSlot ) ;
                }
                {
                    _IO_
                    third.c_memsetIF( tinP , (byteT*)ppTab         , cTabs * sizeof( countT ) ) ;
                }
                {
                    _IO_
                    third.c_memsetIF( tinP , (byteT*)pcTabIdSlot , cTabs * sizeof( countT ) ) ;
                }
                if( ppTab && pcTabIdSlot )
                {
                    _IO_
                    ZE( countT , oTab ) ;
                    plateS* ppc = ppTop ;
                    ZE( plateS* , ppcLag ) ; //U::FOR DEBUGGING
                    ZE( countT , idSlot ) ;
                    while( ppc )
                    {
                        _IO_
                        if( !( ++ idSlot % cPlatesPerTab ) )
                        {
                            _IO_
                            ppc->flags |= flPLATE_TAB ;
                            ppTab[       oTab    ] = ppc ;
                            pcTabIdSlot[ oTab ++ ] = idSlot ;
                        }
                        else ppc->flags &= ~( F(flPLATE_TAB) ) ;
                        ppcLag = ppc ;
                        ppc = ppc->ppD ;
                    }
                    __( oTab - cTabs ) ; //OBSERVED 2004.05.26
                    if( third ) //U::TO DEBUG USING wdw
                    {
                        countT foo = 2 ;
                    }
                }
            }
        }
        else if( ppNewDelP )
        {
            _IO_
            plateS* ppc = ppNewDelP ;
            while( ppc && !( F(ppc->flags) & flPLATE_TAB ) ) ppc = ppc->ppD ;
            if( ppc )
            {
                _IO_
                ZE( boolT , bFound ) ;
                for( countT oTab = 0 ; oTab < cTabs ; oTab ++ )
                {
                    _IO_
                    if( ppTab[ oTab ] == ppc ) bFound = 1 ;
    
                    if( bFound )
                    {
                        _IO_
                        if( bDelP ) pcTabIdSlot[ oTab ] -- ;
                        else        pcTabIdSlot[ oTab ] ++ ;
                    }
                }
            }
        }
    }

    //validateF( tinP ) ; //U::REMOVE THIS WHEN CONFIDENT; THIS IS EXPENSIVE

    _OUTbATONsTACKc_
    return bMade ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601205f.stackc.newtabsiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012060.stackc.pplatef BEGIN
#define DDNAME       "3func.36012060.stackc.pplatef"
#define DDNUMB      (countT)0x36012060
#define IDFILE      (countT)0xf0e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pPlateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150066.1.0.html\"\>definition\</A\>
see operator []
for speed, i have no overhead code or serialization code
arguments
 tinP
 idP
  if idP is 0 then i return the plate last referenced, and set idP to the id of that plate
   i will search if necessary and set *p_idLathRef
  if idP is > 0 then i return that plate and leave idP unchanged
  if idP is < 0 then i return that plate (counting up from the bottom of the stack) and set idP to the id of that plate
   example: the plate at the bottom of the stack is referenced by setting idP to -1
*/
/**/

/*1*/plateS* stackC::pPlateF( tinS& tinP , countT& idP )/*1*/
{
    SCOOP
    _INbATONsTACKc_

    CURSOR

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::

    //U::O: IF pXray THEN USE *pXray

    ZE( plateS* , ppc ) ;
    if( !idP )
    {
        LATHrEF

        if( *p_ppLathRef && !*p_idLathRef ) setIdLathRefF( tinP ) ;

        ppc = *p_ppLathRef ;
        idP = *p_idLathRef ;

    }
    else if( (sCountT)idP > 0 )
    {
        if( cPlates < idP ) idP = 0 ;
        else
        {
            if( !( F(flagsState) & flSTACKsTATE_MAINTAINtABS ) )
            {
                flagsState |= flSTACKsTATE_MAINTAINtABS ;
                cTabAge = - 1 ;
                newTabsIfF( tinP , 0 , 0 ) ;
            }
    
            sCountT scSteps = *p_idCursor ? idP - *p_idCursor : 0 ;
    
            if( *p_idCursor && - 8 <= scSteps && scSteps <= 8 )
            {
                ppc = *p_ppCursor ;
                if( scSteps > 0 ) while( ppc && scSteps -- ) ppc = ppc->ppD ;
                else              while( ppc && scSteps ++ ) ppc = ppc->ppU ;
            }
            else if( cTabs && idP > cPlates / cTabs )
            {
                //GOAL: SET oTab TO THE WO'TH TAB AT OR BEYOND idP (GOING DOWN FROM THE TOP OF THE STACK)
                // RECIPE: GUESS; GO UP TILL id < idP; GO BACK DOWN TILL id >= idP
                countT oTab = idP * cTabs / cPlates ; //ESTIMATED TAB
                if( oTab >= cTabs ) oTab = cTabs - 1 ;
                boolT bUp = 1 ;
                for(;;)
                {
                    if( pcTabIdSlot[ oTab ] == idP ) break ;
                    else if( bUp )
                    {
                        if( pcTabIdSlot[ oTab ] < idP )
                        {
                            bUp = 0 ;
                            if( ++ oTab == cTabs ) break ;
                        }
                        else if( !oTab ) break ;
                        else oTab -- ;
                    }
                    else if( pcTabIdSlot[ oTab ] >= idP || ++ oTab == cTabs ) break ;
                }
    
                if( oTab == cTabs ) //ALL TABBED PLATES ARE LIGHTER
                {
                    ppc = ppTab[ cTabs - 1 ] ;
                    countT scSteps = idP - pcTabIdSlot[ cTabs - 1 ] ;
                    while( ppc && scSteps -- ) ppc = ppc->ppD ;
                }
                else                // oTab PLATE IS NOT LIGHTER
                {
                    if( oTab > cTabs ) BLAMMO ; //U::
                    ppc = ppTab[ oTab ] ;
                    countT scSteps = idP - pcTabIdSlot[ oTab ] ; //WILL BE NONPOSITIVE
                    while( ppc && scSteps ++ ) ppc = ppc->ppU ;
                }
            }
            else
            {
                if( !*p_idCursor )
                {
                    ppc = ppTop ;
                    countT cSteps = idP - 1 ;
                    while( ppc && cSteps -- ) ppc = ppc->ppD ;
                }
                else
                {
                    ppc = *p_ppCursor ;
                    sCountT scSteps = idP - *p_idCursor ;
                    if( scSteps > 0 ) while( ppc && scSteps -- ) ppc = ppc->ppD ;
                    else              while( ppc && scSteps ++ ) ppc = ppc->ppU ;
                }
            }
        }
    }
    else
    {
        if( cPlates < - idP ) idP = 0 ;
        else
        {
            ppc = ppBottom ;
            countT cSteps = - 1 - idP ;
            while( ppc && cSteps -- ) ppc = ppc->ppU ;
            idP = cPlates + 1 + idP ;
        }
    }

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::
    _OUTbATONsTACKc_
    return ppc ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012060.stackc.pplatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012061.stackc.validatef BEGIN
#define DDNAME       "3func.36012061.stackc.validatef"
#define DDNUMB      (countT)0x36012061
#define IDFILE      (countT)0xf0f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$validateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150067.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::validateF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _INbATONsTACKc_

    plateS* ppc = ppTop ;
    ZE( countT , idSlot ) ;
    POOPIES
    ZE( plateS* , ppcLag ) ;
    while( ppc && !third )
    {
        FV( flPLATE , ppc->flags ) ;
        __( ppcLag && ppcLag != (plateS*)ppc->ppU ) ;
        //U::__( ppcLag && ppcLag != ppc->ppU ) ;

        ppcLag = ppc ;
        ppc = ppc->ppD ;
    }
    __( ppcLag != ppBottom ) ;

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012061.stackc.validatef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012062.stackc.downf BEGIN
#define DDNAME       "3func.36012062.stackc.downf"
#define DDNUMB      (countT)0x36012062
#define IDFILE      (countT)0xf10


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i move *p_ppLathRef
if *p_ppLathRef is not set then i use the top plate as my "before" location
arguments
 tinP
 bQueryP
  if 0 then i attempt to move *p_ppLathRef and return bOk
  if 1 then i return true iff it would be possible to move *p_ppLathRef
*/
/**/
/*1*/boolT stackC::downF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    _INbATONsTACKc_

    LATHrEF

    if( cPlates && !*p_idLathRef ) adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE ) ;

    ZE( boolT , bOk ) ;
    if( *p_ppLathRef && (*p_ppLathRef)->ppD )
    {
        if( *p_idLathRef == cPlates ) __1
        else
        {
            bOk = 1 ;
            if( !bQueryP )
            {
                *p_idLathRef = ++ *p_idLathRef ;
                *p_ppLathRef = (*p_ppLathRef)->ppD ;
            }
        }
    }

    _OUTbATONsTACKc_

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012062.stackc.downf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012063.stackc.upf BEGIN
#define DDNAME       "3func.36012063.stackc.upf"
#define DDNUMB      (countT)0x36012063
#define IDFILE      (countT)0xf11


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i move *p_ppLathRef
if *p_ppLathRef is not set then i use the bottom plate as my "before" location
arguments
 tinP
 bQueryP
  if 0 then i attempt to move *p_ppLathRef and return bOk
  if 1 then i return true iff it would be possible to move *p_ppLathRef
*/
/**/
/*1*/boolT stackC::upF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    _INbATONsTACKc_

    LATHrEF

    if( cPlates && !*p_idLathRef ) adjustRefsF( tinP , cPlates , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE ) ;

    ZE( boolT , bOk ) ;
    if( *p_ppLathRef && (*p_ppLathRef)->ppU )
    {
        if( *p_idLathRef == 1 ) __1
        else
        {
            bOk = 1 ;
            if( !bQueryP )
            {
                *p_idLathRef = -- *p_idLathRef ;
                *p_ppLathRef = (*p_ppLathRef)->ppU ;
            }
        }
    }

    _OUTbATONsTACKc_

    return bOk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012063.stackc.upf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012064.stackc.grablistf BEGIN
#define DDNAME       "3func.36012064.stackc.grablistf"
#define DDNUMB      (countT)0x36012064
#define IDFILE      (countT)0xf12


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i grab the stackC and list all or some plates near to the *p_ppLathRef plate
if *p_ppLathRef is not set then it will be set to the top plate
the caller -must- call ungrabF after calling me
after calling ungrabF, the caller must not use the lists
if !cDownP and !cUpP after calling me, the caller can inspect *ppcDownP (or *ppcUpP) to see whether a *p_ppLathRef plate exists
arguments
 tinP
 ppcDownP
  must be 0
  offset 0 will contain the address of the plate at *p_ppLathRef
  offset 1 will contain the address of the plate immediately below *p_ppLathRef
  offset 2 will contain the next plate, etc.
 ppcUpP
  must be 0
  offset 0 will contain the address of the plate at *p_ppLathRef
  offset 1 will contain the address of the plate immediately above *p_ppLathRef
  offset 2 will contain the next plate, etc.
 cDownP
  can be 0
  up to cDownP plates will be enumerated
  after i return, will contain the actual number of plates listed below *p_ppLathRef
   so ppcDownP will point to 1 + cDownP addresses
 cUpP
  can be 0
  up to cUpP plates will be enumerated
  after i return, will contain the actual number of plates listed above *p_ppLathRef
   so ppcUpP will point to 1 + cUpP addresses
 bNoGrabP
  it is illegal to specify a value other than 0 in the definition of an adam
   this is legal only for class member functions which wrap me and provide their own serialization
   this parameter is intended for use by switchC and switchStackC
*/
/**/
/*1*/voidT stackC::grabListF( tinS& tinP , countT**& ppcDownP , countT**& ppcUpP , countT& cDownP , countT& cUpP , const boolT bNoGrabP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __NZ( ppcDownP ) ;
        __NZ( ppcUpP ) ;
        if( third ) return ;
    }

    //CODEsYNCH: 115006a 00103a2
    if( bNoGrabP ) ;
    else if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flags) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _INsTACKc_

    if( !cPlates ) cUpP = cDownP = 0 ;
    else
    {
        countT cDownMax = cDownP < cPlates - 1 ? cDownP : cPlates - 1 ;
        countT cUpMax   = cUpP   < cPlates - 1 ? cUpP   : cPlates - 1 ;
        cUpP = cDownP = 0 ;

        LATHrEF
    
        if( !*p_ppLathRef )
        {
            *p_ppLathRef = ppTop ;
            *p_idLathRef = ppTop ? 1 : 0 ;
        }

        third.newF( tinP , LF , *(countT**)&ppcDownP , 1 + cDownMax ) ; ___CT( ppcDownP ) ;
        third.newF( tinP , LF , *(countT**)&ppcUpP   , 1 + cUpMax   ) ; ___CT( ppcUpP   ) ;
        if( ppcDownP && ppcUpP )
        {
            third.c_memsetIF( tinP , (byteT*)ppcDownP , sizeof( countT ) * ( 1 + cDownMax ) ) ;
            third.c_memsetIF( tinP , (byteT*)ppcUpP   , sizeof( countT ) * ( 1 + cUpMax   ) ) ;
    
            ppcUpP[ 0 ] = ppcDownP[ 0 ] = *p_ppLathRef ? (countT*)( *p_ppLathRef + 1 ) : 0 ;
    
            plateS* ppc = *p_ppLathRef ;
            while( cDownMax -- && ppc )
            {
                if( ppc->ppD ) ppcDownP[ ++ cDownP ] = (countT*)( ppc->ppD + 1 ) ;
                ppc = ppc->ppD ;
            }
    
            ppc = *p_ppLathRef ;
            while( cUpMax -- && ppc )
            {
                if( ppc->ppU ) ppcUpP[ ++ cUpP ] = (countT*)( ppc->ppU + 1 ) ;
                ppc = ppc->ppU ;
            }
        }
    }

    _OUTsTACKc_
    //CALLER MUST DO THIS: if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012064.stackc.grablistf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012065.stackc.operator_call BEGIN
#define DDNAME       "3func.36012065.stackc.operator_call"
#define DDNUMB      (countT)0x36012065
#define IDFILE      (countT)0xf13


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::operator ()( tinS& tinP , soulC& slP )/*1*/
{
    SCOOP
    {
        ZE( baseSoilXxxxC* , pMeI ) ;
        slP >> pMeI ;
        if( pMeI != (baseSoilXxxxC*)this ) { BLAMMO ; }
    }

    _INbATONsTACKc_
    ZE( countT , idCmdBase ) ;
    slP >> idCmdBase ;
    switch( idCmdBase )
    {
        case ifcIDcMDbASE_CLASSnAME :
        {
            slP << (strokeS*)T(tinP.pAdamGlobal1->_stackC_.postOldClassName) ;
            break ;
        }
        case ifcIDcMDbASE_INSTANCEnAME :
        {
            slP << (strokeS*)T(postName) ;
            break ;
        }
        case ifcIDcMDbASE_TICK :
        {
            break ;
        }
        case ifcIDcMDbASE_TOCK :
        {
            break ;
        }
        case ifcIDcMDbASE_REFERENCE :
        {
            flagsT save = slP.flags ;
            slP.flags &= ~( F(flSOUL_LIVE) ) ;
            slP << (baseSoilXxxxC*)this ;
            slP.flags = save ;
            break ;
        }
        case ifcIDcMDbASE_CMDdEFAULT :
        {
            break ;
        }
    }
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012065.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012066.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012066.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012066
#define IDFILE      (countT)0xf14


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/stackC& stackC::operator >> ( countT*& pcP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType != ifcSTACKtYPE_PTR_countT ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pcP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012066.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012067.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012067.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012067
#define IDFILE      (countT)0xf15


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/stackC& stackC::operator << ( const countT* const pcP )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType != ifcSTACKtYPE_PTR_countT ) ;
        __Z( pcP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pcP ;
    _OUTbATONsTACKc_

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012067.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012068.stackc.sinkf BEGIN
#define DDNAME       "3func.36012068.stackc.sinkf"
#define DDNUMB      (countT)0x36012068
#define IDFILE      (countT)0xf16


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const countT* const pcP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    if( third ) return ;
    __( idSlotP ) ;
    __Z( pcP ) ;
    FV( flSTACKsINK , flagsP ) ;
    __( idType && idType != ifcSTACKtYPE_PTR_countT ) ;
    __( F(flags) & flSTACKc_XRAY ) ;
    if( third ) return ;

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractCountStringsF ;
    sinkF( tinP , idSlotP , (countT)pcP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012068.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012069.stackc.operator_call BEGIN
#define DDNAME       "3func.36012069.stackc.operator_call"
#define DDNUMB      (countT)0x36012069
#define IDFILE      (countT)0xf17


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT stackC::operator () ( const countT* const pcP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , pcP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;
    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012069.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206a.stackc.waitgrabf BEGIN
#define DDNAME       "3func.3601206a.stackc.waitgrabf"
#define DDNUMB      (countT)0x3601206a
#define IDFILE      (countT)0xf18


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i evaluate to bGrabbed (1 iff i did grab *this)
i return when cPlates is below the specified limit
when i return, *this is grabbed by the caller thread
caller is responsible for calling ungrabF after i return
*this must be constructed with flSTACKc_GIVEsIGNdELpLATE
*/

/**/
/*1*/boolT stackC::waitGrabF( tinS& tinP , const countT cPlatesLimitP , const boolT& bQuitP )/*1*/
{
    SCOOP
    if( third ) return 0 ;
    __( !( F(flags) & flSTACKc_GIVEsIGNdELpLATE ) ) ;
    __Z( pSgnEvent ) ;
    if( third ) return 0 ;

    _INsTACKc_

    ZE( boolT , bGrabbed ) ;
    while( !third && !bQuitP )
    {
        grabF( tinP , TAG( TAGiDnULL ) ) ;
        bGrabbed = 1 ;
        if( cPlates < cPlatesLimitP ) break ;
        ungrabF( tinP ) ;
        bGrabbed = 0 ;
        waitF( tinP ) ;
    }

    _OUTsTACKc_
    return bGrabbed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206a.stackc.waitgrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206b.stackc.snapf BEGIN
#define DDNAME       "3func.3601206b.stackc.snapf"
#define DDNUMB      (countT)0x3601206b
#define IDFILE      (countT)0xf19


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::snapF( tinS& tinP , const boolT bRestoreP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( F(flags) & flSTACKc_FIFO ) ;
        if( POOP ) return ;
    }

    _INbATONsTACKc_
    if( !bRestoreP ) cPlatesSnap = cPlates ;
    else             purgeF( tinP , cPlatesSnap ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206b.stackc.snapf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206c.stackc.checkchainf BEGIN
#define DDNAME       "3func.3601206c.stackc.checkchainf"
#define DDNUMB      (countT)0x3601206c
#define IDFILE      (countT)0xf1a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::checkChainF( tinS& tinP )/*1*/
{
    _IO_
    CURSOR
    LATHrEF

    BLAMMO ; //TO ENSURE THAT I AM NOT CALLED IN PRODUCTION

    __( !*p_ppLathRef - !*p_idLathRef ) ;
    __( cPlates < *p_idLathRef ) ;

    const plateS* ppc = ppTop ;
    ZE( countT , idAt ) ;
    ZE( boolT , bFound ) ;
    while( ppc )
    {
        idAt ++ ;

        if( ppc->ppU ) { __( ppc != ppc->ppU->ppD ) ; }

        if( ppc == *p_ppLathRef )
        {
            bFound = 1 ;
            __( idAt - *p_idLathRef ) ;
        }

        if( ppc->ppD )
        {
            __( ppc != ppc->ppD->ppU ) ;
            ppc = ppc->ppD ;
        }
        else           break ;
    }

    if( !bFound && cPlates ) { BLAMMO ; }
    //if( POOP ) { BLAMMO ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206c.stackc.checkchainf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206d.stackc.setidlathreff BEGIN
#define DDNAME       "3func.3601206d.stackc.setidlathreff"
#define DDNUMB      (countT)0x3601206d
#define IDFILE      (countT)0xf1b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::setIdLathRefF( tinS& tinP )/*1*/
{
    //return ; //U::
    _IO_
    CURSOR
    LATHrEF
    __Z( ppTop ) ;
    __( *p_idLathRef ) ;

    const plateS* ppc = ppTop ;
    ZE( countT , idAt ) ;
    while( ppc )
    {
        idAt ++ ;

        if( ppc == *p_ppLathRef )
        {
            *p_idLathRef = idAt ;
            break ;
        }

        ppc = ppc->ppD ;
    }

    __( !*p_idLathRef ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206d.stackc.setidlathreff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206e.stackc.adjustrefsf BEGIN
#define DDNAME       "3func.3601206e.stackc.adjustrefsf"
#define DDNUMB      (countT)0x3601206e
#define IDFILE      (countT)0xf1c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
call me before modifying the stackC chain and before calling newPlateF
arguments
 idActionP
 ppNewP
*/
/**/

/*1*/voidT stackC::adjustRefsF( tinS& tinP , countT idSlotTargetP , const countT idActionP , plateS* ppNewP )/*1*/
{
    _INbATON_
    CURSOR

    LATHrEF


    __( (sCountT)idSlotTargetP <= 0 ) ;

    if( !POOP && idSlotTargetP )
    {
        switch( idActionP )
        {
            case ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE :
            {
                __( cPlates < idSlotTargetP ) ;
                if( !POOP )
                {
                    if( ppNewP )
                    {
                        *p_ppLathRef = ppNewP ;
                        *p_idLathRef = idSlotTargetP ;
                    }
                    else
                    {
                        sCountT scSteps = idSlotTargetP - ( *p_idLathRef ? *p_idLathRef : 1 ) ;
                        *p_idLathRef = idSlotTargetP ;
                        plateS* ppc = *p_ppLathRef ? *p_ppLathRef : ppTop ; //U::O: IF NO LATH REF THEN DECIDE WHETHR TO WALK FROM TOP OR FROM BOTTOM
                        if( scSteps > 0 )
                        {
                            while( scSteps -- ) ppc = ppc->ppD ;
                        }
                        else
                        {
                            while( scSteps ++ ) ppc = ppc->ppU ;
                        }
        
                        *p_ppLathRef = ppc ;
                    }
                }
    
                break ;
            }
            default :
            {
                adjustOldPairF( *p_idLathRef , *p_ppLathRef , idSlotTargetP , idActionP ) ;
                adjustOldPairF( *p_idCursor  , *p_ppCursor  , idSlotTargetP , idActionP ) ;

                if( pSw_ppLathRef ) //ASSUME: EITHER ALL OR NONE OF THE SWITCHES HAVE BEEN CT'D
                {
                    countT save = *pLeverLathRef ;
        
                    countT cFlavors = pSw_ppLathRef->cFlavorsF( tinP ) ;
                    {for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        *pLeverLathRef = pSw_ppLathRef->leverF( tinP , idf ) ;
                        if( *pLeverLathRef == save ) continue ;

                        //countT  leverUsed = *pLeverLathRef ;
                        //countT* pIdAdj = &(countT&)*pSw_idLathRef ;
                        //adjustOldPairF( *pIdAdj , *(plateS**)&(countT&)*pSw_ppLathRef , idSlotTargetP , idActionP ) ;

                        adjustOldPairF( *pSw_idLathRef , *(plateS**)&(countT&)*pSw_ppLathRef , idSlotTargetP , idActionP ) ;
                    }}
        
                    cFlavors = pSw_ppCursor->cFlavorsF( tinP ) ;
                    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                    {
                        *pLeverLathRef = pSw_ppCursor->leverF( tinP , idf ) ;
                        if( *pLeverLathRef == save ) continue ;
                        adjustOldPairF( *pSw_idCursor , *(plateS**)&(countT&)*pSw_ppCursor , idSlotTargetP , idActionP ) ;
                    }
        
                    *pLeverLathRef = save ;
                }    

                if( ppNewP )
                {
                    if( idActionP == ifcIDaCTIONsTACKaDJUSTrEFS_NEWaBOVE )
                    {
                        *p_ppLathRef = ppNewP ;
                        *p_idLathRef = idSlotTargetP ;
                    }
                    else if( idActionP == ifcIDaCTIONsTACKaDJUSTrEFS_NEWbELOW )
                    {
                        *p_ppLathRef = ppNewP ;
                        *p_idLathRef = idSlotTargetP + 1 ;
                    }
                }

                break ;
            }
        }
    }

    _OUTbATON_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206e.stackc.adjustrefsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206f.stackc.pleverlathreff BEGIN
#define DDNAME       "3func.3601206f.stackc.pleverlathreff"
#define DDNUMB      (countT)0x3601206f
#define IDFILE      (countT)0xf1d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT* stackC::pLeverLathRefF( tinS& tinP )/*1*/
{
    _INsTACKc_
    _OUTsTACKc_
    return pLeverLathRef ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.3601206f.stackc.pleverlathreff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012070.stackc.recyclelever1f BEGIN
#define DDNAME       "3func.36012070.stackc.recyclelever1f"
#define DDNUMB      (countT)0x36012070
#define IDFILE      (countT)0xf1e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT stackC::recycleLever1F( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return recycleLever1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012070.stackc.recyclelever1f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012071.stackc.recyclelever2f BEGIN
#define DDNAME       "3func.36012071.stackc.recyclelever2f"
#define DDNUMB      (countT)0x36012071
#define IDFILE      (countT)0xf1f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT stackC::recycleLever2F( tinS& tinP )/*1*/
{
    SCOOP
    _INsTACKc_
    _OUTsTACKc_
    return recycleLever2 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012071.stackc.recyclelever2f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012073.stackc.sinkf BEGIN
#define DDNAME       "3func.36012073.stackc.sinkf"
#define DDNUMB      (countT)0x36012073
#define IDFILE      (countT)0xf20


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1150035.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT stackC::sinkF( tinS& tinP , countT& idSlotP , const plateC* const pPlateP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pPlateP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __( idType && idType - ifcSTACKtYPE_PTR_plateC ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtract_plateC_F ;
    sinkF( tinP , idSlotP , (countT)pPlateP , flagsP , pSubtractF , subtractionParmP ) ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012073.stackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012074.stackc.operator_shiftright BEGIN
#define DDNAME       "3func.36012074.stackc.operator_shiftright"
#define DDNUMB      (countT)0x36012074
#define IDFILE      (countT)0xf21


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/stackC& stackC::operator >> ( plateC*& pPlateP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_plateC ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this >> (countT&)pPlateP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012074.stackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012075.stackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36012075.stackc.operator_shiftleft"
#define DDNUMB      (countT)0x36012075
#define IDFILE      (countT)0xf22


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150037.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& stackC::operator << ( const plateC* const pPlateP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType && idType - ifcSTACKtYPE_PTR_plateC ) ;
        __Z( pPlateP ) ;
        if( third ) return *this ;
    }

    _INbATONsTACKc_
    *this << (countT)pPlateP ;
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012075.stackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012076.stackc.operator_call BEGIN
#define DDNAME       "3func.36012076.stackc.operator_call"
#define DDNUMB      (countT)0x36012076
#define IDFILE      (countT)0xf23


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1150028.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cb20104.1.1.0.html\"\>cb20104:  WAKEsHOW( "example.simplest.func.1150028.stackC.operator_call" )\</A\>
evaluates to the slot id of the plate whose value equals psttP
 1 indicates that psttP was found at the top of the stack
 2 indicates that psttP was found at the position just below the top of the stack
assumes that the stack was loaded with values by "sinking" them, using sinkF
after calling this function, stackC::extractF( tinP ) can be used to remove the item that it references
arguments
 pPlateP
  the value to be searched for
 pSubtractFP
  can be 0
  normally this should be the same pSubtractFP that was used to sink the values into the stack object
*/
/**/

/*1*/countT stackC::operator () ( const plateC* const pPlateP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return 0 ;
    }

    _INbATONsTACKc_
    ZE( countT , idSlot ) ;
    sinkF( tinP , idSlot , pPlateP , flSTACKsINK_QUERY , pSubtractFP , subtractionParmP ) ;

    _OUTbATONsTACKc_
    return idSlot ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012076.stackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012077.stackc.sortf BEGIN
#define DDNAME       "3func.36012077.stackc.sortf"
#define DDNUMB      (countT)0x36012077
#define IDFILE      (countT)0xf24


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i sort the plates on me
applications
 real time data accumulation
  accumulate data in real time, and then sort it as a background activity when the incoming data stream is slow
 defer sorting cost
  pay the cost of sorting when generating a report rather than when collecting data
 dynamic sort criteria
  stackC of type ifcSTACKtYPE_PTR_plateC support dynamic sort ordering
   derived class can define its operator - dynamically, i.e. the definition can depend on the current value of a mode data member
   several reports which sort the data in different ways can be generated by calling sortF for each mode value
   this is more efficient than using separate stackC loads, because new plateS objects are not constructed and destructed
  randomization
   this is a subapplication of dynamic sort criteria
   the derived class can define its operator - in a way that causes plates to be sorted "randomly"
   this application is illegal because it can easily violate the assumed invariance of the difference between oo plates
   use randomF instead
arguments
 flagsP
 pSubtractFP
  deprecated
  can be 0
 subtractionParmP
  deprecated
  can be 0
  if 0 then cbd is used
  value is not used
  it is only passed into pSubtractF
*/
/**/

/*1*/voidT stackC::sortF( tinS& tinP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKsORT , flagsP ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_


    //CS:CODEsYNC: 115005c 115007d
    if( cPlates )
    {
        if( !pSubtractFP ) switch( idType )
        {
            case ifcSTACKtYPE_PTR_plateC    : { pSubtractFP = subtract_plateC_F         ; break ; }
            case ifcSTACKtYPE_PTR_countT    : { pSubtractFP = subtractCountStringsF     ; break ; }
            case ifcSTACKtYPE_measureT      : { pSubtractFP = subtractMeasuresF         ; break ; }
            case ifcSTACKtYPE_timeS         : { pSubtractFP = subtract_timeS_F          ; break ; }
            case ifcSTACKtYPE_nicNameC      : { pSubtractFP = subtract_nicNameC_F       ; break ; }
            case ifcSTACKtYPE_PTR_byteT     : { pSubtractFP = subtractByteStringsF      ; break ; }
            case ifcSTACKtYPE_BLOB          : { pSubtractFP = subtractBlobsF            ; break ; }
            case ifcSTACKtYPE_PTR_soulC     : { pSubtractFP = subtract_soulC_F          ; break ; }
            case ifcSTACKtYPE_PTR_nicNameC  : { pSubtractFP = subtract_nicNameC_F       ; break ; }
            case ifcSTACKtYPE_PTR_count2S   : { pSubtractFP = subtractCount2F           ; break ; }
            case ifcSTACKtYPE_PTR_count3S   : { pSubtractFP = subtractCount3F           ; break ; }
            case ifcSTACKtYPE_PTR_count4S   : { pSubtractFP = subtractCount4F           ; break ; }
            case ifcSTACKtYPE_PTR_count5S   : { pSubtractFP = subtractCount5F           ; break ; }
            case ifcSTACKtYPE_PTR_count6S   : { pSubtractFP = subtractCount6F           ; break ; }
            case ifcSTACKtYPE_PTR_count7S   : { pSubtractFP = subtractCount7F           ; break ; }
            case ifcSTACKtYPE_PTR_count8S   : { pSubtractFP = subtractCount8F           ; break ; }
            case ifcSTACKtYPE_PTR_strokeS   : { pSubtractFP = subtractStringsF          ; break ; }
            default :
            {
                __( idType ) ;
                __1 ;
            }
        }

        ZE( plateS** , ppDoomed ) ;
        const countT cpDoomed = cPlates ;
        third.newF( tinP , LF , *(countT**)&ppDoomed , cpDoomed ) ; ___CT( ppDoomed ) ;
        if( ppDoomed )
        {
            for( countT off = 0 ; off < cpDoomed ; off ++ ) //U::O: CALL adjustRefsF OUTSIDE OF THIS LOOP, WO TIME
            {
                adjustRefsF( tinP , 1 , ifcIDaCTIONsTACKaDJUSTrEFS_DELETED ) ;
                ppDoomed[ off ] = ppTop ; //U::OBEY flagsP
                ppTop = ppTop->ppD ;
                if( ppTop ) ppTop->ppU = 0 ;
                else        ppBottom   = 0 ;
            }
            cPlates = 0 ;
            flagsState = flSTACKsTATE_null ; //115005c 0050011 0010121: VERIFY THAT THIS MAKES SENSE FOR NEWLY DEFINED STATE FLAGS
        }
    
        newTabsIfF( tinP , 0 , 0 ) ;
        third.delF( tinP , *(countT**)&ppTab ) ;
        third.delF( tinP , pcTabIdSlot ) ;
    
        for( countT off = 0 ; off < cpDoomed ; off ++ )
        {
            sinkPrivateF( tinP , countTC() , PLATE_countT_REF( ppDoomed[ off ] ) , ppDoomed[ off ] , flSTACKsINK_null , pSubtractFP , subtractionParmP ) ;
            __( !!ppDoomed[ off ] ) ; //U::O: COMMENT THIS OUT
        }

        third.delF( tinP , *(countT**)&ppDoomed ) ;

        if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNdELpLATE|flSTACKc_GIVEsIGNnEWpLATE ) pSgnEvent->giveF( tinP ) ;
    }    

    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012077.stackc.sortf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012078.stackc.sinkprivatef BEGIN
#define DDNAME       "3func.36012078.stackc.sinkprivatef"
#define DDNUMB      (countT)0x36012078
#define IDFILE      (countT)0xf25


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT stackC::sinkPrivateF( tinS& tinP , countT& idSlotP , const countT valueP , plateS*& ppValueP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        FV( flSTACKsINK , flagsP ) ;
        __NZ( !( F(flags) & flSTACKc_ALLOWzE ) && !valueP ) ;
        __( ( F(flagsP) & flSTACKsINK_QUERY ) && ( F(flagsState) & flSTACKsTATE_SHIFTlEFTuSED ) ) ;
        __( F(flags) & flSTACKc_XRAY ) ;
        if( third ) return ;
    }

    _INbATONsTACKc_
    ifc4FT pSubtractF = pSubtractFP ;
    if( !pSubtractF ) pSubtractF = subtractF ;

    CURSOR

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::

    LATHrEF

    __( *p_idLathRef && !*p_ppLathRef ) ;
    __( !*p_idCursor - !*p_ppCursor ) ;
    if( !third )
    {
        if( !ppTop && F(flagsP) & flSTACKsINK_QUERY ) ;
        else
        {
            ZE( plateS* , ppNew ) ;
            if( !ppTop )
            {
                if( !ppValueP ) newPlateF( tinP , ppNew , valueP ) ;
                else
                {
                    ppNew = ppValueP ; ppValueP = 0 ;
                    ppNew->resetF() ; // DATA SECTION IS NOT INITIALIZED
                }
                ppBottom = ppTop = ppNew ;
                cPlates ++ ; //U::
                if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNnEWpLATE ) pSgnEvent->giveF( tinP ) ;
                idSlotP = 1 ;

                adjustRefsF( tinP , idSlotP , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppTop ) ;

                newTabsIfF( tinP , ppNew , 0 ) ;

            }
            else
            {
                if( !( F(flagsState) & flSTACKsTATE_MAINTAINtABS ) )
                {
                    flagsState |= flSTACKsTATE_MAINTAINtABS ;
                    cTabAge = - 1 ;
                    newTabsIfF( tinP , 0 , 0 ) ;
                }

                ZE( sCountT , heavy ) ;
                ZE( plateS* , ppc ) ; //THIS ALWAYS POINTS TO THE PLATE CURRENTLY BEING INSPECTED
                {
                    // RECIPE: THIS LOOP SETS ppc AND idSlotP TO POINT TO THE LEAST UPPER BOUND (IN TERMS OF WEIGHT) PLATE
                    // IOW, ppc MOVES DOWN THE STACK UNTIL IT POINTS TO A PLATE THAT IS NOT LIGHTER THAN THE NEW PLATE
                    //
                    // this loop works in oo modes, walking and jumping, to set ppc (and idSlotP) to the lightest plate not lighter than the new plate
                    // when walking, the plateS pointers ppU and ppD are used
                    // when jumping, the ppTab array is used
                    // walking: keep walking until heavy <= 0; leaving ppc and idSlotP pointing to the lath plate tested
                    // jumping: squeeze until oTabCeiling and oTabFloor are adjacent; initialize ppc and idSlotP for a walk; walk
                    // oTabCeiling is a plate that is lighter
                    // oTabFloor is a plate that is not lighter
                    // when oTabCeiling and oTabFloor are adjacent, set ppc (and idSlotP) to point to oTabFloor
                    //
                    boolT bJump = cTabs ? 1 : 0 ; //U::
                    countT oTabCeiling = 0 ;
                    countT oTabFloor = cTabs ? cTabs - 1 : 0 ;
                    ZE( countT , oTab ) ;
                    if( bJump )
                    {
                        oTab = cTabs >> 1 ; //IF JUMPING, THEN oTab WILL TELL ME WHERE I AM
                        ppc = ppTab[ oTab ] ;
                    }
                    else
                    {
                        ppc = ppTop ;
                        idSlotP = 1 ; //IF NOT JUMPING, THEN idSlotP WILL TELL ME WHERE I AM
                    }
    
                    countT pEther = (countT)third.third_pEtherContainsMe_F() ;
                    ZE( countT , valuen ) ;
                    ZE( countT , valuec ) ;
                    countT cbd = idType == ifcSTACKtYPE_BLOB ? cbData : 0 ; //U::CONJ: BUG: EDIT THIS TO HANDLE VARIABLE LENGTH BLOBS
    
                    while( !third )
                    {
                        //TEST A PLATE (CALCULATE heavy)
                        switch( idType )
                        {
                            case ifcSTACKtYPE_nicNameC :
                            case ifcSTACKtYPE_timeS    :
                            case ifcSTACKtYPE_BLOB     :
                                                         { valuen = valueP ; valuec = (countT)PLATE_byteT_PTR(  ppc ) ; break ; }
                            default                    : { valuen = valueP ; valuec =         PLATE_countT_REF( ppc ) ; break ; } //U: CONJ: "valuen =" WOULD NOT BE NEEDED IF WE PREVENTED pSubtractF FROM MODIFYING valuen
                        }

                        {
                            countT cArg = subtractionParmP ? subtractionParmP : cbd ;
                            heavy = (*pSubtractF)( tinP , pEther , valuen , valuec , cArg ) ;
                            //if( tinP.pEther && tinP.pc Utility[ 0 ] ) etherC::etRockIF( tinP ).traceF( tinP , T("sinking: calculated heavy [heavy]:    ")+TF2(heavy,flFORMAT_NObIGITvALUES|flFORMAT_UNSIGNED) ) ; //U:: TO TEST
                            if( F(flags) & flSTACKc_SINKrEVERSE ) heavy = - heavy ;
                        }
    
                        if( !heavy )                    // MY DENSITY EQUALS ppc (idSlotP)
                        {
                            if( !bJump ) break ;
                            else         oTabFloor = oTab ;
                        }
                        else if( heavy < 0 )            // I AM LESS DENSE THAN ppc (idSlotP) SO WILL FLOAT ABOVE IT
                        {
                            if( !bJump ) break ;
                            else         oTabFloor = oTab ;
                        }
                        else                            // I AM DENSER THAN ppc (idSlotP) SO WILL CONTINUE TO SINK DOWN THE STACK
                        {
                            if( !bJump )
                            {
                                if( !ppc->ppD ) break ; //I AM HEAVIER THAN THE PLATE AT THE BOTTOM OF THE STACK
                                idSlotP ++ ;
                                ppc = ppc->ppD ;
                            }
                            else oTabCeiling = oTab ;
                        }
    
                        if( bJump )
                        {
                            countT oTabNew = ( oTabFloor + oTabCeiling ) >> 1 ;
                            if( oTabNew != oTab )
                            {
                                oTab = oTabNew ;
                                ppc = ppTab[ oTab ] ;
                            }
                            else
                            {
                                bJump = 0 ;
                                if( heavy > 0 )
                                {
                                    ppc = ppTab[ oTab ] ;
                                    idSlotP = pcTabIdSlot[ oTab ] ;
                                }
                                else if( oTab )
                                {
                                    ppc = ppTab[ oTab - 1 ] ;
                                    idSlotP = pcTabIdSlot[ oTab - 1 ] ;
                                }
                                else
                                {
                                    ppc = ppTop ;
                                    idSlotP = 1 ;
                                }
                            }
                        }
                    }
                }
    
                if( F(flagsP) & flSTACKsINK_QUERY )
                {
                    if( heavy ) idSlotP = 0 ;
                    else
                    {
                        adjustRefsF( tinP , idSlotP , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppc ) ;
                    }
                }
                else
                {
                    if( heavy > 0 ) //I AM HEAVIER THAN THE PLATE AT THE BOTTOM OF THE STACK, SO INSERT ME BELOW ppc (idSlotP)
                    {
                        if( !ppValueP ) newPlateF( tinP , ppNew , valueP ) ;
                        else
                        {
                            ppNew = ppValueP ; ppValueP = 0 ;
                            ppNew->resetF() ; // DATA SECTION IS NOT INITIALIZED
                        }

                        if( ppNew )
                        {
                            ppBottom = ppc->ppD = ppNew ;
                            ppNew->ppU = ppc ;
                            cPlates ++ ; //U::
                            adjustRefsF( tinP , ++ idSlotP , ifcIDaCTIONsTACKaDJUSTrEFS_REFERENCE , ppNew ) ;
                        }
                    }
                    else if( heavy < 0 || !( F(flagsP) & flSTACKsINK_UNIQUE ) ) //INSERT ME JUST ABOVE ppc (idSlotP)
                    {
                        if( !ppValueP ) newPlateF( tinP , ppNew , valueP ) ;
                        else
                        {
                            ppNew = ppValueP ; ppValueP = 0 ;
                            ppNew->resetF() ; // DATA SECTION IS NOT INITIALIZED
                        }

                        if( ppNew )
                        {
                            adjustRefsF( tinP , idSlotP , ifcIDaCTIONsTACKaDJUSTrEFS_NEWaBOVE , ppNew ) ;
                            if( ppc == ppTop )
                            {
                                ppTop->ppU = ppNew ;
                                ppNew->ppD = ppTop ;
                                ppTop = ppNew ;
                            }
                            else
                            {
                                if( ppc->ppU ) ((plateS*)ppc->ppU)->ppD = ppNew ;
                                ppNew->ppU = ppc->ppU ;
                                ppc->ppU = ppNew ;
                                ppNew->ppD = ppc ;
                            }
                            cPlates ++ ;
                        }
                    }
                    else idSlotP = 0 ;
    
                    if( idSlotP )
                    {
                        newTabsIfF( tinP , ppNew , 0 ) ;
                        if( pSgnEvent && F(flags) & flSTACKc_GIVEsIGNnEWpLATE ) pSgnEvent->giveF( tinP ) ;
                    }
                }
            }
        }
    }

    if( cPlates < *p_idCursor || ( *p_idCursor && !*p_ppCursor ) ) { BLAMMO ; } //U::
    _OUTbATONsTACKc_
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36012* : 3func.36012078.stackc.sinkprivatef END
