
#include <windows.h>
#include <string.h>
#include <stdio.h>

int main( void )
{
    STARTUPINFO         info1 ;
    PROCESS_INFORMATION info2 ;
    DEBUG_EVENT         info3 ;
    BOOL bOk ;
    int rc ;

    memset( (char*)&info1 , 0 , sizeof info1 ) ;
    memset( (char*)&info2 , 0 , sizeof info2 ) ;
    memset( (char*)&info3 , 0 , sizeof info3 ) ;

    bOk = CreateProcessA( 0 , "d:\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\null.exe" , 0 , 0 , 0 , CREATE_NEW_CONSOLE | DEBUG_PROCESS , 0 , 0 , &info1 , &info2 ) ;

    if( !bOk )
    {
        rc = GetLastError() ;
        if( rc ) rc = 0 ;
    }

    while( info3.dwDebugEventCode != EXIT_PROCESS_DEBUG_EVENT )
    {
        bOk = WaitForDebugEvent( &info3 , INFINITE ) ;


        switch( info3.dwDebugEventCode )
        {
            case 1  : { printf( "event: %d: EXCEPTION_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 2  : { printf( "event: %d: CREATE_THREAD_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 3  : { printf( "event: %d: CREATE_PROCESS_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 4  : { printf( "event: %d: EXIT_THREAD_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 5  : { printf( "event: %d: EXIT_PROCESS_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 6  : { printf( "event: %d: LOAD_DLL_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 7  : { printf( "event: %d: UNLOAD_DLL_DEBUG_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 8  : { printf( "event: %d: OUTPUT_DEBUG_STRING_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            case 9  : { printf( "event: %d: RIP_EVENT\r\n" , info3.dwDebugEventCode ) ; break ; }
            default : { printf( "event: %d: (unexpected)\r\n" , info3.dwDebugEventCode ) ; break ; }
        }

        if( !bOk )
        {
            rc = GetLastError() ;
            if( rc ) rc = 0 ;
        }

        bOk = ContinueDebugEvent( info3.dwProcessId , info3.dwThreadId , DBG_EXCEPTION_NOT_HANDLED ) ;

        if( !bOk )
        {
            rc = GetLastError() ;
            if( rc ) rc = 0 ;
        }
    }

    return 0 ;
}
