/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 3
 * MedicalSystem Driver
 */

/*
 * The Driver Class can call the parameterized Constructor - 
 * you do not need to get user input for the Driver class. 
 * The Driver class will need use an ArrayList to hold 4 MedicalProviders (polymorphism) 2 doctors and 2 nurses. 
 * Once the program was written the file, it will read the contents of the file and display it on the screen 
 */


import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class MedSystemDriver {
    public static void main(String[] args) {
        // Create medical provider instances
        Doctor doctor1 = new Doctor ("Hugh",    "Jass",     "D0017",    new OfficeLocation("Religious Hospital", "123 Crooked Street", "San Antonio", "Texas", "78229", "210-555-6789"), "Doctor", "DR666", "Suite 101", 240000);
        Doctor doctor2 = new Doctor ("Anita",   "Bath",     "D0145",    new OfficeLocation("Helipad Hosptital",  "656 Main Street",    "San Antonio", "Texas", "78254", "210-555-3344"), "Doctor", "DR911", "Room A54", 195000);
        Nurse   nurse1 = new Nurse  ("Eric",    "Schön",    "N8782",    new OfficeLocation("Creepy Clinic",      "456 Oak Way",        "San Antonio", "Texas", "78245", "210-555-1234"), "Nurse", 35.0, 40.0);
        Nurse   nurse2 = new Nurse  ("Ben",     "Dover",    "N4646",    new OfficeLocation("Downtown Ward",      "845 Tusk lane",      "San Antonio", "Texas", "78255", "210-555-7859"), "Nurse", 32.0, 35.5);
        
        // Create list of medical providers
        ArrayList<MedicalProvider> medicalProviders = new ArrayList<>();
        medicalProviders.add(doctor1);
        medicalProviders.add(doctor2);
        medicalProviders.add(nurse1);
        medicalProviders.add(nurse2);
        
        // Export medical providers to file
        try {
            FileWriter writer = new FileWriter("Medical.csv");
            for (MedicalProvider mpIterate : medicalProviders) {
                writer.write(mpIterate.toPayrollString() + "\n");
            }
            writer.close();
            System.out.println("Exported to Medical.csv successfully.");
        } catch (IOException error) {
            System.out.println("An error occurred while exporting to file: " + error.getMessage());
        }
        
        // Read and display contents of file
        try {
            File fileIn = new File("Medical.csv");
            Scanner inputScan = new Scanner(fileIn);
            while (inputScan.hasNextLine()) {
                String line = inputScan.nextLine();
                System.out.println(line);
            }
            System.out.println("*****************************************************************************");
            inputScan.close();
        } catch (IOException error) {
            System.out.println("An error occurred while reading the file: " + error.getMessage());
        }

        for (MedicalProvider mpIterate : medicalProviders) {
            mpIterate.printInfo();
        }
    }
}
