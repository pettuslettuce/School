/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Employee Array List Driver
 */

 import java.util.ArrayList;

 public class EmployeeArrayList {
    public static void main(String[] args) {

        // lease note that all the employees will have the same Work address, but each employee will have a different Home address. 
        // You must create 1 instance of the Work address and 4 instances of a Home address. 
        Address workAddress = new Address("3535 N Ellison Dr", "San Antonio", "TX", "78251");

        Address homeAddress1 = new Address("12345 Runway Road", "Austin", "TX", "78701");
        Address homeAddress2 = new Address("789 Oak St", "Chicago", "IL", "60601");
        Address homeAddress3 = new Address("321 Pine St", "San Francisco", "CA", "94109");
        Address homeAddress4 = new Address("654 Maple St", "Houston", "TX", "77002");

        Benefits benefits1 = new Benefits("Health", 1000.0f, "Blue Cross");
        Benefits benefits2 = new Benefits("Dental", 500.0f, "Delta Dental");
        Benefits benefits3 = new Benefits("Vision", 250.0f, "VSP");


        // When you create an instance of the employee, use the constructor that takes all the arguments as parameters.
        Employee employee1 = new Employee("4746", "Andrew", "Pettus", benefits1, homeAddress1, workAddress);
        Employee employee2 = new Employee("0923", "Matt", "Michaelson", benefits2, homeAddress2, workAddress);
        Employee employee3 = new Employee("1002", "Jim", "Jimothy", benefits3, homeAddress3, workAddress);
        Employee employee4 = new Employee("3232", "Kevin", "Roark", benefits1, homeAddress4, workAddress);

        // Create an ArrayList of Employees (4 total) in the lab you completed for Chapter 6. 
        ArrayList<Employee> employees = new ArrayList<>();
        employees.add(employee1);
        employees.add(employee2);
        employees.add(employee3);
        employees.add(employee4);


        
        // Iterate through the array list of Employees and print the information using the PrintEmployeeInformation() method.
        for (Employee employee : employees) {
            employee.PrintEmployeeInformation();
            System.out.println("--------------------------------------------------");
        }
    }
}

