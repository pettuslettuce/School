/*
Filename: Employee.h
Filepath: ...\ITSE-2445-Programming 3 - Data Structures - C++\Module 6 Classes and Objects\Lab 1\Employee.h
Author: Andrew Pettus
Date Created: September 17, 2023
Date Modified:September 17, 2023
Description: Module 6 Lab 1; Employee.h
License: NLR
--------------------------------------------------------------------------------------------------------------------------
*/
#ifndef EMPLOYEE_H      // if not defined...
#define EMPLOYEE_H      // define header guard that prevents the header file from being included multiple times in a single translation unit
#include <string>       // string library which contains the definition for the string class
using namespace std;    // use names from the standard library without qualifying them with "std::"
#endif                  // ends the section of code protected by the header guard

class Employee {        // defining a new class called "Employee"

    // public access specifier; members under this specifier are accessible from outside the class and can be used by other parts of the program
    public:                 
        // default constructor declaration. Creates an Employee object with uninitialized member variables.
        Employee();         
        // populated constructor declaration. Creates an Employee object with specified values for member variables.
        Employee(string firstName, string lastName, int idNumber, string department, string position);    
        // setters
        void setFirstName(const string& firstName);     // setter for the "firstName" member variable; const to prevent changes to and to avoid copying the string
        void setLastName(const string& lastName);       // setter for the "lastName" member variable
        void setIdNumber(int idNumber);                 // setter for the "idNumber" member variable
        void setDepartment(const string& department);   // setter for the "department" member variable
        void setPosition(const string& position);       // setter for the "position" member variable
        // getters
        string getFirstName() const;                    // getter for the "firstName" member variable; const indicates that it does not modify any class attributes
        string getLastName() const;                     // getter for the "lastName" member variable
        int getIdNumber() const;                        // getter for the "idNumber" member variabl
        string getDepartment() const;                   // getter for the "department" member variable
        string getPosition() const;                     // getter for the "position" member variable
        
        // function to display information about an Employee object
        void displayEmployeeInfo() const;               
    
    // private access specifier; members under this specifier are not accessible directly from outside the class, helping in encapsulating and protecting the class data
    private:                                           
        string firstName;                               // private member variable to hold the first name of an employee
        string lastName;                                // private member variable to hold the last name of an employee
        int idNumber;                                   // private member variable to hold the ID number of an employee
        string department;                              // private member variable to hold the department of an employee
        string position;                                // private member variable to hold the position of an employee
};
