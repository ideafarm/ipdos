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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074001.momc.momc BEGIN
#define DDNAME       "3func.36074001.momc.momc"
#define DDNUMB      (countT)0x36074001
#define IDFILE      (countT)0x1245


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/momC::momC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
spouseC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) )
{
    _IO_
    pEther = &etherP ;
    thirdC::c_memsetIF( tinP , (byteT*)pcCursor , sizeof pcCursor ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074001.momc.momc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074002.momc.operator_call BEGIN
#define DDNAME       "3func.36074002.momc.operator_call"
#define DDNUMB      (countT)0x36074002
#define IDFILE      (countT)0x1246


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/count01T momC::operator ()( tinS& tinP , const byteT bP )/*1*/
{
    IFbEcAREFUL    
    {
        if( *pEther ) return 0 ;
    }

    _IO_
    ZE( count01T , code ) ;
    const countT idFrameNew = 1 + offNew / CBfRAMEsPOUSE ; //N1
    const countT idFrameMin = idFrameNew <= CfRAMESsPOUSE ? 1 : 1 + idFrameNew - CfRAMESsPOUSE ; //N1
    const countT offMin = ( idFrameMin - 1 ) * CBfRAMEsPOUSE ; //N1
    countT& off = pcCursor[ bP ] ; //N1
    if( off < offMin ) off = offMin ;
    const countT offLooped = off ; //N1
    countT idFrame = 1 + off / CBfRAMEsPOUSE ; //N1
    byteT* pbFrame = ppbFrame[ stFrame - idFrameNew + idFrame ] ;

    while( off < offNew )
    {
        if( pbFrame[ off % CBfRAMEsPOUSE ] == bP )
        {
            code = (count01T)( offNew - off ) ;
            if( ++ off > offNew ) off = offMin ;
            break ;
        }

        if( ++ off == offNew ) off = offMin ;

        if( off == offLooped ) break ;

        if( !( off % CBfRAMEsPOUSE ) )
        {
            idFrame = 1 + off / CBfRAMEsPOUSE ;
            pbFrame = ppbFrame[ stFrame - idFrameNew + idFrame ] ;
        }
    }

    if( !code ) code = (count01T)( 0xff00 + bP ) ;

    rememberF( tinP , bP ) ;
    if( deltaOverflowFix )
    {
        countT offEnd = sizeof pcCursor / sizeof pcCursor[ 0 ] ;
        for( countT off = 0 ; off < offEnd ; off ++ ) pcCursor[ off ] -= deltaOverflowFix ;
        deltaOverflowFix = 0 ;
    }
    return code ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074002.momc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074003.momc.operator_call BEGIN
#define DDNAME       "3func.36074003.momc.operator_call"
#define DDNUMB      (countT)0x36074003
#define IDFILE      (countT)0x1247


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
i encode arbitrary byteT strings and can be used for an unbounded byteT stream
i support security pills and security pins
 a pill is a snippet of the encoded information
 a pin is a snippet of raw in the clear information
  "pin" refers to "pill input"
  the name is chosen mainly to correspond to the use of pin numbers
  pin files can be reused and are intended to be delivered via trusted courier and used to secure the transmission of pills over ip
  pin files will also serve to prove the identity of human residents
  the name is also motivated by the "needle in haystack" concept
   some pins will consist of an entire CD-ROM filled with superrandom numbers
   the posessor of such a CD-ROM will be assumed to be the registered owner of that pin image
callers who do not use security pills can achieve medium security
callers who use security pills can achieve high security
high security depends upon preventing eavesdroppers and alterers from capturing the entire code stream
medium security (no pills) relies on long connection duration (days or strongs)
high security relies on secure transport of "pills" via secondary channels, such as trusted courier
arguments
 tinP
 pcP
  must be 0
  will be allocated and will point to a string of ccP codes
 ccP
  must be 0
  will be set to the number of codes in pcP
 pbP
  must not be 0 unless pczNameP and bPinP
  must point to the byteT values to be encoded
  if 0 then the bytes in the specified pin file will be encoded
 cbP
  can be 0
  if 0 then pbP is assumed to be null terminated
   the terminating null is not encoded
  if not 0 then pbP must point to cbP byteT values, which will be encoded
 pczNameP
  can be 0
  is usually 0
  if 0 then the pcP will point to the code string that represents pbP
  if not 0 then pcP will contain a short code string that just contains an escape sequence that names the pill or pin to be inserted
   if bPinP is 0 then the escape sequence will specify a pill
   if bPinP is 1 then the escape sequence will specify a pin
  a file that contains either the pill or the pin will be written to the Security Key Depository
 bPinP
  must be 0 if pczNameP is 0
  set to 0 to write a pill to the Security Key Depository
  set to 1 to write a pin to the Security Key Depository
  if 1 and !pbP then the pin file will be used as input and will be implicitly overwritten
   the file will not be overwritten because such an overwrite would not alter its contents
*/
/**/
/*1*/voidT momC::operator ()( tinS& tinP , count01T*& pcP , countT& ccP , const byteT* pbP , countT cbP , const countT* const pczNameP , const boolT bPinP )/*1*/
{
    IFbEcAREFUL    
    {
        if( *pEther ) return ;
        __NZ( pcP ) ;
        __( ccP ) ;
        __( !pbP && ( !pczNameP || !bPinP ) ) ;
        if( *pEther ) return ;
    }

    _IO_
    TN( tBig , "" ) ;
    if( pczNameP )
    {
        TN( tDot , "." ) ;
        textC tName( tinP , TAG( TAGiDnULL ) , flTEXTc_null , pczNameP , flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE , 8 , 0 , tDot ) ;
        countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
        tBig = T("///desk/" POSTfOLDERsECURITYkEYdEPOSITORY )+(idHomeDisk==1?T(""):T(" (Home ")+TF1(idHomeDisk)+T(")"))+T("/")+tName ;
    }

    const boolT bExistingPin = !pbP && !cbP && pczNameP && bPinP ;
    if( bExistingPin ) { pEther->boxGetShadowF( tinP , *(byteT**)&pbP , cbP , tBig ) ; ___( pbP ) ; }

    if( pbP )
    {
        if( !cbP ) cbP = pEther->strBodyLengthF( tinP , pbP ) ;
    
        ZE( count01T* , pcBody ) ;
        ZE( countT    , ccBody ) ;
        if( pczNameP && bPinP )
        {
            for( countT off = 0 ; off < cbP ; off ++ ) (*this)( tinP , pbP[ off ] ) ;
        }
        else
        {
            ccBody = cbP ;
            pEther->newF( tinP , LF , pcBody , ccBody ) ; ___( pcBody ) ;
            if( pcBody )
            {
                for( countT off = 0 ; off < cbP ; off ++ ) pcBody[ off ] = (*this)( tinP , pbP[ off ] ) ;
            }
        }
    
        if( !pczNameP )
        {
            pcP = pcBody ;
            ccP = ccBody ;
        }
        else
        {
            if( !bPinP )
            {
                pEther->boxPutF( tinP , tBig , (byteT*)pcBody , sizeof( count01T ) * ccBody ) ;
                pEther->delF( tinP , pcBody ) ;
                ccBody = 0 ;
            }
            else if( !bExistingPin ) pEther->boxPutF( tinP , tBig , pbP , cbP ) ;
        
            countT cczName = pEther->strBodyLengthF( tinP , pczNameP ) + 1 ;
            ccP = 3 + cczName * sizeof( countT ) / sizeof( count01T ) ; //A: ASSUME: sizeof( countT ) IS A MULTIPLE OF sizeof( count01T )
            pEther->newF( tinP , LF , pcP , ccP ) ; ___( pcP ) ;
            if( pcP )
            {
                count01T* pCursor = pcP ;
                *( pCursor ++ ) = 0                                                                                    ; //ESCAPE CODE
                *( pCursor ++ ) = (count01T)( bPinP ? ifcIDcMDsPOUSE_INSERTnAMEDpIN : ifcIDcMDsPOUSE_INSERTnAMEDpILL ) ;
                *( pCursor ++ ) = (count01T)( cczName * sizeof( countT ) / sizeof( count01T ) ) ;
                pEther->memCopyF( tinP , (byteT*)pCursor , (byteT*)pczNameP , cczName * sizeof( countT ) ) ;
            }
        }
    }
    if( bExistingPin ) pEther->delF( tinP , *(byteT**)&pbP ) ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

#undef IDFILE
#undef DDNUMB
#undef DDNAME
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36074* : 3func.36074003.momc.operator_call END
