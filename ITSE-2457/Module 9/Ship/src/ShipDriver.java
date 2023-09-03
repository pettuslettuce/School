/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * Ship Driver
 */


 // Import scanner class
import java.util.Scanner;

public class ShipDriver {
    public static void main(String[] args) {
<<<<<<< HEAD
        Scanner userInput = new Scanner(System.in);
        
        // Prompt user for each attribute of a CargoShip
        System.out.println("Enter the name of the CargoShip:");
        String cargoShipName = userInput.nextLine();
        
        System.out.println("Enter the year the CargoShip was built:");
        String cargoShipYearBuilt = userInput.nextLine();
        
        System.out.println("Enter the cargo capacity of the CargoShip (in tonnage):");
        int cargoShipCargoCapacity = userInput.nextInt();
        userInput.nextLine(); // consume newline
=======
        Scanner scanner = new Scanner(System.in);
        
        // Prompt user for CargoShip attributes
        System.out.println("Enter the name of the CargoShip:");
        String cargoShipName = scanner.nextLine();
        
        System.out.println("Enter the year the CargoShip was built:");
        String cargoShipYearBuilt = scanner.nextLine();
        
        System.out.println("Enter the cargo capacity of the CargoShip (in tonnage):");
        int cargoShipCargoCapacity = scanner.nextInt();
        scanner.nextLine(); // consume newline
>>>>>>> parent of db4f280 (Dunno lol)
        
        // Create CargoShip object
        CargoShip cargoShip = new CargoShip(cargoShipName, cargoShipYearBuilt, cargoShipCargoCapacity);
        
        // Prompt user for CruiseShip attributes
        System.out.println("Enter the name of the CruiseShip:");
<<<<<<< HEAD
        String cruiseShipName = userInput.nextLine();
        
        System.out.println("Enter the year the CruiseShip was built:");
        String cruiseShipYearBuilt = userInput.nextLine();
        
        System.out.println("Enter the maximum number of passengers of the CruiseShip:");
        int cruiseShipMaxPassengers = userInput.nextInt();
        userInput.nextLine(); // consume newline
=======
        String cruiseShipName = scanner.nextLine();
        
        System.out.println("Enter the year the CruiseShip was built:");
        String cruiseShipYearBuilt = scanner.nextLine();
        
        System.out.println("Enter the maximum number of passengers of the CruiseShip:");
        int cruiseShipMaxPassengers = scanner.nextInt();
        scanner.nextLine(); // consume newline
>>>>>>> parent of db4f280 (Dunno lol)
        
        // Create CruiseShip object
        CruiseShip cruiseShip = new CruiseShip(cruiseShipName, cruiseShipYearBuilt, cruiseShipMaxPassengers);
        
        // Output information of the CargoShip and CruiseShip
        System.out.println("\nCargoShip Information:");
        System.out.println(cargoShip.toString());
<<<<<<< HEAD
        System.out.println("\nCruiseShip Information:");
        System.out.println(cruiseShip.toString());
        
        // Close Scanner
        userInput.close();
=======
        
        System.out.println("\nCruiseShip Information:");
        System.out.println(cruiseShip.toString());
        
        scanner.close();
>>>>>>> parent of db4f280 (Dunno lol)
    }
}
