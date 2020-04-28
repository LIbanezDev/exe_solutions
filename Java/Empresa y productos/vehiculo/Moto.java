package vehiculo;

public class Moto extends Vehiculo{
    private boolean bocina;
    public Moto(String nombre, int antiguedad, boolean bocina){
        super(nombre, antiguedad);
        this.bocina = bocina;
    }
    public void tocarLaBocina(){
        System.out.println("pi pi pi dijo la moto");
    }

}
