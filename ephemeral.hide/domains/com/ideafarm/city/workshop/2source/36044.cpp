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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044001.nicnamesc.nicnamesc BEGIN
#define DDNAME       "3func.36044001.nicnamesc.nicnamesc"
#define DDNUMB      (countT)0x36044001
#define IDFILE      (countT)0x116d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1640003.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNamesC::nicNamesC( tinS& tinP , thirdC& thirdP )/*1*/ :
third( thirdP ) ,
stPermanent( tinP , third , TAG( TAGiDnULL ) , flSTACKc_COPY | flSTACKc_PULLrANDOMLY , ifcSTACKtYPE_PTR_nicNameC ) ,
stWorking(   tinP , third , TAG( TAGiDnULL ) , flSTACKc_COPY | flSTACKc_PULLrANDOMLY , ifcSTACKtYPE_PTR_nicNameC ) ,
bWoth( 1 )
{
    IFbEcAREFUL
    {
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044001.nicnamesc.nicnamesc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044002.nicnamesc.operator_shiftleft BEGIN
#define DDNAME       "3func.36044002.nicnamesc.operator_shiftleft"
#define DDNUMB      (countT)0x36044002
#define IDFILE      (countT)0x116e


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1640004.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNamesC& nicNamesC::operator <<( nicNameC nicNameP )/*1*/
{
    TINSL
    IFbEcAREFUL
    {
        if( third ) return *this ;
    }

    stPermanent << &nicNameP ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044002.nicnamesc.operator_shiftleft END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044003.nicnamesc.operator_shiftright BEGIN
#define DDNAME       "3func.36044003.nicnamesc.operator_shiftright"
#define DDNUMB      (countT)0x36044003
#define IDFILE      (countT)0x116f


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1640005.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNamesC& nicNamesC::operator >>( nicNameC& nicNameP )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( third ) return *this ;
        __NZ( nicNameP ) ;
        if( third ) return *this ;
    }

    ZE( nicNameC* , pNicName ) ;
    stPermanent >> pNicName ;
    if( pNicName ) nicNameP = *pNicName ;
    third.delF( tinP , pNicName ) ;

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044003.nicnamesc.operator_shiftright END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044004.nicnamesc.operator_nicnamec BEGIN
#define DDNAME       "3func.36044004.nicnamesc.operator_nicnamec"
#define DDNUMB      (countT)0x36044004
#define IDFILE      (countT)0x1170


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1640006.1.0.html\"\>definition\</A\>
i evaluate to a randomly selected value in the working stack, or a null value if the working stack is exhausted
 the selected value is removed from the working stack
 if the working stack is empty, i evaluate to a null value
  test for this null value by applying the ! operator
   e.g. if( !!nicName )
  all of the values in the permanent stack are loaded onto it
whenever i return a null value, i reload the working stack so the next call will begin sampling without replacement again from the values of the permanent stack
*/
/**/

/*1*/nicNamesC::operator nicNameC( voidT )/*1*/
{
    TINSL

    nicNameC nicName ;
    IFbEcAREFUL
    {
        if( third ) return nicName ;
    }

    if( bWoth )
    {
        bWoth = 0 ;
        __( stWorking ) ;
        if( stPermanent )
        {
            handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
            do stWorking << (nicNameC*)stPermanent.downF( tinP , hDown ) ;
            while( !third && ~hDown ) ;
        }
    }

    if( stWorking )
    {
        ZE( nicNameC* , pNicName ) ;
        stWorking >> pNicName ;
        if( pNicName ) nicName = *pNicName ;
        third.delF( tinP , pNicName ) ;
    }

    if( !nicName && stPermanent ) //RELOAD TO PREPARE FOR THE NEXT CALL TO ME
    {
        handleC hDown( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do stWorking << (nicNameC*)stPermanent.downF( tinP , hDown ) ;
        while( !third && ~hDown ) ;
    }

    return nicName ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044004.nicnamesc.operator_nicnamec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044005.nicnamesc.operator_countt BEGIN
#define DDNAME       "3func.36044005.nicnamesc.operator_countt"
#define DDNUMB      (countT)0x36044005
#define IDFILE      (countT)0x1171


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.1640007.1.0.html\"\>definition\</A\>
*/
/**/

/*1*/nicNamesC::operator countT( voidT )/*1*/
{
    TINSL

    IFbEcAREFUL
    {
        if( third ) return 0 ;
    }

    return stPermanent ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36044* : 3func.36044005.nicnamesc.operator_countt END
