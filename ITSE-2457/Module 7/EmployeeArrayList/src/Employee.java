/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Employee Array List Employee Class
 */

public class Employee {
    private String employeeID;
    private String firstName;
    private String lastName;
    private Benefits employeeBenefits;
    private Address employeeHomeAddress;
    private Address employeeWorkAddress; 

    public Employee(String employeeID, String firstName, String lastName, Benefits employeeBenefits, Address employeeHomeAddress, Address employeeWorkAddress) {
        this.employeeID = employeeID;
        this.firstName = firstName;
        this.lastName = lastName;
        this.employeeBenefits = new Benefits(employeeBenefits);
        this.employeeHomeAddress = new Address(employeeHomeAddress);
        this.employeeWorkAddress = new Address(employeeWorkAddress);
    }

    public String getEmployeeID() {
        return employeeID;
    }

    public void setEmployeeID(String employeeID) {
        this.employeeID = employeeID;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public Benefits getEmployeeBenefits() {
        return employeeBenefits;
    }

    public void setEmployeeBenefits(Benefits employeeBenefits) {
        this.employeeBenefits = employeeBenefits;
    }

    public Address getEmployeeHomeAddress() {
        return employeeHomeAddress;
    }

    public void setEmployeeHomeAddress(Address employeeHomeAddress) {
        this.employeeHomeAddress = employeeHomeAddress;
    }

    public Address getEmployeeWorkAddress() {
        return employeeWorkAddress;
    }

    public void setEmployeeWorkAddress(Address employeeWorkAddress) {
        this.employeeWorkAddress = employeeWorkAddress;
    }

    public void PrintEmployeeInformation() {
        System.out.println("Employee ID: " + employeeID);
        System.out.println("First Name: " + firstName);
        System.out.println("Last Name: " + lastName +"\n");
    
        employeeBenefits.PrintBenefitsInfo();
        System.out.println("Home Address: ");
        employeeHomeAddress.PrintAddressInformation();
        System.out.println("Work Address: ");
        employeeWorkAddress.PrintAddressInformation();
    }
}