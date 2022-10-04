//  Chap4Lab1.cpp
//  Written by Andrew Pettus on Oct/1/2022
//
//  Write a program that prompts the user to input a number. 
//  The program should then output the number and a message saying whether the number is positive, negative, or zero.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

//  Variable Creation:
double userNumber = 0.0;

//  Inputs:
//  User entered number
cout << "Hello user, please enter a number: ";
cin >> userNumber;
cout << endl;

//  Processing + Output:
cout << fixed << showpoint << setprecision(2);

//  Is the number positive, negative, or zero; output message for each condition
if (userNumber > 0) {
    cout << "Your number, " << userNumber << ", is positively positive!" << endl;
}
else if (userNumber == 0) {
    cout << "Your number,  " << userNumber << ", is zygomorphically zero!" << endl;
}
else if (userNumber < 0) {
    cout << "Your number,  " << userNumber << ", is notoriously negative!" << endl;
}
return 0;
}
         
    
