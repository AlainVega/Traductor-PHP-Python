<?php

function saludar($nombre="Alain", $apellido="Vega") {
    echo "Hola ".$nombre." ".$apellido." como estas?";
}

saludar();
saludar("Carlos");
saludar("Mathias", "Martinez");

?>