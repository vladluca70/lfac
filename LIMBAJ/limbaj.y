%{
#include <iostream>
#include <vector>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
int errorCount = 0;
%}
%union 
{
     char* string;
}
%token  BGIN END ASSIGN NR 
%token<string> ID TYPE CLASS EMPTY_CLASS IF ELSE WHILE FOR 
%token<string> EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL NOT_EQUAL AND OR 
%token<string> INCREMENT DECREMENT VOID _TRUE _FALSE RETURN CLASS_ACCESS_MODIFIERS CONSTRUCTOR CLASS_CALL PRINT TYPEOF
%token<string> PLUS MINUS DIV MULTIPLICATION MODULO DESTRUCTOR
%start progr
%%
progr :  declarations main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

declarations : decl           
	      |  declarations decl    
           | declarations arrays
           |arrays
           |empty_class
           |declarations empty_class
           |declarations _if
           |_if
           |declarations _while
           |_while
           |declarations _for
           |_for
           |function
           |declarations function
           |classes
           |declarations classes
           |constructor
           |declarations constructor
           |destructor
           |declarations destructor
	      ;


decl       :  TYPE ID ';' { 
                              if(!current->existsId($2)) {
                                    current->addVar($1,$2);
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
              | TYPE ID  '(' list_param ')' ';'

           ;

list_param : param
            | list_param ','  param 
            ;
            
param : TYPE ID 
     ; 
      
/////////////////////////////////////////vector
arrays: TYPE ID array_dimensions ';'
               { 
                    if(!current->existsId($2)) 
                    {
                         current->addVar($1,$2);
                    } 
                    else 
                    {
                         errorCount++; 
                         yyerror("Variable already defined");
                    }
               }
          ;

array_dimensions: '[' NR ']' 
               |    '[' NR ']' array_dimensions 
               ;
/////////////////////////////////////////////////


//////////////////////////////////////////empty_class
empty_class: EMPTY_CLASS ID '{' '}'
               { 
                    if(!current->existsId($2)) 
                    {
                         current->addVar($1,$2);
                    } 
                    else 
                    {
                         errorCount++; 
                         yyerror("Variable already defined");
                    }
               }
          ;
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////operators_and_conditions
operators: EQUAL| LESS| LESS_EQUAL| GREATER| GREATER_EQUAL| NOT_EQUAL;

conditions: ID operators ID
          | NR operators NR
          |ID operators NR
          |NR operators ID
          ;
/////////////////////////////////////////////////////////////




////////////////////////////////////////////if
_if: IF '(' conditions ')'
     |IF '(' conditions ')' '{' declarations '}'
     |IF '(' conditions ')' '{' declarations '}' _else
          ;

_else: ELSE '{' declarations '}'
          |ELSE '{' declarations '}' _else
          ;
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////while

_while: WHILE '(' conditions ')' '{' '}'
          |WHILE '(' conditions ')' '{' while_body '}'
          ;

while_body: declarations
          ;
/////////////////////////////////////////////////////////



////////////////////////////////////////////////////////for

_for: FOR '(' for_first_part ';' for_second_part ';' for_third_part ')'
     |FOR '(' for_first_part ';' for_second_part ';' for_third_part ')' '{' '}'
     |FOR '(' for_first_part ';' for_second_part ';' for_third_part ')' '{' declarations '}'
     ;

for_first_part: TYPE ID ASSIGN NR;
for_second_part: conditions;
for_third_part: ID INCREMENT| ID DECREMENT;
///////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////function

function: TYPE ID '(' ')' '{' declarations RETURN possible_return_values ';' '}'
          |VOID ID '(' ')' '{' declarations '}'
          |TYPE ID '(' function_antet ')' '{' declarations RETURN  possible_return_values ';' '}'
          |VOID ID '(' function_antet ')' '{' declarations '}'
          { 
               if(!current->existsId($2)) 
               {
                    current->addVar($1,$2);
                         
               } 
               else 
               {
                    errorCount++; 
                    yyerror("Variable already defined");
               }
          }
          ;

function_antet:  ID
               |ID ',' function_antet
               ;

possible_return_values: NR| _TRUE| _FALSE| ID;

//////////////


////////////////////////////////////////////////////class

classes: CLASS ID '{' class_body '}'
          { 
               if(!current->existsId($2)) 
               {
                    current->addVar($1,$2);
                         
               } 
               else 
               {
                    errorCount++; 
                    yyerror("Variable already defined");
               }
          }
          ;

class_body: CLASS_ACCESS_MODIFIERS decl class_body;
          |declarations
          ;

constructor: CONSTRUCTOR ID '(' ')' '{' '}'
               |CONSTRUCTOR ID '(' ')' '{' declarations '}'
               ;

destructor: DESTRUCTOR ID '(' ')' '{' '}' ';'
               ;

///////////////////////////////////////////////////////////


main : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     |decl
     |list decl
     |_if
     |list _if
     |arrays
     |list arrays
     |_while
     |list _while
     |_for
     |list _for
     |function_call
     |list function_call
     |instance_of_class
     |list instance_of_class
     |print
     |list print
     |typeof
     |list typeof
     |assign_with_arithmetic_expressions
     |list assign_with_arithmetic_expressions
     ;

statement: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' call_list ')'
         ;
        
call_list : NR
           | call_list ',' NR
           ;

function_call: ID '(' function_antet ')' ';' ;
          

instance_of_class: ID CLASS_CALL CLASS ID ';' ;

typeof: TYPEOF '(' expr ')' ';' ;

print: PRINT '(' expr ')' ';' ;

expr: ID| NR| TYPE| conditions;

arithmetic_operators: MODULO|PLUS|MINUS|DIV|MULTIPLICATION;

assign_with_arithmetic_expressions: TYPE ID ASSIGN NR arithmetic_operators NR  arithmetic_expr_rec ';'
                    | TYPE ID ASSIGN '(' NR arithmetic_operators NR  arithmetic_expr_rec ')' ';'
                    | TYPE ID ASSIGN '(' NR arithmetic_operators NR  arithmetic_expr_rec ')' arithmetic_expr_rec ';'
                    ;

arithmetic_expr_rec: arithmetic_operators NR 
                    |arithmetic_expr_rec arithmetic_operators NR 
                    |arithmetic_operators '(' NR arithmetic_operators NR arithmetic_expr_rec ')'
                    |arithmetic_operators '(' NR arithmetic_operators NR  ')'
                    ;


%%
void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     yyparse();
     cout << "Variables:" <<endl;
     current->printVars();
     delete current;
} 