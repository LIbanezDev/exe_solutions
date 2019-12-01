<?php
    session_start();

    if(isset($_SESSION['user'])){           // Si el usuario inicia sesion se le muestra lo sgte
        echo 'Bienvenido! '. $_SESSION['user'];
        echo '<br><a href = "Cerrar_sesion.php"> Cerrar sesión </a>';
    }else{              // Si el usuario entra a Pag_principal sin haberse logeado se le redirigirá a la pagina principal
        header('Location:index.php');
    }


?>