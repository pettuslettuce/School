/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Reused for Module 9 Lab 2
 * Driver
 */

import java.util.ArrayList;

public class Driver {
    public static void main(String[] args) {

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

        // Add all employees to the ArrayList
        ArrayList<Employee> employees = new ArrayList<>();
        employees.add(employee1);
        employees.add(employee2);
        employees.add(employee3);
        employees.add(employee4);

        // Print Employee Information
        for (Employee emp : employees) {
            emp.printEmployeeInformation();
            System.out.println("----------------------------------------");
        }
    }
}