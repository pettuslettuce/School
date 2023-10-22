/*
Filename: Motorcycle.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Motorcycle.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Motorcycle.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Motorcycle.h"  // Include the declaration of the Motorcycle class
#include <iostream> 
using namespace std; 
// Using "::" (scope resolution operator) to define the constructor outside the class definition.
// ":" initiates a member initializer list to initialize both base and derived class members.
// Constructor definition
Motorcycle::Motorcycle(string make, string model, int year, string engineSize, bool hasSidecar)
    : Vehicle(make, model, year) {    // Explicit call to the base class constructor
    this->engineSize = engineSize;
    this->hasSidecar = hasSidecar;
}
//Getters Setters
// The scope resolution operator (::) is used to define the methods of the Motorcycle class.
// It indicates that these methods belong to the Motorcycle class.
void Motorcycle::setEngineSize(string engineSize) {
    this->engineSize = engineSize;
}
void Motorcycle::setHasSidecar(bool hasSidecar) {
    this->hasSidecar = hasSidecar;
}
string Motorcycle::getEngineSize() {
    return engineSize;
}
bool Motorcycle::getHasSidecar() {
    return hasSidecar;
}
void Motorcycle::display() {
    Vehicle::display();  // Call the display method from the base class
    cout << "Engine Size: " << engineSize << ", Has Sidecar: " << (hasSidecar ? "Yes\n" : "No\n") << endl;
}
