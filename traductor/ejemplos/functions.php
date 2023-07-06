<?php

//Este es un comentario estilo C
# Este es otro comentario pero estilo python
function conArgumentos($a=12, $b=13, $c="texto", $d="texto") {
    echo "hola que tal?";
    echo " adios";
    //Ahora voy a retornar true
    return true;
}

function sinArgumentos() {
    echo "hola que tal?";
    echo " adios";
    # este no retorna nada
}

$a = conArgumentos();
$c = 10;
$b = sinArgumentos($c);
$d = conArgumentos(1,2, "hola", true);

return 1==1;

if (1 == 1) {
    $op = 10;
    //Do something

    # Hace algo
}

while (1 == 1) {
    echo "hola";
    # funciona al parecer
}

$a = function($b, $c, $d="nada"){++$b -2*$c;};

?>