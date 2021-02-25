
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.0050001.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*code to get file information*//*1*/

        if( pInfoFileP )
        {
            #ifdef __OS2__

                pInfoFileP->flags               = fileAttrIfFromOsIF( tinP , info.attrFile ) ;
                pInfoFileP->cbUsed              = info.cbFile ;
                pInfoFileP->cbUsedHigh          = 0 ;
                pInfoFileP->cbAllocated         = info.cbFileAlloc ;
                pInfoFileP->cbAllocatedHigh     = 0 ;

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeCreated1 , pInfoFileP->timeCreated2 ,
                    info.fdateCreation.year + 1979 , info.fdateCreation.month - 1 ,
                    info.fdateCreation.day - 1 , info.ftimeCreation.hours ,
                    info.ftimeCreation.minutes , info.ftimeCreation.twosecs * 2 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeWritten1 , pInfoFileP->timeWritten2 ,
                                   info.fdateLastWrite.year + 1979 , info.fdateLastWrite.month - 1 ,
                                   info.fdateLastWrite.day - 1 , info.ftimeLastWrite.hours ,
                                   info.ftimeLastWrite.minutes , info.ftimeLastWrite.twosecs * 2 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeAccessed1 , pInfoFileP->timeAccessed2 ,
                                   info.fdateLastAccess.year + 1979 , info.fdateLastAccess.month - 1 ,
                                   info.fdateLastAccess.day - 1 , info.ftimeLastAccess.hours ,
                                   info.ftimeLastAccess.minutes , info.ftimeLastAccess.twosecs * 2 , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc) ;

            #elif defined( __NT__ )

                pInfoFileP->flags               = fileAttrIfFromOsIF( tinP , info.dwFileAttributes ) ;
                pInfoFileP->cbUsed              = info.nFileSizeLow ;
                pInfoFileP->cbUsedHigh          = info.nFileSizeHigh ;
                pInfoFileP->cbAllocated         = - 1 ;
                pInfoFileP->cbAllocatedHigh     = - 1 ;

                SYSTEMTIME infoC ;
                SYSTEMTIME infoW ;
                SYSTEMTIME infoA ;

                BOS( WHATgbo , BOSoK , FileTimeToSystemTime( &info.ftCreationTime   , &infoC ) )
                BOSpOOP

                BOS( WHATgbo , BOSoK , FileTimeToSystemTime( &info.ftLastWriteTime  , &infoW ) )
                BOSpOOP

                BOS( WHATgbo , BOSoK , FileTimeToSystemTime( &info.ftLastAccessTime , &infoA ) )
                BOSpOOP

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeCreated1 , pInfoFileP->timeCreated2 ,
                    infoC.wYear - 1 , infoC.wMonth - 1 ,
                    infoC.wDay - 1 , infoC.wHour ,
                    infoC.wMinute , infoC.wSecond , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeWritten1 , pInfoFileP->timeWritten2 ,
                    infoW.wYear - 1 , infoW.wMonth - 1 ,
                    infoW.wDay - 1 , infoW.wHour ,
                    infoW.wMinute , infoW.wSecond , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

                osTimeFromOldTimeIF( tinP , pInfoFileP->timeAccessed1 , pInfoFileP->timeAccessed2 ,
                    infoA.wYear - 1 , infoA.wMonth - 1 ,
                    infoA.wDay - 1 , infoA.wHour ,
                    infoA.wMinute , infoA.wSecond , 0 , flOStIMEfROMoLDtIME_OLDtIMEiSutc ) ;

            #endif
        }


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

