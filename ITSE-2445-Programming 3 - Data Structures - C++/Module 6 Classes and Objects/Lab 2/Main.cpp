/*
Filename: Main.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 2\Main.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 2; Calculator - Main.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Calculator.h"                                          // Including the Calculator header file to access the Calculator class definition
#include <iostream>                                              // Including the iostream header file to facilitate input/output operations
using namespace std;                                             // Using the standard namespace to avoid prefixing standard library names with "std::"
int main() {                                                     // The main function, which serves as the entry point to the program
    Calculator calc(4.0, 2.0);                                   // Creating an instance of the Calculator class with initial values of 4.0 and 2.0 for the first and second numbers, respectively
    cout << "First number: " << calc.getFirstNumber() << endl;   // Displaying the first number using the getFirstNumber method of the Calculator class
    cout << "Second number: " << calc.getSecondNumber() << endl; // Displaying the second number using the getSecondNumber method of the Calculator class
    cout << "Addition: " << calc.add() << endl;                  // Displaying the result of adding the two numbers using the add method of the Calculator class
    cout << "Subtraction: " << calc.subtract() << endl;          // Displaying the result of subtracting the second number from the first using the subtract method of the Calculator class
    cout << "Multiplication: " << calc.multiply() << endl;       // Displaying the result of multiplying the two numbers using the multiply method of the Calculator class
    cout << "Division: " << calc.divide() << endl;               // Displaying the result of dividing the first number by the second using the divide method of the Calculator class
    return 0;                                                    // Returning 0 to indicate successful execution of the program
}
