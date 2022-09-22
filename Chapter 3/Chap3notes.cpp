//
//  main.cpp
//  Module3Demo//
//  Demo 3.8
//  Created by Kevin Roark on 8/23/22.
// 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    // initialize all the needed Variables
    string movieName;
    const double adultTicketPrice = 14.95;
    const double childTicketPrice = 9.95;
    int noOfAdultTicketsSold;
    int noOfChildTicketsSold;
    double grossAmount;


    cout << fixed << showpoint << setprecision(2);  //Set up our cout for our numbers

    cout << "Enter the movie name: ";              //Get the name of the movie
    getline(cin, movieName);                        //Using the getline - read in the full name of the movie
    cout << endl;                                  //add a newline
   

    cout << "Enter the number of adult tickets to buy: ";
    cin >> noOfAdultTicketsSold;                    // store the number adult tickets you want to buy
    cout << endl;

    cout << "Enter the number of child tickets to buy: ";
    cin >> noOfChildTicketsSold;                    // store the number child tickets you want to buy
    cout << endl;
    //calculate the amount due
    grossAmount = (adultTicketPrice * noOfAdultTicketsSold) + (childTicketPrice * noOfChildTicketsSold);
           
    // Output results
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << setfill('.') << left << setw(35) << "Movie Name: "
        << right << " " << movieName << endl;
    cout << left << setw(35) << "Number of Tickets Sold: "
        << setfill(' ') << right << setw(10)
        << noOfAdultTicketsSold + noOfChildTicketsSold
        << endl;
    cout << setfill('.') << left << setw(35)
        << "Gross Amount: "
        << setfill(' ') << right << " $"
        << setw(8) << grossAmount << endl;
    return 0;
}