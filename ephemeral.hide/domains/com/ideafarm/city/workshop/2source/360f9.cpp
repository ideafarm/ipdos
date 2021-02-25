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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9002.book0c.book0c BEGIN
#define DDNAME       "3func.360f9002.book0c.book0c"
#define DDNUMB      (countT)0x360f9002
#define IDFILE      (countT)0x1458


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
tinP
pbP
 must not be 0, unless called by ct of a derived class
 ct of derived class must call provisionF
cbP
 must not be 0, unless called by ct of a derived class
 ct of derived class must call provisionF
 must be > sizeof( bookHeadS )
*/
/**/

/*1*/book0C::book0C( tinS& tinP , byteT* const pbP , const countT cbP , const flagsT flagsP , const byteT bFillP ) :/*1*/
pHead(  0 ) ,
pbBody( 0 )
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __( cbP && cbP <= sizeof( bookHeadS ) ) ;
        if( POOP ) return ;
    }

    _IO_

    if( pbP && cbP )
    {
        flagsT flagsp = F(flagsP) & flBOOK0c_DOnOTiNITIALIZEdATA
            ? flBOOK0pROVISION_FORMAT | flBOOK0pROVISION_DOnOTiNITIALIZE
            : flBOOK0pROVISION_FORMAT
        ;

        if( F(flagsP) & flBOOK0c_RESETcREFoNcT             ) flagsp |= flBOOK0pROVISION_RESETcREFoNcT             ;
        if( F(flagsP) & flBOOK0c_PRIORbOOKnOTcONTINUEDhERE ) flagsp |= flBOOK0pROVISION_PRIORbOOKnOTcONTINUEDhERE ;

        provisionF( tinP , pbP , cbP , flagsp , bFillP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9002.book0c.book0c END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9003.book0c.provisionf BEGIN
#define DDNAME       "3func.360f9003.book0c.provisionf"
#define DDNUMB      (countT)0x360f9003
#define IDFILE      (countT)0x1459


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT book0C::provisionF( tinS& tinP , byteT* const pbP , const countT cbP , const flagsT flagsP , const byteT bFillP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __Z( pbP ) ;
        __( F(flagsP) & flBOOK0pROVISION_FORMAT && cbP <= sizeof( bookHeadS ) ) ;
        if( POOP ) return ;
    }

    _IO_

    *(byteT**)&pbBody = pbP + sizeof( bookHeadS ) ;

    *(bookHeadS**)&pHead = F(flagsP) & flBOOK0pROVISION_FORMAT
        ? new( 0 , tinP , pbP , sizeof( bookHeadS ) ) bookHeadS( cbP - sizeof( bookHeadS ) )
        : (bookHeadS*)pbP
    ;

    if( F(flagsP) & flBOOK0pROVISION_FORMAT && !( F(flagsP) & flBOOK0pROVISION_DOnOTiNITIALIZE ) ) setF( tinP , bFillP ) ;

    if( F(flagsP) & flBOOK0pROVISION_RESETcREFoNcT && pHead->cRef )
    {
        CONoUTrAW3( "book0C: warning: resetting cRef [was]:    " , pHead->cRef , "\r\n" ) ;
        pHead->cRef = 0 ;
    }

    if( F(flagsP) & flBOOK0pROVISION_PRIORbOOKnOTcONTINUEDhERE )
    {
        pHead->flags |= flBOOKhEADs_PRIORbOOKnOTcONTINUEDhERE ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9003.book0c.provisionf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9004.book0c.writef BEGIN
#define DDNAME       "3func.360f9004.book0c.writef"
#define DDNUMB      (countT)0x360f9004
#define IDFILE      (countT)0x145a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i append byte values to the end of the current contents of the book
if there is insufficient space, i will fill the available space and silently not write the remaining bytes
the caller must check cb1P to verify that all bytes were written
for application convenience, i optionally accept input in oo pieces, which i will concatenate
 for example, application code can build a header image and then write the concatenation of the header image and the data
filling versus setting
 oo distinct "fill" operations are supported
  flBOOK0cwRITE_ELSEfILLtOeND: specifies that the remaining bytes be set to FILLbYTE_BOOK0c when there is not enough room in the book to perform the write
  !pb1P specifies that the remaining bytes be set to (byteT)cb1P
 in this code and in documentation, "fill" always refers to the flBOOK0cwRITE_ELSEfILLtOeND functionality
 the !pb1P functionality is referred to as "set" (i.e. "setting the bytes")
i evaluate to the offset at which i wrote the specified bytes
parameters
 tinP
 flagsResultP
 pb1P
  can be 0
  normally is not 0
  if 0 then my behavior depends upon whether flBOOK0cwRITE_SETrEMAINING is set
   if flBOOK0cwRITE_SETrEMAINING then all remaining bytes are set to (byteT)c1P
   else cb1P bytes are "written" by reserving them without writing anything to them
 every byte of the remainder of the book will be set to (byteT)cb1P  
 cb1P
  if !pb1P then can be 0 and must be < TUCK
  if !pb1P then specifies the fill value
  if  pb1P then must not be 0 and specifies the number of bytes at pb1P to copy
  on return, will be the number of bytes written from pb1P
   if !pb1P will be the number of fill bytes written
 pb2P
  can be 0
  is normally 0
  if not 0 then points to oo'th piece of input
 cb2P
  if !pb2P then must be 0
  if  pb2P then specifies the number of bytes at pb2P
  on return, will be the number of bytes written from pb2P
 flagsP
  flBOOK0cwRITE_SETrEMAINING: interprets (byteT)cb1P as a "set character" and sets all remaining bytes to this value
 pcOffWroteP
  if not 0 then *pcOffWroteP will be set to the offset at which i wrote the body of the specified bytes
  that offset differs from the offset in my returned value iff wo or more of the optional header fields is ordered
*/
/**/

/*1*/countT book0C::writeF( tinS& tinP , flagsT& flagsResultP , const byteT* const pb1P , countT& cb1P , const byteT* const pb2P , countT& cb2P , const flagsT flagsP , countT* const pcOffWroteP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return 0 ;
        FV( flBOOK0cwRITE , flagsP ) ;
        if( POOP ) return 0 ;
        __NZ(  pb1P &&    F(flagsP) & flBOOK0cwRITE_SETrEMAINING                    ) ;
        __NZ( !pb1P && !( F(flagsP) & flBOOK0cwRITE_SETrEMAINING ) && !cb1P         ) ;
        __NZ( !pb1P &&    F(flagsP) & flBOOK0cwRITE_SETrEMAINING   &&  cb1P >= TUCK ) ;
        __NZ( !pb1P && pb2P ) ;
        __NZ( !pb2P && cb2P ) ;
        __( flagsResultP ) ;
        if( POOP ) return 0 ;
        __( pb1P && !( F(flagsP) & flBOOK0cwRITE_ALLOWoDDlENGTH ) && ( cb1P + cb2P ) % sizeof( countT ) ) ;
        if( POOP ) return 0 ;

        // 20130902@1313: COMMENTED OUT THIS BUG TRAP BECAUSE IT NEVER TRAPPED ANYTHING AND IT IS NOT COMPATIBLE WITH bksTrace
        // //TO FIND A BUG.  RETAIN THESE TESTS UNTIL CODE IS WRITTEN THAT WOULD VIOLATE THEM INTENTIONALLY
        // __( !( F(flagsP) & flBOOK0cwRITE_HEADfINGER1  ) ) ;
        // __( !( F(flagsP) & flBOOK0cwRITE_HEADiDfORMAT ) ) ;
        // __( !( F(flagsP) & flBOOK0cwRITE_HEADcBdATA   ) ) ;
        // __( !( F(flagsP) & flBOOK0cwRITE_HEADfINGER2  ) ) ;
        // __( !( F(flagsP) & flBOOK0cwRITE_TAILfINGER   ) ) ;
        // if( POOP ) return 0 ;
    }

    //_IO_ (WOULD BLOW STACK DUE TO inOutFrameC EMITTING APP TELEMETRY)

    ZE( countT , cbHeadTail ) ;
    if( F(flagsP) & flBOOK0cwRITE_HEADfINGER1  ) cbHeadTail += sizeof( countT ) ;
    if( F(flagsP) & flBOOK0cwRITE_HEADiDfORMAT ) cbHeadTail += sizeof( countT ) ;
    if( F(flagsP) & flBOOK0cwRITE_HEADcBdATA   ) cbHeadTail += sizeof( countT ) ;
    if( F(flagsP) & flBOOK0cwRITE_HEADfINGER2  ) cbHeadTail += sizeof( countT ) ;
    if( F(flagsP) & flBOOK0cwRITE_TAILfINGER   ) cbHeadTail += sizeof( countT ) ;

    flagsResultP = flBOOK0cwRITErESULT_null ;
    ZE( countT , cbuOld ) ;
    ZE( countT , cbFill ) ;
    {
        sleepC s( tinP , TAG( TAGiDnULL ) ) ;
        for(;;)
        {
            cbuOld = pHead->cbUsed ;
    
            if( !cbuOld && !( F(pHead->flags) & flBOOKhEADs_PRIORbOOKnOTcONTINUEDhERE ) && !( F(flagsP) & flBOOK0cwRITE_CONTINUEfROMpRIOR ) )
            {
                ++ s ; thirdC::dosSleepWinkIF( tinP ) ;
                continue ;
            }
     
            const countT cbAvailable = F(flagsP) & flBOOK0cwRITE_PURGE
                ? pHead->cbBody
                : pHead->cbBody - cbuOld
            ;

            const countT cbAsk = !( F(flagsP) & flBOOK0cwRITE_SETrEMAINING )
                ? cb1P + cb2P + cbHeadTail
                : cbAvailable
                    ? cbAvailable - 1                                               // "- 1" IS TO AVOID WRITING LATH BYTE, MOTIVATED BY THE PRESUMPTION THAT CALLER IS ABOUT TO USE THE BYTES THAT I AM SETTING (SEE barryC FOR EXAMPLE)
                    : 0
            ;

            if( cbAsk > cbAvailable ) // CAN ONLY BE TRUE IF pb1P
            {
                if( F(flagsP) & flBOOK0cwRITE_PURGEiFfULL )
                {
                    setIfEqualsAM( pHead->cbUsed , 0 , cbuOld ) ;
                    continue ;
                }

                flagsResultP |= flBOOK0cwRITErESULT_COULDnOTwRITEaLL ;

                if( F(flagsP) & flBOOK0cwRITE_ALLoRnONE || cbAvailable <= cbHeadTail ) cb2P = cb1P = 0 ;
                else
                {
                    countT cbDo = cbAvailable - cbHeadTail ;

                    if( cb1P <= cbDo ) cb2P = cbDo - cb1P ;
                    else
                    {
                        cb1P = cbDo ;
                        cb2P = 0 ;
                    }
                }
            }

            const countT cbw = F(flagsP) & flBOOK0cwRITE_SETrEMAINING
                ? cbAsk
                : cb1P
                    ? cb1P + cb2P + cbHeadTail
                    : 0
            ;

            if( !cbw && F(flagsP) & flBOOK0cwRITE_ELSEfILLtOeND ) cbFill = cbAvailable ;

            countT cbuNew = F(flagsP) & flBOOK0cwRITE_PURGE
                ? cbw + cbFill
                : cbw + cbFill + cbuOld
            ;

            if( ( !cbw && !cbFill ) || cbuOld == setIfEqualsAM( pHead->cbUsed , cbuNew , cbuOld ) ) break ;
        }
    }

    if( F(flagsP) & flBOOK0cwRITE_FLUSHbOOKhEADoNcHANGE ) thirdC::flushViewOfFileIF( tinP , (byteT*)pHead , sizeof( bookHeadS ) ) ;

    if( F(flagsP) & flBOOK0cwRITE_PURGE ) cbuOld = 0 ;

    static const countT cbPage = thirdC::os_cbPage_IF( tinP ) ; //A:ASSUME: PAGE SIZE DOES NOT CHANGE DURING LIFE OF BASE OS GEN
    byteT* const pbStart = pbBody + cbuOld ;
    byteT* pbc = pbStart ;
    const countT offPageStart = (countT)pbc / cbPage  ;

    if( F(flagsP) & flBOOK0cwRITE_SETrEMAINING )
    {
        if( cbuOld >= pHead->cbBody - 1 ) cb1P = 0 ;
        else
        {
            byteT bSet = (byteT)cb1P ;
            cb1P = pHead->cbBody - cbuOld - 1 ; // 1 IS SUBTRACTED TO PREVENT THE LATH BYTE FROM BEING SET ; THIS IS TO AVOID UNDESIRED CLOSURE O A booksC bookC INSTANCE ; AN APP THAT WANTS TO SET THE LATH BYTE MUST DO IT EXPLICITLY WITH AN OO'TH CALL TO writeF
            thirdC::c_memsetIF( tinP , pbc , cb1P , bSet ) ; pbc += cb1P  ;
        }
    }
    else
    {
        if( F(flagsP) & flBOOK0cwRITE_HEADfINGER1     )     { putNegAM( *(countT*)pbc , FINGERnEG_BOOK0cwRITEhEAD1 )      ; pbc += sizeof( countT ) ; }
        if( F(flagsP) & flBOOK0cwRITE_HEADiDfORMAT    )     { *(countT*)pbc = ifcIDfORMAT_BOOK0hEAD                       ; pbc += sizeof( countT ) ; }
        if( F(flagsP) & flBOOK0cwRITE_HEADcBdATA      )     { *(countT*)pbc = cb1P                                        ; pbc += sizeof( countT ) ; }
        if( F(flagsP) & flBOOK0cwRITE_HEADfINGER2     )     { putNegAM( *(countT*)pbc , FINGERnEG_BOOK0cwRITEhEAD2 )      ; pbc += sizeof( countT ) ; }

        if( pcOffWroteP ) *pcOffWroteP = pbc - pbBody ;

        if( pb1P )                                            thirdC::c_memcpyIF( tinP , pbc , pb1P , cb1P )              ; pbc += cb1P             ; // INTENTIONAL CONDITIONAL MEMCPY FOLLOWED BY UNCONDITIONAL INCREMENT OF pbc
        if( cb2P                                      )     { thirdC::c_memcpyIF( tinP , pbc , pb2P , cb2P )              ; pbc += cb2P             ; }

        if( F(flagsP) & flBOOK0cwRITE_FLUSHb4tAIL     )       thirdC::flushViewOfFileIF( tinP , pbStart , pbc - pbStart ) ;

        if( F(flagsP) & flBOOK0cwRITE_TAILfINGER      )     { putNegAM( *(countT*)pbc , FINGERnEG_BOOK0cwRITEtAIL )       ; pbc += sizeof( countT ) ; }

        if( cbFill )
        {
                                                              thirdC::c_memsetIF( tinP , pbc , cbFill , FILLbYTE_BOOK0c ) ; pbc += cbFill ;
            if( setIfZeAM( pHead->cbFill , cbFill ) )     { BLAMMO ; } //THE BLAMMO SHOULD BE IMPOSSIBLE
        }
    }

    if( pbc == pbBody + pHead->cbBody && cbuOld < pHead->cbBody && ( F(flagsP) & flBOOK0cwRITE_SETrEMAINING || cb1P || cbFill ) ) flagsResultP |= flBOOK0cwRITErESULT_WROTElATHbYTE ;
    __NZ( F(flagsP) & flBOOK0cwRITE_SETrEMAINING && F(flagsResultP) & flBOOK0cwRITErESULT_WROTElATHbYTE ) ;  //THIS VERIFIES THAT SETrEMAINING DID NOT WRITE THE LATH BYTE, WHICH SHOUJLD BE IMPOSSIBLE

    const countT offPageEnd = (countT)pbc / cbPage  ;

    if( offPageEnd != offPageStart && F(flagsP) & flBOOK0cwRITE_FLUSHaTpAGE ) thirdC::flushViewOfFileIF( tinP , (const byteT*)( offPageStart * cbPage ) , ( offPageEnd - offPageStart ) * cbPage ) ;

    return !cb1P ? 0 : cbuOld ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9004.book0c.writef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9005.book0c.operator_bookheads_ref BEGIN
#define DDNAME       "3func.360f9005.book0c.operator_bookheads_ref"
#define DDNUMB      (countT)0x360f9005
#define IDFILE      (countT)0x145b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/book0C::operator bookHeadS&( voidT )/*1*/
{
    return *pHead ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9005.book0c.operator_bookheads_ref END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9006.book0c.readf BEGIN
#define DDNAME       "3func.360f9006.book0c.readf"
#define DDNUMB      (countT)0x360f9006
#define IDFILE      (countT)0x145c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
params
 tinP
 pbP
  must be 0
  receives the address of the beginning of the requested blob
 cbP
  must not be 0
  is interpreted as a maximum to be accepted and will be adjusted downward to the number of bytes actually read
  use -1 to read all available bytes
 offP
  is updated so that it will be ready for the next read
  if the book is exhausted by the read, the next call will reset to 0 and the call after that will read from the beginning
   repeatedly calling me will result in the data being cycled, delimited by a call that returns [0,0]
*/
/**/

// CODE CONFORMANCE STANDARD
// THIS DEFINITION EXEMPLIFIES AN ASSUMPTION MADE IMPLICITLY THROUGHOUT THE BASE DLL DEFINITION SET (DICTIONARY FOLDER)
// REFERENCE PARAMETERS ARE ASSUMED TO NOT BE VOLATILE W.R.T. THE CURRENT THREAD
// FOR THIS DEFINITION, A VOLATILE offP THAT INCREASES COULD RESULT IN A READ ACCESS VIOLATION

/*1*/voidT book0C::readF( tinS& tinP , const byteT*& pbP , countT& cbP , countT& offP ) const/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
        __NZ( pbP ) ;
        __Z( cbP ) ;         //SPECIFY -1 TO GET ALL THAT ARE AVAILABLE
        if( POOP ) return ;
    }

    _IO_

    const countT cbuSnap = pHead->cbUsed - pHead->cbFill ;

    if( cbuSnap <= offP )
    {
        cbP = offP = 0 ;
    }
    else
    {
        const countT cbMax = cbuSnap - offP ;

        if( cbP > cbMax ) cbP = cbMax ;
    
        pbP = pbBody + offP ;
        offP += cbP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9006.book0c.readf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9007.book0c.purgef BEGIN
#define DDNAME       "3func.360f9007.book0c.purgef"
#define DDNUMB      (countT)0x360f9007
#define IDFILE      (countT)0x145d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT book0C::purgeF( tinS& tinP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_
    pHead->cbUsed = 0 ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9007.book0c.purgef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9008.book0c.setf BEGIN
#define DDNAME       "3func.360f9008.book0c.setf"
#define DDNUMB      (countT)0x360f9008
#define IDFILE      (countT)0x145e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT book0C::setF( tinS& tinP , const byteT bFillP )/*1*/
{
    IFbEcAREFUL    
    {
        if( POOP ) return ;
    }

    _IO_

    thirdC::c_memsetIF( tinP , pbBody , pHead->cbBody , bFillP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360f9* : 3func.360f9008.book0c.setf END
