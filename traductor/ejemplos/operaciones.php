<?php

$a = 5 + 4;
$x = 3;
$y = 6;
$z = $x + $y - $a;
echo $z;

$b = 3 + 2 * 2;
echo $b;

$c = 15;
echo $b * $c;

$str1 = "Hola";
$str2 = "Mathias";
$str3 = $str1 . " " . $str2;
echo $str3;

$bool1 = true;
$bool2 = false;
echo $bool1 && $bool2;
echo $bool1 || $bool2;

# MOD, XOR, NOT
$variable = 7 % 2;
$xor = (1==1) ^ false;
$imprimir = !$xor;
echo $imprimir;

# Operadores de pre-incremento y pre-decremento
$var = 10;
echo ++$var;
$var++;
$var--;
++$var;
--$var;

# Asignacion multiple
$var1 = $var2 = $var++;
$var1 = $var = $var2 = $c--;

$variable = -10;

$variable2 = -$variable++;

$variable2 === $variable;
$variable2 !== $variable;
$variable2 <> $variable;

#comentario
$variable += $variable;
$variable -= $variable;
$variable *= $variable;
$variable /= $variable;
$variable **= $variable;
$variable %= $variable;
$variable .= $variable;

1 <> 1;

?>