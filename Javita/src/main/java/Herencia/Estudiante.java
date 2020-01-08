package Herencia;

import javax.swing.JOptionPane;

public class Estudiante extends Persona {
    private String marca;
    private int año;
    
    public Estudiante(String nombre, int edad, int peso){
        this.nombre = nombre;
        this.edad = edad;
        this.peso = peso;
    }  
    public void setDatos(){
        nombre = JOptionPane.showInputDialog("Ingrese nombre de persona: ");
        edad = Integer.parseInt(JOptionPane.showInputDialog("Ingrese edad de persona: "));
        peso = Integer.parseInt(JOptionPane.showInputDialog("Ingrese peso de persona: "));      
    }
    public void getDatos(){
        JOptionPane.showMessageDialog(null, "Nombre: " + nombre + ", edad: " + edad + ", peso: " + peso, "Datos de la persona", 1);
    }
    
}
