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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016001.switchstackc.dt_switchstackc BEGIN
#define DDNAME       "3func.36016001.switchstackc.dt_switchstackc"
#define DDNUMB      (countT)0x36016001
#define IDFILE      (countT)0xf5a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210002.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.be10104.1.1.0.html\"\>be10104:  WAKEsHOW( "example.simplest.func.1210002.switchStackC.dt_switchStackC" )\</A\>
*/
/**/

/*1*/switchStackC::~switchStackC( voidT )/*1*/
{
    TINSL
    SCOOP

    bDying ++ ;
    swMe.bDying ++ ;
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    countT cStacks = swMe.cFlavorsF( tinP ) ;
    for( countT ids = 1 ; ids <= cStacks ; ids ++ )
    {
        stackC* pStack = (stackC*)(countT)swMe[ ids ] ;
        THREADmODE1oN( flTHREADmODE1_ALLOWsTOPwHILEgRABBING ) //LEGACY WORKAROUND
        DEL( pStack ) ;
        THREADmODE1rESTORE //LEGACY WORKAROUND
    }

    third.delF( tinP , pbnu ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    DEL( pBaton ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016001.switchstackc.dt_switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016003.switchstackc.operator_countt BEGIN
#define DDNAME       "3func.36016003.switchstackc.operator_countt"
#define DDNUMB      (countT)0x36016003
#define IDFILE      (countT)0xf5b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ce10104.1.1.0.html\"\>ce10104:  WAKEsHOW( "example.simplest.func.1210004.switchStackC.operator_countT" )\</A\>
evaluates to the number of items on the stack for the current thread
there are two cases in which the returned value is ze
 case 1: if there is not yet a stack for the current thread (or lever)
 case 2: if there is a stack for the current thread (or lever) and that stack is empty
  if there is no stack for the current thread (or lever) then none will be created
if the current lever 
my behavior differs from stackC in that the latter does not grab itself
*/
/**/

/*1*/switchStackC::operator countT ( voidT )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    ZE( countT , cPlates ) ;
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    ZE( countT , query ) ;
    {
        byteT* const pbLever = swMe.pbLeverF( tinP ) ;
        const countT idLeverType = swMe.idLeverTypeF( tinP ) ;
        switch( idLeverType )
        {
            case ifcIDtYPElEVER_tid                   : { query = dosGetInfoBlocksIdThreadIF()                  ; break ; }
            case ifcIDtYPElEVER_countT                : { query = *(countT*)pbLever                                         ; break ; }
            case ifcIDtYPElEVER_PTR_BLOB              :
            case ifcIDtYPElEVER_PTR_ptrStrokeS        :
            case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
            case ifcIDtYPElEVER_PTR_countT            : { query = (countT)*(countT**)pbLever                                ; break ; }
            case ifcIDtYPElEVER_PTR_strokeS           : { query = (countT)*(strokeS**)pbLever                               ; break ; }
            case ifcIDtYPElEVER_PTR_plateC            : { query = (countT)*(plateC**)pbLever                                ; break ; }
            case ifcIDtYPElEVER_PTR_osTextT           : { query = (countT)*(osTextT**)pbLever                               ; break ; }
            case ifcIDtYPElEVER_PTR_nicNameC          :
            case ifcIDtYPElEVER_BLOBdOOMED                  :
            case ifcIDtYPElEVER_PTR_soulC             : { query = (countT)pbLever                                           ; break ; }
            default                                : { __( idLeverType ) ; __1                          ; break ; }
        }
    }

    if( swMe.idSlotOfLeverF( tinP , query ) )
    {
        stackC* pStack = (stackC*)(countT)swMe ;
        if( pStack ) cPlates = *pStack ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016003.switchstackc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016004.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016004.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016004
#define IDFILE      (countT)0xf5c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7e20104.1.1.0.html\"\>7e20104:  WAKEsHOW( "example.simplest.func.1210005.switchStackC.operator_shiftLeft" )\</A\>
places the address of an object onto this stack object
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 valueP
*/
/**/

/*1*/switchStackC& switchStackC::operator << ( const countT valueP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    stackC* pStack = (stackC*)(countT)swMe ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xe8c ) ;
        __Z( pStack ) ;
        (countT&)swMe = (countT)pStack ;
    }
    if( !third ) *pStack << valueP ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016004.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016005.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016005.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016005
#define IDFILE      (countT)0xf5d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6e20104.1.1.0.html\"\>6e20104:  WAKEsHOW( "example.simplest.func.1210006.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 psttP
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const strokeS* const psttP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)psttP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016005.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016006.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016006.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016006
#define IDFILE      (countT)0xf5e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5e20104.1.1.0.html\"\>5e20104:  WAKEsHOW( "example.simplest.func.1210007.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc2P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count2S* const pc2P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc2P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016006.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016007.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016007.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016007
#define IDFILE      (countT)0xf5f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2d20104.1.1.0.html\"\>2d20104:  WAKEsHOW( "example.simplest.func.1210008.switchStackC.operator_shiftRight" )\</A\>
removes the item that was most recently put onto the stack
evaluates to a reference to this stack object
like pullF except does not support bTinHasLeverP
arguments
 valueP
*/
/**/

/*1*/switchStackC& switchStackC::operator >> ( countT& valueP )/*1*/
{
    TINSL

    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)(countT)swMe ;
    __Z( pStack ) ;
    if( !pStack )
    {
        __( dosGetInfoBlocksIdThreadIF() ) ;
        __1
    }
    if( !third ) *pStack >> valueP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016007.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016008.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016008.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016008
#define IDFILE      (countT)0xf60


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5d20104.1.1.0.html\"\>5d20104:  WAKEsHOW( "example.simplest.func.1210009.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 psttP
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( strokeS*& psttP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)psttP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016008.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016009.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016009.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016009
#define IDFILE      (countT)0xf61


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7c20104.1.1.0.html\"\>7c20104:  WAKEsHOW( "example.simplest.func.121000a.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc2P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count2S*& pc2P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc2P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016009.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600a.switchstackc.operator_element BEGIN
#define DDNAME       "3func.3601600a.switchstackc.operator_element"
#define DDNUMB      (countT)0x3601600a
#define IDFILE      (countT)0xf62


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8e20104.1.1.0.html\"\>8e20104:  WAKEsHOW( "example.simplest.func.121000b.switchStackC.operator_element" )\</A\>
if idP == i then evaluates to the i'th element on the stack for this thread
like plateF except does not support pTinHasLeverP
arguments
 idP
  idP == 2 , 3 , 4 , ... refer to items near the top of the stack
  1-based: idP == 0 is illegal
  U:: nawwh: conj: idP == 0 will work aok
  idP == 1 refers to the topmost (most recently added) item
  idP == -1 refers to the bottommost (earliest) item
  idP == -2 , -3 , -4 , ... refer to items near the bottom of the stack
*/
/**/

/*1*/countT& switchStackC::operator [] ( const countT idP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    static countT idInLath ;
    countT idIn = 1 + incv02AM( idInLath ) ;
    //static countT test ;
    if( idIn == 0x9e3 )
    {
        countT foo = 2 ;
    }

    stackC* pStack = (stackC*)(countT)swMe ;
    __Z( pStack ) ;
    ZE( countT* , pRslt ) ;
    if( third ) pRslt = &*(countT*)pbnu ;
    else        pRslt = &(*pStack)[ idP ] ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return *pRslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600a.switchstackc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600b.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601600b.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601600b
#define IDFILE      (countT)0xf63


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.de10104.1.1.0.html\"\>de10104:  WAKEsHOW( "example.simplest.func.121000c.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 valueP
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks before finding its place on the thread for this stack
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const countT valueP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( valueP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xe95 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , valueP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600b.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600c.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601600c.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601600c
#define IDFILE      (countT)0xf64


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1130104.1.1.0.html\"\>1130104:  WAKEsHOW( "example.simplest.func.121000d.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 psttP
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks before finding its place on the thread for this stack
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const strokeS* const psttP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( psttP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xe98 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , psttP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600c.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600d.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601600d.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601600d
#define IDFILE      (countT)0xf65


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121000e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6c20104.1.1.0.html\"\>6c20104:  WAKEsHOW( "example.simplest.func.121000e.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc2P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count2S* const pc2P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc2P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xe9b ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc2P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600d.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600e.switchstackc.extractf BEGIN
#define DDNAME       "3func.3601600e.switchstackc.extractf"
#define DDNUMB      (countT)0x3601600e
#define IDFILE      (countT)0xf66


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.121000f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9e20104.1.1.0.html\"\>9e20104:  WAKEsHOW( "example.simplest.func.121000f.switchStackC.extractF" )\</A\>
returns the idP'th item and removes it from the stack for the current thread
like stackC::extractF but there a distinct stack for each thread is used
arguments
 idP
  can be 0
*/
/**/
/*1*/countT switchStackC::extractF( tinS& tinP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    ZE( countT , value ) ;
    if( !third ) value = pStack->extractF( tinP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

    return value ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600e.switchstackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600f.switchstackc.cflavorsf BEGIN
#define DDNAME       "3func.3601600f.switchstackc.cflavorsf"
#define DDNUMB      (countT)0x3601600f
#define IDFILE      (countT)0xf67


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cFlavorsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210010.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ae20104.1.1.0.html\"\>ae20104:  WAKEsHOW( "example.simplest.func.1210010.switchStackC.cFlavorsF" )\</A\>
returns the number of stacks (one for each of the threads that is currently using this object)
this number will be too high if some threads have not used the ! operator to declare that they are dying
*/
/**/

/*1*/countT switchStackC::cFlavorsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    countT cFlavors = swMe.cFlavorsF( tinP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return cFlavors ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601600f.switchstackc.cflavorsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016010.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016010.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016010
#define IDFILE      (countT)0xf68


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210012.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4e20104.1.1.0.html\"\>4e20104:  WAKEsHOW( "example.simplest.func.1210012.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc3P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count3S* const pc3P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc3P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016010.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016011.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016011.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016011
#define IDFILE      (countT)0xf69


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210013.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3e20104.1.1.0.html\"\>3e20104:  WAKEsHOW( "example.simplest.func.1210013.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc4P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count4S* const pc4P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc4P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016011.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016012.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016012.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016012
#define IDFILE      (countT)0xf6a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210014.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2e20104.1.1.0.html\"\>2e20104:  WAKEsHOW( "example.simplest.func.1210014.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc5P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count5S* const pc5P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc5P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016012.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016013.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016013.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016013
#define IDFILE      (countT)0xf6b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210015.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1e20104.1.1.0.html\"\>1e20104:  WAKEsHOW( "example.simplest.func.1210015.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc6P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count6S* const pc6P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc6P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016013.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016014.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016014.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016014
#define IDFILE      (countT)0xf6c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210016.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0e20104.1.1.0.html\"\>0e20104:  WAKEsHOW( "example.simplest.func.1210016.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc7P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count7S* const pc7P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc7P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016014.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016015.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016015.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016015
#define IDFILE      (countT)0xf6d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210017.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fd20104.1.1.0.html\"\>fd20104:  WAKEsHOW( "example.simplest.func.1210017.switchStackC.operator_shiftLeft" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pc8P
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const count8S* const pc8P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pc8P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016015.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016016.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016016.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016016
#define IDFILE      (countT)0xf6e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210018.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8c20104.1.1.0.html\"\>8c20104:  WAKEsHOW( "example.simplest.func.1210018.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc3P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count3S*& pc3P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc3P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016016.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016017.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016017.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016017
#define IDFILE      (countT)0xf6f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bc20104.1.1.0.html\"\>bc20104:  WAKEsHOW( "example.simplest.func.1210019.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc4P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count4S*& pc4P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc4P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016017.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016018.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016018.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016018
#define IDFILE      (countT)0xf70


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121001a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dc20104.1.1.0.html\"\>dc20104:  WAKEsHOW( "example.simplest.func.121001a.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc5P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count5S*& pc5P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc5P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016018.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016019.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016019.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016019
#define IDFILE      (countT)0xf71


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121001b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.fc20104.1.1.0.html\"\>fc20104:  WAKEsHOW( "example.simplest.func.121001b.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc6P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count6S*& pc6P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc6P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016019.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601a.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601601a.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x3601601a
#define IDFILE      (countT)0xf72


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121001c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1d20104.1.1.0.html\"\>1d20104:  WAKEsHOW( "example.simplest.func.121001c.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc7P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count7S*& pc7P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc7P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601a.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601b.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601601b.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x3601601b
#define IDFILE      (countT)0xf73


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121001d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4d20104.1.1.0.html\"\>4d20104:  WAKEsHOW( "example.simplest.func.121001d.switchStackC.operator_shiftRight" )\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pc8P
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( count8S*& pc8P )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pc8P ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601b.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601c.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601601c.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601601c
#define IDFILE      (countT)0xf74


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121001e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9c20104.1.1.0.html\"\>9c20104:  WAKEsHOW( "example.simplest.func.121001e.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc3P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count3S* const pc3P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc3P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xeac ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc3P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601c.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601d.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601601d.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601601d
#define IDFILE      (countT)0xf75


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121001f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ac20104.1.1.0.html\"\>ac20104:  WAKEsHOW( "example.simplest.func.121001f.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc4P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count4S* const pc4P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc4P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xeaf ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc4P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601d.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601e.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601601e.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601601e
#define IDFILE      (countT)0xf76


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210020.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cc20104.1.1.0.html\"\>cc20104:  WAKEsHOW( "example.simplest.func.1210020.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc5P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count5S* const pc5P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc5P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xeb2 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc5P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601e.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601f.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601601f.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601601f
#define IDFILE      (countT)0xf77


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210021.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ec20104.1.1.0.html\"\>ec20104:  WAKEsHOW( "example.simplest.func.1210021.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc6P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count6S* const pc6P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc6P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xeb5 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc6P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601601f.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016020.switchstackc.sinkf BEGIN
#define DDNAME       "3func.36016020.switchstackc.sinkf"
#define DDNUMB      (countT)0x36016020
#define IDFILE      (countT)0xf78


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210022.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0d20104.1.1.0.html\"\>0d20104:  WAKEsHOW( "example.simplest.func.1210022.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc7P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count7S* const pc7P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc7P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xeb8 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc7P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016020.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016021.switchstackc.sinkf BEGIN
#define DDNAME       "3func.36016021.switchstackc.sinkf"
#define DDNUMB      (countT)0x36016021
#define IDFILE      (countT)0xf79


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210023.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3d20104.1.1.0.html\"\>3d20104:  WAKEsHOW( "example.simplest.func.1210023.switchStackC.sinkF" )\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pc8P
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks down to find its place on the stack for this thread
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const count8S* const pc8P , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pc8P ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xebb ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pc8P , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016021.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016022.switchstackc.grabf BEGIN
#define DDNAME       "3func.36016022.switchstackc.grabf"
#define DDNUMB      (countT)0x36016022
#define IDFILE      (countT)0xf7a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210024.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAGoR( TAGiDnULL , idLineP , idiFileP , pbBitsP ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016022.switchstackc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016023.switchstackc.ungrabf BEGIN
#define DDNAME       "3func.36016023.switchstackc.ungrabf"
#define DDNUMB      (countT)0x36016023
#define IDFILE      (countT)0xf7b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210025.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::ungrabF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    _IO_
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016023.switchstackc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016024.switchstackc.downf BEGIN
#define DDNAME       "3func.36016024.switchstackc.downf"
#define DDNUMB      (countT)0x36016024
#define IDFILE      (countT)0xf7c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$downF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210026.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ce20104.1.1.0.html\"\>ce20104:  WAKEsHOW( "example.simplest.func.1210026.switchStackC.downF" )\</A\>
see the documentation for stackC::downF
*/
/**/
/*1*/countT& switchStackC::downF( tinS& tinP , handleC& handleP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT* , pv ) ;
    if( pStack ) pv = &pStack->downF( tinP , handleP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016024.switchstackc.downf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016025.switchstackc.upf BEGIN
#define DDNAME       "3func.36016025.switchstackc.upf"
#define DDNUMB      (countT)0x36016025
#define IDFILE      (countT)0xf7d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$upF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210027.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.de20104.1.1.0.html\"\>de20104:  WAKEsHOW( "example.simplest.func.1210027.switchStackC.upF" )\</A\>
see the documentation for stackC::upF
*/
/**/
/*1*/countT& switchStackC::upF( tinS& tinP , handleC& handleP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT* , pv ) ;
    if( pStack ) pv = &pStack->upF( tinP , handleP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016025.switchstackc.upf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016026.switchstackc.leverf BEGIN
#define DDNAME       "3func.36016026.switchstackc.leverf"
#define DDNUMB      (countT)0x36016026
#define IDFILE      (countT)0xf7e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$leverF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210028.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.be20104.1.1.0.html\"\>be20104:  WAKEsHOW( "example.simplest.func.1210028.switchStackC.leverF" )\</A\>
*/
/**/

/*1*/countT switchStackC::leverF( tinS& tinP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT lever = swMe.leverF( tinP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

    return lever ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016026.switchstackc.leverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016027.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016027.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016027
#define IDFILE      (countT)0xf7f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210029.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ee10104.1.1.0.html\"\>ee10104:  WAKEsHOW( "example.simplest.func.1210029.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching cP is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with cP determines the result and terminates the search
arguments
 cP
*/
/**/

/*1*/countT switchStackC::operator () ( const countT cP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( cP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016027.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016028.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016028.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016028
#define IDFILE      (countT)0xf80


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7d20104.1.1.0.html\"\>7d20104:  WAKEsHOW( "example.simplest.func.121002a.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching psttP is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with psttP determines the result and terminates the search
arguments
 psttP
*/
/**/

/*1*/countT switchStackC::operator () ( const strokeS* const psttP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( psttP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016028.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016029.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016029.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016029
#define IDFILE      (countT)0xf81


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8d20104.1.1.0.html\"\>8d20104:  WAKEsHOW( "example.simplest.func.121002b.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c2P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c2P determines the result and terminates the search
arguments
 c2P
*/
/**/

/*1*/countT switchStackC::operator () ( count2S& c2P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c2P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016029.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602a.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602a.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602a
#define IDFILE      (countT)0xf82


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9d20104.1.1.0.html\"\>9d20104:  WAKEsHOW( "example.simplest.func.121002c.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c3P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c3P determines the result and terminates the search
arguments
 c3P
*/
/**/

/*1*/countT switchStackC::operator () ( count3S& c3P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c3P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602a.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602b.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602b.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602b
#define IDFILE      (countT)0xf83


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ad20104.1.1.0.html\"\>ad20104:  WAKEsHOW( "example.simplest.func.121002d.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c4P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c4P determines the result and terminates the search
arguments
 c4P
*/
/**/

/*1*/countT switchStackC::operator () ( count4S& c4P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c4P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602b.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602c.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602c.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602c
#define IDFILE      (countT)0xf84


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.bd20104.1.1.0.html\"\>bd20104:  WAKEsHOW( "example.simplest.func.121002e.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c5P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c5P determines the result and terminates the search
arguments
 c5P
*/
/**/

/*1*/countT switchStackC::operator () ( count5S& c5P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c5P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602c.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602d.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602d.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602d
#define IDFILE      (countT)0xf85


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121002f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.cd20104.1.1.0.html\"\>cd20104:  WAKEsHOW( "example.simplest.func.121002f.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c6P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c6P determines the result and terminates the search
arguments
 c6P
*/
/**/

/*1*/countT switchStackC::operator () ( count6S& c6P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c6P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602d.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602e.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602e.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602e
#define IDFILE      (countT)0xf86


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210030.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.dd20104.1.1.0.html\"\>dd20104:  WAKEsHOW( "example.simplest.func.1210030.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c7P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c7P determines the result and terminates the search
arguments
 c7P
*/
/**/

/*1*/countT switchStackC::operator () ( count7S& c7P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c7P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602e.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602f.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601602f.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601602f
#define IDFILE      (countT)0xf87


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210031.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.ed20104.1.1.0.html\"\>ed20104:  WAKEsHOW( "example.simplest.func.1210031.switchStackC.operator_call" )\</A\>
evaluates to the id of the slot in which a value matching c8P is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with c8P determines the result and terminates the search
arguments
 c8P
*/
/**/

/*1*/countT switchStackC::operator () ( count8S& c8P , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( c8P , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601602f.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016030.switchstackc.replaceleverf BEGIN
#define DDNAME       "3func.36016030.switchstackc.replaceleverf"
#define DDNUMB      (countT)0x36016030
#define IDFILE      (countT)0xf88


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$replaceLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210032.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f030104.1.1.0.html\"\>f030104:  WAKEsHOW( "example.simplest.func.1210032.switchStackC.replaceLeverF" )\</A\>
*/
/**/

/*1*/voidT switchStackC::replaceLeverF( tinS& tinP , countT& leverP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    swMe.replaceLeverF( tinP , leverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016030.switchstackc.replaceleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016031.switchstackc.replaceleverf BEGIN
#define DDNAME       "3func.36016031.switchstackc.replaceleverf"
#define DDNUMB      (countT)0x36016031
#define IDFILE      (countT)0xf89


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$replaceLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210033.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0130104.1.1.0.html\"\>0130104:  WAKEsHOW( "example.simplest.func.1210033.switchStackC.replaceLeverF" )\</A\>
*/
/**/

/*1*/voidT switchStackC::replaceLeverF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    swMe.replaceLeverF( tinP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016031.switchstackc.replaceleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016032.switchstackc.topf BEGIN
#define DDNAME       "3func.36016032.switchstackc.topf"
#define DDNUMB      (countT)0x36016032
#define IDFILE      (countT)0xf8a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$topF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210034.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f230104.1.1.0.html\"\>f230104:  WAKEsHOW( "example.simplest.func.1210034.switchStackC.topF" )\</A\>
this function is a fast alternative to operator[] for referencing the top item on the stack for the calling thread
this function is not serialized, performs no error checking, and does not perform the standard overhead
*/
/**/

/*1*/countT& switchStackC::topF( tinS& tinP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    return ((stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ))->topF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016032.switchstackc.topf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016033.switchstackc.cplatesf BEGIN
#define DDNAME       "3func.36016033.switchstackc.cplatesf"
#define DDNUMB      (countT)0x36016033
#define IDFILE      (countT)0xf8b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cPlatesF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210035.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0330104.1.1.0.html\"\>0330104:  WAKEsHOW( "example.simplest.func.1210035.switchStackC.cPlatesF" )\</A\>
like operator countT except this function supports bTinHasLeverP
 when bTinHasLeverP is 0, this is identical to operator countT
*/
/**/

/*1*/countT switchStackC::cPlatesF( tinS& tinP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    ZE( countT , cPlates ) ;
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( pStack ) cPlates = *pStack ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016033.switchstackc.cplatesf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016034.switchstackc.platef BEGIN
#define DDNAME       "3func.36016034.switchstackc.platef"
#define DDNUMB      (countT)0x36016034
#define IDFILE      (countT)0xf8c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$plateF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210036.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1330104.1.1.0.html\"\>1330104:  WAKEsHOW( "example.simplest.func.1210036.switchStackC.plateF" )\</A\>
like operator [] but also supports bTinHasLeverP
*/
/**/

/*1*/countT& switchStackC::plateF( tinS& tinP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    ZE( countT* , pRslt ) ;
    if( third ) pRslt = &*(countT*)pbnu ;
    else        pRslt = &(*pStack)[ idP ] ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return *pRslt ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016034.switchstackc.platef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016035.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016035.switchstackc.pushf"
#define DDNUMB      (countT)0x36016035
#define IDFILE      (countT)0xf8d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210037.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2330104.1.1.0.html\"\>2330104:  WAKEsHOW( "example.simplest.func.1210037.switchStackC.pushF" )\</A\>
places the address of an object onto this stack object
evaluates to a reference to this stack object
like operator << except also supports bTinHasLeverP
arguments
 valueP
*/
/**/

/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const countT valueP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xecf ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) *pStack << valueP ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016035.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016036.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016036.switchstackc.pullf"
#define DDNUMB      (countT)0x36016036
#define IDFILE      (countT)0xf8e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210038.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3330104.1.1.0.html\"\>3330104:  WAKEsHOW( "example.simplest.func.1210038.switchStackC.pullF" )\</A\>
removes the item that was most recently put onto the stack
evaluates to a reference to this stack object
like operator >> except supports bTinHasLeverP
arguments
 tinP
 valueP
 bTinHasLeverP
*/
/**/

/*1*/switchStackC& switchStackC::pullF( tinS& tinP , countT& valueP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    if( !pStack )
    {
        __( dosGetInfoBlocksIdThreadIF() ) ;
        __1
    }
    if( !third ) *pStack >> valueP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016036.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016037.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016037.switchstackc.pushf"
#define DDNUMB      (countT)0x36016037
#define IDFILE      (countT)0xf8f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210039.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4330104.1.1.0.html\"\>4330104:  WAKEsHOW( "example.simplest.func.1210039.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 psttP
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const strokeS* const psttP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)psttP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016037.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016038.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016038.switchstackc.pushf"
#define DDNUMB      (countT)0x36016038
#define IDFILE      (countT)0xf90


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6330104.1.1.0.html\"\>6330104:  WAKEsHOW( "example.simplest.func.121003a.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc2P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count2S* const pc2P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc2P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016038.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016039.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016039.switchstackc.pushf"
#define DDNUMB      (countT)0x36016039
#define IDFILE      (countT)0xf91


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8330104.1.1.0.html\"\>8330104:  WAKEsHOW( "example.simplest.func.121003b.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc3P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count3S* const pc3P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc3P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016039.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603a.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601603a.switchstackc.pushf"
#define DDNUMB      (countT)0x3601603a
#define IDFILE      (countT)0xf92


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.a330104.1.1.0.html\"\>a330104:  WAKEsHOW( "example.simplest.func.121003c.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc4P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count4S* const pc4P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc4P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603a.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603b.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601603b.switchstackc.pushf"
#define DDNUMB      (countT)0x3601603b
#define IDFILE      (countT)0xf93


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.c330104.1.1.0.html\"\>c330104:  WAKEsHOW( "example.simplest.func.121003d.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc5P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count5S* const pc5P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc5P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603b.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603c.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601603c.switchstackc.pushf"
#define DDNUMB      (countT)0x3601603c
#define IDFILE      (countT)0xf94


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003e.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e330104.1.1.0.html\"\>e330104:  WAKEsHOW( "example.simplest.func.121003e.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc6P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count6S* const pc6P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc6P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603c.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603d.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601603d.switchstackc.pushf"
#define DDNUMB      (countT)0x3601603d
#define IDFILE      (countT)0xf95


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121003f.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0430104.1.1.0.html\"\>0430104:  WAKEsHOW( "example.simplest.func.121003f.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc7P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count7S* const pc7P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc7P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603d.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603e.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601603e.switchstackc.pushf"
#define DDNUMB      (countT)0x3601603e
#define IDFILE      (countT)0xf96


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210040.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2430104.1.1.0.html\"\>2430104:  WAKEsHOW( "example.simplest.func.1210040.switchStackC.pushF" )\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pc8P
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const count8S* const pc8P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pc8P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603e.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603f.switchstackc.pullf BEGIN
#define DDNAME       "3func.3601603f.switchstackc.pullf"
#define DDNUMB      (countT)0x3601603f
#define IDFILE      (countT)0xf97


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210041.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.5330104.1.1.0.html\"\>5330104:  WAKEsHOW( "example.simplest.func.1210041.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 psttP
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , strokeS*& psttP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)psttP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601603f.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016040.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016040.switchstackc.pullf"
#define DDNUMB      (countT)0x36016040
#define IDFILE      (countT)0xf98


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210042.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7330104.1.1.0.html\"\>7330104:  WAKEsHOW( "example.simplest.func.1210042.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc2P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count2S*& pc2P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc2P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016040.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016041.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016041.switchstackc.pullf"
#define DDNUMB      (countT)0x36016041
#define IDFILE      (countT)0xf99


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210043.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.9330104.1.1.0.html\"\>9330104:  WAKEsHOW( "example.simplest.func.1210043.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc3P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count3S*& pc3P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc3P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016041.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016042.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016042.switchstackc.pullf"
#define DDNUMB      (countT)0x36016042
#define IDFILE      (countT)0xf9a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210044.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.b330104.1.1.0.html\"\>b330104:  WAKEsHOW( "example.simplest.func.1210044.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc4P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count4S*& pc4P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc4P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016042.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016043.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016043.switchstackc.pullf"
#define DDNUMB      (countT)0x36016043
#define IDFILE      (countT)0xf9b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210045.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d330104.1.1.0.html\"\>d330104:  WAKEsHOW( "example.simplest.func.1210045.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc5P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count5S*& pc5P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc5P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016043.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016044.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016044.switchstackc.pullf"
#define DDNUMB      (countT)0x36016044
#define IDFILE      (countT)0xf9c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210046.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.f330104.1.1.0.html\"\>f330104:  WAKEsHOW( "example.simplest.func.1210046.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc6P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count6S*& pc6P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc6P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016044.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016045.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016045.switchstackc.pullf"
#define DDNUMB      (countT)0x36016045
#define IDFILE      (countT)0xf9d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210047.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1430104.1.1.0.html\"\>1430104:  WAKEsHOW( "example.simplest.func.1210047.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc7P
*/
/**/

/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count7S*& pc7P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc7P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016045.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016046.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016046.switchstackc.pullf"
#define DDNUMB      (countT)0x36016046
#define IDFILE      (countT)0xf9e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210048.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3430104.1.1.0.html\"\>3430104:  WAKEsHOW( "example.simplest.func.1210048.switchStackC.pullF" )\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pc8P
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , count8S*& pc8P , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pc8P , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016046.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016047.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016047.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016047
#define IDFILE      (countT)0xf9f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121004a.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const nicNameC* const pNicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pNicNameP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016047.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016048.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016048.switchstackc.pushf"
#define DDNUMB      (countT)0x36016048
#define IDFILE      (countT)0xfa0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004b.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const nicNameC* const pNicNameP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pNicNameP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016048.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016049.switchstackc.sinkf BEGIN
#define DDNAME       "3func.36016049.switchstackc.sinkf"
#define DDNUMB      (countT)0x36016049
#define IDFILE      (countT)0xfa1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004c.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const nicNameC* const pNicNameP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pNicNameP ) ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xee5 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pNicNameP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016049.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604a.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601604a.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x3601604a
#define IDFILE      (countT)0xfa2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121004d.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( nicNameC*& pNicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pNicNameP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604a.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604b.switchstackc.pullf BEGIN
#define DDNAME       "3func.3601604b.switchstackc.pullf"
#define DDNUMB      (countT)0x3601604b
#define IDFILE      (countT)0xfa3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004e.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , nicNameC*& pNicNameP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pNicNameP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604b.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604c.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601604c.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601604c
#define IDFILE      (countT)0xfa4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121004f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::operator () ( nicNameC& nicNameP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
        __( idType - ifcSTACKtYPE_PTR_nicNameC && idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( nicNameP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604c.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604d.switchstackc.cplatesallf BEGIN
#define DDNAME       "3func.3601604d.switchstackc.cplatesallf"
#define DDNUMB      (countT)0x3601604d
#define IDFILE      (countT)0xfa5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cPlatesAllF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210050.1.0.html\"\>definition\</A\>
during evaluation, modifies the value in the lever
returns the total number of plates
 equivalent to calling operator countT for each lever value and totalling up the sum
*/
/**/

/*1*/countT switchStackC::cPlatesAllF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    ZE( countT , cPlatesAll ) ;
    {
        if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
        else if( !osTidOwner ) osTidOwner = tinP.osTid ;
        else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
        countT cFlavors = swMe.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            stackC* pStack = (stackC*)(countT)swMe[ idf ] ;
            if( pStack ) cPlatesAll += *pStack ;
        }
        if( pBaton ) pBaton->ungrabF( tinP ) ;
    }

    return cPlatesAll ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604d.switchstackc.cplatesallf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604e.switchstackc.idlevertypef BEGIN
#define DDNAME       "3func.3601604e.switchstackc.idlevertypef"
#define DDNUMB      (countT)0x3601604e
#define IDFILE      (countT)0xfa6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idLeverTypeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210051.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::idLeverTypeF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    return swMe.idLeverTypeF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604e.switchstackc.idlevertypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604f.switchstackc.stackf BEGIN
#define DDNAME       "3func.3601604f.switchstackc.stackf"
#define DDNUMB      (countT)0x3601604f
#define IDFILE      (countT)0xfa7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$stackF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210052.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/stackC& switchStackC::stackF( tinS& tinP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return stnu ;
        __Z( idP ) ;
        if( third ) return stnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    __( idP > swMe.cFlavorsF( tinP ) ) ;
    stackC* pStack = (stackC*)(countT)swMe[ idP ] ;
    __Z( pStack ) ;

    ZE( stackC* , pStFound ) ;
    if( third ) pStFound = &stnu ;
    else        pStFound = pStack ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return *pStFound ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601604f.switchstackc.stackf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016050.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016050.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016050
#define IDFILE      (countT)0xfa8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210053.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsSwitchP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( thirdC& thirdP , tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( thirdP , tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
recycleLever6( 0 ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xeec ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016050.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016051.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016051.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016051
#define IDFILE      (countT)0xfa9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210054.1.0.html\"\>definition\</A\>
arguments
 thirdP
 tinP
 flagsSwitchP
 pczLeverP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , const countT*& pczLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , pczLeverP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
recycleLever6( 0 ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xef0 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016051.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016052.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016052.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016052
#define IDFILE      (countT)0xfaa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210055.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsSwitchP
 cLeverP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , countT& cLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , cLeverP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_countT ) ,
recycleLever2( flagsSwitchP ) ,
recycleLever3( (countT)&cLeverP ) ,
recycleLever4( flagsStackP ) ,
recycleLever5( idTypeP ) ,
recycleLever6( (countT)pLeverLathRefP ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xef4 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016052.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016053.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016053.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016053
#define IDFILE      (countT)0xfab


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210056.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const soulC* const pSoulP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pSoulP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016053.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016054.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016054.switchstackc.pushf"
#define DDNUMB      (countT)0x36016054
#define IDFILE      (countT)0xfac


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210057.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const soulC* const pSoulP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pSoulP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016054.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016055.switchstackc.sinkf BEGIN
#define DDNAME       "3func.36016055.switchstackc.sinkf"
#define DDNUMB      (countT)0x36016055
#define IDFILE      (countT)0xfad


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210058.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const soulC* const pSoulP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pSoulP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xefb ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pSoulP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016055.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016056.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016056.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016056
#define IDFILE      (countT)0xfae


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210059.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( soulC*& pSoulP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pSoulP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016056.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016057.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016057.switchstackc.pullf"
#define DDNUMB      (countT)0x36016057
#define IDFILE      (countT)0xfaf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.121005a.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , soulC*& pSoulP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pSoulP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016057.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016058.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016058.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016058
#define IDFILE      (countT)0xfb0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121005b.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::operator () ( soulC& soulP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( soulP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016058.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016059.switchstackc.freef BEGIN
#define DDNAME       "3func.36016059.switchstackc.freef"
#define DDNUMB      (countT)0x36016059
#define IDFILE      (countT)0xfb1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeF.0.html\"\>instances\</A\>
\<A HREF=\"5.121005c.1.0.html\"\>definition\</A\>
frees all resources associated with the current lever
arguments
 tinP
 bRetainFlavorP
  can be 0 or 1
  will normally be 1 if called within a flavor traversal loop
  will normally be 0 if not called within a flavor traversal loop
  if true then the flavor will be removed
*/
/**/

/*1*/voidT switchStackC::freeF( tinS& tinP , const boolT bRetainFlavorP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC*& pStack = *(stackC**)&(countT&)swMe ;

    if( pStack )
    {
        _IO_
        DEL( pStack ) ;
    }

    if( !bRetainFlavorP )
    {
        _IO_
        swMe.freeF( tinP ) ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016059.switchstackc.freef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605a.switchstackc.stackf BEGIN
#define DDNAME       "3func.3601605a.switchstackc.stackf"
#define DDNUMB      (countT)0x3601605a
#define IDFILE      (countT)0xfb2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$stackF.0.html\"\>instances\</A\>
\<A HREF=\"5.121005d.1.0.html\"\>definition\</A\>
during evaluation, modifies the value in the lever
i load all plate values from all of my stacks onto stackP
if i contain pointers, i just load those pointer values onto stackP
 i do not create copies of the data being pointed to
 it is the caller's responsibility to ensure that the pointer values are not used after they are no longer valid
arguments
 tinP
 stackP
  must either be of same type as me or of type ifcSTACKtYPE_ANY
  must have the same flags as me
  can be, but need not be, empty
*/
/**/

/*1*/voidT switchStackC::stackF( tinS& tinP , stackC& stackP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( stackP.idTypeF( tinP ) != ifcSTACKtYPE_ANY && stackP.idTypeF( tinP ) != idType ) ;
        __( stackP.flagsF( tinP )  - flagsStack  ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    countT cFlavors = swMe.cFlavorsF( tinP ) ;
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        stackC* pStack = (stackC*)(countT)swMe[ idf ] ;
        if( pStack && *pStack )
        {
            handleC hUp( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do stackP << pStack->upF( tinP , hUp ) ;
            while( ~hUp && !third && !pStack->third ) ;
        }
    }
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605a.switchstackc.stackf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605b.switchstackc.insertf BEGIN
#define DDNAME       "3func.3601605b.switchstackc.insertf"
#define DDNUMB      (countT)0x3601605b
#define IDFILE      (countT)0xfb3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$insertF.0.html\"\>instances\</A\>
\<A HREF=\"5.121005e.1.0.html\"\>definition\</A\>
like stackC::insertF but a distinct stack for each thread (or explicit lever) is used
*/
/**/
/*1*/voidT switchStackC::insertF( tinS& tinP , const countT valueP , const countT idTypeP , const countT idP , const boolT bOtherWayP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf04 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->insertF( tinP , valueP , idTypeP , idP , bOtherWayP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605b.switchstackc.insertf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605c.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.3601605c.switchstackc.switchstackc"
#define DDNUMB      (countT)0x3601605c
#define IDFILE      (countT)0xfb4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121005f.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsSwitchP
 nicNameP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , nicNameC& nicNameP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , nicNameP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
recycleLever6( 0 ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xf06 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605c.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605d.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.3601605d.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x3601605d
#define IDFILE      (countT)0xfb5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210060.1.0.html\"\>definition\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like pushF except does not support pTinHasLeverP
arguments
 pbP
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const byteT* const pbP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pbP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605d.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605e.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601605e.switchstackc.pushf"
#define DDNUMB      (countT)0x3601605e
#define IDFILE      (countT)0xfb6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210061.1.0.html\"\>definition\</A\>
functionally identical to operator << ( const countT valueP )
evaluates to a reference to this stack object
like operator << except supports pTinHasLeverP
arguments
 pbP
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const byteT* const pbP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pbP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605e.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605f.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601605f.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601605f
#define IDFILE      (countT)0xfb7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210062.1.0.html\"\>definition\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pbP
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks before finding its place on the thread for this stack
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const byteT* const pbP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pbP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf0d ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pbP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601605f.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016060.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016060.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016060
#define IDFILE      (countT)0xfb8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210063.1.0.html\"\>definition\</A\>
functionally identical to operator >> ( countT& valueP )
like pullF but does not support bTinHasLeverP
arguments
 pbP
*/
/**/

/*1*/switchStackC& switchStackC::operator >> ( byteT*& pbP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pbP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016060.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016061.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016061.switchstackc.pullf"
#define DDNUMB      (countT)0x36016061
#define IDFILE      (countT)0xfb9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210064.1.0.html\"\>definition\</A\>
functionally identical to operator >> ( countT& valueP )
like operator >> but supports bTinHasLeverP
arguments
 pbP
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , byteT*& pbP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pbP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016061.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016062.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016062.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016062
#define IDFILE      (countT)0xfba


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210065.1.0.html\"\>definition\</A\>
evaluates to the id of the slot in which a value matching pbP is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with pbP determines the result and terminates the search
arguments
 pbP
*/
/**/

/*1*/countT switchStackC::operator () ( const byteT* const pbP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( pbP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016062.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016063.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016063.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016063
#define IDFILE      (countT)0xfbb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210066.1.0.html\"\>definition\</A\>
arguments
 thirdP
 tinP
 flagsSwitchP
 psttLeverP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , strokeS*& psttLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , psttLeverP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_PTR_strokeS ) ,
recycleLever2( flagsSwitchP ) ,
recycleLever3( (countT)&psttLeverP ) ,
recycleLever4( flagsStackP ) ,
recycleLever5( idTypeP ) ,
recycleLever6( (countT)pLeverLathRefP ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xf12 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016063.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016064.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016064.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016064
#define IDFILE      (countT)0xfbc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210067.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsSwitchP
 soulP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , soulC& soulP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , soulP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
recycleLever6( 0 ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xf16 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016064.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016065.switchstackc.randomf BEGIN
#define DDNAME       "3func.36016065.switchstackc.randomf"
#define DDNUMB      (countT)0x36016065
#define IDFILE      (countT)0xfbd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210068.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/countT& switchStackC::randomF( tinS& tinP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    countT& vv = pStack ? pStack->randomF( tinP ) : *(countT*)pbnu ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016065.switchstackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016066.switchstackc.flagsstackf BEGIN
#define DDNAME       "3func.36016066.switchstackc.flagsstackf"
#define DDNUMB      (countT)0x36016066
#define IDFILE      (countT)0xfbe


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$flagsStackF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210069.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::flagsStackF( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
    return flagsStack ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016066.switchstackc.flagsstackf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016067.switchstackc.idtypef BEGIN
#define DDNAME       "3func.36016067.switchstackc.idtypef"
#define DDNUMB      (countT)0x36016067
#define IDFILE      (countT)0xfbf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idTypeF.0.html\"\>instances\</A\>
\<A HREF=\"5.121006a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::idTypeF( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016067.switchstackc.idtypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016068.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016068.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016068
#define IDFILE      (countT)0xfc0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121006b.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const nicNameC& nicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)&nicNameP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016068.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016069.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016069.switchstackc.pushf"
#define DDNUMB      (countT)0x36016069
#define IDFILE      (countT)0xfc1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121006c.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const nicNameC& nicNameP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)&nicNameP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016069.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606a.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601606a.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601606a
#define IDFILE      (countT)0xfc2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121006d.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const nicNameC& nicNameP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf1e ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , nicNameP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606a.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606b.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601606b.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x3601606b
#define IDFILE      (countT)0xfc3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121006e.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( nicNameC& nicNameP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        __NZ( nicNameP ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT c_pNicName = (countT)&nicNameP ;
    *this >> c_pNicName ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606b.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606c.switchstackc.pullf BEGIN
#define DDNAME       "3func.3601606c.switchstackc.pullf"
#define DDNUMB      (countT)0x3601606c
#define IDFILE      (countT)0xfc4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.121006f.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , nicNameC& nicNameP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_nicNameC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT c_pNicName = (countT)&nicNameP ;
    pullF( tinP , c_pNicName , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606c.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606d.switchstackc.randomf BEGIN
#define DDNAME       "3func.3601606d.switchstackc.randomf"
#define DDNUMB      (countT)0x3601606d
#define IDFILE      (countT)0xfc5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210070.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::randomF( tinS& tinP , nicNameC& nicNameP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( pStack ) pStack->randomF( tinP , nicNameP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606d.switchstackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606e.switchstackc.extractf BEGIN
#define DDNAME       "3func.3601606e.switchstackc.extractf"
#define DDNUMB      (countT)0x3601606e
#define IDFILE      (countT)0xfc6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210071.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack for the current thread
like stackC::extractF but there a distinct stack for each thread is used
arguments
 idP
  can be 0
*/
/**/
/*1*/voidT switchStackC::extractF( tinS& tinP , nicNameC& nicNameP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    if( !third ) pStack->extractF( tinP , nicNameP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606e.switchstackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606f.switchstackc.extractf BEGIN
#define DDNAME       "3func.3601606f.switchstackc.extractf"
#define DDNUMB      (countT)0x3601606f
#define IDFILE      (countT)0xfc7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210072.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack for the current thread
like stackC::extractF but there a distinct stack for each thread is used
arguments
 idP
  can be 0
*/
/**/
/*1*/voidT switchStackC::extractF( tinS& tinP , timeS& timeP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    if( !third ) pStack->extractF( tinP , timeP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601606f.switchstackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016070.switchstackc.randomf BEGIN
#define DDNAME       "3func.36016070.switchstackc.randomf"
#define DDNUMB      (countT)0x36016070
#define IDFILE      (countT)0xfc8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$randomF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210073.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::randomF( tinS& tinP , timeS& timeP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( pStack ) pStack->randomF( tinP , timeP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016070.switchstackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016071.switchstackc.pullf BEGIN
#define DDNAME       "3func.36016071.switchstackc.pullf"
#define DDNUMB      (countT)0x36016071
#define IDFILE      (countT)0xfc9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210074.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , timeS& timeP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT c_pNicName = (countT)&timeP ;
    pullF( tinP , c_pNicName , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016071.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016072.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016072.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016072
#define IDFILE      (countT)0xfca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210075.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( timeS& timeP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        __NZ( timeP ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT c_pNicName = (countT)&timeP ;
    *this >> c_pNicName ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016072.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016073.switchstackc.sinkf BEGIN
#define DDNAME       "3func.36016073.switchstackc.sinkf"
#define DDNUMB      (countT)0x36016073
#define IDFILE      (countT)0xfcb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210076.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const timeS& timeP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf29 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , timeP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016073.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016074.switchstackc.pushf BEGIN
#define DDNAME       "3func.36016074.switchstackc.pushf"
#define DDNUMB      (countT)0x36016074
#define IDFILE      (countT)0xfcc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210077.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const timeS& timeP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)&timeP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016074.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016075.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016075.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016075
#define IDFILE      (countT)0xfcd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210078.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const timeS& timeP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)&timeP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016075.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016076.switchstackc.operator_call BEGIN
#define DDNAME       "3func.36016076.switchstackc.operator_call"
#define DDNUMB      (countT)0x36016076
#define IDFILE      (countT)0xfce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210079.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::operator () ( timeS& timeP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
        __( idType - ifcSTACKtYPE_timeS ) ;
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( timeP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016076.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016077.switchstackc.ctf BEGIN
#define DDNAME       "3func.36016077.switchstackc.ctf"
#define DDNUMB      (countT)0x36016077
#define IDFILE      (countT)0xfcf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ctF.0.html\"\>instances\</A\>
\<A HREF=\"5.121007a.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT switchStackC::ctF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    ZE( countT , cbData ) ;
    switch( idType )
    {
        case    ifcSTACKtYPE_nicNameC : cbData = processGlobal1I.cb_nicNameC_ ;
        case    ifcSTACKtYPE_timeS    : cbData = sizeof( timeS    ) ;
        default                       : cbData = sizeof( countT   ) ;
    }
    
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xf2e ) ;
    third.c_memsetIF( tinP , pbnu , cbData ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016077.switchstackc.ctf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016078.switchstackc.operator_stackc_ref BEGIN
#define DDNAME       "3func.36016078.switchstackc.operator_stackc_ref"
#define DDNUMB      (countT)0x36016078
#define IDFILE      (countT)0xfd0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121007b.1.0.html\"\>definition\</A\>
i evaluate to a reference to the stackC for the current lever value
i will allocate such a stack if there isn't already wo
take care to avoid using the reference that i return after freeing the associated flavor!
use me to create a flavor without adding any plates
*/
/**/

/*1*/switchStackC::operator stackC& ( voidT )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)(countT)swMe ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf30 ) ;
        __Z( pStack ) ;
        (countT&)swMe = (countT)pStack ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;

    return pStack ? *pStack : stnu ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016078.switchstackc.operator_stackc_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016079.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016079.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016079
#define IDFILE      (countT)0xfd1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121007c.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const measureT mP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << *(countT*)&mP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016079.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607a.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601607a.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601607a
#define IDFILE      (countT)0xfd2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121007d.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const measureT mP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf34 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , mP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607a.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607b.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.3601607b.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x3601607b
#define IDFILE      (countT)0xfd3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121007e.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( measureT& mP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( *(countT*)&mP ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> *(countT*)&mP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607b.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607c.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601607c.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601607c
#define IDFILE      (countT)0xfd4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121007f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchStackC::operator () ( const measureT mP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( mP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607c.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607d.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601607d.switchstackc.pushf"
#define DDNUMB      (countT)0x3601607d
#define IDFILE      (countT)0xfd5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210080.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const measureT mP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , *(countT*)&mP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607d.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607e.switchstackc.pullf BEGIN
#define DDNAME       "3func.3601607e.switchstackc.pullf"
#define DDNUMB      (countT)0x3601607e
#define IDFILE      (countT)0xfd6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210081.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , measureT& mP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , *(countT*)&mP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607e.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607f.switchstackc.extractf BEGIN
#define DDNAME       "3func.3601607f.switchstackc.extractf"
#define DDNUMB      (countT)0x3601607f
#define IDFILE      (countT)0xfd7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210082.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack for the current thread
like stackC::extractF but there a distinct stack for each thread is used
arguments
 idP
  can be 0
*/
/**/
/*1*/voidT switchStackC::extractF( tinS& tinP , byteT*& pbP , countT& cbP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    if( !third ) pStack->extractF( tinP , pbP , cbP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601607f.switchstackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016080.switchstackc.extractf BEGIN
#define DDNAME       "3func.36016080.switchstackc.extractf"
#define DDNUMB      (countT)0x36016080
#define IDFILE      (countT)0xfd8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$extractF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210083.1.0.html\"\>definition\</A\>
returns the idP'th item and removes it from the stack for the current thread
like stackC::extractF but there a distinct stack for each thread is used
arguments
 see the corresponding stackC::extractF
*/
/**/
/*1*/voidT switchStackC::extractF( byteT* const pbP , tinS& tinP , const countT idP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    __Z( pStack ) ;
    if( !third ) pStack->extractF( pbP , tinP , idP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016080.switchstackc.extractf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016081.switchstackc.freenullflavorsf BEGIN
#define DDNAME       "3func.36016081.switchstackc.freenullflavorsf"
#define DDNUMB      (countT)0x36016081
#define IDFILE      (countT)0xfd9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeNullFlavorsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210084.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT switchStackC::freeNullFlavorsF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    swMe.freeNullsF( tinP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016081.switchstackc.freenullflavorsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016082.switchstackc.downf BEGIN
#define DDNAME       "3func.36016082.switchstackc.downf"
#define DDNUMB      (countT)0x36016082
#define IDFILE      (countT)0xfda


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
see the documentation for stackC::downF
*/
/**/
/*1*/boolT switchStackC::downF( tinS& tinP , const boolT bQueryP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( boolT , bOk ) ;
    if( pStack ) bOk = pStack->downF( tinP , bQueryP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016082.switchstackc.downf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016083.switchstackc.upf BEGIN
#define DDNAME       "3func.36016083.switchstackc.upf"
#define DDNUMB      (countT)0x36016083
#define IDFILE      (countT)0xfdb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
see the documentation for stackC::upF
*/
/**/
/*1*/boolT switchStackC::upF( tinS& tinP , const boolT bQueryP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( boolT , bOk ) ;
    if( pStack ) bOk = pStack->upF( tinP , bQueryP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016083.switchstackc.upf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016084.switchstackc.inf BEGIN
#define DDNAME       "3func.36016084.switchstackc.inf"
#define DDNUMB      (countT)0x36016084
#define IDFILE      (countT)0xfdc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT switchStackC::inF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    boolT bOk = swMe.inF( tinP , bQueryP ) ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016084.switchstackc.inf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016085.switchstackc.outf BEGIN
#define DDNAME       "3func.36016085.switchstackc.outf"
#define DDNUMB      (countT)0x36016085
#define IDFILE      (countT)0xfdd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT switchStackC::outF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    boolT bOk = swMe.outF( tinP , bQueryP ) ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016085.switchstackc.outf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016086.switchstackc.grablistf BEGIN
#define DDNAME       "3func.36016086.switchstackc.grablistf"
#define DDNUMB      (countT)0x36016086
#define IDFILE      (countT)0xfde


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
see stackC::grabListF
the addresses that i return are for my LB structures
i guarantee that each address points to a lever encoding
 a lever is encoded either as a value or as a pointer to a value, depending upon my lever type
i guarantee that each address plus sizeof( countT ) will point to the beginning of the data value for a flavor
arguments
 see stackC::grabListF
 bSwitchP
  if 0 then each address that i return is to a data value in the stack for the current flavor
  if 1 then each address is to an LB structure, i.e. is the address of a lever encoding
*/
/**/
/*1*/voidT switchStackC::grabListF( tinS& tinP , countT**& ppcDownP , countT**& ppcUpP , countT& cDownP , countT& cUpP , const boolT bSwitchP , const boolT bTinHasLeverP , const boolT bNoGrabP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( bNoGrabP ) ;
    else if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    if( bSwitchP ) swMe.grabListF( tinP , ppcDownP , ppcUpP , cDownP , cUpP , 1 ) ;
    else
    {
        stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
        if( pStack ) pStack->grabListF( tinP , ppcDownP , ppcUpP , cDownP , cUpP , 1 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016086.switchstackc.grablistf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016087.switchstackc.idslotofleverf BEGIN
#define DDNAME       "3func.36016087.switchstackc.idslotofleverf"
#define DDNUMB      (countT)0x36016087
#define IDFILE      (countT)0xfdf


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
evaluates to the slot id that is occupied by this lever value
arguments
 leverP
  the lever value to search for
  can be 0
*/
/**/

/*1*/countT switchStackC::idSlotOfLeverF( tinS& tinP , const countT leverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT idSlot = swMe.idSlotOfLeverF( tinP , leverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016087.switchstackc.idslotofleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016088.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.36016088.switchstackc.switchstackc"
#define DDNUMB      (countT)0x36016088
#define IDFILE      (countT)0xfe0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121005f.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsSwitchP
 pbP
 cbP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , const byteT*& pbLeverP , const countT cbLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , pbLeverP , cbLeverP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
recycleLever6( 0 ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xf43 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016088.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016089.switchstackc.randomf BEGIN
#define DDNAME       "3func.36016089.switchstackc.randomf"
#define DDNUMB      (countT)0x36016089
#define IDFILE      (countT)0xfe1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT switchStackC::randomF( tinS& tinP , byteT*& pbP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( pStack ) pStack->randomF( tinP , pbP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016089.switchstackc.randomf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608a.switchstackc.purgef BEGIN
#define DDNAME       "3func.3601608a.switchstackc.purgef"
#define DDNUMB      (countT)0x3601608a
#define IDFILE      (countT)0xfe2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT switchStackC::purgeF( tinS& tinP , countT cPlatesRetainP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( pStack ) pStack->purgeF( tinP , cPlatesRetainP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608a.switchstackc.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608b.switchstackc.freeallf BEGIN
#define DDNAME       "3func.3601608b.switchstackc.freeallf"
#define DDNUMB      (countT)0x3601608b
#define IDFILE      (countT)0xfe3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT switchStackC::freeAllF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL    
    {
        if( third ) return ;
        __( swMe.idLeverTypeF( tinP ) == ifcIDtYPElEVER_tid ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    const countT idLeverType = swMe.idLeverTypeF( tinP ) ;
    byteT* const pbLever = swMe.pbLeverF( tinP ) ;

    countT cFlavors = swMe.cFlavorsF( tinP ) ;        //I HAVE GIVEN THIS A MOMENT OF THOUGHT FOR THE strokeS* lever type
    for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
    {
        switch( idLeverType )
        {
            case ifcIDtYPElEVER_countT :
            case ifcIDtYPElEVER_PTR_BLOB              :
            case ifcIDtYPElEVER_PTR_ptrStrokeS        :
            case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
            case ifcIDtYPElEVER_PTR_countT            :
            case ifcIDtYPElEVER_PTR_strokeS           :
            case ifcIDtYPElEVER_PTR_plateC            :
            case ifcIDtYPElEVER_PTR_osTextT           :
            {
                *(countT*)pbLever = swMe.leverF( tinP , idf ) ;
                break ;
            }
            case ifcIDtYPElEVER_PTR_nicNameC          :
            case ifcIDtYPElEVER_BLOBdOOMED                  :
            case ifcIDtYPElEVER_PTR_soulC             :
            {
                third.c_memcpyIF( tinP , pbLever , (byteT*)swMe.leverF( tinP , idf ) , swMe.cbLeverF() ) ;
                break ;
            }
        }

        freeF( tinP , 1 ) ;
    }
    freeNullFlavorsF( tinP ) ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608b.switchstackc.freeallf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608c.switchstackc.operator_call BEGIN
#define DDNAME       "3func.3601608c.switchstackc.operator_call"
#define DDNUMB      (countT)0x3601608c
#define IDFILE      (countT)0xfe4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210065.1.0.html\"\>definition\</A\>
evaluates to the id of the slot in which a value matching pbP is found, in the stack for the current lever value (or current thread)
 if the value is found at the top, this evaluates to 1
 the search begins at the top, and the first encounter with pbP determines the result and terminates the search
arguments
 pcP
*/
/**/

/*1*/countT switchStackC::operator () ( const countT* const pcP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL    
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    ZE( countT , ids ) ;
    if( pStack ) ids = (*pStack)( pcP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return ids ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608c.switchstackc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608d.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601608d.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601608d
#define IDFILE      (countT)0xfe5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.1210062.1.0.html\"\>definition\</A\>
like stackC::sinkF but there a distinct stack for each thread is used
arguments
 pcP
 flagsP
 ||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/1snip.001008b.flSTACKsINK_!||
 pSubtractFP
  used to determine how far this new item sinks before finding its place on the thread for this stack
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const countT* const pcP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pcP ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf0d ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pcP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608d.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608e.switchstackc.waitf BEGIN
#define DDNAME       "3func.3601608e.switchstackc.waitf"
#define DDNUMB      (countT)0x3601608e
#define IDFILE      (countT)0xfe6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT switchStackC::waitF( tinS& tinP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf34 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }

    //U::PREVENT ANOTHER THREAD FROM DELETING pStack (BY CALLING A FLAVOR FREEING FUNCTION) AT THIS TIME

    if( pBaton ) pBaton->ungrabF( tinP ) ;
    if( !third ) pStack->waitF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608e.switchstackc.waitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608f.switchstackc.waitgrabf BEGIN
#define DDNAME       "3func.3601608f.switchstackc.waitgrabf"
#define DDNUMB      (countT)0x3601608f
#define IDFILE      (countT)0xfe7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/boolT switchStackC::waitGrabF( tinS& tinP , const countT cPlatesLimitP , const boolT& bQuitP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xf34 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( pBaton ) pBaton->ungrabF( tinP ) ;

    //U::RACE: PREVENT ANOTHER THREAD FROM DELETING pStack (BY CALLING A FLAVOR FREEING FUNCTION) AT THIS TIME

    ZE( boolT , bGrabbed ) ;
    if( !third ) bGrabbed = pStack->waitGrabF( tinP , cPlatesLimitP , bQuitP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601608f.switchstackc.waitgrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016090.switchstackc.pleverlathreff BEGIN
#define DDNAME       "3func.36016090.switchstackc.pleverlathreff"
#define DDNUMB      (countT)0x36016090
#define IDFILE      (countT)0xfe8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT* switchStackC::pLeverLathRefF( tinS& tinP )/*1*/
{
    return swMe.pLeverLathRefF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016090.switchstackc.pleverlathreff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016091.switchstackc.recyclelever1f BEGIN
#define DDNAME       "3func.36016091.switchstackc.recyclelever1f"
#define DDNUMB      (countT)0x36016091
#define IDFILE      (countT)0xfe9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever1F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016091.switchstackc.recyclelever1f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016092.switchstackc.recyclelever2f BEGIN
#define DDNAME       "3func.36016092.switchstackc.recyclelever2f"
#define DDNUMB      (countT)0x36016092
#define IDFILE      (countT)0xfea


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever2F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016092.switchstackc.recyclelever2f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016093.switchstackc.recyclelever3f BEGIN
#define DDNAME       "3func.36016093.switchstackc.recyclelever3f"
#define DDNUMB      (countT)0x36016093
#define IDFILE      (countT)0xfeb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever3F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
    return recycleLever3 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016093.switchstackc.recyclelever3f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016094.switchstackc.recyclelever4f BEGIN
#define DDNAME       "3func.36016094.switchstackc.recyclelever4f"
#define DDNUMB      (countT)0x36016094
#define IDFILE      (countT)0xfec


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever4F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
    return recycleLever4 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016094.switchstackc.recyclelever4f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016095.switchstackc.recyclelever5f BEGIN
#define DDNAME       "3func.36016095.switchstackc.recyclelever5f"
#define DDNUMB      (countT)0x36016095
#define IDFILE      (countT)0xfed


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever5F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
    return recycleLever5 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016095.switchstackc.recyclelever5f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016097.switchstackc.recyclelever6f BEGIN
#define DDNAME       "3func.36016097.switchstackc.recyclelever6f"
#define DDNUMB      (countT)0x36016097
#define IDFILE      (countT)0xfee


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchStackC::recycleLever6F( tinS& tinP )/*1*/
{
    SCOOP
    if( tinP.fingerprint ) ;
    return recycleLever6 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016097.switchstackc.recyclelever6f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016098.switchstackc.operator_shiftleft BEGIN
#define DDNAME       "3func.36016098.switchstackc.operator_shiftleft"
#define DDNUMB      (countT)0x36016098
#define IDFILE      (countT)0xfef


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121004a.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator << ( const plateC* const pPlateP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_plateC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this << (countT)pPlateP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016098.switchstackc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016099.switchstackc.operator_shiftright BEGIN
#define DDNAME       "3func.36016099.switchstackc.operator_shiftright"
#define DDNUMB      (countT)0x36016099
#define IDFILE      (countT)0xff0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.121004d.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::operator >> ( plateC*& pPlateP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_plateC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    *this >> (countT&)pPlateP ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.36016099.switchstackc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609a.switchstackc.pushf BEGIN
#define DDNAME       "3func.3601609a.switchstackc.pushf"
#define DDNUMB      (countT)0x3601609a
#define IDFILE      (countT)0xff1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pushF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004b.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pushF( tinS& tinP , const plateC* const pPlateP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_plateC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pushF( tinP , (countT)pPlateP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609a.switchstackc.pushf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609b.switchstackc.sinkf BEGIN
#define DDNAME       "3func.3601609b.switchstackc.sinkf"
#define DDNUMB      (countT)0x3601609b
#define IDFILE      (countT)0xff2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$sinkF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004c.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/voidT switchStackC::sinkF( tinS& tinP , countT& idSlotP , const plateC* const pPlateP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( idSlotP ) ;
        __Z( pPlateP ) ;
        __( idType - ifcSTACKtYPE_PTR_plateC ) ;
        FV( flSTACKsINK , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xee5 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sinkF( tinP , idSlotP , pPlateP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609b.switchstackc.sinkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609c.switchstackc.pullf BEGIN
#define DDNAME       "3func.3601609c.switchstackc.pullf"
#define DDNUMB      (countT)0x3601609c
#define IDFILE      (countT)0xff3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pullF.0.html\"\>instances\</A\>
\<A HREF=\"5.121004e.1.0.html\"\>definition\</A\>
*/
/**/
/*1*/switchStackC& switchStackC::pullF( tinS& tinP , plateC*& pPlateP , const boolT bTinHasLeverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( idType - ifcSTACKtYPE_PTR_plateC ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pullF( tinP , (countT&)pPlateP , bTinHasLeverP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609c.switchstackc.pullf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609d.switchstackc.switchstackc BEGIN
#define DDNAME       "3func.3601609d.switchstackc.switchstackc"
#define DDNUMB      (countT)0x3601609d
#define IDFILE      (countT)0xff4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1210066.1.0.html\"\>definition\</A\>
arguments
 thirdP
 tinP
 flagsSwitchP
 pPlateLeverP
 flagsStackP
 idTypeP
*/
/**/

/*1*/switchStackC::switchStackC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsSwitchP , plateC*& pPlateLeverP , const flagsT flagsStackP , const countT idTypeP , const countT idGrabLayerP , countT* pLeverLathRefP , cbFT pCbFP )/*1*/ :
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
pbnu( 0 ) ,
stnu( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_null , 0 , idGrabLayerP ) ,
swMe( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsSwitchP , pPlateLeverP , pLeverLathRefP , 0 , idGrabLayerP ) ,
flagsSwitch( flagsSwitchP ) ,
flagsStack( flagsStackP ) ,
pCbF( pCbFP ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_PTR_plateC ) ,
recycleLever2( flagsSwitchP ) ,
recycleLever3( (countT)&pPlateLeverP ) ,
recycleLever4( flagsStackP ) ,
recycleLever5( idTypeP ) ,
recycleLever6( (countT)pLeverLathRefP ) ,
idGrabLayer( idGrabLayerP ) ,
idType( idTypeP ? idTypeP : ifcSTACKtYPE_countT )
{
    ___( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsStackP ) ;
        FV( flSTACKc , flagsSwitchP ) ;
        __( !pBaton && !( F(flagsSwitchP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xf12 ) ;

    ctF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609d.switchstackc.switchstackc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609e.switchstackc.sortf BEGIN
#define DDNAME       "3func.3601609e.switchstackc.sortf"
#define DDNUMB      (countT)0x3601609e
#define IDFILE      (countT)0xff5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT switchStackC::sortF( tinS& tinP , const flagsT flagsP , const boolT bTinHasLeverP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKsORT , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    stackC* pStack = (stackC*)( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT)swMe ) ;
    if( !pStack )
    {
        pStack = new( 0 , tinP , LF ) stackC( tinP , third , TAG( TAGiDnULL ) , flagsStack , idType , idGrabLayer , swMe.pLeverLathRefF( tinP ) , 0 , pCbF ) ; ___BITScT( pStack , 0xee5 ) ;
        __Z( pStack ) ;
        ( bTinHasLeverP ? swMe.forIfcThreadF( tinP ) : (countT&)swMe ) = (countT)pStack ;
    }
    if( !third ) pStack->sortF( tinP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609e.switchstackc.sortf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609f.switchstackc.sortflavorsf BEGIN
#define DDNAME       "3func.3601609f.switchstackc.sortflavorsf"
#define DDNUMB      (countT)0x3601609f
#define IDFILE      (countT)0xff6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT switchStackC::sortFlavorsF( tinS& tinP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKsORT , flagsP ) ;
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(flagsSwitch) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    swMe.sortF( tinP , flagsP , pSubtractFP , subtractionParmP ) ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36016* : 3func.3601609f.switchstackc.sortflavorsf END
