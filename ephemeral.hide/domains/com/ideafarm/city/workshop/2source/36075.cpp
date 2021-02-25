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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075001.dadc.dadc BEGIN
#define DDNAME       "3func.36075001.dadc.dadc"
#define DDNUMB      (countT)0x36075001
#define IDFILE      (countT)0x1248


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/dadC::dadC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
spouseC( tinP , TAGoR( TAGiDnULL , idLineCtP , idiFileCtP , pbBitsCtP ) )
{
    _IO_
    pEther = &etherP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075001.dadc.dadc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075002.dadc.operator_call BEGIN
#define DDNAME       "3func.36075002.dadc.operator_call"
#define DDNUMB      (countT)0x36075002
#define IDFILE      (countT)0x1249


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/byteT dadC::operator ()( tinS& tinP , const count01T cP )/*1*/
{
    IFbEcAREFUL    
    {
        if( *pEther ) return 0 ;
        __Z( cP ) ; //I CANNOT HANDLE ESCAPE SEQUENCES
        __( offNew < cP && cP < 0xff00 ) ; //THE CODE IS INVALID
        if( *pEther ) return 0 ;
    }

    _IO_

    ZE( byteT , bb ) ;
    if( cP >= 0xff00 ) bb = (byteT)( cP & 0xff ) ;
    else
    {
        countT idFrameNew = 1 +   offNew        / CBfRAMEsPOUSE ; //N1
        countT idFrame    = 1 + ( offNew - cP ) / CBfRAMEsPOUSE ; //N1
        //byteT* pbFrame = (byteT*)&stFrame[ stFrame - idFrameNew + idFrame ] ;

        //TO DEBUG A BUG
        //ZE( byteT* , pbFrame ) ;
        //RESTART
        //if( !_restart.cRestarted  )
        //{
        //    pbFrame = ppbFrame[ stFrame - idFrameNew + idFrame ] ;
        //    countT off = ( offNew - cP ) % CBfRAMEsPOUSE ;
        //    bb = pbFrame[ off ] ;
        //}
        //else
        //{
        //    if( stFrame.third ) { CONoUTrAW( "(stFrame is impotent): " ) ; }
        //    LOGrAW9( "ppbFrame,stFrame,idFrameNew,idFrame: " , (countT)ppbFrame , " " , stFrame , " " , idFrameNew , " " , idFrame , "\r\n" ) ;
        //    LOGrAW5( "offNew,cP: " , offNew , " " , cP , "\r\n" ) ;
        //}

        byteT* pbFrame = ppbFrame[           stFrame - idFrameNew + idFrame ] ;
        countT off = ( offNew - cP ) % CBfRAMEsPOUSE ;
        bb = pbFrame[ off ] ;
    }

    rememberF( tinP , bb ) ;
    return bb ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075002.dadc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075003.dadc.operator_call BEGIN
#define DDNAME       "3func.36075003.dadc.operator_call"
#define DDNUMB      (countT)0x36075003
#define IDFILE      (countT)0x124a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
arguments
 tinP
 pbP
  must be 0
 cbP
  must be 0
 pcP
  must not be 0
  must point to ccP count01T values
 ccP
  must not be 0
 bSilentFailP
  normally is 0
  if not 0 then i will fail silently when i cannot read a referenced pill or pin file
  if i fail silently then pbP will remain 0
*/
/**/

//S: EXTERNAL SPECIFICATION: ALL ESCAPE SEQUENCES MUST BE LENGTH PREFIXED
// LAYOUT: 0 , idCmd , ccLength , clobOfThatLength
//MOTIVE: SO THAT CODE LIKE THAT OF socketC::readF CAN HANDLE INCOMING CODE STREAMS WITHOUT KNOWING THE ESCAPE CODE CMD LAYOUTS

/*1*/voidT dadC::operator ()( tinS& tinP , byteT*& pbP , countT& cbP , const count01T* const pcP , countT ccP , const boolT bSilentFailP )/*1*/
{
    IFbEcAREFUL    
    {
        if( *pEther ) return ;
        __NZ( pbP ) ;
        __( cbP ) ;
        __Z( pcP ) ;
        __Z( ccP ) ;
        if( *pEther ) return ;
    }

    _IO_
    ZE( countT , off ) ;
    for( ; off < ccP ; off ++ )
    {
        if( !pcP[ off ] ) break ;
    }

    if( off == ccP ) //INPUT DOES NOT CONTAIN ESCAPE SEQUENCES
    {
        cbP = ccP ;
        pEther->newF( tinP , LF , pbP , cbP + 1 ) ; ___( pbP ) ;
        if( pbP )
        {
            for( countT off = 0 ; off < ccP ; off ++ ) pbP[ off ] = (*this)( tinP , pcP[ off ] ) ;
            pbP[ off ] = 0 ;
        }
    }
    else
    {
        stackC stOut_pbSnip( tinP , *pEther , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_byteT ) ;
        stackC stOut_cbSnip( tinP , *pEther , TAG( TAGiDnULL ) , flSTACKc_FIFO ) ;
        const count01T* const pcEnd = pcP + ccP ;
        const count01T*       pcSnip = pcP ;
        ZE( boolT , bFail ) ;
        while( pcSnip < pcEnd && !bFail )
        {
            if( !*pcSnip )
            {
                //CONoUTrAW3( "[" , pcSnip-pcP , "]\r\n" ) ;
                const count01T idCmd = *( ++ pcSnip ) ;
                switch( idCmd )
                {
                    case (count01T)ifcIDcMDsPOUSE_INSERTnAMEDpILL :
                    case (count01T)ifcIDcMDsPOUSE_INSERTnAMEDpIN :
                    {
                        countT cczName = *( ++ pcSnip ) ;
                        countT cczNameVerify = 2 * ( pEther->strBodyLengthF( tinP , (countT*)( ++ pcSnip ) ) + 1 ) ;
                        if( cczName - cczNameVerify ) { BLAMMO ; } //U::

                        ZE( byteT* , pbIn ) ;
                        ZE( countT , cbIn ) ;
                        {
                            TN( tDot , "." ) ;
                            textC tShort( tinP , TAG( TAGiDnULL ) , flTEXTc_null , (countT*)pcSnip , flFORMAT_UNSIGNED|flFORMAT_FOREIGN|flFORMAT_FILLzE , 8 , 0 , tDot ) ;
                            countT* pcNameSave = (countT*)pcSnip ; //U::
                            pcSnip += cczName ;
                            countT idHomeDisk = etherC::ifc_idHomeIdisk_IF() ;
                            TN( tLong , "" ) ; tLong = T("///desk/" POSTfOLDERsECURITYkEYdEPOSITORY)+(idHomeDisk==1?T(""):T(" (Home ")+TF1(idHomeDisk)+T(")"))+T("/")+tShort ;

                            if( bSilentFailP )
                            {
                                IFsCRATCH
                                {
                                    SCOOPS
                                    if( idCmd == (count01T)ifcIDcMDsPOUSE_INSERTnAMEDpILL ){ tinP.pEtScratch->boxGetF(       tinP , pbIn , cbIn , tLong , 1 ) ; ___( pbIn ) ; }
                                    else                                                   { tinP.pEtScratch->boxGetShadowF( tinP , pbIn , cbIn , tLong , 1 ) ; ___( pbIn ) ; }
                                    if( POOP ) POOPR
                                }
                            }
                            else
                            {
                                if( idCmd == (count01T)ifcIDcMDsPOUSE_INSERTnAMEDpILL ){ pEther->boxGetF(       tinP , pbIn , cbIn , tLong , 1 ) ; ___( pbIn ) ; }
                                //else                                                   { pEther->boxGetShadowF( tinP , pbIn , cbIn , tLong , 1 ) ; ___( pbIn ) ; }
                                else
                                {
                                    pEther->boxGetShadowF( tinP , pbIn , cbIn , tLong , 1 ) ; ___( pbIn ) ;
                                    //if( pcNameSave[ 3 ] == idbKEYpINtYPE_SOCKETcONNECTION ) { CONoUTrAW( T("dad: ")+TF1(cbIn)+T(" ")+tShort+T("\r\n") ) ; }
                                }
                            }
                        }

                        if( !pbIn )
                        {
                            bFail = 1 ;
                            break ;
                        }
                        else if( idCmd == (count01T)ifcIDcMDsPOUSE_INSERTnAMEDpILL )
                        {
                            __( cbIn % sizeof( count01T ) ) ;
                            if( !*pEther )
                            {
                                ZE( byteT* , pbSnip ) ;
                                ZE( countT , cbSnip ) ;
                                (*this)( tinP , pbSnip , cbSnip , (const count01T*)pbIn , cbIn / sizeof( count01T ) ) ;
                                stOut_pbSnip << pbSnip ; pbSnip = 0 ;
                                stOut_cbSnip << cbSnip ;
                            }
                            pEther->delF( tinP , pbIn ) ;
                        }
                        else
                        {
                            if( !*pEther )
                            {
                                for( countT off = 0 ; off < cbIn ; off ++ ) rememberF( tinP , pbIn[ off ] ) ;

                                //PIN IMAGE IS PRESUMED TO BE UNWANTED (E.G. SRU VALUES)
                                //stOut_pbSnip << pbIn ; pbIn = 0 ;
                                //stOut_cbSnip << cbIn ;
                            }
                            pEther->delF( tinP , pbIn ) ;
                        }

                        break ;
                    }
                }
            }
            else
            {
                const count01T* pcSnipe = pcSnip + 1 ;
                while( pcSnipe < pcEnd && *pcSnipe ) pcSnipe ++ ; // pcSnipe NOW POINTS ETHER TO 0 OR TO THE END
                //CONoUTrAW5( "[" , pcSnip-pcP , "," , pcSnipe , "]\r\n" ) ;
                countT cbSnip = pcSnipe - pcSnip ; //CANNOT BE 0

                ZE( byteT* , pbSnip ) ;
                pEther->newF( tinP , LF , pbSnip , cbSnip ) ; ___( pbSnip ) ;
                if( pbSnip ) for( countT off = 0 ; off < cbSnip ; off ++ ) pbSnip[ off ] = (*this)( tinP , pcSnip[ off ] ) ;
                stOut_pbSnip << pbSnip ; pbSnip = 0 ;
                stOut_cbSnip << cbSnip ;

                pcSnip = pcSnipe ;
            }
        }

        // pbP , cbP <- CONCATENATION OF SNIPPETS IN stOut_pbSnip
        __( stOut_cbSnip - stOut_pbSnip ) ;
        if( !*pEther && !bFail )
        {
            if( stOut_cbSnip )
            {
                ZE( countT , cbAll ) ;
                handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                do cbAll += stOut_cbSnip.downF( tinP , hDown ) ;
                while( !stOut_cbSnip.third && ~hDown ) ;

                pEther->newF( tinP , LF , pbP , cbAll + 1 ) ; ___( pbP ) ;
                if( pbP )
                {
                    pbP[ cbAll ] = 0 ;
                    cbP = cbAll ;
                    byteT* pb3 = pbP ;
                    while( stOut_pbSnip )
                    {
                        ZE( byteT* , pbSnip ) ;
                        ZE( countT , cbSnip ) ;
                        stOut_pbSnip >> pbSnip ;
                        stOut_cbSnip >> cbSnip ;
                        pEther->memCopyF( tinP , pb3 , pbSnip , cbSnip ) ;
                        pEther->delF( tinP , pbSnip ) ;
                        pb3 += cbSnip ;
                    }
                }
            }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36075* : 3func.36075003.dadc.operator_call END
