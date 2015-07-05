/****************************************************/
/* txt2bas                                          */
/* p6code.h                                         */
/* 2000.03.26. by ishioka                           */
/* 2000.03.28.                                      */
/****************************************************/

p6code5 p6codelist5[] = {
	{ "-"		, 0xCB },
	{ "*"		, 0xCC },
	{ "/"		, 0xCD },
	{ "^"		, 0xCE },
	{ "+"		, 0xCA },
	{ "<"		, 0xD3 },
	{ "="		, 0xD2 },
	{ ">"		, 0xD1 },
	{ "?"		, 0x95 }, 	// add 2000.03.28.
	{ "ABS"		, 0xD6 },
	{ "AND"		, 0xCF },
	{ "ASC"		, 0xE8 },
	{ "BLOAD"	, 0xAF },
	{ "BSAVE"	, 0xB0 },
	{ "CHR$"	, 0xE9 },
	{ "CIRCLE"	, 0xAC },
	{ "CLEAR"	, 0x99 },
	{ "CLOAD"	, 0xA3 },
	{ "CLOSE"	, 0xBB },
	{ "CLS"		, 0xA0 },
	{ "COLOR"	, 0x9A },
	{ "CONSOLE"	, 0xA2 },
	{ "CONT"	, 0x96 },
	{ "COS"		, 0xE0 },
	{ "CSAVE"	, 0xA4 },
	{ "CSRLIN"	, 0xEE },
	{ "CVS"		, 0xF8 },
	{ "DATA"	, 0x83 },
	{ "DEF"		, 0x93 },
	{ "DELETE"	, 0xC1 },
	{ "DIM"		, 0x85 },
	{ "DSKF"	, 0xF7 },
	{ "DSKI$"	, 0xF3 },
	{ "DSKO$"	, 0xBC },
	{ "END"		, 0x80 },
	{ "EOF"		, 0xF6 },
	{ "EXEC"	, 0xA5 },
	{ "EXP"		, 0xDF },
	{ "FIELD"	, 0xB7 },
	{ "FILES"	, 0xB1 },
	{ "FN"		, 0xC4 },
	{ "FOR"		, 0x81 },
	{ "FRE"		, 0xD8 },
	{ "GET"		, 0xAD },
	{ "GOSUB"	, 0x8C },
	{ "GOTO"	, 0x88 },
	{ "HEX$"	, 0xE5 },
	{ "IF"		, 0x8A },
	{ "INKEY$"	, 0xC6 },
	{ "INPUT"	, 0x84 }, // attention!
	{ "INP"		, 0xD9 },
	{ "INT"		, 0xD5 },
	{ "KANJI"	, 0xC0 },
	{ "KEY"		, 0xA8 },
	{ "KILL"	, 0xBD },
	{ "LCOPY"	, 0xA9 },
	{ "LEFT$"	, 0xEA },
	{ "LEN"		, 0xE4 },
	{ "LET"		, 0x87 },
	{ "LFILES"	, 0xB2 },
	{ "LINE"	, 0x9D },
	{ "LIST"	, 0x97 },
	{ "LLIST"	, 0x98 },
	{ "LOAD"	, 0xB3 },
	{ "LOCATE"	, 0xA1 }, // attention!
	{ "LOC"		, 0xF5 },
	{ "LOF"		, 0xF4 },
	{ "LOG"		, 0xDE },
	{ "LPOS"	, 0xDA },
	{ "LPRINT"	, 0x92 },
	{ "LSET"	, 0xB8 },
	{ "MERGE"	, 0xB4 },
	{ "MID$"	, 0xEC },
	{ "MKS$"	, 0xF9 },
	{ "MON"		, 0xBF },
	{ "NAME"	, 0xB5 },
	{ "NEW"		, 0xAA },
	{ "NEXT"	, 0x82 },
	{ "NOT"		, 0xC8 },
	{ "ON"		, 0x91 },
	{ "OPEN"	, 0xBA },
	{ "OR"		, 0xD0 },
	{ "OUT"		, 0x90 },
	{ "PAD"		, 0xF2 },
	{ "PAINT"	, 0x9E },
	{ "PEEK"	, 0xE3 },
	{ "PLAY"	, 0xA7 },
	{ "POINT"	, 0xED },
	{ "POKE"	, 0x94 },
	{ "POS"		, 0xDB },
	{ "PRESET"	, 0x9C },
	{ "PRINT"	, 0x95 },
	{ "PSET"	, 0x9B },
	{ "PUT"		, 0xAE },
	{ "READ"	, 0x86 },
	{ "REM"		, 0x8E },
	{ "RENUM"	, 0xAB },
	{ "RESTORE"	, 0x8B },
	{ "RETURN"	, 0x8D },
	{ "RIGHT$"	, 0xEB },
	{ "RND"		, 0xDD },
	{ "RSET"	, 0xB9 },
	{ "RUN"		, 0x89 },
	{ "SAVE"	, 0xB6 },
	{ "SCREEN"	, 0x9F },
	{ "SGN"		, 0xD4 },
	{ "SIN"		, 0xE1 },
	{ "SOUND"	, 0xA6 },
	{ "SPC("	, 0xC5 },
	{ "SQR"		, 0xDC },
	{ "STEP"	, 0xC9 },
	{ "STICK"	, 0xEF },
	{ "STOP"	, 0x8F },
	{ "STR$"	, 0xE6 },
	{ "STRIG"	, 0xF0 },
	{ "TAB("	, 0xC2 },
	{ "TALK"	, 0xBE },
	{ "TAN"		, 0xE2 },
	{ "THEN"	, 0xC7 },
	{ "TIME"	, 0xF1 },
	{ "TO"		, 0xC3 },
	{ "USR"		, 0xD7 },
	{ "VAL"		, 0xE7 },
};