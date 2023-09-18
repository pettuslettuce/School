#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    string firstName;
    string lastName;
    int IDNumber;
    string Department;
    string Position;
    cout << "Please enter your First Name: ";
    cin >> firstName;
    cout << "Please enter your Last Name: ";
    cin >> lastName;
    cout << "Please enter your 6-digit ID: ";
    cin >> IDNumber;
    cout << "Please enter your Department: ";
    cin >> Department;
    cout << "Please enter your Position: ";
    cin >> Position;
    Employee Person(firstName, lastName, IDNumber, Department, Position);
    Person.print();
    cout << endl;
    return 0;
}