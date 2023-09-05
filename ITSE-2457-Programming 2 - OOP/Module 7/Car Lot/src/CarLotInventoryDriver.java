/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Apr 2 2023
 * Module 7 Lab 2
 * Car Lot Inventory Driver
 */

 import java.util.ArrayList;

 public class CarLotInventoryDriver {
     public static void main(String[] args) {
        // create array list of cars
         ArrayList<Car> carLotAlpha = new ArrayList<Car>();
         carLotAlpha.add(new Car("Superoo", "Jungler", 2019, 35000));
         carLotAlpha.add(new Car("Hunduh", "Akkord", 2020, 21500));
         carLotAlpha.add(new Car("Foured", "FU-150", 2020, 41999));
         carLotAlpha.add(new Car("Chevruhlay", "Malipoo", 2021, 21999));
         carLotAlpha.add(new Car("Knee-Sawn", "Ultimate", 2023, 22000));
        // run methods defined below
         displayInventory(carLotAlpha);
         displayTotalValue(carLotAlpha);
     }
 
     public static void displayInventory(ArrayList<Car> carLotAlpha) {
        System.out.println("Current Inventory:");
        // The %-15s specifier will print a string with a minimum width of 15 characters and left-align it in the column.
        // The %10d specifier will print an integer with a minimum width of 10 characters and right-align it in the column.
        // The %,.2f specifier will print a floating-point number with two decimal places and commas to separate the thousands place.
        System.out.printf("%-15s %-15s %-10s %s\n", "Make:", "Model:", "Year:", "Price:");
        for (Car car : carLotAlpha) {
            System.out.printf("%-15s %-15s %-10d $%,.2f\n", car.getMake(), car.getModel(), car.getYear(), car.getPrice());
        }
    }
    public static void displayTotalValue(ArrayList<Car> carLotAlpha) {
        double totalValue = 0;
        // iterate through array list and add car prices to total
        for (Car car : carLotAlpha) {
            totalValue += car.getPrice();
        }
        // The %-41s specifier will print a string with a minimum width of 41 characters and left-align it in the column.
        System.out.printf("%-41s $%,.2f\n", "Total value of car lot inventory:", totalValue);
    }
 }
