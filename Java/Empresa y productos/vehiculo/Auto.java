package vehiculo;

public class Auto extends Vehiculo {

    private boolean puertasTraseras;

    public Auto(String nombre, int antiguedad, boolean puertasTraseras) {
        super(nombre, antiguedad);
        this.puertasTraseras = puertasTraseras;
    }
    public void tocarLaBocina(){
        System.out.println("pe pe pe dijo el auto");
    }
}
