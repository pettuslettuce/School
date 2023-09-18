/*
Filename: Inventory.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 3\Inventory.h
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 3; Inventory.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef INVENTORY_H     // if not defined...
#define INVENTORY_H     // define header guard that prevents the header file from being included multiple times in a single translation unit
#include "Product.h"    // Product header file to use the Product class in the Inventory class
using namespace std;    // use names from the standard library without qualifying them with "std::"
#endif                  // ends the section of code protected by the header guard

class Inventory {       // defining a new class called "Inventory"
    
    // public access specifier; members under this specifier are accessible from outside the class and can be used by other parts of the program
    public:
        // populated constructor declaration
        Inventory(const Product& productItem1, const Product& productItem2, const Product& productItem3);
        void displayAllProductDetails() const;      // function declaration to display details of all products in the inventory; does not modify any member variables, so it is declared as const
        double calculateTotalInventoryCost() const; // function declaration to calculate and return the total cost of all products in the inventory; does not modify any member variables, so it is declared as const
    
    // private access specifier; members under this specifier are not accessible directly from outside the class, helping in encapsulating and protecting the class data
    private:
        Product productItems[3];    //array of Product objects to hold the products in the inventory; here are exactly three products, so the array size is 3
};
