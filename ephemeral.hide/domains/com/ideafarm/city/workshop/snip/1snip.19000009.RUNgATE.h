
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005000c.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*//*RUNgATE*//*1*/
batonC baton( tinP , TAG( TAGiDnULL ) , T("0100001") ) ;
//U::USE A napkinC OBJECT TO TEST FOR ALONENESS
if( etThread )
{
    etThread = 0  ;
    etThread.strokeF( tinP , T("Another 0100001 appears to be alive on this computer.  Only one is allowed.") ) ;
}
else
{
    //etThread.osThreadSwitchingDesireF( tinP , ifcTHREADpRIORITY_RUSH ) ;
    etThread.paperTitleF( tinP , T("IdeaFarm " "(tm) City: see http://www.ideafarm.com for instructions and assistance") ) ;
    tinP.flagsThreadMode1 |= flTHREADmODE1_SHOWpROGRESS ;

    etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 1 of 31") ) ;
    /*U: HOSTlOG( etThread , "gate step 1" ) ; */
    if( etThread ) ifcGATEeRROR( 1 )
    else
    {
        etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 2 of 31") ) ;
        ZE( strokeS* , psttHome ) ;
        countT cbFree = etThread.diskChooseSiteF( tinP , psttHome , T("ideafarm") ) ;
        if( etThread ) ifcGATEeRROR( 2 )
        else
        {
            etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+T("step 2 note (1): \"")+T(psttHome)+T("\"\r\n")+S2(0,scOld_SYSmARK) ) ;

            etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 3 of 31") ) ;
            if( cbFree < 0x800000 )
            {
                textC tWarn = T("step 3 note (2): only ")+TF1(cbFree)+T(" bytes") ;
                /*U: HOSTlOG( etThread , tWarn ) ; */
                etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+tWarn+T("\r\n")+S2(0,scOld_SYSmARK) ) ;
            }

            etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 4 of 31") ) ;
            etThread.boxPourF( tinP , T(WWWiDEAFARMcOM) , T("///ideafarm/ephemeral/domains/com/ideafarm/city/data/new/") , T("///ideafarm/ephemeral/domains/com/ideafarm/city/data/out/") , 0x100000 , CbOXpOURmAX ) ;
            if( etThread ) ifcGATEeRROR( 4 )
            else        
            {
                etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 5 of 31") ) ;
                ZE( strokeS* , psttLevel ) ;
                TNCID ;
                etThread.boxGetShadow::20141115@1937::MIGRATE:TO:USE:SETTINGS.BIT.TREE::SettingF( tinP , psttLevel , T("///ideafarm/ephemeral/domains/com/ideafarm/city/settings/")+tCid+T("/reliability") , T("7use") , T("1build\r\n2play\r\n3check\r\n4batter\r\n5useok\r\n6usebetter\r\n7use") ) ; ___( psttLevel ) ;
                if( etThread ) ifcGATEeRROR( 5 )
                else
                {
                    etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 6 of 31") ) ;
                    refreshFilesF( tinP , etThread , psttLevel ) ;
                    if( etThread ) ifcGATEeRROR( 6 )
                    else
                    {
                        etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 7 of 31") ) ;
                        hoverC hoverLevel( tinP , etThread , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/")+T(psttLevel)+T("/") ) ;
                        if( etThread ) ifcGATEeRROR( 7 )
                        else
                        {
                            etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 8 of 31") ) ;
                            ZE( countT , hDll ) ;
                            etThread.dllOpenF( tinP , hDll , T("///ideafarm/ephemeral/domains/com/ideafarm/city/park/")+T(psttLevel)+T("/ideafarm.51000400.ipdos-wd") ) ;
                            if( etThread ) ifcGATEeRROR( 8 )
                            else
                            {
                                etThread.strokeF( tinP , T("")+S2(saOLD_EDITeRASEbACKtOmARK,scOld_EDIT)+S2(0,scOld_SYSmARK)+T("step 9 of 31") ) ;
                                ZE( mainFT , pMainF ) ;
                                etThread.dllEntryF( tinP , pMainF , hDll , T("mainF") ) ;
                                if( etThread ) ifcGATEeRROR( 9 )
                                else
                                {
                                    mainS main( tinP , ether , etThread , T("cid ")+tCid+T(" level ")+T(psttLevel) ) ;
                                    if( pMainF ) (*pMainF)( &main ) ;
                                }
                            }
                        }
                    }
                }
                etThread.delF( tinP , psttLevel ) ;
            }
        }
        etThread.delF( tinP , psttHome ) ;
    }
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

