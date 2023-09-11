/*
Filename: Module5_Lab1_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 4, 2023
Date Modified:September 4, 2023
Description: Module 5 Lab 1; Create a function for each of the four arithmetic operations
License: NLR

Instructions:
----------------------
Learn to use functions in C++ by implementing a program that performs basic arithmetic operations;
(addition, subtraction, multiplication, division).
• Create a function for each of the four arithmetic operations: add , subt ract , multiply , divide. 
• Each function should take two double parameters and return a double. 
• Use these functions in a main program that allows the user to choose an operation and input two numbers. 
• The program should then output the result of the chosen operation performed on the two input numbers. 
• Create a menu to allow the user to make a selection (the menu repeats until the user enters 0) 
--------------------------------------------------------------------------------------------------------------------------
Notes:
----------------------
Ensure the functions you have created are prototyped before the main and defined after the main. 

Output:
---------------------- 
Output to the user the calculation (show the user the operators, operand, and result)
Example->  4 + 5 = 9
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>                                                           // include iostream library
#include <string>                                                             // include string library
using namespace std;                                                          // use standard namespace
double addition(double a, double b);                                          // addition function prototype
double subtraction(double a, double b);                                       // subtraction function prototype
double multipltication(double a, double b);                                   // multiplication function prototype (note: typo in function name)
double division(double a, double b);                                          // division function prototype
string operations[] = {"Add", "Subtract", "Multiply", "Divide"};              // array holding operation names
int main() {                                                                  // main function
    int menuChoice;                                                           // variable to store the menu choice
    double num1, num2, result;                                                // variables to store the numbers and the result
    while (true) {                                                            // infinite loop to keep the menu running
        cout << "Math Menu: "   << endl;                                      // display menu header
        cout << "1. Add "       << endl;                                      // display addition option
        cout << "2. Subtract "  << endl;                                      // display subtraction option
        cout << "3. Multiply "  << endl;                                      // display multiplication option
        cout << "4. Divide "    << endl;                                      // display division option
        cout << "Enter your choice, 0 to exit. " << endl;                     // prompt user to enter choice
        cin >> menuChoice;                                                    // store user input in menuChoice variable
        if (menuChoice == 0) {                                                // if choice is 0, exit the program
            cout << "Exiting Program. Thank you." << endl;                    // display exit message
            break;                                                            // break out of the loop
        }
        if (menuChoice < 0 || menuChoice > 4) {                               // validate menu choice
            cout << "Invalid choice. Please try again." << endl;              // display error message for invalid choice
            continue;                                                         // skip the rest of the loop iteration
        }
        cout << "You chose to " << operations[menuChoice - 1] << "!" << endl; // confirm user's operation choice
        cout << "Enter your first number: " << endl;                          // prompt for the first number
        cin >> num1;                                                          // store the first number
        cout << "Enter your second number: " << endl;                         // prompt for the second number
        cin >> num2;                                                          // store the second number
        switch (menuChoice) {                                                 // switch case based on menu choice
        case 1:                                                               // addition case
            result = addition(num1, num2);                                    // call addition function
            break;                                                            // break out of switch
        case 2:                                                               // subtraction case
            result = subtraction(num1, num2);                                 // call subtraction function
            break;                                                            // break out of switch
        case 3:                                                               // multiplication case
            result = multipltication(num1, num2);                             // call multiplication function (note: typo in function name)
            break;                                                            // break out of switch
        case 4:                                                               // division case
            if (num2 == 0) {                                                  // check for division by zero
                cout << "Error: Division by zero\n";                          // display error message
                continue;                                                     // skip the rest of the loop iteration
            }
            result = division(num1, num2);                                    // call division function
            break;                                                            // break out of switch
        default:                                                              // default case for invalid choices
            cout << "Invalid menuChoice!\n";                                  // display error message
            continue;                                                         // skip the rest of the loop iteration
        }
        cout << " is equal to " << result << '\n';                            // display the result
    }
    return 0;                                                                 // return 0 indicating successful execution
}
double addition(double a, double b) {                                         // addition function definition
    cout << a << " added to " << b << ends;                                   // display operation
    return a + b;                                                             // return the result
}
double subtraction(double a, double b) {                                      // subtraction function definition
    cout << a << " subtracted from " << b << ends;                            // display operation
    return a - b;                                                             // return the result
}
double multipltication(double a, double b) {                                  // multiplication function definition (note: typo in function name)
    cout << a << " multiplied by " << b << ends;                              // display operation
    return a * b;                                                             // return the result
}
double division(double a, double b) {                                         // division function definition
    cout << a << " divided by " << b << ends;                                 // display operation
    return a / b;                                                             // return the result
}
