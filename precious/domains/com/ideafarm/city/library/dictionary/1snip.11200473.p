
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
// Respecting the rights of other people is an important part of empowering one another.
//


#define P(pvP) ( (voidT*)( (countT)(pvP) & ~BM_HIGH ) )

/*1*//*P(pvP)*//*1*/

//A:ASSUME: THE HIGH BIT IS NEVER SET IN A POINTER VALUE (THIS IS TRUE FOR WIN32, WHICH RESERVES THE TOP HALF OF THE ADDRESS SPACE FOR SYSTEM USE)

/**/
*/
code that uses me is probably using the high bit for some application purpose
use me to mask away the high bit
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

