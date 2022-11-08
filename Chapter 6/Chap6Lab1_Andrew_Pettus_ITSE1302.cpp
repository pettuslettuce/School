//  Chap6Lab1.cpp
//  ITSE1302 NVC
//  Written by Andrew Pettus on Oct/27/2022
#include <iostream>
#include <iomanip>
using namespace std;
// Prototyping
double accountBalance(double pBalance, double pDeposit);
void printHeader();
// Main loop
int main()
{
    cout << fixed << showpoint << setprecision(2);
    double userBalance = 0;
    double userDeposit = 0;
    printHeader();
    // 1)Prompt the user for an initial savings account balance
    cout << "Please enter your initial account balance: " << endl;
    cin >> userBalance;
    // 2)Prompt the user for a deposit amount
    cout << "Please enter your deposit amount: " << endl;
    cin >> userDeposit;
    cout << "Your new account balance is: $" << accountBalance(userBalance, userDeposit) << endl;    
return 0;
}
// 1)Create a function that will take 2 arguments (current balance and deposit amount) and return the calculated balance of the account         
double accountBalance(double pBalance, double pDeposit)
{
return pBalance + pDeposit;
}
// 2)Create a void function as a program header:
void printHeader()
{
    cout << "**********************************************" << endl;
    cout << "                Alamo Bank                    " << endl;
    cout << "**********************************************" << endl;
}
