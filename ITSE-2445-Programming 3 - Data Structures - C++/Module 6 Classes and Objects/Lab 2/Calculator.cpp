/*
Filename: Calculator.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 2\Calculator.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 2; Calculator.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Calculator.h"         // dalculator header file which contains the declaration of the Calculator class
using namespace std;            // using the standard namespace to avoid prefixing standard library names with "std::"

// populated Calculator constructor implementation
Calculator::Calculator(double first, double second) {
    first_number = first;       // Assigning the first parameter to the first_number member variable
    second_number = second;     // Assigning the second parameter to the second_number member variable
}

//Setters
void Calculator::setFirstNumber(double value) {
    first_number = value;
}
void Calculator::setSecondNumber(double value) {
    second_number = value;
}

//Getters
double Calculator::getFirstNumber() const {
    return first_number;
}
double Calculator::getSecondNumber() const {
    return second_number;
}

//Calculator Processing Functions, division has /0 handler
double Calculator::add() const {
    return first_number + second_number;
}
double Calculator::subtract() const {
    return first_number - second_number;
}
double Calculator::multiply() const {
    return first_number * second_number;
}
double Calculator::divide() const { 
    if (second_number == 0) {                       // if second_number is zero...
        cerr << "Error: Division by zero." << endl; // ...display error message if attempt to divide by zero
        return 0;  }                                // return 0 for potential error handling
    return first_number / second_number;            // return result of division if second_number is not zero
}
