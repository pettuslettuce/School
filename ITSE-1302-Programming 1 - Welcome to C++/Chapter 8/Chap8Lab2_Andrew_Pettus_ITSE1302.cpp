//  Chap8Lab2.cpp
//  ITSE1302 NVC
//  Written by Andrew Pettus on Nov/22/2022
/*Create a program to use 2 arrays (string and double). Your String Array will hold the names of cars. 
Your double array will hold the Miles Per Gallon (MPG) of the cars. Please note that the two arrays are parallel arrays 
    - in other words, the index 0 of the array to store the MPG will be associated to the index 0 of the car.

You will need to pre-populate 5 elements in each array. for this lab 
    - I want you to create a function that will take two array arguments and output them as shown below. 
    The output will also indicate "Economical" or "Gas Guzzler"  depending on its fuel consumption. 
    If the car gets better than 30 MPG, indicate it is "Economical", otherwise indicate it is a "Gas Guzzler"
Your output will use a function that takes the 2 Arrays as parameters
*/

#include <iostream>
#include <iomanip>
using namespace std;
const int ARRAY_SIZE = 5;
string carName[ARRAY_SIZE] = {"Fork Fission", "Superoo Impressive", "Shevy Chase", "Hondo Acrid", "Owdi PP"};
double carMPG[ARRAY_SIZE] = {25.4,34.1, 14.5, 31.1, 19.2};
void carReport (string carName[], double carMPG[]);
int main(){
carReport(carName,carMPG);
return 0;
}
void carReport (string carName[], double carMPG[]){

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Car: " << carName[i] << endl;
        cout << "MPG: " << carMPG[i] << endl;
        if (carMPG[i] < 30.0)
        {
            cout << "That's a gas guzzler!" << endl;
        }
        else if (carMPG[i] >= 30.0)
        {
            cout << "That's economical!" << endl;
        }       
    }
}

