
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
// Respecting the rights of other people is an important part of empowering one another.
//


#define J(idJotP) ( !( (countT)(idJotP) & BM_HIGH ) ? (byteT*)(idJotP) : (byteT*)( *tinP.ppJot[ ( (countT)(idJotP) & ~BM_HIGH ) >> sizeof( countT ) * SB - 4 ] )[ (countT)(idJotP) ] )

/*1*//*J(idJotP)*//*1*/

/**/
*/
this macro detects an invalid jPointer value and, if valid, evaluates to the (const byteT*) value that is to be used
a jPointer is any pointer that might contain either a memory address or wo of the special jPointer constants
the use of this macro makes code "jPointer aware"
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

