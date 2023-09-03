//  Module1-Lab1
//  ITSE2445 - C++ Data Structures - Northwest Vista College
//  Author: Andrew Pettus
//  August 28,2023

#include <iostream> // include the iostream library for input/output
#include <iomanip>  // include the iomanip library for formatting
#include <string>   // include the string library
using namespace std;

int main()
{
    string productNameOne; // declare a string variable to store the name of the first product
    string productNameTwo; // declare a string variable to store the name of the second product
    double priceOne;       // declare a string variable to store the price of the first product
    double priceTwo;       // declare a string variable to store the price of the second product
    double totalCost;      // declare a string variable to store the price of the third product

    //prompt the user to enter the name ofo the first product
    cout << "Please enter the first product name: " << endl;
    // read the name of the first product and store it
    cin >> productNameOne;

    //prompt the user to enter the price of the first product
    cout << "Please enter the price of the" << productNameOne;
    cin >> priceOne;

    //prompt the user to enter the name of the second product
    cout << "Please enter the second product name: " << endl;
    // read the name of the second product and store it
    cin >> productNameTwo;

    //prompt the user to enter the price of the second product
    cout << "Please enter the price of the" << productNameTwo;
    cin >> priceTwo;

    //calculate total cost
    totalCost = priceOne + priceTwo;

    //set the formatting for the output
    cout << showpoint << fixed << setprecision(2);
    




}





