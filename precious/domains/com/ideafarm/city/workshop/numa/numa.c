
#define NTDDI_VERSION NTDDI_WIN7
#define _WIN32_WINNT _WIN32_WINNT_WIN7

#include <windows.h>
#include <psapi.h>
#include <conio.h>
#include <stdio.h>

BOOL __stdcall K32QueryWorkingSetEx( HANDLE hProcess , PVOID pv , DWORD cb ) ;


PSAPI_WORKING_SET_EX_INFORMATION pInfo[ 0x8000 ] ;



int main( unsigned cP , void* pvP )
{
    unsigned offg = 0 ;
    unsigned bOk = 0 ;
    unsigned rc = 0 ;
    char* pbTry = 0 ;

    if( !cP )
    {
        pvP = 0 ;
    }

    for( pbTry = 0 ; pbTry < (char*)0x80000000 ; pbTry += 0x10000 )
    {
        pInfo[ offg ++ ].VirtualAddress = (void*)pbTry ;
    }

    bOk = QueryWorkingSetEx( GetCurrentProcess() , pInfo , sizeof pInfo ) ;
    rc = bOk ? 0 : GetLastError() ;

    if( bOk )
    {
        for( offg = 0 ; offg < sizeof pInfo / sizeof pInfo[ 0 ] ; offg ++ )
        {
            if( !( offg % 0x100 ) )
            {
                putch( '\r' ) ;
                putch( '\n' ) ;
            }

            if( pInfo[ offg ].VirtualAttributes.Valid )
            {
                if( !pInfo[ offg ].VirtualAttributes.Node )
                {
                    putch( '0' ) ;
                }
                else if( pInfo[ offg ].VirtualAttributes.Node == 1 )
                {
                    putch( '1' ) ;
                }
                else
                {
                    putch( '*' ) ;
                }
            }
            else
            {
                putch( '.' ) ;
            }
        }
    }

    return 0 ;
}
