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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a004.bitnodes.operator_new BEGIN
#define DDNAME       "3func.3613a004.bitnodes.operator_new"
#define DDNUMB      (countT)0x3613a004
#define IDFILE      (countT)0x1559


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT* bitNodeS::operator new( countT cbP , napkinsC& napkinsP , countT& offElementP )/*1*/
{
    return (voidT*)napkinsP[ offElementP ++ ] ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a004.bitnodes.operator_new END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a005.bitnodes.operator_new BEGIN
#define DDNAME       "3func.3613a005.bitnodes.operator_new"
#define DDNUMB      (countT)0x3613a005
#define IDFILE      (countT)0x155a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT* bitNodeS::operator new( countT cbP , byteT* const pbP )/*1*/
{
    return (voidT*)pbP ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a005.bitnodes.operator_new END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a006.bitnodes.tracef BEGIN
#define DDNAME       "3func.3613a006.bitnodes.tracef"
#define DDNUMB      (countT)0x3613a006
#define IDFILE      (countT)0x155b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitNodeS::traceF( tinS& tinP , countT& cNestP , napkinsC* pNapkinsP )/*1*/
{
    //if( (countT)p0 & BM_HIGH ) etherC::etRockIF( tinP ).traceF( tinP , TP("",cNestP)+T("created") ) ;
    //if( (countT)p1 & BM_HIGH ) etherC::etRockIF( tinP ).traceF( tinP , TP("",cNestP)+T("deleted") ) ;

    if( (countT)p0 & ~BM_HIGH )
    {
        etherC::etRockIF( tinP ).traceF( tinP , TPS("",cNestP,strokeS('.'))+T("0") ) ;
        cNestP ++ ;

        if( !pNapkinsP ) ((bitNodeS*)(                     (countT)p0 & ~BM_HIGH   ))->traceF( tinP , cNestP , pNapkinsP ) ;
        else             ((bitNodeS*)( (*pNapkinsP)[ - 1 + (countT)p0 & ~BM_HIGH ] ))->traceF( tinP , cNestP , pNapkinsP ) ;

        cNestP -- ;
    }

    if( (countT)p1 & ~BM_HIGH )
    {
        etherC::etRockIF( tinP ).traceF( tinP , TPS("",cNestP,strokeS('.'))+T("1") ) ;
        cNestP ++ ;

        if( !pNapkinsP ) ((bitNodeS*)(                     (countT)p1 & ~BM_HIGH   ))->traceF( tinP , cNestP , pNapkinsP ) ;
        else             ((bitNodeS*)( (*pNapkinsP)[ - 1 + (countT)p1 & ~BM_HIGH ] ))->traceF( tinP , cNestP , pNapkinsP ) ;

        cNestP -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a006.bitnodes.tracef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a007.bitnodes.walkf BEGIN
#define DDNAME       "3func.3613a007.bitnodes.walkf"
#define DDNUMB      (countT)0x3613a007
#define IDFILE      (countT)0x155c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT bitNodeS::walkF( tinS& tinP , byteT* pbBufferP , countT cbBufferP , countT& cNestP , napkinsC* pNapkinsP , ifcFT pCBFP , countT* pcArgP )/*1*/
{
    if( (countT)p0 & BM_HIGH )
    {
        if( pCBFP ) (*pCBFP)( tinP , *pcArgP ) ; // pcArgP == 0 IS ALLOWED ; CALLEE MUST NOT ACCESS THIS REFERENCE PARAMETER UNLESS MY CALLER SET pcArgP
        else                                     //20141116@2129: U::BUG: HUH?  THAT LOOKS LIKE AN A.V. FOR SURE BUG, SAILOR
        {
            //DISPLAY THE WOTH cNestP BITS IN pbBufferP

            TN( tSay , "" ) ;
            for( countT offb = 0 ; offb < cNestP ; offb ++ )
            {
                byteT* pbc    = pbBufferP + offb / SB  ;
                countT offBit =             offb % SB  ;
                byteT  mask   = (byteT)( 1 << offBit ) ;

                tSay += T(*pbc&mask?"1":"0") ;
            }
            etherC::etRockIF( tinP ).traceF( tinP , tSay ) ;
        }
    }

    byteT* pbc    = pbBufferP + cNestP / SB ;
    countT offBit =             cNestP % SB ;
    byteT  mask   = (byteT)( 1 << offBit )  ;

    if( (countT)p0 & ~BM_HIGH )
    {
        *pbc &= ~mask ;

        cNestP ++ ;

        if( !pNapkinsP ) ((bitNodeS*)(                     (countT)p0 & ~BM_HIGH   ))->walkF( tinP , pbBufferP , cbBufferP , cNestP , pNapkinsP , pCBFP , pcArgP ) ;
        else             ((bitNodeS*)( (*pNapkinsP)[ - 1 + (countT)p0 & ~BM_HIGH ] ))->walkF( tinP , pbBufferP , cbBufferP , cNestP , pNapkinsP , pCBFP , pcArgP ) ;

        cNestP -- ;
    }

    if( (countT)p1 & ~BM_HIGH )
    {
        *pbc |= mask ;

        cNestP ++ ;

        if( !pNapkinsP ) ((bitNodeS*)(                     (countT)p1 & ~BM_HIGH   ))->walkF( tinP , pbBufferP , cbBufferP , cNestP , pNapkinsP , pCBFP , pcArgP ) ;
        else             ((bitNodeS*)( (*pNapkinsP)[ - 1 + (countT)p1 & ~BM_HIGH ] ))->walkF( tinP , pbBufferP , cbBufferP , cNestP , pNapkinsP , pCBFP , pcArgP ) ;

        cNestP -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3613a* : 3func.3613a007.bitnodes.walkf END
