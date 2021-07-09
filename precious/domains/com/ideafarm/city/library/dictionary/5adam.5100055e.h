
//
// Copyright (c) 1992-2021 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ipdos for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 29 years.
// Respecting the rights of other people is an important part of empowering one another.
//


//}
//    return 1 ;
//    BLAMMO ;
//    //LOGrAW( "@@@@@@@@@@@@@@@@@ MATH ERROR @@@@@@@@@@@@@@@@@@@@@@\r\n" ) ;
//    TINSL
//{
//extern "C" int matherr( struct exception *err )
//U::GET THIS TO WORK

TASK0PROTO( tmSetFloorUsersF ) ;
TASK0PROTO( tmRestoreTabbingF ) ;

voidT filterGrabMouseF( tinS& tinP , const countT cArgP ) ;
voidT popButtonsF(     tinS& tinP , etherC& etherP , const countT cArgP ) ;
voidT replaceButtonsF( tinS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
voidT pushButtonsF(    tinS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttButtonsP , const countT csttButtonsMinP = 0 , const strokeS* const psttHintP = 0 , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
countT clockPhraseF( tinS& tinP , etherC& etherP , strokeS*& psttP , vTextC** const ppvtClockP , const countT cpvtClockP , const measureT rShrinkP = 1.0 / 16.0 ) ;
voidT setClockHandsF( tinS& tinP , etherC& etherP , vTextC** ppvtClockP , const countT cpvtClockP , vTextC* const pvtHintP , countT time1P , sCountT time2P , const measureT rReachP , const strokeS* const psttLabelP = 0 , countT idWothP = 0 ) ;
voidT doDownF( tinS& tinP , etherC& etherP , const countT cArgP ) ;
voidT brF( tinS& tinP , etherC& etherP , treeC& treeP , byteT*& pbContentP , countT& cbContentP , const byteT* const pbEndP , const flagsT flagsP , const strokeS* const psttP ) ;
voidT loadContentF( tinS& tinP , etherC& etherP , const countT cArgP , byteT*& pbContentP , countT& cbContentP ) ;
voidT resizeIfF( tinS& tinP , countT cArgP , etherC& etherP ) ;
voidT freshViewOfBranchesF( tinS& tinP , etherC& etherP , countT cArgP ) ;
voidT setTmShortF( tinS& tinP , textC& tP ) ;
voidT setTmLongF( tinS& tinP , textC& tP ) ;
voidT setFullScreenConsoleF( tinS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setConsoleF( tinS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setBannerF( tinS& tinP , etherC& etherP , textC& tP , const countT cArgP ) ;
voidT setFloorF( tinS& tinP , etherC& etherP , const countT cArgP , countT idFloorP , const flagsT flagsP = flSETfLOOR_null ) ;
voidT napF( tinS& tinP , etherC& etherP , const countT time1P ) ;
countT squeezeF( tinS& tinP , etherC& etherP , strokeS*& psttOutP , const strokeS* const psttInP , const countT csttMinP ) ;
voidT vtButtonsF( tinS& tinP , etherC& etherP , const countT cArgP ) ;
voidT hintEyeF( tinS& tinP , etherC& etherP , const countT cArgP ) ;
voidT hintF( tinS& tinP , etherC& etherP , const countT cArgP , const strokeS* const psttP , const countT time1P = TOCK * 8 , const flagsT flagsP = flHINT_null ) ;
voidT purgeSpeechF( tinS& tinP , etherC& etherP , const countT cArgP ) ;
voidT speakF( tinS& tinP , etherC& etherP , stackC& stSpeechP , const strokeS* const psttP , const strokeS* const psttHintP = 0 , const countT timeHint1P = 0 ) ;
voidT speechEpilogF( tinS& tinP , etherC& etherP , const countT cArgP ) ;

voidT gameShownCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT readTheseInstructionsCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt2bigitCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vtToolStateCapsLockCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT vt1tutorialCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
boolT vtGraphSpeedCBF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtViewCBF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtTestCBF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
boolT vtEyeCBF( tinS& tinP , etherC& etherP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , sadamStateOldS& sadamStateP ) ;
voidT animateSpeechCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateMonitorPoolNamesCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedMinMaxCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateGraphSpeedCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateTestCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote5CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote4CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote3CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateEyeNote1CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateHoverPadCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockBannerCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateClockCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateViewsCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT animateCBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
voidT buHoverPadCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buViewCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockLaunchCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerLabelCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockBannerCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClockCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltLeftCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeTiltRightCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimDownCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimUpCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimLeftCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimRightCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeAimTiltResetCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveUpCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveDownCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveNorthCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveSouthCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveEastCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveWestCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeMoveResetCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEscapeCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEyeEnterCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbRightCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbLeftCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbUpCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buClimbDownCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT prPromptCBF(   tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSubscribeCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buLoginKeyCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buGateCBF(      tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buCreditsCBF(   tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSermonCBF(    tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buIntroCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buStartGameCBF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buConsoleCBF(   tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buTestCBF(   tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buSecureCBF(   tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFcCBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFbCBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buFaCBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF9CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF8CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF7CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF6CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF5CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF4CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF3CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF2CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buF1CBF(        tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buEscapeCBF(    tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buDisagreeCBF(  tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buAgreeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT buContent1bigitfUCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitEeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitDeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitCeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitBeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitAyCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitNiCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitTaCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitVeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitSeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitfICBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitFoCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitReCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitOoCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitWoCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;
voidT buContent1bigitZeCBF(     tinS& tinP , etherC& etherP , const countT cArgP , const countT idTypeCallP , const countT idEventP , const countT* const pcNotesP , const flagsT flTcStateNewP , const flagsT flTcStateOldP , const sadamStateOldS& sadamStateP ) ;

voidT loadSpeechF( tinS& tinP , etherC& etherP , const countT cArgP , const countT idSpeechP ) ;

;
}
    friend voidT animateEyeNote5CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote4CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote3CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;
    friend voidT animateEyeNote1CBF( tinS& tinP , etherC& etherP , const countT idCycleP , const countT cArgP ) ;

    paramS( tinS& tinP , etherC& etherP ) ;
    ~paramS( voidT ) ;

    countT       offLoginSecret ;
    strokeS*     ppsttLoginSecret[ 8 ] ; //CS: CODEsYNC 4650104.h 4650104.h
    tcButtonC    buLoginKey8 ;           //CS: CODEsYNC 4650104.h 4650104.h
    tcButtonC    buLoginKey7 ;
    tcButtonC    buLoginKey6 ;
    tcButtonC    buLoginKey5 ;
    tcButtonC    buLoginKey4 ;
    tcButtonC    buLoginKey3 ;
    tcButtonC    buLoginKey2 ;
    tcButtonC    buLoginKey1 ;
    tcPromptC    prPrompt ;
    tcButtonC    buStartGame ;
    tcButtonC    buContent1bigitfU ;
    tcButtonC    buContent1bigitEe ;
    tcButtonC    buContent1bigitDe ;
    tcButtonC    buContent1bigitCe ;
    tcButtonC    buContent1bigitBe ;
    tcButtonC    buContent1bigitAy ;
    tcButtonC    buContent1bigitNi ;
    tcButtonC    buContent1bigitTa ;
    tcButtonC    buContent1bigitVe ;
    tcButtonC    buContent1bigitSe ;
    tcButtonC    buContent1bigitfI ;
    tcButtonC    buContent1bigitFo ;
    tcButtonC    buContent1bigitRe ;
    tcButtonC    buContent1bigitOo ;
    tcButtonC    buContent1bigitWo ;
    tcButtonC    buContent1bigitZe ;
    tcButtonC    buHoverPad ;
    tcButtonC    buClockBannerLabel ;
    tcButtonC    buClockLaunch ;
    tcButtonC    buSubscribe ;
    tcButtonC    buClockBanner ;
    tcButtonC    buClock ;
    tcButtonC    buEyeTiltLeft ;
    tcButtonC    buEyeTiltRight ;
    tcButtonC    buEyeAimDown ;
    tcButtonC    buEyeAimUp ;
    tcButtonC    buEyeAimLeft ;
    tcButtonC    buEyeAimRight ;
    tcButtonC    buEyeAimTiltReset ;
    tcButtonC    buEyeMoveUp ;
    tcButtonC    buEyeMoveDown ;
    tcButtonC    buEyeMoveNorth ;
    tcButtonC    buEyeMoveSouth ;
    tcButtonC    buEyeMoveEast ;
    tcButtonC    buEyeMoveWest ;
    tcButtonC    buEyeMoveReset ;
    tcButtonC    buEyeEscape ;
    tcButtonC    buEyeEnter ;
    tcButtonC    buClimbRight ;
    tcButtonC    buClimbLeft ;
    tcButtonC    buClimbUp ;
    tcButtonC    buClimbDown ;
    tcButtonC    buDisagree ;
    tcButtonC    buAgree ;
    tcButtonC    buSermon ;
    tcButtonC    buCredits ;
    tcButtonC    buIntro ;
    tcButtonC    buGate ;
    tcButtonC    buConsole ;
    testesS      debug2 ;
    tcButtonC    buTest ;
    tcButtonC    buSecure ;
    testesS      debug1 ;
    tcButtonC    buFc;
    tcButtonC    buFb ;
    tcButtonC    buFa ;
    tcButtonC    buF9 ;
    tcButtonC    buF8 ;
    tcButtonC    buF7 ;
    tcButtonC    buF6 ;
    tcButtonC    buF5 ;
    tcButtonC    buF4 ;
    tcButtonC    buF3 ;
    tcButtonC    buF2 ;
    tcButtonC    buF1 ;
    tcButtonC    buEscape ;
    vTextC       vtToolStateCapsLock ;
    vTextC       vt2bigitHelp ;
    vTextC       vt2bigitName ;
    vTextC       vt2bigit ;
    vTextC       vtHoverPadAnimation ;
    vTextC       vtHoverPad ;
    vTextC       vt1tutorial ;
    vTextC       vtGraphSpeed ;
    vTextC       vtGraphSpeedMinMax ;
    vTextC       vtMonitorPoolNames ;
    vTextC       vtHintClockBanner ;
    vTextC       vtHintClock ;
    vTextC       vtView ;
    vTextC       vtEyeNote5 ;
    vTextC       vtEyeNote4 ;
    vTextC       vtEyeNote3 ;
    vTextC       vtEyeNote2 ;
    vTextC       vtEyeNote1 ;
    vTextC       vtEye ;
    vTextC       vtButtonsPad ;
    vTextC       vtButtons ;
    vTextC       vtHint ;
    vTextC       vtSlidesRemaining ;
    vTextC       vtSpeech ;
    vTextC       vtTest ;
    textC        tHoverPadDrag ;
    textC        tHoverPad ;
    textC        tHintDefault ;
    windowOldC&     win ;
    eyeOldC         eye ;
    stackC       stButtonList ;
    treeC        treeKt ;
    stackC       stSpeech ;
    batonC       bHoverPadDrag ;
    batonC       bOldViews ;
    tcButtonC**  pptcView ;
    vTextC*      ppvtClock[ 0xd ] ;
    vTextC*      ppvtClockBanner[ 0xa ] ;
    public :
    strokeS*     psttPromptValue ;
    private :
    strokeS*     psttHintEscape ;
    strokeS*     psttLabelRemaining ;
    measureT     rReachRemaining ;
    sCountT      timeGameErased2 ;
    sCountT      timeHintExpires2 ;
    countT       idEventViewSelectLath ;
    countT       timeGameErased1 ;
    countT       idView ;
    const countT cpvtClock ;
    const countT cpvtClockBanner ;
    countT       cvtView ;
    countT       cRight ;
    countT       cLeft ;
    countT       cUp ;
    countT       cDown ;
    countT       timeHintExpires1 ;
    countT       idSpeech ;
    countT       idSpeak ;
    measureT     zMoveMultiplier ;
    measureT     yMoveMultiplier ;
    measureT     xMoveMultiplier ;
    measureT     zMoveGrain ;
    measureT     yMoveGrain ;
    measureT     xMoveGrain ;
    measureT     zHullAt ;
    measureT     yHullAt ;
    measureT     xHullAt ;
    countT       offHullAimtTick ;
    countT       offHullAimvTick ;
    countT       offHullAimhTick ;
    countT       cHullAimtTicks ;
    countT       cHullAimvTicks ;
    countT       cHullAimhTicks ;
    countT       idFloor ;
    boolT        bQuitTmUsers ;
    boolT        bInside ;
    boolT        bEyeStarted ;
    boolT        bGameStarted ;
    boolT        bReadingInstructions ;
    boolT        b1tutorial ;
    boolT        bAnimating ;
    boolT        bBegin ;
    flagsT       flags ;
    etherC&      ether ;
{
struct paramS

;
}
    ~testesS( voidT ) ;
{
struct testesS
//U::

;
}
    buttonListS( tinS& tinP , etherC& etherP , const strokeS* const psttButtonsP , countT csttMinP , const strokeS* const psttHintP , const countT time1HintP = TOCK * 8 , const flagsT flagsHintP = flHINT_null ) ;
    buttonListS( voidT ) ;
    ~buttonListS( voidT ) ;

    public :

    flagsT flagsHint ;
    countT time1Hint ;
    strokeS* psttHint ;
    countT csttMin ;
    strokeS* psttButtons ;
{
struct buttonListS

//#define ZhULLaTiNIT (-256.0)
//#define YhULLaTiNIT (0.0)
//#define XhULLaTiNIT (0.0)
//#define ZhULLaTiNIT (-256.0)
//#define YhULLaTiNIT (128.0)
//#define XhULLaTiNIT (128.0)

#define ZhULLaTiNIT (-256.0)
#define YhULLaTiNIT (0.0)
#define XhULLaTiNIT (0.0)

#define CSTTmINbUTTONS  (0x20)
#define CSTTmINsPEAK  (0x10)
#define CSTTmINhINT  (0x20)

#define ifcIDsPEECH_REFUSAL                    0xa
#define ifcIDsPEECH_ACCEPTANCE                 0x9
#define ifcIDsPEECH_AGREEMENT                  0x8
#define ifcIDsPEECH_SERMON                     0x7
#define ifcIDsPEECH_CREDITS                    0x6
#define ifcIDsPEECH_INTRODUCTION               0x5
#define ifcIDsPEECH_FLOORdISCLOSURE            0x4
#define ifcIDsPEECH_FLOORsECRET                0x3
#define ifcIDsPEECH_FLOORuSERS                 0x2
#define ifcIDsPEECH_FLOORbANNER                0x1

#define ARGgET(cArgP) paramS& paramP = *(paramS*)cArgP ;

#define flSETfLOOR_ESCAPE           0xe00001ff
#define flSETfLOOR_null             0xe00000ff

#define flPARAM_EYEbUTTONSrENDERED  0xe00002ff
#define flPARAM_FULLsCREEN          0xe00001ff
#define flPARAM_null                0xe00000ff

#define flHINT_EVENiFfULLsCREEN     0xe00004ff
#define flHINT_TRACE                0xe00002ff
#define flHINT_IFdEFAULT            0xe00001ff
#define flHINT_null                 0xe00000ff

#define AIMtICKhORZbIASdEBUG 0
#define AIMtICKvERTbIASdEBUG 0

#define AIMtICKS 0x20

//U:: #define AIMgRAIN ( 1.0 / TUCK )
#define AIMgRAIN ( 1.0 / 16.0 )

#define ifcIDvIEW_max 2
#define ifcIDvIEW_HUGE 2
#define ifcIDvIEW_HOLLYWOOD 1
#define ifcIDvIEW_min 1

#define BR(flagSuffP,psttP) brF( tinP , etherP , paramP.treeKt , pbContentP , cbContentP , pbContentP + CBcONTENTaLLOC , flBRANCHs_##flagSuffP , psttP )
#define CBcONTENTaLLOC TOCK
#define SW { windowOldC* pRoot = windowOldC::getRefIF( tinP ) ; if( pRoot ) { pRoot->selectPaperF( tinP , ifcIDcMDpAPERsELECT_SETsHOW , ifcIDpAPER_NOTsHOW ) ; pRoot->letRefF() ; } }
#define PERIOD 0x20

#define ifcIDfLOOR_CONSOLE          0x5
#define ifcIDfLOOR_DISCLOSURE       0x4
#define ifcIDfLOOR_PROMPTfORsECRET  0x3
#define ifcIDfLOOR_USERS            0x2
#define ifcIDfLOOR_BANNER           0x1

/*1*//*header*//*1*/
/**/
*/
/*

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 29 years.
//
// Copyright (c) 1992-2021 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ipdos for permitted uses.
//

