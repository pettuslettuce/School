/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 2
 * Driver
 */
/*
 * Create a Driver Program to demonstrate the use of each of the classes. 
 * For the Driver Program, you do not need to get any user input -
 * - simply invoke the needed constructors and print the information for each type of employee. 
 */
import java.util.ArrayList;

public class Driver {
    public static void main(String[] args) {


        // So that you know, you do not need to prompt the user for any input. 
        // When you create an instance of the employee, invoke the subclasses constructor that takes all the arguments as parameters.  
        // As a note, you will need to use the appropriate constructor for the Salary and Hourly Employee. (You must use polymorphism)

        // Create 2 Salary Employees
        SalaryEmployee employee1 = new SalaryEmployee("S1001", "John", "Smith",
                new Benefits("Health", 200.00f, "Aetna"),
                new Address("123 Main St", "Anytown", "TX", "78123"),
                new Address("456 Oak Ave", "Othertown", "TX", "71234"),
                100000.00f, 1000.00f);

        SalaryEmployee employee2 = new SalaryEmployee("S1002", "Jane", "Doe",
                new Benefits("Dental", 100.00f, "Blue Cross"),
                new Address("789 Broadway St", "Somewhere", "TX", "78456"),
                new Address("321 Elm St", "Nowhere", "TX", "79856"),
                80000.00f, 500.00f);

        // Create 2 Hourly Employees
        HourlyEmployee employee3 = new HourlyEmployee("H1001", "Bob", "Patterson",
                new Benefits("Vision", 150.00f, "Blue Shield"),
                new Address("111 Pine St", "Heretown", "TX", "77856"),
                new Address("222 Maple Ave", "Thistown", "TX", "77124"),
                30.00f, 40.00f);

        HourlyEmployee employee4 = new HourlyEmployee("H1002", "Mike", "Shoemaker",
                new Benefits("Life", 300.00f, "Obama Care"),
                new Address("333 Cedar Blvd", "Thattown", "TX", "78125"),
                new Address("444 Walnut St", "Whichtown", "TX", "78125"),
                25.55, 37.50f);

        // In the main program you will create an ArrayList of Employees.
        ArrayList<Employee> employees = new ArrayList<>();
        // Add 4 Employees to the ArrayList (2 Salary, 2 Hourly.)
        employees.add(employee1);
        employees.add(employee2);
        employees.add(employee3);
        employees.add(employee4);

        // Iterate through the array list of Employees and print the information using the PrintEmployeeInformation() method.
        for (Employee emp : employees) {
            emp.printEmployeeInformation();
            System.out.println("----------------------------------------");
        }
    }
}