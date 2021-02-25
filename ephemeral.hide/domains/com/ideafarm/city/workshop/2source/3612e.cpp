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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e002.barryc.dt_barryc BEGIN
#define DDNAME       "3func.3612e002.barryc.dt_barryc"
#define DDNUMB      (countT)0x3612e002
#define IDFILE      (countT)0x152c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/barryC::~barryC( voidT )/*1*/
{
    if( pBksBits )
    {
        TINSL
        DELzOMBIE( pBksBits ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e002.barryc.dt_barryc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e003.barryc.barryc BEGIN
#define DDNAME       "3func.3612e003.barryc.barryc"
#define DDNUMB      (countT)0x3612e003
#define IDFILE      (countT)0x152d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 expBytesPerBookP
  if 0 then default is used
  if not 0 then must be >= 0x10
  specify 0 to use default unless address space is in short supply or access will be sequential
   random access to multiple books is much slower because only 1 book is kept open at a time
  0x1d results in 1 book needed if each field is a single bit
 expBitsPerFieldP
  bits per array field
   if 0 then 1 bit is allocated for each field
   bits per field must not exceed the number of bits in a countT
*/

/**/

/*1*/barryC::barryC( tinS& tinP , const countT expBitsPerFieldP , countT cBitsIndexP , countT expBytesPerBookP ) :/*1*/
pBksBits( 0 ) ,
expBitsPerField( expBitsPerFieldP ) ,
expBytesPerCount( 0 ) ,
bitsPerField( 0 ) ,
expFieldsPerCount( 0 ) ,
fieldsPerCount( 0 ) ,
expCountsPerBook( 0 ) ,
countsPerBook( 0 ) ,
cBitsIndex( cBitsIndexP )
{
    if( !expBytesPerBookP ) expBytesPerBookP = 0x1b + expBitsPerFieldP ; // ACCOMODATES ENTIRE countT INDEX RANGE IN 4 BOOK
    if(  expBytesPerBookP > 0x1b ) expBytesPerBookP = 0x1b ; // THIS IS 8 TICKS, WHICH IS 1/16 OF TOTAL APPLICATION ADDRESS SPACE ; BIG ENOUGH FOR countT ARRAY OF 1 BIT ; #BOOKS WILL EQUAL THE NUMBER OF BITS IN EACH FIELD (ARRAY ELEMENT)

    //if( !expBytesPerBookP ) expBytesPerBookP = 0x1d + expBitsPerFieldP ; // ACCOMODATES ENTIRE countT INDEX RANGE IN A SINGLE BOOK
    //if(  expBytesPerBookP > 0x1d ) expBytesPerBookP = 0x1d ; // THIS IS 02 TICKS, WHICH IS 1/4 OF TOTAL APPLICATION ADDRESS SPACE ; BIG ENOUGH FOR countT ARRAY OF 1 BIT ; #BOOKS WILL EQUAL THE NUMBER OF BITS IN EACH FIELD (ARRAY ELEMENT)

    IFbEcAREFUL
    {
        if( POOP ) return ;
        __( expBytesPerBookP < 0x10 ) ; //TO PREVENT UNINTENTIONAL CREATION OF A HUGE NUMBER OF TINY BACKING FILES
        if( POOP ) return ;
    }

    ZE( countT , expBitsPerByte ) ;
    while( 1 << expBitsPerByte < SB ) ++ expBitsPerByte ; //A:ASSUME: SB IS A POWER OF 2

    while( 1 << expBytesPerCount < sizeof( countT ) ) ++ expBytesPerCount ; //A:ASSUME: sizeof( countT ) IS A POWER OF 2

    const countT expBitsPerCount = expBitsPerByte + expBytesPerCount ;

    __( expBitsPerFieldP > expBitsPerCount ) ; //FOR EFFICIENCY AND SIMPLICITY, I ONLY SUPPORT FIELDS THAT FIT WITHIN A countT

    ZE( countT , expBitsNeeded ) ;
    ZE( countT , expBytesNeeded ) ;
    ZE( countT , expBooksNeeded ) ;
    ZE( countT , cBooksNeeded ) ;
    ZE( countT , cBytesPerBook ) ;

    if( !POOP )
    {
        /*const countT*/ expBitsNeeded = ( cBitsIndex ? cBitsIndex : 1 << expBitsPerCount ) + expBitsPerFieldP ;
        /*const countT*/ expBytesNeeded = expBitsNeeded > expBitsPerByte
            ? expBitsNeeded - expBitsPerByte
            : 0
        ;

        if( expBytesPerBookP > expBytesNeeded ) expBytesPerBookP = expBytesNeeded ;

        /*const countT*/ expBooksNeeded = expBytesNeeded - expBytesPerBookP ;

        /*const countT*/ cBooksNeeded = 1 << expBooksNeeded ;

        /*const countT*/ cBytesPerBook = 1 << expBytesPerBookP ;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      //20170109@1746: ", 3" ADDED TO KEEP 3 INACTIVE AFTER INSPECTING LOG
        pBksBits = new( 0 , tinP , pbBksBits , sizeof pbBksBits ) booksC( tinP , TAG( TAGiDnULL ) , T("barryC.")+TF2((countT)this,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(tinP.osPid,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES)+T(".")+TF2(tinP.monitor.idThread,flFORMAT_UNSIGNED|flFORMAT_NObIGITvALUES) , ifcIDsTATEsPACE_SCRATCH , /*flBOOKSc_LOCK |*/ flBOOKSc_DOnOTiNITIALIZEdATA | flBOOKSc_WRITER | flBOOKSc_PURGEoNcT | flBOOKSc_PURGEoNdT , cBytesPerBook + 1 , 3 ) ; // 1 EXTRA BYTE IS ALLOCATED THAT WILL NEVER BE WRITTEN TO, SO THAT CREATION OF ANOTHER BOOK IS AVOIDED

        for( countT idb = 1 ; idb <= cBooksNeeded ; idb ++ )
        {
            handle0111C hBitBook ;
            pBksBits->writeF( tinP , hBitBook , 0 , 0 , 0 , 0 , flBOOKScwRITE_SETrEMAINING ) ;

            if( idb < cBooksNeeded )
            {
                handle0111C hBitBookLath ;
                ZE( byteT , bLath ) ;
                pBksBits->writeF( tinP , hBitBookLath , &bLath , sizeof bLath ) ;
            }

            __( hBitBook.cNoteF() - cBytesPerBook ) ;
            __NZ( hBitBook.c1F() ) ;
            __( hBitBook.c2F() - idb ) ;
        }
    }

    expFieldsPerCount = expBitsPerCount - expBitsPerField ;
    fieldsPerCount = 1 << expFieldsPerCount ;

    expCountsPerBook = expBytesPerBookP - expBytesPerCount ;
    countsPerBook = 1 << expCountsPerBook ;

    bitsPerField = 1 << expBitsPerField ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e003.barryc.barryc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e004.barryc.operator_call BEGIN
#define DDNAME       "3func.3612e004.barryc.operator_call"
#define DDNUMB      (countT)0x3612e004
#define IDFILE      (countT)0x152e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
parameters
 tinP
 offP
 maskP
  must be 0
   currently not enforced
  on return, will contain a mask that can be applied to my return value to strip extraneous bits
 offBitP
  must be 0
   currently not enforced
  on return, will contain the offset of the woth nonze""ro bit in maskP
  can be applied to shift my stripped return value to obtain the field value
*/

/**/

/*1*/countT& barryC::operator ()( tinS& tinP , const countT offP , countT& maskP , countT& offBitP )/*1*/
{
    if( cBitsIndex && offP >> cBitsIndex ) { BLAMMO ; }

    countT offCount  = offP     >> expFieldsPerCount ;
    countT offField  = offP     %  fieldsPerCount    ;
           offBitP   = offField << expBitsPerField   ; // FOR SPEED, I DO NOT VALIDATE offBitP AND ALLOW CALLER TO NEGLECT TO INITIALIZE TO ZE
    countT offBook   = offCount >> expCountsPerBook  ;
           offCount %=             countsPerBook     ;

    maskP = 0 ; // FOR SPEED, I DO NOT VALIDATE THE MASK AND ALLOW CALLER TO NEGLECT TO INITIALIZE TO ZE
    {
        countT cBits = bitsPerField ;
        countT cDo = cBits ;
        while( cDo -- ) ( maskP <<= 1 ) |= 1 ;

        cDo = offField ;
        while( cDo -- ) maskP <<= cBits ;
    }

    handle0011C hBitByte( offCount << expBytesPerCount , 1 + offBook ) ;
            
    ZE( const byteT* , pbz ) ;
    countT cbz = sizeof( countT ) ;
    __NZ( pBksBits->readF( tinP , pbz , cbz , hBitByte ) ) ;
    __Z( pbz ) ;
    __NZ( cbz - sizeof( countT ) ) ;            

    return *(countT*)pbz ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3612e* : 3func.3612e004.barryc.operator_call END
