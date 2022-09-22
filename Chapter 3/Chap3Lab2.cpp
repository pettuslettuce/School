//  
//  Chap3Lab2.cpp
//  Written by Andrew Pettus on Sep/08/2022
//
//  User Story: As a home owner, I would like to be able to calculate my electric bill, rent, and water bill to have a printable report each month formatted for my records.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() 
{
    // Variable Creation
    string monthName;
    double rentBill = 0.0;
    double elecBill = 0.0;
    double watrBill = 0.0;
    double monthSum = 0.0;

    cout << fixed << showpoint << setprecision(2);

    // User Input Prompts
    cout << "Please enter the month for the list of bills: ";
    getline(cin, monthName);
    cout << endl;

    cout << "Please enter the numerical value of the rent: ";
    cin >> rentBill;
    cout << endl;

    cout << "Please enter the numerical value of the electric bill: ";
    cin >> elecBill;
    cout << endl;

    cout << "Please enter the numerical value of the water bill: ";
    cin >> watrBill;
    cout << endl;

    // Process Total Amount
    monthSum = (rentBill + elecBill + watrBill);

    // Output Results
    cout 
    << "-----------------------------------------------" << endl;
    cout << left << setw(35) << setfill(' ') << "Month: "
         << right << setw(12) << monthName << endl;

    cout << left << setw(35) << "Rent Amount: "
         << setfill(' ') << right << " $" << setw(10)
         << rentBill
         << endl;

    cout << left << setw(35) << "Electricity Bill Cost: "
         << setfill(' ') << right << " $" << setw(10)
         << elecBill
         << endl;

    cout << left << setw(35) << "Water Bill Cost: "
         << setfill(' ') << right << " $" << setw(10)
         << watrBill
         << endl;  

    cout << setfill(' ') << left << setw(35)
         << "Monthly Total: "
         << setfill(' ') << right << " $"
         << setw(10) << monthSum << endl;
         
    return 0;
}