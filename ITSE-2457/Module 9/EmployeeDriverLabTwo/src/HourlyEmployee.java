/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 3
 * Reused for Module 9 Lab 2
 * Hourly Employee Class
 */


public class HourlyEmployee extends Employee {
    private double hourlyRate;
    private double hoursWorkedPerWeek;

    public HourlyEmployee(String employeeID, String firstName, String lastName, Benefits employeeBenefits, Address employeeHomeAddress, Address employeeWorkAddress, double hourlyRate, double hoursWorkedPerWeek) {
        super(employeeID, firstName, lastName, employeeBenefits, employeeHomeAddress, employeeWorkAddress);
        this.hourlyRate = hourlyRate;
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    public double getHourlyRate() {
        return hourlyRate;
    }

    public void setHourlyRate(double hourlyRate) {
        this.hourlyRate = hourlyRate;
    }

    public double getHoursWorkedPerWeek() {
        return hoursWorkedPerWeek;
    }

    public void setHoursWorkedPerWeek(double hoursWorkedPerWeek) {
        this.hoursWorkedPerWeek = hoursWorkedPerWeek;
    }

    public double calculatePay() {
        double grossPay = hourlyRate * hoursWorkedPerWeek;
        return grossPay;
    }

    @Override
    public void printEmployeeInformation() {
        super.printEmployeeInformation();
        System.out.printf("Gross Pay for the week: $%.2f%n", calculatePay());
    }
}