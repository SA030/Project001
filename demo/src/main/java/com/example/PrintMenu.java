package com.example;

public class PrintMenu {

    static final String[] MENUS = {
        "1. WorkSpace",
        "2. List",
        "3. Help",
        "4. Exit"
    };
    
    static void printMenu(){
        System.out.println("[WorkSpace Management]\n");
        
        for (String menu : MENUS){
            System.out.println(menu);
        }
    }
}
