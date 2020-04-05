/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.ejerciciosenjava;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Principal {
    public static void main(String [] args){
        Scanner entrada = new Scanner(System.in);
        int n, k; // n  = numero a adivinar, k = numero digitado por el usuario
        // Rango de numero generado 
        int max = 200; 
        int min = 1; 
        int range = max - min + 1; 
        int numero_generado = 0;
        for (int i = 0; i < 10; i++) { 
            numero_generado = (int)(Math.random() * range) + min; 
        } 
        n = numero_generado;
        do{
            k = Integer.parseInt(JOptionPane.showInputDialog("Ingrese su numero"));
            int h = n - k;
            if(h <= 3 && h > 0 || h >= -3 && h < 0){
                JOptionPane.showMessageDialog(null, "Demasiado cerca! (0 - 3)");
            }else if(h <= 10 && h > 3 || h >= -10 && h < -3){
                JOptionPane.showMessageDialog(null, "Muy cerca! ( 0 - 10)");
            }else if(h <= 30 && h > 10 || h >= -30 && h < -10){
                JOptionPane.showMessageDialog(null, "Medianamente cerca! (0 - 30)");
            }else if(h > 30||  h < -30){
                JOptionPane.showMessageDialog(null, "Muy Lejos! ( 30+ )");
            }                     
        }while(k != n);      
       JOptionPane.showMessageDialog(null, "Numero encontrado!");      
    }
}

