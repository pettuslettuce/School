
/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 12 2023
 * Module 4 Lab 3
 * Stocks
 */
import java.util.Scanner;

public class StocksDriver {
    public static void main(String[] args) throws Exception {
        // Driver attributes
        String companyTicker;
        String companyName;
        double totalShares;
        double priceShares;
        // Instantiate keyboard scanner
        Scanner userInput = new Scanner(System.in);
        // Instantiate default QuizScore constructor
        Stocks companyOne = new Stocks();
        // Collect companyTicker from user
        System.out.println("Company Stock Ticker Symbol: ");
        companyTicker = userInput.nextLine();
        companyOne.setCompanyTicker(companyTicker);
        // Collect companyName from user
        System.out.println("Company Name: ");
        companyName = userInput.nextLine();
        companyOne.setCompanyName(companyName);
        // Collect totalShares from user
        System.out.println("Total Shares:  ");
        totalShares = userInput.nextDouble();
        companyOne.setTotalShares(totalShares);
        // Collect price per share from user
        System.out.println("Price per share:  ");
        priceShares = userInput.nextDouble();
        companyOne.setPriceShares(priceShares);
        // Output method for student and quiz information
        System.out.println(companyOne.PrintInfo() + "\n");
        // Close Scanner
        userInput.close();

    }
}
