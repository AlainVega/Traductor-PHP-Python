<?php

$a = function($b, $c, $d="nada"){--$b +$c;};

true ? true : false;

function saludar($nombre="Alain", $apellido="Vega") {
    echo "Hola ".$nombre.$apellido." como estas?";
}

saludar();
saludar("carlos");
saludar("mathias", "martinez");

function sumar($num1=0, $num2=0) {
    return $num1 + $num2;
}

sumar();
sumar(1);
sumar(8,2);

return("Prueba");

function restar($num1=0, $num2=0) {
    return $num1 - $num2;
}

restar();
restar(1);
restar(9,8);

function mutiplicar($num1=0, $num2=0) {
    return $num1 * $num2;
}

mutiplicar();
mutiplicar(10);
mutiplicar(9,5);

function cuadrado($num1=0, $num2=0) {
    $resultado = $num1 * $num1;
    return $resultado;
}

?>