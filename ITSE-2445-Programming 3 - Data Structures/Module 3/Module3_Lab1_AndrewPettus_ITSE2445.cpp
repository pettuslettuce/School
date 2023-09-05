/*
Filename: Module3_Lab1_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 3, 2023
Date Modified:September 3, 2023
Description: Module 3 Lab 1; Multiplication Table
License: NLR
*/

// Instructions:
//--------------------------------------------------------------------------------------------------------------------------
/*
In this lab, you will create a C++ program that generates a multiplication table of a given size using nested loops. 
A multiplication table is where each cell is the product of its row and column numbers.

The user will provide the input (for example user enters 12 and you generate a table of 12 by 12)

The output is formatted (here, use the setw(x) to line up the output)

//Deliverable
Upload the following:

    Full source code (.cpp file or .txt file)
    Screenshot of the Console with the code executing

Optional Challenge (+ 50 points)
Your output will generate an HTML page (use HTML table tags for your multiplication table). 
To complete this challenge - you will need to research some HTML tags. To solve it, you will have your code output to a file (example myLab.html)
*/
//--------------------------------------------------------------------------------------------------------------------------

#include <iostream> // required for input and output with console
#include <iomanip>  // required for set width function
#include <fstream>  // required for file output functions
using namespace std;

//Variables:
int tableSize;

int main() // main loop begin
{
    //Prompt user for table size
    cout << "Please enter the size of your multiplication table: ";
    cin >> tableSize;

    // create and open a new html file for output
    ofstream myHtmlFile ("multiplication_table.html");

    // output html formatting, thanks google!
    myHtmlFile << "<!DOCTYPE html>" << endl;
    myHtmlFile << "<html>" << endl;
    myHtmlFile << "<head>" << endl;
    myHtmlFile << "  <title>Multiplication Table</title>" << endl;
    myHtmlFile << "  <style>" << endl;
    myHtmlFile << "    td {" << endl;
    myHtmlFile << "      text-align: center;" << endl;
    myHtmlFile << "    }" << endl;
    myHtmlFile << "  </style>" << endl;
    myHtmlFile << "</head>" << endl;
    myHtmlFile << "<body>" << endl;
    myHtmlFile << "<h1>Multiplication Table</h1>" << endl;
    myHtmlFile << "<table border=\"1\">" << endl;

    // use nested loops to generate table (similar to the box problem!)
    for(int row = 1; row <= tableSize; ++row) { // row handling
        myHtmlFile << "    <tr>";  // Start a new table row in HTML
        for(int col = 1; col <= tableSize; ++col) { // column handling
            int product = row * col; // product for specific cell
            // write to html file
            myHtmlFile << "<td>" << product << "</td>";
            // output to user
            cout << setw(4) << product;  // setw is used for formatting output
        }
        // write HTML table row and move to the next line
        myHtmlFile << "</tr>" << endl; 
        // output next line for user
        cout << endl;
    }
    // wrap up html file 
    myHtmlFile << "</table>" << endl; // end table
    myHtmlFile << "</body>" << endl;
    myHtmlFile << "</html>" << endl; 

    // close html file
    myHtmlFile.close();

}