package com.company.SecondOption;

import java.util.ArrayList;
import static com.company.FirstOption.FirstOptionUtil.getRandomVector;
import static com.company.SecondOption.SecondOptionUtil.*;

public class SecondOption {

    public static void secondOption() {
        ArrayList<ArrayList<Integer>> AAA = new ArrayList<>();
        ArrayList<ArrayList<Integer>> BBB = new ArrayList<>();

        for (int i = 0; i < 5; i++) {
            AAA.add(getRandomVector(1, 100, 5));
            BBB.add(getRandomVector(1, 100, 5));
        }
        printMatrix(AAA, "AAA");
        printMatrix(BBB, "BBB");

        int lineAAA = calculateMatrixLineDiagonal(AAA, Type.LINE);
        int diagonalAAA = calculateMatrixLineDiagonal(AAA, Type.DIAGONAL);
        int lineBBB = calculateMatrixLineDiagonal(BBB, Type.LINE);
        int diagonalBBB = calculateMatrixLineDiagonal(BBB, Type.DIAGONAL);

        System.out.println("Diagonal A: " + diagonalAAA + "\nDiagonal B: " + diagonalBBB);
        System.out.println("Linea A: " + lineAAA + "\nLinea B: " + lineBBB);

        ArrayList<ArrayList<Integer>> CCC = calculateMatrix(AAA, BBB, '*');
        printMatrix(CCC, "Multiplicacion AAA * BBB");

        ArrayList<ArrayList<Integer>> DDD = calculateMatrix(AAA, BBB, '+');
        printMatrix(DDD, "Suma AAA + BBB");

        printPerfectNumbers(AAA, "AAA");
        printPerfectNumbers(BBB, "BBB");
    }

}
