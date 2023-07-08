<?php

if (1 > 1) {
    echo "Esto esta en un if\n";
}
elseif (1 < 2) {
    echo "Esto esta en un elseif\n";
}
else {
    echo "Esto esta en un else\n";
}

$i = 2;
switch ($i) {
    case 0:
        echo "i es igual a 0";
        echo "i sigue valiendo 0";
        break;
    case 1:
        echo "i es igual a 1";
        echo "i sigue valiendo 1";
        break;
    case 2:
        echo "i es igual a 2";
        echo "i sigue valiendo 2";
        break;
    default:
        echo "i no es 0 ni 1 ni 2";
        echo "i sigue valiendo ni 0 ni 1 ni 2";
}

?>