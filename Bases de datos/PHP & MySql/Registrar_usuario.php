<?php
    include_once 'conexion_dbs/conexion.php';
    $usuario = $_POST['nombre_usuario'];
    $contrasena = $_POST['contrasena'];
    $contrasena2 = $_POST['contrasena2'];
   
    $sql = 'SELECT * FROM usuarios WHERE nick = ?';  
    
    $sentencia = $pdo->prepare($sql);
    
    $sentencia->execute(array($usuario));       // Verificando usuario duplicado
    
    $resultado = $sentencia->fetch();       // Devuelve arreglo 
    
    if($resultado){                                 // en caso de ya estar en uso el user alerta al usuario
        echo'<script type="text/javascript">   /
        alert("Usuario ya en uso");
        window.location.href="index.php";
        </script>';
        die();
    }

    $contrasena = password_hash($contrasena, PASSWORD_DEFAULT);     //Encriptar contraseña

    if(password_verify($contrasena2, $contrasena)){     // Verificar si contraseña 1 y 2 son iguales
        
        $sentencia = 'INSERT INTO usuarios(nick, contrasena) VALUES (?, ?)';
        $s = $pdo->prepare($sentencia);
        $s->execute(array($usuario, $contrasena));      // Registrando usuario en database 
        $s = NULL;
        $pdo = NULL; // Cierra conexion
        
        echo'<script type="text/javascript">
        alert("Registrado satisfactoriamente");     
        window.location.href="index.php";
        </script>';         // sign up satisfactorio
                  
    }else{
        $s = NULL;
        $pdo = NULL; // Cierra conexion         en caso de las pass no ser iguales alerta al usuario
        echo'<script type="text/javascript">
        alert("Ingrese contraseñas iguales!!!!!");
        window.location.href="index.php";
        </script>';
    }
?>