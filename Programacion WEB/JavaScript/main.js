var boton = document.getElementById("boton");

boton.onmouseover = function(){
    boton.style.color = "red";
}
boton.onmouseout = function(){
    boton.style.color = "black";
}
boton.onmousedown = function(){
    boton.style.color = "blue";
}