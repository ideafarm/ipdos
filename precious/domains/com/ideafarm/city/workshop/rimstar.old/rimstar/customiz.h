/* customiz.h
**
** defines to handle special 'C' compiler keywords
**
** If you are getting errors when compiling source files with
** the source browser utility, #define'ing the offending
** identifier to nothing may correct the problem. A number
** of compiler specific keywords are handled in this fashion below.
**
** If your source code relies on compiler specific preprocessor
**	defines you can add them to this file.
**
** This file is automatically included by C.EXE & SB.EXE
** YOU DO NOT NEED TO ADD A #include FOR THIS FILE
** If your problem is not with a special keyword
** call RimStar Technical Support - and report the problem
*/

	/*
	** If you have code that will just not run through the browser
	** you can enclose it with a #ifndef __RIMSTAR__ or #if !__RIMSTAR__
	** for example:
	**		#ifndef __RIMSTAR__
	**			offending code
	**		#endif
	*/
	#define __RIMSTAR__	1
	/* The next two lines are needed for Visual Age 3.0 C headers */
   #define __IBMC__	300
	#define _M_I386	1
	#if 0
	 /* Microsoft C 6.0 pre-defined macro names */
	 #define _MSC_VER	600
	 #define MSDOS	1
	 #define M_I86	300
	#else
	 /* Microsoft Visual C++ pre-defined macro names */
	 #define _MSC_VER  900
	 #define _M_IX86   300
	#endif
	#define _Builtin
   #define _System
   #define _Optlink
   #define __cdecl
   #define _cdecl
   #define _Cdecl
   #define cdecl
   #define __pascal
   #define _pascal
   #define _Pascal
   #define pascal
	#define _Far16
	#define __far16
   #define _Seg16
   #define _Seg32
   #define _Packed
	#define _Inline
	#define _inline
	#define _Export
	#define register
   #define const
	#define volatile

	#define __based( a )
	#define _based( a )
	#define __cdecl
	#define __declspec( a )
	#define __export
   #define _export
   #define __far
   #define _far
   #define far
   #define __fortran
   #define __fastcall
	#define __huge
	#define _huge
	#define huge
	#define __inline
	#define _interrupt
	#define __interrupt
   #define _loadds
   #define __near
   #define _near
	#define near
	#define __saveregs
	#define __segment int
	#define _segment int
	#define __stdcall
	#define __unaligned
	#define __int64	int

/*
** end header: customiz.h
*/
