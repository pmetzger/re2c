/* Generated by re2c */
#line 1 "include/include001.re"
#line 3 "include/include001.re.c.inc"



#line 5 "include/include001.re.b.inc"




#line 13 "include/include001.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy3;
	case 'c':	goto yy5;
	default:	goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
#line 4 "include/include001.re"
	{}
#line 28 "include/include001.c"
yy5:
	++YYCURSOR;
#line 5 "include/include001.re"
	{}
#line 33 "include/include001.c"
}
#line 6 "include/include001.re"

include/include001.re:6:2: warning: control flow is undefined for strings that match '[\x0-\x61\x64-\xFF]', use default rule '*' [-Wundefined-control-flow]
