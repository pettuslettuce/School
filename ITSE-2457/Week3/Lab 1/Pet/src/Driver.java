import java.util.Scanner;

//Driver class/program to demonstrate the class.
//Drive Program should include a demonstration of 2 instances of the Pet class.  

public class Driver {

    public static void main(String[] args) {

        // Instance of the first pet:
        // Default Constructor (set the values in the driver program using the setters)
        Pet myPetOne = new Pet();
        // Output of the values of the attributes Pet instance from the Default
        // Constructor
        System.out.println("Default Constructor: \n");
        System.out.println(myPetOne.PrintInfo());

        // Default Constructor (set the values in the driver program using the setters)
        Pet.setPetName

        // Demo of using argument constructor
        Pet myPetTwo = new Pet("Kevin", "Prof", "Code");
        System.out.println(myPetTwo.PrintInfo());

        // Now using the setters - give the default constructor some values
        myPetTwo.setPetName("Liam");
        myPetTwo.setPetType("Dog");
        myPetTwo.setPetSound("Bark");

        // now output the myPersonTwo that now has data
        // System.out.println(myPetTwo.PrintInfo());

    }

}