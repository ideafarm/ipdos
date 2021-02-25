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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053002.handlec.dt_handlec BEGIN
#define DDNAME       "3func.36053002.handlec.dt_handlec"
#define DDNUMB      (countT)0x36053002
#define IDFILE      (countT)0x1197


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/handleC::~handleC( voidT )/*1*/
{
    TINSL
    _IO_

    if( idType == ifcIDtYPEhANDLE_SHAREDmEMORY ) { linkedC* pd = (linkedC*)pbzLinked ; DELzOMBIE( pd ) ; }

    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_ROOTgORILLA && F(processGlobal1I._thirdC_flagsModeProcess2) & flMODEpROCESS2_DEBUG ) { CONoUTrAW5( "h " , idiFileCt , "(" , id LineCt , ") -\r\n" ) ; }

    closeIfF() ;

    dec02AM( processGlobal1I._handleC_cInstances ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053002.handlec.dt_handlec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053003.handlec.handlec BEGIN
#define DDNAME       "3func.36053003.handlec.handlec"
#define DDNUMB      (countT)0x36053003
#define IDFILE      (countT)0x1198


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/handleC::handleC( tinS& tinP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP , const countT idTypeP , const flagsT flagsP , const osTextT* const postNameP ) :/*1*/
baseSoilXxxxC( processGlobal1I._handleC_postOldClassName , postName ) ,
postName( 0 ) ,
idType( idTypeP ) ,
oshInvalid(  0 ) ,
osh( 0 ) ,
osPidOwner( 0 ) ,
cNote( 0 )
{
    //SPEED OPTIMIZATION: THIS _IO_ WOULD HAVE THE #4 HIGHEST FREQUENCY OF CALLS
    //_IO_

    //CONoUTrAW5( "handleC [idLineCt,idiFileCt]: [" , idLineCtP , "," , idiFileCtP , "]\r\n" ) ;

    if( !idType ) { BLAMMO ; } //REMOVED SUPPORT FOR LATE TYPING TO GET STRONGER TYPE CHECKING AND TO SIMPLIFY link ACTIONS

    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_ROOTgORILLA && F(processGlobal1I._thirdC_flagsModeProcess2) & flMODEpROCESS2_DEBUG ) { CONoUTrAW5( "h " , idiFileCt , "(" , id LineCt , ") +\r\n" ) ; }

    inc02AM( processGlobal1I._handleC_cInstances ) ;

    if( postNameP )
    {
        if( tinP.pEther )
        {
            countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
            tinP.pEther->newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___( postName ) ;
            thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
        }
    }
    resetF() ;

         if( idType == ifcIDtYPEhANDLE_EXCEPTIONhANDLER ) thirdC::osSetupExceptionHandlingIF( tinP ) ;
    else if( idType == ifcIDtYPEhANDLE_CRITICALsECTION  )
    {
        osh = thirdC::osOpenHandleCritSecIF( tinP ) ;
        osPidOwner = dosGetInfoBlocksIdProcessIF( tinP ) ;
    }

    if( idType == ifcIDtYPEhANDLE_SHAREDmEMORY )
    {
        new( 0 , tinP , pbzLinked , sizeof( pbzLinked ) ) linkedC( tinP , idLineCtP , idiFileCtP , pbBitsCtP , processGlobal3I._handleC_linked_sm ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053003.handlec.handlec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053004.handlec.resetf BEGIN
#define DDNAME       "3func.36053004.handlec.resetf"
#define DDNUMB      (countT)0x36053004
#define IDFILE      (countT)0x1199


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$resetF.0.html\"\>instances\</A\>
\<A HREF=\"5.1750004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT handleC::resetF( voidT )/*1*/
{
    TINSL
    osh = oshInvalid = idType ? thirdC::osInvalidHandleValueIF( tinP , idType ) : 0 ;
    cNote = osPidOwner = 0 ;

    switch( idType ) //U::THIS SHOULD BE IN handleCloseIF SO THAT resetF IS MERELY A MEMORY WIPE    20140831@1220: NAWWH: LOOKS LIKE IT SHOULD BE HERE
    {
        case ifcIDtYPEhANDLE_LISTING :
        {
            if( c2AppNote.c2 )
            {
                puseC puseat( tinP , ifcIDpOOL_ADAMtEMP ) ;
                countT*& pczNameCopy = *(countT**)&c2AppNote.c2 ;
                CONoUTrAW3( "R--- " , pczNameCopy , "\r\n" ) ; //U:: TO FIND A LEAK
                PUSE( tinP , *(byteT**)&pczNameCopy ) ;
                __NZ( pczNameCopy ) ;
            }

            break ;
        }
    }

    //20140831@1220: ADDED WITHOUT ANALYSIS
    count2S cz ;
    c2AppNote = cz ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053004.handlec.resetf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053005.handlec.closeiff BEGIN
#define DDNAME       "3func.36053005.handlec.closeiff"
#define DDNUMB      (countT)0x36053005
#define IDFILE      (countT)0x119a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$closeIfF.0.html\"\>instances\</A\>
\<A HREF=\"5.1750005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT handleC::closeIfF( voidT )/*1*/
{
    TINSL
    _IO_
    if( idType && osh != oshInvalid )
    {
        if( osPidOwner != dosGetInfoBlocksIdProcessIF( tinP ) ) { BLAMMO ; }

        //{
        //    count4S c4h( osh , idType , TAG( TAGiDnULL ) ) ; //U::EDIT 6a4 TO USE count4S; U::store TAG( TAGiDnULL ) info in *this
        //    TELLsYSc3LIFI( ifcIDtYPEtELLsYS_OShANDLEdT , (byteT*)&c4h , sizeof c4h , id LineCt , idiFileCt )
        //}

        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "handleC::closeIfF / 2\r\n" ) ;
        thirdC::handleCloseIF( *this ) ;
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "handleC::closeIfF / 1\r\n" ) ;
        resetF() ;
        //if( tinP.pc Utility[ 0 ] ) CONoUTrAW( "handleC::closeIfF / 0\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053005.handlec.closeiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053006.handlec.operator_not BEGIN
#define DDNAME       "3func.36053006.handlec.operator_not"
#define DDNUMB      (countT)0x36053006
#define IDFILE      (countT)0x119b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750006.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT handleC::operator !( voidT ) const/*1*/
{
    return !( idType && osh != oshInvalid ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053006.handlec.operator_not END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053007.handlec.osf BEGIN
#define DDNAME       "3func.36053007.handlec.osf"
#define DDNUMB      (countT)0x36053007
#define IDFILE      (countT)0x119c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osF.0.html\"\>instances\</A\>
\<A HREF=\"5.1750007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT handleC::osF( const countT idTypeVerifyP ) const/*1*/
{
    TINSL

    __Z( idType ) ;
    __( idType - idTypeVerifyP ) ;
    __Z( osh - oshInvalid ) ;
    __( osPidOwner - dosGetInfoBlocksIdProcessIF( tinP ) ) ;

    return osh ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053007.handlec.osf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053008.handlec.osf BEGIN
#define DDNAME       "3func.36053008.handlec.osf"
#define DDNUMB      (countT)0x36053008
#define IDFILE      (countT)0x119d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$osF.0.html\"\>instances\</A\>
\<A HREF=\"5.1750008.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT handleC::osF( const countT idTypeVerifyP , const countT oshP , const countT osPidOwnerP , const countT cNoteP )/*1*/
{
    TINSL
    if( idType && idType != idTypeVerifyP ) { BLAMMO ; }
    closeIfF() ;
    if( !idType )
    {
        *(countT*)&idType = idTypeVerifyP ;
        resetF() ;
    }

    osh = oshP ;
    osPidOwner = osPidOwnerP ? osPidOwnerP : dosGetInfoBlocksIdProcessIF( tinP ) ;
    if( idType == ifcIDtYPEhANDLE_PROCESS )
    {
        if( cNoteP ) { BLAMMO ; }
        cNote = oshP == (countT)thirdC::osOpenProcessIF() ;
    }
    else cNote = cNoteP ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053008.handlec.osf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053009.handlec.operator_equals BEGIN
#define DDNAME       "3func.36053009.handlec.operator_equals"
#define DDNUMB      (countT)0x36053009
#define IDFILE      (countT)0x119e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750009.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT handleC::operator ==( const handleC& oshP ) const/*1*/
{
    if( idType && idType != oshP.idType ) { BLAMMO ; }
    return idType == oshP.idType && osh == oshP.osh ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053009.handlec.operator_equals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300a.handlec.operator_assign BEGIN
#define DDNAME       "3func.3605300a.handlec.operator_assign"
#define DDNUMB      (countT)0x3605300a
#define IDFILE      (countT)0x119f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//




/*
\<A HREF=\"5.175000a.1.0.html\"\>definition\</A\>
creates a new osh that can be used wherever oshP can be used
*/
/**/

/*1*/voidT handleC::operator =( const handleC& oshP )/*1*/
{
    TINSL
    _IO_
    cloneF( oshP , dosGetInfoBlocksIdProcessIF( tinP ) , handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) , handleC( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_PROCESS ) ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300a.handlec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300b.handlec.operator_shiftleft BEGIN
#define DDNAME       "3func.3605300b.handlec.operator_shiftleft"
#define DDNUMB      (countT)0x3605300b
#define IDFILE      (countT)0x11a0


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.175000b.1.0.html\"\>definition\</A\>
moves osh from oshP to *this
*/
/**/

/*1*/voidT handleC::operator <<( handleC& oshP )/*1*/
{
    TINSL
    if( idType && idType != oshP.idType ) { BLAMMO ; }

    closeIfF() ;
    if( !idType )
    {
        *(countT*)&idType = oshP.idType ;
        resetF() ;
    }

    osh     = oshP.osh ;
    osPidOwner = oshP.osPidOwner ;
    cNote      = oshP.cNote ;
    oshP.resetF() ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300b.handlec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300c.handlec.clonef BEGIN
#define DDNAME       "3func.3605300c.handlec.clonef"
#define DDNUMB      (countT)0x3605300c
#define IDFILE      (countT)0x11a1


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cloneF.0.html\"\>instances\</A\>
\<A HREF=\"5.175000c.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT handleC::cloneF( const handleC& oshP , const countT osPidOwnerToP , const handleC& hProcessToP , const handleC& hProcessFromP )/*1*/
{
    TINSL

    //CS:PSEUDOdUPLICATE: 3500114f 3605300c
    if( !idType ) { BLAMMO ; }
    if( idType == ifcIDtYPEhANDLE_WINDOW          ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE
    if( idType == ifcIDtYPEhANDLE_CRITICALsECTION ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE
    if( idType == ifcIDtYPEhANDLE_LISTING         ) { BLAMMO ; } //U:LIST ALL NONCLONABLE TYPES HERE

    if( idType && idType != oshP.idType ) { BLAMMO ; }

    closeIfF() ;

    if( !idType )
    {
        *(countT*)&idType = oshP.idType ;
        resetF() ;
    }

    if( ~oshP )
    {
        osPidOwner = osPidOwnerToP ;
        switch( idType )
        {
            case ifcIDtYPEhANDLE_BOOKS    :
            case ifcIDtYPEhANDLE_FILEfIND :
            {
                osh = oshP.osh ;
                cNote = oshP.cNote ;
                c2AppNote = oshP.c2AppNote ;

                break ;
            }
            default :
            {
                //FOR PROCESS HANDLES, cNote IS A BOOLEAN THAT SAYS "DON'T CLOSE ME", WHICH IS USED WHEN osh IS THE OS PSEUDOHANDLE FOR THE CURRENT PROCESS
                if( idType != ifcIDtYPEhANDLE_PROCESS && osPidOwner == oshP.osPidOwner ) cNote = oshP.cNote ; //CODEsYNCH: 175000c 1020191
                osh = thirdC::osHandleCloneIF( tinP , cNote , oshP.osh , idType , ~hProcessToP ? hProcessToP.osF( ifcIDtYPEhANDLE_PROCESS ) : thirdC::osOpenProcessIF() , ~hProcessFromP ? hProcessFromP.osF( ifcIDtYPEhANDLE_PROCESS ) : thirdC::osOpenProcessIF() ) ;
                break ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300c.handlec.clonef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300d.handlec.operator_notequals BEGIN
#define DDNAME       "3func.3605300d.handlec.operator_notequals"
#define DDNUMB      (countT)0x3605300d
#define IDFILE      (countT)0x11a2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.175000d.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT handleC::operator !=( const handleC& oshP ) const/*1*/
{
    return !operator ==( oshP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300d.handlec.operator_notequals END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300e.handlec.cnotef BEGIN
#define DDNAME       "3func.3605300e.handlec.cnotef"
#define DDNUMB      (countT)0x3605300e
#define IDFILE      (countT)0x11a3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$cNoteF.0.html\"\>instances\</A\>
\<A HREF=\"5.175000e.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/countT& handleC::cNoteF( voidT )/*1*/
{
    return cNote ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300e.handlec.cnotef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300f.handlec.operator_assign BEGIN
#define DDNAME       "3func.3605300f.handlec.operator_assign"
#define DDNUMB      (countT)0x3605300f
#define IDFILE      (countT)0x11a4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//




/*
\<A HREF=\"5.175000f.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol anywhere
i am defined in order to catch scalar assignments, which otherwise would resolve to a copy constructor
*/
/**/

/*1*/voidT handleC::operator =( const countT cP )/*1*/
{
    TINSL
    BLAMMO ;
    if( cP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.3605300f.handlec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053010.handlec.handlec BEGIN
#define DDNAME       "3func.36053010.handlec.handlec"
#define DDNUMB      (countT)0x36053010
#define IDFILE      (countT)0x11a5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750010.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/handleC::handleC( const handleC& oshP , const osTextT* const postNameP ) :/*1*/
baseSoilXxxxC( processGlobal1I._handleC_postOldClassName , postName ) ,
postName( 0 ) ,
idType( oshP.idType ) ,
oshInvalid( 0 ) ,
osh( 0 ) ,
osPidOwner( 0 ) ,
cNote( 0 )
{
    TINSL
    _IO_
    //if( processGlobal1I.idAdamRoot == ifcIDaDAM_ROOTgORILLA && F(processGlobal1I._thirdC_flagsModeProcess2) & flMODEpROCESS2_DEBUG ) { CONoUTrAW5( "h " , idiFileCt , "(" , id LineCt , ") c\r\n" ) ; }

    inc02AM( processGlobal1I._handleC_cInstances ) ;
    if( postNameP )
    {
        if( tinP.pEther )
        {
            countT costName = thirdC::c_strlenIF( tinP , postNameP ) ;
            tinP.pEther->newF( tinP , LF , *(osTextT**)&postName , 1 + costName ) ; ___( postName ) ;
            thirdC::c_memcpyIF( tinP , *(osTextT**)&postName , postNameP , 1 + costName ) ;
        }
    }
    resetF() ;
    *this = oshP ;
    if( idType == ifcIDtYPEhANDLE_SHAREDmEMORY ) new( 0 , tinP , pbzLinked , sizeof( pbzLinked ) ) linkedC( *pTinAM() , TAGnOtIN( TAGiDnULL ) , processGlobal3I._handleC_linked_sm ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053010.handlec.handlec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053011.handlec.operator_notnot BEGIN
#define DDNAME       "3func.36053011.handlec.operator_notnot"
#define DDNUMB      (countT)0x36053011
#define IDFILE      (countT)0x11a6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1750011.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/boolT handleC::operator ~( voidT ) const/*1*/
{
    return    idType && osh != oshInvalid   ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053011.handlec.operator_notnot END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053012.handlec.operator_call BEGIN
#define DDNAME       "3func.36053012.handlec.operator_call"
#define DDNUMB      (countT)0x36053012
#define IDFILE      (countT)0x11a7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*/voidT handleC::operator ()( tinS& tinP , soulC& slP )/*1*/
{
    {
        ZE( baseSoilXxxxC* , pMeI ) ;
        slP >> pMeI ;
        if( pMeI != (baseSoilXxxxC*)this ) { BLAMMO ; }
    }

    ZE( countT , idCmdBase ) ;
    slP >> idCmdBase ;
    switch( idCmdBase )
    {
        case ifcIDcMDbASE_CLASSnAME :
        {
            slP << (strokeS*)T(processGlobal1I._handleC_postOldClassName) ;
            break ;
        }
        case ifcIDcMDbASE_INSTANCEnAME :
        {
            slP << (strokeS*)T(postName) ;
            break ;
        }
        case ifcIDcMDbASE_TICK :
        {
            break ;
        }
        case ifcIDcMDbASE_TOCK :
        {
            break ;
        }
        case ifcIDcMDbASE_REFERENCE :
        {
            flagsT save = slP.flags ;
            slP.flags &= ~( F(flSOUL_LIVE) ) ;
            slP << (baseSoilXxxxC*)this ;
            slP.flags = save ;
            break ;
        }
        case ifcIDcMDbASE_CMDdEFAULT :
        {
            ZE( strokeS* , psttw ) ;
            slP >> psttw ; ___( psttw ) ;

            if( tinP.pEther )
            {
                if( !tinP.pEther->strCompareF( tinP , psttw , T("?") ) )
                {
                    POPUP( T(postName)+T(": \"?\" received.") ) ;
                }
            }
            PUSE( tinP , *(byteT**)&psttw ) ;
            break ;
        }
        case ifcIDcMDbASE_CMDsPECIFIED :
        {
            break ;
        }
    }

    if( tinP.fingerprint ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053012.handlec.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053013.handlec.operator_shiftleft BEGIN
#define DDNAME       "3func.36053013.handlec.operator_shiftleft"
#define DDNUMB      (countT)0x36053013
#define IDFILE      (countT)0x11a8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& handleC::operator <<( soulC& slP )/*1*/
{
    closeIfF() ;
    resetF() ;
    cNote = osPidOwner = osh = *(countT*)&idType = 0 ;
    slP >> *(countT*)&idType ;
    slP >> osh ;
    slP >> osPidOwner ;
    slP >> cNote ;

    if( !idType ) oshInvalid = 0 ;
    else
    {
        TINSL
        oshInvalid = thirdC::osInvalidHandleValueIF( tinP , idType ) ;
    }

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053013.handlec.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053014.handlec.operator_shiftright BEGIN
#define DDNAME       "3func.36053014.handlec.operator_shiftright"
#define DDNUMB      (countT)0x36053014
#define IDFILE      (countT)0x11a9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/baseSoilXxxxC& handleC::operator >>( soulC& slP )/*1*/
{
    slP << idType ; 
    slP << osh ;
    slP << osPidOwner ;
    slP << cNote ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053014.handlec.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053016.handlec.operator_shiftright BEGIN
#define DDNAME       "3func.36053016.handlec.operator_shiftright"
#define DDNUMB      (countT)0x36053016
#define IDFILE      (countT)0x11aa


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/const baseSoilXxxxC& handleC::operator >>( soulC& slP ) const/*1*/
{
    slP << idType ; 
    slP << osh ;
    slP << osPidOwner ;
    slP << cNote ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36053* : 3func.36053016.handlec.operator_shiftright END
