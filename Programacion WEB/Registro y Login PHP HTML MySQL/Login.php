<?php
    session_start();

    include_once 'conexion_dbs/conexion.php';
    $usuario = $_POST['nombre_usuario'];
    $password =$_POST['contrasena'];

    $sql = 'SELECT * FROM usuarios WHERE nick = ?';    
    $sentencia = $pdo->prepare($sql);  
    $sentencia->execute(array($usuario));       // Verificando usuario duplicado   
    $resultado = $sentencia->fetch();       // Devuelve arreglo 

    if(!$resultado){
        echo'<script type="text/javascript">
        alert("Usuario o contraseña incorrectos");
        window.location.href="index.php";
        </script>';
        die();
    }

    if(password_verify($password, $resultado['contrasena'])){
        
        $_SESSION['user'] = $usuario;  
        header('Location:Pag_principal.php');
    
    }else{
        echo'<script type="text/javascript">
        alert("Usuario o contraseña incorrectos");
        window.location.href="index.php";
        </script>';
        die();
    }
?>