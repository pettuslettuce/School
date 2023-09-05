/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Reused for Module 9 Lab 2
 * Salaried Employee Class
 */


public class SalaryEmployee extends Employee {

    // Annual salary of the employee
    private double annualSalary;
    // Monthly bonus received by the employee
    private double monthlyBonus;

    // Constructor to initialize the SalaryEmployee object with all the attributes
    public SalaryEmployee(String employeeID, String firstName, String lastName, Benefits employeeBenefits,
                          Address employeeHomeAddress, Address employeeWorkAddress, double annualSalary, double monthlyBonus) {
        // Calling the constructor of the parent class to initialize common attributes
        super(employeeID, firstName, lastName, employeeBenefits, employeeHomeAddress, employeeWorkAddress);
        // Initializing the SalaryEmployee specific attributes
        this.annualSalary = annualSalary;
        this.monthlyBonus = monthlyBonus;
    }

    // Getter method to return the annual salary of the employee
    public double getAnnualSalary() {
        return annualSalary;
    }

    // Setter method to set the annual salary of the employee
    public void setAnnualSalary(double annualSalary) {
        this.annualSalary = annualSalary;
    }

    // Getter method to return the monthly bonus received by the employee
    public double getMonthlyBonus() {
        return monthlyBonus;
    }

    // Setter method to set the monthly bonus received by the employee
    public void setMonthlyBonus(double monthlyBonus) {
        this.monthlyBonus = monthlyBonus;
    }

    // Method to calculate the pay of the employee before taxes
    public double calculatePay() {
        // Our fictitious company pays salary employees 2 times per month (24 times per year)
        double grossPay = (annualSalary / 24) + monthlyBonus;
        // Return the calculated gross pay
        return grossPay;
    }

    // Overriding the parent class method to include the gross pay of the employee
    @Override
    public void printEmployeeInformation() {
        // Call the parent class method to print common attributes
        super.printEmployeeInformation();
        // Print the gross pay of the employee with dollar sign formatter
        System.out.printf("Gross Pay for the period: $%.2f%n", calculatePay());
    }
}