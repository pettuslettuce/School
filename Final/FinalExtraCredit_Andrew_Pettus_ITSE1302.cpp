//  Chap9-Lab1
//  ITSE1302 NVC
//  Written by Andrew Pettus on November 29,2022

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const int ARRAY_SIZE = 5;
int lotTotal;
struct carDetails
{
    string Make;
    string Model;
    int Year;
    int price;
};
//Create a function that will display the entire inventory of the car lot
void lotInventory(carDetails[], int);
//Create a function that will show the total value of all of the car lots inventory (Total of all cars.)
void lotValuation(carDetails[], int);
int main()
{
    //Create an Array of 5 Car structures (you can pre-populate the data)
    carDetails inventory[ARRAY_SIZE] = 
    {
        {"Fork", "Fission", 2013, 14999},
        {"Superoo", "Impressive", 2018, 23499},
        {"Owdi", "PP", 2014, 34599},
        {"Shevy", "Chaser", 2020, 32999},
        {"Edison", "Elephant", 1903, 1000}
    };
    lotInventory(inventory, ARRAY_SIZE);
    lotValuation(inventory, ARRAY_SIZE);
}

void lotInventory(carDetails pCar[], int pSize)
{
    cout << "************************************ " << endl;
    cout << "Sleazy Sam's Used Car Lot Inventory: " << endl;
    cout << "************************************ " << endl;
    cout << setw(12) << left << "Make: " << setw(12) << left <<  "Model: " << setw(8) << left << "Year: " << setw(10) << left << "Price: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {   
        cout << setw(12) << left << pCar[i].Make << setw(12) << left << pCar[i].Model << setw(8) << left << pCar[i].Year << setw(10) << left <<  pCar[i].price << endl;
    }
}

void lotValuation(carDetails pCar[], int pSize)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {   
        lotTotal = lotTotal + pCar[i].price;
    }
    cout << "************************************ " << endl;
    cout << "Sleazy Sam's Used Car Lot Valuation: " << endl;
    cout << "************************************ " << endl;
    cout << "Total Value of Cars: $" << lotTotal << endl;
}






