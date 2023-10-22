/*
Filename: Andew_Pettus_Recursion_Lab_1_Digit_Counter.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 9 Templates and Recursion\Recursion_Lab_1\Andew_Pettus_Recursion_Lab_1_Digit_Counter.cpp
Author: Andrew Pettus
Date Created: October 8, 2023
Date Modified:October 8, 2023
Description: Module 9 Recursion and Templates; Andew_Pettus_Recursion_Lab_1_Digit_Counter.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include "Digit_Counter.h"  // Include our DigitCounter header

using namespace std;

// Main loop
int main() {
   int num;
   int digits;

   cout << "Please enter an integer to count the digits of: " << endl;
   cin >> num;
   digits = DigitCount(num);
   
   cout << num << " has " << digits << " digits" << endl;
   return 0;
}
