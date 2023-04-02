/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Mar 18 2023
 * Module 6 Lab 2
 * Parking Permit Driver
 */

 import java.util.Scanner;

// Objective for this program will be to enroll a student in college and issue them a parking permit. 
// The first step in the enrollment process is to display your program header welcoming the student to the college using the header you have created 
 public class ParkingPermitDriver {
    public static void main(String[] args) {

        String firstName, lastName, street, city, state, zipCode;
        String carMake, carModel, carYear;
        Address address;
        ParkingPermit parkingPermit;

        Scanner userInput = new Scanner(System.in);

        Header.displayHeader();  //first step in the enrollment process is to display your program header
        
        // Prompt user for:
        System.out.println("Please enter student information:");
        //First name
        System.out.print("First name: ");
        firstName = userInput.nextLine();
        //Last name
        System.out.print("Last name: ");
         lastName = userInput.nextLine();
        //Home address
        System.out.println("Please enter address information:");
        System.out.print("Street address: ");
        street = userInput.nextLine();
        System.out.print("City: ");
        city = userInput.nextLine();
        System.out.print("State: ");
        state = userInput.nextLine();
        System.out.print("Zip code: ");
        zipCode = userInput.nextLine();

        
        address = new Address(street, city, state, zipCode); //Create address object from address class

        //Car make, model, year
        System.out.println("Please enter car information:");
        System.out.print("Make: ");
        carMake = System.console().readLine();
        System.out.print("Model: ");
        carModel = System.console().readLine();
        System.out.print("Year: ");
        carYear = userInput.nextLine();

        parkingPermit = new ParkingPermit(carMake, carModel, carYear); // creating parking permit object

        // Create student object
        Student student = new Student(firstName, lastName, address, parkingPermit);

        // and display parking permit
        student.printStudentInfo();
        parkingPermit.printPermitInfo();
        
        // Close scanner
        userInput.close();
    }
    
}