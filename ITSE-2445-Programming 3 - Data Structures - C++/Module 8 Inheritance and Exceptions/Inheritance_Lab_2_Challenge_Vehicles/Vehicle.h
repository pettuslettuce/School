/*
Filename: Vehicle.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Vehicle.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Vehicle.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/

#ifndef VEHICLE_H  // Inclusion guard to prevent multiple inclusion of header file
#define VEHICLE_H
#include <string>
using namespace std; 
class Vehicle {     // Declaration of the Vehicle class
protected:          // Protected access specifier: members accessible by derived classes
    string make;    // Member variable to hold the make of the vehicle
    string model;   // Member variable to hold the model of the vehicle
    int year;       // Member variable to hold the manufacture year of the vehicle
public:             // Public access specifier: members accessible from outside the class
    Vehicle(string make, string model, int year);  // Constructor declaration: initializes member variables
    //Getters Setters
    void setMake(string make);
    void setModel(string model);
    void setYear(int year);
    string getMake();
    string getModel();
    int getYear();
    // Virtual method declaration: allows overriding in derived classes
    virtual void display();
};
#endif // VEHICLE_H  // End of inclusion guard
