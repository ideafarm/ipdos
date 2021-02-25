
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*//*strConcatenateF_woSnip*//*1*/

    // psttc1 IS NAMED THIS SO I CAN OPERATE ON A STRING OF FORsTRINGSiN1

    if( !pczIdCasteIncludeP && !pczIdCasteExcludeP )
    {
        if( bSeparate ) { strFuseSeparateF( tinP , psttP , psttc1 ) ; ___( psttP ) ; }
        else            { strFuseF(         tinP , psttP , psttc1 ) ; ___( psttP ) ; }
    }
    else if( F(flagsP) & flSTRcONCATENATE_HOMOGENEOUSiNPUT )
    {
        if( psttc1->idAdam )
        {
            SETwANTcASTE( psttc1[ CSpREFIX ].idCaste )
            if( _bWantCaste )
            {
                if(  bNullLag ) bNullLag = 0 ;
                if( bSeparate ) { strFuseSeparateF( tinP , psttP , psttc1 ) ; ___( psttP ) ; }
                else            { strFuseF(         tinP , psttP , psttc1 ) ; ___( psttP ) ; }
            }
            else if( F(flagsP) & flSTRcONCATENATE_MARKeXCLUDES )
            {
                if( !bNullLag )
                {
                    bNullLag = 1 ;
                    if( bSeparate ) { strFuseSeparateF( tinP , psttP , tNull ) ; ___( psttP ) ; }
                    else            { strFuseF(         tinP , psttP , tNull ) ; ___( psttP ) ; }
                    cMarks ++ ;
                }
            }
        }
    }
    else if( psttc1->idAdam )
    {
        for( countT off = 0 ; off < psttc1->idAdam ; off ++ )
        {
            TN( tx , "" ) ; tx = T("") + psttc1[ CSpREFIX + off ] ;
            SETwANTcASTE( ((strokeS*)tx)->idCaste )
            if( _bWantCaste )
            {
                if( bNullLag ) bNullLag = 0 ;
                if( bSeparate ) { strFuseSeparateF( tinP , psttP , tx ) ; ___( psttP ) ; }
                else            { strFuseF(         tinP , psttP , tx ) ; ___( psttP ) ; }
            }
            else if( F(flagsP) & flSTRcONCATENATE_MARKeXCLUDES )
            {
                if( !bNullLag )
                {
                    bNullLag = 1 ;
                    if( bSeparate ) { strFuseSeparateF( tinP , psttP , tNull ) ; ___( psttP ) ; }
                    else            { strFuseF(         tinP , psttP , tNull ) ; ___( psttP ) ; }
                    cMarks ++ ;
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

