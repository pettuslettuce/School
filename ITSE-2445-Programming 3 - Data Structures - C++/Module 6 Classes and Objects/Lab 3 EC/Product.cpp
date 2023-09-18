/*
Filename: Product.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 3\Product.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 3; Product.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Product.h"  // Include the Product header file to use the Product class declaration

// default Product constructor implementation
Product::Product() {
    productId = "";
    productName = "";
    price = 0.0;
    quantity = 0;
}

// populated Product constructor implementation
Product::Product(string productIdInput, string productNameInput, double priceInput, int quantityInput) {
    productId = productIdInput;
    productName = productNameInput;
    price = priceInput;
    quantity = quantityInput;
}

// setters
void Product::setProductId(string productIdInput) {
    productId = productIdInput; 
}
void Product::setProductName(string productNameInput) {
    productName = productNameInput; 
}
void Product::setPrice(double priceInput) {
    price = priceInput; 
}
void Product::setQuantity(int quantityInput) {
    quantity = quantityInput; 
}

// getters
string Product::getProductId() const {
    return productId;  
}
string Product::getProductName() const {
    return productName;  
}
double Product::getPrice() const {
    return price;
}
int Product::getQuantity() const {
    return quantity;
}

// function to display the details of the product in a readable format
void Product::displayDetails() const {                  // const because it does not modify any class members
    cout << "Product ID: " << productId << endl;        // display product ID
    cout << "Product Name: " << productName << endl;    // display product name
    cout << "Price:  $" << price << endl;               // display product price prefixed with a dollar sign
    cout << "Quantity: " << quantity << endl;           // display quantity of the product in stock
}
