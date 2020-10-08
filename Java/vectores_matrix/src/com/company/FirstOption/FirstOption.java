package com.company.FirstOption;

import java.util.ArrayList;
import static com.company.FirstOption.FirstOptionUtil.*;

public class FirstOption {

    public static void firstOption() throws Exception {

        ArrayList<Integer> oneToOneHundred = getRandomVector(1, 100, 10);
        ArrayList<Integer> oneHundredToOHFifty = getRandomVector(101, 150, 10);

        printArrays(oneToOneHundred, oneHundredToOHFifty);

        printDuplicates(oneToOneHundred, "A");
        printDuplicates(oneHundredToOHFifty, "B");

        System.out.println("Presione enter para ver los arreglos ordenados...");
        scanner.nextLine();

        ArrayList<Integer> oneToOneHundredSorted = getSortedArray(oneToOneHundred);
        ArrayList<Integer> oneHundredToOHFiftySorted = getSortedArray(oneHundredToOHFifty);
        printArrays(oneToOneHundredSorted, oneHundredToOHFiftySorted);

        System.out.println("Presione enter para ver las operaciones...");
        scanner.nextLine();

        System.out.println("Suma:");
        printMathOperations(oneToOneHundredSorted, oneHundredToOHFiftySorted, '+');
        System.out.println("Resta:");
        printMathOperations(oneToOneHundredSorted, oneHundredToOHFiftySorted, '-');
        System.out.println("Multiplicacion:");
        printMathOperations(oneToOneHundredSorted, oneHundredToOHFiftySorted, '*');
        System.out.println("Division:");
        printMathOperations(oneToOneHundredSorted, oneHundredToOHFiftySorted, '/');
        System.out.println("\n");
    }

}
