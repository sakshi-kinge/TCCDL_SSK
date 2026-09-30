%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
void yyerror(const char *s);
%}

%token NUMBER

%left'+' '-'
%left'*' '/'
%right UMINUS UPLUS

%%

input:
  |input expr '\n' {printf("Result=%d\n",$2);}
  |input '\n'
  ;
  
expr:
   expr '+' expr { $$ = $1 + $3; }
 | expr '-' expr { $$ = $1 - $3; }
 | expr '*' expr { $$ = $1 * $3; }
 | expr '/' expr { $$ = $1 / $3; }
 | '(' expr ')' { $$ = $2; }
 | NUMBER { $$ = $1; }
;

%%

int main()
{
printf("Enter Arithmetic Expression:\n");
yyparse();
return 0;
}

void yyerror(const char *s)
{
printf("Invalid Expression");
}
