package com.company.General;

import static com.company.FirstOption.FirstOptionUtil.scanner;

public class Util {
    public static int insertOption() {
        System.out.println(
                "| Menu principal |\n| 1.- Vectores\n| 2.- Matrices\n" +
                        "| 3.- Antecedentes\n| 4.- Salir"
        );
        System.out.println("Ingrese opcion: ");
        return scanner.nextInt();
    }
}
