
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


;
}
    plateC& operator +=( plateC& plateP ) ;
    operator const strokeS*( voidT ) ;
    datumSessionC( tinS& tinP , etherC& etherP , soulC& soulP ) ;
    datumSessionC( tinS& tinP ) ;
    PLATEcsTANDARDdECLARATIONS( datumSessionC )
    static voidT setModeF( const boolT bReverseP = 0 ) ;

    public :

    countT idSlideLath ;
    countT idAdLath ;
    countT cTouch ;
    strokeS* psttUser ;
    countT cSessions ;
    strokeS* psttRpt ;
    sCountT timeLived2 ;
    countT  timeLived1 ;
    sCountT timeLathTouch2 ;
    countT timeLathTouch1 ;
    strokeS* psttPeer ;
    nicNameC nnPeer ;
    sCountT timeCt2 ;
    countT timeCt1 ;
    countT idSession ;
    countT idAdam ;
    countT idFormat ;
    countT finger ;

    etherC& ether ;

    static boolT bReverse ;
{
class datumSessionC : public plateC

;
}
    inline const strokeS* psttOldCommentF( voidT ) const { return psttOldComment ; }
    inline const countT idAdamF(        voidT ) const { return idAdam ; }
    inline const countT idHomeF(        voidT ) const { return idHome ; }
    inline const strokeS* psttUrlF(     voidT ) const { return psttUrl ; }
    plateC& operator +=( plateC& plateP ) ;
    operator const strokeS*( voidT ) ;
    datumPeanutC( tinS& tinP , etherC& etherP , soulC& soulP ) ;
    datumPeanutC( tinS& tinP ) ;
    PLATEcsTANDARDdECLARATIONS( datumPeanutC )
    static voidT setModeF( const boolT bUrlOnlyP = 0 ) ;

    public :

    countT idAdam ;
    countT idHome ;
    strokeS* psttOldComment ;
    strokeS* psttUrl ;
    strokeS* psttRpt ;

    etherC& ether ;

    static boolT bUrlOnly ;
{
class datumPeanutC : public plateC

;
}
    inline const strokeS* psttZipF(      voidT ) const { return psttZip      ; }
    inline const strokeS* psttNoteF(     voidT ) const { return psttNote     ; }
    inline const strokeS* psttLanguageF( voidT ) const { return psttLanguage ; }
    inline const strokeS* psttEmailF(    voidT ) const { return psttEmail    ; }
    inline const strokeS* psttOldCountryF(  voidT ) const { return psttOldCountry  ; }
    plateC& operator +=( plateC& plateP ) ;
    operator const strokeS*( voidT ) ;
    datumEmailZipC( tinS& tinP , etherC& etherP , soulC& soulP ) ;
    datumEmailZipC( tinS& tinP ) ;
    PLATEcsTANDARDdECLARATIONS( datumEmailZipC )
    static voidT setModeF( const countT idSortModeP = idMODEeMAILzIPsORT_eMAILzIPnOTE ) ;

    public :

    strokeS* psttZip ;
    strokeS* psttNote ;
    strokeS* psttLanguage ;
    strokeS* psttEmail ;
    strokeS* psttOldCountry ;
    strokeS* psttRpt ;

    etherC& ether ;

    static boolT idSortMode ;
{
class datumEmailZipC : public plateC

    ;
            : 0                                                                             \
            ? - 1                                                                           \
        : datum.psttP                                                                       \
            : 1                                                                             \
            ? ether.strCompareF( tinP , psttP , datum.psttP )                               \
        ? datum.psttP                                                                       \
    scSgn = psttP                                                                           \
                                                                                            \
#define COMPARE(psttP)                                                                      \

    if( datum.psttP ) { ether.strMakeF( tinP , psttP , datum.psttP ) ; ___( psttP ) ; }
    ether.delF( tinP , psttP ) ;                                                            \
                                                                                            \
#define SETsTRING(psttP)                                                                    \

#define idMODEeMAILzIPsORT_EAIL                         4
#define idMODEeMAILzIPsORT_ZIP                          3
#define idMODEeMAILzIPsORT_ZIPeMAILnOTE                 2
#define idMODEeMAILzIPsORT_eMAILzIPnOTE                 1

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

