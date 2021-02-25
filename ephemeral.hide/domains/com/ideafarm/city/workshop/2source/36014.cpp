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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36014* : 3func.36014001.maxc.maxc BEGIN
#define DDNAME       "3func.36014001.maxc.maxc"
#define DDNUMB      (countT)0x36014001
#define IDFILE      (countT)0xf28


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1180001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
an object of this class can find the maximum countT value for which some condition is true or task is successful
pEtherP can be 0
pTrialFP is a user supplied callback function of type ifc3FT that will be called to try the task or test the condition
in general, you should detect and undo the previous trial if it was successful, just before trying again
your callback function will continue to be called many times after it is first successful, in order to explore the entire countT domain
in your callback function, cast parameters as in this example
 countT bOkF( countT& pEtherP , countT& pValueP , countT& pMemoryP )
 {
 if( !pValueP || !pMemoryP ) return 0 ;
 countT& value = *(countT*)pValueP ;
 infoS* pInfo = (infoS*)pMemoryP ;
 pInfo->cba = value ;
 POOPIE
 return value < 0x100 ;
 }
arguments
 pEtherP
 pTrialFP
 pMemoryP
*/
/**/
/*1*/maxC::maxC( tinS& tinP , etherC* pEtherP , ifc3FT pTrialFP , voidT* const pMemoryP )/*1*/ :
value( 0 )
{
    //U: CRAFT CODE TO IMPLEMENT STEPS 2-9
    // ALGORITHM:
    // 1. SEARCH BY DOUBLING AND HALVING UNTIL HAVE A BOUNDING RANGE WHERE HIGH = 2 * LOW
    // 2. SEARCH BY CHECKING 0x10 EQUALLY SPACED POINTS
    // 3. REPEAT 2 UNTIL RANGE IS LESS THAN 0x10 POINTS
    // 4. CHECK ALL POIN_PETS IN THE RANGE

    IFbEcAREFUL
    {
        if( pEtherP && *pEtherP ) return ;
        if( pEtherP ) __Z( pTrialFP ) ;
        if( pEtherP && *pEtherP ) return ;
        if( !pTrialFP ) return ;
    }

    value = 0 ;
    countT pEther = (countT)pEtherP ;
    countT pMemory = (countT)pMemoryP ;
    countT bZeOk = (*pTrialFP)( tinP , pEther , value , pMemory ) ;
    if( pEtherP ) __Z( bZeOk ) ;
    if( ( pEtherP && *pEtherP ) || !bZeOk ) return ;
    value = (countT)( - 1 ) / 2 ;

    ZE( countT , highestGood ) ;
    ZE( countT , lowestBad ) ;
    ZE( boolT , bOk ) ;
    ZE( countT , mostRecentGood ) ;

    while( !pEtherP || !*pEtherP )
    {
        if( mostRecentGood == value ) break ; // I AM CYCLING

        if( (*pTrialFP)( tinP , pEther , value , pMemory ) )
        {
            mostRecentGood = value ;
            if(  highestGood < value ) highestGood = value ;
            value <<= 1 ;
        }
        else
        {
            if( lowestBad > value || !lowestBad ) lowestBad = value ;
            value >>= 1 ;
        }

        if( highestGood << 1 == lowestBad )
        {
            value = highestGood ;
            break ;
        }
    }

    mostRecentGood = 0 ;
    ZE( countT , delta ) ;
    while( !pEtherP || !*pEtherP )
    {
        delta = ( lowestBad - highestGood ) / 0x10 ;
        if( !delta ) delta = 1 ;
        value = ( lowestBad + highestGood ) / 2 ;
        ZE( countT , valueGoodLag ) ;
        ZE( boolT , bOneMoreGood ) ;
        while( !pEtherP || !*pEtherP )
        {
            if( mostRecentGood == value ) break ; // I AM CYCLING

            if( (*pTrialFP)( tinP , pEther , value , pMemory ) )
            {
                mostRecentGood = value ;

                if( bOneMoreGood ) break ;
                if( value == valueGoodLag ) break ;
                valueGoodLag = value ;
                if( highestGood < value ) highestGood = value ;
                value += delta ;
                if( value > lowestBad ) value = lowestBad ; //U: WHY CAN THIS OCCUR?
            }
            else
            {
                if( lowestBad > value || !lowestBad ) lowestBad = value ;
                value -= delta ;
                if( value > lowestBad )
                {
                    value = lowestBad ; //U: WHY CAN THIS OCCUR?
                    bOneMoreGood = 1 ;
                }
            }

            if( highestGood + delta == lowestBad )
            {
                value = highestGood ;
                bOneMoreGood = 1 ;
            }
        }
        if( delta == 1 ) break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36014* : 3func.36014001.maxc.maxc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36014* : 3func.36014002.maxc.operator_countt BEGIN
#define DDNAME       "3func.36014002.maxc.operator_countt"
#define DDNUMB      (countT)0x36014002
#define IDFILE      (countT)0xf29


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1180002.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*/maxC::operator countT( voidT )/*1*/
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36014* : 3func.36014002.maxc.operator_countt END
