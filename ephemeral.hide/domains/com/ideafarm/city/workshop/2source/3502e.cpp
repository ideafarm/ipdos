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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e007.windowoldc.pwindowif BEGIN
#define DDNAME       "3func.3502e007.windowoldc.pwindowif"
#define DDNUMB      (countT)0x3502e007
#define IDFILE      (countT)0xb01


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$pWindowF.0.html\"\>instances\</A\>
\<A HREF=\"5.1440007.1.0.html\"\>definition\</A\>
evaluates to the address of the windowOldC object associated with hWindowP
 will evaluate to 0 if hWindowP is not associated with any windowOldC object
 impotence does not occur when there is no associated windowOldC object
arguments
 tinP
 hWindowP
  must not be 0
*/
/**/

/*1*/windowOldC* windowOldC::pWindowIF( tinS& tinP , const handleC& hWindowP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __Z( hWindowP ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    //NOT SERIALIZED BECAUSE STATIC FUNCTION

    ZE( windowOldC* , pw ) ;
    if( tinP.pAdamGlobal1->_windowOldC_.pstWindow )
    {
        stackC& st = *tinP.pAdamGlobal1->_windowOldC_.pstWindow ;

        st.grabF( tinP , TAG( TAGiDnULL ) ) ;

        handleC handle( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;    
        do
        {
            windowOldC* pwc = (windowOldC*)st.downF( tinP , handle ) ;
            if( pwc && hWindowP == *pwc )
            {
                pw = pwc ;
                break ;
            }
        }
        while( ~handle ) ;

        st.ungrabF( tinP ) ;
    }

    return pw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e007.windowoldc.pwindowif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e008.windowoldc.idif BEGIN
#define DDNAME       "3func.3502e008.windowoldc.idif"
#define DDNUMB      (countT)0x3502e008
#define IDFILE      (countT)0xb02


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$idF.0.html\"\>instances\</A\>
\<A HREF=\"5.1440008.1.0.html\"\>definition\</A\>
evaluates to the id of window wP
 these ids change as windows are created and destroyed
  creation of new windows does not affect the id of previously created windows
  deletion of windows does not affect the id of previously created windows
  deletion of a window decrements the ids of all subsequently created windows
 a window's id can be interpreted as the window's seniority
  the oldest window has id == 1
arguments
 tinP
  can be 0
 wP
  the window whose id is desired
*/
/**/

/*1*/countT windowOldC::idIF( tinS& tinP , windowOldC& wP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
        __( !tinP.pAdamGlobal1->_windowOldC_.pstWindow ) ;
        if( POOP ) return 0 ;
    }

    _IO_

    //NOT SERIALIZED BECAUSE STATIC FUNCTION

    countT idw = (*tinP.pAdamGlobal1->_windowOldC_.pstWindow)( (countT)&wP ) ;

    return idw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e008.windowoldc.idif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e00b.windowoldc.getrefif BEGIN
#define DDNAME       "3func.3502e00b.windowoldc.getrefif"
#define DDNUMB      (countT)0x3502e00b
#define IDFILE      (countT)0xb03


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/windowOldC* windowOldC::getRefIF( tinS& tinP , const countT idWindowP )/*1*/
{
    IFbEcAREFUL
    {
        if( POOP ) return 0 ;
    }

    _IO_

    //NOT SERIALIZED BECAUSE STATIC
    ZE( windowOldC* , pw ) ;
    if( etherC::ether_pBatWindowDeletionI_F( tinP ) )
    {
        etherC::ether_pBatWindowDeletionI_F( tinP )->grabF( tinP , TAG( TAGiDnULL ) ) ;

        switch( idWindowP )
        {
            case ifcIDwINDOW_ROOT : { pw = tinP.pAdamGlobal1->_windowOldC_.pRoot ; break ; }
        }

        if( pw )
        {
            if( !pw->bDoomed ) inc02AM( pw->cReferences ) ;
            else               pw = 0 ;
        }

        etherC::ether_pBatWindowDeletionI_F( tinP )->ungrabF( tinP ) ;
    }

    return pw ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3502e* : 3func.3502e00b.windowoldc.getrefif END
