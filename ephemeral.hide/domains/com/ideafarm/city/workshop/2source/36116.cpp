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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116002.sadamsc.dt_sadamsc BEGIN
#define DDNAME       "3func.36116002.sadamsc.dt_sadamsc"
#define DDNUMB      (countT)0x36116002
#define IDFILE      (countT)0x14c3


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamsC::~sadamsC( voidT )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        TINSL
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __( tinP.pAdamGlobal1->pSadams != this ) ;
            if( POOP ) return ;
        }

        tinP.pAdamGlobal1->pSadams = 0 ;
    
        countT cFlavors = swSadam.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swSadam.leverF( tinP , idf ) ;
            sadamC& sad = *(sadamC*)&(countT&)swSadam ;
            sadamC* pd = &sad ;
            DELzOMBIE( pd ) ;
        }
    
        swSadam.freeNullsF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116002.sadamsc.dt_sadamsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116003.sadamsc.sadamsc BEGIN
#define DDNAME       "3func.36116003.sadamsc.sadamsc"
#define DDNUMB      (countT)0x36116003
#define IDFILE      (countT)0x14c4


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamsC::sadamsC( tinS& tinP , etherC& etherP , const countT idLineCtP , const countT idiFileCtP , const byteT* const pbBitsCtP ) :/*1*/
poop( flPOOP_SMELLY ) ,
ether( etherP ) ,
cLever( 0 ) ,
swSadam( tinP , etherP , idLineCtP , idiFileCtP , pbBitsCtP , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_PATCHnEWfLAVOR , cLever , 0 , sizeof( sadamC ) ) ,
cLocked( 0 )
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __( tinP.pAdamGlobal1->pSadams ) ;
            if( POOP ) return ;
        }
    
        tinP.pAdamGlobal1->pSadams = this ;
        //tinP.pc Utility[ 0 ] = (countT)&swSadam ; //U::TO FIND A BUG
    
        //CONoUTrAW( " sadamsC\r\n" ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116003.sadamsc.sadamsc END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116004.sadamsc.operator_call BEGIN
#define DDNAME       "3func.36116004.sadamsc.operator_call"
#define DDNUMB      (countT)0x36116004
#define IDFILE      (countT)0x14c5


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamC& sadamsC::operator ()( tinS& tinP , const countT idAdamP , const handleC* const phCloneP , soulC** ppsFeaturesP )/*1*/
{
    static byteT pbSad[ sizeof( sadamC ) ] ;

    sadamC* pSadam = (sadamC*)pbSad ;
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return *(sadamC*)pbSad ;
            __( !cLocked == !!phCloneP ) ; // WHEN LOCKED, MUST SPECIFY CLONE ; WHEN NOT LOCKED, CANNOT SPECIFY CLONE
            if( POOP ) return *(sadamC*)pbSad ;
        }
    
        switchC* pswSadam = phCloneP
            ? (switchC*)phCloneP->osF( ifcIDtYPEhANDLE_sadamsC )
            : &swSadam
        ;
    
        cLever = idAdamP ;
        pSadam = (sadamC*)&(countT&)*pswSadam ;
        if( !pSadam->isConstructedF() )
        {
            __Z( ppsFeaturesP ) ;
            if( !POOP )
            {
                __( !*ppsFeaturesP ) ;
                if( !POOP ) new( 0 , tinP , (byteT*)pSadam , sizeof( sadamC ) ) sadamC( tinP , idAdamP , *ppsFeaturesP ) ;
            }
        }
    }
    
    return *pSadam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116004.sadamsc.operator_call END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116005.sadamsc.freezef BEGIN
#define DDNAME       "3func.36116005.sadamsc.freezef"
#define DDNUMB      (countT)0x36116005
#define IDFILE      (countT)0x14c6


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sadamsC::freezeF( tinS& tinP , handleC& hCloneP , const handleC* const phCloneP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __( ~hCloneP ) ;
            if( POOP ) return ;
        }
    
        {
            ZE( switchC* , pswo ) ;
            ether( tinP , pswo , TAG( TAGiDnULL ) , flSTACKc_DOnOTsERIALIZE | flSTACKc_ALLOWmULTIPLEuNSERIALIZED | flSTACKc_PATCHnEWfLAVOR , cLever , 0 , sizeof( sadamC ) ) ;
        
            switchC* pswi = phCloneP
                ? (switchC*)phCloneP->osF( ifcIDtYPEhANDLE_sadamsC )
                : &swSadam
            ;
    
            const countT cFlavors = pswi->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                cLever = pswi->leverF( tinP , idf ) ;
                sadamC& sadi = *(sadamC*)&(countT&)*pswi ;
        
                sadamC& sado = *(sadamC*)&(countT&)*pswo ;
                if( sado.isConstructedF() || !sadi.isConstructedF() ) { BLAMMO ; }
                else                                                  new( 0 , tinP , (byteT*)&sado , sizeof sado ) sadamC( sadi ) ;

                sadi.lockF() ;
            }

            hCloneP.osF( ifcIDtYPEhANDLE_sadamsC , (countT)pswo , 0 , (countT)this ) ;
        }
    
        cLocked ++ ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116005.sadamsc.freezef END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116006.sadamsc.unlockf BEGIN
#define DDNAME       "3func.36116006.sadamsc.unlockf"
#define DDNUMB      (countT)0x36116006
#define IDFILE      (countT)0x14c7


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sadamsC::unlockF( tinS& tinP , handleC& hCloneP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return ;
            if( POOP ) return ;
        }
    
        {
            switchC* pswSadam = (switchC*)hCloneP.osF( ifcIDtYPEhANDLE_sadamsC ) ;
            hCloneP.resetF() ;
    
            countT cFlavors = pswSadam->cFlavorsF( tinP ) ;
            for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
            {
                cLever = pswSadam->leverF( tinP , idf ) ;
                sadamC& sad = *(sadamC*)&(countT&)*pswSadam ;
                sadamC* pd = &sad ;
                DELzOMBIE( pd ) ;
            }
    
            pswSadam->freeNullsF( tinP ) ;
            (*tinP.pEther)( tinP , pswSadam ) ;
        }
    
        countT cFlavors = swSadam.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swSadam.leverF( tinP , idf ) ;
            sadamC& sad = *(sadamC*)&(countT&)swSadam ;
            sad.unlockF() ;
        }
    
        cLocked -- ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116006.sadamsc.unlockf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116007.sadamsc.getf BEGIN
#define DDNAME       "3func.36116007.sadamsc.getf"
#define DDNUMB      (countT)0x36116007
#define IDFILE      (countT)0x14c8


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
i return a list of sadamC zombie pointers, all of which are grabbed
caller must ungrab these instances
arguments
 tinP
 ether
 pStk_pSadam_P
  must be 0
  caller must return this object to the recycler
*/
/**/

/*1*/voidT sadamsC::getF( tinS& tinP , stackC*& pStk_pSadam_P , const flagsT flagsP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __NZ( pStk_pSadam_P ) ;
            if( POOP ) return ;
        }
    
        _IO_
    
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        {
            flagsT flags = flSTACKc_DOnOTsERIALIZE|flSTACKc_ALLOWmULTIPLEuNSERIALIZED ;
            if( F(flagsP) & flGETsADAMsTATES_FIFO ) flags |= flSTACKc_FIFO ;
            ether( tinP , pStk_pSadam_P , TAG( TAGiDnULL ) , flags ) ;
        }
    
        if( pStk_pSadam_P )
        {
            ZE( stackC* , pStkKey ) ;
            ether( tinP , pStkKey  , TAG( TAGiDnULL ) , flSTACKc_BLOB|flSTACKc_DOnOTsERIALIZE|flSTACKc_ALLOWmULTIPLEuNSERIALIZED , CBtABsORTkEY ) ;
            {
                countT cFlavors = swSadam.cFlavorsF( tinP ) ;
                for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
                {
                    cLever = swSadam.leverF( tinP , idf ) ;
                    sadamC& sad = *(sadamC*)&(countT&)swSadam ;
                    featuresS& features = *(featuresS*)&(const featuresS&)sad ;
    
                    pStkKey->sinkF( tinP , countTC() , (byteT*)&features.fc.idTabClass , flSTACKsINK_UNIQUE , subtractBlobs_sKeyF ) ;
                }
            }
        
            while( *pStkKey )
            {
                byteT pbKey[ CBtABsORTkEY ] ;
                byteT* pbTo = pbKey ;
                *pStkKey >> pbTo ;
                cLever = *(countT*)( pbKey + CBtABsORTkEY - sizeof( countT ) ) ; //CODEsYNCH: 00300cb 1440013 1440014
    
                *pStk_pSadam_P << (countT)&(countT&)swSadam ;
            }
            ether( tinP , pStkKey ) ;
        }
    
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
    
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116007.sadamsc.getf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116008.sadamsc.highlightiff BEGIN
#define DDNAME       "3func.36116008.sadamsc.highlightiff"
#define DDNUMB      (countT)0x36116008
#define IDFILE      (countT)0x14c9


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
it is legal (yes permitted) for app code to specify the countdown and period values so that an odd number of highlights occur
*/
/**/

// GRABBING PROTOCOL
// 

/*1*/voidT sadamsC::highlightIfF( tinS& tinP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
    
        countT cFlavors = swSadam.cFlavorsF( tinP ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swSadam.leverF( tinP , idf ) ;
            sadamC& sad = *(sadamC*)&(countT&)swSadam ;
            featuresS& features = *(featuresS*)&(const featuresS&)sad ;
    
            if( sad.pStrike && sad.pStrike->sc.pPaper && F(sad.pStrike->sc.flags) & flSTRIKEs_AWAKE )
            {
                if( !sad.pStrike->sc.flashCountdown )
                {
                    sad.pStrike->sc.flashPeriod = 0 ;
        
                    if( sad.pStrike->stqCmdFlash )
                    {
                        cmdFlashS cmd ;
                        sad.pStrike->stqCmdFlash >> (byteT*)&cmd ;
                        sad.pStrike->sc.flashCountdown = cmd.countdown ;
                        sad.pStrike->sc.flashPeriod    = cmd.period ;
                        sad.pStrike->sc.flagsFlash     = cmd.flags ;
                    }
                }
        
                if( sad.pStrike->sc.flashCountdown && sad.pStrike->sc.flashPeriod && !( sad.pStrike->sc.flashCountdown -- % sad.pStrike->sc.flashPeriod ) ) sad.pStrike->sc.pPaper->sadamHighlightF( tinP , sad , sad.pStrike->sc.flagsFlash ) ;
            }
    
            if( POOP ) POOPR
        }
    
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116008.sadamsc.highlightiff END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116009.sadamsc.rptf BEGIN
#define DDNAME       "3func.36116009.sadamsc.rptf"
#define DDNUMB      (countT)0x36116009
#define IDFILE      (countT)0x14ca


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT sadamsC::rptF( tinS& tinP , const osTextT* const postP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        countT cFlavors = swSadam.cFlavorsF( tinP ) ;
        TN( tSay , "" ) ; tSay = T(postP)+T(": ")+TF1(cFlavors)+T(" flavors\r\n") ;
        //LOGrAW( tSay ) ;
        for( countT idf = 1 ; idf <= cFlavors ; idf ++ )
        {
            cLever = swSadam.leverF( tinP , idf ) ;
            sadamC& sad = *(sadamC*)&(countT&)swSadam ;
            featuresS& features = *(featuresS*)&(const featuresS&)sad ;
    
            if( !sad.neverZe )
            {
                TN( tSay , "" ) ; tSay = T(postP)+T(" [idf,cLever,idAdam,postComment,neverZe,pswVolBody]: ")+TF1(idf)+T(" ")+TF1(cLever)+T(" ")+TF1(features.fc.idAdam)+T(" \"")+T(features.fc.postOldComment)+T(" ")+TF1(sad.neverZe)+T(" ")+TF1((countT)features.pswVolBody)+T("\"\r\n") ;
                LOGrAW( tSay ) ;
            }
    
            if( !features.fc.idAdam ) { BLAMMO ; }
        }
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.36116009.sadamsc.rptf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600a.sadamsc.deregisterf BEGIN
#define DDNAME       "3func.3611600a.sadamsc.deregisterf"
#define DDNUMB      (countT)0x3611600a
#define IDFILE      (countT)0x14cb


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/

/**/

/*1*/voidT sadamsC::deregisterF( tinS& tinP , const countT idAdamP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        if( !idAdamP ) { BLAMMO ; }
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        countT idf = swSadam.idSlotOfLeverF( tinP , idAdamP ) ;
        if( idf )
        {
            cLever = swSadam.leverF( tinP , idf ) ;
            sadamC* pd = (sadamC*)&(countT&)swSadam ;
            DELzOMBIE( pd ) ;  //MUST NOT USE freeF BECAUSE THIS LINE CAN CAUSE NESTED CALLS TO ME, WHICH CHANGE THE FLAVOR THAT A freeF CALL ON THE NEXT LINE WOULD HIT
        }
        swSadam.freeNullsF( tinP ) ;
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600a.sadamsc.deregisterf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600b.sadamsc.tabfreshf BEGIN
#define DDNAME       "3func.3611600b.sadamsc.tabfreshf"
#define DDNUMB      (countT)0x3611600b
#define IDFILE      (countT)0x14cc


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/voidT sadamsC::tabFreshF( tinS& tinP , etherC& etherP , const countT idTypeP , const sadamC* const pSadamJumpToP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        if( !( F(tinP.pAdamGlobal1->_pulpOldC_.flagsMode) & flPAPERmODEi_SUPPRESStABfRESH ) )
        {
            ZE( stackC* , pstk_pSadam ) ;
            getF( tinP , pstk_pSadam , idTypeP != ifcIDtYPEtABfRESH_LEFT ? flGETsADAMsTATES_FIFO : flGETsADAMsTATES_null ) ;
            if( pstk_pSadam && *pstk_pSadam )
            {
                {
                    handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                    do
                    {
                        sadamC& sad = *(sadamC*)pstk_pSadam->downF( tinP , hWalk ) ;
                        featuresS& features = *(featuresS*)&(const featuresS&)sad ;
    
                        if( !sad.bAwakePresentF( tinP ) || !features.fc.idTabClass ) pstk_pSadam->extractF( 0 , tinP ) ;
                    }
                    while( ~hWalk ) ;
                }
    
                const countT idEvent = 1 + incv02AM( tinP.pAdamGlobal1->idEventSadamsLath ) ;
                if( *pstk_pSadam )
                {
                    ZE( boolT , bArmed ) ;
                    ZE( boolT , bInherit ) ;
                    ZE( boolT , bContinue ) ;
                    ZE( boolT , bFound ) ;
                    tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
                    for( countT idPass = 1 ; idPass <= 2 ; idPass ++ )
                    {
                        handleC hWalk( tinP , TAG( TAGiDnULL ) , ifcIDtYPEhANDLE_STACKwALK ) ;
                        do
                        {
                            sadamC* pSadam = (sadamC*)pstk_pSadam->downF( tinP , hWalk ) ;
                            //if( pSadam->pStrike && pSadam->pStrike->sc.pPaper->bShowF( tinP ) ) //U:: THIS LINE IS OBSOLETED BY bAwakePresentIF AND WRONG
                            {
                                switch( idPass )
                                {
                                    case 1 : //LOOK FOR INHERITED b TabWasHere; RESET ALL REDUNDANT
                                    {
                                        if( pSadam->features.fc.idTabClass && ( F(pSadam->flags) & flSADAMc_TABwAShERE || F(pSadam->flags) & flSADAMc_OWNtAB ) )
                                        {
                                            if( !bInherit ) bInherit = 1 ;
                                            else            pSadam->flags &= ~( F(flSADAMc_TABwAShERE) ) ; //CODEsYNC: DUPLICATED CODE 1020187 10301bf
                                        }
                                        break ;
                                    }
                                    case 2 : 
                                    {
                                        switch( idTypeP )
                                        {
                                            case ifcIDtYPEtABfRESH_FRESH :
                                            {
                                                if( pSadam->features.fc.idTabClass )
                                                {
                                                    if( !bInherit || ( F(pSadam->flags) & flSADAMc_TABwAShERE || F(pSadam->flags) & flSADAMc_OWNtAB ) )
                                                    {
                                                        bFound = 1 ;
                                                        pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABaRRIVING , idEvent , 0 , 0 ) ; //RETURN CODE IS INTENTIONALLY IGNORED
                                                        break ;
                                                    }
                                                }
                                                break ;
                                            }
                                            case ifcIDtYPEtABfRESH_JUMP :
                                            {
                                                     if( pSadam == pSadamJumpToP            ) pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABaRRIVING , idEvent , 0 , 0 ) ;
                                                else if( F(pSadam->flags) & flSADAMc_OWNtAB ) pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABlEAVING  , idEvent , 0 , 0 ) ;
                                                break ;
                                            }
                                            case ifcIDtYPEtABfRESH_RIGHT :
                                            case ifcIDtYPEtABfRESH_LEFT :
                                            {
                                                if( pSadam->features.fc.idTabClass )
                                                {
                                                    if( !bInherit )
                                                    {
                                                        bFound = 1 ;
                                                        pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABaRRIVING , idEvent , 0 , 0 ) ;
                                                    }
                                                    else if( bArmed )
                                                    {
                                                        bArmed = 0 ;
                                                        bFound = 1 ;
                                                        pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABaRRIVING , idEvent , 0 , 0 ) ;
                                                    }
                                                    else if( F(pSadam->flags) & flSADAMc_OWNtAB )
                                                    {
                                                        pSadam->doF( tinP , etherP , ifcIDtYPEsTROKEcALLbACK_TABlEAVING , idEvent , 0 , 0 ) ;
                                                        bArmed = 1 ;
                                                    }
                                                }
                                                break ;
                                            }
                                        }
            
                                        break ;
                                    }
                                }
                            }
                            
                            if( !hWalk )
                            {
                                if( !bFound && bArmed ) bContinue = 1 ;
                                else                    break ;
                            }
                        }
                        while( bContinue || ( ~hWalk && !bFound ) ) ;
                    }
                    tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
                }
            }
            etherP( tinP , pstk_pSadam ) ;
        }
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600b.sadamsc.tabfreshf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600c.sadamsc.tabjumpf BEGIN
#define DDNAME       "3func.3611600c.sadamsc.tabjumpf"
#define DDNUMB      (countT)0x3611600c
#define IDFILE      (countT)0x14cd


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//


/*
*/
/**/

/*1*/voidT sadamsC::tabJumpF( tinS& tinP , etherC& etherP , const countT idAdamP )/*1*/
{
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        IFbEcAREFUL
        {
            if( POOP ) return ;
            __Z( idAdamP ) ;
            if( POOP ) return ;
        }
    
        _IO_
    
        tinP.pAdamGlobal5->frPaper.grab.grabF( tinP , TAG( TAGiDnULL ) ) ;
        ZE( sadamC* , pSadam ) ;
        if( swSadam.idSlotOfLeverF( tinP , idAdamP ) )
        {
            cLever = idAdamP ;
            pSadam = (sadamC*)&(countT&)swSadam ;
        }
    
        if( pSadam ) tabFreshF( tinP , etherP , ifcIDtYPEtABfRESH_JUMP , pSadam ) ;
        tinP.pAdamGlobal5->frPaper.grab.ungrabF( tinP ) ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600c.sadamsc.tabjumpf END
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600e.sadamsc.psadamf BEGIN
#define DDNAME       "3func.3611600e.sadamsc.psadamf"
#define DDNUMB      (countT)0x3611600e
#define IDFILE      (countT)0x14ce


//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/

/*1*/sadamC* sadamsC::pSadamF( tinS& tinP , const countT idAdamP , const handleC* const phCloneP )/*1*/
{
    ZE( sadamC* , pSadam ) ;
    countT c_this = (countT)this ; //U::EDIT CODE TO REMOVE THE NEED FOR THIS (DESTROY WINDOW EARLIER OR PURGE paperOldC BEFORE DT *this
    if( c_this )
    {
        SCOOP
        IFbEcAREFUL
        {
            if( POOP ) return 0 ;
            __( !cLocked == !!phCloneP ) ; // WHEN LOCKED, MUST SPECIFY CLONE ; WHEN NOT LOCKED, CANNOT SPECIFY CLONE
            if( POOP ) return 0 ;
        }
    
        switchC* pswSadam = phCloneP
            ? (switchC*)phCloneP->osF( ifcIDtYPEhANDLE_sadamsC )
            : &swSadam
        ;
    
        if( pswSadam->idSlotOfLeverF( tinP , idAdamP ) )
        {
            cLever = idAdamP ;
            sadamC* pSadad = (sadamC*)&(countT&)*pswSadam ;
        }
    }
    return pSadam ;
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
//SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.36116* : 3func.3611600e.sadamsc.psadamf END
