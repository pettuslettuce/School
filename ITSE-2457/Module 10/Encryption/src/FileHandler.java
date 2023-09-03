/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * May 4 2023
 * May the 4th be with you
 * Module 10 Lab 2
 * Encryption File Handler (read/write)
 */

// lots of imports!
import java.io.BufferedReader;
import java.io.BufferedOutputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStream;

// started off with separate respecitve read/write classes and merged them into a single handler
public class FileHandler {

    // Read Function:
    // reads the contents of a file with the given filename and returns them as a string
    public static String read(String fileName) throws IOException {
        
        // create a StringBuilder object to store the contents of the file
        StringBuilder stringBuilder = new StringBuilder();
        
        // try and catch read contents of file with given file name
        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            
            // read each line from the file and append it to the StringBuilder object // had to google this one again
            String line;
            while ((line = reader.readLine()) != null) {
                stringBuilder.append(line);
                stringBuilder.append(System.lineSeparator());
            }
        } catch (IOException exception) {
            // If there is an error reading the file, print an error message and throw the exception
            System.out.println("Error reading from file.");
            throw exception;
        }
        
        // rturn the contents of the file as a string
        return stringBuilder.toString();
    }
//-------------------------------------------------------------------------------------------------------------------
    // Write function: 
    // writes the given string data to a file with the given filename
    public static void write(String fileName, String data) throws IOException {
        
        // try and catch to write to file with given file name
        try (OutputStream outputStream = new BufferedOutputStream(new FileOutputStream(fileName))) {
            
            // write the data to the output stream as bytes
            outputStream.write(data.getBytes());
            
        } catch (IOException exception) {
            // if there is an error writing the file, print an error message and throw the exception
            System.out.println("Error writing to file.");
            throw exception;
        }
    }
}
