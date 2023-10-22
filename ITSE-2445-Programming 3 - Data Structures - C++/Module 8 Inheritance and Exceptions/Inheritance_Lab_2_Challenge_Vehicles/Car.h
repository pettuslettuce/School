/*
Filename: Car.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Car.h
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Car.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef CAR_H  // Inclusion guard
#define CAR_H
#include "Vehicle.h"  // Include the base class header file
using namespace std;
// Declaration of the Car class, which inherits from Vehicle
// The colon (:) is used here to indicate inheritance from the Vehicle class.
class Car : public Vehicle {  
    int numOfDoors;  // Member variable to hold the number of doors
    bool isElectric;  // Member variable to indicate whether the car is electric

public:
    Car(string make, string model, int year, int numOfDoors, bool isElectric);
    
    // Getters Setters
    int getNumOfDoors();
    bool getIsElectric();
    void setNumOfDoors(int numOfDoors);
    void setIsElectric(bool isElectric);

    void display() override;
};
#endif // CAR_H  // End of inclusion guard
