package Problemas;

public class Auto {
    private String marca;
    private int año;
    
    public Auto(String marca, int anho){
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
}
