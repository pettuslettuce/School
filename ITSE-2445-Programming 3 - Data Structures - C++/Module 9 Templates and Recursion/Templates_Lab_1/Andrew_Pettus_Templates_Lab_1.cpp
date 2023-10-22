/*
Filename: Andrew_Pettus_Templates_Lab_1.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Templates_Lab_1\Andrew_Pettus_Templates_Lab_1.cpp
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Andrew_Pettus_Templates_Lab_1.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

// Including necessary header files.
#include <iostream>
#include "Templates_Template.h"  // Include the template header

using namespace std;  // Including using namespace std

int main() {
    // Prompting user for four string inputs.
    cout << "Enter four strings separated by a whitespace: ";
    // Declaring variables to store the string inputs.
    string stringArg1, stringArg2, stringArg3, stringArg4;
    // Reading string inputs.
    cin >> stringArg1;
    cin >> stringArg2;
    cin >> stringArg3;
    cin >> stringArg4;
    // Displaying the order of the entered strings using the CheckOrder function.
    cout << "String Order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;

    // Prompting user for four double inputs.
    cout << "Enter four doubles separated by a whitespace: ";
    // Declaring variables to store the double inputs.
    double doubleArg1, doubleArg2, doubleArg3, doubleArg4;
    // Reading double inputs.
    cin >> doubleArg1;
    cin >> doubleArg2;
    cin >> doubleArg3;
    cin >> doubleArg4;
    // Displaying the order of the entered doubles using the CheckOrder function.
    cout << "Double Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;
   
    // Prompting user for four character inputs.
    cout << "Enter four characters separated by a whitespace: ";
    char charOne, charTwo, charThree, charFour;
    cin >> charOne >> charTwo >> charThree >> charFour;
    // Displaying the order of the entered characters using the CheckOrder function.
    cout << "Character Order: " << CheckOrder(charOne, charTwo, charThree, charFour) << endl;

    // Exiting the main function.
    return 0;
}
