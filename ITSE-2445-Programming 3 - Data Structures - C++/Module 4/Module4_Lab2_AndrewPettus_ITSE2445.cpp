/*
Filename: Module4_Lab2_AndrewPettus_ITSE2445.cpp
Author: Andrew Pettus
Date Created: September 4, 2023
Date Modified:September 4, 2023
Description: Module 4 Lab 2; 
License: NLR
Instructions:
----------------------
Create a program to use 2 arrays (string and double). Your String Array will hold the names of cars. 
Your double array will hold the Miles Per Gallon (MPG) of the cars. Please note that the two arrays are parallel arrays 
In other words, the index 0 of the array to store the MPG will be associated to the index 0 of the car.
You will need to pre-populate 5 elements in each array. for this lab 
Create a function that will take two array arguments and output them as shown below. 
The output will also indicate "Economical" or "Gas Guzzler"  depending on its fuel consumption. 
If the car gets better than 30 MPG, indicate it is "Economical", otherwise indicate it is a "Gas Guzzler"
Your output will use a function that takes the 2 Arrays as parameters
--------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>                                                                                          // Include the iostream header for console I/O operations like cin and cout
#include <iomanip>                                                                                           // Include the iomanip header for stream manipulations
using namespace std;                                                                                         // Use the Standard Library namespace to avoid using std:: before every standard library object
const int ARRAY_SIZE = 5;                                                                                    // Declare a constant integer 'ARRAY_SIZE' to define the size of the arrays
string carName[ARRAY_SIZE] = {"Fork Fission", "Superoo Impressive", "Shevy Chase", "Hondo Acrid", "Owdi PP"};// Initialize a string array 'carName' with fun fake names of cars; ARRAY_SIZE is used to define its size
double carMPG [ARRAY_SIZE] = {          25.4,                 34.1,          14.5,          31.1,      19.2};// Initialize a double array 'carMPG' with miles-per-gallon (MPG) values for cars; ARRAY_SIZE is used to define its size
void carReport (string carName[], double carMPG[]);                                                          // Function declaration for carReport, which takes in two arrays, one of type string and one of type double
int main(){                                                                                                  // Main-loop begin
    carReport(carName, carMPG);                                                                              // Call the carReport function and pass in the carName and carMPG arrays
    return 0; }                                                                                              // Potential return code for successful main loop                                                                                                          
void carReport (string carName[], double carMPG[]){                                                          // Function definition for carReport
    for (int i = 0; i < ARRAY_SIZE; i++){                                                                    // Iterate through array based on 'ARRAY_SIZE'
         cout << "Car: " << left << setw(20) << carName[i] << endl;                                          // Output the name of the car at index 'i' with formatting
         cout << setw(10) << "" << "MPG: " << carMPG[i] << endl;                                             // Output MPG of car at index 'i' with formatting                                                                      
        if (carMPG[i] < 30.0){                                                                               // Check the MPG value and provide a comment based on its value; If the MPG value is less than 30...
            cout << setw(10) << "" << "That's a gas guzzler!\n" << endl;}                                      // ...Output that the car is a gas guzzler                                                                                                       
        else if (carMPG[i] >= 30.0){                                                                         // If the MPG value is 30 or greater...
            cout << setw(10) << "" << "That's economical!\n" << endl;}}}                                       // ...Output that the car is economical                                                                                               