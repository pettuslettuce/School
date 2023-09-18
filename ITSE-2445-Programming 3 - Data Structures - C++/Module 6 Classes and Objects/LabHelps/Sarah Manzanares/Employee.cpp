#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;
void Employee::print() const
{
    cout << firstName<< " " << lastName << endl;
    cout << IDNumber << endl;
    cout << Department << endl;
    cout << Position << endl;
}
void Employee::setInfo(string first, string last, int ID, string department, string position)
{
    firstName = first;
    lastName = last;
    IDNumber = ID;
    Department = department;
    Position = position;
}
void Employee::setLastName(string last)
{
    lastName = last;
}
void Employee::setIDNumber(int ID)
{
    IDNumber = ID;
}
void Employee::setDepartment(string department)
{
    Department = department;
}
void Employee::setPosition(string position)
{
    Position = position;
}
void Employee::setFirstName(string first)
{
    firstName = first;
}
int Employee::getIDNumber() const
{
    return IDNumber;
}
// Define the member function "getLastName" that returns the last name of a person
string Employee::getLastName() const
{
    return lastName;
}
string Employee::getDepartment() const
{
    return Department;
}
string Employee::getPosition() const
{
    return Position;
}
string Employee::getFirstName() const
{
    return firstName;
}
Employee::Employee(string first, string last, int ID, string department, string position)
{
    firstName = first;
    lastName = last;
    IDNumber = ID;
    Department = department;
    Position = position;
}