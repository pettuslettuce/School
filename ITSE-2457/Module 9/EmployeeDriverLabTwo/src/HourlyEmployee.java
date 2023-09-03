/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 2
 * Hourly Employee Class
 */


public class HourlyEmployee extends Employee {

    // Hourly rate of HourlyEmployee
    private double hourlyRate;

    // Hours worked per week for HourlyEmployee
    private double hoursWorkedPerWeek;

    // Constructor to populate all arguments
    public HourlyEmployee(String employeeID, String firstName, String lastName, Benefits employeeBenefits, Address employeeHomeAddress, Address employeeWorkAddress, double hourlyRate, double hoursWorkedPerWeek) {
        // Calling the constructor of the parent class to initialize common attributes
        super(employeeID, firstName, lastName, employeeBenefits, employeeHomeAddress, employeeWorkAddress);
        // Initializing the SalaryEmployee specific attributes
        this.hourlyRate = hourlyRate;
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    // Hourly rate (getters/setters)
    public double getHourlyRate() {
        return hourlyRate;
    }
    public void setHourlyRate(double hourlyRate) {
        this.hourlyRate = hourlyRate;
    }

    // Hours worked per week (getters/setters)
    public double getHoursWorkedPerWeek() {
        return hoursWorkedPerWeek;
    }
    public void setHoursWorkedPerWeek(double hoursWorkedPerWeek) {
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    // Method to calculate employee pay
    public double calculatePay() {
        // Our fictitious company pays employees weekly
        double grossPay = hourlyRate * hoursWorkedPerWeek;
        // Return the calculated gross pay
        return grossPay;
    }

    // Override the PrintEmployeeInformation() of the Employee class to also print the employees gross pay for the week. 
    @Override
    public void printEmployeeInformation() {
        super.printEmployeeInformation();
        System.out.printf("Gross Pay for the week: $%.2f%n", calculatePay());
    }
}