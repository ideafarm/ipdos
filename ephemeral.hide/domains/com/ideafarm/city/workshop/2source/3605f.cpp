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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605f* : 3func.3605f001.testwaterc.dt_testwaterc BEGIN
#define DDNAME       "3func.3605f001.testwaterc.dt_testwaterc"
#define DDNUMB      (countT)0x3605f001
#define IDFILE      (countT)0x11d2


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1820002.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/testWaterC::~testWaterC( voidT )/*1*/
{
    //POPUPcOUNT( "~testWaterC: [osh1]: " , osh1 ) ; //U:: TO FIND A BUG
    if( osh1 )
    {
        thirdC::osHandleCloseIF( osh1 ) ;
    }

    //ENABLE THIS TO VERIFY AUDIBLY THAT ALL GLOBALS ARE DESTRUCTED
    //if( F(thirdC::third_flagsModeProcess1I_IF(tinP)) & flMODEpROCESS1_DRIVER )
    //{
    //    OStEXT( ostol , 0x200 )
    //    OStEXTC( ostol , processGlobal1I.idHome , 0 )
    //    OStEXTAK( ostol , " " )
    //    OStEXTC( ostol , processGlobal1I.idAdamRoot , 0 )
    //    OStEXTAK( ostol , " \\\\\\\\\r\n" )
    //    LOG rAWnOtIN( ostol ) ;
    //
    //    thirdC::dosBeepIF( 0x80 * ( processGlobal1I.idHome & 0x7fffffff ) , 0x50 ) ;
    //}

    processGlobal1I.pcPhaseLow[ 1 ] = - 1 ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605f* : 3func.3605f001.testwaterc.dt_testwaterc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605f* : 3func.3605f002.testwaterc.testwaterc BEGIN
#define DDNAME       "3func.3605f002.testwaterc.testwaterc"
#define DDNUMB      (countT)0x3605f002
#define IDFILE      (countT)0x11d3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1820003.1.0.html\"\>definition\</A\>
*/
/**/

// nuP IS PRESENT ONLY TO WORK AROUND A COMPILER BUG: WATCOM DOES NOT CALL THE CONSTRUCTOR IF THERE IS NO PARAMETER

/*1*/testWaterC::testWaterC( tinS& tinP ) :/*1*/
osh1( 0 )
{
    if( !( ++ processGlobal1I.pcPhaseLow[ 1 ] ) ) { BLAMMO ; }
    thirdC::osTestWaterIF( tinP , ifcIDtYPEtESTwATER_IDhOSTaDJUST , &osh1 ) ;
    thirdC::osTestWaterIF( tinP , ifcIDtYPEtESTwATER_ENOUGHmEMORY         ) ;
    //POPUPcOUNT( "testWaterC: [osh1]: " , osh1 ) ; //U:: TO FIND A BUG
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.3605f* : 3func.3605f002.testwaterc.testwaterc END
