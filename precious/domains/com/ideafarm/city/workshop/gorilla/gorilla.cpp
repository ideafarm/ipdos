
#define NTDDI_VERSION NTDDI_WIN7
#define _WIN32_WINNT _WIN32_WINNT_WIN7

#include <windows.h>
#include <psapi.h>
#include <conio.h>
#include <stdio.h>

DWORD WINAPI tmPegCpusF( LPVOID pP )
{
    if( pP ) ;

    putch( 'a' ) ;
    Sleep( 1000 ) ;
    putch( 'b' ) ;

    unsigned cDoOuter = - 1 ;
    while( cDoOuter )
    {
        cDoOuter -- ;

        unsigned cDoInner = - 1 ;
        while( cDoInner )
        {
            cDoInner -- ;
            //putch( (char)( 'a' + cDoInner % ( 1 + 'z' - 'a' ) ) ) ;
        }
        putch( 'c' ) ;
    }
    putch( 'd' ) ;

    Sleep( 1000 ) ;
    putch( 'e' ) ;

    return 0 ;
}

DWORD WINAPI tmPegDisksF( LPVOID pP )
{
    static char pbOut[  0x1000000 ] ;
    static char pbBufC[ 0x1000000 ] ;
    static char pbBufF[ 0x1000000 ] ;

    if( pP ) ;

    putch( 'a' ) ;
    Sleep( 1000 ) ;
    putch( 'b' ) ;

    FILE* pFileC = fopen( "c:\\tmp.gorilla\\gorilla.dropping.c" , "w" ) ;
    FILE* pFileF = fopen( "f:\\tmp.gorilla\\gorilla.dropping.f" , "w" ) ;

    setvbuf ( pFileC , pbBufC , _IONBF , sizeof pbBufC ) ;
    setvbuf ( pFileF , pbBufF , _IONBF , sizeof pbBufF ) ;

    unsigned cDoOuter = - 1 ;
    while( cDoOuter )
    {
        cDoOuter -- ;

        unsigned cDoInner = - 1 ;
        while( cDoInner )
        {
            cDoInner -- ;

            fwrite( pbOut , sizeof pbOut , 1 , pFileC ) ;
            fwrite( pbOut , sizeof pbOut , 1 , pFileF ) ;
        }
        putch( 'c' ) ;
    }
    putch( 'd' ) ;

    Sleep( 1000 ) ;
    putch( 'e' ) ;

    fclose( pFileC ) ;
    fclose( pFileF ) ;

    return 0 ;
}

int main( unsigned cP , void* pvP )
{
    if( pvP ) ;

    unsigned pOffNodeValidChosen[ 2 ] = { -1 , -1 } ;
    unsigned cElts = sizeof pOffNodeValidChosen / sizeof pOffNodeValidChosen[ 0 ] ;
    for( unsigned idNode = 1 ; idNode <= cElts ; idNode ++ )
    {
        ULONG offNodeMax = 0 ;
        if( GetNumaHighestNodeNumber( &offNodeMax ) )
        {
            unsigned cSkip = idNode - 1 ;
            for( unsigned offNode = 0 ; offNode <= offNodeMax ; offNode ++ )
            {
                ULONGLONG mask = 0 ;
                if( GetNumaNodeProcessorMask( (char)offNode , &mask ) )
                {
                    if( !( cSkip -- ) )
                    {
                        pOffNodeValidChosen[ idNode - 1 ] = offNode ;
                        break ;
                    }
                }
            }
        }
    }

    if( cP > 1 )
    {
        unsigned offElt = cP - 2 ;
        unsigned bOk = 1 ;

        if( pOffNodeValidChosen[ offElt ] != -1 )
        {
            bOk = 0 ;

            ULONGLONG mask = 0 ;
            if( GetNumaNodeProcessorMask( (UCHAR)pOffNodeValidChosen[ offElt ] , &mask ) )
            {
                unsigned long myMaskPro = 0 ;
                unsigned long myMaskSys = 0 ;
                if( GetProcessAffinityMask( GetCurrentProcess() , &myMaskPro , &myMaskSys ) )
                {
                    myMaskPro = (unsigned long)mask ;
                    if( SetProcessAffinityMask( GetCurrentProcess() , myMaskPro ) ) bOk = 1 ;
                }
            }
        }

        if( bOk )
        {
            if( !offElt )
            {
                //HANDLE oshDisk = CreateThread( 0 , 0 , tmPegDisksF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshDisk ) ;
            }

            HANDLE osh0 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh0 ) ;
            HANDLE osh1 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh1 ) ;
            HANDLE osh2 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh2 ) ;
            HANDLE osh3 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh3 ) ;
            HANDLE osh4 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh4 ) ;
            HANDLE osh5 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh5 ) ;
            HANDLE osh6 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh6 ) ;
            HANDLE osh7 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh7 ) ;
            HANDLE osh8 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh8 ) ;
            HANDLE osh9 = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osh9 ) ;
            HANDLE osha = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( osha ) ;
            HANDLE oshb = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshb ) ;
            HANDLE oshc = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshc ) ;
            HANDLE oshd = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshd ) ;
            HANDLE oshe = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshe ) ;
            HANDLE oshf = CreateThread( 0 , 0 , tmPegCpusF , (void*)0x1234 , 0 , 0 ) ; CloseHandle( oshf ) ;

            putch( 'a' ) ;
            Sleep( 1000 ) ;
            putch( 'b' ) ;

            unsigned cDo = - 1 ;
            while( cDo )
            {
                cDo -- ;
                //putch( (char)( 'a' + cDo % ( 1 + 'z' - 'a' ) ) ) ;
            }
            putch( 'c' ) ;

            Sleep( 1000 ) ;
            putch( 'd' ) ;
        }
    }
    else
    {
        for( unsigned offElt = 0 ; offElt < cElts ; offElt ++ )
        {
            SIZE_T cba = 0 ;
            InitializeProcThreadAttributeList( 0 , 1 , 0 , &cba ) ;

            if( cba < 0x100 )
            {
                unsigned pcInfo2[ 0x100 / sizeof( unsigned ) ] ;
                memset( pcInfo2 , 0 , cba ) ;

                if( InitializeProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 1 , 0 , &cba ) )
                {
                    WORD offNodePreferred = (WORD)pOffNodeValidChosen[ offElt ] ;
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

                        PROCESS_INFORMATION info3 ;
                        memset( &info3 , 0 , sizeof info3 ) ;

                        char postAll[ 0x100 ] = "c:\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.gorilla.ipdos " ;
                        strcat( postAll , !offElt ? "foo" : "foo goo" ) ;

                        static unsigned bOk ;
                        bOk = 0 ;
                        bOk = CreateProcess( 0 , postAll , 0 , 0 , 0 , CREATE_NEW_CONSOLE | EXTENDED_STARTUPINFO_PRESENT , 0 , 0 , (STARTUPINFO*)&info1 , &info3 ) ;

                        if( !bOk ) bOk = GetLastError() ;
                        if( bOk ) ;
                    }

                    DeleteProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ) ;
                }
            }
        }
    }

    unsigned wo = 1 ;
    while( wo )
    {
        Sleep( -1 ) ;
    }

    return 0 ;
}