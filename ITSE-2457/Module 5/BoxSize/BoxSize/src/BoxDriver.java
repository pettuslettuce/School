/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Mar 18 2023
 * Module 5 Lab 2
 * Box Size Driver
 */

import java.util.Scanner;


public class BoxDriver {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        //Program User prompts:

        System.out.print("Box length: "); //Length of Box
        int length = userInput.nextInt();

        System.out.print("Box height: "); //Width of Box
        int height = userInput.nextInt();

        System.out.print("Enter symbol: "); //The character used for the visual box display
        char symbol = userInput.next().charAt(0);

        Box box = new Box(length, height, symbol);

        System.out.println("This is a " + box.getShapeType()); //The getshapteType will return a string indicating if the box is a rectangle or a square
        System.out.println(box.drawBox()); //The DrawBox function will return a string of the Box display using the characters

        userInput.close();
    }
}
