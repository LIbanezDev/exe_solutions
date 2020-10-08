package com.company.SecondOption;

import java.util.ArrayList;
import java.util.HashMap;

public class SecondOptionUtil {

    enum Type {
        LINE,
        DIAGONAL,
    }

    public static ArrayList<ArrayList<Integer>>
    calculateMatrix(ArrayList<ArrayList<Integer>> arrOne, ArrayList<ArrayList<Integer>> arrTwo,
                    char operation) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<>(0);
        for (int i = 0; i < arrOne.size(); i++) {
            ArrayList<Integer> partialResult = new ArrayList<>(0);
            for (int j = 0; j < arrOne.get(0).size(); j++) {
                if (operation == '+') {
                    partialResult.add(arrOne.get(i).get(j) + arrTwo.get(i).get(j));
                    continue;
                }
                partialResult.add(arrOne.get(i).get(j) * arrTwo.get(i).get(j));
            }
            result.add(partialResult);
        }
        return result;
    }

    public static int
    calculateMatrixLineDiagonal(ArrayList<ArrayList<Integer>> arr, Type type) {

        int result = 0;
        int size = arr.size();
        int centerPosition = arr.size() / 2;

        if (type == Type.DIAGONAL) {
            for (int i = 0; i < size; i++) {
                int actualValue = arr.get(i).get(i);
                result += actualValue;
            }
            int aux = arr.size() - 1;
            for (int i = 0; i < size; i++) {
                int actualValue = arr.get(i).get(aux);
                aux -= 1;
                result += actualValue;
            }
            result -= arr.get(centerPosition).get(centerPosition);
        }
        if (type == Type.LINE) {
            for (int i = 0; i < size; i++) {
                result += arr.get(i).get(centerPosition);
                result += arr.get(centerPosition).get(i);
            }
            result -= arr.get(centerPosition).get(centerPosition);
        }
        return result;
    }

    public static void
    printPerfectNumbers(ArrayList<ArrayList<Integer>> vector, String name) {
        // [Number, [x,y]] <=> Number = perfect n. && (x,y) = position
        HashMap<Integer, ArrayList<Integer>> perfects = new HashMap<>(0);
        for (int i = 0; i < vector.size(); i++) {
            for (int j = 0; j < vector.get(i).size(); j++) {
                int actualValue = vector.get(i).get(j);
                if (isPerfect(actualValue)) {
                    ArrayList<Integer> position = new ArrayList<>(0);
                    position.add(i);
                    position.add(j);
                    perfects.put(actualValue, position);
                }
            }
        }
        System.out.println("En el vector " + name + " hay " + perfects.size() + " numero/s perfecto/s. ");
        perfects.forEach(((key, value) -> {
            System.out.println(key + " se encuentra en la posicion ( " + value.get(0) + " , " + value.get(1) + " )");
        }));
    }

    private static boolean
    isPerfect(int number) {
        int suma = 0;
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                suma += i;
            }
        }
        return number == suma;
    }

    public static void
    printMatrix(ArrayList<ArrayList<Integer>> matrix, String name) {
        System.out.println(name + ": ");
        for (int i = 0; i < matrix.size(); i++) {
            System.out.println(i + ": " + matrix.get(i).toString());
        }
        System.out.println("----------------------");
    }
}
