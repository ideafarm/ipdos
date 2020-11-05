#define DEBUG

//U::ENABLE THESE PREPROCESSOR IF/ENDIF IN PRODUCTION
#if not defined( DEBUG )
    #define RELEASE
#endif

#define TELL

#pragma disable_message ( 549 , 656 , 657 , 665 , 666 , 726 ) ;

//THE ABOVE DEFINITIONS SHOULD NORMALLY BE COMMENTED OUT

// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* INTRODUCTION ***********************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
#if defined( NEVERdEFINED )

IdeaFarm (tm) Elves        (c) Wo'O Ideafarm        IDEAFARM.COM

This source code is a trade secret and is a critical asset of IdeaFarm (tm) City <> Federal Constitutional Protectorate of the United States of America.  It is held
in perpetual trust by the living citizens of IdeaFarm (tm) City on behalf of its owners, the unborn citizens.  Be worthy of this trust; do not disclose, in letter or
in spirit.

This source code is intended only for access and use by the high priests of IdeaFarm (tm) City.  If you are not wo of the ta high priests then it is unlawful for you to read
this source code.  Please respect this restriction so that the secrecy of this critical asset can be preserved intact for those who will follow us.

This source is self contained.  Open Watcom is required to build it.  Use the "m.bat" batch file to build it.

IdeaFarm (tm) Build Folder is an "ideafarm.home.1" folder that contains only the "precious" folder.  "Precious" files are files that cannot be built from other files and that are
required by the build.  "ideafarm.home.1" must be in the root folder of a local fixed drive.  Put it into the root of drive "c" unless you have a reason to use another drive.  The woth
step in a build on a new personal computer is to run m.bat in the "elves" folder.  This has been tested by setting up a nonadministrative user on a netbook with Windows 7 Starter
Edition installed and then installing Open Watcom 1.9 from the Internet.  During the installation of Open Watcom, the default choice was accepted for every choice.  Let the
installer modify the registry, and let it set associations so that, for example, Windows uses the Open Watcom Text Editor to open files with names ending in ".cpp".  After
installing Open Watcom, you can immediately run "m.bat" to build IdeaFarm (tm) Elves; there are no other prerequisites.

This source code, which is the source for IdeaFarm (tm) Elves, documents what is built, and how.  IdeaFarm (tm) Elves is self documenting.  After running "m.bat", your
next step should be to open "elves.exe".  Opening "elves.exe" will cause the entire build to occur.  After the build completes, press the unshifted "v" key to select the "verbose"
command, and read the information that is displayed.  IdeaFarm (tm) Elves is a command processor comparable to "cmd.exe"; it's function is to obey commands keyed by the
user.  All of the commands that IdeaFarm (tm) Elves recognize are related to building IPDOS (tm); it is not a general purpose command processor.  IdeaFarm (tm) Elves is
multithreaded; each command is obeyed by an elf that "lives" on a new thread and dies when the command has been completely obeyed.

To build and use this program, this source file must be in the correct folder within the IdeaFarm (tm) Build Folder, which must be in the root folder of a local fixed
drive.  The build folder must contain the dictionary and the snips.  The build folder must also contain the source code for some utility programs.

After building this source, open (run) the executable.  The first time that you do this, all builds wzill be done.  Leave the executable running whenever you are
editing IdeaFarm (tm) source code.  Whenever you save modifications to disk, this program will detect the update and build all affected derivative files.

This is a multithreaded console program that also accepts commands, which are obeyed asynchronously.  The user interface is self documenting.


#endif
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* INCLUDES ***************************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

//A:ASSUME: IFC PROCESSES RUN USING NUMA IDnODE 2 (SKIP 1 NODE).  AT 20170209@1543, CRAFTWORK IS DONE ON HARDWARE THAT HAS NODES 0 1, SO "/node 1" IS SPECIFIED IN THE INSTANT FILE
#define postNUMAnODE "/node 1"


#undef  NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WIN7

#undef  _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WIN7

#include <windows.h>
#include <string.h>
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <conio.h>
#include <process.h>

#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.112004fe.IPDOScOMPILEoPTIONS"
#include "\ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.11200524.IPDOScOMPILEoPTIONScnOTcPP"

// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* ALTERED win32 DEFINITIONS **********************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

// THE FOLLOWING ALTERED SYMBOLS ARE USED RATHER THAN THE CORRESPONDING SYMBOLS PROVIDED IN THE win32 HEADERS
// THE ALTERATIONS INVOLVE PADDING THAT NEEDS TO BE ADDED SO THAT THE MEMBERS ARE ACCESSED CORRECTLY
// THIS APPEARS TO BE DUE TO AN ASSUMPTION IMPLICIT IN THE win32 HEADERS THAT THE COMPILER WILL ALIGN STRUCTURE MEMBERS ON DWORD BOUNDARIES
// THE IPDOS BUILD ENVIRONMENT DISABLES COMPILER INSERTION OF ALIGNMENT PADDING ; FOR IPDOS, ALL ALIGNMENT MUST BE EXPLICIT IN THE CODE

typedef struct _INPUT_RECORD_ALTEREDfORiPDOS {
    WORD EventType;
    WORD pad1 ;                             // THIS PAD WAS ADDED TO MAKE THE MEMBERS ALIGN WITH THE ACTUAL DATA
    union {
        KEY_EVENT_RECORD KeyEvent;
        MOUSE_EVENT_RECORD MouseEvent;
        WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
        MENU_EVENT_RECORD MenuEvent;
        FOCUS_EVENT_RECORD FocusEvent;
    } Event;
} INPUT_RECORD_ALTEREDfORiPDOS, *PINPUT_RECORD_ALTEREDfORiPDOS;

// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* SYMBOLS ****************************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

#define flADAMlIST_null       0x00000000
#define flADAMlIST_DEFINED    0x00000001

#define flBATON_null         0x00000000
#define flBATON_MUSTbEaLONE  0x00000001

#define flELVES_null        0x00000000
#define flELVES_TERSE       0x00000001
#define flELVES_QUITsEEN    0x00000002
#define flELVES_LOWaDAMS    0x00000004
#define flELVES_DEBUGiNFO   0x00000008
#define flELVES_HIGHpRIEST  0x00000010
#define flELVES_HIBERNATE   0x00000020

#define flELF_CONSTRUCTED 0x00000001

#define flHOVER_null        0x00000000
#define flHOVER_PERSIST     0x00000001

#define flSAY_null       0x00000000
#define flSAY_NOgRAB     0x00000001
#define flSAY_NOuNGRAB   0x00000002
#define flSAY_NOwRAP     0x00000004
#define flSAY_DADiSgROUP 0x00000008

#define flSAY_START     ( flSAY_NOuNGRAB )
#define flSAY_MIDDLE    ( flSAY_NOgRAB | flSAY_NOuNGRAB )
#define flSAY_END       ( flSAY_NOgRAB )

#define BLAMMO { int* pc = (int*)( 0x80000000 | __LINE__ ) ; *pc = 0xeeeeeeee ; }
#define postB01 "                " 
#define postFILEuSER "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\elves.user"
#define TOUCH(argP) { int nu = (int)&argP ; }
#define TS postB01 postB01
#define postEVEN "bdfhjlnprtvxz"
#define postODD  "acegikmoqsuwy"

#define postTHANKyOU                                                                                                                    \
                                                                                                                                        \
                "\f"                                                                                                                    \
                "\r\n"                                                                                                                  \
                "  Thank you for using IdeaFarm (tm) Elves.\r\n"                                                                        \
                "\r\n"                                                                                                                  \
                "  It took me 20 years to write IPDOS (tm)\r\n"                                                                         \
                "  (1992-2011).\r\n"                                                                                                    \
                "\r\n"                                                                                                                  \
                "  May the elves \"connect you wholesomely\"\r\n"                                                                       \
                "  for a long, long, time.\r\n"                                                                                         \
                "\r\n"                                                                                                                  \
                "                             Wo'O Ideafarm\r\n"                                                                        \
                "\r\n"                                                                                                                  \
                "                                    Sunday\r\n"                                                                        \
                "                               May 1, 2011\r\n"                                                                        \
                "\r\n"                                                                                                                  \
                "\r\n"                                                                                                                  \
                "\r\n"                                                                                                                  \
                "\r\n"

#define NEWtOKENS                                                                                                                        \
                                                                                                                                         \
    tokensC* pTokens = !postCmd[ 0 ]                                                                                                     \
        ? new tokensC( tokensRoot )                                                                                                      \
        : !strcmp( postCmd , "help" )                                                                                                    \
            ? new tokensC( tokensHelp )                                                                                                  \
            : !strcmp( postCmd , "new" )                                                                                                 \
                ? new tokensC( tokensNew )                                                                                               \
                : !strcmp( postCmd , "user" )                                                                                            \
                    ? new tokensC( tokensUser )                                                                                          \
                    : 0                                                                                                                  \
    ;                                                                                                                                    \
                                                                                                                                         \
    if( !pTokens )                                                                                                                       \
    {                                                                                                                                    \
        if( !strcmp( postCmd , "edit" ) || !strcmp( postCmd , "make" ) )                                                                 \
        {                                                                                                                                \
            const int* pcIdAdam = pcIdAdamIF( flADAMlIST_DEFINED ) ;                                                                     \
            pTokens = new tokensC( pcIdAdam ) ;                                                                                          \
        }                                                                                                                                \
        else if                                                                                                                          \
        (                                                                                                                                \
               !strcmp( postCmd , "fancy"   )                                                                                            \
            || !strcmp( postCmd , "fancyd"  )                                                                                            \
            || !strcmp( postCmd , "plain"   )                                                                                            \
            || !strcmp( postCmd , "monitor" )                                                                                            \
            || !strcmp( postCmd , "plaind"  )                                                                                            \
        )                                                                                                                                \
        {                                                                                                                                \
            const int* pcIdAdam = pcIdAdamIF() ;                                                                                         \
            pTokens = new tokensC( pcIdAdam ) ;                                                                                          \
        }                                                                                                                                \
                                                                                                                                         \
        if( pTokens && !*pTokens ) { delete pTokens ; pTokens = 0 ; }                                                                    \
    }

// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* INLINE ASSEMBLY ********************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************


void __export dec02AM( int& cP ) ;

#pragma aux dec02AM =                                                                                                     \
                                                                                                                        \
    "               lock dec dword ptr [ecx]        "                                                                   \
                                                                                                                        \
    parm [ecx]                                                                                                          \
                                                                                                                        \
;


int __export decv02AM( int& cP ) ;

#pragma aux decv02AM =                                                                                                    \
                                                                                                                        \
    "               mov       eax , -1               "                                                                  \
    "               lock xadd dword ptr [ecx] , eax  "                                                                  \
                                                                                                                        \
    parm [ecx]                                                                                                          \
    value [eax]                                                                                                         \
                                                                                                                        \
;


void __export inc02AM( int& cP ) ;

#pragma aux inc02AM =                                                                                                     \
                                                                                                                        \
    "               lock inc dword ptr [ecx]        "                                                                   \
                                                                                                                        \
    parm [ecx]                                                                                                          \
                                                                                                                        \
;


int __export incv02AM( int& cP ) ;

#pragma aux incv02AM =                                                                                                    \
                                                                                                                        \
    "               mov       eax , 1                "                                                                  \
    "               lock xadd dword ptr [ecx] , eax  "                                                                  \
                                                                                                                        \
    parm [ecx]                                                                                                          \
    value [eax]                                                                                                         \
                                                                                                                        \
;


int __export setIfEqualsAM( int& cToP , int cFromP , int cEqualsP ) ;

#pragma aux setIfEqualsAM =                                                                                             \
                                                                                                                        \
    "               lock cmpxchg dword ptr [ecx] , edx        "                                                         \
                                                                                                                        \
    parm [ecx] [edx] [eax]                                                                                              \
    value [eax]                                                                                                         \
                                                                                                                        \
;


int __export setIfZeroAM( int& cToP , const int cFromP ) ;

#pragma aux setIfZeroAM =                                                                                               \
                                                                                                                        \
    "               mov eax , 0h                              "                                                         \
    "               lock cmpxchg dword ptr [ecx] , edx        "                                                         \
                                                                                                                        \
    parm [ecx] [edx]                                                                                                    \
    value [eax]                                                                                                         \
                                                                                                                        \
;




// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* CLASS PROTOTYPES *******************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************



// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* FUNCTION PROTOTYPES ****************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

int            bNumaIsAvailableF( void ) ;
int            boxDispenseIdF( char* postFileP , int idMinP = 0 , int idElfP = 0 ) ;
int            boxGetShadowF( char*& postP , const char* postFileP , int idElfP = 0 ) ;
void           boxPutF( const char* postFileP , const char* postP , int idElfP = 0 ) ;
BOOL __stdcall controlInterruptHandlerF( DWORD idEventP ) ;
void           delF( char*& pbP ) ;
void           delF( char**& ppbP ) ;
void           delF( int*& pcP ) ;
void           delF( const char*& pbP ) ;
void           delF( const char**& ppbP ) ;
void           delF( const int*& pcP ) ;
void           hireF( int idElfP , char* postCmdP , char* postDirectoryP = 0 ) ;
void           itoaF( char* post9P , int costa9P , int cP ) ;
void           makeFoldersCopyThirdPartyDllsF( void ) ;
char*          newF( int cbP ) ;
int            sourceCodeExistsF( void ) ;
void           tmAbortF( void* pnuP ) ;
void           tmElfF( void* pElfP ) ;
void           truncateF( char* postP , const char* postTestP ) ;


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* CLASS DEFINITIONS ******************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

class batonC
{
    static int cGrabbedAlone ;
    static int cGrabbedNotAlone ;

    const int guard1 ;
    HANDLE oshBaton ;
    const int guard2 ;
    const int flags ;
    const int guard3 ;
    int   osTidOwner ; //U::TO DETECT A FAILURE TO SERIALIZE
    int   cRecurse ;
    const int guard4 ;

    public :

    ~batonC( void ) ;
    batonC( int flagsP = flBATON_null ) ;
    void grabF( void ) ;
    void ungrabF( void ) ;
}
;

class elfC
{
    static int cElves ;
    static int idMeLath ;
    protected :
    static int cElvesUncounted ;
    static int flagsAll ;
    public :
    static int cIgnoreCommands ;

    protected :

    int flagsMe ;
    int idMe ;
    int idDad ;

    void sayF( const char* postP , int flagsP = flSAY_null , int costReservedP = 0 ) ;
    void sayF( int vP , int flagsP = flSAY_null , int costReservedP = 0 ) ;

    public :


    virtual ~elfC( void ) ;
    elfC( int idDadP = 0 ) ;
    virtual void liveF( void ) = 0 ;
    inline void awakenF( void ) { while( !( flagsMe & flELF_CONSTRUCTED ) ) Sleep( 0x100 ) ; }
    static inline int cElvesIF( void ) { return cElves ; }
    static inline int cElvesUncountedIF( void ) { return cElvesUncounted ; }
    static inline int cIgnoreCommandsIF( void ) { return cIgnoreCommands ; }

    friend void tmAbortF( void* pnuP ) ;
}
;

class fifoC
{
    fifoC*& pRoot ;
    fifoC*  pNext ;

    public :

    ~fifoC( void ) ;
    fifoC( fifoC*& pRootP ) ;
    static int countIF( fifoC* pRootP ) ;
}
;

class fifoPostC : public fifoC
{
    const char* postv ;

    public :

    ~fifoPostC( void ) ;
    fifoPostC( fifoC*& pRootP , const char* postP ) ;
    operator const char*( void ) ;
}
;

class lifoC
{
    lifoC*& pRoot ;
    lifoC*  pNext ;

    public :

    ~lifoC( void ) ;
    lifoC( lifoC*& pRootP ) ;
    static int countIF( lifoC* pRootP ) ;
}
;

class lifoPostC : public lifoC
{
    const char* postv ;

    public :

    ~lifoPostC( void ) ;
    lifoPostC( lifoC*& pRootP , const char* postP ) ;
    operator const char*( void ) ;
}
;

class tokensC
{
    const char** ppostTokens ;
    int          cTokens ;
    int          bHeap ;

    public :

    ~tokensC( void ) ;
    tokensC( tokensC& tP ) ;
    tokensC( const char** const ppostTokensP , int cTokensP ) ;
    tokensC( const int* pczP ) ;
    inline operator int( void ) { return cTokens ; }
    inline const char* operator []( int offP ) { return ppostTokens[ offP ] ; }

    inline int costMaxF( void )
    {
        int costMax = 0 ;

        for( int offi = 0 ; offi < cTokens ; offi ++ )
        {
            int costi = strlen( ppostTokens[ offi ] ) ;
            if( costMax < costi ) costMax = costi ;
        }

        return costMax ;
    }
}
;

class elf_eat_C : public elfC
{
    static int  boff ; // "boff" : "BACKWARDS OFFSET", I.E. OFFSET TO THE LEFT FROM THE LATH (RIGHTMOST) CHAR OF postTokin
    static char postOk[] ;
    static char postTokin[ 0x100 ] ;
    static char postCmd[ 0x100 ] ;
    static tokensC tokensRoot ;
    static tokensC tokensHelp ;
    static tokensC tokensNew ;
    static tokensC tokensUser ;
    static elf_eat_C* pInstance ;
    static const int* pcIdAdamDefined ;
    static const int* pcIdAdamMade ;

    int bArmed ;

    int cChoicesF( void ) ;
    void insertF( int ostP ) ;
    void isChoiceF( char*& postTokenP ) ;
    void isExactChoiceF( char*& postTokenP ) ;
    int isEnabledF( const char* postTokenP ) ;
    int keyOkF( int ostP ) ;
    int matchF( int offt ) ;
    void removeF( void ) ;

    public :

    ~elf_eat_C( void ) ;
    elf_eat_C( int idDadP = 0 , char* postCmdWothP = 0 ) ;
    static const int* pcIdAdamIF( int flagsP = flADAMlIST_null ) ;
    void freshenTokinF( void ) ;
    void obeyKeyF( char*& postTokenP , int keyP , int vKeyP ) ;
    void liveF( void ) ;
    void sayChoicesF( void ) ;
    static inline int getBoffIF( void ) { return boff ; }
    static inline const char* getTokinIF( void ) { return postTokin ; }
    static inline const char* getCmdIF( void ) { return postCmd ; }
    static inline elf_eat_C& woF( void ) { return *pInstance ; }
    static void delAdamListIF( int flagsP = flADAMlIST_null ) ;
}
;

class elf_obey_C : public elfC
{
    static int      cInstances ;
    static int      cCompiled ;

    static lifoC*   pRootPostGroup ;
    char*           postCmd ;

    void            assembleF( const char* postGroupP ) ;
    void            compileF( const char* postGroupP , int bPauseP ) ;
    void            compileF( char* postPrefixP , char* postIdiForeignP , char* postSuffixP ) ;
    void            filepileF( const char* postToP , const char* postLikeP ) ;
    int             isStaleF( const char* postToLikeP , const char* postFromLikeP ) ;
    int             isStaleF( const char* postToLikeP , const char* postFromLike1P , const char* postFromLike2P ) ;
    void            linkF( char* postIdiForeignP ) ;
    FILETIME        minFileTimeF( const char* postLikeP ) ;
    FILETIME        maxFileTimeF( const char* postLikeP ) ;
    int             idCopyF( char* postFileP , int& cDoneP ) ;
    char*           pbAtF( int& costDoneP , char* pbBigP , int cbBigP , char* postSmallP ) ;
    int             pushGroupIfF( const char* postGroupP , FILETIME ftSourceP , FILETIME ftSnipP ) ;
    void            reorderF( char* postToP , char* postFromP , int costP ) ;
    void            translateF( const char* postGroupP , int bPauseP ) ;

                    public :

                    ~elf_obey_C( void ) ;
                    elf_obey_C( const char* postCmdP , int idDadP = 0 ) ;
    void            liveF( void ) ;
}
;

class elf_test_C : public elfC
{
    public :

    ~elf_test_C( void ) ;
    elf_test_C( int idDadP = 0 ) ;
    void liveF( void ) ;
}
;

class hoverC
{
    int  flagsCt ;
    char postOld[ 0x200 ] ;

    public :

    ~hoverC( void ) ;
    hoverC( const char* postP , int flagsP = 0 ) ;
}
;

class paperOldC
{
    const int                   cCols ;
    const int                   cColsMargin ;
    const int                   cRows ;
    const int                   cRowsMargin ;
    int                         offRowSurface ;
    CONSOLE_CURSOR_INFO         infoCursorNew ;
    CONSOLE_CURSOR_INFO         infoCursorOld ;
    CONSOLE_SCREEN_BUFFER_INFO  infoOutBufferOld ;
    void* const                 oshIn ;
    void* const                 oshOut ;
    char*                       postSeparatorUnder ;
    int                         idElfLath ;

    void freshSurfaceF( void ) ;

    public :

    ~paperOldC( void ) ;
    paperOldC( void ) ;
    void wrapF( int idElfP , const char* postP , int flagsP = flSAY_null , int costReservedP = 0 ) ;
    inline int cColsF( void ) const { return cCols ; }
    inline int cColsMarginF( void ) const { return cColsMargin ; }
    inline int cRowsF( void ) const { return cRows ; }
    inline int cRowsMarginF( void ) const { return cRowsMargin ; }
}
;

class titleC
{
    batonC                      baton ;
    char*                       postUserDisplay ;

    public :

    ~titleC( void ) ;
    titleC( void ) ;
    void freshF( void ) ;
    void userF( const char* postP ) ;
}
;

class etherC
{
    static int                  bPoop ;

    unsigned long               flagsAffinityProcess ;
    unsigned long               flagsAffinitySystem  ;
    int                         cProcessors ;
    const char*                 postUser ;

    public :

    paperOldC*                     pPaper ;
    titleC                      title ;

    ~etherC( void ) ;
    etherC( void ) ;
    inline int                  cProcessorsF( void ) { return cProcessors ; }
    static inline void          gruntIF( void ) { bPoop = 1 ; }
    static inline int           smellF( void ) { return bPoop ; }
    void                        replacePaperF( void ) ;
    void                        sayF( int idElfP , const char* postP , int flagsP = flSAY_null , int costReservedP = 0 ) ;
    void                        sayF( int idElfP , int vP , int flagsP = flSAY_null , int costReservedP = 0 ) ;
    void                        userF( const char* postP ) ;
    const char*                 userF( void ) ;
    void                        grabPaperF( void ) ;
    void                        ungrabPaperF( void ) ;
    inline                      operator paperOldC&( void ) { return *pPaper ; }
    int                         deleteAllF( const char* postDirP , const char* postLikeP = 0 ) ;
}
;


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* STATIC OBJECTS *********************************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

int elfC::cElves ;
int elfC::cElvesUncounted ;
int elfC::idMeLath ;
#if defined( DEBUG )
    int elfC::flagsAll = flELVES_TERSE   | flELVES_DEBUGiNFO   ; //A:ASSUME: WHEN I COME ALIVE, THE CURRENT MASTER AND HOVER FILES CONTAIN DEBUG INFO
#else
    int elfC::flagsAll = flELVES_TERSE /*| flELVES_DEBUGiNFO*/ ; //A:ASSUME: WHEN I COME ALIVE, THE CURRENT MASTER AND HOVER FILES CONTAIN DEBUG INFO
#endif
int elfC::cIgnoreCommands ;
int etherC::bPoop ;
etherC ether ;
int cGrabbedNotMake ;
batonC batFolder ;
batonC batMake( flBATON_MUSTbEaLONE ) ;
batonC batOut ;
batonC batWatcom ;
batonC batLifoPostGroup ;
int batonC::cGrabbedAlone ;
int batonC::cGrabbedNotAlone ;
int bHeaderMadeHideThird ;
int bHeaderMadeShowThird ;
int bPrecompiling ;

char elf_eat_C::postOk[] =
{
    'a' ,
    'b' ,
    'c' ,
    'd' ,
    'e' ,
    'f' ,
    'g' ,
    'h' ,
    'i' ,
    'j' ,
    'k' ,
    'l' ,
    'm' ,
    'n' ,
    'o' ,
    'p' ,
    'q' ,
    'r' ,
    's' ,
    't' ,
    'u' ,
    'v' ,
    'w' ,
    'x' ,
    'y' ,
    'z' ,
    '0' ,
    '1' ,
    '2' ,
    '3' ,
    '4' ,
    '5' ,
    '6' ,
    '7' ,
    '8' ,
    '9' ,
    '_' ,
    '.' ,
    ' ' ,
    VK_ESCAPE ,
    VK_RETURN ,
    VK_BACK ,
    VK_LEFT ,
    VK_RIGHT ,
    0 ,
}
;

int        elf_eat_C::boff ;
char       elf_eat_C::postCmd[ 0x100 ] ;
char       elf_eat_C::postTokin[ 0x100 ] ;
elf_eat_C* elf_eat_C::pInstance ;
const int* elf_eat_C::pcIdAdamDefined ;
const int* elf_eat_C::pcIdAdamMade ;

const char* ppostTokensNew[] =
{
    //ALPHABETICAL
    //CS:CODEsYNC: EVERY ROOT TOKEN MUST HAVE HELP INFO

    "1hello"    ,
    "2threads"  ,
    "3fancy"    ,
    "4progress" ,
    "5where"    ,
}
;

const char* ppostTokensUser[] =
{
    //ALPHABETICAL
    //CS:CODEsYNC:A: MUST BE SAME NUMBER OF ELTS AS ppostTokensUser AND ELEMENT VALUES MUST CORRESPOND
    //CS:CODEsYNC:B: EACH AND EVERY USER MUST HAVE A HARDCODED INITIAL idAdam VALUE ASSIGNMENT

    "anonymous"             ,
    "ideafarm_wo"           ,
    //"turnbull_nicholas"     ,
}
;

const char* ppostUserDisplay[] =
{
    //CS:CODEsYNC:A: MUST BE SAME NUMBER OF ELTS AS ppostTokensUser AND ELEMENT VALUES MUST CORRESPOND

    "Anonymous"               ,
    "Wo'O Ideafarm"         ,
    //"Nicholas Turnbull"     ,
}
;

const char* ppostTokensRoot[] =
{
    //ALPHABETICAL
    //CS:CODEsYNC: EVERY ROOT TOKEN MUST HAVE HELP INFO

#if defined( NEVERdEFINED )
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa1a" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa1b" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa2a" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa2b" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa3a" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa3b" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa4a" ,
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa4b" ,
    "bbbb1a" ,
    "bbbb1b" ,
    "bbbb2a" ,
    "bbbb2b" ,
    "bbbb3a" ,
    "bbbb3b" ,
    "bbbb4a" ,
    "bbbb4b" ,


    "1tools"    ,
    "/2snips"    ,
    "3compile"  ,
    "4link"     ,
    "5adam"     ,
    "6patch"    ,
    "7package"  ,
    "8bundle"   ,

#endif

    "adamhigh" ,
    "adamlow"  ,
    "ascii"    ,
    "debugyes" ,
    "debugno"  ,
    "documents" ,
    "edit"     ,
    "fancy"    ,
    "fancyd"   ,
    "help"     ,
    "hibernate" ,
    "install"  ,
    "make"     ,
    "monitor"  ,
    "new"      ,
    "nohibernate" ,
    "plain"    ,
    "plaind"   ,
    "refresh"   ,
    "releaseprecious" ,
    "releasetool" ,
    "terse"    ,
    "test"     ,
    "test2"    ,
    "user"     ,
    "verbose"  ,
}
;

tokensC elf_eat_C::tokensRoot( ppostTokensRoot , sizeof ppostTokensRoot / sizeof ppostTokensRoot[ 0 ] ) ;
tokensC elf_eat_C::tokensHelp( ppostTokensRoot , sizeof ppostTokensRoot / sizeof ppostTokensRoot[ 0 ] ) ; //INTENTIONALLY A DUPLICATE, TO ENSURE THAT ALL ROOT TOKENS HAVE HELP INFORMATION
tokensC elf_eat_C::tokensNew(  ppostTokensNew  , sizeof ppostTokensNew  / sizeof ppostTokensNew[  0 ] ) ;
tokensC elf_eat_C::tokensUser( ppostTokensUser , sizeof ppostTokensUser / sizeof ppostTokensUser[ 0 ] ) ;

int    elf_obey_C::cInstances ;
int    elf_obey_C::cCompiled ;
lifoC* elf_obey_C::pRootPostGroup ;


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* MEMBER FUNCTION DEFINITIONS ********************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

batonC::~batonC( void )
{
    CloseHandle( oshBaton ) ;
}

batonC::batonC( int flagsP ) :
oshBaton( CreateMutex( 0 , 0 , 0 ) ) ,
osTidOwner( 0 ) ,
cRecurse( 0 ) ,
guard1( 0xaaaaaaaa ) ,
guard2( 0xaaaaaaaa ) ,
guard3( 0xaaaaaaaa ) ,
guard4( 0xaaaaaaaa ) ,
flags( flagsP )
{
}

void batonC::grabF( void )
{
    int osTidMe  = GetCurrentThreadId() ;
    //ether.sayF( osTidMe , "\r\ngrabF / grabbing" , flSAY_NOwRAP | flSAY_NOgRAB | flSAY_NOuNGRAB ) ;

    //THE FOLLOWING LINE SHOULD BE COMMENTED OUT IN PRODUCTION.  IT CAN FALSELY DETECT A GRAB ORDERING VIOLATION IF, E.G. ANOTHER THREAD HAPPENS TO BE GRABBING PAPER.  TO BE THREAD SAFE, cGrabbedNotAlone WOULD NEED TO BE IN THREAD LOCAL STORAGE
    //ENABLE THIS LINE ONLY TO VERIFY THAT THE CODE THAT DOES REFRESH CONFORMS TO GRAB ORDERING
    //if( flags & flBATON_MUSTbEaLONE && cGrabbedNotAlone ) BLAMMO ;

    if( WAIT_OBJECT_0 != WaitForSingleObject( oshBaton , INFINITE ) ) BLAMMO ;

    if( osTidMe == osTidOwner ) inc02AM( cRecurse ) ;
    else
    {
        int osTidOld = setIfZeroAM( osTidOwner , osTidMe ) ;
        if( osTidOld && osTidOld != osTidMe ) BLAMMO ;
        if( osTidOwner != osTidMe ) BLAMMO ;
    }

    inc02AM( flags & flBATON_MUSTbEaLONE ? cGrabbedAlone : cGrabbedNotAlone ) ;

    //ether.sayF( osTidMe , "\r\ngrabF / grabbed" , flSAY_NOwRAP | flSAY_NOgRAB | flSAY_NOuNGRAB ) ;
}

void batonC::ungrabF( void )
{
    if( !osTidOwner ) BLAMMO ;

    int osTidMe  = GetCurrentThreadId() ;
    if( osTidMe == osTidOwner && cRecurse ) dec02AM( cRecurse ) ;
    else
    {
        int osTidOld = setIfEqualsAM( osTidOwner , 0 , osTidMe ) ;
        if( osTidOld != osTidMe ) BLAMMO ;
    }

    dec02AM( flags & flBATON_MUSTbEaLONE ? cGrabbedAlone : cGrabbedNotAlone ) ;
    ReleaseMutex( oshBaton ) ;
    //ether.sayF( osTidMe , "\r\nungrabF / ungrabbed" , flSAY_NOwRAP | flSAY_NOgRAB | flSAY_NOuNGRAB ) ;
}

elfC::~elfC( void )
{
    dec02AM( cElves ) ;
    ether.title.freshF() ;
}

elfC::elfC( int idDadP ) :
idMe( 1 + incv02AM( idMeLath ) ) ,
idDad( idDadP )
{
    if( idMe == 1 )
    {
        if( sourceCodeExistsF() ) flagsAll |= flELVES_HIGHpRIEST ;
        //flagsAll |= flELVES_HIGHpRIEST ;                                    //20200511@2041: EVERYONE IS A HIGH PRIEST NOW THAT IPDOS IS PROPRIETARY OPEN SOURCE
    }

    inc02AM( cElves ) ;
    ether.title.freshF() ;
    _beginthread( tmElfF , 0x10000 , (void*)this ) ; //U:: RACES WITH CT'OR FOR DERIVED CLASS
}

void elfC::sayF( const char* postP , int flagsP , int costReservedP )
{
    ether.sayF( flagsP & flSAY_DADiSgROUP ? idDad : idMe , postP , flagsP , costReservedP ) ;
}

void elfC::sayF( int vP , int flagsP , int costReservedP )
{
    ether.sayF( flagsP & flSAY_DADiSgROUP ? idDad : idMe , vP , flagsP , costReservedP ) ;
}

elf_eat_C::~elf_eat_C( void )
{
    while( elfC::cElvesIF() > 1 ) Sleep( 0x100 ) ;

    delF( pcIdAdamDefined ) ;
    delF( pcIdAdamMade    ) ;

    if( pInstance == this ) pInstance = 0 ;
    else                    { BLAMMO ; }
    dec02AM( cElvesUncounted ) ;
}

elf_eat_C::elf_eat_C( int idDadP , char* postCmdWothP ) :
elfC( idDadP ) ,
bArmed( 0 )
{
    inc02AM( cElvesUncounted ) ;
    if( !pInstance  ) pInstance = this ;
    else              { BLAMMO ; }

    postCmd[ 0 ] = postTokin[ 0 ] = 0 ;
    if( postCmdWothP ) strcpy( postCmd , postCmdWothP ) ;

    flagsMe |= flELF_CONSTRUCTED ;
}

const int* elf_eat_C::pcIdAdamIF( int flagsP )
{
    int*& pcIdAdam = *(int**)&( flagsP & flADAMlIST_DEFINED ? pcIdAdamDefined : pcIdAdamMade ) ;

    if( !pcIdAdam )
    {
        const char* postzUser = ether.userF() ;

        char postLike[ 0x100 ] ;
        strcpy( postLike ,

            flagsAll & flELVES_LOWaDAMS
                ? flagsP & flADAMlIST_DEFINED
                    ? "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam.51000???.1"
                    : "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.51000???.ipdos-wm"
                : flagsP & flADAMlIST_DEFINED
                    ? !strcmp( postzUser , "anonymous" )
                        ? "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam.51011???.1"
                        : !strcmp( postzUser , "ideafarm_wo" )
                            ? "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam.51012???.1"
                            : !strcmp( postzUser , "turnbull_nicholas" )
                                ? "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam.51013???.1"
                                : ""
                    : !strcmp( postzUser , "anonymous" )
                        ? "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.51011???.ipdos-wm"
                        : !strcmp( postzUser , "ideafarm_wo" )
                            ? "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.51012???.ipdos-wm"
                            : !strcmp( postzUser , "turnbull_nicholas" )
                                ? "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.51013???.ipdos-wm"
                                : ""

        ) ;

        if( postLike && *postLike )
        {
            int cAdams = 0 ;
            {
                WIN32_FIND_DATA info ;
                HANDLE oshFind = FindFirstFile( postLike , &info ) ;
                if( oshFind != INVALID_HANDLE_VALUE ) do cAdams ++ ;
                while( FindNextFile( oshFind , &info ) ) ;
                FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
            }
        
            pcIdAdam = (int*)newF( ( cAdams + 1 ) * sizeof( int ) ) ;
        
            if( pcIdAdam )
            {
                int* pcc = pcIdAdam ;
                                                                               //  0              1
                WIN32_FIND_DATA info ;                                         //  123456789abcdef0123456789a
                HANDLE oshFind = FindFirstFile( postLike , &info ) ;           // "5adam.51345678.1"
                if( oshFind != INVALID_HANDLE_VALUE ) do                       // "ideafarm.51345678.ipdos-wm"
                {
                    int offi = flagsP & flADAMlIST_DEFINED ? 0x6 : 0x9 ;
        
                    if( info.cFileName[ offi - 1 ] == '.' && info.cFileName[ offi + 8 ] == '.' && cAdams && cAdams -- )
                    {
                        char* postId = info.cFileName + offi ;
                              postId[ 0x8 ] = 0 ;
            
                        sscanf( postId , "%x" , pcc ) ;
        
                        //switch( *pcc )
                        //{
                            //case 0x51000620 : //ADAM
                            //case 0x51000621 : //EVE
                            //case 0x51000417 :
                            //case 0x510003c3 :
                            //case 0x5100050a :
                            //case 0x51000509 :
                            //case 0x510003be :
                            //case 0x510003bd :
                            //case 0x510005f4 :
                            //case 0x51000412 :
                            //{
                            //    break ;
                            //}
                            //default :
                            //{
                                *pcc &= 0x00ffffff ;
                                pcc ++ ;
                            //  break ;
                            //}
                        //}
                    }
                }
                while( FindNextFile( oshFind , &info ) ) ;
                FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
        
                *pcc = 0 ;
            }
        }
    }

    return pcIdAdam ;
}

int elf_eat_C::cChoicesF( void )
{
    NEWtOKENS

    int cChoices = 0 ;

    if( pTokens ) for( int offt = 0 ; offt < (*pTokens) ; offt ++ )
    {
        if( matchF( offt ) ) cChoices ++ ;
    }

    delete pTokens ; pTokens = 0 ;

    return cChoices ;
}

void elf_eat_C::delAdamListIF( int flagsP )
{
    int*& pcIdAdam = *(int**)&( flagsP & flADAMlIST_DEFINED ? pcIdAdamDefined : pcIdAdamMade ) ;

    delF( pcIdAdam ) ;
}

void elf_eat_C::obeyKeyF( char*& postTokenP , int keyP , int vKeyP )
{
    if( postTokenP ) { BLAMMO ; }

    int bStale = 0 ;
    if( keyP )
    {
        if( keyOkF( keyP ) )
        {
            switch( vKeyP )
            {
                case VK_BACK :
                {
                    removeF() ;
                    bStale = 1 ;
                    break ;
                }
                case VK_ESCAPE :
                {
                    boff = 0 ;
                         if( postTokin[ 0 ] ) postTokin[ 0 ] = 0 ;
                    else if( postCmd[ 0 ]   ) postCmd[ 0 ]   = 0 ;
                    else
                    {
                        etherC::gruntIF() ;
                        inc02AM( cIgnoreCommands ) ;
                        flagsAll |= flELVES_QUITsEEN ;
                    }

                    bStale = 1 ;
                    break ;
                }
                default :
                {
                    if( keyP == ' ' ) isExactChoiceF( postTokenP ) ;
                    else
                    {
                        insertF( keyP ) ;
                
                        while( boff && !cChoicesF() ) boff -- ;
                
                        while( !cChoicesF() ) postTokin[ strlen( postTokin ) - 1 ] = 0 ;
                
                        isChoiceF( postTokenP ) ;
                    }

                    if( postTokenP ) boff = 0 ;
                    else             bStale = 1 ;
                }
            }
        }
    }
    else if( vKeyP )
    {
        switch( vKeyP )
        {
            case VK_LEFT :
            {
                int costToken = strlen( postTokin ) ;
                if( costToken && boff < costToken )
                {
                    boff ++ ;
                    bStale = 1 ;
                }
                break ;
            }
            case VK_RIGHT :
            {
                if( boff )
                {
                    boff -- ;
                    bStale = 1 ;
                }
                break ;
            }
        }
    }

    if( bStale )
    {
        ether.title.freshF() ;
        sayChoicesF() ;
    }
}

void elf_eat_C::insertF( int ostP )
{
    if( !boff )
    {
        char post2[] = { (char)ostP , 0 } ;
        strcat( postTokin , post2 ) ;
    }
    else
    {
        int costToken = strlen( postTokin ) ;
        if( boff <= costToken )
        {
            int offAt = costToken - boff ;

            for( int offi = costToken ; offi >= offAt ; offi -- ) postTokin[ offi + 1 ] = postTokin[ offi ] ;
            postTokin[ offAt ] = (char)ostP ;
            boff ++ ;
        }
    }
}

void elf_eat_C::isExactChoiceF( char*& postTokenP )
{
    if( postTokenP ) { BLAMMO ; }

    NEWtOKENS

    if( pTokens ) for( int offt = 0 ; offt < (*pTokens) ; offt ++ )
    {
        const char* postt = (*pTokens)[ offt ] ;

        if( isEnabledF( postt ) && !strcmp( postt , postTokin ) )
        {
            int costt = strlen( postt ) ;
            postTokenP = newF( costt + 1 ) ;
            if( postTokenP ) strcpy( postTokenP , postt ) ;
            postTokin[ 0 ] = 0 ;
        }
    }

    delete pTokens ; pTokens = 0 ;
}

void elf_eat_C::isChoiceF( char*& postTokenP )
{
    if( postTokenP ) { BLAMMO ; }

    NEWtOKENS

    const char* postFound = 0 ;
    int         cFound    = 0 ;
    char        postCommon[ sizeof postTokin ] = { "" } ;
    int         bCommonInitialized = 0 ;
    
    if( pTokens ) for( int offt = 0 ; offt < (*pTokens) ; offt ++ )
    {
        const char* postt = (*pTokens)[ offt ] ;

        if( isEnabledF( postt ) && ( !postTokin[ 0 ] || postt == strstr( postt , postTokin ) ) )
        {
            if( !( cFound ++ ) ) postFound = postt ;

            if( postCommon[ 0 ] ) truncateF( postCommon , postt ) ;
            else if( !bCommonInitialized )
            {
                bCommonInitialized = 1 ;
                strcpy( postCommon , postt ) ;
            }
       }
    }

    if( cFound == 1 )
    {
        postTokin[ 0 ] = 0 ;

        int costFound = strlen( postFound ) ;
        postTokenP = newF( costFound + 1 ) ;
        if( postTokenP ) strcpy( postTokenP , postFound ) ;
    }
    else if( cFound > 1 )
    {
        int costi = strlen( postTokin ) ;
        strcpy( postTokin + costi , postCommon + costi ) ;
    }

    delete pTokens ; pTokens = 0 ;
}

void elf_eat_C::freshenTokinF( void )
{
    NEWtOKENS

    int         cFound    = 0 ;
    char        postCommon[ sizeof postTokin ] = { "" } ;
    int         bCommonInitialized = 0 ;
    
    if( pTokens ) for( int offt = 0 ; offt < (*pTokens) ; offt ++ )
    {
        const char* postt = (*pTokens)[ offt ] ;

        if( isEnabledF( postt ) && ( !postTokin[ 0 ] || postt == strstr( postt , postTokin ) ) )
        {
            cFound ++ ;

            if( postCommon[ 0 ] ) truncateF( postCommon , postt ) ;
            else if( !bCommonInitialized )
            {
                bCommonInitialized = 1 ;
                strcpy( postCommon , postt ) ;
            }
       }
    }

    if( cFound > 1 )
    {
        int costi = strlen( postTokin ) ;
        strcpy( postTokin + costi , postCommon + costi ) ;
    }

    delete pTokens ; pTokens = 0 ;
}

int elf_eat_C::keyOkF( int ostP )
{
    char post2[] = { (char)ostP , 0 } ;
    return ostP && !!strstr( postOk , post2 ) ;
}

int elf_eat_C::isEnabledF( const char* postTokenP )
{
    int bOk = 1 ;

    if( flagsAll & flELVES_QUITsEEN || cIgnoreCommands ) bOk = 0 ;
    else if( strcmp( postCmd , "help" ) )
    {
             if( !strcmp( postTokenP , "terse"                  ) ) { if(    flagsAll & flELVES_TERSE       ) bOk = 0 ; }
        else if( !strcmp( postTokenP , "verbose"                ) ) { if( !( flagsAll & flELVES_TERSE     ) ) bOk = 0 ; }

        else if( !strcmp( postTokenP , "adamlow"                ) ) { if(    flagsAll & flELVES_LOWaDAMS    ) bOk = 0 ; }
        else if( !strcmp( postTokenP , "adamhigh"               ) ) { if( !( flagsAll & flELVES_LOWaDAMS  ) ) bOk = 0 ; }

        else if( !strcmp( postTokenP , "debugyes"               ) ) { if(    flagsAll & flELVES_DEBUGiNFO   ) bOk = 0 ; }
        else if( !strcmp( postTokenP , "debugno"                ) ) { if( !( flagsAll & flELVES_DEBUGiNFO ) ) bOk = 0 ; }

        else if( !strcmp( postTokenP , "hibernate"              ) ) { if(    flagsAll & flELVES_HIBERNATE   ) bOk = 0 ; }
        else if( !strcmp( postTokenP , "nohibernate"            ) ) { if( !( flagsAll & flELVES_HIBERNATE ) ) bOk = 0 ; }
    }

    if( !( flagsAll & flELVES_HIGHpRIEST ) )
    {
        if
        (
            !strcmp( postTokenP , "adamhigh"               ) ||
            !strcmp( postTokenP , "adamlow"                ) ||
            !strcmp( postTokenP , "debugyes"               ) ||
            !strcmp( postTokenP , "debugno"                ) ||
            !strcmp( postTokenP , "releaseprecious"        ) ||
            !strcmp( postTokenP , "releasetool"            ) ||
            !strcmp( postTokenP , "test"                   ) ||
            !strcmp( postTokenP , "test2"                  ) ||
            !strcmp( postTokenP , "user"                   )
        )
        bOk = 0 ;
    }

    return bOk ;
}

void elf_eat_C::liveF( void )
{
    static int idInLath ;
    int idIn = 1 + incv02AM( idInLath ) ;
    if( idIn > 1 ) { BLAMMO ; }

    HANDLE oshIn = GetStdHandle( STD_INPUT_HANDLE ) ;

    freshenTokinF() ;
    ether.title.freshF() ;
    sayChoicesF() ;
    while( !etherC::smellF() )
    {
        INPUT_RECORD_ALTEREDfORiPDOS info ;
        DWORD cDone = 0 ;
        if( ReadConsoleInput( oshIn , (INPUT_RECORD*)&info , 1 , &cDone ) && cDone )
        {
            switch( info.EventType )
            {
                case KEY_EVENT :
                {
                    // typedef struct _INPUT_RECORD {
                    //     WORD EventType;
                    //     union {
                    //         KEY_EVENT_RECORD KeyEvent;
                    //         MOUSE_EVENT_RECORD MouseEvent;
                    //         WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
                    //         MENU_EVENT_RECORD MenuEvent;
                    //         FOCUS_EVENT_RECORD FocusEvent;
                    //     } Event;
                    // } INPUT_RECORD, *PINPUT_RECORD;

                    // typedef struct _KEY_EVENT_RECORD {
                    //     BOOL bKeyDown;
                    //     WORD wRepeatCount;
                    //     WORD wVirtualKeyCode;
                    //     WORD wVirtualScanCode;
                    //     union {
                    //         WCHAR UnicodeChar;
                    //         CHAR   AsciiChar;
                    //     } uChar;
                    //     DWORD dwControlKeyState;
                    // } KEY_EVENT_RECORD, *PKEY_EVENT_RECORD;

                    // #define RIGHT_ALT_PRESSED     0x0001 // the right alt key is pressed.
                    // #define LEFT_ALT_PRESSED      0x0002 // the left alt key is pressed.
                    // #define RIGHT_CTRL_PRESSED    0x0004 // the right ctrl key is pressed.
                    // #define LEFT_CTRL_PRESSED     0x0008 // the left ctrl key is pressed.
                    // #define SHIFT_PRESSED         0x0010 // the shift key is pressed.
                    // #define NUMLOCK_ON            0x0020 // the numlock light is on.
                    // #define SCROLLLOCK_ON         0x0040 // the scrolllock light is on.
                    // #define CAPSLOCK_ON           0x0080 // the capslock light is on.
                    // #define ENHANCED_KEY          0x0100 // the key is enhanced.
                    // #define NLS_DBCSCHAR          0x00010000 // DBCS for JPN: SBCS/DBCS mode.
                    // #define NLS_ALPHANUMERIC      0x00000000 // DBCS for JPN: Alphanumeric mode.
                    // #define NLS_KATAKANA          0x00020000 // DBCS for JPN: Katakana mode.
                    // #define NLS_HIRAGANA          0x00040000 // DBCS for JPN: Hiragana mode.
                    // #define NLS_ROMAN             0x00400000 // DBCS for JPN: Roman/Noroman mode.
                    // #define NLS_IME_CONVERSION    0x00800000 // DBCS for JPN: IME conversion.
                    // #define NLS_IME_DISABLE       0x20000000 // DBCS for JPN: IME enable/disable.

                    if( info.Event.KeyEvent.bKeyDown )
                    {
                        char* postToken = 0 ;
                        obeyKeyF( postToken , info.Event.KeyEvent.uChar.AsciiChar , info.Event.KeyEvent.wVirtualKeyCode ) ;
    
                        if( postToken )
                        {
                            if( postCmd[ 0 ] ) strcat( postCmd , " " ) ;
                            strcat( postCmd , postToken ) ;
                            delF( postToken ) ;

                            freshenTokinF() ;

                            char* postCmdObey = 0 ;    

                            NEWtOKENS

                            if( !pTokens )
                            {
                                int costCmd = strlen( postCmd ) ;
                                if( costCmd )
                                {
                                    postCmdObey = newF( costCmd + 1 ) ;
                                    if( postCmdObey ) strcpy( postCmdObey , postCmd ) ;
                                }
                                postCmd[ 0 ] = 0 ;
                            }
                            delete pTokens ; pTokens = 0 ;

                            if
                            (
                                !postCmdObey
                                ||
                                (
                                    strcmp( postCmdObey , "nohibernate" ) &&
                                    strcmp( postCmdObey , "hibernate"   ) &&
                                    strcmp( postCmdObey , "terse"       ) &&
                                    strcmp( postCmdObey , "verbose"     ) &&
                                    strcmp( postCmdObey , "adamlow"     ) &&
                                    strcmp( postCmdObey , "adamhigh"    ) &&
                                    strcmp( postCmdObey , "refresh"     )
                                )
                            )
                            {
                                //freshenTokinF() ;
                                ether.title.freshF() ;
                                elf_eat_C::woF().sayChoicesF() ;
                            }

                            if( postCmdObey )
                            {
                                new elf_obey_C( postCmdObey , idMe ) ;
                                delF( postCmdObey ) ;
                            }
                        }
                    }
                    
                    break ;
                }   
                case WINDOW_BUFFER_SIZE_EVENT :
                {   
                    ether.replacePaperF() ;
                    ether.title.freshF() ;
                    sayChoicesF() ;

                    break ;
                }
                case MOUSE_EVENT :
                {
                    break ;
                }
                case MENU_EVENT :
                {
                    break ;
                }
                case FOCUS_EVENT :
                {
                    break ;
                }
                default :
                {
                    break ;
                }
            }
        }
    }
}

int elf_eat_C::matchF( int offt )
{
    NEWtOKENS

    int bOk = 0 ;

    if( pTokens && isEnabledF( (*pTokens)[ offt ] ) )
    {
        if( !postTokin[ 0 ] || !strcmp( (*pTokens)[ offt ] , "!any" ) ) bOk = 1 ;
        else if( !boff ) bOk = (*pTokens)[ offt ] == strstr( (*pTokens)[ offt ] , postTokin ) ;
        else
        {
            char postPart1[ sizeof postTokin ] ;
            char postPart2[ sizeof postTokin ] ;
    
            int costToken = strlen( postTokin ) ;
            int offAt = costToken - boff ;
    
            for( int offi = 0 ; offi < offAt ; offi ++ ) postPart1[ offi ] = postTokin[ offi ] ;
            postPart1[ offAt ] = 0 ;
    
            int offo = 0 ;
            for( int offi = offAt ; offi < costToken ; offi ++ ) postPart2[ offo ++ ] = postTokin[ offi ] ;
            postPart2[ offo ] = 0 ;
    
            // ASSUME THAT AN INSERTION IS TO OCCUR
            bOk =
                (
                    !offAt
                    ||
                    (*pTokens)[ offt ] == strstr( (*pTokens)[ offt ] , postPart1 )
                )
                &&
                (*pTokens)[ offt ] + offAt + 1 == strstr( (*pTokens)[ offt ] + offAt , postPart2 )
            ;
    
            if( !bOk && offAt )
            {
                // ASSUME THAT A BACKSPACE IS TO OCCUR
    
                postPart1[ offAt - 1 ] = 0 ;
                strcat( postPart1 , postPart2 ) ;
    
                bOk = (*pTokens)[ offt ] == strstr( (*pTokens)[ offt ] , postPart1 ) ;
            }
        }
    }
    delete pTokens ; pTokens = 0 ;

    return bOk ;
}

void elf_eat_C::removeF( void )
{
    int costToken = strlen( postTokin ) ;
    if( costToken )
    {
        if( !boff )
        {
            postTokin[ costToken - 1 ] = 0 ;
        }
        else
        {
            if( boff < costToken )
            {
                int offDoomed = costToken - boff - 1 ;
    
                for( int offo = offDoomed ; offo < costToken ; offo ++ ) postTokin[ offo ] = postTokin[ offo + 1 ] ;
            }
        }
    }
}

void elf_eat_C::sayChoicesF( void )
{
//#if defined( NEVERdEFINED )

    NEWtOKENS

    sayF( "\f" , flSAY_START ) ;

    if( pTokens )
    {
        int costMax = pTokens->costMaxF() ;
        if( costMax )
        {
            int cTokens = *pTokens ;

            if( cTokens )
            {
                char* postWrap = newF( ( 1 + costMax ) * cTokens + 2 ) ;
                if( postWrap )
                {
                    char* posto = postWrap ;
                    int cMatched = 0 ;
                    *posto = 0 ;
    
                    for( int offt = 0 ; offt < cTokens ; offt ++ )
                    {
                        if( matchF( offt ) )
                        {
                            if( cMatched ++ ) *( posto ++ ) = ' ' ;
    
                            const char* postt = (*pTokens)[ offt ] ;
                            strcpy( posto , postt ) ; posto += strlen( postt ) ;
                        }
                    }
    
                    if( !cMatched && !cIgnoreCommands )
                    {
                        strcpy( posto , "(all)" ) ; posto += 5 ;
                
                        for( int offt = 0 ; offt < cTokens ; offt ++ )
                        {
                            if( cMatched ++ ) *( posto ++ ) = ' ' ;
    
                            const char* postt = (*pTokens)[ offt ] ;
                            strcpy( posto , postt ) ; posto += strlen( postt ) ;
                        }
                    }
    
                    sayF( postWrap , flSAY_MIDDLE ) ;
                    delF( postWrap ) ;
                }
            }
        }
    }
    delete pTokens ; pTokens = 0 ;

    if( postCmd[ 0 ] && !cIgnoreCommands )
    {
        sayF( "!divider <>", flSAY_MIDDLE ) ;
        //sayF( "!paragraph" , flSAY_MIDDLE ) ;
        sayF( "Please continue keying the command that appears in square brackets [] by keying one of the listed tokens." , flSAY_MIDDLE ) ;
    }

    if( flagsAll & flELVES_TERSE ) sayF( "" , flSAY_END ) ;
    else
    {
        sayF( "!divider <>", flSAY_MIDDLE ) ;
    
        sayF(
    
            "[instructions]:"
            "  IdeaFarm (tm) Elves obey commands that you key."
            "  A command is a series of tokens, each separated by a blank."
            "  For example, \"help new\" is a command composed of two tokens."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "You can key a command at any time, even while previously keyed commands are being obeyed."
            "  As you key a command, it appears at the beginning of this window's title bar."
            "  At any time, all tokens that you are allowed to key are listed on the line just below the title bar."
            "  A keystroke will be ignored unless it is wo of the expected keys (the next key in wo of the listed tokens)."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "Usually, you only need to key the woth character of a token."
            "  As soon as you have keyed enough to uniquely identify wo of the listed tokens, it will be \"recognized\" and will appear in the title bar."
            "  As soon as a complete command is recognized, an elf will be born who will obey the command and then die."
            "  When a complete command is recognized, it will disappear from the title bar, indicating that you can begin to key another command."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "You can key, for example, the command \"help new\" whenever the token \"help\" is listed below the title bar."
            "  To key that command, you start keying \"help\" until it is recognized."
            "  Then you start keying \"new\" until it is recognized."
            "  When the full command is recognized, an explanation of the \"new\" command will appear in this window in a new section."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "While keying a token, you can press the \"esc\" key to discard the partially keyed token."
            "  If you press the \"esc\" key when you are not in the middle of keying a token, the entire partially keyed command will be discarded."
            "  If you press the \"esc\" key when you are not in the middle of keying a command, IdeaFarm (tm) Elves will close and all of the elves will go home."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "You can edit a partially keyed command."
            "  To discard the lath keystroke, press the \"backspace\" key."
            "  To discard a prior keystroke, press the \"left arrow\" key until the cursor appears immediately to the right of the doomed keystroke."
            "  Then press the \"backspace\" key."
            "  To insert a keystroke at a position other than at the (rightmost) end, move the cursor to the position where you want the new keystroke to appear; then key it."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "Whenever, while keying a command, you are allowed to key a value, a list of valid values will appear above."
            "  If there are value restrictions, they will also be listed."
            "  A keystroke at that time will only be accepted if it is consistent with the validation rules."
            "  Numeric bigits (hexadecimal digits) must be keyed in order of increasing significance, according to IdeaFarm (tm) City custom."
    
            , flSAY_MIDDLE
        ) ;
    
        sayF( "!paragraph", flSAY_MIDDLE ) ;
    
        sayF(
    
            "You can change the size, font, and layout of this window."
            "  If you do that while elves are working and writing to this window, what has already been written will be lost."
            "  The changes that you make will be remembered, so it is worth taking a moment to configure this window for IdeaFarm (tm) Elves."
            "  Recommendations:"
            "  (1) Choose the smallest font that you can read easily."
            "  (2) Make the window as large as possible."
            "  (3) Make the screen buffer the same width as the window but give the buffer lots of rows."
            "  Example: 6x8 raster font, 160 columns, 60 rows, with 1024 rows in the screen buffer."
    
            , flSAY_END
        ) ;
    }
//#endif
}

elf_obey_C::~elf_obey_C( void )
{
    if( !strcmp( postCmd , "refresh" ) ) dec02AM( cElvesUncounted ) ;
    delF( postCmd ) ;
}

elf_obey_C::elf_obey_C( const char* postCmdP , int idDadP ) :
elfC( idDadP ) ,
postCmd( newF( strlen( postCmdP ) + 1 ) )
{
    strcpy( postCmd , postCmdP ) ;
    if( !strcmp( postCmd , "refresh" ) ) inc02AM( cElvesUncounted ) ;

    flagsMe |= flELF_CONSTRUCTED ;
}

FILETIME elf_obey_C::minFileTimeF( const char* postLikeP )
{
    FILETIME ftMin ; ftMin.dwHighDateTime = ftMin.dwLowDateTime = - 1 ;

    WIN32_FIND_DATA info ;
    HANDLE oshFind = FindFirstFile( postLikeP , &info ) ;
    
    if( oshFind != INVALID_HANDLE_VALUE ) do
    {
        if( ftMin.dwHighDateTime > info.ftLastWriteTime.dwHighDateTime || ( ftMin.dwHighDateTime == info.ftLastWriteTime.dwHighDateTime && ftMin.dwLowDateTime > info.ftLastWriteTime.dwLowDateTime ) )
        {
            ftMin.dwHighDateTime = info.ftLastWriteTime.dwHighDateTime ;
            ftMin.dwLowDateTime  = info.ftLastWriteTime.dwLowDateTime  ;
        }
    }
    while( FindNextFile( oshFind , &info ) ) ;
    
    FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;

    if( ftMin.dwHighDateTime == - 1 && ftMin.dwLowDateTime == - 1 ) ftMin.dwHighDateTime = ftMin.dwLowDateTime = 0 ;
    return ftMin ;
}

FILETIME elf_obey_C::maxFileTimeF( const char* postLikeP )
{
    FILETIME ftMax ; ftMax.dwHighDateTime = ftMax.dwLowDateTime = 0 ;

    WIN32_FIND_DATA info ;
    HANDLE oshFind = FindFirstFile( postLikeP , &info ) ;
    
    if( oshFind != INVALID_HANDLE_VALUE ) do
    {
        if( ftMax.dwHighDateTime < info.ftLastWriteTime.dwHighDateTime || ( ftMax.dwHighDateTime == info.ftLastWriteTime.dwHighDateTime && ftMax.dwLowDateTime < info.ftLastWriteTime.dwLowDateTime ) )
        {
            ftMax.dwHighDateTime = info.ftLastWriteTime.dwHighDateTime ;
            ftMax.dwLowDateTime  = info.ftLastWriteTime.dwLowDateTime  ;
        }
    }
    while( FindNextFile( oshFind , &info ) ) ;
    
    FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;

    return ftMax ;
}

int elf_obey_C::isStaleF( const char* postToLikeP , const char* postFromLikeP )
{
    FILETIME minFtTo   = minFileTimeF( postToLikeP   ) ;
    FILETIME maxFtFrom = maxFileTimeF( postFromLikeP ) ;

    return

        maxFtFrom.dwHighDateTime > minFtTo.dwHighDateTime
        ||
        (
            maxFtFrom.dwHighDateTime == minFtTo.dwHighDateTime
            &&
            maxFtFrom.dwLowDateTime  >  minFtTo.dwLowDateTime
        )

    ;
}

int elf_obey_C::isStaleF( const char* postToLikeP , const char* postFromLike1P , const char* postFromLike2P )
{
    FILETIME minFtTo    = minFileTimeF( postToLikeP    ) ;
    FILETIME maxFtFrom1 = maxFileTimeF( postFromLike1P ) ;
    FILETIME maxFtFrom2 = maxFileTimeF( postFromLike2P ) ;

    FILETIME maxFtFrom =
        maxFtFrom2.dwHighDateTime > maxFtFrom1.dwHighDateTime
        ||
        (
            maxFtFrom2.dwHighDateTime == maxFtFrom1.dwHighDateTime
            &&
            maxFtFrom2.dwLowDateTime > maxFtFrom1.dwLowDateTime
        )
        ? maxFtFrom2
        : maxFtFrom1
    ;

    return

        maxFtFrom.dwHighDateTime > minFtTo.dwHighDateTime
        ||
        (
            maxFtFrom.dwHighDateTime == minFtTo.dwHighDateTime
            &&
            maxFtFrom.dwLowDateTime  >  minFtTo.dwLowDateTime
        )

    ;
}


void elf_obey_C::liveF( void )
{
    makeFoldersCopyThirdPartyDllsF() ; // THIS IS REDUNDANT BUT IS LOW COST AND ADDS IDIOT PROOFING (USER DELETING FOLDERS AFTER LAUNCHING THIS PROGRAM)
    
    //1 TOKEN COMMANDS, ALPHABETICAL
    if( !strcmp( postCmd , "adamhigh" ) )
    {
        flagsAll &= ~( flELVES_LOWaDAMS ) ;

        elf_eat_C::delAdamListIF( flADAMlIST_null    ) ;
        elf_eat_C::delAdamListIF( flADAMlIST_DEFINED ) ;

        //elf_eat_C::woF().freshenTokinF() ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "adamlow" ) )
    {
        flagsAll |= flELVES_LOWaDAMS ;

        elf_eat_C::delAdamListIF( flADAMlIST_null    ) ;
        elf_eat_C::delAdamListIF( flADAMlIST_DEFINED ) ;

        //elf_eat_C::woF().freshenTokinF() ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "ascii" ) )
    {
        sayF( "!center American Standard Code for Information Interchange (ASCII)" , flSAY_START ) ;
    
        int cColsPerCol = 0xa ;
        int cColumns = 0x10 ;

        ether.grabPaperF() ;
        paperOldC& paper = ether ;

        int cCols = paper.cColsF() ;
    
        char* postCrLfIndent = 0 ;
        {
            int cIndent = 0 ;
    
            int bss = 0 ; //"ss": "SINGLE SPACE"
            for(  ;  ; cColumns >>= 1 )
            {
                cIndent = ( cCols - cColsPerCol * cColumns ) / 2 ;
                if( cIndent >= 0 ) break ;
                bss = 1 ;
            }
    
            postCrLfIndent = newF( cIndent > 0 ? cIndent + 5 : 5 ) ;
            strcpy( postCrLfIndent , bss ? "\r\n" : "\r\n\r\n" ) ;
            char* posto = postCrLfIndent + ( bss ? 2 : 4 ) ;
    
            if( cIndent > 0 ) while( cIndent -- ) *( posto ++ ) = ' ' ;
            *posto = 0 ;
        }
    
        char* postTmp = newF( 0x100 * 0x10 + 0x100 / cColumns * ( 0x10 + strlen( postCrLfIndent ) ) ) ;
        postTmp[ 0 ] = 0 ;
        char post2[] = { 0 , 0 } ;
        for( post2[ 0 ] = 0 ;; post2[ 0 ] ++ )
        {
            char post9f[ 9 ] ;
            itoa( post2[ 0 ] , post9f , 0x10 ) ;
            char post9[ 9 ] = "" ;
            int costf = strlen( post9f ) ;
            char* posti = post9f + costf ;
            char* posto = post9 ;
            while( costf -- ) *( posto ++ ) = *( -- posti ) ;
            *posto = 0 ;
    
            if( !( post2[ 0 ] % cColumns ) ) strcat( postTmp , postCrLfIndent + ( !post2[ 0 ] << 1 ) ) ;
    
            strcat( postTmp , post9 ) ;
            strcat( postTmp , post2[ 0 ] < 0x10 ? "  " : " " ) ;
    
            switch( post2[ 0 ] )
            {
                case 0x00 : { strcat( postTmp , " "   ) ; strcat( postTmp , " nul  " ) ; break ; }
                case 0x01 : { strcat( postTmp , post2 ) ; strcat( postTmp , " soh  " ) ; break ; }
                case 0x02 : { strcat( postTmp , post2 ) ; strcat( postTmp , " stx  " ) ; break ; }
                case 0x03 : { strcat( postTmp , post2 ) ; strcat( postTmp , " etx  " ) ; break ; }
                case 0x04 : { strcat( postTmp , post2 ) ; strcat( postTmp , " eot  " ) ; break ; }
                case 0x05 : { strcat( postTmp , post2 ) ; strcat( postTmp , " enq  " ) ; break ; }
                case 0x06 : { strcat( postTmp , post2 ) ; strcat( postTmp , " ack  " ) ; break ; }
                case 0x07 : { strcat( postTmp , " "   ) ; strcat( postTmp , " bel  " ) ; break ; }
                case 0x08 : { strcat( postTmp , " "   ) ; strcat( postTmp , " bs   " ) ; break ; }
                case 0x09 : { strcat( postTmp , " "   ) ; strcat( postTmp , " tab  " ) ; break ; }
                case 0x0a : { strcat( postTmp , " "   ) ; strcat( postTmp , " lf   " ) ; break ; }
                case 0x0b : { strcat( postTmp , post2 ) ; strcat( postTmp , " vt   " ) ; break ; }
                case 0x0c : { strcat( postTmp , post2 ) ; strcat( postTmp , " ff   " ) ; break ; }
                case 0x0d : { strcat( postTmp , " "   ) ; strcat( postTmp , " cr   " ) ; break ; }
                case 0x0e : { strcat( postTmp , post2 ) ; strcat( postTmp , " so   " ) ; break ; }
                case 0x0f : { strcat( postTmp , post2 ) ; strcat( postTmp , " si   " ) ; break ; }
                case 0x10 : { strcat( postTmp , post2 ) ; strcat( postTmp , " dle  " ) ; break ; }
                case 0x11 : { strcat( postTmp , post2 ) ; strcat( postTmp , " dc1  " ) ; break ; }
                case 0x12 : { strcat( postTmp , post2 ) ; strcat( postTmp , " dc2  " ) ; break ; }
                case 0x13 : { strcat( postTmp , post2 ) ; strcat( postTmp , " dc3  " ) ; break ; }
                case 0x14 : { strcat( postTmp , post2 ) ; strcat( postTmp , " dc4  " ) ; break ; }
                case 0x15 : { strcat( postTmp , post2 ) ; strcat( postTmp , " nak  " ) ; break ; }
                case 0x16 : { strcat( postTmp , post2 ) ; strcat( postTmp , " syn  " ) ; break ; }
                case 0x17 : { strcat( postTmp , post2 ) ; strcat( postTmp , " etb  " ) ; break ; }
                case 0x18 : { strcat( postTmp , post2 ) ; strcat( postTmp , " can  " ) ; break ; }
                case 0x19 : { strcat( postTmp , post2 ) ; strcat( postTmp , " em   " ) ; break ; }
                case 0x1a : { strcat( postTmp , post2 ) ; strcat( postTmp , " sub  " ) ; break ; }
                case 0x1b : { strcat( postTmp , post2 ) ; strcat( postTmp , " esc  " ) ; break ; }
                case 0x1c : { strcat( postTmp , post2 ) ; strcat( postTmp , " fs   " ) ; break ; }
                case 0x1d : { strcat( postTmp , post2 ) ; strcat( postTmp , " gs   " ) ; break ; }
                case 0x1e : { strcat( postTmp , post2 ) ; strcat( postTmp , " rs   " ) ; break ; }
                case 0x1f : { strcat( postTmp , post2 ) ; strcat( postTmp , " us   " ) ; break ; }
                default   : { strcat( postTmp , post2 ) ; strcat( postTmp , "      " ) ; break ; }
            }
    
            if( post2[ 0 ] == 0xff ) break ;
        }
    
        sayF( postTmp , flSAY_NOwRAP | flSAY_END ) ;
        delF( postCrLfIndent ) ;
        delF( postTmp ) ;

        ether.ungrabPaperF() ;
    }
    else if( !strcmp( postCmd , "documents" ) )
    {
        system( "for %f in (\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\documents\\ideafarm.city.constitution\\*) do start /b notepad %f" ) ;
    }
    else if( !strcmp( postCmd , "hibernate" ) )
    {
        flagsAll |= flELVES_HIBERNATE ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "install" ) )
    {
        new elf_obey_C( "!worker_install" , idMe ) ;
    }
    else if( !strcmp( postCmd , "nohibernate" ) )
    {
        flagsAll &= ~( flELVES_HIBERNATE ) ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "terse" ) )
    {
        flagsAll |= flELVES_TERSE ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "test" ) )
    {
        HANDLE oshFile = CreateFile( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\__TMP__.tmp" , GENERIC_WRITE , 0 , 0 , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , 0 ) ;
        if( oshFile )
        {
            sayF( "  [test]:  I have opened the __TMP__ file and will keep it open until all of the elves are told to go home." ) ;
            while( !ether.smellF() ) Sleep( 0x100 ) ;
            sayF( "  [test]:  I am now closing the __TMP__ file." ) ;
        }
        CloseHandle( oshFile ) ; oshFile = 0 ;
    }
    else if( !strcmp( postCmd , "test2" ) )
    {
        sayF( "  Hello from test2." ) ;
    }
    else if( !strcmp( postCmd , "verbose" ) )
    {
        flagsAll &= ~( flELVES_TERSE ) ;
        ether.title.freshF() ;
        elf_eat_C::woF().sayChoicesF() ;
    }
    else if( !strcmp( postCmd , "!worker_5adam_exe_fancy" ) )
    {
        compileF( "4boot" , "41000003" , "citizenGuiDriver" ) ;
        linkF( "41000003" ) ;
        new elf_obey_C( "!worker_5adam_dll"       , idMe ) ;
    }
    else if( !strcmp( postCmd , "!worker_5adam_exe_plain" ) )
    {
        compileF( "4boot" , "41000002" , "citizenConsoleDriver" ) ;
        linkF( "41000002" ) ;
        new elf_obey_C( "!worker_5adam_exe_fancy" , idMe ) ;
    }
    else if( !strcmp( postCmd , "!worker_5adam_dll" ) )
    {
        compileF( "5adam" , "51000620" , "1" ) ;
        linkF( "51000620" ) ;
    }
    else if( !strcmp( postCmd , "!worker_install" ) )
    {
        system( "\\ideafarm.work\\txt\\ideafarm.com\\ideafarm.msi" ) ;
    }

    //2 TOKEN COMMANDS, ALPHABETICAL
    else if( postCmd == strstr( postCmd , "edit " ) )
    {
        const char* posti = postCmd + 5 ;

        char posta[] = { "51000000" } ;
        {
            int costi = strlen( posti ) ;
            char* posto = posta + 7 ;
            while( costi -- ) *( posto -- ) = *( posti ++ ) ;
        }

        //char postCmd[ 0x200 ] = { "viw \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam." } ; // WATCOM EDITOR
        char postCmd[ 0x200 ] = { "rw \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam." } ; // RIMSTAR EDITOR
        strcat( postCmd , posta ) ;
        strcat( postCmd , ".*" ) ;

        system( postCmd ) ;
    }
    else if( postCmd == strstr( postCmd , "help " ) )
    {
        const char* postw = postCmd + 5 ;
        sayF( "[" , flSAY_START ) ;
        sayF( postCmd , flSAY_MIDDLE ) ;
        sayF( "]: " , flSAY_MIDDLE ) ;

             if( !strcmp( postw , "adamlow"     ) )   sayF( "Sets the adam mode so that the (low numbered) system adams are listed for edit, make, plain, etc." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "adamhigh"    ) )   sayF( "Sets the adam mode so that the current user's adams are listed for edit, make, plain, etc." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "ascii"       ) )   sayF( "Displays a table of the eight bit ASCII character codes." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "debugno"     ) )   sayF( "Clears the \"include debug information\" flag so that subsequent links will discard symbolic debug information." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "debugyes"    ) )   sayF( "Sets the \"include debug information\" flag so that subsequent links will retain symbolic debug information." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "documents"   ) )   sayF( "Displays the Constitutional Declaration of Ideafarm (tm) City and the source code for the IDEAFARM.COM web site as it was in 2003.  The web site content is of historical interest and should guide interpretation of the Constitutional Declaration." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "edit"        ) )   sayF( "Opens the definition of a listed adam.  All adam definitions for the current user are listed.  An adam definition is a C++ source code file in the dictionary folder.  Adam definitions are numbered, and each user is assigned a number range." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "fancy"       ) )   sayF( "Hires the local cell of an adam by launching a graphics process." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "fancyd"      ) )   sayF( "Debugs the local cell of an adam by launching a graphics process." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "help"        ) )   sayF( "Displays a description of a command.  A description is available for every command." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "hibernate"   ) )   sayF( "Sets the mode to \"hibernate when done\"." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "install"     ) )   sayF( "Installs IPDOS (tm).  You do not need to install IPDOS (tm) in order to use IdeaFarm (tm) Elves.  Nor do you need IdeaFarm (tm) Elves to use IPDOS (tm).  These are two entirely separate products, except that both are delivered to you within the home folder, \"ideafarm.home.1\", which must be on a local fixed drive and not be contained within any other folder." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "make"        ) )   sayF( "Compiles and links a listed adam.  All adam definitions for the current user are listed.  An adam definition is a C++ source code file in the dictionary folder.  Adam definitions are numbered, and each user is assigned a number range." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "monitor"     ) )   sayF( "Hires the local cell of an adam by launching the MONITOR adam, to produce reports that can be used to reveal why a deadlock has occured abd reveal where in the code the cpu is spending lots of time." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "new"         ) )   sayF( "Creates a new listed adam by copying a starter adam definition.  An adam is listed if and only if its dll exists in the master folder." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "nohibernate" ) )   sayF( "Sets the mode to \"do not hibernate when done\"." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "plain"       ) )   sayF( "Hires the local cell of an adam by launching a console process." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "plaind"      ) )   sayF( "Debugs the local cell of an adam by launching a console process." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "terse"       ) )   sayF( "Sets the display mode to terse, which results in abridged information being displayed." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "test"        ) )   sayF( "This command is not supposed to be enabled.  The code that implements it should have been commented out.  This command only exists for the benefit of a person who is debugging or enhancing IdeaFarm (tm) Elves." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "test2"       ) )   sayF( "This command is not supposed to be enabled.  The code that implements it should have been commented out.  This command only exists for the benefit of a person who is debugging or enhancing IdeaFarm (tm) Elves." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "user"        ) )   sayF( "Sets the \"user\" setting.  The \"new\" command uses this setting to ensure that oo distinct users do not create an adam with the same idAdam value." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "verbose"     ) )   sayF( "Sets the display mode to verbose, which results in unabridged information being displayed." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "refresh"     ) )   sayF( "This command hires an elf that rebuilds whenever any files are stale." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "1tools"      ) )   sayF( "Makes the tools that the elves will need.  (Makes ideafarm.filepile.ipdos and ideafarm.flip.ipdos.)" , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "2snips"      ) )   sayF( "Makes all of the generated code that can be made without using an IPDOS (tm) executable.  \"Snip\" is used as a synonym for \"included file\" in oo ways.  In the dictionary folder, the 1snip.* files contain symbolic constants, macros, function prototypes, and typedefs.  The \"snip\" folder contains all generated code." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "3compile"    ) )   sayF( "Compiles (or assembles) all stale object modules for the huge base dll." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "4link"       ) )   sayF( "Links to make the huge base dll." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "5adam"       ) )   sayF( "Makes master files so that an adam called \"Adam\" (as in \"Adam and Eve\") can be launched.  (An \"adam\" is a small dll that contains the executable code for an IPDOS (tm) application.)" , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "6patch"      ) )   sayF( "Hires Adam.  Adam makes Eve and then hires her.  Eve then makes other adams." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "7package"    ) )   sayF( "Compiles and links using Wix to build the Windows Installer file (ideafarm.msi)." , flSAY_MIDDLE ) ;
        else if( !strcmp( postw , "8bundle"     ) )   sayF( "Updates the Z file, which Service looks for in each home.  Builds the zip file \"ideafarm.bundle.zip\"." , flSAY_MIDDLE ) ;
        else                                        { sayF( "I have forgotten to write a description for \"" , flSAY_MIDDLE ) ; sayF( postw , flSAY_MIDDLE ) ; sayF( "\".  Please let me know!" , flSAY_MIDDLE ) ; }

        sayF( "" , flSAY_END ) ;
    }
    else if
    (
        postCmd == strstr( postCmd , "make "            ) ||
        !strcmp( postCmd , "releaseprecious"            ) ||
        !strcmp( postCmd , "releasetool"                )
    )
    {
        int bMake     = postCmd == strstr( postCmd , "make " ) ;
        int bPrecious = !strcmp( postCmd , "releaseprecious" ) ;
        int bTool     = !strcmp( postCmd , "releasetool" ) ;

        const char* posta = bMake ? postCmd + 5 : 0 ;

        int idCopyExe = 0 ;
        batMake.grabF() ;
        {
            int cDone = 0 ;
            idCopyExe = idCopyF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm" , cDone ) ;
            if( cDone ) { BLAMMO ; }
        }

        if( idCopyExe )
        {
            char postf[ 9 ] = "" ;
            {
                char post9f[ 9 ] ;
                itoa( idCopyExe , post9f , 0x10 ) ;
                int cPad = 8 - strlen( post9f ) ;

                while( cPad -- ) strcat( postf , "0" ) ;
                strcat( postf , post9f ) ;

                char postCmd[ 0x200 ] = "" ;
                if( bNumaIsAvailableF() ) strcat( postCmd , "start " postNUMAnODE " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;
                else                      strcat( postCmd , "start "              " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;
                //strcpy( postCmd ,                 "wdw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;

                strcat( postCmd , postf ) ;
                #if defined( TELL )

                                              strcat( postCmd , ".ipdos-we 51000622 !idHome 10000008" ) ;
                    if( bNumaIsAvailableF() ) strcat( postCmd , " !idNumaNode 2" ) ;

                #else

                    strcat( postCmd , ".ipdos-we 51000622 !idHome 10000008" ) ;
                    if( bNumaIsAvailableF() ) strcat( postCmd , " !idNumaNode 2" ) ;
                    strcat( postCmd , " !noTells" ) ;

                #endif
                if( bMake )
                {
                    strcat( postCmd , " !make " ) ;
                    strcat( postCmd , posta ) ;
                }
                else if( bPrecious ) strcat( postCmd , " !precious" ) ;
                else if( bTool     ) strcat( postCmd , " !tool" ) ;

                system( postCmd ) ;
            }
        }
        batMake.ungrabF() ;
    }
    else if( postCmd == strstr( postCmd , "monitor " ) )
    {
        const char* posti = postCmd + 8 ;

        char posta[] = { "51000000" } ;
        {
            int costi = strlen( posti ) ;
            char* posto = posta + 7 ;
            while( costi -- ) *( posto -- ) = *( posti ++ ) ;
        }

        int idCopyExe = 0 ;
        {
            int cDone = 0 ;
            idCopyExe = idCopyF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm" , cDone ) ;
            if( cDone ) { BLAMMO ; }
        }

        if( idCopyExe )
        {
            char postPadded[ 9 ] = "" ;
            {
                char postRaw[ 9 ] ;
                itoa( idCopyExe , postRaw , 0x10 ) ;
                int cPad = 8 - strlen( postRaw ) ;

                while( cPad -- ) strcat( postPadded , "0" ) ;
                strcat( postPadded , postRaw ) ;
            }

            char postCmd[ 0x200 ] = { "" } ;
            if( bNumaIsAvailableF() ) strcat( postCmd , "start " postNUMAnODE " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;
            else                      strcat( postCmd , "start "              " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;
            strcat( postCmd , postPadded ) ;
            strcat( postCmd , ".ipdos-we 510004fb !idAdamMonitor " ) ;
            strcat( postCmd , posta ) ;

            system( postCmd ) ;
        }
    }
    else if( postCmd == strstr( postCmd , "new " ) )
    {
        const char* postw = postCmd + 4 ;

        char* postUser = 0 ;
        if( flagsAll & flELVES_HIGHpRIEST ) boxGetShadowF( postUser , postFILEuSER , idMe ) ;
        else
        {
            char postu[] = "anonymous" ;
            postUser = newF( sizeof postu ) ;
            strcpy( postUser , postu ) ;
        }

        if( postUser && *postUser )
        {
            int idAdamMaxUsed = 0 ;
            {
                const int* pcIdAdam = elf_eat_C::pcIdAdamIF( flADAMlIST_DEFINED ) ;

                while( *pcIdAdam )
                {
                    if( idAdamMaxUsed < *pcIdAdam ) idAdamMaxUsed = *pcIdAdam ;
                    pcIdAdam ++ ;
                }

                idAdamMaxUsed |= 0x51000000 ;
            }

            char postFile[ 0x100 ] = { "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\idAdamLath." } ;
            strcat( postFile , postUser ) ;
   
            int idAdam = boxDispenseIdF( postFile , idAdamMaxUsed + 1 , idMe ) ;

            char post9f[ 9 ] ;
            itoa( idAdam , post9f , 0x10 ) ;

            elf_eat_C::delAdamListIF( flADAMlIST_null    ) ;
            elf_eat_C::delAdamListIF( flADAMlIST_DEFINED ) ;

            char postCmd[ 0x200 ] = { "copy \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam." } ;

                 if( !strcmp( postw , "1hello"    ) ) strcat( postCmd , "51001001" ) ;
            else if( !strcmp( postw , "2threads"  ) ) strcat( postCmd , "51001002" ) ;
            else if( !strcmp( postw , "3fancy"    ) ) strcat( postCmd , "51001003" ) ;
            else if( !strcmp( postw , "4progress" ) ) strcat( postCmd , "51001004" ) ;
            else if( !strcmp( postw , "5where"    ) ) strcat( postCmd , "51001005" ) ;
            strcat( postCmd , ".1 \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\5adam." ) ;
            strcat( postCmd , post9f ) ;
            strcat( postCmd , ".1" ) ;

            system( postCmd ) ;

            char post9[ 9 ] ;
            itoaF( post9 , sizeof post9 , idAdam & 0xffffff ) ;

            strcpy( postCmd , "make " ) ;
            strcat( postCmd , post9 ) ;

            new elf_obey_C( postCmd ) ;
        }

        delF( postUser ) ;
    }
    else if
    (
        postCmd == strstr( postCmd , "fancy "  ) ||
        postCmd == strstr( postCmd , "fancyd " ) ||
        postCmd == strstr( postCmd , "plain "  ) ||
        postCmd == strstr( postCmd , "plaind " )
    )
    {
        int bDebug = postCmd[ 5 ] == 'd' ;

        const char* posti = postCmd + 6 + bDebug ;

        char posta[] = { "51000000" } ;
        {
            int costi = strlen( posti ) ;
            char* posto = posta + 7 ;
            while( costi -- ) *( posto -- ) = *( posti ++ ) ;
        }

        int idCopyExe = 0 ;
        {
            int cDone = 0 ;
            idCopyExe = idCopyF
            (
                postCmd == strstr( postCmd , "fancy" )
                    ? "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000003.ipdos-wm"
                    : "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm"
                ,
                cDone
            ) ;
            if( cDone ) { BLAMMO ; }
        }

        if( idCopyExe )
        {
            char postf[ 9 ] = "" ;
            {
                char post9f[ 9 ] ;
                itoa( idCopyExe , post9f , 0x10 ) ;
                int cPad = 8 - strlen( post9f ) ;

                while( cPad -- ) strcat( postf , "0" ) ;
                strcat( postf , post9f ) ;

                char postCmd[ 0x200 ] = { "" } ;
                if( bNumaIsAvailableF() ) strcat( postCmd , bDebug ? "wdw " : "start " postNUMAnODE " /wait " ) ;
                else                      strcat( postCmd , bDebug ? "wdw " : "start "              " /wait " ) ;
                strcat( postCmd , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ) ;
                strcat( postCmd , postf ) ;
                strcat( postCmd , ".ipdos-we " ) ;
                strcat( postCmd , posta ) ;
                #if defined( TELL )
                    strcat( postCmd , " !idHome 10000008" ) ;
                #else
                    strcat( postCmd , " !idHome 10000008 !noTells" ) ;
                #endif

                if( bDebug )                   strcat( postCmd , " !debug" ) ;
                else if( bNumaIsAvailableF() ) strcat( postCmd , " !idNumaNode 2" ) ;

                //20160419@1858: KERNELmONITOR REQUIRES SYSTEM THREADS FOR QUIT QUALITY
                //if( bDebug ) strcat( postCmd , " !noSystemThreads" ) ;

                //strcat( postCmd , " !threadChatter" ) ;

                int cToDo = 1 ; //NORMALLY THIS SHOULD BE 1
                while( cToDo -- ) system( postCmd ) ;
            }
        }
    }
    else if( !strcmp( postCmd , "refresh" ) )
    {
        int idCycle = 0 ;
        {
            cCompiled = 0 ;

            if( flagsAll & flELVES_HIGHpRIEST )
            {
                inc02AM( cIgnoreCommands ) ;
                ether.title.freshF() ;
                elf_eat_C::woF().sayChoicesF() ;
    
                if( !etherC::smellF() ) { new elf_obey_C( "1tools"   , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                if( !etherC::smellF() ) { new elf_obey_C( "2snips"   , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }

                if( !etherC::smellF() )
                {
                    new elf_obey_C( "3compile" , idMe ) ;
                    while( elfC::cElvesIF() > 2 )
                        Sleep( 0x100 ) ;
                }

                batMake.grabF() ;
                if( !etherC::smellF() ) { new elf_obey_C( "4link"    , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                if( !etherC::smellF() ) { new elf_obey_C( "5adam"    , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                if( !etherC::smellF() ) { new elf_obey_C( "6patch"   , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                if( !etherC::smellF() ) { new elf_obey_C( "7package" , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                if( !etherC::smellF() ) { new elf_obey_C( "8bundle"  , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; }
                batMake.ungrabF() ;
    
                dec02AM( cIgnoreCommands ) ;
                ether.title.freshF() ;
                elf_eat_C::woF().sayChoicesF() ;
            }
            else
            {
                inc02AM( cIgnoreCommands ) ;
                ether.title.freshF() ;
                elf_eat_C::woF().sayChoicesF() ;
    
                batMake.grabF() ;
                if( !etherC::smellF() ) { new elf_obey_C( "6patch"   , idMe ) ; while( elfC::cElvesIF() > 2 ) Sleep( 0x100 ) ; } //THIS IS DONE TO ELIMINATE THE NEED TO SHIP HOVER FILES
                batMake.ungrabF() ;
    
                dec02AM( cIgnoreCommands ) ;
                ether.title.freshF() ;
                elf_eat_C::woF().sayChoicesF() ;
            }

            if( !cCompiled && flagsAll & flELVES_HIBERNATE ) system( "shutdown /h" ) ;
        }
    }
    else if( !strcmp( postCmd , "6patch" ) )
    {
        //CS:CODEsYNC: elves:5adam elves:6patch 51000620

        char* ppostMas[] =
        {
            "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wm" ,
            "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm" ,
            "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000003.ipdos-wm" ,
            "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.51000620.ipdos-wm"
        } ;

        int cDo = 0 ;
        for( int offm = 0 ; offm < sizeof ppostMas / sizeof ppostMas[ 0 ] ; offm ++ )
        {
            int idCopy = idCopyF( ppostMas[ offm ] , cDo ) ;

            if( !cDo )
            {
                FILETIME maxFtMas = maxFileTimeF( ppostMas[ offm ] ) ;

                char postValue[ 9 ] ;
                itoa( idCopy , postValue , 0x10 ) ;
                int cPad = 8 - strlen( postValue ) ;

                char post9f[ 9 ] = "" ;
                while( cPad -- ) strcat( post9f , "0" ) ;
                strcat( post9f , postValue ) ;

                char postHover[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\ideafarm." ;
                strcat( postHover , post9f ) ;
                strcat( postHover , ".ipdos-w?" ) ;

                FILETIME maxFtHov = maxFileTimeF( postHover ) ;

                if( maxFtMas.dwHighDateTime > maxFtHov.dwHighDateTime || ( maxFtMas.dwHighDateTime == maxFtHov.dwHighDateTime && maxFtMas.dwLowDateTime > maxFtHov.dwLowDateTime ) ) cDo ++ ;
            }
        }

        if( cDo )
        {
            sayF( "  Hiring Adam." , flSAY_START ) ;
            sayF( "!paragraph" , flSAY_END ) ;

            if( bNumaIsAvailableF() )
            {
                #if defined( TELL )
                    //system(                          "wdw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !idNumaNode 2" ) ;
                      system( "start " postNUMAnODE " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !idNumaNode 2" ) ;
                #else
                    //system(                          "wdw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !idNumaNode 2 !noTells" ) ;
                      system( "start " postNUMAnODE " /wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !idNumaNode 2 !noTells" ) ;
                #endif
            }
            else
            {
                #if defined( TELL )
                    //system(                          "wdw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008" ) ;
                      system( "start "               "/wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008" ) ;
                #else
                    //system(                          "wdw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !noTells" ) ;
                      system( "start "               "/wait \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !noTells" ) ;
                #endif
            }
        }
    }
    else if( flagsAll & flELVES_HIGHpRIEST )
    {
        if( !strcmp( postCmd , "debugyes" ) )
        {
            flagsAll |= flELVES_DEBUGiNFO ;
            ether.title.freshF() ;
            elf_eat_C::woF().sayChoicesF() ;
        }
        else if( !strcmp( postCmd , "debugno" ) )
        {
            flagsAll &= ~( flELVES_DEBUGiNFO ) ;
            ether.title.freshF() ;
            elf_eat_C::woF().sayChoicesF() ;
        }
        else if( !strcmp( postCmd , "1tools" ) )
        {
            int bWothSay = 1 ;

            char* ppostTool[] = { "filepile" , "flip" , "service" , "hdrsplit" } ;              // "adam" CAN'T BE BUILT YET BECAUSE ITS SOURCE INCLUDES A SNIP THAT I HAVENT MADE YET
            for( int offt = 0 ; offt < sizeof ppostTool / sizeof ppostTool[ 0 ] ; offt ++ )
            {
                char postSrc[ 0x100 ] = "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\" ;
                strcat( postSrc , ppostTool[ offt ] ) ;
                strcat( postSrc , "\\" ) ;
                strcat( postSrc , ppostTool[ offt ] ) ;
                strcat( postSrc , ".cpp" ) ;
    
                char postObj[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\" ;
                strcat( postObj , ppostTool[ offt ] ) ;
                strcat( postObj , ".obj" ) ;
    
                char postExe[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm." ;
                strcat( postExe , ppostTool[ offt ] ) ;
                strcat( postExe , ".ipdos" ) ;
    
                if( isStaleF( postExe , postSrc ) )
                {
                    sayF( bWothSay && bWothSay -- ? "  [1tools]:" : "" , flSAY_START ) ;
                    sayF( "  Compiling " , flSAY_MIDDLE ) ;
                    sayF( ppostTool[ offt ] , flSAY_MIDDLE ) ;
                    sayF( "." , flSAY_END ) ;
    
                    char postCmd[ 0x400 ] = "wpp386" ;
                    /*if( flagsAll & flELVES_DEBUGiNFO )*/ strcat( postCmd , " -d2" ) ;  //DEBUG INFO IS ALWAYS INSERTED INTO OBJECT MODULES

                    strcat( postCmd , " " IPDOScOMPILEoPTIONS ) ;

                    strcat( postCmd , " -fhq=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\" ) ;
                    strcat( postCmd , ppostTool[ offt ] ) ;
                    strcat( postCmd , ".pch -fo=" ) ;
                    strcat( postCmd , postObj ) ;
                    strcat( postCmd , " -fr=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\" ) ;
                    strcat( postCmd , ppostTool[ offt ] ) ;
                    strcat( postCmd , ".err " ) ;
                    strcat( postCmd , postSrc ) ;

                    //DEBUG ------------------------------------------------- (BEGIN)
                    {
                        HANDLE hfo = CreateFile( "d:\\\\tmp\\foo.ttt" , GENERIC_WRITE , 0 , 0 , OPEN_ALWAYS , FILE_FLAG_SEQUENTIAL_SCAN , 0 ) ;
                        int bFail = hfo == INVALID_HANDLE_VALUE ;
                        if( bFail )
                        {
                            printf( "ERROR: count not open OUTPUT file.\r\n" ) ;
                        }
                        else
                        {
                            //SetFilePointer( hfo , 0 , 0 , FILE_END ) ;
                            unsigned long cbActual = 0 ;
                            WriteFile( hfo , (char*)postCmd , strlen( postCmd ) , &cbActual , 0 ) ;
                            CloseHandle( hfo ) ;
                        }
                    }
                    //DEBUG ------------------------------------------------- (END)

                    //U::BUG: WON'T BUILD adam

                    //system( postCmd ) ;
                    hireF( idMe , postCmd ) ;
                }
    
                if( isStaleF( postExe , postObj ) )
                {
                    sayF( bWothSay && bWothSay -- ? "  [1tools]:" : "" , flSAY_START ) ;
                    sayF( "  Linking " , flSAY_MIDDLE ) ;
                    sayF( ppostTool[ offt ] , flSAY_MIDDLE ) ;
                    sayF( "." , flSAY_END ) ;
    
                    char postCmd[ 0x400 ] = "wlink" ;
                    if( flagsAll & flELVES_DEBUGiNFO ) strcat( postCmd , " debug all" ) ;
                    strcat( postCmd , " name " ) ;
                    strcat( postCmd , postExe ) ;
                    strcat( postCmd , " file " ) ;
                    strcat( postCmd , postObj ) ;
                    strcat( postCmd , " op map=\\tmp\\" ) ;
                    strcat( postCmd , ppostTool[ offt ] ) ;

                    strcat( postCmd ,
            
                        ".map"
                        " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\wsock32.lib"
                        " op q"
                        " op el"
                        " op mangle"
                        " >> \\tmp\\link.err"
            
                    ) ;
    
                    batWatcom.grabF() ;
                    system( postCmd ) ; //MUST BE SERIALIZED SINCE wlink USES A TEMPORARY FILE THAT IT CREATES, AND WILL COLLIDE WITH ITSELF IN CREATING THIS FILE
                    batWatcom.ungrabF() ;
                }
    
                char postLike[ 0x4 ] = { "" } ;
                strcat( postLike , ppostTool[ offt ] ) ;
                strcat( postLike , ".*" ) ;
    
                ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp" , postLike ) ;
            }
        }
        else if( !strcmp( postCmd , "2snips" ) )
        {
            //20150323@1258: ADDED THE FOLLOWING LINE AS PART OF ADDING SUPPORT FOR C MODULES SO CAN USE WINDOWS STRUCTURED EXCEPTION HANDLING ( _try _except _finally )
            // JUST STUCK IT HERE RATHER THAN THINK THROUGH THE MOST APPROPRIATE PLACE, WHICH WOULD PROBABLY BE TO DEFINE A NEW NUMBERED PHASE.  ("1tools" IS A NUMBERED PHASE.)
            system( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.01000002.cnotcppheader > \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip\\1snip.01000002.cnotcppheader.h" ) ;

            new elf_obey_C( "!worker_2snips_ipdos.h"    , idMe ) ;
            new elf_obey_C( "!worker_2snips_otherSnips" , idMe ) ;
        }
        else if( !strcmp( postCmd , "3compile" ) )
        {
            int bOk  = ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw"    ) ;
                bOk &= ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report" ) ;
    
            int cGroupsPushed = 0 ;
            if( bOk )
            {
                FILETIME maxFtSnip = maxFileTimeF( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.*" ) ;
    
                //char* ppostLike[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\3func.34*" } ; //USE THIS GROUP FOR TESTING
                //char* ppostLike[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\3func.34*" } ;
                char* ppostLike[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\2glob.*" , "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\3func.*" } ;
                FILETIME ftMax ; ftMax.dwHighDateTime = ftMax.dwLowDateTime = 0 ;
                char postGroupLag[ 6 ] = "" ;
        
                for( int offi = 0 ; offi < sizeof ppostLike / sizeof ppostLike[ 0 ] ; offi ++ )
                {
                    WIN32_FIND_DATA info ;
                    HANDLE oshFind = FindFirstFile( ppostLike[ offi ] , &info ) ;
        
                    if( oshFind != INVALID_HANDLE_VALUE ) do
                    {                                                              //  123456789abcdef
                        if( strlen( info.cFileName ) > 0xf )                       // "3func.34004.topC.undoF"
                        {
                            char* postGroup = info.cFileName + 6 ;
                            postGroup[ 5 ] = 0 ;
        
                            int bNewGroup = !!strcmp( postGroupLag , postGroup ) ;
        
                            if( !bNewGroup && ( ftMax.dwHighDateTime < info.ftLastWriteTime.dwHighDateTime || ( ftMax.dwHighDateTime == info.ftLastWriteTime.dwHighDateTime && ftMax.dwLowDateTime < info.ftLastWriteTime.dwLowDateTime ) ) )
                            {
                                ftMax.dwHighDateTime = info.ftLastWriteTime.dwHighDateTime ;
                                ftMax.dwLowDateTime  = info.ftLastWriteTime.dwLowDateTime  ;
                            }
        
                            if( bNewGroup )
                            {
                                //if( !strcmp( postGroupLag , "33115" ) || !strcmp( postGroupLag , "33116" ) ) cGroupsPushed += pushGroupIfF( postGroupLag , ftMax , maxFtSnip ) ;
                                cGroupsPushed += pushGroupIfF( postGroupLag , ftMax , maxFtSnip ) ;
                                strcpy( postGroupLag , postGroup ) ;
                                ftMax.dwHighDateTime = info.ftLastWriteTime.dwHighDateTime ;
                                ftMax.dwLowDateTime  = info.ftLastWriteTime.dwLowDateTime  ;
                            }
                        }
                    }
                    while( FindNextFile( oshFind , &info ) ) ;
                    
                    FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
        
                }
        
                cGroupsPushed += pushGroupIfF( postGroupLag , ftMax , maxFtSnip ) ;
            }
    
            if( cGroupsPushed )
            {
                int cToDo = ether.cProcessorsF() * 1 ; //WAS 2, BUT TERMINATING PROCESSES ACCUMULATED
                if( cToDo > cGroupsPushed ) cToDo = cGroupsPushed ;

                //cToDo = 1 ; //COMMENT THIS OUT IN PRODUCTION; ENABLE THIS LINE TO THROTTLE CPU CONSUMPTION
    
                sayF( "!center [3compile]:  Building all object modules for the base dll." ) ;
                sayF( "!paragraph" ) ;
    
                sayF( cGroupsPushed , flSAY_START ) ;
                sayF( " object modules are stale.  " , flSAY_MIDDLE ) ;
                sayF( cToDo , flSAY_MIDDLE ) ;
                sayF( cToDo == 1 ? " elf will get to work right away!" : " elves will get to work right away!" , flSAY_MIDDLE ) ;
                sayF( "!paragraph" , flSAY_END ) ;

                int bPause = cGroupsPushed > 0x100 ;    // IF FEW PUSHED THEN I WILL PRESUME THAT THE PRECOMPILED HEADERS HAVE ALREADY BEEN BUILT
        
                while( cToDo -- ) new elf_obey_C( bPause ? "!worker_3compile_pause" : "!worker_3compile_nopause" , idMe ) ;
            }
        }
        else if( !strcmp( postCmd , "4link" ) )
        {
            if
            (
                isStaleF
                (
                    "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wm" ,
                    "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\2*.obj" ,
                    "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\3*.obj"
                )
            )
            {
                sayF( "[4link]:  Linking to build the base dll." ) ;
    
                char postMas[]      = { "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wm" } ;
                char postMasShort[] = {                                                                                      "ideafarm.81000001.ipdos-wm" } ;
    
                char postCmd[ 0x800 ] = { "wlink" } ;
                if( flagsAll & flELVES_DEBUGiNFO ) strcat( postCmd , " debug all" ) ;
                strcat( postCmd , " name " ) ;
                strcat( postCmd , postMas ) ;
                strcat( postCmd ,
        
                    " file \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\2*.obj"
                    " file \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\3*.obj"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\shlwapi.lib"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\wsock32.lib"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\winmm.lib"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\advapi32.lib"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\watcom\\lib386\\nt\\psapi.lib"
                    " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\microsoft\\User32.Lib"
                    /*" library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\lib\\libssl.lib"   */
                    /*" library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\lib\\libcrypto.lib"*/
                    " system nt_dll"
                    " op q"
                    " op map=\\tmp\\base.map"
                    " op mangle"
                    " op de '!ifcExeDllDescBegin !cName 10000018 !idCopy 00000000 !contact (c) Wo Of Ideafarm http://ideafarm.com !ifcExeDllDescEnd'"
                    " op st=0x00400000"
                    " segment type code shared"
                    " segment class 'CODE' shared"
                    " segment 'BEGTEXT' shared"
                    " segment '_TEXT' shared"
                    " segment 'CONST' shared"
                    " segment 'CONST2' shared"
                    " segment 'CONST32' shared"
                    " exp '_rTagF@0'"
                    " exp '_eipF@4'"
        
                ) ;
                strcat( postCmd , " >> \\tmp\\link.err" ) ;
    
                //sayF( "[debug]:  " ) ;
                //sayF( postCmd ) ;

                batWatcom.grabF() ;
    
                ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master" , postMasShort ) ;

                boxPutF( "\\tmp\\elves.debug.ttt" , postCmd , 0 ) ; //U:: TO FIND A BUG (20180908@1649)

                system( postCmd ) ; //MUST BE SERIALIZED SINCE wlink USES A TEMPORARY FILE THAT IT CREATES, AND WILL COLLIDE WITH ITSELF IN CREATING THIS FILE

                int bFail = 0 ;    
                {
                    FILE* pFile = fopen( postMas , "rb" ) ;
                    if( !pFile )
                    {
                        sayF( "  Could not open \"" , flSAY_START , strlen( postMas ) ) ;
                        sayF( postMas , flSAY_MIDDLE ) ;
                        sayF( "\" (4link)." , flSAY_END ) ;
                        bFail = 1 ;

                        {
                            sayF( postCmd ) ;

                            FILE* pOut = fopen( "\\tmp\\link.command.ttt" , "w" ) ;
                            fwrite( postCmd , strlen( postCmd ) , 1 , pOut ) ;

                            Sleep( 0xffffffff ) ;
                        }

                        unsigned* pBlammo = 0 ;
                        *pBlammo = 1 ;
                    }
                    fclose( pFile ) ; pFile = 0 ;
                }
    
                if( !bFail ) system( "wlib -p=32 -q -n -b \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wl +\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wm" ) ;
    
                batWatcom.ungrabF() ;

                hoverC hover( "d:\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\adam" ) ;
                system( "m.bat" ) ;
            }
        }
        else if( !strcmp( postCmd , "5adam" ) )
        {
            //CS:CODEsYNC: elves:5adam elves:6patch 51000620
            new elf_obey_C( "!worker_5adam_exe_plain" , idMe ) ;
        }
        else if( !strcmp( postCmd , "7package" ) )
        {
            const char postTo1[]   = { "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\ideafarm.msi" } ;
            const char postFrom1[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\installer\\ideafarm.wxs" } ;
            const char postFrom2[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\installer\\readme.txt" } ;
            const char postFrom3[] = { "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.service.ipdos" } ;
    
            if
            (
                isStaleF( postTo1 , postFrom1 ) ||
                isStaleF( postTo1 , postFrom2 ) ||
                isStaleF( postTo1 , postFrom3 )
            )
            {
                sayF( "[7package]:  Compiling and linking to build the installation file \"ideafarm.msi\"." ) ;
        
                //TO INSTALL, PASTE WO OF THESE ONTO A COMMAND PROMPT:
                // msiexec /l \tmp\install.log.txt /i ideafarm.msi
                //                                    ideafarm.msi
    
                char postCmd[ 0x400 ] = { "candle -nologo -out \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\ideafarm.wixobj " } ;
                strcat( postCmd , postFrom1 ) ;
                system( postCmd ) ;
    
                strcpy( postCmd , "light  -nologo -o " ) ;
                strcat( postCmd , postTo1 ) ;
                strcat( postCmd , " -pdbout \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\ideafarm.wixpdb \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\ideafarm.wixobj" ) ;
                system( postCmd ) ;
        
                ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp" , "ideafarm.wix*" ) ;


                Sleep( 1000 * 16 ) ;
            }
        }
        else if( !strcmp( postCmd , "8bundle" ) )
        {
            {
                const char postTo1[]   = { "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\z\\z_if.i.exist.then.this.home.is.completely.unzipped" } ;
                const char postFrom1[] = { "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\8text.81000001.z_if.i.exist.then.this.home.is.completely.unzipped" } ;
        
                if( isStaleF( postTo1 , postFrom1 ) )
                {
                    sayF( "[8bundle]:  Copying the Z file, which Service assumes to always be the lath file to be unzipped when the user is installing the bundle." ) ;

                    makeFoldersCopyThirdPartyDllsF() ;
    
                    char postCmd[ 0x400 ] = { "copy " } ;
                    strcat( postCmd , postFrom1 ) ;
                    strcat( postCmd , " " ) ;
                    strcat( postCmd , postTo1 ) ;
                    system( postCmd ) ;
                }
            }

            {
                const char postTo1[]   = { "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\settings.ideafarm.install.soil" } ;
                const char postFrom1[] = { "\\ideafarm.work\\txt\\settings.ideafarm.install.soil" } ;
        
                if( isStaleF( postTo1 , postFrom1 ) )
                {
                    sayF( "[8bundle]:  Copying the IdeaFarm (tm) Bundle installation settings file." ) ;

                    makeFoldersCopyThirdPartyDllsF() ;
    
                    char postCmd[ 0x400 ] = { "copy " } ;
                    strcat( postCmd , postFrom1 ) ;
                    strcat( postCmd , " " ) ;
                    strcat( postCmd , postTo1 ) ;
                    system( postCmd ) ;
                }
            }

            #if defined( RELEASE )

                //if( !( flagsAll & flELVES_DEBUGiNFO ) )
                {
                    makeFoldersCopyThirdPartyDllsF() ;
                    system( "if exist \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\ideafarm.bundle.zip del \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\ideafarm.bundle.zip" ) ;

                    //REMOVE bench.baseless IN PRODUCTION
                    //system( "zip -9r  \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\ideafarm.bundle.zip \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\bench.baseless \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\handle \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\zlib \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\blob \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1" ) ;
                    system
                    (
                        "zip -9r"
                        " \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\ideafarm.bundle.zip"
                        " \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\handle"
                        " \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\infozip"
                        " \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin"
                        " \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\zlib"
                      //" \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\blob"
                        " \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\7reso.71000002.favicon.ico"       //20200924@2037: THIS IS SO HTTP CAN SERVE favicon.ico
                        " \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1"
                    ) ;

                    //U::O: IN THE PRECEEDING LINE, THE ENTIRE ZLIB DIRECTORY IS NOT NEEDED: \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\zlib

                    //WRITE THE TEMPLATE CONFIGURATION FILE
                    boxPutF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release\\settings.ideafarm.install.soil" ,

                        "\r\n"
                        "{settings:\r\n"
                        "\r\n"
                        "    {ipdos:\r\n"
                        "\r\n"
                        "        {kv: primary.end.user.email                             \"required\" }\r\n"
                        "\r\n"
                        "        {kv: primary.end.user.name                              \"required\" }\r\n"
                        "\r\n"
                        "        {kv: primary.end.user.postal.country                    \"required\" }\r\n"
                        "\r\n"
                        "        {kv: primary.end.user.postal.code                       \"required\" }\r\n"
                        "\r\n"
                        "\r\n"
                        "        {kv: primary.technical.administrator.email              \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.technical.administrator.name               \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.technical.administrator.postal.country     \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.technical.administrator.postal.code        \"\" }\r\n"
                        "\r\n"
                        "\r\n"
                        "        {kv: primary.billing.administrator.email                \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.billing.administrator.name                 \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.billing.administrator.postal.country       \"\" }\r\n"
                        "\r\n"
                        "        {kv: primary.billing.administrator.postal.code          \"\" }\r\n"
                        "\r\n"
                        "\r\n"
                        "        {kv: arbitrary.uniquifier.1                             \"\" }\r\n"
                        "\r\n"
                        "    }\r\n"
                        "}\r\n"
                        "\r\n"
                        "{comment:\r\n"
                        "\r\n"
                        "    Edit the kv (key value) settings ABOVE to specify your contact information\r\n"
                        "    within each pair of double quotes.  Do not modify the arbitrary uniquifier.\r\n"
                        "\r\n"
                        "    The fields for the primary end user are required, but a role-based email\r\n"
                        "    such as store.1234@whatever.com is acceptable as long as email sent to it\r\n"
                        "    will be reliably received and handled by someone.  Specify the email address\r\n"
                        "    of the person who will really be the primary user of the computer, even if\r\n"
                        "    the primary user will change frequently (several times per year).  If the\r\n"
                        "    primary user will change more frequently, e.g. monthly or daily, use a\r\n"
                        "    role-based email address.\r\n"
                        "\r\n"
                        "    Each IdeaFarm (tm) Bundle configuration is associated with a primary\r\n"
                        "    end user and also a computer.  IdeaFarm (tm) Bundle configurations\r\n"
                        "    are not transferable either between users or computers.  However, the\r\n"
                        "    PayPal subscription used for payment is associated with the primary\r\n"
                        "    billing administrator.  Frequent changes in the primary end user do\r\n"
                        "    not affect billing and do not result in subscription termination or\r\n"
                        "    additional cost as long as the IdeaFarm (tm) Bundle configuration is\r\n"
                        "    being paid for.\r\n"
                        "\r\n"
                        "    The fields for the primary technical administrator and the primary billing\r\n"
                        "    administrator are optional and will default to the values specified\r\n"
                        "    for the primary end user.\r\n"
                        "\r\n"
                        "    The lines that follow exemplify how to complete the settings at\r\n"
                        "    the top of this file.  This comment block can optionally be\r\n"
                        "    removed from this file.\r\n"
                        "\r\n"
                        "    ------------------------------------------------------------------------\r\n"
                        "\r\n"
                        "    primary.end.user.email                             \"your.email@whatever.com\"\r\n"
                        "\r\n"
                        "    primary.end.user.name                              \"Your O'Name\"\r\n"
                        "\r\n"
                        "    primary.end.user.postal.country                    \"United States of America\"\r\n"
                        "\r\n"
                        "    primary.end.user.postal.code                       \"00000\"\r\n"
                        "\r\n"
                        "\r\n"
                        "    primary.technical.administrator.email              \"\"\r\n"
                        "\r\n"
                        "    primary.technical.administrator.name               \"\"\r\n"
                        "\r\n"
                        "    primary.technical.administrator.postal.country     \"\"\r\n"
                        "\r\n"
                        "    primary.technical.administrator.postal.code        \"\"\r\n"
                        "\r\n"
                        "\r\n"
                        "    primary.billing.administrator.email                \"\"\r\n"
                        "\r\n"
                        "    primary.billing.administrator.name                 \"\"\r\n"
                        "\r\n"
                        "    primary.billing.administrator.postal.country       \"\"\r\n"
                        "\r\n"
                        "    primary.billing.administrator.postal.code          \"\"\r\n"
                        "\r\n"
                        "\r\n"
                        "    arbitrary.uniquifier.1                             \"\"\r\n"
                        "}\r\n"

                    ) ;

                }

            #endif
        }
        else if( !strcmp( postCmd , "!worker_2snips_ipdos.h" ) )
        {
            char postDraft1[] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\ipdos.h.draft1" ;
            char postDraft2[] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\ipdos.h.draft2" ;
    
            if( isStaleF( postDraft2 , "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.*" ) )
            {
                //THIS LIST IS IN REVERSE ORDER OF WHAT WILL APPEAR IN ipdos.h
                char* ppostFrom[] =
                {
                    "1snip.15*.cacheC"                          ,
                    "1snip.15*.cachedS"                         ,
                    "1snip.15*.diskFindHandleS"                 ,
                    "1snip.15*.fileNameC"                       ,
                    "1snip.15*.patternC"                        ,
                    "1snip.15*.hoverC"                          ,
                    "1snip.15*.fileWindowsC"                    ,
                    "1snip.15*.fileWindowC"                     ,
                    "1snip.15*.hasherC"                         ,
                    "1snip.15*.cloudC"                          ,
                    "1snip.15*.metaS"                           ,
                    "1snip.15*.cloudInfoS"                      ,
                    "1snip.15*.keyValuePairsC"                  ,
                    "1snip.15*.bitTreeC"                        ,
                    "1snip.15*.bitNodeS"                        ,
                    "1snip.15*.rParam_walk_S"                   ,
                    "1snip.15*.rParam_new_S"                    ,
                    "1snip.15*.inOutFrameC"                     ,
                    "1snip.15*.tellInfoAppInOutFrameS"          ,
                    "1snip.15*.directionS"                      ,
                    "1snip.15*.iopS"                            ,
                    "1snip.15*.VARIABLEcLASSdEFS"               ,
                    "1snip.15*.drawJobS"                        ,
                    "1snip.15*.spaceS"                          ,
                    "1snip.15*.spaceC"                          ,
                    "1snip.15*.mPoint3S"                        ,
                    "1snip.15*.pelS"                            ,
                    "1snip.15*.pelC"                            ,
                    "1snip.15*.assViewEyeS"                     ,
                    "1snip.15*.assViewStqS"                     ,
                    "1snip.15*.assViewC"                        ,
                    "1snip.15*.paperC"                          ,
                    "1snip.15*.surfC"                           ,
                    "1snip.15*.paperS"                          ,
                    "1snip.15*.glyphTallyS"                     ,
                    "1snip.15*.gridS"                           ,
                    "1snip.15*.eyeC"                            ,
                    "1snip.15*.matrix3C"                        ,
                    "1snip.15*.vector3C"                        ,
                    "1snip.15*.displayC"                        ,
                    "1snip.15*.deviceC"                         ,
                    "1snip.15*.associateC"                      ,
                    "1snip.15*.displayArgS"                     ,
                    "1snip.15*.cPoint2S"                        ,
                    "1snip.15*.sadamsC"                         ,
                    "1snip.15*.slabS"                           ,
                    "1snip.15*.parm_tmAdamMainF_S"              ,
                    "1snip.15*.selectC"                         ,
                    "1snip.15*.recordC"                         ,
                    "1snip.15*.list_listingVSP_C"               ,
                    "1snip.15*.listing_listingVSP_C"            ,
                    "1snip.15*.datum_listingVSP_C"              ,
                    "1snip.15*.storeReplyPrivateF_argS"         ,
                    "1snip.15*.pbRefC"                          ,
                    "1snip.15*.bucketDetailC"                   ,
                    "1snip.15*.depositDetailS"                  ,
                    "1snip.15*.bucketTotalC"                    ,
                    "1snip.15*.stkIdSubC"                       ,
                    "1snip.15*.depositS"                        ,
                    "1snip.15*.accountS"                        ,
                    "1snip.15*.psttC"                           ,
                    "1snip.15*.pbC"                             ,
                    "1snip.15*.subaccountS"                     ,
                    "1snip.15*.sexGlobalEntryS"                 ,
                    "1snip.15*.tellInfoSysAdamFiredS"           ,
                    "1snip.15*.listWalkArgS"                    ,
                    "1snip.15*.list_countTstrz_C"               ,
                    "1snip.15*.list_blob_C"                     ,
                    "1snip.15*.list_countT_C"                   ,
                    "1snip.15*.listing_countTstrz_C"            ,
                    "1snip.15*.listing_blob_C"                  ,
                    "1snip.15*.listing_countT_C"                ,
                    "1snip.15*.datum_countTstrz_C"              ,
                    "1snip.15*.datum_blob_C"                    ,
                    "1snip.15*.datum_countT_C"                  ,
                    "1snip.15*.datumC"                          ,
                    "1snip.15*.ipMapHomeS"                      ,
                    "1snip.15*.ipMapPortS"                      ,
                    "1snip.15*.aptNameOldS"                     ,
                    "1snip.15*.rangeC"                          ,
                    "1snip.15*.xSwitchStackC"                   ,
                    "1snip.15*.x0SwitchStackC"                  ,
                    "1snip.15*.adamC"                           ,
                    "1snip.15*.marketC"                         ,
                    "1snip.15*.sexLocalEntryS"                  ,
                    "1snip.15*.barryC"                          ,
                    "1snip.15*.jotC"                            ,
                    "1snip.15*.branchPageC"                     ,
                    "1snip.15*.pageC"                           ,
                    "1snip.15*.pageReleaseC"                    ,
                    "1snip.15*.adamGlobal6S"                    ,
                    "1snip.15*.adamGlobal5S"                    ,
                    "1snip.15*.adamGlobal4S"                    ,
                    "1snip.15*.adamGlobal3S"                    ,
                    "1snip.15*.adamGlobal2S"                    ,
                    "1snip.15*.processGlobal7S"                 ,
                    "1snip.15*.processGlobal6S"                 ,
                    "1snip.15*.processGlobal5S"                 ,
                    "1snip.15*.processGlobal4S"                 ,
                    "1snip.15*.processGlobal3S"                 ,
                    "1snip.15*.doC"                             ,
                    "1snip.15*.booksC"                          ,
                    "1snip.15*.adamGlobal1S"                    ,
                    "1snip.15*.processGlobal2S"                 ,
                    "1snip.15*.processGlobal1S"                 ,
                    "1snip.15*.fireGroupS"                      ,
                    "1snip.15*.bookC"                           ,
                    "1snip.15*.book0C"                          ,
                    "1snip.15*.bookHeadS"                       ,
                    "1snip.15*.neverUsedC"                      ,
                    "1snip.15*.ag1_neverUsedC_C"                ,
                    "1snip.15*.sourceC"                         ,
                    "1snip.15*.dictionaryFileTitleS"            ,
                    "1snip.15*.httpReplySrefC"                  ,
                    "1snip.15*.httpReplyS"                      ,
                    "1snip.15*.plateC"                          ,
                    "1snip.15*.httpServerC_arg2S"               ,
                    "1snip.15*.httpServerC_arg1S"               ,
                    "1snip.15*.httpServerC"                     ,
                    "1snip.15*.sessionsC"                       ,
                    "1snip.15*.sessionC"                        ,
                    "1snip.15*.refC"                            ,
                    "1snip.15*.refCounterC"                     ,
                    "1snip.15*.threadC"                         ,
                    "1snip.15*.mColRowMinMaxS"                  ,
                    "1snip.15*.mapPaperToEyeOldS"               ,
                    "1snip.15*.mapPaperToBackS"                 ,
                    "1snip.15*.cmdFlashS"                       ,
                    "1snip.15*.bNoteS"                          ,
                    "1snip.15*.branchS"                         ,
                    "1snip.15*.putFileS"                        ,
                    "1snip.15*.blobC"                           ,
                    "1snip.15*.tcButtonQuitC"                   ,
                    "1snip.15*.tcSliderC"                       ,
                    "1snip.15*.tcPromptC"                       ,
                    "1snip.15*.tcButtonC"                       ,
                    "1snip.15*.vTextC"                          ,
                    "1snip.15*.sCountFromPostC"                 ,
                    "1snip.15*.parameterC"                      ,
                    "1snip.15*.relayC"                          ,
                    "1snip.15*.ag1_relayC_C"                    ,
                    "1snip.15*.soilSpaceC"                      ,
                    "1snip.15*.ag1_soilSpaceC_C"                ,
                    "1snip.15*.argS"                            ,
                    "1snip.15*.threadCheckC"                    ,
                    "1snip.15*.branchesOldS"                    ,
                    "1snip.15*.treeOldC"                        ,
                    "1snip.15*.branchDataOldS"                  ,
                    "1snip.15*.branchHeaderOldS"                ,
                    "1snip.15*.cyrcleOldHeaderS"                ,
                    "1snip.15*.queryTimeRemainingS"             ,
                    "1snip.15*.serverInfo2S"                    ,
                    "1snip.15*.serverInfo1S"                    ,
                    "1snip.15*.sleepC"                          ,
                    "1snip.15*.monQueryReplyS"                  ,
                    "1snip.15*.monitorReplyS"                   ,
                    "1snip.15*.dnsResourceMiddleS"              ,
                    "1snip.15*.dnsMsgHeaderS"                   ,
                    "1snip.15*.masterC"                         ,
                    "1snip.15*.ag1_masterC_C"                   ,
                    "1snip.15*.imageExeDllC"                    ,
                    "1snip.15*.recDirC"                         ,
                    "1snip.15*.windowOldC"                      ,
                    "1snip.15*.ag1_windowOldC_C"                ,
                    "1snip.15*.paperOldC"                       ,
                    "1snip.15*.ag1_paperOldC_C"                 ,
                    "1snip.15*.eyeOldC"                         ,
                    "1snip.15*.eyeStateOldS"                    ,
                    "1snip.15*.backOldC"                        ,
                    "1snip.15*.ag1_backOldC_C"                  ,
                    "1snip.15*.rowPaperBackU"                   ,
                    "1snip.15*.rowPaperBackS"                   ,
                    "1snip.15*.papersOldC"                      ,
                    "1snip.15*.frPaperOldC"                     ,
                    "1snip.15*.winPulpOldC"                     ,
                    "1snip.15*.eyePulpOldC"                     ,
                    "1snip.15*.pulpOldC"                        ,
                    "1snip.15*.ag1_pulpOldC_C"                  ,
                    "1snip.15*.sadamC"                          ,
                    "1snip.15*.strikeS"                         ,
                    "1snip.15*.featuresS"                       ,
                    "1snip.15*.mainRefsS"                       ,
                    "1snip.15*.riverC"                          ,
                    "1snip.15*.pricerC"                         ,
                    "1snip.15*.carC"                            ,
                    "1snip.15*.busC"                            ,
                    "1snip.15*.tableC"                          ,
                    "1snip.15*.ag1_tableC_C"                    ,
                    "1snip.15*.vectorOldC"                      ,
                    "1snip.15*.sqMatrixOldC"                    ,
                    "1snip.15*.infoFileS"                       ,
                    "1snip.15*.infoDiskS"                       ,
                    "1snip.15*.infoDisk1S"                      ,
                    "1snip.15*.infoDisk1bS"                     ,
                    "1snip.15*.infoDisk1aS"                     ,
                    "1snip.15*.infoBoxGetPutS"                  ,
                    "1snip.15*.thugC"                           ,
                    "1snip.15*.ag1_thugC_C"                     ,
                    "1snip.15*.hoodC"                           ,
                    "1snip.15*.textIdFileC"                     ,
                    "1snip.15*.tellC"                           ,
                    "1snip.15*.tellS"                           ,
                    "1snip.15*.tellInfoSysLifiS"                ,
                    "1snip.15*.tellInfoSysNapkinS"              ,
                    "1snip.15*.tellInfoSysExceptionS"           ,
                    "1snip.15*.tellInfoSys_grabC_S"             ,
                    "1snip.15*.tellInfoSysTinS"                 ,
                    "1snip.15*.tellInfoSysSexS"                 ,
                    "1snip.15*.tellInfoSysProcessGlobal1S"      ,
                    "1snip.15*.netC"                            ,
                    "1snip.15*.socketC"                         ,
                    "1snip.15*.ag1_socketC_C"                   ,
                    "1snip.15*.ag3_socketC_C"                   ,
                    "1snip.15*.sockOdometerS"                   ,
                    "1snip.15*.dadC"                            ,
                    "1snip.15*.momC"                            ,
                    "1snip.15*.spouseC"                         ,
                    "1snip.15*.textC"                           ,
                    "1snip.15*.htmlS"                           ,
                    "1snip.15*.etherC"                          ,
                    "1snip.15*.ag1_etherC_C"                    ,
                    "1snip.15*.strokeS"                         ,
                    "1snip.15*.ag1_strokeS_C"                   ,
                    "1snip.15*.xrayC"                           ,
                    "1snip.15*.fieldEditParamOutC"              ,
                    "1snip.15*.fieldEditParamInC"               ,
                    "1snip.15*.puseC"                           ,
                    "1snip.15*.poolC"                           ,
                    "1snip.15*.listC"                           ,
                    "1snip.15*.datumS"                          ,
                    "1snip.15*.VERYsMARTpOINTERcLASSdEF"        ,
                    "1snip.15*.BOOLcLASSES"                     ,
                    "1snip.15*.BOOLcLASSESpTR"                  ,
                    "1snip.15*.boolC"                           ,
                    "1snip.15*.listingC"                        ,
                    "1snip.15*.slotsC"                          ,
                    "1snip.15*.sexC"                            ,
                    "1snip.15*.sexHeadS"                        ,
                    "1snip.15*.vBodyS"                          ,
                    "1snip.15*.bitmapOldC"                      ,
                    "1snip.15*.staqC"                           ,
                    "1snip.15*.restartC"                        ,
                    "1snip.15*.thirdC"                          ,
                    "1snip.15*.diskWalkCopyInfoS"               ,
                    "1snip.15*.diskWalkSearchInfoS"             ,
                    "1snip.15*.ag1_thirdC_C"                    ,
                    "1snip.15*.signC"                           ,
                    "1snip.15*.batonC"                          ,
                    "1snip.15*.grabAnnotatedS"                  ,
                    "1snip.15*.tlsStackFrameLocationS"          ,
                    "1snip.15*.tlsStackFrameNoTlsS"             ,
                    "1snip.15*.tlsStackFrameS"                  ,
                    "1snip.15*.tallyC"                          ,
                    "1snip.15*.staticC"                         ,
                    "1snip.15*.tinS"                            ,
                    "1snip.15*.bookMarkS"                       ,
                    "1snip.15*.topC"                            ,
                    "1snip.15*.cleanC"                          ,
                    "1snip.15*.tinArgS"                         ,
                    "1snip.15*.monitorS"                        ,
                    "1snip.15*.whereS"                          ,
                    "1snip.15*.grabNotesS"                      ,
                    "1snip.15*.ag1_grabNotesS_C"                ,
                    "1snip.15*.bufferC"                         ,
                    "1snip.15*.homeS"                           ,
                    "1snip.15*.poolRegistrationS"               ,
                    "1snip.15*.tallyHoC"                        ,
                    "1snip.15*.aptC"                            ,
                    "1snip.15*.rCacheS"                         ,
                    "1snip.15*.strokingFrameS"                  ,
                    //grabC ag1_grabC_C grabStatS WAS HERE"     ,
                    "1snip.15*.napkinsC"                        ,
                    "1snip.15*.napkinC"                         ,
                    "1snip.15*.napkinHeaderS"                   ,
                    "1snip.15*.fileC"                           ,
                    "1snip.15*.plateS"                          ,
                    "1snip.15*.taskS"                           ,
                    "1snip.15*.peekS"                           ,
                    "1snip.15*.osFileNameC"                     ,
                    "1snip.15*.mainS"                           ,
                    "1snip.15*.ifFileNameC"                     ,
                    "1snip.15*.batonBoxC"                       ,
                    "1snip.15*.sCountC"                         ,
                    "1snip.15*.maxC"                            ,
                    "1snip.15*.switchStackC"                    ,
                    "1snip.15*.boxC"                            ,
                    "1snip.15*.mapC"                            ,
                    "1snip.15*.etherInitC"                      ,
                    "1snip.15*.fireAllS"                        ,
                    "1snip.15*.sharedMemInfoS"                  ,
                    "1snip.15*.thirdInitC"                      ,
                    "1snip.15*.killSocketS"                     ,
                    "1snip.15*.lexC"                            ,
                    "1snip.15*.ag1_lexC_C"                      ,
                    "1snip.15*.switchC"                         ,
                    "1snip.15*.ag1_switchC_C"                   ,
                    "1snip.15*.vmRegionS"                       ,
                    "1snip.15*.arrayC"                          ,
                    "1snip.15*.soulC"                           ,
                    "1snip.15*.ag1_soulC_C"                     ,
                    "1snip.15*.earDropC"                        ,
                    //"1snip.15*.newsC"                         ,
                    "1snip.15*.newsKnowS"                       ,
                    "1snip.15*.nicNamesC"                       ,
                    "1snip.15*.stackC"                          ,
                    "1snip.15*.ag1_stackC_C"                    ,
                    "1snip.15*.pczC"                            ,
                    "1snip.1d*"                                 ,
                    "1snip.1c*"                                 ,
                    "1snip.1b*"                                 ,
                    "1snip.16*"                                 ,
                    "1snip.15*.lowThreadS"                      ,
                    "1snip.15*.idPortTimeC"                     ,
                    "1snip.15*.idPortC"                         ,
                    "1snip.15*.nicNameC"                        ,
                    "1snip.15*.psttOldC"                        ,
                    "1snip.15*.postOldC"                        ,
                    "1snip.15*.grabUniverseC"                   ,
                    "1snip.15*.backGrabUniverseC"               ,
                    "1snip.15*.fileOpenS"                       ,
                    "1snip.15*.ranUniC"                         ,
                    "1snip.15*.strokeModeS"                     ,
                    "1snip.15*.zapC"                            ,
                    "1snip.15*.bitsC"                           ,
                    "1snip.15*.ag1_bitsC_C"                     ,
                    "1snip.15*.tinTallyS"                       ,
                    "1snip.15*.timeS"                           ,
                    //"1snip.15*.monitorOldS"                   ,
                    "1snip.15*.processGlobalEndC"               ,
                    "1snip.15*.processGlobalBeginC"             ,
                    "1snip.15*.grabWantS"                       ,
                    "1snip.15*.handleC"                         ,
                    "1snip.15*.handle1111C"                     ,
                    "1snip.15*.handle0111C"                     ,
                    "1snip.15*.handle1011C"                     ,
                    "1snip.15*.handle0011C"                     ,
                    "1snip.15*.handle1110C"                     ,
                    "1snip.15*.handle0110C"                     ,
                    "1snip.15*.handle1010C"                     ,
                    "1snip.15*.handle0010C"                     ,
                    "1snip.15*.handle1100C"                     ,
                    "1snip.15*.handle0100C"                     ,
                    "1snip.15*.handle1000C"                     ,
                    "1snip.15*.linkedC"                         ,
                    "1snip.15*.grabotC"                         ,
                    "1snip.15*.heapC"                           ,
                    "1snip.15*.grabitC"                         ,
                    "1snip.15*.countTC"                         ,
                    "1snip.15*.dropNoteS"                       ,
                    "1snip.15*.grabC"                           ,
                    "1snip.15*.baseGrabC"                       ,
                    "1snip.15*.ag1_grabC_C"                     ,
                    "1snip.15*.grabStatS"                       ,
                    "1snip.15*.cryC"                            ,
                    "1snip.15*.upDnC"                           ,
                    "1snip.15*.gloSecurityGC"                   ,
                    "1snip.15*.testWaterC"                      ,
                    "1snip.15*.timeZoneSpecS"                   ,
                    "1snip.15*.rootWordC"                       ,
                    "1snip.15*.ag1_rootWordC_C"                 ,
                    "1snip.15*.baseSoilC"                       ,
                    "1snip.15*.osTextC"                         ,
                    "1snip.15*.osTextBaseS"                     ,
                    "1snip.15*.footC"                           ,
                    "1snip.15*.scoopC"                          ,
                    "1snip.15*.poopC"                           ,
                    "1snip.15*.mapCTC"                          ,
                    "1snip.15*.mapCTS"                          ,
                    "1snip.15*._1S"                             ,
                    "1snip.15*.link189S"                        ,
                    "1snip.15*.thisLifiS"                       ,
                    "1snip.15*.putFileJobS"                     ,
                    "1snip.15*.pauseC"                          ,
                    "1snip.17*.*"                               ,
                    "1snip.14*.*"                               ,
                    //"1snip.00220250.sadamCBFT"                ,
                    "1snip.15*.processGlobal0S"                 ,
                    "1snip.15*.count9S"                         ,
                    "1snip.15*.count8S"                         ,
                    "1snip.15*.count7S"                         ,
                    "1snip.15*.count6S"                         ,
                    "1snip.15*.count5S"                         ,
                    "1snip.15*.count4S"                         ,
                    "1snip.15*.count3S"                         ,
                    "1snip.15*.count2S"                         ,
                    "1snip.15*.baseC"                           ,
                    "1snip.13*.*"                               ,
                    "1snip.12*.*"                               ,
                    "1snip.15*.thirdParties"                    ,
                    "1snip.11*.*"                               ,
                    "1snip.1a000001.monolith"                   ,
                } ;

                {
                    int bOk = ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp" , "ipdos.h.draft1" ) ;

                    static char postPath[] = "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\" ;
            
                    int bWoth = 1 ;
                    if( bOk ) for( int offf = 0 ; offf < sizeof ppostFrom / sizeof ppostFrom[ 0 ] ; offf ++ )
                    {
                        char postFrom[ 0x200 ] = "abcdefgh" ;

                        if( bWoth )
                        {
                            bWoth = 0 ;
                            sayF( "  [2snips]:  Making ipdos.h.draft1 (\"1\").  1" , flSAY_DADiSgROUP ) ;
                        }
                        else sayF( "1" , flSAY_DADiSgROUP ) ;

                        strcpy( postFrom , postPath ) ;
                        strcpy( postFrom + sizeof postPath - 1 , ppostFrom[ offf ] ) ;

                        //sayF( "\r\n" , flSAY_START ) ;
                        //sayF( postFrom , flSAY_MIDDLE ) ;
                        //sayF( "\r\n" , flSAY_END ) ;

                        filepileF( postDraft1 , postFrom ) ;
                    }
                }
    
                int bOk = ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp" , "ipdos.h.draft2" ) ;
    
                if( bOk )
                {
                    char postCmd[ 0x300 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < " ;
                    strcat( postCmd , postDraft1 ) ;
                    strcat( postCmd , " > " ) ;
                    strcat( postCmd , postDraft2 ) ;
    
                    system( postCmd ) ;
                }
            }
        }
        else if( !strcmp( postCmd , "!worker_2snips_otherSnips" ) )
        {
            char* ppostFrom[] =
            {
                "1snip.11200022.NEWdELcLASSpROTOS"              ,
                "1snip.11200081.CSnODEnAMEmAX"                  ,
                "1snip.12000001.count01T"                       ,
                "1snip.12000002.sCount01T"                      ,
                "1snip.12000003.count02T"                       ,
                "1snip.12000004.measure02T"                     ,
                "1snip.12000005.sCount02T"                      ,
                "1snip.12000006.flags02T"                       ,
                "1snip.12000007.bool02T"                        ,
                "1snip.12000008.measure04T"                     ,
                "1snip.13000001.voidT"                          ,
                "1snip.13000002.byteT"                          ,
                "1snip.13000003.sByteT"                         ,
                "1snip.13000004.osTextT"                        ,
                "1snip.13000005.unTextT"                        ,
                "1snip.13000006.countT"                         ,
                "1snip.13000007.sCountT"                        ,
                "1snip.13000008.boolT"                          ,
                "1snip.13000009.flagsT"                         ,
                "1snip.1300000a.measureT"                       ,
                "1snip.15000005.strokeS"                        ,
                "1snip.15000019.count2S"                        ,
                "1snip.1500001a.count3S"                        ,
                "1snip.1500001b.count4S"                        ,
                "1snip.1500001c.count5S"                        ,
                "1snip.1500001d.count6S"                        ,
                "1snip.1500001e.count7S"                        ,
                "1snip.1500001f.count8S"                        ,
                "1snip.1500003a.count9S"                        ,
                "1snip.1700001e.threadLocalStorageF"            ,
                "1snip.1700001f.mainThreadWorkF"                ,
                "1snip.19000001.getFileInfo"                    ,
                "1snip.19000002.gate4_gate5"                    ,
                "1snip.19000003.argsForOrphanProcessLaunch"     ,
                "1snip.19000004.strReplaceF_strReplaceAnyF"     ,
                "1snip.19000005.genFileIds"                     ,
                "1snip.19000006.genFileTitles"                  ,
                "1snip.19000008.idcWINcASES"                    ,
                "1snip.19000009.RUNgATE"                        ,
                "1snip.1900000a.genDropNoteIdType"              ,
                "1snip.1900000b.genValidFlags"                  ,
                "1snip.1900000c.genTimeBaseBuilt"               ,
                "1snip.1900000d.gen_CsOURCEfILES"               ,
                "1snip.1900000e.stackC.loadSoulC"               ,
                "1snip.19000010.strConcatenateF_woSnip"         ,
                "1snip.1a000001.monolith"                       ,
                //"1snip.005000a0.lines.4boot.510003c5.countLines" ,
            } ;
    
            int bWoth = 1 ;
            for( int offf = 0 ; offf < sizeof ppostFrom / sizeof ppostFrom[ 0 ] ; offf ++ )
            {
                char postOut[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\snip\\" ;
                strcat( postOut , ppostFrom[ offf ] ) ;
                strcat( postOut , ".h" ) ;
    
                char postDef[ 0x100 ] = "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\" ;
                strcat( postDef , ppostFrom[ offf ] ) ;
    
                if( isStaleF( postOut , postDef ) )
                {
                    if( bWoth )
                    {
                        bWoth = 0 ;
                        sayF( "  [2snips]:  Making other snips (\"2\").  2" , flSAY_DADiSgROUP ) ;
                    }
                    else sayF( "2" , flSAY_DADiSgROUP ) ;
    
                    char postCmd[ 0x300 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < " ;
                    strcat( postCmd , postDef ) ;
                    strcat( postCmd , " > " ) ;
                    strcat( postCmd , postOut ) ;
    
                    system( postCmd ) ;
                }
            }
        }
        else if( !strcmp( postCmd , "!worker_3compile_pause" ) || !strcmp( postCmd , "!worker_3compile_nopause" ) )
        {
            while( !etherC::smellF() && lifoPostC::countIF( pRootPostGroup ) )
            {
                char* postGroup = 0 ;
                {
                    //sayF( "+" ) ;
                    batLifoPostGroup.grabF() ;
                    //sayF( "!" ) ;
        
                    if( pRootPostGroup )
                    {
                        lifoPostC* pPeek = (lifoPostC*)pRootPostGroup ;
                        int costa = 1 + strlen( *pPeek ) ;
                        postGroup = newF( costa ) ;
                        strcpy( postGroup , *pPeek ) ;
                        delete pPeek ;
                    }
        
                    //sayF( "-" ) ;
                    batLifoPostGroup.ungrabF() ;
                }
        
                /*if( !strcmp( postGroup , "31000" ) )*/ translateF( postGroup , !strcmp( postCmd , "!worker_3compile_pause" ) ) ;
                delete postGroup ;
            }
        }
        else if( postCmd == strstr( postCmd , "user " ) )
        {
            const char* postw = postCmd + 5 ;

            ether.userF( postw ) ;

            elf_eat_C::delAdamListIF( flADAMlIST_null    ) ;
            elf_eat_C::delAdamListIF( flADAMlIST_DEFINED ) ;

            sayF( "" , flSAY_START ) ; //ADDED TO FIX THE BUG IN THE RELEASED CODE

                 if( !strcmp( postw , "ideafarm_wo"       ) )   sayF( "" , flSAY_MIDDLE ) ;
            else if( !strcmp( postw , "turnbull_nicholas" ) )   sayF( "" , flSAY_MIDDLE ) ;
            else if( !strcmp( postw , "anonymous"             ) )   sayF( "" , flSAY_MIDDLE ) ;
            else                                                sayF( "Please ask the high priest responsible for IdeaFarm (tm) Elves to add a user name for you to the source code." , flSAY_MIDDLE ) ;

            sayF( "" , flSAY_END ) ;

            boxPutF( postFILEuSER , postw , idMe ) ;
        }
    }
}

int elf_obey_C::pushGroupIfF( const char* postGroupP , FILETIME ftSourceP , FILETIME ftSnipP )
{
    int bStale = 0 ;
    if( postGroupP[ 0 ] )
    {
        char postObj[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\" ;
        strcat( postObj , postGroupP ) ;
        strcat( postObj , ".obj" ) ;

        WIN32_FIND_DATA info ;
        HANDLE oshFind = FindFirstFile( postObj , &info ) ;

        bStale = 1 ;
        if( oshFind != INVALID_HANDLE_VALUE )
        {
            bStale =
                ftSourceP.dwHighDateTime > info.ftLastWriteTime.dwHighDateTime || ( ftSourceP.dwHighDateTime == info.ftLastWriteTime.dwHighDateTime && ftSourceP.dwLowDateTime > info.ftLastWriteTime.dwLowDateTime )
                ||
                ftSnipP.dwHighDateTime > info.ftLastWriteTime.dwHighDateTime || ( ftSnipP.dwHighDateTime == info.ftLastWriteTime.dwHighDateTime && ftSnipP.dwLowDateTime > info.ftLastWriteTime.dwLowDateTime )
            ;

            FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
        }

        if( bStale )
        {
            batLifoPostGroup.grabF() ;
            new lifoPostC( pRootPostGroup , postGroupP ) ;
            batLifoPostGroup.ungrabF() ;
        }
    }

    return bStale ;
}

void elf_obey_C::filepileF( const char* postToP , const char* postLikeP )
{
    //sayF( "\r\n" ) ;
    //sayF( postToP ) ;
    //sayF( "\r\n" ) ;
    //sayF( postLikeP ) ;
    //sayF( "\r\n" ) ;

    char postCmd[ 0x300 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos " ;
    strcat( postCmd , postToP ) ;
    strcat( postCmd , " -q " ) ;
    strcat( postCmd , postLikeP ) ;

    //system( postCmd ) ;
    hireF( idMe , postCmd ) ;
}

void elf_obey_C::assembleF( const char* postGroupP )
{
    if( strlen( postGroupP ) == 5 )
    {
                                          // 123456789abcdef
        char postLike[ 0xd ] = "3func." ; // 3func.34*
        strcat( postLike , postGroupP ) ;

        char postModule[ 0x10 ] ;
        strcpy( postModule , postLike + 6 ) ;
        strcat( postLike , "*" ) ;

        char postRaw[ 0x10 ] ;
        strcpy( postRaw , postGroupP ) ;
        strcat( postRaw , ".raw" ) ;

        int bOk = ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , postRaw ) ;

        {    
            if( bOk )
            {
                { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -a \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.18000002.END" ) ; system( postCmd ) ; }
                { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -a \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\"                   ) ; strcat( postCmd , postLike )   ; system( postCmd ) ; }
                { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -a \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.18000001.586" ) ;                                  system( postCmd ) ; }
            }
        }

        if( bOk )
        {
            char postSource[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source\\" ; strcat( postSource , postModule ) ; strcat( postSource , ".asm" ) ;

            { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\"   ; strcat( postCmd , postRaw ) ; strcat( postCmd , " > "              ) ; strcat( postCmd , postSource ) ; system( postCmd ) ; }

            { char postCmd[ 0x200 ] = "wasm -5p -d1 -e -q -we -fo=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\ -fr=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report\\ " ; strcat( postCmd , postSource ) ; system( postCmd ) ; }
            inc02AM( cCompiled ) ;

            //system( "rw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report\\*" ) ;
        }
    }
}

void elf_obey_C::compileF( const char* postGroupP , int bPauseP )
{
    if( strlen( postGroupP ) == 5 )
    {
        int bPrecompile = 0 ;
        if( !setIfZeroAM( bPrecompiling , 1 ) ) bPrecompile = 1 ;
        else if( bPauseP )
        {
            int cDo = 0x40 ;
            while( cDo -- && ( !bHeaderMadeHideThird || !bHeaderMadeShowThird ) ) { Sleep( 0x100 ) ; }
        }

        // 123456789abcdef
        // 3func.34*

        int bClass = postGroupP[ 0 ] == '3' && postGroupP[ 1 ] == '6'  ;

        int bTryCatch = 0 ; //C++ EXCEPTION HANDLING IS NOT USED IN IPDOS BECAUSE C++ EXCEPTION HANDLING SUCKS ; ITS FUNCTIONALITY IS SIMILAR TO THE IMPOTENCE / BACKOFF MODEL USED BY IPDOS

        int bCNotCpp = !strcmp( postGroupP , "30000" ) ;

        int bThird =

            !strcmp( postGroupP , "21000" ) ||      // processGlobal1S CONTAINS SOME BASE OS SPECIFIC DATA MEMBERS
            !strcmp( postGroupP , "30000" ) ||      // C LANGUAGE FUNCTIONS (SO CAN USE _try _except _finally BLOCKS FOR FRAME BASED EXCEPTION HANDLING
            !strcmp( postGroupP , "32000" ) ||      // GLOBAL THIRD PARTY CALLBACK FUNCTIONS AND GLOBAL FUNCTIONS THAT MAKE THIRD PARTY CALLS
            !strcmp( postGroupP , "33000" ) ||      // tmWatch calls win api U::MIGRATE THIS CALL INTO THIRD
            !strcmp( postGroupP , "34005" ) ||      // OPERATOR new AND OPERATOR delete MUST KNOW CORRECT SIZE OF CLASSES THAT INCLUDE THIRD PARTY SPECIFIC MEMBERS: deviceC pelS
            !strcmp( postGroupP , "34008" ) ||      // OPERATOR new AND OPERATOR delete MUST KNOW CORRECT SIZE OF CLASSES THAT INCLUDE THIRD PARTY SPECIFIC MEMBERS: deviceC pelS
            !strcmp( postGroupP , "35001" ) ||      // thirdC
            !strcmp( postGroupP , "36001" ) ||      // thirdC

            !strcmp( postGroupP , "36005" ) ||      // socketC U::20141102@2154: ENABLED ONLY FOR DEBUGGING ; DISABLE IN PRODUCTION

            !strcmp( postGroupP , "3603a" ) ||      // arrayC
            !strcmp( postGroupP , "36041" ) ||      // processGlobalBeginC  (Setting process affinity mask)
            !strcmp( postGroupP , "3607a" ) ||      // parameterC (calls CreateDirectory to create tmp directory so that i can get exception reports and LOGrAW)
            !strcmp( postGroupP , "360ae" ) ||      // processGlobal1S: CONTAINS THIRD PARTY SPECIFIC MEMBERS
            !strcmp( postGroupP , "360cc" ) ||      // processGlobal3S




            !strcmp( postGroupP , "36085" ) ||      // scoopC: U:: TO FIND A BUG (20160623@1614: REMOVE THIS IN PRODUCTION AFTER FINDING BUG)
            !strcmp( postGroupP , "360fb" ) ||      // booksC: U:: TO FIND A BUG (20160623@1614: REMOVE THIS IN PRODUCTION AFTER FINDING BUG)




            !strcmp( postGroupP , "36113" ) ||      // featuresS
            !strcmp( postGroupP , "36114" ) ||      // strikeS
            !strcmp( postGroupP , "36117" ) ||      // featuresSfCopyableS
            !strcmp( postGroupP , "36118" ) ||      // displayC
            !strcmp( postGroupP , "3611d" ) ||      // paperC
            !strcmp( postGroupP , "3611e" ) ||      // pelC
            !strcmp( postGroupP , "3611f" ) ||      // pelS
            !strcmp( postGroupP , "36122" ) ||      // deviceC
            !strcmp( postGroupP , "36123" ) ||      // surfC
            !strcmp( postGroupP , "3612c" ) ||      // inOutFrameC (for speed, calling QueryThreadCycleTime)
            !strcmp( postGroupP , "36135" ) ||      // hashCalculatorMd5C
            !strcmp( postGroupP , "3613d" ) ||      // fileWindowC  20150415@1243: U::MIGRATE OS CALLS INTO thirdC

            // THE FOLLOWING CODE MUST BE MIGRATED AND/OR RETURNED TO SERVICE.  IT IS CURRENTLY INACTIVE BECAUSE THE OLD SET OF STROKE CASTE CONSTANTS WERE RETIRED AND I AM RECREATING NEW CASTE CONSTANTS
            // AS OF THIS WRITING, THE RENDERING SUBSYSTEM HAS BEEN PARTIALLY REWRITTEN IN ASSEMBLY LANGUAGE, AND THIS REWRITE SUPPORTS LINE DRAWING BUT DOES NOT YET SUPPORT ALPHABET1 OR SADAMS OR ANY OF THE OTHER OLD CASTE CONSTANTS
            // THE DESIGN OBJECTIVE IS TO REWRITE THE RENDERING SUBSYSTEM FOR SPEED AND THEN INCREMENTALLY REWRITE THE CASTE CONSTANTS
            // THE MOST IMPORTANT CASTE CONSTANTS TO REWRITE AND ADD TO THE LIST OF NEW CASTE CONSTANTS ARE: ALPHABET1, SADAM

            !strcmp( postGroupP , "3509a" ) ||      // backOldC
            !strcmp( postGroupP , "3602e" ) ||      // windowOldC
            !strcmp( postGroupP , "36097" ) ||      // eyeOldC
            !strcmp( postGroupP , "3609a" ) ||      // backOldC
            !strcmp( postGroupP , "3609b" )         // winPulpOldC

        ;

        //char postLike2[ 0xd ] = "2glob." ;
        //char postLike3[ 0xd ] = "3func." ;
        char postLike[ 0xd ] ;
        strcpy( postLike , !strcmp( postGroupP , "21000" ) ? "2glob." : "3func." ) ;
        strcat( postLike , postGroupP ) ;

        char postModule[ 0x10 ] ;
        strcpy( postModule , postLike + 6 ) ;
        strcat( postLike , "*" ) ;                  // e.g.: "3func.36135*"

        char postRaw[ 0x10 ] ;
        strcpy( postRaw , postGroupP ) ;
        strcat( postRaw , ".raw" ) ;                // e.g.: "36135.raw"

        int bOk = ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , postRaw ) ;

        if( bOk )
        {
                                                { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd ,          " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\"                                                                                                                                                                                      ) ; strcat( postCmd , postLike   ) ; system( postCmd ) ; }

            if( bThird )                        { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.01000002.cnotcppheader" )                                  ; system( postCmd ) ; }

            if( !bCNotCpp )
            {
                                                { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , bThird ? " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000003.includeGenMake.base.show.third" : " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000002.includeGenMake.base.hide.third" )                                  ; system( postCmd ) ; }
                if( bThird )                    { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd ,          " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000006.ifcENABLEtHIRDpARTIES"                                                                                                                                                  )                                  ; system( postCmd ) ; }
            }

          //if( !strcmp( postLike , "21000" ) ) { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd ,          " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000007.ifcENABLEtHIRDpARTIESmULTIPLEmONITORfAKE"                                                                                                                               )                                  ; system( postCmd ) ; }
        }

        if( bOk )
        {
            char postSource[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source\\" ; strcat( postSource , postModule ) ; strcat( postSource , ".cpp" ) ;

            { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " > "                                  ) ; strcat( postCmd , postSource ) ; system( postCmd ) ; }

            //DEBUG INFO IS ALWAYS INSERTED INTO OBJECT MODULES
            {
                char postCmd[ 0x400 ] = "" ;
                                                       strcat( postCmd , bCNotCpp ? "wcc386" : "wpp386" ) ;
                                                       strcat( postCmd , !bCNotCpp ? " " IPDOScOMPILEoPTIONS : " " IPDOScOMPILEoPTIONScnOTcPP ) ;
                if( bTryCatch )                        strcat( postCmd , " -xs" ) ; // 20150321@1747: CAN'T DO THIS GLOBALLY BECAUSE BREAKS pTinAM ; AT THIS TIME, WANT IT ONLY FOR CALLING openSSL
                /*if( flagsAll & flELVES_DEBUGiNFO )*/ strcat( postCmd , " -d2" ) ;
                                                       strcat( postCmd , bClass ? " -dBiFCcLASS=1" : " -dBiFCcLASS=0" ) ;
                                                       strcat( postCmd , " -bd" ) ;

                if( !bCNotCpp )
                {
                                                       strcat( postCmd , " -fhq=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\" ) ;
                                                       strcat( postCmd , bThird ? "base.show.third.pch" : "base.hide.third.pch" ) ;
                }
                                                       strcat( postCmd , " -i=\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\include" ) ; //U:: ELIMINATE HARDCODED "ideafarm.home.1"
                                                       strcat( postCmd , " -fo=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\ -fr=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report\\ " ) ;
                                                       strcat( postCmd , postSource ) ;
                //system( postCmd ) ;
                hireF( idMe , postCmd ) ;
            }
            inc02AM( cCompiled ) ;

            if( !bThird && !bHeaderMadeHideThird ) bHeaderMadeHideThird = 1 ;
            if(  bThird && !bHeaderMadeShowThird ) bHeaderMadeShowThird = 1 ;

            //system( "rw \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\build3\\4report\\*" ) ;
            ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , postRaw ) ;

            if( bPrecompile )
            {
                if( bThird ) bHeaderMadeShowThird = 1 ;
                else         bHeaderMadeHideThird = 1 ;

                bPrecompiling = 0 ;
            }
        }
    }
}

void elf_obey_C::translateF( const char* postGroupP , int bPauseP )
{
    char postSay[ 0x10 ] ;
    strcat( postSay , "\t" ) ;
    strcpy( postSay , postGroupP ) ;

    sayF( "!space" , flSAY_DADiSgROUP | flSAY_START ) ;
    sayF( postSay , flSAY_DADiSgROUP | flSAY_END ) ;

    if( !strcmp( postGroupP , "31000" ) ) assembleF( postGroupP ) ;
    else                                  compileF( postGroupP , bPauseP ) ;
}

void elf_obey_C::compileF( char* postPrefixP , char* postIdiForeignP , char* postSuffixP )
{
    int bExe = !!strcmp( postPrefixP , "5adam" ) ;

    char postDefShort[ 0x100 ] ;
    strcpy( postDefShort , postPrefixP ) ;
    strcat( postDefShort , "." ) ;
    strcat( postDefShort , postIdiForeignP ) ;
    strcat( postDefShort , "." ) ;
    strcat( postDefShort , postSuffixP ) ;

    char postDef[ 0x100 ] = "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\" ;
    strcat( postDef , postDefShort ) ;

    char postObj[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\" ;
    strcat( postObj , postIdiForeignP ) ;
    if( !bExe )
    {
        strcat( postObj , "." ) ;
        strcat( postObj , postSuffixP ) ;
    }
    strcat( postObj , ".obj" ) ;

    char postHdr[ 0x100 ] ;
    strcpy( postHdr , postPrefixP ) ;
    strcat( postHdr , "." ) ;
    strcat( postHdr , postIdiForeignP ) ;
    strcat( postHdr , ".h" ) ;

    char postSource[ 0x100 ] ;
    strcpy( postSource , postIdiForeignP ) ;
    strcat( postSource , "." ) ;
    strcat( postSource , postSuffixP ) ;
    strcat( postSource , ".cpp" ) ;

    char postRaw[ 0x10 ] ;
    strcpy( postRaw , postIdiForeignP ) ;
    strcat( postRaw , ".raw" ) ;

    if( isStaleF( postObj , postDef ) )
    {
        char post001[ 0x100 ] ;
        strcpy( post001 , "  Compiling " ) ;
        strcat( post001 , bExe ? " exe " : " adam " ) ;
        strcat( post001 , postIdiForeignP ) ;
        if( !bExe )
        {
            strcat( post001 , " module " ) ;
            strcat( post001 , postSuffixP ) ;
        }
        strcat( post001 , "." ) ;
        sayF( post001 ) ;

        int bOk =
            ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , postRaw )
            && ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source" , postSource )
        ;
        
        if( bOk )
        {
            WIN32_FIND_DATA info ;
            HANDLE oshFind = FindFirstFile( postHdr , &info ) ;
    
            if( oshFind != INVALID_HANDLE_VALUE )
            {
                char postCmd[ 0x200 ] ;
                strcpy( postCmd , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\" ) ;
                strcat( postCmd , info.cFileName ) ;
                strcat( postCmd , " > \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\snip\\header" ) ;
                system( postCmd ) ;
            
                FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
            }
    
            { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\" ) ; strcat( postCmd , postDefShort ) ; system( postCmd ) ; }
    
                                               { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000005.includeGenMake.adam.show.third"           ) ; system( postCmd ) ; }
                                               { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000006.ifcENABLEtHIRDpARTIES"                    ) ; system( postCmd ) ; }
            if( !strcmp( postSuffixP , "1" ) ) { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.filepile.ipdos \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " -d \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\1snip.1a000007.ifcENABLEtHIRDpARTIESmULTIPLEmONITORfAKE" ) ; system( postCmd ) ; }
        }
    
        if( bOk )
        {
            { char postCmd[ 0x200 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe\\ideafarm.flip.ipdos < \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw\\" ; strcat( postCmd , postRaw ) ; strcat( postCmd , " > \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source\\" ) ; strcat( postCmd , postSource ) ; system( postCmd ) ; }
    
            char postCmd2[ 0x400 ] = "wpp386" ;
            strcat( postCmd2 , " " IPDOScOMPILEoPTIONS ) ;
            strcat( postCmd2 , " -dBiFCcLASS=0" ) ;
            /*if( flagsAll & flELVES_DEBUGiNFO )*/ strcat( postCmd2 , " -d2" ) ;  //DEBUG INFO IS ALWAYS INSERTED INTO OBJECT MODULES
            if( !bExe ) strcat( postCmd2 , " -bd" ) ;
            strcat( postCmd2 , " -fhq=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\adam.show.third.pch" ) ;
            strcat( postCmd2 , " -fo=" ) ;
            strcat( postCmd2 , postObj ) ;
            strcat( postCmd2 , " -i=\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\include" ) ; //U:: ELIMINATE HARDCODED "ideafarm.home.1"
            strcat( postCmd2 , " -fr=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report\\" ) ;
            strcat( postCmd2 , postIdiForeignP ) ;
            if( !bExe )
            {
                strcat( postCmd2 , "." ) ;
                strcat( postCmd2 , postSuffixP ) ;
            }
            strcat( postCmd2 , ".err \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source\\" ) ;
            strcat( postCmd2 , postSource ) ;
    
            //system( postCmd2 ) ;
            hireF( idMe , postCmd2 ) ;
            inc02AM( cCompiled ) ;
    
            ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , postRaw ) ;
        }
    }
}

void elf_obey_C::linkF( char* postIdiForeignP )
{
    int bExe = postIdiForeignP == strstr( postIdiForeignP , "41000" ) ;
    int bGui = postIdiForeignP == strstr( postIdiForeignP , "41000003" ) ;

    if( strlen( postIdiForeignP ) == 8 )
    {
        char postIdi[ 9 ] = { postIdiForeignP[ 7 ] , postIdiForeignP[ 6 ] , postIdiForeignP[ 5 ] , postIdiForeignP[ 4 ] , postIdiForeignP[ 3 ] , postIdiForeignP[ 2 ] , postIdiForeignP[ 1 ] , postIdiForeignP[ 0 ] , 0 } ;

        char postObj[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object\\" ;
        strcat( postObj , postIdiForeignP ) ;
        strcat( postObj , bExe ? ".obj" : ".*.obj" ) ;

        char postMasShort[ 0x100 ] = "ideafarm." ;
        strcat( postMasShort , postIdiForeignP ) ;
        strcat( postMasShort , ".ipdos-wm" ) ;

        char postMas[ 0x100 ] = "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\" ;
        strcat( postMas , postMasShort ) ;

        if( isStaleF( postMas , postObj ) )
        {
            char post001[ 0x100 ] ;
            strcpy( post001 , "  Linking " ) ;
            strcat( post001 , bExe ? " exe " : " dll " ) ;
            strcat( post001 , postIdiForeignP ) ;
            strcat( post001 , "." ) ;
            sayF( post001 ) ;

            char postCmd[ 0x400 ] = "wlink" ;
            if( flagsAll & flELVES_DEBUGiNFO ) strcat( postCmd , " debug all" ) ;
            strcat( postCmd , " system nt" ) ;
            if( !bExe ) strcat( postCmd , "_dll" ) ;
            if(  bGui ) strcat( postCmd , "_win" ) ;
            strcat( postCmd , " name " ) ;
            strcat( postCmd , postMas ) ;
            strcat( postCmd , " file " ) ;
            strcat( postCmd , postObj ) ;
            strcat( postCmd ,
    
                " library \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\microsoft\\msi.lib"
                " library \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm.81000001.ipdos-wl"
                " op heapsize=0x70000"
                " op st=0x00510000"
                " segment type code shared"
                " segment class 'CODE' shared"
                " segment 'BEGTEXT' shared"
                " segment '_TEXT' shared"
                " segment 'CONST' shared"
                " segment 'CONST2' shared"
                " op q"
                " op map=\\tmp\\"
    
            ) ;
            strcat( postCmd , postIdiForeignP ) ;
            strcat( postCmd ,
    
                ".map"
                " op mangle"
                " op de '!ifcExeDllDescBegin !cName "
    
            ) ;
            strcat( postCmd , postIdi ) ;
            strcat( postCmd , " !idCopy 00000000 !contact http://ideafarm.com IdeaFarm (tm) Piggyback Distributed Operating System (c) Wo Of Ideafarm all rights reserved !ifcExeDllDescEnd'" ) ;
            strcat( postCmd , " >> \\tmp\\link.err" ) ;

            batWatcom.grabF() ;
            ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master" , postMasShort ) ;
            system( postCmd ) ; //MUST BE SERIALIZED SINCE wlink USES A TEMPORARY FILE THAT IT CREATES, AND WILL COLLIDE WITH ITSELF IN CREATING THIS FILE

            int bFail = 0 ;
            {
                FILE* pFile = fopen( postMas , "rb" ) ;
                if( !pFile )
                {
                    sayF( "  Could not open \"" , flSAY_START , strlen( postMas ) ) ;
                    sayF( postMas , flSAY_MIDDLE ) ;
                    sayF( "\" (linkF)." , flSAY_END ) ;
                    bFail = 1 ;
                }
                fclose( pFile ) ; pFile = 0 ;
            }

            batWatcom.ungrabF() ;
    
            if( !bFail && bExe )
            {
                char postCmd2[ 0x100 ] = "wrc -q \\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary\\7reso.71000001.ipdos.rc" ;
    
                strcat( postCmd2 , " \\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\ideafarm." ) ;
                strcat( postCmd2 , postIdiForeignP ) ;
                strcat( postCmd2 , ".ipdos-wm" ) ;
    
                strcat( postCmd2 , " -fo=\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp\\" ) ;
                strcat( postCmd2 , postIdiForeignP ) ;
                strcat( postCmd2 , ".res" ) ;
    
                system( postCmd2 ) ;
            }
    
            ether.deleteAllF( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object" , postIdiForeignP ) ;
        }
    }
}

char* elf_obey_C::pbAtF( int& costDoneP , char* pbBigP , int cbBigP , char* postSmallP )
{
    int bFound = 0 ;
    int costToDoSave = strlen( postSmallP ) - costDoneP ;
    int costToDo = costToDoSave ;
    char* pbb = pbBigP ;
    char* pbe = pbBigP + cbBigP ;
    char* posts = postSmallP + costDoneP ;

    char* pbAt = costDoneP ? pbBigP - costDoneP : 0 ;
    while( pbb < pbe && costToDo )
    {
        char* pbf = !costDoneP
            ? (char*)memchr( pbb , *posts , pbe - pbb )
            : *pbb == *posts
                ? pbb
                : 0
        ;

        if( !pbf )
        {
            if( !costDoneP ) break ;
            else            costDoneP = 0 ;

            costToDo = costToDoSave ;
            posts = postSmallP ;
            pbAt = 0 ;
        }
        else
        {
            if( !pbAt ) pbAt = pbf ;

            costDoneP ++ ;
            costToDo -- ;
            posts ++ ;
            pbb = pbf + 1 ;
        }
    }
    bFound = !costToDo ;

    return bFound ? pbAt : 0 ;
}

void elf_obey_C::reorderF( char* postToP , char* postFromP , int costP )
{
    char* posto = postToP ;
    char* posti = postFromP + costP - 1 ;

    while( costP -- ) *( posto ++ ) = *( posti -- ) ;
}

int elf_obey_C::idCopyF( char* postFileP , int& cDoneP )
{
    int idCopy = 0 ;

    // SEARCH FOR "!idCopy 00000000"

    char      postBegin[] = "!ifcExeDllDescBegin" ;
    char*     pbCompare = postBegin + 1 ;
    int       cbCompare = sizeof postBegin - 2 ;

                             //12345678
    char      postSearch[] = "!idCopy 00000000" ;  //CS:CODEsYNC: build6 build6
    char*     pbProlog     = postSearch + 1 ;
    int       cbProlog     = 7 ;

    FILE* pFile = fopen( postFileP , "r+b" ) ;
    if( !pFile )
    {
        sayF( "  Could not open \"" , flSAY_START , strlen( postFileP ) ) ;
        sayF( postFileP , flSAY_MIDDLE ) ;
        sayF( "\" (idCopyF)." , flSAY_END ) ;
    }
    else
    {
        int offFound = 0 ;
        {
            int cbAll = 0 ;
            {
                int offSave = ftell( pFile ) ;
                fseek( pFile , 0L , SEEK_END ) ;
                cbAll = ftell( pFile ) ;
                fseek( pFile , offSave , SEEK_SET ) ;
            }

            int offBegin = 0 ;    
            char* pbAll = newF( cbAll ) ;
            if( !pbAll )
            {
                sayF( "  Could not obtain " , flSAY_START ) ;
                sayF( cbAll , flSAY_MIDDLE ) ;
                sayF( " bytes from the heap." , flSAY_END ) ;
            }
            else
            {
                char* const pbeAll = pbAll + cbAll ;
                { char* pbo = pbAll ; while( pbo < pbeAll ) pbo += fread( pbo , 1 , pbeAll - pbo , pFile ) ; }
    
                char* pbc = pbAll ;
                for( ; pbc = (char*)memchr( pbc , postSearch[ 0 ] , pbeAll - pbc ) , pbc ; )                                             // FOR EACH '!'
                {
                    pbc ++ ;

                    if( !offBegin )
                    {
                        if( pbeAll - pbc >= cbCompare && !memcmp( pbc , pbCompare , cbCompare ) )
                        {
                            offBegin = pbc - pbAll ;
                            pbCompare = postSearch + 1 ;
                            cbCompare = sizeof postSearch - 2 ;
                        }
                    } 
                    else if( pbeAll - pbc >= cbCompare && !memcmp( pbc , pbCompare , cbCompare ) )
                    {
                        pbc += 7 ;
                        offFound = pbc - pbAll ;
                        break ;
                    }
                    else if( pbeAll - pbc >= cbProlog && !memcmp( pbc , pbProlog , cbProlog ) )
                    {
                        pbc += 7 ;
                        char* pbe = (char*)memchr( pbc , ' ' , pbeAll - pbc ) ;

                        char postForeign[ sizeof( int ) * 2 + 1 ] ;
                        reorderF( postForeign , pbc , pbe - pbc ) ;
                        postForeign[ pbe - pbc ] = 0 ;

                        sscanf( postForeign , "%x" , &idCopy ) ;

                        break ;
                    }
                }
            }

            delF( pbAll ) ;
        }

        if( !offFound )
        {
            //sayF( "  Could not find \"" , flSAY_START , strlen( postSearch ) ) ;
            //sayF( postSearch , flSAY_MIDDLE ) ;
            //sayF( "\"." , flSAY_END ) ;
        }
        else
        {
            if( !( cDoneP ++ ) ) sayF( "[6patch]:  Patching a newly assigned idCopy value into each master file that does not already contain wo." ) ;

            idCopy = boxDispenseIdF( "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\idCopyLath" , 0 , idMe ) ;

            if( !idCopy ) //SHOULD BE IMPOSSIBLE
            {
                sayF( "  Error: Could not obtain a nonzero idCopy value to use." , flSAY_END ) ;
            }

            fseek( pFile , offFound , SEEK_SET ) ;

            char postForeign[ sizeof( int ) * 2 + 1 ] ;
            itoa( idCopy , postForeign , 0x10 ) ;
            int costChanged = strlen( postForeign ) ;
            char postIfc[ sizeof( int ) * 2 + 1 ] ;
            reorderF( postIfc , postForeign , costChanged ) ;
            postIfc[ costChanged ] = 0 ;

            sayF( "!newline" , flSAY_START ) ;
            sayF( "Applying patch \"" , flSAY_MIDDLE , strlen( postIfc ) ) ;
            sayF( postIfc , flSAY_MIDDLE ) ;
            sayF( "\" to " , flSAY_MIDDLE ) ;
            sayF( postFileP , flSAY_MIDDLE ) ;
            sayF( "." , flSAY_END ) ;

            char* const pboEnd = postIfc + costChanged ;
            { char* pbo = postIfc ; while( pbo < pboEnd ) pbo += fwrite( pbo , 1 , pboEnd - pbo , pFile ) ; }
        }
    }
    fclose( pFile ) ; pFile = 0 ;

    return idCopy ;
}

elf_test_C::~elf_test_C( void )
{
}

elf_test_C::elf_test_C( int idDadP ) :
elfC( idDadP )
{
    flagsMe |= flELF_CONSTRUCTED ;
}

void elf_test_C::liveF( void )
{
}

etherC::~etherC( void )
{
    delF( postUser ) ;
    delete pPaper ; pPaper = 0 ;
}

etherC::etherC( void ) :
flagsAffinityProcess( 0 ) ,
flagsAffinitySystem( 0 ) ,
cProcessors( 0 ) ,
postUser( 0 )
{
    pPaper = new paperOldC ;

    int bOkHandler = SetConsoleCtrlHandler( controlInterruptHandlerF , 1 ) ;

    int bOk = GetProcessAffinityMask( GetCurrentProcess() , &flagsAffinityProcess , &flagsAffinitySystem ) ;

    unsigned long flags = flagsAffinityProcess ; //WILL ONLY HANDLE UP TO 02 PROCESSORS
    while( flags )
    {
        if( flags & 1 ) cProcessors ++ ;
        flags >>= 1 ;
    }
}

int etherC::deleteAllF( const char* postDirP , const char* postShortLikeP )
{
    const char* postShortLike = postShortLikeP ? postShortLikeP : "*" ;

    char postLike[ 0x200 ] ;
    strcpy( postLike , postDirP ) ;
    strcat( postLike , "\\" ) ;
    strcat( postLike , postShortLike ) ;

    int bOk = 1 ;

    WIN32_FIND_DATA info ;
    HANDLE oshFind = FindFirstFile( postLike , &info ) ;
    
    if( oshFind == INVALID_HANDLE_VALUE )
    {
        //int rc = GetLastError() ;
        //
        //sayF( 0 , "  Could **** NOT FIND **** \"" , flSAY_START ) ;
        //sayF( 0 , postLike , flSAY_MIDDLE ) ;
        //sayF( 0 , "\" in \"" , flSAY_MIDDLE ) ;
        //sayF( 0 , postDirP , flSAY_MIDDLE ) ;
        //sayF( 0 , "\" (rc=" , flSAY_MIDDLE ) ;
        //sayF( 0 , rc , flSAY_MIDDLE ) ;
        //sayF( 0 , ").\r\n" , flSAY_END ) ;
    }
    else do
    {
        //sayF( 0 , "  Found                    \"" , flSAY_START ) ;
        //sayF( 0 , postLike , flSAY_MIDDLE ) ;
        //sayF( 0 , "\" in \"" , flSAY_MIDDLE ) ;
        //sayF( 0 , postDirP , flSAY_MIDDLE ) ;
        //sayF( 0 , "\".\r\n " , flSAY_END ) ;

        if( strcmp( info.cFileName , "." ) && strcmp( info.cFileName , ".." ) )
        {
            char postDoomed[ 0x200 ] ;
            strcpy( postDoomed , postDirP ) ;
            strcat( postDoomed , "\\" ) ;
            strcat( postDoomed , info.cFileName ) ;

            bOk = DeleteFile( postDoomed ) ;

            int rc = bOk ? 0 : GetLastError() ;

            if( rc == ERROR_FILE_NOT_FOUND )
            {
                bOk = 1 ;
                rc = 0 ;
            }

            //sayF( 0 , bOk ? "  Deleted \"" : "  Could ****NOT**** delete \"" , flSAY_START ) ;
            //sayF( 0 , info.cFileName , flSAY_MIDDLE ) ;
            //sayF( 0 , "\" (rc=" , flSAY_MIDDLE ) ;
            //sayF( 0 , rc , flSAY_MIDDLE ) ;
            //sayF( 0 , ").\r\n" , flSAY_END ) ;
        }
    }
    while( bOk && FindNextFile( oshFind , &info ) ) ;
    
    FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;

    return bOk ;
}

void etherC::replacePaperF( void )
{
    batOut.grabF() ;
    delete pPaper ; pPaper = 0 ;
    pPaper = new paperOldC ;
    batOut.ungrabF() ;
}

void etherC::grabPaperF( void )
{
    batOut.grabF() ;
}

void etherC::ungrabPaperF( void )
{
    batOut.ungrabF() ;
}

void etherC::sayF( int idElfP , const char* postP , int flagsP , int costReservedP )
{
    if( strstr( "ipdos" , postP ) )
    {
        int foo = 2 ;
    }

    if( !( flagsP  & flSAY_NOgRAB ) ) batOut.grabF() ;
    pPaper->wrapF( idElfP , postP , flagsP , costReservedP ) ;
    if( !( flagsP  & flSAY_NOuNGRAB ) ) batOut.ungrabF() ;
}

void etherC::userF( const char* postP )
{
    delF( postUser ) ;
    if( postP && *postP )
    {
        postUser = (const char*)newF( strlen( postP ) + 1 ) ;
        if( postUser ) strcpy( (char*)postUser , postP ) ;
    }

    title.userF( postUser ) ;
}

const char* etherC::userF( void )
{
    return postUser ;
}

void etherC::sayF( int idElfP , int vP , int flagsP , int costReservedP )
{
    char post9[ 9 ] ;
    itoaF( post9 , sizeof post9 , vP ) ;

    if( !( flagsP  & flSAY_NOgRAB ) ) batOut.grabF() ;
    pPaper->wrapF( idElfP , post9 , flagsP , costReservedP ) ;
    if( !( flagsP  & flSAY_NOuNGRAB ) ) batOut.ungrabF() ;
}

fifoC::~fifoC( void )
{
    if( pRoot == this ) pRoot = pNext ;
    else
    {
        fifoC* pc = pRoot ;
        while( pc->pNext != this ) pc = pc->pNext ;
        pc->pNext = pNext ;
    }
}

fifoC::fifoC( fifoC*& pRootP ) :
pRoot( pRootP ) ,
pNext( 0 )
{
    if( !pRoot ) pRoot = this ;
    else
    {
        fifoC* pf = pRoot ;
        while( pf->pNext ) pf = pf->pNext ;
        pf->pNext = this ;
    }
}

int fifoC::countIF( fifoC* pRootP )
{
    int cPlates = 0 ;
    fifoC* pc = pRootP ;
    while( pc )
    {
        cPlates ++ ;
        pc = pc->pNext ;
    }
    return cPlates ;
}

fifoPostC::~fifoPostC( void )
{
    delF( postv ) ;
}

fifoPostC::fifoPostC( fifoC*& pRootP , const char* postP ) :
fifoC( pRootP ) ,
postv( 0 )
{
    postv = (const char*)newF( strlen( postP ) + 1 ) ;
    strcpy( (char*)postv , postP ) ;
}

fifoPostC::operator const char*( void )
{
    return postv ;
}

lifoC::~lifoC( void )
{
    if( pRoot == this ) pRoot = pNext ;
    else
    {
        lifoC* pc = pRoot ;
        while( pc->pNext != this ) pc = pc->pNext ;
        pc->pNext = pNext ;
    }
}

lifoC::lifoC( lifoC*& pRootP ) :
pRoot( pRootP ) ,
pNext( 0 )
{
    if( !pRoot ) pRoot = this ;
    else
    {
        pNext = pRoot ;
                pRoot = this ;
    }
}

int lifoC::countIF( lifoC* pRootP )
{
    int cPlates = 0 ;
    lifoC* pc = pRootP ;
    while( pc )
    {
        cPlates ++ ;
        pc = pc->pNext ;
    }
    return cPlates ;
}

lifoPostC::~lifoPostC( void )
{
    delF( postv ) ;
}

lifoPostC::lifoPostC( lifoC*& pRootP , const char* postP ) :
lifoC( pRootP ) ,
postv( 0 )
{
    postv = (const char*)newF( strlen( postP ) + 1 ) ;
    strcpy( (char*)postv , postP ) ;
}

lifoPostC::operator const char*( void )
{
    return postv ;
}

hoverC::~hoverC( void )
{
    if( !( flagsCt & flHOVER_PERSIST ) && !SetCurrentDirectory( postOld ) ) { BLAMMO ; }
    batFolder.ungrabF() ;
}

hoverC::hoverC( const char* postP , int flagsP ) :
flagsCt( flagsP )
{
    batFolder.grabF() ;
    if( !GetCurrentDirectory( sizeof postOld , postOld ) ) { BLAMMO ; }
    if( !SetCurrentDirectory( postP ) ) { BLAMMO ; }
}

paperOldC::~paperOldC( void )
{
    delF( postSeparatorUnder ) ;

    int bOk = SetConsoleCursorInfo( oshOut , &infoCursorOld ) ;
}

paperOldC::paperOldC( void ) :
cCols( 0 ) ,
cColsMargin( 1 ) ,
cRows( 0 ) ,
cRowsMargin( 1 ) ,
offRowSurface( 0 ) ,
oshIn( GetStdHandle( STD_INPUT_HANDLE ) ) ,
oshOut( GetStdHandle( STD_OUTPUT_HANDLE ) ) ,
postSeparatorUnder( 0 ) ,
idElfLath( 0 )
{
    memset( &infoOutBufferOld , 0 , sizeof infoOutBufferOld ) ;
    memset( &infoCursorOld    , 0 , sizeof infoCursorOld    ) ;
    memset( &infoCursorNew    , 0 , sizeof infoCursorNew    ) ;

    int bOk = GetConsoleScreenBufferInfo( oshOut , &infoOutBufferOld ) ;
    bOk = GetConsoleCursorInfo(           oshOut , &infoCursorOld    ) ;

    { DWORD info ; bOk = GetConsoleMode( oshIn , &info ) ; info |= ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT ; bOk = SetConsoleMode( oshIn , info ) ; } 

    //COORD coord ;
    //{ coord = GetLargestConsoleWindowSize( oshOut ) ; bOk = SetConsoleScreenBufferSize( oshOut , coord ) ; }

    *(int*)&cCols = infoOutBufferOld.dwSize.X ;
    *(int*)&cRows = infoOutBufferOld.dwSize.Y ;

    { SMALL_RECT info ; info.Left = 0 ; info.Top = 0 ; info.Right = (short)( cCols - 1 ) ; info.Bottom = (short)( cRows - 1 ) ; bOk = SetConsoleWindowInfo( oshOut , 1 , &info ) ; }

    { infoCursorNew.dwSize = 100 ; infoCursorNew.bVisible = 0 ; bOk = SetConsoleCursorInfo( oshOut , &infoCursorNew ) ; }

    {
        int costSep = cCols - 2 * cColsMargin ;
        postSeparatorUnder = newF( costSep + 2 ) ;
        char* postc = postSeparatorUnder ;
        *( postc ++ ) = ' ' ;
        while( costSep -- ) *( postc ++ ) = '_' ;
        *postc = 0 ;
    }
}

void paperOldC::wrapF( int idElfP , const char* postP , int flagsP , int costReservedP )
{
    int bInterrupt = 0 ;
    if( idElfLath != idElfP )
    {
        idElfLath = idElfP ;
        bInterrupt = 1 ;
    }

    if( postP )
    {
        if( postP[ 0 ] == '\f' )
        {
            postP ++ ;
            system( "cls" ) ;
            offRowSurface = 0 ;
            { COORD ii ; ii.X = (short)cColsMargin ; ii.Y = (short)cRowsMargin ; SetConsoleCursorPosition( oshOut , ii ) ; }
        }

        if( !*postP ) ;
        else
        {
            int bLiteral = 0 ;
            if( postP == strstr( postP , "!!" ) )
            {
                bLiteral = 1 ;
                postP ++ ;
            }

            COORD start ;
            {
                CONSOLE_SCREEN_BUFFER_INFO info ;
                GetConsoleScreenBufferInfo( oshOut , &info ) ;
                start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
            }

            if( bInterrupt && !( flagsP & flSAY_NOgRAB ) && ( start.X != (short)cColsMargin || start.Y != (short)cRowsMargin ) )
            {
                start.X = (short)cColsMargin ;
                start.Y ++ ;
                SetConsoleCursorPosition( oshOut , start ) ;
    
                DWORD cDone = 0 ;
                WriteConsole( oshOut , postSeparatorUnder + 1 , strlen( postSeparatorUnder + 1 ) , &cDone , 0 ) ;
                freshSurfaceF() ;
    
                start.Y += 2 ;
                SetConsoleCursorPosition( oshOut , start ) ;
            }

            int bDone = 0 ;
            if( !bLiteral )
            {
                if( !strcmp( postP , "!space" ) )
                {
                    bDone = 1 ;

                    COORD start ;
                    {
                        CONSOLE_SCREEN_BUFFER_INFO info ;
                        GetConsoleScreenBufferInfo( oshOut , &info ) ;
                        start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                        start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                    }
        
                    if( start.X != (short)cColsMargin )
                    {
                        start.X ++ ;
                        SetConsoleCursorPosition( oshOut , start ) ;
                    }
                }
                else if( !strcmp( postP , "!newline" ) )
                {
                    bDone = 1 ;

                    COORD start ;
                    {
                        CONSOLE_SCREEN_BUFFER_INFO info ;
                        GetConsoleScreenBufferInfo( oshOut , &info ) ;
                        start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                        start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                    }

                    start.X = (short)cColsMargin ;
        
                    if( start.Y < offRowSurface ) start.Y = (short)offRowSurface ;

                    SetConsoleCursorPosition( oshOut , start ) ;
                }
                else if( !strcmp( postP , "!paragraph" ) )
                {
                    bDone = 1 ;

                    COORD start ;
                    {
                        CONSOLE_SCREEN_BUFFER_INFO info ;
                        GetConsoleScreenBufferInfo( oshOut , &info ) ;
                        start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                        start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                    }

                    start.X = (short)cColsMargin ;
        
                    if( start.Y < offRowSurface + 1 ) start.Y = (short)( offRowSurface + 1 ) ;

                    SetConsoleCursorPosition( oshOut , start ) ;
                }
                else if( postP == strstr( postP , "!divider " ) )
                {
                    bDone = 1 ;

                    postP += 9 ;
                    int costp = strlen( postP ) ;
                    if( costp )
                    {
                        char* postd = 0 ;
                        {
                            int costSep = cCols - 2 * cColsMargin ;
                            postd = newF( costSep + 2 ) ;

                            char* posto = postd ;
                            int cDone = 0 ;                            
                            while( costSep -- ) *( posto ++ ) = postP[ ( cDone ++ ) % costp ] ;
                            *posto = 0 ;
                        }

                        COORD start ;
                        {
                            CONSOLE_SCREEN_BUFFER_INFO info ;
                            GetConsoleScreenBufferInfo( oshOut , &info ) ;
                            start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                            start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                        }

                        if( start.X != (short)cColsMargin || start.Y != (short)cRowsMargin )
                        {
                            start.X = (short)cColsMargin ;
                            start.Y += 2 ;
                            SetConsoleCursorPosition( oshOut , start ) ;
                        }
            
                        DWORD cDone = 0 ;
                        WriteConsole( oshOut , postd , strlen( postd ) , &cDone , 0 ) ;
                        freshSurfaceF() ;
            
                        start.Y += 2 ;
                        SetConsoleCursorPosition( oshOut , start ) ;
                    }
                }
                else if( postP == strstr( postP , "!center " ) )
                {
                    bDone = 1 ;

                    postP += 8 ;
                    int costp = strlen( postP ) ;
                    if( costp )
                    {
                        COORD start ;
                        {
                            CONSOLE_SCREEN_BUFFER_INFO info ;
                            GetConsoleScreenBufferInfo( oshOut , &info ) ;
                            start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                            start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                        }

                        int cColsExtra = cCols - cColsMargin - start.X - costp ;

                        if( cColsExtra >= 0 )
                        {
                            start.X += (short)( cColsExtra >> 1 ) ;
                            SetConsoleCursorPosition( oshOut , start ) ;
                        }
                        else
                        {
                            start.X = (short)( ( cCols - costp ) >> 1 ) ;
                            start.Y += 2 ;
                            SetConsoleCursorPosition( oshOut , start ) ;
                        }
            
                        DWORD cDone = 0 ;
                        WriteConsole( oshOut , postP , strlen( postP ) , &cDone , 0 ) ;
                        freshSurfaceF() ;
            
                        start.X = (short)cColsMargin ;
                        start.Y += 2 ;
                        SetConsoleCursorPosition( oshOut , start ) ;
                    }
                }
            }

            if( !bDone )
            {
                int costi = strlen( postP ) ;                
                if( !!( flagsP & flSAY_NOwRAP ) )
                {
                    DWORD cDone = 0 ;
                    WriteConsole( oshOut , postP , costi , &cDone , 0 ) ;
                    freshSurfaceF() ;
                }
                else
                {
                    const char* postc = postP ;
                    while( postc < postP + costi ) //BODY WRITES WO LINE
                    {
                        int costc = strlen( postc ) ;                        

                        COORD start ;
                        {
                            CONSOLE_SCREEN_BUFFER_INFO info ;
                            GetConsoleScreenBufferInfo( oshOut , &info ) ;
                            start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                            start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                        }

                        int cCapacity1 = cCols - cColsMargin - start.X ;
                        int cCapacity2 = cCapacity1 - costReservedP ;

                        int bLathLine = costc <= cCapacity2 ;
                
                        int cToDo = 0 ;
                        if( bLathLine ) cToDo = costc ;
                        else
                        {
                            int cToDoLag = 0 ;
                            int offb = 0 ;
                            for(;;) // WALK THE DELIMITERS UNTIL I WOULD HAVE TOO MUCH (THIS LOOP IGNORES cReservedP)
                            {
                                while( postc[ offb ] == ' ' ) offb ++ ;                   //GOTO TOKEN BEGINNING
                                while( postc[ offb ] && postc[ offb ] != ' ' ) offb ++ ;  //GOTO TOKEN END
                    
                                if( offb > cCapacity1 ) break ;
                                else
                                {
                                    cToDoLag = cToDo ;
                                    cToDo = offb ;
                                    if( postc[ offb ] ) offb ++ ;
                                    else                break ;
                                }
                            }
    
                            if( !postc[ offb ] && cToDo > cCapacity2 && start.X > (short)cColsMargin ) cToDo = cToDoLag ;

                            if( !cToDo && start.X == (short)cColsMargin ) cToDo = cCapacity2 > 0 ? cCapacity2 : cCapacity1 ;
                        }
                
                        if( cToDo )
                        {
                            DWORD cDone = 0 ;
                            WriteConsole( oshOut , postc , cToDo , &cDone , 0 ) ;
                            postc += cDone ;
                            freshSurfaceF() ;
                        }
                
                        while( *postc == ' ' ) postc ++ ;
                
                        if( *postc && postc < postP + costi )
                        {
                            {
                                CONSOLE_SCREEN_BUFFER_INFO info ;
                                GetConsoleScreenBufferInfo( oshOut , &info ) ;
                                start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
                                start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
                            }
                            start.X = (short)cColsMargin ;
                            start.Y ++ ;
                            SetConsoleCursorPosition( oshOut , start ) ;
                        }
                    }
                }
            }
        }
    }
}

void paperOldC::freshSurfaceF( void )
{
    COORD start ;
    {
        CONSOLE_SCREEN_BUFFER_INFO info ;
        int bOk = GetConsoleScreenBufferInfo( oshOut , &info ) ;
        start.X = ((short*)&info.dwCursorPosition)[ 0 ] ;
        start.Y = ((short*)&info.dwCursorPosition)[ 1 ] ;
    }

    int now = start.X == (short)cColsMargin             // IT IS POSSIBLE FOR start.X < cColsMargin DUE TO A TOKEN WRAPPING "AGAINST THE WALL" BECAUSE IT IS TOO LONG TO FIT WITHIN CAPACITY (SO IS NOT WRAPPED) ; IN THAT CASE, I GO TO THE NEXT LINE TO MAKE THE AGAINST THE WALL WRAP MORE VISUALLY OBVIOUS
        ? start.Y
        : start.Y + 1
    ;

    if( offRowSurface < now ) offRowSurface = now ;
}

titleC::~titleC( void )
{
    delF( postUserDisplay ) ;
}

titleC::titleC( void ) :
postUserDisplay( 0 )
{
    postUserDisplay = newF( 1 ) ;
    *postUserDisplay = 0 ;
}

void titleC::userF( const char* postP )
{
    delF( postUserDisplay ) ;

    if( !postP || !*postP )
    {
        postUserDisplay = newF( 1 ) ;
        *postUserDisplay = 0 ;
    }
    else
    {
        int offt = 0 ;
        for( offt = 0 ; offt < sizeof ppostTokensUser / sizeof ppostTokensUser[ 0 ] ; offt ++ )
        {
            if( !strcmp( ppostTokensUser[ offt ] , postP ) ) break ;
        }

        if( offt < sizeof ppostTokensUser / sizeof ppostTokensUser[ 0 ] )
        {
            postUserDisplay = newF( strlen( ppostUserDisplay[ offt ] ) + 1 ) ;
            strcpy( postUserDisplay , ppostUserDisplay[ offt ] ) ;
        }
    }
}

void titleC::freshF( void )
{
    baton.grabF() ;

    int cElvesUncounted = elfC::cElvesUncountedIF() ;

    int cElves = elfC::cElvesIF() ;
    if( cElves >= cElvesUncounted ) cElves -= cElvesUncounted ; //I IGNORE EAT AND WATCH

    char post001[ 0x100 ] ; post001[ 0 ] = 0 ;

    const char* postCmdIn = elf_eat_C::getCmdIF() ;
    if( postCmdIn[ 0 ] && !elfC::cIgnoreCommandsIF() )
    {
        strcat( post001 , "[" ) ;
        strcat( post001 , postCmdIn ) ;
        strcat( post001 , "]" ) ;
    }

    const char* postTokin = elf_eat_C::getTokinIF() ;
    int boff = elf_eat_C::getBoffIF() ;
    if( postTokin[ 0 ] )
    {
        strcat( post001 , "> " ) ;

        if( !boff ) strcat( post001 , postTokin ) ;
        else
        {
            int costTokin = strlen( postTokin ) ;
            for( int offi = 0 ; offi < costTokin ; offi ++ )
            {
                char post2[] = { postTokin[ offi ] , 0 } ;
                if( offi == costTokin - boff ) strcat( post001 , "|" ) ;
                strcat( post001 , post2 ) ;
            }
        }

        strcat( post001 , " <" ) ;
    }

    if( post001[ 0 ] ) strcat( post001 , TS ) ;
    strcat( post001 , postUserDisplay ) ;

    if( post001[ 0 ] ) strcat( post001 , TS ) ;
    strcat( post001 , "IdeaFarm (tm)" ) ;

    if( !cElves ) strcat( post001 , " Elves" ) ;
    else
    {
        char post9[ 9 ] ;
        itoaF( post9 , sizeof post9 , cElves ) ;
        strcat( post001 , " " ) ;
        strcat( post001 , post9 ) ;        
        strcat( post001 , cElves == 1 ? " Elf" : " Elves" ) ;
    }

    if( etherC::smellF() )
    {
        strcat( post001 , " (Please wait for " ) ;
        strcat( post001 , cElves == 1 ? "this elf" : "these elves" ) ;
        strcat( post001 , " to finish.)" ) ;
    }

    strcat( post001 , TS "(c) Wo'O Ideafarm" TS "IDEAFARM.COM" ) ;

    SetConsoleTitle( post001 ) ;

    baton.ungrabF() ;
}

tokensC::~tokensC( void )
{
    if( bHeap )
    {
        const char** ppostc = ppostTokens ;
        while( cTokens -- )
            delF( *( ppostc ++ ) ) ;

        delF( ppostTokens ) ;
    }
}

tokensC::tokensC( const char** const ppostTokensP , int cTokensP ) :
bHeap( 0 ) ,
ppostTokens( ppostTokensP ) ,
cTokens( cTokensP )
{
}

tokensC::tokensC( tokensC& tP ) :
bHeap( 0 ) ,
ppostTokens( tP.ppostTokens ) ,
cTokens( tP.cTokens )
{
    if( tP.bHeap ) { BLAMMO ; }
}

tokensC::tokensC( const int* pczP ) :
bHeap( 1 ) ,
ppostTokens( 0 ) ,
cTokens( 0 )
{
    const int* pci = pczP ;
    while( *( pci ++ ) ) cTokens ++ ;

    ppostTokens = (const char**)newF( cTokens * sizeof( int* ) ) ;

    pci = pczP ;
    int offo = 0 ;

    int cToDo = cTokens ;
    while( cToDo -- )
    {
        char post9[ 9 ] ;
        itoaF( post9 , sizeof post9 , *( pci ++ ) ) ;

        int cost9 = strlen( post9 ) ;

        char* posto = newF( cost9 + 1 ) ;
        if( posto )
        {
            strcpy( posto , post9 ) ;
            ppostTokens[ offo ++ ] = posto ;
        }
    }
}


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* GLOBAL FUNCTION DEFINITIONS ********************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

//CS:CODEsYNC: service.cpp elves.cpp
int bNumaIsAvailableF( void )
{
    int bNuma = 0 ;

    ULONG offNodeMax = 0 ;
    if( GetNumaHighestNodeNumber( &offNodeMax ) )
    {
        int cSkip = 1 ; // I TEST WHETHER THERE ARE 2 NODES
        for( int offNode = 0 ; offNode <= offNodeMax ; offNode ++ )
        {
            ULONGLONG mask = 0 ;
            if( GetNumaNodeProcessorMask( 0 , &mask ) )
            {
                if( !( cSkip -- ) )
                {
                    bNuma = 1 ;
                    break ;
                }
            }
        }
    }

    return bNuma ;
}

int boxDispenseIdF( char* postFileP , int idMinP , int idElfP )
{
    int idNew = 0 ;

    FILE* pFile = fopen( postFileP , "r+b" ) ;
    int bNewFile = !pFile ;
    if( !pFile ) pFile = fopen( postFileP , "wb" ) ;

    if( !pFile )
    {
        ether.sayF( idElfP , "  Could not open \"" , flSAY_START , strlen( postFileP ) ) ;
        ether.sayF( idElfP , postFileP , flSAY_MIDDLE ) ;
        ether.sayF( idElfP , "\" (boxDispenseIdF)." , flSAY_END ) ;
    }
    else
    {
        if( !bNewFile )
        {
            int cbaBuffer = 0 ;
            {
                fseek( pFile , 0 , SEEK_SET ) ;
                int offSave = ftell( pFile ) ;
                fseek( pFile , 0L , SEEK_END ) ;
                cbaBuffer = ftell( pFile ) ;
                fseek( pFile , offSave , SEEK_SET ) ;
            }
    
            if( cbaBuffer == sizeof( int ) )
            {
                int cbToDo = sizeof idNew ;
                char* pbo = (char*)&idNew ;
                while( cbToDo )
                {
                    int cbChunk = fread( pbo , 1 , cbToDo , pFile ) ;
                    if( !cbChunk ) { int* pBlammo = 0 ; *pBlammo = 0xbbaaaddd ; }
                    else
                    {
                        pbo += cbChunk ;
                        cbToDo -= cbChunk ;
                    }
                }
            }
        }
        else
        {
            char postMatch[] = { "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos\\idAdamLath." } ;

            if( postFileP == strstr( postFileP , postMatch ) )
            {
                char* postUser = postFileP + sizeof postMatch - 1 ;

                //CS:CODEsYNC:B: EACH AND EVERY USER MUST HAVE A HARDCODED INITIAL idAdam VALUE ASSIGNMENT
                     if( !strcmp( postUser , "anonymous"         ) ) idNew = 0x51011000 ;
                else if( !strcmp( postUser , "ideafarm_wo"       ) ) idNew = 0x51012000 ;
                else if( !strcmp( postUser , "turnbull_nicholas" ) ) idNew = 0x51013000 ;
            }
        }

        idNew ++ ;

        if( idNew < idMinP ) idNew = idMinP ;

        {
            fseek( pFile , 0 , SEEK_SET ) ;
            int cbToDo = sizeof idNew ;
            char* pbBuffer = (char*)&idNew ;
            while( cbToDo )
            {
                int cbChunk = fwrite( pbBuffer , 1 , cbToDo , pFile ) ;
                if( !cbChunk ) { int* pBlammo = 0 ; *pBlammo = 0xbbaaaddd ; }
                else
                {
                    pbBuffer += cbChunk ;
                    cbToDo -= cbChunk ;
                }
            }
        }
    }
    fclose( pFile ) ; pFile = 0 ;

    return idNew ;
}

int boxGetShadowF( char*& postP , const char* postFileP , int idElfP )
{
    if( postP ) { BLAMMO ; }
    if( !postFileP ) { BLAMMO ; }

    int costaIn = 0 ;

    FILE* pFile = fopen( postFileP , "rb" ) ;
    
    if( !pFile )
    {
        ether.sayF( idElfP , "  Could not open \"" , flSAY_START , strlen( postFileP ) ) ;
        ether.sayF( idElfP , postFileP , flSAY_MIDDLE ) ;
        ether.sayF( idElfP , "\" (boxGetShadowF)." , flSAY_END ) ;
    }
    else
    {
        {
            int offSave = ftell( pFile ) ;
            fseek( pFile , 0L , SEEK_END ) ;
            costaIn = ftell( pFile ) ;
            fseek( pFile , offSave , SEEK_SET ) ;
        }
    
        int offBegin = 0 ;    
        postP = newF( costaIn ) ;
        if( !postP )
        {
            ether.sayF( idElfP , "  Could not obtain " , flSAY_START ) ;
            ether.sayF( idElfP , costaIn , flSAY_MIDDLE ) ;
            ether.sayF( idElfP , " bytes from the heap." , flSAY_END ) ;
        }
        else
        {
            const char* pbToDo = postP ;
            int         cbToDo = costaIn ;
            while( cbToDo )
            {
                int cbChunk = fread( (void*)pbToDo , 1 , cbToDo , pFile ) ;
                if( !cbChunk ) { int* pBlammo = 0 ; *pBlammo = 0xbbaaaddd ; }
                else
                {
                    pbToDo += cbChunk ;
                    cbToDo -= cbChunk ;
                }
            }
        }
    }
    fclose( pFile ) ; pFile = 0 ;

    return costaIn ? costaIn - 1 : 0 ;
}

void boxPutF( const char* postFileP , const char* postP , int idElfP )
{
    if( !postFileP ) { BLAMMO ; }
    if( !postP ) { BLAMMO ; }

    FILE* pFile = fopen( postFileP , "wb" ) ;

    if( !pFile )
    {
        ether.sayF( idElfP , "  Could not open \"" , flSAY_START , strlen( postFileP ) ) ;
        ether.sayF( idElfP , postFileP , flSAY_MIDDLE ) ;
        ether.sayF( idElfP , "\" (boxPutF)." , flSAY_END ) ;
    }
    else
    {
        const char* pbToDo = postP ;
        int         cbToDo = strlen( postP ) + 1 ;
        while( cbToDo )
        {
            int cbChunk = fwrite( pbToDo , 1 , cbToDo , pFile ) ;
            if( !cbChunk ) { int* pBlammo = 0 ; *pBlammo = 0xbbaaaddd ; }
            else
            {
                pbToDo += cbChunk ;
                cbToDo -= cbChunk ;
            }
        }
    }
    fclose( pFile ) ; pFile = 0 ;
}

BOOL __stdcall controlInterruptHandlerF( DWORD idEventP )
{
    BOOL bHandled = 0 ;
    switch( idEventP )
    {
        case CTRL_C_EVENT :
        case CTRL_BREAK_EVENT :
        case CTRL_SHUTDOWN_EVENT :
        {
            _beginthread( tmAbortF , 0x10000 , (void*)0 ) ;
            if( idEventP == CTRL_CLOSE_EVENT ) Sleep( 8000 ) ;
            bHandled = 1 ;
            break ;
        }
        case CTRL_CLOSE_EVENT :
        {
            tmAbortF( 0 ) ;
            break ;
        }
    }

    return bHandled ;
}

void hireF( int idElfP , char* postCmdP , char* postDirectoryP )
{
    //ether.sayF( idElfP , "\r\nCMD: " , flSAY_START ) ;
    //ether.sayF( idElfP , postCmdP , flSAY_MIDDLE ) ;
    //ether.sayF( idElfP , "\r\nDIR: " , flSAY_MIDDLE ) ;
    //ether.sayF( idElfP , postDirectoryP , flSAY_MIDDLE ) ;
    //ether.sayF( idElfP , "\r\n" , flSAY_END ) ;

    SIZE_T cba = 0 ;
    InitializeProcThreadAttributeList( 0 , 1 , 0 , &cba ) ;

    PROCESS_INFORMATION pinfo ;
    memset( &pinfo , 0 , sizeof pinfo ) ;
    if( cba < 0x100 )
    {
        unsigned pcInfo2[ 0x100 / sizeof( unsigned ) ] ;
        memset( pcInfo2 , 0 , cba ) ;

        if( InitializeProcThreadAttributeList( (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 , 1 , 0 , &cba ) )
        {
            STARTUPINFOEX sinfo ;
            memset( &sinfo , 0 , sizeof sinfo ) ;
            sinfo.StartupInfo.cb = sizeof sinfo.StartupInfo ;
            sinfo.StartupInfo.dwFlags = STARTF_USESHOWWINDOW | STARTF_USEPOSITION | STARTF_USECOUNTCHARS /*| STARTF_USEFILLATTRIBUTE*/ ;
            sinfo.StartupInfo.wShowWindow = SW_SHOWMAXIMIZED ;
            sinfo.StartupInfo.dwXCountChars = 0x400 ;
            sinfo.StartupInfo.dwYCountChars = 0x300 ;
            //sinfo.StartupInfo.dwFillAttribute = BACKGROUND_GREEN ;
            sinfo.lpAttributeList = (_PROC_THREAD_ATTRIBUTE_LIST*)pcInfo2 ;

            //LOGrAW( "launching \"" ) ;
            //LOGrAW( postAll ) ;
            //LOGrAW( "\"\r\n" ) ;

            CreateProcess( 0 , postCmdP , 0 , 0 , 0 , 0 , 0 , postDirectoryP , (STARTUPINFO*)&sinfo , &pinfo ) ;
            CloseHandle( pinfo.hThread ) ;

            DWORD rc = 0 ;
            do
            {
                Sleep( 250 ) ;
                GetExitCodeProcess( pinfo.hProcess , &rc ) ;
            }
            while( rc == STILL_ACTIVE ) ;

            CloseHandle( pinfo.hProcess ) ;
        }
    }
}

void itoaF( char* post9P , int costa9P , int cP )
{
    if( post9P && costa9P >= 9 )
    {
        char post9f[ 9 ] ;
        itoa( cP , post9f , 0x10 ) ;
        int costf = strlen( post9f ) ;
        char* posti = post9f + costf ;
        char* posto = post9P ;
        while( costf -- ) *( posto ++ ) = *( -- posti ) ;
        *posto = 0 ;
    }
}

void makeFoldersCopyThirdPartyDllsF( void )
{
    if( !SetCurrentDirectory( "d:\\" ) ) { BLAMMO ; }       //DONE TO ENSURE THAT CURRENT DRIVE IS d:
    CreateDirectory( "\\ideafarm.home.1" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\backed.up.daily" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\backed.up.daily\\domains\\com\\ideafarm\\ipdos" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\z" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\exe" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\snip" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\tmp" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\1raw" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\2source" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\3object" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\workshop\\4report" , 0 ) ;

    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\state" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\state\\rimstar" , 0 ) ;

    CreateDirectory( "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\release" , 0 ) ;

    CreateDirectory( "\\ideafarm.home.1\\precious\\" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\dictionary" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\library\\snip" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop" , 0 ) ;
    CreateDirectory( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\elves" , 0 ) ;
    CreateDirectory( "\\ideafarm.work" , 0 ) ;
    CreateDirectory( "\\ideafarm.work\\txt" , 0 ) ;
    CreateDirectory( "\\ideafarm.work\\txt\\ideafarm.com" , 0 ) ;
    CreateDirectory( "\\tmp" , 0 ) ;

    int bOk = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin\\libssl-3.dll"     , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\libssl-3.dll"     , 1 ) ;
    bOk     = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin\\libcrypto-3.dll"  , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\libcrypto-3.dll"  , 1 ) ;
    //bOk     = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\visualstudio\\vcruntime140.dll" , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover\\vcruntime140.dll" , 1 ) ;

    bOk     = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin\\libssl-3.dll"     , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\libssl-3.dll"     , 1 ) ;
    bOk     = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\openssl\\bin\\libcrypto-3.dll"  , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\libcrypto-3.dll"  , 1 ) ;
    //bOk     = CopyFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\visualstudio\\vcruntime140.dll" , "\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\master\\vcruntime140.dll" , 1 ) ;

    if( !bOk ) ;
}

void delF(       int*&   pcP  ) { delF( *(char**)&pcP  ) ; }
void delF( const int*&   pcP  ) { delF( *(char**)&pcP  ) ; }
void delF(       char**& ppbP ) { delF( *(char**)&ppbP ) ; }
void delF( const char**& ppbP ) { delF( *(char**)&ppbP ) ; }
void delF( const char*&  pbP  ) { delF( *(char**)&pbP  ) ; }

void delF( char*& pbP )
{
    if( pbP )
    {
        char* pbAll = pbP - 2 * sizeof( int ) ;
        if( ((int*)pbAll)[ 0 ] != 0xaaaaaaaa ) { BLAMMO ; }

        unsigned int cba = ((unsigned int*)pbAll)[ 1 ] ;
        if( cba >= 0x80000000 ) { BLAMMO ; }

        char* pbr = pbAll + 2 * sizeof( int ) ;

        if( *(int*)( pbr + cba ) != 0xbbbbbbbb ) { BLAMMO ; }

        free( (void*)pbAll ) ;
        pbP = 0 ;
    }
}

char* newF( int cbP )
{
    char* pbAll = (char*)malloc( cbP + 3 * sizeof( int ) ) ;

    char* pbr = 0 ;
    if( pbAll )
    {
        ((int*)pbAll)[ 0 ] = 0xaaaaaaaa ;
        ((int*)pbAll)[ 1 ] = cbP ;
        pbr = pbAll + 2 * sizeof( int ) ;
        *(int*)( pbr + cbP ) = 0xbbbbbbbb ;
    }

    return pbr ;
}

int sourceCodeExistsF( void )
{
    int rc = 0 ;
    WIN32_FIND_DATA info ;
    HANDLE oshFind = FindFirstFile( "\\ideafarm.home.1\\precious\\domains\\com\\ideafarm\\city\\workshop\\elves\\elves.cpp" , &info ) ;

    if( oshFind != INVALID_HANDLE_VALUE )
    {
        FindClose( oshFind ) ; oshFind = INVALID_HANDLE_VALUE ;
        rc = 1 ;
    }
    return rc ;
}

void truncateF( char* postP , const char* postTestP ) // TRUNCATES postP TO LONGEST VALUE THAT MATCHES THE CORRESPONDING CHARS IN postTestP
{
    int costp    = strlen( postP     ) ;
    int costt    = strlen( postTestP ) ;
    int costBoth = costp < costt ? costp : costt ;
    
    int offc = 0 ;

    while( offc < costBoth && postP[ offc ] == postTestP[ offc ] ) offc ++ ;

    postP[ offc ] = 0 ;
}


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* THREAD MAIN FUNCTION DEFINITIONS ***************************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

void tmAbortF( void* pnuP )
{
    static int idInLath ;
    int idIn = 1 + incv02AM( idInLath ) ;
    if( idIn > 1 )
        ExitProcess( 0 ) ;

    etherC::gruntIF() ;
    inc02AM( elfC::cIgnoreCommands ) ;
    elfC::flagsAll |= flELVES_QUITsEEN ;
    //elf_eat_C::woF().freshenTokinF() ;
    ether.title.freshF() ;
    //CANNOT DO THIS SINCE INSTANCE MIGHT BE GONE: elf_eat_C::woF().sayChoicesF() ;

    while( elfC::cElvesIF() > 1 ) Sleep( 0x100 ) ;
    SetConsoleTitle( "" ) ;
    ether.sayF( 0 , postTHANKyOU , flSAY_NOwRAP ) ;
    Sleep( 8000 ) ;

    TOUCH( pnuP )
}

void tmElfF( void* pElfP )
{
    elfC* pElf = (elfC*)pElfP ;

    pElf->awakenF() ;

    pElf->liveF() ;

    delete pElf ;
}


// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************
// ******************************************************************* MAIN FUNCTION DEFINITION (PROCESS ENTRY POINT) *************************************************
// ********************************************************************************************************************************************************************
// ********************************************************************************************************************************************************************

int main( int cArgP , char* ppostArgP[] , char* ppostEnvP[] )
{
    {
        int s1 = sizeof ppostTokensUser ;
        int s2 = sizeof ppostUserDisplay ;
        if( s1 != s2 ) { BLAMMO ; }
    }

    int bHighPriest = sourceCodeExistsF() ;

    makeFoldersCopyThirdPartyDllsF() ;
    { hoverC hover( "d:\\ideafarm.home.1\\ephemeral\\domains\\com\\ideafarm\\city\\park\\exedll\\1\\hover" , flHOVER_PERSIST ) ; } // WHEN USING PRECOMPILED HEADERS, MUST ALWAYS BE HOVERING IN THE SAME CURRENT DIRECTORY

    char postCmdWoth[ 0x10 ] = { "" } ;
    if( !bHighPriest ) ether.userF( "anonymous" ) ;
    else
    {
        char* postUser = 0 ;
        boxGetShadowF( postUser , postFILEuSER ) ;
    
        int bBad = 1 ;
        if( postUser )
        {
            for( int offt = 0 ; offt < sizeof ppostTokensUser / sizeof ppostTokensUser[ 0 ] ; offt ++ )
            {
                if( !strcmp( ppostTokensUser[ offt ] , postUser ) )
                {
                    bBad = 0 ;
                    break ;
                }
            }

            if( !bBad ) ether.userF( postUser ) ;
        }
        delF( postUser ) ;
    
        if( bBad ) strcpy( postCmdWoth , "user" ) ;
    }

    //strcpy( postCmdWoth , "edit" ) ;
    
    new elf_eat_C( 0 , postCmdWoth ) ;
    new elf_obey_C( "refresh" ) ;
    //new elf_obey_C( "test" ) ;

    while( elfC::cElvesIF() ) Sleep( 0x100 ) ;

    SetConsoleTitle( "" ) ;
    ether.sayF( 0 , postTHANKyOU , flSAY_NOwRAP ) ;
    Sleep( 2000 ) ;

    if( cArgP && ppostArgP && ppostEnvP ) ;
    return 0 ;
}
