package Problemas;

import java.util.Scanner;

public class Main {
    public static void main(String [] args){
        Scanner entrada = new Scanner(System.in);
        String nombre;
        int peso, edad;
        Persona personas[] = new Persona[3];
        personas[0] = new Persona("Lucas",18,80);
        personas[1] = new Persona("XD",12,54);
        for(int i = 0; i < 2; i++){
            System.out.println(personas[i].getEdad());         
        }   
    }
}
