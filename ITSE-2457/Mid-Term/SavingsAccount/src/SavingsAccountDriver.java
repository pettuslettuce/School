/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * March 09 2023
 * Mid-Term Project 
 * Savings Account Driver
 */

 //Test the class in a program that calculates the balance of a savings account at the end of a period of time.  

// The program should ask the user for the annual interest rate, the starting balance, 
// and the number of months to calculate since the  account was established. 
// A loop should then iterate once for every month, performing the following:
// Ask the user for the amount deposited into the account during the month. Use the class method to add this amount to the account balance.
// Ask the user for the amount withdrawn from the account during the month. Use the class method to subtract this amount from the account balance.
// Use the class method to calculate the monthly interest.
// After each iteration, the program should display the new balance. 

//import Scanner and NumberFormat packages
import java.util.Scanner;
import java.text.NumberFormat;


public class SavingsAccountDriver {
    public static void main(String[] args) throws Exception {

        //declare variables for the program - set interest rate
        // starting balance, annual interest rate (0.12), deposit, withdrawal, months
        double annualInterestRate = 0.12;
        double accountStartingBalance = 0.0;

        // to reference a SavingsAccount object
        SavingsAccount account;

        //create a scanner
        Scanner userInput = new Scanner(System.in);

        //create a number formatter for currency 
        NumberFormat cashFormat = NumberFormat.getCurrencyInstance();

        //Ask user for the original balance
        System.out.print("Thanks for choosing to bank with Bank of Andrew! \n" + "What is your account's starting balance?"); 
        String startingBal = userInput.nextLine();
        accountStartingBalance = Integer.parseInt(startingBal.replaceAll("\\D", ""));

        //create an instance of the SavingsAccount Class - give the constructor the balance
        account = new SavingsAccount(accountStartingBalance);

        //set the object's interest rate
        System.out.print("Enter the annual interest rate; ex: (0.03 = 3%): ");
        annualInterestRate = userInput.nextDouble();
        account.setAnnualInterestRate(annualInterestRate);

        //ask the user for the number of months to run
        System.out.print("Enter the number of months to calculate: ");
        int monthsToRun = userInput.nextInt();
        
        // clear the input buffer
        userInput.nextLine(); // clear the input buffer

        //loop through the number of months
        //BEGIN loop
        for (int i = 1; i <= monthsToRun; i++) {
            System.out.println("\nMonth " + i);
            //ask the user how much to deposit -
            //using the add class method (depositMoney) - add to the balance
            System.out.print("Please enter the amount to deposit: ");
            String depositAmt = userInput.nextLine();
            account.depositMoney (Integer.parseInt(depositAmt.replaceAll("\\D", "")));

            //ask the user how much to withdraw       
            //using the deduct amount method - deduct from the balance
            System.out.print("Please enter the amount to withdraw: ");
            String withdrawAmt = userInput.nextLine();
            account.withdrawMoney (Integer.parseInt(withdrawAmt.replaceAll("\\D", "")));

            //use the Compute Interest rate method (addMonthlyInterest)
            account.addMonthlyInterest();

            //output the account Balance
            System.out.println("Updated Balance: " + cashFormat.format(account.getAccountBalance()));

            //END loop
        }

        //output "Thanks for using the banking program!"
        System.out.println("\nThanks for banking with Bank of Andrew (The better BOA)!");
        userInput.close();
    }
}