/*
Filename: Module5_Lab3_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 10, 2023
Date Modified:September 10, 2023
Description: Module 5 Lab 3; Understand the concept of call-by-reference variables in C++.
License: NLR

Instructions:
----------------------
Objective:
Create a menu program that allows a user to select the following Options form a Menu. This lab will require you to overload a function called addNumbers.
    Add two integer numbers
    Add three integer numbers
    Add two double numbers
    Add three double numbers
    Quit program
Input:
    User Menu Selection
    Prompt and output from user selection
    Prompt user to make another Menu selection of 5 to quit
Process:
Functions to Create:
    Add two integer numbers function
    Add three integer numbers function 
    Add two double numbers function.
    Add three double numbers function
Output:
    Response to user request and menu
Requirements:
    Code Compiles and displays appropriate output
    Please use the same name for ALL the  add functions (overload the functions). You will also need to create a function to display the Menu (choices) to the user. 
Notes:
    Example of Menu:
    Welcome to the Programming 1 Calculator - please enter your selection or enter 0 to exit
    Add Two Integers
    Add Three Integers
    Add Two Doubles
    Add Three Doubles 
    Exit the Program 
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>                                 // include the header file for input and output stream
#include <string>                                   // include the header file for string data type
using namespace std;                                // use the standard namespace
// Function prototypes
int addNumbers(int a, int b);                       // prototype for adding two integers
int addNumbers(int a, int b, int c);                // prototype for adding three integers
double addNumbers(double a, double b);              // prototype for adding two doubles
double addNumbers(double a, double b, double c);    // prototype for adding three doubles
string operations[] = {                             // array for operation names
    "Add two integer numbers", 
    "Add three integer numbers", 
    "Add two double numbers", 
    "Add three double numbers"
}; 
int main() {                                        // main loop begin
    int menuChoice;                                 // variable to store menu choice
    int int1, int2, int3;                           // integer inputs
    double double1, double2, double3, result;       // double inputs and result variable
    while(true) {                                   // infinite loop for menu
        cout << "Math Menu: " << endl;              // menu header
        for (int i = 0; i < 4; ++i) {               // loop to display options
            cout << i + 1 << ". " << operations[i] << endl;
        }
        cout << "Enter your choice, 0 to exit: ";   // choice prompt
        cin >> menuChoice;                          // read choice

        if (menuChoice == 0) {                      // exit condition
            cout << "Exiting Program. Thank you." << endl;
            break;                                  // break the loop
        }
        if (menuChoice < 0 || menuChoice > 4) {     // validation check
            cout << "Invalid choice. Please try again." << endl;
            continue;                               // continue to the next iteration
        }
        cout << "You chose to " << operations[menuChoice - 1] << "!" << endl; // confirm choice
        switch(menuChoice) {                        // switch for menu choices
            case 1: // adding two integers
                cout << "Enter two integers: "; 
                cin >> int1 >> int2; 
                result = addNumbers(int1, int2); 
                cout << int1 << " added to " << int2 << " is equal to " << result << endl; 
                break; 
            case 2: // adding three integers
                cout << "Enter three integers: "; 
                cin >> int1 >> int2 >> int3; 
                result = addNumbers(int1, int2, int3); 
                cout << int1 << " added to " << int2 << " and " << int3 << " is equal to " << result << endl; 
                break; 
            case 3: // adding two doubles
                cout << "Enter two doubles: "; 
                cin >> double1 >> double2; 
                result = addNumbers(double1, double2); 
                cout << double1 << " added to " << double2 << " is equal to " << result << endl; 
                break; 
            case 4: // adding three doubles
                cout << "Enter three doubles: "; 
                cin >> double1 >> double2 >> double3; 
                result = addNumbers(double1, double2, double3); 
                cout << double1 << " added to " << double2 << " and " << double3 << " is equal to " << result << endl; 
                break; 
            default: // unexpected choice
                cout << "Invalid choice. Please try again." << endl; 
        }
    }
    return 0;       // successful execution
}
// Function definitions
int addNumbers(int a, int b) {                      // add two integers
    return a + b; 
}
int addNumbers(int a, int b, int c) {               // add three integers
    return a + b + c; 
}
double addNumbers(double a, double b) {             // add two doubles
    return a + b; 
}
double addNumbers(double a, double b, double c) {   // add three doubles
    return a + b + c; 
}



