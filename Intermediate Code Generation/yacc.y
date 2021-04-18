%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int yylex(void);
	void yyerror(char *);
	
	int scope=0;
	extern int lines;
	
	char buffer[100];
	int ln = 0, tempno = 0;
	int jumpno = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int paramno = 0;		//Number of parameters

	char intbuf[20];
	char secIDbuf[20];

%}

%union
{
	char String_value[300];
}

%token <String_value>	INTEGER_LITERAL
%token <String_value>	FLOAT_LITERAL
%token <String_value>	CHARACTER_LITERAL
%token <String_value>	STRING_LITERAL
%token <String_value>	FOR
%token <String_value> 	IDENTIFIER

%left 	'+' '-'
%left 	'/' '*' '%'
%right 	'='
%right UMINUS

%token	PUBLIC PRIVATE PROTECTED STATIC VOID CLASS IMPORT
%token	WHILE MAIN DO 
%token	INT FLOAT LONG DOUBLE BOOLEAN CHAR RETURN IF ELSE

%nonassoc	THEN
%nonassoc	ELSE

%token	INC_OP		DEC_OP		LE_OP		GE_OP		EQ_OP		NE_OP
%token	MUL_ASSIGN 	DIV_ASSIGN 	MOD_ASSIGN 	ADD_ASSIGN 	SUB_ASSIGN	TRUE	FALSE

%type <String_value> 	additive_expression 
%type <String_value>  	multiplicative_expression
%type <String_value>	unary_expression
%type <String_value>	relational_expression
%type <String_value>	primary_expression
%type <String_value> 	expression
%type <String_value> 	postfix_expression
%type <String_value>  	assignment_expression
%type <String_value> 	conditional_expression
%type <String_value>	equality_expression 
%type <String_value>	unary_operator
%type <String_value>	expr
%type <String_value>	declarator

%start start_aug

%%

start_aug
	: import_stmt class_def 		 	{	exit(0);	}
	| class_def  					 	{	exit(0);	}
	;

import_stmt
	: IMPORT IDENTIFIER ';'
	| import_stmt IMPORT IDENTIFIER ';'
	;


class_def
	: modifier class_head
	;
	
class_head	
	: CLASS IDENTIFIER '{' main_stmt '}'
	;

declaration
	: type_specifier init_declarator_list ';' 
	;

modifier
	: PUBLIC  
	| STATIC
	| PRIVATE
	| PROTECTED
	| VOID 
	;

main_stmt
	: modifier modifier modifier MAIN '(' ')' compound_statement
	;

compound_statement
	: '{' '}' 
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item 	
	;

block_item
	: declaration
	| statement
	| RETURN expression_statement	
	| function_call ';'
	;
	
statement
	: compound_statement
	| expression_statement
	| iteration_statement 
	| conditional_statement
 	;

conditional_statement
	: IF '(' 	{	printf("\n");	} 	equality_expression ')' {	printf("ifFalse t%d goto JUMP%d\n", --tempno, jumpno);	tempno++;}
	statement 	{ 	printf("JUMP%d:\n\n",jumpno++);	}
	;


iteration_statement
	: FOR '(' expression_statement 
		{ 
			printf("\nLabel%d:\n", ln);
			ln++;
		}
	expression_statement
		{
			printf("ifFalse t%d goto Label%d\n", tempno, ln);
			tempno++;
		}
	expr  ')' statement
		{
			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, $7);
						printf("%s = %s\n", $7, buffer);
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, $7);
						printf("%s = %s\n", $7, buffer);
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, $7);
						printf("%s = %s\n", $7, buffer);
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, $7);
						printf("%s = %s\n", $7, buffer);
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, $7, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, $7, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, $7, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, $7, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", $7, buffer);
						break;
				case 12:
						break;
			}
			exprno = -1;
			printf("goto Label%d\n", --ln);
			ln++;
			printf("Label%d:\n\n", ln);
			ln++;
		}
	| WHILE '(' {
					printf("Label%d:\n", ln);
					ln++;
				}
				conditional_expression
				{
					printf("ifFalse t%d goto Label%d\n", --tempno, ln);
					tempno++;
				} ')'
				statement
				{
					printf("goto Label%d\n", --ln);
					ln++;
					printf("Label%d:\n\n", ln);
					ln++;
				}
	| DO {printf("Label%d:\n", ln); ln++; } statement WHILE '(' conditional_expression {
																						printf("ifFalse t%d goto Label%d\n", --tempno, ln); 	}																			')' ';'
	;
expr
	:	{
			exprno = 12;
		}
	| IDENTIFIER INC_OP 							
		{  
			exprno = 0;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
		}
	| IDENTIFIER DEC_OP								
		{  
			exprno = 1;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
		}		
	| INC_OP IDENTIFIER 							
		{  
			exprno = 2;
			m = strlen($2);
			strncpy($$, $2, m);
			$$[m] = '\0';
		}	
	| DEC_OP IDENTIFIER							
		{  
			exprno = 3; 
			m = strlen($2);
			strncpy($$, $2, m);
			$$[m] = '\0';
		}	
	| IDENTIFIER ADD_ASSIGN INTEGER_LITERAL			
		{  
			exprno = 4; 
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($3);
			strncpy(intbuf, $3, m);
			intbuf[m] = '\0';

		}	 
	| IDENTIFIER SUB_ASSIGN INTEGER_LITERAL			
		{  
			exprno = 5;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($3);
			strncpy(intbuf, $3, m);
			intbuf[m] = '\0';
		}	
	| IDENTIFIER MUL_ASSIGN INTEGER_LITERAL			
		{  
			exprno = 6;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($3);
			strncpy(intbuf, $3, m);
			intbuf[m] = '\0';
		}	
	| IDENTIFIER DIV_ASSIGN INTEGER_LITERAL			
		{  
			exprno = 7; 
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($3);
			strncpy(intbuf, $3, m);
			intbuf[m] = '\0';
		}	
	| IDENTIFIER '=' IDENTIFIER '+' INTEGER_LITERAL	
		{  
			exprno = 8;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($5);
			strncpy(intbuf, $5, m);
			intbuf[m] = '\0';
			m = strlen($3);
			strncpy(secIDbuf, $3, m);
			secIDbuf[m] = '\0';
		}		
	| IDENTIFIER '=' IDENTIFIER '-' INTEGER_LITERAL	
		{  
			exprno = 9;
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($5);
			strncpy(intbuf, $5, m);
			intbuf[m] = '\0';
			m = strlen($3);
			strncpy(secIDbuf, $3, m);
			secIDbuf[m] = '\0';
		}		
	| IDENTIFIER '=' IDENTIFIER '*' INTEGER_LITERAL	
		{  
			exprno = 10; 
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($5);
			strncpy(intbuf, $5, m);
			intbuf[m] = '\0';
			m = strlen($3);
			strncpy(secIDbuf, $3, m);
			secIDbuf[m] = '\0';
		}		
	| IDENTIFIER '=' IDENTIFIER '/' INTEGER_LITERAL	
		{  
			exprno = 11; 
			m = strlen($1);
			strncpy($$, $1, m);
			$$[m] = '\0';
			m = strlen($5);
			strncpy(intbuf, $5, m);
			intbuf[m] = '\0';
			m = strlen($3);
			strncpy(secIDbuf, $3, m);
			secIDbuf[m] = '\0';
		}		
	;

type_specifier
	: INT			
	| FLOAT			
	| LONG		
	| DOUBLE		
	| BOOLEAN			
	;
	
init_declarator_list
	: init_declarator 
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: IDENTIFIER  '=' assignment_expression		
		{
			if(tempno > 0){
				printf("%s = t%d\n", $1, --tempno);
				tempno++;
			}
			else if(tempno == 0){
				printf("%s = %s\n", $1, $3); 
			}
		}			
	| IDENTIFIER
	;
	
assignment_expression
	: conditional_expression		{	strcpy($$, $1); }
	| unary_expression assignment_operator assignment_expression 		
		{
			switch(assignop){
				case 0: 
						printf("%s = %s\n", $1, $3); 
						break;
						
				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, $1, $3);
						printf("%s = t%d\n", $1, --tempno); 
						tempno++;
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, $1, $3);
						printf("%s = t%d\n", $1, --tempno); 
						tempno++;
						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, $1, $3);
						printf("%s = t%d\n", $1, --tempno);
						tempno++;
						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, $1, $3);
						printf("%s = t%d\n", $1, --tempno); 
						tempno++;
						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s %c %s\n",buffer, $1, '%',$3);
						printf("%s = t%d\n", $1, --tempno); 
						tempno++;
						break;
			}
			assignop = -1;
		}
	;

assignment_operator
	: '='			{ assignop = 0; 	}
	| ADD_ASSIGN	{ assignop = 1; 	}
	| SUB_ASSIGN	{ assignop = 2; 	}
	| MUL_ASSIGN	{ assignop = 3; 	}
	| DIV_ASSIGN	{ assignop = 4; 	}
	| MOD_ASSIGN	{ assignop = 5; 	}
	;

conditional_expression
	: equality_expression 	{	strcpy($$, $1);  }
	| equality_expression
		{ 
			printf("ifFalse t%d goto L%d\n", --tempno, ln);
			tempno++;		
			ln++;
		} 
	'?' expression 
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s\n", buffer, $4);
			printf("goto Label%d\n", ln);
			printf("Label%d:\n", --ln);
			ln++;
		}
	':' conditional_expression	
		{
			printf( "%s = %s\n", buffer, $7);
			printf("Label%d:\n", ln);
			ln++;
		}
	;

expression_statement
	: ';'				
	| expression ';' 	
	;

expression
	: assignment_expression		{	strcpy($$, $1); }
	| expression ',' assignment_expression
	;


primary_expression
	: IDENTIFIER 				{	strcpy($$, $1); 	}
	| INTEGER_LITERAL			{	strcpy($$, $1); 	}
	| FLOAT_LITERAL				{	strcpy($$, $1); 	}
	| CHARACTER_LITERAL			{	strcpy($$, $1); 	}
	| '(' expression ')'		{	strcpy($$, $2); 	}
	;


postfix_expression
	: primary_expression		{	strcpy($$, $1); }	
	| postfix_expression INC_OP	
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s + 1\n",buffer, $1);
			printf("%s = %s\n", $1, buffer);
		}
	| postfix_expression DEC_OP 
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s - 1\n",buffer, $1);
			printf("%s = %s\n", $1, buffer);
		}
	;


unary_expression
	: postfix_expression				{	strcpy($$, $1); }
	| unary_operator unary_expression 
		{
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						printf("%s = -%s\n",buffer, $2);	
						strncpy($$, buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, $2);
						strncpy($$, buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, $2);
						strncpy($$, buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}			
	;


unary_operator
	: '+' 		{	unaryop = 0; }
	| '-'		{	unaryop = 1; }	%prec UMINUS
	| '!'		{	unaryop = 2; }
	| '~'		{	unaryop = 3; }
	| "INC_OP"	{	unaryop = 4; }
	| "DEC_OP" 	{	unaryop = 5; }
	;


equality_expression
	: relational_expression		{	strcpy($$, $1); }
	| equality_expression EQ_OP relational_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s == %s\n", buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	| equality_expression NE_OP relational_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s != %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	;


relational_expression
	: additive_expression		{	strcpy($$, $1); }
	| relational_expression '<' additive_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s < %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	| relational_expression '>' additive_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s > %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	| relational_expression LE_OP additive_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s <= %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	| relational_expression GE_OP additive_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s >= %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}		
	;


additive_expression
	: multiplicative_expression		{	strcpy($$, $1); }
	| additive_expression '+' multiplicative_expression 	
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s + %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	| additive_expression '-' multiplicative_expression	
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s - %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}
	;


multiplicative_expression
	: unary_expression			
	| multiplicative_expression '*' unary_expression 
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s * %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}						
	| multiplicative_expression '/' unary_expression	
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s / %s\n",buffer, $1, $3);
			strncpy($$, buffer, m+1);		//check out
		}										
	| multiplicative_expression '%' unary_expression
		{
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s %c %s\n",buffer, $1, '%',$3);
			strncpy($$, buffer, m+1);		//check out
		}						
	;

function_call
	: declarator '(' identifier_list ')'
		{
			paramno++;	
			printf("Function_Call(%s, %d)\n", $1, paramno);	
			paramno = 0;	
		}	
	| declarator '(' ')'
		{
			printf("Function_Call(%s, 0)\n", $1);	
		}
	;


declarator
	: IDENTIFIER 	
		{ 
			m = strlen($1);
			strncpy($$, $1, m);	
			$$[m] = '\0';
		}
	| declarator '(' parameter_list ')'		
		{
			
		}	
	| declarator '(' identifier_list ')'				
	| declarator '(' ')'					
	;


parameter_list
	: parameter_declaration						
	| parameter_list ',' parameter_declaration	
	;


parameter_declaration
	: type_specifier IDENTIFIER		
	| type_specifier				
	;


identifier_list
	: IDENTIFIER		
		{
			printf("Parameter %s\n", $1);
		}				
	| identifier_list ',' IDENTIFIER	
		{
			printf("Parameter %s\n", $3);
			paramno++;
		}
	;
%%

void yyerror(char *s) 
{
	fprintf(stderr, "%s\n", s);
}

int main()
{
	yyparse();
	return 0;
}


