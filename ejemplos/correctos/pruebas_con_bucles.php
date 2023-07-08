<?php
// Bucle while
while (1<2) {
    $a = 1;
    $b = 2;
    break;
}
# Bucles for each
$arr = array("alain", "vega");
foreach ($arr as $palabra) {
    echo "palabra".$palabra;
}
foreach ([1, true, "test"] as $i) {
    echo $i;
}
foreach (array(1,2,3, "hello") as $valor) {
    echo $valor;
}
# Bucle for
for ($i = 0; $i < 10; $i = $i + 1) {
    echo "falta";
}

$resultado = 0;
for ($j = 1; $j <= 100; $j++) {
    $resultado = $j*2 -$j;
}

?>