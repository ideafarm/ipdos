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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b001.selectc.dt_selectc BEGIN
#define DDNAME       "3func.3610b001.selectc.dt_selectc"
#define DDNUMB      (countT)0x3610b001
#define IDFILE      (countT)0x1498


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::~selectC( voidT )/*1*/
{
    TINSL

    countT pczName[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , idName , 0 } ;

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    listC::deleteIF( tinP , pczName ) ;
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b001.selectc.dt_selectc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b002.selectc.selectc BEGIN
#define DDNAME       "3func.3610b002.selectc.selectc"
#define DDNUMB      (countT)0x3610b002
#define IDFILE      (countT)0x1499


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::selectC( voidT ) :/*1*/
idName(  (thirdC::third_tinS_ref_IF().pPoolUse)->dispenseUniqueListNameF() ) ,
grabitx(  thirdC::third_tinS_ref_IF() , TAGnOtIN( TAGiDnULL ) )
{
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b002.selectc.selectc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b003.selectc.selectc BEGIN
#define DDNAME       "3func.3610b003.selectc.selectc"
#define DDNUMB      (countT)0x3610b003
#define IDFILE      (countT)0x149a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::selectC( tinS& tinP , const countT cFieldNameP , const countT valueP , const countT cNetP ) :/*1*/
idName( PUSE.dispenseUniqueListNameF() ) ,
grabitx( tinP , TAG( TAGiDnULL ) )
{
    if( cFieldNameP )
    {
        GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = idName ;
        listC::walkIndexIF( tinP , cFieldNameP , valueP , cNetP ) ;
        POPtINaRGS
        UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b003.selectc.selectc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b004.selectc.selectc BEGIN
#define DDNAME       "3func.3610b004.selectc.selectc"
#define DDNUMB      (countT)0x3610b004
#define IDFILE      (countT)0x149b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::selectC( const selectC& selectP ) :/*1*/
idName(  (thirdC::third_tinS_ref_IF().pPoolUse)->dispenseUniqueListNameF() ) ,
grabitx(  thirdC::third_tinS_ref_IF() , TAGnOtIN( TAGiDnULL ) )
{
    TINSL

    operator <<( selectP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b004.selectc.selectc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b005.selectc.operator_or BEGIN
#define DDNAME       "3func.3610b005.selectc.operator_or"
#define DDNUMB      (countT)0x3610b005
#define IDFILE      (countT)0x149c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC selectC::operator |( const selectC& selectP )/*1*/
{
    TINSL

    selectC selRC( tinP ) ;

    IFbEcAREFUL
    {
        if( POOP ) return selRC ;
        __( tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
        if( POOP ) return selRC ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    countT pczMe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED ,         idName , LISTnAME_RECORD , 0 } ;
    countT pczHe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , selectP.idName , LISTnAME_RECORD , 0 } ;

    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;

        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = selRC.idName ;
            listC::walkIF( tinP , pczMe ) ;
            POPtINaRGS
        }
    
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = selRC.idName ;
            listC::walkIF( tinP , pczHe ) ;
            POPtINaRGS
        }
    }
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return selRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b005.selectc.operator_or END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b006.selectc.operator_and BEGIN
#define DDNAME       "3func.3610b006.selectc.operator_and"
#define DDNUMB      (countT)0x3610b006
#define IDFILE      (countT)0x149d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC selectC::operator &( const selectC& selectP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
        __( tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
        if( POOP ) return *this ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    countT pczMe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , idName , LISTnAME_RECORD , 0 } ;

    selectC selRC( tinP ) ;

    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectAndCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = selRC.idName ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 1 ]      = (countT)&selectP ;
            listC::walkIF( tinP , pczMe ) ;
            POPtINaRGS
        }
    }
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return selRC ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b006.selectc.operator_and END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b007.selectc.operator_assign BEGIN
#define DDNAME       "3func.3610b007.selectc.operator_assign"
#define DDNUMB      (countT)0x3610b007
#define IDFILE      (countT)0x149e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC& selectC::operator =( const selectC& selectP )/*1*/
{
    TINSL

    countT pczMe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , idName , LISTnAME_RECORD , 0 } ;

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    listC::deleteIF( tinP , pczMe ) ;
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    operator <<( selectP ) ;

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b007.selectc.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b008.selectc.walkf BEGIN
#define DDNAME       "3func.3610b008.selectc.walkf"
#define DDNUMB      (countT)0x3610b008
#define IDFILE      (countT)0x149f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT selectC::walkF( tinS& tinP , selectWalkCBFT pSelectWalkCBFP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return ;
        __Z( pSelectWalkCBFP ) ;
        __( tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;                                                                                                                 \
        if( POOP ) return ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        countT pczMe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , idName , LISTnAME_RECORD , 0 } ;
    
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectWalkCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = (countT)pSelectWalkCBFP ;
            listC::walkIF( tinP , pczMe ) ;
            POPtINaRGS
        }
    }
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b008.selectc.walkf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b009.selectc.islistedf BEGIN
#define DDNAME       "3func.3610b009.selectc.islistedf"
#define DDNUMB      (countT)0x3610b009
#define IDFILE      (countT)0x14a0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/boolT selectC::isListedF( tinS& tinP , const listingC& listingP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
        if( POOP ) return 0 ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    ZE( boolT , bListed ) ;
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        countT pczMe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , idName , LISTnAME_RECORD , 0 } ;
    
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectIsListedCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = (countT)&bListed ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 1 ]      = (countT)&listingP ;
            listC::walkIF( tinP , pczMe ) ;
            POPtINaRGS
        }
    }
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return bListed ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b009.selectc.islistedf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00a.selectc.operator_shiftleft BEGIN
#define DDNAME       "3func.3610b00a.selectc.operator_shiftleft"
#define DDNUMB      (countT)0x3610b00a
#define IDFILE      (countT)0x14a1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC& selectC::operator <<( const selectC& selectP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( POOP ) return *this ;
        __( tinP.ta.retained.u.listWalk.walk.pPoolRecord ) ;
        if( POOP ) return *this ;
    }

    GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = &PUSE ;                                                                                                                    \
    {
        puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
    
        countT pczHe[] = { LISTnAME_ROOT , LISTnAME_ROOTsYSTEM4 , LISTnAME_TEMPORARY , LISTnAME_SELECTED , selectP.idName , LISTnAME_RECORD , 0 } ;
    
        {
            PUSHtINaRGS
            tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
            tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
            tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = idName ;
            listC::walkIF( tinP , pczHe ) ;
            POPtINaRGS
        }
    }
    tinP.ta.retained.u.listWalk.walk.pPoolRecord = 0 ;                                                                            \
    UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )

    return *this ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00a.selectc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00c.selectc.selectc BEGIN
#define DDNAME       "3func.3610b00c.selectc.selectc"
#define DDNUMB      (countT)0x3610b00c
#define IDFILE      (countT)0x14a2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::selectC( tinS& tinP , const countT cFieldNameP , const osTextT* const valueP , const countT cNetP ) :/*1*/
idName( PUSE.dispenseUniqueListNameF() ) ,
grabitx( tinP , TAG( TAGiDnULL ) )
{
    if( cFieldNameP )
    {
        countT cNet = cNetP ? cNetP : 1 + thirdC::c_strlenIF( tinP , valueP ) ;
        if( cNet > CnETmAX ) cNet = CnETmAX ;

        GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = idName ;
        listC::walkIndexIF( tinP , cFieldNameP , valueP , cNet ) ; // 20120926: cNetP -> cNet WITHOUT ANALYSIS BECAUSE APPEARED TO BE A BUG
        POPtINaRGS
        UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00c.selectc.selectc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00d.selectc.selectc BEGIN
#define DDNAME       "3func.3610b00d.selectc.selectc"
#define DDNUMB      (countT)0x3610b00d
#define IDFILE      (countT)0x14a3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/selectC::selectC( tinS& tinP , const countT cFieldNameP , const countT* const valueP , const countT cNetP ) :/*1*/
idName( PUSE.dispenseUniqueListNameF() ) ,
grabitx( tinP , TAG( TAGiDnULL ) )
{
    if( cFieldNameP )
    {
        GRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
        PUSHtINaRGS
        tinP.ta.pushed.u.listWalk.walk.pListWalkCBFP = listWalkSelectCBF ;
        tinP.ta.pushed.u.listWalk.walk.flagsWalkP    = flLISTwALK_null ;
        tinP.ta.pushed.u.listWalk.util.pcP[ 0 ]      = idName ;
        listC::walkIndexIF( tinP , cFieldNameP , valueP , cNetP ) ;
        POPtINaRGS
        UNGRABtINaRGS( ifcIDtYPEtINaRGiNuSE_LIST )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3610b* : 3func.3610b00d.selectc.selectc END
