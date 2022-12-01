//  Chap9-Lab1
//  ITSE1302 NVC
//  Written by Andrew Pettus on November 29,2022

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int ARRAY_SIZE = 5;

struct carDetails
{
    string Make;
    string Model;
    int Year;
    int price;
};

//Create a function that will display the entire inventory of the car lot
void lotInventory(
//Create a function that will show the total value of all of the car lots inventory (Total of all cars.)
    //void lotValue(carDetails);

int main()
{
    //Create an Array of 5 Car structures (you can pre-populate the data)
    
    carDetails decemberInventory[ARRAY_SIZE] = 
    {
        {"Fork", "Fission", 2013, 14999},
        {"Superoo", "Impressive", 2018, 23000},
        {"Owdi", "PP", 2014, 24500},
        {"Shevy", "Chaser", 2020, 36975},
        {"Edison", "Elephant", 1903, 34999}
    };
    
    lotInventory(


}

void lotInventory(
{
    cout << "************************************ " << endl;
    cout << "Sleazy Sam's Used Car Lot Inventory: " << endl;
    cout << "************************************ " << endl;
    cout << setw(12) << "Make: " << setw(18) << "Model: " << setw(8) << "Year: " << setw(10) << "Price: " << endl;
    cout << pCar[0].Make << endl;

}




