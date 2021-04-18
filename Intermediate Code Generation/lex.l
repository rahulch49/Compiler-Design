%{
	#include <stdio.h>
	#include <stdlib.h>	
	#include "y.tab.h"
	extern int scope;
	int lines=0;	
%}

digit		[0-9]
alpha		[a-zA-Z]
und		"_"

%%
"//".*\n 	//Single-Line Comment Removal	
"/*"[^*/]*"*/" 	//Multi-Line Comment Removal
[\t ]		//Removal of tabs and new-lines 
"\n"		{	lines++;}
			
"import"	{return IMPORT;}
"class"		{return CLASS;}
"public"	{return PUBLIC;}
"private" 	{return PRIVATE;}
"protected" {return PROTECTED;}
"static" 	{return STATIC;}
"true"		{return TRUE;}
"false"		{return FALSE;}
"void"		{return VOID;}
"if"		{return IF;}
"else"		{return ELSE;}
"main" 		{return MAIN;}
"char"		{return CHAR;}
"int" 		{return INT;}
"float" 	{return FLOAT;}
"long"		{return LONG;}
"double" 	{return DOUBLE;}
"boolean"	{return BOOLEAN;}
"while" 	{return WHILE;}
"for" 		{return FOR;}
"do" 		{return DO;}
"return"	{return RETURN;}

({alpha}|{und}|$)({alpha}|{und}|{digit}|$)*		{	
													strcpy(yylval.String_value, yytext);
													return IDENTIFIER ;
												}//Identifier

{digit}+\.{digit}+				{   
									strcpy(yylval.String_value, yytext);  
									return FLOAT_LITERAL;
								} //floating numbers

({digit})+						{	
									strcpy(yylval.String_value, yytext);
									return INTEGER_LITERAL;
								} //integers

"'"."'"							{
									strcpy(yylval.String_value, yytext);
									return CHARACTER_LITERAL;  
								} //characters 

\".*\"							{  
									strcpy(yylval.String_value, yytext);
									return STRING_LITERAL; 
								} //strings 

"{"			{	scope++; 
				return '{';
			}
"}"			{
				scope--; 
				return '}';
			}

"+="		{   return(ADD_ASSIGN); }
"-="		{   return(SUB_ASSIGN); }
"*="		{   return(MUL_ASSIGN); }
"/="		{   return(DIV_ASSIGN); }
"%="		{   return(MOD_ASSIGN); }

	/* Relational Operators */
"++"		{   return(INC_OP); }
"--"		{   return(DEC_OP); }
"<="		{   return(LE_OP); }
">="		{   return(GE_OP); }
"=="		{   return(EQ_OP); }
"!="		{   return(NE_OP); }

	/* Basic Syntax */
";"			{   return(';'); }
","			{   return(','); }
":"			{   return(':'); }
"="			{   return('='); }
"("			{   return('('); }
")"			{   return(')'); }
("["|"<:")	{   return('['); }
("]"|":>")	{   return(']'); }
"."			{   return('.'); }
"&"			{   return('&'); }
"!"			{   return('!'); }
"~"			{   return('~'); }
"-"			{   return('-'); }
"+"			{   return('+'); }
"*"			{   return('*'); }
"/"			{   return('/'); }
"%"			{   return('%'); }
"<"			{   return('<'); }
">"			{   return('>'); }
"^"			{   return('^'); }
"|"			{   return('|'); }
"?"			{   return('?'); }


.			{ printf("No Match, Invalid Expression %s\n", yytext); 
			  return yytext[0]; }
%%
