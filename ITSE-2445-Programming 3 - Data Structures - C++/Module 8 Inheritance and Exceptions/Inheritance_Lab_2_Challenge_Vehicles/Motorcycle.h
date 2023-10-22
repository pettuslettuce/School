/*
Filename: Motorcycle.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Motorcycle.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Motorcycle.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef MOTORCYCLE_H  // Inclusion guard
#define MOTORCYCLE_H
#include "Vehicle.h"  // Include the base class header file
using namespace std;  
class Motorcycle : public Vehicle {  // Inheritance from the Vehicle class is indicated by the colon (:)
    string engineSize;              // Member variable to hold the engine size
    bool hasSidecar;                // Member variable to indicate whether the motorcycle has a sidecar

public:
    Motorcycle(string make, string model, int year, string engineSize, bool hasSidecar);
    
    //Getters Setters
    void setEngineSize(string engineSize);
    void setHasSidecar(bool hasSidecar);
    string getEngineSize();
    bool getHasSidecar();
    
    void display() override;
};

#endif // MOTORCYCLE_H  // End of inclusion guard
