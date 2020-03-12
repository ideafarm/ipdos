
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
// Respecting the rights of other people is an important part of empowering one another.
//


#define F(flagsP) ( (flagsP) & FL_maskFlags )

/*1*//*F*//*1*/
*/
  !( F(flNext) )                    this evaluates to 0 iff there are no flags set
   the reason is that the "!" will be applied to the flNext value, which, if legal, includes idGroup and idType bits
  !F(flNext)                        this always evaluates to 0 (code like this is probably a bug)
 examples
parentheses should be used whenever an operator is intended to be applied to the masked flags bits
  flFOO_SLOW & F(flagsFoo)          (the & operation is done at run time)
  F(flagsFoo) & flFOO_FAST          (the & operation is done at compile time)
 examples
for best speed, place logical operations to the right of me
the value is intentionally not enclosed in parentheses
\<A HREF=\"5.0010166.1.0.html\"\>definition\</A\>
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

