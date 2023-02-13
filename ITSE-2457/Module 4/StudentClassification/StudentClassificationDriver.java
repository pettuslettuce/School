
/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 13 2023
 * Module 4 Lab 2
 * Student Classification
 */
import java.util.Scanner;

public class StudentClassificationDriver {
    public static void main(String[] args) throws Exception {
        // Driver variables
        String studentFirstName;
        String studentLastName;
        int studentHours;
        // Instantiate keyboard scanner
        Scanner userInput = new Scanner(System.in);
        // Instantiate default QuizScore constructor
        StudentClassification studentOne = new StudentClassification();
        // Collect student name from user
        System.out.println("Please enter the student's first name: ");
        studentFirstName = userInput.nextLine();
        studentOne.setStudentFirstName(studentFirstName);
        System.out.println("Please enter the student's last name: ");
        studentLastName = userInput.nextLine();
        studentOne.setStudentLastName(studentLastName);
        // Collect student hours from user
        System.out.println("Please enter the student's class hours: ");
        studentHours = userInput.nextInt();
        studentOne.setStudentHours(studentHours);
        // Output method for student and quiz information
        System.out.println(studentOne.PrintInfo());
        // Close Scanner
        userInput.close();
    }
}
