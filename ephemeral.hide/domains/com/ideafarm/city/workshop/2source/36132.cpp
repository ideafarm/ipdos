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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132002.pagec.dt_pagec BEGIN
#define DDNAME       "3func.36132002.pagec.dt_pagec"
#define DDNUMB      (countT)0x36132002
#define IDFILE      (countT)0x1535


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/pageC::~pageC( voidT )/*1*/
{
    TINSL
    SCOOP

    resetF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132002.pagec.dt_pagec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132003.pagec.pagec BEGIN
#define DDNAME       "3func.36132003.pagec.pagec"
#define DDNUMB      (countT)0x36132003
#define IDFILE      (countT)0x1536


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

countT pageC::idMeLath ;

/*1*/pageC::pageC( tinS& tinP , booksC& booksP , const countT cbzP ) :/*1*/
poop( flPOOP_SMELLY ) ,
books( booksP ) ,
pcRef( 0 ) ,
pbz( 0 ) ,
cbz( 0 ) ,
flags( 0 ) ,
idMe( 1 + incv02AM( idMeLath ) )
{

    SCOOP





    books.lockF( tinP , TAG( TAGiDnULL ) ) ;
    validateIF( tinP , books , books , 0 ) ;
    setF( tinP , booksP , 0 , 0 , cbzP , 0 ) ;
    books.unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132003.pagec.pagec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132004.pagec.pagec BEGIN
#define DDNAME       "3func.36132004.pagec.pagec"
#define DDNUMB      (countT)0x36132004
#define IDFILE      (countT)0x1537


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/pageC::pageC( tinS& tinP , booksC& booksP , countT* pcRefP , const byteT* const pbzP , const countT cbzP , const flagsT flagsP ) :/*1*/
poop( flPOOP_SMELLY ) ,
books( booksP ) ,
pcRef( 0 ) ,
pbz( 0 ) ,
cbz( 0 ) ,
flags( 0 ) ,
idMe( 1 + incv02AM( idMeLath ) )
{

    SCOOP
    if( F(flagsP) & flPAGEc_DELETE )
    {
        ___( pbzP ) ;
    }

    books.lockF( tinP , TAG( TAGiDnULL ) ) ;
    validateIF( tinP , books , books , pbzP ) ;
    setF( tinP , booksP , pcRefP , pbzP , cbzP , flagsP ) ;
    books.unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132004.pagec.pagec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132005.pagec.pagec BEGIN
#define DDNAME       "3func.36132005.pagec.pagec"
#define DDNUMB      (countT)0x36132005
#define IDFILE      (countT)0x1538


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/pageC::pageC( const pageC& pageP ) :/*1*/
poop( flPOOP_SMELLY ) ,
books( pageP.books ) ,
pcRef( 0 ) ,
pbz( 0 ) ,
cbz( 0 ) ,
flags( 0 ) ,
idMe( 1 + incv02AM( idMeLath ) )
{
    TINSL
    SCOOP





    books.lockF( tinP , TAG( TAGiDnULL ) ) ;
    validateIF( tinP , books , pageP.books , pageP.pbz ) ;
    setF( tinP , pageP.books , pageP.pcRef , pageP.pbz , pageP.cbz , pageP.flags ) ;
    books.unlockF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132005.pagec.pagec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132006.pagec.operator_assign BEGIN
#define DDNAME       "3func.36132006.pagec.operator_assign"
#define DDNUMB      (countT)0x36132006
#define IDFILE      (countT)0x1539


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/pageC& pageC::operator =( const pageC& pageP )/*1*/
{
    TINSL
    SCOOP

    books.lockF( tinP , TAG( TAGiDnULL ) ) ;

    validateIF( tinP , books , pageP.books , pageP.pbz ) ;

    resetF( tinP ) ;

    setF( tinP , pageP.books , pageP.pcRef , pageP.pbz , pageP.cbz , pageP.flags ) ;

    books.unlockF( tinP ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132006.pagec.operator_assign END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132008.pagec.setf BEGIN
#define DDNAME       "3func.36132008.pagec.setf"
#define DDNUMB      (countT)0x36132008
#define IDFILE      (countT)0x153a

//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT pageC::setF( tinS& tinP , booksC& booksP , countT* pcRefP , const byteT* const pbzP , countT cbzP , flagsT flagsP )/*1*/
{
    SCOOP
    if( pbz || flags ) { BLAMMO ; }
    cbz = cbzP   ;

    if( pcRef ) { BLAMMO ; }            //TO GET 0, CALL resetF BEFORE CALLING ME
    pcRef = pcRefP ;

    if( pbzP )
    {
        flags = flagsP ;

        if( !( F(flagsP) & flPAGEc_DELETE ) )
        {
            pbz = pbzP ;

            countT cRefWas = incv02AM( *pcRef ) ;

            //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 )
            //{
            //    OStEXT(   ostoSay , TUCK << 2 ) ;
            //    OStEXTAK( ostoSay , "pageC  [this,pcRef,cRefWas]:    " ) ;
            //    OStEXTCmIN( ostoSay , this , 8 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , pcRef , 0 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , cRefWas , 0 ) ;
            //    OStEXTAK( ostoSay , " +" ) ;
            //
            //    tinP.pEther->trace F( tinP , (const strokeS* const)(const osTextT* const)ostoSay , flTRACE_LOOP | flTRACE_PARAMETERiSoStEXT ) ;
            //}

            if( !( 1 + cRefWas ) ) { BLAMMO ; } ;
        }
        else
        {
            if( pbz ) { PUSE( tinP , *(byteT**)&pbz ) ; }
            PUSE.newF( tinP , LF , *(byteT**)&pbz , cbzP ) ; ___( pbz ) ;
            __Z( pbz ) ;
            thirdC::c_memcpyIF( tinP , *(byteT**)&pbz , pbzP , cbzP ) ;
        }

        if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_DOnOTrEGISTERpAGEc ) )
        {
            countT offbm = -1 ;
            for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
            {
                if( tinP.pBookMark[ offr ].pBooks == &booksP )
                {
                    offbm = offr ;
                    break ;
                }
            }

            if( offbm == -1 ) for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
            {
                if( !tinP.pBookMark[ offr ].pBooks )
                {
                    tinP.pBookMark[ offr ].pBooks         = &booksP ;
                    tinP.pBookMark[ offr ].cRef           = 0       ;
                    tinP.pBookMark[ offr ].pbz            = 0       ;
                    tinP.pBookMark[ offr ].pcpIdBook[ 0 ] = 0       ;
                    offbm = offr ;
                    break ;
                }
            }

            if( offbm == -1 ) { BLAMMO ; }

            if( !( tinP.pBookMark[ offbm ].cRef ++ ) )
            {
                tinP.pBookMark[ offbm ].pbz = pbzP ;
                tinP.pBookMark[ offbm ].pcpIdBook[ 0 ] = 0 ;

                const countT* pcpIdBookOriginal = books.pcpIdBookF()  ;
                if( pcpIdBookOriginal[ 0 ] != 1 ) { BLAMMO ; }
                tinP.pBookMark[ offbm ].pcpIdBook[ 0 ] = pcpIdBookOriginal[ 0 ] ;
                tinP.pBookMark[ offbm ].pcpIdBook[ 1 ] = pcpIdBookOriginal[ 1 ] ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132008.pagec.setf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132009.pagec.resetf BEGIN
#define DDNAME       "3func.36132009.pagec.resetf"
#define DDNUMB      (countT)0x36132009
#define IDFILE      (countT)0x153b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT pageC::resetF( tinS& tinP )/*1*/
{
    SCOOP
    if( pbz )
    {
        if( pcRef )
        {
            books.lockF( tinP , TAG( TAGiDnULL ) ) ; //U:: CONJ: DON'T NEED TO LOCK THE CURRENT BOOK (THIS COMMENT APPLIES EVERYWHERE THAT i HAVE pcRef, WHICH SHOULD POINT INTO A bookC INSTANCE THAT WILL NEVER BE DELETED WHILE *pcRef IS NOT 0
            countT cRefWas = decv02AM( *pcRef ) ;

            if( !cRefWas )
            {
                //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 )
                //{
                //    OStEXT(   ostoSay , TUCK << 2 ) ;
                //    OStEXTAK( ostoSay , "pageC  [this]:    " ) ;
                //    OStEXTCmIN( ostoSay , this , 8 ) ;
                //    OStEXTAK( ostoSay , "    BLAMMO!  (!cRefWas)" ) ;
                //
                //    tinP.pEther->trace F( tinP , (const strokeS* const)(const osTextT* const)ostoSay , flTRACE_LOOP | flTRACE_PARAMETERiSoStEXT ) ;
                //}
                BLAMMO ;
            }

            books.unlockF( tinP ) ;

            //if( tinP.pAdamGlobal1->idAdam == ifcIDaDAM_ACCESSeVENTS3bOOKbYhASHbYTE1 )
            //{
            //    OStEXT(   ostoSay , TUCK << 2 ) ;
            //    OStEXTAK( ostoSay , "pageC  [this,pcRef,cRefWas]:    " ) ;
            //    OStEXTCmIN( ostoSay , this , 8 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , pcRef , 0 ) ;
            //    OStEXTAK( ostoSay , "    " ) ;
            //    OStEXTC(  ostoSay , cRefWas , 0 ) ;
            //    OStEXTAK( ostoSay , " -" ) ;
            //
            //    tinP.pEther->trace F( tinP , (const strokeS* const)(const osTextT* const)ostoSay , flTRACE_LOOP | flTRACE_PARAMETERiSoStEXT ) ;
            //}

            //U:: BLAMMO SHOULD BE HERE, BUT WHEN IT IS HERE I GET CNR
        }

        if( F(flags) & flPAGEc_DELETE ) PUSE( tinP , *(byteT**)&pbz ) ;
        else                            pbz = 0 ;

        flags = 0 ;

        if( !( F(tinP.flagsThreadMode3) & flTHREADmODE3_DOnOTrEGISTERpAGEc ) )
        {
            countT offbm = -1 ;
            for( countT offr = 0 ; offr < sizeof tinP.pBookMark / sizeof tinP.pBookMark[ 0 ] ; offr ++ )
            {
                if( tinP.pBookMark[ offr ].pBooks == &books )
                {
                    offbm = offr ;
                    break ;
                }
            }

            if( offbm == -1 ) { BLAMMO ; }
            else
            {
                if( !( -- tinP.pBookMark[ offbm ].cRef ) )
                {
                    tinP.pBookMark[ offbm ].pBooks         = 0 ;
                    tinP.pBookMark[ offbm ].pbz            = 0 ;
                    tinP.pBookMark[ offbm ].pcpIdBook[ 0 ] = 0 ;
                }
            }
        }
    }
    else if( flags ) { BLAMMO ; }

    cbz = 0 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36132* : 3func.36132009.pagec.resetf END
