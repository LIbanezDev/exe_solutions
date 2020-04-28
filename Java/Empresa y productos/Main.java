import vehiculo.*;
import empresa.*;

public class Main {
    public static void main(String[] args){
        Vehiculo[] vehiculos = new Vehiculo[4];
        vehiculos[0] = new Auto("1er auto", 2010, false);
        vehiculos[1] = new Auto("2do auto", 2005, true);
        vehiculos[2] = new Moto("1era moto", 2018, true);
        vehiculos[3] = new Moto("2da moto", 1999, true);

        for (Vehiculo vehiculo:vehiculos) {
            vehiculo.tocarLaBocina();
        }
    }
}

