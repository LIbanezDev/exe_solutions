package com.company;

import static com.company.FirstOption.FirstOption.firstOption;
import static com.company.SecondOption.SecondOption.secondOption;
import static com.company.ThirdOption.ThirdOption.thirdOption;
import static com.company.General.Util.insertOption;

public class Main {
    public static void main(String[] args) throws Exception {
        int option = 0;
        while (option != 4) {
            option = insertOption();
            switch (option) {
                case 1:
                    firstOption();
                    break;
                case 2:
                    secondOption();
                    break;
                case 3:
                    thirdOption();
                    break;
                default:
                    break;
            }
        }
    }
}
