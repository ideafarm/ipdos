
// THIS EXE REVERSES THE ORDER OF LINES IN STD IN, WRITING THE RESULT TO STDOUT
// THIS CPP FILE CAN BE COMPILED AND LINKED FOR OS/2 USING wpp386 and wlink WITHOUT USING OTHER OBJECT OR LIB FILES:
// ASSUME: NO LINE IS LONGER THAN 0x10000 BYTES

// DEBUGGING: IF I AM NOT FLIPPING THE WHOLE INPUT, LOOK FOR AN INVALID CHARACTER IN THE INPUT STREAM
// THIS WAS OBSERVED 20200418@1927 AND WAS CAUSED BY AN UNINTENDED CHARACTER THAT WAS AN ANSI CONTROL CHAR

#include <stdio.h>
#include <string.h>

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

int main( void )
{
    sS* pst = 0 ;
    char* pbLine = new char[ 0x10000 ] ;

    while( gets( pbLine ) ) pst = new sS( pst , pbLine ) ;

    while( pst )
    {
        printf( "%s\n" , pst->pb ) ;
        pst = pst->pD ;
        if( pst ) delete pst->pU ;
    }

    delete[] pbLine ;

    return 0 ;
}
