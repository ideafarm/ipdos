
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
\<A HREF=\"5.0050003.1.0.html\"\>definition\</A\>
it is illegal to refer to this symbol in the definition of an adam
*/
/**/
/*1*//*code to build arguments for an orphan process*//*1*/

    ZE( osTextT* , postExe ) ;
    if( strIdF( tinP , S1C('/') , psttExeP ) )
    {
        ZE( strokeS* , pstte ) ;
        diskMapFileNameF( tinP , pstte , psttExeP ) ; ___( pstte ) ;

        ZE( strokeS* ,psttExe ) ;

            diskMapFileNameHoverF( tinP , psttExe , pstte ) ; ___( psttExe ) ;
            delF( tinP , pstte ) ;

        strMakeF( tinP , LF , postExe , psttExe ) ; ___( postExe ) ;
        delF( tinP , psttExe ) ;
    }
    else { strMakeF( tinP , LF , postExe , psttExeP ) ; ___( postExe ) ; }

    ZE( osTextT* , post1Args ) ;
    {
        ZE( strokeS* , psttArgs ) ;

        #if defined( __OS2__ )
            if( !psttArgsP )
            {
                strFuseF( tinP , psttArgs , psttExe ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , strokeS()    ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , strokeS()    ) ; ___( psttArgs ) ;
            }
            else
            {
                strFuseF( tinP , psttArgs , psttExe   ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , strokeS()      ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , psttArgsP ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , strokeS()      ) ; ___( psttArgs ) ;
                strFuseF( tinP , psttArgs , strokeS()      ) ; ___( psttArgs ) ;
            }
        #elif defined( __NT__ )
            if( !psttArgsP ) { strMakeF( tinP , LF , psttArgs , T("")     ) ; ___( psttArgs ) ; }
            else             { strMakeF( tinP , LF , psttArgs , psttArgsP ) ; ___( psttArgs ) ; }
        #endif

        strMakeF( tinP , LF , post1Args , psttArgs ) ;
        delF( tinP , psttArgs ) ;
    }
    osFileNameC osf( tinP , third , postExe ) ;


//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
//
// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
//

