
#line 1 "bug1054496.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET(n)	printf("%d\n", n); return n
#define TAG_EOI	0
#define TAG_A	1
#define TAG_TAG	2

int scan(char *s, int l)
{
	char *p = s;
	char *q;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)
cont:

#line 6 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept;
	goto yy0;
	++YYCURSOR;
yy0:
	if((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch(yych){
	case 0x00:	goto yy4;
	case '<':	goto yy2;
	default:	goto yy6;
	}
yy2:	++YYCURSOR;
	switch((yych = *YYCURSOR)) {
	case 'A':	case 'a':	goto yy7;
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy3;
	}
yy3:
#line 25 "bug1054496.re"
{ goto cont; }
#line 77 "<stdout>"
yy4:	++YYCURSOR;
	goto yy5;
yy5:
#line 24 "bug1054496.re"
{ RET(TAG_EOI); }
#line 83 "<stdout>"
yy6:	yych = *++YYCURSOR;
	goto yy3;
yy7:	++YYCURSOR;
	switch((yych = *YYCURSOR)) {
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy8;
	}
yy8:
#line 22 "bug1054496.re"
{ RET(TAG_A); }
#line 144 "<stdout>"
yy9:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy10;
yy10:	switch(yych){
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy11;
	}
yy11:
#line 23 "bug1054496.re"
{ RET(TAG_TAG); }
#line 207 "<stdout>"
}
#line 26 "bug1054496.re"

}

#define do_scan(str) scan(str, strlen(str))

main()
{
	do_scan("0");
}
