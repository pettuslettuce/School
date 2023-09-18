/*
Filename: Main.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 3\Main.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 3; Product - Main.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Inventory.h"  // Include the Inventory header file to use the Inventory class
using namespace std;    // Use the standard namespace to avoid having to prefix standard library classes and objects with 'std::'
int main() {            // main loop begin
    // Create three Product objects with specified values for product ID, name, price, and quantity using the parameterized constructor
    Product productItem1("WWIT-9000", "Wacky Wailing Inflatable Tube-Man 9000", 129.99, 12);    // Create productItem1 with specified values
    Product productItem2("PLUM-99", "Special-Edition Plumbus with Extra Schleem", 4878, 1);     // Create productItem2 with specified values
    Product productItem3("DNG-48", "Dinglebop 48th Edition", 0.99, 144000);                     // Create productItem3 with specified values
    Inventory productInventory(productItem1, productItem2, productItem3);                       // Create an Inventory object and initialize it with the three Product objects created above using the parameterized constructor of the Inventory class
    productInventory.displayAllProductDetails();                                                // Call the method to display details of all products in the inventory
    double totalInventoryCost = productInventory.calculateTotalInventoryCost();                 // Calculate the total cost of the inventory by calling the method that calculates the total cost
    cout << "Total cost of the inventory: $" << totalInventoryCost << endl;                     // Display the total cost of the inventory to the standard output
    return 0;                                                                                   // Return 0 to indicate that the program has executed successfully

}
