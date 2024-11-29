%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <malloc.h>
    
    #include <math.h>
    int cnt=1,cntt=0,val,track=0;
      typedef struct entry {
    	char *str;
    	int n;
	}storage;
         storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);
	int cnt2=1; 
	void insert2 (storage *p, char *s, int n);
    extern FILE *yyin;
    extern FILE *yyout;
    extern int Current_Line;
    extern int yylex();
    void yyerror();
  
%}
%union 
{
        int number;
        char *string;
        float fval;
        double dag;
}

/*token defintion */
%token <number> NUMBER 
%token <string> VARIABLE 
%token INTEZAR FLOT STR CHARAC BOOL LONG IF ELSE ELSIF FOO UNTIL COLON WHILE RET FACTORIAL PRIME BRK CONTINUE CONSTANT FUNCT  STATIC TRY CATCH SEMI COMMA 
%token SINGLE_LINE_COMMENT MULTI_LINE_COMMENT MATH_SINE MIN
%token  OPEN_BRACKET CLOSE_BRACKET  OPEN_SECOND_BRACKET CLOSE_SECOND_BRACKET OPEN_THIRD_BRACKET CLOSE_THIRD_BRACKET
%token INPUT OUTPUT INPINT INPFLOT LOGIC_OR LOGIC_AND BITWISE_OPERATOR  ASSIGNMENT_OPERATOR  COMPARISON_OPERATOR INCREMENT_OPERATOR DECREMENT_OPERATOR POWER_OPERATOR
%token ADD_OPRTR MINUS_OPRTR MULTIPLY_OPRTR DIVISION_OPRTR 
%token HEADERR FUNC MATH_FLOOR MATH_CEIL MATH_ABS MATH_COSINE MATH_TAN MATH_POW
%token ICONST FCONST CCONST UMPERSAND

%left ADD_OPRTR MINUS_OPRTR
%left MULTIPLY_OPRTR DIVISION_OPRTR
%type <string> type statement
%type <string> declaration
%type <string> name var init
%type<fval>built_func expression
%start program
%%  

program: declarations statements func_kafka {printf("Compiled success\n");}
    |    MULTI_LINE_COMMENT program  { printf("multi line comment\n"); }
    |   HEADERR program { printf("headerrr\n"); }
    |   SINGLE_LINE_COMMENT program{ printf("single line comment\n"); }
;          
declarations:declarations declaration 
            | declaration
            
            ;
declaration : type name SEMI {
                        if(number_for_key($2))
						{
							printf("ERROR!!!%s is already declared\n", $2 );
						}
						else
						{
                             printf("Variable of type %s with name %s (one or more) declared\n",$1,$2);
							insert(&store[cnt],$2, cnt);
							cnt++;
							
						}

              } ;

type:  INTEZAR { $$ = "integer"; }
    | FLOT { $$ = "Float"; }
    | STR { $$ = "string"; }
    | CHARAC { $$ = "character"; }
    | BOOL { $$ = "boolean"; }
    | LONG { $$ = "long"; }
    ;

name : var { $$ = $1; }
     | name COMMA var { $$ = $3; }
     | name COMMA init { $$ = $3; }
     | init { $$ = $1; }
     ;

var: VARIABLE {   if(number_for_key($1)==0)
						{
							printf("ERROR!!!%s is not  declared before\n", $1 );
						}
}
        | pointer VARIABLE {printf("pointer variable\n");} |
        VARIABLE array {printf("array type\n");}          
;

pointer:  pointer MULTIPLY_OPRTR | MULTIPLY_OPRTR ;
array:   array OPEN_THIRD_BRACKET expression CLOSE_THIRD_BRACKET  {printf("array type\n");}
         | OPEN_THIRD_BRACKET expression CLOSE_THIRD_BRACKET {printf("array type\n");}
;

init : var_init | array_init ;
var_init : VARIABLE ASSIGNMENT_OPERATOR NUMBER {printf("Initialization of %s with value = %d\n",$1,$3);};

array_init : VARIABLE array ASSIGNMENT_OPERATOR OPEN_SECOND_BRACKET values CLOSE_SECOND_BRACKET {printf("array Initialization\n");} ;
values: values COMMA constant | constant ;

statements: statements statement | statement | ;

statement:
         if_block
         | for_block 
         | while_block
         | assignment
         | CONTINUE SEMI 
          |BRK SEMI
          |built_func {printf("built in function\n");}
          | func_call SEMI
           | built_func 
;

if_block : IF OPEN_BRACKET expression CLOSE_BRACKET extra else_if_part else_part {printf("If block\n");}
                | IF OPEN_BRACKET expression CLOSE_BRACKET extra else_part
                ;

else_if_part:
        else_if_part ELSIF OPEN_BRACKET expression CLOSE_BRACKET extra {printf("elsif found\n");}|
        ELSIF OPEN_BRACKET expression CLOSE_BRACKET extra {printf("elseif found\n");}|
                /* ephsilon */ 
;

else_part: ELSE extra 
        | /*ephsilon*/ 
;

for_block : FOO OPEN_BRACKET expression SEMI UNTIL COLON NUMBER SEMI expression CLOSE_BRACKET extra {int i;
                                                                                                                    for(i=0;i<$7;i++)
						                                                                                               {
						                          	                                                                   printf("For loop found %d\n",i);
						                                                                                                }
                                                                                                                        } ;

while_block : WHILE OPEN_BRACKET expression CLOSE_BRACKET extra {printf("while loop found\n");} ;

extra : statement SEMI 
        | OPEN_BRACKET statements CLOSE_BRACKET    
    ;


expression:
    expression ADD_OPRTR expression { $$ = $1 + $3;
      printf("%f + %f = %f\n", $1, $3, $$); // Print addition operation
     } // Addition
    | expression MINUS_OPRTR expression { $$ = $1 - $3;
    printf("%f - %f = %f\n", $1, $3, $$); } // Subtraction
    | expression MULTIPLY_OPRTR expression { $$ = $1 * $3;
    printf("%f * %f = %f\n", $1, $3, $$); } // Multiplication
    | expression DIVISION_OPRTR expression { $$ = $1 / $3;
    printf("%f / %f = %f\n", $1, $3, $$); } // Division
    | OPEN_BRACKET expression CLOSE_BRACKET // Parentheses
    | VARIABLE INCREMENT_OPERATOR // Increment
    | DECREMENT_OPERATOR VARIABLE // Decrement
    | expression LOGIC_OR expression // Logical OR
    | expression LOGIC_AND expression // Logical AND
    | expression COMPARISON_OPERATOR expression // Comparison
    | expression ASSIGNMENT_OPERATOR expression // Assignment
    | BOOL // Boolean value
    | var // Variable
    | sign constant // Signed constant
    | func_call // Function call
    | NUMBER { $$ = $1; } // Direct usage of the NUMBER token value 
    |
    ;

sign: "+" | "-" 
        |
        ;
constant : NUMBER ;
assignment :  var ASSIGNMENT_OPERATOR expression SEMI ;


/* build func */

built_func: MATH_SINE OPEN_THIRD_BRACKET NUMBER CLOSE_THIRD_BRACKET SEMI {
                             double x = (double)$3;double ans = sin(($3 * 3.1416) / 180.0);
                             printf("%f\n", (float)ans);
                              }
                   |FACTORIAL OPEN_BRACKET expression CLOSE_BRACKET SEMI   {
                                                          int ans=1 ,i;
						                             for(i=$3;i>0;i--)
						                               {
						                          	   ans=ans*i;
						                              }
						                                printf("factorial of %d is %d\n",$3,ans)
                                                        }
                    | PRIME OPEN_BRACKET expression CLOSE_BRACKET SEMI {
                                                         int check(int n)
                                                        {
                                                          if(n==1)
                                                         {
                                                             return 0;
                                                         }
                                                        if(n==2)
                                                        {
                                                             return 1;
                                                         }
                                                        if(n%2==0)
                                                        {
                                                          return 0;
                                                        }
                                                      int m = sqrt(n);
                                                     for(int i=3;i<=m+2;i+=2)
                                                       {
                                                          if(n%i==0)
                                                            {
                                                        return 0;
                                                           }
                                                        }
                                                      return 1;
                                                       }
                                                   int n=$3;
                                                  if(check(n)) 
                                                  {printf("%d is Prime.\n",$3);} 
                                                   else
                                                {printf("%d is not prime.\n",$3);}
                                                       }
                                                       ;
/*function call*/

func_call : VARIABLE OPEN_BRACKET Parameters CLOSE_BRACKET {printf("function call found\n");} ;

Parameters : Parameterone | STR | /*ephsilon*/
        ;
Parameterone : Parameterone COMMA expression | expression ;

/*functions defined */

func_kafka : functionGenz {printf("function defined\n");}
             | /* empty */
 ;

functionGenz : functionGenz function | function ;

function: function_er_matha function_er_bhitor ;

function_er_matha : FUNCT return_type VARIABLE OPEN_BRACKET func_er_variable CLOSE_BRACKET ;

return_type : type | type pointer ;

func_er_variable : varaiable_gula 
                | /* empty */
;
varaiable_gula : varaiable_gula COMMA sesh_variable | sesh_variable ;
sesh_variable : type var ;


function_er_bhitor : OPEN_BRACKET bhitore_declare bhitore_statement Ki_return_korbe CLOSE_BRACKET ;

bhitore_declare : declarations
                | /*kisu declare krlo na*/
;
bhitore_statement : statements
                   | /*faka function*/
;

Ki_return_korbe : RET expression SEMI {printf("function return\n");}
                | /*kisui return krlo na */
;

%%

void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

void yyerror(char *s)
{
	fprintf(stderr, "error: %s\nAt line : %d\n",s,Current_Line);
}

int main(void) {
freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);
yyparse();
}

