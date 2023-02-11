/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 10 2023
 * Module 3 Lab 3
 * EmployeeDriver
 */
import java.util.Scanner;
public class EmployeeDriver {
    public static void main(String[] args) throws Exception {
         String firstName;
         String lastName;
         int idNumber;
         String department;
         String position;
        //Instantiate keyboard scanner
        Scanner userInput = new Scanner(System.in);
        //Instantiate default employee constructor
        Employee employeeOne = new Employee();
        //Greet user
        System.out.println("Please enter the employee information. \n ");
        //Collect Employee First Name from user
        System.out.println("What is the Employee's first name?: ");
        firstName = userInput.nextLine();
        employeeOne.setFirstName(firstName);
        //Collect Employee Last Name from user
        System.out.println("What is the Employee's last name?: ");
        lastName = userInput.nextLine();
        employeeOne.setLastName(lastName);
        //Collect Employee ID Number from user
        System.out.println("What is the Employee's ID Number?: ");
        idNumber = userInput.nextInt();
        employeeOne.setIdNumber(idNumber);
        // Clear the buffer after reading the integer input
		userInput.nextLine();
        //Collect Employee Department from user
        System.out.println("What is the Employee's department?: ");
        department = userInput.nextLine();
        employeeOne.setDepartment(department);
        //Collect Employee Position from user
        System.out.println("What is the Employee's position?: ");
        position = userInput.nextLine();
        employeeOne.setPosition(position);
        System.out.println(employeeOne.PrintInfo());
        //Instantiate populated employee constructor
        Employee employeeTwo = new Employee("Mark", "Wahlberg",
         123, "Movies", "Actor");
        System.out.println(employeeTwo.PrintInfo());
        //Close Scanner
        userInput.close();
    }
}