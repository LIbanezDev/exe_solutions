package Problemas;

public class Persona {
    
    private String nombre;
    private int edad, peso;
    
    public Persona(String nombre, int edad, int peso){
        this.nombre = nombre;
        this.edad = edad;
        this.peso = peso;
    }
    public String getNombre(){
        return nombre;
    }
    public void setNombre(String nombre){
        this.nombre = nombre;
    }
    public int getEdad(){
        return edad;
    }
    public void setEdad(int edad){
        this.edad = edad;
    }  
    public int getPeso(){
        return peso;
    }
    public void setPeso(int peso){
        this.peso = peso;
    }    
    public void presentarse(){
        System.out.println("Mi nombre es "+nombre+" tengo "+edad+" y peso "+peso);
    }
 
}
