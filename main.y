%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	char valname[1009][1009];
	int data[1009];
	int idx=1;
	int isDeclared(char *now){
		for(int i=1;i<idx;i++){
			if(strcmp(valname[i],now)==0){
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)!=0)return 0;
		strcpy(valname[idx],now);
		data[idx]=0;
		idx++;
	}
	int getVal(char *now){
		return data[isDeclared(now)];
	}
	int setVal(char *now,int v){
		int id = isDeclared(now);
		data[id] = v;
	}
%}

/* bison declarations */
%union{
	char text[1009];
	int val;
}
%token<val>NUMBER
%type<val>expression
%type<val>statement
%token<text>VAR
%token IF PLUS MINUS MUL DIV MOD ELSE ELSEIF ARRAY CODESTART INT FLOAT CHAR BS BE LOOP WHILE ODDEVEN SHOW SIN COS FACTORIAL CASE DEFAULT SWITCH
%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE
%left '<' '>'
%left PLUS MINUS
%left MUL DIV

/* Grammar rules and actions follow.  */

%%

program: CODESTART ':' BS line BE {printf("Main function END\n");}
	 ;

line: /* NULL */

	| line statement
	;

statement: ';'			
	| declaration ';'		{  }

	| expression ';' 			{   printf("value of expression: %d\n", $1); $$=$1;
		printf("\n\n\n\n");
		}
	
	| VAR '=' expression ';' { 
							printf("\nValue of the variable: %d\n",$3);
							setVal($1,$3);
							//data[$1]=$3;
							$$=$3;
							printf("\n\n\n\n");
						} 

	| IF '(' expression ')' BS statement BE %prec IFX {
								if($3){
									printf("\nvalue of expression in IF: %d\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n\n\n");
							}

	| IF '(' expression ')' BS statement  BE ELSE BS statement BE  {
								if($3){
									printf("value of expression in IF: %d\n",$6);
								}
								else{
									printf("value of expression in ELSE: %d\n",$10);
								}
								printf("\n\n\n\n");
							}
	| IF '(' expression ')' BS statement  BE ELSEIF '(' expression ')' BS statement BE ELSE BS statement BE {
									if($3){
									printf("value of expression in IF: %d\n",$6);
								}
								else{
									printf("value of expression in ELSE: %d\n",$17);
								}
								printf("\n\n\n\n");
	}


    | WHILE '(' NUMBER '<' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("WHILE Loop execution");
	                                for(i=$3 ; i<$5 ; i++) {printf("\niteration loop: %d  :  \n", i);}
	                                printf("\n\n\n\n");
	                                								
				               }


	| LOOP '(' NUMBER ',' NUMBER ',' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("Loop execution");
	                                for(i=$3 ; i<$5 ; i=i+$7 ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,$10);}
	                                printf("\n\n\n\n");

				               }


	| SHOW '(' expression ')' ';' {printf("\nPrint Expression %d\n",$3);
		printf("\n\n\n\n");}

	| FACTORIAL '(' NUMBER ')' ';' {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,f);
		printf("\n\n\n\n");

		}

	| ODDEVEN '(' NUMBER ')' ';' {
		printf("Odd Even Number detection \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is :%d is -> Odd\n",$3);
		}
		printf("\n\n\n\n");
		}

	| ARRAY TYPE VAR '(' NUMBER ')' ';' {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY is : %d\n",$5);
	}

	| SWITCH '(' NUMBER ')' BS SWITCHCASE BE {
		printf("\nSWITCH CASE Declaration\n");
        printf("\n\n\n\n");
	}
	;
	

	
declaration : TYPE ID1   {printf("\nvariable Dection\n");
		printf("\n\n\n\n");}
            ;


TYPE : INT   {printf("interger declaration\n");}
     | FLOAT  {printf("float declaration\n");}
     | CHAR   {printf("char declaration\n");}
     ;



ID1 : ID1 ',' VAR {
	int res = addNewVal($3);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	} 
    |VAR {
		int res = addNewVal($1);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	}  
    ;

 SWITCHCASE: casegrammer
 			|casegrammer defaultgrammer
 			;

 casegrammer: /*empty*/
 			| casegrammer casenumber
 			;

 casenumber: CASE NUMBER ':' expression ';' {printf("Case No : %d & expression value :%d \n",$2,$4);}
 			;
 defaultgrammer: DEFAULT ':' expression ';' {
 				printf("\nDefault case & expression value : %d",$3);
 			}
 		;


expression: NUMBER					{  $$ = $1;  }

	| VAR						{ $$ = getVal($1); }
	
	| expression PLUS expression	{printf("\nAddition :%d+%d = %d \n",$1,$3,$1+$3 );  $$ = $1 + $3;}

	| expression MINUS expression	{printf("\nSubtraction :%d-%d=%d \n ",$1,$3,$1-$3); $$ = $1 - $3; }

	| expression MUL expression	{printf("\nMultiplication :%d*%d \n ",$1,$3,$1*$3); $$ = $1 * $3; }

	| expression DIV expression	{ if($3){
				     					printf("\nDivision :%d/%d \n ",$1,$3,$1/$3);
				     					$$ = $1 / $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero\n\t");
				  					} 	
				    			}
	| expression MOD expression	{ if($3){
				     					printf("\nMod :%d % %d \n",$1,$3,$1 % $3);
				     					$$ = $1 % $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
	| expression '^' expression	{printf("\nPower  :%d ^ %d \n",$1,$3,$1 ^ $3);  $$ = pow($1 , $3);}
	| expression '<' expression	{printf("\nLess Than :%d < %d \n",$1,$3,$1 < $3); $$ = $1 < $3 ; }
	
	| expression '>' expression	{printf("\nGreater than :%d > %d \n ",$1,$3,$1 > $3); $$ = $1 > $3; }

	| '(' expression ')'		{	 $$ = $2; }
	| SIN expression 			{printf("\nValue of Sin(%d) is : %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);}

    | COS expression 			{printf("\nValue of Cos(%d) is : %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);}
	
	;
%%


int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}
