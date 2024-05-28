package com.example;

import java.util.Scanner;

    public class Prompt {
            static String pmt(Scanner keyIn){
            System.out.print("> ");
            return keyIn.nextLine();
        }

}
