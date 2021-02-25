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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043001.dnsmsgheaders.dnsmsgheaders BEGIN
#define DDNAME       "3func.36043001.dnsmsgheaders.dnsmsgheaders"
#define DDNUMB      (countT)0x36043001
#define IDFILE      (countT)0x1168


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1630003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/dnsMsgHeaderS::dnsMsgHeaderS( tinS& tinP )/*1*/ :
idQuery( (count01T)( thirdC::osTimeIF() + thirdC::osClockIF( tinP ) ) ) ,
bPleaseRecurse( 1 ) ,
bTruncated( 0 ) ,
bAuthoritative( 0 ) ,
idType( 0 ) ,
bReply( 0 ) ,
idError( 0 ) ,
reserved1( 0 ) ,
bCanRecurse( 0 ) ,
cQuerys( 1 ) ,
cAnswers( 0 ) ,
cAuthorities( 0 ) ,
cNotes( 0 )
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043001.dnsmsgheaders.dnsmsgheaders END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043002.dnsmsgheaders.logf BEGIN
#define DDNAME       "3func.36043002.dnsmsgheaders.logf"
#define DDNUMB      (countT)0x36043002
#define IDFILE      (countT)0x1169


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$logF.0.html\"\>instances\</A\>
\<A HREF=\"5.1630004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT dnsMsgHeaderS::logF( tinS& tinP )/*1*/
{
    ;//TELLsYSc3( ifcIDtYPEtELLsYS_dnsMsgHeaderS , (byteT*)this , sizeof *this )
    if( tinP.fingerprint ) ; //U::
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043002.dnsmsgheaders.logf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043003.dnsmsgheaders.swabf BEGIN
#define DDNAME       "3func.36043003.dnsmsgheaders.swabf"
#define DDNUMB      (countT)0x36043003
#define IDFILE      (countT)0x116a


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$swabF.0.html\"\>instances\</A\>
\<A HREF=\"5.1630005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/voidT dnsMsgHeaderS::swabF( voidT )/*1*/
{
    idQuery      = SWAB2( idQuery      ) ;
    cQuerys      = SWAB2( cQuerys      ) ;
    cAnswers     = SWAB2( cAnswers     ) ;
    cAuthorities = SWAB2( cAuthorities ) ;
    cNotes       = SWAB2( cNotes       ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043003.dnsmsgheaders.swabf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043004.dnsmsgheaders.namef BEGIN
#define DDNAME       "3func.36043004.dnsmsgheaders.namef"
#define DDNUMB      (countT)0x36043004
#define IDFILE      (countT)0x116b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1630006.1.0.html\"\>definition\</A\>
i fill st_psttP with the "labels" that comprise the name at pbP
i also set pbP to the end of the data that i used
arguments
 tinP
 etThread
 st_psttP
  must be empty
   this is not enforced, because i might be called recursively
  must be of type ifcSTACKtYPE_PTR_strokeS
 pbP
  must not be 0
  must point to the beginning of the wo'th label for a name
  must be within the same dns record that begins with me
   only partially enforced
 cbP
*/
/**/

/*1*/voidT dnsMsgHeaderS::nameF( tinS& tinP , etherC& etThread , stackC& st_psttP , const byteT*& pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( etThread ) return ;
        __( st_psttP.idTypeF( tinP ) - ifcSTACKtYPE_PTR_strokeS ) ;
        __Z( pbP ) ;
        __( pbP < (byteT*)this + sizeof( dnsMsgHeaderS ) ) ;
        __Z( cbP ) ;
        if( etThread ) return ;
    }

    _IO_

    const byteT* const pbe = pbP + cbP ;
    for(;;)
    {
        if( ( *pbP & 0xc0 ) == 0xc0 ) // IF pbP POINTS TO AN OFFSET RATHER THAN TO A LABEL LITERAL
        {
            // USE THE SPECIFIED OFFSET TO OBTAIN THE VALUE OF THIS LABEL FROM ELSEWHERE IN THE MESSAGE

            __( pbe < pbP + sizeof( count01T ) ) ;
            if( POOP ) break ;

            const byteT* pbr = (byteT*)this + ( SWAB2( *(count01T*)pbP ) & ~0xc000 ) ;
            pbP += 2 ;

            __( pbe <= pbr ) ;
            if( POOP ) break ;

            nameF( tinP , etThread , st_psttP , pbr , pbe - pbr ) ;
            break ;
        }
        else if( *pbP & 0xc0 )
        {
            //TELLsYSc1( ifcIDtYPEtELLsYS_ERRORlABELiStOOlONG )
            __1
            break ;
        }
        else
        {
            countT         cbLabel = *pbP ; pbP += 1 ;
            __( pbe < pbP + cbLabel ) ;

            if( !POOP )
            {
                const osTextT* pbLabel =  pbP ; pbP += cbLabel ;
                if( !cbLabel ) break ;
                else
                {
                    ZE( osTextT* , postw ) ;
                    etThread.newF( tinP , LF , postw , cbLabel + 1 ) ; ___( postw ) ;
                    etThread.memCopyF( tinP , postw , pbLabel , cbLabel ) ;
                    if( postw ) postw[ cbLabel ] = 0 ;
                    strokeS* psttv = psttOldC( tinP , etThread , T(postw) ) ; ___( psttv ) ;
                    st_psttP << psttv ; psttv = 0 ;
                    etThread.delF( tinP , postw ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043004.dnsmsgheaders.namef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043005.dnsmsgheaders.namef BEGIN
#define DDNAME       "3func.36043005.dnsmsgheaders.namef"
#define DDNUMB      (countT)0x36043005
#define IDFILE      (countT)0x116c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nameF.0.html\"\>instances\</A\>
\<A HREF=\"5.1630007.1.0.html\"\>definition\</A\>
i set psttP to the dot concatenation of the "labels" that comprise the name at pbP
 the result will be of the form "d.c.b.a"
 note that the trailing dot specified in the rfc is omitted
i also set pbP to the end of the data that i used
arguments
 tinP
 etThread
 psttP
  must be 0
 pbP
  must not be 0
  must point to the beginning of the wo'th label for a name
  must be within the same dns record that begins with me
   only partially enforced
*/
/**/

/*1*/voidT dnsMsgHeaderS::nameF( tinS& tinP , etherC& etThread , strokeS*& psttP , const byteT*& pbP , const countT cbP )/*1*/
{
    IFbEcAREFUL
    {
        if( etThread ) return ;
        __NZ( psttP ) ;
        __Z( pbP ) ;
        __( pbP < (byteT*)this + sizeof( dnsMsgHeaderS ) ) ;
        __Z( cbP ) ;
        if( etThread ) return ;
    }

    stackC st_pstt( tinP , etThread , TAG( TAGiDnULL ) , flSTACKc_FIFO , ifcSTACKtYPE_PTR_strokeS ) ;
    nameF( tinP , etThread , st_pstt , pbP , cbP ) ;
    etThread.strConcatenateF( tinP , psttP , st_pstt , T(".") ) ; ___( psttP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36043* : 3func.36043005.dnsmsgheaders.namef END
