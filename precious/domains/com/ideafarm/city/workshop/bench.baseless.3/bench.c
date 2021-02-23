
#include <openssl\ssl.h>

int main()
{
	SSL_CTX* pContext1 = SSL_CTX_new( TLS_method() ) ;
	SSL_CTX* pContext2 = SSL_CTX_new( TLS_method() ) ;

    if( pContext1 )
	{
		pContext1 = pContext1 ;
	}

    return 0 ;
}
