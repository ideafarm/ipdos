
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.0050004.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
parameters
 tinP
 psttNewBigP
  if 0 then will be allocated
  else must be large enough to hold the result
 psttOldBigP
  if 0 then psttNewBigP will be used as the source string
   if exact
    if psttNewSmallP is not longer than psttOldSmallP then the replace will be done in place on psttNewBigP
   if any
    if psttNewSmallP is length 1 then the replace will be done in place on psttNewBigP
 psttOldSmallP
 psttNewSmallP
 csttExtraP
 flagsP
*/
/**/
/*H*/
/*1*//*common code for strReplaceF, strReplaceAnyF*//*1*/
{
    SCOOP
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( psttNewSmallP ) ;
        FV( flSTRrEPLACE , flagsP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    boolT bReadOnly  = !!psttOldBigP ;
    const strokeS* psttIn  =   psttOldBigP ? psttOldBigP : psttNewBigP ;
          strokeS* psttOut =                               psttNewBigP ;
                                             psttOldBigP = psttNewBigP = 0 ;  // FOR CLARITY ; I WILL NOT REFER TO THESE PARAMETERS UNTIL I AM READY TO SET psttNewBigP

    __Z( psttIn ) ;

    //U:: TO FIND A BUG
    const strokeS* save_psttIn = psttIn ;
    countT         save_poop   = POOP ;

    if( psttOut && psttOut != psttIn )  // IF PREALLOCATED THEN MUST BE NULL LENGTH AND MUST HAVE NONZE CAPACITY (I WILL FAIL LATER IF CAPACITY IS INSUFFICIENT)
    {
        __( psttOut->idAdam ) ;
        __( !psttOut[ 2 ].idAdam ) ;
    }

    // ALL CASES:
    // 
    // !psttOut           : ALLOCATE FROM POOL
    // 
    //  psttOut != psttIn : PREALLOCATED
    // 
    //  psttOut == psttIn : DECIDE WHETHER TO REPLACE IN PLACE OR TO ALLOCATE FROM POOL
    // 

    const countT csttns = psttNewSmallP->idAdam ;
    ZE( boolT , bPool ) ;
    if( !POOP )
    {
        ZE( sCountT , scGrow ) ;
        if( !psttOut || psttOut == psttIn )
        {
            ZE( countT , cHits ) ;
            ZE( countT , csttHit ) ;
            {
                countT idf = 1 ;
                strokeS sttq ;
                if( F(flagsP) & flSTRrEPLACE_IGNOREqUOTES ) sttq.idCaste = sc_IGNOREqUOTES ;

                countT idHit = STRiDf_OR_sTRiDaNYf( tinP , 0 , flSTRmATCH_null , idf , sttq , psttOldSmallP , psttIn ) ;
                while( idHit )
                {
                    cHits ++ ;
                    csttHit += ( idf ? idf : psttIn->idAdam + 1 ) - idHit ;

                    idHit = idf
                        ? STRiDf_OR_sTRiDaNYf( tinP , 0 , flSTRmATCH_null , idf , sttq , psttOldSmallP , psttIn )
                        : 0
                    ;
                }
            }

            scGrow = cHits * csttns - csttHit ;
            if( scGrow < 0 ) scGrow = 0 ;

            if( scGrow && psttOut ) psttOut = 0 ;
        }

        if( !psttOut )
        {
            strMakeF( tinP , LF , psttOut , 0 , psttIn->idAdam + psttIn[ 2 ].idAdam + scGrow + csttExtraP ) ; // CALLER MUST TAG ___( psttOut ) ;
            bPool = 1 ;
        }
    
        if( psttOut == psttIn ) bReadOnly = 1 ;

        __Z( psttOut ) ;
    }

    ZE( countT , cReplacements ) ;
    if( !POOP )
    {
        const boolT bPatch = psttOut == psttIn ;
        const strokeS* pstti = bPatch ? psttIn  + CSpREFIX : 0 ;
              strokeS* pstto = bPatch ? psttOut + CSpREFIX : 0 ;

        ZE( sCountT , scDelta ) ;
        countT idf = 1 ;
        countT idfPrefix = idf ;
        {
            strokeS sttq ;
            if( F(flagsP) & flSTRrEPLACE_IGNOREqUOTES ) sttq.idCaste = sc_IGNOREqUOTES ;
            countT idHit = STRiDf_OR_sTRiDaNYf( tinP , 0 , flSTRmATCH_null , idf , sttq , psttOldSmallP , psttIn ) ;
            while( idHit )
            {
                // APPEND THE PREFIX
                if( idHit > idfPrefix )
                {
                    countT idfSuffix = idf ;
                    idf = idfPrefix ;
                    countT idl = idHit - 1 ;
    
                    if( bPatch )
                    {
                        countT csttCopy = idl - idf + 1 ;
                        if( idf == 1 )
                        {
                            pstto += csttCopy ; // A PREFIX AT THE BEGINNING DOES NOT NEED TO BE MOVED
                            pstti += csttCopy ;
                        }
                        else while( csttCopy -- ) *( pstto ++ ) = *( pstti ++ ) ;
                    }
                    else { strSubstringF( tinP , psttOut , idf , idl , psttIn ) ; ___( psttOut ) ; }
    
                    idf = idfSuffix ;
                }
    
                // APPEND THE REPLACEMENT
                cReplacements ++ ;
                if( bPatch )
                {
                    const strokeS* psttis = psttNewSmallP + CSpREFIX ;
                    countT csttCopy = psttNewSmallP->idAdam ;
                    while( csttCopy -- ) *( pstto ++ ) = *( psttis ++ ) ;

                    countT csttMatched = ( idf ? idf : psttIn->idAdam + 1 ) - idHit ;
                    pstti += csttMatched ; // CSTTmATCHED
                    scDelta += csttns - csttMatched ;
                }
                else { strFuseF( tinP , psttOut , psttNewSmallP ) ; ___( psttOut ) ; }
    
                // MOVE THE HIT CURSOR TO THE NEXT HIT
                idfPrefix = idf ;
                if( !idf ) idHit = 0 ;
                else       idHit = STRiDf_OR_sTRiDaNYf( tinP , 0 , flSTRmATCH_null , idf , sttq , psttOldSmallP , psttIn ) ;
            }
        }

        idf = idfPrefix ;
        if( idf && psttIn->idAdam >= idf )  // APPEND THE SUFFIX (WHAT REMAINS AFTER THE LATH HIT)
        {
            if( bPatch )
            {
                countT csttCopy = psttIn->idAdam - idf + 1 ;
                while( csttCopy -- ) *( pstto ++ ) = *( pstti ++ ) ;
            }
            else { strSubstringF( tinP , psttOut , idf , countTC() , psttIn ) ; ___( psttOut ) ; }
        }

        psttOut->idAdam += scDelta ;

        if( !bReadOnly ) delF( tinP , *(strokeS**)&psttIn ) ;

        if( !POOP      ) psttNewBigP = psttOut ; // psttOut COULD BE ELIMINATED ; IT IS USED ONLY TO MAKE THIS CODE MORE READABLE
        else if( bPool ) delF( tinP , psttOut ) ;
    }

    return cReplacements ;
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

