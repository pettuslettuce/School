//  Chap6Lab1.cpp
//  Written by Andrew Pettus on Oct/27/2022
//
// Input:
// 1)Prompt the user for an initial savings account balance
// 2)Prompt the user for a deposit amount
// Process:
// 1)Create a function that will take 2 arguments (current balance and deposit amount) and return the calculated balance of the account
// 2)Create a void function as a program header:
/*
**********************************************
                Alamo Bank                    
**********************************************

*/

#include <iostream>
#include <iomanip>
using namespace std;

int accountBalance(int Balance, int Deposit);
void printHeader();


int main()
{
printHeader;
accountBalance:
return 0;
}
         
int accountBalance(int Balance, int Deposit, int newBalance)
{
    cout << "Please enter your initial balance: " << endl;
    cin >> Balance;
    cout << "Please enter your deposit amount: " << endl;
    cin >> Deposit;
    newBalance = Balance + Deposit;
    cout << " Your new account balance is: " << newBalance << endl;
    return 0;
}

void printHeader()
{
    cout << "**********************************************" << endl;
    cout << "                Alamo Bank                    " << endl;
    cout << "**********************************************" << endl;
}
