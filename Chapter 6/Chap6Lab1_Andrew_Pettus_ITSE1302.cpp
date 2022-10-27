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
