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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35029* : 3func.35029009.carc.strif BEGIN
#define DDNAME       "3func.35029009.carc.strif"
#define DDNUMB      (countT)0x35029009
#define IDFILE      (countT)0xb00


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$strF.0.html\"\>instances\</A\>
\<A HREF=\"5.1350008.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*/voidT carC::strIF( tinS& tinP , etherC& ether , strokeS*& psttP , const byteT* const pbSoulP , const countT csttEstimateP )/*1*/
{
    if( ether ) return ;
    __Z( pbSoulP ) ;
    if( ether ) return ;
    __( *(countT*)pbSoulP < 5 * sizeof( countT ) ) ;
    if( ether ) return ;

    _IO_

    countT* pcc = (countT*)pbSoulP ;

    countT cbLog          = pcc[ 4 ] ;
    countT cbLogImpotence = pcc[ 5 ] ;
    countT cbUsage        = pcc[ 6 ] ;

    __( *(countT*)pbSoulP - 6 * sizeof( countT ) - cbLog - cbLogImpotence - cbUsage ) ;

    if( !ether )
    {
        ether.strMakeF( tinP , LF , psttP , T("") , csttEstimateP ) ;

        strokeS* pstt1Log          = (strokeS*)(         &pcc[ 7 ]                          ) ;
        strokeS* pstt1LogImpotence = (strokeS*)( (byteT*)&pcc[ 7 ] + cbLog                  ) ;
        countT*  pcUsage           = (countT*) ( (byteT*)&pcc[ 7 ] + cbLog + cbLogImpotence ) ;

        { FORsTRINGSiN1( pstt1Log          ) { ether.strFuseF( tinP , psttP , T("log:    \"")+T(psttc1)+T("\"\r\n") ) ; ___( psttP ) ; } }
        { FORsTRINGSiN1( pstt1LogImpotence ) { ether.strFuseF( tinP , psttP , T("logImp: \"")+T(psttc1)+T("\"\r\n") ) ; ___( psttP ) ; } }

        {
            // FORMAT OF pcUsage: FIRST countT IS cResources.  FOR EACH RESOURCE: qty , rid. rid is null terminated.

            ZE( countT , off ) ;
            countT cResources = pcUsage[ off ++ ] ;
            ether.strFuseF( tinP , psttP , T("cResources"": ")+TF1(cResources)+T("\r\n") ) ; ___( psttP ) ;

            while( cResources -- )
            {
                countT qty = pcUsage[ off ++ ] ;
                ether.strFuseF( tinP , psttP , TF3(qty,0,8)+T(" ") ) ; ___( psttP ) ;
                countT* pcPart = &pcUsage[ off ] ;
                ether.strFuseF( tinP , psttP , TF1(pcPart)+T("\r\n") ) ; ___( psttP ) ;
                off += 1 + ether.strBodyLengthF( tinP , pcPart ) ;
            }
        }
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35029* : 3func.35029009.carc.strif END
