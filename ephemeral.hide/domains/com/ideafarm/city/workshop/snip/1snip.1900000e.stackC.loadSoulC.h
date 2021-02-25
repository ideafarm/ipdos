
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.0050011.1.0.html\"\>definition\</A\>
obsolete: i do not remove the items in soulP
edited to remove the plate from soulP in order to make windowOldC snap and restore simple
*/
/**/
/*1*//*stackC:: load from soulP*//*1*/

                                                                                            #if defined( STACKcLOADsOULc_SINK )
voidT stackC::sinkF( tinS& tinP , soulC& soulP , const flagsT flagsP , ifc4FT pSubtractFP , const countT subtractionParmP )
                                                                                            #else
baseSoilXxxxC& stackC::operator <<( soulC& soulP )
                                                                                            #endif
{
                                                                                            #if !defined( STACKcLOADsOULc_SINK )
    TINSL
                                                                                            #endif

    IFbEcAREFUL
    {
                                                                                            #if !defined( STACKcLOADsOULc_SINK )
        if( third ) return *this ;
                                                                                            #else
        if( third ) return ;
                                                                                            #endif
    }

    _INsTACKc_

    ZE( countT , cbi ) ;
    //const byteT* const pbi = soulP.pbFieldF( tinP , countTC() , countTC() , cbi , 1 ) ;
    ZE( byteT* , pbi ) ;
    if( idType != ifcSTACKtYPE_PTR_strokeS )
    {
        soulP.shiftRightF( tinP , pbi , cbi , ifcIDtYPEsOULiTEM_byteTptr ) ;
        __Z( pbi ) ;
        __Z( cbi ) ;
    
        __( cbi < 5 * sizeof( countT ) ) ;
        //APPARENTLY OBSOLETE; NOT ANALYZED; COMMENTED OUT TO MAKE CHECKPOINTING WORK
        //__( cbi < 1 + 5 * sizeof( countT ) ) ;
        //pbi ++ ;
        //cbi -- ;
    }

    if( !third )
    {
        const byteT* pbc = pbi ;
        const byteT* const pbe = pbi + cbi ;

        ZE( countT , cPlatesi ) ;
        if( idType != ifcSTACKtYPE_PTR_strokeS )
        {
            flagsT flagsi      = *(flagsT*)pbc              ; pbc += sizeof( flagsT ) ;
                   cPlatesi    = *(countT*)pbc              ; pbc += sizeof( countT ) ;
            countT idTypei     = *(countT*)pbc              ; pbc += sizeof( countT ) ;
            countT cbDatai     = *(countT*)pbc              ; pbc += sizeof( countT ) ;
            flagsT flagsStatei = *(flagsT*)pbc              ; pbc += sizeof( flagsT ) ; /*flagsStatei FROM soulP IS IGNORED */ //115005c 0050011 0010121: VERIFY THAT THIS MAKES SENSE FOR NEWLY DEFINED STATE FLAGS
            /*flagsStatei FROM soulP IS IGNORED */ //115005c 0050011 0010121: VERIFY THAT THIS MAKES SENSE FOR NEWLY DEFINED STATE FLAGS

            //THE NEXT LINE USED cbData, BUT THIS CANNOT BE USED BECAUSE WILL BE 0 FOR VARYING LENGTH BLOB TYPE
            //WAS EDITED TO MAKE VARYING LENGTH BLOBS WORK
            //CONJ: THIS BROKE THE soulC CONSTRUTOR OVERLOAD
            if( !flags )                       // (IF WO'TH CALL TO ME) soulC OBJECT IS A PARAMETER TO THE CONSTRUCTOR
            {
                __( idType ) ;
                *(flagsT*)&flags  = flagsi ;
                *(countT*)&idType = idTypei ;
                *(countT*)&cbData = cbDatai ;
            }
            else                                // (IF WO'TH CALL TO ME) soulC OBJECT IS FROM A FILE WHOSE NAME IS A PARAMETER TO THE CONSTRUCTOR
            {
                __( flagsi  - flags  ) ;
                __( idTypei - idType ) ;
                __( cbDatai - cbData ) ;
            }
        }

        if( !third )
        {
            switch( idType )
            {
                case ifcSTACKtYPE_countT    :
                case ifcSTACKtYPE_sCountT   :
                case ifcSTACKtYPE_measureT  :
                case ifcSTACKtYPE_nicNameC :
                //U::case ifcSTACKtYPE_handleC :
                case ifcSTACKtYPE_timeS :
                case ifcSTACKtYPE_PTR_nicNameC :
                case ifcSTACKtYPE_PTR_count2S :
                case ifcSTACKtYPE_PTR_count3S :
                case ifcSTACKtYPE_PTR_count4S :
                case ifcSTACKtYPE_PTR_count5S :
                case ifcSTACKtYPE_PTR_count6S :
                case ifcSTACKtYPE_PTR_count7S :
                case ifcSTACKtYPE_PTR_count8S :
                {
                    __( ( pbe - pbc ) % sizeof( countT ) ) ;
                    if( !third )
                    {
                        countT cci = ( pbe - pbc ) / sizeof( countT ) ;
                        countT* pci = (countT*)pbc ;
                        countT* const pce = pci + cci ;    
    
                        if( idType == ifcSTACKtYPE_countT || idType == ifcSTACKtYPE_sCountT || idType == ifcSTACKtYPE_measureT )
                        {
                            __( cci - cPlatesi ) ;
                            while( pci < pce )
                            {
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                                sinkF( tinP , countTC() , *pci , flagsP , pSubtractFP , subtractionParmP ) ;
                                                                                            #else
                                operator <<( *pci ) ;
                                                                                            #endif
                                pci ++ ;
                            }
                        }
                        else if( idType == ifcSTACKtYPE_nicNameC )
                        {
                            countT cToDo = processGlobal1I.cb_nicNameC_ / sizeof( countT ) ;
                            __( cci - cPlatesi * cToDo ) ;
                            while( pci < pce )
                            {
                                nicNameC nn ;
                                for( countT off2 = 0 ; off2 < cToDo ; off2 ++ )
                                {
                                    nn.pcId[ off2 ] = *pci ; pci ++ ;
                                }
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                                sinkF( tinP , countTC() , nn , flagsP , pSubtractFP , subtractionParmP ) ;
                                                                                            #else
                                operator <<( nn ) ;
                                                                                            #endif
                            }
                        }
                        //U:: else if( idType == ifcSTACKtYPE_handleC )
                        //U:: {
                        //U::     countT cToDo = SIZEOF_handleC / sizeof( countT ) ;
                        //U::     __( cci - cPlatesi * cToDo ) ;
                        //U::     while( pci < pce )
                        //U::     {
                        //U::         handleC handle( tinP ) ;
                        //U::         for( countT off2 = 0 ; off2 < cToDo ; off2 ++ )
                        //U::             ((countT*)&handle)[ off2 ] = *pci ; pci ++ ; //CODE SYNC: 0050011 0030078 0030050: SIZEOF_handleC MUST BE MULTIPLE OF sizeof( countT )
                        //U::                                                                     #if defined( STACKcLOADsOULc_SINK )
                        //U::         sinkF( tinP , countTC() , handle , flagsP , pSubtractFP , subtractionParmP ) ;
                        //U::                                                                     #else
                        //U::         operator <<( handle ) ;
                        //U::                                                                     #endif
                        //U::     }
                        //U:: }
                        else if( idType == ifcSTACKtYPE_timeS )
                        {
                            countT cToDo = sizeof( timeS ) / sizeof( countT ) ;
                            __( cci - cPlatesi * cToDo ) ;
                            timeS tt ;
                            tt.time1 = *pci ; pci ++ ;
                            tt.time2 = *pci ; pci ++ ;
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                            sinkF( tinP , countTC() , tt , flagsP , pSubtractFP , subtractionParmP ) ;
                                                                                            #else
                            operator <<( tt ) ;
                                                                                            #endif
                        }
                        else if( idType == ifcSTACKtYPE_PTR_nicNameC )
                        {
                            countT cToDo = processGlobal1I.cb_nicNameC_ / sizeof( countT ) ;
                            __( cci - cPlatesi * cToDo ) ;
                            while( pci < pce )
                            {
                                ZE( nicNameC* , pNicName ) ;
                                third.newF( tinP , LF , pNicName ) ; ___BITScT( pNicName , 0x1291 ) ;
                                if( pNicName )
                                {
                                    for( countT off2 = 0 ; off2 < cToDo ; off2 ++ )
                                    {
                                        pNicName->pcId[ off2 ] = *pci ; pci ++ ;
                                    }
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                                    ZE( countT , idSlot ) ;
                                    sinkF( tinP , idSlot , pNicName , flagsP , pSubtractFP , subtractionParmP ) ;
                                    if( !idSlot ) third.delF( tinP , pNicName ) ;
                                                                                            #else
                                    operator <<( pNicName ) ;
                                                                                            #endif
                                }
                            }
                        }
                        else if( idType >= ifcSTACKtYPE_PTR_count2S && idType <= ifcSTACKtYPE_PTR_count8S )
                        {
                            countT cToDo = idType + 2 - ifcSTACKtYPE_PTR_count2S ;
                            __( cci - cPlatesi * cToDo ) ;
    
                            countT idTypeSave = idType ;
                            *(countT*)&idType = ifcSTACKtYPE_countT ; //ASSUME: NO ACCESS BY OTHER THREADS WHILE IN ctF
                            while( pci < pce )
                            {
                                ZE( countT* , pcv ) ;
                                third.newF( tinP , LF , pcv , cToDo ) ; ___BITScT( pcv , 0x1290 ) ;
                                if( pcv )
                                {
                                    for( countT off2 = 0 ; off2 < cToDo ; off2 ++ )
                                    {
                                        pcv[ off2 ] = *pci ; pci ++ ;
                                    }
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                                    ZE( countT , idSlot ) ;
                                    sinkF( tinP , idSlot , (countT)pcv , flagsP , pSubtractFP , subtractionParmP ) ;
                                    if( !idSlot ) third.delF( tinP , pcv ) ;
                                                                                            #else
                                    operator <<( (countT)pcv ) ;
                                                                                            #endif
                                }
                            }
                            *(countT*)&idType = idTypeSave ;
                        }
                        else __1
                    }
    
                    break ;
                }
                case ifcSTACKtYPE_BLOB :
                {
                    while( pbc < pbe )
                    {
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                        sinkF( tinP , countTC() , pbc , flagsP , pSubtractFP , subtractionParmP ) ;
                                                                                            #else
                        operator <<( pbc ) ;
                                                                                            #endif
                        pbc += cbData ? cbData : sizeof( countT ) + *(countT*)pbc ;
                    }
    
                    break ;
                }
                case ifcSTACKtYPE_PTR_strokeS :
                {
                    etherC* pEther = third.third_pEtherContainsMe_F() ;
                    __Z( pEther ) ;
                    if( pEther )
                    {
                        ZE( soulC* , psEnv ) ;
                        (*pEther)( tinP , psEnv , TAG( TAGiDnULL ) ) ;
                        if( psEnv )
                        {
                            soulP >> *psEnv ;

                            while( (countT)*psEnv )
                            {
                                ZE( strokeS* , psttw ) ;
                                *psEnv >> psttw ; //*psEnv CONTAINS EXPORTABLE DATA; psttw WILL BE NONEXPORTABLE (USES LOCAL POINTERS IN sc_cADAM)
                                *this << psttw ;
                            }
                        }
                        (*pEther)( tinP , psEnv ) ;
                    }
        
                    break ;
                }
                case ifcSTACKtYPE_PTR_soulC :
                {
                    while( pbc < pbe )            
                    {
                        const byteT* const pbs = pbc ;
                        countT cbs = sizeof( countT ) + *(countT*)pbc ;
                        pbc += cbs ;
    
                        soulC* pSoul = new( 0 , tinP , LF ) soulC( tinP , TAG( TAGiDnULL ) , pbs , flSOUL_null , 0 , 0 , flSOULsHIFTlEFTmODE_UNPACKsOULiMAGE ) ; ___BITScT( pSoul , 0x128e ) ;
                        if( pSoul )
                        {
                                                                                            #if defined( STACKcLOADsOULc_SINK )
                            ZE( countT , idSlot ) ;
                            sinkF( tinP , idSlot , pSoul , flagsP , pSubtractFP , subtractionParmP ) ;
                            if( !idSlot ) { DEL( pSoul ) ; }
                                                                                            #else
                            operator <<( pSoul ) ;
                                                                                            #endif
                        }
                    }
    
                    break ;
                }
                default : __1
            }
                                                                                            #if !defined( STACKcLOADsOULc_SINK )
            flagsState |= flSTACKsTATE_SHIFTlEFTuSED ;
                                                                                            #endif
        }
    }

    _OUTsTACKc_
                                                                                            #if !defined( STACKcLOADsOULc_SINK )
    return *this ;
                                                                                            #endif
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

