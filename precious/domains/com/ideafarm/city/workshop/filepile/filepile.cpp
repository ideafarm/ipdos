
// THIS EXE WRITES FILE NAMES TO STD OUT, IN REVERSE ORDER
// PARAM 1: target file
// PARAM 2: -d OR -n
// PARAM 3 IS THE PATTERN.
// IF PARAM 2 IS -d, THEN THE FILES CONTENTS, RATHER THAN THE NAME, WILL BE WRITTEN TO STD OUT
//
// THIS CPP FILE CAN BE COMPILED AND LINKED FOR OS/2 USING wpp386 and wlink WITHOUT USING OTHER OBJECT OR LIB FILES:
// ASSUME: NO LINE IS LONGER THAN 0x10000 BYTES

//#define INCL_DOSFILEMGR
//#include <os2.h>
//#include <stdio.h>
#include <sys\types.h> 
#include <sys\stat.h> 
#include <fcntl.h> 
#include <io.h>
//#include <string.h>

#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

//DUPLICATED IN bench/filepile/1.cpp 0c0000b
// "IC" = "immutable, compressed"
const unsigned ppcIC[][ 2 ] =
{
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\snip\1snip.19000005.genFileIds.h"
}
;

//PSEUDODUPLICATED IN bench/filepile/1.cpp 0c0000b
unsigned idFileRankF( const unsigned idFileImmutableP )
{
    unsigned cRows = sizeof ppcIC / sizeof ppcIC[ 0 ][ 0 ] / 2 ;
    unsigned off = 0 ;
    while( off < cRows && idFileImmutableP != ppcIC[ off ][ 0 ] ) off ++ ;
    unsigned idFile = 0 ;
    if( off < cRows ) idFile = ppcIC[ off ][ 1 ] ;

    return idFile ;
}

struct sS
{
    sS*             pU ;
    sS*             pD ;
    char*           pb ;

                    public :

                    sS( sS* psTopP , char* pbP ) ;
                    ~sS( void ) ;
}
;

sS::sS( sS* psTopP , char* pbP ) :
pU( 0 ) ,
pD( 0 ) ,
pb( 0 )
{
    if( pbP )
    {
        pb = new char[ 1 + strlen( pbP ) ] ;
        strcpy( pb , pbP ) ;
        if( psTopP && !psTopP->pU )
        {
            psTopP->pU = this ;
            pD = psTopP ;
        }
    }
}

sS::~sS( void )
{
    delete[] pb ;
}

int main( int cArgsP , char** ppArgP )
{
    char pbTarget[ 0x1000 ] ;
    if( cArgsP > 1 && ppArgP[ 1 ] ) strcpy( pbTarget , ppArgP[ 1 ] ) ;

    unsigned bData      = cArgsP > 2 && ppArgP[ 2 ] && !strcmp( ppArgP[ 2 ] , "-d" ) ;
    unsigned bDataQuiet = cArgsP > 2 && ppArgP[ 2 ] && !strcmp( ppArgP[ 2 ] , "-q" ) ;
    unsigned bSpecial1  = cArgsP > 2 && ppArgP[ 2 ] && !strcmp( ppArgP[ 2 ] , "-1" ) ;
    unsigned bAssembler = cArgsP > 2 && ppArgP[ 2 ] && !strcmp( ppArgP[ 2 ] , "-a" ) ;
    if( bAssembler ) bData = 1 ;

    char pbPattern[ 0x1000 ] ;
    if( cArgsP > 3 && ppArgP[ 3 ] ) strcpy( pbPattern , ppArgP[ 3 ] ) ;
    else                            strcpy( pbPattern , "*" ) ;

    char* pbPathEnd = strrchr( pbPattern , '\\' ) ;

    sS* pst = 0 ;
    unsigned bFail = 0 ;

    {
        HANDLE oshBatonFind = CreateMutex( 0 , 0 , "ideafarm.filepile.find" ) ;
        WaitForSingleObject( oshBatonFind , INFINITE ) ;
    
        #if defined( __OS2__ )
            HDIR hdir = HDIR_SYSTEM ;
            FILEFINDBUF3 info ;
            ULONG cf = 1 ;
            bFail = !!DosFindFirst( pbPattern , &hdir , FILE_ARCHIVED | FILE_DIRECTORY | FILE_SYSTEM | FILE_HIDDEN | FILE_READONLY , &info , sizeof info , &cf , FIL_STANDARD ) ;
            if( !bFail && strcmp( info.achName , "." ) && strcmp( info.achName , ".." ) ) pst = new sS( pst , info.achName ) ;
        #elif defined( __NT__ )
            WIN32_FIND_DATA info ;
            HANDLE hfind = FindFirstFile( pbPattern , &info ) ;
            bFail = hfind == INVALID_HANDLE_VALUE ;
            if( !bFail && strcmp( info.cFileName , "." ) && strcmp( info.cFileName , ".." ) ) pst = new sS( pst , info.cFileName ) ;
        #endif
    
        while( !bFail )
        {
            #if defined( __OS2__ )
                cf = 1 ;
                bFail = !!DosFindNext( hdir , &info , sizeof info , &cf ) ;
                if( !bFail && strcmp( info.achName , "." ) && strcmp( info.achName , ".." ) ) pst = new sS( pst , info.achName ) ;
            #elif defined( __NT__ )
                bFail = !FindNextFile( hfind , &info ) ;
                if( !bFail && strcmp( info.cFileName , "." ) && strcmp( info.cFileName , ".." ) ) pst = new sS( pst , info.cFileName ) ;
            #endif
        }
    
        #if defined( __OS2__ )
        #elif defined( __NT__ )
            FindClose( hfind ) ;
            hfind = 0 ;
        #endif

        ReleaseMutex( oshBatonFind ) ;
        CloseHandle( oshBatonFind ) ;
    }

    if( !pst )
    {
        printf( "Filepile could not find any files matching \"%s\"\r\n" , pbPattern ) ;
    }
    else
    {
        #if defined( __OS2__ )

            HFILE hfo = 0 ;
            ULONG actionTaken = 0 ;
            if( DosOpen( pbTarget , &hfo , &actionTaken , 0 , 0 , OPEN_ACTION_CREATE_IF_NEW | OPEN_ACTION_OPEN_IF_EXISTS , OPEN_FLAGS_FAIL_ON_ERROR | OPEN_FLAGS_SEQUENTIAL | OPEN_SHARE_DENYREADWRITE | OPEN_ACCESS_WRITEONLY , 0 ) )
            {
                int rc = GetLastError() ;
                if( rc ) ;
            }
            else
            {
                ULONG ptr = 0 ;
                DosSetFilePtr( hfo , 0 , FILE_END , &ptr ) ; 
        
                while( pst )
                {
                    ULONG cbActual = 0 ;
                    if( !bData && !bDataQuiet )
                    {
                        DosWrite( hfo , pst->pb , strlen( pst->pb ) , &cbActual ) ; 
                        DosWrite( hfo , "\r\n" , 2 , &cbActual ) ; 
                    }
                    else
                    {
                        struct stat info ;
                        stat( pst->pb , &info ) ;
                        char* pbd = new char[ info.st_size ] ;
                
                        HFILE hfi = 0 ;
                        if( DosOpen( pst->pb , &hfi , &actionTaken , 0 , 0 , OPEN_ACTION_FAIL_IF_NEW | OPEN_ACTION_OPEN_IF_EXISTS , OPEN_FLAGS_FAIL_ON_ERROR | OPEN_FLAGS_SEQUENTIAL | OPEN_SHARE_DENYWRITE | OPEN_ACCESS_READONLY , 0 ) )
                        {
                            int rc = GetLastError() ;
                            if( rc ) ;
                        }
                        else
                        {
                            //U:: OBSOLETE (THE NT CODE IS CURRENT)
                            DosRead( hfi , pbd , info.st_size , &cbActual ) ;
                            char* pbTag1 = "\r\n//SOURCE: " ;
                            DosWrite( hfo , pbTag1    , strlen( pbTag1    ) , &cbActual ) ; 
                            DosWrite( hfo , pbPattern , strlen( pbPattern ) , &cbActual ) ; 
                            DosWrite( hfo , " : " , 3 , &cbActual ) ; 
                            DosWrite( hfo , pst->pb , strlen( pst->pb ) , &cbActual ) ; 
                            char* pbTag2 = " BEGIN\r\n#undef DNAME\r\n#define DNAME " ;
                            DosWrite( hfo , pbTag2 , strlen( pbTag2 ) , &cbActual ) ; 
                            DosWrite( hfo , pst->pb , strlen( pst->pb ) , &cbActual ) ; 
                            DosWrite( hfo , "\r\n" , 2 , &cbActual ) ; 
                            DosWrite( hfo , pbd , info.st_size , &cbActual ) ; 
                            DosWrite( hfo , pbTag1    , strlen( pbTag1    ) , &cbActual ) ; 
                            DosWrite( hfo , pbPattern , strlen( pbPattern ) , &cbActual ) ; 
                            DosWrite( hfo , " : " , 3 , &cbActual ) ; 
                            DosWrite( hfo , pst->pb , strlen( pst->pb ) , &cbActual ) ; 
                            DosWrite( hfo , " END\r\n" , 5 , &cbActual ) ; 
                            DosClose( hfi ) ;
                        }
                
                        delete pbd ; pbd = 0 ;
                    }
            
                    pst = pst->pD ;
                    if( pst ) delete pst->pU ;
                }
                DosClose( hfo ) ;
            }

        #elif defined( __NT__ )

            HANDLE hfo = CreateFile( pbTarget , GENERIC_WRITE , 0 , 0 , OPEN_ALWAYS , FILE_FLAG_SEQUENTIAL_SCAN , 0 ) ;
            bFail = hfo == INVALID_HANDLE_VALUE ;
            if( bFail )
            {
                printf( "ERROR: count not open OUTPUT file.\r\n" ) ;
            }
            else
            {
                ULONG ptr = 0 ;
                SetFilePointer( hfo , 0 , 0 , FILE_END ) ;
        
                while( pst )
                {
                    char pbNumbI[ 9 ] ;
                    char pbNumbIF[ 9 ] ;
                    char pbNumb[ 0x10 ] ;       //LONGER THAN NEEDED; FOR SAFETY MUST BE ABLE TO HOLD ALL VALUES IN RADIX a
                    char pbSub[ 2 ] ;
                    char bExe = 0 ;
                    {
                        int bNew = pst->pb[ 0 ] >= '1' && pst->pb[ 0 ] <= '9' ;

                        pbNumbI[ 0 ] = pst->pb[ 0xc + bNew ] ;
                        pbNumbI[ 1 ] = pst->pb[ 0xb + bNew ] ;
                        pbNumbI[ 2 ] = pst->pb[ 0xa + bNew ] ;
                        pbNumbI[ 3 ] = pst->pb[ 0x9 + bNew ] ;
                        pbNumbI[ 4 ] = pst->pb[ 0x8 + bNew ] ;
                        pbNumbI[ 5 ] = pst->pb[ 0x7 + bNew ] ;
                        pbNumbI[ 6 ] = pst->pb[ 0x6 + bNew ] ;
                        pbNumbI[ 7 ] = pst->pb[ 0x5 + bNew ] ;
                        pbNumbI[ 8 ] = 0 ;

                        pbNumbIF[ 0 ] = pst->pb[ 0x5 + bNew ] ;
                        pbNumbIF[ 1 ] = pst->pb[ 0x6 + bNew ] ;
                        pbNumbIF[ 2 ] = pst->pb[ 0x7 + bNew ] ;
                        pbNumbIF[ 3 ] = pst->pb[ 0x8 + bNew ] ;
                        pbNumbIF[ 4 ] = pst->pb[ 0x9 + bNew ] ;
                        pbNumbIF[ 5 ] = pst->pb[ 0xa + bNew ] ;
                        pbNumbIF[ 6 ] = pst->pb[ 0xb + bNew ] ;
                        pbNumbIF[ 7 ] = pst->pb[ 0xc + bNew ] ;
                        pbNumbIF[ 8 ] = 0 ;

                        unsigned idFileI = strtoul( pbNumbIF , 0 , 0x10 ) ;
                        unsigned idFile = idFileRankF( idFileI ) ;
                        _itoa( idFile , pbNumb , 0x10 ) ;
                        bExe = idFileI == 0x41000002 || idFileI == 0x41000003 ;

                        if( bSpecial1 && !bExe )
                        {
                            pbSub[ 0 ] = pst->pb[ 0xf ] ; // U:: TO FIND A BUG, e -> f
                            pbSub[ 1 ] = 0 ;
                        }
                        else pbSub[ 0 ] = 0 ;
                    }

                    char pbAll[ 0x1000 ] = "abcd" ; //U::INITIALIZED TO AVOID APPARENT COMPILER BUG
                    if( !pbPathEnd ) strcpy( pbAll , pst->pb ) ;
                    else
                    {
                        memcpy( pbAll , pbPattern , pbPathEnd - pbPattern + 1 ) ; // INCLUDING BACKSLASH
                        strcpy( pbAll           + ( pbPathEnd - pbPattern + 1 ) , pst->pb ) ;
                    }

                    ULONG cbActual = 0 ;
                    if( bSpecial1 )
                    {
                        if( bExe )
                        {
                            char* post1 = "#include \"\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\1snip." ;
                            char* post2 = ".ClINESiNdEF\"\r\n" ;
                            WriteFile( hfo , post1 , strlen( post1 ) , &cbActual , 0 ) ;
                            WriteFile( hfo , pbNumbIF , 8 , &cbActual , 0 ) ; 
                            WriteFile( hfo , post2 , strlen( post2 ) , &cbActual , 0 ) ;
                        }
                        else
                        {
                            char* post1 = "#include \"\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\1snip." ;
                            char* post2 = ".ClINESiNdEF\"\r\n" ;
                            WriteFile( hfo , post1 , strlen( post1 ) , &cbActual , 0 ) ;
                            WriteFile( hfo , pbNumbIF , 8 , &cbActual , 0 ) ; 
                            WriteFile( hfo , "." , 1 , &cbActual , 0 ) ;
                            WriteFile( hfo , pbSub , 1 , &cbActual , 0 ) ;
                            WriteFile( hfo , post2 , strlen( post2 ) , &cbActual , 0 ) ;
                        }
                    }
                    else if( !bData && !bDataQuiet )
                    {
                        WriteFile( hfo , pst->pb , strlen( pst->pb ) , &cbActual , 0 ) ; 
                        WriteFile( hfo , "\r\n" , 2 , &cbActual , 0 ) ;
                    }
                    else
                    {
                        struct stat info ;
                        stat( pbAll , &info ) ;
                        char* pbd = new char[ info.st_size ] ;
                
                        HANDLE hfi = CreateFile( pbAll , GENERIC_READ , FILE_SHARE_READ , 0 , OPEN_EXISTING , FILE_FLAG_SEQUENTIAL_SCAN , 0 ) ;
                        bFail = hfi == INVALID_HANDLE_VALUE ;
                        if( bFail )
                        {
                            printf( "ERROR: count not open INPUT file.\r\n" ) ;
                        }
                        else
                        {
                            int cDigitsNumb = 0 ;
                            {
                                int offd = 0 ;
                                while( pbNumb[ offd++ ] ) cDigitsNumb ++ ;
                            }

                            ReadFile( hfi , pbd , info.st_size , &cbActual , 0 ) ;
                            if( !bAssembler )
                            {
                                /* THIS IS AN EXAMPLE OF THE INTENDED RESULT FOR C++ FUNCTION:
    
                                    //SOURCE: 0b00002.* : 0b00002.func.fooeyF END
                                    #undef DDNAME
                                    #undef DDNUMB
                                    #undef IDFILE
                                    <body>
                                    #define IDFILE      (countT)0x123
                                    #define DDNUMB      (countT)0x12345678
                                    #define DDNAME       "0b00002.func.fooeyF"
                                    //SOURCE: 0b00002.* : 0b00002.func.fooeyF BEGIN
    
                                */
    
                                char* pbTagS = "//SOURCE: " ;
                                char* pbTagC = " : " ;
                                char* pbTagE = bData ? " END\r\n#undef DDNAME\r\n#undef DDNUMB\r\n#undef IDFILE\r\n" : " END\r\n" ;
                                char* pbTagI = "\r\n#define IDFILE      (countT)0x" ;
                                char* pbTagN = "\r\n#define DDNUMB      (countT)0x" ;
                                char* pbTagD = "\r\n#define DDNAME       \"" ;
                                char* pbTagR = bData ? "\"\r\n" : "\r\n" ;
                                char* pbTagB = " BEGIN\r\n" ;
    
                                WriteFile( hfo , pbTagS    , strlen( pbTagS    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbPattern , strlen( pbPattern ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagC    , strlen( pbTagC    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pst->pb   , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagE    , strlen( pbTagE    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbd       , info.st_size        , &cbActual , 0 ) ;
                                if( bData )
                                {
                                    WriteFile( hfo , pbTagI      , strlen( pbTagI    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pbNumb      , cDigitsNumb         , &cbActual , 0 ) ;
                                    WriteFile( hfo , pbTagN      , strlen( pbTagN    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pbNumbIF     , 8                  , &cbActual , 0 ) ;
                                    WriteFile( hfo , pbTagD      , strlen( pbTagD    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pst->pb     , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                }
                                WriteFile( hfo , pbTagR    , strlen( pbTagR    ) , &cbActual , 0 ) ;
                                WriteFile( hfo , pbTagS    , strlen( pbTagS    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbPattern , strlen( pbPattern ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagC    , strlen( pbTagC    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pst->pb   , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagB    , strlen( pbTagB    ) , &cbActual , 0 ) ; 
                            }
                            else
                            {
                                //U:: IDFILE

                                /* THIS IS AN EXAMPLE OF THE INTENDED RESULT FOR ASSEMBLY SEGMENT:
    
                                    ;SOURCE: 0b00002.* : 0b00002.func.fooeyF END
                                    ;DDNAME EQU
                                    ;DDNUMB EQU
                                    <body>
                                    ;DDNUMB EQU 20000b0H
                                    ;DDNAME EQU "0b00002.func.fooeyF"
                                    ;SOURCE: 0b00002.* : 0b00002.func.fooeyF BEGIN
    
                                */
    
                                char* pbTagS = ";SOURCE: " ;
                                char* pbTagC = " : " ;
                                char* pbTagE = bData ? " END\r\n;DDNAME EQU\r\n;DDNUMB EQU\r\n;IDFILE EQU\r\n" : " END\r\n" ;
                                char* pbTagI = "\r\n;IDFILE EQU " ;
                                char* pbTagN = "\r\n;DDNUMB EQU " ;
                                char* pbTagD = "H\r\n;DDNAME EQU \"" ;
                                char* pbTagR = bData ? "\"\r\n" : "\r\n" ;
                                char* pbTagB = " BEGIN\r\n" ;
    
                                WriteFile( hfo , pbTagS    , strlen( pbTagS    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbPattern , strlen( pbPattern ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagC    , strlen( pbTagC    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pst->pb   , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagE    , strlen( pbTagE    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbd       , info.st_size        , &cbActual , 0 ) ;
                                if( bData )
                                {
                                    WriteFile( hfo , pbTagI      , strlen( pbTagI    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pbNumb      , cDigitsNumb         , &cbActual , 0 ) ;
                                    WriteFile( hfo , pbTagN      , strlen( pbTagN    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pbNumbIF     , 8                  , &cbActual , 0 ) ;
                                    WriteFile( hfo , pbTagD      , strlen( pbTagD    ) , &cbActual , 0 ) ; 
                                    WriteFile( hfo , pst->pb     , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                }
                                WriteFile( hfo , pbTagR    , strlen( pbTagR    ) , &cbActual , 0 ) ;
                                WriteFile( hfo , pbTagS    , strlen( pbTagS    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbPattern , strlen( pbPattern ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagC    , strlen( pbTagC    ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pst->pb   , strlen( pst->pb   ) , &cbActual , 0 ) ; 
                                WriteFile( hfo , pbTagB    , strlen( pbTagB    ) , &cbActual , 0 ) ; 
                            }
                            CloseHandle( hfi ) ;
                        }
                
                        delete pbd ; pbd = 0 ;
                    }
            
                    pst = pst->pD ;
                    if( pst ) delete pst->pU ;
                }
                CloseHandle( hfo ) ;
            }

        #endif
    }

    return 0 ;
}
