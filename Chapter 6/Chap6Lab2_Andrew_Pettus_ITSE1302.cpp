//  Chap6Lab1.cpp
//  Written by Andrew Pettus on Oct/27/2022
//
/*
You are going to Modify the program you wrote in Chapter 5 - Lab 3. 
The program you wrote was to create a program "Box" that will ask the user for a character, 
as well as the length and Height of the box and output to the terminal the Box information and character based depiction of the box. 

The program will tell the user the Length and Width of the box , 
indicate if it is a rectangle  or a square, and output the box using the character on the terminal.

Input:
Length of Box
Height of Box
Character used for visual box display

Output:
Box Length
Box Height
Message to the user that the box is either a rectangle or a square
Visual Representation of the Box using the user identified character

Functions to Create:
Void function PrintHeader() - Create a Header to display  to the user similar to the function your wrote for the Module 6 - Lab 1). The Header will display "Box Program" as its title.
DrawBox(int length, int width, char charToDisplay) - the function will create the box as shown below and output to the screen
PrintShapeType(int length, int width) - the function will display to the console the shape type (rectangle  or square)

*/

#include <iostream>
#include <iomanip>
using namespace std;

int accountBalance(double Balance, double Deposit);
void printHeader();


int main()
{
    cout << fixed << showpoint << setprecision(1);

    double userBalance = 0;
    double userDeposit = 0;

    printHeader();
    cout << "Please enter your initial account balance: " << endl;
    cin >> userBalance;
    cout << "Please enter your deposit amount: " << endl;
    cin >> userDeposit;
    cout << "Your new account balance is: $" << accountBalance(userBalance, userDeposit) << endl;
    
return 0;
}
         
int accountBalance(double Balance, double Deposit)
{
cout << Balance + Deposit;
return 0;
}

void printHeader()
{
    cout << "**********************************************" << endl;
    cout << "                Alamo Bank                    " << endl;
    cout << "**********************************************" << endl;
}
