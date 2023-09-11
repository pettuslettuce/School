/*
Filename: Module5_Lab2_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 4, 2023
Date Modified:September 10, 2023
Description: Module 5 Lab 2; Understand the concept of call-by-reference variables in C++.
License: NLR

Instructions:
----------------------
Objective
Understand the concept of call-by-reference variables in C++.

Understand the difference between call-by-value and call-by-reference variables.

Practice writing functions that use call-by-reference variables.

 Requirements

Write a void function called swapNumber that takes in two integers by reference and swaps their values. Test your function by calling it with two integers and printing out their values before and after the function call.

Write a void function called addXtoY that takes in an integer by reference X and increments its value by the value of Y. Test your function by calling it with an integer by reference for X and an integer for Y and printing out its value before and after the function call.

Notes - Ensure the functions you have created are prototyped before the main and defined after the main. 

Deliverable

Upload the following:

Full source code (.cpp file or .txt file)

Screenshot of the Console with the code executing
--------------------------------------------------------------------------------------------------------------------------
*/
#include<iostream>                        // include for I/O operations
using namespace std;                      // use standard namespace
void swapNumber(int& a, int& b);          // declare swap function for two integers
void addYtoX(int& X, int Y);              // declare function to add Y to X
int main() {                              // main loop begin
    int swapNum1 = 5;                     // initialize swapNum1 with 5
    int swapNum2 = 10;                    // initialize swapNum2 with 10
    int X = 7;                            // initialize X with 7
    int Y = 3;                            // initialize Y with 3
    cout << "Before swapping:" << endl;   // display pre-swap message
    cout << "num1 = " << swapNum1 << ", num2 = " << swapNum2 << endl;   // display initial values
    swapNumber(swapNum1, swapNum2);                                     // swap values of swapNum1 and swapNum2
    cout << "After swapping:" << endl;                                  // display post-swap message
    cout << "num1 = " << swapNum1 << ", num2 = " << swapNum2 << endl;   // display swapped values
    cout << "\nBefore calling addYtoX function:" << endl;               // display pre-addition message
    cout << "X = " << X << ", Y = " << Y << endl;                       // display initial values of X and Y
    addYtoX(X, Y);                                                      // add Y to X
    cout << "After calling addYtoX function:" << endl;                  // display post-addition message
    cout << "X = " << X << ", Y = " << Y << endl;                       // display new value of X and same value of Y
    return 0;                             // return code 0 for potential error handling
}
void swapNumber(int& a, int& b) {         // define function to swap two integers
    int temp = a;                         // temporary variable to hold 'a' value
    a = b;                                // assign 'b' value to 'a'
    b = temp;                             // assign original 'a' value to 'b'
}
void addYtoX(int& X, int Y) {             // define function to add Y to X
    X += Y;                               // add Y to X
}
    
