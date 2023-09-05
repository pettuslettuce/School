/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 7 2023
 * Module 8 Lab 1
 * We the people Utility
 */

 import java.io.File;
 import java.util.Scanner;
 
 public class Utility {
     
    // Invoke methods
     public static void main(String[] args) {
         countWords();
         countWe();
         replacePeople();
     }
     
     public static void countWords() {
         try {
            // Create a Scanner object to read the file Mytext.txt
             Scanner fileScanner = new Scanner(new File("Mytext.txt"));
             // Initialize the count of words to 0 (in scope)
             int count = 0;
              // Loop through each word in the file
             while (fileScanner.hasNext()) {
                // Read the next word
                 fileScanner.next();
                 // Increment the count for each word
                 count++;
             }
             // Output word count
             System.out.println("Word count: " + count);
             // Close the Scanner object
             fileScanner.close();
             // Exception catch
         } catch (Exception error) {
             System.out.println("Error reading file: " + error.getMessage());
         }
     }
     
     public static void countWe() {
        try {
            // Create a new Scanner object to read the file 
            Scanner fileScanner = new Scanner(new File("Mytext.txt"));
            // Initialize the count of words to 0 (in scope)
            int count = 0;
            // Loop through each word in the file
            while (fileScanner.hasNext()) {
                // If word matches "we", increment count variable
                if (fileScanner.next().equals("we")) {
                    count++;
                }
            }
            // Output "we" count variable
            System.out.println("Number of times 'we' is used: " + count);
            // Close the Scanner object
            fileScanner.close();
            // Exception catch
        } catch (Exception error) {
            System.out.println("Error reading file: " + error.getMessage());
        }
    }
    public static void replacePeople() {

        try {
            // Create a new Scanner object to read the file
            Scanner fileScanner = new Scanner(new File("Mytext.txt"));
            // Create a new StringBuilder object to build the new string with replaced "people"
            StringBuilder modifiedText = new StringBuilder();
            // Loop through each line in the file
            while (fileScanner.hasNextLine()) {
                // Get the next line from the scanner
                String line = fileScanner.nextLine();
                // Replace all instances of "people" with "People"
                line = line.replaceAll("people", "People");
                // Add the modified line to the StringBuilder with a new line character
                modifiedText.append(line);
                modifiedText.append("\n");
            }
            // Print out the modified text
            System.out.println(modifiedText.toString());
            // Close the fileScanner
            fileScanner.close();
            // Exception catch
        } catch (Exception error) {
            System.out.println("Error reading file: " + error.getMessage());
        }
    }
}