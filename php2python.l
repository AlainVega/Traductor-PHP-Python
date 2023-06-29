%{    
    #include "php2python.tab.h"
%}

%option noyywrap

/* Definicion de ciertas expresiones regulares que se utilizaran en el analizador lexico */
/* Segun la documentacion de PHP los nombres de las variables son case sensitive
   mientras que los nombres de las funciones (incluso las definidas por el usuario)
   no lo son.
   Fuentes: 
   - https://www.php.net/manual/en/functions.user-defined.php
   - https://www.php.net/manual/en/language.variables.basics.php
*/

digit       [0-9]
startPHP    (<\?php)
endPHP      (\?>)
id          \$([a-zA-Z_][a-zA-Z_0-9]*)
name	    [a-zA-Z_][a-zA-Z0-9_]*
string      (\"(\\.|[^"\\])*\"|\'(\\.|[^"\\])*\')
bool	    ([Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee])
array       ([Aa][Rr][Rr][Aa][Yy])
arraypop    ([Aa][Rr][Rr][Aa][Yy]_[Pp][Oo][Pp])
arraypush   ([Aa][Rr][Rr][Aa][Yy]_[Pp][Uu][Ss][Hh])
arraysum    ([Aa][Rr][Rr][Aa][Yy]_[Ss][Uu][Mm])
echo        ([Ee][Cc][Hh][Oo])
print       ([Pp][Rr][Ii][Nn][Tt])
if          ([Ii][Ff])
else	    ([Ee][Ll][Ss][Ee])
elseif	    ([Ee][Ll][Ss][Ee][Ii][Ff])
switch	    ([Ss][Ww][Ii][Tt][Cc][Hh])
case	    ([Cc][Aa][Ss][Ee])
break	    ([Bb][Rr][Ee][Aa][Kk])
default	    ([Dd][Ee][Ff][Aa][Uu][Ll][Tt])
function	([Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn])
while	    ([Ww][Hh][Ii][Ll][Ee])
foreach	    ([Ff][Oo][Rr][Ee][Aa][Cc][Hh])
as	        ([Aa][Ss])
return      ([Rr][Ee][Tt][Uu][Rr][Nn])

%%

{startPHP}   {return SPHP;}
{id}    {yylval.str = (char *) strdup(yytext); return ID;}
\n|\t   {;}
"="	    {return EQ;}
";"	    {return SC;}
":"	    {return CL;}
","	    {return CM;}
"+"	    {return PLUS;}
"-"	    {return MINS;}
"/"	    {return DIV;}
"*"	    {return MULT;}
"%"	    {return MD;}
"."     {return CCTN;}
"=="    {return EEQ;}
"!="	{return NEQ;}
">"	    {return GT;}
"<"	    {return LT;}
">="	{return GE;}
"<="	{return LE;}
"&&"	{return AND;}
"||"	{return OR;}
"++"	{return PPL;}
"--"	{return MMN;}
"|"	    {return SOR;}
"!"	    {return NOT;}
"["	    {return SQ1;}
"]"	    {return SQ2;}
"("	    {return RD1;}
")"	    {return RD2;}
"{"	    {return CR1;}
"}"	    {return CR2;}
{endPHP}     {return EPHP;}
{digit}+     {yylval.str = (char *) strdup(yytext); return NUM;}
{bool}       {yylval.str = (char *) strdup(yytext); return BOOL;}
{string}     {yylval.str = (char *) strdup(yytext); return STR;}
{foreach}    {return FRC;}
{as}	     {return AS;}
{array}	     {return ARR;}
{arraypop}   {return APOP;}
{arraypush}  {return APUS;}
{arraysum}   {return ASUM;}
{echo}	     {return ECH;}
{print}      {return PRNT;}
{if}         {return IF;}
{else}	     {return ELSE;}
{elseif}	 {return ELIF;}
{switch}	 {return SWIH;}
{case}	     {return CASE;}
{break}	     {return BRK;}
{default}	 {return DFT;}
{function}   {return FUNC;}
{while}	     {return WHIL;}
{return}     {return RTN;}
{name}       {return NAME;}

%%
