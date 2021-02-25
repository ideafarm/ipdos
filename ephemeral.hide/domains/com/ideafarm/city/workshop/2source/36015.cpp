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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015001.switchc.freef BEGIN
#define DDNAME       "3func.36015001.switchc.freef"
#define DDNUMB      (countT)0x36015001
#define IDFILE      (countT)0xf2a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200001.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0120104.1.1.0.html\"\>0120104:  WAKEsHOW( "example.simplest.func.1200001.switchC.freeF" )\</A\>
if we are switching on the thread id, this should be called just before terminating execution of a thread
if we are switching on an explicit lever, this should be called when the current value of that lever will never be used again to access the switch
the effect of not calling this is a slight performance penalty when other threads use this switchC object
 not calling me, or calling me and then making another reference on this thread, results in an entry being retained for this thread
 the performance penalty is insignificant except when this switchC is used with many, many ephemeral threads
do not call me within a loop that uses cFlavorsF and leverF
 this function changes the number of lever values and the index numbers of some lever values
arguments
 tinP
*/
/**/

/*1*/voidT switchC::freeF( tinS& tinP )/*1*/
{
    SCOOP
    //U: IF third THEN THIS WILL LEAK pbLB
    //U: THE PRECEDING COMMENT MIGHT BE FALSE NOW THAT IMAGE IS STORED RIGHT IN THE PLATE

    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    ZE( countT , query ) ;
    switch( idLeverType )
    {
        case ifcIDtYPElEVER_tid                     : { query = dosGetInfoBlocksIdThreadIF()                  ; break ; }
        case ifcIDtYPElEVER_countT                  : { query = *(countT*)pbLever                                         ; break ; }
        case ifcIDtYPElEVER_PTR_BLOB                :
        case ifcIDtYPElEVER_PTR_ptrStrokeS          :
        case ifcIDtYPElEVER_PTR_lenPrefixedCountT   :
        case ifcIDtYPElEVER_PTR_countT              : { query = (countT)*(countT**)pbLever                                ; break ; }
        case ifcIDtYPElEVER_PTR_strokeS             : { query = (countT)*(strokeS**)pbLever                               ; break ; }
        case ifcIDtYPElEVER_PTR_plateC              : { query = (countT)*(plateC**)pbLever                                ; break ; }
        case ifcIDtYPElEVER_PTR_osTextT             : { query = (countT)*(osTextT**)pbLever                               ; break ; }
        case ifcIDtYPElEVER_PTR_nicNameC            :
        case ifcIDtYPElEVER_BLOBdOOMED              :
        case ifcIDtYPElEVER_PTR_soulC               : { query = (countT)pbLever                                           ; break ; }
        default                                     : { __( idLeverType ) ; __1                          ; break ; }
    }

    ZE( countT , ids ) ;
    stackk.sinkF( tinP , ids , (byteT*)&query , flSTACKsINK_QUERY , pSubtractF , cbLever ) ;
    if( ids )
    {
        byteT* pbLB = (byteT*)&stackk[ ids ] ;

        if( pbLB )
        {
            switch( idLeverType )
            {
                case ifcIDtYPElEVER_tid :
                case ifcIDtYPElEVER_countT          : {                                                                        break ; }
                case ifcIDtYPElEVER_PTR_ptrStrokeS  :
                {
                    strokeS** ppsttl = *(strokeS***)pbLB ;
                    if( ppsttl )
                    {
                        ZE( countT , off ) ;
                        while( ppsttl[ off ] ) third.delF( tinP , ppsttl[ off ++ ] ) ;
                    }
                    third.delF( tinP , *(countT**)&ppsttl ) ;
                    break ;
                }
                case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
                case ifcIDtYPElEVER_PTR_BLOB        : { byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                case ifcIDtYPElEVER_PTR_countT      : { countT*   pcl =   (countT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_strokeS     : { strokeS*  pcl =  (strokeS*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_plateC      : { plateC*   pcl =   (plateC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                case ifcIDtYPElEVER_PTR_osTextT     : { osTextT*  pcl =  (osTextT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_nicNameC    : { nicNameC* pcl = (nicNameC*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_BLOBdOOMED      : { byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                case ifcIDtYPElEVER_PTR_soulC       : { soulC*    pcl =    (soulC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                default                             : { __( idLeverType ) ; __1                             ; break ; }
            }
            stackk.extractF( 0 , tinP , ids ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015001.switchc.freef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015002.switchc.dt_switchc BEGIN
#define DDNAME       "3func.36015002.switchc.dt_switchc"
#define DDNUMB      (countT)0x36015002
#define IDFILE      (countT)0xf2b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200003.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.6e10104.1.1.0.html\"\>6e10104:  WAKEsHOW( "example.simplest.func.1200003.switchC.dt_switchC" )\</A\>
*/
/**/

/*1*/switchC::~switchC( voidT )/*1*/
{
    TINSL
    SCOOP

    bDying ++ ;
    stackk.bDying ++ ;
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    //IN_E
    freeAllF( tinP ) ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015002.switchc.dt_switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015003.switchc.operator_countt_ref BEGIN
#define DDNAME       "3func.36015003.switchc.operator_countt_ref"
#define DDNUMB      (countT)0x36015003
#define IDFILE      (countT)0xf2c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200004.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7e10104.1.1.0.html\"\>7e10104:  WAKEsHOW( "example.simplest.func.1200004.switchC.operator_countT_ref" )\</A\>
if we are switching on the os thread id (tid), this evaluates to a countT& that is distinct for each -active- thread
 on some operating systems, the thread id values are reused
 if this switchC object is implicitly thread switched, you -must- clear the switch for a thread before each thread that refers to this object ends
 failure to do this is not an error, but results in the same countT object being reused, and hence not initialized to ze for the reusing thread
 an alternative to implicit thread switching is to use an explicit lever, and set the lever value using tinP.monitor.idThread
 this slight extra coding effort also gives you more speed, since an operating system call is avoided
if we are switching on an explicit lever, this evaluates to a countT& value that is distinct for each distinct value of the lever
each switchC object maintains a single storage allocation of sizeof( countT ) bytes for each thread
this cast returns a reference to that allocation
this allocation is made the first time that it is needed
 it is initialized to 0
it is deallocated when the switchC object is destroyed
you must cast to countT& and then recast to the desired reference type
 casts to references of other types is intentionally not supported
  support for casts to references of other types would call this function indirectly
  this would impose the cost of a function call, so is not done
for locked switchC objects, i will fail if a countT value for the current lever does not already exist
*/
/**/

/*1*/switchC::operator countT&( voidT )/*1*/
{
    TINSL
    SCOOP

    if( tinP.monitor.idThread == 1 ) //U::TO FIND A BUG: 20141109@2241
    {
        countT foo = 2 ;
    }

    IFbEcAREFUL
    {

        //U::
        countT c_pThird = (countT)&third ;
        if( !c_pThird )
        {
            POPUP("ERROR: c_pThird is 0 in switchC::operator countT&( voidT )") ;
        }

        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    ZE( countT , query ) ;
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
        default                                   : { __( idLeverType ) ; __1                                           ; break ; }
    }
    ZE( countT , idSlot ) ;
    stackk.sinkF( tinP , idSlot , (byteT*)&query , flSTACKsINK_QUERY , pSubtractF , cbLever ) ;

    if( !idSlot )
    {
        ZE( byteT* , pbLB ) ;
        third.newF( tinP , LF , pbLB , sizeof( countT ) + cbData ) ; ___BITScT( pbLB , 0xe49 ) ;
        if( !third && pbLB )
        {
            third.c_memsetIF( tinP , pbLB + sizeof( countT ) , cbData ) ;
            if( F(flags) & flSTACKc_PATCHnEWfLAVOR ) ((countT*)pbLB)[ 1 ] = SWITCHfLAVORpATCH ; //APPLICATIONS USE THIS TO AVOID FREEING UNINTENDED FLAVORS WHEN CALLING freeNullsF

            switch( idLeverType )
            {
                case ifcIDtYPElEVER_tid :
                case ifcIDtYPElEVER_countT : { *(countT*)pbLB = query ; break ; }
                case ifcIDtYPElEVER_PTR_ptrStrokeS :
                {
                    if( query )
                    {
                        etherC* pEther = third.third_pEtherContainsMe_F() ;
                        countT cc = third.strBodyLengthF( tinP , (countT*)query ) ;
                        ZE( strokeS** , ppsttl ) ;
                        third.newF( tinP , LF , *(countT**)&ppsttl , cc + 1 ) ; ___BITScT( ppsttl , 0xe48 ) ;
                        third.c_memsetIF( tinP , *(byteT**)&ppsttl , ( cc + 1 ) * sizeof( countT ) ) ;
                        for( countT off = 0 ; off < cc ; off ++ ) { pEther->strMakeF( tinP , LF , ppsttl[ off ] , ((const strokeS**)query)[ off ] ) ; ___CT( ppsttl[ off ] ) ; }
                        *(countT*)pbLB = (countT)ppsttl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_PTR_BLOB :
                {
                    if( query )
                    {
                        ZE( byteT* , pbl ) ;
                        countT cba = cbLever ;
                        third.newF( tinP , LF , pbl , cba ) ; ___BITScT( pbl , 0xe44 ) ;
                        third.c_memcpyIF( tinP , pbl , (byteT*)query , cba ) ;
                        *(countT*)pbLB = (countT)pbl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
                case ifcIDtYPElEVER_PTR_countT :
                {
                    if( query ) //U::CONJ: BUG: THIS CODE ASSUMES ERRONEOUSLY THAT LENGTH PREFIXED LEVER VALUES WILL ALSO BE NULL TERMINATED
                    {
                        countT cc = 1 + third.strBodyLengthF( tinP , (countT*)query ) ;
                        ZE( countT* , pcl ) ;
                        third.newF( tinP , LF , pcl , cc ) ; ___BITScT( pcl , 0xe48 ) ;
                        third.c_memcpyIF( tinP , (byteT*)pcl , (byteT*)query , sizeof( countT ) * cc ) ;
                        *(countT*)pbLB = (countT)pcl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_PTR_strokeS :
                {
                    if( !query ) *(countT*)pbLB = 0 ;
                    else
                    {
                        etherC* pEther = third.third_pEtherContainsMe_F() ;
                        if( pEther )
                        {
                            ZE( strokeS* , psttl ) ;
                            pEther->strMakeF( tinP , LF , psttl , (strokeS*)query ) ; ___BITScT( psttl , 0xe47 ) ;
                            *(countT*)pbLB = (countT)psttl ;
                        }
                    }
                    break ;
                }
                case ifcIDtYPElEVER_PTR_plateC :
                {
                    if( !query ) *(countT*)pbLB = 0 ;
                    else
                    {
                        etherC* pEther = third.third_pEtherContainsMe_F() ;
                        if( pEther )
                        {
                            plateC& plateQuery = *(plateC*)query ;
                            plateC* pPlateLever = plateQuery.newPlateF( tinP ) ; ___BITScT( pPlateLever , 0xe47 ) ;
                            *pPlateLever = plateQuery ;
                            *(countT*)pbLB = (countT)pPlateLever ;
                        }
                    }
                    break ;
                }
                case ifcIDtYPElEVER_PTR_osTextT :
                {
                    if( query )
                    {
                        ZE( osTextT* , postl ) ;
                        countT costa = 1 + thirdC::c_strlenIF( tinP , (osTextT*)query ) ;
                        third.newF( tinP , LF , postl , costa ) ; ___BITScT( postl , 0xe46 ) ;
                        thirdC::c_memcpyIF( tinP , postl , (osTextT*)query , costa ) ;
                        *(countT*)pbLB = (countT)postl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_PTR_nicNameC :
                {
                    if( query )
                    {
                        ZE( nicNameC* , pcl ) ;
                        third.newF( tinP , LF , pcl ) ; ___BITScT( pcl , 0xe45 ) ;
                        third.c_memcpyIF( tinP , (byteT*)pcl , (byteT*)query , processGlobal1I.cb_nicNameC_ ) ;
                        *(countT*)pbLB = (countT)pcl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_BLOBdOOMED :
                {
                    if( query )
                    {
                        ZE( byteT* , pbl ) ;
                        countT cba = cbLever ;
                        third.newF( tinP , LF , pbl , cba ) ; ___BITScT( pbl , 0xe44 ) ;
                        third.c_memcpyIF( tinP , pbl , (byteT*)query , cba ) ;
                        *(countT*)pbLB = (countT)pbl ;
                    }
                    else __1
                    break ;
                }
                case ifcIDtYPElEVER_PTR_soulC :
                {
                    if( query )
                    {
                        soulC* pSoul = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) ) ;
                        if( pSoul ) *pSoul = *(soulC*)query ;
                        else        __1
                        *(countT*)pbLB = (countT)pSoul ;
                    }
                    else __1
                    break ;
                }
                default :
                {
                    __( idLeverType ) ;
                    __1
                }
            }
            ZE( countT , idSlot ) ;
            stackk.sinkF( tinP , idSlot , pbLB , flSTACKsINK_UNIQUE , pSubtractF , cbLever ) ;
            //if( !idSlot ) { CONoUTrAW( "\r\n**** idSlot IS NULL ****\r\n" ) ; } //U::
            __Z( idSlot ) ;

            //if( !( stackk % TUCK ) ) { LOGrAW7( "switchC: another flavor added [cFlavors,idLineCt,idiFileCt]: " , stackk , "   " , idiFileCt , "(" , idLineCt , ")\r\n" ) ; }
        }
        third.delF( tinP , pbLB ) ;
    }

    countT& cRef = stackk ? ( &stackk[ 0 ] )[ 1 ] : *(countT*)pbnu ;

    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return cRef ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015003.switchc.operator_countt_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015004.switchc.operator_assign BEGIN
#define DDNAME       "3func.36015004.switchc.operator_assign"
#define DDNUMB      (countT)0x36015004
#define IDFILE      (countT)0xf2d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8e10104.1.1.0.html\"\>8e10104:  WAKEsHOW( "example.simplest.func.1200005.switchC.operator_assign" )\</A\>
stores the value of cP in the sizeof( countT ) bytes allocated within this switchC object for the current thread
for maximum performance, use an expression of the form "(countT&)switchObj = cP" rather than this operator
arguments
 cP
*/
/**/

/*1*/switchC& switchC::operator =( const countT cP )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( cbData - sizeof( countT ) ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    (countT&)*this = cP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015004.switchc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015005.switchc.cflavorsf BEGIN
#define DDNAME       "3func.36015005.switchc.cflavorsf"
#define DDNUMB      (countT)0x36015005
#define IDFILE      (countT)0xf2e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cFlavorsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200006.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.1120104.1.1.0.html\"\>1120104:  WAKEsHOW( "example.simplest.func.1200006.switchC.cFlavorsF" )\</A\>
*/
/**/

/*1*/countT switchC::cFlavorsF( tinS& tinP )/*1*/
{
    scoopC scoop( tinP , LF , poop ) ;
    //U::SCOOP

    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    countT cFlavors = stackk ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015005.switchc.cflavorsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015006.switchc.operator_element BEGIN
#define DDNAME       "3func.36015006.switchc.operator_element"
#define DDNUMB      (countT)0x36015006
#define IDFILE      (countT)0xf2f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200007.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2120104.1.1.0.html\"\>2120104:  WAKEsHOW( "example.simplest.func.1200007.switchC.operator_element" )\</A\>
evaluates to a reference to the countT object for the idP'th flavor
arguments
 idP
*/
/**/

/*1*/countT& switchC::operator []( const countT idP )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }


    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    byteT* pbLB = (byteT*)&stackk[ idP ] ;
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return pbLB ? ((countT*)pbLB)[ 1 ] : *(countT*)pbnu ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015006.switchc.operator_element END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015007.switchc.leverf BEGIN
#define DDNAME       "3func.36015007.switchc.leverf"
#define DDNUMB      (countT)0x36015007
#define IDFILE      (countT)0xf30


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$leverF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200009.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.3a20104.1.1.0.html\"\>3a20104:  WAKEsHOW( "example.simplest.func.1200009.switchC.leverF" )\</A\>
arguments
 tinP
 idP
  can be 0
  if not 0 then the value of the idP'th lever is returned
  if 0 then the current value of the lever is returned
   wrongo: i actually return the lever value of the most recently referenced flavor
  warning: my function when idP is 0 might change
   i might be changed so that i return the lever of the plate last referenced
*/
/**/

//U::CONJ: IT WOULD BE MORE USEFUL TO RETURN THE LEVER OF THE PLATE LAST REFERENCED WHEN !idP

/*1*/countT switchC::leverF( tinS& tinP , const countT idP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    byteT* pbLB = (byteT*)&stackk[ idP ] ;
    countT lever = pbLB ? *(countT*)pbLB : 0 ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015007.switchc.leverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015008.switchc.idslotofleverf BEGIN
#define DDNAME       "3func.36015008.switchc.idslotofleverf"
#define DDNUMB      (countT)0x36015008
#define IDFILE      (countT)0xf31


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idSlotOfLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.120000a.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.4a20104.1.1.0.html\"\>4a20104:  WAKEsHOW( "example.simplest.func.120000a.switchC.idSlotOfLeverF" )\</A\>
evaluates to the slot id that is occupied by this lever value
arguments
 leverP
  the lever value to search for
  can be 0
*/
/**/

/*1*/countT switchC::idSlotOfLeverF( tinS& tinP , const countT leverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    ZE( countT , idSlot ) ;
    stackk.sinkF( tinP , idSlot , (byteT*)&leverP , flSTACKsINK_QUERY , pSubtractF , cbLever ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015008.switchc.idslotofleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015009.switchc.replaceleverf BEGIN
#define DDNAME       "3func.36015009.switchc.replaceleverf"
#define DDNUMB      (countT)0x36015009
#define IDFILE      (countT)0xf32


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$replaceLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.120000b.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.d030104.1.1.0.html\"\>d030104:  WAKEsHOW( "example.simplest.func.120000b.switchC.replaceLeverF" )\</A\>
arguments
 tinP
 leverP
  a reference to the new lever to use
  if no lever was being used, this object changes from thread switched mode to lever switched mode
   in this case, the lever values must be obtained by calling leverF
    the algorithm that assigns lever values to threads is subject to change
*/
/**/

/*1*/voidT switchC::replaceLeverF( tinS& tinP , countT& leverP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pbLever = (byteT*)&leverP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015009.switchc.replaceleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500a.switchc.replaceleverf BEGIN
#define DDNAME       "3func.3601500a.switchc.replaceleverf"
#define DDNUMB      (countT)0x3601500a
#define IDFILE      (countT)0xf33


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$replaceLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.120000c.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e030104.1.1.0.html\"\>e030104:  WAKEsHOW( "example.simplest.func.120000c.switchC.replaceLeverF" )\</A\>
if a lever was being used, this object changes from lever switched mode to thread switched mode
otherwise, this function has no effect
arguments
 tinP
*/
/**/

/*1*/voidT switchC::replaceLeverF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    pbLever = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500a.switchc.replaceleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500b.switchc.forifcthreadf BEGIN
#define DDNAME       "3func.3601500b.switchc.forifcthreadf"
#define DDNUMB      (countT)0x3601500b
#define IDFILE      (countT)0xf34


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$forIfcThreadF.0.html\"\>instances\</A\>
\<A HREF=\"5.120000d.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.e230104.1.1.0.html\"\>e230104:  WAKEsHOW( "example.simplest.func.120000d.switchC.forIfcThreadF" )\</A\>
like operator countT& except uses tinP.monitor.idThread as the lever value
the switchC object must have been constructed with a lever of type countT& specified
*/
/**/

/*1*/countT& switchC::forIfcThreadF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
        __( idLeverType - ifcIDtYPElEVER_countT ) ;
        if( third ) return *(countT*)pbnu ;
        __( !tinP.monitor.idThread ) ;
        if( third ) return *(countT*)pbnu ;
    }

    //IN, OUT ARE SUPPRESSED SO THAT THIS FUNCTION DOES NOT APPEAR IN tinP'S TRACE FOR THIS THREAD
    //OTHERWISE, I WOULD APPEAR ALL OVER THE PLACE BECAUSE IN, OUT CALL ME FOR EVERY FUNCTION
    //THESE LINES HERE CAN BE ENABLED IF NEEDED.  THEY ARE COMMENTED OUT ONLY FOR COSMETIC REASONS (TO IMPROVE THE READABILITY OF THE TRACE INFORMATION IN tinS)
    //IN

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    const countT query = tinP.monitor.idThread ;
    const countT cPlates = stackk ;
    ZE( byteT* , pbLB ) ;

    for( countT idp = 1 ; !third && idp <= cPlates ; idp ++ )
    {
        pbLB = (byteT*)&stackk[ idp ] ; //U::EDIT THIS DEF TO USE A SINK QUERY (SEE FOR EXAMPLE freeF)
        __Z( pbLB ) ;
        if( !third && bHitF( tinP , query , *(countT*)pbLB ) ) break ;
        else                                                   pbLB = 0 ;
    }

    if( !pbLB )
    {
        third.newF( tinP , LF , pbLB , sizeof( countT ) + cbData ) ; ___BITScT( pbLB , 0xe52 ) ;
        if( pbLB )
        {
            *(countT*)pbLB = query ;
            ((countT*)pbLB)[ 1 ] = 0 ;
            stackk << pbLB ;
        }
        third.delF( tinP , pbLB ) ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;
    //OUT
    return pbLB ? ((countT*)pbLB)[ 1 ] : *(countT*)pbnu ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500b.switchc.forifcthreadf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500c.switchc.bhitf BEGIN
#define DDNAME       "3func.3601500c.switchc.bhitf"
#define DDNUMB      (countT)0x3601500c
#define IDFILE      (countT)0xf35


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$bHitF.0.html\"\>instances\</A\>
\<A HREF=\"5.120000e.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
this function contains no overhead code and is written for maximum speed
it assumes that c1P and c2P are two lever values
it returns 1 iff these two lever values are equivalent
 two lever values are equivalent if they compare equal, using the comparison algorithm appropriate given the current value of idLeverType
arguments
 c1P
 c2P
*/
/**/

/*1*/boolT switchC::bHitF( tinS& tinP , const countT c1P  , const countT c2P )/*1*/
{
    SCOOP
    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    ZE( boolT , bHit ) ;
    switch( idLeverType )
    {
        case ifcIDtYPElEVER_PTR_ptrStrokeS :
        {
                etherC* pEther = third.third_pEtherContainsMe_F() ;
                bHit = ( !c1P && !c2P ) || ( c1P && c2P && pEther && !pEther->strCompareF( tinP , (const strokeS**)c1P , (const strokeS**)c2P ) ) ;

            break ;
        }
        case ifcIDtYPElEVER_tid            :
        case ifcIDtYPElEVER_countT         : { bHit = c1P == c2P ; break ; }
        case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
        case ifcIDtYPElEVER_PTR_BLOB       : { bHit = !c1P || !c2P ? c1P == c2P : !thirdC::c_memcmpIF( tinP , (byteT*)c1P  , (byteT*)c2P  , cbLever ) ; break ; }
        case ifcIDtYPElEVER_PTR_countT     : { bHit =  c1P &&  c2P             && !third.strCompareF(  tinP , (countT*)c1P , (countT*)c2P           ) ; break ; }
        case ifcIDtYPElEVER_PTR_strokeS    :
        {
                etherC* pEther = third.third_pEtherContainsMe_F() ;
                bHit = ( !c1P && !c2P ) || ( c1P && c2P && pEther && !pEther->strCompareF( tinP , (strokeS*)c1P , (strokeS*)c2P ) ) ;

            break ;
        }
        case ifcIDtYPElEVER_PTR_plateC    :
        {
                bHit = ( !c1P && !c2P ) || ( c1P && c2P && !( *(plateC*)c1P - *(plateC*)c2P ) ) ;

            break ;
        }
        case ifcIDtYPElEVER_PTR_osTextT    :
        {
                bHit = c1P && c2P && !thirdC::c_strcmpIF( tinP , (osTextT*)c1P , (osTextT*)c2P ) ;

            break ;
        }
        case ifcIDtYPElEVER_PTR_nicNameC   : { bHit = c1P && c2P ? *(nicNameC*)c1P == *(nicNameC*)c2P : c1P == c2P ; break ; }
        case ifcIDtYPElEVER_PTR_soulC      : { bHit = c1P && c2P ?    *(soulC*)c1P == *(soulC*)c2P    : c1P == c2P ; break ; }
        case ifcIDtYPElEVER_BLOBdOOMED           :
        {
            bHit = !c1P || !c2P
                ? c1P == c2P
                : !thirdC::c_memcmpIF( tinP , (byteT*)c1P , (byteT*)c2P , cbLever )
            ;
            break ;
        }
        default : { __( idLeverType ) ; __1 break ; }
    }
    if( pBaton ) pBaton->ungrabF( tinP ) ;
    return bHit ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500c.switchc.bhitf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500e.switchc.grabf BEGIN
#define DDNAME       "3func.3601500e.switchc.grabf"
#define DDNUMB      (countT)0x3601500e
#define IDFILE      (countT)0xf36


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$grabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200012.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT switchC::grabF( tinS& tinP , const countT idLineP , const countT idiFileP , const byteT* const pbBitsP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        //if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAGoR( TAGiDnULL , idLineP , idiFileP , pbBitsP ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500e.switchc.grabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500f.switchc.ungrabf BEGIN
#define DDNAME       "3func.3601500f.switchc.ungrabf"
#define DDNUMB      (countT)0x3601500f
#define IDFILE      (countT)0xf37


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$ungrabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200013.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT switchC::ungrabF( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601500f.switchc.ungrabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015010.switchc.idlevertypef BEGIN
#define DDNAME       "3func.36015010.switchc.idlevertypef"
#define DDNUMB      (countT)0x36015010
#define IDFILE      (countT)0xf38


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idLeverTypeF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200015.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT switchC::idLeverTypeF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( tinP.fingerprint ) ;
    return idLeverType ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015010.switchc.idlevertypef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015011.switchc.pbleverf BEGIN
#define DDNAME       "3func.36015011.switchc.pbleverf"
#define DDNUMB      (countT)0x36015011
#define IDFILE      (countT)0xf39


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pbLeverF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200016.1.0.html\"\>definition\</A\>
evaluates to the address of the lever object
most applications will not use this function
the returned pointer must be cast according to the type of lever that i use
*/
/**/

/*1*/byteT* switchC::pbLeverF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    if( tinP.fingerprint ) ;
    return pbLever ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015011.switchc.pbleverf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015012.switchc.switchc BEGIN
#define DDNAME       "3func.36015012.switchc.switchc"
#define DDNUMB      (countT)0x36015012
#define IDFILE      (countT)0xf3a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200017.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( thirdC& thirdP , tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( 0 ) ,
pSubtractF( subtractLB_countT_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_tid )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe57 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe56 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015012.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015013.switchc.switchc BEGIN
#define DDNAME       "3func.36015013.switchc.switchc"
#define DDNUMB      (countT)0x36015013
#define IDFILE      (countT)0xf3b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200018.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 cLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , countT& cLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&cLeverP ) ,
pSubtractF( subtractLB_countT_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_countT ) ,
recycleLever2( flagsP ) ,
recycleLever3( (countT)&cLeverP ) ,
recycleLever4( (countT)pLeverLathRefP ) ,
recycleLever5( cbDataP ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_countT )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe5b ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___CT( pbnu ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015013.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015014.switchc.switchc BEGIN
#define DDNAME       "3func.36015014.switchc.switchc"
#define DDNUMB      (countT)0x36015014
#define IDFILE      (countT)0xf3c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200019.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 nicNameP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , nicNameC& nicNameP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&nicNameP ) ,
pSubtractF( subtractLB_nicNameC_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_nicNameC )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe5f ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe5e ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015014.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015015.switchc.switchc BEGIN
#define DDNAME       "3func.36015015.switchc.switchc"
#define DDNUMB      (countT)0x36015015
#define IDFILE      (countT)0xf3d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001a.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 pczLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const countT*& pczLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&pczLeverP ) ,
pSubtractF( F(flagsP) & flSTACKc_LEVERiSlENpREFIXED ? subtractLB_countT_ptr_lenPrefixed_F : subtractLB_countT_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( F(flagsP) & flSTACKc_LEVERiSlENpREFIXED ? ifcIDtYPElEVER_PTR_lenPrefixedCountT : ifcIDtYPElEVER_PTR_countT )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe63 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe62 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015015.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015016.switchc.switchc BEGIN
#define DDNAME       "3func.36015016.switchc.switchc"
#define DDNUMB      (countT)0x36015016
#define IDFILE      (countT)0xf3e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001b.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
  must be contained within an etherC object
 flagsP
 psttLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , strokeS*& psttLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&psttLeverP ) ,
pSubtractF( subtractLB_strokeS_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_PTR_strokeS ) ,
recycleLever2( flagsP ) ,
recycleLever3( (countT)&psttLeverP ) ,
recycleLever4( (countT)pLeverLathRefP ) ,
recycleLever5( cbDataP ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_strokeS )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( !third.third_pEtherContainsMe_F() ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe67 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe66 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015016.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015017.switchc.switchc BEGIN
#define DDNAME       "3func.36015017.switchc.switchc"
#define DDNUMB      (countT)0x36015017
#define IDFILE      (countT)0xf3f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001c.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 soulP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , soulC& soulP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP ) :/*1*/
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&soulP ) ,
pSubtractF( subtractLB_soulC_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_soulC )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe6b ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe6a ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015017.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015018.switchc.freeallf BEGIN
#define DDNAME       "3func.36015018.switchc.freeallf"
#define DDNUMB      (countT)0x36015018
#define IDFILE      (countT)0xf40


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeAllF.0.html\"\>instances\</A\>
\<A HREF=\"5.120001d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT switchC::freeAllF( tinS& tinP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    //IN_E
    ZE( byteT* , pbLB ) ;
    third.newF( tinP , LF , pbLB , sizeof( countT ) + cbData ) ; ___BITScT( pbLB , 0xe6e ) ;
    while( !third && stackk )
    {
        stackk >> pbLB ;
        __Z( pbLB ) ;
        if( pbLB )
        {
            switch( idLeverType )
            {
                case ifcIDtYPElEVER_PTR_ptrStrokeS :
                {
                    strokeS** ppsttl = *(strokeS***)pbLB ;
                    if( ppsttl )
                    {
                        ZE( countT , off ) ;
                        while( ppsttl[ off ] ) third.delF( tinP , ppsttl[ off ++ ] ) ;
                    }
                    third.delF( tinP , *(countT**)&ppsttl ) ;
                    break ;
                }
                case ifcIDtYPElEVER_tid            :
                case ifcIDtYPElEVER_countT         : {                                                                        break ; }
                case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
                case ifcIDtYPElEVER_PTR_BLOB       : { byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                case ifcIDtYPElEVER_PTR_countT     : { countT*   pcl =   (countT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_strokeS    : { strokeS*  pcl =  (strokeS*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_plateC     : { plateC*   pcl =   (plateC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                case ifcIDtYPElEVER_PTR_osTextT    : { osTextT*  pcl =  (osTextT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_PTR_nicNameC   : { nicNameC* pcl = (nicNameC*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                case ifcIDtYPElEVER_BLOBdOOMED           : { byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                case ifcIDtYPElEVER_PTR_soulC      : { soulC*    pcl =    (soulC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                default                         : { __( idLeverType ) ; __1                             ; break ; }
            }
        }
    }
    third.delF( tinP , pbLB ) ;
    //OUT
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015018.switchc.freeallf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015019.switchc.operator_increment BEGIN
#define DDNAME       "3func.36015019.switchc.operator_increment"
#define DDNUMB      (countT)0x36015019
#define IDFILE      (countT)0xf41


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/switchC& switchC::operator ++( voidT )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( cbData - sizeof( countT ) ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    ( (countT&)*this ) ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015019.switchc.operator_increment END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501a.switchc.operator_decrement BEGIN
#define DDNAME       "3func.3601501a.switchc.operator_decrement"
#define DDNUMB      (countT)0x3601501a
#define IDFILE      (countT)0xf42


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001f.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/switchC& switchC::operator --( voidT )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( cbData - sizeof( countT ) ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    ( (countT&)*this ) -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501a.switchc.operator_decrement END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501b.switchc.operator_incrementby BEGIN
#define DDNAME       "3func.3601501b.switchc.operator_incrementby"
#define DDNUMB      (countT)0x3601501b
#define IDFILE      (countT)0xf43


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200020.1.0.html\"\>definition\</A\>
arguments
 cP
*/
/**/

/*1*/switchC& switchC::operator +=( const countT cP )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( cbData - sizeof( countT ) ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    (countT&)*this += cP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501b.switchc.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501c.switchc.operator_decrementby BEGIN
#define DDNAME       "3func.3601501c.switchc.operator_decrementby"
#define DDNUMB      (countT)0x3601501c
#define IDFILE      (countT)0xf44


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200021.1.0.html\"\>definition\</A\>
arguments
 cP
*/
/**/

/*1*/switchC& switchC::operator -=( const countT cP )/*1*/
{
    TINSL
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *this ;
        __( cbData - sizeof( countT ) ) ;
        if( third ) return *this ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_
    (countT&)*this -= cP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501c.switchc.operator_decrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501d.switchc.operator_call BEGIN
#define DDNAME       "3func.3601501d.switchc.operator_call"
#define DDNUMB      (countT)0x3601501d
#define IDFILE      (countT)0xf45


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200022.1.0.html\"\>definition\</A\>
i evaluate to a reference to the wo'th lever that is associated with value cP
if the value cP is not found, i evaluate to a reference to volatile storage that i set to 0
 if *this is accessed by multiple threads, that volatile storage might contain a nonze value
 in such applications, the caller must serialize access to *this
arguments
 cP
  the value to be searched for
  cP is a reference so that i can be used when cbData is not sizeof( countT )
   for cP, specify a reference to the beginning of the value to be searched for
*/
/**/

/*1*/countT& switchC::operator () ( const countT& cP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    ZE( countT* , pcLever ) ;
    stackk.grabF( tinP , TAG( TAGiDnULL ) ) ;
    if( stackk )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            countT c_pbLB = (countT)&stackk.downF( tinP , hDown ) ;
            if( c_pbLB && !thirdC::c_memcmpIF( tinP , ( (byteT*)c_pbLB + sizeof( countT ) ) , (byteT*)&cP , cbData ) )
            {
                pcLever = (countT*)c_pbLB ;
                break ;
            }
        }
        while( !third && ~hDown ) ;
    }
    stackk.ungrabF( tinP ) ;

    if( !pcLever ) *(countT*)pbnu = 0 ;
    return pcLever ? *pcLever : *(countT*)pbnu ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501d.switchc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501e.switchc.freenullsf BEGIN
#define DDNAME       "3func.3601501e.switchc.freenullsf"
#define DDNUMB      (countT)0x3601501e
#define IDFILE      (countT)0xf46


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$freeNullsF.0.html\"\>instances\</A\>
\<A HREF=\"5.1200023.1.0.html\"\>definition\</A\>
for speed, only a single countT object in the data (or the lever) is inspected
arguments
 tinP
 offcP
  0: the lever value
  1: woth countT object of data
  2: ooth countT object of data
*/
/**/

/*1*/voidT switchC::freeNullsF( tinS& tinP , const countT offcP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        __( offcP > cbData / sizeof( countT ) ) ;
        if( third ) return ;
    }
    
    _IO_

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    if( stackk )
    {
        _IO_
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            _IO_
            byteT* pbLB = (byteT*)&stackk.downF( tinP , hDown ) ;
            if( pbLB && !((countT*)pbLB)[ offcP ] )
            {
                _IO_
                switch( idLeverType )
                {
                    case ifcIDtYPElEVER_PTR_ptrStrokeS :
                    {
                        _IO_
                        strokeS** ppsttl = *(strokeS***)pbLB ;
                        if( ppsttl )
                        {
                            ZE( countT , off ) ;
                            while( ppsttl[ off ] ) third.delF( tinP , ppsttl[ off ++ ] ) ;
                        }
                        third.delF( tinP , *(countT**)&ppsttl ) ;
                        break ;
                    }
                    case ifcIDtYPElEVER_tid            :
                    case ifcIDtYPElEVER_countT         : { _IO_                                                                        break ; }
                    case ifcIDtYPElEVER_PTR_lenPrefixedCountT :
                    case ifcIDtYPElEVER_PTR_BLOB       : { _IO_ byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                    case ifcIDtYPElEVER_PTR_countT     : { _IO_ countT*   pcl =   (countT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                    case ifcIDtYPElEVER_PTR_strokeS    : { _IO_ strokeS*  pcl =  (strokeS*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                    case ifcIDtYPElEVER_PTR_plateC     : { _IO_ plateC*   pcl =   (plateC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                    case ifcIDtYPElEVER_PTR_osTextT    : { _IO_ osTextT*  pcl =  (osTextT*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                    case ifcIDtYPElEVER_PTR_nicNameC   : { _IO_ nicNameC* pcl = (nicNameC*)*(countT*)pbLB ; third.delF( tinP , pcl ) ; break ; }
                    case ifcIDtYPElEVER_BLOBdOOMED           : { _IO_ byteT*    pbl =    (byteT*)*(countT*)pbLB ; third.delF( tinP , pbl ) ; break ; }
                    case ifcIDtYPElEVER_PTR_soulC      : { _IO_ soulC*    pcl =    (soulC*)*(countT*)pbLB ; DEL( pcl )               ; break ; }
                    default                            : { _IO_ __( idLeverType ) ; __1                                              ; break ; }
                }

                {
                    _IO_
                    stackk.extractF( 0 , tinP ) ;
                }
            }
        }
        while( !third && ~hDown ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501e.switchc.freenullsf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501f.switchc.switchc BEGIN
#define DDNAME       "3func.3601501f.switchc.switchc"
#define DDNUMB      (countT)0x3601501f
#define IDFILE      (countT)0xf47


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1200024.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.0e40104.1.1.0.html\"\>0e40104:  WAKEsHOW( "example.simplest.func.1200024.switchC.switchC" )\</A\>
arguments
 tinP
 thirdP
 flagsP
 pbP
  cbP byteT values at pbP will be used as the current lever
 cbP
  cbP byteT values at pbP will be used as the current lever
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const byteT*& pbLeverP , const countT cbLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( cbLeverP ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&pbLeverP ) ,
pSubtractF( subtractLB_blob_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_BLOB )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe79 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe78 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601501f.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015020.switchc.inf BEGIN
#define DDNAME       "3func.36015020.switchc.inf"
#define DDNUMB      (countT)0x36015020
#define IDFILE      (countT)0xf48


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i move the "last referenced" flavor to the next flavor down in the flavor stack
the flavor stack is sorted by lever value
see the documentation for stackC::downF
*/
/**/
/*1*/boolT switchC::inF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    boolT bOk = stackk.downF( tinP , bQueryP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015020.switchc.inf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015021.switchc.outf BEGIN
#define DDNAME       "3func.36015021.switchc.outf"
#define DDNUMB      (countT)0x36015021
#define IDFILE      (countT)0xf49


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i move the "last referenced" flavor to the next flavor up in the flavor stack
the flavor stack is sorted by lever value
see the documentation for stackC::upF
*/
/**/
/*1*/boolT switchC::outF( tinS& tinP , const boolT bQueryP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return *(countT*)pbnu ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    boolT bOk = stackk.upF( tinP , bQueryP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015021.switchc.outf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015022.switchc.grablistf BEGIN
#define DDNAME       "3func.36015022.switchc.grablistf"
#define DDNUMB      (countT)0x36015022
#define IDFILE      (countT)0xf4a


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
*/
/**/
/*1*/voidT switchC::grabListF( tinS& tinP , countT**& ppcDownP , countT**& ppcUpP , countT& cDownP , countT& cUpP , const boolT bNoGrabP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
    }

    if( bNoGrabP ) ;
    else if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;

    _IO_

    stackk.grabListF( tinP , ppcDownP , ppcUpP , cDownP , cUpP , 1 ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015022.switchc.grablistf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015023.switchc.sumf BEGIN
#define DDNAME       "3func.36015023.switchc.sumf"
#define DDNUMB      (countT)0x36015023
#define IDFILE      (countT)0xf4b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 idFieldP
  if 0 then i return the sum of the raw lever values
  if 1 then i return the sum of the countT values in the switch
  if 2 then i return the sum of the offset sizeof( countT ) count values in the switch
  if N then i return the sum of the offset ( N - 1 ) * sizeof( countT ) count values in the switch
*/
/**/

/*1*/countT switchC::sumF( tinS& tinP , const countT idFieldP )/*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( third ) return 0 ;
        __( idFieldP > cbData / sizeof( countT ) ) ;
        if( third ) return 0 ;
    }

    if( pBaton ) pBaton->grabF( tinP , TAG( TAGiDnULL ) ) ;
    else if( !osTidOwner ) osTidOwner = tinP.osTid ;
    else if( osTidOwner != tinP.osTid && !bDying && !( F(stackk.flagsF(tinP)) & flSTACKc_ALLOWmULTIPLEuNSERIALIZED ) ) BLAMMO ;
    _IO_

    ZE( countT , sum ) ;
    if( stackk )
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do 
        {
            countT* pcLB = &stackk.downF( tinP , hDown ) ;
            if( pcLB ) sum += pcLB[ idFieldP ] ;
        }
        while( !stackk.third && ~hDown ) ;
    }

    if( pBaton ) pBaton->ungrabF( tinP ) ;

    return sum ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015023.switchc.sumf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015024.switchc.switchc BEGIN
#define DDNAME       "3func.36015024.switchc.switchc"
#define DDNUMB      (countT)0x36015024
#define IDFILE      (countT)0xf4c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001b.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
  must be contained within an etherC object
 flagsP
 ppostLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , osTextT** ppostLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)ppostLeverP ) ,
pSubtractF( subtractLB_osTextT_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_PTR_osTextT ) ,
recycleLever2( flagsP ) ,
recycleLever3( (countT)ppostLeverP ) ,
recycleLever4( (countT)pLeverLathRefP ) ,
recycleLever5( cbDataP ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_osTextT )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( !third.third_pEtherContainsMe_F() ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe82 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe81 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015024.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015025.switchc.operator_call BEGIN
#define DDNAME       "3func.36015025.switchc.operator_call"
#define DDNUMB      (countT)0x36015025
#define IDFILE      (countT)0xf4d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT switchC::operator ()( tinS& tinP , soulC& slP )/*1*/
{
    SCOOP
    {
        ZE( baseSoilXxxxC* , pMeI ) ;
        slP >> pMeI ;
        if( pMeI != (baseSoilXxxxC*)this ) { BLAMMO ; }
    }

    ZE( countT , idCmdBase ) ;
    slP >> idCmdBase ;
    switch( idCmdBase )
    {
        case ifcIDcMDbASE_CLASSnAME :
        {
            slP << (strokeS*)T(tinP.pAdamGlobal1->_switchC_.postOldClassName) ;
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
            if( !_pSwSoixlOldApi )
            {
                _pSwSoixlOldApi = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_null , _psttLeverSoixlOldApi ) ; ___CT( _pSwSoixlOldApi ) ;
//U::                if( _pSwSoixlOldApi ) genSoixlOldWordLoadsF( tinP ) ;
            }

            if( _pSwSoixlOldApi )
            {
                ZE( strokeS* , psttw ) ;
                //U::TEST FOR EMPTY HERE
                slP >> psttw ; ___CT( psttw ) ;
                if( !tinP.pEther->strCompareF( tinP , psttw , T("?") ) )
                {
                    TN( tBody , "" ) ;
                    tBody = T(
    
                        POSTpROLOG "\r\n"
                        ". ")+T(postName)+T(" . switchC . n space\r\n"
                        ". off space\r\n"
                        USCORE79 "\r\n"
                        "IdeaFarm " "(tm) SOIL (tm) - Sentient Object Interface Language\r\n"
                        "\r\n"
                        "Class: switchC")+T("\r\n"
                        "Author: ")+T(postName)+T("\r\n"
                        "\r\n"
                        "Class synopsis: Objects of the switchC class map strokeS strings to strokeS*\r\n"
                        "strings.\r\n"
                        "\r\n"
                        "Object synopsis: The author of this document, \"")+T(postName)+T("\", is at your\r\n"
                        "service and is waiting to be given tasks to do.  You can obtain information about\r\n"
                        "some or all of the following command words by editing this list to move the \"on\"\r\n"
                        "and \"off\" lines so that the words of interest are bracketed.  Then save your\r\n"
                        "changes and drop this document into the depository:\r\n"
                        "\r\n"
                        "    . on space\r\n"
                        "    . off space\r\n"
//U::                        #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.005001c.genSoixlOldWordMenus_switchC_1.h"
                        "\r\n"
                        "You can obtain information about each of these command words\r\n"
                        "by dropping this document into the Depository.\r\n"
    
                    ) ;
    
                    ZE( strokeS* , pstth ) ;
                    tinP.pEther->strReverseF( tinP , pstth , tBody , T("\r\n") ) ; ___CT( pstth ) ;
                    tBody = T(pstth) ;
                    tinP.pEther->delF( tinP , pstth ) ;
    
                    TN( tNameShort , "") ; tNameShort = T("soixlOld.help.")+T(postName)+T(".txt") ;
                    TN( tName , "" ) ; tName = T("///desk/")+tNameShort ;
                    tinP.pEther->boxPutF( tinP , tName , tBody , tBody.csF(  tinP ) ) ;
                    POPUPsOIXLoLD( T("I, \"")+T(postName)+T("\", have placed \"")+tNameShort+T("\" onto your desk.  Read that document and then edit it to indicate what additional information you want.  Then drop it into the Depository to obtain the additional information.") ) ;
                }
                else if( !tinP.pEther->strCompareF( tinP , psttw , T("??") ) )
                {
                    if( !_pSwSoixlOldApiDoc )
                    {
                        _pSwSoixlOldApiDoc = new( 0 , tinP , LF ) switchC( tinP , third , TAGoR( TAGiDnULL , idLineCt , idiFileCt , pbBitsCt ) , flSTACKc_null , _psttLeverSoixlOldApi ) ; ___CT( _pSwSoixlOldApiDoc ) ;
//U::                        if( _pSwSoixlOldApiDoc ) genSoixlOldWordHelpsF( tinP ) ;
                    }

                    ZE( strokeS* , psttQueryWord ) ;
                    //U::TEST FOR EMPTY HERE
                    slP >> psttQueryWord ; ___CT( psttQueryWord ) ;

                    ZE( strokeS* , psttzDoc ) ;
                    if( _pSwSoixlOldApiDoc && _pSwSoixlOldApiDoc->idSlotOfLeverF( tinP , (countT)psttQueryWord ) )
                    {
                        {
                            _pSwSoixlOldApi->grabF( tinP , TAG( TAGiDnULL ) ) ;
                            _psttLeverSoixlOldApi = psttQueryWord ;
                            psttzDoc = (strokeS*)(countT)*_pSwSoixlOldApiDoc ;
                            _pSwSoixlOldApi->ungrabF( tinP ) ;
                        }
                    }

                    if( !psttzDoc ) { POPUPsOIXLoLD( T("The word \"")+T(psttQueryWord)+T("\" is unknown to switchC object \"")+T(postName)+T("\".") ) ; }
                    else
                    {
                        ZE( strokeS* , pstth ) ;
                        tinP.pEther->strReverseF( tinP , pstth , T(psttzDoc) , T("\r\n") ) ; ___CT( pstth ) ;
                        TN( tBody , "" ) ; tBody = T(pstth) ;
                        tinP.pEther->delF( tinP , pstth ) ;
        
                        TN( tNameShort , "") ; tNameShort = T("soixlOld.help.")+T(postName)+T(".")+T(psttQueryWord)+T(".txt") ;
                        TN( tName , "" ) ; tName = T("///desk/")+tNameShort ;
                        tinP.pEther->boxPutF( tinP , tName , tBody , tBody.csF(  tinP ) ) ;
                        POPUPsOIXLoLD( T("I, \"")+T(postName)+T("\", have placed \"")+tNameShort+T("\" onto your desk.  Read that document and then edit it to indicate what additional information you want.  Then drop it into the Depository to obtain the additional information.") ) ;
                    }
                    tinP.pEther->delF( tinP , psttQueryWord ) ;
                }
                else if( _pSwSoixlOldApi->idSlotOfLeverF( tinP , (countT)psttw ) )
                {
                    ZE( ifcSoixlOldApiFT , pApi ) ;
                    {
                        _pSwSoixlOldApi->grabF( tinP , TAG( TAGiDnULL ) ) ;
                        _psttLeverSoixlOldApi = psttw ;
                        pApi = (ifcSoixlOldApiFT)(countT)*_pSwSoixlOldApi ;
                        _pSwSoixlOldApi->ungrabF( tinP ) ;
                    }
    
                    if( pApi ) (*pApi)( tinP , *tinP.pEther , slP , T(postName) ) ;
                    else       { POPUPsOIXLoLD( T("The word \"")+T(psttw)+T("\" is unknown to switchC object \"")+T(postName)+T("\".") ) ; }
                }
                else if( !tinP.pEther->strCompareF( tinP , psttw , T("set") ) )
                {
                    strokeS*& psttLever = *(strokeS**)pbLever ;                    
                    psttLever = 0 ;
                    slP >> psttLever ;
                    strokeS*& psttw = *(strokeS**)&(countT&)*this ;
                    third.delF( tinP , psttw ) ;
                    slP >> psttw ;
                }
                else if( !tinP.pEther->strCompareF( tinP , psttw , T("map") ) )
                {
                    strokeS*& psttLever = *(strokeS**)pbLever ;                    
                    psttLever = 0 ;
                    slP >> psttLever ;
                    slP << *(strokeS**)&(countT&)*this ;
                }
                tinP.pEther->delF( tinP , psttw ) ;
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015025.switchc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015026.switchc.operator_shiftleft BEGIN
#define DDNAME       "3func.36015026.switchc.operator_shiftleft"
#define DDNUMB      (countT)0x36015026
#define IDFILE      (countT)0xf4e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& switchC::operator <<( soulC& slP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    _IO_
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015026.switchc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015027.switchc.operator_shiftright BEGIN
#define DDNAME       "3func.36015027.switchc.operator_shiftright"
#define DDNUMB      (countT)0x36015027
#define IDFILE      (countT)0xf4f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& switchC::operator >>( soulC& slP )/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    _IO_
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015027.switchc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015028.switchc.pleverlathreff BEGIN
#define DDNAME       "3func.36015028.switchc.pleverlathreff"
#define DDNUMB      (countT)0x36015028
#define IDFILE      (countT)0xf50


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT* switchC::pLeverLathRefF( tinS& tinP )/*1*/
{
    return stackk.pLeverLathRefF( tinP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015028.switchc.pleverlathreff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502a.switchc.recyclelever1f BEGIN
#define DDNAME       "3func.3601502a.switchc.recyclelever1f"
#define DDNUMB      (countT)0x3601502a
#define IDFILE      (countT)0xf51


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchC::recycleLever1F( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502a.switchc.recyclelever1f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502b.switchc.recyclelever2f BEGIN
#define DDNAME       "3func.3601502b.switchc.recyclelever2f"
#define DDNUMB      (countT)0x3601502b
#define IDFILE      (countT)0xf52


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchC::recycleLever2F( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502b.switchc.recyclelever2f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502c.switchc.recyclelever3f BEGIN
#define DDNAME       "3func.3601502c.switchc.recyclelever3f"
#define DDNUMB      (countT)0x3601502c
#define IDFILE      (countT)0xf53


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchC::recycleLever3F( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502c.switchc.recyclelever3f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502d.switchc.recyclelever4f BEGIN
#define DDNAME       "3func.3601502d.switchc.recyclelever4f"
#define DDNUMB      (countT)0x3601502d
#define IDFILE      (countT)0xf54


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchC::recycleLever4F( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502d.switchc.recyclelever4f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502e.switchc.recyclelever5f BEGIN
#define DDNAME       "3func.3601502e.switchc.recyclelever5f"
#define DDNUMB      (countT)0x3601502e
#define IDFILE      (countT)0xf55


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT switchC::recycleLever5F( tinS& tinP )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502e.switchc.recyclelever5f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502f.switchc.switchc BEGIN
#define DDNAME       "3func.3601502f.switchc.switchc"
#define DDNUMB      (countT)0x3601502f
#define IDFILE      (countT)0xf56


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001a.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
 flagsP
 ppsttzLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , const strokeS**& ppsttzLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&ppsttzLeverP ) ,
pSubtractF( F(flagsP) & flSTACKc_LEVERiSlENpREFIXED ? subtractLB_ptrStrokeS_ptr_lenPrefixed_F : subtractLB_ptrStrokeS_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( 0 ) ,
recycleLever2( 0 ) ,
recycleLever3( 0 ) ,
recycleLever4( 0 ) ,
recycleLever5( 0 ) ,
flags( flagsP ) ,
idLeverType( F(flagsP) & flSTACKc_LEVERiSlENpREFIXED ? ifcIDtYPElEVER_PTR_lenPrefixedPtrStrokeS : ifcIDtYPElEVER_PTR_ptrStrokeS )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe63 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe62 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.3601502f.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015030.switchc.switchc BEGIN
#define DDNAME       "3func.36015030.switchc.switchc"
#define DDNUMB      (countT)0x36015030
#define IDFILE      (countT)0xf57


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.120001b.1.0.html\"\>definition\</A\>
arguments
 tinP
 thirdP
  must be contained within an etherC object
 flagsP
 pPlateLeverP
 cbDataP
  can be 0
  if not 0 then must be >= sizeof( countT )
  this is the number of bytes allocated for each distinct switch lever encountered
  apprentices: always let this argument default to 0
  if this argument is used then the countT& reference for the switch must be cast to the appropriate type
   example
    *(bigObjectC*)&(countT&)swBig
*/
/**/

/*1*/switchC::switchC( tinS& tinP , thirdC& thirdP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const flagsT flagsP , plateC*& pPlateLeverP , countT* pLeverLathRefP , const countT cbDataP , const countT idGrabLayerP , const osTextT* const postNameP )/*1*/ :
baseSoilXxxxC( tinP.pAdamGlobal1->_switchC_.postOldClassName , postName ) ,
postName( 0 ) ,
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
third( thirdP ) ,
poop( third ) ,
pBaton( F(flagsP) & flSTACKc_DOnOTsERIALIZE ? 0 : new( 0 , tinP , LF ) batonC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , 0 , idGrabLayerP , flBATONc_NOTjEALOUS | flBATONc_SHARElAYER ) ) ,
cbLever( sizeof( countT ) ) ,
cbData( cbDataP > sizeof( countT ) ? cbDataP : sizeof( countT ) ) ,
pbnu( 0 ) ,
stackk( tinP , thirdP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flagsP | flSTACKc_BLOB , sizeof( countT ) + cbData , idGrabLayerP , pLeverLathRefP ) ,
pbLever( (byteT*)&pPlateLeverP ) ,
pSubtractF( subtractLB_plateC_ptr_F ) ,
osTidOwner( 0 ) ,
bDying( 0 ) ,
recycleLever1( ifcIDtYPElEVER_PTR_plateC ) ,
recycleLever2( flagsP ) ,
recycleLever3( (countT)&pPlateLeverP ) ,
recycleLever4( (countT)pLeverLathRefP ) ,
recycleLever5( cbDataP ) ,
flags( flagsP ) ,
idLeverType( ifcIDtYPElEVER_PTR_plateC )
{
    ___CT( pBaton ) ;

    SCOOP
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKc , flagsP ) ;
        __( !third.third_pEtherContainsMe_F() ) ;
        __( cbData < sizeof( countT ) ) ;
        __( !pBaton && !( F(flagsP) & flSTACKc_DOnOTsERIALIZE ) ) ;
        if( third ) return ;
    }

    _IO_

    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;
    ___BITScT( pBaton , 0xe67 ) ;

    if( postNameP )
    {
        countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
        third.newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___CT( postName ) ;
        thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
    }
    third.newF( tinP , LF , pbnu , cbData ) ; ___BITScT( pbnu , 0xe66 ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015030.switchc.switchc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015031.switchc.sortf BEGIN
#define DDNAME       "3func.36015031.switchc.sortf"
#define DDNUMB      (countT)0x36015031
#define IDFILE      (countT)0xf58


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT switchC::sortF( tinS& tinP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )/*1*/
{
    SCOOP   
    IFbEcAREFUL
    {
        if( third ) return ;
        FV( flSTACKsORT , flagsP ) ;
        if( third ) return ;
    }

    _INbATON_
    stackk.sortF( tinP , flagsP , pSubtractFP , subtractionParmP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015031.switchc.sortf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015032.switchc.operator_shiftright BEGIN
#define DDNAME       "3func.36015032.switchc.operator_shiftright"
#define DDNUMB      (countT)0x36015032
#define IDFILE      (countT)0xf59


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const baseSoilXxxxC& switchC::operator >>( soulC& slP ) const/*1*/
{
    TINSL
    SCOOP

    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    _IO_
    if( slP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36015* : 3func.36015032.switchc.operator_shiftright END
