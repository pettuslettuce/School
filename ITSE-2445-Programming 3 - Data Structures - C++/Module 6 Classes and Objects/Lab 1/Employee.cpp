/*
Filename: Employee.cpp
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 1\Employee.cpp
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 1; Employee.cpp
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#include "Employee.h"                   // Include the Employee header file which contains the class declaration
#include <string>                       // Include the string library to use string class
#include <iostream>                     // Include the iostream library to use standard input/output streams, like cout
using namespace std;                    // Use the standard namespace to avoid having to use std:: before standard library names

// empty Employee constructor implementation
Employee::Employee() {
    idNumber = 0;
    firstName = "";
    lastName = "";
    department = "";
    position = "";
}   

// populated Employee constructor implementation
Employee::Employee(string fName, string lName, int idNum, string dept, string pos) {
    firstName = fName;
    lastName = lName;
    idNumber = idNum;
    department = dept;
    position = pos;
}

// setters
void Employee::setFirstName(const string& newFirstName) {
    firstName = newFirstName;
}
void Employee::setLastName(const string& newLastName) {
    lastName = newLastName;
}
void Employee::setIdNumber(int newIdNumber) {
    idNumber = newIdNumber;
}
void Employee::setDepartment(const string& newDepartment) {
    department = newDepartment;
}
void Employee::setPosition(const string& newPosition) {
    position = newPosition;
}

// getters
string Employee::getFirstName() const {
    return firstName;
}
string Employee::getLastName() const {
    return lastName;
}
int Employee::getIdNumber() const {
    return idNumber;
}
string Employee::getDepartment() const {
    return department;
}
string Employee::getPosition() const {
    return position;
}

// displayEmployeeInfo function definition to output Employee info
void Employee::displayEmployeeInfo() const {
    cout << "\nEmployee Information: \n";         
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "ID Number: " << idNumber << "\n";
    cout << "Department: " << department << "\n";
    cout << "Position: " << position << "\n";
}
