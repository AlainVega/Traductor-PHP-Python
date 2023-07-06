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

?>