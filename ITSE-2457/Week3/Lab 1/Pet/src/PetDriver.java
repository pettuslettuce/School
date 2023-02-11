/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 6 2023
 * Module 3 Lab 1
 * Pet
 */
import java.util.Scanner;
public class PetDriver {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        String petName = " ";
        String petType = " ";
        String petSound = " ";
        Pet myPetOne = new Pet();
        System.out.println("\nDefault Constructor Results: \n");
        System.out.println(myPetOne.PrintInfo());
        System.out.println("\nUser Defined Constructor Prompts: \n");
        System.out.println("What is your pet's name?: ");
        petName = userInput.nextLine();
        myPetOne.setPetName(petName);
        System.out.println("What kind of animal is your pet?: ");
        petType = userInput.nextLine();
        myPetOne.setPetType(petType);
        System.out.println("What kind of noise does your pet make?: ");
        petSound = userInput.nextLine();
        myPetOne.setPetSound(petSound);
        System.out.println("\nUser Defined Constructor Results: \n");
        System.out.println(myPetOne.PrintInfo());
        Pet myPetTwo = new Pet("Buccee", "Beaver", "Cha-Ching");
        System.out.println("\nPre-Defined Constructor Results: \n");
        System.out.println(myPetTwo.PrintInfo());
        userInput.close();
    }
}