/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Jan 27 2023
 * 
 * Cash Register Calculator
 */

import java.util.Scanner;
import java.text.NumberFormat;

public class CashReg {
    public static void main(String[] args) throws Exception {
        double drawerValue = 0;
        int[] drawerCounts = {0,0,0,0,0,0,0,0};
        double[] cashValues = {20, 10, 5, 1, .25, .1, .05, .01};
        String[] cashNames = {"$20 bills", "$10 bills", "$5 bills", 
            "$1 bills", "Quarters", "Dimes", "Nickles", "Pennies"};
        NumberFormat fmt1 = NumberFormat.getCurrencyInstance();
        Scanner myScan = new Scanner(System.in);
        System.out.println("Hey there Register Registrar! Let's count some cash!");
        for (int i =0; i < 8; i++){
            System.out.println("How many " + cashNames[i] + " do you have?");
            drawerCounts[i] = myScan.nextInt();
        }
        for (int i =0; i < 8; i++){
            System.out.printf("You entered %dx %s\n", drawerCounts[i],cashNames[i]);
            System.out.println("That's " + fmt1.format(cashValues[i] * drawerCounts[i]));
            drawerValue = drawerValue + (cashValues[i] * drawerCounts[i]);
        }
        System.out.println("Your total register value is: " + fmt1.format(drawerValue));
    }
}