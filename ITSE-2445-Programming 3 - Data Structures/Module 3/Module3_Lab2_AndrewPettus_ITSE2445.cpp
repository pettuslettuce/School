/*
Filename: Module3_Lab2_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 3, 2023
Date Modified:September 3, 2023
Description: Module 3 Lab 2; Annual Salary Calculator
License: NLR
*/

// Instructions:
//--------------------------------------------------------------------------------------------------------------------------
/*
The program below repeatedly asks the user to enter an annual salary, stopping when the user enters 0 or less. 
The program determines the tax rate for each annual salary and computes the tax to pay.

    Run the program below with annual salaries until the user enters 0.

    Tax Rates: 
        Annual Salary is less than 20,000 - the tax rate is 5%
        Annual Salary is less than 40,000 - the tax rate is 10%
        Annual Salary is less than 60,000 - the tax rate is 15%
        Annual Salary is less than 80,000 - the tax rate is 20%
        Annual Salary is greater or equal to 80,000 - the tax rate is 25% 

    For each pass in the loop, show:
        Annual Salary amount
        Tax Rate used
        Tax withheld amount
        Total pay (Annual Salary - Taxes paid)
*/
//--------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Variables:
double annualSalary, taxRate, taxWithheld, totalPay;

int main() // main loop begin
{
    while (true) // break out later with condition
    {
        cout << "Please enter your annual salary or enter 0 or less to exit: " << endl;
        cin >> annualSalary;
        // break out of the loop if the user enters 0 or less
        if (annualSalary <= 0){
            break;
        }
        // determine tax based on annual salary
        if (annualSalary < 20000)
        {
            taxRate = 5.0;
        }
        else if (annualSalary < 40000)
        {
            taxRate = 10.0;
        }
        else if (annualSalary < 60000)
        {
            taxRate = 15.0;
        }
        else if (annualSalary < 80000)
        {
            taxRate = 20.0;
        }
        else{
            taxRate = 25.0;
        }

        // process tax witheld and totalpay
        taxWithheld = (taxRate / 100) * annualSalary;
        totalPay = annualSalary - taxWithheld;
        
        // display results
        cout << fixed << showpoint << setprecision(2); // set iomanip point and precision
        cout << "Annual Salary: $" << annualSalary << endl; 
        cout << "Tax Rate: " << taxRate << "%" << endl; 
        cout << "Tax Withheld: $" << taxWithheld << endl; 
        cout << "Total Pay: $" << totalPay  << endl;
    }
    // create exitCode for output and return function
    int exitCode = 0;
    cout << "Program has ended with exit code: " << exitCode << endl;
    return exitCode; 
}