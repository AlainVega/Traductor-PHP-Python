<?php

$x = array(1, 2, "x", "hola");
array_push($x, [1, 2, 3]);
$z = array_pop($x);
echo $z;

?>