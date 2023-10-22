//  Person.cpp
//  InheritanceDemo//
//  Created by Kevin Roark on 4/2/23.
//  Person is the Base Class

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

void Person::print() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Email: " << email << "\nPhone: " << phoneNumber << endl;
}

void Person::setName(string pFirst, string pLast)
{
    firstName = pFirst;
    lastName = pLast;
}

void Person::setPhoneNumber(string pPhone)
{
    phoneNumber = pPhone;
}

void Person::setEmail(string pEmail)
{
    email = pEmail;
}

string Person::getFirstName() const
{
    return firstName;
}

string Person::getLastName() const
{
    return lastName;
}

string Person::getPhoneNumber() const
{
    return phoneNumber;
}
string Person::getEmail() const
{
    return email;
}

    //constructor
Person::Person(string pFirst, string pLast, string pPhone, string pEmail)
{
    firstName = pFirst;
    lastName = pLast;
    phoneNumber = pPhone;
    email = pEmail;
}

