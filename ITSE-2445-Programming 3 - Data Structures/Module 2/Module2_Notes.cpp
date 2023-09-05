//  Module2- Demo
//  ITSE2445 - C++ Data Structures - Northwest Vista College
//  Author: Andrew Pettus
//  August 28,2023

#include <iostream> // include the iostream library for input/output
#include <fstream>  // read and write filrs
#include <iomanip>  // include the iomanip library for formatting
#include <string>   // include the string library
using namespace std;

int main()
{
 // create input and output stream objects
 ifstream inFile;
 ofstream outFile;

 // Local variable declaration
 double testOne, testTwo, testThree, testFour, testFive;
 double testAverage;
 string firstName;
 string lastName;

 // open the input file
 inFile.open("test.txt");

 // If the file cannot be opened, display an error message and terminate the program
if(!inFile) {
    cout << "The file is not found or cannot be opened"
 }

}





