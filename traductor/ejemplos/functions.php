<?php

function conArgumentos($a=12, $b=13, $c="texto", $d="texto") {
    echo "hola que tal?";
    echo " adios";
    return true;
}

function sinArgumentos() {
    echo "hola que tal?";
    echo " adios";
}

$a = conArgumentos();
$c = 10;
$b = sinArgumentos($c);
$d = conArgumentos(1,2, "hola", true);

return 1;

?>