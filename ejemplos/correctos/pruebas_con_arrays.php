<?php

$x = array(1, 2, "x", "hola");
$y = array_push($x, [1, 2, 3]);
$z = array_pop($x);
echo $z;

if ($x[0] == 1) {
    $z = array_pop($x);
    echo $z;
}

$arr = [1,2,3];

$suma = array_sum($arr);

$suma2 = array_sum([1,2]);

?>