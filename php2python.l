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
continue    ([Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee])
default	    ([Dd][Ee][Ff][Aa][Uu][Ll][Tt])
function	([Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn])
while	    ([Ww][Hh][Ii][Ll][Ee])
for         ([Ff][Oo][Rr])
foreach	    ([Ff][Oo][Rr][Ee][Aa][Cc][Hh])
as	        ([Aa][Ss])
return      ([Rr][Ee][Tt][Uu][Rr][Nn])
comment     (\/\/.*)|(#.*)
and         ([Aa][Nn][Dd])
or          ([Oo][Rr])
xor         ([Xx][Oo][Rr])

%%

{startPHP}   {return SPHP;}
{id}    {yylval.str = (char *) strdup(yytext); return ID;}
\n|\t   {;}
"="	    {return EQ;}
";"	    {return SC;}
":"	    {return CL;}
","	    {return COMM;}
"+"	    {return PLUS;}
"-"	    {return MINS;}
"/"	    {return DIV;}
"*"	    {return MULT;}
"**"    {return EXPO;}
"%"	    {return MOD;}
"."     {return CCTN;}
"=="    {return EEQ;}
"==="   {return EEEQ;}
"!="	{return NEQ;}
"!=="   {return NEEE;}
"<>"    {return NOEQ;}
">"	    {return GT;}
"<"	    {return LT;}
">="	{return GTE;}
"<="	{return LTE;}
{and}   {return AND;}
"&&"	{return AND;}
"&"     {return BAND;}
{or}    {return OR;}
"||"	{return OR;}
"|"     {return BOR;}
{xor}   {return XOR;}
"^"	    {return BXOR;}
"++"	{return PPL;}
"--"	{return MMN;}
"!"	    {return NOT;}
"~"     {return BNOT;}
"+="    {return PLEQ;}
"-="    {return MNEQ;}
"*="    {return MUEQ;}
"**="   {return EXEQ;}
"/="    {return DIEQ;}
"%="    {return MOEQ;}
".="    {return COEQ;}
"|="    {return OREQ;}
"&="    {return ADEQ;}
"^="    {return XOEQ;}
"<<="   {return LLEQ;}
">>="   {return GGEQ;}
"["	    {return OSQB;}
"]"	    {return CSQB;}
"("	    {return OPRT;}
")"	    {return CPRT;}
"{"	    {return OBRC;}
"}"	    {return CBRC;}
"?"     {return QUES;}
"<<"    {return LTLT;}
">>"    {return GTGT;}
{endPHP}     {return EPHP;}
{digit}+     {yylval.str = (char *) strdup(yytext); return NUM;}
{bool}       {yylval.str = (char *) strdup(yytext); return BOOL;}
{string}     {yylval.str = (char *) strdup(yytext); return STR;}
{foreach}    {return FRC;}
{as}	     {return AS;}
{array}	     {return ARRY;}
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
{continue}   {return CONT;}
{default}	 {return DFT;}
{function}   {return FUNC;}
{while}	     {return WHIL;}
{for}        {return FOR;}
{return}     {return RTN;}
{name}       {yylval.str = (char *) strdup(yytext); return NAME;}
{comment}    {yylval.str = (char *) strdup(yytext); return CMNT;}

%%
