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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35005* : 3func.35005007.socketc.nicnameif BEGIN
#define DDNAME       "3func.35005007.socketc.nicnameif"
#define DDNUMB      (countT)0x35005007
#define IDFILE      (countT)0xafb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nicNameIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070008.1.0.html\"\>definition\</A\>
examples
 simplest
  \<A HREF=\"5.2520104.1.1.0.html\"\>2520104:  WAKEsHOW( "example.simplest.func.1070008.socketC.nicNameIF" )\</A\>
evaluates to the host id of the specified domain name
impotence will not occur if the domain name server replies "not found"
caller must verify that my return value is not ze before using it
arguments
 ether
 psttP
  can be 0, in which case the id of the local host is returned
  example: T("www.ideafarm.com")
*/
/**/

/*1*/nicNameC socketC::nicNameIF( tinS& tinP , etherC& ether , const strokeS* const psttP )/*1*/
{
    nicNameC nicName ;
    {
        IFbEcAREFUL    
        {
            if( ether ) return nicName ;
        }
    
        _IO_
    
        //CS:CODEsYNC: PSEUDODUPLICATED CODE: 1070008 1070023
        ZE( ipMapHomeS* , pMap ) ;
        if( psttP )
        {
            pMap = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
            countT cToDo = CiPmAPhOME ;
            while( cToDo )
            {
                if( !ether.strCompareF( tinP , psttP , T(pMap->postDomainName) ) ) break ; //U::flagsP TO TELL ME TO USE postMxName INSTEAD
                pMap ++ ;
                cToDo -- ;
            }
    
            if( !cToDo || F(pMap->flagsHome) & flIPmAPhOMEs_NOmAPPING ) pMap = 0 ;
        }
    
        //if( pMap ) { CONoUTrAW3( "" , tinP.pAdamGlobal1->idAdam , T("/nicNameIF: mapping ")+T(psttP)+T(" to ")+T(pMap->nnHome)+T("\r\n") ) ; }
    
        nicName = pMap
        
            ? pMap->nnHome
            : ether.sockNicNameF( tinP , psttP )
        
        ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35005* : 3func.35005007.socketc.nicnameif END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35005* : 3func.35005020.socketc.nicnameif BEGIN
#define DDNAME       "3func.35005020.socketc.nicnameif"
#define DDNUMB      (countT)0x35005020
#define IDFILE      (countT)0xafc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"6.$nicNameIF.0.html\"\>instances\</A\>
\<A HREF=\"5.1070023.1.0.html\"\>definition\</A\>
impotence will not occur if the domain name server replies "not found"
caller must verify that pNicNameP and cNicNameP are not ze before using pNicNameP
 only wo of these need be tested
*/
/**/

/*1*/voidT socketC::nicNameIF( tinS& tinP , etherC& ether , nicNameC*& pNicNameP , countT& cNicNameP , const strokeS* const psttP )/*1*/
{
    {
        IFbEcAREFUL    
        {
            if( ether ) return ;
            __NZ( pNicNameP ) ;
            __( cNicNameP ) ;
            __( psttP && !psttP->idAdam ) ;
            if( ether ) return ;
        }
    
        _IO_
    
        //CS:CODEsYNC: PSEUDODUPLICATED CODE: 1070008 1070023
        ZE( ipMapHomeS* , pMap ) ;
        if( psttP && psttP->idAdam )
        {
            pMap = (ipMapHomeS*)(byteT*)processGlobal7I._socketC_napIpMapHome ;
            countT cToDo = CiPmAPhOME ;
            while( cToDo )
            {
                if( !ether.strCompareF( tinP , T(psttP) , T(pMap->postDomainName) ) ) break ; //U::flagsP TO TELL ME TO USE postMxName INSTEAD
                pMap ++ ;
                cToDo -- ;
            }
    
            if( !cToDo || F(pMap->flagsHome) & flIPmAPhOMEs_NOmAPPING ) pMap = 0 ;
        }
    
        if( pMap )
        {
            ether.newF( tinP , LF , pNicNameP , 1 ) ; ___( pNicNameP ) ;
            if( pNicNameP )
            {
                *pNicNameP = pMap->nnHome ;
                cNicNameP = 1 ;
                TN( tSay , "" ) ; tSay = T("/nicNameIF: mapping ")+T(psttP)+T(" to ")+T(*pNicNameP)+T("\r\n") ;
                CONoUTrAW3( "" , tinP.pAdamGlobal1->idAdam , tSay ) ;
            }
        }
        else ether.sockNicNameF( tinP , pNicNameP , cNicNameP , psttP ) ;
    
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.35005* : 3func.35005020.socketc.nicnameif END
