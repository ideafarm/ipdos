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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073001.spousec.spousec BEGIN
#define DDNAME       "3func.36073001.spousec.spousec"
#define DDNUMB      (countT)0x36073001
#define IDFILE      (countT)0x1240


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/spouseC::spouseC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
idLineCt( idLineCtP ) ,
idiFileCt( idiFileCtP ) ,
pEther( 0 ) ,
stFrame( tinP , etherC::etRockIF( tinP ) , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) , flSTACKc_FIFO|flSTACKc_BLOB|flSTACKc_ALLOWzE , CBfRAMEsPOUSE ) ,
pbFrameNew( 0 ) ,
offNew( 0 ) ,
deltaOverflowFix( 0 )
{
    IFbEcAREFUL    
    {
    }

    _IO_
    if( pbBitsCtP ) thirdC::c_memcpyIF( tinP , (byteT*)pbBitsCt , (byteT*)pbBitsCtP , sizeof pbBitsCt ) ;
    else            thirdC::c_memsetIF( tinP , (byteT*)pbBitsCt , sizeof pbBitsCt ) ;

    thirdC::c_memsetIF( tinP , (byteT*)ppbFrame , sizeof ppbFrame ) ;
    stFrame << (byteT*)0 ;
    pbFrameNew = (byteT*)&stFrame[ - 1 ] ;
    refresh_ppbFrame_F( pbFrameNew ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073001.spousec.spousec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073002.spousec.etherf BEGIN
#define DDNAME       "3func.36073002.spousec.etherf"
#define DDNUMB      (countT)0x36073002
#define IDFILE      (countT)0x1241


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/etherC& spouseC::etherF( tinS& tinP )/*1*/
{
    _IO_
    etherC& ether = *pEther ;
    return ether ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073002.spousec.etherf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073003.spousec.etherf BEGIN
#define DDNAME       "3func.36073003.spousec.etherf"
#define DDNUMB      (countT)0x36073003
#define IDFILE      (countT)0x1242


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT spouseC::etherF( tinS& tinP , etherC& etherP )/*1*/
{
    _IO_
    countT const ecOld = *pEther ;
    pEther = &etherP ; // ASSUME: THIS IS COMPILED TO A SINGLE ASSEMBLY INSTRUCTION, SO OTHER THREADS WILL NEVER GET AN INVALID POINTER VALUE
    if( ecOld && !*pEther ) *pEther = ecOld ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073003.spousec.etherf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073004.spousec.refresh_ppbframe_f BEGIN
#define DDNAME       "3func.36073004.spousec.refresh_ppbframe_f"
#define DDNUMB      (countT)0x36073004
#define IDFILE      (countT)0x1243


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//OBJECTIVE: VERY FAST FUNCTION THAT KEEPS ppbFrame IN SYNC WITH stFrame
//A: ASSUME: EACH CALL IS ASSOCIATED WITH PUSHING pbFrameNewP AND USUALLY POPPING A pbFrameDelP
//A: ASSUME: I AM CALLED AFTER THE PUSH AND BEFORE THE POP (IF ANY)
//
//RECIPE (FOR CfRAMESsPOUSE == 8)
// FRAME 1 IS DOOMED IFF THERE ARE NOW > 8 FRAMES
// IF > 8 FRAMES
//  1 = 2, 2 = 3, 3 = 4, ..., 8 = NEW
// ELSE
//  M = NEW
// 

/*1*/voidT spouseC::refresh_ppbFrame_F( byteT* const pbFrameNewP )/*1*/
{
    //_IO_
    countT idYoungest = stFrame ;
    if( !idYoungest ) ; //DO NOTHING IF stFrame IS IMPOTENT
    else if( idYoungest <= CfRAMESsPOUSE ) ppbFrame[ idYoungest ] = pbFrameNewP ;
    else
    {
        countT idf = 1 ;
        for( ; idf < CfRAMESsPOUSE ; idf ++ ) ppbFrame[ idf ] = ppbFrame[ idf + 1 ] ;
        ppbFrame[ idf ] = pbFrameNewP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073004.spousec.refresh_ppbframe_f END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073005.spousec.rememberf BEGIN
#define DDNAME       "3func.36073005.spousec.rememberf"
#define DDNUMB      (countT)0x36073005
#define IDFILE      (countT)0x1244


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT spouseC::rememberF( tinS& tinP , const byteT bP )/*1*/
{
    IFbEcAREFUL    
    {
    }

    _IO_
    countT offInFrame = offNew % CBfRAMEsPOUSE ;
    pbFrameNew[ offInFrame ] = bP ;
    if( offInFrame == CBfRAMEsPOUSE - 1 )
    {
        stFrame << (byteT*)0 ;
        pbFrameNew = (byteT*)&stFrame[ - 1 ] ;

        if( stFrame > CfRAMESsPOUSE )
        {
            refresh_ppbFrame_F( pbFrameNew ) ;
            stFrame.extractF( 0 , tinP , 1 ) ;
            //CONoUTrAW( "." ) ;
        }
        else refresh_ppbFrame_F( pbFrameNew ) ;
    }

    //if( !( offNew % 0x10000 ) ) { CONoUTrAW3( "\r        \r" , offNew , "" ) ; }

    ++ offNew ;
    if( !offNew ) //HANDLES OVERFLOW
    {
        deltaOverflowFix = MAXcOUNTT - CBfRAMEsPOUSE * CfRAMESsPOUSE + 1 ; //DERIVED CLASSES MUST NOTICE THAT THIS IS NONZE, USE IT TO FIX ITSELF, AND RESET THIS
        offNew -= deltaOverflowFix ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36073* : 3func.36073005.spousec.rememberf END
