/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 7 2023
 * Module 8 Lab 2
 * Sales Utility
 */

import java.io.File;
import java.util.Scanner;
import java.text.NumberFormat;
import java.util.Locale;

public class Sales {

    // private static field used to store a NumberFormat object that formats numbers
    // as currency in USD
    private static NumberFormat dollarFormatter = NumberFormat.getCurrencyInstance(Locale.US);

    public static void main(String[] args) {

        double[][] sales = readSalesFromFile("sales.txt");
        printWeekTotals(sales);
        printWeekAverages(sales);
        printTotalSales(sales);
        printAllWeekAverages(sales);
        printDayAverages(sales);
    }

    public static double[][] readSalesFromFile(String fileName) {
        // Create a new 2D array of doubles with 3 rows (weeks) and 7 columns (days) to
        // store sales data
        double[][] sales = new double[3][7];
        try {
            // Create a new File object
            File fileText = new File(fileName);
            // Create a new Scanner object to read file
            Scanner fileScanner = new Scanner(fileText);
            // Initialize a row counter to keep track of which row in array to update
            int row = 0;
            // Loop through each line in the file until there are no more lines or we have
            // read 3 rows
            while (fileScanner.hasNextLine() && row < 3) {
                // Read the next line of data from the file
                String line = fileScanner.nextLine();
                // Split the line of data into an array of Strings using commas as splitter
                String[] parts = line.split(",");
                // Loop through each column of the current row and update the corresponding
                // element in the array
                for (int col = 0; col < 7; col++) {
                    sales[row][col] = Double.parseDouble(parts[col]);
                }
                // Increment the row counter to move on to the next row
                row++;
            }
            // Close the scanner object to release any resources it was using.
            fileScanner.close();
        } catch (Exception error) {
            // Print an error message if there was an exception while reading the file
            System.out.println("Error reading file: " + error.getMessage());
        }
        // Return the 2D array of doubles representing the sales data read from the file
        return sales;
    }

    // New method, passing in 2D array named 'sales'
    public static void printWeekTotals(double[][] sales) {
        System.out.println("Total sales for each week:");
        // Loop through each row of the sales array
        for (int row = 0; row < 3; row++) {
            // Initialize a variable to keep track of the total sales
            double total = 0.0;
            // Loop through each column of the current row
            for (int col = 0; col < 7; col++) {
                // Add the current day's sales to the total
                total += sales[row][col];
            }
            // Print a message indicating the week number and its corresponding formatted
            // total
            System.out.printf("Week %d: %s\n", row + 1, dollarFormatter.format(total));
        }
    }

    // New method, passing in 2D array named 'sales'
    public static void printWeekAverages(double[][] sales) {
        System.out.println("\nAverage daily sales for each week:");
        // Loop through each row of the sales array
        for (int row = 0; row < 3; row++) {
            // Initialize a variable to keep track of the total sales
            double total = 0.0;
            // Loop through each column of the current row
            for (int col = 0; col < 7; col++) {
                // Add the current day's sales to the total
                total += sales[row][col];
            }
            // Calculate the average for each week
            double average = total / 7;
            // Print a message indicating the week number and its corresponding formatted
            // total
            System.out.printf("Week %d: %s\n", row + 1, dollarFormatter.format(average));
        }
    }

    // New method, passing in 2D array named 'sales'
    public static void printTotalSales(double[][] sales) {
        System.out.println("\nTotal sales for all 3 weeks:");
        // Initialize a variable to keep track of the total sales
        double total = 0.0;
        // Loop through each row of the sales array
        for (int row = 0; row < 3; row++) {
            // Loop through each column of the current row
            for (int col = 0; col < 7; col++) {
                total += sales[row][col];
            }
        }
        System.out.println(dollarFormatter.format(total));
    }

    // New method, passing in 2D array named 'sales'
    public static void printAllWeekAverages(double[][] sales) {
        System.out.println("\nAverage weekly sales for all 3 weeks:");
        // Initialize a variable to keep track of the total sales
        double total = 0.0;
        // Loop through each row of the sales array
        for (int row = 0; row < 3; row++) {
            // Loop through each column of the current row
            for (int col = 0; col < 7; col++) {
                total += sales[row][col];
            }
            // Calculate the average for each week

        }
        double average = total / 3;
        System.out.println(dollarFormatter.format(average));
    }

    // New method, passing in 2D array named 'sales'
    public static void printDayAverages(double[][] sales) {
        System.out.println("\nAverage sales for each day of the week:");
        for (int col = 0; col < 7; col++) {
            double total = 0.0;
            for (int row = 0; row < 3; row++) {
                total += sales[row][col];
            }
            double average = total / 3;
            System.out.printf("%s: %s\n", getDayOfWeek(col + 1), dollarFormatter.format(average));
        }
        System.out.println();
    }

    // Day of the week method to return day for averages method
    public static String getDayOfWeek(int dayNumber) {
        String[] days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
        return days[dayNumber - 1];
    }

}
