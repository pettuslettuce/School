//  Chap4Lab2.cpp
//  Written by Andrew Pettus on Oct/2/2022
//  Jane bought several acres of farm to grow and sell vegetables. 
//  Suppose that Jane wants to grow two types of vegetables.
//  Write a program that prompts Jane to do the following:
//  

#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
//  Variable Creation:
double totalAcres = 0, firstAcreage = 0, secondAcreage = 0, vegOneSeedCost = 0, vegTwoSeedCost = 0, vegOneTotalCost = 0, vegTwoTotalCost = 0, totalAcreageCost = 0;
string veggie1, veggie2;

//  Inputs:
//  Enter the total farm area in acres.
cout << "Plain Jane with your farm on a plane, how many acres are in your farm?: " << endl;
cin >> totalAcres;
//  Enter the name of the first Vegetable
cout << "Jane, please tell me the name of the first vegetable you would like to grow: " << endl;
cin.sync();
getline (cin, veggie1);
//  Enter the number of acres of the the farm land used for the first Vegetable
cout << "How many acres would you like to dedicate to " << veggie1 << "?" << endl;
cin >> firstAcreage;
//  Enter the cost of the seed for the first Vegetable per acre
cout << "Jane, what's the seed cost per acre of " << veggie1 << "? " << endl;
cin >> vegOneSeedCost;
//  Enter the name of the second Vegetable
cout << "Jane, please tell me the name of the second vegetable you would like to grow: " << endl;
cin.sync();
getline (cin, veggie2);
//  Enter the cost of the seed for the second Vegetable per acre
cout << "Jane, what's the seed cost per acre of " << veggie2 << "? " << endl;
cin >> vegTwoSeedCost;

//  Processing:
// Compute the remaining acreage 
secondAcreage = totalAcres - firstAcreage;
//  Compute the total cost of seeds for the first veggie
vegOneTotalCost = vegOneSeedCost * firstAcreage;
//  Compute the total cost of seeds for the second veggie
vegTwoTotalCost = vegTwoSeedCost * secondAcreage;
//  Compute the cost of seeds for the entire crop
totalAcreageCost = vegOneTotalCost + vegTwoTotalCost;

//  Output:
cout << fixed << showpoint << setprecision(2);
//  Name, number of acres, and total cost of first Vegetable
cout << "Vegetable One: " << veggie1 << endl;
cout << setw(18) << "Acres: " << setw(1) << right << firstAcreage << endl;
cout << setw(17) << "Cost: " << setw(1) << right << vegOneTotalCost << endl;
//  Name, number of acres, and total cost of second Vegetable
cout << "Vegetable Two: " << veggie2 << endl;
cout << setw(18) << "Acres: " << setw(1) << right << secondAcreage << endl;
cout << setw(17) << "Cost: " << setw(1) << right << vegTwoTotalCost << endl;
//  Total cost of crops
cout << "Total Cost: " << totalAcreageCost << endl;
//  Tell Jane which Vegetable she will spend the most money on. (the most expensive to grow based on the total Vegetable cost) 
if (vegOneTotalCost > vegTwoTotalCost){
    cout << veggie1 << " will be the more expensive crop to plant.";
}
else if (vegOneTotalCost < vegTwoTotalCost){
    cout << veggie2 << " will be the more expensive crop to plant.";
}
}
         
    
