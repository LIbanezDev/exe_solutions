<!DOCTYPE html>
<html lang = "es">   
    <head>
        <meta charset = "UTF-8">
        <meta name = "viewport" content = "width = device-width, initial-scale=1.0">
        <meta http-equiv = "X-UA-COMPATIBLE" content = "ie = edge">
        <title>Registro Monkapp</title>
    </head>
    <body>
        <h2> Registro de usuarios </h2>
        <form action="Registrar_usuario.php" method = "POST">
            <input type="text" name = "nombre_usuario" placeholder = "Ingresar usuario"></br></br>
            <input type="password" name = "contrasena" placeholder = "Ingresar contraseña"></br></br>
            <input type="password" name = "contrasena2" placeholder = "Repetir contraseña"></br></br>
            <button type="submit"> Guardar </button>      
        </form>
        </br>
        <form action="Login.php" method = "POST">
            <input type="text" placeholder = "Usuario" name = "nombre_usuario"></br></br>
            <input type="password" placeholder = "Contraseña" name = "contrasena"></br></br>
            <button type="submit"> Iniciar sesion </button>     
        </form>
    </body>
</html>