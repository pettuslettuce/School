//  Person.cpp
//  Created by Kevin Roark on 11/13/22.
// This is a C++ source file that defines a class called "Person".
// The class has member functions to manipulate a person's first, middle, and last name.

// Include necessary header files
#include <iostream> // Input/output operations
#include <string>   // String operations
#include "Person.h" // User-defined header file for the Person class

// Use the "std" namespace to avoid writing "std::" before each standard library function
using namespace std;

// Define the member function "print" that prints the first, middle, and last name of a person
void Person::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}
// Define the member function "setName" that sets the first, middle, and last name of a person
void Person::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}
// Define the member function "setLastName" that sets the last name of a person
void Person::setLastName(string last)
{
    lastName = last;
}
// Define the member function "setFirstName" that sets the first name of a person
void Person::setFirstName(string first)
{
    firstName = first;
}
// Define the member function "setMiddleName" that sets the middle name of a person
void Person::setMiddleName(string middle)
{
    middleName = middle;
}
// Define the member function "getFirstName" that returns the first name of a person
string Person::getFirstName() const
{
    return firstName;
}
// Define the member function "getMiddleName" that returns the middle name of a person
string Person::getMiddleName() const
{
    return middleName;
}
// Define the member function "getLastName" that returns the last name of a person
string Person::getLastName() const
{
    return lastName;
}
// Define the constructor function that initializes the first, middle, and last name of a person using provided parameters
Person::Person(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}