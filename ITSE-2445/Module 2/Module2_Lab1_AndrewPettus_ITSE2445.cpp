/*
Filename: Module2_Lab1_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 3, 2023
Date Modified:September 3, 2023
Description: Module 2 Lab 1; Book Publisher Value Compare
License: NLR
*/

// Instructions:
//--------------------------------------------------------------------------------------------------------------------------
/*
A new author is in the process of negotiating a contract for a new textbook. 
The publisher is offering three options:
Option 1 - the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published. 

Option 2 - the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 

Option 3 - the author is paid 10% of the net price for the first 4,000 copies sold, 
and 14% of the net price for the copies sold over 4,000. 

The author has some idea about the number of copies that will be sold 
and would like to have an estimate of the royalties generated under each option. 
Write a program that prompts the author to enter the net price of each copy of the novel,
and the estimated number of copies that will be sold. 
The program then outputs the royalties under each option and the best option the author could choose. 
(Use appropriately named constants to store the special values such as royalty rates and fixed royalties.)

Input:
    Number of Copies Sold
    Price of each copy

Output:
    Royalties for Option 1, 2, and 3
    Recommendation of the option that would be the best choice for the author. 
*/
//--------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Variables:
int booksVended;    //Number of Copies Sold
double bookPrice;   //Price of each copy
double optionOne, optionTwo, optionThree; //three pricing options for author

//custom function to calculate option3 royalties
double processOptionThree(double bookPrice, int booksVended);

int main() // main loop begin
{
    //Prompt user for both inputs
    cout << "Please provide number of books that have sold: " << endl;
    cin >> booksVended;
    cout << "Please provide the price per copy of said book: " << endl;
    cin >> bookPrice;
    //Option 1 - the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published"
    //No processing occurs with inputs; this is simply $25,000
    optionOne = 25000;
    //Option 2 - the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
    optionTwo = 0.125 *(booksVended * bookPrice);
    //Option 3 - the author is paid 10% of the net price for the first 4,000 copies sold, 
    //and 14% of the net price for the copies sold over 4,000. 
    optionThree = processOptionThree(bookPrice, booksVended);
    cout  << fixed << showpoint << setprecision(2); // set iomanip point and precision
    //Output Royalties for Option 1, 2, and 3
    cout << "Option 1:  $" << optionOne << endl;
    cout << "Option 2:  $" << optionTwo << endl;
    cout << "Option 3:  $" << optionThree << endl;
    // compare the options and provide best value for author (largest number)
    double largest = optionOne; // create a variable to store largest amount
    bool isOneLargest = true, isTwoLargest = false, isThreeLargest = false; // create boolean flags to determine largest
    // determine largest and set appropriate boolean flags
    if (optionTwo > largest)
    {
        largest = optionTwo;
        isOneLargest = false;
        isTwoLargest = true;
    }
    if (optionThree > largest)
    {
        largest = optionThree;
        isOneLargest = false;
        isTwoLargest = false;
        isThreeLargest = true;
    }
    // check for equalities with comparitor and eliminator
    if (optionOne == largest && !isOneLargest) isOneLargest = true;
    if (optionTwo == largest && !isTwoLargest) isTwoLargest = true;
    if (optionThree == largest && !isThreeLargest) isThreeLargest = true;
    // processing to determine and output equal options as well as best value
    cout << "The largest dollar amount is $" << largest << ". You should pick ";
    if (isOneLargest && isTwoLargest && isThreeLargest) {
        cout << "Option 1, Option 2, Option 3. They are all equal."; // option if all 3 amounts were equal
    } else {
        if (isOneLargest) cout << "Option 1";
        if (isOneLargest && isTwoLargest) cout << " or ";
        if (isTwoLargest) cout << "Option 1";
        if ((isOneLargest || isTwoLargest) && isThreeLargest) cout << " or ";
        if (isThreeLargest) cout << "Option 3";
            //conditionals if any two amounts were equal
          if (isOneLargest && isTwoLargest) cout << ". Option 1 and Option 2 are equal."; 
        else if (isOneLargest && isThreeLargest) cout << ". Option 1 and Option 3 are equal.";
        else if (isTwoLargest && isThreeLargest) cout << ". Option 2 and Option 3 are equal.";
        else cout << ".";
    }
}
double processOptionThree(double bookPrice, int booksVended){
    //create starting variable to hold royality amount
    double optionThreeTotal = 0;
    //Rate for first 4000 book copies
    double rateBefore4k = 0.10;
    //Rate for more than 4000 book copies
    double rateAfter4k = 0.14;
    if (booksVended <= 4000){
        optionThreeTotal = booksVended * bookPrice * rateBefore4k;
    }
    else{
        optionThreeTotal = 4000 * bookPrice * rateBefore4k;
        optionThreeTotal += (booksVended - 4000) * bookPrice * rateAfter4k;
    }
    return optionThreeTotal;
}
