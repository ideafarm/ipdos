
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.11000022.1.0.html\"\>definition\</A\>
*/
/**/
/*1*//*NEWdELcLASSpROTOS*//*1*/

#define NEWdELcLASSpROTOS                                                                                                       \
                                                                                                                                \
    voidT  operator delete(   voidT* pvP ) ;                                                                                    \
    voidT* operator new(      countT cbP , const countT cbFootP , tinS& tinP , const countT idLineP , const countT idiFileP ) ; \
    voidT* operator new(      countT cbP , const countT cbFootP , tinS& tinP , byteT* pbZombieP , const countT cbZombieP ) ;    \
    voidT* operator new(      countT cbP , const countT cbFootP , tinS& tinP , napkinC* const pNapkinP             ) ;          \
                                                                                                                                \
    voidT  operator delete[]( voidT* pvP ) ;                                                                                    \
    voidT* operator new[](    countT cbP                        , tinS& tinP , const countT idLineP , const countT idiFileP ) ; \
    voidT* operator new[](    countT cbP                        , tinS& tinP , byteT* pbZombieP , const countT cbZombieP ) ;    \
    voidT* operator new[](    countT cbP                        , tinS& tinP , napkinC* const pNapkinP                   ) ;


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

