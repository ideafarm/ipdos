
voidT strFromUrlF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFromUrlF( tinP , psttP , psttOldP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strFromJsonF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strFromJsonF( tinP , psttP , psttFromP ) ;
    etherP.delF( tinP , psttFromP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strFromIdJotF_4P33_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idJotP ) ;
    if( !POOP ) { slP >> idJotP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cbJotStringDecodePrefixP ) ;
    if( !POOP ) { slP >> cbJotStringDecodePrefixP ; idArgNext ++ ; }
    if( !POOP ) etherP.strFromIdJotF( tinP , psttP , idJotP , cbJotStringDecodePrefixP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strFuseSeparateF_4P4P33hPgrabCP3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttInP ) ;
    if( !POOP ) { slP >> psttInP ; ___( psttInP ) ; idArgNext ++ ; }

    ZE( countT , csttPrefixNullsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttPrefixNullsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttPrefixNullsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttSuffixNullsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttSuffixNullsP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttSuffixNullsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( soulC* , pSoulP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8019 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pSoulP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8019 , etherC )
                if( !POOP ) { slP >> pSoulP ; idArgNext ++ ; }
            }
        }
    }

    ZE( grabC* , pGrabP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801a , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pGrabP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801a , etherC )
                if( !POOP ) { slP >> pGrabP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strFuseSeparateF( tinP , psttOutP , psttInP , csttPrefixNullsP , csttSuffixNullsP , pSoulP , pGrabP , csttExtraP ) ;
    DEL( pGrabP ) ;
    DEL( pSoulP ) ;
    etherP.delF( tinP , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tinP , psttOutP ) ;
}

voidT strKTTrimF_4P4P33_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldBigP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldBigP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldBigP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cKeepP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cKeepP = 0x10 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cKeepP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strKTTrimF( tinP , psttNewBigP , psttOldBigP , cKeepP , csttExtraP ) ;
    etherP.delF( tinP , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tinP , psttNewBigP ) ;

    slP << noName ;
}

voidT strIdLathExpressionF_4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idsWothP ) ;
    if( !POOP ) { slP >> idsWothP ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strIdLathExpressionF( tinP , psttSmallP , idsWothP ) ;
    etherP.delF( tinP , psttSmallP ) ;

    slP << noName ;
}

voidT strIndentF_4P4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldP ) ;
    if( !POOP ) { slP >> psttOldP ; ___( psttOldP ) ; idArgNext ++ ; }

    ZE( countT , csttP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strIndentF( tinP , psttP , psttOldP , csttP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strInsertF_4P34P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idFirstP ) ;
    if( !POOP ) { slP >> idFirstP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strInsertF( tinP , psttP , idFirstP , psttSmallP , csttExtraP ) ;
    etherP.delF( tinP , psttSmallP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strInsertF_4P4P4P73_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttMarkP ) ;
    if( !POOP ) { slP >> psttMarkP ; ___( psttMarkP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttWhatP ) ;
    if( !POOP ) { slP >> psttWhatP ; ___( psttWhatP ) ; idArgNext ++ ; }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRiNSERT_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strInsertF( tinP , psttP , psttMarkP , psttWhatP , flagsP , csttExtraP ) ;
    etherP.delF( tinP , psttWhatP ) ;
    etherP.delF( tinP , psttMarkP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strIsDigitsF_4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( countT , radixP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                radixP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> radixP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strIsDigitsF( tinP , psttP , radixP ) ;
    etherP.delF( tinP , psttP ) ;

    slP << noName ;
}

voidT strBodyLengthF_2P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strBodyLengthF( tinP , postP ) ;
    etherP.delF( tinP , postP ) ;

    slP << noName ;
}

voidT strCLinesF_4P4P6_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttEndP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttEndP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttEndP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , bAnyP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                bAnyP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> bAnyP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strCLinesF( tinP , psttP , psttEndP , bAnyP ) ;
    etherP.delF( tinP , psttEndP ) ;
    etherP.delF( tinP , psttP ) ;

    slP << noName ;
}

voidT strMakeFromOsTextF_4P2P33_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    ZE( countT , costP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                costP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strMakeFromOsTextF( tinP , psttP , postP , costP , csttExtraP ) ;
    etherP.delF( tinP , postP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strMakeF_33pbRefCP4P37_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd801c , etherC )
    SOIXLoLDtESTtYPE( 0xdddd801c , etherC )
    ZE( pbRefC* , prP ) ;
    if( !POOP ) { slP >> prP ; ___( prP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( countT , costExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                costExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRmAKE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strMakeF( tinP , idLineP , idiFileP , prP , psttP , costExtraP , flagsP ) ;
    etherP.delF( tinP , psttP ) ;

    if( !POOP ) slP << prP ;
    DEL( prP ) ;

    slP << noName ;
}

voidT strMakeF_332P4P373_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0x0 , etherC )
    SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( osTextT* , postP ) ;
    if( !POOP ) { slP >> postP ; ___( postP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( countT , costExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                costExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> costExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRmAKE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cbPrefixExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cbPrefixExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbPrefixExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strMakeF( tinP , idLineP , idiFileP , postP , psttP , costExtraP , flagsP , cbPrefixExtraP ) ;
    etherP.delF( tinP , psttP ) ;

    if( !POOP ) slP << postP ;
    etherP.delF( tinP , postP ) ;

    slP << noName ;
}

voidT strMakeF_334P4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLineP ) ;
    if( !POOP ) { slP >> idLineP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idiFileP ) ;
    if( !POOP ) { slP >> idiFileP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttInP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttInP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttInP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strMakeF( tinP , idLineP , idiFileP , psttOutP , psttInP , csttExtraP ) ;
    etherP.delF( tinP , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tinP , psttOutP ) ;
}

voidT strRemoveBlankLinesF_4P4P4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttItemDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttItemDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttItemDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttDoomedListP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDoomedListP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDoomedListP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strRemoveBlankLinesF( tinP , psttP , psttOldP , psttItemDelimiterP , psttDoomedListP ) ;
    etherP.delF( tinP , psttDoomedListP ) ;
    etherP.delF( tinP , psttItemDelimiterP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strReplaceF_4P4P4P4P37_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldSmallP ) ;
    if( !POOP ) { slP >> psttOldSmallP ; ___( psttOldSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewSmallP ) ;
    if( !POOP ) { slP >> psttNewSmallP ; ___( psttNewSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceF( tinP , psttNewBigP , psttOldBigP , psttOldSmallP , psttNewSmallP , csttExtraP , flagsP ) ;
    etherP.delF( tinP , psttNewSmallP ) ;
    etherP.delF( tinP , psttOldSmallP ) ;
    etherP.delF( tinP , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tinP , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceF_4P4P337_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idTypeP ) ;
    if( !POOP ) { slP >> idTypeP ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceF( tinP , psttNewBigP , psttOldBigP , idTypeP , csttExtraP , flagsP ) ;
    etherP.delF( tinP , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tinP , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceAnyF_4P4P4P4P37_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewBigP ) ;
    if( !POOP ) { slP >> psttNewBigP ; ___( psttNewBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldBigP ) ;
    if( !POOP ) { slP >> psttOldBigP ; ___( psttOldBigP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOldSmallP ) ;
    if( !POOP ) { slP >> psttOldSmallP ; ___( psttOldSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNewSmallP ) ;
    if( !POOP ) { slP >> psttNewSmallP ; ___( psttNewSmallP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRrEPLACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strReplaceAnyF( tinP , psttNewBigP , psttOldBigP , psttOldSmallP , psttNewSmallP , csttExtraP , flagsP ) ;
    etherP.delF( tinP , psttNewSmallP ) ;
    etherP.delF( tinP , psttOldSmallP ) ;
    etherP.delF( tinP , psttOldBigP ) ;

    if( !POOP ) slP << psttNewBigP ;
    etherP.delF( tinP , psttNewBigP ) ;

    slP << noName ;
}

voidT strReplaceAutomaticallyF_4P4P33_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idClassP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idClassP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idClassP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strReplaceAutomaticallyF( tinP , psttP , psttOldP , idClassP , csttExtraP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strReverseF_4P4P4PhPgrabCP3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( strokeS* , psttDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( soulC* , pSoulP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8019 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pSoulP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8019 , etherC )
                if( !POOP ) { slP >> pSoulP ; idArgNext ++ ; }
            }
        }
    }

    ZE( grabC* , pGrabP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd801a , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pGrabP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd801a , etherC )
                if( !POOP ) { slP >> pGrabP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strReverseF( tinP , psttP , psttOldP , psttDelimiterP , pSoulP , pGrabP , csttExtraP ) ;
    DEL( pGrabP ) ;
    DEL( pSoulP ) ;
    etherP.delF( tinP , psttDelimiterP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strRulerF_4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , csP ) ;
    if( !POOP ) { slP >> csP ; idArgNext ++ ; }
    if( !POOP ) etherP.strRulerF( tinP , psttP , csP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strSubstringF_4P334P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idFirstP ) ;
    if( !POOP ) { slP >> idFirstP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idLastP ) ;
    if( !POOP ) { slP >> idLastP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strSubstringF( tinP , psttP , idFirstP , idLastP , psttBigP , csttExtraP ) ;
    etherP.delF( tinP , psttBigP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strGetMimeHeaderF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttToP ) ;
    if( !POOP ) { slP >> psttToP ; ___( psttToP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strGetMimeHeaderF( tinP , psttToP , psttFromP ) ;
    etherP.delF( tinP , psttFromP ) ;

    if( !POOP ) slP << psttToP ;
    etherP.delF( tinP , psttToP ) ;
}

voidT strGetMimeBodyF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttToP ) ;
    if( !POOP ) { slP >> psttToP ; ___( psttToP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttFromP ) ;
    if( !POOP ) { slP >> psttFromP ; ___( psttFromP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strGetMimeBodyF( tinP , psttToP , psttFromP ) ;
    etherP.delF( tinP , psttFromP ) ;

    if( !POOP ) slP << psttToP ;
    etherP.delF( tinP , psttToP ) ;
}

voidT strSubstringMimeHeaderF_4P4P4P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttAllP ) ;
    if( !POOP ) { slP >> psttAllP ; ___( psttAllP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttKeyP ) ;
    if( !POOP ) { slP >> psttKeyP ; ___( psttKeyP ) ; idArgNext ++ ; }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strSubstringMimeHeaderF( tinP , psttP , psttAllP , psttKeyP , csttExtraP ) ;
    etherP.delF( tinP , psttKeyP ) ;
    etherP.delF( tinP , psttAllP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strToHtmlF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToHtmlF( tinP , psttP , psttOldP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strToUrlF_4P4P7_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRtOuRL_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToUrlF( tinP , psttP , psttOldP , flagsP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strToFileNameF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttOldP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttOldP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttOldP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.strToFileNameF( tinP , psttP , psttOldP ) ;
    etherP.delF( tinP , psttOldP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strUniqueF_4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUniqueF( tinP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strUrlDecodeF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttOutP ) ;
    if( !POOP ) { slP >> psttOutP ; ___( psttOutP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttInP ) ;
    if( !POOP ) { slP >> psttInP ; ___( psttInP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlDecodeF( tinP , psttOutP , psttInP ) ;
    etherP.delF( tinP , psttInP ) ;

    if( !POOP ) slP << psttOutP ;
    etherP.delF( tinP , psttOutP ) ;
}

voidT strUrlDecodeF_4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlDecodeF( tinP , psttP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;
}

voidT strUrlNameF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttNameP ) ;
    if( !POOP ) { slP >> psttNameP ; ___( psttNameP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttUrlP ) ;
    if( !POOP ) { slP >> psttUrlP ; ___( psttUrlP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlNameF( tinP , psttNameP , psttUrlP ) ;
    etherP.delF( tinP , psttUrlP ) ;

    if( !POOP ) slP << psttNameP ;
    etherP.delF( tinP , psttNameP ) ;
}

voidT strUrlSchemeF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSchemeP ) ;
    if( !POOP ) { slP >> psttSchemeP ; ___( psttSchemeP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttUrlP ) ;
    if( !POOP ) { slP >> psttUrlP ; ___( psttUrlP ) ; idArgNext ++ ; }
    if( !POOP ) etherP.strUrlSchemeF( tinP , psttSchemeP , psttUrlP ) ;
    etherP.delF( tinP , psttUrlP ) ;

    if( !POOP ) slP << psttSchemeP ;
    etherP.delF( tinP , psttSchemeP ) ;
}

voidT strEncode_01F_1P1P3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pboP ) ;
    if( !POOP ) { slP >> pboP ; ___( pboP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbiP ) ;
    if( !POOP ) { slP >> pbiP ; ___( pbiP ) ; idArgNext ++ ; }

    ZE( countT , cbiP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cbiP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbiP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strEncode_01F( tinP , pboP , pbiP , cbiP ) ;
    etherP.delF( tinP , pbiP ) ;

    if( !POOP ) slP << pboP ;
    etherP.delF( tinP , pboP ) ;

    slP << noName ;
}

voidT strEncodeF_1P4P1P31P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttP ; idArgNext ++ ; }
            }
        }
    }

    ZE( byteT* , pbeP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pbeP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
                if( !POOP ) { slP >> pbeP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , cbHeadP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                cbHeadP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> cbHeadP ; idArgNext ++ ; }
            }
        }
    }

    ZE( byteT* , pbHeadP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                pbHeadP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
                if( !POOP ) { slP >> pbHeadP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strEncodeF( tinP , pbP , psttP , pbeP , cbHeadP , pbHeadP ) ;
    etherP.delF( tinP , pbHeadP ) ;
    etherP.delF( tinP , pbeP ) ;
    etherP.delF( tinP , psttP ) ;

    if( !POOP ) slP << pbP ;
    etherP.delF( tinP , pbP ) ;

    slP << noName ;
}

voidT strDecodeF_4P1P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8015 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8015 , etherC )
    ZE( byteT* , pbP ) ;
    if( !POOP ) { slP >> pbP ; ___( pbP ) ; idArgNext ++ ; }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strDecodeF( tinP , psttP , pbP ) ;
    etherP.delF( tinP , pbP ) ;

    if( !POOP ) slP << psttP ;
    etherP.delF( tinP , psttP ) ;

    slP << noName ;
}

voidT strBisectF_4P4P4P4P373_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPart1P ) ;
    if( !POOP ) { slP >> psttPart1P ; ___( psttPart1P ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPart2P ) ;
    if( !POOP ) { slP >> psttPart2P ; ___( psttPart2P ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

    ZE( strokeS* , psttDelimiterP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttDelimiterP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttDelimiterP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idP = 1 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flSTRbISECT_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , csttExtraP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                csttExtraP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> csttExtraP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , noName ) ;
    if( !POOP ) noName = etherP.strBisectF( tinP , psttPart1P , psttPart2P , psttBigP , psttDelimiterP , idP , flagsP , csttExtraP ) ;
    etherP.delF( tinP , psttDelimiterP ) ;
    etherP.delF( tinP , psttBigP ) ;

    if( !POOP ) slP << psttPart2P ;
    etherP.delF( tinP , psttPart2P ) ;

    if( !POOP ) slP << psttPart1P ;
    etherP.delF( tinP , psttPart1P ) ;

    slP << noName ;
}

voidT strFileMatchF_4P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttLikeP ) ;
    if( !POOP ) { slP >> psttLikeP ; ___( psttLikeP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.strFileMatchF( tinP , psttLikeP , psttP ) ;
    etherP.delF( tinP , psttP ) ;
    etherP.delF( tinP , psttLikeP ) ;

    slP << noName ;
}

voidT sssTestF_64P4P334P4P_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0x0 , etherC )
   SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( boolT , bDoNotAdvanceBigP ) ;
    if( !POOP ) { slP >> bDoNotAdvanceBigP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttSmallP ) ;
    if( !POOP ) { slP >> psttSmallP ; ___( psttSmallP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBigP ) ;
    if( !POOP ) { slP >> psttBigP ; ___( psttBigP ) ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idsDoP ) ;
    if( !POOP ) { slP >> idsDoP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idbDoP ) ;
    if( !POOP ) { slP >> idbDoP ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttBlackP ) ;
    if( !POOP ) { slP >> psttBlackP ; ___( psttBlackP ) ; idArgNext ++ ; }

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttPunctuationP ) ;
    if( !POOP ) { slP >> psttPunctuationP ; ___( psttPunctuationP ) ; idArgNext ++ ; }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.sssTestF( tinP , bDoNotAdvanceBigP , psttSmallP , psttBigP , idsDoP , idbDoP , psttBlackP , psttPunctuationP ) ;
    etherP.delF( tinP , psttPunctuationP ) ;
    etherP.delF( tinP , psttBlackP ) ;
    etherP.delF( tinP , psttBigP ) ;
    etherP.delF( tinP , psttSmallP ) ;

    slP << noName ;
}

voidT winAppendTitleF_4Pb_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    handleC hWindowP( /*FOOEY*/tinP , TAG( TAGiDnULL ) ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                hWindowP = handleC( *pTinF() , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
                if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.winAppendTitleF( tinP , psttP , hWindowP ) ;
    etherP.delF( tinP , psttP ) ;
}

voidT winPostMessageAfterNapF_3b333_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , time1P ) ;
    if( !POOP ) { slP >> time1P ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
    handleC hWindowP( /*GOOEY*/tinP , TAG( TAGiDnULL ) ) ;
    if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , idCmdP ) ;
    if( !POOP ) { slP >> idCmdP ; idArgNext ++ ; }

    ZE( countT , arg1P ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                arg1P = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> arg1P ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , arg2P ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                arg2P = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> arg2P ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.winPostMessageAfterNapF( tinP , time1P , hWindowP , idCmdP , arg1P , arg2P ) ;
}

voidT winSetTitleF_4Pb_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
    SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
    ZE( strokeS* , psttP ) ;
    if( !POOP ) { slP >> psttP ; ___( psttP ) ; idArgNext ++ ; }

    handleC hWindowP( /*FOOEY*/tinP , TAG( TAGiDnULL ) ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
           pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                hWindowP = handleC( *pTinF() , TAGnOtIN( TAGiDnULL ) , ifcIDtYPEhANDLE_WINDOW ) ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTeMPTY( 0xdddd8014 , etherC )
                SOIXLoLDtESTtYPE( 0xdddd8014 , etherC )
                if( !POOP ) { hWindowP << slP ; idArgNext ++ ; }
            }
        }
    }

    ZE( boolT , noName ) ;
    if( !POOP ) noName = etherP.winSetTitleF( tinP , psttP , hWindowP ) ;
    etherP.delF( tinP , psttP ) ;

    slP << noName ;
}

voidT cioSetupF__GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.cioSetupF( tinP ) ;
    if( tinP.fingerprint && _psttNameP && slP ) ;
}

voidT cioSetQuitF_6_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0x0 , etherC )
   SOIXLoLDtESTtYPE( 0x0 , etherC )
    ZE( boolT , bQuitP ) ;
    if( !POOP ) { slP >> bQuitP ; idArgNext ++ ; }
    if( !POOP ) etherP.cioSetQuitF( tinP , bQuitP ) ;
}

voidT cioSetArgF_3_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

   SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
   SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
    ZE( countT , cArgP ) ;
    if( !POOP ) { slP >> cArgP ; idArgNext ++ ; }
    if( !POOP ) etherP.cioSetArgF( tinP , cArgP ) ;
}

voidT traceF_4P73_GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;

    ZE( strokeS* , psttP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8017 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                psttP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8017 , etherC )
                if( !POOP ) { slP >> psttP ; idArgNext ++ ; }
            }
        }
    }

    ZE( flagsT , flagsP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0x0 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                flagsP = flTRACE_null ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0x0 , etherC )
                if( !POOP ) { slP >> flagsP ; idArgNext ++ ; }
            }
        }
    }

    ZE( countT , idDivertP ) ;
    {
        strokeS sttColon( ':' ) ;
        SOIXLoLDtESTeMPTY( 0xdddd8003 , etherC )
        if( !POOP )
        {
           idTypeNext = flagsNext = cbFieldNext = 0 ;
            pbFieldNext = slP.pbFieldF( tinP , idTypeNext , flagsNext , cbFieldNext , 1 ) ;
            strokeS* psttNext = *pbFieldNext & flSOULiTEM_NULLpTR ? 0 : (strokeS*)pbFieldNext ;
            if( idTypeNext == ifcIDtYPEsOULiTEM_strokeSptr && psttNext && psttNext->idAdam == 1 && psttNext[ CSpREFIX ] == sttColon )
            {
                idDivertP = 0 ;
                psttNext = 0 ;
                if( !POOP ) { slP >> psttNext ; ___( psttNext ) ; idArgNext ++ ; }
                etherP.delF( tinP , psttNext ) ;
            }
            else
            {
                SOIXLoLDtESTtYPE( 0xdddd8003 , etherC )
                if( !POOP ) { slP >> idDivertP ; idArgNext ++ ; }
            }
        }
    }
    if( !POOP ) etherP.traceF( tinP , psttP , flagsP , idDivertP ) ;
    etherP.delF( tinP , psttP ) ;
}

voidT tracePoolTalliesF__GF( tinS& tinP , etherC& etherP , soulC& slP , const strokeS* const _psttNameP )
{
    countT idArgNext = 1 ;
    ZE( byteT* , pbFieldNext ) ;
    ZE( countT , idTypeNext ) ;
    ZE( flagsT , flagsNext ) ;
    ZE( countT , cbFieldNext ) ;
    if( !POOP ) etherP.tracePoolTalliesF( tinP ) ;
    if( tinP.fingerprint && _psttNameP && slP ) ;
}
