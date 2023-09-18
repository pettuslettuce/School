/*
Filename: Calculator.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 2\Calculator.h
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 2; Calculator.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef CALCULATOR_H    // if not defined...
#define CALCULATOR_H    // define header guard that prevents the header file from being included multiple times in a single translation unit
#include <iostream>     // Includes the input/output stream header file which provides facilities for input and output through streams
using namespace std;    // use names from the standard library without qualifying them with "std::"
#endif                  // ends the section of code protected by the header guard

class Calculator {      // defining a new class called "Calculator"

    // private access specifier; members under this specifier are not accessible directly from outside the class, helping in encapsulating and protecting the class data
    private:                                    // specifies a private access modifier section, members in this section are accessible only within the class
        double first_number;                    // declares a private attribute to hold the first number in a calculation, it is of type double to allow decimal numbers
        double second_number;                   // declares a private attribute to hold the second number in a calculation, it is of type double to allow decimal numbers
    // public access specifier; members under this specifier are accessible from outside the class and can be used by other parts of the program
    public:
        // populated constructor declaration
        Calculator(double first = 0.0, double second = 0.0); 
        // Setters
        void setFirstNumber(double value);      // declares a method to set the value of the first number attribute with a new value
        void setSecondNumber(double value);     // declares a method to set the value of the second number attribute with a new value
        // Getters
        double getFirstNumber() const;          // declares a const method to get the value of the first number; const indicates that it does not modify any class attributes
        double getSecondNumber() const;         // declares a const method to get the value of the second number; const indicates that it does not modify any class attributes
        // Methods to perform arithmetic operations
        double add() const;                     // declares a const method to add the two numbers together; const indicates that it does not modify any class attributes
        double subtract() const;                // declares a const method to subtract the second number from the first; const indicates that it does not modify any class attributes
        double multiply() const;                // declares a const method to multiply the two numbers together; const indicates that it does not modify any class attributes
        double divide() const;                  // declares a const method to divide the first number by the second; const indicates that it does not modify any class attributes
    
};
