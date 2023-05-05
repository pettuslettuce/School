/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * May 4 2023
 * May the 4th be with you
 * Module 10 Lab 2
 * Encryption Driver
 */

import java.io.IOException;
import java.util.Scanner;

public class FileEncryptionDriver {

    public static void main(String[] args) {
        
        // initalize scanner as userInput
        Scanner userInput = new Scanner(System.in);

        String fileName;
        String fileContents;
        int key;

        // get file name from user input
        System.out.print("Enter file name: ");
        fileName = userInput.nextLine();

        // get file contents from user input
        System.out.print("Enter file contents: ");
        fileContents = userInput.nextLine();

        // get encryption key from user input
        System.out.print("Enter encryption key: ");
        key = userInput.nextInt();

        // try and catch for entire cipher process
        try {
            // write file contents to file
            FileHandler.write(fileName, fileContents);

            // encrypt file contents
            String encryptedContents = EncryptionInterface.crypt(fileContents, key);

            // write encrypted contents to file, dub it as encrypted
            String encryptedFileName = fileName + ".encrypted";
            FileHandler.write(encryptedFileName, encryptedContents);

            // decrypt encrypted file contents
            String decryptedContents = EncryptionInterface.crypt(encryptedContents, key);

            // write decrypted contents to file, dub it as decrypted
            String decryptedFileName = fileName + ".decrypted";
            FileHandler.write(decryptedFileName, decryptedContents);

            // output original file, encrypted file, and decrypted file contents
            System.out.println("Original file contents:");
            System.out.println(fileContents);
            System.out.println("Encrypted file contents:");
            System.out.println(encryptedContents);
            System.out.println("Decrypted file contents:");
            System.out.println(decryptedContents);
        
          // exception handler catch
        } catch (IOException exception) {
            System.out.println("Error: " + exception.getMessage());
        }
        // close scanner
        userInput.close();
    }
}
