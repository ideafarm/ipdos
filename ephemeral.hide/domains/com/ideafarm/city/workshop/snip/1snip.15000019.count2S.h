
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.15000019.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.8300104.1.1.0.html\"\>8300104:  WAKEsHOW( "example.simplest.snip.15000019.count2S" )\</A\>
a count2S object contains 2 countT values
 the identifiers are c1 , c2
*/
/**/
/*1*/struct _export count2S/*1*/
{

/**/

/* face */
 countT c1 ;
 countT c2 ;

/* birth , death */
 count2S( const countT c1P = 0 , const countT c2P = 0 ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34001.count2S.count2S!||

 /*soixlOld*/
 voidT operator >>( soulC& slP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34004.count2S.operator_shiftRight!||
 voidT operator <<( soulC& slP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34005.count2S.operator_shiftLeft!||

/* operators */
 operator countT*( voidT ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34002.count2S.operator_countT_ptr!||
 operator byteT*( voidT ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34003.count2S.operator_byteT_ptr!||
 count2S operator |( count2S& cP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34006.count2S.operator_or!||
 count2S& operator |=( count2S& cP ) ;
 //||!kt|///ideafarm/precious/domains/com/ideafarm/city/library/dictionary/3func.34007.count2S.operator_orEquals!||

/**/
}
;


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

