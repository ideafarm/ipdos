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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607b* : 3func.3607b001.scountfrompostc.scountfrompostc BEGIN
#define DDNAME       "3func.3607b001.scountfrompostc.scountfrompostc"
#define DDNUMB      (countT)0x3607b001
#define IDFILE      (countT)0x1262


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sCountFromPostC::sCountFromPostC( sCountT& scToP , const osTextT* postFromP , const sCountT maxP , const sCountT minP , const boolT bUnsignedP , const sCountT* const pscOkP , countT cscOkP , const sCountT* const pscNotOkP , countT cscNotOkP )/*1*/
{
    //CONoUTrAW( "sCountFromPostC [postFrom]:    \"" ) ;
    //CONoUTrAW( postFromP ) ;
    //CONoUTrAW( "\"\r\n" ) ;

    if
    (
        (
               &scToP == (sCountT*)&processGlobal1I.idAdamRoot
            || &scToP == (sCountT*)&rootAdamGlobal1I.idAdam
        )
        && postFromP
        && *postFromP == '@'
    )
    {
        if( !thirdC::c_strcmpIF( postFromP , "@find"      ) ) scToP = ifcIDaDAM_TOOLwALKsEARCH ;
    }
    else
    {
        //CONoUTrAW5( "at " , (countT)&scToP , " before: " , scToP , "\r\n" ) ;
        if( postFromP && *postFromP )
        {
            sCountT value = thirdC::c_atoiIF( postFromP ) ;

            boolT bOk = 1 ;
            if( bUnsignedP )
            {
                if( (countT)value > (countT)maxP || (countT)value < (countT)minP )
                {
                    bOk = 0 ;
                    //POPUP( "sCountFromPostC not ok (unsigned)" ) ;
                    //POPUPcOUNT( "max" , (countT)maxP ) ;
                    //POPUPcOUNT( "min" , (countT)minP ) ;
                    //POPUPcOUNT( "value" , (countT)value ) ;
                }
            }
            else
            {
                if( value > maxP || value < minP )
                {
                    bOk = 0 ;
                    //POPUP( "sCountFromPostC not ok (signed)" ) ;
                    //POPUPcOUNT( "max" , maxP ) ;
                    //POPUPcOUNT( "min" , minP ) ;
                    //POPUPcOUNT( "value" , value ) ;
                }
            }

            if( bOk )
            {
                if( pscOkP )
                {
                    if( !cscOkP )
                    {
                        const sCountT* pscc = pscOkP ;
                        while( *( pscc ++ ) ) cscOkP ++ ;
                    }

                    bOk = 0 ;
                    for( countT off = 0 ; off < cscOkP ; off ++ )
                    {
                        if( value == pscOkP[ off ] )
                        {
                            bOk = 1 ;
                            break ;
                        }
                    }

                    //if( !bOk ) { POPUP( "sCountFromPostC did not find a match in the ok list" ) ; }
                }

                if( bOk && pscNotOkP )
                {
                    if( !cscNotOkP )
                    {
                        const sCountT* pscc = pscNotOkP ;
                        while( *( pscc ++ ) ) cscNotOkP ++ ;
                    }

                    for( countT off = 0 ; off < cscNotOkP ; off ++ )
                    {
                        if( value == pscNotOkP[ off ] )
                        {
                            bOk = 0 ;
                            break ;
                        }
                    }

                    //if( !bOk ) { POPUP( "sCountFromPostC found a match in the nok list" ) ; }
                }
            }

            if( bOk )
            {
                if( &scToP == (sCountT*)&rootAdamGlobal1I.idAdam ) rootAdamGlobal1I.setIdAdamF( value ) ; //U::20181112@1055: RENAME setIdAdamF TO INDICATE ITS TRUE FUNCTION
                else                                               scToP = value ;
            }
        }
        //CONoUTrAW5( "at " , (countT)&scToP , " after : " , scToP , "\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3607b* : 3func.3607b001.scountfrompostc.scountfrompostc END
