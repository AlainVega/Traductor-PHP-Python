%{
    #include <stdio.h>
    #include "functions.h"
    #include "symboltable.h"
    // Estos valores se utilizan como tipo para la tabla de symbolos
    #define VAR 0
    #define FUN 1
    int yylex(void);
    int yyerror(char *message);
    extern int yylineno;
    int tabcount = 0;
    // 0: No es array, 1: Es un array.
    // Sirve para marcar el contexto durante una declaracion para agregar el simbolo a la tabla.
    int is_variable_array = 0;
%}

%start program
%union
{
	int intval;
	char *id;
	char *str;	
}
%locations

/* Declaracion de los Tokens necesarios */
/* Palabras reservadas ademas etiquedas inicio php y fin php */
%token <str> ID STR NUM ECH BOOL NAME CMNT
%token SPHP EPHP FRC AS ARRY ARPO ARPS ASUM
        IF ELSE ELIF SWIH CASE BRK CONT DFT FUNC WHIL FOR RTN PRNT

/* 
   Simbolos aritmeticos, de asignacion, igualdad, desigualdad
   logicos, gramaticales, etc. 
*/
%token EQ SC CL COMM PLUS MINS DIV MULT MOD CCTN EEQ NEQ GT LT AND OR 
        PPL MMN XOR NOT OSQB CSQB OPRT CPRT OBRC CBRC QUES NOEQ NEEE EEEQ 

%type <str> expr declaration echo conditional parameters return while statementInWhileBlock statementInFunctionBlock functionDefinition arguments argument 
%type <str> defaultValue functionCall break continue foreach for anonymousFunctionStatement print case cases switch

/* 
   Las siguientes reglas de precedencia y asociatividad fueron sacadas de la
   documentación de PHP.
   https://www.gnu.org/software/bison/manual/bison.html#Precedence-Decl
*/
%left MOD MULT DIV PLUS MINS CCTN AND OR XOR QUES CL COMM LTLT GTGT BAND BOR BXOR
%right EQ NOT PPL MMN EXPO PLEQ MNEQ MUEQ EXEQ DIEQ MOEQ COEQ OREQ ADEQ XOEQ LLEQ GGEQ BNOT ICAS FCAS BCAS SCAS ACAS
%nonassoc GT LT GTE LTE NEQ EEQ EEEQ NEEE NOEQ

%%

program: SPHP {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();} statements EPHP {printf("Se encontro el final del tag de PHP\n");};
statements: 
    %empty
    | statements statement
;
statement:
    declaration SC {printf("Se reconocio una declaracion\n"); write_declaration($1);}
    | expr SC {printf("Se reconocio la expresion: %s\n", $1); write_expression($1);}
    | echo SC {printf("Se reconocio un echo\n"); write_echo($1);}
    | print SC {printf("Se reconocio un print\n"); write_echo($1);}
    | conditional {printf("Se reconocio una condicional\n"); write_if($1);}
    | switch {printf("Se reconocio un bloque switch\n"); write_switch($1);}
    | while {printf("Se reconocio un bucle while\n"); write_while($1);}
    | foreach {printf("Se reconocio un bucle foreach\n"); write_foreach($1);}
    | for {printf("Se reconocio un bucle foreach\n"); write_for($1);}
    | functionDefinition {printf("Se reconocio la definicion de una funcion\n"); write_function($1);}
    | return SC {printf("Se reconocio un retorno global\n"); write_return(translate_return($1));}
    | CMNT {printf("Se reconocio un comentario de linea: %s\n", $1); write_one_line_comment(format_one_line_comment($1));}
;
declaration: ID EQ expr {$$=format_declaration($1, " = ", $3); if (is_variable_array == 1) {put_symbol(format_variable($1), VAR, 0, 0, is_variable_array); is_variable_array=0;} else {put_symbol(format_variable($1), VAR, 0, 0, is_variable_array);};}
    | ID EQ declaration {$$=format_declaration($1, " = ", $3);}
    | ID PLEQ expr {$$=format_declaration($1, " += ", $3);}
    | ID MNEQ expr {$$=format_declaration($1, " -= ", $3);}
    | ID MUEQ expr {$$=format_declaration($1, " *= ", $3);}
    | ID DIEQ expr {$$=format_declaration($1, " /= ", $3);}
    | ID EXEQ expr {$$=format_declaration($1, " **= ", $3);}
    | ID MOEQ expr {$$=format_declaration($1, " %= ", $3);}
    | ID COEQ expr {$$=format_declaration($1, " += ", $3);}
    | ID ADEQ expr {$$=format_declaration($1, " &= ", $3);}
    | ID OREQ expr {$$=format_declaration($1, " |= ", $3);}
    | ID XOEQ expr {$$=format_declaration($1, " ^= ", $3);}
    | ID LLEQ expr {$$=format_declaration($1, " <<= ", $3);}
    | ID GGEQ expr {$$=format_declaration($1, " >>= ", $3);}
;
echo: ECH expr {$$=format_echo($2, tabcount);};
print: PRNT expr {$$=format_echo($2, tabcount);};
conditional: 
    IF OPRT expr CPRT statementinifblock {printf("Se encontro un if\n"); tabcount++; $$=format_if($3);};
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC {printf("Se encontro un if con bloque\n"); tabcount++; $$=format_if($3);}
    | IF OPRT expr CPRT statementinifblock ELSE statementinelseblock {printf("Se encontro un if else\n"); tabcount++; $$=format_if_else($3);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE statementinelseblock {printf("Se encontro un if con bloque y else\n"); tabcount++; $$=format_if_else($3);}
    | IF OPRT expr CPRT statementinifblock ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if y else con bloque\n"); tabcount++; $$=format_if_else($3);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if con bloque y else con bloque\n"); tabcount++; $$=format_if_else($3);}
    | IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock {printf("Se encontro un if elseif else\n"); $$=format_if_elseif_else($3, $8);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE statementinelseblock {printf("Se encontro un if con bloque elseif else\n"); $$=format_if_elseif_else($3, $10);}
    | IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock {printf("Se encontro un if elseif con bloque else\n"); $$=format_if_elseif_else($3, $8);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE statementinelseblock {printf("Se encontro un if con bloque elseif con bloque else\n"); $$=format_if_elseif_else($3, $10);}
    | IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if elseif else con bloque\n"); $$=format_if_elseif_else($3, $8);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT statementinelifblock ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if con bloque elseif else con bloque\n"); $$=format_if_elseif_else($3, $10);}
    | IF OPRT expr CPRT statementinifblock ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if con bloque elseif else con bloque\n"); $$=format_if_elseif_else($3, $8);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELIF OPRT expr CPRT OBRC statementsinelifblock CBRC ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if con bloque elseif con bloque else con bloque\n"); $$=format_if_elseif_else($3, $10);}
;
statementsinifblock: 
    %empty
    | statementsinifblock statementinifblock {printf("Se redujo el scope\n"); tabcount--;}
;
statementinifblock:
    declaration SC {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array($1);}
    | return SC {printf("Se encontro un retorno dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array(translate_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un if\n", $1); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
statementsinelseblock: 
    %empty
    | statementsinelseblock statementinelseblock {printf("Se redujo el scope\n"); tabcount--;}
;
statementinelseblock:
    declaration SC {printf("Se encontro una declaracion dentro de un else\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_else_block_counter(); add_statement_to_array($1);}
    | conditional {printf("Se encontro una condicional dentro de un else\n"); write_if($1);}
    | return SC {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array(translate_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un else\n", $1); add_statement_to_if_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
statementsinelifblock: 
    %empty
    | statementsinelifblock statementinelifblock {printf("Se redujo el scope\n"); tabcount--;}
;
statementinelifblock:
    declaration SC {printf("Se encontro una declaracion dentro de un else\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_elif_block_counter(); add_statement_to_array($1);}
    | conditional {printf("Se encontro una condicional dentro de un else\n"); write_if($1);}
    | return SC {printf("Se encontro un retorno dentro de un else\n"); add_statement_to_elif_block_counter(); add_statement_to_array(translate_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un else\n", $1); add_statement_to_elif_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
switch: SWIH OPRT ID CPRT OBRC cases CBRC {$$=format_switch(format_variable($3), $6);};
cases: %empty {$$="";}
    | cases case {$$=add_case_to_cases($1, $2);}

;
case: CASE expr CL statementsInSwitchCase BRK SC {$$=format_case($2);}
    | DFT CL statementsInSwitchCase {$$=format_case_default();}
;
statementsInSwitchCase: %empty
    | statementsInSwitchCase statementInSwitchCase 
;
statementInSwitchCase: 
    declaration SC {printf("Se encontro una declaracion dentro de un switch\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array($1);}
    | return SC {printf("Se encontro un retorno dentro de un switch\n"); add_statement_to_switch_block_counter(); add_statement_to_array(translate_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un switch\n", $1); add_statement_to_switch_block_counter(); add_statement_to_array(format_one_line_comment($1));}
while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC {printf("Se encontro un while con bloque\n"); tabcount++; $$=format_while($3);};
statementsInWhileBlock: 
    %empty
    | statementsInWhileBlock statementInWhileBlock {printf("Se redujo el scope\n"); tabcount--;}
;
statementInWhileBlock: 
    declaration SC {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | conditional {printf("Se encontro una condicional dentro de un while\n");}
    | return SC {printf("Se encontro un retorno dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array(translate_return($1));}
    | break SC {printf("Se encontro una sentencia break dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | continue SC {printf("Se encontro una sentencia continue dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un while\n", $1); add_statement_to_while_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
break: BRK {$$="break";};
continue: CONT {$$="continue";};
functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", $2, $4); tabcount++; $$=format_function($4, $2); put_symbol($2, FUN, reset_obligatory_argument_counter(), reset_optional_argument_counter(), 0);};
statementsInFunctionBlock: 
    %empty
    | statementsInFunctionBlock statementInFunctionBlock {printf("Se redujo el scope\n"); tabcount--;}
;
statementInFunctionBlock: 
    declaration SC {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array($1);}
    | return SC {printf("Se encontro un retorno dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array(format_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de una funcion\n", $1); add_statement_to_function_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
return: RTN expr {printf("Se encontro un retorno de: %s\n", $2); $$=$2;};
anonymousFunctionStatement:
    declaration SC {printf("Se reconocio una declaracion\n");}
    | expr SC {printf("Se reconocio la expresion: %s\n", $1);}
    | echo SC {printf("Se reconocio un echo\n");}
    | print SC {printf("Se reconocio un print\n");}
    | conditional {printf("Se reconocio una condicional\n");}
    | while {printf("Se reconocio un bucle while\n");}
    | foreach {printf("Se reconocio un bucle foreach\n");}
    | for {printf("Se reconocio un bucle foreach\n");}
    | functionDefinition {printf("Se reconocio la definicion de una funcion\n");}
    | return SC {printf("Se reconocio un retorno global\n");}
    | CMNT {printf("Se reconocio un comentario de linea: %s\n", $1);}
expr: 
    NUM {$$=$1;}
    | STR {$$=$1;}
    | ID {printf("Se encontro una variable en una expresion\n"); $$=format_variable($1);}
    | BOOL {printf("Se encontro un booleano\n"); $$=format_boolean($1);}
    | functionCall {printf("Se encontro una llamada a funcion\n");}
    | PLUS expr {printf("Se encontro una expresion positiva\n"); $$=format_operation("", "+", $2);}
    | MINS expr {printf("Se encontro una expresion negativa\n"); $$=format_operation("", "-", $2);}
    | expr PLUS expr {printf("Se encontro una suma\n"); $$=format_operation($1, " + ", $3);}
    | expr MINS expr {printf("Se encontro una resta\n"); $$=format_operation($1, " - ", $3);}
    | expr MULT expr {printf("Se encontro una multiplicacion\n"); $$=format_operation($1, " * ", $3);}
    | expr DIV expr {printf("Se encontro una division\n"); $$=format_operation($1, " / ", $3);}
    | expr MOD expr {printf("Se encontro una operacion modulo\n"); $$=format_operation($1, " % ", $3);}
    | expr EXPO expr {printf("Se encontro una exponenciacion\n"); $$=format_operation($1, " ** ", $3);}
    | expr CCTN expr {printf("Se encontro una concatenacion\n"); $$=format_operation($1, " + ", $3);}
    | PPL expr {printf("Se encontro un pre-incremento\n"); $$=format_pre_increment($2);}
    | expr PPL {printf("Se encontro un pos-incremento\n"); $$=format_post_increment($1);}
    | MMN expr {printf("Se encontro un pre-decremento\n"); $$=format_pre_decrement($2);}
    | expr MMN {printf("Se encontro un pos-incremento\n"); $$=format_post_decrement($1);}
    | NOT expr {printf("Se encontro una negacion logica\n"); $$=format_operation("", "not ", $2);}
    | BNOT expr {printf("Se encontro una negacion bit a bit\n"); $$=format_operation("", "~", $2);}
    | expr AND expr {printf("Se encontro una conjuncion logica\n"); $$=format_operation($1, " and ", $3);}
    | expr BAND expr {printf("Se encontro una conjuncion bit a bit\n"); $$=format_operation($1, " & ", $3);}
    | expr OR expr {printf("Se encontro una disyuncion logica\n"); $$=format_operation($1, " or ", $3);}
    | expr BOR expr {printf("Se encontro una disyuncion bit a bit"); $$=format_operation($1, " | ", $3);}
    | expr XOR expr {printf("Se encontro una disyuncion exclusiva logica\n"); $$=format_operation($1, " ^ ", $3);}
    | expr BXOR expr {printf("Se encontro una disyuncion exclusiva bit a bit\n"); $$=format_operation($1, " ^ ", $3);}
    | expr GT expr {printf("Se encontro un mayor que \n"); $$=format_operation($1, " > ", $3);}
    | expr LT expr {printf("Se encontro un menor que \n"); $$=format_operation($1, " < ", $3);}
    | expr GTE expr {printf("Se encontro un mayor o igual que \n"); $$=format_operation($1, " >= ", $3);}
    | expr LTE expr {printf("Se encontro un menor o igual que \n"); $$=format_operation($1, " <= ", $3);}
    | expr EEQ expr {printf("Se encontro un igual que \n"); $$=format_operation($1, " == ", $3);}
    | expr EEEQ expr {printf("Se encontro un identico que === \n"); $$=format_operation($1, " == ", $3);}
    | expr NEQ expr {printf("Se encontro un diferente que != \n"); $$=format_operation($1, " != ", $3);}
    | expr NOEQ expr {printf("Se encontro un diferente que <> \n"); $$=format_operation($1, " != ", $3);}
    | expr NEEE expr {printf("Se encontro un no identico que !== "); $$=format_operation($1, " != ", $3);}
    | expr LTLT expr {printf("Se encontro un desplazamiento de bits a la izquierda \n"); $$=format_operation($1, " <<= ", $3);}
    | expr GTGT expr {printf("Se encontro un desplazamiento de bits a la derecha \n "); $$=format_operation($1, " >>= ", $3);}
    | ARRY OPRT parameters CPRT {printf("Se encontro la definicion de un array con array()\n"); is_variable_array=1; $$=format_array();}
    | OSQB parameters CSQB {printf("Se encontro la definicion de un array con []\n"); is_variable_array=1; $$=format_array();}
    | OPRT expr CPRT {printf("Se encontro una expresion encerrada entre parentesis\n"); $$=format_operation("(", $2, ")");}
    | expr QUES expr CL expr {printf("Se encontro un operador ternario con 1: %s, 2: %s y 3: %s\n", $1, $3, $5), $$=format_ternary_operator($1, $3, $5);}
    | FUNC OPRT arguments CPRT OBRC anonymousFunctionStatement CBRC {printf("Se encontro una funcion anonima con argumentos: %s, y linea: %s\n", $3, $6); $$=format_anonymous_function($3, $6);}
    | ID OSQB NUM CSQB {printf("Se encontro un acceso a un elemento de un array\n"); if (is_array_variable(format_variable($1)) == 0) {yyerror("La variable no es un array"); YYERROR;}; $$=format_array_access($1, $3);}
    | ARPS OPRT ID COMM parameters CPRT {printf("Se encontro una llamada a array_push\n"); is_variable_array=0; $$=format_array_push($3);}
    | ARPO OPRT ID CPRT {printf("Se encontro una llamada a array_pop\n"); $$=format_array_pop($3);}
    | ASUM OPRT ID CPRT {printf("Se encontro una llamada a array_sum\n"); $$=format_array_sum($3);}
    | ASUM OPRT parameters CPRT {printf("Se encontro una llamada a array_sum\n"); is_variable_array=0; $$=format_array_sum($3);}
    | ICAS expr {printf("Se encontro una conversion a tipo entero\n"); $$=format_int_cast($2);}
    | FCAS expr {printf("Se encontro una conversion a tipo flotante\n"); $$=format_float_cast($2);}
    | BCAS expr {printf("Se encontro una conversion a tipo booleano\n"); $$=format_bool_cast($2);}
    | SCAS expr {printf("Se encontro una conversion a tipo cadena\n"); $$=format_string_cast($2);}
    | ACAS expr {printf("Se encontro una conversion a tipo arreglo\n"); $$=format_array_cast($2);}
;
functionCall: NAME OPRT arguments CPRT {printf("Se encontro una llamada a la funcion %s\n", $1); if (is_argument_count_correct($1, $3) == 0) {yyerror("Cantidad de argumentos incorrectos para la llamada de una funcion"); YYERROR;} else {$$=format_function_call($1, $3);};};
parameters:
    %empty {$$=NULL;}
    | expr {printf("Se encontro la expresion %s como un parametro\n", $1); $$=$1; add_param_to_queue($1);}
    | parameters COMM expr {printf("Se encontro una expresion (%s) separada por comas como parametros\n", $3); add_param_to_queue($3);}
;
arguments:
    %empty {$$="";}
    | argument 
;
argument: 
    argument COMM argument {$$=load_all_arguments($1, $3);}
    | ID {printf("Se encontro la variable %s como un argumento\n", $1); $$=format_variable($1); add_to_obligatory_argument_counter();}
    | ID EQ defaultValue {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", $1, $3); $$=format_default_argument(format_variable($1), $3); add_to_optinal_argument_counter();}
    | defaultValue /*uso para el caso de una llamada a funcion. Ej: f(1, "hola") y para el argumento del foreach. Ej: foreach([1, "true"] as $i) {}*/
;
defaultValue:
    NUM {$$=$1;}
    | STR {$$=$1;}
    | BOOL {printf("Se encontro un booleano\n"); $$=format_boolean($1);}
;
foreach: FRC OPRT ID AS ID CPRT OBRC statementsInForeach CBRC {printf("Se encontro un foreach con variable\n"); tabcount++; $$=format_foreach1(format_variable($3), format_variable($5));}
    | FRC OPRT ARRY OPRT arguments CPRT AS ID CPRT OBRC statementsInForeach CBRC {printf("Se encontro un foreach con constructor y parametros: %s\n", $5); tabcount++; $$=format_foreach2($5, format_variable($8));}
    | FRC OPRT OSQB arguments CSQB AS ID CPRT OBRC statementsInForeach CBRC {printf("Se encontro un foreach con [] y parametros: %s\n", $4); tabcount++; $$=format_foreach2($4, format_variable($7));}
;
statementsInForeach: %empty
    | statementsInForeach statementInForeach {printf("Se redujo el scope\n"); tabcount--;}
;
statementInForeach:
    declaration SC {printf("Se encontro una declaracion dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array($1);}
    | return SC {printf("Se encontro un retorno dentro de un foreach\n"); add_statement_to_foreach_block_counter(); add_statement_to_array(format_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un foreach\n", $1); add_statement_to_foreach_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
for: 
    FOR OPRT declaration SC expr SC declaration CPRT OBRC statementsInFor CBRC {printf("Se encontro un for\n"); tabcount++; $$=format_for($3, $5, $7);}
    | FOR OPRT declaration SC expr SC expr CPRT OBRC statementsInFor CBRC {printf("Se encontro un for\n"); tabcount++; $$=format_for($3, $5, $7);};    
;
statementsInFor: %empty
    | statementsInFor statementInFor {printf("Se redujo el scope\n"); tabcount--;}
;
statementInFor: 
    declaration SC {printf("Se encontro una declaracion dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array($1);}
    | print SC {printf("Se encontro un echo dentro de una for\n"); add_statement_to_for_block_counter(); add_statement_to_array($1);}
    | return SC {printf("Se encontro un retorno dentro de un for\n"); add_statement_to_for_block_counter(); add_statement_to_array(format_return($1));}
    | CMNT {printf("Se encontro un comentario de linea: %s, dentro de un for\n", $1); add_statement_to_for_block_counter(); add_statement_to_array(format_one_line_comment($1));}
;
%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s en la linea %d\n", message, yylineno);
    return -1;
}