/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 1
 * Contact List
 */

// import scanner object
import java.util.Scanner;
// import file object
import java.io.File;

// main class
public class ContactList  {
    public static void main(String[] args) throws Exception {
    
        // create string variables
        String[] firstName = new String[5];
        String[] lastName = new String[5];
        String[] email = new String[5];
        String[] phone = new String[5];
        
        // create file object
        File inputFile = new File("contacts.txt");

        // if file doesn't exist, report not found
        if (!inputFile.exists()) {
            System.out.println("Error: File not found.");
            return;
        }
        // read in data from file
        try {
            Scanner fileScanner = new Scanner(inputFile);
            for (int i = 0; i < 5; i++) {
                String line = fileScanner.nextLine();
                // splits data at the commas
                String[] section = line.split(",");
                // first data before comma at index 0
                firstName[i] = section[0];
                // second data before comma at index 1
                lastName[i] = section[1];
                // third data before comma at index 2...etc..
                email[i] = section[2].toLowerCase();
                //replace all non digit characters with an empty string
                phone[i] = section[3].replaceAll("[^\\d]", "");
                //format in dashes to replacement string
                phone[i] = phone[i].substring(0, 3) + "-" + phone[i].substring(3, 6) + "-" + phone[i].substring(6);
            }
            // close file scanner
            fileScanner.close();

            // catch for try block if error in file read
        } catch (Exception Error) {
            System.out.println("Error reading file: " + Error.getMessage());
            return;
        }
        
        // new scanner object
        Scanner userInput = new Scanner(System.in);

        // menu choice integer variable
        int menuChoice;

        // do-while loop for main menu
        do {
            System.out.println("Contact List Menu");
            System.out.println("1. Display all contacts (sorted).");
            System.out.println("2. Search contacts based on last name.");
            System.out.println("3. Search contacts based on first name.");
            System.out.println("4. Quit program.");
            System.out.print("Enter your choice: ");

            // accept menuChoice for switch case block
            menuChoice = userInput.nextInt();
            userInput.nextLine();

            // based on menu choice, switch into different methods
            switch (menuChoice) {
                case 1:
                    // automatically sorts contact list based on last name
                    sortContactsByLastName(firstName, lastName, email, phone);
                    // displays the sorted contacts
                    displayAllContacts(firstName, lastName, email, phone);
                    break;
                case 2:
                    // last name search
                    System.out.println("Enter last name to search: ");
                    String searchLastName = userInput.nextLine();
                    searchContactsByLastName(firstName, lastName, email, phone, searchLastName);
                    break;
                case 3:
                    // first name search
                    System.out.println("Enter first name to search: ");
                    String searchFirstName = userInput.nextLine();
                    searchContactsByFirstName(firstName, lastName, email, phone, searchFirstName);
                    break;
                case 4:
                    // exit program
                    System.out.println("Exiting program...");
                    break;
                default:
                    // default
                    System.out.println("Invalid option. Please try again.");
                    break;
            }
            System.out.println();
            // do-while runs while menu choice is not equal to 4. 
        } while (menuChoice != 4);
        userInput.close();
    }
    
    // static methods:
    // display all contacts
    public static void displayAllContacts(String[] firstName, String[] lastName, String[] email, String[] phone) {
        System.out.println("All Contacts:");
        // iterate through arrays
        for (int i = 0; i < firstName.length; i++) {
            System.out.println("--------------------");
            System.out.println("First Name: " + firstName[i]);
            System.out.println("Last Name: " + lastName[i]);
            System.out.println("Email: " + email[i]);
            System.out.println("Phone: " + phone[i]);
        }
        System.out.println("--------------------");
    }
    // search by last name
    public static void searchContactsByLastName(String[] firstName, String[] lastName, String[] email, String[] phone, String searchLastName) {
        // flag to track if a contact with the specified last name was found
        boolean foundContact = false;
        // iterate over the last names array
        for (int i = 0; i < lastName.length; i++) {
            // check if the last name matches the search parameter (case-insensitive)
            if (lastName[i].equalsIgnoreCase(searchLastName)) {
                // if this is the first contact with the specified last name...
                if (!foundContact) {
                    System.out.println("Contacts with last name '" + searchLastName + "':");
                }
                // ...set flag to true since we found a contact with the specified last name
                foundContact = true;
                // then print the contact information
                System.out.println("--------------------");
                System.out.println("First Name: " + firstName[i]);
                System.out.println("Last Name: " + lastName[i]);
                System.out.println("Email: " + email[i]);
                System.out.println("Phone: " + phone[i]);
            }
        }
        // if no contacts were found with the specified last name, print statement
        if (!foundContact) {
            System.out.println("No contacts found with last name '" + searchLastName + "'.");
        }
    }
    // search by first name
    public static void searchContactsByFirstName(String[] firstName, String[] lastName, String[] email, String[] phone, String searchFirstName) {
        // flag to track if a contact with the specified first name was found
        boolean foundContact = false;
        // iterate over the first names array
        for (int i = 0; i < firstName.length; i++) {
            // check if the first name matches the search parameter (case-insensitive)
            if (firstName[i].equalsIgnoreCase(searchFirstName)) {
                // if this is the first contact with the specified last name...
                if (!foundContact) {
                    System.out.println("Contacts with first name '" + searchFirstName + "':");
                }
                // ...set flag to true since we found a contact with the specified last name
                foundContact = true;
                // then print the contact information
                System.out.println("--------------------");
                System.out.println("First Name: " + firstName[i]);
                System.out.println("Last Name: " + lastName[i]);
                System.out.println("Email: " + email[i]);
                System.out.println("Phone: " + phone[i]);
            }
        }
        // if no contacts were found with the specified first name, print statement
        if (!foundContact) {
            System.out.println("No contacts found with first name '" + searchFirstName + "'.");
        }
    }

    // bubble sort!
    public static void sortContactsByLastName(String[] firstName, String[] lastName, String[] email, String[] phone) {
        // set sorted to false to enter the while loop
        boolean sorted = false;
        while (!sorted) {
            // set sorted to true, if a swap is made set sorted back to false
            sorted = true;
            // iterate through the entire list
            for (int i = 0; i < lastName.length - 1; i++) {
                 // compare last names of adjacent contacts (case insensitive)
                if (lastName[i].compareToIgnoreCase(lastName[i + 1]) > 0) {
                    // if the adjacent contacts are out of order, swap all fields, set sorted to false
                    sorted = false;

                    // create temp string variable and swap first names
                    String temp = firstName[i];
                    firstName[i] = firstName[i + 1];
                    firstName[i + 1] = temp;

                    // Swap last names with temp
                    temp = lastName[i];
                    lastName[i] = lastName[i + 1];
                    lastName[i + 1] = temp;

                    // Swap emails with temp
                    temp = email[i];
                    email[i] = email[i + 1];
                    email[i + 1] = temp;

                    // Swap phone numbers with temp
                    temp = phone[i];
                    phone[i] = phone[i + 1];
                    phone[i + 1] = temp;
                }
            }
        }
    }
}


