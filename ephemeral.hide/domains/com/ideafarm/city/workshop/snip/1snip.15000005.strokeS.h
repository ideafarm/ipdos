
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.15000005.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.7f10104.1.1.0.html\"\>7f10104:  WAKEsHOW( "example.simplest.snip.15000005.strokeS" )\</A\>
*/
/**/

// measure04T PARAMETERS ARE USED TO MATCH COMPILER DEFAULT FOR FLOATING POINT CONSTANTS, WHICH IS measure04T (double)

/*1*/struct _export strokeS/*1*/
{
/**/

/* face */
 countT idCaste ;
 countT idAdam ;
 countT cNote ;

/* birth , death */
 NEWdELcLASSpROTOS

/**/

 inline ~strokeS( voidT ) { if( idCaste == sc_cADAM ) deregisterF() ; }
 inline strokeS( const sCountT idAdamP , const countT idCasteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = 0 ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const measureT m_idAdamP , const countT idCasteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( *(countT*)&m_idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = *(countT*)&m_idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = 0 ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const countT idAdamP , const countT idCasteP , const countT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const countT idAdamP , const countT idCasteP , const measure04T m_cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            measureT m_cNote  = m_cNoteP ;
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = *(countT*)&m_cNote ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const sCountT idAdamP , const countT idCasteP , const measure04T m_cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            measureT m_cNote  = m_cNoteP ;
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = *(countT*)&m_cNote ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const measure04T m_idAdamP , const countT idCasteP , const countT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( *(countT*)&m_idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            measureT m_idAdam = m_idAdamP ;
 /*.*/            idAdam  = *(countT*)&m_idAdam ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const measure04T m_idAdamP , const countT idCasteP , const sCountT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( *(countT*)&m_idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            measureT m_idAdam = m_idAdamP ;
 /*.*/            idAdam  = *(countT*)&m_idAdam ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const measure04T m_idAdamP , const countT idCasteP , const measure04T m_cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( *(countT*)&m_idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            measureT m_idAdam = m_idAdamP ;
 /*.*/            measureT m_cNote  = m_cNoteP ;
 /*.*/            idAdam  = *(countT*)&m_idAdam ; //measureT AND countT ARE GUARANTEED TO BE THE SAME SIZE, THE WORD SIZE OF THE CPU
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = *(countT*)&m_cNote ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const sCountT idAdamP , const countT idCasteP , const sCountT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const countT idAdamP , const countT idCasteP , const sCountT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 inline strokeS( const sCountT idAdamP , const countT idCasteP , const countT cNoteP )
 /*.*/    {
 /*.*/        if( !idCasteP ) mapFromUnicodeF( idAdamP ) ;
 /*.*/        else
 /*.*/        {
 /*.*/            idAdam  = idAdamP ;
 /*.*/            idCaste = idCasteP ;
 /*.*/            cNote   = cNoteP ;
 /*.*/            if( idCaste == sc_cADAM ) { BLAMMO ; }
 /*.*/        }
 /*.*/    }
 strokeS( const countT idAdamP , const countT idCasteP ) ;
 strokeS( const countT fingerprintP ,  soulC*& pSoulP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34008.strokeS.strokeS!||
 inline strokeS( const countT idAdamP ){ mapFromUnicodeF( idAdamP ) ; }
 inline strokeS( voidT ) { cNote = idAdam = idCaste = 0 ; }
 strokeS( const strokeS& sP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34002.strokeS.strokeS!||
 static strokeS strokeIF( tinS& tinP , const countT idToolP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34004.strokeS.strokeIF!||
 static strokeS strokeIF( tinS& tinP , stackC& stP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34005.strokeS.strokeIF!||
 countT idToolF( tinS& tinP ) const ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34006.strokeS.idToolIF!||

/* expressions */
 inline boolT operator !( voidT ) const { return !idAdam ; }
 inline operator countT( voidT ) const { return idAdam ; }
 inline operator byteT( voidT ) const 
 /*.*/    {
 /*.*/        ZE( countT , vv ) ;
 /*.*/        if( idCaste == sc_cFROMaSCII || idCaste == sc_cFROMcONTROL ) vv = idAdam ;
 /*.*/        else if( idCaste == sc_cALPHABET1 )
 /*.*/        {
 /*.*/            if( idAdam <= 0xff ) vv = idAdam ;
 /*.*/            else if( ( idAdam & 0xf0000000 ) == sscDIGIT )
 /*.*/            {
 /*.*/                vv = idAdam & 0xffff ;
 /*.*/                if( vv < 0xa       ) vv += '0' ;
 /*.*/                else if( vv < 0x24 ) vv = 'a' + vv - 0xa ;
 /*.*/                else if( vv < 0x3e ) vv = 'A' + vv - 0x24 ;
 /*.*/                else                 vv = '?' + vv - 0x3e ;
 /*.*/            }
 /*.*/        }
 /*.*/        return (byteT)vv ;
 /*.*/    }
 inline operator count01T( voidT ) const { return (count01T)idAdam ; }
 inline strokeS& operator =( const countT cP ) { mapFromUnicodeF( cP ) ; return *this ; }
 strokeS& operator =( const strokeS& sP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34003.strokeS.operator_assign!||
 inline voidT operator ++( voidT ) { idAdam ++ ; }
 inline voidT operator ++( const sCountT notUsedP ) { if( notUsedP ) ; idAdam ++ ; }
 inline voidT operator --( voidT ) { idAdam -- ; }
 inline voidT operator --( const sCountT notUsedP ) { if( notUsedP ) ; idAdam -- ; }
 inline boolT operator ==( const strokeS& sP ) const
 /*.*/    {
 /*.*/        return idAdam == sP.idAdam && idCaste == sP.idCaste && cNote == sP.cNote ;
 /*.*/    }
 inline sCountT operator -( const strokeS& sP ) const { sCountT diff ; /*INTENTIONALLY NOT INITIALIZED*/ if( idCaste > sP.idCaste ) diff = 1 ; else if( idCaste < sP.idCaste ) diff = - 1 ; else if( idAdam > sP.idAdam ) diff = 1 ; else if( idAdam < sP.idAdam ) diff = - 1 ; else if( cNote > sP.cNote ) diff = 1 ; else if( cNote < sP.cNote ) diff = - 1 ; else diff = 0 ; return diff ; }
 inline boolT bLowerF( voidT ) const { return idCaste == sc_cFROMaSCII && idAdam >= 'a' && idAdam <= 'z' ; }
 inline boolT bOkForIdentifiersF( voidT ) const { return idCaste == sc_cFROMaSCII && ( ( idAdam >= 'a' && idAdam <= 'z' ) || ( idAdam >= 'A' && idAdam <= 'Z' ) || ( idAdam >= '0' && idAdam <= '9' ) || idAdam == '_' ) ; }
 inline boolT bUpperF( voidT ) const { return idCaste == sc_cFROMaSCII && idAdam >= 'A' && idAdam <= 'Z' ; }
 inline boolT bDigitF( const countT radixP = 0 ) const 
 /*.*/    {
 /*.*/        countT radix = radixP ? radixP : 0x10 ;
 /*.*/        ZE( boolT , bDigit ) ;
 /*.*/        ZE( boolT , bDoTest ) ;
 /*.*/    
 /*.*/        if( idCaste == sc_cFROMaSCII )
 /*.*/        {
 /*.*/            bDoTest = 1 ;
 /*.*/        }
 /*.*/        else if( idCaste == sc_cALPHABET1 )
 /*.*/        {
 /*.*/            if( ( idAdam & 0xf0000000 ) == sscDIGIT ) bDigit = 1 ;
 /*.*/            else                                      bDoTest = 1 ;
 /*.*/        }
 /*.*/    
 /*.*/        if( bDoTest )
 /*.*/        {
 /*.*/            if( radix <= 0xa  ) bDigit =   ( idAdam >= '0' && idAdam <= '0' - 1 + radix        )
 /*.*/            ;
 /*.*/            else if( radix <= 0x24 ) bDigit =   ( idAdam >= '0' && idAdam <= '9'                    )          ||
 /*.*/                                                ( idAdam >= 'a' && idAdam <= 'a' - 1 + radix - 0xa  )
 /*.*/            ;
 /*.*/            else if( radix <= 0x3e ) bDigit =   ( idAdam >= '0' && idAdam <= '9'                    )          ||
 /*.*/                                                ( idAdam >= 'a' && idAdam <= 'z'                    )          ||
 /*.*/                                                ( idAdam >= 'A' && idAdam <= 'A' - 1 + radix - 0x24 )
 /*.*/            ;
 /*.*/            else if( radix <= 0x40 ) bDigit =   ( idAdam >= '0' && idAdam <= '9'                    )          ||
 /*.*/                                                ( idAdam >= 'a' && idAdam <= 'z'                    )          ||
 /*.*/                                                ( idAdam >= 'A' && idAdam <= 'Z'                    )          ||
 /*.*/                                                ( idAdam >= '?' && idAdam <= '?' - 1 + radix - 0x3e )
 /*.*/            ;
 /*.*/        }
 /*.*/    
 /*.*/        return bDigit ;
 /*.*/    }
 voidT featuresF( tinS& tinP , soulC*& psFeaturesP ) const ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.3400b.strokeS.featuresF!||
 voidT registerF( soulC** ppSoulP = 0 ) const ; //THIS IS PUBLIC SO APPS CAN REGISTER COPIES THAT ARE MADE USING BYTE COPIES
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.3400a.strokeS.registerF!||
 voidT deregisterF( voidT ) const ;             //THIS IS PUBLIC SO APPS CAN DEREGISTER COPIES THAT ARE MADE USING BYTE COPIES
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34009.strokeS.deregisterF!||
 static voidT renderSizeIF( tinS& tinP , etherC& etherP , const strokeS* const psttP , measureT& mColsP , measureT& mPadsP , measureT& mFrames1P ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.3400c.strokeS.renderSizeIF!||

/**/

 private:

 /*.*/    inline voidT mapFromUnicodeF( const countT cP )
 /*.*/    {
 /*.*/        TINSL
 /*.*/        cNote   = 0 ;
 /*.*/        idAdam = tinP.strokeMode.highForIncomingUnText ? cP | tinP.strokeMode.highForIncomingUnText << 0x10 : cP ;
 /*.*/             if( idAdam < 0x20                  ) idCaste = sc_cFROMcONTROL  ;
 /*.*/        else if( tinP.strokeMode.idCasteDefault ) idCaste = tinP.strokeMode.idCasteDefault ;
 /*.*/        else if( idAdam < 0x80                  ) idCaste = sc_cFROMaSCII    ;
 /*.*/        else if( idAdam < 0x100                 ) idCaste = sc_cFROMgRAPHICS ;
 /*.*/        else                                      idCaste = sc_cFROMuNICODE  ;
 /*.*/    }

 FRIENDS_strokeS
}
;
/*H*/


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

