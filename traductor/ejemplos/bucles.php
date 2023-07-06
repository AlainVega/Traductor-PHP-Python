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
# Bucle for (falta traducir)
for ($i = 0; $i < 10; $i = $i + 1) {
    echo "falta";
}
?>