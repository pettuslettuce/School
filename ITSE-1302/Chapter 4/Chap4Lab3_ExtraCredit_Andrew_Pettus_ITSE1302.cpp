//  Chap4Lab3.cpp
//  Written by Andrew Pettus on Oct/3/2022
//
//  Write a program that prompts the user to enter the number of rooms booked and the number of days the rooms are booked. 
//  The program will output to the user a final bill.
//
//  The cost of renting a room at the Alamo hotel is over $100.00 per night. 
//  For special occasions, such as a wedding or conference, the hotel offers a special discount as follows:
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() 
{

// Declaring variables:

double roomCost = 100.00, subTotal = 0, bookingTotal = 0, taxTotal = 0,  discountTotal = 0, discountRoomsTotal = 0, discountRate = 0, discountBonus = 0;
//  There is an 8% sales tax applied to the total charge
const double salesTax = .08;
int daysBooked = 0, roomCount = 0;
ofstream outFile;
string eventName;

//  Inputs:

//  Event Name
cout << "What is the name of the customer's event?: " << endl;
cin.sync();
getline (cin, eventName);
//  Number of Rooms (if user enters less than 3 rooms - set room number to 3)
cout << "How many rooms in the customer's booking?: " << endl;
cin >> roomCount;
if (roomCount <3)
    roomCount = 3;
//  Cost of each Room (if user enters number less than 100.00 - set the room cost to 100.00)
cout << "Current room rate: " << endl;
cin >> roomCost;
if (roomCost < 100)
    roomCost = 100;
//  Number of Days to book the rooms
cout << "Number of days customer wants to book: " << endl;
cin >> daysBooked;

// Room discounts:
if (roomCount < 3){
    discountRate = 0;
}
//  If the number of rooms booked is at least 3, the discount is 10%;
else if (roomCount == 3 || roomCount == 4){
    discountRate = .1;
}
//  If the number of rooms booked is at least 5, the discount is 20%;
else if (roomCount >= 5 && roomCount < 10){
    discountRate = .2;
}
//  If the number of rooms booked is at least 10, the discount is 30%.
else if (roomCount >= 10){
    discountRate = .3;  
}
//  Also if rooms are booked for at least three days, then there is an additional 5% discount.
if (daysBooked >=3){
    discountBonus = .05;
}

//  Process:

//  Subtotal of all room costs without discount
subTotal = roomCost * daysBooked * roomCount;
//  Subtotal of the discount
discountTotal = (subTotal * discountRate) + (subTotal * discountBonus);
//  Subtotal of all room costs with discount
discountRoomsTotal = subTotal - discountTotal;
//  Total Tax (computed on discounted subtotal)
taxTotal = (subTotal - discountTotal) * salesTax;
//  Total Amount due - after discount
bookingTotal = subTotal + taxTotal - discountTotal;

// Outputs, screen output and file output:
outFile.open("bookingInfo.txt");
outFile << fixed << showpoint << setprecision(2);
cout << fixed << showpoint << setprecision(2);
// Event Name - with some flavor
cout << "Thanks for choosing the Alamo Hotel. \nThe booking information for the " << eventName << " event is as follows: " << endl;
outFile << "Thanks for choosing the Alamo Hotel. \nThe booking information for the " << eventName << " event is as follows: " << endl;
// The Cost of renting one room without discount
cout << "The cost of renting one room without discount is: $" << roomCost << endl;
outFile << "The cost of renting one room without discount is: $" << roomCost << endl;
// The Cost of all rooms without discount
cout << "The cost of all rooms without discount: $" << subTotal << endl;
outFile << "The cost of all rooms without discount: $" << subTotal << endl;
// The Cost of renting one room with discount
cout << "The cost of renting one room with discount: $" << roomCost - (roomCost * discountRate) - (roomCost * discountBonus) << endl;
outFile << "The cost of renting one room with discount: $" << roomCost - (roomCost * discountRate) - (roomCost * discountBonus) << endl;
// The Cost of all rooms with discount
cout << "The cost of all rooms with discount: $" << discountRoomsTotal << endl;
outFile << "The cost of all rooms with discount: $" << discountRoomsTotal << endl;
// Total Discount applied
cout << "Total discount applied: $" << discountTotal << endl;
outFile << "Total discount applied: $" << discountTotal << endl;
// Tax
cout << "Total sales tax: $" << taxTotal << endl;
outFile << "Total sales tax: $" << taxTotal << endl;
// Total Owed by customer for all rooms
cout << "Total owed by customer for all rooms: $" << bookingTotal << endl;
outFile << "Total owed by customer for all rooms: $" << bookingTotal << endl;

//Close File
outFile.close(); 
}      
    
