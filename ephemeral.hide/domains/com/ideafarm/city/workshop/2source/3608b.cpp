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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b001.arrayOldC.dt_arrayOldC BEGIN
#define DDNAME       "3func.3608b001.arrayOldC.dt_arrayOldC"
#define DDNUMB      (countT)0x3608b001
#define IDFILE      (countT)0x12a2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/arrayOldC::~arrayOldC( voidT )/*1*/
{
    TINSL
    PUSE( tinP , pbHave ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b001.arrayOldC.dt_arrayOldC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b002.arrayOldC.arrayOldC BEGIN
#define DDNAME       "3func.3608b002.arrayOldC.arrayOldC"
#define DDNUMB      (countT)0x3608b002
#define IDFILE      (countT)0x12a3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/arrayOldC::arrayOldC( tinS& tinP , const flagsT flagsP , const countT cbHeaderP ) :/*1*/
pbHave( 0 ) ,
pbHaveEnd( 0 ) ,
pbzUsed( 0 ) ,
pbzUsedEnd( 0 ) ,
flags( flagsP ) ,
cbHeader( cbHeaderP + !!( F(flagsP) & flARRAYoLDc_LENGTHpREFIX ) * sizeof( countT ) ) //BUG FIXED: "!!" ADDED 2012.01.13 WITHOUT ANALYSIS
{
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b002.arrayOldC.arrayOldC END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b003.arrayOldC.operator_bytet_ptr BEGIN
#define DDNAME       "3func.3608b003.arrayOldC.operator_bytet_ptr"
#define DDNUMB      (countT)0x3608b003
#define IDFILE      (countT)0x12a4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/arrayOldC::operator byteT*( voidT )/*1*/
{
    return pbzUsed < pbzUsedEnd ? pbzUsed : 0 ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b003.arrayOldC.operator_bytet_ptr END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b004.arrayOldC.cbf BEGIN
#define DDNAME       "3func.3608b004.arrayOldC.cbf"
#define DDNUMB      (countT)0x3608b004
#define IDFILE      (countT)0x12a5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT arrayOldC::cbF( voidT )/*1*/
{
    return pbzUsedEnd - pbzUsed ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b004.arrayOldC.cbf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b005.arrayOldC.prependf BEGIN
#define DDNAME       "3func.3608b005.arrayOldC.prependf"
#define DDNUMB      (countT)0x3608b005
#define IDFILE      (countT)0x12a6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT arrayOldC::prependF( tinS& tinP , const byteT* const pbP , countT cbP )/*1*/
{
    //THIS CODE ENSURES THAT THE "END" OF THE USED BYTES IS ALWAYS ALLOCATED, SO APP CAN SET IT TO 0
    //THIS IS DONE IN A WAY THAT ENSURES THAT ALL ALLOCATED SIZES >= sizeof( countT ) ARE MULTIPLES OF THE WORD SIZE
    //CONJ: THIS COMMENT IS NOT REALLY TRUE

    if( !cbP ) cbP = thirdC::c_strlenIF( tinP , pbP ) ;

    if( cbP )
    {
        if( !pbHave )
        {
            appendF( tinP , pbP , cbP ) ;



















        }
        else if( pbzUsed - pbHave - cbHeader >= cbP )
        {
            thirdC::c_memcpyIF( tinP , pbzUsed    - cbP , pbP , cbP ) ;
            pbzUsed    -= cbP ;
        }
        else
        {
            countT cbUsedOld = pbzUsedEnd - pbzUsed ;
            countT cbBoth = cbUsedOld + cbP ;
            countT cbWant = cbHeader + cbBoth ;
            countT cbHave = 1 ;
            while( cbHave <= cbWant ) cbHave <<= 1 ;
            countT cbExtra = cbHave - cbWant ;
            ZE( byteT* , pbHaveNew ) ;
            PUSE.newF( tinP , LF , pbHaveNew , cbHave ) ; ___( pbHaveNew ) ;
            #if defined( ENABLEdROPnOTES )
                if( pbHaveNew )
                {
                    dropNoteS* pNote = PUSE.pDropNoteF( tinP , (byteT*)pbHaveNew ) ;
                    if( pNote )
                    {
                        pNote->idType       = ifciDtYPEdROPnOTE_earDropImage ;
                        pNote->cbRequested  = pNote->cbUsedReally = cbHave ;
                    }
                }
            #endif
            byteT* pbHaveNewEnd = pbHaveNew + cbHave ;

            byteT* pbzUsedNew = pbHaveNew + cbExtra + cbHeader ;
            if( pbHaveNew )
            {
                thirdC::c_memcpyIF( tinP , pbzUsedNew             , pbP     , cbP       ) ;
                thirdC::c_memcpyIF( tinP , pbzUsedNew + cbP       , pbzUsed , cbUsedOld ) ;
            }
            PUSE( tinP , pbHave ) ;

            pbHave = pbHaveNew ;
            pbHaveEnd = pbHave + cbHave ;
            pbzUsed = pbzUsedNew ;
            pbzUsedEnd = pbzUsed + cbBoth ;
        }
    }

    if( pbzUsed && F(flags) & flARRAYoLDc_LENGTHpREFIX ) ((countT*)pbzUsed)[ - 1 ] = pbzUsedEnd - pbzUsed ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b005.arrayOldC.prependf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b006.arrayOldC.appendf BEGIN
#define DDNAME       "3func.3608b006.arrayOldC.appendf"
#define DDNUMB      (countT)0x3608b006
#define IDFILE      (countT)0x12a7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT arrayOldC::appendF( tinS& tinP , const byteT* const pbP , countT cbP )/*1*/
{
    //THIS CODE ENSURES THAT THE "END" OF THE USED BYTES IS ALWAYS ALLOCATED, SO APP CAN SET IT TO 0
    //THIS IS DONE IN A WAY THAT ENSURES THAT ALL ALLOCATED SIZES >= sizeof( countT ) ARE MULTIPLES OF THE WORD SIZE
    //CONJ: THIS COMMENT IS NOT REALLY TRUE

    if( !cbP ) cbP = thirdC::c_strlenIF( tinP , pbP ) ;

    if( cbP )
    {
        if( !pbHave )
        {
            countT cbWant = cbHeader + cbP ; // THE PUSE.newF ARGUMENT SHOULD ALWAYS BE A POWER OF 2
            countT cbHave = 1 ;
            while( cbHave <= cbWant ) cbHave <<= 1 ;
            PUSE.newF( tinP , LF , pbHave , cbHave ) ; ___( pbHave ) ;
            #if defined( ENABLEdROPnOTES )
                if( pbHave )
                {
                    dropNoteS* pNote = PUSE.pDropNoteF( tinP , (byteT*)pbHave ) ;
                    if( pNote )
                    {
                        pNote->idType       = ifciDtYPEdROPnOTE_earDropImage ;
                        pNote->cbRequested  = pNote->cbUsedReally = cbHave ;
                    }
                }
            #endif
            pbHaveEnd = pbHave + cbHave ;
            pbzUsed = pbHave + cbHeader ;
            if( pbzUsed )
            {
                thirdC::c_memcpyIF( tinP , pbzUsed , pbP , cbP ) ;
                pbzUsedEnd = pbzUsed + cbP ;
            }
        }
        else if( pbHaveEnd - pbzUsedEnd      >= cbP )
        {
            thirdC::c_memcpyIF( tinP , pbzUsedEnd       , pbP , cbP ) ;
            pbzUsedEnd += cbP ;
        }
        else
        {
            countT cbUsedOld = pbzUsedEnd - pbzUsed ;
            countT cbBoth = cbUsedOld + cbP ;
            countT cbWant = cbHeader + cbBoth ;
            countT cbHave = 1 ;
            while( cbHave <= cbWant ) cbHave <<= 1 ;

            ZE( byteT* , pbHaveNew ) ;
            PUSE.newF( tinP , LF , pbHaveNew , cbHave ) ; ___( pbHaveNew ) ;
            #if defined( ENABLEdROPnOTES )
                if( pbHaveNew )
                {
                    dropNoteS* pNote = PUSE.pDropNoteF( tinP , (byteT*)pbHaveNew ) ;
                    if( pNote )
                    {
                        pNote->idType       = ifciDtYPEdROPnOTE_earDropImage ;
                        pNote->cbRequested  = pNote->cbUsedReally = cbHave ;
                    }
                }
            #endif
            byteT* pbHaveNewEnd = pbHaveNew + cbHave ;

            byteT* pbzUsedNew = pbHaveNew           + cbHeader ;
            if( pbHaveNew )
            {
                thirdC::c_memcpyIF( tinP , pbzUsedNew             , pbzUsed , cbUsedOld ) ;
                thirdC::c_memcpyIF( tinP , pbzUsedNew + cbUsedOld , pbP     , cbP       ) ;
            }
            PUSE( tinP , pbHave ) ;

            pbHave = pbHaveNew ;
            pbHaveEnd = pbHave + cbHave ;
            pbzUsed = pbzUsedNew ;
            pbzUsedEnd = pbzUsed + cbBoth ;
        }
    }

    if( pbzUsed && F(flags) & flARRAYoLDc_LENGTHpREFIX ) ((countT*)pbzUsed)[ - 1 ] = pbzUsedEnd - pbzUsed ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b006.arrayOldC.appendf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b007.arrayOldC.freeprefixf BEGIN
#define DDNAME       "3func.3608b007.arrayOldC.freeprefixf"
#define DDNUMB      (countT)0x3608b007
#define IDFILE      (countT)0x12a8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT arrayOldC::freePrefixF( countT cbP )/*1*/
{
    pbzUsed    += cbP ;
    if( pbzUsed    > pbzUsedEnd ) pbzUsed    = pbzUsedEnd ;

    countT cbNow = pbzUsedEnd - pbzUsed ;
    if( pbzUsed && F(flags) & flARRAYoLDc_LENGTHpREFIX ) ((countT*)pbzUsed)[ - 1 ] = cbNow ;

    return cbNow ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b007.arrayOldC.freeprefixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b008.arrayOldC.freesuffixf BEGIN
#define DDNAME       "3func.3608b008.arrayOldC.freesuffixf"
#define DDNUMB      (countT)0x3608b008
#define IDFILE      (countT)0x12a9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/countT arrayOldC::freeSuffixF( countT cbP )/*1*/
{
    pbzUsedEnd -= cbP ;
    if( pbzUsedEnd < pbzUsed    ) pbzUsedEnd = pbzUsed    ;

    countT cbNow = pbzUsedEnd - pbzUsed ;
    if( pbzUsed && F(flags) & flARRAYoLDc_LENGTHpREFIX ) ((countT*)pbzUsed)[ - 1 ] = cbNow ;

    return cbNow ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b008.arrayOldC.freesuffixf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b009.arrayOldC.purgeF BEGIN
#define DDNAME       "3func.3608b009.arrayOldC.purgeF"
#define DDNUMB      (countT)0x3608b009
#define IDFILE      (countT)0x12aa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT arrayOldC::purgeF( tinS& tinP )/*1*/
{
    PUSE( tinP , pbHave ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3608b* : 3func.3608b009.arrayOldC.purgeF END
