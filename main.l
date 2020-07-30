%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "main.tab.h"
%}
variable [a-zA-Z]*
digit [0-9]
header		"import ".*
Comment		[#].*
CommentMulti "##"[^##]*"##"

%%
{digit}+	{yylval.val = atoi(yytext); return NUMBER; }
"CASE" 			{return CASE;}
"SWITCH" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
"SHOW" 	{return SHOW; } 
"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"ELSEIF"       {return ELSEIF; }
"[" 		   {return BS;  }
"]"  		   {return BE;	}
"LOOP" 		   {return LOOP;}
"WHILE"		   {return WHILE;}
"FACTORIAL"		{return FACTORIAL;}
"ODDEVEN"		{return ODDEVEN;}
"SIN"		   {return SIN;}
"COS"          {return COS;}
"INTEGER"  		{return INT;}
"CHAR" 		     {return CHAR;}
"FLOAT"			 {return FLOAT;}
"ARRAY"			{return ARRAY;}
"PLUS"			{return PLUS;}
"MINUS"         {return MINUS;}
"MUL"           {return MUL;}
"DIV"           {return DIV;}
"MOD"           {return MOD;}
"CODESTART"	   {printf("\nCODESTART function started\n"); return CODESTART; }
{Comment}		{printf("\nSingle line comment found :: ");ECHO;printf("\n");}
{CommentMulti}		{printf("\nMulti line comment found :: ");ECHO;printf("\n");}
{header}  				{printf("\nHeader file found :\n");ECHO;printf("\n");}
[-+/*<>=,():;%^]     {	return yytext[0];	}
{variable}	    {ECHO;printf("\n"); strcpy(yylval.text,yytext); return	VAR; }

[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown syntax : %s\n",yytext);}


%%