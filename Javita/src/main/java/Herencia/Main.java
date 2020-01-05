package Herencia;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class Main {
    public static void main(String [] args){
        int xd;
        float f;
        String cadena = JOptionPane.showInputDialog("Ingrese cadena de caracteres.");
        xd = Integer.parseInt(JOptionPane.showInputDialog("Ingrese entero"));
        f = Float.parseFloat(JOptionPane.showInputDialog("Ingrese float"));
        JOptionPane.showMessageDialog(null, "La cadena es: " + cadena);
        JOptionPane.showConfirmDialog(null, "viejo lesbiano");
        System.out.println("Datos ingresados: " + cadena + " " + xd + " " + f);
                
         
    }
}
