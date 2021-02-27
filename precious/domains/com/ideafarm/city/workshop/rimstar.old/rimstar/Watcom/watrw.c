#include <windows.h>
#include <ddeml.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __NT__
  #define DLLEXPORT	__export
  #define EDITAPI	DLLEXPORT WINAPI
#elif defined( __WINDOWS__ )
  #define DLLEXPORT	__export
  #define EDITAPI	DLLEXPORT WINAPI
	HINSTANCE hInstance = NULL;
#elif defined( __OS2__ )
	typedef char *LPSTR;
  #define EDITAPI	__syscall
#else
  #error You should use the Watcom Compiler on this file
  #define EDITAPI
#endif

typedef enum {
    EDIT_MINIMIZE,
    EDIT_RESTORE,
    EDIT_SHOWNORMAL
} show_method;

extern int EDITAPI EDITConnect( void );
extern int EDITAPI EDITFile( LPSTR, LPSTR );
extern int EDITAPI EDITLocate( long, int, int );
extern int EDITAPI EDITLocateError( long, int, int, int, LPSTR );
extern int EDITAPI EDITShowWindow( show_method );
extern int EDITAPI EDITDisconnect( void );

#ifdef __cplusplus
};
#endif


HCONV		hConv = 0L;
DWORD		idInst = 0L;
BOOL		bInitialized = FALSE;
BOOL		bConnected = FALSE;
BOOL		bStartedEditor = FALSE;
FARPROC	lpDdeCallback;


void
NotConnected( void ) {
	hConv = 0L;
	bConnected = FALSE;
	bStartedEditor = FALSE;
} /* end NotConnected() */


HDDEDATA DLLEXPORT CALLBACK
DdeCallback( UINT uType, UINT uFmt, HCONV hConv,
				 HSZ hszTopic, HSZ hszItem,
				 HDDEDATA hData, DWORD dwData1, DWORD dwData2) {

	switch ( uType ) {
	case XTYP_DISCONNECT:
		if ( bConnected )
			NotConnected();
		return NULL;
	}
	return NULL;
} /* end DdeCallback() */


int EDITAPI
EDITConnect( void ) {
	char	*szProg = "RW.EXE -nsr";
	char  *szService = "RimStar";
	char  *szTopic = "System";
	HSZ	hszService, hszTopic;
	int	rc = 0;

	if ( bConnected )
		return TRUE;

	if ( !bInitialized ) {
		/* Setup for DDE */
	  #ifndef __NT__
		lpDdeCallback = MakeProcInstance( (FARPROC) DdeCallback, hInstance );
	  #else
		lpDdeCallback = (FARPROC) DdeCallback;
	  #endif
		idInst = 0;
		if ( DdeInitialize( &idInst, (PFNCALLBACK) lpDdeCallback,
								  APPCMD_CLIENTONLY, 0L ) != DMLERR_NO_ERROR )
			return FALSE;
		bInitialized = TRUE;
	}
	/*
	** Create string handles for connection
	*/
	hszService = DdeCreateStringHandle( idInst, szService, CP_WINANSI );
	hszTopic   = DdeCreateStringHandle( idInst, szTopic, CP_WINANSI );

	/*
	** Attempt to establish connection with the editor
	*/
	hConv = DdeConnect( idInst, hszService, hszTopic,
							  (PCONVCONTEXT) NULL );
	if ( !hConv ) {
		/*
		** Editor is not running - start it
		*/
		rc = WinExec( szProg, SW_RESTORE );
		if ( rc > 31 ) {
			/*
			** successfully started the editor
			*/
			hConv = DdeConnect( idInst, hszService, hszTopic,
									  (PCONVCONTEXT) NULL );
			if ( hConv )
				bStartedEditor = TRUE;
		}
	}

	DdeFreeStringHandle( idInst, hszService );
	DdeFreeStringHandle( idInst, hszTopic );

	if ( hConv ) {
		bConnected = TRUE;
		return TRUE;
	}
	return FALSE;
} /* end EDITConnect() */


BOOL
ExecCommand( char *szCommand ) {
	HDDEDATA	hddeData;

	hddeData = DdeClientTransaction( szCommand, strlen(szCommand) + 1,
												hConv, 0, CF_TEXT, XTYP_EXECUTE,
												5000, NULL );
	return hddeData != 0L;
} /* end ExecCommand() */


int EDITAPI
EDITFile( LPSTR szFile, LPSTR szHelpFile ) {
	char	szCommand[300];
	BOOL	rc;

	if ( !bConnected )
		return FALSE;

	if ( strlen(szFile) > 260 )
		return FALSE;

	sprintf( szCommand, "BufEditFile \"%s\"", szFile );
	rc = ExecCommand(szCommand);

	if ( !szHelpFile || strlen(szHelpFile) > 260 )
		return rc;
  #if 0
	sprintf( szCommand, "HelpDefaultName \"%s\"", szHelpFile );
	rc |= ExecCommand( szCommand );
  #endif
	return rc;
} /* end EDITFile() */


int EDITAPI
EDITLocateError( long lLine, int iCol,
					  int iLen, int idResource, LPSTR szErrmsg ) {
	char	szCommand[128];
	int	len;
	BOOL	rc;

	if ( !bConnected )
		return FALSE;

	sprintf(szCommand, "MovAbs %ld %d", lLine, iCol);
	rc = ExecCommand( szCommand );
  #if 0
	rc |= ExecCommand( "MarkBeginSel 4" );
	sprintf( szCommand, "MovRight %d", iLen );
	rc |= ExecCommand( szCommand );
	rc |= ExecCommand( "MarkEndSel" );
  #endif

	if ( szErrmsg ) {
		sprintf( szCommand, "Msg \"%.*s\"",
					sizeof( szCommand ) - 7, szErrmsg );
		rc |= ExecCommand( szCommand );
	}
  #if 0
	if ( idResource != 0 ) {
		idResource += 20000;
		sprintf( szCommand, "HelpJump %d", idResource );
		rc |= ExecCommand( szCommand );
	}
  #endif
	return rc;
} /* end EDITLocateError() */


int EDITAPI
EDITLocate( long lLine, int iCol, int iLen ) {
	return EDITLocateError( lLine, iCol, iLen, 0, NULL );
} /* end EDITLocate() */


int EDITAPI
EDITShowWindow( show_method iCmdShow ) {

	if ( !bConnected )
		return FALSE;

	switch ( iCmdShow ) {
	case EDIT_RESTORE:
	case EDIT_SHOWNORMAL:
		return ExecCommand( "WinMainShow" );
	case EDIT_MINIMIZE:
		return ExecCommand( "WinMainMinimize" );
	default:
		return FALSE;
	}
} /* end EDITShowWindow() */


int EDITAPI
EDITDisconnect( void ) {

	if ( !bConnected )
		return TRUE;

	if ( bStartedEditor )
		ExecCommand("ExitEditor");

	/* close connection */
	if ( hConv )
		DdeDisconnect(hConv);

	DdeUninitialize(idInst);
	bInitialized = FALSE;
  #ifndef __NT__
	FreeProcInstance(lpDdeCallback);
  #endif
	NotConnected();
	return TRUE;
} /* end EDITDisconnect() */


#ifndef __NT__
int WINAPI
LibMain( HANDLE hInst, WORD wDataSeg, WORD wHeapSize, LPSTR lpszCmdLine ) {
	hInstance = hInst;
	return 1;
} /* end LibMain() */
#endif


/*
** End module: watrw.c
*/
