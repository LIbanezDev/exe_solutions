package Problemas;

public class Auto {
    String m;
    int a;
    
    public Auto(String marca, int anho){
        m = marca;
        a = anho;
    }
    public String getMarca(){
        return m;
    }
    public int getAnho(){
        return a;
    }
    public void setMarca(String marca){
        m = marca;
    }
    public void setAnho(int anho){
        a = anho;
    }
    public void datosAuto(){
        System.out.println("Marca "+m+", Anho "+a);
    }
}
