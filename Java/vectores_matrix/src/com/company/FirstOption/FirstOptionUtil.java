package com.company.FirstOption;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class FirstOptionUtil {

    public static Scanner scanner = new Scanner(System.in);  // Create a Scanner object

    static void printArrays(ArrayList<Integer> aOne, ArrayList<Integer> aTwo) {
        System.out.println("A: " + aOne.toString());
        System.out.println("B: " + aTwo.toString());
    }

    static void printMathOperations(ArrayList<Integer> arrOne, ArrayList<Integer> arrTwo, char operation) throws Exception {

        if (arrOne.size() != arrTwo.size()) throw new Exception("Los arreglos no tienen el mismo tamanho!!");
        if (operation == '/' || operation == '%') {
            ArrayList<Double> div = new ArrayList<>(0);
            for (int i = 0; i < arrOne.size(); i++) {
                double result = ((double) arrTwo.get(i) / (double) arrOne.get(i));
                div.add(Math.floor(result * 100) / 100);
            }
            System.out.println(div.toString());
        } else {
            ArrayList<Integer> results = new ArrayList<>(0);
            for (int i = 0; i < arrOne.size(); i++) {
                if (operation == '+') {
                    results.add(arrOne.get(i) + arrTwo.get(i));
                } else if (operation == '-') {
                    results.add(arrOne.get(i) - arrTwo.get(i));
                } else if (operation == '*' || operation == 'x' || operation == 'X') {
                    results.add(arrOne.get(i) * arrTwo.get(i));
                } else {
                    throw new Exception("Operacion no identificada.");
                }
            }
            System.out.println(results.toString());
        }
    }

    public static ArrayList<Integer> getRandomVector(int from, int to, int times) {
        ArrayList<Integer> values = new ArrayList<>(0);
        for (int i = 0; i < times; i++) {
            int random_int_one = (int) (Math.random() * (to - 1 + from) + from);
            values.add(random_int_one);
        }
        return values;
    }

    static void printDuplicates(ArrayList<Integer> vector, String vectorName) {
        // [value, [positions]]
        HashMap<Integer, ArrayList<Integer>> integers = new HashMap<>(0);
        for (int i = 0; i < vector.size(); i++) {
            boolean foundKey = false;
            for (Integer integer : integers.keySet()) {
                if (integer.equals(vector.get(i))) {
                    ArrayList<Integer> newListWithOnePosMore = integers.get(integer);
                    newListWithOnePosMore.add(i);
                    integers.replace(i, newListWithOnePosMore);
                    foundKey = true;
                    break;
                }
            }
            if (!foundKey) {
                ArrayList<Integer> newList = new ArrayList<>(0);
                newList.add(i);
                integers.put(vector.get(i), newList);
            }
        }
        integers.forEach((key, value) -> {
            if (value.size() > 1) {
                System.out.println("En el vector " + vectorName + " el valor " + key + " se repite " + value.size() + " " +
                        "veces en las posiciones: " + value.toString());
            }
        });
    }

    static ArrayList<Integer> getSortedArray(ArrayList<Integer> array) {
        int n = array.size();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (array.get(j - 1) > array.get(j)) {
                    int aux = array.get(j - 1);
                    array.set(j - 1, array.get(j));
                    array.set(j, aux);
                }
            }
        }
        return array;
    }
}
