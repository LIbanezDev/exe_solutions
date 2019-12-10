package Problemas;

public class Main {
    public static void main(String [] args){
        Persona lucas = new Persona("lucas", 18, 80);
        Auto autito = new Auto("Honda", 1995);
        lucas.presentarse();
        autito.datosAuto();       
    }
}
