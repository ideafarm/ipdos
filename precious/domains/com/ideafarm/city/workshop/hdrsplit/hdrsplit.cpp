
// THIS EXE CREATES THE ipdos.*.*.third.?.h FILES IN snip/ BY COPYING ipdos.h
// REASON #1: RESULTS IN SEPARATE PRECOMPILED HEADER FILES, WHICH I NEED FOR SOME REASON THAT I CANNOT REMEMBER
// REASON #2: ipdos.h IS TOO LARGE; PUTTING THE WHOLE ENCHIADA INTO WO INLUDE FILE CAUSES wpp386 TO CRAP AND DIE
// I TAKE NO PARAMETERS

#pragma disable_message ( 549 , 656 , 657 , 665 , 666 , 726 ) ;

#include <windows.h>

#define WRITEsET(postP)                                                                                                                                                                             \
{                                                                                                                                                                                                   \
    HANDLE osho1 = CreateFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\" postP ".1.h" , GENERIC_WRITE , 0 , 0 , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , 0 ) ;    \
    HANDLE osho2 = CreateFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\" postP ".2.h" , GENERIC_WRITE , 0 , 0 , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , 0 ) ;    \
                                                                                                                                                                                                    \
    bOk = WriteFile( osho1 , postTick , cost1 , &cba , 0 ) ;                                                                                                                                        \
    if( !bOk        ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }                                                                                                                                        \
    if( cba - cost1 ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }                                                                                                                                        \
                                                                                                                                                                                                    \
    bOk = WriteFile( osho2 , postSplit , cbLo - cost1 , &cba , 0 ) ;                                                                                                                                \
    if( !bOk               ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }                                                                                                                                 \
    if( cba - cbLo + cost1 ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }                                                                                                                                 \
                                                                                                                                                                                                    \
    CloseHandle( osho2 ) ;                                                                                                                                                                          \
    CloseHandle( osho1 ) ;                                                                                                                                                                          \
}

char postTick[ 0x01000000 ] ;

int main( int cArgsP , char** ppArgP )
{
    HANDLE oshi = CreateFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\ipdos.h" , GENERIC_READ , 0 , 0 , OPEN_EXISTING , FILE_ATTRIBUTE_NORMAL , 0 ) ;

    if( oshi != INVALID_HANDLE_VALUE )
    {
        DWORD cbLo = GetFileSize( oshi , 0 ) ;

        if( cbLo > sizeof postTick ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }

        unsigned long cba = 0 ;
        BOOL bOk = ReadFile( oshi , postTick , cbLo , &cba , 0 ) ;
        CloseHandle( oshi ) ;
        if( !bOk       ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }
        if( cba - cbLo ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }

        char* postSplit = strstr( postTick + cbLo / 2 , "END\r\n//SOURCE:" ) ;
        if( !postSplit ) { int* pcb = 0 ; *pcb = 0xbbbbbbbb ; }

        postSplit += 5 ;

        unsigned cost1 = postSplit - postTick ;

        WRITEsET( "ipdos.adam.hide.third" )
        WRITEsET( "ipdos.adam.show.third" )
        WRITEsET( "ipdos.base.hide.third" )
        WRITEsET( "ipdos.base.show.third" )
    }

    return 0 ;
}
