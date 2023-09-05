/*
Filename: Module1_Lab1_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 3, 2023
Date Modified:September 3, 2023
Description: Module 1 Lab 1; Monthly Bill Calculator and File Output
License: NLR
*/

// Instructions:
//--------------------------------------------------------------------------------------------------------------------------
/*
I would like you to create a program that will calculate the expenses 
for a homeowner to include Rent, Electric Bill, Water Bill
The program will provide user with:

formatted output that they might use for a 
monthly printable report for their records

Variables:
    Name of Month
    Electric bill amount
    Rent Amount
    Water bill amount

The program will write the data to a file. 
The program will name the file (monthName.txt)
Once the program has written the file,
it will open the file, 
read it, and display the contents to the console. 

The objective of this lab is to prompt the user for the four inputs, 
write a file, and read/display the file's contents to the console. 
Please make sure you add comments to your code. 
*/
//--------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Variables:
string nameOfMonth; // name of month variable
double electricBillAmount, rentAmount, waterBillAmount, monthlyTotal; // rent and bills variables

int main() // main loop begin
{
    //Prompt user for all 4 inputs:

    //Name of month
    cout << "Please provide the name of the month to calculate expenses: " << endl;
    getline(cin, nameOfMonth); // getline seems appropriate for a string in case
    cout << endl; // line space
    //Rent amount
    cout << "Please provide the amount for the rent:" << endl;
    cin >> rentAmount; // cin-basic setter
    cout << endl; // line space
    //Electric bill amount
    cout << "Please provide the amount for the electric bill:" << endl;
    cin >> electricBillAmount; // cin-basic setter
    cout << endl; // line space
    //Water bill amount
    cout << "Please provide the amount for the water bill:" << endl;
    cin >> waterBillAmount; // cin-basic setter
    cout << endl; // line space
    //Process total expenses for month
    monthlyTotal = rentAmount + electricBillAmount + waterBillAmount;

    //The program will name the file (monthName.txt). 
    string fileName = nameOfMonth + ".txt";

    //output stream naming and file allocation; *opening*
    ofstream outputFile(fileName);

    // if output file is open...
    if (outputFile.is_open()){
        outputFile  << fixed << showpoint << setprecision(2); // set iomanip point and precision
        outputFile << "The monthly expenses for " << nameOfMonth << ": " << endl; // 1-line file header
        outputFile << setw(23) << left << "Rent: " << right << "$" << setw(8) << rentAmount << endl; // writes rent line with formatting
        outputFile << setw(23) << left << "Electric: " << right << "$" << setw(8) << electricBillAmount << endl; // writes electric line with formatting
        outputFile << setw(23) << left << "Water: " << right << "$" << setw(8) << waterBillAmount << endl; // writes water line with formatting
        //writes line of dashes
        for (size_t i = 0; i < 32; i++)
        {
            outputFile << "-";
        }
        outputFile << endl; // writes end line after dashes
        outputFile << setw(23) << left << "Total: " << right << "$" << setw(8) << monthlyTotal << endl; //writes line total
    }
    else {
        cout << "Cannot open the file for writing."; // file open write error
        return 1; // potential return code for open write error
    }
    outputFile.close(); // close output file
    // Read and display data from file
    ifstream inputFile(fileName); // input stream naming and file allocation *opening*
    string textLine; // text line that will output to console

    // if input file is open...
    if (inputFile.is_open())
    {
        while (getline(inputFile, textLine)) //attempts to read line from 'inputFile' and store it to 'textLine' variable;
        //for each while loop, we move to the next line in 'inputFile' and repeat the process untill there are no more lines to be read
        {
            cout << textLine << endl; // outputs current line from 'inputFile'
        }
        inputFile.close(); // close input file
    }
    else{
        cout << "Unable to open the file for reading." << endl; // file open read error
        return 2; // potential return code for open read error
    }

return 0; // potential return code for no errors
}

    