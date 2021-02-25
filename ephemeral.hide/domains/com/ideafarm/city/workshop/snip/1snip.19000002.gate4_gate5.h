
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.0050002.1.0.html\"\>definition\</A\>
i am the executive function of the executable image
i am called after the static image objects have been constructed
after i terminate, the static image objects are destructed and then the process ends
the only thing that i do is call threadLocalStorageNoTlsF
i look complicated because base operating systems vary slightly in how they pass me command line info, and whether they expect me to return a value
thread local storage is supported by storing a fingerprint value and a tinS* value (initially 0) on each thread's stack
 each thread's local storage consists of its tinS, object and a countT object on the thread stack that contains the address of that object
 most functions receive a reference to tinP as a parameter
 functions that do not, such as operators, call pTinF() to obtain the address (by walking up the stack) of the thread's tinS, object
*/
/**/

/*1*//*main*//*1*/

//U::O: THE DUPLICATE IMAGE IN 0100002 CAN BE ELIMINATED BY HAVING 0100002 RESOLVE REFERENCES USING 0100003W.EXE AS IF IT IS A DLL

#if defined( LOCALgRAPHIC )
    #if defined( __OS2__ )
        //U: OS/2
    #elif defined( __NT__ )
        int CALLBACK WinMain( HINSTANCE hWindowingClientIP , HINSTANCE hPreviousWindowingClientP , LPSTR postP , int idCmdShowP )
    #endif
#else
    #if defined( __OS2__ )
        sCountT  main( countT cHowP , osTextT** ppostHowP )
    #elif defined( __NT__ )
        int main( countT cHowP , osTextT** ppostHowP )
    #endif
#endif
{
    #if defined( LOCALgRAPHIC )
        sCountT rc = threadLocalStorageNoTlsF( ifcIDtYPEtLS_WINDOW , 0 , 0 , 0 , 0 , (countT)hWindowingClientIP , (countT)hPreviousWindowingClientP , (osTextT*)postP , (countT)idCmdShowP ) ;
    #else
        sCountT rc = threadLocalStorageNoTlsF( ifcIDtYPEtLS_CONSOLE , 0 , 0 , (countT)cHowP , (const osTextT**)ppostHowP ) ;
    #endif

    #if defined( __OS2__ )
    #elif defined( __NT__ )
        return rc ;
    #endif
}


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

