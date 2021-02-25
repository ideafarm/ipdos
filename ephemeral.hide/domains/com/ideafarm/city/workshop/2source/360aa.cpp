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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa001.platec.dt_platec BEGIN
#define DDNAME       "3func.360aa001.platec.dt_platec"
#define DDNUMB      (countT)0x360aa001
#define IDFILE      (countT)0x136b


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

//THIS DEFINITION EXISTS BECAUSE OF AN APPARENT BUG IN WATCOM LINKER
//IF THIS DEF DOES NOT EXIST, THE LINKER COMPLAINS ABOUT AN UNRESOLVED REFERENCE FOR IT
//THIS IS A BUG IN THE SENSE THAT THIS IS AN ABSTRACT CLASS
//THE COMPILER SHOULD PRODUCE CODE THAT ALLOWS THIS DESTRUCTOR TO NOT EXIST
//I.E. THE CODE FOR THE DESTRUCTOR FOR THE DERIVED CLASS SHOULD CALL THE BASE CLASS DESTRUCTOR IFF THE POINTER IS NONZE
//THE CODE APPARENTLY DOES NOT SUPPORT THIS

/*1*/plateC::~plateC( voidT )/*1*/
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa001.platec.dt_platec END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa002.platec.operator_incrementby BEGIN
#define DDNAME       "3func.360aa002.platec.operator_incrementby"
#define DDNUMB      (countT)0x360aa002
#define IDFILE      (countT)0x136c


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/plateC& plateC::operator +=( stackC& stP )/*1*/
{
    TINSL
    __( stP.idTypeF( tinP ) - ifcSTACKtYPE_PTR_plateC ) ;

    if( !POOP )
    {
        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
        do
        {
            plateC* pPlate = (plateC*)stP.downF( tinP , hWalk ) ;
            if( pPlate ) *this += *pPlate ;
        }
        while( ~hWalk ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa002.platec.operator_incrementby END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa003.platec.operator_incrementby BEGIN
#define DDNAME       "3func.360aa003.platec.operator_incrementby"
#define DDNUMB      (countT)0x360aa003
#define IDFILE      (countT)0x136d


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/plateC& plateC::operator +=( plateC& plateP )/*1*/
{
    TINSL

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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.360aa* : 3func.360aa003.platec.operator_incrementby END
