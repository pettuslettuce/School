/*
Filename: Main.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 1\Main.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 1; Employee - Main.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Employee.h"                                  // include Employee header file to access the Employee class definition
#include <iostream>                                    // include iostream header file to use standard input and output streams
using namespace std;                                   // standard namespace to avoid prefixing standard library names with "std::"
int main() {                                           // main loop begin
    Employee employeeOne;                              // create an Employee object using the default constructor
    string firstName, lastName, department, position;  // Declare string variables to store the first name, last name, department, and position entered by the user
    int idNumber;                                      // Declare an integer variable to store the ID number entered by the user
    cout << "Enter employee's first name: ";           // Prompt the user to enter the employee's first name
    cin >> firstName;                                  // Read the first name entered by the user
    employeeOne.setFirstName(firstName);               // Set the first name of the Employee object using the setFirstName method
    cout << "Enter employee's last name: ";            // Prompt the user to enter the employee's last name
    cin >> lastName;                                   // Read the last name entered by the user
    employeeOne.setLastName(lastName);                 // Set the last name of the Employee object using the setLastName method
    cout << "Enter employee's ID number: ";            // Prompt the user to enter the employee's ID number
    cin >> idNumber;                                   // Read the ID number entered by the user
    employeeOne.setIdNumber(idNumber);                 // Set the ID number of the Employee object using the setIdNumber method
    cout << "Enter employee's department: ";           // Prompt the user to enter the employee's department
    cin.ignore();                                      // Ignore the newline character left in the input buffer after reading the ID number
    getline(cin, department);                          // Read the entire line for the department name, allowing spaces to be included
    employeeOne.setDepartment(department);             // Set the department of the Employee object using the setDepartment method
    cout << "Enter employee's position: ";             // Prompt the user to enter the employee's position
    getline(cin, position);                            // Read the entire line for the position name, allowing spaces to be included
    employeeOne.setPosition(position);                 // Set the position of the Employee object using the setPosition method
    employeeOne.displayEmployeeInfo();                 // Call the displayEmployeeInfo method to display the information of the Employee object
    return 0;                                          // Return 0 to indicate that the program executed successfully
}
