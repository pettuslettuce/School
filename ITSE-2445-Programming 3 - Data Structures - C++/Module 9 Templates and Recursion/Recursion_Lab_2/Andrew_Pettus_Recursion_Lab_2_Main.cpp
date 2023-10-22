/*
Filename: Andrew_Pettus_Recursion_Lab_2_Main.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Recursion_Lab_2\Andrew_Pettus_Recursion_Lab_2_Main.cpp
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Andrew_Pettus_Recursion_Lab_2_Main.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include "Recursive_Functions.h"  // Include the header file

using namespace std;

int main() {
    int choice, n;

    cout << "Choose a function to use:" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Fibonacci" << endl;
    cout << "3. Sum Of Numbers" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;

    if (choice == 4) {
        return 0;
    }

    cout << "Enter a number: ";
    cin >> n;

    if (choice == 1) {
        cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    } else if (choice == 2) {
        cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    } else if (choice == 3) {
        cout << "sumOfNumbers(" << n << ") = " << sumOfNumbers(n) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
