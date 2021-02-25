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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7003.datumc.datumc BEGIN
#define DDNAME       "3func.360e7003.datumc.datumc"
#define DDNUMB      (countT)0x360e7003
#define IDFILE      (countT)0x142a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/datumC::datumC( byteT& flagsiP , byteT& idTypeP , const byteT idTypeDerivedP , const listingC& listingP )/*1*/
{
    flagsiP |= fliLISTINGc_MIXINdATUM ;
    idTypeP = idTypeDerivedP ;

    switch( (byteT*)this - (byteT*)&listingP )
    {
        case sizeof( listingC ) : {                                       break ; }
        case sizeof( listC    ) : { aptData.setBitsF( fliDATUMc_LISTc ) ; break ; }
        default                 : { BLAMMO                              ; break ; }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7003.datumc.datumc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7004.datumc.indexf BEGIN
#define DDNAME       "3func.360e7004.datumc.indexf"
#define DDNUMB      (countT)0x360e7004
#define IDFILE      (countT)0x142b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT datumC::indexF( tinS& tinP )/*1*/
{
    __( aptData.getBitsF() & fliDATUMc_INDEXED ) ;

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    if( !( F(tinP.ta.retained.u.listWalk.walk.flagsWalkP) & flLISTwALK_DOnOTiNDEXdATA ) )
    {
        byteT* pbData = aptData ;

        const listingC& listing = aptData.getBitsF() & fliDATUMc_LISTc
            ? *(const listingC*)( (byteT*)this - sizeof( listC    ) )
            : *(const listingC*)( (byteT*)this - sizeof( listingC ) )
        ;

        ZE( countT , idKey ) ;
        ZE( const listC* , pRecord ) ;
        {
            const listingC* pc = &listing ;
            while( pc && !( pc->flagsF() & fliLISTINGc_FIELD ) ) pc = pc->pDadF() ;
            if( pc )
            {
                idKey = ((const listC*)pc)->nameF() ;
                while( pc && !( pc->flagsF() & fliLISTINGc_RECORD ) ) pc = pc->pDadF() ;
                if( pc ) pRecord = (const listC*)pc ;
            }
        }

        if( pRecord )
        {
            puseC puseIndex ; //WON'T BE USED
            handleC hIndex( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

            //U:: ifcIDtYPEmIXINdATUM_blob       : INDEX ONLY THE WOTH 01 BYTES
            //U:: ifcIDtYPEmIXINdATUM_countTstrz : INDEX ONLY THE WOTH 01 ELEMENTS

            switch( listing.idTypeDatumF() )
            {
                case ifcIDtYPEmIXINdATUM_countT     : {                                                                                     listC::indexIF( tinP , puseIndex , hIndex , idKey , ((countT*)pbData)[ 1 ]        , 0    , *pRecord , listing ) ; break ; }
                case ifcIDtYPEmIXINdATUM_blob       : { countT cNet = ((countT*)pbData)[ 1 ] > CnETmAX ? CnETmAX : ((countT*)pbData)[ 1 ] ; listC::indexIF( tinP , puseIndex , hIndex , idKey , pbData + 2 * sizeof( countT ) , cNet , *pRecord , listing ) ; break ; }
                case ifcIDtYPEmIXINdATUM_countTstrz : {                                                                                     listC::indexIF( tinP , puseIndex , hIndex , idKey , (countT*)pbData + 2           , 0    , *pRecord , listing ) ; break ; }
            }

            aptData.setBitsF( aptData.getBitsF() | fliDATUMc_INDEXED ) ;
        }
    }
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7004.datumc.indexf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7005.datumc.unindexf BEGIN
#define DDNAME       "3func.360e7005.datumc.unindexf"
#define DDNUMB      (countT)0x360e7005
#define IDFILE      (countT)0x142c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT datumC::unIndexF( tinS& tinP , const flagsT flagsP )/*1*/
{
    if( aptData.getBitsF() & fliDATUMc_INDEXED )
    {
        byteT* pbData = aptData ;

        const listingC& listing = aptData.getBitsF() & fliDATUMc_LISTc
            ? *(const listingC*)( (byteT*)this - sizeof( listC    ) )
            : *(const listingC*)( (byteT*)this - sizeof( listingC ) )
        ;

        ZE( countT , idKey ) ;
        ZE( const listC* , pRecord ) ;
        {
            const listingC* pc = &listing ;
            while( pc && !( pc->flagsF() & fliLISTINGc_FIELD ) ) pc = pc->pDadF() ;
            if( pc )
            {
                idKey = ((const listC*)pc)->nameF() ;
                while( pc && !( pc->flagsF() & fliLISTINGc_RECORD ) ) pc = pc->pDadF() ;
                if( pc ) pRecord = (const listC*)pc ;
            }
        }

        if( pRecord )
        {
            puseC puseIndex ; //WON'T BE USED
            handleC hIndex( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_LISTING ) ;

            switch( listing.idTypeDatumF() )
            {
                case ifcIDtYPEmIXINdATUM_countT     : {                                                                                     listC::unIndexIF( tinP , puseIndex , hIndex , idKey , ((countT*)pbData)[ 1 ]        , 0    , *pRecord , listing , flagsP ) ; break ; }
                case ifcIDtYPEmIXINdATUM_blob       : { countT cNet = ((countT*)pbData)[ 1 ] > CnETmAX ? CnETmAX : ((countT*)pbData)[ 1 ] ; listC::unIndexIF( tinP , puseIndex , hIndex , idKey , pbData + 2 * sizeof( countT ) , cNet , *pRecord , listing , flagsP ) ; break ; }
                case ifcIDtYPEmIXINdATUM_countTstrz : {                                                                                     listC::unIndexIF( tinP , puseIndex , hIndex , idKey , (countT*)pbData + 2           , 0    , *pRecord , listing , flagsP ) ; break ; }
            }

            aptData.setBitsF( aptData.getBitsF() & ~fliDATUMc_INDEXED ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360e7* : 3func.360e7005.datumc.unindexf END
