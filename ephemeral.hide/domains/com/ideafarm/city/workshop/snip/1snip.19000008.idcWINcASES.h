
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.005000b.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/

/*1*//*idcWIN*//*1*/

case idwm_PAINT      : { idCmd = WM_PAINT      ; break ; }
case idwm_CLOSE      : { idCmd = WM_CLOSE      ; break ; }
case idwm_DESTROY    : { idCmd = WM_DESTROY    ; break ; }
case idwm_KEYDOWN    : { idCmd = WM_KEYDOWN    ; break ; }
case idwm_CHAR       : { idCmd = WM_CHAR       ; break ; }
case idwm_ENDSESSION : { idCmd = WM_ENDSESSION ; break ; }

#if defined( __OS2__ )
    //U:
#elif defined( __NT__ )
#endif


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

