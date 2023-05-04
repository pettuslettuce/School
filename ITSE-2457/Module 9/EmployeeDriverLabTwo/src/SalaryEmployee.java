/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 25 2023
 * Module 9 Lab 2
 * Salaried Employee Class
 */


public class SalaryEmployee extends Employee {

    // Annual salary of the employee
    private double annualSalary;
    // Monthly bonus received by the employee
    private double monthlyBonus;

    // Constructor to populate all arguments
    public SalaryEmployee(String employeeID, String firstName, String lastName, Benefits employeeBenefits,
                          Address employeeHomeAddress, Address employeeWorkAddress, double annualSalary, double monthlyBonus) {
        // Calling the constructor of the parent class to initialize common attributes
        super(employeeID, firstName, lastName, employeeBenefits, employeeHomeAddress, employeeWorkAddress);
        // Initializing the SalaryEmployee specific attributes
        this.annualSalary = annualSalary;
        this.monthlyBonus = monthlyBonus;
    }

    // Annual Salary (getters/setters)
    public double getAnnualSalary() {
        return annualSalary;
    }
    public void setAnnualSalary(double annualSalary) {
        this.annualSalary = annualSalary;
    }

    // Monthly Bonus (getters/setters
    public double getMonthlyBonus() {
        return monthlyBonus;
    }
    public void setMonthlyBonus(double monthlyBonus) {
        this.monthlyBonus = monthlyBonus;
    }

    // Method to calculate employee pay
    public double calculatePay() {
        // Our fictitious company pays salary employees 2 times per month (24 times per year)
        double grossPay = (annualSalary / 24) + monthlyBonus;
        // Return the calculated gross pay
        return grossPay;
    }

    // Override the PrintEmployeeInformation() of the Employee class to also print the employees gross pay for the period. 
    @Override
    public void printEmployeeInformation() {
        // Call the parent class method to print common attributes
        super.printEmployeeInformation();
        // Print the gross pay of the employee with dollar sign formatter
        System.out.printf("Gross Pay for the period: $%.2f%n", calculatePay());
    }
}