package Problemas;

public class Persona {
    String nombre;
    int edad, peso;
    
    public Persona(String n, int e, int p){
        nombre = n;
        edad = e;
        peso = p;
    }
    public String getNombre(){
        return nombre;
    }
    public void setNombre(String name){
        nombre = name;
    }
    public void presentarse(){
        System.out.println("Mi nombre es "+nombre+" tengo "+edad+" y peso "+peso);
    }
 
}
