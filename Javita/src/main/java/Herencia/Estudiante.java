package Herencia;

public class Estudiante extends Persona {
    private String marca;
    private int año;
    
    public Estudiante(String marca, int anho){
        this.marca = marca;
        this.año = anho;
    }  
    public String getMarca(){
        return marca;
    }
    public int getAnho(){
        return año;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }
    public void setAnho(int año){
        this.año = año;
    }
    public void datosAuto(){
        System.out.println("Marca "+marca+", Anho "+año);
    }

    @Override
    public void presentarse() {
        System.out.println("hOLA PANAS");
    }
}
