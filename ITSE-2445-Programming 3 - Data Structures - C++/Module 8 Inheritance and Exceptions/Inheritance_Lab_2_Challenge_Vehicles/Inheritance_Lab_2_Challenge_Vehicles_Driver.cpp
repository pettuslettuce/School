/*
Filename: Vehicle_Driver.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 8 Inheritance and Exceptions\Inheritance_Lab_2_Challenge_Vehicles\Vehicle_Driver.cpp
Author: Andrew Pettus
Date Created: September 30, 2023
Date Modified:September 30, 2023
Description: Module 8 Inheritance and Exceptions; Vehicle_Driver.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Vehicle.h"                    // Include the base class header file
#include "Car.h"                        // Include the Car class header file
#include "Motorcycle.h"                 // Include the Motorcycle class header file
#include <vector>                       // Include the vector library
using namespace std;                    
int main() {
    vector<Vehicle*> vehicles;          // Create a vector of Vehicle pointers
    // Create objects of the Car and Motorcycle classes and add them to the vector
    vehicles.push_back(new Car("Toyota", "Corolla", 2020, 4, false));
    vehicles.push_back(new Motorcycle("Honda", "Rebel", 2019, "500cc", false));
    vehicles.push_back(new Car("Subaru", "Outback", 2021, 5, false));
    for (Vehicle* vehicle : vehicles) { // Loop through the vector and call the display() method for each object
        vehicle->display();             // Polymorphism in action: the correct display() method is called for each object
    }
    for (Vehicle* vehicle : vehicles) { // Clean up: delete the dynamically allocated objects to prevent memory leaks
        delete vehicle;
    }
    return 0;                           // Indicate successful execution
}
