/*
 * @author Dr. Kevin Roark
 * Demo6
 * Code writes a file and reads the data into an ArrayList of the Person object
 * ITSE-2457; OOP Java; M/W 2pm
 * Amended by Andrew Pettus
 * March 5 2023
 * Module 5 Lab 3
 * Person Class
 */

 import java.util.ArrayList;
 import java.util.Scanner;
 import java.io.File; // Import for File Object
 import java.io.IOException;  // Import for IO Exceptions
 import java.io.FileWriter;   // Import the FileWriter class
 import java.io.FileNotFoundException;  // Import this class to handle errors
 
 public class ChapterFiveLabDriver {
     public static void main(String[] args) {		
         //****************************************************************
         //Variables we will use in the program			
         //****************************************************************
        //  Add the new Variables used in the section: Variables we will use in the program section
         ArrayList<Person> Students = new ArrayList<Person>();
         String firstName;
         String lastName;
         int age;
         String phoneNumber;
         double GPA;
         int index = 0; //index for the ArrayList 
 
         //****************************************************************
         //Lets create our Data File 
         //here we will use a try/catch in the event something goes wrong
         //****************************************************************
        // Add the new data points (GPA and Phone number) to the section where we are writing the data to the file (Lets create our Data File section.) 
         try {
               //Create an instance of the File Writer and give it the filename
               FileWriter myWriter = new FileWriter("Person.txt");
               //Write our data to the file 
               myWriter.write("Kevin Roark 29 210-837-0600 4.0\n"		      		
                     + "Sam Read 21 949-123-4567 1.5\n"
                       + "Sally Smith 34 408-987-6543 3.9\n"
                       + "Bart Simpson 14 555-123-5555 1.0");
               //close the file we opened - MUST BE DONE
               myWriter.close();
               //Message that all was done
               System.out.println("Successfully wrote to the file.");
             } 
         catch (IOException e) 
             {
                   //An issue happened - Message user  
                   System.out.println("An error occurred.");
                   e.printStackTrace();
             }
 
         //****************************************************************
         //Now lets read the file into our ArrayList of object Person
         //****************************************************************
         try {
               //Create a file object
               File myObj = new File("Person.txt");
               Scanner myReader = new Scanner(myObj);
               //While there is data to read
               while (myReader.hasNextLine()) 
               {
                   //Read in each variable from file   
                   firstName = myReader.next();
                   lastName = myReader.next();
                   age = myReader.nextInt();
                   phoneNumber = myReader.next();
                   GPA = myReader.nextDouble();
                   
                   //Add as an instance of the person to the ArrayList using the Person Constructor 
                   Students.add(new Person(firstName, lastName, age, phoneNumber, GPA));  
               }
               //close the file we opened - MUST BE DONE
               myReader.close();		      
             } 
             //If we could not find the file - catch the error
         catch (FileNotFoundException e) 
             {
                   System.out.println("An error occurred.");
                   e.printStackTrace();
             }	
         //****************************************************************
         //Now lets iterate through our ArryList and use the Person PrintData method
         //to show we have our ArrayList of Student Objects
         //****************************************************************
         while (index < Students.size())
         {
             //we iterate through each index and invoke the PrintData method of the Person object
             System.out.println(Students.get(index).PrintData());
             index++;
         } //end of while loop
     }
 
 }