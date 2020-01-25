
// IF MY PROCESS IS RUNNING UNDER LOGIN USER "SYSTEM" THEN I ASSUME THAT I AM A SERVICE AND START ACCORDINGLY
// ELSE I ASSUME THAT I AM STARTED BY A USER CLICKING THE Console ITEM IN THE START MENU, AND I OPEN A CONSOLE FOR THAT USER
//
// SERVICE: IF IDhOME IS 0 THEN I WILL START ALL HOMES THAT I FIND, AND IF I DO NOT FIND A HOME, I WILL CREATE AN EMPTY HOME 1 DIRECTORY ON THE SAME DRIVE THAT MY EXE FILE IS ON.
// CONSOLE: IF IDhOME IS 0 THEN I WILL START A CONSOLE FOR EACH HOME THAT I FIND.
// DRIVES ARE SEARCHED FROM 'z' TO 'a', AND IF MULTIPLE IMAGES FOR A HOME EXIST, ONLY THE WOTH IMAGE ENCOUNTERED WILL BE STARTED (THIS APPLIES TO BOTH SERVICE START AND CONSOLE START)
// I WILL ONLY START A MAXIMUM OF 01 HOMES

// CHANGE HISTORY:
// 20120928@0855: IF HOMES OTHER THAN 1 EXIST THEN DO NOT LAUNCH 1 (CONVENIENT WHEN THE COMPUTER IS USED FOR IPDOS CODE DEVELOPMENT)

#pragma disable_message ( 726 ) ;

#define NTDDI_VERSION NTDDI_WIN7
#define _WIN32_WINNT _WIN32_WINNT_WIN7

#include <windows.h>
#include <psapi.h>
#include <conio.h>
#include <stdio.h>

#define BLAMMO { logTimeGF( "service BLAMMO [__LINE__]: " ) ; logGF( __LINE__ ) ; logGF( "\r\n" ) ; int* pcb = 0 ; *pcb = 1 ; }

#define CBtOaLIGN(pbOrCbP)                                                                  \
                                                                                            \
    (                                                                                       \
        (unsigned int)(pbOrCbP) & ( sizeof( unsigned int ) - 1 )                            \
            ? sizeof( unsigned int ) - (unsigned int)(pbOrCbP) % sizeof( unsigned int )     \
            : 0                                                                             \
    )

struct homeDiskS
{
    char                ostDisk ;
    char                postIdHome[ 1 + 2 * sizeof( int ) ] ;
    PROCESS_INFORMATION process ;
}
;

homeDiskS             pTblHomeDisk[ 0x100 ] ;

int                   bQuit ;
int                   bShutdown ;
SERVICE_STATUS_HANDLE oshStatus ;
SERVICE_STATUS        status ;

//CS:CODEsYNC: service.cpp elves.cpp
int cNumaNodesAvailableF( void )
{
    int cNodes = 0 ;

    ULONG offNodeMax = 0 ;
    if( GetNumaHighestNodeNumber( &offNodeMax ) )
    {
        for( int offNode = 0 ; offNode <= offNodeMax ; offNode ++ )
        {
            ULONGLONG mask = 0 ;
            if( GetNumaNodeProcessorMask( 0 , &mask ) ) cNodes ++ ;
        }
    }

    return cNodes ;
}

int cHomesF( void )
{
    int cHomes = 0 ;
    for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
    {
        if( *pTblHomeDisk[ offo ].postIdHome ) cHomes ++ ;
    }

    return cHomes ;
}

int isBigitsF( const char* postP )
{
    int bBigits = 1 ;

    int cToDo = 2 * sizeof( int ) ;
    while( *postP && cToDo -- )
    {
        if
        (
            !(
                ( *postP >= '0' && *postP <= '9' )
                ||
                ( *postP >= 'a' && *postP <= 'f' )
            )
        )
        break ;

        postP ++ ;
    }

    if( *postP ) bBigits = 0 ;

    return bBigits ;
}

void logGF( int cP , const char* postLogP = 0 )
{
    char* postLogDefault = "c:\\tmp\\ideafarm.log.txt" ;

    FILE* pFile = fopen( postLogP ? postLogP : postLogDefault , "ab" ) ;
    if( pFile )
    {
        fprintf( pFile , "%x" , cP ) ;
        fclose( pFile ) ;
    }
}

void logGF( const char* postP , const char* postLogP = 0 )
{
    char* postLogDefault = "c:\\tmp\\ideafarm.log.txt" ;

    FILE* pFile = fopen( postLogP ? postLogP : postLogDefault , "ab" ) ;
    if( pFile )
    {
        fprintf( pFile , postP ) ;
        fclose( pFile ) ;
    }
}

void logTimeGF( char* postP = 0 )
{
    SYSTEMTIME timeInfo ;
    GetLocalTime( &timeInfo ) ;

    logGF( timeInfo.wYear ) ;
    logGF( "." ) ;
    logGF( timeInfo.wMonth ) ;
    logGF( "." ) ;
    logGF( timeInfo.wDay ) ;
    logGF( " ; " ) ;
    logGF( timeInfo.wHour ) ;
    logGF( "." ) ;
    logGF( timeInfo.wMinute ) ;
    logGF( "." ) ;
    logGF( timeInfo.wSecond ) ;
    logGF( " . " ) ;
    logGF( timeInfo.wMilliseconds ) ;
    if( postP ) logGF( "    " ) ;
    logGF( postP ? postP : "\r\n" ) ;
}

int getPostIdCopyF( char* postOutP , char* postFileP )
{
    int bOk = 0 ;
    char postWant[] = "!idCopy " ;
    int offi = 0 ;
    int bFound = 0 ;

    FILE* pFile = fopen( postFileP , "rb" ) ;
    if( pFile )
    {
        for(;;)
        {
            int ost = fgetc( pFile ) ;
            if( ost == EOF ) break ;

            if( ost != postWant[ offi ] )
            {
                if( offi ) offi = 0 ;
            }
            else
            {
                if( ++ offi == sizeof postWant - 1 )
                {
                    bFound = 1 ;
                    break ;
                }
            }
        }

        if( bFound )
        {
            int offo = 0 ;
            int cToDo = 8 ; //A:ASSUME: sizeof( int ) is 02
            while( cToDo -- )
            {
                int ost = fgetc( pFile ) ;
                if( ost == EOF )
                {
                    cToDo = 8 ;
                    break ;
                }

                postOutP[ offo ++ ] = (char)ost ;
            }

            if( cToDo == - 1 )
            {
                postOutP[ offo ++ ] = 0 ; //THIS WAS COMMENTED OUT AND I DON'T KNOW WHY AND AS A RESULT postOutP WAS NOT TERMINATED (2011.12.15)
                bOk = 1 ;
            }
        }

        fclose( pFile ) ; pFile = 0 ;
    }

    return bOk ;
}

unsigned offNumaNodeValidChosenF( unsigned idNodeWantedP )
{
    unsigned offNodeValidChosen = NUMA_NO_PREFERRED_NODE ;
    if( idNodeWantedP )
    {
        ULONG offNodeMax = 0 ;
        if( GetNumaHighestNodeNumber( &offNodeMax ) )
        {
            unsigned cSkip = idNodeWantedP - 1 ;
            for( unsigned offNode = 0 ; offNode <= offNodeMax ; offNode ++ )
            {
                ULONGLONG mask = 0 ;
                if( GetNumaNodeProcessorMask( 0 , &mask ) )
                {
                    if( !( cSkip -- ) )
                    {
                        offNodeValidChosen = offNode ;
                        break ;
                    }
                }
            }
        }
    }

    return offNodeValidChosen ;
}

void launchProcessF( homeDiskS& infoP , char* posteP , char* posthP , unsigned offNumaNodeValidChosenP , int bServiceP )
{
    if( offNumaNodeValidChosenP != NUMA_NO_PREFERRED_NODE )
    {
        SIZE_T cba = 0 ;
        InitializeProcThreadAttributeList( 0 , 1 , 0 , &cba ) ;

        if( cba < 0x100 )
        {
            unsigned pcInfo2[ 0x100 / sizeof( unsigned ) ] ;
            memset( pcInfo2 , 0 , cba ) ;

            if( InitializeProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 1 , 0 , &cba ) )
            {
                WORD offNodePreferred = (WORD)offNumaNodeValidChosenP ;  // THE NEXT LINE WILL FAIL WITH ANY SIZE OTHER THAN WORD
                if( UpdateProcThreadAttribute( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 0 , PROC_THREAD_ATTRIBUTE_PREFERRED_NODE , &offNodePreferred , sizeof offNodePreferred , 0 , 0 ) )
                {
                    STARTUPINFOEX info1 ;
                    memset( (char*)&info1 , 0 , sizeof info1 ) ;
                    info1.StartupInfo.cb = sizeof info1 ;
                    info1.StartupInfo.dwFlags = STARTF_USESHOWWINDOW | STARTF_USEPOSITION | STARTF_USECOUNTCHARS /*| STARTF_USEFILLATTRIBUTE*/ ;
                    info1.StartupInfo.wShowWindow = SW_SHOWMAXIMIZED ;
                    info1.StartupInfo.dwXCountChars = 0x400 ;
                    info1.StartupInfo.dwYCountChars = 0x300 ;
                    //info1.StartupInfo.dwFillAttribute = BACKGROUND_GREEN ;
                    info1.lpAttributeList = (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ;

                    memset( &infoP.process , 0 , sizeof infoP.process ) ;
                    int rc = CreateProcess( 0 , posteP , 0 , 0 , 0 , ( bServiceP ? DETACHED_PROCESS : 0/*U::TO FIND A BUG: CREATE_NEW_CONSOLE*/ ) | EXTENDED_STARTUPINFO_PRESENT , 0 , posthP , (STARTUPINFO*)&info1 , &infoP.process ) ;
                    if( !rc ) rc = GetLastError() ;
                }

                DeleteProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ) ;
            }
        }
    }
    else //U:: ELIMINATE THIS CODE SNIPPET BY ALWAYS USING STARTUPINFOEX
    {
        STARTUPINFO info1 ;
        memset( (char*)&info1 , 0 , sizeof info1 ) ;
        info1.cb = sizeof info1 ;
        info1.dwFlags = STARTF_USESHOWWINDOW | STARTF_USEPOSITION | STARTF_USECOUNTCHARS /*| STARTF_USEFILLATTRIBUTE*/ ;
        info1.wShowWindow = SW_SHOWMAXIMIZED ;
        info1.dwXCountChars = 0x400 ;
        info1.dwYCountChars = 0x300 ;
        //info1.dwFillAttribute = BACKGROUND_GREEN ;

        PROCESS_INFORMATION info3 ;
        memset( &info3 , 0 , sizeof info3 ) ;
        int rc = CreateProcess( 0 , posteP , 0 , 0 , 0 , ( bServiceP ? DETACHED_PROCESS : 0/*U::TO FIND A BUG: CREATE_NEW_CONSOLE*/ ) , 0 , posthP , &info1 , &infoP.process ) ;
        if( !rc ) rc = GetLastError() ;
    }
}

void hireF( homeDiskS& infoP , int bServiceP = 0 )
{
    char postm[ 0x100 ] = "?:\\ideafarm.home." ;
    postm[ 0 ] = infoP.ostDisk ;
    strcat( postm , infoP.postIdHome ) ;
    strcat( postm , "\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm." ) ;
    strcat( postm , bServiceP ? "41000002" : "41000003" ) ;
    strcat( postm , ".ipdos-wm" ) ;

    char posth[ 0x100 ] = "?:\\ideafarm.home." ;
    posth[ 0 ] = infoP.ostDisk ;
    strcat( posth , infoP.postIdHome ) ;
    strcat( posth , "\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover" ) ;

    unsigned cNumaNodes = cNumaNodesAvailableF() ;
    if( cNumaNodes > 0xff ) cNumaNodes = 0xff ;                 // THIS RESTRICTION MERELY SIMPLIFIES REVERSAL OF THE ORDER OF THE BIGITS IN ORDER TO EXPRESS THE !idNumaNode PARAMETER VALUE IN IFC ORDER
    unsigned idNodeWanted = 0 ;
    unsigned offNumaNodeValidChosen = 0 ;
    char postNumaParam[ 0x100 ] = "" ;
    if( cNumaNodes > 1 )
    {
        static unsigned idNodeLath ;
        unsigned        idNode = 1 + ( ++ idNodeLath ) % cNumaNodes ;       // WILL BEGIN WITH 2 AND THEN CYCLE 1..N
        offNumaNodeValidChosen = offNumaNodeValidChosenF( idNode ) ;

        strcpy( postNumaParam , " !idNumaNode " ) ;

        char postdig[ 0x100 ] = "" ;
        itoa( idNode , postdig , 0x10 ) ;
        if( idNode > 0xf )
        {
            char tmp     = postdig[ 0 ] ;
            postdig[ 0 ] = postdig[ 1 ] ;
            postdig[ 1 ] = tmp ;
        }

        strcat( postNumaParam , postdig ) ;
    }

    char poste[ 0x100 ] ;

    if( bServiceP ) strcpy( poste , posth ) ;
    else
    {
        strcpy( poste , !strcmp( infoP.postIdHome , "1" ) ? "" : /*"wdw "*/"" ) ;
        strcat( poste , posth ) ;
    }

    char postIdHomeless[ 9 ] ;
    strcpy( postIdHomeless , infoP.postIdHome ) ;

    if( !bServiceP )
    {
        int costPad = 7 - strlen( postIdHomeless ) ;
        while( costPad -- ) strcat( postIdHomeless , "0" ) ;
        strcat( postIdHomeless , "8" ) ; // fliIDhOME_HOMELESS
    }                                                                                       

    strcpy( poste , posth ) ;
    strcat( poste , "\\ideafarm." ) ; int offPatch = strlen( poste ) ;
    strcat( poste , "????????.ipdos-we " ) ;
    strcat( poste , bServiceP ? "510004fb" : "51000619" ) ;
    strcat( poste , " !idHome " ) ;
    strcat( poste , postIdHomeless ) ;
    strcat( poste , postNumaParam ) ;

    //logGF( "hireF [bServiceP]: " ) ;
    //logGF( bServiceP ) ;
    //logGF( "\r\n" ) ;

    char postId[ 2 * sizeof( int ) + 1 ] ;

    if( getPostIdCopyF( postId , postm ) )
    {
        char* posto = poste + offPatch ;
        char* posti = postId + 2 * sizeof( int ) - 1 ;
        int cToDo = 2 * sizeof( int ) ;
        while( cToDo -- ) *( posto ++ ) = *( posti -- ) ;

        launchProcessF( infoP , poste , posth , offNumaNodeValidChosen , bServiceP ) ;

        //logGF( "hireF [CreateProcess,poste]: " ) ;
        //logGF( rc ) ;
        //logGF( " \"" ) ;
        //logGF( poste ) ;
        //logGF( "\"\r\n" ) ;
        CloseHandle( infoP.process.hThread ) ; infoP.process.hThread = 0 ;
    }
}

DWORD WINAPI handlerF( DWORD dwControl , DWORD dwEventType , LPVOID lpEventData , LPVOID lpContext )
{
    logTimeGF( "handlerF/+\r\n" ) ;

    DWORD rc = ERROR_CALL_NOT_IMPLEMENTED ;
    switch( dwControl )
    {
        case SERVICE_CONTROL_PRESHUTDOWN :
        {
            logTimeGF( "handlerF / PRESHUTDOWN / setting bShutdown (U::not)\r\n" ) ;
            //U:: THIS IS SUPPRESSED SO THAT IPDOS (tm) TREATS SHUTDOWN LIKE ANY OTHER FIRING:  bShutdown = 1 ;
            //INTENTIONAL FALLTHROUGH
        }
        case SERVICE_CONTROL_STOP :
        {
            logTimeGF( "handlerF/setting bQuit\r\n" ) ;
            bQuit = 1 ;
            // INTENTIONAL FALLTHROUGH
        }
        case SERVICE_CONTROL_INTERROGATE :
        {
            logTimeGF( "handlerF / INTERROGATE / stop pending [idCheckPoint]:    " ) ;
            logGF( ++ status.dwCheckPoint ) ;
            logGF( "\r\n" ) ;
            status.dwCurrentState = SERVICE_STOP_PENDING ;
            status.dwWaitHint = 1000 ;
            SetServiceStatus( oshStatus , &status ) ;

            rc = NO_ERROR ;
            break ;
        }
    }

    logTimeGF( "handlerF/-\r\n" ) ;
    return rc ;
}

void findHomesF( const char* postIdHomeSoloP = 0 )
{
    memset( (char*)pTblHomeDisk , 0 , sizeof pTblHomeDisk ) ;

    char postWild[] = "?:\\ideafarm.home.*" ;

    for( postWild[ 0 ] = 'c' ; !bQuit && postWild[ 0 ] <= 'z' ; postWild[ 0 ] ++ )
    {
        postWild[ 3 ] = 0 ;

        if( DRIVE_FIXED == GetDriveType( postWild ) )
        {
            postWild[ 3 ] = 'i' ;

            WIN32_FIND_DATA info ;
            HANDLE oshFind = FindFirstFile( postWild , &info ) ;

            if( oshFind != INVALID_HANDLE_VALUE ) do
            {
                const char* postIdHomeFound = info.cFileName + sizeof postWild - 5 ;
                int bOk = 1 ;
                {

                    for( int offi = 0 ; bOk && postIdHomeFound[ offi ] ; offi ++ )
                    {
                        char test = postIdHomeFound[ offi ] ;
                        if
                        (
                            !( '0' <= test && test <= '9' )
                            &&
                            !( 'a' <= test && test <= 'f' )
                        )
                        bOk = 0 ;
                    }
                }

                if( bOk )
                {
                    char postHome[ 0x100 ] ;
                    postWild[ 3 ] = 0 ;
                    strcpy( postHome , postWild ) ;
                    postWild[ 3 ] = 'i' ;
                    strcat( postHome , info.cFileName ) ;

                    if( info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY )
                    {
                        //VERIFY THAT THIS HOME HAS BEEN COMPLETELY UNZIPPED (I.E. THAT I AM NOT RACING WITH UNZIP.EXE)
                        char postZZZ[ 0x100 ] ;
                        strcpy( postZZZ , postHome ) ;
                        strcat( postZZZ , "\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\z\\z_if.i.exist.then.this.home.is.completely.unzipped" ) ;
                
                        WIN32_FIND_DATA info2 ;
                        HANDLE oshFind2 = FindFirstFile( postZZZ , &info2 ) ;
                    
                        if( oshFind2 != INVALID_HANDLE_VALUE )
                        {
                            FindClose( oshFind2 ) ; oshFind2 = INVALID_HANDLE_VALUE ;

                            //LOOK FOR AN EXE FILE
                            char postExe[ 0x100 ] ;
                            strcpy( postExe , postHome ) ;
                            strcat( postExe , "\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm" ) ;
                    
                            WIN32_FIND_DATA info2 ;
                            HANDLE oshFind3 = FindFirstFile( postExe , &info2 ) ;
                        
                            if( oshFind3 != INVALID_HANDLE_VALUE )
                            {
                                //logGF( "findHomesF found exe [cFileName]: \"" ) ;
                                //logGF( info2.cFileName ) ;
                                //logGF( "\"\r\n" ) ;

                                if( !postIdHomeSoloP || !*postIdHomeSoloP || !strcmp( postIdHomeSoloP , postIdHomeFound ) )
                                {
                                    int bAlreadyInTable = 0 ;
                                    for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
                                    {
                                        if( *pTblHomeDisk[ offo ].postIdHome && !strcmp( pTblHomeDisk[ offo ].postIdHome + 1 , postIdHomeFound + 1 ) ) // DRIVE LETTER IS IGNORED TO PREVENT MULTIPLE ENTRIES FOR THE SAME idHome VALUE
                                        {
                                            bAlreadyInTable = 1 ;
                                            break ;
                                        }
                                    }
            
                                    if( !bAlreadyInTable ) for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
                                    {
                                        if( !*pTblHomeDisk[ offo ].postIdHome )
                                        {
                                            pTblHomeDisk[ offo ].ostDisk = postHome[ 0 ] ;
                                            strcpy( pTblHomeDisk[ offo ].postIdHome , postIdHomeFound ) ;

                                            break ;
                                        }
                                    }
                                }
                    
                                FindClose( oshFind3 ) ; oshFind3 = INVALID_HANDLE_VALUE ;
                            }
                        }
                    }
                }
            }
            while( FindNextFile( oshFind , &info ) ) ;

            FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
        }
    }
}

VOID WINAPI serviceMainF( DWORD cArgP , LPTSTR* ppostArgP )
{
    logTimeGF( "IPDOS (tm) serviceMainF / +\r\n" ) ;

    unsigned bWatch05 = 0 ;
    if( cArgP )
    {
        for( unsigned offa = 0 ; offa < cArgP ; offa ++ )
        {
            logTimeGF( "[ppostArgP[" ) ;
            logGF( offa ) ;
            logGF( "]: " ) ;
            logGF( ppostArgP[ offa ] ) ;
            logGF( "\r\n" ) ;

            bWatch05 |= !!strstr( ppostArgP[ offa ] , "!watch05" ) ;
        }
    }

    //WINDOWS IS SUCH A PIECE OF SHIT: SERVICE LAUNCH COMMAND LINE PARAMETERS CANNOT BE STORED ANYWHERE FOR USE DURING REBOOT. SUCH SSSHHHHIIIITTTT
    //U:: COMMENTED OUT TO FIND A LEAK: bWatch05 = 1 ;

    //logGF( "serviceMainF/+\r\n" ) ;

    oshStatus = RegisterServiceCtrlHandlerEx( "" , handlerF , 0 ) ;
    if( !oshStatus )
    {
        int rc = GetLastError() ;
        logTimeGF( "could not register service handler [rc]:    " ) ;
        logGF( rc ) ;
        logGF( "\r\n" ) ;
    }
    else
    {
        status.dwServiceType = SERVICE_WIN32_OWN_PROCESS ;
        status.dwCurrentState = SERVICE_START_PENDING ;
        status.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_PRESHUTDOWN ;
        status.dwWin32ExitCode = NO_ERROR ;
        status.dwWaitHint = 8000 ;
        int bOk = SetServiceStatus( oshStatus , &status ) ;

        if( !bOk )
        {
            int rc = GetLastError() ;
            logTimeGF( "could not set service status to START PENDING ACCEPT STOP PRESHUTDOWN [rc]:    " ) ;
            logGF( rc ) ;
            logGF( "\r\n" ) ;
        }
        else
        {
            logTimeGF( "creating slab\r\n" ) ;
            static char postNapkinName[ 0x100 ] = "Global\\ideafarm.domains.com.ideafarm.1._._._...napkinC.napSlab" ;

            char _pbsd[ SECURITY_DESCRIPTOR_MIN_LENGTH + sizeof( int ) ] ;

            SECURITY_ATTRIBUTES sa ;
            {
                sa.nLength = sizeof sa ;
                sa.lpSecurityDescriptor = (SECURITY_DESCRIPTOR*)( _pbsd + CBtOaLIGN( _pbsd ) ) ;
                sa.bInheritHandle = 0 ;
            
                int bFail = 0 ;
                bFail |= !InitializeSecurityDescriptor( sa.lpSecurityDescriptor , SECURITY_DESCRIPTOR_REVISION ) ;          bFail <<= 1 ;
                bFail |= !SetSecurityDescriptorDacl(    sa.lpSecurityDescriptor , 1 , 0 , 1 ) ;                             bFail <<= 1 ;
                //bFail |= !SetSecurityDescriptorSacl(    sa.lpSecurityDescriptor , 1 , 0 , 1 ) ;
                //logGF( "serviceMainF/configuring security descriptor [bFail]: " ) ;
                //logGF( bFail ) ;
                //logGF( "\r\n" ) ;
            }
                        
            HANDLE oshMap = CreateFileMapping( INVALID_HANDLE_VALUE , &sa , PAGE_READWRITE | SEC_COMMIT , 0 , 7 * sizeof( int ) , postNapkinName ) ;
            if( oshMap )
            {
                //logGF( "checking rc\r\n" ) ;
                int rc = GetLastError() ;
                if( rc ) logTimeGF( "failed\r\n" ) ; // ERROR_ALREADY_EXISTS IS PROCESSED JUST LIKE ANY OTHER ERROR SINCE NO IPDOS ADAMS SHOULD EXIST AT THIS TIME
                else
                {
                    //logGF( "mapping view of slab\r\n" ) ;
                    unsigned* pcNapkin = (unsigned*)MapViewOfFile( oshMap , FILE_MAP_WRITE , 0 , 0 , 0 ) ;
                    if( pcNapkin )
                    {
                        //CS:CODEsYNC: bench/2.1.ideafarm 0010163 0030149
                        pcNapkin[ 0 ] = 0x10       ; // hdr: cbData
                        pcNapkin[ 1 ] = 1          ; // hdr: cRef
                        pcNapkin[ 2 ] = 0xcccc0036 ; // hdr: bFormatted (FINGERnEG_NAPKINiSfORMATTED)
                        pcNapkin[ 3 ] = 0xcccc0044 ; // slb: finger (FINGERnEG_SLABs)
                        pcNapkin[ 4 ] = 1          ; // slb: idFormat
                        pcNapkin[ 5 ] = 0          ; // slb: flagsi (fliSLABs_null) //CS: CODEsYNC: 0010550 bench/2.1.ideafarm
                        pcNapkin[ 6 ] = 0          ; // slb: cMile

                        int bWoth = 1 ;
                        int cHired = 0 ;
                        while( !bQuit && !cHired )
                        {
                            //logGF( "serviceMainF/loop/+\r\n" ) ;
                    
                            for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
                            {
                                if( *pTblHomeDisk[ offo ].postIdHome && ( pTblHomeDisk[ offo ].postIdHome[ 0 ] != '1' || pTblHomeDisk[ offo ].postIdHome[ 1 ] ) )
                                {
                                    hireF( pTblHomeDisk[ offo ] , 1 ) ;
                                    cHired ++ ;
                                    if( bWatch05 ) bWatch05 = 0 ;
                                }
                            }
                    
                            if( !cHired ) for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
                            {
                                if( *pTblHomeDisk[ offo ].postIdHome )
                                {
                                    hireF( pTblHomeDisk[ offo ] , 1 ) ;
                                    cHired ++ ;
                                    break ;
                                }
                            }
                    
                            if( bWoth )
                            {
                                bWoth = 0 ;
                    
                                status.dwCurrentState = SERVICE_RUNNING ;
                                status.dwCheckPoint = 0 ;
                                status.dwWaitHint = 0 ;
                                SetServiceStatus( oshStatus , &status ) ;
                            }

                            //logGF( "serviceMainF/loop/napping\r\n" ) ;
                    
                            unsigned cWinks = 1 << 2 ;
                            while( !bQuit && cWinks -- ) Sleep( 1000 >> 2 ) ;
                    
                            if( !cHired ) findHomesF() ; // INTENTIONALLY DOES NOT HONOR postIdHomeSolo , WHICH IS THUS EFFECTIVE ONLY ON THE WOTH PASS
                            //logGF( "serviceMainF/loop/-\r\n" ) ;
                        }
                    
                        {
                            if( bWatch05 )
                            {
                                HANDLE oshProcess = OpenProcess( PROCESS_ALL_ACCESS , 0 , GetCurrentProcessId() ) ;
                                if( !oshProcess ) BLAMMO
                                else
                                {
                                    HANDLE oshToken = 0 ;
                                    if( !OpenProcessToken( oshProcess , TOKEN_ADJUST_PRIVILEGES , &oshToken ) ) BLAMMO
                                    else
                                    {
                                        TOKEN_PRIVILEGES info ;
                                        info.PrivilegeCount = 1 ;
                                        if( !LookupPrivilegeValue( "" , SE_SHUTDOWN_NAME , &info.Privileges[ 0 ].Luid ) ) BLAMMO
                                        else
                                        {
                                            info.Privileges[ 0 ].Attributes = SE_PRIVILEGE_ENABLED ;
                                            if( !AdjustTokenPrivileges( oshToken , 0 , &info , 0 , 0 , 0 ) ) BLAMMO
                                        }

                                        CloseHandle( oshToken ) ;
                                    }
                                    CloseHandle( oshProcess ) ;
                                }

                                { WSADATA wsaData ; if( NO_ERROR != WSAStartup( MAKEWORD( 2 , 2 ) , &wsaData ) ) BLAMMO ; }
                            }

                            unsigned cSkipCheck = 0x10 ; // 9 IS NEEDED ON NETBOOK
                            unsigned cForgive = 0x4 ;
                            unsigned idWink = 0 ;
                            while( !bQuit && !( pcNapkin[ 5 ] & 1 ) ) // THIS IS THE MAIN LOOP; I LIVE HERE UNTIL I AM FIRED
                            {
                                Sleep( 1000 >> 2 ) ;

                                if( bWatch05 && !( ++ idWink % 0x1000 ) )
                                {
                                    logTimeGF( "checking port 05\r\n" ) ;

                                    SOCKET oshSock = socket( PF_INET , SOCK_STREAM , 0 ) ;
                                    if( oshSock == INVALID_SOCKET ) BLAMMO
                                    else
                                    {
                                        sockaddr_in info ;
                                        memset( (char*)&info , 0 , sizeof info ) ;
                                        info.sin_family = AF_INET ;
                                        info.sin_port = htons( (unsigned short)0x50 ) ;
                                        info.sin_addr.s_addr = htonl( (unsigned long)0x7f000001 ) ;

                                        if( !connect( oshSock , (sockaddr*)&info , sizeof info ) )
                                        {
                                            if( cSkipCheck    ) cSkipCheck = 0 ;
                                            if( cForgive != 4 ) cForgive = 4 ;
                                            //logGF( "port 05 responded aok\r\n" ) ;
                                        }
                                        else if( cSkipCheck && cSkipCheck -- )
                                        {
                                            logTimeGF( "port 05 did not respond; this is ignored because IPDOS (tm) is initializing: " ) ;
                                            logGF( cSkipCheck ) ;
                                            logGF( "\r\n" ) ;
                                        }
                                        else if( cForgive && cForgive -- )
                                        {
                                            logTimeGF( "port 05 did not respond; this is forgiven: " ) ;
                                            logGF( cForgive ) ;
                                            logGF( "\r\n" ) ;
                                        }
                                        else
                                        {
                                            logTimeGF( "port 05 did not respond so am rebooting\r\n" ) ;
                                            InitiateSystemShutdownEx( 0 , 0 , 0 , 1 , 1 , SHTDN_REASON_MAJOR_APPLICATION | SHTDN_REASON_MINOR_HUNG ) ;
                                        }
                            
                                        closesocket( oshSock ) ;
                                    }
                                }
                            }

                            if( bWatch05 ) WSACleanup() ;
                        }

                        logTimeGF( "4    IPDOS (tm) serviceMainF / i have been fired\r\n" ) ;

                        //I GET UPDATED IF SLAB ALREADY KNOWS (NOT NORMAL; WILL HAPPEN E.G. IF A TEST PROGRAM IS SETTING SLAB FLAGS TO SIMULATE SHUTDOWN)
                        bQuit     |= pcNapkin[ 5 ] & 1      ;
                        bShutdown |= pcNapkin[ 5 ] & 2 >> 1 ;

                        //SLAB GETS UPDATED IF I ALREADY KNOW (NORMALLY I WILL KNOW BEFORE SLAB KNOWS)
                        pcNapkin[ 5 ] |= bShutdown ? 3 : 1 ; // slb: flagsi (fliSLABs_QUIT fliSLABs_SHUTDOWN)  //CS: CODEsYNC: 0010550 bench/2.1.ideafarm

                        for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
                        {
                            if( *pTblHomeDisk[ offo ].postIdHome )
                            {
                                logTimeGF( "3    checking whether launched process is still active [offo,postIdHome]:    " ) ;
                                logGF( offo ) ;
                                logGF( "    " ) ;
                                logGF( pTblHomeDisk[ offo ].postIdHome ) ;
                                logGF( "\r\n" ) ;

                                DWORD rc = 0 ;
                                while( GetExitCodeProcess( pTblHomeDisk[ offo ].process.hProcess , &rc ) && rc == STILL_ACTIVE )
                                {
                                    logTimeGF( "2    still active\r\n" ) ;
                                    status.dwWaitHint = 1000 ;
                                    status.dwCheckPoint ++ ;
                                    SetServiceStatus( oshStatus , &status ) ;
                                    Sleep( 1000 >> 2 ) ;
                                }
                                logTimeGF( "1    the launched process is no longer active\r\n" ) ;
                                CloseHandle( pTblHomeDisk[ offo ].process.hProcess ) ; pTblHomeDisk[ offo ].process.hProcess = 0 ;
                            }
                        }

                        logTimeGF( "0    IPDOS (tm) serviceMainF / -\r\n" ) ;
                    }
                }

                CloseHandle( oshMap ) ;
            }
        }
    }

    status.dwCurrentState = SERVICE_STOPPED ;
    status.dwCheckPoint = 0 ;
    status.dwWaitHint = 0 ;
    SetServiceStatus( oshStatus , &status ) ;
}

#define CBtOaLIGN02(pbOrCbP)                                                \
                                                                            \
    (                                                                       \
        (unsigned)(pbOrCbP) & ( sizeof( unsigned ) - 1 )                    \
            ? sizeof( unsigned ) - (unsigned)(pbOrCbP) % sizeof( unsigned ) \
            : 0                                                             \
    )

int main( int cArgP , char* ppostArgP[] , char* ppostEnvP[] )
{
    {
        char _pbsd[ SECURITY_DESCRIPTOR_MIN_LENGTH + sizeof( int ) ] ;

        SECURITY_ATTRIBUTES sa ;
        {
            sa.nLength = sizeof sa ;
            sa.lpSecurityDescriptor = (SECURITY_DESCRIPTOR*)( _pbsd + CBtOaLIGN( _pbsd ) ) ;
            sa.bInheritHandle = 0 ;
        
            int bFail = 0 ;
            bFail |= !InitializeSecurityDescriptor( sa.lpSecurityDescriptor , SECURITY_DESCRIPTOR_REVISION ) ;          bFail <<= 1 ;
            bFail |= !SetSecurityDescriptorDacl(    sa.lpSecurityDescriptor , 1 , 0 , 1 ) ;                             bFail <<= 1 ;
            //bFail |= !SetSecurityDescriptorSacl(    sa.lpSecurityDescriptor , 1 , 0 , 1 ) ;
            //logGF( "serviceMainF/configuring security descriptor [bFail]: " ) ;
            //logGF( bFail ) ;
            //logGF( "\r\n" ) ;
        }

        SetLastError( 0 ) ;
        CreateDirectory( "c:\\tmp" , &sa ) ;
    }

    {
        SC_HANDLE oshManager = OpenSCManagerA( 0 , SERVICES_ACTIVE_DATABASE , GENERIC_READ ) ;
        if( !oshManager )
        {
            unsigned rc = GetLastError() ;
            logTimeGF( "IPDOS (tm) serviceMainF / could not open services manager [rc]:   " ) ;
            logGF( rc ) ;
            logGF( "\r\n" ) ;
        }
        else
        {
            SC_HANDLE oshService = OpenServiceA( oshManager , "IPDOS (tm)" , SERVICE_CHANGE_CONFIG ) ;
            if( !oshService )
            {
                unsigned rc = GetLastError() ;
                logTimeGF( "IPDOS (tm) serviceMainF / could not open the \"IPDOS (tm)\" service [rc]:   " ) ;
                logGF( rc ) ;
                logGF( "\r\n" ) ;
            }
            else
            {
                SERVICE_PRESHUTDOWN_INFO info ;
                info.dwPreshutdownTimeout = 1800000 ; // 30 MINUTES
                BOOL bOk = ChangeServiceConfig2A( oshService , SERVICE_CONFIG_PRESHUTDOWN_INFO , &info ) ;
                if( !bOk )
                {
                    unsigned rc = GetLastError() ;
                    logTimeGF( "IPDOS (tm) serviceMainF / could not change preshutdown timeout value [rc]:   " ) ;
                    logGF( rc ) ;
                    logGF( "\r\n" ) ;
                }
                else
                {
                    logTimeGF( "IPDOS (tm) serviceMainF / preshutdown timeout value changed to [minutes]:   " ) ;
                    logGF( info.dwPreshutdownTimeout / 1000 / 60 ) ;
                    logGF( "\r\n" ) ;
                }
                CloseServiceHandle( oshService ) ;
            }
            CloseServiceHandle( oshManager ) ;
        }
    }

    char postIdHomeSolo[ 1 + 2 * sizeof( int ) ] ; postIdHomeSolo[ 0 ] = 0 ;
    {
        int bArmed = 0 ;
        for( int offi = 1 ; offi < cArgP ; offi ++ )
        {
            if( bArmed )
            {
                bArmed = 0 ;
                if( isBigitsF( ppostArgP[ offi ] ) )
                {
                    strcpy( postIdHomeSolo , ppostArgP[ offi ] ) ;
                }
            }
            else if( !strcmp( ppostArgP[ offi ] , "!idHome" ) ) bArmed = 1 ;
            else bArmed = 0 ;
        }
    }

    findHomesF( postIdHomeSolo ) ;

    char postUser[ 0x100 ] ;
    DWORD costaUser = sizeof postUser ;
    if( GetUserName( postUser , &costaUser ) )
    {
        if( !strcmp( postUser , "SYSTEM" ) )
        {
            SERVICE_TABLE_ENTRY pInfo[] =
            {
                "" , serviceMainF ,
                0  , 0
            } ;
            
            BOOL rc = StartServiceCtrlDispatcher( pInfo ) ;
        }
        else
        {
            for( int offo = 0 ; offo < sizeof pTblHomeDisk / sizeof pTblHomeDisk[ 0 ] ; offo ++ )
            {
                if( *pTblHomeDisk[ offo ].postIdHome ) hireF( pTblHomeDisk[ offo ] ) ;
            }
        }
    }
    return 0 ;
}
