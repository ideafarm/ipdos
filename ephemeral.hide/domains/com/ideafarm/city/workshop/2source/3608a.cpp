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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a002.xrayc.dt_xrayc BEGIN
#define DDNAME       "3func.3608a002.xrayc.dt_xrayc"
#define DDNUMB      (countT)0x3608a002
#define IDFILE      (countT)0x1297


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/xrayC::~xrayC( voidT )/*1*/
{
    TINSL
    for( countT offx = 0 ; offx < sizeof ppbx / sizeof ppbx[ 0 ] ; offx ++ )
    {
        if( ppbx[ offx ] ) { PUSE( tinP , ppbx[ offx ] ) ; ppbx[ offx ] = 0 ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a002.xrayc.dt_xrayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a003.xrayc.xrayc BEGIN
#define DDNAME       "3func.3608a003.xrayc.xrayc"
#define DDNUMB      (countT)0x3608a003
#define IDFILE      (countT)0x1298


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/xrayC::xrayC( tinS& tinP , const flagsT flagsP , const countT cbElementP , const countT cxRetainP ) :/*1*/
flags( flagsP ) ,
cbElement( cbElementP ) ,
cElements( 0 ) ,
cxRetain( cxRetainP ) ,
offxFifoPush( 0 ) ,
offsrFifoPush( 0 ) ,
offxFifoPull( 0 ) ,
offsrFifoPull( 0 )
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        FV( flXRAY , flags ) ;
        __Z( cbElement ) ;
        if( POOP ) return ;
    }

    thirdC::c_memsetIF( tinP , (byteT*)ppbx , sizeof ppbx ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcsx , sizeof pcsx ) ;

    //for( countT offs = 0 ; offs <= 0x10 ; offs ++ )
    //{
    //    CONoUTrAW7( "offs,offx,offsr: " , offs , " " , offxF( offs ) , " " , offsrF( offs ) , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a003.xrayc.xrayc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a004.xrayc.operator_countt BEGIN
#define DDNAME       "3func.3608a004.xrayc.operator_countt"
#define DDNUMB      (countT)0x3608a004
#define IDFILE      (countT)0x1299


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/xrayC::operator countT( voidT ) const/*1*/
{
    return cElements ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a004.xrayc.operator_countt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a005.xrayc.offxsrf BEGIN
#define DDNAME       "3func.3608a005.xrayc.offxsrf"
#define DDNUMB      (countT)0x3608a005
#define IDFILE      (countT)0x129a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT xrayC::offxsrF( countT& offxP , countT& offsrP , countT offSlotP ) const/*1*/
{
    //if( !( F(flags) & flXRAY_FIFO ) ) { BLAMMO ; }

    offxP = offxFifoPull ;
    offsrP = offsrFifoPull ;

    while( offSlotP >= pcsx[ offxP ] )
    {
        offSlotP -= pcsx[ offxP ] ;
        offxP ++ ;
    }

    offsrP = offSlotP ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a005.xrayc.offxsrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a006.xrayc.offxf BEGIN
#define DDNAME       "3func.3608a006.xrayc.offxf"
#define DDNUMB      (countT)0x3608a006
#define IDFILE      (countT)0x129b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT xrayC::offxF( countT offSlotP ) const/*1*/
{
    ZE( countT , offx ) ;
    //if( F(flags) & flXRAY_FIFO ) { BLAMMO ; }

    offSlotP ++ ;
    for(;;)
    {
        offSlotP >>= 1 ;
        if( offSlotP ) offx ++ ;
        else           break ;
    }

    return offx ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a006.xrayc.offxf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a007.xrayc.offsrf BEGIN
#define DDNAME       "3func.3608a007.xrayc.offsrf"
#define DDNUMB      (countT)0x3608a007
#define IDFILE      (countT)0x129c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT xrayC::offsrF( countT offSlotP ) const/*1*/
{
    //if( F(flags) & flXRAY_FIFO ) { BLAMMO ; }

    ZE( countT , offsr ) ;
    if( offSlotP )
    {
        countT offx = offxF( offSlotP ) ;
        countT csaBelow = csaxF( offx ) - 1 ; //EXPLOITS THE FACT THAT THE SIZE OF MY EXTENT IS 1 GREATER THAN THE ACCUMULATED SIZE OF ALL EXTENTS BELOW MY EXTENT
        offsr = offSlotP - csaBelow ;
    }

    return offsr ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a007.xrayc.offsrf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a008.xrayc.csaxf BEGIN
#define DDNAME       "3func.3608a008.xrayc.csaxf"
#define DDNUMB      (countT)0x3608a008
#define IDFILE      (countT)0x129d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT xrayC::csaxF( countT offxP ) const //I AM NOT USED FOR FIFO XRAYS/*1*/
{
    //if( F(flags) & flXRAY_FIFO ) { BLAMMO ; }

    countT csax = 1 ;
    while( offxP )
    {
        offxP -- ;
        csax <<= 1 ;
    }

    return csax ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a008.xrayc.csaxf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a009.xrayc.freef BEGIN
#define DDNAME       "3func.3608a009.xrayc.freef"
#define DDNUMB      (countT)0x3608a009
#define IDFILE      (countT)0x129e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT xrayC::freeF( tinS& tinP , const boolT bFifoLathP )/*1*/
{
    //NO OVERHEAD CODE OR ERROR DETECTION CODE, FOR MAX SPEED

    ZE( countT , vv ) ;
    if( F(flags) & flXRAY_FIFO )
    {
        cElements -- ;

        if( bFifoLathP )
        {
            if( !offsrFifoPush )
            {
                if( -- offxFifoPush == - 1 ) offxFifoPush = CxRAYeXTENTS - 1 ;
                offsrFifoPush = pcsx[ offxFifoPush ] - 1 ;
            }
            else offsrFifoPush -- ;

            vv = *(countT*)( ppbx[ offxFifoPush ] + offsrFifoPush * cbElement ) ;
    
            if( !cElements || !offsrFifoPush )
            {
                //CONoUTrAW5( "freeing a fifo extent at " , offxFifoPush , " of " , pcsx[ offxFifoPush ] , " slots\r\n" ) ;
                PUSE( tinP , ppbx[ offxFifoPush ] ) ; ppbx[ offxFifoPush ] = 0 ;
                if( offxFifoPush == CxRAYeXTENTS ) offxFifoPush = 0 ;
                offsrFifoPush = 0 ;
            }
        }
        else
        {
            vv = *(countT*)( ppbx[ offxFifoPull ] + ( offsrFifoPull ++ ) * cbElement ) ;
    
            if( !cElements || offsrFifoPull == pcsx[ offxFifoPull ] )
            {
                //CONoUTrAW5( "freeing a fifo extent at " , offxFifoPull , " of " , pcsx[ offxFifoPull ] , " slots\r\n" ) ;
                offsrFifoPull = 0 ;
                PUSE( tinP , ppbx[ offxFifoPull ] ) ; ppbx[ offxFifoPull ++ ] = 0 ;
                if( offxFifoPull == CxRAYeXTENTS ) offxFifoPull = 0 ;
            }
        }

        if( !cElements ) offxFifoPull = offsrFifoPush = offsrFifoPull = offxFifoPush = 0 ;
    }
    else
    {
        vv = (*this)[ 1 ] ;

        countT offxBefore =             offxF( - 1 + cElements -- )     ;
        countT offxAfter  = cElements ? offxF( - 1 + cElements    ) : 0 ;
    
        boolT bFree = cElements
            ? offxBefore != offxAfter && cxRetain <= offxBefore
            : !cxRetain
        ;
    
        if( bFree )
        {
            //CONoUTrAW3( "freeing a lifo extent at " , offxBefore , "\r\n" ) ;
            PUSE( tinP , ppbx[ offxBefore ] ) ; ppbx[ offxBefore ] = 0 ;
        }
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a009.xrayc.freef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00a.xrayc.operator_elt BEGIN
#define DDNAME       "3func.3608a00a.xrayc.operator_elt"
#define DDNUMB      (countT)0x3608a00a
#define IDFILE      (countT)0x129f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT& xrayC::operator []( sCountT idP )/*1*/
{
    ZE( countT* , pcs ) ;
    if( !idP ) //IF I AM TO ALLOCATE FOR A NEW ELEMENT
    {
        if( F(flags) & flXRAY_FIFO )
        {
            cElements ++ ;

            for(;;)
            {
                if( !ppbx[ offxFifoPush ] )
                {
                    TINSL
                    //CONoUTrAW5( "allocating an extent at " , offxFifoPush , " of " , cElements , " slots\r\n" ) ;
                    pcsx[ offxFifoPush ] = cElements ; //NEW HEADROOM == CURRENT TOTAL USED, SO OCCUPANCY RATE VARIES FROM 0 TO 1/2
                    PUSE.newF( tinP , LF , ppbx[ offxFifoPush ] , pcsx[ offxFifoPush ] * cbElement ) ; ___( ppbx[ offxFifoPush ] ) ;

                    offsrFifoPush = 0 ;
                    break ;
                }
                else if( offsrFifoPush == pcsx[ offxFifoPush ] )
                {
                    offxFifoPush ++ ;
                    if( offxFifoPush == CxRAYeXTENTS ) offxFifoPush = 0 ;
                    if( ppbx[ offxFifoPush ] ) { BLAMMO ; }

                    offsrFifoPush = 0 ;
                }
                else break ;
            }

            //CONoUTrAW5( "allocating relative slot " , offsrFifoPush , " of extent " , offxFifoPush , "\r\n" ) ;
            pcs = (countT*)( ppbx[ offxFifoPush ] + ( offsrFifoPush ++ ) * cbElement ) ;
        }
        else
        {
            countT offx  = offxF(  cElements    ) ;
            countT offsr = offsrF( cElements ++ ) ;
    
            if( !ppbx[ offx ] )
            {
                TINSL
                PUSE.newF( tinP , LF , ppbx[ offx ] , csaxF( offx ) * cbElement ) ; ___( ppbx[ offx ] ) ;
            }
    
            pcs = (countT*)( ppbx[ offx ] + offsr * cbElement ) ;
        }
    }
    else if( F(flags) & flXRAY_FIFO )
    {
        if( idP > 0 )
        {
            if( idP <= cElements )
            {
                countT offs = idP - 1 ;
        
                ZE( countT , offx ) ;
                ZE( countT , offsr ) ;
                offxsrF( offx , offsr , offs ) ;
                pcs = (countT*)( ppbx[ offx ] + offsr * cbElement ) ;
            }
            else { BLAMMO ; }
        }
        else
        {
            idP = - idP ;
            if( idP <= cElements )
            {
                countT offs = cElements - idP ;
        
                ZE( countT , offx ) ;
                ZE( countT , offsr ) ;
                offxsrF( offx , offsr , offs ) ;
                pcs = (countT*)( ppbx[ offx ] + offsr * cbElement ) ;
            }
            else { BLAMMO ; }
        }
    }
    else
    {
        if( idP > 0 )
        {
            if( idP <= cElements )
            {
                countT offs = cElements - idP ;
        
                ZE( countT , offx ) ;
                ZE( countT , offsr ) ;
                offx  = offxF(  offs ) ;
                offsr = offsrF( offs ) ;
                pcs = (countT*)( ppbx[ offx ] + offsr * cbElement ) ;
            }
            else { BLAMMO ; }
        }
        else
        {
            idP = - idP ;
            if( idP <= cElements )
            {
                countT offs = idP - 1 ;
        
                ZE( countT , offx ) ;
                ZE( countT , offsr ) ;
                offx  = offxF(  offs ) ;
                offsr = offsrF( offs ) ;
                pcs = (countT*)( ppbx[ offx ] + offsr * cbElement ) ;
            }
            else { BLAMMO ; }
        }
    }
    return *pcs ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00a.xrayc.operator_elt END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00b.xrayc.allocf BEGIN
#define DDNAME       "3func.3608a00b.xrayc.allocf"
#define DDNUMB      (countT)0x3608a00b
#define IDFILE      (countT)0x12a0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i allocate multiple new elements efficiently
i do not support fifo xrays
for cNewP 1 i am equivalent to calling (*this)[ 0 ] except that i do not support fifo instances
*/
/**/

/*1*/voidT xrayC::allocF( tinS& tinP , const countT cNewP )/*1*/
{
    if( F(flags) & flXRAY_FIFO ) { BLAMMO ; }

    countT offx1 = offxF( cElements ) ;                 //EXTENT OF WOTH NEW ELEMENT
    countT offx2 = offxF( cElements - 1 + cNewP ) ;     //EXTENT OF LATH NEW ELEMENT
    
    for( countT offx = offx1 ; offx <= offx2 ; offx ++ )
    {
        if( !ppbx[ offx ] ) { PUSE.newF( tinP , LF , ppbx[ offx ] , csaxF( offx ) * cbElement ) ; ___( ppbx[ offx ] ) ; }
    }

    cElements += cNewP ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00b.xrayc.allocf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00c.xrayc.freeallf BEGIN
#define DDNAME       "3func.3608a00c.xrayc.freeallf"
#define DDNUMB      (countT)0x3608a00c
#define IDFILE      (countT)0x12a1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT xrayC::freeAllF( tinS& tinP )/*1*/
{
    //NO OVERHEAD CODE OR ERROR DETECTION CODE, FOR MAX SPEED

    cElements = offsrFifoPull = offxFifoPull = offsrFifoPush = offxFifoPush = 0 ;

    for( countT off = 0 ; off < CxRAYeXTENTS ; off ++ )
    {
        if( ppbx[ off ] ) PUSE( tinP , ppbx[ off ] ) ;
    }

    thirdC::c_memsetIF( tinP , (byteT*)ppbx , sizeof ppbx ) ;
    thirdC::c_memsetIF( tinP , (byteT*)pcsx , sizeof pcsx ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608a* : 3func.3608a00c.xrayc.freeallf END
