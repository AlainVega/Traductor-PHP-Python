<?php

# La sintaxis del bucle foreach de php puede tener estas 3 opciones

# Opcion 1
$arr = array("alain", "vega");
foreach ($arr as $palabra) {
    echo "palabra: ".$palabra;
}

# Opcion 2
foreach ([1, true, "test"] as $i) {
    print $i;
}

# Opcion 3
foreach (array(1,2,3, "hello") as $valor) {
    echo $valor;
}

?>
