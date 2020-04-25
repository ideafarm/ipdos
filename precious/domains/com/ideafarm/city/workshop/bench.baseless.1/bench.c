
//#define STDC

//#include "zlib.h"


// ZEXTERN int ZEXPORT deflateInit OF ( ( z_streamp strm , int level ) ) ;

// 0001:00005000       _deflateInit_@16           10006000 f   deflate.obj
//                     _deflateInit_@16




//int                   deflateInit3( int* , int ) ;

//int  _cdecl           fooF( int* , int ) ;             _fooF

//int __cdecl           fooF( int* , int ) ;             _fooF

//int  _fastcall        fooF( int* , int ) ;             @fooF@8

//int __fastcall        fooF( int* , int ) ;             @fooF@8

//int  _fortran         fooF( int* , int ) ;             FOOF

//int __fortran         fooF( int* , int ) ;             FOOF

//int  _pascal          fooF( int* , int ) ;             FOOF

//int __pascal          fooF( int* , int ) ;             FOOF

//int  _stdcall         fooF( int* , int ) ;             _fooF@8

//int __stdcall         fooF( int* , int ) ;             _fooF@8

//int  _watcall         fooF( int* , int ) ;             fooF_

//int __watcall         fooF( int* , int ) ;             fooF_




//int   cdecl           fooF( int* , int ) ;             _fooF

//int   fastcall        fooF( int* , int ) ;             _fooF

//int   fortran         fooF( int* , int ) ;             FOOF

//int   pascal          fooF( int* , int ) ;             FOOF

//int   stdcall         fooF( int* , int ) ;             FOOF

//int   watcall         fooF( int* , int ) ;             FOOF







//int __stdcall         fooF( int* , int ) ;             _fooF@8

//int __stdcall         fooF_( int* , int ) ;             fooF_

//int _stdcall         fooF_( int* , int ) ;             fooF_



void fooF( int cP )
{
    cP ;
}




int main( void )
{
    //int rc = deflateInit3( 0 , 0 ) ;

    int foo = 0x12345678 ;
    int goo = 0x87654321 ;

    if( foo < goo ) ;


    fooF( 3 ) ;









    //int rc = deflateInit( 0 , 0 ) ;         // deflateInit__

    return 0 ;
}
