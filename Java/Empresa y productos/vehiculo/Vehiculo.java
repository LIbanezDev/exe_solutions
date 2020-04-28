package vehiculo;

public class Vehiculo {
    protected String nombre;
    protected int antiguedad;

    public Vehiculo(String nombre, int antiguedad){
        this.nombre = nombre;
        this.antiguedad = antiguedad;
    }

    public String getNombre(){
        return this.nombre;
    }
    public int getAntiguedad(){
        return this.antiguedad;
    }
    public void setNombre(String nombre){
        this.nombre = nombre;
    }
    public void setAntiguedad(int antiguedad){
        this.antiguedad = antiguedad;
    }
    public void tocarLaBocina(){}
}
