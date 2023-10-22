//  Student.cpp
//  InheritanceDemo
//  Created by Kevin Roark on 4/2/23.

#include <iostream>
#include "Student.h"

Student::Student(string pFirstName, string pLastName, string pEmail, string pPhone, double pGPA, string pMajor):Person(pFirstName, pLastName, pEmail, pPhone)
{
    gpa = pGPA;
    major = pMajor;
    
}

//getters
double Student::getGPA() const
{
    return gpa;
}

string Student::getMajor() const
{
    return major;
}

//setters
void Student::setGPA(double pGPA)
{
    gpa = pGPA;
}
void Student::setMajor(string pMajor)
{
    major = pMajor;
}

//Print function
void Student::PrintStudentInfo()
{
    print(); // this comes from the base class Person
    cout << "GPA: " << getGPA() << endl;
    cout << "Major: " << getMajor() << endl;
}
