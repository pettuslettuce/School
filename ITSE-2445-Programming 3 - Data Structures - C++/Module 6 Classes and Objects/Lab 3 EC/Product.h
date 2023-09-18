/*
Filename: Product.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 3\Product.h
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 3; Product.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef PRODUCT_H       // if not defined...
#define PRODUCT_H       // define header guard that prevents the header file from being included multiple times in a single translation unit
#include <iostream>     // Include the iostream header to use standard input/output stream objects such as cout
#include <string>       // Include the string header to use the string class
using namespace std;    // Use the standard namespace to avoid having to prefix standard library classes and objects with 'std::'4
#endif                  // ends the section of code protected by the header guard

class Product {         // defining a new class called "Product"

    // public access specifier; members under this specifier are accessible from outside the class and can be used by other parts of the program
    public:
        // default constructor declaration. Creates an Product object with uninitialized member variables.
        Product();
        // populated constructor declaration. Creates an Employee object with specified values for member variables.
        Product(string productIdInput, string productNameInput, double priceInput, int quantityInput); // Parameterized constructor declaration - it will initialize Product object with specified values
        // setters
        void setProductId(string productIdInput);       // setter for productId: it allows setting the value of the productId attribute
        void setProductName(string productNameInput);   // setter for productName: it allows setting the value of the productName attribute
        void setPrice(double priceInput);               // setter for price: it allows setting the value of the price attribute
        void setQuantity(int quantityInput);            // setter for quantity: it allows setting the value of the quantity attribute       
        // getters
        string getProductId() const;                    // getter for productId: it allows retrieving the value of the productId attribute without modifying any class members (const)
        string getProductName() const;                  // getter for productName: it allows retrieving the value of the productName attribute without modifying any class members (const)
        double getPrice() const;                        // getter for price: it allows retrieving the value of the price attribute without modifying any class members (const)
        int    getQuantity() const;                     // getter for quantity: it allows retrieving the value of the quantity attribute without modifying any class members (const)
        
        // method declaration to display product details in a readable format. It is const because it doesn't modify any class members
        void displayDetails() const;        
    
    // private access specifier; members under this specifier are not accessible directly from outside the class, helping in encapsulating and protecting the class data
    private:
        string productId;    // stores the product ID as a string
        string productName;  // stores the product name as a string
        double price;        // stores the product price as a double
        int quantity;        // stores the quantity of the product as an integer
};
