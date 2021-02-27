/*
** Macro header: template.h - Template editing abrreviations & expansions
**
**	This header file is where you will find template editing definitions
**	Feel free to customize the templates to work the way you want.
**
** For an abbreviation to match it must only have whitespace ahead of it and
**	you must be at the end of the line.
** If a match is found, the abbreviation is removed and replaced with
**	the expansion.
**
** Special characters which can be used in an expansion string:
**
**	'\b':	does PosPrevChar()
**	'\n':	does BufNewlineIndent()
**	'\r':	does BufBackspace()
**	'~':	does MovPrevTabPos()
**	'%':	remember line & column position
**	'^':	moves back to saved line & column position
**
** The function which actually performs the expansion is _expand() in lang.rm
**
** If a position has been saved using '%' but not restored using '^'
** by the time the template has finished expanding the saved position will be
** restored as the last action of _expand().
**
*/


#if 0
/* this is copied from lang.h for easy reference */

typedef struct template_t	TEMPLATE, *PTEMPLATE;
struct template_t {
	char		*abbrev;			/* what is tested to see if a match exists */
	char		*expansion;		/* what to expand to */
	short		min;				/* need at least this many chars for this abbrev to match */
	unsigned	flags;			/* special handling flags - currently unused */
}
#endif



#ifdef INCL_C_TEMPLATES
/*
** This section is included by "c.rm"
**
** For C/C++ there are 3 different sets of template expansions
** depending on the brace style you have configured.
** Make sure you change the appropriate template for your
** brace style ( c_brace_style ).
**
** Brace styles are 0, 1, or 2
**
** style 0 looks like this:
**    if ( x )
**    {
**       statement;
**    }
** style 1 looks like this:
**    if ( x ) {
**       statement;
**    }
** style 2 looks like this:
**    if ( x )
**       {
**       statement;
**       }
*/
#define BRACES_NEXTLINE		0
#define BRACES_SAMELINE		1
#define BRACES_INDENTED		2

/*
** c_brace_style == 0
** places opening brace on following line at same position as start of last line
*/
TEMPLATE cTemplates0[] = {
	{ "#defin"		, "#define\a"							,	2, 0	},
	{ "#includ"		, "#include\a"							,	2, 0	},
	{ "#ifde"		, "#ifdef\a"							,	4, 0	},
	{ "#ifnde"		, "#ifndef\a"							,	4, 0	},
	{ "#endi"		, "#endif\a"							,	2, 0	},
	{ "#els"			, "#else\a"								,	3, 0	},
	{ "#ei"			, "#elif\a"								,	3, 0	},
	{ "#pragm"		, "#pragma\a"							,	2, 0	},
	{ "if"			, "if (%)"								,	2, 0	},
	{ "if{"			, "if (%)\n{\n\t\n}"					,	3, 0	},
	{ "els"			, "else"									,	2, 0	},
	{ "el{"			, "else\n{\n\t%\n}"					,	3, 0	},
	{ "ei"			, "else if (%)"						,	2, 0	},
	{ "ei{"			, "else if (%)\n{\n\t\n}"			,	3, 0	},
	{ "else if"		, "else if (%)"						,	6, 0	},
	{ "else if{"	, "else if (%)\n{\n\t\n}"			,	8, 0	},
	{ "while"		, "while (%)"							,	2, 0	},
	{ "wh{"			, "while (%)\n{\n\t\n}"				,	3, 0	},
	{ "for"  		, "for (%;;)"							,	2, 0	},
	{ "fo{"  		, "for (%;;)\n{\n\t\n}"				,	3, 0	},
	{ "switch"		, "switch (%)\n{\n\t\n}"			,	2, 0	},
	{ "break"		, "break;" 								,	2, 0	},
	{ "case" 		, "case :\a\b%\f\n\tbreak;"		,	2, 0	},
	{ "default"		, "default:\a"							,	2, 0	},
	{ "do"			, "do\n{\n\t%\n}\nwhile ();"		,	2, 0	},
	{ "return"		, "return %;"							,  2, 0  },
	{ "continue"	, "continue;"							,  2, 0  },
	{ "st"			, "struct %\n{\n\t\n}"				,	2, 0	},
	{ "cl"			, "class %\n{\n\t\n}"				,	2, 0	},
	{ "{"	         , "{\n\t%\n}" 							,  1, 0  },
	{ "/*"	      , "/* % */" 							,  2, 0  },
	{ NULL			, NULL									,  0, 0  },
};

/*
** c_brace_style == 1 ( Open brace on same line )
** Places opening brace at end of line.
*/
TEMPLATE cTemplates1[] = {
	{ "#defin"		, "#define\a"							,	2, 0	},
	{ "#includ"		, "#include\a"							,	2, 0	},
	{ "#ifde"		, "#ifdef\a"							,	4, 0	},
	{ "#ifnde"		, "#ifndef\a"							,	4, 0	},
	{ "#endi"		, "#endif\a"							,	2, 0	},
	{ "#els"			, "#else\a"								,	3, 0	},
	{ "#ei"			, "#elif\a"								,	3, 0	},
	{ "#pragm"		, "#pragma\a"							,	2, 0	},
	{ "if"			, "if (%)"								,	2, 0	},
	{ "if{"			, "if (%) {\n}"						,	3, 0	},
	{ "els"			, "else"									,	2, 0	},
	{ "} els"		, "} else"								,	4, 0	},
	{ "el{"			, "else {\n\t%\n}"					,	3, 0	},
	{ "} el{"		, "} else {\n\t%\n}"					,	5, 0	},
	{ "ei"			, "else if (%)"						,	2, 0	},
	{ "} ei"			, "} else if (%)"						,	4, 0	},
	{ "ei{"			, "else if (%) {\n\t\n}"			,	3, 0	},
	{ "} ei{"		, "} else if (%) {\n\t\n}"			,	5, 0	},
	{ "else if"		, "else if (%)"						,	6, 0	},
	{ "} else if"	, "} else if (%)"						,	8, 0	},
	{ "else if{"	, "else if (%) {\n\t\n}"			,	8, 0	},
	{ "} else if{"	, "} else if (%) {\n\t\n}"			, 10, 0	},
	{ "while"		, "while (%)"							,	2, 0	},
	{ "wh{"			, "while (%) {\n\t\n}"				,	3, 0	},
	{ "for"  		, "for (%;;)"							,	2, 0	},
	{ "fo{"  		, "for (%;;) {\n\t\n}"				,	3, 0	},
	{ "switch"		, "switch (%) {\n\t\n}"				,	2, 0	},
	{ "break"		, "break;" 								,	2, 0	},
	{ "case" 		, "case :\a\b%\f\n\tbreak;"		,	2, 0	},
	{ "default"		, "default:\a"							,	2, 0	},
	{ "do"			, "do {\n\t%\n} while ();"			,	2, 0	},
	{ "return"		, "return %;"							,  2, 0  },
	{ "continue"	, "continue;"							,  2, 0  },
	{ "st"			, "struct % {\n\t\n}"				,	2, 0	},
	{ "cl"			, "class % {\n\t\n}"					,	2, 0	},
	{ "{"	         , "{\n\t%\n}" 							,  1, 0  },
	{ "/*"	      , "/* % */" 							,  2, 0  },
	{ NULL			, NULL									,  0, 0  },
};

/*
** c_brace_style == 2 ( Braces indented )
** Place opening brace on following line & in by a tab stop.
*/
TEMPLATE cTemplates2[] = {
	{ "#defin"		, "#define\a"							,	2, 0	},
	{ "#includ"		, "#include\a"							,	2, 0	},
	{ "#ifde"		, "#ifdef\a"							,	4, 0	},
	{ "#ifnde"		, "#ifndef\a"							,	4, 0	},
	{ "#endi"		, "#endif\a"							,	2, 0	},
	{ "#els"			, "#else\a"								,	3, 0	},
	{ "#ei"			, "#elif\a"								,	3, 0	},
	{ "#pragm"		, "#pragma\a"							,	2, 0	},
	{ "if"			, "if (%)"								,	2, 0	},
	{ "if{"			, "if (%)\n\t{\n\n}"					,	3, 0	},
	{ "els"			, "else"									,	2, 0	},
	{ "el{"			, "else\n\t{\n%\n}"					,	3, 0	},
	{ "ei"			, "else if (%)"						,	2, 0	},
	{ "ei{"			, "else if (%)\n\t{\n\n}"			,	3, 0	},
	{ "else if"		, "else if (%)"						,	6, 0	},
	{ "else if{"	, "else if (%)\n\t{\n\n}"			,	8, 0	},
	{ "while"		, "while (%)"							,	2, 0	},
	{ "wh{"			, "while (%)\n\t{\n\n}"				,	3, 0	},
	{ "for"  		, "for (%;;)"							,	2, 0	},
	{ "fo{"  		, "for (%;;)\n\t{\n\n}"				,	3, 0	},
	{ "switch"		, "switch (%)\n\t{\n\n}" 			,	2, 0	},
	{ "break"		, "break;" 								,	2, 0	},
	{ "case" 		, "case :\a\b%\f\n\tbreak;"		,	2, 0	},
	{ "case" 		, "case :\b\a"							,	2, 0	},
	{ "default"		, "default:\a"							,	2, 0	},
	{ "do"			, "do\n\t{\n%\n}\n\~while ();"	,	2, 0	},
	{ "return"		, "return %;"							,  2, 0  },
	{ "continue"	, "continue;"							,  2, 0  },
	{ "st"  			, "struct %\n\t{\n\n}"				,	2, 0	},
	{ "cl"  			, "class %\n\t{\n\n}"				,	2, 0	},
	{ "{"	         , "{\n%\n}" 							,  1, 0  },
	{ "/*"	      , "/* % */" 							,  2, 0  },
	{ NULL			, NULL									,  0, 0  },
};
#endif /* INCL_C_TEMPLATES */


#ifdef INCL_EASEL_TEMPLATES
/* This section is included by "easel.rm" */
TEMPLATE ealTemplates[] = {
	{ "begin"		, "begin %\nend\n"					,	2, 0	},
	{ "if"			, "if (%) then\nend if\n"			,	2, 0	},
	{ "response"	, "response to "						,	2, 0	},
	{ NULL			, NULL									,  0, 0  }
};
#endif /* INCL_EASEL_TEMPLATES */


#ifdef INCL_PASCAL_TEMPLATES
/* This section is included by "pascal.rm" */
TEMPLATE pasTemplates[] = {
	{ NULL			, NULL									,  0, 0  }
};
#endif /* INCL_PASCAL_TEMPLATES */


#ifdef INCL_PL1_TEMPLATES
/* This section is included by "pl1.rm" */
TEMPLATE PL1Templates[] = {
	{ NULL			, NULL									,  0, 0  }
};
#endif /* INCL_PL1_TEMPLATES */


#ifdef INCL_PRG_TEMPLATES
/* This section is included by "clipper.rm" */
TEMPLATE prgTemplates[] = {
	{ "IF"			, "IF %\nENDIF\n"								,	2, TE_IGNORECASE	},
	{ "DO CASE"		, "DO CASE%\nENDCASE\n^\n\tCASE %\n"	,	4, TE_IGNORECASE	},
	{ "DO"			, "DO "											,	2, TE_IGNORECASE	},
	{ "OTHERWISE"	, "OTHERWISE\n\t"								,	2, TE_IGNORECASE	},
	{ NULL			, NULL											,  0, 0  }
};
#endif /* INCL_PRG_TEMPLATES */


#ifdef INCL_REXX_TEMPLATES
/* This section is included by "rexx.rm" */
TEMPLATE RexxTemplates[] = {
	{ NULL			, NULL									,  0, 0  }
};
#endif /* INCL_REXX_TEMPLATES */



/*
** End macro header: template.h
*/
