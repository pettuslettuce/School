/*
Filename: Inventory.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 3\Inventory.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 3; Inventory.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Inventory.h"                      // include the declaration of the Inventory class

// populated inventory constructor
Inventory::Inventory(const Product& productItem1, const Product& productItem2, const Product& productItem3) {
    productItems[0] = productItem1;         // Storing the first product object in the first position of the productItems array
    productItems[1] = productItem2;         // Storing the second product object in the second position of the productItems array
    productItems[2] = productItem3;         // Storing the third product object in the third position of the productItems array
}

// function to display the details of all products in the inventory
void Inventory::displayAllProductDetails() const {
    for(int i = 0; i < 3; ++i) {            // iterate through each product in the inventory (3 products in total)
        productItems[i].displayDetails();   // Calling the displayDetails method of the current Product object to display its details
        cout << "---------" << endl;        // Printing a separator line after the details of each product
    }
}

// function to calculate the total cost of all products in the inventory
double Inventory::calculateTotalInventoryCost() const {
    double totalCost = 0.0;                                                         // Initializing a variable to store the total cost
    for(int i = 0; i < 3; ++i) {                                                    // iterate through each product in the inventory (3 products in total)
        totalCost += productItems[i].getPrice() * productItems[i].getQuantity();}   // Adding the cost of the current product (price * quantity) to the total cost
    return totalCost;                                                               // Returning the total cost
}
