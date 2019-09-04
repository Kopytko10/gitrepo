<?php
// skroty.php
    echo "Funkcje skrótu: ";
    $tekst = 'Tekst, który chcę skrocić, pewniaczki na efortuna lubię obstawiać bo są pewne,ala ma kota kot ma ale ale ale PIO PIO PIO ';
    $tekst2 = 'Dekst, który chcę skrocić, pewniaczki na efortuna lubię obstawiać bo są pewne,ala ma kota kot ma ale ale ale PIO PIO PIO ';
    echo "\n";
    echo hash('sha1', $tekst);
    echo "\n";
    echo hash('sha1', $tekst2);
    echo "\n";
    echo hash('sha256', $tekst);
    echo "\n";
    echo hash('sha256', $tekst2);
    
?>
