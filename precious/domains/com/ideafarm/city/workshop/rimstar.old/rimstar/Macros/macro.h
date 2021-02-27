/*
** Macro header: macro.h
**
** Copyright (C) 1993-1996 Brian L. Smith
** All rights reserved internationally.
**
**	Last revision: May 3, 1996
**
** Note: There are some differences between the Windows and OS/2
**       versions. Windows macro files should be compiled with the
**       -DWINDOWS switch so that the correct defines are included.
**       This file uses #ifdef where differences exist between 
**       operating systems.
**
** Rev. 10Nov95 for V2.0 macro compiler - int is now 32 bits
** Rev. 26Feb96 USERSTRINGDLG change cbText from USHORT to UINT32
**
*/

/*
** NOTE: The 'C' Macro compiler uses the following sizes for built-in types
**		char  -  8 bit signed
**	 	short - 16 bit signed
**		int	- 32 bit signed
**		long	- 32 bit signed
**		float & double - unsupported
**	bit field declarations in a structure are treated as ints ( ie. they are not really supported.)
**
*/

#ifndef MACRO_H_INCLUDED
#define MACRO_H_INCLUDED

typedef unsigned long	size_t;
typedef signed short		SHORT, *PSHORT, INT16, *PINT16;
typedef unsigned short	USHORT, *PUSHORT, UINT16, *PUINT16;
typedef int					INT, *PINT;
typedef unsigned int		UINT, *PUINT;
typedef signed long		LONG, *PLONG, INT32, *PINT32;
typedef unsigned long	ULONG, *PULONG, UINT32, *PUINT32;
typedef unsigned char	BYTE, *PBYTE, CHAR, *PCHAR, UINT8, *PUINT8;
typedef unsigned char	*PSZ, *LPSTR;
typedef signed char		INT8, *PINT8;
typedef void				*PVOID;

typedef UINT32	BOOL;

typedef UINT32 HANDLE;
typedef HANDLE HBUFFER;
typedef HANDLE HEVENT;
typedef HANDLE HFILE;
typedef HANDLE HHASH;
typedef HANDLE HINI;
typedef HANDLE HKEYBOARD;
typedef HANDLE HLIST, HLISTITEM;
typedef HANDLE HMARK;
typedef HANDLE HWINDOW;
typedef HANDLE HWND;

#ifndef NULL
#define NULL	0L
#endif
#ifndef TRUE
#define TRUE (1)
#endif
#ifndef FALSE
#define FALSE (0)
#endif

/* PopupMsgBox settings */
#ifndef WINDOWS
/* button types */
#define MB_OK						0x0000
#define MB_OKCANCEL				0x0001
#define MB_RETRYCANCEL			0x0002
#define MB_ABORTRETRYIGNORE 	0x0003
#define MB_YESNO					0x0004
#define MB_YESNOCANCEL			0x0005
#define MB_CANCEL					0x0006
#define MB_ENTER					0x0007
#define MB_ENTERCANCEL			0x0008

/* icon type */
#define MB_NOICON					0x0000
#define MB_ICONQUESTION			0x0010
#define MB_ICONEXCLAMATION		0x0020
#define MB_ICONASTERISK			0x0030
#define MB_ICONHAND				0x0040

/* modal flags */
#define MB_APPLMODAL				0x0000
#define MB_SYSTEMMODAL			0x1000
#define MB_HELP					0x2000
#define MB_MOVEABLE				0x4000
#else	/* WINDOWS defines for message boxes */
/* button types */
#define MB_OK						0x0000
#define MB_OKCANCEL				0x0001
#define MB_ABORTRETRYIGNORE 	0x0002
#define MB_YESNOCANCEL			0x0003
#define MB_YESNO					0x0004
#define MB_RETRYCANCEL			0x0005
#define MB_CANCEL					MB_OKCANCEL
#define MB_ENTER					MB_OK
#define MB_ENTERCANCEL			MB_OKCANCEL

/* icon type */
#define MB_NOICON					0x0000
#define MB_ICONHAND				0x0010
#define MB_ICONQUESTION			0x0020
#define MB_ICONEXCLAMATION		0x0030
#define MB_ICONASTERISK			0x0040

/* modal flags */
#define MB_APPLMODAL				0x0000
#define MB_SYSTEMMODAL			0x1000
#define MB_TASKMODAL				0x2000
#define MB_MOVEABLE				0x0000
#endif

/* additional icon type defines */
#define MB_QUERY					MB_ICONQUESTION
#define MB_WARNING				MB_ICONEXCLAMATION
#define MB_INFORMATION			MB_ICONASTERISK
#define MB_CRITICAL				MB_ICONHAND
#define MB_ERROR					MB_ICONHAND

/* default button */
#define MB_DEFBUTTON1			0x0000
#define MB_DEFBUTTON2			0x0100
#define MB_DEFBUTTON3			0x0200

/* return values from PopupMsgBox */
#define MBID_OK					1
#define MBID_CANCEL				2
#define MBID_ABORT				3
#define MBID_RETRY				4
#define MBID_IGNORE				5
#define MBID_YES					6
#define MBID_NO					7

#ifndef WINDOWS
#define MBID_ENTER				9
#define MBID_ERROR	  		  -1
#else
#define MBID_ENTER				1
#define MBID_ERROR	  			0
#endif

#ifdef WINDOWS
#define SW_HIDE					0
#define SW_SHOWNORMAL			1
#define SW_SHOWMINIMIZED		2
#define SW_SHOWMAXIMIZED		3
#define SW_SHOWNOACTIVATE		4
#define SW_SHOWMINNOACTIVE		7
#endif

/*
** System flags (SysQueryFlags / SysSetFlags)
*/
#define SYSTEM_SW_OPENFILE		0x00000001L
#define SYSTEM_SW_ERROR			0x00000002L
#define SYSTEM_SW_BROWSE		0x00000004L
#define SYSTEM_USE_TABS			0x00000008L
#define SYSTEM_KEEP_DIR			0x00000010L
#define SYSTEM_BACKUP			0x00000020L
#define SYSTEM_AUTOSAVE			0x00000040L
#define SYSTEM_SAVESTATE		0x00000080L
#define SYSTEM_CTRLZ				0x00000100L
#define SYSTEM_ONE_EXE			0x00000200L
#define SYSTEM_INSERT			0x00000400L
#define SYSTEM_KEEP_UNDO		0x00000800L
#define SYSTEM_TOOLBAR			0x00001000L
#define SYSTEM_TOOLBAR_H		0x00002000L
#define SYSTEM_KEEP_TILED		0x00004000L
#define SYSTEM_KEEP_CASCADED	0x00008000L
#define SYSTEM_TILE_TALL		0x00010000L
#define SYSTEM_READ_ONLY		0x00020000L
#define SYSTEM_RAW				0x00040000L
#define SYSTEM_SOUNDS			0x00080000L
#define SYSTEM_FILE_DETECT		0x00100000L
#define SYSTEM_MENUACCEL		0x00200000L
#define SYSTEM_CHK_TIMESTAMP	0x00400000L
#define SYSTEM_IGNORELONEALT	0x00800000L
#define SYSTEM_HORZ_SCROLL		0x01000000L
#define SYSTEM_VERT_SCROLL		0x02000000L
#define SYSTEM_RAW_STICKY		0x04000000L
#define SYSTEM_RELOAD_MODIFIED 0x08000000L

/*
** Buffer flags (BufQueryFlags / BufSetFlags)
*/
#define  BUFFER_TYPE				0x0000000FL	// mask to get BUFTYPE
#define  BUFFER_SCRAPTYPE		0x000000F8L // mask to get scrap type
#define  BUFFER_LOCKED			0x00004000L
#define  BUFFER_PRINT_IP		0x00008000L
#define  BUFFER_READ_ONLY  	0x00020000L
#define  BUFFER_RAW				0x00040000L
#define  BUFFER_MODIFIED		0x00080000L

/*
** Buffer types (BufCreateBuffer, BufEditFile)
*/
#define	BUFTYPE_NORMAL 		0x00000001L
#define	BUFTYPE_TEMP			0x00000002L
#define	BUFTYPE_SYSTEM 		0x00000004L
#define	BUFTYPE_SCRAP  		0x00000008L

/*
** Srap buffer types
*/
#define	SCRAPTYPE_NORMAL 		0x00000018L
#define	SCRAPTYPE_COLUMN		0x00000028L
#define	SCRAPTYPE_LINE 		0x00000038L
#define	SCRAPTYPE_EXCLUSIVE	0x00000048L

/*
** Window flags (WinQueryFlags / WinSetFlags)
*/
#define	WINDOW_INHEXMODE		0x00010000L	// window is in hex editing mode
#define  WINDOW_INHEXAREA		0x00020000L	// cursor is in the hex area of the window
#define  WINDOW_INHEXLOW		0x00040000L	// in low nibble (valid only if WINDOW_INHEXAREA set)

/*
** Selection types
*/
#define SELECT_INCLUSIVE	(1)
#define SELECT_NORMAL		(1)
#define SELECT_COLUMN		(2)
#define SELECT_LINE			(3)
#define SELECT_EXCLUSIVE	(4)

typedef struct _pselection_t SELECTION, *PSELECTION;
struct _pselection_t {
	SHORT		type;
	HBUFFER	hb;
	LONG		s_line;
	LONG		s_column;
	LONG		e_line;
	LONG		e_column;
};

typedef struct _markinfo_t MARKINFO, *PMARKINFO;
struct _markinfo_t {
	HBUFFER	hb;
	LONG		line;
	LONG		column;
	USHORT	usID;
	USHORT	usFlags;
};
/*
** Values for MARKINFO usFlags member (type of mark)
** you should AND the usFlags value to 
** to test the mark's type - other bits may be set
** in usFlags.
*/
#define  MARK_LOCAL     0x0000
#define  MARK_POS       0x0010
#define  MARK_SEL       0x0020
#define  MARK_GLOBAL    0x0040
#define  MARK_SYSTEM    0x0080

#pragma pack(1)
typedef struct _rawkey RAWKEY, *PRAWKEY;
struct _rawkey {
	unsigned	short	key;		// high byte has shift key modifiers - low byte has scan code
	unsigned char 	ascii;	// ascii representation if any
	unsigned	char	repeat;	// repeat count - 1 unless editor falls behind in processing
};

typedef struct _binding BINDING, *PBINDING;
struct _binding {
	ULONG		reserved1;		// leave strictly alone
	USHORT	reserved2;		// leave strictly alone
	USHORT	cKeys;			// number of keystrokes in following array
	PSZ		pszFunction;	// function string used in KbdBind
	USHORT	key[1];			// array of keystrokes ( key portion of RAWKEY )
};
#pragma pack()


/* Shift key modifiers - high byte of key */
#define KC_SHIFT	0x0800
#define KC_CTRL	0x1000
#define KC_ALT		0x2000


typedef struct _sys_font_attrs	FONTATTRIB, *PFONTATTRIB;
struct _sys_font_attrs {
	int	cxChar,
			cyChar,
			cyDesc;
};

/*
** PROGINFO is used to pass the required information to ExecAssoc
** If NULL is passed to ExecAssoc the editor uses the associations
** contained in the configuration file (maintained using the File
** Extensions Association dialog box) based on the file extension
** of the current buffer.
*/

/* Exec Assoc flags for ulFlags member */
#define EXECASSOC_NOWINDOW			0x00000001L		/* Don't create an output window */
#define EXECASSOC_IGNOREWARNINGS	0x00000002L		/* Don't jump to warnings */
#define EXECASSOC_SAVEMOD			0x00000004L		/* Write(save) modified files before executing */

typedef struct progInfo_ PROGINFO, *PPROGINFO;
struct progInfo_ {
	ULONG	reserved;		// reserved for internal use
	PSZ  	pszTitle;		// title of program - used to create output buffer's name
	PSZ  	pszPath;			// path & filename of executable to run
	PSZ  	pszDir;			// working directory defaults to current buffer's directory
	PSZ  	pszArgs;			// arguments to pass to program
	PSZ	pszRegExp;		// Regular expression used for default error msg processing
	PSZ	pszFunc;			// Error parsing function to use instead of reg expr method
	ULONG	ulFlags;			// flags which control output window creation
};

/* Flags for use with the ListCreate and ListSetFlags functions */
#define LIST_UNIQUE				0x0001	// duplicate items will not be added
#define LIST_IGNORE_CASE		0x0002	// case is not used in sorting, finding, duplicate checking
#define LIST_LIFO					0x0000	// add items to list in Last-In-First-Out order (new items added to head of list)
#define LIST_FIFO					0x0010	// add items to list in First-In-First-Out order (new items added at tail of list)
#define LIST_SORT_ASCENDING	0x0020	// add items in ascending alphabetic order
#define LIST_SORT_DESCENDING	0x0040	// add items in descending alphabetic order
/*
** This is the layout of a list item - you can cast an HLISTITEM to PLISTITEM
** to access the members of a list item.
*/
typedef struct _ListItem		LISTITEM, *PLISTITEM;
struct _ListItem {
	PSZ			pszText;		// text to place in the list box for this item
	ULONG			ulData;		// user data (not used by the editor, can be
									//		used to hold whatever you want, pointer to
									//		additional data, etc.)
	LONG			index;		// if list is used with DlgUserList - position to
									//		insert the item into list box	or -1 to insert
									//		at the end of the list. If not used with
									//		DlgUserList, future version of the editor will
									//		permit you to sort the list using this field
	PLISTITEM	prev;			// pointer to prev item in list
	PLISTITEM	next;			// pointer to next item in list - last item in
									//		the list must set this member to NULL
};

/*	NOTE: Changed (OS/2)V2.1.05 / (Windows)3.1.15 - Sept 6, 1994
**
** The new List... functions can now be used to build the list of items used by
** DlgUserList(). You can still build your own linked lists for use with DlgUserList
** but it is easier to use the new List functions. Note the 'prev' member of a LISTITEM
** is used to maintain a doubly linked list. If you build your own lists to use with
** DlgUserList you do not need to set this member, the List functions however do maintain
** this 'prev' link and therefore you should not modify it if you use the List functions.
** The typedefs USERLISTITEM and PUSERLISTITEM have been changed to LISTITEM and PLISTITEM
** so you will need to edit your macro functions to make this change.
*/

/* DlgUserList() */
typedef struct _UserListDlg	USERLISTDLG, *PUSERLISTDLG;
struct _UserListDlg {
	UINT32			cbStruct;	// sizeof this structure
	PSZ				pszTitle;	// Text to place in title bar of the dialog box
	PSZ				pszPrompt;	// Text to place above the list box
	PLISTITEM		pItems;		// Pointer to the head of a linked list of item
										// structures. The editor follows the 'next'
										// link to place each item in the list box.
	PLISTITEM		pItemSel;	// On input:   item to position to in the list
										// 				box or NULL to use the 1st item.
										// On output:  item user selected or NULL if
										// 				no item selected. This is a
										// 				pointer to one of the
										// 				LISTITEM structures.
};

/* DlgUserString() */
typedef struct _UserStringDlg USERSTRINGDLG, *PUSERSTRINGDLG;
struct _UserStringDlg {
	UINT32	cbStruct;	// sizeof this structure
	PSZ		pszTitle;	// Title of dialog box
	PSZ		pszPrompt;	// Prompt text
	UINT32	cbText;		// len of pszText buffer
	PSZ		pszText;		// Buffer to place input
	HLIST		hList;		// List of items to place in combo box (New 6 Sept 1994)
};


/*
** DlgFiles()
**
**	FILESDLG_MULTIPLE
**   allow multiple files to be selected. Selected files are returned in
**   FILESDLG.hList, DlgFiles will create this list, hList should be set to 0 when calling DlgFiles
**   you should destroy this list when you are finished
**   with it by using the ListDelete()  function.
**
**	FILESDLG_NEW
**   If the file selected exists, the user is prompted as to whether or not
**   the file should be replaced, if the answer is no the dialog will remain
**   open and a different file can be selected, if the answer is yes then the
**   filename will be returned. This flag is ignored if FILESDLG_MULTIPLE
**   is specified.
*/

// FILESDLG.flags values
#define	FILESDLG_MULTIPLE		0x01
#define	FILESDLG_NEW			0x02

typedef struct file_dlg_data_	 FILESDLG, *PFILESDLG;
struct file_dlg_data_ {
   UINT32   cbStruct;		// set this to sizeof(FILESDLG)
   PSZ      pszTitle;		// Title of the dialog box
	PSZ		pszDir;			// current working directory to show
   PSZ      pszFileFilter;	// wildcard string
   PSZ      pszPathName;	// filename chosen if single selection
   INT      cbMaxPathName;	// length of pszPathName including null terminator
	UINT32	flags;			// controls behavior of dialog see comments above
	HLIST		hListFiles;		// returned list of files if multiple selection enabled
	HLIST		hListFilter;	// list of file types - the ulData for each list item must be a pointer to a string containg the wildcards for that type
	INT		nFilterIndex;	// zero based index of file type filter to use initially
};


/*
** The editor has a color table which is an arrary containing
** 256 entries. Each entry holds a foreground and background
** RGB color value. The editor uses the color table to display
** text in various colors, specifically the default SyntaColor support
** uses the color table entries 0,3-8.
** Color table values can be set using ColorSet() and queried using ColorQuery()
**
**	Each character in a buffer can have it's own color attribute. This attribute
** is in the range 0-255 and corresponds to an index into the color table.
** Use AttrSetColor() or AttrSetColorAt() to change the attribute for a range
** of characters. The color attribute for the character at the current position
** or at a given offset can be queried using AttrQueryColor().
**
**	The settings for the color table can also be maintained using the Set Colors
** dialog ( DlgConfigColors() function).
** NOTE: Only the 1st 64 color table settings are saved in the editor's
** configuration file.
**
*/
/* Predefined Color table indecies */
#define  COLOR_TEXT					0
#define  COLOR_SELECTEDTEXT		1
#define	COLOR_STATUSLINE			2
#define	COLOR_KEYWORDS				3
#define	COLOR_IDENTIFIERS	   	4
#define	COLOR_COMMENTS			   5
#define	COLOR_STRINGLITERALS	   6
#define	COLOR_NUMBERS			   7
#define	COLOR_PREPROCESSOR	   8
#define	COLOR_INFOMSG			   9
#define	COLOR_WARNINGMSG		  10
#define	COLOR_ERRORMSG			  11
#define	COLOR_ERRORLINE		  12
#define	COLOR_WARNINGLINE		  13

#ifdef WINDOWS
	/* Windows RGB Color value (COLORREF) - 0x00BBGGRR */
	#define RGB(r,g,b)		((ULONG)(((BYTE)(r)|((ULONG)((BYTE)(g))<<8))|(((ULONG)(BYTE)(b))<<16)))
	#define GetRValue(rgb) ((BYTE)(rgb))
	#define GetGValue(rgb) ((BYTE)(((USHORT)(rgb)) >> 8))
	#define GetBValue(rgb) ((BYTE)((rgb)>>16))
#else
	/* OS/2 RGB Color value (RGB) - 0x00RRGGBB */
	#define RGB(r,g,b)		((ULONG)(((BYTE)(b)|((ULONG)((BYTE)(g))<<8))|(((ULONG)(BYTE)(r))<<16)))
	#define GetRValue(rgb)	((BYTE)((rgb)>>16))
	#define GetGValue(rgb)	((BYTE)(((USHORT)(rgb)) >> 8))
	#define GetBValue(rgb)	((BYTE)(rgb))
#endif

/*
** Primitive variables (defined internally in the editor)
*/

#define OSTYPE_OS2	1
#define OSTYPE_WIN	2
#define OSTYPE_WINNT	3
#define OSTYPE_WIN95	4
extern UINT		OSType; // 1=OS/2 2=Win32s(Windows 3.1x) 3=Win32(Windows/NT) 4=Win95

#define WIN310			0x030A
#define WIN311			0x030B
#define WINNT350		0x0332
#define WINNT351		0x0333
#define WIN95			0x0400
// high byte of low word = major version, low byte of low word = minor version
extern UINT		OSVersion;

extern BOOL    SyntaColorEnabled;

// SyntaColorDelayedUpdate
// if true: holds updating color until no keystrokes are in the queue
extern BOOL    SyntaColorDelayedUpdate;

// FILE_OFFSET: current offset in buffer DO NOT EVER assign to this variable
// if you assign to this variable the editor will not sync the display
// with the buffer, you have been warned! FILE_OFFSET is a very useful and
// much faster than using BufQueryOffset.
extern INT		FILE_OFFSET;

/*
** Functions which are built into the editor
*/
extern int		_next_char( void );
extern int		_prev_char( void );

extern UINT		AttrQueryColor( /* optional: long offset */ );
extern void		AttrSetColor( INT s_line, INT s_column, INT e_line, INT e_column, UINT colorIndex );
extern void		AttrSetColorAt( UINT start_offset, UINT cbBytes, UINT colorIndex );

extern void 	BufBackspace( void );
extern INT 		BufCopyToScrap( BOOL append );
extern HBUFFER BufCreateBuffer( PSZ buf_name, PSZ pathname, UINT ulCreateFlags );
extern HBUFFER BufCreateScrapFromSel( void );
extern INT 		BufCutToScrap( BOOL append );
extern UINT 	BufCopyWordToString(PSZ pszBuf, UINT cBytes );
extern INT 		BufDeleteBuffer( HBUFFER );
extern INT 		BufDeleteBufferWithConfirm( HBUFFER );
extern INT 		BufDeleteChar( UINT count );
extern INT 		BufDeleteCharOrSelection( void );
extern INT 		BufDeleteCurrentBuffer( void );
extern INT 		BufDeleteLeft( UINT count );
extern INT 		BufDeleteLine( UINT count);
extern INT 		BufDeletePrevChar( UINT count );
extern INT 		BufDeleteSel( void );
extern INT 		BufDeleteToEOL( void );
extern INT 		BufDeleteToSOL( void );
extern void 	BufDeleteWhitespace( void );
extern INT		BufEditFile( PSZ pathname, UINT ulCreateFlags );
extern HBUFFER BufFindBuffer( PSZ pathname, INT inclSysBufs );
extern INT 		BufIndentColumn( INT start, INT end );
extern INT 		BufInsertChar( int ch );
extern INT 		BufInsertFile( PSZ pathname );
extern INT 		BufInsertNewline( void );
extern void 	BufInsertString( PSZ psz );
extern BOOL		BufIsOutputBuffer( HBUFFER );
extern INT		BufLoadFile(HBUFFER hb, PSZ pathname, UINT ulFlags);
extern void 	BufNewFile( void );
extern INT 		BufNewlineIndent( void );
extern void 	BufNextBuffer( void );
extern void 	BufOrderFirst( void );
extern void 	BufOrderLast( void );
extern void 	BufOrderNext( void );
extern void 	BufOrderPrev( void );
extern INT 		BufPasteScrap( HBUFFER hbScrap );
extern INT 		BufPrevBuffer( void );
extern INT	 	BufQueryBufferSize( void );
extern UINT		BufQueryChar( INT offset );
extern INT 		BufQueryColumn( void );
extern HBUFFER BufQueryCurrentBuffer( void );
extern HBUFFER BufQueryCurrentScrap( void );
extern INT		BufQueryDistanceToTab( void );
extern PSZ 		BufQueryFilename( HBUFFER /* optional */ );
extern INT		BufQueryFilesize( void );
extern UINT		BufQueryFlags( HBUFFER /* (optional) */ );
extern INT		BufQueryInCommentC(INT offset);
extern INT		BufQueryInCommentCpp(INT offset);
extern BOOL		BufQueryIsTabstop( INT column );
extern INT 		BufQueryLine( void );
extern INT 		BufQueryLines( void );
extern INT 		BufQueryLineLength( void );
extern HBUFFER BufQueryLinkedBuffer( HBUFFER /* optional */ );
extern INT 		BufQueryModified( HBUFFER );
extern HBUFFER BufQueryNextBuffer( HBUFFER, INT inclSys );
extern INT		BufQueryNextTab( INT column );
extern INT 		BufQueryOffset( void );
extern INT 		BufQueryPastEOL( void );
extern void 	BufQueryPosition( INT *line, INT *column );
extern HBUFFER BufQueryPrevBuffer( HBUFFER, INT inclSys );
extern INT		BufQueryPrevTab( INT column );
extern HWINDOW	BufQueryWindow( HBUFFER );
extern PSZ   	BufRead( INT cBytes );
extern void		BufRefreshWindows(HBUFFER);
extern INT 		BufSetBufferFromID(USHORT);
extern INT 		BufSetCurrentBuffer( HBUFFER );
extern UINT		BufSetFlags( UINT mask, UINT newFlags );
extern void 	BufSetMaxTabColumn( INT );
extern INT 		BufSetModified( INT );
extern void 	BufSetTabs( PSZ pszTabStops );
extern HBUFFER BufSwitchBuffer( HBUFFER );
extern void		BufSyncWindows( HBUFFER );
extern INT 		BufToggleModified( void );
extern INT		BufTransfer(HBUFFER src, INT s_line, INT s_column, INT e_line, INT e_column );
extern INT		BufTransferBytes(HBUFFER src, INT offset, INT cBytes );
extern INT 		BufWrite( HBUFFER /* , BOOL fSync = FALSE (optional) */ );
extern INT 		BufWriteSel( void );
extern INT 		BufZapBuffer( HBUFFER );

extern INT 		ChgDir(PSZ dir );
extern INT 		ChgDirOfFile( PSZ pathname );

extern void		ColorQuery(INT usClrIndex, UINT *pulRGBFore, UINT *pulRGBBack);
extern void		ColorSet(INT usClrIndex, UINT ulRGBFore, UINT ulRGBBack);

// Compare / Merge Files dialogs
typedef struct comp_mrg_parms_	COMPMRGPARMS, *PCOMPMRGPARMS;
struct comp_mrg_parms_ {
	UINT32	cbSize;
	INT32		cbFile1;
	char		*pszFile1;
	INT32		cbFile2;
	char		*pszFile2;
	INT32		cbMergeFile;
	char		*pszMergeFile;
};
extern int CompareDlg(PCOMPMRGPARMS pcomp);
extern int MergeDlg(PCOMPMRGPARMS pmerg);

extern void		DlgBufferList( void );
extern void		DlgConfigAssoc( void );
extern void		DlgConfigColors( void );
extern void		DlgConfigCursors( void );
extern void		DlgConfigStatusFont( void );
extern void		DlgConfigTextFont( void );
extern void		DlgConfigTreeFont( void );
extern void		DlgConfigGlobals( void );
extern INT		DlgFiles( PFILESDLG );
extern void		DlgGotoLine( void );
extern void		DlgOpenFile( void );
extern void		DlgRenameBuffer( void );
extern INT		DlgUserList( PUSERLISTDLG );
extern INT		DlgUserString( PUSERSTRINGDLG );
extern void		DlgVersion( void );

extern void		ErrJumpToError( void );
extern int 		ErrLoadErrorFile(PSZ pszFilename, UINT ulFlags);
extern void		ErrNextError( void );
extern void		ErrPrevError( void );
extern HBUFFER	ErrQueryErrorBuffer(void);

extern INT  	EventDeregisterEvent( HEVENT );
extern INT  	EventDisableEvent( HEVENT );
extern INT  	EventEnableEvent( HEVENT );
extern HEVENT	EventRegisterEvent( UINT usID, UINT fsFlags, PSZ function, PVOID pUserData);
extern INT  	EventTriggerEvent( UINT usID, PVOID data );
/*
** Event handlers should have this prototype:
**		INT event_handler ( UINT usEventID, PVOID pData, PVOID pUserData );
**
** pData is what is passed by EventTriggerEvent (see manual for what predefined events pass)
** pUserData is data which has been registered to be passed to a specific event handler
**	pUserData is set using the last arg to EventRegisterEvent()
** Each event handler registered for a particular event will be passed the same pData when
** an event is triggered; pUserData will be non-null only if that specific event handler
** was registered with a non-null pUserData argument to EventRegisterEvent.
*/

extern INT ExecAssoc( PROGINFO *pInfo );
extern INT ExecAppl( PSZ pszProg, PSZ pszArgs, UINT showFlags);
extern void  ExecKillProcess( void );
extern void  ExecFunction( PSZ funcStr );
extern UINT ExecProgram( PSZ pszProgpath, PSZ pszArgs, PSZ pszFunction,
									PVOID pData, INT hfStdin, INT hfStdout, INT hfStderr );

extern INT ExecSession( PSZ 	pszTitle,	 // Program title - for title bar
								PSZ 	pszProgpath, // path & filename of executable
								PSZ 	pszArgs,		 // command line to pass to pgm
								PSZ 	pszEnv,		 // environment string
								UINT 	fgbg,			 // start in foreground/background
								UINT	sessionType, // type of session windowed, full-screen, PM, etc.
								UINT	pgmCtrl,		 // start visible/minimized/maximized etc.
								UINT	xPos,			 // if pgmCtrl high bit set x pos of window
								UINT	yPos,			 // y pos of window
								UINT	cx,			 // width of window
								UINT	cy,			 // height of window
								PSZ	pszErrBuf,	 // if exec fails - buffer to place possible reason
								UINT	errBufLen ); // length of error buffer
extern INT		ExecWithCapture( PROGINFO *pInfo );
extern void 	ExitEditor( void );
extern void 	ExportClipboard( void );

extern PSZ 		GetCurrentDir( PSZ buffer, UINT cBytes );

extern void 	HelpExtended( void );
extern void 	HelpForHelp( void );
extern void 	HelpIndex( void );
extern void 	HelpKeys( void );
extern void 	HelpQueryInfHelp( void );
extern void 	HelpQueryQuickHelp( void );

extern void 	ImportClipboard( void );

// flags for IniOpen
#define INI_CREATE		0x0001
#define INI_TRUNC 		0x0002
#define INI_READONLY		0x0004

extern int    IniClose( HINI pif );
extern BOOL   IniDeleteKey( HINI pif, const char *pszSection, const char *pszKey );
extern BOOL   IniDeleteSection( HINI pif, const char *pszSection );
extern HINI   IniOpen( const char *filename, unsigned flags );
extern char * IniParseField( const char *str, char *buffer, int cBuf );
extern int    IniQueryInt( HINI pif, const char *pszSection, const char *pszKey, int idef );
extern int    IniQueryString( HINI pif, const char *pszSection, const char *pszKey, const char *pszDefault, char *pszBuffer, int cbBuf );
extern BOOL   IniWriteString( HINI pif, const char *pszSection, const char *pszKey, const char *pszBuffer );
extern BOOL   IniWriteInt( HINI pif, const char *pszSection, const char *pszKey, int value );

extern INT 			KbdBind( PSZ keyStr, PSZ fname );
extern INT 			KbdBindCountry( INT country, INT code_page );
extern INT 			KbdBindTypables(char *selfInsert, char *enter);
extern void			KbdBufferFlush( void );
extern PRAWKEY		KbdBufferQueryKey( void );
extern PRAWKEY		KbdBufferGetKey( void );
extern INT			KbdBufferPush( PRAWKEY );
extern INT			KbdBufferInsert( PRAWKEY );
extern void			KbdBufferUngetKey( UINT nKeys );
extern HKEYBOARD 	KbdCreateKeyboard( void );
extern void 		KbdDestroyKeyboard( HKEYBOARD );
extern INT 			KbdIsKeyboard( HKEYBOARD);
extern PSZ 			KbdKeysToString( PUSHORT ausKeys, INT nItems );
extern INT 			KbdMacroLoad( PSZ pathname );
extern INT 			KbdMacroPause( void );
extern INT 			KbdMacroPlay( void );
extern INT 			KbdMacroRecord( void );
extern INT 			KbdMacroSave( PSZ pathname );
extern HKEYBOARD 	KbdPop( void );
extern INT 			KbdPush( HKEYBOARD );
extern PBINDING	KbdQueryBinding( PSZ function, PBINDING pBind );
extern PSZ 			KbdQueryFunction( PUSHORT ausKeys, INT nKeys );
extern PSZ 			KbdQueryLastFunction( void );
extern UINT			KbdQueryLastKey( void );
extern UINT			KbdQueryPrevKey( void );
extern HKEYBOARD 	KbdQueryBufferKeyboard( void );
extern HKEYBOARD 	KbdQueryCurrentKeyboard( void );
extern HKEYBOARD 	KbdQueryWindowKeyboard( void );
extern HKEYBOARD 	KbdSetBufferKeyboard( HKEYBOARD );
extern HKEYBOARD 	KbdSetCurrentKeyboard( HKEYBOARD );
extern HKEYBOARD 	KbdSetWindowKeyboard( HKEYBOARD );
extern PUSHORT		KbdStringToKeys( PSZ s );
extern INT			KbdUnbindAll( HKEYBOARD );
extern INT			KbdUnbindBinding( PBINDING p );
extern INT			KbdUnbindKey( char *pszKeySequence );

extern HHASH		LangAddKeywords( HHASH hh, PSZ *apszKeywords );
extern HHASH		LangLoadKeywords( PSZ *apszKeywords, BOOL fIgnoreCase );
extern INT			LangFreeKeywords( HHASH hh );

extern void 		LibAutoload( PSZ filename, PSZ funcName, ... );
extern void 		LibExecFunction( PSZ function );
extern PVOID 		LibGetArgPtr( UINT arg_n );
extern UINT			LibQueryArgCount( void );
extern INT 			LibQueryFunction( PSZ function );
extern INT			LibLoadMacro( PSZ pathname );
extern INT			LibUnloadMacro( PSZ pathname );

extern HLIST		ListCreate(PSZ pszName, UINT ulID, UINT ulFlags, INT lMaxItems);
extern BOOL			ListDelete(HLIST pList);
extern HLIST		ListFromID(UINT ulID);
extern HLIST		ListFromName(PSZ pszName);
extern BOOL			ListIsList(HLIST pList);
extern HLISTITEM	ListItemAdd(HLIST pList, PSZ pszText, UINT ulData, INT lIndex);
extern INT			ListItemCount(HLIST pList);
extern void			ListItemDelete(HLIST pList, HLISTITEM pItem);
extern void 		ListItemDeleteAll(HLIST pList);
extern HLISTITEM	ListItemFind(HLIST pList, PSZ pszText);
extern HLISTITEM 	ListItemFirst(HLIST pList);
extern HLISTITEM 	ListItemLast(HLIST pList);
extern HLISTITEM 	ListItemNext(HLISTITEM pItem);
extern HLISTITEM 	ListItemPrev(HLISTITEM pItem);
extern UINT			ListQueryFlags(HLIST pList);
extern INT			ListQueryLimit(HLIST pList);
extern void			ListReverse(HLIST pList);
extern UINT			ListSetFlags(HLIST pList, UINT ulFlags);
extern INT			ListSetLimit(HLIST pList, INT lMaxItems);

extern INT		MarkAdjustSel( void );
extern HMARK	MarkAllocGlobal( UINT usID );
extern HMARK	MarkAllocLocal( UINT usID );
extern INT		MarkBeginSel( INT type );
extern INT		MarkColumn( void );
extern void		MarkCreateSel( PSELECTION );
extern INT		MarkEndSel( void );
extern INT		MarkExclusive( void );
extern INT		MarkFree(HMARK);
extern UINT		MarkFreeAllGlobals( void );
extern UINT		MarkFreeAllLocals( void );
extern INT		MarkGoto(HMARK);
extern BOOL		MarkIsMark(HMARK);
extern INT		MarkLine( void );
extern INT		MarkNormal( void );
extern void		MarkPopPos(INT move, UINT count);
extern HMARK	MarkPushPos(void);
extern HMARK	MarkQueryGlobalFromID(UINT id);
extern PMARKINFO MarkQueryInfo(HMARK hMark, PMARKINFO pInfo);
extern BOOL		MarkQueryIsSelOpen(void);
extern HMARK	MarkQueryLocalFromID(UINT id);
extern HMARK	MarkQueryPosFromID(UINT id);
extern INT		MarkQuerySel(PSELECTION pSel, INT adjust);
extern INT		MarkQuerySelExcl(PSELECTION pSel, INT adjust);
extern INT		MarkQuerySelType(void);
extern INT		MarkQuerySelWouldAdjust(void);
extern void		MarkRemoveAllSel(void);
extern INT		MarkRemoveSel(void);
extern HMARK	MarkResetMark(HMARK);
extern INT		MarkResumeSel(void);
extern INT		MarkSetID(HMARK hMark, UINT id);
extern INT		MarkSetMark(HMARK hMark, INT new_line, INT new_col);
extern INT		MarkSetSelType(INT type);
extern INT		MarkSwapSel( void );

extern HWND		MnuCreateMenu(void);
extern INT 		MnuDeleteItem( HWND hwndParentMenu,
										UINT subMenuID,
										UINT id );

extern HWND  	MnuDeleteSubMenu( HWND hwndParentMenu,
											UINT parentMenuID,
											UINT subMenuID );

extern INT 		MnuInsertItem( HWND hwndParentMenu,
										UINT subMenuID,
										UINT pos,
										UINT afAttrib,
										UINT id,
										PSZ pszText,
										PSZ pszHelp );

extern HWND  	MnuInsertSubMenu( HWND hwndParentMenu,
											UINT subMenuID,
											UINT pos,
											UINT id,
											PSZ pszText,
											PSZ pszHelp );

extern BOOL		MnuPopupMenu(HWND hwndMenu, INT idItem, UINT32 fBtnsDown, INT x, INT y);

extern BOOL	 	MnuSetItemAttr( HWND hwndMenu,
										   UINT idItem,
										   BOOL fIncludeSubMenus,
										   UINT usMask,
										   UINT usData );

extern void	 	MnuSetItemText(UINT idItem, PSZ text, PSZ accel);

extern INT		MovAbs( INT line, INT column );
extern INT		MovBottomWin( void );
extern INT		MovDown( INT count );
extern INT		MovEOF( void );
extern INT		MovEOL( void );
extern INT		MovEndBrief( void );
extern INT		MovLeft( INT count );
extern INT		MovNextChar( INT count );
extern INT		MovUp( INT count );
extern INT		MovPageDown( void );
extern INT		MovPageUp( void );
extern INT		MovPrevChar( INT count );
extern INT		MovPrevTabPos( void );
extern INT		MovRel( INT line_offset, INT col_offset );
extern INT		MovRight( INT count );
extern INT		MovSOF( void );
extern INT		MovSOL( void );
extern INT		MovSOT( void );	/* returns column moved to */
extern INT		MovStartBrief( void );
extern INT		MovToLine( INT line );
extern void		MovToMouse( void );
extern INT		MovTopWin( void );
extern void		MovWordLeft( void );
extern void		MovWordRight( void );

/* Status line message area functions - see also Prompt... functions */
extern void		Msg( PSZ pszMsgText, int clrTblIndex );
extern void		MsgClear(void);
extern void		MsgError( PSZ pszText );
extern void		MsgInfo( PSZ pszText );
extern INT		MsgPrintf( PSZ fmt, ... );	/* replacement for PromptPrintf() */
extern INT		MsgSetLevel( INT msgLevel );
extern void		MsgWarning( PSZ pszText );

extern void		Nothing( void );

extern int PjtNew(void);
extern int PjtOpen(char *);
extern void PjtClose(void);
extern void PjtSettings(void);
extern int PjtUpdateBrowserDB(void);
extern int PjtBuildBrowserDB(void);
extern int PjtOpenBrowserDB(void);
extern int PjtBuild(void);
extern int PjtBuildAll(void);
extern int PjtDebugBuild(void);
extern int PjtDebugBuildAll(void);
extern int PjtRunExecutable(void);
extern int PjtDebugExecutable(void);
extern char* PjtQueryFileName(void);


extern INT		PopupMsg( PSZ msg, PSZ title);
extern INT		PopupMsgBox( PSZ msg, PSZ title, UINT ulFlags );

/*
** These 'Pos' function do not retain undo information.
** they just move you to the desired location.
** They are faster than their 'Mov' versions, so if you don't need to retain undo
** information while you are moving around, these are better choice for use in macros.
*/
extern INT		PosAbs(INT new_line, INT new_col);
extern INT		PosEOF(void);
extern INT		PosEOL(void);
extern INT		PosSOF(void);
extern INT		PosSOL(void);
extern INT		PosSOT(void);
extern INT		PosNextChar(INT count);
extern INT		PosPrevChar(INT count);
extern INT		PosRel(INT line_offset, INT col_offset);
extern INT		PosToOffset( INT offset );

extern INT		Print( void );

/* Status line message area functions */
extern PSZ   	PromptGetInput( PSZ prompt, PSZ buffer, UINT buflen, HLIST hListHistory );
extern int   	PromptPrintf( PSZ fmt, ... );
extern long  	PromptQueryEditText( PSZ buf, INT buflen );
extern long  	PromptQueryText( PSZ buf, INT buflen );
extern void  	PromptSetEditText( PSZ text /* , BOOL bSelectText (optional - defaults to TRUE) */);
extern void  	PromptSetText( PSZ text /* , usColorIndex (optional) */ );

extern INT 		Redo( void );
extern INT 		RedoAll( void );
extern INT 		RedoModification( void );

extern void		SbBrowseDefs( void );
extern void		SbBrowseRefs( void );
extern void		SbBrowseSymbolsDefinedInModule( void );
extern void		SbBrowseSymbolAtCursor( void );
extern INT 		SbFindNext( void );
extern INT 		SbFindPrev( void );
extern INT 		SbGotoDef( void );
extern INT 		SbGotoThisDef( PSZ pszSymbol );
extern void		SbJumpBack( void );
extern INT 		SbLoadDatabase( PSZ dbPathname/* (optional) */, ... /* INT replace (optional) */ );
extern INT 		SbUnloadDatabase(void);

extern INT		SelfInsert( void );


#define RE_SYNTAX_UNIX  0
#define RE_SYNTAX_BRIEF 1

/* These are the IDs used for history lists internal to the editor */
#define IDL_SEARCH				0x80000001U	// search expression in search/srchfiles dialog
#define IDL_REPLACEPATTERN		0x80000002U // search expression in replace dialog
#define IDL_REPLACEWITH			0x80000003U	// replacement text in replace/srchfiles dialog
#define IDL_EXECFUNCTION		0x80000004U // ExecFunction - dialog & prompted
#define IDL_SRCHFILES			0x80000009U // files to search in srchfiles dialog
#define IDL_SRCHFILEBASEDIR	0x8000000AU // base directory in srchfiles dialog


// SRCHPARMS.flags member settings
#define SRCH_SYNTAX_UNIX	0x0000
#define SRCH_SYNTAX_BRIEF	0x0001
#define SRCH_IGNORE_CASE	0x0002
#define SRCH_BLOCK			0x0004
#define SRCH_COLUMN			0x0008	// internal use only: use SRCH_BLOCK
#define SRCH_REGEXP			0x0010	// set by SrchDlg & ReplaceDlg see search.rm
#define SRCH_REVMATCH		0x0020	// internal use only
#define SRCH_BACKWARD		0x0040	// only used by _Search and _Replace
#define SRCH_MAX_CLOSURE	0x0080	// internal use only
#define SRCH_ALLBUF			0x0100	// only used by _Search
#define SRCH_TRANS_ALLBUF	0x0200	// only used by _Replace
#define SRCH_REPLACE			0x0400	// used by SrchFiles() macro see srchfile.rm
#define SRCH_RECURSE			0x0800	// used by SrchFiles() macro see srchfile.rm
#define SRCH_PROJECT			0x1000	// used by SrchFiles() macro see srchfile.rm

/*
** SRCHPARMS
**
** This structure is used by SrchDlg(), ReplaceDlg() and SrchFilesDlg()
** functions to communicate user choices for Search/Replace operations
** see search.rm or srchfile.rm for examples.
*/
typedef struct srch_parms_	SRCHPARMS, *PSRCHPARMS;
struct srch_parms_ {
	UINT32	cbSize;
	INT32		cbPattern;
	char		*pszPattern;
	INT32		cbReplace;
	char		*pszReplace;
	INT32		cbBaseDir;
	char		*pszBaseDir;
	INT32		cbFiles;
	char		*pszFiles;
	UINT32	flags;
};

/*
** These variables give you access to the current strings used
** by the _Search and the _Replace functions. They are defined
** internally in the editor, do not change the value of MAX_SEARCH
** MAX_SEARCH only defines the size of the strings used by these
** functions, the SrchFwd, SrchBack, Translate functions do not have
** a limit on the strings they accept.
*/
#define MAX_SEARCH		257
extern UINT	_SrchFlags;					// current search settings for the editor
extern int	_SearchDirection;			// 0 = backward, 1 = forward, 2 = use last search direction
extern char _SearchString[MAX_SEARCH];
extern char _ReplaceSearchString[MAX_SEARCH];
extern char _ReplaceString[MAX_SEARCH];

extern INT  _Search(int searchDirection, BOOL fAgain);
extern INT  _Replace( void );

extern INT	ReplaceAgain( void );
extern INT	ReplaceBackward( void );
extern INT	ReplaceDlg( PSRCHPARMS );
extern INT	ReplaceForward( void );

extern INT	SearchForward( void );
extern INT	SearchBackward( void );
extern INT	SearchAgain( void );

// if syntax is not specified UNIX syntax is used by default
extern INT 		SrchFwd(PSZ pattern, INT re, INT case_s, INT block, INT *total_length, INT syntax);
extern INT 		SrchBack(PSZ pattern, INT re, INT case_s, INT block, INT *total_length, INT syntax);
extern INT		SrchDlg( PSRCHPARMS );
extern PSZ 		SrchQueryGroup( INT group_number );
extern INT 		SrchQueryGroupOffsets(INT group_number, INT *start, INT *end);
extern INT 		SrchString(PSZ pattern, PSZ str, INT *length, INT re, INT case_s, INT sytax);
extern INT 		Translate(PSZ pattern, PSZ replacement, INT global, INT re, INT case_s, INT block, INT dir, INT syntax);

extern void		SyntaColorAsm( INT lines, HHASH hashKeywords );
extern BOOL		SyntaColorUpdateAsm( INT s_line, INT e_line, HHASH hashKeywords );
extern void		SyntaColorC( INT lines, HHASH hashKeywords );
extern BOOL		SyntaColorUpdateC( INT s_line, INT e_line, HHASH hashKeywords );
extern void		SyntaColorEasel( INT lines, HHASH hashKeywords );
extern BOOL		SyntaColorUpdateEasel( INT s_line, INT e_line, HHASH hashKeywords );
extern void		SyntaColorPascal( INT lines, HHASH hashKeywords );
extern BOOL		SyntaColorUpdatePascal( INT s_line, INT e_line, HHASH hashKeywords );
extern void		SyntaColorPrg( INT lines, HHASH hashKeywords );
extern BOOL		SyntaColorUpdatePrg( INT s_line, INT e_line, HHASH hashKeywords );

extern void 	SysBeep( UINT frequency, UINT duration );
extern void		SysDeferQueue( void );
extern void 	SysPsuedoCursor( void );
extern PSZ 		SysQueryCaller( void );
extern HBUFFER	SysQueryCurrentScrap( void );
extern PSZ		SysQueryEditorPath( void );
extern UINT		SysQueryFlags( void );
extern PFONTATTRIB SysQueryFontSize( void);
extern int		SysQueryRegExprSyntax( void );
extern INT		SysQueryRepeat( void );
extern void		SysResetRepeat( void );
extern void 	SysSaveAll( /* optional BOOL fSync = TRUE */ );
extern INT 		SysSaveAndExit( void );
extern HBUFFER	SysSetCurrentScrap( HBUFFER hbScrapBuffer );
extern INT		SysSetFlags( UINT ulMask, UINT ulNewSettings );
extern INT 		SysSetHourglass( INT on_off);
extern void		SysSetRepeat( INT );
extern void		SysWaitForInputEvent(UINT ulDelay);
extern void  	ToggleBackups( void );
extern void  	ToggleInsert( void );
extern void  	ToggleKeepTiled( void );
extern void  	ToggleKeepCascaded( void );
extern void  	ToggleTabs( void );

extern INT		Undo( void );
extern INT		UndoAll( void );
extern BOOL		Undoing( void );
extern INT		UndoModification( void );

extern INT		WinAttachBuffer( HBUFFER );
extern INT		WinAttachBufferToWindow( HBUFFER, HWINDOW );
extern void		WinCascade( void );
extern INT 		WinDeleteCurrentWindow( void);
extern INT 		WinDeleteWindow( HWINDOW );
extern void  	WinDeleteWindowAndBuffer( void );
extern HWINDOW WinLoadFileInWindow( PSZ pathname, HWINDOW window);
extern BOOL		WinIsZoomed( /* optional HWINDOW hwnd = current window */ );
extern HWINDOW	WinNewWindow( void );
extern void		WinNextWindow( void );
extern void		WinOneWindow( void );
extern HBUFFER	WinQueryBuffer( HWINDOW );
extern HWINDOW	WinQueryCurrentWindow( void );
extern void		WinQueryCursor( INT *x, INT *y );
extern UINT		WinQueryFlags( HWINDOW );
extern HWINDOW	WinQueryNextWindow( void );
extern HWINDOW	WinQueryPrevWindow( void );
extern void		WinPrevWindow( void );
extern INT		WinScrollBottom( void );
extern INT		WinScrollCenter( void );
extern INT		WinScrollDown( INT count );
extern INT		WinScrollH( INT count );
extern INT		WinScrollLeft( INT count);
extern INT		WinScrollRight( INT count );
extern INT		WinScrollTop( void );
extern INT		WinScrollUp( INT count );
extern INT		WinScrollV( INT count );
extern UINT		WinSetFlags( UINT mask, UINT newFlags );
extern INT		WinSetHexMode( void );
extern INT		WinSetWindow( HWINDOW );
extern INT 		WinSetWindowFromID(USHORT);
extern INT		WinSetY( INT new_y );
extern INT		WinSplitH(BOOL fSwitch);
extern INT		WinSplitV(BOOL fSwitch);

extern void		WinMaximize( void );
extern void		WinMinimize( void );
extern void		WinMove( void );
extern void		WinRestore( void );
extern void		WinSize( void );
extern void		WinSysMenu( void );
extern void		WinMainHide( void );
extern void		WinMainMaximize( void );
extern void		WinMainMinimize( void );
extern void		WinMainMove( void );
extern void		WinMainRestore( void );
extern void		WinMainSize( void );
extern void		WinMainSysMenu( void );

#define TILE_ACROSS	0
#define TILE_DOWN		1
extern void 	WinTile( INT orientation );
extern void 	WinTileAcross( void );
extern void 	WinTileDown( void );
extern void 	WinTileWindows( void );
extern void 	WinUpdateWindow( void );

extern PSZ  ltrim( PSZ  );
extern PSZ  rtrim( PSZ  );

/* FindFirstFile FindNextFile FindClose */
typedef unsigned short FDATE;
/* FDATE bit pattern:
**	0-4	Day of the month
**	5-8	Month (1 = Jan)
** 9-15	Year offset from 1980 (add 1980 to get actual year)
*/
typedef unsigned short FTIME;
/* FTIME bit pattern:
**	0-4	Second divided by 2
**	5-8	Minute (0-59)
** 9-15	Hour (0-23 on 24 hour clock)
*/
struct find_buf {
	FDATE		fdateCreation;
	FTIME		ftimeCreation;
	FDATE		fdateLastAccess;
	FTIME		ftimeLastAccess;
	FDATE		fdateLastWrite;
	FTIME		ftimeLastWrite;
	UINT		cbFileSize;
	UINT		ulAttr;
	CHAR		fileName[256];
};
#define FILE_ATTR_ARCHIVE		0x20L
#define FILE_ATTR_DIRECTORY	0x10L
#define FILE_ATTR_SYSTEM   	0x04L
#define FILE_ATTR_HIDDEN   	0x02L
#define FILE_ATTR_READONLY 	0x01L
extern HANDLE FindFirstFile( PSZ filePattern, struct find_buf *buffer );
extern UINT   FindNextFile( HANDLE hFindFile, struct find_buf *buffer );
extern void   FindClose( HANDLE hFindFile );

/* 'C' Runtime library interface */
extern void abort(void);	// Aborts macro execution & returns to top level of editor
extern int  atoi(char *);
extern long atol(char *);
extern char *itoa(int value, char *buffer, int radix);
extern char *ltoa(long value, char *buffer, int radix);
extern void *calloc( size_t, size_t );
extern char *complete_path(char *pathname);
extern void free( void * );
extern char *getenv( char * );
extern void *malloc( size_t );
extern void *realloc( void *, size_t );
extern void *memcpy( void *, void *, size_t );
extern void *memset( void *, int, size_t );

#define _MAX_DRIVE	3
#define _MAX_DIR		256
#define _MAX_FNAME	256
#define _MAX_EXT		256
#define _MAX_PATH		260
extern void splitpath( char *pathname, char *drive, char *dir, char *fname, char *ext );

extern int sprintf(char *buf, char *fmt, ...); // up to ten more args allowed
extern char * strcat( char *, char * );
extern char * strchr( char *, int );
extern int    strcmp( char *, char * );
extern int    stricmp( char *, char * );
extern char * strcpy( char *, char * );
extern size_t strcspn( char *, char * );
extern char * strdup( char * );
extern size_t strlen( char * );
extern char * strlwr( char * );
extern char * strncat( char *, char*, size_t );
extern int    strncmp( char *, char *, size_t );
extern int    strnicmp( char *, char *, size_t );
extern char * strncpy( char *, char *, size_t );
extern char * strpbrk( char *, char * );
extern char * strrchr( char *, int);
extern size_t strspn( char *, char * );
extern char * strstr( char *, char * );
extern long	strtol( char *, int );
extern unsigned long strtoul( char *, int );
extern char * strupr( char * );

/* Time functions */
typedef long time_t;
struct tm {
   int 	tm_sec;      // seconds after the minute [0-61]
   int 	tm_min;      // minutes after the hour [0-59]
   int 	tm_hour;     // hours since midnight [0-23]
   int 	tm_mday;     // day of the month [1-31]
   int 	tm_mon;      // months since January [0-11]
   int 	tm_year;     // years since 1900
   int 	tm_wday;     // days since Sunday [0-6]
   int 	tm_yday;     // days since January 1 [0-365]
   int	tm_isdst;    // Daylight Saving Time flag
};

extern char *			ctime(time_t *tptr);
extern struct tm *	localtime(time_t *tptr);
extern time_t			mktime(struct tm *tm_ptr);
extern time_t			time(time_t *tptr);

#ifdef INCL_IO

#ifdef WINDOWS
#define O_RDONLY	   0x0000L	// open for reading only
#else
#define O_RDONLY		0x0004L
#endif
#define O_WRONLY	   0x0001L	// open for writing only
#define O_RDWR 	   0x0002L	// open for reading and writing
#define O_APPEND	   0x0008L	// writes done at eof
#define O_NOINHERIT	0x0080L	// child process doesn't inherit file
#define O_CREAT	   0x0100L	// create and open file
#define O_TRUNC	   0x0200L	// open and truncate
#define O_EXCL 	   0x0400L	// open only if file doesn't already exist
#define O_TEXT 	   0x4000L	// file mode is text (translated)
#define O_BINARY	   0x8000L	// file mode is binary (untranslated)
										 
#define SH_DENYRW		0x0010L	// deny read or write access to others
#define SH_DENYWR		0x0020L	// deny write access to others
#define SH_DENYRD		0x0030L	// deny read access to others
#define SH_DENYNO		0x0040L	// allow others to read or write
										 
#define SEEK_SET		0x0000L	// seek relative to start of file
#define SEEK_CUR		0x0001L	// seek relative to current position
#define SEEK_END		0x0002L	// seek relative to EOF

extern long errno;
#ifdef WINDOWS
#define EPERM		1
#define ENOENT		2
#define ESRCH		3
#define EINTR		4
#define EIO		   5
#define ENXIO		6
#define E2BIG		7
#define ENOEXEC 	8
#define EBADF		9
#define ECHILD		10
#define EAGAIN		11
#define ENOMEM		12
#define EACCES		13
#define EFAULT		14
#define EBUSY		16
#define EEXIST		17
#define EXDEV		18
#define ENODEV		19
#define ENOTDIR 	20
#define EISDIR		21
#define EINVAL		22
#define ENFILE		23
#define EMFILE		24
#define ENOTTY		25
#define EFBIG		27
#define ENOSPC		28
#define ESPIPE		29
#define EROFS		30
#define EMLINK		31
#define EPIPE		32
#define EDOM		33
#define ERANGE		34
#define EDEADLK		36
#define ENAMETOOINT	38
#define ENOLCK		39
#define ENOSYS		40
#define ENOTEMPTY	41
#define EILSEQ		42
#else
#define EACCES			0x0018L	// access denied
#define EBADF			0x002BL	// bad file handle
#define EEXIST			0x0010L	// file already exists
#define EMFILE			0x0019L	// out of file handles
#define EINVAL			0x0024L	// invalid argument(s) passed
#define ENOCMD			0x001AL	// could not find command processor
#define ENOENT			0x0017L	// file not found
#define ENOMEM			0x000DL	// insufficient memory
#define ENOSPC			0x002DL	// disk is full
#define ERANGE			0x0002L	// path is longer than length of buffer passed
#define EOSERR			0x003CL	// operating system error occurred
#endif

#ifdef WINDOWS
typedef unsigned long   _dev_t;
typedef unsigned short  _ino_t;
struct stat {
	_dev_t      	st_dev;		// Drive number
	_ino_t      	st_ino;
	unsigned short	st_mode;		// see below
	short				st_nlink;
	short				st_uid;
	short				st_gid;
	_dev_t			st_rdev;
	long				st_size;		// size of file
	long				st_atime;	// last access time
	long				st_mtime;	// last modification time
	long				st_ctime;	// create time
};
#else
#pragma pack(2)
struct stat {
	short				st_dev;		// Drive number
	unsigned short	st_ino;
	unsigned short	st_mode;		// see below
	short				st_nlink;
	short				st_uid;
	short				st_gid;
	short				st_rdev;
	unsigned short	__pad;
	long				st_size;		// size of file
	long				st_atime;	// last access time
	long				st_mtime;	// last modification time
	long				st_ctime;	// create time
};
#pragma pack()
#endif
/* values for st_mode */
#define S_IEXEC	0x0040 	// execute/search permission, owner
#define S_IWRITE	0x0080 	// write permission, owner
#define S_IREAD	0x0100 	// read permission, owner
#define S_IFIFO	0x1000 	// pipe
#define S_IFCHR	0x2000 	// character special
#define S_IFDIR	0x4000 	// directory
#define S_IFREG	0x8000 	// regular

extern int access(char *pathname, int mode);
extern int chdir(char *pathname);
extern int chdrive(int drive);
extern int chmod(char *pathname, int pmode);
extern int chsize(int hf, int size);
extern int close(int hf);
extern int creat(char *pathname, int pmode);
extern int eof(int hf);
extern int filelength(int hf);
extern int fstat(int hf, struct stat *buffer);
extern char *getcwd(char *pathname, int buflen);
extern int  getdrive(void);
extern int lseek(int hf, int offset, int origin);
extern int mkdir(char *pathname);
extern int open(char *pathname, int oflags, int pmode);
extern int read(int hf, void *pBuffer, size_t cBytes);
extern int remove(char *pathname);
extern int rmdir(char *pathname);
extern int searchenv(char *name, char *env_var, char *pathbuf);
extern int sopen(char *pathname, int oflags, int sflags, int pmode);
extern int stat(char *pathname, struct stat *buffer);
extern int tell(int hf);
extern int write(int hf, void *pBuffer, size_t cBytes);
#endif // INCL_IO

#define __HEX			0x0001U		// hexadecimal
#define __DIGIT		0x0002U		// decimal
#define __SPACE		0x0004U		// space
#define __WHITESPACE 0x0008U		// whitespace
#define __PUNCT 		0x0010U		// punctuation
#define __CTRL			0x0020U		// control
#define __LOWER		0x0040U		// lowercase
#define __UPPER		0x0080U		// uppercase
#define __ALPHA		0x0100U		// alphabetic

#define __UPR_NDX	257
#define __LWR_NDX	514
extern unsigned short _ctype[];
#define isalnum(c)	( _ctype[(c)] & (__ALPHA | __DIGIT) )
#define isalpha(c)	( _ctype[(c)] & __ALPHA )
#define iscntrl(c)	( _ctype[(c)] & __CTRL )
#define isdigit(c)	( _ctype[(c)] & __DIGIT )
#define isgraph(c)	( _ctype[(c)] & (__PUNCT | __ALPHA | __DIGIT) )
#define islower(c)	( _ctype[(c)] & __LOWER )
#define isprint(c)	( _ctype[(c)] & (__PUNCT | __ALPHA | __DIGIT | __SPACE) )
#define ispunct(c)	( _ctype[(c)] & __PUNCT )
#define isspace(c)	( _ctype[(c)] & __WHITESPACE )
#define isupper(c)	( _ctype[(c)] & __UPPER )
#define isxdigit(c)	( _ctype[(c)] & __HEX )
#define tolower(c)	(int)( _ctype[(c) + __LWR_NDX] )
#define toupper(c)	(int)( _ctype[(c) + __UPR_NDX] )
#define _tolower(c)	( (c) + 'a' - 'A' )
#define _toupper(c)	( (c) + 'A' - 'a' )
#define isascii(c)	( (unsigned)(c) < 0x80 )
#define iscsymf(c)	( isalpha( c ) || (c) == '_' )
#define iscsym(c)		( isalnum( c ) || (c) == '_' )
#define toascii(c)	( (c) & 0x7f )

/*
** variable argument list handling
*/
typedef unsigned char *va_list;
#define va_start(valp, arg)	valp = ((va_list)&arg) + 4
#define va_arg(valp, type)		((type *)((valp += 4) - 4))[0]
#define va_end(valp)				valp = 0


#ifdef INCL_EVENT
#include "event.h"
#endif
#ifdef INCL_MENU
#include "menu.h"
#endif
#ifdef INCL_MOUSE
#include "mouse.h"
#endif

#endif /* MACRO_H_INCLUDED */



/*
** End macro header: macro.h
*/
