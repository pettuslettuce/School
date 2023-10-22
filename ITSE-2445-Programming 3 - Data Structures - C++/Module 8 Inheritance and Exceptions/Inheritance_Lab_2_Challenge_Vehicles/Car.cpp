/*
Filename: Car.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Car.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Car.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Car.h"        // Include the declaration of the Car class
#include <iostream>
using namespace std;
// Using "::" (scope resolution operator) to define the constructor outside the class definition.
// ":" initiates a member initializer list to initialize both base and derived class members.
// Constructor definition
Car::Car(string make, string model, int year, int numOfDoors, bool isElectric)
    : Vehicle(make, model, year) {    // Explicit call to the base class constructor
    this->numOfDoors = numOfDoors;
    this->isElectric = isElectric;
}
// Getters Setters
void Car::setNumOfDoors(int numOfDoors) {
    this->numOfDoors = numOfDoors;
}
void Car::setIsElectric(bool isElectric) {
    this->isElectric = isElectric;
}
int Car::getNumOfDoors() {
    return numOfDoors;
}
bool Car::getIsElectric() {
    return isElectric;
}
// The scope resolution operator (::) is used to define the methods of the Car class.
void Car::display() {
    Vehicle::display();  // Call the display method from the base class
    cout << "Number of Doors: " << numOfDoors << ", Electric: " << (isElectric ? "Yes\n" : "No\n") << endl;
}
