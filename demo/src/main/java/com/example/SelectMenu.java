package com.example;

import java.util.Scanner;

public class SelectMenu {
    static void selmenu(Scanner keyIn) {
        
        System.out.println("Please Enter");
        
        loop:
        while(true){
            String input = Prompt.pmt(keyIn);
            switch(input){
                case "1":
                    System.out.println("num 1\n");
                    break;
                case "2":
                    System.out.println("num 2\n");
                    break;
                case "3":
                    System.out.println("num 3\n");
                    break;
                case "4":
                    System.out.println("num 4\n");
                    break loop;
                case "menu":
                    PrintMenu.printMenu();
                    break;
                default:
                    System.out.println("error\n");
            }
        }
        
    }

}
