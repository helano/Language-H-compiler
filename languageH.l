
ID_FUNCAO [F][a-zA-Z][a-zA-Z0-9|_]*
ID_VARIAVEL [V][a-zA-Z][a-zA-Z0-9|_]*
TEXTO ([a-z]|[A-Z])+
INTEIRO 0|[1-9][0-9]*
DOUBLE ([0-9]+)[.]([0-9]+)
IGNORE [\n| |\t|\r]
LINE_COMMENT [//][//]([A-Z]|[a-z]|[0-9])*
BLOCK_COMMENT [//][*]([A-Z]|[a-z]|[0-9]|[\n| |\t|\r])*[*][//]


%%



{BLOCK_COMMENT}		{printf("BLOCK COMMENT : %s\n" ,yytext);} 
{LINE_COMMENT}      {printf("LINE COMMENT : %s\n" ,yytext);}
{INTEIRO}			{printf(" INTEGER: %s\n" ,yytext);}
{DOUBLE}			{printf(" DOUBLE: %s\n" ,yytext);}
{ID_VARIAVEL}       {printf("VARIABLE ID : %s\n" ,yytext);}
{ID_FUNCAO}         {printf("FUNCTION ID: %s\n" ,yytext);}

if					{printf("RESERVED WORD: %s\n" ,yytext);}
else				{printf("RESERVED WORD: %s\n" ,yytext);}
int				    {printf("RESERVED WORD: %s\n" ,yytext);}
double				{printf("RESERVED WORD: %s\n" ,yytext);}
text				{printf("RESERVED WORD: %s\n" ,yytext);}
for				    {printf("RESERVED WORD: %s\n" ,yytext);}
void				{printf("RESERVED WORD: %s\n" ,yytext);}
switch				{printf("RESERVED WORD: %s\n" ,yytext);}
case 				{printf("RESERVED WORD: %s\n" ,yytext);}
break				{printf("RESERVED WORD: %s\n" ,yytext);}
default				{printf("RESERVED WORD: %s\n" ,yytext);}
boolean				{printf("RESERVED WORD: %s\n" ,yytext);}
and					{printf("LOGIC OPERATOR: %s\n" ,yytext);}
or					{printf("LOGIC OPERATOR: %s\n" ,yytext);}
"!"					{printf("LOGIC OPERATOR: %s\n" ,yytext);}
"-"					{printf("ARITHMETIC OPERATOR: %s\n" ,yytext);}
"*"					{printf("ARITHMETIC OPERATOR: %s\n" ,yytext);}
"/"					{printf("ARITHMETIC OPERATOR: %s\n" ,yytext);}
"+"					{printf("ARITHMETIC OPERATOR:: %s\n" ,yytext);}
"="					{printf("ASSIGNMENT OPERATOR: %s\n" ,yytext);}
"=="				{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}
"!="				{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}	
">"					{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}
"<"					{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}
"<="				{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}	
">="				{printf("RELATIONAL OPERATOR: %s\n" ,yytext);}
"{"					{printf("OPEN BRACE: %s\n" ,yytext);}	
"}"					{printf("CLOSE BRACE: %s\n" ,yytext);}
"("					{printf("OPEN PARENTHESIS: %s\n" ,yytext);}
")"					{printf("CLOSE PARENTHESIS: %s\n" ,yytext);}
"["					{printf("OPEN BRAKET: %s\n" ,yytext);}
"]"					{printf("CLOSE BRAKET: %s\n" ,yytext);}
";"					{printf("LINE ENDING: %s\n" ,yytext);}

{TEXTO}             {printf(" TEXT STRING: %s\n" ,yytext);} 
{IGNORE}			{}
.					{printf("UNKNOWN: %s\n" ,yytext);}
	 



%%

int yywrap();

int main(void)
{
	yylex();
	return 0;
}
int  yywrap()
{
	return 1;
}