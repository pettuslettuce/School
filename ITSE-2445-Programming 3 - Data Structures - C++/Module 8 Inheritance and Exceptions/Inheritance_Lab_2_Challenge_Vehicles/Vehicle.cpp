/*
Filename: Vehicle.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Vehicle.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Vehicle.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Vehicle.h"  // Include the declaration of the Vehicle class
#include <iostream> 
using namespace std; 

// Using "::" (scope resolution operator) to define the constructor outside the class definition.
// ":" initiates a member initializer list to initialize both base and derived class members.

// Constructor definition
Vehicle::Vehicle(string make, string model, int year) {
    this->make = make;
    this->model = model;
    this->year = year;
}
//Getters and Setters
// The scope resolution operator (::) is used to define the methods of the Vehicle class.
// 'this' pointer used to access the member variable
void Vehicle::setMake(string make) {
    this->make = make;  
}
void Vehicle::setModel(string model) {
    this->model = model;
}
void Vehicle::setYear(int year) {
    this->year = year;
}
string Vehicle::getMake() {
    return make;
}
string Vehicle::getModel() {
    return model;
}
int Vehicle::getYear() {
    return year;
}
void Vehicle::display() {
    cout << "Vehicle: " << make << " " << model << ", Year: " << year << endl;  // Output to console
}
