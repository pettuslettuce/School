/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * March 08 2023
 * Mid-Term Project
 * Savings Account Class
 */
//Design a SavingsAccount class
public class SavingsAccount {
        
    // class that stores a savings account’s annual interest rate and balance
    private double annualInterestRate;
    private double accountBalance; 

    // The class constructor should accept the amount of the savings account’s starting balance.
    //Constructor - One argument Constructor that receives the opening balance)
    public SavingsAccount (double startingBalance)
    {
        accountBalance = startingBalance;
        annualInterestRate = 0.0;
    }

    // The class should also have methods for subtracting the amount of a withdrawal...
    //Subtract Amount (Withdraw) - takes a double as the parameter and subtracts the value from the balance
    public void withdrawMoney(double amount)
    {
        accountBalance -= amount;
    }

    //...adding the amount of a deposit...
    //Add Amount (Deposit) - takes a double as the parameter and adds the value to the balance
    public void depositMoney(double amount)
    {
        accountBalance += amount;
    }
    //...and adding the amount of monthly interest to the balance.
    //Compute Monthly Interest Rate - computes the monthly interest rate and adds to the balance. The monthly rate is the annual rate / 12
    public void addMonthlyInterest()
    {
        double monthlyInterestRate = annualInterestRate / 12;
        accountBalance += monthlyInterestRate*accountBalance;
    }

    // da gettas und da settas
    public double getAnnualInterestRate() {
        return annualInterestRate;
    }
    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }
    public double getAccountBalance() {
        return accountBalance;
    }
    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
    }
}

